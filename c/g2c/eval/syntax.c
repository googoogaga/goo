/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: syntax */

EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YprotoScollectionsSsequenceYlast,"proto/collections/sequence","last");
EXT(Ytype_error,"boot","type-error");
DEF(YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
EXT(YLoptsG,"boot","<opts>");
DEF(YsyntaxYsexpr_monitor_test,"syntax","sexpr-monitor-test");
DEF(YsyntaxYTbq_listT,"syntax","*bq-list*");
EXT(YruntimeYidentity,"runtime","identity");
DEF(YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYTgensym_counterT,"runtime","*gensym-counter*");
DEF(YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
EXT(YprotoScollectionsSassocYassocs_test,"proto/collections/assoc","assocs-test");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
DEF(YsyntaxYsexpr_pattern_variable_name,"syntax","sexpr-pattern-variable-name");
EXT(YprotoSmathYzeroQ,"proto/math","zero?");
EXT(YprotoScollectionsSstringYTprint_baseT,"proto/collections/string","*print-base*");
EXT(YprotoScollectionsScollectionYfill,"proto/collections/collection","fill");
EXT(YDmin_int,"boot","$min-int");
EXT(YprotoSmathYE,"proto/math","=");
EXT(YprotoSmathYnulQ,"proto/math","nul?");
EXT(YprotoScollectionsSlistYLlistG,"proto/collections/list","<list>");
DEF(YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
DEF(YsyntaxYsexpr_blockQ,"syntax","sexpr-block?");
DEF(YsyntaxYbracket,"syntax","bracket");
DEF(YsyntaxYmap_tree,"syntax","map-tree");
DEF(YsyntaxYbq_remove_tokens,"syntax","bq-remove-tokens");
EXT(YmacrosYfin_stateQ,"macros","fin-state?");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YprotoScollectionsScollectionYnow_elt_setter,"proto/collections/collection","now-elt-setter");
EXT(YruntimeYalways,"runtime","always");
EXT(YprotoSmathYuppercaseQ,"proto/math","uppercase?");
EXT(YprotoScollectionsStableYtable_shrink_threshold,"proto/collections/table","table-shrink-threshold");
EXT(YprotoScollectionsSrangeYfrom,"proto/collections/range","from");
EXT(YprotoScollectionsScollectionYany2Q,"proto/collections/collection","any2?");
DEF(YsyntaxYTunique_name_counterT,"syntax","*unique-name-counter*");
EXT(YprotoScollectionsScollectionYdo3,"proto/collections/collection","do3");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YprotoSmathYS,"proto/math","/");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
DEF(YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
EXT(YprotoSmathYto_str,"proto/math","to-str");
EXT(YprotoSmathYroundS,"proto/math","round/");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
DEF(YsyntaxYsexpr_macro_expandQ,"syntax","sexpr-macro-expand?");
EXT(Ytype_object,"boot","type-object");
DEF(YsyntaxYsexpr_let_bound_variables,"syntax","sexpr-let-bound-variables");
DEF(YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YmacrosYini_state,"macros","ini-state");
EXT(YLclassG,"boot","<class>");
EXT(YprotoScollectionsScollectionYlen,"proto/collections/collection","len");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YprotoScollectionsSrangeYfrom_to_by,"proto/collections/range","from-to-by");
EXT(YruntimeYread,"runtime","read");
EXT(YprotoSmathYA,"proto/math","+");
EXT(YruntimeYformat,"runtime","format");
DEF(YsyntaxYsexpr_isaQ,"syntax","sexpr-isa?");
EXT(YprotoScollectionsSsequenceYsub,"proto/collections/sequence","sub");
DEF(YsyntaxYsexpr_slotQ,"syntax","sexpr-slot?");
DEF(YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
DEF(YsyntaxYsexpr_let_values,"syntax","sexpr-let-values");
EXT(YprotoScollectionsStableYLstr_tabG,"proto/collections/table","<str-tab>");
DEF(YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
DEF(YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
EXT(YLtypeG,"boot","<type>");
DEF(YsyntaxYsexpr_backquoteQ,"syntax","sexpr-backquote?");
EXT(YprotoStypesYfalse_or,"proto/types","false-or");
DEF(YsyntaxYsexpr_slot_object,"syntax","sexpr-slot-object");
EXT(YprotoScollectionsScollectionYadd,"proto/collections/collection","add");
EXT(YprotoSmathYevenQ,"proto/math","even?");
EXT(YprotoSmathYLE,"proto/math","<=");
EXT(YprotoSmathYcontagious_type,"proto/math","contagious-type");
EXT(YprotoScollectionsStableYtable_growth_factor_setter,"proto/collections/table","table-growth-factor-setter");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YprotoScollectionsScollectionYdel_keys,"proto/collections/collection","del-keys");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YprotoScollectionsSbufferYlen_setter,"proto/collections/buffer","len-setter");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ysig_naryQ,"boot","sig-nary?");
DEF(YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
EXT(YLgenG,"boot","<gen>");
DEF(YsyntaxYsexpr_method_value,"syntax","sexpr-method-value");
DEF(YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
EXT(Yslot_init,"boot","slot-init");
DEF(YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
DEF(YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
DEF(YsyntaxYsexpr_first_exp,"syntax","sexpr-first-exp");
EXT(YprotoScollectionsSlistYassqn,"proto/collections/list","assqn");
EXT(YprotoScollectionsScollectionYinto,"proto/collections/collection","into");
EXT(YprotoSmathYto_digit,"proto/math","to-digit");
EXT(Yobject_slots,"boot","object-slots");
EXT(YprotoScollectionsStableYid_hash,"proto/collections/table","id-hash");
DEF(YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
EXT(YLsymG,"boot","<sym>");
EXT(YprotoStypesYtL,"proto/types","t<");
EXT(YprotoScollectionsSassocYassocs_test_setter,"proto/collections/assoc","assocs-test-setter");
DEF(YsyntaxYsexpr_build_backquote_expander,"syntax","sexpr-build-backquote-expander");
EXT(Yfind_setter,"boot","find-setter");
DEF(YsyntaxYsexpr_unique_name,"syntax","sexpr-unique-name");
DEF(YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
EXT(YprotoSmathYlogior,"proto/math","logior");
EXT(YprotoSmathYfabs,"proto/math","fabs");
DEF(YsyntaxYsexpr_monitor_body,"syntax","sexpr-monitor-body");
EXT(YprotoSmathYLbotG,"proto/math","<bot>");
EXT(YprotoSmathYflo_bits,"proto/math","flo-bits");
EXT(YprotoSmathYround,"proto/math","round");
DEF(YsyntaxYsexpr_first_operand,"syntax","sexpr-first-operand");
EXT(Yclass_direct_children,"boot","class-direct-children");
DEF(YsyntaxYsexpr_macroQ,"syntax","sexpr-macro?");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YprotoScollectionsSsequenceYcat2,"proto/collections/sequence","cat2");
DEF(YsyntaxYsexpr_assignmentQ,"syntax","sexpr-assignment?");
DEF(YsyntaxYsexpr_tagged_listQ,"syntax","sexpr-tagged-list?");
DEF(YsyntaxYsexpr_function_definitionQ,"syntax","sexpr-function-definition?");
DEF(YsyntaxYsexpr_define_classQ,"syntax","sexpr-define-class?");
DEF(YsyntaxYeval,"syntax","eval");
DEF(YsyntaxYsexpr_begin_actions,"syntax","sexpr-begin-actions");
EXT(YLstrG,"boot","<str>");
EXT(YprotoSmathYtruncateS,"proto/math","truncate/");
EXT(YruntimeYsig,"runtime","sig");
EXT(YprotoScollectionsStableYtable_protocol,"proto/collections/table","table-protocol");
EXT(YprotoSmathYas_log,"proto/math","as-log");
DEF(YsyntaxYsexpr_self_evaluatingQ,"syntax","sexpr-self-evaluating?");
EXT(YPvnul,"boot","%vnul");
EXT(YprotoScollectionsScollectionYdel_key,"proto/collections/collection","del-key");
EXT(YprotoScollectionsSsequenceYpos,"proto/collections/sequence","pos");
DEF(YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
DEF(YsyntaxYsexpr_make_method,"syntax","sexpr-make-method");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YprotoStypesYtE,"proto/types","t=");
EXT(YprotoScollectionsScollectionYdo,"proto/collections/collection","do");
EXT(YprotoSmathYG,"proto/math",">");
EXT(YprotoSmathYL,"proto/math","<");
EXT(Yerror,"boot","error");
EXT(YprotoSmathYmax,"proto/math","max");
EXT(YLvecG,"boot","<vec>");
EXT(Yslot_owner,"boot","slot-owner");
DEF(YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(Yfun_names,"boot","fun-names");
EXT(YLmetG,"boot","<met>");
DEF(YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
EXT(YprotoScollectionsScollectionYfab,"proto/collections/collection","fab");
DEF(YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
DEF(YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
DEF(YsyntaxYsexpr_let_body,"syntax","sexpr-let-body");
EXT(Yhead_setter,"boot","head-setter");
EXT(YprotoScollectionsSsequenceYdo_key_vals,"proto/collections/sequence","do-key-vals");
DEF(YsyntaxYsexpr_operator,"syntax","sexpr-operator");
EXT(YprotoScollectionsSbufferYlenSfill_setter,"proto/collections/buffer","len/fill-setter");
EXT(YruntimeYcondition_message,"runtime","condition-message");
DEF(YsyntaxYsexpr_iterate_name,"syntax","sexpr-iterate-name");
DEF(YsyntaxYsexpr_quotedQ,"syntax","sexpr-quoted?");
DEF(YsyntaxYsexpr_make_if,"syntax","sexpr-make-if");
EXT(YprotoScollectionsSsequenceYrange_checkQ,"proto/collections/sequence","range-check?");
EXT(YprotoScollectionsScollectionYall2Q,"proto/collections/collection","all2?");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
DEF(YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
DEF(YsyntaxYsexpr_slot_variable,"syntax","sexpr-slot-variable");
EXT(YprotoScollectionsSsequenceYcatX,"proto/collections/sequence","cat!");
DEF(YsyntaxYsexpr_operands,"syntax","sexpr-operands");
DEF(YsyntaxYsexpr_function_parameters,"syntax","sexpr-function-parameters");
DEF(YsyntaxYsexpr_function_value,"syntax","sexpr-function-value");
EXT(Yfind_getter,"boot","find-getter");
DEF(YsyntaxYsexpr_generic_definitionQ,"syntax","sexpr-generic-definition?");
EXT(YmacrosYpair,"macros","pair");
DEF(YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
EXT(YLflatG,"boot","<flat>");
EXT(Yhead,"boot","head");
EXT(YprotoScollectionsSrangeYfrom_above,"proto/collections/range","from-above");
DEF(YsyntaxYsexpr_iterate_signature,"syntax","sexpr-iterate-signature");
EXT(YprotoSmathYnegQ,"proto/math","neg?");
DEF(YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
DEF(YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YprotoStypesYtA,"proto/types","t+");
DEF(YsyntaxYsexpr_syntax_definitionQ,"syntax","sexpr-syntax-definition?");
EXT(YprotoScollectionsScollectionYfind_key,"proto/collections/collection","find-key");
EXT(Ynul,"boot","nul");
DEF(YsyntaxYsexpr_rest_exps,"syntax","sexpr-rest-exps");
DEF(YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
EXT(Yobject_class,"boot","object-class");
EXT(YprotoSmathYlogxor,"proto/math","logxor");
DEF(YsyntaxYsexpr_ifQ,"syntax","sexpr-if?");
DEF(YsyntaxYsexpr_beginQ,"syntax","sexpr-begin?");
EXT(YprotoSmathYNEE,"proto/math","~==");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YprotoScollectionsSbufferYpop_lastX,"proto/collections/buffer","pop-last!");
EXT(Ysym_name,"boot","sym-name");
DEF(YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
DEF(YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YprotoSmathYas_lowercase,"proto/math","as-lowercase");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YprotoScollectionsStableYtable_shrink_threshold_setter,"proto/collections/table","table-shrink-threshold-setter");
EXT(YprotoSmathYeof_objectQ,"proto/math","eof-object?");
DEF(YsyntaxYsexpr_monitorQ,"syntax","sexpr-monitor?");
DEF(YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
EXT(YLfunG,"boot","<fun>");
EXT(YprotoSmathYmodulo,"proto/math","modulo");
EXT(YmacrosYnapply,"macros","napply");
EXT(YprotoScollectionsSsequenceYrange_check,"proto/collections/sequence","range-check");
DEF(YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
EXT(YprotoScollectionsScollectionYmemQ,"proto/collections/collection","mem?");
EXT(YLlstG,"boot","<lst>");
EXT(YPsnul,"boot","%snul");
EXT(YprotoScollectionsSsequenceYaddX,"proto/collections/sequence","add!");
DEF(YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
EXT(YDmax_int,"boot","$max-int");
EXT(YruntimeYmake_handler,"runtime","make-handler");
DEF(YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
EXT(YprotoScollectionsSmapYfab_map,"proto/collections/map","fab-map");
DEF(YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
EXT(YprotoSmathYT,"proto/math","*");
DEF(YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
DEF(YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
EXT(YprotoSmathYoddQ,"proto/math","odd?");
EXT(Ysig_specs,"boot","sig-specs");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YprotoScollectionsScollectionYreduceA,"proto/collections/collection","reduce+");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YLseqG,"boot","<seq>");
EXT(YmacrosYcat,"macros","cat");
EXT(YprotoSmathY_,"proto/math","-");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YprotoScollectionsScollectionYallQ,"proto/collections/collection","all?");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(Ytail,"boot","tail");
DEF(YsyntaxYTcomma_atsignT,"syntax","*comma-atsign*");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
DEF(YsyntaxYsexpr_isa_parent,"syntax","sexpr-isa-parent");
EXT(YprotoScollectionsStableYLtabG,"proto/collections/table","<tab>");
DEF(YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
EXT(YprotoScollectionsSstringYascii_limit,"proto/collections/string","ascii-limit");
DEF(YsyntaxYsexpr_let_namesAvalues,"syntax","sexpr-let-names+values");
EXT(YprotoStypesYas,"proto/types","as");
EXT(YprotoScollectionsSbufferYpush_lastX,"proto/collections/buffer","push-last!");
EXT(YprotoScollectionsSrangeYfrom_to,"proto/collections/range","from-to");
EXT(Ylst,"boot","lst");
EXT(Yclass_slots,"boot","class-slots");
EXT(YprotoScollectionsSsequenceYrange_error,"proto/collections/sequence","range-error");
DEF(YsyntaxYsexpr_slot_init,"syntax","sexpr-slot-init");
EXT(YprotoSmathYalphabeticQ,"proto/math","alphabetic?");
DEF(YsyntaxYsexpr_atomQ,"syntax","sexpr-atom?");
DEF(YsyntaxYsexpr_no_operandsQ,"syntax","sexpr-no-operands?");
EXT(YLcolG,"boot","<col>");
EXT(YprotoScollectionsSsequenceYvals_to_str,"proto/collections/sequence","vals-to-str");
EXT(YprotoSmathYGE,"proto/math",">=");
EXT(YprotoScollectionsStableYtable_growth_threshold,"proto/collections/table","table-growth-threshold");
EXT(Yfab_class,"boot","fab-class");
EXT(YprotoSmathYlogand,"proto/math","logand");
DEF(YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
DEF(YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
EXT(YLtupG,"boot","<tup>");
DEF(YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
EXT(YprotoScollectionsScollectionYdefault,"proto/collections/collection","default");
EXT(YprotoScollectionsScollectionYmap_keyed,"proto/collections/collection","map-keyed");
EXT(YprotoSmathYtruncate,"proto/math","truncate");
DEF(YsyntaxYsexpr_iterate_inits,"syntax","sexpr-iterate-inits");
DEF(YsyntaxYsexpr_syntax_ifQ,"syntax","sexpr-syntax-if?");
DEF(YsyntaxYTbq_nconcT,"syntax","*bq-nconc*");
EXT(YprotoSmathYeof_object,"proto/math","eof-object");
EXT(YLsigG,"boot","<sig>");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YruntimeYcompose,"runtime","compose");
DEF(YsyntaxYsexpr_make_getter,"syntax","sexpr-make-getter");
DEF(YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
DEF(YsyntaxYDsexpr_define_class_tag,"syntax","$sexpr-define-class-tag");
EXT(YprotoScollectionsSlistYlist,"proto/collections/list","list");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YLlocG,"boot","<loc>");
EXT(YprotoSmathYaddress_of,"proto/math","address-of");
EXT(YprotoScollectionsSbufferYbuf,"proto/collections/buffer","buf");
DEF(YsyntaxYTbq_quoteT,"syntax","*bq-quote*");
EXT(YprotoSmathYremainder,"proto/math","remainder");
EXT(YprotoScollectionsScollectionYreduce,"proto/collections/collection","reduce");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YprotoScollectionsScollectionYkeys,"proto/collections/collection","keys");
EXT(YprotoScollectionsSsequenceYdel_dups,"proto/collections/sequence","del-dups");
EXT(Ytype_elts,"boot","type-elts");
DEF(YsyntaxYsexpr_methodQ,"syntax","sexpr-method?");
EXT(YprotoSmathYnum_to_str,"proto/math","num-to-str");
DEF(YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
DEF(YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
DEF(YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
EXT(YprotoScollectionsSsequenceYrev,"proto/collections/sequence","rev");
DEF(YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
EXT(YprotoScollectionsSrangeYfrom_below_by,"proto/collections/range","from-below-by");
EXT(YPisa,"boot","%isa");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
DEF(YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
EXT(YLfloG,"boot","<flo>");
DEF(YsyntaxYsexpr_define_class_parents,"syntax","sexpr-define-class-parents");
DEF(YsyntaxYfind_option,"syntax","find-option");
EXT(YprotoScollectionsStableYcase_insensitive_string_equal,"proto/collections/table","case-insensitive-string-equal");
EXT(YprotoSmathYfloor,"proto/math","floor");
EXT(YprotoScollectionsScollectionYdo_keyed,"proto/collections/collection","do-keyed");
DEF(YsyntaxYsexpr_method_definitionQ,"syntax","sexpr-method-definition?");
EXT(Ysig_value,"boot","sig-value");
EXT(Yclass_name,"boot","class-name");
EXT(YprotoScollectionsScollectionYempty,"proto/collections/collection","empty");
EXT(YprotoScollectionsSsequenceYdel,"proto/collections/sequence","del");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
DEF(YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YprotoScollectionsSbufferYLbufG,"proto/collections/buffer","<buf>");
EXT(YprotoSmathYneg,"proto/math","neg");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YLnumG,"boot","<num>");
EXT(YLintG,"boot","<int>");
EXT(Ynil,"boot","nil");
EXT(YprotoScollectionsSstringYstr_to_num,"proto/collections/string","str-to-num");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YmacrosYEE,"macros","==");
DEF(YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
DEF(YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
DEF(YsyntaxYsexpr_letQ,"syntax","sexpr-let?");
DEF(YsyntaxYsexpr_make_syntax_if,"syntax","sexpr-make-syntax-if");
EXT(Yfun_value,"boot","fun-value");
DEF(YsyntaxYsexpr_isa_slot_inits,"syntax","sexpr-isa-slot-inits");
DEF(YsyntaxYsexpr_pattern_variableQ,"syntax","sexpr-pattern-variable?");
DEF(YsyntaxYsexpr_make_quote,"syntax","sexpr-make-quote");
EXT(YprotoScollectionsSstepYLstepG,"proto/collections/step","<step>");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YprotoSmathYlognot,"proto/math","lognot");
EXT(YLchrG,"boot","<chr>");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
DEF(YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
DEF(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
DEF(YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
EXT(YprotoScollectionsScollectionYlow_elt_setter,"proto/collections/collection","low-elt-setter");
EXT(YmacrosYemptyQ,"macros","empty?");
DEF(YsyntaxYsexpr_iterate_body,"syntax","sexpr-iterate-body");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
DEF(YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
EXT(YprotoScollectionsStableYcurrent_gc_state,"proto/collections/table","current-gc-state");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(Ysig_names,"boot","sig-names");
DEF(YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
EXT(YprotoSmathYas_uppercase,"proto/math","as-uppercase");
DEF(YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YprotoSmathYash,"proto/math","ash");
DEF(YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YPsymbols,"boot","%symbols");
EXT(YprotoScollectionsScollectionYmap2,"proto/collections/collection","map2");
EXT(YLlogG,"boot","<log>");
DEF(YsyntaxYTbq_appendT,"syntax","*bq-append*");
EXT(YprotoScollectionsStableYcase_insensitive_string_hash,"proto/collections/table","case-insensitive-string-hash");
EXT(Yvec,"boot","vec");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YprotoSmathYposQ,"proto/math","pos?");
EXT(YprotoScollectionsSmapYLmapG,"proto/collections/map","<map>");
DEF(YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
EXT(YLslotG,"boot","<slot>");
DEF(YsyntaxYsexpr_make_setter,"syntax","sexpr-make-setter");
EXT(YprotoScollectionsSsequenceYpick,"proto/collections/sequence","pick");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YprotoSmathYlowercaseQ,"proto/math","lowercase?");
EXT(YPPmacro,"boot","%%macro");
DEF(YsyntaxYsexpr_loc_body,"syntax","sexpr-loc-body");
EXT(YprotoSmathYchar_Gascii,"proto/math","char->ascii");
DEF(YsyntaxYsexpr_definitionQ,"syntax","sexpr-definition?");
EXT(Ynot,"boot","not");
EXT(YprotoScollectionsScollectionYanyQ,"proto/collections/collection","any?");
DEF(YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
DEF(YsyntaxYsexpr_locQ,"syntax","sexpr-loc?");
EXT(Yfun_name,"boot","fun-name");
EXT(YruntimeYcurry,"runtime","curry");
EXT(Yclass_parents,"boot","class-parents");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YLanyG,"boot","<any>");
EXT(YprotoScollectionsSrangeYLrangeG,"proto/collections/range","<range>");
DEF(YsyntaxYsexpr_monitor_expand,"syntax","sexpr-monitor-expand");
EXT(YprotoScollectionsScollectionYlow_elt,"proto/collections/collection","low-elt");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Ytype_class,"boot","type-class");
EXT(YprotoScollectionsSstringYstr,"proto/collections/string","str");
DEF(YsyntaxYTbq_listTT,"syntax","*bq-list**");
EXT(YprotoSmathYnumericQ,"proto/math","numeric?");
EXT(YLunionG,"boot","<union>");
DEF(YsyntaxYsexpr_unwind_protectQ,"syntax","sexpr-unwind-protect?");
EXT(YprotoSmathYfloorS,"proto/math","floor/");
DEF(YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
EXT(Yslot_value,"boot","slot-value");
EXT(Yfun_arity,"boot","fun-arity");
DEF(YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
DEF(YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
EXT(YprotoScollectionsSsequenceY3rd,"proto/collections/sequence","3rd");
EXT(YprotoScollectionsSsequenceYfrom_below,"proto/collections/sequence","from-below");
EXT(YprotoScollectionsStableYtable_growth_threshold_setter,"proto/collections/table","table-growth-threshold-setter");
DEF(YsyntaxYsexpr_make_setter_name,"syntax","sexpr-make-setter-name");
EXT(YprotoScollectionsStableYtable_growth_factor,"proto/collections/table","table-growth-factor");
EXT(YmacrosYmap,"macros","map");
DEF(YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
DEF(YsyntaxYsexpr_isa_init_slots,"syntax","sexpr-isa-init-slots");
EXT(YprotoSmathYlsh,"proto/math","lsh");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YprotoScollectionsSstringYascii_whitespaces,"proto/collections/string","ascii-whitespaces");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YprotoScollectionsSstepYfirst_then,"proto/collections/step","first-then");
EXT(YprotoScollectionsSlistYpush,"proto/collections/list","push");
EXT(YprotoScollectionsSlistYpop,"proto/collections/list","pop");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YmacrosYrevX,"macros","rev!");
DEF(YsyntaxYnreconc,"syntax","nreconc");
DEF(YsyntaxYDsexpr_values_tag,"syntax","$sexpr-values-tag");
EXT(YprotoScollectionsSrangeYfrom_above_by,"proto/collections/range","from-above-by");
EXT(YprotoSmathYmin,"proto/math","min");
DEF(YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
EXT(YprotoScollectionsSrangeYfrom_by,"proto/collections/range","from-by");
DEF(YsyntaxYbq_process,"syntax","bq-process");
EXT(YprotoScollectionsScollectionYas_copy,"proto/collections/collection","as-copy");
EXT(YprotoScollectionsScollectionYalter,"proto/collections/collection","alter");
EXT(YprotoScollectionsSassocYLassocsG,"proto/collections/assoc","<assocs>");
DEF(YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
EXT(YprotoScollectionsScollectionYcopy_state,"proto/collections/collection","copy-state");
EXT(YprotoScollectionsScollectionYelt_setter,"proto/collections/collection","elt-setter");
DEF(YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
DEF(YsyntaxYsexpr_rest_operands,"syntax","sexpr-rest-operands");
EXT(Yunexec,"boot","unexec");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYhandler_function,"runtime","handler-function");
DEF(YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
EXT(YLsingletonG,"boot","<singleton>");
DEF(YsyntaxYsexpr_monitor_info,"syntax","sexpr-monitor-info");
DEF(YsyntaxYsexpr_iterateQ,"syntax","sexpr-iterate?");
EXT(YprotoScollectionsSsequenceY2nd,"proto/collections/sequence","2nd");
EXT(Ytup,"boot","tup");
EXT(YprotoSmathYceiling,"proto/math","ceiling");
EXT(YprotoScollectionsStableYDpermanent_hash_state,"proto/collections/table","$permanent-hash-state");
EXT(YmacrosYnxt_state,"macros","nxt-state");
DEF(YsyntaxYLnameG,"syntax","<name>");
EXT(YprotoSmathYabs,"proto/math","abs");
EXT(YprotoSmathYceilingS,"proto/math","ceiling/");
DEF(YsyntaxYsexpr_applicationQ,"syntax","sexpr-application?");
DEF(YsyntaxYTbq_clobberableT,"syntax","*bq-clobberable*");
EXT(YruntimeYapp_args,"runtime","app-args");
DEF(YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
DEF(YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
DEF(YsyntaxYDsexpr_slot_tag,"syntax","$sexpr-slot-tag");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YprotoScollectionsScollectionYnow_key,"proto/collections/collection","now-key");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YprotoScollectionsSsequenceYsub_setter,"proto/collections/sequence","sub-setter");
DEF(YsyntaxYDsexpr_macro_tag,"syntax","$sexpr-macro-tag");
EXT(YPwith_monitor,"boot","%with-monitor");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YprotoSmathYnyi_error,"proto/math","nyi-error");
DEF(YsyntaxYsexpr_method_parameters,"syntax","sexpr-method-parameters");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
DEF(YsyntaxYsexpr_last_expQ,"syntax","sexpr-last-exp?");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YmacrosYnow_elt,"macros","now-elt");
EXT(YprotoSmathYNE,"proto/math","~=");
EXT(YprotoScollectionsScollectionYdo2,"proto/collections/collection","do2");
EXT(YprotoScollectionsSsequenceY1st,"proto/collections/sequence","1st");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YprotoSmathYlogbitQ,"proto/math","logbit?");
EXT(YprotoSmathYcontagious_call,"proto/math","contagious-call");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YmacrosYelt,"macros","elt");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YPdefine_method,"boot","%define-method");
DEF(YsyntaxYsexpr_monitor_type,"syntax","sexpr-monitor-type");
EXT(YprotoScollectionsSlistYassq,"proto/collections/list","assq");
DEF(YsyntaxYsexpr_new_unique_name_counterX,"syntax","sexpr-new-unique-name-counter!");
EXT(YprotoSmathYpower_of_two_ceiling,"proto/math","power-of-two-ceiling");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_233);
DEFLIT(lit_202);
DEFLIT(lit_164);
DEFLIT(lit_49);
DEFLIT(lit_36);
DEFLIT(lit_178);
DEFLIT(lit_180);
DEFLIT(lit_223);
DEFLIT(lit_4);
DEFLIT(lit_1);
DEFLIT(lit_170);
DEFLIT(lit_57);
DEFLIT(lit_75);
DEFLIT(lit_12);
DEFLIT(lit_44);
DEFLIT(lit_19);
DEFLIT(lit_194);
DEFLIT(lit_5);
DEFLIT(lit_78);
DEFLIT(lit_93);
DEFLIT(lit_124);
DEFLIT(lit_66);
DEFLIT(lit_70);
DEFLIT(lit_184);
DEFLIT(lit_173);
DEFLIT(lit_175);
DEFLIT(lit_84);
DEFLIT(lit_104);
DEFLIT(lit_222);
DEFLIT(lit_114);
DEFLIT(lit_211);
DEFLIT(lit_138);
DEFLIT(lit_159);
DEFLIT(lit_117);
DEFLIT(lit_139);
DEFLIT(lit_28);
DEFLIT(lit_148);
DEFLIT(lit_204);
DEFLIT(lit_23);
DEFLIT(lit_160);
DEFLIT(lit_31);
DEFLIT(lit_232);
DEFLIT(lit_163);
DEFLIT(lit_34);
DEFLIT(lit_165);
DEFLIT(lit_6);
DEFLIT(lit_205);
DEFLIT(lit_109);
DEFLIT(lit_37);
DEFLIT(lit_225);
DEFLIT(lit_129);
DEFLIT(lit_13);
DEFLIT(lit_168);
DEFLIT(lit_136);
DEFLIT(lit_154);
DEFLIT(lit_0);
DEFLIT(lit_79);
DEFLIT(lit_131);
DEFLIT(lit_41);
DEFLIT(lit_176);
DEFLIT(lit_219);
DEFLIT(lit_217);
DEFLIT(lit_76);
DEFLIT(lit_226);
DEFLIT(lit_86);
DEFLIT(lit_100);
DEFLIT(lit_88);
DEFLIT(lit_135);
DEFLIT(lit_8);
DEFLIT(lit_179);
DEFLIT(lit_92);
DEFLIT(lit_125);
DEFLIT(lit_26);
DEFLIT(lit_46);
DEFLIT(lit_91);
DEFLIT(lit_101);
DEFLIT(lit_174);
DEFLIT(lit_153);
DEFLIT(lit_231);
DEFLIT(lit_105);
DEFLIT(lit_20);
DEFLIT(lit_199);
DEFLIT(lit_214);
DEFLIT(lit_190);
DEFLIT(lit_39);
DEFLIT(lit_68);
DEFLIT(lit_213);
DEFLIT(lit_108);
DEFLIT(lit_130);
DEFLIT(lit_151);
DEFLIT(lit_132);
DEFLIT(lit_90);
DEFLIT(lit_111);
DEFLIT(lit_141);
DEFLIT(lit_203);
DEFLIT(lit_121);
DEFLIT(lit_228);
DEFLIT(lit_230);
DEFLIT(lit_127);
DEFLIT(lit_246);
DEFLIT(lit_166);
DEFLIT(lit_191);
DEFLIT(lit_10);
DEFLIT(lit_16);
DEFLIT(lit_3);
DEFLIT(lit_73);
DEFLIT(lit_14);
DEFLIT(lit_60);
DEFLIT(lit_238);
DEFLIT(lit_51);
DEFLIT(lit_181);
DEFLIT(lit_56);
DEFLIT(lit_162);
DEFLIT(lit_74);
DEFLIT(lit_11);
DEFLIT(lit_43);
DEFLIT(lit_221);
DEFLIT(lit_196);
DEFLIT(lit_63);
DEFLIT(lit_25);
DEFLIT(lit_201);
DEFLIT(lit_97);
DEFLIT(lit_210);
DEFLIT(lit_52);
DEFLIT(lit_242);
DEFLIT(lit_197);
DEFLIT(lit_80);
DEFLIT(lit_126);
DEFLIT(lit_146);
DEFLIT(lit_24);
DEFLIT(lit_96);
DEFLIT(lit_113);
DEFLIT(lit_207);
DEFLIT(lit_122);
DEFLIT(lit_29);
DEFLIT(lit_106);
DEFLIT(lit_152);
DEFLIT(lit_115);
DEFLIT(lit_118);
DEFLIT(lit_140);
DEFLIT(lit_59);
DEFLIT(lit_119);
DEFLIT(lit_237);
DEFLIT(lit_62);
DEFLIT(lit_234);
DEFLIT(lit_240);
DEFLIT(lit_198);
DEFLIT(lit_157);
DEFLIT(lit_241);
DEFLIT(lit_81);
DEFLIT(lit_134);
DEFLIT(lit_128);
DEFLIT(lit_167);
DEFLIT(lit_243);
DEFLIT(lit_145);
DEFLIT(lit_244);
DEFLIT(lit_87);
DEFLIT(lit_50);
DEFLIT(lit_15);
DEFLIT(lit_192);
DEFLIT(lit_142);
DEFLIT(lit_156);
DEFLIT(lit_32);
DEFLIT(lit_33);
DEFLIT(lit_21);
DEFLIT(lit_47);
DEFLIT(lit_155);
DEFLIT(lit_72);
DEFLIT(lit_7);
DEFLIT(lit_64);
DEFLIT(lit_216);
DEFLIT(lit_102);
DEFLIT(lit_229);
DEFLIT(lit_236);
DEFLIT(lit_235);
DEFLIT(lit_45);
DEFLIT(lit_53);
DEFLIT(lit_77);
DEFLIT(lit_239);
DEFLIT(lit_40);
DEFLIT(lit_147);
DEFLIT(lit_171);
DEFLIT(lit_30);
DEFLIT(lit_150);
DEFLIT(lit_99);
DEFLIT(lit_133);
DEFLIT(lit_187);
DEFLIT(lit_169);
DEFLIT(lit_218);
DEFLIT(lit_220);
DEFLIT(lit_245);
DEFLIT(lit_215);
DEFLIT(lit_120);
DEFLIT(lit_98);
DEFLIT(lit_94);
DEFLIT(lit_158);
DEFLIT(lit_227);
DEFLIT(lit_18);
DEFLIT(lit_183);
DEFLIT(lit_65);
DEFLIT(lit_55);
DEFLIT(lit_195);
DEFLIT(lit_69);
DEFLIT(lit_82);
DEFLIT(lit_2);
DEFLIT(lit_35);
DEFLIT(lit_149);
DEFLIT(lit_161);
DEFLIT(lit_208);
DEFLIT(lit_112);
DEFLIT(lit_67);
DEFLIT(lit_212);
DEFLIT(lit_110);
DEFLIT(lit_143);
DEFLIT(lit_48);
DEFLIT(lit_107);
DEFLIT(lit_83);
DEFLIT(lit_17);
DEFLIT(lit_206);
DEFLIT(lit_38);
DEFLIT(lit_103);
DEFLIT(lit_177);
DEFLIT(lit_209);
DEFLIT(lit_54);
DEFLIT(lit_189);
DEFLIT(lit_95);
DEFLIT(lit_123);
DEFLIT(lit_224);
DEFLIT(lit_89);
DEFLIT(lit_9);
DEFLIT(lit_193);
DEFLIT(lit_172);
DEFLIT(lit_185);
DEFLIT(lit_85);
DEFLIT(lit_200);
DEFLIT(lit_182);
DEFLIT(lit_42);
DEFLIT(lit_188);
DEFLIT(lit_137);
DEFLIT(lit_116);
DEFLIT(lit_186);
DEFLIT(lit_61);
DEFLIT(lit_58);
DEFLIT(lit_27);
DEFLIT(lit_144);
DEFLIT(lit_22);
DEFLIT(lit_71);

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
LOCFOR(fun_sexpr_function_signature_26);
LOCFOR(fun_sexpr_function_parameters_27);
LOCFOR(fun_sexpr_function_value_28);
LOCFOR(fun_sexpr_function_body_29);
LOCFOR(fun_sexpr_function_definition_value_30);
LOCFOR(fun_sexpr_methodQ_31);
LOCFOR(fun_sexpr_method_signature_32);
LOCFOR(fun_sexpr_method_parameters_33);
LOCFOR(fun_sexpr_method_value_34);
LOCFOR(fun_sexpr_method_body_35);
LOCFOR(fun_sexpr_make_anonymous_method_36);
LOCFOR(fun_sexpr_make_method_37);
LOCFOR(fun_sexpr_ifQ_38);
LOCFOR(fun_sexpr_if_test_39);
LOCFOR(fun_sexpr_if_then_40);
LOCFOR(fun_sexpr_if_else_41);
LOCFOR(fun_sexpr_make_if_42);
LOCFOR(fun_sexpr_blockQ_43);
LOCFOR(fun_sexpr_block_name_44);
LOCFOR(fun_sexpr_block_body_45);
LOCFOR(fun_sexpr_unwind_protectQ_46);
LOCFOR(fun_sexpr_unwind_protect_protected_form_47);
LOCFOR(fun_sexpr_unwind_protect_cleanup_forms_48);
LOCFOR(fun_sexpr_monitorQ_49);
LOCFOR(fun_x_1294_50);
LOCFOR(fun_51);
LOCFOR(fun_sexpr_monitor_expand_52);
FUNFOR(YsyntaxYfind_option);
LOCFOR(fun_x_1296_54);
LOCFOR(fun_55);
LOCFOR(fun_sexpr_monitor_type_56);
LOCFOR(fun_x_1298_57);
LOCFOR(fun_58);
LOCFOR(fun_x_1300_59);
LOCFOR(fun_60);
LOCFOR(fun_sexpr_monitor_info_61);
LOCFOR(fun_sexpr_monitor_test_62);
LOCFOR(fun_sexpr_monitor_body_63);
LOCFOR(fun_sexpr_beginQ_64);
LOCFOR(fun_sexpr_begin_actions_65);
LOCFOR(fun_sexpr_last_expQ_66);
LOCFOR(fun_sexpr_first_exp_67);
LOCFOR(fun_sexpr_rest_exps_68);
LOCFOR(fun_sexpr_sequence_Gbegin_69);
LOCFOR(fun_sexpr_make_begin_70);
LOCFOR(fun_sexpr_applicationQ_71);
LOCFOR(fun_sexpr_operator_72);
LOCFOR(fun_sexpr_operands_73);
LOCFOR(fun_sexpr_no_operandsQ_74);
LOCFOR(fun_sexpr_first_operand_75);
LOCFOR(fun_sexpr_rest_operands_76);
LOCFOR(fun_sexpr_make_application_77);
LOCFOR(fun_sexpr_new_unique_name_counterX_78);
LOCFOR(fun_sexpr_unique_name_79);
LOCFOR(fun_sexpr_letQ_80);
LOCFOR(fun_sexpr_let_bound_variables_81);
LOCFOR(fun_sexpr_let_values_82);
LOCFOR(fun_sexpr_let_body_83);
LOCFOR(fun_inner_84);
LOCFOR(fun_loop_85);
LOCFOR(fun_sexpr_let_namesAvalues_86);
LOCFOR(fun_col_87);
LOCFOR(fun_sexpr_let_Gcombination_88);
LOCFOR(fun_sexpr_locQ_89);
LOCFOR(fun_sexpr_loc_bound_names_90);
LOCFOR(fun_sexpr_loc_bound_signatures_91);
LOCFOR(fun_sexpr_loc_bound_bodies_92);
LOCFOR(fun_sexpr_loc_raw_body_93);
LOCFOR(fun_sexpr_loc_body_94);
LOCFOR(fun_sexpr_iterateQ_95);
LOCFOR(fun_sexpr_iterate_name_96);
LOCFOR(fun_sexpr_iterate_signature_97);
LOCFOR(fun_sexpr_iterate_inits_98);
LOCFOR(fun_sexpr_iterate_body_99);
LOCFOR(fun_sexpr_iterate_Gloc_100);
LOCFOR(fun_sexpr_isaQ_101);
LOCFOR(fun_sexpr_isa_parent_102);
LOCFOR(fun_sexpr_isa_slot_inits_103);
LOCFOR(fun_sexpr_isa_init_slots_104);
LOCFOR(fun_sexpr_isa_init_values_105);
LOCFOR(fun_sexpr_define_classQ_106);
LOCFOR(fun_sexpr_define_class_parents_107);
LOCFOR(fun_sexpr_slotQ_108);
LOCFOR(fun_sexpr_slot_object_109);
LOCFOR(fun_sexpr_slot_variable_110);
LOCFOR(fun_sexpr_slot_init_111);
LOCFOR(fun_sexpr_make_getter_112);
LOCFOR(fun_sexpr_make_setter_113);
LOCFOR(fun_sexpr_make_setter_name_114);
LOCFOR(fun_sexpr_macroQ_115);
LOCFOR(fun_sexpr_macro_expandQ_116);
LOCFOR(fun_sexpr_make_syntax_if_117);
FUNFOR(YsyntaxYsexpr_expand_backquote);
LOCFOR(fun_sexpr_build_backquote_expander_119);
LOCFOR(fun_sexpr_unquoteQ_120);
LOCFOR(fun_sexpr_unquote_splicingQ_121);
LOCFOR(fun_sexpr_backquoteQ_122);
LOCFOR(fun_sexpr_atomQ_123);
LOCFOR(fun_nreconc_124);
LOCFOR(fun_loop_125);
LOCFOR(fun_126);
LOCFOR(fun_bq_process_127);
LOCFOR(fun_bracket_128);
LOCFOR(fun_map_tree_129);
LOCFOR(fun_bq_remove_tokens_130);
LOCFOR(fun_sexpr_syntax_ifQ_131);
LOCFOR(fun_sexpr_syntax_if_value_132);
LOCFOR(fun_sexpr_syntax_if_pattern_133);
LOCFOR(fun_sexpr_syntax_if_then_134);
LOCFOR(fun_sexpr_syntax_if_else_135);
LOCFOR(fun_sexpr_pattern_variableQ_136);
LOCFOR(fun_sexpr_pattern_variable_name_137);
LOCFOR(fun_col_138);
LOCFOR(fun_sexpr_bind_pattern_variables_139);
LOCFOR(fun_sexpr_make_macro_function_140);
extern P YsyntaxY___main_0___ ();
extern P YsyntaxY___main_1___ ();
extern P YsyntaxY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_sexpr_self_evaluatingQ_0) {
  P exp_;
  P tmpF1218;
  P tmpF1217;
  P tmpF1216;
  P tmpF1215;
  P tmpF1214;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLnumG));
  tmpF1214 = T1;
  if (tmpF1214 != YPfalse) {
    T2 = tmpF1214;
  } else {
    T4 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLchrG));
    tmpF1215 = T4;
    if (tmpF1215 != YPfalse) {
      T5 = tmpF1215;
    } else {
      T7 = CALL2(1,VARREF(YmacrosYEE),exp_,YPtrue);
      tmpF1216 = T7;
      if (tmpF1216 != YPfalse) {
        T8 = tmpF1216;
      } else {
        T10 = CALL2(1,VARREF(YmacrosYEE),exp_,YPfalse);
        tmpF1217 = T10;
        if (tmpF1217 != YPfalse) {
          T11 = tmpF1217;
        } else {
          T13 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLstrG));
          tmpF1218 = T13;
          if (tmpF1218 != YPfalse) {
            T14 = tmpF1218;
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
  P tmpF1219;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(tag_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLlstG));
  tmpF1219 = T1;
  if (tmpF1219 != YPfalse) {
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
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),quot_);
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
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),assn_);
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
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),exp_);
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
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),defn_);
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
  T2 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),defn_);
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
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),defn_);
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
  T1 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),defn_);
  T0 = CALL2(1,VARREF(YprotoSmathYE),T1,YPint((P)2));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_signature_parameters_24) {
  P signature_;
  P values_spec_indexF1220;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(signature_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoScollectionsSsequenceYpos),signature_,LITREF(lit_39));
  values_spec_indexF1220 = T1;
  T3 = CALL2(1,VARREF(YmacrosYEE),values_spec_indexF1220,VARREF(Ynul));
  if (T3 != YPfalse) {
    T2 = signature_;
  } else {
    T4 = CALL3(1,VARREF(YprotoScollectionsSsequenceYsub),signature_,YPint((P)0),values_spec_indexF1220);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_signature_value_25) {
  P signature_;
  P valueF1222;
  P values_spec_indexF1221;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(signature_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoScollectionsSsequenceYpos),signature_,LITREF(lit_39));
  values_spec_indexF1221 = T1;
  T3 = CALL2(1,VARREF(YmacrosYEE),values_spec_indexF1221,VARREF(Ynul));
  if (T3 != YPfalse) {
    T2 = YPfalse;
  } else {
    T6 = CALL2(1,VARREF(YprotoSmathYA),values_spec_indexF1221,YPint((P)1));
    T5 = CALL2(1,VARREF(YmacrosYelt),signature_,T6);
    valueF1222 = T5;
    T8 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),valueF1222,LITREF(lit_41));
    if (T8 != YPfalse) {
      T7 = LITREF(lit_42);
    } else {
      T7 = valueF1222;
    }
    T4 = T7;
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_function_signature_26) {
  P defn_;
  P T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY3rd),defn_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_function_parameters_27) {
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

FUNCODEDEF(fun_sexpr_function_value_28) {
  P defn_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_function_signature),defn_);
  T0 = CALL1(1,VARREF(YsyntaxYsexpr_signature_value),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_function_body_29) {
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

FUNCODEDEF(fun_sexpr_function_definition_value_30) {
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

FUNCODEDEF(fun_sexpr_methodQ_31) {
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

FUNCODEDEF(fun_sexpr_method_signature_32) {
  P method_exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(method_exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),method_exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_parameters_33) {
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

FUNCODEDEF(fun_sexpr_method_value_34) {
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

FUNCODEDEF(fun_sexpr_method_body_35) {
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

FUNCODEDEF(fun_sexpr_make_anonymous_method_36) {
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

FUNCODEDEF(fun_sexpr_make_method_37) {
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

FUNCODEDEF(fun_sexpr_ifQ_38) {
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

FUNCODEDEF(fun_sexpr_if_test_39) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_if_then_40) {
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

FUNCODEDEF(fun_sexpr_if_else_41) {
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

FUNCODEDEF(fun_sexpr_make_if_42) {
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

FUNCODEDEF(fun_sexpr_blockQ_43) {
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

FUNCODEDEF(fun_sexpr_block_name_44) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_block_body_45) {
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

FUNCODEDEF(fun_sexpr_unwind_protectQ_46) {
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

FUNCODEDEF(fun_sexpr_unwind_protect_protected_form_47) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_unwind_protect_cleanup_forms_48) {
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

FUNCODEDEF(fun_sexpr_monitorQ_49) {
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

FUNCODEDEF(fun_x_1294_50) {
  P msg_,args_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_84),FREEREF(1));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  P return_;
  P optionsF1232;
  P x_1293F1231;
  P x_1293F1230;
  P x_1293F1229;
  P x_1293F1228;
  P bodyF1227;
  P handlerF1226;
  P optionsF1225;
  P x_1293F1224;
  P x_1294F1223;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1294_50,2);
  x_1294F1223 = T1;
  FUNINIT(x_1294F1223, 2,return_,FREEREF(0));
  x_1293F1224 = FREEREF(0);
  optionsF1225 = YPfalse;
  optionsF1225 = BOXFAB(optionsF1225);
  handlerF1226 = YPfalse;
  handlerF1226 = BOXFAB(handlerF1226);
  bodyF1227 = YPfalse;
  bodyF1227 = BOXFAB(bodyF1227);
  T9 = CALL2(1,VARREF(YisaQ),x_1293F1224,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1293F1224,LITREF(lit_77),x_1294F1223);
    x_1293F1228 = T11;
    T13 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1293F1228,x_1294F1223);
    BOXVAL(optionsF1225) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1293F1228);
    x_1293F1229 = T14;
    T16 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1293F1229,x_1294F1223);
    BOXVAL(handlerF1226) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1293F1229);
    x_1293F1230 = T17;
    BOXVAL(bodyF1227) = x_1293F1230;
    x_1293F1231 = Ynil;
    T19 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1293F1231,x_1294F1223);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1294F1223,LITREF(lit_85),x_1293F1224);
  }
  T24 = BOXVAL(optionsF1225);
  T23 = CALL2(1,VARREF(YisaQ),T24,VARREF(YLsymG));
  if (T23 != YPfalse) {
    T28 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
    T30 = BOXVAL(optionsF1225);
    T29 = CALL1(1,VARREF(Ylst),T30);
    T27 = CALL3(1,VARREF(YmacrosYcat),T28,T29,Ynil);
    T26 = CALL1(1,VARREF(Ylst),T27);
    T25 = CALL2(1,VARREF(YmacrosYcat),T26,Ynil);
    T22 = T25;
  } else {
    T31 = BOXVAL(optionsF1225);
    T22 = T31;
  }
  optionsF1232 = T22;
  T33 = CALL1(1,VARREF(YsyntaxYsexpr_monitor_type),optionsF1232);
  T34 = CALL1(1,VARREF(YsyntaxYsexpr_monitor_info),optionsF1232);
  T35 = CALL1(1,VARREF(YsyntaxYsexpr_monitor_test),optionsF1232);
  T36 = BOXVAL(handlerF1226);
  T38 = BOXVAL(bodyF1227);
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

FUNCODEDEF(fun_sexpr_monitor_expand_52) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_51,1,exp_);
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

FUNCODEDEF(fun_x_1296_54) {
  P msg_,args_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_94),FREEREF(1));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P x_1295F1236;
  P typeF1235;
  P x_1295F1234;
  P x_1296F1233;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1296_54,2);
  x_1296F1233 = T1;
  FUNINIT(x_1296F1233, 2,return_,FREEREF(0));
  x_1295F1234 = FREEREF(0);
  typeF1235 = YPfalse;
  typeF1235 = BOXFAB(typeF1235);
  T5 = CALL2(1,VARREF(YisaQ),x_1295F1234,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1295F1234,x_1296F1233);
    BOXVAL(typeF1235) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1295F1234);
    x_1295F1236 = T8;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1295F1236,x_1296F1233);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1296F1233,LITREF(lit_85),x_1295F1234);
  }
  T11 = BOXVAL(typeF1235);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_type_56) {
  P options_;
  P type_listF1237;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YsyntaxYfind_option),options_,LITREF(lit_86),LITREF(lit_92));
  type_listF1237 = T1;
  T3 = FUNFAB(fun_55,1,type_listF1237);
  T2 = with_exit(T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1298_57) {
  P msg_,args_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_100),FREEREF(1));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  P return_;
  P x_1297F1241;
  P info_exprF1240;
  P x_1297F1239;
  P x_1298F1238;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1298_57,2);
  x_1298F1238 = T1;
  FUNINIT(x_1298F1238, 2,return_,FREEREF(0));
  x_1297F1239 = FREEREF(0);
  info_exprF1240 = YPfalse;
  info_exprF1240 = BOXFAB(info_exprF1240);
  T5 = CALL2(1,VARREF(YisaQ),x_1297F1239,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1297F1239,x_1298F1238);
    BOXVAL(info_exprF1240) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1297F1239);
    x_1297F1241 = T8;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1297F1241,x_1298F1238);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1298F1238,LITREF(lit_85),x_1297F1239);
  }
  T11 = BOXVAL(info_exprF1240);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1300_59) {
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

FUNCODEDEF(fun_60) {
  P return_;
  P x_1299F1247;
  P x_1299F1246;
  P argumentsF1245;
  P messageF1244;
  P x_1299F1243;
  P x_1300F1242;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1300_59,2);
  x_1300F1242 = T1;
  FUNINIT(x_1300F1242, 2,return_,FREEREF(0));
  x_1299F1243 = FREEREF(0);
  messageF1244 = YPfalse;
  messageF1244 = BOXFAB(messageF1244);
  argumentsF1245 = YPfalse;
  argumentsF1245 = BOXFAB(argumentsF1245);
  T7 = CALL2(1,VARREF(YisaQ),x_1299F1243,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1299F1243,x_1300F1242);
    BOXVAL(messageF1244) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1299F1243);
    x_1299F1246 = T10;
    BOXVAL(argumentsF1245) = x_1299F1246;
    x_1299F1247 = Ynil;
    T12 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1299F1247,x_1300F1242);
    T11 = T12;
    T8 = T11;
  } else {
    T13 = CALL2(1,x_1300F1242,LITREF(lit_85),x_1299F1243);
  }
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_103));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_104));
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
  T22 = BOXVAL(messageF1244);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T18 = CALLN(1,VARREF(YmacrosYcat),4,T19,T20,T21,Ynil);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_107));
  T30 = BOXVAL(argumentsF1245);
  T28 = CALL3(1,VARREF(YmacrosYcat),T29,T30,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T24 = CALLN(1,VARREF(YmacrosYcat),4,T25,T26,T27,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T14 = CALLN(1,VARREF(YmacrosYcat),5,T15,T16,T17,T23,Ynil);
  T5 = T14;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_info_61) {
  P options_;
  P tmpF1250;
  P descriptionF1249;
  P infoF1248;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YsyntaxYfind_option),options_,LITREF(lit_96),YPfalse);
  infoF1248 = T1;
  T3 = CALL3(1,VARREF(YsyntaxYfind_option),options_,LITREF(lit_97),YPfalse);
  descriptionF1249 = T3;
  tmpF1250 = infoF1248;
  if (tmpF1250 != YPfalse) {
    T6 = descriptionF1249;
  } else {
    T6 = YPfalse;
  }
  T5 = T6;
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(Yerror),LITREF(lit_98),options_);
    T4 = T7;
  } else {
    if (infoF1248 != YPfalse) {
      T10 = FUNFAB(fun_58,1,infoF1248);
      T9 = with_exit(T10);
      T8 = T9;
    } else {
      if (descriptionF1249 != YPfalse) {
        T13 = FUNFAB(fun_60,1,descriptionF1249);
        T12 = with_exit(T13);
        T11 = T12;
      } else {
        if (YPtrue != YPfalse) {
          T14 = LITREF(lit_108);
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

FUNCODEDEF(fun_sexpr_monitor_test_62) {
  P options_;
  P test_bodyF1251;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YsyntaxYfind_option),options_,LITREF(lit_66),LITREF(lit_110));
  test_bodyF1251 = T1;
  T2 = CALL2(1,VARREF(YsyntaxYsexpr_make_anonymous_method),Ynil,test_bodyF1251);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_body_63) {
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

FUNCODEDEF(fun_sexpr_beginQ_64) {
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

FUNCODEDEF(fun_sexpr_begin_actions_65) {
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

FUNCODEDEF(fun_sexpr_last_expQ_66) {
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

FUNCODEDEF(fun_sexpr_first_exp_67) {
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

FUNCODEDEF(fun_sexpr_rest_exps_68) {
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

FUNCODEDEF(fun_sexpr_sequence_Gbegin_69) {
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

FUNCODEDEF(fun_sexpr_make_begin_70) {
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

FUNCODEDEF(fun_sexpr_applicationQ_71) {
  P exp_;
  P tmpF1252;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLlstG));
  tmpF1252 = T1;
  if (tmpF1252 != YPfalse) {
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

FUNCODEDEF(fun_sexpr_operator_72) {
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

FUNCODEDEF(fun_sexpr_operands_73) {
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

FUNCODEDEF(fun_sexpr_no_operandsQ_74) {
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

FUNCODEDEF(fun_sexpr_first_operand_75) {
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

FUNCODEDEF(fun_sexpr_rest_operands_76) {
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

FUNCODEDEF(fun_sexpr_make_application_77) {
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

FUNCODEDEF(fun_sexpr_new_unique_name_counterX_78) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YprotoSmathYA),VARREF(YsyntaxYTunique_name_counterT),YPint((P)1));
  VARSET(YsyntaxYTunique_name_counterT,T0);
UNLINK_STACK();
  RET(VARREF(YsyntaxYTunique_name_counterT));
}

FUNCODEDEF(fun_sexpr_unique_name_79) {
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

FUNCODEDEF(fun_sexpr_letQ_80) {
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

FUNCODEDEF(fun_sexpr_let_bound_variables_81) {
  P let_exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),let_exp_);
  T0 = CALL2(1,VARREF(YmacrosYmap),VARREF(Yhead),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_let_values_82) {
  P let_exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),let_exp_);
  T0 = CALL2(1,VARREF(YmacrosYmap),VARREF(YprotoScollectionsSsequenceY2nd),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_let_body_83) {
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

FUNCODEDEF(fun_inner_84) {
  P rtnames_,rtvalues_,index_,tnames_;
  P tmpF1254;
  P nameF1253;
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
    nameF1253 = T4;
    T7 = CALL2(1,VARREF(YisaQ),nameF1253,VARREF(YLlstG));
    tmpF1254 = T7;
    if (tmpF1254 != YPfalse) {
      T11 = CALL1(1,VARREF(Ytail),nameF1253);
      T10 = CALL1(1,VARREF(Yhead),T11);
      T9 = CALL2(1,VARREF(YmacrosYEE),T10,LITREF(lit_152));
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    if (T6 != YPfalse) {
      T15 = CALL1(1,VARREF(Yhead),nameF1253);
      T14 = CALL2(1,VARREF(Ylst),T15,LITREF(lit_153));
      T13 = CALL2(1,VARREF(YmacrosYpair),T14,rtnames_);
      T18 = CALL2(1,VARREF(Ylst),LITREF(lit_155),FREEREF(1));
      T17 = CALLN(1,VARREF(Ylst),4,LITREF(lit_154),FREEREF(1),index_,T18);
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
      T22 = CALL2(1,VARREF(YmacrosYpair),nameF1253,rtnames_);
      T24 = CALL3(1,VARREF(Ylst),LITREF(lit_156),FREEREF(1),index_);
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

FUNCODEDEF(fun_loop_85) {
  P rnames_,rvalues_,names_,vals_;
  P rtvaluesF1262;
  P rtnamesF1261;
  P tup40F1260;
  P innerF1259;
  P tupnameF1258;
  P tmpF1257;
  P valueF1256;
  P nameF1255;
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
    nameF1255 = T6;
    T8 = CALL1(1,VARREF(Yhead),vals_);
    valueF1256 = T8;
    T11 = CALL2(1,VARREF(YisaQ),nameF1255,VARREF(YLlstG));
    tmpF1257 = T11;
    if (tmpF1257 != YPfalse) {
      T14 = CALL1(1,VARREF(Yhead),nameF1255);
      T13 = CALL2(1,VARREF(YmacrosYEE),T14,LITREF(lit_41));
      T12 = T13;
    } else {
      T12 = YPfalse;
    }
    T10 = T12;
    if (T10 != YPfalse) {
      T16 = CALL1(1,VARREF(YsyntaxYsexpr_unique_name),LITREF(lit_146));
      tupnameF1258 = T16;
      T19 = FUNSHELL(1,fun_inner_84,2);
      innerF1259 = T19;
      FUNINIT(innerF1259, 2,innerF1259,tupnameF1258);
      T21 = CALL1(1,VARREF(Ylst),tupnameF1258);
      T22 = CALL1(1,VARREF(Ylst),valueF1256);
      T23 = CALL1(1,VARREF(Ytail),nameF1255);
      T20 = CALLN(0,innerF1259,4,T21,T22,YPint((P)0),T23);
      T18 = T20;
      tup40F1260 = T18;
      T25 = CALL2(1,VARREF(YmacrosYelt),tup40F1260,YPint((P)0));
      rtnamesF1261 = T25;
      T27 = CALL2(1,VARREF(YmacrosYelt),tup40F1260,YPint((P)1));
      rtvaluesF1262 = T27;
      T29 = CALL2(1,VARREF(YmacrosYcat),rtnamesF1261,rnames_);
      T30 = CALL2(1,VARREF(YmacrosYcat),rtvaluesF1262,rvalues_);
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
      T34 = CALL2(1,VARREF(YmacrosYpair),nameF1255,rnames_);
      T35 = CALL2(1,VARREF(YmacrosYpair),valueF1256,rvalues_);
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

FUNCODEDEF(fun_sexpr_let_namesAvalues_86) {
  P names_,vals_;
  P loopF1263;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(vals_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_85,1);
  loopF1263 = T1;
  FUNINIT(loopF1263, 1,loopF1263);
  T2 = CALLN(0,loopF1263,4,Ynil,Ynil,names_,vals_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_87) {
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

FUNCODEDEF(fun_sexpr_let_Gcombination_88) {
  P let_exp_;
  P colF1270;
  P valuesF1269;
  P namesF1268;
  P tup41F1267;
  P bodyF1266;
  P ovaluesF1265;
  P onamesF1264;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_let_bound_variables),let_exp_);
  onamesF1264 = T1;
  T3 = CALL1(1,VARREF(YsyntaxYsexpr_let_values),let_exp_);
  ovaluesF1265 = T3;
  T5 = CALL1(1,VARREF(YsyntaxYsexpr_let_body),let_exp_);
  bodyF1266 = T5;
  T7 = CALL2(1,VARREF(YsyntaxYsexpr_let_namesAvalues),onamesF1264,ovaluesF1265);
  tup41F1267 = T7;
  T9 = CALL2(1,VARREF(YmacrosYelt),tup41F1267,YPint((P)0));
  namesF1268 = T9;
  T11 = CALL2(1,VARREF(YmacrosYelt),tup41F1267,YPint((P)1));
  valuesF1269 = T11;
  T13 = FUNSHELL(1,fun_col_87,2);
  colF1270 = T13;
  FUNINIT(colF1270, 2,bodyF1266,colF1270);
  T14 = CALL2(0,colF1270,namesF1268,valuesF1269);
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

FUNCODEDEF(fun_sexpr_locQ_89) {
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

FUNCODEDEF(fun_sexpr_loc_bound_names_90) {
  P loc_exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YmacrosYmap),VARREF(YprotoScollectionsSsequenceY1st),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_signatures_91) {
  P loc_exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YmacrosYmap),VARREF(YprotoScollectionsSsequenceY2nd),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_bodies_92) {
  P loc_exp_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YruntimeYcompose),VARREF(Ytail),VARREF(Ytail));
  T2 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_raw_body_93) {
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

FUNCODEDEF(fun_sexpr_loc_body_94) {
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

FUNCODEDEF(fun_sexpr_iterateQ_95) {
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

FUNCODEDEF(fun_sexpr_iterate_name_96) {
  P rep_exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),rep_exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_signature_97) {
  P rep_exp_;
  P sigF1271;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsSsequenceY3rd),rep_exp_);
  sigF1271 = T1;
  T4 = CALL1(1,VARREF(YsyntaxYsexpr_signature_parameters),sigF1271);
  T3 = CALL2(1,VARREF(YmacrosYmap),VARREF(YprotoScollectionsSsequenceY1st),T4);
  T6 = CALL1(1,VARREF(YsyntaxYsexpr_signature_value),sigF1271);
  if (T6 != YPfalse) {
    T5 = Ynil;
  } else {
    T7 = CALL1(1,VARREF(Ylst),VARREF(YsyntaxYDsexpr_values_tag));
    T5 = T7;
  }
  T9 = CALL1(1,VARREF(YsyntaxYsexpr_signature_value),sigF1271);
  T8 = CALL1(1,VARREF(Ylst),T9);
  T2 = CALL3(1,VARREF(YmacrosYcat),T3,T5,T8);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_inits_98) {
  P rep_exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsSsequenceY3rd),rep_exp_);
  T0 = CALL2(1,VARREF(YmacrosYmap),VARREF(YprotoScollectionsSsequenceY2nd),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_body_99) {
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

FUNCODEDEF(fun_sexpr_iterate_Gloc_100) {
  P rep_exp_;
  P initsF1275;
  P bodyF1274;
  P sigF1273;
  P nameF1272;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_iterate_name),rep_exp_);
  nameF1272 = T1;
  T3 = CALL1(1,VARREF(YsyntaxYsexpr_iterate_signature),rep_exp_);
  sigF1273 = T3;
  T5 = CALL1(1,VARREF(YsyntaxYsexpr_iterate_body),rep_exp_);
  bodyF1274 = T5;
  T7 = CALL1(1,VARREF(YsyntaxYsexpr_iterate_inits),rep_exp_);
  initsF1275 = T7;
  T11 = CALL2(1,VARREF(Ylst),nameF1272,sigF1273);
  T10 = CALL2(1,VARREF(YmacrosYcat),T11,bodyF1274);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T13 = CALL1(1,VARREF(Ylst),nameF1272);
  T12 = CALL2(1,VARREF(YmacrosYcat),T13,initsF1275);
  T8 = CALL3(1,VARREF(Ylst),VARREF(YsyntaxYDsexpr_locals_tag),T9,T12);
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isaQ_101) {
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

FUNCODEDEF(fun_sexpr_isa_parent_102) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_isa_slot_inits_103) {
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

FUNCODEDEF(fun_sexpr_isa_init_slots_104) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YmacrosYmap),VARREF(YprotoScollectionsSsequenceY2nd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_init_values_105) {
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

FUNCODEDEF(fun_sexpr_define_classQ_106) {
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

FUNCODEDEF(fun_sexpr_define_class_parents_107) {
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

FUNCODEDEF(fun_sexpr_slotQ_108) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),exp_,VARREF(YsyntaxYDsexpr_slot_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_slot_object_109) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_slot_variable_110) {
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

FUNCODEDEF(fun_sexpr_slot_init_111) {
  P exp_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T2 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),exp_);
  T1 = CALL2(1,VARREF(YprotoSmathYE),T2,YPint((P)4));
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YmacrosYelt),exp_,YPint((P)3));
    T0 = T3;
  } else {
    T0 = LITREF(lit_189);
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_make_getter_112) {
  P name_,type_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(type_, 1);
loop:
  T2 = CALL2(1,VARREF(Ylst),LITREF(lit_191),type_);
  T1 = CALL1(1,VARREF(Ylst),T2);
  T4 = CALL3(1,VARREF(Ylst),LITREF(lit_192),LITREF(lit_191),name_);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T0 = CALL3(1,VARREF(YsyntaxYsexpr_make_method),name_,T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_setter_113) {
  P name_,type_,slot_type_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(type_, 1);
  ARG(slot_type_, 2);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_make_setter_name),name_);
  T3 = CALL2(1,VARREF(Ylst),LITREF(lit_195),slot_type_);
  T4 = CALL2(1,VARREF(Ylst),LITREF(lit_191),type_);
  T2 = CALL2(1,VARREF(Ylst),T3,T4);
  T6 = CALLN(1,VARREF(Ylst),4,LITREF(lit_196),LITREF(lit_195),LITREF(lit_191),name_);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T0 = CALL3(1,VARREF(YsyntaxYsexpr_make_method),T1,T2,T5);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_setter_name_114) {
  P name_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T2 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLstrG),name_);
  T1 = CALL2(1,VARREF(YmacrosYcat),T2,LITREF(lit_198));
  T0 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLsymG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_macroQ_115) {
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

FUNCODEDEF(fun_sexpr_macro_expandQ_116) {
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

FUNCODEDEF(fun_sexpr_make_syntax_if_117) {
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
  T0 = CALL2(1,VARREF(YsyntaxYeval),T1,LITREF(lit_214));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_build_backquote_expander_119) {
  P x_;
  P resF1277;
  P raw_resultF1276;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYbq_process),x_);
  raw_resultF1276 = T1;
  T3 = CALL1(1,VARREF(YsyntaxYbq_remove_tokens),raw_resultF1276);
  resF1277 = T3;
  T2 = resF1277;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unquoteQ_120) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),x_,LITREF(lit_217));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unquote_splicingQ_121) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),x_,LITREF(lit_219));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_backquoteQ_122) {
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

FUNCODEDEF(fun_sexpr_atomQ_123) {
  P x_;
  P tmpF1278;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  T1 = CALL1(1,VARREF(Ynot),T2);
  tmpF1278 = T1;
  if (tmpF1278 != YPfalse) {
    T3 = tmpF1278;
  } else {
    T4 = CALL2(1,VARREF(YmacrosYEE),x_,Ynil);
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nreconc_124) {
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

FUNCODEDEF(fun_loop_125) {
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
        T12 = CALL2(1,VARREF(Yerror),LITREF(lit_228),p_);
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
      T21 = CALL2(1,VARREF(Yerror),LITREF(lit_229),p_);
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

FUNCODEDEF(fun_126) {
  P return_;
  P loopF1279;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_125,2);
  loopF1279 = T1;
  FUNINIT(loopF1279, 2,return_,loopF1279);
  T2 = CALL2(0,loopF1279,FREEREF(0),Ynil);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bq_process_127) {
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
          T15 = CALL2(1,VARREF(Yerror),LITREF(lit_225),T16);
          T13 = T15;
        } else {
          if (YPtrue != YPfalse) {
            T21 = FUNFAB(fun_126,1,x_);
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

FUNCODEDEF(fun_bracket_128) {
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

FUNCODEDEF(fun_map_tree_129) {
  P fn_,x_;
  P tmpF1282;
  P dF1281;
  P aF1280;
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
    aF1280 = T4;
    T8 = CALL1(1,VARREF(Ytail),x_);
    T7 = CALL2(1,VARREF(YsyntaxYmap_tree),fn_,T8);
    dF1281 = T7;
    T12 = CALL1(1,VARREF(Yhead),x_);
    T11 = CALL2(1,VARREF(YprotoSmathYE),aF1280,T12);
    tmpF1282 = T11;
    if (tmpF1282 != YPfalse) {
      T15 = CALL1(1,VARREF(Ytail),x_);
      T14 = CALL2(1,VARREF(YprotoSmathYE),dF1281,T15);
      T13 = T14;
    } else {
      T13 = YPfalse;
    }
    T10 = T13;
    if (T10 != YPfalse) {
      T9 = x_;
    } else {
      T16 = CALL2(1,VARREF(YmacrosYpair),aF1280,dF1281);
      T9 = T16;
    }
    T6 = T9;
    T3 = T6;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bq_remove_tokens_130) {
  P x_;
  P tmpF1284;
  P tmpF1283;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YmacrosYEE),x_,VARREF(YsyntaxYTbq_listT));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_107);
  } else {
    T3 = CALL2(1,VARREF(YmacrosYEE),x_,VARREF(YsyntaxYTbq_appendT));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_234);
    } else {
      T5 = CALL2(1,VARREF(YmacrosYEE),x_,VARREF(YsyntaxYTbq_nconcT));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_235);
      } else {
        T7 = CALL2(1,VARREF(YmacrosYEE),x_,VARREF(YsyntaxYTbq_listTT));
        if (T7 != YPfalse) {
          T6 = LITREF(lit_236);
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
                tmpF1283 = T20;
                if (tmpF1283 != YPfalse) {
                  T27 = CALL1(1,VARREF(Ytail),x_);
                  T26 = CALL1(1,VARREF(Ytail),T27);
                  T25 = CALL1(1,VARREF(YmacrosYemptyQ),T26);
                  T24 = CALL1(1,VARREF(Ynot),T25);
                  tmpF1284 = T24;
                  if (tmpF1284 != YPfalse) {
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
                  T33 = CALL2(1,VARREF(YmacrosYpair),LITREF(lit_237),T34);
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

FUNCODEDEF(fun_sexpr_syntax_ifQ_131) {
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

FUNCODEDEF(fun_sexpr_syntax_if_value_132) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),exp_);
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_pattern_133) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),exp_);
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_then_134) {
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

FUNCODEDEF(fun_sexpr_syntax_if_else_135) {
  P exp_;
  P altF1285;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YmacrosYelt),exp_,YPint((P)3));
  altF1285 = T1;
  T3 = CALL2(1,VARREF(YmacrosYEE),altF1285,VARREF(Ynul));
  if (T3 != YPfalse) {
    T2 = YPfalse;
  } else {
    T2 = altF1285;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_pattern_variableQ_136) {
  P pat_;
  P tmpF1286;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_unquoteQ),pat_);
  tmpF1286 = T1;
  if (tmpF1286 != YPfalse) {
    T2 = tmpF1286;
  } else {
    T3 = CALL1(1,VARREF(YsyntaxYsexpr_unquote_splicingQ),pat_);
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_pattern_variable_name_137) {
  P pat_;
  P T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),pat_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_col_138) {
  P pat_;
  P xF1288;
  P tmpF1287;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T3 = CALL2(1,VARREF(YisaQ),pat_,VARREF(YLlstG));
  T2 = CALL1(1,VARREF(Ynot),T3);
  tmpF1287 = T2;
  if (tmpF1287 != YPfalse) {
    T4 = tmpF1287;
  } else {
    T5 = CALL1(1,VARREF(YmacrosYemptyQ),pat_);
    T4 = T5;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T7 = CALL1(1,VARREF(Yhead),pat_);
    xF1288 = T7;
    T9 = CALL1(1,VARREF(YsyntaxYsexpr_pattern_variableQ),xF1288);
    if (T9 != YPfalse) {
      T11 = CALL1(1,VARREF(YsyntaxYsexpr_pattern_variable_name),xF1288);
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

FUNCODEDEF(fun_sexpr_bind_pattern_variables_139) {
  P pat_;
  P colF1289;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T2 = FUNSHELL(1,fun_col_138,1);
  colF1289 = T2;
  FUNINIT(colF1289, 1,colF1289);
  T3 = CALL1(0,colF1289,pat_);
  T1 = T3;
  T0 = CALL1(1,VARREF(YprotoScollectionsSsequenceYdel_dups),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_macro_function_140) {
  P exp_;
  P funcF1291;
  P mifF1290;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T2 = CALL1(1,VARREF(YsyntaxYsexpr_method_parameters),exp_);
  T4 = CALL1(1,VARREF(YsyntaxYsexpr_method_body),exp_);
  T3 = CALL1(1,VARREF(YsyntaxYsexpr_sequence_Gbegin),T4);
  T1 = CALLN(1,VARREF(YsyntaxYsexpr_make_syntax_if),4,T2,LITREF(lit_1),T3,YPfalse);
  mifF1290 = T1;
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_1));
  T8 = CALL1(1,VARREF(Ylst),mifF1290);
  T6 = CALL2(1,VARREF(YsyntaxYsexpr_make_anonymous_method),T7,T8);
  funcF1291 = T6;
  T5 = funcF1291;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

P YsyntaxY___main_0___() {
  P T232,T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217;
  P T216,T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201;
  P T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185;
  P T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169;
  P T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153;
  P T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137;
  P T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121;
  P T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105;
  P T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89;
  P T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73;
  P T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57;
  P T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41;
  P T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
  lit_43 = YPPsym((P)"sexpr-function-signature");
  T130 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_function_signature_26 = YPmet(FUNCODEREF(fun_sexpr_function_signature_26),LITREF(lit_43),T130,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(YsyntaxYsexpr_function_signature);
  if (T133 != YPfalse) {
    T132 = VARREF(YsyntaxYsexpr_function_signature);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_sexpr_function_signature_26;
  T131 = CALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YsyntaxYsexpr_function_signature,T131);
  lit_44 = YPPsym((P)"sexpr-function-parameters");
  T135 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_function_parameters_27 = YPmet(FUNCODEREF(fun_sexpr_function_parameters_27),LITREF(lit_44),T135,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(YsyntaxYsexpr_function_parameters);
  if (T138 != YPfalse) {
    T137 = VARREF(YsyntaxYsexpr_function_parameters);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_sexpr_function_parameters_27;
  T136 = CALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YsyntaxYsexpr_function_parameters,T136);
  lit_45 = YPPsym((P)"sexpr-function-value");
  T140 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_function_value_28 = YPmet(FUNCODEREF(fun_sexpr_function_value_28),LITREF(lit_45),T140,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(YsyntaxYsexpr_function_value);
  if (T143 != YPfalse) {
    T142 = VARREF(YsyntaxYsexpr_function_value);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_sexpr_function_value_28;
  T141 = CALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YsyntaxYsexpr_function_value,T141);
  lit_46 = YPPsym((P)"sexpr-function-body");
  T145 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_body_29 = YPmet(FUNCODEREF(fun_sexpr_function_body_29),LITREF(lit_46),T145,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YsyntaxYsexpr_function_body);
  if (T148 != YPfalse) {
    T147 = VARREF(YsyntaxYsexpr_function_body);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_sexpr_function_body_29;
  T146 = CALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YsyntaxYsexpr_function_body,T146);
  lit_47 = YPPsym((P)"fun");
  VARSET(YsyntaxYDsexpr_method_tag,LITREF(lit_47));
  lit_48 = YPPsym((P)"sexpr-function-definition-value");
  T150 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_definition_value_30 = YPmet(FUNCODEREF(fun_sexpr_function_definition_value_30),LITREF(lit_48),T150,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(YsyntaxYsexpr_function_definition_value);
  if (T153 != YPfalse) {
    T152 = VARREF(YsyntaxYsexpr_function_definition_value);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_sexpr_function_definition_value_30;
  T151 = CALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YsyntaxYsexpr_function_definition_value,T151);
  lit_49 = YPPsym((P)"sexpr-method?");
  T155 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_methodQ_31 = YPmet(FUNCODEREF(fun_sexpr_methodQ_31),LITREF(lit_49),T155,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YsyntaxYsexpr_methodQ);
  if (T158 != YPfalse) {
    T157 = VARREF(YsyntaxYsexpr_methodQ);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_sexpr_methodQ_31;
  T156 = CALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YsyntaxYsexpr_methodQ,T156);
  lit_50 = YPPsym((P)"sexpr-method-signature");
  lit_51 = YPPsym((P)"method-exp");
  T160 = YPsig(YPPlist(1,LITREF(lit_51)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_signature_32 = YPmet(FUNCODEREF(fun_sexpr_method_signature_32),LITREF(lit_50),T160,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(YsyntaxYsexpr_method_signature);
  if (T163 != YPfalse) {
    T162 = VARREF(YsyntaxYsexpr_method_signature);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_sexpr_method_signature_32;
  T161 = CALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YsyntaxYsexpr_method_signature,T161);
  lit_52 = YPPsym((P)"sexpr-method-parameters");
  T165 = YPsig(YPPlist(1,LITREF(lit_51)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_parameters_33 = YPmet(FUNCODEREF(fun_sexpr_method_parameters_33),LITREF(lit_52),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(YsyntaxYsexpr_method_parameters);
  if (T168 != YPfalse) {
    T167 = VARREF(YsyntaxYsexpr_method_parameters);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_sexpr_method_parameters_33;
  T166 = CALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(YsyntaxYsexpr_method_parameters,T166);
  lit_53 = YPPsym((P)"sexpr-method-value");
  T170 = YPsig(YPPlist(1,LITREF(lit_51)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_method_value_34 = YPmet(FUNCODEREF(fun_sexpr_method_value_34),LITREF(lit_53),T170,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YsyntaxYsexpr_method_value);
  if (T173 != YPfalse) {
    T172 = VARREF(YsyntaxYsexpr_method_value);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_sexpr_method_value_34;
  T171 = CALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YsyntaxYsexpr_method_value,T171);
  lit_54 = YPPsym((P)"sexpr-method-body");
  T175 = YPsig(YPPlist(1,LITREF(lit_51)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_body_35 = YPmet(FUNCODEREF(fun_sexpr_method_body_35),LITREF(lit_54),T175,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(YsyntaxYsexpr_method_body);
  if (T178 != YPfalse) {
    T177 = VARREF(YsyntaxYsexpr_method_body);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_sexpr_method_body_35;
  T176 = CALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YsyntaxYsexpr_method_body,T176);
  lit_55 = YPPsym((P)"sexpr-make-anonymous-method");
  lit_56 = YPPsym((P)"parameters");
  lit_57 = YPPsym((P)"body");
  T180 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_make_anonymous_method_36 = YPmet(FUNCODEREF(fun_sexpr_make_anonymous_method_36),LITREF(lit_55),T180,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(YsyntaxYsexpr_make_anonymous_method);
  if (T183 != YPfalse) {
    T182 = VARREF(YsyntaxYsexpr_make_anonymous_method);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_sexpr_make_anonymous_method_36;
  T181 = CALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(YsyntaxYsexpr_make_anonymous_method,T181);
  lit_58 = YPPsym((P)"sexpr-make-method");
  lit_59 = YPPsym((P)"name");
  T185 = YPsig(YPPlist(3,LITREF(lit_59),LITREF(lit_56),LITREF(lit_57)),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_make_method_37 = YPmet(FUNCODEREF(fun_sexpr_make_method_37),LITREF(lit_58),T185,ENVNUL,PNUL,YPfalse);
  T188 = BOUNDP(YsyntaxYsexpr_make_method);
  if (T188 != YPfalse) {
    T187 = VARREF(YsyntaxYsexpr_make_method);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_sexpr_make_method_37;
  T186 = CALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(YsyntaxYsexpr_make_method,T186);
  lit_60 = YPPsym((P)"if");
  VARSET(YsyntaxYDsexpr_if_tag,LITREF(lit_60));
  lit_61 = YPPsym((P)"sexpr-if?");
  T190 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_ifQ_38 = YPmet(FUNCODEREF(fun_sexpr_ifQ_38),LITREF(lit_61),T190,ENVNUL,PNUL,YPfalse);
  T193 = BOUNDP(YsyntaxYsexpr_ifQ);
  if (T193 != YPfalse) {
    T192 = VARREF(YsyntaxYsexpr_ifQ);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_sexpr_ifQ_38;
  T191 = CALL2(1,VARREF(YPdefine_method),T192,T194);
  VARSET(YsyntaxYsexpr_ifQ,T191);
  lit_62 = YPPsym((P)"sexpr-if-test");
  T195 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_test_39 = YPmet(FUNCODEREF(fun_sexpr_if_test_39),LITREF(lit_62),T195,ENVNUL,PNUL,YPfalse);
  T198 = BOUNDP(YsyntaxYsexpr_if_test);
  if (T198 != YPfalse) {
    T197 = VARREF(YsyntaxYsexpr_if_test);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_sexpr_if_test_39;
  T196 = CALL2(1,VARREF(YPdefine_method),T197,T199);
  VARSET(YsyntaxYsexpr_if_test,T196);
  lit_63 = YPPsym((P)"sexpr-if-then");
  T200 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_then_40 = YPmet(FUNCODEREF(fun_sexpr_if_then_40),LITREF(lit_63),T200,ENVNUL,PNUL,YPfalse);
  T203 = BOUNDP(YsyntaxYsexpr_if_then);
  if (T203 != YPfalse) {
    T202 = VARREF(YsyntaxYsexpr_if_then);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_sexpr_if_then_40;
  T201 = CALL2(1,VARREF(YPdefine_method),T202,T204);
  VARSET(YsyntaxYsexpr_if_then,T201);
  lit_64 = YPPsym((P)"sexpr-if-else");
  T205 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_else_41 = YPmet(FUNCODEREF(fun_sexpr_if_else_41),LITREF(lit_64),T205,ENVNUL,PNUL,YPfalse);
  T208 = BOUNDP(YsyntaxYsexpr_if_else);
  if (T208 != YPfalse) {
    T207 = VARREF(YsyntaxYsexpr_if_else);
  } else {
    T207 = YPfalse;
  }
  T209 = fun_sexpr_if_else_41;
  T206 = CALL2(1,VARREF(YPdefine_method),T207,T209);
  VARSET(YsyntaxYsexpr_if_else,T206);
  lit_65 = YPPsym((P)"sexpr-make-if");
  lit_66 = YPPsym((P)"test");
  lit_67 = YPPsym((P)"then");
  lit_68 = YPPsym((P)"else");
  T210 = YPsig(YPPlist(3,LITREF(lit_66),LITREF(lit_67),LITREF(lit_68)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_make_if_42 = YPmet(FUNCODEREF(fun_sexpr_make_if_42),LITREF(lit_65),T210,ENVNUL,PNUL,YPfalse);
  T213 = BOUNDP(YsyntaxYsexpr_make_if);
  if (T213 != YPfalse) {
    T212 = VARREF(YsyntaxYsexpr_make_if);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_sexpr_make_if_42;
  T211 = CALL2(1,VARREF(YPdefine_method),T212,T214);
  VARSET(YsyntaxYsexpr_make_if,T211);
  lit_69 = YPPsym((P)"lab");
  VARSET(YsyntaxYDsexpr_bind_exit_tag,LITREF(lit_69));
  lit_70 = YPPsym((P)"sexpr-block?");
  T215 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_blockQ_43 = YPmet(FUNCODEREF(fun_sexpr_blockQ_43),LITREF(lit_70),T215,ENVNUL,PNUL,YPfalse);
  T218 = BOUNDP(YsyntaxYsexpr_blockQ);
  if (T218 != YPfalse) {
    T217 = VARREF(YsyntaxYsexpr_blockQ);
  } else {
    T217 = YPfalse;
  }
  T219 = fun_sexpr_blockQ_43;
  T216 = CALL2(1,VARREF(YPdefine_method),T217,T219);
  VARSET(YsyntaxYsexpr_blockQ,T216);
  lit_71 = YPPsym((P)"sexpr-block-name");
  T220 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_block_name_44 = YPmet(FUNCODEREF(fun_sexpr_block_name_44),LITREF(lit_71),T220,ENVNUL,PNUL,YPfalse);
  T223 = BOUNDP(YsyntaxYsexpr_block_name);
  if (T223 != YPfalse) {
    T222 = VARREF(YsyntaxYsexpr_block_name);
  } else {
    T222 = YPfalse;
  }
  T224 = fun_sexpr_block_name_44;
  T221 = CALL2(1,VARREF(YPdefine_method),T222,T224);
  VARSET(YsyntaxYsexpr_block_name,T221);
  lit_72 = YPPsym((P)"sexpr-block-body");
  T227 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  T226 = fun_sexpr_block_body_45 = YPmet(FUNCODEREF(fun_sexpr_block_body_45),LITREF(lit_72),T227,ENVNUL,PNUL,YPfalse);
  T231 = BOUNDP(YsyntaxYsexpr_block_body);
  if (T231 != YPfalse) {
    T230 = VARREF(YsyntaxYsexpr_block_body);
  } else {
    T230 = YPfalse;
  }
  T232 = fun_sexpr_block_body_45;
  T229 = CALL2(1,VARREF(YPdefine_method),T230,T232);
  T228 = VARSET(YsyntaxYsexpr_block_body,T229);
  T225 = T228;
  return T225;
}

P YsyntaxY___main_1___() {
  P T270,T269,T268,T267,T266,T265,T264,T263,T262,T261,T260,T259,T258,T257,T256,T255;
  P T254,T253,T252,T251,T250,T249,T248,T247,T246,T245,T244,T243,T242,T241,T240,T239;
  P T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223;
  P T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207;
  P T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191;
  P T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175;
  P T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159;
  P T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143;
  P T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127;
  P T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111;
  P T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95;
  P T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79;
  P T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63;
  P T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47;
  P T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_73 = YPPsym((P)"fin");
  VARSET(YsyntaxYDsexpr_unwind_protect_tag,LITREF(lit_73));
  lit_74 = YPPsym((P)"sexpr-unwind-protect?");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unwind_protectQ_46 = YPmet(FUNCODEREF(fun_sexpr_unwind_protectQ_46),LITREF(lit_74),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YsyntaxYsexpr_unwind_protectQ);
  if (T3 != YPfalse) {
    T2 = VARREF(YsyntaxYsexpr_unwind_protectQ);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_unwind_protectQ_46;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YsyntaxYsexpr_unwind_protectQ,T1);
  lit_75 = YPPsym((P)"sexpr-unwind-protect-protected-form");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_unwind_protect_protected_form_47 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_protected_form_47),LITREF(lit_75),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YsyntaxYsexpr_unwind_protect_protected_form);
  if (T8 != YPfalse) {
    T7 = VARREF(YsyntaxYsexpr_unwind_protect_protected_form);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_unwind_protect_protected_form_47;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YsyntaxYsexpr_unwind_protect_protected_form,T6);
  lit_76 = YPPsym((P)"sexpr-unwind-protect-cleanup-forms");
  T10 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_unwind_protect_cleanup_forms_48 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_cleanup_forms_48),LITREF(lit_76),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YsyntaxYsexpr_unwind_protect_cleanup_forms);
  if (T13 != YPfalse) {
    T12 = VARREF(YsyntaxYsexpr_unwind_protect_cleanup_forms);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_sexpr_unwind_protect_cleanup_forms_48;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YsyntaxYsexpr_unwind_protect_cleanup_forms,T11);
  lit_77 = YPPsym((P)"try");
  VARSET(YsyntaxYDsexpr_monitor_tag,LITREF(lit_77));
  lit_78 = YPPsym((P)"sexpr-monitor?");
  T15 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_monitorQ_49 = YPmet(FUNCODEREF(fun_sexpr_monitorQ_49),LITREF(lit_78),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YsyntaxYsexpr_monitorQ);
  if (T18 != YPfalse) {
    T17 = VARREF(YsyntaxYsexpr_monitorQ);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_sexpr_monitorQ_49;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YsyntaxYsexpr_monitorQ,T16);
  lit_79 = YPPsym((P)"sexpr-monitor-expand");
  lit_80 = YPPsym((P)"return");
  lit_81 = YPPsym((P)"x-1294");
  lit_82 = YPPsym((P)"msg");
  lit_83 = YPPsym((P)"args");
  lit_84 = YPsb((P)"Malformed TRY expression: ~=");
  lit_85 = YPsb((P)"Match Pattern Failure");
  lit_86 = YPPsym((P)"type");
  T22 = YPsig(YPPlist(2,LITREF(lit_82),LITREF(lit_83)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1294_50 = YPmet(FUNCODEREF(fun_x_1294_50),LITREF(lit_81),T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(1,LITREF(lit_80)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_expand_52 = YPmet(FUNCODEREF(fun_sexpr_monitor_expand_52),LITREF(lit_79),T20,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YsyntaxYsexpr_monitor_expand);
  if (T25 != YPfalse) {
    T24 = VARREF(YsyntaxYsexpr_monitor_expand);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_sexpr_monitor_expand_52;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YsyntaxYsexpr_monitor_expand,T23);
  lit_87 = YPPsym((P)"find-option");
  lit_88 = YPPsym((P)"options");
  lit_89 = YPPsym((P)"option");
  lit_90 = YPPsym((P)"default");
  T27 = YPsig(YPPlist(3,LITREF(lit_88),LITREF(lit_89),LITREF(lit_90)),YPPlist(3,VARREF(YLlstG),VARREF(YLsymG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YsyntaxYfind_option = YPmet(FUNCODEREF(YsyntaxYfind_option),LITREF(lit_87),T27,ENVNUL,PNUL,YPfalse);
  T28 = YsyntaxYfind_option;
  VARSET(YsyntaxYfind_option,T28);
  lit_91 = YPPsym((P)"sexpr-monitor-type");
  lit_92 = YPPlist(1,YPPsym((P)"<condition>"));
  lit_93 = YPPsym((P)"x-1296");
  lit_94 = YPsb((P)"Malformed TRY condition type: %=");
  T31 = YPsig(YPPlist(2,LITREF(lit_82),LITREF(lit_83)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1296_54 = YPmet(FUNCODEREF(fun_x_1296_54),LITREF(lit_93),T31,ENVNUL,PNUL,YPfalse);
  T30 = YPsig(YPPlist(1,LITREF(lit_80)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(1,LITREF(lit_88)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_type_56 = YPmet(FUNCODEREF(fun_sexpr_monitor_type_56),LITREF(lit_91),T29,ENVNUL,PNUL,YPfalse);
  T34 = BOUNDP(YsyntaxYsexpr_monitor_type);
  if (T34 != YPfalse) {
    T33 = VARREF(YsyntaxYsexpr_monitor_type);
  } else {
    T33 = YPfalse;
  }
  T35 = fun_sexpr_monitor_type_56;
  T32 = CALL2(1,VARREF(YPdefine_method),T33,T35);
  VARSET(YsyntaxYsexpr_monitor_type,T32);
  lit_95 = YPPsym((P)"sexpr-monitor-info");
  lit_96 = YPPsym((P)"info");
  lit_97 = YPPsym((P)"description");
  lit_98 = YPsb((P)"TRY may only have one of INFO or DESCRIPTION: %=");
  lit_99 = YPPsym((P)"x-1298");
  lit_100 = YPsb((P)"Malformed TRY info expression: %=");
  lit_101 = YPPsym((P)"x-1300");
  lit_102 = YPsb((P)"Malformed TRY description: %=");
  lit_103 = YPPsym((P)"isa");
  lit_104 = YPPsym((P)"<simple-handler-info>");
  lit_105 = YPPsym((P)"handler-info-message");
  lit_106 = YPPsym((P)"handler-info-arguments");
  lit_107 = YPPsym((P)"lst");
  lit_108 = YPPsym((P)"$default-handler-info");
  T40 = YPsig(YPPlist(2,LITREF(lit_82),LITREF(lit_83)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1298_57 = YPmet(FUNCODEREF(fun_x_1298_57),LITREF(lit_99),T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(1,LITREF(lit_80)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(2,LITREF(lit_82),LITREF(lit_83)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1300_59 = YPmet(FUNCODEREF(fun_x_1300_59),LITREF(lit_101),T38,ENVNUL,PNUL,YPfalse);
  T37 = YPsig(YPPlist(1,LITREF(lit_80)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T36 = YPsig(YPPlist(1,LITREF(lit_88)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_info_61 = YPmet(FUNCODEREF(fun_sexpr_monitor_info_61),LITREF(lit_95),T36,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YsyntaxYsexpr_monitor_info);
  if (T43 != YPfalse) {
    T42 = VARREF(YsyntaxYsexpr_monitor_info);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_sexpr_monitor_info_61;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YsyntaxYsexpr_monitor_info,T41);
  lit_109 = YPPsym((P)"sexpr-monitor-test");
  lit_110 = YPPlist(1,YPtrue);
  T45 = YPsig(YPPlist(1,LITREF(lit_88)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_monitor_test_62 = YPmet(FUNCODEREF(fun_sexpr_monitor_test_62),LITREF(lit_109),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YsyntaxYsexpr_monitor_test);
  if (T48 != YPfalse) {
    T47 = VARREF(YsyntaxYsexpr_monitor_test);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_sexpr_monitor_test_62;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YsyntaxYsexpr_monitor_test,T46);
  lit_111 = YPPsym((P)"sexpr-monitor-body");
  T50 = YPsig(YPPlist(1,LITREF(lit_57)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_monitor_body_63 = YPmet(FUNCODEREF(fun_sexpr_monitor_body_63),LITREF(lit_111),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YsyntaxYsexpr_monitor_body);
  if (T53 != YPfalse) {
    T52 = VARREF(YsyntaxYsexpr_monitor_body);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_sexpr_monitor_body_63;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YsyntaxYsexpr_monitor_body,T51);
  lit_112 = YPPsym((P)"seq");
  VARSET(YsyntaxYDsexpr_begin_tag,LITREF(lit_112));
  lit_113 = YPPsym((P)"sexpr-begin?");
  T55 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_beginQ_64 = YPmet(FUNCODEREF(fun_sexpr_beginQ_64),LITREF(lit_113),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YsyntaxYsexpr_beginQ);
  if (T58 != YPfalse) {
    T57 = VARREF(YsyntaxYsexpr_beginQ);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_sexpr_beginQ_64;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YsyntaxYsexpr_beginQ,T56);
  lit_114 = YPPsym((P)"sexpr-begin-actions");
  lit_115 = YPPsym((P)"begin-exp");
  T60 = YPsig(YPPlist(1,LITREF(lit_115)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_begin_actions_65 = YPmet(FUNCODEREF(fun_sexpr_begin_actions_65),LITREF(lit_114),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YsyntaxYsexpr_begin_actions);
  if (T63 != YPfalse) {
    T62 = VARREF(YsyntaxYsexpr_begin_actions);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_sexpr_begin_actions_65;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YsyntaxYsexpr_begin_actions,T61);
  lit_116 = YPPsym((P)"sexpr-last-exp?");
  T65 = YPsig(YPPlist(1,LITREF(lit_112)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_last_expQ_66 = YPmet(FUNCODEREF(fun_sexpr_last_expQ_66),LITREF(lit_116),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YsyntaxYsexpr_last_expQ);
  if (T68 != YPfalse) {
    T67 = VARREF(YsyntaxYsexpr_last_expQ);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_sexpr_last_expQ_66;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YsyntaxYsexpr_last_expQ,T66);
  lit_117 = YPPsym((P)"sexpr-first-exp");
  T70 = YPsig(YPPlist(1,LITREF(lit_112)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_first_exp_67 = YPmet(FUNCODEREF(fun_sexpr_first_exp_67),LITREF(lit_117),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YsyntaxYsexpr_first_exp);
  if (T73 != YPfalse) {
    T72 = VARREF(YsyntaxYsexpr_first_exp);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_sexpr_first_exp_67;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YsyntaxYsexpr_first_exp,T71);
  lit_118 = YPPsym((P)"sexpr-rest-exps");
  T75 = YPsig(YPPlist(1,LITREF(lit_112)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_rest_exps_68 = YPmet(FUNCODEREF(fun_sexpr_rest_exps_68),LITREF(lit_118),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YsyntaxYsexpr_rest_exps);
  if (T78 != YPfalse) {
    T77 = VARREF(YsyntaxYsexpr_rest_exps);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_sexpr_rest_exps_68;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YsyntaxYsexpr_rest_exps,T76);
  lit_119 = YPPsym((P)"sexpr-sequence->begin");
  T80 = YPsig(YPPlist(1,LITREF(lit_112)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_sequence_Gbegin_69 = YPmet(FUNCODEREF(fun_sexpr_sequence_Gbegin_69),LITREF(lit_119),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YsyntaxYsexpr_sequence_Gbegin);
  if (T83 != YPfalse) {
    T82 = VARREF(YsyntaxYsexpr_sequence_Gbegin);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_sexpr_sequence_Gbegin_69;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YsyntaxYsexpr_sequence_Gbegin,T81);
  lit_120 = YPPsym((P)"sexpr-make-begin");
  T85 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_make_begin_70 = YPmet(FUNCODEREF(fun_sexpr_make_begin_70),LITREF(lit_120),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YsyntaxYsexpr_make_begin);
  if (T88 != YPfalse) {
    T87 = VARREF(YsyntaxYsexpr_make_begin);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_sexpr_make_begin_70;
  T86 = CALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YsyntaxYsexpr_make_begin,T86);
  lit_121 = YPPsym((P)"sexpr-application?");
  T90 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_applicationQ_71 = YPmet(FUNCODEREF(fun_sexpr_applicationQ_71),LITREF(lit_121),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YsyntaxYsexpr_applicationQ);
  if (T93 != YPfalse) {
    T92 = VARREF(YsyntaxYsexpr_applicationQ);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_sexpr_applicationQ_71;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YsyntaxYsexpr_applicationQ,T91);
  lit_122 = YPPsym((P)"sexpr-operator");
  lit_123 = YPPsym((P)"app");
  T95 = YPsig(YPPlist(1,LITREF(lit_123)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_operator_72 = YPmet(FUNCODEREF(fun_sexpr_operator_72),LITREF(lit_122),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YsyntaxYsexpr_operator);
  if (T98 != YPfalse) {
    T97 = VARREF(YsyntaxYsexpr_operator);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_sexpr_operator_72;
  T96 = CALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YsyntaxYsexpr_operator,T96);
  lit_124 = YPPsym((P)"sexpr-operands");
  T100 = YPsig(YPPlist(1,LITREF(lit_123)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_operands_73 = YPmet(FUNCODEREF(fun_sexpr_operands_73),LITREF(lit_124),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YsyntaxYsexpr_operands);
  if (T103 != YPfalse) {
    T102 = VARREF(YsyntaxYsexpr_operands);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_sexpr_operands_73;
  T101 = CALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YsyntaxYsexpr_operands,T101);
  lit_125 = YPPsym((P)"sexpr-no-operands?");
  T105 = YPsig(YPPlist(1,LITREF(lit_83)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_no_operandsQ_74 = YPmet(FUNCODEREF(fun_sexpr_no_operandsQ_74),LITREF(lit_125),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YsyntaxYsexpr_no_operandsQ);
  if (T108 != YPfalse) {
    T107 = VARREF(YsyntaxYsexpr_no_operandsQ);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_sexpr_no_operandsQ_74;
  T106 = CALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YsyntaxYsexpr_no_operandsQ,T106);
  lit_126 = YPPsym((P)"sexpr-first-operand");
  T110 = YPsig(YPPlist(1,LITREF(lit_83)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_first_operand_75 = YPmet(FUNCODEREF(fun_sexpr_first_operand_75),LITREF(lit_126),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YsyntaxYsexpr_first_operand);
  if (T113 != YPfalse) {
    T112 = VARREF(YsyntaxYsexpr_first_operand);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_sexpr_first_operand_75;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YsyntaxYsexpr_first_operand,T111);
  lit_127 = YPPsym((P)"sexpr-rest-operands");
  T115 = YPsig(YPPlist(1,LITREF(lit_83)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_rest_operands_76 = YPmet(FUNCODEREF(fun_sexpr_rest_operands_76),LITREF(lit_127),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YsyntaxYsexpr_rest_operands);
  if (T118 != YPfalse) {
    T117 = VARREF(YsyntaxYsexpr_rest_operands);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_sexpr_rest_operands_76;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YsyntaxYsexpr_rest_operands,T116);
  lit_128 = YPPsym((P)"sexpr-make-application");
  lit_129 = YPPsym((P)"op");
  lit_130 = YPPsym((P)"operands");
  T120 = YPsig(YPPlist(2,LITREF(lit_129),LITREF(lit_130)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_make_application_77 = YPmet(FUNCODEREF(fun_sexpr_make_application_77),LITREF(lit_128),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YsyntaxYsexpr_make_application);
  if (T123 != YPfalse) {
    T122 = VARREF(YsyntaxYsexpr_make_application);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_sexpr_make_application_77;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YsyntaxYsexpr_make_application,T121);
  VARSET(YsyntaxYTunique_name_counterT,YPint((P)0));
  lit_131 = YPPsym((P)"sexpr-new-unique-name-counter!");
  T125 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLintG),Ynil);
  fun_sexpr_new_unique_name_counterX_78 = YPmet(FUNCODEREF(fun_sexpr_new_unique_name_counterX_78),LITREF(lit_131),T125,ENVNUL,PNUL,YPfalse);
  T128 = BOUNDP(YsyntaxYsexpr_new_unique_name_counterX);
  if (T128 != YPfalse) {
    T127 = VARREF(YsyntaxYsexpr_new_unique_name_counterX);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_sexpr_new_unique_name_counterX_78;
  T126 = CALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YsyntaxYsexpr_new_unique_name_counterX,T126);
  VARSET(YsyntaxYLnameG,VARREF(YLanyG));
  lit_132 = YPPsym((P)"sexpr-unique-name");
  lit_133 = YPPsym((P)"prefix");
  T130 = YPsig(YPPlist(1,LITREF(lit_133)),YPPlist(1,VARREF(YsyntaxYLnameG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_unique_name_79 = YPmet(FUNCODEREF(fun_sexpr_unique_name_79),LITREF(lit_132),T130,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(YsyntaxYsexpr_unique_name);
  if (T133 != YPfalse) {
    T132 = VARREF(YsyntaxYsexpr_unique_name);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_sexpr_unique_name_79;
  T131 = CALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YsyntaxYsexpr_unique_name,T131);
  lit_134 = YPPsym((P)"let");
  VARSET(YsyntaxYDsexpr_let_tag,LITREF(lit_134));
  lit_135 = YPPsym((P)"sexpr-let?");
  T135 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_letQ_80 = YPmet(FUNCODEREF(fun_sexpr_letQ_80),LITREF(lit_135),T135,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(YsyntaxYsexpr_letQ);
  if (T138 != YPfalse) {
    T137 = VARREF(YsyntaxYsexpr_letQ);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_sexpr_letQ_80;
  T136 = CALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YsyntaxYsexpr_letQ,T136);
  lit_136 = YPPsym((P)"sexpr-let-bound-variables");
  lit_137 = YPPsym((P)"let-exp");
  T140 = YPsig(YPPlist(1,LITREF(lit_137)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_let_bound_variables_81 = YPmet(FUNCODEREF(fun_sexpr_let_bound_variables_81),LITREF(lit_136),T140,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(YsyntaxYsexpr_let_bound_variables);
  if (T143 != YPfalse) {
    T142 = VARREF(YsyntaxYsexpr_let_bound_variables);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_sexpr_let_bound_variables_81;
  T141 = CALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YsyntaxYsexpr_let_bound_variables,T141);
  lit_138 = YPPsym((P)"sexpr-let-values");
  T145 = YPsig(YPPlist(1,LITREF(lit_137)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_let_values_82 = YPmet(FUNCODEREF(fun_sexpr_let_values_82),LITREF(lit_138),T145,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YsyntaxYsexpr_let_values);
  if (T148 != YPfalse) {
    T147 = VARREF(YsyntaxYsexpr_let_values);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_sexpr_let_values_82;
  T146 = CALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YsyntaxYsexpr_let_values,T146);
  lit_139 = YPPsym((P)"sexpr-let-body");
  T150 = YPsig(YPPlist(1,LITREF(lit_137)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_let_body_83 = YPmet(FUNCODEREF(fun_sexpr_let_body_83),LITREF(lit_139),T150,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(YsyntaxYsexpr_let_body);
  if (T153 != YPfalse) {
    T152 = VARREF(YsyntaxYsexpr_let_body);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_sexpr_let_body_83;
  T151 = CALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YsyntaxYsexpr_let_body,T151);
  lit_140 = YPPsym((P)"sexpr-let-names+values");
  lit_141 = YPPsym((P)"names");
  lit_142 = YPPsym((P)"vals");
  lit_143 = YPPsym((P)"loop");
  lit_144 = YPPsym((P)"rnames");
  lit_145 = YPPsym((P)"rvalues");
  lit_146 = YPsb((P)"tup");
  lit_147 = YPPsym((P)"inner");
  lit_148 = YPPsym((P)"rtnames");
  lit_149 = YPPsym((P)"rtvalues");
  lit_150 = YPPsym((P)"index");
  lit_151 = YPPsym((P)"tnames");
  lit_152 = YPPsym((P)"...");
  lit_153 = YPPsym((P)"<lst>");
  lit_154 = YPPsym((P)"sub");
  lit_155 = YPPsym((P)"len");
  lit_156 = YPPsym((P)"elt");
  T157 = YPsig(YPPlist(4,LITREF(lit_148),LITREF(lit_149),LITREF(lit_150),LITREF(lit_151)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_inner_84 = YPmet(FUNCODEREF(fun_inner_84),LITREF(lit_147),T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(4,LITREF(lit_144),LITREF(lit_145),LITREF(lit_141),LITREF(lit_142)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_loop_85 = YPmet(FUNCODEREF(fun_loop_85),LITREF(lit_143),T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(YPPlist(2,LITREF(lit_141),LITREF(lit_142)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_sexpr_let_namesAvalues_86 = YPmet(FUNCODEREF(fun_sexpr_let_namesAvalues_86),LITREF(lit_140),T155,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(YsyntaxYsexpr_let_namesAvalues);
  if (T160 != YPfalse) {
    T159 = VARREF(YsyntaxYsexpr_let_namesAvalues);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_sexpr_let_namesAvalues_86;
  T158 = CALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(YsyntaxYsexpr_let_namesAvalues,T158);
  lit_157 = YPPsym((P)"sexpr-let->combination");
  lit_158 = YPPsym((P)"col");
  lit_159 = YPPsym((P)"values");
  T163 = YPsig(YPPlist(2,LITREF(lit_141),LITREF(lit_159)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_col_87 = YPmet(FUNCODEREF(fun_col_87),LITREF(lit_158),T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(1,LITREF(lit_137)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_let_Gcombination_88 = YPmet(FUNCODEREF(fun_sexpr_let_Gcombination_88),LITREF(lit_157),T162,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(YsyntaxYsexpr_let_Gcombination);
  if (T166 != YPfalse) {
    T165 = VARREF(YsyntaxYsexpr_let_Gcombination);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_sexpr_let_Gcombination_88;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(YsyntaxYsexpr_let_Gcombination,T164);
  lit_160 = YPPsym((P)"loc");
  VARSET(YsyntaxYDsexpr_locals_tag,LITREF(lit_160));
  lit_161 = YPPsym((P)"sexpr-loc?");
  T168 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_locQ_89 = YPmet(FUNCODEREF(fun_sexpr_locQ_89),LITREF(lit_161),T168,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(YsyntaxYsexpr_locQ);
  if (T171 != YPfalse) {
    T170 = VARREF(YsyntaxYsexpr_locQ);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_sexpr_locQ_89;
  T169 = CALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(YsyntaxYsexpr_locQ,T169);
  lit_162 = YPPsym((P)"sexpr-loc-bound-names");
  lit_163 = YPPsym((P)"loc-exp");
  T173 = YPsig(YPPlist(1,LITREF(lit_163)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_names_90 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_names_90),LITREF(lit_162),T173,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(YsyntaxYsexpr_loc_bound_names);
  if (T176 != YPfalse) {
    T175 = VARREF(YsyntaxYsexpr_loc_bound_names);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_sexpr_loc_bound_names_90;
  T174 = CALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(YsyntaxYsexpr_loc_bound_names,T174);
  lit_164 = YPPsym((P)"sexpr-loc-bound-signatures");
  T178 = YPsig(YPPlist(1,LITREF(lit_163)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_signatures_91 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_signatures_91),LITREF(lit_164),T178,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(YsyntaxYsexpr_loc_bound_signatures);
  if (T181 != YPfalse) {
    T180 = VARREF(YsyntaxYsexpr_loc_bound_signatures);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_sexpr_loc_bound_signatures_91;
  T179 = CALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(YsyntaxYsexpr_loc_bound_signatures,T179);
  lit_165 = YPPsym((P)"sexpr-loc-bound-bodies");
  T183 = YPsig(YPPlist(1,LITREF(lit_163)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_bodies_92 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_bodies_92),LITREF(lit_165),T183,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(YsyntaxYsexpr_loc_bound_bodies);
  if (T186 != YPfalse) {
    T185 = VARREF(YsyntaxYsexpr_loc_bound_bodies);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_sexpr_loc_bound_bodies_92;
  T184 = CALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(YsyntaxYsexpr_loc_bound_bodies,T184);
  lit_166 = YPPsym((P)"sexpr-loc-raw-body");
  T188 = YPsig(YPPlist(1,LITREF(lit_163)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_raw_body_93 = YPmet(FUNCODEREF(fun_sexpr_loc_raw_body_93),LITREF(lit_166),T188,ENVNUL,PNUL,YPfalse);
  T191 = BOUNDP(YsyntaxYsexpr_loc_raw_body);
  if (T191 != YPfalse) {
    T190 = VARREF(YsyntaxYsexpr_loc_raw_body);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_sexpr_loc_raw_body_93;
  T189 = CALL2(1,VARREF(YPdefine_method),T190,T192);
  VARSET(YsyntaxYsexpr_loc_raw_body,T189);
  lit_167 = YPPsym((P)"sexpr-loc-body");
  T193 = YPsig(YPPlist(1,LITREF(lit_163)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_loc_body_94 = YPmet(FUNCODEREF(fun_sexpr_loc_body_94),LITREF(lit_167),T193,ENVNUL,PNUL,YPfalse);
  T196 = BOUNDP(YsyntaxYsexpr_loc_body);
  if (T196 != YPfalse) {
    T195 = VARREF(YsyntaxYsexpr_loc_body);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_sexpr_loc_body_94;
  T194 = CALL2(1,VARREF(YPdefine_method),T195,T197);
  VARSET(YsyntaxYsexpr_loc_body,T194);
  lit_168 = YPPsym((P)"rep");
  VARSET(YsyntaxYDsexpr_iterate_tag,LITREF(lit_168));
  lit_169 = YPPsym((P)"sexpr-iterate?");
  T198 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_iterateQ_95 = YPmet(FUNCODEREF(fun_sexpr_iterateQ_95),LITREF(lit_169),T198,ENVNUL,PNUL,YPfalse);
  T201 = BOUNDP(YsyntaxYsexpr_iterateQ);
  if (T201 != YPfalse) {
    T200 = VARREF(YsyntaxYsexpr_iterateQ);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_sexpr_iterateQ_95;
  T199 = CALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(YsyntaxYsexpr_iterateQ,T199);
  lit_170 = YPPsym((P)"sexpr-iterate-name");
  lit_171 = YPPsym((P)"rep-exp");
  T203 = YPsig(YPPlist(1,LITREF(lit_171)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_iterate_name_96 = YPmet(FUNCODEREF(fun_sexpr_iterate_name_96),LITREF(lit_170),T203,ENVNUL,PNUL,YPfalse);
  T206 = BOUNDP(YsyntaxYsexpr_iterate_name);
  if (T206 != YPfalse) {
    T205 = VARREF(YsyntaxYsexpr_iterate_name);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_sexpr_iterate_name_96;
  T204 = CALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(YsyntaxYsexpr_iterate_name,T204);
  VARSET(YsyntaxYDsexpr_values_tag,LITREF(lit_39));
  lit_172 = YPPsym((P)"sexpr-iterate-signature");
  T208 = YPsig(YPPlist(1,LITREF(lit_171)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_signature_97 = YPmet(FUNCODEREF(fun_sexpr_iterate_signature_97),LITREF(lit_172),T208,ENVNUL,PNUL,YPfalse);
  T211 = BOUNDP(YsyntaxYsexpr_iterate_signature);
  if (T211 != YPfalse) {
    T210 = VARREF(YsyntaxYsexpr_iterate_signature);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_sexpr_iterate_signature_97;
  T209 = CALL2(1,VARREF(YPdefine_method),T210,T212);
  VARSET(YsyntaxYsexpr_iterate_signature,T209);
  lit_173 = YPPsym((P)"sexpr-iterate-inits");
  T213 = YPsig(YPPlist(1,LITREF(lit_171)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_inits_98 = YPmet(FUNCODEREF(fun_sexpr_iterate_inits_98),LITREF(lit_173),T213,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(YsyntaxYsexpr_iterate_inits);
  if (T216 != YPfalse) {
    T215 = VARREF(YsyntaxYsexpr_iterate_inits);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_sexpr_iterate_inits_98;
  T214 = CALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(YsyntaxYsexpr_iterate_inits,T214);
  lit_174 = YPPsym((P)"sexpr-iterate-body");
  T218 = YPsig(YPPlist(1,LITREF(lit_171)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_body_99 = YPmet(FUNCODEREF(fun_sexpr_iterate_body_99),LITREF(lit_174),T218,ENVNUL,PNUL,YPfalse);
  T221 = BOUNDP(YsyntaxYsexpr_iterate_body);
  if (T221 != YPfalse) {
    T220 = VARREF(YsyntaxYsexpr_iterate_body);
  } else {
    T220 = YPfalse;
  }
  T222 = fun_sexpr_iterate_body_99;
  T219 = CALL2(1,VARREF(YPdefine_method),T220,T222);
  VARSET(YsyntaxYsexpr_iterate_body,T219);
  lit_175 = YPPsym((P)"sexpr-iterate->loc");
  T223 = YPsig(YPPlist(1,LITREF(lit_171)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_Gloc_100 = YPmet(FUNCODEREF(fun_sexpr_iterate_Gloc_100),LITREF(lit_175),T223,ENVNUL,PNUL,YPfalse);
  T226 = BOUNDP(YsyntaxYsexpr_iterate_Gloc);
  if (T226 != YPfalse) {
    T225 = VARREF(YsyntaxYsexpr_iterate_Gloc);
  } else {
    T225 = YPfalse;
  }
  T227 = fun_sexpr_iterate_Gloc_100;
  T224 = CALL2(1,VARREF(YPdefine_method),T225,T227);
  VARSET(YsyntaxYsexpr_iterate_Gloc,T224);
  VARSET(YsyntaxYDsexpr_isa_tag,LITREF(lit_103));
  lit_176 = YPPsym((P)"sexpr-isa?");
  T228 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_isaQ_101 = YPmet(FUNCODEREF(fun_sexpr_isaQ_101),LITREF(lit_176),T228,ENVNUL,PNUL,YPfalse);
  T231 = BOUNDP(YsyntaxYsexpr_isaQ);
  if (T231 != YPfalse) {
    T230 = VARREF(YsyntaxYsexpr_isaQ);
  } else {
    T230 = YPfalse;
  }
  T232 = fun_sexpr_isaQ_101;
  T229 = CALL2(1,VARREF(YPdefine_method),T230,T232);
  VARSET(YsyntaxYsexpr_isaQ,T229);
  lit_177 = YPPsym((P)"sexpr-isa-parent");
  T233 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_isa_parent_102 = YPmet(FUNCODEREF(fun_sexpr_isa_parent_102),LITREF(lit_177),T233,ENVNUL,PNUL,YPfalse);
  T236 = BOUNDP(YsyntaxYsexpr_isa_parent);
  if (T236 != YPfalse) {
    T235 = VARREF(YsyntaxYsexpr_isa_parent);
  } else {
    T235 = YPfalse;
  }
  T237 = fun_sexpr_isa_parent_102;
  T234 = CALL2(1,VARREF(YPdefine_method),T235,T237);
  VARSET(YsyntaxYsexpr_isa_parent,T234);
  lit_178 = YPPsym((P)"sexpr-isa-slot-inits");
  T238 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_slot_inits_103 = YPmet(FUNCODEREF(fun_sexpr_isa_slot_inits_103),LITREF(lit_178),T238,ENVNUL,PNUL,YPfalse);
  T241 = BOUNDP(YsyntaxYsexpr_isa_slot_inits);
  if (T241 != YPfalse) {
    T240 = VARREF(YsyntaxYsexpr_isa_slot_inits);
  } else {
    T240 = YPfalse;
  }
  T242 = fun_sexpr_isa_slot_inits_103;
  T239 = CALL2(1,VARREF(YPdefine_method),T240,T242);
  VARSET(YsyntaxYsexpr_isa_slot_inits,T239);
  lit_179 = YPPsym((P)"sexpr-isa-init-slots");
  T243 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_init_slots_104 = YPmet(FUNCODEREF(fun_sexpr_isa_init_slots_104),LITREF(lit_179),T243,ENVNUL,PNUL,YPfalse);
  T246 = BOUNDP(YsyntaxYsexpr_isa_init_slots);
  if (T246 != YPfalse) {
    T245 = VARREF(YsyntaxYsexpr_isa_init_slots);
  } else {
    T245 = YPfalse;
  }
  T247 = fun_sexpr_isa_init_slots_104;
  T244 = CALL2(1,VARREF(YPdefine_method),T245,T247);
  VARSET(YsyntaxYsexpr_isa_init_slots,T244);
  lit_180 = YPPsym((P)"sexpr-isa-init-values");
  T248 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_init_values_105 = YPmet(FUNCODEREF(fun_sexpr_isa_init_values_105),LITREF(lit_180),T248,ENVNUL,PNUL,YPfalse);
  T251 = BOUNDP(YsyntaxYsexpr_isa_init_values);
  if (T251 != YPfalse) {
    T250 = VARREF(YsyntaxYsexpr_isa_init_values);
  } else {
    T250 = YPfalse;
  }
  T252 = fun_sexpr_isa_init_values_105;
  T249 = CALL2(1,VARREF(YPdefine_method),T250,T252);
  VARSET(YsyntaxYsexpr_isa_init_values,T249);
  lit_181 = YPPsym((P)"dc");
  VARSET(YsyntaxYDsexpr_define_class_tag,LITREF(lit_181));
  lit_182 = YPPsym((P)"sexpr-define-class?");
  T253 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_define_classQ_106 = YPmet(FUNCODEREF(fun_sexpr_define_classQ_106),LITREF(lit_182),T253,ENVNUL,PNUL,YPfalse);
  T256 = BOUNDP(YsyntaxYsexpr_define_classQ);
  if (T256 != YPfalse) {
    T255 = VARREF(YsyntaxYsexpr_define_classQ);
  } else {
    T255 = YPfalse;
  }
  T257 = fun_sexpr_define_classQ_106;
  T254 = CALL2(1,VARREF(YPdefine_method),T255,T257);
  VARSET(YsyntaxYsexpr_define_classQ,T254);
  lit_183 = YPPsym((P)"sexpr-define-class-parents");
  T258 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_define_class_parents_107 = YPmet(FUNCODEREF(fun_sexpr_define_class_parents_107),LITREF(lit_183),T258,ENVNUL,PNUL,YPfalse);
  T261 = BOUNDP(YsyntaxYsexpr_define_class_parents);
  if (T261 != YPfalse) {
    T260 = VARREF(YsyntaxYsexpr_define_class_parents);
  } else {
    T260 = YPfalse;
  }
  T262 = fun_sexpr_define_class_parents_107;
  T259 = CALL2(1,VARREF(YPdefine_method),T260,T262);
  VARSET(YsyntaxYsexpr_define_class_parents,T259);
  lit_184 = YPPsym((P)"slot");
  VARSET(YsyntaxYDsexpr_slot_tag,LITREF(lit_184));
  lit_185 = YPPsym((P)"sexpr-slot?");
  T265 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T264 = fun_sexpr_slotQ_108 = YPmet(FUNCODEREF(fun_sexpr_slotQ_108),LITREF(lit_185),T265,ENVNUL,PNUL,YPfalse);
  T269 = BOUNDP(YsyntaxYsexpr_slotQ);
  if (T269 != YPfalse) {
    T268 = VARREF(YsyntaxYsexpr_slotQ);
  } else {
    T268 = YPfalse;
  }
  T270 = fun_sexpr_slotQ_108;
  T267 = CALL2(1,VARREF(YPdefine_method),T268,T270);
  T266 = VARSET(YsyntaxYsexpr_slotQ,T267);
  T263 = T266;
  return T263;
}

P YsyntaxY___main_2___() {
  P T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130;
  P T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114;
  P T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98;
  P T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82;
  P T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66;
  P T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50;
  P T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
loop:
  lit_186 = YPPsym((P)"sexpr-slot-object");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_slot_object_109 = YPmet(FUNCODEREF(fun_sexpr_slot_object_109),LITREF(lit_186),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YsyntaxYsexpr_slot_object);
  if (T3 != YPfalse) {
    T2 = VARREF(YsyntaxYsexpr_slot_object);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_slot_object_109;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YsyntaxYsexpr_slot_object,T1);
  lit_187 = YPPsym((P)"sexpr-slot-variable");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_slot_variable_110 = YPmet(FUNCODEREF(fun_sexpr_slot_variable_110),LITREF(lit_187),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YsyntaxYsexpr_slot_variable);
  if (T8 != YPfalse) {
    T7 = VARREF(YsyntaxYsexpr_slot_variable);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_slot_variable_110;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YsyntaxYsexpr_slot_variable,T6);
  lit_188 = YPPsym((P)"sexpr-slot-init");
  lit_189 = YPPsym((P)"nul");
  T10 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_slot_init_111 = YPmet(FUNCODEREF(fun_sexpr_slot_init_111),LITREF(lit_188),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YsyntaxYsexpr_slot_init);
  if (T13 != YPfalse) {
    T12 = VARREF(YsyntaxYsexpr_slot_init);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_sexpr_slot_init_111;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YsyntaxYsexpr_slot_init,T11);
  lit_190 = YPPsym((P)"sexpr-make-getter");
  lit_191 = YPPsym((P)"_x");
  lit_192 = YPPsym((P)"slot-value");
  T15 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_86)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_make_getter_112 = YPmet(FUNCODEREF(fun_sexpr_make_getter_112),LITREF(lit_190),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YsyntaxYsexpr_make_getter);
  if (T18 != YPfalse) {
    T17 = VARREF(YsyntaxYsexpr_make_getter);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_sexpr_make_getter_112;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YsyntaxYsexpr_make_getter,T16);
  lit_193 = YPPsym((P)"sexpr-make-setter");
  lit_194 = YPPsym((P)"slot-type");
  lit_195 = YPPsym((P)"_z");
  lit_196 = YPPsym((P)"slot-value-setter");
  T20 = YPsig(YPPlist(3,LITREF(lit_59),LITREF(lit_86),LITREF(lit_194)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_make_setter_113 = YPmet(FUNCODEREF(fun_sexpr_make_setter_113),LITREF(lit_193),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YsyntaxYsexpr_make_setter);
  if (T23 != YPfalse) {
    T22 = VARREF(YsyntaxYsexpr_make_setter);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_sexpr_make_setter_113;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YsyntaxYsexpr_make_setter,T21);
  lit_197 = YPPsym((P)"sexpr-make-setter-name");
  lit_198 = YPsb((P)"-setter");
  T25 = YPsig(YPPlist(1,LITREF(lit_59)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_make_setter_name_114 = YPmet(FUNCODEREF(fun_sexpr_make_setter_name_114),LITREF(lit_197),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YsyntaxYsexpr_make_setter_name);
  if (T28 != YPfalse) {
    T27 = VARREF(YsyntaxYsexpr_make_setter_name);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_sexpr_make_setter_name_114;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YsyntaxYsexpr_make_setter_name,T26);
  lit_199 = YPPsym((P)"sexpr-macro?");
  T30 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_macroQ_115 = YPmet(FUNCODEREF(fun_sexpr_macroQ_115),LITREF(lit_199),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YsyntaxYsexpr_macroQ);
  if (T33 != YPfalse) {
    T32 = VARREF(YsyntaxYsexpr_macroQ);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_sexpr_macroQ_115;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YsyntaxYsexpr_macroQ,T31);
  lit_200 = YPPsym((P)"macro-expand");
  VARSET(YsyntaxYDsexpr_macro_expand_tag,LITREF(lit_200));
  lit_201 = YPPsym((P)"sexpr-macro-expand?");
  T35 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_macro_expandQ_116 = YPmet(FUNCODEREF(fun_sexpr_macro_expandQ_116),LITREF(lit_201),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YsyntaxYsexpr_macro_expandQ);
  if (T38 != YPfalse) {
    T37 = VARREF(YsyntaxYsexpr_macro_expandQ);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_sexpr_macro_expandQ_116;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YsyntaxYsexpr_macro_expandQ,T36);
  lit_202 = YPPsym((P)"mif");
  VARSET(YsyntaxYDsexpr_syntax_if_tag,LITREF(lit_202));
  lit_203 = YPPsym((P)"sexpr-make-syntax-if");
  lit_204 = YPPsym((P)"pat");
  T40 = YPsig(YPPlist(4,LITREF(lit_204),LITREF(lit_1),LITREF(lit_67),LITREF(lit_68)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  fun_sexpr_make_syntax_if_117 = YPmet(FUNCODEREF(fun_sexpr_make_syntax_if_117),LITREF(lit_203),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YsyntaxYsexpr_make_syntax_if);
  if (T43 != YPfalse) {
    T42 = VARREF(YsyntaxYsexpr_make_syntax_if);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_sexpr_make_syntax_if_117;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YsyntaxYsexpr_make_syntax_if,T41);
  lit_205 = YPPsym((P)"comma-atsign");
  VARSET(YsyntaxYTcomma_atsignT,LITREF(lit_205));
  lit_206 = YPPsym((P)"bq-list");
  VARSET(YsyntaxYTbq_listT,LITREF(lit_206));
  lit_207 = YPPsym((P)"bq-list*");
  VARSET(YsyntaxYTbq_listTT,LITREF(lit_207));
  lit_208 = YPPsym((P)"bq-append");
  VARSET(YsyntaxYTbq_appendT,LITREF(lit_208));
  lit_209 = YPPsym((P)"bq-nconc");
  VARSET(YsyntaxYTbq_nconcT,LITREF(lit_209));
  lit_210 = YPPsym((P)"bq-clobberable");
  VARSET(YsyntaxYTbq_clobberableT,LITREF(lit_210));
  lit_211 = YPPsym((P)"bq-quote");
  VARSET(YsyntaxYTbq_quoteT,LITREF(lit_211));
  lit_212 = YPPsym((P)"sexpr-expand-backquote");
  lit_213 = YPPsym((P)"x");
  lit_214 = YPPsym((P)"proto");
  T45 = YPsig(YPPlist(1,LITREF(lit_213)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YsyntaxYsexpr_expand_backquote = YPmet(FUNCODEREF(YsyntaxYsexpr_expand_backquote),LITREF(lit_212),T45,ENVNUL,PNUL,YPfalse);
  T46 = YsyntaxYsexpr_expand_backquote;
  VARSET(YsyntaxYsexpr_expand_backquote,T46);
  lit_215 = YPPsym((P)"sexpr-build-backquote-expander");
  T47 = YPsig(YPPlist(1,LITREF(lit_213)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_build_backquote_expander_119 = YPmet(FUNCODEREF(fun_sexpr_build_backquote_expander_119),LITREF(lit_215),T47,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(YsyntaxYsexpr_build_backquote_expander);
  if (T50 != YPfalse) {
    T49 = VARREF(YsyntaxYsexpr_build_backquote_expander);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_sexpr_build_backquote_expander_119;
  T48 = CALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YsyntaxYsexpr_build_backquote_expander,T48);
  lit_216 = YPPsym((P)"sexpr-unquote?");
  lit_217 = YPPsym((P)"unquote");
  T52 = YPsig(YPPlist(1,LITREF(lit_213)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unquoteQ_120 = YPmet(FUNCODEREF(fun_sexpr_unquoteQ_120),LITREF(lit_216),T52,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YsyntaxYsexpr_unquoteQ);
  if (T55 != YPfalse) {
    T54 = VARREF(YsyntaxYsexpr_unquoteQ);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_sexpr_unquoteQ_120;
  T53 = CALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YsyntaxYsexpr_unquoteQ,T53);
  lit_218 = YPPsym((P)"sexpr-unquote-splicing?");
  lit_219 = YPPsym((P)"unquote-splicing");
  T57 = YPsig(YPPlist(1,LITREF(lit_213)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unquote_splicingQ_121 = YPmet(FUNCODEREF(fun_sexpr_unquote_splicingQ_121),LITREF(lit_218),T57,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(YsyntaxYsexpr_unquote_splicingQ);
  if (T60 != YPfalse) {
    T59 = VARREF(YsyntaxYsexpr_unquote_splicingQ);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_sexpr_unquote_splicingQ_121;
  T58 = CALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YsyntaxYsexpr_unquote_splicingQ,T58);
  lit_220 = YPPsym((P)"sexpr-backquote?");
  T62 = YPsig(YPPlist(1,LITREF(lit_213)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_backquoteQ_122 = YPmet(FUNCODEREF(fun_sexpr_backquoteQ_122),LITREF(lit_220),T62,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(YsyntaxYsexpr_backquoteQ);
  if (T65 != YPfalse) {
    T64 = VARREF(YsyntaxYsexpr_backquoteQ);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_sexpr_backquoteQ_122;
  T63 = CALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YsyntaxYsexpr_backquoteQ,T63);
  lit_221 = YPPsym((P)"sexpr-atom?");
  T67 = YPsig(YPPlist(1,LITREF(lit_213)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_atomQ_123 = YPmet(FUNCODEREF(fun_sexpr_atomQ_123),LITREF(lit_221),T67,ENVNUL,PNUL,YPfalse);
  T70 = BOUNDP(YsyntaxYsexpr_atomQ);
  if (T70 != YPfalse) {
    T69 = VARREF(YsyntaxYsexpr_atomQ);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_sexpr_atomQ_123;
  T68 = CALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(YsyntaxYsexpr_atomQ,T68);
  lit_222 = YPPsym((P)"nreconc");
  lit_223 = YPPsym((P)"y");
  T72 = YPsig(YPPlist(2,LITREF(lit_213),LITREF(lit_223)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_nreconc_124 = YPmet(FUNCODEREF(fun_nreconc_124),LITREF(lit_222),T72,ENVNUL,PNUL,YPfalse);
  T75 = BOUNDP(YsyntaxYnreconc);
  if (T75 != YPfalse) {
    T74 = VARREF(YsyntaxYnreconc);
  } else {
    T74 = YPfalse;
  }
  T76 = fun_nreconc_124;
  T73 = CALL2(1,VARREF(YPdefine_method),T74,T76);
  VARSET(YsyntaxYnreconc,T73);
  lit_224 = YPPsym((P)"bq-process");
  lit_225 = YPsb((P)"UNQUOTE-SPLICING %= AFTER BQ");
  lit_226 = YPPsym((P)"p");
  lit_227 = YPPsym((P)"q");
  lit_228 = YPsb((P)"Malformed ,%=");
  lit_229 = YPsb((P)"Dotted ,@%=");
  T79 = YPsig(YPPlist(2,LITREF(lit_226),LITREF(lit_227)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_125 = YPmet(FUNCODEREF(fun_loop_125),LITREF(lit_143),T79,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(YPPlist(1,LITREF(lit_80)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_126 = YPmet(FUNCODEREF(fun_126),YPfalse,T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(YPPlist(1,LITREF(lit_213)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bq_process_127 = YPmet(FUNCODEREF(fun_bq_process_127),LITREF(lit_224),T77,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YsyntaxYbq_process);
  if (T82 != YPfalse) {
    T81 = VARREF(YsyntaxYbq_process);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_bq_process_127;
  T80 = CALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YsyntaxYbq_process,T80);
  lit_230 = YPPsym((P)"bracket");
  T84 = YPsig(YPPlist(1,LITREF(lit_213)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bracket_128 = YPmet(FUNCODEREF(fun_bracket_128),LITREF(lit_230),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YsyntaxYbracket);
  if (T87 != YPfalse) {
    T86 = VARREF(YsyntaxYbracket);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_bracket_128;
  T85 = CALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YsyntaxYbracket,T85);
  lit_231 = YPPsym((P)"map-tree");
  lit_232 = YPPsym((P)"fn");
  T89 = YPsig(YPPlist(2,LITREF(lit_232),LITREF(lit_213)),YPPlist(2,VARREF(YLfunG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_map_tree_129 = YPmet(FUNCODEREF(fun_map_tree_129),LITREF(lit_231),T89,ENVNUL,PNUL,YPfalse);
  T92 = BOUNDP(YsyntaxYmap_tree);
  if (T92 != YPfalse) {
    T91 = VARREF(YsyntaxYmap_tree);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_map_tree_129;
  T90 = CALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YsyntaxYmap_tree,T90);
  lit_233 = YPPsym((P)"bq-remove-tokens");
  lit_234 = YPPsym((P)"cat");
  lit_235 = YPPsym((P)"cat!");
  lit_236 = YPPsym((P)"list*");
  lit_237 = YPPsym((P)"pair");
  T94 = YPsig(YPPlist(1,LITREF(lit_213)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bq_remove_tokens_130 = YPmet(FUNCODEREF(fun_bq_remove_tokens_130),LITREF(lit_233),T94,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YsyntaxYbq_remove_tokens);
  if (T97 != YPfalse) {
    T96 = VARREF(YsyntaxYbq_remove_tokens);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_bq_remove_tokens_130;
  T95 = CALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YsyntaxYbq_remove_tokens,T95);
  lit_238 = YPPsym((P)"sexpr-syntax-if?");
  T99 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_syntax_ifQ_131 = YPmet(FUNCODEREF(fun_sexpr_syntax_ifQ_131),LITREF(lit_238),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(YsyntaxYsexpr_syntax_ifQ);
  if (T102 != YPfalse) {
    T101 = VARREF(YsyntaxYsexpr_syntax_ifQ);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_sexpr_syntax_ifQ_131;
  T100 = CALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YsyntaxYsexpr_syntax_ifQ,T100);
  lit_239 = YPPsym((P)"sexpr-syntax-if-value");
  T104 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_value_132 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_value_132),LITREF(lit_239),T104,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(YsyntaxYsexpr_syntax_if_value);
  if (T107 != YPfalse) {
    T106 = VARREF(YsyntaxYsexpr_syntax_if_value);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_sexpr_syntax_if_value_132;
  T105 = CALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YsyntaxYsexpr_syntax_if_value,T105);
  lit_240 = YPPsym((P)"sexpr-syntax-if-pattern");
  T109 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_pattern_133 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_pattern_133),LITREF(lit_240),T109,ENVNUL,PNUL,YPfalse);
  T112 = BOUNDP(YsyntaxYsexpr_syntax_if_pattern);
  if (T112 != YPfalse) {
    T111 = VARREF(YsyntaxYsexpr_syntax_if_pattern);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_sexpr_syntax_if_pattern_133;
  T110 = CALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(YsyntaxYsexpr_syntax_if_pattern,T110);
  lit_241 = YPPsym((P)"sexpr-syntax-if-then");
  T114 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_then_134 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_then_134),LITREF(lit_241),T114,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YsyntaxYsexpr_syntax_if_then);
  if (T117 != YPfalse) {
    T116 = VARREF(YsyntaxYsexpr_syntax_if_then);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_sexpr_syntax_if_then_134;
  T115 = CALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YsyntaxYsexpr_syntax_if_then,T115);
  lit_242 = YPPsym((P)"sexpr-syntax-if-else");
  T119 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_else_135 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_else_135),LITREF(lit_242),T119,ENVNUL,PNUL,YPfalse);
  T122 = BOUNDP(YsyntaxYsexpr_syntax_if_else);
  if (T122 != YPfalse) {
    T121 = VARREF(YsyntaxYsexpr_syntax_if_else);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_sexpr_syntax_if_else_135;
  T120 = CALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YsyntaxYsexpr_syntax_if_else,T120);
  lit_243 = YPPsym((P)"sexpr-pattern-variable?");
  T124 = YPsig(YPPlist(1,LITREF(lit_204)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_pattern_variableQ_136 = YPmet(FUNCODEREF(fun_sexpr_pattern_variableQ_136),LITREF(lit_243),T124,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YsyntaxYsexpr_pattern_variableQ);
  if (T127 != YPfalse) {
    T126 = VARREF(YsyntaxYsexpr_pattern_variableQ);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_sexpr_pattern_variableQ_136;
  T125 = CALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YsyntaxYsexpr_pattern_variableQ,T125);
  lit_244 = YPPsym((P)"sexpr-pattern-variable-name");
  T129 = YPsig(YPPlist(1,LITREF(lit_204)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_pattern_variable_name_137 = YPmet(FUNCODEREF(fun_sexpr_pattern_variable_name_137),LITREF(lit_244),T129,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(YsyntaxYsexpr_pattern_variable_name);
  if (T132 != YPfalse) {
    T131 = VARREF(YsyntaxYsexpr_pattern_variable_name);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_sexpr_pattern_variable_name_137;
  T130 = CALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YsyntaxYsexpr_pattern_variable_name,T130);
  lit_245 = YPPsym((P)"sexpr-bind-pattern-variables");
  T135 = YPsig(YPPlist(1,LITREF(lit_204)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_col_138 = YPmet(FUNCODEREF(fun_col_138),LITREF(lit_158),T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(YPPlist(1,LITREF(lit_204)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_bind_pattern_variables_139 = YPmet(FUNCODEREF(fun_sexpr_bind_pattern_variables_139),LITREF(lit_245),T134,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(YsyntaxYsexpr_bind_pattern_variables);
  if (T138 != YPfalse) {
    T137 = VARREF(YsyntaxYsexpr_bind_pattern_variables);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_sexpr_bind_pattern_variables_139;
  T136 = CALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YsyntaxYsexpr_bind_pattern_variables,T136);
  lit_246 = YPPsym((P)"sexpr-make-macro-function");
  T140 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_make_macro_function_140 = YPmet(FUNCODEREF(fun_sexpr_make_macro_function_140),LITREF(lit_246),T140,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(YsyntaxYsexpr_make_macro_function);
  if (T143 != YPfalse) {
    T142 = VARREF(YsyntaxYsexpr_make_macro_function);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_sexpr_make_macro_function_140;
  T141 = CALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YsyntaxYsexpr_make_macro_function,T141);
  if (YPfalse != YPfalse) {
  } else {
  }
  T145 = YPfalse;
  return T145;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_protoSmath;
extern MODULE_INFO module_info_protoStypes;
extern MODULE_INFO module_info_protoScollections;
extern MODULE_INFO module_info_protoScollectionsSsequence;
extern MODULE_INFO module_info_protoScollectionsSassoc;
extern MODULE_INFO module_info_protoScollectionsSstring;
extern MODULE_INFO module_info_protoScollectionsScollection;
extern MODULE_INFO module_info_protoScollectionsSlist;
extern MODULE_INFO module_info_protoScollectionsStable;
extern MODULE_INFO module_info_protoScollectionsSrange;
extern MODULE_INFO module_info_protoScollectionsSbuffer;
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
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"last", &module_info_protoScollectionsSsequence, "last"},
  {"type-error", &module_info_boot, "type-error"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"identity", &module_info_runtime, "identity"},
  {"var-type", &module_info_macros, "var-type"},
  {"*gensym-counter*", &module_info_runtime, "*gensym-counter*"},
  {"assocs-test", &module_info_protoScollectionsSassoc, "assocs-test"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"zero?", &module_info_protoSmath, "zero?"},
  {"*print-base*", &module_info_protoScollectionsSstring, "*print-base*"},
  {"fill", &module_info_protoScollectionsScollection, "fill"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"=", &module_info_protoSmath, "="},
  {"nul?", &module_info_protoSmath, "nul?"},
  {"<list>", &module_info_protoScollectionsSlist, "<list>"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"dv", &module_info_boot, "dv"},
  {"%f=", &module_info_boot, "%f="},
  {"fin-state?", &module_info_macros, "fin-state?"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"now-elt-setter", &module_info_protoScollectionsScollection, "now-elt-setter"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"always", &module_info_runtime, "always"},
  {"uppercase?", &module_info_protoSmath, "uppercase?"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%iu", &module_info_boot, "%iu"},
  {"table-shrink-threshold", &module_info_protoScollectionsStable, "table-shrink-threshold"},
  {"from", &module_info_protoScollectionsSrange, "from"},
  {"any2?", &module_info_protoScollectionsScollection, "any2?"},
  {"do3", &module_info_protoScollectionsScollection, "do3"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"/", &module_info_protoSmath, "/"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"use", &module_info_boot, "use"},
  {"%lu", &module_info_boot, "%lu"},
  {"to-str", &module_info_protoSmath, "to-str"},
  {"round/", &module_info_protoSmath, "round/"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"type-object", &module_info_boot, "type-object"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"ini-state", &module_info_macros, "ini-state"},
  {"<class>", &module_info_boot, "<class>"},
  {"len", &module_info_protoScollectionsScollection, "len"},
  {"dp", &module_info_boot, "dp"},
  {"gensym", &module_info_macros, "gensym"},
  {"from-to-by", &module_info_protoScollectionsSrange, "from-to-by"},
  {"read", &module_info_runtime, "read"},
  {"+", &module_info_protoSmath, "+"},
  {"ddv", &module_info_macros, "ddv"},
  {"format", &module_info_runtime, "format"},
  {"%pair", &module_info_boot, "%pair"},
  {"and", &module_info_macros, "and"},
  {"%i-", &module_info_boot, "%i-"},
  {"sub", &module_info_protoScollectionsSsequence, "sub"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"<str-tab>", &module_info_protoScollectionsStable, "<str-tab>"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"<type>", &module_info_boot, "<type>"},
  {"false-or", &module_info_protoStypes, "false-or"},
  {"add", &module_info_protoScollectionsScollection, "add"},
  {"even?", &module_info_protoSmath, "even?"},
  {"<=", &module_info_protoSmath, "<="},
  {"contagious-type", &module_info_protoSmath, "contagious-type"},
  {"table-growth-factor-setter", &module_info_protoScollectionsStable, "table-growth-factor-setter"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"del-keys", &module_info_protoScollectionsScollection, "del-keys"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"len-setter", &module_info_protoScollectionsSbuffer, "len-setter"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"assqn", &module_info_protoScollectionsSlist, "assqn"},
  {"rep", &module_info_boot, "rep"},
  {"into", &module_info_protoScollectionsScollection, "into"},
  {"to-digit", &module_info_protoSmath, "to-digit"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"id-hash", &module_info_protoScollectionsStable, "id-hash"},
  {"%c<", &module_info_boot, "%c<"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"t<", &module_info_protoStypes, "t<"},
  {"assocs-test-setter", &module_info_protoScollectionsSassoc, "assocs-test-setter"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"inc", &module_info_macros, "inc"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"%c=", &module_info_boot, "%c="},
  {"logior", &module_info_protoSmath, "logior"},
  {"fabs", &module_info_protoSmath, "fabs"},
  {"<bot>", &module_info_protoSmath, "<bot>"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"flo-bits", &module_info_protoSmath, "flo-bits"},
  {"round", &module_info_protoSmath, "round"},
  {"lab", &module_info_boot, "lab"},
  {"exported", &module_info_macros, "exported"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"cat2", &module_info_protoScollectionsSsequence, "cat2"},
  {"<str>", &module_info_boot, "<str>"},
  {"truncate/", &module_info_protoSmath, "truncate/"},
  {"dss", &module_info_boot, "dss"},
  {"sig", &module_info_runtime, "sig"},
  {"isa", &module_info_boot, "isa"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"export", &module_info_boot, "export"},
  {"table-protocol", &module_info_protoScollectionsStable, "table-protocol"},
  {"%iv", &module_info_boot, "%iv"},
  {"as-log", &module_info_protoSmath, "as-log"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"del-key", &module_info_protoScollectionsScollection, "del-key"},
  {"@==", &module_info_boot, "@=="},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"pos", &module_info_protoScollectionsSsequence, "pos"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"t=", &module_info_protoStypes, "t="},
  {"do", &module_info_protoScollectionsScollection, "do"},
  {">", &module_info_protoSmath, ">"},
  {"<", &module_info_protoSmath, "<"},
  {"error", &module_info_boot, "error"},
  {"max", &module_info_protoSmath, "max"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"%slen", &module_info_boot, "%slen"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"<met>", &module_info_boot, "<met>"},
  {"fab", &module_info_protoScollectionsScollection, "fab"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"do-key-vals", &module_info_protoScollectionsSsequence, "do-key-vals"},
  {"len/fill-setter", &module_info_protoScollectionsSbuffer, "len/fill-setter"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"range-check?", &module_info_protoScollectionsSsequence, "range-check?"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"all2?", &module_info_protoScollectionsScollection, "all2?"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"cat!", &module_info_protoScollectionsSsequence, "cat!"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"quote", &module_info_boot, "quote"},
  {"pair", &module_info_macros, "pair"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"head", &module_info_boot, "head"},
  {"from-above", &module_info_protoScollectionsSrange, "from-above"},
  {"neg?", &module_info_protoSmath, "neg?"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"when", &module_info_macros, "when"},
  {"t+", &module_info_protoStypes, "t+"},
  {"find-key", &module_info_protoScollectionsScollection, "find-key"},
  {"nul", &module_info_boot, "nul"},
  {"apply", &module_info_macros, "apply"},
  {"object-class", &module_info_boot, "object-class"},
  {"logxor", &module_info_protoSmath, "logxor"},
  {"~==", &module_info_protoSmath, "~=="},
  {"%i<", &module_info_boot, "%i<"},
  {"%sb", &module_info_boot, "%sb"},
  {"%str", &module_info_boot, "%str"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"pop-last!", &module_info_protoScollectionsSbuffer, "pop-last!"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"set", &module_info_boot, "set"},
  {"as-lowercase", &module_info_protoSmath, "as-lowercase"},
  {"%i&", &module_info_boot, "%i&"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"table-shrink-threshold-setter", &module_info_protoScollectionsStable, "table-shrink-threshold-setter"},
  {"eof-object?", &module_info_protoSmath, "eof-object?"},
  {"%raw", &module_info_boot, "%raw"},
  {"case", &module_info_macros, "case"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"modulo", &module_info_protoSmath, "modulo"},
  {"swapf", &module_info_macros, "swapf"},
  {"opf", &module_info_macros, "opf"},
  {"%untag", &module_info_boot, "%untag"},
  {"ct", &module_info_boot, "ct"},
  {"napply", &module_info_macros, "napply"},
  {"range-check", &module_info_protoScollectionsSsequence, "range-check"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"%fb", &module_info_boot, "%fb"},
  {"mem?", &module_info_protoScollectionsScollection, "mem?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%snul", &module_info_boot, "%snul"},
  {"add!", &module_info_protoScollectionsSsequence, "add!"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"%cb", &module_info_boot, "%cb"},
  {"fab-map", &module_info_protoScollectionsSmap, "fab-map"},
  {"%i+", &module_info_boot, "%i+"},
  {"collect", &module_info_macros, "collect"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"*", &module_info_protoSmath, "*"},
  {"dc", &module_info_boot, "dc"},
  {"odd?", &module_info_protoSmath, "odd?"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"use/export", &module_info_boot, "use/export"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"slot", &module_info_boot, "slot"},
  {"reduce+", &module_info_protoScollectionsScollection, "reduce+"},
  {"fin", &module_info_boot, "fin"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"if", &module_info_boot, "if"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"cat", &module_info_macros, "cat"},
  {"%i!", &module_info_boot, "%i!"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"-", &module_info_protoSmath, "-"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"%f*", &module_info_boot, "%f*"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"all?", &module_info_protoScollectionsScollection, "all?"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"tail", &module_info_boot, "tail"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"<tab>", &module_info_protoScollectionsStable, "<tab>"},
  {"ascii-limit", &module_info_protoScollectionsSstring, "ascii-limit"},
  {"as", &module_info_protoStypes, "as"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"push-last!", &module_info_protoScollectionsSbuffer, "push-last!"},
  {"from-to", &module_info_protoScollectionsSrange, "from-to"},
  {"%f+", &module_info_boot, "%f+"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"lst", &module_info_boot, "lst"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"range-error", &module_info_protoScollectionsSsequence, "range-error"},
  {"alphabetic?", &module_info_protoSmath, "alphabetic?"},
  {"%vec", &module_info_boot, "%vec"},
  {"<col>", &module_info_boot, "<col>"},
  {"vals-to-str", &module_info_protoScollectionsSsequence, "vals-to-str"},
  {">=", &module_info_protoSmath, ">="},
  {"table-growth-threshold", &module_info_protoScollectionsStable, "table-growth-threshold"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"logand", &module_info_protoSmath, "logand"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"default", &module_info_protoScollectionsScollection, "default"},
  {"map-keyed", &module_info_protoScollectionsScollection, "map-keyed"},
  {"truncate", &module_info_protoSmath, "truncate"},
  {"dg", &module_info_boot, "dg"},
  {"eof-object", &module_info_protoSmath, "eof-object"},
  {"for", &module_info_macros, "for"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"<error>", &module_info_runtime, "<error>"},
  {"compose", &module_info_runtime, "compose"},
  {"try", &module_info_boot, "try"},
  {"list", &module_info_protoScollectionsSlist, "list"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"address-of", &module_info_protoSmath, "address-of"},
  {"dec", &module_info_macros, "dec"},
  {"buf", &module_info_protoScollectionsSbuffer, "buf"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"let", &module_info_boot, "let"},
  {"remainder", &module_info_protoSmath, "remainder"},
  {"reduce", &module_info_protoScollectionsScollection, "reduce"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"keys", &module_info_protoScollectionsScollection, "keys"},
  {"del-dups", &module_info_protoScollectionsSsequence, "del-dups"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"num-to-str", &module_info_protoSmath, "num-to-str"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"ds", &module_info_boot, "ds"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"rev", &module_info_protoScollectionsSsequence, "rev"},
  {"from-below-by", &module_info_protoScollectionsSrange, "from-below-by"},
  {"%i=", &module_info_boot, "%i="},
  {"dlet", &module_info_macros, "dlet"},
  {"%isa", &module_info_boot, "%isa"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"%i?", &module_info_boot, "%i?"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"@+", &module_info_boot, "@+"},
  {"case-insensitive-string-equal", &module_info_protoScollectionsStable, "case-insensitive-string-equal"},
  {"floor", &module_info_protoSmath, "floor"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"%fu", &module_info_boot, "%fu"},
  {"next-method", &module_info_macros, "next-method"},
  {"do-keyed", &module_info_protoScollectionsScollection, "do-keyed"},
  {"df", &module_info_boot, "df"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"class-name", &module_info_boot, "class-name"},
  {"empty", &module_info_protoScollectionsScollection, "empty"},
  {"%bb", &module_info_boot, "%bb"},
  {"del", &module_info_protoScollectionsSsequence, "del"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"<buf>", &module_info_protoScollectionsSbuffer, "<buf>"},
  {"neg", &module_info_protoSmath, "neg"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"<num>", &module_info_boot, "<num>"},
  {"<int>", &module_info_boot, "<int>"},
  {"nil", &module_info_boot, "nil"},
  {"str-to-num", &module_info_protoScollectionsSstring, "str-to-num"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%i^", &module_info_boot, "%i^"},
  {"==", &module_info_macros, "=="},
  {"fun-value", &module_info_boot, "fun-value"},
  {"<step>", &module_info_protoScollectionsSstep, "<step>"},
  {"%f/", &module_info_boot, "%f/"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"lognot", &module_info_protoSmath, "lognot"},
  {"%su", &module_info_boot, "%su"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"%ft", &module_info_boot, "%ft"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"%cu", &module_info_boot, "%cu"},
  {"low-elt-setter", &module_info_protoScollectionsScollection, "low-elt-setter"},
  {"empty?", &module_info_macros, "empty?"},
  {"%slot", &module_info_boot, "%slot"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"current-gc-state", &module_info_protoScollectionsStable, "current-gc-state"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"as-uppercase", &module_info_protoSmath, "as-uppercase"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"ash", &module_info_protoSmath, "ash"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"bound?", &module_info_boot, "bound?"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"map2", &module_info_protoScollectionsScollection, "map2"},
  {"<log>", &module_info_boot, "<log>"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"case-insensitive-string-hash", &module_info_protoScollectionsStable, "case-insensitive-string-hash"},
  {"vec", &module_info_boot, "vec"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"pos?", &module_info_protoSmath, "pos?"},
  {"<map>", &module_info_protoScollectionsSmap, "<map>"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"pick", &module_info_protoScollectionsSsequence, "pick"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"lowercase?", &module_info_protoSmath, "lowercase?"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"char->ascii", &module_info_protoSmath, "char->ascii"},
  {"not", &module_info_boot, "not"},
  {"any?", &module_info_protoScollectionsScollection, "any?"},
  {"%selt", &module_info_boot, "%selt"},
  {"@<", &module_info_boot, "@<"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"curry", &module_info_runtime, "curry"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"<any>", &module_info_boot, "<any>"},
  {"<range>", &module_info_protoScollectionsSrange, "<range>"},
  {"dm", &module_info_boot, "dm"},
  {"low-elt", &module_info_protoScollectionsScollection, "low-elt"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"type-class", &module_info_boot, "type-class"},
  {"%im", &module_info_boot, "%im"},
  {"str", &module_info_protoScollectionsSstring, "str"},
  {"%it/", &module_info_boot, "%it/"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"numeric?", &module_info_protoSmath, "numeric?"},
  {"<union>", &module_info_boot, "<union>"},
  {"floor/", &module_info_protoSmath, "floor/"},
  {"select", &module_info_macros, "select"},
  {"seq", &module_info_boot, "seq"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"mif", &module_info_boot, "mif"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"3rd", &module_info_protoScollectionsSsequence, "3rd"},
  {"from-below", &module_info_protoScollectionsSsequence, "from-below"},
  {"table-growth-threshold-setter", &module_info_protoScollectionsStable, "table-growth-threshold-setter"},
  {"table-growth-factor", &module_info_protoScollectionsStable, "table-growth-factor"},
  {"map", &module_info_macros, "map"},
  {"fun", &module_info_boot, "fun"},
  {"%i*", &module_info_boot, "%i*"},
  {"lsh", &module_info_protoSmath, "lsh"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"%f<", &module_info_boot, "%f<"},
  {"collected", &module_info_macros, "collected"},
  {"ascii-whitespaces", &module_info_protoScollectionsSstring, "ascii-whitespaces"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"first-then", &module_info_protoScollectionsSstep, "first-then"},
  {"push", &module_info_protoScollectionsSlist, "push"},
  {"pop", &module_info_protoScollectionsSlist, "pop"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"rev!", &module_info_macros, "rev!"},
  {"or", &module_info_macros, "or"},
  {"unless", &module_info_macros, "unless"},
  {"from-above-by", &module_info_protoScollectionsSrange, "from-above-by"},
  {"min", &module_info_protoSmath, "min"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"from-by", &module_info_protoScollectionsSrange, "from-by"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"as-copy", &module_info_protoScollectionsScollection, "as-copy"},
  {"alter", &module_info_protoScollectionsScollection, "alter"},
  {"<assocs>", &module_info_protoScollectionsSassoc, "<assocs>"},
  {"copy-state", &module_info_protoScollectionsScollection, "copy-state"},
  {"elt-setter", &module_info_protoScollectionsScollection, "elt-setter"},
  {"unexec", &module_info_boot, "unexec"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"%ib", &module_info_boot, "%ib"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"@olen", &module_info_boot, "@olen"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"2nd", &module_info_protoScollectionsSsequence, "2nd"},
  {"pushf", &module_info_macros, "pushf"},
  {"tup", &module_info_boot, "tup"},
  {"ceiling", &module_info_protoSmath, "ceiling"},
  {"$permanent-hash-state", &module_info_protoScollectionsStable, "$permanent-hash-state"},
  {"nxt-state", &module_info_macros, "nxt-state"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"collecting", &module_info_macros, "collecting"},
  {"abs", &module_info_protoSmath, "abs"},
  {"ceiling/", &module_info_protoSmath, "ceiling/"},
  {"loc", &module_info_boot, "loc"},
  {"%lb", &module_info_boot, "%lb"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"app-args", &module_info_runtime, "app-args"},
  {"%f-", &module_info_boot, "%f-"},
  {"%velt", &module_info_boot, "%velt"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"now-key", &module_info_protoScollectionsScollection, "now-key"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"sub-setter", &module_info_protoScollectionsSsequence, "sub-setter"},
  {"%with-monitor", &module_info_boot, "%with-monitor"},
  {"popf", &module_info_macros, "popf"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"nyi-error", &module_info_protoSmath, "nyi-error"},
  {"isa?", &module_info_boot, "isa?"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"now-elt", &module_info_macros, "now-elt"},
  {"~=", &module_info_protoSmath, "~="},
  {"do2", &module_info_protoScollectionsScollection, "do2"},
  {"1st", &module_info_protoScollectionsSsequence, "1st"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"logbit?", &module_info_protoSmath, "logbit?"},
  {"contagious-call", &module_info_protoSmath, "contagious-call"},
  {"assert", &module_info_macros, "assert"},
  {"var-name", &module_info_macros, "var-name"},
  {"elt", &module_info_macros, "elt"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"assq", &module_info_protoScollectionsSlist, "assq"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"power-of-two-ceiling", &module_info_protoSmath, "power-of-two-ceiling"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sexpr-let->combination", &YsyntaxYsexpr_let_Gcombination},
  {"sexpr-monitor-test", &YsyntaxYsexpr_monitor_test},
  {"*bq-list*", &YsyntaxYTbq_listT},
  {"$sexpr-let-tag", &YsyntaxYDsexpr_let_tag},
  {"sexpr-isa-init-values", &YsyntaxYsexpr_isa_init_values},
  {"sexpr-pattern-variable-name", &YsyntaxYsexpr_pattern_variable_name},
  {"sexpr-text-of-quotation", &YsyntaxYsexpr_text_of_quotation},
  {"sexpr-block?", &YsyntaxYsexpr_blockQ},
  {"bracket", &YsyntaxYbracket},
  {"map-tree", &YsyntaxYmap_tree},
  {"bq-remove-tokens", &YsyntaxYbq_remove_tokens},
  {"*unique-name-counter*", &YsyntaxYTunique_name_counterT},
  {"sexpr-make-application", &YsyntaxYsexpr_make_application},
  {"sexpr-macro-expand?", &YsyntaxYsexpr_macro_expandQ},
  {"sexpr-let-bound-variables", &YsyntaxYsexpr_let_bound_variables},
  {"$sexpr-unwind-protect-tag", &YsyntaxYDsexpr_unwind_protect_tag},
  {"sexpr-isa?", &YsyntaxYsexpr_isaQ},
  {"sexpr-slot?", &YsyntaxYsexpr_slotQ},
  {"sexpr-syntax-if-pattern", &YsyntaxYsexpr_syntax_if_pattern},
  {"sexpr-let-values", &YsyntaxYsexpr_let_values},
  {"sexpr-definition-variable", &YsyntaxYsexpr_definition_variable},
  {"sexpr-if-else", &YsyntaxYsexpr_if_else},
  {"sexpr-backquote?", &YsyntaxYsexpr_backquoteQ},
  {"sexpr-slot-object", &YsyntaxYsexpr_slot_object},
  {"sexpr-definition-value", &YsyntaxYsexpr_definition_value},
  {"sexpr-method-value", &YsyntaxYsexpr_method_value},
  {"$sexpr-if-tag", &YsyntaxYDsexpr_if_tag},
  {"sexpr-function-definition-value", &YsyntaxYsexpr_function_definition_value},
  {"sexpr-loc-bound-names", &YsyntaxYsexpr_loc_bound_names},
  {"sexpr-first-exp", &YsyntaxYsexpr_first_exp},
  {"sexpr-unwind-protect-protected-form", &YsyntaxYsexpr_unwind_protect_protected_form},
  {"sexpr-build-backquote-expander", &YsyntaxYsexpr_build_backquote_expander},
  {"---main-1---", NULL},
  {"sexpr-unique-name", &YsyntaxYsexpr_unique_name},
  {"sexpr-loc-bound-signatures", &YsyntaxYsexpr_loc_bound_signatures},
  {"sexpr-monitor-body", &YsyntaxYsexpr_monitor_body},
  {"sexpr-first-operand", &YsyntaxYsexpr_first_operand},
  {"sexpr-macro?", &YsyntaxYsexpr_macroQ},
  {"sexpr-assignment?", &YsyntaxYsexpr_assignmentQ},
  {"sexpr-tagged-list?", &YsyntaxYsexpr_tagged_listQ},
  {"sexpr-function-definition?", &YsyntaxYsexpr_function_definitionQ},
  {"sexpr-define-class?", &YsyntaxYsexpr_define_classQ},
  {"eval", &YsyntaxYeval},
  {"sexpr-begin-actions", &YsyntaxYsexpr_begin_actions},
  {"sexpr-self-evaluating?", &YsyntaxYsexpr_self_evaluatingQ},
  {"sexpr-bind-pattern-variables", &YsyntaxYsexpr_bind_pattern_variables},
  {"sexpr-make-method", &YsyntaxYsexpr_make_method},
  {"sexpr-make-anonymous-method", &YsyntaxYsexpr_make_anonymous_method},
  {"sexpr-if-test", &YsyntaxYsexpr_if_test},
  {"$sexpr-quote-tag", &YsyntaxYDsexpr_quote_tag},
  {"sexpr-syntax-if-then", &YsyntaxYsexpr_syntax_if_then},
  {"sexpr-let-body", &YsyntaxYsexpr_let_body},
  {"sexpr-operator", &YsyntaxYsexpr_operator},
  {"sexpr-iterate-name", &YsyntaxYsexpr_iterate_name},
  {"sexpr-quoted?", &YsyntaxYsexpr_quotedQ},
  {"sexpr-make-if", &YsyntaxYsexpr_make_if},
  {"$sexpr-define-tag", &YsyntaxYDsexpr_define_tag},
  {"sexpr-slot-variable", &YsyntaxYsexpr_slot_variable},
  {"sexpr-operands", &YsyntaxYsexpr_operands},
  {"sexpr-function-parameters", &YsyntaxYsexpr_function_parameters},
  {"sexpr-function-value", &YsyntaxYsexpr_function_value},
  {"sexpr-generic-definition?", &YsyntaxYsexpr_generic_definitionQ},
  {"sexpr-function-definition-variable", &YsyntaxYsexpr_function_definition_variable},
  {"sexpr-iterate-signature", &YsyntaxYsexpr_iterate_signature},
  {"sexpr-method-body", &YsyntaxYsexpr_method_body},
  {"$sexpr-syntax-if-tag", &YsyntaxYDsexpr_syntax_if_tag},
  {"sexpr-syntax-definition?", &YsyntaxYsexpr_syntax_definitionQ},
  {"sexpr-rest-exps", &YsyntaxYsexpr_rest_exps},
  {"sexpr-assignment-value", &YsyntaxYsexpr_assignment_value},
  {"sexpr-if?", &YsyntaxYsexpr_ifQ},
  {"sexpr-begin?", &YsyntaxYsexpr_beginQ},
  {"$sexpr-method-tag", &YsyntaxYDsexpr_method_tag},
  {"sexpr-unwind-protect-cleanup-forms", &YsyntaxYsexpr_unwind_protect_cleanup_forms},
  {"sexpr-monitor?", &YsyntaxYsexpr_monitorQ},
  {"sexpr-loc-bound-bodies", &YsyntaxYsexpr_loc_bound_bodies},
  {"$sexpr-monitor-tag", &YsyntaxYDsexpr_monitor_tag},
  {"sexpr-unquote?", &YsyntaxYsexpr_unquoteQ},
  {"$sexpr-iterate-tag", &YsyntaxYDsexpr_iterate_tag},
  {"sexpr-make-macro-function", &YsyntaxYsexpr_make_macro_function},
  {"$sexpr-define-generic-tag", &YsyntaxYDsexpr_define_generic_tag},
  {"sexpr-block-name", &YsyntaxYsexpr_block_name},
  {"*comma-atsign*", &YsyntaxYTcomma_atsignT},
  {"sexpr-isa-parent", &YsyntaxYsexpr_isa_parent},
  {"sexpr-syntax-if-else", &YsyntaxYsexpr_syntax_if_else},
  {"sexpr-let-names+values", &YsyntaxYsexpr_let_namesAvalues},
  {"---main-0---", NULL},
  {"sexpr-slot-init", &YsyntaxYsexpr_slot_init},
  {"sexpr-atom?", &YsyntaxYsexpr_atomQ},
  {"sexpr-no-operands?", &YsyntaxYsexpr_no_operandsQ},
  {"$sexpr-quasiquote-tag", &YsyntaxYDsexpr_quasiquote_tag},
  {"sexpr-forward-primitive?", &YsyntaxYsexpr_forward_primitiveQ},
  {"$sexpr-begin-tag", &YsyntaxYDsexpr_begin_tag},
  {"sexpr-iterate-inits", &YsyntaxYsexpr_iterate_inits},
  {"sexpr-syntax-if?", &YsyntaxYsexpr_syntax_ifQ},
  {"*bq-nconc*", &YsyntaxYTbq_nconcT},
  {"sexpr-make-getter", &YsyntaxYsexpr_make_getter},
  {"sexpr-sequence->begin", &YsyntaxYsexpr_sequence_Gbegin},
  {"$sexpr-define-class-tag", &YsyntaxYDsexpr_define_class_tag},
  {"*bq-quote*", &YsyntaxYTbq_quoteT},
  {"sexpr-method?", &YsyntaxYsexpr_methodQ},
  {"sexpr-loc-raw-body", &YsyntaxYsexpr_loc_raw_body},
  {"$sexpr-locals-tag", &YsyntaxYDsexpr_locals_tag},
  {"$sexpr-bind-exit-tag", &YsyntaxYDsexpr_bind_exit_tag},
  {"sexpr-expand-backquote", &YsyntaxYsexpr_expand_backquote},
  {"sexpr-assignment-variable", &YsyntaxYsexpr_assignment_variable},
  {"sexpr-define-class-parents", &YsyntaxYsexpr_define_class_parents},
  {"find-option", &YsyntaxYfind_option},
  {"sexpr-method-definition?", &YsyntaxYsexpr_method_definitionQ},
  {"$sexpr-set-tag", &YsyntaxYDsexpr_set_tag},
  {"---main-2---", NULL},
  {"sexpr-block-body", &YsyntaxYsexpr_block_body},
  {"$sexpr-macro-expand-tag", &YsyntaxYDsexpr_macro_expand_tag},
  {"sexpr-let?", &YsyntaxYsexpr_letQ},
  {"sexpr-make-syntax-if", &YsyntaxYsexpr_make_syntax_if},
  {"sexpr-isa-slot-inits", &YsyntaxYsexpr_isa_slot_inits},
  {"sexpr-pattern-variable?", &YsyntaxYsexpr_pattern_variableQ},
  {"sexpr-make-quote", &YsyntaxYsexpr_make_quote},
  {"sexpr-syntax-definition-variable", &YsyntaxYsexpr_syntax_definition_variable},
  {"sexpr-signature-parameters", &YsyntaxYsexpr_signature_parameters},
  {"sexpr-function-signature", &YsyntaxYsexpr_function_signature},
  {"sexpr-iterate-body", &YsyntaxYsexpr_iterate_body},
  {"$sexpr-define-method-tag", &YsyntaxYDsexpr_define_method_tag},
  {"sexpr-signature-value", &YsyntaxYsexpr_signature_value},
  {"sexpr-make-begin", &YsyntaxYsexpr_make_begin},
  {"$sexpr-define-function-tag", &YsyntaxYDsexpr_define_function_tag},
  {"*bq-append*", &YsyntaxYTbq_appendT},
  {"$sexpr-define-syntax-tag", &YsyntaxYDsexpr_define_syntax_tag},
  {"sexpr-make-setter", &YsyntaxYsexpr_make_setter},
  {"sexpr-loc-body", &YsyntaxYsexpr_loc_body},
  {"sexpr-definition?", &YsyntaxYsexpr_definitionQ},
  {"sexpr-unquote-splicing?", &YsyntaxYsexpr_unquote_splicingQ},
  {"sexpr-loc?", &YsyntaxYsexpr_locQ},
  {"sexpr-monitor-expand", &YsyntaxYsexpr_monitor_expand},
  {"*bq-list**", &YsyntaxYTbq_listTT},
  {"sexpr-unwind-protect?", &YsyntaxYsexpr_unwind_protectQ},
  {"sexpr-function-body", &YsyntaxYsexpr_function_body},
  {"sexpr-variable-type", &YsyntaxYsexpr_variable_type},
  {"sexpr-variable-name", &YsyntaxYsexpr_variable_name},
  {"sexpr-make-setter-name", &YsyntaxYsexpr_make_setter_name},
  {"sexpr-variable?", &YsyntaxYsexpr_variableQ},
  {"sexpr-isa-init-slots", &YsyntaxYsexpr_isa_init_slots},
  {"nreconc", &YsyntaxYnreconc},
  {"$sexpr-values-tag", &YsyntaxYDsexpr_values_tag},
  {"sexpr-syntax-definition-value", &YsyntaxYsexpr_syntax_definition_value},
  {"bq-process", &YsyntaxYbq_process},
  {"sexpr-iterate->loc", &YsyntaxYsexpr_iterate_Gloc},
  {"sexpr-syntax-if-value", &YsyntaxYsexpr_syntax_if_value},
  {"sexpr-rest-operands", &YsyntaxYsexpr_rest_operands},
  {"$sexpr-isa-tag", &YsyntaxYDsexpr_isa_tag},
  {"sexpr-monitor-info", &YsyntaxYsexpr_monitor_info},
  {"sexpr-iterate?", &YsyntaxYsexpr_iterateQ},
  {"<name>", &YsyntaxYLnameG},
  {"sexpr-application?", &YsyntaxYsexpr_applicationQ},
  {"*bq-clobberable*", &YsyntaxYTbq_clobberableT},
  {"sexpr-if-then", &YsyntaxYsexpr_if_then},
  {"sexpr-method-signature", &YsyntaxYsexpr_method_signature},
  {"$sexpr-slot-tag", &YsyntaxYDsexpr_slot_tag},
  {"$sexpr-macro-tag", &YsyntaxYDsexpr_macro_tag},
  {"sexpr-method-parameters", &YsyntaxYsexpr_method_parameters},
  {"sexpr-last-exp?", &YsyntaxYsexpr_last_expQ},
  {"sexpr-monitor-type", &YsyntaxYsexpr_monitor_type},
  {"sexpr-new-unique-name-counter!", &YsyntaxYsexpr_new_unique_name_counterX},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"sexpr-let->combination", "sexpr-let->combination"},
  {"$sexpr-let-tag", "$sexpr-let-tag"},
  {"sexpr-isa-init-values", "sexpr-isa-init-values"},
  {"sexpr-syntax-if-then", "sexpr-syntax-if-then"},
  {"sexpr-text-of-quotation", "sexpr-text-of-quotation"},
  {"sexpr-make-application", "sexpr-make-application"},
  {"$sexpr-unwind-protect-tag", "$sexpr-unwind-protect-tag"},
  {"sexpr-syntax-if-pattern", "sexpr-syntax-if-pattern"},
  {"sexpr-definition-variable", "sexpr-definition-variable"},
  {"sexpr-if-else", "sexpr-if-else"},
  {"sexpr-slot-object", "sexpr-slot-object"},
  {"sexpr-loc-bound-names", "sexpr-loc-bound-names"},
  {"sexpr-definition-value", "sexpr-definition-value"},
  {"$sexpr-if-tag", "$sexpr-if-tag"},
  {"sexpr-function-definition-value", "sexpr-function-definition-value"},
  {"sexpr-unwind-protect-protected-form", "sexpr-unwind-protect-protected-form"},
  {"sexpr-loc-bound-signatures", "sexpr-loc-bound-signatures"},
  {"$sexpr-monitor-tag", "$sexpr-monitor-tag"},
  {"sexpr-define-class?", "sexpr-define-class?"},
  {"eval", "eval"},
  {"sexpr-bind-pattern-variables", "sexpr-bind-pattern-variables"},
  {"$sexpr-quote-tag", "$sexpr-quote-tag"},
  {"sexpr-operator", "sexpr-operator"},
  {"$sexpr-define-tag", "$sexpr-define-tag"},
  {"sexpr-slot-variable", "sexpr-slot-variable"},
  {"sexpr-operands", "sexpr-operands"},
  {"sexpr-function-definition-variable", "sexpr-function-definition-variable"},
  {"sexpr-method-body", "sexpr-method-body"},
  {"$sexpr-syntax-if-tag", "$sexpr-syntax-if-tag"},
  {"$sexpr-method-tag", "$sexpr-method-tag"},
  {"sexpr-unwind-protect-cleanup-forms", "sexpr-unwind-protect-cleanup-forms"},
  {"sexpr-loc-bound-bodies", "sexpr-loc-bound-bodies"},
  {"sexpr-unquote?", "sexpr-unquote?"},
  {"$sexpr-iterate-tag", "$sexpr-iterate-tag"},
  {"sexpr-make-macro-function", "sexpr-make-macro-function"},
  {"$sexpr-define-generic-tag", "$sexpr-define-generic-tag"},
  {"sexpr-block-name", "sexpr-block-name"},
  {"sexpr-isa-parent", "sexpr-isa-parent"},
  {"sexpr-syntax-if-else", "sexpr-syntax-if-else"},
  {"sexpr-slot-init", "sexpr-slot-init"},
  {"$sexpr-quasiquote-tag", "$sexpr-quasiquote-tag"},
  {"sexpr-forward-primitive?", "sexpr-forward-primitive?"},
  {"$sexpr-begin-tag", "$sexpr-begin-tag"},
  {"sexpr-make-getter", "sexpr-make-getter"},
  {"sexpr-sequence->begin", "sexpr-sequence->begin"},
  {"$sexpr-define-class-tag", "$sexpr-define-class-tag"},
  {"sexpr-make-anonymous-method", "sexpr-make-anonymous-method"},
  {"sexpr-loc-raw-body", "sexpr-loc-raw-body"},
  {"$sexpr-locals-tag", "$sexpr-locals-tag"},
  {"$sexpr-bind-exit-tag", "$sexpr-bind-exit-tag"},
  {"sexpr-expand-backquote", "sexpr-expand-backquote"},
  {"sexpr-assignment-variable", "sexpr-assignment-variable"},
  {"sexpr-define-class-parents", "sexpr-define-class-parents"},
  {"$sexpr-set-tag", "$sexpr-set-tag"},
  {"sexpr-assignment-value", "sexpr-assignment-value"},
  {"sexpr-block-body", "sexpr-block-body"},
  {"$sexpr-macro-expand-tag", "$sexpr-macro-expand-tag"},
  {"sexpr-isa-slot-inits", "sexpr-isa-slot-inits"},
  {"sexpr-syntax-definition-variable", "sexpr-syntax-definition-variable"},
  {"sexpr-signature-parameters", "sexpr-signature-parameters"},
  {"sexpr-function-signature", "sexpr-function-signature"},
  {"$sexpr-define-method-tag", "$sexpr-define-method-tag"},
  {"sexpr-signature-value", "sexpr-signature-value"},
  {"sexpr-make-begin", "sexpr-make-begin"},
  {"$sexpr-define-function-tag", "$sexpr-define-function-tag"},
  {"sexpr-if-test", "sexpr-if-test"},
  {"$sexpr-define-syntax-tag", "$sexpr-define-syntax-tag"},
  {"sexpr-make-setter", "sexpr-make-setter"},
  {"sexpr-unquote-splicing?", "sexpr-unquote-splicing?"},
  {"sexpr-monitor-expand", "sexpr-monitor-expand"},
  {"sexpr-function-body", "sexpr-function-body"},
  {"sexpr-variable-type", "sexpr-variable-type"},
  {"sexpr-variable-name", "sexpr-variable-name"},
  {"sexpr-make-setter-name", "sexpr-make-setter-name"},
  {"sexpr-variable?", "sexpr-variable?"},
  {"sexpr-isa-init-slots", "sexpr-isa-init-slots"},
  {"sexpr-syntax-definition-value", "sexpr-syntax-definition-value"},
  {"sexpr-iterate->loc", "sexpr-iterate->loc"},
  {"sexpr-syntax-if-value", "sexpr-syntax-if-value"},
  {"$sexpr-isa-tag", "$sexpr-isa-tag"},
  {"sexpr-if-then", "sexpr-if-then"},
  {"sexpr-method-signature", "sexpr-method-signature"},
  {"$sexpr-slot-tag", "$sexpr-slot-tag"},
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

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
