/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: syntax */

DEF(YsyntaxYsexpr_atomQ,"syntax","sexpr-atom?");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
DEF(YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
DEF(YsyntaxYsexpr_definitionQ,"syntax","sexpr-definition?");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
DEF(YsyntaxYsexpr_isa_init_slots,"syntax","sexpr-isa-init-slots");
DEF(YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YruntimeYfrom,"runtime","from");
DEF(YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
DEF(YsyntaxYsexpr_iterate_signature,"syntax","sexpr-iterate-signature");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
DEF(YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(Ynul,"boot","nul");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYkeys,"runtime","keys");
DEF(YsyntaxYsexpr_define_classQ,"syntax","sexpr-define-class?");
DEF(YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YruntimeYstr,"runtime","str");
DEF(YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
DEF(YsyntaxYsexpr_applicationQ,"syntax","sexpr-application?");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
DEF(YsyntaxYsexpr_isa_slot_inits,"syntax","sexpr-isa-slot-inits");
EXT(YruntimeYlen,"runtime","len");
DEF(YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YLoptsG,"boot","<opts>");
DEF(YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
EXT(YPsnul,"boot","%snul");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YLunionG,"boot","<union>");
DEF(YsyntaxYsexpr_define_class_parents,"syntax","sexpr-define-class-parents");
DEF(YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
EXT(YruntimeYfrom_to,"runtime","from-to");
DEF(YsyntaxYsexpr_monitor_info,"syntax","sexpr-monitor-info");
DEF(YsyntaxYsexpr_make_setter_name,"syntax","sexpr-make-setter-name");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
DEF(YsyntaxYsexpr_beginQ,"syntax","sexpr-begin?");
DEF(YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
DEF(YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
DEF(YsyntaxYTbq_listT,"syntax","*bq-list*");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YruntimeYin,"runtime","in");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
DEF(YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
EXT(YLlogG,"boot","<log>");
EXT(YmacrosYtup,"macros","tup");
DEF(YsyntaxYsexpr_operands,"syntax","sexpr-operands");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(Yfun_specs,"boot","fun-specs");
DEF(YsyntaxYsexpr_monitor_body,"syntax","sexpr-monitor-body");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
DEF(YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YruntimeYlist,"runtime","list");
EXT(Ytail,"boot","tail");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YruntimeYLconditionG,"runtime","<condition>");
DEF(YsyntaxYsexpr_letQ,"syntax","sexpr-let?");
EXT(YruntimeYfill,"runtime","fill");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YmacrosYEE,"macros","==");
EXT(YruntimeY1st,"runtime","1st");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YLanyG,"boot","<any>");
EXT(YruntimeYpop,"runtime","pop");
EXT(YruntimeYvec,"runtime","vec");
DEF(YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YPdefine_method,"boot","%define-method");
DEF(YsyntaxYsexpr_macroQ,"syntax","sexpr-macro?");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YruntimeYassocq,"runtime","assocq");
DEF(YsyntaxYTcomma_atsignT,"syntax","*comma-atsign*");
DEF(YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYalter,"runtime","alter");
DEF(YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
EXT(YruntimeYpick,"runtime","pick");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YruntimeYfrom_by,"runtime","from-by");
DEF(YsyntaxYsexpr_isaQ,"syntax","sexpr-isa?");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(Ytype_object,"boot","type-object");
EXT(YruntimeYdel_keys,"runtime","del-keys");
DEF(YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
DEF(YsyntaxYsexpr_isa_parents,"syntax","sexpr-isa-parents");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYS,"runtime","/");
EXT(YruntimeYapp_filename,"runtime","app-filename");
DEF(YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(Yslot_init,"boot","slot-init");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(Yobject_parents,"boot","object-parents");
DEF(YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
DEF(YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
EXT(YruntimeYpos,"runtime","pos");
DEF(YsyntaxYfind_option,"syntax","find-option");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(Ynot,"boot","not");
EXT(YruntimeYmin,"runtime","min");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YruntimeYdel_dups,"runtime","del-dups");
DEF(YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
EXT(Yfun_names,"boot","fun-names");
EXT(Ysig_value,"boot","sig-value");
EXT(Ysym_name,"boot","sym-name");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YruntimeYoddQ,"runtime","odd?");
DEF(YsyntaxYsexpr_first_exp,"syntax","sexpr-first-exp");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYassq,"runtime","assq");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YPPmacro,"boot","%%macro");
DEF(YsyntaxYTbq_nconcT,"syntax","*bq-nconc*");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YruntimeYneg,"runtime","neg");
EXT(Yobject_slots,"boot","object-slots");
DEF(YsyntaxYsexpr_monitor_expand,"syntax","sexpr-monitor-expand");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYwrite_string,"runtime","write-string");
DEF(YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
DEF(YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
EXT(YLclassG,"boot","<class>");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
DEF(YsyntaxYbq_process,"syntax","bq-process");
DEF(YsyntaxYsexpr_monitor_type,"syntax","sexpr-monitor-type");
EXT(YruntimeYfrom_below,"runtime","from-below");
DEF(YsyntaxYsexpr_make_syntax_if,"syntax","sexpr-make-syntax-if");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(Ytype_error,"boot","type-error");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(Yerror,"boot","error");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
DEF(YsyntaxYsexpr_monitor_test,"syntax","sexpr-monitor-test");
EXT(Yfind_setter,"boot","find-setter");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YLtypeG,"boot","<type>");
DEF(YsyntaxYTbq_quoteT,"syntax","*bq-quote*");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(Ysig_names,"boot","sig-names");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYto_digit,"runtime","to-digit");
DEF(YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YPvnul,"boot","%vnul");
EXT(YruntimeYLbufG,"runtime","<buf>");
DEF(YsyntaxYsexpr_make_quote,"syntax","sexpr-make-quote");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYlocative_value,"runtime","locative-value");
DEF(YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YruntimeYnegQ,"runtime","neg?");
DEF(YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
DEF(YsyntaxYsexpr_quotedQ,"syntax","sexpr-quoted?");
EXT(YruntimeYrcurry,"runtime","rcurry");
DEF(YsyntaxYmap_tree,"syntax","map-tree");
DEF(YsyntaxYsexpr_let_values,"syntax","sexpr-let-values");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YruntimeYdel,"runtime","del");
DEF(YsyntaxYsexpr_blockQ,"syntax","sexpr-block?");
DEF(YsyntaxYsexpr_let_namesAvalues,"syntax","sexpr-let-names+values");
EXT(Yfapply,"boot","fapply");
EXT(Yadd_slot,"boot","add-slot");
DEF(YsyntaxYsexpr_rest_operands,"syntax","sexpr-rest-operands");
EXT(Yhead,"boot","head");
DEF(YsyntaxYsexpr_methodQ,"syntax","sexpr-method?");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
DEF(YsyntaxYsexpr_let_body,"syntax","sexpr-let-body");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
DEF(YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
DEF(YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
DEF(YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
EXT(YruntimeYround,"runtime","round");
EXT(YruntimeYfloorS,"runtime","floor/");
DEF(YsyntaxYsexpr_pattern_variable_name,"syntax","sexpr-pattern-variable-name");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
DEF(YsyntaxYsexpr_syntax_definitionQ,"syntax","sexpr-syntax-definition?");
DEF(YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
EXT(YruntimeYdo2,"runtime","do2");
DEF(YsyntaxYsexpr_no_operandsQ,"syntax","sexpr-no-operands?");
DEF(YsyntaxYsexpr_unwind_protectQ,"syntax","sexpr-unwind-protect?");
EXT(YruntimeYsub,"runtime","sub");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
DEF(YsyntaxYDsexpr_macro_tag,"syntax","$sexpr-macro-tag");
DEF(YsyntaxYsexpr_unique_name,"syntax","sexpr-unique-name");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
DEF(YsyntaxYnreconc,"syntax","nreconc");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Yhead_setter,"boot","head-setter");
EXT(YruntimeYroundS,"runtime","round/");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
DEF(YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYaddress_of,"runtime","address-of");
DEF(YsyntaxYsexpr_iterate_body,"syntax","sexpr-iterate-body");
EXT(Yfind_getter,"boot","find-getter");
EXT(YruntimeYash,"runtime","ash");
DEF(YsyntaxYsexpr_locQ,"syntax","sexpr-loc?");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
DEF(YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(Yobject_class,"boot","object-class");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YruntimeYwrite_char,"runtime","write-char");
DEF(YsyntaxYsexpr_self_evaluatingQ,"syntax","sexpr-self-evaluating?");
DEF(YsyntaxYsexpr_begin_actions,"syntax","sexpr-begin-actions");
EXT(YLgenG,"boot","<gen>");
DEF(YsyntaxYDsexpr_define_class_tag,"syntax","$sexpr-define-class-tag");
EXT(Ynil,"boot","nil");
EXT(YPcall_next_method,"boot","%call-next-method");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YruntimeYabs,"runtime","abs");
EXT(YruntimeYformat,"runtime","format");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YruntimeYT,"runtime","*");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
EXT(YruntimeYA,"runtime","+");
EXT(YruntimeYtruncateS,"runtime","truncate/");
DEF(YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
EXT(Yfab_gen,"boot","fab-gen");
DEF(YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
EXT(YruntimeYcurry,"runtime","curry");
EXT(Yhandler_info_message,"boot","handler-info-message");
DEF(YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
EXT(YLvecG,"boot","<vec>");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(Ysig_arity,"boot","sig-arity");
DEF(YsyntaxYbracket,"syntax","bracket");
EXT(YruntimeYmax,"runtime","max");
EXT(YruntimeYeof_object,"runtime","eof-object");
DEF(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
DEF(YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
DEF(YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
DEF(YsyntaxYsexpr_make_setter,"syntax","sexpr-make-setter");
DEF(YsyntaxYbq_remove_tokens,"syntax","bq-remove-tokens");
DEF(YsyntaxYsexpr_backquoteQ,"syntax","sexpr-backquote?");
EXT(YruntimeYfloor,"runtime","floor");
DEF(YsyntaxYsexpr_make_method,"syntax","sexpr-make-method");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
DEF(YsyntaxYTbq_listTT,"syntax","*bq-list**");
DEF(YsyntaxYsexpr_slot_init,"syntax","sexpr-slot-init");
EXT(Yclass_slots,"boot","class-slots");
EXT(YruntimeYmodulo,"runtime","modulo");
DEF(YsyntaxYsexpr_last_expQ,"syntax","sexpr-last-exp?");
EXT(YruntimeYdefault,"runtime","default");
DEF(YsyntaxYeval,"syntax","eval");
DEF(YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
DEF(YsyntaxYsexpr_ifQ,"syntax","sexpr-if?");
DEF(YsyntaxYsexpr_build_backquote_expander,"syntax","sexpr-build-backquote-expander");
EXT(YLflatG,"boot","<flat>");
DEF(YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
DEF(YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(YruntimeYreduceA,"runtime","reduce+");
DEF(YsyntaxYsexpr_pattern_variableQ,"syntax","sexpr-pattern-variable?");
EXT(YLmetG,"boot","<met>");
DEF(YsyntaxYsexpr_slot_variable,"syntax","sexpr-slot-variable");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YruntimeYempty,"runtime","empty");
EXT(YruntimeYport_index,"runtime","port-index");
DEF(YsyntaxYsexpr_iterate_inits,"syntax","sexpr-iterate-inits");
EXT(Ylst,"boot","lst");
EXT(YLtupG,"boot","<tup>");
DEF(YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
EXT(YruntimeYfirst_then,"runtime","first-then");
DEF(YsyntaxYLnameG,"syntax","<name>");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(Yfab_class,"boot","fab-class");
EXT(YruntimeYlogior,"runtime","logior");
EXT(Yfun_value,"boot","fun-value");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(YPsymbols,"boot","%symbols");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
DEF(YsyntaxYsexpr_iterateQ,"syntax","sexpr-iterate?");
EXT(Ytype_elts,"boot","type-elts");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYE,"runtime","=");
DEF(YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YruntimeYmap2,"runtime","map2");
DEF(YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
DEF(YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YLlstG,"boot","<lst>");
DEF(YsyntaxYsexpr_function_parameters,"syntax","sexpr-function-parameters");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
DEF(YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YPisa,"boot","%isa");
DEF(YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
DEF(YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
DEF(YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
EXT(YruntimeYL,"runtime","<");
EXT(YLfunG,"boot","<fun>");
EXT(Yfun_name,"boot","fun-name");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(Yclass_name,"boot","class-name");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YruntimeYalways,"runtime","always");
DEF(YsyntaxYsexpr_monitorQ,"syntax","sexpr-monitor?");
DEF(YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
DEF(YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
DEF(YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
EXT(YLseqG,"boot","<seq>");
EXT(YruntimeYpush,"runtime","push");
DEF(YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
DEF(YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YruntimeYNE,"runtime","~=");
EXT(Yfun_name_setter,"boot","fun-name-setter");
DEF(YsyntaxYsexpr_iterate_name,"syntax","sexpr-iterate-name");
DEF(YsyntaxYsexpr_operator,"syntax","sexpr-operator");
EXT(YmacrosYcat,"macros","cat");
DEF(YsyntaxYsexpr_slotQ,"syntax","sexpr-slot?");
EXT(YruntimeYG,"runtime",">");
EXT(YruntimeYlast,"runtime","last");
DEF(YsyntaxYsexpr_generic_definitionQ,"syntax","sexpr-generic-definition?");
EXT(YruntimeYlogand,"runtime","logand");
DEF(YsyntaxYsexpr_make_if,"syntax","sexpr-make-if");
EXT(YruntimeYtL,"runtime","t<");
DEF(YsyntaxYsexpr_rest_exps,"syntax","sexpr-rest-exps");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(Yapply,"boot","apply");
DEF(YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
EXT(YruntimeYdo,"runtime","do");
DEF(YsyntaxYsexpr_method_value,"syntax","sexpr-method-value");
DEF(YsyntaxYDsexpr_slot_tag,"syntax","$sexpr-slot-tag");
DEF(YsyntaxYsexpr_macro_expandQ,"syntax","sexpr-macro-expand?");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YruntimeYfab,"runtime","fab");
DEF(YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
EXT(YruntimeYceiling,"runtime","ceiling");
DEF(YsyntaxYsexpr_first_operand,"syntax","sexpr-first-operand");
DEF(YsyntaxYsexpr_let_bound_variables,"syntax","sexpr-let-bound-variables");
DEF(YsyntaxYsexpr_tagged_listQ,"syntax","sexpr-tagged-list?");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YruntimeYas,"runtime","as");
EXT(YruntimeYsig,"runtime","sig");
EXT(YruntimeYout,"runtime","out");
DEF(YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(Yslot_setter,"boot","slot-setter");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYtE,"runtime","t=");
DEF(YsyntaxYDsexpr_values_tag,"syntax","$sexpr-values-tag");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YruntimeYrev,"runtime","rev");
DEF(YsyntaxYsexpr_function_value,"syntax","sexpr-function-value");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YLlocG,"boot","<loc>");
EXT(YLsigG,"boot","<sig>");
DEF(YsyntaxYTbq_appendT,"syntax","*bq-append*");
EXT(Ysig_naryQ,"boot","sig-nary?");
DEF(YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
DEF(YsyntaxYsexpr_assignmentQ,"syntax","sexpr-assignment?");
EXT(Yfun_mets,"boot","fun-mets");
EXT(Yclass_parents,"boot","class-parents");
DEF(YsyntaxYsexpr_slot_object,"syntax","sexpr-slot-object");
DEF(YsyntaxYsexpr_make_getter,"syntax","sexpr-make-getter");
EXT(YPslot,"boot","%slot");
DEF(YsyntaxYsexpr_new_unique_name_counterX,"syntax","sexpr-new-unique-name-counter!");
DEF(YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
DEF(YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
DEF(YsyntaxYsexpr_function_definitionQ,"syntax","sexpr-function-definition?");
DEF(YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YLfloG,"boot","<flo>");
DEF(YsyntaxYsexpr_method_definitionQ,"syntax","sexpr-method-definition?");
EXT(YruntimeYtA,"runtime","t+");
DEF(YsyntaxYsexpr_method_parameters,"syntax","sexpr-method-parameters");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(Yslot_value,"boot","slot-value");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
DEF(YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YruntimeYcatX,"runtime","cat!");
DEF(YsyntaxYTbq_clobberableT,"syntax","*bq-clobberable*");
EXT(Ytype_class,"boot","type-class");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
DEF(YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
EXT(YruntimeYLerrorG,"runtime","<error>");
DEF(YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YruntimeYGE,"runtime",">=");
EXT(YLintG,"boot","<int>");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YruntimeYport_contents,"runtime","port-contents");
DEF(YsyntaxYsexpr_syntax_ifQ,"syntax","sexpr-syntax-if?");
EXT(Yfun_naryQ,"boot","fun-nary?");
DEF(YsyntaxYTunique_name_counterT,"syntax","*unique-name-counter*");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
DEF(YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYmake_handler,"runtime","make-handler");
DEF(YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
EXT(YruntimeYLmapG,"runtime","<map>");
DEF(YsyntaxYsexpr_loc_body,"syntax","sexpr-loc-body");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_56);
DEFLIT(lit_223);
DEFLIT(lit_18);
DEFLIT(lit_228);
DEFLIT(lit_184);
DEFLIT(lit_152);
DEFLIT(lit_23);
DEFLIT(lit_218);
DEFLIT(lit_42);
DEFLIT(lit_28);
DEFLIT(lit_100);
DEFLIT(lit_80);
DEFLIT(lit_235);
DEFLIT(lit_54);
DEFLIT(lit_51);
DEFLIT(lit_145);
DEFLIT(lit_76);
DEFLIT(lit_230);
DEFLIT(lit_101);
DEFLIT(lit_120);
DEFLIT(lit_92);
DEFLIT(lit_213);
DEFLIT(lit_138);
DEFLIT(lit_108);
DEFLIT(lit_39);
DEFLIT(lit_24);
DEFLIT(lit_58);
DEFLIT(lit_229);
DEFLIT(lit_181);
DEFLIT(lit_59);
DEFLIT(lit_127);
DEFLIT(lit_113);
DEFLIT(lit_192);
DEFLIT(lit_133);
DEFLIT(lit_161);
DEFLIT(lit_111);
DEFLIT(lit_208);
DEFLIT(lit_64);
DEFLIT(lit_163);
DEFLIT(lit_175);
DEFLIT(lit_169);
DEFLIT(lit_74);
DEFLIT(lit_225);
DEFLIT(lit_52);
DEFLIT(lit_224);
DEFLIT(lit_188);
DEFLIT(lit_200);
DEFLIT(lit_131);
DEFLIT(lit_14);
DEFLIT(lit_31);
DEFLIT(lit_46);
DEFLIT(lit_50);
DEFLIT(lit_164);
DEFLIT(lit_166);
DEFLIT(lit_176);
DEFLIT(lit_214);
DEFLIT(lit_104);
DEFLIT(lit_116);
DEFLIT(lit_34);
DEFLIT(lit_149);
DEFLIT(lit_217);
DEFLIT(lit_102);
DEFLIT(lit_182);
DEFLIT(lit_71);
DEFLIT(lit_170);
DEFLIT(lit_87);
DEFLIT(lit_129);
DEFLIT(lit_150);
DEFLIT(lit_36);
DEFLIT(lit_4);
DEFLIT(lit_174);
DEFLIT(lit_63);
DEFLIT(lit_84);
DEFLIT(lit_135);
DEFLIT(lit_240);
DEFLIT(lit_86);
DEFLIT(lit_107);
DEFLIT(lit_27);
DEFLIT(lit_137);
DEFLIT(lit_118);
DEFLIT(lit_241);
DEFLIT(lit_245);
DEFLIT(lit_197);
DEFLIT(lit_190);
DEFLIT(lit_194);
DEFLIT(lit_155);
DEFLIT(lit_132);
DEFLIT(lit_25);
DEFLIT(lit_89);
DEFLIT(lit_122);
DEFLIT(lit_244);
DEFLIT(lit_22);
DEFLIT(lit_7);
DEFLIT(lit_3);
DEFLIT(lit_75);
DEFLIT(lit_6);
DEFLIT(lit_168);
DEFLIT(lit_125);
DEFLIT(lit_243);
DEFLIT(lit_12);
DEFLIT(lit_144);
DEFLIT(lit_98);
DEFLIT(lit_0);
DEFLIT(lit_158);
DEFLIT(lit_68);
DEFLIT(lit_96);
DEFLIT(lit_79);
DEFLIT(lit_187);
DEFLIT(lit_8);
DEFLIT(lit_65);
DEFLIT(lit_157);
DEFLIT(lit_117);
DEFLIT(lit_95);
DEFLIT(lit_115);
DEFLIT(lit_173);
DEFLIT(lit_201);
DEFLIT(lit_30);
DEFLIT(lit_186);
DEFLIT(lit_55);
DEFLIT(lit_146);
DEFLIT(lit_38);
DEFLIT(lit_85);
DEFLIT(lit_143);
DEFLIT(lit_216);
DEFLIT(lit_105);
DEFLIT(lit_19);
DEFLIT(lit_165);
DEFLIT(lit_140);
DEFLIT(lit_219);
DEFLIT(lit_78);
DEFLIT(lit_33);
DEFLIT(lit_97);
DEFLIT(lit_215);
DEFLIT(lit_196);
DEFLIT(lit_242);
DEFLIT(lit_167);
DEFLIT(lit_227);
DEFLIT(lit_53);
DEFLIT(lit_203);
DEFLIT(lit_154);
DEFLIT(lit_209);
DEFLIT(lit_179);
DEFLIT(lit_62);
DEFLIT(lit_110);
DEFLIT(lit_210);
DEFLIT(lit_136);
DEFLIT(lit_44);
DEFLIT(lit_171);
DEFLIT(lit_29);
DEFLIT(lit_202);
DEFLIT(lit_90);
DEFLIT(lit_204);
DEFLIT(lit_70);
DEFLIT(lit_126);
DEFLIT(lit_221);
DEFLIT(lit_222);
DEFLIT(lit_103);
DEFLIT(lit_206);
DEFLIT(lit_193);
DEFLIT(lit_238);
DEFLIT(lit_57);
DEFLIT(lit_231);
DEFLIT(lit_73);
DEFLIT(lit_128);
DEFLIT(lit_11);
DEFLIT(lit_121);
DEFLIT(lit_156);
DEFLIT(lit_114);
DEFLIT(lit_60);
DEFLIT(lit_109);
DEFLIT(lit_48);
DEFLIT(lit_61);
DEFLIT(lit_183);
DEFLIT(lit_16);
DEFLIT(lit_40);
DEFLIT(lit_41);
DEFLIT(lit_93);
DEFLIT(lit_35);
DEFLIT(lit_151);
DEFLIT(lit_239);
DEFLIT(lit_72);
DEFLIT(lit_26);
DEFLIT(lit_234);
DEFLIT(lit_91);
DEFLIT(lit_139);
DEFLIT(lit_10);
DEFLIT(lit_77);
DEFLIT(lit_172);
DEFLIT(lit_153);
DEFLIT(lit_207);
DEFLIT(lit_9);
DEFLIT(lit_141);
DEFLIT(lit_123);
DEFLIT(lit_66);
DEFLIT(lit_83);
DEFLIT(lit_211);
DEFLIT(lit_15);
DEFLIT(lit_199);
DEFLIT(lit_37);
DEFLIT(lit_198);
DEFLIT(lit_69);
DEFLIT(lit_1);
DEFLIT(lit_205);
DEFLIT(lit_88);
DEFLIT(lit_112);
DEFLIT(lit_124);
DEFLIT(lit_178);
DEFLIT(lit_17);
DEFLIT(lit_20);
DEFLIT(lit_2);
DEFLIT(lit_160);
DEFLIT(lit_81);
DEFLIT(lit_180);
DEFLIT(lit_233);
DEFLIT(lit_162);
DEFLIT(lit_134);
DEFLIT(lit_49);
DEFLIT(lit_226);
DEFLIT(lit_195);
DEFLIT(lit_220);
DEFLIT(lit_21);
DEFLIT(lit_94);
DEFLIT(lit_13);
DEFLIT(lit_237);
DEFLIT(lit_45);
DEFLIT(lit_236);
DEFLIT(lit_177);
DEFLIT(lit_67);
DEFLIT(lit_142);
DEFLIT(lit_191);
DEFLIT(lit_147);
DEFLIT(lit_119);
DEFLIT(lit_189);
DEFLIT(lit_5);
DEFLIT(lit_47);
DEFLIT(lit_148);
DEFLIT(lit_159);
DEFLIT(lit_43);
DEFLIT(lit_32);
DEFLIT(lit_82);
DEFLIT(lit_106);
DEFLIT(lit_99);
DEFLIT(lit_130);
DEFLIT(lit_185);
DEFLIT(lit_232);
DEFLIT(lit_212);

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
LOCFOR(fun_x_1234_50);
LOCFOR(fun_51);
LOCFOR(fun_sexpr_monitor_expand_52);
FUNFOR(YsyntaxYfind_option);
LOCFOR(fun_x_1236_54);
LOCFOR(fun_55);
LOCFOR(fun_sexpr_monitor_type_56);
LOCFOR(fun_x_1240_57);
LOCFOR(fun_58);
LOCFOR(fun_x_1238_59);
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
  ARG(exp_, 0);
  P tmpF1141;
  P tmpF1140;
  P tmpF1139;
  P tmpF1138;
  P tmpF1137;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T15 = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLnumG));
  tmpF1137 = T15;
  if (tmpF1137 != YPfalse) {
    T1 = tmpF1137;
  } else {
    T14 = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLchrG));
    tmpF1138 = T14;
    if (tmpF1138 != YPfalse) {
      T3 = tmpF1138;
    } else {
      T13 = CALL2(CHKREF(YmacrosYEE),exp_,YPtrue);
      tmpF1139 = T13;
      if (tmpF1139 != YPfalse) {
        T5 = tmpF1139;
      } else {
        T12 = CALL2(CHKREF(YmacrosYEE),exp_,YPfalse);
        tmpF1140 = T12;
        if (tmpF1140 != YPfalse) {
          T7 = tmpF1140;
        } else {
          T11 = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLstrG));
          tmpF1141 = T11;
          if (tmpF1141 != YPfalse) {
            T9 = tmpF1141;
          } else {
            T10 = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLvecG));
            T9 = T10;
          }
          T8 = T9;
          T7 = T8;
        }
        T6 = T7;
        T5 = T6;
      }
      T4 = T5;
      T3 = T4;
    }
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_sexpr_variableQ_1) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLsymG));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_tagged_listQ_2) {
  ARG(tag_, 0);
  ARG(exp_, 1);
  P tmpF1142;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLlstG));
  tmpF1142 = T4;
  if (tmpF1142 != YPfalse) {
    T3 = CALL1(CHKREF(Yhead),exp_);
    T2 = CALL2(CHKREF(YmacrosYEE),T3,tag_);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_sexpr_quotedQ_3) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_quote_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_quote_4) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Ylst),CHKREF(YsyntaxYDsexpr_quote_tag),exp_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_text_of_quotation_5) {
  ARG(quot_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),quot_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_assignmentQ_6) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_set_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_assignment_variable_7) {
  ARG(assn_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),assn_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_assignment_value_8) {
  ARG(assn_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY3rd),assn_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_variable_name_9) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY1st),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_variable_name_10) {
  ARG(exp_, 0);
  P a1;
loop:
  QRET(exp_);
}

FUNCODEDEF(fun_sexpr_variable_type_11) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_variable_type_12) {
  ARG(exp_, 0);
  P a1;
loop:
  QRET(CHKREF(lit_17));
}

FUNCODEDEF(fun_sexpr_definitionQ_13) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_define_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_definition_variable_14) {
  ARG(defn_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),defn_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_definition_value_15) {
  ARG(defn_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY3rd),defn_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_definitionQ_16) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_define_syntax_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_definition_variable_17) {
  ARG(defn_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(Ytail),defn_);
  T1 = CALL1(CHKREF(Yhead),T2);
  T0 = CALL1(CHKREF(YruntimeY1st),T1);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_definition_value_18) {
  ARG(defn_, 0);
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL1(CHKREF(YruntimeY2nd),defn_);
  T3 = CALL1(CHKREF(Ytail),defn_);
  T2 = CALL1(CHKREF(Ytail),T3);
  T1 = CALL2(CHKREF(YmacrosYpair),T4,T2);
  T0 = CALL2(CHKREF(YmacrosYpair),CHKREF(YsyntaxYDsexpr_macro_tag),T1);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_function_definitionQ_19) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_define_function_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_definitionQ_20) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_define_method_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_generic_definitionQ_21) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_define_generic_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_function_definition_variable_22) {
  ARG(defn_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),defn_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_forward_primitiveQ_23) {
  ARG(defn_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeYlen),defn_);
  T0 = CALL2(CHKREF(YruntimeYE),T1,YPint((P)2));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_signature_parameters_24) {
  ARG(signature_, 0);
  P values_spec_indexF1143;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL2(CHKREF(YruntimeYpos),signature_,CHKREF(lit_39));
  values_spec_indexF1143 = T4;
  T3 = CALL2(CHKREF(YmacrosYEE),values_spec_indexF1143,CHKREF(Ynul));
  if (T3 != YPfalse) {
    T1 = signature_;
  } else {
    T2 = CALL3(CHKREF(YruntimeYsub),signature_,YPint((P)0),values_spec_indexF1143);
    T1 = T2;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_sexpr_signature_value_25) {
  ARG(signature_, 0);
  P valueF1145;
  P values_spec_indexF1144;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = CALL2(CHKREF(YruntimeYpos),signature_,CHKREF(lit_39));
  values_spec_indexF1144 = T8;
  T7 = CALL2(CHKREF(YmacrosYEE),values_spec_indexF1144,CHKREF(Ynul));
  if (T7 != YPfalse) {
    T1 = YPfalse;
  } else {
    T6 = CALL2(CHKREF(YruntimeYA),values_spec_indexF1144,YPint((P)1));
    T5 = CALL2(CHKREF(YruntimeYelt),signature_,T6);
    valueF1145 = T5;
    T4 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),valueF1145,CHKREF(lit_42));
    if (T4 != YPfalse) {
      T3 = CHKREF(lit_41);
    } else {
      T3 = valueF1145;
    }
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_function_signature_26) {
  ARG(defn_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY3rd),defn_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_function_parameters_27) {
  ARG(defn_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YsyntaxYsexpr_function_signature),defn_);
  T0 = CALL1(CHKREF(YsyntaxYsexpr_signature_parameters),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_function_value_28) {
  ARG(defn_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YsyntaxYsexpr_function_signature),defn_);
  T0 = CALL1(CHKREF(YsyntaxYsexpr_signature_value),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_function_body_29) {
  ARG(defn_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(Ytail),defn_);
  T1 = CALL1(CHKREF(Ytail),T2);
  T0 = CALL1(CHKREF(Ytail),T1);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_function_definition_value_30) {
  ARG(defn_, 0);
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = CALL1(CHKREF(YruntimeY3rd),defn_);
  T4 = CALL1(CHKREF(Ytail),defn_);
  T3 = CALL1(CHKREF(Ytail),T4);
  T2 = CALL1(CHKREF(Ytail),T3);
  T1 = CALL2(CHKREF(YmacrosYpair),T5,T2);
  T0 = CALL2(CHKREF(YmacrosYpair),CHKREF(YsyntaxYDsexpr_method_tag),T1);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_methodQ_31) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_method_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_signature_32) {
  ARG(method_exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),method_exp_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_parameters_33) {
  ARG(method_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YsyntaxYsexpr_method_signature),method_exp_);
  T0 = CALL1(CHKREF(YsyntaxYsexpr_signature_parameters),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_value_34) {
  ARG(method_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YsyntaxYsexpr_method_signature),method_exp_);
  T0 = CALL1(CHKREF(YsyntaxYsexpr_signature_value),T1);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_method_body_35) {
  ARG(method_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(Ytail),method_exp_);
  T0 = CALL1(CHKREF(Ytail),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_anonymous_method_36) {
  ARG(body_, 0);
  ARG(parameters_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL1(CHKREF(Ylst),CHKREF(YsyntaxYDsexpr_method_tag));
  T1 = CALL1(CHKREF(Ylst),parameters_);
  T0 = CALL3(CHKREF(YmacrosYcat),T2,T1,body_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_method_37) {
  ARG(body_, 0);
  ARG(parameters_, 1);
  ARG(name_, 2);
  P T1,T0;
  P a1,a2,a3;
loop:
  T1 = CALL3(CHKREF(Ylst),CHKREF(YsyntaxYDsexpr_define_method_tag),name_,parameters_);
  T0 = CALL2(CHKREF(YmacrosYcat),T1,body_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_ifQ_38) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_if_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_if_test_39) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_if_then_40) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY3rd),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_if_else_41) {
  ARG(exp_, 0);
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = CALL1(CHKREF(Ytail),exp_);
  T7 = CALL1(CHKREF(Ytail),T8);
  T6 = CALL1(CHKREF(Ytail),T7);
  T5 = CALL1(CHKREF(YmacrosYemptyQ),T6);
  if (T5 != YPfalse) {
    T0 = YPfalse;
  } else {
    T4 = CALL1(CHKREF(Ytail),exp_);
    T3 = CALL1(CHKREF(Ytail),T4);
    T2 = CALL1(CHKREF(Ytail),T3);
    T1 = CALL1(CHKREF(Yhead),T2);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_make_if_42) {
  ARG(else_, 0);
  ARG(then_, 1);
  ARG(test_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALLN(CHKREF(Ylst),4,CHKREF(YsyntaxYDsexpr_if_tag),test_,then_,else_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_blockQ_43) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_bind_exit_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_block_name_44) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_block_body_45) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(Ytail),exp_);
  T0 = CALL1(CHKREF(Ytail),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unwind_protectQ_46) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_unwind_protect_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unwind_protect_protected_form_47) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_unwind_protect_cleanup_forms_48) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(Ytail),exp_);
  T0 = CALL1(CHKREF(Ytail),T1);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitorQ_49) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_monitor_tag));
  RET(T0);
}

FUNCODEDEF(fun_x_1234_50) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(Yerror),CHKREF(lit_86),FREEREF(0));
  T0 = CALL1(FREEREF(1),T1);
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  ARG(return_, 0);
  P x_1233F1155;
  P x_1233F1154;
  P x_1233F1153;
  P x_1233F1152;
  P optionsF1151;
  P bodyF1150;
  P handlerF1149;
  P optionsF1148;
  P x_1233F1147;
  P x_1234F1146;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T38 = FUNSHELL(0,fun_x_1234_50,2);
  x_1234F1146 = T38;
  FUNINIT(x_1234F1146, 2,FREEREF(0),return_);
  x_1233F1147 = FREEREF(0);
  optionsF1148 = YPfalse;
  optionsF1148 = BOXFAB(optionsF1148);
  handlerF1149 = YPfalse;
  handlerF1149 = BOXFAB(handlerF1149);
  bodyF1150 = YPfalse;
  bodyF1150 = BOXFAB(bodyF1150);
  T19 = CALL2(CHKREF(YisaQ),x_1233F1147,CHKREF(YLlstG));
  if (T19 != YPfalse) {
    T18 = CALL3(CHKREF(YmacrosYmatch_atom),x_1233F1147,CHKREF(lit_77),x_1234F1146);
    x_1233F1152 = T18;
    T16 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1233F1152,x_1234F1146);
    BOXVAL(optionsF1148) = T16;
    T17 = CALL1(CHKREF(Ytail),x_1233F1152);
    x_1233F1153 = T17;
    T14 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1233F1153,x_1234F1146);
    BOXVAL(handlerF1149) = T14;
    T15 = CALL1(CHKREF(Ytail),x_1233F1153);
    x_1233F1154 = T15;
    BOXVAL(bodyF1150) = x_1233F1154;
    x_1233F1155 = Ynil;
    T13 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1233F1155,x_1234F1146);
    T12 = T13;
    T11 = T12;
    T10 = T11;
    T9 = T10;
  } else {
    T8 = CALL2(x_1234F1146,CHKREF(lit_82),x_1233F1147);
  }
  T37 = BOXVAL(optionsF1148);
  T36 = CALL2(CHKREF(YisaQ),T37,CHKREF(YLsymG));
  if (T36 != YPfalse) {
    T35 = CALL1(CHKREF(Ylst),CHKREF(lit_81));
    T34 = BOXVAL(optionsF1148);
    T33 = CALL1(CHKREF(Ylst),T34);
    T32 = CALL3(CHKREF(YmacrosYcat),T35,T33,Ynil);
    T31 = CALL1(CHKREF(Ylst),T32);
    T30 = CALL2(CHKREF(YmacrosYcat),T31,Ynil);
    T28 = T30;
  } else {
    T29 = BOXVAL(optionsF1148);
    T28 = T29;
  }
  optionsF1151 = T28;
  T27 = CALL1(CHKREF(YsyntaxYsexpr_monitor_type),optionsF1151);
  T26 = CALL1(CHKREF(YsyntaxYsexpr_monitor_info),optionsF1151);
  T25 = CALL1(CHKREF(YsyntaxYsexpr_monitor_test),optionsF1151);
  T24 = BOXVAL(handlerF1149);
  T23 = BOXVAL(bodyF1150);
  T22 = CALL1(CHKREF(YsyntaxYsexpr_monitor_body),T23);
  T21 = CALLN(CHKREF(YmacrosYtup),5,T27,T26,T25,T24,T22);
  T20 = T21;
  T6 = T20;
  T4 = T6;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_expand_52) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_51,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(YsyntaxYfind_option) {
  ARG(default_, 0);
  ARG(option_, 1);
  ARG(options_, 2);
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T10 = CALL1(CHKREF(YmacrosYemptyQ),options_);
  if (T10 != YPfalse) {
    T0 = default_;
  } else {
    T9 = CALL1(CHKREF(YruntimeY1st),options_);
    T8 = CALL1(CHKREF(Yhead),T9);
    T7 = CALL2(CHKREF(YmacrosYEE),option_,T8);
    if (T7 != YPfalse) {
      T6 = CALL1(CHKREF(YruntimeY1st),options_);
      T5 = CALL1(CHKREF(Ytail),T6);
      T1 = T5;
    } else {
      if (YPtrue != YPfalse) {
        T4 = CALL1(CHKREF(Ytail),options_);
        T3 = CALL3(CHKREF(YsyntaxYfind_option),T4,option_,default_);
        T2 = T3;
      } else {
        T2 = YPfalse;
      }
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_x_1236_54) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(Yerror),CHKREF(lit_93),FREEREF(0));
  T0 = CALL1(FREEREF(1),T1);
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  ARG(return_, 0);
  P x_1235F1159;
  P typeF1158;
  P x_1235F1157;
  P x_1236F1156;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T11 = FUNSHELL(0,fun_x_1236_54,2);
  x_1236F1156 = T11;
  FUNINIT(x_1236F1156, 2,FREEREF(0),return_);
  x_1235F1157 = FREEREF(0);
  typeF1158 = YPfalse;
  typeF1158 = BOXFAB(typeF1158);
  T9 = CALL2(CHKREF(YisaQ),x_1235F1157,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T7 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1235F1157,x_1236F1156);
    BOXVAL(typeF1158) = T7;
    T8 = CALL1(CHKREF(Ytail),x_1235F1157);
    x_1235F1159 = T8;
    T6 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1235F1159,x_1236F1156);
    T5 = T6;
  } else {
    T4 = CALL2(x_1236F1156,CHKREF(lit_82),x_1235F1157);
  }
  T10 = BOXVAL(typeF1158);
  T2 = T10;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_type_56) {
  ARG(options_, 0);
  P type_listF1160;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL3(CHKREF(YsyntaxYfind_option),options_,CHKREF(lit_81),CHKREF(lit_94));
  type_listF1160 = T3;
  T2 = FUNFAB(fun_55,1,type_listF1160);
  T1 = with_exit(T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1240_57) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(Yerror),CHKREF(lit_103),FREEREF(0));
  T0 = CALL1(FREEREF(1),T1);
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  ARG(return_, 0);
  P x_1239F1166;
  P x_1239F1165;
  P argumentsF1164;
  P messageF1163;
  P x_1239F1162;
  P x_1240F1161;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T30 = FUNSHELL(0,fun_x_1240_57,2);
  x_1240F1161 = T30;
  FUNINIT(x_1240F1161, 2,FREEREF(0),return_);
  x_1239F1162 = FREEREF(0);
  messageF1163 = YPfalse;
  messageF1163 = BOXFAB(messageF1163);
  argumentsF1164 = YPfalse;
  argumentsF1164 = BOXFAB(argumentsF1164);
  T12 = CALL2(CHKREF(YisaQ),x_1239F1162,CHKREF(YLlstG));
  if (T12 != YPfalse) {
    T10 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1239F1162,x_1240F1161);
    BOXVAL(messageF1163) = T10;
    T11 = CALL1(CHKREF(Ytail),x_1239F1162);
    x_1239F1165 = T11;
    BOXVAL(argumentsF1164) = x_1239F1165;
    x_1239F1166 = Ynil;
    T9 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1239F1166,x_1240F1161);
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1240F1161,CHKREF(lit_82),x_1239F1162);
  }
  T29 = CALL1(CHKREF(Ylst),CHKREF(lit_101));
  T28 = CALL1(CHKREF(Ylst),CHKREF(lit_100));
  T27 = CALL1(CHKREF(Ylst),CHKREF(lit_10));
  T26 = CALL1(CHKREF(Ylst),CHKREF(lit_99));
  T25 = BOXVAL(messageF1163);
  T24 = CALL1(CHKREF(Ylst),T25);
  T23 = CALLN(CHKREF(YmacrosYcat),4,T27,T26,T24,Ynil);
  T22 = CALL1(CHKREF(Ylst),T23);
  T21 = CALL1(CHKREF(Ylst),CHKREF(lit_10));
  T20 = CALL1(CHKREF(Ylst),CHKREF(lit_98));
  T19 = CALL1(CHKREF(Ylst),CHKREF(lit_97));
  T18 = BOXVAL(argumentsF1164);
  T17 = CALL3(CHKREF(YmacrosYcat),T19,T18,Ynil);
  T16 = CALL1(CHKREF(Ylst),T17);
  T15 = CALLN(CHKREF(YmacrosYcat),4,T21,T20,T16,Ynil);
  T14 = CALL1(CHKREF(Ylst),T15);
  T13 = CALLN(CHKREF(YmacrosYcat),5,T29,T28,T22,T14,Ynil);
  T4 = T13;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1238_59) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(Yerror),CHKREF(lit_105),FREEREF(0));
  T0 = CALL1(FREEREF(1),T1);
  QRET(T0);
}

FUNCODEDEF(fun_60) {
  ARG(return_, 0);
  P x_1237F1170;
  P info_exprF1169;
  P x_1237F1168;
  P x_1238F1167;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T11 = FUNSHELL(0,fun_x_1238_59,2);
  x_1238F1167 = T11;
  FUNINIT(x_1238F1167, 2,FREEREF(0),return_);
  x_1237F1168 = FREEREF(0);
  info_exprF1169 = YPfalse;
  info_exprF1169 = BOXFAB(info_exprF1169);
  T9 = CALL2(CHKREF(YisaQ),x_1237F1168,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T7 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1237F1168,x_1238F1167);
    BOXVAL(info_exprF1169) = T7;
    T8 = CALL1(CHKREF(Ytail),x_1237F1168);
    x_1237F1170 = T8;
    T6 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1237F1170,x_1238F1167);
    T5 = T6;
  } else {
    T4 = CALL2(x_1238F1167,CHKREF(lit_82),x_1237F1168);
  }
  T10 = BOXVAL(info_exprF1169);
  T2 = T10;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_info_61) {
  ARG(options_, 0);
  P tmpF1173;
  P descriptionF1172;
  P infoF1171;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T14 = CALL3(CHKREF(YsyntaxYfind_option),options_,CHKREF(lit_108),YPfalse);
  infoF1171 = T14;
  T13 = CALL3(CHKREF(YsyntaxYfind_option),options_,CHKREF(lit_107),YPfalse);
  descriptionF1172 = T13;
  tmpF1173 = infoF1171;
  if (tmpF1173 != YPfalse) {
    T12 = descriptionF1172;
  } else {
    T12 = YPfalse;
  }
  T11 = T12;
  if (T11 != YPfalse) {
    T10 = CALL2(CHKREF(Yerror),CHKREF(lit_106),options_);
    T2 = T10;
  } else {
    if (infoF1171 != YPfalse) {
      T9 = FUNFAB(fun_60,1,infoF1171);
      T8 = with_exit(T9);
      T3 = T8;
    } else {
      if (descriptionF1172 != YPfalse) {
        T7 = FUNFAB(fun_58,1,descriptionF1172);
        T6 = with_exit(T7);
        T4 = T6;
      } else {
        if (YPtrue != YPfalse) {
          T5 = CHKREF(lit_96);
        } else {
          T5 = YPfalse;
        }
        T4 = T5;
      }
      T3 = T4;
    }
    T2 = T3;
  }
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_test_62) {
  ARG(options_, 0);
  P test_bodyF1174;
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL3(CHKREF(YsyntaxYfind_option),options_,CHKREF(lit_68),CHKREF(lit_110));
  test_bodyF1174 = T2;
  T1 = CALL2(CHKREF(YsyntaxYsexpr_make_anonymous_method),Ynil,test_bodyF1174);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_body_63) {
  ARG(body_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_make_anonymous_method),Ynil,body_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_beginQ_64) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_begin_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_begin_actions_65) {
  ARG(begin_exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Ytail),begin_exp_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_last_expQ_66) {
  ARG(seq_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(Ytail),seq_);
  T0 = CALL1(CHKREF(YmacrosYemptyQ),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_first_exp_67) {
  ARG(seq_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Yhead),seq_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_rest_exps_68) {
  ARG(seq_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Ytail),seq_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_sequence_Gbegin_69) {
  ARG(seq_, 0);
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = CALL1(CHKREF(YmacrosYemptyQ),seq_);
  if (T5 != YPfalse) {
    T0 = seq_;
  } else {
    T4 = CALL1(CHKREF(YsyntaxYsexpr_last_expQ),seq_);
    if (T4 != YPfalse) {
      T3 = CALL1(CHKREF(YsyntaxYsexpr_first_exp),seq_);
      T1 = T3;
    } else {
      T2 = CALL1(CHKREF(YsyntaxYsexpr_make_begin),seq_);
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_make_begin_70) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYpair),CHKREF(YsyntaxYDsexpr_begin_tag),exp_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_applicationQ_71) {
  ARG(exp_, 0);
  P tmpF1175;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLlstG));
  tmpF1175 = T4;
  if (tmpF1175 != YPfalse) {
    T3 = CALL1(CHKREF(YmacrosYemptyQ),exp_);
    T2 = CALL1(CHKREF(Ynot),T3);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_sexpr_operator_72) {
  ARG(app_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Yhead),app_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_operands_73) {
  ARG(app_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Ytail),app_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_no_operandsQ_74) {
  ARG(args_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YmacrosYemptyQ),args_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_first_operand_75) {
  ARG(args_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Yhead),args_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_rest_operands_76) {
  ARG(args_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Ytail),args_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_application_77) {
  ARG(operands_, 0);
  ARG(op_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(Ylst),op_);
  T0 = CALL2(CHKREF(YmacrosYcat),T1,operands_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_new_unique_name_counterX_78) {
  P T0;
loop:
  T0 = CALL2(CHKREF(YruntimeYA),CHKREF(YsyntaxYTunique_name_counterT),YPint((P)1));
  YsyntaxYTunique_name_counterT = T0;
  RET(CHKREF(YsyntaxYTunique_name_counterT));
}

FUNCODEDEF(fun_sexpr_unique_name_79) {
  ARG(prefix_, 0);
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),prefix_);
  T3 = CALL0(CHKREF(YsyntaxYsexpr_new_unique_name_counterX));
  T2 = CALL1(CHKREF(YruntimeYnum_to_str),T3);
  T1 = CALL2(CHKREF(YmacrosYcat),T4,T2);
  T0 = CALL2(CHKREF(YruntimeYas),CHKREF(YLsymG),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_letQ_80) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_let_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_let_bound_variables_81) {
  ARG(let_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeY2nd),let_exp_);
  T0 = CALL2(CHKREF(YmacrosYmap),CHKREF(Yhead),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_let_values_82) {
  ARG(let_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeY2nd),let_exp_);
  T0 = CALL2(CHKREF(YmacrosYmap),CHKREF(YruntimeY2nd),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_let_body_83) {
  ARG(let_exp_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(Ytail),let_exp_);
  T1 = CALL1(CHKREF(Ytail),T2);
  T0 = CALL1(CHKREF(YsyntaxYsexpr_sequence_Gbegin),T1);
  QRET(T0);
}

FUNCODEDEF(fun_inner_84) {
  ARG(tnames_, 0);
  ARG(index_, 1);
  ARG(rtvalues_, 2);
  ARG(rtnames_, 3);
  P tmpF1177;
  P nameF1176;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T27 = CALL1(CHKREF(YmacrosYemptyQ),tnames_);
  if (T27 != YPfalse) {
    T26 = CALL2(CHKREF(YmacrosYtup),rtnames_,rtvalues_);
    T0 = T26;
  } else {
    T25 = CALL1(CHKREF(Yhead),tnames_);
    nameF1176 = T25;
    T24 = CALL2(CHKREF(YisaQ),nameF1176,CHKREF(YLlstG));
    tmpF1177 = T24;
    if (tmpF1177 != YPfalse) {
      T23 = CALL1(CHKREF(Ytail),nameF1176);
      T22 = CALL1(CHKREF(Yhead),T23);
      T21 = CALL2(CHKREF(YmacrosYEE),T22,CHKREF(lit_154));
      T20 = T21;
    } else {
      T20 = YPfalse;
    }
    T19 = T20;
    if (T19 != YPfalse) {
      T18 = CALL1(CHKREF(Yhead),nameF1176);
      T17 = CALL2(CHKREF(Ylst),T18,CHKREF(lit_153));
      T16 = CALL2(CHKREF(YmacrosYpair),T17,rtnames_);
      T15 = CALL2(CHKREF(YmacrosYpair),FREEREF(0),rtvalues_);
      T14 = CALL2(CHKREF(YruntimeYA),index_,YPint((P)1));
      T13 = CALL1(CHKREF(Ytail),tnames_);
      a1 = T16;
      a2 = T15;
      a3 = T14;
      a4 = T13;
      rtnames_ = a1;
      rtvalues_ = a2;
      index_ = a3;
      tnames_ = a4;
      goto loop;
      T2 = T12;
    } else {
      T11 = CALL2(CHKREF(YmacrosYpair),nameF1176,rtnames_);
      T10 = CALL2(CHKREF(YmacrosYpair),FREEREF(0),T11);
      T9 = CALL2(CHKREF(Ylst),CHKREF(lit_152),FREEREF(0));
      T8 = CALL2(CHKREF(Ylst),CHKREF(lit_151),FREEREF(0));
      T7 = CALL2(CHKREF(YmacrosYpair),T8,rtvalues_);
      T6 = CALL2(CHKREF(YmacrosYpair),T9,T7);
      T5 = CALL2(CHKREF(YruntimeYA),index_,YPint((P)1));
      T4 = CALL1(CHKREF(Ytail),tnames_);
      a1 = T10;
      a2 = T6;
      a3 = T5;
      a4 = T4;
      rtnames_ = a1;
      rtvalues_ = a2;
      index_ = a3;
      tnames_ = a4;
      goto loop;
      T2 = T3;
    }
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_loop_85) {
  ARG(vals_, 0);
  ARG(names_, 1);
  ARG(rvalues_, 2);
  ARG(rnames_, 3);
  P tmpF1187;
  P tup35F1186;
  P rtvaluesF1185;
  P tup35F1184;
  P rtnamesF1183;
  P tup35F1182;
  P innerF1181;
  P tupnameF1180;
  P valueF1179;
  P nameF1178;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T41 = CALL1(CHKREF(YmacrosYemptyQ),names_);
  if (T41 != YPfalse) {
    T40 = CALL1(CHKREF(YruntimeYrevX),rnames_);
    T39 = CALL1(CHKREF(YruntimeYrevX),rvalues_);
    T38 = CALL2(CHKREF(YmacrosYtup),T40,T39);
    T0 = T38;
  } else {
    T37 = CALL1(CHKREF(Yhead),names_);
    nameF1178 = T37;
    T36 = CALL1(CHKREF(Yhead),vals_);
    valueF1179 = T36;
    T35 = CALL2(CHKREF(YisaQ),nameF1178,CHKREF(YLlstG));
    tmpF1187 = T35;
    if (tmpF1187 != YPfalse) {
      T34 = CALL1(CHKREF(Yhead),nameF1178);
      T33 = CALL2(CHKREF(YmacrosYEE),T34,CHKREF(lit_42));
      T32 = T33;
    } else {
      T32 = YPfalse;
    }
    T31 = T32;
    if (T31 != YPfalse) {
      T30 = CALL1(CHKREF(YsyntaxYsexpr_unique_name),CHKREF(lit_155));
      tupnameF1180 = T30;
      T29 = FUNSHELL(1,fun_inner_84,2);
      innerF1181 = T29;
      FUNINIT(innerF1181, 2,tupnameF1180,innerF1181);
      T28 = CALL1(CHKREF(Ylst),tupnameF1180);
      T27 = CALL1(CHKREF(Ylst),valueF1179);
      T26 = CALL1(CHKREF(Ytail),nameF1178);
      T25 = KCALLN(innerF1181,4,T28,T27,YPint((P)0),T26);
      T24 = T25;
      tup35F1182 = T24;
      T23 = CALL1(CHKREF(Yhead),tup35F1182);
      rtnamesF1183 = T23;
      T22 = CALL1(CHKREF(Ytail),tup35F1182);
      tup35F1184 = T22;
      T21 = CALL1(CHKREF(Yhead),tup35F1184);
      rtvaluesF1185 = T21;
      T20 = CALL1(CHKREF(Ytail),tup35F1184);
      tup35F1186 = T20;
      T19 = CALL2(CHKREF(YmacrosYcat),rtnamesF1183,rnames_);
      T18 = CALL2(CHKREF(YmacrosYcat),rtvaluesF1185,rvalues_);
      T17 = CALL1(CHKREF(Ytail),names_);
      T16 = CALL1(CHKREF(Ytail),vals_);
      a1 = T19;
      a2 = T18;
      a3 = T17;
      a4 = T16;
      rnames_ = a1;
      rvalues_ = a2;
      names_ = a3;
      vals_ = a4;
      goto loop;
      T14 = T15;
      T13 = T14;
      T12 = T13;
      T11 = T12;
      T10 = T11;
      T9 = T10;
      T3 = T9;
    } else {
      T8 = CALL2(CHKREF(YmacrosYpair),nameF1178,rnames_);
      T7 = CALL2(CHKREF(YmacrosYpair),valueF1179,rvalues_);
      T6 = CALL1(CHKREF(Ytail),names_);
      T5 = CALL1(CHKREF(Ytail),vals_);
      a1 = T8;
      a2 = T7;
      a3 = T6;
      a4 = T5;
      rnames_ = a1;
      rvalues_ = a2;
      names_ = a3;
      vals_ = a4;
      goto loop;
      T3 = T4;
    }
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_let_namesAvalues_86) {
  ARG(vals_, 0);
  ARG(names_, 1);
  P loopF1188;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_loop_85,1);
  loopF1188 = T2;
  FUNINIT(loopF1188, 1,loopF1188);
  T1 = KCALLN(loopF1188,4,Ynil,Ynil,names_,vals_);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_col_87) {
  ARG(values_, 0);
  ARG(names_, 1);
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = CALL1(CHKREF(YmacrosYemptyQ),names_);
  if (T10 != YPfalse) {
    T0 = FREEREF(1);
  } else {
    T9 = CALL1(CHKREF(Yhead),names_);
    T8 = CALL1(CHKREF(Ylst),T9);
    T7 = CALL1(CHKREF(Ytail),names_);
    T6 = CALL1(CHKREF(Ytail),values_);
    T5 = KCALL2(FREEREF(0),T7,T6);
    T4 = CALL3(CHKREF(Ylst),CHKREF(YsyntaxYDsexpr_method_tag),T8,T5);
    T3 = CALL1(CHKREF(Yhead),values_);
    T2 = CALL1(CHKREF(Ylst),T3);
    T1 = CALL2(CHKREF(YmacrosYpair),T4,T2);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_let_Gcombination_88) {
  ARG(let_exp_, 0);
  P colF1197;
  P tup36F1196;
  P valuesF1195;
  P tup36F1194;
  P namesF1193;
  P tup36F1192;
  P bodyF1191;
  P ovaluesF1190;
  P onamesF1189;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
loop:
  T18 = CALL1(CHKREF(YsyntaxYsexpr_let_bound_variables),let_exp_);
  onamesF1189 = T18;
  T17 = CALL1(CHKREF(YsyntaxYsexpr_let_values),let_exp_);
  ovaluesF1190 = T17;
  T16 = CALL1(CHKREF(YsyntaxYsexpr_let_body),let_exp_);
  bodyF1191 = T16;
  T15 = CALL2(CHKREF(YsyntaxYsexpr_let_namesAvalues),onamesF1189,ovaluesF1190);
  tup36F1192 = T15;
  T14 = CALL1(CHKREF(Yhead),tup36F1192);
  namesF1193 = T14;
  T13 = CALL1(CHKREF(Ytail),tup36F1192);
  tup36F1194 = T13;
  T12 = CALL1(CHKREF(Yhead),tup36F1194);
  valuesF1195 = T12;
  T11 = CALL1(CHKREF(Ytail),tup36F1194);
  tup36F1196 = T11;
  T10 = FUNSHELL(1,fun_col_87,2);
  colF1197 = T10;
  FUNINIT(colF1197, 2,colF1197,bodyF1191);
  T9 = KCALL2(colF1197,namesF1193,valuesF1195);
  T8 = T9;
  T7 = T8;
  T6 = T7;
  T5 = T6;
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_locQ_89) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_locals_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_names_90) {
  ARG(loc_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeY2nd),loc_exp_);
  T0 = CALL2(CHKREF(YmacrosYmap),CHKREF(YruntimeY1st),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_signatures_91) {
  ARG(loc_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeY2nd),loc_exp_);
  T0 = CALL2(CHKREF(YmacrosYmap),CHKREF(YruntimeY2nd),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_bodies_92) {
  ARG(loc_exp_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL2(CHKREF(YruntimeYcompose),CHKREF(Ytail),CHKREF(Ytail));
  T1 = CALL1(CHKREF(YruntimeY2nd),loc_exp_);
  T0 = CALL2(CHKREF(YmacrosYmap),T2,T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_raw_body_93) {
  ARG(loc_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(Ytail),loc_exp_);
  T0 = CALL1(CHKREF(Ytail),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_body_94) {
  ARG(loc_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YsyntaxYsexpr_loc_raw_body),loc_exp_);
  T0 = CALL1(CHKREF(YsyntaxYsexpr_sequence_Gbegin),T1);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_iterateQ_95) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_iterate_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_name_96) {
  ARG(rep_exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),rep_exp_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_signature_97) {
  ARG(rep_exp_, 0);
  P sigF1198;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T9 = CALL1(CHKREF(YruntimeY3rd),rep_exp_);
  sigF1198 = T9;
  T8 = CALL1(CHKREF(YsyntaxYsexpr_signature_parameters),sigF1198);
  T7 = CALL2(CHKREF(YmacrosYmap),CHKREF(YruntimeY1st),T8);
  T6 = CALL1(CHKREF(YsyntaxYsexpr_signature_value),sigF1198);
  if (T6 != YPfalse) {
    T4 = Ynil;
  } else {
    T5 = CALL1(CHKREF(Ylst),CHKREF(YsyntaxYDsexpr_values_tag));
    T4 = T5;
  }
  T3 = CALL1(CHKREF(YsyntaxYsexpr_signature_value),sigF1198);
  T2 = CALL1(CHKREF(Ylst),T3);
  T1 = CALL3(CHKREF(YmacrosYcat),T7,T4,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_inits_98) {
  ARG(rep_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeY3rd),rep_exp_);
  T0 = CALL2(CHKREF(YmacrosYmap),CHKREF(YruntimeY2nd),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_body_99) {
  ARG(rep_exp_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(Ytail),rep_exp_);
  T1 = CALL1(CHKREF(Ytail),T2);
  T0 = CALL1(CHKREF(Ytail),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_Gloc_100) {
  ARG(rep_exp_, 0);
  P initsF1202;
  P bodyF1201;
  P sigF1200;
  P nameF1199;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T13 = CALL1(CHKREF(YsyntaxYsexpr_iterate_name),rep_exp_);
  nameF1199 = T13;
  T12 = CALL1(CHKREF(YsyntaxYsexpr_iterate_signature),rep_exp_);
  sigF1200 = T12;
  T11 = CALL1(CHKREF(YsyntaxYsexpr_iterate_body),rep_exp_);
  bodyF1201 = T11;
  T10 = CALL1(CHKREF(YsyntaxYsexpr_iterate_inits),rep_exp_);
  initsF1202 = T10;
  T9 = CALL2(CHKREF(Ylst),nameF1199,sigF1200);
  T8 = CALL2(CHKREF(YmacrosYcat),T9,bodyF1201);
  T7 = CALL1(CHKREF(Ylst),T8);
  T6 = CALL1(CHKREF(Ylst),nameF1199);
  T5 = CALL2(CHKREF(YmacrosYcat),T6,initsF1202);
  T4 = CALL3(CHKREF(Ylst),CHKREF(YsyntaxYDsexpr_locals_tag),T7,T5);
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isaQ_101) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_isa_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_parents_102) {
  ARG(exp_, 0);
  P parentsF1203;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL1(CHKREF(YruntimeY2nd),exp_);
  parentsF1203 = T4;
  T3 = CALL2(CHKREF(YisaQ),parentsF1203,CHKREF(YLlstG));
  if (T3 != YPfalse) {
    T1 = parentsF1203;
  } else {
    T2 = CALL1(CHKREF(Ylst),parentsF1203);
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_isa_slot_inits_103) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(Ytail),exp_);
  T0 = CALL1(CHKREF(Ytail),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_init_slots_104) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYmap),CHKREF(YruntimeY2nd),exp_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_init_values_105) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYmap),CHKREF(YruntimeY3rd),exp_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_define_classQ_106) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_define_class_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_define_class_parents_107) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY3rd),exp_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_slotQ_108) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_slot_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_slot_object_109) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_slot_variable_110) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY3rd),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_slot_init_111) {
  ARG(exp_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL1(CHKREF(YruntimeYlen),exp_);
  T2 = CALL2(CHKREF(YruntimeYE),T3,YPint((P)4));
  if (T2 != YPfalse) {
    T1 = CALL2(CHKREF(YruntimeYelt),exp_,YPint((P)3));
    T0 = T1;
  } else {
    T0 = CHKREF(lit_188);
  }
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_make_getter_112) {
  ARG(type_, 0);
  ARG(name_, 1);
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL2(CHKREF(Ylst),CHKREF(lit_190),type_);
  T3 = CALL1(CHKREF(Ylst),T4);
  T2 = CALL3(CHKREF(Ylst),CHKREF(lit_191),CHKREF(lit_190),name_);
  T1 = CALL1(CHKREF(Ylst),T2);
  T0 = CALL3(CHKREF(YsyntaxYsexpr_make_method),name_,T3,T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_setter_113) {
  ARG(slot_type_, 0);
  ARG(type_, 1);
  ARG(name_, 2);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T6 = CALL1(CHKREF(YsyntaxYsexpr_make_setter_name),name_);
  T5 = CALL2(CHKREF(Ylst),CHKREF(lit_194),slot_type_);
  T4 = CALL2(CHKREF(Ylst),CHKREF(lit_190),type_);
  T3 = CALL2(CHKREF(Ylst),T5,T4);
  T2 = CALLN(CHKREF(Ylst),4,CHKREF(lit_195),CHKREF(lit_194),CHKREF(lit_190),name_);
  T1 = CALL1(CHKREF(Ylst),T2);
  T0 = CALL3(CHKREF(YsyntaxYsexpr_make_method),T6,T3,T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_setter_name_114) {
  ARG(name_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),name_);
  T1 = CALL2(CHKREF(YmacrosYcat),T2,CHKREF(lit_197));
  T0 = CALL2(CHKREF(YruntimeYas),CHKREF(YLsymG),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_macroQ_115) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_macro_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_macro_expandQ_116) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_macro_expand_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_syntax_if_117) {
  ARG(else_, 0);
  ARG(then_, 1);
  ARG(exp_, 2);
  ARG(pat_, 3);
  P T1,T0;
  P a1,a2,a3,a4;
loop:
  T1 = CALL2(CHKREF(Ylst),pat_,exp_);
  T0 = CALLN(CHKREF(Ylst),4,CHKREF(YsyntaxYDsexpr_syntax_if_tag),T1,then_,else_);
  RET(T0);
}

FUNCODEDEF(YsyntaxYsexpr_expand_backquote) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YsyntaxYsexpr_build_backquote_expander),x_);
  T0 = CALL2(CHKREF(YsyntaxYeval),T1,CHKREF(lit_213));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_build_backquote_expander_119) {
  ARG(x_, 0);
  P resF1205;
  P raw_resultF1204;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL1(CHKREF(YsyntaxYbq_process),x_);
  raw_resultF1204 = T3;
  T2 = CALL1(CHKREF(YsyntaxYbq_remove_tokens),raw_resultF1204);
  resF1205 = T2;
  T1 = resF1205;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unquoteQ_120) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),x_,CHKREF(lit_216));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unquote_splicingQ_121) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),x_,CHKREF(lit_218));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_backquoteQ_122) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),x_,CHKREF(YsyntaxYDsexpr_quasiquote_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_atomQ_123) {
  ARG(x_, 0);
  P tmpF1206;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL2(CHKREF(YisaQ),x_,CHKREF(YLlstG));
  T3 = CALL1(CHKREF(Ynot),T4);
  tmpF1206 = T3;
  if (tmpF1206 != YPfalse) {
    T1 = tmpF1206;
  } else {
    T2 = CALL2(CHKREF(YmacrosYEE),x_,Ynil);
    T1 = T2;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_nreconc_124) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YruntimeYrevX),x_);
  T0 = CALL2(CHKREF(YruntimeYcatX),T1,y_);
  RET(T0);
}

FUNCODEDEF(fun_loop_125) {
  ARG(q_, 0);
  ARG(p_, 1);
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T26 = CALL1(CHKREF(YsyntaxYsexpr_atomQ),p_);
  if (T26 != YPfalse) {
    T25 = CALL2(CHKREF(Ylst),CHKREF(YsyntaxYTbq_quoteT),p_);
    T24 = CALL1(CHKREF(Ylst),T25);
    T23 = CALL2(CHKREF(YsyntaxYnreconc),q_,T24);
    T22 = CALL2(CHKREF(YmacrosYpair),CHKREF(YsyntaxYTbq_appendT),T23);
    T21 = CALL1(FREEREF(1),T22);
    T0 = T21;
  } else {
    T12 = CALL1(CHKREF(YsyntaxYsexpr_unquoteQ),p_);
    if (T12 != YPfalse) {
      T5 = CALL1(CHKREF(Ytail),p_);
      T4 = CALL1(CHKREF(Ytail),T5);
      T3 = CALL1(CHKREF(YmacrosYemptyQ),T4);
      T2 = CALL1(CHKREF(Ynot),T3);
      if (T2 != YPfalse) {
        T1 = CALL2(CHKREF(Yerror),CHKREF(lit_227),p_);
      } else {
      }
      T11 = CALL1(CHKREF(Ytail),p_);
      T10 = CALL1(CHKREF(Yhead),T11);
      T9 = CALL1(CHKREF(Ylst),T10);
      T8 = CALL2(CHKREF(YsyntaxYnreconc),q_,T9);
      T7 = CALL2(CHKREF(YmacrosYpair),CHKREF(YsyntaxYTbq_appendT),T8);
      T6 = CALL1(FREEREF(1),T7);
    } else {
    }
    T15 = CALL1(CHKREF(Ytail),p_);
    T14 = CALL2(CHKREF(YmacrosYEE),T15,CHKREF(YsyntaxYTcomma_atsignT));
    if (T14 != YPfalse) {
      T13 = CALL2(CHKREF(Yerror),CHKREF(lit_226),p_);
    } else {
    }
    T20 = CALL1(CHKREF(Ytail),p_);
    T19 = CALL1(CHKREF(Yhead),p_);
    T18 = CALL1(CHKREF(YsyntaxYbracket),T19);
    T17 = CALL2(CHKREF(YmacrosYpair),T18,q_);
    a1 = T20;
    a2 = T17;
    p_ = a1;
    q_ = a2;
    goto loop;
    T0 = T16;
  }
  QRET(T0);
}

FUNCODEDEF(fun_126) {
  ARG(return_, 0);
  P loopF1207;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_loop_125,2);
  loopF1207 = T2;
  FUNINIT(loopF1207, 2,loopF1207,return_);
  T1 = KCALL2(loopF1207,FREEREF(0),Ynil);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_bq_process_127) {
  ARG(x_, 0);
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T21 = CALL1(CHKREF(YsyntaxYsexpr_atomQ),x_);
  if (T21 != YPfalse) {
    T20 = CALL2(CHKREF(Ylst),CHKREF(YsyntaxYTbq_quoteT),x_);
    T0 = T20;
  } else {
    T19 = CALL1(CHKREF(YsyntaxYsexpr_backquoteQ),x_);
    if (T19 != YPfalse) {
      T18 = CALL1(CHKREF(Ytail),x_);
      T17 = CALL1(CHKREF(Yhead),T18);
      T16 = CALL1(CHKREF(YsyntaxYsexpr_build_backquote_expander),T17);
      T15 = CALL1(CHKREF(YsyntaxYbq_process),T16);
      T1 = T15;
    } else {
      T14 = CALL1(CHKREF(YsyntaxYsexpr_unquoteQ),x_);
      if (T14 != YPfalse) {
        T13 = CALL1(CHKREF(Ytail),x_);
        T12 = CALL1(CHKREF(Yhead),T13);
        T2 = T12;
      } else {
        T11 = CALL1(CHKREF(YsyntaxYsexpr_unquote_splicingQ),x_);
        if (T11 != YPfalse) {
          T10 = CALL0(x_);
          T9 = CALL1(CHKREF(Ytail),T10);
          T8 = CALL1(CHKREF(Yhead),T9);
          T7 = CALL2(CHKREF(Yerror),CHKREF(lit_228),T8);
          T3 = T7;
        } else {
          if (YPtrue != YPfalse) {
            T6 = FUNFAB(fun_126,1,x_);
            T5 = with_exit(T6);
            T4 = T5;
          } else {
            T4 = YPfalse;
          }
          T3 = T4;
        }
        T2 = T3;
      }
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_bracket_128) {
  ARG(x_, 0);
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
loop:
  T16 = CALL1(CHKREF(YsyntaxYsexpr_atomQ),x_);
  if (T16 != YPfalse) {
    T15 = CALL1(CHKREF(YsyntaxYbq_process),x_);
    T14 = CALL2(CHKREF(Ylst),CHKREF(YsyntaxYTbq_listT),T15);
    T0 = T14;
  } else {
    T13 = CALL1(CHKREF(YsyntaxYsexpr_unquoteQ),x_);
    if (T13 != YPfalse) {
      T12 = CALL1(CHKREF(Ytail),x_);
      T11 = CALL1(CHKREF(Yhead),T12);
      T10 = CALL2(CHKREF(Ylst),CHKREF(YsyntaxYTbq_listT),T11);
      T1 = T10;
    } else {
      T9 = CALL1(CHKREF(YsyntaxYsexpr_unquote_splicingQ),x_);
      if (T9 != YPfalse) {
        T8 = CALL1(CHKREF(Ytail),x_);
        T7 = CALL1(CHKREF(Yhead),T8);
        T6 = CALL2(CHKREF(Ylst),CHKREF(YsyntaxYTbq_clobberableT),T7);
        T2 = T6;
      } else {
        if (YPtrue != YPfalse) {
          T5 = CALL1(CHKREF(YsyntaxYbq_process),x_);
          T4 = CALL2(CHKREF(Ylst),CHKREF(YsyntaxYTbq_listT),T5);
          T3 = T4;
        } else {
          T3 = YPfalse;
        }
        T2 = T3;
      }
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_map_tree_129) {
  ARG(x_, 0);
  ARG(fn_, 1);
  P tmpF1210;
  P dF1209;
  P aF1208;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2;
loop:
  T16 = CALL1(CHKREF(YsyntaxYsexpr_atomQ),x_);
  if (T16 != YPfalse) {
    T15 = CALL1(fn_,x_);
    T0 = T15;
  } else {
    T14 = CALL1(CHKREF(Yhead),x_);
    T13 = CALL1(fn_,T14);
    aF1208 = T13;
    T12 = CALL1(CHKREF(Ytail),x_);
    T11 = CALL2(CHKREF(YsyntaxYmap_tree),fn_,T12);
    dF1209 = T11;
    T10 = CALL1(CHKREF(Yhead),x_);
    T9 = CALL2(CHKREF(YruntimeYE),aF1208,T10);
    tmpF1210 = T9;
    if (tmpF1210 != YPfalse) {
      T8 = CALL1(CHKREF(Ytail),x_);
      T7 = CALL2(CHKREF(YruntimeYE),dF1209,T8);
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T5 = T6;
    if (T5 != YPfalse) {
      T3 = x_;
    } else {
      T4 = CALL2(CHKREF(YmacrosYpair),aF1208,dF1209);
      T3 = T4;
    }
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_bq_remove_tokens_130) {
  ARG(x_, 0);
  P tmpF1212;
  P tmpF1211;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T37 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YsyntaxYTbq_listT));
  if (T37 != YPfalse) {
    T0 = CHKREF(lit_97);
  } else {
    T36 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YsyntaxYTbq_appendT));
    if (T36 != YPfalse) {
      T1 = CHKREF(lit_236);
    } else {
      T35 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YsyntaxYTbq_nconcT));
      if (T35 != YPfalse) {
        T2 = CHKREF(lit_235);
      } else {
        T34 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YsyntaxYTbq_listTT));
        if (T34 != YPfalse) {
          T3 = CHKREF(lit_234);
        } else {
          T33 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YsyntaxYTbq_quoteT));
          if (T33 != YPfalse) {
            T4 = CHKREF(lit_5);
          } else {
            T32 = CALL1(CHKREF(YsyntaxYsexpr_atomQ),x_);
            if (T32 != YPfalse) {
              T5 = x_;
            } else {
              T31 = CALL1(CHKREF(Yhead),x_);
              T30 = CALL2(CHKREF(YmacrosYEE),T31,CHKREF(YsyntaxYTbq_clobberableT));
              if (T30 != YPfalse) {
                T29 = CALL1(CHKREF(Ytail),x_);
                T28 = CALL1(CHKREF(Yhead),T29);
                T27 = CALL1(CHKREF(YsyntaxYbq_remove_tokens),T28);
                T6 = T27;
              } else {
                T26 = CALL1(CHKREF(Yhead),x_);
                T25 = CALL2(CHKREF(YmacrosYEE),T26,CHKREF(YsyntaxYTbq_listTT));
                tmpF1211 = T25;
                if (tmpF1211 != YPfalse) {
                  T24 = CALL1(CHKREF(Ytail),x_);
                  T23 = CALL1(CHKREF(Ytail),T24);
                  T22 = CALL1(CHKREF(YmacrosYemptyQ),T23);
                  T21 = CALL1(CHKREF(Ynot),T22);
                  tmpF1212 = T21;
                  if (tmpF1212 != YPfalse) {
                    T20 = CALL1(CHKREF(Ytail),x_);
                    T19 = CALL1(CHKREF(Ytail),T20);
                    T18 = CALL1(CHKREF(Ytail),T19);
                    T17 = CALL1(CHKREF(YmacrosYemptyQ),T18);
                    T16 = T17;
                  } else {
                    T16 = YPfalse;
                  }
                  T15 = T16;
                  T14 = T15;
                } else {
                  T14 = YPfalse;
                }
                T13 = T14;
                if (T13 != YPfalse) {
                  T12 = CALL1(CHKREF(Ytail),x_);
                  T11 = CALL2(CHKREF(YsyntaxYmap_tree),CHKREF(YsyntaxYbq_remove_tokens),T12);
                  T10 = CALL2(CHKREF(YmacrosYpair),CHKREF(lit_233),T11);
                  T7 = T10;
                } else {
                  if (YPtrue != YPfalse) {
                    T9 = CALL2(CHKREF(YsyntaxYmap_tree),CHKREF(YsyntaxYbq_remove_tokens),x_);
                    T8 = T9;
                  } else {
                    T8 = YPfalse;
                  }
                  T7 = T8;
                }
                T6 = T7;
              }
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
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_ifQ_131) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_syntax_if_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_value_132) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeY2nd),exp_);
  T0 = CALL1(CHKREF(YruntimeY2nd),T1);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_pattern_133) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeY2nd),exp_);
  T0 = CALL1(CHKREF(YruntimeY1st),T1);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_then_134) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY3rd),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_else_135) {
  ARG(exp_, 0);
  P altF1213;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL2(CHKREF(YruntimeYelt),exp_,YPint((P)3));
  altF1213 = T3;
  T2 = CALL2(CHKREF(YmacrosYEE),altF1213,CHKREF(Ynul));
  if (T2 != YPfalse) {
    T1 = YPfalse;
  } else {
    T1 = altF1213;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_pattern_variableQ_136) {
  ARG(pat_, 0);
  P tmpF1214;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL1(CHKREF(YsyntaxYsexpr_unquoteQ),pat_);
  tmpF1214 = T3;
  if (tmpF1214 != YPfalse) {
    T1 = tmpF1214;
  } else {
    T2 = CALL1(CHKREF(YsyntaxYsexpr_unquote_splicingQ),pat_);
    T1 = T2;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_sexpr_pattern_variable_name_137) {
  ARG(pat_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),pat_);
  QRET(T0);
}

FUNCODEDEF(fun_col_138) {
  ARG(pat_, 0);
  P tmpF1216;
  P xF1215;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
loop:
  T18 = CALL2(CHKREF(YisaQ),pat_,CHKREF(YLlstG));
  T17 = CALL1(CHKREF(Ynot),T18);
  tmpF1216 = T17;
  if (tmpF1216 != YPfalse) {
    T15 = tmpF1216;
  } else {
    T16 = CALL1(CHKREF(YmacrosYemptyQ),pat_);
    T15 = T16;
  }
  T14 = T15;
  if (T14 != YPfalse) {
    T0 = Ynil;
  } else {
    T13 = CALL1(CHKREF(Yhead),pat_);
    xF1215 = T13;
    T12 = CALL1(CHKREF(YsyntaxYsexpr_pattern_variableQ),xF1215);
    if (T12 != YPfalse) {
      T11 = CALL1(CHKREF(YsyntaxYsexpr_pattern_variable_name),xF1215);
      T10 = CALL1(CHKREF(Ytail),pat_);
      T9 = KCALL1(FREEREF(0),T10);
      T8 = CALL2(CHKREF(YmacrosYpair),T11,T9);
      T2 = T8;
    } else {
      T7 = CALL1(CHKREF(Yhead),pat_);
      T6 = KCALL1(FREEREF(0),T7);
      T5 = CALL1(CHKREF(Ytail),pat_);
      T4 = KCALL1(FREEREF(0),T5);
      T3 = CALL2(CHKREF(YmacrosYcat),T6,T4);
      T2 = T3;
    }
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_bind_pattern_variables_139) {
  ARG(pat_, 0);
  P colF1217;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = FUNSHELL(1,fun_col_138,1);
  colF1217 = T3;
  FUNINIT(colF1217, 1,colF1217);
  T2 = KCALL1(colF1217,pat_);
  T1 = T2;
  T0 = CALL1(CHKREF(YruntimeYdel_dups),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_macro_function_140) {
  ARG(exp_, 0);
  P funcF1219;
  P mifF1218;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = CALL1(CHKREF(YsyntaxYsexpr_method_parameters),exp_);
  T7 = CALL1(CHKREF(YsyntaxYsexpr_method_body),exp_);
  T6 = CALL1(CHKREF(YsyntaxYsexpr_sequence_Gbegin),T7);
  T5 = CALLN(CHKREF(YsyntaxYsexpr_make_syntax_if),4,T8,CHKREF(lit_1),T6,YPfalse);
  mifF1218 = T5;
  T4 = CALL1(CHKREF(Ylst),CHKREF(lit_1));
  T3 = CALL1(CHKREF(Ylst),mifF1218);
  T2 = CALL2(CHKREF(YsyntaxYsexpr_make_anonymous_method),T4,T3);
  funcF1219 = T2;
  T1 = funcF1219;
  T0 = T1;
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
  T0 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_self_evaluatingQ_0 = YPmet(FUNCODEREF(fun_sexpr_self_evaluatingQ_0),CHKREF(lit_0),T0,ENVNUL);
  T4 = BOUNDP(YsyntaxYsexpr_self_evaluatingQ);
  if (T4 != YPfalse) {
    T3 = CHKREF(YsyntaxYsexpr_self_evaluatingQ);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_sexpr_self_evaluatingQ_0;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YsyntaxYsexpr_self_evaluatingQ = T1;
  lit_2 = YPPsym((P)"sexpr-variable?");
  T5 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_variableQ_1 = YPmet(FUNCODEREF(fun_sexpr_variableQ_1),CHKREF(lit_2),T5,ENVNUL);
  T9 = BOUNDP(YsyntaxYsexpr_variableQ);
  if (T9 != YPfalse) {
    T8 = CHKREF(YsyntaxYsexpr_variableQ);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_sexpr_variableQ_1;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  YsyntaxYsexpr_variableQ = T6;
  lit_3 = YPPsym((P)"sexpr-tagged-list?");
  lit_4 = YPPsym((P)"tag");
  T10 = YPsig(YPPlist(2,CHKREF(lit_1),CHKREF(lit_4)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_sexpr_tagged_listQ_2 = YPmet(FUNCODEREF(fun_sexpr_tagged_listQ_2),CHKREF(lit_3),T10,ENVNUL);
  T14 = BOUNDP(YsyntaxYsexpr_tagged_listQ);
  if (T14 != YPfalse) {
    T13 = CHKREF(YsyntaxYsexpr_tagged_listQ);
  } else {
    T13 = YPfalse;
  }
  T12 = fun_sexpr_tagged_listQ_2;
  T11 = CALL2(CHKREF(YPdefine_method),T13,T12);
  YsyntaxYsexpr_tagged_listQ = T11;
  lit_5 = YPPsym((P)"quote");
  YsyntaxYDsexpr_quote_tag = CHKREF(lit_5);
  lit_6 = YPPsym((P)"sexpr-quoted?");
  T15 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_quotedQ_3 = YPmet(FUNCODEREF(fun_sexpr_quotedQ_3),CHKREF(lit_6),T15,ENVNUL);
  T19 = BOUNDP(YsyntaxYsexpr_quotedQ);
  if (T19 != YPfalse) {
    T18 = CHKREF(YsyntaxYsexpr_quotedQ);
  } else {
    T18 = YPfalse;
  }
  T17 = fun_sexpr_quotedQ_3;
  T16 = CALL2(CHKREF(YPdefine_method),T18,T17);
  YsyntaxYsexpr_quotedQ = T16;
  lit_7 = YPPsym((P)"sexpr-make-quote");
  T20 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_make_quote_4 = YPmet(FUNCODEREF(fun_sexpr_make_quote_4),CHKREF(lit_7),T20,ENVNUL);
  T24 = BOUNDP(YsyntaxYsexpr_make_quote);
  if (T24 != YPfalse) {
    T23 = CHKREF(YsyntaxYsexpr_make_quote);
  } else {
    T23 = YPfalse;
  }
  T22 = fun_sexpr_make_quote_4;
  T21 = CALL2(CHKREF(YPdefine_method),T23,T22);
  YsyntaxYsexpr_make_quote = T21;
  lit_8 = YPPsym((P)"sexpr-text-of-quotation");
  lit_9 = YPPsym((P)"quot");
  T25 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_text_of_quotation_5 = YPmet(FUNCODEREF(fun_sexpr_text_of_quotation_5),CHKREF(lit_8),T25,ENVNUL);
  T29 = BOUNDP(YsyntaxYsexpr_text_of_quotation);
  if (T29 != YPfalse) {
    T28 = CHKREF(YsyntaxYsexpr_text_of_quotation);
  } else {
    T28 = YPfalse;
  }
  T27 = fun_sexpr_text_of_quotation_5;
  T26 = CALL2(CHKREF(YPdefine_method),T28,T27);
  YsyntaxYsexpr_text_of_quotation = T26;
  lit_10 = YPPsym((P)"set");
  YsyntaxYDsexpr_set_tag = CHKREF(lit_10);
  lit_11 = YPPsym((P)"sexpr-assignment?");
  T30 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_assignmentQ_6 = YPmet(FUNCODEREF(fun_sexpr_assignmentQ_6),CHKREF(lit_11),T30,ENVNUL);
  T34 = BOUNDP(YsyntaxYsexpr_assignmentQ);
  if (T34 != YPfalse) {
    T33 = CHKREF(YsyntaxYsexpr_assignmentQ);
  } else {
    T33 = YPfalse;
  }
  T32 = fun_sexpr_assignmentQ_6;
  T31 = CALL2(CHKREF(YPdefine_method),T33,T32);
  YsyntaxYsexpr_assignmentQ = T31;
  lit_12 = YPPsym((P)"sexpr-assignment-variable");
  lit_13 = YPPsym((P)"assn");
  T35 = YPsig(YPPlist(1,CHKREF(lit_13)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_assignment_variable_7 = YPmet(FUNCODEREF(fun_sexpr_assignment_variable_7),CHKREF(lit_12),T35,ENVNUL);
  T39 = BOUNDP(YsyntaxYsexpr_assignment_variable);
  if (T39 != YPfalse) {
    T38 = CHKREF(YsyntaxYsexpr_assignment_variable);
  } else {
    T38 = YPfalse;
  }
  T37 = fun_sexpr_assignment_variable_7;
  T36 = CALL2(CHKREF(YPdefine_method),T38,T37);
  YsyntaxYsexpr_assignment_variable = T36;
  lit_14 = YPPsym((P)"sexpr-assignment-value");
  T40 = YPsig(YPPlist(1,CHKREF(lit_13)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_assignment_value_8 = YPmet(FUNCODEREF(fun_sexpr_assignment_value_8),CHKREF(lit_14),T40,ENVNUL);
  T44 = BOUNDP(YsyntaxYsexpr_assignment_value);
  if (T44 != YPfalse) {
    T43 = CHKREF(YsyntaxYsexpr_assignment_value);
  } else {
    T43 = YPfalse;
  }
  T42 = fun_sexpr_assignment_value_8;
  T41 = CALL2(CHKREF(YPdefine_method),T43,T42);
  YsyntaxYsexpr_assignment_value = T41;
  lit_15 = YPPsym((P)"sexpr-variable-name");
  T45 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_variable_name_9 = YPmet(FUNCODEREF(fun_sexpr_variable_name_9),CHKREF(lit_15),T45,ENVNUL);
  T49 = BOUNDP(YsyntaxYsexpr_variable_name);
  if (T49 != YPfalse) {
    T48 = CHKREF(YsyntaxYsexpr_variable_name);
  } else {
    T48 = YPfalse;
  }
  T47 = fun_sexpr_variable_name_9;
  T46 = CALL2(CHKREF(YPdefine_method),T48,T47);
  YsyntaxYsexpr_variable_name = T46;
  T50 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_variable_name_10 = YPmet(FUNCODEREF(fun_sexpr_variable_name_10),CHKREF(lit_15),T50,ENVNUL);
  T54 = BOUNDP(YsyntaxYsexpr_variable_name);
  if (T54 != YPfalse) {
    T53 = CHKREF(YsyntaxYsexpr_variable_name);
  } else {
    T53 = YPfalse;
  }
  T52 = fun_sexpr_variable_name_10;
  T51 = CALL2(CHKREF(YPdefine_method),T53,T52);
  YsyntaxYsexpr_variable_name = T51;
  lit_16 = YPPsym((P)"sexpr-variable-type");
  T55 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_variable_type_11 = YPmet(FUNCODEREF(fun_sexpr_variable_type_11),CHKREF(lit_16),T55,ENVNUL);
  T59 = BOUNDP(YsyntaxYsexpr_variable_type);
  if (T59 != YPfalse) {
    T58 = CHKREF(YsyntaxYsexpr_variable_type);
  } else {
    T58 = YPfalse;
  }
  T57 = fun_sexpr_variable_type_11;
  T56 = CALL2(CHKREF(YPdefine_method),T58,T57);
  YsyntaxYsexpr_variable_type = T56;
  lit_17 = YPPsym((P)"<any>");
  T60 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_variable_type_12 = YPmet(FUNCODEREF(fun_sexpr_variable_type_12),CHKREF(lit_16),T60,ENVNUL);
  T64 = BOUNDP(YsyntaxYsexpr_variable_type);
  if (T64 != YPfalse) {
    T63 = CHKREF(YsyntaxYsexpr_variable_type);
  } else {
    T63 = YPfalse;
  }
  T62 = fun_sexpr_variable_type_12;
  T61 = CALL2(CHKREF(YPdefine_method),T63,T62);
  YsyntaxYsexpr_variable_type = T61;
  lit_18 = YPPsym((P)"dv");
  YsyntaxYDsexpr_define_tag = CHKREF(lit_18);
  lit_19 = YPPsym((P)"sexpr-definition?");
  T65 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_definitionQ_13 = YPmet(FUNCODEREF(fun_sexpr_definitionQ_13),CHKREF(lit_19),T65,ENVNUL);
  T69 = BOUNDP(YsyntaxYsexpr_definitionQ);
  if (T69 != YPfalse) {
    T68 = CHKREF(YsyntaxYsexpr_definitionQ);
  } else {
    T68 = YPfalse;
  }
  T67 = fun_sexpr_definitionQ_13;
  T66 = CALL2(CHKREF(YPdefine_method),T68,T67);
  YsyntaxYsexpr_definitionQ = T66;
  lit_20 = YPPsym((P)"quasiquote");
  YsyntaxYDsexpr_quasiquote_tag = CHKREF(lit_20);
  lit_21 = YPPsym((P)"sexpr-definition-variable");
  lit_22 = YPPsym((P)"defn");
  T70 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_definition_variable_14 = YPmet(FUNCODEREF(fun_sexpr_definition_variable_14),CHKREF(lit_21),T70,ENVNUL);
  T74 = BOUNDP(YsyntaxYsexpr_definition_variable);
  if (T74 != YPfalse) {
    T73 = CHKREF(YsyntaxYsexpr_definition_variable);
  } else {
    T73 = YPfalse;
  }
  T72 = fun_sexpr_definition_variable_14;
  T71 = CALL2(CHKREF(YPdefine_method),T73,T72);
  YsyntaxYsexpr_definition_variable = T71;
  lit_23 = YPPsym((P)"sexpr-definition-value");
  T75 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_definition_value_15 = YPmet(FUNCODEREF(fun_sexpr_definition_value_15),CHKREF(lit_23),T75,ENVNUL);
  T79 = BOUNDP(YsyntaxYsexpr_definition_value);
  if (T79 != YPfalse) {
    T78 = CHKREF(YsyntaxYsexpr_definition_value);
  } else {
    T78 = YPfalse;
  }
  T77 = fun_sexpr_definition_value_15;
  T76 = CALL2(CHKREF(YPdefine_method),T78,T77);
  YsyntaxYsexpr_definition_value = T76;
  lit_24 = YPPsym((P)"ds");
  YsyntaxYDsexpr_define_syntax_tag = CHKREF(lit_24);
  lit_25 = YPPsym((P)"sexpr-syntax-definition?");
  T80 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_syntax_definitionQ_16 = YPmet(FUNCODEREF(fun_sexpr_syntax_definitionQ_16),CHKREF(lit_25),T80,ENVNUL);
  T84 = BOUNDP(YsyntaxYsexpr_syntax_definitionQ);
  if (T84 != YPfalse) {
    T83 = CHKREF(YsyntaxYsexpr_syntax_definitionQ);
  } else {
    T83 = YPfalse;
  }
  T82 = fun_sexpr_syntax_definitionQ_16;
  T81 = CALL2(CHKREF(YPdefine_method),T83,T82);
  YsyntaxYsexpr_syntax_definitionQ = T81;
  lit_26 = YPPsym((P)"mac");
  YsyntaxYDsexpr_macro_tag = CHKREF(lit_26);
  lit_27 = YPPsym((P)"sexpr-syntax-definition-variable");
  T85 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_syntax_definition_variable_17 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_variable_17),CHKREF(lit_27),T85,ENVNUL);
  T89 = BOUNDP(YsyntaxYsexpr_syntax_definition_variable);
  if (T89 != YPfalse) {
    T88 = CHKREF(YsyntaxYsexpr_syntax_definition_variable);
  } else {
    T88 = YPfalse;
  }
  T87 = fun_sexpr_syntax_definition_variable_17;
  T86 = CALL2(CHKREF(YPdefine_method),T88,T87);
  YsyntaxYsexpr_syntax_definition_variable = T86;
  lit_28 = YPPsym((P)"sexpr-syntax-definition-value");
  T90 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_syntax_definition_value_18 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_value_18),CHKREF(lit_28),T90,ENVNUL);
  T94 = BOUNDP(YsyntaxYsexpr_syntax_definition_value);
  if (T94 != YPfalse) {
    T93 = CHKREF(YsyntaxYsexpr_syntax_definition_value);
  } else {
    T93 = YPfalse;
  }
  T92 = fun_sexpr_syntax_definition_value_18;
  T91 = CALL2(CHKREF(YPdefine_method),T93,T92);
  YsyntaxYsexpr_syntax_definition_value = T91;
  lit_29 = YPPsym((P)"df");
  YsyntaxYDsexpr_define_function_tag = CHKREF(lit_29);
  lit_30 = YPPsym((P)"sexpr-function-definition?");
  T95 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_function_definitionQ_19 = YPmet(FUNCODEREF(fun_sexpr_function_definitionQ_19),CHKREF(lit_30),T95,ENVNUL);
  T99 = BOUNDP(YsyntaxYsexpr_function_definitionQ);
  if (T99 != YPfalse) {
    T98 = CHKREF(YsyntaxYsexpr_function_definitionQ);
  } else {
    T98 = YPfalse;
  }
  T97 = fun_sexpr_function_definitionQ_19;
  T96 = CALL2(CHKREF(YPdefine_method),T98,T97);
  YsyntaxYsexpr_function_definitionQ = T96;
  lit_31 = YPPsym((P)"dm");
  YsyntaxYDsexpr_define_method_tag = CHKREF(lit_31);
  lit_32 = YPPsym((P)"sexpr-method-definition?");
  T100 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_method_definitionQ_20 = YPmet(FUNCODEREF(fun_sexpr_method_definitionQ_20),CHKREF(lit_32),T100,ENVNUL);
  T104 = BOUNDP(YsyntaxYsexpr_method_definitionQ);
  if (T104 != YPfalse) {
    T103 = CHKREF(YsyntaxYsexpr_method_definitionQ);
  } else {
    T103 = YPfalse;
  }
  T102 = fun_sexpr_method_definitionQ_20;
  T101 = CALL2(CHKREF(YPdefine_method),T103,T102);
  YsyntaxYsexpr_method_definitionQ = T101;
  lit_33 = YPPsym((P)"dg");
  YsyntaxYDsexpr_define_generic_tag = CHKREF(lit_33);
  lit_34 = YPPsym((P)"sexpr-generic-definition?");
  T105 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_generic_definitionQ_21 = YPmet(FUNCODEREF(fun_sexpr_generic_definitionQ_21),CHKREF(lit_34),T105,ENVNUL);
  T109 = BOUNDP(YsyntaxYsexpr_generic_definitionQ);
  if (T109 != YPfalse) {
    T108 = CHKREF(YsyntaxYsexpr_generic_definitionQ);
  } else {
    T108 = YPfalse;
  }
  T107 = fun_sexpr_generic_definitionQ_21;
  T106 = CALL2(CHKREF(YPdefine_method),T108,T107);
  YsyntaxYsexpr_generic_definitionQ = T106;
  lit_35 = YPPsym((P)"sexpr-function-definition-variable");
  T110 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_function_definition_variable_22 = YPmet(FUNCODEREF(fun_sexpr_function_definition_variable_22),CHKREF(lit_35),T110,ENVNUL);
  T114 = BOUNDP(YsyntaxYsexpr_function_definition_variable);
  if (T114 != YPfalse) {
    T113 = CHKREF(YsyntaxYsexpr_function_definition_variable);
  } else {
    T113 = YPfalse;
  }
  T112 = fun_sexpr_function_definition_variable_22;
  T111 = CALL2(CHKREF(YPdefine_method),T113,T112);
  YsyntaxYsexpr_function_definition_variable = T111;
  lit_36 = YPPsym((P)"sexpr-forward-primitive?");
  T115 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_forward_primitiveQ_23 = YPmet(FUNCODEREF(fun_sexpr_forward_primitiveQ_23),CHKREF(lit_36),T115,ENVNUL);
  T119 = BOUNDP(YsyntaxYsexpr_forward_primitiveQ);
  if (T119 != YPfalse) {
    T118 = CHKREF(YsyntaxYsexpr_forward_primitiveQ);
  } else {
    T118 = YPfalse;
  }
  T117 = fun_sexpr_forward_primitiveQ_23;
  T116 = CALL2(CHKREF(YPdefine_method),T118,T117);
  YsyntaxYsexpr_forward_primitiveQ = T116;
  lit_37 = YPPsym((P)"sexpr-signature-parameters");
  lit_38 = YPPsym((P)"signature");
  lit_39 = YPPsym((P)"=>");
  T120 = YPsig(YPPlist(1,CHKREF(lit_38)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_signature_parameters_24 = YPmet(FUNCODEREF(fun_sexpr_signature_parameters_24),CHKREF(lit_37),T120,ENVNUL);
  T124 = BOUNDP(YsyntaxYsexpr_signature_parameters);
  if (T124 != YPfalse) {
    T123 = CHKREF(YsyntaxYsexpr_signature_parameters);
  } else {
    T123 = YPfalse;
  }
  T122 = fun_sexpr_signature_parameters_24;
  T121 = CALL2(CHKREF(YPdefine_method),T123,T122);
  YsyntaxYsexpr_signature_parameters = T121;
  lit_40 = YPPsym((P)"sexpr-signature-value");
  lit_41 = YPPsym((P)"<tup>");
  lit_42 = YPPsym((P)"tup");
  T125 = YPsig(YPPlist(1,CHKREF(lit_38)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_signature_value_25 = YPmet(FUNCODEREF(fun_sexpr_signature_value_25),CHKREF(lit_40),T125,ENVNUL);
  T129 = BOUNDP(YsyntaxYsexpr_signature_value);
  if (T129 != YPfalse) {
    T128 = CHKREF(YsyntaxYsexpr_signature_value);
  } else {
    T128 = YPfalse;
  }
  T127 = fun_sexpr_signature_value_25;
  T126 = CALL2(CHKREF(YPdefine_method),T128,T127);
  YsyntaxYsexpr_signature_value = T126;
  lit_43 = YPPsym((P)"sexpr-function-signature");
  T130 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_function_signature_26 = YPmet(FUNCODEREF(fun_sexpr_function_signature_26),CHKREF(lit_43),T130,ENVNUL);
  T134 = BOUNDP(YsyntaxYsexpr_function_signature);
  if (T134 != YPfalse) {
    T133 = CHKREF(YsyntaxYsexpr_function_signature);
  } else {
    T133 = YPfalse;
  }
  T132 = fun_sexpr_function_signature_26;
  T131 = CALL2(CHKREF(YPdefine_method),T133,T132);
  YsyntaxYsexpr_function_signature = T131;
  lit_44 = YPPsym((P)"sexpr-function-parameters");
  T135 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_function_parameters_27 = YPmet(FUNCODEREF(fun_sexpr_function_parameters_27),CHKREF(lit_44),T135,ENVNUL);
  T139 = BOUNDP(YsyntaxYsexpr_function_parameters);
  if (T139 != YPfalse) {
    T138 = CHKREF(YsyntaxYsexpr_function_parameters);
  } else {
    T138 = YPfalse;
  }
  T137 = fun_sexpr_function_parameters_27;
  T136 = CALL2(CHKREF(YPdefine_method),T138,T137);
  YsyntaxYsexpr_function_parameters = T136;
  lit_45 = YPPsym((P)"sexpr-function-value");
  T140 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_function_value_28 = YPmet(FUNCODEREF(fun_sexpr_function_value_28),CHKREF(lit_45),T140,ENVNUL);
  T144 = BOUNDP(YsyntaxYsexpr_function_value);
  if (T144 != YPfalse) {
    T143 = CHKREF(YsyntaxYsexpr_function_value);
  } else {
    T143 = YPfalse;
  }
  T142 = fun_sexpr_function_value_28;
  T141 = CALL2(CHKREF(YPdefine_method),T143,T142);
  YsyntaxYsexpr_function_value = T141;
  lit_46 = YPPsym((P)"sexpr-function-body");
  T145 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_function_body_29 = YPmet(FUNCODEREF(fun_sexpr_function_body_29),CHKREF(lit_46),T145,ENVNUL);
  T149 = BOUNDP(YsyntaxYsexpr_function_body);
  if (T149 != YPfalse) {
    T148 = CHKREF(YsyntaxYsexpr_function_body);
  } else {
    T148 = YPfalse;
  }
  T147 = fun_sexpr_function_body_29;
  T146 = CALL2(CHKREF(YPdefine_method),T148,T147);
  YsyntaxYsexpr_function_body = T146;
  lit_47 = YPPsym((P)"fun");
  YsyntaxYDsexpr_method_tag = CHKREF(lit_47);
  lit_48 = YPPsym((P)"sexpr-function-definition-value");
  T150 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_function_definition_value_30 = YPmet(FUNCODEREF(fun_sexpr_function_definition_value_30),CHKREF(lit_48),T150,ENVNUL);
  T154 = BOUNDP(YsyntaxYsexpr_function_definition_value);
  if (T154 != YPfalse) {
    T153 = CHKREF(YsyntaxYsexpr_function_definition_value);
  } else {
    T153 = YPfalse;
  }
  T152 = fun_sexpr_function_definition_value_30;
  T151 = CALL2(CHKREF(YPdefine_method),T153,T152);
  YsyntaxYsexpr_function_definition_value = T151;
  lit_49 = YPPsym((P)"sexpr-method?");
  T155 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_methodQ_31 = YPmet(FUNCODEREF(fun_sexpr_methodQ_31),CHKREF(lit_49),T155,ENVNUL);
  T159 = BOUNDP(YsyntaxYsexpr_methodQ);
  if (T159 != YPfalse) {
    T158 = CHKREF(YsyntaxYsexpr_methodQ);
  } else {
    T158 = YPfalse;
  }
  T157 = fun_sexpr_methodQ_31;
  T156 = CALL2(CHKREF(YPdefine_method),T158,T157);
  YsyntaxYsexpr_methodQ = T156;
  lit_50 = YPPsym((P)"sexpr-method-signature");
  lit_51 = YPPsym((P)"method-exp");
  T160 = YPsig(YPPlist(1,CHKREF(lit_51)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_method_signature_32 = YPmet(FUNCODEREF(fun_sexpr_method_signature_32),CHKREF(lit_50),T160,ENVNUL);
  T164 = BOUNDP(YsyntaxYsexpr_method_signature);
  if (T164 != YPfalse) {
    T163 = CHKREF(YsyntaxYsexpr_method_signature);
  } else {
    T163 = YPfalse;
  }
  T162 = fun_sexpr_method_signature_32;
  T161 = CALL2(CHKREF(YPdefine_method),T163,T162);
  YsyntaxYsexpr_method_signature = T161;
  lit_52 = YPPsym((P)"sexpr-method-parameters");
  T165 = YPsig(YPPlist(1,CHKREF(lit_51)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_method_parameters_33 = YPmet(FUNCODEREF(fun_sexpr_method_parameters_33),CHKREF(lit_52),T165,ENVNUL);
  T169 = BOUNDP(YsyntaxYsexpr_method_parameters);
  if (T169 != YPfalse) {
    T168 = CHKREF(YsyntaxYsexpr_method_parameters);
  } else {
    T168 = YPfalse;
  }
  T167 = fun_sexpr_method_parameters_33;
  T166 = CALL2(CHKREF(YPdefine_method),T168,T167);
  YsyntaxYsexpr_method_parameters = T166;
  lit_53 = YPPsym((P)"sexpr-method-value");
  T170 = YPsig(YPPlist(1,CHKREF(lit_51)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_method_value_34 = YPmet(FUNCODEREF(fun_sexpr_method_value_34),CHKREF(lit_53),T170,ENVNUL);
  T174 = BOUNDP(YsyntaxYsexpr_method_value);
  if (T174 != YPfalse) {
    T173 = CHKREF(YsyntaxYsexpr_method_value);
  } else {
    T173 = YPfalse;
  }
  T172 = fun_sexpr_method_value_34;
  T171 = CALL2(CHKREF(YPdefine_method),T173,T172);
  YsyntaxYsexpr_method_value = T171;
  lit_54 = YPPsym((P)"sexpr-method-body");
  T175 = YPsig(YPPlist(1,CHKREF(lit_51)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_method_body_35 = YPmet(FUNCODEREF(fun_sexpr_method_body_35),CHKREF(lit_54),T175,ENVNUL);
  T179 = BOUNDP(YsyntaxYsexpr_method_body);
  if (T179 != YPfalse) {
    T178 = CHKREF(YsyntaxYsexpr_method_body);
  } else {
    T178 = YPfalse;
  }
  T177 = fun_sexpr_method_body_35;
  T176 = CALL2(CHKREF(YPdefine_method),T178,T177);
  YsyntaxYsexpr_method_body = T176;
  lit_55 = YPPsym((P)"sexpr-make-anonymous-method");
  lit_56 = YPPsym((P)"body");
  lit_57 = YPPsym((P)"parameters");
  T180 = YPsig(YPPlist(2,CHKREF(lit_57),CHKREF(lit_56)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_sexpr_make_anonymous_method_36 = YPmet(FUNCODEREF(fun_sexpr_make_anonymous_method_36),CHKREF(lit_55),T180,ENVNUL);
  T184 = BOUNDP(YsyntaxYsexpr_make_anonymous_method);
  if (T184 != YPfalse) {
    T183 = CHKREF(YsyntaxYsexpr_make_anonymous_method);
  } else {
    T183 = YPfalse;
  }
  T182 = fun_sexpr_make_anonymous_method_36;
  T181 = CALL2(CHKREF(YPdefine_method),T183,T182);
  YsyntaxYsexpr_make_anonymous_method = T181;
  lit_58 = YPPsym((P)"sexpr-make-method");
  lit_59 = YPPsym((P)"name");
  T185 = YPsig(YPPlist(3,CHKREF(lit_59),CHKREF(lit_57),CHKREF(lit_56)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)3),CHKREF(YLlstG));
  fun_sexpr_make_method_37 = YPmet(FUNCODEREF(fun_sexpr_make_method_37),CHKREF(lit_58),T185,ENVNUL);
  T189 = BOUNDP(YsyntaxYsexpr_make_method);
  if (T189 != YPfalse) {
    T188 = CHKREF(YsyntaxYsexpr_make_method);
  } else {
    T188 = YPfalse;
  }
  T187 = fun_sexpr_make_method_37;
  T186 = CALL2(CHKREF(YPdefine_method),T188,T187);
  YsyntaxYsexpr_make_method = T186;
  lit_60 = YPPsym((P)"if");
  YsyntaxYDsexpr_if_tag = CHKREF(lit_60);
  lit_61 = YPPsym((P)"sexpr-if?");
  T190 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_ifQ_38 = YPmet(FUNCODEREF(fun_sexpr_ifQ_38),CHKREF(lit_61),T190,ENVNUL);
  T194 = BOUNDP(YsyntaxYsexpr_ifQ);
  if (T194 != YPfalse) {
    T193 = CHKREF(YsyntaxYsexpr_ifQ);
  } else {
    T193 = YPfalse;
  }
  T192 = fun_sexpr_ifQ_38;
  T191 = CALL2(CHKREF(YPdefine_method),T193,T192);
  YsyntaxYsexpr_ifQ = T191;
  lit_62 = YPPsym((P)"sexpr-if-test");
  T195 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_if_test_39 = YPmet(FUNCODEREF(fun_sexpr_if_test_39),CHKREF(lit_62),T195,ENVNUL);
  T199 = BOUNDP(YsyntaxYsexpr_if_test);
  if (T199 != YPfalse) {
    T198 = CHKREF(YsyntaxYsexpr_if_test);
  } else {
    T198 = YPfalse;
  }
  T197 = fun_sexpr_if_test_39;
  T196 = CALL2(CHKREF(YPdefine_method),T198,T197);
  YsyntaxYsexpr_if_test = T196;
  lit_63 = YPPsym((P)"sexpr-if-then");
  T200 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_if_then_40 = YPmet(FUNCODEREF(fun_sexpr_if_then_40),CHKREF(lit_63),T200,ENVNUL);
  T204 = BOUNDP(YsyntaxYsexpr_if_then);
  if (T204 != YPfalse) {
    T203 = CHKREF(YsyntaxYsexpr_if_then);
  } else {
    T203 = YPfalse;
  }
  T202 = fun_sexpr_if_then_40;
  T201 = CALL2(CHKREF(YPdefine_method),T203,T202);
  YsyntaxYsexpr_if_then = T201;
  lit_64 = YPPsym((P)"sexpr-if-else");
  T205 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_if_else_41 = YPmet(FUNCODEREF(fun_sexpr_if_else_41),CHKREF(lit_64),T205,ENVNUL);
  T209 = BOUNDP(YsyntaxYsexpr_if_else);
  if (T209 != YPfalse) {
    T208 = CHKREF(YsyntaxYsexpr_if_else);
  } else {
    T208 = YPfalse;
  }
  T207 = fun_sexpr_if_else_41;
  T206 = CALL2(CHKREF(YPdefine_method),T208,T207);
  YsyntaxYsexpr_if_else = T206;
  lit_65 = YPPsym((P)"sexpr-make-if");
  lit_66 = YPPsym((P)"else");
  lit_67 = YPPsym((P)"then");
  lit_68 = YPPsym((P)"test");
  T210 = YPsig(YPPlist(3,CHKREF(lit_68),CHKREF(lit_67),CHKREF(lit_66)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLlstG));
  fun_sexpr_make_if_42 = YPmet(FUNCODEREF(fun_sexpr_make_if_42),CHKREF(lit_65),T210,ENVNUL);
  T214 = BOUNDP(YsyntaxYsexpr_make_if);
  if (T214 != YPfalse) {
    T213 = CHKREF(YsyntaxYsexpr_make_if);
  } else {
    T213 = YPfalse;
  }
  T212 = fun_sexpr_make_if_42;
  T211 = CALL2(CHKREF(YPdefine_method),T213,T212);
  YsyntaxYsexpr_make_if = T211;
  lit_69 = YPPsym((P)"lab");
  YsyntaxYDsexpr_bind_exit_tag = CHKREF(lit_69);
  lit_70 = YPPsym((P)"sexpr-block?");
  T215 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_blockQ_43 = YPmet(FUNCODEREF(fun_sexpr_blockQ_43),CHKREF(lit_70),T215,ENVNUL);
  T219 = BOUNDP(YsyntaxYsexpr_blockQ);
  if (T219 != YPfalse) {
    T218 = CHKREF(YsyntaxYsexpr_blockQ);
  } else {
    T218 = YPfalse;
  }
  T217 = fun_sexpr_blockQ_43;
  T216 = CALL2(CHKREF(YPdefine_method),T218,T217);
  YsyntaxYsexpr_blockQ = T216;
  lit_71 = YPPsym((P)"sexpr-block-name");
  T220 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_block_name_44 = YPmet(FUNCODEREF(fun_sexpr_block_name_44),CHKREF(lit_71),T220,ENVNUL);
  T224 = BOUNDP(YsyntaxYsexpr_block_name);
  if (T224 != YPfalse) {
    T223 = CHKREF(YsyntaxYsexpr_block_name);
  } else {
    T223 = YPfalse;
  }
  T222 = fun_sexpr_block_name_44;
  T221 = CALL2(CHKREF(YPdefine_method),T223,T222);
  YsyntaxYsexpr_block_name = T221;
  lit_72 = YPPsym((P)"sexpr-block-body");
  T225 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_block_body_45 = YPmet(FUNCODEREF(fun_sexpr_block_body_45),CHKREF(lit_72),T225,ENVNUL);
  T229 = BOUNDP(YsyntaxYsexpr_block_body);
  if (T229 != YPfalse) {
    T228 = CHKREF(YsyntaxYsexpr_block_body);
  } else {
    T228 = YPfalse;
  }
  T227 = fun_sexpr_block_body_45;
  T226 = CALL2(CHKREF(YPdefine_method),T228,T227);
  YsyntaxYsexpr_block_body = T226;
  lit_73 = YPPsym((P)"fin");
  YsyntaxYDsexpr_unwind_protect_tag = CHKREF(lit_73);
  lit_74 = YPPsym((P)"sexpr-unwind-protect?");
  T230 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_unwind_protectQ_46 = YPmet(FUNCODEREF(fun_sexpr_unwind_protectQ_46),CHKREF(lit_74),T230,ENVNUL);
  T234 = BOUNDP(YsyntaxYsexpr_unwind_protectQ);
  if (T234 != YPfalse) {
    T233 = CHKREF(YsyntaxYsexpr_unwind_protectQ);
  } else {
    T233 = YPfalse;
  }
  T232 = fun_sexpr_unwind_protectQ_46;
  T231 = CALL2(CHKREF(YPdefine_method),T233,T232);
  YsyntaxYsexpr_unwind_protectQ = T231;
  lit_75 = YPPsym((P)"sexpr-unwind-protect-protected-form");
  T237 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  T236 = fun_sexpr_unwind_protect_protected_form_47 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_protected_form_47),CHKREF(lit_75),T237,ENVNUL);
  T242 = BOUNDP(YsyntaxYsexpr_unwind_protect_protected_form);
  if (T242 != YPfalse) {
    T241 = CHKREF(YsyntaxYsexpr_unwind_protect_protected_form);
  } else {
    T241 = YPfalse;
  }
  T240 = fun_sexpr_unwind_protect_protected_form_47;
  T239 = CALL2(CHKREF(YPdefine_method),T241,T240);
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
  T0 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_unwind_protect_cleanup_forms_48 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_cleanup_forms_48),CHKREF(lit_76),T0,ENVNUL);
  T4 = BOUNDP(YsyntaxYsexpr_unwind_protect_cleanup_forms);
  if (T4 != YPfalse) {
    T3 = CHKREF(YsyntaxYsexpr_unwind_protect_cleanup_forms);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_sexpr_unwind_protect_cleanup_forms_48;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YsyntaxYsexpr_unwind_protect_cleanup_forms = T1;
  lit_77 = YPPsym((P)"try");
  YsyntaxYDsexpr_monitor_tag = CHKREF(lit_77);
  lit_78 = YPPsym((P)"sexpr-monitor?");
  T5 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_monitorQ_49 = YPmet(FUNCODEREF(fun_sexpr_monitorQ_49),CHKREF(lit_78),T5,ENVNUL);
  T9 = BOUNDP(YsyntaxYsexpr_monitorQ);
  if (T9 != YPfalse) {
    T8 = CHKREF(YsyntaxYsexpr_monitorQ);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_sexpr_monitorQ_49;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  YsyntaxYsexpr_monitorQ = T6;
  lit_79 = YPPsym((P)"sexpr-monitor-expand");
  lit_80 = YPPsym((P)"return");
  lit_81 = YPPsym((P)"type");
  lit_82 = YPsb((P)"Match Pattern Failure");
  lit_83 = YPPsym((P)"x-1234");
  lit_84 = YPPsym((P)"args");
  lit_85 = YPPsym((P)"msg");
  lit_86 = YPsb((P)"Malformed TRY expression: ~=");
  T12 = YPsig(YPPlist(2,CHKREF(lit_85),CHKREF(lit_84)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1234_50 = YPmet(FUNCODEREF(fun_x_1234_50),CHKREF(lit_83),T12,ENVNUL);
  T11 = YPsig(YPPlist(1,CHKREF(lit_80)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T11,ENVNUL);
  T10 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_monitor_expand_52 = YPmet(FUNCODEREF(fun_sexpr_monitor_expand_52),CHKREF(lit_79),T10,ENVNUL);
  T16 = BOUNDP(YsyntaxYsexpr_monitor_expand);
  if (T16 != YPfalse) {
    T15 = CHKREF(YsyntaxYsexpr_monitor_expand);
  } else {
    T15 = YPfalse;
  }
  T14 = fun_sexpr_monitor_expand_52;
  T13 = CALL2(CHKREF(YPdefine_method),T15,T14);
  YsyntaxYsexpr_monitor_expand = T13;
  lit_87 = YPPsym((P)"find-option");
  lit_88 = YPPsym((P)"default");
  lit_89 = YPPsym((P)"option");
  lit_90 = YPPsym((P)"options");
  T17 = YPsig(YPPlist(3,CHKREF(lit_90),CHKREF(lit_89),CHKREF(lit_88)),YPPlist(3,CHKREF(YLlstG),CHKREF(YLsymG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  YsyntaxYfind_option = YPmet(FUNCODEREF(YsyntaxYfind_option),CHKREF(lit_87),T17,ENVNUL);
  T18 = YsyntaxYfind_option;
  YsyntaxYfind_option = T18;
  lit_91 = YPPsym((P)"sexpr-monitor-type");
  lit_92 = YPPsym((P)"x-1236");
  lit_93 = YPsb((P)"Malformed TRY condition type: %=");
  lit_94 = YPPlist(1,YPPsym((P)"<condition>"));
  T21 = YPsig(YPPlist(2,CHKREF(lit_85),CHKREF(lit_84)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1236_54 = YPmet(FUNCODEREF(fun_x_1236_54),CHKREF(lit_92),T21,ENVNUL);
  T20 = YPsig(YPPlist(1,CHKREF(lit_80)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T20,ENVNUL);
  T19 = YPsig(YPPlist(1,CHKREF(lit_90)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_monitor_type_56 = YPmet(FUNCODEREF(fun_sexpr_monitor_type_56),CHKREF(lit_91),T19,ENVNUL);
  T25 = BOUNDP(YsyntaxYsexpr_monitor_type);
  if (T25 != YPfalse) {
    T24 = CHKREF(YsyntaxYsexpr_monitor_type);
  } else {
    T24 = YPfalse;
  }
  T23 = fun_sexpr_monitor_type_56;
  T22 = CALL2(CHKREF(YPdefine_method),T24,T23);
  YsyntaxYsexpr_monitor_type = T22;
  lit_95 = YPPsym((P)"sexpr-monitor-info");
  lit_96 = YPPsym((P)"$default-handler-info");
  lit_97 = YPPsym((P)"lst");
  lit_98 = YPPsym((P)"handler-info-arguments");
  lit_99 = YPPsym((P)"handler-info-message");
  lit_100 = YPPsym((P)"<simple-handler-info>");
  lit_101 = YPPsym((P)"isa");
  lit_102 = YPPsym((P)"x-1240");
  lit_103 = YPsb((P)"Malformed TRY description: %=");
  lit_104 = YPPsym((P)"x-1238");
  lit_105 = YPsb((P)"Malformed TRY info expression: %=");
  lit_106 = YPsb((P)"TRY may only have one of INFO or DESCRIPTION: %=");
  lit_107 = YPPsym((P)"description");
  lit_108 = YPPsym((P)"info");
  T30 = YPsig(YPPlist(2,CHKREF(lit_85),CHKREF(lit_84)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1240_57 = YPmet(FUNCODEREF(fun_x_1240_57),CHKREF(lit_102),T30,ENVNUL);
  T29 = YPsig(YPPlist(1,CHKREF(lit_80)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T29,ENVNUL);
  T28 = YPsig(YPPlist(2,CHKREF(lit_85),CHKREF(lit_84)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1238_59 = YPmet(FUNCODEREF(fun_x_1238_59),CHKREF(lit_104),T28,ENVNUL);
  T27 = YPsig(YPPlist(1,CHKREF(lit_80)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T27,ENVNUL);
  T26 = YPsig(YPPlist(1,CHKREF(lit_90)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_monitor_info_61 = YPmet(FUNCODEREF(fun_sexpr_monitor_info_61),CHKREF(lit_95),T26,ENVNUL);
  T34 = BOUNDP(YsyntaxYsexpr_monitor_info);
  if (T34 != YPfalse) {
    T33 = CHKREF(YsyntaxYsexpr_monitor_info);
  } else {
    T33 = YPfalse;
  }
  T32 = fun_sexpr_monitor_info_61;
  T31 = CALL2(CHKREF(YPdefine_method),T33,T32);
  YsyntaxYsexpr_monitor_info = T31;
  lit_109 = YPPsym((P)"sexpr-monitor-test");
  lit_110 = YPPlist(1,YPtrue);
  T35 = YPsig(YPPlist(1,CHKREF(lit_90)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_monitor_test_62 = YPmet(FUNCODEREF(fun_sexpr_monitor_test_62),CHKREF(lit_109),T35,ENVNUL);
  T39 = BOUNDP(YsyntaxYsexpr_monitor_test);
  if (T39 != YPfalse) {
    T38 = CHKREF(YsyntaxYsexpr_monitor_test);
  } else {
    T38 = YPfalse;
  }
  T37 = fun_sexpr_monitor_test_62;
  T36 = CALL2(CHKREF(YPdefine_method),T38,T37);
  YsyntaxYsexpr_monitor_test = T36;
  lit_111 = YPPsym((P)"sexpr-monitor-body");
  T40 = YPsig(YPPlist(1,CHKREF(lit_56)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_monitor_body_63 = YPmet(FUNCODEREF(fun_sexpr_monitor_body_63),CHKREF(lit_111),T40,ENVNUL);
  T44 = BOUNDP(YsyntaxYsexpr_monitor_body);
  if (T44 != YPfalse) {
    T43 = CHKREF(YsyntaxYsexpr_monitor_body);
  } else {
    T43 = YPfalse;
  }
  T42 = fun_sexpr_monitor_body_63;
  T41 = CALL2(CHKREF(YPdefine_method),T43,T42);
  YsyntaxYsexpr_monitor_body = T41;
  lit_112 = YPPsym((P)"seq");
  YsyntaxYDsexpr_begin_tag = CHKREF(lit_112);
  lit_113 = YPPsym((P)"sexpr-begin?");
  T45 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_beginQ_64 = YPmet(FUNCODEREF(fun_sexpr_beginQ_64),CHKREF(lit_113),T45,ENVNUL);
  T49 = BOUNDP(YsyntaxYsexpr_beginQ);
  if (T49 != YPfalse) {
    T48 = CHKREF(YsyntaxYsexpr_beginQ);
  } else {
    T48 = YPfalse;
  }
  T47 = fun_sexpr_beginQ_64;
  T46 = CALL2(CHKREF(YPdefine_method),T48,T47);
  YsyntaxYsexpr_beginQ = T46;
  lit_114 = YPPsym((P)"sexpr-begin-actions");
  lit_115 = YPPsym((P)"begin-exp");
  T50 = YPsig(YPPlist(1,CHKREF(lit_115)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_begin_actions_65 = YPmet(FUNCODEREF(fun_sexpr_begin_actions_65),CHKREF(lit_114),T50,ENVNUL);
  T54 = BOUNDP(YsyntaxYsexpr_begin_actions);
  if (T54 != YPfalse) {
    T53 = CHKREF(YsyntaxYsexpr_begin_actions);
  } else {
    T53 = YPfalse;
  }
  T52 = fun_sexpr_begin_actions_65;
  T51 = CALL2(CHKREF(YPdefine_method),T53,T52);
  YsyntaxYsexpr_begin_actions = T51;
  lit_116 = YPPsym((P)"sexpr-last-exp?");
  T55 = YPsig(YPPlist(1,CHKREF(lit_112)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_last_expQ_66 = YPmet(FUNCODEREF(fun_sexpr_last_expQ_66),CHKREF(lit_116),T55,ENVNUL);
  T59 = BOUNDP(YsyntaxYsexpr_last_expQ);
  if (T59 != YPfalse) {
    T58 = CHKREF(YsyntaxYsexpr_last_expQ);
  } else {
    T58 = YPfalse;
  }
  T57 = fun_sexpr_last_expQ_66;
  T56 = CALL2(CHKREF(YPdefine_method),T58,T57);
  YsyntaxYsexpr_last_expQ = T56;
  lit_117 = YPPsym((P)"sexpr-first-exp");
  T60 = YPsig(YPPlist(1,CHKREF(lit_112)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_first_exp_67 = YPmet(FUNCODEREF(fun_sexpr_first_exp_67),CHKREF(lit_117),T60,ENVNUL);
  T64 = BOUNDP(YsyntaxYsexpr_first_exp);
  if (T64 != YPfalse) {
    T63 = CHKREF(YsyntaxYsexpr_first_exp);
  } else {
    T63 = YPfalse;
  }
  T62 = fun_sexpr_first_exp_67;
  T61 = CALL2(CHKREF(YPdefine_method),T63,T62);
  YsyntaxYsexpr_first_exp = T61;
  lit_118 = YPPsym((P)"sexpr-rest-exps");
  T65 = YPsig(YPPlist(1,CHKREF(lit_112)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_rest_exps_68 = YPmet(FUNCODEREF(fun_sexpr_rest_exps_68),CHKREF(lit_118),T65,ENVNUL);
  T69 = BOUNDP(YsyntaxYsexpr_rest_exps);
  if (T69 != YPfalse) {
    T68 = CHKREF(YsyntaxYsexpr_rest_exps);
  } else {
    T68 = YPfalse;
  }
  T67 = fun_sexpr_rest_exps_68;
  T66 = CALL2(CHKREF(YPdefine_method),T68,T67);
  YsyntaxYsexpr_rest_exps = T66;
  lit_119 = YPPsym((P)"sexpr-sequence->begin");
  T70 = YPsig(YPPlist(1,CHKREF(lit_112)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_sequence_Gbegin_69 = YPmet(FUNCODEREF(fun_sexpr_sequence_Gbegin_69),CHKREF(lit_119),T70,ENVNUL);
  T74 = BOUNDP(YsyntaxYsexpr_sequence_Gbegin);
  if (T74 != YPfalse) {
    T73 = CHKREF(YsyntaxYsexpr_sequence_Gbegin);
  } else {
    T73 = YPfalse;
  }
  T72 = fun_sexpr_sequence_Gbegin_69;
  T71 = CALL2(CHKREF(YPdefine_method),T73,T72);
  YsyntaxYsexpr_sequence_Gbegin = T71;
  lit_120 = YPPsym((P)"sexpr-make-begin");
  T75 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_make_begin_70 = YPmet(FUNCODEREF(fun_sexpr_make_begin_70),CHKREF(lit_120),T75,ENVNUL);
  T79 = BOUNDP(YsyntaxYsexpr_make_begin);
  if (T79 != YPfalse) {
    T78 = CHKREF(YsyntaxYsexpr_make_begin);
  } else {
    T78 = YPfalse;
  }
  T77 = fun_sexpr_make_begin_70;
  T76 = CALL2(CHKREF(YPdefine_method),T78,T77);
  YsyntaxYsexpr_make_begin = T76;
  lit_121 = YPPsym((P)"sexpr-application?");
  T80 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_applicationQ_71 = YPmet(FUNCODEREF(fun_sexpr_applicationQ_71),CHKREF(lit_121),T80,ENVNUL);
  T84 = BOUNDP(YsyntaxYsexpr_applicationQ);
  if (T84 != YPfalse) {
    T83 = CHKREF(YsyntaxYsexpr_applicationQ);
  } else {
    T83 = YPfalse;
  }
  T82 = fun_sexpr_applicationQ_71;
  T81 = CALL2(CHKREF(YPdefine_method),T83,T82);
  YsyntaxYsexpr_applicationQ = T81;
  lit_122 = YPPsym((P)"sexpr-operator");
  lit_123 = YPPsym((P)"app");
  T85 = YPsig(YPPlist(1,CHKREF(lit_123)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_operator_72 = YPmet(FUNCODEREF(fun_sexpr_operator_72),CHKREF(lit_122),T85,ENVNUL);
  T89 = BOUNDP(YsyntaxYsexpr_operator);
  if (T89 != YPfalse) {
    T88 = CHKREF(YsyntaxYsexpr_operator);
  } else {
    T88 = YPfalse;
  }
  T87 = fun_sexpr_operator_72;
  T86 = CALL2(CHKREF(YPdefine_method),T88,T87);
  YsyntaxYsexpr_operator = T86;
  lit_124 = YPPsym((P)"sexpr-operands");
  T90 = YPsig(YPPlist(1,CHKREF(lit_123)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_operands_73 = YPmet(FUNCODEREF(fun_sexpr_operands_73),CHKREF(lit_124),T90,ENVNUL);
  T94 = BOUNDP(YsyntaxYsexpr_operands);
  if (T94 != YPfalse) {
    T93 = CHKREF(YsyntaxYsexpr_operands);
  } else {
    T93 = YPfalse;
  }
  T92 = fun_sexpr_operands_73;
  T91 = CALL2(CHKREF(YPdefine_method),T93,T92);
  YsyntaxYsexpr_operands = T91;
  lit_125 = YPPsym((P)"sexpr-no-operands?");
  T95 = YPsig(YPPlist(1,CHKREF(lit_84)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_no_operandsQ_74 = YPmet(FUNCODEREF(fun_sexpr_no_operandsQ_74),CHKREF(lit_125),T95,ENVNUL);
  T99 = BOUNDP(YsyntaxYsexpr_no_operandsQ);
  if (T99 != YPfalse) {
    T98 = CHKREF(YsyntaxYsexpr_no_operandsQ);
  } else {
    T98 = YPfalse;
  }
  T97 = fun_sexpr_no_operandsQ_74;
  T96 = CALL2(CHKREF(YPdefine_method),T98,T97);
  YsyntaxYsexpr_no_operandsQ = T96;
  lit_126 = YPPsym((P)"sexpr-first-operand");
  T100 = YPsig(YPPlist(1,CHKREF(lit_84)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_first_operand_75 = YPmet(FUNCODEREF(fun_sexpr_first_operand_75),CHKREF(lit_126),T100,ENVNUL);
  T104 = BOUNDP(YsyntaxYsexpr_first_operand);
  if (T104 != YPfalse) {
    T103 = CHKREF(YsyntaxYsexpr_first_operand);
  } else {
    T103 = YPfalse;
  }
  T102 = fun_sexpr_first_operand_75;
  T101 = CALL2(CHKREF(YPdefine_method),T103,T102);
  YsyntaxYsexpr_first_operand = T101;
  lit_127 = YPPsym((P)"sexpr-rest-operands");
  T105 = YPsig(YPPlist(1,CHKREF(lit_84)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_rest_operands_76 = YPmet(FUNCODEREF(fun_sexpr_rest_operands_76),CHKREF(lit_127),T105,ENVNUL);
  T109 = BOUNDP(YsyntaxYsexpr_rest_operands);
  if (T109 != YPfalse) {
    T108 = CHKREF(YsyntaxYsexpr_rest_operands);
  } else {
    T108 = YPfalse;
  }
  T107 = fun_sexpr_rest_operands_76;
  T106 = CALL2(CHKREF(YPdefine_method),T108,T107);
  YsyntaxYsexpr_rest_operands = T106;
  lit_128 = YPPsym((P)"sexpr-make-application");
  lit_129 = YPPsym((P)"operands");
  lit_130 = YPPsym((P)"op");
  T110 = YPsig(YPPlist(2,CHKREF(lit_130),CHKREF(lit_129)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_sexpr_make_application_77 = YPmet(FUNCODEREF(fun_sexpr_make_application_77),CHKREF(lit_128),T110,ENVNUL);
  T114 = BOUNDP(YsyntaxYsexpr_make_application);
  if (T114 != YPfalse) {
    T113 = CHKREF(YsyntaxYsexpr_make_application);
  } else {
    T113 = YPfalse;
  }
  T112 = fun_sexpr_make_application_77;
  T111 = CALL2(CHKREF(YPdefine_method),T113,T112);
  YsyntaxYsexpr_make_application = T111;
  YsyntaxYTunique_name_counterT = YPint((P)0);
  lit_131 = YPPsym((P)"sexpr-new-unique-name-counter!");
  T115 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLintG));
  fun_sexpr_new_unique_name_counterX_78 = YPmet(FUNCODEREF(fun_sexpr_new_unique_name_counterX_78),CHKREF(lit_131),T115,ENVNUL);
  T119 = BOUNDP(YsyntaxYsexpr_new_unique_name_counterX);
  if (T119 != YPfalse) {
    T118 = CHKREF(YsyntaxYsexpr_new_unique_name_counterX);
  } else {
    T118 = YPfalse;
  }
  T117 = fun_sexpr_new_unique_name_counterX_78;
  T116 = CALL2(CHKREF(YPdefine_method),T118,T117);
  YsyntaxYsexpr_new_unique_name_counterX = T116;
  YsyntaxYLnameG = CHKREF(YLanyG);
  lit_132 = YPPsym((P)"sexpr-unique-name");
  lit_133 = YPPsym((P)"prefix");
  T120 = YPsig(YPPlist(1,CHKREF(lit_133)),YPPlist(1,CHKREF(YsyntaxYLnameG)),YPfalse,YPint((P)1),CHKREF(YLsymG));
  fun_sexpr_unique_name_79 = YPmet(FUNCODEREF(fun_sexpr_unique_name_79),CHKREF(lit_132),T120,ENVNUL);
  T124 = BOUNDP(YsyntaxYsexpr_unique_name);
  if (T124 != YPfalse) {
    T123 = CHKREF(YsyntaxYsexpr_unique_name);
  } else {
    T123 = YPfalse;
  }
  T122 = fun_sexpr_unique_name_79;
  T121 = CALL2(CHKREF(YPdefine_method),T123,T122);
  YsyntaxYsexpr_unique_name = T121;
  lit_134 = YPPsym((P)"let");
  YsyntaxYDsexpr_let_tag = CHKREF(lit_134);
  lit_135 = YPPsym((P)"sexpr-let?");
  T125 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_letQ_80 = YPmet(FUNCODEREF(fun_sexpr_letQ_80),CHKREF(lit_135),T125,ENVNUL);
  T129 = BOUNDP(YsyntaxYsexpr_letQ);
  if (T129 != YPfalse) {
    T128 = CHKREF(YsyntaxYsexpr_letQ);
  } else {
    T128 = YPfalse;
  }
  T127 = fun_sexpr_letQ_80;
  T126 = CALL2(CHKREF(YPdefine_method),T128,T127);
  YsyntaxYsexpr_letQ = T126;
  lit_136 = YPPsym((P)"sexpr-let-bound-variables");
  lit_137 = YPPsym((P)"let-exp");
  T130 = YPsig(YPPlist(1,CHKREF(lit_137)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_let_bound_variables_81 = YPmet(FUNCODEREF(fun_sexpr_let_bound_variables_81),CHKREF(lit_136),T130,ENVNUL);
  T134 = BOUNDP(YsyntaxYsexpr_let_bound_variables);
  if (T134 != YPfalse) {
    T133 = CHKREF(YsyntaxYsexpr_let_bound_variables);
  } else {
    T133 = YPfalse;
  }
  T132 = fun_sexpr_let_bound_variables_81;
  T131 = CALL2(CHKREF(YPdefine_method),T133,T132);
  YsyntaxYsexpr_let_bound_variables = T131;
  lit_138 = YPPsym((P)"sexpr-let-values");
  T135 = YPsig(YPPlist(1,CHKREF(lit_137)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_let_values_82 = YPmet(FUNCODEREF(fun_sexpr_let_values_82),CHKREF(lit_138),T135,ENVNUL);
  T139 = BOUNDP(YsyntaxYsexpr_let_values);
  if (T139 != YPfalse) {
    T138 = CHKREF(YsyntaxYsexpr_let_values);
  } else {
    T138 = YPfalse;
  }
  T137 = fun_sexpr_let_values_82;
  T136 = CALL2(CHKREF(YPdefine_method),T138,T137);
  YsyntaxYsexpr_let_values = T136;
  lit_139 = YPPsym((P)"sexpr-let-body");
  T140 = YPsig(YPPlist(1,CHKREF(lit_137)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_let_body_83 = YPmet(FUNCODEREF(fun_sexpr_let_body_83),CHKREF(lit_139),T140,ENVNUL);
  T144 = BOUNDP(YsyntaxYsexpr_let_body);
  if (T144 != YPfalse) {
    T143 = CHKREF(YsyntaxYsexpr_let_body);
  } else {
    T143 = YPfalse;
  }
  T142 = fun_sexpr_let_body_83;
  T141 = CALL2(CHKREF(YPdefine_method),T143,T142);
  YsyntaxYsexpr_let_body = T141;
  lit_140 = YPPsym((P)"sexpr-let-names+values");
  lit_141 = YPPsym((P)"vals");
  lit_142 = YPPsym((P)"names");
  lit_143 = YPPsym((P)"loop");
  lit_144 = YPPsym((P)"rvalues");
  lit_145 = YPPsym((P)"rnames");
  lit_146 = YPPsym((P)"inner");
  lit_147 = YPPsym((P)"tnames");
  lit_148 = YPPsym((P)"index");
  lit_149 = YPPsym((P)"rtvalues");
  lit_150 = YPPsym((P)"rtnames");
  lit_151 = YPPsym((P)"head");
  lit_152 = YPPsym((P)"tail");
  lit_153 = YPPsym((P)"<lst>");
  lit_154 = YPPsym((P)"...");
  lit_155 = YPsb((P)"tup");
  T147 = YPsig(YPPlist(4,CHKREF(lit_150),CHKREF(lit_149),CHKREF(lit_148),CHKREF(lit_147)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_inner_84 = YPmet(FUNCODEREF(fun_inner_84),CHKREF(lit_146),T147,ENVNUL);
  T146 = YPsig(YPPlist(4,CHKREF(lit_145),CHKREF(lit_144),CHKREF(lit_142),CHKREF(lit_141)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_loop_85 = YPmet(FUNCODEREF(fun_loop_85),CHKREF(lit_143),T146,ENVNUL);
  T145 = YPsig(YPPlist(2,CHKREF(lit_142),CHKREF(lit_141)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLtupG));
  fun_sexpr_let_namesAvalues_86 = YPmet(FUNCODEREF(fun_sexpr_let_namesAvalues_86),CHKREF(lit_140),T145,ENVNUL);
  T151 = BOUNDP(YsyntaxYsexpr_let_namesAvalues);
  if (T151 != YPfalse) {
    T150 = CHKREF(YsyntaxYsexpr_let_namesAvalues);
  } else {
    T150 = YPfalse;
  }
  T149 = fun_sexpr_let_namesAvalues_86;
  T148 = CALL2(CHKREF(YPdefine_method),T150,T149);
  YsyntaxYsexpr_let_namesAvalues = T148;
  lit_156 = YPPsym((P)"sexpr-let->combination");
  lit_157 = YPPsym((P)"col");
  lit_158 = YPPsym((P)"values");
  T153 = YPsig(YPPlist(2,CHKREF(lit_142),CHKREF(lit_158)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_col_87 = YPmet(FUNCODEREF(fun_col_87),CHKREF(lit_157),T153,ENVNUL);
  T152 = YPsig(YPPlist(1,CHKREF(lit_137)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_let_Gcombination_88 = YPmet(FUNCODEREF(fun_sexpr_let_Gcombination_88),CHKREF(lit_156),T152,ENVNUL);
  T157 = BOUNDP(YsyntaxYsexpr_let_Gcombination);
  if (T157 != YPfalse) {
    T156 = CHKREF(YsyntaxYsexpr_let_Gcombination);
  } else {
    T156 = YPfalse;
  }
  T155 = fun_sexpr_let_Gcombination_88;
  T154 = CALL2(CHKREF(YPdefine_method),T156,T155);
  YsyntaxYsexpr_let_Gcombination = T154;
  lit_159 = YPPsym((P)"loc");
  YsyntaxYDsexpr_locals_tag = CHKREF(lit_159);
  lit_160 = YPPsym((P)"sexpr-loc?");
  T158 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_locQ_89 = YPmet(FUNCODEREF(fun_sexpr_locQ_89),CHKREF(lit_160),T158,ENVNUL);
  T162 = BOUNDP(YsyntaxYsexpr_locQ);
  if (T162 != YPfalse) {
    T161 = CHKREF(YsyntaxYsexpr_locQ);
  } else {
    T161 = YPfalse;
  }
  T160 = fun_sexpr_locQ_89;
  T159 = CALL2(CHKREF(YPdefine_method),T161,T160);
  YsyntaxYsexpr_locQ = T159;
  lit_161 = YPPsym((P)"sexpr-loc-bound-names");
  lit_162 = YPPsym((P)"loc-exp");
  T163 = YPsig(YPPlist(1,CHKREF(lit_162)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_loc_bound_names_90 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_names_90),CHKREF(lit_161),T163,ENVNUL);
  T167 = BOUNDP(YsyntaxYsexpr_loc_bound_names);
  if (T167 != YPfalse) {
    T166 = CHKREF(YsyntaxYsexpr_loc_bound_names);
  } else {
    T166 = YPfalse;
  }
  T165 = fun_sexpr_loc_bound_names_90;
  T164 = CALL2(CHKREF(YPdefine_method),T166,T165);
  YsyntaxYsexpr_loc_bound_names = T164;
  lit_163 = YPPsym((P)"sexpr-loc-bound-signatures");
  T168 = YPsig(YPPlist(1,CHKREF(lit_162)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_loc_bound_signatures_91 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_signatures_91),CHKREF(lit_163),T168,ENVNUL);
  T172 = BOUNDP(YsyntaxYsexpr_loc_bound_signatures);
  if (T172 != YPfalse) {
    T171 = CHKREF(YsyntaxYsexpr_loc_bound_signatures);
  } else {
    T171 = YPfalse;
  }
  T170 = fun_sexpr_loc_bound_signatures_91;
  T169 = CALL2(CHKREF(YPdefine_method),T171,T170);
  YsyntaxYsexpr_loc_bound_signatures = T169;
  lit_164 = YPPsym((P)"sexpr-loc-bound-bodies");
  T173 = YPsig(YPPlist(1,CHKREF(lit_162)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_loc_bound_bodies_92 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_bodies_92),CHKREF(lit_164),T173,ENVNUL);
  T177 = BOUNDP(YsyntaxYsexpr_loc_bound_bodies);
  if (T177 != YPfalse) {
    T176 = CHKREF(YsyntaxYsexpr_loc_bound_bodies);
  } else {
    T176 = YPfalse;
  }
  T175 = fun_sexpr_loc_bound_bodies_92;
  T174 = CALL2(CHKREF(YPdefine_method),T176,T175);
  YsyntaxYsexpr_loc_bound_bodies = T174;
  lit_165 = YPPsym((P)"sexpr-loc-raw-body");
  T178 = YPsig(YPPlist(1,CHKREF(lit_162)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_loc_raw_body_93 = YPmet(FUNCODEREF(fun_sexpr_loc_raw_body_93),CHKREF(lit_165),T178,ENVNUL);
  T182 = BOUNDP(YsyntaxYsexpr_loc_raw_body);
  if (T182 != YPfalse) {
    T181 = CHKREF(YsyntaxYsexpr_loc_raw_body);
  } else {
    T181 = YPfalse;
  }
  T180 = fun_sexpr_loc_raw_body_93;
  T179 = CALL2(CHKREF(YPdefine_method),T181,T180);
  YsyntaxYsexpr_loc_raw_body = T179;
  lit_166 = YPPsym((P)"sexpr-loc-body");
  T183 = YPsig(YPPlist(1,CHKREF(lit_162)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_loc_body_94 = YPmet(FUNCODEREF(fun_sexpr_loc_body_94),CHKREF(lit_166),T183,ENVNUL);
  T187 = BOUNDP(YsyntaxYsexpr_loc_body);
  if (T187 != YPfalse) {
    T186 = CHKREF(YsyntaxYsexpr_loc_body);
  } else {
    T186 = YPfalse;
  }
  T185 = fun_sexpr_loc_body_94;
  T184 = CALL2(CHKREF(YPdefine_method),T186,T185);
  YsyntaxYsexpr_loc_body = T184;
  lit_167 = YPPsym((P)"rep");
  YsyntaxYDsexpr_iterate_tag = CHKREF(lit_167);
  lit_168 = YPPsym((P)"sexpr-iterate?");
  T188 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_iterateQ_95 = YPmet(FUNCODEREF(fun_sexpr_iterateQ_95),CHKREF(lit_168),T188,ENVNUL);
  T192 = BOUNDP(YsyntaxYsexpr_iterateQ);
  if (T192 != YPfalse) {
    T191 = CHKREF(YsyntaxYsexpr_iterateQ);
  } else {
    T191 = YPfalse;
  }
  T190 = fun_sexpr_iterateQ_95;
  T189 = CALL2(CHKREF(YPdefine_method),T191,T190);
  YsyntaxYsexpr_iterateQ = T189;
  lit_169 = YPPsym((P)"sexpr-iterate-name");
  lit_170 = YPPsym((P)"rep-exp");
  T193 = YPsig(YPPlist(1,CHKREF(lit_170)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLsymG));
  fun_sexpr_iterate_name_96 = YPmet(FUNCODEREF(fun_sexpr_iterate_name_96),CHKREF(lit_169),T193,ENVNUL);
  T197 = BOUNDP(YsyntaxYsexpr_iterate_name);
  if (T197 != YPfalse) {
    T196 = CHKREF(YsyntaxYsexpr_iterate_name);
  } else {
    T196 = YPfalse;
  }
  T195 = fun_sexpr_iterate_name_96;
  T194 = CALL2(CHKREF(YPdefine_method),T196,T195);
  YsyntaxYsexpr_iterate_name = T194;
  YsyntaxYDsexpr_values_tag = CHKREF(lit_39);
  lit_171 = YPPsym((P)"sexpr-iterate-signature");
  T198 = YPsig(YPPlist(1,CHKREF(lit_170)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_iterate_signature_97 = YPmet(FUNCODEREF(fun_sexpr_iterate_signature_97),CHKREF(lit_171),T198,ENVNUL);
  T202 = BOUNDP(YsyntaxYsexpr_iterate_signature);
  if (T202 != YPfalse) {
    T201 = CHKREF(YsyntaxYsexpr_iterate_signature);
  } else {
    T201 = YPfalse;
  }
  T200 = fun_sexpr_iterate_signature_97;
  T199 = CALL2(CHKREF(YPdefine_method),T201,T200);
  YsyntaxYsexpr_iterate_signature = T199;
  lit_172 = YPPsym((P)"sexpr-iterate-inits");
  T203 = YPsig(YPPlist(1,CHKREF(lit_170)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_iterate_inits_98 = YPmet(FUNCODEREF(fun_sexpr_iterate_inits_98),CHKREF(lit_172),T203,ENVNUL);
  T207 = BOUNDP(YsyntaxYsexpr_iterate_inits);
  if (T207 != YPfalse) {
    T206 = CHKREF(YsyntaxYsexpr_iterate_inits);
  } else {
    T206 = YPfalse;
  }
  T205 = fun_sexpr_iterate_inits_98;
  T204 = CALL2(CHKREF(YPdefine_method),T206,T205);
  YsyntaxYsexpr_iterate_inits = T204;
  lit_173 = YPPsym((P)"sexpr-iterate-body");
  T208 = YPsig(YPPlist(1,CHKREF(lit_170)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_iterate_body_99 = YPmet(FUNCODEREF(fun_sexpr_iterate_body_99),CHKREF(lit_173),T208,ENVNUL);
  T212 = BOUNDP(YsyntaxYsexpr_iterate_body);
  if (T212 != YPfalse) {
    T211 = CHKREF(YsyntaxYsexpr_iterate_body);
  } else {
    T211 = YPfalse;
  }
  T210 = fun_sexpr_iterate_body_99;
  T209 = CALL2(CHKREF(YPdefine_method),T211,T210);
  YsyntaxYsexpr_iterate_body = T209;
  lit_174 = YPPsym((P)"sexpr-iterate->loc");
  T213 = YPsig(YPPlist(1,CHKREF(lit_170)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_iterate_Gloc_100 = YPmet(FUNCODEREF(fun_sexpr_iterate_Gloc_100),CHKREF(lit_174),T213,ENVNUL);
  T217 = BOUNDP(YsyntaxYsexpr_iterate_Gloc);
  if (T217 != YPfalse) {
    T216 = CHKREF(YsyntaxYsexpr_iterate_Gloc);
  } else {
    T216 = YPfalse;
  }
  T215 = fun_sexpr_iterate_Gloc_100;
  T214 = CALL2(CHKREF(YPdefine_method),T216,T215);
  YsyntaxYsexpr_iterate_Gloc = T214;
  YsyntaxYDsexpr_isa_tag = CHKREF(lit_101);
  lit_175 = YPPsym((P)"sexpr-isa?");
  T218 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_isaQ_101 = YPmet(FUNCODEREF(fun_sexpr_isaQ_101),CHKREF(lit_175),T218,ENVNUL);
  T222 = BOUNDP(YsyntaxYsexpr_isaQ);
  if (T222 != YPfalse) {
    T221 = CHKREF(YsyntaxYsexpr_isaQ);
  } else {
    T221 = YPfalse;
  }
  T220 = fun_sexpr_isaQ_101;
  T219 = CALL2(CHKREF(YPdefine_method),T221,T220);
  YsyntaxYsexpr_isaQ = T219;
  lit_176 = YPPsym((P)"sexpr-isa-parents");
  T223 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_isa_parents_102 = YPmet(FUNCODEREF(fun_sexpr_isa_parents_102),CHKREF(lit_176),T223,ENVNUL);
  T227 = BOUNDP(YsyntaxYsexpr_isa_parents);
  if (T227 != YPfalse) {
    T226 = CHKREF(YsyntaxYsexpr_isa_parents);
  } else {
    T226 = YPfalse;
  }
  T225 = fun_sexpr_isa_parents_102;
  T224 = CALL2(CHKREF(YPdefine_method),T226,T225);
  YsyntaxYsexpr_isa_parents = T224;
  lit_177 = YPPsym((P)"sexpr-isa-slot-inits");
  T228 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_isa_slot_inits_103 = YPmet(FUNCODEREF(fun_sexpr_isa_slot_inits_103),CHKREF(lit_177),T228,ENVNUL);
  T232 = BOUNDP(YsyntaxYsexpr_isa_slot_inits);
  if (T232 != YPfalse) {
    T231 = CHKREF(YsyntaxYsexpr_isa_slot_inits);
  } else {
    T231 = YPfalse;
  }
  T230 = fun_sexpr_isa_slot_inits_103;
  T229 = CALL2(CHKREF(YPdefine_method),T231,T230);
  YsyntaxYsexpr_isa_slot_inits = T229;
  lit_178 = YPPsym((P)"sexpr-isa-init-slots");
  T233 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_isa_init_slots_104 = YPmet(FUNCODEREF(fun_sexpr_isa_init_slots_104),CHKREF(lit_178),T233,ENVNUL);
  T237 = BOUNDP(YsyntaxYsexpr_isa_init_slots);
  if (T237 != YPfalse) {
    T236 = CHKREF(YsyntaxYsexpr_isa_init_slots);
  } else {
    T236 = YPfalse;
  }
  T235 = fun_sexpr_isa_init_slots_104;
  T234 = CALL2(CHKREF(YPdefine_method),T236,T235);
  YsyntaxYsexpr_isa_init_slots = T234;
  lit_179 = YPPsym((P)"sexpr-isa-init-values");
  T238 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_isa_init_values_105 = YPmet(FUNCODEREF(fun_sexpr_isa_init_values_105),CHKREF(lit_179),T238,ENVNUL);
  T242 = BOUNDP(YsyntaxYsexpr_isa_init_values);
  if (T242 != YPfalse) {
    T241 = CHKREF(YsyntaxYsexpr_isa_init_values);
  } else {
    T241 = YPfalse;
  }
  T240 = fun_sexpr_isa_init_values_105;
  T239 = CALL2(CHKREF(YPdefine_method),T241,T240);
  YsyntaxYsexpr_isa_init_values = T239;
  lit_180 = YPPsym((P)"dc");
  YsyntaxYDsexpr_define_class_tag = CHKREF(lit_180);
  lit_181 = YPPsym((P)"sexpr-define-class?");
  T243 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_define_classQ_106 = YPmet(FUNCODEREF(fun_sexpr_define_classQ_106),CHKREF(lit_181),T243,ENVNUL);
  T247 = BOUNDP(YsyntaxYsexpr_define_classQ);
  if (T247 != YPfalse) {
    T246 = CHKREF(YsyntaxYsexpr_define_classQ);
  } else {
    T246 = YPfalse;
  }
  T245 = fun_sexpr_define_classQ_106;
  T244 = CALL2(CHKREF(YPdefine_method),T246,T245);
  YsyntaxYsexpr_define_classQ = T244;
  lit_182 = YPPsym((P)"sexpr-define-class-parents");
  T248 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_define_class_parents_107 = YPmet(FUNCODEREF(fun_sexpr_define_class_parents_107),CHKREF(lit_182),T248,ENVNUL);
  T252 = BOUNDP(YsyntaxYsexpr_define_class_parents);
  if (T252 != YPfalse) {
    T251 = CHKREF(YsyntaxYsexpr_define_class_parents);
  } else {
    T251 = YPfalse;
  }
  T250 = fun_sexpr_define_class_parents_107;
  T249 = CALL2(CHKREF(YPdefine_method),T251,T250);
  YsyntaxYsexpr_define_class_parents = T249;
  lit_183 = YPPsym((P)"slot");
  YsyntaxYDsexpr_slot_tag = CHKREF(lit_183);
  lit_184 = YPPsym((P)"sexpr-slot?");
  T253 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_slotQ_108 = YPmet(FUNCODEREF(fun_sexpr_slotQ_108),CHKREF(lit_184),T253,ENVNUL);
  T257 = BOUNDP(YsyntaxYsexpr_slotQ);
  if (T257 != YPfalse) {
    T256 = CHKREF(YsyntaxYsexpr_slotQ);
  } else {
    T256 = YPfalse;
  }
  T255 = fun_sexpr_slotQ_108;
  T254 = CALL2(CHKREF(YPdefine_method),T256,T255);
  YsyntaxYsexpr_slotQ = T254;
  lit_185 = YPPsym((P)"sexpr-slot-object");
  T258 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_slot_object_109 = YPmet(FUNCODEREF(fun_sexpr_slot_object_109),CHKREF(lit_185),T258,ENVNUL);
  T262 = BOUNDP(YsyntaxYsexpr_slot_object);
  if (T262 != YPfalse) {
    T261 = CHKREF(YsyntaxYsexpr_slot_object);
  } else {
    T261 = YPfalse;
  }
  T260 = fun_sexpr_slot_object_109;
  T259 = CALL2(CHKREF(YPdefine_method),T261,T260);
  YsyntaxYsexpr_slot_object = T259;
  lit_186 = YPPsym((P)"sexpr-slot-variable");
  T263 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_slot_variable_110 = YPmet(FUNCODEREF(fun_sexpr_slot_variable_110),CHKREF(lit_186),T263,ENVNUL);
  T267 = BOUNDP(YsyntaxYsexpr_slot_variable);
  if (T267 != YPfalse) {
    T266 = CHKREF(YsyntaxYsexpr_slot_variable);
  } else {
    T266 = YPfalse;
  }
  T265 = fun_sexpr_slot_variable_110;
  T264 = CALL2(CHKREF(YPdefine_method),T266,T265);
  YsyntaxYsexpr_slot_variable = T264;
  lit_187 = YPPsym((P)"sexpr-slot-init");
  lit_188 = YPPsym((P)"nul");
  T270 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  T269 = fun_sexpr_slot_init_111 = YPmet(FUNCODEREF(fun_sexpr_slot_init_111),CHKREF(lit_187),T270,ENVNUL);
  T275 = BOUNDP(YsyntaxYsexpr_slot_init);
  if (T275 != YPfalse) {
    T274 = CHKREF(YsyntaxYsexpr_slot_init);
  } else {
    T274 = YPfalse;
  }
  T273 = fun_sexpr_slot_init_111;
  T272 = CALL2(CHKREF(YPdefine_method),T274,T273);
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
  T0 = YPsig(YPPlist(2,CHKREF(lit_59),CHKREF(lit_81)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_sexpr_make_getter_112 = YPmet(FUNCODEREF(fun_sexpr_make_getter_112),CHKREF(lit_189),T0,ENVNUL);
  T4 = BOUNDP(YsyntaxYsexpr_make_getter);
  if (T4 != YPfalse) {
    T3 = CHKREF(YsyntaxYsexpr_make_getter);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_sexpr_make_getter_112;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YsyntaxYsexpr_make_getter = T1;
  lit_192 = YPPsym((P)"sexpr-make-setter");
  lit_193 = YPPsym((P)"slot-type");
  lit_194 = YPPsym((P)"_z");
  lit_195 = YPPsym((P)"slot-value-setter");
  T5 = YPsig(YPPlist(3,CHKREF(lit_59),CHKREF(lit_81),CHKREF(lit_193)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLlstG));
  fun_sexpr_make_setter_113 = YPmet(FUNCODEREF(fun_sexpr_make_setter_113),CHKREF(lit_192),T5,ENVNUL);
  T9 = BOUNDP(YsyntaxYsexpr_make_setter);
  if (T9 != YPfalse) {
    T8 = CHKREF(YsyntaxYsexpr_make_setter);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_sexpr_make_setter_113;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  YsyntaxYsexpr_make_setter = T6;
  lit_196 = YPPsym((P)"sexpr-make-setter-name");
  lit_197 = YPsb((P)"-setter");
  T10 = YPsig(YPPlist(1,CHKREF(lit_59)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLsymG));
  fun_sexpr_make_setter_name_114 = YPmet(FUNCODEREF(fun_sexpr_make_setter_name_114),CHKREF(lit_196),T10,ENVNUL);
  T14 = BOUNDP(YsyntaxYsexpr_make_setter_name);
  if (T14 != YPfalse) {
    T13 = CHKREF(YsyntaxYsexpr_make_setter_name);
  } else {
    T13 = YPfalse;
  }
  T12 = fun_sexpr_make_setter_name_114;
  T11 = CALL2(CHKREF(YPdefine_method),T13,T12);
  YsyntaxYsexpr_make_setter_name = T11;
  lit_198 = YPPsym((P)"sexpr-macro?");
  T15 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_macroQ_115 = YPmet(FUNCODEREF(fun_sexpr_macroQ_115),CHKREF(lit_198),T15,ENVNUL);
  T19 = BOUNDP(YsyntaxYsexpr_macroQ);
  if (T19 != YPfalse) {
    T18 = CHKREF(YsyntaxYsexpr_macroQ);
  } else {
    T18 = YPfalse;
  }
  T17 = fun_sexpr_macroQ_115;
  T16 = CALL2(CHKREF(YPdefine_method),T18,T17);
  YsyntaxYsexpr_macroQ = T16;
  lit_199 = YPPsym((P)"macro-expand");
  YsyntaxYDsexpr_macro_expand_tag = CHKREF(lit_199);
  lit_200 = YPPsym((P)"sexpr-macro-expand?");
  T20 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_macro_expandQ_116 = YPmet(FUNCODEREF(fun_sexpr_macro_expandQ_116),CHKREF(lit_200),T20,ENVNUL);
  T24 = BOUNDP(YsyntaxYsexpr_macro_expandQ);
  if (T24 != YPfalse) {
    T23 = CHKREF(YsyntaxYsexpr_macro_expandQ);
  } else {
    T23 = YPfalse;
  }
  T22 = fun_sexpr_macro_expandQ_116;
  T21 = CALL2(CHKREF(YPdefine_method),T23,T22);
  YsyntaxYsexpr_macro_expandQ = T21;
  lit_201 = YPPsym((P)"mif");
  YsyntaxYDsexpr_syntax_if_tag = CHKREF(lit_201);
  lit_202 = YPPsym((P)"sexpr-make-syntax-if");
  lit_203 = YPPsym((P)"pat");
  T25 = YPsig(YPPlist(4,CHKREF(lit_203),CHKREF(lit_1),CHKREF(lit_67),CHKREF(lit_66)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YLlstG));
  fun_sexpr_make_syntax_if_117 = YPmet(FUNCODEREF(fun_sexpr_make_syntax_if_117),CHKREF(lit_202),T25,ENVNUL);
  T29 = BOUNDP(YsyntaxYsexpr_make_syntax_if);
  if (T29 != YPfalse) {
    T28 = CHKREF(YsyntaxYsexpr_make_syntax_if);
  } else {
    T28 = YPfalse;
  }
  T27 = fun_sexpr_make_syntax_if_117;
  T26 = CALL2(CHKREF(YPdefine_method),T28,T27);
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
  T30 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  YsyntaxYsexpr_expand_backquote = YPmet(FUNCODEREF(YsyntaxYsexpr_expand_backquote),CHKREF(lit_211),T30,ENVNUL);
  T31 = YsyntaxYsexpr_expand_backquote;
  YsyntaxYsexpr_expand_backquote = T31;
  lit_214 = YPPsym((P)"sexpr-build-backquote-expander");
  T32 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_build_backquote_expander_119 = YPmet(FUNCODEREF(fun_sexpr_build_backquote_expander_119),CHKREF(lit_214),T32,ENVNUL);
  T36 = BOUNDP(YsyntaxYsexpr_build_backquote_expander);
  if (T36 != YPfalse) {
    T35 = CHKREF(YsyntaxYsexpr_build_backquote_expander);
  } else {
    T35 = YPfalse;
  }
  T34 = fun_sexpr_build_backquote_expander_119;
  T33 = CALL2(CHKREF(YPdefine_method),T35,T34);
  YsyntaxYsexpr_build_backquote_expander = T33;
  lit_215 = YPPsym((P)"sexpr-unquote?");
  lit_216 = YPPsym((P)"unquote");
  T37 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_unquoteQ_120 = YPmet(FUNCODEREF(fun_sexpr_unquoteQ_120),CHKREF(lit_215),T37,ENVNUL);
  T41 = BOUNDP(YsyntaxYsexpr_unquoteQ);
  if (T41 != YPfalse) {
    T40 = CHKREF(YsyntaxYsexpr_unquoteQ);
  } else {
    T40 = YPfalse;
  }
  T39 = fun_sexpr_unquoteQ_120;
  T38 = CALL2(CHKREF(YPdefine_method),T40,T39);
  YsyntaxYsexpr_unquoteQ = T38;
  lit_217 = YPPsym((P)"sexpr-unquote-splicing?");
  lit_218 = YPPsym((P)"unquote-splicing");
  T42 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_unquote_splicingQ_121 = YPmet(FUNCODEREF(fun_sexpr_unquote_splicingQ_121),CHKREF(lit_217),T42,ENVNUL);
  T46 = BOUNDP(YsyntaxYsexpr_unquote_splicingQ);
  if (T46 != YPfalse) {
    T45 = CHKREF(YsyntaxYsexpr_unquote_splicingQ);
  } else {
    T45 = YPfalse;
  }
  T44 = fun_sexpr_unquote_splicingQ_121;
  T43 = CALL2(CHKREF(YPdefine_method),T45,T44);
  YsyntaxYsexpr_unquote_splicingQ = T43;
  lit_219 = YPPsym((P)"sexpr-backquote?");
  T47 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_backquoteQ_122 = YPmet(FUNCODEREF(fun_sexpr_backquoteQ_122),CHKREF(lit_219),T47,ENVNUL);
  T51 = BOUNDP(YsyntaxYsexpr_backquoteQ);
  if (T51 != YPfalse) {
    T50 = CHKREF(YsyntaxYsexpr_backquoteQ);
  } else {
    T50 = YPfalse;
  }
  T49 = fun_sexpr_backquoteQ_122;
  T48 = CALL2(CHKREF(YPdefine_method),T50,T49);
  YsyntaxYsexpr_backquoteQ = T48;
  lit_220 = YPPsym((P)"sexpr-atom?");
  T52 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_atomQ_123 = YPmet(FUNCODEREF(fun_sexpr_atomQ_123),CHKREF(lit_220),T52,ENVNUL);
  T56 = BOUNDP(YsyntaxYsexpr_atomQ);
  if (T56 != YPfalse) {
    T55 = CHKREF(YsyntaxYsexpr_atomQ);
  } else {
    T55 = YPfalse;
  }
  T54 = fun_sexpr_atomQ_123;
  T53 = CALL2(CHKREF(YPdefine_method),T55,T54);
  YsyntaxYsexpr_atomQ = T53;
  lit_221 = YPPsym((P)"nreconc");
  lit_222 = YPPsym((P)"y");
  T57 = YPsig(YPPlist(2,CHKREF(lit_212),CHKREF(lit_222)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_nreconc_124 = YPmet(FUNCODEREF(fun_nreconc_124),CHKREF(lit_221),T57,ENVNUL);
  T61 = BOUNDP(YsyntaxYnreconc);
  if (T61 != YPfalse) {
    T60 = CHKREF(YsyntaxYnreconc);
  } else {
    T60 = YPfalse;
  }
  T59 = fun_nreconc_124;
  T58 = CALL2(CHKREF(YPdefine_method),T60,T59);
  YsyntaxYnreconc = T58;
  lit_223 = YPPsym((P)"bq-process");
  lit_224 = YPPsym((P)"q");
  lit_225 = YPPsym((P)"p");
  lit_226 = YPsb((P)"Dotted ,@%=");
  lit_227 = YPsb((P)"Malformed ,%=");
  lit_228 = YPsb((P)"UNQUOTE-SPLICING %= AFTER BQ");
  T64 = YPsig(YPPlist(2,CHKREF(lit_225),CHKREF(lit_224)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_125 = YPmet(FUNCODEREF(fun_loop_125),CHKREF(lit_143),T64,ENVNUL);
  T63 = YPsig(YPPlist(1,CHKREF(lit_80)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_126 = YPmet(FUNCODEREF(fun_126),YPfalse,T63,ENVNUL);
  T62 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_bq_process_127 = YPmet(FUNCODEREF(fun_bq_process_127),CHKREF(lit_223),T62,ENVNUL);
  T68 = BOUNDP(YsyntaxYbq_process);
  if (T68 != YPfalse) {
    T67 = CHKREF(YsyntaxYbq_process);
  } else {
    T67 = YPfalse;
  }
  T66 = fun_bq_process_127;
  T65 = CALL2(CHKREF(YPdefine_method),T67,T66);
  YsyntaxYbq_process = T65;
  lit_229 = YPPsym((P)"bracket");
  T69 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_bracket_128 = YPmet(FUNCODEREF(fun_bracket_128),CHKREF(lit_229),T69,ENVNUL);
  T73 = BOUNDP(YsyntaxYbracket);
  if (T73 != YPfalse) {
    T72 = CHKREF(YsyntaxYbracket);
  } else {
    T72 = YPfalse;
  }
  T71 = fun_bracket_128;
  T70 = CALL2(CHKREF(YPdefine_method),T72,T71);
  YsyntaxYbracket = T70;
  lit_230 = YPPsym((P)"map-tree");
  lit_231 = YPPsym((P)"fn");
  T74 = YPsig(YPPlist(2,CHKREF(lit_231),CHKREF(lit_212)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_map_tree_129 = YPmet(FUNCODEREF(fun_map_tree_129),CHKREF(lit_230),T74,ENVNUL);
  T78 = BOUNDP(YsyntaxYmap_tree);
  if (T78 != YPfalse) {
    T77 = CHKREF(YsyntaxYmap_tree);
  } else {
    T77 = YPfalse;
  }
  T76 = fun_map_tree_129;
  T75 = CALL2(CHKREF(YPdefine_method),T77,T76);
  YsyntaxYmap_tree = T75;
  lit_232 = YPPsym((P)"bq-remove-tokens");
  lit_233 = YPPsym((P)"pair");
  lit_234 = YPPsym((P)"list*");
  lit_235 = YPPsym((P)"cat!");
  lit_236 = YPPsym((P)"cat");
  T79 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_bq_remove_tokens_130 = YPmet(FUNCODEREF(fun_bq_remove_tokens_130),CHKREF(lit_232),T79,ENVNUL);
  T83 = BOUNDP(YsyntaxYbq_remove_tokens);
  if (T83 != YPfalse) {
    T82 = CHKREF(YsyntaxYbq_remove_tokens);
  } else {
    T82 = YPfalse;
  }
  T81 = fun_bq_remove_tokens_130;
  T80 = CALL2(CHKREF(YPdefine_method),T82,T81);
  YsyntaxYbq_remove_tokens = T80;
  lit_237 = YPPsym((P)"sexpr-syntax-if?");
  T84 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_syntax_ifQ_131 = YPmet(FUNCODEREF(fun_sexpr_syntax_ifQ_131),CHKREF(lit_237),T84,ENVNUL);
  T88 = BOUNDP(YsyntaxYsexpr_syntax_ifQ);
  if (T88 != YPfalse) {
    T87 = CHKREF(YsyntaxYsexpr_syntax_ifQ);
  } else {
    T87 = YPfalse;
  }
  T86 = fun_sexpr_syntax_ifQ_131;
  T85 = CALL2(CHKREF(YPdefine_method),T87,T86);
  YsyntaxYsexpr_syntax_ifQ = T85;
  lit_238 = YPPsym((P)"sexpr-syntax-if-value");
  T89 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_syntax_if_value_132 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_value_132),CHKREF(lit_238),T89,ENVNUL);
  T93 = BOUNDP(YsyntaxYsexpr_syntax_if_value);
  if (T93 != YPfalse) {
    T92 = CHKREF(YsyntaxYsexpr_syntax_if_value);
  } else {
    T92 = YPfalse;
  }
  T91 = fun_sexpr_syntax_if_value_132;
  T90 = CALL2(CHKREF(YPdefine_method),T92,T91);
  YsyntaxYsexpr_syntax_if_value = T90;
  lit_239 = YPPsym((P)"sexpr-syntax-if-pattern");
  T94 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_syntax_if_pattern_133 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_pattern_133),CHKREF(lit_239),T94,ENVNUL);
  T98 = BOUNDP(YsyntaxYsexpr_syntax_if_pattern);
  if (T98 != YPfalse) {
    T97 = CHKREF(YsyntaxYsexpr_syntax_if_pattern);
  } else {
    T97 = YPfalse;
  }
  T96 = fun_sexpr_syntax_if_pattern_133;
  T95 = CALL2(CHKREF(YPdefine_method),T97,T96);
  YsyntaxYsexpr_syntax_if_pattern = T95;
  lit_240 = YPPsym((P)"sexpr-syntax-if-then");
  T99 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_syntax_if_then_134 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_then_134),CHKREF(lit_240),T99,ENVNUL);
  T103 = BOUNDP(YsyntaxYsexpr_syntax_if_then);
  if (T103 != YPfalse) {
    T102 = CHKREF(YsyntaxYsexpr_syntax_if_then);
  } else {
    T102 = YPfalse;
  }
  T101 = fun_sexpr_syntax_if_then_134;
  T100 = CALL2(CHKREF(YPdefine_method),T102,T101);
  YsyntaxYsexpr_syntax_if_then = T100;
  lit_241 = YPPsym((P)"sexpr-syntax-if-else");
  T104 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_syntax_if_else_135 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_else_135),CHKREF(lit_241),T104,ENVNUL);
  T108 = BOUNDP(YsyntaxYsexpr_syntax_if_else);
  if (T108 != YPfalse) {
    T107 = CHKREF(YsyntaxYsexpr_syntax_if_else);
  } else {
    T107 = YPfalse;
  }
  T106 = fun_sexpr_syntax_if_else_135;
  T105 = CALL2(CHKREF(YPdefine_method),T107,T106);
  YsyntaxYsexpr_syntax_if_else = T105;
  lit_242 = YPPsym((P)"sexpr-pattern-variable?");
  T109 = YPsig(YPPlist(1,CHKREF(lit_203)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_pattern_variableQ_136 = YPmet(FUNCODEREF(fun_sexpr_pattern_variableQ_136),CHKREF(lit_242),T109,ENVNUL);
  T113 = BOUNDP(YsyntaxYsexpr_pattern_variableQ);
  if (T113 != YPfalse) {
    T112 = CHKREF(YsyntaxYsexpr_pattern_variableQ);
  } else {
    T112 = YPfalse;
  }
  T111 = fun_sexpr_pattern_variableQ_136;
  T110 = CALL2(CHKREF(YPdefine_method),T112,T111);
  YsyntaxYsexpr_pattern_variableQ = T110;
  lit_243 = YPPsym((P)"sexpr-pattern-variable-name");
  T114 = YPsig(YPPlist(1,CHKREF(lit_203)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_pattern_variable_name_137 = YPmet(FUNCODEREF(fun_sexpr_pattern_variable_name_137),CHKREF(lit_243),T114,ENVNUL);
  T118 = BOUNDP(YsyntaxYsexpr_pattern_variable_name);
  if (T118 != YPfalse) {
    T117 = CHKREF(YsyntaxYsexpr_pattern_variable_name);
  } else {
    T117 = YPfalse;
  }
  T116 = fun_sexpr_pattern_variable_name_137;
  T115 = CALL2(CHKREF(YPdefine_method),T117,T116);
  YsyntaxYsexpr_pattern_variable_name = T115;
  lit_244 = YPPsym((P)"sexpr-bind-pattern-variables");
  T120 = YPsig(YPPlist(1,CHKREF(lit_203)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_col_138 = YPmet(FUNCODEREF(fun_col_138),CHKREF(lit_157),T120,ENVNUL);
  T119 = YPsig(YPPlist(1,CHKREF(lit_203)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_bind_pattern_variables_139 = YPmet(FUNCODEREF(fun_sexpr_bind_pattern_variables_139),CHKREF(lit_244),T119,ENVNUL);
  T124 = BOUNDP(YsyntaxYsexpr_bind_pattern_variables);
  if (T124 != YPfalse) {
    T123 = CHKREF(YsyntaxYsexpr_bind_pattern_variables);
  } else {
    T123 = YPfalse;
  }
  T122 = fun_sexpr_bind_pattern_variables_139;
  T121 = CALL2(CHKREF(YPdefine_method),T123,T122);
  YsyntaxYsexpr_bind_pattern_variables = T121;
  lit_245 = YPPsym((P)"sexpr-make-macro-function");
  T125 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_make_macro_function_140 = YPmet(FUNCODEREF(fun_sexpr_make_macro_function_140),CHKREF(lit_245),T125,ENVNUL);
  T129 = BOUNDP(YsyntaxYsexpr_make_macro_function);
  if (T129 != YPfalse) {
    T128 = CHKREF(YsyntaxYsexpr_make_macro_function);
  } else {
    T128 = YPfalse;
  }
  T127 = fun_sexpr_make_macro_function_140;
  T126 = CALL2(CHKREF(YPdefine_method),T128,T127);
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
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"add", &module_info_runtime, "add"},
  {"quote", &module_info_boot, "quote"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"%i?", &module_info_boot, "%i?"},
  {"%fb", &module_info_boot, "%fb"},
  {"elt", &module_info_runtime, "elt"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"<num>", &module_info_boot, "<num>"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"fun", &module_info_boot, "fun"},
  {"ds", &module_info_boot, "ds"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"identity", &module_info_runtime, "identity"},
  {"from", &module_info_runtime, "from"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%bb", &module_info_boot, "%bb"},
  {"%f+", &module_info_boot, "%f+"},
  {"char->ascii", &module_info_runtime, "char->ascii"},
  {"bound?", &module_info_boot, "bound?"},
  {"nul", &module_info_boot, "nul"},
  {"~==", &module_info_runtime, "~=="},
  {"keys", &module_info_runtime, "keys"},
  {"collected", &module_info_macros, "collected"},
  {"%su", &module_info_boot, "%su"},
  {"%i&", &module_info_boot, "%i&"},
  {"even?", &module_info_runtime, "even?"},
  {"str", &module_info_runtime, "str"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"%cu", &module_info_boot, "%cu"},
  {"var-type", &module_info_macros, "var-type"},
  {"%c<", &module_info_boot, "%c<"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"popf", &module_info_macros, "popf"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"len", &module_info_runtime, "len"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"%i+", &module_info_boot, "%i+"},
  {"%snul", &module_info_boot, "%snul"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"next-method", &module_info_macros, "next-method"},
  {"<union>", &module_info_boot, "<union>"},
  {"from-to", &module_info_runtime, "from-to"},
  {"slot", &module_info_boot, "slot"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"in", &module_info_runtime, "in"},
  {"to-str", &module_info_runtime, "to-str"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"loc", &module_info_boot, "loc"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"<log>", &module_info_boot, "<log>"},
  {"tup", &module_info_macros, "tup"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"list", &module_info_runtime, "list"},
  {"tail", &module_info_boot, "tail"},
  {"any?", &module_info_runtime, "any?"},
  {"all?", &module_info_runtime, "all?"},
  {"<range>", &module_info_runtime, "<range>"},
  {"%im", &module_info_boot, "%im"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"%selt", &module_info_boot, "%selt"},
  {"%f=", &module_info_boot, "%f="},
  {"fill", &module_info_runtime, "fill"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"%sb", &module_info_boot, "%sb"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"==", &module_info_macros, "=="},
  {"1st", &module_info_runtime, "1st"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"ascii-whitespaces", &module_info_runtime, "ascii-whitespaces"},
  {"<port>", &module_info_runtime, "<port>"},
  {"<any>", &module_info_boot, "<any>"},
  {"pop", &module_info_runtime, "pop"},
  {"vec", &module_info_runtime, "vec"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"for", &module_info_macros, "for"},
  {"assoc-value", &module_info_runtime, "assoc-value"},
  {"<list>", &module_info_runtime, "<list>"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"var-name", &module_info_macros, "var-name"},
  {"assocq", &module_info_runtime, "assocq"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"alter", &module_info_runtime, "alter"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"%pair", &module_info_boot, "%pair"},
  {"df", &module_info_boot, "df"},
  {"pick", &module_info_runtime, "pick"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"app-args", &module_info_runtime, "app-args"},
  {"isa?", &module_info_boot, "isa?"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"from-by", &module_info_runtime, "from-by"},
  {"select", &module_info_macros, "select"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"type-object", &module_info_boot, "type-object"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"fin", &module_info_boot, "fin"},
  {"rep", &module_info_boot, "rep"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"2nd", &module_info_runtime, "2nd"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"%iu", &module_info_boot, "%iu"},
  {"/", &module_info_runtime, "/"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"<step>", &module_info_runtime, "<step>"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"truncate", &module_info_runtime, "truncate"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"pos", &module_info_runtime, "pos"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"not", &module_info_boot, "not"},
  {"dlet", &module_info_macros, "dlet"},
  {"min", &module_info_runtime, "min"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"fabs", &module_info_runtime, "fabs"},
  {"do3", &module_info_runtime, "do3"},
  {"odd?", &module_info_runtime, "odd?"},
  {"use", &module_info_boot, "use"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"assq", &module_info_runtime, "assq"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"dec", &module_info_macros, "dec"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"collect", &module_info_macros, "collect"},
  {"lab", &module_info_boot, "lab"},
  {"assert", &module_info_macros, "assert"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"%i-", &module_info_boot, "%i-"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"assoc", &module_info_runtime, "assoc"},
  {"neg", &module_info_runtime, "neg"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"isa", &module_info_boot, "isa"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"write-string", &module_info_runtime, "write-string"},
  {"<class>", &module_info_boot, "<class>"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"set", &module_info_boot, "set"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"from-below", &module_info_runtime, "from-below"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"type-error", &module_info_boot, "type-error"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"error", &module_info_boot, "error"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"or", &module_info_macros, "or"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"<type>", &module_info_boot, "<type>"},
  {"%velt", &module_info_boot, "%velt"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"lsh", &module_info_runtime, "lsh"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"pair", &module_info_macros, "pair"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"-", &module_info_runtime, "-"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"neg?", &module_info_runtime, "neg?"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"del", &module_info_runtime, "del"},
  {"fapply", &module_info_boot, "fapply"},
  {"%fu", &module_info_boot, "%fu"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"head", &module_info_boot, "head"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"empty?", &module_info_macros, "empty?"},
  {"gensym", &module_info_macros, "gensym"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"read", &module_info_runtime, "read"},
  {"dv", &module_info_boot, "dv"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"now-key", &module_info_runtime, "now-key"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"%raw", &module_info_boot, "%raw"},
  {"%i^", &module_info_boot, "%i^"},
  {"unless", &module_info_macros, "unless"},
  {"round", &module_info_runtime, "round"},
  {"floor/", &module_info_runtime, "floor/"},
  {"compose", &module_info_runtime, "compose"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"do2", &module_info_runtime, "do2"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"dc", &module_info_boot, "dc"},
  {"sub", &module_info_runtime, "sub"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"%c=", &module_info_boot, "%c="},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"dp", &module_info_boot, "dp"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"round/", &module_info_runtime, "round/"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"address-of", &module_info_runtime, "address-of"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"ash", &module_info_runtime, "ash"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"if", &module_info_boot, "if"},
  {"<str>", &module_info_boot, "<str>"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"del-key", &module_info_runtime, "del-key"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"object-class", &module_info_boot, "object-class"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"from-above", &module_info_runtime, "from-above"},
  {"%f/", &module_info_boot, "%f/"},
  {"write-char", &module_info_runtime, "write-char"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"nil", &module_info_boot, "nil"},
  {"%call-next-method", &module_info_boot, "%call-next-method"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"newline", &module_info_runtime, "newline"},
  {"abs", &module_info_runtime, "abs"},
  {"format", &module_info_runtime, "format"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"assqn", &module_info_runtime, "assqn"},
  {"dm", &module_info_boot, "dm"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"*", &module_info_runtime, "*"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"%with-monitor", &module_info_runtime, "%with-monitor"},
  {"+", &module_info_runtime, "+"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"and", &module_info_macros, "and"},
  {"curry", &module_info_runtime, "curry"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"seq", &module_info_boot, "seq"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"read-char", &module_info_runtime, "read-char"},
  {"3rd", &module_info_runtime, "3rd"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"%f<", &module_info_boot, "%f<"},
  {"try", &module_info_boot, "try"},
  {"%vec", &module_info_boot, "%vec"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"max", &module_info_runtime, "max"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"floor", &module_info_runtime, "floor"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"modulo", &module_info_runtime, "modulo"},
  {"default", &module_info_runtime, "default"},
  {"%i=", &module_info_boot, "%i="},
  {"<flat>", &module_info_boot, "<flat>"},
  {"%cb", &module_info_boot, "%cb"},
  {"find-key", &module_info_runtime, "find-key"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"<met>", &module_info_boot, "<met>"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"map", &module_info_macros, "map"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"nul?", &module_info_runtime, "nul?"},
  {"empty", &module_info_runtime, "empty"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"port-index", &module_info_runtime, "port-index"},
  {"lst", &module_info_boot, "lst"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"first-then", &module_info_runtime, "first-then"},
  {"remainder", &module_info_runtime, "remainder"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"logior", &module_info_runtime, "logior"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"<=", &module_info_runtime, "<="},
  {"=", &module_info_runtime, "="},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"map2", &module_info_runtime, "map2"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"pushf", &module_info_macros, "pushf"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"pos?", &module_info_runtime, "pos?"},
  {"%isa", &module_info_boot, "%isa"},
  {"%f-", &module_info_boot, "%f-"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"false-or", &module_info_runtime, "false-or"},
  {"%ib", &module_info_boot, "%ib"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"<", &module_info_runtime, "<"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"%lu", &module_info_boot, "%lu"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"class-name", &module_info_boot, "class-name"},
  {"logxor", &module_info_runtime, "logxor"},
  {"always", &module_info_runtime, "always"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"push", &module_info_runtime, "push"},
  {"%i*", &module_info_boot, "%i*"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"buf", &module_info_runtime, "buf"},
  {"reduce", &module_info_runtime, "reduce"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"~=", &module_info_runtime, "~="},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"cat", &module_info_macros, "cat"},
  {">", &module_info_runtime, ">"},
  {"last", &module_info_runtime, "last"},
  {"logand", &module_info_runtime, "logand"},
  {"t<", &module_info_runtime, "t<"},
  {"<col>", &module_info_boot, "<col>"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"apply", &module_info_boot, "apply"},
  {"do", &module_info_runtime, "do"},
  {"force-output", &module_info_runtime, "force-output"},
  {"%f*", &module_info_boot, "%f*"},
  {"fab", &module_info_runtime, "fab"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"rev!", &module_info_runtime, "rev!"},
  {"lognot", &module_info_runtime, "lognot"},
  {"as", &module_info_runtime, "as"},
  {"sig", &module_info_runtime, "sig"},
  {"out", &module_info_runtime, "out"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"t=", &module_info_runtime, "t="},
  {"subtype?", &module_info_boot, "subtype?"},
  {"case", &module_info_macros, "case"},
  {"rev", &module_info_runtime, "rev"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"export", &module_info_boot, "export"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"%it/", &module_info_boot, "%it/"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"mif", &module_info_boot, "mif"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"%i!", &module_info_boot, "%i!"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"%iv", &module_info_boot, "%iv"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"%slot", &module_info_boot, "%slot"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"collecting", &module_info_macros, "collecting"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"%i<", &module_info_boot, "%i<"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"%slen", &module_info_boot, "%slen"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"t+", &module_info_runtime, "t+"},
  {"cat2", &module_info_runtime, "cat2"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"mem?", &module_info_runtime, "mem?"},
  {"zero?", &module_info_runtime, "zero?"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"when", &module_info_macros, "when"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"dss", &module_info_boot, "dss"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"cat!", &module_info_runtime, "cat!"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"ct", &module_info_boot, "ct"},
  {"type-class", &module_info_boot, "type-class"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"let", &module_info_boot, "let"},
  {"<error>", &module_info_runtime, "<error>"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {">=", &module_info_runtime, ">="},
  {"<int>", &module_info_boot, "<int>"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"%ft", &module_info_boot, "%ft"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"dg", &module_info_boot, "dg"},
  {"add!", &module_info_runtime, "add!"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"<map>", &module_info_runtime, "<map>"},
  {"%str", &module_info_boot, "%str"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"inc", &module_info_macros, "inc"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sexpr-atom?", &YsyntaxYsexpr_atomQ},
  {"$sexpr-macro-expand-tag", &YsyntaxYDsexpr_macro_expand_tag},
  {"sexpr-definition?", &YsyntaxYsexpr_definitionQ},
  {"sexpr-isa-init-slots", &YsyntaxYsexpr_isa_init_slots},
  {"sexpr-if-then", &YsyntaxYsexpr_if_then},
  {"sexpr-unwind-protect-cleanup-forms", &YsyntaxYsexpr_unwind_protect_cleanup_forms},
  {"sexpr-iterate-signature", &YsyntaxYsexpr_iterate_signature},
  {"---main-2---", NULL},
  {"sexpr-variable?", &YsyntaxYsexpr_variableQ},
  {"sexpr-define-class?", &YsyntaxYsexpr_define_classQ},
  {"$sexpr-locals-tag", &YsyntaxYDsexpr_locals_tag},
  {"sexpr-if-test", &YsyntaxYsexpr_if_test},
  {"sexpr-application?", &YsyntaxYsexpr_applicationQ},
  {"sexpr-isa-slot-inits", &YsyntaxYsexpr_isa_slot_inits},
  {"---main-1---", NULL},
  {"sexpr-syntax-definition-variable", &YsyntaxYsexpr_syntax_definition_variable},
  {"sexpr-function-definition-value", &YsyntaxYsexpr_function_definition_value},
  {"sexpr-define-class-parents", &YsyntaxYsexpr_define_class_parents},
  {"$sexpr-unwind-protect-tag", &YsyntaxYDsexpr_unwind_protect_tag},
  {"sexpr-monitor-info", &YsyntaxYsexpr_monitor_info},
  {"sexpr-make-setter-name", &YsyntaxYsexpr_make_setter_name},
  {"sexpr-begin?", &YsyntaxYsexpr_beginQ},
  {"sexpr-definition-variable", &YsyntaxYsexpr_definition_variable},
  {"sexpr-unquote?", &YsyntaxYsexpr_unquoteQ},
  {"*bq-list*", &YsyntaxYTbq_listT},
  {"sexpr-loc-raw-body", &YsyntaxYsexpr_loc_raw_body},
  {"sexpr-operands", &YsyntaxYsexpr_operands},
  {"sexpr-monitor-body", &YsyntaxYsexpr_monitor_body},
  {"sexpr-let->combination", &YsyntaxYsexpr_let_Gcombination},
  {"sexpr-let?", &YsyntaxYsexpr_letQ},
  {"sexpr-variable-name", &YsyntaxYsexpr_variable_name},
  {"sexpr-macro?", &YsyntaxYsexpr_macroQ},
  {"*comma-atsign*", &YsyntaxYTcomma_atsignT},
  {"$sexpr-if-tag", &YsyntaxYDsexpr_if_tag},
  {"sexpr-syntax-if-else", &YsyntaxYsexpr_syntax_if_else},
  {"sexpr-isa?", &YsyntaxYsexpr_isaQ},
  {"$sexpr-quasiquote-tag", &YsyntaxYDsexpr_quasiquote_tag},
  {"sexpr-isa-parents", &YsyntaxYsexpr_isa_parents},
  {"sexpr-iterate->loc", &YsyntaxYsexpr_iterate_Gloc},
  {"sexpr-bind-pattern-variables", &YsyntaxYsexpr_bind_pattern_variables},
  {"sexpr-block-body", &YsyntaxYsexpr_block_body},
  {"find-option", &YsyntaxYfind_option},
  {"sexpr-make-begin", &YsyntaxYsexpr_make_begin},
  {"sexpr-first-exp", &YsyntaxYsexpr_first_exp},
  {"*bq-nconc*", &YsyntaxYTbq_nconcT},
  {"sexpr-monitor-expand", &YsyntaxYsexpr_monitor_expand},
  {"sexpr-method-signature", &YsyntaxYsexpr_method_signature},
  {"$sexpr-define-tag", &YsyntaxYDsexpr_define_tag},
  {"bq-process", &YsyntaxYbq_process},
  {"sexpr-monitor-type", &YsyntaxYsexpr_monitor_type},
  {"sexpr-make-syntax-if", &YsyntaxYsexpr_make_syntax_if},
  {"sexpr-monitor-test", &YsyntaxYsexpr_monitor_test},
  {"*bq-quote*", &YsyntaxYTbq_quoteT},
  {"sexpr-assignment-value", &YsyntaxYsexpr_assignment_value},
  {"sexpr-make-quote", &YsyntaxYsexpr_make_quote},
  {"sexpr-function-signature", &YsyntaxYsexpr_function_signature},
  {"sexpr-text-of-quotation", &YsyntaxYsexpr_text_of_quotation},
  {"sexpr-quoted?", &YsyntaxYsexpr_quotedQ},
  {"map-tree", &YsyntaxYmap_tree},
  {"sexpr-let-values", &YsyntaxYsexpr_let_values},
  {"sexpr-block?", &YsyntaxYsexpr_blockQ},
  {"sexpr-let-names+values", &YsyntaxYsexpr_let_namesAvalues},
  {"sexpr-rest-operands", &YsyntaxYsexpr_rest_operands},
  {"sexpr-method?", &YsyntaxYsexpr_methodQ},
  {"sexpr-let-body", &YsyntaxYsexpr_let_body},
  {"sexpr-block-name", &YsyntaxYsexpr_block_name},
  {"sexpr-syntax-if-then", &YsyntaxYsexpr_syntax_if_then},
  {"$sexpr-define-generic-tag", &YsyntaxYDsexpr_define_generic_tag},
  {"sexpr-pattern-variable-name", &YsyntaxYsexpr_pattern_variable_name},
  {"sexpr-syntax-definition?", &YsyntaxYsexpr_syntax_definitionQ},
  {"sexpr-loc-bound-bodies", &YsyntaxYsexpr_loc_bound_bodies},
  {"sexpr-no-operands?", &YsyntaxYsexpr_no_operandsQ},
  {"sexpr-unwind-protect?", &YsyntaxYsexpr_unwind_protectQ},
  {"$sexpr-macro-tag", &YsyntaxYDsexpr_macro_tag},
  {"sexpr-unique-name", &YsyntaxYsexpr_unique_name},
  {"nreconc", &YsyntaxYnreconc},
  {"sexpr-if-else", &YsyntaxYsexpr_if_else},
  {"sexpr-iterate-body", &YsyntaxYsexpr_iterate_body},
  {"sexpr-loc?", &YsyntaxYsexpr_locQ},
  {"$sexpr-bind-exit-tag", &YsyntaxYDsexpr_bind_exit_tag},
  {"sexpr-self-evaluating?", &YsyntaxYsexpr_self_evaluatingQ},
  {"sexpr-begin-actions", &YsyntaxYsexpr_begin_actions},
  {"$sexpr-define-class-tag", &YsyntaxYDsexpr_define_class_tag},
  {"---main-0---", NULL},
  {"$sexpr-define-method-tag", &YsyntaxYDsexpr_define_method_tag},
  {"sexpr-sequence->begin", &YsyntaxYsexpr_sequence_Gbegin},
  {"$sexpr-iterate-tag", &YsyntaxYDsexpr_iterate_tag},
  {"bracket", &YsyntaxYbracket},
  {"sexpr-signature-parameters", &YsyntaxYsexpr_signature_parameters},
  {"sexpr-make-anonymous-method", &YsyntaxYsexpr_make_anonymous_method},
  {"sexpr-syntax-if-pattern", &YsyntaxYsexpr_syntax_if_pattern},
  {"sexpr-make-setter", &YsyntaxYsexpr_make_setter},
  {"bq-remove-tokens", &YsyntaxYbq_remove_tokens},
  {"sexpr-backquote?", &YsyntaxYsexpr_backquoteQ},
  {"sexpr-make-method", &YsyntaxYsexpr_make_method},
  {"*bq-list**", &YsyntaxYTbq_listTT},
  {"sexpr-slot-init", &YsyntaxYsexpr_slot_init},
  {"sexpr-last-exp?", &YsyntaxYsexpr_last_expQ},
  {"eval", &YsyntaxYeval},
  {"$sexpr-monitor-tag", &YsyntaxYDsexpr_monitor_tag},
  {"sexpr-if?", &YsyntaxYsexpr_ifQ},
  {"sexpr-build-backquote-expander", &YsyntaxYsexpr_build_backquote_expander},
  {"$sexpr-method-tag", &YsyntaxYDsexpr_method_tag},
  {"sexpr-definition-value", &YsyntaxYsexpr_definition_value},
  {"sexpr-pattern-variable?", &YsyntaxYsexpr_pattern_variableQ},
  {"sexpr-slot-variable", &YsyntaxYsexpr_slot_variable},
  {"sexpr-iterate-inits", &YsyntaxYsexpr_iterate_inits},
  {"$sexpr-set-tag", &YsyntaxYDsexpr_set_tag},
  {"<name>", &YsyntaxYLnameG},
  {"sexpr-iterate?", &YsyntaxYsexpr_iterateQ},
  {"sexpr-variable-type", &YsyntaxYsexpr_variable_type},
  {"sexpr-forward-primitive?", &YsyntaxYsexpr_forward_primitiveQ},
  {"$sexpr-syntax-if-tag", &YsyntaxYDsexpr_syntax_if_tag},
  {"sexpr-function-parameters", &YsyntaxYsexpr_function_parameters},
  {"sexpr-syntax-if-value", &YsyntaxYsexpr_syntax_if_value},
  {"sexpr-loc-bound-signatures", &YsyntaxYsexpr_loc_bound_signatures},
  {"sexpr-loc-bound-names", &YsyntaxYsexpr_loc_bound_names},
  {"sexpr-method-body", &YsyntaxYsexpr_method_body},
  {"sexpr-monitor?", &YsyntaxYsexpr_monitorQ},
  {"sexpr-isa-init-values", &YsyntaxYsexpr_isa_init_values},
  {"sexpr-make-macro-function", &YsyntaxYsexpr_make_macro_function},
  {"$sexpr-begin-tag", &YsyntaxYDsexpr_begin_tag},
  {"$sexpr-let-tag", &YsyntaxYDsexpr_let_tag},
  {"sexpr-assignment-variable", &YsyntaxYsexpr_assignment_variable},
  {"sexpr-iterate-name", &YsyntaxYsexpr_iterate_name},
  {"sexpr-operator", &YsyntaxYsexpr_operator},
  {"sexpr-slot?", &YsyntaxYsexpr_slotQ},
  {"sexpr-generic-definition?", &YsyntaxYsexpr_generic_definitionQ},
  {"sexpr-make-if", &YsyntaxYsexpr_make_if},
  {"sexpr-rest-exps", &YsyntaxYsexpr_rest_exps},
  {"sexpr-function-definition-variable", &YsyntaxYsexpr_function_definition_variable},
  {"sexpr-method-value", &YsyntaxYsexpr_method_value},
  {"$sexpr-slot-tag", &YsyntaxYDsexpr_slot_tag},
  {"sexpr-macro-expand?", &YsyntaxYsexpr_macro_expandQ},
  {"sexpr-unwind-protect-protected-form", &YsyntaxYsexpr_unwind_protect_protected_form},
  {"sexpr-first-operand", &YsyntaxYsexpr_first_operand},
  {"sexpr-let-bound-variables", &YsyntaxYsexpr_let_bound_variables},
  {"sexpr-tagged-list?", &YsyntaxYsexpr_tagged_listQ},
  {"sexpr-make-application", &YsyntaxYsexpr_make_application},
  {"$sexpr-values-tag", &YsyntaxYDsexpr_values_tag},
  {"sexpr-function-value", &YsyntaxYsexpr_function_value},
  {"*bq-append*", &YsyntaxYTbq_appendT},
  {"sexpr-expand-backquote", &YsyntaxYsexpr_expand_backquote},
  {"sexpr-assignment?", &YsyntaxYsexpr_assignmentQ},
  {"sexpr-slot-object", &YsyntaxYsexpr_slot_object},
  {"sexpr-make-getter", &YsyntaxYsexpr_make_getter},
  {"sexpr-new-unique-name-counter!", &YsyntaxYsexpr_new_unique_name_counterX},
  {"$sexpr-define-function-tag", &YsyntaxYDsexpr_define_function_tag},
  {"$sexpr-quote-tag", &YsyntaxYDsexpr_quote_tag},
  {"sexpr-function-definition?", &YsyntaxYsexpr_function_definitionQ},
  {"sexpr-unquote-splicing?", &YsyntaxYsexpr_unquote_splicingQ},
  {"sexpr-method-definition?", &YsyntaxYsexpr_method_definitionQ},
  {"sexpr-method-parameters", &YsyntaxYsexpr_method_parameters},
  {"sexpr-function-body", &YsyntaxYsexpr_function_body},
  {"*bq-clobberable*", &YsyntaxYTbq_clobberableT},
  {"sexpr-syntax-definition-value", &YsyntaxYsexpr_syntax_definition_value},
  {"$sexpr-define-syntax-tag", &YsyntaxYDsexpr_define_syntax_tag},
  {"sexpr-syntax-if?", &YsyntaxYsexpr_syntax_ifQ},
  {"*unique-name-counter*", &YsyntaxYTunique_name_counterT},
  {"sexpr-signature-value", &YsyntaxYsexpr_signature_value},
  {"$sexpr-isa-tag", &YsyntaxYDsexpr_isa_tag},
  {"sexpr-loc-body", &YsyntaxYsexpr_loc_body},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"$sexpr-macro-expand-tag", "$sexpr-macro-expand-tag"},
  {"sexpr-isa-init-slots", "sexpr-isa-init-slots"},
  {"sexpr-if-then", "sexpr-if-then"},
  {"sexpr-unwind-protect-cleanup-forms", "sexpr-unwind-protect-cleanup-forms"},
  {"sexpr-variable?", "sexpr-variable?"},
  {"sexpr-define-class?", "sexpr-define-class?"},
  {"$sexpr-locals-tag", "$sexpr-locals-tag"},
  {"sexpr-isa-slot-inits", "sexpr-isa-slot-inits"},
  {"sexpr-syntax-definition-variable", "sexpr-syntax-definition-variable"},
  {"sexpr-function-definition-value", "sexpr-function-definition-value"},
  {"sexpr-define-class-parents", "sexpr-define-class-parents"},
  {"$sexpr-unwind-protect-tag", "$sexpr-unwind-protect-tag"},
  {"sexpr-make-setter-name", "sexpr-make-setter-name"},
  {"sexpr-definition-variable", "sexpr-definition-variable"},
  {"sexpr-unquote?", "sexpr-unquote?"},
  {"sexpr-loc-raw-body", "sexpr-loc-raw-body"},
  {"sexpr-operands", "sexpr-operands"},
  {"sexpr-let->combination", "sexpr-let->combination"},
  {"sexpr-variable-name", "sexpr-variable-name"},
  {"$sexpr-if-tag", "$sexpr-if-tag"},
  {"sexpr-syntax-if-else", "sexpr-syntax-if-else"},
  {"$sexpr-quasiquote-tag", "$sexpr-quasiquote-tag"},
  {"sexpr-isa-parents", "sexpr-isa-parents"},
  {"sexpr-iterate->loc", "sexpr-iterate->loc"},
  {"sexpr-block-body", "sexpr-block-body"},
  {"sexpr-make-begin", "sexpr-make-begin"},
  {"sexpr-monitor-expand", "sexpr-monitor-expand"},
  {"sexpr-syntax-if-pattern", "sexpr-syntax-if-pattern"},
  {"sexpr-method-signature", "sexpr-method-signature"},
  {"$sexpr-define-tag", "$sexpr-define-tag"},
  {"sexpr-if-else", "sexpr-if-else"},
  {"sexpr-assignment-value", "sexpr-assignment-value"},
  {"sexpr-function-signature", "sexpr-function-signature"},
  {"sexpr-text-of-quotation", "sexpr-text-of-quotation"},
  {"sexpr-block-name", "sexpr-block-name"},
  {"sexpr-syntax-if-then", "sexpr-syntax-if-then"},
  {"$sexpr-define-generic-tag", "$sexpr-define-generic-tag"},
  {"sexpr-loc-bound-bodies", "sexpr-loc-bound-bodies"},
  {"sexpr-bind-pattern-variables", "sexpr-bind-pattern-variables"},
  {"$sexpr-bind-exit-tag", "$sexpr-bind-exit-tag"},
  {"sexpr-slot-object", "sexpr-slot-object"},
  {"$sexpr-define-method-tag", "$sexpr-define-method-tag"},
  {"sexpr-sequence->begin", "sexpr-sequence->begin"},
  {"$sexpr-iterate-tag", "$sexpr-iterate-tag"},
  {"sexpr-signature-parameters", "sexpr-signature-parameters"},
  {"sexpr-make-anonymous-method", "sexpr-make-anonymous-method"},
  {"sexpr-make-setter", "sexpr-make-setter"},
  {"sexpr-slot-init", "sexpr-slot-init"},
  {"eval", "eval"},
  {"$sexpr-monitor-tag", "$sexpr-monitor-tag"},
  {"$sexpr-method-tag", "$sexpr-method-tag"},
  {"sexpr-definition-value", "sexpr-definition-value"},
  {"sexpr-slot-variable", "sexpr-slot-variable"},
  {"sexpr-loc-bound-names", "sexpr-loc-bound-names"},
  {"$sexpr-set-tag", "$sexpr-set-tag"},
  {"sexpr-variable-type", "sexpr-variable-type"},
  {"sexpr-forward-primitive?", "sexpr-forward-primitive?"},
  {"$sexpr-syntax-if-tag", "$sexpr-syntax-if-tag"},
  {"sexpr-syntax-if-value", "sexpr-syntax-if-value"},
  {"sexpr-method-body", "sexpr-method-body"},
  {"$sexpr-define-class-tag", "$sexpr-define-class-tag"},
  {"sexpr-isa-init-values", "sexpr-isa-init-values"},
  {"sexpr-make-macro-function", "sexpr-make-macro-function"},
  {"$sexpr-begin-tag", "$sexpr-begin-tag"},
  {"$sexpr-let-tag", "$sexpr-let-tag"},
  {"sexpr-assignment-variable", "sexpr-assignment-variable"},
  {"sexpr-operator", "sexpr-operator"},
  {"sexpr-function-definition-variable", "sexpr-function-definition-variable"},
  {"$sexpr-slot-tag", "$sexpr-slot-tag"},
  {"sexpr-unwind-protect-protected-form", "sexpr-unwind-protect-protected-form"},
  {"sexpr-make-application", "sexpr-make-application"},
  {"sexpr-expand-backquote", "sexpr-expand-backquote"},
  {"sexpr-make-getter", "sexpr-make-getter"},
  {"$sexpr-define-function-tag", "$sexpr-define-function-tag"},
  {"$sexpr-quote-tag", "$sexpr-quote-tag"},
  {"sexpr-unquote-splicing?", "sexpr-unquote-splicing?"},
  {"sexpr-loc-bound-signatures", "sexpr-loc-bound-signatures"},
  {"sexpr-function-body", "sexpr-function-body"},
  {"sexpr-syntax-definition-value", "sexpr-syntax-definition-value"},
  {"$sexpr-define-syntax-tag", "$sexpr-define-syntax-tag"},
  {"sexpr-if-test", "sexpr-if-test"},
  {"sexpr-signature-value", "sexpr-signature-value"},
  {"$sexpr-isa-tag", "$sexpr-isa-tag"},
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
