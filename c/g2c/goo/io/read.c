/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/io/read");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/io/read */

EXT(Yclass_children,"goo/boot","class-children");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
DEF(YgooSioSreadYsub_read,"goo/io/read","sub-read");
DEF(YgooSioSreadYreading_error,"goo/io/read","reading-error");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
DEF(YgooSioSreadYparse_token,"goo/io/read","parse-token");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLbignumG,"goo/boot","<bignum>");
DEF(YgooSioSreadYreverse_list_Gstring,"goo/io/read","reverse-list->string");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSmathYK,"goo/math","|");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
DEF(YgooSioSreadYDvert_sym,"goo/io/read","$vert-sym");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
DEF(YgooSioSreadYgobble_line,"goo/io/read","gobble-line");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
DEF(YgooSioSreadYdefine_sharp_macro,"goo/io/read","define-sharp-macro");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(Yfun_info,"goo/boot","fun-info");
DEF(YgooSioSreadYsub_read_list,"goo/io/read","sub-read-list");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
DEF(YgooSioSreadYgobble_nested_comment,"goo/io/read","gobble-nested-comment");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Ynot,"goo/boot","not");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
DEF(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
DEF(YgooSioSreadYDclose_curly,"goo/io/read","$close-curly");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
DEF(YgooSioSreadYset_standard_syntaxX,"goo/io/read","set-standard-syntax!");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
DEF(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
DEF(YgooSioSreadYTsharp_macrosT,"goo/io/read","*sharp-macros*");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YLunionG,"goo/boot","<union>");
DEF(YgooSioSreadYDclose_bracket,"goo/io/read","$close-bracket");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DEF(YgooSioSreadYtoken_message,"goo/io/read","token-message");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
DEF(YgooSioSreadYsub_read_curlies,"goo/io/read","sub-read-curlies");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YOOEE,"goo/boot","@@==");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YOnew,"goo/boot","@new");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YLboxG,"goo/boot","<box>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSchrYeof_object,"goo/chr","eof-object");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
DEF(YgooSioSreadYpreferred_case,"goo/io/read","preferred-case");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooSlogYE,"goo/log","=");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ynew,"goo/boot","new");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmathYround_to,"goo/math","round-to");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
DEF(YgooSioSreadYsub_read_carefully,"goo/io/read","sub-read-carefully");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
DEF(YgooSioSreadYbs_sym,"goo/io/read","bs-sym");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
DEF(YgooSioSreadYsub_read_backslash,"goo/io/read","sub-read-backslash");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
DEF(YgooSioSreadYsub_read_vertical,"goo/io/read","sub-read-vertical");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
DEF(YgooSioSreadYreader_tokenQ,"goo/io/read","reader-token?");
EXT(YPtrue,"goo/boot","%true");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSioSportYport_filename,"goo/io/port","port-filename");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
DEF(YgooSioSreadYDstrange_symbol_names,"goo/io/read","$strange-symbol-names");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
DEF(YgooSioSreadYsub_read_token,"goo/io/read","sub-read-token");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
DEF(YgooSioSreadYread_string_literal,"goo/io/read","read-string-literal");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
DEF(YgooSioSreadYwarn,"goo/io/read","warn");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Yhead,"goo/boot","head");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YLstrG,"goo/boot","<str>");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
DEF(YgooSioSreadYTread_terminatingQ_vectorT,"goo/io/read","*read-terminating?-vector*");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
DEF(YgooSioSreadYsub_read_brackets,"goo/io/read","sub-read-brackets");
EXT(YPsnul,"goo/boot","%snul");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yerror,"goo/boot","error");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
DEF(YgooSioSreadYLreader_tokenG,"goo/io/read","<reader-token>");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DEF(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YgooSioSreadYTread_dispatch_vectorT,"goo/io/read","*read-dispatch-vector*");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooScolsSlstYlstT,"goo/cols/lst","lst*");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
DEF(YgooSioSreadYDstring_escape_chars,"goo/io/read","$string-escape-chars");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
DEF(YgooSioSreadYmake_reader_token,"goo/io/read","make-reader-token");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSlogYas_log,"goo/log","as-log");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YPfalse,"goo/boot","%false");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSmathYS,"goo/math","/");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYexp,"goo/math","exp");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
DEF(YgooSioSreadYsub_read_constituent,"goo/io/read","sub-read-constituent");
EXT(YOlit,"goo/boot","@lit");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YOallQ,"goo/boot","@all?");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YtT,"goo/boot","t*");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YgooSioSreadYDclose_paren,"goo/io/read","$close-paren");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YgooSioSreadYsub_read_list_eof_error,"goo/io/read","sub-read-list-eof-error");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYlogn,"goo/math","logn");
DEF(YgooSioSreadYflush_whitespace,"goo/io/read","flush-whitespace");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YOrevX,"goo/boot","@rev!");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(Yrange_error,"goo/boot","range-error");
DEF(YgooSioSreadYDvert_proxy,"goo/io/read","$vert-proxy");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
DEF(YgooSioSreadYsub_read_seq,"goo/io/read","sub-read-seq");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YOmap,"goo/boot","@map");
EXT(YgooSmacrosYpair,"goo/macros","pair");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_34);
DEFLIT(lit_126);
DEFLIT(lit_106);
DEFLIT(lit_85);
DEFLIT(lit_36);
DEFLIT(lit_122);
DEFLIT(lit_65);
DEFLIT(lit_31);
DEFLIT(lit_42);
DEFLIT(lit_39);
DEFLIT(lit_46);
DEFLIT(lit_48);
DEFLIT(lit_13);
DEFLIT(lit_118);
DEFLIT(lit_70);
DEFLIT(lit_90);
DEFLIT(lit_21);
DEFLIT(lit_43);
DEFLIT(lit_18);
DEFLIT(lit_108);
DEFLIT(lit_57);
DEFLIT(lit_83);
DEFLIT(lit_104);
DEFLIT(lit_120);
DEFLIT(lit_94);
DEFLIT(lit_79);
DEFLIT(lit_113);
DEFLIT(lit_7);
DEFLIT(lit_5);
DEFLIT(lit_66);
DEFLIT(lit_33);
DEFLIT(lit_107);
DEFLIT(lit_69);
DEFLIT(lit_73);
DEFLIT(lit_58);
DEFLIT(lit_98);
DEFLIT(lit_78);
DEFLIT(lit_81);
DEFLIT(lit_27);
DEFLIT(lit_91);
DEFLIT(lit_84);
DEFLIT(lit_74);
DEFLIT(lit_67);
DEFLIT(lit_1);
DEFLIT(lit_30);
DEFLIT(lit_62);
DEFLIT(lit_101);
DEFLIT(lit_96);
DEFLIT(lit_64);
DEFLIT(lit_49);
DEFLIT(lit_28);
DEFLIT(lit_40);
DEFLIT(lit_102);
DEFLIT(lit_4);
DEFLIT(lit_22);
DEFLIT(lit_25);
DEFLIT(lit_45);
DEFLIT(lit_50);
DEFLIT(lit_116);
DEFLIT(lit_88);
DEFLIT(lit_87);
DEFLIT(lit_11);
DEFLIT(lit_23);
DEFLIT(lit_2);
DEFLIT(lit_38);
DEFLIT(lit_92);
DEFLIT(lit_8);
DEFLIT(lit_17);
DEFLIT(lit_103);
DEFLIT(lit_44);
DEFLIT(lit_100);
DEFLIT(lit_51);
DEFLIT(lit_105);
DEFLIT(lit_14);
DEFLIT(lit_121);
DEFLIT(lit_29);
DEFLIT(lit_60);
DEFLIT(lit_47);
DEFLIT(lit_77);
DEFLIT(lit_75);
DEFLIT(lit_82);
DEFLIT(lit_35);
DEFLIT(lit_3);
DEFLIT(lit_63);
DEFLIT(lit_9);
DEFLIT(lit_111);
DEFLIT(lit_86);
DEFLIT(lit_52);
DEFLIT(lit_24);
DEFLIT(lit_19);
DEFLIT(lit_12);
DEFLIT(lit_16);
DEFLIT(lit_110);
DEFLIT(lit_32);
DEFLIT(lit_68);
DEFLIT(lit_124);
DEFLIT(lit_0);
DEFLIT(lit_53);
DEFLIT(lit_59);
DEFLIT(lit_109);
DEFLIT(lit_119);
DEFLIT(lit_80);
DEFLIT(lit_95);
DEFLIT(lit_26);
DEFLIT(lit_76);
DEFLIT(lit_15);
DEFLIT(lit_89);
DEFLIT(lit_55);
DEFLIT(lit_123);
DEFLIT(lit_20);
DEFLIT(lit_125);
DEFLIT(lit_37);
DEFLIT(lit_112);
DEFLIT(lit_71);
DEFLIT(lit_10);
DEFLIT(lit_6);
DEFLIT(lit_97);
DEFLIT(lit_61);
DEFLIT(lit_56);
DEFLIT(lit_41);
DEFLIT(lit_99);
DEFLIT(lit_54);
DEFLIT(lit_72);
DEFLIT(lit_114);
DEFLIT(lit_93);
DEFLIT(lit_115);
DEFLIT(lit_117);

/* FUNCTIONS: */

LOCFOR(fun_read_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_read_from_string_3);
LOCFOR(fun_sub_read_carefully_4);
LOCFOR(fun_token_message_5);
LOCFOR(fun_make_reader_token_6);
LOCFOR(fun_reader_tokenQ_7);
LOCFOR(fun_sub_read_8);
LOCFOR(fun_9);
LOCFOR(fun_set_standard_syntaxX_10);
LOCFOR(fun_11);
LOCFOR(fun_12);
FUNFOR(YgooSioSreadYflush_whitespace);
FUNFOR(YgooSioSreadYread_delimited_list);
FUNFOR(YgooSioSreadYsub_read_constituent);
LOCFOR(fun_16);
LOCFOR(fun_set_standard_read_macroX_17);
LOCFOR(fun_get_standard_read_macro_18);
LOCFOR(fun_sub_read_vertical_19);
LOCFOR(fun_sub_read_backslash_20);
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
extern P YgooSioSreadY___main_0___ ();
extern P YgooSioSreadY___main_1___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_read_0) {
  P port_;
  P formF3680;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(port_, 0);
  LOOP_154: {
    T7 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
    formF3680 = T7;
    T2 = CALL1(1,VARREF(YgooSioSreadYreader_tokenQ),formF3680);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T0 = formF3680;
    } else {
      T4 = CALL2(1,VARREF(YgooSmacrosYEE),formF3680,VARREF(YgooSioSreadYDclose_paren));
      if (T4 != YPfalse) {
        T5 = CALL1(1,VARREF(YgooSioSreadYwarn),LITREF(lit_2));
        T3 = T5;
      } else {
        goto LOOP_154;
        T3 = T6;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_1) {
  P T0,T1,T2;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_in_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  T2 = BOXGET(FREEREF(0));
  T1 = CALL1(1,VARREF(YgooSconditionsYread),T2);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_2) {
  P T0,T1,T2,T3;
LINK_STACK();
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T3 = BOXGET(FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSioSportYclose),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_read_from_string_3) {
  P x_;
  P portF3681;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  portF3681 = YPfalse;
  portF3681 = BOXFAB(portF3681);
  T2 = FUNFAB(fun_1,2,portF3681,x_);
  T3 = FUNFAB(fun_2,1,portF3681);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_sub_read_carefully_4) {
  P port_;
  P formF3682;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(port_, 0);
  T7 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
  formF3682 = T7;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),formF3682);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_8));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooSioSreadYreader_tokenQ),formF3682);
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(Ytail),formF3682);
      T5 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,T6);
      T3 = T5;
    } else {
      T3 = formF3682;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_token_message_5) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSioSreadYtoken_message));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_make_reader_token_6) {
  P message_;
  P T0;
LINK_STACK();
  ARG(message_, 0);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSreadYLreader_tokenG),VARREF(YgooSioSreadYtoken_message),message_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reader_tokenQ_7) {
  P form_;
  P T0;
LINK_STACK();
  ARG(form_, 0);
  T0 = CALL2(1,VARREF(YisaQ),form_,VARREF(YgooSioSreadYLreader_tokenG));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sub_read_8) {
  P port_;
  P cF3683;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(port_, 0);
  T5 = CALL1(1,VARREF(YgooSioSportYget),port_);
  cF3683 = T5;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3683);
  if (T1 != YPfalse) {
    T0 = cF3683;
  } else {
    T4 = CALL1(1,VARREF(YgooSchrYchar_Gascii),cF3683);
    T3 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_dispatch_vectorT),T4);
    T2 = CALL2(1,T3,cF3683,port_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_9) {
  P c_,port_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T0 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_22),c_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_set_standard_syntaxX_10) {
  P char_,terminatingQ_,reader_;
  P T0,T1,T2;
LINK_STACK();
  ARG(char_, 0);
  ARG(terminatingQ_, 1);
  ARG(reader_, 2);
  T0 = CALL1(1,VARREF(YgooSchrYchar_Gascii),char_);
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),reader_,VARREF(YgooSioSreadYTread_dispatch_vectorT),T0);
  T2 = CALL1(1,VARREF(YgooSchrYchar_Gascii),char_);
  T1 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),terminatingQ_,VARREF(YgooSioSreadYTread_terminatingQ_vectorT),T2);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_11) {
  P c_,port_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T0 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_12) {
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
  P cF3684;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(port_, 0);
  T4 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF3684 = T4;
  T2 = CALL1(1,VARREF(YgooSchrYchar_Gascii),cF3684);
  T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),VARREF(YgooScolsSstrYascii_whitespaces),T2);
  if (T1 != YPfalse) {
    CALL1(1,VARREF(YgooSioSportYget),port_);
    T3 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
    T0 = T3;
  } else {
    T0 = cF3684;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYread_delimited_list) {
  P endchar_,port_;
  P UF3687;
  P cF3686;
  P retlistF3685;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(endchar_, 0);
  ARG(port_, 1);
  retlistF3685 = VARREF(Ynil);
  T11 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
  cF3686 = T11;
  LOOP_155: {
    P a155_0;
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),cF3686,endchar_);
    if (T2 != YPfalse) {
      CALL1(1,VARREF(YgooSioSportYget),port_);
      T4 = retlistF3685;
      T3 = CALL1(1,VARREF(YgooScolsSseqYrev),T4);
      T1 = T3;
    } else {
      T8 = retlistF3685;
      UF3687 = T8;
      T7 = CALL1(1,VARREF(YgooSconditionsYread),port_);
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),T7,UF3687);
      T5 = retlistF3685 = T6;
      T10 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
      a155_0 = T10;
      cF3686 = a155_0;
      goto LOOP_155;
      T1 = T9;
    }
  }
UNLINK_STACK();
  QRET(T1);
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

LOCCODEDEF(fun_16) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL3(1,VARREF(YgooSioSreadYset_standard_syntaxX),c_,YPfalse,VARREF(YgooSioSreadYsub_read_constituent));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_set_standard_read_macroX_17) {
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

LOCCODEDEF(fun_get_standard_read_macro_18) {
  P char_;
  P T0,T1;
LINK_STACK();
  ARG(char_, 0);
  T1 = CALL1(1,VARREF(YgooSchrYchar_Gascii),char_);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_dispatch_vectorT),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sub_read_vertical_19) {
  P c_,port_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T0 = CALL2(1,VARREF(YgooSioSreadYparse_token),LITREF(lit_42),port_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sub_read_backslash_20) {
  P c_,port_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T0 = CALL2(1,VARREF(YgooSioSreadYparse_token),LITREF(lit_45),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYsub_read_list_eof_error) {
  P port_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  T0 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_50));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_read_next_22) {
  P c_,prev_,line_,form_;
  P nextF3689;
  P prevF3688;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(c_, 0);
  ARG(prev_, 1);
  ARG(line_, 2);
  ARG(form_, 3);
  T19 = CALL2(1,VARREF(YgooSmacrosYEE),prev_,VARREF(YgooSioSreadYDvert_proxy));
  if (T19 != YPfalse) {
    T18 = VARREF(YgooSioSreadYDvert_sym);
  } else {
    T18 = prev_;
  }
  prevF3688 = T18;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),form_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSioSreadYsub_read_list_eof_error),FREEREF(0));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),form_,VARREF(YgooSioSreadYDclose_paren));
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,prevF3688);
      T3 = T5;
    } else {
      T7 = CALL2(1,VARREF(YgooSmacrosYEE),form_,VARREF(YgooSioSreadYDvert_sym));
      if (T7 != YPfalse) {
        T12 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),FREEREF(0));
        nextF3689 = T12;
        T10 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,nextF3689);
        T9 = CALL3(1,VARREF(YgooScolsSlstYline_pair),prevF3688,T10,line_);
        T11 = CALL2(1,VARREF(YgooSioSreadYsub_read_list),c_,FREEREF(0));
        T8 = CALL3(1,VARREF(YgooScolsSlstYline_pair),T9,T11,line_);
        T6 = T8;
      } else {
        if (YPtrue != YPfalse) {
          T16 = CALL1(1,VARREF(YgooSioSportYport_line),FREEREF(0));
          T17 = CALL1(1,VARREF(YgooSioSreadYsub_read),FREEREF(0));
          T15 = CALL4(1,FREEREF(1),c_,form_,T16,T17);
          T14 = CALL3(1,VARREF(YgooScolsSlstYline_pair),prevF3688,T15,line_);
          T13 = T14;
        } else {
          T13 = YPfalse;
        }
        T6 = T13;
      }
      T3 = T6;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sub_read_list_23) {
  P c_,p_;
  P read_nextF3692;
  P formF3691;
  P lineF3690;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(c_, 0);
  ARG(p_, 1);
  T10 = CALL1(1,VARREF(YgooSioSportYport_line),p_);
  lineF3690 = T10;
  T9 = CALL1(1,VARREF(YgooSioSreadYsub_read),p_);
  formF3691 = T9;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),formF3691);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSioSreadYsub_read_list_eof_error),p_);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),formF3691,VARREF(YgooSioSreadYDclose_paren));
    if (T4 != YPfalse) {
      T3 = Ynil;
    } else {
      if (YPtrue != YPfalse) {
        T8 = FUNSHELL(1,fun_read_next_22,2);
        read_nextF3692 = T8;
        FUNINIT(read_nextF3692, 2,p_,read_nextF3692);
        T7 = CALL1(1,VARREF(YgooSioSreadYsub_read),p_);
        T6 = CALL4(1,read_nextF3692,c_,formF3691,lineF3690,T7);
        T5 = T6;
      } else {
        T5 = YPfalse;
      }
      T3 = T5;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sub_read_seq_24) {
  P c_,e_,port_;
  P formF3693;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(c_, 0);
  ARG(e_, 1);
  ARG(port_, 2);
  T7 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
  formF3693 = T7;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),formF3693);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_57));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),formF3693,e_);
    if (T4 != YPfalse) {
      T3 = Ynil;
    } else {
      T6 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,e_,port_);
      T5 = CALL2(1,VARREF(YgooSmacrosYpair),formF3693,T6);
      T3 = T5;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sub_read_brackets_25) {
  P c_,port_;
  P x_1442F3696;
  P x_1441F3695;
  P formF3694;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T29 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,VARREF(YgooSioSreadYDclose_bracket),port_);
  formF3694 = T29;
  T28 = CALL1(1,VARREF(YgooStypesYlen),formF3694);
  x_1441F3695 = T28;
  x_1442F3696 = VARREF(YgooSmacrosYEE);
  T1 = CALL2(1,x_1442F3696,x_1441F3695,YPint((P)2));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
    T5 = CALL1(1,VARREF(YgooSmacrosY1st),formF3694);
    T4 = CALL1(1,VARREF(Ylst),T5);
    T7 = CALL1(1,VARREF(YgooSmacrosY2nd),formF3694);
    T6 = CALL1(1,VARREF(Ylst),T7);
    T2 = CALL4(1,VARREF(YgooSmacrosYcat),T3,T4,T6,LITREF(lit_61));
    T0 = T2;
  } else {
    T9 = CALL2(1,x_1442F3696,x_1441F3695,YPint((P)3));
    if (T9 != YPfalse) {
      T12 = CALL1(1,VARREF(YgooScolsSseqY3rd),formF3694);
      T11 = CALL2(1,VARREF(YgooSmacrosYEE),T12,LITREF(lit_62));
      if (T11 != YPfalse) {
        T14 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
        T16 = CALL1(1,VARREF(YgooSmacrosY1st),formF3694);
        T15 = CALL1(1,VARREF(Ylst),T16);
        T18 = CALL1(1,VARREF(YgooSmacrosY2nd),formF3694);
        T17 = CALL1(1,VARREF(Ylst),T18);
        T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T17,LITREF(lit_61));
        T10 = T13;
      } else {
        T20 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
        T22 = CALL1(1,VARREF(YgooSmacrosY1st),formF3694);
        T21 = CALL1(1,VARREF(Ylst),T22);
        T24 = CALL1(1,VARREF(YgooSmacrosY2nd),formF3694);
        T23 = CALL1(1,VARREF(Ylst),T24);
        T26 = CALL1(1,VARREF(YgooScolsSseqY3rd),formF3694);
        T25 = CALL1(1,VARREF(Ylst),T26);
        T19 = CALL5(1,VARREF(YgooSmacrosYcat),T20,T21,T23,T25,LITREF(lit_61));
        T10 = T19;
      }
      T8 = T10;
    } else {
      T27 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_65));
      T8 = T27;
    }
    T0 = T8;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sub_read_curlies_26) {
  P c_,port_;
  P slash_indexF3698;
  P formsF3697;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T10 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,VARREF(YgooSioSreadYDclose_curly),port_);
  formsF3697 = T10;
  T9 = CALL2(1,VARREF(YgooScolsSseqYpos),formsF3697,VARREF(YgooSioSreadYbs_sym));
  slash_indexF3698 = T9;
  if (slash_indexF3698 != YPfalse) {
    T2 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
    T4 = CALL3(1,VARREF(YgooScolsSseqYsub),formsF3697,YPint((P)0),slash_indexF3698);
    T3 = CALL1(1,VARREF(Ylst),T4);
    T6 = CALL2(1,VARREF(YgooSmathYA),slash_indexF3698,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooScolsSseqYsubT),formsF3697,T6);
    T1 = CALL4(1,VARREF(YgooSmacrosYcat),T2,T3,T5,LITREF(lit_61));
    T0 = T1;
  } else {
    T8 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
    T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,formsF3697,LITREF(lit_61));
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_27) {
  P c_,port_;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDclose_paren));
}

LOCCODEDEF(fun_28) {
  P c_,port_;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDclose_curly));
}

LOCCODEDEF(fun_29) {
  P c_,port_;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDclose_bracket));
}

LOCCODEDEF(fun_30) {
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

LOCCODEDEF(fun_31) {
  P c_,port_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T0 = CALL2(1,VARREF(Ylst),LITREF(lit_77),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_32) {
  P c_,port_;
  P keywordF3700;
  P nextF3699;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T7 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  nextF3699 = T7;
  T3 = CALL1(1,VARREF(YgooSchrYeof_objectQ),nextF3699);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_79));
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YgooSlogYE),nextF3699,YPchr((P)64));
    if (T6 != YPfalse) {
      CALL1(1,VARREF(YgooSioSportYget),port_);
      T5 = LITREF(lit_80);
    } else {
      T5 = LITREF(lit_81);
    }
    T2 = T5;
  }
  keywordF3700 = T2;
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T0 = CALL2(1,VARREF(Ylst),keywordF3700,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYread_string_literal) {
  P c_,port_;
  P ecF3706;
  P tmpF3705;
  P cF3704;
  P cF3703;
  P iF3702;
  P lF3701;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  lF3701 = Ynil;
  iF3702 = YPint((P)0);
  LOOP_156: {
    P a156_0,a156_1;
    T29 = CALL1(1,VARREF(YgooSioSportYget),port_);
    cF3703 = T29;
    T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3703);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_84));
      T0 = T2;
    } else {
      T4 = CALL2(1,VARREF(YgooSlogYE),cF3703,YPchr((P)92));
      if (T4 != YPfalse) {
        T22 = CALL1(1,VARREF(YgooSioSportYget),port_);
        cF3704 = T22;
        T6 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3704);
        if (T6 != YPfalse) {
          T7 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_85));
          T5 = T7;
        } else {
          T11 = CALL2(1,VARREF(YgooSlogYE),cF3704,YPchr((P)92));
          tmpF3705 = T11;
          if (tmpF3705 != YPfalse) {
            T9 = tmpF3705;
          } else {
            T10 = CALL2(1,VARREF(YgooSlogYE),cF3704,YPchr((P)34));
            T9 = T10;
          }
          if (T9 != YPfalse) {
            T13 = CALL2(1,VARREF(YgooSmacrosYpair),cF3704,lF3701);
            T14 = CALL2(1,VARREF(YgooSmathYA),iF3702,YPint((P)1));
            a156_0 = T13;
            a156_1 = T14;
            lF3701 = a156_0;
            iF3702 = a156_1;
            goto LOOP_156;
            T8 = T12;
          } else {
            T21 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF3704);
            T20 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYDstring_escape_chars),T21);
            ecF3706 = T20;
            if (ecF3706 != YPfalse) {
              T17 = CALL2(1,VARREF(YgooSmacrosYpair),ecF3706,lF3701);
              T18 = CALL2(1,VARREF(YgooSmathYA),iF3702,YPint((P)1));
              a156_0 = T17;
              a156_1 = T18;
              lF3701 = a156_0;
              iF3702 = a156_1;
              goto LOOP_156;
              T15 = T16;
            } else {
              T19 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_86),cF3704);
              T15 = T19;
            }
            T8 = T15;
          }
          T5 = T8;
        }
        T3 = T5;
      } else {
        T24 = CALL2(1,VARREF(YgooSlogYE),cF3703,YPchr((P)34));
        if (T24 != YPfalse) {
          T25 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),lF3701,iF3702);
          T23 = T25;
        } else {
          T27 = CALL2(1,VARREF(YgooSmacrosYpair),cF3703,lF3701);
          T28 = CALL2(1,VARREF(YgooSmathYA),iF3702,YPint((P)1));
          a156_0 = T27;
          a156_1 = T28;
          lF3701 = a156_0;
          iF3702 = a156_1;
          goto LOOP_156;
          T23 = T26;
        }
        T3 = T23;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_34) {
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

LOCCODEDEF(fun_gobble_line_35) {
  P port_;
  P cF3707;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(port_, 0);
  LOOP_157: {
    T5 = CALL1(1,VARREF(YgooSioSportYget),port_);
    cF3707 = T5;
    T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3707);
    if (T1 != YPfalse) {
      T0 = cF3707;
    } else {
      T3 = CALL2(1,VARREF(YgooSlogYE),cF3707,YPchr((P)10));
      if (T3 != YPfalse) {
        T2 = YPfalse;
      } else {
        goto LOOP_157;
        T2 = T4;
      }
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_define_sharp_macro_36) {
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

LOCCODEDEF(fun_37) {
  P c_,port_;
  P probeF3710;
  P cF3709;
  P cF3708;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T10 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF3708 = T10;
  T7 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3708);
  if (T7 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_93));
    T6 = T8;
  } else {
    T9 = CALL1(1,VARREF(YgooSchrYto_lower),cF3708);
    T6 = T9;
  }
  cF3709 = T6;
  T5 = CALL2(1,VARREF(YgooScolsSlstYassq),cF3709,VARREF(YgooSioSreadYTsharp_macrosT));
  probeF3710 = T5;
  if (probeF3710 != YPfalse) {
    T3 = CALL1(1,VARREF(Ytail),probeF3710);
    T2 = CALL1(1,VARREF(Yhead),T3);
    T1 = CALL2(1,T2,cF3709,port_);
    T0 = T1;
  } else {
    T4 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_94),cF3709);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_38) {
  P c_,port_;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_39) {
  P c_,port_;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_40) {
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
  P x_1444F3714;
  P x_1443F3713;
  P cF3712;
  P found_slashQF3711;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(port_, 0);
  found_slashQF3711 = YPfalse;
  LOOP_158: {
    P a158_0;
    T10 = CALL1(1,VARREF(YgooSioSportYget),port_);
    cF3712 = T10;
    T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3712);
    if (T1 != YPfalse) {
      T0 = cF3712;
    } else {
      x_1443F3713 = cF3712;
      x_1444F3714 = VARREF(YgooSmacrosYEE);
      T3 = CALL2(1,x_1444F3714,x_1443F3713,YPchr((P)47));
      if (T3 != YPfalse) {
        a158_0 = YPtrue;
        found_slashQF3711 = a158_0;
        goto LOOP_158;
        T2 = T4;
      } else {
        T6 = CALL2(1,x_1444F3714,x_1443F3713,YPchr((P)35));
        if (T6 != YPfalse) {
          if (found_slashQF3711 != YPfalse) {
            T7 = YPfalse;
          } else {
            a158_0 = YPfalse;
            found_slashQF3711 = a158_0;
            goto LOOP_158;
            T7 = T8;
          }
          T5 = T7;
        } else {
          a158_0 = YPfalse;
          found_slashQF3711 = a158_0;
          goto LOOP_158;
          T5 = T9;
        }
        T2 = T5;
      }
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_42) {
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

LOCCODEDEF(fun_43) {
  P c_,port_;
  P tempF3717;
  P nameF3716;
  P cF3715;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T16 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF3715 = T16;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3715);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_103));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooSchrYalphaQ),cF3715);
    if (T4 != YPfalse) {
      T14 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
      nameF3716 = T14;
      T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF3716);
      T7 = CALL1(1,VARREF(YgooStypesYlen),T8);
      T6 = CALL2(1,VARREF(YgooSlogYE),T7,YPint((P)1));
      if (T6 != YPfalse) {
        T5 = cF3715;
      } else {
        T13 = CALL2(1,VARREF(YgooScolsSlstYassq),nameF3716,VARREF(YgooSioSreadYDchar_long_names));
        tempF3717 = T13;
        if (tempF3717 != YPfalse) {
          T11 = CALL1(1,VARREF(Ytail),tempF3717);
          T10 = CALL1(1,VARREF(Yhead),T11);
          T9 = T10;
        } else {
          T12 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_104),nameF3716);
          T9 = T12;
        }
        T5 = T9;
      }
      T3 = T5;
    } else {
      T15 = CALL1(1,VARREF(YgooSioSportYget),port_);
      T3 = T15;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_44) {
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

LOCCODEDEF(fun_45) {
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

LOCCODEDEF(fun_46) {
  P c_,port_;
  P tmpF3719;
  P stringF3718;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T3 = CALL2(1,VARREF(YgooSioSreadYsub_read_token),YPchr((P)35),port_);
  stringF3718 = T3;
  T2 = CALL1(1,VARREF(YgooScolsSstrYstr_to_num),stringF3718);
  tmpF3719 = T2;
  if (tmpF3719 != YPfalse) {
    T0 = tmpF3719;
  } else {
    T1 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_108),stringF3718);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_47) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),c_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sub_read_token_48) {
  P c_,port_;
  P tmpF3723;
  P cF3722;
  P nF3721;
  P lF3720;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T13 = CALL1(1,VARREF(YgooSioSreadYpreferred_case),c_);
  T12 = CALL1(1,VARREF(Ylst),T13);
  lF3720 = T12;
  nF3721 = YPint((P)1);
  LOOP_159: {
    P a159_0,a159_1;
    T11 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
    cF3722 = T11;
    T4 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3722);
    tmpF3723 = T4;
    if (tmpF3723 != YPfalse) {
      T1 = tmpF3723;
    } else {
      T3 = CALL1(1,VARREF(YgooSchrYchar_Gascii),cF3722);
      T2 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_terminatingQ_vectorT),T3);
      T1 = T2;
    }
    if (T1 != YPfalse) {
      T5 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),lF3720,nF3721);
      T0 = T5;
    } else {
      T9 = CALL1(1,VARREF(YgooSioSportYget),port_);
      T8 = CALL1(1,VARREF(YgooSioSreadYpreferred_case),T9);
      T7 = CALL2(1,VARREF(YgooSmacrosYpair),T8,lF3720);
      T10 = CALL2(1,VARREF(YgooSmathYA),nF3721,YPint((P)1));
      a159_0 = T7;
      a159_1 = T10;
      lF3720 = a159_0;
      nF3721 = a159_1;
      goto LOOP_159;
      T0 = T6;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_49) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSlogYE),FREEREF(0),x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_parse_token_50) {
  P string_,port_;
  P maybe_numberF3728;
  P tmpF3727;
  P tmpF3726;
  P tmpF3725;
  P cF3724;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(string_, 0);
  ARG(port_, 1);
  T8 = CALL2(1,VARREF(YgooSmacrosYelt),string_,YPint((P)0));
  cF3724 = T8;
  T7 = CALL1(1,VARREF(YgooSchrYdigitQ),cF3724);
  tmpF3725 = T7;
  if (tmpF3725 != YPfalse) {
    T1 = tmpF3725;
  } else {
    T6 = CALL2(1,VARREF(YgooSlogYE),cF3724,YPchr((P)43));
    tmpF3726 = T6;
    if (tmpF3726 != YPfalse) {
      T2 = tmpF3726;
    } else {
      T5 = CALL2(1,VARREF(YgooSlogYE),cF3724,YPchr((P)45));
      tmpF3727 = T5;
      if (tmpF3727 != YPfalse) {
        T3 = tmpF3727;
      } else {
        T4 = CALL2(1,VARREF(YgooSlogYE),cF3724,YPchr((P)46));
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T18 = CALL1(1,VARREF(YgooScolsSstrYstr_to_num),string_);
    maybe_numberF3728 = T18;
    if (maybe_numberF3728 != YPfalse) {
      T9 = maybe_numberF3728;
    } else {
      T12 = FUNFAB(fun_49,1,string_);
      T11 = CALL2(1,VARREF(YgooStypesYanyQ),T12,VARREF(YgooSioSreadYDstrange_symbol_names));
      if (T11 != YPfalse) {
        T13 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),string_);
        T10 = T13;
      } else {
        T15 = CALL2(1,VARREF(YgooSlogYE),string_,LITREF(lit_116));
        if (T15 != YPfalse) {
          T16 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),string_);
          T14 = T16;
        } else {
          T17 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_117),string_);
          T14 = T17;
        }
        T10 = T14;
      }
      T9 = T10;
    }
    T0 = T9;
  } else {
    T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),string_);
    T0 = T19;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reading_error_51) {
  P port_,message_,irritants_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(irritants_, 2);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),message_,LITREF(lit_122));
  T3 = CALL1(1,VARREF(Ylst),port_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),irritants_,T3);
  T0 = CALL2(1,VARREF(Yerror),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_warn_52) {
  P string_,irritants_and_port_;
LINK_STACK();
  ARG(string_, 0);
  NARGS(irritants_and_port_, 1);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_reverse_list_Gstring_53) {
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

P YgooSioSreadY___main_0___() {
  P str10496F3730;
  P sub_read_whitespaceF3729;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102;
DEFCREGS();
  lit_0 = YPPsym((P)"read");
  lit_1 = YPPlist(1,YPPsym((P)"port"));
  lit_2 = YPsb((P)"discarding extraneous right parenthesis");
  T0 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_0 = YPfab_met(FUNCODEREF(fun_read_0),T0,LITREF(lit_0),LITREF(lit_1),sloc(20),YPfalse);
  T2 = VARREF_OR(YgooSconditionsYread,YPfalse);
  T3 = fun_read_0;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSconditionsYread,T1);
  lit_3 = YPPsym((P)"read-from-string");
  lit_4 = YPPlist(1,YPPsym((P)"x"));
  lit_5 = Ynil;
  T6 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_1 = YPfab_met(FUNCODEREF(fun_1),T6,YPfalse,LITREF(lit_5),sloc(33),YPfalse);
  T5 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_2 = YPfab_met(FUNCODEREF(fun_2),T5,YPfalse,LITREF(lit_5),sloc(33),YPfalse);
  T4 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_from_string_3 = YPfab_met(FUNCODEREF(fun_read_from_string_3),T4,LITREF(lit_3),LITREF(lit_4),sloc(32),YPfalse);
  T8 = VARREF_OR(YgooSioSreadYread_from_string,YPfalse);
  T9 = fun_read_from_string_3;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YgooSioSreadYread_from_string,T7);
  lit_6 = YPPsym((P)"sub-read-carefully");
  lit_7 = YPPlist(1,YPPsym((P)"port"));
  lit_8 = YPsb((P)"unexpected end of file");
  T10 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sub_read_carefully_4 = YPfab_met(FUNCODEREF(fun_sub_read_carefully_4),T10,LITREF(lit_6),LITREF(lit_7),sloc(35),YPfalse);
  T12 = VARREF_OR(YgooSioSreadYsub_read_carefully,YPfalse);
  T13 = fun_sub_read_carefully_4;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooSioSreadYsub_read_carefully,T11);
  lit_9 = YPPsym((P)"<reader-token>");
  T15 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T14 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_9),T15);
  VARSET(YgooSioSreadYLreader_tokenG,T14);
  lit_10 = YPPsym((P)"token-message");
  lit_11 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPfab_sig(YPPlist(1,VARREF(YgooSioSreadYLreader_tokenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_token_message_5 = YPfab_met(FUNCODEREF(fun_token_message_5),T16,LITREF(lit_10),LITREF(lit_11),sloc(45),YPfalse);
  T18 = VARREF_OR(YgooSioSreadYtoken_message,YPfalse);
  T19 = fun_token_message_5;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooSioSreadYtoken_message,T17);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSioSreadYLreader_tokenG),VARREF(YgooSioSreadYtoken_message),YPfalse,VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_12 = YPPsym((P)"make-reader-token");
  lit_13 = YPPlist(1,YPPsym((P)"message"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_reader_token_6 = YPfab_met(FUNCODEREF(fun_make_reader_token_6),T20,LITREF(lit_12),LITREF(lit_13),sloc(47),YPfalse);
  T22 = VARREF_OR(YgooSioSreadYmake_reader_token,YPfalse);
  T23 = fun_make_reader_token_6;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSioSreadYmake_reader_token,T21);
  lit_14 = YPPsym((P)"reader-token?");
  lit_15 = YPPlist(1,YPPsym((P)"form"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_reader_tokenQ_7 = YPfab_met(FUNCODEREF(fun_reader_tokenQ_7),T24,LITREF(lit_14),LITREF(lit_15),sloc(50),YPfalse);
  T26 = VARREF_OR(YgooSioSreadYreader_tokenQ,YPfalse);
  T27 = fun_reader_tokenQ_7;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YgooSioSreadYreader_tokenQ,T25);
  lit_16 = YPsb((P)"unexpected right parenthesis");
  T28 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_16));
  VARSET(YgooSioSreadYDclose_paren,T28);
  lit_17 = YPsb((P)"unexpected right bracket");
  T29 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_17));
  VARSET(YgooSioSreadYDclose_bracket,T29);
  lit_18 = YPsb((P)"unexpected right curly");
  T30 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_18));
  VARSET(YgooSioSreadYDclose_curly,T30);
  lit_19 = YPPsym((P)"sub-read");
  lit_20 = YPPlist(1,YPPsym((P)"port"));
  T31 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sub_read_8 = YPfab_met(FUNCODEREF(fun_sub_read_8),T31,LITREF(lit_19),LITREF(lit_20),sloc(59),YPfalse);
  T33 = VARREF_OR(YgooSioSreadYsub_read,YPfalse);
  T34 = fun_sub_read_8;
  T32 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T33,T34);
  VARSET(YgooSioSreadYsub_read,T32);
  lit_21 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_22 = YPsb((P)"illegal character read");
  T35 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_9 = YPfab_met(FUNCODEREF(fun_9),T35,YPfalse,LITREF(lit_21),sloc(70),YPfalse);
  T37 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T38 = fun_9;
  T36 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T37,T38);
  VARSET(YgooSioSreadYTread_dispatch_vectorT,T36);
  T40 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T39 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T40,YPtrue);
  VARSET(YgooSioSreadYTread_terminatingQ_vectorT,T39);
  lit_23 = YPPsym((P)"set-standard-syntax!");
  lit_24 = YPPlist(3,YPPsym((P)"char"),YPPsym((P)"terminating?"),YPPsym((P)"reader"));
  T41 = YPfab_sig(YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_set_standard_syntaxX_10 = YPfab_met(FUNCODEREF(fun_set_standard_syntaxX_10),T41,LITREF(lit_23),LITREF(lit_24),sloc(74),YPfalse);
  T43 = VARREF_OR(YgooSioSreadYset_standard_syntaxX,YPfalse);
  T44 = fun_set_standard_syntaxX_10;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YgooSioSreadYset_standard_syntaxX,T42);
  lit_25 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_26 = YPPlist(1,YPPsym((P)"c"));
  T46 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_11 = YPfab_met(FUNCODEREF(fun_11),T46,YPfalse,LITREF(lit_25),sloc(78),YPfalse);
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPfab_met(FUNCODEREF(fun_12),T45,YPfalse,LITREF(lit_26),sloc(79),YPfalse);
  T49 = fun_11;
  sub_read_whitespaceF3729 = T49;
  T48 = FUNFAB(fun_12,1,sub_read_whitespaceF3729);
  T47 = XCALL2(1,VARREF(YgooSmacrosYdo),T48,VARREF(YgooScolsSstrYascii_whitespaces));
  lit_27 = YPPsym((P)"flush-whitespace");
  lit_28 = YPPlist(1,YPPsym((P)"port"));
  T50 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYflush_whitespace = YPfab_met(FUNCODEREF(YgooSioSreadYflush_whitespace),T50,LITREF(lit_27),LITREF(lit_28),sloc(82),YPfalse);
  T51 = YgooSioSreadYflush_whitespace;
  VARSET(YgooSioSreadYflush_whitespace,T51);
  lit_29 = YPPsym((P)"read-delimited-list");
  lit_30 = YPPlist(2,YPPsym((P)"endchar"),YPPsym((P)"port"));
  T52 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_delimited_list = YPfab_met(FUNCODEREF(YgooSioSreadYread_delimited_list),T52,LITREF(lit_29),LITREF(lit_30),sloc(90),YPfalse);
  T53 = YgooSioSreadYread_delimited_list;
  VARSET(YgooSioSreadYread_delimited_list,T53);
  lit_31 = YPPsym((P)"sub-read-constituent");
  lit_32 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T54 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYsub_read_constituent = YPfab_met(FUNCODEREF(YgooSioSreadYsub_read_constituent),T54,LITREF(lit_31),LITREF(lit_32),sloc(98),YPfalse);
  T55 = YgooSioSreadYsub_read_constituent;
  VARSET(YgooSioSreadYsub_read_constituent,T55);
  lit_33 = YPsb((P)"!$%&*+-./0123456789:<=>?@^_~ABCDEFGHIJKLM");
  lit_34 = YPsb((P)"NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  lit_35 = YPPlist(1,YPPsym((P)"c"));
  T56 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPfab_met(FUNCODEREF(fun_16),T56,YPfalse,LITREF(lit_35),sloc(105),YPfalse);
  T59 = XCALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_33),LITREF(lit_34));
  str10496F3730 = T59;
  T58 = fun_16;
  T57 = XCALL2(1,VARREF(YgooSmacrosYdo),T58,str10496F3730);
  lit_36 = YPPsym((P)"set-standard-read-macro!");
  lit_37 = YPPlist(3,YPPsym((P)"char"),YPPsym((P)"terminating?"),YPPsym((P)"proc"));
  T60 = YPfab_sig(YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_set_standard_read_macroX_17 = YPfab_met(FUNCODEREF(fun_set_standard_read_macroX_17),T60,LITREF(lit_36),LITREF(lit_37),sloc(110),YPfalse);
  T62 = VARREF_OR(YgooSioSreadYset_standard_read_macroX,YPfalse);
  T63 = fun_set_standard_read_macroX_17;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooSioSreadYset_standard_read_macroX,T61);
  lit_38 = YPPsym((P)"get-standard-read-macro");
  lit_39 = YPPlist(1,YPPsym((P)"char"));
  T64 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_get_standard_read_macro_18 = YPfab_met(FUNCODEREF(fun_get_standard_read_macro_18),T64,LITREF(lit_38),LITREF(lit_39),sloc(113),YPfalse);
  T66 = VARREF_OR(YgooSioSreadYget_standard_read_macro,YPfalse);
  T67 = fun_get_standard_read_macro_18;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooSioSreadYget_standard_read_macro,T65);
  lit_40 = YPPsym((P)"sub-read-vertical");
  lit_41 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_42 = YPsb((P)"|");
  T68 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_vertical_19 = YPfab_met(FUNCODEREF(fun_sub_read_vertical_19),T68,LITREF(lit_40),LITREF(lit_41),sloc(116),YPfalse);
  T70 = VARREF_OR(YgooSioSreadYsub_read_vertical,YPfalse);
  T71 = fun_sub_read_vertical_19;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YgooSioSreadYsub_read_vertical,T69);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)124),YPtrue,VARREF(YgooSioSreadYsub_read_vertical));
  lit_43 = YPPsym((P)"sub-read-backslash");
  lit_44 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_45 = YPsb((P)"\\");
  T72 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_backslash_20 = YPfab_met(FUNCODEREF(fun_sub_read_backslash_20),T72,LITREF(lit_43),LITREF(lit_44),sloc(121),YPfalse);
  T74 = VARREF_OR(YgooSioSreadYsub_read_backslash,YPfalse);
  T75 = fun_sub_read_backslash_20;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YgooSioSreadYsub_read_backslash,T73);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)92),YPtrue,VARREF(YgooSioSreadYsub_read_backslash));
  lit_46 = YPsb((P)"|");
  T76 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),LITREF(lit_46));
  VARSET(YgooSioSreadYDvert_sym,T76);
  lit_47 = YPsb((P)"vert-proxy");
  T77 = XCALL1(1,VARREF(Ylst),LITREF(lit_47));
  VARSET(YgooSioSreadYDvert_proxy,T77);
  lit_48 = YPPsym((P)"sub-read-list-eof-error");
  lit_49 = YPPlist(1,YPPsym((P)"port"));
  lit_50 = YPsb((P)"end of file inside list -- unbalanced parentheses");
  T78 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYsub_read_list_eof_error = YPfab_met(FUNCODEREF(YgooSioSreadYsub_read_list_eof_error),T78,LITREF(lit_48),LITREF(lit_49),sloc(129),YPfalse);
  T79 = YgooSioSreadYsub_read_list_eof_error;
  VARSET(YgooSioSreadYsub_read_list_eof_error,T79);
  lit_51 = YPPsym((P)"sub-read-list");
  lit_52 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"p"));
  lit_53 = YPPsym((P)"read-next");
  lit_54 = YPPlist(4,YPPsym((P)"c"),YPPsym((P)"prev"),YPPsym((P)"line"),YPPsym((P)"form"));
  T81 = YPfab_sig(YPPlist(4,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_read_next_22 = YPfab_met(FUNCODEREF(fun_read_next_22),T81,LITREF(lit_53),LITREF(lit_54),sloc(139),YPfalse);
  T80 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_list_23 = YPfab_met(FUNCODEREF(fun_sub_read_list_23),T80,LITREF(lit_51),LITREF(lit_52),sloc(132),YPfalse);
  T83 = VARREF_OR(YgooSioSreadYsub_read_list,YPfalse);
  T84 = fun_sub_read_list_23;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YgooSioSreadYsub_read_list,T82);
  lit_55 = YPPsym((P)"sub-read-seq");
  lit_56 = YPPlist(3,YPPsym((P)"c"),YPPsym((P)"e"),YPPsym((P)"port"));
  lit_57 = YPsb((P)"end of file inside list -- unbalanced parentheses");
  T85 = YPfab_sig(YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_sub_read_seq_24 = YPfab_met(FUNCODEREF(fun_sub_read_seq_24),T85,LITREF(lit_55),LITREF(lit_56),sloc(156),YPfalse);
  T87 = VARREF_OR(YgooSioSreadYsub_read_seq,YPfalse);
  T88 = fun_sub_read_seq_24;
  T86 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T87,T88);
  VARSET(YgooSioSreadYsub_read_seq,T86);
  lit_58 = YPPsym((P)"sub-read-brackets");
  lit_59 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_60 = YPPsym((P)"elt");
  lit_61 = Ynil;
  lit_62 = YPPsym((P)"*");
  lit_63 = YPPsym((P)"sub*");
  lit_64 = YPPsym((P)"sub");
  lit_65 = YPsb((P)"invalid [ ... ] form");
  T89 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_brackets_25 = YPfab_met(FUNCODEREF(fun_sub_read_brackets_25),T89,LITREF(lit_58),LITREF(lit_59),sloc(165),YPfalse);
  T91 = VARREF_OR(YgooSioSreadYsub_read_brackets,YPfalse);
  T92 = fun_sub_read_brackets_25;
  T90 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T91,T92);
  VARSET(YgooSioSreadYsub_read_brackets,T90);
  lit_66 = YPsb((P)"\\");
  T93 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),LITREF(lit_66));
  VARSET(YgooSioSreadYbs_sym,T93);
  lit_67 = YPPsym((P)"sub-read-curlies");
  lit_68 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_69 = YPPsym((P)"fun");
  lit_70 = YPPsym((P)"seq");
  T94 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_curlies_26 = YPfab_met(FUNCODEREF(fun_sub_read_curlies_26),T94,LITREF(lit_67),LITREF(lit_68),sloc(176),YPfalse);
  T96 = VARREF_OR(YgooSioSreadYsub_read_curlies,YPfalse);
  T97 = fun_sub_read_curlies_26;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YgooSioSreadYsub_read_curlies,T95);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)40),YPtrue,VARREF(YgooSioSreadYsub_read_list));
  lit_71 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T100 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T99 = fun_27 = YPfab_met(FUNCODEREF(fun_27),T100,YPfalse,LITREF(lit_71),sloc(185),YPfalse);
  T102 = fun_27;
  T101 = XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)41),YPtrue,T102);
  T98 = T101;
  return T98;
}

P YgooSioSreadY___main_1___() {
  P number_sharp_macroF3732;
  P vecF3731;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77;
DEFCREGS();
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)123),YPtrue,VARREF(YgooSioSreadYsub_read_curlies));
  lit_72 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_28 = YPfab_met(FUNCODEREF(fun_28),T0,YPfalse,LITREF(lit_72),sloc(189),YPfalse);
  T1 = fun_28;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)125),YPtrue,T1);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)91),YPtrue,VARREF(YgooSioSreadYsub_read_brackets));
  lit_73 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T2 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_29 = YPfab_met(FUNCODEREF(fun_29),T2,YPfalse,LITREF(lit_73),sloc(193),YPfalse);
  T3 = fun_29;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)93),YPtrue,T3);
  lit_74 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_75 = YPPsym((P)"quote");
  T4 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_30 = YPfab_met(FUNCODEREF(fun_30),T4,YPfalse,LITREF(lit_74),sloc(196),YPfalse);
  T5 = fun_30;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)39),YPtrue,T5);
  lit_76 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_77 = YPPsym((P)"quasiquote");
  T6 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_31 = YPfab_met(FUNCODEREF(fun_31),T6,YPfalse,LITREF(lit_76),sloc(199),YPfalse);
  T7 = fun_31;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)96),YPtrue,T7);
  lit_78 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_79 = YPsb((P)"end of file after ,");
  lit_80 = YPPsym((P)"unquote-splicing");
  lit_81 = YPPsym((P)"unquote");
  T8 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_32 = YPfab_met(FUNCODEREF(fun_32),T8,YPfalse,LITREF(lit_78),sloc(203),YPfalse);
  T9 = fun_32;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)44),YPtrue,T9);
  T16 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T15 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T16,YPfalse);
  vecF3731 = T15;
  T10 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)116));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)9),vecF3731,T10);
  T11 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)102));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)12),vecF3731,T11);
  T12 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)114));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)13),vecF3731,T12);
  T13 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)110));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)10),vecF3731,T13);
  T14 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF3731);
  VARSET(YgooSioSreadYDstring_escape_chars,T14);
  lit_82 = YPPsym((P)"read-string-literal");
  lit_83 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_84 = YPsb((P)"end of file within a string");
  lit_85 = YPsb((P)"end of file within a string");
  lit_86 = YPsb((P)"invalid escaped character in string");
  T17 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_string_literal = YPfab_met(FUNCODEREF(YgooSioSreadYread_string_literal),T17,LITREF(lit_82),LITREF(lit_83),sloc(221),YPfalse);
  T18 = YgooSioSreadYread_string_literal;
  VARSET(YgooSioSreadYread_string_literal,T18);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)34),YPtrue,VARREF(YgooSioSreadYread_string_literal));
  lit_87 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T19 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_34 = YPfab_met(FUNCODEREF(fun_34),T19,YPfalse,LITREF(lit_87),sloc(247),YPfalse);
  T20 = fun_34;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)59),YPtrue,T20);
  lit_88 = YPPsym((P)"gobble-line");
  lit_89 = YPPlist(1,YPPsym((P)"port"));
  T21 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gobble_line_35 = YPfab_met(FUNCODEREF(fun_gobble_line_35),T21,LITREF(lit_88),LITREF(lit_89),sloc(249),YPfalse);
  T23 = VARREF_OR(YgooSioSreadYgobble_line,YPfalse);
  T24 = fun_gobble_line_35;
  T22 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T23,T24);
  VARSET(YgooSioSreadYgobble_line,T22);
  VARSET(YgooSioSreadYTsharp_macrosT,Ynil);
  lit_90 = YPPsym((P)"define-sharp-macro");
  lit_91 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"proc"));
  T25 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_define_sharp_macro_36 = YPfab_met(FUNCODEREF(fun_define_sharp_macro_36),T25,LITREF(lit_90),LITREF(lit_91),sloc(256),YPfalse);
  T27 = VARREF_OR(YgooSioSreadYdefine_sharp_macro,YPfalse);
  T28 = fun_define_sharp_macro_36;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YgooSioSreadYdefine_sharp_macro,T26);
  lit_92 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_93 = YPsb((P)"end of file after #");
  lit_94 = YPsb((P)"unknown # syntax");
  T29 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_37 = YPfab_met(FUNCODEREF(fun_37),T29,YPfalse,LITREF(lit_92),sloc(261),YPfalse);
  T30 = fun_37;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)35),YPfalse,T30);
  lit_95 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T31 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_38 = YPfab_met(FUNCODEREF(fun_38),T31,YPfalse,LITREF(lit_95),sloc(271),YPfalse);
  T32 = fun_38;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)102),T32);
  lit_96 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T33 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_39 = YPfab_met(FUNCODEREF(fun_39),T33,YPfalse,LITREF(lit_96),sloc(273),YPfalse);
  T34 = fun_39;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)116),T34);
  lit_97 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T35 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_40 = YPfab_met(FUNCODEREF(fun_40),T35,YPfalse,LITREF(lit_97),sloc(275),YPfalse);
  T36 = fun_40;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)124),T36);
  lit_98 = YPPsym((P)"gobble-nested-comment");
  lit_99 = YPPlist(1,YPPsym((P)"port"));
  T37 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYgobble_nested_comment = YPfab_met(FUNCODEREF(YgooSioSreadYgobble_nested_comment),T37,LITREF(lit_98),LITREF(lit_99),sloc(277),YPfalse);
  T38 = YgooSioSreadYgobble_nested_comment;
  VARSET(YgooSioSreadYgobble_nested_comment,T38);
  lit_100 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T39 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_42 = YPfab_met(FUNCODEREF(fun_42),T39,YPfalse,LITREF(lit_100),sloc(288),YPfalse);
  T40 = fun_42;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)47),T40);
  lit_101 = YPPlist(5,YPPlist(2,YPPsym((P)"tab"),YPchr((P)9)),YPPlist(2,YPPsym((P)"page"),YPchr((P)12)),YPPlist(2,YPPsym((P)"return"),YPchr((P)13)),YPPlist(2,YPPsym((P)"newline"),YPchr((P)10)),YPPlist(2,YPPsym((P)"space"),YPchr((P)32)));
  VARSET(YgooSioSreadYDchar_long_names,LITREF(lit_101));
  lit_102 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_103 = YPsb((P)"end of file after #\\");
  lit_104 = YPsb((P)"unknown #\\ name");
  T41 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_43 = YPfab_met(FUNCODEREF(fun_43),T41,YPfalse,LITREF(lit_102),sloc(299),YPfalse);
  T42 = fun_43;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)92),T42);
  lit_105 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T43 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_44 = YPfab_met(FUNCODEREF(fun_44),T43,YPfalse,LITREF(lit_105),sloc(316),YPfalse);
  T44 = fun_44;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)40),T44);
  lit_106 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T45 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_45 = YPfab_met(FUNCODEREF(fun_45),T45,YPfalse,LITREF(lit_106),sloc(322),YPfalse);
  T46 = fun_45;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)91),T46);
  lit_107 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_108 = YPsb((P)"unsupported number syntax");
  lit_109 = YPPlist(1,YPPsym((P)"c"));
  lit_110 = YPPlist(4,YPchr((P)98),YPchr((P)111),YPchr((P)100),YPchr((P)120));
  T48 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_46 = YPfab_met(FUNCODEREF(fun_46),T48,YPfalse,LITREF(lit_107),sloc(327),YPfalse);
  T47 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPfab_met(FUNCODEREF(fun_47),T47,YPfalse,LITREF(lit_109),sloc(331),YPfalse);
  T51 = fun_46;
  number_sharp_macroF3732 = T51;
  T50 = FUNFAB(fun_47,1,number_sharp_macroF3732);
  T49 = XCALL2(1,VARREF(YgooSmacrosYdo),T50,LITREF(lit_110));
  lit_111 = YPPsym((P)"sub-read-token");
  lit_112 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T52 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_token_48 = YPfab_met(FUNCODEREF(fun_sub_read_token_48),T52,LITREF(lit_111),LITREF(lit_112),sloc(336),YPfalse);
  T54 = VARREF_OR(YgooSioSreadYsub_read_token,YPfalse);
  T55 = fun_sub_read_token_48;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YgooSioSreadYsub_read_token,T53);
  lit_113 = YPPsym((P)"parse-token");
  lit_114 = YPPlist(2,YPPsym((P)"string"),YPPsym((P)"port"));
  lit_115 = YPPlist(1,YPPsym((P)"x"));
  lit_116 = YPsb((P)".");
  lit_117 = YPsb((P)"unsupported number syntax");
  T57 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPfab_met(FUNCODEREF(fun_49),T57,YPfalse,LITREF(lit_115),sloc(357),YPfalse);
  T56 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_token_50 = YPfab_met(FUNCODEREF(fun_parse_token_50),T56,LITREF(lit_113),LITREF(lit_114),sloc(347),YPfalse);
  T59 = VARREF_OR(YgooSioSreadYparse_token,YPfalse);
  T60 = fun_parse_token_50;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YgooSioSreadYparse_token,T58);
  lit_118 = YPPlist(9,YPsb((P)"+"),YPsb((P)"-"),YPsb((P)"..."),YPsb((P)"1st"),YPsb((P)"2nd"),YPsb((P)"3rd"),YPsb((P)"1+"),YPsb((P)"1-"),YPsb((P)"->"));
  VARSET(YgooSioSreadYDstrange_symbol_names,LITREF(lit_118));
  lit_119 = YPPsym((P)"t");
  T64 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),LITREF(lit_119));
  T63 = XCALL2(1,VARREF(YgooSmacrosYelt),T64,YPint((P)0));
  T62 = XCALL2(1,VARREF(YgooSlogYE),T63,YPchr((P)84));
  if (T62 != YPfalse) {
    T61 = VARREF(YgooSchrYto_upper);
  } else {
    T61 = VARREF(YgooSchrYto_lower);
  }
  VARSET(YgooSioSreadYpreferred_case,T61);
  lit_120 = YPPsym((P)"reading-error");
  lit_121 = YPPlist(3,YPPsym((P)"port"),YPPsym((P)"message"),YPPsym((P)"irritants"));
  lit_122 = YPsb((P)": %=");
  T65 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLportG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reading_error_51 = YPfab_met(FUNCODEREF(fun_reading_error_51),T65,LITREF(lit_120),LITREF(lit_121),sloc(384),YPfalse);
  T67 = VARREF_OR(YgooSioSreadYreading_error,YPfalse);
  T68 = fun_reading_error_51;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YgooSioSreadYreading_error,T66);
  lit_123 = YPPsym((P)"warn");
  lit_124 = YPPlist(2,YPPsym((P)"string"),YPPsym((P)"irritants-and-port"));
  T69 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_warn_52 = YPfab_met(FUNCODEREF(fun_warn_52),T69,LITREF(lit_123),LITREF(lit_124),sloc(388),YPfalse);
  T71 = VARREF_OR(YgooSioSreadYwarn,YPfalse);
  T72 = fun_warn_52;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YgooSioSreadYwarn,T70);
  lit_125 = YPPsym((P)"reverse-list->string");
  lit_126 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"n"));
  T73 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_reverse_list_Gstring_53 = YPfab_met(FUNCODEREF(fun_reverse_list_Gstring_53),T73,LITREF(lit_125),LITREF(lit_126),sloc(396),YPfalse);
  T75 = VARREF_OR(YgooSioSreadYreverse_list_Gstring,YPfalse);
  T76 = fun_reverse_list_Gstring_53;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YgooSioSreadYreverse_list_Gstring,T74);
  T77 = YPfalse;
  return T77;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooSconditions},
  {&module_info_gooStypes},
  {&module_info_gooSany},
  {&module_info_gooSlog},
  {&module_info_gooSchr},
  {&module_info_gooSmath},
  {&module_info_gooSioSport},
  {&module_info_gooScols},
  {&module_info_gooScolsSlst},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"class-children", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"default-handler-description", &module_info_gooSconditions, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"list-handlers", &module_info_gooSconditions, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSchr, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"*current-handlers*", &module_info_gooSconditions, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"eof-object", &module_info_gooSchr, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"choose-handler", &module_info_gooSconditions, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"round-to", &module_info_gooSmath, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"port-filename", &module_info_gooSioSport, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"port-line-setter", &module_info_gooSioSport, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"describe-handler", &module_info_gooSconditions, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"lst*", &module_info_gooScolsSlst, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"build-condition-interactively", &module_info_gooSconditions, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"as-log", &module_info_gooSlog, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"port-index-setter", &module_info_gooSioSport, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"exp", &module_info_gooSmath, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"port-handle", &module_info_gooSioSport, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sub-read", CVAR, &YgooSioSreadYsub_read},
  {"reading-error", CVAR, &YgooSioSreadYreading_error},
  {"parse-token", CVAR, &YgooSioSreadYparse_token},
  {"reverse-list->string", CVAR, &YgooSioSreadYreverse_list_Gstring},
  {"$vert-sym", CVAR, &YgooSioSreadYDvert_sym},
  {"gobble-line", CVAR, &YgooSioSreadYgobble_line},
  {"define-sharp-macro", CVAR, &YgooSioSreadYdefine_sharp_macro},
  {"sub-read-list", CVAR, &YgooSioSreadYsub_read_list},
  {"gobble-nested-comment", CVAR, &YgooSioSreadYgobble_nested_comment},
  {"set-standard-read-macro!", CVAR, &YgooSioSreadYset_standard_read_macroX},
  {"read-from-string", CVAR, &YgooSioSreadYread_from_string},
  {"$close-curly", CVAR, &YgooSioSreadYDclose_curly},
  {"set-standard-syntax!", CVAR, &YgooSioSreadYset_standard_syntaxX},
  {"read-delimited-list", CVAR, &YgooSioSreadYread_delimited_list},
  {"*sharp-macros*", CVAR, &YgooSioSreadYTsharp_macrosT},
  {"$close-bracket", CVAR, &YgooSioSreadYDclose_bracket},
  {"token-message", CVAR, &YgooSioSreadYtoken_message},
  {"sub-read-curlies", CVAR, &YgooSioSreadYsub_read_curlies},
  {"$char-long-names", CVAR, &YgooSioSreadYDchar_long_names},
  {"preferred-case", CVAR, &YgooSioSreadYpreferred_case},
  {"sub-read-carefully", CVAR, &YgooSioSreadYsub_read_carefully},
  {"bs-sym", CVAR, &YgooSioSreadYbs_sym},
  {"sub-read-backslash", CVAR, &YgooSioSreadYsub_read_backslash},
  {"sub-read-vertical", CVAR, &YgooSioSreadYsub_read_vertical},
  {"reader-token?", CVAR, &YgooSioSreadYreader_tokenQ},
  {"$strange-symbol-names", CVAR, &YgooSioSreadYDstrange_symbol_names},
  {"sub-read-token", CVAR, &YgooSioSreadYsub_read_token},
  {"read-string-literal", CVAR, &YgooSioSreadYread_string_literal},
  {"warn", CVAR, &YgooSioSreadYwarn},
  {"---main-0---", PVAR, NULL},
  {"*read-terminating?-vector*", CVAR, &YgooSioSreadYTread_terminatingQ_vectorT},
  {"---main-1---", PVAR, NULL},
  {"sub-read-brackets", CVAR, &YgooSioSreadYsub_read_brackets},
  {"<reader-token>", CVAR, &YgooSioSreadYLreader_tokenG},
  {"get-standard-read-macro", CVAR, &YgooSioSreadYget_standard_read_macro},
  {"*read-dispatch-vector*", CVAR, &YgooSioSreadYTread_dispatch_vectorT},
  {"$string-escape-chars", CVAR, &YgooSioSreadYDstring_escape_chars},
  {"make-reader-token", CVAR, &YgooSioSreadYmake_reader_token},
  {"sub-read-constituent", CVAR, &YgooSioSreadYsub_read_constituent},
  {"$close-paren", CVAR, &YgooSioSreadYDclose_paren},
  {"sub-read-list-eof-error", CVAR, &YgooSioSreadYsub_read_list_eof_error},
  {"flush-whitespace", CVAR, &YgooSioSreadYflush_whitespace},
  {"$vert-proxy", CVAR, &YgooSioSreadYDvert_proxy},
  {"sub-read-seq", CVAR, &YgooSioSreadYsub_read_seq},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"set-standard-read-macro!", NULL},
  {"$char-long-names", NULL},
  {"read-from-string", NULL},
  {"read-delimited-list", NULL},
  {"read", NULL},
  {"get-standard-read-macro", NULL},
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
extern void load_module_gooSfun (void);
extern void load_module_gooSclass (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSconditions (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSany (void);
extern void load_module_gooSlog (void);
extern void load_module_gooSchr (void);
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
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooSconditions();
  load_module_gooStypes();
  load_module_gooSany();
  load_module_gooSlog();
  load_module_gooSchr();
  load_module_gooSmath();
  load_module_gooSioSport();
  load_module_gooScols();
  load_module_gooScolsSlst();

  (P)YgooSioSreadY___main_0___();
  (P)YgooSioSreadY___main_1___();

}

/* END OF GENERATED CODE. */
