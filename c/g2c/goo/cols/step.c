/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/step */

EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
DEF(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
DEF(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmagYLE,"goo/mag","<=");
DEF(YgooScolsSstepYPfirstQ_setter,"goo/cols/step","%first?-setter");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
DEF(YgooScolsSstepYLeach_enumG,"goo/cols/step","<each-enum>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
DEF(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Ynot,"goo/boot","not");
DEF(YgooScolsSstepYeach_fun,"goo/cols/step","each-fun");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YgooScolsSstepYstep_then,"goo/cols/step","step-then");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(Yerror,"goo/boot","error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
DEF(YgooScolsSstepYstep_first_setter,"goo/cols/step","step-first-setter");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yhead,"goo/boot","head");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSmathYN,"goo/math","~");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YtT,"goo/boot","t*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YgooScolsSstepYeach_fun_setter,"goo/cols/step","each-fun-setter");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ylst,"goo/boot","lst");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLintG,"goo/boot","<int>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YgooScolsSstepYstep_then_setter,"goo/cols/step","step-then-setter");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathYB,"goo/math","&");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YgooScolsSstepYPdat_setter,"goo/cols/step","%dat-setter");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLlogG,"goo/boot","<log>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLanyG,"goo/boot","<any>");
DEF(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YgooScolsSstepYLstep_enumG,"goo/cols/step","<step-enum>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ytup,"goo/boot","tup");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOlst,"goo/boot","@lst");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(YgooScolsSstepYstep_first,"goo/cols/step","step-first");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ynew,"goo/boot","new");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YgooScolsSstepYPdat,"goo/cols/step","%dat");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYEE,"goo/macros","==");
DEF(YgooScolsSstepYPfirstQ,"goo/cols/step","%first?");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYA,"goo/math","+");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_10);
DEFLIT(lit_23);
DEFLIT(lit_1);
DEFLIT(lit_5);
DEFLIT(lit_24);
DEFLIT(lit_12);
DEFLIT(lit_20);
DEFLIT(lit_14);
DEFLIT(lit_2);
DEFLIT(lit_0);
DEFLIT(lit_19);
DEFLIT(lit_3);
DEFLIT(lit_11);
DEFLIT(lit_4);
DEFLIT(lit_26);
DEFLIT(lit_8);
DEFLIT(lit_25);
DEFLIT(lit_22);
DEFLIT(lit_21);
DEFLIT(lit_13);
DEFLIT(lit_15);
DEFLIT(lit_6);
DEFLIT(lit_17);
DEFLIT(lit_9);
DEFLIT(lit_18);
DEFLIT(lit_16);
DEFLIT(lit_7);

/* FUNCTIONS: */

LOCFOR(fun_step_first_0);
LOCFOR(fun_step_first_setter_1);
LOCFOR(fun_step_then_2);
LOCFOR(fun_step_then_setter_3);
LOCFOR(fun_first_then_4);
LOCFOR(fun_Pdat_5);
LOCFOR(fun_Pdat_setter_6);
LOCFOR(fun_PfirstQ_7);
LOCFOR(fun_PfirstQ_setter_8);
LOCFOR(fun_9);
LOCFOR(fun_enum_10);
LOCFOR(fun_finQ_11);
LOCFOR(fun_nxt_12);
LOCFOR(fun_now_13);
LOCFOR(fun_each_fun_14);
LOCFOR(fun_each_fun_setter_15);
LOCFOR(fun_Pdat_16);
LOCFOR(fun_Pdat_setter_17);
LOCFOR(fun_enum_18);
LOCFOR(fun_finQ_19);
LOCFOR(fun_nxt_20);
LOCFOR(fun_now_21);
extern P YgooScolsSstepY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_step_first_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSstepYstep_first));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_step_first_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSstepYstep_first));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_step_then_2) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSstepYstep_then));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_step_then_setter_3) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSstepYstep_then));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_first_then_4) {
  P first_,then_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(first_, 0);
  ARG(then_, 1);
loop:
  T0 = CALL5(1,VARREF(Ynew),VARREF(YgooScolsSstepYLstepG),VARREF(YgooScolsSstepYstep_first),first_,VARREF(YgooScolsSstepYstep_then),then_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_Pdat_5) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSstepYPdat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pdat_setter_6) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSstepYPdat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_PfirstQ_7) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSstepYPfirstQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_PfirstQ_setter_8) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSstepYPfirstQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_9) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_enum_10) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooScolsSstepYLstep_enumG),VARREF(YgooScolsSstepYPdat),x_);
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
  P x_1376F1385;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  x_1376F1385 = e_;
  CALL2(1,VARREF(YgooScolsSstepYPfirstQ_setter),YPfalse,x_1376F1385);
  T0 = x_1376F1385;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_now_13) {
  P e_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSstepYPfirstQ),e_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsSstepYPdat),e_);
    T3 = CALL1(1,VARREF(YgooScolsSstepYstep_first),T4);
    T2 = CALL0(1,T3);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(YgooScolsSstepYPdat),e_);
    T6 = CALL1(1,VARREF(YgooScolsSstepYstep_then),T7);
    T5 = CALL0(1,T6);
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_each_fun_14) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSstepYeach_fun));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_each_fun_setter_15) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSstepYeach_fun));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pdat_16) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSstepYPdat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pdat_setter_17) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSstepYPdat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_enum_18) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooScolsSstepYLeach_enumG),VARREF(YgooScolsSstepYPdat),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_finQ_19) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_nxt_20) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(e_);
}

FUNCODEDEF(fun_now_21) {
  P e_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsSstepYPdat),e_);
  T1 = CALL1(1,VARREF(YgooScolsSstepYeach_fun),T2);
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooScolsSstepY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"<step>");
  T1 = (P)YPpair(VARREF(YLseqG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YgooScolsSstepYLstepG,T0);
  lit_1 = YPPsym((P)"first-then");
  lit_2 = YPPsym((P)"first");
  lit_3 = YPPsym((P)"then");
  T3 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_3)),YPPlist(2,VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_1),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSstepYfirst_then,T2);
  lit_4 = YPPsym((P)"<each>");
  T5 = (P)YPpair(VARREF(YLseqG),Ynil);
  T4 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_4),T5);
  VARSET(YgooScolsSstepYLeachG,T4);
  lit_5 = YPPsym((P)"each");
  lit_6 = YPPsym((P)"f");
  T7 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_5),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSstepYeach,T6);
  lit_7 = YPPsym((P)"step-first");
  lit_8 = YPPsym((P)"_x");
  T8 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YgooScolsSstepYLstepG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_step_first_0 = YPmet(FUNCODEREF(fun_step_first_0),LITREF(lit_7),T8,ENVNUL,PNUL,YPfalse);
  T11 = BOUNDP(YgooScolsSstepYstep_first);
  if (T11 != YPfalse) {
    T10 = VARREF(YgooScolsSstepYstep_first);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_step_first_0;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T12);
  VARSET(YgooScolsSstepYstep_first,T9);
  lit_9 = YPPsym((P)"step-first-setter");
  lit_10 = YPPsym((P)"_z");
  T13 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YLfunG),VARREF(YgooScolsSstepYLstepG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_step_first_setter_1 = YPmet(FUNCODEREF(fun_step_first_setter_1),LITREF(lit_9),T13,ENVNUL,PNUL,YPfalse);
  T16 = BOUNDP(YgooScolsSstepYstep_first_setter);
  if (T16 != YPfalse) {
    T15 = VARREF(YgooScolsSstepYstep_first_setter);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_step_first_setter_1;
  T14 = XCALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YgooScolsSstepYstep_first_setter,T14);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSstepYLstepG),VARREF(YgooScolsSstepYstep_first),VARREF(YgooScolsSstepYstep_first_setter),VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_11 = YPPsym((P)"step-then");
  T18 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YgooScolsSstepYLstepG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_step_then_2 = YPmet(FUNCODEREF(fun_step_then_2),LITREF(lit_11),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YgooScolsSstepYstep_then);
  if (T21 != YPfalse) {
    T20 = VARREF(YgooScolsSstepYstep_then);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_step_then_2;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YgooScolsSstepYstep_then,T19);
  lit_12 = YPPsym((P)"step-then-setter");
  T23 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YLfunG),VARREF(YgooScolsSstepYLstepG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_step_then_setter_3 = YPmet(FUNCODEREF(fun_step_then_setter_3),LITREF(lit_12),T23,ENVNUL,PNUL,YPfalse);
  T26 = BOUNDP(YgooScolsSstepYstep_then_setter);
  if (T26 != YPfalse) {
    T25 = VARREF(YgooScolsSstepYstep_then_setter);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_step_then_setter_3;
  T24 = XCALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(YgooScolsSstepYstep_then_setter,T24);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSstepYLstepG),VARREF(YgooScolsSstepYstep_then),VARREF(YgooScolsSstepYstep_then_setter),VARREF(YLfunG),VARREF(YPprop_unbound_error));
  T28 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_3)),YPPlist(2,VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YgooScolsSstepYLstepG),Ynil);
  fun_first_then_4 = YPmet(FUNCODEREF(fun_first_then_4),LITREF(lit_1),T28,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YgooScolsSstepYfirst_then);
  if (T31 != YPfalse) {
    T30 = VARREF(YgooScolsSstepYfirst_then);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_first_then_4;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YgooScolsSstepYfirst_then,T29);
  lit_13 = YPPsym((P)"<step-enum>");
  T34 = (P)YPpair(VARREF(YgooScolsScolYLenumG),Ynil);
  T33 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_13),T34);
  VARSET(YgooScolsSstepYLstep_enumG,T33);
  lit_14 = YPPsym((P)"%dat");
  T35 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YgooScolsSstepYLstep_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pdat_5 = YPmet(FUNCODEREF(fun_Pdat_5),LITREF(lit_14),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YgooScolsSstepYPdat);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooScolsSstepYPdat);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_Pdat_5;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YgooScolsSstepYPdat,T36);
  lit_15 = YPPsym((P)"%dat-setter");
  T40 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YgooScolsSstepYLstepG),VARREF(YgooScolsSstepYLstep_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pdat_setter_6 = YPmet(FUNCODEREF(fun_Pdat_setter_6),LITREF(lit_15),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YgooScolsSstepYPdat_setter);
  if (T43 != YPfalse) {
    T42 = VARREF(YgooScolsSstepYPdat_setter);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_Pdat_setter_6;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YgooScolsSstepYPdat_setter,T41);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSstepYLstep_enumG),VARREF(YgooScolsSstepYPdat),VARREF(YgooScolsSstepYPdat_setter),VARREF(YgooScolsSstepYLstepG),VARREF(YPprop_unbound_error));
  lit_16 = YPPsym((P)"%first?");
  T45 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YgooScolsSstepYLstep_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_PfirstQ_7 = YPmet(FUNCODEREF(fun_PfirstQ_7),LITREF(lit_16),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YgooScolsSstepYPfirstQ);
  if (T48 != YPfalse) {
    T47 = VARREF(YgooScolsSstepYPfirstQ);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_PfirstQ_7;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YgooScolsSstepYPfirstQ,T46);
  lit_17 = YPPsym((P)"%first?-setter");
  T50 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YLlogG),VARREF(YgooScolsSstepYLstep_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_PfirstQ_setter_8 = YPmet(FUNCODEREF(fun_PfirstQ_setter_8),LITREF(lit_17),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YgooScolsSstepYPfirstQ_setter);
  if (T53 != YPfalse) {
    T52 = VARREF(YgooScolsSstepYPfirstQ_setter);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_PfirstQ_setter_8;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YgooScolsSstepYPfirstQ_setter,T51);
  T55 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T55,ENVNUL,PNUL,YPfalse);
  T56 = fun_9;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSstepYLstep_enumG),VARREF(YgooScolsSstepYPfirstQ),VARREF(YgooScolsSstepYPfirstQ_setter),VARREF(YLlogG),T56);
  lit_18 = YPPsym((P)"enum");
  lit_19 = YPPsym((P)"x");
  T57 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YgooScolsSstepYLstepG)),YPfalse,YPint((P)1),VARREF(YgooScolsSstepYLstep_enumG),Ynil);
  fun_enum_10 = YPmet(FUNCODEREF(fun_enum_10),LITREF(lit_18),T57,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(YgooScolsScolYenum);
  if (T60 != YPfalse) {
    T59 = VARREF(YgooScolsScolYenum);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_enum_10;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YgooScolsScolYenum,T58);
  lit_20 = YPPsym((P)"fin?");
  lit_21 = YPPsym((P)"e");
  T62 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YgooScolsSstepYLstep_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_11 = YPmet(FUNCODEREF(fun_finQ_11),LITREF(lit_20),T62,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(YgooScolsScolYfinQ);
  if (T65 != YPfalse) {
    T64 = VARREF(YgooScolsScolYfinQ);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_finQ_11;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YgooScolsScolYfinQ,T63);
  lit_22 = YPPsym((P)"nxt");
  T67 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YgooScolsSstepYLstep_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSstepYLstep_enumG),Ynil);
  fun_nxt_12 = YPmet(FUNCODEREF(fun_nxt_12),LITREF(lit_22),T67,ENVNUL,PNUL,YPfalse);
  T70 = BOUNDP(YgooScolsScolYnxt);
  if (T70 != YPfalse) {
    T69 = VARREF(YgooScolsScolYnxt);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_nxt_12;
  T68 = XCALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(YgooScolsScolYnxt,T68);
  lit_23 = YPPsym((P)"now");
  T72 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YgooScolsSstepYLstep_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_13 = YPmet(FUNCODEREF(fun_now_13),LITREF(lit_23),T72,ENVNUL,PNUL,YPfalse);
  T75 = BOUNDP(YgooScolsScolYnow);
  if (T75 != YPfalse) {
    T74 = VARREF(YgooScolsScolYnow);
  } else {
    T74 = YPfalse;
  }
  T76 = fun_now_13;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T76);
  VARSET(YgooScolsScolYnow,T73);
  lit_24 = YPPsym((P)"each-fun");
  T77 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YgooScolsSstepYLeachG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_each_fun_14 = YPmet(FUNCODEREF(fun_each_fun_14),LITREF(lit_24),T77,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(YgooScolsSstepYeach_fun);
  if (T80 != YPfalse) {
    T79 = VARREF(YgooScolsSstepYeach_fun);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_each_fun_14;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YgooScolsSstepYeach_fun,T78);
  lit_25 = YPPsym((P)"each-fun-setter");
  T82 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YLfunG),VARREF(YgooScolsSstepYLeachG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_each_fun_setter_15 = YPmet(FUNCODEREF(fun_each_fun_setter_15),LITREF(lit_25),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YgooScolsSstepYeach_fun_setter);
  if (T85 != YPfalse) {
    T84 = VARREF(YgooScolsSstepYeach_fun_setter);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_each_fun_setter_15;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YgooScolsSstepYeach_fun_setter,T83);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSstepYLeachG),VARREF(YgooScolsSstepYeach_fun),VARREF(YgooScolsSstepYeach_fun_setter),VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_26 = YPPsym((P)"<each-enum>");
  T88 = (P)YPpair(VARREF(YgooScolsScolYLenumG),Ynil);
  T87 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_26),T88);
  VARSET(YgooScolsSstepYLeach_enumG,T87);
  T89 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YgooScolsSstepYLeach_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pdat_16 = YPmet(FUNCODEREF(fun_Pdat_16),LITREF(lit_14),T89,ENVNUL,PNUL,YPfalse);
  T92 = BOUNDP(YgooScolsSstepYPdat);
  if (T92 != YPfalse) {
    T91 = VARREF(YgooScolsSstepYPdat);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_Pdat_16;
  T90 = XCALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YgooScolsSstepYPdat,T90);
  T94 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YgooScolsSstepYLeachG),VARREF(YgooScolsSstepYLeach_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pdat_setter_17 = YPmet(FUNCODEREF(fun_Pdat_setter_17),LITREF(lit_15),T94,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YgooScolsSstepYPdat_setter);
  if (T97 != YPfalse) {
    T96 = VARREF(YgooScolsSstepYPdat_setter);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_Pdat_setter_17;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YgooScolsSstepYPdat_setter,T95);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSstepYLeach_enumG),VARREF(YgooScolsSstepYPdat),VARREF(YgooScolsSstepYPdat_setter),VARREF(YgooScolsSstepYLeachG),VARREF(YPprop_unbound_error));
  T99 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YgooScolsSstepYLeachG)),YPfalse,YPint((P)1),VARREF(YgooScolsSstepYLeach_enumG),Ynil);
  fun_enum_18 = YPmet(FUNCODEREF(fun_enum_18),LITREF(lit_18),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(YgooScolsScolYenum);
  if (T102 != YPfalse) {
    T101 = VARREF(YgooScolsScolYenum);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_enum_18;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YgooScolsScolYenum,T100);
  T104 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YgooScolsSstepYLeach_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_19 = YPmet(FUNCODEREF(fun_finQ_19),LITREF(lit_20),T104,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(YgooScolsScolYfinQ);
  if (T107 != YPfalse) {
    T106 = VARREF(YgooScolsScolYfinQ);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_finQ_19;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YgooScolsScolYfinQ,T105);
  T109 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YgooScolsSstepYLeach_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSstepYLeach_enumG),Ynil);
  fun_nxt_20 = YPmet(FUNCODEREF(fun_nxt_20),LITREF(lit_22),T109,ENVNUL,PNUL,YPfalse);
  T112 = BOUNDP(YgooScolsScolYnxt);
  if (T112 != YPfalse) {
    T111 = VARREF(YgooScolsScolYnxt);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_nxt_20;
  T110 = XCALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(YgooScolsScolYnxt,T110);
  T116 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YgooScolsSstepYLeach_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T115 = fun_now_21 = YPmet(FUNCODEREF(fun_now_21),LITREF(lit_23),T116,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YgooScolsScolYnow);
  if (T120 != YPfalse) {
    T119 = VARREF(YgooScolsScolYnow);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_now_21;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T121);
  T117 = VARSET(YgooScolsScolYnow,T118);
  T114 = T117;
  return T114;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooStypes;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSmath},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsSseq},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"%time", &module_info_gooSboot, "%time"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"sin", &module_info_gooSmath, "sin"},
  {">", &module_info_gooSmag, ">"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {">=", &module_info_gooSmag, ">="},
  {"last", &module_info_gooScolsSseq, "last"},
  {"/", &module_info_gooSmath, "/"},
  {"~=", &module_info_gooSmath, "~="},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"acos", &module_info_gooSmath, "acos"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"@len", &module_info_gooSboot, "@len"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<", &module_info_gooSmag, "<"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"@<", &module_info_gooSboot, "@<"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"=", &module_info_gooSmath, "="},
  {"even?", &module_info_gooSmath, "even?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%im", &module_info_gooSboot, "%im"},
  {"add", &module_info_gooScolsScol, "add"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"when", &module_info_gooSmacros, "when"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"<=", &module_info_gooSmag, "<="},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"until", &module_info_gooSmacros, "until"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"|", &module_info_gooSmath, "|"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"$e", &module_info_gooSmath, "$e"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"round", &module_info_gooSmath, "round"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"not", &module_info_gooSboot, "not"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"def", &module_info_gooSboot, "def"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"*", &module_info_gooSmath, "*"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"div", &module_info_gooSmath, "div"},
  {"<<", &module_info_gooSmath, "<<"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"for", &module_info_gooSmacros, "for"},
  {"floor", &module_info_gooSmath, "floor"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"log", &module_info_gooSmath, "log"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"seq", &module_info_gooSboot, "seq"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"error", &module_info_gooSboot, "error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"asin", &module_info_gooSmath, "asin"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"dp", &module_info_gooSboot, "dp"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"nul", &module_info_gooSboot, "nul"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"df", &module_info_gooSboot, "df"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"col", &module_info_gooScolsScol, "col"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"dg", &module_info_gooSboot, "dg"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"dm", &module_info_gooSboot, "dm"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"while", &module_info_gooSmacros, "while"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"if", &module_info_gooSboot, "if"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"1-", &module_info_gooSmath, "1-"},
  {"dc", &module_info_gooSboot, "dc"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%put", &module_info_gooSboot, "%put"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"head", &module_info_gooSboot, "head"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"tan", &module_info_gooSmath, "tan"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"pow", &module_info_gooSmath, "pow"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"mod", &module_info_gooSmath, "mod"},
  {"ct", &module_info_gooSboot, "ct"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"~", &module_info_gooSmath, "~"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"let", &module_info_gooSboot, "let"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"into", &module_info_gooScolsScol, "into"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"logn", &module_info_gooSmath, "logn"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"set", &module_info_gooSboot, "set"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"try", &module_info_gooSboot, "try"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"~==", &module_info_gooSmath, "~=="},
  {"renew", &module_info_gooSmacros, "renew"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"-", &module_info_gooSmath, "-"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"as", &module_info_gooStypes, "as"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"dss", &module_info_gooSboot, "dss"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"use", &module_info_gooSboot, "use"},
  {"%get", &module_info_gooSboot, "%get"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"&", &module_info_gooSmath, "&"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"map", &module_info_gooSmacros, "map"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"@==", &module_info_gooSboot, "@=="},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"cos", &module_info_gooSmath, "cos"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"op", &module_info_gooSmacros, "op"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%su", &module_info_gooSboot, "%su"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {">>", &module_info_gooSmath, ">>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"1+", &module_info_gooSmath, "1+"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"round/", &module_info_gooSmath, "round/"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"fin", &module_info_gooSboot, "fin"},
  {"loc", &module_info_gooSboot, "loc"},
  {"max", &module_info_gooSmag, "max"},
  {"dl", &module_info_gooSboot, "dl"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"tup", &module_info_gooSboot, "tup"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"export", &module_info_gooSboot, "export"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len", &module_info_gooStypes, "len"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"or", &module_info_gooSmacros, "or"},
  {"new", &module_info_gooSboot, "new"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"min", &module_info_gooSmag, "min"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"^", &module_info_gooSmath, "^"},
  {"@+", &module_info_gooSboot, "@+"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"==", &module_info_gooSmacros, "=="},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"del", &module_info_gooScolsScol, "del"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"match", &module_info_gooSmacros, "match"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"fun", &module_info_gooSboot, "fun"},
  {"now", &module_info_gooScolsScol, "now"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"case", &module_info_gooSmacros, "case"},
  {"do", &module_info_gooSmacros, "do"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"+", &module_info_gooSmath, "+"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"each", CVAR, &YgooScolsSstepYeach},
  {"<step>", CVAR, &YgooScolsSstepYLstepG},
  {"%first?-setter", CVAR, &YgooScolsSstepYPfirstQ_setter},
  {"<each-enum>", CVAR, &YgooScolsSstepYLeach_enumG},
  {"first-then", CVAR, &YgooScolsSstepYfirst_then},
  {"each-fun", CVAR, &YgooScolsSstepYeach_fun},
  {"step-then", CVAR, &YgooScolsSstepYstep_then},
  {"step-first-setter", CVAR, &YgooScolsSstepYstep_first_setter},
  {"each-fun-setter", CVAR, &YgooScolsSstepYeach_fun_setter},
  {"---main-0---", PVAR, NULL},
  {"step-then-setter", CVAR, &YgooScolsSstepYstep_then_setter},
  {"%dat-setter", CVAR, &YgooScolsSstepYPdat_setter},
  {"<each>", CVAR, &YgooScolsSstepYLeachG},
  {"<step-enum>", CVAR, &YgooScolsSstepYLstep_enumG},
  {"step-first", CVAR, &YgooScolsSstepYstep_first},
  {"%dat", CVAR, &YgooScolsSstepYPdat},
  {"%first?", CVAR, &YgooScolsSstepYPfirstQ},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"each", "each"},
  {"<step>", "<step>"},
  {"first-then", "first-then"},
  {"<each>", "<each>"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSstep;
MODULE_INFO module_info_gooScolsSstep = {
  "goo/cols/step",
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
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsSseq (void);

/* EXPRESSION: */

extern void load_module_gooScolsSstep (void);

void load_module_gooScolsSstep (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSmath();
  load_module_gooScolsScol();
  load_module_gooScolsSseq();

  (P)YgooScolsSstepY___main_0___();

}

/* END OF GENERATED CODE. */
