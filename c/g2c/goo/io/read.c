/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/io/read");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/io/read */

EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YgooSioSreadYsub_read_curlies,"goo/io/read","sub-read-curlies");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
DEF(YgooSioSreadYtoken_message,"goo/io/read","token-message");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YgooSioSreadYsub_read_token,"goo/io/read","sub-read-token");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLnumG,"goo/boot","<num>");
DEF(YgooSioSreadYsub_read_constituent,"goo/io/read","sub-read-constituent");
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
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YgooSioSreadYDstring_escape_chars,"goo/io/read","$string-escape-chars");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
DEF(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
DEF(YgooSioSreadYTread_terminatingQ_vectorT,"goo/io/read","*read-terminating?-vector*");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(Yhead,"goo/boot","head");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
DEF(YgooSioSreadYmake_reader_token,"goo/io/read","make-reader-token");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YgooSioSreadYDstrange_symbol_names,"goo/io/read","$strange-symbol-names");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
DEF(YgooSioSreadYDclose_curly,"goo/io/read","$close-curly");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YgooSioSreadYLreader_tokenG,"goo/io/read","<reader-token>");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YtT,"goo/boot","t*");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmacrosY1st,"goo/macros","1st");
DEF(YgooSioSreadYread_string_literal,"goo/io/read","read-string-literal");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
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
DEF(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
DEF(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
DEF(YgooSioSreadYsub_read,"goo/io/read","sub-read");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YLtupG,"goo/boot","<tup>");
DEF(YgooSioSreadYmake_immutableX,"goo/io/read","make-immutable!");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YLmetG,"goo/boot","<met>");
DEF(YgooSioSreadYsub_read_brackets,"goo/io/read","sub-read-brackets");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYneg,"goo/math","neg");
DEF(YgooSioSreadYpreferred_case,"goo/io/read","preferred-case");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(Ynil,"goo/boot","nil");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
DEF(YgooSioSreadYDvert_proxy,"goo/io/read","$vert-proxy");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YLfunG,"goo/boot","<fun>");
DEF(YgooSioSreadYTsharp_macrosT,"goo/io/read","*sharp-macros*");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
DEF(YgooSioSreadYsub_read_carefully,"goo/io/read","sub-read-carefully");
DEF(YgooSioSreadYset_standard_syntaxX,"goo/io/read","set-standard-syntax!");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Ytup,"goo/boot","tup");
DEF(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
DEF(YgooSioSreadYreading_error,"goo/io/read","reading-error");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YPsnul,"goo/boot","%snul");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooStypesYas,"goo/types","as");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yadd_prop,"goo/boot","add-prop");
DEF(YgooSioSreadYtoken_message_setter,"goo/io/read","token-message-setter");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YgooSioSreadYsub_read_list_eof_error,"goo/io/read","sub-read-list-eof-error");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
DEF(YgooSioSreadYDvert_sym,"goo/io/read","$vert-sym");
DEF(YgooSioSreadYDclose_bracket,"goo/io/read","$close-bracket");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSmagYG,"goo/mag",">");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
DEF(YgooSioSreadYDclose_paren,"goo/io/read","$close-paren");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YLcolG,"goo/boot","<col>");
DEF(YgooSioSreadYdefine_sharp_macro,"goo/io/read","define-sharp-macro");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(Yclone,"goo/boot","clone");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(Yfun_names,"goo/boot","fun-names");
DEF(YgooSioSreadYflush_whitespace,"goo/io/read","flush-whitespace");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YgooSioSreadYreverse_list_Gstring,"goo/io/read","reverse-list->string");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
DEF(YgooSioSreadYsub_read_seq,"goo/io/read","sub-read-seq");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YgooSioSreadYTread_dispatch_vectorT,"goo/io/read","*read-dispatch-vector*");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmathYGG,"goo/math",">>");
DEF(YgooSioSreadYsub_read_vertical,"goo/io/read","sub-read-vertical");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSioSportYport_handle_setter,"goo/io/port","port-handle-setter");
DEF(YgooSioSreadYparse_token,"goo/io/read","parse-token");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
DEF(YgooSioSreadYwarn,"goo/io/read","warn");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
DEF(YgooSioSreadYreader_tokenQ,"goo/io/read","reader-token?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLfixnumG,"goo/boot","<fixnum>");
DEF(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
DEF(YgooSioSreadYgobble_line,"goo/io/read","gobble-line");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
DEF(YgooSioSreadYgobble_nested_comment,"goo/io/read","gobble-nested-comment");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(YgooSioSreadYsub_read_list,"goo/io/read","sub-read-list");
EXT(YLpropG,"goo/boot","<prop>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_122);
DEFLIT(lit_55);
DEFLIT(lit_104);
DEFLIT(lit_90);
DEFLIT(lit_29);
DEFLIT(lit_89);
DEFLIT(lit_22);
DEFLIT(lit_60);
DEFLIT(lit_24);
DEFLIT(lit_53);
DEFLIT(lit_31);
DEFLIT(lit_42);
DEFLIT(lit_58);
DEFLIT(lit_54);
DEFLIT(lit_63);
DEFLIT(lit_69);
DEFLIT(lit_50);
DEFLIT(lit_109);
DEFLIT(lit_72);
DEFLIT(lit_52);
DEFLIT(lit_121);
DEFLIT(lit_93);
DEFLIT(lit_85);
DEFLIT(lit_108);
DEFLIT(lit_6);
DEFLIT(lit_38);
DEFLIT(lit_78);
DEFLIT(lit_59);
DEFLIT(lit_74);
DEFLIT(lit_14);
DEFLIT(lit_71);
DEFLIT(lit_100);
DEFLIT(lit_45);
DEFLIT(lit_15);
DEFLIT(lit_126);
DEFLIT(lit_21);
DEFLIT(lit_119);
DEFLIT(lit_103);
DEFLIT(lit_81);
DEFLIT(lit_125);
DEFLIT(lit_73);
DEFLIT(lit_46);
DEFLIT(lit_65);
DEFLIT(lit_92);
DEFLIT(lit_120);
DEFLIT(lit_16);
DEFLIT(lit_113);
DEFLIT(lit_83);
DEFLIT(lit_115);
DEFLIT(lit_51);
DEFLIT(lit_1);
DEFLIT(lit_33);
DEFLIT(lit_112);
DEFLIT(lit_37);
DEFLIT(lit_3);
DEFLIT(lit_28);
DEFLIT(lit_105);
DEFLIT(lit_39);
DEFLIT(lit_124);
DEFLIT(lit_64);
DEFLIT(lit_13);
DEFLIT(lit_10);
DEFLIT(lit_117);
DEFLIT(lit_114);
DEFLIT(lit_130);
DEFLIT(lit_49);
DEFLIT(lit_95);
DEFLIT(lit_44);
DEFLIT(lit_0);
DEFLIT(lit_77);
DEFLIT(lit_12);
DEFLIT(lit_82);
DEFLIT(lit_96);
DEFLIT(lit_99);
DEFLIT(lit_62);
DEFLIT(lit_102);
DEFLIT(lit_11);
DEFLIT(lit_7);
DEFLIT(lit_128);
DEFLIT(lit_101);
DEFLIT(lit_48);
DEFLIT(lit_41);
DEFLIT(lit_98);
DEFLIT(lit_23);
DEFLIT(lit_76);
DEFLIT(lit_30);
DEFLIT(lit_94);
DEFLIT(lit_4);
DEFLIT(lit_110);
DEFLIT(lit_20);
DEFLIT(lit_86);
DEFLIT(lit_35);
DEFLIT(lit_80);
DEFLIT(lit_8);
DEFLIT(lit_26);
DEFLIT(lit_111);
DEFLIT(lit_127);
DEFLIT(lit_67);
DEFLIT(lit_56);
DEFLIT(lit_36);
DEFLIT(lit_131);
DEFLIT(lit_66);
DEFLIT(lit_84);
DEFLIT(lit_43);
DEFLIT(lit_116);
DEFLIT(lit_18);
DEFLIT(lit_123);
DEFLIT(lit_70);
DEFLIT(lit_34);
DEFLIT(lit_2);
DEFLIT(lit_61);
DEFLIT(lit_25);
DEFLIT(lit_91);
DEFLIT(lit_57);
DEFLIT(lit_40);
DEFLIT(lit_68);
DEFLIT(lit_87);
DEFLIT(lit_5);
DEFLIT(lit_19);
DEFLIT(lit_106);
DEFLIT(lit_97);
DEFLIT(lit_27);
DEFLIT(lit_129);
DEFLIT(lit_17);
DEFLIT(lit_79);
DEFLIT(lit_75);
DEFLIT(lit_118);
DEFLIT(lit_47);
DEFLIT(lit_107);
DEFLIT(lit_9);
DEFLIT(lit_32);
DEFLIT(lit_88);

/* FUNCTIONS: */

LOCFOR(fun_loop_0);
LOCFOR(fun_read_1);
LOCFOR(fun_2);
LOCFOR(fun_3);
LOCFOR(fun_read_from_string_4);
LOCFOR(fun_sub_read_carefully_5);
LOCFOR(fun_token_message_6);
LOCFOR(fun_token_message_setter_7);
LOCFOR(fun_make_reader_token_8);
LOCFOR(fun_reader_tokenQ_9);
LOCFOR(fun_sub_read_10);
LOCFOR(fun_11);
LOCFOR(fun_set_standard_syntaxX_12);
LOCFOR(fun_13);
LOCFOR(fun_14);
FUNFOR(YgooSioSreadYflush_whitespace);
LOCFOR(fun_loop_16);
FUNFOR(YgooSioSreadYread_delimited_list);
FUNFOR(YgooSioSreadYsub_read_constituent);
LOCFOR(fun_19);
LOCFOR(fun_set_standard_read_macroX_20);
LOCFOR(fun_get_standard_read_macro_21);
LOCFOR(fun_sub_read_vertical_22);
FUNFOR(YgooSioSreadYsub_read_list_eof_error);
LOCFOR(fun_read_next_24);
LOCFOR(fun_sub_read_list_25);
LOCFOR(fun_sub_read_seq_26);
LOCFOR(fun_sub_read_brackets_27);
LOCFOR(fun_sub_read_curlies_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_loop_35);
FUNFOR(YgooSioSreadYread_string_literal);
LOCFOR(fun_37);
LOCFOR(fun_loop_38);
LOCFOR(fun_gobble_line_39);
LOCFOR(fun_define_sharp_macro_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_44);
LOCFOR(fun_loop_45);
FUNFOR(YgooSioSreadYgobble_nested_comment);
LOCFOR(fun_47);
LOCFOR(fun_48);
LOCFOR(fun_49);
LOCFOR(fun_50);
LOCFOR(fun_51);
LOCFOR(fun_52);
LOCFOR(fun_loop_53);
LOCFOR(fun_sub_read_token_54);
LOCFOR(fun_55);
LOCFOR(fun_parse_token_56);
LOCFOR(fun_reading_error_57);
LOCFOR(fun_warn_58);
LOCFOR(fun_reverse_list_Gstring_59);
LOCFOR(fun_make_immutableX_60);
extern P YgooSioSreadY___main_0___ ();
extern P YgooSioSreadY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_loop_0) {
  P formF2324;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read),FREEREF(0));
  formF2324 = T1;
  T4 = CALL1(1,VARREF(YgooSioSreadYreader_tokenQ),formF2324);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T2 = formF2324;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),formF2324,VARREF(YgooSioSreadYDclose_paren));
    if (T6 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooSioSreadYwarn),LITREF(lit_4));
      T5 = T7;
    } else {
      goto loop;
      T5 = T8;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_read_1) {
  P port_;
  P loopF2325;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_0,2);
  loopF2325 = T1;
  FUNINIT(loopF2325, 2,port_,loopF2325);
  T2 = CALL0(0,loopF2325);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  P T0,T1,T2;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_in_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(YgooSconditionsYread),T2);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_3) {
  P tmpF2326;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2326 = T1;
  if (tmpF2326 != YPfalse) {
    T4 = BOXVAL(FREEREF(0));
    T3 = CALL1(1,VARREF(YgooSioSportYclose),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_read_from_string_4) {
  P x_;
  P portF2327;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  portF2327 = YPfalse;
  portF2327 = BOXFAB(portF2327);
  T3 = FUNFAB(fun_2,2,portF2327,x_);
  T4 = FUNFAB(fun_3,1,portF2327);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_carefully_5) {
  P port_;
  P formF2328;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
  formF2328 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF2328);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_9));
    T2 = T4;
  } else {
    T6 = CALL1(1,VARREF(YgooSioSreadYreader_tokenQ),formF2328);
    if (T6 != YPfalse) {
      T8 = CALL1(1,VARREF(Ytail),formF2328);
      T7 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,T8);
      T5 = T7;
    } else {
      T5 = formF2328;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_token_message_6) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSioSreadYtoken_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_token_message_setter_7) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSioSreadYtoken_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_make_reader_token_8) {
  P message_;
  P T0;
  P a1;
LINK_STACK();
  ARG(message_, 0);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSreadYLreader_tokenG),VARREF(YgooSioSreadYtoken_message),message_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reader_tokenQ_9) {
  P form_;
  P T0;
  P a1;
LINK_STACK();
  ARG(form_, 0);
loop:
  T0 = CALL2(1,VARREF(YisaQ),form_,VARREF(YgooSioSreadYLreader_tokenG));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sub_read_10) {
  P port_;
  P cF2329;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYget),port_);
  cF2329 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2329);
  if (T3 != YPfalse) {
    T2 = cF2329;
  } else {
    T6 = CALL1(1,VARREF(YgooSmathYchar_Gascii),cF2329);
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_dispatch_vectorT),T6);
    T4 = CALL2(1,T5,cF2329,port_);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P c_,port_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_25),c_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_set_standard_syntaxX_12) {
  P char_,terminatingQ_,reader_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(char_, 0);
  ARG(terminatingQ_, 1);
  ARG(reader_, 2);
loop:
  T0 = CALL1(1,VARREF(YgooSmathYchar_Gascii),char_);
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),reader_,VARREF(YgooSioSreadYTread_dispatch_vectorT),T0);
  T2 = CALL1(1,VARREF(YgooSmathYchar_Gascii),char_);
  T1 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),terminatingQ_,VARREF(YgooSioSreadYTread_terminatingQ_vectorT),T2);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_13) {
  P c_,port_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T0 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_14) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),FREEREF(0),VARREF(YgooSioSreadYTread_dispatch_vectorT),c_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYflush_whitespace) {
  P port_;
  P cF2330;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF2330 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYchar_Gascii),cF2330);
  T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),VARREF(YgooScolsSstrYascii_whitespaces),T4);
  if (T3 != YPfalse) {
    CALL1(1,VARREF(YgooSioSportYget),port_);
    T5 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
    T2 = T5;
  } else {
    T2 = cF2330;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_16) {
  P c_;
  P UF2331;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),c_,FREEREF(0));
  if (T1 != YPfalse) {
    CALL1(1,VARREF(YgooSioSportYget),FREEREF(1));
    T3 = BOXVAL(FREEREF(2));
    T2 = CALL1(1,VARREF(YgooScolsSseqYrev),T3);
    T0 = T2;
  } else {
    T4 = BOXVAL(FREEREF(2));
    UF2331 = T4;
    T7 = CALL1(1,VARREF(YgooSconditionsYread),FREEREF(1));
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),T7,UF2331);
    T5 = BOXVAL(FREEREF(2)) = T6;
    T9 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),FREEREF(1));
    a1 = T9;
    c_ = a1;
    goto loop;
    T0 = T8;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYread_delimited_list) {
  P endchar_,port_;
  P loopF2333;
  P retlistF2332;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(endchar_, 0);
  ARG(port_, 1);
loop:
  retlistF2332 = VARREF(Ynil);
  retlistF2332 = BOXFAB(retlistF2332);
  T3 = FUNSHELL(1,fun_loop_16,4);
  loopF2333 = T3;
  FUNINIT(loopF2333, 4,endchar_,port_,retlistF2332,loopF2333);
  T5 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
  T4 = CALL1(0,loopF2333,T5);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYsub_read_constituent) {
  P c_,port_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSioSreadYsub_read_token),c_,port_);
  T0 = CALL2(1,VARREF(YgooSioSreadYparse_token),T1,port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_19) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL3(1,VARREF(YgooSioSreadYset_standard_syntaxX),c_,YPfalse,VARREF(YgooSioSreadYsub_read_constituent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_set_standard_read_macroX_20) {
  P char_,terminatingQ_,proc_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(char_, 0);
  ARG(terminatingQ_, 1);
  ARG(proc_, 2);
loop:
  T0 = CALL3(1,VARREF(YgooSioSreadYset_standard_syntaxX),char_,terminatingQ_,proc_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_get_standard_read_macro_21) {
  P char_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYchar_Gascii),char_);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_dispatch_vectorT),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_vertical_22) {
  P c_,port_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSioSreadYparse_token),LITREF(lit_46),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYsub_read_list_eof_error) {
  P port_;
  P T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_51));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_read_next_24) {
  P c_,prev_,line_,form_;
  P nextF2335;
  P prevF2334;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(c_, 0);
  ARG(prev_, 1);
  ARG(line_, 2);
  ARG(form_, 3);
loop:
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),prev_,VARREF(YgooSioSreadYDvert_proxy));
  if (T2 != YPfalse) {
    T1 = VARREF(YgooSioSreadYDvert_sym);
  } else {
    T1 = prev_;
  }
  prevF2334 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),form_);
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSioSreadYsub_read_list_eof_error),FREEREF(0));
    T3 = T5;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),form_,VARREF(YgooSioSreadYDclose_paren));
    if (T7 != YPfalse) {
      T8 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,prevF2334);
      T6 = T8;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),form_,VARREF(YgooSioSreadYDvert_sym));
      if (T10 != YPfalse) {
        T12 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),FREEREF(0));
        nextF2335 = T12;
        T15 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,nextF2335);
        T14 = CALL3(1,VARREF(YgooScolsSlstYline_pair),prevF2334,T15,line_);
        T16 = CALL2(1,VARREF(YgooSioSreadYsub_read_list),c_,FREEREF(0));
        T13 = CALL3(1,VARREF(YgooScolsSlstYline_pair),T14,T16,line_);
        T11 = T13;
        T9 = T11;
      } else {
        if (YPtrue != YPfalse) {
          T20 = CALL1(1,VARREF(YgooSioSportYport_line),FREEREF(0));
          T21 = CALL1(1,VARREF(YgooSioSreadYsub_read),FREEREF(0));
          T19 = CALL4(1,FREEREF(1),c_,form_,T20,T21);
          T18 = CALL3(1,VARREF(YgooScolsSlstYline_pair),prevF2334,T19,line_);
          T17 = T18;
        } else {
          T17 = YPfalse;
        }
        T9 = T17;
      }
      T6 = T9;
    }
    T3 = T6;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_list_25) {
  P c_,p_;
  P read_nextF2338;
  P formF2337;
  P lineF2336;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(p_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYport_line),p_);
  lineF2336 = T1;
  T3 = CALL1(1,VARREF(YgooSioSreadYsub_read),p_);
  formF2337 = T3;
  T5 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF2337);
  if (T5 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSioSreadYsub_read_list_eof_error),p_);
    T4 = T6;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),formF2337,VARREF(YgooSioSreadYDclose_paren));
    if (T8 != YPfalse) {
      T7 = Ynil;
    } else {
      if (YPtrue != YPfalse) {
        T11 = FUNSHELL(1,fun_read_next_24,2);
        read_nextF2338 = T11;
        FUNINIT(read_nextF2338, 2,p_,read_nextF2338);
        T13 = CALL1(1,VARREF(YgooSioSreadYsub_read),p_);
        T12 = CALL4(1,read_nextF2338,c_,formF2337,lineF2336,T13);
        T10 = T12;
        T9 = T10;
      } else {
        T9 = YPfalse;
      }
      T7 = T9;
    }
    T4 = T7;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_seq_26) {
  P c_,e_,port_;
  P formF2339;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(c_, 0);
  ARG(e_, 1);
  ARG(port_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
  formF2339 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF2339);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_58));
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),formF2339,e_);
    if (T6 != YPfalse) {
      T5 = Ynil;
    } else {
      T8 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,e_,port_);
      T7 = CALL2(1,VARREF(YgooSmacrosYpair),formF2339,T8);
      T5 = T7;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_brackets_27) {
  P c_,port_;
  P x_1392F2342;
  P x_1391F2341;
  P formF2340;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,VARREF(YgooSioSreadYDclose_bracket),port_);
  formF2340 = T1;
  T3 = CALL1(1,VARREF(YgooStypesYlen),formF2340);
  x_1391F2341 = T3;
  x_1392F2342 = VARREF(YgooSmacrosYEE);
  T6 = CALL2(1,x_1392F2342,x_1391F2341,YPint((P)2));
  if (T6 != YPfalse) {
    T8 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
    T10 = CALL1(1,VARREF(YgooSmacrosY1st),formF2340);
    T9 = CALL1(1,VARREF(Ylst),T10);
    T12 = CALL1(1,VARREF(YgooSmacrosY2nd),formF2340);
    T11 = CALL1(1,VARREF(Ylst),T12);
    T7 = CALL4(1,VARREF(YgooSmacrosYcat),T8,T9,T11,LITREF(lit_62));
    T5 = T7;
  } else {
    T14 = CALL2(1,x_1392F2342,x_1391F2341,YPint((P)3));
    if (T14 != YPfalse) {
      T17 = CALL1(1,VARREF(YgooScolsSseqY3rd),formF2340);
      T16 = CALL2(1,VARREF(YgooSmacrosYEE),T17,LITREF(lit_63));
      if (T16 != YPfalse) {
        T19 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
        T21 = CALL1(1,VARREF(YgooSmacrosY1st),formF2340);
        T20 = CALL1(1,VARREF(Ylst),T21);
        T23 = CALL1(1,VARREF(YgooSmacrosY2nd),formF2340);
        T22 = CALL1(1,VARREF(Ylst),T23);
        T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T22,LITREF(lit_62));
        T15 = T18;
      } else {
        T25 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
        T27 = CALL1(1,VARREF(YgooSmacrosY1st),formF2340);
        T26 = CALL1(1,VARREF(Ylst),T27);
        T29 = CALL1(1,VARREF(YgooSmacrosY2nd),formF2340);
        T28 = CALL1(1,VARREF(Ylst),T29);
        T31 = CALL1(1,VARREF(YgooScolsSseqY3rd),formF2340);
        T30 = CALL1(1,VARREF(Ylst),T31);
        T24 = CALL5(1,VARREF(YgooSmacrosYcat),T25,T26,T28,T30,LITREF(lit_62));
        T15 = T24;
      }
      T13 = T15;
    } else {
      T32 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_66));
      T13 = T32;
    }
    T5 = T13;
  }
  T4 = T5;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_curlies_28) {
  P c_,port_;
  P dot_indexF2344;
  P formF2343;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,VARREF(YgooSioSreadYDclose_curly),port_);
  formF2343 = T1;
  T3 = CALL2(1,VARREF(YgooScolsSseqYpos),formF2343,LITREF(lit_69));
  dot_indexF2344 = T3;
  if (dot_indexF2344 != YPfalse) {
    T6 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
    T8 = CALL3(1,VARREF(YgooScolsSseqYsub),formF2343,YPint((P)0),dot_indexF2344);
    T7 = CALL1(1,VARREF(Ylst),T8);
    T10 = CALL2(1,VARREF(YgooSmathYA),dot_indexF2344,YPint((P)1));
    T9 = CALL2(1,VARREF(YgooScolsSseqYsubT),formF2343,T10);
    T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T9,LITREF(lit_62));
    T4 = T5;
  } else {
    T12 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
    T13 = CALL1(1,VARREF(Ylst),Ynil);
    T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,formF2343,LITREF(lit_62));
    T4 = T11;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  P c_,port_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDclose_paren));
}

FUNCODEDEF(fun_30) {
  P c_,port_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDclose_curly));
}

FUNCODEDEF(fun_31) {
  P c_,port_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDclose_bracket));
}

FUNCODEDEF(fun_32) {
  P c_,port_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T0 = CALL2(1,VARREF(Ylst),LITREF(lit_75),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  P c_,port_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T0 = CALL2(1,VARREF(Ylst),LITREF(lit_77),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  P c_,port_;
  P keywordF2346;
  P nextF2345;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  nextF2345 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),nextF2345);
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_79));
    T3 = T5;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYE),nextF2345,YPchr((P)64));
    if (T7 != YPfalse) {
      CALL1(1,VARREF(YgooSioSportYget),port_);
      T6 = LITREF(lit_80);
    } else {
      T6 = LITREF(lit_81);
    }
    T3 = T6;
  }
  keywordF2346 = T3;
  T9 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T8 = CALL2(1,VARREF(Ylst),keywordF2346,T9);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_35) {
  P l_,i_;
  P ecF2350;
  P tmpF2349;
  P cF2348;
  P cF2347;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
  cF2347 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2347);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),FREEREF(0),LITREF(lit_85));
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YgooSmathYE),cF2347,YPchr((P)92));
    if (T6 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
      cF2348 = T8;
      T10 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2348);
      if (T10 != YPfalse) {
        T11 = CALL2(1,VARREF(YgooSioSreadYreading_error),FREEREF(0),LITREF(lit_86));
        T9 = T11;
      } else {
        T14 = CALL2(1,VARREF(YgooSmathYE),cF2348,YPchr((P)92));
        tmpF2349 = T14;
        if (tmpF2349 != YPfalse) {
          T15 = tmpF2349;
        } else {
          T16 = CALL2(1,VARREF(YgooSmathYE),cF2348,YPchr((P)34));
          T15 = T16;
        }
        T13 = T15;
        if (T13 != YPfalse) {
          T18 = CALL2(1,VARREF(YgooSmacrosYpair),cF2348,l_);
          T19 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
          a1 = T18;
          a2 = T19;
          l_ = a1;
          i_ = a2;
          goto loop;
          T12 = T17;
        } else {
          T22 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF2348);
          T21 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYDstring_escape_chars),T22);
          ecF2350 = T21;
          if (ecF2350 != YPfalse) {
            T25 = CALL2(1,VARREF(YgooSmacrosYpair),ecF2350,l_);
            T26 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
            a1 = T25;
            a2 = T26;
            l_ = a1;
            i_ = a2;
            goto loop;
            T23 = T24;
          } else {
            T27 = CALL3(1,VARREF(YgooSioSreadYreading_error),FREEREF(0),LITREF(lit_87),cF2348);
            T23 = T27;
          }
          T20 = T23;
          T12 = T20;
        }
        T9 = T12;
      }
      T7 = T9;
      T5 = T7;
    } else {
      T29 = CALL2(1,VARREF(YgooSmathYE),cF2347,YPchr((P)34));
      if (T29 != YPfalse) {
        T30 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),l_,i_);
        T28 = T30;
      } else {
        T32 = CALL2(1,VARREF(YgooSmacrosYpair),cF2347,l_);
        T33 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
        a1 = T32;
        a2 = T33;
        l_ = a1;
        i_ = a2;
        goto loop;
        T28 = T31;
      }
      T5 = T28;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYread_string_literal) {
  P c_,port_;
  P loopF2351;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_35,2);
  loopF2351 = T1;
  FUNINIT(loopF2351, 2,port_,loopF2351);
  T2 = CALL2(0,loopF2351,Ynil,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  P c_,port_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSreadYgobble_line),port_);
  T0 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_38) {
  P cF2352;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
  cF2352 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2352);
  if (T3 != YPfalse) {
    T2 = cF2352;
  } else {
    T5 = CALL2(1,VARREF(YgooSmathYE),cF2352,YPchr((P)10));
    if (T5 != YPfalse) {
      T4 = YPfalse;
    } else {
      goto loop;
      T4 = T6;
    }
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gobble_line_39) {
  P port_;
  P loopF2353;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_38,2);
  loopF2353 = T1;
  FUNINIT(loopF2353, 2,port_,loopF2353);
  T2 = CALL0(0,loopF2353);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_define_sharp_macro_40) {
  P c_,proc_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(proc_, 1);
loop:
  T2 = CALL2(1,VARREF(Ylst),c_,proc_);
  T1 = CALL2(1,VARREF(YgooSmacrosYpair),T2,VARREF(YgooSioSreadYTsharp_macrosT));
  T0 = VARSET(YgooSioSreadYTsharp_macrosT,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  P c_,port_;
  P probeF2356;
  P cF2355;
  P cF2354;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF2354 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2354);
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_94));
    T3 = T5;
  } else {
    T6 = CALL1(1,VARREF(YgooSmathYto_lower),cF2354);
    T3 = T6;
  }
  cF2355 = T3;
  T8 = CALL2(1,VARREF(YgooScolsSlstYassq),cF2355,VARREF(YgooSioSreadYTsharp_macrosT));
  probeF2356 = T8;
  if (probeF2356 != YPfalse) {
    T12 = CALL1(1,VARREF(Ytail),probeF2356);
    T11 = CALL1(1,VARREF(Yhead),T12);
    T10 = CALL2(1,T11,cF2355,port_);
    T9 = T10;
  } else {
    T13 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_95),cF2355);
    T9 = T13;
  }
  T7 = T9;
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P c_,port_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSportYget),port_);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_43) {
  P c_,port_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSportYget),port_);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_44) {
  P c_,port_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSportYget),port_);
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDvert_proxy));
}

FUNCODEDEF(fun_loop_45) {
  P found_slashQ_;
  P x_1394F2359;
  P x_1393F2358;
  P cF2357;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(found_slashQ_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
  cF2357 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2357);
  if (T3 != YPfalse) {
    T2 = cF2357;
  } else {
    x_1393F2358 = cF2357;
    x_1394F2359 = VARREF(YgooSmacrosYEE);
    T7 = CALL2(1,x_1394F2359,x_1393F2358,YPchr((P)47));
    if (T7 != YPfalse) {
      a1 = YPtrue;
      found_slashQ_ = a1;
      goto loop;
      T6 = T8;
    } else {
      T10 = CALL2(1,x_1394F2359,x_1393F2358,YPchr((P)35));
      if (T10 != YPfalse) {
        if (found_slashQ_ != YPfalse) {
          T11 = YPfalse;
        } else {
          a1 = YPfalse;
          found_slashQ_ = a1;
          goto loop;
          T11 = T12;
        }
        T9 = T11;
      } else {
        a1 = YPfalse;
        found_slashQ_ = a1;
        goto loop;
        T9 = T13;
      }
      T6 = T9;
    }
    T5 = T6;
    T4 = T5;
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYgobble_nested_comment) {
  P port_;
  P loopF2360;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_45,2);
  loopF2360 = T1;
  FUNINIT(loopF2360, 2,port_,loopF2360);
  T2 = CALL1(0,loopF2360,YPfalse);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  P c_,port_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSreadYgobble_nested_comment),port_);
  T0 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_48) {
  P c_,port_;
  P tempF2363;
  P nameF2362;
  P cF2361;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF2361 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2361);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_105));
    T2 = T4;
  } else {
    T6 = CALL1(1,VARREF(YgooSmathYalphaQ),cF2361);
    if (T6 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
      nameF2362 = T8;
      T12 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF2362);
      T11 = CALL1(1,VARREF(YgooStypesYlen),T12);
      T10 = CALL2(1,VARREF(YgooSmathYE),T11,YPint((P)1));
      if (T10 != YPfalse) {
        T9 = cF2361;
      } else {
        T14 = CALL2(1,VARREF(YgooScolsSlstYassq),nameF2362,VARREF(YgooSioSreadYDchar_long_names));
        tempF2363 = T14;
        if (tempF2363 != YPfalse) {
          T17 = CALL1(1,VARREF(Ytail),tempF2363);
          T16 = CALL1(1,VARREF(Yhead),T17);
          T15 = T16;
        } else {
          T18 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_106),nameF2362);
          T15 = T18;
        }
        T13 = T15;
        T9 = T13;
      }
      T7 = T9;
      T5 = T7;
    } else {
      T19 = CALL1(1,VARREF(YgooSioSportYget),port_);
      T5 = T19;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P c_,port_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T1 = CALL2(1,VARREF(YgooSioSreadYsub_read_list),c_,port_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_50) {
  P c_,port_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T1 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,VARREF(YgooSioSreadYDclose_bracket),port_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YgooScolsSvecYLvecG),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  P c_,port_;
  P tmpF2365;
  P stringF2364;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSioSreadYsub_read_token),YPchr((P)35),port_);
  stringF2364 = T1;
  T3 = CALL1(1,VARREF(YgooScolsSstrYstr_to_num),stringF2364);
  tmpF2365 = T3;
  if (tmpF2365 != YPfalse) {
    T4 = tmpF2365;
  } else {
    T5 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_110),stringF2364);
    T4 = T5;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),c_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_53) {
  P l_,n_;
  P tmpF2367;
  P cF2366;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(n_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),FREEREF(0));
  cF2366 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2366);
  tmpF2367 = T4;
  if (tmpF2367 != YPfalse) {
    T5 = tmpF2367;
  } else {
    T7 = CALL1(1,VARREF(YgooSmathYchar_Gascii),cF2366);
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_terminatingQ_vectorT),T7);
    T5 = T6;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),l_,n_);
    T2 = T8;
  } else {
    T12 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
    T11 = CALL1(1,VARREF(YgooSioSreadYpreferred_case),T12);
    T10 = CALL2(1,VARREF(YgooSmacrosYpair),T11,l_);
    T13 = CALL2(1,VARREF(YgooSmathYA),n_,YPint((P)1));
    a1 = T10;
    a2 = T13;
    l_ = a1;
    n_ = a2;
    goto loop;
    T2 = T9;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_token_54) {
  P c_,port_;
  P loopF2368;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_53,2);
  loopF2368 = T1;
  FUNINIT(loopF2368, 2,port_,loopF2368);
  T4 = CALL1(1,VARREF(YgooSioSreadYpreferred_case),c_);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T2 = CALL2(0,loopF2368,T3,YPint((P)1));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmathYE),FREEREF(0),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_parse_token_56) {
  P string_,port_;
  P maybe_numberF2373;
  P tmpF2372;
  P tmpF2371;
  P tmpF2370;
  P cF2369;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1,a2;
LINK_STACK();
  ARG(string_, 0);
  ARG(port_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),string_,YPint((P)0));
  cF2369 = T2;
  T4 = CALL1(1,VARREF(YgooSmathYdigitQ),cF2369);
  tmpF2370 = T4;
  if (tmpF2370 != YPfalse) {
    T5 = tmpF2370;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYE),cF2369,YPchr((P)43));
    tmpF2371 = T7;
    if (tmpF2371 != YPfalse) {
      T8 = tmpF2371;
    } else {
      T10 = CALL2(1,VARREF(YgooSmathYE),cF2369,YPchr((P)45));
      tmpF2372 = T10;
      if (tmpF2372 != YPfalse) {
        T11 = tmpF2372;
      } else {
        T12 = CALL2(1,VARREF(YgooSmathYE),cF2369,YPchr((P)46));
        T11 = T12;
      }
      T9 = T11;
      T8 = T9;
    }
    T6 = T8;
    T5 = T6;
  }
  T3 = T5;
  T1 = T3;
  if (T1 != YPfalse) {
    T14 = CALL1(1,VARREF(YgooScolsSstrYstr_to_num),string_);
    maybe_numberF2373 = T14;
    if (maybe_numberF2373 != YPfalse) {
      T15 = maybe_numberF2373;
    } else {
      T18 = FUNFAB(fun_55,1,string_);
      T17 = CALL2(1,VARREF(YgooStypesYanyQ),T18,VARREF(YgooSioSreadYDstrange_symbol_names));
      if (T17 != YPfalse) {
        T20 = CALL1(1,VARREF(YgooSioSreadYmake_immutableX),string_);
        T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T20);
        T16 = T19;
      } else {
        T22 = CALL2(1,VARREF(YgooSmathYE),string_,LITREF(lit_119));
        if (T22 != YPfalse) {
          T24 = CALL1(1,VARREF(YgooSioSreadYmake_immutableX),string_);
          T23 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T24);
          T21 = T23;
        } else {
          T25 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_120),string_);
          T21 = T25;
        }
        T16 = T21;
      }
      T15 = T16;
    }
    T13 = T15;
    T0 = T13;
  } else {
    T27 = CALL1(1,VARREF(YgooSioSreadYmake_immutableX),string_);
    T26 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T27);
    T0 = T26;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reading_error_57) {
  P port_,message_,irritants_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(irritants_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),message_,LITREF(lit_125));
  T3 = CALL1(1,VARREF(Ylst),port_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),irritants_,T3);
  T0 = CALL2(1,VARREF(Yerror),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_warn_58) {
  P string_,irritants_and_port_;
  P a1,a2;
LINK_STACK();
  ARG(string_, 0);
  NARGS(irritants_and_port_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_reverse_list_Gstring_59) {
  P l_,n_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(n_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),l_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_make_immutableX_60) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(x_);
}

P YgooSioSreadY___main_0___() {
  P vecF2376;
  P str10496F2375;
  P sub_read_whitespaceF2374;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"read");
  lit_1 = YPPlist(1,YPPsym((P)"port"));
  lit_2 = YPPsym((P)"loop");
  lit_3 = Ynil;
  lit_4 = YPsb((P)"discarding extraneous right parenthesis");
  T1 = YPsig(LITREF(lit_3),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_0 = YPmet(FUNCODEREF(fun_loop_0),LITREF(lit_2),T1,ENVNUL,PNUL,sloc(28));
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_1 = YPmet(FUNCODEREF(fun_read_1),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(26));
  T4 = BOUNDP(YgooSconditionsYread);
  if (T4 != YPfalse) {
    T3 = VARREF(YgooSconditionsYread);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_read_1;
  T2 = XCALL2(1,VARREF(YPdefine_method),T3,T5);
  VARSET(YgooSconditionsYread,T2);
  lit_5 = YPPsym((P)"read-from-string");
  lit_6 = YPPlist(1,YPPsym((P)"x"));
  T8 = YPsig(LITREF(lit_3),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T8,ENVNUL,PNUL,sloc(39));
  T7 = YPsig(LITREF(lit_3),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_3 = YPmet(FUNCODEREF(fun_3),YPfalse,T7,ENVNUL,PNUL,sloc(39));
  T6 = YPsig(LITREF(lit_6),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_from_string_4 = YPmet(FUNCODEREF(fun_read_from_string_4),LITREF(lit_5),T6,ENVNUL,PNUL,sloc(38));
  T11 = BOUNDP(YgooSioSreadYread_from_string);
  if (T11 != YPfalse) {
    T10 = VARREF(YgooSioSreadYread_from_string);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_read_from_string_4;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T12);
  VARSET(YgooSioSreadYread_from_string,T9);
  lit_7 = YPPsym((P)"sub-read-carefully");
  lit_8 = YPPlist(1,YPPsym((P)"port"));
  lit_9 = YPsb((P)"unexpected end of file");
  T13 = YPsig(LITREF(lit_8),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sub_read_carefully_5 = YPmet(FUNCODEREF(fun_sub_read_carefully_5),LITREF(lit_7),T13,ENVNUL,PNUL,sloc(41));
  T16 = BOUNDP(YgooSioSreadYsub_read_carefully);
  if (T16 != YPfalse) {
    T15 = VARREF(YgooSioSreadYsub_read_carefully);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_sub_read_carefully_5;
  T14 = XCALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YgooSioSreadYsub_read_carefully,T14);
  lit_10 = YPPsym((P)"<reader-token>");
  T19 = (P)YPpair(VARREF(YLanyG),Ynil);
  T18 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_10),T19);
  VARSET(YgooSioSreadYLreader_tokenG,T18);
  lit_11 = YPPsym((P)"token-message");
  lit_12 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YgooSioSreadYLreader_tokenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_token_message_6 = YPmet(FUNCODEREF(fun_token_message_6),LITREF(lit_11),T20,ENVNUL,PNUL,sloc(51));
  T23 = BOUNDP(YgooSioSreadYtoken_message);
  if (T23 != YPfalse) {
    T22 = VARREF(YgooSioSreadYtoken_message);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_token_message_6;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YgooSioSreadYtoken_message,T21);
  lit_13 = YPPsym((P)"token-message-setter");
  lit_14 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T25 = YPsig(LITREF(lit_14),YPPlist(2,VARREF(YLstrG),VARREF(YgooSioSreadYLreader_tokenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_token_message_setter_7 = YPmet(FUNCODEREF(fun_token_message_setter_7),LITREF(lit_13),T25,ENVNUL,PNUL,sloc(51));
  T28 = BOUNDP(YgooSioSreadYtoken_message_setter);
  if (T28 != YPfalse) {
    T27 = VARREF(YgooSioSreadYtoken_message_setter);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_token_message_setter_7;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YgooSioSreadYtoken_message_setter,T26);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSioSreadYLreader_tokenG),VARREF(YgooSioSreadYtoken_message),VARREF(YgooSioSreadYtoken_message_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_15 = YPPsym((P)"make-reader-token");
  lit_16 = YPPlist(1,YPPsym((P)"message"));
  T30 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_reader_token_8 = YPmet(FUNCODEREF(fun_make_reader_token_8),LITREF(lit_15),T30,ENVNUL,PNUL,sloc(53));
  T33 = BOUNDP(YgooSioSreadYmake_reader_token);
  if (T33 != YPfalse) {
    T32 = VARREF(YgooSioSreadYmake_reader_token);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_make_reader_token_8;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YgooSioSreadYmake_reader_token,T31);
  lit_17 = YPPsym((P)"reader-token?");
  lit_18 = YPPlist(1,YPPsym((P)"form"));
  T35 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_reader_tokenQ_9 = YPmet(FUNCODEREF(fun_reader_tokenQ_9),LITREF(lit_17),T35,ENVNUL,PNUL,sloc(56));
  T38 = BOUNDP(YgooSioSreadYreader_tokenQ);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooSioSreadYreader_tokenQ);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_reader_tokenQ_9;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YgooSioSreadYreader_tokenQ,T36);
  lit_19 = YPsb((P)"unexpected right parenthesis");
  T40 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_19));
  VARSET(YgooSioSreadYDclose_paren,T40);
  lit_20 = YPsb((P)"unexpected right bracket");
  T41 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_20));
  VARSET(YgooSioSreadYDclose_bracket,T41);
  lit_21 = YPsb((P)"unexpected right curly");
  T42 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_21));
  VARSET(YgooSioSreadYDclose_curly,T42);
  lit_22 = YPPsym((P)"sub-read");
  lit_23 = YPPlist(1,YPPsym((P)"port"));
  T43 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sub_read_10 = YPmet(FUNCODEREF(fun_sub_read_10),LITREF(lit_22),T43,ENVNUL,PNUL,sloc(65));
  T46 = BOUNDP(YgooSioSreadYsub_read);
  if (T46 != YPfalse) {
    T45 = VARREF(YgooSioSreadYsub_read);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_sub_read_10;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YgooSioSreadYsub_read,T44);
  lit_24 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_25 = YPsb((P)"illegal character read");
  T48 = YPsig(LITREF(lit_24),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T48,ENVNUL,PNUL,sloc(76));
  T50 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T51 = fun_11;
  T49 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T50,T51);
  VARSET(YgooSioSreadYTread_dispatch_vectorT,T49);
  T53 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T52 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T53,YPtrue);
  VARSET(YgooSioSreadYTread_terminatingQ_vectorT,T52);
  lit_26 = YPPsym((P)"set-standard-syntax!");
  lit_27 = YPPlist(3,YPPsym((P)"char"),YPPsym((P)"terminating?"),YPPsym((P)"reader"));
  T54 = YPsig(LITREF(lit_27),YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_set_standard_syntaxX_12 = YPmet(FUNCODEREF(fun_set_standard_syntaxX_12),LITREF(lit_26),T54,ENVNUL,PNUL,sloc(80));
  T57 = BOUNDP(YgooSioSreadYset_standard_syntaxX);
  if (T57 != YPfalse) {
    T56 = VARREF(YgooSioSreadYset_standard_syntaxX);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_set_standard_syntaxX_12;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YgooSioSreadYset_standard_syntaxX,T55);
  lit_28 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_29 = YPPlist(1,YPPsym((P)"c"));
  T60 = YPsig(LITREF(lit_28),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T60,ENVNUL,PNUL,sloc(84));
  T59 = YPsig(LITREF(lit_29),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T59,ENVNUL,PNUL,sloc(85));
  T61 = fun_13;
  sub_read_whitespaceF2374 = T61;
  T63 = FUNFAB(fun_14,1,sub_read_whitespaceF2374);
  T62 = XCALL2(1,VARREF(YgooSmacrosYdo),T63,VARREF(YgooScolsSstrYascii_whitespaces));
  lit_30 = YPPsym((P)"flush-whitespace");
  lit_31 = YPPlist(1,YPPsym((P)"port"));
  T64 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYflush_whitespace = YPmet(FUNCODEREF(YgooSioSreadYflush_whitespace),LITREF(lit_30),T64,ENVNUL,PNUL,sloc(88));
  T65 = YgooSioSreadYflush_whitespace;
  VARSET(YgooSioSreadYflush_whitespace,T65);
  lit_32 = YPPsym((P)"read-delimited-list");
  lit_33 = YPPlist(2,YPPsym((P)"endchar"),YPPsym((P)"port"));
  lit_34 = YPPlist(1,YPPsym((P)"c"));
  T67 = YPsig(LITREF(lit_34),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_16 = YPmet(FUNCODEREF(fun_loop_16),LITREF(lit_2),T67,ENVNUL,PNUL,sloc(98));
  T66 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_delimited_list = YPmet(FUNCODEREF(YgooSioSreadYread_delimited_list),LITREF(lit_32),T66,ENVNUL,PNUL,sloc(96));
  T68 = YgooSioSreadYread_delimited_list;
  VARSET(YgooSioSreadYread_delimited_list,T68);
  lit_35 = YPPsym((P)"sub-read-constituent");
  lit_36 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T69 = YPsig(LITREF(lit_36),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYsub_read_constituent = YPmet(FUNCODEREF(YgooSioSreadYsub_read_constituent),LITREF(lit_35),T69,ENVNUL,PNUL,sloc(104));
  T70 = YgooSioSreadYsub_read_constituent;
  VARSET(YgooSioSreadYsub_read_constituent,T70);
  lit_37 = YPsb((P)"!$%&*+-./0123456789:<=>?@^_~ABCDEFGHIJKLM");
  lit_38 = YPsb((P)"NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  lit_39 = YPPlist(1,YPPsym((P)"c"));
  T71 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T71,ENVNUL,PNUL,sloc(111));
  T72 = XCALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_37),LITREF(lit_38));
  str10496F2375 = T72;
  T74 = fun_19;
  T73 = XCALL2(1,VARREF(YgooSmacrosYdo),T74,str10496F2375);
  lit_40 = YPPsym((P)"set-standard-read-macro!");
  lit_41 = YPPlist(3,YPPsym((P)"char"),YPPsym((P)"terminating?"),YPPsym((P)"proc"));
  T75 = YPsig(LITREF(lit_41),YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_set_standard_read_macroX_20 = YPmet(FUNCODEREF(fun_set_standard_read_macroX_20),LITREF(lit_40),T75,ENVNUL,PNUL,sloc(116));
  T78 = BOUNDP(YgooSioSreadYset_standard_read_macroX);
  if (T78 != YPfalse) {
    T77 = VARREF(YgooSioSreadYset_standard_read_macroX);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_set_standard_read_macroX_20;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YgooSioSreadYset_standard_read_macroX,T76);
  lit_42 = YPPsym((P)"get-standard-read-macro");
  lit_43 = YPPlist(1,YPPsym((P)"char"));
  T80 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_get_standard_read_macro_21 = YPmet(FUNCODEREF(fun_get_standard_read_macro_21),LITREF(lit_42),T80,ENVNUL,PNUL,sloc(119));
  T83 = BOUNDP(YgooSioSreadYget_standard_read_macro);
  if (T83 != YPfalse) {
    T82 = VARREF(YgooSioSreadYget_standard_read_macro);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_get_standard_read_macro_21;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YgooSioSreadYget_standard_read_macro,T81);
  lit_44 = YPPsym((P)"sub-read-vertical");
  lit_45 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_46 = YPsb((P)"|");
  T85 = YPsig(LITREF(lit_45),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_vertical_22 = YPmet(FUNCODEREF(fun_sub_read_vertical_22),LITREF(lit_44),T85,ENVNUL,PNUL,sloc(122));
  T88 = BOUNDP(YgooSioSreadYsub_read_vertical);
  if (T88 != YPfalse) {
    T87 = VARREF(YgooSioSreadYsub_read_vertical);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_sub_read_vertical_22;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YgooSioSreadYsub_read_vertical,T86);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)124),YPtrue,VARREF(YgooSioSreadYsub_read_vertical));
  lit_47 = YPsb((P)"|");
  T90 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),LITREF(lit_47));
  VARSET(YgooSioSreadYDvert_sym,T90);
  lit_48 = YPsb((P)"vert-proxy");
  T91 = XCALL1(1,VARREF(Ylst),LITREF(lit_48));
  VARSET(YgooSioSreadYDvert_proxy,T91);
  lit_49 = YPPsym((P)"sub-read-list-eof-error");
  lit_50 = YPPlist(1,YPPsym((P)"port"));
  lit_51 = YPsb((P)"end of file inside list -- unbalanced parentheses");
  T92 = YPsig(LITREF(lit_50),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYsub_read_list_eof_error = YPmet(FUNCODEREF(YgooSioSreadYsub_read_list_eof_error),LITREF(lit_49),T92,ENVNUL,PNUL,sloc(130));
  T93 = YgooSioSreadYsub_read_list_eof_error;
  VARSET(YgooSioSreadYsub_read_list_eof_error,T93);
  lit_52 = YPPsym((P)"sub-read-list");
  lit_53 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"p"));
  lit_54 = YPPsym((P)"read-next");
  lit_55 = YPPlist(4,YPPsym((P)"c"),YPPsym((P)"prev"),YPPsym((P)"line"),YPPsym((P)"form"));
  T95 = YPsig(LITREF(lit_55),YPPlist(4,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_read_next_24 = YPmet(FUNCODEREF(fun_read_next_24),LITREF(lit_54),T95,ENVNUL,PNUL,sloc(140));
  T94 = YPsig(LITREF(lit_53),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_list_25 = YPmet(FUNCODEREF(fun_sub_read_list_25),LITREF(lit_52),T94,ENVNUL,PNUL,sloc(133));
  T98 = BOUNDP(YgooSioSreadYsub_read_list);
  if (T98 != YPfalse) {
    T97 = VARREF(YgooSioSreadYsub_read_list);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_sub_read_list_25;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YgooSioSreadYsub_read_list,T96);
  lit_56 = YPPsym((P)"sub-read-seq");
  lit_57 = YPPlist(3,YPPsym((P)"c"),YPPsym((P)"e"),YPPsym((P)"port"));
  lit_58 = YPsb((P)"end of file inside list -- unbalanced parentheses");
  T100 = YPsig(LITREF(lit_57),YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_sub_read_seq_26 = YPmet(FUNCODEREF(fun_sub_read_seq_26),LITREF(lit_56),T100,ENVNUL,PNUL,sloc(157));
  T103 = BOUNDP(YgooSioSreadYsub_read_seq);
  if (T103 != YPfalse) {
    T102 = VARREF(YgooSioSreadYsub_read_seq);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_sub_read_seq_26;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YgooSioSreadYsub_read_seq,T101);
  lit_59 = YPPsym((P)"sub-read-brackets");
  lit_60 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_61 = YPPsym((P)"elt");
  lit_62 = Ynil;
  lit_63 = YPPsym((P)"*");
  lit_64 = YPPsym((P)"sub*");
  lit_65 = YPPsym((P)"sub");
  lit_66 = YPsb((P)"invalid [ ... ] form");
  T105 = YPsig(LITREF(lit_60),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_brackets_27 = YPmet(FUNCODEREF(fun_sub_read_brackets_27),LITREF(lit_59),T105,ENVNUL,PNUL,sloc(166));
  T108 = BOUNDP(YgooSioSreadYsub_read_brackets);
  if (T108 != YPfalse) {
    T107 = VARREF(YgooSioSreadYsub_read_brackets);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_sub_read_brackets_27;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YgooSioSreadYsub_read_brackets,T106);
  lit_67 = YPPsym((P)"sub-read-curlies");
  lit_68 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_69 = YPPsym((P)".");
  lit_70 = YPPsym((P)"fun");
  T110 = YPsig(LITREF(lit_68),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_curlies_28 = YPmet(FUNCODEREF(fun_sub_read_curlies_28),LITREF(lit_67),T110,ENVNUL,PNUL,sloc(175));
  T113 = BOUNDP(YgooSioSreadYsub_read_curlies);
  if (T113 != YPfalse) {
    T112 = VARREF(YgooSioSreadYsub_read_curlies);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_sub_read_curlies_28;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YgooSioSreadYsub_read_curlies,T111);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)40),YPtrue,VARREF(YgooSioSreadYsub_read_list));
  lit_71 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T115 = YPsig(LITREF(lit_71),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T115,ENVNUL,PNUL,sloc(184));
  T116 = fun_29;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)41),YPtrue,T116);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)123),YPtrue,VARREF(YgooSioSreadYsub_read_curlies));
  lit_72 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T117 = YPsig(LITREF(lit_72),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T117,ENVNUL,PNUL,sloc(188));
  T118 = fun_30;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)125),YPtrue,T118);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)91),YPtrue,VARREF(YgooSioSreadYsub_read_brackets));
  lit_73 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T119 = YPsig(LITREF(lit_73),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T119,ENVNUL,PNUL,sloc(192));
  T120 = fun_31;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)93),YPtrue,T120);
  lit_74 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_75 = YPPsym((P)"quote");
  T121 = YPsig(LITREF(lit_74),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T121,ENVNUL,PNUL,sloc(195));
  T122 = fun_32;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)39),YPtrue,T122);
  lit_76 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_77 = YPPsym((P)"quasiquote");
  T123 = YPsig(LITREF(lit_76),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T123,ENVNUL,PNUL,sloc(198));
  T124 = fun_33;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)96),YPtrue,T124);
  lit_78 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_79 = YPsb((P)"end of file after ,");
  lit_80 = YPPsym((P)"unquote-splicing");
  lit_81 = YPPsym((P)"unquote");
  T125 = YPsig(LITREF(lit_78),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T125,ENVNUL,PNUL,sloc(202));
  T126 = fun_34;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)44),YPtrue,T126);
  T129 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T128 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T129,YPfalse);
  vecF2376 = T128;
  T130 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)116));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)9),vecF2376,T130);
  T131 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)102));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)12),vecF2376,T131);
  T132 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)114));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)13),vecF2376,T132);
  T133 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)110));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)10),vecF2376,T133);
  T134 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF2376);
  T127 = T134;
  VARSET(YgooSioSreadYDstring_escape_chars,T127);
  lit_82 = YPPsym((P)"read-string-literal");
  lit_83 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_84 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"i"));
  lit_85 = YPsb((P)"end of file within a string");
  lit_86 = YPsb((P)"end of file within a string");
  lit_87 = YPsb((P)"invalid escaped character in string");
  T136 = YPsig(LITREF(lit_84),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_35 = YPmet(FUNCODEREF(fun_loop_35),LITREF(lit_2),T136,ENVNUL,PNUL,sloc(222));
  T135 = YPsig(LITREF(lit_83),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_string_literal = YPmet(FUNCODEREF(YgooSioSreadYread_string_literal),LITREF(lit_82),T135,ENVNUL,PNUL,sloc(220));
  T137 = YgooSioSreadYread_string_literal;
  VARSET(YgooSioSreadYread_string_literal,T137);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)34),YPtrue,VARREF(YgooSioSreadYread_string_literal));
  lit_88 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T138 = YPsig(LITREF(lit_88),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T138,ENVNUL,PNUL,sloc(246));
  T139 = fun_37;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)59),YPtrue,T139);
  lit_89 = YPPsym((P)"gobble-line");
  lit_90 = YPPlist(1,YPPsym((P)"port"));
  T141 = YPsig(LITREF(lit_3),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_38 = YPmet(FUNCODEREF(fun_loop_38),LITREF(lit_2),T141,ENVNUL,PNUL,sloc(249));
  T140 = YPsig(LITREF(lit_90),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gobble_line_39 = YPmet(FUNCODEREF(fun_gobble_line_39),LITREF(lit_89),T140,ENVNUL,PNUL,sloc(248));
  T144 = BOUNDP(YgooSioSreadYgobble_line);
  if (T144 != YPfalse) {
    T143 = VARREF(YgooSioSreadYgobble_line);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_gobble_line_39;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YgooSioSreadYgobble_line,T142);
  VARSET(YgooSioSreadYTsharp_macrosT,Ynil);
  lit_91 = YPPsym((P)"define-sharp-macro");
  lit_92 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"proc"));
  T146 = YPsig(LITREF(lit_92),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_define_sharp_macro_40 = YPmet(FUNCODEREF(fun_define_sharp_macro_40),LITREF(lit_91),T146,ENVNUL,PNUL,sloc(255));
  T149 = BOUNDP(YgooSioSreadYdefine_sharp_macro);
  if (T149 != YPfalse) {
    T148 = VARREF(YgooSioSreadYdefine_sharp_macro);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_define_sharp_macro_40;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YgooSioSreadYdefine_sharp_macro,T147);
  lit_93 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_94 = YPsb((P)"end of file after #");
  lit_95 = YPsb((P)"unknown # syntax");
  T151 = YPsig(LITREF(lit_93),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T151,ENVNUL,PNUL,sloc(260));
  T152 = fun_41;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)35),YPfalse,T152);
  lit_96 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T153 = YPsig(LITREF(lit_96),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T153,ENVNUL,PNUL,sloc(270));
  T154 = fun_42;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)102),T154);
  lit_97 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T155 = YPsig(LITREF(lit_97),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T155,ENVNUL,PNUL,sloc(272));
  T156 = fun_43;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)116),T156);
  lit_98 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T157 = YPsig(LITREF(lit_98),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T157,ENVNUL,PNUL,sloc(274));
  T158 = fun_44;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)124),T158);
  lit_99 = YPPsym((P)"gobble-nested-comment");
  lit_100 = YPPlist(1,YPPsym((P)"port"));
  lit_101 = YPPlist(1,YPPsym((P)"found-slash?"));
  T160 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_45 = YPmet(FUNCODEREF(fun_loop_45),LITREF(lit_2),T160,ENVNUL,PNUL,sloc(277));
  T159 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYgobble_nested_comment = YPmet(FUNCODEREF(YgooSioSreadYgobble_nested_comment),LITREF(lit_99),T159,ENVNUL,PNUL,sloc(276));
  T161 = YgooSioSreadYgobble_nested_comment;
  VARSET(YgooSioSreadYgobble_nested_comment,T161);
  lit_102 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T162 = YPsig(LITREF(lit_102),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T162,ENVNUL,PNUL,sloc(287));
  T163 = fun_47;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)47),T163);
  lit_103 = YPPlist(5,YPPlist(2,YPPsym((P)"tab"),YPchr((P)9)),YPPlist(2,YPPsym((P)"page"),YPchr((P)12)),YPPlist(2,YPPsym((P)"return"),YPchr((P)13)),YPPlist(2,YPPsym((P)"newline"),YPchr((P)10)),YPPlist(2,YPPsym((P)"space"),YPchr((P)32)));
  T165 = VARSET(YgooSioSreadYDchar_long_names,LITREF(lit_103));
  T164 = T165;
  return T164;
}

P YgooSioSreadY___main_1___() {
  P number_sharp_macroF2377;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
DEFCREGS();
loop:
  lit_104 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_105 = YPsb((P)"end of file after #\\");
  lit_106 = YPsb((P)"unknown #\\ name");
  T0 = YPsig(LITREF(lit_104),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T0,ENVNUL,PNUL,sloc(298));
  T1 = fun_48;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)92),T1);
  lit_107 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T2 = YPsig(LITREF(lit_107),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T2,ENVNUL,PNUL,sloc(315));
  T3 = fun_49;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)40),T3);
  lit_108 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T4 = YPsig(LITREF(lit_108),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T4,ENVNUL,PNUL,sloc(321));
  T5 = fun_50;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)91),T5);
  lit_109 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_110 = YPsb((P)"unsupported number syntax");
  lit_111 = YPPlist(1,YPPsym((P)"c"));
  lit_112 = YPPlist(4,YPchr((P)98),YPchr((P)111),YPchr((P)100),YPchr((P)120));
  T7 = YPsig(LITREF(lit_109),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T7,ENVNUL,PNUL,sloc(326));
  T6 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T6,ENVNUL,PNUL,sloc(330));
  T8 = fun_51;
  number_sharp_macroF2377 = T8;
  T10 = FUNFAB(fun_52,1,number_sharp_macroF2377);
  T9 = XCALL2(1,VARREF(YgooSmacrosYdo),T10,LITREF(lit_112));
  lit_113 = YPPsym((P)"sub-read-token");
  lit_114 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_115 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"n"));
  T12 = YPsig(LITREF(lit_115),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_53 = YPmet(FUNCODEREF(fun_loop_53),LITREF(lit_2),T12,ENVNUL,PNUL,sloc(337));
  T11 = YPsig(LITREF(lit_114),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_token_54 = YPmet(FUNCODEREF(fun_sub_read_token_54),LITREF(lit_113),T11,ENVNUL,PNUL,sloc(335));
  T15 = BOUNDP(YgooSioSreadYsub_read_token);
  if (T15 != YPfalse) {
    T14 = VARREF(YgooSioSreadYsub_read_token);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_sub_read_token_54;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YgooSioSreadYsub_read_token,T13);
  lit_116 = YPPsym((P)"parse-token");
  lit_117 = YPPlist(2,YPPsym((P)"string"),YPPsym((P)"port"));
  lit_118 = YPPlist(1,YPPsym((P)"x"));
  lit_119 = YPsb((P)".");
  lit_120 = YPsb((P)"unsupported number syntax");
  T18 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T18,ENVNUL,PNUL,sloc(356));
  T17 = YPsig(LITREF(lit_117),YPPlist(2,VARREF(YLstrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_token_56 = YPmet(FUNCODEREF(fun_parse_token_56),LITREF(lit_116),T17,ENVNUL,PNUL,sloc(346));
  T21 = BOUNDP(YgooSioSreadYparse_token);
  if (T21 != YPfalse) {
    T20 = VARREF(YgooSioSreadYparse_token);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_parse_token_56;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YgooSioSreadYparse_token,T19);
  lit_121 = YPPlist(9,YPsb((P)"+"),YPsb((P)"-"),YPsb((P)"..."),YPsb((P)"1st"),YPsb((P)"2nd"),YPsb((P)"3rd"),YPsb((P)"1+"),YPsb((P)"1-"),YPsb((P)"->"));
  VARSET(YgooSioSreadYDstrange_symbol_names,LITREF(lit_121));
  lit_122 = YPPsym((P)"t");
  T26 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),LITREF(lit_122));
  T25 = XCALL2(1,VARREF(YgooSmacrosYelt),T26,YPint((P)0));
  T24 = XCALL2(1,VARREF(YgooSmathYE),T25,YPchr((P)84));
  if (T24 != YPfalse) {
    T23 = VARREF(YgooSmathYto_upper);
  } else {
    T23 = VARREF(YgooSmathYto_lower);
  }
  VARSET(YgooSioSreadYpreferred_case,T23);
  lit_123 = YPPsym((P)"reading-error");
  lit_124 = YPPlist(3,YPPsym((P)"port"),YPPsym((P)"message"),YPPsym((P)"irritants"));
  lit_125 = YPsb((P)": %=");
  T27 = YPsig(LITREF(lit_124),YPPlist(2,VARREF(YgooSioSportYLportG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reading_error_57 = YPmet(FUNCODEREF(fun_reading_error_57),LITREF(lit_123),T27,ENVNUL,PNUL,sloc(383));
  T30 = BOUNDP(YgooSioSreadYreading_error);
  if (T30 != YPfalse) {
    T29 = VARREF(YgooSioSreadYreading_error);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_reading_error_57;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YgooSioSreadYreading_error,T28);
  lit_126 = YPPsym((P)"warn");
  lit_127 = YPPlist(2,YPPsym((P)"string"),YPPsym((P)"irritants-and-port"));
  T32 = YPsig(LITREF(lit_127),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_warn_58 = YPmet(FUNCODEREF(fun_warn_58),LITREF(lit_126),T32,ENVNUL,PNUL,sloc(387));
  T35 = BOUNDP(YgooSioSreadYwarn);
  if (T35 != YPfalse) {
    T34 = VARREF(YgooSioSreadYwarn);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_warn_58;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YgooSioSreadYwarn,T33);
  lit_128 = YPPsym((P)"reverse-list->string");
  lit_129 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"n"));
  T37 = YPsig(LITREF(lit_129),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_reverse_list_Gstring_59 = YPmet(FUNCODEREF(fun_reverse_list_Gstring_59),LITREF(lit_128),T37,ENVNUL,PNUL,sloc(395));
  T40 = BOUNDP(YgooSioSreadYreverse_list_Gstring);
  if (T40 != YPfalse) {
    T39 = VARREF(YgooSioSreadYreverse_list_Gstring);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_reverse_list_Gstring_59;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YgooSioSreadYreverse_list_Gstring,T38);
  lit_130 = YPPsym((P)"make-immutable!");
  lit_131 = YPPlist(1,YPPsym((P)"x"));
  T42 = YPsig(LITREF(lit_131),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_immutableX_60 = YPmet(FUNCODEREF(fun_make_immutableX_60),LITREF(lit_130),T42,ENVNUL,PNUL,sloc(398));
  T45 = BOUNDP(YgooSioSreadYmake_immutableX);
  if (T45 != YPfalse) {
    T44 = VARREF(YgooSioSreadYmake_immutableX);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_make_immutableX_60;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YgooSioSreadYmake_immutableX,T43);
  T47 = YPfalse;
  return T47;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSvec;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_gooSconditions},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooSioSport},
  {&module_info_gooScols},
  {&module_info_gooScolsSlst},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
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
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"t=", &module_info_gooStypes, NULL},
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
  {"pushf", &module_info_gooSmacros, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"*gensym-counter*", &module_info_gooSruntime, NULL},
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
  {"mif", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"zipped", &module_info_gooSruntime, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"port-handle", &module_info_gooSioSport, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"*current-handlers*", &module_info_gooSconditions, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"port-index-setter", &module_info_gooSioSport, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
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
  {"sig-names", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
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
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {">", &module_info_gooSmag, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"build-condition-interactively", &module_info_gooSconditions, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"choose-handler", &module_info_gooSconditions, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"port-line-setter", &module_info_gooSioSport, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"port-handle-setter", &module_info_gooSioSport, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sub-read-curlies", CVAR, &YgooSioSreadYsub_read_curlies},
  {"token-message", CVAR, &YgooSioSreadYtoken_message},
  {"sub-read-token", CVAR, &YgooSioSreadYsub_read_token},
  {"sub-read-constituent", CVAR, &YgooSioSreadYsub_read_constituent},
  {"$string-escape-chars", CVAR, &YgooSioSreadYDstring_escape_chars},
  {"get-standard-read-macro", CVAR, &YgooSioSreadYget_standard_read_macro},
  {"*read-terminating?-vector*", CVAR, &YgooSioSreadYTread_terminatingQ_vectorT},
  {"make-reader-token", CVAR, &YgooSioSreadYmake_reader_token},
  {"$strange-symbol-names", CVAR, &YgooSioSreadYDstrange_symbol_names},
  {"---main-1---", PVAR, NULL},
  {"$close-curly", CVAR, &YgooSioSreadYDclose_curly},
  {"<reader-token>", CVAR, &YgooSioSreadYLreader_tokenG},
  {"read-string-literal", CVAR, &YgooSioSreadYread_string_literal},
  {"---main-0---", PVAR, NULL},
  {"$char-long-names", CVAR, &YgooSioSreadYDchar_long_names},
  {"set-standard-read-macro!", CVAR, &YgooSioSreadYset_standard_read_macroX},
  {"sub-read", CVAR, &YgooSioSreadYsub_read},
  {"make-immutable!", CVAR, &YgooSioSreadYmake_immutableX},
  {"sub-read-brackets", CVAR, &YgooSioSreadYsub_read_brackets},
  {"preferred-case", CVAR, &YgooSioSreadYpreferred_case},
  {"$vert-proxy", CVAR, &YgooSioSreadYDvert_proxy},
  {"*sharp-macros*", CVAR, &YgooSioSreadYTsharp_macrosT},
  {"sub-read-carefully", CVAR, &YgooSioSreadYsub_read_carefully},
  {"set-standard-syntax!", CVAR, &YgooSioSreadYset_standard_syntaxX},
  {"read-delimited-list", CVAR, &YgooSioSreadYread_delimited_list},
  {"reading-error", CVAR, &YgooSioSreadYreading_error},
  {"token-message-setter", CVAR, &YgooSioSreadYtoken_message_setter},
  {"sub-read-list-eof-error", CVAR, &YgooSioSreadYsub_read_list_eof_error},
  {"$vert-sym", CVAR, &YgooSioSreadYDvert_sym},
  {"$close-bracket", CVAR, &YgooSioSreadYDclose_bracket},
  {"$close-paren", CVAR, &YgooSioSreadYDclose_paren},
  {"define-sharp-macro", CVAR, &YgooSioSreadYdefine_sharp_macro},
  {"flush-whitespace", CVAR, &YgooSioSreadYflush_whitespace},
  {"reverse-list->string", CVAR, &YgooSioSreadYreverse_list_Gstring},
  {"sub-read-seq", CVAR, &YgooSioSreadYsub_read_seq},
  {"*read-dispatch-vector*", CVAR, &YgooSioSreadYTread_dispatch_vectorT},
  {"sub-read-vertical", CVAR, &YgooSioSreadYsub_read_vertical},
  {"parse-token", CVAR, &YgooSioSreadYparse_token},
  {"warn", CVAR, &YgooSioSreadYwarn},
  {"reader-token?", CVAR, &YgooSioSreadYreader_tokenQ},
  {"read-from-string", CVAR, &YgooSioSreadYread_from_string},
  {"gobble-line", CVAR, &YgooSioSreadYgobble_line},
  {"gobble-nested-comment", CVAR, &YgooSioSreadYgobble_nested_comment},
  {"sub-read-list", CVAR, &YgooSioSreadYsub_read_list},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"get-standard-read-macro", NULL},
  {"read", NULL},
  {"$char-long-names", NULL},
  {"set-standard-read-macro!", NULL},
  {"read-delimited-list", NULL},
  {"read-from-string", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSioSread;
MODULE_INFO module_info_gooSioSread = {
  "goo/io/read",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSruntime (void);
extern void load_module_gooSconditions (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooSioSport (void);
extern void load_module_gooScols (void);
extern void load_module_gooScolsSlst (void);

/* EXPRESSION: */

extern void load_module_gooSioSread (void);

void load_module_gooSioSread (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_gooSconditions();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooSioSport();
  load_module_gooScols();
  load_module_gooScolsSlst();

  (P)YgooSioSreadY___main_0___();
  (P)YgooSioSreadY___main_1___();

}

/* END OF GENERATED CODE. */
