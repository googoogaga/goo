/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/io/write");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/io/write */

EXT(Yclone,"goo/boot","clone");
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
DEF(YgooSioSwriteYwrite_fun_guts,"goo/io/write","write-fun-guts");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooSmathY_,"goo/math","-");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
DEF(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
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
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
DEF(YgooSioSwriteYrecurring_write_type,"goo/io/write","recurring-write-type");
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
DEF(YgooSioSwriteYquotationQ,"goo/io/write","quotation?");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YLcolIG,"goo/boot","<col.>");
DEF(YgooSioSwriteYwrite,"goo/io/write","write");
DEF(YgooSioSwriteYcharacter_name,"goo/io/write","character-name");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
DEF(YgooSioSwriteYas_binding_name,"goo/io/write","as-binding-name");
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
DEF(YgooSioSwriteYwrite_boolean,"goo/io/write","write-boolean");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
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
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfind_setter,"goo/boot","find-setter");
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
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YgooSioSwriteYwrite_value_type,"goo/io/write","write-value-type");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
DEF(YgooSioSwriteYwrite_map,"goo/io/write","write-map");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
DEF(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YLnumG,"goo/boot","<num>");
DEF(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
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
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
DYNDEF(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmathYK,"goo/math","|");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ynul,"goo/boot","nul");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YgooSioSwriteYwrite_char_literal,"goo/io/write","write-char-literal");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYas_log,"goo/math","as-log");
DEF(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
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
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_refs,"goo/boot","fun-refs");
DEF(YgooSioSwriteYwrite_list,"goo/io/write","write-list");
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
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
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
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
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
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
DEF(YgooSioSwriteYwrite_params,"goo/io/write","write-params");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(Ymet_appQ,"goo/boot","met-app?");
DEF(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YgooSioSwriteYpost,"goo/io/write","post");
EXT(Ylst,"goo/boot","lst");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YPdispatch,"goo/boot","%dispatch");
DEF(YgooSioSwriteYwriteln,"goo/io/write","writeln");
DEF(YgooSioSwriteYwrite_number,"goo/io/write","write-number");
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
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Ytype_class,"goo/boot","type-class");
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
DYNDEF(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
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
DEF(YgooSioSwriteYdo_emit,"goo/io/write","do-emit");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yfab_sym,"goo/boot","fab-sym");
DEF(YgooSioSwriteYwrite_string_literal,"goo/io/write","write-string-literal");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
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
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
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
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
DEF(YgooSioSwriteYwrite_flat,"goo/io/write","write-flat");
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
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLlstG,"goo/boot","<lst>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_159);
DEFLIT(lit_35);
DEFLIT(lit_81);
DEFLIT(lit_134);
DEFLIT(lit_149);
DEFLIT(lit_132);
DEFLIT(lit_0);
DEFLIT(lit_56);
DEFLIT(lit_19);
DEFLIT(lit_165);
DEFLIT(lit_20);
DEFLIT(lit_18);
DEFLIT(lit_78);
DEFLIT(lit_144);
DEFLIT(lit_24);
DEFLIT(lit_45);
DEFLIT(lit_148);
DEFLIT(lit_91);
DEFLIT(lit_96);
DEFLIT(lit_58);
DEFLIT(lit_161);
DEFLIT(lit_151);
DEFLIT(lit_38);
DEFLIT(lit_8);
DEFLIT(lit_66);
DEFLIT(lit_50);
DEFLIT(lit_90);
DEFLIT(lit_37);
DEFLIT(lit_11);
DEFLIT(lit_147);
DEFLIT(lit_82);
DEFLIT(lit_150);
DEFLIT(lit_25);
DEFLIT(lit_139);
DEFLIT(lit_116);
DEFLIT(lit_122);
DEFLIT(lit_130);
DEFLIT(lit_89);
DEFLIT(lit_87);
DEFLIT(lit_64);
DEFLIT(lit_44);
DEFLIT(lit_47);
DEFLIT(lit_142);
DEFLIT(lit_76);
DEFLIT(lit_62);
DEFLIT(lit_63);
DEFLIT(lit_43);
DEFLIT(lit_69);
DEFLIT(lit_73);
DEFLIT(lit_53);
DEFLIT(lit_57);
DEFLIT(lit_163);
DEFLIT(lit_46);
DEFLIT(lit_158);
DEFLIT(lit_154);
DEFLIT(lit_54);
DEFLIT(lit_22);
DEFLIT(lit_113);
DEFLIT(lit_6);
DEFLIT(lit_157);
DEFLIT(lit_155);
DEFLIT(lit_28);
DEFLIT(lit_13);
DEFLIT(lit_88);
DEFLIT(lit_84);
DEFLIT(lit_3);
DEFLIT(lit_145);
DEFLIT(lit_48);
DEFLIT(lit_52);
DEFLIT(lit_71);
DEFLIT(lit_106);
DEFLIT(lit_95);
DEFLIT(lit_1);
DEFLIT(lit_12);
DEFLIT(lit_108);
DEFLIT(lit_123);
DEFLIT(lit_86);
DEFLIT(lit_124);
DEFLIT(lit_59);
DEFLIT(lit_98);
DEFLIT(lit_100);
DEFLIT(lit_41);
DEFLIT(lit_80);
DEFLIT(lit_160);
DEFLIT(lit_112);
DEFLIT(lit_68);
DEFLIT(lit_127);
DEFLIT(lit_42);
DEFLIT(lit_27);
DEFLIT(lit_49);
DEFLIT(lit_77);
DEFLIT(lit_115);
DEFLIT(lit_30);
DEFLIT(lit_83);
DEFLIT(lit_92);
DEFLIT(lit_135);
DEFLIT(lit_55);
DEFLIT(lit_33);
DEFLIT(lit_152);
DEFLIT(lit_7);
DEFLIT(lit_125);
DEFLIT(lit_9);
DEFLIT(lit_16);
DEFLIT(lit_34);
DEFLIT(lit_72);
DEFLIT(lit_141);
DEFLIT(lit_40);
DEFLIT(lit_143);
DEFLIT(lit_93);
DEFLIT(lit_39);
DEFLIT(lit_61);
DEFLIT(lit_75);
DEFLIT(lit_2);
DEFLIT(lit_85);
DEFLIT(lit_162);
DEFLIT(lit_21);
DEFLIT(lit_15);
DEFLIT(lit_137);
DEFLIT(lit_74);
DEFLIT(lit_117);
DEFLIT(lit_104);
DEFLIT(lit_79);
DEFLIT(lit_29);
DEFLIT(lit_23);
DEFLIT(lit_111);
DEFLIT(lit_136);
DEFLIT(lit_99);
DEFLIT(lit_32);
DEFLIT(lit_140);
DEFLIT(lit_153);
DEFLIT(lit_146);
DEFLIT(lit_97);
DEFLIT(lit_5);
DEFLIT(lit_129);
DEFLIT(lit_126);
DEFLIT(lit_128);
DEFLIT(lit_65);
DEFLIT(lit_131);
DEFLIT(lit_4);
DEFLIT(lit_119);
DEFLIT(lit_10);
DEFLIT(lit_120);
DEFLIT(lit_31);
DEFLIT(lit_107);
DEFLIT(lit_138);
DEFLIT(lit_101);
DEFLIT(lit_109);
DEFLIT(lit_114);
DEFLIT(lit_164);
DEFLIT(lit_102);
DEFLIT(lit_94);
DEFLIT(lit_121);
DEFLIT(lit_70);
DEFLIT(lit_26);
DEFLIT(lit_103);
DEFLIT(lit_51);
DEFLIT(lit_156);
DEFLIT(lit_67);
DEFLIT(lit_118);
DEFLIT(lit_14);
DEFLIT(lit_110);
DEFLIT(lit_105);
DEFLIT(lit_17);
DEFLIT(lit_133);
DEFLIT(lit_36);
DEFLIT(lit_60);

/* FUNCTIONS: */

LOCFOR(fun_as_binding_name_0);
LOCFOR(fun_do_emit_1);
LOCFOR(fun_do_emit_2);
LOCFOR(fun_do_emit_3);
LOCFOR(fun_recur_4);
LOCFOR(fun_emit_5);
LOCFOR(fun_6);
LOCFOR(fun_7);
LOCFOR(fun_write_to_string_8);
LOCFOR(fun_recur_9);
LOCFOR(fun_write_10);
LOCFOR(fun_writeln_11);
LOCFOR(fun_recurring_write_12);
LOCFOR(fun_recurring_write_13);
LOCFOR(fun_recurring_write_14);
LOCFOR(fun_recurring_write_15);
LOCFOR(fun_recurring_write_16);
LOCFOR(fun_recurring_write_17);
LOCFOR(fun_recurring_write_18);
LOCFOR(fun_recurring_write_19);
LOCFOR(fun_recurring_write_20);
LOCFOR(fun_recurring_write_21);
LOCFOR(fun_recurring_write_22);
LOCFOR(fun_write_boolean_23);
LOCFOR(fun_write_number_24);
LOCFOR(fun_write_char_literal_25);
LOCFOR(fun_character_name_26);
LOCFOR(fun_write_string_literal_27);
LOCFOR(fun_write_list_28);
LOCFOR(fun_quotationQ_29);
LOCFOR(fun_write_flat_30);
LOCFOR(fun_31);
LOCFOR(fun_write_map_32);
LOCFOR(fun_recurring_write_33);
LOCFOR(fun_recurring_write_34);
LOCFOR(fun_35);
LOCFOR(fun_36);
LOCFOR(fun_write_params_37);
LOCFOR(fun_write_fun_guts_38);
LOCFOR(fun_recurring_write_39);
LOCFOR(fun_recurring_write_40);
LOCFOR(fun_recurring_write_41);
LOCFOR(fun_recurring_write_42);
LOCFOR(fun_recurring_write_43);
LOCFOR(fun_recurring_write_44);
LOCFOR(fun_45);
LOCFOR(fun_recurring_write_46);
LOCFOR(fun_47);
LOCFOR(fun_recurring_write_48);
LOCFOR(fun_49);
LOCFOR(fun_write_value_type_50);
LOCFOR(fun_write_value_type_51);
LOCFOR(fun_recurring_write_type_52);
LOCFOR(fun_recurring_write_type_53);
LOCFOR(fun_recur_54);
LOCFOR(fun_write_type_55);
LOCFOR(fun_recurring_write_56);
LOCFOR(fun_57);
LOCFOR(fun_58);
LOCFOR(fun_59);
LOCFOR(fun_recurring_write_60);
LOCFOR(fun_recurring_write_61);
LOCFOR(fun_recurring_write_62);
LOCFOR(fun_arg_63);
LOCFOR(fun_64);
LOCFOR(fun_msg_65);
LOCFOR(fun_post_66);
LOCFOR(fun_maybe_pack_chars_67);
LOCFOR(fun_arg_68);
LOCFOR(fun_69);
FUNFOR(YgooSioSwriteYpe_msg);
LOCFOR(fun_x_1417_71);
LOCFOR(fun_72);
LOCFOR(fun_73);
LOCFOR(fun_74);
LOCFOR(fun_75);
FUNFOR(YgooSconditionsYmsg_to_str);
FUNFOR(YgooSioSwriteYsay);
extern P YgooSioSwriteY___main_0___ ();
extern P YgooSioSwriteY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_as_binding_name_0) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_emit_1) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_emit_2) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSportYput),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_emit_3) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL4(1,VARREF(YgooSioSwriteYrecurring_write),port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recur_4) {
  P x_,d_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
  T1 = CALL2(1,VARREF(YgooSmagYGE),d_,DYNREF(YgooSioSwriteYTmax_print_depthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_10));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    T3 = CALL4(1,VARREF(YgooSioSwriteYdo_emit),FREEREF(0),x_,T4,FREEREF(1));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_emit_5) {
  P port_,x_;
  P recurF2491;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T1 = FUNSHELL(0,fun_recur_4,2);
  recurF2491 = T1;
  FUNINIT(recurF2491, 2,port_,recurF2491);
  T2 = CALL2(1,recurF2491,x_,YPint((P)-1));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  P T0,T1,T2;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_out_portG),LITREF(lit_14));
  BOXVAL(FREEREF(0)) = T0;
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSioSwriteYwrite),T2,FREEREF(1));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_7) {
  P tmpF2492;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  T1 = BOXVAL(FREEREF(0));
  tmpF2492 = T1;
  if (tmpF2492 != YPfalse) {
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

FUNCODEDEF(fun_write_to_string_8) {
  P x_;
  P portF2493;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  portF2493 = YPfalse;
  portF2493 = BOXFAB(portF2493);
  T3 = FUNFAB(fun_6,2,portF2493,x_);
  T4 = FUNFAB(fun_7,1,portF2493);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_recur_9) {
  P x_,d_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
  T1 = CALL2(1,VARREF(YgooSmagYGE),d_,DYNREF(YgooSioSwriteYTmax_print_depthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_18));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    T3 = CALL4(1,VARREF(YgooSioSwriteYrecurring_write),FREEREF(0),x_,T4,FREEREF(1));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_10) {
  P port_,x_;
  P recurF2494;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T1 = FUNSHELL(0,fun_recur_9,2);
  recurF2494 = T1;
  FUNINIT(recurF2494, 2,port_,recurF2494);
  T2 = CALL2(1,recurF2494,x_,YPint((P)-1));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_writeln_11) {
  P port_,x_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  CALL2(1,VARREF(YgooSioSwriteYwrite),port_,x_);
  T0 = CALL1(1,VARREF(YgooSioSportYnewline),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_12) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_23));
    T0 = T2;
  } else {
    T3 = CALL4(1,VARREF(YgooSioSwriteYwrite_list),port_,x_,d_,recur_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_13) {
  P port_,x_,d_,recur_;
  P prefixF2495;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T4 = CALL1(1,VARREF(Yclass_of),x_);
  T3 = CALL1(1,VARREF(Yclass_name),T4);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T3);
  T1 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_25),T2,LITREF(lit_26));
  prefixF2495 = T1;
  T5 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,prefixF2495,x_,LITREF(lit_27),d_,recur_);
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_14) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,LITREF(lit_29),x_,LITREF(lit_30),d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_15) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,LITREF(lit_32),x_,LITREF(lit_33),d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_16) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_map),port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_17) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  if (x_ != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSioSwriteYwrite_boolean),port_,LITREF(lit_36));
    T0 = T1;
  } else {
    T2 = CALL2(1,VARREF(YgooSioSwriteYwrite_boolean),port_,LITREF(lit_37));
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_18) {
  P port_,x_,d_,recur_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),x_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_19) {
  P port_,x_,d_,recur_;
  P tF2499;
  P xF2498;
  P xF2497;
  P xF2496;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_40));
  xF2496 = x_;
  T4 = (P)YPuntag_into(xF2496);
  T3 = T4;
  xF2497 = T3;
  xF2498 = xF2497;
  tF2499 = (P)1;
  T7 = (P)YPiLL(xF2498,(P)2);
  T6 = (P)YPiv(T7,tF2499);
  T5 = T6;
  T2 = T5;
  T1 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),T2,YPint((P)16));
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_20) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YLnumG));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSioSwriteYas_binding_name),LITREF(lit_42));
    T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,T3);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSioSwriteYwrite_number),port_,x_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_21) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_string_literal),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_22) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_char_literal),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_boolean_23) {
  P port_,mumble_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(mumble_, 1);
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)35));
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite),port_,mumble_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_number_24) {
  P port_,x_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_char_literal_25) {
  P port_,x_;
  P probeF2500;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(YgooSioSwriteYcharacter_name),x_);
  probeF2500 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_51));
  if (probeF2500 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSioSwriteYwrite),port_,probeF2500);
    T2 = T3;
  } else {
    T4 = CALL2(1,VARREF(YgooSioSportYput),port_,x_);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_character_name_26) {
  P char_;
  P tmpF2502;
  P assocF2501;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(char_, 0);
  T1 = CALL3(1,VARREF(YgooScolsSlstYassqn),char_,VARREF(YgooSioSreadYDchar_long_names),YPint((P)1));
  assocF2501 = T1;
  tmpF2502 = assocF2501;
  if (tmpF2502 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmacrosY1st),assocF2501);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_string_literal_27) {
  P port_,x_;
  P tmpF2506;
  P cF2505;
  P iF2504;
  P lenF2503;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)34));
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  lenF2503 = T1;
  iF2504 = YPint((P)0);
  for (;;) {
    P a154_0;
  loop154:
    T5 = CALL2(1,VARREF(YgooSmathYE),iF2504,lenF2503);
    if (T5 != YPfalse) {
      T6 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)34));
      T4 = T6;
    } else {
      T8 = CALL2(1,VARREF(YgooSmacrosYelt),x_,iF2504);
      cF2505 = T8;
      T10 = CALL2(1,VARREF(YgooSmathYE),cF2505,YPchr((P)92));
      tmpF2506 = T10;
      if (tmpF2506 != YPfalse) {
        T11 = tmpF2506;
      } else {
        T12 = CALL2(1,VARREF(YgooSmathYE),cF2505,YPchr((P)34));
        T11 = T12;
      }
      T9 = T11;
      if (T9 != YPfalse) {
        T13 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)92));
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYput),port_,cF2505);
      T15 = CALL2(1,VARREF(YgooSmathYA),iF2504,YPint((P)1));
      a154_0 = T15;
      iF2504 = a154_0;
      goto loop154;
      T7 = T14;
      T4 = T7;
    }
    break;
  }
  T3 = T4;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_list_28) {
  P port_,x_,d_,recur_;
  P nF2508;
  P lF2507;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T1 = CALL1(1,VARREF(YgooSioSwriteYquotationQ),x_);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)39));
    T4 = CALL1(1,VARREF(Ytail),x_);
    T3 = CALL1(1,VARREF(Yhead),T4);
    T2 = CALL2(1,recur_,T3,d_);
    T0 = T2;
  } else {
    CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)40));
    T5 = CALL1(1,VARREF(Yhead),x_);
    CALL2(1,recur_,T5,d_);
    T6 = CALL1(1,VARREF(Ytail),x_);
    lF2507 = T6;
    nF2508 = YPint((P)1);
    for (;;) {
      P a155_0,a155_1;
    loop155:
      T10 = CALL1(1,VARREF(YgooSmacrosYemptyQ),lF2507);
      T9 = CALL1(1,VARREF(Ynot),T10);
      if (T9 != YPfalse) {
        T12 = CALL2(1,VARREF(YgooSmagYGE),nF2508,DYNREF(YgooSioSwriteYTmax_print_lengthT));
        if (T12 != YPfalse) {
          T13 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_58));
          T11 = T13;
        } else {
          CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
          T14 = CALL1(1,VARREF(Yhead),lF2507);
          CALL2(0,recur_,T14,d_);
          T16 = CALL1(1,VARREF(Ytail),lF2507);
          T17 = CALL2(1,VARREF(YgooSmathYA),nF2508,YPint((P)1));
          a155_0 = T16;
          a155_1 = T17;
          lF2507 = a155_0;
          nF2508 = a155_1;
          goto loop155;
          T11 = T15;
        }
        T8 = T11;
      } else {
        T8 = YPfalse;
      }
      break;
    }
    T7 = T8;
    T18 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
    T0 = T18;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_quotationQ_29) {
  P x_;
  P tmpF2511;
  P tmpF2510;
  P tmpF2509;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  tmpF2509 = T1;
  if (tmpF2509 != YPfalse) {
    T5 = CALL1(1,VARREF(Yhead),x_);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,LITREF(lit_61));
    tmpF2510 = T4;
    if (tmpF2510 != YPfalse) {
      T9 = CALL1(1,VARREF(Ytail),x_);
      T8 = CALL2(1,VARREF(YisaQ),T9,VARREF(YLlstG));
      tmpF2511 = T8;
      if (tmpF2511 != YPfalse) {
        T13 = CALL1(1,VARREF(Ytail),x_);
        T12 = CALL1(1,VARREF(Ytail),T13);
        T11 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T12);
        T10 = T11;
      } else {
        T10 = YPfalse;
      }
      T7 = T10;
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T3 = T6;
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_write_flat_30) {
  P port_,prefix_,x_,suffix_,d_,recur_;
  P iF2513;
  P zF2512;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(port_, 0);
  ARG(prefix_, 1);
  ARG(x_, 2);
  ARG(suffix_, 3);
  ARG(d_, 4);
  ARG(recur_, 5);
  CALL2(1,VARREF(YgooSioSportYputs),port_,prefix_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  zF2512 = T1;
  T2 = CALL2(1,VARREF(YgooSmagYG),zF2512,YPint((P)0));
  if (T2 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
    CALL2(1,recur_,T3,d_);
    iF2513 = YPint((P)1);
    for (;;) {
      P a156_0;
    loop156:
      T7 = CALL2(1,VARREF(YgooSmagYGE),iF2513,DYNREF(YgooSioSwriteYTmax_print_lengthT));
      if (T7 != YPfalse) {
        T8 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_64));
        T6 = T8;
      } else {
        T11 = CALL2(1,VARREF(YgooSmagYGE),iF2513,zF2512);
        T10 = CALL1(1,VARREF(Ynot),T11);
        if (T10 != YPfalse) {
          CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
          T12 = CALL2(1,VARREF(YgooSmacrosYelt),x_,iF2513);
          CALL2(1,recur_,T12,d_);
          T14 = CALL2(1,VARREF(YgooSmathYA),iF2513,YPint((P)1));
          a156_0 = T14;
          iF2513 = a156_0;
          goto loop156;
          T9 = T13;
        } else {
          T9 = YPfalse;
        }
        T6 = T9;
      }
      break;
    }
    T5 = T6;
    T4 = T5;
  } else {
  }
  T15 = CALL2(1,VARREF(YgooSioSportYputs),port_,suffix_);
  T0 = T15;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_31) {
  P blow_;
  P valF2520;
  P keyF2519;
  P tup28F2518;
  P iF2517;
  P tmpF2516;
  P x_1399F2515;
  P x_1400F2514;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
LINK_STACK();
  ARG(blow_, 0);
  T3 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  x_1400F2514 = T2;
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(0));
  x_1399F2515 = T4;
  for (;;) {
    P a157_0,a157_1;
  loop157:
    T9 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1400F2514);
    tmpF2516 = T9;
    if (tmpF2516 != YPfalse) {
      T10 = tmpF2516;
    } else {
      T11 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1399F2515);
      T10 = T11;
    }
    T8 = T10;
    T7 = CALL1(1,VARREF(Ynot),T8);
    if (T7 != YPfalse) {
      T13 = CALL1(1,VARREF(YgooScolsScolYnow),x_1400F2514);
      iF2517 = T13;
      T16 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_1399F2515);
      T17 = CALL1(1,VARREF(YgooScolsScolYnow),x_1399F2515);
      T15 = CALL2(1,VARREF(Ytup),T16,T17);
      tup28F2518 = T15;
      T19 = CALL2(1,VARREF(YgooSmacrosYelt),tup28F2518,YPint((P)0));
      keyF2519 = T19;
      T21 = CALL2(1,VARREF(YgooSmacrosYelt),tup28F2518,YPint((P)1));
      valF2520 = T21;
      T22 = CALL2(1,VARREF(YgooSmagYGE),iF2517,DYNREF(YgooSioSwriteYTmax_print_lengthT));
      if (T22 != YPfalse) {
        CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_69));
        T23 = CALL1(0,blow_,YPfalse);
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)32));
      CALL2(0,FREEREF(3),keyF2519,FREEREF(2));
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_70));
      CALL2(0,FREEREF(3),valF2520,FREEREF(2));
      T25 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1400F2514);
      T26 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1399F2515);
      a157_0 = T25;
      a157_1 = T26;
      x_1400F2514 = a157_0;
      x_1399F2515 = a157_1;
      goto loop157;
      T20 = T24;
      T18 = T20;
      T14 = T18;
      T12 = T14;
      T6 = T12;
    } else {
      T6 = YPfalse;
    }
    break;
  }
  T5 = T6;
  T1 = T5;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_map_32) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_67));
  T1 = CALL1(1,VARREF(Yclass_of),x_);
  T0 = CALL1(1,VARREF(Yclass_name),T1);
  CALL2(1,VARREF(YgooSioSwriteYemit),port_,T0);
  T2 = FUNFAB(fun_31,4,x_,port_,d_,recur_);
  with_exit(T2);
  T3 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)62));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_recurring_write_33) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_72));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_34) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_74));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_35) {
LINK_STACK();
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_36) {
LINK_STACK();
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_write_params_37) {
  P port_,x_,recur_;
  P tmpF2532;
  P valueF2531;
  P iF2530;
  P specF2529;
  P firstQF2528;
  P tmpF2527;
  P tmpF2526;
  P x_1402F2525;
  P x_1403F2524;
  P x_1404F2523;
  P namesF2522;
  P namesF2521;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(recur_, 2);
  T1 = CALL1(1,VARREF(Yfun_names),x_);
  namesF2521 = T1;
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)40));
  T3 = CALL1(1,VARREF(Yfun_names),x_);
  namesF2522 = T3;
  T6 = fun_35;
  T7 = fun_36;
  T5 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T6,T7);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  x_1404F2523 = T4;
  T9 = CALL1(1,VARREF(Yfun_specs),x_);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  x_1403F2524 = T8;
  T11 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
  x_1402F2525 = T10;
  for (;;) {
    P a158_0,a158_1,a158_2;
  loop158:
    T16 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1404F2523);
    tmpF2526 = T16;
    if (tmpF2526 != YPfalse) {
      T17 = tmpF2526;
    } else {
      T19 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1403F2524);
      tmpF2527 = T19;
      if (tmpF2527 != YPfalse) {
        T20 = tmpF2527;
      } else {
        T21 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1402F2525);
        T20 = T21;
      }
      T18 = T20;
      T17 = T18;
    }
    T15 = T17;
    T14 = CALL1(1,VARREF(Ynot),T15);
    if (T14 != YPfalse) {
      T23 = CALL1(1,VARREF(YgooScolsScolYnow),x_1404F2523);
      firstQF2528 = T23;
      T25 = CALL1(1,VARREF(YgooScolsScolYnow),x_1403F2524);
      specF2529 = T25;
      T27 = CALL1(1,VARREF(YgooScolsScolYnow),x_1402F2525);
      iF2530 = T27;
      T28 = CALL1(1,VARREF(Ynot),firstQF2528);
      if (T28 != YPfalse) {
        T29 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
      } else {
      }
      T30 = CALL1(1,VARREF(YgooSmacrosYemptyQ),namesF2522);
      if (T30 != YPfalse) {
        T31 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,specF2529);
      } else {
        T33 = CALL2(1,VARREF(YgooSmacrosYelt),namesF2522,iF2530);
        T32 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T33);
        CALL3(1,VARREF(YgooSconditionsYmsg),port_,LITREF(lit_77),T32);
        CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,specF2529);
        T34 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
      }
      T36 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1404F2523);
      T37 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1403F2524);
      T38 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1402F2525);
      a158_0 = T36;
      a158_1 = T37;
      a158_2 = T38;
      x_1404F2523 = a158_0;
      x_1403F2524 = a158_1;
      x_1402F2525 = a158_2;
      goto loop158;
      T26 = T35;
      T24 = T26;
      T22 = T24;
      T13 = T22;
    } else {
      T13 = YPfalse;
    }
    break;
  }
  T12 = T13;
  T40 = CALL1(1,VARREF(Yfun_val),x_);
  valueF2531 = T40;
  T43 = CALL1(1,VARREF(Ynot),valueF2531);
  tmpF2532 = T43;
  if (tmpF2532 != YPfalse) {
    T44 = tmpF2532;
  } else {
    T45 = CALL2(1,VARREF(YgooSmacrosYEE),valueF2531,VARREF(YLanyG));
    T44 = T45;
  }
  T42 = T44;
  T41 = CALL1(1,VARREF(Ynot),T42);
  if (T41 != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),port_,LITREF(lit_78));
    T46 = CALL2(1,VARREF(YgooSioSwriteYwrite_value_type),port_,valueF2531);
  } else {
  }
  T47 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
  T39 = T47;
  T2 = T39;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_fun_guts_38) {
  P port_,x_,name_,recur_;
  P tmpF2534;
  P nameF2533;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(name_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_81));
  CALL2(1,VARREF(YgooSioSportYputs),port_,name_);
  T1 = CALL1(1,VARREF(Yfun_name),x_);
  nameF2533 = T1;
  tmpF2534 = nameF2533;
  if (tmpF2534 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
    T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF2533);
    T3 = CALL2(1,VARREF(YgooSioSportYputs),port_,T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
  CALL3(1,VARREF(YgooSioSwriteYwrite_params),port_,x_,recur_);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_82));
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_39) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_fun_guts),port_,x_,LITREF(lit_84),recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_40) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_fun_guts),port_,x_,LITREF(lit_86),recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_41) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T1 = CALL1(1,VARREF(Ysrc_loc_line),x_);
  T2 = CALL1(1,VARREF(Ysrc_loc_file),x_);
  T0 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_88),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_42) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_90));
  T1 = CALL1(1,VARREF(Yclass_name),x_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
  CALL2(1,VARREF(YgooSioSportYputs),port_,T0);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_91));
  T3 = CALL1(1,VARREF(Yclass_parents),x_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yclass_name),T3);
  CALL2(1,recur_,T2,d_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_92));
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_recurring_write_43) {
  P port_,x_,d_,recur_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_94));
  T0 = CALL1(1,VARREF(Ytype_object),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_95));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_recurring_write_44) {
  P port_,x_,d_,recur_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_97));
  T0 = CALL1(1,VARREF(Ytype_class),x_);
  CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_98));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_45) {
  P t_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_46) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_100));
  T0 = FUNFAB(fun_45,1,port_);
  T1 = CALL1(1,VARREF(Yunion_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_102));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_47) {
  P t_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_48) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_104));
  T0 = FUNFAB(fun_47,1,port_);
  T1 = CALL1(1,VARREF(Yproduct_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_106));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_49) {
  P t_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_value_type_50) {
  P port_,x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_109));
  T0 = FUNFAB(fun_49,1,port_);
  T1 = CALL1(1,VARREF(Yproduct_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_111));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_write_value_type_51) {
  P port_,x_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_type_52) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T2 = CALL1(1,VARREF(Yclass_name),x_);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_type_53) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL4(1,VARREF(YgooSioSwriteYrecurring_write),port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recur_54) {
  P x_,d_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
  T0 = CALL4(1,VARREF(YgooSioSwriteYrecurring_write_type),FREEREF(0),x_,d_,FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_type_55) {
  P port_,x_;
  P recurF2535;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T1 = FUNSHELL(0,fun_recur_54,2);
  recurF2535 = T1;
  FUNINIT(recurF2535, 2,port_,recurF2535);
  T2 = CALL2(1,recurF2535,x_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_56) {
  P port_,x_,d_,recur_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_120));
  T0 = CALL1(1,VARREF(Yprop_getter),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_121));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_57) {
  P getterF2541;
  P propF2540;
  P iF2539;
  P tmpF2538;
  P x_1407F2537;
  P x_1408F2536;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  VARSET(YTreport_prop_unbound_errorsQT,YPfalse);
  T2 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T1 = CALL1(1,VARREF(YgooScolsScolYenum),T2);
  x_1408F2536 = T1;
  T4 = CALL1(1,VARREF(Yobject_props),FREEREF(0));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  x_1407F2537 = T3;
  for (;;) {
    P a159_0,a159_1;
  loop159:
    T9 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1408F2536);
    tmpF2538 = T9;
    if (tmpF2538 != YPfalse) {
      T10 = tmpF2538;
    } else {
      T11 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1407F2537);
      T10 = T11;
    }
    T8 = T10;
    T7 = CALL1(1,VARREF(Ynot),T8);
    if (T7 != YPfalse) {
      T13 = CALL1(1,VARREF(YgooScolsScolYnow),x_1408F2536);
      iF2539 = T13;
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_1407F2537);
      propF2540 = T15;
      T16 = CALL2(1,VARREF(YgooSmagYGE),iF2539,DYNREF(YgooSioSwriteYTmax_print_lengthT));
      if (T16 != YPfalse) {
        CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_125));
        T17 = CALL1(1,FREEREF(2),YPfalse);
      } else {
      }
      T19 = CALL1(1,VARREF(Yprop_getter),propF2540);
      getterF2541 = T19;
      CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)32));
      T20 = CALL1(1,VARREF(Yfun_name),getterF2541);
      CALL2(1,VARREF(YgooSioSwriteYemit),FREEREF(1),T20);
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_126));
      T21 = CALL1(1,getterF2541,FREEREF(0));
      CALL2(0,FREEREF(4),T21,FREEREF(3));
      T23 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1408F2536);
      T24 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1407F2537);
      a159_0 = T23;
      a159_1 = T24;
      x_1408F2536 = a159_0;
      x_1407F2537 = a159_1;
      goto loop159;
      T18 = T22;
      T14 = T18;
      T12 = T14;
      T6 = T12;
    } else {
      T6 = YPfalse;
    }
    break;
  }
  T5 = T6;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  P T0;
LINK_STACK();
  T0 = VARSET(YTreport_prop_unbound_errorsQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P blow_;
  P x_1406F2542;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(blow_, 0);
  x_1406F2542 = VARREF(YTreport_prop_unbound_errorsQT);
  T2 = FUNFAB(fun_57,5,FREEREF(0),FREEREF(1),blow_,FREEREF(2),FREEREF(3));
  T3 = FUNFAB(fun_58,1,x_1406F2542);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_60) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_123));
  T1 = CALL1(1,VARREF(Yclass_of),x_);
  T0 = CALL1(1,VARREF(Yclass_name),T1);
  CALL2(1,VARREF(YgooSioSwriteYemit),port_,T0);
  T2 = FUNFAB(fun_59,4,x_,port_,d_,recur_);
  with_exit(T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_127));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_recurring_write_61) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_129));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_62) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_131));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_arg_63) {
  P char_,class_;
  P tmpF2545;
  P argumentF2544;
  P current_indexF2543;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(char_, 0);
  ARG(class_, 1);
  T1 = BOXVAL(FREEREF(0));
  current_indexF2543 = T1;
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  BOXVAL(FREEREF(0)) = T2;
  T5 = CALL2(1,VARREF(YgooSmagYL),current_indexF2543,FREEREF(1));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yassert_error),LITREF(lit_136),FREEREF(2),FREEREF(3));
  } else {
  }
  T8 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(3),current_indexF2543);
  argumentF2544 = T8;
  T11 = CALL2(1,VARREF(YgooSmacrosYEE),class_,VARREF(YLanyG));
  tmpF2545 = T11;
  if (tmpF2545 != YPfalse) {
    T12 = tmpF2545;
  } else {
    T13 = CALL2(1,VARREF(YisaQ),argumentF2544,class_);
    T12 = T13;
  }
  T10 = T12;
  T9 = CALL1(1,VARREF(Ynot),T10);
  if (T9 != YPfalse) {
    T14 = CALL4(1,VARREF(Yassert_error),LITREF(lit_137),char_,class_,argumentF2544);
  } else {
  }
  T7 = argumentF2544;
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_64) {
  P c_;
  P x_1411F2547;
  P x_1410F2546;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48;
LINK_STACK();
  ARG(c_, 0);
  T1 = BOXVAL(FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmathYto_upper),c_);
    x_1410F2546 = T2;
    x_1411F2547 = VARREF(YgooSmacrosYEE);
    T5 = CALL2(1,x_1411F2547,x_1410F2546,YPchr((P)68));
    if (T5 != YPfalse) {
      T8 = CALL2(1,FREEREF(2),c_,VARREF(YLnumG));
      T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),T8);
      T6 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T7);
      T4 = T6;
    } else {
      T10 = CALL2(1,x_1411F2547,x_1410F2546,YPchr((P)66));
      if (T10 != YPfalse) {
        T13 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
        T12 = CALL2(1,VARREF(YgooSmathYnum_to_str),T13,YPint((P)2));
        T11 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T12);
        T9 = T11;
      } else {
        T15 = CALL2(1,x_1411F2547,x_1410F2546,YPchr((P)79));
        if (T15 != YPfalse) {
          T18 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
          T17 = CALL2(1,VARREF(YgooSmathYnum_to_str),T18,YPint((P)8));
          T16 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T17);
          T14 = T16;
        } else {
          T20 = CALL2(1,x_1411F2547,x_1410F2546,YPchr((P)88));
          if (T20 != YPfalse) {
            T23 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
            T22 = CALL2(1,VARREF(YgooSmathYnum_to_str),T23,YPint((P)16));
            T21 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T22);
            T19 = T21;
          } else {
            T25 = CALL2(1,x_1411F2547,x_1410F2546,YPchr((P)67));
            if (T25 != YPfalse) {
              T27 = CALL2(1,FREEREF(2),c_,VARREF(YLchrG));
              T26 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),T27);
              T24 = T26;
            } else {
              T29 = CALL2(1,x_1411F2547,x_1410F2546,YPchr((P)83));
              if (T29 != YPfalse) {
                T31 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                T30 = CALL2(1,VARREF(YgooSioSwriteYemit),FREEREF(1),T31);
                T28 = T30;
              } else {
                T33 = CALL2(1,x_1411F2547,x_1410F2546,YPchr((P)61));
                if (T33 != YPfalse) {
                  T35 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                  T34 = CALL2(1,VARREF(YgooSioSwriteYwrite),FREEREF(1),T35);
                  T32 = T34;
                } else {
                  T37 = CALL2(1,x_1411F2547,x_1410F2546,YPchr((P)84));
                  if (T37 != YPfalse) {
                    T39 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                    T38 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(1),T39);
                    T36 = T38;
                  } else {
                    T41 = CALL2(1,x_1411F2547,x_1410F2546,YPchr((P)37));
                    if (T41 != YPfalse) {
                      T42 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)37));
                      T40 = T42;
                    } else {
                      T43 = CALL3(1,VARREF(Yerror),LITREF(lit_139),c_,FREEREF(3));
                      T40 = T43;
                    }
                    T36 = T40;
                  }
                  T32 = T36;
                }
                T28 = T32;
              }
              T24 = T28;
            }
            T19 = T24;
          }
          T14 = T19;
        }
        T9 = T14;
      }
      T4 = T9;
    }
    T3 = T4;
    T44 = BOXVAL(FREEREF(0)) = YPfalse;
    T0 = T44;
  } else {
    T46 = CALL2(1,VARREF(YgooSmacrosYEE),c_,YPchr((P)37));
    if (T46 != YPfalse) {
      T47 = BOXVAL(FREEREF(0)) = YPtrue;
      T45 = T47;
    } else {
      T48 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),c_);
      T45 = T48;
    }
    T0 = T45;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_msg_65) {
  P port_,message_,arguments_;
  P argF2551;
  P num_argumentsF2550;
  P argument_indexF2549;
  P found_percentQF2548;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(arguments_, 2);
  found_percentQF2548 = YPfalse;
  found_percentQF2548 = BOXFAB(found_percentQF2548);
  check_type(YPint((P)0),VARREF(YLintG));
  argument_indexF2549 = YPint((P)0);
  argument_indexF2549 = BOXFAB(argument_indexF2549);
  T5 = CALL1(1,VARREF(YgooStypesYlen),arguments_);
  num_argumentsF2550 = T5;
  T6 = FUNSHELL(1,fun_arg_63,4);
  argF2551 = T6;
  FUNINIT(argF2551, 4,argument_indexF2549,num_argumentsF2550,message_,arguments_);
  T8 = FUNFAB(fun_64,4,found_percentQF2548,port_,argF2551,message_);
  T7 = CALL2(1,VARREF(YgooSmacrosYdo),T8,message_);
  T12 = BOXVAL(found_percentQF2548);
  T11 = CALL1(1,VARREF(Ynot),T12);
  T10 = CALL1(1,VARREF(Ynot),T11);
  if (T10 != YPfalse) {
    T13 = CALL2(1,VARREF(Yassert_error),LITREF(lit_140),message_);
    T9 = T13;
  } else {
    T9 = YPfalse;
  }
  T4 = T9;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_post_66) {
  P message_,arguments_;
  P T0;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
  T0 = CALL5(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSconditionsYmsg),YPfalse,VARREF(YgooSioSportYout),message_,arguments_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_maybe_pack_chars_67) {
  P UF2552;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = BOXVAL(FREEREF(1));
    UF2552 = T3;
    T7 = CALL1(1,VARREF(Ylst),LITREF(lit_146));
    T8 = CALL1(1,VARREF(Ylst),FREEREF(2));
    T10 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),FREEREF(0));
    T9 = CALL1(1,VARREF(Ylst),T10);
    T6 = CALL4(1,VARREF(YgooSmacrosYcat),T7,T8,T9,LITREF(lit_147));
    T5 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2552,T6);
    T4 = BOXVAL(FREEREF(1)) = T5;
    T11 = CALL1(1,VARREF(YgooScolsScolxYzapX),FREEREF(0));
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_arg_68) {
  P char_;
  P current_indexF2553;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(char_, 0);
  CALL0(1,FREEREF(0));
  T1 = BOXVAL(FREEREF(1));
  current_indexF2553 = T1;
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  BOXVAL(FREEREF(1)) = T2;
  T5 = CALL2(1,VARREF(YgooSmagYL),current_indexF2553,FREEREF(2));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yassert_error),LITREF(lit_149),FREEREF(3),FREEREF(4));
  } else {
  }
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(4),current_indexF2553);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P c_;
  P UF2563;
  P UF2562;
  P UF2561;
  P UF2560;
  P UF2559;
  P UF2558;
  P UF2557;
  P UF2556;
  P x_1413F2555;
  P x_1412F2554;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115;
LINK_STACK();
  ARG(c_, 0);
  T1 = BOXVAL(FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmathYto_upper),c_);
    x_1412F2554 = T2;
    x_1413F2555 = VARREF(YgooSmacrosYEE);
    T5 = CALL2(1,x_1413F2555,x_1412F2554,YPchr((P)68));
    if (T5 != YPfalse) {
      T7 = BOXVAL(FREEREF(1));
      UF2556 = T7;
      T11 = CALL1(1,VARREF(Ylst),LITREF(lit_146));
      T12 = CALL1(1,VARREF(Ylst),FREEREF(2));
      T15 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
      T17 = CALL1(1,FREEREF(3),c_);
      T16 = CALL1(1,VARREF(Ylst),T17);
      T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,LITREF(lit_147));
      T13 = CALL1(1,VARREF(Ylst),T14);
      T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,LITREF(lit_147));
      T9 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2556,T10);
      T8 = BOXVAL(FREEREF(1)) = T9;
      T6 = T8;
      T4 = T6;
    } else {
      T19 = CALL2(1,x_1413F2555,x_1412F2554,YPchr((P)66));
      if (T19 != YPfalse) {
        T21 = BOXVAL(FREEREF(1));
        UF2557 = T21;
        T25 = CALL1(1,VARREF(Ylst),LITREF(lit_146));
        T26 = CALL1(1,VARREF(Ylst),FREEREF(2));
        T29 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
        T31 = CALL1(1,FREEREF(3),c_);
        T30 = CALL1(1,VARREF(Ylst),T31);
        T32 = CALL1(1,VARREF(Ylst),YPint((P)2));
        T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T32,LITREF(lit_147));
        T27 = CALL1(1,VARREF(Ylst),T28);
        T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,T27,LITREF(lit_147));
        T23 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2557,T24);
        T22 = BOXVAL(FREEREF(1)) = T23;
        T20 = T22;
        T18 = T20;
      } else {
        T34 = CALL2(1,x_1413F2555,x_1412F2554,YPchr((P)79));
        if (T34 != YPfalse) {
          T36 = BOXVAL(FREEREF(1));
          UF2558 = T36;
          T40 = CALL1(1,VARREF(Ylst),LITREF(lit_146));
          T41 = CALL1(1,VARREF(Ylst),FREEREF(2));
          T44 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
          T46 = CALL1(1,FREEREF(3),c_);
          T45 = CALL1(1,VARREF(Ylst),T46);
          T47 = CALL1(1,VARREF(Ylst),YPint((P)8));
          T43 = CALL4(1,VARREF(YgooSmacrosYcat),T44,T45,T47,LITREF(lit_147));
          T42 = CALL1(1,VARREF(Ylst),T43);
          T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T42,LITREF(lit_147));
          T38 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2558,T39);
          T37 = BOXVAL(FREEREF(1)) = T38;
          T35 = T37;
          T33 = T35;
        } else {
          T49 = CALL2(1,x_1413F2555,x_1412F2554,YPchr((P)88));
          if (T49 != YPfalse) {
            T51 = BOXVAL(FREEREF(1));
            UF2559 = T51;
            T55 = CALL1(1,VARREF(Ylst),LITREF(lit_146));
            T56 = CALL1(1,VARREF(Ylst),FREEREF(2));
            T59 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
            T61 = CALL1(1,FREEREF(3),c_);
            T60 = CALL1(1,VARREF(Ylst),T61);
            T62 = CALL1(1,VARREF(Ylst),YPint((P)16));
            T58 = CALL4(1,VARREF(YgooSmacrosYcat),T59,T60,T62,LITREF(lit_147));
            T57 = CALL1(1,VARREF(Ylst),T58);
            T54 = CALL4(1,VARREF(YgooSmacrosYcat),T55,T56,T57,LITREF(lit_147));
            T53 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2559,T54);
            T52 = BOXVAL(FREEREF(1)) = T53;
            T50 = T52;
            T48 = T50;
          } else {
            T64 = CALL2(1,x_1413F2555,x_1412F2554,YPchr((P)67));
            if (T64 != YPfalse) {
              T66 = BOXVAL(FREEREF(1));
              UF2560 = T66;
              T70 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
              T71 = CALL1(1,VARREF(Ylst),FREEREF(2));
              T73 = CALL2(1,FREEREF(3),c_,VARREF(YLchrG));
              T72 = CALL1(1,VARREF(Ylst),T73);
              T69 = CALL4(1,VARREF(YgooSmacrosYcat),T70,T71,T72,LITREF(lit_147));
              T68 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2560,T69);
              T67 = BOXVAL(FREEREF(1)) = T68;
              T65 = T67;
              T63 = T65;
            } else {
              T75 = CALL2(1,x_1413F2555,x_1412F2554,YPchr((P)83));
              if (T75 != YPfalse) {
                T77 = BOXVAL(FREEREF(1));
                UF2561 = T77;
                T81 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
                T82 = CALL1(1,VARREF(Ylst),FREEREF(2));
                T84 = CALL1(1,FREEREF(3),c_);
                T83 = CALL1(1,VARREF(Ylst),T84);
                T80 = CALL4(1,VARREF(YgooSmacrosYcat),T81,T82,T83,LITREF(lit_147));
                T79 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2561,T80);
                T78 = BOXVAL(FREEREF(1)) = T79;
                T76 = T78;
                T74 = T76;
              } else {
                T86 = CALL2(1,x_1413F2555,x_1412F2554,YPchr((P)61));
                if (T86 != YPfalse) {
                  T88 = BOXVAL(FREEREF(1));
                  UF2562 = T88;
                  T92 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
                  T93 = CALL1(1,VARREF(Ylst),FREEREF(2));
                  T95 = CALL1(1,FREEREF(3),c_);
                  T94 = CALL1(1,VARREF(Ylst),T95);
                  T91 = CALL4(1,VARREF(YgooSmacrosYcat),T92,T93,T94,LITREF(lit_147));
                  T90 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2562,T91);
                  T89 = BOXVAL(FREEREF(1)) = T90;
                  T87 = T89;
                  T85 = T87;
                } else {
                  T97 = CALL2(1,x_1413F2555,x_1412F2554,YPchr((P)84));
                  if (T97 != YPfalse) {
                    T99 = BOXVAL(FREEREF(1));
                    UF2563 = T99;
                    T103 = CALL1(1,VARREF(Ylst),LITREF(lit_116));
                    T104 = CALL1(1,VARREF(Ylst),FREEREF(2));
                    T106 = CALL1(1,FREEREF(3),c_);
                    T105 = CALL1(1,VARREF(Ylst),T106);
                    T102 = CALL4(1,VARREF(YgooSmacrosYcat),T103,T104,T105,LITREF(lit_147));
                    T101 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2563,T102);
                    T100 = BOXVAL(FREEREF(1)) = T101;
                    T98 = T100;
                    T96 = T98;
                  } else {
                    T108 = CALL2(1,x_1413F2555,x_1412F2554,YPchr((P)37));
                    if (T108 != YPfalse) {
                      T109 = CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(4),YPchr((P)37));
                      T107 = T109;
                    } else {
                      T110 = CALL3(1,VARREF(Yerror),LITREF(lit_153),c_,FREEREF(5));
                      T107 = T110;
                    }
                    T96 = T107;
                  }
                  T85 = T96;
                }
                T74 = T85;
              }
              T63 = T74;
            }
            T48 = T63;
          }
          T33 = T48;
        }
        T18 = T33;
      }
      T4 = T18;
    }
    T3 = T4;
    T111 = BOXVAL(FREEREF(0)) = YPfalse;
    T0 = T111;
  } else {
    T113 = CALL2(1,VARREF(YgooSmacrosYEE),c_,YPchr((P)37));
    if (T113 != YPfalse) {
      T114 = BOXVAL(FREEREF(0)) = YPtrue;
      T112 = T114;
    } else {
      T115 = CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(4),c_);
      T112 = T115;
    }
    T0 = T112;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSwriteYpe_msg) {
  P port_expr_,message_,args_;
  P exprsF2572;
  P argF2571;
  P maybe_pack_charsF2570;
  P packer_F2569;
  P portF2568;
  P charsF2567;
  P num_argsF2566;
  P arg_indexF2565;
  P found_percentQF2564;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(port_expr_, 0);
  ARG(message_, 1);
  ARG(args_, 2);
  found_percentQF2564 = YPfalse;
  found_percentQF2564 = BOXFAB(found_percentQF2564);
  check_type(YPint((P)0),VARREF(YLintG));
  arg_indexF2565 = YPint((P)0);
  arg_indexF2565 = BOXFAB(arg_indexF2565);
  T5 = CALL1(1,VARREF(YgooStypesYlen),args_);
  num_argsF2566 = T5;
  T7 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  charsF2567 = T7;
  T9 = CALL0(1,VARREF(YgooSmacrosYgensym));
  portF2568 = T9;
  T12 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F2569 = T12;
  packer_F2569 = BOXFAB(packer_F2569);
  T14 = FUNSHELL(1,fun_maybe_pack_chars_67,3);
  maybe_pack_charsF2570 = T14;
  T15 = FUNSHELL(1,fun_arg_68,5);
  argF2571 = T15;
  FUNINIT(maybe_pack_charsF2570, 3,charsF2567,packer_F2569,portF2568);
  FUNINIT(argF2571, 5,maybe_pack_charsF2570,arg_indexF2565,num_argsF2566,message_,args_);
  T16 = FUNFAB(fun_69,6,found_percentQF2564,packer_F2569,portF2568,argF2571,charsF2567,message_);
  CALL2(1,VARREF(YgooSmacrosYdo),T16,message_);
  T17 = CALL0(1,maybe_pack_charsF2570);
  T19 = BOXVAL(packer_F2569);
  T18 = CALL1(1,VARREF(YgooSpackerYpacker_res),T19);
  T11 = T18;
  exprsF2572 = T11;
  T22 = BOXVAL(found_percentQF2564);
  T21 = CALL1(1,VARREF(Ynot),T22);
  T20 = CALL1(1,VARREF(Ynot),T21);
  if (T20 != YPfalse) {
    T23 = CALL2(1,VARREF(Yassert_error),LITREF(lit_154),message_);
  } else {
  }
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
  T30 = CALL1(1,VARREF(Ylst),portF2568);
  T31 = CALL1(1,VARREF(Ylst),port_expr_);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,LITREF(lit_147));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T27 = CALL2(1,VARREF(YgooSmacrosYcat),T28,LITREF(lit_147));
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,exprsF2572,LITREF(lit_147));
  T10 = T24;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1417_71) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_160),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  P return_;
  P x_1416F2583;
  P x_1416F2582;
  P x_1416F2581;
  P x_1416F2580;
  P x_1416F2579;
  P x_1416F2578;
  P argsF2577;
  P messageF2576;
  P portF2575;
  P x_1416F2574;
  P x_1417F2573;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1417_71,2);
  x_1417F2573 = T1;
  FUNINIT(x_1417F2573, 2,FREEREF(0),return_);
  x_1416F2574 = FREEREF(0);
  portF2575 = YPfalse;
  portF2575 = BOXFAB(portF2575);
  messageF2576 = YPfalse;
  messageF2576 = BOXFAB(messageF2576);
  argsF2577 = YPfalse;
  argsF2577 = BOXFAB(argsF2577);
  T9 = CALL2(1,VARREF(YisaQ),x_1416F2574,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1416F2574,LITREF(lit_160),x_1417F2573);
    x_1416F2578 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1416F2578,x_1417F2573);
    BOXVAL(portF2575) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1416F2578);
    x_1416F2579 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1416F2579,x_1417F2573);
    BOXVAL(messageF2576) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1416F2579);
    x_1416F2580 = T17;
    BOXVAL(argsF2577) = x_1416F2580;
    x_1416F2581 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1416F2581,x_1417F2573);
    x_1416F2582 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1416F2582,x_1417F2573);
    T22 = CALL1(1,VARREF(Ytail),x_1416F2581);
    x_1416F2583 = T22;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1416F2583,x_1417F2573);
    T19 = T23;
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1417F2573,LITREF(lit_161),x_1416F2574);
  }
  T27 = BOXVAL(messageF2576);
  T26 = CALL2(1,VARREF(YisaQ),T27,VARREF(YLstrG));
  if (T26 != YPfalse) {
    T29 = BOXVAL(portF2575);
    T30 = BOXVAL(messageF2576);
    T31 = BOXVAL(argsF2577);
    T28 = CALL3(1,VARREF(YgooSioSwriteYpe_msg),T29,T30,T31);
    T25 = T28;
  } else {
    T33 = CALL1(1,VARREF(Ylst),LITREF(lit_132));
    T35 = BOXVAL(portF2575);
    T34 = CALL1(1,VARREF(Ylst),T35);
    T37 = BOXVAL(messageF2576);
    T36 = CALL1(1,VARREF(Ylst),T37);
    T38 = BOXVAL(argsF2577);
    T32 = CALL5(1,VARREF(YgooSmacrosYcat),T33,T34,T36,T38,LITREF(lit_147));
    T25 = T32;
  }
  T7 = T25;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_72,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_74) {
  P T0,T1,T2,T3;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_out_portG),LITREF(lit_14));
  BOXVAL(FREEREF(0)) = T0;
  T1 = BOXVAL(FREEREF(0));
  CALL5(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSconditionsYmsg),YPfalse,T1,FREEREF(1),FREEREF(2));
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(1,VARREF(YgooSioSportYport_contents),T3);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_75) {
  P tmpF2584;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  T1 = BOXVAL(FREEREF(0));
  tmpF2584 = T1;
  if (tmpF2584 != YPfalse) {
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

FUNCODEDEF(YgooSconditionsYmsg_to_str) {
  P message_,arguments_;
  P portF2585;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
  portF2585 = YPfalse;
  portF2585 = BOXFAB(portF2585);
  T3 = FUNFAB(fun_74,3,portF2585,message_,arguments_);
  T4 = FUNFAB(fun_75,1,portF2585);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSioSwriteYsay) {
  P port_,args_;
  P iF2587;
  P limF2586;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(port_, 0);
  NARGS(args_, 1);
  T1 = CALL1(1,VARREF(YgooStypesYlen),args_);
  limF2586 = T1;
  iF2587 = YPint((P)0);
  for (;;) {
    P a160_0;
  loop160:
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),iF2587,limF2586);
    T5 = CALL1(1,VARREF(Ynot),T6);
    if (T5 != YPfalse) {
      T8 = CALL2(1,VARREF(YgooScolsScolYlow_elt),args_,iF2587);
      T7 = CALL1(1,VARREF(YgooSmathYto_str),T8);
      CALL2(1,VARREF(YgooSioSportYputs),port_,T7);
      T10 = CALL2(1,VARREF(YgooSmathYA),iF2587,YPint((P)1));
      a160_0 = T10;
      iF2587 = a160_0;
      goto loop160;
      T4 = T9;
    } else {
      T4 = YPfalse;
    }
    break;
  }
  T3 = T4;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YgooSioSwriteY___main_0___() {
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
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206,T207;
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220,T221,T222,T223;
  P T224,T225;
DEFCREGS();
  DYNDEFSET(YgooSioSwriteYTmax_print_depthT,YPint((P)4));
  DYNDEFSET(YgooSioSwriteYTmax_print_lengthT,YPint((P)12));
  lit_0 = YPPsym((P)"as-binding-name");
  lit_1 = YPPlist(1,YPPsym((P)"name"));
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_binding_name_0 = YPmet(FUNCODEREF(fun_as_binding_name_0),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(21));
  T2 = VARREF_OR(YgooSioSwriteYas_binding_name,YPfalse);
  T3 = fun_as_binding_name_0;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YgooSioSwriteYas_binding_name,T1);
  lit_2 = YPPsym((P)"do-emit");
  lit_3 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T4 = YPsig(LITREF(lit_3),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_emit_1 = YPmet(FUNCODEREF(fun_do_emit_1),LITREF(lit_2),T4,ENVNUL,PNUL,sloc(24));
  T6 = VARREF_OR(YgooSioSwriteYdo_emit,YPfalse);
  T7 = fun_do_emit_1;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YgooSioSwriteYdo_emit,T5);
  lit_4 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T8 = YPsig(LITREF(lit_4),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_emit_2 = YPmet(FUNCODEREF(fun_do_emit_2),LITREF(lit_2),T8,ENVNUL,PNUL,sloc(27));
  T10 = VARREF_OR(YgooSioSwriteYdo_emit,YPfalse);
  T11 = fun_do_emit_2;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T11);
  VARSET(YgooSioSwriteYdo_emit,T9);
  lit_5 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T12 = YPsig(LITREF(lit_5),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_emit_3 = YPmet(FUNCODEREF(fun_do_emit_3),LITREF(lit_2),T12,ENVNUL,PNUL,sloc(30));
  T14 = VARREF_OR(YgooSioSwriteYdo_emit,YPfalse);
  T15 = fun_do_emit_3;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YgooSioSwriteYdo_emit,T13);
  lit_6 = YPPsym((P)"emit");
  lit_7 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_8 = YPPsym((P)"recur");
  lit_9 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"d"));
  lit_10 = YPsb((P)"*");
  T17 = YPsig(LITREF(lit_9),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_4 = YPmet(FUNCODEREF(fun_recur_4),LITREF(lit_8),T17,ENVNUL,PNUL,sloc(34));
  T16 = YPsig(LITREF(lit_7),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_emit_5 = YPmet(FUNCODEREF(fun_emit_5),LITREF(lit_6),T16,ENVNUL,PNUL,sloc(33));
  T19 = VARREF_OR(YgooSioSwriteYemit,YPfalse);
  T20 = fun_emit_5;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T20);
  VARSET(YgooSioSwriteYemit,T18);
  lit_11 = YPPsym((P)"write-to-string");
  lit_12 = YPPlist(1,YPPsym((P)"x"));
  lit_13 = Ynil;
  lit_14 = YPsb((P)"");
  T23 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T23,ENVNUL,PNUL,sloc(40));
  T22 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T22,ENVNUL,PNUL,sloc(40));
  T21 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_write_to_string_8 = YPmet(FUNCODEREF(fun_write_to_string_8),LITREF(lit_11),T21,ENVNUL,PNUL,sloc(39));
  T25 = VARREF_OR(YgooSioSwriteYwrite_to_string,YPfalse);
  T26 = fun_write_to_string_8;
  T24 = XCALL2(1,VARREF(YPdefine_method),T25,T26);
  VARSET(YgooSioSwriteYwrite_to_string,T24);
  lit_15 = YPPsym((P)"write");
  lit_16 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_17 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"d"));
  lit_18 = YPsb((P)"*");
  T28 = YPsig(LITREF(lit_17),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_9 = YPmet(FUNCODEREF(fun_recur_9),LITREF(lit_8),T28,ENVNUL,PNUL,sloc(43));
  T27 = YPsig(LITREF(lit_16),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_10 = YPmet(FUNCODEREF(fun_write_10),LITREF(lit_15),T27,ENVNUL,PNUL,sloc(42));
  T30 = VARREF_OR(YgooSioSwriteYwrite,YPfalse);
  T31 = fun_write_10;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T31);
  VARSET(YgooSioSwriteYwrite,T29);
  lit_19 = YPPsym((P)"writeln");
  lit_20 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T32 = YPsig(LITREF(lit_20),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_writeln_11 = YPmet(FUNCODEREF(fun_writeln_11),LITREF(lit_19),T32,ENVNUL,PNUL,sloc(48));
  T34 = VARREF_OR(YgooSioSwriteYwriteln,YPfalse);
  T35 = fun_writeln_11;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T35);
  VARSET(YgooSioSwriteYwriteln,T33);
  lit_21 = YPPsym((P)"recurring-write");
  lit_22 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_23 = YPsb((P)"()");
  T36 = YPsig(LITREF(lit_22),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_12 = YPmet(FUNCODEREF(fun_recurring_write_12),LITREF(lit_21),T36,ENVNUL,PNUL,sloc(51));
  T38 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T39 = fun_recurring_write_12;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T39);
  VARSET(YgooSioSwriteYrecurring_write,T37);
  lit_24 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_25 = YPsb((P)"$$");
  lit_26 = YPsb((P)"(");
  lit_27 = YPsb((P)")");
  T40 = YPsig(LITREF(lit_24),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLflatG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_13 = YPmet(FUNCODEREF(fun_recurring_write_13),LITREF(lit_21),T40,ENVNUL,PNUL,sloc(56));
  T42 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T43 = fun_recurring_write_13;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T43);
  VARSET(YgooSioSwriteYrecurring_write,T41);
  lit_28 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_29 = YPsb((P)"#(");
  lit_30 = YPsb((P)")");
  T44 = YPsig(LITREF(lit_28),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLtupG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_14 = YPmet(FUNCODEREF(fun_recurring_write_14),LITREF(lit_21),T44,ENVNUL,PNUL,sloc(60));
  T46 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T47 = fun_recurring_write_14;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T47);
  VARSET(YgooSioSwriteYrecurring_write,T45);
  lit_31 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_32 = YPsb((P)"#[");
  lit_33 = YPsb((P)"]");
  T48 = YPsig(LITREF(lit_31),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSvecYLvecG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_15 = YPmet(FUNCODEREF(fun_recurring_write_15),LITREF(lit_21),T48,ENVNUL,PNUL,sloc(63));
  T50 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T51 = fun_recurring_write_15;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T51);
  VARSET(YgooSioSwriteYrecurring_write,T49);
  lit_34 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T52 = YPsig(LITREF(lit_34),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSmapYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_16 = YPmet(FUNCODEREF(fun_recurring_write_16),LITREF(lit_21),T52,ENVNUL,PNUL,sloc(66));
  T54 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T55 = fun_recurring_write_16;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T55);
  VARSET(YgooSioSwriteYrecurring_write,T53);
  lit_35 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_36 = YPPsym((P)"t");
  lit_37 = YPPsym((P)"f");
  T56 = YPsig(LITREF(lit_35),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_17 = YPmet(FUNCODEREF(fun_recurring_write_17),LITREF(lit_21),T56,ENVNUL,PNUL,sloc(69));
  T58 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T59 = fun_recurring_write_17;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T59);
  VARSET(YgooSioSwriteYrecurring_write,T57);
  lit_38 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T60 = YPsig(LITREF(lit_38),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsymG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_18 = YPmet(FUNCODEREF(fun_recurring_write_18),LITREF(lit_21),T60,ENVNUL,PNUL,sloc(74));
  T62 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T63 = fun_recurring_write_18;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T63);
  VARSET(YgooSioSwriteYrecurring_write,T61);
  lit_39 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_40 = YPsb((P)"&0x");
  T64 = YPsig(LITREF(lit_39),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlocG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_19 = YPmet(FUNCODEREF(fun_recurring_write_19),LITREF(lit_21),T64,ENVNUL,PNUL,sloc(77));
  T66 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T67 = fun_recurring_write_19;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T67);
  VARSET(YgooSioSwriteYrecurring_write,T65);
  lit_41 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_42 = YPsb((P)"<num>");
  T68 = YPsig(LITREF(lit_41),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLnumG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_20 = YPmet(FUNCODEREF(fun_recurring_write_20),LITREF(lit_21),T68,ENVNUL,PNUL,sloc(81));
  T70 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T71 = fun_recurring_write_20;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T71);
  VARSET(YgooSioSwriteYrecurring_write,T69);
  lit_43 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T72 = YPsig(LITREF(lit_43),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_21 = YPmet(FUNCODEREF(fun_recurring_write_21),LITREF(lit_21),T72,ENVNUL,PNUL,sloc(86));
  T74 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T75 = fun_recurring_write_21;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T75);
  VARSET(YgooSioSwriteYrecurring_write,T73);
  lit_44 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T76 = YPsig(LITREF(lit_44),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_22 = YPmet(FUNCODEREF(fun_recurring_write_22),LITREF(lit_21),T76,ENVNUL,PNUL,sloc(89));
  T78 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T79 = fun_recurring_write_22;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T79);
  VARSET(YgooSioSwriteYrecurring_write,T77);
  lit_45 = YPPsym((P)"write-boolean");
  lit_46 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"mumble"));
  T80 = YPsig(LITREF(lit_46),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_boolean_23 = YPmet(FUNCODEREF(fun_write_boolean_23),LITREF(lit_45),T80,ENVNUL,PNUL,sloc(92));
  T82 = VARREF_OR(YgooSioSwriteYwrite_boolean,YPfalse);
  T83 = fun_write_boolean_23;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T83);
  VARSET(YgooSioSwriteYwrite_boolean,T81);
  lit_47 = YPPsym((P)"write-number");
  lit_48 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T84 = YPsig(LITREF(lit_48),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_number_24 = YPmet(FUNCODEREF(fun_write_number_24),LITREF(lit_47),T84,ENVNUL,PNUL,sloc(96));
  T86 = VARREF_OR(YgooSioSwriteYwrite_number,YPfalse);
  T87 = fun_write_number_24;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T87);
  VARSET(YgooSioSwriteYwrite_number,T85);
  lit_49 = YPPsym((P)"write-char-literal");
  lit_50 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_51 = YPsb((P)"#\\");
  T88 = YPsig(LITREF(lit_50),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_char_literal_25 = YPmet(FUNCODEREF(fun_write_char_literal_25),LITREF(lit_49),T88,ENVNUL,PNUL,sloc(99));
  T90 = VARREF_OR(YgooSioSwriteYwrite_char_literal,YPfalse);
  T91 = fun_write_char_literal_25;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T91);
  VARSET(YgooSioSwriteYwrite_char_literal,T89);
  lit_52 = YPPsym((P)"character-name");
  lit_53 = YPPlist(1,YPPsym((P)"char"));
  T92 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_character_name_26 = YPmet(FUNCODEREF(fun_character_name_26),LITREF(lit_52),T92,ENVNUL,PNUL,sloc(106));
  T94 = VARREF_OR(YgooSioSwriteYcharacter_name,YPfalse);
  T95 = fun_character_name_26;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T95);
  VARSET(YgooSioSwriteYcharacter_name,T93);
  lit_54 = YPPsym((P)"write-string-literal");
  lit_55 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T96 = YPsig(LITREF(lit_55),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_string_literal_27 = YPmet(FUNCODEREF(fun_write_string_literal_27),LITREF(lit_54),T96,ENVNUL,PNUL,sloc(110));
  T98 = VARREF_OR(YgooSioSwriteYwrite_string_literal,YPfalse);
  T99 = fun_write_string_literal_27;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T99);
  VARSET(YgooSioSwriteYwrite_string_literal,T97);
  lit_56 = YPPsym((P)"write-list");
  lit_57 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_58 = YPsb((P)" ...");
  T100 = YPsig(LITREF(lit_57),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_list_28 = YPmet(FUNCODEREF(fun_write_list_28),LITREF(lit_56),T100,ENVNUL,PNUL,sloc(122));
  T102 = VARREF_OR(YgooSioSwriteYwrite_list,YPfalse);
  T103 = fun_write_list_28;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T103);
  VARSET(YgooSioSwriteYwrite_list,T101);
  lit_59 = YPPsym((P)"quotation?");
  lit_60 = YPPlist(1,YPPsym((P)"x"));
  lit_61 = YPPsym((P)"quote");
  T104 = YPsig(LITREF(lit_60),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_quotationQ_29 = YPmet(FUNCODEREF(fun_quotationQ_29),LITREF(lit_59),T104,ENVNUL,PNUL,sloc(137));
  T106 = VARREF_OR(YgooSioSwriteYquotationQ,YPfalse);
  T107 = fun_quotationQ_29;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T107);
  VARSET(YgooSioSwriteYquotationQ,T105);
  lit_62 = YPPsym((P)"write-flat");
  lit_63 = YPPlist(6,YPPsym((P)"port"),YPPsym((P)"prefix"),YPPsym((P)"x"),YPPsym((P)"suffix"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_64 = YPsb((P)" ...");
  T108 = YPsig(LITREF(lit_63),YPPlist(6,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLflatG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_write_flat_30 = YPmet(FUNCODEREF(fun_write_flat_30),LITREF(lit_62),T108,ENVNUL,PNUL,sloc(143));
  T110 = VARREF_OR(YgooSioSwriteYwrite_flat,YPfalse);
  T111 = fun_write_flat_30;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T111);
  VARSET(YgooSioSwriteYwrite_flat,T109);
  lit_65 = YPPsym((P)"write-map");
  lit_66 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_67 = YPsb((P)"#<");
  lit_68 = YPPlist(1,YPPsym((P)"blow"));
  lit_69 = YPsb((P)" ...");
  lit_70 = YPsb((P)": ");
  T113 = YPsig(LITREF(lit_68),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T113,ENVNUL,PNUL,sloc(161));
  T112 = YPsig(LITREF(lit_66),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSmapYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_map_32 = YPmet(FUNCODEREF(fun_write_map_32),LITREF(lit_65),T112,ENVNUL,PNUL,sloc(158));
  T115 = VARREF_OR(YgooSioSwriteYwrite_map,YPfalse);
  T116 = fun_write_map_32;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T116);
  VARSET(YgooSioSwriteYwrite_map,T114);
  lit_71 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_72 = YPsb((P)"#{In-port}");
  T117 = YPsig(LITREF(lit_71),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLin_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_33 = YPmet(FUNCODEREF(fun_recurring_write_33),LITREF(lit_21),T117,ENVNUL,PNUL,sloc(171));
  T119 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T120 = fun_recurring_write_33;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T120);
  VARSET(YgooSioSwriteYrecurring_write,T118);
  lit_73 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_74 = YPsb((P)"#{Out-port}");
  T121 = YPsig(LITREF(lit_73),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLout_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_34 = YPmet(FUNCODEREF(fun_recurring_write_34),LITREF(lit_21),T121,ENVNUL,PNUL,sloc(174));
  T123 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T124 = fun_recurring_write_34;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T124);
  VARSET(YgooSioSwriteYrecurring_write,T122);
  lit_75 = YPPsym((P)"write-params");
  lit_76 = YPPlist(3,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"recur"));
  lit_77 = YPsb((P)"(%s ");
  lit_78 = YPsb((P)" => ");
  T127 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T127,ENVNUL,PNUL,sloc(183));
  T126 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T126,ENVNUL,PNUL,sloc(183));
  T125 = YPsig(LITREF(lit_76),YPPlist(3,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_write_params_37 = YPmet(FUNCODEREF(fun_write_params_37),LITREF(lit_75),T125,ENVNUL,PNUL,sloc(179));
  T129 = VARREF_OR(YgooSioSwriteYwrite_params,YPfalse);
  T130 = fun_write_params_37;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T130);
  VARSET(YgooSioSwriteYwrite_params,T128);
  lit_79 = YPPsym((P)"write-fun-guts");
  lit_80 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"name"),YPPsym((P)"recur"));
  lit_81 = YPsb((P)"#{");
  lit_82 = YPsb((P)"}");
  T131 = YPsig(LITREF(lit_80),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_fun_guts_38 = YPmet(FUNCODEREF(fun_write_fun_guts_38),LITREF(lit_79),T131,ENVNUL,PNUL,sloc(195));
  T133 = VARREF_OR(YgooSioSwriteYwrite_fun_guts,YPfalse);
  T134 = fun_write_fun_guts_38;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T134);
  VARSET(YgooSioSwriteYwrite_fun_guts,T132);
  lit_83 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_84 = YPsb((P)"Gen");
  T135 = YPsig(LITREF(lit_83),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLgenG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_39 = YPmet(FUNCODEREF(fun_recurring_write_39),LITREF(lit_21),T135,ENVNUL,PNUL,sloc(205));
  T137 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T138 = fun_recurring_write_39;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T138);
  VARSET(YgooSioSwriteYrecurring_write,T136);
  lit_85 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_86 = YPsb((P)"Met");
  T139 = YPsig(LITREF(lit_85),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLmetG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_40 = YPmet(FUNCODEREF(fun_recurring_write_40),LITREF(lit_21),T139,ENVNUL,PNUL,sloc(208));
  T141 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T142 = fun_recurring_write_40;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T142);
  VARSET(YgooSioSwriteYrecurring_write,T140);
  lit_87 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_88 = YPsb((P)"<SRC-LOC %= %s>");
  T143 = YPsig(LITREF(lit_87),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsrc_locG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_41 = YPmet(FUNCODEREF(fun_recurring_write_41),LITREF(lit_21),T143,ENVNUL,PNUL,sloc(211));
  T145 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T146 = fun_recurring_write_41;
  T144 = XCALL2(1,VARREF(YPdefine_method),T145,T146);
  VARSET(YgooSioSwriteYrecurring_write,T144);
  lit_89 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_90 = YPsb((P)"#{Class ");
  lit_91 = YPsb((P)" ");
  lit_92 = YPsb((P)"}");
  T147 = YPsig(LITREF(lit_89),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_42 = YPmet(FUNCODEREF(fun_recurring_write_42),LITREF(lit_21),T147,ENVNUL,PNUL,sloc(214));
  T149 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T150 = fun_recurring_write_42;
  T148 = XCALL2(1,VARREF(YPdefine_method),T149,T150);
  VARSET(YgooSioSwriteYrecurring_write,T148);
  lit_93 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_94 = YPsb((P)"#{T= ");
  lit_95 = YPsb((P)"}");
  T151 = YPsig(LITREF(lit_93),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsingletonG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_43 = YPmet(FUNCODEREF(fun_recurring_write_43),LITREF(lit_21),T151,ENVNUL,PNUL,sloc(221));
  T153 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T154 = fun_recurring_write_43;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T154);
  VARSET(YgooSioSwriteYrecurring_write,T152);
  lit_96 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_97 = YPsb((P)"#{T< ");
  lit_98 = YPsb((P)"}");
  T155 = YPsig(LITREF(lit_96),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsubclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_44 = YPmet(FUNCODEREF(fun_recurring_write_44),LITREF(lit_21),T155,ENVNUL,PNUL,sloc(226));
  T157 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T158 = fun_recurring_write_44;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T158);
  VARSET(YgooSioSwriteYrecurring_write,T156);
  lit_99 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_100 = YPsb((P)"#{T+");
  lit_101 = YPPlist(1,YPPsym((P)"t"));
  lit_102 = YPsb((P)"}");
  T160 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T160,ENVNUL,PNUL,sloc(233));
  T159 = YPsig(LITREF(lit_99),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLunionG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_46 = YPmet(FUNCODEREF(fun_recurring_write_46),LITREF(lit_21),T159,ENVNUL,PNUL,sloc(231));
  T162 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T163 = fun_recurring_write_46;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T163);
  VARSET(YgooSioSwriteYrecurring_write,T161);
  lit_103 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_104 = YPsb((P)"#{T*");
  lit_105 = YPPlist(1,YPPsym((P)"t"));
  lit_106 = YPsb((P)"}");
  T165 = YPsig(LITREF(lit_105),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T165,ENVNUL,PNUL,sloc(238));
  T164 = YPsig(LITREF(lit_103),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLproductG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_48 = YPmet(FUNCODEREF(fun_recurring_write_48),LITREF(lit_21),T164,ENVNUL,PNUL,sloc(236));
  T167 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T168 = fun_recurring_write_48;
  T166 = XCALL2(1,VARREF(YPdefine_method),T167,T168);
  VARSET(YgooSioSwriteYrecurring_write,T166);
  lit_107 = YPPsym((P)"write-value-type");
  lit_108 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_109 = YPsb((P)"(tup");
  lit_110 = YPPlist(1,YPPsym((P)"t"));
  lit_111 = YPsb((P)")");
  T170 = YPsig(LITREF(lit_110),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T170,ENVNUL,PNUL,sloc(243));
  T169 = YPsig(LITREF(lit_108),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_value_type_50 = YPmet(FUNCODEREF(fun_write_value_type_50),LITREF(lit_107),T169,ENVNUL,PNUL,sloc(241));
  T172 = VARREF_OR(YgooSioSwriteYwrite_value_type,YPfalse);
  T173 = fun_write_value_type_50;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T173);
  VARSET(YgooSioSwriteYwrite_value_type,T171);
  lit_112 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T174 = YPsig(LITREF(lit_112),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_value_type_51 = YPmet(FUNCODEREF(fun_write_value_type_51),LITREF(lit_107),T174,ENVNUL,PNUL,sloc(246));
  T176 = VARREF_OR(YgooSioSwriteYwrite_value_type,YPfalse);
  T177 = fun_write_value_type_51;
  T175 = XCALL2(1,VARREF(YPdefine_method),T176,T177);
  VARSET(YgooSioSwriteYwrite_value_type,T175);
  lit_113 = YPPsym((P)"recurring-write-type");
  lit_114 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T178 = YPsig(LITREF(lit_114),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_52 = YPmet(FUNCODEREF(fun_recurring_write_type_52),LITREF(lit_113),T178,ENVNUL,PNUL,sloc(249));
  T180 = VARREF_OR(YgooSioSwriteYrecurring_write_type,YPfalse);
  T181 = fun_recurring_write_type_52;
  T179 = XCALL2(1,VARREF(YPdefine_method),T180,T181);
  VARSET(YgooSioSwriteYrecurring_write_type,T179);
  lit_115 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T182 = YPsig(LITREF(lit_115),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_53 = YPmet(FUNCODEREF(fun_recurring_write_type_53),LITREF(lit_113),T182,ENVNUL,PNUL,sloc(252));
  T184 = VARREF_OR(YgooSioSwriteYrecurring_write_type,YPfalse);
  T185 = fun_recurring_write_type_53;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T185);
  VARSET(YgooSioSwriteYrecurring_write_type,T183);
  lit_116 = YPPsym((P)"write-type");
  lit_117 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_118 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"d"));
  T187 = YPsig(LITREF(lit_118),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_54 = YPmet(FUNCODEREF(fun_recur_54),LITREF(lit_8),T187,ENVNUL,PNUL,sloc(256));
  T186 = YPsig(LITREF(lit_117),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_type_55 = YPmet(FUNCODEREF(fun_write_type_55),LITREF(lit_116),T186,ENVNUL,PNUL,sloc(255));
  T189 = VARREF_OR(YgooSioSwriteYwrite_type,YPfalse);
  T190 = fun_write_type_55;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T190);
  VARSET(YgooSioSwriteYwrite_type,T188);
  lit_119 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_120 = YPsb((P)"#{Prop ");
  lit_121 = YPsb((P)"}");
  T191 = YPsig(LITREF(lit_119),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLpropG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_56 = YPmet(FUNCODEREF(fun_recurring_write_56),LITREF(lit_21),T191,ENVNUL,PNUL,sloc(259));
  T193 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T194 = fun_recurring_write_56;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T194);
  VARSET(YgooSioSwriteYrecurring_write,T192);
  lit_122 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_123 = YPsb((P)"#{");
  lit_124 = YPPlist(1,YPPsym((P)"blow"));
  lit_125 = YPsb((P)" ...");
  lit_126 = YPsb((P)": ");
  lit_127 = YPsb((P)"}");
  T198 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T198,ENVNUL,PNUL,sloc(268));
  T197 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T197,ENVNUL,PNUL,sloc(268));
  T196 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T196,ENVNUL,PNUL,sloc(267));
  T195 = YPsig(LITREF(lit_122),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_60 = YPmet(FUNCODEREF(fun_recurring_write_60),LITREF(lit_21),T195,ENVNUL,PNUL,sloc(264));
  T200 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T201 = fun_recurring_write_60;
  T199 = XCALL2(1,VARREF(YPdefine_method),T200,T201);
  VARSET(YgooSioSwriteYrecurring_write,T199);
  lit_128 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_129 = YPsb((P)"#{End-of-file}");
  T204 = XCALL0(1,VARREF(YgooSmathYeof_object));
  T203 = XCALL1(1,VARREF(YgooStypesYtE),T204);
  T202 = YPsig(LITREF(lit_128),YPPlist(4,VARREF(YgooSioSportYLout_portG),T203,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_61 = YPmet(FUNCODEREF(fun_recurring_write_61),LITREF(lit_21),T202,ENVNUL,PNUL,sloc(279));
  T206 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T207 = fun_recurring_write_61;
  T205 = XCALL2(1,VARREF(YPdefine_method),T206,T207);
  VARSET(YgooSioSwriteYrecurring_write,T205);
  lit_130 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_131 = YPsb((P)"nul");
  T209 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(Ynul));
  T208 = YPsig(LITREF(lit_130),YPPlist(4,VARREF(YgooSioSportYLout_portG),T209,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_62 = YPmet(FUNCODEREF(fun_recurring_write_62),LITREF(lit_21),T208,ENVNUL,PNUL,sloc(282));
  T211 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T212 = fun_recurring_write_62;
  T210 = XCALL2(1,VARREF(YPdefine_method),T211,T212);
  VARSET(YgooSioSwriteYrecurring_write,T210);
  lit_132 = YPPsym((P)"msg");
  lit_133 = YPPlist(3,YPPsym((P)"port"),YPPsym((P)"message"),YPPsym((P)"arguments"));
  lit_134 = YPPsym((P)"arg");
  lit_135 = YPPlist(2,YPPsym((P)"char"),YPPsym((P)"class"));
  lit_136 = YPsb((P)"Too few arguments for msg string %=: %=");
  lit_137 = YPsb((P)"Msg argument for directive '%%%c' not of class %t: %=");
  lit_138 = YPPlist(1,YPPsym((P)"c"));
  lit_139 = YPsb((P)"Invalid msg directive '%s' in \"%s\"");
  lit_140 = YPsb((P)"Incomplete msg directive in \"%s\"");
  T215 = YPsig(LITREF(lit_135),YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_arg_63 = YPmet(FUNCODEREF(fun_arg_63),LITREF(lit_134),T215,ENVNUL,PNUL,sloc(289));
  T214 = YPsig(LITREF(lit_138),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T214,ENVNUL,PNUL,sloc(300));
  T213 = YPsig(LITREF(lit_133),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_msg_65 = YPmet(FUNCODEREF(fun_msg_65),LITREF(lit_132),T213,ENVNUL,PNUL,sloc(285));
  T217 = VARREF_OR(YgooSconditionsYmsg,YPfalse);
  T218 = fun_msg_65;
  T216 = XCALL2(1,VARREF(YPdefine_method),T217,T218);
  VARSET(YgooSconditionsYmsg,T216);
  lit_141 = YPPsym((P)"post");
  lit_142 = YPPlist(2,YPPsym((P)"message"),YPPsym((P)"arguments"));
  T221 = YPsig(LITREF(lit_142),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T220 = fun_post_66 = YPmet(FUNCODEREF(fun_post_66),LITREF(lit_141),T221,ENVNUL,PNUL,sloc(322));
  T224 = VARREF_OR(YgooSioSwriteYpost,YPfalse);
  T225 = fun_post_66;
  T223 = XCALL2(1,VARREF(YPdefine_method),T224,T225);
  T222 = VARSET(YgooSioSwriteYpost,T223);
  T219 = T222;
  return T219;
}

P YgooSioSwriteY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
DEFCREGS();
  lit_143 = YPPsym((P)"pe-msg");
  lit_144 = YPPlist(3,YPPsym((P)"port-expr"),YPPsym((P)"message"),YPPsym((P)"args"));
  lit_145 = YPPsym((P)"maybe-pack-chars");
  lit_146 = YPPsym((P)"puts");
  lit_147 = Ynil;
  lit_148 = YPPlist(1,YPPsym((P)"char"));
  lit_149 = YPsb((P)"Too few arguments for msg string %=: %=");
  lit_150 = YPPlist(1,YPPsym((P)"c"));
  lit_151 = YPPsym((P)"num-to-str");
  lit_152 = YPPsym((P)"put");
  lit_153 = YPsb((P)"Invalid msg directive '%s' in \"%s\"");
  lit_154 = YPsb((P)"Incomplete msg directive in \"%s\"");
  lit_155 = YPPsym((P)"let");
  T3 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_maybe_pack_chars_67 = YPmet(FUNCODEREF(fun_maybe_pack_chars_67),LITREF(lit_145),T3,ENVNUL,PNUL,sloc(340));
  T2 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_arg_68 = YPmet(FUNCODEREF(fun_arg_68),LITREF(lit_134),T2,ENVNUL,PNUL,sloc(341));
  T1 = YPsig(LITREF(lit_150),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T1,ENVNUL,PNUL,sloc(348));
  T0 = YPsig(LITREF(lit_144),YPPlist(3,VARREF(YLanyG),VARREF(YLstrG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSioSwriteYpe_msg = YPmet(FUNCODEREF(YgooSioSwriteYpe_msg),LITREF(lit_143),T0,ENVNUL,PNUL,sloc(329));
  T4 = YgooSioSwriteYpe_msg;
  VARSET(YgooSioSwriteYpe_msg,T4);
  lit_156 = YPPlist(1,YPPsym((P)"exp"));
  lit_157 = YPPlist(1,YPPsym((P)"return"));
  lit_158 = YPPsym((P)"x-1417");
  lit_159 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_160 = YPPsym((P)"msg*");
  lit_161 = YPsb((P)"Match Pattern Failure");
  T7 = YPsig(LITREF(lit_159),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1417_71 = YPmet(FUNCODEREF(fun_x_1417_71),LITREF(lit_158),T7,ENVNUL,PNUL,YPfalse);
  T6 = YPsig(LITREF(lit_157),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(LITREF(lit_156),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T5,ENVNUL,PNUL,YPfalse);
  T8 = fun_73;
  YPmacro(YPPsym((P)"goo/io/write"),YPPsym((P)"msg*"),T8);
  lit_162 = YPPsym((P)"msg-to-str");
  lit_163 = YPPlist(2,YPPsym((P)"message"),YPPsym((P)"arguments"));
  T11 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T11,ENVNUL,PNUL,sloc(381));
  T10 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T10,ENVNUL,PNUL,sloc(381));
  T9 = YPsig(LITREF(lit_163),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSconditionsYmsg_to_str = YPmet(FUNCODEREF(YgooSconditionsYmsg_to_str),LITREF(lit_162),T9,ENVNUL,PNUL,sloc(380));
  T12 = YgooSconditionsYmsg_to_str;
  VARSET(YgooSconditionsYmsg_to_str,T12);
  lit_164 = YPPsym((P)"say");
  lit_165 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"args"));
  T13 = YPsig(LITREF(lit_165),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSwriteYsay = YPmet(FUNCODEREF(YgooSioSwriteYsay),LITREF(lit_164),T13,ENVNUL,PNUL,sloc(385));
  T14 = YgooSioSwriteYsay;
  VARSET(YgooSioSwriteYsay,T14);
  T15 = YPfalse;
  return T15;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSlst;
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
  {&module_info_gooSpacker},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooSioSport},
  {&module_info_gooScols},
  {&module_info_gooSruntime},
  {&module_info_gooSconditions},
  {&module_info_gooSioSread},
  {&module_info_gooSpacker},
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
  {"atan2", &module_info_gooSmath, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
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
  {"$char-long-names", &module_info_gooSioSread, NULL},
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
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"packed", &module_info_gooSpacker, NULL},
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
  {"packing", &module_info_gooSpacker, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
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
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
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
  {"read-delimited-list", &module_info_gooSioSread, NULL},
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
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
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
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
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
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
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
  {"col", &module_info_gooScolsScol, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
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
  {"floor", &module_info_gooSmath, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
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
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
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
  {"type-error-type", &module_info_gooSconditions, NULL},
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
  {"fab", &module_info_gooScolsScol, NULL},
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
  {"get-standard-read-macro", &module_info_gooSioSread, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"t<", &module_info_gooStypes, NULL},
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
  {"packer-res", &module_info_gooSpacker, NULL},
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
  {"as", &module_info_gooStypes, NULL},
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
  {"pack", &module_info_gooSpacker, NULL},
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
  {"packing-in", &module_info_gooSpacker, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
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
  {"<condition>", &module_info_gooSconditions, NULL},
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
  {"mod", &module_info_gooSmath, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
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
  {"set-standard-read-macro!", &module_info_gooSioSread, NULL},
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
  {"write-fun-guts", CVAR, &YgooSioSwriteYwrite_fun_guts},
  {"write-type", CVAR, &YgooSioSwriteYwrite_type},
  {"recurring-write-type", CVAR, &YgooSioSwriteYrecurring_write_type},
  {"quotation?", CVAR, &YgooSioSwriteYquotationQ},
  {"write", CVAR, &YgooSioSwriteYwrite},
  {"character-name", CVAR, &YgooSioSwriteYcharacter_name},
  {"as-binding-name", CVAR, &YgooSioSwriteYas_binding_name},
  {"write-boolean", CVAR, &YgooSioSwriteYwrite_boolean},
  {"write-value-type", CVAR, &YgooSioSwriteYwrite_value_type},
  {"write-map", CVAR, &YgooSioSwriteYwrite_map},
  {"---main-0---", PVAR, NULL},
  {"say", CVAR, &YgooSioSwriteYsay},
  {"write-to-string", CVAR, &YgooSioSwriteYwrite_to_string},
  {"*max-print-length*", DVAR, &YgooSioSwriteYTmax_print_lengthT},
  {"write-char-literal", CVAR, &YgooSioSwriteYwrite_char_literal},
  {"recurring-write", CVAR, &YgooSioSwriteYrecurring_write},
  {"pe-msg", CVAR, &YgooSioSwriteYpe_msg},
  {"write-list", CVAR, &YgooSioSwriteYwrite_list},
  {"write-params", CVAR, &YgooSioSwriteYwrite_params},
  {"emit", CVAR, &YgooSioSwriteYemit},
  {"post", CVAR, &YgooSioSwriteYpost},
  {"writeln", CVAR, &YgooSioSwriteYwriteln},
  {"msg*", PVAR, NULL},
  {"write-number", CVAR, &YgooSioSwriteYwrite_number},
  {"---main-1---", PVAR, NULL},
  {"*max-print-depth*", DVAR, &YgooSioSwriteYTmax_print_depthT},
  {"do-emit", CVAR, &YgooSioSwriteYdo_emit},
  {"write-string-literal", CVAR, &YgooSioSwriteYwrite_string_literal},
  {"write-flat", CVAR, &YgooSioSwriteYwrite_flat},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"write-type", NULL},
  {"write", NULL},
  {"writeln", NULL},
  {"say", NULL},
  {"write-to-string", NULL},
  {"recurring-write", NULL},
  {"pe-msg", NULL},
  {"*max-print-length*", NULL},
  {"msg-to-str", NULL},
  {"emit", NULL},
  {"post", NULL},
  {"msg*", NULL},
  {"*max-print-depth*", NULL},
  {"msg", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSioSwrite;
MODULE_INFO module_info_gooSioSwrite = {
  "goo/io/write",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSpacker (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooSioSport (void);
extern void load_module_gooScols (void);
extern void load_module_gooSruntime (void);
extern void load_module_gooSconditions (void);
extern void load_module_gooSioSread (void);
extern void load_module_gooSpacker (void);

/* EXPRESSION: */

extern void load_module_gooSioSwrite (void);

void load_module_gooSioSwrite (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSpacker();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooSioSport();
  load_module_gooScols();
  load_module_gooSruntime();
  load_module_gooSconditions();
  load_module_gooSioSread();
  load_module_gooSpacker();

  (P)YgooSioSwriteY___main_0___();
  (P)YgooSioSwriteY___main_1___();

}

/* END OF GENERATED CODE. */
