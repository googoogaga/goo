/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: x8r/syntax */

DEF(Yx8rSsyntaxYsexpr_iterate_Gloc,"x8r/syntax","sexpr-iterate->loc");
EXT(YLlstG,"goo/boot","<lst>");
DEF(Yx8rSsyntaxYsexpr_expand_backquote,"x8r/syntax","sexpr-expand-backquote");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
DEF(Yx8rSsyntaxYsexpr_self_evaluatingQ,"x8r/syntax","sexpr-self-evaluating?");
DEF(Yx8rSsyntaxYsexpr_operands,"x8r/syntax","sexpr-operands");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
DEF(Yx8rSsyntaxYsexpr_definition_value,"x8r/syntax","sexpr-definition-value");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYsinh,"goo/math","sinh");
DEF(Yx8rSsyntaxYsexpr_new_unique_name_counterX,"x8r/syntax","sexpr-new-unique-name-counter!");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(Yx8rSsyntaxYsexpr_syntax_if_else,"x8r/syntax","sexpr-syntax-if-else");
EXT(YgooScolsSstrYstring_join,"goo/cols/str","string-join");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
DEF(Yx8rSsyntaxYsexpr_assignment_value,"x8r/syntax","sexpr-assignment-value");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
DEF(Yx8rSsyntaxYsexpr_syntax_definition_variable,"x8r/syntax","sexpr-syntax-definition-variable");
DEF(Yx8rSsyntaxYsexpr_signature_value,"x8r/syntax","sexpr-signature-value");
DEF(Yx8rSsyntaxYTbq_nconcT,"x8r/syntax","*bq-nconc*");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSruntimeYformat_to_string,"goo/runtime","format-to-string");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
DEF(Yx8rSsyntaxYsexpr_iterateQ,"x8r/syntax","sexpr-iterate?");
EXT(YgooSmathYlog,"goo/math","log");
DEF(Yx8rSsyntaxYsexpr_forward_primitiveQ,"x8r/syntax","sexpr-forward-primitive?");
DEF(Yx8rSsyntaxYDsexpr_locals_tag,"x8r/syntax","$sexpr-locals-tag");
DEF(Yx8rSsyntaxYsexpr_block_name,"x8r/syntax","sexpr-block-name");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
DEF(Yx8rSsyntaxYDsexpr_let_tag,"x8r/syntax","$sexpr-let-tag");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yobject_class,"goo/boot","object-class");
DEF(Yx8rSsyntaxYsexpr_prop_owner,"x8r/syntax","sexpr-prop-owner");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
DEF(Yx8rSsyntaxYDsexpr_define_method_tag,"x8r/syntax","$sexpr-define-method-tag");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
DEF(Yx8rSsyntaxYsexpr_loc_bound_names,"x8r/syntax","sexpr-loc-bound-names");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(Yx8rSsyntaxYsexpr_atomQ,"x8r/syntax","sexpr-atom?");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
DEF(Yx8rSsyntaxYsexpr_operator,"x8r/syntax","sexpr-operator");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
DEF(Yx8rSsyntaxYsexpr_prop_name,"x8r/syntax","sexpr-prop-name");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
DEF(Yx8rSsyntaxYDsexpr_define_generic_tag,"x8r/syntax","$sexpr-define-generic-tag");
DEF(Yx8rSsyntaxYsexpr_beginQ,"x8r/syntax","sexpr-begin?");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
DEF(Yx8rSsyntaxYsexpr_syntax_definitionQ,"x8r/syntax","sexpr-syntax-definition?");
DEF(Yx8rSsyntaxYsexpr_syntax_if_then,"x8r/syntax","sexpr-syntax-if-then");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
DEF(Yx8rSsyntaxYas_signature,"x8r/syntax","as-signature");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSruntimeYalways,"goo/runtime","always");
DEF(Yx8rSsyntaxYsexpr_monitor_info,"x8r/syntax","sexpr-monitor-info");
EXT(YgooSmathYN,"goo/math","~");
DEF(Yx8rSsyntaxYsexpr_isa_init_props,"x8r/syntax","sexpr-isa-init-props");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(Yx8rSsyntaxYsexpr_macroQ,"x8r/syntax","sexpr-macro?");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
DEF(Yx8rSsyntaxYsexpr_applicationQ,"x8r/syntax","sexpr-application?");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(Yx8rSsyntaxYsexpr_make_method,"x8r/syntax","sexpr-make-method");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
DEF(Yx8rSsyntaxYsexpr_make_application,"x8r/syntax","sexpr-make-application");
EXT(Ygen_src,"goo/boot","gen-src");
DEF(Yx8rSsyntaxYDsexpr_define_function_tag,"x8r/syntax","$sexpr-define-function-tag");
DEF(Yx8rSsyntaxYsexpr_monitor_body,"x8r/syntax","sexpr-monitor-body");
EXT(YgooSmathY_,"goo/math","-");
DEF(Yx8rSsyntaxYTbq_appendT,"x8r/syntax","*bq-append*");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
DEF(Yx8rSsyntaxYDsexpr_prop_tag,"x8r/syntax","$sexpr-prop-tag");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
DEF(Yx8rSsyntaxYsexpr_function_definition_value,"x8r/syntax","sexpr-function-definition-value");
EXT(Ynul,"goo/boot","nul");
DEF(Yx8rSsyntaxYTcomma_atsignT,"x8r/syntax","*comma-atsign*");
DEF(Yx8rSsyntaxYsexpr_loc_bound_bodies,"x8r/syntax","sexpr-loc-bound-bodies");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
DEF(Yx8rSsyntaxYsexpr_function_signature,"x8r/syntax","sexpr-function-signature");
DEF(Yx8rSsyntaxYsexpr_ifQ,"x8r/syntax","sexpr-if?");
DEF(Yx8rSsyntaxYsexpr_syntax_if_pattern,"x8r/syntax","sexpr-syntax-if-pattern");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
DEF(Yx8rSsyntaxYeval,"x8r/syntax","eval");
EXT(YgooScolsStabYtab_test,"goo/cols/tab","tab-test");
EXT(YLclassG,"goo/boot","<class>");
DEF(Yx8rSsyntaxYsexpr_iterate_inits,"x8r/syntax","sexpr-iterate-inits");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(Yx8rSsyntaxYsexpr_make_anonymous_method,"x8r/syntax","sexpr-make-anonymous-method");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
DEF(Yx8rSsyntaxYmap_tree,"x8r/syntax","map-tree");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
DEF(Yx8rSsyntaxYsexpr_macro_expandQ,"x8r/syntax","sexpr-macro-expand?");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
DEF(Yx8rSsyntaxYsexpr_if_test,"x8r/syntax","sexpr-if-test");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsScolYlow_fillX,"goo/cols/col","low-fill!");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
DEF(Yx8rSsyntaxYsexpr_method_parameters,"x8r/syntax","sexpr-method-parameters");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSruntimeYspread,"goo/runtime","spread");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(Yx8rSsyntaxYnreconc,"x8r/syntax","nreconc");
DEF(Yx8rSsyntaxYsexpr_let_body,"x8r/syntax","sexpr-let-body");
DEF(Yx8rSsyntaxYbq_process,"x8r/syntax","bq-process");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(Yx8rSsyntaxYsexpr_prop_init,"x8r/syntax","sexpr-prop-init");
DEF(Yx8rSsyntaxYsexpr_def_value,"x8r/syntax","sexpr-def-value");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
DEF(Yx8rSsyntaxYsexpr_defQ,"x8r/syntax","sexpr-def?");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
DEF(Yx8rSsyntaxYDsexpr_isa_tag,"x8r/syntax","$sexpr-isa-tag");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Yhead,"goo/boot","head");
DEF(Yx8rSsyntaxYsexpr_method_signature,"x8r/syntax","sexpr-method-signature");
DEF(Yx8rSsyntaxYsexpr_loc_raw_body,"x8r/syntax","sexpr-loc-raw-body");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YLtypeG,"goo/boot","<type>");
DEF(Yx8rSsyntaxYsexpr_bind_pattern_variables,"x8r/syntax","sexpr-bind-pattern-variables");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
DEF(Yx8rSsyntaxYsexpr_unquote_splicingQ,"x8r/syntax","sexpr-unquote-splicing?");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
DEF(Yx8rSsyntaxYsexpr_letQ,"x8r/syntax","sexpr-let?");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYatan2,"goo/math","atan2");
DEF(Yx8rSsyntaxYfind_option,"x8r/syntax","find-option");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooStypesYtT,"goo/types","t*");
DEF(Yx8rSsyntaxYsexpr_function_definition_variable,"x8r/syntax","sexpr-function-definition-variable");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
DEF(Yx8rSsyntaxYsexpr_backquoteQ,"x8r/syntax","sexpr-backquote?");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(Yx8rSsyntaxYsexpr_definition_variable,"x8r/syntax","sexpr-definition-variable");
DEF(Yx8rSsyntaxYbracket,"x8r/syntax","bracket");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYB,"goo/math","&");
DEF(Yx8rSsyntaxYDsexpr_quote_tag,"x8r/syntax","$sexpr-quote-tag");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YPtnul,"goo/boot","%tnul");
DEF(Yx8rSsyntaxYsexpr_if_else,"x8r/syntax","sexpr-if-else");
DEF(Yx8rSsyntaxYDsexpr_macro_tag,"x8r/syntax","$sexpr-macro-tag");
DEF(Yx8rSsyntaxYsexpr_locQ,"x8r/syntax","sexpr-loc?");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
DEF(Yx8rSsyntaxYsexpr_first_operand,"x8r/syntax","sexpr-first-operand");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
DEF(Yx8rSsyntaxYsexpr_monitor_test,"x8r/syntax","sexpr-monitor-test");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsSlstYpop,"goo/cols/lst","pop");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSstrYstring_split,"goo/cols/str","string-split");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
DEF(Yx8rSsyntaxYDsexpr_set_tag,"x8r/syntax","$sexpr-set-tag");
EXT(Ynew,"goo/boot","new");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
DEF(Yx8rSsyntaxYsexpr_define_class_parents,"x8r/syntax","sexpr-define-class-parents");
EXT(YgooSmathYGG,"goo/math",">>");
DEF(Yx8rSsyntaxYsexpr_function_definitionQ,"x8r/syntax","sexpr-function-definition?");
EXT(YgooScolsScolYlow_into,"goo/cols/col","low-into");
EXT(YgooSmathYC,"goo/math","^");
DEF(Yx8rSsyntaxYsexpr_make_begin,"x8r/syntax","sexpr-make-begin");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(Yx8rSsyntaxYsexpr_unwind_protect_protected_form,"x8r/syntax","sexpr-unwind-protect-protected-form");
DEF(Yx8rSsyntaxYsexpr_fab_getter,"x8r/syntax","sexpr-fab-getter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(Yx8rSsyntaxYsexpr_monitor_expand,"x8r/syntax","sexpr-monitor-expand");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YgooScolsSlstYpush,"goo/cols/lst","push");
EXT(Yfab_sym,"goo/boot","fab-sym");
DEF(Yx8rSsyntaxYsexpr_rest_operands,"x8r/syntax","sexpr-rest-operands");
DEF(Yx8rSsyntaxYsexpr_prop_type,"x8r/syntax","sexpr-prop-type");
DEF(Yx8rSsyntaxYDsexpr_macro_expand_tag,"x8r/syntax","$sexpr-macro-expand-tag");
EXT(YLpropG,"goo/boot","<prop>");
DEF(Yx8rSsyntaxYsexpr_variable_name,"x8r/syntax","sexpr-variable-name");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
DEF(Yx8rSsyntaxYsexpr_prop_initQ,"x8r/syntax","sexpr-prop-init?");
DEF(Yx8rSsyntaxYsexpr_method_body,"x8r/syntax","sexpr-method-body");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsStabYtab_gc_state,"goo/cols/tab","tab-gc-state");
EXT(YgooScolsSassocYassocs_test,"goo/cols/assoc","assocs-test");
DEF(Yx8rSsyntaxYsexpr_unwind_protect_cleanup_forms,"x8r/syntax","sexpr-unwind-protect-cleanup-forms");
DEF(Yx8rSsyntaxYsexpr_make_syntax_if,"x8r/syntax","sexpr-make-syntax-if");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
DEF(Yx8rSsyntaxYsexpr_block_body,"x8r/syntax","sexpr-block-body");
DEF(Yx8rSsyntaxYsexpr_let_Gcombination,"x8r/syntax","sexpr-let->combination");
EXT(YgooScolsSassocYassocs_test_setter,"goo/cols/assoc","assocs-test-setter");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
DEF(Yx8rSsyntaxYDsexpr_syntax_if_tag,"x8r/syntax","$sexpr-syntax-if-tag");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DEF(Yx8rSsyntaxYsexpr_loc_bound_signatures,"x8r/syntax","sexpr-loc-bound-signatures");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLlogG,"goo/boot","<log>");
DEF(Yx8rSsyntaxYsexpr_fab_setter_name,"x8r/syntax","sexpr-fab-setter-name");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsSstrYstring_repeat,"goo/cols/str","string-repeat");
DEF(Yx8rSsyntaxYsexpr_make_if,"x8r/syntax","sexpr-make-if");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YPprop,"goo/boot","%prop");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(Yx8rSsyntaxYDsexpr_if_tag,"x8r/syntax","$sexpr-if-tag");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DEF(Yx8rSsyntaxYsexpr_generic_definitionQ,"x8r/syntax","sexpr-generic-definition?");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YOall2Q,"goo/boot","@all2?");
DEF(Yx8rSsyntaxYsexpr_isa_init_values,"x8r/syntax","sexpr-isa-init-values");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YPisa,"goo/boot","%isa");
DEF(Yx8rSsyntaxYsexpr_tagged_listQ,"x8r/syntax","sexpr-tagged-list?");
DEF(Yx8rSsyntaxYsexpr_function_parameters,"x8r/syntax","sexpr-function-parameters");
DEF(Yx8rSsyntaxYsexpr_let_values,"x8r/syntax","sexpr-let-values");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
DEF(Yx8rSsyntaxYsexpr_variableQ,"x8r/syntax","sexpr-variable?");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
DEF(Yx8rSsyntaxYsexpr_make_macro_function,"x8r/syntax","sexpr-make-macro-function");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
DEF(Yx8rSsyntaxYsexpr_prop_init_var,"x8r/syntax","sexpr-prop-init-var");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYrem,"goo/math","rem");
DEF(Yx8rSsyntaxYsexpr_iterate_name,"x8r/syntax","sexpr-iterate-name");
DEF(Yx8rSsyntaxYsexpr_blockQ,"x8r/syntax","sexpr-block?");
DEF(Yx8rSsyntaxYsexpr_syntax_if_value,"x8r/syntax","sexpr-syntax-if-value");
EXT(YgooSmathYE,"goo/math","=");
DEF(Yx8rSsyntaxYsexpr_loc_body,"x8r/syntax","sexpr-loc-body");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(Yx8rSsyntaxYsexpr_syntax_ifQ,"x8r/syntax","sexpr-syntax-if?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(Yunexec,"goo/boot","unexec");
DEF(Yx8rSsyntaxYsexpr_make_quote,"x8r/syntax","sexpr-make-quote");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(Yx8rSsyntaxYsexpr_syntax_definition_value,"x8r/syntax","sexpr-syntax-definition-value");
DEF(Yx8rSsyntaxYDsexpr_begin_tag,"x8r/syntax","$sexpr-begin-tag");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DEF(Yx8rSsyntaxYsexpr_pattern_variable_name,"x8r/syntax","sexpr-pattern-variable-name");
EXT(YgooScolsSassocYLassocsG,"goo/cols/assoc","<assocs>");
DEF(Yx8rSsyntaxYsexpr_let_namesAvalues,"x8r/syntax","sexpr-let-names+values");
DEF(Yx8rSsyntaxYsexpr_build_backquote_expander,"x8r/syntax","sexpr-build-backquote-expander");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
DEF(Yx8rSsyntaxYsexpr_unquoteQ,"x8r/syntax","sexpr-unquote?");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
DEF(Yx8rSsyntaxYsexpr_iterate_signature,"x8r/syntax","sexpr-iterate-signature");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLanyG,"goo/boot","<any>");
DEF(Yx8rSsyntaxYsexpr_methodQ,"x8r/syntax","sexpr-method?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLtupG,"goo/boot","<tup>");
DEF(Yx8rSsyntaxYsexpr_monitorQ,"x8r/syntax","sexpr-monitor?");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYT,"goo/math","*");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(Yx8rSsyntaxYsexpr_text_of_quotation,"x8r/syntax","sexpr-text-of-quotation");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsStabYDpermanent_hash_state,"goo/cols/tab","$permanent-hash-state");
EXT(YgooStypesYtL,"goo/types","t<");
DEF(Yx8rSsyntaxYsexpr_if_then,"x8r/syntax","sexpr-if-then");
DEF(Yx8rSsyntaxYDsexpr_define_class_tag,"x8r/syntax","$sexpr-define-class-tag");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
DEF(Yx8rSsyntaxYsexpr_pattern_variableQ,"x8r/syntax","sexpr-pattern-variable?");
DEF(Yx8rSsyntaxYsexpr_rest_exps,"x8r/syntax","sexpr-rest-exps");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooSmathYmod,"goo/math","mod");
DEF(Yx8rSsyntaxYsexpr_sequence_Gbegin,"x8r/syntax","sexpr-sequence->begin");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(Yx8rSsyntaxYsexpr_no_operandsQ,"x8r/syntax","sexpr-no-operands?");
EXT(YLmetG,"goo/boot","<met>");
DEF(Yx8rSsyntaxYsexpr_quotedQ,"x8r/syntax","sexpr-quoted?");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
DEF(Yx8rSsyntaxYsexpr_unique_name,"x8r/syntax","sexpr-unique-name");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(Yx8rSsyntaxYDsexpr_method_tag,"x8r/syntax","$sexpr-method-tag");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
DEF(Yx8rSsyntaxYTbq_clobberableT,"x8r/syntax","*bq-clobberable*");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
DEF(Yx8rSsyntaxYsexpr_iterate_body,"x8r/syntax","sexpr-iterate-body");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
DEF(Yx8rSsyntaxYDsexpr_quasiquote_tag,"x8r/syntax","$sexpr-quasiquote-tag");
DEF(Yx8rSsyntaxYsexpr_def_variable,"x8r/syntax","sexpr-def-variable");
DEF(Yx8rSsyntaxYLnameG,"x8r/syntax","<name>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(Yx8rSsyntaxYDsexpr_unwind_protect_tag,"x8r/syntax","$sexpr-unwind-protect-tag");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSvecYpop_lastX,"goo/cols/vec","pop-last!");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooStypesYanyQ,"goo/types","any?");
DEF(Yx8rSsyntaxYTbq_listTT,"x8r/syntax","*bq-list**");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Ysig_names,"goo/boot","sig-names");
DEF(Yx8rSsyntaxYsexpr_method_definitionQ,"x8r/syntax","sexpr-method-definition?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSvecYpush_lastX,"goo/cols/vec","push-last!");
DEF(Yx8rSsyntaxYsexpr_let_bound_variables,"x8r/syntax","sexpr-let-bound-variables");
DEF(Yx8rSsyntaxYbq_remove_tokens,"x8r/syntax","bq-remove-tokens");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YPsnul,"goo/boot","%snul");
DEF(Yx8rSsyntaxYTbq_quoteT,"x8r/syntax","*bq-quote*");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmacrosYEE,"goo/macros","==");
DEF(Yx8rSsyntaxYsexpr_function_value,"x8r/syntax","sexpr-function-value");
EXT(YgooSmathYto_str,"goo/math","to-str");
DEF(Yx8rSsyntaxYsexpr_last_expQ,"x8r/syntax","sexpr-last-exp?");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
DEF(Yx8rSsyntaxYDsexpr_def_tag,"x8r/syntax","$sexpr-def-tag");
DEF(Yx8rSsyntaxYDsexpr_monitor_tag,"x8r/syntax","$sexpr-monitor-tag");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Ylst,"goo/boot","lst");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
DEF(Yx8rSsyntaxYsexpr_assignment_variable,"x8r/syntax","sexpr-assignment-variable");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSruntimeYformat,"goo/runtime","format");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
DEF(Yx8rSsyntaxYsexpr_first_exp,"x8r/syntax","sexpr-first-exp");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
DEF(Yx8rSsyntaxYsexpr_isaQ,"x8r/syntax","sexpr-isa?");
DEF(Yx8rSsyntaxYsexpr_propQ,"x8r/syntax","sexpr-prop?");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
DEF(Yx8rSsyntaxYsexpr_isa_parent,"x8r/syntax","sexpr-isa-parent");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(Yx8rSsyntaxYsexpr_function_body,"x8r/syntax","sexpr-function-body");
DEF(Yx8rSsyntaxYsexpr_isa_prop_inits,"x8r/syntax","sexpr-isa-prop-inits");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSmacrosYcat,"goo/macros","cat");
DEF(Yx8rSsyntaxYDsexpr_bind_exit_tag,"x8r/syntax","$sexpr-bind-exit-tag");
DEF(Yx8rSsyntaxYsexpr_fab_setter,"x8r/syntax","sexpr-fab-setter");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(Ytail,"goo/boot","tail");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
DEF(Yx8rSsyntaxYsexpr_definitionQ,"x8r/syntax","sexpr-definition?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
DEF(Yx8rSsyntaxYDsexpr_define_syntax_tag,"x8r/syntax","$sexpr-define-syntax-tag");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmathYupperQ,"goo/math","upper?");
DEF(Yx8rSsyntaxYsexpr_assignmentQ,"x8r/syntax","sexpr-assignment?");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YOlst,"goo/boot","@lst");
DEF(Yx8rSsyntaxYTunique_name_counterT,"x8r/syntax","*unique-name-counter*");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
DEF(Yx8rSsyntaxYsexpr_begin_actions,"x8r/syntax","sexpr-begin-actions");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Ytype_elts,"goo/boot","type-elts");
DEF(Yx8rSsyntaxYDsexpr_iterate_tag,"x8r/syntax","$sexpr-iterate-tag");
DEF(Yx8rSsyntaxYDsexpr_define_tag,"x8r/syntax","$sexpr-define-tag");
DEF(Yx8rSsyntaxYsexpr_variable_type,"x8r/syntax","sexpr-variable-type");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
DEF(Yx8rSsyntaxYDsexpr_values_tag,"x8r/syntax","$sexpr-values-tag");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
DEF(Yx8rSsyntaxYsexpr_define_classQ,"x8r/syntax","sexpr-define-class?");
DEF(Yx8rSsyntaxYsexpr_monitor_type,"x8r/syntax","sexpr-monitor-type");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(Yx8rSsyntaxYTbq_listT,"x8r/syntax","*bq-list*");
DEF(Yx8rSsyntaxYsexpr_signature_parameters,"x8r/syntax","sexpr-signature-parameters");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYelt,"goo/macros","elt");
DEF(Yx8rSsyntaxYsexpr_method_value,"x8r/syntax","sexpr-method-value");
DEF(Yx8rSsyntaxYsexpr_unwind_protectQ,"x8r/syntax","sexpr-unwind-protect?");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_219);
DEFLIT(lit_4);
DEFLIT(lit_41);
DEFLIT(lit_201);
DEFLIT(lit_233);
DEFLIT(lit_251);
DEFLIT(lit_66);
DEFLIT(lit_111);
DEFLIT(lit_138);
DEFLIT(lit_55);
DEFLIT(lit_8);
DEFLIT(lit_47);
DEFLIT(lit_172);
DEFLIT(lit_113);
DEFLIT(lit_198);
DEFLIT(lit_16);
DEFLIT(lit_91);
DEFLIT(lit_58);
DEFLIT(lit_15);
DEFLIT(lit_80);
DEFLIT(lit_237);
DEFLIT(lit_163);
DEFLIT(lit_33);
DEFLIT(lit_72);
DEFLIT(lit_46);
DEFLIT(lit_11);
DEFLIT(lit_9);
DEFLIT(lit_110);
DEFLIT(lit_157);
DEFLIT(lit_153);
DEFLIT(lit_40);
DEFLIT(lit_158);
DEFLIT(lit_45);
DEFLIT(lit_215);
DEFLIT(lit_250);
DEFLIT(lit_185);
DEFLIT(lit_93);
DEFLIT(lit_122);
DEFLIT(lit_159);
DEFLIT(lit_52);
DEFLIT(lit_71);
DEFLIT(lit_197);
DEFLIT(lit_205);
DEFLIT(lit_165);
DEFLIT(lit_21);
DEFLIT(lit_225);
DEFLIT(lit_37);
DEFLIT(lit_102);
DEFLIT(lit_248);
DEFLIT(lit_204);
DEFLIT(lit_43);
DEFLIT(lit_217);
DEFLIT(lit_140);
DEFLIT(lit_22);
DEFLIT(lit_222);
DEFLIT(lit_223);
DEFLIT(lit_195);
DEFLIT(lit_78);
DEFLIT(lit_189);
DEFLIT(lit_120);
DEFLIT(lit_86);
DEFLIT(lit_39);
DEFLIT(lit_88);
DEFLIT(lit_121);
DEFLIT(lit_67);
DEFLIT(lit_49);
DEFLIT(lit_190);
DEFLIT(lit_27);
DEFLIT(lit_44);
DEFLIT(lit_252);
DEFLIT(lit_183);
DEFLIT(lit_106);
DEFLIT(lit_34);
DEFLIT(lit_247);
DEFLIT(lit_181);
DEFLIT(lit_224);
DEFLIT(lit_174);
DEFLIT(lit_60);
DEFLIT(lit_74);
DEFLIT(lit_119);
DEFLIT(lit_206);
DEFLIT(lit_133);
DEFLIT(lit_136);
DEFLIT(lit_175);
DEFLIT(lit_211);
DEFLIT(lit_54);
DEFLIT(lit_218);
DEFLIT(lit_148);
DEFLIT(lit_2);
DEFLIT(lit_69);
DEFLIT(lit_89);
DEFLIT(lit_65);
DEFLIT(lit_173);
DEFLIT(lit_75);
DEFLIT(lit_132);
DEFLIT(lit_42);
DEFLIT(lit_150);
DEFLIT(lit_129);
DEFLIT(lit_31);
DEFLIT(lit_95);
DEFLIT(lit_137);
DEFLIT(lit_0);
DEFLIT(lit_30);
DEFLIT(lit_19);
DEFLIT(lit_240);
DEFLIT(lit_245);
DEFLIT(lit_35);
DEFLIT(lit_81);
DEFLIT(lit_164);
DEFLIT(lit_212);
DEFLIT(lit_194);
DEFLIT(lit_228);
DEFLIT(lit_167);
DEFLIT(lit_160);
DEFLIT(lit_227);
DEFLIT(lit_155);
DEFLIT(lit_100);
DEFLIT(lit_234);
DEFLIT(lit_92);
DEFLIT(lit_17);
DEFLIT(lit_221);
DEFLIT(lit_246);
DEFLIT(lit_7);
DEFLIT(lit_193);
DEFLIT(lit_77);
DEFLIT(lit_213);
DEFLIT(lit_147);
DEFLIT(lit_13);
DEFLIT(lit_135);
DEFLIT(lit_18);
DEFLIT(lit_151);
DEFLIT(lit_152);
DEFLIT(lit_57);
DEFLIT(lit_182);
DEFLIT(lit_220);
DEFLIT(lit_115);
DEFLIT(lit_101);
DEFLIT(lit_144);
DEFLIT(lit_53);
DEFLIT(lit_249);
DEFLIT(lit_70);
DEFLIT(lit_134);
DEFLIT(lit_114);
DEFLIT(lit_145);
DEFLIT(lit_184);
DEFLIT(lit_241);
DEFLIT(lit_139);
DEFLIT(lit_230);
DEFLIT(lit_216);
DEFLIT(lit_82);
DEFLIT(lit_141);
DEFLIT(lit_128);
DEFLIT(lit_168);
DEFLIT(lit_131);
DEFLIT(lit_56);
DEFLIT(lit_127);
DEFLIT(lit_207);
DEFLIT(lit_236);
DEFLIT(lit_10);
DEFLIT(lit_238);
DEFLIT(lit_242);
DEFLIT(lit_118);
DEFLIT(lit_79);
DEFLIT(lit_188);
DEFLIT(lit_254);
DEFLIT(lit_169);
DEFLIT(lit_109);
DEFLIT(lit_177);
DEFLIT(lit_90);
DEFLIT(lit_191);
DEFLIT(lit_214);
DEFLIT(lit_203);
DEFLIT(lit_171);
DEFLIT(lit_26);
DEFLIT(lit_87);
DEFLIT(lit_96);
DEFLIT(lit_117);
DEFLIT(lit_143);
DEFLIT(lit_84);
DEFLIT(lit_64);
DEFLIT(lit_5);
DEFLIT(lit_108);
DEFLIT(lit_166);
DEFLIT(lit_244);
DEFLIT(lit_229);
DEFLIT(lit_36);
DEFLIT(lit_176);
DEFLIT(lit_98);
DEFLIT(lit_124);
DEFLIT(lit_14);
DEFLIT(lit_107);
DEFLIT(lit_59);
DEFLIT(lit_94);
DEFLIT(lit_61);
DEFLIT(lit_200);
DEFLIT(lit_142);
DEFLIT(lit_178);
DEFLIT(lit_192);
DEFLIT(lit_32);
DEFLIT(lit_12);
DEFLIT(lit_231);
DEFLIT(lit_28);
DEFLIT(lit_48);
DEFLIT(lit_255);
DEFLIT(lit_76);
DEFLIT(lit_130);
DEFLIT(lit_85);
DEFLIT(lit_105);
DEFLIT(lit_243);
DEFLIT(lit_202);
DEFLIT(lit_83);
DEFLIT(lit_50);
DEFLIT(lit_51);
DEFLIT(lit_62);
DEFLIT(lit_199);
DEFLIT(lit_209);
DEFLIT(lit_154);
DEFLIT(lit_63);
DEFLIT(lit_125);
DEFLIT(lit_170);
DEFLIT(lit_6);
DEFLIT(lit_235);
DEFLIT(lit_156);
DEFLIT(lit_103);
DEFLIT(lit_1);
DEFLIT(lit_208);
DEFLIT(lit_99);
DEFLIT(lit_196);
DEFLIT(lit_38);
DEFLIT(lit_24);
DEFLIT(lit_161);
DEFLIT(lit_29);
DEFLIT(lit_253);
DEFLIT(lit_126);
DEFLIT(lit_23);
DEFLIT(lit_186);
DEFLIT(lit_97);
DEFLIT(lit_187);
DEFLIT(lit_162);
DEFLIT(lit_68);
DEFLIT(lit_3);
DEFLIT(lit_123);
DEFLIT(lit_149);
DEFLIT(lit_25);
DEFLIT(lit_146);
DEFLIT(lit_210);
DEFLIT(lit_179);
DEFLIT(lit_116);
DEFLIT(lit_232);
DEFLIT(lit_20);
DEFLIT(lit_104);
DEFLIT(lit_73);
DEFLIT(lit_112);
DEFLIT(lit_180);
DEFLIT(lit_226);
DEFLIT(lit_239);

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
LOCFOR(fun_sexpr_definitionQ_13);
LOCFOR(fun_sexpr_definition_variable_14);
LOCFOR(fun_sexpr_definition_value_15);
LOCFOR(fun_sexpr_syntax_definitionQ_16);
LOCFOR(fun_sexpr_syntax_definition_variable_17);
LOCFOR(fun_sexpr_syntax_definition_value_18);
LOCFOR(fun_sexpr_function_definitionQ_19);
LOCFOR(fun_sexpr_method_definitionQ_20);
LOCFOR(fun_sexpr_generic_definitionQ_21);
LOCFOR(fun_sexpr_function_definition_variable_22);
LOCFOR(fun_sexpr_forward_primitiveQ_23);
LOCFOR(fun_sexpr_signature_parameters_24);
LOCFOR(fun_sexpr_signature_value_25);
FUNFOR(Yx8rSsyntaxYas_signature);
LOCFOR(fun_sexpr_function_signature_27);
LOCFOR(fun_sexpr_function_parameters_28);
LOCFOR(fun_sexpr_function_value_29);
LOCFOR(fun_sexpr_function_body_30);
LOCFOR(fun_sexpr_function_definition_value_31);
LOCFOR(fun_sexpr_methodQ_32);
LOCFOR(fun_sexpr_method_signature_33);
LOCFOR(fun_sexpr_method_parameters_34);
LOCFOR(fun_sexpr_method_value_35);
LOCFOR(fun_sexpr_method_body_36);
LOCFOR(fun_sexpr_make_anonymous_method_37);
LOCFOR(fun_sexpr_make_method_38);
LOCFOR(fun_sexpr_ifQ_39);
LOCFOR(fun_sexpr_if_test_40);
LOCFOR(fun_sexpr_if_then_41);
LOCFOR(fun_sexpr_if_else_42);
LOCFOR(fun_sexpr_make_if_43);
LOCFOR(fun_sexpr_blockQ_44);
LOCFOR(fun_sexpr_block_name_45);
LOCFOR(fun_sexpr_block_body_46);
LOCFOR(fun_sexpr_unwind_protectQ_47);
LOCFOR(fun_sexpr_unwind_protect_protected_form_48);
LOCFOR(fun_sexpr_unwind_protect_cleanup_forms_49);
LOCFOR(fun_sexpr_monitorQ_50);
LOCFOR(fun_x_1412_51);
LOCFOR(fun_52);
LOCFOR(fun_sexpr_monitor_expand_53);
FUNFOR(Yx8rSsyntaxYfind_option);
LOCFOR(fun_x_1414_55);
LOCFOR(fun_56);
LOCFOR(fun_sexpr_monitor_type_57);
LOCFOR(fun_x_1416_58);
LOCFOR(fun_59);
LOCFOR(fun_x_1418_60);
LOCFOR(fun_61);
LOCFOR(fun_sexpr_monitor_info_62);
LOCFOR(fun_sexpr_monitor_test_63);
LOCFOR(fun_sexpr_monitor_body_64);
LOCFOR(fun_sexpr_beginQ_65);
LOCFOR(fun_sexpr_begin_actions_66);
LOCFOR(fun_sexpr_last_expQ_67);
LOCFOR(fun_sexpr_first_exp_68);
LOCFOR(fun_sexpr_rest_exps_69);
LOCFOR(fun_sexpr_sequence_Gbegin_70);
LOCFOR(fun_sexpr_make_begin_71);
LOCFOR(fun_sexpr_applicationQ_72);
LOCFOR(fun_sexpr_operator_73);
LOCFOR(fun_sexpr_operands_74);
LOCFOR(fun_sexpr_no_operandsQ_75);
LOCFOR(fun_sexpr_first_operand_76);
LOCFOR(fun_sexpr_rest_operands_77);
LOCFOR(fun_sexpr_make_application_78);
LOCFOR(fun_sexpr_new_unique_name_counterX_79);
LOCFOR(fun_sexpr_unique_name_80);
LOCFOR(fun_sexpr_defQ_81);
LOCFOR(fun_sexpr_def_variable_82);
LOCFOR(fun_sexpr_def_value_83);
LOCFOR(fun_sexpr_letQ_84);
LOCFOR(fun_85);
LOCFOR(fun_sexpr_let_bound_variables_86);
LOCFOR(fun_87);
LOCFOR(fun_sexpr_let_values_88);
LOCFOR(fun_sexpr_let_body_89);
LOCFOR(fun_inner_90);
LOCFOR(fun_loop_91);
LOCFOR(fun_sexpr_let_namesAvalues_92);
LOCFOR(fun_col_93);
LOCFOR(fun_sexpr_let_Gcombination_94);
LOCFOR(fun_sexpr_locQ_95);
LOCFOR(fun_sexpr_loc_bound_names_96);
LOCFOR(fun_97);
LOCFOR(fun_sexpr_loc_bound_signatures_98);
LOCFOR(fun_sexpr_loc_bound_bodies_99);
LOCFOR(fun_sexpr_loc_raw_body_100);
LOCFOR(fun_sexpr_loc_body_101);
LOCFOR(fun_sexpr_iterateQ_102);
LOCFOR(fun_sexpr_iterate_name_103);
LOCFOR(fun_104);
LOCFOR(fun_sexpr_iterate_signature_105);
LOCFOR(fun_106);
LOCFOR(fun_sexpr_iterate_inits_107);
LOCFOR(fun_sexpr_iterate_body_108);
LOCFOR(fun_sexpr_iterate_Gloc_109);
LOCFOR(fun_sexpr_isaQ_110);
LOCFOR(fun_sexpr_isa_parent_111);
LOCFOR(fun_sexpr_isa_prop_inits_112);
LOCFOR(fun_sexpr_isa_init_props_113);
LOCFOR(fun_sexpr_isa_init_values_114);
LOCFOR(fun_sexpr_define_classQ_115);
LOCFOR(fun_sexpr_define_class_parents_116);
LOCFOR(fun_sexpr_propQ_117);
LOCFOR(fun_sexpr_prop_name_118);
LOCFOR(fun_sexpr_prop_owner_119);
LOCFOR(fun_sexpr_prop_init_var_120);
LOCFOR(fun_sexpr_prop_type_121);
LOCFOR(fun_sexpr_prop_initQ_122);
LOCFOR(fun_sexpr_prop_init_123);
LOCFOR(fun_sexpr_fab_getter_124);
LOCFOR(fun_sexpr_fab_setter_125);
LOCFOR(fun_sexpr_fab_setter_name_126);
LOCFOR(fun_sexpr_macroQ_127);
LOCFOR(fun_sexpr_macro_expandQ_128);
LOCFOR(fun_sexpr_make_syntax_if_129);
FUNFOR(Yx8rSsyntaxYsexpr_expand_backquote);
LOCFOR(fun_sexpr_build_backquote_expander_131);
LOCFOR(fun_sexpr_unquoteQ_132);
LOCFOR(fun_sexpr_unquote_splicingQ_133);
LOCFOR(fun_sexpr_backquoteQ_134);
LOCFOR(fun_sexpr_atomQ_135);
LOCFOR(fun_nreconc_136);
LOCFOR(fun_loop_137);
LOCFOR(fun_138);
LOCFOR(fun_bq_process_139);
LOCFOR(fun_bracket_140);
LOCFOR(fun_map_tree_141);
LOCFOR(fun_bq_remove_tokens_142);
LOCFOR(fun_sexpr_syntax_ifQ_143);
LOCFOR(fun_sexpr_syntax_if_value_144);
LOCFOR(fun_sexpr_syntax_if_pattern_145);
LOCFOR(fun_sexpr_syntax_if_then_146);
LOCFOR(fun_sexpr_syntax_if_else_147);
LOCFOR(fun_sexpr_pattern_variableQ_148);
LOCFOR(fun_sexpr_pattern_variable_name_149);
LOCFOR(fun_col_150);
LOCFOR(fun_sexpr_bind_pattern_variables_151);
LOCFOR(fun_sexpr_make_macro_function_152);
extern P Yx8rSsyntaxY___main_0___ ();
extern P Yx8rSsyntaxY___main_1___ ();
extern P Yx8rSsyntaxY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_sexpr_self_evaluatingQ_0) {
  P exp_;
  P tmpF1500;
  P tmpF1499;
  P tmpF1498;
  P tmpF1497;
  P tmpF1496;
  P tmpF1495;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLnumG));
  tmpF1495 = T1;
  if (tmpF1495 != YPfalse) {
    T2 = tmpF1495;
  } else {
    T4 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLchrG));
    tmpF1496 = T4;
    if (tmpF1496 != YPfalse) {
      T5 = tmpF1496;
    } else {
      T7 = CALL2(1,VARREF(YgooSmacrosYEE),exp_,YPtrue);
      tmpF1497 = T7;
      if (tmpF1497 != YPfalse) {
        T8 = tmpF1497;
      } else {
        T10 = CALL2(1,VARREF(YgooSmacrosYEE),exp_,YPfalse);
        tmpF1498 = T10;
        if (tmpF1498 != YPfalse) {
          T11 = tmpF1498;
        } else {
          T13 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLstrG));
          tmpF1499 = T13;
          if (tmpF1499 != YPfalse) {
            T14 = tmpF1499;
          } else {
            T16 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YgooScolsSvecYLvecG));
            tmpF1500 = T16;
            if (tmpF1500 != YPfalse) {
              T17 = tmpF1500;
            } else {
              T18 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLtupG));
              T17 = T18;
            }
            T15 = T17;
            T14 = T15;
          }
          T12 = T14;
          T11 = T12;
        }
        T9 = T11;
        T8 = T9;
      }
      T6 = T8;
      T5 = T6;
    }
    T3 = T5;
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_variableQ_1) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLsymG));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_tagged_listQ_2) {
  P exp_,tag_;
  P tmpF1501;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(tag_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLlstG));
  tmpF1501 = T1;
  if (tmpF1501 != YPfalse) {
    T4 = CALL1(1,VARREF(Yhead),exp_);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,tag_);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_quotedQ_3) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),exp_,VARREF(Yx8rSsyntaxYDsexpr_quote_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_quote_4) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Ylst),VARREF(Yx8rSsyntaxYDsexpr_quote_tag),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_text_of_quotation_5) {
  P quot_;
  P T0;
  P a1;
LINK_STACK();
  ARG(quot_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),quot_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_assignmentQ_6) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),exp_,VARREF(Yx8rSsyntaxYDsexpr_set_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_assignment_variable_7) {
  P assn_;
  P T0;
  P a1;
LINK_STACK();
  ARG(assn_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),assn_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_assignment_value_8) {
  P assn_;
  P T0;
  P a1;
LINK_STACK();
  ARG(assn_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),assn_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_variable_name_9) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqY1st),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_variable_name_10) {
  P exp_;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
UNLINK_STACK();
  QRET(exp_);
}

FUNCODEDEF(fun_sexpr_variable_type_11) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_variable_type_12) {
  P exp_;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_17));
}

FUNCODEDEF(fun_sexpr_definitionQ_13) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),exp_,VARREF(Yx8rSsyntaxYDsexpr_define_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_definition_variable_14) {
  P defn_;
  P T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),defn_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_definition_value_15) {
  P defn_;
  P T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),defn_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_definitionQ_16) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),exp_,VARREF(Yx8rSsyntaxYDsexpr_define_syntax_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_definition_variable_17) {
  P defn_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T2 = CALL1(1,VARREF(Ytail),defn_);
  T1 = CALL1(1,VARREF(Yhead),T2);
  T0 = CALL1(1,VARREF(YgooScolsSseqY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_definition_value_18) {
  P defn_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooStypesY2nd),defn_);
  T4 = CALL1(1,VARREF(Ytail),defn_);
  T3 = CALL1(1,VARREF(Ytail),T4);
  T1 = CALL2(1,VARREF(YgooSmacrosYpair),T2,T3);
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(Yx8rSsyntaxYDsexpr_macro_tag),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_function_definitionQ_19) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),exp_,VARREF(Yx8rSsyntaxYDsexpr_define_function_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_definitionQ_20) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),exp_,VARREF(Yx8rSsyntaxYDsexpr_define_method_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_generic_definitionQ_21) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),exp_,VARREF(Yx8rSsyntaxYDsexpr_define_generic_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_function_definition_variable_22) {
  P defn_;
  P T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),defn_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_forward_primitiveQ_23) {
  P defn_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),defn_);
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,YPint((P)2));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_signature_parameters_24) {
  P signature_;
  P values_spec_indexF1502;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(signature_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooScolsSseqYpos),signature_,LITREF(lit_39));
  values_spec_indexF1502 = T1;
  if (values_spec_indexF1502 != YPfalse) {
    T3 = CALL3(1,VARREF(YgooScolsSseqYsub),signature_,YPint((P)0),values_spec_indexF1502);
    T2 = T3;
  } else {
    T2 = signature_;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_signature_value_25) {
  P signature_;
  P valueF1505;
  P tmpF1504;
  P values_spec_indexF1503;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(signature_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooScolsSseqYpos),signature_,LITREF(lit_39));
  values_spec_indexF1503 = T1;
  tmpF1504 = values_spec_indexF1503;
  if (tmpF1504 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmathYA),values_spec_indexF1503,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),signature_,T6);
    valueF1505 = T5;
    T8 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),valueF1505,LITREF(lit_41));
    if (T8 != YPfalse) {
      T7 = LITREF(lit_42);
    } else {
      T7 = valueF1505;
    }
    T4 = T7;
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSsyntaxYas_signature) {
  P sig_;
  P a1;
LINK_STACK();
  ARG(sig_, 0);
loop:
UNLINK_STACK();
  RET(sig_);
}

FUNCODEDEF(fun_sexpr_function_signature_27) {
  P defn_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqY3rd),defn_);
  T0 = CALL1(1,VARREF(Yx8rSsyntaxYas_signature),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_function_parameters_28) {
  P defn_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_function_signature),defn_);
  T0 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_signature_parameters),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_function_value_29) {
  P defn_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_function_signature),defn_);
  T0 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_signature_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_function_body_30) {
  P defn_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T2 = CALL1(1,VARREF(Ytail),defn_);
  T1 = CALL1(1,VARREF(Ytail),T2);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_function_definition_value_31) {
  P defn_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsSseqY3rd),defn_);
  T5 = CALL1(1,VARREF(Ytail),defn_);
  T4 = CALL1(1,VARREF(Ytail),T5);
  T3 = CALL1(1,VARREF(Ytail),T4);
  T1 = CALL2(1,VARREF(YgooSmacrosYpair),T2,T3);
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(Yx8rSsyntaxYDsexpr_method_tag),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_methodQ_32) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),exp_,VARREF(Yx8rSsyntaxYDsexpr_method_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_signature_33) {
  P method_exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(method_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesY2nd),method_exp_);
  T0 = CALL1(1,VARREF(Yx8rSsyntaxYas_signature),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_parameters_34) {
  P method_exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(method_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_method_signature),method_exp_);
  T0 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_signature_parameters),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_value_35) {
  P method_exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(method_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_method_signature),method_exp_);
  T0 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_signature_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_method_body_36) {
  P method_exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(method_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),method_exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_anonymous_method_37) {
  P parameters_,body_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(parameters_, 0);
  ARG(body_, 1);
loop:
  T1 = CALL1(1,VARREF(Ylst),VARREF(Yx8rSsyntaxYDsexpr_method_tag));
  T2 = CALL1(1,VARREF(Ylst),parameters_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),T1,T2,body_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_method_38) {
  P name_,parameters_,body_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(parameters_, 1);
  ARG(body_, 2);
loop:
  T1 = CALL3(1,VARREF(Ylst),VARREF(Yx8rSsyntaxYDsexpr_define_method_tag),name_,parameters_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,body_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_ifQ_39) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),exp_,VARREF(Yx8rSsyntaxYDsexpr_if_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_if_test_40) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_if_then_41) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_if_else_42) {
  P exp_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T4 = CALL1(1,VARREF(Ytail),exp_);
  T3 = CALL1(1,VARREF(Ytail),T4);
  T2 = CALL1(1,VARREF(Ytail),T3);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T2);
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

FUNCODEDEF(fun_sexpr_make_if_43) {
  P test_,then_,else_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(test_, 0);
  ARG(then_, 1);
  ARG(else_, 2);
loop:
  T0 = CALLN(1,VARREF(Ylst),4,VARREF(Yx8rSsyntaxYDsexpr_if_tag),test_,then_,else_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_blockQ_44) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),exp_,VARREF(Yx8rSsyntaxYDsexpr_bind_exit_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_block_name_45) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_block_body_46) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unwind_protectQ_47) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),exp_,VARREF(Yx8rSsyntaxYDsexpr_unwind_protect_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unwind_protect_protected_form_48) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_unwind_protect_cleanup_forms_49) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitorQ_50) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),exp_,VARREF(Yx8rSsyntaxYDsexpr_monitor_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1412_51) {
  P msg_,args_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_86),FREEREF(1));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  P return_;
  P optionsF1515;
  P x_1411F1514;
  P x_1411F1513;
  P x_1411F1512;
  P x_1411F1511;
  P bodyF1510;
  P handlerF1509;
  P optionsF1508;
  P x_1411F1507;
  P x_1412F1506;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1412_51,2);
  x_1412F1506 = T1;
  FUNINIT(x_1412F1506, 2,return_,FREEREF(0));
  x_1411F1507 = FREEREF(0);
  optionsF1508 = YPfalse;
  optionsF1508 = BOXFAB(optionsF1508);
  handlerF1509 = YPfalse;
  handlerF1509 = BOXFAB(handlerF1509);
  bodyF1510 = YPfalse;
  bodyF1510 = BOXFAB(bodyF1510);
  T9 = CALL2(1,VARREF(YisaQ),x_1411F1507,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1411F1507,LITREF(lit_79),x_1412F1506);
    x_1411F1511 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1411F1511,x_1412F1506);
    BOXVAL(optionsF1508) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1411F1511);
    x_1411F1512 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1411F1512,x_1412F1506);
    BOXVAL(handlerF1509) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1411F1512);
    x_1411F1513 = T17;
    BOXVAL(bodyF1510) = x_1411F1513;
    x_1411F1514 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1411F1514,x_1412F1506);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1412F1506,LITREF(lit_87),x_1411F1507);
  }
  T24 = BOXVAL(optionsF1508);
  T23 = CALL2(1,VARREF(YisaQ),T24,VARREF(YLsymG));
  if (T23 != YPfalse) {
    T28 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
    T30 = BOXVAL(optionsF1508);
    T29 = CALL1(1,VARREF(Ylst),T30);
    T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,Ynil);
    T26 = CALL1(1,VARREF(Ylst),T27);
    T25 = CALL2(1,VARREF(YgooSmacrosYcat),T26,Ynil);
    T22 = T25;
  } else {
    T31 = BOXVAL(optionsF1508);
    T22 = T31;
  }
  optionsF1515 = T22;
  T33 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_monitor_type),optionsF1515);
  T34 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_monitor_info),optionsF1515);
  T35 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_monitor_test),optionsF1515);
  T36 = BOXVAL(handlerF1509);
  T38 = BOXVAL(bodyF1510);
  T37 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_monitor_body),T38);
  T32 = CALLN(1,VARREF(Ytup),5,T33,T34,T35,T36,T37);
  T21 = T32;
  T7 = T21;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_expand_53) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_52,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSsyntaxYfind_option) {
  P options_,option_,default_;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(options_, 0);
  ARG(option_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),options_);
  if (T1 != YPfalse) {
    T0 = default_;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsSseqY1st),options_);
    T4 = CALL1(1,VARREF(Yhead),T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),option_,T4);
    if (T3 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsSseqY1st),options_);
      T6 = CALL1(1,VARREF(Ytail),T7);
      T2 = T6;
    } else {
      if (YPtrue != YPfalse) {
        T10 = CALL1(1,VARREF(Ytail),options_);
        T9 = CALL3(1,VARREF(Yx8rSsyntaxYfind_option),T10,option_,default_);
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

FUNCODEDEF(fun_x_1414_55) {
  P msg_,args_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_96),FREEREF(1));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_56) {
  P return_;
  P x_1413F1519;
  P typeF1518;
  P x_1413F1517;
  P x_1414F1516;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1414_55,2);
  x_1414F1516 = T1;
  FUNINIT(x_1414F1516, 2,return_,FREEREF(0));
  x_1413F1517 = FREEREF(0);
  typeF1518 = YPfalse;
  typeF1518 = BOXFAB(typeF1518);
  T5 = CALL2(1,VARREF(YisaQ),x_1413F1517,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1413F1517,x_1414F1516);
    BOXVAL(typeF1518) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1413F1517);
    x_1413F1519 = T8;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1413F1519,x_1414F1516);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1414F1516,LITREF(lit_87),x_1413F1517);
  }
  T11 = BOXVAL(typeF1518);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_type_57) {
  P options_;
  P type_listF1520;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(Yx8rSsyntaxYfind_option),options_,LITREF(lit_88),LITREF(lit_94));
  type_listF1520 = T1;
  T3 = FUNFAB(fun_56,1,type_listF1520);
  T2 = with_exit(T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1416_58) {
  P msg_,args_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_102),FREEREF(1));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P x_1415F1524;
  P info_exprF1523;
  P x_1415F1522;
  P x_1416F1521;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1416_58,2);
  x_1416F1521 = T1;
  FUNINIT(x_1416F1521, 2,return_,FREEREF(0));
  x_1415F1522 = FREEREF(0);
  info_exprF1523 = YPfalse;
  info_exprF1523 = BOXFAB(info_exprF1523);
  T5 = CALL2(1,VARREF(YisaQ),x_1415F1522,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1415F1522,x_1416F1521);
    BOXVAL(info_exprF1523) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1415F1522);
    x_1415F1524 = T8;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1415F1524,x_1416F1521);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1416F1521,LITREF(lit_87),x_1415F1522);
  }
  T11 = BOXVAL(info_exprF1523);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1418_60) {
  P msg_,args_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_104),FREEREF(1));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P return_;
  P x_1417F1530;
  P x_1417F1529;
  P argumentsF1528;
  P messageF1527;
  P x_1417F1526;
  P x_1418F1525;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1418_60,2);
  x_1418F1525 = T1;
  FUNINIT(x_1418F1525, 2,return_,FREEREF(0));
  x_1417F1526 = FREEREF(0);
  messageF1527 = YPfalse;
  messageF1527 = BOXFAB(messageF1527);
  argumentsF1528 = YPfalse;
  argumentsF1528 = BOXFAB(argumentsF1528);
  T7 = CALL2(1,VARREF(YisaQ),x_1417F1526,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1417F1526,x_1418F1525);
    BOXVAL(messageF1527) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1417F1526);
    x_1417F1529 = T10;
    BOXVAL(argumentsF1528) = x_1417F1529;
    x_1417F1530 = Ynil;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1417F1530,x_1418F1525);
    T11 = T12;
    T8 = T11;
  } else {
    T13 = CALL2(1,x_1418F1525,LITREF(lit_87),x_1417F1526);
  }
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_107));
  T19 = BOXVAL(messageF1527);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_108));
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_109));
  T24 = BOXVAL(argumentsF1528);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,Ynil);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T14 = CALLN(1,VARREF(YgooSmacrosYcat),7,T15,T16,T17,T18,T20,T21,Ynil);
  T5 = T14;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_info_62) {
  P options_;
  P tmpF1533;
  P descriptionF1532;
  P infoF1531;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(Yx8rSsyntaxYfind_option),options_,LITREF(lit_98),YPfalse);
  infoF1531 = T1;
  T3 = CALL3(1,VARREF(Yx8rSsyntaxYfind_option),options_,LITREF(lit_99),YPfalse);
  descriptionF1532 = T3;
  tmpF1533 = infoF1531;
  if (tmpF1533 != YPfalse) {
    T6 = descriptionF1532;
  } else {
    T6 = YPfalse;
  }
  T5 = T6;
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(Yerror),LITREF(lit_100),options_);
    T4 = T7;
  } else {
    if (infoF1531 != YPfalse) {
      T10 = FUNFAB(fun_59,1,infoF1531);
      T9 = with_exit(T10);
      T8 = T9;
    } else {
      if (descriptionF1532 != YPfalse) {
        T13 = FUNFAB(fun_61,1,descriptionF1532);
        T12 = with_exit(T13);
        T11 = T12;
      } else {
        if (YPtrue != YPfalse) {
          T14 = LITREF(lit_110);
        } else {
          T14 = YPfalse;
        }
        T11 = T14;
      }
      T8 = T11;
    }
    T4 = T8;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_test_63) {
  P options_;
  P test_bodyF1534;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(Yx8rSsyntaxYfind_option),options_,LITREF(lit_68),LITREF(lit_112));
  test_bodyF1534 = T1;
  T2 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_make_anonymous_method),Ynil,test_bodyF1534);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_body_64) {
  P body_;
  P T0;
  P a1;
LINK_STACK();
  ARG(body_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_make_anonymous_method),Ynil,body_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_beginQ_65) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),exp_,VARREF(Yx8rSsyntaxYDsexpr_begin_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_begin_actions_66) {
  P begin_exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(begin_exp_, 0);
loop:
  T0 = CALL1(1,VARREF(Ytail),begin_exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_last_expQ_67) {
  P seq_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(seq_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),seq_);
  T0 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_first_exp_68) {
  P seq_;
  P T0;
  P a1;
LINK_STACK();
  ARG(seq_, 0);
loop:
  T0 = CALL1(1,VARREF(Yhead),seq_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_rest_exps_69) {
  P seq_;
  P T0;
  P a1;
LINK_STACK();
  ARG(seq_, 0);
loop:
  T0 = CALL1(1,VARREF(Ytail),seq_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_sequence_Gbegin_70) {
  P seq_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(seq_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),seq_);
  if (T1 != YPfalse) {
    T0 = seq_;
  } else {
    T3 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_last_expQ),seq_);
    if (T3 != YPfalse) {
      T4 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_first_exp),seq_);
      T2 = T4;
    } else {
      T5 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_make_begin),seq_);
      T2 = T5;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_make_begin_71) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(Yx8rSsyntaxYDsexpr_begin_tag),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_applicationQ_72) {
  P exp_;
  P tmpF1535;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLlstG));
  tmpF1535 = T1;
  if (tmpF1535 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),exp_);
    T3 = CALL1(1,VARREF(Ynot),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_operator_73) {
  P app_;
  P T0;
  P a1;
LINK_STACK();
  ARG(app_, 0);
loop:
  T0 = CALL1(1,VARREF(Yhead),app_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_operands_74) {
  P app_;
  P T0;
  P a1;
LINK_STACK();
  ARG(app_, 0);
loop:
  T0 = CALL1(1,VARREF(Ytail),app_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_no_operandsQ_75) {
  P args_;
  P T0;
  P a1;
LINK_STACK();
  ARG(args_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosYemptyQ),args_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_first_operand_76) {
  P args_;
  P T0;
  P a1;
LINK_STACK();
  ARG(args_, 0);
loop:
  T0 = CALL1(1,VARREF(Yhead),args_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_rest_operands_77) {
  P args_;
  P T0;
  P a1;
LINK_STACK();
  ARG(args_, 0);
loop:
  T0 = CALL1(1,VARREF(Ytail),args_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_application_78) {
  P f_,operands_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(operands_, 1);
loop:
  T1 = CALL1(1,VARREF(Ylst),f_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,operands_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_new_unique_name_counterX_79) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSmathYA),VARREF(Yx8rSsyntaxYTunique_name_counterT),YPint((P)1));
  VARSET(Yx8rSsyntaxYTunique_name_counterT,T0);
UNLINK_STACK();
  RET(VARREF(Yx8rSsyntaxYTunique_name_counterT));
}

FUNCODEDEF(fun_sexpr_unique_name_80) {
  P prefix_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(prefix_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),prefix_);
  T4 = CALL0(1,VARREF(Yx8rSsyntaxYsexpr_new_unique_name_counterX));
  T3 = CALL1(1,VARREF(YgooSmathYnum_to_str),T4);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),T2,T3);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_defQ_81) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),exp_,VARREF(Yx8rSsyntaxYDsexpr_def_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_def_variable_82) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_def_value_83) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_letQ_84) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),exp_,VARREF(Yx8rSsyntaxYDsexpr_let_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_85) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooScolsSseqY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_let_bound_variables_86) {
  P let_exp_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T1 = fun_85;
  T2 = CALL1(1,VARREF(YgooStypesY2nd),let_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_87) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooStypesY2nd),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_let_values_88) {
  P let_exp_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T1 = fun_87;
  T2 = CALL1(1,VARREF(YgooStypesY2nd),let_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_let_body_89) {
  P let_exp_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T2 = CALL1(1,VARREF(Ytail),let_exp_);
  T1 = CALL1(1,VARREF(Ytail),T2);
  T0 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_sequence_Gbegin),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_90) {
  P rtnames_,rtvalues_,index_,tnames_;
  P tmpF1537;
  P nameF1536;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(rtnames_, 0);
  ARG(rtvalues_, 1);
  ARG(index_, 2);
  ARG(tnames_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),tnames_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ytup),rtnames_,rtvalues_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),tnames_);
    nameF1536 = T4;
    T7 = CALL2(1,VARREF(YisaQ),nameF1536,VARREF(YLlstG));
    tmpF1537 = T7;
    if (tmpF1537 != YPfalse) {
      T11 = CALL1(1,VARREF(Ytail),nameF1536);
      T10 = CALL1(1,VARREF(Yhead),T11);
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),T10,LITREF(lit_159));
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    if (T6 != YPfalse) {
      T15 = CALL1(1,VARREF(Yhead),nameF1536);
      T14 = CALL2(1,VARREF(Ylst),T15,LITREF(lit_160));
      T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,rtnames_);
      T18 = CALL2(1,VARREF(Ylst),LITREF(lit_162),FREEREF(1));
      T17 = CALLN(1,VARREF(Ylst),4,LITREF(lit_161),FREEREF(1),index_,T18);
      T16 = CALL2(1,VARREF(YgooSmacrosYpair),T17,rtvalues_);
      T19 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
      T20 = CALL1(1,VARREF(Ytail),tnames_);
      a1 = T13;
      a2 = T16;
      a3 = T19;
      a4 = T20;
      rtnames_ = a1;
      rtvalues_ = a2;
      index_ = a3;
      tnames_ = a4;
      goto loop;
      T5 = T12;
    } else {
      T22 = CALL2(1,VARREF(YgooSmacrosYpair),nameF1536,rtnames_);
      T24 = CALL3(1,VARREF(Ylst),LITREF(lit_163),FREEREF(1),index_);
      T23 = CALL2(1,VARREF(YgooSmacrosYpair),T24,rtvalues_);
      T25 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
      T26 = CALL1(1,VARREF(Ytail),tnames_);
      a1 = T22;
      a2 = T23;
      a3 = T25;
      a4 = T26;
      rtnames_ = a1;
      rtvalues_ = a2;
      index_ = a3;
      tnames_ = a4;
      goto loop;
      T5 = T21;
    }
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_91) {
  P rnames_,rvalues_,names_,vals_;
  P rtvaluesF1545;
  P rtnamesF1544;
  P tup35F1543;
  P innerF1542;
  P tupnameF1541;
  P tmpF1540;
  P valueF1539;
  P nameF1538;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(rnames_, 0);
  ARG(rvalues_, 1);
  ARG(names_, 2);
  ARG(vals_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmacrosYrevX),rnames_);
    T4 = CALL1(1,VARREF(YgooSmacrosYrevX),rvalues_);
    T2 = CALL2(1,VARREF(Ytup),T3,T4);
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),names_);
    nameF1538 = T6;
    T8 = CALL1(1,VARREF(Yhead),vals_);
    valueF1539 = T8;
    T11 = CALL2(1,VARREF(YisaQ),nameF1538,VARREF(YLlstG));
    tmpF1540 = T11;
    if (tmpF1540 != YPfalse) {
      T14 = CALL1(1,VARREF(Yhead),nameF1538);
      T13 = CALL2(1,VARREF(YgooSmacrosYEE),T14,LITREF(lit_41));
      T12 = T13;
    } else {
      T12 = YPfalse;
    }
    T10 = T12;
    if (T10 != YPfalse) {
      T16 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_unique_name),LITREF(lit_153));
      tupnameF1541 = T16;
      T19 = FUNSHELL(1,fun_inner_90,2);
      innerF1542 = T19;
      FUNINIT(innerF1542, 2,innerF1542,tupnameF1541);
      T21 = CALL1(1,VARREF(Ylst),tupnameF1541);
      T22 = CALL1(1,VARREF(Ylst),valueF1539);
      T23 = CALL1(1,VARREF(Ytail),nameF1538);
      T20 = CALLN(0,innerF1542,4,T21,T22,YPint((P)0),T23);
      T18 = T20;
      tup35F1543 = T18;
      T25 = CALL2(1,VARREF(YgooSmacrosYelt),tup35F1543,YPint((P)0));
      rtnamesF1544 = T25;
      T27 = CALL2(1,VARREF(YgooSmacrosYelt),tup35F1543,YPint((P)1));
      rtvaluesF1545 = T27;
      T29 = CALL2(1,VARREF(YgooSmacrosYcat),rtnamesF1544,rnames_);
      T30 = CALL2(1,VARREF(YgooSmacrosYcat),rtvaluesF1545,rvalues_);
      T31 = CALL1(1,VARREF(Ytail),names_);
      T32 = CALL1(1,VARREF(Ytail),vals_);
      a1 = T29;
      a2 = T30;
      a3 = T31;
      a4 = T32;
      rnames_ = a1;
      rvalues_ = a2;
      names_ = a3;
      vals_ = a4;
      goto loop;
      T26 = T28;
      T24 = T26;
      T17 = T24;
      T15 = T17;
      T9 = T15;
    } else {
      T34 = CALL2(1,VARREF(YgooSmacrosYpair),nameF1538,rnames_);
      T35 = CALL2(1,VARREF(YgooSmacrosYpair),valueF1539,rvalues_);
      T36 = CALL1(1,VARREF(Ytail),names_);
      T37 = CALL1(1,VARREF(Ytail),vals_);
      a1 = T34;
      a2 = T35;
      a3 = T36;
      a4 = T37;
      rnames_ = a1;
      rvalues_ = a2;
      names_ = a3;
      vals_ = a4;
      goto loop;
      T9 = T33;
    }
    T7 = T9;
    T5 = T7;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_let_namesAvalues_92) {
  P names_,vals_;
  P loopF1546;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(vals_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_91,1);
  loopF1546 = T1;
  FUNINIT(loopF1546, 1,loopF1546);
  T2 = CALLN(0,loopF1546,4,Ynil,Ynil,names_,vals_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_93) {
  P names_,values_;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(values_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T5 = CALL1(1,VARREF(Yhead),names_);
    T4 = CALL1(1,VARREF(Ylst),T5);
    T7 = CALL1(1,VARREF(Ytail),names_);
    T8 = CALL1(1,VARREF(Ytail),values_);
    T6 = CALL2(0,FREEREF(1),T7,T8);
    T3 = CALL3(1,VARREF(Ylst),VARREF(Yx8rSsyntaxYDsexpr_method_tag),T4,T6);
    T10 = CALL1(1,VARREF(Yhead),values_);
    T9 = CALL1(1,VARREF(Ylst),T10);
    T2 = CALL2(1,VARREF(YgooSmacrosYpair),T3,T9);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_let_Gcombination_94) {
  P let_exp_;
  P colF1553;
  P valuesF1552;
  P namesF1551;
  P tup36F1550;
  P bodyF1549;
  P ovaluesF1548;
  P onamesF1547;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_let_bound_variables),let_exp_);
  onamesF1547 = T1;
  T3 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_let_values),let_exp_);
  ovaluesF1548 = T3;
  T5 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_let_body),let_exp_);
  bodyF1549 = T5;
  T7 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_let_namesAvalues),onamesF1547,ovaluesF1548);
  tup36F1550 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup36F1550,YPint((P)0));
  namesF1551 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup36F1550,YPint((P)1));
  valuesF1552 = T11;
  T13 = FUNSHELL(1,fun_col_93,2);
  colF1553 = T13;
  FUNINIT(colF1553, 2,bodyF1549,colF1553);
  T14 = CALL2(0,colF1553,namesF1551,valuesF1552);
  T12 = T14;
  T10 = T12;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_locQ_95) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),exp_,VARREF(Yx8rSsyntaxYDsexpr_locals_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_names_96) {
  P loc_exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScolsSseqY1st),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_97) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesY2nd),x_);
  T0 = CALL1(1,VARREF(Yx8rSsyntaxYas_signature),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_signatures_98) {
  P loc_exp_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = fun_97;
  T2 = CALL1(1,VARREF(YgooStypesY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_bodies_99) {
  P loc_exp_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSruntimeYcompose),VARREF(Ytail),VARREF(Ytail));
  T2 = CALL1(1,VARREF(YgooStypesY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_raw_body_100) {
  P loc_exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),loc_exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_body_101) {
  P loc_exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_loc_raw_body),loc_exp_);
  T0 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_sequence_Gbegin),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_iterateQ_102) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),exp_,VARREF(Yx8rSsyntaxYDsexpr_iterate_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_name_103) {
  P rep_exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),rep_exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_104) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooScolsSseqY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_signature_105) {
  P rep_exp_;
  P sigF1554;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqY3rd),rep_exp_);
  sigF1554 = T1;
  T4 = fun_104;
  T5 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_signature_parameters),sigF1554);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,T5);
  T7 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_signature_value),sigF1554);
  if (T7 != YPfalse) {
    T6 = Ynil;
  } else {
    T8 = CALL1(1,VARREF(Ylst),VARREF(Yx8rSsyntaxYDsexpr_values_tag));
    T6 = T8;
  }
  T10 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_signature_value),sigF1554);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T2 = CALL3(1,VARREF(YgooSmacrosYcat),T3,T6,T9);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_106) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooStypesY2nd),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_inits_107) {
  P rep_exp_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = fun_106;
  T2 = CALL1(1,VARREF(YgooScolsSseqY3rd),rep_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_body_108) {
  P rep_exp_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T2 = CALL1(1,VARREF(Ytail),rep_exp_);
  T1 = CALL1(1,VARREF(Ytail),T2);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_Gloc_109) {
  P rep_exp_;
  P initsF1558;
  P bodyF1557;
  P sigF1556;
  P nameF1555;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_iterate_name),rep_exp_);
  nameF1555 = T1;
  T3 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_iterate_signature),rep_exp_);
  sigF1556 = T3;
  T5 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_iterate_body),rep_exp_);
  bodyF1557 = T5;
  T7 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_iterate_inits),rep_exp_);
  initsF1558 = T7;
  T11 = CALL2(1,VARREF(Ylst),nameF1555,sigF1556);
  T10 = CALL2(1,VARREF(YgooSmacrosYcat),T11,bodyF1557);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T13 = CALL1(1,VARREF(Ylst),nameF1555);
  T12 = CALL2(1,VARREF(YgooSmacrosYcat),T13,initsF1558);
  T8 = CALL3(1,VARREF(Ylst),VARREF(Yx8rSsyntaxYDsexpr_locals_tag),T9,T12);
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isaQ_110) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),exp_,VARREF(Yx8rSsyntaxYDsexpr_isa_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_parent_111) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_isa_prop_inits_112) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_init_props_113) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooStypesY2nd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_init_values_114) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_define_classQ_115) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),exp_,VARREF(Yx8rSsyntaxYDsexpr_define_class_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_define_class_parents_116) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_propQ_117) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),exp_,VARREF(Yx8rSsyntaxYDsexpr_prop_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_prop_name_118) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_prop_owner_119) {
  P exp_;
  P paramF1559;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_function_parameters),exp_);
  T1 = CALL1(1,VARREF(YgooScolsSseqY1st),T2);
  paramF1559 = T1;
  T4 = CALL2(1,VARREF(YisaQ),paramF1559,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooStypesY2nd),paramF1559);
    T3 = T5;
  } else {
    T3 = paramF1559;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_prop_init_var_120) {
  P exp_;
  P paramF1560;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_function_parameters),exp_);
  T1 = CALL1(1,VARREF(YgooScolsSseqY1st),T2);
  paramF1560 = T1;
  T4 = CALL2(1,VARREF(YisaQ),paramF1560,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooScolsSseqY1st),paramF1560);
    T3 = T5;
  } else {
    T3 = LITREF(lit_197);
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_prop_type_121) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_function_value),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_prop_initQ_122) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),exp_);
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,YPint((P)4));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_prop_init_123) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),exp_,YPint((P)3));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_fab_getter_124) {
  P name_,type_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(type_, 1);
loop:
  T2 = CALL2(1,VARREF(Ylst),LITREF(lit_197),type_);
  T1 = CALL1(1,VARREF(Ylst),T2);
  T4 = CALL3(1,VARREF(Ylst),LITREF(lit_202),LITREF(lit_197),name_);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T0 = CALL3(1,VARREF(Yx8rSsyntaxYsexpr_make_method),name_,T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_fab_setter_125) {
  P name_,type_,prop_type_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(type_, 1);
  ARG(prop_type_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_fab_setter_name),name_);
  T3 = CALL2(1,VARREF(Ylst),LITREF(lit_205),prop_type_);
  T4 = CALL2(1,VARREF(Ylst),LITREF(lit_197),type_);
  T2 = CALL2(1,VARREF(Ylst),T3,T4);
  T6 = CALLN(1,VARREF(Ylst),4,LITREF(lit_206),LITREF(lit_205),LITREF(lit_197),name_);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T0 = CALL3(1,VARREF(Yx8rSsyntaxYsexpr_make_method),T1,T2,T5);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_fab_setter_name_126) {
  P name_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),T2,LITREF(lit_208));
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_macroQ_127) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),exp_,VARREF(Yx8rSsyntaxYDsexpr_macro_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_macro_expandQ_128) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),exp_,VARREF(Yx8rSsyntaxYDsexpr_macro_expand_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_syntax_if_129) {
  P pat_,exp_,then_,else_;
  P T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(pat_, 0);
  ARG(exp_, 1);
  ARG(then_, 2);
  ARG(else_, 3);
loop:
  T1 = CALL2(1,VARREF(Ylst),pat_,exp_);
  T0 = CALLN(1,VARREF(Ylst),4,VARREF(Yx8rSsyntaxYDsexpr_syntax_if_tag),T1,then_,else_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSsyntaxYsexpr_expand_backquote) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_build_backquote_expander),x_);
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYeval),T1,LITREF(lit_223));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_build_backquote_expander_131) {
  P x_;
  P resF1562;
  P raw_resultF1561;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYbq_process),x_);
  raw_resultF1561 = T1;
  T3 = CALL1(1,VARREF(Yx8rSsyntaxYbq_remove_tokens),raw_resultF1561);
  resF1562 = T3;
  T2 = resF1562;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unquoteQ_132) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),x_,LITREF(lit_226));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unquote_splicingQ_133) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),x_,LITREF(lit_228));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_backquoteQ_134) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),x_,VARREF(Yx8rSsyntaxYDsexpr_quasiquote_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_atomQ_135) {
  P x_;
  P tmpF1563;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  T1 = CALL1(1,VARREF(Ynot),T2);
  tmpF1563 = T1;
  if (tmpF1563 != YPfalse) {
    T3 = tmpF1563;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),x_,Ynil);
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nreconc_136) {
  P x_,y_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),x_);
  T0 = CALL2(1,VARREF(YgooScolsSseqxYcatX),T1,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_137) {
  P p_,q_;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(q_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_atomQ),p_);
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(Ylst),VARREF(Yx8rSsyntaxYTbq_quoteT),p_);
    T5 = CALL1(1,VARREF(Ylst),T6);
    T4 = CALL2(1,VARREF(Yx8rSsyntaxYnreconc),q_,T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(Yx8rSsyntaxYTbq_appendT),T4);
    T2 = CALL1(1,FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_unquoteQ),p_);
    if (T7 != YPfalse) {
      T11 = CALL1(1,VARREF(Ytail),p_);
      T10 = CALL1(1,VARREF(Ytail),T11);
      T9 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T10);
      T8 = CALL1(1,VARREF(Ynot),T9);
      if (T8 != YPfalse) {
        T12 = CALL2(1,VARREF(Yerror),LITREF(lit_237),p_);
      } else {
      }
      T18 = CALL1(1,VARREF(Ytail),p_);
      T17 = CALL1(1,VARREF(Yhead),T18);
      T16 = CALL1(1,VARREF(Ylst),T17);
      T15 = CALL2(1,VARREF(Yx8rSsyntaxYnreconc),q_,T16);
      T14 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(Yx8rSsyntaxYTbq_appendT),T15);
      T13 = CALL1(1,FREEREF(0),T14);
    } else {
    }
    T20 = CALL1(1,VARREF(Ytail),p_);
    T19 = CALL2(1,VARREF(YgooSmacrosYEE),T20,VARREF(Yx8rSsyntaxYTcomma_atsignT));
    if (T19 != YPfalse) {
      T21 = CALL2(1,VARREF(Yerror),LITREF(lit_238),p_);
    } else {
    }
    T23 = CALL1(1,VARREF(Ytail),p_);
    T26 = CALL1(1,VARREF(Yhead),p_);
    T25 = CALL1(1,VARREF(Yx8rSsyntaxYbracket),T26);
    T24 = CALL2(1,VARREF(YgooSmacrosYpair),T25,q_);
    a1 = T23;
    a2 = T24;
    p_ = a1;
    q_ = a2;
    goto loop;
    T0 = T22;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_138) {
  P return_;
  P loopF1564;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_137,2);
  loopF1564 = T1;
  FUNINIT(loopF1564, 2,return_,loopF1564);
  T2 = CALL2(0,loopF1564,FREEREF(0),Ynil);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bq_process_139) {
  P x_;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_atomQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),VARREF(Yx8rSsyntaxYTbq_quoteT),x_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_backquoteQ),x_);
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(Ytail),x_);
      T7 = CALL1(1,VARREF(Yhead),T8);
      T6 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_build_backquote_expander),T7);
      T5 = CALL1(1,VARREF(Yx8rSsyntaxYbq_process),T6);
      T3 = T5;
    } else {
      T10 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_unquoteQ),x_);
      if (T10 != YPfalse) {
        T12 = CALL1(1,VARREF(Ytail),x_);
        T11 = CALL1(1,VARREF(Yhead),T12);
        T9 = T11;
      } else {
        T14 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_unquote_splicingQ),x_);
        if (T14 != YPfalse) {
          T18 = CALL0(1,x_);
          T17 = CALL1(1,VARREF(Ytail),T18);
          T16 = CALL1(1,VARREF(Yhead),T17);
          T15 = CALL2(1,VARREF(Yerror),LITREF(lit_234),T16);
          T13 = T15;
        } else {
          if (YPtrue != YPfalse) {
            T21 = FUNFAB(fun_138,1,x_);
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

FUNCODEDEF(fun_bracket_140) {
  P x_;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_atomQ),x_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yx8rSsyntaxYbq_process),x_);
    T2 = CALL2(1,VARREF(Ylst),VARREF(Yx8rSsyntaxYTbq_listT),T3);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_unquoteQ),x_);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(Ytail),x_);
      T7 = CALL1(1,VARREF(Yhead),T8);
      T6 = CALL2(1,VARREF(Ylst),VARREF(Yx8rSsyntaxYTbq_listT),T7);
      T4 = T6;
    } else {
      T10 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_unquote_splicingQ),x_);
      if (T10 != YPfalse) {
        T13 = CALL1(1,VARREF(Ytail),x_);
        T12 = CALL1(1,VARREF(Yhead),T13);
        T11 = CALL2(1,VARREF(Ylst),VARREF(Yx8rSsyntaxYTbq_clobberableT),T12);
        T9 = T11;
      } else {
        if (YPtrue != YPfalse) {
          T16 = CALL1(1,VARREF(Yx8rSsyntaxYbq_process),x_);
          T15 = CALL2(1,VARREF(Ylst),VARREF(Yx8rSsyntaxYTbq_listT),T16);
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

FUNCODEDEF(fun_map_tree_141) {
  P fn_,x_;
  P tmpF1567;
  P dF1566;
  P aF1565;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(fn_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_atomQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,fn_,x_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),x_);
    T4 = CALL1(1,fn_,T5);
    aF1565 = T4;
    T8 = CALL1(1,VARREF(Ytail),x_);
    T7 = CALL2(1,VARREF(Yx8rSsyntaxYmap_tree),fn_,T8);
    dF1566 = T7;
    T12 = CALL1(1,VARREF(Yhead),x_);
    T11 = CALL2(1,VARREF(YgooSmathYE),aF1565,T12);
    tmpF1567 = T11;
    if (tmpF1567 != YPfalse) {
      T15 = CALL1(1,VARREF(Ytail),x_);
      T14 = CALL2(1,VARREF(YgooSmathYE),dF1566,T15);
      T13 = T14;
    } else {
      T13 = YPfalse;
    }
    T10 = T13;
    if (T10 != YPfalse) {
      T9 = x_;
    } else {
      T16 = CALL2(1,VARREF(YgooSmacrosYpair),aF1565,dF1566);
      T9 = T16;
    }
    T6 = T9;
    T3 = T6;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bq_remove_tokens_142) {
  P x_;
  P tmpF1569;
  P tmpF1568;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(Yx8rSsyntaxYTbq_listT));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_109);
  } else {
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(Yx8rSsyntaxYTbq_appendT));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_243);
    } else {
      T5 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(Yx8rSsyntaxYTbq_nconcT));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_244);
      } else {
        T7 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(Yx8rSsyntaxYTbq_listTT));
        if (T7 != YPfalse) {
          T6 = LITREF(lit_245);
        } else {
          T9 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(Yx8rSsyntaxYTbq_quoteT));
          if (T9 != YPfalse) {
            T8 = LITREF(lit_5);
          } else {
            T11 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_atomQ),x_);
            if (T11 != YPfalse) {
              T10 = x_;
            } else {
              T14 = CALL1(1,VARREF(Yhead),x_);
              T13 = CALL2(1,VARREF(YgooSmacrosYEE),T14,VARREF(Yx8rSsyntaxYTbq_clobberableT));
              if (T13 != YPfalse) {
                T17 = CALL1(1,VARREF(Ytail),x_);
                T16 = CALL1(1,VARREF(Yhead),T17);
                T15 = CALL1(1,VARREF(Yx8rSsyntaxYbq_remove_tokens),T16);
                T12 = T15;
              } else {
                T21 = CALL1(1,VARREF(Yhead),x_);
                T20 = CALL2(1,VARREF(YgooSmacrosYEE),T21,VARREF(Yx8rSsyntaxYTbq_listTT));
                tmpF1568 = T20;
                if (tmpF1568 != YPfalse) {
                  T27 = CALL1(1,VARREF(Ytail),x_);
                  T26 = CALL1(1,VARREF(Ytail),T27);
                  T25 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T26);
                  T24 = CALL1(1,VARREF(Ynot),T25);
                  tmpF1569 = T24;
                  if (tmpF1569 != YPfalse) {
                    T32 = CALL1(1,VARREF(Ytail),x_);
                    T31 = CALL1(1,VARREF(Ytail),T32);
                    T30 = CALL1(1,VARREF(Ytail),T31);
                    T29 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T30);
                    T28 = T29;
                  } else {
                    T28 = YPfalse;
                  }
                  T23 = T28;
                  T22 = T23;
                } else {
                  T22 = YPfalse;
                }
                T19 = T22;
                if (T19 != YPfalse) {
                  T35 = CALL1(1,VARREF(Ytail),x_);
                  T34 = CALL2(1,VARREF(Yx8rSsyntaxYmap_tree),VARREF(Yx8rSsyntaxYbq_remove_tokens),T35);
                  T33 = CALL2(1,VARREF(YgooSmacrosYpair),LITREF(lit_246),T34);
                  T18 = T33;
                } else {
                  if (YPtrue != YPfalse) {
                    T37 = CALL2(1,VARREF(Yx8rSsyntaxYmap_tree),VARREF(Yx8rSsyntaxYbq_remove_tokens),x_);
                    T36 = T37;
                  } else {
                    T36 = YPfalse;
                  }
                  T18 = T36;
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

FUNCODEDEF(fun_sexpr_syntax_ifQ_143) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_tagged_listQ),exp_,VARREF(Yx8rSsyntaxYDsexpr_syntax_if_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_value_144) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesY2nd),exp_);
  T0 = CALL1(1,VARREF(YgooStypesY2nd),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_pattern_145) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesY2nd),exp_);
  T0 = CALL1(1,VARREF(YgooScolsSseqY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_then_146) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_else_147) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL3(1,VARREF(YgooScolsScolYelt_or),exp_,YPint((P)3),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_pattern_variableQ_148) {
  P pat_;
  P tmpF1570;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_unquoteQ),pat_);
  tmpF1570 = T1;
  if (tmpF1570 != YPfalse) {
    T2 = tmpF1570;
  } else {
    T3 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_unquote_splicingQ),pat_);
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_pattern_variable_name_149) {
  P pat_;
  P T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),pat_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_col_150) {
  P pat_;
  P xF1572;
  P tmpF1571;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T3 = CALL2(1,VARREF(YisaQ),pat_,VARREF(YLlstG));
  T2 = CALL1(1,VARREF(Ynot),T3);
  tmpF1571 = T2;
  if (tmpF1571 != YPfalse) {
    T4 = tmpF1571;
  } else {
    T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),pat_);
    T4 = T5;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T7 = CALL1(1,VARREF(Yhead),pat_);
    xF1572 = T7;
    T9 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_pattern_variableQ),xF1572);
    if (T9 != YPfalse) {
      T11 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_pattern_variable_name),xF1572);
      T13 = CALL1(1,VARREF(Ytail),pat_);
      T12 = CALL1(0,FREEREF(0),T13);
      T10 = CALL2(1,VARREF(YgooSmacrosYpair),T11,T12);
      T8 = T10;
    } else {
      T16 = CALL1(1,VARREF(Yhead),pat_);
      T15 = CALL1(0,FREEREF(0),T16);
      T18 = CALL1(1,VARREF(Ytail),pat_);
      T17 = CALL1(0,FREEREF(0),T18);
      T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,T17);
      T8 = T14;
    }
    T6 = T8;
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_bind_pattern_variables_151) {
  P pat_;
  P colF1573;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T2 = FUNSHELL(1,fun_col_150,1);
  colF1573 = T2;
  FUNINIT(colF1573, 1,colF1573);
  T3 = CALL1(0,colF1573,pat_);
  T1 = T3;
  T0 = CALL1(1,VARREF(YgooScolsSseqYdel_dups),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_macro_function_152) {
  P exp_;
  P funcF1575;
  P mifF1574;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_method_parameters),exp_);
  T4 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_method_body),exp_);
  T3 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_sequence_Gbegin),T4);
  T1 = CALLN(1,VARREF(Yx8rSsyntaxYsexpr_make_syntax_if),4,T2,LITREF(lit_1),T3,YPfalse);
  mifF1574 = T1;
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_1));
  T8 = CALL1(1,VARREF(Ylst),mifF1574);
  T6 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_make_anonymous_method),T7,T8);
  funcF1575 = T6;
  T5 = funcF1575;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

P Yx8rSsyntaxY___main_0___() {
  P T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214;
  P T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198;
  P T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182;
  P T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166;
  P T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150;
  P T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134;
  P T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118;
  P T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102;
  P T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86;
  P T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70;
  P T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54;
  P T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"sexpr-self-evaluating?");
  lit_1 = YPPsym((P)"exp");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_self_evaluatingQ_0 = YPmet(FUNCODEREF(fun_sexpr_self_evaluatingQ_0),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(Yx8rSsyntaxYsexpr_self_evaluatingQ);
  if (T3 != YPfalse) {
    T2 = VARREF(Yx8rSsyntaxYsexpr_self_evaluatingQ);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_self_evaluatingQ_0;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(Yx8rSsyntaxYsexpr_self_evaluatingQ,T1);
  lit_2 = YPPsym((P)"sexpr-variable?");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_variableQ_1 = YPmet(FUNCODEREF(fun_sexpr_variableQ_1),LITREF(lit_2),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(Yx8rSsyntaxYsexpr_variableQ);
  if (T8 != YPfalse) {
    T7 = VARREF(Yx8rSsyntaxYsexpr_variableQ);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_variableQ_1;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(Yx8rSsyntaxYsexpr_variableQ,T6);
  lit_3 = YPPsym((P)"sexpr-tagged-list?");
  lit_4 = YPPsym((P)"tag");
  T10 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_4)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_sexpr_tagged_listQ_2 = YPmet(FUNCODEREF(fun_sexpr_tagged_listQ_2),LITREF(lit_3),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(Yx8rSsyntaxYsexpr_tagged_listQ);
  if (T13 != YPfalse) {
    T12 = VARREF(Yx8rSsyntaxYsexpr_tagged_listQ);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_sexpr_tagged_listQ_2;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(Yx8rSsyntaxYsexpr_tagged_listQ,T11);
  lit_5 = YPPsym((P)"quote");
  VARSET(Yx8rSsyntaxYDsexpr_quote_tag,LITREF(lit_5));
  lit_6 = YPPsym((P)"sexpr-quoted?");
  T15 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_quotedQ_3 = YPmet(FUNCODEREF(fun_sexpr_quotedQ_3),LITREF(lit_6),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(Yx8rSsyntaxYsexpr_quotedQ);
  if (T18 != YPfalse) {
    T17 = VARREF(Yx8rSsyntaxYsexpr_quotedQ);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_sexpr_quotedQ_3;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(Yx8rSsyntaxYsexpr_quotedQ,T16);
  lit_7 = YPPsym((P)"sexpr-make-quote");
  T20 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_make_quote_4 = YPmet(FUNCODEREF(fun_sexpr_make_quote_4),LITREF(lit_7),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(Yx8rSsyntaxYsexpr_make_quote);
  if (T23 != YPfalse) {
    T22 = VARREF(Yx8rSsyntaxYsexpr_make_quote);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_sexpr_make_quote_4;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(Yx8rSsyntaxYsexpr_make_quote,T21);
  lit_8 = YPPsym((P)"sexpr-text-of-quotation");
  lit_9 = YPPsym((P)"quot");
  T25 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_text_of_quotation_5 = YPmet(FUNCODEREF(fun_sexpr_text_of_quotation_5),LITREF(lit_8),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(Yx8rSsyntaxYsexpr_text_of_quotation);
  if (T28 != YPfalse) {
    T27 = VARREF(Yx8rSsyntaxYsexpr_text_of_quotation);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_sexpr_text_of_quotation_5;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(Yx8rSsyntaxYsexpr_text_of_quotation,T26);
  lit_10 = YPPsym((P)"set");
  VARSET(Yx8rSsyntaxYDsexpr_set_tag,LITREF(lit_10));
  lit_11 = YPPsym((P)"sexpr-assignment?");
  T30 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_assignmentQ_6 = YPmet(FUNCODEREF(fun_sexpr_assignmentQ_6),LITREF(lit_11),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(Yx8rSsyntaxYsexpr_assignmentQ);
  if (T33 != YPfalse) {
    T32 = VARREF(Yx8rSsyntaxYsexpr_assignmentQ);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_sexpr_assignmentQ_6;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(Yx8rSsyntaxYsexpr_assignmentQ,T31);
  lit_12 = YPPsym((P)"sexpr-assignment-variable");
  lit_13 = YPPsym((P)"assn");
  T35 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_assignment_variable_7 = YPmet(FUNCODEREF(fun_sexpr_assignment_variable_7),LITREF(lit_12),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(Yx8rSsyntaxYsexpr_assignment_variable);
  if (T38 != YPfalse) {
    T37 = VARREF(Yx8rSsyntaxYsexpr_assignment_variable);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_sexpr_assignment_variable_7;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(Yx8rSsyntaxYsexpr_assignment_variable,T36);
  lit_14 = YPPsym((P)"sexpr-assignment-value");
  T40 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_assignment_value_8 = YPmet(FUNCODEREF(fun_sexpr_assignment_value_8),LITREF(lit_14),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(Yx8rSsyntaxYsexpr_assignment_value);
  if (T43 != YPfalse) {
    T42 = VARREF(Yx8rSsyntaxYsexpr_assignment_value);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_sexpr_assignment_value_8;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(Yx8rSsyntaxYsexpr_assignment_value,T41);
  lit_15 = YPPsym((P)"sexpr-variable-name");
  T45 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_name_9 = YPmet(FUNCODEREF(fun_sexpr_variable_name_9),LITREF(lit_15),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(Yx8rSsyntaxYsexpr_variable_name);
  if (T48 != YPfalse) {
    T47 = VARREF(Yx8rSsyntaxYsexpr_variable_name);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_sexpr_variable_name_9;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(Yx8rSsyntaxYsexpr_variable_name,T46);
  T50 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_name_10 = YPmet(FUNCODEREF(fun_sexpr_variable_name_10),LITREF(lit_15),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(Yx8rSsyntaxYsexpr_variable_name);
  if (T53 != YPfalse) {
    T52 = VARREF(Yx8rSsyntaxYsexpr_variable_name);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_sexpr_variable_name_10;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(Yx8rSsyntaxYsexpr_variable_name,T51);
  lit_16 = YPPsym((P)"sexpr-variable-type");
  T55 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_type_11 = YPmet(FUNCODEREF(fun_sexpr_variable_type_11),LITREF(lit_16),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(Yx8rSsyntaxYsexpr_variable_type);
  if (T58 != YPfalse) {
    T57 = VARREF(Yx8rSsyntaxYsexpr_variable_type);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_sexpr_variable_type_11;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(Yx8rSsyntaxYsexpr_variable_type,T56);
  lit_17 = YPPsym((P)"<any>");
  T60 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_type_12 = YPmet(FUNCODEREF(fun_sexpr_variable_type_12),LITREF(lit_16),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(Yx8rSsyntaxYsexpr_variable_type);
  if (T63 != YPfalse) {
    T62 = VARREF(Yx8rSsyntaxYsexpr_variable_type);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_sexpr_variable_type_12;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(Yx8rSsyntaxYsexpr_variable_type,T61);
  lit_18 = YPPsym((P)"dv");
  VARSET(Yx8rSsyntaxYDsexpr_define_tag,LITREF(lit_18));
  lit_19 = YPPsym((P)"sexpr-definition?");
  T65 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_definitionQ_13 = YPmet(FUNCODEREF(fun_sexpr_definitionQ_13),LITREF(lit_19),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(Yx8rSsyntaxYsexpr_definitionQ);
  if (T68 != YPfalse) {
    T67 = VARREF(Yx8rSsyntaxYsexpr_definitionQ);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_sexpr_definitionQ_13;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(Yx8rSsyntaxYsexpr_definitionQ,T66);
  lit_20 = YPPsym((P)"quasiquote");
  VARSET(Yx8rSsyntaxYDsexpr_quasiquote_tag,LITREF(lit_20));
  lit_21 = YPPsym((P)"sexpr-definition-variable");
  lit_22 = YPPsym((P)"defn");
  T70 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_definition_variable_14 = YPmet(FUNCODEREF(fun_sexpr_definition_variable_14),LITREF(lit_21),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(Yx8rSsyntaxYsexpr_definition_variable);
  if (T73 != YPfalse) {
    T72 = VARREF(Yx8rSsyntaxYsexpr_definition_variable);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_sexpr_definition_variable_14;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(Yx8rSsyntaxYsexpr_definition_variable,T71);
  lit_23 = YPPsym((P)"sexpr-definition-value");
  T75 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_definition_value_15 = YPmet(FUNCODEREF(fun_sexpr_definition_value_15),LITREF(lit_23),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(Yx8rSsyntaxYsexpr_definition_value);
  if (T78 != YPfalse) {
    T77 = VARREF(Yx8rSsyntaxYsexpr_definition_value);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_sexpr_definition_value_15;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(Yx8rSsyntaxYsexpr_definition_value,T76);
  lit_24 = YPPsym((P)"ds");
  VARSET(Yx8rSsyntaxYDsexpr_define_syntax_tag,LITREF(lit_24));
  lit_25 = YPPsym((P)"sexpr-syntax-definition?");
  T80 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_syntax_definitionQ_16 = YPmet(FUNCODEREF(fun_sexpr_syntax_definitionQ_16),LITREF(lit_25),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(Yx8rSsyntaxYsexpr_syntax_definitionQ);
  if (T83 != YPfalse) {
    T82 = VARREF(Yx8rSsyntaxYsexpr_syntax_definitionQ);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_sexpr_syntax_definitionQ_16;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(Yx8rSsyntaxYsexpr_syntax_definitionQ,T81);
  lit_26 = YPPsym((P)"mac");
  VARSET(Yx8rSsyntaxYDsexpr_macro_tag,LITREF(lit_26));
  lit_27 = YPPsym((P)"sexpr-syntax-definition-variable");
  T85 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_definition_variable_17 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_variable_17),LITREF(lit_27),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(Yx8rSsyntaxYsexpr_syntax_definition_variable);
  if (T88 != YPfalse) {
    T87 = VARREF(Yx8rSsyntaxYsexpr_syntax_definition_variable);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_sexpr_syntax_definition_variable_17;
  T86 = CALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(Yx8rSsyntaxYsexpr_syntax_definition_variable,T86);
  lit_28 = YPPsym((P)"sexpr-syntax-definition-value");
  T90 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_definition_value_18 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_value_18),LITREF(lit_28),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(Yx8rSsyntaxYsexpr_syntax_definition_value);
  if (T93 != YPfalse) {
    T92 = VARREF(Yx8rSsyntaxYsexpr_syntax_definition_value);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_sexpr_syntax_definition_value_18;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(Yx8rSsyntaxYsexpr_syntax_definition_value,T91);
  lit_29 = YPPsym((P)"df");
  VARSET(Yx8rSsyntaxYDsexpr_define_function_tag,LITREF(lit_29));
  lit_30 = YPPsym((P)"sexpr-function-definition?");
  T95 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_function_definitionQ_19 = YPmet(FUNCODEREF(fun_sexpr_function_definitionQ_19),LITREF(lit_30),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(Yx8rSsyntaxYsexpr_function_definitionQ);
  if (T98 != YPfalse) {
    T97 = VARREF(Yx8rSsyntaxYsexpr_function_definitionQ);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_sexpr_function_definitionQ_19;
  T96 = CALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(Yx8rSsyntaxYsexpr_function_definitionQ,T96);
  lit_31 = YPPsym((P)"dm");
  VARSET(Yx8rSsyntaxYDsexpr_define_method_tag,LITREF(lit_31));
  lit_32 = YPPsym((P)"sexpr-method-definition?");
  T100 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_method_definitionQ_20 = YPmet(FUNCODEREF(fun_sexpr_method_definitionQ_20),LITREF(lit_32),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(Yx8rSsyntaxYsexpr_method_definitionQ);
  if (T103 != YPfalse) {
    T102 = VARREF(Yx8rSsyntaxYsexpr_method_definitionQ);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_sexpr_method_definitionQ_20;
  T101 = CALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(Yx8rSsyntaxYsexpr_method_definitionQ,T101);
  lit_33 = YPPsym((P)"dg");
  VARSET(Yx8rSsyntaxYDsexpr_define_generic_tag,LITREF(lit_33));
  lit_34 = YPPsym((P)"sexpr-generic-definition?");
  T105 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_generic_definitionQ_21 = YPmet(FUNCODEREF(fun_sexpr_generic_definitionQ_21),LITREF(lit_34),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(Yx8rSsyntaxYsexpr_generic_definitionQ);
  if (T108 != YPfalse) {
    T107 = VARREF(Yx8rSsyntaxYsexpr_generic_definitionQ);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_sexpr_generic_definitionQ_21;
  T106 = CALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(Yx8rSsyntaxYsexpr_generic_definitionQ,T106);
  lit_35 = YPPsym((P)"sexpr-function-definition-variable");
  T110 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_definition_variable_22 = YPmet(FUNCODEREF(fun_sexpr_function_definition_variable_22),LITREF(lit_35),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(Yx8rSsyntaxYsexpr_function_definition_variable);
  if (T113 != YPfalse) {
    T112 = VARREF(Yx8rSsyntaxYsexpr_function_definition_variable);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_sexpr_function_definition_variable_22;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(Yx8rSsyntaxYsexpr_function_definition_variable,T111);
  lit_36 = YPPsym((P)"sexpr-forward-primitive?");
  T115 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_forward_primitiveQ_23 = YPmet(FUNCODEREF(fun_sexpr_forward_primitiveQ_23),LITREF(lit_36),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(Yx8rSsyntaxYsexpr_forward_primitiveQ);
  if (T118 != YPfalse) {
    T117 = VARREF(Yx8rSsyntaxYsexpr_forward_primitiveQ);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_sexpr_forward_primitiveQ_23;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(Yx8rSsyntaxYsexpr_forward_primitiveQ,T116);
  lit_37 = YPPsym((P)"sexpr-signature-parameters");
  lit_38 = YPPsym((P)"signature");
  lit_39 = YPPsym((P)"=>");
  T120 = YPsig(YPPlist(1,LITREF(lit_38)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_signature_parameters_24 = YPmet(FUNCODEREF(fun_sexpr_signature_parameters_24),LITREF(lit_37),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(Yx8rSsyntaxYsexpr_signature_parameters);
  if (T123 != YPfalse) {
    T122 = VARREF(Yx8rSsyntaxYsexpr_signature_parameters);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_sexpr_signature_parameters_24;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(Yx8rSsyntaxYsexpr_signature_parameters,T121);
  lit_40 = YPPsym((P)"sexpr-signature-value");
  lit_41 = YPPsym((P)"tup");
  lit_42 = YPPsym((P)"<tup>");
  T125 = YPsig(YPPlist(1,LITREF(lit_38)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_signature_value_25 = YPmet(FUNCODEREF(fun_sexpr_signature_value_25),LITREF(lit_40),T125,ENVNUL,PNUL,YPfalse);
  T128 = BOUNDP(Yx8rSsyntaxYsexpr_signature_value);
  if (T128 != YPfalse) {
    T127 = VARREF(Yx8rSsyntaxYsexpr_signature_value);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_sexpr_signature_value_25;
  T126 = CALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(Yx8rSsyntaxYsexpr_signature_value,T126);
  lit_43 = YPPsym((P)"as-signature");
  lit_44 = YPPsym((P)"sig");
  T130 = YPsig(YPPlist(1,LITREF(lit_44)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  Yx8rSsyntaxYas_signature = YPmet(FUNCODEREF(Yx8rSsyntaxYas_signature),LITREF(lit_43),T130,ENVNUL,PNUL,YPfalse);
  T131 = Yx8rSsyntaxYas_signature;
  VARSET(Yx8rSsyntaxYas_signature,T131);
  lit_45 = YPPsym((P)"sexpr-function-signature");
  T132 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_function_signature_27 = YPmet(FUNCODEREF(fun_sexpr_function_signature_27),LITREF(lit_45),T132,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(Yx8rSsyntaxYsexpr_function_signature);
  if (T135 != YPfalse) {
    T134 = VARREF(Yx8rSsyntaxYsexpr_function_signature);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_sexpr_function_signature_27;
  T133 = CALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(Yx8rSsyntaxYsexpr_function_signature,T133);
  lit_46 = YPPsym((P)"sexpr-function-parameters");
  T137 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_function_parameters_28 = YPmet(FUNCODEREF(fun_sexpr_function_parameters_28),LITREF(lit_46),T137,ENVNUL,PNUL,YPfalse);
  T140 = BOUNDP(Yx8rSsyntaxYsexpr_function_parameters);
  if (T140 != YPfalse) {
    T139 = VARREF(Yx8rSsyntaxYsexpr_function_parameters);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_sexpr_function_parameters_28;
  T138 = CALL2(1,VARREF(YPdefine_method),T139,T141);
  VARSET(Yx8rSsyntaxYsexpr_function_parameters,T138);
  lit_47 = YPPsym((P)"sexpr-function-value");
  T142 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_value_29 = YPmet(FUNCODEREF(fun_sexpr_function_value_29),LITREF(lit_47),T142,ENVNUL,PNUL,YPfalse);
  T145 = BOUNDP(Yx8rSsyntaxYsexpr_function_value);
  if (T145 != YPfalse) {
    T144 = VARREF(Yx8rSsyntaxYsexpr_function_value);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_sexpr_function_value_29;
  T143 = CALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(Yx8rSsyntaxYsexpr_function_value,T143);
  lit_48 = YPPsym((P)"sexpr-function-body");
  T147 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_body_30 = YPmet(FUNCODEREF(fun_sexpr_function_body_30),LITREF(lit_48),T147,ENVNUL,PNUL,YPfalse);
  T150 = BOUNDP(Yx8rSsyntaxYsexpr_function_body);
  if (T150 != YPfalse) {
    T149 = VARREF(Yx8rSsyntaxYsexpr_function_body);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_sexpr_function_body_30;
  T148 = CALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(Yx8rSsyntaxYsexpr_function_body,T148);
  lit_49 = YPPsym((P)"fun");
  VARSET(Yx8rSsyntaxYDsexpr_method_tag,LITREF(lit_49));
  lit_50 = YPPsym((P)"sexpr-function-definition-value");
  T152 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_definition_value_31 = YPmet(FUNCODEREF(fun_sexpr_function_definition_value_31),LITREF(lit_50),T152,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(Yx8rSsyntaxYsexpr_function_definition_value);
  if (T155 != YPfalse) {
    T154 = VARREF(Yx8rSsyntaxYsexpr_function_definition_value);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_sexpr_function_definition_value_31;
  T153 = CALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(Yx8rSsyntaxYsexpr_function_definition_value,T153);
  lit_51 = YPPsym((P)"sexpr-method?");
  T157 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_methodQ_32 = YPmet(FUNCODEREF(fun_sexpr_methodQ_32),LITREF(lit_51),T157,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(Yx8rSsyntaxYsexpr_methodQ);
  if (T160 != YPfalse) {
    T159 = VARREF(Yx8rSsyntaxYsexpr_methodQ);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_sexpr_methodQ_32;
  T158 = CALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(Yx8rSsyntaxYsexpr_methodQ,T158);
  lit_52 = YPPsym((P)"sexpr-method-signature");
  lit_53 = YPPsym((P)"method-exp");
  T162 = YPsig(YPPlist(1,LITREF(lit_53)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_signature_33 = YPmet(FUNCODEREF(fun_sexpr_method_signature_33),LITREF(lit_52),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(Yx8rSsyntaxYsexpr_method_signature);
  if (T165 != YPfalse) {
    T164 = VARREF(Yx8rSsyntaxYsexpr_method_signature);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_sexpr_method_signature_33;
  T163 = CALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(Yx8rSsyntaxYsexpr_method_signature,T163);
  lit_54 = YPPsym((P)"sexpr-method-parameters");
  T167 = YPsig(YPPlist(1,LITREF(lit_53)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_parameters_34 = YPmet(FUNCODEREF(fun_sexpr_method_parameters_34),LITREF(lit_54),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(Yx8rSsyntaxYsexpr_method_parameters);
  if (T170 != YPfalse) {
    T169 = VARREF(Yx8rSsyntaxYsexpr_method_parameters);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_sexpr_method_parameters_34;
  T168 = CALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(Yx8rSsyntaxYsexpr_method_parameters,T168);
  lit_55 = YPPsym((P)"sexpr-method-value");
  T172 = YPsig(YPPlist(1,LITREF(lit_53)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_method_value_35 = YPmet(FUNCODEREF(fun_sexpr_method_value_35),LITREF(lit_55),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(Yx8rSsyntaxYsexpr_method_value);
  if (T175 != YPfalse) {
    T174 = VARREF(Yx8rSsyntaxYsexpr_method_value);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_sexpr_method_value_35;
  T173 = CALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(Yx8rSsyntaxYsexpr_method_value,T173);
  lit_56 = YPPsym((P)"sexpr-method-body");
  T177 = YPsig(YPPlist(1,LITREF(lit_53)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_body_36 = YPmet(FUNCODEREF(fun_sexpr_method_body_36),LITREF(lit_56),T177,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(Yx8rSsyntaxYsexpr_method_body);
  if (T180 != YPfalse) {
    T179 = VARREF(Yx8rSsyntaxYsexpr_method_body);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_sexpr_method_body_36;
  T178 = CALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(Yx8rSsyntaxYsexpr_method_body,T178);
  lit_57 = YPPsym((P)"sexpr-make-anonymous-method");
  lit_58 = YPPsym((P)"parameters");
  lit_59 = YPPsym((P)"body");
  T182 = YPsig(YPPlist(2,LITREF(lit_58),LITREF(lit_59)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_make_anonymous_method_37 = YPmet(FUNCODEREF(fun_sexpr_make_anonymous_method_37),LITREF(lit_57),T182,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(Yx8rSsyntaxYsexpr_make_anonymous_method);
  if (T185 != YPfalse) {
    T184 = VARREF(Yx8rSsyntaxYsexpr_make_anonymous_method);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_sexpr_make_anonymous_method_37;
  T183 = CALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(Yx8rSsyntaxYsexpr_make_anonymous_method,T183);
  lit_60 = YPPsym((P)"sexpr-make-method");
  lit_61 = YPPsym((P)"name");
  T187 = YPsig(YPPlist(3,LITREF(lit_61),LITREF(lit_58),LITREF(lit_59)),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_make_method_38 = YPmet(FUNCODEREF(fun_sexpr_make_method_38),LITREF(lit_60),T187,ENVNUL,PNUL,YPfalse);
  T190 = BOUNDP(Yx8rSsyntaxYsexpr_make_method);
  if (T190 != YPfalse) {
    T189 = VARREF(Yx8rSsyntaxYsexpr_make_method);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_sexpr_make_method_38;
  T188 = CALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(Yx8rSsyntaxYsexpr_make_method,T188);
  lit_62 = YPPsym((P)"if");
  VARSET(Yx8rSsyntaxYDsexpr_if_tag,LITREF(lit_62));
  lit_63 = YPPsym((P)"sexpr-if?");
  T192 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_ifQ_39 = YPmet(FUNCODEREF(fun_sexpr_ifQ_39),LITREF(lit_63),T192,ENVNUL,PNUL,YPfalse);
  T195 = BOUNDP(Yx8rSsyntaxYsexpr_ifQ);
  if (T195 != YPfalse) {
    T194 = VARREF(Yx8rSsyntaxYsexpr_ifQ);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_sexpr_ifQ_39;
  T193 = CALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(Yx8rSsyntaxYsexpr_ifQ,T193);
  lit_64 = YPPsym((P)"sexpr-if-test");
  T197 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_test_40 = YPmet(FUNCODEREF(fun_sexpr_if_test_40),LITREF(lit_64),T197,ENVNUL,PNUL,YPfalse);
  T200 = BOUNDP(Yx8rSsyntaxYsexpr_if_test);
  if (T200 != YPfalse) {
    T199 = VARREF(Yx8rSsyntaxYsexpr_if_test);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_sexpr_if_test_40;
  T198 = CALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(Yx8rSsyntaxYsexpr_if_test,T198);
  lit_65 = YPPsym((P)"sexpr-if-then");
  T202 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_then_41 = YPmet(FUNCODEREF(fun_sexpr_if_then_41),LITREF(lit_65),T202,ENVNUL,PNUL,YPfalse);
  T205 = BOUNDP(Yx8rSsyntaxYsexpr_if_then);
  if (T205 != YPfalse) {
    T204 = VARREF(Yx8rSsyntaxYsexpr_if_then);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_sexpr_if_then_41;
  T203 = CALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(Yx8rSsyntaxYsexpr_if_then,T203);
  lit_66 = YPPsym((P)"sexpr-if-else");
  T207 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_else_42 = YPmet(FUNCODEREF(fun_sexpr_if_else_42),LITREF(lit_66),T207,ENVNUL,PNUL,YPfalse);
  T210 = BOUNDP(Yx8rSsyntaxYsexpr_if_else);
  if (T210 != YPfalse) {
    T209 = VARREF(Yx8rSsyntaxYsexpr_if_else);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_sexpr_if_else_42;
  T208 = CALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(Yx8rSsyntaxYsexpr_if_else,T208);
  lit_67 = YPPsym((P)"sexpr-make-if");
  lit_68 = YPPsym((P)"test");
  lit_69 = YPPsym((P)"then");
  lit_70 = YPPsym((P)"else");
  T212 = YPsig(YPPlist(3,LITREF(lit_68),LITREF(lit_69),LITREF(lit_70)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_make_if_43 = YPmet(FUNCODEREF(fun_sexpr_make_if_43),LITREF(lit_67),T212,ENVNUL,PNUL,YPfalse);
  T215 = BOUNDP(Yx8rSsyntaxYsexpr_make_if);
  if (T215 != YPfalse) {
    T214 = VARREF(Yx8rSsyntaxYsexpr_make_if);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_sexpr_make_if_43;
  T213 = CALL2(1,VARREF(YPdefine_method),T214,T216);
  VARSET(Yx8rSsyntaxYsexpr_make_if,T213);
  lit_71 = YPPsym((P)"esc");
  VARSET(Yx8rSsyntaxYDsexpr_bind_exit_tag,LITREF(lit_71));
  lit_72 = YPPsym((P)"sexpr-block?");
  T217 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_blockQ_44 = YPmet(FUNCODEREF(fun_sexpr_blockQ_44),LITREF(lit_72),T217,ENVNUL,PNUL,YPfalse);
  T220 = BOUNDP(Yx8rSsyntaxYsexpr_blockQ);
  if (T220 != YPfalse) {
    T219 = VARREF(Yx8rSsyntaxYsexpr_blockQ);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_sexpr_blockQ_44;
  T218 = CALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(Yx8rSsyntaxYsexpr_blockQ,T218);
  lit_73 = YPPsym((P)"sexpr-block-name");
  T224 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T223 = fun_sexpr_block_name_45 = YPmet(FUNCODEREF(fun_sexpr_block_name_45),LITREF(lit_73),T224,ENVNUL,PNUL,YPfalse);
  T228 = BOUNDP(Yx8rSsyntaxYsexpr_block_name);
  if (T228 != YPfalse) {
    T227 = VARREF(Yx8rSsyntaxYsexpr_block_name);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_sexpr_block_name_45;
  T226 = CALL2(1,VARREF(YPdefine_method),T227,T229);
  T225 = VARSET(Yx8rSsyntaxYsexpr_block_name,T226);
  T222 = T225;
  return T222;
}

P Yx8rSsyntaxY___main_1___() {
  P T275,T274,T273,T272,T271,T270,T269,T268,T267,T266,T265,T264,T263,T262,T261,T260;
  P T259,T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245,T244;
  P T243,T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228;
  P T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212;
  P T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196;
  P T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180;
  P T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164;
  P T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148;
  P T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132;
  P T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116;
  P T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100;
  P T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84;
  P T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68;
  P T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52;
  P T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36;
  P T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
loop:
  lit_74 = YPPsym((P)"sexpr-block-body");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_block_body_46 = YPmet(FUNCODEREF(fun_sexpr_block_body_46),LITREF(lit_74),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(Yx8rSsyntaxYsexpr_block_body);
  if (T3 != YPfalse) {
    T2 = VARREF(Yx8rSsyntaxYsexpr_block_body);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_block_body_46;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(Yx8rSsyntaxYsexpr_block_body,T1);
  lit_75 = YPPsym((P)"fin");
  VARSET(Yx8rSsyntaxYDsexpr_unwind_protect_tag,LITREF(lit_75));
  lit_76 = YPPsym((P)"sexpr-unwind-protect?");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unwind_protectQ_47 = YPmet(FUNCODEREF(fun_sexpr_unwind_protectQ_47),LITREF(lit_76),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(Yx8rSsyntaxYsexpr_unwind_protectQ);
  if (T8 != YPfalse) {
    T7 = VARREF(Yx8rSsyntaxYsexpr_unwind_protectQ);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_unwind_protectQ_47;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(Yx8rSsyntaxYsexpr_unwind_protectQ,T6);
  lit_77 = YPPsym((P)"sexpr-unwind-protect-protected-form");
  T10 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_unwind_protect_protected_form_48 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_protected_form_48),LITREF(lit_77),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(Yx8rSsyntaxYsexpr_unwind_protect_protected_form);
  if (T13 != YPfalse) {
    T12 = VARREF(Yx8rSsyntaxYsexpr_unwind_protect_protected_form);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_sexpr_unwind_protect_protected_form_48;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(Yx8rSsyntaxYsexpr_unwind_protect_protected_form,T11);
  lit_78 = YPPsym((P)"sexpr-unwind-protect-cleanup-forms");
  T15 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_unwind_protect_cleanup_forms_49 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_cleanup_forms_49),LITREF(lit_78),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(Yx8rSsyntaxYsexpr_unwind_protect_cleanup_forms);
  if (T18 != YPfalse) {
    T17 = VARREF(Yx8rSsyntaxYsexpr_unwind_protect_cleanup_forms);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_sexpr_unwind_protect_cleanup_forms_49;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(Yx8rSsyntaxYsexpr_unwind_protect_cleanup_forms,T16);
  lit_79 = YPPsym((P)"try");
  VARSET(Yx8rSsyntaxYDsexpr_monitor_tag,LITREF(lit_79));
  lit_80 = YPPsym((P)"sexpr-monitor?");
  T20 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_monitorQ_50 = YPmet(FUNCODEREF(fun_sexpr_monitorQ_50),LITREF(lit_80),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(Yx8rSsyntaxYsexpr_monitorQ);
  if (T23 != YPfalse) {
    T22 = VARREF(Yx8rSsyntaxYsexpr_monitorQ);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_sexpr_monitorQ_50;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(Yx8rSsyntaxYsexpr_monitorQ,T21);
  lit_81 = YPPsym((P)"sexpr-monitor-expand");
  lit_82 = YPPsym((P)"return");
  lit_83 = YPPsym((P)"x-1412");
  lit_84 = YPPsym((P)"msg");
  lit_85 = YPPsym((P)"args");
  lit_86 = YPsb((P)"Malformed TRY expression: ~=");
  lit_87 = YPsb((P)"Match Pattern Failure");
  lit_88 = YPPsym((P)"type");
  T27 = YPsig(YPPlist(2,LITREF(lit_84),LITREF(lit_85)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1412_51 = YPmet(FUNCODEREF(fun_x_1412_51),LITREF(lit_83),T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(YPPlist(1,LITREF(lit_82)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T26,ENVNUL,PNUL,YPfalse);
  T25 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_expand_53 = YPmet(FUNCODEREF(fun_sexpr_monitor_expand_53),LITREF(lit_81),T25,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(Yx8rSsyntaxYsexpr_monitor_expand);
  if (T30 != YPfalse) {
    T29 = VARREF(Yx8rSsyntaxYsexpr_monitor_expand);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_sexpr_monitor_expand_53;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(Yx8rSsyntaxYsexpr_monitor_expand,T28);
  lit_89 = YPPsym((P)"find-option");
  lit_90 = YPPsym((P)"options");
  lit_91 = YPPsym((P)"option");
  lit_92 = YPPsym((P)"default");
  T32 = YPsig(YPPlist(3,LITREF(lit_90),LITREF(lit_91),LITREF(lit_92)),YPPlist(3,VARREF(YLlstG),VARREF(YLsymG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Yx8rSsyntaxYfind_option = YPmet(FUNCODEREF(Yx8rSsyntaxYfind_option),LITREF(lit_89),T32,ENVNUL,PNUL,YPfalse);
  T33 = Yx8rSsyntaxYfind_option;
  VARSET(Yx8rSsyntaxYfind_option,T33);
  lit_93 = YPPsym((P)"sexpr-monitor-type");
  lit_94 = YPPlist(1,YPPsym((P)"<condition>"));
  lit_95 = YPPsym((P)"x-1414");
  lit_96 = YPsb((P)"Malformed TRY condition type: %=");
  T36 = YPsig(YPPlist(2,LITREF(lit_84),LITREF(lit_85)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1414_55 = YPmet(FUNCODEREF(fun_x_1414_55),LITREF(lit_95),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(1,LITREF(lit_82)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T35,ENVNUL,PNUL,YPfalse);
  T34 = YPsig(YPPlist(1,LITREF(lit_90)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_type_57 = YPmet(FUNCODEREF(fun_sexpr_monitor_type_57),LITREF(lit_93),T34,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(Yx8rSsyntaxYsexpr_monitor_type);
  if (T39 != YPfalse) {
    T38 = VARREF(Yx8rSsyntaxYsexpr_monitor_type);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_sexpr_monitor_type_57;
  T37 = CALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(Yx8rSsyntaxYsexpr_monitor_type,T37);
  lit_97 = YPPsym((P)"sexpr-monitor-info");
  lit_98 = YPPsym((P)"info");
  lit_99 = YPPsym((P)"description");
  lit_100 = YPsb((P)"TRY may only have one of INFO or DESCRIPTION: %=");
  lit_101 = YPPsym((P)"x-1416");
  lit_102 = YPsb((P)"Malformed TRY info expression: %=");
  lit_103 = YPPsym((P)"x-1418");
  lit_104 = YPsb((P)"Malformed TRY description: %=");
  lit_105 = YPPsym((P)"new");
  lit_106 = YPPsym((P)"<simple-handler-info>");
  lit_107 = YPPsym((P)"handler-info-message");
  lit_108 = YPPsym((P)"handler-info-arguments");
  lit_109 = YPPsym((P)"lst");
  lit_110 = YPPsym((P)"$default-handler-info");
  T45 = YPsig(YPPlist(2,LITREF(lit_84),LITREF(lit_85)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1416_58 = YPmet(FUNCODEREF(fun_x_1416_58),LITREF(lit_101),T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(YPPlist(1,LITREF(lit_82)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T43 = YPsig(YPPlist(2,LITREF(lit_84),LITREF(lit_85)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1418_60 = YPmet(FUNCODEREF(fun_x_1418_60),LITREF(lit_103),T43,ENVNUL,PNUL,YPfalse);
  T42 = YPsig(YPPlist(1,LITREF(lit_82)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T42,ENVNUL,PNUL,YPfalse);
  T41 = YPsig(YPPlist(1,LITREF(lit_90)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_info_62 = YPmet(FUNCODEREF(fun_sexpr_monitor_info_62),LITREF(lit_97),T41,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(Yx8rSsyntaxYsexpr_monitor_info);
  if (T48 != YPfalse) {
    T47 = VARREF(Yx8rSsyntaxYsexpr_monitor_info);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_sexpr_monitor_info_62;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(Yx8rSsyntaxYsexpr_monitor_info,T46);
  lit_111 = YPPsym((P)"sexpr-monitor-test");
  lit_112 = YPPlist(1,YPtrue);
  T50 = YPsig(YPPlist(1,LITREF(lit_90)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_monitor_test_63 = YPmet(FUNCODEREF(fun_sexpr_monitor_test_63),LITREF(lit_111),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(Yx8rSsyntaxYsexpr_monitor_test);
  if (T53 != YPfalse) {
    T52 = VARREF(Yx8rSsyntaxYsexpr_monitor_test);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_sexpr_monitor_test_63;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(Yx8rSsyntaxYsexpr_monitor_test,T51);
  lit_113 = YPPsym((P)"sexpr-monitor-body");
  T55 = YPsig(YPPlist(1,LITREF(lit_59)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_monitor_body_64 = YPmet(FUNCODEREF(fun_sexpr_monitor_body_64),LITREF(lit_113),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(Yx8rSsyntaxYsexpr_monitor_body);
  if (T58 != YPfalse) {
    T57 = VARREF(Yx8rSsyntaxYsexpr_monitor_body);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_sexpr_monitor_body_64;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(Yx8rSsyntaxYsexpr_monitor_body,T56);
  lit_114 = YPPsym((P)"seq");
  VARSET(Yx8rSsyntaxYDsexpr_begin_tag,LITREF(lit_114));
  lit_115 = YPPsym((P)"sexpr-begin?");
  T60 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_beginQ_65 = YPmet(FUNCODEREF(fun_sexpr_beginQ_65),LITREF(lit_115),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(Yx8rSsyntaxYsexpr_beginQ);
  if (T63 != YPfalse) {
    T62 = VARREF(Yx8rSsyntaxYsexpr_beginQ);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_sexpr_beginQ_65;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(Yx8rSsyntaxYsexpr_beginQ,T61);
  lit_116 = YPPsym((P)"sexpr-begin-actions");
  lit_117 = YPPsym((P)"begin-exp");
  T65 = YPsig(YPPlist(1,LITREF(lit_117)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_begin_actions_66 = YPmet(FUNCODEREF(fun_sexpr_begin_actions_66),LITREF(lit_116),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(Yx8rSsyntaxYsexpr_begin_actions);
  if (T68 != YPfalse) {
    T67 = VARREF(Yx8rSsyntaxYsexpr_begin_actions);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_sexpr_begin_actions_66;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(Yx8rSsyntaxYsexpr_begin_actions,T66);
  lit_118 = YPPsym((P)"sexpr-last-exp?");
  T70 = YPsig(YPPlist(1,LITREF(lit_114)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_last_expQ_67 = YPmet(FUNCODEREF(fun_sexpr_last_expQ_67),LITREF(lit_118),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(Yx8rSsyntaxYsexpr_last_expQ);
  if (T73 != YPfalse) {
    T72 = VARREF(Yx8rSsyntaxYsexpr_last_expQ);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_sexpr_last_expQ_67;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(Yx8rSsyntaxYsexpr_last_expQ,T71);
  lit_119 = YPPsym((P)"sexpr-first-exp");
  T75 = YPsig(YPPlist(1,LITREF(lit_114)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_first_exp_68 = YPmet(FUNCODEREF(fun_sexpr_first_exp_68),LITREF(lit_119),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(Yx8rSsyntaxYsexpr_first_exp);
  if (T78 != YPfalse) {
    T77 = VARREF(Yx8rSsyntaxYsexpr_first_exp);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_sexpr_first_exp_68;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(Yx8rSsyntaxYsexpr_first_exp,T76);
  lit_120 = YPPsym((P)"sexpr-rest-exps");
  T80 = YPsig(YPPlist(1,LITREF(lit_114)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_rest_exps_69 = YPmet(FUNCODEREF(fun_sexpr_rest_exps_69),LITREF(lit_120),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(Yx8rSsyntaxYsexpr_rest_exps);
  if (T83 != YPfalse) {
    T82 = VARREF(Yx8rSsyntaxYsexpr_rest_exps);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_sexpr_rest_exps_69;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(Yx8rSsyntaxYsexpr_rest_exps,T81);
  lit_121 = YPPsym((P)"sexpr-sequence->begin");
  T85 = YPsig(YPPlist(1,LITREF(lit_114)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_sequence_Gbegin_70 = YPmet(FUNCODEREF(fun_sexpr_sequence_Gbegin_70),LITREF(lit_121),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(Yx8rSsyntaxYsexpr_sequence_Gbegin);
  if (T88 != YPfalse) {
    T87 = VARREF(Yx8rSsyntaxYsexpr_sequence_Gbegin);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_sexpr_sequence_Gbegin_70;
  T86 = CALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(Yx8rSsyntaxYsexpr_sequence_Gbegin,T86);
  lit_122 = YPPsym((P)"sexpr-make-begin");
  T90 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_make_begin_71 = YPmet(FUNCODEREF(fun_sexpr_make_begin_71),LITREF(lit_122),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(Yx8rSsyntaxYsexpr_make_begin);
  if (T93 != YPfalse) {
    T92 = VARREF(Yx8rSsyntaxYsexpr_make_begin);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_sexpr_make_begin_71;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(Yx8rSsyntaxYsexpr_make_begin,T91);
  lit_123 = YPPsym((P)"sexpr-application?");
  T95 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_applicationQ_72 = YPmet(FUNCODEREF(fun_sexpr_applicationQ_72),LITREF(lit_123),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(Yx8rSsyntaxYsexpr_applicationQ);
  if (T98 != YPfalse) {
    T97 = VARREF(Yx8rSsyntaxYsexpr_applicationQ);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_sexpr_applicationQ_72;
  T96 = CALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(Yx8rSsyntaxYsexpr_applicationQ,T96);
  lit_124 = YPPsym((P)"sexpr-operator");
  lit_125 = YPPsym((P)"app");
  T100 = YPsig(YPPlist(1,LITREF(lit_125)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_operator_73 = YPmet(FUNCODEREF(fun_sexpr_operator_73),LITREF(lit_124),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(Yx8rSsyntaxYsexpr_operator);
  if (T103 != YPfalse) {
    T102 = VARREF(Yx8rSsyntaxYsexpr_operator);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_sexpr_operator_73;
  T101 = CALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(Yx8rSsyntaxYsexpr_operator,T101);
  lit_126 = YPPsym((P)"sexpr-operands");
  T105 = YPsig(YPPlist(1,LITREF(lit_125)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_operands_74 = YPmet(FUNCODEREF(fun_sexpr_operands_74),LITREF(lit_126),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(Yx8rSsyntaxYsexpr_operands);
  if (T108 != YPfalse) {
    T107 = VARREF(Yx8rSsyntaxYsexpr_operands);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_sexpr_operands_74;
  T106 = CALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(Yx8rSsyntaxYsexpr_operands,T106);
  lit_127 = YPPsym((P)"sexpr-no-operands?");
  T110 = YPsig(YPPlist(1,LITREF(lit_85)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_no_operandsQ_75 = YPmet(FUNCODEREF(fun_sexpr_no_operandsQ_75),LITREF(lit_127),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(Yx8rSsyntaxYsexpr_no_operandsQ);
  if (T113 != YPfalse) {
    T112 = VARREF(Yx8rSsyntaxYsexpr_no_operandsQ);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_sexpr_no_operandsQ_75;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(Yx8rSsyntaxYsexpr_no_operandsQ,T111);
  lit_128 = YPPsym((P)"sexpr-first-operand");
  T115 = YPsig(YPPlist(1,LITREF(lit_85)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_first_operand_76 = YPmet(FUNCODEREF(fun_sexpr_first_operand_76),LITREF(lit_128),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(Yx8rSsyntaxYsexpr_first_operand);
  if (T118 != YPfalse) {
    T117 = VARREF(Yx8rSsyntaxYsexpr_first_operand);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_sexpr_first_operand_76;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(Yx8rSsyntaxYsexpr_first_operand,T116);
  lit_129 = YPPsym((P)"sexpr-rest-operands");
  T120 = YPsig(YPPlist(1,LITREF(lit_85)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_rest_operands_77 = YPmet(FUNCODEREF(fun_sexpr_rest_operands_77),LITREF(lit_129),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(Yx8rSsyntaxYsexpr_rest_operands);
  if (T123 != YPfalse) {
    T122 = VARREF(Yx8rSsyntaxYsexpr_rest_operands);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_sexpr_rest_operands_77;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(Yx8rSsyntaxYsexpr_rest_operands,T121);
  lit_130 = YPPsym((P)"sexpr-make-application");
  lit_131 = YPPsym((P)"f");
  lit_132 = YPPsym((P)"operands");
  T125 = YPsig(YPPlist(2,LITREF(lit_131),LITREF(lit_132)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_make_application_78 = YPmet(FUNCODEREF(fun_sexpr_make_application_78),LITREF(lit_130),T125,ENVNUL,PNUL,YPfalse);
  T128 = BOUNDP(Yx8rSsyntaxYsexpr_make_application);
  if (T128 != YPfalse) {
    T127 = VARREF(Yx8rSsyntaxYsexpr_make_application);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_sexpr_make_application_78;
  T126 = CALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(Yx8rSsyntaxYsexpr_make_application,T126);
  VARSET(Yx8rSsyntaxYTunique_name_counterT,YPint((P)0));
  lit_133 = YPPsym((P)"sexpr-new-unique-name-counter!");
  T130 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLintG),Ynil);
  fun_sexpr_new_unique_name_counterX_79 = YPmet(FUNCODEREF(fun_sexpr_new_unique_name_counterX_79),LITREF(lit_133),T130,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(Yx8rSsyntaxYsexpr_new_unique_name_counterX);
  if (T133 != YPfalse) {
    T132 = VARREF(Yx8rSsyntaxYsexpr_new_unique_name_counterX);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_sexpr_new_unique_name_counterX_79;
  T131 = CALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(Yx8rSsyntaxYsexpr_new_unique_name_counterX,T131);
  VARSET(Yx8rSsyntaxYLnameG,VARREF(YLanyG));
  lit_134 = YPPsym((P)"sexpr-unique-name");
  lit_135 = YPPsym((P)"prefix");
  T135 = YPsig(YPPlist(1,LITREF(lit_135)),YPPlist(1,VARREF(Yx8rSsyntaxYLnameG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_unique_name_80 = YPmet(FUNCODEREF(fun_sexpr_unique_name_80),LITREF(lit_134),T135,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(Yx8rSsyntaxYsexpr_unique_name);
  if (T138 != YPfalse) {
    T137 = VARREF(Yx8rSsyntaxYsexpr_unique_name);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_sexpr_unique_name_80;
  T136 = CALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(Yx8rSsyntaxYsexpr_unique_name,T136);
  lit_136 = YPPsym((P)"def");
  VARSET(Yx8rSsyntaxYDsexpr_def_tag,LITREF(lit_136));
  lit_137 = YPPsym((P)"sexpr-def?");
  T140 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_defQ_81 = YPmet(FUNCODEREF(fun_sexpr_defQ_81),LITREF(lit_137),T140,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(Yx8rSsyntaxYsexpr_defQ);
  if (T143 != YPfalse) {
    T142 = VARREF(Yx8rSsyntaxYsexpr_defQ);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_sexpr_defQ_81;
  T141 = CALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(Yx8rSsyntaxYsexpr_defQ,T141);
  lit_138 = YPPsym((P)"sexpr-def-variable");
  T145 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_def_variable_82 = YPmet(FUNCODEREF(fun_sexpr_def_variable_82),LITREF(lit_138),T145,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(Yx8rSsyntaxYsexpr_def_variable);
  if (T148 != YPfalse) {
    T147 = VARREF(Yx8rSsyntaxYsexpr_def_variable);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_sexpr_def_variable_82;
  T146 = CALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(Yx8rSsyntaxYsexpr_def_variable,T146);
  lit_139 = YPPsym((P)"sexpr-def-value");
  T150 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_def_value_83 = YPmet(FUNCODEREF(fun_sexpr_def_value_83),LITREF(lit_139),T150,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(Yx8rSsyntaxYsexpr_def_value);
  if (T153 != YPfalse) {
    T152 = VARREF(Yx8rSsyntaxYsexpr_def_value);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_sexpr_def_value_83;
  T151 = CALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(Yx8rSsyntaxYsexpr_def_value,T151);
  lit_140 = YPPsym((P)"let");
  VARSET(Yx8rSsyntaxYDsexpr_let_tag,LITREF(lit_140));
  lit_141 = YPPsym((P)"sexpr-let?");
  T155 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_letQ_84 = YPmet(FUNCODEREF(fun_sexpr_letQ_84),LITREF(lit_141),T155,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(Yx8rSsyntaxYsexpr_letQ);
  if (T158 != YPfalse) {
    T157 = VARREF(Yx8rSsyntaxYsexpr_letQ);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_sexpr_letQ_84;
  T156 = CALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(Yx8rSsyntaxYsexpr_letQ,T156);
  lit_142 = YPPsym((P)"sexpr-let-bound-variables");
  lit_143 = YPPsym((P)"let-exp");
  lit_144 = YPPsym((P)"x");
  T161 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(1,LITREF(lit_143)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_let_bound_variables_86 = YPmet(FUNCODEREF(fun_sexpr_let_bound_variables_86),LITREF(lit_142),T160,ENVNUL,PNUL,YPfalse);
  T164 = BOUNDP(Yx8rSsyntaxYsexpr_let_bound_variables);
  if (T164 != YPfalse) {
    T163 = VARREF(Yx8rSsyntaxYsexpr_let_bound_variables);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_sexpr_let_bound_variables_86;
  T162 = CALL2(1,VARREF(YPdefine_method),T163,T165);
  VARSET(Yx8rSsyntaxYsexpr_let_bound_variables,T162);
  lit_145 = YPPsym((P)"sexpr-let-values");
  T167 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(YPPlist(1,LITREF(lit_143)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_let_values_88 = YPmet(FUNCODEREF(fun_sexpr_let_values_88),LITREF(lit_145),T166,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(Yx8rSsyntaxYsexpr_let_values);
  if (T170 != YPfalse) {
    T169 = VARREF(Yx8rSsyntaxYsexpr_let_values);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_sexpr_let_values_88;
  T168 = CALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(Yx8rSsyntaxYsexpr_let_values,T168);
  lit_146 = YPPsym((P)"sexpr-let-body");
  T172 = YPsig(YPPlist(1,LITREF(lit_143)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_let_body_89 = YPmet(FUNCODEREF(fun_sexpr_let_body_89),LITREF(lit_146),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(Yx8rSsyntaxYsexpr_let_body);
  if (T175 != YPfalse) {
    T174 = VARREF(Yx8rSsyntaxYsexpr_let_body);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_sexpr_let_body_89;
  T173 = CALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(Yx8rSsyntaxYsexpr_let_body,T173);
  lit_147 = YPPsym((P)"sexpr-let-names+values");
  lit_148 = YPPsym((P)"names");
  lit_149 = YPPsym((P)"vals");
  lit_150 = YPPsym((P)"loop");
  lit_151 = YPPsym((P)"rnames");
  lit_152 = YPPsym((P)"rvalues");
  lit_153 = YPsb((P)"tup");
  lit_154 = YPPsym((P)"inner");
  lit_155 = YPPsym((P)"rtnames");
  lit_156 = YPPsym((P)"rtvalues");
  lit_157 = YPPsym((P)"index");
  lit_158 = YPPsym((P)"tnames");
  lit_159 = YPPsym((P)"...");
  lit_160 = YPPsym((P)"<lst>");
  lit_161 = YPPsym((P)"sub");
  lit_162 = YPPsym((P)"len");
  lit_163 = YPPsym((P)"elt");
  T179 = YPsig(YPPlist(4,LITREF(lit_155),LITREF(lit_156),LITREF(lit_157),LITREF(lit_158)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_inner_90 = YPmet(FUNCODEREF(fun_inner_90),LITREF(lit_154),T179,ENVNUL,PNUL,YPfalse);
  T178 = YPsig(YPPlist(4,LITREF(lit_151),LITREF(lit_152),LITREF(lit_148),LITREF(lit_149)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_loop_91 = YPmet(FUNCODEREF(fun_loop_91),LITREF(lit_150),T178,ENVNUL,PNUL,YPfalse);
  T177 = YPsig(YPPlist(2,LITREF(lit_148),LITREF(lit_149)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_sexpr_let_namesAvalues_92 = YPmet(FUNCODEREF(fun_sexpr_let_namesAvalues_92),LITREF(lit_147),T177,ENVNUL,PNUL,YPfalse);
  T182 = BOUNDP(Yx8rSsyntaxYsexpr_let_namesAvalues);
  if (T182 != YPfalse) {
    T181 = VARREF(Yx8rSsyntaxYsexpr_let_namesAvalues);
  } else {
    T181 = YPfalse;
  }
  T183 = fun_sexpr_let_namesAvalues_92;
  T180 = CALL2(1,VARREF(YPdefine_method),T181,T183);
  VARSET(Yx8rSsyntaxYsexpr_let_namesAvalues,T180);
  lit_164 = YPPsym((P)"sexpr-let->combination");
  lit_165 = YPPsym((P)"col");
  lit_166 = YPPsym((P)"values");
  T185 = YPsig(YPPlist(2,LITREF(lit_148),LITREF(lit_166)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_col_93 = YPmet(FUNCODEREF(fun_col_93),LITREF(lit_165),T185,ENVNUL,PNUL,YPfalse);
  T184 = YPsig(YPPlist(1,LITREF(lit_143)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_let_Gcombination_94 = YPmet(FUNCODEREF(fun_sexpr_let_Gcombination_94),LITREF(lit_164),T184,ENVNUL,PNUL,YPfalse);
  T188 = BOUNDP(Yx8rSsyntaxYsexpr_let_Gcombination);
  if (T188 != YPfalse) {
    T187 = VARREF(Yx8rSsyntaxYsexpr_let_Gcombination);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_sexpr_let_Gcombination_94;
  T186 = CALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(Yx8rSsyntaxYsexpr_let_Gcombination,T186);
  lit_167 = YPPsym((P)"loc");
  VARSET(Yx8rSsyntaxYDsexpr_locals_tag,LITREF(lit_167));
  lit_168 = YPPsym((P)"sexpr-loc?");
  T190 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_locQ_95 = YPmet(FUNCODEREF(fun_sexpr_locQ_95),LITREF(lit_168),T190,ENVNUL,PNUL,YPfalse);
  T193 = BOUNDP(Yx8rSsyntaxYsexpr_locQ);
  if (T193 != YPfalse) {
    T192 = VARREF(Yx8rSsyntaxYsexpr_locQ);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_sexpr_locQ_95;
  T191 = CALL2(1,VARREF(YPdefine_method),T192,T194);
  VARSET(Yx8rSsyntaxYsexpr_locQ,T191);
  lit_169 = YPPsym((P)"sexpr-loc-bound-names");
  lit_170 = YPPsym((P)"loc-exp");
  T195 = YPsig(YPPlist(1,LITREF(lit_170)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_names_96 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_names_96),LITREF(lit_169),T195,ENVNUL,PNUL,YPfalse);
  T198 = BOUNDP(Yx8rSsyntaxYsexpr_loc_bound_names);
  if (T198 != YPfalse) {
    T197 = VARREF(Yx8rSsyntaxYsexpr_loc_bound_names);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_sexpr_loc_bound_names_96;
  T196 = CALL2(1,VARREF(YPdefine_method),T197,T199);
  VARSET(Yx8rSsyntaxYsexpr_loc_bound_names,T196);
  lit_171 = YPPsym((P)"sexpr-loc-bound-signatures");
  T201 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T201,ENVNUL,PNUL,YPfalse);
  T200 = YPsig(YPPlist(1,LITREF(lit_170)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_signatures_98 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_signatures_98),LITREF(lit_171),T200,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(Yx8rSsyntaxYsexpr_loc_bound_signatures);
  if (T204 != YPfalse) {
    T203 = VARREF(Yx8rSsyntaxYsexpr_loc_bound_signatures);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_sexpr_loc_bound_signatures_98;
  T202 = CALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(Yx8rSsyntaxYsexpr_loc_bound_signatures,T202);
  lit_172 = YPPsym((P)"sexpr-loc-bound-bodies");
  T206 = YPsig(YPPlist(1,LITREF(lit_170)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_bodies_99 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_bodies_99),LITREF(lit_172),T206,ENVNUL,PNUL,YPfalse);
  T209 = BOUNDP(Yx8rSsyntaxYsexpr_loc_bound_bodies);
  if (T209 != YPfalse) {
    T208 = VARREF(Yx8rSsyntaxYsexpr_loc_bound_bodies);
  } else {
    T208 = YPfalse;
  }
  T210 = fun_sexpr_loc_bound_bodies_99;
  T207 = CALL2(1,VARREF(YPdefine_method),T208,T210);
  VARSET(Yx8rSsyntaxYsexpr_loc_bound_bodies,T207);
  lit_173 = YPPsym((P)"sexpr-loc-raw-body");
  T211 = YPsig(YPPlist(1,LITREF(lit_170)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_raw_body_100 = YPmet(FUNCODEREF(fun_sexpr_loc_raw_body_100),LITREF(lit_173),T211,ENVNUL,PNUL,YPfalse);
  T214 = BOUNDP(Yx8rSsyntaxYsexpr_loc_raw_body);
  if (T214 != YPfalse) {
    T213 = VARREF(Yx8rSsyntaxYsexpr_loc_raw_body);
  } else {
    T213 = YPfalse;
  }
  T215 = fun_sexpr_loc_raw_body_100;
  T212 = CALL2(1,VARREF(YPdefine_method),T213,T215);
  VARSET(Yx8rSsyntaxYsexpr_loc_raw_body,T212);
  lit_174 = YPPsym((P)"sexpr-loc-body");
  T216 = YPsig(YPPlist(1,LITREF(lit_170)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_loc_body_101 = YPmet(FUNCODEREF(fun_sexpr_loc_body_101),LITREF(lit_174),T216,ENVNUL,PNUL,YPfalse);
  T219 = BOUNDP(Yx8rSsyntaxYsexpr_loc_body);
  if (T219 != YPfalse) {
    T218 = VARREF(Yx8rSsyntaxYsexpr_loc_body);
  } else {
    T218 = YPfalse;
  }
  T220 = fun_sexpr_loc_body_101;
  T217 = CALL2(1,VARREF(YPdefine_method),T218,T220);
  VARSET(Yx8rSsyntaxYsexpr_loc_body,T217);
  lit_175 = YPPsym((P)"rep");
  VARSET(Yx8rSsyntaxYDsexpr_iterate_tag,LITREF(lit_175));
  lit_176 = YPPsym((P)"sexpr-iterate?");
  T221 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_iterateQ_102 = YPmet(FUNCODEREF(fun_sexpr_iterateQ_102),LITREF(lit_176),T221,ENVNUL,PNUL,YPfalse);
  T224 = BOUNDP(Yx8rSsyntaxYsexpr_iterateQ);
  if (T224 != YPfalse) {
    T223 = VARREF(Yx8rSsyntaxYsexpr_iterateQ);
  } else {
    T223 = YPfalse;
  }
  T225 = fun_sexpr_iterateQ_102;
  T222 = CALL2(1,VARREF(YPdefine_method),T223,T225);
  VARSET(Yx8rSsyntaxYsexpr_iterateQ,T222);
  lit_177 = YPPsym((P)"sexpr-iterate-name");
  lit_178 = YPPsym((P)"rep-exp");
  T226 = YPsig(YPPlist(1,LITREF(lit_178)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_iterate_name_103 = YPmet(FUNCODEREF(fun_sexpr_iterate_name_103),LITREF(lit_177),T226,ENVNUL,PNUL,YPfalse);
  T229 = BOUNDP(Yx8rSsyntaxYsexpr_iterate_name);
  if (T229 != YPfalse) {
    T228 = VARREF(Yx8rSsyntaxYsexpr_iterate_name);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_sexpr_iterate_name_103;
  T227 = CALL2(1,VARREF(YPdefine_method),T228,T230);
  VARSET(Yx8rSsyntaxYsexpr_iterate_name,T227);
  VARSET(Yx8rSsyntaxYDsexpr_values_tag,LITREF(lit_39));
  lit_179 = YPPsym((P)"sexpr-iterate-signature");
  T232 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_104 = YPmet(FUNCODEREF(fun_104),YPfalse,T232,ENVNUL,PNUL,YPfalse);
  T231 = YPsig(YPPlist(1,LITREF(lit_178)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_signature_105 = YPmet(FUNCODEREF(fun_sexpr_iterate_signature_105),LITREF(lit_179),T231,ENVNUL,PNUL,YPfalse);
  T235 = BOUNDP(Yx8rSsyntaxYsexpr_iterate_signature);
  if (T235 != YPfalse) {
    T234 = VARREF(Yx8rSsyntaxYsexpr_iterate_signature);
  } else {
    T234 = YPfalse;
  }
  T236 = fun_sexpr_iterate_signature_105;
  T233 = CALL2(1,VARREF(YPdefine_method),T234,T236);
  VARSET(Yx8rSsyntaxYsexpr_iterate_signature,T233);
  lit_180 = YPPsym((P)"sexpr-iterate-inits");
  T238 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T238,ENVNUL,PNUL,YPfalse);
  T237 = YPsig(YPPlist(1,LITREF(lit_178)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_inits_107 = YPmet(FUNCODEREF(fun_sexpr_iterate_inits_107),LITREF(lit_180),T237,ENVNUL,PNUL,YPfalse);
  T241 = BOUNDP(Yx8rSsyntaxYsexpr_iterate_inits);
  if (T241 != YPfalse) {
    T240 = VARREF(Yx8rSsyntaxYsexpr_iterate_inits);
  } else {
    T240 = YPfalse;
  }
  T242 = fun_sexpr_iterate_inits_107;
  T239 = CALL2(1,VARREF(YPdefine_method),T240,T242);
  VARSET(Yx8rSsyntaxYsexpr_iterate_inits,T239);
  lit_181 = YPPsym((P)"sexpr-iterate-body");
  T243 = YPsig(YPPlist(1,LITREF(lit_178)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_body_108 = YPmet(FUNCODEREF(fun_sexpr_iterate_body_108),LITREF(lit_181),T243,ENVNUL,PNUL,YPfalse);
  T246 = BOUNDP(Yx8rSsyntaxYsexpr_iterate_body);
  if (T246 != YPfalse) {
    T245 = VARREF(Yx8rSsyntaxYsexpr_iterate_body);
  } else {
    T245 = YPfalse;
  }
  T247 = fun_sexpr_iterate_body_108;
  T244 = CALL2(1,VARREF(YPdefine_method),T245,T247);
  VARSET(Yx8rSsyntaxYsexpr_iterate_body,T244);
  lit_182 = YPPsym((P)"sexpr-iterate->loc");
  T248 = YPsig(YPPlist(1,LITREF(lit_178)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_Gloc_109 = YPmet(FUNCODEREF(fun_sexpr_iterate_Gloc_109),LITREF(lit_182),T248,ENVNUL,PNUL,YPfalse);
  T251 = BOUNDP(Yx8rSsyntaxYsexpr_iterate_Gloc);
  if (T251 != YPfalse) {
    T250 = VARREF(Yx8rSsyntaxYsexpr_iterate_Gloc);
  } else {
    T250 = YPfalse;
  }
  T252 = fun_sexpr_iterate_Gloc_109;
  T249 = CALL2(1,VARREF(YPdefine_method),T250,T252);
  VARSET(Yx8rSsyntaxYsexpr_iterate_Gloc,T249);
  lit_183 = YPPsym((P)"isa");
  VARSET(Yx8rSsyntaxYDsexpr_isa_tag,LITREF(lit_183));
  lit_184 = YPPsym((P)"sexpr-isa?");
  T253 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_isaQ_110 = YPmet(FUNCODEREF(fun_sexpr_isaQ_110),LITREF(lit_184),T253,ENVNUL,PNUL,YPfalse);
  T256 = BOUNDP(Yx8rSsyntaxYsexpr_isaQ);
  if (T256 != YPfalse) {
    T255 = VARREF(Yx8rSsyntaxYsexpr_isaQ);
  } else {
    T255 = YPfalse;
  }
  T257 = fun_sexpr_isaQ_110;
  T254 = CALL2(1,VARREF(YPdefine_method),T255,T257);
  VARSET(Yx8rSsyntaxYsexpr_isaQ,T254);
  lit_185 = YPPsym((P)"sexpr-isa-parent");
  T258 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_isa_parent_111 = YPmet(FUNCODEREF(fun_sexpr_isa_parent_111),LITREF(lit_185),T258,ENVNUL,PNUL,YPfalse);
  T261 = BOUNDP(Yx8rSsyntaxYsexpr_isa_parent);
  if (T261 != YPfalse) {
    T260 = VARREF(Yx8rSsyntaxYsexpr_isa_parent);
  } else {
    T260 = YPfalse;
  }
  T262 = fun_sexpr_isa_parent_111;
  T259 = CALL2(1,VARREF(YPdefine_method),T260,T262);
  VARSET(Yx8rSsyntaxYsexpr_isa_parent,T259);
  lit_186 = YPPsym((P)"sexpr-isa-prop-inits");
  T263 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_prop_inits_112 = YPmet(FUNCODEREF(fun_sexpr_isa_prop_inits_112),LITREF(lit_186),T263,ENVNUL,PNUL,YPfalse);
  T266 = BOUNDP(Yx8rSsyntaxYsexpr_isa_prop_inits);
  if (T266 != YPfalse) {
    T265 = VARREF(Yx8rSsyntaxYsexpr_isa_prop_inits);
  } else {
    T265 = YPfalse;
  }
  T267 = fun_sexpr_isa_prop_inits_112;
  T264 = CALL2(1,VARREF(YPdefine_method),T265,T267);
  VARSET(Yx8rSsyntaxYsexpr_isa_prop_inits,T264);
  lit_187 = YPPsym((P)"sexpr-isa-init-props");
  T270 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  T269 = fun_sexpr_isa_init_props_113 = YPmet(FUNCODEREF(fun_sexpr_isa_init_props_113),LITREF(lit_187),T270,ENVNUL,PNUL,YPfalse);
  T274 = BOUNDP(Yx8rSsyntaxYsexpr_isa_init_props);
  if (T274 != YPfalse) {
    T273 = VARREF(Yx8rSsyntaxYsexpr_isa_init_props);
  } else {
    T273 = YPfalse;
  }
  T275 = fun_sexpr_isa_init_props_113;
  T272 = CALL2(1,VARREF(YPdefine_method),T273,T275);
  T271 = VARSET(Yx8rSsyntaxYsexpr_isa_init_props,T272);
  T268 = T271;
  return T268;
}

P Yx8rSsyntaxY___main_2___() {
  P tmpF1576;
  P T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166;
  P T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150;
  P T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134;
  P T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118;
  P T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102;
  P T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86;
  P T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70;
  P T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54;
  P T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
loop:
  lit_188 = YPPsym((P)"sexpr-isa-init-values");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_init_values_114 = YPmet(FUNCODEREF(fun_sexpr_isa_init_values_114),LITREF(lit_188),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(Yx8rSsyntaxYsexpr_isa_init_values);
  if (T3 != YPfalse) {
    T2 = VARREF(Yx8rSsyntaxYsexpr_isa_init_values);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_isa_init_values_114;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(Yx8rSsyntaxYsexpr_isa_init_values,T1);
  lit_189 = YPPsym((P)"dc");
  VARSET(Yx8rSsyntaxYDsexpr_define_class_tag,LITREF(lit_189));
  lit_190 = YPPsym((P)"sexpr-define-class?");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_define_classQ_115 = YPmet(FUNCODEREF(fun_sexpr_define_classQ_115),LITREF(lit_190),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(Yx8rSsyntaxYsexpr_define_classQ);
  if (T8 != YPfalse) {
    T7 = VARREF(Yx8rSsyntaxYsexpr_define_classQ);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_define_classQ_115;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(Yx8rSsyntaxYsexpr_define_classQ,T6);
  lit_191 = YPPsym((P)"sexpr-define-class-parents");
  T10 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_define_class_parents_116 = YPmet(FUNCODEREF(fun_sexpr_define_class_parents_116),LITREF(lit_191),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(Yx8rSsyntaxYsexpr_define_class_parents);
  if (T13 != YPfalse) {
    T12 = VARREF(Yx8rSsyntaxYsexpr_define_class_parents);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_sexpr_define_class_parents_116;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(Yx8rSsyntaxYsexpr_define_class_parents,T11);
  lit_192 = YPPsym((P)"dp");
  VARSET(Yx8rSsyntaxYDsexpr_prop_tag,LITREF(lit_192));
  lit_193 = YPPsym((P)"sexpr-prop?");
  T15 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_propQ_117 = YPmet(FUNCODEREF(fun_sexpr_propQ_117),LITREF(lit_193),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(Yx8rSsyntaxYsexpr_propQ);
  if (T18 != YPfalse) {
    T17 = VARREF(Yx8rSsyntaxYsexpr_propQ);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_sexpr_propQ_117;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(Yx8rSsyntaxYsexpr_propQ,T16);
  lit_194 = YPPsym((P)"sexpr-prop-name");
  T20 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_prop_name_118 = YPmet(FUNCODEREF(fun_sexpr_prop_name_118),LITREF(lit_194),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(Yx8rSsyntaxYsexpr_prop_name);
  if (T23 != YPfalse) {
    T22 = VARREF(Yx8rSsyntaxYsexpr_prop_name);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_sexpr_prop_name_118;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(Yx8rSsyntaxYsexpr_prop_name,T21);
  lit_195 = YPPsym((P)"sexpr-prop-owner");
  T25 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_owner_119 = YPmet(FUNCODEREF(fun_sexpr_prop_owner_119),LITREF(lit_195),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(Yx8rSsyntaxYsexpr_prop_owner);
  if (T28 != YPfalse) {
    T27 = VARREF(Yx8rSsyntaxYsexpr_prop_owner);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_sexpr_prop_owner_119;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(Yx8rSsyntaxYsexpr_prop_owner,T26);
  lit_196 = YPPsym((P)"sexpr-prop-init-var");
  lit_197 = YPPsym((P)"_x");
  T30 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_init_var_120 = YPmet(FUNCODEREF(fun_sexpr_prop_init_var_120),LITREF(lit_196),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(Yx8rSsyntaxYsexpr_prop_init_var);
  if (T33 != YPfalse) {
    T32 = VARREF(Yx8rSsyntaxYsexpr_prop_init_var);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_sexpr_prop_init_var_120;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(Yx8rSsyntaxYsexpr_prop_init_var,T31);
  lit_198 = YPPsym((P)"sexpr-prop-type");
  T35 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_type_121 = YPmet(FUNCODEREF(fun_sexpr_prop_type_121),LITREF(lit_198),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(Yx8rSsyntaxYsexpr_prop_type);
  if (T38 != YPfalse) {
    T37 = VARREF(Yx8rSsyntaxYsexpr_prop_type);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_sexpr_prop_type_121;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(Yx8rSsyntaxYsexpr_prop_type,T36);
  lit_199 = YPPsym((P)"sexpr-prop-init?");
  T40 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_prop_initQ_122 = YPmet(FUNCODEREF(fun_sexpr_prop_initQ_122),LITREF(lit_199),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(Yx8rSsyntaxYsexpr_prop_initQ);
  if (T43 != YPfalse) {
    T42 = VARREF(Yx8rSsyntaxYsexpr_prop_initQ);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_sexpr_prop_initQ_122;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(Yx8rSsyntaxYsexpr_prop_initQ,T41);
  lit_200 = YPPsym((P)"sexpr-prop-init");
  T45 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_init_123 = YPmet(FUNCODEREF(fun_sexpr_prop_init_123),LITREF(lit_200),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(Yx8rSsyntaxYsexpr_prop_init);
  if (T48 != YPfalse) {
    T47 = VARREF(Yx8rSsyntaxYsexpr_prop_init);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_sexpr_prop_init_123;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(Yx8rSsyntaxYsexpr_prop_init,T46);
  lit_201 = YPPsym((P)"sexpr-fab-getter");
  lit_202 = YPPsym((P)"prop-value");
  T50 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_88)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_fab_getter_124 = YPmet(FUNCODEREF(fun_sexpr_fab_getter_124),LITREF(lit_201),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(Yx8rSsyntaxYsexpr_fab_getter);
  if (T53 != YPfalse) {
    T52 = VARREF(Yx8rSsyntaxYsexpr_fab_getter);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_sexpr_fab_getter_124;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(Yx8rSsyntaxYsexpr_fab_getter,T51);
  lit_203 = YPPsym((P)"sexpr-fab-setter");
  lit_204 = YPPsym((P)"prop-type");
  lit_205 = YPPsym((P)"_z");
  lit_206 = YPPsym((P)"prop-value-setter");
  T55 = YPsig(YPPlist(3,LITREF(lit_61),LITREF(lit_88),LITREF(lit_204)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_fab_setter_125 = YPmet(FUNCODEREF(fun_sexpr_fab_setter_125),LITREF(lit_203),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(Yx8rSsyntaxYsexpr_fab_setter);
  if (T58 != YPfalse) {
    T57 = VARREF(Yx8rSsyntaxYsexpr_fab_setter);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_sexpr_fab_setter_125;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(Yx8rSsyntaxYsexpr_fab_setter,T56);
  lit_207 = YPPsym((P)"sexpr-fab-setter-name");
  lit_208 = YPsb((P)"-setter");
  T60 = YPsig(YPPlist(1,LITREF(lit_61)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_fab_setter_name_126 = YPmet(FUNCODEREF(fun_sexpr_fab_setter_name_126),LITREF(lit_207),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(Yx8rSsyntaxYsexpr_fab_setter_name);
  if (T63 != YPfalse) {
    T62 = VARREF(Yx8rSsyntaxYsexpr_fab_setter_name);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_sexpr_fab_setter_name_126;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(Yx8rSsyntaxYsexpr_fab_setter_name,T61);
  lit_209 = YPPsym((P)"sexpr-macro?");
  T65 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_macroQ_127 = YPmet(FUNCODEREF(fun_sexpr_macroQ_127),LITREF(lit_209),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(Yx8rSsyntaxYsexpr_macroQ);
  if (T68 != YPfalse) {
    T67 = VARREF(Yx8rSsyntaxYsexpr_macroQ);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_sexpr_macroQ_127;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(Yx8rSsyntaxYsexpr_macroQ,T66);
  lit_210 = YPPsym((P)"macro-expand");
  VARSET(Yx8rSsyntaxYDsexpr_macro_expand_tag,LITREF(lit_210));
  lit_211 = YPPsym((P)"sexpr-macro-expand?");
  T70 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_macro_expandQ_128 = YPmet(FUNCODEREF(fun_sexpr_macro_expandQ_128),LITREF(lit_211),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(Yx8rSsyntaxYsexpr_macro_expandQ);
  if (T73 != YPfalse) {
    T72 = VARREF(Yx8rSsyntaxYsexpr_macro_expandQ);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_sexpr_macro_expandQ_128;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(Yx8rSsyntaxYsexpr_macro_expandQ,T71);
  lit_212 = YPPsym((P)"mif");
  VARSET(Yx8rSsyntaxYDsexpr_syntax_if_tag,LITREF(lit_212));
  lit_213 = YPPsym((P)"sexpr-make-syntax-if");
  lit_214 = YPPsym((P)"pat");
  T75 = YPsig(YPPlist(4,LITREF(lit_214),LITREF(lit_1),LITREF(lit_69),LITREF(lit_70)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  fun_sexpr_make_syntax_if_129 = YPmet(FUNCODEREF(fun_sexpr_make_syntax_if_129),LITREF(lit_213),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(Yx8rSsyntaxYsexpr_make_syntax_if);
  if (T78 != YPfalse) {
    T77 = VARREF(Yx8rSsyntaxYsexpr_make_syntax_if);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_sexpr_make_syntax_if_129;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(Yx8rSsyntaxYsexpr_make_syntax_if,T76);
  lit_215 = YPPsym((P)"comma-atsign");
  VARSET(Yx8rSsyntaxYTcomma_atsignT,LITREF(lit_215));
  lit_216 = YPPsym((P)"bq-list");
  VARSET(Yx8rSsyntaxYTbq_listT,LITREF(lit_216));
  lit_217 = YPPsym((P)"bq-list*");
  VARSET(Yx8rSsyntaxYTbq_listTT,LITREF(lit_217));
  lit_218 = YPPsym((P)"bq-append");
  VARSET(Yx8rSsyntaxYTbq_appendT,LITREF(lit_218));
  lit_219 = YPPsym((P)"bq-nconc");
  VARSET(Yx8rSsyntaxYTbq_nconcT,LITREF(lit_219));
  lit_220 = YPPsym((P)"bq-clobberable");
  VARSET(Yx8rSsyntaxYTbq_clobberableT,LITREF(lit_220));
  lit_221 = YPPsym((P)"bq-quote");
  VARSET(Yx8rSsyntaxYTbq_quoteT,LITREF(lit_221));
  lit_222 = YPPsym((P)"sexpr-expand-backquote");
  lit_223 = YPPsym((P)"goo");
  T80 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  Yx8rSsyntaxYsexpr_expand_backquote = YPmet(FUNCODEREF(Yx8rSsyntaxYsexpr_expand_backquote),LITREF(lit_222),T80,ENVNUL,PNUL,YPfalse);
  T81 = Yx8rSsyntaxYsexpr_expand_backquote;
  VARSET(Yx8rSsyntaxYsexpr_expand_backquote,T81);
  lit_224 = YPPsym((P)"sexpr-build-backquote-expander");
  T82 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_build_backquote_expander_131 = YPmet(FUNCODEREF(fun_sexpr_build_backquote_expander_131),LITREF(lit_224),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(Yx8rSsyntaxYsexpr_build_backquote_expander);
  if (T85 != YPfalse) {
    T84 = VARREF(Yx8rSsyntaxYsexpr_build_backquote_expander);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_sexpr_build_backquote_expander_131;
  T83 = CALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(Yx8rSsyntaxYsexpr_build_backquote_expander,T83);
  lit_225 = YPPsym((P)"sexpr-unquote?");
  lit_226 = YPPsym((P)"unquote");
  T87 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unquoteQ_132 = YPmet(FUNCODEREF(fun_sexpr_unquoteQ_132),LITREF(lit_225),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(Yx8rSsyntaxYsexpr_unquoteQ);
  if (T90 != YPfalse) {
    T89 = VARREF(Yx8rSsyntaxYsexpr_unquoteQ);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_sexpr_unquoteQ_132;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(Yx8rSsyntaxYsexpr_unquoteQ,T88);
  lit_227 = YPPsym((P)"sexpr-unquote-splicing?");
  lit_228 = YPPsym((P)"unquote-splicing");
  T92 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unquote_splicingQ_133 = YPmet(FUNCODEREF(fun_sexpr_unquote_splicingQ_133),LITREF(lit_227),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(Yx8rSsyntaxYsexpr_unquote_splicingQ);
  if (T95 != YPfalse) {
    T94 = VARREF(Yx8rSsyntaxYsexpr_unquote_splicingQ);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_sexpr_unquote_splicingQ_133;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(Yx8rSsyntaxYsexpr_unquote_splicingQ,T93);
  lit_229 = YPPsym((P)"sexpr-backquote?");
  T97 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_backquoteQ_134 = YPmet(FUNCODEREF(fun_sexpr_backquoteQ_134),LITREF(lit_229),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(Yx8rSsyntaxYsexpr_backquoteQ);
  if (T100 != YPfalse) {
    T99 = VARREF(Yx8rSsyntaxYsexpr_backquoteQ);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_sexpr_backquoteQ_134;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(Yx8rSsyntaxYsexpr_backquoteQ,T98);
  lit_230 = YPPsym((P)"sexpr-atom?");
  T102 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_atomQ_135 = YPmet(FUNCODEREF(fun_sexpr_atomQ_135),LITREF(lit_230),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(Yx8rSsyntaxYsexpr_atomQ);
  if (T105 != YPfalse) {
    T104 = VARREF(Yx8rSsyntaxYsexpr_atomQ);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_sexpr_atomQ_135;
  T103 = CALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(Yx8rSsyntaxYsexpr_atomQ,T103);
  lit_231 = YPPsym((P)"nreconc");
  lit_232 = YPPsym((P)"y");
  T107 = YPsig(YPPlist(2,LITREF(lit_144),LITREF(lit_232)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_nreconc_136 = YPmet(FUNCODEREF(fun_nreconc_136),LITREF(lit_231),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(Yx8rSsyntaxYnreconc);
  if (T110 != YPfalse) {
    T109 = VARREF(Yx8rSsyntaxYnreconc);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_nreconc_136;
  T108 = CALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(Yx8rSsyntaxYnreconc,T108);
  lit_233 = YPPsym((P)"bq-process");
  lit_234 = YPsb((P)"UNQUOTE-SPLICING %= AFTER BQ");
  lit_235 = YPPsym((P)"p");
  lit_236 = YPPsym((P)"q");
  lit_237 = YPsb((P)"Malformed ,%=");
  lit_238 = YPsb((P)"Dotted ,@%=");
  T114 = YPsig(YPPlist(2,LITREF(lit_235),LITREF(lit_236)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_137 = YPmet(FUNCODEREF(fun_loop_137),LITREF(lit_150),T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(YPPlist(1,LITREF(lit_82)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_138 = YPmet(FUNCODEREF(fun_138),YPfalse,T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bq_process_139 = YPmet(FUNCODEREF(fun_bq_process_139),LITREF(lit_233),T112,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(Yx8rSsyntaxYbq_process);
  if (T117 != YPfalse) {
    T116 = VARREF(Yx8rSsyntaxYbq_process);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_bq_process_139;
  T115 = CALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(Yx8rSsyntaxYbq_process,T115);
  lit_239 = YPPsym((P)"bracket");
  T119 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bracket_140 = YPmet(FUNCODEREF(fun_bracket_140),LITREF(lit_239),T119,ENVNUL,PNUL,YPfalse);
  T122 = BOUNDP(Yx8rSsyntaxYbracket);
  if (T122 != YPfalse) {
    T121 = VARREF(Yx8rSsyntaxYbracket);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_bracket_140;
  T120 = CALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(Yx8rSsyntaxYbracket,T120);
  lit_240 = YPPsym((P)"map-tree");
  lit_241 = YPPsym((P)"fn");
  T124 = YPsig(YPPlist(2,LITREF(lit_241),LITREF(lit_144)),YPPlist(2,VARREF(YLfunG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_map_tree_141 = YPmet(FUNCODEREF(fun_map_tree_141),LITREF(lit_240),T124,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(Yx8rSsyntaxYmap_tree);
  if (T127 != YPfalse) {
    T126 = VARREF(Yx8rSsyntaxYmap_tree);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_map_tree_141;
  T125 = CALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(Yx8rSsyntaxYmap_tree,T125);
  lit_242 = YPPsym((P)"bq-remove-tokens");
  lit_243 = YPPsym((P)"cat");
  lit_244 = YPPsym((P)"cat!");
  lit_245 = YPPsym((P)"list*");
  lit_246 = YPPsym((P)"pair");
  T129 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bq_remove_tokens_142 = YPmet(FUNCODEREF(fun_bq_remove_tokens_142),LITREF(lit_242),T129,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(Yx8rSsyntaxYbq_remove_tokens);
  if (T132 != YPfalse) {
    T131 = VARREF(Yx8rSsyntaxYbq_remove_tokens);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_bq_remove_tokens_142;
  T130 = CALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(Yx8rSsyntaxYbq_remove_tokens,T130);
  lit_247 = YPPsym((P)"sexpr-syntax-if?");
  T134 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_syntax_ifQ_143 = YPmet(FUNCODEREF(fun_sexpr_syntax_ifQ_143),LITREF(lit_247),T134,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(Yx8rSsyntaxYsexpr_syntax_ifQ);
  if (T137 != YPfalse) {
    T136 = VARREF(Yx8rSsyntaxYsexpr_syntax_ifQ);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_sexpr_syntax_ifQ_143;
  T135 = CALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(Yx8rSsyntaxYsexpr_syntax_ifQ,T135);
  lit_248 = YPPsym((P)"sexpr-syntax-if-value");
  T139 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_value_144 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_value_144),LITREF(lit_248),T139,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(Yx8rSsyntaxYsexpr_syntax_if_value);
  if (T142 != YPfalse) {
    T141 = VARREF(Yx8rSsyntaxYsexpr_syntax_if_value);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_sexpr_syntax_if_value_144;
  T140 = CALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(Yx8rSsyntaxYsexpr_syntax_if_value,T140);
  lit_249 = YPPsym((P)"sexpr-syntax-if-pattern");
  T144 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_pattern_145 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_pattern_145),LITREF(lit_249),T144,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(Yx8rSsyntaxYsexpr_syntax_if_pattern);
  if (T147 != YPfalse) {
    T146 = VARREF(Yx8rSsyntaxYsexpr_syntax_if_pattern);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_sexpr_syntax_if_pattern_145;
  T145 = CALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(Yx8rSsyntaxYsexpr_syntax_if_pattern,T145);
  lit_250 = YPPsym((P)"sexpr-syntax-if-then");
  T149 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_then_146 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_then_146),LITREF(lit_250),T149,ENVNUL,PNUL,YPfalse);
  T152 = BOUNDP(Yx8rSsyntaxYsexpr_syntax_if_then);
  if (T152 != YPfalse) {
    T151 = VARREF(Yx8rSsyntaxYsexpr_syntax_if_then);
  } else {
    T151 = YPfalse;
  }
  T153 = fun_sexpr_syntax_if_then_146;
  T150 = CALL2(1,VARREF(YPdefine_method),T151,T153);
  VARSET(Yx8rSsyntaxYsexpr_syntax_if_then,T150);
  lit_251 = YPPsym((P)"sexpr-syntax-if-else");
  T154 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_else_147 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_else_147),LITREF(lit_251),T154,ENVNUL,PNUL,YPfalse);
  T157 = BOUNDP(Yx8rSsyntaxYsexpr_syntax_if_else);
  if (T157 != YPfalse) {
    T156 = VARREF(Yx8rSsyntaxYsexpr_syntax_if_else);
  } else {
    T156 = YPfalse;
  }
  T158 = fun_sexpr_syntax_if_else_147;
  T155 = CALL2(1,VARREF(YPdefine_method),T156,T158);
  VARSET(Yx8rSsyntaxYsexpr_syntax_if_else,T155);
  lit_252 = YPPsym((P)"sexpr-pattern-variable?");
  T159 = YPsig(YPPlist(1,LITREF(lit_214)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_pattern_variableQ_148 = YPmet(FUNCODEREF(fun_sexpr_pattern_variableQ_148),LITREF(lit_252),T159,ENVNUL,PNUL,YPfalse);
  T162 = BOUNDP(Yx8rSsyntaxYsexpr_pattern_variableQ);
  if (T162 != YPfalse) {
    T161 = VARREF(Yx8rSsyntaxYsexpr_pattern_variableQ);
  } else {
    T161 = YPfalse;
  }
  T163 = fun_sexpr_pattern_variableQ_148;
  T160 = CALL2(1,VARREF(YPdefine_method),T161,T163);
  VARSET(Yx8rSsyntaxYsexpr_pattern_variableQ,T160);
  lit_253 = YPPsym((P)"sexpr-pattern-variable-name");
  T164 = YPsig(YPPlist(1,LITREF(lit_214)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_pattern_variable_name_149 = YPmet(FUNCODEREF(fun_sexpr_pattern_variable_name_149),LITREF(lit_253),T164,ENVNUL,PNUL,YPfalse);
  T167 = BOUNDP(Yx8rSsyntaxYsexpr_pattern_variable_name);
  if (T167 != YPfalse) {
    T166 = VARREF(Yx8rSsyntaxYsexpr_pattern_variable_name);
  } else {
    T166 = YPfalse;
  }
  T168 = fun_sexpr_pattern_variable_name_149;
  T165 = CALL2(1,VARREF(YPdefine_method),T166,T168);
  VARSET(Yx8rSsyntaxYsexpr_pattern_variable_name,T165);
  lit_254 = YPPsym((P)"sexpr-bind-pattern-variables");
  T170 = YPsig(YPPlist(1,LITREF(lit_214)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_col_150 = YPmet(FUNCODEREF(fun_col_150),LITREF(lit_165),T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(1,LITREF(lit_214)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_bind_pattern_variables_151 = YPmet(FUNCODEREF(fun_sexpr_bind_pattern_variables_151),LITREF(lit_254),T169,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(Yx8rSsyntaxYsexpr_bind_pattern_variables);
  if (T173 != YPfalse) {
    T172 = VARREF(Yx8rSsyntaxYsexpr_bind_pattern_variables);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_sexpr_bind_pattern_variables_151;
  T171 = CALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(Yx8rSsyntaxYsexpr_bind_pattern_variables,T171);
  lit_255 = YPPsym((P)"sexpr-make-macro-function");
  T175 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_make_macro_function_152 = YPmet(FUNCODEREF(fun_sexpr_make_macro_function_152),LITREF(lit_255),T175,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(Yx8rSsyntaxYsexpr_make_macro_function);
  if (T178 != YPfalse) {
    T177 = VARREF(Yx8rSsyntaxYsexpr_make_macro_function);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_sexpr_make_macro_function_152;
  T176 = CALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(Yx8rSsyntaxYsexpr_make_macro_function,T176);
  tmpF1576 = YPfalse;
  if (tmpF1576 != YPfalse) {
    T180 = VARREF(Yx8rSsyntaxYeval);
  } else {
    T180 = YPfalse;
  }
  T181 = YPfalse;
  return T181;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSassoc;
extern MODULE_INFO module_info_gooScolsSzip;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_gooSmath},
  {&module_info_gooStypes},
  {&module_info_gooScols},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"quote", &module_info_gooSboot, "quote"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"items", &module_info_gooScolsScol, "items"},
  {"round", &module_info_gooSmath, "round"},
  {"loc", &module_info_gooSboot, "loc"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"string-join", &module_info_gooScolsSstr, "string-join"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"len", &module_info_gooStypes, "len"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"min", &module_info_gooSmag, "min"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"find", &module_info_gooScolsScol, "find"},
  {"as", &module_info_gooStypes, "as"},
  {"format-to-string", &module_info_gooSruntime, "format-to-string"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"log", &module_info_gooSmath, "log"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"$e", &module_info_gooSmath, "$e"},
  {">", &module_info_gooSmag, ">"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"@+", &module_info_gooSboot, "@+"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"always", &module_info_gooSruntime, "always"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"~", &module_info_gooSmath, "~"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"df", &module_info_gooSboot, "df"},
  {"floor", &module_info_gooSmath, "floor"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"for", &module_info_gooSmacros, "for"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {">=", &module_info_gooSmag, ">="},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"<", &module_info_gooSmag, "<"},
  {"neg", &module_info_gooSmath, "neg"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"dv", &module_info_gooSboot, "dv"},
  {"-", &module_info_gooSmath, "-"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"if", &module_info_gooSboot, "if"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"tab-test", &module_info_gooScolsStab, "tab-test"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"dg", &module_info_gooSboot, "dg"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"dss", &module_info_gooSboot, "dss"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"low-fill!", &module_info_gooScolsScol, "low-fill!"},
  {"%put", &module_info_gooSboot, "%put"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"spread", &module_info_gooSruntime, "spread"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"%str", &module_info_gooSboot, "%str"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"<<", &module_info_gooSmath, "<<"},
  {"not", &module_info_gooSboot, "not"},
  {"op", &module_info_gooSmacros, "op"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"asin", &module_info_gooSmath, "asin"},
  {"dc", &module_info_gooSboot, "dc"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"export", &module_info_gooSboot, "export"},
  {"<=", &module_info_gooSmag, "<="},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"into", &module_info_gooScolsScol, "into"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"even?", &module_info_gooSmath, "even?"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"head", &module_info_gooSboot, "head"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"let", &module_info_gooSboot, "let"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"or", &module_info_gooSmacros, "or"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%im", &module_info_gooSboot, "%im"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"t*", &module_info_gooStypes, "t*"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"map", &module_info_gooSmacros, "map"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"&", &module_info_gooSmath, "&"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"atan", &module_info_gooSmath, "atan"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"while", &module_info_gooSmacros, "while"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"pop", &module_info_gooScolsSlst, "pop"},
  {"~=", &module_info_gooSmath, "~="},
  {"string-split", &module_info_gooScolsSstr, "string-split"},
  {"now", &module_info_gooScolsScol, "now"},
  {"mif", &module_info_gooSboot, "mif"},
  {"new", &module_info_gooSboot, "new"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {">>", &module_info_gooSmath, ">>"},
  {"low-into", &module_info_gooScolsScol, "low-into"},
  {"^", &module_info_gooSmath, "^"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"do", &module_info_gooSmacros, "do"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"t+", &module_info_gooStypes, "t+"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"push", &module_info_gooScolsSlst, "push"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"tab-gc-state", &module_info_gooScolsStab, "tab-gc-state"},
  {"assocs-test", &module_info_gooScolsSassoc, "assocs-test"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"/", &module_info_gooSmath, "/"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"|", &module_info_gooSmath, "|"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"tup", &module_info_gooSboot, "tup"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"assocs-test-setter", &module_info_gooScolsSassoc, "assocs-test-setter"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"string-repeat", &module_info_gooScolsSstr, "string-repeat"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"isa", &module_info_gooSboot, "isa"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"set", &module_info_gooSboot, "set"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"fun", &module_info_gooSboot, "fun"},
  {"dm", &module_info_gooSboot, "dm"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"1-", &module_info_gooSmath, "1-"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"t?", &module_info_gooStypes, "t?"},
  {"@<", &module_info_gooSboot, "@<"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"when", &module_info_gooSmacros, "when"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"round/", &module_info_gooSmath, "round/"},
  {"rem", &module_info_gooSmath, "rem"},
  {"ds", &module_info_gooSboot, "ds"},
  {"=", &module_info_gooSmath, "="},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%get", &module_info_gooSboot, "%get"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"match", &module_info_gooSmacros, "match"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"+", &module_info_gooSmath, "+"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"<assocs>", &module_info_gooScolsSassoc, "<assocs>"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"*", &module_info_gooSmath, "*"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"1+", &module_info_gooSmath, "1+"},
  {"def", &module_info_gooSboot, "def"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"$permanent-hash-state", &module_info_gooScolsStab, "$permanent-hash-state"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"seq", &module_info_gooSboot, "seq"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"mod", &module_info_gooSmath, "mod"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"try", &module_info_gooSboot, "try"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"@len", &module_info_gooSboot, "@len"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"sin", &module_info_gooSmath, "sin"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"pop-last!", &module_info_gooScolsSvec, "pop-last!"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"pow", &module_info_gooSmath, "pow"},
  {"rep", &module_info_gooSboot, "rep"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"any?", &module_info_gooStypes, "any?"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"until", &module_info_gooSmacros, "until"},
  {"and", &module_info_gooSmacros, "and"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"t=", &module_info_gooStypes, "t="},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"push-last!", &module_info_gooScolsSvec, "push-last!"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"app", &module_info_gooSmacros, "app"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"logn", &module_info_gooSmath, "logn"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"==", &module_info_gooSmacros, "=="},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"cos", &module_info_gooSmath, "cos"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"lst", &module_info_gooSboot, "lst"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"format", &module_info_gooSruntime, "format"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"max", &module_info_gooSmag, "max"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"use", &module_info_gooSboot, "use"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"case", &module_info_gooSmacros, "case"},
  {"read", &module_info_gooSruntime, "read"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"tail", &module_info_gooSboot, "tail"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"error", &module_info_gooSboot, "error"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"tan", &module_info_gooSmath, "tan"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sexpr-iterate->loc", &Yx8rSsyntaxYsexpr_iterate_Gloc},
  {"sexpr-expand-backquote", &Yx8rSsyntaxYsexpr_expand_backquote},
  {"sexpr-self-evaluating?", &Yx8rSsyntaxYsexpr_self_evaluatingQ},
  {"sexpr-operands", &Yx8rSsyntaxYsexpr_operands},
  {"sexpr-definition-value", &Yx8rSsyntaxYsexpr_definition_value},
  {"sexpr-new-unique-name-counter!", &Yx8rSsyntaxYsexpr_new_unique_name_counterX},
  {"sexpr-syntax-if-else", &Yx8rSsyntaxYsexpr_syntax_if_else},
  {"sexpr-assignment-value", &Yx8rSsyntaxYsexpr_assignment_value},
  {"sexpr-syntax-definition-variable", &Yx8rSsyntaxYsexpr_syntax_definition_variable},
  {"sexpr-signature-value", &Yx8rSsyntaxYsexpr_signature_value},
  {"*bq-nconc*", &Yx8rSsyntaxYTbq_nconcT},
  {"sexpr-iterate?", &Yx8rSsyntaxYsexpr_iterateQ},
  {"sexpr-forward-primitive?", &Yx8rSsyntaxYsexpr_forward_primitiveQ},
  {"$sexpr-locals-tag", &Yx8rSsyntaxYDsexpr_locals_tag},
  {"sexpr-block-name", &Yx8rSsyntaxYsexpr_block_name},
  {"$sexpr-let-tag", &Yx8rSsyntaxYDsexpr_let_tag},
  {"sexpr-prop-owner", &Yx8rSsyntaxYsexpr_prop_owner},
  {"$sexpr-define-method-tag", &Yx8rSsyntaxYDsexpr_define_method_tag},
  {"sexpr-loc-bound-names", &Yx8rSsyntaxYsexpr_loc_bound_names},
  {"sexpr-atom?", &Yx8rSsyntaxYsexpr_atomQ},
  {"sexpr-operator", &Yx8rSsyntaxYsexpr_operator},
  {"sexpr-prop-name", &Yx8rSsyntaxYsexpr_prop_name},
  {"$sexpr-define-generic-tag", &Yx8rSsyntaxYDsexpr_define_generic_tag},
  {"sexpr-begin?", &Yx8rSsyntaxYsexpr_beginQ},
  {"sexpr-syntax-definition?", &Yx8rSsyntaxYsexpr_syntax_definitionQ},
  {"sexpr-syntax-if-then", &Yx8rSsyntaxYsexpr_syntax_if_then},
  {"as-signature", &Yx8rSsyntaxYas_signature},
  {"sexpr-monitor-info", &Yx8rSsyntaxYsexpr_monitor_info},
  {"sexpr-isa-init-props", &Yx8rSsyntaxYsexpr_isa_init_props},
  {"sexpr-macro?", &Yx8rSsyntaxYsexpr_macroQ},
  {"sexpr-application?", &Yx8rSsyntaxYsexpr_applicationQ},
  {"sexpr-make-method", &Yx8rSsyntaxYsexpr_make_method},
  {"sexpr-make-application", &Yx8rSsyntaxYsexpr_make_application},
  {"$sexpr-define-function-tag", &Yx8rSsyntaxYDsexpr_define_function_tag},
  {"sexpr-monitor-body", &Yx8rSsyntaxYsexpr_monitor_body},
  {"*bq-append*", &Yx8rSsyntaxYTbq_appendT},
  {"$sexpr-prop-tag", &Yx8rSsyntaxYDsexpr_prop_tag},
  {"sexpr-function-definition-value", &Yx8rSsyntaxYsexpr_function_definition_value},
  {"*comma-atsign*", &Yx8rSsyntaxYTcomma_atsignT},
  {"sexpr-loc-bound-bodies", &Yx8rSsyntaxYsexpr_loc_bound_bodies},
  {"sexpr-function-signature", &Yx8rSsyntaxYsexpr_function_signature},
  {"sexpr-if?", &Yx8rSsyntaxYsexpr_ifQ},
  {"sexpr-syntax-if-pattern", &Yx8rSsyntaxYsexpr_syntax_if_pattern},
  {"eval", &Yx8rSsyntaxYeval},
  {"sexpr-iterate-inits", &Yx8rSsyntaxYsexpr_iterate_inits},
  {"sexpr-make-anonymous-method", &Yx8rSsyntaxYsexpr_make_anonymous_method},
  {"map-tree", &Yx8rSsyntaxYmap_tree},
  {"sexpr-macro-expand?", &Yx8rSsyntaxYsexpr_macro_expandQ},
  {"sexpr-if-test", &Yx8rSsyntaxYsexpr_if_test},
  {"sexpr-method-parameters", &Yx8rSsyntaxYsexpr_method_parameters},
  {"nreconc", &Yx8rSsyntaxYnreconc},
  {"sexpr-let-body", &Yx8rSsyntaxYsexpr_let_body},
  {"bq-process", &Yx8rSsyntaxYbq_process},
  {"sexpr-prop-init", &Yx8rSsyntaxYsexpr_prop_init},
  {"sexpr-def-value", &Yx8rSsyntaxYsexpr_def_value},
  {"sexpr-def?", &Yx8rSsyntaxYsexpr_defQ},
  {"$sexpr-isa-tag", &Yx8rSsyntaxYDsexpr_isa_tag},
  {"sexpr-method-signature", &Yx8rSsyntaxYsexpr_method_signature},
  {"sexpr-loc-raw-body", &Yx8rSsyntaxYsexpr_loc_raw_body},
  {"sexpr-bind-pattern-variables", &Yx8rSsyntaxYsexpr_bind_pattern_variables},
  {"sexpr-unquote-splicing?", &Yx8rSsyntaxYsexpr_unquote_splicingQ},
  {"sexpr-let?", &Yx8rSsyntaxYsexpr_letQ},
  {"find-option", &Yx8rSsyntaxYfind_option},
  {"sexpr-function-definition-variable", &Yx8rSsyntaxYsexpr_function_definition_variable},
  {"sexpr-backquote?", &Yx8rSsyntaxYsexpr_backquoteQ},
  {"sexpr-definition-variable", &Yx8rSsyntaxYsexpr_definition_variable},
  {"bracket", &Yx8rSsyntaxYbracket},
  {"$sexpr-quote-tag", &Yx8rSsyntaxYDsexpr_quote_tag},
  {"sexpr-if-else", &Yx8rSsyntaxYsexpr_if_else},
  {"$sexpr-macro-tag", &Yx8rSsyntaxYDsexpr_macro_tag},
  {"sexpr-loc?", &Yx8rSsyntaxYsexpr_locQ},
  {"sexpr-first-operand", &Yx8rSsyntaxYsexpr_first_operand},
  {"sexpr-monitor-test", &Yx8rSsyntaxYsexpr_monitor_test},
  {"$sexpr-set-tag", &Yx8rSsyntaxYDsexpr_set_tag},
  {"sexpr-define-class-parents", &Yx8rSsyntaxYsexpr_define_class_parents},
  {"sexpr-function-definition?", &Yx8rSsyntaxYsexpr_function_definitionQ},
  {"sexpr-make-begin", &Yx8rSsyntaxYsexpr_make_begin},
  {"sexpr-unwind-protect-protected-form", &Yx8rSsyntaxYsexpr_unwind_protect_protected_form},
  {"sexpr-fab-getter", &Yx8rSsyntaxYsexpr_fab_getter},
  {"sexpr-monitor-expand", &Yx8rSsyntaxYsexpr_monitor_expand},
  {"sexpr-rest-operands", &Yx8rSsyntaxYsexpr_rest_operands},
  {"sexpr-prop-type", &Yx8rSsyntaxYsexpr_prop_type},
  {"$sexpr-macro-expand-tag", &Yx8rSsyntaxYDsexpr_macro_expand_tag},
  {"sexpr-variable-name", &Yx8rSsyntaxYsexpr_variable_name},
  {"sexpr-prop-init?", &Yx8rSsyntaxYsexpr_prop_initQ},
  {"sexpr-method-body", &Yx8rSsyntaxYsexpr_method_body},
  {"sexpr-unwind-protect-cleanup-forms", &Yx8rSsyntaxYsexpr_unwind_protect_cleanup_forms},
  {"sexpr-make-syntax-if", &Yx8rSsyntaxYsexpr_make_syntax_if},
  {"sexpr-block-body", &Yx8rSsyntaxYsexpr_block_body},
  {"sexpr-let->combination", &Yx8rSsyntaxYsexpr_let_Gcombination},
  {"$sexpr-syntax-if-tag", &Yx8rSsyntaxYDsexpr_syntax_if_tag},
  {"sexpr-loc-bound-signatures", &Yx8rSsyntaxYsexpr_loc_bound_signatures},
  {"sexpr-fab-setter-name", &Yx8rSsyntaxYsexpr_fab_setter_name},
  {"sexpr-make-if", &Yx8rSsyntaxYsexpr_make_if},
  {"$sexpr-if-tag", &Yx8rSsyntaxYDsexpr_if_tag},
  {"sexpr-generic-definition?", &Yx8rSsyntaxYsexpr_generic_definitionQ},
  {"sexpr-isa-init-values", &Yx8rSsyntaxYsexpr_isa_init_values},
  {"sexpr-tagged-list?", &Yx8rSsyntaxYsexpr_tagged_listQ},
  {"sexpr-function-parameters", &Yx8rSsyntaxYsexpr_function_parameters},
  {"sexpr-let-values", &Yx8rSsyntaxYsexpr_let_values},
  {"---main-0---", NULL},
  {"sexpr-variable?", &Yx8rSsyntaxYsexpr_variableQ},
  {"sexpr-make-macro-function", &Yx8rSsyntaxYsexpr_make_macro_function},
  {"sexpr-prop-init-var", &Yx8rSsyntaxYsexpr_prop_init_var},
  {"sexpr-iterate-name", &Yx8rSsyntaxYsexpr_iterate_name},
  {"sexpr-block?", &Yx8rSsyntaxYsexpr_blockQ},
  {"sexpr-syntax-if-value", &Yx8rSsyntaxYsexpr_syntax_if_value},
  {"sexpr-loc-body", &Yx8rSsyntaxYsexpr_loc_body},
  {"sexpr-syntax-if?", &Yx8rSsyntaxYsexpr_syntax_ifQ},
  {"sexpr-make-quote", &Yx8rSsyntaxYsexpr_make_quote},
  {"sexpr-syntax-definition-value", &Yx8rSsyntaxYsexpr_syntax_definition_value},
  {"$sexpr-begin-tag", &Yx8rSsyntaxYDsexpr_begin_tag},
  {"sexpr-pattern-variable-name", &Yx8rSsyntaxYsexpr_pattern_variable_name},
  {"sexpr-let-names+values", &Yx8rSsyntaxYsexpr_let_namesAvalues},
  {"sexpr-build-backquote-expander", &Yx8rSsyntaxYsexpr_build_backquote_expander},
  {"sexpr-unquote?", &Yx8rSsyntaxYsexpr_unquoteQ},
  {"sexpr-iterate-signature", &Yx8rSsyntaxYsexpr_iterate_signature},
  {"sexpr-method?", &Yx8rSsyntaxYsexpr_methodQ},
  {"sexpr-monitor?", &Yx8rSsyntaxYsexpr_monitorQ},
  {"sexpr-text-of-quotation", &Yx8rSsyntaxYsexpr_text_of_quotation},
  {"sexpr-if-then", &Yx8rSsyntaxYsexpr_if_then},
  {"$sexpr-define-class-tag", &Yx8rSsyntaxYDsexpr_define_class_tag},
  {"sexpr-pattern-variable?", &Yx8rSsyntaxYsexpr_pattern_variableQ},
  {"sexpr-rest-exps", &Yx8rSsyntaxYsexpr_rest_exps},
  {"sexpr-sequence->begin", &Yx8rSsyntaxYsexpr_sequence_Gbegin},
  {"sexpr-no-operands?", &Yx8rSsyntaxYsexpr_no_operandsQ},
  {"sexpr-quoted?", &Yx8rSsyntaxYsexpr_quotedQ},
  {"---main-2---", NULL},
  {"sexpr-unique-name", &Yx8rSsyntaxYsexpr_unique_name},
  {"$sexpr-method-tag", &Yx8rSsyntaxYDsexpr_method_tag},
  {"*bq-clobberable*", &Yx8rSsyntaxYTbq_clobberableT},
  {"sexpr-iterate-body", &Yx8rSsyntaxYsexpr_iterate_body},
  {"$sexpr-quasiquote-tag", &Yx8rSsyntaxYDsexpr_quasiquote_tag},
  {"sexpr-def-variable", &Yx8rSsyntaxYsexpr_def_variable},
  {"<name>", &Yx8rSsyntaxYLnameG},
  {"---main-1---", NULL},
  {"$sexpr-unwind-protect-tag", &Yx8rSsyntaxYDsexpr_unwind_protect_tag},
  {"*bq-list**", &Yx8rSsyntaxYTbq_listTT},
  {"sexpr-method-definition?", &Yx8rSsyntaxYsexpr_method_definitionQ},
  {"sexpr-let-bound-variables", &Yx8rSsyntaxYsexpr_let_bound_variables},
  {"bq-remove-tokens", &Yx8rSsyntaxYbq_remove_tokens},
  {"*bq-quote*", &Yx8rSsyntaxYTbq_quoteT},
  {"sexpr-function-value", &Yx8rSsyntaxYsexpr_function_value},
  {"sexpr-last-exp?", &Yx8rSsyntaxYsexpr_last_expQ},
  {"$sexpr-def-tag", &Yx8rSsyntaxYDsexpr_def_tag},
  {"$sexpr-monitor-tag", &Yx8rSsyntaxYDsexpr_monitor_tag},
  {"sexpr-assignment-variable", &Yx8rSsyntaxYsexpr_assignment_variable},
  {"sexpr-first-exp", &Yx8rSsyntaxYsexpr_first_exp},
  {"sexpr-isa?", &Yx8rSsyntaxYsexpr_isaQ},
  {"sexpr-prop?", &Yx8rSsyntaxYsexpr_propQ},
  {"sexpr-isa-parent", &Yx8rSsyntaxYsexpr_isa_parent},
  {"sexpr-function-body", &Yx8rSsyntaxYsexpr_function_body},
  {"sexpr-isa-prop-inits", &Yx8rSsyntaxYsexpr_isa_prop_inits},
  {"$sexpr-bind-exit-tag", &Yx8rSsyntaxYDsexpr_bind_exit_tag},
  {"sexpr-fab-setter", &Yx8rSsyntaxYsexpr_fab_setter},
  {"sexpr-definition?", &Yx8rSsyntaxYsexpr_definitionQ},
  {"$sexpr-define-syntax-tag", &Yx8rSsyntaxYDsexpr_define_syntax_tag},
  {"sexpr-assignment?", &Yx8rSsyntaxYsexpr_assignmentQ},
  {"*unique-name-counter*", &Yx8rSsyntaxYTunique_name_counterT},
  {"sexpr-begin-actions", &Yx8rSsyntaxYsexpr_begin_actions},
  {"$sexpr-iterate-tag", &Yx8rSsyntaxYDsexpr_iterate_tag},
  {"$sexpr-define-tag", &Yx8rSsyntaxYDsexpr_define_tag},
  {"sexpr-variable-type", &Yx8rSsyntaxYsexpr_variable_type},
  {"$sexpr-values-tag", &Yx8rSsyntaxYDsexpr_values_tag},
  {"sexpr-define-class?", &Yx8rSsyntaxYsexpr_define_classQ},
  {"sexpr-monitor-type", &Yx8rSsyntaxYsexpr_monitor_type},
  {"*bq-list*", &Yx8rSsyntaxYTbq_listT},
  {"sexpr-signature-parameters", &Yx8rSsyntaxYsexpr_signature_parameters},
  {"sexpr-method-value", &Yx8rSsyntaxYsexpr_method_value},
  {"sexpr-unwind-protect?", &Yx8rSsyntaxYsexpr_unwind_protectQ},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"sexpr-loc-bound-bodies", "sexpr-loc-bound-bodies"},
  {"sexpr-expand-backquote", "sexpr-expand-backquote"},
  {"sexpr-operands", "sexpr-operands"},
  {"sexpr-definition-value", "sexpr-definition-value"},
  {"sexpr-syntax-if-else", "sexpr-syntax-if-else"},
  {"sexpr-assignment-value", "sexpr-assignment-value"},
  {"sexpr-signature-value", "sexpr-signature-value"},
  {"sexpr-sequence->begin", "sexpr-sequence->begin"},
  {"sexpr-forward-primitive?", "sexpr-forward-primitive?"},
  {"sexpr-block-name", "sexpr-block-name"},
  {"$sexpr-let-tag", "$sexpr-let-tag"},
  {"sexpr-prop-owner", "sexpr-prop-owner"},
  {"sexpr-iterate->loc", "sexpr-iterate->loc"},
  {"$sexpr-define-method-tag", "$sexpr-define-method-tag"},
  {"sexpr-isa-parent", "sexpr-isa-parent"},
  {"$sexpr-locals-tag", "$sexpr-locals-tag"},
  {"sexpr-loc-bound-names", "sexpr-loc-bound-names"},
  {"sexpr-operator", "sexpr-operator"},
  {"sexpr-prop-name", "sexpr-prop-name"},
  {"$sexpr-define-generic-tag", "$sexpr-define-generic-tag"},
  {"sexpr-syntax-if-then", "sexpr-syntax-if-then"},
  {"sexpr-isa-init-props", "sexpr-isa-init-props"},
  {"sexpr-if-then", "sexpr-if-then"},
  {"sexpr-fab-getter", "sexpr-fab-getter"},
  {"sexpr-make-application", "sexpr-make-application"},
  {"$sexpr-define-function-tag", "$sexpr-define-function-tag"},
  {"$sexpr-prop-tag", "$sexpr-prop-tag"},
  {"sexpr-function-definition-value", "sexpr-function-definition-value"},
  {"sexpr-function-signature", "sexpr-function-signature"},
  {"sexpr-syntax-if-pattern", "sexpr-syntax-if-pattern"},
  {"eval", "eval"},
  {"sexpr-if-test", "sexpr-if-test"},
  {"sexpr-prop-init", "sexpr-prop-init"},
  {"sexpr-def-value", "sexpr-def-value"},
  {"sexpr-def?", "sexpr-def?"},
  {"$sexpr-isa-tag", "$sexpr-isa-tag"},
  {"sexpr-loc-raw-body", "sexpr-loc-raw-body"},
  {"sexpr-bind-pattern-variables", "sexpr-bind-pattern-variables"},
  {"sexpr-function-definition-variable", "sexpr-function-definition-variable"},
  {"sexpr-definition-variable", "sexpr-definition-variable"},
  {"$sexpr-quote-tag", "$sexpr-quote-tag"},
  {"sexpr-if-else", "sexpr-if-else"},
  {"$sexpr-set-tag", "$sexpr-set-tag"},
  {"sexpr-define-class-parents", "sexpr-define-class-parents"},
  {"sexpr-make-begin", "sexpr-make-begin"},
  {"sexpr-syntax-definition-variable", "sexpr-syntax-definition-variable"},
  {"sexpr-unwind-protect-protected-form", "sexpr-unwind-protect-protected-form"},
  {"sexpr-monitor-expand", "sexpr-monitor-expand"},
  {"sexpr-prop-type", "sexpr-prop-type"},
  {"$sexpr-macro-expand-tag", "$sexpr-macro-expand-tag"},
  {"sexpr-isa-prop-inits", "sexpr-isa-prop-inits"},
  {"sexpr-prop-init?", "sexpr-prop-init?"},
  {"sexpr-method-body", "sexpr-method-body"},
  {"sexpr-unwind-protect-cleanup-forms", "sexpr-unwind-protect-cleanup-forms"},
  {"sexpr-block-body", "sexpr-block-body"},
  {"sexpr-let->combination", "sexpr-let->combination"},
  {"$sexpr-syntax-if-tag", "$sexpr-syntax-if-tag"},
  {"sexpr-fab-setter-name", "sexpr-fab-setter-name"},
  {"$sexpr-if-tag", "$sexpr-if-tag"},
  {"sexpr-isa-init-values", "sexpr-isa-init-values"},
  {"sexpr-variable-name", "sexpr-variable-name"},
  {"sexpr-variable?", "sexpr-variable?"},
  {"sexpr-make-anonymous-method", "sexpr-make-anonymous-method"},
  {"$sexpr-monitor-tag", "$sexpr-monitor-tag"},
  {"sexpr-make-macro-function", "sexpr-make-macro-function"},
  {"sexpr-unquote-splicing?", "sexpr-unquote-splicing?"},
  {"sexpr-prop-init-var", "sexpr-prop-init-var"},
  {"sexpr-syntax-if-value", "sexpr-syntax-if-value"},
  {"sexpr-method-signature", "sexpr-method-signature"},
  {"sexpr-syntax-definition-value", "sexpr-syntax-definition-value"},
  {"$sexpr-begin-tag", "$sexpr-begin-tag"},
  {"sexpr-unquote?", "sexpr-unquote?"},
  {"sexpr-text-of-quotation", "sexpr-text-of-quotation"},
  {"$sexpr-define-class-tag", "$sexpr-define-class-tag"},
  {"$sexpr-method-tag", "$sexpr-method-tag"},
  {"$sexpr-quasiquote-tag", "$sexpr-quasiquote-tag"},
  {"sexpr-def-variable", "sexpr-def-variable"},
  {"$sexpr-unwind-protect-tag", "$sexpr-unwind-protect-tag"},
  {"sexpr-loc-bound-signatures", "sexpr-loc-bound-signatures"},
  {"sexpr-assignment-variable", "sexpr-assignment-variable"},
  {"sexpr-function-body", "sexpr-function-body"},
  {"$sexpr-bind-exit-tag", "$sexpr-bind-exit-tag"},
  {"sexpr-fab-setter", "sexpr-fab-setter"},
  {"$sexpr-define-syntax-tag", "$sexpr-define-syntax-tag"},
  {"$sexpr-def-tag", "$sexpr-def-tag"},
  {"$sexpr-iterate-tag", "$sexpr-iterate-tag"},
  {"$sexpr-define-tag", "$sexpr-define-tag"},
  {"sexpr-variable-type", "sexpr-variable-type"},
  {"sexpr-define-class?", "sexpr-define-class?"},
  {"sexpr-signature-parameters", "sexpr-signature-parameters"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_x8rSsyntax;
MODULE_INFO module_info_x8rSsyntax = {
  "x8r/syntax",
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
extern void load_module_gooSmath (void);
extern void load_module_gooStypes (void);
extern void load_module_gooScols (void);

/* EXPRESSION: */

extern void load_module_x8rSsyntax (void);

void load_module_x8rSsyntax (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_gooSmath();
  load_module_gooStypes();
  load_module_gooScols();

  (P)Yx8rSsyntaxY___main_0___();
  (P)Yx8rSsyntaxY___main_1___();
  (P)Yx8rSsyntaxY___main_2___();

}

/* END OF GENERATED CODE. */
