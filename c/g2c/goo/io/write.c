/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/io/write");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/io/write */

EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
DEF(YgooSioSwriteYwrite_string_literal,"goo/io/write","write-string-literal");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ylst,"goo/boot","lst");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
DEF(YgooSioSwriteYquotationQ,"goo/io/write","quotation?");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
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
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
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
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
DEF(YgooSioSwriteYwrite_params,"goo/io/write","write-params");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLanyG,"goo/boot","<any>");
DEF(YgooSioSwriteYwrite_map,"goo/io/write","write-map");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(YgooSioSwriteYcharacter_name,"goo/io/write","character-name");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
DEF(YgooSioSwriteYas_binding_name,"goo/io/write","as-binding-name");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yhead,"goo/boot","head");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
DEF(YgooSioSwriteYwrite_value_type,"goo/io/write","write-value-type");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
DEF(YgooSioSwriteYwrite_fun_guts,"goo/io/write","write-fun-guts");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
DEF(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYS,"goo/math","/");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSpackerYpacker,"goo/packer","packer");
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
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYK,"goo/math","|");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
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
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
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
DEF(YgooSioSwriteYwrite_char_literal,"goo/io/write","write-char-literal");
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
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSruntimeYalways,"goo/runtime","always");
DEF(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
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
DYNDEF(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYGGG,"goo/math",">>>");
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
DEF(YgooSioSwriteYwrite_list,"goo/io/write","write-list");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
DYNDEF(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
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
DEF(YgooSioSwriteYrecurring_write_type,"goo/io/write","recurring-write-type");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Ynil,"goo/boot","nil");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YLcolXG,"goo/boot","<col!>");
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
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YgooSioSwriteYemit,"goo/io/write","emit");
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
DEF(YgooSioSwriteYwrite_number,"goo/io/write","write-number");
EXT(YgooSmathYsin,"goo/math","sin");
DEF(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yunexec,"goo/boot","unexec");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYGG,"goo/math",">>");
DEF(YgooSioSwriteYwrite_flat,"goo/io/write","write-flat");
EXT(Ytail,"goo/boot","tail");
DEF(YgooSioSwriteYsay,"goo/io/write","say");
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
DEF(YgooSioSwriteYdo_emit,"goo/io/write","do-emit");
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
DEF(YgooSioSwriteYwrite_boolean,"goo/io/write","write-boolean");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
DEF(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
DEF(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
DEF(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLproductG,"goo/boot","<product>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_34);
DEFLIT(lit_12);
DEFLIT(lit_83);
DEFLIT(lit_89);
DEFLIT(lit_23);
DEFLIT(lit_46);
DEFLIT(lit_42);
DEFLIT(lit_95);
DEFLIT(lit_106);
DEFLIT(lit_112);
DEFLIT(lit_74);
DEFLIT(lit_61);
DEFLIT(lit_52);
DEFLIT(lit_58);
DEFLIT(lit_127);
DEFLIT(lit_119);
DEFLIT(lit_140);
DEFLIT(lit_75);
DEFLIT(lit_120);
DEFLIT(lit_3);
DEFLIT(lit_171);
DEFLIT(lit_144);
DEFLIT(lit_55);
DEFLIT(lit_85);
DEFLIT(lit_160);
DEFLIT(lit_162);
DEFLIT(lit_142);
DEFLIT(lit_157);
DEFLIT(lit_154);
DEFLIT(lit_70);
DEFLIT(lit_11);
DEFLIT(lit_141);
DEFLIT(lit_18);
DEFLIT(lit_21);
DEFLIT(lit_15);
DEFLIT(lit_174);
DEFLIT(lit_27);
DEFLIT(lit_167);
DEFLIT(lit_123);
DEFLIT(lit_30);
DEFLIT(lit_98);
DEFLIT(lit_36);
DEFLIT(lit_169);
DEFLIT(lit_33);
DEFLIT(lit_41);
DEFLIT(lit_159);
DEFLIT(lit_101);
DEFLIT(lit_135);
DEFLIT(lit_156);
DEFLIT(lit_175);
DEFLIT(lit_134);
DEFLIT(lit_2);
DEFLIT(lit_78);
DEFLIT(lit_7);
DEFLIT(lit_115);
DEFLIT(lit_151);
DEFLIT(lit_73);
DEFLIT(lit_116);
DEFLIT(lit_118);
DEFLIT(lit_35);
DEFLIT(lit_109);
DEFLIT(lit_91);
DEFLIT(lit_158);
DEFLIT(lit_138);
DEFLIT(lit_113);
DEFLIT(lit_29);
DEFLIT(lit_155);
DEFLIT(lit_43);
DEFLIT(lit_146);
DEFLIT(lit_32);
DEFLIT(lit_76);
DEFLIT(lit_49);
DEFLIT(lit_128);
DEFLIT(lit_93);
DEFLIT(lit_1);
DEFLIT(lit_71);
DEFLIT(lit_24);
DEFLIT(lit_170);
DEFLIT(lit_164);
DEFLIT(lit_60);
DEFLIT(lit_150);
DEFLIT(lit_86);
DEFLIT(lit_31);
DEFLIT(lit_54);
DEFLIT(lit_145);
DEFLIT(lit_51);
DEFLIT(lit_66);
DEFLIT(lit_48);
DEFLIT(lit_99);
DEFLIT(lit_10);
DEFLIT(lit_126);
DEFLIT(lit_40);
DEFLIT(lit_77);
DEFLIT(lit_19);
DEFLIT(lit_80);
DEFLIT(lit_105);
DEFLIT(lit_4);
DEFLIT(lit_102);
DEFLIT(lit_26);
DEFLIT(lit_62);
DEFLIT(lit_137);
DEFLIT(lit_132);
DEFLIT(lit_94);
DEFLIT(lit_14);
DEFLIT(lit_148);
DEFLIT(lit_5);
DEFLIT(lit_172);
DEFLIT(lit_129);
DEFLIT(lit_16);
DEFLIT(lit_57);
DEFLIT(lit_63);
DEFLIT(lit_147);
DEFLIT(lit_13);
DEFLIT(lit_28);
DEFLIT(lit_69);
DEFLIT(lit_111);
DEFLIT(lit_68);
DEFLIT(lit_173);
DEFLIT(lit_165);
DEFLIT(lit_103);
DEFLIT(lit_96);
DEFLIT(lit_45);
DEFLIT(lit_161);
DEFLIT(lit_125);
DEFLIT(lit_59);
DEFLIT(lit_81);
DEFLIT(lit_37);
DEFLIT(lit_79);
DEFLIT(lit_65);
DEFLIT(lit_67);
DEFLIT(lit_82);
DEFLIT(lit_166);
DEFLIT(lit_108);
DEFLIT(lit_50);
DEFLIT(lit_152);
DEFLIT(lit_22);
DEFLIT(lit_107);
DEFLIT(lit_130);
DEFLIT(lit_97);
DEFLIT(lit_17);
DEFLIT(lit_92);
DEFLIT(lit_124);
DEFLIT(lit_100);
DEFLIT(lit_84);
DEFLIT(lit_53);
DEFLIT(lit_20);
DEFLIT(lit_90);
DEFLIT(lit_64);
DEFLIT(lit_168);
DEFLIT(lit_25);
DEFLIT(lit_153);
DEFLIT(lit_176);
DEFLIT(lit_6);
DEFLIT(lit_39);
DEFLIT(lit_114);
DEFLIT(lit_47);
DEFLIT(lit_163);
DEFLIT(lit_136);
DEFLIT(lit_139);
DEFLIT(lit_122);
DEFLIT(lit_88);
DEFLIT(lit_56);
DEFLIT(lit_9);
DEFLIT(lit_131);
DEFLIT(lit_149);
DEFLIT(lit_117);
DEFLIT(lit_0);
DEFLIT(lit_121);
DEFLIT(lit_72);
DEFLIT(lit_8);
DEFLIT(lit_110);
DEFLIT(lit_44);
DEFLIT(lit_143);
DEFLIT(lit_87);
DEFLIT(lit_133);
DEFLIT(lit_38);
DEFLIT(lit_104);

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
LOCFOR(fun_maybe_pack_chars_73);
LOCFOR(fun_arg_74);
LOCFOR(fun_75);
FUNFOR(YgooSioSwriteYpe_msg);
LOCFOR(fun_x_1413_77);
LOCFOR(fun_78);
LOCFOR(fun_79);
LOCFOR(fun_80);
LOCFOR(fun_81);
FUNFOR(YgooSconditionsYmsg_to_str);
LOCFOR(fun_loop_83);
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
  P recurF2360;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_4,2);
  recurF2360 = T1;
  FUNINIT(recurF2360, 2,port_,recurF2360);
  T2 = CALL2(0,recurF2360,x_,YPint((P)-1));
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
  P tmpF2361;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2361 = T1;
  if (tmpF2361 != YPfalse) {
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
  P portF2362;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  portF2362 = YPfalse;
  portF2362 = BOXFAB(portF2362);
  T3 = FUNFAB(fun_6,2,portF2362,x_);
  T4 = FUNFAB(fun_7,1,portF2362);
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
  P recurF2363;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_9,2);
  recurF2363 = T1;
  FUNINIT(recurF2363, 2,port_,recurF2363);
  T2 = CALL2(0,recurF2363,x_,YPint((P)-1));
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
  P prefixF2364;
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
  prefixF2364 = T1;
  T5 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,prefixF2364,x_,LITREF(lit_27),d_,recur_);
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
  P tF2368;
  P xF2367;
  P xF2366;
  P xF2365;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_40));
  xF2365 = x_;
  T4 = (P)YPuntag_into(xF2365);
  T3 = T4;
  xF2366 = T3;
  xF2367 = xF2366;
  tF2368 = (P)1;
  T7 = (P)YPiLL(xF2367,(P)2);
  T6 = (P)YPiv(T7,tF2368);
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
  P probeF2369;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSwriteYcharacter_name),x_);
  probeF2369 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_51));
  if (probeF2369 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSioSwriteYwrite),port_,probeF2369);
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
  P tmpF2371;
  P assocF2370;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooScolsSlstYassqn),char_,VARREF(YgooSioSreadYDchar_long_names),YPint((P)1));
  assocF2370 = T1;
  tmpF2371 = assocF2370;
  if (tmpF2371 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmacrosY1st),assocF2370);
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
  P tmpF2373;
  P cF2372;
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
    cF2372 = T4;
    T6 = CALL2(1,VARREF(YgooSmathYE),cF2372,YPchr((P)92));
    tmpF2373 = T6;
    if (tmpF2373 != YPfalse) {
      T7 = tmpF2373;
    } else {
      T8 = CALL2(1,VARREF(YgooSmathYE),cF2372,YPchr((P)34));
      T7 = T8;
    }
    T5 = T7;
    if (T5 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)92));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),cF2372);
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
  P loopF2375;
  P lenF2374;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)34));
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  lenF2374 = T1;
  T3 = FUNSHELL(1,fun_loop_27,4);
  loopF2375 = T3;
  FUNINIT(loopF2375, 4,lenF2374,port_,x_,loopF2375);
  T4 = CALL1(0,loopF2375,YPint((P)0));
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
  P loopF2376;
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
    loopF2376 = T6;
    FUNINIT(loopF2376, 4,port_,d_,recur_,loopF2376);
    T8 = CALL1(1,VARREF(Ytail),x_);
    T7 = CALL2(0,loopF2376,T8,YPint((P)1));
    T9 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
    T0 = T9;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_quotationQ_31) {
  P x_;
  P tmpF2379;
  P tmpF2378;
  P tmpF2377;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  tmpF2377 = T1;
  if (tmpF2377 != YPfalse) {
    T5 = CALL1(1,VARREF(Yhead),x_);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,LITREF(lit_64));
    tmpF2378 = T4;
    if (tmpF2378 != YPfalse) {
      T9 = CALL1(1,VARREF(Ytail),x_);
      T8 = CALL2(1,VARREF(YisaQ),T9,VARREF(YLlstG));
      tmpF2379 = T8;
      if (tmpF2379 != YPfalse) {
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
  P loopF2381;
  P zF2380;
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
  zF2380 = T1;
  T2 = CALL2(1,VARREF(YgooSmagYG),zF2380,YPint((P)0));
  if (T2 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
    CALL2(1,recur_,T3,d_);
    T5 = FUNSHELL(1,fun_loop_32,6);
    loopF2381 = T5;
    FUNINIT(loopF2381, 6,port_,zF2380,x_,d_,recur_,loopF2381);
    T6 = CALL1(0,loopF2381,YPint((P)1));
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
  P valF2386;
  P keyF2385;
  P tup26F2384;
  P iF2383;
  P tmpF2382;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1,a2;
LINK_STACK();
  ARG(x_1396_, 0);
  ARG(x_1395_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1396_);
  tmpF2382 = T3;
  if (tmpF2382 != YPfalse) {
    T4 = tmpF2382;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1395_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1396_);
    iF2383 = T7;
    T10 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_1395_);
    T11 = CALL1(1,VARREF(YgooScolsScolYnow),x_1395_);
    T9 = CALL2(1,VARREF(Ytup),T10,T11);
    tup26F2384 = T9;
    T13 = CALL2(1,VARREF(YgooSmacrosYelt),tup26F2384,YPint((P)0));
    keyF2385 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYelt),tup26F2384,YPint((P)1));
    valF2386 = T15;
    T16 = CALL2(1,VARREF(YgooSmagYGE),iF2383,DYNREF(YgooSioSwriteYTmax_print_lengthT));
    if (T16 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_75));
      T17 = CALL1(1,FREEREF(1),YPfalse);
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    CALL2(1,FREEREF(3),keyF2385,FREEREF(2));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_76));
    CALL2(1,FREEREF(3),valF2386,FREEREF(2));
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
  P x_1397F2387;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_x_1397_34,5);
  x_1397F2387 = T1;
  FUNINIT(x_1397F2387, 5,FREEREF(0),blow_,FREEREF(1),FREEREF(2),x_1397F2387);
  T4 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(3));
  T2 = CALL2(0,x_1397F2387,T3,T5);
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
  P iF2392;
  P specF2391;
  P firstQF2390;
  P tmpF2389;
  P tmpF2388;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1400_, 0);
  ARG(x_1399_, 1);
  ARG(x_1398_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1400_);
  tmpF2388 = T3;
  if (tmpF2388 != YPfalse) {
    T4 = tmpF2388;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1399_);
    tmpF2389 = T6;
    if (tmpF2389 != YPfalse) {
      T7 = tmpF2389;
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
    firstQF2390 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1399_);
    specF2391 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1398_);
    iF2392 = T14;
    T15 = CALL1(1,VARREF(Ynot),firstQF2390);
    if (T15 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    } else {
    }
    T17 = CALL1(1,VARREF(YgooSmacrosYemptyQ),FREEREF(1));
    if (T17 != YPfalse) {
      T18 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),specF2391);
    } else {
      T20 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),iF2392);
      T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T20);
      CALL3(1,VARREF(YgooSconditionsYmsg),FREEREF(0),LITREF(lit_85),T19);
      CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),specF2391);
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
  P tmpF2397;
  P valueF2396;
  P x_1401F2395;
  P namesF2394;
  P namesF2393;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(recur_, 2);
loop:
  T1 = CALL1(1,VARREF(Yfun_names),x_);
  namesF2393 = T1;
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)40));
  T3 = CALL1(1,VARREF(Yfun_names),x_);
  namesF2394 = T3;
  T4 = FUNSHELL(1,fun_x_1401_39,3);
  x_1401F2395 = T4;
  FUNINIT(x_1401F2395, 3,port_,namesF2394,x_1401F2395);
  T8 = fun_40;
  T9 = fun_41;
  T7 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T8,T9);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T11 = CALL1(1,VARREF(Yfun_specs),x_);
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
  T13 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T5 = CALL3(0,x_1401F2395,T6,T10,T12);
  T15 = CALL1(1,VARREF(Yfun_val),x_);
  valueF2396 = T15;
  T18 = CALL1(1,VARREF(Ynot),valueF2396);
  tmpF2397 = T18;
  if (tmpF2397 != YPfalse) {
    T19 = tmpF2397;
  } else {
    T20 = CALL2(1,VARREF(YgooSmacrosYEE),valueF2396,VARREF(YLanyG));
    T19 = T20;
  }
  T17 = T19;
  T16 = CALL1(1,VARREF(Ynot),T17);
  if (T16 != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),port_,LITREF(lit_86));
    T21 = CALL2(1,VARREF(YgooSioSwriteYwrite_value_type),port_,valueF2396);
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
  P tmpF2399;
  P nameF2398;
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
  nameF2398 = T1;
  tmpF2399 = nameF2398;
  if (tmpF2399 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
    T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF2398);
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
  P recurF2400;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_59,2);
  recurF2400 = T1;
  FUNINIT(recurF2400, 2,port_,recurF2400);
  T2 = CALL2(0,recurF2400,x_,YPint((P)0));
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
  P getterF2404;
  P propF2403;
  P iF2402;
  P tmpF2401;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(x_1404_, 0);
  ARG(x_1403_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1404_);
  tmpF2401 = T3;
  if (tmpF2401 != YPfalse) {
    T4 = tmpF2401;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1403_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1404_);
    iF2402 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1403_);
    propF2403 = T9;
    T10 = CALL2(1,VARREF(YgooSmagYGE),iF2402,DYNREF(YgooSioSwriteYTmax_print_lengthT));
    if (T10 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_135));
      T11 = CALL1(1,FREEREF(1),YPfalse);
    } else {
    }
    T13 = CALL1(1,VARREF(Yprop_getter),propF2403);
    getterF2404 = T13;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    T14 = CALL1(1,VARREF(Yfun_name),getterF2404);
    CALL2(1,VARREF(YgooSioSwriteYemit),FREEREF(0),T14);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_136));
    T15 = CALL1(1,getterF2404,FREEREF(2));
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
  P x_1405F2405;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
loop:
  VARSET(YTreport_prop_unbound_errorsQT,YPfalse);
  T1 = FUNSHELL(1,fun_x_1405_62,6);
  x_1405F2405 = T1;
  FUNINIT(x_1405F2405, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),x_1405F2405);
  T4 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T6 = CALL1(1,VARREF(Yobject_props),FREEREF(2));
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),T6);
  T2 = CALL2(0,x_1405F2405,T3,T5);
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
  P x_1402F2406;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  x_1402F2406 = VARREF(YTreport_prop_unbound_errorsQT);
  T2 = FUNFAB(fun_63,5,FREEREF(0),blow_,FREEREF(1),FREEREF(2),FREEREF(3));
  T3 = FUNFAB(fun_64,1,x_1402F2406);
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
  P tmpF2409;
  P argumentF2408;
  P current_indexF2407;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(char_, 0);
  ARG(class_, 1);
loop:
  T1 = BOXVAL(FREEREF(0));
  current_indexF2407 = T1;
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  BOXVAL(FREEREF(0)) = T2;
  T5 = CALL2(1,VARREF(YgooSmagYL),current_indexF2407,FREEREF(1));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yassert_error),LITREF(lit_146),FREEREF(2),FREEREF(3));
  } else {
  }
  T8 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(3),current_indexF2407);
  argumentF2408 = T8;
  T11 = CALL2(1,VARREF(YgooSmacrosYEE),class_,VARREF(YLanyG));
  tmpF2409 = T11;
  if (tmpF2409 != YPfalse) {
    T12 = tmpF2409;
  } else {
    T13 = CALL2(1,VARREF(YisaQ),argumentF2408,class_);
    T12 = T13;
  }
  T10 = T12;
  T9 = CALL1(1,VARREF(Ynot),T10);
  if (T9 != YPfalse) {
    T14 = CALL4(1,VARREF(Yassert_error),LITREF(lit_147),char_,class_,argumentF2408);
  } else {
  }
  T7 = argumentF2408;
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_70) {
  P c_;
  P x_1407F2411;
  P x_1406F2410;
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
    x_1406F2410 = T2;
    x_1407F2411 = VARREF(YgooSmacrosYEE);
    T5 = CALL2(1,x_1407F2411,x_1406F2410,YPchr((P)68));
    if (T5 != YPfalse) {
      T8 = CALL2(1,FREEREF(2),c_,VARREF(YLnumG));
      T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),T8);
      T6 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T7);
      T4 = T6;
    } else {
      T10 = CALL2(1,x_1407F2411,x_1406F2410,YPchr((P)66));
      if (T10 != YPfalse) {
        T13 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
        T12 = CALL2(1,VARREF(YgooSmathYnum_to_str),T13,YPint((P)2));
        T11 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T12);
        T9 = T11;
      } else {
        T15 = CALL2(1,x_1407F2411,x_1406F2410,YPchr((P)79));
        if (T15 != YPfalse) {
          T18 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
          T17 = CALL2(1,VARREF(YgooSmathYnum_to_str),T18,YPint((P)8));
          T16 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T17);
          T14 = T16;
        } else {
          T20 = CALL2(1,x_1407F2411,x_1406F2410,YPchr((P)88));
          if (T20 != YPfalse) {
            T23 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
            T22 = CALL2(1,VARREF(YgooSmathYnum_to_str),T23,YPint((P)16));
            T21 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T22);
            T19 = T21;
          } else {
            T25 = CALL2(1,x_1407F2411,x_1406F2410,YPchr((P)67));
            if (T25 != YPfalse) {
              T27 = CALL2(1,FREEREF(2),c_,VARREF(YLchrG));
              T26 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),T27);
              T24 = T26;
            } else {
              T29 = CALL2(1,x_1407F2411,x_1406F2410,YPchr((P)83));
              if (T29 != YPfalse) {
                T31 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                T30 = CALL2(1,VARREF(YgooSioSwriteYemit),FREEREF(1),T31);
                T28 = T30;
              } else {
                T33 = CALL2(1,x_1407F2411,x_1406F2410,YPchr((P)61));
                if (T33 != YPfalse) {
                  T35 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                  T34 = CALL2(1,VARREF(YgooSioSwriteYwrite),FREEREF(1),T35);
                  T32 = T34;
                } else {
                  T37 = CALL2(1,x_1407F2411,x_1406F2410,YPchr((P)84));
                  if (T37 != YPfalse) {
                    T39 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                    T38 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(1),T39);
                    T36 = T38;
                  } else {
                    T41 = CALL2(1,x_1407F2411,x_1406F2410,YPchr((P)37));
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
  P argF2415;
  P num_argumentsF2414;
  P argument_indexF2413;
  P found_percentQF2412;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(arguments_, 2);
loop:
  found_percentQF2412 = YPfalse;
  found_percentQF2412 = BOXFAB(found_percentQF2412);
  check_type(YPint((P)0),VARREF(YLintG));
  argument_indexF2413 = YPint((P)0);
  argument_indexF2413 = BOXFAB(argument_indexF2413);
  T5 = CALL1(1,VARREF(YgooStypesYlen),arguments_);
  num_argumentsF2414 = T5;
  T6 = FUNSHELL(1,fun_arg_69,4);
  argF2415 = T6;
  FUNINIT(argF2415, 4,argument_indexF2413,num_argumentsF2414,message_,arguments_);
  T8 = FUNFAB(fun_70,4,found_percentQF2412,port_,argF2415,message_);
  T7 = CALL2(1,VARREF(YgooSmacrosYdo),T8,message_);
  T12 = BOXVAL(found_percentQF2412);
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

FUNCODEDEF(fun_maybe_pack_chars_73) {
  P UF2416;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = BOXVAL(FREEREF(1));
    UF2416 = T3;
    T7 = CALL1(1,VARREF(Ylst),LITREF(lit_156));
    T8 = CALL1(1,VARREF(Ylst),FREEREF(2));
    T10 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),FREEREF(0));
    T9 = CALL1(1,VARREF(Ylst),T10);
    T6 = CALL4(1,VARREF(YgooSmacrosYcat),T7,T8,T9,LITREF(lit_157));
    T5 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2416,T6);
    T4 = BOXVAL(FREEREF(1)) = T5;
    T11 = CALL1(1,VARREF(YgooScolsScolxYzapX),FREEREF(0));
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_arg_74) {
  P char_;
  P current_indexF2417;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  CALL0(0,FREEREF(0));
  T1 = BOXVAL(FREEREF(1));
  current_indexF2417 = T1;
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  BOXVAL(FREEREF(1)) = T2;
  T5 = CALL2(1,VARREF(YgooSmagYL),current_indexF2417,FREEREF(2));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yassert_error),LITREF(lit_159),FREEREF(3),FREEREF(4));
  } else {
  }
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(4),current_indexF2417);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  P c_;
  P UF2427;
  P UF2426;
  P UF2425;
  P UF2424;
  P UF2423;
  P UF2422;
  P UF2421;
  P UF2420;
  P x_1409F2419;
  P x_1408F2418;
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
    x_1408F2418 = T2;
    x_1409F2419 = VARREF(YgooSmacrosYEE);
    T5 = CALL2(1,x_1409F2419,x_1408F2418,YPchr((P)68));
    if (T5 != YPfalse) {
      T7 = BOXVAL(FREEREF(1));
      UF2420 = T7;
      T11 = CALL1(1,VARREF(Ylst),LITREF(lit_156));
      T12 = CALL1(1,VARREF(Ylst),FREEREF(2));
      T15 = CALL1(1,VARREF(Ylst),LITREF(lit_161));
      T17 = CALL1(1,FREEREF(3),c_);
      T16 = CALL1(1,VARREF(Ylst),T17);
      T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,LITREF(lit_157));
      T13 = CALL1(1,VARREF(Ylst),T14);
      T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,LITREF(lit_157));
      T9 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2420,T10);
      T8 = BOXVAL(FREEREF(1)) = T9;
      T6 = T8;
      T4 = T6;
    } else {
      T19 = CALL2(1,x_1409F2419,x_1408F2418,YPchr((P)66));
      if (T19 != YPfalse) {
        T21 = BOXVAL(FREEREF(1));
        UF2421 = T21;
        T25 = CALL1(1,VARREF(Ylst),LITREF(lit_156));
        T26 = CALL1(1,VARREF(Ylst),FREEREF(2));
        T29 = CALL1(1,VARREF(Ylst),LITREF(lit_161));
        T31 = CALL1(1,FREEREF(3),c_);
        T30 = CALL1(1,VARREF(Ylst),T31);
        T32 = CALL1(1,VARREF(Ylst),YPint((P)2));
        T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T32,LITREF(lit_157));
        T27 = CALL1(1,VARREF(Ylst),T28);
        T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,T27,LITREF(lit_157));
        T23 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2421,T24);
        T22 = BOXVAL(FREEREF(1)) = T23;
        T20 = T22;
        T18 = T20;
      } else {
        T34 = CALL2(1,x_1409F2419,x_1408F2418,YPchr((P)79));
        if (T34 != YPfalse) {
          T36 = BOXVAL(FREEREF(1));
          UF2422 = T36;
          T40 = CALL1(1,VARREF(Ylst),LITREF(lit_156));
          T41 = CALL1(1,VARREF(Ylst),FREEREF(2));
          T44 = CALL1(1,VARREF(Ylst),LITREF(lit_161));
          T46 = CALL1(1,FREEREF(3),c_);
          T45 = CALL1(1,VARREF(Ylst),T46);
          T47 = CALL1(1,VARREF(Ylst),YPint((P)8));
          T43 = CALL4(1,VARREF(YgooSmacrosYcat),T44,T45,T47,LITREF(lit_157));
          T42 = CALL1(1,VARREF(Ylst),T43);
          T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T42,LITREF(lit_157));
          T38 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2422,T39);
          T37 = BOXVAL(FREEREF(1)) = T38;
          T35 = T37;
          T33 = T35;
        } else {
          T49 = CALL2(1,x_1409F2419,x_1408F2418,YPchr((P)88));
          if (T49 != YPfalse) {
            T51 = BOXVAL(FREEREF(1));
            UF2423 = T51;
            T55 = CALL1(1,VARREF(Ylst),LITREF(lit_156));
            T56 = CALL1(1,VARREF(Ylst),FREEREF(2));
            T59 = CALL1(1,VARREF(Ylst),LITREF(lit_161));
            T61 = CALL1(1,FREEREF(3),c_);
            T60 = CALL1(1,VARREF(Ylst),T61);
            T62 = CALL1(1,VARREF(Ylst),YPint((P)16));
            T58 = CALL4(1,VARREF(YgooSmacrosYcat),T59,T60,T62,LITREF(lit_157));
            T57 = CALL1(1,VARREF(Ylst),T58);
            T54 = CALL4(1,VARREF(YgooSmacrosYcat),T55,T56,T57,LITREF(lit_157));
            T53 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2423,T54);
            T52 = BOXVAL(FREEREF(1)) = T53;
            T50 = T52;
            T48 = T50;
          } else {
            T64 = CALL2(1,x_1409F2419,x_1408F2418,YPchr((P)67));
            if (T64 != YPfalse) {
              T66 = BOXVAL(FREEREF(1));
              UF2424 = T66;
              T70 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
              T71 = CALL1(1,VARREF(Ylst),FREEREF(2));
              T73 = CALL2(1,FREEREF(3),c_,VARREF(YLchrG));
              T72 = CALL1(1,VARREF(Ylst),T73);
              T69 = CALL4(1,VARREF(YgooSmacrosYcat),T70,T71,T72,LITREF(lit_157));
              T68 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2424,T69);
              T67 = BOXVAL(FREEREF(1)) = T68;
              T65 = T67;
              T63 = T65;
            } else {
              T75 = CALL2(1,x_1409F2419,x_1408F2418,YPchr((P)83));
              if (T75 != YPfalse) {
                T77 = BOXVAL(FREEREF(1));
                UF2425 = T77;
                T81 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
                T82 = CALL1(1,VARREF(Ylst),FREEREF(2));
                T84 = CALL1(1,FREEREF(3),c_);
                T83 = CALL1(1,VARREF(Ylst),T84);
                T80 = CALL4(1,VARREF(YgooSmacrosYcat),T81,T82,T83,LITREF(lit_157));
                T79 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2425,T80);
                T78 = BOXVAL(FREEREF(1)) = T79;
                T76 = T78;
                T74 = T76;
              } else {
                T86 = CALL2(1,x_1409F2419,x_1408F2418,YPchr((P)61));
                if (T86 != YPfalse) {
                  T88 = BOXVAL(FREEREF(1));
                  UF2426 = T88;
                  T92 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
                  T93 = CALL1(1,VARREF(Ylst),FREEREF(2));
                  T95 = CALL1(1,FREEREF(3),c_);
                  T94 = CALL1(1,VARREF(Ylst),T95);
                  T91 = CALL4(1,VARREF(YgooSmacrosYcat),T92,T93,T94,LITREF(lit_157));
                  T90 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2426,T91);
                  T89 = BOXVAL(FREEREF(1)) = T90;
                  T87 = T89;
                  T85 = T87;
                } else {
                  T97 = CALL2(1,x_1409F2419,x_1408F2418,YPchr((P)84));
                  if (T97 != YPfalse) {
                    T99 = BOXVAL(FREEREF(1));
                    UF2427 = T99;
                    T103 = CALL1(1,VARREF(Ylst),LITREF(lit_124));
                    T104 = CALL1(1,VARREF(Ylst),FREEREF(2));
                    T106 = CALL1(1,FREEREF(3),c_);
                    T105 = CALL1(1,VARREF(Ylst),T106);
                    T102 = CALL4(1,VARREF(YgooSmacrosYcat),T103,T104,T105,LITREF(lit_157));
                    T101 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2427,T102);
                    T100 = BOXVAL(FREEREF(1)) = T101;
                    T98 = T100;
                    T96 = T98;
                  } else {
                    T108 = CALL2(1,x_1409F2419,x_1408F2418,YPchr((P)37));
                    if (T108 != YPfalse) {
                      T109 = CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(4),YPchr((P)37));
                      T107 = T109;
                    } else {
                      T110 = CALL3(1,VARREF(Yerror),LITREF(lit_163),c_,FREEREF(5));
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
  P exprsF2436;
  P argF2435;
  P maybe_pack_charsF2434;
  P packer_F2433;
  P portF2432;
  P charsF2431;
  P num_argsF2430;
  P arg_indexF2429;
  P found_percentQF2428;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_expr_, 0);
  ARG(message_, 1);
  ARG(args_, 2);
loop:
  found_percentQF2428 = YPfalse;
  found_percentQF2428 = BOXFAB(found_percentQF2428);
  check_type(YPint((P)0),VARREF(YLintG));
  arg_indexF2429 = YPint((P)0);
  arg_indexF2429 = BOXFAB(arg_indexF2429);
  T5 = CALL1(1,VARREF(YgooStypesYlen),args_);
  num_argsF2430 = T5;
  T7 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  charsF2431 = T7;
  T9 = CALL0(1,VARREF(YgooSmacrosYgensym));
  portF2432 = T9;
  T12 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F2433 = T12;
  packer_F2433 = BOXFAB(packer_F2433);
  T14 = FUNSHELL(1,fun_maybe_pack_chars_73,3);
  maybe_pack_charsF2434 = T14;
  T15 = FUNSHELL(1,fun_arg_74,5);
  argF2435 = T15;
  FUNINIT(maybe_pack_charsF2434, 3,charsF2431,packer_F2433,portF2432);
  FUNINIT(argF2435, 5,maybe_pack_charsF2434,arg_indexF2429,num_argsF2430,message_,args_);
  T16 = FUNFAB(fun_75,6,found_percentQF2428,packer_F2433,portF2432,argF2435,charsF2431,message_);
  CALL2(1,VARREF(YgooSmacrosYdo),T16,message_);
  T17 = CALL0(0,maybe_pack_charsF2434);
  T19 = BOXVAL(packer_F2433);
  T18 = CALL1(1,VARREF(YgooSpackerYpacker_res),T19);
  T11 = T18;
  exprsF2436 = T11;
  T22 = BOXVAL(found_percentQF2428);
  T21 = CALL1(1,VARREF(Ynot),T22);
  T20 = CALL1(1,VARREF(Ynot),T21);
  if (T20 != YPfalse) {
    T23 = CALL2(1,VARREF(Yassert_error),LITREF(lit_164),message_);
  } else {
  }
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_165));
  T30 = CALL1(1,VARREF(Ylst),portF2432);
  T31 = CALL1(1,VARREF(Ylst),port_expr_);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,LITREF(lit_157));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T27 = CALL2(1,VARREF(YgooSmacrosYcat),T28,LITREF(lit_157));
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,exprsF2436,LITREF(lit_157));
  T10 = T24;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1413_77) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_170),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_78) {
  P return_;
  P x_1412F2447;
  P x_1412F2446;
  P x_1412F2445;
  P x_1412F2444;
  P x_1412F2443;
  P x_1412F2442;
  P argsF2441;
  P messageF2440;
  P portF2439;
  P x_1412F2438;
  P x_1413F2437;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1413_77,2);
  x_1413F2437 = T1;
  FUNINIT(x_1413F2437, 2,FREEREF(0),return_);
  x_1412F2438 = FREEREF(0);
  portF2439 = YPfalse;
  portF2439 = BOXFAB(portF2439);
  messageF2440 = YPfalse;
  messageF2440 = BOXFAB(messageF2440);
  argsF2441 = YPfalse;
  argsF2441 = BOXFAB(argsF2441);
  T9 = CALL2(1,VARREF(YisaQ),x_1412F2438,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1412F2438,LITREF(lit_170),x_1413F2437);
    x_1412F2442 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1412F2442,x_1413F2437);
    BOXVAL(portF2439) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1412F2442);
    x_1412F2443 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1412F2443,x_1413F2437);
    BOXVAL(messageF2440) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1412F2443);
    x_1412F2444 = T17;
    BOXVAL(argsF2441) = x_1412F2444;
    x_1412F2445 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1412F2445,x_1413F2437);
    x_1412F2446 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1412F2446,x_1413F2437);
    T22 = CALL1(1,VARREF(Ytail),x_1412F2445);
    x_1412F2447 = T22;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1412F2447,x_1413F2437);
    T19 = T23;
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1413F2437,LITREF(lit_171),x_1412F2438);
  }
  T27 = BOXVAL(messageF2440);
  T26 = CALL2(1,VARREF(YisaQ),T27,VARREF(YLstrG));
  if (T26 != YPfalse) {
    T29 = BOXVAL(portF2439);
    T30 = BOXVAL(messageF2440);
    T31 = BOXVAL(argsF2441);
    T28 = CALL3(1,VARREF(YgooSioSwriteYpe_msg),T29,T30,T31);
    T25 = T28;
  } else {
    T33 = CALL1(1,VARREF(Ylst),LITREF(lit_142));
    T35 = BOXVAL(portF2439);
    T34 = CALL1(1,VARREF(Ylst),T35);
    T37 = BOXVAL(messageF2440);
    T36 = CALL1(1,VARREF(Ylst),T37);
    T38 = BOXVAL(argsF2441);
    T32 = CALL5(1,VARREF(YgooSmacrosYcat),T33,T34,T36,T38,LITREF(lit_157));
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

FUNCODEDEF(fun_79) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_78,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_80) {
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

FUNCODEDEF(fun_81) {
  P tmpF2448;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2448 = T1;
  if (tmpF2448 != YPfalse) {
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
  P portF2449;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
loop:
  portF2449 = YPfalse;
  portF2449 = BOXFAB(portF2449);
  T3 = FUNFAB(fun_80,3,portF2449,message_,arguments_);
  T4 = FUNFAB(fun_81,1,portF2449);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_83) {
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
  P loopF2451;
  P limF2450;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),args_);
  limF2450 = T1;
  T3 = FUNSHELL(1,fun_loop_83,4);
  loopF2451 = T3;
  FUNINIT(loopF2451, 4,limF2450,port_,args_,loopF2451);
  T4 = CALL1(0,loopF2451,YPint((P)0));
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
  P T224,T225,T226,T227,T228,T229,T230,T231;
DEFCREGS();
loop:
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
  lit_56 = YPPsym((P)"loop");
  lit_57 = YPPlist(1,YPPsym((P)"i"));
  T97 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_27 = YPmet(FUNCODEREF(fun_loop_27),LITREF(lit_56),T97,ENVNUL,PNUL,sloc(113));
  T96 = YPsig(LITREF(lit_55),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_string_literal_28 = YPmet(FUNCODEREF(fun_write_string_literal_28),LITREF(lit_54),T96,ENVNUL,PNUL,sloc(110));
  T99 = VARREF_OR(YgooSioSwriteYwrite_string_literal,YPfalse);
  T100 = fun_write_string_literal_28;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T100);
  VARSET(YgooSioSwriteYwrite_string_literal,T98);
  lit_58 = YPPsym((P)"write-list");
  lit_59 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_60 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"n"));
  lit_61 = YPsb((P)" ...");
  T102 = YPsig(LITREF(lit_60),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_29 = YPmet(FUNCODEREF(fun_loop_29),LITREF(lit_56),T102,ENVNUL,PNUL,sloc(128));
  T101 = YPsig(LITREF(lit_59),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_list_30 = YPmet(FUNCODEREF(fun_write_list_30),LITREF(lit_58),T101,ENVNUL,PNUL,sloc(122));
  T104 = VARREF_OR(YgooSioSwriteYwrite_list,YPfalse);
  T105 = fun_write_list_30;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T105);
  VARSET(YgooSioSwriteYwrite_list,T103);
  lit_62 = YPPsym((P)"quotation?");
  lit_63 = YPPlist(1,YPPsym((P)"x"));
  lit_64 = YPPsym((P)"quote");
  T106 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_quotationQ_31 = YPmet(FUNCODEREF(fun_quotationQ_31),LITREF(lit_62),T106,ENVNUL,PNUL,sloc(137));
  T108 = VARREF_OR(YgooSioSwriteYquotationQ,YPfalse);
  T109 = fun_quotationQ_31;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T109);
  VARSET(YgooSioSwriteYquotationQ,T107);
  lit_65 = YPPsym((P)"write-flat");
  lit_66 = YPPlist(6,YPPsym((P)"port"),YPPsym((P)"prefix"),YPPsym((P)"x"),YPPsym((P)"suffix"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_67 = YPPlist(1,YPPsym((P)"i"));
  lit_68 = YPsb((P)" ...");
  T111 = YPsig(LITREF(lit_67),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_32 = YPmet(FUNCODEREF(fun_loop_32),LITREF(lit_56),T111,ENVNUL,PNUL,sloc(149));
  T110 = YPsig(LITREF(lit_66),YPPlist(6,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLflatG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_write_flat_33 = YPmet(FUNCODEREF(fun_write_flat_33),LITREF(lit_65),T110,ENVNUL,PNUL,sloc(143));
  T113 = VARREF_OR(YgooSioSwriteYwrite_flat,YPfalse);
  T114 = fun_write_flat_33;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T114);
  VARSET(YgooSioSwriteYwrite_flat,T112);
  lit_69 = YPPsym((P)"write-map");
  lit_70 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_71 = YPsb((P)"#<");
  lit_72 = YPPlist(1,YPPsym((P)"blow"));
  lit_73 = YPPsym((P)"x-1397");
  lit_74 = YPPlist(2,YPPsym((P)"x-1396"),YPPsym((P)"x-1395"));
  lit_75 = YPsb((P)" ...");
  lit_76 = YPsb((P)": ");
  T117 = YPsig(LITREF(lit_74),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1397_34 = YPmet(FUNCODEREF(fun_x_1397_34),LITREF(lit_73),T117,ENVNUL,PNUL,sloc(162));
  T116 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T116,ENVNUL,PNUL,sloc(161));
  T115 = YPsig(LITREF(lit_70),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSmapYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_map_36 = YPmet(FUNCODEREF(fun_write_map_36),LITREF(lit_69),T115,ENVNUL,PNUL,sloc(158));
  T119 = VARREF_OR(YgooSioSwriteYwrite_map,YPfalse);
  T120 = fun_write_map_36;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T120);
  VARSET(YgooSioSwriteYwrite_map,T118);
  lit_77 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_78 = YPsb((P)"#{In-port}");
  T121 = YPsig(LITREF(lit_77),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLin_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_37 = YPmet(FUNCODEREF(fun_recurring_write_37),LITREF(lit_21),T121,ENVNUL,PNUL,sloc(171));
  T123 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T124 = fun_recurring_write_37;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T124);
  VARSET(YgooSioSwriteYrecurring_write,T122);
  lit_79 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_80 = YPsb((P)"#{Out-port}");
  T125 = YPsig(LITREF(lit_79),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLout_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_38 = YPmet(FUNCODEREF(fun_recurring_write_38),LITREF(lit_21),T125,ENVNUL,PNUL,sloc(174));
  T127 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T128 = fun_recurring_write_38;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T128);
  VARSET(YgooSioSwriteYrecurring_write,T126);
  lit_81 = YPPsym((P)"write-params");
  lit_82 = YPPlist(3,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"recur"));
  lit_83 = YPPsym((P)"x-1401");
  lit_84 = YPPlist(3,YPPsym((P)"x-1400"),YPPsym((P)"x-1399"),YPPsym((P)"x-1398"));
  lit_85 = YPsb((P)"(%s ");
  lit_86 = YPsb((P)" => ");
  T132 = YPsig(LITREF(lit_84),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1401_39 = YPmet(FUNCODEREF(fun_x_1401_39),LITREF(lit_83),T132,ENVNUL,PNUL,sloc(183));
  T131 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T131,ENVNUL,PNUL,sloc(183));
  T130 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T130,ENVNUL,PNUL,sloc(183));
  T129 = YPsig(LITREF(lit_82),YPPlist(3,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_write_params_42 = YPmet(FUNCODEREF(fun_write_params_42),LITREF(lit_81),T129,ENVNUL,PNUL,sloc(179));
  T134 = VARREF_OR(YgooSioSwriteYwrite_params,YPfalse);
  T135 = fun_write_params_42;
  T133 = XCALL2(1,VARREF(YPdefine_method),T134,T135);
  VARSET(YgooSioSwriteYwrite_params,T133);
  lit_87 = YPPsym((P)"write-fun-guts");
  lit_88 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"name"),YPPsym((P)"recur"));
  lit_89 = YPsb((P)"#{");
  lit_90 = YPsb((P)"}");
  T136 = YPsig(LITREF(lit_88),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_fun_guts_43 = YPmet(FUNCODEREF(fun_write_fun_guts_43),LITREF(lit_87),T136,ENVNUL,PNUL,sloc(195));
  T138 = VARREF_OR(YgooSioSwriteYwrite_fun_guts,YPfalse);
  T139 = fun_write_fun_guts_43;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T139);
  VARSET(YgooSioSwriteYwrite_fun_guts,T137);
  lit_91 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_92 = YPsb((P)"Gen");
  T140 = YPsig(LITREF(lit_91),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLgenG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_44 = YPmet(FUNCODEREF(fun_recurring_write_44),LITREF(lit_21),T140,ENVNUL,PNUL,sloc(205));
  T142 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T143 = fun_recurring_write_44;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T143);
  VARSET(YgooSioSwriteYrecurring_write,T141);
  lit_93 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_94 = YPsb((P)"Met");
  T144 = YPsig(LITREF(lit_93),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLmetG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_45 = YPmet(FUNCODEREF(fun_recurring_write_45),LITREF(lit_21),T144,ENVNUL,PNUL,sloc(208));
  T146 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T147 = fun_recurring_write_45;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T147);
  VARSET(YgooSioSwriteYrecurring_write,T145);
  lit_95 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_96 = YPsb((P)"<SRC-LOC %= %s>");
  T148 = YPsig(LITREF(lit_95),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsrc_locG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_46 = YPmet(FUNCODEREF(fun_recurring_write_46),LITREF(lit_21),T148,ENVNUL,PNUL,sloc(211));
  T150 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T151 = fun_recurring_write_46;
  T149 = XCALL2(1,VARREF(YPdefine_method),T150,T151);
  VARSET(YgooSioSwriteYrecurring_write,T149);
  lit_97 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_98 = YPsb((P)"#{Class ");
  lit_99 = YPsb((P)" ");
  lit_100 = YPsb((P)"}");
  T152 = YPsig(LITREF(lit_97),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_47 = YPmet(FUNCODEREF(fun_recurring_write_47),LITREF(lit_21),T152,ENVNUL,PNUL,sloc(214));
  T154 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T155 = fun_recurring_write_47;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T155);
  VARSET(YgooSioSwriteYrecurring_write,T153);
  lit_101 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_102 = YPsb((P)"#{T= ");
  lit_103 = YPsb((P)"}");
  T156 = YPsig(LITREF(lit_101),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsingletonG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_48 = YPmet(FUNCODEREF(fun_recurring_write_48),LITREF(lit_21),T156,ENVNUL,PNUL,sloc(221));
  T158 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T159 = fun_recurring_write_48;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T159);
  VARSET(YgooSioSwriteYrecurring_write,T157);
  lit_104 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_105 = YPsb((P)"#{T< ");
  lit_106 = YPsb((P)"}");
  T160 = YPsig(LITREF(lit_104),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsubclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_49 = YPmet(FUNCODEREF(fun_recurring_write_49),LITREF(lit_21),T160,ENVNUL,PNUL,sloc(226));
  T162 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T163 = fun_recurring_write_49;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T163);
  VARSET(YgooSioSwriteYrecurring_write,T161);
  lit_107 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_108 = YPsb((P)"#{T+");
  lit_109 = YPPlist(1,YPPsym((P)"t"));
  lit_110 = YPsb((P)"}");
  T165 = YPsig(LITREF(lit_109),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T165,ENVNUL,PNUL,sloc(233));
  T164 = YPsig(LITREF(lit_107),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLunionG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_51 = YPmet(FUNCODEREF(fun_recurring_write_51),LITREF(lit_21),T164,ENVNUL,PNUL,sloc(231));
  T167 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T168 = fun_recurring_write_51;
  T166 = XCALL2(1,VARREF(YPdefine_method),T167,T168);
  VARSET(YgooSioSwriteYrecurring_write,T166);
  lit_111 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_112 = YPsb((P)"#{T*");
  lit_113 = YPPlist(1,YPPsym((P)"t"));
  lit_114 = YPsb((P)"}");
  T170 = YPsig(LITREF(lit_113),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T170,ENVNUL,PNUL,sloc(238));
  T169 = YPsig(LITREF(lit_111),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLproductG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_53 = YPmet(FUNCODEREF(fun_recurring_write_53),LITREF(lit_21),T169,ENVNUL,PNUL,sloc(236));
  T172 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T173 = fun_recurring_write_53;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T173);
  VARSET(YgooSioSwriteYrecurring_write,T171);
  lit_115 = YPPsym((P)"write-value-type");
  lit_116 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_117 = YPsb((P)"(tup");
  lit_118 = YPPlist(1,YPPsym((P)"t"));
  lit_119 = YPsb((P)")");
  T175 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T175,ENVNUL,PNUL,sloc(243));
  T174 = YPsig(LITREF(lit_116),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_value_type_55 = YPmet(FUNCODEREF(fun_write_value_type_55),LITREF(lit_115),T174,ENVNUL,PNUL,sloc(241));
  T177 = VARREF_OR(YgooSioSwriteYwrite_value_type,YPfalse);
  T178 = fun_write_value_type_55;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T178);
  VARSET(YgooSioSwriteYwrite_value_type,T176);
  lit_120 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T179 = YPsig(LITREF(lit_120),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_value_type_56 = YPmet(FUNCODEREF(fun_write_value_type_56),LITREF(lit_115),T179,ENVNUL,PNUL,sloc(246));
  T181 = VARREF_OR(YgooSioSwriteYwrite_value_type,YPfalse);
  T182 = fun_write_value_type_56;
  T180 = XCALL2(1,VARREF(YPdefine_method),T181,T182);
  VARSET(YgooSioSwriteYwrite_value_type,T180);
  lit_121 = YPPsym((P)"recurring-write-type");
  lit_122 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T183 = YPsig(LITREF(lit_122),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_57 = YPmet(FUNCODEREF(fun_recurring_write_type_57),LITREF(lit_121),T183,ENVNUL,PNUL,sloc(249));
  T185 = VARREF_OR(YgooSioSwriteYrecurring_write_type,YPfalse);
  T186 = fun_recurring_write_type_57;
  T184 = XCALL2(1,VARREF(YPdefine_method),T185,T186);
  VARSET(YgooSioSwriteYrecurring_write_type,T184);
  lit_123 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T187 = YPsig(LITREF(lit_123),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_58 = YPmet(FUNCODEREF(fun_recurring_write_type_58),LITREF(lit_121),T187,ENVNUL,PNUL,sloc(252));
  T189 = VARREF_OR(YgooSioSwriteYrecurring_write_type,YPfalse);
  T190 = fun_recurring_write_type_58;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T190);
  VARSET(YgooSioSwriteYrecurring_write_type,T188);
  lit_124 = YPPsym((P)"write-type");
  lit_125 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_126 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"d"));
  T192 = YPsig(LITREF(lit_126),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_59 = YPmet(FUNCODEREF(fun_recur_59),LITREF(lit_8),T192,ENVNUL,PNUL,sloc(256));
  T191 = YPsig(LITREF(lit_125),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_type_60 = YPmet(FUNCODEREF(fun_write_type_60),LITREF(lit_124),T191,ENVNUL,PNUL,sloc(255));
  T194 = VARREF_OR(YgooSioSwriteYwrite_type,YPfalse);
  T195 = fun_write_type_60;
  T193 = XCALL2(1,VARREF(YPdefine_method),T194,T195);
  VARSET(YgooSioSwriteYwrite_type,T193);
  lit_127 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_128 = YPsb((P)"#{Prop ");
  lit_129 = YPsb((P)"}");
  T196 = YPsig(LITREF(lit_127),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLpropG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_61 = YPmet(FUNCODEREF(fun_recurring_write_61),LITREF(lit_21),T196,ENVNUL,PNUL,sloc(259));
  T198 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T199 = fun_recurring_write_61;
  T197 = XCALL2(1,VARREF(YPdefine_method),T198,T199);
  VARSET(YgooSioSwriteYrecurring_write,T197);
  lit_130 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_131 = YPsb((P)"#{");
  lit_132 = YPPlist(1,YPPsym((P)"blow"));
  lit_133 = YPPsym((P)"x-1405");
  lit_134 = YPPlist(2,YPPsym((P)"x-1404"),YPPsym((P)"x-1403"));
  lit_135 = YPsb((P)" ...");
  lit_136 = YPsb((P)": ");
  lit_137 = YPsb((P)"}");
  T204 = YPsig(LITREF(lit_134),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1405_62 = YPmet(FUNCODEREF(fun_x_1405_62),LITREF(lit_133),T204,ENVNUL,PNUL,sloc(269));
  T203 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T203,ENVNUL,PNUL,sloc(268));
  T202 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T202,ENVNUL,PNUL,sloc(268));
  T201 = YPsig(LITREF(lit_132),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T201,ENVNUL,PNUL,sloc(267));
  T200 = YPsig(LITREF(lit_130),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_66 = YPmet(FUNCODEREF(fun_recurring_write_66),LITREF(lit_21),T200,ENVNUL,PNUL,sloc(264));
  T206 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T207 = fun_recurring_write_66;
  T205 = XCALL2(1,VARREF(YPdefine_method),T206,T207);
  VARSET(YgooSioSwriteYrecurring_write,T205);
  lit_138 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_139 = YPsb((P)"#{End-of-file}");
  T210 = XCALL0(1,VARREF(YgooSmathYeof_object));
  T209 = XCALL1(1,VARREF(YgooStypesYtE),T210);
  T208 = YPsig(LITREF(lit_138),YPPlist(4,VARREF(YgooSioSportYLout_portG),T209,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_67 = YPmet(FUNCODEREF(fun_recurring_write_67),LITREF(lit_21),T208,ENVNUL,PNUL,sloc(279));
  T212 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T213 = fun_recurring_write_67;
  T211 = XCALL2(1,VARREF(YPdefine_method),T212,T213);
  VARSET(YgooSioSwriteYrecurring_write,T211);
  lit_140 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_141 = YPsb((P)"nul");
  T215 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(Ynul));
  T214 = YPsig(LITREF(lit_140),YPPlist(4,VARREF(YgooSioSportYLout_portG),T215,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_68 = YPmet(FUNCODEREF(fun_recurring_write_68),LITREF(lit_21),T214,ENVNUL,PNUL,sloc(282));
  T217 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T218 = fun_recurring_write_68;
  T216 = XCALL2(1,VARREF(YPdefine_method),T217,T218);
  VARSET(YgooSioSwriteYrecurring_write,T216);
  lit_142 = YPPsym((P)"msg");
  lit_143 = YPPlist(3,YPPsym((P)"port"),YPPsym((P)"message"),YPPsym((P)"arguments"));
  lit_144 = YPPsym((P)"arg");
  lit_145 = YPPlist(2,YPPsym((P)"char"),YPPsym((P)"class"));
  lit_146 = YPsb((P)"Too few arguments for msg string %=: %=");
  lit_147 = YPsb((P)"Msg argument for directive '%%%c' not of class %t: %=");
  lit_148 = YPPlist(1,YPPsym((P)"c"));
  lit_149 = YPsb((P)"Invalid msg directive '%s' in \"%s\"");
  lit_150 = YPsb((P)"Incomplete msg directive in \"%s\"");
  T221 = YPsig(LITREF(lit_145),YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_arg_69 = YPmet(FUNCODEREF(fun_arg_69),LITREF(lit_144),T221,ENVNUL,PNUL,sloc(289));
  T220 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T220,ENVNUL,PNUL,sloc(300));
  T219 = YPsig(LITREF(lit_143),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_msg_71 = YPmet(FUNCODEREF(fun_msg_71),LITREF(lit_142),T219,ENVNUL,PNUL,sloc(285));
  T223 = VARREF_OR(YgooSconditionsYmsg,YPfalse);
  T224 = fun_msg_71;
  T222 = XCALL2(1,VARREF(YPdefine_method),T223,T224);
  VARSET(YgooSconditionsYmsg,T222);
  lit_151 = YPPsym((P)"post");
  lit_152 = YPPlist(2,YPPsym((P)"message"),YPPsym((P)"arguments"));
  T227 = YPsig(LITREF(lit_152),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T226 = fun_post_72 = YPmet(FUNCODEREF(fun_post_72),LITREF(lit_151),T227,ENVNUL,PNUL,sloc(322));
  T230 = VARREF_OR(YgooSioSwriteYpost,YPfalse);
  T231 = fun_post_72;
  T229 = XCALL2(1,VARREF(YPdefine_method),T230,T231);
  T228 = VARSET(YgooSioSwriteYpost,T229);
  T225 = T228;
  return T225;
}

P YgooSioSwriteY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
DEFCREGS();
loop:
  lit_153 = YPPsym((P)"pe-msg");
  lit_154 = YPPlist(3,YPPsym((P)"port-expr"),YPPsym((P)"message"),YPPsym((P)"args"));
  lit_155 = YPPsym((P)"maybe-pack-chars");
  lit_156 = YPPsym((P)"puts");
  lit_157 = Ynil;
  lit_158 = YPPlist(1,YPPsym((P)"char"));
  lit_159 = YPsb((P)"Too few arguments for msg string %=: %=");
  lit_160 = YPPlist(1,YPPsym((P)"c"));
  lit_161 = YPPsym((P)"num-to-str");
  lit_162 = YPPsym((P)"put");
  lit_163 = YPsb((P)"Invalid msg directive '%s' in \"%s\"");
  lit_164 = YPsb((P)"Incomplete msg directive in \"%s\"");
  lit_165 = YPPsym((P)"let");
  T3 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_maybe_pack_chars_73 = YPmet(FUNCODEREF(fun_maybe_pack_chars_73),LITREF(lit_155),T3,ENVNUL,PNUL,sloc(340));
  T2 = YPsig(LITREF(lit_158),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_arg_74 = YPmet(FUNCODEREF(fun_arg_74),LITREF(lit_144),T2,ENVNUL,PNUL,sloc(341));
  T1 = YPsig(LITREF(lit_160),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T1,ENVNUL,PNUL,sloc(348));
  T0 = YPsig(LITREF(lit_154),YPPlist(3,VARREF(YLanyG),VARREF(YLstrG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSioSwriteYpe_msg = YPmet(FUNCODEREF(YgooSioSwriteYpe_msg),LITREF(lit_153),T0,ENVNUL,PNUL,sloc(329));
  T4 = YgooSioSwriteYpe_msg;
  VARSET(YgooSioSwriteYpe_msg,T4);
  lit_166 = YPPlist(1,YPPsym((P)"exp"));
  lit_167 = YPPlist(1,YPPsym((P)"return"));
  lit_168 = YPPsym((P)"x-1413");
  lit_169 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_170 = YPPsym((P)"msg*");
  lit_171 = YPsb((P)"Match Pattern Failure");
  T7 = YPsig(LITREF(lit_169),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1413_77 = YPmet(FUNCODEREF(fun_x_1413_77),LITREF(lit_168),T7,ENVNUL,PNUL,YPfalse);
  T6 = YPsig(LITREF(lit_167),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(LITREF(lit_166),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T5,ENVNUL,PNUL,YPfalse);
  T8 = fun_79;
  YPmacro(YPPsym((P)"goo/io/write"),YPPsym((P)"msg*"),T8);
  lit_172 = YPPsym((P)"msg-to-str");
  lit_173 = YPPlist(2,YPPsym((P)"message"),YPPsym((P)"arguments"));
  T11 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T11,ENVNUL,PNUL,sloc(381));
  T10 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T10,ENVNUL,PNUL,sloc(381));
  T9 = YPsig(LITREF(lit_173),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSconditionsYmsg_to_str = YPmet(FUNCODEREF(YgooSconditionsYmsg_to_str),LITREF(lit_172),T9,ENVNUL,PNUL,sloc(380));
  T12 = YgooSconditionsYmsg_to_str;
  VARSET(YgooSconditionsYmsg_to_str,T12);
  lit_174 = YPPsym((P)"say");
  lit_175 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"args"));
  lit_176 = YPPlist(1,YPPsym((P)"i"));
  T14 = YPsig(LITREF(lit_176),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_83 = YPmet(FUNCODEREF(fun_loop_83),LITREF(lit_56),T14,ENVNUL,PNUL,sloc(391));
  T13 = YPsig(LITREF(lit_175),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSwriteYsay = YPmet(FUNCODEREF(YgooSioSwriteYsay),LITREF(lit_174),T13,ENVNUL,PNUL,sloc(385));
  T15 = YgooSioSwriteYsay;
  VARSET(YgooSioSwriteYsay,T15);
  T16 = YPfalse;
  return T16;
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
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSlst;
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
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
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
  {"packer-res", &module_info_gooSpacker, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"get-standard-read-macro", &module_info_gooSioSread, NULL},
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
  {"pack", &module_info_gooSpacker, NULL},
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
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
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
  {"packer-add", &module_info_gooSpacker, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
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
  {"choose-handler", &module_info_gooSconditions, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
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
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
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
  {"$char-long-names", &module_info_gooSioSread, NULL},
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
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
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
  {"pack-in", &module_info_gooSpacker, NULL},
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
  {"set-standard-read-macro!", &module_info_gooSioSread, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
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
  {"trunc/", &module_info_gooSmath, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
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
  {"read-from-string", &module_info_gooSioSread, NULL},
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
  {"sqrt", &module_info_gooSmath, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
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
  {"<port>", &module_info_gooSioSport, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"read-delimited-list", &module_info_gooSioSread, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
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
  {"packing", &module_info_gooSpacker, NULL},
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
  {"into", &module_info_gooScolsScol, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
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
  {"<packer>", &module_info_gooSpacker, NULL},
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
  {"1-", &module_info_gooSmath, NULL},
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
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
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
  {"write-string-literal", CVAR, &YgooSioSwriteYwrite_string_literal},
  {"---main-1---", PVAR, NULL},
  {"quotation?", CVAR, &YgooSioSwriteYquotationQ},
  {"write-params", CVAR, &YgooSioSwriteYwrite_params},
  {"write-map", CVAR, &YgooSioSwriteYwrite_map},
  {"character-name", CVAR, &YgooSioSwriteYcharacter_name},
  {"as-binding-name", CVAR, &YgooSioSwriteYas_binding_name},
  {"write-value-type", CVAR, &YgooSioSwriteYwrite_value_type},
  {"write-fun-guts", CVAR, &YgooSioSwriteYwrite_fun_guts},
  {"post", CVAR, &YgooSioSwriteYpost},
  {"msg*", PVAR, NULL},
  {"write-char-literal", CVAR, &YgooSioSwriteYwrite_char_literal},
  {"recurring-write", CVAR, &YgooSioSwriteYrecurring_write},
  {"*max-print-depth*", DVAR, &YgooSioSwriteYTmax_print_depthT},
  {"write-list", CVAR, &YgooSioSwriteYwrite_list},
  {"*max-print-length*", DVAR, &YgooSioSwriteYTmax_print_lengthT},
  {"---main-0---", PVAR, NULL},
  {"recurring-write-type", CVAR, &YgooSioSwriteYrecurring_write_type},
  {"emit", CVAR, &YgooSioSwriteYemit},
  {"write-number", CVAR, &YgooSioSwriteYwrite_number},
  {"writeln", CVAR, &YgooSioSwriteYwriteln},
  {"write-flat", CVAR, &YgooSioSwriteYwrite_flat},
  {"say", CVAR, &YgooSioSwriteYsay},
  {"do-emit", CVAR, &YgooSioSwriteYdo_emit},
  {"write-boolean", CVAR, &YgooSioSwriteYwrite_boolean},
  {"write-to-string", CVAR, &YgooSioSwriteYwrite_to_string},
  {"write", CVAR, &YgooSioSwriteYwrite},
  {"write-type", CVAR, &YgooSioSwriteYwrite_type},
  {"pe-msg", CVAR, &YgooSioSwriteYpe_msg},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"msg-to-str", NULL},
  {"write", NULL},
  {"post", NULL},
  {"msg*", NULL},
  {"write-to-string", NULL},
  {"recurring-write", NULL},
  {"*max-print-depth*", NULL},
  {"*max-print-length*", NULL},
  {"emit", NULL},
  {"msg", NULL},
  {"writeln", NULL},
  {"say", NULL},
  {"write-type", NULL},
  {"pe-msg", NULL},
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
