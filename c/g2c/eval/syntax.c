/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: syntax */

EXT(YLlstG,"boot","<lst>");
DEF(YsyntaxYmap_tree,"syntax","map-tree");
DEF(YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
EXT(YmacrosYtup,"macros","tup");
DEF(YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
DEF(YsyntaxYsexpr_isaQ,"syntax","sexpr-isa?");
DEF(YsyntaxYsexpr_pattern_variableQ,"syntax","sexpr-pattern-variable?");
DEF(YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
EXT(YruntimeYsub,"runtime","sub");
EXT(Yobject_slots,"boot","object-slots");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(Yapply,"boot","apply");
DEF(YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
EXT(Yfun_name,"boot","fun-name");
DEF(YsyntaxYsexpr_unique_name,"syntax","sexpr-unique-name");
DEF(YsyntaxYsexpr_iterateQ,"syntax","sexpr-iterate?");
EXT(Ytail,"boot","tail");
DEF(YsyntaxYsexpr_make_getter,"syntax","sexpr-make-getter");
DEF(YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
DEF(YsyntaxYTbq_listT,"syntax","*bq-list*");
EXT(YruntimeYassq,"runtime","assq");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(Yhead_setter,"boot","head-setter");
DEF(YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
EXT(YLgenG,"boot","<gen>");
DEF(YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
DEF(YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
EXT(YruntimeYto_str,"runtime","to-str");
DEF(YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYpop,"runtime","pop");
EXT(Ynot,"boot","not");
EXT(Yfun_value,"boot","fun-value");
EXT(YruntimeYdo,"runtime","do");
DEF(YsyntaxYsexpr_beginQ,"syntax","sexpr-begin?");
DEF(YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(Yfun_name_setter,"boot","fun-name-setter");
DEF(YsyntaxYTunique_name_counterT,"syntax","*unique-name-counter*");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YruntimeYfab,"runtime","fab");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
DEF(YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYassqn,"runtime","assqn");
DEF(YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(Yerror,"boot","error");
DEF(YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
DEF(YsyntaxYsexpr_monitor_body,"syntax","sexpr-monitor-body");
EXT(YPsnul,"boot","%snul");
DEF(YsyntaxYsexpr_locQ,"syntax","sexpr-loc?");
DEF(YsyntaxYsexpr_syntax_definitionQ,"syntax","sexpr-syntax-definition?");
DEF(YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YLchrG,"boot","<chr>");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
DEF(YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
EXT(YmacrosYmake_sym,"macros","make-sym");
DEF(YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
EXT(YruntimeYforce_output,"runtime","force-output");
DEF(YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
EXT(YruntimeYfrom_below,"runtime","from-below");
DEF(YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
DEF(YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
DEF(YsyntaxYsexpr_slot_init,"syntax","sexpr-slot-init");
EXT(YmacrosYlst,"macros","lst");
DEF(YsyntaxYsexpr_isa_slot_inits,"syntax","sexpr-isa-slot-inits");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
DEF(YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
DEF(YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
DEF(YsyntaxYsexpr_pattern_variable_name,"syntax","sexpr-pattern-variable-name");
DEF(YsyntaxYsexpr_letQ,"syntax","sexpr-let?");
DEF(YsyntaxYsexpr_make_quote,"syntax","sexpr-make-quote");
DEF(YsyntaxYsexpr_let_values,"syntax","sexpr-let-values");
EXT(YPcall_next_method,"boot","%call-next-method");
DEF(YsyntaxYsexpr_no_operandsQ,"syntax","sexpr-no-operands?");
DEF(YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
DEF(YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
DEF(YsyntaxYsexpr_backquoteQ,"syntax","sexpr-backquote?");
EXT(YLvecG,"boot","<vec>");
DEF(YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YLoptsG,"boot","<opts>");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YPsymbols,"boot","%symbols");
DEF(YsyntaxYbq_process,"syntax","bq-process");
EXT(YLflatG,"boot","<flat>");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYas,"runtime","as");
DEF(YsyntaxYsexpr_operands,"syntax","sexpr-operands");
DEF(YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
DEF(YsyntaxYsexpr_slot_variable,"syntax","sexpr-slot-variable");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YruntimeYempty,"runtime","empty");
DEF(YsyntaxYTbq_quoteT,"syntax","*bq-quote*");
DEF(YsyntaxYsexpr_atomQ,"syntax","sexpr-atom?");
DEF(YsyntaxYsexpr_make_setter,"syntax","sexpr-make-setter");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
DEF(YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(Ysym_name,"boot","sym-name");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YruntimeYNEE,"runtime","~==");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YLcolG,"boot","<col>");
DEF(YsyntaxYsexpr_assignmentQ,"syntax","sexpr-assignment?");
DEF(YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
DEF(YsyntaxYsexpr_isa_init_slots,"syntax","sexpr-isa-init-slots");
EXT(YPvnul,"boot","%vnul");
DEF(YsyntaxYDsexpr_slot_tag,"syntax","$sexpr-slot-tag");
EXT(YruntimeYhandler_info_message,"runtime","handler-info-message");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
DEF(YsyntaxYTcomma_atsignT,"syntax","*comma-atsign*");
DEF(YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
EXT(YLtraitsG,"boot","<traits>");
EXT(YLlogG,"boot","<log>");
EXT(YruntimeYadd,"runtime","add");
DEF(YsyntaxYsexpr_unwind_protectQ,"syntax","sexpr-unwind-protect?");
DEF(YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
EXT(YruntimeYfrom,"runtime","from");
DEF(YsyntaxYsexpr_rest_operands,"syntax","sexpr-rest-operands");
DEF(YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
DEF(YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
DEF(YsyntaxYsexpr_macro_expandQ,"syntax","sexpr-macro-expand?");
DEF(YsyntaxYsexpr_macroQ,"syntax","sexpr-macro?");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
DEF(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
DEF(YsyntaxYsexpr_new_unique_name_counterX,"syntax","sexpr-new-unique-name-counter!");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YmacrosYcat,"macros","cat");
EXT(YruntimeYfill,"runtime","fill");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(Yslot_value,"boot","slot-value");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YmacrosYEE,"macros","==");
EXT(YruntimeY1st,"runtime","1st");
EXT(YLfloG,"boot","<flo>");
EXT(YLanyG,"boot","<any>");
DEF(YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
DEF(YsyntaxYsexpr_method_parameters,"syntax","sexpr-method-parameters");
DEF(YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
DEF(YsyntaxYsexpr_monitor_test,"syntax","sexpr-monitor-test");
EXT(YruntimeYini_state,"runtime","ini-state");
DEF(YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
DEF(YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
DEF(YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
DEF(YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
DEF(YsyntaxYsexpr_ifQ,"syntax","sexpr-if?");
EXT(YruntimeYcompose,"runtime","compose");
DEF(YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
DEF(YsyntaxYsexpr_iterate_inits,"syntax","sexpr-iterate-inits");
EXT(YruntimeYread_char,"runtime","read-char");
DEF(YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
DEF(YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
DEF(YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
EXT(YLseqG,"boot","<seq>");
DEF(YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
DEF(YsyntaxYsexpr_function_definitionQ,"syntax","sexpr-function-definition?");
DEF(YsyntaxYsexpr_monitorQ,"syntax","sexpr-monitor?");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYE,"runtime","=");
DEF(YsyntaxYsexpr_iterate_signature,"syntax","sexpr-iterate-signature");
DEF(YsyntaxYbracket,"syntax","bracket");
EXT(Yfapply,"boot","fapply");
DEF(YsyntaxYTbq_nconcT,"syntax","*bq-nconc*");
DEF(YsyntaxYTbq_clobberableT,"syntax","*bq-clobberable*");
DEF(YsyntaxYsexpr_monitor_type,"syntax","sexpr-monitor-type");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
DEF(YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
DEF(YsyntaxYsexpr_tagged_listQ,"syntax","sexpr-tagged-list?");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
DEF(YsyntaxYsexpr_first_exp,"syntax","sexpr-first-exp");
EXT(YPisa,"boot","%isa");
EXT(YruntimeYlen,"runtime","len");
DEF(YsyntaxYsexpr_slotQ,"syntax","sexpr-slot?");
DEF(YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
EXT(Ysig_names,"boot","sig-names");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YruntimeYrcurry,"runtime","rcurry");
DEF(YsyntaxYsexpr_self_evaluatingQ,"syntax","sexpr-self-evaluating?");
EXT(YmacrosYpair,"macros","pair");
DEF(YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
EXT(YruntimeYalways,"runtime","always");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YruntimeYL,"runtime","<");
DEF(YsyntaxYsexpr_isa_parents,"syntax","sexpr-isa-parents");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YLintG,"boot","<int>");
EXT(YruntimeYtype_or,"runtime","type-or");
EXT(YruntimeYlast,"runtime","last");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YruntimeYpush,"runtime","push");
DEF(YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
DEF(YsyntaxYsexpr_methodQ,"syntax","sexpr-method?");
EXT(Yfile_opening_error,"boot","file-opening-error");
DEF(YsyntaxYTbq_listTT,"syntax","*bq-list**");
EXT(YisaQ,"boot","isa?");
EXT(YLlocG,"boot","<loc>");
EXT(YruntimeYvec,"runtime","vec");
EXT(YruntimeYformat,"runtime","format");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
DEF(YsyntaxYTbq_appendT,"syntax","*bq-append*");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(Ysig_specs,"boot","sig-specs");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYpeek_char,"runtime","peek-char");
DEF(YsyntaxYsexpr_let_bound_variables,"syntax","sexpr-let-bound-variables");
EXT(YPdefine_method,"boot","%define-method");
DEF(YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YruntimeYout,"runtime","out");
DEF(YsyntaxYsexpr_function_parameters,"syntax","sexpr-function-parameters");
EXT(YruntimeYA,"runtime","+");
DEF(YsyntaxYsexpr_monitor_info,"syntax","sexpr-monitor-info");
EXT(Ytype_error,"boot","type-error");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYLsimple_handler_infoG,"runtime","<simple-handler-info>");
EXT(YruntimeYG,"runtime",">");
DEF(YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
DEF(YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
DEF(YsyntaxYsexpr_first_operand,"syntax","sexpr-first-operand");
DEF(YsyntaxYsexpr_make_method,"syntax","sexpr-make-method");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YPPmacro,"boot","%%macro");
EXT(YLtupG,"boot","<tup>");
DEF(YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
DEF(YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
EXT(Ysig_naryQ,"boot","sig-nary?");
DEF(YsyntaxYsexpr_iterate_body,"syntax","sexpr-iterate-body");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
DEF(YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
DEF(YsyntaxYbq_remove_tokens,"syntax","bq-remove-tokens");
DEF(YsyntaxYsexpr_begin_actions,"syntax","sexpr-begin-actions");
EXT(YmacrosYgensym,"macros","gensym");
DEF(YsyntaxYDsexpr_macro_tag,"syntax","$sexpr-macro-tag");
DEF(YsyntaxYeval,"syntax","eval");
DEF(YsyntaxYsexpr_make_if,"syntax","sexpr-make-if");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
DEF(YsyntaxYsexpr_quotedQ,"syntax","sexpr-quoted?");
EXT(YruntimeYfirst_then,"runtime","first-then");
DEF(YsyntaxYsexpr_rest_exps,"syntax","sexpr-rest-exps");
DEF(YsyntaxYsexpr_let_body,"syntax","sexpr-let-body");
EXT(YruntimeYrev,"runtime","rev");
DEF(YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
DEF(YsyntaxYDsexpr_values_tag,"syntax","$sexpr-values-tag");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YruntimeY3rd,"runtime","3rd");
DEF(YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYmap2,"runtime","map2");
DEF(YsyntaxYsexpr_method_definitionQ,"syntax","sexpr-method-definition?");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YruntimeYGE,"runtime",">=");
EXT(Yfun_names,"boot","fun-names");
DEF(YsyntaxYsexpr_definitionQ,"syntax","sexpr-definition?");
EXT(Ysig_arity,"boot","sig-arity");
DEF(YsyntaxYsexpr_let_namesAvalues,"syntax","sexpr-let-names+values");
DEF(YsyntaxYsexpr_last_expQ,"syntax","sexpr-last-exp?");
DEF(YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
DEF(YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
DEF(YsyntaxYsexpr_slot_object,"syntax","sexpr-slot-object");
DEF(YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
DEF(YsyntaxYsexpr_iterate_name,"syntax","sexpr-iterate-name");
DEF(YsyntaxYsexpr_make_setter_name,"syntax","sexpr-make-setter-name");
EXT(Yobject_parents,"boot","object-parents");
EXT(YruntimeYdo2,"runtime","do2");
DEF(YsyntaxYsexpr_method_value,"syntax","sexpr-method-value");
DEF(YsyntaxYsexpr_make_syntax_if,"syntax","sexpr-make-syntax-if");
DEF(YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
DEF(YsyntaxYsexpr_build_backquote_expander,"syntax","sexpr-build-backquote-expander");
EXT(YLbagG,"boot","<bag>");
EXT(YruntimeYneg,"runtime","neg");
EXT(YruntimeYsig,"runtime","sig");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYtruncateS,"runtime","truncate/");
DEF(YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YLmetG,"boot","<met>");
EXT(YruntimeYnow_elt,"runtime","now-elt");
DEF(YsyntaxYsexpr_operator,"syntax","sexpr-operator");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYdel_dups,"runtime","del-dups");
DEF(YsyntaxYsexpr_monitor_expand,"syntax","sexpr-monitor-expand");
EXT(YruntimeYpos,"runtime","pos");
DEF(YsyntaxYsexpr_generic_definitionQ,"syntax","sexpr-generic-definition?");
EXT(YLstrG,"boot","<str>");
EXT(YLsigG,"boot","<sig>");
DEF(YsyntaxYsexpr_loc_body,"syntax","sexpr-loc-body");
EXT(Ysig_value,"boot","sig-value");
DEF(YsyntaxYsexpr_blockQ,"syntax","sexpr-block?");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYin,"runtime","in");
DEF(YsyntaxYsexpr_function_value,"syntax","sexpr-function-value");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
DEF(YsyntaxYfind_option,"syntax","find-option");
EXT(YmacrosYvar_name,"macros","var-name");
DEF(YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
DEF(YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
EXT(Ynul,"boot","nul");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YruntimeYLtabG,"runtime","<tab>");
DEF(YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
EXT(YruntimeYelt,"runtime","elt");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYhandler_info_arguments,"runtime","handler-info-arguments");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
DEF(YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YruntimeYfile_mtime,"runtime","file-mtime");
EXT(Yhead,"boot","head");
DEF(YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
EXT(Yunknown_function_error,"boot","unknown-function-error");
DEF(YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
EXT(Yfun_specs,"boot","fun-specs");
DEF(YsyntaxYsexpr_syntax_ifQ,"syntax","sexpr-syntax-if?");
DEF(YsyntaxYLnameG,"syntax","<name>");
EXT(YruntimeY_,"runtime","-");
EXT(YmacrosYmatch_atom,"macros","match-atom");
DEF(YsyntaxYsexpr_applicationQ,"syntax","sexpr-application?");
EXT(YruntimeYassocq,"runtime","assocq");
DEF(YsyntaxYnreconc,"syntax","nreconc");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_88);
DEFLIT(lit_87);
DEFLIT(lit_86);
DEFLIT(lit_85);
DEFLIT(lit_84);
DEFLIT(lit_83);
DEFLIT(lit_82);
DEFLIT(lit_81);
DEFLIT(lit_80);
DEFLIT(lit_79);
DEFLIT(lit_78);
DEFLIT(lit_77);
DEFLIT(lit_76);
DEFLIT(lit_75);
DEFLIT(lit_74);
DEFLIT(lit_73);
DEFLIT(lit_72);
DEFLIT(lit_71);
DEFLIT(lit_70);
DEFLIT(lit_69);
DEFLIT(lit_68);
DEFLIT(lit_67);
DEFLIT(lit_66);
DEFLIT(lit_65);
DEFLIT(lit_64);
DEFLIT(lit_63);
DEFLIT(lit_62);
DEFLIT(lit_61);
DEFLIT(lit_60);
DEFLIT(lit_59);
DEFLIT(lit_58);
DEFLIT(lit_57);
DEFLIT(lit_56);
DEFLIT(lit_55);
DEFLIT(lit_54);
DEFLIT(lit_53);
DEFLIT(lit_52);
DEFLIT(lit_51);
DEFLIT(lit_50);
DEFLIT(lit_49);
DEFLIT(lit_48);
DEFLIT(lit_47);
DEFLIT(lit_46);
DEFLIT(lit_45);
DEFLIT(lit_44);
DEFLIT(lit_43);
DEFLIT(lit_42);
DEFLIT(lit_41);
DEFLIT(lit_40);
DEFLIT(lit_39);
DEFLIT(lit_38);
DEFLIT(lit_37);
DEFLIT(lit_36);
DEFLIT(lit_35);
DEFLIT(lit_34);
DEFLIT(lit_33);
DEFLIT(lit_32);
DEFLIT(lit_31);
DEFLIT(lit_30);
DEFLIT(lit_29);
DEFLIT(lit_28);
DEFLIT(lit_27);
DEFLIT(lit_26);
DEFLIT(lit_25);
DEFLIT(lit_24);
DEFLIT(lit_23);
DEFLIT(lit_22);
DEFLIT(lit_21);
DEFLIT(lit_20);
DEFLIT(lit_19);
DEFLIT(lit_18);
DEFLIT(lit_17);
DEFLIT(lit_16);
DEFLIT(lit_15);
DEFLIT(lit_14);
DEFLIT(lit_13);
DEFLIT(lit_12);
DEFLIT(lit_11);
DEFLIT(lit_10);
DEFLIT(lit_9);
DEFLIT(lit_8);
DEFLIT(lit_7);
DEFLIT(lit_6);
DEFLIT(lit_5);
DEFLIT(lit_4);
DEFLIT(lit_3);
DEFLIT(lit_2);
DEFLIT(lit_1);
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
LOCFOR(fun_x_1212_50);
LOCFOR(fun_51);
LOCFOR(fun_sexpr_monitor_expand_52);
FUNFOR(YsyntaxYfind_option);
LOCFOR(fun_x_1214_54);
LOCFOR(fun_55);
LOCFOR(fun_sexpr_monitor_type_56);
LOCFOR(fun_x_1218_57);
LOCFOR(fun_58);
LOCFOR(fun_x_1216_59);
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
LOCFOR(fun_sexpr_slotQ_106);
LOCFOR(fun_sexpr_slot_object_107);
LOCFOR(fun_sexpr_slot_variable_108);
LOCFOR(fun_sexpr_slot_init_109);
LOCFOR(fun_sexpr_make_getter_110);
LOCFOR(fun_sexpr_make_setter_111);
LOCFOR(fun_sexpr_make_setter_name_112);
LOCFOR(fun_sexpr_macroQ_113);
LOCFOR(fun_sexpr_macro_expandQ_114);
LOCFOR(fun_sexpr_make_syntax_if_115);
FUNFOR(YsyntaxYsexpr_expand_backquote);
LOCFOR(fun_sexpr_build_backquote_expander_117);
LOCFOR(fun_sexpr_unquoteQ_118);
LOCFOR(fun_sexpr_unquote_splicingQ_119);
LOCFOR(fun_sexpr_backquoteQ_120);
LOCFOR(fun_sexpr_atomQ_121);
LOCFOR(fun_nreconc_122);
LOCFOR(fun_loop_123);
LOCFOR(fun_124);
LOCFOR(fun_bq_process_125);
LOCFOR(fun_bracket_126);
LOCFOR(fun_map_tree_127);
LOCFOR(fun_bq_remove_tokens_128);
LOCFOR(fun_sexpr_syntax_ifQ_129);
LOCFOR(fun_sexpr_syntax_if_value_130);
LOCFOR(fun_sexpr_syntax_if_pattern_131);
LOCFOR(fun_sexpr_syntax_if_then_132);
LOCFOR(fun_sexpr_syntax_if_else_133);
LOCFOR(fun_sexpr_pattern_variableQ_134);
LOCFOR(fun_sexpr_pattern_variable_name_135);
LOCFOR(fun_col_136);
LOCFOR(fun_sexpr_bind_pattern_variables_137);
LOCFOR(fun_sexpr_make_macro_function_138);
extern P YsyntaxY___main_0___ ();
extern P YsyntaxY___main_1___ ();
extern P YsyntaxY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_sexpr_self_evaluatingQ_0) {
  ARG(exp_, 0);
  P tmpF1134;
  P tmpF1133;
  P tmpF1132;
  P tmpF1131;
  P tmpF1130;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T15 = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLnumG));
  tmpF1130 = T15;
  if (tmpF1130 != YPfalse) {
    T1 = tmpF1130;
  } else {
    T14 = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLchrG));
    tmpF1131 = T14;
    if (tmpF1131 != YPfalse) {
      T3 = tmpF1131;
    } else {
      T13 = CALL2(CHKREF(YmacrosYEE),exp_,YPtrue);
      tmpF1132 = T13;
      if (tmpF1132 != YPfalse) {
        T5 = tmpF1132;
      } else {
        T12 = CALL2(CHKREF(YmacrosYEE),exp_,YPfalse);
        tmpF1133 = T12;
        if (tmpF1133 != YPfalse) {
          T7 = tmpF1133;
        } else {
          T11 = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLstrG));
          tmpF1134 = T11;
          if (tmpF1134 != YPfalse) {
            T9 = tmpF1134;
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
  P tmpF1135;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLlstG));
  tmpF1135 = T4;
  if (tmpF1135 != YPfalse) {
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
  T0 = CALL2(CHKREF(YmacrosYlst),CHKREF(YsyntaxYDsexpr_quote_tag),exp_);
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
  QRET(CHKREF(lit_2));
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
  P values_spec_indexF1136;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL2(CHKREF(YruntimeYpos),signature_,CHKREF(lit_10));
  values_spec_indexF1136 = T4;
  T3 = CALL2(CHKREF(YmacrosYEE),values_spec_indexF1136,CHKREF(Ynul));
  if (T3 != YPfalse) {
    T1 = signature_;
  } else {
    T2 = CALL3(CHKREF(YruntimeYsub),signature_,YPint((P)0),values_spec_indexF1136);
    T1 = T2;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_sexpr_signature_value_25) {
  ARG(signature_, 0);
  P valueF1138;
  P values_spec_indexF1137;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = CALL2(CHKREF(YruntimeYpos),signature_,CHKREF(lit_13));
  values_spec_indexF1137 = T12;
  T11 = CALL2(CHKREF(YmacrosYEE),values_spec_indexF1137,CHKREF(Ynul));
  if (T11 != YPfalse) {
    T1 = YPfalse;
  } else {
    T10 = CALL2(CHKREF(YruntimeYA),values_spec_indexF1137,YPint((P)1));
    T9 = CALL2(CHKREF(YruntimeYelt),signature_,T10);
    valueF1138 = T9;
    T8 = CALL2(CHKREF(YisaQ),valueF1138,CHKREF(YLlstG));
    if (T8 != YPfalse) {
      T7 = CALL1(CHKREF(Yhead),valueF1138);
      T6 = CALL2(CHKREF(YmacrosYEE),T7,CHKREF(lit_12));
      if (T6 != YPfalse) {
        T4 = CHKREF(lit_11);
      } else {
        T5 = CALL1(CHKREF(YruntimeY2nd),valueF1138);
        T4 = T5;
      }
      T3 = T4;
    } else {
      T3 = valueF1138;
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
  T2 = CALL1(CHKREF(YmacrosYlst),CHKREF(YsyntaxYDsexpr_method_tag));
  T1 = CALL1(CHKREF(YmacrosYlst),parameters_);
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
  T1 = CALL3(CHKREF(YmacrosYlst),CHKREF(YsyntaxYDsexpr_define_method_tag),name_,parameters_);
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
  T0 = CALLN(CHKREF(YmacrosYlst),4,CHKREF(YsyntaxYDsexpr_if_tag),test_,then_,else_);
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

FUNCODEDEF(fun_x_1212_50) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(Yerror),CHKREF(lit_22),FREEREF(0));
  T0 = CALL1(FREEREF(1),T1);
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  ARG(return_, 0);
  P x_1211F1148;
  P x_1211F1147;
  P x_1211F1146;
  P x_1211F1145;
  P optionsF1144;
  P bodyF1143;
  P handlerF1142;
  P optionsF1141;
  P x_1211F1140;
  P x_1212F1139;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T38 = FUNSHELL(0,fun_x_1212_50,2);
  x_1212F1139 = T38;
  FUNINIT(x_1212F1139, 2,FREEREF(0),return_);
  x_1211F1140 = FREEREF(0);
  optionsF1141 = YPfalse;
  optionsF1141 = BOXFAB(optionsF1141);
  handlerF1142 = YPfalse;
  handlerF1142 = BOXFAB(handlerF1142);
  bodyF1143 = YPfalse;
  bodyF1143 = BOXFAB(bodyF1143);
  T19 = CALL2(CHKREF(YisaQ),x_1211F1140,CHKREF(YLlstG));
  if (T19 != YPfalse) {
    T18 = CALL3(CHKREF(YmacrosYmatch_atom),x_1211F1140,CHKREF(lit_21),x_1212F1139);
    x_1211F1145 = T18;
    T16 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1211F1145,x_1212F1139);
    BOXVAL(optionsF1141) = T16;
    T17 = CALL1(CHKREF(Ytail),x_1211F1145);
    x_1211F1146 = T17;
    T14 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1211F1146,x_1212F1139);
    BOXVAL(handlerF1142) = T14;
    T15 = CALL1(CHKREF(Ytail),x_1211F1146);
    x_1211F1147 = T15;
    BOXVAL(bodyF1143) = x_1211F1147;
    x_1211F1148 = Ynil;
    T13 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1211F1148,x_1212F1139);
    T12 = T13;
    T11 = T12;
    T10 = T11;
    T9 = T10;
  } else {
    T8 = CALL2(x_1212F1139,CHKREF(lit_20),x_1211F1140);
  }
  T37 = BOXVAL(optionsF1141);
  T36 = CALL2(CHKREF(YisaQ),T37,CHKREF(YLsymG));
  if (T36 != YPfalse) {
    T35 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_19));
    T34 = BOXVAL(optionsF1141);
    T33 = CALL1(CHKREF(YmacrosYlst),T34);
    T32 = CALL3(CHKREF(YmacrosYcat),T35,T33,Ynil);
    T31 = CALL1(CHKREF(YmacrosYlst),T32);
    T30 = CALL2(CHKREF(YmacrosYcat),T31,Ynil);
    T28 = T30;
  } else {
    T29 = BOXVAL(optionsF1141);
    T28 = T29;
  }
  optionsF1144 = T28;
  T27 = CALL1(CHKREF(YsyntaxYsexpr_monitor_type),optionsF1144);
  T26 = CALL1(CHKREF(YsyntaxYsexpr_monitor_info),optionsF1144);
  T25 = CALL1(CHKREF(YsyntaxYsexpr_monitor_test),optionsF1144);
  T24 = BOXVAL(handlerF1142);
  T23 = BOXVAL(bodyF1143);
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

FUNCODEDEF(fun_x_1214_54) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(Yerror),CHKREF(lit_24),FREEREF(0));
  T0 = CALL1(FREEREF(1),T1);
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  ARG(return_, 0);
  P x_1213F1152;
  P typeF1151;
  P x_1213F1150;
  P x_1214F1149;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T11 = FUNSHELL(0,fun_x_1214_54,2);
  x_1214F1149 = T11;
  FUNINIT(x_1214F1149, 2,FREEREF(0),return_);
  x_1213F1150 = FREEREF(0);
  typeF1151 = YPfalse;
  typeF1151 = BOXFAB(typeF1151);
  T9 = CALL2(CHKREF(YisaQ),x_1213F1150,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T7 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1213F1150,x_1214F1149);
    BOXVAL(typeF1151) = T7;
    T8 = CALL1(CHKREF(Ytail),x_1213F1150);
    x_1213F1152 = T8;
    T6 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1213F1152,x_1214F1149);
    T5 = T6;
  } else {
    T4 = CALL2(x_1214F1149,CHKREF(lit_23),x_1213F1150);
  }
  T10 = BOXVAL(typeF1151);
  T2 = T10;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_type_56) {
  ARG(options_, 0);
  P type_listF1153;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL3(CHKREF(YsyntaxYfind_option),options_,CHKREF(lit_26),CHKREF(lit_25));
  type_listF1153 = T3;
  T2 = FUNFAB(fun_55,1,type_listF1153);
  T1 = with_exit(T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1218_57) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(Yerror),CHKREF(lit_36),FREEREF(0));
  T0 = CALL1(FREEREF(1),T1);
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  ARG(return_, 0);
  P x_1217F1159;
  P x_1217F1158;
  P argumentsF1157;
  P messageF1156;
  P x_1217F1155;
  P x_1218F1154;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T30 = FUNSHELL(0,fun_x_1218_57,2);
  x_1218F1154 = T30;
  FUNINIT(x_1218F1154, 2,FREEREF(0),return_);
  x_1217F1155 = FREEREF(0);
  messageF1156 = YPfalse;
  messageF1156 = BOXFAB(messageF1156);
  argumentsF1157 = YPfalse;
  argumentsF1157 = BOXFAB(argumentsF1157);
  T12 = CALL2(CHKREF(YisaQ),x_1217F1155,CHKREF(YLlstG));
  if (T12 != YPfalse) {
    T10 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1217F1155,x_1218F1154);
    BOXVAL(messageF1156) = T10;
    T11 = CALL1(CHKREF(Ytail),x_1217F1155);
    x_1217F1158 = T11;
    BOXVAL(argumentsF1157) = x_1217F1158;
    x_1217F1159 = Ynil;
    T9 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1217F1159,x_1218F1154);
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1218F1154,CHKREF(lit_35),x_1217F1155);
  }
  T29 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_34));
  T28 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_33));
  T27 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_32));
  T26 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_31));
  T25 = BOXVAL(messageF1156);
  T24 = CALL1(CHKREF(YmacrosYlst),T25);
  T23 = CALLN(CHKREF(YmacrosYcat),4,T27,T26,T24,Ynil);
  T22 = CALL1(CHKREF(YmacrosYlst),T23);
  T21 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_30));
  T20 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_29));
  T19 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_28));
  T18 = BOXVAL(argumentsF1157);
  T17 = CALL3(CHKREF(YmacrosYcat),T19,T18,Ynil);
  T16 = CALL1(CHKREF(YmacrosYlst),T17);
  T15 = CALLN(CHKREF(YmacrosYcat),4,T21,T20,T16,Ynil);
  T14 = CALL1(CHKREF(YmacrosYlst),T15);
  T13 = CALLN(CHKREF(YmacrosYcat),5,T29,T28,T22,T14,Ynil);
  T4 = T13;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1216_59) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(Yerror),CHKREF(lit_38),FREEREF(0));
  T0 = CALL1(FREEREF(1),T1);
  QRET(T0);
}

FUNCODEDEF(fun_60) {
  ARG(return_, 0);
  P x_1215F1163;
  P info_exprF1162;
  P x_1215F1161;
  P x_1216F1160;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T11 = FUNSHELL(0,fun_x_1216_59,2);
  x_1216F1160 = T11;
  FUNINIT(x_1216F1160, 2,FREEREF(0),return_);
  x_1215F1161 = FREEREF(0);
  info_exprF1162 = YPfalse;
  info_exprF1162 = BOXFAB(info_exprF1162);
  T9 = CALL2(CHKREF(YisaQ),x_1215F1161,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T7 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1215F1161,x_1216F1160);
    BOXVAL(info_exprF1162) = T7;
    T8 = CALL1(CHKREF(Ytail),x_1215F1161);
    x_1215F1163 = T8;
    T6 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1215F1163,x_1216F1160);
    T5 = T6;
  } else {
    T4 = CALL2(x_1216F1160,CHKREF(lit_37),x_1215F1161);
  }
  T10 = BOXVAL(info_exprF1162);
  T2 = T10;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_info_61) {
  ARG(options_, 0);
  P tmpF1166;
  P descriptionF1165;
  P infoF1164;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T14 = CALL3(CHKREF(YsyntaxYfind_option),options_,CHKREF(lit_41),YPfalse);
  infoF1164 = T14;
  T13 = CALL3(CHKREF(YsyntaxYfind_option),options_,CHKREF(lit_40),YPfalse);
  descriptionF1165 = T13;
  tmpF1166 = infoF1164;
  if (tmpF1166 != YPfalse) {
    T12 = descriptionF1165;
  } else {
    T12 = YPfalse;
  }
  T11 = T12;
  if (T11 != YPfalse) {
    T10 = CALL2(CHKREF(Yerror),CHKREF(lit_39),options_);
    T2 = T10;
  } else {
    if (infoF1164 != YPfalse) {
      T9 = FUNFAB(fun_60,1,infoF1164);
      T8 = with_exit(T9);
      T3 = T8;
    } else {
      if (descriptionF1165 != YPfalse) {
        T7 = FUNFAB(fun_58,1,descriptionF1165);
        T6 = with_exit(T7);
        T4 = T6;
      } else {
        if (YPtrue != YPfalse) {
          T5 = CHKREF(lit_27);
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
  P test_bodyF1167;
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL3(CHKREF(YsyntaxYfind_option),options_,CHKREF(lit_43),CHKREF(lit_42));
  test_bodyF1167 = T2;
  T1 = CALL2(CHKREF(YsyntaxYsexpr_make_anonymous_method),Ynil,test_bodyF1167);
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
  P tmpF1168;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLlstG));
  tmpF1168 = T4;
  if (tmpF1168 != YPfalse) {
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
  T1 = CALL1(CHKREF(YmacrosYlst),op_);
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
  P tmpF1170;
  P nameF1169;
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
    nameF1169 = T25;
    T24 = CALL2(CHKREF(YisaQ),nameF1169,CHKREF(YLlstG));
    tmpF1170 = T24;
    if (tmpF1170 != YPfalse) {
      T23 = CALL1(CHKREF(Ytail),nameF1169);
      T22 = CALL1(CHKREF(Yhead),T23);
      T21 = CALL2(CHKREF(YmacrosYEE),T22,CHKREF(lit_49));
      T20 = T21;
    } else {
      T20 = YPfalse;
    }
    T19 = T20;
    if (T19 != YPfalse) {
      T18 = CALL1(CHKREF(Yhead),nameF1169);
      T17 = CALL2(CHKREF(YmacrosYlst),T18,CHKREF(lit_48));
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
      T11 = CALL2(CHKREF(YmacrosYpair),nameF1169,rtnames_);
      T10 = CALL2(CHKREF(YmacrosYpair),FREEREF(0),T11);
      T9 = CALL2(CHKREF(YmacrosYlst),CHKREF(lit_47),FREEREF(0));
      T8 = CALL2(CHKREF(YmacrosYlst),CHKREF(lit_46),FREEREF(0));
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
  P tmpF1180;
  P tup34F1179;
  P rtvaluesF1178;
  P tup34F1177;
  P rtnamesF1176;
  P tup34F1175;
  P innerF1174;
  P tupnameF1173;
  P valueF1172;
  P nameF1171;
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
    nameF1171 = T37;
    T36 = CALL1(CHKREF(Yhead),vals_);
    valueF1172 = T36;
    T35 = CALL2(CHKREF(YisaQ),nameF1171,CHKREF(YLlstG));
    tmpF1180 = T35;
    if (tmpF1180 != YPfalse) {
      T34 = CALL1(CHKREF(Yhead),nameF1171);
      T33 = CALL2(CHKREF(YmacrosYEE),T34,CHKREF(lit_51));
      T32 = T33;
    } else {
      T32 = YPfalse;
    }
    T31 = T32;
    if (T31 != YPfalse) {
      T30 = CALL1(CHKREF(YsyntaxYsexpr_unique_name),CHKREF(lit_50));
      tupnameF1173 = T30;
      T29 = FUNSHELL(1,fun_inner_84,2);
      innerF1174 = T29;
      FUNINIT(innerF1174, 2,tupnameF1173,innerF1174);
      T28 = CALL1(CHKREF(YmacrosYlst),tupnameF1173);
      T27 = CALL1(CHKREF(YmacrosYlst),valueF1172);
      T26 = CALL1(CHKREF(Ytail),nameF1171);
      T25 = KCALLN(innerF1174,4,T28,T27,YPint((P)0),T26);
      T24 = T25;
      tup34F1175 = T24;
      T23 = CALL1(CHKREF(Yhead),tup34F1175);
      rtnamesF1176 = T23;
      T22 = CALL1(CHKREF(Ytail),tup34F1175);
      tup34F1177 = T22;
      T21 = CALL1(CHKREF(Yhead),tup34F1177);
      rtvaluesF1178 = T21;
      T20 = CALL1(CHKREF(Ytail),tup34F1177);
      tup34F1179 = T20;
      T19 = CALL2(CHKREF(YmacrosYcat),rtnamesF1176,rnames_);
      T18 = CALL2(CHKREF(YmacrosYcat),rtvaluesF1178,rvalues_);
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
      T8 = CALL2(CHKREF(YmacrosYpair),nameF1171,rnames_);
      T7 = CALL2(CHKREF(YmacrosYpair),valueF1172,rvalues_);
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
  P loopF1181;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_loop_85,1);
  loopF1181 = T2;
  FUNINIT(loopF1181, 1,loopF1181);
  T1 = KCALLN(loopF1181,4,Ynil,Ynil,names_,vals_);
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
    T8 = CALL1(CHKREF(YmacrosYlst),T9);
    T7 = CALL1(CHKREF(Ytail),names_);
    T6 = CALL1(CHKREF(Ytail),values_);
    T5 = KCALL2(FREEREF(0),T7,T6);
    T4 = CALL3(CHKREF(YmacrosYlst),CHKREF(YsyntaxYDsexpr_method_tag),T8,T5);
    T3 = CALL1(CHKREF(Yhead),values_);
    T2 = CALL1(CHKREF(YmacrosYlst),T3);
    T1 = CALL2(CHKREF(YmacrosYpair),T4,T2);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_let_Gcombination_88) {
  ARG(let_exp_, 0);
  P colF1190;
  P tup35F1189;
  P valuesF1188;
  P tup35F1187;
  P namesF1186;
  P tup35F1185;
  P bodyF1184;
  P ovaluesF1183;
  P onamesF1182;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
loop:
  T18 = CALL1(CHKREF(YsyntaxYsexpr_let_bound_variables),let_exp_);
  onamesF1182 = T18;
  T17 = CALL1(CHKREF(YsyntaxYsexpr_let_values),let_exp_);
  ovaluesF1183 = T17;
  T16 = CALL1(CHKREF(YsyntaxYsexpr_let_body),let_exp_);
  bodyF1184 = T16;
  T15 = CALL2(CHKREF(YsyntaxYsexpr_let_namesAvalues),onamesF1182,ovaluesF1183);
  tup35F1185 = T15;
  T14 = CALL1(CHKREF(Yhead),tup35F1185);
  namesF1186 = T14;
  T13 = CALL1(CHKREF(Ytail),tup35F1185);
  tup35F1187 = T13;
  T12 = CALL1(CHKREF(Yhead),tup35F1187);
  valuesF1188 = T12;
  T11 = CALL1(CHKREF(Ytail),tup35F1187);
  tup35F1189 = T11;
  T10 = FUNSHELL(1,fun_col_87,2);
  colF1190 = T10;
  FUNINIT(colF1190, 2,colF1190,bodyF1184);
  T9 = KCALL2(colF1190,namesF1186,valuesF1188);
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
  P sigF1191;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T9 = CALL1(CHKREF(YruntimeY3rd),rep_exp_);
  sigF1191 = T9;
  T8 = CALL1(CHKREF(YsyntaxYsexpr_signature_parameters),sigF1191);
  T7 = CALL2(CHKREF(YmacrosYmap),CHKREF(YruntimeY1st),T8);
  T6 = CALL1(CHKREF(YsyntaxYsexpr_signature_value),sigF1191);
  if (T6 != YPfalse) {
    T4 = Ynil;
  } else {
    T5 = CALL1(CHKREF(YmacrosYlst),CHKREF(YsyntaxYDsexpr_values_tag));
    T4 = T5;
  }
  T3 = CALL1(CHKREF(YsyntaxYsexpr_signature_value),sigF1191);
  T2 = CALL1(CHKREF(YmacrosYlst),T3);
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
  P initsF1195;
  P bodyF1194;
  P sigF1193;
  P nameF1192;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T13 = CALL1(CHKREF(YsyntaxYsexpr_iterate_name),rep_exp_);
  nameF1192 = T13;
  T12 = CALL1(CHKREF(YsyntaxYsexpr_iterate_signature),rep_exp_);
  sigF1193 = T12;
  T11 = CALL1(CHKREF(YsyntaxYsexpr_iterate_body),rep_exp_);
  bodyF1194 = T11;
  T10 = CALL1(CHKREF(YsyntaxYsexpr_iterate_inits),rep_exp_);
  initsF1195 = T10;
  T9 = CALL2(CHKREF(YmacrosYlst),nameF1192,sigF1193);
  T8 = CALL2(CHKREF(YmacrosYcat),T9,bodyF1194);
  T7 = CALL1(CHKREF(YmacrosYlst),T8);
  T6 = CALL1(CHKREF(YmacrosYlst),nameF1192);
  T5 = CALL2(CHKREF(YmacrosYcat),T6,initsF1195);
  T4 = CALL3(CHKREF(YmacrosYlst),CHKREF(YsyntaxYDsexpr_locals_tag),T7,T5);
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
  P parentsF1196;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL1(CHKREF(YruntimeY2nd),exp_);
  parentsF1196 = T4;
  T3 = CALL2(CHKREF(YisaQ),parentsF1196,CHKREF(YLlstG));
  if (T3 != YPfalse) {
    T1 = parentsF1196;
  } else {
    T2 = CALL1(CHKREF(YmacrosYlst),parentsF1196);
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

FUNCODEDEF(fun_sexpr_slotQ_106) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_slot_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_slot_object_107) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_slot_variable_108) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY3rd),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_slot_init_109) {
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
    T0 = CHKREF(lit_57);
  }
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_make_getter_110) {
  ARG(type_, 0);
  ARG(name_, 1);
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL2(CHKREF(YmacrosYlst),CHKREF(lit_60),type_);
  T3 = CALL1(CHKREF(YmacrosYlst),T4);
  T2 = CALL3(CHKREF(YmacrosYlst),CHKREF(lit_59),CHKREF(lit_58),name_);
  T1 = CALL1(CHKREF(YmacrosYlst),T2);
  T0 = CALL3(CHKREF(YsyntaxYsexpr_make_method),name_,T3,T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_setter_111) {
  ARG(slot_type_, 0);
  ARG(type_, 1);
  ARG(name_, 2);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T6 = CALL1(CHKREF(YsyntaxYsexpr_make_setter_name),name_);
  T5 = CALL2(CHKREF(YmacrosYlst),CHKREF(lit_65),slot_type_);
  T4 = CALL2(CHKREF(YmacrosYlst),CHKREF(lit_64),type_);
  T3 = CALL2(CHKREF(YmacrosYlst),T5,T4);
  T2 = CALLN(CHKREF(YmacrosYlst),4,CHKREF(lit_63),CHKREF(lit_62),CHKREF(lit_61),name_);
  T1 = CALL1(CHKREF(YmacrosYlst),T2);
  T0 = CALL3(CHKREF(YsyntaxYsexpr_make_method),T6,T3,T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_setter_name_112) {
  ARG(name_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),name_);
  T1 = CALL2(CHKREF(YmacrosYcat),T2,CHKREF(lit_66));
  T0 = CALL2(CHKREF(YruntimeYas),CHKREF(YLsymG),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_macroQ_113) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_macro_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_macro_expandQ_114) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_macro_expand_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_syntax_if_115) {
  ARG(else_, 0);
  ARG(then_, 1);
  ARG(exp_, 2);
  ARG(pat_, 3);
  P T1,T0;
  P a1,a2,a3,a4;
loop:
  T1 = CALL2(CHKREF(YmacrosYlst),pat_,exp_);
  T0 = CALLN(CHKREF(YmacrosYlst),4,CHKREF(YsyntaxYDsexpr_syntax_if_tag),T1,then_,else_);
  RET(T0);
}

FUNCODEDEF(YsyntaxYsexpr_expand_backquote) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YsyntaxYsexpr_build_backquote_expander),x_);
  T0 = CALL1(CHKREF(YsyntaxYeval),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_build_backquote_expander_117) {
  ARG(x_, 0);
  P resF1198;
  P raw_resultF1197;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL1(CHKREF(YsyntaxYbq_process),x_);
  raw_resultF1197 = T3;
  T2 = CALL1(CHKREF(YsyntaxYbq_remove_tokens),raw_resultF1197);
  resF1198 = T2;
  T1 = resF1198;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unquoteQ_118) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),x_,CHKREF(lit_76));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unquote_splicingQ_119) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),x_,CHKREF(lit_77));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_backquoteQ_120) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),x_,CHKREF(YsyntaxYDsexpr_quasiquote_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_atomQ_121) {
  ARG(x_, 0);
  P tmpF1199;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL2(CHKREF(YisaQ),x_,CHKREF(YLlstG));
  T3 = CALL1(CHKREF(Ynot),T4);
  tmpF1199 = T3;
  if (tmpF1199 != YPfalse) {
    T1 = tmpF1199;
  } else {
    T2 = CALL2(CHKREF(YmacrosYEE),x_,Ynil);
    T1 = T2;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_nreconc_122) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YruntimeYrevX),x_);
  T0 = CALL2(CHKREF(YruntimeYcatX),T1,y_);
  RET(T0);
}

FUNCODEDEF(fun_loop_123) {
  ARG(q_, 0);
  ARG(p_, 1);
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T26 = CALL1(CHKREF(YsyntaxYsexpr_atomQ),p_);
  if (T26 != YPfalse) {
    T25 = CALL2(CHKREF(YmacrosYlst),CHKREF(YsyntaxYTbq_quoteT),p_);
    T24 = CALL1(CHKREF(YmacrosYlst),T25);
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
        T1 = CALL2(CHKREF(Yerror),CHKREF(lit_79),p_);
      } else {
      }
      T11 = CALL1(CHKREF(Ytail),p_);
      T10 = CALL1(CHKREF(Yhead),T11);
      T9 = CALL1(CHKREF(YmacrosYlst),T10);
      T8 = CALL2(CHKREF(YsyntaxYnreconc),q_,T9);
      T7 = CALL2(CHKREF(YmacrosYpair),CHKREF(YsyntaxYTbq_appendT),T8);
      T6 = CALL1(FREEREF(1),T7);
    } else {
    }
    T15 = CALL1(CHKREF(Ytail),p_);
    T14 = CALL2(CHKREF(YmacrosYEE),T15,CHKREF(YsyntaxYTcomma_atsignT));
    if (T14 != YPfalse) {
      T13 = CALL2(CHKREF(Yerror),CHKREF(lit_78),p_);
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

FUNCODEDEF(fun_124) {
  ARG(return_, 0);
  P loopF1200;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_loop_123,2);
  loopF1200 = T2;
  FUNINIT(loopF1200, 2,loopF1200,return_);
  T1 = KCALL2(loopF1200,FREEREF(0),Ynil);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_bq_process_125) {
  ARG(x_, 0);
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T21 = CALL1(CHKREF(YsyntaxYsexpr_atomQ),x_);
  if (T21 != YPfalse) {
    T20 = CALL2(CHKREF(YmacrosYlst),CHKREF(YsyntaxYTbq_quoteT),x_);
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
          T7 = CALL2(CHKREF(Yerror),CHKREF(lit_80),T8);
          T3 = T7;
        } else {
          if (YPtrue != YPfalse) {
            T6 = FUNFAB(fun_124,1,x_);
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

FUNCODEDEF(fun_bracket_126) {
  ARG(x_, 0);
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
loop:
  T16 = CALL1(CHKREF(YsyntaxYsexpr_atomQ),x_);
  if (T16 != YPfalse) {
    T15 = CALL1(CHKREF(YsyntaxYbq_process),x_);
    T14 = CALL2(CHKREF(YmacrosYlst),CHKREF(YsyntaxYTbq_listT),T15);
    T0 = T14;
  } else {
    T13 = CALL1(CHKREF(YsyntaxYsexpr_unquoteQ),x_);
    if (T13 != YPfalse) {
      T12 = CALL1(CHKREF(Ytail),x_);
      T11 = CALL1(CHKREF(Yhead),T12);
      T10 = CALL2(CHKREF(YmacrosYlst),CHKREF(YsyntaxYTbq_listT),T11);
      T1 = T10;
    } else {
      T9 = CALL1(CHKREF(YsyntaxYsexpr_unquote_splicingQ),x_);
      if (T9 != YPfalse) {
        T8 = CALL1(CHKREF(Ytail),x_);
        T7 = CALL1(CHKREF(Yhead),T8);
        T6 = CALL2(CHKREF(YmacrosYlst),CHKREF(YsyntaxYTbq_clobberableT),T7);
        T2 = T6;
      } else {
        if (YPtrue != YPfalse) {
          T5 = CALL1(CHKREF(YsyntaxYbq_process),x_);
          T4 = CALL2(CHKREF(YmacrosYlst),CHKREF(YsyntaxYTbq_listT),T5);
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

FUNCODEDEF(fun_map_tree_127) {
  ARG(x_, 0);
  ARG(fn_, 1);
  P tmpF1203;
  P dF1202;
  P aF1201;
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
    aF1201 = T13;
    T12 = CALL1(CHKREF(Ytail),x_);
    T11 = CALL2(CHKREF(YsyntaxYmap_tree),fn_,T12);
    dF1202 = T11;
    T10 = CALL1(CHKREF(Yhead),x_);
    T9 = CALL2(CHKREF(YruntimeYE),aF1201,T10);
    tmpF1203 = T9;
    if (tmpF1203 != YPfalse) {
      T8 = CALL1(CHKREF(Ytail),x_);
      T7 = CALL2(CHKREF(YruntimeYE),dF1202,T8);
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T5 = T6;
    if (T5 != YPfalse) {
      T3 = x_;
    } else {
      T4 = CALL2(CHKREF(YmacrosYpair),aF1201,dF1202);
      T3 = T4;
    }
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_bq_remove_tokens_128) {
  ARG(x_, 0);
  P tmpF1205;
  P tmpF1204;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T37 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YsyntaxYTbq_listT));
  if (T37 != YPfalse) {
    T0 = CHKREF(lit_86);
  } else {
    T36 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YsyntaxYTbq_appendT));
    if (T36 != YPfalse) {
      T1 = CHKREF(lit_85);
    } else {
      T35 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YsyntaxYTbq_nconcT));
      if (T35 != YPfalse) {
        T2 = CHKREF(lit_84);
      } else {
        T34 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YsyntaxYTbq_listTT));
        if (T34 != YPfalse) {
          T3 = CHKREF(lit_83);
        } else {
          T33 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YsyntaxYTbq_quoteT));
          if (T33 != YPfalse) {
            T4 = CHKREF(lit_82);
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
                tmpF1204 = T25;
                if (tmpF1204 != YPfalse) {
                  T24 = CALL1(CHKREF(Ytail),x_);
                  T23 = CALL1(CHKREF(Ytail),T24);
                  T22 = CALL1(CHKREF(YmacrosYemptyQ),T23);
                  T21 = CALL1(CHKREF(Ynot),T22);
                  tmpF1205 = T21;
                  if (tmpF1205 != YPfalse) {
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
                  T10 = CALL2(CHKREF(YmacrosYpair),CHKREF(lit_81),T11);
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

FUNCODEDEF(fun_sexpr_syntax_ifQ_129) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_syntax_if_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_value_130) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeY2nd),exp_);
  T0 = CALL1(CHKREF(YruntimeY2nd),T1);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_pattern_131) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeY2nd),exp_);
  T0 = CALL1(CHKREF(YruntimeY1st),T1);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_then_132) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY3rd),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_else_133) {
  ARG(exp_, 0);
  P altF1206;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL2(CHKREF(YruntimeYelt),exp_,YPint((P)3));
  altF1206 = T3;
  T2 = CALL2(CHKREF(YmacrosYEE),altF1206,CHKREF(Ynul));
  if (T2 != YPfalse) {
    T1 = YPfalse;
  } else {
    T1 = altF1206;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_pattern_variableQ_134) {
  ARG(pat_, 0);
  P tmpF1207;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL1(CHKREF(YsyntaxYsexpr_unquoteQ),pat_);
  tmpF1207 = T3;
  if (tmpF1207 != YPfalse) {
    T1 = tmpF1207;
  } else {
    T2 = CALL1(CHKREF(YsyntaxYsexpr_unquote_splicingQ),pat_);
    T1 = T2;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_sexpr_pattern_variable_name_135) {
  ARG(pat_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),pat_);
  QRET(T0);
}

FUNCODEDEF(fun_col_136) {
  ARG(pat_, 0);
  P tmpF1209;
  P xF1208;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
loop:
  T18 = CALL2(CHKREF(YisaQ),pat_,CHKREF(YLlstG));
  T17 = CALL1(CHKREF(Ynot),T18);
  tmpF1209 = T17;
  if (tmpF1209 != YPfalse) {
    T15 = tmpF1209;
  } else {
    T16 = CALL1(CHKREF(YmacrosYemptyQ),pat_);
    T15 = T16;
  }
  T14 = T15;
  if (T14 != YPfalse) {
    T0 = Ynil;
  } else {
    T13 = CALL1(CHKREF(Yhead),pat_);
    xF1208 = T13;
    T12 = CALL1(CHKREF(YsyntaxYsexpr_pattern_variableQ),xF1208);
    if (T12 != YPfalse) {
      T11 = CALL1(CHKREF(YsyntaxYsexpr_pattern_variable_name),xF1208);
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

FUNCODEDEF(fun_sexpr_bind_pattern_variables_137) {
  ARG(pat_, 0);
  P colF1210;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = FUNSHELL(1,fun_col_136,1);
  colF1210 = T3;
  FUNINIT(colF1210, 1,colF1210);
  T2 = KCALL1(colF1210,pat_);
  T1 = T2;
  T0 = CALL1(CHKREF(YruntimeYdel_dups),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_macro_function_138) {
  ARG(exp_, 0);
  P funcF1212;
  P mifF1211;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = CALL1(CHKREF(YsyntaxYsexpr_method_parameters),exp_);
  T7 = CALL1(CHKREF(YsyntaxYsexpr_method_body),exp_);
  T6 = CALL1(CHKREF(YsyntaxYsexpr_sequence_Gbegin),T7);
  T5 = CALLN(CHKREF(YsyntaxYsexpr_make_syntax_if),4,T8,CHKREF(lit_88),T6,YPfalse);
  mifF1211 = T5;
  T4 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_87));
  T3 = CALL1(CHKREF(YmacrosYlst),mifF1211);
  T2 = CALL2(CHKREF(YsyntaxYsexpr_make_anonymous_method),T4,T3);
  funcF1212 = T2;
  T1 = funcF1212;
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
  T0 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_self_evaluatingQ_0 = YPmet(FUNCODEREF(fun_sexpr_self_evaluatingQ_0),YPPsym((P)"sexpr-self-evaluating?"),T0,ENVNUL);
  T4 = BOUNDP(YsyntaxYsexpr_self_evaluatingQ);
  if (T4 != YPfalse) {
    T3 = CHKREF(YsyntaxYsexpr_self_evaluatingQ);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_sexpr_self_evaluatingQ_0;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YsyntaxYsexpr_self_evaluatingQ = T1;
  regsym(&YsyntaxYsexpr_self_evaluatingQ,"syntax","sexpr-self-evaluating?");
  T5 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_variableQ_1 = YPmet(FUNCODEREF(fun_sexpr_variableQ_1),YPPsym((P)"sexpr-variable?"),T5,ENVNUL);
  T9 = BOUNDP(YsyntaxYsexpr_variableQ);
  if (T9 != YPfalse) {
    T8 = CHKREF(YsyntaxYsexpr_variableQ);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_sexpr_variableQ_1;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  YsyntaxYsexpr_variableQ = T6;
  regsym(&YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
  T10 = YPsig(YPpair(YPPsym((P)"exp"),YPpair(YPPsym((P)"tag"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_sexpr_tagged_listQ_2 = YPmet(FUNCODEREF(fun_sexpr_tagged_listQ_2),YPPsym((P)"sexpr-tagged-list?"),T10,ENVNUL);
  T14 = BOUNDP(YsyntaxYsexpr_tagged_listQ);
  if (T14 != YPfalse) {
    T13 = CHKREF(YsyntaxYsexpr_tagged_listQ);
  } else {
    T13 = YPfalse;
  }
  T12 = fun_sexpr_tagged_listQ_2;
  T11 = CALL2(CHKREF(YPdefine_method),T13,T12);
  YsyntaxYsexpr_tagged_listQ = T11;
  regsym(&YsyntaxYsexpr_tagged_listQ,"syntax","sexpr-tagged-list?");
  lit_0 = YPPsym((P)"quote");
  YsyntaxYDsexpr_quote_tag = CHKREF(lit_0);
  regsym(&YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
  T15 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_quotedQ_3 = YPmet(FUNCODEREF(fun_sexpr_quotedQ_3),YPPsym((P)"sexpr-quoted?"),T15,ENVNUL);
  T19 = BOUNDP(YsyntaxYsexpr_quotedQ);
  if (T19 != YPfalse) {
    T18 = CHKREF(YsyntaxYsexpr_quotedQ);
  } else {
    T18 = YPfalse;
  }
  T17 = fun_sexpr_quotedQ_3;
  T16 = CALL2(CHKREF(YPdefine_method),T18,T17);
  YsyntaxYsexpr_quotedQ = T16;
  regsym(&YsyntaxYsexpr_quotedQ,"syntax","sexpr-quoted?");
  T20 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_make_quote_4 = YPmet(FUNCODEREF(fun_sexpr_make_quote_4),YPPsym((P)"sexpr-make-quote"),T20,ENVNUL);
  T24 = BOUNDP(YsyntaxYsexpr_make_quote);
  if (T24 != YPfalse) {
    T23 = CHKREF(YsyntaxYsexpr_make_quote);
  } else {
    T23 = YPfalse;
  }
  T22 = fun_sexpr_make_quote_4;
  T21 = CALL2(CHKREF(YPdefine_method),T23,T22);
  YsyntaxYsexpr_make_quote = T21;
  regsym(&YsyntaxYsexpr_make_quote,"syntax","sexpr-make-quote");
  T25 = YPsig(YPpair(YPPsym((P)"quot"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_text_of_quotation_5 = YPmet(FUNCODEREF(fun_sexpr_text_of_quotation_5),YPPsym((P)"sexpr-text-of-quotation"),T25,ENVNUL);
  T29 = BOUNDP(YsyntaxYsexpr_text_of_quotation);
  if (T29 != YPfalse) {
    T28 = CHKREF(YsyntaxYsexpr_text_of_quotation);
  } else {
    T28 = YPfalse;
  }
  T27 = fun_sexpr_text_of_quotation_5;
  T26 = CALL2(CHKREF(YPdefine_method),T28,T27);
  YsyntaxYsexpr_text_of_quotation = T26;
  regsym(&YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
  lit_1 = YPPsym((P)"set");
  YsyntaxYDsexpr_set_tag = CHKREF(lit_1);
  regsym(&YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
  T30 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_assignmentQ_6 = YPmet(FUNCODEREF(fun_sexpr_assignmentQ_6),YPPsym((P)"sexpr-assignment?"),T30,ENVNUL);
  T34 = BOUNDP(YsyntaxYsexpr_assignmentQ);
  if (T34 != YPfalse) {
    T33 = CHKREF(YsyntaxYsexpr_assignmentQ);
  } else {
    T33 = YPfalse;
  }
  T32 = fun_sexpr_assignmentQ_6;
  T31 = CALL2(CHKREF(YPdefine_method),T33,T32);
  YsyntaxYsexpr_assignmentQ = T31;
  regsym(&YsyntaxYsexpr_assignmentQ,"syntax","sexpr-assignment?");
  T35 = YPsig(YPpair(YPPsym((P)"assn"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_assignment_variable_7 = YPmet(FUNCODEREF(fun_sexpr_assignment_variable_7),YPPsym((P)"sexpr-assignment-variable"),T35,ENVNUL);
  T39 = BOUNDP(YsyntaxYsexpr_assignment_variable);
  if (T39 != YPfalse) {
    T38 = CHKREF(YsyntaxYsexpr_assignment_variable);
  } else {
    T38 = YPfalse;
  }
  T37 = fun_sexpr_assignment_variable_7;
  T36 = CALL2(CHKREF(YPdefine_method),T38,T37);
  YsyntaxYsexpr_assignment_variable = T36;
  regsym(&YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
  T40 = YPsig(YPpair(YPPsym((P)"assn"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_assignment_value_8 = YPmet(FUNCODEREF(fun_sexpr_assignment_value_8),YPPsym((P)"sexpr-assignment-value"),T40,ENVNUL);
  T44 = BOUNDP(YsyntaxYsexpr_assignment_value);
  if (T44 != YPfalse) {
    T43 = CHKREF(YsyntaxYsexpr_assignment_value);
  } else {
    T43 = YPfalse;
  }
  T42 = fun_sexpr_assignment_value_8;
  T41 = CALL2(CHKREF(YPdefine_method),T43,T42);
  YsyntaxYsexpr_assignment_value = T41;
  regsym(&YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
  T45 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_variable_name_9 = YPmet(FUNCODEREF(fun_sexpr_variable_name_9),YPPsym((P)"sexpr-variable-name"),T45,ENVNUL);
  T49 = BOUNDP(YsyntaxYsexpr_variable_name);
  if (T49 != YPfalse) {
    T48 = CHKREF(YsyntaxYsexpr_variable_name);
  } else {
    T48 = YPfalse;
  }
  T47 = fun_sexpr_variable_name_9;
  T46 = CALL2(CHKREF(YPdefine_method),T48,T47);
  YsyntaxYsexpr_variable_name = T46;
  regsym(&YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
  T50 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_variable_name_10 = YPmet(FUNCODEREF(fun_sexpr_variable_name_10),YPPsym((P)"sexpr-variable-name"),T50,ENVNUL);
  T54 = BOUNDP(YsyntaxYsexpr_variable_name);
  if (T54 != YPfalse) {
    T53 = CHKREF(YsyntaxYsexpr_variable_name);
  } else {
    T53 = YPfalse;
  }
  T52 = fun_sexpr_variable_name_10;
  T51 = CALL2(CHKREF(YPdefine_method),T53,T52);
  YsyntaxYsexpr_variable_name = T51;
  regsym(&YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
  T55 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_variable_type_11 = YPmet(FUNCODEREF(fun_sexpr_variable_type_11),YPPsym((P)"sexpr-variable-type"),T55,ENVNUL);
  T59 = BOUNDP(YsyntaxYsexpr_variable_type);
  if (T59 != YPfalse) {
    T58 = CHKREF(YsyntaxYsexpr_variable_type);
  } else {
    T58 = YPfalse;
  }
  T57 = fun_sexpr_variable_type_11;
  T56 = CALL2(CHKREF(YPdefine_method),T58,T57);
  YsyntaxYsexpr_variable_type = T56;
  regsym(&YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
  lit_2 = YPPsym((P)"<any>");
  T60 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_variable_type_12 = YPmet(FUNCODEREF(fun_sexpr_variable_type_12),YPPsym((P)"sexpr-variable-type"),T60,ENVNUL);
  T64 = BOUNDP(YsyntaxYsexpr_variable_type);
  if (T64 != YPfalse) {
    T63 = CHKREF(YsyntaxYsexpr_variable_type);
  } else {
    T63 = YPfalse;
  }
  T62 = fun_sexpr_variable_type_12;
  T61 = CALL2(CHKREF(YPdefine_method),T63,T62);
  YsyntaxYsexpr_variable_type = T61;
  regsym(&YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
  lit_3 = YPPsym((P)"dv");
  YsyntaxYDsexpr_define_tag = CHKREF(lit_3);
  regsym(&YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
  T65 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_definitionQ_13 = YPmet(FUNCODEREF(fun_sexpr_definitionQ_13),YPPsym((P)"sexpr-definition?"),T65,ENVNUL);
  T69 = BOUNDP(YsyntaxYsexpr_definitionQ);
  if (T69 != YPfalse) {
    T68 = CHKREF(YsyntaxYsexpr_definitionQ);
  } else {
    T68 = YPfalse;
  }
  T67 = fun_sexpr_definitionQ_13;
  T66 = CALL2(CHKREF(YPdefine_method),T68,T67);
  YsyntaxYsexpr_definitionQ = T66;
  regsym(&YsyntaxYsexpr_definitionQ,"syntax","sexpr-definition?");
  lit_4 = YPPsym((P)"quasiquote");
  YsyntaxYDsexpr_quasiquote_tag = CHKREF(lit_4);
  regsym(&YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
  T70 = YPsig(YPpair(YPPsym((P)"defn"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_definition_variable_14 = YPmet(FUNCODEREF(fun_sexpr_definition_variable_14),YPPsym((P)"sexpr-definition-variable"),T70,ENVNUL);
  T74 = BOUNDP(YsyntaxYsexpr_definition_variable);
  if (T74 != YPfalse) {
    T73 = CHKREF(YsyntaxYsexpr_definition_variable);
  } else {
    T73 = YPfalse;
  }
  T72 = fun_sexpr_definition_variable_14;
  T71 = CALL2(CHKREF(YPdefine_method),T73,T72);
  YsyntaxYsexpr_definition_variable = T71;
  regsym(&YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
  T75 = YPsig(YPpair(YPPsym((P)"defn"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_definition_value_15 = YPmet(FUNCODEREF(fun_sexpr_definition_value_15),YPPsym((P)"sexpr-definition-value"),T75,ENVNUL);
  T79 = BOUNDP(YsyntaxYsexpr_definition_value);
  if (T79 != YPfalse) {
    T78 = CHKREF(YsyntaxYsexpr_definition_value);
  } else {
    T78 = YPfalse;
  }
  T77 = fun_sexpr_definition_value_15;
  T76 = CALL2(CHKREF(YPdefine_method),T78,T77);
  YsyntaxYsexpr_definition_value = T76;
  regsym(&YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
  lit_5 = YPPsym((P)"ds");
  YsyntaxYDsexpr_define_syntax_tag = CHKREF(lit_5);
  regsym(&YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
  T80 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_syntax_definitionQ_16 = YPmet(FUNCODEREF(fun_sexpr_syntax_definitionQ_16),YPPsym((P)"sexpr-syntax-definition?"),T80,ENVNUL);
  T84 = BOUNDP(YsyntaxYsexpr_syntax_definitionQ);
  if (T84 != YPfalse) {
    T83 = CHKREF(YsyntaxYsexpr_syntax_definitionQ);
  } else {
    T83 = YPfalse;
  }
  T82 = fun_sexpr_syntax_definitionQ_16;
  T81 = CALL2(CHKREF(YPdefine_method),T83,T82);
  YsyntaxYsexpr_syntax_definitionQ = T81;
  regsym(&YsyntaxYsexpr_syntax_definitionQ,"syntax","sexpr-syntax-definition?");
  lit_6 = YPPsym((P)"mac");
  YsyntaxYDsexpr_macro_tag = CHKREF(lit_6);
  regsym(&YsyntaxYDsexpr_macro_tag,"syntax","$sexpr-macro-tag");
  T85 = YPsig(YPpair(YPPsym((P)"defn"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_syntax_definition_variable_17 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_variable_17),YPPsym((P)"sexpr-syntax-definition-variable"),T85,ENVNUL);
  T89 = BOUNDP(YsyntaxYsexpr_syntax_definition_variable);
  if (T89 != YPfalse) {
    T88 = CHKREF(YsyntaxYsexpr_syntax_definition_variable);
  } else {
    T88 = YPfalse;
  }
  T87 = fun_sexpr_syntax_definition_variable_17;
  T86 = CALL2(CHKREF(YPdefine_method),T88,T87);
  YsyntaxYsexpr_syntax_definition_variable = T86;
  regsym(&YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
  T90 = YPsig(YPpair(YPPsym((P)"defn"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_syntax_definition_value_18 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_value_18),YPPsym((P)"sexpr-syntax-definition-value"),T90,ENVNUL);
  T94 = BOUNDP(YsyntaxYsexpr_syntax_definition_value);
  if (T94 != YPfalse) {
    T93 = CHKREF(YsyntaxYsexpr_syntax_definition_value);
  } else {
    T93 = YPfalse;
  }
  T92 = fun_sexpr_syntax_definition_value_18;
  T91 = CALL2(CHKREF(YPdefine_method),T93,T92);
  YsyntaxYsexpr_syntax_definition_value = T91;
  regsym(&YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
  lit_7 = YPPsym((P)"df");
  YsyntaxYDsexpr_define_function_tag = CHKREF(lit_7);
  regsym(&YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
  T95 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_function_definitionQ_19 = YPmet(FUNCODEREF(fun_sexpr_function_definitionQ_19),YPPsym((P)"sexpr-function-definition?"),T95,ENVNUL);
  T99 = BOUNDP(YsyntaxYsexpr_function_definitionQ);
  if (T99 != YPfalse) {
    T98 = CHKREF(YsyntaxYsexpr_function_definitionQ);
  } else {
    T98 = YPfalse;
  }
  T97 = fun_sexpr_function_definitionQ_19;
  T96 = CALL2(CHKREF(YPdefine_method),T98,T97);
  YsyntaxYsexpr_function_definitionQ = T96;
  regsym(&YsyntaxYsexpr_function_definitionQ,"syntax","sexpr-function-definition?");
  lit_8 = YPPsym((P)"dm");
  YsyntaxYDsexpr_define_method_tag = CHKREF(lit_8);
  regsym(&YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
  T100 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_method_definitionQ_20 = YPmet(FUNCODEREF(fun_sexpr_method_definitionQ_20),YPPsym((P)"sexpr-method-definition?"),T100,ENVNUL);
  T104 = BOUNDP(YsyntaxYsexpr_method_definitionQ);
  if (T104 != YPfalse) {
    T103 = CHKREF(YsyntaxYsexpr_method_definitionQ);
  } else {
    T103 = YPfalse;
  }
  T102 = fun_sexpr_method_definitionQ_20;
  T101 = CALL2(CHKREF(YPdefine_method),T103,T102);
  YsyntaxYsexpr_method_definitionQ = T101;
  regsym(&YsyntaxYsexpr_method_definitionQ,"syntax","sexpr-method-definition?");
  lit_9 = YPPsym((P)"dg");
  YsyntaxYDsexpr_define_generic_tag = CHKREF(lit_9);
  regsym(&YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
  T105 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_generic_definitionQ_21 = YPmet(FUNCODEREF(fun_sexpr_generic_definitionQ_21),YPPsym((P)"sexpr-generic-definition?"),T105,ENVNUL);
  T109 = BOUNDP(YsyntaxYsexpr_generic_definitionQ);
  if (T109 != YPfalse) {
    T108 = CHKREF(YsyntaxYsexpr_generic_definitionQ);
  } else {
    T108 = YPfalse;
  }
  T107 = fun_sexpr_generic_definitionQ_21;
  T106 = CALL2(CHKREF(YPdefine_method),T108,T107);
  YsyntaxYsexpr_generic_definitionQ = T106;
  regsym(&YsyntaxYsexpr_generic_definitionQ,"syntax","sexpr-generic-definition?");
  T110 = YPsig(YPpair(YPPsym((P)"defn"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_function_definition_variable_22 = YPmet(FUNCODEREF(fun_sexpr_function_definition_variable_22),YPPsym((P)"sexpr-function-definition-variable"),T110,ENVNUL);
  T114 = BOUNDP(YsyntaxYsexpr_function_definition_variable);
  if (T114 != YPfalse) {
    T113 = CHKREF(YsyntaxYsexpr_function_definition_variable);
  } else {
    T113 = YPfalse;
  }
  T112 = fun_sexpr_function_definition_variable_22;
  T111 = CALL2(CHKREF(YPdefine_method),T113,T112);
  YsyntaxYsexpr_function_definition_variable = T111;
  regsym(&YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
  T115 = YPsig(YPpair(YPPsym((P)"defn"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_forward_primitiveQ_23 = YPmet(FUNCODEREF(fun_sexpr_forward_primitiveQ_23),YPPsym((P)"sexpr-forward-primitive?"),T115,ENVNUL);
  T119 = BOUNDP(YsyntaxYsexpr_forward_primitiveQ);
  if (T119 != YPfalse) {
    T118 = CHKREF(YsyntaxYsexpr_forward_primitiveQ);
  } else {
    T118 = YPfalse;
  }
  T117 = fun_sexpr_forward_primitiveQ_23;
  T116 = CALL2(CHKREF(YPdefine_method),T118,T117);
  YsyntaxYsexpr_forward_primitiveQ = T116;
  regsym(&YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
  lit_10 = YPPsym((P)"=>");
  T120 = YPsig(YPpair(YPPsym((P)"signature"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_signature_parameters_24 = YPmet(FUNCODEREF(fun_sexpr_signature_parameters_24),YPPsym((P)"sexpr-signature-parameters"),T120,ENVNUL);
  T124 = BOUNDP(YsyntaxYsexpr_signature_parameters);
  if (T124 != YPfalse) {
    T123 = CHKREF(YsyntaxYsexpr_signature_parameters);
  } else {
    T123 = YPfalse;
  }
  T122 = fun_sexpr_signature_parameters_24;
  T121 = CALL2(CHKREF(YPdefine_method),T123,T122);
  YsyntaxYsexpr_signature_parameters = T121;
  regsym(&YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
  lit_11 = YPPsym((P)"<tup>");
  lit_12 = YPPsym((P)"tup");
  lit_13 = YPPsym((P)"=>");
  T125 = YPsig(YPpair(YPPsym((P)"signature"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_signature_value_25 = YPmet(FUNCODEREF(fun_sexpr_signature_value_25),YPPsym((P)"sexpr-signature-value"),T125,ENVNUL);
  T129 = BOUNDP(YsyntaxYsexpr_signature_value);
  if (T129 != YPfalse) {
    T128 = CHKREF(YsyntaxYsexpr_signature_value);
  } else {
    T128 = YPfalse;
  }
  T127 = fun_sexpr_signature_value_25;
  T126 = CALL2(CHKREF(YPdefine_method),T128,T127);
  YsyntaxYsexpr_signature_value = T126;
  regsym(&YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
  T130 = YPsig(YPpair(YPPsym((P)"defn"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_function_signature_26 = YPmet(FUNCODEREF(fun_sexpr_function_signature_26),YPPsym((P)"sexpr-function-signature"),T130,ENVNUL);
  T134 = BOUNDP(YsyntaxYsexpr_function_signature);
  if (T134 != YPfalse) {
    T133 = CHKREF(YsyntaxYsexpr_function_signature);
  } else {
    T133 = YPfalse;
  }
  T132 = fun_sexpr_function_signature_26;
  T131 = CALL2(CHKREF(YPdefine_method),T133,T132);
  YsyntaxYsexpr_function_signature = T131;
  regsym(&YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
  T135 = YPsig(YPpair(YPPsym((P)"defn"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_function_parameters_27 = YPmet(FUNCODEREF(fun_sexpr_function_parameters_27),YPPsym((P)"sexpr-function-parameters"),T135,ENVNUL);
  T139 = BOUNDP(YsyntaxYsexpr_function_parameters);
  if (T139 != YPfalse) {
    T138 = CHKREF(YsyntaxYsexpr_function_parameters);
  } else {
    T138 = YPfalse;
  }
  T137 = fun_sexpr_function_parameters_27;
  T136 = CALL2(CHKREF(YPdefine_method),T138,T137);
  YsyntaxYsexpr_function_parameters = T136;
  regsym(&YsyntaxYsexpr_function_parameters,"syntax","sexpr-function-parameters");
  T140 = YPsig(YPpair(YPPsym((P)"defn"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_function_value_28 = YPmet(FUNCODEREF(fun_sexpr_function_value_28),YPPsym((P)"sexpr-function-value"),T140,ENVNUL);
  T144 = BOUNDP(YsyntaxYsexpr_function_value);
  if (T144 != YPfalse) {
    T143 = CHKREF(YsyntaxYsexpr_function_value);
  } else {
    T143 = YPfalse;
  }
  T142 = fun_sexpr_function_value_28;
  T141 = CALL2(CHKREF(YPdefine_method),T143,T142);
  YsyntaxYsexpr_function_value = T141;
  regsym(&YsyntaxYsexpr_function_value,"syntax","sexpr-function-value");
  T145 = YPsig(YPpair(YPPsym((P)"defn"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_function_body_29 = YPmet(FUNCODEREF(fun_sexpr_function_body_29),YPPsym((P)"sexpr-function-body"),T145,ENVNUL);
  T149 = BOUNDP(YsyntaxYsexpr_function_body);
  if (T149 != YPfalse) {
    T148 = CHKREF(YsyntaxYsexpr_function_body);
  } else {
    T148 = YPfalse;
  }
  T147 = fun_sexpr_function_body_29;
  T146 = CALL2(CHKREF(YPdefine_method),T148,T147);
  YsyntaxYsexpr_function_body = T146;
  regsym(&YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
  lit_14 = YPPsym((P)"fun");
  YsyntaxYDsexpr_method_tag = CHKREF(lit_14);
  regsym(&YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
  T150 = YPsig(YPpair(YPPsym((P)"defn"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_function_definition_value_30 = YPmet(FUNCODEREF(fun_sexpr_function_definition_value_30),YPPsym((P)"sexpr-function-definition-value"),T150,ENVNUL);
  T154 = BOUNDP(YsyntaxYsexpr_function_definition_value);
  if (T154 != YPfalse) {
    T153 = CHKREF(YsyntaxYsexpr_function_definition_value);
  } else {
    T153 = YPfalse;
  }
  T152 = fun_sexpr_function_definition_value_30;
  T151 = CALL2(CHKREF(YPdefine_method),T153,T152);
  YsyntaxYsexpr_function_definition_value = T151;
  regsym(&YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
  T155 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_methodQ_31 = YPmet(FUNCODEREF(fun_sexpr_methodQ_31),YPPsym((P)"sexpr-method?"),T155,ENVNUL);
  T159 = BOUNDP(YsyntaxYsexpr_methodQ);
  if (T159 != YPfalse) {
    T158 = CHKREF(YsyntaxYsexpr_methodQ);
  } else {
    T158 = YPfalse;
  }
  T157 = fun_sexpr_methodQ_31;
  T156 = CALL2(CHKREF(YPdefine_method),T158,T157);
  YsyntaxYsexpr_methodQ = T156;
  regsym(&YsyntaxYsexpr_methodQ,"syntax","sexpr-method?");
  T160 = YPsig(YPpair(YPPsym((P)"method-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_method_signature_32 = YPmet(FUNCODEREF(fun_sexpr_method_signature_32),YPPsym((P)"sexpr-method-signature"),T160,ENVNUL);
  T164 = BOUNDP(YsyntaxYsexpr_method_signature);
  if (T164 != YPfalse) {
    T163 = CHKREF(YsyntaxYsexpr_method_signature);
  } else {
    T163 = YPfalse;
  }
  T162 = fun_sexpr_method_signature_32;
  T161 = CALL2(CHKREF(YPdefine_method),T163,T162);
  YsyntaxYsexpr_method_signature = T161;
  regsym(&YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
  T165 = YPsig(YPpair(YPPsym((P)"method-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_method_parameters_33 = YPmet(FUNCODEREF(fun_sexpr_method_parameters_33),YPPsym((P)"sexpr-method-parameters"),T165,ENVNUL);
  T169 = BOUNDP(YsyntaxYsexpr_method_parameters);
  if (T169 != YPfalse) {
    T168 = CHKREF(YsyntaxYsexpr_method_parameters);
  } else {
    T168 = YPfalse;
  }
  T167 = fun_sexpr_method_parameters_33;
  T166 = CALL2(CHKREF(YPdefine_method),T168,T167);
  YsyntaxYsexpr_method_parameters = T166;
  regsym(&YsyntaxYsexpr_method_parameters,"syntax","sexpr-method-parameters");
  T170 = YPsig(YPpair(YPPsym((P)"method-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_method_value_34 = YPmet(FUNCODEREF(fun_sexpr_method_value_34),YPPsym((P)"sexpr-method-value"),T170,ENVNUL);
  T174 = BOUNDP(YsyntaxYsexpr_method_value);
  if (T174 != YPfalse) {
    T173 = CHKREF(YsyntaxYsexpr_method_value);
  } else {
    T173 = YPfalse;
  }
  T172 = fun_sexpr_method_value_34;
  T171 = CALL2(CHKREF(YPdefine_method),T173,T172);
  YsyntaxYsexpr_method_value = T171;
  regsym(&YsyntaxYsexpr_method_value,"syntax","sexpr-method-value");
  T175 = YPsig(YPpair(YPPsym((P)"method-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_method_body_35 = YPmet(FUNCODEREF(fun_sexpr_method_body_35),YPPsym((P)"sexpr-method-body"),T175,ENVNUL);
  T179 = BOUNDP(YsyntaxYsexpr_method_body);
  if (T179 != YPfalse) {
    T178 = CHKREF(YsyntaxYsexpr_method_body);
  } else {
    T178 = YPfalse;
  }
  T177 = fun_sexpr_method_body_35;
  T176 = CALL2(CHKREF(YPdefine_method),T178,T177);
  YsyntaxYsexpr_method_body = T176;
  regsym(&YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
  T180 = YPsig(YPpair(YPPsym((P)"parameters"),YPpair(YPPsym((P)"body"),Ynil)),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_sexpr_make_anonymous_method_36 = YPmet(FUNCODEREF(fun_sexpr_make_anonymous_method_36),YPPsym((P)"sexpr-make-anonymous-method"),T180,ENVNUL);
  T184 = BOUNDP(YsyntaxYsexpr_make_anonymous_method);
  if (T184 != YPfalse) {
    T183 = CHKREF(YsyntaxYsexpr_make_anonymous_method);
  } else {
    T183 = YPfalse;
  }
  T182 = fun_sexpr_make_anonymous_method_36;
  T181 = CALL2(CHKREF(YPdefine_method),T183,T182);
  YsyntaxYsexpr_make_anonymous_method = T181;
  regsym(&YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
  T185 = YPsig(YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"parameters"),YPpair(YPPsym((P)"body"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLlstG));
  fun_sexpr_make_method_37 = YPmet(FUNCODEREF(fun_sexpr_make_method_37),YPPsym((P)"sexpr-make-method"),T185,ENVNUL);
  T189 = BOUNDP(YsyntaxYsexpr_make_method);
  if (T189 != YPfalse) {
    T188 = CHKREF(YsyntaxYsexpr_make_method);
  } else {
    T188 = YPfalse;
  }
  T187 = fun_sexpr_make_method_37;
  T186 = CALL2(CHKREF(YPdefine_method),T188,T187);
  YsyntaxYsexpr_make_method = T186;
  regsym(&YsyntaxYsexpr_make_method,"syntax","sexpr-make-method");
  lit_15 = YPPsym((P)"if");
  YsyntaxYDsexpr_if_tag = CHKREF(lit_15);
  regsym(&YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
  T190 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_ifQ_38 = YPmet(FUNCODEREF(fun_sexpr_ifQ_38),YPPsym((P)"sexpr-if?"),T190,ENVNUL);
  T194 = BOUNDP(YsyntaxYsexpr_ifQ);
  if (T194 != YPfalse) {
    T193 = CHKREF(YsyntaxYsexpr_ifQ);
  } else {
    T193 = YPfalse;
  }
  T192 = fun_sexpr_ifQ_38;
  T191 = CALL2(CHKREF(YPdefine_method),T193,T192);
  YsyntaxYsexpr_ifQ = T191;
  regsym(&YsyntaxYsexpr_ifQ,"syntax","sexpr-if?");
  T195 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_if_test_39 = YPmet(FUNCODEREF(fun_sexpr_if_test_39),YPPsym((P)"sexpr-if-test"),T195,ENVNUL);
  T199 = BOUNDP(YsyntaxYsexpr_if_test);
  if (T199 != YPfalse) {
    T198 = CHKREF(YsyntaxYsexpr_if_test);
  } else {
    T198 = YPfalse;
  }
  T197 = fun_sexpr_if_test_39;
  T196 = CALL2(CHKREF(YPdefine_method),T198,T197);
  YsyntaxYsexpr_if_test = T196;
  regsym(&YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
  T200 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_if_then_40 = YPmet(FUNCODEREF(fun_sexpr_if_then_40),YPPsym((P)"sexpr-if-then"),T200,ENVNUL);
  T204 = BOUNDP(YsyntaxYsexpr_if_then);
  if (T204 != YPfalse) {
    T203 = CHKREF(YsyntaxYsexpr_if_then);
  } else {
    T203 = YPfalse;
  }
  T202 = fun_sexpr_if_then_40;
  T201 = CALL2(CHKREF(YPdefine_method),T203,T202);
  YsyntaxYsexpr_if_then = T201;
  regsym(&YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
  T205 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_if_else_41 = YPmet(FUNCODEREF(fun_sexpr_if_else_41),YPPsym((P)"sexpr-if-else"),T205,ENVNUL);
  T209 = BOUNDP(YsyntaxYsexpr_if_else);
  if (T209 != YPfalse) {
    T208 = CHKREF(YsyntaxYsexpr_if_else);
  } else {
    T208 = YPfalse;
  }
  T207 = fun_sexpr_if_else_41;
  T206 = CALL2(CHKREF(YPdefine_method),T208,T207);
  YsyntaxYsexpr_if_else = T206;
  regsym(&YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
  T210 = YPsig(YPpair(YPPsym((P)"test"),YPpair(YPPsym((P)"then"),YPpair(YPPsym((P)"else"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLlstG));
  fun_sexpr_make_if_42 = YPmet(FUNCODEREF(fun_sexpr_make_if_42),YPPsym((P)"sexpr-make-if"),T210,ENVNUL);
  T214 = BOUNDP(YsyntaxYsexpr_make_if);
  if (T214 != YPfalse) {
    T213 = CHKREF(YsyntaxYsexpr_make_if);
  } else {
    T213 = YPfalse;
  }
  T212 = fun_sexpr_make_if_42;
  T211 = CALL2(CHKREF(YPdefine_method),T213,T212);
  YsyntaxYsexpr_make_if = T211;
  regsym(&YsyntaxYsexpr_make_if,"syntax","sexpr-make-if");
  lit_16 = YPPsym((P)"lab");
  YsyntaxYDsexpr_bind_exit_tag = CHKREF(lit_16);
  regsym(&YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
  T215 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_blockQ_43 = YPmet(FUNCODEREF(fun_sexpr_blockQ_43),YPPsym((P)"sexpr-block?"),T215,ENVNUL);
  T219 = BOUNDP(YsyntaxYsexpr_blockQ);
  if (T219 != YPfalse) {
    T218 = CHKREF(YsyntaxYsexpr_blockQ);
  } else {
    T218 = YPfalse;
  }
  T217 = fun_sexpr_blockQ_43;
  T216 = CALL2(CHKREF(YPdefine_method),T218,T217);
  YsyntaxYsexpr_blockQ = T216;
  regsym(&YsyntaxYsexpr_blockQ,"syntax","sexpr-block?");
  T220 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_block_name_44 = YPmet(FUNCODEREF(fun_sexpr_block_name_44),YPPsym((P)"sexpr-block-name"),T220,ENVNUL);
  T224 = BOUNDP(YsyntaxYsexpr_block_name);
  if (T224 != YPfalse) {
    T223 = CHKREF(YsyntaxYsexpr_block_name);
  } else {
    T223 = YPfalse;
  }
  T222 = fun_sexpr_block_name_44;
  T221 = CALL2(CHKREF(YPdefine_method),T223,T222);
  YsyntaxYsexpr_block_name = T221;
  regsym(&YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
  T225 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_block_body_45 = YPmet(FUNCODEREF(fun_sexpr_block_body_45),YPPsym((P)"sexpr-block-body"),T225,ENVNUL);
  T229 = BOUNDP(YsyntaxYsexpr_block_body);
  if (T229 != YPfalse) {
    T228 = CHKREF(YsyntaxYsexpr_block_body);
  } else {
    T228 = YPfalse;
  }
  T227 = fun_sexpr_block_body_45;
  T226 = CALL2(CHKREF(YPdefine_method),T228,T227);
  YsyntaxYsexpr_block_body = T226;
  regsym(&YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
  lit_17 = YPPsym((P)"fin");
  YsyntaxYDsexpr_unwind_protect_tag = CHKREF(lit_17);
  regsym(&YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
  T230 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_unwind_protectQ_46 = YPmet(FUNCODEREF(fun_sexpr_unwind_protectQ_46),YPPsym((P)"sexpr-unwind-protect?"),T230,ENVNUL);
  T234 = BOUNDP(YsyntaxYsexpr_unwind_protectQ);
  if (T234 != YPfalse) {
    T233 = CHKREF(YsyntaxYsexpr_unwind_protectQ);
  } else {
    T233 = YPfalse;
  }
  T232 = fun_sexpr_unwind_protectQ_46;
  T231 = CALL2(CHKREF(YPdefine_method),T233,T232);
  YsyntaxYsexpr_unwind_protectQ = T231;
  regsym(&YsyntaxYsexpr_unwind_protectQ,"syntax","sexpr-unwind-protect?");
  T237 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  T236 = fun_sexpr_unwind_protect_protected_form_47 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_protected_form_47),YPPsym((P)"sexpr-unwind-protect-protected-form"),T237,ENVNUL);
  T242 = BOUNDP(YsyntaxYsexpr_unwind_protect_protected_form);
  if (T242 != YPfalse) {
    T241 = CHKREF(YsyntaxYsexpr_unwind_protect_protected_form);
  } else {
    T241 = YPfalse;
  }
  T240 = fun_sexpr_unwind_protect_protected_form_47;
  T239 = CALL2(CHKREF(YPdefine_method),T241,T240);
  T238 = YsyntaxYsexpr_unwind_protect_protected_form = T239;
  regsym(&YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
  T235 = T238;
  return T235;
}

P YsyntaxY___main_1___() {
  P T280,T279,T278,T277,T276,T275,T274,T273,T272,T271,T270,T269,T268,T267,T266,T265;
  P T264,T263,T262,T261,T260,T259,T258,T257,T256,T255,T254,T253,T252,T251,T250,T249;
  P T248,T247,T246,T245,T244,T243,T242,T241,T240,T239,T238,T237,T236,T235,T234,T233;
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
  T0 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_unwind_protect_cleanup_forms_48 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_cleanup_forms_48),YPPsym((P)"sexpr-unwind-protect-cleanup-forms"),T0,ENVNUL);
  T4 = BOUNDP(YsyntaxYsexpr_unwind_protect_cleanup_forms);
  if (T4 != YPfalse) {
    T3 = CHKREF(YsyntaxYsexpr_unwind_protect_cleanup_forms);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_sexpr_unwind_protect_cleanup_forms_48;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YsyntaxYsexpr_unwind_protect_cleanup_forms = T1;
  regsym(&YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
  lit_18 = YPPsym((P)"try");
  YsyntaxYDsexpr_monitor_tag = CHKREF(lit_18);
  regsym(&YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
  T5 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_monitorQ_49 = YPmet(FUNCODEREF(fun_sexpr_monitorQ_49),YPPsym((P)"sexpr-monitor?"),T5,ENVNUL);
  T9 = BOUNDP(YsyntaxYsexpr_monitorQ);
  if (T9 != YPfalse) {
    T8 = CHKREF(YsyntaxYsexpr_monitorQ);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_sexpr_monitorQ_49;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  YsyntaxYsexpr_monitorQ = T6;
  regsym(&YsyntaxYsexpr_monitorQ,"syntax","sexpr-monitor?");
  lit_19 = YPPsym((P)"type");
  lit_20 = YPsb((P)"Match Pattern Failure");
  lit_21 = YPPsym((P)"try");
  lit_22 = YPsb((P)"Malformed TRY expression: ~=");
  T12 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1212_50 = YPmet(FUNCODEREF(fun_x_1212_50),YPPsym((P)"x-1212"),T12,ENVNUL);
  T11 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T11,ENVNUL);
  T10 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_monitor_expand_52 = YPmet(FUNCODEREF(fun_sexpr_monitor_expand_52),YPPsym((P)"sexpr-monitor-expand"),T10,ENVNUL);
  T16 = BOUNDP(YsyntaxYsexpr_monitor_expand);
  if (T16 != YPfalse) {
    T15 = CHKREF(YsyntaxYsexpr_monitor_expand);
  } else {
    T15 = YPfalse;
  }
  T14 = fun_sexpr_monitor_expand_52;
  T13 = CALL2(CHKREF(YPdefine_method),T15,T14);
  YsyntaxYsexpr_monitor_expand = T13;
  regsym(&YsyntaxYsexpr_monitor_expand,"syntax","sexpr-monitor-expand");
  T17 = YPsig(YPpair(YPPsym((P)"options"),YPpair(YPPsym((P)"option"),YPpair(YPPsym((P)"default"),Ynil))),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLsymG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  YsyntaxYfind_option = YPmet(FUNCODEREF(YsyntaxYfind_option),YPPsym((P)"find-option"),T17,ENVNUL);
  T18 = YsyntaxYfind_option;
  YsyntaxYfind_option = T18;
  regsym(&YsyntaxYfind_option,"syntax","find-option");
  lit_23 = YPsb((P)"Match Pattern Failure");
  lit_24 = YPsb((P)"Malformed TRY condition type: %=");
  lit_25 = YPpair(YPPsym((P)"<condition>"), Ynil);
  lit_26 = YPPsym((P)"type");
  T21 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1214_54 = YPmet(FUNCODEREF(fun_x_1214_54),YPPsym((P)"x-1214"),T21,ENVNUL);
  T20 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T20,ENVNUL);
  T19 = YPsig(YPpair(YPPsym((P)"options"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_monitor_type_56 = YPmet(FUNCODEREF(fun_sexpr_monitor_type_56),YPPsym((P)"sexpr-monitor-type"),T19,ENVNUL);
  T25 = BOUNDP(YsyntaxYsexpr_monitor_type);
  if (T25 != YPfalse) {
    T24 = CHKREF(YsyntaxYsexpr_monitor_type);
  } else {
    T24 = YPfalse;
  }
  T23 = fun_sexpr_monitor_type_56;
  T22 = CALL2(CHKREF(YPdefine_method),T24,T23);
  YsyntaxYsexpr_monitor_type = T22;
  regsym(&YsyntaxYsexpr_monitor_type,"syntax","sexpr-monitor-type");
  lit_27 = YPPsym((P)"$default-handler-info");
  lit_28 = YPPsym((P)"lst");
  lit_29 = YPPsym((P)"handler-info-arguments");
  lit_30 = YPPsym((P)"set");
  lit_31 = YPPsym((P)"handler-info-message");
  lit_32 = YPPsym((P)"set");
  lit_33 = YPPsym((P)"<simple-handler-info>");
  lit_34 = YPPsym((P)"isa");
  lit_35 = YPsb((P)"Match Pattern Failure");
  lit_36 = YPsb((P)"Malformed TRY description: %=");
  lit_37 = YPsb((P)"Match Pattern Failure");
  lit_38 = YPsb((P)"Malformed TRY info expression: %=");
  lit_39 = YPsb((P)"TRY may only have one of INFO or DESCRIPTION: %=");
  lit_40 = YPPsym((P)"description");
  lit_41 = YPPsym((P)"info");
  T30 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1218_57 = YPmet(FUNCODEREF(fun_x_1218_57),YPPsym((P)"x-1218"),T30,ENVNUL);
  T29 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T29,ENVNUL);
  T28 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1216_59 = YPmet(FUNCODEREF(fun_x_1216_59),YPPsym((P)"x-1216"),T28,ENVNUL);
  T27 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T27,ENVNUL);
  T26 = YPsig(YPpair(YPPsym((P)"options"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_monitor_info_61 = YPmet(FUNCODEREF(fun_sexpr_monitor_info_61),YPPsym((P)"sexpr-monitor-info"),T26,ENVNUL);
  T34 = BOUNDP(YsyntaxYsexpr_monitor_info);
  if (T34 != YPfalse) {
    T33 = CHKREF(YsyntaxYsexpr_monitor_info);
  } else {
    T33 = YPfalse;
  }
  T32 = fun_sexpr_monitor_info_61;
  T31 = CALL2(CHKREF(YPdefine_method),T33,T32);
  YsyntaxYsexpr_monitor_info = T31;
  regsym(&YsyntaxYsexpr_monitor_info,"syntax","sexpr-monitor-info");
  lit_42 = YPpair(YPtrue, Ynil);
  lit_43 = YPPsym((P)"test");
  T35 = YPsig(YPpair(YPPsym((P)"options"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_monitor_test_62 = YPmet(FUNCODEREF(fun_sexpr_monitor_test_62),YPPsym((P)"sexpr-monitor-test"),T35,ENVNUL);
  T39 = BOUNDP(YsyntaxYsexpr_monitor_test);
  if (T39 != YPfalse) {
    T38 = CHKREF(YsyntaxYsexpr_monitor_test);
  } else {
    T38 = YPfalse;
  }
  T37 = fun_sexpr_monitor_test_62;
  T36 = CALL2(CHKREF(YPdefine_method),T38,T37);
  YsyntaxYsexpr_monitor_test = T36;
  regsym(&YsyntaxYsexpr_monitor_test,"syntax","sexpr-monitor-test");
  T40 = YPsig(YPpair(YPPsym((P)"body"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_monitor_body_63 = YPmet(FUNCODEREF(fun_sexpr_monitor_body_63),YPPsym((P)"sexpr-monitor-body"),T40,ENVNUL);
  T44 = BOUNDP(YsyntaxYsexpr_monitor_body);
  if (T44 != YPfalse) {
    T43 = CHKREF(YsyntaxYsexpr_monitor_body);
  } else {
    T43 = YPfalse;
  }
  T42 = fun_sexpr_monitor_body_63;
  T41 = CALL2(CHKREF(YPdefine_method),T43,T42);
  YsyntaxYsexpr_monitor_body = T41;
  regsym(&YsyntaxYsexpr_monitor_body,"syntax","sexpr-monitor-body");
  lit_44 = YPPsym((P)"seq");
  YsyntaxYDsexpr_begin_tag = CHKREF(lit_44);
  regsym(&YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
  T45 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_beginQ_64 = YPmet(FUNCODEREF(fun_sexpr_beginQ_64),YPPsym((P)"sexpr-begin?"),T45,ENVNUL);
  T49 = BOUNDP(YsyntaxYsexpr_beginQ);
  if (T49 != YPfalse) {
    T48 = CHKREF(YsyntaxYsexpr_beginQ);
  } else {
    T48 = YPfalse;
  }
  T47 = fun_sexpr_beginQ_64;
  T46 = CALL2(CHKREF(YPdefine_method),T48,T47);
  YsyntaxYsexpr_beginQ = T46;
  regsym(&YsyntaxYsexpr_beginQ,"syntax","sexpr-begin?");
  T50 = YPsig(YPpair(YPPsym((P)"begin-exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_begin_actions_65 = YPmet(FUNCODEREF(fun_sexpr_begin_actions_65),YPPsym((P)"sexpr-begin-actions"),T50,ENVNUL);
  T54 = BOUNDP(YsyntaxYsexpr_begin_actions);
  if (T54 != YPfalse) {
    T53 = CHKREF(YsyntaxYsexpr_begin_actions);
  } else {
    T53 = YPfalse;
  }
  T52 = fun_sexpr_begin_actions_65;
  T51 = CALL2(CHKREF(YPdefine_method),T53,T52);
  YsyntaxYsexpr_begin_actions = T51;
  regsym(&YsyntaxYsexpr_begin_actions,"syntax","sexpr-begin-actions");
  T55 = YPsig(YPpair(YPPsym((P)"seq"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_last_expQ_66 = YPmet(FUNCODEREF(fun_sexpr_last_expQ_66),YPPsym((P)"sexpr-last-exp?"),T55,ENVNUL);
  T59 = BOUNDP(YsyntaxYsexpr_last_expQ);
  if (T59 != YPfalse) {
    T58 = CHKREF(YsyntaxYsexpr_last_expQ);
  } else {
    T58 = YPfalse;
  }
  T57 = fun_sexpr_last_expQ_66;
  T56 = CALL2(CHKREF(YPdefine_method),T58,T57);
  YsyntaxYsexpr_last_expQ = T56;
  regsym(&YsyntaxYsexpr_last_expQ,"syntax","sexpr-last-exp?");
  T60 = YPsig(YPpair(YPPsym((P)"seq"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_first_exp_67 = YPmet(FUNCODEREF(fun_sexpr_first_exp_67),YPPsym((P)"sexpr-first-exp"),T60,ENVNUL);
  T64 = BOUNDP(YsyntaxYsexpr_first_exp);
  if (T64 != YPfalse) {
    T63 = CHKREF(YsyntaxYsexpr_first_exp);
  } else {
    T63 = YPfalse;
  }
  T62 = fun_sexpr_first_exp_67;
  T61 = CALL2(CHKREF(YPdefine_method),T63,T62);
  YsyntaxYsexpr_first_exp = T61;
  regsym(&YsyntaxYsexpr_first_exp,"syntax","sexpr-first-exp");
  T65 = YPsig(YPpair(YPPsym((P)"seq"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_rest_exps_68 = YPmet(FUNCODEREF(fun_sexpr_rest_exps_68),YPPsym((P)"sexpr-rest-exps"),T65,ENVNUL);
  T69 = BOUNDP(YsyntaxYsexpr_rest_exps);
  if (T69 != YPfalse) {
    T68 = CHKREF(YsyntaxYsexpr_rest_exps);
  } else {
    T68 = YPfalse;
  }
  T67 = fun_sexpr_rest_exps_68;
  T66 = CALL2(CHKREF(YPdefine_method),T68,T67);
  YsyntaxYsexpr_rest_exps = T66;
  regsym(&YsyntaxYsexpr_rest_exps,"syntax","sexpr-rest-exps");
  T70 = YPsig(YPpair(YPPsym((P)"seq"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_sequence_Gbegin_69 = YPmet(FUNCODEREF(fun_sexpr_sequence_Gbegin_69),YPPsym((P)"sexpr-sequence->begin"),T70,ENVNUL);
  T74 = BOUNDP(YsyntaxYsexpr_sequence_Gbegin);
  if (T74 != YPfalse) {
    T73 = CHKREF(YsyntaxYsexpr_sequence_Gbegin);
  } else {
    T73 = YPfalse;
  }
  T72 = fun_sexpr_sequence_Gbegin_69;
  T71 = CALL2(CHKREF(YPdefine_method),T73,T72);
  YsyntaxYsexpr_sequence_Gbegin = T71;
  regsym(&YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
  T75 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_make_begin_70 = YPmet(FUNCODEREF(fun_sexpr_make_begin_70),YPPsym((P)"sexpr-make-begin"),T75,ENVNUL);
  T79 = BOUNDP(YsyntaxYsexpr_make_begin);
  if (T79 != YPfalse) {
    T78 = CHKREF(YsyntaxYsexpr_make_begin);
  } else {
    T78 = YPfalse;
  }
  T77 = fun_sexpr_make_begin_70;
  T76 = CALL2(CHKREF(YPdefine_method),T78,T77);
  YsyntaxYsexpr_make_begin = T76;
  regsym(&YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
  T80 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_applicationQ_71 = YPmet(FUNCODEREF(fun_sexpr_applicationQ_71),YPPsym((P)"sexpr-application?"),T80,ENVNUL);
  T84 = BOUNDP(YsyntaxYsexpr_applicationQ);
  if (T84 != YPfalse) {
    T83 = CHKREF(YsyntaxYsexpr_applicationQ);
  } else {
    T83 = YPfalse;
  }
  T82 = fun_sexpr_applicationQ_71;
  T81 = CALL2(CHKREF(YPdefine_method),T83,T82);
  YsyntaxYsexpr_applicationQ = T81;
  regsym(&YsyntaxYsexpr_applicationQ,"syntax","sexpr-application?");
  T85 = YPsig(YPpair(YPPsym((P)"app"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_operator_72 = YPmet(FUNCODEREF(fun_sexpr_operator_72),YPPsym((P)"sexpr-operator"),T85,ENVNUL);
  T89 = BOUNDP(YsyntaxYsexpr_operator);
  if (T89 != YPfalse) {
    T88 = CHKREF(YsyntaxYsexpr_operator);
  } else {
    T88 = YPfalse;
  }
  T87 = fun_sexpr_operator_72;
  T86 = CALL2(CHKREF(YPdefine_method),T88,T87);
  YsyntaxYsexpr_operator = T86;
  regsym(&YsyntaxYsexpr_operator,"syntax","sexpr-operator");
  T90 = YPsig(YPpair(YPPsym((P)"app"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_operands_73 = YPmet(FUNCODEREF(fun_sexpr_operands_73),YPPsym((P)"sexpr-operands"),T90,ENVNUL);
  T94 = BOUNDP(YsyntaxYsexpr_operands);
  if (T94 != YPfalse) {
    T93 = CHKREF(YsyntaxYsexpr_operands);
  } else {
    T93 = YPfalse;
  }
  T92 = fun_sexpr_operands_73;
  T91 = CALL2(CHKREF(YPdefine_method),T93,T92);
  YsyntaxYsexpr_operands = T91;
  regsym(&YsyntaxYsexpr_operands,"syntax","sexpr-operands");
  T95 = YPsig(YPpair(YPPsym((P)"args"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_no_operandsQ_74 = YPmet(FUNCODEREF(fun_sexpr_no_operandsQ_74),YPPsym((P)"sexpr-no-operands?"),T95,ENVNUL);
  T99 = BOUNDP(YsyntaxYsexpr_no_operandsQ);
  if (T99 != YPfalse) {
    T98 = CHKREF(YsyntaxYsexpr_no_operandsQ);
  } else {
    T98 = YPfalse;
  }
  T97 = fun_sexpr_no_operandsQ_74;
  T96 = CALL2(CHKREF(YPdefine_method),T98,T97);
  YsyntaxYsexpr_no_operandsQ = T96;
  regsym(&YsyntaxYsexpr_no_operandsQ,"syntax","sexpr-no-operands?");
  T100 = YPsig(YPpair(YPPsym((P)"args"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_first_operand_75 = YPmet(FUNCODEREF(fun_sexpr_first_operand_75),YPPsym((P)"sexpr-first-operand"),T100,ENVNUL);
  T104 = BOUNDP(YsyntaxYsexpr_first_operand);
  if (T104 != YPfalse) {
    T103 = CHKREF(YsyntaxYsexpr_first_operand);
  } else {
    T103 = YPfalse;
  }
  T102 = fun_sexpr_first_operand_75;
  T101 = CALL2(CHKREF(YPdefine_method),T103,T102);
  YsyntaxYsexpr_first_operand = T101;
  regsym(&YsyntaxYsexpr_first_operand,"syntax","sexpr-first-operand");
  T105 = YPsig(YPpair(YPPsym((P)"args"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_rest_operands_76 = YPmet(FUNCODEREF(fun_sexpr_rest_operands_76),YPPsym((P)"sexpr-rest-operands"),T105,ENVNUL);
  T109 = BOUNDP(YsyntaxYsexpr_rest_operands);
  if (T109 != YPfalse) {
    T108 = CHKREF(YsyntaxYsexpr_rest_operands);
  } else {
    T108 = YPfalse;
  }
  T107 = fun_sexpr_rest_operands_76;
  T106 = CALL2(CHKREF(YPdefine_method),T108,T107);
  YsyntaxYsexpr_rest_operands = T106;
  regsym(&YsyntaxYsexpr_rest_operands,"syntax","sexpr-rest-operands");
  T110 = YPsig(YPpair(YPPsym((P)"op"),YPpair(YPPsym((P)"operands"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_sexpr_make_application_77 = YPmet(FUNCODEREF(fun_sexpr_make_application_77),YPPsym((P)"sexpr-make-application"),T110,ENVNUL);
  T114 = BOUNDP(YsyntaxYsexpr_make_application);
  if (T114 != YPfalse) {
    T113 = CHKREF(YsyntaxYsexpr_make_application);
  } else {
    T113 = YPfalse;
  }
  T112 = fun_sexpr_make_application_77;
  T111 = CALL2(CHKREF(YPdefine_method),T113,T112);
  YsyntaxYsexpr_make_application = T111;
  regsym(&YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
  YsyntaxYTunique_name_counterT = YPint((P)0);
  regsym(&YsyntaxYTunique_name_counterT,"syntax","*unique-name-counter*");
  T115 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLintG));
  fun_sexpr_new_unique_name_counterX_78 = YPmet(FUNCODEREF(fun_sexpr_new_unique_name_counterX_78),YPPsym((P)"sexpr-new-unique-name-counter!"),T115,ENVNUL);
  T119 = BOUNDP(YsyntaxYsexpr_new_unique_name_counterX);
  if (T119 != YPfalse) {
    T118 = CHKREF(YsyntaxYsexpr_new_unique_name_counterX);
  } else {
    T118 = YPfalse;
  }
  T117 = fun_sexpr_new_unique_name_counterX_78;
  T116 = CALL2(CHKREF(YPdefine_method),T118,T117);
  YsyntaxYsexpr_new_unique_name_counterX = T116;
  regsym(&YsyntaxYsexpr_new_unique_name_counterX,"syntax","sexpr-new-unique-name-counter!");
  YsyntaxYLnameG = CHKREF(YLanyG);
  regsym(&YsyntaxYLnameG,"syntax","<name>");
  T120 = YPsig(YPpair(YPPsym((P)"prefix"),Ynil),YPpair(CHKREF(YsyntaxYLnameG),Ynil),YPfalse,YPint((P)1),CHKREF(YLsymG));
  fun_sexpr_unique_name_79 = YPmet(FUNCODEREF(fun_sexpr_unique_name_79),YPPsym((P)"sexpr-unique-name"),T120,ENVNUL);
  T124 = BOUNDP(YsyntaxYsexpr_unique_name);
  if (T124 != YPfalse) {
    T123 = CHKREF(YsyntaxYsexpr_unique_name);
  } else {
    T123 = YPfalse;
  }
  T122 = fun_sexpr_unique_name_79;
  T121 = CALL2(CHKREF(YPdefine_method),T123,T122);
  YsyntaxYsexpr_unique_name = T121;
  regsym(&YsyntaxYsexpr_unique_name,"syntax","sexpr-unique-name");
  lit_45 = YPPsym((P)"let");
  YsyntaxYDsexpr_let_tag = CHKREF(lit_45);
  regsym(&YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
  T125 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_letQ_80 = YPmet(FUNCODEREF(fun_sexpr_letQ_80),YPPsym((P)"sexpr-let?"),T125,ENVNUL);
  T129 = BOUNDP(YsyntaxYsexpr_letQ);
  if (T129 != YPfalse) {
    T128 = CHKREF(YsyntaxYsexpr_letQ);
  } else {
    T128 = YPfalse;
  }
  T127 = fun_sexpr_letQ_80;
  T126 = CALL2(CHKREF(YPdefine_method),T128,T127);
  YsyntaxYsexpr_letQ = T126;
  regsym(&YsyntaxYsexpr_letQ,"syntax","sexpr-let?");
  T130 = YPsig(YPpair(YPPsym((P)"let-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_let_bound_variables_81 = YPmet(FUNCODEREF(fun_sexpr_let_bound_variables_81),YPPsym((P)"sexpr-let-bound-variables"),T130,ENVNUL);
  T134 = BOUNDP(YsyntaxYsexpr_let_bound_variables);
  if (T134 != YPfalse) {
    T133 = CHKREF(YsyntaxYsexpr_let_bound_variables);
  } else {
    T133 = YPfalse;
  }
  T132 = fun_sexpr_let_bound_variables_81;
  T131 = CALL2(CHKREF(YPdefine_method),T133,T132);
  YsyntaxYsexpr_let_bound_variables = T131;
  regsym(&YsyntaxYsexpr_let_bound_variables,"syntax","sexpr-let-bound-variables");
  T135 = YPsig(YPpair(YPPsym((P)"let-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_let_values_82 = YPmet(FUNCODEREF(fun_sexpr_let_values_82),YPPsym((P)"sexpr-let-values"),T135,ENVNUL);
  T139 = BOUNDP(YsyntaxYsexpr_let_values);
  if (T139 != YPfalse) {
    T138 = CHKREF(YsyntaxYsexpr_let_values);
  } else {
    T138 = YPfalse;
  }
  T137 = fun_sexpr_let_values_82;
  T136 = CALL2(CHKREF(YPdefine_method),T138,T137);
  YsyntaxYsexpr_let_values = T136;
  regsym(&YsyntaxYsexpr_let_values,"syntax","sexpr-let-values");
  T140 = YPsig(YPpair(YPPsym((P)"let-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_let_body_83 = YPmet(FUNCODEREF(fun_sexpr_let_body_83),YPPsym((P)"sexpr-let-body"),T140,ENVNUL);
  T144 = BOUNDP(YsyntaxYsexpr_let_body);
  if (T144 != YPfalse) {
    T143 = CHKREF(YsyntaxYsexpr_let_body);
  } else {
    T143 = YPfalse;
  }
  T142 = fun_sexpr_let_body_83;
  T141 = CALL2(CHKREF(YPdefine_method),T143,T142);
  YsyntaxYsexpr_let_body = T141;
  regsym(&YsyntaxYsexpr_let_body,"syntax","sexpr-let-body");
  lit_46 = YPPsym((P)"head");
  lit_47 = YPPsym((P)"tail");
  lit_48 = YPPsym((P)"<lst>");
  lit_49 = YPPsym((P)"...");
  lit_50 = YPsb((P)"tup");
  lit_51 = YPPsym((P)"tup");
  T147 = YPsig(YPpair(YPPsym((P)"rtnames"),YPpair(YPPsym((P)"rtvalues"),YPpair(YPPsym((P)"index"),YPpair(YPPsym((P)"tnames"),Ynil)))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_inner_84 = YPmet(FUNCODEREF(fun_inner_84),YPPsym((P)"inner"),T147,ENVNUL);
  T146 = YPsig(YPpair(YPPsym((P)"rnames"),YPpair(YPPsym((P)"rvalues"),YPpair(YPPsym((P)"names"),YPpair(YPPsym((P)"vals"),Ynil)))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_loop_85 = YPmet(FUNCODEREF(fun_loop_85),YPPsym((P)"loop"),T146,ENVNUL);
  T145 = YPsig(YPpair(YPPsym((P)"names"),YPpair(YPPsym((P)"vals"),Ynil)),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLtupG));
  fun_sexpr_let_namesAvalues_86 = YPmet(FUNCODEREF(fun_sexpr_let_namesAvalues_86),YPPsym((P)"sexpr-let-names+values"),T145,ENVNUL);
  T151 = BOUNDP(YsyntaxYsexpr_let_namesAvalues);
  if (T151 != YPfalse) {
    T150 = CHKREF(YsyntaxYsexpr_let_namesAvalues);
  } else {
    T150 = YPfalse;
  }
  T149 = fun_sexpr_let_namesAvalues_86;
  T148 = CALL2(CHKREF(YPdefine_method),T150,T149);
  YsyntaxYsexpr_let_namesAvalues = T148;
  regsym(&YsyntaxYsexpr_let_namesAvalues,"syntax","sexpr-let-names+values");
  T153 = YPsig(YPpair(YPPsym((P)"names"),YPpair(YPPsym((P)"values"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_col_87 = YPmet(FUNCODEREF(fun_col_87),YPPsym((P)"col"),T153,ENVNUL);
  T152 = YPsig(YPpair(YPPsym((P)"let-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_let_Gcombination_88 = YPmet(FUNCODEREF(fun_sexpr_let_Gcombination_88),YPPsym((P)"sexpr-let->combination"),T152,ENVNUL);
  T157 = BOUNDP(YsyntaxYsexpr_let_Gcombination);
  if (T157 != YPfalse) {
    T156 = CHKREF(YsyntaxYsexpr_let_Gcombination);
  } else {
    T156 = YPfalse;
  }
  T155 = fun_sexpr_let_Gcombination_88;
  T154 = CALL2(CHKREF(YPdefine_method),T156,T155);
  YsyntaxYsexpr_let_Gcombination = T154;
  regsym(&YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
  lit_52 = YPPsym((P)"loc");
  YsyntaxYDsexpr_locals_tag = CHKREF(lit_52);
  regsym(&YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
  T158 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_locQ_89 = YPmet(FUNCODEREF(fun_sexpr_locQ_89),YPPsym((P)"sexpr-loc?"),T158,ENVNUL);
  T162 = BOUNDP(YsyntaxYsexpr_locQ);
  if (T162 != YPfalse) {
    T161 = CHKREF(YsyntaxYsexpr_locQ);
  } else {
    T161 = YPfalse;
  }
  T160 = fun_sexpr_locQ_89;
  T159 = CALL2(CHKREF(YPdefine_method),T161,T160);
  YsyntaxYsexpr_locQ = T159;
  regsym(&YsyntaxYsexpr_locQ,"syntax","sexpr-loc?");
  T163 = YPsig(YPpair(YPPsym((P)"loc-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_loc_bound_names_90 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_names_90),YPPsym((P)"sexpr-loc-bound-names"),T163,ENVNUL);
  T167 = BOUNDP(YsyntaxYsexpr_loc_bound_names);
  if (T167 != YPfalse) {
    T166 = CHKREF(YsyntaxYsexpr_loc_bound_names);
  } else {
    T166 = YPfalse;
  }
  T165 = fun_sexpr_loc_bound_names_90;
  T164 = CALL2(CHKREF(YPdefine_method),T166,T165);
  YsyntaxYsexpr_loc_bound_names = T164;
  regsym(&YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
  T168 = YPsig(YPpair(YPPsym((P)"loc-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_loc_bound_signatures_91 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_signatures_91),YPPsym((P)"sexpr-loc-bound-signatures"),T168,ENVNUL);
  T172 = BOUNDP(YsyntaxYsexpr_loc_bound_signatures);
  if (T172 != YPfalse) {
    T171 = CHKREF(YsyntaxYsexpr_loc_bound_signatures);
  } else {
    T171 = YPfalse;
  }
  T170 = fun_sexpr_loc_bound_signatures_91;
  T169 = CALL2(CHKREF(YPdefine_method),T171,T170);
  YsyntaxYsexpr_loc_bound_signatures = T169;
  regsym(&YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
  T173 = YPsig(YPpair(YPPsym((P)"loc-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_loc_bound_bodies_92 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_bodies_92),YPPsym((P)"sexpr-loc-bound-bodies"),T173,ENVNUL);
  T177 = BOUNDP(YsyntaxYsexpr_loc_bound_bodies);
  if (T177 != YPfalse) {
    T176 = CHKREF(YsyntaxYsexpr_loc_bound_bodies);
  } else {
    T176 = YPfalse;
  }
  T175 = fun_sexpr_loc_bound_bodies_92;
  T174 = CALL2(CHKREF(YPdefine_method),T176,T175);
  YsyntaxYsexpr_loc_bound_bodies = T174;
  regsym(&YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
  T178 = YPsig(YPpair(YPPsym((P)"loc-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_loc_raw_body_93 = YPmet(FUNCODEREF(fun_sexpr_loc_raw_body_93),YPPsym((P)"sexpr-loc-raw-body"),T178,ENVNUL);
  T182 = BOUNDP(YsyntaxYsexpr_loc_raw_body);
  if (T182 != YPfalse) {
    T181 = CHKREF(YsyntaxYsexpr_loc_raw_body);
  } else {
    T181 = YPfalse;
  }
  T180 = fun_sexpr_loc_raw_body_93;
  T179 = CALL2(CHKREF(YPdefine_method),T181,T180);
  YsyntaxYsexpr_loc_raw_body = T179;
  regsym(&YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
  T183 = YPsig(YPpair(YPPsym((P)"loc-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_loc_body_94 = YPmet(FUNCODEREF(fun_sexpr_loc_body_94),YPPsym((P)"sexpr-loc-body"),T183,ENVNUL);
  T187 = BOUNDP(YsyntaxYsexpr_loc_body);
  if (T187 != YPfalse) {
    T186 = CHKREF(YsyntaxYsexpr_loc_body);
  } else {
    T186 = YPfalse;
  }
  T185 = fun_sexpr_loc_body_94;
  T184 = CALL2(CHKREF(YPdefine_method),T186,T185);
  YsyntaxYsexpr_loc_body = T184;
  regsym(&YsyntaxYsexpr_loc_body,"syntax","sexpr-loc-body");
  lit_53 = YPPsym((P)"rep");
  YsyntaxYDsexpr_iterate_tag = CHKREF(lit_53);
  regsym(&YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
  T188 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_iterateQ_95 = YPmet(FUNCODEREF(fun_sexpr_iterateQ_95),YPPsym((P)"sexpr-iterate?"),T188,ENVNUL);
  T192 = BOUNDP(YsyntaxYsexpr_iterateQ);
  if (T192 != YPfalse) {
    T191 = CHKREF(YsyntaxYsexpr_iterateQ);
  } else {
    T191 = YPfalse;
  }
  T190 = fun_sexpr_iterateQ_95;
  T189 = CALL2(CHKREF(YPdefine_method),T191,T190);
  YsyntaxYsexpr_iterateQ = T189;
  regsym(&YsyntaxYsexpr_iterateQ,"syntax","sexpr-iterate?");
  T193 = YPsig(YPpair(YPPsym((P)"rep-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLsymG));
  fun_sexpr_iterate_name_96 = YPmet(FUNCODEREF(fun_sexpr_iterate_name_96),YPPsym((P)"sexpr-iterate-name"),T193,ENVNUL);
  T197 = BOUNDP(YsyntaxYsexpr_iterate_name);
  if (T197 != YPfalse) {
    T196 = CHKREF(YsyntaxYsexpr_iterate_name);
  } else {
    T196 = YPfalse;
  }
  T195 = fun_sexpr_iterate_name_96;
  T194 = CALL2(CHKREF(YPdefine_method),T196,T195);
  YsyntaxYsexpr_iterate_name = T194;
  regsym(&YsyntaxYsexpr_iterate_name,"syntax","sexpr-iterate-name");
  lit_54 = YPPsym((P)"=>");
  YsyntaxYDsexpr_values_tag = CHKREF(lit_54);
  regsym(&YsyntaxYDsexpr_values_tag,"syntax","$sexpr-values-tag");
  T198 = YPsig(YPpair(YPPsym((P)"rep-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_iterate_signature_97 = YPmet(FUNCODEREF(fun_sexpr_iterate_signature_97),YPPsym((P)"sexpr-iterate-signature"),T198,ENVNUL);
  T202 = BOUNDP(YsyntaxYsexpr_iterate_signature);
  if (T202 != YPfalse) {
    T201 = CHKREF(YsyntaxYsexpr_iterate_signature);
  } else {
    T201 = YPfalse;
  }
  T200 = fun_sexpr_iterate_signature_97;
  T199 = CALL2(CHKREF(YPdefine_method),T201,T200);
  YsyntaxYsexpr_iterate_signature = T199;
  regsym(&YsyntaxYsexpr_iterate_signature,"syntax","sexpr-iterate-signature");
  T203 = YPsig(YPpair(YPPsym((P)"rep-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_iterate_inits_98 = YPmet(FUNCODEREF(fun_sexpr_iterate_inits_98),YPPsym((P)"sexpr-iterate-inits"),T203,ENVNUL);
  T207 = BOUNDP(YsyntaxYsexpr_iterate_inits);
  if (T207 != YPfalse) {
    T206 = CHKREF(YsyntaxYsexpr_iterate_inits);
  } else {
    T206 = YPfalse;
  }
  T205 = fun_sexpr_iterate_inits_98;
  T204 = CALL2(CHKREF(YPdefine_method),T206,T205);
  YsyntaxYsexpr_iterate_inits = T204;
  regsym(&YsyntaxYsexpr_iterate_inits,"syntax","sexpr-iterate-inits");
  T208 = YPsig(YPpair(YPPsym((P)"rep-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_iterate_body_99 = YPmet(FUNCODEREF(fun_sexpr_iterate_body_99),YPPsym((P)"sexpr-iterate-body"),T208,ENVNUL);
  T212 = BOUNDP(YsyntaxYsexpr_iterate_body);
  if (T212 != YPfalse) {
    T211 = CHKREF(YsyntaxYsexpr_iterate_body);
  } else {
    T211 = YPfalse;
  }
  T210 = fun_sexpr_iterate_body_99;
  T209 = CALL2(CHKREF(YPdefine_method),T211,T210);
  YsyntaxYsexpr_iterate_body = T209;
  regsym(&YsyntaxYsexpr_iterate_body,"syntax","sexpr-iterate-body");
  T213 = YPsig(YPpair(YPPsym((P)"rep-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_iterate_Gloc_100 = YPmet(FUNCODEREF(fun_sexpr_iterate_Gloc_100),YPPsym((P)"sexpr-iterate->loc"),T213,ENVNUL);
  T217 = BOUNDP(YsyntaxYsexpr_iterate_Gloc);
  if (T217 != YPfalse) {
    T216 = CHKREF(YsyntaxYsexpr_iterate_Gloc);
  } else {
    T216 = YPfalse;
  }
  T215 = fun_sexpr_iterate_Gloc_100;
  T214 = CALL2(CHKREF(YPdefine_method),T216,T215);
  YsyntaxYsexpr_iterate_Gloc = T214;
  regsym(&YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
  lit_55 = YPPsym((P)"isa");
  YsyntaxYDsexpr_isa_tag = CHKREF(lit_55);
  regsym(&YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
  T218 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_isaQ_101 = YPmet(FUNCODEREF(fun_sexpr_isaQ_101),YPPsym((P)"sexpr-isa?"),T218,ENVNUL);
  T222 = BOUNDP(YsyntaxYsexpr_isaQ);
  if (T222 != YPfalse) {
    T221 = CHKREF(YsyntaxYsexpr_isaQ);
  } else {
    T221 = YPfalse;
  }
  T220 = fun_sexpr_isaQ_101;
  T219 = CALL2(CHKREF(YPdefine_method),T221,T220);
  YsyntaxYsexpr_isaQ = T219;
  regsym(&YsyntaxYsexpr_isaQ,"syntax","sexpr-isa?");
  T223 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_isa_parents_102 = YPmet(FUNCODEREF(fun_sexpr_isa_parents_102),YPPsym((P)"sexpr-isa-parents"),T223,ENVNUL);
  T227 = BOUNDP(YsyntaxYsexpr_isa_parents);
  if (T227 != YPfalse) {
    T226 = CHKREF(YsyntaxYsexpr_isa_parents);
  } else {
    T226 = YPfalse;
  }
  T225 = fun_sexpr_isa_parents_102;
  T224 = CALL2(CHKREF(YPdefine_method),T226,T225);
  YsyntaxYsexpr_isa_parents = T224;
  regsym(&YsyntaxYsexpr_isa_parents,"syntax","sexpr-isa-parents");
  T228 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_isa_slot_inits_103 = YPmet(FUNCODEREF(fun_sexpr_isa_slot_inits_103),YPPsym((P)"sexpr-isa-slot-inits"),T228,ENVNUL);
  T232 = BOUNDP(YsyntaxYsexpr_isa_slot_inits);
  if (T232 != YPfalse) {
    T231 = CHKREF(YsyntaxYsexpr_isa_slot_inits);
  } else {
    T231 = YPfalse;
  }
  T230 = fun_sexpr_isa_slot_inits_103;
  T229 = CALL2(CHKREF(YPdefine_method),T231,T230);
  YsyntaxYsexpr_isa_slot_inits = T229;
  regsym(&YsyntaxYsexpr_isa_slot_inits,"syntax","sexpr-isa-slot-inits");
  T233 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_isa_init_slots_104 = YPmet(FUNCODEREF(fun_sexpr_isa_init_slots_104),YPPsym((P)"sexpr-isa-init-slots"),T233,ENVNUL);
  T237 = BOUNDP(YsyntaxYsexpr_isa_init_slots);
  if (T237 != YPfalse) {
    T236 = CHKREF(YsyntaxYsexpr_isa_init_slots);
  } else {
    T236 = YPfalse;
  }
  T235 = fun_sexpr_isa_init_slots_104;
  T234 = CALL2(CHKREF(YPdefine_method),T236,T235);
  YsyntaxYsexpr_isa_init_slots = T234;
  regsym(&YsyntaxYsexpr_isa_init_slots,"syntax","sexpr-isa-init-slots");
  T238 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_isa_init_values_105 = YPmet(FUNCODEREF(fun_sexpr_isa_init_values_105),YPPsym((P)"sexpr-isa-init-values"),T238,ENVNUL);
  T242 = BOUNDP(YsyntaxYsexpr_isa_init_values);
  if (T242 != YPfalse) {
    T241 = CHKREF(YsyntaxYsexpr_isa_init_values);
  } else {
    T241 = YPfalse;
  }
  T240 = fun_sexpr_isa_init_values_105;
  T239 = CALL2(CHKREF(YPdefine_method),T241,T240);
  YsyntaxYsexpr_isa_init_values = T239;
  regsym(&YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
  lit_56 = YPPsym((P)"slot");
  YsyntaxYDsexpr_slot_tag = CHKREF(lit_56);
  regsym(&YsyntaxYDsexpr_slot_tag,"syntax","$sexpr-slot-tag");
  T243 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_slotQ_106 = YPmet(FUNCODEREF(fun_sexpr_slotQ_106),YPPsym((P)"sexpr-slot?"),T243,ENVNUL);
  T247 = BOUNDP(YsyntaxYsexpr_slotQ);
  if (T247 != YPfalse) {
    T246 = CHKREF(YsyntaxYsexpr_slotQ);
  } else {
    T246 = YPfalse;
  }
  T245 = fun_sexpr_slotQ_106;
  T244 = CALL2(CHKREF(YPdefine_method),T246,T245);
  YsyntaxYsexpr_slotQ = T244;
  regsym(&YsyntaxYsexpr_slotQ,"syntax","sexpr-slot?");
  T248 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_slot_object_107 = YPmet(FUNCODEREF(fun_sexpr_slot_object_107),YPPsym((P)"sexpr-slot-object"),T248,ENVNUL);
  T252 = BOUNDP(YsyntaxYsexpr_slot_object);
  if (T252 != YPfalse) {
    T251 = CHKREF(YsyntaxYsexpr_slot_object);
  } else {
    T251 = YPfalse;
  }
  T250 = fun_sexpr_slot_object_107;
  T249 = CALL2(CHKREF(YPdefine_method),T251,T250);
  YsyntaxYsexpr_slot_object = T249;
  regsym(&YsyntaxYsexpr_slot_object,"syntax","sexpr-slot-object");
  T253 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_slot_variable_108 = YPmet(FUNCODEREF(fun_sexpr_slot_variable_108),YPPsym((P)"sexpr-slot-variable"),T253,ENVNUL);
  T257 = BOUNDP(YsyntaxYsexpr_slot_variable);
  if (T257 != YPfalse) {
    T256 = CHKREF(YsyntaxYsexpr_slot_variable);
  } else {
    T256 = YPfalse;
  }
  T255 = fun_sexpr_slot_variable_108;
  T254 = CALL2(CHKREF(YPdefine_method),T256,T255);
  YsyntaxYsexpr_slot_variable = T254;
  regsym(&YsyntaxYsexpr_slot_variable,"syntax","sexpr-slot-variable");
  lit_57 = YPPsym((P)"nul");
  T258 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_slot_init_109 = YPmet(FUNCODEREF(fun_sexpr_slot_init_109),YPPsym((P)"sexpr-slot-init"),T258,ENVNUL);
  T262 = BOUNDP(YsyntaxYsexpr_slot_init);
  if (T262 != YPfalse) {
    T261 = CHKREF(YsyntaxYsexpr_slot_init);
  } else {
    T261 = YPfalse;
  }
  T260 = fun_sexpr_slot_init_109;
  T259 = CALL2(CHKREF(YPdefine_method),T261,T260);
  YsyntaxYsexpr_slot_init = T259;
  regsym(&YsyntaxYsexpr_slot_init,"syntax","sexpr-slot-init");
  lit_58 = YPPsym((P)"_x");
  lit_59 = YPPsym((P)"slot-value");
  lit_60 = YPPsym((P)"_x");
  T263 = YPsig(YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"type"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_sexpr_make_getter_110 = YPmet(FUNCODEREF(fun_sexpr_make_getter_110),YPPsym((P)"sexpr-make-getter"),T263,ENVNUL);
  T267 = BOUNDP(YsyntaxYsexpr_make_getter);
  if (T267 != YPfalse) {
    T266 = CHKREF(YsyntaxYsexpr_make_getter);
  } else {
    T266 = YPfalse;
  }
  T265 = fun_sexpr_make_getter_110;
  T264 = CALL2(CHKREF(YPdefine_method),T266,T265);
  YsyntaxYsexpr_make_getter = T264;
  regsym(&YsyntaxYsexpr_make_getter,"syntax","sexpr-make-getter");
  lit_61 = YPPsym((P)"_x");
  lit_62 = YPPsym((P)"_z");
  lit_63 = YPPsym((P)"slot-value-setter");
  lit_64 = YPPsym((P)"_x");
  lit_65 = YPPsym((P)"_z");
  T268 = YPsig(YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"type"),YPpair(YPPsym((P)"slot-type"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLlstG));
  fun_sexpr_make_setter_111 = YPmet(FUNCODEREF(fun_sexpr_make_setter_111),YPPsym((P)"sexpr-make-setter"),T268,ENVNUL);
  T272 = BOUNDP(YsyntaxYsexpr_make_setter);
  if (T272 != YPfalse) {
    T271 = CHKREF(YsyntaxYsexpr_make_setter);
  } else {
    T271 = YPfalse;
  }
  T270 = fun_sexpr_make_setter_111;
  T269 = CALL2(CHKREF(YPdefine_method),T271,T270);
  YsyntaxYsexpr_make_setter = T269;
  regsym(&YsyntaxYsexpr_make_setter,"syntax","sexpr-make-setter");
  lit_66 = YPsb((P)"-setter");
  T275 = YPsig(YPpair(YPPsym((P)"name"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLsymG));
  T274 = fun_sexpr_make_setter_name_112 = YPmet(FUNCODEREF(fun_sexpr_make_setter_name_112),YPPsym((P)"sexpr-make-setter-name"),T275,ENVNUL);
  T280 = BOUNDP(YsyntaxYsexpr_make_setter_name);
  if (T280 != YPfalse) {
    T279 = CHKREF(YsyntaxYsexpr_make_setter_name);
  } else {
    T279 = YPfalse;
  }
  T278 = fun_sexpr_make_setter_name_112;
  T277 = CALL2(CHKREF(YPdefine_method),T279,T278);
  T276 = YsyntaxYsexpr_make_setter_name = T277;
  regsym(&YsyntaxYsexpr_make_setter_name,"syntax","sexpr-make-setter-name");
  T273 = T276;
  return T273;
}

P YsyntaxY___main_2___() {
  P T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100;
  P T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84;
  P T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68;
  P T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52;
  P T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36;
  P T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
loop:
  T0 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_macroQ_113 = YPmet(FUNCODEREF(fun_sexpr_macroQ_113),YPPsym((P)"sexpr-macro?"),T0,ENVNUL);
  T4 = BOUNDP(YsyntaxYsexpr_macroQ);
  if (T4 != YPfalse) {
    T3 = CHKREF(YsyntaxYsexpr_macroQ);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_sexpr_macroQ_113;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YsyntaxYsexpr_macroQ = T1;
  regsym(&YsyntaxYsexpr_macroQ,"syntax","sexpr-macro?");
  lit_67 = YPPsym((P)"macro-expand");
  YsyntaxYDsexpr_macro_expand_tag = CHKREF(lit_67);
  regsym(&YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
  T5 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_macro_expandQ_114 = YPmet(FUNCODEREF(fun_sexpr_macro_expandQ_114),YPPsym((P)"sexpr-macro-expand?"),T5,ENVNUL);
  T9 = BOUNDP(YsyntaxYsexpr_macro_expandQ);
  if (T9 != YPfalse) {
    T8 = CHKREF(YsyntaxYsexpr_macro_expandQ);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_sexpr_macro_expandQ_114;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  YsyntaxYsexpr_macro_expandQ = T6;
  regsym(&YsyntaxYsexpr_macro_expandQ,"syntax","sexpr-macro-expand?");
  lit_68 = YPPsym((P)"mif");
  YsyntaxYDsexpr_syntax_if_tag = CHKREF(lit_68);
  regsym(&YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
  T10 = YPsig(YPpair(YPPsym((P)"pat"),YPpair(YPPsym((P)"exp"),YPpair(YPPsym((P)"then"),YPpair(YPPsym((P)"else"),Ynil)))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLlstG));
  fun_sexpr_make_syntax_if_115 = YPmet(FUNCODEREF(fun_sexpr_make_syntax_if_115),YPPsym((P)"sexpr-make-syntax-if"),T10,ENVNUL);
  T14 = BOUNDP(YsyntaxYsexpr_make_syntax_if);
  if (T14 != YPfalse) {
    T13 = CHKREF(YsyntaxYsexpr_make_syntax_if);
  } else {
    T13 = YPfalse;
  }
  T12 = fun_sexpr_make_syntax_if_115;
  T11 = CALL2(CHKREF(YPdefine_method),T13,T12);
  YsyntaxYsexpr_make_syntax_if = T11;
  regsym(&YsyntaxYsexpr_make_syntax_if,"syntax","sexpr-make-syntax-if");
  lit_69 = YPPsym((P)"comma-atsign");
  YsyntaxYTcomma_atsignT = CHKREF(lit_69);
  regsym(&YsyntaxYTcomma_atsignT,"syntax","*comma-atsign*");
  lit_70 = YPPsym((P)"bq-list");
  YsyntaxYTbq_listT = CHKREF(lit_70);
  regsym(&YsyntaxYTbq_listT,"syntax","*bq-list*");
  lit_71 = YPPsym((P)"bq-list*");
  YsyntaxYTbq_listTT = CHKREF(lit_71);
  regsym(&YsyntaxYTbq_listTT,"syntax","*bq-list**");
  lit_72 = YPPsym((P)"bq-append");
  YsyntaxYTbq_appendT = CHKREF(lit_72);
  regsym(&YsyntaxYTbq_appendT,"syntax","*bq-append*");
  lit_73 = YPPsym((P)"bq-nconc");
  YsyntaxYTbq_nconcT = CHKREF(lit_73);
  regsym(&YsyntaxYTbq_nconcT,"syntax","*bq-nconc*");
  lit_74 = YPPsym((P)"bq-clobberable");
  YsyntaxYTbq_clobberableT = CHKREF(lit_74);
  regsym(&YsyntaxYTbq_clobberableT,"syntax","*bq-clobberable*");
  lit_75 = YPPsym((P)"bq-quote");
  YsyntaxYTbq_quoteT = CHKREF(lit_75);
  regsym(&YsyntaxYTbq_quoteT,"syntax","*bq-quote*");
  T15 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  YsyntaxYsexpr_expand_backquote = YPmet(FUNCODEREF(YsyntaxYsexpr_expand_backquote),YPPsym((P)"sexpr-expand-backquote"),T15,ENVNUL);
  T16 = YsyntaxYsexpr_expand_backquote;
  YsyntaxYsexpr_expand_backquote = T16;
  regsym(&YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
  T17 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_build_backquote_expander_117 = YPmet(FUNCODEREF(fun_sexpr_build_backquote_expander_117),YPPsym((P)"sexpr-build-backquote-expander"),T17,ENVNUL);
  T21 = BOUNDP(YsyntaxYsexpr_build_backquote_expander);
  if (T21 != YPfalse) {
    T20 = CHKREF(YsyntaxYsexpr_build_backquote_expander);
  } else {
    T20 = YPfalse;
  }
  T19 = fun_sexpr_build_backquote_expander_117;
  T18 = CALL2(CHKREF(YPdefine_method),T20,T19);
  YsyntaxYsexpr_build_backquote_expander = T18;
  regsym(&YsyntaxYsexpr_build_backquote_expander,"syntax","sexpr-build-backquote-expander");
  lit_76 = YPPsym((P)"unquote");
  T22 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_unquoteQ_118 = YPmet(FUNCODEREF(fun_sexpr_unquoteQ_118),YPPsym((P)"sexpr-unquote?"),T22,ENVNUL);
  T26 = BOUNDP(YsyntaxYsexpr_unquoteQ);
  if (T26 != YPfalse) {
    T25 = CHKREF(YsyntaxYsexpr_unquoteQ);
  } else {
    T25 = YPfalse;
  }
  T24 = fun_sexpr_unquoteQ_118;
  T23 = CALL2(CHKREF(YPdefine_method),T25,T24);
  YsyntaxYsexpr_unquoteQ = T23;
  regsym(&YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
  lit_77 = YPPsym((P)"unquote-splicing");
  T27 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_unquote_splicingQ_119 = YPmet(FUNCODEREF(fun_sexpr_unquote_splicingQ_119),YPPsym((P)"sexpr-unquote-splicing?"),T27,ENVNUL);
  T31 = BOUNDP(YsyntaxYsexpr_unquote_splicingQ);
  if (T31 != YPfalse) {
    T30 = CHKREF(YsyntaxYsexpr_unquote_splicingQ);
  } else {
    T30 = YPfalse;
  }
  T29 = fun_sexpr_unquote_splicingQ_119;
  T28 = CALL2(CHKREF(YPdefine_method),T30,T29);
  YsyntaxYsexpr_unquote_splicingQ = T28;
  regsym(&YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
  T32 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_backquoteQ_120 = YPmet(FUNCODEREF(fun_sexpr_backquoteQ_120),YPPsym((P)"sexpr-backquote?"),T32,ENVNUL);
  T36 = BOUNDP(YsyntaxYsexpr_backquoteQ);
  if (T36 != YPfalse) {
    T35 = CHKREF(YsyntaxYsexpr_backquoteQ);
  } else {
    T35 = YPfalse;
  }
  T34 = fun_sexpr_backquoteQ_120;
  T33 = CALL2(CHKREF(YPdefine_method),T35,T34);
  YsyntaxYsexpr_backquoteQ = T33;
  regsym(&YsyntaxYsexpr_backquoteQ,"syntax","sexpr-backquote?");
  T37 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_atomQ_121 = YPmet(FUNCODEREF(fun_sexpr_atomQ_121),YPPsym((P)"sexpr-atom?"),T37,ENVNUL);
  T41 = BOUNDP(YsyntaxYsexpr_atomQ);
  if (T41 != YPfalse) {
    T40 = CHKREF(YsyntaxYsexpr_atomQ);
  } else {
    T40 = YPfalse;
  }
  T39 = fun_sexpr_atomQ_121;
  T38 = CALL2(CHKREF(YPdefine_method),T40,T39);
  YsyntaxYsexpr_atomQ = T38;
  regsym(&YsyntaxYsexpr_atomQ,"syntax","sexpr-atom?");
  T42 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"y"),Ynil)),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_nreconc_122 = YPmet(FUNCODEREF(fun_nreconc_122),YPPsym((P)"nreconc"),T42,ENVNUL);
  T46 = BOUNDP(YsyntaxYnreconc);
  if (T46 != YPfalse) {
    T45 = CHKREF(YsyntaxYnreconc);
  } else {
    T45 = YPfalse;
  }
  T44 = fun_nreconc_122;
  T43 = CALL2(CHKREF(YPdefine_method),T45,T44);
  YsyntaxYnreconc = T43;
  regsym(&YsyntaxYnreconc,"syntax","nreconc");
  lit_78 = YPsb((P)"Dotted ,@%=");
  lit_79 = YPsb((P)"Malformed ,%=");
  lit_80 = YPsb((P)"UNQUOTE-SPLICING %= AFTER BQ");
  T49 = YPsig(YPpair(YPPsym((P)"p"),YPpair(YPPsym((P)"q"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_123 = YPmet(FUNCODEREF(fun_loop_123),YPPsym((P)"loop"),T49,ENVNUL);
  T48 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_124 = YPmet(FUNCODEREF(fun_124),YPfalse,T48,ENVNUL);
  T47 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_bq_process_125 = YPmet(FUNCODEREF(fun_bq_process_125),YPPsym((P)"bq-process"),T47,ENVNUL);
  T53 = BOUNDP(YsyntaxYbq_process);
  if (T53 != YPfalse) {
    T52 = CHKREF(YsyntaxYbq_process);
  } else {
    T52 = YPfalse;
  }
  T51 = fun_bq_process_125;
  T50 = CALL2(CHKREF(YPdefine_method),T52,T51);
  YsyntaxYbq_process = T50;
  regsym(&YsyntaxYbq_process,"syntax","bq-process");
  T54 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_bracket_126 = YPmet(FUNCODEREF(fun_bracket_126),YPPsym((P)"bracket"),T54,ENVNUL);
  T58 = BOUNDP(YsyntaxYbracket);
  if (T58 != YPfalse) {
    T57 = CHKREF(YsyntaxYbracket);
  } else {
    T57 = YPfalse;
  }
  T56 = fun_bracket_126;
  T55 = CALL2(CHKREF(YPdefine_method),T57,T56);
  YsyntaxYbracket = T55;
  regsym(&YsyntaxYbracket,"syntax","bracket");
  T59 = YPsig(YPpair(YPPsym((P)"fn"),YPpair(YPPsym((P)"x"),Ynil)),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_map_tree_127 = YPmet(FUNCODEREF(fun_map_tree_127),YPPsym((P)"map-tree"),T59,ENVNUL);
  T63 = BOUNDP(YsyntaxYmap_tree);
  if (T63 != YPfalse) {
    T62 = CHKREF(YsyntaxYmap_tree);
  } else {
    T62 = YPfalse;
  }
  T61 = fun_map_tree_127;
  T60 = CALL2(CHKREF(YPdefine_method),T62,T61);
  YsyntaxYmap_tree = T60;
  regsym(&YsyntaxYmap_tree,"syntax","map-tree");
  lit_81 = YPPsym((P)"pair");
  lit_82 = YPPsym((P)"quote");
  lit_83 = YPPsym((P)"list*");
  lit_84 = YPPsym((P)"cat!");
  lit_85 = YPPsym((P)"cat");
  lit_86 = YPPsym((P)"lst");
  T64 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_bq_remove_tokens_128 = YPmet(FUNCODEREF(fun_bq_remove_tokens_128),YPPsym((P)"bq-remove-tokens"),T64,ENVNUL);
  T68 = BOUNDP(YsyntaxYbq_remove_tokens);
  if (T68 != YPfalse) {
    T67 = CHKREF(YsyntaxYbq_remove_tokens);
  } else {
    T67 = YPfalse;
  }
  T66 = fun_bq_remove_tokens_128;
  T65 = CALL2(CHKREF(YPdefine_method),T67,T66);
  YsyntaxYbq_remove_tokens = T65;
  regsym(&YsyntaxYbq_remove_tokens,"syntax","bq-remove-tokens");
  T69 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_syntax_ifQ_129 = YPmet(FUNCODEREF(fun_sexpr_syntax_ifQ_129),YPPsym((P)"sexpr-syntax-if?"),T69,ENVNUL);
  T73 = BOUNDP(YsyntaxYsexpr_syntax_ifQ);
  if (T73 != YPfalse) {
    T72 = CHKREF(YsyntaxYsexpr_syntax_ifQ);
  } else {
    T72 = YPfalse;
  }
  T71 = fun_sexpr_syntax_ifQ_129;
  T70 = CALL2(CHKREF(YPdefine_method),T72,T71);
  YsyntaxYsexpr_syntax_ifQ = T70;
  regsym(&YsyntaxYsexpr_syntax_ifQ,"syntax","sexpr-syntax-if?");
  T74 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_syntax_if_value_130 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_value_130),YPPsym((P)"sexpr-syntax-if-value"),T74,ENVNUL);
  T78 = BOUNDP(YsyntaxYsexpr_syntax_if_value);
  if (T78 != YPfalse) {
    T77 = CHKREF(YsyntaxYsexpr_syntax_if_value);
  } else {
    T77 = YPfalse;
  }
  T76 = fun_sexpr_syntax_if_value_130;
  T75 = CALL2(CHKREF(YPdefine_method),T77,T76);
  YsyntaxYsexpr_syntax_if_value = T75;
  regsym(&YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
  T79 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_syntax_if_pattern_131 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_pattern_131),YPPsym((P)"sexpr-syntax-if-pattern"),T79,ENVNUL);
  T83 = BOUNDP(YsyntaxYsexpr_syntax_if_pattern);
  if (T83 != YPfalse) {
    T82 = CHKREF(YsyntaxYsexpr_syntax_if_pattern);
  } else {
    T82 = YPfalse;
  }
  T81 = fun_sexpr_syntax_if_pattern_131;
  T80 = CALL2(CHKREF(YPdefine_method),T82,T81);
  YsyntaxYsexpr_syntax_if_pattern = T80;
  regsym(&YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
  T84 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_syntax_if_then_132 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_then_132),YPPsym((P)"sexpr-syntax-if-then"),T84,ENVNUL);
  T88 = BOUNDP(YsyntaxYsexpr_syntax_if_then);
  if (T88 != YPfalse) {
    T87 = CHKREF(YsyntaxYsexpr_syntax_if_then);
  } else {
    T87 = YPfalse;
  }
  T86 = fun_sexpr_syntax_if_then_132;
  T85 = CALL2(CHKREF(YPdefine_method),T87,T86);
  YsyntaxYsexpr_syntax_if_then = T85;
  regsym(&YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
  T89 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_syntax_if_else_133 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_else_133),YPPsym((P)"sexpr-syntax-if-else"),T89,ENVNUL);
  T93 = BOUNDP(YsyntaxYsexpr_syntax_if_else);
  if (T93 != YPfalse) {
    T92 = CHKREF(YsyntaxYsexpr_syntax_if_else);
  } else {
    T92 = YPfalse;
  }
  T91 = fun_sexpr_syntax_if_else_133;
  T90 = CALL2(CHKREF(YPdefine_method),T92,T91);
  YsyntaxYsexpr_syntax_if_else = T90;
  regsym(&YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
  T94 = YPsig(YPpair(YPPsym((P)"pat"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_pattern_variableQ_134 = YPmet(FUNCODEREF(fun_sexpr_pattern_variableQ_134),YPPsym((P)"sexpr-pattern-variable?"),T94,ENVNUL);
  T98 = BOUNDP(YsyntaxYsexpr_pattern_variableQ);
  if (T98 != YPfalse) {
    T97 = CHKREF(YsyntaxYsexpr_pattern_variableQ);
  } else {
    T97 = YPfalse;
  }
  T96 = fun_sexpr_pattern_variableQ_134;
  T95 = CALL2(CHKREF(YPdefine_method),T97,T96);
  YsyntaxYsexpr_pattern_variableQ = T95;
  regsym(&YsyntaxYsexpr_pattern_variableQ,"syntax","sexpr-pattern-variable?");
  T99 = YPsig(YPpair(YPPsym((P)"pat"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_pattern_variable_name_135 = YPmet(FUNCODEREF(fun_sexpr_pattern_variable_name_135),YPPsym((P)"sexpr-pattern-variable-name"),T99,ENVNUL);
  T103 = BOUNDP(YsyntaxYsexpr_pattern_variable_name);
  if (T103 != YPfalse) {
    T102 = CHKREF(YsyntaxYsexpr_pattern_variable_name);
  } else {
    T102 = YPfalse;
  }
  T101 = fun_sexpr_pattern_variable_name_135;
  T100 = CALL2(CHKREF(YPdefine_method),T102,T101);
  YsyntaxYsexpr_pattern_variable_name = T100;
  regsym(&YsyntaxYsexpr_pattern_variable_name,"syntax","sexpr-pattern-variable-name");
  T105 = YPsig(YPpair(YPPsym((P)"pat"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_col_136 = YPmet(FUNCODEREF(fun_col_136),YPPsym((P)"col"),T105,ENVNUL);
  T104 = YPsig(YPpair(YPPsym((P)"pat"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_bind_pattern_variables_137 = YPmet(FUNCODEREF(fun_sexpr_bind_pattern_variables_137),YPPsym((P)"sexpr-bind-pattern-variables"),T104,ENVNUL);
  T109 = BOUNDP(YsyntaxYsexpr_bind_pattern_variables);
  if (T109 != YPfalse) {
    T108 = CHKREF(YsyntaxYsexpr_bind_pattern_variables);
  } else {
    T108 = YPfalse;
  }
  T107 = fun_sexpr_bind_pattern_variables_137;
  T106 = CALL2(CHKREF(YPdefine_method),T108,T107);
  YsyntaxYsexpr_bind_pattern_variables = T106;
  regsym(&YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
  lit_87 = YPPsym((P)"exp");
  lit_88 = YPPsym((P)"exp");
  T110 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_make_macro_function_138 = YPmet(FUNCODEREF(fun_sexpr_make_macro_function_138),YPPsym((P)"sexpr-make-macro-function"),T110,ENVNUL);
  T114 = BOUNDP(YsyntaxYsexpr_make_macro_function);
  if (T114 != YPfalse) {
    T113 = CHKREF(YsyntaxYsexpr_make_macro_function);
  } else {
    T113 = YPfalse;
  }
  T112 = fun_sexpr_make_macro_function_138;
  T111 = CALL2(CHKREF(YPdefine_method),T113,T112);
  YsyntaxYsexpr_make_macro_function = T111;
  regsym(&YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
  T115 = YPfalse;
  return T115;
}

/* MODULES USED: */

extern void load_module_boot (void);
extern void load_module_macros (void);
extern void load_module_runtime (void);

/* EXPRESSION: */

extern void load_module_syntax (void);

void load_module_syntax (void) {
  static int need_init = 1;
  if (!need_init) return;

  load_module_boot();
  load_module_macros();
  load_module_runtime();

  (P)YsyntaxY___main_0___();
  (P)YsyntaxY___main_1___();
  (P)YsyntaxY___main_2___();

  need_init = 0;
}

/* END OF GENERATED CODE. */
