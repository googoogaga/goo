/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/zip */

EXT(YgooSmathYzeroQ,"goo/math","zero?");
DEF(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
DEF(YgooScolsSzipYPenums,"goo/cols/zip","%enums");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ynew,"goo/boot","new");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmathYC,"goo/math","^");
DEF(YgooScolsSzipYzip_states_setter,"goo/cols/zip","zip-states-setter");
EXT(YLstrG,"goo/boot","<str>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YPprop,"goo/boot","%prop");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
DEF(YgooScolsSzipYzip_states,"goo/cols/zip","zip-states");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Yhead,"goo/boot","head");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YtT,"goo/boot","t*");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
DEF(YgooScolsSzipYzip_dat_setter,"goo/cols/zip","zip-dat-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYT,"goo/math","*");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YLprim_intG,"goo/boot","<prim-int>");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLintG,"goo/boot","<int>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYround,"goo/math","round");
EXT(YLnumG,"goo/boot","<num>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(YgooScolsSzipYLzip_enumG,"goo/cols/zip","<zip-enum>");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLunionG,"goo/boot","<union>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YgooScolsSzipYzip_dat,"goo/cols/zip","zip-dat");
EXT(YgooSmathYrem,"goo/math","rem");
DEF(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ylst,"goo/boot","lst");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmacrosYcat,"goo/macros","cat");
DEF(YgooScolsSzipYLzip_stateG,"goo/cols/zip","<zip-state>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
DEF(YgooScolsSzipYPenums_setter,"goo/cols/zip","%enums-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
DEF(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_9);
DEFLIT(lit_24);
DEFLIT(lit_15);
DEFLIT(lit_16);
DEFLIT(lit_26);
DEFLIT(lit_12);
DEFLIT(lit_6);
DEFLIT(lit_7);
DEFLIT(lit_20);
DEFLIT(lit_0);
DEFLIT(lit_17);
DEFLIT(lit_18);
DEFLIT(lit_19);
DEFLIT(lit_2);
DEFLIT(lit_5);
DEFLIT(lit_21);
DEFLIT(lit_13);
DEFLIT(lit_22);
DEFLIT(lit_25);
DEFLIT(lit_8);
DEFLIT(lit_11);
DEFLIT(lit_23);
DEFLIT(lit_10);
DEFLIT(lit_1);
DEFLIT(lit_3);
DEFLIT(lit_14);
DEFLIT(lit_4);

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
LOCFOR(fun_x_1385_13);
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
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_9));
}

FUNCODEDEF(fun_zip_3) {
  P e_;
  P T0,T1;
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
  P T0,T1;
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
  P T0,T1;
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
  P x_1382F1402;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  x_1382F1402 = e_;
  T2 = CALL1(1,VARREF(YgooScolsSzipYPenums),e_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScolsScolYnxt),T2);
  CALL2(1,VARREF(YgooScolsSzipYPenums_setter),T1,x_1382F1402);
  T0 = x_1382F1402;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_now_12) {
  P e_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSzipYPenums),e_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScolsScolYnow),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1385_13) {
  P x_1384_,x_1383_;
  P veF1405;
  P eeF1404;
  P tmpF1403;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(x_1384_, 0);
  ARG(x_1383_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1384_);
  tmpF1403 = T3;
  if (tmpF1403 != YPfalse) {
    T4 = tmpF1403;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1383_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1384_);
    eeF1404 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1383_);
    veF1405 = T9;
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),veF1405);
    CALL2(1,VARREF(YgooScolsScolYnow_setter),T10,eeF1404);
    T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1384_);
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1383_);
    a1 = T12;
    a2 = T13;
    x_1384_ = a1;
    x_1383_ = a2;
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
  P x_1385F1406;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(e_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1385_13,1);
  x_1385F1406 = T1;
  FUNINIT(x_1385F1406, 1,x_1385F1406);
  T4 = CALL1(1,VARREF(YgooScolsSzipYPenums),e_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),v_);
  T2 = CALL2(0,x_1385F1406,T3,T5);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_key_15) {
  P e_;
  P T0,T1;
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
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"<zip>");
  T1 = (P)YPpair(VARREF(YLseqG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
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
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T10);
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
  T12 = XCALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YgooScolsSzipYzip_dat_setter,T12);
  lit_9 = XCALLN(1, Ytup, 0);
  T16 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T16,ENVNUL,PNUL,YPfalse);
  T17 = fun_2;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSzipYLzipG),VARREF(YgooScolsSzipYzip_dat),VARREF(YgooScolsSzipYzip_dat_setter),VARREF(YLtupG),T17);
  T18 = YPsig(YPPlist(1,LITREF(lit_2)),Ynil,YPtrue,YPint((P)0),VARREF(YgooScolsSzipYLzipG),Ynil);
  fun_zip_3 = YPmet(FUNCODEREF(fun_zip_3),LITREF(lit_1),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YgooScolsSzipYzip);
  if (T21 != YPfalse) {
    T20 = VARREF(YgooScolsSzipYzip);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_zip_3;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T22);
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
  T24 = XCALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(YgooScolsSzipYunzip,T24);
  lit_10 = YPPsym((P)"<zip-state>");
  T29 = (P)YPpair(VARREF(YLanyG),Ynil);
  T28 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_10),T29);
  VARSET(YgooScolsSzipYLzip_stateG,T28);
  lit_11 = YPPsym((P)"zip-states");
  T30 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YgooScolsSzipYLzip_stateG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_zip_states_5 = YPmet(FUNCODEREF(fun_zip_states_5),LITREF(lit_11),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YgooScolsSzipYzip_states);
  if (T33 != YPfalse) {
    T32 = VARREF(YgooScolsSzipYzip_states);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_zip_states_5;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YgooScolsSzipYzip_states,T31);
  lit_12 = YPPsym((P)"zip-states-setter");
  T35 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_6)),YPPlist(2,VARREF(YLtupG),VARREF(YgooScolsSzipYLzip_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_zip_states_setter_6 = YPmet(FUNCODEREF(fun_zip_states_setter_6),LITREF(lit_12),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YgooScolsSzipYzip_states_setter);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooScolsSzipYzip_states_setter);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_zip_states_setter_6;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YgooScolsSzipYzip_states_setter,T36);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSzipYLzip_stateG),VARREF(YgooScolsSzipYzip_states),VARREF(YgooScolsSzipYzip_states_setter),VARREF(YLtupG),VARREF(YPprop_unbound_error));
  lit_13 = YPPsym((P)"<zip-enum>");
  T41 = (P)YPpair(VARREF(YgooScolsScolYLenumG),Ynil);
  T40 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_13),T41);
  VARSET(YgooScolsSzipYLzip_enumG,T40);
  lit_14 = YPPsym((P)"%enums");
  T42 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YgooScolsSzipYLzip_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Penums_7 = YPmet(FUNCODEREF(fun_Penums_7),LITREF(lit_14),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YgooScolsSzipYPenums);
  if (T45 != YPfalse) {
    T44 = VARREF(YgooScolsSzipYPenums);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_Penums_7;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YgooScolsSzipYPenums,T43);
  lit_15 = YPPsym((P)"%enums-setter");
  T47 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_6)),YPPlist(2,VARREF(YgooScolsSzipYLzipG),VARREF(YgooScolsSzipYLzip_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Penums_setter_8 = YPmet(FUNCODEREF(fun_Penums_setter_8),LITREF(lit_15),T47,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(YgooScolsSzipYPenums_setter);
  if (T50 != YPfalse) {
    T49 = VARREF(YgooScolsSzipYPenums_setter);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_Penums_setter_8;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YgooScolsSzipYPenums_setter,T48);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSzipYLzip_enumG),VARREF(YgooScolsSzipYPenums),VARREF(YgooScolsSzipYPenums_setter),VARREF(YgooScolsSzipYLzipG),VARREF(YPprop_unbound_error));
  lit_16 = YPPsym((P)"enum");
  lit_17 = YPPsym((P)"x");
  T52 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YgooScolsSzipYLzipG)),YPfalse,YPint((P)1),VARREF(YgooScolsSzipYLzip_enumG),Ynil);
  fun_enum_9 = YPmet(FUNCODEREF(fun_enum_9),LITREF(lit_16),T52,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YgooScolsScolYenum);
  if (T55 != YPfalse) {
    T54 = VARREF(YgooScolsScolYenum);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_enum_9;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T56);
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
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T61);
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
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T66);
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
  T68 = XCALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(YgooScolsScolYnow,T68);
  lit_21 = YPPsym((P)"now-setter");
  lit_22 = YPPsym((P)"v");
  lit_23 = YPPsym((P)"x-1385");
  lit_24 = YPPsym((P)"x-1384");
  lit_25 = YPPsym((P)"x-1383");
  T73 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_25)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1385_13 = YPmet(FUNCODEREF(fun_x_1385_13),LITREF(lit_23),T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_2)),YPPlist(2,VARREF(YgooScolsSzipYLzipG),VARREF(YgooScolsSzipYLzip_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_setter_14 = YPmet(FUNCODEREF(fun_now_setter_14),LITREF(lit_21),T72,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(YgooScolsScolYnow_setter);
  if (T76 != YPfalse) {
    T75 = VARREF(YgooScolsScolYnow_setter);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_now_setter_14;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T77);
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
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T85);
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
  {"zero?", &module_info_gooSmath, "zero?"},
  {"fin", &module_info_gooSboot, "fin"},
  {"app", &module_info_gooSmacros, "app"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"round/", &module_info_gooSmath, "round/"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"export", &module_info_gooSboot, "export"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"tup", &module_info_gooSboot, "tup"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"or", &module_info_gooSmacros, "or"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"new", &module_info_gooSboot, "new"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"tail", &module_info_gooSboot, "tail"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"acos", &module_info_gooSmath, "acos"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"min", &module_info_gooSmag, "min"},
  {"nul", &module_info_gooSboot, "nul"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"~==", &module_info_gooSmath, "~=="},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"%str", &module_info_gooSboot, "%str"},
  {"items", &module_info_gooScolsScol, "items"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"^", &module_info_gooSmath, "^"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"not", &module_info_gooSboot, "not"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"==", &module_info_gooSmacros, "=="},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"match", &module_info_gooSmacros, "match"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"fun", &module_info_gooSboot, "fun"},
  {"+", &module_info_gooSmath, "+"},
  {"cos", &module_info_gooSmath, "cos"},
  {"now", &module_info_gooScolsScol, "now"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"case", &module_info_gooSmacros, "case"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"mod", &module_info_gooSmath, "mod"},
  {"pair", &module_info_gooSmacros, "pair"},
  {">=", &module_info_gooSmag, ">="},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"~=", &module_info_gooSmath, "~="},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"try", &module_info_gooSboot, "try"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<=", &module_info_gooSmag, "<="},
  {"col", &module_info_gooScolsScol, "col"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"<<", &module_info_gooSmath, "<<"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"when", &module_info_gooSmacros, "when"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"ds", &module_info_gooSboot, "ds"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"until", &module_info_gooSmacros, "until"},
  {"rep", &module_info_gooSboot, "rep"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"|", &module_info_gooSmath, "|"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"dss", &module_info_gooSboot, "dss"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"floor", &module_info_gooSmath, "floor"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"head", &module_info_gooSboot, "head"},
  {"%get", &module_info_gooSboot, "%get"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"loc", &module_info_gooSboot, "loc"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"into", &module_info_gooScolsScol, "into"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"div", &module_info_gooSmath, "div"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"t?", &module_info_gooStypes, "t?"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"abs", &module_info_gooSmath, "abs"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"error", &module_info_gooSboot, "error"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"1+", &module_info_gooSmath, "1+"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"seq", &module_info_gooSboot, "seq"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"quote", &module_info_gooSboot, "quote"},
  {"*", &module_info_gooSmath, "*"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%su", &module_info_gooSboot, "%su"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"df", &module_info_gooSboot, "df"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"dg", &module_info_gooSboot, "dg"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"dm", &module_info_gooSboot, "dm"},
  {"<prim-int>", &module_info_gooSboot, "<prim-int>"},
  {"while", &module_info_gooSmacros, "while"},
  {"dl", &module_info_gooSboot, "dl"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"if", &module_info_gooSboot, "if"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"t=", &module_info_gooStypes, "t="},
  {"dc", &module_info_gooSboot, "dc"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"for", &module_info_gooSmacros, "for"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"~", &module_info_gooSmath, "~"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"round", &module_info_gooSmath, "round"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"@==", &module_info_gooSboot, "@=="},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"map", &module_info_gooSmacros, "map"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"t+", &module_info_gooStypes, "t+"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"find", &module_info_gooScolsScol, "find"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"let", &module_info_gooSboot, "let"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"len", &module_info_gooStypes, "len"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"set", &module_info_gooSboot, "set"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"even?", &module_info_gooSmath, "even?"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"rem", &module_info_gooSmath, "rem"},
  {"logn", &module_info_gooSmath, "logn"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"pow", &module_info_gooSmath, "pow"},
  {"add", &module_info_gooScolsScol, "add"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"atan", &module_info_gooSmath, "atan"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"1-", &module_info_gooSmath, "1-"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"-", &module_info_gooSmath, "-"},
  {"log", &module_info_gooSmath, "log"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"%im", &module_info_gooSboot, "%im"},
  {">>", &module_info_gooSmath, ">>"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"as", &module_info_gooStypes, "as"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"def", &module_info_gooSboot, "def"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"@+", &module_info_gooSboot, "@+"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"&", &module_info_gooSmath, "&"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%time", &module_info_gooSboot, "%time"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"do", &module_info_gooSmacros, "do"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"op", &module_info_gooSmacros, "op"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {">", &module_info_gooSmag, ">"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"@len", &module_info_gooSboot, "@len"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"@<", &module_info_gooSboot, "@<"},
  {"<", &module_info_gooSmag, "<"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"use", &module_info_gooSboot, "use"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"$e", &module_info_gooSmath, "$e"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"/", &module_info_gooSmath, "/"},
  {"=", &module_info_gooSmath, "="},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"max", &module_info_gooSmag, "max"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"zip", CVAR, &YgooScolsSzipYzip},
  {"%enums", CVAR, &YgooScolsSzipYPenums},
  {"zip-states-setter", CVAR, &YgooScolsSzipYzip_states_setter},
  {"zip-states", CVAR, &YgooScolsSzipYzip_states},
  {"zip-dat-setter", CVAR, &YgooScolsSzipYzip_dat_setter},
  {"---main-0---", PVAR, NULL},
  {"<zip-enum>", CVAR, &YgooScolsSzipYLzip_enumG},
  {"zip-dat", CVAR, &YgooScolsSzipYzip_dat},
  {"<zip>", CVAR, &YgooScolsSzipYLzipG},
  {"<zip-state>", CVAR, &YgooScolsSzipYLzip_stateG},
  {"%enums-setter", CVAR, &YgooScolsSzipYPenums_setter},
  {"unzip", CVAR, &YgooScolsSzipYunzip},
  {NULL, NVAR, NULL}
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
