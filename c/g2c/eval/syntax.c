/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: syntax */

EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYaddX,"runtime","add!");
DEF(YsyntaxYsexpr_make_quote,"syntax","sexpr-make-quote");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
DEF(YsyntaxYsexpr_rest_exps,"syntax","sexpr-rest-exps");
DEF(YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YruntimeYfab_map,"runtime","fab-map");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYmax,"runtime","max");
DEF(YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(Yslot_owner,"boot","slot-owner");
DEF(YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
DEF(YsyntaxYsexpr_let_values,"syntax","sexpr-let-values");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYT,"runtime","*");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
DEF(YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
EXT(YruntimeYabs,"runtime","abs");
DEF(YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
EXT(YLlogG,"boot","<log>");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YruntimeYfrom_above,"runtime","from-above");
DEF(YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
DEF(YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
DEF(YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
DEF(YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
DEF(YsyntaxYTbq_nconcT,"syntax","*bq-nconc*");
EXT(YruntimeYpos,"runtime","pos");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YruntimeYdefault,"runtime","default");
EXT(YruntimeYfloor,"runtime","floor");
DEF(YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YruntimeYempty,"runtime","empty");
EXT(YDmin_int,"boot","$min-int");
EXT(Ynot,"boot","not");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(Yslot_value,"boot","slot-value");
EXT(YLanyG,"boot","<any>");
DEF(YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
DEF(YsyntaxYsexpr_let_namesAvalues,"syntax","sexpr-let-names+values");
EXT(YruntimeYfrom,"runtime","from");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
DEF(YsyntaxYTcomma_atsignT,"syntax","*comma-atsign*");
DEF(YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
EXT(YLunionG,"boot","<union>");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YruntimeYout,"runtime","out");
DEF(YsyntaxYsexpr_monitor_test,"syntax","sexpr-monitor-test");
EXT(Yerror,"boot","error");
DEF(YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYelt_or,"runtime","elt-or");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYLE,"runtime","<=");
DEF(YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
DEF(YsyntaxYTbq_clobberableT,"syntax","*bq-clobberable*");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YruntimeYnulQ,"runtime","nul?");
DEF(YsyntaxYsexpr_make_if,"syntax","sexpr-make-if");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
DEF(YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YPsymbols,"boot","%symbols");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YruntimeYlogior,"runtime","logior");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
DEF(YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYNE,"runtime","~=");
DEF(YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YruntimeY1st,"runtime","1st");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(Ytail,"boot","tail");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YLtupG,"boot","<tup>");
EXT(YmacrosYEE,"macros","==");
EXT(YruntimeYreduce,"runtime","reduce");
DEF(YsyntaxYsexpr_iterate_inits,"syntax","sexpr-iterate-inits");
DEF(YsyntaxYDsexpr_macro_tag,"syntax","$sexpr-macro-tag");
DEF(YsyntaxYsexpr_function_parameters,"syntax","sexpr-function-parameters");
DEF(YsyntaxYsexpr_applicationQ,"syntax","sexpr-application?");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
DEF(YsyntaxYsexpr_make_getter,"syntax","sexpr-make-getter");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YruntimeYnewline,"runtime","newline");
DEF(YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
DEF(YsyntaxYsexpr_isa_init_slots,"syntax","sexpr-isa-init-slots");
DEF(YsyntaxYTbq_listTT,"syntax","*bq-list**");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(Yclass_slots,"boot","class-slots");
DEF(YsyntaxYsexpr_blockQ,"syntax","sexpr-block?");
EXT(YmacrosYnapply,"macros","napply");
DEF(YsyntaxYsexpr_slot_variable,"syntax","sexpr-slot-variable");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYid_hash,"runtime","id-hash");
DEF(YsyntaxYsexpr_no_operandsQ,"syntax","sexpr-no-operands?");
EXT(YruntimeYlogand,"runtime","logand");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
DEF(YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
DEF(YsyntaxYsexpr_generic_definitionQ,"syntax","sexpr-generic-definition?");
DEF(YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
DEF(YsyntaxYsexpr_locQ,"syntax","sexpr-loc?");
DEF(YsyntaxYDsexpr_define_class_tag,"syntax","$sexpr-define-class-tag");
EXT(YruntimeYas,"runtime","as");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(YruntimeYpick,"runtime","pick");
EXT(YruntimeYtL,"runtime","t<");
EXT(YruntimeYlognot,"runtime","lognot");
DEF(YsyntaxYsexpr_function_definitionQ,"syntax","sexpr-function-definition?");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
DEF(YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
EXT(Ytype_elts,"boot","type-elts");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YruntimeYdel_dups,"runtime","del-dups");
DEF(YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
DEF(YsyntaxYsexpr_definitionQ,"syntax","sexpr-definition?");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YruntimeYceiling,"runtime","ceiling");
DEF(YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
DEF(YsyntaxYnreconc,"syntax","nreconc");
DEF(YsyntaxYsexpr_let_bound_variables,"syntax","sexpr-let-bound-variables");
EXT(YPPmacro,"boot","%%macro");
DEF(YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YPdefine_method,"boot","%define-method");
DEF(YsyntaxYsexpr_make_method,"syntax","sexpr-make-method");
EXT(Yadd_slot,"boot","add-slot");
DEF(YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
DEF(YsyntaxYbracket,"syntax","bracket");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YruntimeYLbufG,"runtime","<buf>");
DEF(YsyntaxYsexpr_make_syntax_if,"syntax","sexpr-make-syntax-if");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYpush,"runtime","push");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(Ysig_value,"boot","sig-value");
EXT(Yclass_name,"boot","class-name");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYtE,"runtime","t=");
DEF(YsyntaxYsexpr_monitor_expand,"syntax","sexpr-monitor-expand");
DEF(YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
DEF(YsyntaxYTbq_quoteT,"syntax","*bq-quote*");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYwrite_char,"runtime","write-char");
DEF(YsyntaxYsexpr_assignmentQ,"syntax","sexpr-assignment?");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YLtypeG,"boot","<type>");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
DEF(YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
EXT(YLclassG,"boot","<class>");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(Yobject_parents,"boot","object-parents");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYmemQ,"runtime","mem?");
DEF(YsyntaxYDsexpr_values_tag,"syntax","$sexpr-values-tag");
DEF(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
DEF(YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
EXT(YruntimeYGE,"runtime",">=");
EXT(YruntimeYE,"runtime","=");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYtA,"runtime","t+");
DEF(YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
DEF(YsyntaxYsexpr_define_class_parents,"syntax","sexpr-define-class-parents");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYsig,"runtime","sig");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YruntimeYdel,"runtime","del");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
DEF(YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
DEF(YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
EXT(Ysig_names,"boot","sig-names");
DEF(YsyntaxYmap_tree,"syntax","map-tree");
EXT(YPvnul,"boot","%vnul");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYLmapG,"runtime","<map>");
DEF(YsyntaxYsexpr_define_classQ,"syntax","sexpr-define-class?");
DEF(YsyntaxYsexpr_monitor_type,"syntax","sexpr-monitor-type");
EXT(YruntimeYvec,"runtime","vec");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YLgenG,"boot","<gen>");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(Yobject_slots,"boot","object-slots");
DEF(YsyntaxYsexpr_iterate_name,"syntax","sexpr-iterate-name");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
DEF(YsyntaxYsexpr_rest_operands,"syntax","sexpr-rest-operands");
DEF(YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
EXT(YruntimeYNEE,"runtime","~==");
DEF(YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
EXT(YLstrG,"boot","<str>");
DEF(YsyntaxYsexpr_syntax_ifQ,"syntax","sexpr-syntax-if?");
EXT(YruntimeYsub,"runtime","sub");
DEF(YsyntaxYTbq_appendT,"syntax","*bq-append*");
EXT(Ylst,"boot","lst");
DEF(YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
DEF(YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
DEF(YsyntaxYsexpr_let_body,"syntax","sexpr-let-body");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_parents,"boot","class-parents");
DEF(YsyntaxYsexpr_method_value,"syntax","sexpr-method-value");
EXT(Yfind_setter,"boot","find-setter");
DEF(YsyntaxYsexpr_method_definitionQ,"syntax","sexpr-method-definition?");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YruntimeYround,"runtime","round");
DEF(YsyntaxYbq_process,"syntax","bq-process");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YLvecG,"boot","<vec>");
EXT(YPsnul,"boot","%snul");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(Ytype_class,"boot","type-class");
EXT(YruntimeYalways,"runtime","always");
DEF(YsyntaxYsexpr_isa_slot_inits,"syntax","sexpr-isa-slot-inits");
EXT(Ynul,"boot","nul");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
DEF(YsyntaxYLnameG,"syntax","<name>");
DEF(YsyntaxYsexpr_loc_body,"syntax","sexpr-loc-body");
EXT(YruntimeYlen,"runtime","len");
EXT(YruntimeYini_state,"runtime","ini-state");
DEF(YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
DEF(YsyntaxYsexpr_last_expQ,"syntax","sexpr-last-exp?");
EXT(Ygen_add_met,"boot","gen-add-met");
DEF(YsyntaxYsexpr_macro_expandQ,"syntax","sexpr-macro-expand?");
DEF(YsyntaxYsexpr_monitor_info,"syntax","sexpr-monitor-info");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YruntimeYevenQ,"runtime","even?");
DEF(YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYlow_elt_setter,"runtime","low-elt-setter");
DEF(YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
DEF(YsyntaxYsexpr_function_value,"syntax","sexpr-function-value");
DEF(YsyntaxYsexpr_operands,"syntax","sexpr-operands");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YLflatG,"boot","<flat>");
DEF(YsyntaxYsexpr_new_unique_name_counterX,"syntax","sexpr-new-unique-name-counter!");
EXT(YLmetG,"boot","<met>");
DEF(YsyntaxYbq_remove_tokens,"syntax","bq-remove-tokens");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(Yfun_names,"boot","fun-names");
DEF(YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYdo,"runtime","do");
DEF(YsyntaxYsexpr_make_setter,"syntax","sexpr-make-setter");
DEF(YsyntaxYsexpr_unique_name,"syntax","sexpr-unique-name");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
DEF(YsyntaxYsexpr_first_exp,"syntax","sexpr-first-exp");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYfab,"runtime","fab");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
DEF(YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
EXT(YruntimeYnegQ,"runtime","neg?");
DEF(YsyntaxYsexpr_iterateQ,"syntax","sexpr-iterate?");
DEF(YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
EXT(YruntimeYmake_handler,"runtime","make-handler");
DEF(YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
DEF(YsyntaxYsexpr_pattern_variableQ,"syntax","sexpr-pattern-variable?");
EXT(YruntimeYstr,"runtime","str");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YruntimeYanyQ,"runtime","any?");
DEF(YsyntaxYsexpr_ifQ,"syntax","sexpr-if?");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYto_str,"runtime","to-str");
DEF(YsyntaxYfind_option,"syntax","find-option");
DEF(YsyntaxYsexpr_slot_object,"syntax","sexpr-slot-object");
DEF(YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
EXT(Yfind_getter,"boot","find-getter");
EXT(YruntimeYfill,"runtime","fill");
DEF(YsyntaxYsexpr_monitorQ,"syntax","sexpr-monitor?");
EXT(Yobject_class,"boot","object-class");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
DEF(YsyntaxYsexpr_tagged_listQ,"syntax","sexpr-tagged-list?");
DEF(YsyntaxYsexpr_iterate_body,"syntax","sexpr-iterate-body");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YruntimeYdel_keys,"runtime","del-keys");
DEF(YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
EXT(YruntimeYA,"runtime","+");
DEF(YsyntaxYsexpr_iterate_signature,"syntax","sexpr-iterate-signature");
EXT(YLlstG,"boot","<lst>");
DEF(YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
DEF(YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
DEF(YsyntaxYsexpr_unwind_protectQ,"syntax","sexpr-unwind-protect?");
DEF(YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
EXT(YLfunG,"boot","<fun>");
DEF(YsyntaxYsexpr_quotedQ,"syntax","sexpr-quoted?");
DEF(YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
EXT(YruntimeYassq,"runtime","assq");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YruntimeYalter,"runtime","alter");
EXT(YmacrosYvar_name,"macros","var-name");
DEF(YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YDmax_int,"boot","$max-int");
EXT(YLseqG,"boot","<seq>");
DEF(YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
EXT(YruntimeYpeek_char,"runtime","peek-char");
DEF(YsyntaxYsexpr_atomQ,"syntax","sexpr-atom?");
DEF(YsyntaxYsexpr_operator,"syntax","sexpr-operator");
EXT(YruntimeYmin,"runtime","min");
DEF(YsyntaxYeval,"syntax","eval");
DEF(YsyntaxYsexpr_backquoteQ,"syntax","sexpr-backquote?");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
DEF(YsyntaxYsexpr_build_backquote_expander,"syntax","sexpr-build-backquote-expander");
DEF(YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
DEF(YsyntaxYsexpr_letQ,"syntax","sexpr-let?");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YruntimeYS,"runtime","/");
EXT(YruntimeYpop,"runtime","pop");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
DEF(YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
EXT(YruntimeYG,"runtime",">");
DEF(YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
EXT(YLcolG,"boot","<col>");
EXT(YmacrosYcat,"macros","cat");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
DEF(YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YruntimeYoddQ,"runtime","odd?");
DEF(YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YruntimeYLlistG,"runtime","<list>");
DEF(YsyntaxYsexpr_begin_actions,"syntax","sexpr-begin-actions");
DEF(YsyntaxYsexpr_macroQ,"syntax","sexpr-macro?");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YruntimeYdo3,"runtime","do3");
DEF(YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
EXT(YmacrosYtup,"macros","tup");
EXT(Ynil,"boot","nil");
EXT(YruntimeYrcurry,"runtime","rcurry");
DEF(YsyntaxYsexpr_make_setter_name,"syntax","sexpr-make-setter-name");
DEF(YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YruntimeYlast,"runtime","last");
EXT(YruntimeYlow_elt,"runtime","low-elt");
EXT(YruntimeYL,"runtime","<");
DEF(YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
EXT(YLlocG,"boot","<loc>");
EXT(Yfab_class,"boot","fab-class");
EXT(YruntimeYformat,"runtime","format");
EXT(YruntimeYneg,"runtime","neg");
DEF(YsyntaxYsexpr_pattern_variable_name,"syntax","sexpr-pattern-variable-name");
DEF(YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
EXT(YruntimeYlist,"runtime","list");
EXT(YLsigG,"boot","<sig>");
EXT(YruntimeYfrom_to,"runtime","from-to");
DEF(YsyntaxYsexpr_slotQ,"syntax","sexpr-slot?");
EXT(Ytype_object,"boot","type-object");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(Yhead_setter,"boot","head-setter");
DEF(YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YPisa,"boot","%isa");
EXT(YLfloG,"boot","<flo>");
DEF(YsyntaxYDsexpr_slot_tag,"syntax","$sexpr-slot-tag");
EXT(YruntimeYLerrorG,"runtime","<error>");
DEF(YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
EXT(Yhead,"boot","head");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYrev,"runtime","rev");
DEF(YsyntaxYsexpr_isa_parents,"syntax","sexpr-isa-parents");
DEF(YsyntaxYsexpr_syntax_definitionQ,"syntax","sexpr-syntax-definition?");
EXT(YruntimeYdel_key,"runtime","del-key");
DEF(YsyntaxYsexpr_monitor_body,"syntax","sexpr-monitor-body");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
DEF(YsyntaxYsexpr_slot_init,"syntax","sexpr-slot-init");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
DEF(YsyntaxYsexpr_method_parameters,"syntax","sexpr-method-parameters");
DEF(YsyntaxYsexpr_isaQ,"syntax","sexpr-isa?");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YruntimeYkeys,"runtime","keys");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YruntimeYLrestartG,"runtime","<restart>");
DEF(YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
DEF(YsyntaxYsexpr_self_evaluatingQ,"syntax","sexpr-self-evaluating?");
DEF(YsyntaxYTbq_listT,"syntax","*bq-list*");
EXT(Yslot_init,"boot","slot-init");
EXT(YLintG,"boot","<int>");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
DEF(YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
DEF(YsyntaxYsexpr_methodQ,"syntax","sexpr-method?");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
DEF(YsyntaxYsexpr_beginQ,"syntax","sexpr-begin?");
DEF(YsyntaxYsexpr_first_operand,"syntax","sexpr-first-operand");
EXT(YruntimeYin,"runtime","in");
DEF(YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(Ysym_name,"boot","sym-name");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YLnumG,"boot","<num>");
DEF(YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYdo2,"runtime","do2");
EXT(Yfun_value,"boot","fun-value");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYash,"runtime","ash");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YmacrosYpair,"macros","pair");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(Ytype_error,"boot","type-error");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYroundS,"runtime","round/");
DEF(YsyntaxYTunique_name_counterT,"syntax","*unique-name-counter*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_93);
DEFLIT(lit_234);
DEFLIT(lit_42);
DEFLIT(lit_171);
DEFLIT(lit_19);
DEFLIT(lit_113);
DEFLIT(lit_191);
DEFLIT(lit_49);
DEFLIT(lit_26);
DEFLIT(lit_206);
DEFLIT(lit_128);
DEFLIT(lit_210);
DEFLIT(lit_208);
DEFLIT(lit_241);
DEFLIT(lit_15);
DEFLIT(lit_209);
DEFLIT(lit_29);
DEFLIT(lit_203);
DEFLIT(lit_231);
DEFLIT(lit_99);
DEFLIT(lit_162);
DEFLIT(lit_200);
DEFLIT(lit_91);
DEFLIT(lit_27);
DEFLIT(lit_50);
DEFLIT(lit_74);
DEFLIT(lit_20);
DEFLIT(lit_131);
DEFLIT(lit_145);
DEFLIT(lit_144);
DEFLIT(lit_125);
DEFLIT(lit_146);
DEFLIT(lit_55);
DEFLIT(lit_123);
DEFLIT(lit_161);
DEFLIT(lit_25);
DEFLIT(lit_164);
DEFLIT(lit_33);
DEFLIT(lit_217);
DEFLIT(lit_84);
DEFLIT(lit_28);
DEFLIT(lit_76);
DEFLIT(lit_198);
DEFLIT(lit_140);
DEFLIT(lit_135);
DEFLIT(lit_214);
DEFLIT(lit_132);
DEFLIT(lit_14);
DEFLIT(lit_90);
DEFLIT(lit_100);
DEFLIT(lit_109);
DEFLIT(lit_57);
DEFLIT(lit_240);
DEFLIT(lit_12);
DEFLIT(lit_201);
DEFLIT(lit_48);
DEFLIT(lit_17);
DEFLIT(lit_202);
DEFLIT(lit_212);
DEFLIT(lit_232);
DEFLIT(lit_77);
DEFLIT(lit_115);
DEFLIT(lit_89);
DEFLIT(lit_194);
DEFLIT(lit_45);
DEFLIT(lit_179);
DEFLIT(lit_151);
DEFLIT(lit_189);
DEFLIT(lit_51);
DEFLIT(lit_122);
DEFLIT(lit_112);
DEFLIT(lit_32);
DEFLIT(lit_153);
DEFLIT(lit_236);
DEFLIT(lit_94);
DEFLIT(lit_180);
DEFLIT(lit_148);
DEFLIT(lit_114);
DEFLIT(lit_221);
DEFLIT(lit_105);
DEFLIT(lit_224);
DEFLIT(lit_54);
DEFLIT(lit_190);
DEFLIT(lit_58);
DEFLIT(lit_8);
DEFLIT(lit_211);
DEFLIT(lit_108);
DEFLIT(lit_243);
DEFLIT(lit_139);
DEFLIT(lit_216);
DEFLIT(lit_103);
DEFLIT(lit_70);
DEFLIT(lit_188);
DEFLIT(lit_7);
DEFLIT(lit_37);
DEFLIT(lit_197);
DEFLIT(lit_16);
DEFLIT(lit_56);
DEFLIT(lit_220);
DEFLIT(lit_178);
DEFLIT(lit_10);
DEFLIT(lit_119);
DEFLIT(lit_38);
DEFLIT(lit_63);
DEFLIT(lit_35);
DEFLIT(lit_150);
DEFLIT(lit_0);
DEFLIT(lit_36);
DEFLIT(lit_213);
DEFLIT(lit_53);
DEFLIT(lit_1);
DEFLIT(lit_80);
DEFLIT(lit_204);
DEFLIT(lit_78);
DEFLIT(lit_64);
DEFLIT(lit_147);
DEFLIT(lit_219);
DEFLIT(lit_5);
DEFLIT(lit_23);
DEFLIT(lit_244);
DEFLIT(lit_73);
DEFLIT(lit_107);
DEFLIT(lit_98);
DEFLIT(lit_182);
DEFLIT(lit_65);
DEFLIT(lit_104);
DEFLIT(lit_215);
DEFLIT(lit_92);
DEFLIT(lit_75);
DEFLIT(lit_170);
DEFLIT(lit_185);
DEFLIT(lit_157);
DEFLIT(lit_96);
DEFLIT(lit_34);
DEFLIT(lit_242);
DEFLIT(lit_228);
DEFLIT(lit_142);
DEFLIT(lit_79);
DEFLIT(lit_87);
DEFLIT(lit_143);
DEFLIT(lit_158);
DEFLIT(lit_83);
DEFLIT(lit_44);
DEFLIT(lit_40);
DEFLIT(lit_173);
DEFLIT(lit_68);
DEFLIT(lit_218);
DEFLIT(lit_172);
DEFLIT(lit_124);
DEFLIT(lit_85);
DEFLIT(lit_22);
DEFLIT(lit_129);
DEFLIT(lit_71);
DEFLIT(lit_116);
DEFLIT(lit_61);
DEFLIT(lit_238);
DEFLIT(lit_46);
DEFLIT(lit_187);
DEFLIT(lit_237);
DEFLIT(lit_239);
DEFLIT(lit_127);
DEFLIT(lit_229);
DEFLIT(lit_226);
DEFLIT(lit_101);
DEFLIT(lit_66);
DEFLIT(lit_9);
DEFLIT(lit_118);
DEFLIT(lit_166);
DEFLIT(lit_59);
DEFLIT(lit_230);
DEFLIT(lit_174);
DEFLIT(lit_199);
DEFLIT(lit_11);
DEFLIT(lit_196);
DEFLIT(lit_168);
DEFLIT(lit_3);
DEFLIT(lit_141);
DEFLIT(lit_235);
DEFLIT(lit_95);
DEFLIT(lit_39);
DEFLIT(lit_245);
DEFLIT(lit_155);
DEFLIT(lit_82);
DEFLIT(lit_43);
DEFLIT(lit_60);
DEFLIT(lit_193);
DEFLIT(lit_175);
DEFLIT(lit_72);
DEFLIT(lit_117);
DEFLIT(lit_207);
DEFLIT(lit_2);
DEFLIT(lit_169);
DEFLIT(lit_102);
DEFLIT(lit_136);
DEFLIT(lit_138);
DEFLIT(lit_223);
DEFLIT(lit_167);
DEFLIT(lit_13);
DEFLIT(lit_121);
DEFLIT(lit_62);
DEFLIT(lit_81);
DEFLIT(lit_195);
DEFLIT(lit_160);
DEFLIT(lit_184);
DEFLIT(lit_4);
DEFLIT(lit_69);
DEFLIT(lit_52);
DEFLIT(lit_31);
DEFLIT(lit_225);
DEFLIT(lit_177);
DEFLIT(lit_24);
DEFLIT(lit_106);
DEFLIT(lit_154);
DEFLIT(lit_152);
DEFLIT(lit_88);
DEFLIT(lit_133);
DEFLIT(lit_120);
DEFLIT(lit_110);
DEFLIT(lit_6);
DEFLIT(lit_149);
DEFLIT(lit_111);
DEFLIT(lit_159);
DEFLIT(lit_21);
DEFLIT(lit_205);
DEFLIT(lit_47);
DEFLIT(lit_233);
DEFLIT(lit_192);
DEFLIT(lit_41);
DEFLIT(lit_186);
DEFLIT(lit_165);
DEFLIT(lit_222);
DEFLIT(lit_163);
DEFLIT(lit_67);
DEFLIT(lit_137);
DEFLIT(lit_18);
DEFLIT(lit_130);
DEFLIT(lit_181);
DEFLIT(lit_176);
DEFLIT(lit_86);
DEFLIT(lit_97);
DEFLIT(lit_156);
DEFLIT(lit_227);
DEFLIT(lit_126);
DEFLIT(lit_183);
DEFLIT(lit_30);
DEFLIT(lit_134);

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
LOCFOR(fun_x_1255_50);
LOCFOR(fun_51);
LOCFOR(fun_sexpr_monitor_expand_52);
FUNFOR(YsyntaxYfind_option);
LOCFOR(fun_x_1257_54);
LOCFOR(fun_55);
LOCFOR(fun_sexpr_monitor_type_56);
LOCFOR(fun_x_1259_57);
LOCFOR(fun_58);
LOCFOR(fun_x_1261_59);
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
LOCFOR(fun_sexpr_isa_parents_102);
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
  P tmpF1187;
  P tmpF1186;
  P tmpF1185;
  P tmpF1184;
  P tmpF1183;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,CHKREF(YisaQ),exp_,CHKREF(YLnumG));
  tmpF1183 = T1;
  if (tmpF1183 != YPfalse) {
    T2 = tmpF1183;
  } else {
    T4 = CALL2(1,CHKREF(YisaQ),exp_,CHKREF(YLchrG));
    tmpF1184 = T4;
    if (tmpF1184 != YPfalse) {
      T5 = tmpF1184;
    } else {
      T7 = CALL2(1,CHKREF(YmacrosYEE),exp_,YPtrue);
      tmpF1185 = T7;
      if (tmpF1185 != YPfalse) {
        T8 = tmpF1185;
      } else {
        T10 = CALL2(1,CHKREF(YmacrosYEE),exp_,YPfalse);
        tmpF1186 = T10;
        if (tmpF1186 != YPfalse) {
          T11 = tmpF1186;
        } else {
          T13 = CALL2(1,CHKREF(YisaQ),exp_,CHKREF(YLstrG));
          tmpF1187 = T13;
          if (tmpF1187 != YPfalse) {
            T14 = tmpF1187;
          } else {
            T15 = CALL2(1,CHKREF(YisaQ),exp_,CHKREF(YLvecG));
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
  T0 = CALL2(1,CHKREF(YisaQ),exp_,CHKREF(YLsymG));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_tagged_listQ_2) {
  P exp_,tag_;
  P tmpF1188;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(tag_, 1);
loop:
  T1 = CALL2(1,CHKREF(YisaQ),exp_,CHKREF(YLlstG));
  tmpF1188 = T1;
  if (tmpF1188 != YPfalse) {
    T4 = CALL1(1,CHKREF(Yhead),exp_);
    T3 = CALL2(1,CHKREF(YmacrosYEE),T4,tag_);
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_quote_tag));
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
  T0 = CALL2(1,CHKREF(Ylst),CHKREF(YsyntaxYDsexpr_quote_tag),exp_);
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
  T0 = CALL1(1,CHKREF(YruntimeY2nd),quot_);
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_set_tag));
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
  T0 = CALL1(1,CHKREF(YruntimeY2nd),assn_);
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
  T0 = CALL1(1,CHKREF(YruntimeY3rd),assn_);
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
  T0 = CALL1(1,CHKREF(YruntimeY1st),exp_);
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
  T0 = CALL1(1,CHKREF(YruntimeY2nd),exp_);
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
  QRET(CHKREF(lit_17));
}

FUNCODEDEF(fun_sexpr_definitionQ_13) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_define_tag));
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
  T0 = CALL1(1,CHKREF(YruntimeY2nd),defn_);
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
  T0 = CALL1(1,CHKREF(YruntimeY3rd),defn_);
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_define_syntax_tag));
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
  T2 = CALL1(1,CHKREF(Ytail),defn_);
  T1 = CALL1(1,CHKREF(Yhead),T2);
  T0 = CALL1(1,CHKREF(YruntimeY1st),T1);
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
  T2 = CALL1(1,CHKREF(YruntimeY2nd),defn_);
  T4 = CALL1(1,CHKREF(Ytail),defn_);
  T3 = CALL1(1,CHKREF(Ytail),T4);
  T1 = CALL2(1,CHKREF(YmacrosYpair),T2,T3);
  T0 = CALL2(1,CHKREF(YmacrosYpair),CHKREF(YsyntaxYDsexpr_macro_tag),T1);
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_define_function_tag));
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_define_method_tag));
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_define_generic_tag));
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
  T0 = CALL1(1,CHKREF(YruntimeY2nd),defn_);
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
  T1 = CALL1(1,CHKREF(YruntimeYlen),defn_);
  T0 = CALL2(1,CHKREF(YruntimeYE),T1,YPint((P)2));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_signature_parameters_24) {
  P signature_;
  P values_spec_indexF1189;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(signature_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYpos),signature_,CHKREF(lit_39));
  values_spec_indexF1189 = T1;
  T3 = CALL2(1,CHKREF(YmacrosYEE),values_spec_indexF1189,CHKREF(Ynul));
  if (T3 != YPfalse) {
    T2 = signature_;
  } else {
    T4 = CALL3(1,CHKREF(YruntimeYsub),signature_,YPint((P)0),values_spec_indexF1189);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_signature_value_25) {
  P signature_;
  P valueF1191;
  P values_spec_indexF1190;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(signature_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYpos),signature_,CHKREF(lit_39));
  values_spec_indexF1190 = T1;
  T3 = CALL2(1,CHKREF(YmacrosYEE),values_spec_indexF1190,CHKREF(Ynul));
  if (T3 != YPfalse) {
    T2 = YPfalse;
  } else {
    T6 = CALL2(1,CHKREF(YruntimeYA),values_spec_indexF1190,YPint((P)1));
    T5 = CALL2(1,CHKREF(YruntimeYelt),signature_,T6);
    valueF1191 = T5;
    T8 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),valueF1191,CHKREF(lit_41));
    if (T8 != YPfalse) {
      T7 = CHKREF(lit_42);
    } else {
      T7 = valueF1191;
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
  T0 = CALL1(1,CHKREF(YruntimeY3rd),defn_);
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
  T1 = CALL1(1,CHKREF(YsyntaxYsexpr_function_signature),defn_);
  T0 = CALL1(1,CHKREF(YsyntaxYsexpr_signature_parameters),T1);
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
  T1 = CALL1(1,CHKREF(YsyntaxYsexpr_function_signature),defn_);
  T0 = CALL1(1,CHKREF(YsyntaxYsexpr_signature_value),T1);
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
  T2 = CALL1(1,CHKREF(Ytail),defn_);
  T1 = CALL1(1,CHKREF(Ytail),T2);
  T0 = CALL1(1,CHKREF(Ytail),T1);
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
  T2 = CALL1(1,CHKREF(YruntimeY3rd),defn_);
  T5 = CALL1(1,CHKREF(Ytail),defn_);
  T4 = CALL1(1,CHKREF(Ytail),T5);
  T3 = CALL1(1,CHKREF(Ytail),T4);
  T1 = CALL2(1,CHKREF(YmacrosYpair),T2,T3);
  T0 = CALL2(1,CHKREF(YmacrosYpair),CHKREF(YsyntaxYDsexpr_method_tag),T1);
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_method_tag));
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
  T0 = CALL1(1,CHKREF(YruntimeY2nd),method_exp_);
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
  T1 = CALL1(1,CHKREF(YsyntaxYsexpr_method_signature),method_exp_);
  T0 = CALL1(1,CHKREF(YsyntaxYsexpr_signature_parameters),T1);
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
  T1 = CALL1(1,CHKREF(YsyntaxYsexpr_method_signature),method_exp_);
  T0 = CALL1(1,CHKREF(YsyntaxYsexpr_signature_value),T1);
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
  T1 = CALL1(1,CHKREF(Ytail),method_exp_);
  T0 = CALL1(1,CHKREF(Ytail),T1);
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
  T1 = CALL1(1,CHKREF(Ylst),CHKREF(YsyntaxYDsexpr_method_tag));
  T2 = CALL1(1,CHKREF(Ylst),parameters_);
  T0 = CALL3(1,CHKREF(YmacrosYcat),T1,T2,body_);
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
  T1 = CALL3(1,CHKREF(Ylst),CHKREF(YsyntaxYDsexpr_define_method_tag),name_,parameters_);
  T0 = CALL2(1,CHKREF(YmacrosYcat),T1,body_);
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_if_tag));
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
  T0 = CALL1(1,CHKREF(YruntimeY2nd),exp_);
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
  T0 = CALL1(1,CHKREF(YruntimeY3rd),exp_);
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
  T4 = CALL1(1,CHKREF(Ytail),exp_);
  T3 = CALL1(1,CHKREF(Ytail),T4);
  T2 = CALL1(1,CHKREF(Ytail),T3);
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),T2);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T8 = CALL1(1,CHKREF(Ytail),exp_);
    T7 = CALL1(1,CHKREF(Ytail),T8);
    T6 = CALL1(1,CHKREF(Ytail),T7);
    T5 = CALL1(1,CHKREF(Yhead),T6);
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
  T0 = CALLN(1,CHKREF(Ylst),4,CHKREF(YsyntaxYDsexpr_if_tag),test_,then_,else_);
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_bind_exit_tag));
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
  T0 = CALL1(1,CHKREF(YruntimeY2nd),exp_);
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
  T1 = CALL1(1,CHKREF(Ytail),exp_);
  T0 = CALL1(1,CHKREF(Ytail),T1);
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_unwind_protect_tag));
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
  T0 = CALL1(1,CHKREF(YruntimeY2nd),exp_);
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
  T1 = CALL1(1,CHKREF(Ytail),exp_);
  T0 = CALL1(1,CHKREF(Ytail),T1);
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_monitor_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1255_50) {
  P msg_,args_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,CHKREF(Yerror),CHKREF(lit_84),FREEREF(1));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  P return_;
  P optionsF1201;
  P x_1254F1200;
  P x_1254F1199;
  P x_1254F1198;
  P x_1254F1197;
  P bodyF1196;
  P handlerF1195;
  P optionsF1194;
  P x_1254F1193;
  P x_1255F1192;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1255_50,2);
  x_1255F1192 = T1;
  FUNINIT(x_1255F1192, 2,return_,FREEREF(0));
  x_1254F1193 = FREEREF(0);
  optionsF1194 = YPfalse;
  optionsF1194 = BOXFAB(optionsF1194);
  handlerF1195 = YPfalse;
  handlerF1195 = BOXFAB(handlerF1195);
  bodyF1196 = YPfalse;
  bodyF1196 = BOXFAB(bodyF1196);
  T9 = CALL2(1,CHKREF(YisaQ),x_1254F1193,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1254F1193,CHKREF(lit_77),x_1255F1192);
    x_1254F1197 = T11;
    T13 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1254F1197,x_1255F1192);
    BOXVAL(optionsF1194) = T13;
    T14 = CALL1(1,CHKREF(Ytail),x_1254F1197);
    x_1254F1198 = T14;
    T16 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1254F1198,x_1255F1192);
    BOXVAL(handlerF1195) = T16;
    T17 = CALL1(1,CHKREF(Ytail),x_1254F1198);
    x_1254F1199 = T17;
    BOXVAL(bodyF1196) = x_1254F1199;
    x_1254F1200 = Ynil;
    T19 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1254F1200,x_1255F1192);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1255F1192,CHKREF(lit_85),x_1254F1193);
  }
  T24 = BOXVAL(optionsF1194);
  T23 = CALL2(1,CHKREF(YisaQ),T24,CHKREF(YLsymG));
  if (T23 != YPfalse) {
    T28 = CALL1(1,CHKREF(Ylst),CHKREF(lit_86));
    T30 = BOXVAL(optionsF1194);
    T29 = CALL1(1,CHKREF(Ylst),T30);
    T27 = CALL3(1,CHKREF(YmacrosYcat),T28,T29,Ynil);
    T26 = CALL1(1,CHKREF(Ylst),T27);
    T25 = CALL2(1,CHKREF(YmacrosYcat),T26,Ynil);
    T22 = T25;
  } else {
    T31 = BOXVAL(optionsF1194);
    T22 = T31;
  }
  optionsF1201 = T22;
  T33 = CALL1(1,CHKREF(YsyntaxYsexpr_monitor_type),optionsF1201);
  T34 = CALL1(1,CHKREF(YsyntaxYsexpr_monitor_info),optionsF1201);
  T35 = CALL1(1,CHKREF(YsyntaxYsexpr_monitor_test),optionsF1201);
  T36 = BOXVAL(handlerF1195);
  T38 = BOXVAL(bodyF1196);
  T37 = CALL1(1,CHKREF(YsyntaxYsexpr_monitor_body),T38);
  T32 = CALLN(1,CHKREF(YmacrosYtup),5,T33,T34,T35,T36,T37);
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
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),options_);
  if (T1 != YPfalse) {
    T0 = default_;
  } else {
    T5 = CALL1(1,CHKREF(YruntimeY1st),options_);
    T4 = CALL1(1,CHKREF(Yhead),T5);
    T3 = CALL2(1,CHKREF(YmacrosYEE),option_,T4);
    if (T3 != YPfalse) {
      T7 = CALL1(1,CHKREF(YruntimeY1st),options_);
      T6 = CALL1(1,CHKREF(Ytail),T7);
      T2 = T6;
    } else {
      if (YPtrue != YPfalse) {
        T10 = CALL1(1,CHKREF(Ytail),options_);
        T9 = CALL3(1,CHKREF(YsyntaxYfind_option),T10,option_,default_);
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

FUNCODEDEF(fun_x_1257_54) {
  P msg_,args_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,CHKREF(Yerror),CHKREF(lit_94),FREEREF(1));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P x_1256F1205;
  P typeF1204;
  P x_1256F1203;
  P x_1257F1202;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1257_54,2);
  x_1257F1202 = T1;
  FUNINIT(x_1257F1202, 2,return_,FREEREF(0));
  x_1256F1203 = FREEREF(0);
  typeF1204 = YPfalse;
  typeF1204 = BOXFAB(typeF1204);
  T5 = CALL2(1,CHKREF(YisaQ),x_1256F1203,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1256F1203,x_1257F1202);
    BOXVAL(typeF1204) = T7;
    T8 = CALL1(1,CHKREF(Ytail),x_1256F1203);
    x_1256F1205 = T8;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1256F1205,x_1257F1202);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1257F1202,CHKREF(lit_85),x_1256F1203);
  }
  T11 = BOXVAL(typeF1204);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_type_56) {
  P options_;
  P type_listF1206;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,CHKREF(YsyntaxYfind_option),options_,CHKREF(lit_86),CHKREF(lit_92));
  type_listF1206 = T1;
  T3 = FUNFAB(fun_55,1,type_listF1206);
  T2 = with_exit(T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1259_57) {
  P msg_,args_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,CHKREF(Yerror),CHKREF(lit_100),FREEREF(1));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  P return_;
  P x_1258F1210;
  P info_exprF1209;
  P x_1258F1208;
  P x_1259F1207;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1259_57,2);
  x_1259F1207 = T1;
  FUNINIT(x_1259F1207, 2,return_,FREEREF(0));
  x_1258F1208 = FREEREF(0);
  info_exprF1209 = YPfalse;
  info_exprF1209 = BOXFAB(info_exprF1209);
  T5 = CALL2(1,CHKREF(YisaQ),x_1258F1208,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1258F1208,x_1259F1207);
    BOXVAL(info_exprF1209) = T7;
    T8 = CALL1(1,CHKREF(Ytail),x_1258F1208);
    x_1258F1210 = T8;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1258F1210,x_1259F1207);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1259F1207,CHKREF(lit_85),x_1258F1208);
  }
  T11 = BOXVAL(info_exprF1209);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1261_59) {
  P msg_,args_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,CHKREF(Yerror),CHKREF(lit_102),FREEREF(1));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_60) {
  P return_;
  P x_1260F1216;
  P x_1260F1215;
  P argumentsF1214;
  P messageF1213;
  P x_1260F1212;
  P x_1261F1211;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1261_59,2);
  x_1261F1211 = T1;
  FUNINIT(x_1261F1211, 2,return_,FREEREF(0));
  x_1260F1212 = FREEREF(0);
  messageF1213 = YPfalse;
  messageF1213 = BOXFAB(messageF1213);
  argumentsF1214 = YPfalse;
  argumentsF1214 = BOXFAB(argumentsF1214);
  T7 = CALL2(1,CHKREF(YisaQ),x_1260F1212,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1260F1212,x_1261F1211);
    BOXVAL(messageF1213) = T9;
    T10 = CALL1(1,CHKREF(Ytail),x_1260F1212);
    x_1260F1215 = T10;
    BOXVAL(argumentsF1214) = x_1260F1215;
    x_1260F1216 = Ynil;
    T12 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1260F1216,x_1261F1211);
    T11 = T12;
    T8 = T11;
  } else {
    T13 = CALL2(1,x_1261F1211,CHKREF(lit_85),x_1260F1212);
  }
  T15 = CALL1(1,CHKREF(Ylst),CHKREF(lit_103));
  T16 = CALL1(1,CHKREF(Ylst),CHKREF(lit_104));
  T19 = CALL1(1,CHKREF(Ylst),CHKREF(lit_10));
  T20 = CALL1(1,CHKREF(Ylst),CHKREF(lit_105));
  T22 = BOXVAL(messageF1213);
  T21 = CALL1(1,CHKREF(Ylst),T22);
  T18 = CALLN(1,CHKREF(YmacrosYcat),4,T19,T20,T21,Ynil);
  T17 = CALL1(1,CHKREF(Ylst),T18);
  T25 = CALL1(1,CHKREF(Ylst),CHKREF(lit_10));
  T26 = CALL1(1,CHKREF(Ylst),CHKREF(lit_106));
  T29 = CALL1(1,CHKREF(Ylst),CHKREF(lit_107));
  T30 = BOXVAL(argumentsF1214);
  T28 = CALL3(1,CHKREF(YmacrosYcat),T29,T30,Ynil);
  T27 = CALL1(1,CHKREF(Ylst),T28);
  T24 = CALLN(1,CHKREF(YmacrosYcat),4,T25,T26,T27,Ynil);
  T23 = CALL1(1,CHKREF(Ylst),T24);
  T14 = CALLN(1,CHKREF(YmacrosYcat),5,T15,T16,T17,T23,Ynil);
  T5 = T14;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_info_61) {
  P options_;
  P tmpF1219;
  P descriptionF1218;
  P infoF1217;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,CHKREF(YsyntaxYfind_option),options_,CHKREF(lit_96),YPfalse);
  infoF1217 = T1;
  T3 = CALL3(1,CHKREF(YsyntaxYfind_option),options_,CHKREF(lit_97),YPfalse);
  descriptionF1218 = T3;
  tmpF1219 = infoF1217;
  if (tmpF1219 != YPfalse) {
    T6 = descriptionF1218;
  } else {
    T6 = YPfalse;
  }
  T5 = T6;
  if (T5 != YPfalse) {
    T7 = CALL2(1,CHKREF(Yerror),CHKREF(lit_98),options_);
    T4 = T7;
  } else {
    if (infoF1217 != YPfalse) {
      T10 = FUNFAB(fun_58,1,infoF1217);
      T9 = with_exit(T10);
      T8 = T9;
    } else {
      if (descriptionF1218 != YPfalse) {
        T13 = FUNFAB(fun_60,1,descriptionF1218);
        T12 = with_exit(T13);
        T11 = T12;
      } else {
        if (YPtrue != YPfalse) {
          T14 = CHKREF(lit_108);
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
  P test_bodyF1220;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,CHKREF(YsyntaxYfind_option),options_,CHKREF(lit_66),CHKREF(lit_110));
  test_bodyF1220 = T1;
  T2 = CALL2(1,CHKREF(YsyntaxYsexpr_make_anonymous_method),Ynil,test_bodyF1220);
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_make_anonymous_method),Ynil,body_);
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_begin_tag));
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
  T0 = CALL1(1,CHKREF(Ytail),begin_exp_);
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
  T1 = CALL1(1,CHKREF(Ytail),seq_);
  T0 = CALL1(1,CHKREF(YmacrosYemptyQ),T1);
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
  T0 = CALL1(1,CHKREF(Yhead),seq_);
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
  T0 = CALL1(1,CHKREF(Ytail),seq_);
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
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),seq_);
  if (T1 != YPfalse) {
    T0 = seq_;
  } else {
    T3 = CALL1(1,CHKREF(YsyntaxYsexpr_last_expQ),seq_);
    if (T3 != YPfalse) {
      T4 = CALL1(1,CHKREF(YsyntaxYsexpr_first_exp),seq_);
      T2 = T4;
    } else {
      T5 = CALL1(1,CHKREF(YsyntaxYsexpr_make_begin),seq_);
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
  T0 = CALL2(1,CHKREF(YmacrosYpair),CHKREF(YsyntaxYDsexpr_begin_tag),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_applicationQ_71) {
  P exp_;
  P tmpF1221;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,CHKREF(YisaQ),exp_,CHKREF(YLlstG));
  tmpF1221 = T1;
  if (tmpF1221 != YPfalse) {
    T4 = CALL1(1,CHKREF(YmacrosYemptyQ),exp_);
    T3 = CALL1(1,CHKREF(Ynot),T4);
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
  T0 = CALL1(1,CHKREF(Yhead),app_);
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
  T0 = CALL1(1,CHKREF(Ytail),app_);
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
  T0 = CALL1(1,CHKREF(YmacrosYemptyQ),args_);
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
  T0 = CALL1(1,CHKREF(Yhead),args_);
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
  T0 = CALL1(1,CHKREF(Ytail),args_);
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
  T1 = CALL1(1,CHKREF(Ylst),op_);
  T0 = CALL2(1,CHKREF(YmacrosYcat),T1,operands_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_new_unique_name_counterX_78) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,CHKREF(YruntimeYA),CHKREF(YsyntaxYTunique_name_counterT),YPint((P)1));
  YsyntaxYTunique_name_counterT = T0;
UNLINK_STACK();
  RET(CHKREF(YsyntaxYTunique_name_counterT));
}

FUNCODEDEF(fun_sexpr_unique_name_79) {
  P prefix_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(prefix_, 0);
loop:
  T2 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLstrG),prefix_);
  T4 = CALL0(1,CHKREF(YsyntaxYsexpr_new_unique_name_counterX));
  T3 = CALL1(1,CHKREF(YruntimeYnum_to_str),T4);
  T1 = CALL2(1,CHKREF(YmacrosYcat),T2,T3);
  T0 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLsymG),T1);
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_let_tag));
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
  T1 = CALL1(1,CHKREF(YruntimeY2nd),let_exp_);
  T0 = CALL2(1,CHKREF(YmacrosYmap),CHKREF(Yhead),T1);
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
  T1 = CALL1(1,CHKREF(YruntimeY2nd),let_exp_);
  T0 = CALL2(1,CHKREF(YmacrosYmap),CHKREF(YruntimeY2nd),T1);
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
  T2 = CALL1(1,CHKREF(Ytail),let_exp_);
  T1 = CALL1(1,CHKREF(Ytail),T2);
  T0 = CALL1(1,CHKREF(YsyntaxYsexpr_sequence_Gbegin),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_84) {
  P rtnames_,rtvalues_,index_,tnames_;
  P tmpF1223;
  P nameF1222;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(rtnames_, 0);
  ARG(rtvalues_, 1);
  ARG(index_, 2);
  ARG(tnames_, 3);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),tnames_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,CHKREF(YmacrosYtup),rtnames_,rtvalues_);
    T0 = T2;
  } else {
    T4 = CALL1(1,CHKREF(Yhead),tnames_);
    nameF1222 = T4;
    T7 = CALL2(1,CHKREF(YisaQ),nameF1222,CHKREF(YLlstG));
    tmpF1223 = T7;
    if (tmpF1223 != YPfalse) {
      T11 = CALL1(1,CHKREF(Ytail),nameF1222);
      T10 = CALL1(1,CHKREF(Yhead),T11);
      T9 = CALL2(1,CHKREF(YmacrosYEE),T10,CHKREF(lit_152));
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    if (T6 != YPfalse) {
      T15 = CALL1(1,CHKREF(Yhead),nameF1222);
      T14 = CALL2(1,CHKREF(Ylst),T15,CHKREF(lit_153));
      T13 = CALL2(1,CHKREF(YmacrosYpair),T14,rtnames_);
      T16 = CALL2(1,CHKREF(YmacrosYpair),FREEREF(1),rtvalues_);
      T17 = CALL2(1,CHKREF(YruntimeYA),index_,YPint((P)1));
      T18 = CALL1(1,CHKREF(Ytail),tnames_);
      a1 = T13;
      a2 = T16;
      a3 = T17;
      a4 = T18;
      rtnames_ = a1;
      rtvalues_ = a2;
      index_ = a3;
      tnames_ = a4;
      goto loop;
      T5 = T12;
    } else {
      T21 = CALL2(1,CHKREF(YmacrosYpair),nameF1222,rtnames_);
      T20 = CALL2(1,CHKREF(YmacrosYpair),FREEREF(1),T21);
      T23 = CALL2(1,CHKREF(Ylst),CHKREF(lit_154),FREEREF(1));
      T25 = CALL2(1,CHKREF(Ylst),CHKREF(lit_155),FREEREF(1));
      T24 = CALL2(1,CHKREF(YmacrosYpair),T25,rtvalues_);
      T22 = CALL2(1,CHKREF(YmacrosYpair),T23,T24);
      T26 = CALL2(1,CHKREF(YruntimeYA),index_,YPint((P)1));
      T27 = CALL1(1,CHKREF(Ytail),tnames_);
      a1 = T20;
      a2 = T22;
      a3 = T26;
      a4 = T27;
      rtnames_ = a1;
      rtvalues_ = a2;
      index_ = a3;
      tnames_ = a4;
      goto loop;
      T5 = T19;
    }
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_85) {
  P rnames_,rvalues_,names_,vals_;
  P tup37F1233;
  P rtvaluesF1232;
  P tup37F1231;
  P rtnamesF1230;
  P tup37F1229;
  P innerF1228;
  P tupnameF1227;
  P tmpF1226;
  P valueF1225;
  P nameF1224;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(rnames_, 0);
  ARG(rvalues_, 1);
  ARG(names_, 2);
  ARG(vals_, 3);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,CHKREF(YruntimeYrevX),rnames_);
    T4 = CALL1(1,CHKREF(YruntimeYrevX),rvalues_);
    T2 = CALL2(1,CHKREF(YmacrosYtup),T3,T4);
    T0 = T2;
  } else {
    T6 = CALL1(1,CHKREF(Yhead),names_);
    nameF1224 = T6;
    T8 = CALL1(1,CHKREF(Yhead),vals_);
    valueF1225 = T8;
    T11 = CALL2(1,CHKREF(YisaQ),nameF1224,CHKREF(YLlstG));
    tmpF1226 = T11;
    if (tmpF1226 != YPfalse) {
      T14 = CALL1(1,CHKREF(Yhead),nameF1224);
      T13 = CALL2(1,CHKREF(YmacrosYEE),T14,CHKREF(lit_41));
      T12 = T13;
    } else {
      T12 = YPfalse;
    }
    T10 = T12;
    if (T10 != YPfalse) {
      T16 = CALL1(1,CHKREF(YsyntaxYsexpr_unique_name),CHKREF(lit_146));
      tupnameF1227 = T16;
      T19 = FUNSHELL(1,fun_inner_84,2);
      innerF1228 = T19;
      FUNINIT(innerF1228, 2,innerF1228,tupnameF1227);
      T21 = CALL1(1,CHKREF(Ylst),tupnameF1227);
      T22 = CALL1(1,CHKREF(Ylst),valueF1225);
      T23 = CALL1(1,CHKREF(Ytail),nameF1224);
      T20 = CALLN(0,innerF1228,4,T21,T22,YPint((P)0),T23);
      T18 = T20;
      tup37F1229 = T18;
      T25 = CALL1(1,CHKREF(Yhead),tup37F1229);
      rtnamesF1230 = T25;
      T27 = CALL1(1,CHKREF(Ytail),tup37F1229);
      tup37F1231 = T27;
      T29 = CALL1(1,CHKREF(Yhead),tup37F1231);
      rtvaluesF1232 = T29;
      T31 = CALL1(1,CHKREF(Ytail),tup37F1231);
      tup37F1233 = T31;
      T33 = CALL2(1,CHKREF(YmacrosYcat),rtnamesF1230,rnames_);
      T34 = CALL2(1,CHKREF(YmacrosYcat),rtvaluesF1232,rvalues_);
      T35 = CALL1(1,CHKREF(Ytail),names_);
      T36 = CALL1(1,CHKREF(Ytail),vals_);
      a1 = T33;
      a2 = T34;
      a3 = T35;
      a4 = T36;
      rnames_ = a1;
      rvalues_ = a2;
      names_ = a3;
      vals_ = a4;
      goto loop;
      T30 = T32;
      T28 = T30;
      T26 = T28;
      T24 = T26;
      T17 = T24;
      T15 = T17;
      T9 = T15;
    } else {
      T38 = CALL2(1,CHKREF(YmacrosYpair),nameF1224,rnames_);
      T39 = CALL2(1,CHKREF(YmacrosYpair),valueF1225,rvalues_);
      T40 = CALL1(1,CHKREF(Ytail),names_);
      T41 = CALL1(1,CHKREF(Ytail),vals_);
      a1 = T38;
      a2 = T39;
      a3 = T40;
      a4 = T41;
      rnames_ = a1;
      rvalues_ = a2;
      names_ = a3;
      vals_ = a4;
      goto loop;
      T9 = T37;
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
  P loopF1234;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(vals_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_85,1);
  loopF1234 = T1;
  FUNINIT(loopF1234, 1,loopF1234);
  T2 = CALLN(0,loopF1234,4,Ynil,Ynil,names_,vals_);
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
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T5 = CALL1(1,CHKREF(Yhead),names_);
    T4 = CALL1(1,CHKREF(Ylst),T5);
    T7 = CALL1(1,CHKREF(Ytail),names_);
    T8 = CALL1(1,CHKREF(Ytail),values_);
    T6 = CALL2(0,FREEREF(1),T7,T8);
    T3 = CALL3(1,CHKREF(Ylst),CHKREF(YsyntaxYDsexpr_method_tag),T4,T6);
    T10 = CALL1(1,CHKREF(Yhead),values_);
    T9 = CALL1(1,CHKREF(Ylst),T10);
    T2 = CALL2(1,CHKREF(YmacrosYpair),T3,T9);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_let_Gcombination_88) {
  P let_exp_;
  P colF1243;
  P tup38F1242;
  P valuesF1241;
  P tup38F1240;
  P namesF1239;
  P tup38F1238;
  P bodyF1237;
  P ovaluesF1236;
  P onamesF1235;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T1 = CALL1(1,CHKREF(YsyntaxYsexpr_let_bound_variables),let_exp_);
  onamesF1235 = T1;
  T3 = CALL1(1,CHKREF(YsyntaxYsexpr_let_values),let_exp_);
  ovaluesF1236 = T3;
  T5 = CALL1(1,CHKREF(YsyntaxYsexpr_let_body),let_exp_);
  bodyF1237 = T5;
  T7 = CALL2(1,CHKREF(YsyntaxYsexpr_let_namesAvalues),onamesF1235,ovaluesF1236);
  tup38F1238 = T7;
  T9 = CALL1(1,CHKREF(Yhead),tup38F1238);
  namesF1239 = T9;
  T11 = CALL1(1,CHKREF(Ytail),tup38F1238);
  tup38F1240 = T11;
  T13 = CALL1(1,CHKREF(Yhead),tup38F1240);
  valuesF1241 = T13;
  T15 = CALL1(1,CHKREF(Ytail),tup38F1240);
  tup38F1242 = T15;
  T17 = FUNSHELL(1,fun_col_87,2);
  colF1243 = T17;
  FUNINIT(colF1243, 2,bodyF1237,colF1243);
  T18 = CALL2(0,colF1243,namesF1239,valuesF1241);
  T16 = T18;
  T14 = T16;
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_locals_tag));
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
  T1 = CALL1(1,CHKREF(YruntimeY2nd),loc_exp_);
  T0 = CALL2(1,CHKREF(YmacrosYmap),CHKREF(YruntimeY1st),T1);
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
  T1 = CALL1(1,CHKREF(YruntimeY2nd),loc_exp_);
  T0 = CALL2(1,CHKREF(YmacrosYmap),CHKREF(YruntimeY2nd),T1);
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
  T1 = CALL2(1,CHKREF(YruntimeYcompose),CHKREF(Ytail),CHKREF(Ytail));
  T2 = CALL1(1,CHKREF(YruntimeY2nd),loc_exp_);
  T0 = CALL2(1,CHKREF(YmacrosYmap),T1,T2);
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
  T1 = CALL1(1,CHKREF(Ytail),loc_exp_);
  T0 = CALL1(1,CHKREF(Ytail),T1);
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
  T1 = CALL1(1,CHKREF(YsyntaxYsexpr_loc_raw_body),loc_exp_);
  T0 = CALL1(1,CHKREF(YsyntaxYsexpr_sequence_Gbegin),T1);
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_iterate_tag));
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
  T0 = CALL1(1,CHKREF(YruntimeY2nd),rep_exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_signature_97) {
  P rep_exp_;
  P sigF1244;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeY3rd),rep_exp_);
  sigF1244 = T1;
  T4 = CALL1(1,CHKREF(YsyntaxYsexpr_signature_parameters),sigF1244);
  T3 = CALL2(1,CHKREF(YmacrosYmap),CHKREF(YruntimeY1st),T4);
  T6 = CALL1(1,CHKREF(YsyntaxYsexpr_signature_value),sigF1244);
  if (T6 != YPfalse) {
    T5 = Ynil;
  } else {
    T7 = CALL1(1,CHKREF(Ylst),CHKREF(YsyntaxYDsexpr_values_tag));
    T5 = T7;
  }
  T9 = CALL1(1,CHKREF(YsyntaxYsexpr_signature_value),sigF1244);
  T8 = CALL1(1,CHKREF(Ylst),T9);
  T2 = CALL3(1,CHKREF(YmacrosYcat),T3,T5,T8);
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
  T1 = CALL1(1,CHKREF(YruntimeY3rd),rep_exp_);
  T0 = CALL2(1,CHKREF(YmacrosYmap),CHKREF(YruntimeY2nd),T1);
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
  T2 = CALL1(1,CHKREF(Ytail),rep_exp_);
  T1 = CALL1(1,CHKREF(Ytail),T2);
  T0 = CALL1(1,CHKREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_Gloc_100) {
  P rep_exp_;
  P initsF1248;
  P bodyF1247;
  P sigF1246;
  P nameF1245;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = CALL1(1,CHKREF(YsyntaxYsexpr_iterate_name),rep_exp_);
  nameF1245 = T1;
  T3 = CALL1(1,CHKREF(YsyntaxYsexpr_iterate_signature),rep_exp_);
  sigF1246 = T3;
  T5 = CALL1(1,CHKREF(YsyntaxYsexpr_iterate_body),rep_exp_);
  bodyF1247 = T5;
  T7 = CALL1(1,CHKREF(YsyntaxYsexpr_iterate_inits),rep_exp_);
  initsF1248 = T7;
  T11 = CALL2(1,CHKREF(Ylst),nameF1245,sigF1246);
  T10 = CALL2(1,CHKREF(YmacrosYcat),T11,bodyF1247);
  T9 = CALL1(1,CHKREF(Ylst),T10);
  T13 = CALL1(1,CHKREF(Ylst),nameF1245);
  T12 = CALL2(1,CHKREF(YmacrosYcat),T13,initsF1248);
  T8 = CALL3(1,CHKREF(Ylst),CHKREF(YsyntaxYDsexpr_locals_tag),T9,T12);
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_isa_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_parents_102) {
  P exp_;
  P parentsF1249;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeY2nd),exp_);
  parentsF1249 = T1;
  T3 = CALL2(1,CHKREF(YisaQ),parentsF1249,CHKREF(YLlstG));
  if (T3 != YPfalse) {
    T2 = parentsF1249;
  } else {
    T4 = CALL1(1,CHKREF(Ylst),parentsF1249);
    T2 = T4;
  }
  T0 = T2;
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
  T1 = CALL1(1,CHKREF(Ytail),exp_);
  T0 = CALL1(1,CHKREF(Ytail),T1);
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
  T0 = CALL2(1,CHKREF(YmacrosYmap),CHKREF(YruntimeY2nd),exp_);
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
  T0 = CALL2(1,CHKREF(YmacrosYmap),CHKREF(YruntimeY3rd),exp_);
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_define_class_tag));
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
  T0 = CALL1(1,CHKREF(YruntimeY3rd),exp_);
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_slot_tag));
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
  T0 = CALL1(1,CHKREF(YruntimeY2nd),exp_);
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
  T0 = CALL1(1,CHKREF(YruntimeY3rd),exp_);
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
  T2 = CALL1(1,CHKREF(YruntimeYlen),exp_);
  T1 = CALL2(1,CHKREF(YruntimeYE),T2,YPint((P)4));
  if (T1 != YPfalse) {
    T3 = CALL2(1,CHKREF(YruntimeYelt),exp_,YPint((P)3));
    T0 = T3;
  } else {
    T0 = CHKREF(lit_188);
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
  T2 = CALL2(1,CHKREF(Ylst),CHKREF(lit_190),type_);
  T1 = CALL1(1,CHKREF(Ylst),T2);
  T4 = CALL3(1,CHKREF(Ylst),CHKREF(lit_191),CHKREF(lit_190),name_);
  T3 = CALL1(1,CHKREF(Ylst),T4);
  T0 = CALL3(1,CHKREF(YsyntaxYsexpr_make_method),name_,T1,T3);
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
  T1 = CALL1(1,CHKREF(YsyntaxYsexpr_make_setter_name),name_);
  T3 = CALL2(1,CHKREF(Ylst),CHKREF(lit_194),slot_type_);
  T4 = CALL2(1,CHKREF(Ylst),CHKREF(lit_190),type_);
  T2 = CALL2(1,CHKREF(Ylst),T3,T4);
  T6 = CALLN(1,CHKREF(Ylst),4,CHKREF(lit_195),CHKREF(lit_194),CHKREF(lit_190),name_);
  T5 = CALL1(1,CHKREF(Ylst),T6);
  T0 = CALL3(1,CHKREF(YsyntaxYsexpr_make_method),T1,T2,T5);
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
  T2 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLstrG),name_);
  T1 = CALL2(1,CHKREF(YmacrosYcat),T2,CHKREF(lit_197));
  T0 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLsymG),T1);
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_macro_tag));
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_macro_expand_tag));
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
  T1 = CALL2(1,CHKREF(Ylst),pat_,exp_);
  T0 = CALLN(1,CHKREF(Ylst),4,CHKREF(YsyntaxYDsexpr_syntax_if_tag),T1,then_,else_);
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
  T1 = CALL1(1,CHKREF(YsyntaxYsexpr_build_backquote_expander),x_);
  T0 = CALL2(1,CHKREF(YsyntaxYeval),T1,CHKREF(lit_213));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_build_backquote_expander_119) {
  P x_;
  P resF1251;
  P raw_resultF1250;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,CHKREF(YsyntaxYbq_process),x_);
  raw_resultF1250 = T1;
  T3 = CALL1(1,CHKREF(YsyntaxYbq_remove_tokens),raw_resultF1250);
  resF1251 = T3;
  T2 = resF1251;
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),x_,CHKREF(lit_216));
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),x_,CHKREF(lit_218));
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),x_,CHKREF(YsyntaxYDsexpr_quasiquote_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_atomQ_123) {
  P x_;
  P tmpF1252;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,CHKREF(YisaQ),x_,CHKREF(YLlstG));
  T1 = CALL1(1,CHKREF(Ynot),T2);
  tmpF1252 = T1;
  if (tmpF1252 != YPfalse) {
    T3 = tmpF1252;
  } else {
    T4 = CALL2(1,CHKREF(YmacrosYEE),x_,Ynil);
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
  T1 = CALL1(1,CHKREF(YruntimeYrevX),x_);
  T0 = CALL2(1,CHKREF(YruntimeYcatX),T1,y_);
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
  T1 = CALL1(1,CHKREF(YsyntaxYsexpr_atomQ),p_);
  if (T1 != YPfalse) {
    T6 = CALL2(1,CHKREF(Ylst),CHKREF(YsyntaxYTbq_quoteT),p_);
    T5 = CALL1(1,CHKREF(Ylst),T6);
    T4 = CALL2(1,CHKREF(YsyntaxYnreconc),q_,T5);
    T3 = CALL2(1,CHKREF(YmacrosYpair),CHKREF(YsyntaxYTbq_appendT),T4);
    T2 = CALL1(1,FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL1(1,CHKREF(YsyntaxYsexpr_unquoteQ),p_);
    if (T7 != YPfalse) {
      T11 = CALL1(1,CHKREF(Ytail),p_);
      T10 = CALL1(1,CHKREF(Ytail),T11);
      T9 = CALL1(1,CHKREF(YmacrosYemptyQ),T10);
      T8 = CALL1(1,CHKREF(Ynot),T9);
      if (T8 != YPfalse) {
        T12 = CALL2(1,CHKREF(Yerror),CHKREF(lit_227),p_);
      } else {
      }
      T18 = CALL1(1,CHKREF(Ytail),p_);
      T17 = CALL1(1,CHKREF(Yhead),T18);
      T16 = CALL1(1,CHKREF(Ylst),T17);
      T15 = CALL2(1,CHKREF(YsyntaxYnreconc),q_,T16);
      T14 = CALL2(1,CHKREF(YmacrosYpair),CHKREF(YsyntaxYTbq_appendT),T15);
      T13 = CALL1(1,FREEREF(0),T14);
    } else {
    }
    T20 = CALL1(1,CHKREF(Ytail),p_);
    T19 = CALL2(1,CHKREF(YmacrosYEE),T20,CHKREF(YsyntaxYTcomma_atsignT));
    if (T19 != YPfalse) {
      T21 = CALL2(1,CHKREF(Yerror),CHKREF(lit_228),p_);
    } else {
    }
    T23 = CALL1(1,CHKREF(Ytail),p_);
    T26 = CALL1(1,CHKREF(Yhead),p_);
    T25 = CALL1(1,CHKREF(YsyntaxYbracket),T26);
    T24 = CALL2(1,CHKREF(YmacrosYpair),T25,q_);
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
  P loopF1253;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_125,2);
  loopF1253 = T1;
  FUNINIT(loopF1253, 2,return_,loopF1253);
  T2 = CALL2(0,loopF1253,FREEREF(0),Ynil);
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
  T1 = CALL1(1,CHKREF(YsyntaxYsexpr_atomQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,CHKREF(Ylst),CHKREF(YsyntaxYTbq_quoteT),x_);
    T0 = T2;
  } else {
    T4 = CALL1(1,CHKREF(YsyntaxYsexpr_backquoteQ),x_);
    if (T4 != YPfalse) {
      T8 = CALL1(1,CHKREF(Ytail),x_);
      T7 = CALL1(1,CHKREF(Yhead),T8);
      T6 = CALL1(1,CHKREF(YsyntaxYsexpr_build_backquote_expander),T7);
      T5 = CALL1(1,CHKREF(YsyntaxYbq_process),T6);
      T3 = T5;
    } else {
      T10 = CALL1(1,CHKREF(YsyntaxYsexpr_unquoteQ),x_);
      if (T10 != YPfalse) {
        T12 = CALL1(1,CHKREF(Ytail),x_);
        T11 = CALL1(1,CHKREF(Yhead),T12);
        T9 = T11;
      } else {
        T14 = CALL1(1,CHKREF(YsyntaxYsexpr_unquote_splicingQ),x_);
        if (T14 != YPfalse) {
          T18 = CALL0(1,x_);
          T17 = CALL1(1,CHKREF(Ytail),T18);
          T16 = CALL1(1,CHKREF(Yhead),T17);
          T15 = CALL2(1,CHKREF(Yerror),CHKREF(lit_224),T16);
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
  T1 = CALL1(1,CHKREF(YsyntaxYsexpr_atomQ),x_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,CHKREF(YsyntaxYbq_process),x_);
    T2 = CALL2(1,CHKREF(Ylst),CHKREF(YsyntaxYTbq_listT),T3);
    T0 = T2;
  } else {
    T5 = CALL1(1,CHKREF(YsyntaxYsexpr_unquoteQ),x_);
    if (T5 != YPfalse) {
      T8 = CALL1(1,CHKREF(Ytail),x_);
      T7 = CALL1(1,CHKREF(Yhead),T8);
      T6 = CALL2(1,CHKREF(Ylst),CHKREF(YsyntaxYTbq_listT),T7);
      T4 = T6;
    } else {
      T10 = CALL1(1,CHKREF(YsyntaxYsexpr_unquote_splicingQ),x_);
      if (T10 != YPfalse) {
        T13 = CALL1(1,CHKREF(Ytail),x_);
        T12 = CALL1(1,CHKREF(Yhead),T13);
        T11 = CALL2(1,CHKREF(Ylst),CHKREF(YsyntaxYTbq_clobberableT),T12);
        T9 = T11;
      } else {
        if (YPtrue != YPfalse) {
          T16 = CALL1(1,CHKREF(YsyntaxYbq_process),x_);
          T15 = CALL2(1,CHKREF(Ylst),CHKREF(YsyntaxYTbq_listT),T16);
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
  P tmpF1256;
  P dF1255;
  P aF1254;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(fn_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,CHKREF(YsyntaxYsexpr_atomQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,fn_,x_);
    T0 = T2;
  } else {
    T5 = CALL1(1,CHKREF(Yhead),x_);
    T4 = CALL1(1,fn_,T5);
    aF1254 = T4;
    T8 = CALL1(1,CHKREF(Ytail),x_);
    T7 = CALL2(1,CHKREF(YsyntaxYmap_tree),fn_,T8);
    dF1255 = T7;
    T12 = CALL1(1,CHKREF(Yhead),x_);
    T11 = CALL2(1,CHKREF(YruntimeYE),aF1254,T12);
    tmpF1256 = T11;
    if (tmpF1256 != YPfalse) {
      T15 = CALL1(1,CHKREF(Ytail),x_);
      T14 = CALL2(1,CHKREF(YruntimeYE),dF1255,T15);
      T13 = T14;
    } else {
      T13 = YPfalse;
    }
    T10 = T13;
    if (T10 != YPfalse) {
      T9 = x_;
    } else {
      T16 = CALL2(1,CHKREF(YmacrosYpair),aF1254,dF1255);
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
  P tmpF1258;
  P tmpF1257;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YmacrosYEE),x_,CHKREF(YsyntaxYTbq_listT));
  if (T1 != YPfalse) {
    T0 = CHKREF(lit_107);
  } else {
    T3 = CALL2(1,CHKREF(YmacrosYEE),x_,CHKREF(YsyntaxYTbq_appendT));
    if (T3 != YPfalse) {
      T2 = CHKREF(lit_233);
    } else {
      T5 = CALL2(1,CHKREF(YmacrosYEE),x_,CHKREF(YsyntaxYTbq_nconcT));
      if (T5 != YPfalse) {
        T4 = CHKREF(lit_234);
      } else {
        T7 = CALL2(1,CHKREF(YmacrosYEE),x_,CHKREF(YsyntaxYTbq_listTT));
        if (T7 != YPfalse) {
          T6 = CHKREF(lit_235);
        } else {
          T9 = CALL2(1,CHKREF(YmacrosYEE),x_,CHKREF(YsyntaxYTbq_quoteT));
          if (T9 != YPfalse) {
            T8 = CHKREF(lit_5);
          } else {
            T11 = CALL1(1,CHKREF(YsyntaxYsexpr_atomQ),x_);
            if (T11 != YPfalse) {
              T10 = x_;
            } else {
              T14 = CALL1(1,CHKREF(Yhead),x_);
              T13 = CALL2(1,CHKREF(YmacrosYEE),T14,CHKREF(YsyntaxYTbq_clobberableT));
              if (T13 != YPfalse) {
                T17 = CALL1(1,CHKREF(Ytail),x_);
                T16 = CALL1(1,CHKREF(Yhead),T17);
                T15 = CALL1(1,CHKREF(YsyntaxYbq_remove_tokens),T16);
                T12 = T15;
              } else {
                T21 = CALL1(1,CHKREF(Yhead),x_);
                T20 = CALL2(1,CHKREF(YmacrosYEE),T21,CHKREF(YsyntaxYTbq_listTT));
                tmpF1257 = T20;
                if (tmpF1257 != YPfalse) {
                  T27 = CALL1(1,CHKREF(Ytail),x_);
                  T26 = CALL1(1,CHKREF(Ytail),T27);
                  T25 = CALL1(1,CHKREF(YmacrosYemptyQ),T26);
                  T24 = CALL1(1,CHKREF(Ynot),T25);
                  tmpF1258 = T24;
                  if (tmpF1258 != YPfalse) {
                    T32 = CALL1(1,CHKREF(Ytail),x_);
                    T31 = CALL1(1,CHKREF(Ytail),T32);
                    T30 = CALL1(1,CHKREF(Ytail),T31);
                    T29 = CALL1(1,CHKREF(YmacrosYemptyQ),T30);
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
                  T35 = CALL1(1,CHKREF(Ytail),x_);
                  T34 = CALL2(1,CHKREF(YsyntaxYmap_tree),CHKREF(YsyntaxYbq_remove_tokens),T35);
                  T33 = CALL2(1,CHKREF(YmacrosYpair),CHKREF(lit_236),T34);
                  T18 = T33;
                } else {
                  if (YPtrue != YPfalse) {
                    T37 = CALL2(1,CHKREF(YsyntaxYmap_tree),CHKREF(YsyntaxYbq_remove_tokens),x_);
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
  T0 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_syntax_if_tag));
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
  T1 = CALL1(1,CHKREF(YruntimeY2nd),exp_);
  T0 = CALL1(1,CHKREF(YruntimeY2nd),T1);
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
  T1 = CALL1(1,CHKREF(YruntimeY2nd),exp_);
  T0 = CALL1(1,CHKREF(YruntimeY1st),T1);
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
  T0 = CALL1(1,CHKREF(YruntimeY3rd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_else_135) {
  P exp_;
  P altF1259;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYelt),exp_,YPint((P)3));
  altF1259 = T1;
  T3 = CALL2(1,CHKREF(YmacrosYEE),altF1259,CHKREF(Ynul));
  if (T3 != YPfalse) {
    T2 = YPfalse;
  } else {
    T2 = altF1259;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_pattern_variableQ_136) {
  P pat_;
  P tmpF1260;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T1 = CALL1(1,CHKREF(YsyntaxYsexpr_unquoteQ),pat_);
  tmpF1260 = T1;
  if (tmpF1260 != YPfalse) {
    T2 = tmpF1260;
  } else {
    T3 = CALL1(1,CHKREF(YsyntaxYsexpr_unquote_splicingQ),pat_);
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
  T0 = CALL1(1,CHKREF(YruntimeY2nd),pat_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_col_138) {
  P pat_;
  P xF1262;
  P tmpF1261;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T3 = CALL2(1,CHKREF(YisaQ),pat_,CHKREF(YLlstG));
  T2 = CALL1(1,CHKREF(Ynot),T3);
  tmpF1261 = T2;
  if (tmpF1261 != YPfalse) {
    T4 = tmpF1261;
  } else {
    T5 = CALL1(1,CHKREF(YmacrosYemptyQ),pat_);
    T4 = T5;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T7 = CALL1(1,CHKREF(Yhead),pat_);
    xF1262 = T7;
    T9 = CALL1(1,CHKREF(YsyntaxYsexpr_pattern_variableQ),xF1262);
    if (T9 != YPfalse) {
      T11 = CALL1(1,CHKREF(YsyntaxYsexpr_pattern_variable_name),xF1262);
      T13 = CALL1(1,CHKREF(Ytail),pat_);
      T12 = CALL1(0,FREEREF(0),T13);
      T10 = CALL2(1,CHKREF(YmacrosYpair),T11,T12);
      T8 = T10;
    } else {
      T16 = CALL1(1,CHKREF(Yhead),pat_);
      T15 = CALL1(0,FREEREF(0),T16);
      T18 = CALL1(1,CHKREF(Ytail),pat_);
      T17 = CALL1(0,FREEREF(0),T18);
      T14 = CALL2(1,CHKREF(YmacrosYcat),T15,T17);
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
  P colF1263;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T2 = FUNSHELL(1,fun_col_138,1);
  colF1263 = T2;
  FUNINIT(colF1263, 1,colF1263);
  T3 = CALL1(0,colF1263,pat_);
  T1 = T3;
  T0 = CALL1(1,CHKREF(YruntimeYdel_dups),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_macro_function_140) {
  P exp_;
  P funcF1265;
  P mifF1264;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T2 = CALL1(1,CHKREF(YsyntaxYsexpr_method_parameters),exp_);
  T4 = CALL1(1,CHKREF(YsyntaxYsexpr_method_body),exp_);
  T3 = CALL1(1,CHKREF(YsyntaxYsexpr_sequence_Gbegin),T4);
  T1 = CALLN(1,CHKREF(YsyntaxYsexpr_make_syntax_if),4,T2,CHKREF(lit_1),T3,YPfalse);
  mifF1264 = T1;
  T7 = CALL1(1,CHKREF(Ylst),CHKREF(lit_1));
  T8 = CALL1(1,CHKREF(Ylst),mifF1264);
  T6 = CALL2(1,CHKREF(YsyntaxYsexpr_make_anonymous_method),T7,T8);
  funcF1265 = T6;
  T5 = funcF1265;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

P YsyntaxY___main_0___() {
  P T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228,T227;
  P T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212,T211;
  P T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196,T195;
  P T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180,T179;
  P T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163;
  P T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147;
  P T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131;
  P T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115;
  P T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99;
  P T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83;
  P T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67;
  P T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51;
  P T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"sexpr-self-evaluating?");
  lit_1 = YPPsym((P)"exp");
  T0 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_self_evaluatingQ_0 = YPmet(FUNCODEREF(fun_sexpr_self_evaluatingQ_0),CHKREF(lit_0),T0,ENVNUL);
  T3 = BOUNDP(YsyntaxYsexpr_self_evaluatingQ);
  if (T3 != YPfalse) {
    T2 = CHKREF(YsyntaxYsexpr_self_evaluatingQ);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_self_evaluatingQ_0;
  T1 = CALL2(1,CHKREF(YPdefine_method),T2,T4);
  YsyntaxYsexpr_self_evaluatingQ = T1;
  lit_2 = YPPsym((P)"sexpr-variable?");
  T5 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_variableQ_1 = YPmet(FUNCODEREF(fun_sexpr_variableQ_1),CHKREF(lit_2),T5,ENVNUL);
  T8 = BOUNDP(YsyntaxYsexpr_variableQ);
  if (T8 != YPfalse) {
    T7 = CHKREF(YsyntaxYsexpr_variableQ);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_variableQ_1;
  T6 = CALL2(1,CHKREF(YPdefine_method),T7,T9);
  YsyntaxYsexpr_variableQ = T6;
  lit_3 = YPPsym((P)"sexpr-tagged-list?");
  lit_4 = YPPsym((P)"tag");
  T10 = YPsig(YPPlist(2,CHKREF(lit_1),CHKREF(lit_4)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_sexpr_tagged_listQ_2 = YPmet(FUNCODEREF(fun_sexpr_tagged_listQ_2),CHKREF(lit_3),T10,ENVNUL);
  T13 = BOUNDP(YsyntaxYsexpr_tagged_listQ);
  if (T13 != YPfalse) {
    T12 = CHKREF(YsyntaxYsexpr_tagged_listQ);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_sexpr_tagged_listQ_2;
  T11 = CALL2(1,CHKREF(YPdefine_method),T12,T14);
  YsyntaxYsexpr_tagged_listQ = T11;
  lit_5 = YPPsym((P)"quote");
  YsyntaxYDsexpr_quote_tag = CHKREF(lit_5);
  lit_6 = YPPsym((P)"sexpr-quoted?");
  T15 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_quotedQ_3 = YPmet(FUNCODEREF(fun_sexpr_quotedQ_3),CHKREF(lit_6),T15,ENVNUL);
  T18 = BOUNDP(YsyntaxYsexpr_quotedQ);
  if (T18 != YPfalse) {
    T17 = CHKREF(YsyntaxYsexpr_quotedQ);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_sexpr_quotedQ_3;
  T16 = CALL2(1,CHKREF(YPdefine_method),T17,T19);
  YsyntaxYsexpr_quotedQ = T16;
  lit_7 = YPPsym((P)"sexpr-make-quote");
  T20 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_make_quote_4 = YPmet(FUNCODEREF(fun_sexpr_make_quote_4),CHKREF(lit_7),T20,ENVNUL);
  T23 = BOUNDP(YsyntaxYsexpr_make_quote);
  if (T23 != YPfalse) {
    T22 = CHKREF(YsyntaxYsexpr_make_quote);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_sexpr_make_quote_4;
  T21 = CALL2(1,CHKREF(YPdefine_method),T22,T24);
  YsyntaxYsexpr_make_quote = T21;
  lit_8 = YPPsym((P)"sexpr-text-of-quotation");
  lit_9 = YPPsym((P)"quot");
  T25 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_text_of_quotation_5 = YPmet(FUNCODEREF(fun_sexpr_text_of_quotation_5),CHKREF(lit_8),T25,ENVNUL);
  T28 = BOUNDP(YsyntaxYsexpr_text_of_quotation);
  if (T28 != YPfalse) {
    T27 = CHKREF(YsyntaxYsexpr_text_of_quotation);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_sexpr_text_of_quotation_5;
  T26 = CALL2(1,CHKREF(YPdefine_method),T27,T29);
  YsyntaxYsexpr_text_of_quotation = T26;
  lit_10 = YPPsym((P)"set");
  YsyntaxYDsexpr_set_tag = CHKREF(lit_10);
  lit_11 = YPPsym((P)"sexpr-assignment?");
  T30 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_assignmentQ_6 = YPmet(FUNCODEREF(fun_sexpr_assignmentQ_6),CHKREF(lit_11),T30,ENVNUL);
  T33 = BOUNDP(YsyntaxYsexpr_assignmentQ);
  if (T33 != YPfalse) {
    T32 = CHKREF(YsyntaxYsexpr_assignmentQ);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_sexpr_assignmentQ_6;
  T31 = CALL2(1,CHKREF(YPdefine_method),T32,T34);
  YsyntaxYsexpr_assignmentQ = T31;
  lit_12 = YPPsym((P)"sexpr-assignment-variable");
  lit_13 = YPPsym((P)"assn");
  T35 = YPsig(YPPlist(1,CHKREF(lit_13)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_assignment_variable_7 = YPmet(FUNCODEREF(fun_sexpr_assignment_variable_7),CHKREF(lit_12),T35,ENVNUL);
  T38 = BOUNDP(YsyntaxYsexpr_assignment_variable);
  if (T38 != YPfalse) {
    T37 = CHKREF(YsyntaxYsexpr_assignment_variable);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_sexpr_assignment_variable_7;
  T36 = CALL2(1,CHKREF(YPdefine_method),T37,T39);
  YsyntaxYsexpr_assignment_variable = T36;
  lit_14 = YPPsym((P)"sexpr-assignment-value");
  T40 = YPsig(YPPlist(1,CHKREF(lit_13)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_assignment_value_8 = YPmet(FUNCODEREF(fun_sexpr_assignment_value_8),CHKREF(lit_14),T40,ENVNUL);
  T43 = BOUNDP(YsyntaxYsexpr_assignment_value);
  if (T43 != YPfalse) {
    T42 = CHKREF(YsyntaxYsexpr_assignment_value);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_sexpr_assignment_value_8;
  T41 = CALL2(1,CHKREF(YPdefine_method),T42,T44);
  YsyntaxYsexpr_assignment_value = T41;
  lit_15 = YPPsym((P)"sexpr-variable-name");
  T45 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_variable_name_9 = YPmet(FUNCODEREF(fun_sexpr_variable_name_9),CHKREF(lit_15),T45,ENVNUL);
  T48 = BOUNDP(YsyntaxYsexpr_variable_name);
  if (T48 != YPfalse) {
    T47 = CHKREF(YsyntaxYsexpr_variable_name);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_sexpr_variable_name_9;
  T46 = CALL2(1,CHKREF(YPdefine_method),T47,T49);
  YsyntaxYsexpr_variable_name = T46;
  T50 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_variable_name_10 = YPmet(FUNCODEREF(fun_sexpr_variable_name_10),CHKREF(lit_15),T50,ENVNUL);
  T53 = BOUNDP(YsyntaxYsexpr_variable_name);
  if (T53 != YPfalse) {
    T52 = CHKREF(YsyntaxYsexpr_variable_name);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_sexpr_variable_name_10;
  T51 = CALL2(1,CHKREF(YPdefine_method),T52,T54);
  YsyntaxYsexpr_variable_name = T51;
  lit_16 = YPPsym((P)"sexpr-variable-type");
  T55 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_variable_type_11 = YPmet(FUNCODEREF(fun_sexpr_variable_type_11),CHKREF(lit_16),T55,ENVNUL);
  T58 = BOUNDP(YsyntaxYsexpr_variable_type);
  if (T58 != YPfalse) {
    T57 = CHKREF(YsyntaxYsexpr_variable_type);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_sexpr_variable_type_11;
  T56 = CALL2(1,CHKREF(YPdefine_method),T57,T59);
  YsyntaxYsexpr_variable_type = T56;
  lit_17 = YPPsym((P)"<any>");
  T60 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_variable_type_12 = YPmet(FUNCODEREF(fun_sexpr_variable_type_12),CHKREF(lit_16),T60,ENVNUL);
  T63 = BOUNDP(YsyntaxYsexpr_variable_type);
  if (T63 != YPfalse) {
    T62 = CHKREF(YsyntaxYsexpr_variable_type);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_sexpr_variable_type_12;
  T61 = CALL2(1,CHKREF(YPdefine_method),T62,T64);
  YsyntaxYsexpr_variable_type = T61;
  lit_18 = YPPsym((P)"dv");
  YsyntaxYDsexpr_define_tag = CHKREF(lit_18);
  lit_19 = YPPsym((P)"sexpr-definition?");
  T65 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_definitionQ_13 = YPmet(FUNCODEREF(fun_sexpr_definitionQ_13),CHKREF(lit_19),T65,ENVNUL);
  T68 = BOUNDP(YsyntaxYsexpr_definitionQ);
  if (T68 != YPfalse) {
    T67 = CHKREF(YsyntaxYsexpr_definitionQ);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_sexpr_definitionQ_13;
  T66 = CALL2(1,CHKREF(YPdefine_method),T67,T69);
  YsyntaxYsexpr_definitionQ = T66;
  lit_20 = YPPsym((P)"quasiquote");
  YsyntaxYDsexpr_quasiquote_tag = CHKREF(lit_20);
  lit_21 = YPPsym((P)"sexpr-definition-variable");
  lit_22 = YPPsym((P)"defn");
  T70 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_definition_variable_14 = YPmet(FUNCODEREF(fun_sexpr_definition_variable_14),CHKREF(lit_21),T70,ENVNUL);
  T73 = BOUNDP(YsyntaxYsexpr_definition_variable);
  if (T73 != YPfalse) {
    T72 = CHKREF(YsyntaxYsexpr_definition_variable);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_sexpr_definition_variable_14;
  T71 = CALL2(1,CHKREF(YPdefine_method),T72,T74);
  YsyntaxYsexpr_definition_variable = T71;
  lit_23 = YPPsym((P)"sexpr-definition-value");
  T75 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_definition_value_15 = YPmet(FUNCODEREF(fun_sexpr_definition_value_15),CHKREF(lit_23),T75,ENVNUL);
  T78 = BOUNDP(YsyntaxYsexpr_definition_value);
  if (T78 != YPfalse) {
    T77 = CHKREF(YsyntaxYsexpr_definition_value);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_sexpr_definition_value_15;
  T76 = CALL2(1,CHKREF(YPdefine_method),T77,T79);
  YsyntaxYsexpr_definition_value = T76;
  lit_24 = YPPsym((P)"ds");
  YsyntaxYDsexpr_define_syntax_tag = CHKREF(lit_24);
  lit_25 = YPPsym((P)"sexpr-syntax-definition?");
  T80 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_syntax_definitionQ_16 = YPmet(FUNCODEREF(fun_sexpr_syntax_definitionQ_16),CHKREF(lit_25),T80,ENVNUL);
  T83 = BOUNDP(YsyntaxYsexpr_syntax_definitionQ);
  if (T83 != YPfalse) {
    T82 = CHKREF(YsyntaxYsexpr_syntax_definitionQ);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_sexpr_syntax_definitionQ_16;
  T81 = CALL2(1,CHKREF(YPdefine_method),T82,T84);
  YsyntaxYsexpr_syntax_definitionQ = T81;
  lit_26 = YPPsym((P)"mac");
  YsyntaxYDsexpr_macro_tag = CHKREF(lit_26);
  lit_27 = YPPsym((P)"sexpr-syntax-definition-variable");
  T85 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_syntax_definition_variable_17 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_variable_17),CHKREF(lit_27),T85,ENVNUL);
  T88 = BOUNDP(YsyntaxYsexpr_syntax_definition_variable);
  if (T88 != YPfalse) {
    T87 = CHKREF(YsyntaxYsexpr_syntax_definition_variable);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_sexpr_syntax_definition_variable_17;
  T86 = CALL2(1,CHKREF(YPdefine_method),T87,T89);
  YsyntaxYsexpr_syntax_definition_variable = T86;
  lit_28 = YPPsym((P)"sexpr-syntax-definition-value");
  T90 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_syntax_definition_value_18 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_value_18),CHKREF(lit_28),T90,ENVNUL);
  T93 = BOUNDP(YsyntaxYsexpr_syntax_definition_value);
  if (T93 != YPfalse) {
    T92 = CHKREF(YsyntaxYsexpr_syntax_definition_value);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_sexpr_syntax_definition_value_18;
  T91 = CALL2(1,CHKREF(YPdefine_method),T92,T94);
  YsyntaxYsexpr_syntax_definition_value = T91;
  lit_29 = YPPsym((P)"df");
  YsyntaxYDsexpr_define_function_tag = CHKREF(lit_29);
  lit_30 = YPPsym((P)"sexpr-function-definition?");
  T95 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_function_definitionQ_19 = YPmet(FUNCODEREF(fun_sexpr_function_definitionQ_19),CHKREF(lit_30),T95,ENVNUL);
  T98 = BOUNDP(YsyntaxYsexpr_function_definitionQ);
  if (T98 != YPfalse) {
    T97 = CHKREF(YsyntaxYsexpr_function_definitionQ);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_sexpr_function_definitionQ_19;
  T96 = CALL2(1,CHKREF(YPdefine_method),T97,T99);
  YsyntaxYsexpr_function_definitionQ = T96;
  lit_31 = YPPsym((P)"dm");
  YsyntaxYDsexpr_define_method_tag = CHKREF(lit_31);
  lit_32 = YPPsym((P)"sexpr-method-definition?");
  T100 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_method_definitionQ_20 = YPmet(FUNCODEREF(fun_sexpr_method_definitionQ_20),CHKREF(lit_32),T100,ENVNUL);
  T103 = BOUNDP(YsyntaxYsexpr_method_definitionQ);
  if (T103 != YPfalse) {
    T102 = CHKREF(YsyntaxYsexpr_method_definitionQ);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_sexpr_method_definitionQ_20;
  T101 = CALL2(1,CHKREF(YPdefine_method),T102,T104);
  YsyntaxYsexpr_method_definitionQ = T101;
  lit_33 = YPPsym((P)"dg");
  YsyntaxYDsexpr_define_generic_tag = CHKREF(lit_33);
  lit_34 = YPPsym((P)"sexpr-generic-definition?");
  T105 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_generic_definitionQ_21 = YPmet(FUNCODEREF(fun_sexpr_generic_definitionQ_21),CHKREF(lit_34),T105,ENVNUL);
  T108 = BOUNDP(YsyntaxYsexpr_generic_definitionQ);
  if (T108 != YPfalse) {
    T107 = CHKREF(YsyntaxYsexpr_generic_definitionQ);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_sexpr_generic_definitionQ_21;
  T106 = CALL2(1,CHKREF(YPdefine_method),T107,T109);
  YsyntaxYsexpr_generic_definitionQ = T106;
  lit_35 = YPPsym((P)"sexpr-function-definition-variable");
  T110 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_function_definition_variable_22 = YPmet(FUNCODEREF(fun_sexpr_function_definition_variable_22),CHKREF(lit_35),T110,ENVNUL);
  T113 = BOUNDP(YsyntaxYsexpr_function_definition_variable);
  if (T113 != YPfalse) {
    T112 = CHKREF(YsyntaxYsexpr_function_definition_variable);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_sexpr_function_definition_variable_22;
  T111 = CALL2(1,CHKREF(YPdefine_method),T112,T114);
  YsyntaxYsexpr_function_definition_variable = T111;
  lit_36 = YPPsym((P)"sexpr-forward-primitive?");
  T115 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_forward_primitiveQ_23 = YPmet(FUNCODEREF(fun_sexpr_forward_primitiveQ_23),CHKREF(lit_36),T115,ENVNUL);
  T118 = BOUNDP(YsyntaxYsexpr_forward_primitiveQ);
  if (T118 != YPfalse) {
    T117 = CHKREF(YsyntaxYsexpr_forward_primitiveQ);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_sexpr_forward_primitiveQ_23;
  T116 = CALL2(1,CHKREF(YPdefine_method),T117,T119);
  YsyntaxYsexpr_forward_primitiveQ = T116;
  lit_37 = YPPsym((P)"sexpr-signature-parameters");
  lit_38 = YPPsym((P)"signature");
  lit_39 = YPPsym((P)"=>");
  T120 = YPsig(YPPlist(1,CHKREF(lit_38)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_signature_parameters_24 = YPmet(FUNCODEREF(fun_sexpr_signature_parameters_24),CHKREF(lit_37),T120,ENVNUL);
  T123 = BOUNDP(YsyntaxYsexpr_signature_parameters);
  if (T123 != YPfalse) {
    T122 = CHKREF(YsyntaxYsexpr_signature_parameters);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_sexpr_signature_parameters_24;
  T121 = CALL2(1,CHKREF(YPdefine_method),T122,T124);
  YsyntaxYsexpr_signature_parameters = T121;
  lit_40 = YPPsym((P)"sexpr-signature-value");
  lit_41 = YPPsym((P)"tup");
  lit_42 = YPPsym((P)"<tup>");
  T125 = YPsig(YPPlist(1,CHKREF(lit_38)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_signature_value_25 = YPmet(FUNCODEREF(fun_sexpr_signature_value_25),CHKREF(lit_40),T125,ENVNUL);
  T128 = BOUNDP(YsyntaxYsexpr_signature_value);
  if (T128 != YPfalse) {
    T127 = CHKREF(YsyntaxYsexpr_signature_value);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_sexpr_signature_value_25;
  T126 = CALL2(1,CHKREF(YPdefine_method),T127,T129);
  YsyntaxYsexpr_signature_value = T126;
  lit_43 = YPPsym((P)"sexpr-function-signature");
  T130 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_function_signature_26 = YPmet(FUNCODEREF(fun_sexpr_function_signature_26),CHKREF(lit_43),T130,ENVNUL);
  T133 = BOUNDP(YsyntaxYsexpr_function_signature);
  if (T133 != YPfalse) {
    T132 = CHKREF(YsyntaxYsexpr_function_signature);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_sexpr_function_signature_26;
  T131 = CALL2(1,CHKREF(YPdefine_method),T132,T134);
  YsyntaxYsexpr_function_signature = T131;
  lit_44 = YPPsym((P)"sexpr-function-parameters");
  T135 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_function_parameters_27 = YPmet(FUNCODEREF(fun_sexpr_function_parameters_27),CHKREF(lit_44),T135,ENVNUL);
  T138 = BOUNDP(YsyntaxYsexpr_function_parameters);
  if (T138 != YPfalse) {
    T137 = CHKREF(YsyntaxYsexpr_function_parameters);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_sexpr_function_parameters_27;
  T136 = CALL2(1,CHKREF(YPdefine_method),T137,T139);
  YsyntaxYsexpr_function_parameters = T136;
  lit_45 = YPPsym((P)"sexpr-function-value");
  T140 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_function_value_28 = YPmet(FUNCODEREF(fun_sexpr_function_value_28),CHKREF(lit_45),T140,ENVNUL);
  T143 = BOUNDP(YsyntaxYsexpr_function_value);
  if (T143 != YPfalse) {
    T142 = CHKREF(YsyntaxYsexpr_function_value);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_sexpr_function_value_28;
  T141 = CALL2(1,CHKREF(YPdefine_method),T142,T144);
  YsyntaxYsexpr_function_value = T141;
  lit_46 = YPPsym((P)"sexpr-function-body");
  T145 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_function_body_29 = YPmet(FUNCODEREF(fun_sexpr_function_body_29),CHKREF(lit_46),T145,ENVNUL);
  T148 = BOUNDP(YsyntaxYsexpr_function_body);
  if (T148 != YPfalse) {
    T147 = CHKREF(YsyntaxYsexpr_function_body);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_sexpr_function_body_29;
  T146 = CALL2(1,CHKREF(YPdefine_method),T147,T149);
  YsyntaxYsexpr_function_body = T146;
  lit_47 = YPPsym((P)"fun");
  YsyntaxYDsexpr_method_tag = CHKREF(lit_47);
  lit_48 = YPPsym((P)"sexpr-function-definition-value");
  T150 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_function_definition_value_30 = YPmet(FUNCODEREF(fun_sexpr_function_definition_value_30),CHKREF(lit_48),T150,ENVNUL);
  T153 = BOUNDP(YsyntaxYsexpr_function_definition_value);
  if (T153 != YPfalse) {
    T152 = CHKREF(YsyntaxYsexpr_function_definition_value);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_sexpr_function_definition_value_30;
  T151 = CALL2(1,CHKREF(YPdefine_method),T152,T154);
  YsyntaxYsexpr_function_definition_value = T151;
  lit_49 = YPPsym((P)"sexpr-method?");
  T155 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_methodQ_31 = YPmet(FUNCODEREF(fun_sexpr_methodQ_31),CHKREF(lit_49),T155,ENVNUL);
  T158 = BOUNDP(YsyntaxYsexpr_methodQ);
  if (T158 != YPfalse) {
    T157 = CHKREF(YsyntaxYsexpr_methodQ);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_sexpr_methodQ_31;
  T156 = CALL2(1,CHKREF(YPdefine_method),T157,T159);
  YsyntaxYsexpr_methodQ = T156;
  lit_50 = YPPsym((P)"sexpr-method-signature");
  lit_51 = YPPsym((P)"method-exp");
  T160 = YPsig(YPPlist(1,CHKREF(lit_51)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_method_signature_32 = YPmet(FUNCODEREF(fun_sexpr_method_signature_32),CHKREF(lit_50),T160,ENVNUL);
  T163 = BOUNDP(YsyntaxYsexpr_method_signature);
  if (T163 != YPfalse) {
    T162 = CHKREF(YsyntaxYsexpr_method_signature);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_sexpr_method_signature_32;
  T161 = CALL2(1,CHKREF(YPdefine_method),T162,T164);
  YsyntaxYsexpr_method_signature = T161;
  lit_52 = YPPsym((P)"sexpr-method-parameters");
  T165 = YPsig(YPPlist(1,CHKREF(lit_51)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_method_parameters_33 = YPmet(FUNCODEREF(fun_sexpr_method_parameters_33),CHKREF(lit_52),T165,ENVNUL);
  T168 = BOUNDP(YsyntaxYsexpr_method_parameters);
  if (T168 != YPfalse) {
    T167 = CHKREF(YsyntaxYsexpr_method_parameters);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_sexpr_method_parameters_33;
  T166 = CALL2(1,CHKREF(YPdefine_method),T167,T169);
  YsyntaxYsexpr_method_parameters = T166;
  lit_53 = YPPsym((P)"sexpr-method-value");
  T170 = YPsig(YPPlist(1,CHKREF(lit_51)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_method_value_34 = YPmet(FUNCODEREF(fun_sexpr_method_value_34),CHKREF(lit_53),T170,ENVNUL);
  T173 = BOUNDP(YsyntaxYsexpr_method_value);
  if (T173 != YPfalse) {
    T172 = CHKREF(YsyntaxYsexpr_method_value);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_sexpr_method_value_34;
  T171 = CALL2(1,CHKREF(YPdefine_method),T172,T174);
  YsyntaxYsexpr_method_value = T171;
  lit_54 = YPPsym((P)"sexpr-method-body");
  T175 = YPsig(YPPlist(1,CHKREF(lit_51)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_method_body_35 = YPmet(FUNCODEREF(fun_sexpr_method_body_35),CHKREF(lit_54),T175,ENVNUL);
  T178 = BOUNDP(YsyntaxYsexpr_method_body);
  if (T178 != YPfalse) {
    T177 = CHKREF(YsyntaxYsexpr_method_body);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_sexpr_method_body_35;
  T176 = CALL2(1,CHKREF(YPdefine_method),T177,T179);
  YsyntaxYsexpr_method_body = T176;
  lit_55 = YPPsym((P)"sexpr-make-anonymous-method");
  lit_56 = YPPsym((P)"parameters");
  lit_57 = YPPsym((P)"body");
  T180 = YPsig(YPPlist(2,CHKREF(lit_56),CHKREF(lit_57)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  fun_sexpr_make_anonymous_method_36 = YPmet(FUNCODEREF(fun_sexpr_make_anonymous_method_36),CHKREF(lit_55),T180,ENVNUL);
  T183 = BOUNDP(YsyntaxYsexpr_make_anonymous_method);
  if (T183 != YPfalse) {
    T182 = CHKREF(YsyntaxYsexpr_make_anonymous_method);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_sexpr_make_anonymous_method_36;
  T181 = CALL2(1,CHKREF(YPdefine_method),T182,T184);
  YsyntaxYsexpr_make_anonymous_method = T181;
  lit_58 = YPPsym((P)"sexpr-make-method");
  lit_59 = YPPsym((P)"name");
  T185 = YPsig(YPPlist(3,CHKREF(lit_59),CHKREF(lit_56),CHKREF(lit_57)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)3),CHKREF(YLlstG),Ynil);
  fun_sexpr_make_method_37 = YPmet(FUNCODEREF(fun_sexpr_make_method_37),CHKREF(lit_58),T185,ENVNUL);
  T188 = BOUNDP(YsyntaxYsexpr_make_method);
  if (T188 != YPfalse) {
    T187 = CHKREF(YsyntaxYsexpr_make_method);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_sexpr_make_method_37;
  T186 = CALL2(1,CHKREF(YPdefine_method),T187,T189);
  YsyntaxYsexpr_make_method = T186;
  lit_60 = YPPsym((P)"if");
  YsyntaxYDsexpr_if_tag = CHKREF(lit_60);
  lit_61 = YPPsym((P)"sexpr-if?");
  T190 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_ifQ_38 = YPmet(FUNCODEREF(fun_sexpr_ifQ_38),CHKREF(lit_61),T190,ENVNUL);
  T193 = BOUNDP(YsyntaxYsexpr_ifQ);
  if (T193 != YPfalse) {
    T192 = CHKREF(YsyntaxYsexpr_ifQ);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_sexpr_ifQ_38;
  T191 = CALL2(1,CHKREF(YPdefine_method),T192,T194);
  YsyntaxYsexpr_ifQ = T191;
  lit_62 = YPPsym((P)"sexpr-if-test");
  T195 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_if_test_39 = YPmet(FUNCODEREF(fun_sexpr_if_test_39),CHKREF(lit_62),T195,ENVNUL);
  T198 = BOUNDP(YsyntaxYsexpr_if_test);
  if (T198 != YPfalse) {
    T197 = CHKREF(YsyntaxYsexpr_if_test);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_sexpr_if_test_39;
  T196 = CALL2(1,CHKREF(YPdefine_method),T197,T199);
  YsyntaxYsexpr_if_test = T196;
  lit_63 = YPPsym((P)"sexpr-if-then");
  T200 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_if_then_40 = YPmet(FUNCODEREF(fun_sexpr_if_then_40),CHKREF(lit_63),T200,ENVNUL);
  T203 = BOUNDP(YsyntaxYsexpr_if_then);
  if (T203 != YPfalse) {
    T202 = CHKREF(YsyntaxYsexpr_if_then);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_sexpr_if_then_40;
  T201 = CALL2(1,CHKREF(YPdefine_method),T202,T204);
  YsyntaxYsexpr_if_then = T201;
  lit_64 = YPPsym((P)"sexpr-if-else");
  T205 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_if_else_41 = YPmet(FUNCODEREF(fun_sexpr_if_else_41),CHKREF(lit_64),T205,ENVNUL);
  T208 = BOUNDP(YsyntaxYsexpr_if_else);
  if (T208 != YPfalse) {
    T207 = CHKREF(YsyntaxYsexpr_if_else);
  } else {
    T207 = YPfalse;
  }
  T209 = fun_sexpr_if_else_41;
  T206 = CALL2(1,CHKREF(YPdefine_method),T207,T209);
  YsyntaxYsexpr_if_else = T206;
  lit_65 = YPPsym((P)"sexpr-make-if");
  lit_66 = YPPsym((P)"test");
  lit_67 = YPPsym((P)"then");
  lit_68 = YPPsym((P)"else");
  T210 = YPsig(YPPlist(3,CHKREF(lit_66),CHKREF(lit_67),CHKREF(lit_68)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLlstG),Ynil);
  fun_sexpr_make_if_42 = YPmet(FUNCODEREF(fun_sexpr_make_if_42),CHKREF(lit_65),T210,ENVNUL);
  T213 = BOUNDP(YsyntaxYsexpr_make_if);
  if (T213 != YPfalse) {
    T212 = CHKREF(YsyntaxYsexpr_make_if);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_sexpr_make_if_42;
  T211 = CALL2(1,CHKREF(YPdefine_method),T212,T214);
  YsyntaxYsexpr_make_if = T211;
  lit_69 = YPPsym((P)"lab");
  YsyntaxYDsexpr_bind_exit_tag = CHKREF(lit_69);
  lit_70 = YPPsym((P)"sexpr-block?");
  T215 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_blockQ_43 = YPmet(FUNCODEREF(fun_sexpr_blockQ_43),CHKREF(lit_70),T215,ENVNUL);
  T218 = BOUNDP(YsyntaxYsexpr_blockQ);
  if (T218 != YPfalse) {
    T217 = CHKREF(YsyntaxYsexpr_blockQ);
  } else {
    T217 = YPfalse;
  }
  T219 = fun_sexpr_blockQ_43;
  T216 = CALL2(1,CHKREF(YPdefine_method),T217,T219);
  YsyntaxYsexpr_blockQ = T216;
  lit_71 = YPPsym((P)"sexpr-block-name");
  T220 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_block_name_44 = YPmet(FUNCODEREF(fun_sexpr_block_name_44),CHKREF(lit_71),T220,ENVNUL);
  T223 = BOUNDP(YsyntaxYsexpr_block_name);
  if (T223 != YPfalse) {
    T222 = CHKREF(YsyntaxYsexpr_block_name);
  } else {
    T222 = YPfalse;
  }
  T224 = fun_sexpr_block_name_44;
  T221 = CALL2(1,CHKREF(YPdefine_method),T222,T224);
  YsyntaxYsexpr_block_name = T221;
  lit_72 = YPPsym((P)"sexpr-block-body");
  T225 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_block_body_45 = YPmet(FUNCODEREF(fun_sexpr_block_body_45),CHKREF(lit_72),T225,ENVNUL);
  T228 = BOUNDP(YsyntaxYsexpr_block_body);
  if (T228 != YPfalse) {
    T227 = CHKREF(YsyntaxYsexpr_block_body);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_sexpr_block_body_45;
  T226 = CALL2(1,CHKREF(YPdefine_method),T227,T229);
  YsyntaxYsexpr_block_body = T226;
  lit_73 = YPPsym((P)"fin");
  YsyntaxYDsexpr_unwind_protect_tag = CHKREF(lit_73);
  lit_74 = YPPsym((P)"sexpr-unwind-protect?");
  T230 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_unwind_protectQ_46 = YPmet(FUNCODEREF(fun_sexpr_unwind_protectQ_46),CHKREF(lit_74),T230,ENVNUL);
  T233 = BOUNDP(YsyntaxYsexpr_unwind_protectQ);
  if (T233 != YPfalse) {
    T232 = CHKREF(YsyntaxYsexpr_unwind_protectQ);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_sexpr_unwind_protectQ_46;
  T231 = CALL2(1,CHKREF(YPdefine_method),T232,T234);
  YsyntaxYsexpr_unwind_protectQ = T231;
  lit_75 = YPPsym((P)"sexpr-unwind-protect-protected-form");
  T237 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T236 = fun_sexpr_unwind_protect_protected_form_47 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_protected_form_47),CHKREF(lit_75),T237,ENVNUL);
  T241 = BOUNDP(YsyntaxYsexpr_unwind_protect_protected_form);
  if (T241 != YPfalse) {
    T240 = CHKREF(YsyntaxYsexpr_unwind_protect_protected_form);
  } else {
    T240 = YPfalse;
  }
  T242 = fun_sexpr_unwind_protect_protected_form_47;
  T239 = CALL2(1,CHKREF(YPdefine_method),T240,T242);
  T238 = YsyntaxYsexpr_unwind_protect_protected_form = T239;
  T235 = T238;
  return T235;
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
  lit_76 = YPPsym((P)"sexpr-unwind-protect-cleanup-forms");
  T0 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_unwind_protect_cleanup_forms_48 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_cleanup_forms_48),CHKREF(lit_76),T0,ENVNUL);
  T3 = BOUNDP(YsyntaxYsexpr_unwind_protect_cleanup_forms);
  if (T3 != YPfalse) {
    T2 = CHKREF(YsyntaxYsexpr_unwind_protect_cleanup_forms);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_unwind_protect_cleanup_forms_48;
  T1 = CALL2(1,CHKREF(YPdefine_method),T2,T4);
  YsyntaxYsexpr_unwind_protect_cleanup_forms = T1;
  lit_77 = YPPsym((P)"try");
  YsyntaxYDsexpr_monitor_tag = CHKREF(lit_77);
  lit_78 = YPPsym((P)"sexpr-monitor?");
  T5 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_monitorQ_49 = YPmet(FUNCODEREF(fun_sexpr_monitorQ_49),CHKREF(lit_78),T5,ENVNUL);
  T8 = BOUNDP(YsyntaxYsexpr_monitorQ);
  if (T8 != YPfalse) {
    T7 = CHKREF(YsyntaxYsexpr_monitorQ);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_monitorQ_49;
  T6 = CALL2(1,CHKREF(YPdefine_method),T7,T9);
  YsyntaxYsexpr_monitorQ = T6;
  lit_79 = YPPsym((P)"sexpr-monitor-expand");
  lit_80 = YPPsym((P)"return");
  lit_81 = YPPsym((P)"x-1255");
  lit_82 = YPPsym((P)"msg");
  lit_83 = YPPsym((P)"args");
  lit_84 = YPsb((P)"Malformed TRY expression: ~=");
  lit_85 = YPsb((P)"Match Pattern Failure");
  lit_86 = YPPsym((P)"type");
  T12 = YPsig(YPPlist(2,CHKREF(lit_82),CHKREF(lit_83)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1255_50 = YPmet(FUNCODEREF(fun_x_1255_50),CHKREF(lit_81),T12,ENVNUL);
  T11 = YPsig(YPPlist(1,CHKREF(lit_80)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T11,ENVNUL);
  T10 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_monitor_expand_52 = YPmet(FUNCODEREF(fun_sexpr_monitor_expand_52),CHKREF(lit_79),T10,ENVNUL);
  T15 = BOUNDP(YsyntaxYsexpr_monitor_expand);
  if (T15 != YPfalse) {
    T14 = CHKREF(YsyntaxYsexpr_monitor_expand);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_sexpr_monitor_expand_52;
  T13 = CALL2(1,CHKREF(YPdefine_method),T14,T16);
  YsyntaxYsexpr_monitor_expand = T13;
  lit_87 = YPPsym((P)"find-option");
  lit_88 = YPPsym((P)"options");
  lit_89 = YPPsym((P)"option");
  lit_90 = YPPsym((P)"default");
  T17 = YPsig(YPPlist(3,CHKREF(lit_88),CHKREF(lit_89),CHKREF(lit_90)),YPPlist(3,CHKREF(YLlstG),CHKREF(YLsymG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  YsyntaxYfind_option = YPmet(FUNCODEREF(YsyntaxYfind_option),CHKREF(lit_87),T17,ENVNUL);
  T18 = YsyntaxYfind_option;
  YsyntaxYfind_option = T18;
  lit_91 = YPPsym((P)"sexpr-monitor-type");
  lit_92 = YPPlist(1,YPPsym((P)"<condition>"));
  lit_93 = YPPsym((P)"x-1257");
  lit_94 = YPsb((P)"Malformed TRY condition type: %=");
  T21 = YPsig(YPPlist(2,CHKREF(lit_82),CHKREF(lit_83)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1257_54 = YPmet(FUNCODEREF(fun_x_1257_54),CHKREF(lit_93),T21,ENVNUL);
  T20 = YPsig(YPPlist(1,CHKREF(lit_80)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T20,ENVNUL);
  T19 = YPsig(YPPlist(1,CHKREF(lit_88)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_monitor_type_56 = YPmet(FUNCODEREF(fun_sexpr_monitor_type_56),CHKREF(lit_91),T19,ENVNUL);
  T24 = BOUNDP(YsyntaxYsexpr_monitor_type);
  if (T24 != YPfalse) {
    T23 = CHKREF(YsyntaxYsexpr_monitor_type);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_sexpr_monitor_type_56;
  T22 = CALL2(1,CHKREF(YPdefine_method),T23,T25);
  YsyntaxYsexpr_monitor_type = T22;
  lit_95 = YPPsym((P)"sexpr-monitor-info");
  lit_96 = YPPsym((P)"info");
  lit_97 = YPPsym((P)"description");
  lit_98 = YPsb((P)"TRY may only have one of INFO or DESCRIPTION: %=");
  lit_99 = YPPsym((P)"x-1259");
  lit_100 = YPsb((P)"Malformed TRY info expression: %=");
  lit_101 = YPPsym((P)"x-1261");
  lit_102 = YPsb((P)"Malformed TRY description: %=");
  lit_103 = YPPsym((P)"isa");
  lit_104 = YPPsym((P)"<simple-handler-info>");
  lit_105 = YPPsym((P)"handler-info-message");
  lit_106 = YPPsym((P)"handler-info-arguments");
  lit_107 = YPPsym((P)"lst");
  lit_108 = YPPsym((P)"$default-handler-info");
  T30 = YPsig(YPPlist(2,CHKREF(lit_82),CHKREF(lit_83)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1259_57 = YPmet(FUNCODEREF(fun_x_1259_57),CHKREF(lit_99),T30,ENVNUL);
  T29 = YPsig(YPPlist(1,CHKREF(lit_80)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T29,ENVNUL);
  T28 = YPsig(YPPlist(2,CHKREF(lit_82),CHKREF(lit_83)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1261_59 = YPmet(FUNCODEREF(fun_x_1261_59),CHKREF(lit_101),T28,ENVNUL);
  T27 = YPsig(YPPlist(1,CHKREF(lit_80)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T27,ENVNUL);
  T26 = YPsig(YPPlist(1,CHKREF(lit_88)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_monitor_info_61 = YPmet(FUNCODEREF(fun_sexpr_monitor_info_61),CHKREF(lit_95),T26,ENVNUL);
  T33 = BOUNDP(YsyntaxYsexpr_monitor_info);
  if (T33 != YPfalse) {
    T32 = CHKREF(YsyntaxYsexpr_monitor_info);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_sexpr_monitor_info_61;
  T31 = CALL2(1,CHKREF(YPdefine_method),T32,T34);
  YsyntaxYsexpr_monitor_info = T31;
  lit_109 = YPPsym((P)"sexpr-monitor-test");
  lit_110 = YPPlist(1,YPtrue);
  T35 = YPsig(YPPlist(1,CHKREF(lit_88)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_monitor_test_62 = YPmet(FUNCODEREF(fun_sexpr_monitor_test_62),CHKREF(lit_109),T35,ENVNUL);
  T38 = BOUNDP(YsyntaxYsexpr_monitor_test);
  if (T38 != YPfalse) {
    T37 = CHKREF(YsyntaxYsexpr_monitor_test);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_sexpr_monitor_test_62;
  T36 = CALL2(1,CHKREF(YPdefine_method),T37,T39);
  YsyntaxYsexpr_monitor_test = T36;
  lit_111 = YPPsym((P)"sexpr-monitor-body");
  T40 = YPsig(YPPlist(1,CHKREF(lit_57)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_monitor_body_63 = YPmet(FUNCODEREF(fun_sexpr_monitor_body_63),CHKREF(lit_111),T40,ENVNUL);
  T43 = BOUNDP(YsyntaxYsexpr_monitor_body);
  if (T43 != YPfalse) {
    T42 = CHKREF(YsyntaxYsexpr_monitor_body);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_sexpr_monitor_body_63;
  T41 = CALL2(1,CHKREF(YPdefine_method),T42,T44);
  YsyntaxYsexpr_monitor_body = T41;
  lit_112 = YPPsym((P)"seq");
  YsyntaxYDsexpr_begin_tag = CHKREF(lit_112);
  lit_113 = YPPsym((P)"sexpr-begin?");
  T45 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_beginQ_64 = YPmet(FUNCODEREF(fun_sexpr_beginQ_64),CHKREF(lit_113),T45,ENVNUL);
  T48 = BOUNDP(YsyntaxYsexpr_beginQ);
  if (T48 != YPfalse) {
    T47 = CHKREF(YsyntaxYsexpr_beginQ);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_sexpr_beginQ_64;
  T46 = CALL2(1,CHKREF(YPdefine_method),T47,T49);
  YsyntaxYsexpr_beginQ = T46;
  lit_114 = YPPsym((P)"sexpr-begin-actions");
  lit_115 = YPPsym((P)"begin-exp");
  T50 = YPsig(YPPlist(1,CHKREF(lit_115)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_begin_actions_65 = YPmet(FUNCODEREF(fun_sexpr_begin_actions_65),CHKREF(lit_114),T50,ENVNUL);
  T53 = BOUNDP(YsyntaxYsexpr_begin_actions);
  if (T53 != YPfalse) {
    T52 = CHKREF(YsyntaxYsexpr_begin_actions);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_sexpr_begin_actions_65;
  T51 = CALL2(1,CHKREF(YPdefine_method),T52,T54);
  YsyntaxYsexpr_begin_actions = T51;
  lit_116 = YPPsym((P)"sexpr-last-exp?");
  T55 = YPsig(YPPlist(1,CHKREF(lit_112)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_last_expQ_66 = YPmet(FUNCODEREF(fun_sexpr_last_expQ_66),CHKREF(lit_116),T55,ENVNUL);
  T58 = BOUNDP(YsyntaxYsexpr_last_expQ);
  if (T58 != YPfalse) {
    T57 = CHKREF(YsyntaxYsexpr_last_expQ);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_sexpr_last_expQ_66;
  T56 = CALL2(1,CHKREF(YPdefine_method),T57,T59);
  YsyntaxYsexpr_last_expQ = T56;
  lit_117 = YPPsym((P)"sexpr-first-exp");
  T60 = YPsig(YPPlist(1,CHKREF(lit_112)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_first_exp_67 = YPmet(FUNCODEREF(fun_sexpr_first_exp_67),CHKREF(lit_117),T60,ENVNUL);
  T63 = BOUNDP(YsyntaxYsexpr_first_exp);
  if (T63 != YPfalse) {
    T62 = CHKREF(YsyntaxYsexpr_first_exp);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_sexpr_first_exp_67;
  T61 = CALL2(1,CHKREF(YPdefine_method),T62,T64);
  YsyntaxYsexpr_first_exp = T61;
  lit_118 = YPPsym((P)"sexpr-rest-exps");
  T65 = YPsig(YPPlist(1,CHKREF(lit_112)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_rest_exps_68 = YPmet(FUNCODEREF(fun_sexpr_rest_exps_68),CHKREF(lit_118),T65,ENVNUL);
  T68 = BOUNDP(YsyntaxYsexpr_rest_exps);
  if (T68 != YPfalse) {
    T67 = CHKREF(YsyntaxYsexpr_rest_exps);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_sexpr_rest_exps_68;
  T66 = CALL2(1,CHKREF(YPdefine_method),T67,T69);
  YsyntaxYsexpr_rest_exps = T66;
  lit_119 = YPPsym((P)"sexpr-sequence->begin");
  T70 = YPsig(YPPlist(1,CHKREF(lit_112)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_sequence_Gbegin_69 = YPmet(FUNCODEREF(fun_sexpr_sequence_Gbegin_69),CHKREF(lit_119),T70,ENVNUL);
  T73 = BOUNDP(YsyntaxYsexpr_sequence_Gbegin);
  if (T73 != YPfalse) {
    T72 = CHKREF(YsyntaxYsexpr_sequence_Gbegin);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_sexpr_sequence_Gbegin_69;
  T71 = CALL2(1,CHKREF(YPdefine_method),T72,T74);
  YsyntaxYsexpr_sequence_Gbegin = T71;
  lit_120 = YPPsym((P)"sexpr-make-begin");
  T75 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_make_begin_70 = YPmet(FUNCODEREF(fun_sexpr_make_begin_70),CHKREF(lit_120),T75,ENVNUL);
  T78 = BOUNDP(YsyntaxYsexpr_make_begin);
  if (T78 != YPfalse) {
    T77 = CHKREF(YsyntaxYsexpr_make_begin);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_sexpr_make_begin_70;
  T76 = CALL2(1,CHKREF(YPdefine_method),T77,T79);
  YsyntaxYsexpr_make_begin = T76;
  lit_121 = YPPsym((P)"sexpr-application?");
  T80 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_applicationQ_71 = YPmet(FUNCODEREF(fun_sexpr_applicationQ_71),CHKREF(lit_121),T80,ENVNUL);
  T83 = BOUNDP(YsyntaxYsexpr_applicationQ);
  if (T83 != YPfalse) {
    T82 = CHKREF(YsyntaxYsexpr_applicationQ);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_sexpr_applicationQ_71;
  T81 = CALL2(1,CHKREF(YPdefine_method),T82,T84);
  YsyntaxYsexpr_applicationQ = T81;
  lit_122 = YPPsym((P)"sexpr-operator");
  lit_123 = YPPsym((P)"app");
  T85 = YPsig(YPPlist(1,CHKREF(lit_123)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_operator_72 = YPmet(FUNCODEREF(fun_sexpr_operator_72),CHKREF(lit_122),T85,ENVNUL);
  T88 = BOUNDP(YsyntaxYsexpr_operator);
  if (T88 != YPfalse) {
    T87 = CHKREF(YsyntaxYsexpr_operator);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_sexpr_operator_72;
  T86 = CALL2(1,CHKREF(YPdefine_method),T87,T89);
  YsyntaxYsexpr_operator = T86;
  lit_124 = YPPsym((P)"sexpr-operands");
  T90 = YPsig(YPPlist(1,CHKREF(lit_123)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_operands_73 = YPmet(FUNCODEREF(fun_sexpr_operands_73),CHKREF(lit_124),T90,ENVNUL);
  T93 = BOUNDP(YsyntaxYsexpr_operands);
  if (T93 != YPfalse) {
    T92 = CHKREF(YsyntaxYsexpr_operands);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_sexpr_operands_73;
  T91 = CALL2(1,CHKREF(YPdefine_method),T92,T94);
  YsyntaxYsexpr_operands = T91;
  lit_125 = YPPsym((P)"sexpr-no-operands?");
  T95 = YPsig(YPPlist(1,CHKREF(lit_83)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_no_operandsQ_74 = YPmet(FUNCODEREF(fun_sexpr_no_operandsQ_74),CHKREF(lit_125),T95,ENVNUL);
  T98 = BOUNDP(YsyntaxYsexpr_no_operandsQ);
  if (T98 != YPfalse) {
    T97 = CHKREF(YsyntaxYsexpr_no_operandsQ);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_sexpr_no_operandsQ_74;
  T96 = CALL2(1,CHKREF(YPdefine_method),T97,T99);
  YsyntaxYsexpr_no_operandsQ = T96;
  lit_126 = YPPsym((P)"sexpr-first-operand");
  T100 = YPsig(YPPlist(1,CHKREF(lit_83)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_first_operand_75 = YPmet(FUNCODEREF(fun_sexpr_first_operand_75),CHKREF(lit_126),T100,ENVNUL);
  T103 = BOUNDP(YsyntaxYsexpr_first_operand);
  if (T103 != YPfalse) {
    T102 = CHKREF(YsyntaxYsexpr_first_operand);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_sexpr_first_operand_75;
  T101 = CALL2(1,CHKREF(YPdefine_method),T102,T104);
  YsyntaxYsexpr_first_operand = T101;
  lit_127 = YPPsym((P)"sexpr-rest-operands");
  T105 = YPsig(YPPlist(1,CHKREF(lit_83)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_rest_operands_76 = YPmet(FUNCODEREF(fun_sexpr_rest_operands_76),CHKREF(lit_127),T105,ENVNUL);
  T108 = BOUNDP(YsyntaxYsexpr_rest_operands);
  if (T108 != YPfalse) {
    T107 = CHKREF(YsyntaxYsexpr_rest_operands);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_sexpr_rest_operands_76;
  T106 = CALL2(1,CHKREF(YPdefine_method),T107,T109);
  YsyntaxYsexpr_rest_operands = T106;
  lit_128 = YPPsym((P)"sexpr-make-application");
  lit_129 = YPPsym((P)"op");
  lit_130 = YPPsym((P)"operands");
  T110 = YPsig(YPPlist(2,CHKREF(lit_129),CHKREF(lit_130)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  fun_sexpr_make_application_77 = YPmet(FUNCODEREF(fun_sexpr_make_application_77),CHKREF(lit_128),T110,ENVNUL);
  T113 = BOUNDP(YsyntaxYsexpr_make_application);
  if (T113 != YPfalse) {
    T112 = CHKREF(YsyntaxYsexpr_make_application);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_sexpr_make_application_77;
  T111 = CALL2(1,CHKREF(YPdefine_method),T112,T114);
  YsyntaxYsexpr_make_application = T111;
  YsyntaxYTunique_name_counterT = YPint((P)0);
  lit_131 = YPPsym((P)"sexpr-new-unique-name-counter!");
  T115 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLintG),Ynil);
  fun_sexpr_new_unique_name_counterX_78 = YPmet(FUNCODEREF(fun_sexpr_new_unique_name_counterX_78),CHKREF(lit_131),T115,ENVNUL);
  T118 = BOUNDP(YsyntaxYsexpr_new_unique_name_counterX);
  if (T118 != YPfalse) {
    T117 = CHKREF(YsyntaxYsexpr_new_unique_name_counterX);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_sexpr_new_unique_name_counterX_78;
  T116 = CALL2(1,CHKREF(YPdefine_method),T117,T119);
  YsyntaxYsexpr_new_unique_name_counterX = T116;
  YsyntaxYLnameG = CHKREF(YLanyG);
  lit_132 = YPPsym((P)"sexpr-unique-name");
  lit_133 = YPPsym((P)"prefix");
  T120 = YPsig(YPPlist(1,CHKREF(lit_133)),YPPlist(1,CHKREF(YsyntaxYLnameG)),YPfalse,YPint((P)1),CHKREF(YLsymG),Ynil);
  fun_sexpr_unique_name_79 = YPmet(FUNCODEREF(fun_sexpr_unique_name_79),CHKREF(lit_132),T120,ENVNUL);
  T123 = BOUNDP(YsyntaxYsexpr_unique_name);
  if (T123 != YPfalse) {
    T122 = CHKREF(YsyntaxYsexpr_unique_name);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_sexpr_unique_name_79;
  T121 = CALL2(1,CHKREF(YPdefine_method),T122,T124);
  YsyntaxYsexpr_unique_name = T121;
  lit_134 = YPPsym((P)"let");
  YsyntaxYDsexpr_let_tag = CHKREF(lit_134);
  lit_135 = YPPsym((P)"sexpr-let?");
  T125 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_letQ_80 = YPmet(FUNCODEREF(fun_sexpr_letQ_80),CHKREF(lit_135),T125,ENVNUL);
  T128 = BOUNDP(YsyntaxYsexpr_letQ);
  if (T128 != YPfalse) {
    T127 = CHKREF(YsyntaxYsexpr_letQ);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_sexpr_letQ_80;
  T126 = CALL2(1,CHKREF(YPdefine_method),T127,T129);
  YsyntaxYsexpr_letQ = T126;
  lit_136 = YPPsym((P)"sexpr-let-bound-variables");
  lit_137 = YPPsym((P)"let-exp");
  T130 = YPsig(YPPlist(1,CHKREF(lit_137)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_let_bound_variables_81 = YPmet(FUNCODEREF(fun_sexpr_let_bound_variables_81),CHKREF(lit_136),T130,ENVNUL);
  T133 = BOUNDP(YsyntaxYsexpr_let_bound_variables);
  if (T133 != YPfalse) {
    T132 = CHKREF(YsyntaxYsexpr_let_bound_variables);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_sexpr_let_bound_variables_81;
  T131 = CALL2(1,CHKREF(YPdefine_method),T132,T134);
  YsyntaxYsexpr_let_bound_variables = T131;
  lit_138 = YPPsym((P)"sexpr-let-values");
  T135 = YPsig(YPPlist(1,CHKREF(lit_137)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_let_values_82 = YPmet(FUNCODEREF(fun_sexpr_let_values_82),CHKREF(lit_138),T135,ENVNUL);
  T138 = BOUNDP(YsyntaxYsexpr_let_values);
  if (T138 != YPfalse) {
    T137 = CHKREF(YsyntaxYsexpr_let_values);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_sexpr_let_values_82;
  T136 = CALL2(1,CHKREF(YPdefine_method),T137,T139);
  YsyntaxYsexpr_let_values = T136;
  lit_139 = YPPsym((P)"sexpr-let-body");
  T140 = YPsig(YPPlist(1,CHKREF(lit_137)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_let_body_83 = YPmet(FUNCODEREF(fun_sexpr_let_body_83),CHKREF(lit_139),T140,ENVNUL);
  T143 = BOUNDP(YsyntaxYsexpr_let_body);
  if (T143 != YPfalse) {
    T142 = CHKREF(YsyntaxYsexpr_let_body);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_sexpr_let_body_83;
  T141 = CALL2(1,CHKREF(YPdefine_method),T142,T144);
  YsyntaxYsexpr_let_body = T141;
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
  lit_154 = YPPsym((P)"tail");
  lit_155 = YPPsym((P)"head");
  T147 = YPsig(YPPlist(4,CHKREF(lit_148),CHKREF(lit_149),CHKREF(lit_150),CHKREF(lit_151)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_inner_84 = YPmet(FUNCODEREF(fun_inner_84),CHKREF(lit_147),T147,ENVNUL);
  T146 = YPsig(YPPlist(4,CHKREF(lit_144),CHKREF(lit_145),CHKREF(lit_141),CHKREF(lit_142)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_loop_85 = YPmet(FUNCODEREF(fun_loop_85),CHKREF(lit_143),T146,ENVNUL);
  T145 = YPsig(YPPlist(2,CHKREF(lit_141),CHKREF(lit_142)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLtupG),Ynil);
  fun_sexpr_let_namesAvalues_86 = YPmet(FUNCODEREF(fun_sexpr_let_namesAvalues_86),CHKREF(lit_140),T145,ENVNUL);
  T150 = BOUNDP(YsyntaxYsexpr_let_namesAvalues);
  if (T150 != YPfalse) {
    T149 = CHKREF(YsyntaxYsexpr_let_namesAvalues);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_sexpr_let_namesAvalues_86;
  T148 = CALL2(1,CHKREF(YPdefine_method),T149,T151);
  YsyntaxYsexpr_let_namesAvalues = T148;
  lit_156 = YPPsym((P)"sexpr-let->combination");
  lit_157 = YPPsym((P)"col");
  lit_158 = YPPsym((P)"values");
  T153 = YPsig(YPPlist(2,CHKREF(lit_141),CHKREF(lit_158)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_col_87 = YPmet(FUNCODEREF(fun_col_87),CHKREF(lit_157),T153,ENVNUL);
  T152 = YPsig(YPPlist(1,CHKREF(lit_137)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_let_Gcombination_88 = YPmet(FUNCODEREF(fun_sexpr_let_Gcombination_88),CHKREF(lit_156),T152,ENVNUL);
  T156 = BOUNDP(YsyntaxYsexpr_let_Gcombination);
  if (T156 != YPfalse) {
    T155 = CHKREF(YsyntaxYsexpr_let_Gcombination);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_sexpr_let_Gcombination_88;
  T154 = CALL2(1,CHKREF(YPdefine_method),T155,T157);
  YsyntaxYsexpr_let_Gcombination = T154;
  lit_159 = YPPsym((P)"loc");
  YsyntaxYDsexpr_locals_tag = CHKREF(lit_159);
  lit_160 = YPPsym((P)"sexpr-loc?");
  T158 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_locQ_89 = YPmet(FUNCODEREF(fun_sexpr_locQ_89),CHKREF(lit_160),T158,ENVNUL);
  T161 = BOUNDP(YsyntaxYsexpr_locQ);
  if (T161 != YPfalse) {
    T160 = CHKREF(YsyntaxYsexpr_locQ);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_sexpr_locQ_89;
  T159 = CALL2(1,CHKREF(YPdefine_method),T160,T162);
  YsyntaxYsexpr_locQ = T159;
  lit_161 = YPPsym((P)"sexpr-loc-bound-names");
  lit_162 = YPPsym((P)"loc-exp");
  T163 = YPsig(YPPlist(1,CHKREF(lit_162)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_names_90 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_names_90),CHKREF(lit_161),T163,ENVNUL);
  T166 = BOUNDP(YsyntaxYsexpr_loc_bound_names);
  if (T166 != YPfalse) {
    T165 = CHKREF(YsyntaxYsexpr_loc_bound_names);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_sexpr_loc_bound_names_90;
  T164 = CALL2(1,CHKREF(YPdefine_method),T165,T167);
  YsyntaxYsexpr_loc_bound_names = T164;
  lit_163 = YPPsym((P)"sexpr-loc-bound-signatures");
  T168 = YPsig(YPPlist(1,CHKREF(lit_162)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_signatures_91 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_signatures_91),CHKREF(lit_163),T168,ENVNUL);
  T171 = BOUNDP(YsyntaxYsexpr_loc_bound_signatures);
  if (T171 != YPfalse) {
    T170 = CHKREF(YsyntaxYsexpr_loc_bound_signatures);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_sexpr_loc_bound_signatures_91;
  T169 = CALL2(1,CHKREF(YPdefine_method),T170,T172);
  YsyntaxYsexpr_loc_bound_signatures = T169;
  lit_164 = YPPsym((P)"sexpr-loc-bound-bodies");
  T173 = YPsig(YPPlist(1,CHKREF(lit_162)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_bodies_92 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_bodies_92),CHKREF(lit_164),T173,ENVNUL);
  T176 = BOUNDP(YsyntaxYsexpr_loc_bound_bodies);
  if (T176 != YPfalse) {
    T175 = CHKREF(YsyntaxYsexpr_loc_bound_bodies);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_sexpr_loc_bound_bodies_92;
  T174 = CALL2(1,CHKREF(YPdefine_method),T175,T177);
  YsyntaxYsexpr_loc_bound_bodies = T174;
  lit_165 = YPPsym((P)"sexpr-loc-raw-body");
  T178 = YPsig(YPPlist(1,CHKREF(lit_162)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_loc_raw_body_93 = YPmet(FUNCODEREF(fun_sexpr_loc_raw_body_93),CHKREF(lit_165),T178,ENVNUL);
  T181 = BOUNDP(YsyntaxYsexpr_loc_raw_body);
  if (T181 != YPfalse) {
    T180 = CHKREF(YsyntaxYsexpr_loc_raw_body);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_sexpr_loc_raw_body_93;
  T179 = CALL2(1,CHKREF(YPdefine_method),T180,T182);
  YsyntaxYsexpr_loc_raw_body = T179;
  lit_166 = YPPsym((P)"sexpr-loc-body");
  T183 = YPsig(YPPlist(1,CHKREF(lit_162)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_loc_body_94 = YPmet(FUNCODEREF(fun_sexpr_loc_body_94),CHKREF(lit_166),T183,ENVNUL);
  T186 = BOUNDP(YsyntaxYsexpr_loc_body);
  if (T186 != YPfalse) {
    T185 = CHKREF(YsyntaxYsexpr_loc_body);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_sexpr_loc_body_94;
  T184 = CALL2(1,CHKREF(YPdefine_method),T185,T187);
  YsyntaxYsexpr_loc_body = T184;
  lit_167 = YPPsym((P)"rep");
  YsyntaxYDsexpr_iterate_tag = CHKREF(lit_167);
  lit_168 = YPPsym((P)"sexpr-iterate?");
  T188 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_iterateQ_95 = YPmet(FUNCODEREF(fun_sexpr_iterateQ_95),CHKREF(lit_168),T188,ENVNUL);
  T191 = BOUNDP(YsyntaxYsexpr_iterateQ);
  if (T191 != YPfalse) {
    T190 = CHKREF(YsyntaxYsexpr_iterateQ);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_sexpr_iterateQ_95;
  T189 = CALL2(1,CHKREF(YPdefine_method),T190,T192);
  YsyntaxYsexpr_iterateQ = T189;
  lit_169 = YPPsym((P)"sexpr-iterate-name");
  lit_170 = YPPsym((P)"rep-exp");
  T193 = YPsig(YPPlist(1,CHKREF(lit_170)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLsymG),Ynil);
  fun_sexpr_iterate_name_96 = YPmet(FUNCODEREF(fun_sexpr_iterate_name_96),CHKREF(lit_169),T193,ENVNUL);
  T196 = BOUNDP(YsyntaxYsexpr_iterate_name);
  if (T196 != YPfalse) {
    T195 = CHKREF(YsyntaxYsexpr_iterate_name);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_sexpr_iterate_name_96;
  T194 = CALL2(1,CHKREF(YPdefine_method),T195,T197);
  YsyntaxYsexpr_iterate_name = T194;
  YsyntaxYDsexpr_values_tag = CHKREF(lit_39);
  lit_171 = YPPsym((P)"sexpr-iterate-signature");
  T198 = YPsig(YPPlist(1,CHKREF(lit_170)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_iterate_signature_97 = YPmet(FUNCODEREF(fun_sexpr_iterate_signature_97),CHKREF(lit_171),T198,ENVNUL);
  T201 = BOUNDP(YsyntaxYsexpr_iterate_signature);
  if (T201 != YPfalse) {
    T200 = CHKREF(YsyntaxYsexpr_iterate_signature);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_sexpr_iterate_signature_97;
  T199 = CALL2(1,CHKREF(YPdefine_method),T200,T202);
  YsyntaxYsexpr_iterate_signature = T199;
  lit_172 = YPPsym((P)"sexpr-iterate-inits");
  T203 = YPsig(YPPlist(1,CHKREF(lit_170)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_iterate_inits_98 = YPmet(FUNCODEREF(fun_sexpr_iterate_inits_98),CHKREF(lit_172),T203,ENVNUL);
  T206 = BOUNDP(YsyntaxYsexpr_iterate_inits);
  if (T206 != YPfalse) {
    T205 = CHKREF(YsyntaxYsexpr_iterate_inits);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_sexpr_iterate_inits_98;
  T204 = CALL2(1,CHKREF(YPdefine_method),T205,T207);
  YsyntaxYsexpr_iterate_inits = T204;
  lit_173 = YPPsym((P)"sexpr-iterate-body");
  T208 = YPsig(YPPlist(1,CHKREF(lit_170)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_iterate_body_99 = YPmet(FUNCODEREF(fun_sexpr_iterate_body_99),CHKREF(lit_173),T208,ENVNUL);
  T211 = BOUNDP(YsyntaxYsexpr_iterate_body);
  if (T211 != YPfalse) {
    T210 = CHKREF(YsyntaxYsexpr_iterate_body);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_sexpr_iterate_body_99;
  T209 = CALL2(1,CHKREF(YPdefine_method),T210,T212);
  YsyntaxYsexpr_iterate_body = T209;
  lit_174 = YPPsym((P)"sexpr-iterate->loc");
  T213 = YPsig(YPPlist(1,CHKREF(lit_170)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_iterate_Gloc_100 = YPmet(FUNCODEREF(fun_sexpr_iterate_Gloc_100),CHKREF(lit_174),T213,ENVNUL);
  T216 = BOUNDP(YsyntaxYsexpr_iterate_Gloc);
  if (T216 != YPfalse) {
    T215 = CHKREF(YsyntaxYsexpr_iterate_Gloc);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_sexpr_iterate_Gloc_100;
  T214 = CALL2(1,CHKREF(YPdefine_method),T215,T217);
  YsyntaxYsexpr_iterate_Gloc = T214;
  YsyntaxYDsexpr_isa_tag = CHKREF(lit_103);
  lit_175 = YPPsym((P)"sexpr-isa?");
  T218 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_isaQ_101 = YPmet(FUNCODEREF(fun_sexpr_isaQ_101),CHKREF(lit_175),T218,ENVNUL);
  T221 = BOUNDP(YsyntaxYsexpr_isaQ);
  if (T221 != YPfalse) {
    T220 = CHKREF(YsyntaxYsexpr_isaQ);
  } else {
    T220 = YPfalse;
  }
  T222 = fun_sexpr_isaQ_101;
  T219 = CALL2(1,CHKREF(YPdefine_method),T220,T222);
  YsyntaxYsexpr_isaQ = T219;
  lit_176 = YPPsym((P)"sexpr-isa-parents");
  T223 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_isa_parents_102 = YPmet(FUNCODEREF(fun_sexpr_isa_parents_102),CHKREF(lit_176),T223,ENVNUL);
  T226 = BOUNDP(YsyntaxYsexpr_isa_parents);
  if (T226 != YPfalse) {
    T225 = CHKREF(YsyntaxYsexpr_isa_parents);
  } else {
    T225 = YPfalse;
  }
  T227 = fun_sexpr_isa_parents_102;
  T224 = CALL2(1,CHKREF(YPdefine_method),T225,T227);
  YsyntaxYsexpr_isa_parents = T224;
  lit_177 = YPPsym((P)"sexpr-isa-slot-inits");
  T228 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_isa_slot_inits_103 = YPmet(FUNCODEREF(fun_sexpr_isa_slot_inits_103),CHKREF(lit_177),T228,ENVNUL);
  T231 = BOUNDP(YsyntaxYsexpr_isa_slot_inits);
  if (T231 != YPfalse) {
    T230 = CHKREF(YsyntaxYsexpr_isa_slot_inits);
  } else {
    T230 = YPfalse;
  }
  T232 = fun_sexpr_isa_slot_inits_103;
  T229 = CALL2(1,CHKREF(YPdefine_method),T230,T232);
  YsyntaxYsexpr_isa_slot_inits = T229;
  lit_178 = YPPsym((P)"sexpr-isa-init-slots");
  T233 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_isa_init_slots_104 = YPmet(FUNCODEREF(fun_sexpr_isa_init_slots_104),CHKREF(lit_178),T233,ENVNUL);
  T236 = BOUNDP(YsyntaxYsexpr_isa_init_slots);
  if (T236 != YPfalse) {
    T235 = CHKREF(YsyntaxYsexpr_isa_init_slots);
  } else {
    T235 = YPfalse;
  }
  T237 = fun_sexpr_isa_init_slots_104;
  T234 = CALL2(1,CHKREF(YPdefine_method),T235,T237);
  YsyntaxYsexpr_isa_init_slots = T234;
  lit_179 = YPPsym((P)"sexpr-isa-init-values");
  T238 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_isa_init_values_105 = YPmet(FUNCODEREF(fun_sexpr_isa_init_values_105),CHKREF(lit_179),T238,ENVNUL);
  T241 = BOUNDP(YsyntaxYsexpr_isa_init_values);
  if (T241 != YPfalse) {
    T240 = CHKREF(YsyntaxYsexpr_isa_init_values);
  } else {
    T240 = YPfalse;
  }
  T242 = fun_sexpr_isa_init_values_105;
  T239 = CALL2(1,CHKREF(YPdefine_method),T240,T242);
  YsyntaxYsexpr_isa_init_values = T239;
  lit_180 = YPPsym((P)"dc");
  YsyntaxYDsexpr_define_class_tag = CHKREF(lit_180);
  lit_181 = YPPsym((P)"sexpr-define-class?");
  T243 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_define_classQ_106 = YPmet(FUNCODEREF(fun_sexpr_define_classQ_106),CHKREF(lit_181),T243,ENVNUL);
  T246 = BOUNDP(YsyntaxYsexpr_define_classQ);
  if (T246 != YPfalse) {
    T245 = CHKREF(YsyntaxYsexpr_define_classQ);
  } else {
    T245 = YPfalse;
  }
  T247 = fun_sexpr_define_classQ_106;
  T244 = CALL2(1,CHKREF(YPdefine_method),T245,T247);
  YsyntaxYsexpr_define_classQ = T244;
  lit_182 = YPPsym((P)"sexpr-define-class-parents");
  T248 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_define_class_parents_107 = YPmet(FUNCODEREF(fun_sexpr_define_class_parents_107),CHKREF(lit_182),T248,ENVNUL);
  T251 = BOUNDP(YsyntaxYsexpr_define_class_parents);
  if (T251 != YPfalse) {
    T250 = CHKREF(YsyntaxYsexpr_define_class_parents);
  } else {
    T250 = YPfalse;
  }
  T252 = fun_sexpr_define_class_parents_107;
  T249 = CALL2(1,CHKREF(YPdefine_method),T250,T252);
  YsyntaxYsexpr_define_class_parents = T249;
  lit_183 = YPPsym((P)"slot");
  YsyntaxYDsexpr_slot_tag = CHKREF(lit_183);
  lit_184 = YPPsym((P)"sexpr-slot?");
  T253 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_slotQ_108 = YPmet(FUNCODEREF(fun_sexpr_slotQ_108),CHKREF(lit_184),T253,ENVNUL);
  T256 = BOUNDP(YsyntaxYsexpr_slotQ);
  if (T256 != YPfalse) {
    T255 = CHKREF(YsyntaxYsexpr_slotQ);
  } else {
    T255 = YPfalse;
  }
  T257 = fun_sexpr_slotQ_108;
  T254 = CALL2(1,CHKREF(YPdefine_method),T255,T257);
  YsyntaxYsexpr_slotQ = T254;
  lit_185 = YPPsym((P)"sexpr-slot-object");
  T258 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_slot_object_109 = YPmet(FUNCODEREF(fun_sexpr_slot_object_109),CHKREF(lit_185),T258,ENVNUL);
  T261 = BOUNDP(YsyntaxYsexpr_slot_object);
  if (T261 != YPfalse) {
    T260 = CHKREF(YsyntaxYsexpr_slot_object);
  } else {
    T260 = YPfalse;
  }
  T262 = fun_sexpr_slot_object_109;
  T259 = CALL2(1,CHKREF(YPdefine_method),T260,T262);
  YsyntaxYsexpr_slot_object = T259;
  lit_186 = YPPsym((P)"sexpr-slot-variable");
  T263 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_slot_variable_110 = YPmet(FUNCODEREF(fun_sexpr_slot_variable_110),CHKREF(lit_186),T263,ENVNUL);
  T266 = BOUNDP(YsyntaxYsexpr_slot_variable);
  if (T266 != YPfalse) {
    T265 = CHKREF(YsyntaxYsexpr_slot_variable);
  } else {
    T265 = YPfalse;
  }
  T267 = fun_sexpr_slot_variable_110;
  T264 = CALL2(1,CHKREF(YPdefine_method),T265,T267);
  YsyntaxYsexpr_slot_variable = T264;
  lit_187 = YPPsym((P)"sexpr-slot-init");
  lit_188 = YPPsym((P)"nul");
  T270 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T269 = fun_sexpr_slot_init_111 = YPmet(FUNCODEREF(fun_sexpr_slot_init_111),CHKREF(lit_187),T270,ENVNUL);
  T274 = BOUNDP(YsyntaxYsexpr_slot_init);
  if (T274 != YPfalse) {
    T273 = CHKREF(YsyntaxYsexpr_slot_init);
  } else {
    T273 = YPfalse;
  }
  T275 = fun_sexpr_slot_init_111;
  T272 = CALL2(1,CHKREF(YPdefine_method),T273,T275);
  T271 = YsyntaxYsexpr_slot_init = T272;
  T268 = T271;
  return T268;
}

P YsyntaxY___main_2___() {
  P T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115;
  P T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99;
  P T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83;
  P T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67;
  P T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51;
  P T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
loop:
  lit_189 = YPPsym((P)"sexpr-make-getter");
  lit_190 = YPPsym((P)"_x");
  lit_191 = YPPsym((P)"slot-value");
  T0 = YPsig(YPPlist(2,CHKREF(lit_59),CHKREF(lit_86)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  fun_sexpr_make_getter_112 = YPmet(FUNCODEREF(fun_sexpr_make_getter_112),CHKREF(lit_189),T0,ENVNUL);
  T3 = BOUNDP(YsyntaxYsexpr_make_getter);
  if (T3 != YPfalse) {
    T2 = CHKREF(YsyntaxYsexpr_make_getter);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_make_getter_112;
  T1 = CALL2(1,CHKREF(YPdefine_method),T2,T4);
  YsyntaxYsexpr_make_getter = T1;
  lit_192 = YPPsym((P)"sexpr-make-setter");
  lit_193 = YPPsym((P)"slot-type");
  lit_194 = YPPsym((P)"_z");
  lit_195 = YPPsym((P)"slot-value-setter");
  T5 = YPsig(YPPlist(3,CHKREF(lit_59),CHKREF(lit_86),CHKREF(lit_193)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLlstG),Ynil);
  fun_sexpr_make_setter_113 = YPmet(FUNCODEREF(fun_sexpr_make_setter_113),CHKREF(lit_192),T5,ENVNUL);
  T8 = BOUNDP(YsyntaxYsexpr_make_setter);
  if (T8 != YPfalse) {
    T7 = CHKREF(YsyntaxYsexpr_make_setter);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_make_setter_113;
  T6 = CALL2(1,CHKREF(YPdefine_method),T7,T9);
  YsyntaxYsexpr_make_setter = T6;
  lit_196 = YPPsym((P)"sexpr-make-setter-name");
  lit_197 = YPsb((P)"-setter");
  T10 = YPsig(YPPlist(1,CHKREF(lit_59)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLsymG),Ynil);
  fun_sexpr_make_setter_name_114 = YPmet(FUNCODEREF(fun_sexpr_make_setter_name_114),CHKREF(lit_196),T10,ENVNUL);
  T13 = BOUNDP(YsyntaxYsexpr_make_setter_name);
  if (T13 != YPfalse) {
    T12 = CHKREF(YsyntaxYsexpr_make_setter_name);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_sexpr_make_setter_name_114;
  T11 = CALL2(1,CHKREF(YPdefine_method),T12,T14);
  YsyntaxYsexpr_make_setter_name = T11;
  lit_198 = YPPsym((P)"sexpr-macro?");
  T15 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_macroQ_115 = YPmet(FUNCODEREF(fun_sexpr_macroQ_115),CHKREF(lit_198),T15,ENVNUL);
  T18 = BOUNDP(YsyntaxYsexpr_macroQ);
  if (T18 != YPfalse) {
    T17 = CHKREF(YsyntaxYsexpr_macroQ);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_sexpr_macroQ_115;
  T16 = CALL2(1,CHKREF(YPdefine_method),T17,T19);
  YsyntaxYsexpr_macroQ = T16;
  lit_199 = YPPsym((P)"macro-expand");
  YsyntaxYDsexpr_macro_expand_tag = CHKREF(lit_199);
  lit_200 = YPPsym((P)"sexpr-macro-expand?");
  T20 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_macro_expandQ_116 = YPmet(FUNCODEREF(fun_sexpr_macro_expandQ_116),CHKREF(lit_200),T20,ENVNUL);
  T23 = BOUNDP(YsyntaxYsexpr_macro_expandQ);
  if (T23 != YPfalse) {
    T22 = CHKREF(YsyntaxYsexpr_macro_expandQ);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_sexpr_macro_expandQ_116;
  T21 = CALL2(1,CHKREF(YPdefine_method),T22,T24);
  YsyntaxYsexpr_macro_expandQ = T21;
  lit_201 = YPPsym((P)"mif");
  YsyntaxYDsexpr_syntax_if_tag = CHKREF(lit_201);
  lit_202 = YPPsym((P)"sexpr-make-syntax-if");
  lit_203 = YPPsym((P)"pat");
  T25 = YPsig(YPPlist(4,CHKREF(lit_203),CHKREF(lit_1),CHKREF(lit_67),CHKREF(lit_68)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YLlstG),Ynil);
  fun_sexpr_make_syntax_if_117 = YPmet(FUNCODEREF(fun_sexpr_make_syntax_if_117),CHKREF(lit_202),T25,ENVNUL);
  T28 = BOUNDP(YsyntaxYsexpr_make_syntax_if);
  if (T28 != YPfalse) {
    T27 = CHKREF(YsyntaxYsexpr_make_syntax_if);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_sexpr_make_syntax_if_117;
  T26 = CALL2(1,CHKREF(YPdefine_method),T27,T29);
  YsyntaxYsexpr_make_syntax_if = T26;
  lit_204 = YPPsym((P)"comma-atsign");
  YsyntaxYTcomma_atsignT = CHKREF(lit_204);
  lit_205 = YPPsym((P)"bq-list");
  YsyntaxYTbq_listT = CHKREF(lit_205);
  lit_206 = YPPsym((P)"bq-list*");
  YsyntaxYTbq_listTT = CHKREF(lit_206);
  lit_207 = YPPsym((P)"bq-append");
  YsyntaxYTbq_appendT = CHKREF(lit_207);
  lit_208 = YPPsym((P)"bq-nconc");
  YsyntaxYTbq_nconcT = CHKREF(lit_208);
  lit_209 = YPPsym((P)"bq-clobberable");
  YsyntaxYTbq_clobberableT = CHKREF(lit_209);
  lit_210 = YPPsym((P)"bq-quote");
  YsyntaxYTbq_quoteT = CHKREF(lit_210);
  lit_211 = YPPsym((P)"sexpr-expand-backquote");
  lit_212 = YPPsym((P)"x");
  lit_213 = YPPsym((P)"proto");
  T30 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  YsyntaxYsexpr_expand_backquote = YPmet(FUNCODEREF(YsyntaxYsexpr_expand_backquote),CHKREF(lit_211),T30,ENVNUL);
  T31 = YsyntaxYsexpr_expand_backquote;
  YsyntaxYsexpr_expand_backquote = T31;
  lit_214 = YPPsym((P)"sexpr-build-backquote-expander");
  T32 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_build_backquote_expander_119 = YPmet(FUNCODEREF(fun_sexpr_build_backquote_expander_119),CHKREF(lit_214),T32,ENVNUL);
  T35 = BOUNDP(YsyntaxYsexpr_build_backquote_expander);
  if (T35 != YPfalse) {
    T34 = CHKREF(YsyntaxYsexpr_build_backquote_expander);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_sexpr_build_backquote_expander_119;
  T33 = CALL2(1,CHKREF(YPdefine_method),T34,T36);
  YsyntaxYsexpr_build_backquote_expander = T33;
  lit_215 = YPPsym((P)"sexpr-unquote?");
  lit_216 = YPPsym((P)"unquote");
  T37 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_unquoteQ_120 = YPmet(FUNCODEREF(fun_sexpr_unquoteQ_120),CHKREF(lit_215),T37,ENVNUL);
  T40 = BOUNDP(YsyntaxYsexpr_unquoteQ);
  if (T40 != YPfalse) {
    T39 = CHKREF(YsyntaxYsexpr_unquoteQ);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_sexpr_unquoteQ_120;
  T38 = CALL2(1,CHKREF(YPdefine_method),T39,T41);
  YsyntaxYsexpr_unquoteQ = T38;
  lit_217 = YPPsym((P)"sexpr-unquote-splicing?");
  lit_218 = YPPsym((P)"unquote-splicing");
  T42 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_unquote_splicingQ_121 = YPmet(FUNCODEREF(fun_sexpr_unquote_splicingQ_121),CHKREF(lit_217),T42,ENVNUL);
  T45 = BOUNDP(YsyntaxYsexpr_unquote_splicingQ);
  if (T45 != YPfalse) {
    T44 = CHKREF(YsyntaxYsexpr_unquote_splicingQ);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_sexpr_unquote_splicingQ_121;
  T43 = CALL2(1,CHKREF(YPdefine_method),T44,T46);
  YsyntaxYsexpr_unquote_splicingQ = T43;
  lit_219 = YPPsym((P)"sexpr-backquote?");
  T47 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_backquoteQ_122 = YPmet(FUNCODEREF(fun_sexpr_backquoteQ_122),CHKREF(lit_219),T47,ENVNUL);
  T50 = BOUNDP(YsyntaxYsexpr_backquoteQ);
  if (T50 != YPfalse) {
    T49 = CHKREF(YsyntaxYsexpr_backquoteQ);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_sexpr_backquoteQ_122;
  T48 = CALL2(1,CHKREF(YPdefine_method),T49,T51);
  YsyntaxYsexpr_backquoteQ = T48;
  lit_220 = YPPsym((P)"sexpr-atom?");
  T52 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_atomQ_123 = YPmet(FUNCODEREF(fun_sexpr_atomQ_123),CHKREF(lit_220),T52,ENVNUL);
  T55 = BOUNDP(YsyntaxYsexpr_atomQ);
  if (T55 != YPfalse) {
    T54 = CHKREF(YsyntaxYsexpr_atomQ);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_sexpr_atomQ_123;
  T53 = CALL2(1,CHKREF(YPdefine_method),T54,T56);
  YsyntaxYsexpr_atomQ = T53;
  lit_221 = YPPsym((P)"nreconc");
  lit_222 = YPPsym((P)"y");
  T57 = YPsig(YPPlist(2,CHKREF(lit_212),CHKREF(lit_222)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  fun_nreconc_124 = YPmet(FUNCODEREF(fun_nreconc_124),CHKREF(lit_221),T57,ENVNUL);
  T60 = BOUNDP(YsyntaxYnreconc);
  if (T60 != YPfalse) {
    T59 = CHKREF(YsyntaxYnreconc);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_nreconc_124;
  T58 = CALL2(1,CHKREF(YPdefine_method),T59,T61);
  YsyntaxYnreconc = T58;
  lit_223 = YPPsym((P)"bq-process");
  lit_224 = YPsb((P)"UNQUOTE-SPLICING %= AFTER BQ");
  lit_225 = YPPsym((P)"p");
  lit_226 = YPPsym((P)"q");
  lit_227 = YPsb((P)"Malformed ,%=");
  lit_228 = YPsb((P)"Dotted ,@%=");
  T64 = YPsig(YPPlist(2,CHKREF(lit_225),CHKREF(lit_226)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_loop_125 = YPmet(FUNCODEREF(fun_loop_125),CHKREF(lit_143),T64,ENVNUL);
  T63 = YPsig(YPPlist(1,CHKREF(lit_80)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_126 = YPmet(FUNCODEREF(fun_126),YPfalse,T63,ENVNUL);
  T62 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_bq_process_127 = YPmet(FUNCODEREF(fun_bq_process_127),CHKREF(lit_223),T62,ENVNUL);
  T67 = BOUNDP(YsyntaxYbq_process);
  if (T67 != YPfalse) {
    T66 = CHKREF(YsyntaxYbq_process);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_bq_process_127;
  T65 = CALL2(1,CHKREF(YPdefine_method),T66,T68);
  YsyntaxYbq_process = T65;
  lit_229 = YPPsym((P)"bracket");
  T69 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_bracket_128 = YPmet(FUNCODEREF(fun_bracket_128),CHKREF(lit_229),T69,ENVNUL);
  T72 = BOUNDP(YsyntaxYbracket);
  if (T72 != YPfalse) {
    T71 = CHKREF(YsyntaxYbracket);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_bracket_128;
  T70 = CALL2(1,CHKREF(YPdefine_method),T71,T73);
  YsyntaxYbracket = T70;
  lit_230 = YPPsym((P)"map-tree");
  lit_231 = YPPsym((P)"fn");
  T74 = YPsig(YPPlist(2,CHKREF(lit_231),CHKREF(lit_212)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_map_tree_129 = YPmet(FUNCODEREF(fun_map_tree_129),CHKREF(lit_230),T74,ENVNUL);
  T77 = BOUNDP(YsyntaxYmap_tree);
  if (T77 != YPfalse) {
    T76 = CHKREF(YsyntaxYmap_tree);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_map_tree_129;
  T75 = CALL2(1,CHKREF(YPdefine_method),T76,T78);
  YsyntaxYmap_tree = T75;
  lit_232 = YPPsym((P)"bq-remove-tokens");
  lit_233 = YPPsym((P)"cat");
  lit_234 = YPPsym((P)"cat!");
  lit_235 = YPPsym((P)"list*");
  lit_236 = YPPsym((P)"pair");
  T79 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_bq_remove_tokens_130 = YPmet(FUNCODEREF(fun_bq_remove_tokens_130),CHKREF(lit_232),T79,ENVNUL);
  T82 = BOUNDP(YsyntaxYbq_remove_tokens);
  if (T82 != YPfalse) {
    T81 = CHKREF(YsyntaxYbq_remove_tokens);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_bq_remove_tokens_130;
  T80 = CALL2(1,CHKREF(YPdefine_method),T81,T83);
  YsyntaxYbq_remove_tokens = T80;
  lit_237 = YPPsym((P)"sexpr-syntax-if?");
  T84 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_syntax_ifQ_131 = YPmet(FUNCODEREF(fun_sexpr_syntax_ifQ_131),CHKREF(lit_237),T84,ENVNUL);
  T87 = BOUNDP(YsyntaxYsexpr_syntax_ifQ);
  if (T87 != YPfalse) {
    T86 = CHKREF(YsyntaxYsexpr_syntax_ifQ);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_sexpr_syntax_ifQ_131;
  T85 = CALL2(1,CHKREF(YPdefine_method),T86,T88);
  YsyntaxYsexpr_syntax_ifQ = T85;
  lit_238 = YPPsym((P)"sexpr-syntax-if-value");
  T89 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_value_132 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_value_132),CHKREF(lit_238),T89,ENVNUL);
  T92 = BOUNDP(YsyntaxYsexpr_syntax_if_value);
  if (T92 != YPfalse) {
    T91 = CHKREF(YsyntaxYsexpr_syntax_if_value);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_sexpr_syntax_if_value_132;
  T90 = CALL2(1,CHKREF(YPdefine_method),T91,T93);
  YsyntaxYsexpr_syntax_if_value = T90;
  lit_239 = YPPsym((P)"sexpr-syntax-if-pattern");
  T94 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_pattern_133 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_pattern_133),CHKREF(lit_239),T94,ENVNUL);
  T97 = BOUNDP(YsyntaxYsexpr_syntax_if_pattern);
  if (T97 != YPfalse) {
    T96 = CHKREF(YsyntaxYsexpr_syntax_if_pattern);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_sexpr_syntax_if_pattern_133;
  T95 = CALL2(1,CHKREF(YPdefine_method),T96,T98);
  YsyntaxYsexpr_syntax_if_pattern = T95;
  lit_240 = YPPsym((P)"sexpr-syntax-if-then");
  T99 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_then_134 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_then_134),CHKREF(lit_240),T99,ENVNUL);
  T102 = BOUNDP(YsyntaxYsexpr_syntax_if_then);
  if (T102 != YPfalse) {
    T101 = CHKREF(YsyntaxYsexpr_syntax_if_then);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_sexpr_syntax_if_then_134;
  T100 = CALL2(1,CHKREF(YPdefine_method),T101,T103);
  YsyntaxYsexpr_syntax_if_then = T100;
  lit_241 = YPPsym((P)"sexpr-syntax-if-else");
  T104 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_else_135 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_else_135),CHKREF(lit_241),T104,ENVNUL);
  T107 = BOUNDP(YsyntaxYsexpr_syntax_if_else);
  if (T107 != YPfalse) {
    T106 = CHKREF(YsyntaxYsexpr_syntax_if_else);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_sexpr_syntax_if_else_135;
  T105 = CALL2(1,CHKREF(YPdefine_method),T106,T108);
  YsyntaxYsexpr_syntax_if_else = T105;
  lit_242 = YPPsym((P)"sexpr-pattern-variable?");
  T109 = YPsig(YPPlist(1,CHKREF(lit_203)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_sexpr_pattern_variableQ_136 = YPmet(FUNCODEREF(fun_sexpr_pattern_variableQ_136),CHKREF(lit_242),T109,ENVNUL);
  T112 = BOUNDP(YsyntaxYsexpr_pattern_variableQ);
  if (T112 != YPfalse) {
    T111 = CHKREF(YsyntaxYsexpr_pattern_variableQ);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_sexpr_pattern_variableQ_136;
  T110 = CALL2(1,CHKREF(YPdefine_method),T111,T113);
  YsyntaxYsexpr_pattern_variableQ = T110;
  lit_243 = YPPsym((P)"sexpr-pattern-variable-name");
  T114 = YPsig(YPPlist(1,CHKREF(lit_203)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_pattern_variable_name_137 = YPmet(FUNCODEREF(fun_sexpr_pattern_variable_name_137),CHKREF(lit_243),T114,ENVNUL);
  T117 = BOUNDP(YsyntaxYsexpr_pattern_variable_name);
  if (T117 != YPfalse) {
    T116 = CHKREF(YsyntaxYsexpr_pattern_variable_name);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_sexpr_pattern_variable_name_137;
  T115 = CALL2(1,CHKREF(YPdefine_method),T116,T118);
  YsyntaxYsexpr_pattern_variable_name = T115;
  lit_244 = YPPsym((P)"sexpr-bind-pattern-variables");
  T120 = YPsig(YPPlist(1,CHKREF(lit_203)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_col_138 = YPmet(FUNCODEREF(fun_col_138),CHKREF(lit_157),T120,ENVNUL);
  T119 = YPsig(YPPlist(1,CHKREF(lit_203)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_bind_pattern_variables_139 = YPmet(FUNCODEREF(fun_sexpr_bind_pattern_variables_139),CHKREF(lit_244),T119,ENVNUL);
  T123 = BOUNDP(YsyntaxYsexpr_bind_pattern_variables);
  if (T123 != YPfalse) {
    T122 = CHKREF(YsyntaxYsexpr_bind_pattern_variables);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_sexpr_bind_pattern_variables_139;
  T121 = CALL2(1,CHKREF(YPdefine_method),T122,T124);
  YsyntaxYsexpr_bind_pattern_variables = T121;
  lit_245 = YPPsym((P)"sexpr-make-macro-function");
  T125 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_make_macro_function_140 = YPmet(FUNCODEREF(fun_sexpr_make_macro_function_140),CHKREF(lit_245),T125,ENVNUL);
  T128 = BOUNDP(YsyntaxYsexpr_make_macro_function);
  if (T128 != YPfalse) {
    T127 = CHKREF(YsyntaxYsexpr_make_macro_function);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_sexpr_make_macro_function_140;
  T126 = CALL2(1,CHKREF(YPdefine_method),T127,T129);
  YsyntaxYsexpr_make_macro_function = T126;
  if (YPfalse != YPfalse) {
  } else {
  }
  T130 = YPfalse;
  return T130;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_runtime;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_runtime},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"add", &module_info_runtime, "add"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"add!", &module_info_runtime, "add!"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"lsh", &module_info_runtime, "lsh"},
  {"fab-map", &module_info_runtime, "fab-map"},
  {"case", &module_info_macros, "case"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"max", &module_info_runtime, "max"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"set", &module_info_boot, "set"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"%slot", &module_info_boot, "%slot"},
  {"*", &module_info_runtime, "*"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"export", &module_info_boot, "export"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"abs", &module_info_runtime, "abs"},
  {"<log>", &module_info_boot, "<log>"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"address-of", &module_info_runtime, "address-of"},
  {"from-above", &module_info_runtime, "from-above"},
  {"%f*", &module_info_boot, "%f*"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%i-", &module_info_boot, "%i-"},
  {"pos", &module_info_runtime, "pos"},
  {"dec", &module_info_macros, "dec"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"assoc", &module_info_runtime, "assoc"},
  {"collect", &module_info_macros, "collect"},
  {"default", &module_info_runtime, "default"},
  {"floor", &module_info_runtime, "floor"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"when", &module_info_macros, "when"},
  {"empty", &module_info_runtime, "empty"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"not", &module_info_boot, "not"},
  {"modulo", &module_info_runtime, "modulo"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"<any>", &module_info_boot, "<any>"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"from", &module_info_runtime, "from"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"<union>", &module_info_boot, "<union>"},
  {"find-key", &module_info_runtime, "find-key"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"out", &module_info_runtime, "out"},
  {"error", &module_info_boot, "error"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"apply", &module_info_macros, "apply"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"map", &module_info_macros, "map"},
  {"elt-or", &module_info_runtime, "elt-or"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"elt", &module_info_runtime, "elt"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"<=", &module_info_runtime, "<="},
  {"%fb", &module_info_boot, "%fb"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"remainder", &module_info_runtime, "remainder"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"nul?", &module_info_runtime, "nul?"},
  {"port-index", &module_info_runtime, "port-index"},
  {"char->ascii", &module_info_runtime, "char->ascii"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"quote", &module_info_boot, "quote"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"%f/", &module_info_boot, "%f/"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"map2", &module_info_runtime, "map2"},
  {"logior", &module_info_runtime, "logior"},
  {"fun", &module_info_boot, "fun"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"%i&", &module_info_boot, "%i&"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"%with-monitor", &module_info_runtime, "%with-monitor"},
  {"%i=", &module_info_boot, "%i="},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"~=", &module_info_runtime, "~="},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"dg", &module_info_boot, "dg"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"1st", &module_info_runtime, "1st"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"%ft", &module_info_boot, "%ft"},
  {"tail", &module_info_boot, "tail"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"pos?", &module_info_runtime, "pos?"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"logxor", &module_info_runtime, "logxor"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"==", &module_info_macros, "=="},
  {"reduce", &module_info_runtime, "reduce"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"opf", &module_info_macros, "opf"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"newline", &module_info_runtime, "newline"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"false-or", &module_info_runtime, "false-or"},
  {"%i?", &module_info_boot, "%i?"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"%i*", &module_info_boot, "%i*"},
  {"napply", &module_info_macros, "napply"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"%untag", &module_info_boot, "%untag"},
  {"%su", &module_info_boot, "%su"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"logand", &module_info_runtime, "logand"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"read", &module_info_runtime, "read"},
  {"%vec", &module_info_boot, "%vec"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"as", &module_info_runtime, "as"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"%velt", &module_info_boot, "%velt"},
  {"pick", &module_info_runtime, "pick"},
  {"if", &module_info_boot, "if"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"%c<", &module_info_boot, "%c<"},
  {"t<", &module_info_runtime, "t<"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"lognot", &module_info_runtime, "lognot"},
  {"force-output", &module_info_runtime, "force-output"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"%pair", &module_info_boot, "%pair"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"push", &module_info_runtime, "push"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"class-name", &module_info_boot, "class-name"},
  {"isa?", &module_info_boot, "isa?"},
  {"dss", &module_info_boot, "dss"},
  {"select", &module_info_macros, "select"},
  {"t=", &module_info_runtime, "t="},
  {"use", &module_info_boot, "use"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"isa", &module_info_boot, "isa"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"write-char", &module_info_runtime, "write-char"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"<type>", &module_info_boot, "<type>"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"<class>", &module_info_boot, "<class>"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"let", &module_info_boot, "let"},
  {"pushf", &module_info_macros, "pushf"},
  {"2nd", &module_info_runtime, "2nd"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"identity", &module_info_runtime, "identity"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"zero?", &module_info_runtime, "zero?"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"now-key", &module_info_runtime, "now-key"},
  {"fin", &module_info_boot, "fin"},
  {"mem?", &module_info_runtime, "mem?"},
  {">=", &module_info_runtime, ">="},
  {"=", &module_info_runtime, "="},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"from-below", &module_info_runtime, "from-below"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"t+", &module_info_runtime, "t+"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"sig", &module_info_runtime, "sig"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"next-method", &module_info_macros, "next-method"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"del", &module_info_runtime, "del"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"all?", &module_info_runtime, "all?"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"%cu", &module_info_boot, "%cu"},
  {"<map>", &module_info_runtime, "<map>"},
  {"vec", &module_info_runtime, "vec"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"%selt", &module_info_boot, "%selt"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"rev!", &module_info_runtime, "rev!"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"~==", &module_info_runtime, "~=="},
  {"<str>", &module_info_boot, "<str>"},
  {"sub", &module_info_runtime, "sub"},
  {"lst", &module_info_boot, "lst"},
  {"assert", &module_info_macros, "assert"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"round", &module_info_runtime, "round"},
  {"buf", &module_info_runtime, "buf"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"%lu", &module_info_boot, "%lu"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"%snul", &module_info_boot, "%snul"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"type-class", &module_info_boot, "type-class"},
  {"always", &module_info_runtime, "always"},
  {"nul", &module_info_boot, "nul"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"len", &module_info_runtime, "len"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"dlet", &module_info_macros, "dlet"},
  {"collected", &module_info_macros, "collected"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"%lb", &module_info_boot, "%lb"},
  {"or", &module_info_macros, "or"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"even?", &module_info_runtime, "even?"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"low-elt-setter", &module_info_runtime, "low-elt-setter"},
  {"%raw", &module_info_boot, "%raw"},
  {"%i^", &module_info_boot, "%i^"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"<met>", &module_info_boot, "<met>"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"@<", &module_info_boot, "@<"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"dp", &module_info_boot, "dp"},
  {"var-type", &module_info_macros, "var-type"},
  {"do", &module_info_runtime, "do"},
  {"seq", &module_info_boot, "seq"},
  {"try", &module_info_boot, "try"},
  {"3rd", &module_info_runtime, "3rd"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"fab", &module_info_runtime, "fab"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"%str", &module_info_boot, "%str"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"neg?", &module_info_runtime, "neg?"},
  {"%im", &module_info_boot, "%im"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"collecting", &module_info_macros, "collecting"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"str", &module_info_runtime, "str"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"any?", &module_info_runtime, "any?"},
  {"dm", &module_info_boot, "dm"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"rep", &module_info_boot, "rep"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"to-str", &module_info_runtime, "to-str"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"%i+", &module_info_boot, "%i+"},
  {"fill", &module_info_runtime, "fill"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"object-class", &module_info_boot, "object-class"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"unless", &module_info_macros, "unless"},
  {"+", &module_info_runtime, "+"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"loc", &module_info_boot, "loc"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"dv", &module_info_boot, "dv"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"mif", &module_info_boot, "mif"},
  {"@+", &module_info_boot, "@+"},
  {"assq", &module_info_runtime, "assq"},
  {"%sb", &module_info_boot, "%sb"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"alter", &module_info_runtime, "alter"},
  {"var-name", &module_info_macros, "var-name"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"min", &module_info_runtime, "min"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"truncate", &module_info_runtime, "truncate"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"/", &module_info_runtime, "/"},
  {"pop", &module_info_runtime, "pop"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"inc", &module_info_macros, "inc"},
  {">", &module_info_runtime, ">"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"<col>", &module_info_boot, "<col>"},
  {"cat", &module_info_macros, "cat"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"<range>", &module_info_runtime, "<range>"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"odd?", &module_info_runtime, "odd?"},
  {"assoc-value", &module_info_runtime, "assoc-value"},
  {"read-char", &module_info_runtime, "read-char"},
  {"<list>", &module_info_runtime, "<list>"},
  {"and", &module_info_macros, "and"},
  {"first-then", &module_info_runtime, "first-then"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"do3", &module_info_runtime, "do3"},
  {"tup", &module_info_macros, "tup"},
  {"nil", &module_info_boot, "nil"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"<port>", &module_info_runtime, "<port>"},
  {"fabs", &module_info_runtime, "fabs"},
  {"last", &module_info_runtime, "last"},
  {"low-elt", &module_info_runtime, "low-elt"},
  {"<", &module_info_runtime, "<"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"lab", &module_info_boot, "lab"},
  {"format", &module_info_runtime, "format"},
  {"%f+", &module_info_boot, "%f+"},
  {"neg", &module_info_runtime, "neg"},
  {"%f=", &module_info_boot, "%f="},
  {"list", &module_info_runtime, "list"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"dc", &module_info_boot, "dc"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"from-to", &module_info_runtime, "from-to"},
  {"@olen", &module_info_boot, "@olen"},
  {"type-object", &module_info_boot, "type-object"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"%i<", &module_info_boot, "%i<"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"from-by", &module_info_runtime, "from-by"},
  {"popf", &module_info_macros, "popf"},
  {"compose", &module_info_runtime, "compose"},
  {"%bb", &module_info_boot, "%bb"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"app-args", &module_info_runtime, "app-args"},
  {"%isa", &module_info_boot, "%isa"},
  {"%ib", &module_info_boot, "%ib"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"<error>", &module_info_runtime, "<error>"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"head", &module_info_boot, "head"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"rev", &module_info_runtime, "rev"},
  {"del-key", &module_info_runtime, "del-key"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"ascii-whitespaces", &module_info_runtime, "ascii-whitespaces"},
  {"%iu", &module_info_boot, "%iu"},
  {"ds", &module_info_boot, "ds"},
  {"assqn", &module_info_runtime, "assqn"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"keys", &module_info_runtime, "keys"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"%cb", &module_info_boot, "%cb"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"<int>", &module_info_boot, "<int>"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"%fu", &module_info_boot, "%fu"},
  {"in", &module_info_runtime, "in"},
  {"empty?", &module_info_macros, "empty?"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"assocq", &module_info_runtime, "assocq"},
  {"write-string", &module_info_runtime, "write-string"},
  {"curry", &module_info_runtime, "curry"},
  {"%slen", &module_info_boot, "%slen"},
  {"cat2", &module_info_runtime, "cat2"},
  {"floor/", &module_info_runtime, "floor/"},
  {"gensym", &module_info_macros, "gensym"},
  {"bound?", &module_info_boot, "bound?"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"<num>", &module_info_boot, "<num>"},
  {"%f-", &module_info_boot, "%f-"},
  {"%i!", &module_info_boot, "%i!"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"%it/", &module_info_boot, "%it/"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"do2", &module_info_runtime, "do2"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"slot", &module_info_boot, "slot"},
  {"cat!", &module_info_runtime, "cat!"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"ash", &module_info_runtime, "ash"},
  {"-", &module_info_runtime, "-"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"ct", &module_info_boot, "ct"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"pair", &module_info_macros, "pair"},
  {"%iv", &module_info_boot, "%iv"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"%f<", &module_info_boot, "%f<"},
  {"df", &module_info_boot, "df"},
  {"<step>", &module_info_runtime, "<step>"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"type-error", &module_info_boot, "type-error"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"%c=", &module_info_boot, "%c="},
  {"for", &module_info_macros, "for"},
  {"round/", &module_info_runtime, "round/"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sexpr-make-quote", &YsyntaxYsexpr_make_quote},
  {"sexpr-rest-exps", &YsyntaxYsexpr_rest_exps},
  {"sexpr-method-signature", &YsyntaxYsexpr_method_signature},
  {"sexpr-loc-bound-bodies", &YsyntaxYsexpr_loc_bound_bodies},
  {"$sexpr-isa-tag", &YsyntaxYDsexpr_isa_tag},
  {"sexpr-let-values", &YsyntaxYsexpr_let_values},
  {"$sexpr-if-tag", &YsyntaxYDsexpr_if_tag},
  {"sexpr-bind-pattern-variables", &YsyntaxYsexpr_bind_pattern_variables},
  {"sexpr-signature-value", &YsyntaxYsexpr_signature_value},
  {"$sexpr-iterate-tag", &YsyntaxYDsexpr_iterate_tag},
  {"sexpr-variable-name", &YsyntaxYsexpr_variable_name},
  {"sexpr-isa-init-values", &YsyntaxYsexpr_isa_init_values},
  {"*bq-nconc*", &YsyntaxYTbq_nconcT},
  {"sexpr-let->combination", &YsyntaxYsexpr_let_Gcombination},
  {"sexpr-function-signature", &YsyntaxYsexpr_function_signature},
  {"sexpr-let-names+values", &YsyntaxYsexpr_let_namesAvalues},
  {"*comma-atsign*", &YsyntaxYTcomma_atsignT},
  {"$sexpr-define-tag", &YsyntaxYDsexpr_define_tag},
  {"sexpr-monitor-test", &YsyntaxYsexpr_monitor_test},
  {"sexpr-syntax-definition-variable", &YsyntaxYsexpr_syntax_definition_variable},
  {"$sexpr-syntax-if-tag", &YsyntaxYDsexpr_syntax_if_tag},
  {"*bq-clobberable*", &YsyntaxYTbq_clobberableT},
  {"sexpr-make-if", &YsyntaxYsexpr_make_if},
  {"sexpr-sequence->begin", &YsyntaxYsexpr_sequence_Gbegin},
  {"sexpr-text-of-quotation", &YsyntaxYsexpr_text_of_quotation},
  {"sexpr-iterate->loc", &YsyntaxYsexpr_iterate_Gloc},
  {"sexpr-iterate-inits", &YsyntaxYsexpr_iterate_inits},
  {"$sexpr-macro-tag", &YsyntaxYDsexpr_macro_tag},
  {"sexpr-function-parameters", &YsyntaxYsexpr_function_parameters},
  {"sexpr-application?", &YsyntaxYsexpr_applicationQ},
  {"sexpr-make-getter", &YsyntaxYsexpr_make_getter},
  {"$sexpr-locals-tag", &YsyntaxYDsexpr_locals_tag},
  {"sexpr-isa-init-slots", &YsyntaxYsexpr_isa_init_slots},
  {"*bq-list**", &YsyntaxYTbq_listTT},
  {"sexpr-block?", &YsyntaxYsexpr_blockQ},
  {"sexpr-slot-variable", &YsyntaxYsexpr_slot_variable},
  {"sexpr-no-operands?", &YsyntaxYsexpr_no_operandsQ},
  {"sexpr-expand-backquote", &YsyntaxYsexpr_expand_backquote},
  {"sexpr-generic-definition?", &YsyntaxYsexpr_generic_definitionQ},
  {"$sexpr-let-tag", &YsyntaxYDsexpr_let_tag},
  {"sexpr-loc?", &YsyntaxYsexpr_locQ},
  {"$sexpr-define-class-tag", &YsyntaxYDsexpr_define_class_tag},
  {"sexpr-function-definition?", &YsyntaxYsexpr_function_definitionQ},
  {"sexpr-syntax-definition-value", &YsyntaxYsexpr_syntax_definition_value},
  {"sexpr-assignment-value", &YsyntaxYsexpr_assignment_value},
  {"sexpr-definition?", &YsyntaxYsexpr_definitionQ},
  {"sexpr-syntax-if-then", &YsyntaxYsexpr_syntax_if_then},
  {"nreconc", &YsyntaxYnreconc},
  {"sexpr-let-bound-variables", &YsyntaxYsexpr_let_bound_variables},
  {"sexpr-loc-bound-names", &YsyntaxYsexpr_loc_bound_names},
  {"sexpr-make-method", &YsyntaxYsexpr_make_method},
  {"sexpr-definition-variable", &YsyntaxYsexpr_definition_variable},
  {"bracket", &YsyntaxYbracket},
  {"sexpr-make-syntax-if", &YsyntaxYsexpr_make_syntax_if},
  {"sexpr-monitor-expand", &YsyntaxYsexpr_monitor_expand},
  {"$sexpr-begin-tag", &YsyntaxYDsexpr_begin_tag},
  {"*bq-quote*", &YsyntaxYTbq_quoteT},
  {"sexpr-assignment?", &YsyntaxYsexpr_assignmentQ},
  {"sexpr-function-definition-value", &YsyntaxYsexpr_function_definition_value},
  {"$sexpr-values-tag", &YsyntaxYDsexpr_values_tag},
  {"sexpr-signature-parameters", &YsyntaxYsexpr_signature_parameters},
  {"sexpr-unwind-protect-protected-form", &YsyntaxYsexpr_unwind_protect_protected_form},
  {"$sexpr-monitor-tag", &YsyntaxYDsexpr_monitor_tag},
  {"---main-0---", NULL},
  {"sexpr-define-class-parents", &YsyntaxYsexpr_define_class_parents},
  {"sexpr-variable-type", &YsyntaxYsexpr_variable_type},
  {"sexpr-method-body", &YsyntaxYsexpr_method_body},
  {"map-tree", &YsyntaxYmap_tree},
  {"sexpr-define-class?", &YsyntaxYsexpr_define_classQ},
  {"sexpr-monitor-type", &YsyntaxYsexpr_monitor_type},
  {"sexpr-iterate-name", &YsyntaxYsexpr_iterate_name},
  {"sexpr-rest-operands", &YsyntaxYsexpr_rest_operands},
  {"sexpr-variable?", &YsyntaxYsexpr_variableQ},
  {"sexpr-function-definition-variable", &YsyntaxYsexpr_function_definition_variable},
  {"sexpr-syntax-if?", &YsyntaxYsexpr_syntax_ifQ},
  {"*bq-append*", &YsyntaxYTbq_appendT},
  {"$sexpr-unwind-protect-tag", &YsyntaxYDsexpr_unwind_protect_tag},
  {"$sexpr-define-generic-tag", &YsyntaxYDsexpr_define_generic_tag},
  {"sexpr-let-body", &YsyntaxYsexpr_let_body},
  {"sexpr-method-value", &YsyntaxYsexpr_method_value},
  {"sexpr-method-definition?", &YsyntaxYsexpr_method_definitionQ},
  {"bq-process", &YsyntaxYbq_process},
  {"sexpr-isa-slot-inits", &YsyntaxYsexpr_isa_slot_inits},
  {"<name>", &YsyntaxYLnameG},
  {"sexpr-loc-body", &YsyntaxYsexpr_loc_body},
  {"$sexpr-quasiquote-tag", &YsyntaxYDsexpr_quasiquote_tag},
  {"sexpr-last-exp?", &YsyntaxYsexpr_last_expQ},
  {"sexpr-macro-expand?", &YsyntaxYsexpr_macro_expandQ},
  {"sexpr-monitor-info", &YsyntaxYsexpr_monitor_info},
  {"$sexpr-bind-exit-tag", &YsyntaxYDsexpr_bind_exit_tag},
  {"sexpr-syntax-if-value", &YsyntaxYsexpr_syntax_if_value},
  {"sexpr-function-value", &YsyntaxYsexpr_function_value},
  {"sexpr-operands", &YsyntaxYsexpr_operands},
  {"sexpr-new-unique-name-counter!", &YsyntaxYsexpr_new_unique_name_counterX},
  {"bq-remove-tokens", &YsyntaxYbq_remove_tokens},
  {"sexpr-block-body", &YsyntaxYsexpr_block_body},
  {"sexpr-make-setter", &YsyntaxYsexpr_make_setter},
  {"sexpr-unique-name", &YsyntaxYsexpr_unique_name},
  {"sexpr-first-exp", &YsyntaxYsexpr_first_exp},
  {"sexpr-unquote?", &YsyntaxYsexpr_unquoteQ},
  {"sexpr-iterate?", &YsyntaxYsexpr_iterateQ},
  {"$sexpr-method-tag", &YsyntaxYDsexpr_method_tag},
  {"sexpr-forward-primitive?", &YsyntaxYsexpr_forward_primitiveQ},
  {"sexpr-pattern-variable?", &YsyntaxYsexpr_pattern_variableQ},
  {"---main-2---", NULL},
  {"sexpr-if?", &YsyntaxYsexpr_ifQ},
  {"find-option", &YsyntaxYfind_option},
  {"sexpr-slot-object", &YsyntaxYsexpr_slot_object},
  {"sexpr-syntax-if-pattern", &YsyntaxYsexpr_syntax_if_pattern},
  {"sexpr-monitor?", &YsyntaxYsexpr_monitorQ},
  {"sexpr-tagged-list?", &YsyntaxYsexpr_tagged_listQ},
  {"sexpr-iterate-body", &YsyntaxYsexpr_iterate_body},
  {"$sexpr-define-syntax-tag", &YsyntaxYDsexpr_define_syntax_tag},
  {"sexpr-iterate-signature", &YsyntaxYsexpr_iterate_signature},
  {"sexpr-definition-value", &YsyntaxYsexpr_definition_value},
  {"sexpr-unwind-protect-cleanup-forms", &YsyntaxYsexpr_unwind_protect_cleanup_forms},
  {"sexpr-unwind-protect?", &YsyntaxYsexpr_unwind_protectQ},
  {"sexpr-syntax-if-else", &YsyntaxYsexpr_syntax_if_else},
  {"sexpr-quoted?", &YsyntaxYsexpr_quotedQ},
  {"$sexpr-set-tag", &YsyntaxYDsexpr_set_tag},
  {"sexpr-make-macro-function", &YsyntaxYsexpr_make_macro_function},
  {"sexpr-if-else", &YsyntaxYsexpr_if_else},
  {"sexpr-atom?", &YsyntaxYsexpr_atomQ},
  {"sexpr-operator", &YsyntaxYsexpr_operator},
  {"eval", &YsyntaxYeval},
  {"sexpr-backquote?", &YsyntaxYsexpr_backquoteQ},
  {"sexpr-build-backquote-expander", &YsyntaxYsexpr_build_backquote_expander},
  {"sexpr-assignment-variable", &YsyntaxYsexpr_assignment_variable},
  {"sexpr-let?", &YsyntaxYsexpr_letQ},
  {"sexpr-function-body", &YsyntaxYsexpr_function_body},
  {"sexpr-loc-bound-signatures", &YsyntaxYsexpr_loc_bound_signatures},
  {"sexpr-if-then", &YsyntaxYsexpr_if_then},
  {"$sexpr-define-function-tag", &YsyntaxYDsexpr_define_function_tag},
  {"sexpr-begin-actions", &YsyntaxYsexpr_begin_actions},
  {"sexpr-macro?", &YsyntaxYsexpr_macroQ},
  {"sexpr-if-test", &YsyntaxYsexpr_if_test},
  {"sexpr-make-setter-name", &YsyntaxYsexpr_make_setter_name},
  {"$sexpr-define-method-tag", &YsyntaxYDsexpr_define_method_tag},
  {"sexpr-block-name", &YsyntaxYsexpr_block_name},
  {"sexpr-pattern-variable-name", &YsyntaxYsexpr_pattern_variable_name},
  {"sexpr-make-begin", &YsyntaxYsexpr_make_begin},
  {"sexpr-slot?", &YsyntaxYsexpr_slotQ},
  {"sexpr-make-application", &YsyntaxYsexpr_make_application},
  {"$sexpr-slot-tag", &YsyntaxYDsexpr_slot_tag},
  {"$sexpr-macro-expand-tag", &YsyntaxYDsexpr_macro_expand_tag},
  {"sexpr-isa-parents", &YsyntaxYsexpr_isa_parents},
  {"sexpr-syntax-definition?", &YsyntaxYsexpr_syntax_definitionQ},
  {"sexpr-monitor-body", &YsyntaxYsexpr_monitor_body},
  {"sexpr-slot-init", &YsyntaxYsexpr_slot_init},
  {"sexpr-method-parameters", &YsyntaxYsexpr_method_parameters},
  {"sexpr-isa?", &YsyntaxYsexpr_isaQ},
  {"sexpr-unquote-splicing?", &YsyntaxYsexpr_unquote_splicingQ},
  {"sexpr-self-evaluating?", &YsyntaxYsexpr_self_evaluatingQ},
  {"*bq-list*", &YsyntaxYTbq_listT},
  {"sexpr-make-anonymous-method", &YsyntaxYsexpr_make_anonymous_method},
  {"sexpr-method?", &YsyntaxYsexpr_methodQ},
  {"sexpr-begin?", &YsyntaxYsexpr_beginQ},
  {"---main-1---", NULL},
  {"sexpr-first-operand", &YsyntaxYsexpr_first_operand},
  {"sexpr-loc-raw-body", &YsyntaxYsexpr_loc_raw_body},
  {"$sexpr-quote-tag", &YsyntaxYDsexpr_quote_tag},
  {"*unique-name-counter*", &YsyntaxYTunique_name_counterT},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"sexpr-method-signature", "sexpr-method-signature"},
  {"$sexpr-isa-tag", "$sexpr-isa-tag"},
  {"$sexpr-if-tag", "$sexpr-if-tag"},
  {"sexpr-signature-value", "sexpr-signature-value"},
  {"$sexpr-iterate-tag", "$sexpr-iterate-tag"},
  {"sexpr-isa-init-values", "sexpr-isa-init-values"},
  {"sexpr-let->combination", "sexpr-let->combination"},
  {"sexpr-function-signature", "sexpr-function-signature"},
  {"$sexpr-define-tag", "$sexpr-define-tag"},
  {"sexpr-syntax-definition-variable", "sexpr-syntax-definition-variable"},
  {"$sexpr-syntax-if-tag", "$sexpr-syntax-if-tag"},
  {"sexpr-sequence->begin", "sexpr-sequence->begin"},
  {"$sexpr-locals-tag", "$sexpr-locals-tag"},
  {"sexpr-iterate->loc", "sexpr-iterate->loc"},
  {"$sexpr-let-tag", "$sexpr-let-tag"},
  {"sexpr-make-getter", "sexpr-make-getter"},
  {"sexpr-isa-init-slots", "sexpr-isa-init-slots"},
  {"sexpr-slot-variable", "sexpr-slot-variable"},
  {"sexpr-expand-backquote", "sexpr-expand-backquote"},
  {"$sexpr-define-class-tag", "$sexpr-define-class-tag"},
  {"sexpr-syntax-definition-value", "sexpr-syntax-definition-value"},
  {"sexpr-loc-bound-bodies", "sexpr-loc-bound-bodies"},
  {"sexpr-assignment-value", "sexpr-assignment-value"},
  {"sexpr-syntax-if-then", "sexpr-syntax-if-then"},
  {"sexpr-loc-bound-names", "sexpr-loc-bound-names"},
  {"sexpr-definition-variable", "sexpr-definition-variable"},
  {"sexpr-syntax-if-pattern", "sexpr-syntax-if-pattern"},
  {"$sexpr-begin-tag", "$sexpr-begin-tag"},
  {"sexpr-function-definition-value", "sexpr-function-definition-value"},
  {"sexpr-signature-parameters", "sexpr-signature-parameters"},
  {"$sexpr-monitor-tag", "$sexpr-monitor-tag"},
  {"sexpr-define-class-parents", "sexpr-define-class-parents"},
  {"$sexpr-macro-expand-tag", "$sexpr-macro-expand-tag"},
  {"sexpr-variable-type", "sexpr-variable-type"},
  {"sexpr-method-body", "sexpr-method-body"},
  {"sexpr-define-class?", "sexpr-define-class?"},
  {"sexpr-variable?", "sexpr-variable?"},
  {"sexpr-function-definition-variable", "sexpr-function-definition-variable"},
  {"$sexpr-unwind-protect-tag", "$sexpr-unwind-protect-tag"},
  {"$sexpr-define-generic-tag", "$sexpr-define-generic-tag"},
  {"sexpr-isa-slot-inits", "sexpr-isa-slot-inits"},
  {"$sexpr-quasiquote-tag", "$sexpr-quasiquote-tag"},
  {"$sexpr-bind-exit-tag", "$sexpr-bind-exit-tag"},
  {"sexpr-syntax-if-value", "sexpr-syntax-if-value"},
  {"sexpr-operands", "sexpr-operands"},
  {"sexpr-unwind-protect-cleanup-forms", "sexpr-unwind-protect-cleanup-forms"},
  {"sexpr-make-setter-name", "sexpr-make-setter-name"},
  {"sexpr-block-body", "sexpr-block-body"},
  {"sexpr-make-setter", "sexpr-make-setter"},
  {"$sexpr-slot-tag", "$sexpr-slot-tag"},
  {"sexpr-unquote?", "sexpr-unquote?"},
  {"$sexpr-method-tag", "$sexpr-method-tag"},
  {"sexpr-forward-primitive?", "sexpr-forward-primitive?"},
  {"sexpr-slot-object", "sexpr-slot-object"},
  {"sexpr-monitor-expand", "sexpr-monitor-expand"},
  {"$sexpr-define-syntax-tag", "$sexpr-define-syntax-tag"},
  {"sexpr-definition-value", "sexpr-definition-value"},
  {"sexpr-text-of-quotation", "sexpr-text-of-quotation"},
  {"sexpr-syntax-if-else", "sexpr-syntax-if-else"},
  {"$sexpr-set-tag", "$sexpr-set-tag"},
  {"sexpr-make-macro-function", "sexpr-make-macro-function"},
  {"sexpr-operator", "sexpr-operator"},
  {"eval", "eval"},
  {"sexpr-if-then", "sexpr-if-then"},
  {"sexpr-assignment-variable", "sexpr-assignment-variable"},
  {"sexpr-function-body", "sexpr-function-body"},
  {"sexpr-loc-bound-signatures", "sexpr-loc-bound-signatures"},
  {"sexpr-bind-pattern-variables", "sexpr-bind-pattern-variables"},
  {"$sexpr-define-function-tag", "$sexpr-define-function-tag"},
  {"sexpr-if-test", "sexpr-if-test"},
  {"$sexpr-define-method-tag", "$sexpr-define-method-tag"},
  {"sexpr-block-name", "sexpr-block-name"},
  {"sexpr-make-begin", "sexpr-make-begin"},
  {"sexpr-make-application", "sexpr-make-application"},
  {"sexpr-if-else", "sexpr-if-else"},
  {"sexpr-isa-parents", "sexpr-isa-parents"},
  {"sexpr-slot-init", "sexpr-slot-init"},
  {"sexpr-unquote-splicing?", "sexpr-unquote-splicing?"},
  {"sexpr-make-anonymous-method", "sexpr-make-anonymous-method"},
  {"sexpr-unwind-protect-protected-form", "sexpr-unwind-protect-protected-form"},
  {"sexpr-loc-raw-body", "sexpr-loc-raw-body"},
  {"$sexpr-quote-tag", "$sexpr-quote-tag"},
  {"sexpr-variable-name", "sexpr-variable-name"},
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

/* EXPRESSION: */

extern void load_module_syntax (void);

void load_module_syntax (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_runtime();

  (P)YsyntaxY___main_0___();
  (P)YsyntaxY___main_1___();
  (P)YsyntaxY___main_2___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
