/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: syntax */

EXT(YLnumG,"boot","<num>");
EXT(YLvecG,"boot","<vec>");
EXT(YprotoScollectionsScollectionYkey_type,"proto/collections/collection","key-type");
EXT(Yprop_getter,"boot","prop-getter");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YprotoScollectionsSassocYassocs_test_setter,"proto/collections/assoc","assocs-test-setter");
DEF(YsyntaxYsexpr_new_unique_name_counterX,"syntax","sexpr-new-unique-name-counter!");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
DEF(YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
DEF(YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
DEF(YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
DEF(YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
EXT(YprotoScollectionsSsequenceYdel_dups,"proto/collections/sequence","del-dups");
EXT(YprotoScollectionsScollectionYfinQ,"proto/collections/collection","fin?");
DEF(YsyntaxYsexpr_last_expQ,"syntax","sexpr-last-exp?");
EXT(Yunexec,"boot","unexec");
DEF(YsyntaxYTbq_clobberableT,"syntax","*bq-clobberable*");
EXT(Ytype_error,"boot","type-error");
DEF(YsyntaxYsexpr_pattern_variable_name,"syntax","sexpr-pattern-variable-name");
EXT(YprotoSmathYA,"proto/math","+");
EXT(Yclass_direct_props,"boot","class-direct-props");
EXT(YmacrosYgensym,"macros","gensym");
EXT(Yvec,"boot","vec");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YprotoScollectionsSsequenceYbelow,"proto/collections/sequence","below");
EXT(YprotoScollectionsSstringYnum_to_str_base,"proto/collections/string","num-to-str-base");
EXT(YLmetG,"boot","<met>");
DEF(YsyntaxYsexpr_begin_actions,"syntax","sexpr-begin-actions");
EXT(YprotoSmathYcontagious_call,"proto/math","contagious-call");
EXT(YprotoScollectionsScollectionYmap_keyed,"proto/collections/collection","map-keyed");
EXT(YprotoScollectionsSstringYTprint_baseT,"proto/collections/string","*print-base*");
EXT(YruntimeYloc_val_setter,"runtime","loc-val-setter");
EXT(YprotoScollectionsStableYtab_test,"proto/collections/table","tab-test");
DEF(YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
EXT(YprotoSmathYzeroQ,"proto/math","zero?");
DEF(YsyntaxYbracket,"syntax","bracket");
EXT(Yprop_init,"boot","prop-init");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
DEF(YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
EXT(YprotoSmathYroundS,"proto/math","round/");
DEF(YsyntaxYsexpr_make_syntax_if,"syntax","sexpr-make-syntax-if");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YprotoSmathYsin,"proto/math","sin");
DEF(YsyntaxYsexpr_propQ,"syntax","sexpr-prop?");
DEF(YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YprotoStypesYtA,"proto/types","t+");
EXT(YprotoSmathYeof_object,"proto/math","eof-object");
DEF(YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
DEF(YsyntaxYbq_remove_tokens,"syntax","bq-remove-tokens");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YprotoScollectionsScollectionYenum,"proto/collections/collection","enum");
EXT(YmacrosYvar_name,"macros","var-name");
DEF(YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
DEF(YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
EXT(Yclass_descendents,"boot","class-descendents");
EXT(YprotoScollectionsScollectionYelt_default,"proto/collections/collection","elt-default");
DEF(YsyntaxYas_signature,"syntax","as-signature");
EXT(YprotoScollectionsSbufferYbuf,"proto/collections/buffer","buf");
EXT(YprotoScollectionsScollectionYmap2,"proto/collections/collection","map2");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YprotoScollectionsSrangeYfrom,"proto/collections/range","from");
EXT(Ygen_refs_setter,"boot","gen-refs-setter");
DEF(YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
EXT(YprotoSmathYevenQ,"proto/math","even?");
DEF(YsyntaxYsexpr_monitor_expand,"syntax","sexpr-monitor-expand");
DEF(YsyntaxYsexpr_build_backquote_expander,"syntax","sexpr-build-backquote-expander");
DEF(YsyntaxYsexpr_isa_prop_inits,"syntax","sexpr-isa-prop-inits");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
DEF(YsyntaxYsexpr_first_operand,"syntax","sexpr-first-operand");
DEF(YsyntaxYsexpr_iterateQ,"syntax","sexpr-iterate?");
EXT(YLchrG,"boot","<chr>");
EXT(YprotoSmathYrem,"proto/math","rem");
EXT(YLflatG,"boot","<flat>");
EXT(YprotoScollectionsSsequenceYdel_vals,"proto/collections/sequence","del-vals");
EXT(YsubtypeQ,"boot","subtype?");
DEF(YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
EXT(Yprop_value_setter,"boot","prop-value-setter");
EXT(YprotoSmathYlog,"proto/math","log");
DEF(YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
EXT(YPdefine_method,"boot","%define-method");
EXT(Ygen_refs,"boot","gen-refs");
EXT(Ynot,"boot","not");
DEF(YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
EXT(YprotoSmathY_,"proto/math","-");
EXT(YprotoScollectionsScollectionYdo_keyed,"proto/collections/collection","do-keyed");
DEF(YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
EXT(YprotoScollectionsSsequenceYsub,"proto/collections/sequence","sub");
EXT(YprotoScollectionsSlistYassq,"proto/collections/list","assq");
DEF(YsyntaxYsexpr_let_namesAvalues,"syntax","sexpr-let-names+values");
DEF(YsyntaxYsexpr_def_value,"syntax","sexpr-def-value");
DEF(YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
EXT(YprotoScollectionsScollectionYdup,"proto/collections/collection","dup");
DEF(YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
EXT(YprotoScollectionsScollectionYelt_type,"proto/collections/collection","elt-type");
DEF(YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YprotoScollectionsSsequenceYrange_checkQ,"proto/collections/sequence","range-check?");
EXT(YprotoSmathYtanh,"proto/math","tanh");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YprotoScollectionsSsequenceYpos,"proto/collections/sequence","pos");
EXT(YprotoScollectionsScollectionYfold,"proto/collections/collection","fold");
EXT(YprotoSmathYB,"proto/math","&");
EXT(YprotoScollectionsStableYtab_shrink_threshold,"proto/collections/table","tab-shrink-threshold");
EXT(YprotoScollectionsScollectionYelts,"proto/collections/collection","elts");
DEF(YsyntaxYDsexpr_values_tag,"syntax","$sexpr-values-tag");
EXT(YLtupG,"boot","<tup>");
DEF(YsyntaxYsexpr_letQ,"syntax","sexpr-let?");
DEF(YsyntaxYsexpr_function_parameters,"syntax","sexpr-function-parameters");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YOlst,"boot","@lst");
DEF(YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
EXT(YPvnul,"boot","%vnul");
EXT(YprotoSmathYNEE,"proto/math","~==");
EXT(YprotoSmathYflo_bits,"proto/math","flo-bits");
DEF(YsyntaxYTbq_quoteT,"syntax","*bq-quote*");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYrcurry,"runtime","rcurry");
DEF(YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YmacrosYmap,"macros","map");
EXT(YprotoSmathYtruncS,"proto/math","trunc/");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YprotoScollectionsStableYcase_insensitive_string_equal,"proto/collections/table","case-insensitive-string-equal");
DEF(YsyntaxYsexpr_rest_operands,"syntax","sexpr-rest-operands");
DEF(YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
EXT(YprotoSmathYNE,"proto/math","~=");
EXT(YprotoStypesYtQ,"proto/types","t?");
DEF(YsyntaxYDsexpr_macro_tag,"syntax","$sexpr-macro-tag");
DEF(YsyntaxYsexpr_macro_expandQ,"syntax","sexpr-macro-expand?");
EXT(YprotoStypesYall2Q,"proto/types","all2?");
EXT(YprotoScollectionsSsequenceYreject,"proto/collections/sequence","reject");
DEF(YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
DEF(YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YprotoScollectionsSrangeYrange,"proto/collections/range","range");
EXT(Ysig_val,"boot","sig-val");
EXT(Yprop_boundQ,"boot","prop-bound?");
EXT(YLlstG,"boot","<lst>");
DEF(YsyntaxYsexpr_method_definitionQ,"syntax","sexpr-method-definition?");
EXT(YLlogG,"boot","<log>");
EXT(YprotoScollectionsSrangeYrange_by,"proto/collections/range","range-by");
DEF(YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
EXT(YprotoSmathYneg,"proto/math","neg");
EXT(YprotoSmathYK,"proto/math","|");
EXT(YprotoSmathYsqrt,"proto/math","sqrt");
EXT(Ytype_object,"boot","type-object");
EXT(Yfun_name_setter,"boot","fun-name-setter");
DEF(YsyntaxYbq_process,"syntax","bq-process");
DEF(YsyntaxYsexpr_blockQ,"syntax","sexpr-block?");
EXT(Yfab_class,"boot","fab-class");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YprotoSmathYT,"proto/math","*");
DEF(YsyntaxYsexpr_first_exp,"syntax","sexpr-first-exp");
EXT(YprotoSmathYround,"proto/math","round");
DEF(YsyntaxYDsexpr_def_tag,"syntax","$sexpr-def-tag");
EXT(YprotoSmathYlogn,"proto/math","logn");
DEF(YsyntaxYfind_option,"syntax","find-option");
DEF(YsyntaxYsexpr_beginQ,"syntax","sexpr-begin?");
EXT(Ysym_name,"boot","sym-name");
EXT(YprotoSmathYas_log,"proto/math","as-log");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YprotoSmathY1A,"proto/math","1+");
EXT(YprotoSmathYpow,"proto/math","pow");
DEF(YsyntaxYsexpr_locQ,"syntax","sexpr-loc?");
EXT(YprotoScollectionsSsequenceYrange_check,"proto/collections/sequence","range-check");
DEF(YsyntaxYsexpr_tagged_listQ,"syntax","sexpr-tagged-list?");
DEF(YsyntaxYsexpr_prop_init,"syntax","sexpr-prop-init");
EXT(YprotoScollectionsScollectionYfind,"proto/collections/collection","find");
DEF(YsyntaxYTbq_listT,"syntax","*bq-list*");
EXT(Yfun_name,"boot","fun-name");
DEF(YsyntaxYsexpr_pattern_variableQ,"syntax","sexpr-pattern-variable?");
DEF(YsyntaxYsexpr_methodQ,"syntax","sexpr-method?");
DEF(YsyntaxYsexpr_let_values,"syntax","sexpr-let-values");
DEF(YsyntaxYTbq_appendT,"syntax","*bq-append*");
EXT(YprotoSmathYdigitQ,"proto/math","digit?");
DEF(YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
DEF(YsyntaxYsexpr_syntax_ifQ,"syntax","sexpr-syntax-if?");
EXT(Yprop_owner,"boot","prop-owner");
EXT(YprotoScollectionsStableYtab_gc_state,"proto/collections/table","tab-gc-state");
DEF(YsyntaxYTunique_name_counterT,"syntax","*unique-name-counter*");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
DEF(YsyntaxYsexpr_method_parameters,"syntax","sexpr-method-parameters");
EXT(YprotoSmathYLbotG,"proto/math","<bot>");
DEF(YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
EXT(YprotoSmathYto_str,"proto/math","to-str");
EXT(YmacrosYfab_setter_name,"macros","fab-setter-name");
DEF(YsyntaxYsexpr_define_class_parents,"syntax","sexpr-define-class-parents");
EXT(YprotoStypesYtL,"proto/types","t<");
EXT(Yobject_class,"boot","object-class");
EXT(YprotoSmathYfloorS,"proto/math","floor/");
EXT(YprotoScollectionsSlistYpush,"proto/collections/list","push");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YprotoSmathYatan,"proto/math","atan");
EXT(Yclass_parents,"boot","class-parents");
DEF(YsyntaxYsexpr_monitor_info,"syntax","sexpr-monitor-info");
DEF(YsyntaxYLnameG,"syntax","<name>");
DEF(YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
EXT(YTreport_prop_unbound_errorsQT,"boot","*report-prop-unbound-errors?*");
EXT(YprotoScollectionsSsequenceYcat2,"proto/collections/sequence","cat2");
EXT(YprotoScollectionsSsequenceYpick,"proto/collections/sequence","pick");
DEF(YsyntaxYsexpr_atomQ,"syntax","sexpr-atom?");
EXT(Yprop_value,"boot","prop-value");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YprotoScollectionsStableYtab_growth_threshold,"proto/collections/table","tab-growth-threshold");
EXT(YprotoScollectionsSlistYLlistG,"proto/collections/list","<list>");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YprotoSmagnitudesYG,"proto/magnitudes",">");
EXT(Ymay_isaQ,"boot","may-isa?");
DEF(YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
EXT(YprotoSmathYchar_Gascii,"proto/math","char->ascii");
DEF(YsyntaxYsexpr_monitor_test,"syntax","sexpr-monitor-test");
DEF(YsyntaxYsexpr_let_body,"syntax","sexpr-let-body");
EXT(YLseqG,"boot","<seq>");
EXT(YLanyG,"boot","<any>");
EXT(Yprop_type,"boot","prop-type");
EXT(YprotoScollectionsScollectionYelt_setter,"proto/collections/collection","elt-setter");
DEF(YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
EXT(YruntimeYread,"runtime","read");
DEF(YsyntaxYsexpr_applicationQ,"syntax","sexpr-application?");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YprotoSmathYto_upper,"proto/math","to-upper");
EXT(YprotoStypesYanyQ,"proto/types","any?");
EXT(YprotoScollectionsSsequenceYcatX,"proto/collections/sequence","cat!");
DEF(YsyntaxYsexpr_definitionQ,"syntax","sexpr-definition?");
EXT(Yclass_props,"boot","class-props");
EXT(YprotoScollectionsScollectionYzap,"proto/collections/collection","zap");
DEF(YsyntaxYeval,"syntax","eval");
EXT(YprotoScollectionsSlistYassqn,"proto/collections/list","assqn");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YprotoScollectionsStableYcase_insensitive_string_hash,"proto/collections/table","case-insensitive-string-hash");
EXT(YprotoSmathYaddress_of,"proto/math","address-of");
EXT(YprotoScollectionsSmapYfab_map,"proto/collections/map","fab-map");
DEF(YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
EXT(YprotoStypesYtE,"proto/types","t=");
EXT(Yerror,"boot","error");
EXT(YprotoSmathYGGG,"proto/math",">>>");
EXT(YprotoSmagnitudesYL,"proto/magnitudes","<");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
DEF(YsyntaxYsexpr_iterate_signature,"syntax","sexpr-iterate-signature");
EXT(YprotoScollectionsStableYLstr_tabG,"proto/collections/table","<str-tab>");
DEF(YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
EXT(YLsigG,"boot","<sig>");
EXT(YPprop_unbound_error,"boot","%prop-unbound-error");
DEF(YsyntaxYsexpr_prop_type,"syntax","sexpr-prop-type");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YPsymbols,"boot","%symbols");
EXT(YprotoScollectionsScollectionYdo3,"proto/collections/collection","do3");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(Yhandler_info_message,"boot","handler-info-message");
DEF(YsyntaxYsexpr_rest_exps,"syntax","sexpr-rest-exps");
DEF(YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
EXT(YprotoScollectionsSbufferYlen_setter,"proto/collections/buffer","len-setter");
EXT(Yfun_names,"boot","fun-names");
DEF(YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
DEF(YsyntaxYsexpr_no_operandsQ,"syntax","sexpr-no-operands?");
EXT(YprotoScollectionsScollectionYas_copy,"proto/collections/collection","as-copy");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YOall2Q,"boot","@all2?");
EXT(YprotoScollectionsScollectionYadd,"proto/collections/collection","add");
EXT(YprotoSmathYtrunc,"proto/math","trunc");
DEF(YsyntaxYsexpr_self_evaluatingQ,"syntax","sexpr-self-evaluating?");
EXT(YprotoStypesY2nd,"proto/types","2nd");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YprotoSmathYE,"proto/math","=");
EXT(YprotoSmathYalphaQ,"proto/math","alpha?");
EXT(YprotoSmathYceil,"proto/math","ceil");
DEF(YsyntaxYsexpr_monitor_body,"syntax","sexpr-monitor-body");
DEF(YsyntaxYsexpr_function_value,"syntax","sexpr-function-value");
EXT(YLcolG,"boot","<col>");
EXT(YLclassG,"boot","<class>");
EXT(YruntimeYloc_val,"runtime","loc-val");
EXT(YprotoScollectionsScollectionYaddX,"proto/collections/collection","add!");
DEF(YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
EXT(YprotoScollectionsSsequenceYfinds,"proto/collections/sequence","finds");
EXT(YLmagG,"boot","<mag>");
EXT(YprotoSmathYto_lower,"proto/math","to-lower");
DEF(YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
EXT(YDmax_int,"boot","$max-int");
EXT(YprotoScollectionsScollectionYfind_or,"proto/collections/collection","find-or");
EXT(Yfind_setter,"boot","find-setter");
EXT(YprotoSmathYposQ,"proto/math","pos?");
DEF(YsyntaxYsexpr_prop_owner,"syntax","sexpr-prop-owner");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YprotoScollectionsStableYtab_shrink_threshold_setter,"proto/collections/table","tab-shrink-threshold-setter");
EXT(YprotoScollectionsScollectionYLtabG,"proto/collections/collection","<tab>");
DEF(YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YprotoStypesYLproductG,"proto/types","<product>");
EXT(YPsnul,"boot","%snul");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YprotoScollectionsSstringYstr,"proto/collections/string","str");
EXT(YprotoScollectionsSstringYascii_whitespaces,"proto/collections/string","ascii-whitespaces");
EXT(YprotoScollectionsScollectionYelt_or,"proto/collections/collection","elt-or");
EXT(YruntimeYformat,"runtime","format");
EXT(YmacrosYcat,"macros","cat");
EXT(YprotoSmathYbitQ,"proto/math","bit?");
EXT(YprotoSmathYcosh,"proto/math","cosh");
EXT(YprotoScollectionsScollectionYdel,"proto/collections/collection","del");
EXT(Yadd_prop,"boot","add-prop");
EXT(YprotoScollectionsStableYDpermanent_hash_state,"proto/collections/table","$permanent-hash-state");
EXT(YprotoStypesYlen,"proto/types","len");
EXT(YprotoStypesYtype_elts_setter,"proto/types","type-elts-setter");
DEF(YsyntaxYsexpr_generic_definitionQ,"syntax","sexpr-generic-definition?");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YLoptsG,"boot","<opts>");
EXT(YprotoScollectionsScollectionYLenumG,"proto/collections/collection","<enum>");
EXT(YprotoSmathYmod,"proto/math","mod");
DEF(YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
EXT(Ytail,"boot","tail");
DEF(YsyntaxYsexpr_syntax_definitionQ,"syntax","sexpr-syntax-definition?");
DEF(YsyntaxYsexpr_macroQ,"syntax","sexpr-macro?");
EXT(YprotoScollectionsScollectionYdo2,"proto/collections/collection","do2");
EXT(YprotoSmagnitudesYmax,"proto/magnitudes","max");
DEF(YsyntaxYsexpr_fab_setter,"syntax","sexpr-fab-setter");
EXT(YprotoSmathYacos,"proto/math","acos");
EXT(YprotoSmathYpower_of_two_ceiling,"proto/math","power-of-two-ceiling");
EXT(YLtypeG,"boot","<type>");
DEF(YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
EXT(YmacrosYnapp,"macros","napp");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YprotoScollectionsScollectionYlow_elt_setter,"proto/collections/collection","low-elt-setter");
DEF(YsyntaxYsexpr_make_method,"syntax","sexpr-make-method");
DEF(YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
DEF(YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
DEF(YsyntaxYsexpr_iterate_name,"syntax","sexpr-iterate-name");
DEF(YsyntaxYsexpr_iterate_inits,"syntax","sexpr-iterate-inits");
EXT(YLlocG,"boot","<loc>");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
DEF(YsyntaxYTcomma_atsignT,"syntax","*comma-atsign*");
EXT(Yord_app_mets,"boot","ord-app-mets");
EXT(YprotoScollectionsSbufferYLbufG,"proto/collections/buffer","<buf>");
EXT(YprotoScollectionsScollectionYfab,"proto/collections/collection","fab");
EXT(Ytype_elts,"boot","type-elts");
EXT(YprotoSmathYLL,"proto/math","<<");
DEF(YsyntaxYsexpr_assignmentQ,"syntax","sexpr-assignment?");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YprotoSmagnitudesYmin,"proto/magnitudes","min");
EXT(YprotoScollectionsStableYtab_growth_factor,"proto/collections/table","tab-growth-factor");
DEF(YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
EXT(YprotoScollectionsSsequenceYins,"proto/collections/sequence","ins");
EXT(YruntimeYalways,"runtime","always");
DEF(YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
EXT(YprotoScollectionsScollectionYfill,"proto/collections/collection","fill");
EXT(YprotoScollectionsSmapYLmapG,"proto/collections/map","<map>");
EXT(Yclass_name,"boot","class-name");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YprotoScollectionsStableYLsetG,"proto/collections/table","<set>");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YprotoSmathYsinh,"proto/math","sinh");
DEF(YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
EXT(YPPmacro,"boot","%%macro");
EXT(Yfind_getter,"boot","find-getter");
EXT(YruntimeYsig,"runtime","sig");
EXT(YprotoSmathYupperQ,"proto/math","upper?");
DEF(YsyntaxYsexpr_define_classQ,"syntax","sexpr-define-class?");
DEF(YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
DEF(YsyntaxYsexpr_operator,"syntax","sexpr-operator");
EXT(YprotoSmathYisqrt,"proto/math","isqrt");
DEF(YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
EXT(YprotoSmathY1_,"proto/math","1-");
EXT(YprotoSmathYDe,"proto/math","$e");
DEF(YsyntaxYsexpr_def_variable,"syntax","sexpr-def-variable");
EXT(YprotoSmathYeof_objectQ,"proto/math","eof-object?");
EXT(YprotoScollectionsScollectionYempty,"proto/collections/collection","empty");
DEF(YsyntaxYsexpr_operands,"syntax","sexpr-operands");
EXT(Yprop_setter,"boot","prop-setter");
EXT(Ynul,"boot","nul");
EXT(YprotoScollectionsSassocYassocs_test,"proto/collections/assoc","assocs-test");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
DEF(YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
EXT(YprotoScollectionsSsequenceYlast,"proto/collections/sequence","last");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YprotoScollectionsScollectionYitems,"proto/collections/collection","items");
EXT(YprotoScollectionsScollectionYnow,"proto/collections/collection","now");
EXT(YprotoScollectionsSbufferYlenSfill_setter,"proto/collections/buffer","len/fill-setter");
EXT(Yfun_val,"boot","fun-val");
DEF(YsyntaxYsexpr_prop_init_var,"syntax","sexpr-prop-init-var");
DEF(YsyntaxYsexpr_prop_name,"syntax","sexpr-prop-name");
EXT(Yclass_ancestors,"boot","class-ancestors");
DEF(YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
EXT(YprotoSmathYatan2,"proto/math","atan2");
EXT(YprotoScollectionsScollectionYlow_elt,"proto/collections/collection","low-elt");
DEF(YsyntaxYnreconc,"syntax","nreconc");
DEF(YsyntaxYsexpr_loc_body,"syntax","sexpr-loc-body");
EXT(YprotoScollectionsScollectionYinto,"proto/collections/collection","into");
DEF(YsyntaxYsexpr_make_if,"syntax","sexpr-make-if");
EXT(YprotoScollectionsSsequenceYrev,"proto/collections/sequence","rev");
EXT(YprotoSmathYnum_to_str,"proto/math","num-to-str");
DEF(YsyntaxYmap_tree,"syntax","map-tree");
DEF(YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
EXT(YDmin_int,"boot","$min-int");
DEF(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(YprotoScollectionsSstepYLstepG,"proto/collections/step","<step>");
DEF(YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
EXT(YruntimeYspread,"runtime","spread");
EXT(YprotoSmathYnegQ,"proto/math","neg?");
EXT(YprotoSmathYabs,"proto/math","abs");
EXT(YprotoSmathYfloor,"proto/math","floor");
EXT(YmacrosYpair,"macros","pair");
EXT(YprotoSmathYcontagious_type,"proto/math","contagious-type");
EXT(YLfloG,"boot","<flo>");
EXT(YLsymG,"boot","<sym>");
EXT(YprotoSmathYDpi,"proto/math","$pi");
EXT(YprotoScollectionsSsequenceYinsX,"proto/collections/sequence","ins!");
DEF(YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
EXT(YprotoScollectionsScollectionYallQ,"proto/collections/collection","all?");
EXT(YprotoSmagnitudesYGE,"proto/magnitudes",">=");
EXT(YprotoSmathYceilingS,"proto/math","ceiling/");
EXT(YprotoSmathYasin,"proto/math","asin");
EXT(YprotoScollectionsSstepYfirst_then,"proto/collections/step","first-then");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YmacrosYelt,"macros","elt");
EXT(YprotoStypesYas,"proto/types","as");
EXT(YprotoScollectionsSstringYascii_limit,"proto/collections/string","ascii-limit");
EXT(YprotoScollectionsScollectionYnow_setter,"proto/collections/collection","now-setter");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YprotoScollectionsSlistYlist,"proto/collections/list","list");
EXT(YprotoSmathYN,"proto/math","~");
DEF(YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
DEF(YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
EXT(YprotoScollectionsScollectionYnxt,"proto/collections/collection","nxt");
EXT(Ygen_src_setter,"boot","gen-src-setter");
EXT(YmacrosYdo,"macros","do");
EXT(YOisaQ,"boot","@isa?");
EXT(YprotoScollectionsSsequenceY3rd,"proto/collections/sequence","3rd");
EXT(YprotoScollectionsScollectionYkeys,"proto/collections/collection","keys");
DEF(YsyntaxYsexpr_backquoteQ,"syntax","sexpr-backquote?");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YprotoScollectionsScollectionYrange_error,"proto/collections/collection","range-error");
DEF(YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
DEF(YsyntaxYsexpr_fab_setter_name,"syntax","sexpr-fab-setter-name");
EXT(YLpropG,"boot","<prop>");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YprotoScollectionsStableYtab_growth_factor_setter,"proto/collections/table","tab-growth-factor-setter");
EXT(YprotoSmathYC,"proto/math","^");
EXT(YprotoScollectionsSsequenceYsub_setter,"proto/collections/sequence","sub-setter");
EXT(YprotoScollectionsSassocYLassocsG,"proto/collections/assoc","<assocs>");
EXT(YLgenG,"boot","<gen>");
DEF(YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(Ynil,"boot","nil");
DEF(YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
EXT(Ygen_src,"boot","gen-src");
EXT(Ynew,"boot","new");
DEF(YsyntaxYsexpr_unwind_protectQ,"syntax","sexpr-unwind-protect?");
EXT(YprotoScollectionsStableYtab_growth_threshold_setter,"proto/collections/table","tab-growth-threshold-setter");
DEF(YsyntaxYsexpr_make_quote,"syntax","sexpr-make-quote");
DEF(YsyntaxYsexpr_prop_initQ,"syntax","sexpr-prop-init?");
EXT(YprotoSmathYfabs,"proto/math","fabs");
DEF(YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
EXT(YprotoSmathYlowerQ,"proto/math","lower?");
DEF(YsyntaxYDsexpr_define_class_tag,"syntax","$sexpr-define-class-tag");
EXT(YprotoScollectionsScollectionYnow_key,"proto/collections/collection","now-key");
EXT(YprotoSmathYto_digit,"proto/math","to-digit");
DEF(YsyntaxYsexpr_function_definitionQ,"syntax","sexpr-function-definition?");
EXT(YprotoSmathYtan,"proto/math","tan");
EXT(Yobject_props,"boot","object-props");
DEF(YsyntaxYsexpr_quotedQ,"syntax","sexpr-quoted?");
DEF(YsyntaxYsexpr_method_value,"syntax","sexpr-method-value");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YruntimeYTgensym_counterT,"runtime","*gensym-counter*");
EXT(Ysig_naryQ,"boot","sig-nary?");
DEF(YsyntaxYsexpr_isa_init_props,"syntax","sexpr-isa-init-props");
EXT(YLintG,"boot","<int>");
EXT(YprotoScollectionsSrangeYLrangeG,"proto/collections/range","<range>");
EXT(YLstrG,"boot","<str>");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YprotoScollectionsStableYid_hash,"proto/collections/table","id-hash");
EXT(YPwith_monitor,"boot","%with-monitor");
DEF(YsyntaxYsexpr_fab_getter,"syntax","sexpr-fab-getter");
EXT(YprotoScollectionsSsequenceYdo_key_vals,"proto/collections/sequence","do-key-vals");
DEF(YsyntaxYsexpr_isaQ,"syntax","sexpr-isa?");
EXT(YprotoScollectionsSsequenceY1st,"proto/collections/sequence","1st");
EXT(YprotoScollectionsSlistYpop,"proto/collections/list","pop");
EXT(YprotoSmagnitudesYLE,"proto/magnitudes","<=");
DEF(YsyntaxYTbq_listTT,"syntax","*bq-list**");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YprotoSmathYGG,"proto/math",">>");
DEF(YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
EXT(YmacrosYcat_sym,"macros","cat-sym");
EXT(YprotoSmathYoddQ,"proto/math","odd?");
EXT(YmacrosYEE,"macros","==");
DEF(YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YruntimeYcurry,"runtime","curry");
DEF(YsyntaxYsexpr_unique_name,"syntax","sexpr-unique-name");
EXT(Ysig_names,"boot","sig-names");
EXT(YprotoScollectionsScollectionYmemQ,"proto/collections/collection","mem?");
EXT(YprotoScollectionsScollectionYkey_test,"proto/collections/collection","key-test");
DEF(YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
DEF(YsyntaxYsexpr_iterate_body,"syntax","sexpr-iterate-body");
EXT(YmacrosYrevX,"macros","rev!");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
DEF(YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
EXT(YprotoSmathYS,"proto/math","/");
EXT(YprotoScollectionsSsequenceYvals_to_str,"proto/collections/sequence","vals-to-str");
EXT(YprotoScollectionsScollectionYany2Q,"proto/collections/collection","any2?");
EXT(Yhead_setter,"boot","head-setter");
EXT(Ytype_class,"boot","type-class");
DEF(YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(Ylst,"boot","lst");
EXT(Ytup,"boot","tup");
DEF(YsyntaxYsexpr_let_bound_variables,"syntax","sexpr-let-bound-variables");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YisaQ,"boot","isa?");
EXT(YLunionG,"boot","<union>");
DEF(YsyntaxYsexpr_monitor_type,"syntax","sexpr-monitor-type");
DEF(YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
DEF(YsyntaxYsexpr_monitorQ,"syntax","sexpr-monitor?");
EXT(YPprop,"boot","%prop");
DEF(YsyntaxYsexpr_isa_parent,"syntax","sexpr-isa-parent");
EXT(YprotoSmathYcos,"proto/math","cos");
DEF(YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
DEF(YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
EXT(YprotoStypesYtT,"proto/types","t*");
EXT(YprotoScollectionsStableYtab_hash,"proto/collections/table","tab-hash");
EXT(YruntimeYfab_handler,"runtime","fab-handler");
EXT(YprotoScollectionsSbufferYpop_lastX,"proto/collections/buffer","pop-last!");
DEF(YsyntaxYsexpr_defQ,"syntax","sexpr-def?");
EXT(YPisa,"boot","%isa");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YprotoScollectionsScollectionYfoldA,"proto/collections/collection","fold+");
DEF(YsyntaxYTbq_nconcT,"syntax","*bq-nconc*");
EXT(YprotoScollectionsSbufferYpush_lastX,"proto/collections/buffer","push-last!");
DEF(YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
EXT(Yhead,"boot","head");
DEF(YsyntaxYDsexpr_prop_tag,"syntax","$sexpr-prop-tag");
EXT(YprotoScollectionsSstringYstr_to_num,"proto/collections/string","str-to-num");
DEF(YsyntaxYsexpr_ifQ,"syntax","sexpr-if?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_132);
DEFLIT(lit_139);
DEFLIT(lit_8);
DEFLIT(lit_154);
DEFLIT(lit_7);
DEFLIT(lit_243);
DEFLIT(lit_226);
DEFLIT(lit_194);
DEFLIT(lit_142);
DEFLIT(lit_28);
DEFLIT(lit_193);
DEFLIT(lit_91);
DEFLIT(lit_231);
DEFLIT(lit_33);
DEFLIT(lit_20);
DEFLIT(lit_46);
DEFLIT(lit_66);
DEFLIT(lit_203);
DEFLIT(lit_157);
DEFLIT(lit_56);
DEFLIT(lit_252);
DEFLIT(lit_64);
DEFLIT(lit_19);
DEFLIT(lit_179);
DEFLIT(lit_36);
DEFLIT(lit_61);
DEFLIT(lit_175);
DEFLIT(lit_129);
DEFLIT(lit_244);
DEFLIT(lit_161);
DEFLIT(lit_234);
DEFLIT(lit_199);
DEFLIT(lit_101);
DEFLIT(lit_200);
DEFLIT(lit_120);
DEFLIT(lit_62);
DEFLIT(lit_167);
DEFLIT(lit_119);
DEFLIT(lit_138);
DEFLIT(lit_125);
DEFLIT(lit_45);
DEFLIT(lit_208);
DEFLIT(lit_233);
DEFLIT(lit_220);
DEFLIT(lit_54);
DEFLIT(lit_223);
DEFLIT(lit_21);
DEFLIT(lit_37);
DEFLIT(lit_1);
DEFLIT(lit_25);
DEFLIT(lit_79);
DEFLIT(lit_114);
DEFLIT(lit_83);
DEFLIT(lit_60);
DEFLIT(lit_245);
DEFLIT(lit_212);
DEFLIT(lit_106);
DEFLIT(lit_40);
DEFLIT(lit_52);
DEFLIT(lit_109);
DEFLIT(lit_43);
DEFLIT(lit_39);
DEFLIT(lit_241);
DEFLIT(lit_67);
DEFLIT(lit_24);
DEFLIT(lit_74);
DEFLIT(lit_145);
DEFLIT(lit_230);
DEFLIT(lit_55);
DEFLIT(lit_178);
DEFLIT(lit_26);
DEFLIT(lit_35);
DEFLIT(lit_218);
DEFLIT(lit_44);
DEFLIT(lit_246);
DEFLIT(lit_166);
DEFLIT(lit_17);
DEFLIT(lit_162);
DEFLIT(lit_137);
DEFLIT(lit_102);
DEFLIT(lit_97);
DEFLIT(lit_92);
DEFLIT(lit_236);
DEFLIT(lit_222);
DEFLIT(lit_29);
DEFLIT(lit_149);
DEFLIT(lit_185);
DEFLIT(lit_80);
DEFLIT(lit_255);
DEFLIT(lit_150);
DEFLIT(lit_71);
DEFLIT(lit_225);
DEFLIT(lit_133);
DEFLIT(lit_214);
DEFLIT(lit_69);
DEFLIT(lit_57);
DEFLIT(lit_113);
DEFLIT(lit_168);
DEFLIT(lit_191);
DEFLIT(lit_146);
DEFLIT(lit_118);
DEFLIT(lit_2);
DEFLIT(lit_31);
DEFLIT(lit_14);
DEFLIT(lit_75);
DEFLIT(lit_238);
DEFLIT(lit_141);
DEFLIT(lit_81);
DEFLIT(lit_134);
DEFLIT(lit_143);
DEFLIT(lit_105);
DEFLIT(lit_11);
DEFLIT(lit_70);
DEFLIT(lit_173);
DEFLIT(lit_209);
DEFLIT(lit_239);
DEFLIT(lit_12);
DEFLIT(lit_103);
DEFLIT(lit_237);
DEFLIT(lit_93);
DEFLIT(lit_172);
DEFLIT(lit_58);
DEFLIT(lit_211);
DEFLIT(lit_87);
DEFLIT(lit_180);
DEFLIT(lit_115);
DEFLIT(lit_86);
DEFLIT(lit_170);
DEFLIT(lit_196);
DEFLIT(lit_128);
DEFLIT(lit_122);
DEFLIT(lit_140);
DEFLIT(lit_32);
DEFLIT(lit_228);
DEFLIT(lit_227);
DEFLIT(lit_144);
DEFLIT(lit_174);
DEFLIT(lit_4);
DEFLIT(lit_204);
DEFLIT(lit_126);
DEFLIT(lit_205);
DEFLIT(lit_171);
DEFLIT(lit_77);
DEFLIT(lit_152);
DEFLIT(lit_50);
DEFLIT(lit_127);
DEFLIT(lit_165);
DEFLIT(lit_108);
DEFLIT(lit_254);
DEFLIT(lit_38);
DEFLIT(lit_130);
DEFLIT(lit_135);
DEFLIT(lit_99);
DEFLIT(lit_9);
DEFLIT(lit_51);
DEFLIT(lit_249);
DEFLIT(lit_202);
DEFLIT(lit_207);
DEFLIT(lit_148);
DEFLIT(lit_182);
DEFLIT(lit_49);
DEFLIT(lit_217);
DEFLIT(lit_136);
DEFLIT(lit_85);
DEFLIT(lit_27);
DEFLIT(lit_253);
DEFLIT(lit_195);
DEFLIT(lit_41);
DEFLIT(lit_187);
DEFLIT(lit_3);
DEFLIT(lit_95);
DEFLIT(lit_131);
DEFLIT(lit_90);
DEFLIT(lit_197);
DEFLIT(lit_123);
DEFLIT(lit_121);
DEFLIT(lit_13);
DEFLIT(lit_96);
DEFLIT(lit_198);
DEFLIT(lit_221);
DEFLIT(lit_250);
DEFLIT(lit_34);
DEFLIT(lit_68);
DEFLIT(lit_215);
DEFLIT(lit_240);
DEFLIT(lit_181);
DEFLIT(lit_164);
DEFLIT(lit_63);
DEFLIT(lit_18);
DEFLIT(lit_147);
DEFLIT(lit_216);
DEFLIT(lit_153);
DEFLIT(lit_53);
DEFLIT(lit_5);
DEFLIT(lit_190);
DEFLIT(lit_94);
DEFLIT(lit_156);
DEFLIT(lit_76);
DEFLIT(lit_210);
DEFLIT(lit_48);
DEFLIT(lit_6);
DEFLIT(lit_47);
DEFLIT(lit_213);
DEFLIT(lit_151);
DEFLIT(lit_189);
DEFLIT(lit_22);
DEFLIT(lit_176);
DEFLIT(lit_73);
DEFLIT(lit_160);
DEFLIT(lit_117);
DEFLIT(lit_82);
DEFLIT(lit_15);
DEFLIT(lit_184);
DEFLIT(lit_247);
DEFLIT(lit_107);
DEFLIT(lit_188);
DEFLIT(lit_72);
DEFLIT(lit_116);
DEFLIT(lit_224);
DEFLIT(lit_186);
DEFLIT(lit_16);
DEFLIT(lit_23);
DEFLIT(lit_110);
DEFLIT(lit_84);
DEFLIT(lit_42);
DEFLIT(lit_98);
DEFLIT(lit_88);
DEFLIT(lit_163);
DEFLIT(lit_111);
DEFLIT(lit_242);
DEFLIT(lit_183);
DEFLIT(lit_100);
DEFLIT(lit_248);
DEFLIT(lit_0);
DEFLIT(lit_201);
DEFLIT(lit_65);
DEFLIT(lit_251);
DEFLIT(lit_59);
DEFLIT(lit_232);
DEFLIT(lit_124);
DEFLIT(lit_206);
DEFLIT(lit_155);
DEFLIT(lit_78);
DEFLIT(lit_192);
DEFLIT(lit_158);
DEFLIT(lit_177);
DEFLIT(lit_159);
DEFLIT(lit_219);
DEFLIT(lit_89);
DEFLIT(lit_104);
DEFLIT(lit_229);
DEFLIT(lit_10);
DEFLIT(lit_30);
DEFLIT(lit_235);
DEFLIT(lit_112);
DEFLIT(lit_169);

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
FUNFOR(YsyntaxYas_signature);
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
LOCFOR(fun_x_2403_51);
LOCFOR(fun_52);
LOCFOR(fun_sexpr_monitor_expand_53);
FUNFOR(YsyntaxYfind_option);
LOCFOR(fun_x_2405_55);
LOCFOR(fun_56);
LOCFOR(fun_sexpr_monitor_type_57);
LOCFOR(fun_x_2407_58);
LOCFOR(fun_59);
LOCFOR(fun_x_2409_60);
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
FUNFOR(YsyntaxYsexpr_expand_backquote);
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
extern P YsyntaxY___main_0___ ();
extern P YsyntaxY___main_1___ ();
extern P YsyntaxY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_sexpr_self_evaluatingQ_0) {
  P exp_;
  P tmpF5711;
  P tmpF5710;
  P tmpF5709;
  P tmpF5708;
  P tmpF5707;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLnumG));
  tmpF5707 = T1;
  if (tmpF5707 != YPfalse) {
    T2 = tmpF5707;
  } else {
    T4 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLchrG));
    tmpF5708 = T4;
    if (tmpF5708 != YPfalse) {
      T5 = tmpF5708;
    } else {
      T7 = CALL2(1,VARREF(YmacrosYEE),exp_,YPtrue);
      tmpF5709 = T7;
      if (tmpF5709 != YPfalse) {
        T8 = tmpF5709;
      } else {
        T10 = CALL2(1,VARREF(YmacrosYEE),exp_,YPfalse);
        tmpF5710 = T10;
        if (tmpF5710 != YPfalse) {
          T11 = tmpF5710;
        } else {
          T13 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLstrG));
          tmpF5711 = T13;
          if (tmpF5711 != YPfalse) {
            T14 = tmpF5711;
          } else {
            T15 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLvecG));
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
  P tmpF5712;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(tag_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLlstG));
  tmpF5712 = T1;
  if (tmpF5712 != YPfalse) {
    T4 = CALL1(1,VARREF(Yhead),exp_);
    T3 = CALL2(1,VARREF(YmacrosYEE),T4,tag_);
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_quote_tag));
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
  T0 = CALL2(1,VARREF(Ylst),VARREF(YsyntaxYDsexpr_quote_tag),exp_);
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
  T0 = CALL1(1,VARREF(YprotoStypesY2nd),quot_);
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_set_tag));
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
  T0 = CALL1(1,VARREF(YprotoStypesY2nd),assn_);
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
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY3rd),assn_);
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
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY1st),exp_);
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
  T0 = CALL1(1,VARREF(YprotoStypesY2nd),exp_);
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_define_tag));
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
  T0 = CALL1(1,VARREF(YprotoStypesY2nd),defn_);
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
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY3rd),defn_);
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_define_syntax_tag));
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
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY1st),T1);
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
  T2 = CALL1(1,VARREF(YprotoStypesY2nd),defn_);
  T4 = CALL1(1,VARREF(Ytail),defn_);
  T3 = CALL1(1,VARREF(Ytail),T4);
  T1 = CALL2(1,VARREF(YmacrosYpair),T2,T3);
  T0 = CALL2(1,VARREF(YmacrosYpair),VARREF(YsyntaxYDsexpr_macro_tag),T1);
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_define_function_tag));
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_define_method_tag));
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_define_generic_tag));
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
  T0 = CALL1(1,VARREF(YprotoStypesY2nd),defn_);
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
  T1 = CALL1(1,VARREF(YprotoStypesYlen),defn_);
  T0 = CALL2(1,VARREF(YprotoSmathYE),T1,YPint((P)2));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_signature_parameters_24) {
  P signature_;
  P values_spec_indexF5713;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(signature_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoScollectionsSsequenceYpos),signature_,LITREF(lit_39));
  values_spec_indexF5713 = T1;
  if (values_spec_indexF5713 != YPfalse) {
    T3 = CALL3(1,VARREF(YprotoScollectionsSsequenceYsub),signature_,YPint((P)0),values_spec_indexF5713);
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
  P valueF5716;
  P tmpF5715;
  P values_spec_indexF5714;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(signature_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoScollectionsSsequenceYpos),signature_,LITREF(lit_39));
  values_spec_indexF5714 = T1;
  tmpF5715 = values_spec_indexF5714;
  if (tmpF5715 != YPfalse) {
    T6 = CALL2(1,VARREF(YprotoSmathYA),values_spec_indexF5714,YPint((P)1));
    T5 = CALL2(1,VARREF(YmacrosYelt),signature_,T6);
    valueF5716 = T5;
    T8 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),valueF5716,LITREF(lit_41));
    if (T8 != YPfalse) {
      T7 = LITREF(lit_42);
    } else {
      T7 = valueF5716;
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

FUNCODEDEF(YsyntaxYas_signature) {
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
  T1 = CALL1(1,VARREF(YprotoScollectionsSsequenceY3rd),defn_);
  T0 = CALL1(1,VARREF(YsyntaxYas_signature),T1);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_function_signature),defn_);
  T0 = CALL1(1,VARREF(YsyntaxYsexpr_signature_parameters),T1);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_function_signature),defn_);
  T0 = CALL1(1,VARREF(YsyntaxYsexpr_signature_value),T1);
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
  T2 = CALL1(1,VARREF(YprotoScollectionsSsequenceY3rd),defn_);
  T5 = CALL1(1,VARREF(Ytail),defn_);
  T4 = CALL1(1,VARREF(Ytail),T5);
  T3 = CALL1(1,VARREF(Ytail),T4);
  T1 = CALL2(1,VARREF(YmacrosYpair),T2,T3);
  T0 = CALL2(1,VARREF(YmacrosYpair),VARREF(YsyntaxYDsexpr_method_tag),T1);
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_method_tag));
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
  T1 = CALL1(1,VARREF(YprotoStypesY2nd),method_exp_);
  T0 = CALL1(1,VARREF(YsyntaxYas_signature),T1);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_method_signature),method_exp_);
  T0 = CALL1(1,VARREF(YsyntaxYsexpr_signature_parameters),T1);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_method_signature),method_exp_);
  T0 = CALL1(1,VARREF(YsyntaxYsexpr_signature_value),T1);
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
  T1 = CALL1(1,VARREF(Ylst),VARREF(YsyntaxYDsexpr_method_tag));
  T2 = CALL1(1,VARREF(Ylst),parameters_);
  T0 = CALL3(1,VARREF(YmacrosYcat),T1,T2,body_);
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
  T1 = CALL3(1,VARREF(Ylst),VARREF(YsyntaxYDsexpr_define_method_tag),name_,parameters_);
  T0 = CALL2(1,VARREF(YmacrosYcat),T1,body_);
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_if_tag));
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
  T0 = CALL1(1,VARREF(YprotoStypesY2nd),exp_);
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
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY3rd),exp_);
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
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),T2);
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
  T0 = CALLN(1,VARREF(Ylst),4,VARREF(YsyntaxYDsexpr_if_tag),test_,then_,else_);
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_bind_exit_tag));
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
  T0 = CALL1(1,VARREF(YprotoStypesY2nd),exp_);
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_unwind_protect_tag));
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
  T0 = CALL1(1,VARREF(YprotoStypesY2nd),exp_);
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_monitor_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_2403_51) {
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
  P optionsF5726;
  P x_2402F5725;
  P x_2402F5724;
  P x_2402F5723;
  P x_2402F5722;
  P bodyF5721;
  P handlerF5720;
  P optionsF5719;
  P x_2402F5718;
  P x_2403F5717;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2403_51,2);
  x_2403F5717 = T1;
  FUNINIT(x_2403F5717, 2,return_,FREEREF(0));
  x_2402F5718 = FREEREF(0);
  optionsF5719 = YPfalse;
  optionsF5719 = BOXFAB(optionsF5719);
  handlerF5720 = YPfalse;
  handlerF5720 = BOXFAB(handlerF5720);
  bodyF5721 = YPfalse;
  bodyF5721 = BOXFAB(bodyF5721);
  T9 = CALL2(1,VARREF(YisaQ),x_2402F5718,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2402F5718,LITREF(lit_79),x_2403F5717);
    x_2402F5722 = T11;
    T13 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2402F5722,x_2403F5717);
    BOXVAL(optionsF5719) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_2402F5722);
    x_2402F5723 = T14;
    T16 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2402F5723,x_2403F5717);
    BOXVAL(handlerF5720) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_2402F5723);
    x_2402F5724 = T17;
    BOXVAL(bodyF5721) = x_2402F5724;
    x_2402F5725 = Ynil;
    T19 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2402F5725,x_2403F5717);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_2403F5717,LITREF(lit_87),x_2402F5718);
  }
  T24 = BOXVAL(optionsF5719);
  T23 = CALL2(1,VARREF(YisaQ),T24,VARREF(YLsymG));
  if (T23 != YPfalse) {
    T28 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
    T30 = BOXVAL(optionsF5719);
    T29 = CALL1(1,VARREF(Ylst),T30);
    T27 = CALL3(1,VARREF(YmacrosYcat),T28,T29,Ynil);
    T26 = CALL1(1,VARREF(Ylst),T27);
    T25 = CALL2(1,VARREF(YmacrosYcat),T26,Ynil);
    T22 = T25;
  } else {
    T31 = BOXVAL(optionsF5719);
    T22 = T31;
  }
  optionsF5726 = T22;
  T33 = CALL1(1,VARREF(YsyntaxYsexpr_monitor_type),optionsF5726);
  T34 = CALL1(1,VARREF(YsyntaxYsexpr_monitor_info),optionsF5726);
  T35 = CALL1(1,VARREF(YsyntaxYsexpr_monitor_test),optionsF5726);
  T36 = BOXVAL(handlerF5720);
  T38 = BOXVAL(bodyF5721);
  T37 = CALL1(1,VARREF(YsyntaxYsexpr_monitor_body),T38);
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

FUNCODEDEF(YsyntaxYfind_option) {
  P options_,option_,default_;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(options_, 0);
  ARG(option_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),options_);
  if (T1 != YPfalse) {
    T0 = default_;
  } else {
    T5 = CALL1(1,VARREF(YprotoScollectionsSsequenceY1st),options_);
    T4 = CALL1(1,VARREF(Yhead),T5);
    T3 = CALL2(1,VARREF(YmacrosYEE),option_,T4);
    if (T3 != YPfalse) {
      T7 = CALL1(1,VARREF(YprotoScollectionsSsequenceY1st),options_);
      T6 = CALL1(1,VARREF(Ytail),T7);
      T2 = T6;
    } else {
      if (YPtrue != YPfalse) {
        T10 = CALL1(1,VARREF(Ytail),options_);
        T9 = CALL3(1,VARREF(YsyntaxYfind_option),T10,option_,default_);
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

FUNCODEDEF(fun_x_2405_55) {
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
  P x_2404F5730;
  P typeF5729;
  P x_2404F5728;
  P x_2405F5727;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2405_55,2);
  x_2405F5727 = T1;
  FUNINIT(x_2405F5727, 2,return_,FREEREF(0));
  x_2404F5728 = FREEREF(0);
  typeF5729 = YPfalse;
  typeF5729 = BOXFAB(typeF5729);
  T5 = CALL2(1,VARREF(YisaQ),x_2404F5728,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2404F5728,x_2405F5727);
    BOXVAL(typeF5729) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2404F5728);
    x_2404F5730 = T8;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2404F5730,x_2405F5727);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_2405F5727,LITREF(lit_87),x_2404F5728);
  }
  T11 = BOXVAL(typeF5729);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_type_57) {
  P options_;
  P type_listF5731;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YsyntaxYfind_option),options_,LITREF(lit_88),LITREF(lit_94));
  type_listF5731 = T1;
  T3 = FUNFAB(fun_56,1,type_listF5731);
  T2 = with_exit(T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2407_58) {
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
  P x_2406F5735;
  P info_exprF5734;
  P x_2406F5733;
  P x_2407F5732;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2407_58,2);
  x_2407F5732 = T1;
  FUNINIT(x_2407F5732, 2,return_,FREEREF(0));
  x_2406F5733 = FREEREF(0);
  info_exprF5734 = YPfalse;
  info_exprF5734 = BOXFAB(info_exprF5734);
  T5 = CALL2(1,VARREF(YisaQ),x_2406F5733,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2406F5733,x_2407F5732);
    BOXVAL(info_exprF5734) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2406F5733);
    x_2406F5735 = T8;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2406F5735,x_2407F5732);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_2407F5732,LITREF(lit_87),x_2406F5733);
  }
  T11 = BOXVAL(info_exprF5734);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2409_60) {
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
  P x_2408F5741;
  P x_2408F5740;
  P argumentsF5739;
  P messageF5738;
  P x_2408F5737;
  P x_2409F5736;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2409_60,2);
  x_2409F5736 = T1;
  FUNINIT(x_2409F5736, 2,return_,FREEREF(0));
  x_2408F5737 = FREEREF(0);
  messageF5738 = YPfalse;
  messageF5738 = BOXFAB(messageF5738);
  argumentsF5739 = YPfalse;
  argumentsF5739 = BOXFAB(argumentsF5739);
  T7 = CALL2(1,VARREF(YisaQ),x_2408F5737,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2408F5737,x_2409F5736);
    BOXVAL(messageF5738) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_2408F5737);
    x_2408F5740 = T10;
    BOXVAL(argumentsF5739) = x_2408F5740;
    x_2408F5741 = Ynil;
    T12 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2408F5741,x_2409F5736);
    T11 = T12;
    T8 = T11;
  } else {
    T13 = CALL2(1,x_2409F5736,LITREF(lit_87),x_2408F5737);
  }
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_107));
  T19 = BOXVAL(messageF5738);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_108));
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_109));
  T24 = BOXVAL(argumentsF5739);
  T22 = CALL3(1,VARREF(YmacrosYcat),T23,T24,Ynil);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T14 = CALLN(1,VARREF(YmacrosYcat),7,T15,T16,T17,T18,T20,T21,Ynil);
  T5 = T14;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_info_62) {
  P options_;
  P tmpF5744;
  P descriptionF5743;
  P infoF5742;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YsyntaxYfind_option),options_,LITREF(lit_98),YPfalse);
  infoF5742 = T1;
  T3 = CALL3(1,VARREF(YsyntaxYfind_option),options_,LITREF(lit_99),YPfalse);
  descriptionF5743 = T3;
  tmpF5744 = infoF5742;
  if (tmpF5744 != YPfalse) {
    T6 = descriptionF5743;
  } else {
    T6 = YPfalse;
  }
  T5 = T6;
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(Yerror),LITREF(lit_100),options_);
    T4 = T7;
  } else {
    if (infoF5742 != YPfalse) {
      T10 = FUNFAB(fun_59,1,infoF5742);
      T9 = with_exit(T10);
      T8 = T9;
    } else {
      if (descriptionF5743 != YPfalse) {
        T13 = FUNFAB(fun_61,1,descriptionF5743);
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
  P test_bodyF5745;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YsyntaxYfind_option),options_,LITREF(lit_68),LITREF(lit_112));
  test_bodyF5745 = T1;
  T2 = CALL2(1,VARREF(YsyntaxYsexpr_make_anonymous_method),Ynil,test_bodyF5745);
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_make_anonymous_method),Ynil,body_);
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_begin_tag));
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
  T0 = CALL1(1,VARREF(YmacrosYemptyQ),T1);
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
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),seq_);
  if (T1 != YPfalse) {
    T0 = seq_;
  } else {
    T3 = CALL1(1,VARREF(YsyntaxYsexpr_last_expQ),seq_);
    if (T3 != YPfalse) {
      T4 = CALL1(1,VARREF(YsyntaxYsexpr_first_exp),seq_);
      T2 = T4;
    } else {
      T5 = CALL1(1,VARREF(YsyntaxYsexpr_make_begin),seq_);
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
  T0 = CALL2(1,VARREF(YmacrosYpair),VARREF(YsyntaxYDsexpr_begin_tag),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_applicationQ_72) {
  P exp_;
  P tmpF5746;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLlstG));
  tmpF5746 = T1;
  if (tmpF5746 != YPfalse) {
    T4 = CALL1(1,VARREF(YmacrosYemptyQ),exp_);
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
  T0 = CALL1(1,VARREF(YmacrosYemptyQ),args_);
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
  P op_,operands_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(op_, 0);
  ARG(operands_, 1);
loop:
  T1 = CALL1(1,VARREF(Ylst),op_);
  T0 = CALL2(1,VARREF(YmacrosYcat),T1,operands_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_new_unique_name_counterX_79) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YprotoSmathYA),VARREF(YsyntaxYTunique_name_counterT),YPint((P)1));
  VARSET(YsyntaxYTunique_name_counterT,T0);
UNLINK_STACK();
  RET(VARREF(YsyntaxYTunique_name_counterT));
}

FUNCODEDEF(fun_sexpr_unique_name_80) {
  P prefix_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(prefix_, 0);
loop:
  T2 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLstrG),prefix_);
  T4 = CALL0(1,VARREF(YsyntaxYsexpr_new_unique_name_counterX));
  T3 = CALL1(1,VARREF(YprotoSmathYnum_to_str),T4);
  T1 = CALL2(1,VARREF(YmacrosYcat),T2,T3);
  T0 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLsymG),T1);
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_def_tag));
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
  T0 = CALL1(1,VARREF(YprotoStypesY2nd),exp_);
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
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY3rd),exp_);
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_let_tag));
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
  T1 = CALL1(1,VARREF(YsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY1st),T1);
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
  T2 = CALL1(1,VARREF(YprotoStypesY2nd),let_exp_);
  T0 = CALL2(1,VARREF(YmacrosYmap),T1,T2);
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
  T1 = CALL1(1,VARREF(YsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YprotoStypesY2nd),T1);
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
  T2 = CALL1(1,VARREF(YprotoStypesY2nd),let_exp_);
  T0 = CALL2(1,VARREF(YmacrosYmap),T1,T2);
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
  T0 = CALL1(1,VARREF(YsyntaxYsexpr_sequence_Gbegin),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_90) {
  P rtnames_,rtvalues_,index_,tnames_;
  P tmpF5748;
  P nameF5747;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(rtnames_, 0);
  ARG(rtvalues_, 1);
  ARG(index_, 2);
  ARG(tnames_, 3);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),tnames_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ytup),rtnames_,rtvalues_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),tnames_);
    nameF5747 = T4;
    T7 = CALL2(1,VARREF(YisaQ),nameF5747,VARREF(YLlstG));
    tmpF5748 = T7;
    if (tmpF5748 != YPfalse) {
      T11 = CALL1(1,VARREF(Ytail),nameF5747);
      T10 = CALL1(1,VARREF(Yhead),T11);
      T9 = CALL2(1,VARREF(YmacrosYEE),T10,LITREF(lit_159));
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    if (T6 != YPfalse) {
      T15 = CALL1(1,VARREF(Yhead),nameF5747);
      T14 = CALL2(1,VARREF(Ylst),T15,LITREF(lit_160));
      T13 = CALL2(1,VARREF(YmacrosYpair),T14,rtnames_);
      T18 = CALL2(1,VARREF(Ylst),LITREF(lit_162),FREEREF(1));
      T17 = CALLN(1,VARREF(Ylst),4,LITREF(lit_161),FREEREF(1),index_,T18);
      T16 = CALL2(1,VARREF(YmacrosYpair),T17,rtvalues_);
      T19 = CALL2(1,VARREF(YprotoSmathYA),index_,YPint((P)1));
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
      T22 = CALL2(1,VARREF(YmacrosYpair),nameF5747,rtnames_);
      T24 = CALL3(1,VARREF(Ylst),LITREF(lit_163),FREEREF(1),index_);
      T23 = CALL2(1,VARREF(YmacrosYpair),T24,rtvalues_);
      T25 = CALL2(1,VARREF(YprotoSmathYA),index_,YPint((P)1));
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
  P rtvaluesF5756;
  P rtnamesF5755;
  P tup144F5754;
  P innerF5753;
  P tupnameF5752;
  P tmpF5751;
  P valueF5750;
  P nameF5749;
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
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YmacrosYrevX),rnames_);
    T4 = CALL1(1,VARREF(YmacrosYrevX),rvalues_);
    T2 = CALL2(1,VARREF(Ytup),T3,T4);
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),names_);
    nameF5749 = T6;
    T8 = CALL1(1,VARREF(Yhead),vals_);
    valueF5750 = T8;
    T11 = CALL2(1,VARREF(YisaQ),nameF5749,VARREF(YLlstG));
    tmpF5751 = T11;
    if (tmpF5751 != YPfalse) {
      T14 = CALL1(1,VARREF(Yhead),nameF5749);
      T13 = CALL2(1,VARREF(YmacrosYEE),T14,LITREF(lit_41));
      T12 = T13;
    } else {
      T12 = YPfalse;
    }
    T10 = T12;
    if (T10 != YPfalse) {
      T16 = CALL1(1,VARREF(YsyntaxYsexpr_unique_name),LITREF(lit_153));
      tupnameF5752 = T16;
      T19 = FUNSHELL(1,fun_inner_90,2);
      innerF5753 = T19;
      FUNINIT(innerF5753, 2,innerF5753,tupnameF5752);
      T21 = CALL1(1,VARREF(Ylst),tupnameF5752);
      T22 = CALL1(1,VARREF(Ylst),valueF5750);
      T23 = CALL1(1,VARREF(Ytail),nameF5749);
      T20 = CALLN(0,innerF5753,4,T21,T22,YPint((P)0),T23);
      T18 = T20;
      tup144F5754 = T18;
      T25 = CALL2(1,VARREF(YmacrosYelt),tup144F5754,YPint((P)0));
      rtnamesF5755 = T25;
      T27 = CALL2(1,VARREF(YmacrosYelt),tup144F5754,YPint((P)1));
      rtvaluesF5756 = T27;
      T29 = CALL2(1,VARREF(YmacrosYcat),rtnamesF5755,rnames_);
      T30 = CALL2(1,VARREF(YmacrosYcat),rtvaluesF5756,rvalues_);
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
      T34 = CALL2(1,VARREF(YmacrosYpair),nameF5749,rnames_);
      T35 = CALL2(1,VARREF(YmacrosYpair),valueF5750,rvalues_);
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
  P loopF5757;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(vals_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_91,1);
  loopF5757 = T1;
  FUNINIT(loopF5757, 1,loopF5757);
  T2 = CALLN(0,loopF5757,4,Ynil,Ynil,names_,vals_);
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
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T5 = CALL1(1,VARREF(Yhead),names_);
    T4 = CALL1(1,VARREF(Ylst),T5);
    T7 = CALL1(1,VARREF(Ytail),names_);
    T8 = CALL1(1,VARREF(Ytail),values_);
    T6 = CALL2(0,FREEREF(1),T7,T8);
    T3 = CALL3(1,VARREF(Ylst),VARREF(YsyntaxYDsexpr_method_tag),T4,T6);
    T10 = CALL1(1,VARREF(Yhead),values_);
    T9 = CALL1(1,VARREF(Ylst),T10);
    T2 = CALL2(1,VARREF(YmacrosYpair),T3,T9);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_let_Gcombination_94) {
  P let_exp_;
  P colF5764;
  P valuesF5763;
  P namesF5762;
  P tup145F5761;
  P bodyF5760;
  P ovaluesF5759;
  P onamesF5758;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_let_bound_variables),let_exp_);
  onamesF5758 = T1;
  T3 = CALL1(1,VARREF(YsyntaxYsexpr_let_values),let_exp_);
  ovaluesF5759 = T3;
  T5 = CALL1(1,VARREF(YsyntaxYsexpr_let_body),let_exp_);
  bodyF5760 = T5;
  T7 = CALL2(1,VARREF(YsyntaxYsexpr_let_namesAvalues),onamesF5758,ovaluesF5759);
  tup145F5761 = T7;
  T9 = CALL2(1,VARREF(YmacrosYelt),tup145F5761,YPint((P)0));
  namesF5762 = T9;
  T11 = CALL2(1,VARREF(YmacrosYelt),tup145F5761,YPint((P)1));
  valuesF5763 = T11;
  T13 = FUNSHELL(1,fun_col_93,2);
  colF5764 = T13;
  FUNINIT(colF5764, 2,bodyF5760,colF5764);
  T14 = CALL2(0,colF5764,namesF5762,valuesF5763);
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_locals_tag));
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
  T1 = CALL1(1,VARREF(YprotoStypesY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YmacrosYmap),VARREF(YprotoScollectionsSsequenceY1st),T1);
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
  T1 = CALL1(1,VARREF(YprotoStypesY2nd),x_);
  T0 = CALL1(1,VARREF(YsyntaxYas_signature),T1);
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
  T2 = CALL1(1,VARREF(YprotoStypesY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YmacrosYmap),T1,T2);
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
  T1 = CALL2(1,VARREF(YruntimeYcompose),VARREF(Ytail),VARREF(Ytail));
  T2 = CALL1(1,VARREF(YprotoStypesY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YmacrosYmap),T1,T2);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_loc_raw_body),loc_exp_);
  T0 = CALL1(1,VARREF(YsyntaxYsexpr_sequence_Gbegin),T1);
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_iterate_tag));
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
  T0 = CALL1(1,VARREF(YprotoStypesY2nd),rep_exp_);
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
  T1 = CALL1(1,VARREF(YsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_signature_105) {
  P rep_exp_;
  P sigF5765;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsSsequenceY3rd),rep_exp_);
  sigF5765 = T1;
  T4 = fun_104;
  T5 = CALL1(1,VARREF(YsyntaxYsexpr_signature_parameters),sigF5765);
  T3 = CALL2(1,VARREF(YmacrosYmap),T4,T5);
  T7 = CALL1(1,VARREF(YsyntaxYsexpr_signature_value),sigF5765);
  if (T7 != YPfalse) {
    T6 = Ynil;
  } else {
    T8 = CALL1(1,VARREF(Ylst),VARREF(YsyntaxYDsexpr_values_tag));
    T6 = T8;
  }
  T10 = CALL1(1,VARREF(YsyntaxYsexpr_signature_value),sigF5765);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T2 = CALL3(1,VARREF(YmacrosYcat),T3,T6,T9);
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
  T1 = CALL1(1,VARREF(YsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YprotoStypesY2nd),T1);
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
  T2 = CALL1(1,VARREF(YprotoScollectionsSsequenceY3rd),rep_exp_);
  T0 = CALL2(1,VARREF(YmacrosYmap),T1,T2);
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
  P initsF5769;
  P bodyF5768;
  P sigF5767;
  P nameF5766;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_iterate_name),rep_exp_);
  nameF5766 = T1;
  T3 = CALL1(1,VARREF(YsyntaxYsexpr_iterate_signature),rep_exp_);
  sigF5767 = T3;
  T5 = CALL1(1,VARREF(YsyntaxYsexpr_iterate_body),rep_exp_);
  bodyF5768 = T5;
  T7 = CALL1(1,VARREF(YsyntaxYsexpr_iterate_inits),rep_exp_);
  initsF5769 = T7;
  T11 = CALL2(1,VARREF(Ylst),nameF5766,sigF5767);
  T10 = CALL2(1,VARREF(YmacrosYcat),T11,bodyF5768);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T13 = CALL1(1,VARREF(Ylst),nameF5766);
  T12 = CALL2(1,VARREF(YmacrosYcat),T13,initsF5769);
  T8 = CALL3(1,VARREF(Ylst),VARREF(YsyntaxYDsexpr_locals_tag),T9,T12);
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_isa_tag));
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
  T0 = CALL1(1,VARREF(YprotoStypesY2nd),exp_);
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
  T0 = CALL2(1,VARREF(YmacrosYmap),VARREF(YprotoStypesY2nd),exp_);
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
  T0 = CALL2(1,VARREF(YmacrosYmap),VARREF(YprotoScollectionsSsequenceY3rd),exp_);
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_define_class_tag));
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
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY3rd),exp_);
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_prop_tag));
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
  T0 = CALL1(1,VARREF(YprotoStypesY2nd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_prop_owner_119) {
  P exp_;
  P paramF5770;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T2 = CALL1(1,VARREF(YsyntaxYsexpr_function_parameters),exp_);
  T1 = CALL1(1,VARREF(YprotoScollectionsSsequenceY1st),T2);
  paramF5770 = T1;
  T4 = CALL2(1,VARREF(YisaQ),paramF5770,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YprotoStypesY2nd),paramF5770);
    T3 = T5;
  } else {
    T3 = paramF5770;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_prop_init_var_120) {
  P exp_;
  P paramF5771;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T2 = CALL1(1,VARREF(YsyntaxYsexpr_function_parameters),exp_);
  T1 = CALL1(1,VARREF(YprotoScollectionsSsequenceY1st),T2);
  paramF5771 = T1;
  T4 = CALL2(1,VARREF(YisaQ),paramF5771,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YprotoScollectionsSsequenceY1st),paramF5771);
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
  T0 = CALL1(1,VARREF(YsyntaxYsexpr_function_value),exp_);
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
  T1 = CALL1(1,VARREF(YprotoStypesYlen),exp_);
  T0 = CALL2(1,VARREF(YprotoSmathYE),T1,YPint((P)4));
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
  T0 = CALL2(1,VARREF(YmacrosYelt),exp_,YPint((P)3));
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
  T0 = CALL3(1,VARREF(YsyntaxYsexpr_make_method),name_,T1,T3);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_fab_setter_name),name_);
  T3 = CALL2(1,VARREF(Ylst),LITREF(lit_205),prop_type_);
  T4 = CALL2(1,VARREF(Ylst),LITREF(lit_197),type_);
  T2 = CALL2(1,VARREF(Ylst),T3,T4);
  T6 = CALLN(1,VARREF(Ylst),4,LITREF(lit_206),LITREF(lit_205),LITREF(lit_197),name_);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T0 = CALL3(1,VARREF(YsyntaxYsexpr_make_method),T1,T2,T5);
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
  T2 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLstrG),name_);
  T1 = CALL2(1,VARREF(YmacrosYcat),T2,LITREF(lit_208));
  T0 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLsymG),T1);
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_macro_tag));
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_macro_expand_tag));
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
  T0 = CALLN(1,VARREF(Ylst),4,VARREF(YsyntaxYDsexpr_syntax_if_tag),T1,then_,else_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YsyntaxYsexpr_expand_backquote) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_build_backquote_expander),x_);
  T0 = CALL2(1,VARREF(YsyntaxYeval),T1,LITREF(lit_223));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_build_backquote_expander_131) {
  P x_;
  P resF5773;
  P raw_resultF5772;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYbq_process),x_);
  raw_resultF5772 = T1;
  T3 = CALL1(1,VARREF(YsyntaxYbq_remove_tokens),raw_resultF5772);
  resF5773 = T3;
  T2 = resF5773;
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),x_,LITREF(lit_226));
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),x_,LITREF(lit_228));
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),x_,VARREF(YsyntaxYDsexpr_quasiquote_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_atomQ_135) {
  P x_;
  P tmpF5774;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  T1 = CALL1(1,VARREF(Ynot),T2);
  tmpF5774 = T1;
  if (tmpF5774 != YPfalse) {
    T3 = tmpF5774;
  } else {
    T4 = CALL2(1,VARREF(YmacrosYEE),x_,Ynil);
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
  T1 = CALL1(1,VARREF(YmacrosYrevX),x_);
  T0 = CALL2(1,VARREF(YprotoScollectionsSsequenceYcatX),T1,y_);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_atomQ),p_);
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(Ylst),VARREF(YsyntaxYTbq_quoteT),p_);
    T5 = CALL1(1,VARREF(Ylst),T6);
    T4 = CALL2(1,VARREF(YsyntaxYnreconc),q_,T5);
    T3 = CALL2(1,VARREF(YmacrosYpair),VARREF(YsyntaxYTbq_appendT),T4);
    T2 = CALL1(1,FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(YsyntaxYsexpr_unquoteQ),p_);
    if (T7 != YPfalse) {
      T11 = CALL1(1,VARREF(Ytail),p_);
      T10 = CALL1(1,VARREF(Ytail),T11);
      T9 = CALL1(1,VARREF(YmacrosYemptyQ),T10);
      T8 = CALL1(1,VARREF(Ynot),T9);
      if (T8 != YPfalse) {
        T12 = CALL2(1,VARREF(Yerror),LITREF(lit_237),p_);
      } else {
      }
      T18 = CALL1(1,VARREF(Ytail),p_);
      T17 = CALL1(1,VARREF(Yhead),T18);
      T16 = CALL1(1,VARREF(Ylst),T17);
      T15 = CALL2(1,VARREF(YsyntaxYnreconc),q_,T16);
      T14 = CALL2(1,VARREF(YmacrosYpair),VARREF(YsyntaxYTbq_appendT),T15);
      T13 = CALL1(1,FREEREF(0),T14);
    } else {
    }
    T20 = CALL1(1,VARREF(Ytail),p_);
    T19 = CALL2(1,VARREF(YmacrosYEE),T20,VARREF(YsyntaxYTcomma_atsignT));
    if (T19 != YPfalse) {
      T21 = CALL2(1,VARREF(Yerror),LITREF(lit_238),p_);
    } else {
    }
    T23 = CALL1(1,VARREF(Ytail),p_);
    T26 = CALL1(1,VARREF(Yhead),p_);
    T25 = CALL1(1,VARREF(YsyntaxYbracket),T26);
    T24 = CALL2(1,VARREF(YmacrosYpair),T25,q_);
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
  P loopF5775;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_137,2);
  loopF5775 = T1;
  FUNINIT(loopF5775, 2,return_,loopF5775);
  T2 = CALL2(0,loopF5775,FREEREF(0),Ynil);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_atomQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),VARREF(YsyntaxYTbq_quoteT),x_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YsyntaxYsexpr_backquoteQ),x_);
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(Ytail),x_);
      T7 = CALL1(1,VARREF(Yhead),T8);
      T6 = CALL1(1,VARREF(YsyntaxYsexpr_build_backquote_expander),T7);
      T5 = CALL1(1,VARREF(YsyntaxYbq_process),T6);
      T3 = T5;
    } else {
      T10 = CALL1(1,VARREF(YsyntaxYsexpr_unquoteQ),x_);
      if (T10 != YPfalse) {
        T12 = CALL1(1,VARREF(Ytail),x_);
        T11 = CALL1(1,VARREF(Yhead),T12);
        T9 = T11;
      } else {
        T14 = CALL1(1,VARREF(YsyntaxYsexpr_unquote_splicingQ),x_);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_atomQ),x_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YsyntaxYbq_process),x_);
    T2 = CALL2(1,VARREF(Ylst),VARREF(YsyntaxYTbq_listT),T3);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YsyntaxYsexpr_unquoteQ),x_);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(Ytail),x_);
      T7 = CALL1(1,VARREF(Yhead),T8);
      T6 = CALL2(1,VARREF(Ylst),VARREF(YsyntaxYTbq_listT),T7);
      T4 = T6;
    } else {
      T10 = CALL1(1,VARREF(YsyntaxYsexpr_unquote_splicingQ),x_);
      if (T10 != YPfalse) {
        T13 = CALL1(1,VARREF(Ytail),x_);
        T12 = CALL1(1,VARREF(Yhead),T13);
        T11 = CALL2(1,VARREF(Ylst),VARREF(YsyntaxYTbq_clobberableT),T12);
        T9 = T11;
      } else {
        if (YPtrue != YPfalse) {
          T16 = CALL1(1,VARREF(YsyntaxYbq_process),x_);
          T15 = CALL2(1,VARREF(Ylst),VARREF(YsyntaxYTbq_listT),T16);
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
  P tmpF5778;
  P dF5777;
  P aF5776;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(fn_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_atomQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,fn_,x_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),x_);
    T4 = CALL1(1,fn_,T5);
    aF5776 = T4;
    T8 = CALL1(1,VARREF(Ytail),x_);
    T7 = CALL2(1,VARREF(YsyntaxYmap_tree),fn_,T8);
    dF5777 = T7;
    T12 = CALL1(1,VARREF(Yhead),x_);
    T11 = CALL2(1,VARREF(YprotoSmathYE),aF5776,T12);
    tmpF5778 = T11;
    if (tmpF5778 != YPfalse) {
      T15 = CALL1(1,VARREF(Ytail),x_);
      T14 = CALL2(1,VARREF(YprotoSmathYE),dF5777,T15);
      T13 = T14;
    } else {
      T13 = YPfalse;
    }
    T10 = T13;
    if (T10 != YPfalse) {
      T9 = x_;
    } else {
      T16 = CALL2(1,VARREF(YmacrosYpair),aF5776,dF5777);
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
  P tmpF5780;
  P tmpF5779;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YmacrosYEE),x_,VARREF(YsyntaxYTbq_listT));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_109);
  } else {
    T3 = CALL2(1,VARREF(YmacrosYEE),x_,VARREF(YsyntaxYTbq_appendT));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_243);
    } else {
      T5 = CALL2(1,VARREF(YmacrosYEE),x_,VARREF(YsyntaxYTbq_nconcT));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_244);
      } else {
        T7 = CALL2(1,VARREF(YmacrosYEE),x_,VARREF(YsyntaxYTbq_listTT));
        if (T7 != YPfalse) {
          T6 = LITREF(lit_245);
        } else {
          T9 = CALL2(1,VARREF(YmacrosYEE),x_,VARREF(YsyntaxYTbq_quoteT));
          if (T9 != YPfalse) {
            T8 = LITREF(lit_5);
          } else {
            T11 = CALL1(1,VARREF(YsyntaxYsexpr_atomQ),x_);
            if (T11 != YPfalse) {
              T10 = x_;
            } else {
              T14 = CALL1(1,VARREF(Yhead),x_);
              T13 = CALL2(1,VARREF(YmacrosYEE),T14,VARREF(YsyntaxYTbq_clobberableT));
              if (T13 != YPfalse) {
                T17 = CALL1(1,VARREF(Ytail),x_);
                T16 = CALL1(1,VARREF(Yhead),T17);
                T15 = CALL1(1,VARREF(YsyntaxYbq_remove_tokens),T16);
                T12 = T15;
              } else {
                T21 = CALL1(1,VARREF(Yhead),x_);
                T20 = CALL2(1,VARREF(YmacrosYEE),T21,VARREF(YsyntaxYTbq_listTT));
                tmpF5779 = T20;
                if (tmpF5779 != YPfalse) {
                  T27 = CALL1(1,VARREF(Ytail),x_);
                  T26 = CALL1(1,VARREF(Ytail),T27);
                  T25 = CALL1(1,VARREF(YmacrosYemptyQ),T26);
                  T24 = CALL1(1,VARREF(Ynot),T25);
                  tmpF5780 = T24;
                  if (tmpF5780 != YPfalse) {
                    T32 = CALL1(1,VARREF(Ytail),x_);
                    T31 = CALL1(1,VARREF(Ytail),T32);
                    T30 = CALL1(1,VARREF(Ytail),T31);
                    T29 = CALL1(1,VARREF(YmacrosYemptyQ),T30);
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
                  T34 = CALL2(1,VARREF(YsyntaxYmap_tree),VARREF(YsyntaxYbq_remove_tokens),T35);
                  T33 = CALL2(1,VARREF(YmacrosYpair),LITREF(lit_246),T34);
                  T18 = T33;
                } else {
                  if (YPtrue != YPfalse) {
                    T37 = CALL2(1,VARREF(YsyntaxYmap_tree),VARREF(YsyntaxYbq_remove_tokens),x_);
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
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_syntax_if_tag));
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
  T1 = CALL1(1,VARREF(YprotoStypesY2nd),exp_);
  T0 = CALL1(1,VARREF(YprotoStypesY2nd),T1);
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
  T1 = CALL1(1,VARREF(YprotoStypesY2nd),exp_);
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY1st),T1);
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
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY3rd),exp_);
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
  T0 = CALL3(1,VARREF(YprotoScollectionsScollectionYelt_or),exp_,YPint((P)3),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_pattern_variableQ_148) {
  P pat_;
  P tmpF5781;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_unquoteQ),pat_);
  tmpF5781 = T1;
  if (tmpF5781 != YPfalse) {
    T2 = tmpF5781;
  } else {
    T3 = CALL1(1,VARREF(YsyntaxYsexpr_unquote_splicingQ),pat_);
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
  T0 = CALL1(1,VARREF(YprotoStypesY2nd),pat_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_col_150) {
  P pat_;
  P xF5783;
  P tmpF5782;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T3 = CALL2(1,VARREF(YisaQ),pat_,VARREF(YLlstG));
  T2 = CALL1(1,VARREF(Ynot),T3);
  tmpF5782 = T2;
  if (tmpF5782 != YPfalse) {
    T4 = tmpF5782;
  } else {
    T5 = CALL1(1,VARREF(YmacrosYemptyQ),pat_);
    T4 = T5;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T7 = CALL1(1,VARREF(Yhead),pat_);
    xF5783 = T7;
    T9 = CALL1(1,VARREF(YsyntaxYsexpr_pattern_variableQ),xF5783);
    if (T9 != YPfalse) {
      T11 = CALL1(1,VARREF(YsyntaxYsexpr_pattern_variable_name),xF5783);
      T13 = CALL1(1,VARREF(Ytail),pat_);
      T12 = CALL1(0,FREEREF(0),T13);
      T10 = CALL2(1,VARREF(YmacrosYpair),T11,T12);
      T8 = T10;
    } else {
      T16 = CALL1(1,VARREF(Yhead),pat_);
      T15 = CALL1(0,FREEREF(0),T16);
      T18 = CALL1(1,VARREF(Ytail),pat_);
      T17 = CALL1(0,FREEREF(0),T18);
      T14 = CALL2(1,VARREF(YmacrosYcat),T15,T17);
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
  P colF5784;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T2 = FUNSHELL(1,fun_col_150,1);
  colF5784 = T2;
  FUNINIT(colF5784, 1,colF5784);
  T3 = CALL1(0,colF5784,pat_);
  T1 = T3;
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceYdel_dups),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_macro_function_152) {
  P exp_;
  P funcF5786;
  P mifF5785;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T2 = CALL1(1,VARREF(YsyntaxYsexpr_method_parameters),exp_);
  T4 = CALL1(1,VARREF(YsyntaxYsexpr_method_body),exp_);
  T3 = CALL1(1,VARREF(YsyntaxYsexpr_sequence_Gbegin),T4);
  T1 = CALLN(1,VARREF(YsyntaxYsexpr_make_syntax_if),4,T2,LITREF(lit_1),T3,YPfalse);
  mifF5785 = T1;
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_1));
  T8 = CALL1(1,VARREF(Ylst),mifF5785);
  T6 = CALL2(1,VARREF(YsyntaxYsexpr_make_anonymous_method),T7,T8);
  funcF5786 = T6;
  T5 = funcF5786;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

P YsyntaxY___main_0___() {
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
  T3 = BOUNDP(YsyntaxYsexpr_self_evaluatingQ);
  if (T3 != YPfalse) {
    T2 = VARREF(YsyntaxYsexpr_self_evaluatingQ);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_self_evaluatingQ_0;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YsyntaxYsexpr_self_evaluatingQ,T1);
  lit_2 = YPPsym((P)"sexpr-variable?");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_variableQ_1 = YPmet(FUNCODEREF(fun_sexpr_variableQ_1),LITREF(lit_2),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YsyntaxYsexpr_variableQ);
  if (T8 != YPfalse) {
    T7 = VARREF(YsyntaxYsexpr_variableQ);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_variableQ_1;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YsyntaxYsexpr_variableQ,T6);
  lit_3 = YPPsym((P)"sexpr-tagged-list?");
  lit_4 = YPPsym((P)"tag");
  T10 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_4)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_sexpr_tagged_listQ_2 = YPmet(FUNCODEREF(fun_sexpr_tagged_listQ_2),LITREF(lit_3),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YsyntaxYsexpr_tagged_listQ);
  if (T13 != YPfalse) {
    T12 = VARREF(YsyntaxYsexpr_tagged_listQ);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_sexpr_tagged_listQ_2;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YsyntaxYsexpr_tagged_listQ,T11);
  lit_5 = YPPsym((P)"quote");
  VARSET(YsyntaxYDsexpr_quote_tag,LITREF(lit_5));
  lit_6 = YPPsym((P)"sexpr-quoted?");
  T15 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_quotedQ_3 = YPmet(FUNCODEREF(fun_sexpr_quotedQ_3),LITREF(lit_6),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YsyntaxYsexpr_quotedQ);
  if (T18 != YPfalse) {
    T17 = VARREF(YsyntaxYsexpr_quotedQ);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_sexpr_quotedQ_3;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YsyntaxYsexpr_quotedQ,T16);
  lit_7 = YPPsym((P)"sexpr-make-quote");
  T20 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_make_quote_4 = YPmet(FUNCODEREF(fun_sexpr_make_quote_4),LITREF(lit_7),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YsyntaxYsexpr_make_quote);
  if (T23 != YPfalse) {
    T22 = VARREF(YsyntaxYsexpr_make_quote);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_sexpr_make_quote_4;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YsyntaxYsexpr_make_quote,T21);
  lit_8 = YPPsym((P)"sexpr-text-of-quotation");
  lit_9 = YPPsym((P)"quot");
  T25 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_text_of_quotation_5 = YPmet(FUNCODEREF(fun_sexpr_text_of_quotation_5),LITREF(lit_8),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YsyntaxYsexpr_text_of_quotation);
  if (T28 != YPfalse) {
    T27 = VARREF(YsyntaxYsexpr_text_of_quotation);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_sexpr_text_of_quotation_5;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YsyntaxYsexpr_text_of_quotation,T26);
  lit_10 = YPPsym((P)"set");
  VARSET(YsyntaxYDsexpr_set_tag,LITREF(lit_10));
  lit_11 = YPPsym((P)"sexpr-assignment?");
  T30 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_assignmentQ_6 = YPmet(FUNCODEREF(fun_sexpr_assignmentQ_6),LITREF(lit_11),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YsyntaxYsexpr_assignmentQ);
  if (T33 != YPfalse) {
    T32 = VARREF(YsyntaxYsexpr_assignmentQ);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_sexpr_assignmentQ_6;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YsyntaxYsexpr_assignmentQ,T31);
  lit_12 = YPPsym((P)"sexpr-assignment-variable");
  lit_13 = YPPsym((P)"assn");
  T35 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_assignment_variable_7 = YPmet(FUNCODEREF(fun_sexpr_assignment_variable_7),LITREF(lit_12),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YsyntaxYsexpr_assignment_variable);
  if (T38 != YPfalse) {
    T37 = VARREF(YsyntaxYsexpr_assignment_variable);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_sexpr_assignment_variable_7;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YsyntaxYsexpr_assignment_variable,T36);
  lit_14 = YPPsym((P)"sexpr-assignment-value");
  T40 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_assignment_value_8 = YPmet(FUNCODEREF(fun_sexpr_assignment_value_8),LITREF(lit_14),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YsyntaxYsexpr_assignment_value);
  if (T43 != YPfalse) {
    T42 = VARREF(YsyntaxYsexpr_assignment_value);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_sexpr_assignment_value_8;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YsyntaxYsexpr_assignment_value,T41);
  lit_15 = YPPsym((P)"sexpr-variable-name");
  T45 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_name_9 = YPmet(FUNCODEREF(fun_sexpr_variable_name_9),LITREF(lit_15),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YsyntaxYsexpr_variable_name);
  if (T48 != YPfalse) {
    T47 = VARREF(YsyntaxYsexpr_variable_name);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_sexpr_variable_name_9;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YsyntaxYsexpr_variable_name,T46);
  T50 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_name_10 = YPmet(FUNCODEREF(fun_sexpr_variable_name_10),LITREF(lit_15),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YsyntaxYsexpr_variable_name);
  if (T53 != YPfalse) {
    T52 = VARREF(YsyntaxYsexpr_variable_name);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_sexpr_variable_name_10;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YsyntaxYsexpr_variable_name,T51);
  lit_16 = YPPsym((P)"sexpr-variable-type");
  T55 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_type_11 = YPmet(FUNCODEREF(fun_sexpr_variable_type_11),LITREF(lit_16),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YsyntaxYsexpr_variable_type);
  if (T58 != YPfalse) {
    T57 = VARREF(YsyntaxYsexpr_variable_type);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_sexpr_variable_type_11;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YsyntaxYsexpr_variable_type,T56);
  lit_17 = YPPsym((P)"<any>");
  T60 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_type_12 = YPmet(FUNCODEREF(fun_sexpr_variable_type_12),LITREF(lit_16),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YsyntaxYsexpr_variable_type);
  if (T63 != YPfalse) {
    T62 = VARREF(YsyntaxYsexpr_variable_type);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_sexpr_variable_type_12;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YsyntaxYsexpr_variable_type,T61);
  lit_18 = YPPsym((P)"dv");
  VARSET(YsyntaxYDsexpr_define_tag,LITREF(lit_18));
  lit_19 = YPPsym((P)"sexpr-definition?");
  T65 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_definitionQ_13 = YPmet(FUNCODEREF(fun_sexpr_definitionQ_13),LITREF(lit_19),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YsyntaxYsexpr_definitionQ);
  if (T68 != YPfalse) {
    T67 = VARREF(YsyntaxYsexpr_definitionQ);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_sexpr_definitionQ_13;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YsyntaxYsexpr_definitionQ,T66);
  lit_20 = YPPsym((P)"quasiquote");
  VARSET(YsyntaxYDsexpr_quasiquote_tag,LITREF(lit_20));
  lit_21 = YPPsym((P)"sexpr-definition-variable");
  lit_22 = YPPsym((P)"defn");
  T70 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_definition_variable_14 = YPmet(FUNCODEREF(fun_sexpr_definition_variable_14),LITREF(lit_21),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YsyntaxYsexpr_definition_variable);
  if (T73 != YPfalse) {
    T72 = VARREF(YsyntaxYsexpr_definition_variable);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_sexpr_definition_variable_14;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YsyntaxYsexpr_definition_variable,T71);
  lit_23 = YPPsym((P)"sexpr-definition-value");
  T75 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_definition_value_15 = YPmet(FUNCODEREF(fun_sexpr_definition_value_15),LITREF(lit_23),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YsyntaxYsexpr_definition_value);
  if (T78 != YPfalse) {
    T77 = VARREF(YsyntaxYsexpr_definition_value);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_sexpr_definition_value_15;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YsyntaxYsexpr_definition_value,T76);
  lit_24 = YPPsym((P)"ds");
  VARSET(YsyntaxYDsexpr_define_syntax_tag,LITREF(lit_24));
  lit_25 = YPPsym((P)"sexpr-syntax-definition?");
  T80 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_syntax_definitionQ_16 = YPmet(FUNCODEREF(fun_sexpr_syntax_definitionQ_16),LITREF(lit_25),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YsyntaxYsexpr_syntax_definitionQ);
  if (T83 != YPfalse) {
    T82 = VARREF(YsyntaxYsexpr_syntax_definitionQ);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_sexpr_syntax_definitionQ_16;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YsyntaxYsexpr_syntax_definitionQ,T81);
  lit_26 = YPPsym((P)"mac");
  VARSET(YsyntaxYDsexpr_macro_tag,LITREF(lit_26));
  lit_27 = YPPsym((P)"sexpr-syntax-definition-variable");
  T85 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_definition_variable_17 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_variable_17),LITREF(lit_27),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YsyntaxYsexpr_syntax_definition_variable);
  if (T88 != YPfalse) {
    T87 = VARREF(YsyntaxYsexpr_syntax_definition_variable);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_sexpr_syntax_definition_variable_17;
  T86 = CALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YsyntaxYsexpr_syntax_definition_variable,T86);
  lit_28 = YPPsym((P)"sexpr-syntax-definition-value");
  T90 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_definition_value_18 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_value_18),LITREF(lit_28),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YsyntaxYsexpr_syntax_definition_value);
  if (T93 != YPfalse) {
    T92 = VARREF(YsyntaxYsexpr_syntax_definition_value);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_sexpr_syntax_definition_value_18;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YsyntaxYsexpr_syntax_definition_value,T91);
  lit_29 = YPPsym((P)"df");
  VARSET(YsyntaxYDsexpr_define_function_tag,LITREF(lit_29));
  lit_30 = YPPsym((P)"sexpr-function-definition?");
  T95 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_function_definitionQ_19 = YPmet(FUNCODEREF(fun_sexpr_function_definitionQ_19),LITREF(lit_30),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YsyntaxYsexpr_function_definitionQ);
  if (T98 != YPfalse) {
    T97 = VARREF(YsyntaxYsexpr_function_definitionQ);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_sexpr_function_definitionQ_19;
  T96 = CALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YsyntaxYsexpr_function_definitionQ,T96);
  lit_31 = YPPsym((P)"dm");
  VARSET(YsyntaxYDsexpr_define_method_tag,LITREF(lit_31));
  lit_32 = YPPsym((P)"sexpr-method-definition?");
  T100 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_method_definitionQ_20 = YPmet(FUNCODEREF(fun_sexpr_method_definitionQ_20),LITREF(lit_32),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YsyntaxYsexpr_method_definitionQ);
  if (T103 != YPfalse) {
    T102 = VARREF(YsyntaxYsexpr_method_definitionQ);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_sexpr_method_definitionQ_20;
  T101 = CALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YsyntaxYsexpr_method_definitionQ,T101);
  lit_33 = YPPsym((P)"dg");
  VARSET(YsyntaxYDsexpr_define_generic_tag,LITREF(lit_33));
  lit_34 = YPPsym((P)"sexpr-generic-definition?");
  T105 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_generic_definitionQ_21 = YPmet(FUNCODEREF(fun_sexpr_generic_definitionQ_21),LITREF(lit_34),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YsyntaxYsexpr_generic_definitionQ);
  if (T108 != YPfalse) {
    T107 = VARREF(YsyntaxYsexpr_generic_definitionQ);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_sexpr_generic_definitionQ_21;
  T106 = CALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YsyntaxYsexpr_generic_definitionQ,T106);
  lit_35 = YPPsym((P)"sexpr-function-definition-variable");
  T110 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_definition_variable_22 = YPmet(FUNCODEREF(fun_sexpr_function_definition_variable_22),LITREF(lit_35),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YsyntaxYsexpr_function_definition_variable);
  if (T113 != YPfalse) {
    T112 = VARREF(YsyntaxYsexpr_function_definition_variable);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_sexpr_function_definition_variable_22;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YsyntaxYsexpr_function_definition_variable,T111);
  lit_36 = YPPsym((P)"sexpr-forward-primitive?");
  T115 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_forward_primitiveQ_23 = YPmet(FUNCODEREF(fun_sexpr_forward_primitiveQ_23),LITREF(lit_36),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YsyntaxYsexpr_forward_primitiveQ);
  if (T118 != YPfalse) {
    T117 = VARREF(YsyntaxYsexpr_forward_primitiveQ);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_sexpr_forward_primitiveQ_23;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YsyntaxYsexpr_forward_primitiveQ,T116);
  lit_37 = YPPsym((P)"sexpr-signature-parameters");
  lit_38 = YPPsym((P)"signature");
  lit_39 = YPPsym((P)"=>");
  T120 = YPsig(YPPlist(1,LITREF(lit_38)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_signature_parameters_24 = YPmet(FUNCODEREF(fun_sexpr_signature_parameters_24),LITREF(lit_37),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YsyntaxYsexpr_signature_parameters);
  if (T123 != YPfalse) {
    T122 = VARREF(YsyntaxYsexpr_signature_parameters);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_sexpr_signature_parameters_24;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YsyntaxYsexpr_signature_parameters,T121);
  lit_40 = YPPsym((P)"sexpr-signature-value");
  lit_41 = YPPsym((P)"tup");
  lit_42 = YPPsym((P)"<tup>");
  T125 = YPsig(YPPlist(1,LITREF(lit_38)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_signature_value_25 = YPmet(FUNCODEREF(fun_sexpr_signature_value_25),LITREF(lit_40),T125,ENVNUL,PNUL,YPfalse);
  T128 = BOUNDP(YsyntaxYsexpr_signature_value);
  if (T128 != YPfalse) {
    T127 = VARREF(YsyntaxYsexpr_signature_value);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_sexpr_signature_value_25;
  T126 = CALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YsyntaxYsexpr_signature_value,T126);
  lit_43 = YPPsym((P)"as-signature");
  lit_44 = YPPsym((P)"sig");
  T130 = YPsig(YPPlist(1,LITREF(lit_44)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YsyntaxYas_signature = YPmet(FUNCODEREF(YsyntaxYas_signature),LITREF(lit_43),T130,ENVNUL,PNUL,YPfalse);
  T131 = YsyntaxYas_signature;
  VARSET(YsyntaxYas_signature,T131);
  lit_45 = YPPsym((P)"sexpr-function-signature");
  T132 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_function_signature_27 = YPmet(FUNCODEREF(fun_sexpr_function_signature_27),LITREF(lit_45),T132,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(YsyntaxYsexpr_function_signature);
  if (T135 != YPfalse) {
    T134 = VARREF(YsyntaxYsexpr_function_signature);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_sexpr_function_signature_27;
  T133 = CALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YsyntaxYsexpr_function_signature,T133);
  lit_46 = YPPsym((P)"sexpr-function-parameters");
  T137 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_function_parameters_28 = YPmet(FUNCODEREF(fun_sexpr_function_parameters_28),LITREF(lit_46),T137,ENVNUL,PNUL,YPfalse);
  T140 = BOUNDP(YsyntaxYsexpr_function_parameters);
  if (T140 != YPfalse) {
    T139 = VARREF(YsyntaxYsexpr_function_parameters);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_sexpr_function_parameters_28;
  T138 = CALL2(1,VARREF(YPdefine_method),T139,T141);
  VARSET(YsyntaxYsexpr_function_parameters,T138);
  lit_47 = YPPsym((P)"sexpr-function-value");
  T142 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_value_29 = YPmet(FUNCODEREF(fun_sexpr_function_value_29),LITREF(lit_47),T142,ENVNUL,PNUL,YPfalse);
  T145 = BOUNDP(YsyntaxYsexpr_function_value);
  if (T145 != YPfalse) {
    T144 = VARREF(YsyntaxYsexpr_function_value);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_sexpr_function_value_29;
  T143 = CALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YsyntaxYsexpr_function_value,T143);
  lit_48 = YPPsym((P)"sexpr-function-body");
  T147 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_body_30 = YPmet(FUNCODEREF(fun_sexpr_function_body_30),LITREF(lit_48),T147,ENVNUL,PNUL,YPfalse);
  T150 = BOUNDP(YsyntaxYsexpr_function_body);
  if (T150 != YPfalse) {
    T149 = VARREF(YsyntaxYsexpr_function_body);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_sexpr_function_body_30;
  T148 = CALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(YsyntaxYsexpr_function_body,T148);
  lit_49 = YPPsym((P)"fun");
  VARSET(YsyntaxYDsexpr_method_tag,LITREF(lit_49));
  lit_50 = YPPsym((P)"sexpr-function-definition-value");
  T152 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_definition_value_31 = YPmet(FUNCODEREF(fun_sexpr_function_definition_value_31),LITREF(lit_50),T152,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(YsyntaxYsexpr_function_definition_value);
  if (T155 != YPfalse) {
    T154 = VARREF(YsyntaxYsexpr_function_definition_value);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_sexpr_function_definition_value_31;
  T153 = CALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YsyntaxYsexpr_function_definition_value,T153);
  lit_51 = YPPsym((P)"sexpr-method?");
  T157 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_methodQ_32 = YPmet(FUNCODEREF(fun_sexpr_methodQ_32),LITREF(lit_51),T157,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(YsyntaxYsexpr_methodQ);
  if (T160 != YPfalse) {
    T159 = VARREF(YsyntaxYsexpr_methodQ);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_sexpr_methodQ_32;
  T158 = CALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(YsyntaxYsexpr_methodQ,T158);
  lit_52 = YPPsym((P)"sexpr-method-signature");
  lit_53 = YPPsym((P)"method-exp");
  T162 = YPsig(YPPlist(1,LITREF(lit_53)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_signature_33 = YPmet(FUNCODEREF(fun_sexpr_method_signature_33),LITREF(lit_52),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YsyntaxYsexpr_method_signature);
  if (T165 != YPfalse) {
    T164 = VARREF(YsyntaxYsexpr_method_signature);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_sexpr_method_signature_33;
  T163 = CALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YsyntaxYsexpr_method_signature,T163);
  lit_54 = YPPsym((P)"sexpr-method-parameters");
  T167 = YPsig(YPPlist(1,LITREF(lit_53)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_parameters_34 = YPmet(FUNCODEREF(fun_sexpr_method_parameters_34),LITREF(lit_54),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YsyntaxYsexpr_method_parameters);
  if (T170 != YPfalse) {
    T169 = VARREF(YsyntaxYsexpr_method_parameters);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_sexpr_method_parameters_34;
  T168 = CALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YsyntaxYsexpr_method_parameters,T168);
  lit_55 = YPPsym((P)"sexpr-method-value");
  T172 = YPsig(YPPlist(1,LITREF(lit_53)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_method_value_35 = YPmet(FUNCODEREF(fun_sexpr_method_value_35),LITREF(lit_55),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YsyntaxYsexpr_method_value);
  if (T175 != YPfalse) {
    T174 = VARREF(YsyntaxYsexpr_method_value);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_sexpr_method_value_35;
  T173 = CALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YsyntaxYsexpr_method_value,T173);
  lit_56 = YPPsym((P)"sexpr-method-body");
  T177 = YPsig(YPPlist(1,LITREF(lit_53)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_body_36 = YPmet(FUNCODEREF(fun_sexpr_method_body_36),LITREF(lit_56),T177,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(YsyntaxYsexpr_method_body);
  if (T180 != YPfalse) {
    T179 = VARREF(YsyntaxYsexpr_method_body);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_sexpr_method_body_36;
  T178 = CALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YsyntaxYsexpr_method_body,T178);
  lit_57 = YPPsym((P)"sexpr-make-anonymous-method");
  lit_58 = YPPsym((P)"parameters");
  lit_59 = YPPsym((P)"body");
  T182 = YPsig(YPPlist(2,LITREF(lit_58),LITREF(lit_59)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_make_anonymous_method_37 = YPmet(FUNCODEREF(fun_sexpr_make_anonymous_method_37),LITREF(lit_57),T182,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YsyntaxYsexpr_make_anonymous_method);
  if (T185 != YPfalse) {
    T184 = VARREF(YsyntaxYsexpr_make_anonymous_method);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_sexpr_make_anonymous_method_37;
  T183 = CALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YsyntaxYsexpr_make_anonymous_method,T183);
  lit_60 = YPPsym((P)"sexpr-make-method");
  lit_61 = YPPsym((P)"name");
  T187 = YPsig(YPPlist(3,LITREF(lit_61),LITREF(lit_58),LITREF(lit_59)),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_make_method_38 = YPmet(FUNCODEREF(fun_sexpr_make_method_38),LITREF(lit_60),T187,ENVNUL,PNUL,YPfalse);
  T190 = BOUNDP(YsyntaxYsexpr_make_method);
  if (T190 != YPfalse) {
    T189 = VARREF(YsyntaxYsexpr_make_method);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_sexpr_make_method_38;
  T188 = CALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YsyntaxYsexpr_make_method,T188);
  lit_62 = YPPsym((P)"if");
  VARSET(YsyntaxYDsexpr_if_tag,LITREF(lit_62));
  lit_63 = YPPsym((P)"sexpr-if?");
  T192 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_ifQ_39 = YPmet(FUNCODEREF(fun_sexpr_ifQ_39),LITREF(lit_63),T192,ENVNUL,PNUL,YPfalse);
  T195 = BOUNDP(YsyntaxYsexpr_ifQ);
  if (T195 != YPfalse) {
    T194 = VARREF(YsyntaxYsexpr_ifQ);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_sexpr_ifQ_39;
  T193 = CALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(YsyntaxYsexpr_ifQ,T193);
  lit_64 = YPPsym((P)"sexpr-if-test");
  T197 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_test_40 = YPmet(FUNCODEREF(fun_sexpr_if_test_40),LITREF(lit_64),T197,ENVNUL,PNUL,YPfalse);
  T200 = BOUNDP(YsyntaxYsexpr_if_test);
  if (T200 != YPfalse) {
    T199 = VARREF(YsyntaxYsexpr_if_test);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_sexpr_if_test_40;
  T198 = CALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(YsyntaxYsexpr_if_test,T198);
  lit_65 = YPPsym((P)"sexpr-if-then");
  T202 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_then_41 = YPmet(FUNCODEREF(fun_sexpr_if_then_41),LITREF(lit_65),T202,ENVNUL,PNUL,YPfalse);
  T205 = BOUNDP(YsyntaxYsexpr_if_then);
  if (T205 != YPfalse) {
    T204 = VARREF(YsyntaxYsexpr_if_then);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_sexpr_if_then_41;
  T203 = CALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(YsyntaxYsexpr_if_then,T203);
  lit_66 = YPPsym((P)"sexpr-if-else");
  T207 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_else_42 = YPmet(FUNCODEREF(fun_sexpr_if_else_42),LITREF(lit_66),T207,ENVNUL,PNUL,YPfalse);
  T210 = BOUNDP(YsyntaxYsexpr_if_else);
  if (T210 != YPfalse) {
    T209 = VARREF(YsyntaxYsexpr_if_else);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_sexpr_if_else_42;
  T208 = CALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(YsyntaxYsexpr_if_else,T208);
  lit_67 = YPPsym((P)"sexpr-make-if");
  lit_68 = YPPsym((P)"test");
  lit_69 = YPPsym((P)"then");
  lit_70 = YPPsym((P)"else");
  T212 = YPsig(YPPlist(3,LITREF(lit_68),LITREF(lit_69),LITREF(lit_70)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_make_if_43 = YPmet(FUNCODEREF(fun_sexpr_make_if_43),LITREF(lit_67),T212,ENVNUL,PNUL,YPfalse);
  T215 = BOUNDP(YsyntaxYsexpr_make_if);
  if (T215 != YPfalse) {
    T214 = VARREF(YsyntaxYsexpr_make_if);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_sexpr_make_if_43;
  T213 = CALL2(1,VARREF(YPdefine_method),T214,T216);
  VARSET(YsyntaxYsexpr_make_if,T213);
  lit_71 = YPPsym((P)"esc");
  VARSET(YsyntaxYDsexpr_bind_exit_tag,LITREF(lit_71));
  lit_72 = YPPsym((P)"sexpr-block?");
  T217 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_blockQ_44 = YPmet(FUNCODEREF(fun_sexpr_blockQ_44),LITREF(lit_72),T217,ENVNUL,PNUL,YPfalse);
  T220 = BOUNDP(YsyntaxYsexpr_blockQ);
  if (T220 != YPfalse) {
    T219 = VARREF(YsyntaxYsexpr_blockQ);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_sexpr_blockQ_44;
  T218 = CALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(YsyntaxYsexpr_blockQ,T218);
  lit_73 = YPPsym((P)"sexpr-block-name");
  T224 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T223 = fun_sexpr_block_name_45 = YPmet(FUNCODEREF(fun_sexpr_block_name_45),LITREF(lit_73),T224,ENVNUL,PNUL,YPfalse);
  T228 = BOUNDP(YsyntaxYsexpr_block_name);
  if (T228 != YPfalse) {
    T227 = VARREF(YsyntaxYsexpr_block_name);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_sexpr_block_name_45;
  T226 = CALL2(1,VARREF(YPdefine_method),T227,T229);
  T225 = VARSET(YsyntaxYsexpr_block_name,T226);
  T222 = T225;
  return T222;
}

P YsyntaxY___main_1___() {
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
  T3 = BOUNDP(YsyntaxYsexpr_block_body);
  if (T3 != YPfalse) {
    T2 = VARREF(YsyntaxYsexpr_block_body);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_block_body_46;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YsyntaxYsexpr_block_body,T1);
  lit_75 = YPPsym((P)"fin");
  VARSET(YsyntaxYDsexpr_unwind_protect_tag,LITREF(lit_75));
  lit_76 = YPPsym((P)"sexpr-unwind-protect?");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unwind_protectQ_47 = YPmet(FUNCODEREF(fun_sexpr_unwind_protectQ_47),LITREF(lit_76),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YsyntaxYsexpr_unwind_protectQ);
  if (T8 != YPfalse) {
    T7 = VARREF(YsyntaxYsexpr_unwind_protectQ);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_unwind_protectQ_47;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YsyntaxYsexpr_unwind_protectQ,T6);
  lit_77 = YPPsym((P)"sexpr-unwind-protect-protected-form");
  T10 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_unwind_protect_protected_form_48 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_protected_form_48),LITREF(lit_77),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YsyntaxYsexpr_unwind_protect_protected_form);
  if (T13 != YPfalse) {
    T12 = VARREF(YsyntaxYsexpr_unwind_protect_protected_form);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_sexpr_unwind_protect_protected_form_48;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YsyntaxYsexpr_unwind_protect_protected_form,T11);
  lit_78 = YPPsym((P)"sexpr-unwind-protect-cleanup-forms");
  T15 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_unwind_protect_cleanup_forms_49 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_cleanup_forms_49),LITREF(lit_78),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YsyntaxYsexpr_unwind_protect_cleanup_forms);
  if (T18 != YPfalse) {
    T17 = VARREF(YsyntaxYsexpr_unwind_protect_cleanup_forms);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_sexpr_unwind_protect_cleanup_forms_49;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YsyntaxYsexpr_unwind_protect_cleanup_forms,T16);
  lit_79 = YPPsym((P)"try");
  VARSET(YsyntaxYDsexpr_monitor_tag,LITREF(lit_79));
  lit_80 = YPPsym((P)"sexpr-monitor?");
  T20 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_monitorQ_50 = YPmet(FUNCODEREF(fun_sexpr_monitorQ_50),LITREF(lit_80),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YsyntaxYsexpr_monitorQ);
  if (T23 != YPfalse) {
    T22 = VARREF(YsyntaxYsexpr_monitorQ);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_sexpr_monitorQ_50;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YsyntaxYsexpr_monitorQ,T21);
  lit_81 = YPPsym((P)"sexpr-monitor-expand");
  lit_82 = YPPsym((P)"return");
  lit_83 = YPPsym((P)"x-2403");
  lit_84 = YPPsym((P)"msg");
  lit_85 = YPPsym((P)"args");
  lit_86 = YPsb((P)"Malformed TRY expression: ~=");
  lit_87 = YPsb((P)"Match Pattern Failure");
  lit_88 = YPPsym((P)"type");
  T27 = YPsig(YPPlist(2,LITREF(lit_84),LITREF(lit_85)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2403_51 = YPmet(FUNCODEREF(fun_x_2403_51),LITREF(lit_83),T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(YPPlist(1,LITREF(lit_82)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T26,ENVNUL,PNUL,YPfalse);
  T25 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_expand_53 = YPmet(FUNCODEREF(fun_sexpr_monitor_expand_53),LITREF(lit_81),T25,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YsyntaxYsexpr_monitor_expand);
  if (T30 != YPfalse) {
    T29 = VARREF(YsyntaxYsexpr_monitor_expand);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_sexpr_monitor_expand_53;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YsyntaxYsexpr_monitor_expand,T28);
  lit_89 = YPPsym((P)"find-option");
  lit_90 = YPPsym((P)"options");
  lit_91 = YPPsym((P)"option");
  lit_92 = YPPsym((P)"default");
  T32 = YPsig(YPPlist(3,LITREF(lit_90),LITREF(lit_91),LITREF(lit_92)),YPPlist(3,VARREF(YLlstG),VARREF(YLsymG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YsyntaxYfind_option = YPmet(FUNCODEREF(YsyntaxYfind_option),LITREF(lit_89),T32,ENVNUL,PNUL,YPfalse);
  T33 = YsyntaxYfind_option;
  VARSET(YsyntaxYfind_option,T33);
  lit_93 = YPPsym((P)"sexpr-monitor-type");
  lit_94 = YPPlist(1,YPPsym((P)"<condition>"));
  lit_95 = YPPsym((P)"x-2405");
  lit_96 = YPsb((P)"Malformed TRY condition type: %=");
  T36 = YPsig(YPPlist(2,LITREF(lit_84),LITREF(lit_85)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2405_55 = YPmet(FUNCODEREF(fun_x_2405_55),LITREF(lit_95),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(1,LITREF(lit_82)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T35,ENVNUL,PNUL,YPfalse);
  T34 = YPsig(YPPlist(1,LITREF(lit_90)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_type_57 = YPmet(FUNCODEREF(fun_sexpr_monitor_type_57),LITREF(lit_93),T34,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(YsyntaxYsexpr_monitor_type);
  if (T39 != YPfalse) {
    T38 = VARREF(YsyntaxYsexpr_monitor_type);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_sexpr_monitor_type_57;
  T37 = CALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YsyntaxYsexpr_monitor_type,T37);
  lit_97 = YPPsym((P)"sexpr-monitor-info");
  lit_98 = YPPsym((P)"info");
  lit_99 = YPPsym((P)"description");
  lit_100 = YPsb((P)"TRY may only have one of INFO or DESCRIPTION: %=");
  lit_101 = YPPsym((P)"x-2407");
  lit_102 = YPsb((P)"Malformed TRY info expression: %=");
  lit_103 = YPPsym((P)"x-2409");
  lit_104 = YPsb((P)"Malformed TRY description: %=");
  lit_105 = YPPsym((P)"new");
  lit_106 = YPPsym((P)"<simple-handler-info>");
  lit_107 = YPPsym((P)"handler-info-message");
  lit_108 = YPPsym((P)"handler-info-arguments");
  lit_109 = YPPsym((P)"lst");
  lit_110 = YPPsym((P)"$default-handler-info");
  T45 = YPsig(YPPlist(2,LITREF(lit_84),LITREF(lit_85)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2407_58 = YPmet(FUNCODEREF(fun_x_2407_58),LITREF(lit_101),T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(YPPlist(1,LITREF(lit_82)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T43 = YPsig(YPPlist(2,LITREF(lit_84),LITREF(lit_85)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2409_60 = YPmet(FUNCODEREF(fun_x_2409_60),LITREF(lit_103),T43,ENVNUL,PNUL,YPfalse);
  T42 = YPsig(YPPlist(1,LITREF(lit_82)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T42,ENVNUL,PNUL,YPfalse);
  T41 = YPsig(YPPlist(1,LITREF(lit_90)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_info_62 = YPmet(FUNCODEREF(fun_sexpr_monitor_info_62),LITREF(lit_97),T41,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YsyntaxYsexpr_monitor_info);
  if (T48 != YPfalse) {
    T47 = VARREF(YsyntaxYsexpr_monitor_info);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_sexpr_monitor_info_62;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YsyntaxYsexpr_monitor_info,T46);
  lit_111 = YPPsym((P)"sexpr-monitor-test");
  lit_112 = YPPlist(1,YPtrue);
  T50 = YPsig(YPPlist(1,LITREF(lit_90)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_monitor_test_63 = YPmet(FUNCODEREF(fun_sexpr_monitor_test_63),LITREF(lit_111),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YsyntaxYsexpr_monitor_test);
  if (T53 != YPfalse) {
    T52 = VARREF(YsyntaxYsexpr_monitor_test);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_sexpr_monitor_test_63;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YsyntaxYsexpr_monitor_test,T51);
  lit_113 = YPPsym((P)"sexpr-monitor-body");
  T55 = YPsig(YPPlist(1,LITREF(lit_59)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_monitor_body_64 = YPmet(FUNCODEREF(fun_sexpr_monitor_body_64),LITREF(lit_113),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YsyntaxYsexpr_monitor_body);
  if (T58 != YPfalse) {
    T57 = VARREF(YsyntaxYsexpr_monitor_body);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_sexpr_monitor_body_64;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YsyntaxYsexpr_monitor_body,T56);
  lit_114 = YPPsym((P)"seq");
  VARSET(YsyntaxYDsexpr_begin_tag,LITREF(lit_114));
  lit_115 = YPPsym((P)"sexpr-begin?");
  T60 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_beginQ_65 = YPmet(FUNCODEREF(fun_sexpr_beginQ_65),LITREF(lit_115),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YsyntaxYsexpr_beginQ);
  if (T63 != YPfalse) {
    T62 = VARREF(YsyntaxYsexpr_beginQ);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_sexpr_beginQ_65;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YsyntaxYsexpr_beginQ,T61);
  lit_116 = YPPsym((P)"sexpr-begin-actions");
  lit_117 = YPPsym((P)"begin-exp");
  T65 = YPsig(YPPlist(1,LITREF(lit_117)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_begin_actions_66 = YPmet(FUNCODEREF(fun_sexpr_begin_actions_66),LITREF(lit_116),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YsyntaxYsexpr_begin_actions);
  if (T68 != YPfalse) {
    T67 = VARREF(YsyntaxYsexpr_begin_actions);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_sexpr_begin_actions_66;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YsyntaxYsexpr_begin_actions,T66);
  lit_118 = YPPsym((P)"sexpr-last-exp?");
  T70 = YPsig(YPPlist(1,LITREF(lit_114)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_last_expQ_67 = YPmet(FUNCODEREF(fun_sexpr_last_expQ_67),LITREF(lit_118),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YsyntaxYsexpr_last_expQ);
  if (T73 != YPfalse) {
    T72 = VARREF(YsyntaxYsexpr_last_expQ);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_sexpr_last_expQ_67;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YsyntaxYsexpr_last_expQ,T71);
  lit_119 = YPPsym((P)"sexpr-first-exp");
  T75 = YPsig(YPPlist(1,LITREF(lit_114)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_first_exp_68 = YPmet(FUNCODEREF(fun_sexpr_first_exp_68),LITREF(lit_119),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YsyntaxYsexpr_first_exp);
  if (T78 != YPfalse) {
    T77 = VARREF(YsyntaxYsexpr_first_exp);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_sexpr_first_exp_68;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YsyntaxYsexpr_first_exp,T76);
  lit_120 = YPPsym((P)"sexpr-rest-exps");
  T80 = YPsig(YPPlist(1,LITREF(lit_114)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_rest_exps_69 = YPmet(FUNCODEREF(fun_sexpr_rest_exps_69),LITREF(lit_120),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YsyntaxYsexpr_rest_exps);
  if (T83 != YPfalse) {
    T82 = VARREF(YsyntaxYsexpr_rest_exps);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_sexpr_rest_exps_69;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YsyntaxYsexpr_rest_exps,T81);
  lit_121 = YPPsym((P)"sexpr-sequence->begin");
  T85 = YPsig(YPPlist(1,LITREF(lit_114)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_sequence_Gbegin_70 = YPmet(FUNCODEREF(fun_sexpr_sequence_Gbegin_70),LITREF(lit_121),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YsyntaxYsexpr_sequence_Gbegin);
  if (T88 != YPfalse) {
    T87 = VARREF(YsyntaxYsexpr_sequence_Gbegin);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_sexpr_sequence_Gbegin_70;
  T86 = CALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YsyntaxYsexpr_sequence_Gbegin,T86);
  lit_122 = YPPsym((P)"sexpr-make-begin");
  T90 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_make_begin_71 = YPmet(FUNCODEREF(fun_sexpr_make_begin_71),LITREF(lit_122),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YsyntaxYsexpr_make_begin);
  if (T93 != YPfalse) {
    T92 = VARREF(YsyntaxYsexpr_make_begin);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_sexpr_make_begin_71;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YsyntaxYsexpr_make_begin,T91);
  lit_123 = YPPsym((P)"sexpr-application?");
  T95 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_applicationQ_72 = YPmet(FUNCODEREF(fun_sexpr_applicationQ_72),LITREF(lit_123),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YsyntaxYsexpr_applicationQ);
  if (T98 != YPfalse) {
    T97 = VARREF(YsyntaxYsexpr_applicationQ);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_sexpr_applicationQ_72;
  T96 = CALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YsyntaxYsexpr_applicationQ,T96);
  lit_124 = YPPsym((P)"sexpr-operator");
  lit_125 = YPPsym((P)"app");
  T100 = YPsig(YPPlist(1,LITREF(lit_125)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_operator_73 = YPmet(FUNCODEREF(fun_sexpr_operator_73),LITREF(lit_124),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YsyntaxYsexpr_operator);
  if (T103 != YPfalse) {
    T102 = VARREF(YsyntaxYsexpr_operator);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_sexpr_operator_73;
  T101 = CALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YsyntaxYsexpr_operator,T101);
  lit_126 = YPPsym((P)"sexpr-operands");
  T105 = YPsig(YPPlist(1,LITREF(lit_125)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_operands_74 = YPmet(FUNCODEREF(fun_sexpr_operands_74),LITREF(lit_126),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YsyntaxYsexpr_operands);
  if (T108 != YPfalse) {
    T107 = VARREF(YsyntaxYsexpr_operands);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_sexpr_operands_74;
  T106 = CALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YsyntaxYsexpr_operands,T106);
  lit_127 = YPPsym((P)"sexpr-no-operands?");
  T110 = YPsig(YPPlist(1,LITREF(lit_85)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_no_operandsQ_75 = YPmet(FUNCODEREF(fun_sexpr_no_operandsQ_75),LITREF(lit_127),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YsyntaxYsexpr_no_operandsQ);
  if (T113 != YPfalse) {
    T112 = VARREF(YsyntaxYsexpr_no_operandsQ);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_sexpr_no_operandsQ_75;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YsyntaxYsexpr_no_operandsQ,T111);
  lit_128 = YPPsym((P)"sexpr-first-operand");
  T115 = YPsig(YPPlist(1,LITREF(lit_85)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_first_operand_76 = YPmet(FUNCODEREF(fun_sexpr_first_operand_76),LITREF(lit_128),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YsyntaxYsexpr_first_operand);
  if (T118 != YPfalse) {
    T117 = VARREF(YsyntaxYsexpr_first_operand);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_sexpr_first_operand_76;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YsyntaxYsexpr_first_operand,T116);
  lit_129 = YPPsym((P)"sexpr-rest-operands");
  T120 = YPsig(YPPlist(1,LITREF(lit_85)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_rest_operands_77 = YPmet(FUNCODEREF(fun_sexpr_rest_operands_77),LITREF(lit_129),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YsyntaxYsexpr_rest_operands);
  if (T123 != YPfalse) {
    T122 = VARREF(YsyntaxYsexpr_rest_operands);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_sexpr_rest_operands_77;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YsyntaxYsexpr_rest_operands,T121);
  lit_130 = YPPsym((P)"sexpr-make-application");
  lit_131 = YPPsym((P)"op");
  lit_132 = YPPsym((P)"operands");
  T125 = YPsig(YPPlist(2,LITREF(lit_131),LITREF(lit_132)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_make_application_78 = YPmet(FUNCODEREF(fun_sexpr_make_application_78),LITREF(lit_130),T125,ENVNUL,PNUL,YPfalse);
  T128 = BOUNDP(YsyntaxYsexpr_make_application);
  if (T128 != YPfalse) {
    T127 = VARREF(YsyntaxYsexpr_make_application);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_sexpr_make_application_78;
  T126 = CALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YsyntaxYsexpr_make_application,T126);
  VARSET(YsyntaxYTunique_name_counterT,YPint((P)0));
  lit_133 = YPPsym((P)"sexpr-new-unique-name-counter!");
  T130 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLintG),Ynil);
  fun_sexpr_new_unique_name_counterX_79 = YPmet(FUNCODEREF(fun_sexpr_new_unique_name_counterX_79),LITREF(lit_133),T130,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(YsyntaxYsexpr_new_unique_name_counterX);
  if (T133 != YPfalse) {
    T132 = VARREF(YsyntaxYsexpr_new_unique_name_counterX);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_sexpr_new_unique_name_counterX_79;
  T131 = CALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YsyntaxYsexpr_new_unique_name_counterX,T131);
  VARSET(YsyntaxYLnameG,VARREF(YLanyG));
  lit_134 = YPPsym((P)"sexpr-unique-name");
  lit_135 = YPPsym((P)"prefix");
  T135 = YPsig(YPPlist(1,LITREF(lit_135)),YPPlist(1,VARREF(YsyntaxYLnameG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_unique_name_80 = YPmet(FUNCODEREF(fun_sexpr_unique_name_80),LITREF(lit_134),T135,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(YsyntaxYsexpr_unique_name);
  if (T138 != YPfalse) {
    T137 = VARREF(YsyntaxYsexpr_unique_name);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_sexpr_unique_name_80;
  T136 = CALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YsyntaxYsexpr_unique_name,T136);
  lit_136 = YPPsym((P)"def");
  VARSET(YsyntaxYDsexpr_def_tag,LITREF(lit_136));
  lit_137 = YPPsym((P)"sexpr-def?");
  T140 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_defQ_81 = YPmet(FUNCODEREF(fun_sexpr_defQ_81),LITREF(lit_137),T140,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(YsyntaxYsexpr_defQ);
  if (T143 != YPfalse) {
    T142 = VARREF(YsyntaxYsexpr_defQ);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_sexpr_defQ_81;
  T141 = CALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YsyntaxYsexpr_defQ,T141);
  lit_138 = YPPsym((P)"sexpr-def-variable");
  T145 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_def_variable_82 = YPmet(FUNCODEREF(fun_sexpr_def_variable_82),LITREF(lit_138),T145,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YsyntaxYsexpr_def_variable);
  if (T148 != YPfalse) {
    T147 = VARREF(YsyntaxYsexpr_def_variable);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_sexpr_def_variable_82;
  T146 = CALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YsyntaxYsexpr_def_variable,T146);
  lit_139 = YPPsym((P)"sexpr-def-value");
  T150 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_def_value_83 = YPmet(FUNCODEREF(fun_sexpr_def_value_83),LITREF(lit_139),T150,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(YsyntaxYsexpr_def_value);
  if (T153 != YPfalse) {
    T152 = VARREF(YsyntaxYsexpr_def_value);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_sexpr_def_value_83;
  T151 = CALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YsyntaxYsexpr_def_value,T151);
  lit_140 = YPPsym((P)"let");
  VARSET(YsyntaxYDsexpr_let_tag,LITREF(lit_140));
  lit_141 = YPPsym((P)"sexpr-let?");
  T155 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_letQ_84 = YPmet(FUNCODEREF(fun_sexpr_letQ_84),LITREF(lit_141),T155,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YsyntaxYsexpr_letQ);
  if (T158 != YPfalse) {
    T157 = VARREF(YsyntaxYsexpr_letQ);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_sexpr_letQ_84;
  T156 = CALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YsyntaxYsexpr_letQ,T156);
  lit_142 = YPPsym((P)"sexpr-let-bound-variables");
  lit_143 = YPPsym((P)"let-exp");
  lit_144 = YPPsym((P)"x");
  T161 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(1,LITREF(lit_143)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_let_bound_variables_86 = YPmet(FUNCODEREF(fun_sexpr_let_bound_variables_86),LITREF(lit_142),T160,ENVNUL,PNUL,YPfalse);
  T164 = BOUNDP(YsyntaxYsexpr_let_bound_variables);
  if (T164 != YPfalse) {
    T163 = VARREF(YsyntaxYsexpr_let_bound_variables);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_sexpr_let_bound_variables_86;
  T162 = CALL2(1,VARREF(YPdefine_method),T163,T165);
  VARSET(YsyntaxYsexpr_let_bound_variables,T162);
  lit_145 = YPPsym((P)"sexpr-let-values");
  T167 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(YPPlist(1,LITREF(lit_143)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_let_values_88 = YPmet(FUNCODEREF(fun_sexpr_let_values_88),LITREF(lit_145),T166,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YsyntaxYsexpr_let_values);
  if (T170 != YPfalse) {
    T169 = VARREF(YsyntaxYsexpr_let_values);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_sexpr_let_values_88;
  T168 = CALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YsyntaxYsexpr_let_values,T168);
  lit_146 = YPPsym((P)"sexpr-let-body");
  T172 = YPsig(YPPlist(1,LITREF(lit_143)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_let_body_89 = YPmet(FUNCODEREF(fun_sexpr_let_body_89),LITREF(lit_146),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YsyntaxYsexpr_let_body);
  if (T175 != YPfalse) {
    T174 = VARREF(YsyntaxYsexpr_let_body);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_sexpr_let_body_89;
  T173 = CALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YsyntaxYsexpr_let_body,T173);
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
  T182 = BOUNDP(YsyntaxYsexpr_let_namesAvalues);
  if (T182 != YPfalse) {
    T181 = VARREF(YsyntaxYsexpr_let_namesAvalues);
  } else {
    T181 = YPfalse;
  }
  T183 = fun_sexpr_let_namesAvalues_92;
  T180 = CALL2(1,VARREF(YPdefine_method),T181,T183);
  VARSET(YsyntaxYsexpr_let_namesAvalues,T180);
  lit_164 = YPPsym((P)"sexpr-let->combination");
  lit_165 = YPPsym((P)"col");
  lit_166 = YPPsym((P)"values");
  T185 = YPsig(YPPlist(2,LITREF(lit_148),LITREF(lit_166)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_col_93 = YPmet(FUNCODEREF(fun_col_93),LITREF(lit_165),T185,ENVNUL,PNUL,YPfalse);
  T184 = YPsig(YPPlist(1,LITREF(lit_143)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_let_Gcombination_94 = YPmet(FUNCODEREF(fun_sexpr_let_Gcombination_94),LITREF(lit_164),T184,ENVNUL,PNUL,YPfalse);
  T188 = BOUNDP(YsyntaxYsexpr_let_Gcombination);
  if (T188 != YPfalse) {
    T187 = VARREF(YsyntaxYsexpr_let_Gcombination);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_sexpr_let_Gcombination_94;
  T186 = CALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(YsyntaxYsexpr_let_Gcombination,T186);
  lit_167 = YPPsym((P)"loc");
  VARSET(YsyntaxYDsexpr_locals_tag,LITREF(lit_167));
  lit_168 = YPPsym((P)"sexpr-loc?");
  T190 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_locQ_95 = YPmet(FUNCODEREF(fun_sexpr_locQ_95),LITREF(lit_168),T190,ENVNUL,PNUL,YPfalse);
  T193 = BOUNDP(YsyntaxYsexpr_locQ);
  if (T193 != YPfalse) {
    T192 = VARREF(YsyntaxYsexpr_locQ);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_sexpr_locQ_95;
  T191 = CALL2(1,VARREF(YPdefine_method),T192,T194);
  VARSET(YsyntaxYsexpr_locQ,T191);
  lit_169 = YPPsym((P)"sexpr-loc-bound-names");
  lit_170 = YPPsym((P)"loc-exp");
  T195 = YPsig(YPPlist(1,LITREF(lit_170)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_names_96 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_names_96),LITREF(lit_169),T195,ENVNUL,PNUL,YPfalse);
  T198 = BOUNDP(YsyntaxYsexpr_loc_bound_names);
  if (T198 != YPfalse) {
    T197 = VARREF(YsyntaxYsexpr_loc_bound_names);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_sexpr_loc_bound_names_96;
  T196 = CALL2(1,VARREF(YPdefine_method),T197,T199);
  VARSET(YsyntaxYsexpr_loc_bound_names,T196);
  lit_171 = YPPsym((P)"sexpr-loc-bound-signatures");
  T201 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T201,ENVNUL,PNUL,YPfalse);
  T200 = YPsig(YPPlist(1,LITREF(lit_170)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_signatures_98 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_signatures_98),LITREF(lit_171),T200,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(YsyntaxYsexpr_loc_bound_signatures);
  if (T204 != YPfalse) {
    T203 = VARREF(YsyntaxYsexpr_loc_bound_signatures);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_sexpr_loc_bound_signatures_98;
  T202 = CALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(YsyntaxYsexpr_loc_bound_signatures,T202);
  lit_172 = YPPsym((P)"sexpr-loc-bound-bodies");
  T206 = YPsig(YPPlist(1,LITREF(lit_170)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_bodies_99 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_bodies_99),LITREF(lit_172),T206,ENVNUL,PNUL,YPfalse);
  T209 = BOUNDP(YsyntaxYsexpr_loc_bound_bodies);
  if (T209 != YPfalse) {
    T208 = VARREF(YsyntaxYsexpr_loc_bound_bodies);
  } else {
    T208 = YPfalse;
  }
  T210 = fun_sexpr_loc_bound_bodies_99;
  T207 = CALL2(1,VARREF(YPdefine_method),T208,T210);
  VARSET(YsyntaxYsexpr_loc_bound_bodies,T207);
  lit_173 = YPPsym((P)"sexpr-loc-raw-body");
  T211 = YPsig(YPPlist(1,LITREF(lit_170)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_raw_body_100 = YPmet(FUNCODEREF(fun_sexpr_loc_raw_body_100),LITREF(lit_173),T211,ENVNUL,PNUL,YPfalse);
  T214 = BOUNDP(YsyntaxYsexpr_loc_raw_body);
  if (T214 != YPfalse) {
    T213 = VARREF(YsyntaxYsexpr_loc_raw_body);
  } else {
    T213 = YPfalse;
  }
  T215 = fun_sexpr_loc_raw_body_100;
  T212 = CALL2(1,VARREF(YPdefine_method),T213,T215);
  VARSET(YsyntaxYsexpr_loc_raw_body,T212);
  lit_174 = YPPsym((P)"sexpr-loc-body");
  T216 = YPsig(YPPlist(1,LITREF(lit_170)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_loc_body_101 = YPmet(FUNCODEREF(fun_sexpr_loc_body_101),LITREF(lit_174),T216,ENVNUL,PNUL,YPfalse);
  T219 = BOUNDP(YsyntaxYsexpr_loc_body);
  if (T219 != YPfalse) {
    T218 = VARREF(YsyntaxYsexpr_loc_body);
  } else {
    T218 = YPfalse;
  }
  T220 = fun_sexpr_loc_body_101;
  T217 = CALL2(1,VARREF(YPdefine_method),T218,T220);
  VARSET(YsyntaxYsexpr_loc_body,T217);
  lit_175 = YPPsym((P)"rep");
  VARSET(YsyntaxYDsexpr_iterate_tag,LITREF(lit_175));
  lit_176 = YPPsym((P)"sexpr-iterate?");
  T221 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_iterateQ_102 = YPmet(FUNCODEREF(fun_sexpr_iterateQ_102),LITREF(lit_176),T221,ENVNUL,PNUL,YPfalse);
  T224 = BOUNDP(YsyntaxYsexpr_iterateQ);
  if (T224 != YPfalse) {
    T223 = VARREF(YsyntaxYsexpr_iterateQ);
  } else {
    T223 = YPfalse;
  }
  T225 = fun_sexpr_iterateQ_102;
  T222 = CALL2(1,VARREF(YPdefine_method),T223,T225);
  VARSET(YsyntaxYsexpr_iterateQ,T222);
  lit_177 = YPPsym((P)"sexpr-iterate-name");
  lit_178 = YPPsym((P)"rep-exp");
  T226 = YPsig(YPPlist(1,LITREF(lit_178)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_iterate_name_103 = YPmet(FUNCODEREF(fun_sexpr_iterate_name_103),LITREF(lit_177),T226,ENVNUL,PNUL,YPfalse);
  T229 = BOUNDP(YsyntaxYsexpr_iterate_name);
  if (T229 != YPfalse) {
    T228 = VARREF(YsyntaxYsexpr_iterate_name);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_sexpr_iterate_name_103;
  T227 = CALL2(1,VARREF(YPdefine_method),T228,T230);
  VARSET(YsyntaxYsexpr_iterate_name,T227);
  VARSET(YsyntaxYDsexpr_values_tag,LITREF(lit_39));
  lit_179 = YPPsym((P)"sexpr-iterate-signature");
  T232 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_104 = YPmet(FUNCODEREF(fun_104),YPfalse,T232,ENVNUL,PNUL,YPfalse);
  T231 = YPsig(YPPlist(1,LITREF(lit_178)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_signature_105 = YPmet(FUNCODEREF(fun_sexpr_iterate_signature_105),LITREF(lit_179),T231,ENVNUL,PNUL,YPfalse);
  T235 = BOUNDP(YsyntaxYsexpr_iterate_signature);
  if (T235 != YPfalse) {
    T234 = VARREF(YsyntaxYsexpr_iterate_signature);
  } else {
    T234 = YPfalse;
  }
  T236 = fun_sexpr_iterate_signature_105;
  T233 = CALL2(1,VARREF(YPdefine_method),T234,T236);
  VARSET(YsyntaxYsexpr_iterate_signature,T233);
  lit_180 = YPPsym((P)"sexpr-iterate-inits");
  T238 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T238,ENVNUL,PNUL,YPfalse);
  T237 = YPsig(YPPlist(1,LITREF(lit_178)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_inits_107 = YPmet(FUNCODEREF(fun_sexpr_iterate_inits_107),LITREF(lit_180),T237,ENVNUL,PNUL,YPfalse);
  T241 = BOUNDP(YsyntaxYsexpr_iterate_inits);
  if (T241 != YPfalse) {
    T240 = VARREF(YsyntaxYsexpr_iterate_inits);
  } else {
    T240 = YPfalse;
  }
  T242 = fun_sexpr_iterate_inits_107;
  T239 = CALL2(1,VARREF(YPdefine_method),T240,T242);
  VARSET(YsyntaxYsexpr_iterate_inits,T239);
  lit_181 = YPPsym((P)"sexpr-iterate-body");
  T243 = YPsig(YPPlist(1,LITREF(lit_178)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_body_108 = YPmet(FUNCODEREF(fun_sexpr_iterate_body_108),LITREF(lit_181),T243,ENVNUL,PNUL,YPfalse);
  T246 = BOUNDP(YsyntaxYsexpr_iterate_body);
  if (T246 != YPfalse) {
    T245 = VARREF(YsyntaxYsexpr_iterate_body);
  } else {
    T245 = YPfalse;
  }
  T247 = fun_sexpr_iterate_body_108;
  T244 = CALL2(1,VARREF(YPdefine_method),T245,T247);
  VARSET(YsyntaxYsexpr_iterate_body,T244);
  lit_182 = YPPsym((P)"sexpr-iterate->loc");
  T248 = YPsig(YPPlist(1,LITREF(lit_178)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_Gloc_109 = YPmet(FUNCODEREF(fun_sexpr_iterate_Gloc_109),LITREF(lit_182),T248,ENVNUL,PNUL,YPfalse);
  T251 = BOUNDP(YsyntaxYsexpr_iterate_Gloc);
  if (T251 != YPfalse) {
    T250 = VARREF(YsyntaxYsexpr_iterate_Gloc);
  } else {
    T250 = YPfalse;
  }
  T252 = fun_sexpr_iterate_Gloc_109;
  T249 = CALL2(1,VARREF(YPdefine_method),T250,T252);
  VARSET(YsyntaxYsexpr_iterate_Gloc,T249);
  lit_183 = YPPsym((P)"isa");
  VARSET(YsyntaxYDsexpr_isa_tag,LITREF(lit_183));
  lit_184 = YPPsym((P)"sexpr-isa?");
  T253 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_isaQ_110 = YPmet(FUNCODEREF(fun_sexpr_isaQ_110),LITREF(lit_184),T253,ENVNUL,PNUL,YPfalse);
  T256 = BOUNDP(YsyntaxYsexpr_isaQ);
  if (T256 != YPfalse) {
    T255 = VARREF(YsyntaxYsexpr_isaQ);
  } else {
    T255 = YPfalse;
  }
  T257 = fun_sexpr_isaQ_110;
  T254 = CALL2(1,VARREF(YPdefine_method),T255,T257);
  VARSET(YsyntaxYsexpr_isaQ,T254);
  lit_185 = YPPsym((P)"sexpr-isa-parent");
  T258 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_isa_parent_111 = YPmet(FUNCODEREF(fun_sexpr_isa_parent_111),LITREF(lit_185),T258,ENVNUL,PNUL,YPfalse);
  T261 = BOUNDP(YsyntaxYsexpr_isa_parent);
  if (T261 != YPfalse) {
    T260 = VARREF(YsyntaxYsexpr_isa_parent);
  } else {
    T260 = YPfalse;
  }
  T262 = fun_sexpr_isa_parent_111;
  T259 = CALL2(1,VARREF(YPdefine_method),T260,T262);
  VARSET(YsyntaxYsexpr_isa_parent,T259);
  lit_186 = YPPsym((P)"sexpr-isa-prop-inits");
  T263 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_prop_inits_112 = YPmet(FUNCODEREF(fun_sexpr_isa_prop_inits_112),LITREF(lit_186),T263,ENVNUL,PNUL,YPfalse);
  T266 = BOUNDP(YsyntaxYsexpr_isa_prop_inits);
  if (T266 != YPfalse) {
    T265 = VARREF(YsyntaxYsexpr_isa_prop_inits);
  } else {
    T265 = YPfalse;
  }
  T267 = fun_sexpr_isa_prop_inits_112;
  T264 = CALL2(1,VARREF(YPdefine_method),T265,T267);
  VARSET(YsyntaxYsexpr_isa_prop_inits,T264);
  lit_187 = YPPsym((P)"sexpr-isa-init-props");
  T270 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  T269 = fun_sexpr_isa_init_props_113 = YPmet(FUNCODEREF(fun_sexpr_isa_init_props_113),LITREF(lit_187),T270,ENVNUL,PNUL,YPfalse);
  T274 = BOUNDP(YsyntaxYsexpr_isa_init_props);
  if (T274 != YPfalse) {
    T273 = VARREF(YsyntaxYsexpr_isa_init_props);
  } else {
    T273 = YPfalse;
  }
  T275 = fun_sexpr_isa_init_props_113;
  T272 = CALL2(1,VARREF(YPdefine_method),T273,T275);
  T271 = VARSET(YsyntaxYsexpr_isa_init_props,T272);
  T268 = T271;
  return T268;
}

P YsyntaxY___main_2___() {
  P tmpF5787;
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
  T3 = BOUNDP(YsyntaxYsexpr_isa_init_values);
  if (T3 != YPfalse) {
    T2 = VARREF(YsyntaxYsexpr_isa_init_values);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_isa_init_values_114;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YsyntaxYsexpr_isa_init_values,T1);
  lit_189 = YPPsym((P)"dc");
  VARSET(YsyntaxYDsexpr_define_class_tag,LITREF(lit_189));
  lit_190 = YPPsym((P)"sexpr-define-class?");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_define_classQ_115 = YPmet(FUNCODEREF(fun_sexpr_define_classQ_115),LITREF(lit_190),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YsyntaxYsexpr_define_classQ);
  if (T8 != YPfalse) {
    T7 = VARREF(YsyntaxYsexpr_define_classQ);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_define_classQ_115;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YsyntaxYsexpr_define_classQ,T6);
  lit_191 = YPPsym((P)"sexpr-define-class-parents");
  T10 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_define_class_parents_116 = YPmet(FUNCODEREF(fun_sexpr_define_class_parents_116),LITREF(lit_191),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YsyntaxYsexpr_define_class_parents);
  if (T13 != YPfalse) {
    T12 = VARREF(YsyntaxYsexpr_define_class_parents);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_sexpr_define_class_parents_116;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YsyntaxYsexpr_define_class_parents,T11);
  lit_192 = YPPsym((P)"dp");
  VARSET(YsyntaxYDsexpr_prop_tag,LITREF(lit_192));
  lit_193 = YPPsym((P)"sexpr-prop?");
  T15 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_propQ_117 = YPmet(FUNCODEREF(fun_sexpr_propQ_117),LITREF(lit_193),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YsyntaxYsexpr_propQ);
  if (T18 != YPfalse) {
    T17 = VARREF(YsyntaxYsexpr_propQ);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_sexpr_propQ_117;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YsyntaxYsexpr_propQ,T16);
  lit_194 = YPPsym((P)"sexpr-prop-name");
  T20 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_prop_name_118 = YPmet(FUNCODEREF(fun_sexpr_prop_name_118),LITREF(lit_194),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YsyntaxYsexpr_prop_name);
  if (T23 != YPfalse) {
    T22 = VARREF(YsyntaxYsexpr_prop_name);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_sexpr_prop_name_118;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YsyntaxYsexpr_prop_name,T21);
  lit_195 = YPPsym((P)"sexpr-prop-owner");
  T25 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_owner_119 = YPmet(FUNCODEREF(fun_sexpr_prop_owner_119),LITREF(lit_195),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YsyntaxYsexpr_prop_owner);
  if (T28 != YPfalse) {
    T27 = VARREF(YsyntaxYsexpr_prop_owner);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_sexpr_prop_owner_119;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YsyntaxYsexpr_prop_owner,T26);
  lit_196 = YPPsym((P)"sexpr-prop-init-var");
  lit_197 = YPPsym((P)"_x");
  T30 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_init_var_120 = YPmet(FUNCODEREF(fun_sexpr_prop_init_var_120),LITREF(lit_196),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YsyntaxYsexpr_prop_init_var);
  if (T33 != YPfalse) {
    T32 = VARREF(YsyntaxYsexpr_prop_init_var);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_sexpr_prop_init_var_120;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YsyntaxYsexpr_prop_init_var,T31);
  lit_198 = YPPsym((P)"sexpr-prop-type");
  T35 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_type_121 = YPmet(FUNCODEREF(fun_sexpr_prop_type_121),LITREF(lit_198),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YsyntaxYsexpr_prop_type);
  if (T38 != YPfalse) {
    T37 = VARREF(YsyntaxYsexpr_prop_type);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_sexpr_prop_type_121;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YsyntaxYsexpr_prop_type,T36);
  lit_199 = YPPsym((P)"sexpr-prop-init?");
  T40 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_prop_initQ_122 = YPmet(FUNCODEREF(fun_sexpr_prop_initQ_122),LITREF(lit_199),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YsyntaxYsexpr_prop_initQ);
  if (T43 != YPfalse) {
    T42 = VARREF(YsyntaxYsexpr_prop_initQ);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_sexpr_prop_initQ_122;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YsyntaxYsexpr_prop_initQ,T41);
  lit_200 = YPPsym((P)"sexpr-prop-init");
  T45 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_init_123 = YPmet(FUNCODEREF(fun_sexpr_prop_init_123),LITREF(lit_200),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YsyntaxYsexpr_prop_init);
  if (T48 != YPfalse) {
    T47 = VARREF(YsyntaxYsexpr_prop_init);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_sexpr_prop_init_123;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YsyntaxYsexpr_prop_init,T46);
  lit_201 = YPPsym((P)"sexpr-fab-getter");
  lit_202 = YPPsym((P)"prop-value");
  T50 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_88)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_fab_getter_124 = YPmet(FUNCODEREF(fun_sexpr_fab_getter_124),LITREF(lit_201),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YsyntaxYsexpr_fab_getter);
  if (T53 != YPfalse) {
    T52 = VARREF(YsyntaxYsexpr_fab_getter);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_sexpr_fab_getter_124;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YsyntaxYsexpr_fab_getter,T51);
  lit_203 = YPPsym((P)"sexpr-fab-setter");
  lit_204 = YPPsym((P)"prop-type");
  lit_205 = YPPsym((P)"_z");
  lit_206 = YPPsym((P)"prop-value-setter");
  T55 = YPsig(YPPlist(3,LITREF(lit_61),LITREF(lit_88),LITREF(lit_204)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_fab_setter_125 = YPmet(FUNCODEREF(fun_sexpr_fab_setter_125),LITREF(lit_203),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YsyntaxYsexpr_fab_setter);
  if (T58 != YPfalse) {
    T57 = VARREF(YsyntaxYsexpr_fab_setter);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_sexpr_fab_setter_125;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YsyntaxYsexpr_fab_setter,T56);
  lit_207 = YPPsym((P)"sexpr-fab-setter-name");
  lit_208 = YPsb((P)"-setter");
  T60 = YPsig(YPPlist(1,LITREF(lit_61)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_fab_setter_name_126 = YPmet(FUNCODEREF(fun_sexpr_fab_setter_name_126),LITREF(lit_207),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YsyntaxYsexpr_fab_setter_name);
  if (T63 != YPfalse) {
    T62 = VARREF(YsyntaxYsexpr_fab_setter_name);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_sexpr_fab_setter_name_126;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YsyntaxYsexpr_fab_setter_name,T61);
  lit_209 = YPPsym((P)"sexpr-macro?");
  T65 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_macroQ_127 = YPmet(FUNCODEREF(fun_sexpr_macroQ_127),LITREF(lit_209),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YsyntaxYsexpr_macroQ);
  if (T68 != YPfalse) {
    T67 = VARREF(YsyntaxYsexpr_macroQ);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_sexpr_macroQ_127;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YsyntaxYsexpr_macroQ,T66);
  lit_210 = YPPsym((P)"macro-expand");
  VARSET(YsyntaxYDsexpr_macro_expand_tag,LITREF(lit_210));
  lit_211 = YPPsym((P)"sexpr-macro-expand?");
  T70 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_macro_expandQ_128 = YPmet(FUNCODEREF(fun_sexpr_macro_expandQ_128),LITREF(lit_211),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YsyntaxYsexpr_macro_expandQ);
  if (T73 != YPfalse) {
    T72 = VARREF(YsyntaxYsexpr_macro_expandQ);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_sexpr_macro_expandQ_128;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YsyntaxYsexpr_macro_expandQ,T71);
  lit_212 = YPPsym((P)"mif");
  VARSET(YsyntaxYDsexpr_syntax_if_tag,LITREF(lit_212));
  lit_213 = YPPsym((P)"sexpr-make-syntax-if");
  lit_214 = YPPsym((P)"pat");
  T75 = YPsig(YPPlist(4,LITREF(lit_214),LITREF(lit_1),LITREF(lit_69),LITREF(lit_70)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  fun_sexpr_make_syntax_if_129 = YPmet(FUNCODEREF(fun_sexpr_make_syntax_if_129),LITREF(lit_213),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YsyntaxYsexpr_make_syntax_if);
  if (T78 != YPfalse) {
    T77 = VARREF(YsyntaxYsexpr_make_syntax_if);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_sexpr_make_syntax_if_129;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YsyntaxYsexpr_make_syntax_if,T76);
  lit_215 = YPPsym((P)"comma-atsign");
  VARSET(YsyntaxYTcomma_atsignT,LITREF(lit_215));
  lit_216 = YPPsym((P)"bq-list");
  VARSET(YsyntaxYTbq_listT,LITREF(lit_216));
  lit_217 = YPPsym((P)"bq-list*");
  VARSET(YsyntaxYTbq_listTT,LITREF(lit_217));
  lit_218 = YPPsym((P)"bq-append");
  VARSET(YsyntaxYTbq_appendT,LITREF(lit_218));
  lit_219 = YPPsym((P)"bq-nconc");
  VARSET(YsyntaxYTbq_nconcT,LITREF(lit_219));
  lit_220 = YPPsym((P)"bq-clobberable");
  VARSET(YsyntaxYTbq_clobberableT,LITREF(lit_220));
  lit_221 = YPPsym((P)"bq-quote");
  VARSET(YsyntaxYTbq_quoteT,LITREF(lit_221));
  lit_222 = YPPsym((P)"sexpr-expand-backquote");
  lit_223 = YPPsym((P)"proto");
  T80 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YsyntaxYsexpr_expand_backquote = YPmet(FUNCODEREF(YsyntaxYsexpr_expand_backquote),LITREF(lit_222),T80,ENVNUL,PNUL,YPfalse);
  T81 = YsyntaxYsexpr_expand_backquote;
  VARSET(YsyntaxYsexpr_expand_backquote,T81);
  lit_224 = YPPsym((P)"sexpr-build-backquote-expander");
  T82 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_build_backquote_expander_131 = YPmet(FUNCODEREF(fun_sexpr_build_backquote_expander_131),LITREF(lit_224),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YsyntaxYsexpr_build_backquote_expander);
  if (T85 != YPfalse) {
    T84 = VARREF(YsyntaxYsexpr_build_backquote_expander);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_sexpr_build_backquote_expander_131;
  T83 = CALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YsyntaxYsexpr_build_backquote_expander,T83);
  lit_225 = YPPsym((P)"sexpr-unquote?");
  lit_226 = YPPsym((P)"unquote");
  T87 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unquoteQ_132 = YPmet(FUNCODEREF(fun_sexpr_unquoteQ_132),LITREF(lit_225),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YsyntaxYsexpr_unquoteQ);
  if (T90 != YPfalse) {
    T89 = VARREF(YsyntaxYsexpr_unquoteQ);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_sexpr_unquoteQ_132;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YsyntaxYsexpr_unquoteQ,T88);
  lit_227 = YPPsym((P)"sexpr-unquote-splicing?");
  lit_228 = YPPsym((P)"unquote-splicing");
  T92 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unquote_splicingQ_133 = YPmet(FUNCODEREF(fun_sexpr_unquote_splicingQ_133),LITREF(lit_227),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YsyntaxYsexpr_unquote_splicingQ);
  if (T95 != YPfalse) {
    T94 = VARREF(YsyntaxYsexpr_unquote_splicingQ);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_sexpr_unquote_splicingQ_133;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YsyntaxYsexpr_unquote_splicingQ,T93);
  lit_229 = YPPsym((P)"sexpr-backquote?");
  T97 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_backquoteQ_134 = YPmet(FUNCODEREF(fun_sexpr_backquoteQ_134),LITREF(lit_229),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YsyntaxYsexpr_backquoteQ);
  if (T100 != YPfalse) {
    T99 = VARREF(YsyntaxYsexpr_backquoteQ);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_sexpr_backquoteQ_134;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YsyntaxYsexpr_backquoteQ,T98);
  lit_230 = YPPsym((P)"sexpr-atom?");
  T102 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_atomQ_135 = YPmet(FUNCODEREF(fun_sexpr_atomQ_135),LITREF(lit_230),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YsyntaxYsexpr_atomQ);
  if (T105 != YPfalse) {
    T104 = VARREF(YsyntaxYsexpr_atomQ);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_sexpr_atomQ_135;
  T103 = CALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YsyntaxYsexpr_atomQ,T103);
  lit_231 = YPPsym((P)"nreconc");
  lit_232 = YPPsym((P)"y");
  T107 = YPsig(YPPlist(2,LITREF(lit_144),LITREF(lit_232)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_nreconc_136 = YPmet(FUNCODEREF(fun_nreconc_136),LITREF(lit_231),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(YsyntaxYnreconc);
  if (T110 != YPfalse) {
    T109 = VARREF(YsyntaxYnreconc);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_nreconc_136;
  T108 = CALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YsyntaxYnreconc,T108);
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
  T117 = BOUNDP(YsyntaxYbq_process);
  if (T117 != YPfalse) {
    T116 = VARREF(YsyntaxYbq_process);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_bq_process_139;
  T115 = CALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YsyntaxYbq_process,T115);
  lit_239 = YPPsym((P)"bracket");
  T119 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bracket_140 = YPmet(FUNCODEREF(fun_bracket_140),LITREF(lit_239),T119,ENVNUL,PNUL,YPfalse);
  T122 = BOUNDP(YsyntaxYbracket);
  if (T122 != YPfalse) {
    T121 = VARREF(YsyntaxYbracket);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_bracket_140;
  T120 = CALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YsyntaxYbracket,T120);
  lit_240 = YPPsym((P)"map-tree");
  lit_241 = YPPsym((P)"fn");
  T124 = YPsig(YPPlist(2,LITREF(lit_241),LITREF(lit_144)),YPPlist(2,VARREF(YLfunG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_map_tree_141 = YPmet(FUNCODEREF(fun_map_tree_141),LITREF(lit_240),T124,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YsyntaxYmap_tree);
  if (T127 != YPfalse) {
    T126 = VARREF(YsyntaxYmap_tree);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_map_tree_141;
  T125 = CALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YsyntaxYmap_tree,T125);
  lit_242 = YPPsym((P)"bq-remove-tokens");
  lit_243 = YPPsym((P)"cat");
  lit_244 = YPPsym((P)"cat!");
  lit_245 = YPPsym((P)"list*");
  lit_246 = YPPsym((P)"pair");
  T129 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bq_remove_tokens_142 = YPmet(FUNCODEREF(fun_bq_remove_tokens_142),LITREF(lit_242),T129,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(YsyntaxYbq_remove_tokens);
  if (T132 != YPfalse) {
    T131 = VARREF(YsyntaxYbq_remove_tokens);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_bq_remove_tokens_142;
  T130 = CALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YsyntaxYbq_remove_tokens,T130);
  lit_247 = YPPsym((P)"sexpr-syntax-if?");
  T134 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_syntax_ifQ_143 = YPmet(FUNCODEREF(fun_sexpr_syntax_ifQ_143),LITREF(lit_247),T134,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YsyntaxYsexpr_syntax_ifQ);
  if (T137 != YPfalse) {
    T136 = VARREF(YsyntaxYsexpr_syntax_ifQ);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_sexpr_syntax_ifQ_143;
  T135 = CALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YsyntaxYsexpr_syntax_ifQ,T135);
  lit_248 = YPPsym((P)"sexpr-syntax-if-value");
  T139 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_value_144 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_value_144),LITREF(lit_248),T139,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YsyntaxYsexpr_syntax_if_value);
  if (T142 != YPfalse) {
    T141 = VARREF(YsyntaxYsexpr_syntax_if_value);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_sexpr_syntax_if_value_144;
  T140 = CALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YsyntaxYsexpr_syntax_if_value,T140);
  lit_249 = YPPsym((P)"sexpr-syntax-if-pattern");
  T144 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_pattern_145 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_pattern_145),LITREF(lit_249),T144,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YsyntaxYsexpr_syntax_if_pattern);
  if (T147 != YPfalse) {
    T146 = VARREF(YsyntaxYsexpr_syntax_if_pattern);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_sexpr_syntax_if_pattern_145;
  T145 = CALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YsyntaxYsexpr_syntax_if_pattern,T145);
  lit_250 = YPPsym((P)"sexpr-syntax-if-then");
  T149 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_then_146 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_then_146),LITREF(lit_250),T149,ENVNUL,PNUL,YPfalse);
  T152 = BOUNDP(YsyntaxYsexpr_syntax_if_then);
  if (T152 != YPfalse) {
    T151 = VARREF(YsyntaxYsexpr_syntax_if_then);
  } else {
    T151 = YPfalse;
  }
  T153 = fun_sexpr_syntax_if_then_146;
  T150 = CALL2(1,VARREF(YPdefine_method),T151,T153);
  VARSET(YsyntaxYsexpr_syntax_if_then,T150);
  lit_251 = YPPsym((P)"sexpr-syntax-if-else");
  T154 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_else_147 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_else_147),LITREF(lit_251),T154,ENVNUL,PNUL,YPfalse);
  T157 = BOUNDP(YsyntaxYsexpr_syntax_if_else);
  if (T157 != YPfalse) {
    T156 = VARREF(YsyntaxYsexpr_syntax_if_else);
  } else {
    T156 = YPfalse;
  }
  T158 = fun_sexpr_syntax_if_else_147;
  T155 = CALL2(1,VARREF(YPdefine_method),T156,T158);
  VARSET(YsyntaxYsexpr_syntax_if_else,T155);
  lit_252 = YPPsym((P)"sexpr-pattern-variable?");
  T159 = YPsig(YPPlist(1,LITREF(lit_214)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_pattern_variableQ_148 = YPmet(FUNCODEREF(fun_sexpr_pattern_variableQ_148),LITREF(lit_252),T159,ENVNUL,PNUL,YPfalse);
  T162 = BOUNDP(YsyntaxYsexpr_pattern_variableQ);
  if (T162 != YPfalse) {
    T161 = VARREF(YsyntaxYsexpr_pattern_variableQ);
  } else {
    T161 = YPfalse;
  }
  T163 = fun_sexpr_pattern_variableQ_148;
  T160 = CALL2(1,VARREF(YPdefine_method),T161,T163);
  VARSET(YsyntaxYsexpr_pattern_variableQ,T160);
  lit_253 = YPPsym((P)"sexpr-pattern-variable-name");
  T164 = YPsig(YPPlist(1,LITREF(lit_214)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_pattern_variable_name_149 = YPmet(FUNCODEREF(fun_sexpr_pattern_variable_name_149),LITREF(lit_253),T164,ENVNUL,PNUL,YPfalse);
  T167 = BOUNDP(YsyntaxYsexpr_pattern_variable_name);
  if (T167 != YPfalse) {
    T166 = VARREF(YsyntaxYsexpr_pattern_variable_name);
  } else {
    T166 = YPfalse;
  }
  T168 = fun_sexpr_pattern_variable_name_149;
  T165 = CALL2(1,VARREF(YPdefine_method),T166,T168);
  VARSET(YsyntaxYsexpr_pattern_variable_name,T165);
  lit_254 = YPPsym((P)"sexpr-bind-pattern-variables");
  T170 = YPsig(YPPlist(1,LITREF(lit_214)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_col_150 = YPmet(FUNCODEREF(fun_col_150),LITREF(lit_165),T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(1,LITREF(lit_214)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_bind_pattern_variables_151 = YPmet(FUNCODEREF(fun_sexpr_bind_pattern_variables_151),LITREF(lit_254),T169,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YsyntaxYsexpr_bind_pattern_variables);
  if (T173 != YPfalse) {
    T172 = VARREF(YsyntaxYsexpr_bind_pattern_variables);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_sexpr_bind_pattern_variables_151;
  T171 = CALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YsyntaxYsexpr_bind_pattern_variables,T171);
  lit_255 = YPPsym((P)"sexpr-make-macro-function");
  T175 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_make_macro_function_152 = YPmet(FUNCODEREF(fun_sexpr_make_macro_function_152),LITREF(lit_255),T175,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(YsyntaxYsexpr_make_macro_function);
  if (T178 != YPfalse) {
    T177 = VARREF(YsyntaxYsexpr_make_macro_function);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_sexpr_make_macro_function_152;
  T176 = CALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YsyntaxYsexpr_make_macro_function,T176);
  tmpF5787 = YPfalse;
  if (tmpF5787 != YPfalse) {
    T180 = VARREF(YsyntaxYeval);
  } else {
    T180 = YPfalse;
  }
  T181 = YPfalse;
  return T181;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_protoSmath;
extern MODULE_INFO module_info_protoStypes;
extern MODULE_INFO module_info_protoScollections;
extern MODULE_INFO module_info_protoScollectionsScollection;
extern MODULE_INFO module_info_protoScollectionsSassoc;
extern MODULE_INFO module_info_protoScollectionsSsequence;
extern MODULE_INFO module_info_protoScollectionsSstring;
extern MODULE_INFO module_info_protoScollectionsStable;
extern MODULE_INFO module_info_protoScollectionsSbuffer;
extern MODULE_INFO module_info_protoScollectionsSrange;
extern MODULE_INFO module_info_protoScollectionsSlist;
extern MODULE_INFO module_info_protoSmagnitudes;
extern MODULE_INFO module_info_protoScollectionsSmap;
extern MODULE_INFO module_info_protoScollectionsSstep;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_runtime},
  {&module_info_protoSmath},
  {&module_info_protoStypes},
  {&module_info_protoScollections},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"<num>", &module_info_boot, "<num>"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"key-type", &module_info_protoScollectionsScollection, "key-type"},
  {"prop-getter", &module_info_boot, "prop-getter"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"assocs-test-setter", &module_info_protoScollectionsSassoc, "assocs-test-setter"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"and", &module_info_macros, "and"},
  {"del-dups", &module_info_protoScollectionsSsequence, "del-dups"},
  {"fin?", &module_info_protoScollectionsScollection, "fin?"},
  {"%unlink-stack", &module_info_boot, "%unlink-stack"},
  {"unexec", &module_info_boot, "unexec"},
  {"type-error", &module_info_boot, "type-error"},
  {"+", &module_info_protoSmath, "+"},
  {"%fun-reg", &module_info_boot, "%fun-reg"},
  {"class-direct-props", &module_info_boot, "class-direct-props"},
  {"gensym", &module_info_macros, "gensym"},
  {"vec", &module_info_boot, "vec"},
  {"or", &module_info_macros, "or"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"below", &module_info_protoScollectionsSsequence, "below"},
  {"num-to-str-base", &module_info_protoScollectionsSstring, "num-to-str-base"},
  {"<met>", &module_info_boot, "<met>"},
  {"contagious-call", &module_info_protoSmath, "contagious-call"},
  {"map-keyed", &module_info_protoScollectionsScollection, "map-keyed"},
  {"*print-base*", &module_info_protoScollectionsSstring, "*print-base*"},
  {"loc-val-setter", &module_info_runtime, "loc-val-setter"},
  {"mif", &module_info_boot, "mif"},
  {"tab-test", &module_info_protoScollectionsStable, "tab-test"},
  {"use/export", &module_info_boot, "use/export"},
  {"zero?", &module_info_protoSmath, "zero?"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"@olen", &module_info_boot, "@olen"},
  {"until", &module_info_macros, "until"},
  {"prop-init", &module_info_boot, "prop-init"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"round/", &module_info_protoSmath, "round/"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"sin", &module_info_protoSmath, "sin"},
  {"t+", &module_info_protoStypes, "t+"},
  {"eof-object", &module_info_protoSmath, "eof-object"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"enum", &module_info_protoScollectionsScollection, "enum"},
  {"var-name", &module_info_macros, "var-name"},
  {"class-descendents", &module_info_boot, "class-descendents"},
  {"elt-default", &module_info_protoScollectionsScollection, "elt-default"},
  {"buf", &module_info_protoScollectionsSbuffer, "buf"},
  {"map2", &module_info_protoScollectionsScollection, "map2"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"from", &module_info_protoScollectionsSrange, "from"},
  {"gen-refs-setter", &module_info_boot, "gen-refs-setter"},
  {"even?", &module_info_protoSmath, "even?"},
  {"%fcos", &module_info_boot, "%fcos"},
  {"cond", &module_info_macros, "cond"},
  {"%loc-val-setter", &module_info_boot, "%loc-val-setter"},
  {"app", &module_info_macros, "app"},
  {"isa", &module_info_boot, "isa"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"@+", &module_info_boot, "@+"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"rem", &module_info_protoSmath, "rem"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"del-vals", &module_info_protoScollectionsSsequence, "del-vals"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"dss", &module_info_boot, "dss"},
  {"prop-value-setter", &module_info_boot, "prop-value-setter"},
  {"%lu", &module_info_boot, "%lu"},
  {"log", &module_info_protoSmath, "log"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"gen-refs", &module_info_boot, "gen-refs"},
  {"exported", &module_info_macros, "exported"},
  {"not", &module_info_boot, "not"},
  {"-", &module_info_protoSmath, "-"},
  {"incf", &module_info_macros, "incf"},
  {"do-keyed", &module_info_protoScollectionsScollection, "do-keyed"},
  {"%get", &module_info_boot, "%get"},
  {"%i+", &module_info_boot, "%i+"},
  {"sub", &module_info_protoScollectionsSsequence, "sub"},
  {"assq", &module_info_protoScollectionsSlist, "assq"},
  {"%f*", &module_info_boot, "%f*"},
  {"dup", &module_info_protoScollectionsScollection, "dup"},
  {"%iu", &module_info_boot, "%iu"},
  {"elt-type", &module_info_protoScollectionsScollection, "elt-type"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"range-check?", &module_info_protoScollectionsSsequence, "range-check?"},
  {"tanh", &module_info_protoSmath, "tanh"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"%gen-src", &module_info_boot, "%gen-src"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"pos", &module_info_protoScollectionsSsequence, "pos"},
  {"fold", &module_info_protoScollectionsScollection, "fold"},
  {"&", &module_info_protoSmath, "&"},
  {"tab-shrink-threshold", &module_info_protoScollectionsStable, "tab-shrink-threshold"},
  {"%im", &module_info_boot, "%im"},
  {"elts", &module_info_protoScollectionsScollection, "elts"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"%fsinh", &module_info_boot, "%fsinh"},
  {"%met-code", &module_info_boot, "%met-code"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"@lst", &module_info_boot, "@lst"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"rep", &module_info_boot, "rep"},
  {"opf", &module_info_macros, "opf"},
  {"~==", &module_info_protoSmath, "~=="},
  {"flo-bits", &module_info_protoSmath, "flo-bits"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"%os-val-setter", &module_info_boot, "%os-val-setter"},
  {"map", &module_info_macros, "map"},
  {"trunc/", &module_info_protoSmath, "trunc/"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"case-insensitive-string-equal", &module_info_protoScollectionsStable, "case-insensitive-string-equal"},
  {"~=", &module_info_protoSmath, "~="},
  {"t?", &module_info_protoStypes, "t?"},
  {"all2?", &module_info_protoStypes, "all2?"},
  {"reject", &module_info_protoScollectionsSsequence, "reject"},
  {"match", &module_info_macros, "match"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"range", &module_info_protoScollectionsSrange, "range"},
  {"assert", &module_info_macros, "assert"},
  {"sig-val", &module_info_boot, "sig-val"},
  {"prop-bound?", &module_info_boot, "prop-bound?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"<log>", &module_info_boot, "<log>"},
  {"range-by", &module_info_protoScollectionsSrange, "range-by"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"neg", &module_info_protoSmath, "neg"},
  {"|", &module_info_protoSmath, "|"},
  {"sqrt", &module_info_protoSmath, "sqrt"},
  {"type-object", &module_info_boot, "type-object"},
  {"%open-out-file", &module_info_boot, "%open-out-file"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"%c<", &module_info_boot, "%c<"},
  {"%ftan", &module_info_boot, "%ftan"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"*", &module_info_protoSmath, "*"},
  {"renew", &module_info_macros, "renew"},
  {"round", &module_info_protoSmath, "round"},
  {"decf", &module_info_macros, "decf"},
  {"%raw", &module_info_boot, "%raw"},
  {"logn", &module_info_protoSmath, "logn"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"as-log", &module_info_protoSmath, "as-log"},
  {"%ready?", &module_info_boot, "%ready?"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%f+", &module_info_boot, "%f+"},
  {"@len", &module_info_boot, "@len"},
  {"1+", &module_info_protoSmath, "1+"},
  {"pow", &module_info_protoSmath, "pow"},
  {"range-check", &module_info_protoScollectionsSsequence, "range-check"},
  {"%vec", &module_info_boot, "%vec"},
  {"%facos", &module_info_boot, "%facos"},
  {"%slen", &module_info_boot, "%slen"},
  {"find", &module_info_protoScollectionsScollection, "find"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"digit?", &module_info_protoSmath, "digit?"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"prop-owner", &module_info_boot, "prop-owner"},
  {"tab-gc-state", &module_info_protoScollectionsStable, "tab-gc-state"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"<bot>", &module_info_protoSmath, "<bot>"},
  {"to-str", &module_info_protoSmath, "to-str"},
  {"fab-setter-name", &module_info_macros, "fab-setter-name"},
  {"%ft", &module_info_boot, "%ft"},
  {"t<", &module_info_protoStypes, "t<"},
  {"%untag", &module_info_boot, "%untag"},
  {"object-class", &module_info_boot, "object-class"},
  {"floor/", &module_info_protoSmath, "floor/"},
  {"push", &module_info_protoScollectionsSlist, "push"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"atan", &module_info_protoSmath, "atan"},
  {"%fsin", &module_info_boot, "%fsin"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"try", &module_info_boot, "try"},
  {"*report-prop-unbound-errors?*", &module_info_boot, "*report-prop-unbound-errors?*"},
  {"cat2", &module_info_protoScollectionsSsequence, "cat2"},
  {"pick", &module_info_protoScollectionsSsequence, "pick"},
  {"prop-value", &module_info_boot, "prop-value"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"collected", &module_info_macros, "collected"},
  {"tab-growth-threshold", &module_info_protoScollectionsStable, "tab-growth-threshold"},
  {"%i-", &module_info_boot, "%i-"},
  {"dv", &module_info_boot, "dv"},
  {"<list>", &module_info_protoScollectionsSlist, "<list>"},
  {"match-atom", &module_info_macros, "match-atom"},
  {">", &module_info_protoSmagnitudes, ">"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"char->ascii", &module_info_protoSmath, "char->ascii"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"<any>", &module_info_boot, "<any>"},
  {"prop-type", &module_info_boot, "prop-type"},
  {"elt-setter", &module_info_protoScollectionsScollection, "elt-setter"},
  {"seq", &module_info_boot, "seq"},
  {"read", &module_info_runtime, "read"},
  {"var-type", &module_info_macros, "var-type"},
  {"%i<", &module_info_boot, "%i<"},
  {"to-upper", &module_info_protoSmath, "to-upper"},
  {"%selt", &module_info_boot, "%selt"},
  {"any?", &module_info_protoStypes, "any?"},
  {"%fatan", &module_info_boot, "%fatan"},
  {"cat!", &module_info_protoScollectionsSsequence, "cat!"},
  {"pushf", &module_info_macros, "pushf"},
  {"class-props", &module_info_boot, "class-props"},
  {"zap", &module_info_protoScollectionsScollection, "zap"},
  {"assqn", &module_info_protoScollectionsSlist, "assqn"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"case-insensitive-string-hash", &module_info_protoScollectionsStable, "case-insensitive-string-hash"},
  {"address-of", &module_info_protoSmath, "address-of"},
  {"fab-map", &module_info_protoScollectionsSmap, "fab-map"},
  {"t=", &module_info_protoStypes, "t="},
  {"error", &module_info_boot, "error"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"ddv", &module_info_macros, "ddv"},
  {">>>", &module_info_protoSmath, ">>>"},
  {"%cb", &module_info_boot, "%cb"},
  {"<", &module_info_protoSmagnitudes, "<"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"<str-tab>", &module_info_protoScollectionsStable, "<str-tab>"},
  {"%force-out", &module_info_boot, "%force-out"},
  {"%fsqrt", &module_info_boot, "%fsqrt"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"%prop-unbound-error", &module_info_boot, "%prop-unbound-error"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"%iv", &module_info_boot, "%iv"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"do3", &module_info_protoScollectionsScollection, "do3"},
  {"<error>", &module_info_runtime, "<error>"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"collecting", &module_info_macros, "collecting"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"len-setter", &module_info_protoScollectionsSbuffer, "len-setter"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"def", &module_info_boot, "def"},
  {"%gen-code", &module_info_boot, "%gen-code"},
  {"%puts", &module_info_boot, "%puts"},
  {"%su", &module_info_boot, "%su"},
  {"as-copy", &module_info_protoScollectionsScollection, "as-copy"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"@all2?", &module_info_boot, "@all2?"},
  {"@==", &module_info_boot, "@=="},
  {"add", &module_info_protoScollectionsScollection, "add"},
  {"quote", &module_info_boot, "quote"},
  {"trunc", &module_info_protoSmath, "trunc"},
  {"%str", &module_info_boot, "%str"},
  {"2nd", &module_info_protoStypes, "2nd"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"=", &module_info_protoSmath, "="},
  {"alpha?", &module_info_protoSmath, "alpha?"},
  {"ceil", &module_info_protoSmath, "ceil"},
  {"fin", &module_info_boot, "fin"},
  {"<col>", &module_info_boot, "<col>"},
  {"esc", &module_info_boot, "esc"},
  {"<class>", &module_info_boot, "<class>"},
  {"%close-in-port", &module_info_boot, "%close-in-port"},
  {"loc-val", &module_info_runtime, "loc-val"},
  {"add!", &module_info_protoScollectionsScollection, "add!"},
  {"finds", &module_info_protoScollectionsSsequence, "finds"},
  {"<mag>", &module_info_boot, "<mag>"},
  {"to-lower", &module_info_protoSmath, "to-lower"},
  {"%i^", &module_info_boot, "%i^"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"find-or", &module_info_protoScollectionsScollection, "find-or"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"pos?", &module_info_protoSmath, "pos?"},
  {"%fatan2", &module_info_boot, "%fatan2"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"%i=", &module_info_boot, "%i="},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"tab-shrink-threshold-setter", &module_info_protoScollectionsStable, "tab-shrink-threshold-setter"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"<tab>", &module_info_protoScollectionsScollection, "<tab>"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"<product>", &module_info_protoStypes, "<product>"},
  {"%i?", &module_info_boot, "%i?"},
  {"%snul", &module_info_boot, "%snul"},
  {"dp", &module_info_boot, "dp"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"str", &module_info_protoScollectionsSstring, "str"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"ascii-whitespaces", &module_info_protoScollectionsSstring, "ascii-whitespaces"},
  {"elt-or", &module_info_protoScollectionsScollection, "elt-or"},
  {"format", &module_info_runtime, "format"},
  {"%ftanh", &module_info_boot, "%ftanh"},
  {"cat", &module_info_macros, "cat"},
  {"for", &module_info_macros, "for"},
  {"%put", &module_info_boot, "%put"},
  {"bit?", &module_info_protoSmath, "bit?"},
  {"cosh", &module_info_protoSmath, "cosh"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"del", &module_info_protoScollectionsScollection, "del"},
  {"add-prop", &module_info_boot, "add-prop"},
  {"bound?", &module_info_boot, "bound?"},
  {"$permanent-hash-state", &module_info_protoScollectionsStable, "$permanent-hash-state"},
  {"len", &module_info_protoStypes, "len"},
  {"type-elts-setter", &module_info_protoStypes, "type-elts-setter"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"<enum>", &module_info_protoScollectionsScollection, "<enum>"},
  {"@<", &module_info_boot, "@<"},
  {"dm", &module_info_boot, "dm"},
  {"mod", &module_info_protoSmath, "mod"},
  {"tail", &module_info_boot, "tail"},
  {"do2", &module_info_protoScollectionsScollection, "do2"},
  {"max", &module_info_protoSmagnitudes, "max"},
  {"acos", &module_info_protoSmath, "acos"},
  {"power-of-two-ceiling", &module_info_protoSmath, "power-of-two-ceiling"},
  {"%gen-code-setter", &module_info_boot, "%gen-code-setter"},
  {"<type>", &module_info_boot, "<type>"},
  {"napp", &module_info_macros, "napp"},
  {"app-args", &module_info_runtime, "app-args"},
  {"low-elt-setter", &module_info_protoScollectionsScollection, "low-elt-setter"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"ord-app-mets", &module_info_boot, "ord-app-mets"},
  {"<buf>", &module_info_protoScollectionsSbuffer, "<buf>"},
  {"fab", &module_info_protoScollectionsScollection, "fab"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"<<", &module_info_protoSmath, "<<"},
  {"case-by", &module_info_macros, "case-by"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"min", &module_info_protoSmagnitudes, "min"},
  {"tab-growth-factor", &module_info_protoScollectionsStable, "tab-growth-factor"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"ins", &module_info_protoScollectionsSsequence, "ins"},
  {"always", &module_info_runtime, "always"},
  {"set", &module_info_boot, "set"},
  {"loc", &module_info_boot, "loc"},
  {"fill", &module_info_protoScollectionsScollection, "fill"},
  {"%i&", &module_info_boot, "%i&"},
  {"<map>", &module_info_protoScollectionsSmap, "<map>"},
  {"class-name", &module_info_boot, "class-name"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"<set>", &module_info_protoScollectionsStable, "<set>"},
  {"identity", &module_info_runtime, "identity"},
  {"swapf", &module_info_macros, "swapf"},
  {"sinh", &module_info_protoSmath, "sinh"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"%loc-val", &module_info_boot, "%loc-val"},
  {"sig", &module_info_runtime, "sig"},
  {"upper?", &module_info_protoSmath, "upper?"},
  {"if", &module_info_boot, "if"},
  {"isqrt", &module_info_protoSmath, "isqrt"},
  {"1-", &module_info_protoSmath, "1-"},
  {"$e", &module_info_protoSmath, "$e"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"dlet", &module_info_macros, "dlet"},
  {"eof-object?", &module_info_protoSmath, "eof-object?"},
  {"empty", &module_info_protoScollectionsScollection, "empty"},
  {"%peek", &module_info_boot, "%peek"},
  {"prop-setter", &module_info_boot, "prop-setter"},
  {"nul", &module_info_boot, "nul"},
  {"assocs-test", &module_info_protoScollectionsSassoc, "assocs-test"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"last", &module_info_protoScollectionsSsequence, "last"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"items", &module_info_protoScollectionsScollection, "items"},
  {"now", &module_info_protoScollectionsScollection, "now"},
  {"%fasin", &module_info_boot, "%fasin"},
  {"len/fill-setter", &module_info_protoScollectionsSbuffer, "len/fill-setter"},
  {"fun-val", &module_info_boot, "fun-val"},
  {"when", &module_info_macros, "when"},
  {"%it/", &module_info_boot, "%it/"},
  {"%pair", &module_info_boot, "%pair"},
  {"collect", &module_info_macros, "collect"},
  {"class-ancestors", &module_info_boot, "class-ancestors"},
  {"atan2", &module_info_protoSmath, "atan2"},
  {"low-elt", &module_info_protoScollectionsScollection, "low-elt"},
  {"into", &module_info_protoScollectionsScollection, "into"},
  {"rev", &module_info_protoScollectionsSsequence, "rev"},
  {"%current-out-port", &module_info_boot, "%current-out-port"},
  {"num-to-str", &module_info_protoSmath, "num-to-str"},
  {"%c=", &module_info_boot, "%c="},
  {"unless", &module_info_macros, "unless"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"<step>", &module_info_protoScollectionsSstep, "<step>"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"%f=", &module_info_boot, "%f="},
  {"spread", &module_info_runtime, "spread"},
  {"neg?", &module_info_protoSmath, "neg?"},
  {"dc", &module_info_boot, "dc"},
  {"abs", &module_info_protoSmath, "abs"},
  {"floor", &module_info_protoSmath, "floor"},
  {"pair", &module_info_macros, "pair"},
  {"contagious-type", &module_info_protoSmath, "contagious-type"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"$pi", &module_info_protoSmath, "$pi"},
  {"ins!", &module_info_protoScollectionsSsequence, "ins!"},
  {"%gen-refs", &module_info_boot, "%gen-refs"},
  {"all?", &module_info_protoScollectionsScollection, "all?"},
  {">=", &module_info_protoSmagnitudes, ">="},
  {"ceiling/", &module_info_protoSmath, "ceiling/"},
  {"asin", &module_info_protoSmath, "asin"},
  {"app-sup", &module_info_macros, "app-sup"},
  {"first-then", &module_info_protoScollectionsSstep, "first-then"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"elt", &module_info_macros, "elt"},
  {"as", &module_info_protoStypes, "as"},
  {"ascii-limit", &module_info_protoScollectionsSstring, "ascii-limit"},
  {"now-setter", &module_info_protoScollectionsScollection, "now-setter"},
  {"%close-out-port", &module_info_boot, "%close-out-port"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"list", &module_info_protoScollectionsSlist, "list"},
  {"~", &module_info_protoSmath, "~"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%f/", &module_info_boot, "%f/"},
  {"nxt", &module_info_protoScollectionsScollection, "nxt"},
  {"gen-src-setter", &module_info_boot, "gen-src-setter"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"do", &module_info_macros, "do"},
  {"%fpow", &module_info_boot, "%fpow"},
  {"@isa?", &module_info_boot, "@isa?"},
  {"export", &module_info_boot, "export"},
  {"3rd", &module_info_protoScollectionsSsequence, "3rd"},
  {"keys", &module_info_protoScollectionsScollection, "keys"},
  {"while", &module_info_macros, "while"},
  {"compose", &module_info_runtime, "compose"},
  {"%fcosh", &module_info_boot, "%fcosh"},
  {"ct", &module_info_boot, "ct"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"range-error", &module_info_protoScollectionsScollection, "range-error"},
  {"<prop>", &module_info_boot, "<prop>"},
  {"empty?", &module_info_macros, "empty?"},
  {"tab-growth-factor-setter", &module_info_protoScollectionsStable, "tab-growth-factor-setter"},
  {"^", &module_info_protoSmath, "^"},
  {"sub-setter", &module_info_protoScollectionsSsequence, "sub-setter"},
  {"dl", &module_info_boot, "dl"},
  {"<assocs>", &module_info_protoScollectionsSassoc, "<assocs>"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"%ib", &module_info_boot, "%ib"},
  {"%i*", &module_info_boot, "%i*"},
  {"nil", &module_info_boot, "nil"},
  {"let", &module_info_boot, "let"},
  {"%open-in-file", &module_info_boot, "%open-in-file"},
  {"gen-src", &module_info_boot, "gen-src"},
  {"new", &module_info_boot, "new"},
  {"%f<", &module_info_boot, "%f<"},
  {"use", &module_info_boot, "use"},
  {"tab-growth-threshold-setter", &module_info_protoScollectionsStable, "tab-growth-threshold-setter"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"fabs", &module_info_protoSmath, "fabs"},
  {"%i!", &module_info_boot, "%i!"},
  {"lower?", &module_info_protoSmath, "lower?"},
  {"now-key", &module_info_protoScollectionsScollection, "now-key"},
  {"to-digit", &module_info_protoSmath, "to-digit"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"tan", &module_info_protoSmath, "tan"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"object-props", &module_info_boot, "object-props"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"dg", &module_info_boot, "dg"},
  {"*gensym-counter*", &module_info_runtime, "*gensym-counter*"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"<int>", &module_info_boot, "<int>"},
  {"<range>", &module_info_protoScollectionsSrange, "<range>"},
  {"%lb", &module_info_boot, "%lb"},
  {"<str>", &module_info_boot, "<str>"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"id-hash", &module_info_protoScollectionsStable, "id-hash"},
  {"%with-monitor", &module_info_boot, "%with-monitor"},
  {"%fu", &module_info_boot, "%fu"},
  {"do-key-vals", &module_info_protoScollectionsSsequence, "do-key-vals"},
  {"1st", &module_info_protoScollectionsSsequence, "1st"},
  {"pop", &module_info_protoScollectionsSlist, "pop"},
  {"<=", &module_info_protoSmagnitudes, "<="},
  {"sup", &module_info_macros, "sup"},
  {"%sb", &module_info_boot, "%sb"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"%os-val", &module_info_boot, "%os-val"},
  {">>", &module_info_protoSmath, ">>"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"cat-sym", &module_info_macros, "cat-sym"},
  {"%velt", &module_info_boot, "%velt"},
  {"odd?", &module_info_protoSmath, "odd?"},
  {"==", &module_info_macros, "=="},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"curry", &module_info_runtime, "curry"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"mem?", &module_info_protoScollectionsScollection, "mem?"},
  {"key-test", &module_info_protoScollectionsScollection, "key-test"},
  {"%cu", &module_info_boot, "%cu"},
  {"%current-in-port", &module_info_boot, "%current-in-port"},
  {"rev!", &module_info_macros, "rev!"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"/", &module_info_protoSmath, "/"},
  {"vals-to-str", &module_info_protoScollectionsSsequence, "vals-to-str"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"without-prop-unbound-errors", &module_info_macros, "without-prop-unbound-errors"},
  {"any2?", &module_info_protoScollectionsScollection, "any2?"},
  {"ds", &module_info_boot, "ds"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"type-class", &module_info_boot, "type-class"},
  {"%flog", &module_info_boot, "%flog"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"%fb", &module_info_boot, "%fb"},
  {"lst", &module_info_boot, "lst"},
  {"tup", &module_info_boot, "tup"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"isa?", &module_info_boot, "isa?"},
  {"<union>", &module_info_boot, "<union>"},
  {"fun", &module_info_boot, "fun"},
  {"%bb", &module_info_boot, "%bb"},
  {"%prop", &module_info_boot, "%prop"},
  {"cos", &module_info_protoSmath, "cos"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"t*", &module_info_protoStypes, "t*"},
  {"%f-", &module_info_boot, "%f-"},
  {"tab-hash", &module_info_protoScollectionsStable, "tab-hash"},
  {"case", &module_info_macros, "case"},
  {"fab-handler", &module_info_runtime, "fab-handler"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"pop-last!", &module_info_protoScollectionsSbuffer, "pop-last!"},
  {"%isa", &module_info_boot, "%isa"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"fold+", &module_info_protoScollectionsScollection, "fold+"},
  {"push-last!", &module_info_protoScollectionsSbuffer, "push-last!"},
  {"popf", &module_info_macros, "popf"},
  {"head", &module_info_boot, "head"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"df", &module_info_boot, "df"},
  {"str-to-num", &module_info_protoScollectionsSstring, "str-to-num"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sexpr-new-unique-name-counter!", &YsyntaxYsexpr_new_unique_name_counterX},
  {"$sexpr-iterate-tag", &YsyntaxYDsexpr_iterate_tag},
  {"$sexpr-quasiquote-tag", &YsyntaxYDsexpr_quasiquote_tag},
  {"sexpr-iterate->loc", &YsyntaxYsexpr_iterate_Gloc},
  {"sexpr-syntax-if-then", &YsyntaxYsexpr_syntax_if_then},
  {"sexpr-last-exp?", &YsyntaxYsexpr_last_expQ},
  {"*bq-clobberable*", &YsyntaxYTbq_clobberableT},
  {"sexpr-pattern-variable-name", &YsyntaxYsexpr_pattern_variable_name},
  {"sexpr-begin-actions", &YsyntaxYsexpr_begin_actions},
  {"sexpr-loc-bound-signatures", &YsyntaxYsexpr_loc_bound_signatures},
  {"---main-2---", NULL},
  {"bracket", &YsyntaxYbracket},
  {"$sexpr-define-syntax-tag", &YsyntaxYDsexpr_define_syntax_tag},
  {"sexpr-make-syntax-if", &YsyntaxYsexpr_make_syntax_if},
  {"sexpr-prop?", &YsyntaxYsexpr_propQ},
  {"sexpr-unwind-protect-cleanup-forms", &YsyntaxYsexpr_unwind_protect_cleanup_forms},
  {"$sexpr-bind-exit-tag", &YsyntaxYDsexpr_bind_exit_tag},
  {"bq-remove-tokens", &YsyntaxYbq_remove_tokens},
  {"sexpr-block-body", &YsyntaxYsexpr_block_body},
  {"$sexpr-unwind-protect-tag", &YsyntaxYDsexpr_unwind_protect_tag},
  {"as-signature", &YsyntaxYas_signature},
  {"sexpr-forward-primitive?", &YsyntaxYsexpr_forward_primitiveQ},
  {"sexpr-monitor-expand", &YsyntaxYsexpr_monitor_expand},
  {"sexpr-build-backquote-expander", &YsyntaxYsexpr_build_backquote_expander},
  {"sexpr-isa-prop-inits", &YsyntaxYsexpr_isa_prop_inits},
  {"sexpr-first-operand", &YsyntaxYsexpr_first_operand},
  {"sexpr-iterate?", &YsyntaxYsexpr_iterateQ},
  {"sexpr-variable?", &YsyntaxYsexpr_variableQ},
  {"$sexpr-monitor-tag", &YsyntaxYDsexpr_monitor_tag},
  {"sexpr-let->combination", &YsyntaxYsexpr_let_Gcombination},
  {"sexpr-syntax-if-value", &YsyntaxYsexpr_syntax_if_value},
  {"sexpr-let-names+values", &YsyntaxYsexpr_let_namesAvalues},
  {"sexpr-def-value", &YsyntaxYsexpr_def_value},
  {"sexpr-unquote?", &YsyntaxYsexpr_unquoteQ},
  {"$sexpr-define-method-tag", &YsyntaxYDsexpr_define_method_tag},
  {"sexpr-assignment-value", &YsyntaxYsexpr_assignment_value},
  {"$sexpr-values-tag", &YsyntaxYDsexpr_values_tag},
  {"sexpr-let?", &YsyntaxYsexpr_letQ},
  {"sexpr-function-parameters", &YsyntaxYsexpr_function_parameters},
  {"sexpr-variable-type", &YsyntaxYsexpr_variable_type},
  {"*bq-quote*", &YsyntaxYTbq_quoteT},
  {"$sexpr-syntax-if-tag", &YsyntaxYDsexpr_syntax_if_tag},
  {"sexpr-rest-operands", &YsyntaxYsexpr_rest_operands},
  {"sexpr-syntax-if-pattern", &YsyntaxYsexpr_syntax_if_pattern},
  {"$sexpr-macro-tag", &YsyntaxYDsexpr_macro_tag},
  {"sexpr-macro-expand?", &YsyntaxYsexpr_macro_expandQ},
  {"sexpr-make-anonymous-method", &YsyntaxYsexpr_make_anonymous_method},
  {"$sexpr-method-tag", &YsyntaxYDsexpr_method_tag},
  {"sexpr-method-definition?", &YsyntaxYsexpr_method_definitionQ},
  {"$sexpr-let-tag", &YsyntaxYDsexpr_let_tag},
  {"bq-process", &YsyntaxYbq_process},
  {"sexpr-block?", &YsyntaxYsexpr_blockQ},
  {"sexpr-first-exp", &YsyntaxYsexpr_first_exp},
  {"$sexpr-def-tag", &YsyntaxYDsexpr_def_tag},
  {"find-option", &YsyntaxYfind_option},
  {"sexpr-begin?", &YsyntaxYsexpr_beginQ},
  {"sexpr-loc?", &YsyntaxYsexpr_locQ},
  {"sexpr-tagged-list?", &YsyntaxYsexpr_tagged_listQ},
  {"sexpr-prop-init", &YsyntaxYsexpr_prop_init},
  {"*bq-list*", &YsyntaxYTbq_listT},
  {"sexpr-pattern-variable?", &YsyntaxYsexpr_pattern_variableQ},
  {"sexpr-method?", &YsyntaxYsexpr_methodQ},
  {"sexpr-let-values", &YsyntaxYsexpr_let_values},
  {"*bq-append*", &YsyntaxYTbq_appendT},
  {"sexpr-sequence->begin", &YsyntaxYsexpr_sequence_Gbegin},
  {"sexpr-syntax-if?", &YsyntaxYsexpr_syntax_ifQ},
  {"*unique-name-counter*", &YsyntaxYTunique_name_counterT},
  {"sexpr-method-parameters", &YsyntaxYsexpr_method_parameters},
  {"sexpr-make-begin", &YsyntaxYsexpr_make_begin},
  {"sexpr-define-class-parents", &YsyntaxYsexpr_define_class_parents},
  {"sexpr-monitor-info", &YsyntaxYsexpr_monitor_info},
  {"<name>", &YsyntaxYLnameG},
  {"sexpr-if-test", &YsyntaxYsexpr_if_test},
  {"sexpr-atom?", &YsyntaxYsexpr_atomQ},
  {"sexpr-variable-name", &YsyntaxYsexpr_variable_name},
  {"sexpr-monitor-test", &YsyntaxYsexpr_monitor_test},
  {"sexpr-let-body", &YsyntaxYsexpr_let_body},
  {"sexpr-unwind-protect-protected-form", &YsyntaxYsexpr_unwind_protect_protected_form},
  {"sexpr-application?", &YsyntaxYsexpr_applicationQ},
  {"sexpr-definition?", &YsyntaxYsexpr_definitionQ},
  {"eval", &YsyntaxYeval},
  {"sexpr-syntax-definition-variable", &YsyntaxYsexpr_syntax_definition_variable},
  {"sexpr-iterate-signature", &YsyntaxYsexpr_iterate_signature},
  {"sexpr-method-body", &YsyntaxYsexpr_method_body},
  {"sexpr-prop-type", &YsyntaxYsexpr_prop_type},
  {"sexpr-rest-exps", &YsyntaxYsexpr_rest_exps},
  {"sexpr-syntax-if-else", &YsyntaxYsexpr_syntax_if_else},
  {"sexpr-method-signature", &YsyntaxYsexpr_method_signature},
  {"sexpr-no-operands?", &YsyntaxYsexpr_no_operandsQ},
  {"sexpr-self-evaluating?", &YsyntaxYsexpr_self_evaluatingQ},
  {"sexpr-monitor-body", &YsyntaxYsexpr_monitor_body},
  {"sexpr-function-value", &YsyntaxYsexpr_function_value},
  {"$sexpr-if-tag", &YsyntaxYDsexpr_if_tag},
  {"$sexpr-define-function-tag", &YsyntaxYDsexpr_define_function_tag},
  {"sexpr-prop-owner", &YsyntaxYsexpr_prop_owner},
  {"---main-1---", NULL},
  {"sexpr-isa-init-values", &YsyntaxYsexpr_isa_init_values},
  {"sexpr-generic-definition?", &YsyntaxYsexpr_generic_definitionQ},
  {"sexpr-block-name", &YsyntaxYsexpr_block_name},
  {"sexpr-syntax-definition?", &YsyntaxYsexpr_syntax_definitionQ},
  {"sexpr-macro?", &YsyntaxYsexpr_macroQ},
  {"sexpr-fab-setter", &YsyntaxYsexpr_fab_setter},
  {"sexpr-function-signature", &YsyntaxYsexpr_function_signature},
  {"sexpr-make-method", &YsyntaxYsexpr_make_method},
  {"sexpr-expand-backquote", &YsyntaxYsexpr_expand_backquote},
  {"$sexpr-locals-tag", &YsyntaxYDsexpr_locals_tag},
  {"sexpr-iterate-name", &YsyntaxYsexpr_iterate_name},
  {"sexpr-iterate-inits", &YsyntaxYsexpr_iterate_inits},
  {"*comma-atsign*", &YsyntaxYTcomma_atsignT},
  {"sexpr-assignment?", &YsyntaxYsexpr_assignmentQ},
  {"sexpr-assignment-variable", &YsyntaxYsexpr_assignment_variable},
  {"$sexpr-define-generic-tag", &YsyntaxYDsexpr_define_generic_tag},
  {"sexpr-if-else", &YsyntaxYsexpr_if_else},
  {"sexpr-define-class?", &YsyntaxYsexpr_define_classQ},
  {"sexpr-bind-pattern-variables", &YsyntaxYsexpr_bind_pattern_variables},
  {"sexpr-operator", &YsyntaxYsexpr_operator},
  {"sexpr-function-body", &YsyntaxYsexpr_function_body},
  {"sexpr-def-variable", &YsyntaxYsexpr_def_variable},
  {"sexpr-operands", &YsyntaxYsexpr_operands},
  {"sexpr-text-of-quotation", &YsyntaxYsexpr_text_of_quotation},
  {"sexpr-prop-init-var", &YsyntaxYsexpr_prop_init_var},
  {"sexpr-prop-name", &YsyntaxYsexpr_prop_name},
  {"$sexpr-isa-tag", &YsyntaxYDsexpr_isa_tag},
  {"nreconc", &YsyntaxYnreconc},
  {"sexpr-loc-body", &YsyntaxYsexpr_loc_body},
  {"sexpr-make-if", &YsyntaxYsexpr_make_if},
  {"map-tree", &YsyntaxYmap_tree},
  {"$sexpr-quote-tag", &YsyntaxYDsexpr_quote_tag},
  {"sexpr-signature-parameters", &YsyntaxYsexpr_signature_parameters},
  {"sexpr-syntax-definition-value", &YsyntaxYsexpr_syntax_definition_value},
  {"sexpr-loc-bound-names", &YsyntaxYsexpr_loc_bound_names},
  {"sexpr-loc-bound-bodies", &YsyntaxYsexpr_loc_bound_bodies},
  {"sexpr-if-then", &YsyntaxYsexpr_if_then},
  {"sexpr-backquote?", &YsyntaxYsexpr_backquoteQ},
  {"sexpr-loc-raw-body", &YsyntaxYsexpr_loc_raw_body},
  {"sexpr-fab-setter-name", &YsyntaxYsexpr_fab_setter_name},
  {"sexpr-signature-value", &YsyntaxYsexpr_signature_value},
  {"sexpr-make-application", &YsyntaxYsexpr_make_application},
  {"sexpr-unwind-protect?", &YsyntaxYsexpr_unwind_protectQ},
  {"sexpr-make-quote", &YsyntaxYsexpr_make_quote},
  {"sexpr-prop-init?", &YsyntaxYsexpr_prop_initQ},
  {"sexpr-definition-variable", &YsyntaxYsexpr_definition_variable},
  {"$sexpr-define-class-tag", &YsyntaxYDsexpr_define_class_tag},
  {"sexpr-function-definition?", &YsyntaxYsexpr_function_definitionQ},
  {"sexpr-quoted?", &YsyntaxYsexpr_quotedQ},
  {"sexpr-method-value", &YsyntaxYsexpr_method_value},
  {"sexpr-isa-init-props", &YsyntaxYsexpr_isa_init_props},
  {"sexpr-fab-getter", &YsyntaxYsexpr_fab_getter},
  {"sexpr-isa?", &YsyntaxYsexpr_isaQ},
  {"*bq-list**", &YsyntaxYTbq_listTT},
  {"$sexpr-define-tag", &YsyntaxYDsexpr_define_tag},
  {"---main-0---", NULL},
  {"sexpr-definition-value", &YsyntaxYsexpr_definition_value},
  {"sexpr-unique-name", &YsyntaxYsexpr_unique_name},
  {"sexpr-function-definition-variable", &YsyntaxYsexpr_function_definition_variable},
  {"sexpr-iterate-body", &YsyntaxYsexpr_iterate_body},
  {"$sexpr-macro-expand-tag", &YsyntaxYDsexpr_macro_expand_tag},
  {"sexpr-make-macro-function", &YsyntaxYsexpr_make_macro_function},
  {"sexpr-let-bound-variables", &YsyntaxYsexpr_let_bound_variables},
  {"sexpr-monitor-type", &YsyntaxYsexpr_monitor_type},
  {"sexpr-unquote-splicing?", &YsyntaxYsexpr_unquote_splicingQ},
  {"sexpr-monitor?", &YsyntaxYsexpr_monitorQ},
  {"sexpr-isa-parent", &YsyntaxYsexpr_isa_parent},
  {"$sexpr-set-tag", &YsyntaxYDsexpr_set_tag},
  {"$sexpr-begin-tag", &YsyntaxYDsexpr_begin_tag},
  {"sexpr-def?", &YsyntaxYsexpr_defQ},
  {"*bq-nconc*", &YsyntaxYTbq_nconcT},
  {"sexpr-function-definition-value", &YsyntaxYsexpr_function_definition_value},
  {"$sexpr-prop-tag", &YsyntaxYDsexpr_prop_tag},
  {"sexpr-if?", &YsyntaxYsexpr_ifQ},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"$sexpr-quasiquote-tag", "$sexpr-quasiquote-tag"},
  {"sexpr-iterate->loc", "sexpr-iterate->loc"},
  {"sexpr-syntax-if-then", "sexpr-syntax-if-then"},
  {"$sexpr-define-method-tag", "$sexpr-define-method-tag"},
  {"sexpr-loc-bound-signatures", "sexpr-loc-bound-signatures"},
  {"$sexpr-define-syntax-tag", "$sexpr-define-syntax-tag"},
  {"sexpr-unwind-protect-cleanup-forms", "sexpr-unwind-protect-cleanup-forms"},
  {"$sexpr-bind-exit-tag", "$sexpr-bind-exit-tag"},
  {"sexpr-block-body", "sexpr-block-body"},
  {"$sexpr-unwind-protect-tag", "$sexpr-unwind-protect-tag"},
  {"sexpr-forward-primitive?", "sexpr-forward-primitive?"},
  {"sexpr-monitor-expand", "sexpr-monitor-expand"},
  {"sexpr-isa-prop-inits", "sexpr-isa-prop-inits"},
  {"$sexpr-iterate-tag", "$sexpr-iterate-tag"},
  {"sexpr-variable?", "sexpr-variable?"},
  {"$sexpr-monitor-tag", "$sexpr-monitor-tag"},
  {"sexpr-let->combination", "sexpr-let->combination"},
  {"sexpr-syntax-if-value", "sexpr-syntax-if-value"},
  {"sexpr-unquote?", "sexpr-unquote?"},
  {"sexpr-assignment-value", "sexpr-assignment-value"},
  {"sexpr-variable-type", "sexpr-variable-type"},
  {"$sexpr-syntax-if-tag", "$sexpr-syntax-if-tag"},
  {"sexpr-make-anonymous-method", "sexpr-make-anonymous-method"},
  {"$sexpr-method-tag", "$sexpr-method-tag"},
  {"$sexpr-let-tag", "$sexpr-let-tag"},
  {"$sexpr-def-tag", "$sexpr-def-tag"},
  {"sexpr-prop-init", "sexpr-prop-init"},
  {"sexpr-sequence->begin", "sexpr-sequence->begin"},
  {"sexpr-make-begin", "sexpr-make-begin"},
  {"sexpr-define-class-parents", "sexpr-define-class-parents"},
  {"sexpr-if-test", "sexpr-if-test"},
  {"sexpr-variable-name", "sexpr-variable-name"},
  {"sexpr-fab-setter", "sexpr-fab-setter"},
  {"sexpr-unwind-protect-protected-form", "sexpr-unwind-protect-protected-form"},
  {"eval", "eval"},
  {"sexpr-syntax-definition-variable", "sexpr-syntax-definition-variable"},
  {"sexpr-method-body", "sexpr-method-body"},
  {"sexpr-prop-type", "sexpr-prop-type"},
  {"sexpr-syntax-if-else", "sexpr-syntax-if-else"},
  {"sexpr-method-signature", "sexpr-method-signature"},
  {"$sexpr-if-tag", "$sexpr-if-tag"},
  {"$sexpr-define-function-tag", "$sexpr-define-function-tag"},
  {"sexpr-prop-owner", "sexpr-prop-owner"},
  {"sexpr-isa-init-values", "sexpr-isa-init-values"},
  {"sexpr-block-name", "sexpr-block-name"},
  {"sexpr-function-signature", "sexpr-function-signature"},
  {"sexpr-expand-backquote", "sexpr-expand-backquote"},
  {"$sexpr-locals-tag", "$sexpr-locals-tag"},
  {"sexpr-assignment-variable", "sexpr-assignment-variable"},
  {"$sexpr-define-generic-tag", "$sexpr-define-generic-tag"},
  {"sexpr-if-else", "sexpr-if-else"},
  {"sexpr-bind-pattern-variables", "sexpr-bind-pattern-variables"},
  {"sexpr-operator", "sexpr-operator"},
  {"sexpr-function-body", "sexpr-function-body"},
  {"sexpr-def-variable", "sexpr-def-variable"},
  {"sexpr-operands", "sexpr-operands"},
  {"sexpr-text-of-quotation", "sexpr-text-of-quotation"},
  {"sexpr-syntax-if-pattern", "sexpr-syntax-if-pattern"},
  {"sexpr-prop-init-var", "sexpr-prop-init-var"},
  {"sexpr-prop-name", "sexpr-prop-name"},
  {"$sexpr-isa-tag", "$sexpr-isa-tag"},
  {"$sexpr-quote-tag", "$sexpr-quote-tag"},
  {"sexpr-signature-parameters", "sexpr-signature-parameters"},
  {"sexpr-isa-init-props", "sexpr-isa-init-props"},
  {"sexpr-loc-bound-names", "sexpr-loc-bound-names"},
  {"sexpr-syntax-definition-value", "sexpr-syntax-definition-value"},
  {"sexpr-loc-bound-bodies", "sexpr-loc-bound-bodies"},
  {"sexpr-if-then", "sexpr-if-then"},
  {"sexpr-def-value", "sexpr-def-value"},
  {"sexpr-loc-raw-body", "sexpr-loc-raw-body"},
  {"sexpr-fab-setter-name", "sexpr-fab-setter-name"},
  {"sexpr-signature-value", "sexpr-signature-value"},
  {"sexpr-make-application", "sexpr-make-application"},
  {"sexpr-prop-init?", "sexpr-prop-init?"},
  {"sexpr-definition-variable", "sexpr-definition-variable"},
  {"$sexpr-define-class-tag", "$sexpr-define-class-tag"},
  {"$sexpr-set-tag", "$sexpr-set-tag"},
  {"sexpr-define-class?", "sexpr-define-class?"},
  {"sexpr-fab-getter", "sexpr-fab-getter"},
  {"$sexpr-define-tag", "$sexpr-define-tag"},
  {"sexpr-definition-value", "sexpr-definition-value"},
  {"sexpr-function-definition-variable", "sexpr-function-definition-variable"},
  {"$sexpr-macro-expand-tag", "$sexpr-macro-expand-tag"},
  {"sexpr-make-macro-function", "sexpr-make-macro-function"},
  {"sexpr-unquote-splicing?", "sexpr-unquote-splicing?"},
  {"sexpr-isa-parent", "sexpr-isa-parent"},
  {"$sexpr-begin-tag", "$sexpr-begin-tag"},
  {"sexpr-def?", "sexpr-def?"},
  {"sexpr-function-definition-value", "sexpr-function-definition-value"},
  {"$sexpr-prop-tag", "$sexpr-prop-tag"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_syntax;
MODULE_INFO module_info_syntax = {
  "syntax",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_boot (void);
extern void load_module_macros (void);
extern void load_module_runtime (void);
extern void load_module_protoSmath (void);
extern void load_module_protoStypes (void);
extern void load_module_protoScollections (void);

/* EXPRESSION: */

extern void load_module_syntax (void);

void load_module_syntax (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_runtime();
  load_module_protoSmath();
  load_module_protoStypes();
  load_module_protoScollections();

  (P)YsyntaxY___main_0___();
  (P)YsyntaxY___main_1___();
  (P)YsyntaxY___main_2___();

}

/* END OF GENERATED CODE. */
