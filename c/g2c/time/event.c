/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"time/event");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: time/event */

EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YtimeSeventYevent_name_setter,"time/event","event-name-setter");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YtimeSlockYLlockG,"time/lock","<lock>");
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
DEF(YtimeSeventYevent_broadcast,"time/event","event-broadcast");
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
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
DEF(YtimeSeventYevent_signal,"time/event","event-signal");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YtimeSeventYevent_reset,"time/event","event-reset");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
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
EXT(YtimeSlockYlock_state,"time/lock","lock-state");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YtimeSthreadsYsleep,"time/threads","sleep");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YtimeSthreadsYthread_name,"time/threads","thread-name");
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
EXT(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
DEF(YtimeSeventYevent_handle_setter,"time/event","event-handle-setter");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSioSportYclose,"goo/io/port","close");
DEF(YtimeSeventYevent_name,"time/event","event-name");
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
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
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
EXT(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
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
EXT(YtimeSlockYlock_lock,"time/lock","lock-lock");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YtimeSlockYlock_handle,"time/lock","lock-handle");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
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
EXT(YtimeSthreadsYthread_current,"time/threads","thread-current");
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
DEF(YtimeSeventYevent_handle,"time/event","event-handle");
EXT(YtimeSthreadsYLthreadG,"time/threads","<thread>");
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
DEF(YtimeSeventYevent_wait,"time/event","event-wait");
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
EXT(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
DEF(YtimeSeventYLeventG,"time/event","<event>");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yunexec,"goo/boot","unexec");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
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
DEF(YtimeSeventYevent_wait_timed,"time/event","event-wait-timed");
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

DEFLIT(lit_7);
DEFLIT(lit_14);
DEFLIT(lit_15);
DEFLIT(lit_6);
DEFLIT(lit_13);
DEFLIT(lit_9);
DEFLIT(lit_17);
DEFLIT(lit_10);
DEFLIT(lit_5);
DEFLIT(lit_4);
DEFLIT(lit_21);
DEFLIT(lit_16);
DEFLIT(lit_8);
DEFLIT(lit_3);
DEFLIT(lit_12);
DEFLIT(lit_0);
DEFLIT(lit_19);
DEFLIT(lit_20);
DEFLIT(lit_2);
DEFLIT(lit_1);
DEFLIT(lit_18);
DEFLIT(lit_22);
DEFLIT(lit_11);

/* FUNCTIONS: */

LOCFOR(fun_event_name_0);
LOCFOR(fun_event_name_setter_1);
LOCFOR(fun_2);
LOCFOR(fun_event_handle_3);
LOCFOR(fun_event_handle_setter_4);
LOCFOR(fun_new_5);
LOCFOR(fun_event_signal_6);
LOCFOR(fun_event_broadcast_7);
LOCFOR(fun_event_reset_8);
LOCFOR(fun_event_wait_9);
LOCFOR(fun_event_wait_timed_10);
extern P YtimeSeventY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_event_name_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YtimeSeventYevent_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_event_name_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YtimeSeventYevent_name));
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

FUNCODEDEF(fun_event_handle_3) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YtimeSeventYevent_handle));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_event_handle_setter_4) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YtimeSeventYevent_handle));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_new_5) {
  P c_,args_;
  P xF3770;
  P tmpF3769;
  P eventF3768;
  P xF3767;
  P yF3766;
  P xF3765;
  P tmpF3764;
  P next_metsF3763;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
loop:
  T2 = (P)YPnext_methods();
  next_metsF3763 = T2;
  tmpF3764 = next_metsF3763;
  if (tmpF3764 != YPfalse) {
    xF3765 = next_metsF3763;
    yF3766 = Ynil;
    T9 = (P)YPeqQ(xF3765,yF3766);
    T8 = (P)YPbb(T9);
    T7 = T8;
    xF3767 = T7;
    T11 = (P)YPeqQ(xF3767,YPfalse);
    T10 = (P)YPbb(T11);
    T6 = T10;
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T4 = T5;
  if (T4 != YPfalse) {
    T13 = CALL1(1,VARREF(Yhead),next_metsF3763);
    T14 = CALL1(1,VARREF(Ytail),next_metsF3763);
    T12 = CALL4(1,VARREF(YgooSmacrosYnapp),T13,T14,c_,args_);
    T3 = T12;
  } else {
    T16 = (P)YPfun_reg();
    T17 = CALL2(1,VARREF(Ylst),c_,args_);
    T15 = CALL2(1,VARREF(Yno_next_methods_error),T16,T17);
    T3 = T15;
  }
  T1 = T3;
  eventF3768 = T1;
  T23 = CALL1(1,VARREF(YtimeSeventYevent_name),eventF3768);
  tmpF3769 = T23;
  if (tmpF3769 != YPfalse) {
    T24 = tmpF3769;
  } else {
    T24 = LITREF(lit_12);
  }
  T22 = T24;
  T21 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T22);
  T20 = (P)YPsu(T21);
  T19 = (P)YtimeSeventYPevent_create(T20);
  xF3770 = T19;
  T25 = (P)YPtag_into(xF3770,(P)3);
  T18 = T25;
  CALL2(1,VARREF(YtimeSeventYevent_handle_setter),T18,eventF3768);
  T0 = eventF3768;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_event_signal_6) {
  P e_;
  P xF3771;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF3771 = T1;
  T2 = (P)YPuntag_into(xF3771);
  T0 = T2;
  (P)YtimeSeventYPevent_signal(T0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_event_broadcast_7) {
  P e_;
  P xF3772;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF3772 = T1;
  T2 = (P)YPuntag_into(xF3772);
  T0 = T2;
  (P)YtimeSeventYPevent_broadcast(T0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_event_reset_8) {
  P e_;
  P xF3773;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF3773 = T1;
  T2 = (P)YPuntag_into(xF3773);
  T0 = T2;
  (P)YtimeSeventYPevent_reset(T0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_event_wait_9) {
  P e_,l_;
  P xF3775;
  P xF3774;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(l_, 1);
loop:
  T3 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF3774 = T3;
  T4 = (P)YPuntag_into(xF3774);
  T2 = T4;
  T6 = CALL1(1,VARREF(YtimeSlockYlock_handle),l_);
  xF3775 = T6;
  T7 = (P)YPuntag_into(xF3775);
  T5 = T7;
  T1 = (P)YtimeSeventYPevent_wait(T2,T5);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_event_wait_timed_10) {
  P e_,l_,secs_;
  P xF3777;
  P xF3776;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(l_, 1);
  ARG(secs_, 2);
loop:
  T3 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF3776 = T3;
  T4 = (P)YPuntag_into(xF3776);
  T2 = T4;
  T6 = CALL1(1,VARREF(YtimeSlockYlock_handle),l_);
  xF3777 = T6;
  T7 = (P)YPuntag_into(xF3777);
  T5 = T7;
  T8 = (P)YPfu(secs_);
  T1 = (P)YtimeSeventYPevent_wait_timed(T2,T5,T8);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

P YtimeSeventY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"<event>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YtimeSeventYLeventG,T0);
  lit_1 = YPPsym((P)"event-name");
  lit_2 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_name_0 = YPmet(FUNCODEREF(fun_event_name_0),LITREF(lit_1),T2,ENVNUL,PNUL,sloc(20));
  T5 = BOUNDP(YtimeSeventYevent_name);
  if (T5 != YPfalse) {
    T4 = VARREF(YtimeSeventYevent_name);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_event_name_0;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YtimeSeventYevent_name,T3);
  lit_3 = YPPsym((P)"event-name-setter");
  lit_4 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T8 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLsymG));
  T7 = YPsig(LITREF(lit_4),YPPlist(2,T8,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_event_name_setter_1 = YPmet(FUNCODEREF(fun_event_name_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,sloc(20));
  T11 = BOUNDP(YtimeSeventYevent_name_setter);
  if (T11 != YPfalse) {
    T10 = VARREF(YtimeSeventYevent_name_setter);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_event_name_setter_1;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T12);
  VARSET(YtimeSeventYevent_name_setter,T9);
  lit_5 = YPPlist(1,YPPsym((P)"_x"));
  T13 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T13,ENVNUL,PNUL,sloc(20));
  T14 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLsymG));
  T15 = fun_2;
  XCALL5(1,VARREF(YPprop),VARREF(YtimeSeventYLeventG),VARREF(YtimeSeventYevent_name),VARREF(YtimeSeventYevent_name_setter),T14,T15);
  lit_6 = YPPsym((P)"event-handle");
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_handle_3 = YPmet(FUNCODEREF(fun_event_handle_3),LITREF(lit_6),T16,ENVNUL,PNUL,sloc(21));
  T19 = BOUNDP(YtimeSeventYevent_handle);
  if (T19 != YPfalse) {
    T18 = VARREF(YtimeSeventYevent_handle);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_event_handle_3;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YtimeSeventYevent_handle,T17);
  lit_8 = YPPsym((P)"event-handle-setter");
  lit_9 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T21 = YPsig(LITREF(lit_9),YPPlist(2,VARREF(YLanyG),VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_event_handle_setter_4 = YPmet(FUNCODEREF(fun_event_handle_setter_4),LITREF(lit_8),T21,ENVNUL,PNUL,sloc(21));
  T24 = BOUNDP(YtimeSeventYevent_handle_setter);
  if (T24 != YPfalse) {
    T23 = VARREF(YtimeSeventYevent_handle_setter);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_event_handle_setter_4;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YtimeSeventYevent_handle_setter,T22);
  XCALL5(1,VARREF(YPprop),VARREF(YtimeSeventYLeventG),VARREF(YtimeSeventYevent_handle),VARREF(YtimeSeventYevent_handle_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_10 = YPPsym((P)"new");
  lit_11 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"args"));
  lit_12 = YPsb((P)"");
  T27 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YtimeSeventYLeventG));
  T26 = YPsig(LITREF(lit_11),YPPlist(1,T27),YPtrue,YPint((P)1),VARREF(YtimeSeventYLeventG),Ynil);
  fun_new_5 = YPmet(FUNCODEREF(fun_new_5),LITREF(lit_10),T26,ENVNUL,PNUL,sloc(23));
  T30 = BOUNDP(Ynew);
  if (T30 != YPfalse) {
    T29 = VARREF(Ynew);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_new_5;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(Ynew,T28);
  lit_13 = YPPsym((P)"event-signal");
  lit_14 = YPPlist(1,YPPsym((P)"e"));
  T32 = YPsig(LITREF(lit_14),YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_signal_6 = YPmet(FUNCODEREF(fun_event_signal_6),LITREF(lit_13),T32,ENVNUL,PNUL,sloc(29));
  T35 = BOUNDP(YtimeSeventYevent_signal);
  if (T35 != YPfalse) {
    T34 = VARREF(YtimeSeventYevent_signal);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_event_signal_6;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YtimeSeventYevent_signal,T33);
  lit_15 = YPPsym((P)"event-broadcast");
  lit_16 = YPPlist(1,YPPsym((P)"e"));
  T37 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_broadcast_7 = YPmet(FUNCODEREF(fun_event_broadcast_7),LITREF(lit_15),T37,ENVNUL,PNUL,sloc(32));
  T40 = BOUNDP(YtimeSeventYevent_broadcast);
  if (T40 != YPfalse) {
    T39 = VARREF(YtimeSeventYevent_broadcast);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_event_broadcast_7;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YtimeSeventYevent_broadcast,T38);
  lit_17 = YPPsym((P)"event-reset");
  lit_18 = YPPlist(1,YPPsym((P)"e"));
  T42 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_reset_8 = YPmet(FUNCODEREF(fun_event_reset_8),LITREF(lit_17),T42,ENVNUL,PNUL,sloc(38));
  T45 = BOUNDP(YtimeSeventYevent_reset);
  if (T45 != YPfalse) {
    T44 = VARREF(YtimeSeventYevent_reset);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_event_reset_8;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YtimeSeventYevent_reset,T43);
  lit_19 = YPPsym((P)"event-wait");
  lit_20 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"l"));
  T47 = YPsig(LITREF(lit_20),YPPlist(2,VARREF(YtimeSeventYLeventG),VARREF(YtimeSlockYLlockG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_event_wait_9 = YPmet(FUNCODEREF(fun_event_wait_9),LITREF(lit_19),T47,ENVNUL,PNUL,sloc(41));
  T50 = BOUNDP(YtimeSeventYevent_wait);
  if (T50 != YPfalse) {
    T49 = VARREF(YtimeSeventYevent_wait);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_event_wait_9;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YtimeSeventYevent_wait,T48);
  lit_21 = YPPsym((P)"event-wait-timed");
  lit_22 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"l"),YPPsym((P)"secs"));
  T52 = YPsig(LITREF(lit_22),YPPlist(3,VARREF(YtimeSeventYLeventG),VARREF(YtimeSlockYLlockG),VARREF(YLfloG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_event_wait_timed_10 = YPmet(FUNCODEREF(fun_event_wait_timed_10),LITREF(lit_21),T52,ENVNUL,PNUL,sloc(44));
  T55 = BOUNDP(YtimeSeventYevent_wait_timed);
  if (T55 != YPfalse) {
    T54 = VARREF(YtimeSeventYevent_wait_timed);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_event_wait_timed_10;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YtimeSeventYevent_wait_timed,T53);
  T57 = YPfalse;
  return T57;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_timeSthreads;
extern MODULE_INFO module_info_timeSlock;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSruntime;
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
  {&module_info_timeSthreads},
  {&module_info_timeSlock},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"<lock>", &module_info_timeSlock, NULL},
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
  {"with-lock", &module_info_timeSlock, NULL},
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
  {"spawn", &module_info_timeSthreads, NULL},
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
  {"test-thread-1", &module_info_timeSthreads, NULL},
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
  {"lock-state", &module_info_timeSlock, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"sleep", &module_info_timeSthreads, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"thread-name", &module_info_timeSthreads, NULL},
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
  {"thread-function", &module_info_timeSthreads, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
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
  {"test-thread-2", &module_info_timeSthreads, NULL},
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
  {"lock-destroy", &module_info_timeSlock, NULL},
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
  {"lock-lock", &module_info_timeSlock, NULL},
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
  {"lock-handle", &module_info_timeSlock, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"thread-priority", &module_info_timeSthreads, NULL},
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
  {"thread-current", &module_info_timeSthreads, NULL},
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
  {"<thread>", &module_info_timeSthreads, NULL},
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
  {"lock-unlock", &module_info_timeSlock, NULL},
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
  {"thread-yield", &module_info_timeSthreads, NULL},
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
  {"event-name-setter", CVAR, &YtimeSeventYevent_name_setter},
  {"%event-broadcast", PVAR, NULL},
  {"event-broadcast", CVAR, &YtimeSeventYevent_broadcast},
  {"event-signal", CVAR, &YtimeSeventYevent_signal},
  {"event-reset", CVAR, &YtimeSeventYevent_reset},
  {"%event-reset", PVAR, NULL},
  {"event-handle-setter", CVAR, &YtimeSeventYevent_handle_setter},
  {"event-name", CVAR, &YtimeSeventYevent_name},
  {"%event-wait-timed", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"event-handle", CVAR, &YtimeSeventYevent_handle},
  {"%event-wait", PVAR, NULL},
  {"%event-create", PVAR, NULL},
  {"%event-signal", PVAR, NULL},
  {"event-wait", CVAR, &YtimeSeventYevent_wait},
  {"%event-destroy", PVAR, NULL},
  {"<event>", CVAR, &YtimeSeventYLeventG},
  {"event-wait-timed", CVAR, &YtimeSeventYevent_wait_timed},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"event-broadcast", NULL},
  {"event-signal", NULL},
  {"event-name", NULL},
  {"event-wait", NULL},
  {"event-reset", NULL},
  {"<event>", NULL},
  {"event-wait-timed", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_timeSevent;
MODULE_INFO module_info_timeSevent = {
  "time/event",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_timeSthreads (void);
extern void load_module_timeSlock (void);

/* EXPRESSION: */

extern void load_module_timeSevent (void);

void load_module_timeSevent (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_timeSthreads();
  load_module_timeSlock();

  (P)YtimeSeventY___main_0___();

}

/* END OF GENERATED CODE. */
