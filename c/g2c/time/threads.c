/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"time/threads");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: time/threads */

EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLnumG,"goo/boot","<num>");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YLsubclassG,"goo/boot","<subclass>");
DEF(YtimeSthreadsYthread_handle,"time/threads","thread-handle");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfind_setter,"goo/boot","find-setter");
DEF(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYC,"goo/math","^");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ysig_specs,"goo/boot","sig-specs");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
DEF(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
DEF(YtimeSthreadsYsleep,"time/threads","sleep");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
DEF(YtimeSthreadsYthread_name,"time/threads","thread-name");
DEF(YtimeSthreadsYthread_priority_setter,"time/threads","thread-priority-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(YtimeSthreadsYthread_name_setter,"time/threads","thread-name-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
DEF(YtimeSthreadsYthread_function_setter,"time/threads","thread-function-setter");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
DEF(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
DEF(YtimeSthreadsYthread_join,"time/threads","thread-join");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSmathYK,"goo/math","|");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YOall2Q,"goo/boot","@all2?");
DEF(YtimeSthreadsYthread_current,"time/threads","thread-current");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
DEF(YtimeSthreadsYLthreadG,"time/threads","<thread>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
DEF(YtimeSthreadsYmain_thread_key,"time/threads","main-thread-key");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YPsnul,"goo/boot","%snul");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooStypesYas,"goo/types","as");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(Yclone,"goo/boot","clone");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yunexec,"goo/boot","unexec");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YtimeSthreadsYthread_handle_setter,"time/threads","thread-handle-setter");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYB,"goo/math","&");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YLpropG,"goo/boot","<prop>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_33);
DEFLIT(lit_20);
DEFLIT(lit_12);
DEFLIT(lit_34);
DEFLIT(lit_25);
DEFLIT(lit_49);
DEFLIT(lit_15);
DEFLIT(lit_19);
DEFLIT(lit_45);
DEFLIT(lit_16);
DEFLIT(lit_21);
DEFLIT(lit_13);
DEFLIT(lit_26);
DEFLIT(lit_46);
DEFLIT(lit_39);
DEFLIT(lit_30);
DEFLIT(lit_0);
DEFLIT(lit_31);
DEFLIT(lit_18);
DEFLIT(lit_9);
DEFLIT(lit_7);
DEFLIT(lit_24);
DEFLIT(lit_47);
DEFLIT(lit_27);
DEFLIT(lit_48);
DEFLIT(lit_10);
DEFLIT(lit_43);
DEFLIT(lit_23);
DEFLIT(lit_17);
DEFLIT(lit_40);
DEFLIT(lit_6);
DEFLIT(lit_2);
DEFLIT(lit_37);
DEFLIT(lit_38);
DEFLIT(lit_11);
DEFLIT(lit_8);
DEFLIT(lit_36);
DEFLIT(lit_3);
DEFLIT(lit_22);
DEFLIT(lit_14);
DEFLIT(lit_1);
DEFLIT(lit_4);
DEFLIT(lit_41);
DEFLIT(lit_42);
DEFLIT(lit_28);
DEFLIT(lit_5);
DEFLIT(lit_44);
DEFLIT(lit_29);
DEFLIT(lit_32);
DEFLIT(lit_35);

/* FUNCTIONS: */

LOCFOR(fun_thread_name_0);
LOCFOR(fun_thread_name_setter_1);
LOCFOR(fun_2);
LOCFOR(fun_thread_priority_3);
LOCFOR(fun_thread_priority_setter_4);
LOCFOR(fun_5);
LOCFOR(fun_thread_function_6);
LOCFOR(fun_thread_function_setter_7);
LOCFOR(fun_8);
LOCFOR(fun_9);
LOCFOR(fun_thread_handle_10);
LOCFOR(fun_thread_handle_setter_11);
LOCFOR(fun_thread_yield_12);
FUNFOR(YtimeSthreadsYmain_thread_key);
LOCFOR(fun_14);
LOCFOR(fun_15);
LOCFOR(fun_16);
LOCFOR(fun_17);
LOCFOR(fun_new_18);
LOCFOR(fun_x_1767_19);
LOCFOR(fun_20);
LOCFOR(fun_21);
LOCFOR(fun_sleep_22);
LOCFOR(fun_thread_current_23);
LOCFOR(fun_thread_join_24);
LOCFOR(fun_x_1769_25);
LOCFOR(fun_26);
FUNFOR(YtimeSthreadsYtest_thread_1);
LOCFOR(fun_x_1771_28);
LOCFOR(fun_29);
FUNFOR(YtimeSthreadsYtest_thread_2);
extern P YtimeSthreadsY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_thread_name_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YtimeSthreadsYthread_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_thread_name_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YtimeSthreadsYthread_name));
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
  QRET(YPfalse);
}

FUNCODEDEF(fun_thread_priority_3) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YtimeSthreadsYthread_priority));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_thread_priority_setter_4) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YtimeSthreadsYthread_priority));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_5) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_thread_function_6) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YtimeSthreadsYthread_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_thread_function_setter_7) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YtimeSthreadsYthread_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_8) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_9) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = fun_8;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_thread_handle_10) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YtimeSthreadsYthread_handle));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_thread_handle_setter_11) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YtimeSthreadsYthread_handle));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_thread_yield_12) {
  P T0;
LINK_STACK();
loop:
  T0 = (P)YtimeSthreadsYPthread_yield();
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YtimeSthreadsYmain_thread_key) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_14) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_15) {
  P c_,r_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYdescribe_condition),c_);
  T0 = CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_26),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_16) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(YtimeSthreadsYthread_function),FREEREF(0));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  DYNSET(YgooSconditionsYTcurrent_handlersT,Ynil);
  T1 = fun_14;
  T2 = fun_15;
  T3 = FUNFAB(fun_16,1,FREEREF(0));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLconditionG),VARREF(YgooSconditionsYDdefault_handler_info),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_new_18) {
  P x_,args_;
  P xF3727;
  P xF3726;
  P hF3725;
  P xF3724;
  P fF3723;
  P tF3722;
  P xF3721;
  P yF3720;
  P xF3719;
  P tmpF3718;
  P next_metsF3717;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(args_, 1);
loop:
  T2 = (P)YPnext_methods();
  next_metsF3717 = T2;
  tmpF3718 = next_metsF3717;
  if (tmpF3718 != YPfalse) {
    xF3719 = next_metsF3717;
    yF3720 = Ynil;
    T9 = (P)YPeqQ(xF3719,yF3720);
    T8 = (P)YPbb(T9);
    T7 = T8;
    xF3721 = T7;
    T11 = (P)YPeqQ(xF3721,YPfalse);
    T10 = (P)YPbb(T11);
    T6 = T10;
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T4 = T5;
  if (T4 != YPfalse) {
    T13 = CALL1(1,VARREF(Yhead),next_metsF3717);
    T14 = CALL1(1,VARREF(Ytail),next_metsF3717);
    T12 = CALL4(1,VARREF(YgooSmacrosYnapp),T13,T14,x_,args_);
    T3 = T12;
  } else {
    T16 = (P)YPfun_reg();
    T17 = CALL2(1,VARREF(Ylst),x_,args_);
    T15 = CALL2(1,VARREF(Yno_next_methods_error),T16,T17);
    T3 = T15;
  }
  T1 = T3;
  tF3722 = T1;
  T20 = CALL1(1,VARREF(YtimeSthreadsYthread_function),tF3722);
  T19 = CALL2(1,VARREF(YgooSmacrosYEE),T20,VARREF(YtimeSthreadsYmain_thread_key));
  T18 = CALL1(1,VARREF(Ynot),T19);
  if (T18 != YPfalse) {
    T22 = FUNFAB(fun_17,1,tF3722);
    fF3723 = T22;
    T26 = CALL2(1,VARREF(Ytup),fF3723,tF3722);
    T25 = (P)YtimeSthreadsYPthread_create(T26);
    xF3724 = T25;
    T27 = (P)YPtag_into(xF3724,(P)3);
    T24 = T27;
    hF3725 = T24;
    CALL2(1,VARREF(YtimeSthreadsYthread_handle_setter),hF3725,tF3722);
    T30 = CALL1(1,VARREF(YtimeSthreadsYthread_priority),tF3722);
    xF3726 = T30;
    xF3727 = xF3726;
    T32 = (P)YPiGG(xF3727,(P)2);
    T31 = T32;
    T29 = T31;
    T28 = (P)YtimeSthreadsYPthread_priority_setter(T29,hF3725);
    T23 = T28;
    T21 = T23;
  } else {
  }
  T0 = tF3722;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1767_19) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_32),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  P return_;
  P x_1766F3734;
  P x_1766F3733;
  P x_1766F3732;
  P x_1766F3731;
  P bodyF3730;
  P x_1766F3729;
  P x_1767F3728;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1767_19,2);
  x_1767F3728 = T1;
  FUNINIT(x_1767F3728, 2,FREEREF(0),return_);
  x_1766F3729 = FREEREF(0);
  bodyF3730 = YPfalse;
  bodyF3730 = BOXFAB(bodyF3730);
  T5 = CALL2(1,VARREF(YisaQ),x_1766F3729,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1766F3729,LITREF(lit_32),x_1767F3728);
    x_1766F3731 = T7;
    BOXVAL(bodyF3730) = x_1766F3731;
    x_1766F3732 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1766F3732,x_1767F3728);
    x_1766F3733 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1766F3733,x_1767F3728);
    T12 = CALL1(1,VARREF(Ytail),x_1766F3732);
    x_1766F3734 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1766F3734,x_1767F3728);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1767F3728,LITREF(lit_33),x_1766F3729);
  }
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_23));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_0));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_34));
  T22 = CALL1(1,VARREF(Ylst),Ynil);
  T23 = BOXVAL(bodyF3730);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T23,LITREF(lit_35));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T15 = CALL5(1,VARREF(YgooSmacrosYcat),T16,T17,T18,T19,LITREF(lit_35));
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_21) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_20,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sleep_22) {
  P secs_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(secs_, 0);
loop:
  T1 = (P)YPfu(secs_);
  T0 = (P)YtimeSthreadsYPthread_sleep(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_thread_current_23) {
  P xF3735;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  T2 = (P)YtimeSthreadsYPthread_current();
  xF3735 = T2;
  T3 = (P)YPtag_into(xF3735,(P)3);
  T1 = T3;
  T0 = (P)YtimeSthreadsYPthread_goo_thread(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_thread_join_24) {
  P t_;
  P xF3736;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T2 = CALL1(1,VARREF(YtimeSthreadsYthread_handle),t_);
  xF3736 = T2;
  T3 = (P)YPuntag_into(xF3736);
  T1 = T3;
  T0 = (P)YtimeSthreadsYPthread_join(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1769_25) {
  P x_1768_;
  P iF3737;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1768_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1768_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1768_);
    iF3737 = T4;
    CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_44),iF3737);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1768_);
    a1 = T6;
    x_1768_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  P x_1769F3738;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_x_1769_25,1);
  x_1769F3738 = T1;
  FUNINIT(x_1769F3738, 1,x_1769F3738);
  T4 = CALL1(1,VARREF(YgooScolsSseqYbelow),YPint((P)3000));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_1769F3738,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YtimeSthreadsYtest_thread_1) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = fun_26;
  T0 = CALL3(1,VARREF(Ynew),VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_function),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1771_28) {
  P x_1770_;
  P iF3739;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1770_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1770_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1770_);
    iF3739 = T4;
    CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_48),iF3739);
    CALL1(1,VARREF(YtimeSthreadsYsleep),LITREF(lit_49));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1770_);
    a1 = T6;
    x_1770_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  P x_1771F3740;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_x_1771_28,1);
  x_1771F3740 = T1;
  FUNINIT(x_1771F3740, 1,x_1771F3740);
  T4 = CALL1(1,VARREF(YgooScolsSseqYbelow),YPint((P)100));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_1771F3740,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YtimeSthreadsYtest_thread_2) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = fun_29;
  T0 = CALL3(1,VARREF(Ynew),VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_function),T1);
UNLINK_STACK();
  QRET(T0);
}

P YtimeSthreadsY___main_0___() {
  P xF3741;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"<thread>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YtimeSthreadsYLthreadG,T0);
  lit_1 = YPPsym((P)"thread-name");
  lit_2 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_thread_name_0 = YPmet(FUNCODEREF(fun_thread_name_0),LITREF(lit_1),T2,ENVNUL,PNUL,sloc(21));
  T5 = BOUNDP(YtimeSthreadsYthread_name);
  if (T5 != YPfalse) {
    T4 = VARREF(YtimeSthreadsYthread_name);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_thread_name_0;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YtimeSthreadsYthread_name,T3);
  lit_3 = YPPsym((P)"thread-name-setter");
  lit_4 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T8 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLsymG));
  T7 = YPsig(LITREF(lit_4),YPPlist(2,T8,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_thread_name_setter_1 = YPmet(FUNCODEREF(fun_thread_name_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,sloc(21));
  T11 = BOUNDP(YtimeSthreadsYthread_name_setter);
  if (T11 != YPfalse) {
    T10 = VARREF(YtimeSthreadsYthread_name_setter);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_thread_name_setter_1;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T12);
  VARSET(YtimeSthreadsYthread_name_setter,T9);
  lit_5 = YPPlist(1,YPPsym((P)"_x"));
  T13 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T13,ENVNUL,PNUL,sloc(21));
  T14 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLsymG));
  T15 = fun_2;
  XCALL5(1,VARREF(YPprop),VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_name),VARREF(YtimeSthreadsYthread_name_setter),T14,T15);
  lit_6 = YPPsym((P)"thread-priority");
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_thread_priority_3 = YPmet(FUNCODEREF(fun_thread_priority_3),LITREF(lit_6),T16,ENVNUL,PNUL,sloc(22));
  T19 = BOUNDP(YtimeSthreadsYthread_priority);
  if (T19 != YPfalse) {
    T18 = VARREF(YtimeSthreadsYthread_priority);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_thread_priority_3;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YtimeSthreadsYthread_priority,T17);
  lit_8 = YPPsym((P)"thread-priority-setter");
  lit_9 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T21 = YPsig(LITREF(lit_9),YPPlist(2,VARREF(YLintG),VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_thread_priority_setter_4 = YPmet(FUNCODEREF(fun_thread_priority_setter_4),LITREF(lit_8),T21,ENVNUL,PNUL,sloc(22));
  T24 = BOUNDP(YtimeSthreadsYthread_priority_setter);
  if (T24 != YPfalse) {
    T23 = VARREF(YtimeSthreadsYthread_priority_setter);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_thread_priority_setter_4;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YtimeSthreadsYthread_priority_setter,T22);
  lit_10 = YPPlist(1,YPPsym((P)"_x"));
  T26 = YPsig(LITREF(lit_10),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T26,ENVNUL,PNUL,sloc(22));
  T27 = fun_5;
  XCALL5(1,VARREF(YPprop),VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_priority),VARREF(YtimeSthreadsYthread_priority_setter),VARREF(YLintG),T27);
  lit_11 = YPPsym((P)"thread-function");
  lit_12 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_thread_function_6 = YPmet(FUNCODEREF(fun_thread_function_6),LITREF(lit_11),T28,ENVNUL,PNUL,sloc(23));
  T31 = BOUNDP(YtimeSthreadsYthread_function);
  if (T31 != YPfalse) {
    T30 = VARREF(YtimeSthreadsYthread_function);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_thread_function_6;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YtimeSthreadsYthread_function,T29);
  lit_13 = YPPsym((P)"thread-function-setter");
  lit_14 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T33 = YPsig(LITREF(lit_14),YPPlist(2,VARREF(YLfunG),VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_thread_function_setter_7 = YPmet(FUNCODEREF(fun_thread_function_setter_7),LITREF(lit_13),T33,ENVNUL,PNUL,sloc(23));
  T36 = BOUNDP(YtimeSthreadsYthread_function_setter);
  if (T36 != YPfalse) {
    T35 = VARREF(YtimeSthreadsYthread_function_setter);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_thread_function_setter_7;
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YtimeSthreadsYthread_function_setter,T34);
  lit_15 = YPPlist(1,YPPsym((P)"_x"));
  lit_16 = Ynil;
  T39 = YPsig(LITREF(lit_16),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T39,ENVNUL,PNUL,sloc(23));
  T38 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T38,ENVNUL,PNUL,sloc(23));
  T40 = fun_9;
  XCALL5(1,VARREF(YPprop),VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_function),VARREF(YtimeSthreadsYthread_function_setter),VARREF(YLfunG),T40);
  lit_17 = YPPsym((P)"thread-handle");
  lit_18 = YPPlist(1,YPPsym((P)"_x"));
  T41 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_thread_handle_10 = YPmet(FUNCODEREF(fun_thread_handle_10),LITREF(lit_17),T41,ENVNUL,PNUL,sloc(24));
  T44 = BOUNDP(YtimeSthreadsYthread_handle);
  if (T44 != YPfalse) {
    T43 = VARREF(YtimeSthreadsYthread_handle);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_thread_handle_10;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YtimeSthreadsYthread_handle,T42);
  lit_19 = YPPsym((P)"thread-handle-setter");
  lit_20 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T46 = YPsig(LITREF(lit_20),YPPlist(2,VARREF(YLlocG),VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_thread_handle_setter_11 = YPmet(FUNCODEREF(fun_thread_handle_setter_11),LITREF(lit_19),T46,ENVNUL,PNUL,sloc(24));
  T49 = BOUNDP(YtimeSthreadsYthread_handle_setter);
  if (T49 != YPfalse) {
    T48 = VARREF(YtimeSthreadsYthread_handle_setter);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_thread_handle_setter_11;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YtimeSthreadsYthread_handle_setter,T47);
  XCALL5(1,VARREF(YPprop),VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_handle),VARREF(YtimeSthreadsYthread_handle_setter),VARREF(YLlocG),VARREF(YPprop_unbound_error));
  lit_21 = YPPsym((P)"thread-yield");
  T51 = YPsig(LITREF(lit_16),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_thread_yield_12 = YPmet(FUNCODEREF(fun_thread_yield_12),LITREF(lit_21),T51,ENVNUL,PNUL,sloc(26));
  T54 = BOUNDP(YtimeSthreadsYthread_yield);
  if (T54 != YPfalse) {
    T53 = VARREF(YtimeSthreadsYthread_yield);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_thread_yield_12;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YtimeSthreadsYthread_yield,T52);
  lit_22 = YPPsym((P)"main-thread-key");
  T56 = YPsig(LITREF(lit_16),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YtimeSthreadsYmain_thread_key = YPmet(FUNCODEREF(YtimeSthreadsYmain_thread_key),LITREF(lit_22),T56,ENVNUL,PNUL,sloc(28));
  T57 = YtimeSthreadsYmain_thread_key;
  VARSET(YtimeSthreadsYmain_thread_key,T57);
  lit_23 = YPPsym((P)"new");
  lit_24 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"args"));
  lit_25 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_26 = YPsb((P)"ERROR: %s");
  T63 = YPsig(LITREF(lit_16),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T63,ENVNUL,PNUL,YPfalse);
  T62 = YPsig(LITREF(lit_25),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T62,ENVNUL,PNUL,sloc(36));
  T61 = YPsig(LITREF(lit_16),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T61,ENVNUL,PNUL,sloc(37));
  T60 = YPsig(LITREF(lit_16),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T60,ENVNUL,PNUL,sloc(33));
  T59 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YtimeSthreadsYLthreadG));
  T58 = YPsig(LITREF(lit_24),YPPlist(1,T59),YPtrue,YPint((P)1),VARREF(YtimeSthreadsYLthreadG),Ynil);
  fun_new_18 = YPmet(FUNCODEREF(fun_new_18),LITREF(lit_23),T58,ENVNUL,PNUL,sloc(30));
  T66 = BOUNDP(Ynew);
  if (T66 != YPfalse) {
    T65 = VARREF(Ynew);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_new_18;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(Ynew,T64);
  lit_27 = YPPsym((P)"main");
  T70 = (P)YtimeSthreadsYPthread_current();
  xF3741 = T70;
  T71 = (P)YPtag_into(xF3741,(P)3);
  T69 = T71;
  T68 = XCALLN(1,VARREF(Ynew),7,VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_name),LITREF(lit_27),VARREF(YtimeSthreadsYthread_function),VARREF(YtimeSthreadsYmain_thread_key),VARREF(YtimeSthreadsYthread_handle),T69);
  (P)YtimeSthreadsYPthread_goo_thread_setter(T68);
  lit_28 = YPPlist(1,YPPsym((P)"exp"));
  lit_29 = YPPlist(1,YPPsym((P)"return"));
  lit_30 = YPPsym((P)"x-1767");
  lit_31 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_32 = YPPsym((P)"spawn");
  lit_33 = YPsb((P)"Match Pattern Failure");
  lit_34 = YPPsym((P)"fun");
  lit_35 = Ynil;
  T74 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1767_19 = YPmet(FUNCODEREF(fun_x_1767_19),LITREF(lit_30),T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(LITREF(lit_29),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T72,ENVNUL,PNUL,YPfalse);
  T75 = fun_21;
  YPmacro(YPPsym((P)"time/threads"),YPPsym((P)"spawn"),T75);
  lit_36 = YPPsym((P)"sleep");
  lit_37 = YPPlist(1,YPPsym((P)"secs"));
  T76 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sleep_22 = YPmet(FUNCODEREF(fun_sleep_22),LITREF(lit_36),T76,ENVNUL,PNUL,sloc(52));
  T79 = BOUNDP(YtimeSthreadsYsleep);
  if (T79 != YPfalse) {
    T78 = VARREF(YtimeSthreadsYsleep);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_sleep_22;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YtimeSthreadsYsleep,T77);
  lit_38 = YPPsym((P)"thread-current");
  T81 = YPsig(LITREF(lit_16),Ynil,YPfalse,YPint((P)0),VARREF(YtimeSthreadsYLthreadG),Ynil);
  fun_thread_current_23 = YPmet(FUNCODEREF(fun_thread_current_23),LITREF(lit_38),T81,ENVNUL,PNUL,sloc(55));
  T84 = BOUNDP(YtimeSthreadsYthread_current);
  if (T84 != YPfalse) {
    T83 = VARREF(YtimeSthreadsYthread_current);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_thread_current_23;
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YtimeSthreadsYthread_current,T82);
  lit_39 = YPPsym((P)"thread-join");
  lit_40 = YPPlist(1,YPPsym((P)"t"));
  T86 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_thread_join_24 = YPmet(FUNCODEREF(fun_thread_join_24),LITREF(lit_39),T86,ENVNUL,PNUL,sloc(58));
  T89 = BOUNDP(YtimeSthreadsYthread_join);
  if (T89 != YPfalse) {
    T88 = VARREF(YtimeSthreadsYthread_join);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_thread_join_24;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YtimeSthreadsYthread_join,T87);
  lit_41 = YPPsym((P)"test-thread-1");
  lit_42 = YPPsym((P)"x-1769");
  lit_43 = YPPlist(1,YPPsym((P)"x-1768"));
  lit_44 = YPsb((P)"%d\n");
  T93 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1769_25 = YPmet(FUNCODEREF(fun_x_1769_25),LITREF(lit_42),T93,ENVNUL,PNUL,sloc(62));
  T92 = YPsig(LITREF(lit_16),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T92,ENVNUL,PNUL,sloc(62));
  T91 = YPsig(LITREF(lit_16),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YtimeSthreadsYtest_thread_1 = YPmet(FUNCODEREF(YtimeSthreadsYtest_thread_1),LITREF(lit_41),T91,ENVNUL,PNUL,sloc(61));
  T94 = YtimeSthreadsYtest_thread_1;
  VARSET(YtimeSthreadsYtest_thread_1,T94);
  lit_45 = YPPsym((P)"test-thread-2");
  lit_46 = YPPsym((P)"x-1771");
  lit_47 = YPPlist(1,YPPsym((P)"x-1770"));
  lit_48 = YPsb((P)"%d\n");
  lit_49 = YPflo(FLOINT(1.0));
  T97 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1771_28 = YPmet(FUNCODEREF(fun_x_1771_28),LITREF(lit_46),T97,ENVNUL,PNUL,sloc(65));
  T96 = YPsig(LITREF(lit_16),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T96,ENVNUL,PNUL,sloc(65));
  T95 = YPsig(LITREF(lit_16),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YtimeSthreadsYtest_thread_2 = YPmet(FUNCODEREF(YtimeSthreadsYtest_thread_2),LITREF(lit_45),T95,ENVNUL,PNUL,sloc(64));
  T98 = YtimeSthreadsYtest_thread_2;
  VARSET(YtimeSthreadsYtest_thread_2,T98);
  T99 = YPfalse;
  return T99;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSioSread;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSruntime},
  {&module_info_gooSconditions},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"default-handler-description", &module_info_gooSconditions, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"describe-handler", &module_info_gooSconditions, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"list-handlers", &module_info_gooSconditions, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"*gensym-counter*", &module_info_gooSruntime, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"*current-handlers*", &module_info_gooSconditions, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"build-condition-interactively", &module_info_gooSconditions, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"choose-handler", &module_info_gooSconditions, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"zipped", &module_info_gooSruntime, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"%thread-sleep", PVAR, NULL},
  {"spawn", PVAR, NULL},
  {"thread-handle", CVAR, &YtimeSthreadsYthread_handle},
  {"%thread-detach", PVAR, NULL},
  {"test-thread-1", CVAR, &YtimeSthreadsYtest_thread_1},
  {"thread-yield", CVAR, &YtimeSthreadsYthread_yield},
  {"sleep", CVAR, &YtimeSthreadsYsleep},
  {"thread-name", CVAR, &YtimeSthreadsYthread_name},
  {"thread-priority-setter", CVAR, &YtimeSthreadsYthread_priority_setter},
  {"%thread-current", PVAR, NULL},
  {"%thread-priority-setter", PVAR, NULL},
  {"thread-function", CVAR, &YtimeSthreadsYthread_function},
  {"thread-name-setter", CVAR, &YtimeSthreadsYthread_name_setter},
  {"thread-function-setter", CVAR, &YtimeSthreadsYthread_function_setter},
  {"%thread-yield", PVAR, NULL},
  {"test-thread-2", CVAR, &YtimeSthreadsYtest_thread_2},
  {"thread-join", CVAR, &YtimeSthreadsYthread_join},
  {"---main-0---", PVAR, NULL},
  {"thread-priority", CVAR, &YtimeSthreadsYthread_priority},
  {"thread-current", CVAR, &YtimeSthreadsYthread_current},
  {"<thread>", CVAR, &YtimeSthreadsYLthreadG},
  {"%thread-priority", PVAR, NULL},
  {"%thread-join", PVAR, NULL},
  {"%thread-goo-thread", PVAR, NULL},
  {"main-thread-key", CVAR, &YtimeSthreadsYmain_thread_key},
  {"thread-handle-setter", CVAR, &YtimeSthreadsYthread_handle_setter},
  {"%thread-goo-thread-setter", PVAR, NULL},
  {"%thread-create", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"spawn", NULL},
  {"test-thread-1", NULL},
  {"thread-function", NULL},
  {"test-thread-2", NULL},
  {"thread-priority", NULL},
  {"thread-current", NULL},
  {"<thread>", NULL},
  {"thread-name", NULL},
  {"thread-yield", NULL},
  {"sleep", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_timeSthreads;
MODULE_INFO module_info_timeSthreads = {
  "time/threads",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_gooSruntime (void);
extern void load_module_gooSconditions (void);

/* EXPRESSION: */

extern void load_module_timeSthreads (void);

void load_module_timeSthreads (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_gooSruntime();
  load_module_gooSconditions();

  (P)YtimeSthreadsY___main_0___();

}

/* END OF GENERATED CODE. */
