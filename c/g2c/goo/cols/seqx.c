/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/seqx */

EXT(YLoptsG,"goo/boot","<opts>");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
DEF(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yerror,"goo/boot","error");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Ytup,"goo/boot","tup");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YtT,"goo/boot","t*");
DEF(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLcolG,"goo/boot","<col>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
DEF(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yhead,"goo/boot","head");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YLintG,"goo/boot","<int>");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
DEF(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
DEF(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ynot,"goo/boot","not");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLclassG,"goo/boot","<class>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YOlst,"goo/boot","@lst");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
DEF(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Ynew,"goo/boot","new");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_14);
DEFLIT(lit_13);
DEFLIT(lit_1);
DEFLIT(lit_8);
DEFLIT(lit_19);
DEFLIT(lit_32);
DEFLIT(lit_12);
DEFLIT(lit_23);
DEFLIT(lit_29);
DEFLIT(lit_27);
DEFLIT(lit_25);
DEFLIT(lit_10);
DEFLIT(lit_33);
DEFLIT(lit_30);
DEFLIT(lit_7);
DEFLIT(lit_2);
DEFLIT(lit_6);
DEFLIT(lit_5);
DEFLIT(lit_34);
DEFLIT(lit_0);
DEFLIT(lit_15);
DEFLIT(lit_9);
DEFLIT(lit_31);
DEFLIT(lit_24);
DEFLIT(lit_4);
DEFLIT(lit_18);
DEFLIT(lit_16);
DEFLIT(lit_11);
DEFLIT(lit_28);
DEFLIT(lit_35);
DEFLIT(lit_21);
DEFLIT(lit_26);
DEFLIT(lit_17);
DEFLIT(lit_3);
DEFLIT(lit_22);
DEFLIT(lit_20);

/* FUNCTIONS: */

LOCFOR(fun_revX_0);
LOCFOR(fun_catX_1);
LOCFOR(fun_pushX_2);
LOCFOR(fun_popX_3);
LOCFOR(fun_insX_4);
LOCFOR(fun_del_valsX_5);
LOCFOR(fun_del_dupsX_6);
LOCFOR(fun_in_7);
LOCFOR(fun_into_8);
LOCFOR(fun_in_9);
LOCFOR(fun_find_10);
LOCFOR(fun_onto_11);
LOCFOR(fun_skip_12);
LOCFOR(fun_insert_13);
LOCFOR(fun_copy_14);
LOCFOR(fun_sub_setter_15);
LOCFOR(fun_sortX_16);
LOCFOR(fun_sort_byX_17);
LOCFOR(fun_in_18);
LOCFOR(fun_alter_19);
extern P YgooScolsSseqxY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_revX_0) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqYrev),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_catX_1) {
  P x_,more_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmacrosYcat),YPfalse,more_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pushX_2) {
  P l_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooScolsSseqYpush),l_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_popX_3) {
  P l_;
  P T0;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqYpop),l_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_insX_4) {
  P x_,v_,before_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
  ARG(before_, 2);
loop:
  T0 = CALL3(1,VARREF(YgooScolsSseqYins),x_,v_,before_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_del_valsX_5) {
  P x_,v_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooScolsSseqYdel_vals),x_,v_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_del_dupsX_6) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqYdel_dups),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_in_7) {
  P ed_,es_;
  P tmpF1018;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(ed_, 0);
  ARG(es_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),es_);
  tmpF1018 = T2;
  if (tmpF1018 != YPfalse) {
    T3 = tmpF1018;
  } else {
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),ed_);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow),es_);
    CALL2(1,VARREF(YgooScolsScolYnow_setter),T5,ed_);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),ed_);
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),es_);
    a1 = T7;
    a2 = T8;
    ed_ = a1;
    es_ = a2;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_into_8) {
  P dst_,src_;
  P inF1019;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_7,2);
  inF1019 = T1;
  FUNINIT(inF1019, 2,dst_,inF1019);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),src_);
  T2 = CALL2(0,inF1019,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_in_9) {
  P d_,s_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(s_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),s_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T2 = CALL1(1,VARREF(YgooScolsScolYnow),s_);
    CALL2(1,VARREF(YgooScolsScolYnow_setter),T2,d_);
    T4 = CALL1(1,VARREF(YgooScolsScolYnxt),d_);
    T5 = CALL1(1,VARREF(YgooScolsScolYnxt),s_);
    a1 = T4;
    a2 = T5;
    d_ = a1;
    s_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_10) {
  P d_,i_;
  P inF1020;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_in_9,2);
    inF1020 = T3;
    FUNINIT(inF1020, 2,FREEREF(1),inF1020);
    T5 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(2));
    T4 = CALL2(0,inF1020,d_,T5);
    T2 = T4;
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),d_);
    T8 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T7;
    a2 = T8;
    d_ = a1;
    i_ = a2;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_onto_11) {
  P nd_,d_,i_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(nd_, 0);
  ARG(d_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T0 = FREEREF(1);
  } else {
    T2 = CALL1(1,VARREF(YgooScolsScolYnow),d_);
    CALL2(1,VARREF(YgooScolsScolYnow_setter),T2,nd_);
    T4 = CALL1(1,VARREF(YgooScolsScolYnxt),nd_);
    T5 = CALL1(1,VARREF(YgooScolsScolYnxt),d_);
    T6 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T4;
    a2 = T5;
    a3 = T6;
    nd_ = a1;
    d_ = a2;
    i_ = a3;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_skip_12) {
  P d_,i_;
  P ontoF1021;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_onto_11,3);
    ontoF1021 = T3;
    FUNINIT(ontoF1021, 3,FREEREF(1),FREEREF(2),ontoF1021);
    T4 = CALL3(0,ontoF1021,FREEREF(3),d_,FREEREF(0));
    T2 = T4;
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),d_);
    T7 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T6;
    a2 = T7;
    d_ = a1;
    i_ = a2;
    goto loop;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_13) {
  P nd_,s_;
  P skipF1022;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(nd_, 0);
  ARG(s_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),s_);
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_skip_12,5);
    skipF1022 = T3;
    FUNINIT(skipF1022, 5,FREEREF(0),FREEREF(1),FREEREF(2),nd_,skipF1022);
    T4 = CALL2(0,skipF1022,FREEREF(3),FREEREF(4));
    T2 = T4;
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow),s_);
    CALL2(1,VARREF(YgooScolsScolYnow_setter),T5,nd_);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),nd_);
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),s_);
    a1 = T7;
    a2 = T8;
    nd_ = a1;
    s_ = a2;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_copy_14) {
  P nd_,d_,i_;
  P insertF1023;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(nd_, 0);
  ARG(d_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_insert_13,6);
    insertF1023 = T3;
    FUNINIT(insertF1023, 6,FREEREF(1),FREEREF(2),FREEREF(3),d_,FREEREF(0),insertF1023);
    T5 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(4));
    T4 = CALL2(0,insertF1023,nd_,T5);
    T2 = T4;
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYnow),d_);
    CALL2(1,VARREF(YgooScolsScolYnow_setter),T6,nd_);
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),nd_);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),d_);
    T10 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T8;
    a2 = T9;
    a3 = T10;
    nd_ = a1;
    d_ = a2;
    i_ = a3;
    goto loop;
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_setter_15) {
  P src_,dst_,from_,below_;
  P copyF1030;
  P ndstF1029;
  P new_lenF1028;
  P findF1027;
  P del_lenF1026;
  P src_lenF1025;
  P dst_lenF1024;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(src_, 0);
  ARG(dst_, 1);
  ARG(from_, 2);
  ARG(below_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),dst_);
  check_type(T1,VARREF(YLintG));
  dst_lenF1024 = T1;
  T3 = CALL1(1,VARREF(YgooStypesYlen),src_);
  check_type(T3,VARREF(YLintG));
  src_lenF1025 = T3;
  T5 = CALL2(1,VARREF(YgooSmathY_),below_,from_);
  check_type(T5,VARREF(YLintG));
  del_lenF1026 = T5;
  T7 = CALL2(1,VARREF(YgooSmathYE),del_lenF1026,src_lenF1025);
  if (T7 != YPfalse) {
    T9 = FUNSHELL(1,fun_find_10,4);
    findF1027 = T9;
    FUNINIT(findF1027, 4,from_,dst_,src_,findF1027);
    T11 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
    T10 = CALL2(0,findF1027,T11,YPint((P)0));
    T8 = T10;
    T6 = T8;
  } else {
    T14 = CALL2(1,VARREF(YgooSmathY_),dst_lenF1024,del_lenF1026);
    T13 = CALL2(1,VARREF(YgooSmathYA),T14,src_lenF1025);
    new_lenF1028 = T13;
    T17 = CALL1(1,VARREF(Yobject_class),dst_);
    T16 = CALL2(1,VARREF(YgooScolsScolYfab),T17,new_lenF1028);
    ndstF1029 = T16;
    T19 = FUNSHELL(1,fun_copy_14,6);
    copyF1030 = T19;
    FUNINIT(copyF1030, 6,from_,below_,dst_lenF1024,ndstF1029,src_,copyF1030);
    T21 = CALL1(1,VARREF(YgooScolsScolYenum),ndstF1029);
    T22 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
    T20 = CALL3(0,copyF1030,T21,T22,YPint((P)0));
    T18 = T20;
    T15 = T18;
    T12 = T15;
    T6 = T12;
  }
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sortX_16) {
  P items_;
  P T0;
  P a1;
LINK_STACK();
  ARG(items_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsSseqYsort_byX),items_,VARREF(YgooSmagYL));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sort_byX_17) {
  P items_,test_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(items_, 0);
  ARG(test_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),items_);
  T1 = CALL2(1,VARREF(YgooScolsSseqYsort_byX),T2,test_);
  T0 = CALL2(1,VARREF(YgooScolsScolYcol_res),items_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_in_18) {
  P d_,s_;
  P tmpF1031;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),d_);
  tmpF1031 = T2;
  if (tmpF1031 != YPfalse) {
    T3 = tmpF1031;
  } else {
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),s_);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow),s_);
    CALL2(1,VARREF(YgooScolsScolYnow_setter),T5,d_);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),d_);
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),s_);
    a1 = T7;
    a2 = T8;
    d_ = a1;
    s_ = a2;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alter_19) {
  P dst_,src_,from_,below_;
  P inF1032;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
  ARG(from_, 2);
  ARG(below_, 3);
loop:
  T1 = FUNSHELL(1,fun_in_18,2);
  inF1032 = T1;
  FUNINIT(inF1032, 2,dst_,inF1032);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),src_);
  T2 = CALL2(0,inF1032,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

P YgooScolsSseqxY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"rev!");
  lit_1 = YPPsym((P)"x");
  T1 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),VARREF(YLseqXG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_0),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYrevX,T0);
  lit_2 = YPPsym((P)"cat!");
  lit_3 = YPPsym((P)"more");
  T3 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_3)),YPPlist(1,VARREF(YLseqXG)),YPtrue,YPint((P)1),VARREF(YLseqXG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_2),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqxYcatX,T2);
  lit_4 = YPPsym((P)"push!");
  lit_5 = YPPsym((P)"l");
  T5 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_1)),YPPlist(2,VARREF(YLseqXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_4),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqxYpushX,T4);
  lit_6 = YPPsym((P)"pop!");
  T8 = XCALL2(1,VARREF(YtT),VARREF(YLseqXG),VARREF(YLanyG));
  T7 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),T8,Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqxYpopX,T6);
  lit_7 = YPPsym((P)"sub-setter");
  lit_8 = YPPsym((P)"dst");
  lit_9 = YPPsym((P)"src");
  lit_10 = YPPsym((P)"from");
  lit_11 = YPPsym((P)"below");
  T10 = YPsig(YPPlist(4,LITREF(lit_8),LITREF(lit_9),LITREF(lit_10),LITREF(lit_11)),YPPlist(4,VARREF(YLseqXG),VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T9 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_7),T10,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqxYsub_setter,T9);
  lit_12 = YPPsym((P)"ins!");
  lit_13 = YPPsym((P)"e");
  lit_14 = YPPsym((P)"before");
  T12 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_13),LITREF(lit_14)),YPPlist(3,VARREF(YLseqXG),VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqXG),Ynil);
  T11 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_12),T12,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqxYinsX,T11);
  lit_15 = YPPsym((P)"del-vals!");
  lit_16 = YPPsym((P)"v");
  T14 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_16)),YPPlist(2,VARREF(YLseqXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  T13 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_15),T14,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqxYdel_valsX,T13);
  lit_17 = YPPsym((P)"del-dups!");
  T16 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),VARREF(YLseqXG),Ynil);
  T15 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_17),T16,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqxYdel_dupsX,T15);
  lit_18 = YPPsym((P)"sort!");
  T18 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),VARREF(YLseqXG),Ynil);
  T17 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_18),T18,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqxYsortX,T17);
  lit_19 = YPPsym((P)"sort-by!");
  lit_20 = YPPsym((P)"test");
  T20 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_20)),YPPlist(2,VARREF(YLseqXG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  T19 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_19),T20,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYsort_byX,T19);
  lit_21 = YPPsym((P)"alter");
  T22 = YPsig(YPPlist(4,LITREF(lit_8),LITREF(lit_9),LITREF(lit_10),LITREF(lit_11)),YPPlist(4,VARREF(YLseqXG),VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLseqXG),Ynil);
  T21 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_21),T22,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqxYalter,T21);
  T23 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),VARREF(YLseqXG),Ynil);
  fun_revX_0 = YPmet(FUNCODEREF(fun_revX_0),LITREF(lit_0),T23,ENVNUL,PNUL,YPfalse);
  T26 = BOUNDP(YgooSmacrosYrevX);
  if (T26 != YPfalse) {
    T25 = VARREF(YgooSmacrosYrevX);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_revX_0;
  T24 = XCALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(YgooSmacrosYrevX,T24);
  T28 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_3)),YPPlist(1,VARREF(YLseqXG)),YPtrue,YPint((P)1),VARREF(YLseqXG),Ynil);
  fun_catX_1 = YPmet(FUNCODEREF(fun_catX_1),LITREF(lit_2),T28,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YgooScolsSseqxYcatX);
  if (T31 != YPfalse) {
    T30 = VARREF(YgooScolsSseqxYcatX);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_catX_1;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YgooScolsSseqxYcatX,T29);
  T33 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_1)),YPPlist(2,VARREF(YLseqXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  fun_pushX_2 = YPmet(FUNCODEREF(fun_pushX_2),LITREF(lit_4),T33,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YgooScolsSseqxYpushX);
  if (T36 != YPfalse) {
    T35 = VARREF(YgooScolsSseqxYpushX);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_pushX_2;
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YgooScolsSseqxYpushX,T34);
  T39 = XCALL2(1,VARREF(YtT),VARREF(YLseqXG),VARREF(YLanyG));
  T38 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),T39,Ynil);
  fun_popX_3 = YPmet(FUNCODEREF(fun_popX_3),LITREF(lit_6),T38,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YgooScolsSseqxYpopX);
  if (T42 != YPfalse) {
    T41 = VARREF(YgooScolsSseqxYpopX);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_popX_3;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YgooScolsSseqxYpopX,T40);
  T44 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_16),LITREF(lit_14)),YPPlist(3,VARREF(YLseqXG),VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqXG),Ynil);
  fun_insX_4 = YPmet(FUNCODEREF(fun_insX_4),LITREF(lit_12),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YgooScolsSseqxYinsX);
  if (T47 != YPfalse) {
    T46 = VARREF(YgooScolsSseqxYinsX);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_insX_4;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YgooScolsSseqxYinsX,T45);
  T49 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_16)),YPPlist(2,VARREF(YLseqXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  fun_del_valsX_5 = YPmet(FUNCODEREF(fun_del_valsX_5),LITREF(lit_15),T49,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(YgooScolsSseqxYdel_valsX);
  if (T52 != YPfalse) {
    T51 = VARREF(YgooScolsSseqxYdel_valsX);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_del_valsX_5;
  T50 = XCALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YgooScolsSseqxYdel_valsX,T50);
  T54 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),VARREF(YLseqXG),Ynil);
  fun_del_dupsX_6 = YPmet(FUNCODEREF(fun_del_dupsX_6),LITREF(lit_17),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YgooScolsSseqxYdel_dupsX);
  if (T57 != YPfalse) {
    T56 = VARREF(YgooScolsSseqxYdel_dupsX);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_del_dupsX_6;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YgooScolsSseqxYdel_dupsX,T55);
  lit_22 = YPPsym((P)"into");
  lit_23 = YPPsym((P)"in");
  lit_24 = YPPsym((P)"ed");
  lit_25 = YPPsym((P)"es");
  T60 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_25)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_in_7 = YPmet(FUNCODEREF(fun_in_7),LITREF(lit_23),T60,ENVNUL,PNUL,YPfalse);
  T59 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_9)),YPPlist(2,VARREF(YLseqXG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  fun_into_8 = YPmet(FUNCODEREF(fun_into_8),LITREF(lit_22),T59,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YgooScolsScolYinto);
  if (T63 != YPfalse) {
    T62 = VARREF(YgooScolsScolYinto);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_into_8;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YgooScolsScolYinto,T61);
  lit_26 = YPPsym((P)"find");
  lit_27 = YPPsym((P)"d");
  lit_28 = YPPsym((P)"i");
  lit_29 = YPPsym((P)"s");
  lit_30 = YPPsym((P)"copy");
  lit_31 = YPPsym((P)"nd");
  lit_32 = YPPsym((P)"insert");
  lit_33 = YPPsym((P)"skip");
  lit_34 = YPPsym((P)"onto");
  T71 = YPsig(YPPlist(2,LITREF(lit_27),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_in_9 = YPmet(FUNCODEREF(fun_in_9),LITREF(lit_23),T71,ENVNUL,PNUL,YPfalse);
  T70 = YPsig(YPPlist(2,LITREF(lit_27),LITREF(lit_28)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_10 = YPmet(FUNCODEREF(fun_find_10),LITREF(lit_26),T70,ENVNUL,PNUL,YPfalse);
  T69 = YPsig(YPPlist(3,LITREF(lit_31),LITREF(lit_27),LITREF(lit_28)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_onto_11 = YPmet(FUNCODEREF(fun_onto_11),LITREF(lit_34),T69,ENVNUL,PNUL,YPfalse);
  T68 = YPsig(YPPlist(2,LITREF(lit_27),LITREF(lit_28)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_skip_12 = YPmet(FUNCODEREF(fun_skip_12),LITREF(lit_33),T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(YPPlist(2,LITREF(lit_31),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_13 = YPmet(FUNCODEREF(fun_insert_13),LITREF(lit_32),T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(YPPlist(3,LITREF(lit_31),LITREF(lit_27),LITREF(lit_28)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_copy_14 = YPmet(FUNCODEREF(fun_copy_14),LITREF(lit_30),T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(YPPlist(4,LITREF(lit_9),LITREF(lit_8),LITREF(lit_10),LITREF(lit_11)),YPPlist(4,VARREF(YLseqXG),VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLseqXG),Ynil);
  fun_sub_setter_15 = YPmet(FUNCODEREF(fun_sub_setter_15),LITREF(lit_7),T65,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YgooScolsSseqxYsub_setter);
  if (T74 != YPfalse) {
    T73 = VARREF(YgooScolsSseqxYsub_setter);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_sub_setter_15;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YgooScolsSseqxYsub_setter,T72);
  lit_35 = YPPsym((P)"items");
  T76 = YPsig(YPPlist(1,LITREF(lit_35)),YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),VARREF(YLseqXG),Ynil);
  fun_sortX_16 = YPmet(FUNCODEREF(fun_sortX_16),LITREF(lit_18),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YgooScolsSseqxYsortX);
  if (T79 != YPfalse) {
    T78 = VARREF(YgooScolsSseqxYsortX);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_sortX_16;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YgooScolsSseqxYsortX,T77);
  T81 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_20)),YPPlist(2,VARREF(YLseqXG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  fun_sort_byX_17 = YPmet(FUNCODEREF(fun_sort_byX_17),LITREF(lit_19),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YgooScolsSseqYsort_byX);
  if (T84 != YPfalse) {
    T83 = VARREF(YgooScolsSseqYsort_byX);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_sort_byX_17;
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YgooScolsSseqYsort_byX,T82);
  T90 = YPsig(YPPlist(2,LITREF(lit_27),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T89 = fun_in_18 = YPmet(FUNCODEREF(fun_in_18),LITREF(lit_23),T90,ENVNUL,PNUL,YPfalse);
  T88 = YPsig(YPPlist(4,LITREF(lit_8),LITREF(lit_9),LITREF(lit_10),LITREF(lit_11)),YPPlist(4,VARREF(YLseqXG),VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLseqXG),Ynil);
  T87 = fun_alter_19 = YPmet(FUNCODEREF(fun_alter_19),LITREF(lit_21),T88,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(YgooScolsSseqxYalter);
  if (T94 != YPfalse) {
    T93 = VARREF(YgooScolsSseqxYalter);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_alter_19;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T95);
  T91 = VARSET(YgooScolsSseqxYalter,T92);
  T86 = T91;
  return T86;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSmath},
  {&module_info_gooStypes},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSseq},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"$e", &module_info_gooSmath, "$e"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"until", &module_info_gooSmacros, "until"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%str", &module_info_gooSboot, "%str"},
  {"error", &module_info_gooSboot, "error"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"lst", &module_info_gooSboot, "lst"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"round/", &module_info_gooSmath, "round/"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"min", &module_info_gooSmag, "min"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"quote", &module_info_gooSboot, "quote"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"when", &module_info_gooSmacros, "when"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"tail", &module_info_gooSboot, "tail"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"dv", &module_info_gooSboot, "dv"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"set", &module_info_gooSboot, "set"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"col", &module_info_gooScolsScol, "col"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"1-", &module_info_gooSmath, "1-"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"mif", &module_info_gooSboot, "mif"},
  {"as", &module_info_gooStypes, "as"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {">=", &module_info_gooSmag, ">="},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"def", &module_info_gooSboot, "def"},
  {"len", &module_info_gooStypes, "len"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"if", &module_info_gooSboot, "if"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%su", &module_info_gooSboot, "%su"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"logn", &module_info_gooSmath, "logn"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"do", &module_info_gooSmacros, "do"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"match", &module_info_gooSmacros, "match"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%im", &module_info_gooSboot, "%im"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"and", &module_info_gooSmacros, "and"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"<=", &module_info_gooSmag, "<="},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"op", &module_info_gooSmacros, "op"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"~", &module_info_gooSmath, "~"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"let", &module_info_gooSboot, "let"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"add", &module_info_gooScolsScol, "add"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"while", &module_info_gooSmacros, "while"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"|", &module_info_gooSmath, "|"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"use", &module_info_gooSboot, "use"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"seq", &module_info_gooSboot, "seq"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"~=", &module_info_gooSmath, "~="},
  {"find", &module_info_gooScolsScol, "find"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"into", &module_info_gooScolsScol, "into"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"acos", &module_info_gooSmath, "acos"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"for", &module_info_gooSmacros, "for"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"-", &module_info_gooSmath, "-"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"or", &module_info_gooSmacros, "or"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"head", &module_info_gooSboot, "head"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"dss", &module_info_gooSboot, "dss"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"+", &module_info_gooSmath, "+"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"export", &module_info_gooSboot, "export"},
  {"map", &module_info_gooSmacros, "map"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"try", &module_info_gooSboot, "try"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"app", &module_info_gooSmacros, "app"},
  {"1+", &module_info_gooSmath, "1+"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"items", &module_info_gooScolsScol, "items"},
  {"sin", &module_info_gooSmath, "sin"},
  {"div", &module_info_gooSmath, "div"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"@<", &module_info_gooSboot, "@<"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"loc", &module_info_gooSboot, "loc"},
  {"dl", &module_info_gooSboot, "dl"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {">>", &module_info_gooSmath, ">>"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"abs", &module_info_gooSmath, "abs"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"&", &module_info_gooSmath, "&"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"t?", &module_info_gooStypes, "t?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {">", &module_info_gooSmag, ">"},
  {"==", &module_info_gooSmacros, "=="},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"round", &module_info_gooSmath, "round"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"fin", &module_info_gooSboot, "fin"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"any?", &module_info_gooStypes, "any?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"<", &module_info_gooSmag, "<"},
  {"case", &module_info_gooSmacros, "case"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"=", &module_info_gooSmath, "="},
  {"@len", &module_info_gooSboot, "@len"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"esc", &module_info_gooSboot, "esc"},
  {"@==", &module_info_gooSboot, "@=="},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"/", &module_info_gooSmath, "/"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"asin", &module_info_gooSmath, "asin"},
  {"neg", &module_info_gooSmath, "neg"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"not", &module_info_gooSboot, "not"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"t=", &module_info_gooStypes, "t="},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"nil", &module_info_gooSboot, "nil"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%get", &module_info_gooSboot, "%get"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"log", &module_info_gooSmath, "log"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"rem", &module_info_gooSmath, "rem"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"df", &module_info_gooSboot, "df"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"^", &module_info_gooSmath, "^"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"t+", &module_info_gooStypes, "t+"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%time", &module_info_gooSboot, "%time"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"dg", &module_info_gooSboot, "dg"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"even?", &module_info_gooSmath, "even?"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"dc", &module_info_gooSboot, "dc"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"tan", &module_info_gooSmath, "tan"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"floor", &module_info_gooSmath, "floor"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"del", &module_info_gooScolsScol, "del"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"new", &module_info_gooSboot, "new"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"@+", &module_info_gooSboot, "@+"},
  {"max", &module_info_gooSmag, "max"},
  {"*", &module_info_gooSmath, "*"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"nul", &module_info_gooSboot, "nul"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"now", &module_info_gooScolsScol, "now"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"pop!", CVAR, &YgooScolsSseqxYpopX},
  {"del-vals!", CVAR, &YgooScolsSseqxYdel_valsX},
  {"ins!", CVAR, &YgooScolsSseqxYinsX},
  {"sub-setter", CVAR, &YgooScolsSseqxYsub_setter},
  {"---main-0---", PVAR, NULL},
  {"push!", CVAR, &YgooScolsSseqxYpushX},
  {"alter", CVAR, &YgooScolsSseqxYalter},
  {"sort!", CVAR, &YgooScolsSseqxYsortX},
  {"cat!", CVAR, &YgooScolsSseqxYcatX},
  {"del-dups!", CVAR, &YgooScolsSseqxYdel_dupsX},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"pop!", "pop!"},
  {"del-vals!", "del-vals!"},
  {"ins!", "ins!"},
  {"sub-setter", "sub-setter"},
  {"push!", "push!"},
  {"alter", "alter"},
  {"rev!", "rev!"},
  {"sort-by!", "sort-by!"},
  {"sort!", "sort!"},
  {"cat!", "cat!"},
  {"del-dups!", "del-dups!"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSseqx;
MODULE_INFO module_info_gooScolsSseqx = {
  "goo/cols/seqx",
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

/* EXPRESSION: */

extern void load_module_gooScolsSseqx (void);

void load_module_gooScolsSseqx (void) {
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

  (P)YgooScolsSseqxY___main_0___();

}

/* END OF GENERATED CODE. */
