/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/io/write");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/io/write */

EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSmagYmin,"goo/mag","min");
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
DEF(YgooSioSwriteYwrite_flat,"goo/io/write","write-flat");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
DEF(YgooSioSwriteYdo_emit,"goo/io/write","do-emit");
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
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(YgooSioSwriteYwrite_string_literal,"goo/io/write","write-string-literal");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
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
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
DEF(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
DEF(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
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
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
DEF(YgooSioSwriteYquotationQ,"goo/io/write","quotation?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(Yhead,"goo/boot","head");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
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
DEF(YgooSioSwriteYwrite_params,"goo/io/write","write-params");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
DEF(YgooSioSwriteYwrite_map,"goo/io/write","write-map");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(YgooSioSwriteYcharacter_name,"goo/io/write","character-name");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(YgooSioSwriteYas_binding_name,"goo/io/write","as-binding-name");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
DEF(YgooSioSwriteYwrite_value_type,"goo/io/write","write-value-type");
DEF(YgooSioSwriteYwrite_boolean,"goo/io/write","write-boolean");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSioSportYclose,"goo/io/port","close");
DEF(YgooSioSwriteYwrite_fun_guts,"goo/io/write","write-fun-guts");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooSpackerYpacker,"goo/packer","packer");
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
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YtT,"goo/boot","t*");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSmathYK,"goo/math","|");
DYNDEF(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
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
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
DYNDEF(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YLstrG,"goo/boot","<str>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YLtupG,"goo/boot","<tup>");
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
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YLmetG,"goo/boot","<met>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYneg,"goo/math","neg");
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
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
DEF(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
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
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
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
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooStypesYas,"goo/types","as");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YgooSioSwriteYwrite_list,"goo/io/write","write-list");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
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
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(Yclone,"goo/boot","clone");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
DEF(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YgooSioSwriteYwrite_number,"goo/io/write","write-number");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
DEF(YgooSioSwriteYrecurring_write_type,"goo/io/write","recurring-write-type");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
DEF(YgooSioSwriteYwrite_char_literal,"goo/io/write","write-char-literal");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSioSportYport_handle_setter,"goo/io/port","port-handle-setter");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLfixnumG,"goo/boot","<fixnum>");
DEF(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLpropG,"goo/boot","<prop>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_135);
DEFLIT(lit_53);
DEFLIT(lit_104);
DEFLIT(lit_40);
DEFLIT(lit_7);
DEFLIT(lit_94);
DEFLIT(lit_14);
DEFLIT(lit_6);
DEFLIT(lit_47);
DEFLIT(lit_124);
DEFLIT(lit_55);
DEFLIT(lit_117);
DEFLIT(lit_108);
DEFLIT(lit_44);
DEFLIT(lit_152);
DEFLIT(lit_80);
DEFLIT(lit_27);
DEFLIT(lit_72);
DEFLIT(lit_121);
DEFLIT(lit_51);
DEFLIT(lit_122);
DEFLIT(lit_149);
DEFLIT(lit_54);
DEFLIT(lit_91);
DEFLIT(lit_87);
DEFLIT(lit_133);
DEFLIT(lit_137);
DEFLIT(lit_161);
DEFLIT(lit_146);
DEFLIT(lit_109);
DEFLIT(lit_83);
DEFLIT(lit_123);
DEFLIT(lit_66);
DEFLIT(lit_128);
DEFLIT(lit_22);
DEFLIT(lit_174);
DEFLIT(lit_60);
DEFLIT(lit_95);
DEFLIT(lit_114);
DEFLIT(lit_167);
DEFLIT(lit_110);
DEFLIT(lit_162);
DEFLIT(lit_52);
DEFLIT(lit_20);
DEFLIT(lit_37);
DEFLIT(lit_134);
DEFLIT(lit_105);
DEFLIT(lit_172);
DEFLIT(lit_113);
DEFLIT(lit_5);
DEFLIT(lit_173);
DEFLIT(lit_38);
DEFLIT(lit_150);
DEFLIT(lit_130);
DEFLIT(lit_175);
DEFLIT(lit_57);
DEFLIT(lit_32);
DEFLIT(lit_79);
DEFLIT(lit_89);
DEFLIT(lit_142);
DEFLIT(lit_129);
DEFLIT(lit_75);
DEFLIT(lit_155);
DEFLIT(lit_11);
DEFLIT(lit_116);
DEFLIT(lit_156);
DEFLIT(lit_21);
DEFLIT(lit_15);
DEFLIT(lit_63);
DEFLIT(lit_145);
DEFLIT(lit_62);
DEFLIT(lit_71);
DEFLIT(lit_78);
DEFLIT(lit_148);
DEFLIT(lit_67);
DEFLIT(lit_30);
DEFLIT(lit_151);
DEFLIT(lit_39);
DEFLIT(lit_13);
DEFLIT(lit_41);
DEFLIT(lit_56);
DEFLIT(lit_42);
DEFLIT(lit_2);
DEFLIT(lit_17);
DEFLIT(lit_138);
DEFLIT(lit_115);
DEFLIT(lit_160);
DEFLIT(lit_92);
DEFLIT(lit_73);
DEFLIT(lit_100);
DEFLIT(lit_48);
DEFLIT(lit_141);
DEFLIT(lit_119);
DEFLIT(lit_10);
DEFLIT(lit_125);
DEFLIT(lit_136);
DEFLIT(lit_99);
DEFLIT(lit_159);
DEFLIT(lit_35);
DEFLIT(lit_4);
DEFLIT(lit_97);
DEFLIT(lit_3);
DEFLIT(lit_49);
DEFLIT(lit_98);
DEFLIT(lit_86);
DEFLIT(lit_58);
DEFLIT(lit_177);
DEFLIT(lit_112);
DEFLIT(lit_85);
DEFLIT(lit_90);
DEFLIT(lit_28);
DEFLIT(lit_1);
DEFLIT(lit_12);
DEFLIT(lit_153);
DEFLIT(lit_131);
DEFLIT(lit_84);
DEFLIT(lit_127);
DEFLIT(lit_147);
DEFLIT(lit_143);
DEFLIT(lit_25);
DEFLIT(lit_102);
DEFLIT(lit_164);
DEFLIT(lit_33);
DEFLIT(lit_26);
DEFLIT(lit_111);
DEFLIT(lit_19);
DEFLIT(lit_157);
DEFLIT(lit_88);
DEFLIT(lit_96);
DEFLIT(lit_29);
DEFLIT(lit_169);
DEFLIT(lit_18);
DEFLIT(lit_171);
DEFLIT(lit_43);
DEFLIT(lit_59);
DEFLIT(lit_168);
DEFLIT(lit_31);
DEFLIT(lit_68);
DEFLIT(lit_132);
DEFLIT(lit_166);
DEFLIT(lit_93);
DEFLIT(lit_64);
DEFLIT(lit_77);
DEFLIT(lit_144);
DEFLIT(lit_36);
DEFLIT(lit_0);
DEFLIT(lit_170);
DEFLIT(lit_126);
DEFLIT(lit_176);
DEFLIT(lit_69);
DEFLIT(lit_154);
DEFLIT(lit_23);
DEFLIT(lit_82);
DEFLIT(lit_9);
DEFLIT(lit_101);
DEFLIT(lit_45);
DEFLIT(lit_118);
DEFLIT(lit_34);
DEFLIT(lit_81);
DEFLIT(lit_50);
DEFLIT(lit_70);
DEFLIT(lit_139);
DEFLIT(lit_65);
DEFLIT(lit_165);
DEFLIT(lit_61);
DEFLIT(lit_16);
DEFLIT(lit_106);
DEFLIT(lit_24);
DEFLIT(lit_140);
DEFLIT(lit_46);
DEFLIT(lit_163);
DEFLIT(lit_76);
DEFLIT(lit_107);
DEFLIT(lit_158);
DEFLIT(lit_103);
DEFLIT(lit_74);
DEFLIT(lit_120);
DEFLIT(lit_8);

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
LOCFOR(fun_loop_27);
LOCFOR(fun_write_string_literal_28);
LOCFOR(fun_loop_29);
LOCFOR(fun_write_list_30);
LOCFOR(fun_quotationQ_31);
LOCFOR(fun_loop_32);
LOCFOR(fun_write_flat_33);
LOCFOR(fun_x_1397_34);
LOCFOR(fun_35);
LOCFOR(fun_write_map_36);
LOCFOR(fun_recurring_write_37);
LOCFOR(fun_recurring_write_38);
LOCFOR(fun_x_1401_39);
LOCFOR(fun_40);
LOCFOR(fun_41);
LOCFOR(fun_write_params_42);
LOCFOR(fun_write_fun_guts_43);
LOCFOR(fun_recurring_write_44);
LOCFOR(fun_recurring_write_45);
LOCFOR(fun_recurring_write_46);
LOCFOR(fun_recurring_write_47);
LOCFOR(fun_recurring_write_48);
LOCFOR(fun_recurring_write_49);
LOCFOR(fun_50);
LOCFOR(fun_recurring_write_51);
LOCFOR(fun_52);
LOCFOR(fun_recurring_write_53);
LOCFOR(fun_54);
LOCFOR(fun_write_value_type_55);
LOCFOR(fun_write_value_type_56);
LOCFOR(fun_recurring_write_type_57);
LOCFOR(fun_recurring_write_type_58);
LOCFOR(fun_recur_59);
LOCFOR(fun_write_type_60);
LOCFOR(fun_recurring_write_61);
LOCFOR(fun_x_1405_62);
LOCFOR(fun_63);
LOCFOR(fun_64);
LOCFOR(fun_65);
LOCFOR(fun_recurring_write_66);
LOCFOR(fun_recurring_write_67);
LOCFOR(fun_recurring_write_68);
LOCFOR(fun_arg_69);
LOCFOR(fun_70);
LOCFOR(fun_msg_71);
LOCFOR(fun_post_72);
LOCFOR(fun_pe_msg_73);
LOCFOR(fun_maybe_pack_chars_74);
LOCFOR(fun_arg_75);
LOCFOR(fun_76);
LOCFOR(fun_pe_msg_77);
LOCFOR(fun_x_1415_78);
LOCFOR(fun_79);
LOCFOR(fun_80);
LOCFOR(fun_81);
LOCFOR(fun_82);
FUNFOR(YgooSconditionsYmsg_to_str);
LOCFOR(fun_loop_84);
FUNFOR(YgooSioSwriteYsay);
extern P YgooSioSwriteY___main_0___ ();
extern P YgooSioSwriteY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_as_binding_name_0) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_emit_1) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_emit_2) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYput),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_emit_3) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL4(1,VARREF(YgooSioSwriteYrecurring_write),port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recur_4) {
  P x_,d_;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
loop:
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
  P recurF2378;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_4,2);
  recurF2378 = T1;
  FUNINIT(recurF2378, 2,port_,recurF2378);
  T2 = CALL2(0,recurF2378,x_,YPint((P)-1));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  P T0,T1,T2;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_out_portG),LITREF(lit_14));
  BOXVAL(FREEREF(0)) = T0;
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSioSwriteYwrite),T2,FREEREF(1));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_7) {
  P tmpF2379;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2379 = T1;
  if (tmpF2379 != YPfalse) {
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
  P portF2380;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  portF2380 = YPfalse;
  portF2380 = BOXFAB(portF2380);
  T3 = FUNFAB(fun_6,2,portF2380,x_);
  T4 = FUNFAB(fun_7,1,portF2380);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_recur_9) {
  P x_,d_;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
loop:
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
  P recurF2381;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_9,2);
  recurF2381 = T1;
  FUNINIT(recurF2381, 2,port_,recurF2381);
  T2 = CALL2(0,recurF2381,x_,YPint((P)-1));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_writeln_11) {
  P port_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  CALL2(1,VARREF(YgooSioSwriteYwrite),port_,x_);
  T0 = CALL1(1,VARREF(YgooSioSportYnewline),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_12) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
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
  P prefixF2382;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T4 = CALL1(1,VARREF(Yclass_of),x_);
  T3 = CALL1(1,VARREF(Yclass_name),T4);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T3);
  T1 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_25),T2,LITREF(lit_26));
  prefixF2382 = T1;
  T5 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,prefixF2382,x_,LITREF(lit_27),d_,recur_);
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_14) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,LITREF(lit_29),x_,LITREF(lit_30),d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_15) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,LITREF(lit_32),x_,LITREF(lit_33),d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_16) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_map),port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_17) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
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
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),x_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_19) {
  P port_,x_,d_,recur_;
  P tF2386;
  P xF2385;
  P xF2384;
  P xF2383;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_40));
  xF2383 = x_;
  T4 = (P)YPuntag_into(xF2383);
  T3 = T4;
  xF2384 = T3;
  xF2385 = xF2384;
  tF2386 = (P)1;
  T7 = (P)YPiLL(xF2385,(P)2);
  T6 = (P)YPiv(T7,tF2386);
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
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
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
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_string_literal),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_22) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_char_literal),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_boolean_23) {
  P port_,mumble_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(mumble_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)35));
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite),port_,mumble_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_number_24) {
  P port_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_char_literal_25) {
  P port_,x_;
  P probeF2387;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSwriteYcharacter_name),x_);
  probeF2387 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_51));
  if (probeF2387 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSioSwriteYwrite),port_,probeF2387);
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
  P tmpF2389;
  P assocF2388;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooScolsSlstYassqn),char_,VARREF(YgooSioSreadYDchar_long_names),YPint((P)1));
  assocF2388 = T1;
  tmpF2389 = assocF2388;
  if (tmpF2389 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmacrosY1st),assocF2388);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_27) {
  P i_;
  P tmpF2391;
  P cF2390;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)34));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),i_);
    cF2390 = T4;
    T6 = CALL2(1,VARREF(YgooSmathYE),cF2390,YPchr((P)92));
    tmpF2391 = T6;
    if (tmpF2391 != YPfalse) {
      T7 = tmpF2391;
    } else {
      T8 = CALL2(1,VARREF(YgooSmathYE),cF2390,YPchr((P)34));
      T7 = T8;
    }
    T5 = T7;
    if (T5 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)92));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),cF2390);
    T11 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T11;
    i_ = a1;
    goto loop;
    T3 = T10;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_string_literal_28) {
  P port_,x_;
  P loopF2393;
  P lenF2392;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)34));
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  lenF2392 = T1;
  T3 = FUNSHELL(1,fun_loop_27,4);
  loopF2393 = T3;
  FUNINIT(loopF2393, 4,lenF2392,port_,x_,loopF2393);
  T4 = CALL1(0,loopF2393,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_29) {
  P l_,n_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(n_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),l_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmagYGE),n_,DYNREF(YgooSioSwriteYTmax_print_lengthT));
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_61));
      T3 = T5;
    } else {
      CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
      T6 = CALL1(1,VARREF(Yhead),l_);
      CALL2(1,FREEREF(2),T6,FREEREF(1));
      T8 = CALL1(1,VARREF(Ytail),l_);
      T9 = CALL2(1,VARREF(YgooSmathYA),n_,YPint((P)1));
      a1 = T8;
      a2 = T9;
      l_ = a1;
      n_ = a2;
      goto loop;
      T3 = T7;
    }
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_list_30) {
  P port_,x_,d_,recur_;
  P loopF2394;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
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
    T6 = FUNSHELL(1,fun_loop_29,4);
    loopF2394 = T6;
    FUNINIT(loopF2394, 4,port_,d_,recur_,loopF2394);
    T8 = CALL1(1,VARREF(Ytail),x_);
    T7 = CALL2(0,loopF2394,T8,YPint((P)1));
    T9 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
    T0 = T9;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_quotationQ_31) {
  P x_;
  P tmpF2397;
  P tmpF2396;
  P tmpF2395;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  tmpF2395 = T1;
  if (tmpF2395 != YPfalse) {
    T5 = CALL1(1,VARREF(Yhead),x_);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,LITREF(lit_64));
    tmpF2396 = T4;
    if (tmpF2396 != YPfalse) {
      T9 = CALL1(1,VARREF(Ytail),x_);
      T8 = CALL2(1,VARREF(YisaQ),T9,VARREF(YLlstG));
      tmpF2397 = T8;
      if (tmpF2397 != YPfalse) {
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

FUNCODEDEF(fun_loop_32) {
  P i_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYGE),i_,DYNREF(YgooSioSwriteYTmax_print_lengthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_68));
    T0 = T2;
  } else {
    T5 = CALL2(1,VARREF(YgooSmagYGE),i_,FREEREF(1));
    T4 = CALL1(1,VARREF(Ynot),T5);
    if (T4 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
      T6 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),i_);
      CALL2(1,FREEREF(4),T6,FREEREF(3));
      T8 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      a1 = T8;
      i_ = a1;
      goto loop;
      T3 = T7;
    } else {
      T3 = YPfalse;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_flat_33) {
  P port_,prefix_,x_,suffix_,d_,recur_;
  P loopF2399;
  P zF2398;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3,a4,a5,a6;
LINK_STACK();
  ARG(port_, 0);
  ARG(prefix_, 1);
  ARG(x_, 2);
  ARG(suffix_, 3);
  ARG(d_, 4);
  ARG(recur_, 5);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,prefix_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  zF2398 = T1;
  T2 = CALL2(1,VARREF(YgooSmagYG),zF2398,YPint((P)0));
  if (T2 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
    CALL2(1,recur_,T3,d_);
    T5 = FUNSHELL(1,fun_loop_32,6);
    loopF2399 = T5;
    FUNINIT(loopF2399, 6,port_,zF2398,x_,d_,recur_,loopF2399);
    T6 = CALL1(0,loopF2399,YPint((P)1));
    T4 = T6;
  } else {
  }
  T7 = CALL2(1,VARREF(YgooSioSportYputs),port_,suffix_);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1397_34) {
  P x_1396_,x_1395_;
  P valF2404;
  P keyF2403;
  P tup26F2402;
  P iF2401;
  P tmpF2400;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1,a2;
LINK_STACK();
  ARG(x_1396_, 0);
  ARG(x_1395_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1396_);
  tmpF2400 = T3;
  if (tmpF2400 != YPfalse) {
    T4 = tmpF2400;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1395_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1396_);
    iF2401 = T7;
    T10 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_1395_);
    T11 = CALL1(1,VARREF(YgooScolsScolYnow),x_1395_);
    T9 = CALL2(1,VARREF(Ytup),T10,T11);
    tup26F2402 = T9;
    T13 = CALL2(1,VARREF(YgooSmacrosYelt),tup26F2402,YPint((P)0));
    keyF2403 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYelt),tup26F2402,YPint((P)1));
    valF2404 = T15;
    T16 = CALL2(1,VARREF(YgooSmagYGE),iF2401,DYNREF(YgooSioSwriteYTmax_print_lengthT));
    if (T16 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_75));
      T17 = CALL1(1,FREEREF(1),YPfalse);
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    CALL2(1,FREEREF(3),keyF2403,FREEREF(2));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_76));
    CALL2(1,FREEREF(3),valF2404,FREEREF(2));
    T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1396_);
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1395_);
    a1 = T19;
    a2 = T20;
    x_1396_ = a1;
    x_1395_ = a2;
    goto loop;
    T14 = T18;
    T12 = T14;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_35) {
  P blow_;
  P x_1397F2405;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_x_1397_34,5);
  x_1397F2405 = T1;
  FUNINIT(x_1397F2405, 5,FREEREF(0),blow_,FREEREF(1),FREEREF(2),x_1397F2405);
  T4 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(3));
  T2 = CALL2(0,x_1397F2405,T3,T5);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_map_36) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_71));
  T1 = CALL1(1,VARREF(Yclass_of),x_);
  T0 = CALL1(1,VARREF(Yclass_name),T1);
  CALL2(1,VARREF(YgooSioSwriteYemit),port_,T0);
  T2 = FUNFAB(fun_35,4,port_,d_,recur_,x_);
  with_exit(T2);
  T3 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)62));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_recurring_write_37) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_78));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_38) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_80));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1401_39) {
  P x_1400_,x_1399_,x_1398_;
  P iF2410;
  P specF2409;
  P firstQF2408;
  P tmpF2407;
  P tmpF2406;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1400_, 0);
  ARG(x_1399_, 1);
  ARG(x_1398_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1400_);
  tmpF2406 = T3;
  if (tmpF2406 != YPfalse) {
    T4 = tmpF2406;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1399_);
    tmpF2407 = T6;
    if (tmpF2407 != YPfalse) {
      T7 = tmpF2407;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1398_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1400_);
    firstQF2408 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1399_);
    specF2409 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1398_);
    iF2410 = T14;
    T15 = CALL1(1,VARREF(Ynot),firstQF2408);
    if (T15 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    } else {
    }
    T17 = CALL1(1,VARREF(YgooSmacrosYemptyQ),FREEREF(1));
    if (T17 != YPfalse) {
      T18 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),specF2409);
    } else {
      T20 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),iF2410);
      T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T20);
      CALL3(1,VARREF(YgooSconditionsYmsg),FREEREF(0),LITREF(lit_85),T19);
      CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),specF2409);
      T21 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)41));
    }
    T23 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1400_);
    T24 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1399_);
    T25 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1398_);
    a1 = T23;
    a2 = T24;
    a3 = T25;
    x_1400_ = a1;
    x_1399_ = a2;
    x_1398_ = a3;
    goto loop;
    T13 = T22;
    T11 = T13;
    T9 = T11;
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_40) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_41) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_write_params_42) {
  P port_,x_,recur_;
  P tmpF2415;
  P valueF2414;
  P x_1401F2413;
  P namesF2412;
  P namesF2411;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(recur_, 2);
loop:
  T1 = CALL1(1,VARREF(Yfun_names),x_);
  namesF2411 = T1;
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)40));
  T3 = CALL1(1,VARREF(Yfun_names),x_);
  namesF2412 = T3;
  T4 = FUNSHELL(1,fun_x_1401_39,3);
  x_1401F2413 = T4;
  FUNINIT(x_1401F2413, 3,port_,namesF2412,x_1401F2413);
  T8 = fun_40;
  T9 = fun_41;
  T7 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T8,T9);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T11 = CALL1(1,VARREF(Yfun_specs),x_);
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
  T13 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T5 = CALL3(0,x_1401F2413,T6,T10,T12);
  T15 = CALL1(1,VARREF(Yfun_val),x_);
  valueF2414 = T15;
  T18 = CALL1(1,VARREF(Ynot),valueF2414);
  tmpF2415 = T18;
  if (tmpF2415 != YPfalse) {
    T19 = tmpF2415;
  } else {
    T20 = CALL2(1,VARREF(YgooSmacrosYEE),valueF2414,VARREF(YLanyG));
    T19 = T20;
  }
  T17 = T19;
  T16 = CALL1(1,VARREF(Ynot),T17);
  if (T16 != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),port_,LITREF(lit_86));
    T21 = CALL2(1,VARREF(YgooSioSwriteYwrite_value_type),port_,valueF2414);
  } else {
  }
  T22 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
  T14 = T22;
  T2 = T14;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_fun_guts_43) {
  P port_,x_,name_,recur_;
  P tmpF2417;
  P nameF2416;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(name_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_89));
  CALL2(1,VARREF(YgooSioSportYputs),port_,name_);
  T1 = CALL1(1,VARREF(Yfun_name),x_);
  nameF2416 = T1;
  tmpF2417 = nameF2416;
  if (tmpF2417 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
    T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF2416);
    T3 = CALL2(1,VARREF(YgooSioSportYputs),port_,T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
  CALL3(1,VARREF(YgooSioSwriteYwrite_params),port_,x_,recur_);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_90));
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_44) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_fun_guts),port_,x_,LITREF(lit_92),recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_45) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_fun_guts),port_,x_,LITREF(lit_94),recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_46) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T1 = CALL1(1,VARREF(Ysrc_loc_line),x_);
  T2 = CALL1(1,VARREF(Ysrc_loc_file),x_);
  T0 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_96),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_47) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_98));
  T1 = CALL1(1,VARREF(Yclass_name),x_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
  CALL2(1,VARREF(YgooSioSportYputs),port_,T0);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_99));
  T3 = CALL1(1,VARREF(Yclass_parents),x_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yclass_name),T3);
  CALL2(1,recur_,T2,d_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_100));
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_recurring_write_48) {
  P port_,x_,d_,recur_;
  P T0,T1;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_102));
  T0 = CALL1(1,VARREF(Ytype_object),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_103));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_recurring_write_49) {
  P port_,x_,d_,recur_;
  P T0,T1;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_105));
  T0 = CALL1(1,VARREF(Ytype_class),x_);
  CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_106));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_50) {
  P t_;
  P T0;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_51) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_108));
  T0 = FUNFAB(fun_50,1,port_);
  T1 = CALL1(1,VARREF(Yunion_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_110));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_52) {
  P t_;
  P T0;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_53) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_112));
  T0 = FUNFAB(fun_52,1,port_);
  T1 = CALL1(1,VARREF(Yproduct_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_114));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_54) {
  P t_;
  P T0;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_value_type_55) {
  P port_,x_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_117));
  T0 = FUNFAB(fun_54,1,port_);
  T1 = CALL1(1,VARREF(Yproduct_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_119));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_write_value_type_56) {
  P port_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_type_57) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T2 = CALL1(1,VARREF(Yclass_name),x_);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_type_58) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL4(1,VARREF(YgooSioSwriteYrecurring_write),port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recur_59) {
  P x_,d_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
loop:
  T0 = CALL4(1,VARREF(YgooSioSwriteYrecurring_write_type),FREEREF(0),x_,d_,FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_type_60) {
  P port_,x_;
  P recurF2418;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_59,2);
  recurF2418 = T1;
  FUNINIT(recurF2418, 2,port_,recurF2418);
  T2 = CALL2(0,recurF2418,x_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_61) {
  P port_,x_,d_,recur_;
  P T0,T1;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_128));
  T0 = CALL1(1,VARREF(Yprop_getter),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_129));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_x_1405_62) {
  P x_1404_,x_1403_;
  P getterF2422;
  P propF2421;
  P iF2420;
  P tmpF2419;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(x_1404_, 0);
  ARG(x_1403_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1404_);
  tmpF2419 = T3;
  if (tmpF2419 != YPfalse) {
    T4 = tmpF2419;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1403_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1404_);
    iF2420 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1403_);
    propF2421 = T9;
    T10 = CALL2(1,VARREF(YgooSmagYGE),iF2420,DYNREF(YgooSioSwriteYTmax_print_lengthT));
    if (T10 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_135));
      T11 = CALL1(1,FREEREF(1),YPfalse);
    } else {
    }
    T13 = CALL1(1,VARREF(Yprop_getter),propF2421);
    getterF2422 = T13;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    T14 = CALL1(1,VARREF(Yfun_name),getterF2422);
    CALL2(1,VARREF(YgooSioSwriteYemit),FREEREF(0),T14);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_136));
    T15 = CALL1(1,getterF2422,FREEREF(2));
    CALL2(1,FREEREF(4),T15,FREEREF(3));
    T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1404_);
    T18 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1403_);
    a1 = T17;
    a2 = T18;
    x_1404_ = a1;
    x_1403_ = a2;
    goto loop;
    T12 = T16;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P x_1405F2423;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
loop:
  VARSET(YTreport_prop_unbound_errorsQT,YPfalse);
  T1 = FUNSHELL(1,fun_x_1405_62,6);
  x_1405F2423 = T1;
  FUNINIT(x_1405F2423, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),x_1405F2423);
  T4 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T6 = CALL1(1,VARREF(Yobject_props),FREEREF(2));
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),T6);
  T2 = CALL2(0,x_1405F2423,T3,T5);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_64) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YTreport_prop_unbound_errorsQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P blow_;
  P x_1402F2424;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  x_1402F2424 = VARREF(YTreport_prop_unbound_errorsQT);
  T2 = FUNFAB(fun_63,5,FREEREF(0),blow_,FREEREF(1),FREEREF(2),FREEREF(3));
  T3 = FUNFAB(fun_64,1,x_1402F2424);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_66) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_131));
  T1 = CALL1(1,VARREF(Yclass_of),x_);
  T0 = CALL1(1,VARREF(Yclass_name),T1);
  CALL2(1,VARREF(YgooSioSwriteYemit),port_,T0);
  T2 = FUNFAB(fun_65,4,port_,x_,d_,recur_);
  with_exit(T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_137));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_recurring_write_67) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_139));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_68) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_141));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_arg_69) {
  P char_,class_;
  P tmpF2427;
  P argumentF2426;
  P current_indexF2425;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(char_, 0);
  ARG(class_, 1);
loop:
  T1 = BOXVAL(FREEREF(0));
  current_indexF2425 = T1;
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  BOXVAL(FREEREF(0)) = T2;
  T5 = CALL2(1,VARREF(YgooSmagYL),current_indexF2425,FREEREF(1));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yassert_error),LITREF(lit_146),FREEREF(2),FREEREF(3));
  } else {
  }
  T8 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(3),current_indexF2425);
  argumentF2426 = T8;
  T11 = CALL2(1,VARREF(YgooSmacrosYEE),class_,VARREF(YLanyG));
  tmpF2427 = T11;
  if (tmpF2427 != YPfalse) {
    T12 = tmpF2427;
  } else {
    T13 = CALL2(1,VARREF(YisaQ),argumentF2426,class_);
    T12 = T13;
  }
  T10 = T12;
  T9 = CALL1(1,VARREF(Ynot),T10);
  if (T9 != YPfalse) {
    T14 = CALL4(1,VARREF(Yassert_error),LITREF(lit_147),char_,class_,argumentF2426);
  } else {
  }
  T7 = argumentF2426;
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_70) {
  P c_;
  P x_1407F2429;
  P x_1406F2428;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmathYto_upper),c_);
    x_1406F2428 = T2;
    x_1407F2429 = VARREF(YgooSmacrosYEE);
    T5 = CALL2(1,x_1407F2429,x_1406F2428,YPchr((P)68));
    if (T5 != YPfalse) {
      T8 = CALL2(1,FREEREF(2),c_,VARREF(YLnumG));
      T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),T8);
      T6 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T7);
      T4 = T6;
    } else {
      T10 = CALL2(1,x_1407F2429,x_1406F2428,YPchr((P)66));
      if (T10 != YPfalse) {
        T13 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
        T12 = CALL2(1,VARREF(YgooSmathYnum_to_str),T13,YPint((P)2));
        T11 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T12);
        T9 = T11;
      } else {
        T15 = CALL2(1,x_1407F2429,x_1406F2428,YPchr((P)79));
        if (T15 != YPfalse) {
          T18 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
          T17 = CALL2(1,VARREF(YgooSmathYnum_to_str),T18,YPint((P)8));
          T16 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T17);
          T14 = T16;
        } else {
          T20 = CALL2(1,x_1407F2429,x_1406F2428,YPchr((P)88));
          if (T20 != YPfalse) {
            T23 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
            T22 = CALL2(1,VARREF(YgooSmathYnum_to_str),T23,YPint((P)16));
            T21 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T22);
            T19 = T21;
          } else {
            T25 = CALL2(1,x_1407F2429,x_1406F2428,YPchr((P)67));
            if (T25 != YPfalse) {
              T27 = CALL2(1,FREEREF(2),c_,VARREF(YLchrG));
              T26 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),T27);
              T24 = T26;
            } else {
              T29 = CALL2(1,x_1407F2429,x_1406F2428,YPchr((P)83));
              if (T29 != YPfalse) {
                T31 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                T30 = CALL2(1,VARREF(YgooSioSwriteYemit),FREEREF(1),T31);
                T28 = T30;
              } else {
                T33 = CALL2(1,x_1407F2429,x_1406F2428,YPchr((P)61));
                if (T33 != YPfalse) {
                  T35 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                  T34 = CALL2(1,VARREF(YgooSioSwriteYwrite),FREEREF(1),T35);
                  T32 = T34;
                } else {
                  T37 = CALL2(1,x_1407F2429,x_1406F2428,YPchr((P)84));
                  if (T37 != YPfalse) {
                    T39 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                    T38 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(1),T39);
                    T36 = T38;
                  } else {
                    T41 = CALL2(1,x_1407F2429,x_1406F2428,YPchr((P)37));
                    if (T41 != YPfalse) {
                      T42 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)37));
                      T40 = T42;
                    } else {
                      T43 = CALL3(1,VARREF(Yerror),LITREF(lit_149),c_,FREEREF(3));
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

FUNCODEDEF(fun_msg_71) {
  P port_,message_,arguments_;
  P argF2433;
  P num_argumentsF2432;
  P argument_indexF2431;
  P found_percentQF2430;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(arguments_, 2);
loop:
  found_percentQF2430 = YPfalse;
  found_percentQF2430 = BOXFAB(found_percentQF2430);
  check_type(YPint((P)0),VARREF(YLintG));
  argument_indexF2431 = YPint((P)0);
  argument_indexF2431 = BOXFAB(argument_indexF2431);
  T5 = CALL1(1,VARREF(YgooStypesYlen),arguments_);
  num_argumentsF2432 = T5;
  T6 = FUNSHELL(1,fun_arg_69,4);
  argF2433 = T6;
  FUNINIT(argF2433, 4,argument_indexF2431,num_argumentsF2432,message_,arguments_);
  T8 = FUNFAB(fun_70,4,found_percentQF2430,port_,argF2433,message_);
  T7 = CALL2(1,VARREF(YgooSmacrosYdo),T8,message_);
  T12 = BOXVAL(found_percentQF2430);
  T11 = CALL1(1,VARREF(Ynot),T12);
  T10 = CALL1(1,VARREF(Ynot),T11);
  if (T10 != YPfalse) {
    T13 = CALL2(1,VARREF(Yassert_error),LITREF(lit_150),message_);
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

FUNCODEDEF(fun_post_72) {
  P message_,arguments_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
loop:
  T0 = CALL5(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSconditionsYmsg),YPfalse,VARREF(YgooSioSportYout),message_,arguments_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pe_msg_73) {
  P port_expr_,message_,args_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_expr_, 0);
  ARG(message_, 1);
  ARG(args_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_142));
  T2 = CALL1(1,VARREF(Ylst),port_expr_);
  T3 = CALL1(1,VARREF(Ylst),message_);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T3,args_,LITREF(lit_155));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_maybe_pack_chars_74) {
  P UF2434;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = BOXVAL(FREEREF(1));
    UF2434 = T3;
    T7 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
    T8 = CALL1(1,VARREF(Ylst),FREEREF(2));
    T10 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),FREEREF(0));
    T9 = CALL1(1,VARREF(Ylst),T10);
    T6 = CALL4(1,VARREF(YgooSmacrosYcat),T7,T8,T9,LITREF(lit_155));
    T5 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2434,T6);
    T4 = BOXVAL(FREEREF(1)) = T5;
    T11 = CALL1(1,VARREF(YgooScolsScolxYzapX),FREEREF(0));
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_arg_75) {
  P char_;
  P current_indexF2435;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  CALL0(0,FREEREF(0));
  T1 = BOXVAL(FREEREF(1));
  current_indexF2435 = T1;
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  BOXVAL(FREEREF(1)) = T2;
  T5 = CALL2(1,VARREF(YgooSmagYL),current_indexF2435,FREEREF(2));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yassert_error),LITREF(lit_160),FREEREF(3),FREEREF(4));
  } else {
  }
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(4),current_indexF2435);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_76) {
  P c_;
  P UF2445;
  P UF2444;
  P UF2443;
  P UF2442;
  P UF2441;
  P UF2440;
  P UF2439;
  P UF2438;
  P x_1411F2437;
  P x_1410F2436;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmathYto_upper),c_);
    x_1410F2436 = T2;
    x_1411F2437 = VARREF(YgooSmacrosYEE);
    T5 = CALL2(1,x_1411F2437,x_1410F2436,YPchr((P)68));
    if (T5 != YPfalse) {
      T7 = BOXVAL(FREEREF(1));
      UF2438 = T7;
      T11 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
      T12 = CALL1(1,VARREF(Ylst),FREEREF(2));
      T15 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
      T17 = CALL1(1,FREEREF(3),c_);
      T16 = CALL1(1,VARREF(Ylst),T17);
      T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,LITREF(lit_155));
      T13 = CALL1(1,VARREF(Ylst),T14);
      T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,LITREF(lit_155));
      T9 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2438,T10);
      T8 = BOXVAL(FREEREF(1)) = T9;
      T6 = T8;
      T4 = T6;
    } else {
      T19 = CALL2(1,x_1411F2437,x_1410F2436,YPchr((P)66));
      if (T19 != YPfalse) {
        T21 = BOXVAL(FREEREF(1));
        UF2439 = T21;
        T25 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
        T26 = CALL1(1,VARREF(Ylst),FREEREF(2));
        T29 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
        T31 = CALL1(1,FREEREF(3),c_);
        T30 = CALL1(1,VARREF(Ylst),T31);
        T32 = CALL1(1,VARREF(Ylst),YPint((P)2));
        T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T32,LITREF(lit_155));
        T27 = CALL1(1,VARREF(Ylst),T28);
        T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,T27,LITREF(lit_155));
        T23 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2439,T24);
        T22 = BOXVAL(FREEREF(1)) = T23;
        T20 = T22;
        T18 = T20;
      } else {
        T34 = CALL2(1,x_1411F2437,x_1410F2436,YPchr((P)79));
        if (T34 != YPfalse) {
          T36 = BOXVAL(FREEREF(1));
          UF2440 = T36;
          T40 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
          T41 = CALL1(1,VARREF(Ylst),FREEREF(2));
          T44 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
          T46 = CALL1(1,FREEREF(3),c_);
          T45 = CALL1(1,VARREF(Ylst),T46);
          T47 = CALL1(1,VARREF(Ylst),YPint((P)8));
          T43 = CALL4(1,VARREF(YgooSmacrosYcat),T44,T45,T47,LITREF(lit_155));
          T42 = CALL1(1,VARREF(Ylst),T43);
          T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T42,LITREF(lit_155));
          T38 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2440,T39);
          T37 = BOXVAL(FREEREF(1)) = T38;
          T35 = T37;
          T33 = T35;
        } else {
          T49 = CALL2(1,x_1411F2437,x_1410F2436,YPchr((P)88));
          if (T49 != YPfalse) {
            T51 = BOXVAL(FREEREF(1));
            UF2441 = T51;
            T55 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
            T56 = CALL1(1,VARREF(Ylst),FREEREF(2));
            T59 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
            T61 = CALL1(1,FREEREF(3),c_);
            T60 = CALL1(1,VARREF(Ylst),T61);
            T62 = CALL1(1,VARREF(Ylst),YPint((P)16));
            T58 = CALL4(1,VARREF(YgooSmacrosYcat),T59,T60,T62,LITREF(lit_155));
            T57 = CALL1(1,VARREF(Ylst),T58);
            T54 = CALL4(1,VARREF(YgooSmacrosYcat),T55,T56,T57,LITREF(lit_155));
            T53 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2441,T54);
            T52 = BOXVAL(FREEREF(1)) = T53;
            T50 = T52;
            T48 = T50;
          } else {
            T64 = CALL2(1,x_1411F2437,x_1410F2436,YPchr((P)67));
            if (T64 != YPfalse) {
              T66 = BOXVAL(FREEREF(1));
              UF2442 = T66;
              T70 = CALL1(1,VARREF(Ylst),LITREF(lit_163));
              T71 = CALL1(1,VARREF(Ylst),FREEREF(2));
              T73 = CALL2(1,FREEREF(3),c_,VARREF(YLchrG));
              T72 = CALL1(1,VARREF(Ylst),T73);
              T69 = CALL4(1,VARREF(YgooSmacrosYcat),T70,T71,T72,LITREF(lit_155));
              T68 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2442,T69);
              T67 = BOXVAL(FREEREF(1)) = T68;
              T65 = T67;
              T63 = T65;
            } else {
              T75 = CALL2(1,x_1411F2437,x_1410F2436,YPchr((P)83));
              if (T75 != YPfalse) {
                T77 = BOXVAL(FREEREF(1));
                UF2443 = T77;
                T81 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
                T82 = CALL1(1,VARREF(Ylst),FREEREF(2));
                T84 = CALL1(1,FREEREF(3),c_);
                T83 = CALL1(1,VARREF(Ylst),T84);
                T80 = CALL4(1,VARREF(YgooSmacrosYcat),T81,T82,T83,LITREF(lit_155));
                T79 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2443,T80);
                T78 = BOXVAL(FREEREF(1)) = T79;
                T76 = T78;
                T74 = T76;
              } else {
                T86 = CALL2(1,x_1411F2437,x_1410F2436,YPchr((P)61));
                if (T86 != YPfalse) {
                  T88 = BOXVAL(FREEREF(1));
                  UF2444 = T88;
                  T92 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
                  T93 = CALL1(1,VARREF(Ylst),FREEREF(2));
                  T95 = CALL1(1,FREEREF(3),c_);
                  T94 = CALL1(1,VARREF(Ylst),T95);
                  T91 = CALL4(1,VARREF(YgooSmacrosYcat),T92,T93,T94,LITREF(lit_155));
                  T90 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2444,T91);
                  T89 = BOXVAL(FREEREF(1)) = T90;
                  T87 = T89;
                  T85 = T87;
                } else {
                  T97 = CALL2(1,x_1411F2437,x_1410F2436,YPchr((P)84));
                  if (T97 != YPfalse) {
                    T99 = BOXVAL(FREEREF(1));
                    UF2445 = T99;
                    T103 = CALL1(1,VARREF(Ylst),LITREF(lit_124));
                    T104 = CALL1(1,VARREF(Ylst),FREEREF(2));
                    T106 = CALL1(1,FREEREF(3),c_);
                    T105 = CALL1(1,VARREF(Ylst),T106);
                    T102 = CALL4(1,VARREF(YgooSmacrosYcat),T103,T104,T105,LITREF(lit_155));
                    T101 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2445,T102);
                    T100 = BOXVAL(FREEREF(1)) = T101;
                    T98 = T100;
                    T96 = T98;
                  } else {
                    T108 = CALL2(1,x_1411F2437,x_1410F2436,YPchr((P)37));
                    if (T108 != YPfalse) {
                      T109 = CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(4),YPchr((P)37));
                      T107 = T109;
                    } else {
                      T110 = CALL3(1,VARREF(Yerror),LITREF(lit_164),c_,FREEREF(5));
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

FUNCODEDEF(fun_pe_msg_77) {
  P port_expr_,message_,args_;
  P exprsF2454;
  P argF2453;
  P maybe_pack_charsF2452;
  P packer_F2451;
  P portF2450;
  P charsF2449;
  P num_argsF2448;
  P arg_indexF2447;
  P found_percentQF2446;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_expr_, 0);
  ARG(message_, 1);
  ARG(args_, 2);
loop:
  found_percentQF2446 = YPfalse;
  found_percentQF2446 = BOXFAB(found_percentQF2446);
  check_type(YPint((P)0),VARREF(YLintG));
  arg_indexF2447 = YPint((P)0);
  arg_indexF2447 = BOXFAB(arg_indexF2447);
  T5 = CALL1(1,VARREF(YgooStypesYlen),args_);
  num_argsF2448 = T5;
  T7 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  charsF2449 = T7;
  T9 = CALL0(1,VARREF(YgooSmacrosYgensym));
  portF2450 = T9;
  T12 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F2451 = T12;
  packer_F2451 = BOXFAB(packer_F2451);
  T14 = FUNSHELL(1,fun_maybe_pack_chars_74,3);
  maybe_pack_charsF2452 = T14;
  T15 = FUNSHELL(1,fun_arg_75,5);
  argF2453 = T15;
  FUNINIT(maybe_pack_charsF2452, 3,charsF2449,packer_F2451,portF2450);
  FUNINIT(argF2453, 5,maybe_pack_charsF2452,arg_indexF2447,num_argsF2448,message_,args_);
  T16 = FUNFAB(fun_76,6,found_percentQF2446,packer_F2451,portF2450,argF2453,charsF2449,message_);
  CALL2(1,VARREF(YgooSmacrosYdo),T16,message_);
  T17 = CALL0(0,maybe_pack_charsF2452);
  T19 = BOXVAL(packer_F2451);
  T18 = CALL1(1,VARREF(YgooSpackerYpacker_res),T19);
  T11 = T18;
  exprsF2454 = T11;
  T22 = BOXVAL(found_percentQF2446);
  T21 = CALL1(1,VARREF(Ynot),T22);
  T20 = CALL1(1,VARREF(Ynot),T21);
  if (T20 != YPfalse) {
    T23 = CALL2(1,VARREF(Yassert_error),LITREF(lit_165),message_);
  } else {
  }
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_166));
  T30 = CALL1(1,VARREF(Ylst),portF2450);
  T31 = CALL1(1,VARREF(Ylst),port_expr_);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,LITREF(lit_155));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T27 = CALL2(1,VARREF(YgooSmacrosYcat),T28,LITREF(lit_155));
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,exprsF2454,LITREF(lit_155));
  T10 = T24;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1415_78) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_171),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_79) {
  P return_;
  P x_1414F2465;
  P x_1414F2464;
  P x_1414F2463;
  P x_1414F2462;
  P x_1414F2461;
  P x_1414F2460;
  P argsF2459;
  P messageF2458;
  P portF2457;
  P x_1414F2456;
  P x_1415F2455;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1415_78,2);
  x_1415F2455 = T1;
  FUNINIT(x_1415F2455, 2,FREEREF(0),return_);
  x_1414F2456 = FREEREF(0);
  portF2457 = YPfalse;
  portF2457 = BOXFAB(portF2457);
  messageF2458 = YPfalse;
  messageF2458 = BOXFAB(messageF2458);
  argsF2459 = YPfalse;
  argsF2459 = BOXFAB(argsF2459);
  T9 = CALL2(1,VARREF(YisaQ),x_1414F2456,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1414F2456,LITREF(lit_171),x_1415F2455);
    x_1414F2460 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1414F2460,x_1415F2455);
    BOXVAL(portF2457) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1414F2460);
    x_1414F2461 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1414F2461,x_1415F2455);
    BOXVAL(messageF2458) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1414F2461);
    x_1414F2462 = T17;
    BOXVAL(argsF2459) = x_1414F2462;
    x_1414F2463 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1414F2463,x_1415F2455);
    x_1414F2464 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1414F2464,x_1415F2455);
    T22 = CALL1(1,VARREF(Ytail),x_1414F2463);
    x_1414F2465 = T22;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1414F2465,x_1415F2455);
    T19 = T23;
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1415F2455,LITREF(lit_172),x_1414F2456);
  }
  T26 = BOXVAL(portF2457);
  T27 = BOXVAL(messageF2458);
  T28 = BOXVAL(argsF2459);
  T25 = CALL3(1,VARREF(YgooSioSwriteYpe_msg),T26,T27,T28);
  T7 = T25;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_80) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_79,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_81) {
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_out_portG),LITREF(lit_14));
  BOXVAL(FREEREF(0)) = T0;
  T1 = BOXVAL(FREEREF(0));
  CALL5(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSconditionsYmsg),YPfalse,T1,FREEREF(1),FREEREF(2));
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(1,VARREF(YgooSioSportYport_contents),T3);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_82) {
  P tmpF2466;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2466 = T1;
  if (tmpF2466 != YPfalse) {
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
  P portF2467;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
loop:
  portF2467 = YPfalse;
  portF2467 = BOXFAB(portF2467);
  T3 = FUNFAB(fun_81,3,portF2467,message_,arguments_);
  T4 = FUNFAB(fun_82,1,portF2467);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_84) {
  P i_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),i_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooScolsScolYlow_elt),FREEREF(2),i_);
    T3 = CALL1(1,VARREF(YgooSmathYto_str),T4);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T3);
    T6 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T6;
    i_ = a1;
    goto loop;
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSwriteYsay) {
  P port_,args_;
  P loopF2469;
  P limF2468;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),args_);
  limF2468 = T1;
  T3 = FUNSHELL(1,fun_loop_84,4);
  loopF2469 = T3;
  FUNINIT(loopF2469, 4,limF2468,port_,args_,loopF2469);
  T4 = CALL1(0,loopF2469,YPint((P)0));
  T2 = T4;
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
  P T224,T225,T226,T227,T228,T229,T230,T231,T232,T233,T234,T235,T236,T237,T238,T239;
  P T240,T241,T242,T243,T244,T245,T246,T247,T248,T249,T250,T251,T252,T253,T254,T255;
  P T256,T257,T258,T259,T260,T261,T262,T263,T264,T265,T266,T267,T268,T269,T270,T271;
  P T272,T273,T274,T275,T276,T277,T278,T279,T280,T281,T282;
DEFCREGS();
loop:
  DYNDEFSET(YgooSioSwriteYTmax_print_depthT,YPint((P)4));
  DYNDEFSET(YgooSioSwriteYTmax_print_lengthT,YPint((P)12));
  lit_0 = YPPsym((P)"as-binding-name");
  lit_1 = YPPlist(1,YPPsym((P)"name"));
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_binding_name_0 = YPmet(FUNCODEREF(fun_as_binding_name_0),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(21));
  T3 = BOUNDP(YgooSioSwriteYas_binding_name);
  if (T3 != YPfalse) {
    T2 = VARREF(YgooSioSwriteYas_binding_name);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_as_binding_name_0;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YgooSioSwriteYas_binding_name,T1);
  lit_2 = YPPsym((P)"do-emit");
  lit_3 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T5 = YPsig(LITREF(lit_3),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_emit_1 = YPmet(FUNCODEREF(fun_do_emit_1),LITREF(lit_2),T5,ENVNUL,PNUL,sloc(24));
  T8 = BOUNDP(YgooSioSwriteYdo_emit);
  if (T8 != YPfalse) {
    T7 = VARREF(YgooSioSwriteYdo_emit);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_do_emit_1;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YgooSioSwriteYdo_emit,T6);
  lit_4 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T10 = YPsig(LITREF(lit_4),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_emit_2 = YPmet(FUNCODEREF(fun_do_emit_2),LITREF(lit_2),T10,ENVNUL,PNUL,sloc(27));
  T13 = BOUNDP(YgooSioSwriteYdo_emit);
  if (T13 != YPfalse) {
    T12 = VARREF(YgooSioSwriteYdo_emit);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_do_emit_2;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YgooSioSwriteYdo_emit,T11);
  lit_5 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T15 = YPsig(LITREF(lit_5),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_emit_3 = YPmet(FUNCODEREF(fun_do_emit_3),LITREF(lit_2),T15,ENVNUL,PNUL,sloc(30));
  T18 = BOUNDP(YgooSioSwriteYdo_emit);
  if (T18 != YPfalse) {
    T17 = VARREF(YgooSioSwriteYdo_emit);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_do_emit_3;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YgooSioSwriteYdo_emit,T16);
  lit_6 = YPPsym((P)"emit");
  lit_7 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_8 = YPPsym((P)"recur");
  lit_9 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"d"));
  lit_10 = YPsb((P)"*");
  T21 = YPsig(LITREF(lit_9),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_4 = YPmet(FUNCODEREF(fun_recur_4),LITREF(lit_8),T21,ENVNUL,PNUL,sloc(34));
  T20 = YPsig(LITREF(lit_7),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_emit_5 = YPmet(FUNCODEREF(fun_emit_5),LITREF(lit_6),T20,ENVNUL,PNUL,sloc(33));
  T24 = BOUNDP(YgooSioSwriteYemit);
  if (T24 != YPfalse) {
    T23 = VARREF(YgooSioSwriteYemit);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_emit_5;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YgooSioSwriteYemit,T22);
  lit_11 = YPPsym((P)"write-to-string");
  lit_12 = YPPlist(1,YPPsym((P)"x"));
  lit_13 = Ynil;
  lit_14 = YPsb((P)"");
  T28 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T28,ENVNUL,PNUL,sloc(40));
  T27 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T27,ENVNUL,PNUL,sloc(40));
  T26 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_write_to_string_8 = YPmet(FUNCODEREF(fun_write_to_string_8),LITREF(lit_11),T26,ENVNUL,PNUL,sloc(39));
  T31 = BOUNDP(YgooSioSwriteYwrite_to_string);
  if (T31 != YPfalse) {
    T30 = VARREF(YgooSioSwriteYwrite_to_string);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_write_to_string_8;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YgooSioSwriteYwrite_to_string,T29);
  lit_15 = YPPsym((P)"write");
  lit_16 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_17 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"d"));
  lit_18 = YPsb((P)"*");
  T34 = YPsig(LITREF(lit_17),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_9 = YPmet(FUNCODEREF(fun_recur_9),LITREF(lit_8),T34,ENVNUL,PNUL,sloc(43));
  T33 = YPsig(LITREF(lit_16),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_10 = YPmet(FUNCODEREF(fun_write_10),LITREF(lit_15),T33,ENVNUL,PNUL,sloc(42));
  T37 = BOUNDP(YgooSioSwriteYwrite);
  if (T37 != YPfalse) {
    T36 = VARREF(YgooSioSwriteYwrite);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_write_10;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YgooSioSwriteYwrite,T35);
  lit_19 = YPPsym((P)"writeln");
  lit_20 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T39 = YPsig(LITREF(lit_20),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_writeln_11 = YPmet(FUNCODEREF(fun_writeln_11),LITREF(lit_19),T39,ENVNUL,PNUL,sloc(48));
  T42 = BOUNDP(YgooSioSwriteYwriteln);
  if (T42 != YPfalse) {
    T41 = VARREF(YgooSioSwriteYwriteln);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_writeln_11;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YgooSioSwriteYwriteln,T40);
  lit_21 = YPPsym((P)"recurring-write");
  lit_22 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_23 = YPsb((P)"()");
  T44 = YPsig(LITREF(lit_22),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_12 = YPmet(FUNCODEREF(fun_recurring_write_12),LITREF(lit_21),T44,ENVNUL,PNUL,sloc(51));
  T47 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T47 != YPfalse) {
    T46 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_recurring_write_12;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YgooSioSwriteYrecurring_write,T45);
  lit_24 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_25 = YPsb((P)"$$");
  lit_26 = YPsb((P)"(");
  lit_27 = YPsb((P)")");
  T49 = YPsig(LITREF(lit_24),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLflatG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_13 = YPmet(FUNCODEREF(fun_recurring_write_13),LITREF(lit_21),T49,ENVNUL,PNUL,sloc(56));
  T52 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T52 != YPfalse) {
    T51 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_recurring_write_13;
  T50 = XCALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YgooSioSwriteYrecurring_write,T50);
  lit_28 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_29 = YPsb((P)"#(");
  lit_30 = YPsb((P)")");
  T54 = YPsig(LITREF(lit_28),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLtupG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_14 = YPmet(FUNCODEREF(fun_recurring_write_14),LITREF(lit_21),T54,ENVNUL,PNUL,sloc(60));
  T57 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T57 != YPfalse) {
    T56 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_recurring_write_14;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YgooSioSwriteYrecurring_write,T55);
  lit_31 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_32 = YPsb((P)"#[");
  lit_33 = YPsb((P)"]");
  T59 = YPsig(LITREF(lit_31),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSvecYLvecG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_15 = YPmet(FUNCODEREF(fun_recurring_write_15),LITREF(lit_21),T59,ENVNUL,PNUL,sloc(63));
  T62 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T62 != YPfalse) {
    T61 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_recurring_write_15;
  T60 = XCALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YgooSioSwriteYrecurring_write,T60);
  lit_34 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T64 = YPsig(LITREF(lit_34),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSmapYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_16 = YPmet(FUNCODEREF(fun_recurring_write_16),LITREF(lit_21),T64,ENVNUL,PNUL,sloc(66));
  T67 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T67 != YPfalse) {
    T66 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_recurring_write_16;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YgooSioSwriteYrecurring_write,T65);
  lit_35 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_36 = YPPsym((P)"t");
  lit_37 = YPPsym((P)"f");
  T69 = YPsig(LITREF(lit_35),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_17 = YPmet(FUNCODEREF(fun_recurring_write_17),LITREF(lit_21),T69,ENVNUL,PNUL,sloc(69));
  T72 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T72 != YPfalse) {
    T71 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_recurring_write_17;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YgooSioSwriteYrecurring_write,T70);
  lit_38 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T74 = YPsig(LITREF(lit_38),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsymG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_18 = YPmet(FUNCODEREF(fun_recurring_write_18),LITREF(lit_21),T74,ENVNUL,PNUL,sloc(74));
  T77 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T77 != YPfalse) {
    T76 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_recurring_write_18;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YgooSioSwriteYrecurring_write,T75);
  lit_39 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_40 = YPsb((P)"&0x");
  T79 = YPsig(LITREF(lit_39),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlocG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_19 = YPmet(FUNCODEREF(fun_recurring_write_19),LITREF(lit_21),T79,ENVNUL,PNUL,sloc(77));
  T82 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T82 != YPfalse) {
    T81 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_recurring_write_19;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YgooSioSwriteYrecurring_write,T80);
  lit_41 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_42 = YPsb((P)"<num>");
  T84 = YPsig(LITREF(lit_41),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLnumG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_20 = YPmet(FUNCODEREF(fun_recurring_write_20),LITREF(lit_21),T84,ENVNUL,PNUL,sloc(81));
  T87 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T87 != YPfalse) {
    T86 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_recurring_write_20;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YgooSioSwriteYrecurring_write,T85);
  lit_43 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T89 = YPsig(LITREF(lit_43),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_21 = YPmet(FUNCODEREF(fun_recurring_write_21),LITREF(lit_21),T89,ENVNUL,PNUL,sloc(86));
  T92 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T92 != YPfalse) {
    T91 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_recurring_write_21;
  T90 = XCALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YgooSioSwriteYrecurring_write,T90);
  lit_44 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T94 = YPsig(LITREF(lit_44),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_22 = YPmet(FUNCODEREF(fun_recurring_write_22),LITREF(lit_21),T94,ENVNUL,PNUL,sloc(89));
  T97 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T97 != YPfalse) {
    T96 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_recurring_write_22;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YgooSioSwriteYrecurring_write,T95);
  lit_45 = YPPsym((P)"write-boolean");
  lit_46 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"mumble"));
  T99 = YPsig(LITREF(lit_46),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_boolean_23 = YPmet(FUNCODEREF(fun_write_boolean_23),LITREF(lit_45),T99,ENVNUL,PNUL,sloc(92));
  T102 = BOUNDP(YgooSioSwriteYwrite_boolean);
  if (T102 != YPfalse) {
    T101 = VARREF(YgooSioSwriteYwrite_boolean);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_write_boolean_23;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YgooSioSwriteYwrite_boolean,T100);
  lit_47 = YPPsym((P)"write-number");
  lit_48 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T104 = YPsig(LITREF(lit_48),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_number_24 = YPmet(FUNCODEREF(fun_write_number_24),LITREF(lit_47),T104,ENVNUL,PNUL,sloc(96));
  T107 = BOUNDP(YgooSioSwriteYwrite_number);
  if (T107 != YPfalse) {
    T106 = VARREF(YgooSioSwriteYwrite_number);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_write_number_24;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YgooSioSwriteYwrite_number,T105);
  lit_49 = YPPsym((P)"write-char-literal");
  lit_50 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_51 = YPsb((P)"#\\");
  T109 = YPsig(LITREF(lit_50),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_char_literal_25 = YPmet(FUNCODEREF(fun_write_char_literal_25),LITREF(lit_49),T109,ENVNUL,PNUL,sloc(99));
  T112 = BOUNDP(YgooSioSwriteYwrite_char_literal);
  if (T112 != YPfalse) {
    T111 = VARREF(YgooSioSwriteYwrite_char_literal);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_write_char_literal_25;
  T110 = XCALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(YgooSioSwriteYwrite_char_literal,T110);
  lit_52 = YPPsym((P)"character-name");
  lit_53 = YPPlist(1,YPPsym((P)"char"));
  T114 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_character_name_26 = YPmet(FUNCODEREF(fun_character_name_26),LITREF(lit_52),T114,ENVNUL,PNUL,sloc(106));
  T117 = BOUNDP(YgooSioSwriteYcharacter_name);
  if (T117 != YPfalse) {
    T116 = VARREF(YgooSioSwriteYcharacter_name);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_character_name_26;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YgooSioSwriteYcharacter_name,T115);
  lit_54 = YPPsym((P)"write-string-literal");
  lit_55 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_56 = YPPsym((P)"loop");
  lit_57 = YPPlist(1,YPPsym((P)"i"));
  T120 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_27 = YPmet(FUNCODEREF(fun_loop_27),LITREF(lit_56),T120,ENVNUL,PNUL,sloc(113));
  T119 = YPsig(LITREF(lit_55),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_string_literal_28 = YPmet(FUNCODEREF(fun_write_string_literal_28),LITREF(lit_54),T119,ENVNUL,PNUL,sloc(110));
  T123 = BOUNDP(YgooSioSwriteYwrite_string_literal);
  if (T123 != YPfalse) {
    T122 = VARREF(YgooSioSwriteYwrite_string_literal);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_write_string_literal_28;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YgooSioSwriteYwrite_string_literal,T121);
  lit_58 = YPPsym((P)"write-list");
  lit_59 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_60 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"n"));
  lit_61 = YPsb((P)" ...");
  T126 = YPsig(LITREF(lit_60),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_29 = YPmet(FUNCODEREF(fun_loop_29),LITREF(lit_56),T126,ENVNUL,PNUL,sloc(128));
  T125 = YPsig(LITREF(lit_59),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_list_30 = YPmet(FUNCODEREF(fun_write_list_30),LITREF(lit_58),T125,ENVNUL,PNUL,sloc(122));
  T129 = BOUNDP(YgooSioSwriteYwrite_list);
  if (T129 != YPfalse) {
    T128 = VARREF(YgooSioSwriteYwrite_list);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_write_list_30;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YgooSioSwriteYwrite_list,T127);
  lit_62 = YPPsym((P)"quotation?");
  lit_63 = YPPlist(1,YPPsym((P)"x"));
  lit_64 = YPPsym((P)"quote");
  T131 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_quotationQ_31 = YPmet(FUNCODEREF(fun_quotationQ_31),LITREF(lit_62),T131,ENVNUL,PNUL,sloc(137));
  T134 = BOUNDP(YgooSioSwriteYquotationQ);
  if (T134 != YPfalse) {
    T133 = VARREF(YgooSioSwriteYquotationQ);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_quotationQ_31;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(YgooSioSwriteYquotationQ,T132);
  lit_65 = YPPsym((P)"write-flat");
  lit_66 = YPPlist(6,YPPsym((P)"port"),YPPsym((P)"prefix"),YPPsym((P)"x"),YPPsym((P)"suffix"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_67 = YPPlist(1,YPPsym((P)"i"));
  lit_68 = YPsb((P)" ...");
  T137 = YPsig(LITREF(lit_67),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_32 = YPmet(FUNCODEREF(fun_loop_32),LITREF(lit_56),T137,ENVNUL,PNUL,sloc(149));
  T136 = YPsig(LITREF(lit_66),YPPlist(6,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLflatG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_write_flat_33 = YPmet(FUNCODEREF(fun_write_flat_33),LITREF(lit_65),T136,ENVNUL,PNUL,sloc(143));
  T140 = BOUNDP(YgooSioSwriteYwrite_flat);
  if (T140 != YPfalse) {
    T139 = VARREF(YgooSioSwriteYwrite_flat);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_write_flat_33;
  T138 = XCALL2(1,VARREF(YPdefine_method),T139,T141);
  VARSET(YgooSioSwriteYwrite_flat,T138);
  lit_69 = YPPsym((P)"write-map");
  lit_70 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_71 = YPsb((P)"#<");
  lit_72 = YPPlist(1,YPPsym((P)"blow"));
  lit_73 = YPPsym((P)"x-1397");
  lit_74 = YPPlist(2,YPPsym((P)"x-1396"),YPPsym((P)"x-1395"));
  lit_75 = YPsb((P)" ...");
  lit_76 = YPsb((P)": ");
  T144 = YPsig(LITREF(lit_74),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1397_34 = YPmet(FUNCODEREF(fun_x_1397_34),LITREF(lit_73),T144,ENVNUL,PNUL,sloc(162));
  T143 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T143,ENVNUL,PNUL,sloc(161));
  T142 = YPsig(LITREF(lit_70),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSmapYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_map_36 = YPmet(FUNCODEREF(fun_write_map_36),LITREF(lit_69),T142,ENVNUL,PNUL,sloc(158));
  T147 = BOUNDP(YgooSioSwriteYwrite_map);
  if (T147 != YPfalse) {
    T146 = VARREF(YgooSioSwriteYwrite_map);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_write_map_36;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YgooSioSwriteYwrite_map,T145);
  lit_77 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_78 = YPsb((P)"#{In-port}");
  T149 = YPsig(LITREF(lit_77),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLin_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_37 = YPmet(FUNCODEREF(fun_recurring_write_37),LITREF(lit_21),T149,ENVNUL,PNUL,sloc(171));
  T152 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T152 != YPfalse) {
    T151 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T151 = YPfalse;
  }
  T153 = fun_recurring_write_37;
  T150 = XCALL2(1,VARREF(YPdefine_method),T151,T153);
  VARSET(YgooSioSwriteYrecurring_write,T150);
  lit_79 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_80 = YPsb((P)"#{Out-port}");
  T154 = YPsig(LITREF(lit_79),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLout_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_38 = YPmet(FUNCODEREF(fun_recurring_write_38),LITREF(lit_21),T154,ENVNUL,PNUL,sloc(174));
  T157 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T157 != YPfalse) {
    T156 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T156 = YPfalse;
  }
  T158 = fun_recurring_write_38;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T158);
  VARSET(YgooSioSwriteYrecurring_write,T155);
  lit_81 = YPPsym((P)"write-params");
  lit_82 = YPPlist(3,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"recur"));
  lit_83 = YPPsym((P)"x-1401");
  lit_84 = YPPlist(3,YPPsym((P)"x-1400"),YPPsym((P)"x-1399"),YPPsym((P)"x-1398"));
  lit_85 = YPsb((P)"(%s ");
  lit_86 = YPsb((P)" => ");
  T162 = YPsig(LITREF(lit_84),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1401_39 = YPmet(FUNCODEREF(fun_x_1401_39),LITREF(lit_83),T162,ENVNUL,PNUL,sloc(183));
  T161 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T161,ENVNUL,PNUL,sloc(183));
  T160 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T160,ENVNUL,PNUL,sloc(183));
  T159 = YPsig(LITREF(lit_82),YPPlist(3,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_write_params_42 = YPmet(FUNCODEREF(fun_write_params_42),LITREF(lit_81),T159,ENVNUL,PNUL,sloc(179));
  T165 = BOUNDP(YgooSioSwriteYwrite_params);
  if (T165 != YPfalse) {
    T164 = VARREF(YgooSioSwriteYwrite_params);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_write_params_42;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YgooSioSwriteYwrite_params,T163);
  lit_87 = YPPsym((P)"write-fun-guts");
  lit_88 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"name"),YPPsym((P)"recur"));
  lit_89 = YPsb((P)"#{");
  lit_90 = YPsb((P)"}");
  T167 = YPsig(LITREF(lit_88),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_fun_guts_43 = YPmet(FUNCODEREF(fun_write_fun_guts_43),LITREF(lit_87),T167,ENVNUL,PNUL,sloc(195));
  T170 = BOUNDP(YgooSioSwriteYwrite_fun_guts);
  if (T170 != YPfalse) {
    T169 = VARREF(YgooSioSwriteYwrite_fun_guts);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_write_fun_guts_43;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YgooSioSwriteYwrite_fun_guts,T168);
  lit_91 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_92 = YPsb((P)"Gen");
  T172 = YPsig(LITREF(lit_91),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLgenG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_44 = YPmet(FUNCODEREF(fun_recurring_write_44),LITREF(lit_21),T172,ENVNUL,PNUL,sloc(205));
  T175 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T175 != YPfalse) {
    T174 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_recurring_write_44;
  T173 = XCALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YgooSioSwriteYrecurring_write,T173);
  lit_93 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_94 = YPsb((P)"Met");
  T177 = YPsig(LITREF(lit_93),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLmetG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_45 = YPmet(FUNCODEREF(fun_recurring_write_45),LITREF(lit_21),T177,ENVNUL,PNUL,sloc(208));
  T180 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T180 != YPfalse) {
    T179 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_recurring_write_45;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YgooSioSwriteYrecurring_write,T178);
  lit_95 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_96 = YPsb((P)"<SRC-LOC %= %s>");
  T182 = YPsig(LITREF(lit_95),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsrc_locG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_46 = YPmet(FUNCODEREF(fun_recurring_write_46),LITREF(lit_21),T182,ENVNUL,PNUL,sloc(211));
  T185 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T185 != YPfalse) {
    T184 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_recurring_write_46;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YgooSioSwriteYrecurring_write,T183);
  lit_97 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_98 = YPsb((P)"#{Class ");
  lit_99 = YPsb((P)" ");
  lit_100 = YPsb((P)"}");
  T187 = YPsig(LITREF(lit_97),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_47 = YPmet(FUNCODEREF(fun_recurring_write_47),LITREF(lit_21),T187,ENVNUL,PNUL,sloc(214));
  T190 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T190 != YPfalse) {
    T189 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_recurring_write_47;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YgooSioSwriteYrecurring_write,T188);
  lit_101 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_102 = YPsb((P)"#{T= ");
  lit_103 = YPsb((P)"}");
  T192 = YPsig(LITREF(lit_101),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsingletonG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_48 = YPmet(FUNCODEREF(fun_recurring_write_48),LITREF(lit_21),T192,ENVNUL,PNUL,sloc(221));
  T195 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T195 != YPfalse) {
    T194 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_recurring_write_48;
  T193 = XCALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(YgooSioSwriteYrecurring_write,T193);
  lit_104 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_105 = YPsb((P)"#{T< ");
  lit_106 = YPsb((P)"}");
  T197 = YPsig(LITREF(lit_104),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsubclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_49 = YPmet(FUNCODEREF(fun_recurring_write_49),LITREF(lit_21),T197,ENVNUL,PNUL,sloc(226));
  T200 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T200 != YPfalse) {
    T199 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_recurring_write_49;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(YgooSioSwriteYrecurring_write,T198);
  lit_107 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_108 = YPsb((P)"#{T+");
  lit_109 = YPPlist(1,YPPsym((P)"t"));
  lit_110 = YPsb((P)"}");
  T203 = YPsig(LITREF(lit_109),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T203,ENVNUL,PNUL,sloc(233));
  T202 = YPsig(LITREF(lit_107),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLunionG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_51 = YPmet(FUNCODEREF(fun_recurring_write_51),LITREF(lit_21),T202,ENVNUL,PNUL,sloc(231));
  T206 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T206 != YPfalse) {
    T205 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_recurring_write_51;
  T204 = XCALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(YgooSioSwriteYrecurring_write,T204);
  lit_111 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_112 = YPsb((P)"#{T*");
  lit_113 = YPPlist(1,YPPsym((P)"t"));
  lit_114 = YPsb((P)"}");
  T209 = YPsig(LITREF(lit_113),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T209,ENVNUL,PNUL,sloc(238));
  T208 = YPsig(LITREF(lit_111),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLproductG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_53 = YPmet(FUNCODEREF(fun_recurring_write_53),LITREF(lit_21),T208,ENVNUL,PNUL,sloc(236));
  T212 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T212 != YPfalse) {
    T211 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T211 = YPfalse;
  }
  T213 = fun_recurring_write_53;
  T210 = XCALL2(1,VARREF(YPdefine_method),T211,T213);
  VARSET(YgooSioSwriteYrecurring_write,T210);
  lit_115 = YPPsym((P)"write-value-type");
  lit_116 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_117 = YPsb((P)"(tup");
  lit_118 = YPPlist(1,YPPsym((P)"t"));
  lit_119 = YPsb((P)")");
  T215 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T215,ENVNUL,PNUL,sloc(243));
  T214 = YPsig(LITREF(lit_116),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_value_type_55 = YPmet(FUNCODEREF(fun_write_value_type_55),LITREF(lit_115),T214,ENVNUL,PNUL,sloc(241));
  T218 = BOUNDP(YgooSioSwriteYwrite_value_type);
  if (T218 != YPfalse) {
    T217 = VARREF(YgooSioSwriteYwrite_value_type);
  } else {
    T217 = YPfalse;
  }
  T219 = fun_write_value_type_55;
  T216 = XCALL2(1,VARREF(YPdefine_method),T217,T219);
  VARSET(YgooSioSwriteYwrite_value_type,T216);
  lit_120 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T220 = YPsig(LITREF(lit_120),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_value_type_56 = YPmet(FUNCODEREF(fun_write_value_type_56),LITREF(lit_115),T220,ENVNUL,PNUL,sloc(246));
  T223 = BOUNDP(YgooSioSwriteYwrite_value_type);
  if (T223 != YPfalse) {
    T222 = VARREF(YgooSioSwriteYwrite_value_type);
  } else {
    T222 = YPfalse;
  }
  T224 = fun_write_value_type_56;
  T221 = XCALL2(1,VARREF(YPdefine_method),T222,T224);
  VARSET(YgooSioSwriteYwrite_value_type,T221);
  lit_121 = YPPsym((P)"recurring-write-type");
  lit_122 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T225 = YPsig(LITREF(lit_122),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_57 = YPmet(FUNCODEREF(fun_recurring_write_type_57),LITREF(lit_121),T225,ENVNUL,PNUL,sloc(249));
  T228 = BOUNDP(YgooSioSwriteYrecurring_write_type);
  if (T228 != YPfalse) {
    T227 = VARREF(YgooSioSwriteYrecurring_write_type);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_recurring_write_type_57;
  T226 = XCALL2(1,VARREF(YPdefine_method),T227,T229);
  VARSET(YgooSioSwriteYrecurring_write_type,T226);
  lit_123 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T230 = YPsig(LITREF(lit_123),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_58 = YPmet(FUNCODEREF(fun_recurring_write_type_58),LITREF(lit_121),T230,ENVNUL,PNUL,sloc(252));
  T233 = BOUNDP(YgooSioSwriteYrecurring_write_type);
  if (T233 != YPfalse) {
    T232 = VARREF(YgooSioSwriteYrecurring_write_type);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_recurring_write_type_58;
  T231 = XCALL2(1,VARREF(YPdefine_method),T232,T234);
  VARSET(YgooSioSwriteYrecurring_write_type,T231);
  lit_124 = YPPsym((P)"write-type");
  lit_125 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_126 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"d"));
  T236 = YPsig(LITREF(lit_126),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_59 = YPmet(FUNCODEREF(fun_recur_59),LITREF(lit_8),T236,ENVNUL,PNUL,sloc(256));
  T235 = YPsig(LITREF(lit_125),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_type_60 = YPmet(FUNCODEREF(fun_write_type_60),LITREF(lit_124),T235,ENVNUL,PNUL,sloc(255));
  T239 = BOUNDP(YgooSioSwriteYwrite_type);
  if (T239 != YPfalse) {
    T238 = VARREF(YgooSioSwriteYwrite_type);
  } else {
    T238 = YPfalse;
  }
  T240 = fun_write_type_60;
  T237 = XCALL2(1,VARREF(YPdefine_method),T238,T240);
  VARSET(YgooSioSwriteYwrite_type,T237);
  lit_127 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_128 = YPsb((P)"#{Prop ");
  lit_129 = YPsb((P)"}");
  T241 = YPsig(LITREF(lit_127),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLpropG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_61 = YPmet(FUNCODEREF(fun_recurring_write_61),LITREF(lit_21),T241,ENVNUL,PNUL,sloc(259));
  T244 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T244 != YPfalse) {
    T243 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T243 = YPfalse;
  }
  T245 = fun_recurring_write_61;
  T242 = XCALL2(1,VARREF(YPdefine_method),T243,T245);
  VARSET(YgooSioSwriteYrecurring_write,T242);
  lit_130 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_131 = YPsb((P)"#{");
  lit_132 = YPPlist(1,YPPsym((P)"blow"));
  lit_133 = YPPsym((P)"x-1405");
  lit_134 = YPPlist(2,YPPsym((P)"x-1404"),YPPsym((P)"x-1403"));
  lit_135 = YPsb((P)" ...");
  lit_136 = YPsb((P)": ");
  lit_137 = YPsb((P)"}");
  T250 = YPsig(LITREF(lit_134),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1405_62 = YPmet(FUNCODEREF(fun_x_1405_62),LITREF(lit_133),T250,ENVNUL,PNUL,sloc(269));
  T249 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T249,ENVNUL,PNUL,sloc(268));
  T248 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T248,ENVNUL,PNUL,sloc(268));
  T247 = YPsig(LITREF(lit_132),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T247,ENVNUL,PNUL,sloc(267));
  T246 = YPsig(LITREF(lit_130),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_66 = YPmet(FUNCODEREF(fun_recurring_write_66),LITREF(lit_21),T246,ENVNUL,PNUL,sloc(264));
  T253 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T253 != YPfalse) {
    T252 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T252 = YPfalse;
  }
  T254 = fun_recurring_write_66;
  T251 = XCALL2(1,VARREF(YPdefine_method),T252,T254);
  VARSET(YgooSioSwriteYrecurring_write,T251);
  lit_138 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_139 = YPsb((P)"#{End-of-file}");
  T257 = XCALL0(1,VARREF(YgooSmathYeof_object));
  T256 = XCALL1(1,VARREF(YgooStypesYtE),T257);
  T255 = YPsig(LITREF(lit_138),YPPlist(4,VARREF(YgooSioSportYLout_portG),T256,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_67 = YPmet(FUNCODEREF(fun_recurring_write_67),LITREF(lit_21),T255,ENVNUL,PNUL,sloc(279));
  T260 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T260 != YPfalse) {
    T259 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T259 = YPfalse;
  }
  T261 = fun_recurring_write_67;
  T258 = XCALL2(1,VARREF(YPdefine_method),T259,T261);
  VARSET(YgooSioSwriteYrecurring_write,T258);
  lit_140 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_141 = YPsb((P)"nul");
  T263 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(Ynul));
  T262 = YPsig(LITREF(lit_140),YPPlist(4,VARREF(YgooSioSportYLout_portG),T263,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_68 = YPmet(FUNCODEREF(fun_recurring_write_68),LITREF(lit_21),T262,ENVNUL,PNUL,sloc(282));
  T266 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T266 != YPfalse) {
    T265 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T265 = YPfalse;
  }
  T267 = fun_recurring_write_68;
  T264 = XCALL2(1,VARREF(YPdefine_method),T265,T267);
  VARSET(YgooSioSwriteYrecurring_write,T264);
  lit_142 = YPPsym((P)"msg");
  lit_143 = YPPlist(3,YPPsym((P)"port"),YPPsym((P)"message"),YPPsym((P)"arguments"));
  lit_144 = YPPsym((P)"arg");
  lit_145 = YPPlist(2,YPPsym((P)"char"),YPPsym((P)"class"));
  lit_146 = YPsb((P)"Too few arguments for msg string %=: %=");
  lit_147 = YPsb((P)"Msg argument for directive '%%%c' not of class %t: %=");
  lit_148 = YPPlist(1,YPPsym((P)"c"));
  lit_149 = YPsb((P)"Invalid msg directive '%s' in \"%s\"");
  lit_150 = YPsb((P)"Incomplete msg directive in \"%s\"");
  T270 = YPsig(LITREF(lit_145),YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_arg_69 = YPmet(FUNCODEREF(fun_arg_69),LITREF(lit_144),T270,ENVNUL,PNUL,sloc(289));
  T269 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T269,ENVNUL,PNUL,sloc(300));
  T268 = YPsig(LITREF(lit_143),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_msg_71 = YPmet(FUNCODEREF(fun_msg_71),LITREF(lit_142),T268,ENVNUL,PNUL,sloc(285));
  T273 = BOUNDP(YgooSconditionsYmsg);
  if (T273 != YPfalse) {
    T272 = VARREF(YgooSconditionsYmsg);
  } else {
    T272 = YPfalse;
  }
  T274 = fun_msg_71;
  T271 = XCALL2(1,VARREF(YPdefine_method),T272,T274);
  VARSET(YgooSconditionsYmsg,T271);
  lit_151 = YPPsym((P)"post");
  lit_152 = YPPlist(2,YPPsym((P)"message"),YPPsym((P)"arguments"));
  T277 = YPsig(LITREF(lit_152),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T276 = fun_post_72 = YPmet(FUNCODEREF(fun_post_72),LITREF(lit_151),T277,ENVNUL,PNUL,sloc(322));
  T281 = BOUNDP(YgooSioSwriteYpost);
  if (T281 != YPfalse) {
    T280 = VARREF(YgooSioSwriteYpost);
  } else {
    T280 = YPfalse;
  }
  T282 = fun_post_72;
  T279 = XCALL2(1,VARREF(YPdefine_method),T280,T282);
  T278 = VARSET(YgooSioSwriteYpost,T279);
  T275 = T278;
  return T275;
}

P YgooSioSwriteY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
DEFCREGS();
loop:
  lit_153 = YPPsym((P)"pe-msg");
  lit_154 = YPPlist(3,YPPsym((P)"port-expr"),YPPsym((P)"message"),YPPsym((P)"args"));
  lit_155 = Ynil;
  T0 = YPsig(LITREF(lit_154),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_pe_msg_73 = YPmet(FUNCODEREF(fun_pe_msg_73),LITREF(lit_153),T0,ENVNUL,PNUL,sloc(329));
  T3 = BOUNDP(YgooSioSwriteYpe_msg);
  if (T3 != YPfalse) {
    T2 = VARREF(YgooSioSwriteYpe_msg);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_pe_msg_73;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YgooSioSwriteYpe_msg,T1);
  lit_156 = YPPlist(3,YPPsym((P)"port-expr"),YPPsym((P)"message"),YPPsym((P)"args"));
  lit_157 = YPPsym((P)"maybe-pack-chars");
  lit_158 = YPPsym((P)"puts");
  lit_159 = YPPlist(1,YPPsym((P)"char"));
  lit_160 = YPsb((P)"Too few arguments for msg string %=: %=");
  lit_161 = YPPlist(1,YPPsym((P)"c"));
  lit_162 = YPPsym((P)"num-to-str");
  lit_163 = YPPsym((P)"put");
  lit_164 = YPsb((P)"Invalid msg directive '%s' in \"%s\"");
  lit_165 = YPsb((P)"Incomplete msg directive in \"%s\"");
  lit_166 = YPPsym((P)"let");
  T8 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_maybe_pack_chars_74 = YPmet(FUNCODEREF(fun_maybe_pack_chars_74),LITREF(lit_157),T8,ENVNUL,PNUL,sloc(343));
  T7 = YPsig(LITREF(lit_159),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_arg_75 = YPmet(FUNCODEREF(fun_arg_75),LITREF(lit_144),T7,ENVNUL,PNUL,sloc(344));
  T6 = YPsig(LITREF(lit_161),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T6,ENVNUL,PNUL,sloc(351));
  T5 = YPsig(LITREF(lit_156),YPPlist(3,VARREF(YLanyG),VARREF(YLstrG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_pe_msg_77 = YPmet(FUNCODEREF(fun_pe_msg_77),LITREF(lit_153),T5,ENVNUL,PNUL,sloc(332));
  T11 = BOUNDP(YgooSioSwriteYpe_msg);
  if (T11 != YPfalse) {
    T10 = VARREF(YgooSioSwriteYpe_msg);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_pe_msg_77;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T12);
  VARSET(YgooSioSwriteYpe_msg,T9);
  lit_167 = YPPlist(1,YPPsym((P)"exp"));
  lit_168 = YPPlist(1,YPPsym((P)"return"));
  lit_169 = YPPsym((P)"x-1415");
  lit_170 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_171 = YPPsym((P)"msg*");
  lit_172 = YPsb((P)"Match Pattern Failure");
  T15 = YPsig(LITREF(lit_170),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1415_78 = YPmet(FUNCODEREF(fun_x_1415_78),LITREF(lit_169),T15,ENVNUL,PNUL,YPfalse);
  T14 = YPsig(LITREF(lit_168),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T14,ENVNUL,PNUL,YPfalse);
  T13 = YPsig(LITREF(lit_167),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T13,ENVNUL,PNUL,YPfalse);
  T16 = fun_80;
  YPmacro(YPPsym((P)"goo/io/write"),YPPsym((P)"msg*"),T16);
  lit_173 = YPPsym((P)"msg-to-str");
  lit_174 = YPPlist(2,YPPsym((P)"message"),YPPsym((P)"arguments"));
  T19 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T19,ENVNUL,PNUL,sloc(382));
  T18 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T18,ENVNUL,PNUL,sloc(382));
  T17 = YPsig(LITREF(lit_174),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSconditionsYmsg_to_str = YPmet(FUNCODEREF(YgooSconditionsYmsg_to_str),LITREF(lit_173),T17,ENVNUL,PNUL,sloc(381));
  T20 = YgooSconditionsYmsg_to_str;
  VARSET(YgooSconditionsYmsg_to_str,T20);
  lit_175 = YPPsym((P)"say");
  lit_176 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"args"));
  lit_177 = YPPlist(1,YPPsym((P)"i"));
  T22 = YPsig(LITREF(lit_177),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_84 = YPmet(FUNCODEREF(fun_loop_84),LITREF(lit_56),T22,ENVNUL,PNUL,sloc(392));
  T21 = YPsig(LITREF(lit_176),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSwriteYsay = YPmet(FUNCODEREF(YgooSioSwriteYsay),LITREF(lit_175),T21,ENVNUL,PNUL,sloc(386));
  T23 = YgooSioSwriteYsay;
  VARSET(YgooSioSwriteYsay,T23);
  T24 = YPfalse;
  return T24;
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
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSlst;
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
  {"min", &module_info_gooSmag, NULL},
  {"msg", &module_info_gooSconditions, NULL},
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
  {"pos?", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
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
  {"1+", &module_info_gooSmath, NULL},
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"get-standard-read-macro", &module_info_gooSioSread, NULL},
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
  {"pack", &module_info_gooSpacker, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
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
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
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
  {"packing-in", &module_info_gooSpacker, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
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
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"port-handle", &module_info_gooSioSport, NULL},
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
  {"type-error-value", &module_info_gooSconditions, NULL},
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
  {"pick", &module_info_gooScolsSseq, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"packer", &module_info_gooSpacker, NULL},
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
  {"port-index-setter", &module_info_gooSioSport, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"zipped", &module_info_gooSruntime, NULL},
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
  {"$char-long-names", &module_info_gooSioSread, NULL},
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
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"set-standard-read-macro!", &module_info_gooSioSread, NULL},
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
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
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
  {"packed", &module_info_gooSpacker, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
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
  {"force-out", &module_info_gooSioSport, NULL},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"read-delimited-list", &module_info_gooSioSread, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
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
  {"<packer>", &module_info_gooSpacker, NULL},
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
  {"<", &module_info_gooSmag, NULL},
  {"curry", &module_info_gooSruntime, NULL},
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
  {"sin", &module_info_gooSmath, NULL},
  {"choose-handler", &module_info_gooSconditions, NULL},
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
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
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
  {"sinh", &module_info_gooSmath, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
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
  {"address-of", &module_info_gooSmath, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
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
  {"write-flat", CVAR, &YgooSioSwriteYwrite_flat},
  {"do-emit", CVAR, &YgooSioSwriteYdo_emit},
  {"write-string-literal", CVAR, &YgooSioSwriteYwrite_string_literal},
  {"write-type", CVAR, &YgooSioSwriteYwrite_type},
  {"pe-msg", CVAR, &YgooSioSwriteYpe_msg},
  {"quotation?", CVAR, &YgooSioSwriteYquotationQ},
  {"msg*", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"write-params", CVAR, &YgooSioSwriteYwrite_params},
  {"write-map", CVAR, &YgooSioSwriteYwrite_map},
  {"character-name", CVAR, &YgooSioSwriteYcharacter_name},
  {"write", CVAR, &YgooSioSwriteYwrite},
  {"as-binding-name", CVAR, &YgooSioSwriteYas_binding_name},
  {"write-value-type", CVAR, &YgooSioSwriteYwrite_value_type},
  {"write-boolean", CVAR, &YgooSioSwriteYwrite_boolean},
  {"write-fun-guts", CVAR, &YgooSioSwriteYwrite_fun_guts},
  {"post", CVAR, &YgooSioSwriteYpost},
  {"*max-print-length*", DVAR, &YgooSioSwriteYTmax_print_lengthT},
  {"---main-0---", PVAR, NULL},
  {"*max-print-depth*", DVAR, &YgooSioSwriteYTmax_print_depthT},
  {"recurring-write", CVAR, &YgooSioSwriteYrecurring_write},
  {"write-list", CVAR, &YgooSioSwriteYwrite_list},
  {"say", CVAR, &YgooSioSwriteYsay},
  {"write-number", CVAR, &YgooSioSwriteYwrite_number},
  {"writeln", CVAR, &YgooSioSwriteYwriteln},
  {"recurring-write-type", CVAR, &YgooSioSwriteYrecurring_write_type},
  {"write-char-literal", CVAR, &YgooSioSwriteYwrite_char_literal},
  {"write-to-string", CVAR, &YgooSioSwriteYwrite_to_string},
  {"emit", CVAR, &YgooSioSwriteYemit},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"msg", NULL},
  {"msg-to-str", NULL},
  {"write-type", NULL},
  {"pe-msg", NULL},
  {"msg*", NULL},
  {"write", NULL},
  {"post", NULL},
  {"*max-print-length*", NULL},
  {"*max-print-depth*", NULL},
  {"write-to-string", NULL},
  {"recurring-write", NULL},
  {"say", NULL},
  {"emit", NULL},
  {"writeln", NULL},
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
