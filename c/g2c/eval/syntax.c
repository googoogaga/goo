/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/syntax");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/syntax */

DEF(YevalSsyntaxYsexpr_monitorQ,"eval/syntax","sexpr-monitor?");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
DEF(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(Ytup,"goo/boot","tup");
DEF(YevalSsyntaxYsexpr_iterate_signature,"eval/syntax","sexpr-iterate-signature");
DEF(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
DEF(YevalSsyntaxYTbq_clobberableT,"eval/syntax","*bq-clobberable*");
EXT(YgooSmathYS,"goo/math","/");
DEF(YevalSsyntaxYsexpr_method_value,"eval/syntax","sexpr-method-value");
DEF(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
DEF(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
DEF(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YgooSmathYN,"goo/math","~");
DEF(YevalSsyntaxYsexpr_syntax_definitionQ,"eval/syntax","sexpr-syntax-definition?");
DEF(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YOelt,"goo/boot","@elt");
DEF(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
DEF(YevalSsyntaxYsexpr_function_definitionQ,"eval/syntax","sexpr-function-definition?");
DEF(YevalSsyntaxYsexpr_propQ,"eval/syntax","sexpr-prop?");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YLstrG,"goo/boot","<str>");
DEF(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
DEF(YevalSsyntaxYTbq_appendT,"eval/syntax","*bq-append*");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
DEF(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YgooSmathYmodA,"goo/math","mod+");
DEF(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
DEF(YevalSsyntaxYsexpr_define_constantQ,"eval/syntax","sexpr-define-constant?");
DEF(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
DEF(YevalSsyntaxYsexpr_make_syntax_if,"eval/syntax","sexpr-make-syntax-if");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
DEF(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
DEF(YevalSsyntaxYas_signature,"eval/syntax","as-signature");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
DEF(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
DEF(YevalSsyntaxYsexpr_beginQ,"eval/syntax","sexpr-begin?");
EXT(YgooSmathYT,"goo/math","*");
DEF(YevalSsyntaxYDsexpr_propX_tag,"eval/syntax","$sexpr-prop!-tag");
DEF(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
DEF(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yerror,"goo/boot","error");
DEF(YevalSsyntaxYsexpr_method_definitionQ,"eval/syntax","sexpr-method-definition?");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YevalSsyntaxYmap_tree,"eval/syntax","map-tree");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Yfun_env,"goo/boot","fun-env");
DEF(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
DEF(YevalSsyntaxYsexpr_rest_exps,"eval/syntax","sexpr-rest-exps");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YOdel_dups,"goo/boot","@del-dups");
DEF(YevalSsyntaxYsexpr_make_quote,"eval/syntax","sexpr-make-quote");
DEF(YevalSsyntaxYsexpr_propXQ,"eval/syntax","sexpr-prop!?");
EXT(YgooSioSportYopen,"goo/io/port","open");
DEF(YevalSsyntaxYTunique_name_counterT,"eval/syntax","*unique-name-counter*");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSlogYNE,"goo/log","~=");
DEF(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
DEF(YevalSsyntaxYsexpr_quotedQ,"eval/syntax","sexpr-quoted?");
DEF(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
DEF(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
DEF(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
DEF(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YgooSmathYC,"goo/math","^");
DEF(YevalSsyntaxYLnameG,"eval/syntax","<name>");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
DEF(YevalSsyntaxYsexpr_pattern_variable_name,"eval/syntax","sexpr-pattern-variable-name");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
DEF(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YOdo,"goo/boot","@do");
DEF(YevalSsyntaxYsexpr_macro_expandQ,"eval/syntax","sexpr-macro-expand?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
DEF(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
DEF(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
DEF(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
DEF(YevalSsyntaxYsexpr_backquoteQ,"eval/syntax","sexpr-backquote?");
DEF(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooStypesYtE,"goo/types","t=");
DEF(YevalSsyntaxYDsexpr_values_tag,"eval/syntax","$sexpr-values-tag");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
DEF(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YgooSmathYK,"goo/math","|");
DEF(YevalSsyntaxYTbq_listTT,"eval/syntax","*bq-list**");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
DEF(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(Ytype_error,"goo/boot","type-error");
DEF(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
DEF(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YLboxG,"goo/boot","<box>");
DEF(YevalSsyntaxYbracket,"eval/syntax","bracket");
EXT(YOallQ,"goo/boot","@all?");
DEF(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
DEF(YevalSsyntaxYsexpr_let_bound_variables,"eval/syntax","sexpr-let-bound-variables");
DEF(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
DEF(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YtT,"goo/boot","t*");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YLcolG,"goo/boot","<col>");
EXT(YDmax_int,"goo/boot","$max-int");
DEF(YevalSsyntaxYsexpr_monitor_body,"eval/syntax","sexpr-monitor-body");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YOpick,"goo/boot","@pick");
DEF(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
DEF(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
DEF(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
DEF(YevalSsyntaxYfind_option,"eval/syntax","find-option");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
DEF(YevalSsyntaxYsexpr_pattern_variableQ,"eval/syntax","sexpr-pattern-variable?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
DEF(YevalSsyntaxYTbq_nconcT,"eval/syntax","*bq-nconc*");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
DEF(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
DEF(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
DEF(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(YevalSsyntaxYsexpr_let_namesAvalues,"eval/syntax","sexpr-let-names+values");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
DEF(YevalSsyntaxYTbq_listT,"eval/syntax","*bq-list*");
DEF(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
DEF(YevalSsyntaxYDsexpr_define_constant_tag,"eval/syntax","$sexpr-define-constant-tag");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
DEF(YevalSsyntaxYsexpr_iterate_body,"eval/syntax","sexpr-iterate-body");
EXT(YPfalse,"goo/boot","%false");
DEF(YevalSsyntaxYsexpr_applicationQ,"eval/syntax","sexpr-application?");
DEF(YevalSsyntaxYTbq_quoteT,"eval/syntax","*bq-quote*");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
DEF(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yclass_forward,"goo/boot","class-forward");
DEF(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
DEF(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
DEF(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
DEF(YevalSsyntaxYsexpr_blockQ,"eval/syntax","sexpr-block?");
EXT(YgooSmathYA,"goo/math","+");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
DEF(YevalSsyntaxYsexpr_atomQ,"eval/syntax","sexpr-atom?");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
DEF(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YOmap,"goo/boot","@map");
DEF(YevalSsyntaxYsexpr_method_parameters,"eval/syntax","sexpr-method-parameters");
DEF(YevalSsyntaxYsexpr_monitor_info,"eval/syntax","sexpr-monitor-info");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
DEF(YevalSsyntaxYsexpr_first_operand,"eval/syntax","sexpr-first-operand");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YOnew,"goo/boot","@new");
EXT(Yfun_info,"goo/boot","fun-info");
DEF(YevalSsyntaxYsexpr_unique_name,"eval/syntax","sexpr-unique-name");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
DEF(YevalSsyntaxYsexpr_iterate_name,"eval/syntax","sexpr-iterate-name");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
DEF(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
DEF(YevalSsyntaxYsexpr_assignmentQ,"eval/syntax","sexpr-assignment?");
EXT(Ynot,"goo/boot","not");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
DEF(YevalSsyntaxYsexpr_function_value,"eval/syntax","sexpr-function-value");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
DEF(YevalSsyntaxYsexpr_tagged_listQ,"eval/syntax","sexpr-tagged-list?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(Yapp_args,"goo/boot","app-args");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YLnumG,"goo/boot","<num>");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
DEF(YevalSsyntaxYsexpr_macroQ,"eval/syntax","sexpr-macro?");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
DEF(YevalSsyntaxYsexpr_iterateQ,"eval/syntax","sexpr-iterate?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
DEF(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
DEF(YevalSsyntaxYsexpr_syntax_ifQ,"eval/syntax","sexpr-syntax-if?");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
DEF(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
DEF(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
DEF(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
DEF(YevalSsyntaxYbq_process,"eval/syntax","bq-process");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ynew,"goo/boot","new");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
DEF(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYtanh,"goo/math","tanh");
DEF(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
DEF(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YLunionG,"goo/boot","<union>");
DEF(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
DEF(YevalSsyntaxYsexpr_monitor_test,"eval/syntax","sexpr-monitor-test");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DEF(YevalSsyntaxYsexpr_new_unique_name_counterX,"eval/syntax","sexpr-new-unique-name-counter!");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
DEF(YevalSsyntaxYsexpr_let_body,"eval/syntax","sexpr-let-body");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
DEF(YevalSsyntaxYsexpr_value_type,"eval/syntax","sexpr-value-type");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
DEF(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
DEF(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YOOEE,"goo/boot","@@==");
DEF(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(YLsubclassG,"goo/boot","<subclass>");
DEF(YevalSsyntaxYsexpr_last_expQ,"eval/syntax","sexpr-last-exp?");
DEF(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
DEF(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(Yprop_offset,"goo/boot","prop-offset");
DEF(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
DEF(YevalSsyntaxYsexpr_locQ,"eval/syntax","sexpr-loc?");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSioSportYputs,"goo/io/port","puts");
DEF(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
DEF(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YevalSsyntaxYsexpr_function_parameters,"eval/syntax","sexpr-function-parameters");
DEF(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YOlst,"goo/boot","@lst");
DEF(YevalSsyntaxYsexpr_no_operandsQ,"eval/syntax","sexpr-no-operands?");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
DEF(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
DEF(YevalSsyntaxYsexpr_rest_operands,"eval/syntax","sexpr-rest-operands");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
DEF(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
DEF(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
DEF(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
DEF(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
DEF(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(Ylst,"goo/boot","lst");
DEF(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmagYmin,"goo/mag","min");
DEF(YevalSsyntaxYsexpr_unwind_protectQ,"eval/syntax","sexpr-unwind-protect?");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YPtnul,"goo/boot","%tnul");
DEF(YevalSsyntaxYsexpr_isaQ,"eval/syntax","sexpr-isa?");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
DEF(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYrem,"goo/math","rem");
DEF(YevalSsyntaxYsexpr_loc_body,"eval/syntax","sexpr-loc-body");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
DEF(YevalSsyntaxYTcomma_atsignT,"eval/syntax","*comma-atsign*");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YOfold,"goo/boot","@fold");
DEF(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
DEF(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
DEF(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
DEF(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSmathYcos,"goo/math","cos");
DEF(YevalSsyntaxYbq_remove_tokens,"eval/syntax","bq-remove-tokens");
DEF(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
DEF(YevalSsyntaxYsexpr_definitionQ,"eval/syntax","sexpr-definition?");
DEF(YevalSsyntaxYDsexpr_macro_tag,"eval/syntax","$sexpr-macro-tag");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSlogYE,"goo/log","=");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
DEF(YevalSsyntaxYsexpr_ifQ,"eval/syntax","sexpr-if?");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YPtrue,"goo/boot","%true");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
DEF(YevalSsyntaxYnreconc,"eval/syntax","nreconc");
EXT(YgooSmacrosYEE,"goo/macros","==");
DEF(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
DEF(YevalSsyntaxYsexpr_build_backquote_expander,"eval/syntax","sexpr-build-backquote-expander");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
DEF(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(Yclass_row,"goo/boot","class-row");
DEF(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Yhead_setter,"goo/boot","head-setter");
DEF(YevalSsyntaxYsexpr_monitor_type,"eval/syntax","sexpr-monitor-type");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
DEF(YevalSsyntaxYsexpr_let_values,"eval/syntax","sexpr-let-values");
DEF(YevalSsyntaxYsexpr_iterate_inits,"eval/syntax","sexpr-iterate-inits");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(YevalSsyntaxYsexpr_make_if,"eval/syntax","sexpr-make-if");
DEF(YevalSsyntaxYsexpr_generic_definitionQ,"eval/syntax","sexpr-generic-definition?");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
DEF(YevalSsyntaxYsexpr_letQ,"eval/syntax","sexpr-let?");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYround,"goo/math","round");
DEF(YevalSsyntaxYeval,"eval/syntax","eval");
DEF(YevalSsyntaxYsexpr_begin_actions,"eval/syntax","sexpr-begin-actions");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
DEF(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmathY_,"goo/math","-");
DEF(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
DEF(YevalSsyntaxYsexpr_methodQ,"eval/syntax","sexpr-method?");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
DEF(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmagYLE,"goo/mag","<=");
DEF(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
DEF(YevalSsyntaxYsexpr_first_exp,"eval/syntax","sexpr-first-exp");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSioSportYclose,"goo/io/port","close");
DEF(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(Yfun_mets,"goo/boot","fun-mets");
DEF(YevalSsyntaxYsexpr_self_evaluatingQ,"eval/syntax","sexpr-self-evaluating?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_38);
DEFLIT(lit_125);
DEFLIT(lit_365);
DEFLIT(lit_124);
DEFLIT(lit_9);
DEFLIT(lit_115);
DEFLIT(lit_251);
DEFLIT(lit_61);
DEFLIT(lit_30);
DEFLIT(lit_151);
DEFLIT(lit_250);
DEFLIT(lit_258);
DEFLIT(lit_104);
DEFLIT(lit_110);
DEFLIT(lit_39);
DEFLIT(lit_13);
DEFLIT(lit_62);
DEFLIT(lit_355);
DEFLIT(lit_205);
DEFLIT(lit_201);
DEFLIT(lit_44);
DEFLIT(lit_359);
DEFLIT(lit_367);
DEFLIT(lit_197);
DEFLIT(lit_323);
DEFLIT(lit_350);
DEFLIT(lit_242);
DEFLIT(lit_14);
DEFLIT(lit_28);
DEFLIT(lit_373);
DEFLIT(lit_31);
DEFLIT(lit_312);
DEFLIT(lit_160);
DEFLIT(lit_299);
DEFLIT(lit_72);
DEFLIT(lit_208);
DEFLIT(lit_238);
DEFLIT(lit_179);
DEFLIT(lit_345);
DEFLIT(lit_303);
DEFLIT(lit_222);
DEFLIT(lit_92);
DEFLIT(lit_123);
DEFLIT(lit_334);
DEFLIT(lit_191);
DEFLIT(lit_66);
DEFLIT(lit_333);
DEFLIT(lit_233);
DEFLIT(lit_170);
DEFLIT(lit_268);
DEFLIT(lit_158);
DEFLIT(lit_195);
DEFLIT(lit_358);
DEFLIT(lit_126);
DEFLIT(lit_133);
DEFLIT(lit_98);
DEFLIT(lit_50);
DEFLIT(lit_307);
DEFLIT(lit_293);
DEFLIT(lit_265);
DEFLIT(lit_269);
DEFLIT(lit_45);
DEFLIT(lit_17);
DEFLIT(lit_346);
DEFLIT(lit_83);
DEFLIT(lit_259);
DEFLIT(lit_178);
DEFLIT(lit_97);
DEFLIT(lit_279);
DEFLIT(lit_189);
DEFLIT(lit_139);
DEFLIT(lit_321);
DEFLIT(lit_74);
DEFLIT(lit_319);
DEFLIT(lit_142);
DEFLIT(lit_203);
DEFLIT(lit_7);
DEFLIT(lit_106);
DEFLIT(lit_252);
DEFLIT(lit_327);
DEFLIT(lit_369);
DEFLIT(lit_134);
DEFLIT(lit_48);
DEFLIT(lit_193);
DEFLIT(lit_325);
DEFLIT(lit_232);
DEFLIT(lit_366);
DEFLIT(lit_91);
DEFLIT(lit_310);
DEFLIT(lit_99);
DEFLIT(lit_140);
DEFLIT(lit_194);
DEFLIT(lit_186);
DEFLIT(lit_25);
DEFLIT(lit_302);
DEFLIT(lit_175);
DEFLIT(lit_309);
DEFLIT(lit_168);
DEFLIT(lit_372);
DEFLIT(lit_113);
DEFLIT(lit_59);
DEFLIT(lit_79);
DEFLIT(lit_75);
DEFLIT(lit_267);
DEFLIT(lit_306);
DEFLIT(lit_19);
DEFLIT(lit_165);
DEFLIT(lit_332);
DEFLIT(lit_71);
DEFLIT(lit_320);
DEFLIT(lit_54);
DEFLIT(lit_282);
DEFLIT(lit_284);
DEFLIT(lit_234);
DEFLIT(lit_202);
DEFLIT(lit_156);
DEFLIT(lit_304);
DEFLIT(lit_173);
DEFLIT(lit_128);
DEFLIT(lit_107);
DEFLIT(lit_351);
DEFLIT(lit_67);
DEFLIT(lit_36);
DEFLIT(lit_47);
DEFLIT(lit_117);
DEFLIT(lit_16);
DEFLIT(lit_221);
DEFLIT(lit_185);
DEFLIT(lit_344);
DEFLIT(lit_147);
DEFLIT(lit_80);
DEFLIT(lit_212);
DEFLIT(lit_296);
DEFLIT(lit_122);
DEFLIT(lit_70);
DEFLIT(lit_167);
DEFLIT(lit_266);
DEFLIT(lit_239);
DEFLIT(lit_135);
DEFLIT(lit_177);
DEFLIT(lit_249);
DEFLIT(lit_364);
DEFLIT(lit_356);
DEFLIT(lit_35);
DEFLIT(lit_5);
DEFLIT(lit_23);
DEFLIT(lit_210);
DEFLIT(lit_220);
DEFLIT(lit_152);
DEFLIT(lit_141);
DEFLIT(lit_340);
DEFLIT(lit_214);
DEFLIT(lit_40);
DEFLIT(lit_317);
DEFLIT(lit_109);
DEFLIT(lit_257);
DEFLIT(lit_184);
DEFLIT(lit_176);
DEFLIT(lit_275);
DEFLIT(lit_271);
DEFLIT(lit_131);
DEFLIT(lit_143);
DEFLIT(lit_111);
DEFLIT(lit_150);
DEFLIT(lit_274);
DEFLIT(lit_276);
DEFLIT(lit_305);
DEFLIT(lit_280);
DEFLIT(lit_12);
DEFLIT(lit_308);
DEFLIT(lit_298);
DEFLIT(lit_287);
DEFLIT(lit_6);
DEFLIT(lit_89);
DEFLIT(lit_144);
DEFLIT(lit_329);
DEFLIT(lit_192);
DEFLIT(lit_248);
DEFLIT(lit_200);
DEFLIT(lit_29);
DEFLIT(lit_68);
DEFLIT(lit_94);
DEFLIT(lit_311);
DEFLIT(lit_101);
DEFLIT(lit_57);
DEFLIT(lit_199);
DEFLIT(lit_316);
DEFLIT(lit_343);
DEFLIT(lit_181);
DEFLIT(lit_277);
DEFLIT(lit_289);
DEFLIT(lit_224);
DEFLIT(lit_217);
DEFLIT(lit_65);
DEFLIT(lit_10);
DEFLIT(lit_318);
DEFLIT(lit_78);
DEFLIT(lit_4);
DEFLIT(lit_374);
DEFLIT(lit_73);
DEFLIT(lit_155);
DEFLIT(lit_278);
DEFLIT(lit_130);
DEFLIT(lit_247);
DEFLIT(lit_213);
DEFLIT(lit_354);
DEFLIT(lit_260);
DEFLIT(lit_328);
DEFLIT(lit_103);
DEFLIT(lit_229);
DEFLIT(lit_138);
DEFLIT(lit_183);
DEFLIT(lit_149);
DEFLIT(lit_338);
DEFLIT(lit_46);
DEFLIT(lit_21);
DEFLIT(lit_341);
DEFLIT(lit_166);
DEFLIT(lit_157);
DEFLIT(lit_56);
DEFLIT(lit_294);
DEFLIT(lit_361);
DEFLIT(lit_273);
DEFLIT(lit_264);
DEFLIT(lit_27);
DEFLIT(lit_24);
DEFLIT(lit_263);
DEFLIT(lit_335);
DEFLIT(lit_362);
DEFLIT(lit_163);
DEFLIT(lit_88);
DEFLIT(lit_119);
DEFLIT(lit_342);
DEFLIT(lit_154);
DEFLIT(lit_218);
DEFLIT(lit_52);
DEFLIT(lit_132);
DEFLIT(lit_291);
DEFLIT(lit_64);
DEFLIT(lit_43);
DEFLIT(lit_112);
DEFLIT(lit_228);
DEFLIT(lit_145);
DEFLIT(lit_3);
DEFLIT(lit_206);
DEFLIT(lit_182);
DEFLIT(lit_174);
DEFLIT(lit_246);
DEFLIT(lit_349);
DEFLIT(lit_331);
DEFLIT(lit_51);
DEFLIT(lit_240);
DEFLIT(lit_225);
DEFLIT(lit_347);
DEFLIT(lit_313);
DEFLIT(lit_86);
DEFLIT(lit_34);
DEFLIT(lit_171);
DEFLIT(lit_245);
DEFLIT(lit_102);
DEFLIT(lit_136);
DEFLIT(lit_159);
DEFLIT(lit_256);
DEFLIT(lit_254);
DEFLIT(lit_290);
DEFLIT(lit_95);
DEFLIT(lit_20);
DEFLIT(lit_76);
DEFLIT(lit_2);
DEFLIT(lit_190);
DEFLIT(lit_116);
DEFLIT(lit_370);
DEFLIT(lit_114);
DEFLIT(lit_314);
DEFLIT(lit_187);
DEFLIT(lit_1);
DEFLIT(lit_357);
DEFLIT(lit_353);
DEFLIT(lit_286);
DEFLIT(lit_60);
DEFLIT(lit_15);
DEFLIT(lit_90);
DEFLIT(lit_288);
DEFLIT(lit_121);
DEFLIT(lit_371);
DEFLIT(lit_55);
DEFLIT(lit_42);
DEFLIT(lit_22);
DEFLIT(lit_281);
DEFLIT(lit_227);
DEFLIT(lit_230);
DEFLIT(lit_326);
DEFLIT(lit_330);
DEFLIT(lit_295);
DEFLIT(lit_26);
DEFLIT(lit_164);
DEFLIT(lit_105);
DEFLIT(lit_161);
DEFLIT(lit_207);
DEFLIT(lit_237);
DEFLIT(lit_118);
DEFLIT(lit_262);
DEFLIT(lit_120);
DEFLIT(lit_127);
DEFLIT(lit_146);
DEFLIT(lit_82);
DEFLIT(lit_244);
DEFLIT(lit_69);
DEFLIT(lit_11);
DEFLIT(lit_352);
DEFLIT(lit_363);
DEFLIT(lit_32);
DEFLIT(lit_87);
DEFLIT(lit_153);
DEFLIT(lit_322);
DEFLIT(lit_226);
DEFLIT(lit_297);
DEFLIT(lit_58);
DEFLIT(lit_292);
DEFLIT(lit_283);
DEFLIT(lit_37);
DEFLIT(lit_348);
DEFLIT(lit_270);
DEFLIT(lit_33);
DEFLIT(lit_204);
DEFLIT(lit_255);
DEFLIT(lit_339);
DEFLIT(lit_360);
DEFLIT(lit_41);
DEFLIT(lit_209);
DEFLIT(lit_8);
DEFLIT(lit_77);
DEFLIT(lit_100);
DEFLIT(lit_253);
DEFLIT(lit_301);
DEFLIT(lit_219);
DEFLIT(lit_148);
DEFLIT(lit_129);
DEFLIT(lit_300);
DEFLIT(lit_285);
DEFLIT(lit_336);
DEFLIT(lit_169);
DEFLIT(lit_211);
DEFLIT(lit_324);
DEFLIT(lit_315);
DEFLIT(lit_180);
DEFLIT(lit_235);
DEFLIT(lit_236);
DEFLIT(lit_162);
DEFLIT(lit_137);
DEFLIT(lit_231);
DEFLIT(lit_96);
DEFLIT(lit_216);
DEFLIT(lit_272);
DEFLIT(lit_215);
DEFLIT(lit_261);
DEFLIT(lit_81);
DEFLIT(lit_108);
DEFLIT(lit_53);
DEFLIT(lit_63);
DEFLIT(lit_84);
DEFLIT(lit_243);
DEFLIT(lit_223);
DEFLIT(lit_241);
DEFLIT(lit_368);
DEFLIT(lit_93);
DEFLIT(lit_18);
DEFLIT(lit_85);
DEFLIT(lit_337);
DEFLIT(lit_196);
DEFLIT(lit_188);
DEFLIT(lit_172);
DEFLIT(lit_49);
DEFLIT(lit_198);
DEFLIT(lit_0);

/* FUNCTIONS: */

LOCFOR(fun_sexpr_self_evaluatingQ_0);
LOCFOR(fun_sexpr_variableQ_1);
LOCFOR(fun_sexpr_tagged_listQ_2);
LOCFOR(fun_sexpr_quotedQ_3);
LOCFOR(fun_sexpr_make_quote_4);
LOCFOR(fun_sexpr_text_of_quotation_5);
LOCFOR(fun_sexpr_assignmentQ_6);
LOCFOR(fun_sexpr_assignment_variable_7);
LOCFOR(fun_sexpr_assignment_value_8);
LOCFOR(fun_sexpr_variable_name_9);
LOCFOR(fun_sexpr_variable_name_10);
LOCFOR(fun_sexpr_variable_type_11);
LOCFOR(fun_sexpr_variable_type_12);
LOCFOR(fun_sexpr_define_constantQ_13);
LOCFOR(fun_sexpr_definitionQ_14);
LOCFOR(fun_sexpr_definition_variable_15);
LOCFOR(fun_sexpr_definition_value_16);
LOCFOR(fun_sexpr_syntax_definitionQ_17);
LOCFOR(fun_sexpr_syntax_definition_variable_18);
LOCFOR(fun_sexpr_syntax_definition_value_19);
LOCFOR(fun_sexpr_function_definitionQ_20);
LOCFOR(fun_sexpr_method_definitionQ_21);
LOCFOR(fun_sexpr_generic_definitionQ_22);
LOCFOR(fun_sexpr_function_definition_variable_23);
LOCFOR(fun_sexpr_function_definition_adjectives_24);
LOCFOR(fun_sexpr_forward_primitiveQ_25);
LOCFOR(fun_sexpr_signature_parameters_26);
LOCFOR(fun_sexpr_value_type_27);
LOCFOR(fun_sexpr_value_type_28);
LOCFOR(fun_sexpr_signature_value_29);
FUNFOR(YevalSsyntaxYas_signature);
LOCFOR(fun_sexpr_function_signature_31);
LOCFOR(fun_sexpr_function_parameters_32);
LOCFOR(fun_sexpr_function_value_33);
LOCFOR(fun_sexpr_function_body_34);
LOCFOR(fun_sexpr_function_definition_value_35);
LOCFOR(fun_sexpr_methodQ_36);
LOCFOR(fun_sexpr_method_signature_37);
LOCFOR(fun_sexpr_method_parameters_38);
LOCFOR(fun_sexpr_method_value_39);
LOCFOR(fun_sexpr_method_body_40);
LOCFOR(fun_sexpr_make_anonymous_method_41);
LOCFOR(fun_sexpr_make_method_42);
LOCFOR(fun_sexpr_ifQ_43);
LOCFOR(fun_sexpr_if_test_44);
LOCFOR(fun_sexpr_if_then_45);
LOCFOR(fun_sexpr_if_else_46);
LOCFOR(fun_sexpr_make_if_47);
LOCFOR(fun_sexpr_blockQ_48);
LOCFOR(fun_sexpr_block_name_49);
LOCFOR(fun_sexpr_block_body_50);
LOCFOR(fun_sexpr_unwind_protectQ_51);
LOCFOR(fun_sexpr_unwind_protect_protected_form_52);
LOCFOR(fun_sexpr_unwind_protect_cleanup_forms_53);
LOCFOR(fun_sexpr_monitorQ_54);
LOCFOR(fun_x_1471_55);
LOCFOR(fun_56);
LOCFOR(fun_sexpr_monitor_expand_57);
FUNFOR(YevalSsyntaxYfind_option);
LOCFOR(fun_x_1473_59);
LOCFOR(fun_60);
LOCFOR(fun_sexpr_monitor_type_61);
LOCFOR(fun_x_1475_62);
LOCFOR(fun_63);
LOCFOR(fun_x_1477_64);
LOCFOR(fun_65);
LOCFOR(fun_sexpr_monitor_info_66);
LOCFOR(fun_sexpr_monitor_test_67);
LOCFOR(fun_sexpr_monitor_body_68);
LOCFOR(fun_sexpr_beginQ_69);
LOCFOR(fun_sexpr_begin_actions_70);
LOCFOR(fun_sexpr_last_expQ_71);
LOCFOR(fun_sexpr_first_exp_72);
LOCFOR(fun_sexpr_rest_exps_73);
LOCFOR(fun_sexpr_sequence_Gbegin_74);
LOCFOR(fun_sexpr_make_begin_75);
LOCFOR(fun_sexpr_applicationQ_76);
LOCFOR(fun_sexpr_operator_77);
LOCFOR(fun_sexpr_operands_78);
LOCFOR(fun_sexpr_no_operandsQ_79);
LOCFOR(fun_sexpr_first_operand_80);
LOCFOR(fun_sexpr_rest_operands_81);
LOCFOR(fun_sexpr_make_application_82);
LOCFOR(fun_sexpr_new_unique_name_counterX_83);
LOCFOR(fun_sexpr_unique_name_84);
LOCFOR(fun_sexpr_defQ_85);
LOCFOR(fun_sexpr_def_variable_86);
LOCFOR(fun_sexpr_def_value_87);
LOCFOR(fun_sexpr_letQ_88);
LOCFOR(fun_89);
LOCFOR(fun_sexpr_let_bound_variables_90);
LOCFOR(fun_91);
LOCFOR(fun_sexpr_let_values_92);
LOCFOR(fun_sexpr_let_body_93);
LOCFOR(fun_sexpr_let_namesAvalues_94);
LOCFOR(fun_col_95);
LOCFOR(fun_sexpr_let_Gcombination_96);
LOCFOR(fun_sexpr_locQ_97);
LOCFOR(fun_sexpr_loc_bound_names_98);
LOCFOR(fun_99);
LOCFOR(fun_sexpr_loc_bound_signatures_100);
LOCFOR(fun_sexpr_loc_bound_bodies_101);
LOCFOR(fun_sexpr_loc_raw_body_102);
LOCFOR(fun_sexpr_loc_body_103);
LOCFOR(fun_sexpr_iterateQ_104);
LOCFOR(fun_sexpr_iterate_name_105);
LOCFOR(fun_106);
LOCFOR(fun_sexpr_iterate_signature_107);
LOCFOR(fun_108);
LOCFOR(fun_sexpr_iterate_inits_109);
LOCFOR(fun_sexpr_iterate_body_110);
LOCFOR(fun_sexpr_iterate_Gloc_111);
LOCFOR(fun_sexpr_isaQ_112);
LOCFOR(fun_sexpr_isa_parent_113);
LOCFOR(fun_sexpr_isa_prop_inits_114);
LOCFOR(fun_sexpr_isa_init_props_115);
LOCFOR(fun_sexpr_isa_init_values_116);
LOCFOR(fun_sexpr_define_classQ_117);
LOCFOR(fun_sexpr_define_class_parents_118);
LOCFOR(fun_sexpr_propXQ_119);
LOCFOR(fun_sexpr_propQ_120);
LOCFOR(fun_sexpr_prop_name_121);
LOCFOR(fun_sexpr_prop_owner_122);
LOCFOR(fun_sexpr_prop_init_var_123);
LOCFOR(fun_sexpr_prop_type_124);
LOCFOR(fun_sexpr_prop_initQ_125);
LOCFOR(fun_sexpr_prop_init_126);
LOCFOR(fun_sexpr_fab_getter_127);
LOCFOR(fun_sexpr_fab_setter_128);
LOCFOR(fun_sexpr_fab_setter_name_129);
LOCFOR(fun_sexpr_macroQ_130);
LOCFOR(fun_sexpr_macro_expandQ_131);
LOCFOR(fun_sexpr_make_syntax_if_132);
FUNFOR(YevalSsyntaxYsexpr_expand_backquote);
LOCFOR(fun_sexpr_build_backquote_expander_134);
LOCFOR(fun_sexpr_unquoteQ_135);
LOCFOR(fun_sexpr_unquote_splicingQ_136);
LOCFOR(fun_sexpr_backquoteQ_137);
LOCFOR(fun_sexpr_atomQ_138);
LOCFOR(fun_nreconc_139);
LOCFOR(fun_140);
LOCFOR(fun_bq_process_141);
LOCFOR(fun_bracket_142);
LOCFOR(fun_map_tree_143);
LOCFOR(fun_bq_remove_tokens_144);
LOCFOR(fun_sexpr_syntax_ifQ_145);
LOCFOR(fun_sexpr_syntax_if_value_146);
LOCFOR(fun_sexpr_syntax_if_pattern_147);
LOCFOR(fun_sexpr_syntax_if_then_148);
LOCFOR(fun_sexpr_syntax_if_else_149);
LOCFOR(fun_sexpr_pattern_variableQ_150);
LOCFOR(fun_sexpr_pattern_variable_name_151);
LOCFOR(fun_col_152);
LOCFOR(fun_sexpr_bind_pattern_variables_153);
LOCFOR(fun_sexpr_make_macro_function_154);
extern P YevalSsyntaxY___main_0___ ();
extern P YevalSsyntaxY___main_1___ ();
extern P YevalSsyntaxY___main_2___ ();
extern P YevalSsyntaxY___main_3___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_sexpr_self_evaluatingQ_0) {
  P exp_;
  P tmpF3986;
  P tmpF3985;
  P tmpF3984;
  P tmpF3983;
  P tmpF3982;
  P tmpF3981;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(exp_, 0);
  T12 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLnumG));
  tmpF3981 = T12;
  if (tmpF3981 != YPfalse) {
    T0 = tmpF3981;
  } else {
    T11 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLchrG));
    tmpF3982 = T11;
    if (tmpF3982 != YPfalse) {
      T1 = tmpF3982;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),exp_,YPtrue);
      tmpF3983 = T10;
      if (tmpF3983 != YPfalse) {
        T2 = tmpF3983;
      } else {
        T9 = CALL2(1,VARREF(YgooSmacrosYEE),exp_,YPfalse);
        tmpF3984 = T9;
        if (tmpF3984 != YPfalse) {
          T3 = tmpF3984;
        } else {
          T8 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLstrG));
          tmpF3985 = T8;
          if (tmpF3985 != YPfalse) {
            T4 = tmpF3985;
          } else {
            T7 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YgooScolsSvecYLvecG));
            tmpF3986 = T7;
            if (tmpF3986 != YPfalse) {
              T5 = tmpF3986;
            } else {
              T6 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLtupG));
              T5 = T6;
            }
            T4 = T5;
          }
          T3 = T4;
        }
        T2 = T3;
      }
      T1 = T2;
    }
    T0 = T1;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_variableQ_1) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLsymG));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_tagged_listQ_2) {
  P exp_,tag_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(exp_, 0);
  ARG(tag_, 1);
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yhead),exp_);
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),T3,tag_);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_quotedQ_3) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_quote_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_make_quote_4) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_quote_tag),exp_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_text_of_quotation_5) {
  P quot_;
  P T0;
LINK_STACK();
  ARG(quot_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),quot_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_assignmentQ_6) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_set_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_assignment_variable_7) {
  P assn_;
  P T0;
LINK_STACK();
  ARG(assn_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),assn_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_assignment_value_8) {
  P assn_;
  P T0;
LINK_STACK();
  ARG(assn_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),assn_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_variable_name_9) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY1st),exp_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_variable_name_10) {
  P exp_;
LINK_STACK();
  ARG(exp_, 0);
UNLINK_STACK();
  QRET(exp_);
}

LOCCODEDEF(fun_sexpr_variable_type_11) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_variable_type_12) {
  P exp_;
LINK_STACK();
  ARG(exp_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_26));
}

LOCCODEDEF(fun_sexpr_define_constantQ_13) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_constant_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_definitionQ_14) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_definition_variable_15) {
  P defn_;
  P T0;
LINK_STACK();
  ARG(defn_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),defn_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_definition_value_16) {
  P defn_;
  P T0;
LINK_STACK();
  ARG(defn_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),defn_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_syntax_definitionQ_17) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_syntax_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_syntax_definition_variable_18) {
  P defn_;
  P T0,T1,T2;
LINK_STACK();
  ARG(defn_, 0);
  T2 = CALL1(1,VARREF(Ytail),defn_);
  T1 = CALL1(1,VARREF(Yhead),T2);
  T0 = CALL1(1,VARREF(YgooSmacrosY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_syntax_definition_value_19) {
  P defn_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(defn_, 0);
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),defn_);
  T4 = CALL1(1,VARREF(Ytail),defn_);
  T3 = CALL1(1,VARREF(Ytail),T4);
  T1 = CALL2(1,VARREF(YgooSmacrosYpair),T2,T3);
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(YevalSsyntaxYDsexpr_macro_tag),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_function_definitionQ_20) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_function_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_method_definitionQ_21) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_method_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_generic_definitionQ_22) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_generic_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_function_definition_variable_23) {
  P defn_;
  P varF3987;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(defn_, 0);
  T3 = CALL1(1,VARREF(YgooSmacrosY2nd),defn_);
  varF3987 = T3;
  T1 = CALL2(1,VARREF(YisaQ),varF3987,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(Yhead),varF3987);
    T0 = T2;
  } else {
    T0 = varF3987;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_function_definition_adjectives_24) {
  P defn_;
  P varF3988;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(defn_, 0);
  T3 = CALL1(1,VARREF(YgooSmacrosY2nd),defn_);
  varF3988 = T3;
  T1 = CALL2(1,VARREF(YisaQ),varF3988,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(Ytail),varF3988);
    T0 = T2;
  } else {
    T0 = Ynil;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_forward_primitiveQ_25) {
  P defn_;
  P T0,T1;
LINK_STACK();
  ARG(defn_, 0);
  T1 = CALL1(1,VARREF(YgooStypesYlen),defn_);
  T0 = CALL2(1,VARREF(YgooSlogYE),T1,YPint((P)2));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_signature_parameters_26) {
  P signature_;
  P values_spec_indexF3989;
  P T0,T1,T2;
LINK_STACK();
  ARG(signature_, 0);
  T2 = CALL2(1,VARREF(YgooScolsSseqYpos),signature_,LITREF(lit_63));
  values_spec_indexF3989 = T2;
  if (values_spec_indexF3989 != YPfalse) {
    T1 = CALL3(1,VARREF(YgooScolsSseqYsub),signature_,YPint((P)0),values_spec_indexF3989);
    T0 = T1;
  } else {
    T0 = signature_;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_value_type_27) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_value_type_28) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(x_);
}

LOCCODEDEF(fun_sexpr_signature_value_29) {
  P signature_;
  P valueF3991;
  P values_spec_indexF3990;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(signature_, 0);
  T9 = CALL2(1,VARREF(YgooScolsSseqYpos),signature_,LITREF(lit_63));
  values_spec_indexF3990 = T9;
  if (values_spec_indexF3990 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmathYA),values_spec_indexF3990,YPint((P)1));
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),signature_,T8);
    valueF3991 = T7;
    T2 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),valueF3991,LITREF(lit_69));
    if (T2 != YPfalse) {
      T4 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
      T6 = CALL1(1,VARREF(Ytail),valueF3991);
      T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSsyntaxYsexpr_value_type),T6);
      T3 = CALL3(1,VARREF(YgooSmacrosYcat),T4,T5,LITREF(lit_71));
      T1 = T3;
    } else {
      T1 = valueF3991;
    }
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSsyntaxYas_signature) {
  P sig_;
LINK_STACK();
  ARG(sig_, 0);
UNLINK_STACK();
  RET(sig_);
}

LOCCODEDEF(fun_sexpr_function_signature_31) {
  P defn_;
  P T0,T1;
LINK_STACK();
  ARG(defn_, 0);
  T1 = CALL1(1,VARREF(YgooScolsSseqY3rd),defn_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYas_signature),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_function_parameters_32) {
  P defn_;
  P T0,T1;
LINK_STACK();
  ARG(defn_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_signature),defn_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_function_value_33) {
  P defn_;
  P T0,T1;
LINK_STACK();
  ARG(defn_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_signature),defn_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_function_body_34) {
  P defn_;
  P T0,T1,T2;
LINK_STACK();
  ARG(defn_, 0);
  T2 = CALL1(1,VARREF(Ytail),defn_);
  T1 = CALL1(1,VARREF(Ytail),T2);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_function_definition_value_35) {
  P defn_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(defn_, 0);
  T2 = CALL1(1,VARREF(YgooScolsSseqY3rd),defn_);
  T5 = CALL1(1,VARREF(Ytail),defn_);
  T4 = CALL1(1,VARREF(Ytail),T5);
  T3 = CALL1(1,VARREF(Ytail),T4);
  T1 = CALL2(1,VARREF(YgooSmacrosYpair),T2,T3);
  T6 = CALL1(1,VARREF(YgooScolsSlstYline_of),defn_);
  T0 = CALL3(1,VARREF(YgooScolsSlstYline_pair),VARREF(YevalSsyntaxYDsexpr_method_tag),T1,T6);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_methodQ_36) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_method_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_method_signature_37) {
  P method_exp_;
  P T0,T1;
LINK_STACK();
  ARG(method_exp_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),method_exp_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYas_signature),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_method_parameters_38) {
  P method_exp_;
  P T0,T1;
LINK_STACK();
  ARG(method_exp_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_signature),method_exp_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_method_value_39) {
  P method_exp_;
  P T0,T1;
LINK_STACK();
  ARG(method_exp_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_signature),method_exp_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_method_body_40) {
  P method_exp_;
  P T0,T1;
LINK_STACK();
  ARG(method_exp_, 0);
  T1 = CALL1(1,VARREF(Ytail),method_exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_make_anonymous_method_41) {
  P parameters_,body_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(parameters_, 0);
  ARG(body_, 1);
  T2 = CALL2(1,VARREF(YisaQ),parameters_,VARREF(YgooScolsSlstYLline_listG));
  if (T2 != YPfalse) {
    T1 = parameters_;
  } else {
    T1 = body_;
  }
  T4 = CALL1(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_method_tag));
  T5 = CALL1(1,VARREF(Ylst),parameters_);
  T3 = CALL3(1,VARREF(YgooSmacrosYcat),T4,T5,body_);
  T0 = CALL2(1,VARREF(YgooScolsSlstYline_list_of),T1,T3);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_make_method_42) {
  P name_,parameters_,body_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  ARG(parameters_, 1);
  ARG(body_, 2);
  T2 = CALL2(1,VARREF(YisaQ),parameters_,VARREF(YgooScolsSlstYLline_listG));
  if (T2 != YPfalse) {
    T1 = parameters_;
  } else {
    T1 = body_;
  }
  T4 = CALL3(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_define_method_tag),name_,parameters_);
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),T4,body_);
  T0 = CALL2(1,VARREF(YgooScolsSlstYline_list_of),T1,T3);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_ifQ_43) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_if_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_if_test_44) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_if_then_45) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_if_else_46) {
  P exp_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(exp_, 0);
  T4 = CALL1(1,VARREF(Ytail),exp_);
  T3 = CALL1(1,VARREF(Ytail),T4);
  T2 = CALL1(1,VARREF(Ytail),T3);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),T2);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T8 = CALL1(1,VARREF(Ytail),exp_);
    T7 = CALL1(1,VARREF(Ytail),T8);
    T6 = CALL1(1,VARREF(Ytail),T7);
    T5 = CALL1(1,VARREF(Yhead),T6);
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_make_if_47) {
  P test_,then_,else_;
  P T0;
LINK_STACK();
  ARG(test_, 0);
  ARG(then_, 1);
  ARG(else_, 2);
  T0 = CALL4(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_if_tag),test_,then_,else_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_blockQ_48) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_bind_exit_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_block_name_49) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_block_body_50) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = CALL1(1,VARREF(Ytail),exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_unwind_protectQ_51) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_unwind_protect_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_unwind_protect_protected_form_52) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_unwind_protect_cleanup_forms_53) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = CALL1(1,VARREF(Ytail),exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_monitorQ_54) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_monitor_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_x_1471_55) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_132),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_56) {
  P return_;
  P optionsF4003;
  P x_1470F4002;
  P x_1470F4001;
  P x_1470F4000;
  P x_1470F3999;
  P x_1470F3998;
  P x_1470F3997;
  P bodyF3996;
  P handlerF3995;
  P optionsF3994;
  P x_1470F3993;
  P x_1471F3992;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(return_, 0);
  T31 = FUNSHELL(0,fun_x_1471_55,2);
  x_1471F3992 = T31;
  FUNINIT(x_1471F3992, 2,FREEREF(0),return_);
  x_1470F3993 = FREEREF(0);
  optionsF3994 = YPfalse;
  handlerF3995 = YPfalse;
  bodyF3996 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1470F3993,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1470F3993,LITREF(lit_124),x_1471F3992);
    x_1470F3997 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1470F3997,x_1471F3992);
    optionsF3994 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1470F3997);
    x_1470F3998 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1470F3998,x_1471F3992);
    handlerF3995 = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1470F3998);
    x_1470F3999 = T9;
    bodyF3996 = x_1470F3999;
    x_1470F4000 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1470F4000,x_1471F3992);
    x_1470F4001 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1470F4001,x_1471F3992);
    T7 = CALL1(1,VARREF(Ytail),x_1470F4000);
    x_1470F4002 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1470F4002,x_1471F3992);
  } else {
    T13 = CALL2(1,x_1471F3992,LITREF(lit_133),x_1470F3993);
  }
  T23 = optionsF3994;
  T22 = CALL2(1,VARREF(YisaQ),T23,VARREF(YLsymG));
  if (T22 != YPfalse) {
    T27 = CALL1(1,VARREF(Ylst),LITREF(lit_134));
    T29 = optionsF3994;
    T28 = CALL1(1,VARREF(Ylst),T29);
    T26 = CALL3(1,VARREF(YgooSmacrosYcat),T27,T28,LITREF(lit_71));
    T25 = CALL1(1,VARREF(Ylst),T26);
    T24 = CALL2(1,VARREF(YgooSmacrosYcat),T25,LITREF(lit_71));
    T21 = T24;
  } else {
    T30 = optionsF3994;
    T21 = T30;
  }
  optionsF4003 = T21;
  T15 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_type),optionsF4003);
  T16 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_info),optionsF4003);
  T17 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_test),optionsF4003);
  T18 = handlerF3995;
  T20 = bodyF3996;
  T19 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_body),T20);
  T14 = CALL5(1,VARREF(Ytup),T15,T16,T17,T18,T19);
UNLINK_STACK();
  QRET(T14);
}

LOCCODEDEF(fun_sexpr_monitor_expand_57) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_56,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSsyntaxYfind_option) {
  P options_,option_,default_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(options_, 0);
  ARG(option_, 1);
  ARG(default_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),options_);
  if (T1 != YPfalse) {
    T0 = default_;
  } else {
    T5 = CALL1(1,VARREF(YgooSmacrosY1st),options_);
    T4 = CALL1(1,VARREF(Yhead),T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),option_,T4);
    if (T3 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooSmacrosY1st),options_);
      T6 = CALL1(1,VARREF(Ytail),T7);
      T2 = T6;
    } else {
      if (YPtrue != YPfalse) {
        T10 = CALL1(1,VARREF(Ytail),options_);
        T9 = CALL3(1,VARREF(YevalSsyntaxYfind_option),T10,option_,default_);
        T8 = T9;
      } else {
        T8 = YPfalse;
      }
      T2 = T8;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1473_59) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_143),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_60) {
  P return_;
  P x_1472F4009;
  P x_1472F4008;
  P x_1472F4007;
  P typeF4006;
  P x_1472F4005;
  P x_1473F4004;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(return_, 0);
  T10 = FUNSHELL(0,fun_x_1473_59,2);
  x_1473F4004 = T10;
  FUNINIT(x_1473F4004, 2,FREEREF(0),return_);
  x_1472F4005 = FREEREF(0);
  typeF4006 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1472F4005,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1472F4005,x_1473F4004);
    typeF4006 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1472F4005);
    x_1472F4007 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1472F4007,x_1473F4004);
    x_1472F4008 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1472F4008,x_1473F4004);
    T5 = CALL1(1,VARREF(Ytail),x_1472F4007);
    x_1472F4009 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1472F4009,x_1473F4004);
  } else {
    T8 = CALL2(1,x_1473F4004,LITREF(lit_133),x_1472F4005);
  }
  T9 = typeF4006;
UNLINK_STACK();
  QRET(T9);
}

LOCCODEDEF(fun_sexpr_monitor_type_61) {
  P options_;
  P type_listF4010;
  P T0,T1,T2;
LINK_STACK();
  ARG(options_, 0);
  T2 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_134),LITREF(lit_139));
  type_listF4010 = T2;
  T1 = FUNFAB(fun_60,1,type_listF4010);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1475_62) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_152),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_63) {
  P return_;
  P x_1474F4016;
  P x_1474F4015;
  P x_1474F4014;
  P info_exprF4013;
  P x_1474F4012;
  P x_1475F4011;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(return_, 0);
  T10 = FUNSHELL(0,fun_x_1475_62,2);
  x_1475F4011 = T10;
  FUNINIT(x_1475F4011, 2,FREEREF(0),return_);
  x_1474F4012 = FREEREF(0);
  info_exprF4013 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1474F4012,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1474F4012,x_1475F4011);
    info_exprF4013 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1474F4012);
    x_1474F4014 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1474F4014,x_1475F4011);
    x_1474F4015 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1474F4015,x_1475F4011);
    T5 = CALL1(1,VARREF(Ytail),x_1474F4014);
    x_1474F4016 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1474F4016,x_1475F4011);
  } else {
    T8 = CALL2(1,x_1475F4011,LITREF(lit_133),x_1474F4012);
  }
  T9 = info_exprF4013;
UNLINK_STACK();
  QRET(T9);
}

LOCCODEDEF(fun_x_1477_64) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_156),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_65) {
  P return_;
  P x_1476F4024;
  P x_1476F4023;
  P x_1476F4022;
  P x_1476F4021;
  P argumentsF4020;
  P messageF4019;
  P x_1476F4018;
  P x_1477F4017;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(return_, 0);
  T21 = FUNSHELL(0,fun_x_1477_64,2);
  x_1477F4017 = T21;
  FUNINIT(x_1477F4017, 2,FREEREF(0),return_);
  x_1476F4018 = FREEREF(0);
  messageF4019 = YPfalse;
  argumentsF4020 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1476F4018,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1476F4018,x_1477F4017);
    messageF4019 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1476F4018);
    x_1476F4021 = T8;
    argumentsF4020 = x_1476F4021;
    x_1476F4022 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1476F4022,x_1477F4017);
    x_1476F4023 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1476F4023,x_1477F4017);
    T6 = CALL1(1,VARREF(Ytail),x_1476F4022);
    x_1476F4024 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1476F4024,x_1477F4017);
  } else {
    T9 = CALL2(1,x_1477F4017,LITREF(lit_133),x_1476F4018);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_159));
  T15 = messageF4019;
  T14 = CALL1(1,VARREF(Ylst),T15);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_161));
  T20 = argumentsF4020;
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_71));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T10 = CALLN(1,VARREF(YgooSmacrosYcat),7,T11,T12,T13,T14,T16,T17,LITREF(lit_71));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_sexpr_monitor_info_66) {
  P options_;
  P descriptionF4026;
  P infoF4025;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(options_, 0);
  T11 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_146),YPfalse);
  infoF4025 = T11;
  T10 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_147),YPfalse);
  descriptionF4026 = T10;
  if (infoF4025 != YPfalse) {
    T1 = descriptionF4026;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_148),options_);
    T0 = T2;
  } else {
    if (infoF4025 != YPfalse) {
      T5 = FUNFAB(fun_63,1,infoF4025);
      T4 = with_exit(T5);
      T3 = T4;
    } else {
      if (descriptionF4026 != YPfalse) {
        T8 = FUNFAB(fun_65,1,descriptionF4026);
        T7 = with_exit(T8);
        T6 = T7;
      } else {
        if (YPtrue != YPfalse) {
          T9 = LITREF(lit_162);
        } else {
          T9 = YPfalse;
        }
        T6 = T9;
      }
      T3 = T6;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_monitor_test_67) {
  P options_;
  P test_bodyF4027;
  P T0,T1;
LINK_STACK();
  ARG(options_, 0);
  T1 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_165),LITREF(lit_166));
  test_bodyF4027 = T1;
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),Ynil,test_bodyF4027);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_monitor_body_68) {
  P body_;
  P T0;
LINK_STACK();
  ARG(body_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),Ynil,body_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_beginQ_69) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_begin_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_begin_actions_70) {
  P begin_exp_;
  P T0;
LINK_STACK();
  ARG(begin_exp_, 0);
  T0 = CALL1(1,VARREF(Ytail),begin_exp_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_last_expQ_71) {
  P seq_;
  P T0,T1;
LINK_STACK();
  ARG(seq_, 0);
  T1 = CALL1(1,VARREF(Ytail),seq_);
  T0 = CALL1(1,VARREF(YgooSmacrosYnulQ),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_first_exp_72) {
  P seq_;
  P T0;
LINK_STACK();
  ARG(seq_, 0);
  T0 = CALL1(1,VARREF(Yhead),seq_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_rest_exps_73) {
  P seq_;
  P T0;
LINK_STACK();
  ARG(seq_, 0);
  T0 = CALL1(1,VARREF(Ytail),seq_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_sequence_Gbegin_74) {
  P seq_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(seq_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),seq_);
  if (T1 != YPfalse) {
    T0 = seq_;
  } else {
    T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_last_expQ),seq_);
    if (T3 != YPfalse) {
      T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_first_exp),seq_);
      T2 = T4;
    } else {
      T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_make_begin),seq_);
      T2 = T5;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_make_begin_75) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(YevalSsyntaxYDsexpr_begin_tag),exp_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_applicationQ_76) {
  P exp_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(exp_, 0);
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmacrosYnulQ),exp_);
    T2 = CALL1(1,VARREF(Ynot),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_operator_77) {
  P app_;
  P T0;
LINK_STACK();
  ARG(app_, 0);
  T0 = CALL1(1,VARREF(Yhead),app_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_operands_78) {
  P app_;
  P T0;
LINK_STACK();
  ARG(app_, 0);
  T0 = CALL1(1,VARREF(Ytail),app_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_no_operandsQ_79) {
  P args_;
  P T0;
LINK_STACK();
  ARG(args_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosYnulQ),args_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_first_operand_80) {
  P args_;
  P T0;
LINK_STACK();
  ARG(args_, 0);
  T0 = CALL1(1,VARREF(Yhead),args_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_rest_operands_81) {
  P args_;
  P T0;
LINK_STACK();
  ARG(args_, 0);
  T0 = CALL1(1,VARREF(Ytail),args_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_make_application_82) {
  P f_,operands_;
  P T0,T1;
LINK_STACK();
  ARG(f_, 0);
  ARG(operands_, 1);
  T1 = CALL1(1,VARREF(Ylst),f_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,operands_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_new_unique_name_counterX_83) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSmathYA),VARREF(YevalSsyntaxYTunique_name_counterT),YPint((P)1));
  VARSET(YevalSsyntaxYTunique_name_counterT,T0);
UNLINK_STACK();
  RET(VARREF(YevalSsyntaxYTunique_name_counterT));
}

LOCCODEDEF(fun_sexpr_unique_name_84) {
  P prefix_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(prefix_, 0);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),prefix_);
  T4 = CALL0(1,VARREF(YevalSsyntaxYsexpr_new_unique_name_counterX));
  T3 = CALL1(1,VARREF(YgooSmathYnum_to_str),T4);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),T2,T3);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_defQ_85) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_def_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_def_variable_86) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_def_value_87) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_letQ_88) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_let_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_89) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooSmacrosY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_let_bound_variables_90) {
  P let_exp_;
  P T0,T1,T2;
LINK_STACK();
  ARG(let_exp_, 0);
  T1 = fun_89;
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),let_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_91) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_let_values_92) {
  P let_exp_;
  P T0,T1,T2;
LINK_STACK();
  ARG(let_exp_, 0);
  T1 = fun_91;
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),let_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_let_body_93) {
  P let_exp_;
  P T0,T1,T2;
LINK_STACK();
  ARG(let_exp_, 0);
  T2 = CALL1(1,VARREF(Ytail),let_exp_);
  T1 = CALL1(1,VARREF(Ytail),T2);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_let_namesAvalues_94) {
  P names_,vals_;
  P rtvaluesF4042;
  P rtnamesF4041;
  P tup31F4040;
  P nameF4039;
  P tnamesF4038;
  P indexF4037;
  P rtvaluesF4036;
  P rtnamesF4035;
  P tupnameF4034;
  P valueF4033;
  P nameF4032;
  P valsF4031;
  P namesF4030;
  P rvaluesF4029;
  P rnamesF4028;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52;
LINK_STACK();
  ARG(names_, 0);
  ARG(vals_, 1);
  rnamesF4028 = Ynil;
  rvaluesF4029 = Ynil;
  namesF4030 = names_;
  valsF4031 = vals_;
  LOOP_169: {
    P a169_0,a169_1,a169_2,a169_3;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),namesF4030);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),rnamesF4028);
      T4 = CALL1(1,VARREF(YgooSmacrosYrevX),rvaluesF4029);
      T2 = CALL2(1,VARREF(Ytup),T3,T4);
      T0 = T2;
    } else {
      T52 = CALL1(1,VARREF(Yhead),namesF4030);
      nameF4032 = T52;
      T51 = CALL1(1,VARREF(Yhead),valsF4031);
      valueF4033 = T51;
      T7 = CALL2(1,VARREF(YisaQ),nameF4032,VARREF(YLlstG));
      if (T7 != YPfalse) {
        T9 = CALL1(1,VARREF(Yhead),nameF4032);
        T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,LITREF(lit_69));
        T6 = T8;
      } else {
        T6 = YPfalse;
      }
      if (T6 != YPfalse) {
        T45 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unique_name),LITREF(lit_222));
        tupnameF4034 = T45;
        T42 = CALL1(1,VARREF(Ylst),tupnameF4034);
        rtnamesF4035 = T42;
        T43 = CALL1(1,VARREF(Ylst),valueF4033);
        rtvaluesF4036 = T43;
        indexF4037 = YPint((P)0);
        T44 = CALL1(1,VARREF(Ytail),nameF4032);
        tnamesF4038 = T44;
        LOOP_170: {
          P a170_0,a170_1,a170_2,a170_3;
          T18 = CALL1(1,VARREF(YgooSmacrosYnulQ),tnamesF4038);
          if (T18 != YPfalse) {
            T19 = CALL2(1,VARREF(Ytup),rtnamesF4035,rtvaluesF4036);
            T17 = T19;
          } else {
            T41 = CALL1(1,VARREF(Yhead),tnamesF4038);
            nameF4039 = T41;
            T22 = CALL2(1,VARREF(YisaQ),nameF4039,VARREF(YLlstG));
            if (T22 != YPfalse) {
              T25 = CALL1(1,VARREF(Ytail),nameF4039);
              T24 = CALL1(1,VARREF(Yhead),T25);
              T23 = CALL2(1,VARREF(YgooSmacrosYEE),T24,LITREF(lit_223));
              T21 = T23;
            } else {
              T21 = YPfalse;
            }
            if (T21 != YPfalse) {
              T29 = CALL1(1,VARREF(Yhead),nameF4039);
              T28 = CALL2(1,VARREF(Ylst),T29,LITREF(lit_224));
              T27 = CALL2(1,VARREF(YgooSmacrosYpair),T28,rtnamesF4035);
              T32 = CALL2(1,VARREF(Ylst),LITREF(lit_226),tupnameF4034);
              T31 = CALL4(1,VARREF(Ylst),LITREF(lit_225),tupnameF4034,indexF4037,T32);
              T30 = CALL2(1,VARREF(YgooSmacrosYpair),T31,rtvaluesF4036);
              T33 = CALL2(1,VARREF(YgooSmathYA),indexF4037,YPint((P)1));
              T34 = CALL1(1,VARREF(Ytail),tnamesF4038);
              a170_0 = T27;
              a170_1 = T30;
              a170_2 = T33;
              a170_3 = T34;
              rtnamesF4035 = a170_0;
              rtvaluesF4036 = a170_1;
              indexF4037 = a170_2;
              tnamesF4038 = a170_3;
              goto LOOP_170;
              T20 = T26;
            } else {
              T36 = CALL2(1,VARREF(YgooSmacrosYpair),nameF4039,rtnamesF4035);
              T38 = CALL3(1,VARREF(Ylst),LITREF(lit_227),tupnameF4034,indexF4037);
              T37 = CALL2(1,VARREF(YgooSmacrosYpair),T38,rtvaluesF4036);
              T39 = CALL2(1,VARREF(YgooSmathYA),indexF4037,YPint((P)1));
              T40 = CALL1(1,VARREF(Ytail),tnamesF4038);
              a170_0 = T36;
              a170_1 = T37;
              a170_2 = T39;
              a170_3 = T40;
              rtnamesF4035 = a170_0;
              rtvaluesF4036 = a170_1;
              indexF4037 = a170_2;
              tnamesF4038 = a170_3;
              goto LOOP_170;
              T20 = T35;
            }
            T17 = T20;
          }
        }
        tup31F4040 = T17;
        T16 = CALL2(1,VARREF(YgooSmacrosYelt),tup31F4040,YPint((P)0));
        rtnamesF4041 = T16;
        T15 = CALL2(1,VARREF(YgooSmacrosYelt),tup31F4040,YPint((P)1));
        rtvaluesF4042 = T15;
        T11 = CALL2(1,VARREF(YgooSmacrosYcat),rtnamesF4041,rnamesF4028);
        T12 = CALL2(1,VARREF(YgooSmacrosYcat),rtvaluesF4042,rvaluesF4029);
        T13 = CALL1(1,VARREF(Ytail),namesF4030);
        T14 = CALL1(1,VARREF(Ytail),valsF4031);
        a169_0 = T11;
        a169_1 = T12;
        a169_2 = T13;
        a169_3 = T14;
        rnamesF4028 = a169_0;
        rvaluesF4029 = a169_1;
        namesF4030 = a169_2;
        valsF4031 = a169_3;
        goto LOOP_169;
        T5 = T10;
      } else {
        T47 = CALL2(1,VARREF(YgooSmacrosYpair),nameF4032,rnamesF4028);
        T48 = CALL2(1,VARREF(YgooSmacrosYpair),valueF4033,rvaluesF4029);
        T49 = CALL1(1,VARREF(Ytail),namesF4030);
        T50 = CALL1(1,VARREF(Ytail),valsF4031);
        a169_0 = T47;
        a169_1 = T48;
        a169_2 = T49;
        a169_3 = T50;
        rnamesF4028 = a169_0;
        rvaluesF4029 = a169_1;
        namesF4030 = a169_2;
        valsF4031 = a169_3;
        goto LOOP_169;
        T5 = T46;
      }
      T0 = T5;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_col_95) {
  P names_,values_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(names_, 0);
  ARG(values_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),names_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T5 = CALL1(1,VARREF(Yhead),names_);
    T4 = CALL1(1,VARREF(Ylst),T5);
    T7 = CALL1(1,VARREF(Ytail),names_);
    T8 = CALL1(1,VARREF(Ytail),values_);
    T6 = CALL2(0,FREEREF(1),T7,T8);
    T3 = CALL3(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_method_tag),T4,T6);
    T10 = CALL1(1,VARREF(Yhead),values_);
    T9 = CALL1(1,VARREF(Ylst),T10);
    T2 = CALL2(1,VARREF(YgooSmacrosYpair),T3,T9);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_let_Gcombination_96) {
  P let_exp_;
  P colF4049;
  P valuesF4048;
  P namesF4047;
  P tup32F4046;
  P bodyF4045;
  P ovaluesF4044;
  P onamesF4043;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(let_exp_, 0);
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_let_bound_variables),let_exp_);
  onamesF4043 = T7;
  T6 = CALL1(1,VARREF(YevalSsyntaxYsexpr_let_values),let_exp_);
  ovaluesF4044 = T6;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_let_body),let_exp_);
  bodyF4045 = T5;
  T4 = CALL2(1,VARREF(YevalSsyntaxYsexpr_let_namesAvalues),onamesF4043,ovaluesF4044);
  tup32F4046 = T4;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup32F4046,YPint((P)0));
  namesF4047 = T3;
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),tup32F4046,YPint((P)1));
  valuesF4048 = T2;
  T1 = FUNSHELL(1,fun_col_95,2);
  colF4049 = T1;
  FUNINIT(colF4049, 2,bodyF4045,colF4049);
  T0 = CALL2(1,colF4049,namesF4047,valuesF4048);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_locQ_97) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_locals_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_loc_bound_names_98) {
  P loc_exp_;
  P T0,T1;
LINK_STACK();
  ARG(loc_exp_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY1st),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_99) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYas_signature),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_loc_bound_signatures_100) {
  P loc_exp_;
  P T0,T1,T2;
LINK_STACK();
  ARG(loc_exp_, 0);
  T1 = fun_99;
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_loc_bound_bodies_101) {
  P loc_exp_;
  P T0,T1,T2;
LINK_STACK();
  ARG(loc_exp_, 0);
  T1 = CALL2(1,VARREF(YgooSfunctionalYcompose),VARREF(Ytail),VARREF(Ytail));
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_loc_raw_body_102) {
  P loc_exp_;
  P T0,T1;
LINK_STACK();
  ARG(loc_exp_, 0);
  T1 = CALL1(1,VARREF(Ytail),loc_exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_loc_body_103) {
  P loc_exp_;
  P T0,T1;
LINK_STACK();
  ARG(loc_exp_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_loc_raw_body),loc_exp_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_iterateQ_104) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_iterate_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_iterate_name_105) {
  P rep_exp_;
  P T0;
LINK_STACK();
  ARG(rep_exp_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),rep_exp_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_106) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooSmacrosY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_iterate_signature_107) {
  P rep_exp_;
  P sigF4050;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(rep_exp_, 0);
  T9 = CALL1(1,VARREF(YgooScolsSseqY3rd),rep_exp_);
  sigF4050 = T9;
  T2 = fun_106;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),sigF4050);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),T2,T3);
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),sigF4050);
  if (T5 != YPfalse) {
    T4 = Ynil;
  } else {
    T6 = CALL1(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_values_tag));
    T4 = T6;
  }
  T8 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),sigF4050);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),T1,T4,T7);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_108) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_iterate_inits_109) {
  P rep_exp_;
  P T0,T1,T2;
LINK_STACK();
  ARG(rep_exp_, 0);
  T1 = fun_108;
  T2 = CALL1(1,VARREF(YgooScolsSseqY3rd),rep_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_iterate_body_110) {
  P rep_exp_;
  P T0,T1,T2;
LINK_STACK();
  ARG(rep_exp_, 0);
  T2 = CALL1(1,VARREF(Ytail),rep_exp_);
  T1 = CALL1(1,VARREF(Ytail),T2);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_iterate_Gloc_111) {
  P rep_exp_;
  P initsF4054;
  P bodyF4053;
  P sigF4052;
  P nameF4051;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(rep_exp_, 0);
  T10 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_name),rep_exp_);
  nameF4051 = T10;
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_signature),rep_exp_);
  sigF4052 = T9;
  T8 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_body),rep_exp_);
  bodyF4053 = T8;
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_inits),rep_exp_);
  initsF4054 = T7;
  T4 = CALL2(1,VARREF(Ylst),nameF4051,sigF4052);
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),T4,bodyF4053);
  T2 = CALL1(1,VARREF(Ylst),T3);
  T6 = CALL1(1,VARREF(Ylst),nameF4051);
  T5 = CALL2(1,VARREF(YgooSmacrosYcat),T6,initsF4054);
  T1 = CALL3(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_locals_tag),T2,T5);
  T0 = CALL2(1,VARREF(YgooScolsSlstYline_list_of),rep_exp_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_isaQ_112) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_isa_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_isa_parent_113) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_isa_prop_inits_114) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = CALL1(1,VARREF(Ytail),exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_isa_init_props_115) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_isa_init_values_116) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_define_classQ_117) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_class_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_define_class_parents_118) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_propXQ_119) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_propX_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_propQ_120) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_prop_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_prop_name_121) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_prop_owner_122) {
  P exp_;
  P paramF4055;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(exp_, 0);
  T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_parameters),exp_);
  T3 = CALL1(1,VARREF(YgooSmacrosY1st),T4);
  paramF4055 = T3;
  T1 = CALL2(1,VARREF(YisaQ),paramF4055,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosY2nd),paramF4055);
    T0 = T2;
  } else {
    T0 = paramF4055;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_prop_init_var_123) {
  P exp_;
  P paramF4056;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(exp_, 0);
  T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_parameters),exp_);
  T3 = CALL1(1,VARREF(YgooSmacrosY1st),T4);
  paramF4056 = T3;
  T1 = CALL2(1,VARREF(YisaQ),paramF4056,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosY1st),paramF4056);
    T0 = T2;
  } else {
    T0 = LITREF(lit_289);
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_prop_type_124) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_value),exp_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_prop_initQ_125) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = CALL1(1,VARREF(YgooStypesYlen),exp_);
  T0 = CALL2(1,VARREF(YgooSlogYE),T1,YPint((P)4));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_prop_init_126) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),exp_,YPint((P)3));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_fab_getter_127) {
  P name_,type_,line_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  ARG(type_, 1);
  ARG(line_, 2);
  T2 = CALL2(1,VARREF(Ylst),LITREF(lit_289),type_);
  T1 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,T2);
  T4 = CALL3(1,VARREF(Ylst),LITREF(lit_298),LITREF(lit_289),name_);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T0 = CALL3(1,VARREF(YevalSsyntaxYsexpr_make_method),name_,T1,T3);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_fab_setter_128) {
  P name_,type_,prop_type_,line_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(name_, 0);
  ARG(type_, 1);
  ARG(prop_type_, 2);
  ARG(line_, 3);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),name_);
  T3 = CALL2(1,VARREF(Ylst),LITREF(lit_301),prop_type_);
  T4 = CALL2(1,VARREF(Ylst),LITREF(lit_289),type_);
  T2 = CALL3(1,VARREF(YgooScolsSlstYline_list),line_,T3,T4);
  T6 = CALL4(1,VARREF(Ylst),LITREF(lit_302),LITREF(lit_301),LITREF(lit_289),name_);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T0 = CALL3(1,VARREF(YevalSsyntaxYsexpr_make_method),T1,T2,T5);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_fab_setter_name_129) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat_sym),name_,LITREF(lit_305));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_macroQ_130) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_macro_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_macro_expandQ_131) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_macro_expand_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_make_syntax_if_132) {
  P pat_,exp_,then_,else_;
  P T0,T1;
LINK_STACK();
  ARG(pat_, 0);
  ARG(exp_, 1);
  ARG(then_, 2);
  ARG(else_, 3);
  T1 = CALL2(1,VARREF(Ylst),pat_,exp_);
  T0 = CALL4(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_syntax_if_tag),T1,then_,else_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSsyntaxYsexpr_expand_backquote) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_build_backquote_expander),x_);
  T0 = CALL2(1,VARREF(YevalSsyntaxYeval),T1,LITREF(lit_323));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_build_backquote_expander_134) {
  P x_;
  P resF4058;
  P raw_resultF4057;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYbq_process),x_);
  raw_resultF4057 = T1;
  T0 = CALL1(1,VARREF(YevalSsyntaxYbq_remove_tokens),raw_resultF4057);
  resF4058 = T0;
UNLINK_STACK();
  RET(resF4058);
}

LOCCODEDEF(fun_sexpr_unquoteQ_135) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),x_,LITREF(lit_328));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_unquote_splicingQ_136) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),x_,LITREF(lit_331));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_backquoteQ_137) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),x_,VARREF(YevalSsyntaxYDsexpr_quasiquote_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_atomQ_138) {
  P x_;
  P tmpF4059;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T3 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  T2 = CALL1(1,VARREF(Ynot),T3);
  tmpF4059 = T2;
  if (tmpF4059 != YPfalse) {
    T0 = tmpF4059;
  } else {
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),x_);
    T0 = T1;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_nreconc_139) {
  P x_,y_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),x_);
  T0 = CALL2(1,VARREF(YgooScolsSseqxYcatX),T1,y_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_140) {
  P return_;
  P qF4061;
  P pF4060;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
LINK_STACK();
  ARG(return_, 0);
  pF4060 = FREEREF(0);
  qF4061 = Ynil;
  LOOP_171: {
    P a171_0,a171_1;
    T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_atomQ),pF4060);
    if (T1 != YPfalse) {
      T6 = CALL2(1,VARREF(Ylst),VARREF(YevalSsyntaxYTbq_quoteT),pF4060);
      T5 = CALL1(1,VARREF(Ylst),T6);
      T4 = CALL2(1,VARREF(YevalSsyntaxYnreconc),qF4061,T5);
      T3 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(YevalSsyntaxYTbq_appendT),T4);
      T2 = CALL1(0,return_,T3);
      T0 = T2;
    } else {
      T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),pF4060);
      if (T7 != YPfalse) {
        T11 = CALL1(1,VARREF(Ytail),pF4060);
        T10 = CALL1(1,VARREF(Ytail),T11);
        T9 = CALL1(1,VARREF(YgooSmacrosYnulQ),T10);
        T8 = CALL1(1,VARREF(Ynot),T9);
        if (T8 != YPfalse) {
          T12 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_342),pF4060);
        } else {
        }
        T18 = CALL1(1,VARREF(Ytail),pF4060);
        T17 = CALL1(1,VARREF(Yhead),T18);
        T16 = CALL1(1,VARREF(Ylst),T17);
        T15 = CALL2(1,VARREF(YevalSsyntaxYnreconc),qF4061,T16);
        T14 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(YevalSsyntaxYTbq_appendT),T15);
        T13 = CALL1(0,return_,T14);
      } else {
      }
      T20 = CALL1(1,VARREF(Ytail),pF4060);
      T19 = CALL2(1,VARREF(YgooSmacrosYEE),T20,VARREF(YevalSsyntaxYTcomma_atsignT));
      if (T19 != YPfalse) {
        T21 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_343),pF4060);
      } else {
      }
      T23 = CALL1(1,VARREF(Ytail),pF4060);
      T26 = CALL1(1,VARREF(Yhead),pF4060);
      T25 = CALL1(1,VARREF(YevalSsyntaxYbracket),T26);
      T24 = CALL2(1,VARREF(YgooSmacrosYpair),T25,qF4061);
      a171_0 = T23;
      a171_1 = T24;
      pF4060 = a171_0;
      qF4061 = a171_1;
      goto LOOP_171;
      T0 = T22;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_bq_process_141) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_atomQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),VARREF(YevalSsyntaxYTbq_quoteT),x_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_backquoteQ),x_);
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(Ytail),x_);
      T7 = CALL1(1,VARREF(Yhead),T8);
      T6 = CALL1(1,VARREF(YevalSsyntaxYsexpr_build_backquote_expander),T7);
      T5 = CALL1(1,VARREF(YevalSsyntaxYbq_process),T6);
      T3 = T5;
    } else {
      T10 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),x_);
      if (T10 != YPfalse) {
        T12 = CALL1(1,VARREF(Ytail),x_);
        T11 = CALL1(1,VARREF(Yhead),T12);
        T9 = T11;
      } else {
        T14 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),x_);
        if (T14 != YPfalse) {
          T18 = CALL0(1,x_);
          T17 = CALL1(1,VARREF(Ytail),T18);
          T16 = CALL1(1,VARREF(Yhead),T17);
          T15 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_340),T16);
          T13 = T15;
        } else {
          if (YPtrue != YPfalse) {
            T21 = FUNFAB(fun_140,1,x_);
            T20 = with_exit(T21);
            T19 = T20;
          } else {
            T19 = YPfalse;
          }
          T13 = T19;
        }
        T9 = T13;
      }
      T3 = T9;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_bracket_142) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_atomQ),x_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSsyntaxYbq_process),x_);
    T2 = CALL2(1,VARREF(Ylst),VARREF(YevalSsyntaxYTbq_listT),T3);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),x_);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(Ytail),x_);
      T7 = CALL1(1,VARREF(Yhead),T8);
      T6 = CALL2(1,VARREF(Ylst),VARREF(YevalSsyntaxYTbq_listT),T7);
      T4 = T6;
    } else {
      T10 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),x_);
      if (T10 != YPfalse) {
        T13 = CALL1(1,VARREF(Ytail),x_);
        T12 = CALL1(1,VARREF(Yhead),T13);
        T11 = CALL2(1,VARREF(Ylst),VARREF(YevalSsyntaxYTbq_clobberableT),T12);
        T9 = T11;
      } else {
        if (YPtrue != YPfalse) {
          T16 = CALL1(1,VARREF(YevalSsyntaxYbq_process),x_);
          T15 = CALL2(1,VARREF(Ylst),VARREF(YevalSsyntaxYTbq_listT),T16);
          T14 = T15;
        } else {
          T14 = YPfalse;
        }
        T9 = T14;
      }
      T4 = T9;
    }
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_map_tree_143) {
  P fn_,x_;
  P dF4063;
  P aF4062;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(fn_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_atomQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,fn_,x_);
    T0 = T2;
  } else {
    T13 = CALL1(1,VARREF(Yhead),x_);
    T12 = CALL1(1,fn_,T13);
    aF4062 = T12;
    T11 = CALL1(1,VARREF(Ytail),x_);
    T10 = CALL2(1,VARREF(YevalSsyntaxYmap_tree),fn_,T11);
    dF4063 = T10;
    T6 = CALL1(1,VARREF(Yhead),x_);
    T5 = CALL2(1,VARREF(YgooSlogYE),aF4062,T6);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(Ytail),x_);
      T7 = CALL2(1,VARREF(YgooSlogYE),dF4063,T8);
      T4 = T7;
    } else {
      T4 = YPfalse;
    }
    if (T4 != YPfalse) {
      T3 = x_;
    } else {
      T9 = CALL2(1,VARREF(YgooSmacrosYpair),aF4062,dF4063);
      T3 = T9;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_bq_remove_tokens_144) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_listT));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_161);
  } else {
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_appendT));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_350);
    } else {
      T5 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_nconcT));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_351);
      } else {
        T7 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_listTT));
        if (T7 != YPfalse) {
          T6 = LITREF(lit_352);
        } else {
          T9 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_quoteT));
          if (T9 != YPfalse) {
            T8 = LITREF(lit_6);
          } else {
            T11 = CALL1(1,VARREF(YevalSsyntaxYsexpr_atomQ),x_);
            if (T11 != YPfalse) {
              T10 = x_;
            } else {
              T14 = CALL1(1,VARREF(Yhead),x_);
              T13 = CALL2(1,VARREF(YgooSmacrosYEE),T14,VARREF(YevalSsyntaxYTbq_clobberableT));
              if (T13 != YPfalse) {
                T17 = CALL1(1,VARREF(Ytail),x_);
                T16 = CALL1(1,VARREF(Yhead),T17);
                T15 = CALL1(1,VARREF(YevalSsyntaxYbq_remove_tokens),T16);
                T12 = T15;
              } else {
                T21 = CALL1(1,VARREF(Yhead),x_);
                T20 = CALL2(1,VARREF(YgooSmacrosYEE),T21,VARREF(YevalSsyntaxYTbq_listTT));
                if (T20 != YPfalse) {
                  T26 = CALL1(1,VARREF(Ytail),x_);
                  T25 = CALL1(1,VARREF(Ytail),T26);
                  T24 = CALL1(1,VARREF(YgooSmacrosYnulQ),T25);
                  T23 = CALL1(1,VARREF(Ynot),T24);
                  if (T23 != YPfalse) {
                    T30 = CALL1(1,VARREF(Ytail),x_);
                    T29 = CALL1(1,VARREF(Ytail),T30);
                    T28 = CALL1(1,VARREF(Ytail),T29);
                    T27 = CALL1(1,VARREF(YgooSmacrosYnulQ),T28);
                    T22 = T27;
                  } else {
                    T22 = YPfalse;
                  }
                  T19 = T22;
                } else {
                  T19 = YPfalse;
                }
                if (T19 != YPfalse) {
                  T33 = CALL1(1,VARREF(Ytail),x_);
                  T32 = CALL2(1,VARREF(YevalSsyntaxYmap_tree),VARREF(YevalSsyntaxYbq_remove_tokens),T33);
                  T31 = CALL2(1,VARREF(YgooSmacrosYpair),LITREF(lit_353),T32);
                  T18 = T31;
                } else {
                  if (YPtrue != YPfalse) {
                    T35 = CALL2(1,VARREF(YevalSsyntaxYmap_tree),VARREF(YevalSsyntaxYbq_remove_tokens),x_);
                    T34 = T35;
                  } else {
                    T34 = YPfalse;
                  }
                  T18 = T34;
                }
                T12 = T18;
              }
              T10 = T12;
            }
            T8 = T10;
          }
          T6 = T8;
        }
        T4 = T6;
      }
      T2 = T4;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_syntax_ifQ_145) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_syntax_if_tag));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_syntax_if_value_146) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_syntax_if_pattern_147) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
  T0 = CALL1(1,VARREF(YgooSmacrosY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_syntax_if_then_148) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_syntax_if_else_149) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL3(1,VARREF(YgooScolsScolYelt_or),exp_,YPint((P)3),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_pattern_variableQ_150) {
  P pat_;
  P tmpF4064;
  P T0,T1,T2;
LINK_STACK();
  ARG(pat_, 0);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),pat_);
  tmpF4064 = T2;
  if (tmpF4064 != YPfalse) {
    T0 = tmpF4064;
  } else {
    T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),pat_);
    T0 = T1;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_pattern_variable_name_151) {
  P pat_;
  P T0;
LINK_STACK();
  ARG(pat_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),pat_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_col_152) {
  P pat_;
  P xF4066;
  P tmpF4065;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(pat_, 0);
  T4 = CALL2(1,VARREF(YisaQ),pat_,VARREF(YLlstG));
  T3 = CALL1(1,VARREF(Ynot),T4);
  tmpF4065 = T3;
  if (tmpF4065 != YPfalse) {
    T1 = tmpF4065;
  } else {
    T2 = CALL1(1,VARREF(YgooSmacrosYnulQ),pat_);
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T16 = CALL1(1,VARREF(Yhead),pat_);
    xF4066 = T16;
    T6 = CALL1(1,VARREF(YevalSsyntaxYsexpr_pattern_variableQ),xF4066);
    if (T6 != YPfalse) {
      T8 = CALL1(1,VARREF(YevalSsyntaxYsexpr_pattern_variable_name),xF4066);
      T10 = CALL1(1,VARREF(Ytail),pat_);
      T9 = CALL1(0,FREEREF(0),T10);
      T7 = CALL2(1,VARREF(YgooSmacrosYpair),T8,T9);
      T5 = T7;
    } else {
      T13 = CALL1(1,VARREF(Yhead),pat_);
      T12 = CALL1(0,FREEREF(0),T13);
      T15 = CALL1(1,VARREF(Ytail),pat_);
      T14 = CALL1(0,FREEREF(0),T15);
      T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,T14);
      T5 = T11;
    }
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sexpr_bind_pattern_variables_153) {
  P pat_;
  P colF4067;
  P T0,T1,T2;
LINK_STACK();
  ARG(pat_, 0);
  T2 = FUNSHELL(1,fun_col_152,1);
  colF4067 = T2;
  FUNINIT(colF4067, 1,colF4067);
  T1 = CALL1(1,colF4067,pat_);
  T0 = CALL1(1,VARREF(YgooScolsSseqYdel_dups),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sexpr_make_macro_function_154) {
  P name_,exp_;
  P funcF4069;
  P mifF4068;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(name_, 0);
  ARG(exp_, 1);
  T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_parameters),exp_);
  T6 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_body),exp_);
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T6);
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_374));
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T12 = CALL1(1,VARREF(Ylst),name_);
  T10 = CALL3(1,VARREF(YgooSmacrosYcat),T11,T12,Ynil);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_373));
  T7 = CALL4(1,VARREF(YgooSmacrosYcat),T8,T9,T13,LITREF(lit_71));
  T3 = CALL4(1,VARREF(YevalSsyntaxYsexpr_make_syntax_if),T4,LITREF(lit_373),T5,T7);
  mifF4068 = T3;
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_373));
  T2 = CALL1(1,VARREF(Ylst),mifF4068);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),T1,T2);
  funcF4069 = T0;
UNLINK_STACK();
  QRET(funcF4069);
}

P YevalSsyntaxY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144;
DEFCREGS();
  lit_0 = YPPsym((P)"sexpr-self-evaluating?");
  lit_1 = YPPlist(1,YPPsym((P)"exp"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_self_evaluatingQ_0 = YPfab_met(FUNCODEREF(fun_sexpr_self_evaluatingQ_0),T0,LITREF(lit_0),LITREF(lit_1),sloc(8),YPfalse);
  T2 = VARREF_OR(YevalSsyntaxYsexpr_self_evaluatingQ,YPfalse);
  T3 = fun_sexpr_self_evaluatingQ_0;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSsyntaxYsexpr_self_evaluatingQ,T1);
  lit_2 = YPPsym((P)"sexpr-variable?");
  lit_3 = YPPlist(1,YPPsym((P)"exp"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_variableQ_1 = YPfab_met(FUNCODEREF(fun_sexpr_variableQ_1),T4,LITREF(lit_2),LITREF(lit_3),sloc(19),YPfalse);
  T6 = VARREF_OR(YevalSsyntaxYsexpr_variableQ,YPfalse);
  T7 = fun_sexpr_variableQ_1;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSsyntaxYsexpr_variableQ,T5);
  lit_4 = YPPsym((P)"sexpr-tagged-list?");
  lit_5 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"tag"));
  T8 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_sexpr_tagged_listQ_2 = YPfab_met(FUNCODEREF(fun_sexpr_tagged_listQ_2),T8,LITREF(lit_4),LITREF(lit_5),sloc(24),YPfalse);
  T10 = VARREF_OR(YevalSsyntaxYsexpr_tagged_listQ,YPfalse);
  T11 = fun_sexpr_tagged_listQ_2;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSsyntaxYsexpr_tagged_listQ,T9);
  lit_6 = YPPsym((P)"quote");
  VARSET(YevalSsyntaxYDsexpr_quote_tag,LITREF(lit_6));
  lit_7 = YPPsym((P)"sexpr-quoted?");
  lit_8 = YPPlist(1,YPPsym((P)"exp"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_quotedQ_3 = YPfab_met(FUNCODEREF(fun_sexpr_quotedQ_3),T12,LITREF(lit_7),LITREF(lit_8),sloc(31),YPfalse);
  T14 = VARREF_OR(YevalSsyntaxYsexpr_quotedQ,YPfalse);
  T15 = fun_sexpr_quotedQ_3;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSsyntaxYsexpr_quotedQ,T13);
  lit_9 = YPPsym((P)"sexpr-make-quote");
  lit_10 = YPPlist(1,YPPsym((P)"exp"));
  T16 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_make_quote_4 = YPfab_met(FUNCODEREF(fun_sexpr_make_quote_4),T16,LITREF(lit_9),LITREF(lit_10),sloc(34),YPfalse);
  T18 = VARREF_OR(YevalSsyntaxYsexpr_make_quote,YPfalse);
  T19 = fun_sexpr_make_quote_4;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSsyntaxYsexpr_make_quote,T17);
  lit_11 = YPPsym((P)"sexpr-text-of-quotation");
  lit_12 = YPPlist(1,YPPsym((P)"quot"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_text_of_quotation_5 = YPfab_met(FUNCODEREF(fun_sexpr_text_of_quotation_5),T20,LITREF(lit_11),LITREF(lit_12),sloc(37),YPfalse);
  T22 = VARREF_OR(YevalSsyntaxYsexpr_text_of_quotation,YPfalse);
  T23 = fun_sexpr_text_of_quotation_5;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSsyntaxYsexpr_text_of_quotation,T21);
  lit_13 = YPPsym((P)"set");
  VARSET(YevalSsyntaxYDsexpr_set_tag,LITREF(lit_13));
  lit_14 = YPPsym((P)"sexpr-assignment?");
  lit_15 = YPPlist(1,YPPsym((P)"exp"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_assignmentQ_6 = YPfab_met(FUNCODEREF(fun_sexpr_assignmentQ_6),T24,LITREF(lit_14),LITREF(lit_15),sloc(44),YPfalse);
  T26 = VARREF_OR(YevalSsyntaxYsexpr_assignmentQ,YPfalse);
  T27 = fun_sexpr_assignmentQ_6;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSsyntaxYsexpr_assignmentQ,T25);
  lit_16 = YPPsym((P)"sexpr-assignment-variable");
  lit_17 = YPPlist(1,YPPsym((P)"assn"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_assignment_variable_7 = YPfab_met(FUNCODEREF(fun_sexpr_assignment_variable_7),T28,LITREF(lit_16),LITREF(lit_17),sloc(47),YPfalse);
  T30 = VARREF_OR(YevalSsyntaxYsexpr_assignment_variable,YPfalse);
  T31 = fun_sexpr_assignment_variable_7;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YevalSsyntaxYsexpr_assignment_variable,T29);
  lit_18 = YPPsym((P)"sexpr-assignment-value");
  lit_19 = YPPlist(1,YPPsym((P)"assn"));
  T32 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_assignment_value_8 = YPfab_met(FUNCODEREF(fun_sexpr_assignment_value_8),T32,LITREF(lit_18),LITREF(lit_19),sloc(50),YPfalse);
  T34 = VARREF_OR(YevalSsyntaxYsexpr_assignment_value,YPfalse);
  T35 = fun_sexpr_assignment_value_8;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YevalSsyntaxYsexpr_assignment_value,T33);
  lit_20 = YPPsym((P)"sexpr-variable-name");
  lit_21 = YPPlist(1,YPPsym((P)"exp"));
  T36 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_name_9 = YPfab_met(FUNCODEREF(fun_sexpr_variable_name_9),T36,LITREF(lit_20),LITREF(lit_21),sloc(55),YPfalse);
  T38 = VARREF_OR(YevalSsyntaxYsexpr_variable_name,YPfalse);
  T39 = fun_sexpr_variable_name_9;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YevalSsyntaxYsexpr_variable_name,T37);
  lit_22 = YPPlist(1,YPPsym((P)"exp"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_name_10 = YPfab_met(FUNCODEREF(fun_sexpr_variable_name_10),T40,LITREF(lit_20),LITREF(lit_22),sloc(58),YPfalse);
  T42 = VARREF_OR(YevalSsyntaxYsexpr_variable_name,YPfalse);
  T43 = fun_sexpr_variable_name_10;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSsyntaxYsexpr_variable_name,T41);
  lit_23 = YPPsym((P)"sexpr-variable-type");
  lit_24 = YPPlist(1,YPPsym((P)"exp"));
  T44 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_type_11 = YPfab_met(FUNCODEREF(fun_sexpr_variable_type_11),T44,LITREF(lit_23),LITREF(lit_24),sloc(61),YPfalse);
  T46 = VARREF_OR(YevalSsyntaxYsexpr_variable_type,YPfalse);
  T47 = fun_sexpr_variable_type_11;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YevalSsyntaxYsexpr_variable_type,T45);
  lit_25 = YPPlist(1,YPPsym((P)"exp"));
  lit_26 = YPPsym((P)"<any>");
  T48 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_type_12 = YPfab_met(FUNCODEREF(fun_sexpr_variable_type_12),T48,LITREF(lit_23),LITREF(lit_25),sloc(64),YPfalse);
  T50 = VARREF_OR(YevalSsyntaxYsexpr_variable_type,YPfalse);
  T51 = fun_sexpr_variable_type_12;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YevalSsyntaxYsexpr_variable_type,T49);
  lit_27 = YPPsym((P)"d.");
  VARSET(YevalSsyntaxYDsexpr_define_constant_tag,LITREF(lit_27));
  lit_28 = YPPsym((P)"sexpr-define-constant?");
  lit_29 = YPPlist(1,YPPsym((P)"exp"));
  T52 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_define_constantQ_13 = YPfab_met(FUNCODEREF(fun_sexpr_define_constantQ_13),T52,LITREF(lit_28),LITREF(lit_29),sloc(71),YPfalse);
  T54 = VARREF_OR(YevalSsyntaxYsexpr_define_constantQ,YPfalse);
  T55 = fun_sexpr_define_constantQ_13;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YevalSsyntaxYsexpr_define_constantQ,T53);
  lit_30 = YPPsym((P)"dv");
  VARSET(YevalSsyntaxYDsexpr_define_tag,LITREF(lit_30));
  lit_31 = YPPsym((P)"sexpr-definition?");
  lit_32 = YPPlist(1,YPPsym((P)"exp"));
  T56 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_definitionQ_14 = YPfab_met(FUNCODEREF(fun_sexpr_definitionQ_14),T56,LITREF(lit_31),LITREF(lit_32),sloc(76),YPfalse);
  T58 = VARREF_OR(YevalSsyntaxYsexpr_definitionQ,YPfalse);
  T59 = fun_sexpr_definitionQ_14;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YevalSsyntaxYsexpr_definitionQ,T57);
  lit_33 = YPPsym((P)"quasiquote");
  VARSET(YevalSsyntaxYDsexpr_quasiquote_tag,LITREF(lit_33));
  lit_34 = YPPsym((P)"sexpr-definition-variable");
  lit_35 = YPPlist(1,YPPsym((P)"defn"));
  T60 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_definition_variable_15 = YPfab_met(FUNCODEREF(fun_sexpr_definition_variable_15),T60,LITREF(lit_34),LITREF(lit_35),sloc(81),YPfalse);
  T62 = VARREF_OR(YevalSsyntaxYsexpr_definition_variable,YPfalse);
  T63 = fun_sexpr_definition_variable_15;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSsyntaxYsexpr_definition_variable,T61);
  lit_36 = YPPsym((P)"sexpr-definition-value");
  lit_37 = YPPlist(1,YPPsym((P)"defn"));
  T64 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_definition_value_16 = YPfab_met(FUNCODEREF(fun_sexpr_definition_value_16),T64,LITREF(lit_36),LITREF(lit_37),sloc(84),YPfalse);
  T66 = VARREF_OR(YevalSsyntaxYsexpr_definition_value,YPfalse);
  T67 = fun_sexpr_definition_value_16;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSsyntaxYsexpr_definition_value,T65);
  lit_38 = YPPsym((P)"ds");
  VARSET(YevalSsyntaxYDsexpr_define_syntax_tag,LITREF(lit_38));
  lit_39 = YPPsym((P)"sexpr-syntax-definition?");
  lit_40 = YPPlist(1,YPPsym((P)"exp"));
  T68 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_syntax_definitionQ_17 = YPfab_met(FUNCODEREF(fun_sexpr_syntax_definitionQ_17),T68,LITREF(lit_39),LITREF(lit_40),sloc(89),YPfalse);
  T70 = VARREF_OR(YevalSsyntaxYsexpr_syntax_definitionQ,YPfalse);
  T71 = fun_sexpr_syntax_definitionQ_17;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YevalSsyntaxYsexpr_syntax_definitionQ,T69);
  lit_41 = YPPsym((P)"mac");
  VARSET(YevalSsyntaxYDsexpr_macro_tag,LITREF(lit_41));
  lit_42 = YPPsym((P)"sexpr-syntax-definition-variable");
  lit_43 = YPPlist(1,YPPsym((P)"defn"));
  T72 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_definition_variable_18 = YPfab_met(FUNCODEREF(fun_sexpr_syntax_definition_variable_18),T72,LITREF(lit_42),LITREF(lit_43),sloc(94),YPfalse);
  T74 = VARREF_OR(YevalSsyntaxYsexpr_syntax_definition_variable,YPfalse);
  T75 = fun_sexpr_syntax_definition_variable_18;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YevalSsyntaxYsexpr_syntax_definition_variable,T73);
  lit_44 = YPPsym((P)"sexpr-syntax-definition-value");
  lit_45 = YPPlist(1,YPPsym((P)"defn"));
  T76 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_definition_value_19 = YPfab_met(FUNCODEREF(fun_sexpr_syntax_definition_value_19),T76,LITREF(lit_44),LITREF(lit_45),sloc(97),YPfalse);
  T78 = VARREF_OR(YevalSsyntaxYsexpr_syntax_definition_value,YPfalse);
  T79 = fun_sexpr_syntax_definition_value_19;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YevalSsyntaxYsexpr_syntax_definition_value,T77);
  lit_46 = YPPsym((P)"df");
  VARSET(YevalSsyntaxYDsexpr_define_function_tag,LITREF(lit_46));
  lit_47 = YPPsym((P)"sexpr-function-definition?");
  lit_48 = YPPlist(1,YPPsym((P)"exp"));
  T80 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_function_definitionQ_20 = YPfab_met(FUNCODEREF(fun_sexpr_function_definitionQ_20),T80,LITREF(lit_47),LITREF(lit_48),sloc(103),YPfalse);
  T82 = VARREF_OR(YevalSsyntaxYsexpr_function_definitionQ,YPfalse);
  T83 = fun_sexpr_function_definitionQ_20;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalSsyntaxYsexpr_function_definitionQ,T81);
  lit_49 = YPPsym((P)"dm");
  VARSET(YevalSsyntaxYDsexpr_define_method_tag,LITREF(lit_49));
  lit_50 = YPPsym((P)"sexpr-method-definition?");
  lit_51 = YPPlist(1,YPPsym((P)"exp"));
  T84 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_method_definitionQ_21 = YPfab_met(FUNCODEREF(fun_sexpr_method_definitionQ_21),T84,LITREF(lit_50),LITREF(lit_51),sloc(108),YPfalse);
  T86 = VARREF_OR(YevalSsyntaxYsexpr_method_definitionQ,YPfalse);
  T87 = fun_sexpr_method_definitionQ_21;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YevalSsyntaxYsexpr_method_definitionQ,T85);
  lit_52 = YPPsym((P)"dg");
  VARSET(YevalSsyntaxYDsexpr_define_generic_tag,LITREF(lit_52));
  lit_53 = YPPsym((P)"sexpr-generic-definition?");
  lit_54 = YPPlist(1,YPPsym((P)"exp"));
  T88 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_generic_definitionQ_22 = YPfab_met(FUNCODEREF(fun_sexpr_generic_definitionQ_22),T88,LITREF(lit_53),LITREF(lit_54),sloc(113),YPfalse);
  T90 = VARREF_OR(YevalSsyntaxYsexpr_generic_definitionQ,YPfalse);
  T91 = fun_sexpr_generic_definitionQ_22;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YevalSsyntaxYsexpr_generic_definitionQ,T89);
  lit_55 = YPPsym((P)"sexpr-function-definition-variable");
  lit_56 = YPPlist(1,YPPsym((P)"defn"));
  T92 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_definition_variable_23 = YPfab_met(FUNCODEREF(fun_sexpr_function_definition_variable_23),T92,LITREF(lit_55),LITREF(lit_56),sloc(118),YPfalse);
  T94 = VARREF_OR(YevalSsyntaxYsexpr_function_definition_variable,YPfalse);
  T95 = fun_sexpr_function_definition_variable_23;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YevalSsyntaxYsexpr_function_definition_variable,T93);
  lit_57 = YPPsym((P)"sexpr-function-definition-adjectives");
  lit_58 = YPPlist(1,YPPsym((P)"defn"));
  T96 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_definition_adjectives_24 = YPfab_met(FUNCODEREF(fun_sexpr_function_definition_adjectives_24),T96,LITREF(lit_57),LITREF(lit_58),sloc(124),YPfalse);
  T98 = VARREF_OR(YevalSsyntaxYsexpr_function_definition_adjectives,YPfalse);
  T99 = fun_sexpr_function_definition_adjectives_24;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YevalSsyntaxYsexpr_function_definition_adjectives,T97);
  lit_59 = YPPsym((P)"sexpr-forward-primitive?");
  lit_60 = YPPlist(1,YPPsym((P)"defn"));
  T100 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_forward_primitiveQ_25 = YPfab_met(FUNCODEREF(fun_sexpr_forward_primitiveQ_25),T100,LITREF(lit_59),LITREF(lit_60),sloc(130),YPfalse);
  T102 = VARREF_OR(YevalSsyntaxYsexpr_forward_primitiveQ,YPfalse);
  T103 = fun_sexpr_forward_primitiveQ_25;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YevalSsyntaxYsexpr_forward_primitiveQ,T101);
  lit_61 = YPPsym((P)"sexpr-signature-parameters");
  lit_62 = YPPlist(1,YPPsym((P)"signature"));
  lit_63 = YPPsym((P)"=>");
  T104 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_signature_parameters_26 = YPfab_met(FUNCODEREF(fun_sexpr_signature_parameters_26),T104,LITREF(lit_61),LITREF(lit_62),sloc(133),YPfalse);
  T106 = VARREF_OR(YevalSsyntaxYsexpr_signature_parameters,YPfalse);
  T107 = fun_sexpr_signature_parameters_26;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YevalSsyntaxYsexpr_signature_parameters,T105);
  lit_64 = YPPsym((P)"sexpr-value-type");
  lit_65 = YPPlist(1,YPPsym((P)"x"));
  T108 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_value_type_27 = YPfab_met(FUNCODEREF(fun_sexpr_value_type_27),T108,LITREF(lit_64),LITREF(lit_65),sloc(139),YPfalse);
  T110 = VARREF_OR(YevalSsyntaxYsexpr_value_type,YPfalse);
  T111 = fun_sexpr_value_type_27;
  T109 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T110,T111);
  VARSET(YevalSsyntaxYsexpr_value_type,T109);
  lit_66 = YPPlist(1,YPPsym((P)"x"));
  T112 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_value_type_28 = YPfab_met(FUNCODEREF(fun_sexpr_value_type_28),T112,LITREF(lit_64),LITREF(lit_66),sloc(141),YPfalse);
  T114 = VARREF_OR(YevalSsyntaxYsexpr_value_type,YPfalse);
  T115 = fun_sexpr_value_type_28;
  T113 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T114,T115);
  VARSET(YevalSsyntaxYsexpr_value_type,T113);
  lit_67 = YPPsym((P)"sexpr-signature-value");
  lit_68 = YPPlist(1,YPPsym((P)"signature"));
  lit_69 = YPPsym((P)"tup");
  lit_70 = YPPsym((P)"t*");
  lit_71 = Ynil;
  T116 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_signature_value_29 = YPfab_met(FUNCODEREF(fun_sexpr_signature_value_29),T116,LITREF(lit_67),LITREF(lit_68),sloc(143),YPfalse);
  T118 = VARREF_OR(YevalSsyntaxYsexpr_signature_value,YPfalse);
  T119 = fun_sexpr_signature_value_29;
  T117 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T118,T119);
  VARSET(YevalSsyntaxYsexpr_signature_value,T117);
  lit_72 = YPPsym((P)"as-signature");
  lit_73 = YPPlist(1,YPPsym((P)"sig"));
  T120 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YevalSsyntaxYas_signature = YPfab_met(FUNCODEREF(YevalSsyntaxYas_signature),T120,LITREF(lit_72),LITREF(lit_73),sloc(151),YPfalse);
  T121 = YevalSsyntaxYas_signature;
  VARSET(YevalSsyntaxYas_signature,T121);
  lit_74 = YPPsym((P)"sexpr-function-signature");
  lit_75 = YPPlist(1,YPPsym((P)"defn"));
  T122 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_function_signature_31 = YPfab_met(FUNCODEREF(fun_sexpr_function_signature_31),T122,LITREF(lit_74),LITREF(lit_75),sloc(154),YPfalse);
  T124 = VARREF_OR(YevalSsyntaxYsexpr_function_signature,YPfalse);
  T125 = fun_sexpr_function_signature_31;
  T123 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T124,T125);
  VARSET(YevalSsyntaxYsexpr_function_signature,T123);
  lit_76 = YPPsym((P)"sexpr-function-parameters");
  lit_77 = YPPlist(1,YPPsym((P)"defn"));
  T126 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_function_parameters_32 = YPfab_met(FUNCODEREF(fun_sexpr_function_parameters_32),T126,LITREF(lit_76),LITREF(lit_77),sloc(157),YPfalse);
  T128 = VARREF_OR(YevalSsyntaxYsexpr_function_parameters,YPfalse);
  T129 = fun_sexpr_function_parameters_32;
  T127 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T128,T129);
  VARSET(YevalSsyntaxYsexpr_function_parameters,T127);
  lit_78 = YPPsym((P)"sexpr-function-value");
  lit_79 = YPPlist(1,YPPsym((P)"defn"));
  T130 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_value_33 = YPfab_met(FUNCODEREF(fun_sexpr_function_value_33),T130,LITREF(lit_78),LITREF(lit_79),sloc(160),YPfalse);
  T132 = VARREF_OR(YevalSsyntaxYsexpr_function_value,YPfalse);
  T133 = fun_sexpr_function_value_33;
  T131 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T132,T133);
  VARSET(YevalSsyntaxYsexpr_function_value,T131);
  lit_80 = YPPsym((P)"sexpr-function-body");
  lit_81 = YPPlist(1,YPPsym((P)"defn"));
  T134 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_body_34 = YPfab_met(FUNCODEREF(fun_sexpr_function_body_34),T134,LITREF(lit_80),LITREF(lit_81),sloc(163),YPfalse);
  T136 = VARREF_OR(YevalSsyntaxYsexpr_function_body,YPfalse);
  T137 = fun_sexpr_function_body_34;
  T135 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T136,T137);
  VARSET(YevalSsyntaxYsexpr_function_body,T135);
  lit_82 = YPPsym((P)"fun");
  VARSET(YevalSsyntaxYDsexpr_method_tag,LITREF(lit_82));
  lit_83 = YPPsym((P)"sexpr-function-definition-value");
  lit_84 = YPPlist(1,YPPsym((P)"defn"));
  T140 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T139 = fun_sexpr_function_definition_value_35 = YPfab_met(FUNCODEREF(fun_sexpr_function_definition_value_35),T140,LITREF(lit_83),LITREF(lit_84),sloc(169),YPfalse);
  T143 = VARREF_OR(YevalSsyntaxYsexpr_function_definition_value,YPfalse);
  T144 = fun_sexpr_function_definition_value_35;
  T142 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T143,T144);
  T141 = VARSET(YevalSsyntaxYsexpr_function_definition_value,T142);
  T138 = T141;
  return T138;
}

P YevalSsyntaxY___main_1___() {
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
  P T176;
DEFCREGS();
  lit_85 = YPPsym((P)"sexpr-method?");
  lit_86 = YPPlist(1,YPPsym((P)"exp"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_methodQ_36 = YPfab_met(FUNCODEREF(fun_sexpr_methodQ_36),T0,LITREF(lit_85),LITREF(lit_86),sloc(176),YPfalse);
  T2 = VARREF_OR(YevalSsyntaxYsexpr_methodQ,YPfalse);
  T3 = fun_sexpr_methodQ_36;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSsyntaxYsexpr_methodQ,T1);
  lit_87 = YPPsym((P)"sexpr-method-signature");
  lit_88 = YPPlist(1,YPPsym((P)"method-exp"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_signature_37 = YPfab_met(FUNCODEREF(fun_sexpr_method_signature_37),T4,LITREF(lit_87),LITREF(lit_88),sloc(179),YPfalse);
  T6 = VARREF_OR(YevalSsyntaxYsexpr_method_signature,YPfalse);
  T7 = fun_sexpr_method_signature_37;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSsyntaxYsexpr_method_signature,T5);
  lit_89 = YPPsym((P)"sexpr-method-parameters");
  lit_90 = YPPlist(1,YPPsym((P)"method-exp"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_parameters_38 = YPfab_met(FUNCODEREF(fun_sexpr_method_parameters_38),T8,LITREF(lit_89),LITREF(lit_90),sloc(182),YPfalse);
  T10 = VARREF_OR(YevalSsyntaxYsexpr_method_parameters,YPfalse);
  T11 = fun_sexpr_method_parameters_38;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSsyntaxYsexpr_method_parameters,T9);
  lit_91 = YPPsym((P)"sexpr-method-value");
  lit_92 = YPPlist(1,YPPsym((P)"method-exp"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_method_value_39 = YPfab_met(FUNCODEREF(fun_sexpr_method_value_39),T12,LITREF(lit_91),LITREF(lit_92),sloc(185),YPfalse);
  T14 = VARREF_OR(YevalSsyntaxYsexpr_method_value,YPfalse);
  T15 = fun_sexpr_method_value_39;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSsyntaxYsexpr_method_value,T13);
  lit_93 = YPPsym((P)"sexpr-method-body");
  lit_94 = YPPlist(1,YPPsym((P)"method-exp"));
  T16 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_body_40 = YPfab_met(FUNCODEREF(fun_sexpr_method_body_40),T16,LITREF(lit_93),LITREF(lit_94),sloc(188),YPfalse);
  T18 = VARREF_OR(YevalSsyntaxYsexpr_method_body,YPfalse);
  T19 = fun_sexpr_method_body_40;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSsyntaxYsexpr_method_body,T17);
  lit_95 = YPPsym((P)"sexpr-make-anonymous-method");
  lit_96 = YPPlist(2,YPPsym((P)"parameters"),YPPsym((P)"body"));
  T20 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_make_anonymous_method_41 = YPfab_met(FUNCODEREF(fun_sexpr_make_anonymous_method_41),T20,LITREF(lit_95),LITREF(lit_96),sloc(193),YPfalse);
  T22 = VARREF_OR(YevalSsyntaxYsexpr_make_anonymous_method,YPfalse);
  T23 = fun_sexpr_make_anonymous_method_41;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSsyntaxYsexpr_make_anonymous_method,T21);
  lit_97 = YPPsym((P)"sexpr-make-method");
  lit_98 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"parameters"),YPPsym((P)"body"));
  T24 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_make_method_42 = YPfab_met(FUNCODEREF(fun_sexpr_make_method_42),T24,LITREF(lit_97),LITREF(lit_98),sloc(198),YPfalse);
  T26 = VARREF_OR(YevalSsyntaxYsexpr_make_method,YPfalse);
  T27 = fun_sexpr_make_method_42;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSsyntaxYsexpr_make_method,T25);
  lit_99 = YPPsym((P)"if");
  VARSET(YevalSsyntaxYDsexpr_if_tag,LITREF(lit_99));
  lit_100 = YPPsym((P)"sexpr-if?");
  lit_101 = YPPlist(1,YPPsym((P)"exp"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_ifQ_43 = YPfab_met(FUNCODEREF(fun_sexpr_ifQ_43),T28,LITREF(lit_100),LITREF(lit_101),sloc(206),YPfalse);
  T30 = VARREF_OR(YevalSsyntaxYsexpr_ifQ,YPfalse);
  T31 = fun_sexpr_ifQ_43;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YevalSsyntaxYsexpr_ifQ,T29);
  lit_102 = YPPsym((P)"sexpr-if-test");
  lit_103 = YPPlist(1,YPPsym((P)"exp"));
  T32 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_test_44 = YPfab_met(FUNCODEREF(fun_sexpr_if_test_44),T32,LITREF(lit_102),LITREF(lit_103),sloc(209),YPfalse);
  T34 = VARREF_OR(YevalSsyntaxYsexpr_if_test,YPfalse);
  T35 = fun_sexpr_if_test_44;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YevalSsyntaxYsexpr_if_test,T33);
  lit_104 = YPPsym((P)"sexpr-if-then");
  lit_105 = YPPlist(1,YPPsym((P)"exp"));
  T36 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_then_45 = YPfab_met(FUNCODEREF(fun_sexpr_if_then_45),T36,LITREF(lit_104),LITREF(lit_105),sloc(212),YPfalse);
  T38 = VARREF_OR(YevalSsyntaxYsexpr_if_then,YPfalse);
  T39 = fun_sexpr_if_then_45;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YevalSsyntaxYsexpr_if_then,T37);
  lit_106 = YPPsym((P)"sexpr-if-else");
  lit_107 = YPPlist(1,YPPsym((P)"exp"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_else_46 = YPfab_met(FUNCODEREF(fun_sexpr_if_else_46),T40,LITREF(lit_106),LITREF(lit_107),sloc(215),YPfalse);
  T42 = VARREF_OR(YevalSsyntaxYsexpr_if_else,YPfalse);
  T43 = fun_sexpr_if_else_46;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSsyntaxYsexpr_if_else,T41);
  lit_108 = YPPsym((P)"sexpr-make-if");
  lit_109 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"then"),YPPsym((P)"else"));
  T44 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_make_if_47 = YPfab_met(FUNCODEREF(fun_sexpr_make_if_47),T44,LITREF(lit_108),LITREF(lit_109),sloc(220),YPfalse);
  T46 = VARREF_OR(YevalSsyntaxYsexpr_make_if,YPfalse);
  T47 = fun_sexpr_make_if_47;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YevalSsyntaxYsexpr_make_if,T45);
  lit_110 = YPPsym((P)"esc");
  VARSET(YevalSsyntaxYDsexpr_bind_exit_tag,LITREF(lit_110));
  lit_111 = YPPsym((P)"sexpr-block?");
  lit_112 = YPPlist(1,YPPsym((P)"exp"));
  T48 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_blockQ_48 = YPfab_met(FUNCODEREF(fun_sexpr_blockQ_48),T48,LITREF(lit_111),LITREF(lit_112),sloc(227),YPfalse);
  T50 = VARREF_OR(YevalSsyntaxYsexpr_blockQ,YPfalse);
  T51 = fun_sexpr_blockQ_48;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YevalSsyntaxYsexpr_blockQ,T49);
  lit_113 = YPPsym((P)"sexpr-block-name");
  lit_114 = YPPlist(1,YPPsym((P)"exp"));
  T52 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_block_name_49 = YPfab_met(FUNCODEREF(fun_sexpr_block_name_49),T52,LITREF(lit_113),LITREF(lit_114),sloc(232),YPfalse);
  T54 = VARREF_OR(YevalSsyntaxYsexpr_block_name,YPfalse);
  T55 = fun_sexpr_block_name_49;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YevalSsyntaxYsexpr_block_name,T53);
  lit_115 = YPPsym((P)"sexpr-block-body");
  lit_116 = YPPlist(1,YPPsym((P)"exp"));
  T56 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_block_body_50 = YPfab_met(FUNCODEREF(fun_sexpr_block_body_50),T56,LITREF(lit_115),LITREF(lit_116),sloc(235),YPfalse);
  T58 = VARREF_OR(YevalSsyntaxYsexpr_block_body,YPfalse);
  T59 = fun_sexpr_block_body_50;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YevalSsyntaxYsexpr_block_body,T57);
  lit_117 = YPPsym((P)"fin");
  VARSET(YevalSsyntaxYDsexpr_unwind_protect_tag,LITREF(lit_117));
  lit_118 = YPPsym((P)"sexpr-unwind-protect?");
  lit_119 = YPPlist(1,YPPsym((P)"exp"));
  T60 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unwind_protectQ_51 = YPfab_met(FUNCODEREF(fun_sexpr_unwind_protectQ_51),T60,LITREF(lit_118),LITREF(lit_119),sloc(242),YPfalse);
  T62 = VARREF_OR(YevalSsyntaxYsexpr_unwind_protectQ,YPfalse);
  T63 = fun_sexpr_unwind_protectQ_51;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSsyntaxYsexpr_unwind_protectQ,T61);
  lit_120 = YPPsym((P)"sexpr-unwind-protect-protected-form");
  lit_121 = YPPlist(1,YPPsym((P)"exp"));
  T64 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_unwind_protect_protected_form_52 = YPfab_met(FUNCODEREF(fun_sexpr_unwind_protect_protected_form_52),T64,LITREF(lit_120),LITREF(lit_121),sloc(245),YPfalse);
  T66 = VARREF_OR(YevalSsyntaxYsexpr_unwind_protect_protected_form,YPfalse);
  T67 = fun_sexpr_unwind_protect_protected_form_52;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSsyntaxYsexpr_unwind_protect_protected_form,T65);
  lit_122 = YPPsym((P)"sexpr-unwind-protect-cleanup-forms");
  lit_123 = YPPlist(1,YPPsym((P)"exp"));
  T68 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_unwind_protect_cleanup_forms_53 = YPfab_met(FUNCODEREF(fun_sexpr_unwind_protect_cleanup_forms_53),T68,LITREF(lit_122),LITREF(lit_123),sloc(248),YPfalse);
  T70 = VARREF_OR(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,YPfalse);
  T71 = fun_sexpr_unwind_protect_cleanup_forms_53;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,T69);
  lit_124 = YPPsym((P)"try");
  VARSET(YevalSsyntaxYDsexpr_monitor_tag,LITREF(lit_124));
  lit_125 = YPPsym((P)"sexpr-monitor?");
  lit_126 = YPPlist(1,YPPsym((P)"exp"));
  T72 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_monitorQ_54 = YPfab_met(FUNCODEREF(fun_sexpr_monitorQ_54),T72,LITREF(lit_125),LITREF(lit_126),sloc(255),YPfalse);
  T74 = VARREF_OR(YevalSsyntaxYsexpr_monitorQ,YPfalse);
  T75 = fun_sexpr_monitorQ_54;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YevalSsyntaxYsexpr_monitorQ,T73);
  lit_127 = YPPsym((P)"sexpr-monitor-expand");
  lit_128 = YPPlist(1,YPPsym((P)"exp"));
  lit_129 = YPPlist(1,YPPsym((P)"return"));
  lit_130 = YPPsym((P)"x-1471");
  lit_131 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_132 = YPsb((P)"Malformed TRY expression: ~=");
  lit_133 = YPsb((P)"Match Pattern Failure");
  lit_134 = YPPsym((P)"type");
  T78 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1471_55 = YPfab_met(FUNCODEREF(fun_x_1471_55),T78,LITREF(lit_130),LITREF(lit_131),YPfalse,YPfalse);
  T77 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_56 = YPfab_met(FUNCODEREF(fun_56),T77,YPfalse,LITREF(lit_129),YPfalse,YPfalse);
  T76 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_expand_57 = YPfab_met(FUNCODEREF(fun_sexpr_monitor_expand_57),T76,LITREF(lit_127),LITREF(lit_128),sloc(258),YPfalse);
  T80 = VARREF_OR(YevalSsyntaxYsexpr_monitor_expand,YPfalse);
  T81 = fun_sexpr_monitor_expand_57;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YevalSsyntaxYsexpr_monitor_expand,T79);
  lit_135 = YPPsym((P)"find-option");
  lit_136 = YPPlist(3,YPPsym((P)"options"),YPPsym((P)"option"),YPPsym((P)"default"));
  T82 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLsymG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSsyntaxYfind_option = YPfab_met(FUNCODEREF(YevalSsyntaxYfind_option),T82,LITREF(lit_135),LITREF(lit_136),sloc(269),YPfalse);
  T83 = YevalSsyntaxYfind_option;
  VARSET(YevalSsyntaxYfind_option,T83);
  lit_137 = YPPsym((P)"sexpr-monitor-type");
  lit_138 = YPPlist(1,YPPsym((P)"options"));
  lit_139 = YPPlist(1,YPPsym((P)"<condition>"));
  lit_140 = YPPlist(1,YPPsym((P)"return"));
  lit_141 = YPPsym((P)"x-1473");
  lit_142 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_143 = YPsb((P)"Malformed TRY condition type: %=");
  T86 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1473_59 = YPfab_met(FUNCODEREF(fun_x_1473_59),T86,LITREF(lit_141),LITREF(lit_142),YPfalse,YPfalse);
  T85 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_60 = YPfab_met(FUNCODEREF(fun_60),T85,YPfalse,LITREF(lit_140),YPfalse,YPfalse);
  T84 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_type_61 = YPfab_met(FUNCODEREF(fun_sexpr_monitor_type_61),T84,LITREF(lit_137),LITREF(lit_138),sloc(275),YPfalse);
  T88 = VARREF_OR(YevalSsyntaxYsexpr_monitor_type,YPfalse);
  T89 = fun_sexpr_monitor_type_61;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YevalSsyntaxYsexpr_monitor_type,T87);
  lit_144 = YPPsym((P)"sexpr-monitor-info");
  lit_145 = YPPlist(1,YPPsym((P)"options"));
  lit_146 = YPPsym((P)"info");
  lit_147 = YPPsym((P)"description");
  lit_148 = YPsb((P)"TRY may only have one of INFO or DESCRIPTION: %=");
  lit_149 = YPPlist(1,YPPsym((P)"return"));
  lit_150 = YPPsym((P)"x-1475");
  lit_151 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_152 = YPsb((P)"Malformed TRY info expression: %=");
  lit_153 = YPPlist(1,YPPsym((P)"return"));
  lit_154 = YPPsym((P)"x-1477");
  lit_155 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_156 = YPsb((P)"Malformed TRY description: %=");
  lit_157 = YPPsym((P)"new");
  lit_158 = YPPsym((P)"<simple-handler-info>");
  lit_159 = YPPsym((P)"handler-info-message");
  lit_160 = YPPsym((P)"handler-info-arguments");
  lit_161 = YPPsym((P)"lst");
  lit_162 = YPPsym((P)"$default-handler-info");
  T94 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1475_62 = YPfab_met(FUNCODEREF(fun_x_1475_62),T94,LITREF(lit_150),LITREF(lit_151),YPfalse,YPfalse);
  T93 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPfab_met(FUNCODEREF(fun_63),T93,YPfalse,LITREF(lit_149),YPfalse,YPfalse);
  T92 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1477_64 = YPfab_met(FUNCODEREF(fun_x_1477_64),T92,LITREF(lit_154),LITREF(lit_155),YPfalse,YPfalse);
  T91 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPfab_met(FUNCODEREF(fun_65),T91,YPfalse,LITREF(lit_153),YPfalse,YPfalse);
  T90 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_info_66 = YPfab_met(FUNCODEREF(fun_sexpr_monitor_info_66),T90,LITREF(lit_144),LITREF(lit_145),sloc(282),YPfalse);
  T96 = VARREF_OR(YevalSsyntaxYsexpr_monitor_info,YPfalse);
  T97 = fun_sexpr_monitor_info_66;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YevalSsyntaxYsexpr_monitor_info,T95);
  lit_163 = YPPsym((P)"sexpr-monitor-test");
  lit_164 = YPPlist(1,YPPsym((P)"options"));
  lit_165 = YPPsym((P)"test");
  lit_166 = YPPlist(1,YPtrue);
  T98 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_monitor_test_67 = YPfab_met(FUNCODEREF(fun_sexpr_monitor_test_67),T98,LITREF(lit_163),LITREF(lit_164),sloc(301),YPfalse);
  T100 = VARREF_OR(YevalSsyntaxYsexpr_monitor_test,YPfalse);
  T101 = fun_sexpr_monitor_test_67;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YevalSsyntaxYsexpr_monitor_test,T99);
  lit_167 = YPPsym((P)"sexpr-monitor-body");
  lit_168 = YPPlist(1,YPPsym((P)"body"));
  T102 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_monitor_body_68 = YPfab_met(FUNCODEREF(fun_sexpr_monitor_body_68),T102,LITREF(lit_167),LITREF(lit_168),sloc(305),YPfalse);
  T104 = VARREF_OR(YevalSsyntaxYsexpr_monitor_body,YPfalse);
  T105 = fun_sexpr_monitor_body_68;
  T103 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T104,T105);
  VARSET(YevalSsyntaxYsexpr_monitor_body,T103);
  lit_169 = YPPsym((P)"seq");
  VARSET(YevalSsyntaxYDsexpr_begin_tag,LITREF(lit_169));
  lit_170 = YPPsym((P)"sexpr-begin?");
  lit_171 = YPPlist(1,YPPsym((P)"exp"));
  T106 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_beginQ_69 = YPfab_met(FUNCODEREF(fun_sexpr_beginQ_69),T106,LITREF(lit_170),LITREF(lit_171),sloc(312),YPfalse);
  T108 = VARREF_OR(YevalSsyntaxYsexpr_beginQ,YPfalse);
  T109 = fun_sexpr_beginQ_69;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YevalSsyntaxYsexpr_beginQ,T107);
  lit_172 = YPPsym((P)"sexpr-begin-actions");
  lit_173 = YPPlist(1,YPPsym((P)"begin-exp"));
  T110 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_begin_actions_70 = YPfab_met(FUNCODEREF(fun_sexpr_begin_actions_70),T110,LITREF(lit_172),LITREF(lit_173),sloc(315),YPfalse);
  T112 = VARREF_OR(YevalSsyntaxYsexpr_begin_actions,YPfalse);
  T113 = fun_sexpr_begin_actions_70;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YevalSsyntaxYsexpr_begin_actions,T111);
  lit_174 = YPPsym((P)"sexpr-last-exp?");
  lit_175 = YPPlist(1,YPPsym((P)"seq"));
  T114 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_last_expQ_71 = YPfab_met(FUNCODEREF(fun_sexpr_last_expQ_71),T114,LITREF(lit_174),LITREF(lit_175),sloc(318),YPfalse);
  T116 = VARREF_OR(YevalSsyntaxYsexpr_last_expQ,YPfalse);
  T117 = fun_sexpr_last_expQ_71;
  T115 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T116,T117);
  VARSET(YevalSsyntaxYsexpr_last_expQ,T115);
  lit_176 = YPPsym((P)"sexpr-first-exp");
  lit_177 = YPPlist(1,YPPsym((P)"seq"));
  T118 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_first_exp_72 = YPfab_met(FUNCODEREF(fun_sexpr_first_exp_72),T118,LITREF(lit_176),LITREF(lit_177),sloc(321),YPfalse);
  T120 = VARREF_OR(YevalSsyntaxYsexpr_first_exp,YPfalse);
  T121 = fun_sexpr_first_exp_72;
  T119 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T120,T121);
  VARSET(YevalSsyntaxYsexpr_first_exp,T119);
  lit_178 = YPPsym((P)"sexpr-rest-exps");
  lit_179 = YPPlist(1,YPPsym((P)"seq"));
  T122 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_rest_exps_73 = YPfab_met(FUNCODEREF(fun_sexpr_rest_exps_73),T122,LITREF(lit_178),LITREF(lit_179),sloc(324),YPfalse);
  T124 = VARREF_OR(YevalSsyntaxYsexpr_rest_exps,YPfalse);
  T125 = fun_sexpr_rest_exps_73;
  T123 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T124,T125);
  VARSET(YevalSsyntaxYsexpr_rest_exps,T123);
  lit_180 = YPPsym((P)"sexpr-sequence->begin");
  lit_181 = YPPlist(1,YPPsym((P)"seq"));
  T126 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_sequence_Gbegin_74 = YPfab_met(FUNCODEREF(fun_sexpr_sequence_Gbegin_74),T126,LITREF(lit_180),LITREF(lit_181),sloc(327),YPfalse);
  T128 = VARREF_OR(YevalSsyntaxYsexpr_sequence_Gbegin,YPfalse);
  T129 = fun_sexpr_sequence_Gbegin_74;
  T127 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T128,T129);
  VARSET(YevalSsyntaxYsexpr_sequence_Gbegin,T127);
  lit_182 = YPPsym((P)"sexpr-make-begin");
  lit_183 = YPPlist(1,YPPsym((P)"exp"));
  T130 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_make_begin_75 = YPfab_met(FUNCODEREF(fun_sexpr_make_begin_75),T130,LITREF(lit_182),LITREF(lit_183),sloc(334),YPfalse);
  T132 = VARREF_OR(YevalSsyntaxYsexpr_make_begin,YPfalse);
  T133 = fun_sexpr_make_begin_75;
  T131 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T132,T133);
  VARSET(YevalSsyntaxYsexpr_make_begin,T131);
  lit_184 = YPPsym((P)"sexpr-application?");
  lit_185 = YPPlist(1,YPPsym((P)"exp"));
  T134 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_applicationQ_76 = YPfab_met(FUNCODEREF(fun_sexpr_applicationQ_76),T134,LITREF(lit_184),LITREF(lit_185),sloc(338),YPfalse);
  T136 = VARREF_OR(YevalSsyntaxYsexpr_applicationQ,YPfalse);
  T137 = fun_sexpr_applicationQ_76;
  T135 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T136,T137);
  VARSET(YevalSsyntaxYsexpr_applicationQ,T135);
  lit_186 = YPPsym((P)"sexpr-operator");
  lit_187 = YPPlist(1,YPPsym((P)"app"));
  T138 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_operator_77 = YPfab_met(FUNCODEREF(fun_sexpr_operator_77),T138,LITREF(lit_186),LITREF(lit_187),sloc(341),YPfalse);
  T140 = VARREF_OR(YevalSsyntaxYsexpr_operator,YPfalse);
  T141 = fun_sexpr_operator_77;
  T139 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T140,T141);
  VARSET(YevalSsyntaxYsexpr_operator,T139);
  lit_188 = YPPsym((P)"sexpr-operands");
  lit_189 = YPPlist(1,YPPsym((P)"app"));
  T142 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_operands_78 = YPfab_met(FUNCODEREF(fun_sexpr_operands_78),T142,LITREF(lit_188),LITREF(lit_189),sloc(344),YPfalse);
  T144 = VARREF_OR(YevalSsyntaxYsexpr_operands,YPfalse);
  T145 = fun_sexpr_operands_78;
  T143 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T144,T145);
  VARSET(YevalSsyntaxYsexpr_operands,T143);
  lit_190 = YPPsym((P)"sexpr-no-operands?");
  lit_191 = YPPlist(1,YPPsym((P)"args"));
  T146 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_no_operandsQ_79 = YPfab_met(FUNCODEREF(fun_sexpr_no_operandsQ_79),T146,LITREF(lit_190),LITREF(lit_191),sloc(347),YPfalse);
  T148 = VARREF_OR(YevalSsyntaxYsexpr_no_operandsQ,YPfalse);
  T149 = fun_sexpr_no_operandsQ_79;
  T147 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T148,T149);
  VARSET(YevalSsyntaxYsexpr_no_operandsQ,T147);
  lit_192 = YPPsym((P)"sexpr-first-operand");
  lit_193 = YPPlist(1,YPPsym((P)"args"));
  T150 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_first_operand_80 = YPfab_met(FUNCODEREF(fun_sexpr_first_operand_80),T150,LITREF(lit_192),LITREF(lit_193),sloc(350),YPfalse);
  T152 = VARREF_OR(YevalSsyntaxYsexpr_first_operand,YPfalse);
  T153 = fun_sexpr_first_operand_80;
  T151 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T152,T153);
  VARSET(YevalSsyntaxYsexpr_first_operand,T151);
  lit_194 = YPPsym((P)"sexpr-rest-operands");
  lit_195 = YPPlist(1,YPPsym((P)"args"));
  T154 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_rest_operands_81 = YPfab_met(FUNCODEREF(fun_sexpr_rest_operands_81),T154,LITREF(lit_194),LITREF(lit_195),sloc(353),YPfalse);
  T156 = VARREF_OR(YevalSsyntaxYsexpr_rest_operands,YPfalse);
  T157 = fun_sexpr_rest_operands_81;
  T155 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T156,T157);
  VARSET(YevalSsyntaxYsexpr_rest_operands,T155);
  lit_196 = YPPsym((P)"sexpr-make-application");
  lit_197 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"operands"));
  T158 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_make_application_82 = YPfab_met(FUNCODEREF(fun_sexpr_make_application_82),T158,LITREF(lit_196),LITREF(lit_197),sloc(356),YPfalse);
  T160 = VARREF_OR(YevalSsyntaxYsexpr_make_application,YPfalse);
  T161 = fun_sexpr_make_application_82;
  T159 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T160,T161);
  VARSET(YevalSsyntaxYsexpr_make_application,T159);
  VARSET(YevalSsyntaxYTunique_name_counterT,YPint((P)0));
  lit_198 = YPPsym((P)"sexpr-new-unique-name-counter!");
  lit_199 = Ynil;
  T162 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLintG),Ynil);
  fun_sexpr_new_unique_name_counterX_83 = YPfab_met(FUNCODEREF(fun_sexpr_new_unique_name_counterX_83),T162,LITREF(lit_198),LITREF(lit_199),sloc(361),YPfalse);
  T164 = VARREF_OR(YevalSsyntaxYsexpr_new_unique_name_counterX,YPfalse);
  T165 = fun_sexpr_new_unique_name_counterX_83;
  T163 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T164,T165);
  VARSET(YevalSsyntaxYsexpr_new_unique_name_counterX,T163);
  VARSET(YevalSsyntaxYLnameG,VARREF(YLanyG));
  lit_200 = YPPsym((P)"sexpr-unique-name");
  lit_201 = YPPlist(1,YPPsym((P)"prefix"));
  T166 = YPfab_sig(YPPlist(1,VARREF(YevalSsyntaxYLnameG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_unique_name_84 = YPfab_met(FUNCODEREF(fun_sexpr_unique_name_84),T166,LITREF(lit_200),LITREF(lit_201),sloc(368),YPfalse);
  T168 = VARREF_OR(YevalSsyntaxYsexpr_unique_name,YPfalse);
  T169 = fun_sexpr_unique_name_84;
  T167 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T168,T169);
  VARSET(YevalSsyntaxYsexpr_unique_name,T167);
  lit_202 = YPPsym((P)"def");
  VARSET(YevalSsyntaxYDsexpr_def_tag,LITREF(lit_202));
  lit_203 = YPPsym((P)"sexpr-def?");
  lit_204 = YPPlist(1,YPPsym((P)"exp"));
  T172 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T171 = fun_sexpr_defQ_85 = YPfab_met(FUNCODEREF(fun_sexpr_defQ_85),T172,LITREF(lit_203),LITREF(lit_204),sloc(379),YPfalse);
  T175 = VARREF_OR(YevalSsyntaxYsexpr_defQ,YPfalse);
  T176 = fun_sexpr_defQ_85;
  T174 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T175,T176);
  T173 = VARSET(YevalSsyntaxYsexpr_defQ,T174);
  T170 = T173;
  return T170;
}

P YevalSsyntaxY___main_2___() {
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
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169;
DEFCREGS();
  lit_205 = YPPsym((P)"sexpr-def-variable");
  lit_206 = YPPlist(1,YPPsym((P)"exp"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_def_variable_86 = YPfab_met(FUNCODEREF(fun_sexpr_def_variable_86),T0,LITREF(lit_205),LITREF(lit_206),sloc(382),YPfalse);
  T2 = VARREF_OR(YevalSsyntaxYsexpr_def_variable,YPfalse);
  T3 = fun_sexpr_def_variable_86;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSsyntaxYsexpr_def_variable,T1);
  lit_207 = YPPsym((P)"sexpr-def-value");
  lit_208 = YPPlist(1,YPPsym((P)"exp"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_def_value_87 = YPfab_met(FUNCODEREF(fun_sexpr_def_value_87),T4,LITREF(lit_207),LITREF(lit_208),sloc(384),YPfalse);
  T6 = VARREF_OR(YevalSsyntaxYsexpr_def_value,YPfalse);
  T7 = fun_sexpr_def_value_87;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSsyntaxYsexpr_def_value,T5);
  lit_209 = YPPsym((P)"let");
  VARSET(YevalSsyntaxYDsexpr_let_tag,LITREF(lit_209));
  lit_210 = YPPsym((P)"sexpr-let?");
  lit_211 = YPPlist(1,YPPsym((P)"exp"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_letQ_88 = YPfab_met(FUNCODEREF(fun_sexpr_letQ_88),T8,LITREF(lit_210),LITREF(lit_211),sloc(388),YPfalse);
  T10 = VARREF_OR(YevalSsyntaxYsexpr_letQ,YPfalse);
  T11 = fun_sexpr_letQ_88;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSsyntaxYsexpr_letQ,T9);
  lit_212 = YPPsym((P)"sexpr-let-bound-variables");
  lit_213 = YPPlist(1,YPPsym((P)"let-exp"));
  lit_214 = YPPlist(1,YPPsym((P)"x"));
  T13 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPfab_met(FUNCODEREF(fun_89),T13,YPfalse,LITREF(lit_214),sloc(392),YPfalse);
  T12 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_let_bound_variables_90 = YPfab_met(FUNCODEREF(fun_sexpr_let_bound_variables_90),T12,LITREF(lit_212),LITREF(lit_213),sloc(391),YPfalse);
  T15 = VARREF_OR(YevalSsyntaxYsexpr_let_bound_variables,YPfalse);
  T16 = fun_sexpr_let_bound_variables_90;
  T14 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T15,T16);
  VARSET(YevalSsyntaxYsexpr_let_bound_variables,T14);
  lit_215 = YPPsym((P)"sexpr-let-values");
  lit_216 = YPPlist(1,YPPsym((P)"let-exp"));
  lit_217 = YPPlist(1,YPPsym((P)"x"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPfab_met(FUNCODEREF(fun_91),T18,YPfalse,LITREF(lit_217),sloc(395),YPfalse);
  T17 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_let_values_92 = YPfab_met(FUNCODEREF(fun_sexpr_let_values_92),T17,LITREF(lit_215),LITREF(lit_216),sloc(394),YPfalse);
  T20 = VARREF_OR(YevalSsyntaxYsexpr_let_values,YPfalse);
  T21 = fun_sexpr_let_values_92;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YevalSsyntaxYsexpr_let_values,T19);
  lit_218 = YPPsym((P)"sexpr-let-body");
  lit_219 = YPPlist(1,YPPsym((P)"let-exp"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_let_body_93 = YPfab_met(FUNCODEREF(fun_sexpr_let_body_93),T22,LITREF(lit_218),LITREF(lit_219),sloc(397),YPfalse);
  T24 = VARREF_OR(YevalSsyntaxYsexpr_let_body,YPfalse);
  T25 = fun_sexpr_let_body_93;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalSsyntaxYsexpr_let_body,T23);
  lit_220 = YPPsym((P)"sexpr-let-names+values");
  lit_221 = YPPlist(2,YPPsym((P)"names"),YPPsym((P)"vals"));
  lit_222 = YPsb((P)"tup");
  lit_223 = YPPsym((P)"...");
  lit_224 = YPPsym((P)"<lst>");
  lit_225 = YPPsym((P)"sub");
  lit_226 = YPPsym((P)"len");
  lit_227 = YPPsym((P)"elt");
  T27 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLlstG));
  T26 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),T27,Ynil);
  fun_sexpr_let_namesAvalues_94 = YPfab_met(FUNCODEREF(fun_sexpr_let_namesAvalues_94),T26,LITREF(lit_220),LITREF(lit_221),sloc(400),YPfalse);
  T29 = VARREF_OR(YevalSsyntaxYsexpr_let_namesAvalues,YPfalse);
  T30 = fun_sexpr_let_namesAvalues_94;
  T28 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T29,T30);
  VARSET(YevalSsyntaxYsexpr_let_namesAvalues,T28);
  lit_228 = YPPsym((P)"sexpr-let->combination");
  lit_229 = YPPlist(1,YPPsym((P)"let-exp"));
  lit_230 = YPPsym((P)"col");
  lit_231 = YPPlist(2,YPPsym((P)"names"),YPPsym((P)"values"));
  T32 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_col_95 = YPfab_met(FUNCODEREF(fun_col_95),T32,LITREF(lit_230),LITREF(lit_231),sloc(439),YPfalse);
  T31 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_let_Gcombination_96 = YPfab_met(FUNCODEREF(fun_sexpr_let_Gcombination_96),T31,LITREF(lit_228),LITREF(lit_229),sloc(434),YPfalse);
  T34 = VARREF_OR(YevalSsyntaxYsexpr_let_Gcombination,YPfalse);
  T35 = fun_sexpr_let_Gcombination_96;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YevalSsyntaxYsexpr_let_Gcombination,T33);
  lit_232 = YPPsym((P)"loc");
  VARSET(YevalSsyntaxYDsexpr_locals_tag,LITREF(lit_232));
  lit_233 = YPPsym((P)"sexpr-loc?");
  lit_234 = YPPlist(1,YPPsym((P)"exp"));
  T36 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_locQ_97 = YPfab_met(FUNCODEREF(fun_sexpr_locQ_97),T36,LITREF(lit_233),LITREF(lit_234),sloc(450),YPfalse);
  T38 = VARREF_OR(YevalSsyntaxYsexpr_locQ,YPfalse);
  T39 = fun_sexpr_locQ_97;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YevalSsyntaxYsexpr_locQ,T37);
  lit_235 = YPPsym((P)"sexpr-loc-bound-names");
  lit_236 = YPPlist(1,YPPsym((P)"loc-exp"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_names_98 = YPfab_met(FUNCODEREF(fun_sexpr_loc_bound_names_98),T40,LITREF(lit_235),LITREF(lit_236),sloc(453),YPfalse);
  T42 = VARREF_OR(YevalSsyntaxYsexpr_loc_bound_names,YPfalse);
  T43 = fun_sexpr_loc_bound_names_98;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSsyntaxYsexpr_loc_bound_names,T41);
  lit_237 = YPPsym((P)"sexpr-loc-bound-signatures");
  lit_238 = YPPlist(1,YPPsym((P)"loc-exp"));
  lit_239 = YPPlist(1,YPPsym((P)"x"));
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_99 = YPfab_met(FUNCODEREF(fun_99),T45,YPfalse,LITREF(lit_239),sloc(457),YPfalse);
  T44 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_signatures_100 = YPfab_met(FUNCODEREF(fun_sexpr_loc_bound_signatures_100),T44,LITREF(lit_237),LITREF(lit_238),sloc(456),YPfalse);
  T47 = VARREF_OR(YevalSsyntaxYsexpr_loc_bound_signatures,YPfalse);
  T48 = fun_sexpr_loc_bound_signatures_100;
  T46 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T47,T48);
  VARSET(YevalSsyntaxYsexpr_loc_bound_signatures,T46);
  lit_240 = YPPsym((P)"sexpr-loc-bound-bodies");
  lit_241 = YPPlist(1,YPPsym((P)"loc-exp"));
  T49 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_bodies_101 = YPfab_met(FUNCODEREF(fun_sexpr_loc_bound_bodies_101),T49,LITREF(lit_240),LITREF(lit_241),sloc(461),YPfalse);
  T51 = VARREF_OR(YevalSsyntaxYsexpr_loc_bound_bodies,YPfalse);
  T52 = fun_sexpr_loc_bound_bodies_101;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YevalSsyntaxYsexpr_loc_bound_bodies,T50);
  lit_242 = YPPsym((P)"sexpr-loc-raw-body");
  lit_243 = YPPlist(1,YPPsym((P)"loc-exp"));
  T53 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_raw_body_102 = YPfab_met(FUNCODEREF(fun_sexpr_loc_raw_body_102),T53,LITREF(lit_242),LITREF(lit_243),sloc(464),YPfalse);
  T55 = VARREF_OR(YevalSsyntaxYsexpr_loc_raw_body,YPfalse);
  T56 = fun_sexpr_loc_raw_body_102;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YevalSsyntaxYsexpr_loc_raw_body,T54);
  lit_244 = YPPsym((P)"sexpr-loc-body");
  lit_245 = YPPlist(1,YPPsym((P)"loc-exp"));
  T57 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_loc_body_103 = YPfab_met(FUNCODEREF(fun_sexpr_loc_body_103),T57,LITREF(lit_244),LITREF(lit_245),sloc(467),YPfalse);
  T59 = VARREF_OR(YevalSsyntaxYsexpr_loc_body,YPfalse);
  T60 = fun_sexpr_loc_body_103;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YevalSsyntaxYsexpr_loc_body,T58);
  lit_246 = YPPsym((P)"rep");
  VARSET(YevalSsyntaxYDsexpr_iterate_tag,LITREF(lit_246));
  lit_247 = YPPsym((P)"sexpr-iterate?");
  lit_248 = YPPlist(1,YPPsym((P)"exp"));
  T61 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_iterateQ_104 = YPfab_met(FUNCODEREF(fun_sexpr_iterateQ_104),T61,LITREF(lit_247),LITREF(lit_248),sloc(473),YPfalse);
  T63 = VARREF_OR(YevalSsyntaxYsexpr_iterateQ,YPfalse);
  T64 = fun_sexpr_iterateQ_104;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YevalSsyntaxYsexpr_iterateQ,T62);
  lit_249 = YPPsym((P)"sexpr-iterate-name");
  lit_250 = YPPlist(1,YPPsym((P)"rep-exp"));
  T65 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_iterate_name_105 = YPfab_met(FUNCODEREF(fun_sexpr_iterate_name_105),T65,LITREF(lit_249),LITREF(lit_250),sloc(476),YPfalse);
  T67 = VARREF_OR(YevalSsyntaxYsexpr_iterate_name,YPfalse);
  T68 = fun_sexpr_iterate_name_105;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YevalSsyntaxYsexpr_iterate_name,T66);
  VARSET(YevalSsyntaxYDsexpr_values_tag,LITREF(lit_63));
  lit_251 = YPPsym((P)"sexpr-iterate-signature");
  lit_252 = YPPlist(1,YPPsym((P)"rep-exp"));
  lit_253 = YPPlist(1,YPPsym((P)"x"));
  T70 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPfab_met(FUNCODEREF(fun_106),T70,YPfalse,LITREF(lit_253),sloc(483),YPfalse);
  T69 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_signature_107 = YPfab_met(FUNCODEREF(fun_sexpr_iterate_signature_107),T69,LITREF(lit_251),LITREF(lit_252),sloc(481),YPfalse);
  T72 = VARREF_OR(YevalSsyntaxYsexpr_iterate_signature,YPfalse);
  T73 = fun_sexpr_iterate_signature_107;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YevalSsyntaxYsexpr_iterate_signature,T71);
  lit_254 = YPPsym((P)"sexpr-iterate-inits");
  lit_255 = YPPlist(1,YPPsym((P)"rep-exp"));
  lit_256 = YPPlist(1,YPPsym((P)"x"));
  T75 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPfab_met(FUNCODEREF(fun_108),T75,YPfalse,LITREF(lit_256),sloc(491),YPfalse);
  T74 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_inits_109 = YPfab_met(FUNCODEREF(fun_sexpr_iterate_inits_109),T74,LITREF(lit_254),LITREF(lit_255),sloc(490),YPfalse);
  T77 = VARREF_OR(YevalSsyntaxYsexpr_iterate_inits,YPfalse);
  T78 = fun_sexpr_iterate_inits_109;
  T76 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T77,T78);
  VARSET(YevalSsyntaxYsexpr_iterate_inits,T76);
  lit_257 = YPPsym((P)"sexpr-iterate-body");
  lit_258 = YPPlist(1,YPPsym((P)"rep-exp"));
  T79 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_body_110 = YPfab_met(FUNCODEREF(fun_sexpr_iterate_body_110),T79,LITREF(lit_257),LITREF(lit_258),sloc(493),YPfalse);
  T81 = VARREF_OR(YevalSsyntaxYsexpr_iterate_body,YPfalse);
  T82 = fun_sexpr_iterate_body_110;
  T80 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T81,T82);
  VARSET(YevalSsyntaxYsexpr_iterate_body,T80);
  lit_259 = YPPsym((P)"sexpr-iterate->loc");
  lit_260 = YPPlist(1,YPPsym((P)"rep-exp"));
  T83 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_Gloc_111 = YPfab_met(FUNCODEREF(fun_sexpr_iterate_Gloc_111),T83,LITREF(lit_259),LITREF(lit_260),sloc(496),YPfalse);
  T85 = VARREF_OR(YevalSsyntaxYsexpr_iterate_Gloc,YPfalse);
  T86 = fun_sexpr_iterate_Gloc_111;
  T84 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T85,T86);
  VARSET(YevalSsyntaxYsexpr_iterate_Gloc,T84);
  lit_261 = YPPsym((P)"isa");
  VARSET(YevalSsyntaxYDsexpr_isa_tag,LITREF(lit_261));
  lit_262 = YPPsym((P)"sexpr-isa?");
  lit_263 = YPPlist(1,YPPsym((P)"exp"));
  T87 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_isaQ_112 = YPfab_met(FUNCODEREF(fun_sexpr_isaQ_112),T87,LITREF(lit_262),LITREF(lit_263),sloc(510),YPfalse);
  T89 = VARREF_OR(YevalSsyntaxYsexpr_isaQ,YPfalse);
  T90 = fun_sexpr_isaQ_112;
  T88 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T89,T90);
  VARSET(YevalSsyntaxYsexpr_isaQ,T88);
  lit_264 = YPPsym((P)"sexpr-isa-parent");
  lit_265 = YPPlist(1,YPPsym((P)"exp"));
  T91 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_isa_parent_113 = YPfab_met(FUNCODEREF(fun_sexpr_isa_parent_113),T91,LITREF(lit_264),LITREF(lit_265),sloc(513),YPfalse);
  T93 = VARREF_OR(YevalSsyntaxYsexpr_isa_parent,YPfalse);
  T94 = fun_sexpr_isa_parent_113;
  T92 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T93,T94);
  VARSET(YevalSsyntaxYsexpr_isa_parent,T92);
  lit_266 = YPPsym((P)"sexpr-isa-prop-inits");
  lit_267 = YPPlist(1,YPPsym((P)"exp"));
  T95 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_prop_inits_114 = YPfab_met(FUNCODEREF(fun_sexpr_isa_prop_inits_114),T95,LITREF(lit_266),LITREF(lit_267),sloc(516),YPfalse);
  T97 = VARREF_OR(YevalSsyntaxYsexpr_isa_prop_inits,YPfalse);
  T98 = fun_sexpr_isa_prop_inits_114;
  T96 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T97,T98);
  VARSET(YevalSsyntaxYsexpr_isa_prop_inits,T96);
  lit_268 = YPPsym((P)"sexpr-isa-init-props");
  lit_269 = YPPlist(1,YPPsym((P)"exp"));
  T99 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_init_props_115 = YPfab_met(FUNCODEREF(fun_sexpr_isa_init_props_115),T99,LITREF(lit_268),LITREF(lit_269),sloc(519),YPfalse);
  T101 = VARREF_OR(YevalSsyntaxYsexpr_isa_init_props,YPfalse);
  T102 = fun_sexpr_isa_init_props_115;
  T100 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T101,T102);
  VARSET(YevalSsyntaxYsexpr_isa_init_props,T100);
  lit_270 = YPPsym((P)"sexpr-isa-init-values");
  lit_271 = YPPlist(1,YPPsym((P)"exp"));
  T103 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_init_values_116 = YPfab_met(FUNCODEREF(fun_sexpr_isa_init_values_116),T103,LITREF(lit_270),LITREF(lit_271),sloc(522),YPfalse);
  T105 = VARREF_OR(YevalSsyntaxYsexpr_isa_init_values,YPfalse);
  T106 = fun_sexpr_isa_init_values_116;
  T104 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T105,T106);
  VARSET(YevalSsyntaxYsexpr_isa_init_values,T104);
  lit_272 = YPPsym((P)"dc");
  VARSET(YevalSsyntaxYDsexpr_define_class_tag,LITREF(lit_272));
  lit_273 = YPPsym((P)"sexpr-define-class?");
  lit_274 = YPPlist(1,YPPsym((P)"exp"));
  T107 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_define_classQ_117 = YPfab_met(FUNCODEREF(fun_sexpr_define_classQ_117),T107,LITREF(lit_273),LITREF(lit_274),sloc(529),YPfalse);
  T109 = VARREF_OR(YevalSsyntaxYsexpr_define_classQ,YPfalse);
  T110 = fun_sexpr_define_classQ_117;
  T108 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T109,T110);
  VARSET(YevalSsyntaxYsexpr_define_classQ,T108);
  lit_275 = YPPsym((P)"sexpr-define-class-parents");
  lit_276 = YPPlist(1,YPPsym((P)"exp"));
  T111 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_define_class_parents_118 = YPfab_met(FUNCODEREF(fun_sexpr_define_class_parents_118),T111,LITREF(lit_275),LITREF(lit_276),sloc(532),YPfalse);
  T113 = VARREF_OR(YevalSsyntaxYsexpr_define_class_parents,YPfalse);
  T114 = fun_sexpr_define_class_parents_118;
  T112 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T113,T114);
  VARSET(YevalSsyntaxYsexpr_define_class_parents,T112);
  lit_277 = YPPsym((P)"dp");
  VARSET(YevalSsyntaxYDsexpr_prop_tag,LITREF(lit_277));
  lit_278 = YPPsym((P)"dp!");
  VARSET(YevalSsyntaxYDsexpr_propX_tag,LITREF(lit_278));
  lit_279 = YPPsym((P)"sexpr-prop!?");
  lit_280 = YPPlist(1,YPPsym((P)"exp"));
  T115 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_propXQ_119 = YPfab_met(FUNCODEREF(fun_sexpr_propXQ_119),T115,LITREF(lit_279),LITREF(lit_280),sloc(543),YPfalse);
  T117 = VARREF_OR(YevalSsyntaxYsexpr_propXQ,YPfalse);
  T118 = fun_sexpr_propXQ_119;
  T116 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T117,T118);
  VARSET(YevalSsyntaxYsexpr_propXQ,T116);
  lit_281 = YPPsym((P)"sexpr-prop?");
  lit_282 = YPPlist(1,YPPsym((P)"exp"));
  T119 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_propQ_120 = YPfab_met(FUNCODEREF(fun_sexpr_propQ_120),T119,LITREF(lit_281),LITREF(lit_282),sloc(546),YPfalse);
  T121 = VARREF_OR(YevalSsyntaxYsexpr_propQ,YPfalse);
  T122 = fun_sexpr_propQ_120;
  T120 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T121,T122);
  VARSET(YevalSsyntaxYsexpr_propQ,T120);
  lit_283 = YPPsym((P)"sexpr-prop-name");
  lit_284 = YPPlist(1,YPPsym((P)"exp"));
  T123 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_prop_name_121 = YPfab_met(FUNCODEREF(fun_sexpr_prop_name_121),T123,LITREF(lit_283),LITREF(lit_284),sloc(549),YPfalse);
  T125 = VARREF_OR(YevalSsyntaxYsexpr_prop_name,YPfalse);
  T126 = fun_sexpr_prop_name_121;
  T124 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T125,T126);
  VARSET(YevalSsyntaxYsexpr_prop_name,T124);
  lit_285 = YPPsym((P)"sexpr-prop-owner");
  lit_286 = YPPlist(1,YPPsym((P)"exp"));
  T127 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_owner_122 = YPfab_met(FUNCODEREF(fun_sexpr_prop_owner_122),T127,LITREF(lit_285),LITREF(lit_286),sloc(552),YPfalse);
  T129 = VARREF_OR(YevalSsyntaxYsexpr_prop_owner,YPfalse);
  T130 = fun_sexpr_prop_owner_122;
  T128 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T129,T130);
  VARSET(YevalSsyntaxYsexpr_prop_owner,T128);
  lit_287 = YPPsym((P)"sexpr-prop-init-var");
  lit_288 = YPPlist(1,YPPsym((P)"exp"));
  lit_289 = YPPsym((P)"_x");
  T131 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_init_var_123 = YPfab_met(FUNCODEREF(fun_sexpr_prop_init_var_123),T131,LITREF(lit_287),LITREF(lit_288),sloc(558),YPfalse);
  T133 = VARREF_OR(YevalSsyntaxYsexpr_prop_init_var,YPfalse);
  T134 = fun_sexpr_prop_init_var_123;
  T132 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T133,T134);
  VARSET(YevalSsyntaxYsexpr_prop_init_var,T132);
  lit_290 = YPPsym((P)"sexpr-prop-type");
  lit_291 = YPPlist(1,YPPsym((P)"exp"));
  T135 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_type_124 = YPfab_met(FUNCODEREF(fun_sexpr_prop_type_124),T135,LITREF(lit_290),LITREF(lit_291),sloc(564),YPfalse);
  T137 = VARREF_OR(YevalSsyntaxYsexpr_prop_type,YPfalse);
  T138 = fun_sexpr_prop_type_124;
  T136 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T137,T138);
  VARSET(YevalSsyntaxYsexpr_prop_type,T136);
  lit_292 = YPPsym((P)"sexpr-prop-init?");
  lit_293 = YPPlist(1,YPPsym((P)"exp"));
  T139 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_prop_initQ_125 = YPfab_met(FUNCODEREF(fun_sexpr_prop_initQ_125),T139,LITREF(lit_292),LITREF(lit_293),sloc(567),YPfalse);
  T141 = VARREF_OR(YevalSsyntaxYsexpr_prop_initQ,YPfalse);
  T142 = fun_sexpr_prop_initQ_125;
  T140 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T141,T142);
  VARSET(YevalSsyntaxYsexpr_prop_initQ,T140);
  lit_294 = YPPsym((P)"sexpr-prop-init");
  lit_295 = YPPlist(1,YPPsym((P)"exp"));
  T143 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_init_126 = YPfab_met(FUNCODEREF(fun_sexpr_prop_init_126),T143,LITREF(lit_294),LITREF(lit_295),sloc(570),YPfalse);
  T145 = VARREF_OR(YevalSsyntaxYsexpr_prop_init,YPfalse);
  T146 = fun_sexpr_prop_init_126;
  T144 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T145,T146);
  VARSET(YevalSsyntaxYsexpr_prop_init,T144);
  lit_296 = YPPsym((P)"sexpr-fab-getter");
  lit_297 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"type"),YPPsym((P)"line"));
  lit_298 = YPPsym((P)"prop-value");
  T147 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_fab_getter_127 = YPfab_met(FUNCODEREF(fun_sexpr_fab_getter_127),T147,LITREF(lit_296),LITREF(lit_297),sloc(573),YPfalse);
  T149 = VARREF_OR(YevalSsyntaxYsexpr_fab_getter,YPfalse);
  T150 = fun_sexpr_fab_getter_127;
  T148 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T149,T150);
  VARSET(YevalSsyntaxYsexpr_fab_getter,T148);
  lit_299 = YPPsym((P)"sexpr-fab-setter");
  lit_300 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"type"),YPPsym((P)"prop-type"),YPPsym((P)"line"));
  lit_301 = YPPsym((P)"_z");
  lit_302 = YPPsym((P)"prop-value-setter");
  T151 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  fun_sexpr_fab_setter_128 = YPfab_met(FUNCODEREF(fun_sexpr_fab_setter_128),T151,LITREF(lit_299),LITREF(lit_300),sloc(578),YPfalse);
  T153 = VARREF_OR(YevalSsyntaxYsexpr_fab_setter,YPfalse);
  T154 = fun_sexpr_fab_setter_128;
  T152 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T153,T154);
  VARSET(YevalSsyntaxYsexpr_fab_setter,T152);
  lit_303 = YPPsym((P)"sexpr-fab-setter-name");
  lit_304 = YPPlist(1,YPPsym((P)"name"));
  lit_305 = YPsb((P)"-setter");
  T155 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_fab_setter_name_129 = YPfab_met(FUNCODEREF(fun_sexpr_fab_setter_name_129),T155,LITREF(lit_303),LITREF(lit_304),sloc(584),YPfalse);
  T157 = VARREF_OR(YevalSsyntaxYsexpr_fab_setter_name,YPfalse);
  T158 = fun_sexpr_fab_setter_name_129;
  T156 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T157,T158);
  VARSET(YevalSsyntaxYsexpr_fab_setter_name,T156);
  lit_306 = YPPsym((P)"sexpr-macro?");
  lit_307 = YPPlist(1,YPPsym((P)"exp"));
  T159 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_macroQ_130 = YPfab_met(FUNCODEREF(fun_sexpr_macroQ_130),T159,LITREF(lit_306),LITREF(lit_307),sloc(589),YPfalse);
  T161 = VARREF_OR(YevalSsyntaxYsexpr_macroQ,YPfalse);
  T162 = fun_sexpr_macroQ_130;
  T160 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T161,T162);
  VARSET(YevalSsyntaxYsexpr_macroQ,T160);
  lit_308 = YPPsym((P)"macro-expand");
  VARSET(YevalSsyntaxYDsexpr_macro_expand_tag,LITREF(lit_308));
  lit_309 = YPPsym((P)"sexpr-macro-expand?");
  lit_310 = YPPlist(1,YPPsym((P)"exp"));
  T165 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T164 = fun_sexpr_macro_expandQ_131 = YPfab_met(FUNCODEREF(fun_sexpr_macro_expandQ_131),T165,LITREF(lit_309),LITREF(lit_310),sloc(594),YPfalse);
  T168 = VARREF_OR(YevalSsyntaxYsexpr_macro_expandQ,YPfalse);
  T169 = fun_sexpr_macro_expandQ_131;
  T167 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T168,T169);
  T166 = VARSET(YevalSsyntaxYsexpr_macro_expandQ,T167);
  T163 = T166;
  return T163;
}

P YevalSsyntaxY___main_3___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84;
DEFCREGS();
  lit_311 = YPPsym((P)"mif");
  VARSET(YevalSsyntaxYDsexpr_syntax_if_tag,LITREF(lit_311));
  lit_312 = YPPsym((P)"sexpr-make-syntax-if");
  lit_313 = YPPlist(4,YPPsym((P)"pat"),YPPsym((P)"exp"),YPPsym((P)"then"),YPPsym((P)"else"));
  T0 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  fun_sexpr_make_syntax_if_132 = YPfab_met(FUNCODEREF(fun_sexpr_make_syntax_if_132),T0,LITREF(lit_312),LITREF(lit_313),sloc(599),YPfalse);
  T2 = VARREF_OR(YevalSsyntaxYsexpr_make_syntax_if,YPfalse);
  T3 = fun_sexpr_make_syntax_if_132;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSsyntaxYsexpr_make_syntax_if,T1);
  lit_314 = YPPsym((P)"comma-atsign");
  VARSET(YevalSsyntaxYTcomma_atsignT,LITREF(lit_314));
  lit_315 = YPPsym((P)"bq-list");
  VARSET(YevalSsyntaxYTbq_listT,LITREF(lit_315));
  lit_316 = YPPsym((P)"bq-list*");
  VARSET(YevalSsyntaxYTbq_listTT,LITREF(lit_316));
  lit_317 = YPPsym((P)"bq-append");
  VARSET(YevalSsyntaxYTbq_appendT,LITREF(lit_317));
  lit_318 = YPPsym((P)"bq-nconc");
  VARSET(YevalSsyntaxYTbq_nconcT,LITREF(lit_318));
  lit_319 = YPPsym((P)"bq-clobberable");
  VARSET(YevalSsyntaxYTbq_clobberableT,LITREF(lit_319));
  lit_320 = YPPsym((P)"bq-quote");
  VARSET(YevalSsyntaxYTbq_quoteT,LITREF(lit_320));
  lit_321 = YPPsym((P)"sexpr-expand-backquote");
  lit_322 = YPPlist(1,YPPsym((P)"x"));
  lit_323 = YPPsym((P)"goo");
  T4 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YevalSsyntaxYsexpr_expand_backquote = YPfab_met(FUNCODEREF(YevalSsyntaxYsexpr_expand_backquote),T4,LITREF(lit_321),LITREF(lit_322),sloc(612),YPfalse);
  T5 = YevalSsyntaxYsexpr_expand_backquote;
  VARSET(YevalSsyntaxYsexpr_expand_backquote,T5);
  lit_324 = YPPsym((P)"sexpr-build-backquote-expander");
  lit_325 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_build_backquote_expander_134 = YPfab_met(FUNCODEREF(fun_sexpr_build_backquote_expander_134),T6,LITREF(lit_324),LITREF(lit_325),sloc(615),YPfalse);
  T8 = VARREF_OR(YevalSsyntaxYsexpr_build_backquote_expander,YPfalse);
  T9 = fun_sexpr_build_backquote_expander_134;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YevalSsyntaxYsexpr_build_backquote_expander,T7);
  lit_326 = YPPsym((P)"sexpr-unquote?");
  lit_327 = YPPlist(1,YPPsym((P)"x"));
  lit_328 = YPPsym((P)"unquote");
  T10 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unquoteQ_135 = YPfab_met(FUNCODEREF(fun_sexpr_unquoteQ_135),T10,LITREF(lit_326),LITREF(lit_327),sloc(621),YPfalse);
  T12 = VARREF_OR(YevalSsyntaxYsexpr_unquoteQ,YPfalse);
  T13 = fun_sexpr_unquoteQ_135;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSsyntaxYsexpr_unquoteQ,T11);
  lit_329 = YPPsym((P)"sexpr-unquote-splicing?");
  lit_330 = YPPlist(1,YPPsym((P)"x"));
  lit_331 = YPPsym((P)"unquote-splicing");
  T14 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unquote_splicingQ_136 = YPfab_met(FUNCODEREF(fun_sexpr_unquote_splicingQ_136),T14,LITREF(lit_329),LITREF(lit_330),sloc(624),YPfalse);
  T16 = VARREF_OR(YevalSsyntaxYsexpr_unquote_splicingQ,YPfalse);
  T17 = fun_sexpr_unquote_splicingQ_136;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSsyntaxYsexpr_unquote_splicingQ,T15);
  lit_332 = YPPsym((P)"sexpr-backquote?");
  lit_333 = YPPlist(1,YPPsym((P)"x"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_backquoteQ_137 = YPfab_met(FUNCODEREF(fun_sexpr_backquoteQ_137),T18,LITREF(lit_332),LITREF(lit_333),sloc(627),YPfalse);
  T20 = VARREF_OR(YevalSsyntaxYsexpr_backquoteQ,YPfalse);
  T21 = fun_sexpr_backquoteQ_137;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YevalSsyntaxYsexpr_backquoteQ,T19);
  lit_334 = YPPsym((P)"sexpr-atom?");
  lit_335 = YPPlist(1,YPPsym((P)"x"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_atomQ_138 = YPfab_met(FUNCODEREF(fun_sexpr_atomQ_138),T22,LITREF(lit_334),LITREF(lit_335),sloc(630),YPfalse);
  T24 = VARREF_OR(YevalSsyntaxYsexpr_atomQ,YPfalse);
  T25 = fun_sexpr_atomQ_138;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalSsyntaxYsexpr_atomQ,T23);
  lit_336 = YPPsym((P)"nreconc");
  lit_337 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T26 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_nreconc_139 = YPfab_met(FUNCODEREF(fun_nreconc_139),T26,LITREF(lit_336),LITREF(lit_337),sloc(633),YPfalse);
  T28 = VARREF_OR(YevalSsyntaxYnreconc,YPfalse);
  T29 = fun_nreconc_139;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YevalSsyntaxYnreconc,T27);
  lit_338 = YPPsym((P)"bq-process");
  lit_339 = YPPlist(1,YPPsym((P)"x"));
  lit_340 = YPsb((P)"UNQUOTE-SPLICING %= AFTER BQ");
  lit_341 = YPPlist(1,YPPsym((P)"return"));
  lit_342 = YPsb((P)"Malformed ,%=");
  lit_343 = YPsb((P)"Dotted ,@%=");
  T31 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_140 = YPfab_met(FUNCODEREF(fun_140),T31,YPfalse,LITREF(lit_341),sloc(646),YPfalse);
  T30 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bq_process_141 = YPfab_met(FUNCODEREF(fun_bq_process_141),T30,LITREF(lit_338),LITREF(lit_339),sloc(636),YPfalse);
  T33 = VARREF_OR(YevalSsyntaxYbq_process,YPfalse);
  T34 = fun_bq_process_141;
  T32 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T33,T34);
  VARSET(YevalSsyntaxYbq_process,T32);
  lit_344 = YPPsym((P)"bracket");
  lit_345 = YPPlist(1,YPPsym((P)"x"));
  T35 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bracket_142 = YPfab_met(FUNCODEREF(fun_bracket_142),T35,LITREF(lit_344),LITREF(lit_345),sloc(661),YPfalse);
  T37 = VARREF_OR(YevalSsyntaxYbracket,YPfalse);
  T38 = fun_bracket_142;
  T36 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T37,T38);
  VARSET(YevalSsyntaxYbracket,T36);
  lit_346 = YPPsym((P)"map-tree");
  lit_347 = YPPlist(2,YPPsym((P)"fn"),YPPsym((P)"x"));
  T39 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_map_tree_143 = YPfab_met(FUNCODEREF(fun_map_tree_143),T39,LITREF(lit_346),LITREF(lit_347),sloc(671),YPfalse);
  T41 = VARREF_OR(YevalSsyntaxYmap_tree,YPfalse);
  T42 = fun_map_tree_143;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YevalSsyntaxYmap_tree,T40);
  lit_348 = YPPsym((P)"bq-remove-tokens");
  lit_349 = YPPlist(1,YPPsym((P)"x"));
  lit_350 = YPPsym((P)"cat");
  lit_351 = YPPsym((P)"cat!");
  lit_352 = YPPsym((P)"list*");
  lit_353 = YPPsym((P)"pair");
  T43 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bq_remove_tokens_144 = YPfab_met(FUNCODEREF(fun_bq_remove_tokens_144),T43,LITREF(lit_348),LITREF(lit_349),sloc(680),YPfalse);
  T45 = VARREF_OR(YevalSsyntaxYbq_remove_tokens,YPfalse);
  T46 = fun_bq_remove_tokens_144;
  T44 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T45,T46);
  VARSET(YevalSsyntaxYbq_remove_tokens,T44);
  lit_354 = YPPsym((P)"sexpr-syntax-if?");
  lit_355 = YPPlist(1,YPPsym((P)"exp"));
  T47 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_syntax_ifQ_145 = YPfab_met(FUNCODEREF(fun_sexpr_syntax_ifQ_145),T47,LITREF(lit_354),LITREF(lit_355),sloc(698),YPfalse);
  T49 = VARREF_OR(YevalSsyntaxYsexpr_syntax_ifQ,YPfalse);
  T50 = fun_sexpr_syntax_ifQ_145;
  T48 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T49,T50);
  VARSET(YevalSsyntaxYsexpr_syntax_ifQ,T48);
  lit_356 = YPPsym((P)"sexpr-syntax-if-value");
  lit_357 = YPPlist(1,YPPsym((P)"exp"));
  T51 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_value_146 = YPfab_met(FUNCODEREF(fun_sexpr_syntax_if_value_146),T51,LITREF(lit_356),LITREF(lit_357),sloc(701),YPfalse);
  T53 = VARREF_OR(YevalSsyntaxYsexpr_syntax_if_value,YPfalse);
  T54 = fun_sexpr_syntax_if_value_146;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  VARSET(YevalSsyntaxYsexpr_syntax_if_value,T52);
  lit_358 = YPPsym((P)"sexpr-syntax-if-pattern");
  lit_359 = YPPlist(1,YPPsym((P)"exp"));
  T55 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_pattern_147 = YPfab_met(FUNCODEREF(fun_sexpr_syntax_if_pattern_147),T55,LITREF(lit_358),LITREF(lit_359),sloc(704),YPfalse);
  T57 = VARREF_OR(YevalSsyntaxYsexpr_syntax_if_pattern,YPfalse);
  T58 = fun_sexpr_syntax_if_pattern_147;
  T56 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T57,T58);
  VARSET(YevalSsyntaxYsexpr_syntax_if_pattern,T56);
  lit_360 = YPPsym((P)"sexpr-syntax-if-then");
  lit_361 = YPPlist(1,YPPsym((P)"exp"));
  T59 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_then_148 = YPfab_met(FUNCODEREF(fun_sexpr_syntax_if_then_148),T59,LITREF(lit_360),LITREF(lit_361),sloc(707),YPfalse);
  T61 = VARREF_OR(YevalSsyntaxYsexpr_syntax_if_then,YPfalse);
  T62 = fun_sexpr_syntax_if_then_148;
  T60 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T61,T62);
  VARSET(YevalSsyntaxYsexpr_syntax_if_then,T60);
  lit_362 = YPPsym((P)"sexpr-syntax-if-else");
  lit_363 = YPPlist(1,YPPsym((P)"exp"));
  T63 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_else_149 = YPfab_met(FUNCODEREF(fun_sexpr_syntax_if_else_149),T63,LITREF(lit_362),LITREF(lit_363),sloc(712),YPfalse);
  T65 = VARREF_OR(YevalSsyntaxYsexpr_syntax_if_else,YPfalse);
  T66 = fun_sexpr_syntax_if_else_149;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YevalSsyntaxYsexpr_syntax_if_else,T64);
  lit_364 = YPPsym((P)"sexpr-pattern-variable?");
  lit_365 = YPPlist(1,YPPsym((P)"pat"));
  T67 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_pattern_variableQ_150 = YPfab_met(FUNCODEREF(fun_sexpr_pattern_variableQ_150),T67,LITREF(lit_364),LITREF(lit_365),sloc(715),YPfalse);
  T69 = VARREF_OR(YevalSsyntaxYsexpr_pattern_variableQ,YPfalse);
  T70 = fun_sexpr_pattern_variableQ_150;
  T68 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T69,T70);
  VARSET(YevalSsyntaxYsexpr_pattern_variableQ,T68);
  lit_366 = YPPsym((P)"sexpr-pattern-variable-name");
  lit_367 = YPPlist(1,YPPsym((P)"pat"));
  T71 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_pattern_variable_name_151 = YPfab_met(FUNCODEREF(fun_sexpr_pattern_variable_name_151),T71,LITREF(lit_366),LITREF(lit_367),sloc(718),YPfalse);
  T73 = VARREF_OR(YevalSsyntaxYsexpr_pattern_variable_name,YPfalse);
  T74 = fun_sexpr_pattern_variable_name_151;
  T72 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T73,T74);
  VARSET(YevalSsyntaxYsexpr_pattern_variable_name,T72);
  lit_368 = YPPsym((P)"sexpr-bind-pattern-variables");
  lit_369 = YPPlist(1,YPPsym((P)"pat"));
  lit_370 = YPPlist(1,YPPsym((P)"pat"));
  T76 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_col_152 = YPfab_met(FUNCODEREF(fun_col_152),T76,LITREF(lit_230),LITREF(lit_370),sloc(723),YPfalse);
  T75 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_bind_pattern_variables_153 = YPfab_met(FUNCODEREF(fun_sexpr_bind_pattern_variables_153),T75,LITREF(lit_368),LITREF(lit_369),sloc(721),YPfalse);
  T78 = VARREF_OR(YevalSsyntaxYsexpr_bind_pattern_variables,YPfalse);
  T79 = fun_sexpr_bind_pattern_variables_153;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YevalSsyntaxYsexpr_bind_pattern_variables,T77);
  lit_371 = YPPsym((P)"sexpr-make-macro-function");
  lit_372 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"exp"));
  lit_373 = YPPsym((P)"exp");
  lit_374 = YPPsym((P)"macro-error");
  T80 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sexpr_make_macro_function_154 = YPfab_met(FUNCODEREF(fun_sexpr_make_macro_function_154),T80,LITREF(lit_371),LITREF(lit_372),sloc(734),YPfalse);
  T82 = VARREF_OR(YevalSsyntaxYsexpr_make_macro_function,YPfalse);
  T83 = fun_sexpr_make_macro_function_154;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalSsyntaxYsexpr_make_macro_function,T81);
  if (YPfalse != YPfalse) {
  } else {
  }
  T84 = YPfalse;
  return T84;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSloc;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooScolsSlst},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"use", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sexpr-monitor?", CVAR, &YevalSsyntaxYsexpr_monitorQ},
  {"sexpr-unwind-protect-protected-form", CVAR, &YevalSsyntaxYsexpr_unwind_protect_protected_form},
  {"sexpr-iterate-signature", CVAR, &YevalSsyntaxYsexpr_iterate_signature},
  {"sexpr-signature-parameters", CVAR, &YevalSsyntaxYsexpr_signature_parameters},
  {"*bq-clobberable*", CVAR, &YevalSsyntaxYTbq_clobberableT},
  {"sexpr-method-value", CVAR, &YevalSsyntaxYsexpr_method_value},
  {"sexpr-make-anonymous-method", CVAR, &YevalSsyntaxYsexpr_make_anonymous_method},
  {"sexpr-make-method", CVAR, &YevalSsyntaxYsexpr_make_method},
  {"sexpr-if-then", CVAR, &YevalSsyntaxYsexpr_if_then},
  {"sexpr-syntax-definition?", CVAR, &YevalSsyntaxYsexpr_syntax_definitionQ},
  {"sexpr-block-body", CVAR, &YevalSsyntaxYsexpr_block_body},
  {"sexpr-def-variable", CVAR, &YevalSsyntaxYsexpr_def_variable},
  {"sexpr-function-definition?", CVAR, &YevalSsyntaxYsexpr_function_definitionQ},
  {"sexpr-prop?", CVAR, &YevalSsyntaxYsexpr_propQ},
  {"sexpr-function-definition-adjectives", CVAR, &YevalSsyntaxYsexpr_function_definition_adjectives},
  {"*bq-append*", CVAR, &YevalSsyntaxYTbq_appendT},
  {"sexpr-function-definition-value", CVAR, &YevalSsyntaxYsexpr_function_definition_value},
  {"sexpr-loc-raw-body", CVAR, &YevalSsyntaxYsexpr_loc_raw_body},
  {"sexpr-define-constant?", CVAR, &YevalSsyntaxYsexpr_define_constantQ},
  {"sexpr-assignment-value", CVAR, &YevalSsyntaxYsexpr_assignment_value},
  {"sexpr-make-syntax-if", CVAR, &YevalSsyntaxYsexpr_make_syntax_if},
  {"sexpr-fab-setter", CVAR, &YevalSsyntaxYsexpr_fab_setter},
  {"as-signature", CVAR, &YevalSsyntaxYas_signature},
  {"$sexpr-begin-tag", CVAR, &YevalSsyntaxYDsexpr_begin_tag},
  {"$sexpr-monitor-tag", CVAR, &YevalSsyntaxYDsexpr_monitor_tag},
  {"sexpr-begin?", CVAR, &YevalSsyntaxYsexpr_beginQ},
  {"$sexpr-prop!-tag", CVAR, &YevalSsyntaxYDsexpr_propX_tag},
  {"sexpr-isa-init-props", CVAR, &YevalSsyntaxYsexpr_isa_init_props},
  {"sexpr-syntax-if-pattern", CVAR, &YevalSsyntaxYsexpr_syntax_if_pattern},
  {"sexpr-method-definition?", CVAR, &YevalSsyntaxYsexpr_method_definitionQ},
  {"map-tree", CVAR, &YevalSsyntaxYmap_tree},
  {"sexpr-iterate->loc", CVAR, &YevalSsyntaxYsexpr_iterate_Gloc},
  {"sexpr-rest-exps", CVAR, &YevalSsyntaxYsexpr_rest_exps},
  {"sexpr-make-quote", CVAR, &YevalSsyntaxYsexpr_make_quote},
  {"sexpr-prop!?", CVAR, &YevalSsyntaxYsexpr_propXQ},
  {"*unique-name-counter*", CVAR, &YevalSsyntaxYTunique_name_counterT},
  {"sexpr-expand-backquote", CVAR, &YevalSsyntaxYsexpr_expand_backquote},
  {"sexpr-quoted?", CVAR, &YevalSsyntaxYsexpr_quotedQ},
  {"$sexpr-define-syntax-tag", CVAR, &YevalSsyntaxYDsexpr_define_syntax_tag},
  {"$sexpr-define-function-tag", CVAR, &YevalSsyntaxYDsexpr_define_function_tag},
  {"sexpr-if-else", CVAR, &YevalSsyntaxYsexpr_if_else},
  {"$sexpr-if-tag", CVAR, &YevalSsyntaxYDsexpr_if_tag},
  {"<name>", CVAR, &YevalSsyntaxYLnameG},
  {"sexpr-pattern-variable-name", CVAR, &YevalSsyntaxYsexpr_pattern_variable_name},
  {"sexpr-operator", CVAR, &YevalSsyntaxYsexpr_operator},
  {"sexpr-macro-expand?", CVAR, &YevalSsyntaxYsexpr_macro_expandQ},
  {"sexpr-block-name", CVAR, &YevalSsyntaxYsexpr_block_name},
  {"sexpr-forward-primitive?", CVAR, &YevalSsyntaxYsexpr_forward_primitiveQ},
  {"sexpr-loc-bound-bodies", CVAR, &YevalSsyntaxYsexpr_loc_bound_bodies},
  {"sexpr-backquote?", CVAR, &YevalSsyntaxYsexpr_backquoteQ},
  {"$sexpr-let-tag", CVAR, &YevalSsyntaxYDsexpr_let_tag},
  {"$sexpr-values-tag", CVAR, &YevalSsyntaxYDsexpr_values_tag},
  {"sexpr-text-of-quotation", CVAR, &YevalSsyntaxYsexpr_text_of_quotation},
  {"*bq-list**", CVAR, &YevalSsyntaxYTbq_listTT},
  {"sexpr-signature-value", CVAR, &YevalSsyntaxYsexpr_signature_value},
  {"sexpr-definition-value", CVAR, &YevalSsyntaxYsexpr_definition_value},
  {"sexpr-assignment-variable", CVAR, &YevalSsyntaxYsexpr_assignment_variable},
  {"$sexpr-prop-tag", CVAR, &YevalSsyntaxYDsexpr_prop_tag},
  {"bracket", CVAR, &YevalSsyntaxYbracket},
  {"sexpr-function-body", CVAR, &YevalSsyntaxYsexpr_function_body},
  {"sexpr-let-bound-variables", CVAR, &YevalSsyntaxYsexpr_let_bound_variables},
  {"sexpr-fab-getter", CVAR, &YevalSsyntaxYsexpr_fab_getter},
  {"sexpr-unwind-protect-cleanup-forms", CVAR, &YevalSsyntaxYsexpr_unwind_protect_cleanup_forms},
  {"sexpr-monitor-body", CVAR, &YevalSsyntaxYsexpr_monitor_body},
  {"$sexpr-macro-expand-tag", CVAR, &YevalSsyntaxYDsexpr_macro_expand_tag},
  {"sexpr-isa-prop-inits", CVAR, &YevalSsyntaxYsexpr_isa_prop_inits},
  {"$sexpr-define-generic-tag", CVAR, &YevalSsyntaxYDsexpr_define_generic_tag},
  {"find-option", CVAR, &YevalSsyntaxYfind_option},
  {"sexpr-pattern-variable?", CVAR, &YevalSsyntaxYsexpr_pattern_variableQ},
  {"*bq-nconc*", CVAR, &YevalSsyntaxYTbq_nconcT},
  {"sexpr-syntax-if-value", CVAR, &YevalSsyntaxYsexpr_syntax_if_value},
  {"$sexpr-define-method-tag", CVAR, &YevalSsyntaxYDsexpr_define_method_tag},
  {"sexpr-variable-type", CVAR, &YevalSsyntaxYsexpr_variable_type},
  {"sexpr-let-names+values", CVAR, &YevalSsyntaxYsexpr_let_namesAvalues},
  {"*bq-list*", CVAR, &YevalSsyntaxYTbq_listT},
  {"$sexpr-iterate-tag", CVAR, &YevalSsyntaxYDsexpr_iterate_tag},
  {"$sexpr-define-constant-tag", CVAR, &YevalSsyntaxYDsexpr_define_constant_tag},
  {"sexpr-iterate-body", CVAR, &YevalSsyntaxYsexpr_iterate_body},
  {"sexpr-application?", CVAR, &YevalSsyntaxYsexpr_applicationQ},
  {"*bq-quote*", CVAR, &YevalSsyntaxYTbq_quoteT},
  {"$sexpr-bind-exit-tag", CVAR, &YevalSsyntaxYDsexpr_bind_exit_tag},
  {"sexpr-define-class-parents", CVAR, &YevalSsyntaxYsexpr_define_class_parents},
  {"---main-3---", PVAR, NULL},
  {"$sexpr-quasiquote-tag", CVAR, &YevalSsyntaxYDsexpr_quasiquote_tag},
  {"$sexpr-def-tag", CVAR, &YevalSsyntaxYDsexpr_def_tag},
  {"sexpr-block?", CVAR, &YevalSsyntaxYsexpr_blockQ},
  {"sexpr-atom?", CVAR, &YevalSsyntaxYsexpr_atomQ},
  {"$sexpr-set-tag", CVAR, &YevalSsyntaxYDsexpr_set_tag},
  {"sexpr-prop-init-var", CVAR, &YevalSsyntaxYsexpr_prop_init_var},
  {"sexpr-method-parameters", CVAR, &YevalSsyntaxYsexpr_method_parameters},
  {"sexpr-monitor-info", CVAR, &YevalSsyntaxYsexpr_monitor_info},
  {"sexpr-first-operand", CVAR, &YevalSsyntaxYsexpr_first_operand},
  {"sexpr-unique-name", CVAR, &YevalSsyntaxYsexpr_unique_name},
  {"sexpr-iterate-name", CVAR, &YevalSsyntaxYsexpr_iterate_name},
  {"sexpr-syntax-definition-value", CVAR, &YevalSsyntaxYsexpr_syntax_definition_value},
  {"sexpr-assignment?", CVAR, &YevalSsyntaxYsexpr_assignmentQ},
  {"sexpr-function-value", CVAR, &YevalSsyntaxYsexpr_function_value},
  {"sexpr-tagged-list?", CVAR, &YevalSsyntaxYsexpr_tagged_listQ},
  {"sexpr-macro?", CVAR, &YevalSsyntaxYsexpr_macroQ},
  {"sexpr-iterate?", CVAR, &YevalSsyntaxYsexpr_iterateQ},
  {"sexpr-loc-bound-signatures", CVAR, &YevalSsyntaxYsexpr_loc_bound_signatures},
  {"sexpr-syntax-if?", CVAR, &YevalSsyntaxYsexpr_syntax_ifQ},
  {"$sexpr-quote-tag", CVAR, &YevalSsyntaxYDsexpr_quote_tag},
  {"$sexpr-define-tag", CVAR, &YevalSsyntaxYDsexpr_define_tag},
  {"$sexpr-isa-tag", CVAR, &YevalSsyntaxYDsexpr_isa_tag},
  {"bq-process", CVAR, &YevalSsyntaxYbq_process},
  {"sexpr-prop-init", CVAR, &YevalSsyntaxYsexpr_prop_init},
  {"---main-2---", PVAR, NULL},
  {"sexpr-define-class?", CVAR, &YevalSsyntaxYsexpr_define_classQ},
  {"sexpr-isa-parent", CVAR, &YevalSsyntaxYsexpr_isa_parent},
  {"sexpr-syntax-if-else", CVAR, &YevalSsyntaxYsexpr_syntax_if_else},
  {"---main-1---", PVAR, NULL},
  {"sexpr-monitor-test", CVAR, &YevalSsyntaxYsexpr_monitor_test},
  {"sexpr-new-unique-name-counter!", CVAR, &YevalSsyntaxYsexpr_new_unique_name_counterX},
  {"sexpr-let-body", CVAR, &YevalSsyntaxYsexpr_let_body},
  {"sexpr-value-type", CVAR, &YevalSsyntaxYsexpr_value_type},
  {"sexpr-let->combination", CVAR, &YevalSsyntaxYsexpr_let_Gcombination},
  {"sexpr-unquote?", CVAR, &YevalSsyntaxYsexpr_unquoteQ},
  {"sexpr-make-begin", CVAR, &YevalSsyntaxYsexpr_make_begin},
  {"sexpr-last-exp?", CVAR, &YevalSsyntaxYsexpr_last_expQ},
  {"sexpr-make-macro-function", CVAR, &YevalSsyntaxYsexpr_make_macro_function},
  {"$sexpr-method-tag", CVAR, &YevalSsyntaxYDsexpr_method_tag},
  {"$sexpr-locals-tag", CVAR, &YevalSsyntaxYDsexpr_locals_tag},
  {"sexpr-definition-variable", CVAR, &YevalSsyntaxYsexpr_definition_variable},
  {"sexpr-loc?", CVAR, &YevalSsyntaxYsexpr_locQ},
  {"sexpr-if-test", CVAR, &YevalSsyntaxYsexpr_if_test},
  {"sexpr-prop-type", CVAR, &YevalSsyntaxYsexpr_prop_type},
  {"sexpr-variable-name", CVAR, &YevalSsyntaxYsexpr_variable_name},
  {"sexpr-function-parameters", CVAR, &YevalSsyntaxYsexpr_function_parameters},
  {"sexpr-variable?", CVAR, &YevalSsyntaxYsexpr_variableQ},
  {"sexpr-no-operands?", CVAR, &YevalSsyntaxYsexpr_no_operandsQ},
  {"sexpr-fab-setter-name", CVAR, &YevalSsyntaxYsexpr_fab_setter_name},
  {"sexpr-rest-operands", CVAR, &YevalSsyntaxYsexpr_rest_operands},
  {"sexpr-bind-pattern-variables", CVAR, &YevalSsyntaxYsexpr_bind_pattern_variables},
  {"sexpr-function-definition-variable", CVAR, &YevalSsyntaxYsexpr_function_definition_variable},
  {"$sexpr-syntax-if-tag", CVAR, &YevalSsyntaxYDsexpr_syntax_if_tag},
  {"sexpr-syntax-definition-variable", CVAR, &YevalSsyntaxYsexpr_syntax_definition_variable},
  {"sexpr-unquote-splicing?", CVAR, &YevalSsyntaxYsexpr_unquote_splicingQ},
  {"sexpr-syntax-if-then", CVAR, &YevalSsyntaxYsexpr_syntax_if_then},
  {"sexpr-def-value", CVAR, &YevalSsyntaxYsexpr_def_value},
  {"sexpr-unwind-protect?", CVAR, &YevalSsyntaxYsexpr_unwind_protectQ},
  {"sexpr-isa?", CVAR, &YevalSsyntaxYsexpr_isaQ},
  {"sexpr-monitor-expand", CVAR, &YevalSsyntaxYsexpr_monitor_expand},
  {"sexpr-loc-body", CVAR, &YevalSsyntaxYsexpr_loc_body},
  {"*comma-atsign*", CVAR, &YevalSsyntaxYTcomma_atsignT},
  {"sexpr-method-signature", CVAR, &YevalSsyntaxYsexpr_method_signature},
  {"$sexpr-unwind-protect-tag", CVAR, &YevalSsyntaxYDsexpr_unwind_protect_tag},
  {"$sexpr-define-class-tag", CVAR, &YevalSsyntaxYDsexpr_define_class_tag},
  {"sexpr-prop-name", CVAR, &YevalSsyntaxYsexpr_prop_name},
  {"bq-remove-tokens", CVAR, &YevalSsyntaxYbq_remove_tokens},
  {"sexpr-isa-init-values", CVAR, &YevalSsyntaxYsexpr_isa_init_values},
  {"---main-0---", PVAR, NULL},
  {"sexpr-definition?", CVAR, &YevalSsyntaxYsexpr_definitionQ},
  {"$sexpr-macro-tag", CVAR, &YevalSsyntaxYDsexpr_macro_tag},
  {"sexpr-if?", CVAR, &YevalSsyntaxYsexpr_ifQ},
  {"sexpr-prop-owner", CVAR, &YevalSsyntaxYsexpr_prop_owner},
  {"nreconc", CVAR, &YevalSsyntaxYnreconc},
  {"sexpr-function-signature", CVAR, &YevalSsyntaxYsexpr_function_signature},
  {"sexpr-build-backquote-expander", CVAR, &YevalSsyntaxYsexpr_build_backquote_expander},
  {"sexpr-sequence->begin", CVAR, &YevalSsyntaxYsexpr_sequence_Gbegin},
  {"sexpr-loc-bound-names", CVAR, &YevalSsyntaxYsexpr_loc_bound_names},
  {"sexpr-monitor-type", CVAR, &YevalSsyntaxYsexpr_monitor_type},
  {"sexpr-let-values", CVAR, &YevalSsyntaxYsexpr_let_values},
  {"sexpr-iterate-inits", CVAR, &YevalSsyntaxYsexpr_iterate_inits},
  {"sexpr-make-if", CVAR, &YevalSsyntaxYsexpr_make_if},
  {"sexpr-generic-definition?", CVAR, &YevalSsyntaxYsexpr_generic_definitionQ},
  {"sexpr-let?", CVAR, &YevalSsyntaxYsexpr_letQ},
  {"eval", CVAR, &YevalSsyntaxYeval},
  {"sexpr-begin-actions", CVAR, &YevalSsyntaxYsexpr_begin_actions},
  {"sexpr-method-body", CVAR, &YevalSsyntaxYsexpr_method_body},
  {"sexpr-prop-init?", CVAR, &YevalSsyntaxYsexpr_prop_initQ},
  {"sexpr-method?", CVAR, &YevalSsyntaxYsexpr_methodQ},
  {"sexpr-make-application", CVAR, &YevalSsyntaxYsexpr_make_application},
  {"sexpr-operands", CVAR, &YevalSsyntaxYsexpr_operands},
  {"sexpr-first-exp", CVAR, &YevalSsyntaxYsexpr_first_exp},
  {"sexpr-def?", CVAR, &YevalSsyntaxYsexpr_defQ},
  {"sexpr-self-evaluating?", CVAR, &YevalSsyntaxYsexpr_self_evaluatingQ},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"sexpr-unwind-protect-cleanup-forms", NULL},
  {"sexpr-block-body", NULL},
  {"sexpr-signature-parameters", NULL},
  {"sexpr-def-variable", NULL},
  {"sexpr-syntax-definition-variable", NULL},
  {"$sexpr-define-generic-tag", NULL},
  {"sexpr-loc-raw-body", NULL},
  {"sexpr-fab-setter", NULL},
  {"$sexpr-macro-expand-tag", NULL},
  {"$sexpr-monitor-tag", NULL},
  {"sexpr-prop-type", NULL},
  {"$sexpr-prop!-tag", NULL},
  {"sexpr-isa-init-props", NULL},
  {"sexpr-syntax-if-pattern", NULL},
  {"sexpr-function-definition-value", NULL},
  {"sexpr-iterate->loc", NULL},
  {"sexpr-make-method", NULL},
  {"sexpr-expand-backquote", NULL},
  {"sexpr-def?", NULL},
  {"$sexpr-define-syntax-tag", NULL},
  {"$sexpr-define-function-tag", NULL},
  {"sexpr-if-else", NULL},
  {"$sexpr-if-tag", NULL},
  {"sexpr-operator", NULL},
  {"sexpr-block-name", NULL},
  {"sexpr-forward-primitive?", NULL},
  {"sexpr-loc-bound-bodies", NULL},
  {"$sexpr-let-tag", NULL},
  {"sexpr-signature-value", NULL},
  {"sexpr-definition-value", NULL},
  {"sexpr-assignment-variable", NULL},
  {"sexpr-function-body", NULL},
  {"sexpr-fab-getter", NULL},
  {"sexpr-prop-init-var", NULL},
  {"sexpr-isa-prop-inits", NULL},
  {"sexpr-syntax-if-value", NULL},
  {"$sexpr-define-method-tag", NULL},
  {"sexpr-variable-type", NULL},
  {"sexpr-unwind-protect-protected-form", NULL},
  {"$sexpr-define-constant-tag", NULL},
  {"sexpr-define-class-parents", NULL},
  {"$sexpr-def-tag", NULL},
  {"sexpr-if-then", NULL},
  {"$sexpr-set-tag", NULL},
  {"sexpr-unquote-splicing?", NULL},
  {"sexpr-function-definition-adjectives", NULL},
  {"sexpr-syntax-definition-value", NULL},
  {"sexpr-loc-bound-signatures", NULL},
  {"$sexpr-quote-tag", NULL},
  {"$sexpr-define-tag", NULL},
  {"$sexpr-isa-tag", NULL},
  {"sexpr-prop-init", NULL},
  {"sexpr-prop-owner", NULL},
  {"sexpr-define-class?", NULL},
  {"sexpr-isa-parent", NULL},
  {"sexpr-syntax-if-else", NULL},
  {"$sexpr-prop-tag", NULL},
  {"sexpr-let->combination", NULL},
  {"sexpr-unquote?", NULL},
  {"$sexpr-begin-tag", NULL},
  {"sexpr-make-begin", NULL},
  {"sexpr-make-macro-function", NULL},
  {"$sexpr-method-tag", NULL},
  {"$sexpr-locals-tag", NULL},
  {"sexpr-definition-variable", NULL},
  {"sexpr-if-test", NULL},
  {"sexpr-make-anonymous-method", NULL},
  {"sexpr-variable-name", NULL},
  {"sexpr-variable?", NULL},
  {"$sexpr-quasiquote-tag", NULL},
  {"sexpr-fab-setter-name", NULL},
  {"sexpr-function-definition-variable", NULL},
  {"$sexpr-syntax-if-tag", NULL},
  {"$sexpr-bind-exit-tag", NULL},
  {"sexpr-def-value", NULL},
  {"sexpr-monitor-expand", NULL},
  {"sexpr-text-of-quotation", NULL},
  {"sexpr-method-signature", NULL},
  {"$sexpr-unwind-protect-tag", NULL},
  {"sexpr-prop-init?", NULL},
  {"$sexpr-define-class-tag", NULL},
  {"sexpr-isa-init-values", NULL},
  {"sexpr-syntax-if-then", NULL},
  {"sexpr-prop-name", NULL},
  {"sexpr-function-signature", NULL},
  {"sexpr-sequence->begin", NULL},
  {"sexpr-loc-bound-names", NULL},
  {"$sexpr-iterate-tag", NULL},
  {"eval", NULL},
  {"sexpr-bind-pattern-variables", NULL},
  {"sexpr-method-body", NULL},
  {"sexpr-assignment-value", NULL},
  {"sexpr-make-application", NULL},
  {"sexpr-operands", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSsyntax;
MODULE_INFO module_info_evalSsyntax = {
  "eval/syntax",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_gooScolsSlst (void);

/* EXPRESSION: */

extern void load_module_evalSsyntax (void);

void load_module_evalSsyntax (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_gooScolsSlst();

  (P)YevalSsyntaxY___main_0___();
  (P)YevalSsyntaxY___main_1___();
  (P)YevalSsyntaxY___main_2___();
  (P)YevalSsyntaxY___main_3___();

}

/* END OF GENERATED CODE. */
