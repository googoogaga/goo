/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/io/read");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/io/read */

EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYround,"goo/math","round");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YgooSlogYas_log,"goo/log","as-log");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
DEF(YgooSioSreadYsub_read,"goo/io/read","sub-read");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
DEF(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
DEF(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsSlstYlstT,"goo/cols/lst","lst*");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
DEF(YgooSioSreadYset_standard_syntaxX,"goo/io/read","set-standard-syntax!");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
DEF(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSchrYeof_object,"goo/chr","eof-object");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YPtrue,"goo/boot","%true");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
DEF(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
DEF(YgooSioSreadYtoken_message,"goo/io/read","token-message");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
DEF(YgooSioSreadYDvert_sym,"goo/io/read","$vert-sym");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
DEF(YgooSioSreadYreading_error,"goo/io/read","reading-error");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YPfalse,"goo/boot","%false");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(Ytup,"goo/boot","tup");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YgooSioSreadYbs_sym,"goo/io/read","bs-sym");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSclassYPprop,"goo/class","%prop");
DEF(YgooSioSreadYsub_read_curlies,"goo/io/read","sub-read-curlies");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YOdo,"goo/boot","@do");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
DEF(YgooSioSreadYTsharp_macrosT,"goo/io/read","*sharp-macros*");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
DEF(YgooSioSreadYDstrange_symbol_names,"goo/io/read","$strange-symbol-names");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmathYexp,"goo/math","exp");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Ytail,"goo/boot","tail");
DEF(YgooSioSreadYflush_whitespace,"goo/io/read","flush-whitespace");
DEF(YgooSioSreadYparse_token,"goo/io/read","parse-token");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YOallQ,"goo/boot","@all?");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YtT,"goo/boot","t*");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
DEF(YgooSioSreadYpreferred_case,"goo/io/read","preferred-case");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
DEF(YgooSioSreadYreverse_list_Gstring,"goo/io/read","reverse-list->string");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
DEF(YgooSioSreadYgobble_nested_comment,"goo/io/read","gobble-nested-comment");
DEF(YgooSioSreadYread_long_string_literal,"goo/io/read","read-long-string-literal");
DEF(YgooSioSreadYread_c_inline_literal,"goo/io/read","read-c-inline-literal");
DEF(YgooSioSreadYread_c_expression_literal,"goo/io/read","read-c-expression-literal");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
DEF(YgooSioSreadYread_string_literal,"goo/io/read","read-string-literal");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooStypesYtE,"goo/types","t=");
DEF(YgooSioSreadYsub_read_list_eof_error,"goo/io/read","sub-read-list-eof-error");
DEF(YgooSioSreadYsub_read_list,"goo/io/read","sub-read-list");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSmathYK,"goo/math","|");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
DEF(YgooSioSreadYreader_tokenQ,"goo/io/read","reader-token?");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YOmap,"goo/boot","@map");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
DEF(YgooSioSreadYLreader_tokenG,"goo/io/read","<reader-token>");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSioSportYport_filename,"goo/io/port","port-filename");
DEF(YgooSioSreadYsub_read_vertical,"goo/io/read","sub-read-vertical");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(Yopts_location,"goo/boot","opts-location");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
DEF(YgooSioSreadYTread_dispatch_vectorT,"goo/io/read","*read-dispatch-vector*");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
DEF(YgooSioSreadYDclose_bracket,"goo/io/read","$close-bracket");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YLintG,"goo/boot","<int>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Ysig_val,"goo/boot","sig-val");
DEF(YgooSioSreadYDstring_escape_chars,"goo/io/read","$string-escape-chars");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
DEF(YgooSioSreadYgobble_line,"goo/io/read","gobble-line");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
DEF(YgooSioSreadYparse_c_inline,"goo/io/read","parse-c-inline");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
DEF(YgooSioSreadYDclose_paren,"goo/io/read","$close-paren");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Yprop_type,"goo/boot","prop-type");
DEF(YgooSioSreadYsub_read_token,"goo/io/read","sub-read-token");
DEF(YgooSioSreadYDvert_proxy,"goo/io/read","$vert-proxy");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YOrev,"goo/boot","@rev");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooStypesYas,"goo/types","as");
DEF(YgooSioSreadYsub_read_brackets,"goo/io/read","sub-read-brackets");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOOEE,"goo/boot","@@==");
DEF(YgooSioSreadYTread_terminatingQ_vectorT,"goo/io/read","*read-terminating?-vector*");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSmathYA,"goo/math","+");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYround_to,"goo/math","round-to");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
DEF(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(YOnew,"goo/boot","@new");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSioSportYopen,"goo/io/port","open");
DEF(YgooSioSreadYwarn,"goo/io/read","warn");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
DEF(YgooSioSreadYmake_reader_token,"goo/io/read","make-reader-token");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YLboxG,"goo/boot","<box>");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
DEF(YgooSioSreadYDclose_curly,"goo/io/read","$close-curly");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(YOfold,"goo/boot","@fold");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooSlogYE,"goo/log","=");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYtrunc,"goo/math","trunc");
DEF(YgooSioSreadYsub_read_backslash,"goo/io/read","sub-read-backslash");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
DEF(YgooSioSreadYsub_read_carefully,"goo/io/read","sub-read-carefully");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmathYfloorS,"goo/math","floor/");
DEF(YgooSioSreadYread_c_statement_literal,"goo/io/read","read-c-statement-literal");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
DEF(YgooSioSreadYsub_read_constituent,"goo/io/read","sub-read-constituent");
EXT(Yas_error,"goo/boot","as-error");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(YgooSioSreadYdefine_sharp_macro,"goo/io/read","define-sharp-macro");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
DEF(YgooSioSreadYsub_read_seq,"goo/io/read","sub-read-seq");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_51);
DEFLIT(lit_98);
DEFLIT(lit_24);
DEFLIT(lit_32);
DEFLIT(lit_104);
DEFLIT(lit_106);
DEFLIT(lit_70);
DEFLIT(lit_127);
DEFLIT(lit_120);
DEFLIT(lit_112);
DEFLIT(lit_80);
DEFLIT(lit_50);
DEFLIT(lit_90);
DEFLIT(lit_92);
DEFLIT(lit_21);
DEFLIT(lit_41);
DEFLIT(lit_17);
DEFLIT(lit_23);
DEFLIT(lit_54);
DEFLIT(lit_139);
DEFLIT(lit_47);
DEFLIT(lit_20);
DEFLIT(lit_117);
DEFLIT(lit_46);
DEFLIT(lit_65);
DEFLIT(lit_71);
DEFLIT(lit_26);
DEFLIT(lit_128);
DEFLIT(lit_18);
DEFLIT(lit_87);
DEFLIT(lit_110);
DEFLIT(lit_5);
DEFLIT(lit_103);
DEFLIT(lit_88);
DEFLIT(lit_27);
DEFLIT(lit_36);
DEFLIT(lit_14);
DEFLIT(lit_76);
DEFLIT(lit_116);
DEFLIT(lit_42);
DEFLIT(lit_1);
DEFLIT(lit_49);
DEFLIT(lit_16);
DEFLIT(lit_130);
DEFLIT(lit_62);
DEFLIT(lit_134);
DEFLIT(lit_143);
DEFLIT(lit_119);
DEFLIT(lit_100);
DEFLIT(lit_66);
DEFLIT(lit_83);
DEFLIT(lit_34);
DEFLIT(lit_77);
DEFLIT(lit_81);
DEFLIT(lit_0);
DEFLIT(lit_53);
DEFLIT(lit_82);
DEFLIT(lit_74);
DEFLIT(lit_69);
DEFLIT(lit_68);
DEFLIT(lit_133);
DEFLIT(lit_135);
DEFLIT(lit_28);
DEFLIT(lit_99);
DEFLIT(lit_101);
DEFLIT(lit_85);
DEFLIT(lit_86);
DEFLIT(lit_22);
DEFLIT(lit_142);
DEFLIT(lit_52);
DEFLIT(lit_44);
DEFLIT(lit_45);
DEFLIT(lit_6);
DEFLIT(lit_72);
DEFLIT(lit_132);
DEFLIT(lit_10);
DEFLIT(lit_56);
DEFLIT(lit_115);
DEFLIT(lit_113);
DEFLIT(lit_126);
DEFLIT(lit_30);
DEFLIT(lit_4);
DEFLIT(lit_109);
DEFLIT(lit_12);
DEFLIT(lit_39);
DEFLIT(lit_60);
DEFLIT(lit_40);
DEFLIT(lit_105);
DEFLIT(lit_102);
DEFLIT(lit_94);
DEFLIT(lit_64);
DEFLIT(lit_19);
DEFLIT(lit_122);
DEFLIT(lit_63);
DEFLIT(lit_131);
DEFLIT(lit_84);
DEFLIT(lit_67);
DEFLIT(lit_13);
DEFLIT(lit_79);
DEFLIT(lit_97);
DEFLIT(lit_125);
DEFLIT(lit_121);
DEFLIT(lit_89);
DEFLIT(lit_38);
DEFLIT(lit_31);
DEFLIT(lit_43);
DEFLIT(lit_114);
DEFLIT(lit_8);
DEFLIT(lit_48);
DEFLIT(lit_93);
DEFLIT(lit_61);
DEFLIT(lit_111);
DEFLIT(lit_78);
DEFLIT(lit_75);
DEFLIT(lit_15);
DEFLIT(lit_55);
DEFLIT(lit_107);
DEFLIT(lit_141);
DEFLIT(lit_57);
DEFLIT(lit_33);
DEFLIT(lit_2);
DEFLIT(lit_35);
DEFLIT(lit_9);
DEFLIT(lit_118);
DEFLIT(lit_137);
DEFLIT(lit_37);
DEFLIT(lit_96);
DEFLIT(lit_3);
DEFLIT(lit_108);
DEFLIT(lit_138);
DEFLIT(lit_136);
DEFLIT(lit_58);
DEFLIT(lit_59);
DEFLIT(lit_95);
DEFLIT(lit_73);
DEFLIT(lit_129);
DEFLIT(lit_7);
DEFLIT(lit_25);
DEFLIT(lit_124);
DEFLIT(lit_91);
DEFLIT(lit_11);
DEFLIT(lit_140);
DEFLIT(lit_123);
DEFLIT(lit_29);

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
FUNFOR(YgooSioSreadYread_long_string_literal);
LOCFOR(fun_parse_c_inline_44);
FUNFOR(YgooSioSreadYread_c_inline_literal);
FUNFOR(YgooSioSreadYread_c_statement_literal);
FUNFOR(YgooSioSreadYread_c_expression_literal);
LOCFOR(fun_48);
LOCFOR(fun_49);
LOCFOR(fun_50);
LOCFOR(fun_51);
LOCFOR(fun_52);
LOCFOR(fun_sub_read_token_53);
LOCFOR(fun_54);
LOCFOR(fun_parse_token_55);
LOCFOR(fun_reading_error_56);
LOCFOR(fun_warn_57);
LOCFOR(fun_reverse_list_Gstring_58);
extern P YgooSioSreadY___main_0___ ();
extern P YgooSioSreadY___main_1___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

LOCCODEDEF(fun_read_0) {
  P port_;
  P formF3692;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(port_, 0);
  LOOP_154: {
    T7 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
    formF3692 = T7;
    T2 = CALL1(1,VARREF(YgooSioSreadYreader_tokenQ),formF3692);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T0 = formF3692;
    } else {
      T4 = CALL2(1,VARREF(YgooSmacrosYEE),formF3692,VARREF(YgooSioSreadYDclose_paren));
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
  P portF3693;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  portF3693 = YPfalse;
  portF3693 = BOXFAB(portF3693);
  T2 = FUNFAB(fun_1,2,portF3693,x_);
  T3 = FUNFAB(fun_2,1,portF3693);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_sub_read_carefully_4) {
  P port_;
  P formF3694;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(port_, 0);
  T7 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
  formF3694 = T7;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),formF3694);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_8));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooSioSreadYreader_tokenQ),formF3694);
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(Ytail),formF3694);
      T5 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,T6);
      T3 = T5;
    } else {
      T3 = formF3694;
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
  P cF3695;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(port_, 0);
  T5 = CALL1(1,VARREF(YgooSioSportYget),port_);
  cF3695 = T5;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3695);
  if (T1 != YPfalse) {
    T0 = cF3695;
  } else {
    T4 = CALL1(1,VARREF(YgooSchrYchar_Gascii),cF3695);
    T3 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_dispatch_vectorT),T4);
    T2 = CALL2(1,T3,cF3695,port_);
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
  P cF3696;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(port_, 0);
  T4 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF3696 = T4;
  T2 = CALL1(1,VARREF(YgooSchrYchar_Gascii),cF3696);
  T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),VARREF(YgooScolsSstrYascii_whitespaces),T2);
  if (T1 != YPfalse) {
    CALL1(1,VARREF(YgooSioSportYget),port_);
    T3 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
    T0 = T3;
  } else {
    T0 = cF3696;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYread_delimited_list) {
  P endchar_,port_;
  P UF3699;
  P cF3698;
  P retlistF3697;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(endchar_, 0);
  ARG(port_, 1);
  retlistF3697 = VARREF(Ynil);
  T11 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
  cF3698 = T11;
  LOOP_155: {
    P a155_0;
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),cF3698,endchar_);
    if (T2 != YPfalse) {
      CALL1(1,VARREF(YgooSioSportYget),port_);
      T4 = retlistF3697;
      T3 = CALL1(1,VARREF(YgooScolsSseqYrev),T4);
      T1 = T3;
    } else {
      T8 = retlistF3697;
      UF3699 = T8;
      T7 = CALL1(1,VARREF(YgooSconditionsYread),port_);
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),T7,UF3699);
      T5 = retlistF3697 = T6;
      T10 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
      a155_0 = T10;
      cF3698 = a155_0;
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
  P nextF3701;
  P prevF3700;
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
  prevF3700 = T18;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),form_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSioSreadYsub_read_list_eof_error),FREEREF(0));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),form_,VARREF(YgooSioSreadYDclose_paren));
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,prevF3700);
      T3 = T5;
    } else {
      T7 = CALL2(1,VARREF(YgooSmacrosYEE),form_,VARREF(YgooSioSreadYDvert_sym));
      if (T7 != YPfalse) {
        T12 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),FREEREF(0));
        nextF3701 = T12;
        T10 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,nextF3701);
        T9 = CALL3(1,VARREF(YgooScolsSlstYline_pair),prevF3700,T10,line_);
        T11 = CALL2(1,VARREF(YgooSioSreadYsub_read_list),c_,FREEREF(0));
        T8 = CALL3(1,VARREF(YgooScolsSlstYline_pair),T9,T11,line_);
        T6 = T8;
      } else {
        if (YPtrue != YPfalse) {
          T16 = CALL1(1,VARREF(YgooSioSportYport_line),FREEREF(0));
          T17 = CALL1(1,VARREF(YgooSioSreadYsub_read),FREEREF(0));
          T15 = CALL4(1,FREEREF(1),c_,form_,T16,T17);
          T14 = CALL3(1,VARREF(YgooScolsSlstYline_pair),prevF3700,T15,line_);
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
  P read_nextF3704;
  P formF3703;
  P lineF3702;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(c_, 0);
  ARG(p_, 1);
  T10 = CALL1(1,VARREF(YgooSioSportYport_line),p_);
  lineF3702 = T10;
  T9 = CALL1(1,VARREF(YgooSioSreadYsub_read),p_);
  formF3703 = T9;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),formF3703);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSioSreadYsub_read_list_eof_error),p_);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),formF3703,VARREF(YgooSioSreadYDclose_paren));
    if (T4 != YPfalse) {
      T3 = Ynil;
    } else {
      if (YPtrue != YPfalse) {
        T8 = FUNSHELL(1,fun_read_next_22,2);
        read_nextF3704 = T8;
        FUNINIT(read_nextF3704, 2,p_,read_nextF3704);
        T7 = CALL1(1,VARREF(YgooSioSreadYsub_read),p_);
        T6 = CALL4(1,read_nextF3704,c_,formF3703,lineF3702,T7);
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
  P formF3705;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(c_, 0);
  ARG(e_, 1);
  ARG(port_, 2);
  T7 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
  formF3705 = T7;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),formF3705);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_57));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),formF3705,e_);
    if (T4 != YPfalse) {
      T3 = Ynil;
    } else {
      T6 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,e_,port_);
      T5 = CALL2(1,VARREF(YgooSmacrosYpair),formF3705,T6);
      T3 = T5;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sub_read_brackets_25) {
  P c_,port_;
  P x_1442F3708;
  P x_1441F3707;
  P formF3706;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T29 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,VARREF(YgooSioSreadYDclose_bracket),port_);
  formF3706 = T29;
  T28 = CALL1(1,VARREF(YgooStypesYlen),formF3706);
  x_1441F3707 = T28;
  x_1442F3708 = VARREF(YgooSmacrosYEE);
  T1 = CALL2(1,x_1442F3708,x_1441F3707,YPint((P)2));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
    T5 = CALL1(1,VARREF(YgooSmacrosY1st),formF3706);
    T4 = CALL1(1,VARREF(Ylst),T5);
    T7 = CALL1(1,VARREF(YgooSmacrosY2nd),formF3706);
    T6 = CALL1(1,VARREF(Ylst),T7);
    T2 = CALL4(1,VARREF(YgooSmacrosYcat),T3,T4,T6,LITREF(lit_61));
    T0 = T2;
  } else {
    T9 = CALL2(1,x_1442F3708,x_1441F3707,YPint((P)3));
    if (T9 != YPfalse) {
      T12 = CALL1(1,VARREF(YgooScolsSseqY3rd),formF3706);
      T11 = CALL2(1,VARREF(YgooSmacrosYEE),T12,LITREF(lit_62));
      if (T11 != YPfalse) {
        T14 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
        T16 = CALL1(1,VARREF(YgooSmacrosY1st),formF3706);
        T15 = CALL1(1,VARREF(Ylst),T16);
        T18 = CALL1(1,VARREF(YgooSmacrosY2nd),formF3706);
        T17 = CALL1(1,VARREF(Ylst),T18);
        T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T17,LITREF(lit_61));
        T10 = T13;
      } else {
        T20 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
        T22 = CALL1(1,VARREF(YgooSmacrosY1st),formF3706);
        T21 = CALL1(1,VARREF(Ylst),T22);
        T24 = CALL1(1,VARREF(YgooSmacrosY2nd),formF3706);
        T23 = CALL1(1,VARREF(Ylst),T24);
        T26 = CALL1(1,VARREF(YgooScolsSseqY3rd),formF3706);
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
  P slash_indexF3710;
  P formsF3709;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T10 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,VARREF(YgooSioSreadYDclose_curly),port_);
  formsF3709 = T10;
  T9 = CALL2(1,VARREF(YgooScolsSseqYpos),formsF3709,VARREF(YgooSioSreadYbs_sym));
  slash_indexF3710 = T9;
  if (slash_indexF3710 != YPfalse) {
    T2 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
    T4 = CALL3(1,VARREF(YgooScolsSseqYsub),formsF3709,YPint((P)0),slash_indexF3710);
    T3 = CALL1(1,VARREF(Ylst),T4);
    T6 = CALL2(1,VARREF(YgooSmathYA),slash_indexF3710,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooScolsSseqYsubT),formsF3709,T6);
    T1 = CALL4(1,VARREF(YgooSmacrosYcat),T2,T3,T5,LITREF(lit_61));
    T0 = T1;
  } else {
    T8 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
    T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,formsF3709,LITREF(lit_61));
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
  P keywordF3712;
  P nextF3711;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T7 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  nextF3711 = T7;
  T3 = CALL1(1,VARREF(YgooSchrYeof_objectQ),nextF3711);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_79));
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YgooSlogYE),nextF3711,YPchr((P)64));
    if (T6 != YPfalse) {
      CALL1(1,VARREF(YgooSioSportYget),port_);
      T5 = LITREF(lit_80);
    } else {
      T5 = LITREF(lit_81);
    }
    T2 = T5;
  }
  keywordF3712 = T2;
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T0 = CALL2(1,VARREF(Ylst),keywordF3712,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYread_string_literal) {
  P c_,port_;
  P ecF3718;
  P tmpF3717;
  P cF3716;
  P cF3715;
  P iF3714;
  P lF3713;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  lF3713 = Ynil;
  iF3714 = YPint((P)0);
  LOOP_156: {
    P a156_0,a156_1;
    T29 = CALL1(1,VARREF(YgooSioSportYget),port_);
    cF3715 = T29;
    T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3715);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_84));
      T0 = T2;
    } else {
      T4 = CALL2(1,VARREF(YgooSlogYE),cF3715,YPchr((P)92));
      if (T4 != YPfalse) {
        T22 = CALL1(1,VARREF(YgooSioSportYget),port_);
        cF3716 = T22;
        T6 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3716);
        if (T6 != YPfalse) {
          T7 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_85));
          T5 = T7;
        } else {
          T11 = CALL2(1,VARREF(YgooSlogYE),cF3716,YPchr((P)92));
          tmpF3717 = T11;
          if (tmpF3717 != YPfalse) {
            T9 = tmpF3717;
          } else {
            T10 = CALL2(1,VARREF(YgooSlogYE),cF3716,YPchr((P)34));
            T9 = T10;
          }
          if (T9 != YPfalse) {
            T13 = CALL2(1,VARREF(YgooSmacrosYpair),cF3716,lF3713);
            T14 = CALL2(1,VARREF(YgooSmathYA),iF3714,YPint((P)1));
            a156_0 = T13;
            a156_1 = T14;
            lF3713 = a156_0;
            iF3714 = a156_1;
            goto LOOP_156;
            T8 = T12;
          } else {
            T21 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF3716);
            T20 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYDstring_escape_chars),T21);
            ecF3718 = T20;
            if (ecF3718 != YPfalse) {
              T17 = CALL2(1,VARREF(YgooSmacrosYpair),ecF3718,lF3713);
              T18 = CALL2(1,VARREF(YgooSmathYA),iF3714,YPint((P)1));
              a156_0 = T17;
              a156_1 = T18;
              lF3713 = a156_0;
              iF3714 = a156_1;
              goto LOOP_156;
              T15 = T16;
            } else {
              T19 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_86),cF3716);
              T15 = T19;
            }
            T8 = T15;
          }
          T5 = T8;
        }
        T3 = T5;
      } else {
        T24 = CALL2(1,VARREF(YgooSlogYE),cF3715,YPchr((P)34));
        if (T24 != YPfalse) {
          T25 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),lF3713,iF3714);
          T23 = T25;
        } else {
          T27 = CALL2(1,VARREF(YgooSmacrosYpair),cF3715,lF3713);
          T28 = CALL2(1,VARREF(YgooSmathYA),iF3714,YPint((P)1));
          a156_0 = T27;
          a156_1 = T28;
          lF3713 = a156_0;
          iF3714 = a156_1;
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
  P cF3719;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(port_, 0);
  LOOP_157: {
    T5 = CALL1(1,VARREF(YgooSioSportYget),port_);
    cF3719 = T5;
    T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3719);
    if (T1 != YPfalse) {
      T0 = cF3719;
    } else {
      T3 = CALL2(1,VARREF(YgooSlogYE),cF3719,YPchr((P)10));
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
  P probeF3722;
  P cF3721;
  P cF3720;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T10 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF3720 = T10;
  T7 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3720);
  if (T7 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_93));
    T6 = T8;
  } else {
    T9 = CALL1(1,VARREF(YgooSchrYto_lower),cF3720);
    T6 = T9;
  }
  cF3721 = T6;
  T5 = CALL2(1,VARREF(YgooScolsSlstYassq),cF3721,VARREF(YgooSioSreadYTsharp_macrosT));
  probeF3722 = T5;
  if (probeF3722 != YPfalse) {
    T3 = CALL1(1,VARREF(Ytail),probeF3722);
    T2 = CALL1(1,VARREF(Yhead),T3);
    T1 = CALL2(1,T2,cF3721,port_);
    T0 = T1;
  } else {
    T4 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_94),cF3721);
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
  P x_1444F3726;
  P x_1443F3725;
  P cF3724;
  P found_slashQF3723;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(port_, 0);
  found_slashQF3723 = YPfalse;
  LOOP_158: {
    P a158_0;
    T10 = CALL1(1,VARREF(YgooSioSportYget),port_);
    cF3724 = T10;
    T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3724);
    if (T1 != YPfalse) {
      T0 = cF3724;
    } else {
      x_1443F3725 = cF3724;
      x_1444F3726 = VARREF(YgooSmacrosYEE);
      T3 = CALL2(1,x_1444F3726,x_1443F3725,YPchr((P)47));
      if (T3 != YPfalse) {
        a158_0 = YPtrue;
        found_slashQF3723 = a158_0;
        goto LOOP_158;
        T2 = T4;
      } else {
        T6 = CALL2(1,x_1444F3726,x_1443F3725,YPchr((P)35));
        if (T6 != YPfalse) {
          if (found_slashQF3723 != YPfalse) {
            T7 = YPfalse;
          } else {
            a158_0 = YPfalse;
            found_slashQF3723 = a158_0;
            goto LOOP_158;
            T7 = T8;
          }
          T5 = T7;
        } else {
          a158_0 = YPfalse;
          found_slashQF3723 = a158_0;
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

FUNCODEDEF(YgooSioSreadYread_long_string_literal) {
  P c_,port_;
  P x_1446F3732;
  P x_1445F3731;
  P cF3730;
  P qQF3729;
  P iF3728;
  P lF3727;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
  lF3727 = Ynil;
  iF3728 = YPint((P)0);
  qQF3729 = YPfalse;
  LOOP_159: {
    P a159_0,a159_1,a159_2;
    T20 = CALL1(1,VARREF(YgooSioSportYget),port_);
    cF3730 = T20;
    T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3730);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_103));
      T0 = T2;
    } else {
      x_1445F3731 = cF3730;
      x_1446F3732 = VARREF(YgooSmacrosYEE);
      T4 = CALL2(1,x_1446F3732,x_1445F3731,YPchr((P)34));
      if (T4 != YPfalse) {
        T6 = CALL2(1,VARREF(YgooSmacrosYpair),cF3730,lF3727);
        T7 = CALL2(1,VARREF(YgooSmathYA),iF3728,YPint((P)1));
        a159_0 = T6;
        a159_1 = T7;
        a159_2 = YPtrue;
        lF3727 = a159_0;
        iF3728 = a159_1;
        qQF3729 = a159_2;
        goto LOOP_159;
        T3 = T5;
      } else {
        T9 = CALL2(1,x_1446F3732,x_1445F3731,YPchr((P)35));
        if (T9 != YPfalse) {
          if (qQF3729 != YPfalse) {
            T12 = CALL1(1,VARREF(Ytail),lF3727);
            T13 = CALL2(1,VARREF(YgooSmathY_),iF3728,YPint((P)1));
            T11 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),T12,T13);
            T10 = T11;
          } else {
            T15 = CALL2(1,VARREF(YgooSmacrosYpair),cF3730,lF3727);
            T16 = CALL2(1,VARREF(YgooSmathYA),iF3728,YPint((P)1));
            a159_0 = T15;
            a159_1 = T16;
            a159_2 = YPfalse;
            lF3727 = a159_0;
            iF3728 = a159_1;
            qQF3729 = a159_2;
            goto LOOP_159;
            T10 = T14;
          }
          T8 = T10;
        } else {
          T18 = CALL2(1,VARREF(YgooSmacrosYpair),cF3730,lF3727);
          T19 = CALL2(1,VARREF(YgooSmathYA),iF3728,YPint((P)1));
          a159_0 = T18;
          a159_1 = T19;
          a159_2 = YPfalse;
          lF3727 = a159_0;
          iF3728 = a159_1;
          qQF3729 = a159_2;
          goto LOOP_159;
          T8 = T17;
        }
        T3 = T8;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_parse_c_inline_44) {
  P s_;
  P valF3741;
  P tmpF3740;
  P x_1448F3739;
  P x_1447F3738;
  P cF3737;
  P resF3736;
  P strF3735;
  P bufF3734;
  P portF3733;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
LINK_STACK();
  ARG(s_, 0);
  T26 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_in_portG),s_);
  portF3733 = T26;
  T25 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  bufF3734 = T25;
  strF3735 = Ynil;
  resF3736 = Ynil;
  LOOP_160: {
    P a160_0,a160_1;
    T24 = CALL1(1,VARREF(YgooSioSportYget),portF3733);
    cF3737 = T24;
    T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3737);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooSmacrosYrevX),strF3735);
      T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T5);
      T3 = CALL2(1,VARREF(YgooScolsScolYadd),resF3736,T4);
      T2 = CALL1(1,VARREF(YgooSmacrosYrevX),T3);
      T0 = T2;
    } else {
      x_1447F3738 = cF3737;
      x_1448F3739 = VARREF(YgooSmacrosYEE);
      T9 = CALL2(0,x_1448F3739,x_1447F3738,YPchr((P)36));
      tmpF3740 = T9;
      if (tmpF3740 != YPfalse) {
        T7 = tmpF3740;
      } else {
        T8 = CALL2(0,x_1448F3739,x_1447F3738,YPchr((P)64));
        T7 = T8;
      }
      if (T7 != YPfalse) {
        T16 = CALL2(1,VARREF(YgooSlogYE),cF3737,YPchr((P)36));
        if (T16 != YPfalse) {
          T17 = CALL1(1,VARREF(YgooSconditionsYread),portF3733);
          T15 = T17;
        } else {
          T19 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
          T21 = CALL1(1,VARREF(YgooSconditionsYread),portF3733);
          T20 = CALL1(1,VARREF(Ylst),T21);
          T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_61));
          T15 = T18;
        }
        valF3741 = T15;
        T14 = CALL1(1,VARREF(YgooSmacrosYrevX),strF3735);
        T13 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T14);
        T12 = CALL2(1,VARREF(YgooScolsScolYadd),resF3736,T13);
        T11 = CALL2(1,VARREF(YgooScolsScolYadd),T12,valF3741);
        a160_0 = Ynil;
        a160_1 = T11;
        strF3735 = a160_0;
        resF3736 = a160_1;
        goto LOOP_160;
        T6 = T10;
      } else {
        T23 = CALL2(1,VARREF(YgooScolsScolYadd),strF3735,cF3737);
        a160_0 = T23;
        a160_1 = resF3736;
        strF3735 = a160_0;
        resF3736 = a160_1;
        goto LOOP_160;
        T6 = T22;
      }
      T0 = T6;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYread_c_inline_literal) {
  P start_,end_,form_,port_;
  P x_1450F3747;
  P x_1449F3746;
  P cF3745;
  P dF3744;
  P iF3743;
  P lF3742;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(start_, 0);
  ARG(end_, 1);
  ARG(form_, 2);
  ARG(port_, 3);
  CALL1(1,VARREF(YgooSioSportYget),port_);
  lF3742 = Ynil;
  iF3743 = YPint((P)0);
  dF3744 = YPint((P)1);
  LOOP_161: {
    P a161_0,a161_1,a161_2;
    T24 = CALL1(1,VARREF(YgooSioSportYget),port_);
    cF3745 = T24;
    T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3745);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_109));
      T0 = T2;
    } else {
      x_1449F3746 = cF3745;
      x_1450F3747 = VARREF(YgooSmacrosYEE);
      T4 = CALL2(1,x_1450F3747,x_1449F3746,start_);
      if (T4 != YPfalse) {
        T6 = CALL2(1,VARREF(YgooSmacrosYpair),cF3745,lF3742);
        T7 = CALL2(1,VARREF(YgooSmathYA),iF3743,YPint((P)1));
        T8 = CALL2(1,VARREF(YgooSmathYA),dF3744,YPint((P)1));
        a161_0 = T6;
        a161_1 = T7;
        a161_2 = T8;
        lF3742 = a161_0;
        iF3743 = a161_1;
        dF3744 = a161_2;
        goto LOOP_161;
        T3 = T5;
      } else {
        T10 = CALL2(1,x_1450F3747,x_1449F3746,end_);
        if (T10 != YPfalse) {
          T12 = CALL2(1,VARREF(YgooSlogYE),dF3744,YPint((P)1));
          if (T12 != YPfalse) {
            T14 = CALL1(1,VARREF(Ylst),form_);
            T16 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),lF3742,iF3743);
            T15 = CALL1(1,VARREF(YgooSioSreadYparse_c_inline),T16);
            T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_61));
            T11 = T13;
          } else {
            T18 = CALL2(1,VARREF(YgooSmacrosYpair),cF3745,lF3742);
            T19 = CALL2(1,VARREF(YgooSmathYA),iF3743,YPint((P)1));
            T20 = CALL2(1,VARREF(YgooSmathY_),dF3744,YPint((P)1));
            a161_0 = T18;
            a161_1 = T19;
            a161_2 = T20;
            lF3742 = a161_0;
            iF3743 = a161_1;
            dF3744 = a161_2;
            goto LOOP_161;
            T11 = T17;
          }
          T9 = T11;
        } else {
          T22 = CALL2(1,VARREF(YgooSmacrosYpair),cF3745,lF3742);
          T23 = CALL2(1,VARREF(YgooSmathYA),iF3743,YPint((P)1));
          a161_0 = T22;
          a161_1 = T23;
          a161_2 = dF3744;
          lF3742 = a161_0;
          iF3743 = a161_1;
          dF3744 = a161_2;
          goto LOOP_161;
          T9 = T21;
        }
        T3 = T9;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYread_c_statement_literal) {
  P c_,port_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T0 = CALL4(1,VARREF(YgooSioSreadYread_c_inline_literal),YPchr((P)123),YPchr((P)125),LITREF(lit_112),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYread_c_expression_literal) {
  P ce_,port_;
  P inlineF3749;
  P cF3748;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(ce_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T8 = CALL1(1,VARREF(YgooSioSportYget),port_);
  cF3748 = T8;
  T7 = CALL4(1,VARREF(YgooSioSreadYread_c_inline_literal),YPchr((P)123),YPchr((P)125),LITREF(lit_115),port_);
  inlineF3749 = T7;
  T1 = CALL2(1,VARREF(YgooSlogYE),cF3748,YPchr((P)103));
  if (T1 != YPfalse) {
    T0 = inlineF3749;
  } else {
    T5 = CALL2(1,VARREF(YgooSchrYfabs),VARREF(YLstrG),cF3748);
    T4 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_116),T5,LITREF(lit_117));
    T3 = CALL1(1,VARREF(Ylst),T4);
    T6 = CALL1(1,VARREF(Ylst),inlineF3749);
    T2 = CALL3(1,VARREF(YgooSmacrosYcat),T3,T6,LITREF(lit_61));
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_48) {
  P c_,port_;
  P tempF3752;
  P nameF3751;
  P cF3750;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T16 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF3750 = T16;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3750);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_120));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooSchrYalphaQ),cF3750);
    if (T4 != YPfalse) {
      T14 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
      nameF3751 = T14;
      T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF3751);
      T7 = CALL1(1,VARREF(YgooStypesYlen),T8);
      T6 = CALL2(1,VARREF(YgooSlogYE),T7,YPint((P)1));
      if (T6 != YPfalse) {
        T5 = cF3750;
      } else {
        T13 = CALL2(1,VARREF(YgooScolsSlstYassq),nameF3751,VARREF(YgooSioSreadYDchar_long_names));
        tempF3752 = T13;
        if (tempF3752 != YPfalse) {
          T11 = CALL1(1,VARREF(Ytail),tempF3752);
          T10 = CALL1(1,VARREF(Yhead),T11);
          T9 = T10;
        } else {
          T12 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_121),nameF3751);
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

LOCCODEDEF(fun_49) {
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

LOCCODEDEF(fun_50) {
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

LOCCODEDEF(fun_51) {
  P c_,port_;
  P tmpF3754;
  P stringF3753;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T3 = CALL2(1,VARREF(YgooSioSreadYsub_read_token),YPchr((P)35),port_);
  stringF3753 = T3;
  T2 = CALL1(1,VARREF(YgooScolsSstrYstr_to_num),stringF3753);
  tmpF3754 = T2;
  if (tmpF3754 != YPfalse) {
    T0 = tmpF3754;
  } else {
    T1 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_125),stringF3753);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_52) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),c_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sub_read_token_53) {
  P c_,port_;
  P tmpF3758;
  P cF3757;
  P nF3756;
  P lF3755;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T13 = CALL1(1,VARREF(YgooSioSreadYpreferred_case),c_);
  T12 = CALL1(1,VARREF(Ylst),T13);
  lF3755 = T12;
  nF3756 = YPint((P)1);
  LOOP_162: {
    P a162_0,a162_1;
    T11 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
    cF3757 = T11;
    T4 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3757);
    tmpF3758 = T4;
    if (tmpF3758 != YPfalse) {
      T1 = tmpF3758;
    } else {
      T3 = CALL1(1,VARREF(YgooSchrYchar_Gascii),cF3757);
      T2 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_terminatingQ_vectorT),T3);
      T1 = T2;
    }
    if (T1 != YPfalse) {
      T5 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),lF3755,nF3756);
      T0 = T5;
    } else {
      T9 = CALL1(1,VARREF(YgooSioSportYget),port_);
      T8 = CALL1(1,VARREF(YgooSioSreadYpreferred_case),T9);
      T7 = CALL2(1,VARREF(YgooSmacrosYpair),T8,lF3755);
      T10 = CALL2(1,VARREF(YgooSmathYA),nF3756,YPint((P)1));
      a162_0 = T7;
      a162_1 = T10;
      lF3755 = a162_0;
      nF3756 = a162_1;
      goto LOOP_162;
      T0 = T6;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_54) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSlogYE),FREEREF(0),x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_parse_token_55) {
  P string_,port_;
  P maybe_numberF3763;
  P tmpF3762;
  P tmpF3761;
  P tmpF3760;
  P cF3759;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(string_, 0);
  ARG(port_, 1);
  T8 = CALL2(1,VARREF(YgooSmacrosYelt),string_,YPint((P)0));
  cF3759 = T8;
  T7 = CALL1(1,VARREF(YgooSchrYdigitQ),cF3759);
  tmpF3760 = T7;
  if (tmpF3760 != YPfalse) {
    T1 = tmpF3760;
  } else {
    T6 = CALL2(1,VARREF(YgooSlogYE),cF3759,YPchr((P)43));
    tmpF3761 = T6;
    if (tmpF3761 != YPfalse) {
      T2 = tmpF3761;
    } else {
      T5 = CALL2(1,VARREF(YgooSlogYE),cF3759,YPchr((P)45));
      tmpF3762 = T5;
      if (tmpF3762 != YPfalse) {
        T3 = tmpF3762;
      } else {
        T4 = CALL2(1,VARREF(YgooSlogYE),cF3759,YPchr((P)46));
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T18 = CALL1(1,VARREF(YgooScolsSstrYstr_to_num),string_);
    maybe_numberF3763 = T18;
    if (maybe_numberF3763 != YPfalse) {
      T9 = maybe_numberF3763;
    } else {
      T12 = FUNFAB(fun_54,1,string_);
      T11 = CALL2(1,VARREF(YgooStypesYanyQ),T12,VARREF(YgooSioSreadYDstrange_symbol_names));
      if (T11 != YPfalse) {
        T13 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),string_);
        T10 = T13;
      } else {
        T15 = CALL2(1,VARREF(YgooSlogYE),string_,LITREF(lit_133));
        if (T15 != YPfalse) {
          T16 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),string_);
          T14 = T16;
        } else {
          T17 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_134),string_);
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

LOCCODEDEF(fun_reading_error_56) {
  P port_,message_,irritants_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(irritants_, 2);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),message_,LITREF(lit_139));
  T3 = CALL1(1,VARREF(Ylst),port_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),irritants_,T3);
  T0 = CALL2(1,VARREF(Yerror),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_warn_57) {
  P string_,irritants_and_port_;
LINK_STACK();
  ARG(string_, 0);
  NARGS(irritants_and_port_, 1);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_reverse_list_Gstring_58) {
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
  P str10496F3765;
  P sub_read_whitespaceF3764;
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
  sub_read_whitespaceF3764 = T49;
  T48 = FUNFAB(fun_12,1,sub_read_whitespaceF3764);
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
  str10496F3765 = T59;
  T58 = fun_16;
  T57 = XCALL2(1,VARREF(YgooSmacrosYdo),T58,str10496F3765);
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
  P number_sharp_macroF3767;
  P vecF3766;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89;
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
  vecF3766 = T15;
  T10 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)116));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)9),vecF3766,T10);
  T11 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)102));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)12),vecF3766,T11);
  T12 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)114));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)13),vecF3766,T12);
  T13 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)110));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)10),vecF3766,T13);
  T14 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF3766);
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
  lit_101 = YPPsym((P)"read-long-string-literal");
  lit_102 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_103 = YPsb((P)"end of file within a long string");
  T41 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_long_string_literal = YPfab_met(FUNCODEREF(YgooSioSreadYread_long_string_literal),T41,LITREF(lit_101),LITREF(lit_102),sloc(290),YPfalse);
  T42 = YgooSioSreadYread_long_string_literal;
  VARSET(YgooSioSreadYread_long_string_literal,T42);
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)34),VARREF(YgooSioSreadYread_long_string_literal));
  lit_104 = YPPsym((P)"parse-c-inline");
  lit_105 = YPPlist(1,YPPsym((P)"s"));
  lit_106 = YPPsym((P)"to-c");
  T43 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_parse_c_inline_44 = YPfab_met(FUNCODEREF(fun_parse_c_inline_44),T43,LITREF(lit_104),LITREF(lit_105),sloc(304),YPfalse);
  T45 = VARREF_OR(YgooSioSreadYparse_c_inline,YPfalse);
  T46 = fun_parse_c_inline_44;
  T44 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T45,T46);
  VARSET(YgooSioSreadYparse_c_inline,T44);
  lit_107 = YPPsym((P)"read-c-inline-literal");
  lit_108 = YPPlist(4,YPPsym((P)"start"),YPPsym((P)"end"),YPPsym((P)"form"),YPPsym((P)"port"));
  lit_109 = YPsb((P)"end of file within c-inline");
  T47 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_c_inline_literal = YPfab_met(FUNCODEREF(YgooSioSreadYread_c_inline_literal),T47,LITREF(lit_107),LITREF(lit_108),sloc(318),YPfalse);
  T48 = YgooSioSreadYread_c_inline_literal;
  VARSET(YgooSioSreadYread_c_inline_literal,T48);
  lit_110 = YPPsym((P)"read-c-statement-literal");
  lit_111 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_112 = YPPsym((P)"c-ment");
  T49 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_c_statement_literal = YPfab_met(FUNCODEREF(YgooSioSreadYread_c_statement_literal),T49,LITREF(lit_110),LITREF(lit_111),sloc(331),YPfalse);
  T50 = YgooSioSreadYread_c_statement_literal;
  VARSET(YgooSioSreadYread_c_statement_literal,T50);
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)123),VARREF(YgooSioSreadYread_c_statement_literal));
  lit_113 = YPPsym((P)"read-c-expression-literal");
  lit_114 = YPPlist(2,YPPsym((P)"ce"),YPPsym((P)"port"));
  lit_115 = YPPsym((P)"c-expr");
  lit_116 = YPPsym((P)"%");
  lit_117 = YPPsym((P)"b");
  T51 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_c_expression_literal = YPfab_met(FUNCODEREF(YgooSioSreadYread_c_expression_literal),T51,LITREF(lit_113),LITREF(lit_114),sloc(336),YPfalse);
  T52 = YgooSioSreadYread_c_expression_literal;
  VARSET(YgooSioSreadYread_c_expression_literal,T52);
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)101),VARREF(YgooSioSreadYread_c_expression_literal));
  lit_118 = YPPlist(5,YPPlist(2,YPPsym((P)"tab"),YPchr((P)9)),YPPlist(2,YPPsym((P)"page"),YPchr((P)12)),YPPlist(2,YPPsym((P)"return"),YPchr((P)13)),YPPlist(2,YPPsym((P)"newline"),YPchr((P)10)),YPPlist(2,YPPsym((P)"space"),YPchr((P)32)));
  VARSET(YgooSioSreadYDchar_long_names,LITREF(lit_118));
  lit_119 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_120 = YPsb((P)"end of file after #\\");
  lit_121 = YPsb((P)"unknown #\\ name");
  T53 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_48 = YPfab_met(FUNCODEREF(fun_48),T53,YPfalse,LITREF(lit_119),sloc(355),YPfalse);
  T54 = fun_48;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)92),T54);
  lit_122 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T55 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_49 = YPfab_met(FUNCODEREF(fun_49),T55,YPfalse,LITREF(lit_122),sloc(372),YPfalse);
  T56 = fun_49;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)40),T56);
  lit_123 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T57 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_50 = YPfab_met(FUNCODEREF(fun_50),T57,YPfalse,LITREF(lit_123),sloc(378),YPfalse);
  T58 = fun_50;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)91),T58);
  lit_124 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_125 = YPsb((P)"unsupported number syntax");
  lit_126 = YPPlist(1,YPPsym((P)"c"));
  lit_127 = YPPlist(4,YPchr((P)98),YPchr((P)111),YPchr((P)100),YPchr((P)120));
  T60 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_51 = YPfab_met(FUNCODEREF(fun_51),T60,YPfalse,LITREF(lit_124),sloc(383),YPfalse);
  T59 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPfab_met(FUNCODEREF(fun_52),T59,YPfalse,LITREF(lit_126),sloc(387),YPfalse);
  T63 = fun_51;
  number_sharp_macroF3767 = T63;
  T62 = FUNFAB(fun_52,1,number_sharp_macroF3767);
  T61 = XCALL2(1,VARREF(YgooSmacrosYdo),T62,LITREF(lit_127));
  lit_128 = YPPsym((P)"sub-read-token");
  lit_129 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T64 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_token_53 = YPfab_met(FUNCODEREF(fun_sub_read_token_53),T64,LITREF(lit_128),LITREF(lit_129),sloc(392),YPfalse);
  T66 = VARREF_OR(YgooSioSreadYsub_read_token,YPfalse);
  T67 = fun_sub_read_token_53;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooSioSreadYsub_read_token,T65);
  lit_130 = YPPsym((P)"parse-token");
  lit_131 = YPPlist(2,YPPsym((P)"string"),YPPsym((P)"port"));
  lit_132 = YPPlist(1,YPPsym((P)"x"));
  lit_133 = YPsb((P)".");
  lit_134 = YPsb((P)"unsupported number syntax");
  T69 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPfab_met(FUNCODEREF(fun_54),T69,YPfalse,LITREF(lit_132),sloc(413),YPfalse);
  T68 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_token_55 = YPfab_met(FUNCODEREF(fun_parse_token_55),T68,LITREF(lit_130),LITREF(lit_131),sloc(403),YPfalse);
  T71 = VARREF_OR(YgooSioSreadYparse_token,YPfalse);
  T72 = fun_parse_token_55;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YgooSioSreadYparse_token,T70);
  lit_135 = YPPlist(9,YPsb((P)"+"),YPsb((P)"-"),YPsb((P)"..."),YPsb((P)"1st"),YPsb((P)"2nd"),YPsb((P)"3rd"),YPsb((P)"1+"),YPsb((P)"1-"),YPsb((P)"->"));
  VARSET(YgooSioSreadYDstrange_symbol_names,LITREF(lit_135));
  lit_136 = YPPsym((P)"t");
  T76 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),LITREF(lit_136));
  T75 = XCALL2(1,VARREF(YgooSmacrosYelt),T76,YPint((P)0));
  T74 = XCALL2(1,VARREF(YgooSlogYE),T75,YPchr((P)84));
  if (T74 != YPfalse) {
    T73 = VARREF(YgooSchrYto_upper);
  } else {
    T73 = VARREF(YgooSchrYto_lower);
  }
  VARSET(YgooSioSreadYpreferred_case,T73);
  lit_137 = YPPsym((P)"reading-error");
  lit_138 = YPPlist(3,YPPsym((P)"port"),YPPsym((P)"message"),YPPsym((P)"irritants"));
  lit_139 = YPsb((P)": %=");
  T77 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLportG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reading_error_56 = YPfab_met(FUNCODEREF(fun_reading_error_56),T77,LITREF(lit_137),LITREF(lit_138),sloc(440),YPfalse);
  T79 = VARREF_OR(YgooSioSreadYreading_error,YPfalse);
  T80 = fun_reading_error_56;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YgooSioSreadYreading_error,T78);
  lit_140 = YPPsym((P)"warn");
  lit_141 = YPPlist(2,YPPsym((P)"string"),YPPsym((P)"irritants-and-port"));
  T81 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_warn_57 = YPfab_met(FUNCODEREF(fun_warn_57),T81,LITREF(lit_140),LITREF(lit_141),sloc(444),YPfalse);
  T83 = VARREF_OR(YgooSioSreadYwarn,YPfalse);
  T84 = fun_warn_57;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YgooSioSreadYwarn,T82);
  lit_142 = YPPsym((P)"reverse-list->string");
  lit_143 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"n"));
  T85 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_reverse_list_Gstring_58 = YPfab_met(FUNCODEREF(fun_reverse_list_Gstring_58),T85,LITREF(lit_142),LITREF(lit_143),sloc(452),YPfalse);
  T87 = VARREF_OR(YgooSioSreadYreverse_list_Gstring,YPfalse);
  T88 = fun_reverse_list_Gstring_58;
  T86 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T87,T88);
  VARSET(YgooSioSreadYreverse_list_Gstring,T86);
  T89 = YPfalse;
  return T89;
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
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSvec;
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
  {"fold+", &module_info_gooScolsScol, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"as-log", &module_info_gooSlog, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"default-handler-description", &module_info_gooSconditions, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"lst*", &module_info_gooScolsSlst, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"eof-object", &module_info_gooSchr, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"c-expr", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"exp", &module_info_gooSmath, NULL},
  {"%bu", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"choose-handler", &module_info_gooSconditions, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"*current-handlers*", &module_info_gooSconditions, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"port-filename", &module_info_gooSioSport, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"port-line-setter", &module_info_gooSioSport, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSchr, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"describe-handler", &module_info_gooSconditions, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"round-to", &module_info_gooSmath, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"c-ment", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"build-condition-interactively", &module_info_gooSconditions, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"list-handlers", &module_info_gooSconditions, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"port-index-setter", &module_info_gooSioSport, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"port-handle", &module_info_gooSioSport, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sub-read", CVAR, &YgooSioSreadYsub_read},
  {"set-standard-read-macro!", CVAR, &YgooSioSreadYset_standard_read_macroX},
  {"$char-long-names", CVAR, &YgooSioSreadYDchar_long_names},
  {"set-standard-syntax!", CVAR, &YgooSioSreadYset_standard_syntaxX},
  {"read-from-string", CVAR, &YgooSioSreadYread_from_string},
  {"read-delimited-list", CVAR, &YgooSioSreadYread_delimited_list},
  {"token-message", CVAR, &YgooSioSreadYtoken_message},
  {"$vert-sym", CVAR, &YgooSioSreadYDvert_sym},
  {"reading-error", CVAR, &YgooSioSreadYreading_error},
  {"bs-sym", CVAR, &YgooSioSreadYbs_sym},
  {"sub-read-curlies", CVAR, &YgooSioSreadYsub_read_curlies},
  {"*sharp-macros*", CVAR, &YgooSioSreadYTsharp_macrosT},
  {"$strange-symbol-names", CVAR, &YgooSioSreadYDstrange_symbol_names},
  {"flush-whitespace", CVAR, &YgooSioSreadYflush_whitespace},
  {"parse-token", CVAR, &YgooSioSreadYparse_token},
  {"preferred-case", CVAR, &YgooSioSreadYpreferred_case},
  {"reverse-list->string", CVAR, &YgooSioSreadYreverse_list_Gstring},
  {"gobble-nested-comment", CVAR, &YgooSioSreadYgobble_nested_comment},
  {"read-long-string-literal", CVAR, &YgooSioSreadYread_long_string_literal},
  {"read-c-inline-literal", CVAR, &YgooSioSreadYread_c_inline_literal},
  {"read-c-expression-literal", CVAR, &YgooSioSreadYread_c_expression_literal},
  {"read-string-literal", CVAR, &YgooSioSreadYread_string_literal},
  {"sub-read-list-eof-error", CVAR, &YgooSioSreadYsub_read_list_eof_error},
  {"sub-read-list", CVAR, &YgooSioSreadYsub_read_list},
  {"reader-token?", CVAR, &YgooSioSreadYreader_tokenQ},
  {"<reader-token>", CVAR, &YgooSioSreadYLreader_tokenG},
  {"sub-read-vertical", CVAR, &YgooSioSreadYsub_read_vertical},
  {"---main-1---", PVAR, NULL},
  {"*read-dispatch-vector*", CVAR, &YgooSioSreadYTread_dispatch_vectorT},
  {"$close-bracket", CVAR, &YgooSioSreadYDclose_bracket},
  {"$string-escape-chars", CVAR, &YgooSioSreadYDstring_escape_chars},
  {"gobble-line", CVAR, &YgooSioSreadYgobble_line},
  {"parse-c-inline", CVAR, &YgooSioSreadYparse_c_inline},
  {"$close-paren", CVAR, &YgooSioSreadYDclose_paren},
  {"sub-read-token", CVAR, &YgooSioSreadYsub_read_token},
  {"$vert-proxy", CVAR, &YgooSioSreadYDvert_proxy},
  {"sub-read-brackets", CVAR, &YgooSioSreadYsub_read_brackets},
  {"*read-terminating?-vector*", CVAR, &YgooSioSreadYTread_terminatingQ_vectorT},
  {"get-standard-read-macro", CVAR, &YgooSioSreadYget_standard_read_macro},
  {"warn", CVAR, &YgooSioSreadYwarn},
  {"make-reader-token", CVAR, &YgooSioSreadYmake_reader_token},
  {"---main-0---", PVAR, NULL},
  {"$close-curly", CVAR, &YgooSioSreadYDclose_curly},
  {"sub-read-backslash", CVAR, &YgooSioSreadYsub_read_backslash},
  {"sub-read-carefully", CVAR, &YgooSioSreadYsub_read_carefully},
  {"read-c-statement-literal", CVAR, &YgooSioSreadYread_c_statement_literal},
  {"sub-read-constituent", CVAR, &YgooSioSreadYsub_read_constituent},
  {"define-sharp-macro", CVAR, &YgooSioSreadYdefine_sharp_macro},
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
