/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/conditions");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/conditions */

EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
DEF(YgooSconditionsYtype_error_value_setter,"goo/conditions","type-error-value-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
DEF(YgooSconditionsYhandler_condition_type_setter,"goo/conditions","handler-condition-type-setter");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
DEF(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLnumG,"goo/boot","<num>");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YgooSconditionsYhandler_info_arguments_setter,"goo/conditions","handler-info-arguments-setter");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ygen_refs,"goo/boot","gen-refs");
DEF(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
DEF(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
DEF(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
DEF(YgooSconditionsYincongruent_method_error_method,"goo/conditions","incongruent-method-error-method");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
DEF(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ynot,"goo/boot","not");
DEF(YgooSconditionsYcondition_message_setter,"goo/conditions","condition-message-setter");
EXT(Yfun_val,"goo/boot","fun-val");
DEF(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
DEF(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
DEF(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
DEF(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
DEF(YgooSconditionsYsignal_handler_list,"goo/conditions","signal-handler-list");
DEF(YgooSconditionsYrange_error_key_setter,"goo/conditions","range-error-key-setter");
DEF(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathY1A,"goo/math","1+");
DEF(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
DEF(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
DEF(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
DEF(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmathYlog,"goo/math","log");
DEF(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYC,"goo/math","^");
DEF(YgooSconditionsYrange_error_collection_setter,"goo/conditions","range-error-collection-setter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
DEF(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
DEF(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YLanyG,"goo/boot","<any>");
DEF(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmacrosYcat,"goo/macros","cat");
DEF(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
DEF(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yobject_parents,"goo/boot","object-parents");
DEF(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(Yhead,"goo/boot","head");
DEF(YgooSconditionsYtype_error_type_setter,"goo/conditions","type-error-type-setter");
DEF(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
DEF(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
DEF(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
DEF(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
DEF(YgooSconditionsYLincongruent_method_errorG,"goo/conditions","<incongruent-method-error>");
DEF(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYfabs,"goo/math","fabs");
DEF(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
DEF(YgooSconditionsYmacro_error_arguments_setter,"goo/conditions","macro-error-arguments-setter");
DEF(YgooSconditionsYcall_error_function_setter,"goo/conditions","call-error-function-setter");
DEF(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
DEF(YgooSconditionsYproperty_error_owner_setter,"goo/conditions","property-error-owner-setter");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(YgooSconditionsYincongruent_method_error_method_setter,"goo/conditions","incongruent-method-error-method-setter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yclass_children,"goo/boot","class-children");
DEF(YgooSconditionsYread,"goo/conditions","read");
DEF(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
DEF(YgooSconditionsYhandler_condition_type,"goo/conditions","handler-condition-type");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
DEF(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSioSportYout,"goo/io/port","out");
DEF(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
DEF(YgooSconditionsYunbound_variable_error_variable_setter,"goo/conditions","unbound-variable-error-variable-setter");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
DEF(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
DEF(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysyntax_error,"goo/boot","syntax-error");
DEF(YgooSconditionsYincongruent_method_error_generic,"goo/conditions","incongruent-method-error-generic");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YgooSconditionsYhandler_info_setter,"goo/conditions","handler-info-setter");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YtT,"goo/boot","t*");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
DEF(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooStypesYtE,"goo/types","t=");
DEF(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
DEF(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
DEF(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YLstrG,"goo/boot","<str>");
DEF(YgooSconditionsYmacro_error_name_setter,"goo/conditions","macro-error-name-setter");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
DYNDEF(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
DEF(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
DEF(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
DEF(YgooSconditionsYproperty_error_generic_setter,"goo/conditions","property-error-generic-setter");
DEF(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
DEF(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ylst,"goo/boot","lst");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
DEF(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
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
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YgooSconditionsYcondition_arguments_setter,"goo/conditions","condition-arguments-setter");
DEF(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
DEF(YgooSconditionsYdo_handlers_of_type,"goo/conditions","do-handlers-of-type");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yclass_props,"goo/boot","class-props");
DEF(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
DEF(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Ytup,"goo/boot","tup");
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
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YgooSmathYacos,"goo/math","acos");
DEF(YgooSconditionsYhandler_info_message_setter,"goo/conditions","handler-info-message-setter");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLseqG,"goo/boot","<seq>");
DEF(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooStypesYas,"goo/types","as");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DEF(YgooSconditionsYhandler_info,"goo/conditions","handler-info");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Yprop_value,"goo/boot","prop-value");
DEF(YgooSconditionsYhandler_test,"goo/conditions","handler-test");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YLsigG,"goo/boot","<sig>");
DEF(YgooSconditionsYfile_opening_error_filename_setter,"goo/conditions","file-opening-error-filename-setter");
EXT(Ynil,"goo/boot","nil");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YLcolIG,"goo/boot","<col.>");
DEF(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
DEF(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
DEF(YgooSconditionsYhandler_activeQ,"goo/conditions","handler-active?");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfun_mets,"goo/boot","fun-mets");
DEF(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YLcolG,"goo/boot","<col>");
DEF(YgooSconditionsYsig,"goo/conditions","sig");
EXT(Yclone,"goo/boot","clone");
EXT(YgooSmathY_,"goo/math","-");
DEF(YgooSconditionsYincongruent_method_error_generic_setter,"goo/conditions","incongruent-method-error-generic-setter");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(Yunexec,"goo/boot","unexec");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
DEF(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSmathYsin,"goo/math","sin");
DEF(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
DEF(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
DEF(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
DEF(YgooSconditionsYhandler_test_setter,"goo/conditions","handler-test-setter");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmathYGG,"goo/math",">>");
DEF(YgooSconditionsYLcpl_errorG,"goo/conditions","<cpl-error>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSioSportYport_handle_setter,"goo/io/port","port-handle-setter");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
DEF(YgooSconditionsYhandler_function_setter,"goo/conditions","handler-function-setter");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
DEF(YgooSconditionsYcall_error_arguments_setter,"goo/conditions","call-error-arguments-setter");
DEF(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
DEF(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Ynul,"goo/boot","nul");
EXT(YLpropG,"goo/boot","<prop>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_224);
DEFLIT(lit_217);
DEFLIT(lit_259);
DEFLIT(lit_211);
DEFLIT(lit_269);
DEFLIT(lit_152);
DEFLIT(lit_227);
DEFLIT(lit_66);
DEFLIT(lit_6);
DEFLIT(lit_204);
DEFLIT(lit_5);
DEFLIT(lit_43);
DEFLIT(lit_45);
DEFLIT(lit_129);
DEFLIT(lit_1);
DEFLIT(lit_30);
DEFLIT(lit_223);
DEFLIT(lit_71);
DEFLIT(lit_242);
DEFLIT(lit_241);
DEFLIT(lit_171);
DEFLIT(lit_214);
DEFLIT(lit_91);
DEFLIT(lit_149);
DEFLIT(lit_155);
DEFLIT(lit_69);
DEFLIT(lit_233);
DEFLIT(lit_207);
DEFLIT(lit_37);
DEFLIT(lit_117);
DEFLIT(lit_131);
DEFLIT(lit_248);
DEFLIT(lit_0);
DEFLIT(lit_196);
DEFLIT(lit_93);
DEFLIT(lit_243);
DEFLIT(lit_228);
DEFLIT(lit_154);
DEFLIT(lit_14);
DEFLIT(lit_161);
DEFLIT(lit_157);
DEFLIT(lit_24);
DEFLIT(lit_97);
DEFLIT(lit_8);
DEFLIT(lit_23);
DEFLIT(lit_134);
DEFLIT(lit_80);
DEFLIT(lit_9);
DEFLIT(lit_115);
DEFLIT(lit_51);
DEFLIT(lit_272);
DEFLIT(lit_124);
DEFLIT(lit_192);
DEFLIT(lit_201);
DEFLIT(lit_34);
DEFLIT(lit_74);
DEFLIT(lit_252);
DEFLIT(lit_101);
DEFLIT(lit_41);
DEFLIT(lit_167);
DEFLIT(lit_64);
DEFLIT(lit_83);
DEFLIT(lit_113);
DEFLIT(lit_158);
DEFLIT(lit_109);
DEFLIT(lit_271);
DEFLIT(lit_49);
DEFLIT(lit_212);
DEFLIT(lit_53);
DEFLIT(lit_257);
DEFLIT(lit_68);
DEFLIT(lit_250);
DEFLIT(lit_108);
DEFLIT(lit_174);
DEFLIT(lit_11);
DEFLIT(lit_18);
DEFLIT(lit_253);
DEFLIT(lit_92);
DEFLIT(lit_122);
DEFLIT(lit_118);
DEFLIT(lit_256);
DEFLIT(lit_258);
DEFLIT(lit_59);
DEFLIT(lit_116);
DEFLIT(lit_260);
DEFLIT(lit_226);
DEFLIT(lit_114);
DEFLIT(lit_150);
DEFLIT(lit_210);
DEFLIT(lit_264);
DEFLIT(lit_121);
DEFLIT(lit_104);
DEFLIT(lit_62);
DEFLIT(lit_194);
DEFLIT(lit_35);
DEFLIT(lit_86);
DEFLIT(lit_107);
DEFLIT(lit_55);
DEFLIT(lit_153);
DEFLIT(lit_249);
DEFLIT(lit_236);
DEFLIT(lit_40);
DEFLIT(lit_7);
DEFLIT(lit_85);
DEFLIT(lit_140);
DEFLIT(lit_44);
DEFLIT(lit_202);
DEFLIT(lit_148);
DEFLIT(lit_98);
DEFLIT(lit_77);
DEFLIT(lit_12);
DEFLIT(lit_75);
DEFLIT(lit_255);
DEFLIT(lit_187);
DEFLIT(lit_162);
DEFLIT(lit_29);
DEFLIT(lit_139);
DEFLIT(lit_60);
DEFLIT(lit_181);
DEFLIT(lit_168);
DEFLIT(lit_52);
DEFLIT(lit_110);
DEFLIT(lit_197);
DEFLIT(lit_239);
DEFLIT(lit_190);
DEFLIT(lit_277);
DEFLIT(lit_208);
DEFLIT(lit_112);
DEFLIT(lit_39);
DEFLIT(lit_206);
DEFLIT(lit_222);
DEFLIT(lit_218);
DEFLIT(lit_172);
DEFLIT(lit_13);
DEFLIT(lit_244);
DEFLIT(lit_235);
DEFLIT(lit_229);
DEFLIT(lit_230);
DEFLIT(lit_16);
DEFLIT(lit_177);
DEFLIT(lit_175);
DEFLIT(lit_138);
DEFLIT(lit_173);
DEFLIT(lit_95);
DEFLIT(lit_176);
DEFLIT(lit_32);
DEFLIT(lit_213);
DEFLIT(lit_145);
DEFLIT(lit_215);
DEFLIT(lit_225);
DEFLIT(lit_263);
DEFLIT(lit_106);
DEFLIT(lit_82);
DEFLIT(lit_146);
DEFLIT(lit_133);
DEFLIT(lit_135);
DEFLIT(lit_132);
DEFLIT(lit_70);
DEFLIT(lit_128);
DEFLIT(lit_96);
DEFLIT(lit_90);
DEFLIT(lit_164);
DEFLIT(lit_200);
DEFLIT(lit_137);
DEFLIT(lit_240);
DEFLIT(lit_247);
DEFLIT(lit_27);
DEFLIT(lit_199);
DEFLIT(lit_65);
DEFLIT(lit_178);
DEFLIT(lit_203);
DEFLIT(lit_205);
DEFLIT(lit_127);
DEFLIT(lit_188);
DEFLIT(lit_28);
DEFLIT(lit_72);
DEFLIT(lit_186);
DEFLIT(lit_56);
DEFLIT(lit_151);
DEFLIT(lit_274);
DEFLIT(lit_191);
DEFLIT(lit_184);
DEFLIT(lit_238);
DEFLIT(lit_126);
DEFLIT(lit_99);
DEFLIT(lit_183);
DEFLIT(lit_221);
DEFLIT(lit_36);
DEFLIT(lit_219);
DEFLIT(lit_180);
DEFLIT(lit_31);
DEFLIT(lit_262);
DEFLIT(lit_273);
DEFLIT(lit_61);
DEFLIT(lit_147);
DEFLIT(lit_67);
DEFLIT(lit_4);
DEFLIT(lit_88);
DEFLIT(lit_111);
DEFLIT(lit_21);
DEFLIT(lit_141);
DEFLIT(lit_251);
DEFLIT(lit_136);
DEFLIT(lit_189);
DEFLIT(lit_234);
DEFLIT(lit_87);
DEFLIT(lit_220);
DEFLIT(lit_159);
DEFLIT(lit_17);
DEFLIT(lit_281);
DEFLIT(lit_63);
DEFLIT(lit_198);
DEFLIT(lit_46);
DEFLIT(lit_42);
DEFLIT(lit_47);
DEFLIT(lit_102);
DEFLIT(lit_182);
DEFLIT(lit_156);
DEFLIT(lit_276);
DEFLIT(lit_10);
DEFLIT(lit_166);
DEFLIT(lit_179);
DEFLIT(lit_185);
DEFLIT(lit_163);
DEFLIT(lit_246);
DEFLIT(lit_100);
DEFLIT(lit_78);
DEFLIT(lit_15);
DEFLIT(lit_19);
DEFLIT(lit_268);
DEFLIT(lit_89);
DEFLIT(lit_2);
DEFLIT(lit_231);
DEFLIT(lit_81);
DEFLIT(lit_254);
DEFLIT(lit_195);
DEFLIT(lit_279);
DEFLIT(lit_54);
DEFLIT(lit_169);
DEFLIT(lit_267);
DEFLIT(lit_280);
DEFLIT(lit_22);
DEFLIT(lit_142);
DEFLIT(lit_245);
DEFLIT(lit_123);
DEFLIT(lit_170);
DEFLIT(lit_209);
DEFLIT(lit_266);
DEFLIT(lit_120);
DEFLIT(lit_261);
DEFLIT(lit_50);
DEFLIT(lit_3);
DEFLIT(lit_20);
DEFLIT(lit_105);
DEFLIT(lit_25);
DEFLIT(lit_160);
DEFLIT(lit_237);
DEFLIT(lit_144);
DEFLIT(lit_73);
DEFLIT(lit_278);
DEFLIT(lit_84);
DEFLIT(lit_48);
DEFLIT(lit_57);
DEFLIT(lit_76);
DEFLIT(lit_125);
DEFLIT(lit_58);
DEFLIT(lit_216);
DEFLIT(lit_275);
DEFLIT(lit_265);
DEFLIT(lit_119);
DEFLIT(lit_143);
DEFLIT(lit_165);
DEFLIT(lit_26);
DEFLIT(lit_79);
DEFLIT(lit_103);
DEFLIT(lit_232);
DEFLIT(lit_193);
DEFLIT(lit_33);
DEFLIT(lit_94);
DEFLIT(lit_130);
DEFLIT(lit_38);
DEFLIT(lit_270);

/* FUNCTIONS: */

LOCFOR(fun_default_handler_0);
LOCFOR(fun_describe_condition_1);
LOCFOR(fun_default_handler_description_2);
LOCFOR(fun_build_condition_interactively_3);
LOCFOR(fun_condition_message_4);
LOCFOR(fun_condition_message_setter_5);
LOCFOR(fun_6);
LOCFOR(fun_condition_arguments_7);
LOCFOR(fun_condition_arguments_setter_8);
LOCFOR(fun_9);
LOCFOR(fun_describe_condition_10);
LOCFOR(fun_build_condition_interactively_11);
LOCFOR(fun_default_handler_12);
LOCFOR(fun_default_handler_description_13);
LOCFOR(fun_incongruent_method_error_generic_14);
LOCFOR(fun_incongruent_method_error_generic_setter_15);
LOCFOR(fun_incongruent_method_error_method_16);
LOCFOR(fun_incongruent_method_error_method_setter_17);
LOCFOR(fun_describe_condition_18);
LOCFOR(fun_default_handler_description_19);
LOCFOR(fun_describe_handler_20);
LOCFOR(fun_build_condition_for_handler_interactively_21);
LOCFOR(fun_handler_info_message_22);
LOCFOR(fun_handler_info_message_setter_23);
LOCFOR(fun_handler_info_arguments_24);
LOCFOR(fun_handler_info_arguments_setter_25);
LOCFOR(fun_26);
LOCFOR(fun_describe_handler_27);
LOCFOR(fun_handler_condition_type_28);
LOCFOR(fun_handler_condition_type_setter_29);
LOCFOR(fun_handler_info_30);
LOCFOR(fun_handler_info_setter_31);
LOCFOR(fun_handler_test_32);
LOCFOR(fun_handler_test_setter_33);
LOCFOR(fun_handler_function_34);
LOCFOR(fun_handler_function_setter_35);
FUNFOR(YgooSconditionsYfab_handler);
FUNFOR(YgooSconditionsYhandler_activeQ);
FUNFOR(YgooSconditionsYhandler_matchesQ);
LOCFOR(fun_39);
LOCFOR(fun_Uhandler_functionU_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
FUNFOR(YPwith_monitor);
LOCFOR(fun_44);
FUNFOR(YgooSconditionsYsignal_handler_list);
LOCFOR(fun_sig_46);
LOCFOR(fun_sig_47);
LOCFOR(fun_error_48);
LOCFOR(fun_error_49);
FUNFOR(Yincongruent_method_error);
LOCFOR(fun_call_error_function_51);
LOCFOR(fun_call_error_function_setter_52);
LOCFOR(fun_call_error_arguments_53);
LOCFOR(fun_call_error_arguments_setter_54);
LOCFOR(fun_describe_condition_55);
FUNFOR(Yarity_error);
FUNFOR(Ynarity_error);
LOCFOR(fun_describe_condition_58);
LOCFOR(fun_type_error_value_59);
LOCFOR(fun_type_error_value_setter_60);
LOCFOR(fun_type_error_type_61);
LOCFOR(fun_type_error_type_setter_62);
FUNFOR(Ytype_error);
LOCFOR(fun_describe_condition_64);
FUNFOR(Yunknown_function_error);
LOCFOR(fun_describe_condition_66);
FUNFOR(Yargument_type_error);
LOCFOR(fun_describe_condition_68);
FUNFOR(Yreturn_type_error);
LOCFOR(fun_describe_condition_70);
FUNFOR(Yambiguous_method_error);
LOCFOR(fun_describe_condition_72);
FUNFOR(Yno_applicable_methods_error);
LOCFOR(fun_describe_condition_74);
FUNFOR(Yno_next_methods_error);
LOCFOR(fun_describe_condition_76);
FUNFOR(Ycpl_error);
FUNFOR(Ysyntax_error);
LOCFOR(fun_macro_error_name_79);
LOCFOR(fun_macro_error_name_setter_80);
LOCFOR(fun_macro_error_arguments_81);
LOCFOR(fun_macro_error_arguments_setter_82);
FUNFOR(YgooSmacrosYmacro_error);
LOCFOR(fun_describe_condition_84);
FUNFOR(Ystack_overflow_error);
LOCFOR(fun_describe_condition_86);
FUNFOR(Yinternal_error);
FUNFOR(Yassert_error);
LOCFOR(fun_describe_condition_89);
LOCFOR(fun_range_error_collection_90);
LOCFOR(fun_range_error_collection_setter_91);
LOCFOR(fun_range_error_key_92);
LOCFOR(fun_range_error_key_setter_93);
LOCFOR(fun_range_error_94);
LOCFOR(fun_describe_condition_95);
LOCFOR(fun_file_opening_error_filename_96);
LOCFOR(fun_file_opening_error_filename_setter_97);
LOCFOR(fun_file_opening_error_98);
LOCFOR(fun_describe_condition_99);
LOCFOR(fun_unbound_variable_error_variable_100);
LOCFOR(fun_unbound_variable_error_variable_setter_101);
LOCFOR(fun_describe_condition_102);
LOCFOR(fun_property_error_owner_103);
LOCFOR(fun_property_error_owner_setter_104);
LOCFOR(fun_105);
LOCFOR(fun_property_error_generic_106);
LOCFOR(fun_property_error_generic_setter_107);
LOCFOR(fun_108);
FUNFOR(Yproperty_unbound_error);
LOCFOR(fun_describe_condition_110);
FUNFOR(Yproperty_not_found_error);
LOCFOR(fun_describe_condition_112);
FUNFOR(Yproperty_type_error);
LOCFOR(fun_describe_condition_114);
FUNFOR(Yas_error);
LOCFOR(fun_describe_condition_116);
FUNFOR(Yarithmetic_error);
FUNFOR(Ykeyboard_interrupt);
LOCFOR(fun_search_119);
FUNFOR(YgooSconditionsYdo_handlers_of_type);
LOCFOR(fun_121);
FUNFOR(YgooSconditionsYlist_handlers);
LOCFOR(fun_123);
LOCFOR(fun_search_124);
FUNFOR(YgooSconditionsYinvoke_handler_interactively);
FUNFOR(YgooSconditionsYchoose_handler);
extern P YgooSconditionsY___main_0___ ();
extern P YgooSconditionsY___main_1___ ();
extern P YgooSconditionsY___main_2___ ();
extern P YgooSconditionsY___main_3___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_default_handler_0) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_describe_condition_1) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_5),c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_default_handler_description_2) {
  P cond_type_;
  P T0;
  P a1;
LINK_STACK();
  ARG(cond_type_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_8),cond_type_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_build_condition_interactively_3) {
  P cond_type_,in_,out_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(cond_type_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
loop:
  T0 = CALL1(1,VARREF(Ynew),cond_type_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_condition_message_4) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYcondition_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_condition_message_setter_5) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYcondition_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_17));
}

FUNCODEDEF(fun_condition_arguments_7) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYcondition_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_condition_arguments_setter_8) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYcondition_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_9) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_describe_condition_10) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYcondition_message),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcondition_arguments),c_);
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSconditionsYmsg_to_str),YPfalse,T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_build_condition_interactively_11) {
  P cond_type_,in_,out_;
  P condF2273;
  P xF2272;
  P yF2271;
  P xF2270;
  P tmpF2269;
  P next_metsF2268;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2,a3;
LINK_STACK();
  ARG(cond_type_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
loop:
  T2 = (P)YPnext_methods();
  next_metsF2268 = T2;
  tmpF2269 = next_metsF2268;
  if (tmpF2269 != YPfalse) {
    xF2270 = next_metsF2268;
    yF2271 = Ynil;
    T9 = (P)YPeqQ(xF2270,yF2271);
    T8 = (P)YPbb(T9);
    T7 = T8;
    xF2272 = T7;
    T11 = (P)YPeqQ(xF2272,YPfalse);
    T10 = (P)YPbb(T11);
    T6 = T10;
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T4 = T5;
  if (T4 != YPfalse) {
    T13 = CALL1(1,VARREF(Yhead),next_metsF2268);
    T14 = CALL1(1,VARREF(Ytail),next_metsF2268);
    T12 = CALLN(1,VARREF(YgooSmacrosYnapp),6,T13,T14,cond_type_,in_,out_,Ynil);
    T3 = T12;
  } else {
    T16 = (P)YPfun_reg();
    T17 = CALL3(1,VARREF(Ylst),cond_type_,in_,out_);
    T15 = CALL2(1,VARREF(Yno_next_methods_error),T16,T17);
    T3 = T15;
  }
  T1 = T3;
  condF2273 = T1;
  CALL2(1,VARREF(YgooSconditionsYmsg),out_,LITREF(lit_25));
  T18 = CALL1(1,VARREF(YgooSconditionsYread),in_);
  CALL2(1,VARREF(YgooSconditionsYcondition_message_setter),T18,condF2273);
  CALL2(1,VARREF(YgooSconditionsYmsg),out_,LITREF(lit_26));
  T19 = CALL1(1,VARREF(YgooSconditionsYread),in_);
  CALL2(1,VARREF(YgooSconditionsYcondition_arguments_setter),T19,condF2273);
  T0 = condF2273;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_default_handler_12) {
  P c_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSconditionsYdescribe_condition),c_);
  CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_29),T0);
  T1 = (P)YPinvoke_debugger(c_);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_default_handler_description_13) {
  P cond_type_;
  P T0;
  P a1;
LINK_STACK();
  ARG(cond_type_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_34),cond_type_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_incongruent_method_error_generic_14) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYincongruent_method_error_generic));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_incongruent_method_error_generic_setter_15) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYincongruent_method_error_generic));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_incongruent_method_error_method_16) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYincongruent_method_error_method));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_incongruent_method_error_method_setter_17) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYincongruent_method_error_method));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_18) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYincongruent_method_error_method),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYincongruent_method_error_generic),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_45),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_default_handler_description_19) {
  P cond_type_;
  P a1;
LINK_STACK();
  ARG(cond_type_, 0);
loop:
UNLINK_STACK();
  RET(LITREF(lit_48));
}

FUNCODEDEF(fun_describe_handler_20) {
  P info_,condition_type_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(info_, 0);
  ARG(condition_type_, 1);
loop:
  T0 = CALL1(1,VARREF(YgooSconditionsYdefault_handler_description),condition_type_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_build_condition_for_handler_interactively_21) {
  P info_,condition_type_,in_,out_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(info_, 0);
  ARG(condition_type_, 1);
  ARG(in_, 2);
  ARG(out_, 3);
loop:
  T0 = CALL3(1,VARREF(YgooSconditionsYbuild_condition_interactively),condition_type_,in_,out_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_handler_info_message_22) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yhandler_info_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_message_setter_23) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yhandler_info_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_arguments_24) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yhandler_info_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_arguments_setter_25) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yhandler_info_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_describe_handler_27) {
  P info_,condition_type_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(info_, 0);
  ARG(condition_type_, 1);
loop:
  T1 = CALL1(1,VARREF(Yhandler_info_message),info_);
  T2 = CALL1(1,VARREF(Yhandler_info_arguments),info_);
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSconditionsYmsg_to_str),YPfalse,T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_handler_condition_type_28) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYhandler_condition_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_condition_type_setter_29) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYhandler_condition_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_30) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYhandler_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_setter_31) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYhandler_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_test_32) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYhandler_test));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_test_setter_33) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYhandler_test));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_function_34) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYhandler_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_function_setter_35) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYhandler_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSconditionsYfab_handler) {
  P type_,info_,test_,f_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(type_, 0);
  ARG(info_, 1);
  ARG(test_, 2);
  ARG(f_, 3);
loop:
  T0 = CALLN(1,VARREF(Ynew),9,VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_condition_type),type_,VARREF(YgooSconditionsYhandler_info),info_,VARREF(YgooSconditionsYhandler_test),test_,VARREF(YgooSconditionsYhandler_function),f_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSconditionsYhandler_activeQ) {
  P handler_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(handler_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYhandler_test),handler_);
  T0 = CALL0(1,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSconditionsYhandler_matchesQ) {
  P handler_,condition_;
  P tmpF2274;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(handler_, 0);
  ARG(condition_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSconditionsYhandler_condition_type),handler_);
  T1 = CALL2(1,VARREF(YisaQ),condition_,T2);
  tmpF2274 = T1;
  if (tmpF2274 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSconditionsYhandler_activeQ),handler_);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_39) {
  P UresumeU_;
  P T0;
  P a1;
LINK_STACK();
  ARG(UresumeU_, 0);
loop:
  CALL2(1,FREEREF(1),FREEREF(0),UresumeU_);
  T0 = CALL0(1,FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Uhandler_functionU_40) {
  P condition_,Unext_handlerU_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(condition_, 0);
  ARG(Unext_handlerU_, 1);
loop:
  T1 = FUNFAB(fun_39,3,condition_,FREEREF(0),Unext_handlerU_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL0(1,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YgooSconditionsYTcurrent_handlersT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPwith_monitor) {
  P type_,info_,test_fun_,user_handler_,main_fun_;
  P Uhandler_functionUF2276;
  P Uoriginal_handlersUF2275;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(type_, 0);
  ARG(info_, 1);
  ARG(test_fun_, 2);
  ARG(user_handler_, 3);
  ARG(main_fun_, 4);
loop:
  Uoriginal_handlersUF2275 = DYNREF(YgooSconditionsYTcurrent_handlersT);
  T2 = FUNSHELL(0,fun_Uhandler_functionU_40,1);
  Uhandler_functionUF2276 = T2;
  FUNINIT(Uhandler_functionUF2276, 1,user_handler_);
  T4 = CALL4(1,VARREF(YgooSconditionsYfab_handler),type_,info_,test_fun_,Uhandler_functionUF2276);
  T3 = CALL2(1,VARREF(YgooScolsSseqxYpushX),DYNREF(YgooSconditionsYTcurrent_handlersT),T4);
  DYNSET(YgooSconditionsYTcurrent_handlersT,T3);
  T6 = FUNFAB(fun_41,1,main_fun_);
  T7 = FUNFAB(fun_42,1,Uoriginal_handlersUF2275);
  T5 = with_cleanup(T6,T7);
  T1 = T5;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSconditionsYsignal_handler_list),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSconditionsYsignal_handler_list) {
  P condition_,handlers_;
  P remainingF2278;
  P handlerF2277;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(condition_, 0);
  ARG(handlers_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),handlers_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSconditionsYdefault_handler),condition_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),handlers_);
    handlerF2277 = T4;
    T6 = CALL1(1,VARREF(Ytail),handlers_);
    remainingF2278 = T6;
    T8 = CALL2(1,VARREF(YgooSconditionsYhandler_matchesQ),handlerF2277,condition_);
    if (T8 != YPfalse) {
      T11 = CALL1(1,VARREF(YgooSconditionsYhandler_function),handlerF2277);
      T10 = FUNFAB(fun_44,2,condition_,remainingF2278);
      T9 = CALL2(1,T11,condition_,T10);
      T7 = T9;
    } else {
      T12 = CALL2(1,VARREF(YgooSconditionsYsignal_handler_list),condition_,remainingF2278);
      T7 = T12;
    }
    T5 = T7;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sig_46) {
  P condition_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(condition_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSconditionsYsignal_handler_list),condition_,DYNREF(YgooSconditionsYTcurrent_handlersT));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sig_47) {
  P c_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLsimple_conditionG),VARREF(YgooSconditionsYcondition_message),c_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_error_48) {
  P c_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),c_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_error_49) {
  P c_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLsimple_errorG),VARREF(YgooSconditionsYcondition_message),c_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(Yerror),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yincongruent_method_error) {
  P gen_,met_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
loop:
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLincongruent_method_errorG),VARREF(YgooSconditionsYincongruent_method_error_generic),gen_,VARREF(YgooSconditionsYincongruent_method_error_method),met_);
  T0 = CALL1(1,VARREF(Yerror),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_call_error_function_51) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYcall_error_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_call_error_function_setter_52) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYcall_error_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_call_error_arguments_53) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYcall_error_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_call_error_arguments_setter_54) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYcall_error_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_55) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_115),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yarity_error) {
  P fun_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(fun_, 0);
  ARG(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLarity_errorG),VARREF(YgooSconditionsYcall_error_function),fun_,VARREF(YgooSconditionsYcall_error_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ynarity_error) {
  P fun_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(fun_, 0);
  ARG(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLnarity_errorG),VARREF(YgooSconditionsYcall_error_function),fun_,VARREF(YgooSconditionsYcall_error_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_58) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_122),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_type_error_value_59) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYtype_error_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_type_error_value_setter_60) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYtype_error_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_type_error_type_61) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYtype_error_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_type_error_type_setter_62) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYtype_error_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ytype_error) {
  P arg_,type_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(arg_, 0);
  ARG(type_, 1);
loop:
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLtype_errorG),VARREF(YgooSconditionsYtype_error_value),arg_,VARREF(YgooSconditionsYtype_error_type),type_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_64) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYtype_error_value),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYtype_error_type),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_135),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yunknown_function_error) {
  P f_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YgooSconditionsYLunknown_function_errorG),VARREF(YgooSconditionsYcall_error_function),f_,VARREF(YgooSconditionsYcall_error_arguments),T2,VARREF(YgooSconditionsYtype_error_value),f_,VARREF(YgooSconditionsYtype_error_type),VARREF(YLfunG));
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_66) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYtype_error_value),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_140),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yargument_type_error) {
  P f_,val_,type_,args_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(val_, 1);
  ARG(type_, 2);
  ARG(args_, 3);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YgooSconditionsYLargument_type_errorG),VARREF(YgooSconditionsYcall_error_function),f_,VARREF(YgooSconditionsYcall_error_arguments),T2,VARREF(YgooSconditionsYtype_error_value),val_,VARREF(YgooSconditionsYtype_error_type),type_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_68) {
  P c_;
  P xF2283;
  P yF2282;
  P xF2281;
  P tmpF2280;
  P next_metsF2279;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T3 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T1 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_145),T2,T3);
  T5 = (P)YPnext_methods();
  next_metsF2279 = T5;
  tmpF2280 = next_metsF2279;
  if (tmpF2280 != YPfalse) {
    xF2281 = next_metsF2279;
    yF2282 = Ynil;
    T12 = (P)YPeqQ(xF2281,yF2282);
    T11 = (P)YPbb(T12);
    T10 = T11;
    xF2283 = T10;
    T14 = (P)YPeqQ(xF2283,YPfalse);
    T13 = (P)YPbb(T14);
    T9 = T13;
    T8 = T9;
  } else {
    T8 = YPfalse;
  }
  T7 = T8;
  if (T7 != YPfalse) {
    T16 = CALL1(1,VARREF(Yhead),next_metsF2279);
    T17 = CALL1(1,VARREF(Ytail),next_metsF2279);
    T15 = CALL4(1,VARREF(YgooSmacrosYnapp),T16,T17,c_,Ynil);
    T6 = T15;
  } else {
    T19 = (P)YPfun_reg();
    T20 = CALL1(1,VARREF(Ylst),c_);
    T18 = CALL2(1,VARREF(Yno_next_methods_error),T19,T20);
    T6 = T18;
  }
  T4 = T6;
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,T4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yreturn_type_error) {
  P f_,val_,type_,args_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(val_, 1);
  ARG(type_, 2);
  ARG(args_, 3);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YgooSconditionsYLreturn_type_errorG),VARREF(YgooSconditionsYcall_error_function),f_,VARREF(YgooSconditionsYcall_error_arguments),T2,VARREF(YgooSconditionsYtype_error_value),val_,VARREF(YgooSconditionsYtype_error_type),type_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_70) {
  P c_;
  P xF2288;
  P yF2287;
  P xF2286;
  P tmpF2285;
  P next_metsF2284;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T3 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T1 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_150),T2,T3);
  T5 = (P)YPnext_methods();
  next_metsF2284 = T5;
  tmpF2285 = next_metsF2284;
  if (tmpF2285 != YPfalse) {
    xF2286 = next_metsF2284;
    yF2287 = Ynil;
    T12 = (P)YPeqQ(xF2286,yF2287);
    T11 = (P)YPbb(T12);
    T10 = T11;
    xF2288 = T10;
    T14 = (P)YPeqQ(xF2288,YPfalse);
    T13 = (P)YPbb(T14);
    T9 = T13;
    T8 = T9;
  } else {
    T8 = YPfalse;
  }
  T7 = T8;
  if (T7 != YPfalse) {
    T16 = CALL1(1,VARREF(Yhead),next_metsF2284);
    T17 = CALL1(1,VARREF(Ytail),next_metsF2284);
    T15 = CALL4(1,VARREF(YgooSmacrosYnapp),T16,T17,c_,Ynil);
    T6 = T15;
  } else {
    T19 = (P)YPfun_reg();
    T20 = CALL1(1,VARREF(Ylst),c_);
    T18 = CALL2(1,VARREF(Yno_next_methods_error),T19,T20);
    T6 = T18;
  }
  T4 = T6;
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,T4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yambiguous_method_error) {
  P gen_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLambiguous_method_errorG),VARREF(YgooSconditionsYcall_error_function),gen_,VARREF(YgooSconditionsYcall_error_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_72) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_155),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yno_applicable_methods_error) {
  P gen_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLno_applicable_methods_errorG),VARREF(YgooSconditionsYcall_error_function),gen_,VARREF(YgooSconditionsYcall_error_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_74) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_160),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yno_next_methods_error) {
  P met_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(met_, 0);
  ARG(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLno_next_methods_errorG),VARREF(YgooSconditionsYcall_error_function),met_,VARREF(YgooSconditionsYcall_error_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_76) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_165),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Ycpl_error) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL4(1,VARREF(Ynew),VARREF(YgooSconditionsYLcpl_errorG),VARREF(YgooSconditionsYcondition_message),msg_,T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ysyntax_error) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLsyntax_errorG),VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_macro_error_name_79) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYmacro_error_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_macro_error_name_setter_80) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYmacro_error_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_macro_error_arguments_81) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYmacro_error_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_macro_error_arguments_setter_82) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYmacro_error_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSmacrosYmacro_error) {
  P name_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(args_, 1);
loop:
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLmacro_errorG),VARREF(YgooSconditionsYmacro_error_name),name_,VARREF(YgooSconditionsYmacro_error_arguments),args_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_84) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYmacro_error_name),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYmacro_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_185),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Ystack_overflow_error) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(Ynew),VARREF(YgooSconditionsYLstack_overflowG));
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_86) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  RET(LITREF(lit_189));
}

FUNCODEDEF(Yinternal_error) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLinternal_errorG),VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yassert_error) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLassert_errorG),VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_89) {
  P c_;
  P xF2293;
  P yF2292;
  P xF2291;
  P tmpF2290;
  P next_metsF2289;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = (P)YPnext_methods();
  next_metsF2289 = T2;
  tmpF2290 = next_metsF2289;
  if (tmpF2290 != YPfalse) {
    xF2291 = next_metsF2289;
    yF2292 = Ynil;
    T9 = (P)YPeqQ(xF2291,yF2292);
    T8 = (P)YPbb(T9);
    T7 = T8;
    xF2293 = T7;
    T11 = (P)YPeqQ(xF2293,YPfalse);
    T10 = (P)YPbb(T11);
    T6 = T10;
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T4 = T5;
  if (T4 != YPfalse) {
    T13 = CALL1(1,VARREF(Yhead),next_metsF2289);
    T14 = CALL1(1,VARREF(Ytail),next_metsF2289);
    T12 = CALL4(1,VARREF(YgooSmacrosYnapp),T13,T14,c_,Ynil);
    T3 = T12;
  } else {
    T16 = (P)YPfun_reg();
    T17 = CALL1(1,VARREF(Ylst),c_);
    T15 = CALL2(1,VARREF(Yno_next_methods_error),T16,T17);
    T3 = T15;
  }
  T1 = T3;
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_197),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_range_error_collection_90) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYrange_error_collection));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_error_collection_setter_91) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYrange_error_collection));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_error_key_92) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYrange_error_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_error_key_setter_93) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYrange_error_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_error_94) {
  P c_,k_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(k_, 1);
loop:
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLrange_errorG),VARREF(YgooSconditionsYrange_error_collection),c_,VARREF(YgooSconditionsYrange_error_key),k_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_95) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYrange_error_key),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYrange_error_collection),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_210),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_file_opening_error_filename_96) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYfile_opening_error_filename));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_file_opening_error_filename_setter_97) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYfile_opening_error_filename));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_file_opening_error_98) {
  P filename_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = CALL3(1,VARREF(Ynew),VARREF(YgooSconditionsYLfile_opening_errorG),VARREF(YgooSconditionsYfile_opening_error_filename),filename_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_99) {
  P c_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYfile_opening_error_filename),c_);
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_220),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_unbound_variable_error_variable_100) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYunbound_variable_error_variable));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unbound_variable_error_variable_setter_101) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYunbound_variable_error_variable));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_102) {
  P c_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYunbound_variable_error_variable),c_);
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_228),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_property_error_owner_103) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYproperty_error_owner));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_property_error_owner_setter_104) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYproperty_error_owner));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_105) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_property_error_generic_106) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYproperty_error_generic));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_property_error_generic_setter_107) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYproperty_error_generic));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_108) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(Yproperty_unbound_error) {
  P owner_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(owner_, 0);
loop:
  T1 = CALL3(1,VARREF(Ynew),VARREF(YgooSconditionsYLproperty_unbound_errorG),VARREF(YgooSconditionsYproperty_error_owner),owner_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_110) {
  P c_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYproperty_error_owner),c_);
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_244),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yproperty_not_found_error) {
  P generic_,owner_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(generic_, 0);
  ARG(owner_, 1);
loop:
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLproperty_not_found_errorG),VARREF(YgooSconditionsYproperty_error_generic),generic_,VARREF(YgooSconditionsYproperty_error_owner),owner_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_112) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYproperty_error_generic),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYproperty_error_owner),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_249),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yproperty_type_error) {
  P generic_,value_,type_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(generic_, 0);
  ARG(value_, 1);
  ARG(type_, 2);
loop:
  T1 = CALLN(1,VARREF(Ynew),7,VARREF(YgooSconditionsYLproperty_type_errorG),VARREF(YgooSconditionsYproperty_error_generic),generic_,VARREF(YgooSconditionsYtype_error_value),value_,VARREF(YgooSconditionsYtype_error_type),type_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_114) {
  P c_;
  P xF2298;
  P yF2297;
  P xF2296;
  P tmpF2295;
  P next_metsF2294;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSconditionsYproperty_error_generic),c_);
  T1 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_254),T2);
  T4 = (P)YPnext_methods();
  next_metsF2294 = T4;
  tmpF2295 = next_metsF2294;
  if (tmpF2295 != YPfalse) {
    xF2296 = next_metsF2294;
    yF2297 = Ynil;
    T11 = (P)YPeqQ(xF2296,yF2297);
    T10 = (P)YPbb(T11);
    T9 = T10;
    xF2298 = T9;
    T13 = (P)YPeqQ(xF2298,YPfalse);
    T12 = (P)YPbb(T13);
    T8 = T12;
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
  T6 = T7;
  if (T6 != YPfalse) {
    T15 = CALL1(1,VARREF(Yhead),next_metsF2294);
    T16 = CALL1(1,VARREF(Ytail),next_metsF2294);
    T14 = CALL4(1,VARREF(YgooSmacrosYnapp),T15,T16,c_,Ynil);
    T5 = T14;
  } else {
    T18 = (P)YPfun_reg();
    T19 = CALL1(1,VARREF(Ylst),c_);
    T17 = CALL2(1,VARREF(Yno_next_methods_error),T18,T19);
    T5 = T17;
  }
  T3 = T5;
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yas_error) {
  P type_,value_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(type_, 0);
  ARG(value_, 1);
loop:
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLas_errorG),VARREF(YgooSconditionsYtype_error_type),type_,VARREF(YgooSconditionsYtype_error_value),value_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_116) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYtype_error_type),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYtype_error_value),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_259),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yarithmetic_error) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLarithmetic_errorG),VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ykeyboard_interrupt) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(Ynew),VARREF(YgooSconditionsYLkeyboard_interruptG));
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_search_119) {
  P handlers_;
  P tmpF2301;
  P remainingF2300;
  P handlerF2299;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(handlers_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),handlers_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T3 = CALL1(1,VARREF(Yhead),handlers_);
    handlerF2299 = T3;
    T5 = CALL1(1,VARREF(Ytail),handlers_);
    remainingF2300 = T5;
    T8 = CALL1(1,VARREF(YgooSconditionsYhandler_condition_type),handlerF2299);
    T7 = CALL2(1,VARREF(YsubtypeQ),T8,FREEREF(0));
    tmpF2301 = T7;
    if (tmpF2301 != YPfalse) {
      T10 = CALL1(1,VARREF(YgooSconditionsYhandler_activeQ),handlerF2299);
      T9 = T10;
    } else {
      T9 = YPfalse;
    }
    T6 = T9;
    if (T6 != YPfalse) {
      T11 = CALL1(1,FREEREF(1),handlerF2299);
    } else {
    }
    a1 = remainingF2300;
    handlers_ = a1;
    goto loop;
    T4 = T12;
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSconditionsYdo_handlers_of_type) {
  P type_,f_;
  P searchF2302;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(type_, 0);
  ARG(f_, 1);
loop:
  T1 = FUNSHELL(1,fun_search_119,3);
  searchF2302 = T1;
  FUNINIT(searchF2302, 3,type_,f_,searchF2302);
  T2 = CALL1(0,searchF2302,DYNREF(YgooSconditionsYTcurrent_handlersT));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_121) {
  P handler_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(handler_, 0);
loop:
  T0 = BOXVAL(FREEREF(1));
  T2 = CALL1(1,VARREF(YgooSconditionsYhandler_info),handler_);
  T3 = CALL1(1,VARREF(YgooSconditionsYhandler_condition_type),handler_);
  T1 = CALL2(1,VARREF(YgooSconditionsYdescribe_handler),T2,T3);
  CALL4(1,VARREF(YgooSconditionsYmsg),FREEREF(0),LITREF(lit_272),T0,T1);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),FREEREF(2),handler_);
  T6 = BOXVAL(FREEREF(1));
  T5 = CALL2(1,VARREF(YgooSmathYA),T6,YPint((P)1));
  T4 = BOXVAL(FREEREF(1)) = T5;
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(YgooSconditionsYlist_handlers) {
  P type_,out_;
  P applicableF2304;
  P iF2303;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(type_, 0);
  ARG(out_, 1);
loop:
  iF2303 = YPint((P)1);
  iF2303 = BOXFAB(iF2303);
  T3 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  applicableF2304 = T3;
  T4 = FUNFAB(fun_121,3,out_,iF2303,applicableF2304);
  CALL2(1,VARREF(YgooSconditionsYdo_handlers_of_type),type_,T4);
  T2 = applicableF2304;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_123) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSconditionsYsignal_handler_list),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_search_124) {
  P handlers_;
  P remainingF2306;
  P currentF2305;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(handlers_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),handlers_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Yerror),LITREF(lit_277),FREEREF(0));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),handlers_);
    currentF2305 = T4;
    T6 = CALL1(1,VARREF(Ytail),handlers_);
    remainingF2306 = T6;
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),currentF2305);
    if (T8 != YPfalse) {
      T11 = CALL1(1,VARREF(YgooSconditionsYhandler_function),FREEREF(0));
      T10 = FUNFAB(fun_123,2,FREEREF(1),remainingF2306);
      T9 = CALL2(1,T11,FREEREF(1),T10);
      T7 = T9;
    } else {
      a1 = remainingF2306;
      handlers_ = a1;
      goto loop;
      T7 = T12;
    }
    T5 = T7;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSconditionsYinvoke_handler_interactively) {
  P handler_,in_,out_;
  P searchF2308;
  P conditionF2307;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(handler_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
loop:
  T2 = CALL1(1,VARREF(YgooSconditionsYhandler_info),handler_);
  T3 = CALL1(1,VARREF(YgooSconditionsYhandler_condition_type),handler_);
  T1 = CALL4(1,VARREF(YgooSconditionsYbuild_condition_for_handler_interactively),T2,T3,in_,out_);
  conditionF2307 = T1;
  T5 = CALL2(1,VARREF(YgooSconditionsYhandler_matchesQ),handler_,conditionF2307);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yerror),LITREF(lit_275),handler_,conditionF2307);
  } else {
  }
  T8 = FUNSHELL(1,fun_search_124,3);
  searchF2308 = T8;
  FUNINIT(searchF2308, 3,handler_,conditionF2307,searchF2308);
  T9 = CALL1(0,searchF2308,DYNREF(YgooSconditionsYTcurrent_handlersT));
  T7 = T9;
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSconditionsYchoose_handler) {
  P type_,in_,out_;
  P tmpF2311;
  P nF2310;
  P handlersF2309;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3;
LINK_STACK();
  ARG(type_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),type_,out_);
  handlersF2309 = T1;
  CALL2(1,VARREF(YgooSconditionsYmsg),out_,LITREF(lit_280));
  T4 = CALL1(1,VARREF(YgooSconditionsYread),in_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  nF2310 = T3;
  T6 = CALL2(1,VARREF(YgooSmagYL),nF2310,YPint((P)0));
  tmpF2311 = T6;
  if (tmpF2311 != YPfalse) {
    T7 = tmpF2311;
  } else {
    T9 = CALL1(1,VARREF(YgooStypesYlen),handlersF2309);
    T8 = CALL2(1,VARREF(YgooSmagYGE),nF2310,T9);
    T7 = T8;
  }
  T5 = T7;
  if (T5 != YPfalse) {
    T10 = CALL2(1,VARREF(Yerror),LITREF(lit_281),nF2310);
  } else {
  }
  T12 = CALL2(1,VARREF(YgooSmacrosYelt),handlersF2309,nF2310);
  T11 = CALL3(1,VARREF(YgooSconditionsYinvoke_handler_interactively),T12,in_,out_);
  T2 = T11;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YgooSconditionsY___main_0___() {
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
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"<condition>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YgooSconditionsYLconditionG,T0);
  lit_1 = YPPsym((P)"default-handler");
  lit_2 = YPPlist(1,YPPsym((P)"c"));
  T2 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YgooSconditionsYLconditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_handler_0 = YPmet(FUNCODEREF(fun_default_handler_0),LITREF(lit_1),T2,ENVNUL,PNUL,sloc(21));
  T5 = BOUNDP(YgooSconditionsYdefault_handler);
  if (T5 != YPfalse) {
    T4 = VARREF(YgooSconditionsYdefault_handler);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_default_handler_0;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YgooSconditionsYdefault_handler,T3);
  lit_3 = YPPsym((P)"describe-condition");
  lit_4 = YPPlist(1,YPPsym((P)"c"));
  lit_5 = YPsb((P)"Anonymous condition %=");
  T7 = YPsig(LITREF(lit_4),YPPlist(1,VARREF(YgooSconditionsYLconditionG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_1 = YPmet(FUNCODEREF(fun_describe_condition_1),LITREF(lit_3),T7,ENVNUL,PNUL,sloc(24));
  T10 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T10 != YPfalse) {
    T9 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_describe_condition_1;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YgooSconditionsYdescribe_condition,T8);
  lit_6 = YPPsym((P)"default-handler-description");
  lit_7 = YPPlist(1,YPPsym((P)"cond-type"));
  lit_8 = YPsb((P)"Anonymous handler for %s");
  T13 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T12 = YPsig(LITREF(lit_7),YPPlist(1,T13),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_default_handler_description_2 = YPmet(FUNCODEREF(fun_default_handler_description_2),LITREF(lit_6),T12,ENVNUL,PNUL,sloc(27));
  T16 = BOUNDP(YgooSconditionsYdefault_handler_description);
  if (T16 != YPfalse) {
    T15 = VARREF(YgooSconditionsYdefault_handler_description);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_default_handler_description_2;
  T14 = XCALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YgooSconditionsYdefault_handler_description,T14);
  lit_9 = YPPsym((P)"build-condition-interactively");
  lit_10 = YPPlist(3,YPPsym((P)"cond-type"),YPPsym((P)"in"),YPPsym((P)"out"));
  T19 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T18 = YPsig(LITREF(lit_10),YPPlist(3,T19,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YgooSconditionsYLconditionG),Ynil);
  fun_build_condition_interactively_3 = YPmet(FUNCODEREF(fun_build_condition_interactively_3),LITREF(lit_9),T18,ENVNUL,PNUL,sloc(30));
  T22 = BOUNDP(YgooSconditionsYbuild_condition_interactively);
  if (T22 != YPfalse) {
    T21 = VARREF(YgooSconditionsYbuild_condition_interactively);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_build_condition_interactively_3;
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YgooSconditionsYbuild_condition_interactively,T20);
  lit_11 = YPPsym((P)"<simple-condition>");
  T25 = (P)YPpair(VARREF(YgooSconditionsYLconditionG),Ynil);
  T24 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_11),T25);
  VARSET(YgooSconditionsYLsimple_conditionG,T24);
  lit_12 = YPPsym((P)"condition-message");
  lit_13 = YPPlist(1,YPPsym((P)"_x"));
  T26 = YPsig(LITREF(lit_13),YPPlist(1,VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_condition_message_4 = YPmet(FUNCODEREF(fun_condition_message_4),LITREF(lit_12),T26,ENVNUL,PNUL,sloc(35));
  T29 = BOUNDP(YgooSconditionsYcondition_message);
  if (T29 != YPfalse) {
    T28 = VARREF(YgooSconditionsYcondition_message);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_condition_message_4;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(YgooSconditionsYcondition_message,T27);
  lit_14 = YPPsym((P)"condition-message-setter");
  lit_15 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T31 = YPsig(LITREF(lit_15),YPPlist(2,VARREF(YLstrG),VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_condition_message_setter_5 = YPmet(FUNCODEREF(fun_condition_message_setter_5),LITREF(lit_14),T31,ENVNUL,PNUL,sloc(35));
  T34 = BOUNDP(YgooSconditionsYcondition_message_setter);
  if (T34 != YPfalse) {
    T33 = VARREF(YgooSconditionsYcondition_message_setter);
  } else {
    T33 = YPfalse;
  }
  T35 = fun_condition_message_setter_5;
  T32 = XCALL2(1,VARREF(YPdefine_method),T33,T35);
  VARSET(YgooSconditionsYcondition_message_setter,T32);
  lit_16 = YPPlist(1,YPPsym((P)"_x"));
  lit_17 = YPsb((P)"");
  T36 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T36,ENVNUL,PNUL,sloc(35));
  T37 = fun_6;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLsimple_conditionG),VARREF(YgooSconditionsYcondition_message),VARREF(YgooSconditionsYcondition_message_setter),VARREF(YLstrG),T37);
  lit_18 = YPPsym((P)"condition-arguments");
  lit_19 = YPPlist(1,YPPsym((P)"_x"));
  T38 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_condition_arguments_7 = YPmet(FUNCODEREF(fun_condition_arguments_7),LITREF(lit_18),T38,ENVNUL,PNUL,sloc(36));
  T41 = BOUNDP(YgooSconditionsYcondition_arguments);
  if (T41 != YPfalse) {
    T40 = VARREF(YgooSconditionsYcondition_arguments);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_condition_arguments_7;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YgooSconditionsYcondition_arguments,T39);
  lit_20 = YPPsym((P)"condition-arguments-setter");
  lit_21 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T43 = YPsig(LITREF(lit_21),YPPlist(2,VARREF(YLlstG),VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_condition_arguments_setter_8 = YPmet(FUNCODEREF(fun_condition_arguments_setter_8),LITREF(lit_20),T43,ENVNUL,PNUL,sloc(36));
  T46 = BOUNDP(YgooSconditionsYcondition_arguments_setter);
  if (T46 != YPfalse) {
    T45 = VARREF(YgooSconditionsYcondition_arguments_setter);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_condition_arguments_setter_8;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YgooSconditionsYcondition_arguments_setter,T44);
  lit_22 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T48,ENVNUL,PNUL,sloc(36));
  T49 = fun_9;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLsimple_conditionG),VARREF(YgooSconditionsYcondition_arguments),VARREF(YgooSconditionsYcondition_arguments_setter),VARREF(YLlstG),T49);
  lit_23 = YPPlist(1,YPPsym((P)"c"));
  T50 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_10 = YPmet(FUNCODEREF(fun_describe_condition_10),LITREF(lit_3),T50,ENVNUL,PNUL,sloc(38));
  T53 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T53 != YPfalse) {
    T52 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_describe_condition_10;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YgooSconditionsYdescribe_condition,T51);
  lit_24 = YPPlist(3,YPPsym((P)"cond-type"),YPPsym((P)"in"),YPPsym((P)"out"));
  lit_25 = YPsb((P)"Condition format string: ");
  lit_26 = YPsb((P)"Condition format arguments: ");
  T56 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLsimple_conditionG));
  T55 = YPsig(LITREF(lit_24),YPPlist(3,T56,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YgooSconditionsYLconditionG),Ynil);
  fun_build_condition_interactively_11 = YPmet(FUNCODEREF(fun_build_condition_interactively_11),LITREF(lit_9),T55,ENVNUL,PNUL,sloc(41));
  T59 = BOUNDP(YgooSconditionsYbuild_condition_interactively);
  if (T59 != YPfalse) {
    T58 = VARREF(YgooSconditionsYbuild_condition_interactively);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_build_condition_interactively_11;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YgooSconditionsYbuild_condition_interactively,T57);
  lit_27 = YPPsym((P)"<serious-condition>");
  T62 = (P)YPpair(VARREF(YgooSconditionsYLconditionG),Ynil);
  T61 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_27),T62);
  VARSET(YgooSconditionsYLserious_conditionG,T61);
  lit_28 = YPPlist(1,YPPsym((P)"c"));
  lit_29 = YPsb((P)"%s\n");
  T63 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YgooSconditionsYLserious_conditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_handler_12 = YPmet(FUNCODEREF(fun_default_handler_12),LITREF(lit_1),T63,ENVNUL,PNUL,sloc(52));
  T66 = BOUNDP(YgooSconditionsYdefault_handler);
  if (T66 != YPfalse) {
    T65 = VARREF(YgooSconditionsYdefault_handler);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_default_handler_12;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YgooSconditionsYdefault_handler,T64);
  lit_30 = YPPsym((P)"<error>");
  T69 = (P)YPpair(VARREF(YgooSconditionsYLserious_conditionG),Ynil);
  T68 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_30),T69);
  VARSET(YgooSconditionsYLerrorG,T68);
  lit_31 = YPPsym((P)"<simple-error>");
  T72 = (P)YPpair(VARREF(YgooSconditionsYLsimple_conditionG),Ynil);
  T71 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),T72);
  T70 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_31),T71);
  VARSET(YgooSconditionsYLsimple_errorG,T70);
  lit_32 = YPPsym((P)"<restart>");
  T74 = (P)YPpair(VARREF(YgooSconditionsYLconditionG),Ynil);
  T73 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_32),T74);
  VARSET(YgooSconditionsYLrestartG,T73);
  lit_33 = YPPlist(1,YPPsym((P)"cond-type"));
  lit_34 = YPsb((P)"Anonymous restart of type %s");
  T76 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLrestartG));
  T75 = YPsig(LITREF(lit_33),YPPlist(1,T76),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_default_handler_description_13 = YPmet(FUNCODEREF(fun_default_handler_description_13),LITREF(lit_6),T75,ENVNUL,PNUL,sloc(76));
  T79 = BOUNDP(YgooSconditionsYdefault_handler_description);
  if (T79 != YPfalse) {
    T78 = VARREF(YgooSconditionsYdefault_handler_description);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_default_handler_description_13;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YgooSconditionsYdefault_handler_description,T77);
  lit_35 = YPPsym((P)"<incongruent-method-error>");
  T82 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T81 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_35),T82);
  VARSET(YgooSconditionsYLincongruent_method_errorG,T81);
  lit_36 = YPPsym((P)"incongruent-method-error-generic");
  lit_37 = YPPlist(1,YPPsym((P)"_x"));
  T83 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YgooSconditionsYLincongruent_method_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_generic_14 = YPmet(FUNCODEREF(fun_incongruent_method_error_generic_14),LITREF(lit_36),T83,ENVNUL,PNUL,sloc(80));
  T86 = BOUNDP(YgooSconditionsYincongruent_method_error_generic);
  if (T86 != YPfalse) {
    T85 = VARREF(YgooSconditionsYincongruent_method_error_generic);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_incongruent_method_error_generic_14;
  T84 = XCALL2(1,VARREF(YPdefine_method),T85,T87);
  VARSET(YgooSconditionsYincongruent_method_error_generic,T84);
  lit_38 = YPPsym((P)"incongruent-method-error-generic-setter");
  lit_39 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T88 = YPsig(LITREF(lit_39),YPPlist(2,VARREF(YLgenG),VARREF(YgooSconditionsYLincongruent_method_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_generic_setter_15 = YPmet(FUNCODEREF(fun_incongruent_method_error_generic_setter_15),LITREF(lit_38),T88,ENVNUL,PNUL,sloc(80));
  T91 = BOUNDP(YgooSconditionsYincongruent_method_error_generic_setter);
  if (T91 != YPfalse) {
    T90 = VARREF(YgooSconditionsYincongruent_method_error_generic_setter);
  } else {
    T90 = YPfalse;
  }
  T92 = fun_incongruent_method_error_generic_setter_15;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T92);
  VARSET(YgooSconditionsYincongruent_method_error_generic_setter,T89);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLincongruent_method_errorG),VARREF(YgooSconditionsYincongruent_method_error_generic),VARREF(YgooSconditionsYincongruent_method_error_generic_setter),VARREF(YLgenG),VARREF(YPprop_unbound_error));
  lit_40 = YPPsym((P)"incongruent-method-error-method");
  lit_41 = YPPlist(1,YPPsym((P)"_x"));
  T93 = YPsig(LITREF(lit_41),YPPlist(1,VARREF(YgooSconditionsYLincongruent_method_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_method_16 = YPmet(FUNCODEREF(fun_incongruent_method_error_method_16),LITREF(lit_40),T93,ENVNUL,PNUL,sloc(81));
  T96 = BOUNDP(YgooSconditionsYincongruent_method_error_method);
  if (T96 != YPfalse) {
    T95 = VARREF(YgooSconditionsYincongruent_method_error_method);
  } else {
    T95 = YPfalse;
  }
  T97 = fun_incongruent_method_error_method_16;
  T94 = XCALL2(1,VARREF(YPdefine_method),T95,T97);
  VARSET(YgooSconditionsYincongruent_method_error_method,T94);
  lit_42 = YPPsym((P)"incongruent-method-error-method-setter");
  lit_43 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T98 = YPsig(LITREF(lit_43),YPPlist(2,VARREF(YLmetG),VARREF(YgooSconditionsYLincongruent_method_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_method_setter_17 = YPmet(FUNCODEREF(fun_incongruent_method_error_method_setter_17),LITREF(lit_42),T98,ENVNUL,PNUL,sloc(81));
  T101 = BOUNDP(YgooSconditionsYincongruent_method_error_method_setter);
  if (T101 != YPfalse) {
    T100 = VARREF(YgooSconditionsYincongruent_method_error_method_setter);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_incongruent_method_error_method_setter_17;
  T99 = XCALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(YgooSconditionsYincongruent_method_error_method_setter,T99);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLincongruent_method_errorG),VARREF(YgooSconditionsYincongruent_method_error_method),VARREF(YgooSconditionsYincongruent_method_error_method_setter),VARREF(YLmetG),VARREF(YPprop_unbound_error));
  lit_44 = YPPlist(1,YPPsym((P)"c"));
  lit_45 = YPsb((P)"Method %= incongruent with generic %=.");
  T103 = YPsig(LITREF(lit_44),YPPlist(1,VARREF(YgooSconditionsYLincongruent_method_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_18 = YPmet(FUNCODEREF(fun_describe_condition_18),LITREF(lit_3),T103,ENVNUL,PNUL,sloc(83));
  T106 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T106 != YPfalse) {
    T105 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_describe_condition_18;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(YgooSconditionsYdescribe_condition,T104);
  lit_46 = YPPsym((P)"<replace-generic-restart>");
  T109 = (P)YPpair(VARREF(YgooSconditionsYLrestartG),Ynil);
  T108 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_46),T109);
  VARSET(YLreplace_generic_restartG,T108);
  lit_47 = YPPlist(1,YPPsym((P)"cond-type"));
  lit_48 = YPsb((P)"Replace the generic function with an empty, congruent one");
  T111 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLreplace_generic_restartG));
  T110 = YPsig(LITREF(lit_47),YPPlist(1,T111),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_default_handler_description_19 = YPmet(FUNCODEREF(fun_default_handler_description_19),LITREF(lit_6),T110,ENVNUL,PNUL,sloc(90));
  T114 = BOUNDP(YgooSconditionsYdefault_handler_description);
  if (T114 != YPfalse) {
    T113 = VARREF(YgooSconditionsYdefault_handler_description);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_default_handler_description_19;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YgooSconditionsYdefault_handler_description,T112);
  lit_49 = YPPsym((P)"<handler-info>");
  T117 = (P)YPpair(VARREF(YLanyG),Ynil);
  T116 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_49),T117);
  VARSET(YgooSconditionsYLhandler_infoG,T116);
  lit_50 = YPPsym((P)"describe-handler");
  lit_51 = YPPlist(2,YPPsym((P)"info"),YPPsym((P)"condition-type"));
  T118 = YPsig(LITREF(lit_51),YPPlist(2,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_describe_handler_20 = YPmet(FUNCODEREF(fun_describe_handler_20),LITREF(lit_50),T118,ENVNUL,PNUL,sloc(107));
  T121 = BOUNDP(YgooSconditionsYdescribe_handler);
  if (T121 != YPfalse) {
    T120 = VARREF(YgooSconditionsYdescribe_handler);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_describe_handler_20;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YgooSconditionsYdescribe_handler,T119);
  lit_52 = YPPsym((P)"build-condition-for-handler-interactively");
  lit_53 = YPPlist(4,YPPsym((P)"info"),YPPsym((P)"condition-type"),YPPsym((P)"in"),YPPsym((P)"out"));
  T123 = YPsig(LITREF(lit_53),YPPlist(4,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YgooSconditionsYLconditionG),Ynil);
  fun_build_condition_for_handler_interactively_21 = YPmet(FUNCODEREF(fun_build_condition_for_handler_interactively_21),LITREF(lit_52),T123,ENVNUL,PNUL,sloc(110));
  T126 = BOUNDP(YgooSconditionsYbuild_condition_for_handler_interactively);
  if (T126 != YPfalse) {
    T125 = VARREF(YgooSconditionsYbuild_condition_for_handler_interactively);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_build_condition_for_handler_interactively_21;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YgooSconditionsYbuild_condition_for_handler_interactively,T124);
  T128 = XCALL1(1,VARREF(Ynew),VARREF(YgooSconditionsYLhandler_infoG));
  VARSET(YgooSconditionsYDdefault_handler_info,T128);
  lit_54 = YPPsym((P)"<simple-handler-info>");
  T130 = (P)YPpair(VARREF(YgooSconditionsYLhandler_infoG),Ynil);
  T129 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_54),T130);
  VARSET(YLsimple_handler_infoG,T129);
  lit_55 = YPPsym((P)"handler-info-message");
  lit_56 = YPPlist(1,YPPsym((P)"_x"));
  T131 = YPsig(LITREF(lit_56),YPPlist(1,VARREF(YLsimple_handler_infoG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_info_message_22 = YPmet(FUNCODEREF(fun_handler_info_message_22),LITREF(lit_55),T131,ENVNUL,PNUL,sloc(117));
  T134 = BOUNDP(Yhandler_info_message);
  if (T134 != YPfalse) {
    T133 = VARREF(Yhandler_info_message);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_handler_info_message_22;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(Yhandler_info_message,T132);
  lit_57 = YPPsym((P)"handler-info-message-setter");
  lit_58 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T136 = YPsig(LITREF(lit_58),YPPlist(2,VARREF(YLstrG),VARREF(YLsimple_handler_infoG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_info_message_setter_23 = YPmet(FUNCODEREF(fun_handler_info_message_setter_23),LITREF(lit_57),T136,ENVNUL,PNUL,sloc(117));
  T139 = BOUNDP(YgooSconditionsYhandler_info_message_setter);
  if (T139 != YPfalse) {
    T138 = VARREF(YgooSconditionsYhandler_info_message_setter);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_handler_info_message_setter_23;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YgooSconditionsYhandler_info_message_setter,T137);
  XCALL5(1,VARREF(YPprop),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),VARREF(YgooSconditionsYhandler_info_message_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_59 = YPPsym((P)"handler-info-arguments");
  lit_60 = YPPlist(1,YPPsym((P)"_x"));
  T141 = YPsig(LITREF(lit_60),YPPlist(1,VARREF(YLsimple_handler_infoG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_info_arguments_24 = YPmet(FUNCODEREF(fun_handler_info_arguments_24),LITREF(lit_59),T141,ENVNUL,PNUL,sloc(118));
  T144 = BOUNDP(Yhandler_info_arguments);
  if (T144 != YPfalse) {
    T143 = VARREF(Yhandler_info_arguments);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_handler_info_arguments_24;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(Yhandler_info_arguments,T142);
  lit_61 = YPPsym((P)"handler-info-arguments-setter");
  lit_62 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T146 = YPsig(LITREF(lit_62),YPPlist(2,VARREF(YLlstG),VARREF(YLsimple_handler_infoG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_info_arguments_setter_25 = YPmet(FUNCODEREF(fun_handler_info_arguments_setter_25),LITREF(lit_61),T146,ENVNUL,PNUL,sloc(118));
  T149 = BOUNDP(YgooSconditionsYhandler_info_arguments_setter);
  if (T149 != YPfalse) {
    T148 = VARREF(YgooSconditionsYhandler_info_arguments_setter);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_handler_info_arguments_setter_25;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YgooSconditionsYhandler_info_arguments_setter,T147);
  lit_63 = YPPlist(1,YPPsym((P)"_x"));
  T151 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T151,ENVNUL,PNUL,sloc(118));
  T152 = fun_26;
  XCALL5(1,VARREF(YPprop),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_arguments),VARREF(YgooSconditionsYhandler_info_arguments_setter),VARREF(YLlstG),T152);
  lit_64 = YPPlist(2,YPPsym((P)"info"),YPPsym((P)"condition-type"));
  T153 = YPsig(LITREF(lit_64),YPPlist(2,VARREF(YLsimple_handler_infoG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_describe_handler_27 = YPmet(FUNCODEREF(fun_describe_handler_27),LITREF(lit_50),T153,ENVNUL,PNUL,sloc(120));
  T156 = BOUNDP(YgooSconditionsYdescribe_handler);
  if (T156 != YPfalse) {
    T155 = VARREF(YgooSconditionsYdescribe_handler);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_describe_handler_27;
  T154 = XCALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YgooSconditionsYdescribe_handler,T154);
  DYNDEFSET(YgooSconditionsYTcurrent_handlersT,Ynil);
  lit_65 = YPPsym((P)"<handler>");
  T159 = (P)YPpair(VARREF(YLanyG),Ynil);
  T158 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_65),T159);
  VARSET(YgooSconditionsYLhandlerG,T158);
  lit_66 = YPPsym((P)"handler-condition-type");
  lit_67 = YPPlist(1,YPPsym((P)"_x"));
  T160 = YPsig(LITREF(lit_67),YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_condition_type_28 = YPmet(FUNCODEREF(fun_handler_condition_type_28),LITREF(lit_66),T160,ENVNUL,PNUL,sloc(138));
  T163 = BOUNDP(YgooSconditionsYhandler_condition_type);
  if (T163 != YPfalse) {
    T162 = VARREF(YgooSconditionsYhandler_condition_type);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_handler_condition_type_28;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YgooSconditionsYhandler_condition_type,T161);
  lit_68 = YPPsym((P)"handler-condition-type-setter");
  lit_69 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T168 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T167 = YPsig(LITREF(lit_69),YPPlist(2,T168,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T166 = fun_handler_condition_type_setter_29 = YPmet(FUNCODEREF(fun_handler_condition_type_setter_29),LITREF(lit_68),T167,ENVNUL,PNUL,sloc(138));
  T172 = BOUNDP(YgooSconditionsYhandler_condition_type_setter);
  if (T172 != YPfalse) {
    T171 = VARREF(YgooSconditionsYhandler_condition_type_setter);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_handler_condition_type_setter_29;
  T170 = XCALL2(1,VARREF(YPdefine_method),T171,T173);
  T169 = VARSET(YgooSconditionsYhandler_condition_type_setter,T170);
  T165 = T169;
  return T165;
}

P YgooSconditionsY___main_1___() {
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
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206;
DEFCREGS();
loop:
  T0 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_condition_type),VARREF(YgooSconditionsYhandler_condition_type_setter),T0,VARREF(YPprop_unbound_error));
  lit_70 = YPPsym((P)"handler-info");
  lit_71 = YPPlist(1,YPPsym((P)"_x"));
  T1 = YPsig(LITREF(lit_71),YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_info_30 = YPmet(FUNCODEREF(fun_handler_info_30),LITREF(lit_70),T1,ENVNUL,PNUL,sloc(139));
  T4 = BOUNDP(YgooSconditionsYhandler_info);
  if (T4 != YPfalse) {
    T3 = VARREF(YgooSconditionsYhandler_info);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_handler_info_30;
  T2 = XCALL2(1,VARREF(YPdefine_method),T3,T5);
  VARSET(YgooSconditionsYhandler_info,T2);
  lit_72 = YPPsym((P)"handler-info-setter");
  lit_73 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T6 = YPsig(LITREF(lit_73),YPPlist(2,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_info_setter_31 = YPmet(FUNCODEREF(fun_handler_info_setter_31),LITREF(lit_72),T6,ENVNUL,PNUL,sloc(139));
  T9 = BOUNDP(YgooSconditionsYhandler_info_setter);
  if (T9 != YPfalse) {
    T8 = VARREF(YgooSconditionsYhandler_info_setter);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_handler_info_setter_31;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(YgooSconditionsYhandler_info_setter,T7);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_info),VARREF(YgooSconditionsYhandler_info_setter),VARREF(YgooSconditionsYLhandler_infoG),VARREF(YPprop_unbound_error));
  lit_74 = YPPsym((P)"handler-test");
  lit_75 = YPPlist(1,YPPsym((P)"_x"));
  T11 = YPsig(LITREF(lit_75),YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_test_32 = YPmet(FUNCODEREF(fun_handler_test_32),LITREF(lit_74),T11,ENVNUL,PNUL,sloc(140));
  T14 = BOUNDP(YgooSconditionsYhandler_test);
  if (T14 != YPfalse) {
    T13 = VARREF(YgooSconditionsYhandler_test);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_handler_test_32;
  T12 = XCALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YgooSconditionsYhandler_test,T12);
  lit_76 = YPPsym((P)"handler-test-setter");
  lit_77 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_77),YPPlist(2,VARREF(YLfunG),VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_test_setter_33 = YPmet(FUNCODEREF(fun_handler_test_setter_33),LITREF(lit_76),T16,ENVNUL,PNUL,sloc(140));
  T19 = BOUNDP(YgooSconditionsYhandler_test_setter);
  if (T19 != YPfalse) {
    T18 = VARREF(YgooSconditionsYhandler_test_setter);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_handler_test_setter_33;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YgooSconditionsYhandler_test_setter,T17);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_test),VARREF(YgooSconditionsYhandler_test_setter),VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_78 = YPPsym((P)"handler-function");
  lit_79 = YPPlist(1,YPPsym((P)"_x"));
  T21 = YPsig(LITREF(lit_79),YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_function_34 = YPmet(FUNCODEREF(fun_handler_function_34),LITREF(lit_78),T21,ENVNUL,PNUL,sloc(141));
  T24 = BOUNDP(YgooSconditionsYhandler_function);
  if (T24 != YPfalse) {
    T23 = VARREF(YgooSconditionsYhandler_function);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_handler_function_34;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YgooSconditionsYhandler_function,T22);
  lit_80 = YPPsym((P)"handler-function-setter");
  lit_81 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T26 = YPsig(LITREF(lit_81),YPPlist(2,VARREF(YLfunG),VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_function_setter_35 = YPmet(FUNCODEREF(fun_handler_function_setter_35),LITREF(lit_80),T26,ENVNUL,PNUL,sloc(141));
  T29 = BOUNDP(YgooSconditionsYhandler_function_setter);
  if (T29 != YPfalse) {
    T28 = VARREF(YgooSconditionsYhandler_function_setter);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_handler_function_setter_35;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(YgooSconditionsYhandler_function_setter,T27);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_function),VARREF(YgooSconditionsYhandler_function_setter),VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_82 = YPPsym((P)"fab-handler");
  lit_83 = YPPlist(4,YPPsym((P)"type"),YPPsym((P)"info"),YPPsym((P)"test"),YPPsym((P)"f"));
  T32 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T31 = YPsig(LITREF(lit_83),YPPlist(4,T32,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YgooSconditionsYLhandlerG),Ynil);
  YgooSconditionsYfab_handler = YPmet(FUNCODEREF(YgooSconditionsYfab_handler),LITREF(lit_82),T31,ENVNUL,PNUL,sloc(143));
  T33 = YgooSconditionsYfab_handler;
  VARSET(YgooSconditionsYfab_handler,T33);
  lit_84 = YPPsym((P)"handler-active?");
  lit_85 = YPPlist(1,YPPsym((P)"handler"));
  T34 = YPsig(LITREF(lit_85),YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSconditionsYhandler_activeQ = YPmet(FUNCODEREF(YgooSconditionsYhandler_activeQ),LITREF(lit_84),T34,ENVNUL,PNUL,sloc(151));
  T35 = YgooSconditionsYhandler_activeQ;
  VARSET(YgooSconditionsYhandler_activeQ,T35);
  lit_86 = YPPsym((P)"handler-matches?");
  lit_87 = YPPlist(2,YPPsym((P)"handler"),YPPsym((P)"condition"));
  T36 = YPsig(LITREF(lit_87),YPPlist(2,VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYLconditionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooSconditionsYhandler_matchesQ = YPmet(FUNCODEREF(YgooSconditionsYhandler_matchesQ),LITREF(lit_86),T36,ENVNUL,PNUL,sloc(154));
  T37 = YgooSconditionsYhandler_matchesQ;
  VARSET(YgooSconditionsYhandler_matchesQ,T37);
  lit_88 = YPPsym((P)"%with-monitor");
  lit_89 = YPPlist(5,YPPsym((P)"type"),YPPsym((P)"info"),YPPsym((P)"test-fun"),YPPsym((P)"user-handler"),YPPsym((P)"main-fun"));
  lit_90 = YPPsym((P)"_handler-function_");
  lit_91 = YPPlist(2,YPPsym((P)"condition"),YPPsym((P)"_next-handler_"));
  lit_92 = YPPlist(1,YPPsym((P)"_resume_"));
  lit_93 = Ynil;
  T43 = YPsig(LITREF(lit_92),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T43,ENVNUL,PNUL,sloc(163));
  T42 = YPsig(LITREF(lit_91),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Uhandler_functionU_40 = YPmet(FUNCODEREF(fun_Uhandler_functionU_40),LITREF(lit_90),T42,ENVNUL,PNUL,sloc(162));
  T41 = YPsig(LITREF(lit_93),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T41,ENVNUL,PNUL,sloc(168));
  T40 = YPsig(LITREF(lit_93),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T40,ENVNUL,PNUL,sloc(168));
  T39 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T38 = YPsig(LITREF(lit_89),YPPlist(5,T39,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YLfunG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  YPwith_monitor = YPmet(FUNCODEREF(YPwith_monitor),LITREF(lit_88),T38,ENVNUL,PNUL,sloc(158));
  T44 = YPwith_monitor;
  VARSET(YPwith_monitor,T44);
  lit_94 = YPPsym((P)"signal-handler-list");
  lit_95 = YPPlist(2,YPPsym((P)"condition"),YPPsym((P)"handlers"));
  T46 = YPsig(LITREF(lit_93),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T46,ENVNUL,PNUL,sloc(178));
  T45 = YPsig(LITREF(lit_95),YPPlist(2,VARREF(YgooSconditionsYLconditionG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSconditionsYsignal_handler_list = YPmet(FUNCODEREF(YgooSconditionsYsignal_handler_list),LITREF(lit_94),T45,ENVNUL,PNUL,sloc(171));
  T47 = YgooSconditionsYsignal_handler_list;
  VARSET(YgooSconditionsYsignal_handler_list,T47);
  lit_96 = YPPsym((P)"sig");
  lit_97 = YPPlist(2,YPPsym((P)"condition"),YPPsym((P)"args"));
  T48 = YPsig(LITREF(lit_97),YPPlist(1,VARREF(YgooSconditionsYLconditionG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sig_46 = YPmet(FUNCODEREF(fun_sig_46),LITREF(lit_96),T48,ENVNUL,PNUL,sloc(181));
  T51 = BOUNDP(YgooSconditionsYsig);
  if (T51 != YPfalse) {
    T50 = VARREF(YgooSconditionsYsig);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_sig_46;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YgooSconditionsYsig,T49);
  lit_98 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"args"));
  T53 = YPsig(LITREF(lit_98),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sig_47 = YPmet(FUNCODEREF(fun_sig_47),LITREF(lit_96),T53,ENVNUL,PNUL,sloc(184));
  T56 = BOUNDP(YgooSconditionsYsig);
  if (T56 != YPfalse) {
    T55 = VARREF(YgooSconditionsYsig);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_sig_47;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YgooSconditionsYsig,T54);
  lit_99 = YPPsym((P)"error");
  lit_100 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"args"));
  T58 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YgooSconditionsYLerrorG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_error_48 = YPmet(FUNCODEREF(fun_error_48),LITREF(lit_99),T58,ENVNUL,PNUL,sloc(191));
  T61 = BOUNDP(Yerror);
  if (T61 != YPfalse) {
    T60 = VARREF(Yerror);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_error_48;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(Yerror,T59);
  lit_101 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"args"));
  T63 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_error_49 = YPmet(FUNCODEREF(fun_error_49),LITREF(lit_99),T63,ENVNUL,PNUL,sloc(194));
  T66 = BOUNDP(Yerror);
  if (T66 != YPfalse) {
    T65 = VARREF(Yerror);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_error_49;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(Yerror,T64);
  lit_102 = YPPsym((P)"incongruent-method-error");
  lit_103 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"met"));
  T68 = YPsig(LITREF(lit_103),YPPlist(2,VARREF(YLgenG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yincongruent_method_error = YPmet(FUNCODEREF(Yincongruent_method_error),LITREF(lit_102),T68,ENVNUL,PNUL,sloc(198));
  T69 = Yincongruent_method_error;
  VARSET(Yincongruent_method_error,T69);
  lit_104 = YPPsym((P)"<call-error>");
  T71 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T70 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_104),T71);
  VARSET(YgooSconditionsYLcall_errorG,T70);
  lit_105 = YPPsym((P)"call-error-function");
  lit_106 = YPPlist(1,YPPsym((P)"_x"));
  T72 = YPsig(LITREF(lit_106),YPPlist(1,VARREF(YgooSconditionsYLcall_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_call_error_function_51 = YPmet(FUNCODEREF(fun_call_error_function_51),LITREF(lit_105),T72,ENVNUL,PNUL,sloc(204));
  T75 = BOUNDP(YgooSconditionsYcall_error_function);
  if (T75 != YPfalse) {
    T74 = VARREF(YgooSconditionsYcall_error_function);
  } else {
    T74 = YPfalse;
  }
  T76 = fun_call_error_function_51;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T76);
  VARSET(YgooSconditionsYcall_error_function,T73);
  lit_107 = YPPsym((P)"call-error-function-setter");
  lit_108 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T77 = YPsig(LITREF(lit_108),YPPlist(2,VARREF(YLanyG),VARREF(YgooSconditionsYLcall_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_call_error_function_setter_52 = YPmet(FUNCODEREF(fun_call_error_function_setter_52),LITREF(lit_107),T77,ENVNUL,PNUL,sloc(204));
  T80 = BOUNDP(YgooSconditionsYcall_error_function_setter);
  if (T80 != YPfalse) {
    T79 = VARREF(YgooSconditionsYcall_error_function_setter);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_call_error_function_setter_52;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YgooSconditionsYcall_error_function_setter,T78);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLcall_errorG),VARREF(YgooSconditionsYcall_error_function),VARREF(YgooSconditionsYcall_error_function_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_109 = YPPsym((P)"call-error-arguments");
  lit_110 = YPPlist(1,YPPsym((P)"_x"));
  T82 = YPsig(LITREF(lit_110),YPPlist(1,VARREF(YgooSconditionsYLcall_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_call_error_arguments_53 = YPmet(FUNCODEREF(fun_call_error_arguments_53),LITREF(lit_109),T82,ENVNUL,PNUL,sloc(205));
  T85 = BOUNDP(YgooSconditionsYcall_error_arguments);
  if (T85 != YPfalse) {
    T84 = VARREF(YgooSconditionsYcall_error_arguments);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_call_error_arguments_53;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YgooSconditionsYcall_error_arguments,T83);
  lit_111 = YPPsym((P)"call-error-arguments-setter");
  lit_112 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T87 = YPsig(LITREF(lit_112),YPPlist(2,VARREF(YLlstG),VARREF(YgooSconditionsYLcall_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_call_error_arguments_setter_54 = YPmet(FUNCODEREF(fun_call_error_arguments_setter_54),LITREF(lit_111),T87,ENVNUL,PNUL,sloc(205));
  T90 = BOUNDP(YgooSconditionsYcall_error_arguments_setter);
  if (T90 != YPfalse) {
    T89 = VARREF(YgooSconditionsYcall_error_arguments_setter);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_call_error_arguments_setter_54;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YgooSconditionsYcall_error_arguments_setter,T88);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLcall_errorG),VARREF(YgooSconditionsYcall_error_arguments),VARREF(YgooSconditionsYcall_error_arguments_setter),VARREF(YLlstG),VARREF(YPprop_unbound_error));
  lit_113 = YPPsym((P)"<arity-error>");
  T93 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T92 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_113),T93);
  VARSET(YgooSconditionsYLarity_errorG,T92);
  lit_114 = YPPlist(1,YPPsym((P)"c"));
  lit_115 = YPsb((P)"Function %= called with wrong number arguments %=.");
  T94 = YPsig(LITREF(lit_114),YPPlist(1,VARREF(YgooSconditionsYLarity_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_55 = YPmet(FUNCODEREF(fun_describe_condition_55),LITREF(lit_3),T94,ENVNUL,PNUL,sloc(209));
  T97 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T97 != YPfalse) {
    T96 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_describe_condition_55;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YgooSconditionsYdescribe_condition,T95);
  lit_116 = YPPsym((P)"arity-error");
  lit_117 = YPPlist(2,YPPsym((P)"fun"),YPPsym((P)"args"));
  T99 = YPsig(LITREF(lit_117),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yarity_error = YPmet(FUNCODEREF(Yarity_error),LITREF(lit_116),T99,ENVNUL,PNUL,sloc(213));
  T100 = Yarity_error;
  VARSET(Yarity_error,T100);
  lit_118 = YPPsym((P)"<narity-error>");
  T102 = (P)YPpair(VARREF(YgooSconditionsYLarity_errorG),Ynil);
  T101 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_118),T102);
  VARSET(YgooSconditionsYLnarity_errorG,T101);
  lit_119 = YPPsym((P)"narity-error");
  lit_120 = YPPlist(2,YPPsym((P)"fun"),YPPsym((P)"args"));
  T103 = YPsig(LITREF(lit_120),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Ynarity_error = YPmet(FUNCODEREF(Ynarity_error),LITREF(lit_119),T103,ENVNUL,PNUL,sloc(219));
  T104 = Ynarity_error;
  VARSET(Ynarity_error,T104);
  lit_121 = YPPlist(1,YPPsym((P)"c"));
  lit_122 = YPsb((P)"Nary function %= called with too few arguments %=.");
  T105 = YPsig(LITREF(lit_121),YPPlist(1,VARREF(YgooSconditionsYLnarity_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_58 = YPmet(FUNCODEREF(fun_describe_condition_58),LITREF(lit_3),T105,ENVNUL,PNUL,sloc(223));
  T108 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T108 != YPfalse) {
    T107 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_describe_condition_58;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YgooSconditionsYdescribe_condition,T106);
  lit_123 = YPPsym((P)"<type-error>");
  T111 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T110 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_123),T111);
  VARSET(YgooSconditionsYLtype_errorG,T110);
  lit_124 = YPPsym((P)"type-error-value");
  lit_125 = YPPlist(1,YPPsym((P)"_x"));
  T112 = YPsig(LITREF(lit_125),YPPlist(1,VARREF(YgooSconditionsYLtype_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_type_error_value_59 = YPmet(FUNCODEREF(fun_type_error_value_59),LITREF(lit_124),T112,ENVNUL,PNUL,sloc(228));
  T115 = BOUNDP(YgooSconditionsYtype_error_value);
  if (T115 != YPfalse) {
    T114 = VARREF(YgooSconditionsYtype_error_value);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_type_error_value_59;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YgooSconditionsYtype_error_value,T113);
  lit_126 = YPPsym((P)"type-error-value-setter");
  lit_127 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T117 = YPsig(LITREF(lit_127),YPPlist(2,VARREF(YLanyG),VARREF(YgooSconditionsYLtype_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_type_error_value_setter_60 = YPmet(FUNCODEREF(fun_type_error_value_setter_60),LITREF(lit_126),T117,ENVNUL,PNUL,sloc(228));
  T120 = BOUNDP(YgooSconditionsYtype_error_value_setter);
  if (T120 != YPfalse) {
    T119 = VARREF(YgooSconditionsYtype_error_value_setter);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_type_error_value_setter_60;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YgooSconditionsYtype_error_value_setter,T118);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLtype_errorG),VARREF(YgooSconditionsYtype_error_value),VARREF(YgooSconditionsYtype_error_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_128 = YPPsym((P)"type-error-type");
  lit_129 = YPPlist(1,YPPsym((P)"_x"));
  T122 = YPsig(LITREF(lit_129),YPPlist(1,VARREF(YgooSconditionsYLtype_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_type_error_type_61 = YPmet(FUNCODEREF(fun_type_error_type_61),LITREF(lit_128),T122,ENVNUL,PNUL,sloc(229));
  T125 = BOUNDP(YgooSconditionsYtype_error_type);
  if (T125 != YPfalse) {
    T124 = VARREF(YgooSconditionsYtype_error_type);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_type_error_type_61;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YgooSconditionsYtype_error_type,T123);
  lit_130 = YPPsym((P)"type-error-type-setter");
  lit_131 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T127 = YPsig(LITREF(lit_131),YPPlist(2,VARREF(YLtypeG),VARREF(YgooSconditionsYLtype_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_type_error_type_setter_62 = YPmet(FUNCODEREF(fun_type_error_type_setter_62),LITREF(lit_130),T127,ENVNUL,PNUL,sloc(229));
  T130 = BOUNDP(YgooSconditionsYtype_error_type_setter);
  if (T130 != YPfalse) {
    T129 = VARREF(YgooSconditionsYtype_error_type_setter);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_type_error_type_setter_62;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YgooSconditionsYtype_error_type_setter,T128);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLtype_errorG),VARREF(YgooSconditionsYtype_error_type),VARREF(YgooSconditionsYtype_error_type_setter),VARREF(YLtypeG),VARREF(YPprop_unbound_error));
  lit_132 = YPPsym((P)"type-error");
  lit_133 = YPPlist(2,YPPsym((P)"arg"),YPPsym((P)"type"));
  T132 = YPsig(LITREF(lit_133),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Ytype_error = YPmet(FUNCODEREF(Ytype_error),LITREF(lit_132),T132,ENVNUL,PNUL,sloc(231));
  T133 = Ytype_error;
  VARSET(Ytype_error,T133);
  lit_134 = YPPlist(1,YPPsym((P)"c"));
  lit_135 = YPsb((P)"Type check failure on %= expected %t.");
  T134 = YPsig(LITREF(lit_134),YPPlist(1,VARREF(YgooSconditionsYLtype_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_64 = YPmet(FUNCODEREF(fun_describe_condition_64),LITREF(lit_3),T134,ENVNUL,PNUL,sloc(234));
  T137 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T137 != YPfalse) {
    T136 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_describe_condition_64;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YgooSconditionsYdescribe_condition,T135);
  lit_136 = YPPsym((P)"<unknown-function-error>");
  T141 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T140 = (P)YPpair(VARREF(YgooSconditionsYLtype_errorG),T141);
  T139 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_136),T140);
  VARSET(YgooSconditionsYLunknown_function_errorG,T139);
  lit_137 = YPPsym((P)"unknown-function-error");
  lit_138 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"args"));
  T142 = YPsig(LITREF(lit_138),YPPlist(2,VARREF(YLanyG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yunknown_function_error = YPmet(FUNCODEREF(Yunknown_function_error),LITREF(lit_137),T142,ENVNUL,PNUL,sloc(240));
  T143 = Yunknown_function_error;
  VARSET(Yunknown_function_error,T143);
  lit_139 = YPPlist(1,YPPsym((P)"c"));
  lit_140 = YPsb((P)"Unknown function %= called on %=.");
  T144 = YPsig(LITREF(lit_139),YPPlist(1,VARREF(YgooSconditionsYLunknown_function_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_66 = YPmet(FUNCODEREF(fun_describe_condition_66),LITREF(lit_3),T144,ENVNUL,PNUL,sloc(245));
  T147 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T147 != YPfalse) {
    T146 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_describe_condition_66;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YgooSconditionsYdescribe_condition,T145);
  lit_141 = YPPsym((P)"<argument-type-error>");
  T151 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T150 = (P)YPpair(VARREF(YgooSconditionsYLtype_errorG),T151);
  T149 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_141),T150);
  VARSET(YgooSconditionsYLargument_type_errorG,T149);
  lit_142 = YPPsym((P)"argument-type-error");
  lit_143 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"val"),YPPsym((P)"type"),YPPsym((P)"args"));
  T152 = YPsig(LITREF(lit_143),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLseqG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  Yargument_type_error = YPmet(FUNCODEREF(Yargument_type_error),LITREF(lit_142),T152,ENVNUL,PNUL,sloc(251));
  T153 = Yargument_type_error;
  VARSET(Yargument_type_error,T153);
  lit_144 = YPPlist(1,YPPsym((P)"c"));
  lit_145 = YPsb((P)"During call of %= on %= ");
  T154 = YPsig(LITREF(lit_144),YPPlist(1,VARREF(YgooSconditionsYLargument_type_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_68 = YPmet(FUNCODEREF(fun_describe_condition_68),LITREF(lit_3),T154,ENVNUL,PNUL,sloc(256));
  T157 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T157 != YPfalse) {
    T156 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T156 = YPfalse;
  }
  T158 = fun_describe_condition_68;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T158);
  VARSET(YgooSconditionsYdescribe_condition,T155);
  lit_146 = YPPsym((P)"<return-type-error>");
  T161 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T160 = (P)YPpair(VARREF(YgooSconditionsYLtype_errorG),T161);
  T159 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_146),T160);
  VARSET(YgooSconditionsYLreturn_type_errorG,T159);
  lit_147 = YPPsym((P)"return-type-error");
  lit_148 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"val"),YPPsym((P)"type"),YPPsym((P)"args"));
  T162 = YPsig(LITREF(lit_148),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLseqG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  Yreturn_type_error = YPmet(FUNCODEREF(Yreturn_type_error),LITREF(lit_147),T162,ENVNUL,PNUL,sloc(263));
  T163 = Yreturn_type_error;
  VARSET(Yreturn_type_error,T163);
  lit_149 = YPPlist(1,YPPsym((P)"c"));
  lit_150 = YPsb((P)"During return of call of %= on %= ");
  T164 = YPsig(LITREF(lit_149),YPPlist(1,VARREF(YgooSconditionsYLreturn_type_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_70 = YPmet(FUNCODEREF(fun_describe_condition_70),LITREF(lit_3),T164,ENVNUL,PNUL,sloc(268));
  T167 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T167 != YPfalse) {
    T166 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T166 = YPfalse;
  }
  T168 = fun_describe_condition_70;
  T165 = XCALL2(1,VARREF(YPdefine_method),T166,T168);
  VARSET(YgooSconditionsYdescribe_condition,T165);
  lit_151 = YPPsym((P)"<ambiguous-method-error>");
  T170 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T169 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_151),T170);
  VARSET(YgooSconditionsYLambiguous_method_errorG,T169);
  lit_152 = YPPsym((P)"ambiguous-method-error");
  lit_153 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"args"));
  T171 = YPsig(LITREF(lit_153),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yambiguous_method_error = YPmet(FUNCODEREF(Yambiguous_method_error),LITREF(lit_152),T171,ENVNUL,PNUL,sloc(275));
  T172 = Yambiguous_method_error;
  VARSET(Yambiguous_method_error,T172);
  lit_154 = YPPlist(1,YPPsym((P)"c"));
  lit_155 = YPsb((P)"Ambiguous methods on %= when called with %=.");
  T173 = YPsig(LITREF(lit_154),YPPlist(1,VARREF(YgooSconditionsYLambiguous_method_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_72 = YPmet(FUNCODEREF(fun_describe_condition_72),LITREF(lit_3),T173,ENVNUL,PNUL,sloc(279));
  T176 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T176 != YPfalse) {
    T175 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_describe_condition_72;
  T174 = XCALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(YgooSconditionsYdescribe_condition,T174);
  lit_156 = YPPsym((P)"<no-applicable-methods-error>");
  T179 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T178 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_156),T179);
  VARSET(YgooSconditionsYLno_applicable_methods_errorG,T178);
  lit_157 = YPPsym((P)"no-applicable-methods-error");
  lit_158 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"args"));
  T180 = YPsig(LITREF(lit_158),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yno_applicable_methods_error = YPmet(FUNCODEREF(Yno_applicable_methods_error),LITREF(lit_157),T180,ENVNUL,PNUL,sloc(285));
  T181 = Yno_applicable_methods_error;
  VARSET(Yno_applicable_methods_error,T181);
  lit_159 = YPPlist(1,YPPsym((P)"c"));
  lit_160 = YPsb((P)"No applicable methods on %= when called with %=.");
  T182 = YPsig(LITREF(lit_159),YPPlist(1,VARREF(YgooSconditionsYLno_applicable_methods_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_74 = YPmet(FUNCODEREF(fun_describe_condition_74),LITREF(lit_3),T182,ENVNUL,PNUL,sloc(290));
  T185 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T185 != YPfalse) {
    T184 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_describe_condition_74;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YgooSconditionsYdescribe_condition,T183);
  lit_161 = YPPsym((P)"<no-next-methods-error>");
  T188 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T187 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_161),T188);
  VARSET(YgooSconditionsYLno_next_methods_errorG,T187);
  lit_162 = YPPsym((P)"no-next-methods-error");
  lit_163 = YPPlist(2,YPPsym((P)"met"),YPPsym((P)"args"));
  T189 = YPsig(LITREF(lit_163),YPPlist(2,VARREF(YLanyG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yno_next_methods_error = YPmet(FUNCODEREF(Yno_next_methods_error),LITREF(lit_162),T189,ENVNUL,PNUL,sloc(296));
  T190 = Yno_next_methods_error;
  VARSET(Yno_next_methods_error,T190);
  lit_164 = YPPlist(1,YPPsym((P)"c"));
  lit_165 = YPsb((P)"No next-methods on %= when called with %=.");
  T191 = YPsig(LITREF(lit_164),YPPlist(1,VARREF(YgooSconditionsYLno_next_methods_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_76 = YPmet(FUNCODEREF(fun_describe_condition_76),LITREF(lit_3),T191,ENVNUL,PNUL,sloc(300));
  T194 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T194 != YPfalse) {
    T193 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_describe_condition_76;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(YgooSconditionsYdescribe_condition,T192);
  lit_166 = YPPsym((P)"<cpl-error>");
  T197 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T196 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_166),T197);
  VARSET(YgooSconditionsYLcpl_errorG,T196);
  lit_167 = YPPsym((P)"cpl-error");
  lit_168 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T198 = YPsig(LITREF(lit_168),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Ycpl_error = YPmet(FUNCODEREF(Ycpl_error),LITREF(lit_167),T198,ENVNUL,PNUL,sloc(306));
  T199 = Ycpl_error;
  VARSET(Ycpl_error,T199);
  lit_169 = YPPsym((P)"<compiler-error>");
  T201 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T200 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_169),T201);
  VARSET(YgooSconditionsYLcompiler_errorG,T200);
  lit_170 = YPPsym((P)"<syntax-error>");
  T206 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T205 = (P)YPpair(VARREF(YgooSconditionsYLcompiler_errorG),T206);
  T204 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_170),T205);
  T203 = VARSET(YgooSconditionsYLsyntax_errorG,T204);
  T202 = T203;
  return T202;
}

P YgooSconditionsY___main_2___() {
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
  P T192,T193,T194,T195,T196,T197,T198,T199,T200;
DEFCREGS();
loop:
  lit_171 = YPPsym((P)"syntax-error");
  lit_172 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T0 = YPsig(LITREF(lit_172),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Ysyntax_error = YPmet(FUNCODEREF(Ysyntax_error),LITREF(lit_171),T0,ENVNUL,PNUL,sloc(313));
  T1 = Ysyntax_error;
  VARSET(Ysyntax_error,T1);
  lit_173 = YPPsym((P)"<macro-error>");
  T3 = (P)YPpair(VARREF(YgooSconditionsYLsyntax_errorG),Ynil);
  T2 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_173),T3);
  VARSET(YgooSconditionsYLmacro_errorG,T2);
  lit_174 = YPPsym((P)"macro-error-name");
  lit_175 = YPPlist(1,YPPsym((P)"_x"));
  T4 = YPsig(LITREF(lit_175),YPPlist(1,VARREF(YgooSconditionsYLmacro_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_macro_error_name_79 = YPmet(FUNCODEREF(fun_macro_error_name_79),LITREF(lit_174),T4,ENVNUL,PNUL,sloc(318));
  T7 = BOUNDP(YgooSconditionsYmacro_error_name);
  if (T7 != YPfalse) {
    T6 = VARREF(YgooSconditionsYmacro_error_name);
  } else {
    T6 = YPfalse;
  }
  T8 = fun_macro_error_name_79;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T8);
  VARSET(YgooSconditionsYmacro_error_name,T5);
  lit_176 = YPPsym((P)"macro-error-name-setter");
  lit_177 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T9 = YPsig(LITREF(lit_177),YPPlist(2,VARREF(YLsymG),VARREF(YgooSconditionsYLmacro_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_macro_error_name_setter_80 = YPmet(FUNCODEREF(fun_macro_error_name_setter_80),LITREF(lit_176),T9,ENVNUL,PNUL,sloc(318));
  T12 = BOUNDP(YgooSconditionsYmacro_error_name_setter);
  if (T12 != YPfalse) {
    T11 = VARREF(YgooSconditionsYmacro_error_name_setter);
  } else {
    T11 = YPfalse;
  }
  T13 = fun_macro_error_name_setter_80;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T13);
  VARSET(YgooSconditionsYmacro_error_name_setter,T10);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLmacro_errorG),VARREF(YgooSconditionsYmacro_error_name),VARREF(YgooSconditionsYmacro_error_name_setter),VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_178 = YPPsym((P)"macro-error-arguments");
  lit_179 = YPPlist(1,YPPsym((P)"_x"));
  T14 = YPsig(LITREF(lit_179),YPPlist(1,VARREF(YgooSconditionsYLmacro_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_macro_error_arguments_81 = YPmet(FUNCODEREF(fun_macro_error_arguments_81),LITREF(lit_178),T14,ENVNUL,PNUL,sloc(319));
  T17 = BOUNDP(YgooSconditionsYmacro_error_arguments);
  if (T17 != YPfalse) {
    T16 = VARREF(YgooSconditionsYmacro_error_arguments);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_macro_error_arguments_81;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(YgooSconditionsYmacro_error_arguments,T15);
  lit_180 = YPPsym((P)"macro-error-arguments-setter");
  lit_181 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T19 = YPsig(LITREF(lit_181),YPPlist(2,VARREF(YLlstG),VARREF(YgooSconditionsYLmacro_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_macro_error_arguments_setter_82 = YPmet(FUNCODEREF(fun_macro_error_arguments_setter_82),LITREF(lit_180),T19,ENVNUL,PNUL,sloc(319));
  T22 = BOUNDP(YgooSconditionsYmacro_error_arguments_setter);
  if (T22 != YPfalse) {
    T21 = VARREF(YgooSconditionsYmacro_error_arguments_setter);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_macro_error_arguments_setter_82;
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YgooSconditionsYmacro_error_arguments_setter,T20);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLmacro_errorG),VARREF(YgooSconditionsYmacro_error_arguments),VARREF(YgooSconditionsYmacro_error_arguments_setter),VARREF(YLlstG),VARREF(YPprop_unbound_error));
  lit_182 = YPPsym((P)"macro-error");
  lit_183 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"args"));
  T24 = YPsig(LITREF(lit_183),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSmacrosYmacro_error = YPmet(FUNCODEREF(YgooSmacrosYmacro_error),LITREF(lit_182),T24,ENVNUL,PNUL,sloc(321));
  T25 = YgooSmacrosYmacro_error;
  VARSET(YgooSmacrosYmacro_error,T25);
  lit_184 = YPPlist(1,YPPsym((P)"c"));
  lit_185 = YPsb((P)"Macro expansion failure for %s when called with %=.");
  T26 = YPsig(LITREF(lit_184),YPPlist(1,VARREF(YgooSconditionsYLmacro_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_84 = YPmet(FUNCODEREF(fun_describe_condition_84),LITREF(lit_3),T26,ENVNUL,PNUL,sloc(324));
  T29 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T29 != YPfalse) {
    T28 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_describe_condition_84;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(YgooSconditionsYdescribe_condition,T27);
  lit_186 = YPPsym((P)"<stack-overflow>");
  T32 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T31 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_186),T32);
  VARSET(YgooSconditionsYLstack_overflowG,T31);
  lit_187 = YPPsym((P)"stack-overflow-error");
  T33 = YPsig(LITREF(lit_93),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ystack_overflow_error = YPmet(FUNCODEREF(Ystack_overflow_error),LITREF(lit_187),T33,ENVNUL,PNUL,sloc(330));
  T34 = Ystack_overflow_error;
  VARSET(Ystack_overflow_error,T34);
  lit_188 = YPPlist(1,YPPsym((P)"c"));
  lit_189 = YPsb((P)"Stack overflow.");
  T35 = YPsig(LITREF(lit_188),YPPlist(1,VARREF(YgooSconditionsYLstack_overflowG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_86 = YPmet(FUNCODEREF(fun_describe_condition_86),LITREF(lit_3),T35,ENVNUL,PNUL,sloc(333));
  T38 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_describe_condition_86;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YgooSconditionsYdescribe_condition,T36);
  lit_190 = YPPsym((P)"<internal-error>");
  T41 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T40 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_190),T41);
  VARSET(YgooSconditionsYLinternal_errorG,T40);
  lit_191 = YPPsym((P)"internal-error");
  lit_192 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T42 = YPsig(LITREF(lit_192),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Yinternal_error = YPmet(FUNCODEREF(Yinternal_error),LITREF(lit_191),T42,ENVNUL,PNUL,sloc(337));
  T43 = Yinternal_error;
  VARSET(Yinternal_error,T43);
  lit_193 = YPPsym((P)"<assert-error>");
  T45 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T44 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_193),T45);
  VARSET(YgooSconditionsYLassert_errorG,T44);
  lit_194 = YPPsym((P)"assert-error");
  lit_195 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T46 = YPsig(LITREF(lit_195),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Yassert_error = YPmet(FUNCODEREF(Yassert_error),LITREF(lit_194),T46,ENVNUL,PNUL,sloc(343));
  T47 = Yassert_error;
  VARSET(Yassert_error,T47);
  lit_196 = YPPlist(1,YPPsym((P)"c"));
  lit_197 = YPsb((P)"Assert failure ");
  T48 = YPsig(LITREF(lit_196),YPPlist(1,VARREF(YgooSconditionsYLassert_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_89 = YPmet(FUNCODEREF(fun_describe_condition_89),LITREF(lit_3),T48,ENVNUL,PNUL,sloc(347));
  T51 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T51 != YPfalse) {
    T50 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_describe_condition_89;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YgooSconditionsYdescribe_condition,T49);
  lit_198 = YPPsym((P)"<range-error>");
  T54 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T53 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_198),T54);
  VARSET(YgooSconditionsYLrange_errorG,T53);
  lit_199 = YPPsym((P)"range-error-collection");
  lit_200 = YPPlist(1,YPPsym((P)"_x"));
  T55 = YPsig(LITREF(lit_200),YPPlist(1,VARREF(YgooSconditionsYLrange_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_error_collection_90 = YPmet(FUNCODEREF(fun_range_error_collection_90),LITREF(lit_199),T55,ENVNUL,PNUL,sloc(351));
  T58 = BOUNDP(YgooSconditionsYrange_error_collection);
  if (T58 != YPfalse) {
    T57 = VARREF(YgooSconditionsYrange_error_collection);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_range_error_collection_90;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YgooSconditionsYrange_error_collection,T56);
  lit_201 = YPPsym((P)"range-error-collection-setter");
  lit_202 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T60 = YPsig(LITREF(lit_202),YPPlist(2,VARREF(YLcolG),VARREF(YgooSconditionsYLrange_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_error_collection_setter_91 = YPmet(FUNCODEREF(fun_range_error_collection_setter_91),LITREF(lit_201),T60,ENVNUL,PNUL,sloc(351));
  T63 = BOUNDP(YgooSconditionsYrange_error_collection_setter);
  if (T63 != YPfalse) {
    T62 = VARREF(YgooSconditionsYrange_error_collection_setter);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_range_error_collection_setter_91;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YgooSconditionsYrange_error_collection_setter,T61);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLrange_errorG),VARREF(YgooSconditionsYrange_error_collection),VARREF(YgooSconditionsYrange_error_collection_setter),VARREF(YLcolG),VARREF(YPprop_unbound_error));
  lit_203 = YPPsym((P)"range-error-key");
  lit_204 = YPPlist(1,YPPsym((P)"_x"));
  T65 = YPsig(LITREF(lit_204),YPPlist(1,VARREF(YgooSconditionsYLrange_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_error_key_92 = YPmet(FUNCODEREF(fun_range_error_key_92),LITREF(lit_203),T65,ENVNUL,PNUL,sloc(352));
  T68 = BOUNDP(YgooSconditionsYrange_error_key);
  if (T68 != YPfalse) {
    T67 = VARREF(YgooSconditionsYrange_error_key);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_range_error_key_92;
  T66 = XCALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YgooSconditionsYrange_error_key,T66);
  lit_205 = YPPsym((P)"range-error-key-setter");
  lit_206 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T70 = YPsig(LITREF(lit_206),YPPlist(2,VARREF(YLanyG),VARREF(YgooSconditionsYLrange_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_error_key_setter_93 = YPmet(FUNCODEREF(fun_range_error_key_setter_93),LITREF(lit_205),T70,ENVNUL,PNUL,sloc(352));
  T73 = BOUNDP(YgooSconditionsYrange_error_key_setter);
  if (T73 != YPfalse) {
    T72 = VARREF(YgooSconditionsYrange_error_key_setter);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_range_error_key_setter_93;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YgooSconditionsYrange_error_key_setter,T71);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLrange_errorG),VARREF(YgooSconditionsYrange_error_key),VARREF(YgooSconditionsYrange_error_key_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_207 = YPPsym((P)"range-error");
  lit_208 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"k"));
  T75 = YPsig(LITREF(lit_208),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_error_94 = YPmet(FUNCODEREF(fun_range_error_94),LITREF(lit_207),T75,ENVNUL,PNUL,sloc(354));
  T78 = BOUNDP(Yrange_error);
  if (T78 != YPfalse) {
    T77 = VARREF(Yrange_error);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_range_error_94;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(Yrange_error,T76);
  lit_209 = YPPlist(1,YPPsym((P)"c"));
  lit_210 = YPsb((P)"Nonexistent key %= in %=");
  T80 = YPsig(LITREF(lit_209),YPPlist(1,VARREF(YgooSconditionsYLrange_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_95 = YPmet(FUNCODEREF(fun_describe_condition_95),LITREF(lit_3),T80,ENVNUL,PNUL,sloc(357));
  T83 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T83 != YPfalse) {
    T82 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_describe_condition_95;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YgooSconditionsYdescribe_condition,T81);
  lit_211 = YPPsym((P)"<io-error>");
  T86 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T85 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_211),T86);
  VARSET(YgooSconditionsYLio_errorG,T85);
  lit_212 = YPPsym((P)"<file-opening-error>");
  T88 = (P)YPpair(VARREF(YgooSconditionsYLio_errorG),Ynil);
  T87 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_212),T88);
  VARSET(YgooSconditionsYLfile_opening_errorG,T87);
  lit_213 = YPPsym((P)"file-opening-error-filename");
  lit_214 = YPPlist(1,YPPsym((P)"_x"));
  T89 = YPsig(LITREF(lit_214),YPPlist(1,VARREF(YgooSconditionsYLfile_opening_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_file_opening_error_filename_96 = YPmet(FUNCODEREF(fun_file_opening_error_filename_96),LITREF(lit_213),T89,ENVNUL,PNUL,sloc(364));
  T92 = BOUNDP(YgooSconditionsYfile_opening_error_filename);
  if (T92 != YPfalse) {
    T91 = VARREF(YgooSconditionsYfile_opening_error_filename);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_file_opening_error_filename_96;
  T90 = XCALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YgooSconditionsYfile_opening_error_filename,T90);
  lit_215 = YPPsym((P)"file-opening-error-filename-setter");
  lit_216 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T94 = YPsig(LITREF(lit_216),YPPlist(2,VARREF(YLstrG),VARREF(YgooSconditionsYLfile_opening_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_file_opening_error_filename_setter_97 = YPmet(FUNCODEREF(fun_file_opening_error_filename_setter_97),LITREF(lit_215),T94,ENVNUL,PNUL,sloc(364));
  T97 = BOUNDP(YgooSconditionsYfile_opening_error_filename_setter);
  if (T97 != YPfalse) {
    T96 = VARREF(YgooSconditionsYfile_opening_error_filename_setter);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_file_opening_error_filename_setter_97;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YgooSconditionsYfile_opening_error_filename_setter,T95);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLfile_opening_errorG),VARREF(YgooSconditionsYfile_opening_error_filename),VARREF(YgooSconditionsYfile_opening_error_filename_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_217 = YPPsym((P)"file-opening-error");
  lit_218 = YPPlist(1,YPPsym((P)"filename"));
  T99 = YPsig(LITREF(lit_218),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_file_opening_error_98 = YPmet(FUNCODEREF(fun_file_opening_error_98),LITREF(lit_217),T99,ENVNUL,PNUL,sloc(366));
  T102 = BOUNDP(Yfile_opening_error);
  if (T102 != YPfalse) {
    T101 = VARREF(Yfile_opening_error);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_file_opening_error_98;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(Yfile_opening_error,T100);
  lit_219 = YPPlist(1,YPPsym((P)"c"));
  lit_220 = YPsb((P)"Failed to open %s.");
  T104 = YPsig(LITREF(lit_219),YPPlist(1,VARREF(YgooSconditionsYLfile_opening_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_99 = YPmet(FUNCODEREF(fun_describe_condition_99),LITREF(lit_3),T104,ENVNUL,PNUL,sloc(369));
  T107 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T107 != YPfalse) {
    T106 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_describe_condition_99;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YgooSconditionsYdescribe_condition,T105);
  lit_221 = YPPsym((P)"<unbound-error>");
  T110 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T109 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_221),T110);
  VARSET(YgooSconditionsYLunbound_errorG,T109);
  lit_222 = YPPsym((P)"<unbound-variable-error>");
  T112 = (P)YPpair(VARREF(YgooSconditionsYLunbound_errorG),Ynil);
  T111 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_222),T112);
  VARSET(YgooSconditionsYLunbound_variable_errorG,T111);
  lit_223 = YPPsym((P)"unbound-variable-error-variable");
  lit_224 = YPPlist(1,YPPsym((P)"_x"));
  T113 = YPsig(LITREF(lit_224),YPPlist(1,VARREF(YgooSconditionsYLunbound_variable_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unbound_variable_error_variable_100 = YPmet(FUNCODEREF(fun_unbound_variable_error_variable_100),LITREF(lit_223),T113,ENVNUL,PNUL,sloc(375));
  T116 = BOUNDP(YgooSconditionsYunbound_variable_error_variable);
  if (T116 != YPfalse) {
    T115 = VARREF(YgooSconditionsYunbound_variable_error_variable);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_unbound_variable_error_variable_100;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YgooSconditionsYunbound_variable_error_variable,T114);
  lit_225 = YPPsym((P)"unbound-variable-error-variable-setter");
  lit_226 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T118 = YPsig(LITREF(lit_226),YPPlist(2,VARREF(YLanyG),VARREF(YgooSconditionsYLunbound_variable_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unbound_variable_error_variable_setter_101 = YPmet(FUNCODEREF(fun_unbound_variable_error_variable_setter_101),LITREF(lit_225),T118,ENVNUL,PNUL,sloc(375));
  T121 = BOUNDP(YgooSconditionsYunbound_variable_error_variable_setter);
  if (T121 != YPfalse) {
    T120 = VARREF(YgooSconditionsYunbound_variable_error_variable_setter);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_unbound_variable_error_variable_setter_101;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YgooSconditionsYunbound_variable_error_variable_setter,T119);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLunbound_variable_errorG),VARREF(YgooSconditionsYunbound_variable_error_variable),VARREF(YgooSconditionsYunbound_variable_error_variable_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_227 = YPPlist(1,YPPsym((P)"c"));
  lit_228 = YPsb((P)"Unbound variable %s.");
  T123 = YPsig(LITREF(lit_227),YPPlist(1,VARREF(YgooSconditionsYLunbound_variable_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_102 = YPmet(FUNCODEREF(fun_describe_condition_102),LITREF(lit_3),T123,ENVNUL,PNUL,sloc(377));
  T126 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T126 != YPfalse) {
    T125 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_describe_condition_102;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YgooSconditionsYdescribe_condition,T124);
  lit_229 = YPPsym((P)"<property-error>");
  T129 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T128 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_229),T129);
  VARSET(YgooSconditionsYLproperty_errorG,T128);
  lit_230 = YPPsym((P)"property-error-owner");
  lit_231 = YPPlist(1,YPPsym((P)"_x"));
  T130 = YPsig(LITREF(lit_231),YPPlist(1,VARREF(YgooSconditionsYLproperty_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_property_error_owner_103 = YPmet(FUNCODEREF(fun_property_error_owner_103),LITREF(lit_230),T130,ENVNUL,PNUL,sloc(381));
  T133 = BOUNDP(YgooSconditionsYproperty_error_owner);
  if (T133 != YPfalse) {
    T132 = VARREF(YgooSconditionsYproperty_error_owner);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_property_error_owner_103;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YgooSconditionsYproperty_error_owner,T131);
  lit_232 = YPPsym((P)"property-error-owner-setter");
  lit_233 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T135 = YPsig(LITREF(lit_233),YPPlist(2,VARREF(YLanyG),VARREF(YgooSconditionsYLproperty_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_property_error_owner_setter_104 = YPmet(FUNCODEREF(fun_property_error_owner_setter_104),LITREF(lit_232),T135,ENVNUL,PNUL,sloc(381));
  T138 = BOUNDP(YgooSconditionsYproperty_error_owner_setter);
  if (T138 != YPfalse) {
    T137 = VARREF(YgooSconditionsYproperty_error_owner_setter);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_property_error_owner_setter_104;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YgooSconditionsYproperty_error_owner_setter,T136);
  lit_234 = YPPlist(1,YPPsym((P)"_x"));
  T140 = YPsig(LITREF(lit_234),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T140,ENVNUL,PNUL,sloc(381));
  T141 = fun_105;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLproperty_errorG),VARREF(YgooSconditionsYproperty_error_owner),VARREF(YgooSconditionsYproperty_error_owner_setter),VARREF(YLanyG),T141);
  lit_235 = YPPsym((P)"property-error-generic");
  lit_236 = YPPlist(1,YPPsym((P)"_x"));
  T142 = YPsig(LITREF(lit_236),YPPlist(1,VARREF(YgooSconditionsYLproperty_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_property_error_generic_106 = YPmet(FUNCODEREF(fun_property_error_generic_106),LITREF(lit_235),T142,ENVNUL,PNUL,sloc(382));
  T145 = BOUNDP(YgooSconditionsYproperty_error_generic);
  if (T145 != YPfalse) {
    T144 = VARREF(YgooSconditionsYproperty_error_generic);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_property_error_generic_106;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YgooSconditionsYproperty_error_generic,T143);
  lit_237 = YPPsym((P)"property-error-generic-setter");
  lit_238 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T147 = YPsig(LITREF(lit_238),YPPlist(2,VARREF(YLanyG),VARREF(YgooSconditionsYLproperty_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_property_error_generic_setter_107 = YPmet(FUNCODEREF(fun_property_error_generic_setter_107),LITREF(lit_237),T147,ENVNUL,PNUL,sloc(382));
  T150 = BOUNDP(YgooSconditionsYproperty_error_generic_setter);
  if (T150 != YPfalse) {
    T149 = VARREF(YgooSconditionsYproperty_error_generic_setter);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_property_error_generic_setter_107;
  T148 = XCALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(YgooSconditionsYproperty_error_generic_setter,T148);
  lit_239 = YPPlist(1,YPPsym((P)"_x"));
  T152 = YPsig(LITREF(lit_239),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T152,ENVNUL,PNUL,sloc(382));
  T153 = fun_108;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLproperty_errorG),VARREF(YgooSconditionsYproperty_error_generic),VARREF(YgooSconditionsYproperty_error_generic_setter),VARREF(YLanyG),T153);
  lit_240 = YPPsym((P)"<property-unbound-error>");
  T156 = (P)YPpair(VARREF(YgooSconditionsYLunbound_errorG),Ynil);
  T155 = (P)YPpair(VARREF(YgooSconditionsYLproperty_errorG),T156);
  T154 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_240),T155);
  VARSET(YgooSconditionsYLproperty_unbound_errorG,T154);
  lit_241 = YPPsym((P)"property-unbound-error");
  lit_242 = YPPlist(1,YPPsym((P)"owner"));
  T157 = YPsig(LITREF(lit_242),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yproperty_unbound_error = YPmet(FUNCODEREF(Yproperty_unbound_error),LITREF(lit_241),T157,ENVNUL,PNUL,sloc(386));
  T158 = Yproperty_unbound_error;
  VARSET(Yproperty_unbound_error,T158);
  lit_243 = YPPlist(1,YPPsym((P)"c"));
  lit_244 = YPsb((P)"Unbound property on %=.");
  T159 = YPsig(LITREF(lit_243),YPPlist(1,VARREF(YgooSconditionsYLproperty_unbound_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_110 = YPmet(FUNCODEREF(fun_describe_condition_110),LITREF(lit_3),T159,ENVNUL,PNUL,sloc(389));
  T162 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T162 != YPfalse) {
    T161 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T161 = YPfalse;
  }
  T163 = fun_describe_condition_110;
  T160 = XCALL2(1,VARREF(YPdefine_method),T161,T163);
  VARSET(YgooSconditionsYdescribe_condition,T160);
  lit_245 = YPPsym((P)"<property-not-found-error>");
  T165 = (P)YPpair(VARREF(YgooSconditionsYLproperty_errorG),Ynil);
  T164 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_245),T165);
  VARSET(YgooSconditionsYLproperty_not_found_errorG,T164);
  lit_246 = YPPsym((P)"property-not-found-error");
  lit_247 = YPPlist(2,YPPsym((P)"generic"),YPPsym((P)"owner"));
  T166 = YPsig(LITREF(lit_247),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yproperty_not_found_error = YPmet(FUNCODEREF(Yproperty_not_found_error),LITREF(lit_246),T166,ENVNUL,PNUL,sloc(394));
  T167 = Yproperty_not_found_error;
  VARSET(Yproperty_not_found_error,T167);
  lit_248 = YPPlist(1,YPPsym((P)"c"));
  lit_249 = YPsb((P)"Property %s not found in %s.");
  T168 = YPsig(LITREF(lit_248),YPPlist(1,VARREF(YgooSconditionsYLproperty_not_found_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_112 = YPmet(FUNCODEREF(fun_describe_condition_112),LITREF(lit_3),T168,ENVNUL,PNUL,sloc(399));
  T171 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T171 != YPfalse) {
    T170 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_describe_condition_112;
  T169 = XCALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(YgooSconditionsYdescribe_condition,T169);
  lit_250 = YPPsym((P)"<property-type-error>");
  T175 = (P)YPpair(VARREF(YgooSconditionsYLtype_errorG),Ynil);
  T174 = (P)YPpair(VARREF(YgooSconditionsYLproperty_errorG),T175);
  T173 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_250),T174);
  VARSET(YgooSconditionsYLproperty_type_errorG,T173);
  lit_251 = YPPsym((P)"property-type-error");
  lit_252 = YPPlist(3,YPPsym((P)"generic"),YPPsym((P)"value"),YPPsym((P)"type"));
  T176 = YPsig(LITREF(lit_252),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Yproperty_type_error = YPmet(FUNCODEREF(Yproperty_type_error),LITREF(lit_251),T176,ENVNUL,PNUL,sloc(405));
  T177 = Yproperty_type_error;
  VARSET(Yproperty_type_error,T177);
  lit_253 = YPPlist(1,YPPsym((P)"c"));
  lit_254 = YPsb((P)"Property %s ");
  T178 = YPsig(LITREF(lit_253),YPPlist(1,VARREF(YgooSconditionsYLproperty_type_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_114 = YPmet(FUNCODEREF(fun_describe_condition_114),LITREF(lit_3),T178,ENVNUL,PNUL,sloc(411));
  T181 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T181 != YPfalse) {
    T180 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_describe_condition_114;
  T179 = XCALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(YgooSconditionsYdescribe_condition,T179);
  lit_255 = YPPsym((P)"<as-error>");
  T184 = (P)YPpair(VARREF(YgooSconditionsYLtype_errorG),Ynil);
  T183 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_255),T184);
  VARSET(YgooSconditionsYLas_errorG,T183);
  lit_256 = YPPsym((P)"as-error");
  lit_257 = YPPlist(2,YPPsym((P)"type"),YPPsym((P)"value"));
  T185 = YPsig(LITREF(lit_257),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yas_error = YPmet(FUNCODEREF(Yas_error),LITREF(lit_256),T185,ENVNUL,PNUL,sloc(416));
  T186 = Yas_error;
  VARSET(Yas_error,T186);
  lit_258 = YPPlist(1,YPPsym((P)"c"));
  lit_259 = YPsb((P)"No AS method for type %t and value %=.");
  T187 = YPsig(LITREF(lit_258),YPPlist(1,VARREF(YgooSconditionsYLas_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_116 = YPmet(FUNCODEREF(fun_describe_condition_116),LITREF(lit_3),T187,ENVNUL,PNUL,sloc(419));
  T190 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T190 != YPfalse) {
    T189 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_describe_condition_116;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YgooSconditionsYdescribe_condition,T188);
  lit_260 = YPPsym((P)"<arithmetic-error>");
  T193 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T192 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_260),T193);
  VARSET(YgooSconditionsYLarithmetic_errorG,T192);
  lit_261 = YPPsym((P)"arithmetic-error");
  lit_262 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T194 = YPsig(LITREF(lit_262),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Yarithmetic_error = YPmet(FUNCODEREF(Yarithmetic_error),LITREF(lit_261),T194,ENVNUL,PNUL,sloc(425));
  T195 = Yarithmetic_error;
  VARSET(Yarithmetic_error,T195);
  lit_263 = YPPsym((P)"<keyboard-interrupt>");
  T197 = (P)YPpair(VARREF(YgooSconditionsYLconditionG),Ynil);
  T196 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_263),T197);
  VARSET(YgooSconditionsYLkeyboard_interruptG,T196);
  lit_264 = YPPsym((P)"keyboard-interrupt");
  T198 = YPsig(LITREF(lit_93),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ykeyboard_interrupt = YPmet(FUNCODEREF(Ykeyboard_interrupt),LITREF(lit_264),T198,ENVNUL,PNUL,sloc(431));
  T199 = Ykeyboard_interrupt;
  VARSET(Ykeyboard_interrupt,T199);
  T200 = YPfalse;
  return T200;
}

P YgooSconditionsY___main_3___() {
  P tmpF2314;
  P tmpF2313;
  P tmpF2312;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
DEFCREGS();
loop:
  lit_265 = YPPsym((P)"do-handlers-of-type");
  lit_266 = YPPlist(2,YPPsym((P)"type"),YPPsym((P)"f"));
  lit_267 = YPPsym((P)"search");
  lit_268 = YPPlist(1,YPPsym((P)"handlers"));
  T2 = YPsig(LITREF(lit_268),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_search_119 = YPmet(FUNCODEREF(fun_search_119),LITREF(lit_267),T2,ENVNUL,PNUL,sloc(463));
  T1 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T0 = YPsig(LITREF(lit_266),YPPlist(2,T1,VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSconditionsYdo_handlers_of_type = YPmet(FUNCODEREF(YgooSconditionsYdo_handlers_of_type),LITREF(lit_265),T0,ENVNUL,PNUL,sloc(462));
  T3 = YgooSconditionsYdo_handlers_of_type;
  VARSET(YgooSconditionsYdo_handlers_of_type,T3);
  lit_269 = YPPsym((P)"list-handlers");
  lit_270 = YPPlist(2,YPPsym((P)"type"),YPPsym((P)"out"));
  lit_271 = YPPlist(1,YPPsym((P)"handler"));
  lit_272 = YPsb((P)"%d. %s.\n");
  T6 = YPsig(LITREF(lit_271),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_121 = YPmet(FUNCODEREF(fun_121),YPfalse,T6,ENVNUL,PNUL,sloc(481));
  T5 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T4 = YPsig(LITREF(lit_270),YPPlist(2,T5,VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsSvecYLvecG),Ynil);
  YgooSconditionsYlist_handlers = YPmet(FUNCODEREF(YgooSconditionsYlist_handlers),LITREF(lit_269),T4,ENVNUL,PNUL,sloc(477));
  T7 = YgooSconditionsYlist_handlers;
  VARSET(YgooSconditionsYlist_handlers,T7);
  lit_273 = YPPsym((P)"invoke-handler-interactively");
  lit_274 = YPPlist(3,YPPsym((P)"handler"),YPPsym((P)"in"),YPPsym((P)"out"));
  lit_275 = YPsb((P)"Handler %= does not match condition %=");
  lit_276 = YPPlist(1,YPPsym((P)"handlers"));
  lit_277 = YPsb((P)"Handler %= is not installed");
  T10 = YPsig(LITREF(lit_93),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_123 = YPmet(FUNCODEREF(fun_123),YPfalse,T10,ENVNUL,PNUL,sloc(504));
  T9 = YPsig(LITREF(lit_276),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_search_124 = YPmet(FUNCODEREF(fun_search_124),LITREF(lit_267),T9,ENVNUL,PNUL,sloc(497));
  T8 = YPsig(LITREF(lit_274),YPPlist(3,VARREF(YgooSconditionsYLhandlerG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSconditionsYinvoke_handler_interactively = YPmet(FUNCODEREF(YgooSconditionsYinvoke_handler_interactively),LITREF(lit_273),T8,ENVNUL,PNUL,sloc(491));
  T11 = YgooSconditionsYinvoke_handler_interactively;
  VARSET(YgooSconditionsYinvoke_handler_interactively,T11);
  lit_278 = YPPsym((P)"choose-handler");
  lit_279 = YPPlist(3,YPPsym((P)"type"),YPPsym((P)"in"),YPPsym((P)"out"));
  lit_280 = YPsb((P)"Please pick a handler: ");
  lit_281 = YPsb((P)"No such handler %d");
  T13 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T12 = YPsig(LITREF(lit_279),YPPlist(3,T13,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSconditionsYchoose_handler = YPmet(FUNCODEREF(YgooSconditionsYchoose_handler),LITREF(lit_278),T12,ENVNUL,PNUL,sloc(508));
  T14 = YgooSconditionsYchoose_handler;
  VARSET(YgooSconditionsYchoose_handler,T14);
  VARSET(YTrestarts_okQT,YPtrue);
  tmpF2312 = YPfalse;
  if (tmpF2312 != YPfalse) {
    T15 = VARREF(YgooSconditionsYread);
  } else {
    T15 = YPfalse;
  }
  tmpF2313 = YPfalse;
  if (tmpF2313 != YPfalse) {
    T16 = VARREF(YgooSconditionsYmsg);
  } else {
    T16 = YPfalse;
  }
  tmpF2314 = YPfalse;
  if (tmpF2314 != YPfalse) {
    T17 = VARREF(YgooSconditionsYmsg_to_str);
  } else {
    T17 = YPfalse;
  }
  T18 = YPfalse;
  return T18;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSapp;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSopts;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsStup;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSmath},
  {&module_info_gooStypes},
  {&module_info_gooSapp},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSseqx},
  {&module_info_gooScolsSopts},
  {&module_info_gooScolsSlst},
  {&module_info_gooScolsStup},
  {&module_info_gooScolsSvec},
  {&module_info_gooScolsStab},
  {&module_info_gooSioSport},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"$max-int", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"port-handle", &module_info_gooSioSport, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
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
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"port-line-setter", &module_info_gooSioSport, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"port-handle-setter", &module_info_gooSioSport, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"type-error-value-setter", CVAR, &YgooSconditionsYtype_error_value_setter},
  {"handler-condition-type-setter", CVAR, &YgooSconditionsYhandler_condition_type_setter},
  {"msg", CVAR, &YgooSconditionsYmsg},
  {"handler-info-arguments-setter", CVAR, &YgooSconditionsYhandler_info_arguments_setter},
  {"msg-to-str", CVAR, &YgooSconditionsYmsg_to_str},
  {"<handler>", CVAR, &YgooSconditionsYLhandlerG},
  {"<property-type-error>", CVAR, &YgooSconditionsYLproperty_type_errorG},
  {"incongruent-method-error-method", CVAR, &YgooSconditionsYincongruent_method_error_method},
  {"---main-2---", PVAR, NULL},
  {"<file-opening-error>", CVAR, &YgooSconditionsYLfile_opening_errorG},
  {"condition-message-setter", CVAR, &YgooSconditionsYcondition_message_setter},
  {"<no-applicable-methods-error>", CVAR, &YgooSconditionsYLno_applicable_methods_errorG},
  {"$default-handler-info", CVAR, &YgooSconditionsYDdefault_handler_info},
  {"condition-message", CVAR, &YgooSconditionsYcondition_message},
  {"build-condition-for-handler-interactively", CVAR, &YgooSconditionsYbuild_condition_for_handler_interactively},
  {"<type-error>", CVAR, &YgooSconditionsYLtype_errorG},
  {"<range-error>", CVAR, &YgooSconditionsYLrange_errorG},
  {"---main-1---", PVAR, NULL},
  {"signal-handler-list", CVAR, &YgooSconditionsYsignal_handler_list},
  {"range-error-key-setter", CVAR, &YgooSconditionsYrange_error_key_setter},
  {"<condition>", CVAR, &YgooSconditionsYLconditionG},
  {"invoke-handler-interactively", CVAR, &YgooSconditionsYinvoke_handler_interactively},
  {"<property-unbound-error>", CVAR, &YgooSconditionsYLproperty_unbound_errorG},
  {"<unbound-variable-error>", CVAR, &YgooSconditionsYLunbound_variable_errorG},
  {"file-opening-error-filename", CVAR, &YgooSconditionsYfile_opening_error_filename},
  {"fab-handler", CVAR, &YgooSconditionsYfab_handler},
  {"range-error-collection-setter", CVAR, &YgooSconditionsYrange_error_collection_setter},
  {"describe-condition", CVAR, &YgooSconditionsYdescribe_condition},
  {"<internal-error>", CVAR, &YgooSconditionsYLinternal_errorG},
  {"<unknown-function-error>", CVAR, &YgooSconditionsYLunknown_function_errorG},
  {"call-error-arguments", CVAR, &YgooSconditionsYcall_error_arguments},
  {"handler-function", CVAR, &YgooSconditionsYhandler_function},
  {"<serious-condition>", CVAR, &YgooSconditionsYLserious_conditionG},
  {"type-error-type-setter", CVAR, &YgooSconditionsYtype_error_type_setter},
  {"<return-type-error>", CVAR, &YgooSconditionsYLreturn_type_errorG},
  {"type-error-value", CVAR, &YgooSconditionsYtype_error_value},
  {"range-error-collection", CVAR, &YgooSconditionsYrange_error_collection},
  {"condition-arguments", CVAR, &YgooSconditionsYcondition_arguments},
  {"<incongruent-method-error>", CVAR, &YgooSconditionsYLincongruent_method_errorG},
  {"<argument-type-error>", CVAR, &YgooSconditionsYLargument_type_errorG},
  {"---main-0---", PVAR, NULL},
  {"<error>", CVAR, &YgooSconditionsYLerrorG},
  {"macro-error-arguments-setter", CVAR, &YgooSconditionsYmacro_error_arguments_setter},
  {"call-error-function-setter", CVAR, &YgooSconditionsYcall_error_function_setter},
  {"<arity-error>", CVAR, &YgooSconditionsYLarity_errorG},
  {"property-error-owner-setter", CVAR, &YgooSconditionsYproperty_error_owner_setter},
  {"incongruent-method-error-method-setter", CVAR, &YgooSconditionsYincongruent_method_error_method_setter},
  {"read", CVAR, &YgooSconditionsYread},
  {"<keyboard-interrupt>", CVAR, &YgooSconditionsYLkeyboard_interruptG},
  {"<handler-info>", CVAR, &YgooSconditionsYLhandler_infoG},
  {"handler-condition-type", CVAR, &YgooSconditionsYhandler_condition_type},
  {"default-handler-description", CVAR, &YgooSconditionsYdefault_handler_description},
  {"describe-handler", CVAR, &YgooSconditionsYdescribe_handler},
  {"unbound-variable-error-variable-setter", CVAR, &YgooSconditionsYunbound_variable_error_variable_setter},
  {"---main-3---", PVAR, NULL},
  {"list-handlers", CVAR, &YgooSconditionsYlist_handlers},
  {"<simple-error>", CVAR, &YgooSconditionsYLsimple_errorG},
  {"range-error-key", CVAR, &YgooSconditionsYrange_error_key},
  {"<compiler-error>", CVAR, &YgooSconditionsYLcompiler_errorG},
  {"incongruent-method-error-generic", CVAR, &YgooSconditionsYincongruent_method_error_generic},
  {"handler-info-setter", CVAR, &YgooSconditionsYhandler_info_setter},
  {"<property-error>", CVAR, &YgooSconditionsYLproperty_errorG},
  {"<no-next-methods-error>", CVAR, &YgooSconditionsYLno_next_methods_errorG},
  {"type-error-type", CVAR, &YgooSconditionsYtype_error_type},
  {"<syntax-error>", CVAR, &YgooSconditionsYLsyntax_errorG},
  {"<macro-error>", CVAR, &YgooSconditionsYLmacro_errorG},
  {"macro-error-name-setter", CVAR, &YgooSconditionsYmacro_error_name_setter},
  {"*current-handlers*", DVAR, &YgooSconditionsYTcurrent_handlersT},
  {"<simple-condition>", CVAR, &YgooSconditionsYLsimple_conditionG},
  {"<unbound-error>", CVAR, &YgooSconditionsYLunbound_errorG},
  {"property-error-generic-setter", CVAR, &YgooSconditionsYproperty_error_generic_setter},
  {"macro-error-arguments", CVAR, &YgooSconditionsYmacro_error_arguments},
  {"handler-matches?", CVAR, &YgooSconditionsYhandler_matchesQ},
  {"property-error-owner", CVAR, &YgooSconditionsYproperty_error_owner},
  {"condition-arguments-setter", CVAR, &YgooSconditionsYcondition_arguments_setter},
  {"unbound-variable-error-variable", CVAR, &YgooSconditionsYunbound_variable_error_variable},
  {"do-handlers-of-type", CVAR, &YgooSconditionsYdo_handlers_of_type},
  {"<restart>", CVAR, &YgooSconditionsYLrestartG},
  {"<as-error>", CVAR, &YgooSconditionsYLas_errorG},
  {"<ambiguous-method-error>", CVAR, &YgooSconditionsYLambiguous_method_errorG},
  {"handler-info-message-setter", CVAR, &YgooSconditionsYhandler_info_message_setter},
  {"default-handler", CVAR, &YgooSconditionsYdefault_handler},
  {"handler-info", CVAR, &YgooSconditionsYhandler_info},
  {"macro-error-name", CVAR, &YgooSconditionsYmacro_error_name},
  {"handler-test", CVAR, &YgooSconditionsYhandler_test},
  {"file-opening-error-filename-setter", CVAR, &YgooSconditionsYfile_opening_error_filename_setter},
  {"<narity-error>", CVAR, &YgooSconditionsYLnarity_errorG},
  {"property-error-generic", CVAR, &YgooSconditionsYproperty_error_generic},
  {"<stack-overflow>", CVAR, &YgooSconditionsYLstack_overflowG},
  {"<property-not-found-error>", CVAR, &YgooSconditionsYLproperty_not_found_errorG},
  {"handler-active?", CVAR, &YgooSconditionsYhandler_activeQ},
  {"<call-error>", CVAR, &YgooSconditionsYLcall_errorG},
  {"sig", CVAR, &YgooSconditionsYsig},
  {"incongruent-method-error-generic-setter", CVAR, &YgooSconditionsYincongruent_method_error_generic_setter},
  {"build-condition-interactively", CVAR, &YgooSconditionsYbuild_condition_interactively},
  {"choose-handler", CVAR, &YgooSconditionsYchoose_handler},
  {"<assert-error>", CVAR, &YgooSconditionsYLassert_errorG},
  {"<arithmetic-error>", CVAR, &YgooSconditionsYLarithmetic_errorG},
  {"handler-test-setter", CVAR, &YgooSconditionsYhandler_test_setter},
  {"<cpl-error>", CVAR, &YgooSconditionsYLcpl_errorG},
  {"handler-function-setter", CVAR, &YgooSconditionsYhandler_function_setter},
  {"call-error-arguments-setter", CVAR, &YgooSconditionsYcall_error_arguments_setter},
  {"call-error-function", CVAR, &YgooSconditionsYcall_error_function},
  {"<io-error>", CVAR, &YgooSconditionsYLio_errorG},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"msg", NULL},
  {"file-opening-error-filename", NULL},
  {"msg-to-str", NULL},
  {"<property-type-error>", NULL},
  {"internal-error", NULL},
  {"<file-opening-error>", NULL},
  {"assert-error", NULL},
  {"<no-applicable-methods-error>", NULL},
  {"<argument-type-error>", NULL},
  {"$default-handler-info", NULL},
  {"condition-message", NULL},
  {"build-condition-for-handler-interactively", NULL},
  {"<type-error>", NULL},
  {"<condition>", NULL},
  {"range-error-collection", NULL},
  {"invoke-handler-interactively", NULL},
  {"return-type-error", NULL},
  {"fab-handler", NULL},
  {"<range-error>", NULL},
  {"describe-condition", NULL},
  {"<internal-error>", NULL},
  {"<unknown-function-error>", NULL},
  {"call-error-arguments", NULL},
  {"handler-function", NULL},
  {"<serious-condition>", NULL},
  {"type-error-value", NULL},
  {"condition-arguments", NULL},
  {"argument-type-error", NULL},
  {"%with-monitor", NULL},
  {"macro-error", NULL},
  {"<error>", NULL},
  {"<arity-error>", NULL},
  {"read", NULL},
  {"<keyboard-interrupt>", NULL},
  {"<handler-info>", NULL},
  {"default-handler-description", NULL},
  {"handler-info-message", NULL},
  {"describe-handler", NULL},
  {"list-handlers", NULL},
  {"<simple-error>", NULL},
  {"<simple-handler-info>", NULL},
  {"range-error-key", NULL},
  {"<compiler-error>", NULL},
  {"error", NULL},
  {"<property-error>", NULL},
  {"<no-next-methods-error>", NULL},
  {"type-error-type", NULL},
  {"narity-error", NULL},
  {"stack-overflow-error", NULL},
  {"<syntax-error>", NULL},
  {"arithmetic-error", NULL},
  {"<macro-error>", NULL},
  {"*current-handlers*", NULL},
  {"<simple-condition>", NULL},
  {"<unbound-error>", NULL},
  {"macro-error-arguments", NULL},
  {"handler-matches?", NULL},
  {"property-error-owner", NULL},
  {"range-error", NULL},
  {"unbound-variable-error-variable", NULL},
  {"no-next-methods-error", NULL},
  {"<restart>", NULL},
  {"<as-error>", NULL},
  {"<unbound-variable-error>", NULL},
  {"<ambiguous-method-error>", NULL},
  {"default-handler", NULL},
  {"keyboard-interrupt", NULL},
  {"handler-info-arguments", NULL},
  {"macro-error-name", NULL},
  {"<narity-error>", NULL},
  {"property-error-generic", NULL},
  {"<stack-overflow>", NULL},
  {"<property-not-found-error>", NULL},
  {"<call-error>", NULL},
  {"sig", NULL},
  {"build-condition-interactively", NULL},
  {"choose-handler", NULL},
  {"<assert-error>", NULL},
  {"<arithmetic-error>", NULL},
  {"<return-type-error>", NULL},
  {"<property-unbound-error>", NULL},
  {"<handler>", NULL},
  {"<replace-generic-restart>", NULL},
  {"call-error-function", NULL},
  {"<io-error>", NULL},
  {"arity-error", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSconditions;
MODULE_INFO module_info_gooSconditions = {
  "goo/conditions",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSmath (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSapp (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsScolx (void);
extern void load_module_gooScolsSseq (void);
extern void load_module_gooScolsSseqx (void);
extern void load_module_gooScolsSopts (void);
extern void load_module_gooScolsSlst (void);
extern void load_module_gooScolsStup (void);
extern void load_module_gooScolsSvec (void);
extern void load_module_gooScolsStab (void);
extern void load_module_gooSioSport (void);

/* EXPRESSION: */

extern void load_module_gooSconditions (void);

void load_module_gooSconditions (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSmath();
  load_module_gooStypes();
  load_module_gooSapp();
  load_module_gooScolsScol();
  load_module_gooScolsScolx();
  load_module_gooScolsSseq();
  load_module_gooScolsSseqx();
  load_module_gooScolsSopts();
  load_module_gooScolsSlst();
  load_module_gooScolsStup();
  load_module_gooScolsSvec();
  load_module_gooScolsStab();
  load_module_gooSioSport();

  (P)YgooSconditionsY___main_0___();
  (P)YgooSconditionsY___main_1___();
  (P)YgooSconditionsY___main_2___();
  (P)YgooSconditionsY___main_3___();

}

/* END OF GENERATED CODE. */
