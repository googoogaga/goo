/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/rep */

EXT(Yassert_error,"goo/boot","assert-error");
EXT(Ynot,"goo/boot","not");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YPdefine_method,"goo/boot","%define-method");
DEF(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ylst,"goo/boot","lst");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLintG,"goo/boot","<int>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Ytup,"goo/boot","tup");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLunionG,"goo/boot","<union>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmathY1_,"goo/math","1-");
DEF(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
DEF(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Yas_error,"goo/boot","as-error");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YLanyG,"goo/boot","<any>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Ynil,"goo/boot","nil");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Ytail,"goo/boot","tail");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan2,"goo/math","atan2");
DEF(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYE,"goo/math","=");
EXT(Ynew,"goo/boot","new");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Ysig_names,"goo/boot","sig-names");
DEF(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathYround,"goo/math","round");
EXT(YPprop,"goo/boot","%prop");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmathYtan,"goo/math","tan");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_0);
DEFLIT(lit_4);
DEFLIT(lit_16);
DEFLIT(lit_7);
DEFLIT(lit_15);
DEFLIT(lit_17);
DEFLIT(lit_9);
DEFLIT(lit_13);
DEFLIT(lit_3);
DEFLIT(lit_10);
DEFLIT(lit_6);
DEFLIT(lit_18);
DEFLIT(lit_1);
DEFLIT(lit_8);
DEFLIT(lit_14);
DEFLIT(lit_19);
DEFLIT(lit_5);
DEFLIT(lit_2);
DEFLIT(lit_12);
DEFLIT(lit_11);
DEFLIT(lit_20);

/* FUNCTIONS: */

FUNFOR(YgooScolsSrepYrep_nul);
FUNFOR(YgooScolsSrepYrep_len);
LOCFOR(fun_fill_2);
FUNFOR(YgooScolsSrepYrep_fillX);
LOCFOR(fun_into_4);
LOCFOR(fun_rep_intoX_5);
LOCFOR(fun_into_6);
LOCFOR(fun_rep_intoX_7);
FUNFOR(YgooScolsSrepYrep_fab);
FUNFOR(YgooScolsSrepYrep_elt);
FUNFOR(YgooScolsSrepYrep_elt_setter);
extern P YgooScolsSrepY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooScolsSrepYrep_nul) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(VARREF(YPrnul));
}

FUNCODEDEF(YgooScolsSrepYrep_len) {
  P x_;
  P tF1750;
  P xF1749;
  P xF1748;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPrlen(x_);
  xF1748 = T1;
  xF1749 = xF1748;
  tF1750 = (P)1;
  T4 = (P)YPiLL(xF1749,(P)2);
  T3 = (P)YPiv(T4,tF1750);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fill_2) {
  P i_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),FREEREF(1),FREEREF(2),i_);
    T3 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T3;
    i_ = a1;
    goto loop;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooScolsSrepYrep_fillX) {
  P x_,val_;
  P fillF1752;
  P sF1751;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(val_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSrepYrep_len),x_);
  sF1751 = T1;
  T2 = FUNSHELL(1,fun_fill_2,4);
  fillF1752 = T2;
  FUNINIT(fillF1752, 4,sF1751,val_,x_,fillF1752);
  T3 = CALL1(0,fillF1752,YPint((P)0));
  T0 = x_;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_into_4) {
  P i_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),FREEREF(1),i_);
    CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),T2,FREEREF(2),i_);
    T4 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T4;
    i_ = a1;
    goto loop;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_rep_intoX_5) {
  P d_,s_;
  P intoF1754;
  P lF1753;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooScolsSrepYrep_len),d_);
  T3 = CALL1(1,VARREF(YgooScolsSrepYrep_len),s_);
  T1 = CALL2(1,VARREF(YgooSmagYmin),T2,T3);
  lF1753 = T1;
  T4 = FUNSHELL(1,fun_into_4,4);
  intoF1754 = T4;
  FUNINIT(intoF1754, 4,lF1753,s_,d_,intoF1754);
  T5 = CALL1(0,intoF1754,YPint((P)0));
  T0 = d_;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_into_6) {
  P i_,e_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),T2,FREEREF(1),i_);
    T4 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T5 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    a1 = T4;
    a2 = T5;
    i_ = a1;
    e_ = a2;
    goto loop;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_rep_intoX_7) {
  P d_,s_;
  P intoF1756;
  P lF1755;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooScolsSrepYrep_len),d_);
  T3 = CALL1(1,VARREF(YgooStypesYlen),s_);
  T1 = CALL2(1,VARREF(YgooSmagYmin),T2,T3);
  lF1755 = T1;
  T4 = FUNSHELL(1,fun_into_6,3);
  intoF1756 = T4;
  FUNINIT(intoF1756, 3,lF1755,d_,intoF1756);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),s_);
  T5 = CALL2(0,intoF1756,YPint((P)0),T6);
  T0 = d_;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooScolsSrepYrep_fab) {
  P s_,fill_;
  P xF1758;
  P xF1757;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(fill_, 1);
loop:
  xF1757 = s_;
  xF1758 = xF1757;
  T3 = (P)YPiGG(xF1758,(P)2);
  T2 = T3;
  T1 = T2;
  T0 = (P)YPrep(T1,fill_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooScolsSrepYrep_elt) {
  P x_,i_;
  P xF1760;
  P xF1759;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  xF1759 = i_;
  xF1760 = xF1759;
  T3 = (P)YPiGG(xF1760,(P)2);
  T2 = T3;
  T1 = T2;
  T0 = (P)YPrelt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooScolsSrepYrep_elt_setter) {
  P z_,x_,i_;
  P xF1762;
  P xF1761;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
  xF1761 = i_;
  xF1762 = xF1761;
  T3 = (P)YPiGG(xF1762,(P)2);
  T2 = T3;
  T1 = T2;
  T0 = (P)YPrelt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooScolsSrepY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"rep-into!");
  lit_1 = YPPlist(2,YPPsym((P)"d"),YPPsym((P)"s"));
  T1 = YPsig(LITREF(lit_1),YPPlist(2,VARREF(YLrepG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLrepG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_0),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSrepYrep_intoX,T0);
  lit_2 = YPPsym((P)"rep-nul");
  lit_3 = Ynil;
  T2 = YPsig(LITREF(lit_3),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooScolsSrepYrep_nul = YPmet(FUNCODEREF(YgooScolsSrepYrep_nul),LITREF(lit_2),T2,ENVNUL,PNUL,YPfalse);
  T3 = YgooScolsSrepYrep_nul;
  VARSET(YgooScolsSrepYrep_nul,T3);
  lit_4 = YPPsym((P)"rep-len");
  lit_5 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YLrepG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooScolsSrepYrep_len = YPmet(FUNCODEREF(YgooScolsSrepYrep_len),LITREF(lit_4),T4,ENVNUL,PNUL,YPfalse);
  T5 = YgooScolsSrepYrep_len;
  VARSET(YgooScolsSrepYrep_len,T5);
  lit_6 = YPPsym((P)"rep-fill!");
  lit_7 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"val"));
  lit_8 = YPPsym((P)"fill");
  lit_9 = YPPlist(1,YPPsym((P)"i"));
  T7 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fill_2 = YPmet(FUNCODEREF(fun_fill_2),LITREF(lit_8),T7,ENVNUL,PNUL,YPfalse);
  T6 = YPsig(LITREF(lit_7),YPPlist(2,VARREF(YLrepG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLrepG),Ynil);
  YgooScolsSrepYrep_fillX = YPmet(FUNCODEREF(YgooScolsSrepYrep_fillX),LITREF(lit_6),T6,ENVNUL,PNUL,YPfalse);
  T8 = YgooScolsSrepYrep_fillX;
  VARSET(YgooScolsSrepYrep_fillX,T8);
  lit_10 = YPPlist(2,YPPsym((P)"d"),YPPsym((P)"s"));
  lit_11 = YPPsym((P)"into");
  lit_12 = YPPlist(1,YPPsym((P)"i"));
  T10 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_into_4 = YPmet(FUNCODEREF(fun_into_4),LITREF(lit_11),T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(LITREF(lit_10),YPPlist(2,VARREF(YLrepG),VARREF(YLrepG)),YPfalse,YPint((P)2),VARREF(YLrepG),Ynil);
  fun_rep_intoX_5 = YPmet(FUNCODEREF(fun_rep_intoX_5),LITREF(lit_0),T9,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YgooScolsSrepYrep_intoX);
  if (T13 != YPfalse) {
    T12 = VARREF(YgooScolsSrepYrep_intoX);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_rep_intoX_5;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YgooScolsSrepYrep_intoX,T11);
  lit_13 = YPPlist(2,YPPsym((P)"d"),YPPsym((P)"s"));
  lit_14 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"e"));
  T16 = YPsig(LITREF(lit_14),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_into_6 = YPmet(FUNCODEREF(fun_into_6),LITREF(lit_11),T16,ENVNUL,PNUL,YPfalse);
  T15 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLrepG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLrepG),Ynil);
  fun_rep_intoX_7 = YPmet(FUNCODEREF(fun_rep_intoX_7),LITREF(lit_0),T15,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(YgooScolsSrepYrep_intoX);
  if (T19 != YPfalse) {
    T18 = VARREF(YgooScolsSrepYrep_intoX);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_rep_intoX_7;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YgooScolsSrepYrep_intoX,T17);
  lit_15 = YPPsym((P)"rep-fab");
  lit_16 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"fill"));
  T21 = YPsig(LITREF(lit_16),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLrepG),Ynil);
  YgooScolsSrepYrep_fab = YPmet(FUNCODEREF(YgooScolsSrepYrep_fab),LITREF(lit_15),T21,ENVNUL,PNUL,YPfalse);
  T22 = YgooScolsSrepYrep_fab;
  VARSET(YgooScolsSrepYrep_fab,T22);
  lit_17 = YPPsym((P)"rep-elt");
  lit_18 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T23 = YPsig(LITREF(lit_18),YPPlist(2,VARREF(YLrepG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsSrepYrep_elt = YPmet(FUNCODEREF(YgooScolsSrepYrep_elt),LITREF(lit_17),T23,ENVNUL,PNUL,YPfalse);
  T24 = YgooScolsSrepYrep_elt;
  VARSET(YgooScolsSrepYrep_elt,T24);
  lit_19 = YPPsym((P)"rep-elt-setter");
  lit_20 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"x"),YPPsym((P)"i"));
  T27 = YPsig(LITREF(lit_20),YPPlist(3,VARREF(YLanyG),VARREF(YLrepG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T26 = YgooScolsSrepYrep_elt_setter = YPmet(FUNCODEREF(YgooScolsSrepYrep_elt_setter),LITREF(lit_19),T27,ENVNUL,PNUL,YPfalse);
  T29 = YgooScolsSrepYrep_elt_setter;
  T28 = VARSET(YgooScolsSrepYrep_elt_setter,T29);
  T25 = T28;
  return T25;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSflat;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSflat},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"not", &module_info_gooSboot, "not"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"range-error", &module_info_gooSboot, "range-error"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%vm-fun-env-fab", &module_info_gooSboot, "%vm-fun-env-fab"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"argument-type-error", &module_info_gooSboot, "argument-type-error"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%vm-fun-env-elt", &module_info_gooSboot, "%vm-fun-env-elt"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"loc", &module_info_gooSboot, "loc"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"property-unbound-error", &module_info_gooSboot, "property-unbound-error"},
  {"%su", &module_info_gooSboot, "%su"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"add", &module_info_gooScolsScol, "add"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%str", &module_info_gooSboot, "%str"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"as", &module_info_gooStypes, "as"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"lift-place-subforms", &module_info_gooSmacros, "lift-place-subforms"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"^", &module_info_gooSmath, "^"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"col", &module_info_gooScolsScol, "col"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"property-type-error", &module_info_gooSboot, "property-type-error"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"even?", &module_info_gooSmath, "even?"},
  {"ds", &module_info_gooSboot, "ds"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"%vm-box-fab", &module_info_gooSboot, "%vm-box-fab"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"mod", &module_info_gooSmath, "mod"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"len", &module_info_gooStypes, "len"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"*", &module_info_gooSmath, "*"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"op", &module_info_gooSmacros, "op"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"floor", &module_info_gooSmath, "floor"},
  {"clone", &module_info_gooSboot, "clone"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"%get", &module_info_gooSboot, "%get"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"ambiguous-method-error", &module_info_gooSboot, "ambiguous-method-error"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"def", &module_info_gooSboot, "def"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"into", &module_info_gooScolsScol, "into"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"export", &module_info_gooSboot, "export"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"and", &module_info_gooSmacros, "and"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"1-", &module_info_gooSmath, "1-"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"set", &module_info_gooSboot, "set"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"if", &module_info_gooSboot, "if"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"|", &module_info_gooSmath, "|"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"syntax-error", &module_info_gooSboot, "syntax-error"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"as-error", &module_info_gooSboot, "as-error"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"cpl-error", &module_info_gooSboot, "cpl-error"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"now", &module_info_gooScolsScol, "now"},
  {"ct", &module_info_gooSboot, "ct"},
  {"t<", &module_info_gooStypes, "t<"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"mif", &module_info_gooSboot, "mif"},
  {"==", &module_info_gooSmacros, "=="},
  {"property-not-found-error", &module_info_gooSboot, "property-not-found-error"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"-", &module_info_gooSmath, "-"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"case", &module_info_gooSmacros, "case"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"let", &module_info_gooSboot, "let"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"abs", &module_info_gooSmath, "abs"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"t=", &module_info_gooStypes, "t="},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"items", &module_info_gooScolsScol, "items"},
  {"max", &module_info_gooSmag, "max"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"round/", &module_info_gooSmath, "round/"},
  {"~=", &module_info_gooSmath, "~="},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"logn", &module_info_gooSmath, "logn"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"match", &module_info_gooSmacros, "match"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, "%vm-fun-env-elt-setter"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"t+", &module_info_gooStypes, "t+"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"when", &module_info_gooSmacros, "when"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"arithmetic-error", &module_info_gooSboot, "arithmetic-error"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"until", &module_info_gooSmacros, "until"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"div", &module_info_gooSmath, "div"},
  {"rep", &module_info_gooSboot, "rep"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"min", &module_info_gooSmag, "min"},
  {"%vm-with-cleanup", &module_info_gooSboot, "%vm-with-cleanup"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"dss", &module_info_gooSboot, "dss"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"~", &module_info_gooSmath, "~"},
  {"@len", &module_info_gooSboot, "@len"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"sin", &module_info_gooSmath, "sin"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"use", &module_info_gooSboot, "use"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"fun-sig", &module_info_gooSboot, "fun-sig"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"@+", &module_info_gooSboot, "@+"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"app", &module_info_gooSmacros, "app"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"no-applicable-methods-error", &module_info_gooSboot, "no-applicable-methods-error"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {">=", &module_info_gooSmag, ">="},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"$e", &module_info_gooSmath, "$e"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"@opts-as-lst", &module_info_gooSboot, "@opts-as-lst"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%met", &module_info_gooSboot, "%met"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"1+", &module_info_gooSmath, "1+"},
  {"tail", &module_info_gooSboot, "tail"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%dispatch", &module_info_gooSboot, "%dispatch"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"%time", &module_info_gooSboot, "%time"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%vm-box-val", &module_info_gooSboot, "%vm-box-val"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"nul", &module_info_gooSboot, "nul"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"seq", &module_info_gooSboot, "seq"},
  {"map", &module_info_gooSmacros, "map"},
  {"do", &module_info_gooSmacros, "do"},
  {"dl", &module_info_gooSboot, "dl"},
  {"for", &module_info_gooSmacros, "for"},
  {"<=", &module_info_gooSmag, "<="},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {">", &module_info_gooSmag, ">"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"error", &module_info_gooSboot, "error"},
  {"+", &module_info_gooSmath, "+"},
  {"asin", &module_info_gooSmath, "asin"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<", &module_info_gooSmag, "<"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {">>", &module_info_gooSmath, ">>"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"%im", &module_info_gooSboot, "%im"},
  {"dm", &module_info_gooSboot, "dm"},
  {"while", &module_info_gooSmacros, "while"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%met-env-setter", &module_info_gooSboot, "%met-env-setter"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"df", &module_info_gooSboot, "df"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"=", &module_info_gooSmath, "="},
  {"dv", &module_info_gooSboot, "dv"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"new", &module_info_gooSboot, "new"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"return-type-error", &module_info_gooSboot, "return-type-error"},
  {"last", &module_info_gooSmacros, "last"},
  {"dg", &module_info_gooSboot, "dg"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"&", &module_info_gooSmath, "&"},
  {"@<", &module_info_gooSboot, "@<"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"stack-overflow-error", &module_info_gooSboot, "stack-overflow-error"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%vm-box-val-setter", &module_info_gooSboot, "%vm-box-val-setter"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"try", &module_info_gooSboot, "try"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"round", &module_info_gooSmath, "round"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"log", &module_info_gooSmath, "log"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%vm-with-exit", &module_info_gooSboot, "%vm-with-exit"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"esc", &module_info_gooSboot, "esc"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"/", &module_info_gooSmath, "/"},
  {"pow", &module_info_gooSmath, "pow"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"tan", &module_info_gooSmath, "tan"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"rep-fab", CVAR, &YgooScolsSrepYrep_fab},
  {"rep-fill!", CVAR, &YgooScolsSrepYrep_fillX},
  {"rep-elt", CVAR, &YgooScolsSrepYrep_elt},
  {"rep-len", CVAR, &YgooScolsSrepYrep_len},
  {"rep-nul", CVAR, &YgooScolsSrepYrep_nul},
  {"rep-into!", CVAR, &YgooScolsSrepYrep_intoX},
  {"---main-0---", PVAR, NULL},
  {"rep-elt-setter", CVAR, &YgooScolsSrepYrep_elt_setter},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"rep-fab", "rep-fab"},
  {"<rep>", "<rep>"},
  {"rep-fill!", "rep-fill!"},
  {"rep-len", "rep-len"},
  {"rep-nul", "rep-nul"},
  {"rep-into!", "rep-into!"},
  {"rep-elt-setter", "rep-elt-setter"},
  {"rep-elt", "rep-elt"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSrep;
MODULE_INFO module_info_gooScolsSrep = {
  "goo/cols/rep",
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
extern void load_module_gooScolsSflat (void);

/* EXPRESSION: */

extern void load_module_gooScolsSrep (void);

void load_module_gooScolsSrep (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScolsScol();
  load_module_gooScolsSseq();
  load_module_gooScolsSflat();

  (P)YgooScolsSrepY___main_0___();

}

/* END OF GENERATED CODE. */
