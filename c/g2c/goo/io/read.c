/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/io/read");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/io/read */

EXT(Yclone,"goo/boot","clone");
DEF(YgooSioSreadYsub_read_constituent,"goo/io/read","sub-read-constituent");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
DEF(YgooSioSreadYDstring_escape_chars,"goo/io/read","$string-escape-chars");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YgooSioSreadYsub_read_list,"goo/io/read","sub-read-list");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooSmathY_,"goo/math","-");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
DEF(YgooSioSreadYTsharp_macrosT,"goo/io/read","*sharp-macros*");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YgooSioSreadYwarn,"goo/io/read","warn");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
DEF(YgooSioSreadYsub_read,"goo/io/read","sub-read");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
DEF(YgooSioSreadYsub_read_list_eof_error,"goo/io/read","sub-read-list-eof-error");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(YgooSioSreadYdefine_sharp_macro,"goo/io/read","define-sharp-macro");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YgooSioSreadYsub_read_seq,"goo/io/read","sub-read-seq");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLlocG,"goo/boot","<loc>");
DEF(YgooSioSreadYsub_read_carefully,"goo/io/read","sub-read-carefully");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yfun_sig,"goo/boot","fun-sig");
DEF(YgooSioSreadYset_standard_syntaxX,"goo/io/read","set-standard-syntax!");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(YgooSioSreadYsub_read_vertical,"goo/io/read","sub-read-vertical");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfind_setter,"goo/boot","find-setter");
DEF(YgooSioSreadYDclose_paren,"goo/io/read","$close-paren");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ysyntax_error,"goo/boot","syntax-error");
DEF(YgooSioSreadYtoken_message_setter,"goo/io/read","token-message-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YgooSioSreadYgobble_nested_comment,"goo/io/read","gobble-nested-comment");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
DEF(YgooSioSreadYmake_immutableX,"goo/io/read","make-immutable!");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
DEF(YgooSioSreadYTread_terminatingQ_vectorT,"goo/io/read","*read-terminating?-vector*");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Yfind_getter,"goo/boot","find-getter");
DEF(YgooSioSreadYparse_token,"goo/io/read","parse-token");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYLL,"goo/math","<<");
DEF(YgooSioSreadYflush_whitespace,"goo/io/read","flush-whitespace");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmathYK,"goo/math","|");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ynul,"goo/boot","nul");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
DEF(YgooSioSreadYTread_dispatch_vectorT,"goo/io/read","*read-dispatch-vector*");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYas_log,"goo/math","as-log");
DEF(YgooSioSreadYgobble_line,"goo/io/read","gobble-line");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YgooSioSreadYreading_error,"goo/io/read","reading-error");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YgooSioSreadYreader_tokenQ,"goo/io/read","reader-token?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLlogG,"goo/boot","<log>");
DEF(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YtT,"goo/boot","t*");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
DEF(YgooSioSreadYsub_read_curlies,"goo/io/read","sub-read-curlies");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
DEF(YgooSioSreadYtoken_message,"goo/io/read","token-message");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(YgooSioSreadYDclose_bracket,"goo/io/read","$close-bracket");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
DEF(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooSioSportYport_handle_setter,"goo/io/port","port-handle-setter");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YgooSioSreadYDclose_curly,"goo/io/read","$close-curly");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YOlst,"goo/boot","@lst");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
DEF(YgooSioSreadYreverse_list_Gstring,"goo/io/read","reverse-list->string");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
DEF(YgooSioSreadYDvert_proxy,"goo/io/read","$vert-proxy");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_parents,"goo/boot","class-parents");
DEF(YgooSioSreadYpreferred_case,"goo/io/read","preferred-case");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
DEF(YgooSioSreadYsub_read_token,"goo/io/read","sub-read-token");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
DEF(YgooSioSreadYread_string_literal,"goo/io/read","read-string-literal");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Ylst,"goo/boot","lst");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YgooSioSreadYmake_reader_token,"goo/io/read","make-reader-token");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooSconditionsYread,"goo/conditions","read");
DEF(YgooSioSreadYsub_read_brackets,"goo/io/read","sub-read-brackets");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
DEF(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yfun_mets,"goo/boot","fun-mets");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
DEF(YgooSioSreadYDvert_sym,"goo/io/read","$vert-sym");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSmathYposQ,"goo/math","pos?");
DEF(YgooSioSreadYDstrange_symbol_names,"goo/io/read","$strange-symbol-names");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YgooSioSreadYLreader_tokenG,"goo/io/read","<reader-token>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_78);
DEFLIT(lit_72);
DEFLIT(lit_121);
DEFLIT(lit_111);
DEFLIT(lit_25);
DEFLIT(lit_31);
DEFLIT(lit_3);
DEFLIT(lit_71);
DEFLIT(lit_37);
DEFLIT(lit_7);
DEFLIT(lit_57);
DEFLIT(lit_79);
DEFLIT(lit_16);
DEFLIT(lit_99);
DEFLIT(lit_28);
DEFLIT(lit_94);
DEFLIT(lit_20);
DEFLIT(lit_58);
DEFLIT(lit_48);
DEFLIT(lit_126);
DEFLIT(lit_11);
DEFLIT(lit_19);
DEFLIT(lit_1);
DEFLIT(lit_50);
DEFLIT(lit_55);
DEFLIT(lit_59);
DEFLIT(lit_21);
DEFLIT(lit_35);
DEFLIT(lit_118);
DEFLIT(lit_98);
DEFLIT(lit_113);
DEFLIT(lit_103);
DEFLIT(lit_88);
DEFLIT(lit_109);
DEFLIT(lit_43);
DEFLIT(lit_81);
DEFLIT(lit_56);
DEFLIT(lit_12);
DEFLIT(lit_83);
DEFLIT(lit_107);
DEFLIT(lit_123);
DEFLIT(lit_45);
DEFLIT(lit_18);
DEFLIT(lit_85);
DEFLIT(lit_86);
DEFLIT(lit_102);
DEFLIT(lit_66);
DEFLIT(lit_27);
DEFLIT(lit_108);
DEFLIT(lit_92);
DEFLIT(lit_119);
DEFLIT(lit_115);
DEFLIT(lit_61);
DEFLIT(lit_14);
DEFLIT(lit_105);
DEFLIT(lit_106);
DEFLIT(lit_4);
DEFLIT(lit_9);
DEFLIT(lit_2);
DEFLIT(lit_33);
DEFLIT(lit_34);
DEFLIT(lit_38);
DEFLIT(lit_97);
DEFLIT(lit_70);
DEFLIT(lit_69);
DEFLIT(lit_117);
DEFLIT(lit_96);
DEFLIT(lit_74);
DEFLIT(lit_76);
DEFLIT(lit_52);
DEFLIT(lit_80);
DEFLIT(lit_23);
DEFLIT(lit_68);
DEFLIT(lit_15);
DEFLIT(lit_39);
DEFLIT(lit_100);
DEFLIT(lit_91);
DEFLIT(lit_62);
DEFLIT(lit_101);
DEFLIT(lit_116);
DEFLIT(lit_65);
DEFLIT(lit_54);
DEFLIT(lit_89);
DEFLIT(lit_64);
DEFLIT(lit_95);
DEFLIT(lit_0);
DEFLIT(lit_82);
DEFLIT(lit_51);
DEFLIT(lit_49);
DEFLIT(lit_32);
DEFLIT(lit_73);
DEFLIT(lit_63);
DEFLIT(lit_24);
DEFLIT(lit_124);
DEFLIT(lit_84);
DEFLIT(lit_29);
DEFLIT(lit_114);
DEFLIT(lit_87);
DEFLIT(lit_44);
DEFLIT(lit_30);
DEFLIT(lit_112);
DEFLIT(lit_110);
DEFLIT(lit_10);
DEFLIT(lit_6);
DEFLIT(lit_90);
DEFLIT(lit_77);
DEFLIT(lit_5);
DEFLIT(lit_104);
DEFLIT(lit_8);
DEFLIT(lit_42);
DEFLIT(lit_122);
DEFLIT(lit_41);
DEFLIT(lit_125);
DEFLIT(lit_93);
DEFLIT(lit_46);
DEFLIT(lit_47);
DEFLIT(lit_22);
DEFLIT(lit_13);
DEFLIT(lit_120);
DEFLIT(lit_53);
DEFLIT(lit_26);
DEFLIT(lit_40);
DEFLIT(lit_60);
DEFLIT(lit_17);
DEFLIT(lit_36);
DEFLIT(lit_75);
DEFLIT(lit_67);

/* FUNCTIONS: */

LOCFOR(fun_read_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_read_from_string_3);
LOCFOR(fun_sub_read_carefully_4);
LOCFOR(fun_token_message_5);
LOCFOR(fun_token_message_setter_6);
LOCFOR(fun_make_reader_token_7);
LOCFOR(fun_reader_tokenQ_8);
LOCFOR(fun_sub_read_9);
LOCFOR(fun_10);
LOCFOR(fun_set_standard_syntaxX_11);
LOCFOR(fun_12);
LOCFOR(fun_13);
FUNFOR(YgooSioSreadYflush_whitespace);
FUNFOR(YgooSioSreadYread_delimited_list);
FUNFOR(YgooSioSreadYsub_read_constituent);
LOCFOR(fun_17);
LOCFOR(fun_set_standard_read_macroX_18);
LOCFOR(fun_get_standard_read_macro_19);
LOCFOR(fun_sub_read_vertical_20);
FUNFOR(YgooSioSreadYsub_read_list_eof_error);
LOCFOR(fun_read_next_22);
LOCFOR(fun_sub_read_list_23);
LOCFOR(fun_sub_read_seq_24);
LOCFOR(fun_sub_read_brackets_25);
LOCFOR(fun_sub_read_curlies_26);
LOCFOR(fun_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
FUNFOR(YgooSioSreadYread_string_literal);
LOCFOR(fun_34);
LOCFOR(fun_gobble_line_35);
LOCFOR(fun_define_sharp_macro_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_40);
FUNFOR(YgooSioSreadYgobble_nested_comment);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_46);
LOCFOR(fun_47);
LOCFOR(fun_sub_read_token_48);
LOCFOR(fun_49);
LOCFOR(fun_parse_token_50);
LOCFOR(fun_reading_error_51);
LOCFOR(fun_warn_52);
LOCFOR(fun_reverse_list_Gstring_53);
LOCFOR(fun_make_immutableX_54);
extern P YgooSioSreadY___main_0___ ();
extern P YgooSioSreadY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_read_0) {
  P port_;
  P formF2437;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(port_, 0);
  for (;;) {
  loop148:
    T4 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
    formF2437 = T4;
    T7 = CALL1(1,VARREF(YgooSioSreadYreader_tokenQ),formF2437);
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T5 = formF2437;
    } else {
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),formF2437,VARREF(YgooSioSreadYDclose_paren));
      if (T9 != YPfalse) {
        T10 = CALL1(1,VARREF(YgooSioSreadYwarn),LITREF(lit_2));
        T8 = T10;
      } else {
        goto loop148;
        T8 = T11;
      }
      T5 = T8;
    }
    T3 = T5;
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_1) {
  P T0,T1,T2;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_in_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(YgooSconditionsYread),T2);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_2) {
  P tmpF2438;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  T1 = BOXVAL(FREEREF(0));
  tmpF2438 = T1;
  if (tmpF2438 != YPfalse) {
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

FUNCODEDEF(fun_read_from_string_3) {
  P x_;
  P portF2439;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  portF2439 = YPfalse;
  portF2439 = BOXFAB(portF2439);
  T3 = FUNFAB(fun_1,2,portF2439,x_);
  T4 = FUNFAB(fun_2,1,portF2439);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_carefully_4) {
  P port_;
  P formF2440;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(port_, 0);
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
  formF2440 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF2440);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_8));
    T2 = T4;
  } else {
    T6 = CALL1(1,VARREF(YgooSioSreadYreader_tokenQ),formF2440);
    if (T6 != YPfalse) {
      T8 = CALL1(1,VARREF(Ytail),formF2440);
      T7 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,T8);
      T5 = T7;
    } else {
      T5 = formF2440;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_token_message_5) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSioSreadYtoken_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_token_message_setter_6) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSioSreadYtoken_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_make_reader_token_7) {
  P message_;
  P T0;
LINK_STACK();
  ARG(message_, 0);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSreadYLreader_tokenG),VARREF(YgooSioSreadYtoken_message),message_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reader_tokenQ_8) {
  P form_;
  P T0;
LINK_STACK();
  ARG(form_, 0);
  T0 = CALL2(1,VARREF(YisaQ),form_,VARREF(YgooSioSreadYLreader_tokenG));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sub_read_9) {
  P port_;
  P cF2441;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(port_, 0);
  T1 = CALL1(1,VARREF(YgooSioSportYget),port_);
  cF2441 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2441);
  if (T3 != YPfalse) {
    T2 = cF2441;
  } else {
    T6 = CALL1(1,VARREF(YgooSmathYchar_Gascii),cF2441);
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_dispatch_vectorT),T6);
    T4 = CALL2(1,T5,cF2441,port_);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_10) {
  P c_,port_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T0 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_24),c_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_set_standard_syntaxX_11) {
  P char_,terminatingQ_,reader_;
  P T0,T1,T2;
LINK_STACK();
  ARG(char_, 0);
  ARG(terminatingQ_, 1);
  ARG(reader_, 2);
  T0 = CALL1(1,VARREF(YgooSmathYchar_Gascii),char_);
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),reader_,VARREF(YgooSioSreadYTread_dispatch_vectorT),T0);
  T2 = CALL1(1,VARREF(YgooSmathYchar_Gascii),char_);
  T1 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),terminatingQ_,VARREF(YgooSioSreadYTread_terminatingQ_vectorT),T2);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_12) {
  P c_,port_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T0 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_13) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),FREEREF(0),VARREF(YgooSioSreadYTread_dispatch_vectorT),c_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYflush_whitespace) {
  P port_;
  P cF2442;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(port_, 0);
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF2442 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYchar_Gascii),cF2442);
  T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),VARREF(YgooScolsSstrYascii_whitespaces),T4);
  if (T3 != YPfalse) {
    CALL1(1,VARREF(YgooSioSportYget),port_);
    T5 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
    T2 = T5;
  } else {
    T2 = cF2442;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYread_delimited_list) {
  P endchar_,port_;
  P UF2445;
  P cF2444;
  P retlistF2443;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(endchar_, 0);
  ARG(port_, 1);
  retlistF2443 = VARREF(Ynil);
  retlistF2443 = BOXFAB(retlistF2443);
  T3 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
  cF2444 = T3;
  for (;;) {
    P a149_0;
  loop149:
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),cF2444,endchar_);
    if (T6 != YPfalse) {
      CALL1(1,VARREF(YgooSioSportYget),port_);
      T8 = BOXVAL(retlistF2443);
      T7 = CALL1(1,VARREF(YgooScolsSseqYrev),T8);
      T5 = T7;
    } else {
      T9 = BOXVAL(retlistF2443);
      UF2445 = T9;
      T12 = CALL1(1,VARREF(YgooSconditionsYread),port_);
      T11 = CALL2(1,VARREF(YgooSmacrosYpair),T12,UF2445);
      T10 = BOXVAL(retlistF2443) = T11;
      T14 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
      a149_0 = T14;
      cF2444 = a149_0;
      goto loop149;
      T5 = T13;
    }
    break;
  }
  T4 = T5;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYsub_read_constituent) {
  P c_,port_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T1 = CALL2(1,VARREF(YgooSioSreadYsub_read_token),c_,port_);
  T0 = CALL2(1,VARREF(YgooSioSreadYparse_token),T1,port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL3(1,VARREF(YgooSioSreadYset_standard_syntaxX),c_,YPfalse,VARREF(YgooSioSreadYsub_read_constituent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_set_standard_read_macroX_18) {
  P char_,terminatingQ_,proc_;
  P T0;
LINK_STACK();
  ARG(char_, 0);
  ARG(terminatingQ_, 1);
  ARG(proc_, 2);
  T0 = CALL3(1,VARREF(YgooSioSreadYset_standard_syntaxX),char_,terminatingQ_,proc_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_get_standard_read_macro_19) {
  P char_;
  P T0,T1;
LINK_STACK();
  ARG(char_, 0);
  T1 = CALL1(1,VARREF(YgooSmathYchar_Gascii),char_);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_dispatch_vectorT),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_vertical_20) {
  P c_,port_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T0 = CALL2(1,VARREF(YgooSioSreadYparse_token),LITREF(lit_44),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYsub_read_list_eof_error) {
  P port_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  T0 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_49));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_read_next_22) {
  P c_,prev_,line_,form_;
  P nextF2447;
  P prevF2446;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(c_, 0);
  ARG(prev_, 1);
  ARG(line_, 2);
  ARG(form_, 3);
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),prev_,VARREF(YgooSioSreadYDvert_proxy));
  if (T2 != YPfalse) {
    T1 = VARREF(YgooSioSreadYDvert_sym);
  } else {
    T1 = prev_;
  }
  prevF2446 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),form_);
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSioSreadYsub_read_list_eof_error),FREEREF(0));
    T3 = T5;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),form_,VARREF(YgooSioSreadYDclose_paren));
    if (T7 != YPfalse) {
      T8 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,prevF2446);
      T6 = T8;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),form_,VARREF(YgooSioSreadYDvert_sym));
      if (T10 != YPfalse) {
        T12 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),FREEREF(0));
        nextF2447 = T12;
        T15 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,nextF2447);
        T14 = CALL3(1,VARREF(YgooScolsSlstYline_pair),prevF2446,T15,line_);
        T16 = CALL2(1,VARREF(YgooSioSreadYsub_read_list),c_,FREEREF(0));
        T13 = CALL3(1,VARREF(YgooScolsSlstYline_pair),T14,T16,line_);
        T11 = T13;
        T9 = T11;
      } else {
        if (YPtrue != YPfalse) {
          T20 = CALL1(1,VARREF(YgooSioSportYport_line),FREEREF(0));
          T21 = CALL1(1,VARREF(YgooSioSreadYsub_read),FREEREF(0));
          T19 = CALL4(1,FREEREF(1),c_,form_,T20,T21);
          T18 = CALL3(1,VARREF(YgooScolsSlstYline_pair),prevF2446,T19,line_);
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

FUNCODEDEF(fun_sub_read_list_23) {
  P c_,p_;
  P read_nextF2450;
  P formF2449;
  P lineF2448;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(c_, 0);
  ARG(p_, 1);
  T1 = CALL1(1,VARREF(YgooSioSportYport_line),p_);
  lineF2448 = T1;
  T3 = CALL1(1,VARREF(YgooSioSreadYsub_read),p_);
  formF2449 = T3;
  T5 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF2449);
  if (T5 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSioSreadYsub_read_list_eof_error),p_);
    T4 = T6;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),formF2449,VARREF(YgooSioSreadYDclose_paren));
    if (T8 != YPfalse) {
      T7 = Ynil;
    } else {
      if (YPtrue != YPfalse) {
        T11 = FUNSHELL(1,fun_read_next_22,2);
        read_nextF2450 = T11;
        FUNINIT(read_nextF2450, 2,p_,read_nextF2450);
        T13 = CALL1(1,VARREF(YgooSioSreadYsub_read),p_);
        T12 = CALL4(1,read_nextF2450,c_,formF2449,lineF2448,T13);
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

FUNCODEDEF(fun_sub_read_seq_24) {
  P c_,e_,port_;
  P formF2451;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(c_, 0);
  ARG(e_, 1);
  ARG(port_, 2);
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
  formF2451 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF2451);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_56));
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),formF2451,e_);
    if (T6 != YPfalse) {
      T5 = Ynil;
    } else {
      T8 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,e_,port_);
      T7 = CALL2(1,VARREF(YgooSmacrosYpair),formF2451,T8);
      T5 = T7;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_brackets_25) {
  P c_,port_;
  P x_1396F2454;
  P x_1395F2453;
  P formF2452;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T1 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,VARREF(YgooSioSreadYDclose_bracket),port_);
  formF2452 = T1;
  T3 = CALL1(1,VARREF(YgooStypesYlen),formF2452);
  x_1395F2453 = T3;
  x_1396F2454 = VARREF(YgooSmacrosYEE);
  T6 = CALL2(1,x_1396F2454,x_1395F2453,YPint((P)2));
  if (T6 != YPfalse) {
    T8 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
    T10 = CALL1(1,VARREF(YgooSmacrosY1st),formF2452);
    T9 = CALL1(1,VARREF(Ylst),T10);
    T12 = CALL1(1,VARREF(YgooSmacrosY2nd),formF2452);
    T11 = CALL1(1,VARREF(Ylst),T12);
    T7 = CALL4(1,VARREF(YgooSmacrosYcat),T8,T9,T11,LITREF(lit_60));
    T5 = T7;
  } else {
    T14 = CALL2(1,x_1396F2454,x_1395F2453,YPint((P)3));
    if (T14 != YPfalse) {
      T17 = CALL1(1,VARREF(YgooScolsSseqY3rd),formF2452);
      T16 = CALL2(1,VARREF(YgooSmacrosYEE),T17,LITREF(lit_61));
      if (T16 != YPfalse) {
        T19 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
        T21 = CALL1(1,VARREF(YgooSmacrosY1st),formF2452);
        T20 = CALL1(1,VARREF(Ylst),T21);
        T23 = CALL1(1,VARREF(YgooSmacrosY2nd),formF2452);
        T22 = CALL1(1,VARREF(Ylst),T23);
        T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T22,LITREF(lit_60));
        T15 = T18;
      } else {
        T25 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
        T27 = CALL1(1,VARREF(YgooSmacrosY1st),formF2452);
        T26 = CALL1(1,VARREF(Ylst),T27);
        T29 = CALL1(1,VARREF(YgooSmacrosY2nd),formF2452);
        T28 = CALL1(1,VARREF(Ylst),T29);
        T31 = CALL1(1,VARREF(YgooScolsSseqY3rd),formF2452);
        T30 = CALL1(1,VARREF(Ylst),T31);
        T24 = CALL5(1,VARREF(YgooSmacrosYcat),T25,T26,T28,T30,LITREF(lit_60));
        T15 = T24;
      }
      T13 = T15;
    } else {
      T32 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_64));
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

FUNCODEDEF(fun_sub_read_curlies_26) {
  P c_,port_;
  P dot_indexF2456;
  P formF2455;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T1 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,VARREF(YgooSioSreadYDclose_curly),port_);
  formF2455 = T1;
  T3 = CALL2(1,VARREF(YgooScolsSseqYpos),formF2455,LITREF(lit_67));
  dot_indexF2456 = T3;
  if (dot_indexF2456 != YPfalse) {
    T6 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
    T8 = CALL3(1,VARREF(YgooScolsSseqYsub),formF2455,YPint((P)0),dot_indexF2456);
    T7 = CALL1(1,VARREF(Ylst),T8);
    T10 = CALL2(1,VARREF(YgooSmathYA),dot_indexF2456,YPint((P)1));
    T9 = CALL2(1,VARREF(YgooScolsSseqYsubT),formF2455,T10);
    T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T9,LITREF(lit_60));
    T4 = T5;
  } else {
    T12 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
    T13 = CALL1(1,VARREF(Ylst),Ynil);
    T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,formF2455,LITREF(lit_60));
    T4 = T11;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_27) {
  P c_,port_;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDclose_paren));
}

FUNCODEDEF(fun_28) {
  P c_,port_;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDclose_curly));
}

FUNCODEDEF(fun_29) {
  P c_,port_;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDclose_bracket));
}

FUNCODEDEF(fun_30) {
  P c_,port_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T0 = CALL2(1,VARREF(Ylst),LITREF(lit_73),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_31) {
  P c_,port_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T0 = CALL2(1,VARREF(Ylst),LITREF(lit_75),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P c_,port_;
  P keywordF2458;
  P nextF2457;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  nextF2457 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),nextF2457);
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_77));
    T3 = T5;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYE),nextF2457,YPchr((P)64));
    if (T7 != YPfalse) {
      CALL1(1,VARREF(YgooSioSportYget),port_);
      T6 = LITREF(lit_78);
    } else {
      T6 = LITREF(lit_79);
    }
    T3 = T6;
  }
  keywordF2458 = T3;
  T9 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T8 = CALL2(1,VARREF(Ylst),keywordF2458,T9);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYread_string_literal) {
  P c_,port_;
  P ecF2464;
  P tmpF2463;
  P cF2462;
  P cF2461;
  P iF2460;
  P lF2459;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  lF2459 = Ynil;
  iF2460 = YPint((P)0);
  for (;;) {
    P a150_0,a150_1;
  loop150:
    T4 = CALL1(1,VARREF(YgooSioSportYget),port_);
    cF2461 = T4;
    T6 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2461);
    if (T6 != YPfalse) {
      T7 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_82));
      T5 = T7;
    } else {
      T9 = CALL2(1,VARREF(YgooSmathYE),cF2461,YPchr((P)92));
      if (T9 != YPfalse) {
        T11 = CALL1(1,VARREF(YgooSioSportYget),port_);
        cF2462 = T11;
        T13 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2462);
        if (T13 != YPfalse) {
          T14 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_83));
          T12 = T14;
        } else {
          T17 = CALL2(1,VARREF(YgooSmathYE),cF2462,YPchr((P)92));
          tmpF2463 = T17;
          if (tmpF2463 != YPfalse) {
            T18 = tmpF2463;
          } else {
            T19 = CALL2(1,VARREF(YgooSmathYE),cF2462,YPchr((P)34));
            T18 = T19;
          }
          T16 = T18;
          if (T16 != YPfalse) {
            T21 = CALL2(1,VARREF(YgooSmacrosYpair),cF2462,lF2459);
            T22 = CALL2(1,VARREF(YgooSmathYA),iF2460,YPint((P)1));
            a150_0 = T21;
            a150_1 = T22;
            lF2459 = a150_0;
            iF2460 = a150_1;
            goto loop150;
            T15 = T20;
          } else {
            T25 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF2462);
            T24 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYDstring_escape_chars),T25);
            ecF2464 = T24;
            if (ecF2464 != YPfalse) {
              T28 = CALL2(1,VARREF(YgooSmacrosYpair),ecF2464,lF2459);
              T29 = CALL2(1,VARREF(YgooSmathYA),iF2460,YPint((P)1));
              a150_0 = T28;
              a150_1 = T29;
              lF2459 = a150_0;
              iF2460 = a150_1;
              goto loop150;
              T26 = T27;
            } else {
              T30 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_84),cF2462);
              T26 = T30;
            }
            T23 = T26;
            T15 = T23;
          }
          T12 = T15;
        }
        T10 = T12;
        T8 = T10;
      } else {
        T32 = CALL2(1,VARREF(YgooSmathYE),cF2461,YPchr((P)34));
        if (T32 != YPfalse) {
          T33 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),lF2459,iF2460);
          T31 = T33;
        } else {
          T35 = CALL2(1,VARREF(YgooSmacrosYpair),cF2461,lF2459);
          T36 = CALL2(1,VARREF(YgooSmathYA),iF2460,YPint((P)1));
          a150_0 = T35;
          a150_1 = T36;
          lF2459 = a150_0;
          iF2460 = a150_1;
          goto loop150;
          T31 = T34;
        }
        T8 = T31;
      }
      T5 = T8;
    }
    T3 = T5;
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  P c_,port_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSreadYgobble_line),port_);
  T0 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gobble_line_35) {
  P port_;
  P cF2465;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(port_, 0);
  for (;;) {
  loop151:
    T4 = CALL1(1,VARREF(YgooSioSportYget),port_);
    cF2465 = T4;
    T6 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2465);
    if (T6 != YPfalse) {
      T5 = cF2465;
    } else {
      T8 = CALL2(1,VARREF(YgooSmathYE),cF2465,YPchr((P)10));
      if (T8 != YPfalse) {
        T7 = YPfalse;
      } else {
        goto loop151;
        T7 = T9;
      }
      T5 = T7;
    }
    T3 = T5;
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_define_sharp_macro_36) {
  P c_,proc_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  ARG(proc_, 1);
  T2 = CALL2(1,VARREF(Ylst),c_,proc_);
  T1 = CALL2(1,VARREF(YgooSmacrosYpair),T2,VARREF(YgooSioSreadYTsharp_macrosT));
  T0 = VARSET(YgooSioSreadYTsharp_macrosT,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  P c_,port_;
  P probeF2468;
  P cF2467;
  P cF2466;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF2466 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2466);
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_91));
    T3 = T5;
  } else {
    T6 = CALL1(1,VARREF(YgooSmathYto_lower),cF2466);
    T3 = T6;
  }
  cF2467 = T3;
  T8 = CALL2(1,VARREF(YgooScolsSlstYassq),cF2467,VARREF(YgooSioSreadYTsharp_macrosT));
  probeF2468 = T8;
  if (probeF2468 != YPfalse) {
    T12 = CALL1(1,VARREF(Ytail),probeF2468);
    T11 = CALL1(1,VARREF(Yhead),T12);
    T10 = CALL2(1,T11,cF2467,port_);
    T9 = T10;
  } else {
    T13 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_92),cF2467);
    T9 = T13;
  }
  T7 = T9;
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_38) {
  P c_,port_;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_39) {
  P c_,port_;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_40) {
  P c_,port_;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDvert_proxy));
}

FUNCODEDEF(YgooSioSreadYgobble_nested_comment) {
  P port_;
  P x_1398F2472;
  P x_1397F2471;
  P cF2470;
  P found_slashQF2469;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(port_, 0);
  found_slashQF2469 = YPfalse;
  for (;;) {
    P a152_0;
  loop152:
    T4 = CALL1(1,VARREF(YgooSioSportYget),port_);
    cF2470 = T4;
    T6 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2470);
    if (T6 != YPfalse) {
      T5 = cF2470;
    } else {
      x_1397F2471 = cF2470;
      x_1398F2472 = VARREF(YgooSmacrosYEE);
      T10 = CALL2(1,x_1398F2472,x_1397F2471,YPchr((P)47));
      if (T10 != YPfalse) {
        a152_0 = YPtrue;
        found_slashQF2469 = a152_0;
        goto loop152;
        T9 = T11;
      } else {
        T13 = CALL2(1,x_1398F2472,x_1397F2471,YPchr((P)35));
        if (T13 != YPfalse) {
          if (found_slashQF2469 != YPfalse) {
            T14 = YPfalse;
          } else {
            a152_0 = YPfalse;
            found_slashQF2469 = a152_0;
            goto loop152;
            T14 = T15;
          }
          T12 = T14;
        } else {
          a152_0 = YPfalse;
          found_slashQF2469 = a152_0;
          goto loop152;
          T12 = T16;
        }
        T9 = T12;
      }
      T8 = T9;
      T7 = T8;
      T5 = T7;
    }
    T3 = T5;
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P c_,port_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSreadYgobble_nested_comment),port_);
  T0 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  P c_,port_;
  P tempF2475;
  P nameF2474;
  P cF2473;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF2473 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2473);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_101));
    T2 = T4;
  } else {
    T6 = CALL1(1,VARREF(YgooSmathYalphaQ),cF2473);
    if (T6 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
      nameF2474 = T8;
      T12 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF2474);
      T11 = CALL1(1,VARREF(YgooStypesYlen),T12);
      T10 = CALL2(1,VARREF(YgooSmathYE),T11,YPint((P)1));
      if (T10 != YPfalse) {
        T9 = cF2473;
      } else {
        T14 = CALL2(1,VARREF(YgooScolsSlstYassq),nameF2474,VARREF(YgooSioSreadYDchar_long_names));
        tempF2475 = T14;
        if (tempF2475 != YPfalse) {
          T17 = CALL1(1,VARREF(Ytail),tempF2475);
          T16 = CALL1(1,VARREF(Yhead),T17);
          T15 = T16;
        } else {
          T18 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_102),nameF2474);
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

FUNCODEDEF(fun_44) {
  P c_,port_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T1 = CALL2(1,VARREF(YgooSioSreadYsub_read_list),c_,port_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  P c_,port_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T1 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,VARREF(YgooSioSreadYDclose_bracket),port_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YgooScolsSvecYLvecG),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_46) {
  P c_,port_;
  P tmpF2477;
  P stringF2476;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T1 = CALL2(1,VARREF(YgooSioSreadYsub_read_token),YPchr((P)35),port_);
  stringF2476 = T1;
  T3 = CALL1(1,VARREF(YgooScolsSstrYstr_to_num),stringF2476);
  tmpF2477 = T3;
  if (tmpF2477 != YPfalse) {
    T4 = tmpF2477;
  } else {
    T5 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_106),stringF2476);
    T4 = T5;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),c_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_token_48) {
  P c_,port_;
  P tmpF2481;
  P cF2480;
  P nF2479;
  P lF2478;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T3 = CALL1(1,VARREF(YgooSioSreadYpreferred_case),c_);
  T2 = CALL1(1,VARREF(Ylst),T3);
  lF2478 = T2;
  nF2479 = YPint((P)1);
  for (;;) {
    P a153_0,a153_1;
  loop153:
    T6 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
    cF2480 = T6;
    T9 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2480);
    tmpF2481 = T9;
    if (tmpF2481 != YPfalse) {
      T10 = tmpF2481;
    } else {
      T12 = CALL1(1,VARREF(YgooSmathYchar_Gascii),cF2480);
      T11 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_terminatingQ_vectorT),T12);
      T10 = T11;
    }
    T8 = T10;
    if (T8 != YPfalse) {
      T13 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),lF2478,nF2479);
      T7 = T13;
    } else {
      T17 = CALL1(1,VARREF(YgooSioSportYget),port_);
      T16 = CALL1(1,VARREF(YgooSioSreadYpreferred_case),T17);
      T15 = CALL2(1,VARREF(YgooSmacrosYpair),T16,lF2478);
      T18 = CALL2(1,VARREF(YgooSmathYA),nF2479,YPint((P)1));
      a153_0 = T15;
      a153_1 = T18;
      lF2478 = a153_0;
      nF2479 = a153_1;
      goto loop153;
      T7 = T14;
    }
    T5 = T7;
    break;
  }
  T4 = T5;
  T1 = T4;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmathYE),FREEREF(0),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_parse_token_50) {
  P string_,port_;
  P maybe_numberF2486;
  P tmpF2485;
  P tmpF2484;
  P tmpF2483;
  P cF2482;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(string_, 0);
  ARG(port_, 1);
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),string_,YPint((P)0));
  cF2482 = T2;
  T4 = CALL1(1,VARREF(YgooSmathYdigitQ),cF2482);
  tmpF2483 = T4;
  if (tmpF2483 != YPfalse) {
    T5 = tmpF2483;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYE),cF2482,YPchr((P)43));
    tmpF2484 = T7;
    if (tmpF2484 != YPfalse) {
      T8 = tmpF2484;
    } else {
      T10 = CALL2(1,VARREF(YgooSmathYE),cF2482,YPchr((P)45));
      tmpF2485 = T10;
      if (tmpF2485 != YPfalse) {
        T11 = tmpF2485;
      } else {
        T12 = CALL2(1,VARREF(YgooSmathYE),cF2482,YPchr((P)46));
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
    maybe_numberF2486 = T14;
    if (maybe_numberF2486 != YPfalse) {
      T15 = maybe_numberF2486;
    } else {
      T18 = FUNFAB(fun_49,1,string_);
      T17 = CALL2(1,VARREF(YgooStypesYanyQ),T18,VARREF(YgooSioSreadYDstrange_symbol_names));
      if (T17 != YPfalse) {
        T20 = CALL1(1,VARREF(YgooSioSreadYmake_immutableX),string_);
        T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T20);
        T16 = T19;
      } else {
        T22 = CALL2(1,VARREF(YgooSmathYE),string_,LITREF(lit_114));
        if (T22 != YPfalse) {
          T24 = CALL1(1,VARREF(YgooSioSreadYmake_immutableX),string_);
          T23 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T24);
          T21 = T23;
        } else {
          T25 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_115),string_);
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

FUNCODEDEF(fun_reading_error_51) {
  P port_,message_,irritants_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(irritants_, 2);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),message_,LITREF(lit_120));
  T3 = CALL1(1,VARREF(Ylst),port_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),irritants_,T3);
  T0 = CALL2(1,VARREF(Yerror),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_warn_52) {
  P string_,irritants_and_port_;
LINK_STACK();
  ARG(string_, 0);
  NARGS(irritants_and_port_, 1);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_reverse_list_Gstring_53) {
  P l_,n_;
  P T0,T1;
LINK_STACK();
  ARG(l_, 0);
  ARG(n_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),l_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_make_immutableX_54) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(x_);
}

P YgooSioSreadY___main_0___() {
  P vecF2489;
  P str10496F2488;
  P sub_read_whitespaceF2487;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142;
DEFCREGS();
  lit_0 = YPPsym((P)"read");
  lit_1 = YPPlist(1,YPPsym((P)"port"));
  lit_2 = YPsb((P)"discarding extraneous right parenthesis");
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_0 = YPmet(FUNCODEREF(fun_read_0),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(26));
  T2 = VARREF_OR(YgooSconditionsYread,YPfalse);
  T3 = fun_read_0;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YgooSconditionsYread,T1);
  lit_3 = YPPsym((P)"read-from-string");
  lit_4 = YPPlist(1,YPPsym((P)"x"));
  lit_5 = Ynil;
  T6 = YPsig(LITREF(lit_5),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T6,ENVNUL,PNUL,sloc(39));
  T5 = YPsig(LITREF(lit_5),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T5,ENVNUL,PNUL,sloc(39));
  T4 = YPsig(LITREF(lit_4),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_from_string_3 = YPmet(FUNCODEREF(fun_read_from_string_3),LITREF(lit_3),T4,ENVNUL,PNUL,sloc(38));
  T8 = VARREF_OR(YgooSioSreadYread_from_string,YPfalse);
  T9 = fun_read_from_string_3;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T9);
  VARSET(YgooSioSreadYread_from_string,T7);
  lit_6 = YPPsym((P)"sub-read-carefully");
  lit_7 = YPPlist(1,YPPsym((P)"port"));
  lit_8 = YPsb((P)"unexpected end of file");
  T10 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sub_read_carefully_4 = YPmet(FUNCODEREF(fun_sub_read_carefully_4),LITREF(lit_6),T10,ENVNUL,PNUL,sloc(41));
  T12 = VARREF_OR(YgooSioSreadYsub_read_carefully,YPfalse);
  T13 = fun_sub_read_carefully_4;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T13);
  VARSET(YgooSioSreadYsub_read_carefully,T11);
  lit_9 = YPPsym((P)"<reader-token>");
  T15 = (P)YPpair(VARREF(YLanyG),Ynil);
  T14 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_9),T15);
  VARSET(YgooSioSreadYLreader_tokenG,T14);
  lit_10 = YPPsym((P)"token-message");
  lit_11 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_11),YPPlist(1,VARREF(YgooSioSreadYLreader_tokenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_token_message_5 = YPmet(FUNCODEREF(fun_token_message_5),LITREF(lit_10),T16,ENVNUL,PNUL,sloc(51));
  T18 = VARREF_OR(YgooSioSreadYtoken_message,YPfalse);
  T19 = fun_token_message_5;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YgooSioSreadYtoken_message,T17);
  lit_12 = YPPsym((P)"token-message-setter");
  lit_13 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T20 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLstrG),VARREF(YgooSioSreadYLreader_tokenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_token_message_setter_6 = YPmet(FUNCODEREF(fun_token_message_setter_6),LITREF(lit_12),T20,ENVNUL,PNUL,sloc(51));
  T22 = VARREF_OR(YgooSioSreadYtoken_message_setter,YPfalse);
  T23 = fun_token_message_setter_6;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T23);
  VARSET(YgooSioSreadYtoken_message_setter,T21);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSioSreadYLreader_tokenG),VARREF(YgooSioSreadYtoken_message),VARREF(YgooSioSreadYtoken_message_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_14 = YPPsym((P)"make-reader-token");
  lit_15 = YPPlist(1,YPPsym((P)"message"));
  T24 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_reader_token_7 = YPmet(FUNCODEREF(fun_make_reader_token_7),LITREF(lit_14),T24,ENVNUL,PNUL,sloc(53));
  T26 = VARREF_OR(YgooSioSreadYmake_reader_token,YPfalse);
  T27 = fun_make_reader_token_7;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T27);
  VARSET(YgooSioSreadYmake_reader_token,T25);
  lit_16 = YPPsym((P)"reader-token?");
  lit_17 = YPPlist(1,YPPsym((P)"form"));
  T28 = YPsig(LITREF(lit_17),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_reader_tokenQ_8 = YPmet(FUNCODEREF(fun_reader_tokenQ_8),LITREF(lit_16),T28,ENVNUL,PNUL,sloc(56));
  T30 = VARREF_OR(YgooSioSreadYreader_tokenQ,YPfalse);
  T31 = fun_reader_tokenQ_8;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T31);
  VARSET(YgooSioSreadYreader_tokenQ,T29);
  lit_18 = YPsb((P)"unexpected right parenthesis");
  T32 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_18));
  VARSET(YgooSioSreadYDclose_paren,T32);
  lit_19 = YPsb((P)"unexpected right bracket");
  T33 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_19));
  VARSET(YgooSioSreadYDclose_bracket,T33);
  lit_20 = YPsb((P)"unexpected right curly");
  T34 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_20));
  VARSET(YgooSioSreadYDclose_curly,T34);
  lit_21 = YPPsym((P)"sub-read");
  lit_22 = YPPlist(1,YPPsym((P)"port"));
  T35 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sub_read_9 = YPmet(FUNCODEREF(fun_sub_read_9),LITREF(lit_21),T35,ENVNUL,PNUL,sloc(65));
  T37 = VARREF_OR(YgooSioSreadYsub_read,YPfalse);
  T38 = fun_sub_read_9;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T38);
  VARSET(YgooSioSreadYsub_read,T36);
  lit_23 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_24 = YPsb((P)"illegal character read");
  T39 = YPsig(LITREF(lit_23),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T39,ENVNUL,PNUL,sloc(76));
  T41 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T42 = fun_10;
  T40 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T41,T42);
  VARSET(YgooSioSreadYTread_dispatch_vectorT,T40);
  T44 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T43 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T44,YPtrue);
  VARSET(YgooSioSreadYTread_terminatingQ_vectorT,T43);
  lit_25 = YPPsym((P)"set-standard-syntax!");
  lit_26 = YPPlist(3,YPPsym((P)"char"),YPPsym((P)"terminating?"),YPPsym((P)"reader"));
  T45 = YPsig(LITREF(lit_26),YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_set_standard_syntaxX_11 = YPmet(FUNCODEREF(fun_set_standard_syntaxX_11),LITREF(lit_25),T45,ENVNUL,PNUL,sloc(80));
  T47 = VARREF_OR(YgooSioSreadYset_standard_syntaxX,YPfalse);
  T48 = fun_set_standard_syntaxX_11;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T48);
  VARSET(YgooSioSreadYset_standard_syntaxX,T46);
  lit_27 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_28 = YPPlist(1,YPPsym((P)"c"));
  T50 = YPsig(LITREF(lit_27),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T50,ENVNUL,PNUL,sloc(84));
  T49 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T49,ENVNUL,PNUL,sloc(85));
  T51 = fun_12;
  sub_read_whitespaceF2487 = T51;
  T53 = FUNFAB(fun_13,1,sub_read_whitespaceF2487);
  T52 = XCALL2(1,VARREF(YgooSmacrosYdo),T53,VARREF(YgooScolsSstrYascii_whitespaces));
  lit_29 = YPPsym((P)"flush-whitespace");
  lit_30 = YPPlist(1,YPPsym((P)"port"));
  T54 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYflush_whitespace = YPmet(FUNCODEREF(YgooSioSreadYflush_whitespace),LITREF(lit_29),T54,ENVNUL,PNUL,sloc(88));
  T55 = YgooSioSreadYflush_whitespace;
  VARSET(YgooSioSreadYflush_whitespace,T55);
  lit_31 = YPPsym((P)"read-delimited-list");
  lit_32 = YPPlist(2,YPPsym((P)"endchar"),YPPsym((P)"port"));
  T56 = YPsig(LITREF(lit_32),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_delimited_list = YPmet(FUNCODEREF(YgooSioSreadYread_delimited_list),LITREF(lit_31),T56,ENVNUL,PNUL,sloc(96));
  T57 = YgooSioSreadYread_delimited_list;
  VARSET(YgooSioSreadYread_delimited_list,T57);
  lit_33 = YPPsym((P)"sub-read-constituent");
  lit_34 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T58 = YPsig(LITREF(lit_34),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYsub_read_constituent = YPmet(FUNCODEREF(YgooSioSreadYsub_read_constituent),LITREF(lit_33),T58,ENVNUL,PNUL,sloc(104));
  T59 = YgooSioSreadYsub_read_constituent;
  VARSET(YgooSioSreadYsub_read_constituent,T59);
  lit_35 = YPsb((P)"!$%&*+-./0123456789:<=>?@^_~ABCDEFGHIJKLM");
  lit_36 = YPsb((P)"NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  lit_37 = YPPlist(1,YPPsym((P)"c"));
  T60 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T60,ENVNUL,PNUL,sloc(111));
  T61 = XCALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_35),LITREF(lit_36));
  str10496F2488 = T61;
  T63 = fun_17;
  T62 = XCALL2(1,VARREF(YgooSmacrosYdo),T63,str10496F2488);
  lit_38 = YPPsym((P)"set-standard-read-macro!");
  lit_39 = YPPlist(3,YPPsym((P)"char"),YPPsym((P)"terminating?"),YPPsym((P)"proc"));
  T64 = YPsig(LITREF(lit_39),YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_set_standard_read_macroX_18 = YPmet(FUNCODEREF(fun_set_standard_read_macroX_18),LITREF(lit_38),T64,ENVNUL,PNUL,sloc(116));
  T66 = VARREF_OR(YgooSioSreadYset_standard_read_macroX,YPfalse);
  T67 = fun_set_standard_read_macroX_18;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T67);
  VARSET(YgooSioSreadYset_standard_read_macroX,T65);
  lit_40 = YPPsym((P)"get-standard-read-macro");
  lit_41 = YPPlist(1,YPPsym((P)"char"));
  T68 = YPsig(LITREF(lit_41),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_get_standard_read_macro_19 = YPmet(FUNCODEREF(fun_get_standard_read_macro_19),LITREF(lit_40),T68,ENVNUL,PNUL,sloc(119));
  T70 = VARREF_OR(YgooSioSreadYget_standard_read_macro,YPfalse);
  T71 = fun_get_standard_read_macro_19;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T71);
  VARSET(YgooSioSreadYget_standard_read_macro,T69);
  lit_42 = YPPsym((P)"sub-read-vertical");
  lit_43 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_44 = YPsb((P)"|");
  T72 = YPsig(LITREF(lit_43),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_vertical_20 = YPmet(FUNCODEREF(fun_sub_read_vertical_20),LITREF(lit_42),T72,ENVNUL,PNUL,sloc(122));
  T74 = VARREF_OR(YgooSioSreadYsub_read_vertical,YPfalse);
  T75 = fun_sub_read_vertical_20;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T75);
  VARSET(YgooSioSreadYsub_read_vertical,T73);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)124),YPtrue,VARREF(YgooSioSreadYsub_read_vertical));
  lit_45 = YPsb((P)"|");
  T76 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),LITREF(lit_45));
  VARSET(YgooSioSreadYDvert_sym,T76);
  lit_46 = YPsb((P)"vert-proxy");
  T77 = XCALL1(1,VARREF(Ylst),LITREF(lit_46));
  VARSET(YgooSioSreadYDvert_proxy,T77);
  lit_47 = YPPsym((P)"sub-read-list-eof-error");
  lit_48 = YPPlist(1,YPPsym((P)"port"));
  lit_49 = YPsb((P)"end of file inside list -- unbalanced parentheses");
  T78 = YPsig(LITREF(lit_48),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYsub_read_list_eof_error = YPmet(FUNCODEREF(YgooSioSreadYsub_read_list_eof_error),LITREF(lit_47),T78,ENVNUL,PNUL,sloc(130));
  T79 = YgooSioSreadYsub_read_list_eof_error;
  VARSET(YgooSioSreadYsub_read_list_eof_error,T79);
  lit_50 = YPPsym((P)"sub-read-list");
  lit_51 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"p"));
  lit_52 = YPPsym((P)"read-next");
  lit_53 = YPPlist(4,YPPsym((P)"c"),YPPsym((P)"prev"),YPPsym((P)"line"),YPPsym((P)"form"));
  T81 = YPsig(LITREF(lit_53),YPPlist(4,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_read_next_22 = YPmet(FUNCODEREF(fun_read_next_22),LITREF(lit_52),T81,ENVNUL,PNUL,sloc(140));
  T80 = YPsig(LITREF(lit_51),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_list_23 = YPmet(FUNCODEREF(fun_sub_read_list_23),LITREF(lit_50),T80,ENVNUL,PNUL,sloc(133));
  T83 = VARREF_OR(YgooSioSreadYsub_read_list,YPfalse);
  T84 = fun_sub_read_list_23;
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T84);
  VARSET(YgooSioSreadYsub_read_list,T82);
  lit_54 = YPPsym((P)"sub-read-seq");
  lit_55 = YPPlist(3,YPPsym((P)"c"),YPPsym((P)"e"),YPPsym((P)"port"));
  lit_56 = YPsb((P)"end of file inside list -- unbalanced parentheses");
  T85 = YPsig(LITREF(lit_55),YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_sub_read_seq_24 = YPmet(FUNCODEREF(fun_sub_read_seq_24),LITREF(lit_54),T85,ENVNUL,PNUL,sloc(157));
  T87 = VARREF_OR(YgooSioSreadYsub_read_seq,YPfalse);
  T88 = fun_sub_read_seq_24;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T88);
  VARSET(YgooSioSreadYsub_read_seq,T86);
  lit_57 = YPPsym((P)"sub-read-brackets");
  lit_58 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_59 = YPPsym((P)"elt");
  lit_60 = Ynil;
  lit_61 = YPPsym((P)"*");
  lit_62 = YPPsym((P)"sub*");
  lit_63 = YPPsym((P)"sub");
  lit_64 = YPsb((P)"invalid [ ... ] form");
  T89 = YPsig(LITREF(lit_58),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_brackets_25 = YPmet(FUNCODEREF(fun_sub_read_brackets_25),LITREF(lit_57),T89,ENVNUL,PNUL,sloc(166));
  T91 = VARREF_OR(YgooSioSreadYsub_read_brackets,YPfalse);
  T92 = fun_sub_read_brackets_25;
  T90 = XCALL2(1,VARREF(YPdefine_method),T91,T92);
  VARSET(YgooSioSreadYsub_read_brackets,T90);
  lit_65 = YPPsym((P)"sub-read-curlies");
  lit_66 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_67 = YPPsym((P)".");
  lit_68 = YPPsym((P)"fun");
  T93 = YPsig(LITREF(lit_66),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_curlies_26 = YPmet(FUNCODEREF(fun_sub_read_curlies_26),LITREF(lit_65),T93,ENVNUL,PNUL,sloc(175));
  T95 = VARREF_OR(YgooSioSreadYsub_read_curlies,YPfalse);
  T96 = fun_sub_read_curlies_26;
  T94 = XCALL2(1,VARREF(YPdefine_method),T95,T96);
  VARSET(YgooSioSreadYsub_read_curlies,T94);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)40),YPtrue,VARREF(YgooSioSreadYsub_read_list));
  lit_69 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T97 = YPsig(LITREF(lit_69),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T97,ENVNUL,PNUL,sloc(184));
  T98 = fun_27;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)41),YPtrue,T98);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)123),YPtrue,VARREF(YgooSioSreadYsub_read_curlies));
  lit_70 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T99 = YPsig(LITREF(lit_70),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T99,ENVNUL,PNUL,sloc(188));
  T100 = fun_28;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)125),YPtrue,T100);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)91),YPtrue,VARREF(YgooSioSreadYsub_read_brackets));
  lit_71 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T101 = YPsig(LITREF(lit_71),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T101,ENVNUL,PNUL,sloc(192));
  T102 = fun_29;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)93),YPtrue,T102);
  lit_72 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_73 = YPPsym((P)"quote");
  T103 = YPsig(LITREF(lit_72),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T103,ENVNUL,PNUL,sloc(195));
  T104 = fun_30;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)39),YPtrue,T104);
  lit_74 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_75 = YPPsym((P)"quasiquote");
  T105 = YPsig(LITREF(lit_74),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T105,ENVNUL,PNUL,sloc(198));
  T106 = fun_31;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)96),YPtrue,T106);
  lit_76 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_77 = YPsb((P)"end of file after ,");
  lit_78 = YPPsym((P)"unquote-splicing");
  lit_79 = YPPsym((P)"unquote");
  T107 = YPsig(LITREF(lit_76),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T107,ENVNUL,PNUL,sloc(202));
  T108 = fun_32;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)44),YPtrue,T108);
  T111 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T110 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T111,YPfalse);
  vecF2489 = T110;
  T112 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)116));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)9),vecF2489,T112);
  T113 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)102));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)12),vecF2489,T113);
  T114 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)114));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)13),vecF2489,T114);
  T115 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)110));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)10),vecF2489,T115);
  T116 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF2489);
  T109 = T116;
  VARSET(YgooSioSreadYDstring_escape_chars,T109);
  lit_80 = YPPsym((P)"read-string-literal");
  lit_81 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_82 = YPsb((P)"end of file within a string");
  lit_83 = YPsb((P)"end of file within a string");
  lit_84 = YPsb((P)"invalid escaped character in string");
  T117 = YPsig(LITREF(lit_81),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_string_literal = YPmet(FUNCODEREF(YgooSioSreadYread_string_literal),LITREF(lit_80),T117,ENVNUL,PNUL,sloc(220));
  T118 = YgooSioSreadYread_string_literal;
  VARSET(YgooSioSreadYread_string_literal,T118);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)34),YPtrue,VARREF(YgooSioSreadYread_string_literal));
  lit_85 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T119 = YPsig(LITREF(lit_85),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T119,ENVNUL,PNUL,sloc(246));
  T120 = fun_34;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)59),YPtrue,T120);
  lit_86 = YPPsym((P)"gobble-line");
  lit_87 = YPPlist(1,YPPsym((P)"port"));
  T121 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gobble_line_35 = YPmet(FUNCODEREF(fun_gobble_line_35),LITREF(lit_86),T121,ENVNUL,PNUL,sloc(248));
  T123 = VARREF_OR(YgooSioSreadYgobble_line,YPfalse);
  T124 = fun_gobble_line_35;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T124);
  VARSET(YgooSioSreadYgobble_line,T122);
  VARSET(YgooSioSreadYTsharp_macrosT,Ynil);
  lit_88 = YPPsym((P)"define-sharp-macro");
  lit_89 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"proc"));
  T125 = YPsig(LITREF(lit_89),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_define_sharp_macro_36 = YPmet(FUNCODEREF(fun_define_sharp_macro_36),LITREF(lit_88),T125,ENVNUL,PNUL,sloc(255));
  T127 = VARREF_OR(YgooSioSreadYdefine_sharp_macro,YPfalse);
  T128 = fun_define_sharp_macro_36;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T128);
  VARSET(YgooSioSreadYdefine_sharp_macro,T126);
  lit_90 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_91 = YPsb((P)"end of file after #");
  lit_92 = YPsb((P)"unknown # syntax");
  T129 = YPsig(LITREF(lit_90),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T129,ENVNUL,PNUL,sloc(260));
  T130 = fun_37;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)35),YPfalse,T130);
  lit_93 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T131 = YPsig(LITREF(lit_93),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T131,ENVNUL,PNUL,sloc(270));
  T132 = fun_38;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)102),T132);
  lit_94 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T133 = YPsig(LITREF(lit_94),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T133,ENVNUL,PNUL,sloc(272));
  T134 = fun_39;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)116),T134);
  lit_95 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T135 = YPsig(LITREF(lit_95),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T135,ENVNUL,PNUL,sloc(274));
  T136 = fun_40;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)124),T136);
  lit_96 = YPPsym((P)"gobble-nested-comment");
  lit_97 = YPPlist(1,YPPsym((P)"port"));
  T137 = YPsig(LITREF(lit_97),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYgobble_nested_comment = YPmet(FUNCODEREF(YgooSioSreadYgobble_nested_comment),LITREF(lit_96),T137,ENVNUL,PNUL,sloc(276));
  T138 = YgooSioSreadYgobble_nested_comment;
  VARSET(YgooSioSreadYgobble_nested_comment,T138);
  lit_98 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T139 = YPsig(LITREF(lit_98),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T139,ENVNUL,PNUL,sloc(287));
  T140 = fun_42;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)47),T140);
  lit_99 = YPPlist(5,YPPlist(2,YPPsym((P)"tab"),YPchr((P)9)),YPPlist(2,YPPsym((P)"page"),YPchr((P)12)),YPPlist(2,YPPsym((P)"return"),YPchr((P)13)),YPPlist(2,YPPsym((P)"newline"),YPchr((P)10)),YPPlist(2,YPPsym((P)"space"),YPchr((P)32)));
  T142 = VARSET(YgooSioSreadYDchar_long_names,LITREF(lit_99));
  T141 = T142;
  return T141;
}

P YgooSioSreadY___main_1___() {
  P number_sharp_macroF2490;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
DEFCREGS();
  lit_100 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_101 = YPsb((P)"end of file after #\\");
  lit_102 = YPsb((P)"unknown #\\ name");
  T0 = YPsig(LITREF(lit_100),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T0,ENVNUL,PNUL,sloc(298));
  T1 = fun_43;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)92),T1);
  lit_103 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T2 = YPsig(LITREF(lit_103),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T2,ENVNUL,PNUL,sloc(315));
  T3 = fun_44;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)40),T3);
  lit_104 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T4 = YPsig(LITREF(lit_104),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T4,ENVNUL,PNUL,sloc(321));
  T5 = fun_45;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)91),T5);
  lit_105 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_106 = YPsb((P)"unsupported number syntax");
  lit_107 = YPPlist(1,YPPsym((P)"c"));
  lit_108 = YPPlist(4,YPchr((P)98),YPchr((P)111),YPchr((P)100),YPchr((P)120));
  T7 = YPsig(LITREF(lit_105),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T7,ENVNUL,PNUL,sloc(326));
  T6 = YPsig(LITREF(lit_107),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T6,ENVNUL,PNUL,sloc(330));
  T8 = fun_46;
  number_sharp_macroF2490 = T8;
  T10 = FUNFAB(fun_47,1,number_sharp_macroF2490);
  T9 = XCALL2(1,VARREF(YgooSmacrosYdo),T10,LITREF(lit_108));
  lit_109 = YPPsym((P)"sub-read-token");
  lit_110 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T11 = YPsig(LITREF(lit_110),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_token_48 = YPmet(FUNCODEREF(fun_sub_read_token_48),LITREF(lit_109),T11,ENVNUL,PNUL,sloc(335));
  T13 = VARREF_OR(YgooSioSreadYsub_read_token,YPfalse);
  T14 = fun_sub_read_token_48;
  T12 = XCALL2(1,VARREF(YPdefine_method),T13,T14);
  VARSET(YgooSioSreadYsub_read_token,T12);
  lit_111 = YPPsym((P)"parse-token");
  lit_112 = YPPlist(2,YPPsym((P)"string"),YPPsym((P)"port"));
  lit_113 = YPPlist(1,YPPsym((P)"x"));
  lit_114 = YPsb((P)".");
  lit_115 = YPsb((P)"unsupported number syntax");
  T16 = YPsig(LITREF(lit_113),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T16,ENVNUL,PNUL,sloc(356));
  T15 = YPsig(LITREF(lit_112),YPPlist(2,VARREF(YLstrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_token_50 = YPmet(FUNCODEREF(fun_parse_token_50),LITREF(lit_111),T15,ENVNUL,PNUL,sloc(346));
  T18 = VARREF_OR(YgooSioSreadYparse_token,YPfalse);
  T19 = fun_parse_token_50;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YgooSioSreadYparse_token,T17);
  lit_116 = YPPlist(9,YPsb((P)"+"),YPsb((P)"-"),YPsb((P)"..."),YPsb((P)"1st"),YPsb((P)"2nd"),YPsb((P)"3rd"),YPsb((P)"1+"),YPsb((P)"1-"),YPsb((P)"->"));
  VARSET(YgooSioSreadYDstrange_symbol_names,LITREF(lit_116));
  lit_117 = YPPsym((P)"t");
  T23 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),LITREF(lit_117));
  T22 = XCALL2(1,VARREF(YgooSmacrosYelt),T23,YPint((P)0));
  T21 = XCALL2(1,VARREF(YgooSmathYE),T22,YPchr((P)84));
  if (T21 != YPfalse) {
    T20 = VARREF(YgooSmathYto_upper);
  } else {
    T20 = VARREF(YgooSmathYto_lower);
  }
  VARSET(YgooSioSreadYpreferred_case,T20);
  lit_118 = YPPsym((P)"reading-error");
  lit_119 = YPPlist(3,YPPsym((P)"port"),YPPsym((P)"message"),YPPsym((P)"irritants"));
  lit_120 = YPsb((P)": %=");
  T24 = YPsig(LITREF(lit_119),YPPlist(2,VARREF(YgooSioSportYLportG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reading_error_51 = YPmet(FUNCODEREF(fun_reading_error_51),LITREF(lit_118),T24,ENVNUL,PNUL,sloc(383));
  T26 = VARREF_OR(YgooSioSreadYreading_error,YPfalse);
  T27 = fun_reading_error_51;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T27);
  VARSET(YgooSioSreadYreading_error,T25);
  lit_121 = YPPsym((P)"warn");
  lit_122 = YPPlist(2,YPPsym((P)"string"),YPPsym((P)"irritants-and-port"));
  T28 = YPsig(LITREF(lit_122),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_warn_52 = YPmet(FUNCODEREF(fun_warn_52),LITREF(lit_121),T28,ENVNUL,PNUL,sloc(387));
  T30 = VARREF_OR(YgooSioSreadYwarn,YPfalse);
  T31 = fun_warn_52;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T31);
  VARSET(YgooSioSreadYwarn,T29);
  lit_123 = YPPsym((P)"reverse-list->string");
  lit_124 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"n"));
  T32 = YPsig(LITREF(lit_124),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_reverse_list_Gstring_53 = YPmet(FUNCODEREF(fun_reverse_list_Gstring_53),LITREF(lit_123),T32,ENVNUL,PNUL,sloc(395));
  T34 = VARREF_OR(YgooSioSreadYreverse_list_Gstring,YPfalse);
  T35 = fun_reverse_list_Gstring_53;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T35);
  VARSET(YgooSioSreadYreverse_list_Gstring,T33);
  lit_125 = YPPsym((P)"make-immutable!");
  lit_126 = YPPlist(1,YPPsym((P)"x"));
  T36 = YPsig(LITREF(lit_126),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_immutableX_54 = YPmet(FUNCODEREF(fun_make_immutableX_54),LITREF(lit_125),T36,ENVNUL,PNUL,sloc(398));
  T38 = VARREF_OR(YgooSioSreadYmake_immutableX,YPfalse);
  T39 = fun_make_immutableX_54;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T39);
  VARSET(YgooSioSreadYmake_immutableX,T37);
  T40 = YPfalse;
  return T40;
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
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSmag;

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
  {"clone", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"default-handler-description", &module_info_gooSconditions, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"describe-handler", &module_info_gooSconditions, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"list-handlers", &module_info_gooSconditions, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"*current-handlers*", &module_info_gooSconditions, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"port-handle-setter", &module_info_gooSioSport, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"zipped", &module_info_gooSruntime, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"*gensym-counter*", &module_info_gooSruntime, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"port-handle", &module_info_gooSioSport, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"port-index-setter", &module_info_gooSioSport, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"build-condition-interactively", &module_info_gooSconditions, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"port-line-setter", &module_info_gooSioSport, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"choose-handler", &module_info_gooSconditions, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sub-read-constituent", CVAR, &YgooSioSreadYsub_read_constituent},
  {"$string-escape-chars", CVAR, &YgooSioSreadYDstring_escape_chars},
  {"sub-read-list", CVAR, &YgooSioSreadYsub_read_list},
  {"*sharp-macros*", CVAR, &YgooSioSreadYTsharp_macrosT},
  {"warn", CVAR, &YgooSioSreadYwarn},
  {"$char-long-names", CVAR, &YgooSioSreadYDchar_long_names},
  {"sub-read", CVAR, &YgooSioSreadYsub_read},
  {"sub-read-list-eof-error", CVAR, &YgooSioSreadYsub_read_list_eof_error},
  {"define-sharp-macro", CVAR, &YgooSioSreadYdefine_sharp_macro},
  {"sub-read-seq", CVAR, &YgooSioSreadYsub_read_seq},
  {"sub-read-carefully", CVAR, &YgooSioSreadYsub_read_carefully},
  {"set-standard-syntax!", CVAR, &YgooSioSreadYset_standard_syntaxX},
  {"sub-read-vertical", CVAR, &YgooSioSreadYsub_read_vertical},
  {"read-delimited-list", CVAR, &YgooSioSreadYread_delimited_list},
  {"$close-paren", CVAR, &YgooSioSreadYDclose_paren},
  {"token-message-setter", CVAR, &YgooSioSreadYtoken_message_setter},
  {"gobble-nested-comment", CVAR, &YgooSioSreadYgobble_nested_comment},
  {"---main-0---", PVAR, NULL},
  {"make-immutable!", CVAR, &YgooSioSreadYmake_immutableX},
  {"*read-terminating?-vector*", CVAR, &YgooSioSreadYTread_terminatingQ_vectorT},
  {"parse-token", CVAR, &YgooSioSreadYparse_token},
  {"flush-whitespace", CVAR, &YgooSioSreadYflush_whitespace},
  {"*read-dispatch-vector*", CVAR, &YgooSioSreadYTread_dispatch_vectorT},
  {"gobble-line", CVAR, &YgooSioSreadYgobble_line},
  {"reading-error", CVAR, &YgooSioSreadYreading_error},
  {"reader-token?", CVAR, &YgooSioSreadYreader_tokenQ},
  {"read-from-string", CVAR, &YgooSioSreadYread_from_string},
  {"sub-read-curlies", CVAR, &YgooSioSreadYsub_read_curlies},
  {"token-message", CVAR, &YgooSioSreadYtoken_message},
  {"$close-bracket", CVAR, &YgooSioSreadYDclose_bracket},
  {"get-standard-read-macro", CVAR, &YgooSioSreadYget_standard_read_macro},
  {"$close-curly", CVAR, &YgooSioSreadYDclose_curly},
  {"reverse-list->string", CVAR, &YgooSioSreadYreverse_list_Gstring},
  {"$vert-proxy", CVAR, &YgooSioSreadYDvert_proxy},
  {"preferred-case", CVAR, &YgooSioSreadYpreferred_case},
  {"sub-read-token", CVAR, &YgooSioSreadYsub_read_token},
  {"read-string-literal", CVAR, &YgooSioSreadYread_string_literal},
  {"make-reader-token", CVAR, &YgooSioSreadYmake_reader_token},
  {"---main-1---", PVAR, NULL},
  {"sub-read-brackets", CVAR, &YgooSioSreadYsub_read_brackets},
  {"set-standard-read-macro!", CVAR, &YgooSioSreadYset_standard_read_macroX},
  {"$vert-sym", CVAR, &YgooSioSreadYDvert_sym},
  {"$strange-symbol-names", CVAR, &YgooSioSreadYDstrange_symbol_names},
  {"<reader-token>", CVAR, &YgooSioSreadYLreader_tokenG},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"$char-long-names", NULL},
  {"read-delimited-list", NULL},
  {"read-from-string", NULL},
  {"get-standard-read-macro", NULL},
  {"read", NULL},
  {"set-standard-read-macro!", NULL},
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
