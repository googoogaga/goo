/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/io/read");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/io/read */

EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(Ygen_refs,"goo/boot","gen-refs");
DEF(YgooSioSreadYdefine_sharp_macro,"goo/io/read","define-sharp-macro");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(YgooSioSreadYpreferred_case,"goo/io/read","preferred-case");
DEF(YgooSioSreadYDclose_curly,"goo/io/read","$close-curly");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ylst,"goo/boot","lst");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Ynot,"goo/boot","not");
DEF(YgooSioSreadYsub_read_curlies,"goo/io/read","sub-read-curlies");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
DEF(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
DEF(YgooSioSreadYwarn,"goo/io/read","warn");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
DEF(YgooSioSreadYreader_tokenQ,"goo/io/read","reader-token?");
DEF(YgooSioSreadYmake_reader_token,"goo/io/read","make-reader-token");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yhead,"goo/boot","head");
EXT(Yobject_parents,"goo/boot","object-parents");
DEF(YgooSioSreadYTread_dispatch_vectorT,"goo/io/read","*read-dispatch-vector*");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YgooSioSreadYsub_read_constituent,"goo/io/read","sub-read-constituent");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
DEF(YgooSioSreadYDclose_paren,"goo/io/read","$close-paren");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
DEF(YgooSioSreadYLreader_tokenG,"goo/io/read","<reader-token>");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
DEF(YgooSioSreadYread_string_literal,"goo/io/read","read-string-literal");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYS,"goo/math","/");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYtanh,"goo/math","tanh");
DEF(YgooSioSreadYTsharp_macrosT,"goo/io/read","*sharp-macros*");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmacrosYelt,"goo/macros","elt");
DEF(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
DEF(YgooSioSreadYTread_terminatingQ_vectorT,"goo/io/read","*read-terminating?-vector*");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(YgooSioSreadYsub_read,"goo/io/read","sub-read");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
DEF(YgooSioSreadYDstring_escape_chars,"goo/io/read","$string-escape-chars");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YLclassG,"goo/boot","<class>");
DEF(YgooSioSreadYsub_read_vertical,"goo/io/read","sub-read-vertical");
DEF(YgooSioSreadYmake_immutableX,"goo/io/read","make-immutable!");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYK,"goo/math","|");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DEF(YgooSioSreadYsub_read_brackets,"goo/io/read","sub-read-brackets");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YtT,"goo/boot","t*");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSioSportYget,"goo/io/port","get");
DEF(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YLgenG,"goo/boot","<gen>");
DEF(YgooSioSreadYsub_read_list,"goo/io/read","sub-read-list");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DEF(YgooSioSreadYparse_token,"goo/io/read","parse-token");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
DEF(YgooSioSreadYsub_read_carefully,"goo/io/read","sub-read-carefully");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
DEF(YgooSioSreadYset_standard_syntaxX,"goo/io/read","set-standard-syntax!");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ytype_error,"goo/boot","type-error");
DEF(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
DEF(YgooSioSreadYtoken_message_setter,"goo/io/read","token-message-setter");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYGGG,"goo/math",">>>");
DEF(YgooSioSreadYsub_read_list_eof_error,"goo/io/read","sub-read-list-eof-error");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ynul,"goo/boot","nul");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YgooSioSreadYflush_whitespace,"goo/io/read","flush-whitespace");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
DEF(YgooSioSreadYDstrange_symbol_names,"goo/io/read","$strange-symbol-names");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(Ynil,"goo/boot","nil");
DEF(YgooSioSreadYgobble_nested_comment,"goo/io/read","gobble-nested-comment");
EXT(YLseqG,"goo/boot","<seq>");
DEF(YgooSioSreadYreverse_list_Gstring,"goo/io/read","reverse-list->string");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
DEF(YgooSioSreadYDclose_bracket,"goo/io/read","$close-bracket");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YgooSioSreadYsub_read_seq,"goo/io/read","sub-read-seq");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmacrosYEE,"goo/macros","==");
DEF(YgooSioSreadYDvert_proxy,"goo/io/read","$vert-proxy");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yclone,"goo/boot","clone");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yunexec,"goo/boot","unexec");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YgooSioSreadYtoken_message,"goo/io/read","token-message");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
DEF(YgooSioSreadYsub_read_token,"goo/io/read","sub-read-token");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSmathYB,"goo/math","&");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSioSportYport_handle_setter,"goo/io/port","port-handle-setter");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YLfixnumG,"goo/boot","<fixnum>");
DEF(YgooSioSreadYgobble_line,"goo/io/read","gobble-line");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLintG,"goo/boot","<int>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
DEF(YgooSioSreadYreading_error,"goo/io/read","reading-error");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
DEF(YgooSioSreadYDvert_sym,"goo/io/read","$vert-sym");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLproductG,"goo/boot","<product>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_79);
DEFLIT(lit_19);
DEFLIT(lit_40);
DEFLIT(lit_31);
DEFLIT(lit_108);
DEFLIT(lit_78);
DEFLIT(lit_81);
DEFLIT(lit_111);
DEFLIT(lit_69);
DEFLIT(lit_107);
DEFLIT(lit_94);
DEFLIT(lit_58);
DEFLIT(lit_57);
DEFLIT(lit_15);
DEFLIT(lit_60);
DEFLIT(lit_38);
DEFLIT(lit_98);
DEFLIT(lit_43);
DEFLIT(lit_127);
DEFLIT(lit_25);
DEFLIT(lit_95);
DEFLIT(lit_54);
DEFLIT(lit_93);
DEFLIT(lit_59);
DEFLIT(lit_61);
DEFLIT(lit_62);
DEFLIT(lit_16);
DEFLIT(lit_5);
DEFLIT(lit_39);
DEFLIT(lit_90);
DEFLIT(lit_55);
DEFLIT(lit_96);
DEFLIT(lit_122);
DEFLIT(lit_125);
DEFLIT(lit_29);
DEFLIT(lit_88);
DEFLIT(lit_27);
DEFLIT(lit_12);
DEFLIT(lit_131);
DEFLIT(lit_6);
DEFLIT(lit_103);
DEFLIT(lit_13);
DEFLIT(lit_10);
DEFLIT(lit_114);
DEFLIT(lit_18);
DEFLIT(lit_37);
DEFLIT(lit_53);
DEFLIT(lit_99);
DEFLIT(lit_51);
DEFLIT(lit_72);
DEFLIT(lit_23);
DEFLIT(lit_9);
DEFLIT(lit_0);
DEFLIT(lit_21);
DEFLIT(lit_130);
DEFLIT(lit_129);
DEFLIT(lit_82);
DEFLIT(lit_115);
DEFLIT(lit_84);
DEFLIT(lit_118);
DEFLIT(lit_33);
DEFLIT(lit_63);
DEFLIT(lit_11);
DEFLIT(lit_7);
DEFLIT(lit_45);
DEFLIT(lit_24);
DEFLIT(lit_49);
DEFLIT(lit_76);
DEFLIT(lit_74);
DEFLIT(lit_42);
DEFLIT(lit_77);
DEFLIT(lit_30);
DEFLIT(lit_121);
DEFLIT(lit_28);
DEFLIT(lit_71);
DEFLIT(lit_44);
DEFLIT(lit_35);
DEFLIT(lit_101);
DEFLIT(lit_109);
DEFLIT(lit_4);
DEFLIT(lit_68);
DEFLIT(lit_97);
DEFLIT(lit_119);
DEFLIT(lit_120);
DEFLIT(lit_48);
DEFLIT(lit_116);
DEFLIT(lit_65);
DEFLIT(lit_14);
DEFLIT(lit_50);
DEFLIT(lit_3);
DEFLIT(lit_80);
DEFLIT(lit_36);
DEFLIT(lit_70);
DEFLIT(lit_26);
DEFLIT(lit_91);
DEFLIT(lit_67);
DEFLIT(lit_41);
DEFLIT(lit_1);
DEFLIT(lit_105);
DEFLIT(lit_106);
DEFLIT(lit_124);
DEFLIT(lit_85);
DEFLIT(lit_86);
DEFLIT(lit_46);
DEFLIT(lit_17);
DEFLIT(lit_52);
DEFLIT(lit_8);
DEFLIT(lit_64);
DEFLIT(lit_32);
DEFLIT(lit_66);
DEFLIT(lit_20);
DEFLIT(lit_113);
DEFLIT(lit_75);
DEFLIT(lit_92);
DEFLIT(lit_128);
DEFLIT(lit_89);
DEFLIT(lit_22);
DEFLIT(lit_102);
DEFLIT(lit_123);
DEFLIT(lit_83);
DEFLIT(lit_117);
DEFLIT(lit_112);
DEFLIT(lit_2);
DEFLIT(lit_126);
DEFLIT(lit_47);
DEFLIT(lit_73);
DEFLIT(lit_100);
DEFLIT(lit_87);
DEFLIT(lit_34);
DEFLIT(lit_110);
DEFLIT(lit_56);
DEFLIT(lit_104);

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
  P formF2306;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read),FREEREF(0));
  formF2306 = T1;
  T4 = CALL1(1,VARREF(YgooSioSreadYreader_tokenQ),formF2306);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T2 = formF2306;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),formF2306,VARREF(YgooSioSreadYDclose_paren));
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
  P loopF2307;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_0,2);
  loopF2307 = T1;
  FUNINIT(loopF2307, 2,port_,loopF2307);
  T2 = CALL0(0,loopF2307);
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
  P tmpF2308;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2308 = T1;
  if (tmpF2308 != YPfalse) {
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
  P portF2309;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  portF2309 = YPfalse;
  portF2309 = BOXFAB(portF2309);
  T3 = FUNFAB(fun_2,2,portF2309,x_);
  T4 = FUNFAB(fun_3,1,portF2309);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_carefully_5) {
  P port_;
  P formF2310;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
  formF2310 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF2310);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_9));
    T2 = T4;
  } else {
    T6 = CALL1(1,VARREF(YgooSioSreadYreader_tokenQ),formF2310);
    if (T6 != YPfalse) {
      T8 = CALL1(1,VARREF(Ytail),formF2310);
      T7 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,T8);
      T5 = T7;
    } else {
      T5 = formF2310;
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
  P cF2311;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYget),port_);
  cF2311 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2311);
  if (T3 != YPfalse) {
    T2 = cF2311;
  } else {
    T6 = CALL1(1,VARREF(YgooSmathYchar_Gascii),cF2311);
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_dispatch_vectorT),T6);
    T4 = CALL2(1,T5,cF2311,port_);
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
  P cF2312;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF2312 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYchar_Gascii),cF2312);
  T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),VARREF(YgooScolsSstrYascii_whitespaces),T4);
  if (T3 != YPfalse) {
    CALL1(1,VARREF(YgooSioSportYget),port_);
    T5 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
    T2 = T5;
  } else {
    T2 = cF2312;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_16) {
  P c_;
  P UF2313;
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
    UF2313 = T4;
    T7 = CALL1(1,VARREF(YgooSconditionsYread),FREEREF(1));
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),T7,UF2313);
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
  P loopF2315;
  P retlistF2314;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(endchar_, 0);
  ARG(port_, 1);
loop:
  retlistF2314 = VARREF(Ynil);
  retlistF2314 = BOXFAB(retlistF2314);
  T3 = FUNSHELL(1,fun_loop_16,4);
  loopF2315 = T3;
  FUNINIT(loopF2315, 4,endchar_,port_,retlistF2314,loopF2315);
  T5 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
  T4 = CALL1(0,loopF2315,T5);
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
  P nextF2317;
  P prevF2316;
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
  prevF2316 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),form_);
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSioSreadYsub_read_list_eof_error),FREEREF(0));
    T3 = T5;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),form_,VARREF(YgooSioSreadYDclose_paren));
    if (T7 != YPfalse) {
      T8 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,prevF2316);
      T6 = T8;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),form_,VARREF(YgooSioSreadYDvert_sym));
      if (T10 != YPfalse) {
        T12 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),FREEREF(0));
        nextF2317 = T12;
        T15 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,nextF2317);
        T14 = CALL3(1,VARREF(YgooScolsSlstYline_pair),prevF2316,T15,line_);
        T16 = CALL2(1,VARREF(YgooSioSreadYsub_read_list),c_,FREEREF(0));
        T13 = CALL3(1,VARREF(YgooScolsSlstYline_pair),T14,T16,line_);
        T11 = T13;
        T9 = T11;
      } else {
        if (YPtrue != YPfalse) {
          T20 = CALL1(1,VARREF(YgooSioSportYport_line),FREEREF(0));
          T21 = CALL1(1,VARREF(YgooSioSreadYsub_read),FREEREF(0));
          T19 = CALL4(1,FREEREF(1),c_,form_,T20,T21);
          T18 = CALL3(1,VARREF(YgooScolsSlstYline_pair),prevF2316,T19,line_);
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
  P read_nextF2320;
  P formF2319;
  P lineF2318;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(p_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYport_line),p_);
  lineF2318 = T1;
  T3 = CALL1(1,VARREF(YgooSioSreadYsub_read),p_);
  formF2319 = T3;
  T5 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF2319);
  if (T5 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSioSreadYsub_read_list_eof_error),p_);
    T4 = T6;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),formF2319,VARREF(YgooSioSreadYDclose_paren));
    if (T8 != YPfalse) {
      T7 = Ynil;
    } else {
      if (YPtrue != YPfalse) {
        T11 = FUNSHELL(1,fun_read_next_24,2);
        read_nextF2320 = T11;
        FUNINIT(read_nextF2320, 2,p_,read_nextF2320);
        T13 = CALL1(1,VARREF(YgooSioSreadYsub_read),p_);
        T12 = CALL4(1,read_nextF2320,c_,formF2319,lineF2318,T13);
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
  P formF2321;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(c_, 0);
  ARG(e_, 1);
  ARG(port_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
  formF2321 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF2321);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_58));
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),formF2321,e_);
    if (T6 != YPfalse) {
      T5 = Ynil;
    } else {
      T8 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,e_,port_);
      T7 = CALL2(1,VARREF(YgooSmacrosYpair),formF2321,T8);
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
  P x_1392F2324;
  P x_1391F2323;
  P formF2322;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,VARREF(YgooSioSreadYDclose_bracket),port_);
  formF2322 = T1;
  T3 = CALL1(1,VARREF(YgooStypesYlen),formF2322);
  x_1391F2323 = T3;
  x_1392F2324 = VARREF(YgooSmacrosYEE);
  T6 = CALL2(1,x_1392F2324,x_1391F2323,YPint((P)2));
  if (T6 != YPfalse) {
    T8 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
    T10 = CALL1(1,VARREF(YgooSmacrosY1st),formF2322);
    T9 = CALL1(1,VARREF(Ylst),T10);
    T12 = CALL1(1,VARREF(YgooSmacrosY2nd),formF2322);
    T11 = CALL1(1,VARREF(Ylst),T12);
    T7 = CALL4(1,VARREF(YgooSmacrosYcat),T8,T9,T11,LITREF(lit_62));
    T5 = T7;
  } else {
    T14 = CALL2(1,x_1392F2324,x_1391F2323,YPint((P)3));
    if (T14 != YPfalse) {
      T17 = CALL1(1,VARREF(YgooScolsSseqY3rd),formF2322);
      T16 = CALL2(1,VARREF(YgooSmacrosYEE),T17,LITREF(lit_63));
      if (T16 != YPfalse) {
        T19 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
        T21 = CALL1(1,VARREF(YgooSmacrosY1st),formF2322);
        T20 = CALL1(1,VARREF(Ylst),T21);
        T23 = CALL1(1,VARREF(YgooSmacrosY2nd),formF2322);
        T22 = CALL1(1,VARREF(Ylst),T23);
        T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T22,LITREF(lit_62));
        T15 = T18;
      } else {
        T25 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
        T27 = CALL1(1,VARREF(YgooSmacrosY1st),formF2322);
        T26 = CALL1(1,VARREF(Ylst),T27);
        T29 = CALL1(1,VARREF(YgooSmacrosY2nd),formF2322);
        T28 = CALL1(1,VARREF(Ylst),T29);
        T31 = CALL1(1,VARREF(YgooScolsSseqY3rd),formF2322);
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
  P dot_indexF2326;
  P formF2325;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,VARREF(YgooSioSreadYDclose_curly),port_);
  formF2325 = T1;
  T3 = CALL2(1,VARREF(YgooScolsSseqYpos),formF2325,LITREF(lit_69));
  dot_indexF2326 = T3;
  if (dot_indexF2326 != YPfalse) {
    T6 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
    T8 = CALL3(1,VARREF(YgooScolsSseqYsub),formF2325,YPint((P)0),dot_indexF2326);
    T7 = CALL1(1,VARREF(Ylst),T8);
    T10 = CALL2(1,VARREF(YgooSmathYA),dot_indexF2326,YPint((P)1));
    T9 = CALL2(1,VARREF(YgooScolsSseqYsubT),formF2325,T10);
    T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T9,LITREF(lit_62));
    T4 = T5;
  } else {
    T12 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
    T13 = CALL1(1,VARREF(Ylst),Ynil);
    T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,formF2325,LITREF(lit_62));
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
  P keywordF2328;
  P nextF2327;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  nextF2327 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),nextF2327);
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_79));
    T3 = T5;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYE),nextF2327,YPchr((P)64));
    if (T7 != YPfalse) {
      CALL1(1,VARREF(YgooSioSportYget),port_);
      T6 = LITREF(lit_80);
    } else {
      T6 = LITREF(lit_81);
    }
    T3 = T6;
  }
  keywordF2328 = T3;
  T9 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T8 = CALL2(1,VARREF(Ylst),keywordF2328,T9);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_35) {
  P l_,i_;
  P ecF2332;
  P tmpF2331;
  P cF2330;
  P cF2329;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
  cF2329 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2329);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),FREEREF(0),LITREF(lit_85));
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YgooSmathYE),cF2329,YPchr((P)92));
    if (T6 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
      cF2330 = T8;
      T10 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2330);
      if (T10 != YPfalse) {
        T11 = CALL2(1,VARREF(YgooSioSreadYreading_error),FREEREF(0),LITREF(lit_86));
        T9 = T11;
      } else {
        T14 = CALL2(1,VARREF(YgooSmathYE),cF2330,YPchr((P)92));
        tmpF2331 = T14;
        if (tmpF2331 != YPfalse) {
          T15 = tmpF2331;
        } else {
          T16 = CALL2(1,VARREF(YgooSmathYE),cF2330,YPchr((P)34));
          T15 = T16;
        }
        T13 = T15;
        if (T13 != YPfalse) {
          T18 = CALL2(1,VARREF(YgooSmacrosYpair),cF2330,l_);
          T19 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
          a1 = T18;
          a2 = T19;
          l_ = a1;
          i_ = a2;
          goto loop;
          T12 = T17;
        } else {
          T22 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF2330);
          T21 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYDstring_escape_chars),T22);
          ecF2332 = T21;
          if (ecF2332 != YPfalse) {
            T25 = CALL2(1,VARREF(YgooSmacrosYpair),ecF2332,l_);
            T26 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
            a1 = T25;
            a2 = T26;
            l_ = a1;
            i_ = a2;
            goto loop;
            T23 = T24;
          } else {
            T27 = CALL3(1,VARREF(YgooSioSreadYreading_error),FREEREF(0),LITREF(lit_87),cF2330);
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
      T29 = CALL2(1,VARREF(YgooSmathYE),cF2329,YPchr((P)34));
      if (T29 != YPfalse) {
        T30 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),l_,i_);
        T28 = T30;
      } else {
        T32 = CALL2(1,VARREF(YgooSmacrosYpair),cF2329,l_);
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
  P loopF2333;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_35,2);
  loopF2333 = T1;
  FUNINIT(loopF2333, 2,port_,loopF2333);
  T2 = CALL2(0,loopF2333,Ynil,YPint((P)0));
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
  P cF2334;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
  cF2334 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2334);
  if (T3 != YPfalse) {
    T2 = cF2334;
  } else {
    T5 = CALL2(1,VARREF(YgooSmathYE),cF2334,YPchr((P)10));
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
  P loopF2335;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_38,2);
  loopF2335 = T1;
  FUNINIT(loopF2335, 2,port_,loopF2335);
  T2 = CALL0(0,loopF2335);
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
  P probeF2338;
  P cF2337;
  P cF2336;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF2336 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2336);
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_94));
    T3 = T5;
  } else {
    T6 = CALL1(1,VARREF(YgooSmathYto_lower),cF2336);
    T3 = T6;
  }
  cF2337 = T3;
  T8 = CALL2(1,VARREF(YgooScolsSlstYassq),cF2337,VARREF(YgooSioSreadYTsharp_macrosT));
  probeF2338 = T8;
  if (probeF2338 != YPfalse) {
    T12 = CALL1(1,VARREF(Ytail),probeF2338);
    T11 = CALL1(1,VARREF(Yhead),T12);
    T10 = CALL2(1,T11,cF2337,port_);
    T9 = T10;
  } else {
    T13 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_95),cF2337);
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
  P x_1394F2341;
  P x_1393F2340;
  P cF2339;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(found_slashQ_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
  cF2339 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2339);
  if (T3 != YPfalse) {
    T2 = cF2339;
  } else {
    x_1393F2340 = cF2339;
    x_1394F2341 = VARREF(YgooSmacrosYEE);
    T7 = CALL2(1,x_1394F2341,x_1393F2340,YPchr((P)47));
    if (T7 != YPfalse) {
      a1 = YPtrue;
      found_slashQ_ = a1;
      goto loop;
      T6 = T8;
    } else {
      T10 = CALL2(1,x_1394F2341,x_1393F2340,YPchr((P)35));
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
  P loopF2342;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_45,2);
  loopF2342 = T1;
  FUNINIT(loopF2342, 2,port_,loopF2342);
  T2 = CALL1(0,loopF2342,YPfalse);
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
  P tempF2345;
  P nameF2344;
  P cF2343;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF2343 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2343);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_105));
    T2 = T4;
  } else {
    T6 = CALL1(1,VARREF(YgooSmathYalphaQ),cF2343);
    if (T6 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
      nameF2344 = T8;
      T12 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF2344);
      T11 = CALL1(1,VARREF(YgooStypesYlen),T12);
      T10 = CALL2(1,VARREF(YgooSmathYE),T11,YPint((P)1));
      if (T10 != YPfalse) {
        T9 = cF2343;
      } else {
        T14 = CALL2(1,VARREF(YgooScolsSlstYassq),nameF2344,VARREF(YgooSioSreadYDchar_long_names));
        tempF2345 = T14;
        if (tempF2345 != YPfalse) {
          T17 = CALL1(1,VARREF(Ytail),tempF2345);
          T16 = CALL1(1,VARREF(Yhead),T17);
          T15 = T16;
        } else {
          T18 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_106),nameF2344);
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
  P tmpF2347;
  P stringF2346;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSioSreadYsub_read_token),YPchr((P)35),port_);
  stringF2346 = T1;
  T3 = CALL1(1,VARREF(YgooScolsSstrYstr_to_num),stringF2346);
  tmpF2347 = T3;
  if (tmpF2347 != YPfalse) {
    T4 = tmpF2347;
  } else {
    T5 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_110),stringF2346);
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
  P tmpF2349;
  P cF2348;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(n_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),FREEREF(0));
  cF2348 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2348);
  tmpF2349 = T4;
  if (tmpF2349 != YPfalse) {
    T5 = tmpF2349;
  } else {
    T7 = CALL1(1,VARREF(YgooSmathYchar_Gascii),cF2348);
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
  P loopF2350;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_53,2);
  loopF2350 = T1;
  FUNINIT(loopF2350, 2,port_,loopF2350);
  T4 = CALL1(1,VARREF(YgooSioSreadYpreferred_case),c_);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T2 = CALL2(0,loopF2350,T3,YPint((P)1));
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
  P maybe_numberF2355;
  P tmpF2354;
  P tmpF2353;
  P tmpF2352;
  P cF2351;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1,a2;
LINK_STACK();
  ARG(string_, 0);
  ARG(port_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),string_,YPint((P)0));
  cF2351 = T2;
  T4 = CALL1(1,VARREF(YgooSmathYdigitQ),cF2351);
  tmpF2352 = T4;
  if (tmpF2352 != YPfalse) {
    T5 = tmpF2352;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYE),cF2351,YPchr((P)43));
    tmpF2353 = T7;
    if (tmpF2353 != YPfalse) {
      T8 = tmpF2353;
    } else {
      T10 = CALL2(1,VARREF(YgooSmathYE),cF2351,YPchr((P)45));
      tmpF2354 = T10;
      if (tmpF2354 != YPfalse) {
        T11 = tmpF2354;
      } else {
        T12 = CALL2(1,VARREF(YgooSmathYE),cF2351,YPchr((P)46));
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
    maybe_numberF2355 = T14;
    if (maybe_numberF2355 != YPfalse) {
      T15 = maybe_numberF2355;
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
  P vecF2358;
  P str10496F2357;
  P sub_read_whitespaceF2356;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147;
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
  T3 = VARREF_OR(YgooSconditionsYread,YPfalse);
  T4 = fun_read_1;
  T2 = XCALL2(1,VARREF(YPdefine_method),T3,T4);
  VARSET(YgooSconditionsYread,T2);
  lit_5 = YPPsym((P)"read-from-string");
  lit_6 = YPPlist(1,YPPsym((P)"x"));
  T7 = YPsig(LITREF(lit_3),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T7,ENVNUL,PNUL,sloc(39));
  T6 = YPsig(LITREF(lit_3),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_3 = YPmet(FUNCODEREF(fun_3),YPfalse,T6,ENVNUL,PNUL,sloc(39));
  T5 = YPsig(LITREF(lit_6),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_from_string_4 = YPmet(FUNCODEREF(fun_read_from_string_4),LITREF(lit_5),T5,ENVNUL,PNUL,sloc(38));
  T9 = VARREF_OR(YgooSioSreadYread_from_string,YPfalse);
  T10 = fun_read_from_string_4;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T10);
  VARSET(YgooSioSreadYread_from_string,T8);
  lit_7 = YPPsym((P)"sub-read-carefully");
  lit_8 = YPPlist(1,YPPsym((P)"port"));
  lit_9 = YPsb((P)"unexpected end of file");
  T11 = YPsig(LITREF(lit_8),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sub_read_carefully_5 = YPmet(FUNCODEREF(fun_sub_read_carefully_5),LITREF(lit_7),T11,ENVNUL,PNUL,sloc(41));
  T13 = VARREF_OR(YgooSioSreadYsub_read_carefully,YPfalse);
  T14 = fun_sub_read_carefully_5;
  T12 = XCALL2(1,VARREF(YPdefine_method),T13,T14);
  VARSET(YgooSioSreadYsub_read_carefully,T12);
  lit_10 = YPPsym((P)"<reader-token>");
  T16 = (P)YPpair(VARREF(YLanyG),Ynil);
  T15 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_10),T16);
  VARSET(YgooSioSreadYLreader_tokenG,T15);
  lit_11 = YPPsym((P)"token-message");
  lit_12 = YPPlist(1,YPPsym((P)"_x"));
  T17 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YgooSioSreadYLreader_tokenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_token_message_6 = YPmet(FUNCODEREF(fun_token_message_6),LITREF(lit_11),T17,ENVNUL,PNUL,sloc(51));
  T19 = VARREF_OR(YgooSioSreadYtoken_message,YPfalse);
  T20 = fun_token_message_6;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T20);
  VARSET(YgooSioSreadYtoken_message,T18);
  lit_13 = YPPsym((P)"token-message-setter");
  lit_14 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T21 = YPsig(LITREF(lit_14),YPPlist(2,VARREF(YLstrG),VARREF(YgooSioSreadYLreader_tokenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_token_message_setter_7 = YPmet(FUNCODEREF(fun_token_message_setter_7),LITREF(lit_13),T21,ENVNUL,PNUL,sloc(51));
  T23 = VARREF_OR(YgooSioSreadYtoken_message_setter,YPfalse);
  T24 = fun_token_message_setter_7;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T24);
  VARSET(YgooSioSreadYtoken_message_setter,T22);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSioSreadYLreader_tokenG),VARREF(YgooSioSreadYtoken_message),VARREF(YgooSioSreadYtoken_message_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_15 = YPPsym((P)"make-reader-token");
  lit_16 = YPPlist(1,YPPsym((P)"message"));
  T25 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_reader_token_8 = YPmet(FUNCODEREF(fun_make_reader_token_8),LITREF(lit_15),T25,ENVNUL,PNUL,sloc(53));
  T27 = VARREF_OR(YgooSioSreadYmake_reader_token,YPfalse);
  T28 = fun_make_reader_token_8;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T28);
  VARSET(YgooSioSreadYmake_reader_token,T26);
  lit_17 = YPPsym((P)"reader-token?");
  lit_18 = YPPlist(1,YPPsym((P)"form"));
  T29 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_reader_tokenQ_9 = YPmet(FUNCODEREF(fun_reader_tokenQ_9),LITREF(lit_17),T29,ENVNUL,PNUL,sloc(56));
  T31 = VARREF_OR(YgooSioSreadYreader_tokenQ,YPfalse);
  T32 = fun_reader_tokenQ_9;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T32);
  VARSET(YgooSioSreadYreader_tokenQ,T30);
  lit_19 = YPsb((P)"unexpected right parenthesis");
  T33 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_19));
  VARSET(YgooSioSreadYDclose_paren,T33);
  lit_20 = YPsb((P)"unexpected right bracket");
  T34 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_20));
  VARSET(YgooSioSreadYDclose_bracket,T34);
  lit_21 = YPsb((P)"unexpected right curly");
  T35 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_21));
  VARSET(YgooSioSreadYDclose_curly,T35);
  lit_22 = YPPsym((P)"sub-read");
  lit_23 = YPPlist(1,YPPsym((P)"port"));
  T36 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sub_read_10 = YPmet(FUNCODEREF(fun_sub_read_10),LITREF(lit_22),T36,ENVNUL,PNUL,sloc(65));
  T38 = VARREF_OR(YgooSioSreadYsub_read,YPfalse);
  T39 = fun_sub_read_10;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T39);
  VARSET(YgooSioSreadYsub_read,T37);
  lit_24 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_25 = YPsb((P)"illegal character read");
  T40 = YPsig(LITREF(lit_24),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T40,ENVNUL,PNUL,sloc(76));
  T42 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T43 = fun_11;
  T41 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T42,T43);
  VARSET(YgooSioSreadYTread_dispatch_vectorT,T41);
  T45 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T44 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T45,YPtrue);
  VARSET(YgooSioSreadYTread_terminatingQ_vectorT,T44);
  lit_26 = YPPsym((P)"set-standard-syntax!");
  lit_27 = YPPlist(3,YPPsym((P)"char"),YPPsym((P)"terminating?"),YPPsym((P)"reader"));
  T46 = YPsig(LITREF(lit_27),YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_set_standard_syntaxX_12 = YPmet(FUNCODEREF(fun_set_standard_syntaxX_12),LITREF(lit_26),T46,ENVNUL,PNUL,sloc(80));
  T48 = VARREF_OR(YgooSioSreadYset_standard_syntaxX,YPfalse);
  T49 = fun_set_standard_syntaxX_12;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YgooSioSreadYset_standard_syntaxX,T47);
  lit_28 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_29 = YPPlist(1,YPPsym((P)"c"));
  T51 = YPsig(LITREF(lit_28),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T51,ENVNUL,PNUL,sloc(84));
  T50 = YPsig(LITREF(lit_29),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T50,ENVNUL,PNUL,sloc(85));
  T52 = fun_13;
  sub_read_whitespaceF2356 = T52;
  T54 = FUNFAB(fun_14,1,sub_read_whitespaceF2356);
  T53 = XCALL2(1,VARREF(YgooSmacrosYdo),T54,VARREF(YgooScolsSstrYascii_whitespaces));
  lit_30 = YPPsym((P)"flush-whitespace");
  lit_31 = YPPlist(1,YPPsym((P)"port"));
  T55 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYflush_whitespace = YPmet(FUNCODEREF(YgooSioSreadYflush_whitespace),LITREF(lit_30),T55,ENVNUL,PNUL,sloc(88));
  T56 = YgooSioSreadYflush_whitespace;
  VARSET(YgooSioSreadYflush_whitespace,T56);
  lit_32 = YPPsym((P)"read-delimited-list");
  lit_33 = YPPlist(2,YPPsym((P)"endchar"),YPPsym((P)"port"));
  lit_34 = YPPlist(1,YPPsym((P)"c"));
  T58 = YPsig(LITREF(lit_34),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_16 = YPmet(FUNCODEREF(fun_loop_16),LITREF(lit_2),T58,ENVNUL,PNUL,sloc(98));
  T57 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_delimited_list = YPmet(FUNCODEREF(YgooSioSreadYread_delimited_list),LITREF(lit_32),T57,ENVNUL,PNUL,sloc(96));
  T59 = YgooSioSreadYread_delimited_list;
  VARSET(YgooSioSreadYread_delimited_list,T59);
  lit_35 = YPPsym((P)"sub-read-constituent");
  lit_36 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T60 = YPsig(LITREF(lit_36),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYsub_read_constituent = YPmet(FUNCODEREF(YgooSioSreadYsub_read_constituent),LITREF(lit_35),T60,ENVNUL,PNUL,sloc(104));
  T61 = YgooSioSreadYsub_read_constituent;
  VARSET(YgooSioSreadYsub_read_constituent,T61);
  lit_37 = YPsb((P)"!$%&*+-./0123456789:<=>?@^_~ABCDEFGHIJKLM");
  lit_38 = YPsb((P)"NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  lit_39 = YPPlist(1,YPPsym((P)"c"));
  T62 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T62,ENVNUL,PNUL,sloc(111));
  T63 = XCALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_37),LITREF(lit_38));
  str10496F2357 = T63;
  T65 = fun_19;
  T64 = XCALL2(1,VARREF(YgooSmacrosYdo),T65,str10496F2357);
  lit_40 = YPPsym((P)"set-standard-read-macro!");
  lit_41 = YPPlist(3,YPPsym((P)"char"),YPPsym((P)"terminating?"),YPPsym((P)"proc"));
  T66 = YPsig(LITREF(lit_41),YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_set_standard_read_macroX_20 = YPmet(FUNCODEREF(fun_set_standard_read_macroX_20),LITREF(lit_40),T66,ENVNUL,PNUL,sloc(116));
  T68 = VARREF_OR(YgooSioSreadYset_standard_read_macroX,YPfalse);
  T69 = fun_set_standard_read_macroX_20;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T69);
  VARSET(YgooSioSreadYset_standard_read_macroX,T67);
  lit_42 = YPPsym((P)"get-standard-read-macro");
  lit_43 = YPPlist(1,YPPsym((P)"char"));
  T70 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_get_standard_read_macro_21 = YPmet(FUNCODEREF(fun_get_standard_read_macro_21),LITREF(lit_42),T70,ENVNUL,PNUL,sloc(119));
  T72 = VARREF_OR(YgooSioSreadYget_standard_read_macro,YPfalse);
  T73 = fun_get_standard_read_macro_21;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T73);
  VARSET(YgooSioSreadYget_standard_read_macro,T71);
  lit_44 = YPPsym((P)"sub-read-vertical");
  lit_45 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_46 = YPsb((P)"|");
  T74 = YPsig(LITREF(lit_45),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_vertical_22 = YPmet(FUNCODEREF(fun_sub_read_vertical_22),LITREF(lit_44),T74,ENVNUL,PNUL,sloc(122));
  T76 = VARREF_OR(YgooSioSreadYsub_read_vertical,YPfalse);
  T77 = fun_sub_read_vertical_22;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T77);
  VARSET(YgooSioSreadYsub_read_vertical,T75);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)124),YPtrue,VARREF(YgooSioSreadYsub_read_vertical));
  lit_47 = YPsb((P)"|");
  T78 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),LITREF(lit_47));
  VARSET(YgooSioSreadYDvert_sym,T78);
  lit_48 = YPsb((P)"vert-proxy");
  T79 = XCALL1(1,VARREF(Ylst),LITREF(lit_48));
  VARSET(YgooSioSreadYDvert_proxy,T79);
  lit_49 = YPPsym((P)"sub-read-list-eof-error");
  lit_50 = YPPlist(1,YPPsym((P)"port"));
  lit_51 = YPsb((P)"end of file inside list -- unbalanced parentheses");
  T80 = YPsig(LITREF(lit_50),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYsub_read_list_eof_error = YPmet(FUNCODEREF(YgooSioSreadYsub_read_list_eof_error),LITREF(lit_49),T80,ENVNUL,PNUL,sloc(130));
  T81 = YgooSioSreadYsub_read_list_eof_error;
  VARSET(YgooSioSreadYsub_read_list_eof_error,T81);
  lit_52 = YPPsym((P)"sub-read-list");
  lit_53 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"p"));
  lit_54 = YPPsym((P)"read-next");
  lit_55 = YPPlist(4,YPPsym((P)"c"),YPPsym((P)"prev"),YPPsym((P)"line"),YPPsym((P)"form"));
  T83 = YPsig(LITREF(lit_55),YPPlist(4,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_read_next_24 = YPmet(FUNCODEREF(fun_read_next_24),LITREF(lit_54),T83,ENVNUL,PNUL,sloc(140));
  T82 = YPsig(LITREF(lit_53),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_list_25 = YPmet(FUNCODEREF(fun_sub_read_list_25),LITREF(lit_52),T82,ENVNUL,PNUL,sloc(133));
  T85 = VARREF_OR(YgooSioSreadYsub_read_list,YPfalse);
  T86 = fun_sub_read_list_25;
  T84 = XCALL2(1,VARREF(YPdefine_method),T85,T86);
  VARSET(YgooSioSreadYsub_read_list,T84);
  lit_56 = YPPsym((P)"sub-read-seq");
  lit_57 = YPPlist(3,YPPsym((P)"c"),YPPsym((P)"e"),YPPsym((P)"port"));
  lit_58 = YPsb((P)"end of file inside list -- unbalanced parentheses");
  T87 = YPsig(LITREF(lit_57),YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_sub_read_seq_26 = YPmet(FUNCODEREF(fun_sub_read_seq_26),LITREF(lit_56),T87,ENVNUL,PNUL,sloc(157));
  T89 = VARREF_OR(YgooSioSreadYsub_read_seq,YPfalse);
  T90 = fun_sub_read_seq_26;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T90);
  VARSET(YgooSioSreadYsub_read_seq,T88);
  lit_59 = YPPsym((P)"sub-read-brackets");
  lit_60 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_61 = YPPsym((P)"elt");
  lit_62 = Ynil;
  lit_63 = YPPsym((P)"*");
  lit_64 = YPPsym((P)"sub*");
  lit_65 = YPPsym((P)"sub");
  lit_66 = YPsb((P)"invalid [ ... ] form");
  T91 = YPsig(LITREF(lit_60),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_brackets_27 = YPmet(FUNCODEREF(fun_sub_read_brackets_27),LITREF(lit_59),T91,ENVNUL,PNUL,sloc(166));
  T93 = VARREF_OR(YgooSioSreadYsub_read_brackets,YPfalse);
  T94 = fun_sub_read_brackets_27;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T94);
  VARSET(YgooSioSreadYsub_read_brackets,T92);
  lit_67 = YPPsym((P)"sub-read-curlies");
  lit_68 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_69 = YPPsym((P)".");
  lit_70 = YPPsym((P)"fun");
  T95 = YPsig(LITREF(lit_68),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_curlies_28 = YPmet(FUNCODEREF(fun_sub_read_curlies_28),LITREF(lit_67),T95,ENVNUL,PNUL,sloc(175));
  T97 = VARREF_OR(YgooSioSreadYsub_read_curlies,YPfalse);
  T98 = fun_sub_read_curlies_28;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T98);
  VARSET(YgooSioSreadYsub_read_curlies,T96);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)40),YPtrue,VARREF(YgooSioSreadYsub_read_list));
  lit_71 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T99 = YPsig(LITREF(lit_71),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T99,ENVNUL,PNUL,sloc(184));
  T100 = fun_29;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)41),YPtrue,T100);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)123),YPtrue,VARREF(YgooSioSreadYsub_read_curlies));
  lit_72 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T101 = YPsig(LITREF(lit_72),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T101,ENVNUL,PNUL,sloc(188));
  T102 = fun_30;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)125),YPtrue,T102);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)91),YPtrue,VARREF(YgooSioSreadYsub_read_brackets));
  lit_73 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T103 = YPsig(LITREF(lit_73),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T103,ENVNUL,PNUL,sloc(192));
  T104 = fun_31;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)93),YPtrue,T104);
  lit_74 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_75 = YPPsym((P)"quote");
  T105 = YPsig(LITREF(lit_74),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T105,ENVNUL,PNUL,sloc(195));
  T106 = fun_32;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)39),YPtrue,T106);
  lit_76 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_77 = YPPsym((P)"quasiquote");
  T107 = YPsig(LITREF(lit_76),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T107,ENVNUL,PNUL,sloc(198));
  T108 = fun_33;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)96),YPtrue,T108);
  lit_78 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_79 = YPsb((P)"end of file after ,");
  lit_80 = YPPsym((P)"unquote-splicing");
  lit_81 = YPPsym((P)"unquote");
  T109 = YPsig(LITREF(lit_78),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T109,ENVNUL,PNUL,sloc(202));
  T110 = fun_34;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)44),YPtrue,T110);
  T113 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T112 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T113,YPfalse);
  vecF2358 = T112;
  T114 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)116));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)9),vecF2358,T114);
  T115 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)102));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)12),vecF2358,T115);
  T116 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)114));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)13),vecF2358,T116);
  T117 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)110));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)10),vecF2358,T117);
  T118 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF2358);
  T111 = T118;
  VARSET(YgooSioSreadYDstring_escape_chars,T111);
  lit_82 = YPPsym((P)"read-string-literal");
  lit_83 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_84 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"i"));
  lit_85 = YPsb((P)"end of file within a string");
  lit_86 = YPsb((P)"end of file within a string");
  lit_87 = YPsb((P)"invalid escaped character in string");
  T120 = YPsig(LITREF(lit_84),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_35 = YPmet(FUNCODEREF(fun_loop_35),LITREF(lit_2),T120,ENVNUL,PNUL,sloc(222));
  T119 = YPsig(LITREF(lit_83),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_string_literal = YPmet(FUNCODEREF(YgooSioSreadYread_string_literal),LITREF(lit_82),T119,ENVNUL,PNUL,sloc(220));
  T121 = YgooSioSreadYread_string_literal;
  VARSET(YgooSioSreadYread_string_literal,T121);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)34),YPtrue,VARREF(YgooSioSreadYread_string_literal));
  lit_88 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T122 = YPsig(LITREF(lit_88),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T122,ENVNUL,PNUL,sloc(246));
  T123 = fun_37;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)59),YPtrue,T123);
  lit_89 = YPPsym((P)"gobble-line");
  lit_90 = YPPlist(1,YPPsym((P)"port"));
  T125 = YPsig(LITREF(lit_3),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_38 = YPmet(FUNCODEREF(fun_loop_38),LITREF(lit_2),T125,ENVNUL,PNUL,sloc(249));
  T124 = YPsig(LITREF(lit_90),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gobble_line_39 = YPmet(FUNCODEREF(fun_gobble_line_39),LITREF(lit_89),T124,ENVNUL,PNUL,sloc(248));
  T127 = VARREF_OR(YgooSioSreadYgobble_line,YPfalse);
  T128 = fun_gobble_line_39;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T128);
  VARSET(YgooSioSreadYgobble_line,T126);
  VARSET(YgooSioSreadYTsharp_macrosT,Ynil);
  lit_91 = YPPsym((P)"define-sharp-macro");
  lit_92 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"proc"));
  T129 = YPsig(LITREF(lit_92),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_define_sharp_macro_40 = YPmet(FUNCODEREF(fun_define_sharp_macro_40),LITREF(lit_91),T129,ENVNUL,PNUL,sloc(255));
  T131 = VARREF_OR(YgooSioSreadYdefine_sharp_macro,YPfalse);
  T132 = fun_define_sharp_macro_40;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T132);
  VARSET(YgooSioSreadYdefine_sharp_macro,T130);
  lit_93 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_94 = YPsb((P)"end of file after #");
  lit_95 = YPsb((P)"unknown # syntax");
  T133 = YPsig(LITREF(lit_93),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T133,ENVNUL,PNUL,sloc(260));
  T134 = fun_41;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)35),YPfalse,T134);
  lit_96 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T135 = YPsig(LITREF(lit_96),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T135,ENVNUL,PNUL,sloc(270));
  T136 = fun_42;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)102),T136);
  lit_97 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T137 = YPsig(LITREF(lit_97),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T137,ENVNUL,PNUL,sloc(272));
  T138 = fun_43;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)116),T138);
  lit_98 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T139 = YPsig(LITREF(lit_98),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T139,ENVNUL,PNUL,sloc(274));
  T140 = fun_44;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)124),T140);
  lit_99 = YPPsym((P)"gobble-nested-comment");
  lit_100 = YPPlist(1,YPPsym((P)"port"));
  lit_101 = YPPlist(1,YPPsym((P)"found-slash?"));
  T142 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_45 = YPmet(FUNCODEREF(fun_loop_45),LITREF(lit_2),T142,ENVNUL,PNUL,sloc(277));
  T141 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYgobble_nested_comment = YPmet(FUNCODEREF(YgooSioSreadYgobble_nested_comment),LITREF(lit_99),T141,ENVNUL,PNUL,sloc(276));
  T143 = YgooSioSreadYgobble_nested_comment;
  VARSET(YgooSioSreadYgobble_nested_comment,T143);
  lit_102 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T144 = YPsig(LITREF(lit_102),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T144,ENVNUL,PNUL,sloc(287));
  T145 = fun_47;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)47),T145);
  lit_103 = YPPlist(5,YPPlist(2,YPPsym((P)"tab"),YPchr((P)9)),YPPlist(2,YPPsym((P)"page"),YPchr((P)12)),YPPlist(2,YPPsym((P)"return"),YPchr((P)13)),YPPlist(2,YPPsym((P)"newline"),YPchr((P)10)),YPPlist(2,YPPsym((P)"space"),YPchr((P)32)));
  T147 = VARSET(YgooSioSreadYDchar_long_names,LITREF(lit_103));
  T146 = T147;
  return T146;
}

P YgooSioSreadY___main_1___() {
  P number_sharp_macroF2359;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
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
  number_sharp_macroF2359 = T8;
  T10 = FUNFAB(fun_52,1,number_sharp_macroF2359);
  T9 = XCALL2(1,VARREF(YgooSmacrosYdo),T10,LITREF(lit_112));
  lit_113 = YPPsym((P)"sub-read-token");
  lit_114 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_115 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"n"));
  T12 = YPsig(LITREF(lit_115),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_53 = YPmet(FUNCODEREF(fun_loop_53),LITREF(lit_2),T12,ENVNUL,PNUL,sloc(337));
  T11 = YPsig(LITREF(lit_114),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_token_54 = YPmet(FUNCODEREF(fun_sub_read_token_54),LITREF(lit_113),T11,ENVNUL,PNUL,sloc(335));
  T14 = VARREF_OR(YgooSioSreadYsub_read_token,YPfalse);
  T15 = fun_sub_read_token_54;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YgooSioSreadYsub_read_token,T13);
  lit_116 = YPPsym((P)"parse-token");
  lit_117 = YPPlist(2,YPPsym((P)"string"),YPPsym((P)"port"));
  lit_118 = YPPlist(1,YPPsym((P)"x"));
  lit_119 = YPsb((P)".");
  lit_120 = YPsb((P)"unsupported number syntax");
  T17 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T17,ENVNUL,PNUL,sloc(356));
  T16 = YPsig(LITREF(lit_117),YPPlist(2,VARREF(YLstrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_token_56 = YPmet(FUNCODEREF(fun_parse_token_56),LITREF(lit_116),T16,ENVNUL,PNUL,sloc(346));
  T19 = VARREF_OR(YgooSioSreadYparse_token,YPfalse);
  T20 = fun_parse_token_56;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T20);
  VARSET(YgooSioSreadYparse_token,T18);
  lit_121 = YPPlist(9,YPsb((P)"+"),YPsb((P)"-"),YPsb((P)"..."),YPsb((P)"1st"),YPsb((P)"2nd"),YPsb((P)"3rd"),YPsb((P)"1+"),YPsb((P)"1-"),YPsb((P)"->"));
  VARSET(YgooSioSreadYDstrange_symbol_names,LITREF(lit_121));
  lit_122 = YPPsym((P)"t");
  T24 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),LITREF(lit_122));
  T23 = XCALL2(1,VARREF(YgooSmacrosYelt),T24,YPint((P)0));
  T22 = XCALL2(1,VARREF(YgooSmathYE),T23,YPchr((P)84));
  if (T22 != YPfalse) {
    T21 = VARREF(YgooSmathYto_upper);
  } else {
    T21 = VARREF(YgooSmathYto_lower);
  }
  VARSET(YgooSioSreadYpreferred_case,T21);
  lit_123 = YPPsym((P)"reading-error");
  lit_124 = YPPlist(3,YPPsym((P)"port"),YPPsym((P)"message"),YPPsym((P)"irritants"));
  lit_125 = YPsb((P)": %=");
  T25 = YPsig(LITREF(lit_124),YPPlist(2,VARREF(YgooSioSportYLportG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reading_error_57 = YPmet(FUNCODEREF(fun_reading_error_57),LITREF(lit_123),T25,ENVNUL,PNUL,sloc(383));
  T27 = VARREF_OR(YgooSioSreadYreading_error,YPfalse);
  T28 = fun_reading_error_57;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T28);
  VARSET(YgooSioSreadYreading_error,T26);
  lit_126 = YPPsym((P)"warn");
  lit_127 = YPPlist(2,YPPsym((P)"string"),YPPsym((P)"irritants-and-port"));
  T29 = YPsig(LITREF(lit_127),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_warn_58 = YPmet(FUNCODEREF(fun_warn_58),LITREF(lit_126),T29,ENVNUL,PNUL,sloc(387));
  T31 = VARREF_OR(YgooSioSreadYwarn,YPfalse);
  T32 = fun_warn_58;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T32);
  VARSET(YgooSioSreadYwarn,T30);
  lit_128 = YPPsym((P)"reverse-list->string");
  lit_129 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"n"));
  T33 = YPsig(LITREF(lit_129),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_reverse_list_Gstring_59 = YPmet(FUNCODEREF(fun_reverse_list_Gstring_59),LITREF(lit_128),T33,ENVNUL,PNUL,sloc(395));
  T35 = VARREF_OR(YgooSioSreadYreverse_list_Gstring,YPfalse);
  T36 = fun_reverse_list_Gstring_59;
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T36);
  VARSET(YgooSioSreadYreverse_list_Gstring,T34);
  lit_130 = YPPsym((P)"make-immutable!");
  lit_131 = YPPlist(1,YPPsym((P)"x"));
  T37 = YPsig(LITREF(lit_131),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_immutableX_60 = YPmet(FUNCODEREF(fun_make_immutableX_60),LITREF(lit_130),T37,ENVNUL,PNUL,sloc(398));
  T39 = VARREF_OR(YgooSioSreadYmake_immutableX,YPfalse);
  T40 = fun_make_immutableX_60;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T40);
  VARSET(YgooSioSreadYmake_immutableX,T38);
  T41 = YPfalse;
  return T41;
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
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSmap;

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
  {"type-object", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"*current-handlers*", &module_info_gooSconditions, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"describe-handler", &module_info_gooSconditions, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"port-handle", &module_info_gooSioSport, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"list-handlers", &module_info_gooSconditions, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"port-line-setter", &module_info_gooSioSport, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"build-condition-interactively", &module_info_gooSconditions, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"default-handler-description", &module_info_gooSconditions, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"zipped", &module_info_gooSruntime, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"choose-handler", &module_info_gooSconditions, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"*gensym-counter*", &module_info_gooSruntime, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"port-handle-setter", &module_info_gooSioSport, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"port-index-setter", &module_info_gooSioSport, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"define-sharp-macro", CVAR, &YgooSioSreadYdefine_sharp_macro},
  {"preferred-case", CVAR, &YgooSioSreadYpreferred_case},
  {"---main-1---", PVAR, NULL},
  {"$close-curly", CVAR, &YgooSioSreadYDclose_curly},
  {"sub-read-curlies", CVAR, &YgooSioSreadYsub_read_curlies},
  {"get-standard-read-macro", CVAR, &YgooSioSreadYget_standard_read_macro},
  {"warn", CVAR, &YgooSioSreadYwarn},
  {"reader-token?", CVAR, &YgooSioSreadYreader_tokenQ},
  {"make-reader-token", CVAR, &YgooSioSreadYmake_reader_token},
  {"*read-dispatch-vector*", CVAR, &YgooSioSreadYTread_dispatch_vectorT},
  {"sub-read-constituent", CVAR, &YgooSioSreadYsub_read_constituent},
  {"$close-paren", CVAR, &YgooSioSreadYDclose_paren},
  {"<reader-token>", CVAR, &YgooSioSreadYLreader_tokenG},
  {"read-string-literal", CVAR, &YgooSioSreadYread_string_literal},
  {"*sharp-macros*", CVAR, &YgooSioSreadYTsharp_macrosT},
  {"$char-long-names", CVAR, &YgooSioSreadYDchar_long_names},
  {"*read-terminating?-vector*", CVAR, &YgooSioSreadYTread_terminatingQ_vectorT},
  {"set-standard-read-macro!", CVAR, &YgooSioSreadYset_standard_read_macroX},
  {"sub-read", CVAR, &YgooSioSreadYsub_read},
  {"$string-escape-chars", CVAR, &YgooSioSreadYDstring_escape_chars},
  {"sub-read-vertical", CVAR, &YgooSioSreadYsub_read_vertical},
  {"make-immutable!", CVAR, &YgooSioSreadYmake_immutableX},
  {"sub-read-brackets", CVAR, &YgooSioSreadYsub_read_brackets},
  {"read-from-string", CVAR, &YgooSioSreadYread_from_string},
  {"sub-read-list", CVAR, &YgooSioSreadYsub_read_list},
  {"parse-token", CVAR, &YgooSioSreadYparse_token},
  {"sub-read-carefully", CVAR, &YgooSioSreadYsub_read_carefully},
  {"set-standard-syntax!", CVAR, &YgooSioSreadYset_standard_syntaxX},
  {"read-delimited-list", CVAR, &YgooSioSreadYread_delimited_list},
  {"token-message-setter", CVAR, &YgooSioSreadYtoken_message_setter},
  {"sub-read-list-eof-error", CVAR, &YgooSioSreadYsub_read_list_eof_error},
  {"---main-0---", PVAR, NULL},
  {"flush-whitespace", CVAR, &YgooSioSreadYflush_whitespace},
  {"$strange-symbol-names", CVAR, &YgooSioSreadYDstrange_symbol_names},
  {"gobble-nested-comment", CVAR, &YgooSioSreadYgobble_nested_comment},
  {"reverse-list->string", CVAR, &YgooSioSreadYreverse_list_Gstring},
  {"$close-bracket", CVAR, &YgooSioSreadYDclose_bracket},
  {"sub-read-seq", CVAR, &YgooSioSreadYsub_read_seq},
  {"$vert-proxy", CVAR, &YgooSioSreadYDvert_proxy},
  {"token-message", CVAR, &YgooSioSreadYtoken_message},
  {"sub-read-token", CVAR, &YgooSioSreadYsub_read_token},
  {"gobble-line", CVAR, &YgooSioSreadYgobble_line},
  {"reading-error", CVAR, &YgooSioSreadYreading_error},
  {"$vert-sym", CVAR, &YgooSioSreadYDvert_sym},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"get-standard-read-macro", NULL},
  {"read", NULL},
  {"set-standard-read-macro!", NULL},
  {"read-delimited-list", NULL},
  {"read-from-string", NULL},
  {"$char-long-names", NULL},
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
