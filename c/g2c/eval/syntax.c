/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: syntax */

EXT(YLtraitsG,"boot","<traits>");
DEF(YsyntaxYsexpr_ifQ,"syntax","sexpr-if?");
DEF(YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
DEF(YsyntaxYsexpr_rest_exps,"syntax","sexpr-rest-exps");
DEF(YsyntaxYsexpr_make_setter,"syntax","sexpr-make-setter");
DEF(YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
DEF(YsyntaxYsexpr_begin_actions,"syntax","sexpr-begin-actions");
DEF(YsyntaxYbracket,"syntax","bracket");
DEF(YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
DEF(YsyntaxYsexpr_letQ,"syntax","sexpr-let?");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYassocq,"runtime","assocq");
DEF(YsyntaxYsexpr_let_namesAvalues,"syntax","sexpr-let-names+values");
DEF(YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(YruntimeYdo2,"runtime","do2");
DEF(YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
EXT(Ynot,"boot","not");
EXT(Yfun_value,"boot","fun-value");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeYdo,"runtime","do");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YLstrG,"boot","<str>");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YruntimeYpop,"runtime","pop");
DEF(YsyntaxYsexpr_methodQ,"syntax","sexpr-method?");
DEF(YsyntaxYsexpr_let_bound_variables,"syntax","sexpr-let-bound-variables");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YruntimeYfab,"runtime","fab");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
DEF(YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
DEF(YsyntaxYsexpr_monitorQ,"syntax","sexpr-monitor?");
EXT(YLvecG,"boot","<vec>");
DEF(YsyntaxYsexpr_rest_operands,"syntax","sexpr-rest-operands");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
DEF(YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
EXT(YruntimeYcurry,"runtime","curry");
DEF(YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
DEF(YsyntaxYDsexpr_values_tag,"syntax","$sexpr-values-tag");
DEF(YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
EXT(YruntimeYfile_mtime,"runtime","file-mtime");
EXT(Yslot_getter,"boot","slot-getter");
DEF(YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
DEF(YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
EXT(YLlocG,"boot","<loc>");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
DEF(YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
DEF(YsyntaxYsexpr_iterate_signature,"syntax","sexpr-iterate-signature");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(Yerror,"boot","error");
DEF(YsyntaxYsexpr_iterate_inits,"syntax","sexpr-iterate-inits");
DEF(YsyntaxYsexpr_slot_init,"syntax","sexpr-slot-init");
EXT(YruntimeYassq,"runtime","assq");
DEF(YsyntaxYsexpr_loc_body,"syntax","sexpr-loc-body");
EXT(YruntimeYsub,"runtime","sub");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYdel_dups,"runtime","del-dups");
DEF(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
DEF(YsyntaxYsexpr_slot_object,"syntax","sexpr-slot-object");
EXT(YPcall_next_method,"boot","%call-next-method");
EXT(YmacrosYmake_sym,"macros","make-sym");
DEF(YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
DEF(YsyntaxYsexpr_function_parameters,"syntax","sexpr-function-parameters");
DEF(YsyntaxYTbq_clobberableT,"syntax","*bq-clobberable*");
DEF(YsyntaxYDsexpr_slot_tag,"syntax","$sexpr-slot-tag");
EXT(YruntimeYLbufG,"runtime","<buf>");
DEF(YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
EXT(YLsymG,"boot","<sym>");
EXT(Yslot_setter,"boot","slot-setter");
DEF(YsyntaxYsexpr_function_definitionQ,"syntax","sexpr-function-definition?");
DEF(YsyntaxYsexpr_assignmentQ,"syntax","sexpr-assignment?");
DEF(YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
DEF(YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
DEF(YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
DEF(YsyntaxYTbq_listT,"syntax","*bq-list*");
DEF(YsyntaxYsexpr_pattern_variable_name,"syntax","sexpr-pattern-variable-name");
DEF(YsyntaxYsexpr_last_expQ,"syntax","sexpr-last-exp?");
DEF(YsyntaxYLnameG,"syntax","<name>");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
DEF(YsyntaxYTbq_nconcT,"syntax","*bq-nconc*");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
DEF(YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(Ysym_name,"boot","sym-name");
DEF(YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YLslotG,"boot","<slot>");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YruntimeYas,"runtime","as");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
DEF(YsyntaxYsexpr_operands,"syntax","sexpr-operands");
DEF(YsyntaxYsexpr_unwind_protectQ,"syntax","sexpr-unwind-protect?");
DEF(YsyntaxYsexpr_iterateQ,"syntax","sexpr-iterate?");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
DEF(YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
DEF(YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
DEF(YsyntaxYsexpr_quotedQ,"syntax","sexpr-quoted?");
DEF(YsyntaxYsexpr_tagged_listQ,"syntax","sexpr-tagged-list?");
DEF(YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYout,"runtime","out");
EXT(YruntimeYnewline,"runtime","newline");
DEF(YsyntaxYsexpr_first_exp,"syntax","sexpr-first-exp");
DEF(YsyntaxYsexpr_macro_expandQ,"syntax","sexpr-macro-expand?");
DEF(YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
DEF(YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
DEF(YsyntaxYsexpr_locQ,"syntax","sexpr-loc?");
DEF(YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
EXT(YruntimeYpush,"runtime","push");
DEF(YsyntaxYeval,"syntax","eval");
DEF(YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
EXT(YruntimeY2nd,"runtime","2nd");
DEF(YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
EXT(YmacrosYlst,"macros","lst");
EXT(YruntimeYvec,"runtime","vec");
EXT(Yslot_value,"boot","slot-value");
EXT(YruntimeYread_char,"runtime","read-char");
DEF(YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YruntimeYfill,"runtime","fill");
EXT(YruntimeY1st,"runtime","1st");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YPsnul,"boot","%snul");
DEF(YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
DEF(YsyntaxYsexpr_slot_variable,"syntax","sexpr-slot-variable");
DEF(YsyntaxYsexpr_build_backquote_expander,"syntax","sexpr-build-backquote-expander");
DEF(YsyntaxYsexpr_new_unique_name_counterX,"syntax","sexpr-new-unique-name-counter!");
EXT(YmacrosYEE,"macros","==");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YLanyG,"boot","<any>");
EXT(YLfunG,"boot","<fun>");
DEF(YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
DEF(YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
DEF(YsyntaxYsexpr_pattern_variableQ,"syntax","sexpr-pattern-variable?");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YruntimeYeof_object,"runtime","eof-object");
DEF(YsyntaxYsexpr_let_values,"syntax","sexpr-let-values");
EXT(YruntimeYformat,"runtime","format");
EXT(YruntimeYlocative_value,"runtime","locative-value");
DEF(YsyntaxYmap_tree,"syntax","map-tree");
DEF(YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
DEF(YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
EXT(YruntimeYE,"runtime","=");
DEF(YsyntaxYsexpr_beginQ,"syntax","sexpr-begin?");
EXT(YPvnul,"boot","%vnul");
DEF(YsyntaxYsexpr_syntax_definitionQ,"syntax","sexpr-syntax-definition?");
DEF(YsyntaxYTbq_quoteT,"syntax","*bq-quote*");
DEF(YsyntaxYsexpr_let_body,"syntax","sexpr-let-body");
EXT(YruntimeYwrite_string,"runtime","write-string");
DEF(YsyntaxYsexpr_iterate_body,"syntax","sexpr-iterate-body");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(YmacrosYemptyQ,"macros","empty?");
DEF(YsyntaxYsexpr_make_syntax_if,"syntax","sexpr-make-syntax-if");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(Yfile_opening_error,"boot","file-opening-error");
DEF(YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
EXT(YPisa,"boot","%isa");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YmacrosYcat,"macros","cat");
DEF(YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
DEF(YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
DEF(YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
EXT(YPsymbols,"boot","%symbols");
EXT(Ysig_names,"boot","sig-names");
DEF(YsyntaxYsexpr_method_value,"syntax","sexpr-method-value");
DEF(YsyntaxYsexpr_isa_parents,"syntax","sexpr-isa-parents");
DEF(YsyntaxYsexpr_monitor_handler,"syntax","sexpr-monitor-handler");
DEF(YsyntaxYTbq_appendT,"syntax","*bq-append*");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
DEF(YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
EXT(YruntimeYL,"runtime","<");
EXT(YruntimeYlen,"runtime","len");
DEF(YsyntaxYsexpr_syntax_ifQ,"syntax","sexpr-syntax-if?");
DEF(YsyntaxYsexpr_operator,"syntax","sexpr-operator");
DEF(YsyntaxYTcomma_atsignT,"syntax","*comma-atsign*");
DEF(YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
DEF(YsyntaxYsexpr_function_value,"syntax","sexpr-function-value");
EXT(YisaQ,"boot","isa?");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYfrom,"runtime","from");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YLgenG,"boot","<gen>");
EXT(Ynul,"boot","nul");
DEF(YsyntaxYsexpr_first_operand,"syntax","sexpr-first-operand");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YruntimeYtype_or,"runtime","type-or");
DEF(YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
DEF(YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
EXT(YruntimeYempty,"runtime","empty");
EXT(Ysig_specs,"boot","sig-specs");
DEF(YsyntaxYsexpr_method_definitionQ,"syntax","sexpr-method-definition?");
DEF(YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YPdefine_method,"boot","%define-method");
DEF(YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
DEF(YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
EXT(YPslot,"boot","%slot");
DEF(YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYA,"runtime","+");
DEF(YsyntaxYTunique_name_counterT,"syntax","*unique-name-counter*");
DEF(YsyntaxYsexpr_make_getter,"syntax","sexpr-make-getter");
DEF(YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YLlogG,"boot","<log>");
EXT(YLtupG,"boot","<tup>");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YruntimeYG,"runtime",">");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YLnumG,"boot","<num>");
DEF(YsyntaxYsexpr_method_parameters,"syntax","sexpr-method-parameters");
DEF(YsyntaxYsexpr_isa_slot_inits,"syntax","sexpr-isa-slot-inits");
EXT(YLflatG,"boot","<flat>");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(Ytype_error,"boot","type-error");
DEF(YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
EXT(YPPmacro,"boot","%%macro");
DEF(YsyntaxYsexpr_unique_name,"syntax","sexpr-unique-name");
EXT(YruntimeYpeek_char,"runtime","peek-char");
DEF(YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYadd,"runtime","add");
DEF(YsyntaxYnreconc,"syntax","nreconc");
EXT(YruntimeYdel_keys,"runtime","del-keys");
DEF(YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
DEF(YsyntaxYsexpr_backquoteQ,"syntax","sexpr-backquote?");
DEF(YsyntaxYsexpr_macroQ,"syntax","sexpr-macro?");
DEF(YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
DEF(YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
DEF(YsyntaxYsexpr_iterate_name,"syntax","sexpr-iterate-name");
EXT(YLseqG,"boot","<seq>");
EXT(YLsigG,"boot","<sig>");
EXT(YruntimeYalways,"runtime","always");
DEF(YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
EXT(YmacrosYgensym,"macros","gensym");
DEF(YsyntaxYbq_remove_tokens,"syntax","bq-remove-tokens");
DEF(YsyntaxYsexpr_make_method,"syntax","sexpr-make-method");
DEF(YsyntaxYsexpr_isaQ,"syntax","sexpr-isa?");
DEF(YsyntaxYbq_process,"syntax","bq-process");
DEF(YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
EXT(Yfun_names,"boot","fun-names");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(Ysig_arity,"boot","sig-arity");
DEF(YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
EXT(YLfloG,"boot","<flo>");
EXT(YLbagG,"boot","<bag>");
EXT(YruntimeYnow_key,"runtime","now-key");
DEF(YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
DEF(YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
EXT(Yobject_parents,"boot","object-parents");
EXT(YruntimeYGE,"runtime",">=");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
DEF(YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYmap2,"runtime","map2");
DEF(YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
EXT(YruntimeYLtabG,"runtime","<tab>");
DEF(YsyntaxYsexpr_slotQ,"syntax","sexpr-slot?");
DEF(YsyntaxYsexpr_generic_definitionQ,"syntax","sexpr-generic-definition?");
DEF(YsyntaxYsexpr_make_quote,"syntax","sexpr-make-quote");
DEF(YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
DEF(YsyntaxYsexpr_self_evaluatingQ,"syntax","sexpr-self-evaluating?");
EXT(YruntimeYpos,"runtime","pos");
EXT(YruntimeYneg,"runtime","neg");
DEF(YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
DEF(YsyntaxYsexpr_no_operandsQ,"syntax","sexpr-no-operands?");
EXT(Ysig_value,"boot","sig-value");
EXT(YruntimeYtruncateS,"runtime","truncate/");
DEF(YsyntaxYsexpr_applicationQ,"syntax","sexpr-application?");
DEF(YsyntaxYTbq_listTT,"syntax","*bq-list**");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYin,"runtime","in");
EXT(YLlstG,"boot","<lst>");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YLmetG,"boot","<met>");
EXT(YruntimeYsig,"runtime","sig");
DEF(YsyntaxYDsexpr_macro_tag,"syntax","$sexpr-macro-tag");
DEF(YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
DEF(YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(Yslot_value_setter,"boot","slot-value-setter");
DEF(YsyntaxYsexpr_atomQ,"syntax","sexpr-atom?");
EXT(YruntimeYlast,"runtime","last");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(Yhead,"boot","head");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
DEF(YsyntaxYsexpr_blockQ,"syntax","sexpr-block?");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYrev,"runtime","rev");
DEF(YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
EXT(YLchrG,"boot","<chr>");
DEF(YsyntaxYsexpr_make_if,"syntax","sexpr-make-if");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(Yobject_slots,"boot","object-slots");
EXT(Yapply,"boot","apply");
DEF(YsyntaxYsexpr_definitionQ,"syntax","sexpr-definition?");
DEF(YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
EXT(Yfun_name,"boot","fun-name");
DEF(YsyntaxYsexpr_isa_init_slots,"syntax","sexpr-isa-init-slots");
EXT(YLintG,"boot","<int>");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YmacrosYtup,"macros","tup");
EXT(Yunknown_function_error,"boot","unknown-function-error");
DEF(YsyntaxYsexpr_make_setter_name,"syntax","sexpr-make-setter-name");
EXT(Ytail,"boot","tail");
DEF(YsyntaxYsexpr_monitor_body,"syntax","sexpr-monitor-body");
EXT(YruntimeYLportG,"runtime","<port>");
DEF(YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
EXT(Yhead_setter,"boot","head-setter");

/* FORWARD QUOTATIONS: */

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
LOCFOR(fun_sexpr_monitor_handler_50);
LOCFOR(fun_sexpr_monitor_body_51);
LOCFOR(fun_sexpr_beginQ_52);
LOCFOR(fun_sexpr_begin_actions_53);
LOCFOR(fun_sexpr_last_expQ_54);
LOCFOR(fun_sexpr_first_exp_55);
LOCFOR(fun_sexpr_rest_exps_56);
LOCFOR(fun_sexpr_sequence_Gbegin_57);
LOCFOR(fun_sexpr_make_begin_58);
LOCFOR(fun_sexpr_applicationQ_59);
LOCFOR(fun_sexpr_operator_60);
LOCFOR(fun_sexpr_operands_61);
LOCFOR(fun_sexpr_no_operandsQ_62);
LOCFOR(fun_sexpr_first_operand_63);
LOCFOR(fun_sexpr_rest_operands_64);
LOCFOR(fun_sexpr_make_application_65);
LOCFOR(fun_sexpr_new_unique_name_counterX_66);
LOCFOR(fun_sexpr_unique_name_67);
LOCFOR(fun_sexpr_letQ_68);
LOCFOR(fun_sexpr_let_bound_variables_69);
LOCFOR(fun_sexpr_let_values_70);
LOCFOR(fun_sexpr_let_body_71);
LOCFOR(fun_inner_72);
LOCFOR(fun_loop_73);
LOCFOR(fun_sexpr_let_namesAvalues_74);
LOCFOR(fun_col_75);
LOCFOR(fun_sexpr_let_Gcombination_76);
LOCFOR(fun_sexpr_locQ_77);
LOCFOR(fun_sexpr_loc_bound_names_78);
LOCFOR(fun_sexpr_loc_bound_signatures_79);
LOCFOR(fun_sexpr_loc_bound_bodies_80);
LOCFOR(fun_sexpr_loc_raw_body_81);
LOCFOR(fun_sexpr_loc_body_82);
LOCFOR(fun_sexpr_iterateQ_83);
LOCFOR(fun_sexpr_iterate_name_84);
LOCFOR(fun_sexpr_iterate_signature_85);
LOCFOR(fun_sexpr_iterate_inits_86);
LOCFOR(fun_sexpr_iterate_body_87);
LOCFOR(fun_sexpr_iterate_Gloc_88);
LOCFOR(fun_sexpr_isaQ_89);
LOCFOR(fun_sexpr_isa_parents_90);
LOCFOR(fun_sexpr_isa_slot_inits_91);
LOCFOR(fun_sexpr_isa_init_slots_92);
LOCFOR(fun_sexpr_isa_init_values_93);
LOCFOR(fun_sexpr_slotQ_94);
LOCFOR(fun_sexpr_slot_object_95);
LOCFOR(fun_sexpr_slot_variable_96);
LOCFOR(fun_sexpr_slot_init_97);
LOCFOR(fun_sexpr_make_getter_98);
LOCFOR(fun_sexpr_make_setter_99);
LOCFOR(fun_sexpr_make_setter_name_100);
LOCFOR(fun_sexpr_macroQ_101);
LOCFOR(fun_sexpr_macro_expandQ_102);
LOCFOR(fun_sexpr_make_syntax_if_103);
FUNFOR(YsyntaxYsexpr_expand_backquote);
LOCFOR(fun_sexpr_build_backquote_expander_105);
LOCFOR(fun_sexpr_unquoteQ_106);
LOCFOR(fun_sexpr_unquote_splicingQ_107);
LOCFOR(fun_sexpr_backquoteQ_108);
LOCFOR(fun_sexpr_atomQ_109);
LOCFOR(fun_nreconc_110);
LOCFOR(fun_loop_111);
LOCFOR(fun_112);
LOCFOR(fun_bq_process_113);
LOCFOR(fun_bracket_114);
LOCFOR(fun_map_tree_115);
LOCFOR(fun_bq_remove_tokens_116);
LOCFOR(fun_sexpr_syntax_ifQ_117);
LOCFOR(fun_sexpr_syntax_if_value_118);
LOCFOR(fun_sexpr_syntax_if_pattern_119);
LOCFOR(fun_sexpr_syntax_if_then_120);
LOCFOR(fun_sexpr_syntax_if_else_121);
LOCFOR(fun_sexpr_pattern_variableQ_122);
LOCFOR(fun_sexpr_pattern_variable_name_123);
LOCFOR(fun_col_124);
LOCFOR(fun_sexpr_bind_pattern_variables_125);
LOCFOR(fun_sexpr_make_macro_function_126);
extern P YsyntaxY___main_0___ ();
extern P YsyntaxY___main_1___ ();
extern P YsyntaxY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_sexpr_self_evaluatingQ_0) {
  ARG(exp_, 0);
  P tmpF1120;
  P tmpF1119;
  P tmpF1118;
  P tmpF1117;
  P tmpF1116;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T15 = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLnumG));
  tmpF1116 = T15;
  if (tmpF1116 != YPfalse) {
    T1 = tmpF1116;
  } else {
    T14 = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLchrG));
    tmpF1117 = T14;
    if (tmpF1117 != YPfalse) {
      T3 = tmpF1117;
    } else {
      T13 = CALL2(CHKREF(YmacrosYEE),exp_,YPtrue);
      tmpF1118 = T13;
      if (tmpF1118 != YPfalse) {
        T5 = tmpF1118;
      } else {
        T12 = CALL2(CHKREF(YmacrosYEE),exp_,YPfalse);
        tmpF1119 = T12;
        if (tmpF1119 != YPfalse) {
          T7 = tmpF1119;
        } else {
          T11 = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLstrG));
          tmpF1120 = T11;
          if (tmpF1120 != YPfalse) {
            T9 = tmpF1120;
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
  P tmpF1121;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLlstG));
  tmpF1121 = T4;
  if (tmpF1121 != YPfalse) {
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
  QRET(lit_2);
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
  P values_spec_indexF1122;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL2(CHKREF(YruntimeYpos),signature_,lit_10);
  values_spec_indexF1122 = T4;
  T3 = CALL2(CHKREF(YmacrosYEE),values_spec_indexF1122,CHKREF(Ynul));
  if (T3 != YPfalse) {
    T1 = signature_;
  } else {
    T2 = CALL3(CHKREF(YruntimeYsub),signature_,YPint((P)0),values_spec_indexF1122);
    T1 = T2;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_sexpr_signature_value_25) {
  ARG(signature_, 0);
  P valueF1124;
  P values_spec_indexF1123;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = CALL2(CHKREF(YruntimeYpos),signature_,lit_13);
  values_spec_indexF1123 = T12;
  T11 = CALL2(CHKREF(YmacrosYEE),values_spec_indexF1123,CHKREF(Ynul));
  if (T11 != YPfalse) {
    T1 = YPfalse;
  } else {
    T10 = CALL2(CHKREF(YruntimeYA),values_spec_indexF1123,YPint((P)1));
    T9 = CALL2(CHKREF(YruntimeYelt),signature_,T10);
    valueF1124 = T9;
    T8 = CALL2(CHKREF(YisaQ),valueF1124,CHKREF(YLlstG));
    if (T8 != YPfalse) {
      T7 = CALL1(CHKREF(Yhead),valueF1124);
      T6 = CALL2(CHKREF(YmacrosYEE),T7,lit_12);
      if (T6 != YPfalse) {
        T4 = lit_11;
      } else {
        T5 = CALL1(CHKREF(YruntimeY2nd),valueF1124);
        T4 = T5;
      }
      T3 = T4;
    } else {
      T3 = valueF1124;
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

FUNCODEDEF(fun_sexpr_monitor_handler_50) {
  ARG(exp_, 0);
  P handler_exprF1125;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL1(CHKREF(YruntimeY2nd),exp_);
  handler_exprF1125 = T4;
  T3 = CALL1(CHKREF(Yhead),handler_exprF1125);
  T2 = CALL1(CHKREF(Ytail),handler_exprF1125);
  T1 = CALL2(CHKREF(YsyntaxYsexpr_make_anonymous_method),T3,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_body_51) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(Ytail),exp_);
  T0 = CALL1(CHKREF(Ytail),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_beginQ_52) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_begin_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_begin_actions_53) {
  ARG(begin_exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Ytail),begin_exp_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_last_expQ_54) {
  ARG(seq_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(Ytail),seq_);
  T0 = CALL1(CHKREF(YmacrosYemptyQ),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_first_exp_55) {
  ARG(seq_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Yhead),seq_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_rest_exps_56) {
  ARG(seq_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Ytail),seq_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_sequence_Gbegin_57) {
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

FUNCODEDEF(fun_sexpr_make_begin_58) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYpair),CHKREF(YsyntaxYDsexpr_begin_tag),exp_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_applicationQ_59) {
  ARG(exp_, 0);
  P tmpF1126;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLlstG));
  tmpF1126 = T4;
  if (tmpF1126 != YPfalse) {
    T3 = CALL1(CHKREF(YmacrosYemptyQ),exp_);
    T2 = CALL1(CHKREF(Ynot),T3);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_sexpr_operator_60) {
  ARG(app_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Yhead),app_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_operands_61) {
  ARG(app_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Ytail),app_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_no_operandsQ_62) {
  ARG(args_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YmacrosYemptyQ),args_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_first_operand_63) {
  ARG(args_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Yhead),args_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_rest_operands_64) {
  ARG(args_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Ytail),args_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_application_65) {
  ARG(operands_, 0);
  ARG(op_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YmacrosYlst),op_);
  T0 = CALL2(CHKREF(YmacrosYcat),T1,operands_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_new_unique_name_counterX_66) {
  P T0;
loop:
  T0 = CALL2(CHKREF(YruntimeYA),CHKREF(YsyntaxYTunique_name_counterT),YPint((P)1));
  YsyntaxYTunique_name_counterT = T0;
  RET(CHKREF(YsyntaxYTunique_name_counterT));
}

FUNCODEDEF(fun_sexpr_unique_name_67) {
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

FUNCODEDEF(fun_sexpr_letQ_68) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_let_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_let_bound_variables_69) {
  ARG(let_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeY2nd),let_exp_);
  T0 = CALL2(CHKREF(YmacrosYmap),CHKREF(Yhead),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_let_values_70) {
  ARG(let_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeY2nd),let_exp_);
  T0 = CALL2(CHKREF(YmacrosYmap),CHKREF(YruntimeY2nd),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_let_body_71) {
  ARG(let_exp_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(Ytail),let_exp_);
  T1 = CALL1(CHKREF(Ytail),T2);
  T0 = CALL1(CHKREF(YsyntaxYsexpr_sequence_Gbegin),T1);
  QRET(T0);
}

FUNCODEDEF(fun_inner_72) {
  ARG(tnames_, 0);
  ARG(index_, 1);
  ARG(rtvalues_, 2);
  ARG(rtnames_, 3);
  P tmpF1128;
  P nameF1127;
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
    nameF1127 = T25;
    T24 = CALL2(CHKREF(YisaQ),nameF1127,CHKREF(YLlstG));
    tmpF1128 = T24;
    if (tmpF1128 != YPfalse) {
      T23 = CALL1(CHKREF(Ytail),nameF1127);
      T22 = CALL1(CHKREF(Yhead),T23);
      T21 = CALL2(CHKREF(YmacrosYEE),T22,lit_24);
      T20 = T21;
    } else {
      T20 = YPfalse;
    }
    T19 = T20;
    if (T19 != YPfalse) {
      T18 = CALL1(CHKREF(Yhead),nameF1127);
      T17 = CALL2(CHKREF(YmacrosYlst),T18,lit_23);
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
      T11 = CALL2(CHKREF(YmacrosYpair),nameF1127,rtnames_);
      T10 = CALL2(CHKREF(YmacrosYpair),FREEREF(0),T11);
      T9 = CALL2(CHKREF(YmacrosYlst),lit_22,FREEREF(0));
      T8 = CALL2(CHKREF(YmacrosYlst),lit_21,FREEREF(0));
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

FUNCODEDEF(fun_loop_73) {
  ARG(vals_, 0);
  ARG(names_, 1);
  ARG(rvalues_, 2);
  ARG(rnames_, 3);
  P tmpF1138;
  P tup34F1137;
  P rtvaluesF1136;
  P tup34F1135;
  P rtnamesF1134;
  P tup34F1133;
  P innerF1132;
  P tupnameF1131;
  P valueF1130;
  P nameF1129;
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
    nameF1129 = T37;
    T36 = CALL1(CHKREF(Yhead),vals_);
    valueF1130 = T36;
    T35 = CALL2(CHKREF(YisaQ),nameF1129,CHKREF(YLlstG));
    tmpF1138 = T35;
    if (tmpF1138 != YPfalse) {
      T34 = CALL1(CHKREF(Yhead),nameF1129);
      T33 = CALL2(CHKREF(YmacrosYEE),T34,lit_26);
      T32 = T33;
    } else {
      T32 = YPfalse;
    }
    T31 = T32;
    if (T31 != YPfalse) {
      T30 = CALL1(CHKREF(YsyntaxYsexpr_unique_name),lit_25);
      tupnameF1131 = T30;
      T29 = FUNSHELL(1,fun_inner_72,2);
      innerF1132 = T29;
      FUNINIT(innerF1132, 2,tupnameF1131,innerF1132);
      T28 = CALL1(CHKREF(YmacrosYlst),tupnameF1131);
      T27 = CALL1(CHKREF(YmacrosYlst),valueF1130);
      T26 = CALL1(CHKREF(Ytail),nameF1129);
      T25 = KCALLN(innerF1132,4,T28,T27,YPint((P)0),T26);
      T24 = T25;
      tup34F1133 = T24;
      T23 = CALL1(CHKREF(Yhead),tup34F1133);
      rtnamesF1134 = T23;
      T22 = CALL1(CHKREF(Ytail),tup34F1133);
      tup34F1135 = T22;
      T21 = CALL1(CHKREF(Yhead),tup34F1135);
      rtvaluesF1136 = T21;
      T20 = CALL1(CHKREF(Ytail),tup34F1135);
      tup34F1137 = T20;
      T19 = CALL2(CHKREF(YmacrosYcat),rtnamesF1134,rnames_);
      T18 = CALL2(CHKREF(YmacrosYcat),rtvaluesF1136,rvalues_);
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
      T8 = CALL2(CHKREF(YmacrosYpair),nameF1129,rnames_);
      T7 = CALL2(CHKREF(YmacrosYpair),valueF1130,rvalues_);
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

FUNCODEDEF(fun_sexpr_let_namesAvalues_74) {
  ARG(vals_, 0);
  ARG(names_, 1);
  P loopF1139;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_loop_73,1);
  loopF1139 = T2;
  FUNINIT(loopF1139, 1,loopF1139);
  T1 = KCALLN(loopF1139,4,Ynil,Ynil,names_,vals_);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_col_75) {
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

FUNCODEDEF(fun_sexpr_let_Gcombination_76) {
  ARG(let_exp_, 0);
  P colF1148;
  P tup35F1147;
  P valuesF1146;
  P tup35F1145;
  P namesF1144;
  P tup35F1143;
  P bodyF1142;
  P ovaluesF1141;
  P onamesF1140;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
loop:
  T18 = CALL1(CHKREF(YsyntaxYsexpr_let_bound_variables),let_exp_);
  onamesF1140 = T18;
  T17 = CALL1(CHKREF(YsyntaxYsexpr_let_values),let_exp_);
  ovaluesF1141 = T17;
  T16 = CALL1(CHKREF(YsyntaxYsexpr_let_body),let_exp_);
  bodyF1142 = T16;
  T15 = CALL2(CHKREF(YsyntaxYsexpr_let_namesAvalues),onamesF1140,ovaluesF1141);
  tup35F1143 = T15;
  T14 = CALL1(CHKREF(Yhead),tup35F1143);
  namesF1144 = T14;
  T13 = CALL1(CHKREF(Ytail),tup35F1143);
  tup35F1145 = T13;
  T12 = CALL1(CHKREF(Yhead),tup35F1145);
  valuesF1146 = T12;
  T11 = CALL1(CHKREF(Ytail),tup35F1145);
  tup35F1147 = T11;
  T10 = FUNSHELL(1,fun_col_75,2);
  colF1148 = T10;
  FUNINIT(colF1148, 2,colF1148,bodyF1142);
  T9 = KCALL2(colF1148,namesF1144,valuesF1146);
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

FUNCODEDEF(fun_sexpr_locQ_77) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_locals_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_names_78) {
  ARG(loc_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeY2nd),loc_exp_);
  T0 = CALL2(CHKREF(YmacrosYmap),CHKREF(YruntimeY1st),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_signatures_79) {
  ARG(loc_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeY2nd),loc_exp_);
  T0 = CALL2(CHKREF(YmacrosYmap),CHKREF(YruntimeY2nd),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_bodies_80) {
  ARG(loc_exp_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL2(CHKREF(YruntimeYcompose),CHKREF(Ytail),CHKREF(Ytail));
  T1 = CALL1(CHKREF(YruntimeY2nd),loc_exp_);
  T0 = CALL2(CHKREF(YmacrosYmap),T2,T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_raw_body_81) {
  ARG(loc_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(Ytail),loc_exp_);
  T0 = CALL1(CHKREF(Ytail),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_body_82) {
  ARG(loc_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YsyntaxYsexpr_loc_raw_body),loc_exp_);
  T0 = CALL1(CHKREF(YsyntaxYsexpr_sequence_Gbegin),T1);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_iterateQ_83) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_iterate_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_name_84) {
  ARG(rep_exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),rep_exp_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_signature_85) {
  ARG(rep_exp_, 0);
  P sigF1149;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T9 = CALL1(CHKREF(YruntimeY3rd),rep_exp_);
  sigF1149 = T9;
  T8 = CALL1(CHKREF(YsyntaxYsexpr_signature_parameters),sigF1149);
  T7 = CALL2(CHKREF(YmacrosYmap),CHKREF(YruntimeY1st),T8);
  T6 = CALL1(CHKREF(YsyntaxYsexpr_signature_value),sigF1149);
  if (T6 != YPfalse) {
    T4 = Ynil;
  } else {
    T5 = CALL1(CHKREF(YmacrosYlst),CHKREF(YsyntaxYDsexpr_values_tag));
    T4 = T5;
  }
  T3 = CALL1(CHKREF(YsyntaxYsexpr_signature_value),sigF1149);
  T2 = CALL1(CHKREF(YmacrosYlst),T3);
  T1 = CALL3(CHKREF(YmacrosYcat),T7,T4,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_inits_86) {
  ARG(rep_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeY3rd),rep_exp_);
  T0 = CALL2(CHKREF(YmacrosYmap),CHKREF(YruntimeY2nd),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_body_87) {
  ARG(rep_exp_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(Ytail),rep_exp_);
  T1 = CALL1(CHKREF(Ytail),T2);
  T0 = CALL1(CHKREF(Ytail),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_Gloc_88) {
  ARG(rep_exp_, 0);
  P initsF1153;
  P bodyF1152;
  P sigF1151;
  P nameF1150;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T13 = CALL1(CHKREF(YsyntaxYsexpr_iterate_name),rep_exp_);
  nameF1150 = T13;
  T12 = CALL1(CHKREF(YsyntaxYsexpr_iterate_signature),rep_exp_);
  sigF1151 = T12;
  T11 = CALL1(CHKREF(YsyntaxYsexpr_iterate_body),rep_exp_);
  bodyF1152 = T11;
  T10 = CALL1(CHKREF(YsyntaxYsexpr_iterate_inits),rep_exp_);
  initsF1153 = T10;
  T9 = CALL2(CHKREF(YmacrosYlst),nameF1150,sigF1151);
  T8 = CALL2(CHKREF(YmacrosYcat),T9,bodyF1152);
  T7 = CALL1(CHKREF(YmacrosYlst),T8);
  T6 = CALL1(CHKREF(YmacrosYlst),nameF1150);
  T5 = CALL2(CHKREF(YmacrosYcat),T6,initsF1153);
  T4 = CALL3(CHKREF(YmacrosYlst),CHKREF(YsyntaxYDsexpr_locals_tag),T7,T5);
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isaQ_89) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_isa_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_parents_90) {
  ARG(exp_, 0);
  P parentsF1154;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL1(CHKREF(YruntimeY2nd),exp_);
  parentsF1154 = T4;
  T3 = CALL2(CHKREF(YisaQ),parentsF1154,CHKREF(YLlstG));
  if (T3 != YPfalse) {
    T1 = parentsF1154;
  } else {
    T2 = CALL1(CHKREF(YmacrosYlst),parentsF1154);
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_isa_slot_inits_91) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(Ytail),exp_);
  T0 = CALL1(CHKREF(Ytail),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_init_slots_92) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYmap),CHKREF(YruntimeY2nd),exp_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_init_values_93) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYmap),CHKREF(YruntimeY3rd),exp_);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_slotQ_94) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_slot_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_slot_object_95) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_slot_variable_96) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY3rd),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_slot_init_97) {
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
    T0 = lit_32;
  }
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_make_getter_98) {
  ARG(type_, 0);
  ARG(name_, 1);
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL2(CHKREF(YmacrosYlst),lit_35,type_);
  T3 = CALL1(CHKREF(YmacrosYlst),T4);
  T2 = CALL3(CHKREF(YmacrosYlst),lit_34,lit_33,name_);
  T1 = CALL1(CHKREF(YmacrosYlst),T2);
  T0 = CALL3(CHKREF(YsyntaxYsexpr_make_method),name_,T3,T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_setter_99) {
  ARG(slot_type_, 0);
  ARG(type_, 1);
  ARG(name_, 2);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T6 = CALL1(CHKREF(YsyntaxYsexpr_make_setter_name),name_);
  T5 = CALL2(CHKREF(YmacrosYlst),lit_40,slot_type_);
  T4 = CALL2(CHKREF(YmacrosYlst),lit_39,type_);
  T3 = CALL2(CHKREF(YmacrosYlst),T5,T4);
  T2 = CALLN(CHKREF(YmacrosYlst),4,lit_38,lit_37,lit_36,name_);
  T1 = CALL1(CHKREF(YmacrosYlst),T2);
  T0 = CALL3(CHKREF(YsyntaxYsexpr_make_method),T6,T3,T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_setter_name_100) {
  ARG(name_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),name_);
  T1 = CALL2(CHKREF(YmacrosYcat),T2,lit_41);
  T0 = CALL2(CHKREF(YruntimeYas),CHKREF(YLsymG),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_macroQ_101) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_macro_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_macro_expandQ_102) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_macro_expand_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_syntax_if_103) {
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

FUNCODEDEF(fun_sexpr_build_backquote_expander_105) {
  ARG(x_, 0);
  P resF1156;
  P raw_resultF1155;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL1(CHKREF(YsyntaxYbq_process),x_);
  raw_resultF1155 = T3;
  T2 = CALL1(CHKREF(YsyntaxYbq_remove_tokens),raw_resultF1155);
  resF1156 = T2;
  T1 = resF1156;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unquoteQ_106) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),x_,lit_51);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unquote_splicingQ_107) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),x_,lit_52);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_backquoteQ_108) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),x_,CHKREF(YsyntaxYDsexpr_quasiquote_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_atomQ_109) {
  ARG(x_, 0);
  P tmpF1157;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL2(CHKREF(YisaQ),x_,CHKREF(YLlstG));
  T3 = CALL1(CHKREF(Ynot),T4);
  tmpF1157 = T3;
  if (tmpF1157 != YPfalse) {
    T1 = tmpF1157;
  } else {
    T2 = CALL2(CHKREF(YmacrosYEE),x_,Ynil);
    T1 = T2;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_nreconc_110) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YruntimeYrevX),x_);
  T0 = CALL2(CHKREF(YruntimeYcatX),T1,y_);
  RET(T0);
}

FUNCODEDEF(fun_loop_111) {
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
        T1 = CALL2(CHKREF(Yerror),lit_54,p_);
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
      T13 = CALL2(CHKREF(Yerror),lit_53,p_);
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

FUNCODEDEF(fun_112) {
  ARG(return_, 0);
  P loopF1158;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_loop_111,2);
  loopF1158 = T2;
  FUNINIT(loopF1158, 2,loopF1158,return_);
  T1 = KCALL2(loopF1158,FREEREF(0),Ynil);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_bq_process_113) {
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
          T7 = CALL2(CHKREF(Yerror),lit_55,T8);
          T3 = T7;
        } else {
          if (YPtrue != YPfalse) {
            T6 = FUNFAB(fun_112,1,x_);
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

FUNCODEDEF(fun_bracket_114) {
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

FUNCODEDEF(fun_map_tree_115) {
  ARG(x_, 0);
  ARG(fn_, 1);
  P tmpF1161;
  P dF1160;
  P aF1159;
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
    aF1159 = T13;
    T12 = CALL1(CHKREF(Ytail),x_);
    T11 = CALL2(CHKREF(YsyntaxYmap_tree),fn_,T12);
    dF1160 = T11;
    T10 = CALL1(CHKREF(Yhead),x_);
    T9 = CALL2(CHKREF(YruntimeYE),aF1159,T10);
    tmpF1161 = T9;
    if (tmpF1161 != YPfalse) {
      T8 = CALL1(CHKREF(Ytail),x_);
      T7 = CALL2(CHKREF(YruntimeYE),dF1160,T8);
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T5 = T6;
    if (T5 != YPfalse) {
      T3 = x_;
    } else {
      T4 = CALL2(CHKREF(YmacrosYpair),aF1159,dF1160);
      T3 = T4;
    }
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_bq_remove_tokens_116) {
  ARG(x_, 0);
  P tmpF1163;
  P tmpF1162;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T37 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YsyntaxYTbq_listT));
  if (T37 != YPfalse) {
    T0 = lit_61;
  } else {
    T36 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YsyntaxYTbq_appendT));
    if (T36 != YPfalse) {
      T1 = lit_60;
    } else {
      T35 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YsyntaxYTbq_nconcT));
      if (T35 != YPfalse) {
        T2 = lit_59;
      } else {
        T34 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YsyntaxYTbq_listTT));
        if (T34 != YPfalse) {
          T3 = lit_58;
        } else {
          T33 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YsyntaxYTbq_quoteT));
          if (T33 != YPfalse) {
            T4 = lit_57;
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
                tmpF1162 = T25;
                if (tmpF1162 != YPfalse) {
                  T24 = CALL1(CHKREF(Ytail),x_);
                  T23 = CALL1(CHKREF(Ytail),T24);
                  T22 = CALL1(CHKREF(YmacrosYemptyQ),T23);
                  T21 = CALL1(CHKREF(Ynot),T22);
                  tmpF1163 = T21;
                  if (tmpF1163 != YPfalse) {
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
                  T10 = CALL2(CHKREF(YmacrosYpair),lit_56,T11);
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

FUNCODEDEF(fun_sexpr_syntax_ifQ_117) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_syntax_if_tag));
  RET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_value_118) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeY2nd),exp_);
  T0 = CALL1(CHKREF(YruntimeY2nd),T1);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_pattern_119) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeY2nd),exp_);
  T0 = CALL1(CHKREF(YruntimeY1st),T1);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_then_120) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY3rd),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_else_121) {
  ARG(exp_, 0);
  P altF1164;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL2(CHKREF(YruntimeYelt),exp_,YPint((P)3));
  altF1164 = T3;
  T2 = CALL2(CHKREF(YmacrosYEE),altF1164,CHKREF(Ynul));
  if (T2 != YPfalse) {
    T1 = YPfalse;
  } else {
    T1 = altF1164;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_pattern_variableQ_122) {
  ARG(pat_, 0);
  P tmpF1165;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL1(CHKREF(YsyntaxYsexpr_unquoteQ),pat_);
  tmpF1165 = T3;
  if (tmpF1165 != YPfalse) {
    T1 = tmpF1165;
  } else {
    T2 = CALL1(CHKREF(YsyntaxYsexpr_unquote_splicingQ),pat_);
    T1 = T2;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_sexpr_pattern_variable_name_123) {
  ARG(pat_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),pat_);
  QRET(T0);
}

FUNCODEDEF(fun_col_124) {
  ARG(pat_, 0);
  P tmpF1167;
  P xF1166;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
loop:
  T18 = CALL2(CHKREF(YisaQ),pat_,CHKREF(YLlstG));
  T17 = CALL1(CHKREF(Ynot),T18);
  tmpF1167 = T17;
  if (tmpF1167 != YPfalse) {
    T15 = tmpF1167;
  } else {
    T16 = CALL1(CHKREF(YmacrosYemptyQ),pat_);
    T15 = T16;
  }
  T14 = T15;
  if (T14 != YPfalse) {
    T0 = Ynil;
  } else {
    T13 = CALL1(CHKREF(Yhead),pat_);
    xF1166 = T13;
    T12 = CALL1(CHKREF(YsyntaxYsexpr_pattern_variableQ),xF1166);
    if (T12 != YPfalse) {
      T11 = CALL1(CHKREF(YsyntaxYsexpr_pattern_variable_name),xF1166);
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

FUNCODEDEF(fun_sexpr_bind_pattern_variables_125) {
  ARG(pat_, 0);
  P colF1168;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = FUNSHELL(1,fun_col_124,1);
  colF1168 = T3;
  FUNINIT(colF1168, 1,colF1168);
  T2 = KCALL1(colF1168,pat_);
  T1 = T2;
  T0 = CALL1(CHKREF(YruntimeYdel_dups),T1);
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_macro_function_126) {
  ARG(exp_, 0);
  P funcF1170;
  P mifF1169;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = CALL1(CHKREF(YsyntaxYsexpr_method_parameters),exp_);
  T7 = CALL1(CHKREF(YsyntaxYsexpr_method_body),exp_);
  T6 = CALL1(CHKREF(YsyntaxYsexpr_sequence_Gbegin),T7);
  T5 = CALLN(CHKREF(YsyntaxYsexpr_make_syntax_if),4,T8,lit_63,T6,YPfalse);
  mifF1169 = T5;
  T4 = CALL1(CHKREF(YmacrosYlst),lit_62);
  T3 = CALL1(CHKREF(YmacrosYlst),mifF1169);
  T2 = CALL2(CHKREF(YsyntaxYsexpr_make_anonymous_method),T4,T3);
  funcF1170 = T2;
  T1 = funcF1170;
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
  YsyntaxYDsexpr_quote_tag = lit_0;
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
  YsyntaxYDsexpr_set_tag = lit_1;
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
  YsyntaxYDsexpr_define_tag = lit_3;
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
  YsyntaxYDsexpr_quasiquote_tag = lit_4;
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
  YsyntaxYDsexpr_define_syntax_tag = lit_5;
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
  YsyntaxYDsexpr_macro_tag = lit_6;
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
  YsyntaxYDsexpr_define_function_tag = lit_7;
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
  YsyntaxYDsexpr_define_method_tag = lit_8;
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
  YsyntaxYDsexpr_define_generic_tag = lit_9;
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
  YsyntaxYDsexpr_method_tag = lit_14;
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
  YsyntaxYDsexpr_if_tag = lit_15;
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
  YsyntaxYDsexpr_bind_exit_tag = lit_16;
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
  YsyntaxYDsexpr_unwind_protect_tag = lit_17;
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
  YsyntaxYDsexpr_monitor_tag = lit_18;
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
  T10 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_monitor_handler_50 = YPmet(FUNCODEREF(fun_sexpr_monitor_handler_50),YPPsym((P)"sexpr-monitor-handler"),T10,ENVNUL);
  T14 = BOUNDP(YsyntaxYsexpr_monitor_handler);
  if (T14 != YPfalse) {
    T13 = CHKREF(YsyntaxYsexpr_monitor_handler);
  } else {
    T13 = YPfalse;
  }
  T12 = fun_sexpr_monitor_handler_50;
  T11 = CALL2(CHKREF(YPdefine_method),T13,T12);
  YsyntaxYsexpr_monitor_handler = T11;
  regsym(&YsyntaxYsexpr_monitor_handler,"syntax","sexpr-monitor-handler");
  T15 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_monitor_body_51 = YPmet(FUNCODEREF(fun_sexpr_monitor_body_51),YPPsym((P)"sexpr-monitor-body"),T15,ENVNUL);
  T19 = BOUNDP(YsyntaxYsexpr_monitor_body);
  if (T19 != YPfalse) {
    T18 = CHKREF(YsyntaxYsexpr_monitor_body);
  } else {
    T18 = YPfalse;
  }
  T17 = fun_sexpr_monitor_body_51;
  T16 = CALL2(CHKREF(YPdefine_method),T18,T17);
  YsyntaxYsexpr_monitor_body = T16;
  regsym(&YsyntaxYsexpr_monitor_body,"syntax","sexpr-monitor-body");
  lit_19 = YPPsym((P)"seq");
  YsyntaxYDsexpr_begin_tag = lit_19;
  regsym(&YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
  T20 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_beginQ_52 = YPmet(FUNCODEREF(fun_sexpr_beginQ_52),YPPsym((P)"sexpr-begin?"),T20,ENVNUL);
  T24 = BOUNDP(YsyntaxYsexpr_beginQ);
  if (T24 != YPfalse) {
    T23 = CHKREF(YsyntaxYsexpr_beginQ);
  } else {
    T23 = YPfalse;
  }
  T22 = fun_sexpr_beginQ_52;
  T21 = CALL2(CHKREF(YPdefine_method),T23,T22);
  YsyntaxYsexpr_beginQ = T21;
  regsym(&YsyntaxYsexpr_beginQ,"syntax","sexpr-begin?");
  T25 = YPsig(YPpair(YPPsym((P)"begin-exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_begin_actions_53 = YPmet(FUNCODEREF(fun_sexpr_begin_actions_53),YPPsym((P)"sexpr-begin-actions"),T25,ENVNUL);
  T29 = BOUNDP(YsyntaxYsexpr_begin_actions);
  if (T29 != YPfalse) {
    T28 = CHKREF(YsyntaxYsexpr_begin_actions);
  } else {
    T28 = YPfalse;
  }
  T27 = fun_sexpr_begin_actions_53;
  T26 = CALL2(CHKREF(YPdefine_method),T28,T27);
  YsyntaxYsexpr_begin_actions = T26;
  regsym(&YsyntaxYsexpr_begin_actions,"syntax","sexpr-begin-actions");
  T30 = YPsig(YPpair(YPPsym((P)"seq"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_last_expQ_54 = YPmet(FUNCODEREF(fun_sexpr_last_expQ_54),YPPsym((P)"sexpr-last-exp?"),T30,ENVNUL);
  T34 = BOUNDP(YsyntaxYsexpr_last_expQ);
  if (T34 != YPfalse) {
    T33 = CHKREF(YsyntaxYsexpr_last_expQ);
  } else {
    T33 = YPfalse;
  }
  T32 = fun_sexpr_last_expQ_54;
  T31 = CALL2(CHKREF(YPdefine_method),T33,T32);
  YsyntaxYsexpr_last_expQ = T31;
  regsym(&YsyntaxYsexpr_last_expQ,"syntax","sexpr-last-exp?");
  T35 = YPsig(YPpair(YPPsym((P)"seq"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_first_exp_55 = YPmet(FUNCODEREF(fun_sexpr_first_exp_55),YPPsym((P)"sexpr-first-exp"),T35,ENVNUL);
  T39 = BOUNDP(YsyntaxYsexpr_first_exp);
  if (T39 != YPfalse) {
    T38 = CHKREF(YsyntaxYsexpr_first_exp);
  } else {
    T38 = YPfalse;
  }
  T37 = fun_sexpr_first_exp_55;
  T36 = CALL2(CHKREF(YPdefine_method),T38,T37);
  YsyntaxYsexpr_first_exp = T36;
  regsym(&YsyntaxYsexpr_first_exp,"syntax","sexpr-first-exp");
  T40 = YPsig(YPpair(YPPsym((P)"seq"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_rest_exps_56 = YPmet(FUNCODEREF(fun_sexpr_rest_exps_56),YPPsym((P)"sexpr-rest-exps"),T40,ENVNUL);
  T44 = BOUNDP(YsyntaxYsexpr_rest_exps);
  if (T44 != YPfalse) {
    T43 = CHKREF(YsyntaxYsexpr_rest_exps);
  } else {
    T43 = YPfalse;
  }
  T42 = fun_sexpr_rest_exps_56;
  T41 = CALL2(CHKREF(YPdefine_method),T43,T42);
  YsyntaxYsexpr_rest_exps = T41;
  regsym(&YsyntaxYsexpr_rest_exps,"syntax","sexpr-rest-exps");
  T45 = YPsig(YPpair(YPPsym((P)"seq"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_sequence_Gbegin_57 = YPmet(FUNCODEREF(fun_sexpr_sequence_Gbegin_57),YPPsym((P)"sexpr-sequence->begin"),T45,ENVNUL);
  T49 = BOUNDP(YsyntaxYsexpr_sequence_Gbegin);
  if (T49 != YPfalse) {
    T48 = CHKREF(YsyntaxYsexpr_sequence_Gbegin);
  } else {
    T48 = YPfalse;
  }
  T47 = fun_sexpr_sequence_Gbegin_57;
  T46 = CALL2(CHKREF(YPdefine_method),T48,T47);
  YsyntaxYsexpr_sequence_Gbegin = T46;
  regsym(&YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
  T50 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_make_begin_58 = YPmet(FUNCODEREF(fun_sexpr_make_begin_58),YPPsym((P)"sexpr-make-begin"),T50,ENVNUL);
  T54 = BOUNDP(YsyntaxYsexpr_make_begin);
  if (T54 != YPfalse) {
    T53 = CHKREF(YsyntaxYsexpr_make_begin);
  } else {
    T53 = YPfalse;
  }
  T52 = fun_sexpr_make_begin_58;
  T51 = CALL2(CHKREF(YPdefine_method),T53,T52);
  YsyntaxYsexpr_make_begin = T51;
  regsym(&YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
  T55 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_applicationQ_59 = YPmet(FUNCODEREF(fun_sexpr_applicationQ_59),YPPsym((P)"sexpr-application?"),T55,ENVNUL);
  T59 = BOUNDP(YsyntaxYsexpr_applicationQ);
  if (T59 != YPfalse) {
    T58 = CHKREF(YsyntaxYsexpr_applicationQ);
  } else {
    T58 = YPfalse;
  }
  T57 = fun_sexpr_applicationQ_59;
  T56 = CALL2(CHKREF(YPdefine_method),T58,T57);
  YsyntaxYsexpr_applicationQ = T56;
  regsym(&YsyntaxYsexpr_applicationQ,"syntax","sexpr-application?");
  T60 = YPsig(YPpair(YPPsym((P)"app"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_operator_60 = YPmet(FUNCODEREF(fun_sexpr_operator_60),YPPsym((P)"sexpr-operator"),T60,ENVNUL);
  T64 = BOUNDP(YsyntaxYsexpr_operator);
  if (T64 != YPfalse) {
    T63 = CHKREF(YsyntaxYsexpr_operator);
  } else {
    T63 = YPfalse;
  }
  T62 = fun_sexpr_operator_60;
  T61 = CALL2(CHKREF(YPdefine_method),T63,T62);
  YsyntaxYsexpr_operator = T61;
  regsym(&YsyntaxYsexpr_operator,"syntax","sexpr-operator");
  T65 = YPsig(YPpair(YPPsym((P)"app"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_operands_61 = YPmet(FUNCODEREF(fun_sexpr_operands_61),YPPsym((P)"sexpr-operands"),T65,ENVNUL);
  T69 = BOUNDP(YsyntaxYsexpr_operands);
  if (T69 != YPfalse) {
    T68 = CHKREF(YsyntaxYsexpr_operands);
  } else {
    T68 = YPfalse;
  }
  T67 = fun_sexpr_operands_61;
  T66 = CALL2(CHKREF(YPdefine_method),T68,T67);
  YsyntaxYsexpr_operands = T66;
  regsym(&YsyntaxYsexpr_operands,"syntax","sexpr-operands");
  T70 = YPsig(YPpair(YPPsym((P)"args"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_no_operandsQ_62 = YPmet(FUNCODEREF(fun_sexpr_no_operandsQ_62),YPPsym((P)"sexpr-no-operands?"),T70,ENVNUL);
  T74 = BOUNDP(YsyntaxYsexpr_no_operandsQ);
  if (T74 != YPfalse) {
    T73 = CHKREF(YsyntaxYsexpr_no_operandsQ);
  } else {
    T73 = YPfalse;
  }
  T72 = fun_sexpr_no_operandsQ_62;
  T71 = CALL2(CHKREF(YPdefine_method),T73,T72);
  YsyntaxYsexpr_no_operandsQ = T71;
  regsym(&YsyntaxYsexpr_no_operandsQ,"syntax","sexpr-no-operands?");
  T75 = YPsig(YPpair(YPPsym((P)"args"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_first_operand_63 = YPmet(FUNCODEREF(fun_sexpr_first_operand_63),YPPsym((P)"sexpr-first-operand"),T75,ENVNUL);
  T79 = BOUNDP(YsyntaxYsexpr_first_operand);
  if (T79 != YPfalse) {
    T78 = CHKREF(YsyntaxYsexpr_first_operand);
  } else {
    T78 = YPfalse;
  }
  T77 = fun_sexpr_first_operand_63;
  T76 = CALL2(CHKREF(YPdefine_method),T78,T77);
  YsyntaxYsexpr_first_operand = T76;
  regsym(&YsyntaxYsexpr_first_operand,"syntax","sexpr-first-operand");
  T80 = YPsig(YPpair(YPPsym((P)"args"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_rest_operands_64 = YPmet(FUNCODEREF(fun_sexpr_rest_operands_64),YPPsym((P)"sexpr-rest-operands"),T80,ENVNUL);
  T84 = BOUNDP(YsyntaxYsexpr_rest_operands);
  if (T84 != YPfalse) {
    T83 = CHKREF(YsyntaxYsexpr_rest_operands);
  } else {
    T83 = YPfalse;
  }
  T82 = fun_sexpr_rest_operands_64;
  T81 = CALL2(CHKREF(YPdefine_method),T83,T82);
  YsyntaxYsexpr_rest_operands = T81;
  regsym(&YsyntaxYsexpr_rest_operands,"syntax","sexpr-rest-operands");
  T85 = YPsig(YPpair(YPPsym((P)"op"),YPpair(YPPsym((P)"operands"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_sexpr_make_application_65 = YPmet(FUNCODEREF(fun_sexpr_make_application_65),YPPsym((P)"sexpr-make-application"),T85,ENVNUL);
  T89 = BOUNDP(YsyntaxYsexpr_make_application);
  if (T89 != YPfalse) {
    T88 = CHKREF(YsyntaxYsexpr_make_application);
  } else {
    T88 = YPfalse;
  }
  T87 = fun_sexpr_make_application_65;
  T86 = CALL2(CHKREF(YPdefine_method),T88,T87);
  YsyntaxYsexpr_make_application = T86;
  regsym(&YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
  YsyntaxYTunique_name_counterT = YPint((P)0);
  regsym(&YsyntaxYTunique_name_counterT,"syntax","*unique-name-counter*");
  T90 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLintG));
  fun_sexpr_new_unique_name_counterX_66 = YPmet(FUNCODEREF(fun_sexpr_new_unique_name_counterX_66),YPPsym((P)"sexpr-new-unique-name-counter!"),T90,ENVNUL);
  T94 = BOUNDP(YsyntaxYsexpr_new_unique_name_counterX);
  if (T94 != YPfalse) {
    T93 = CHKREF(YsyntaxYsexpr_new_unique_name_counterX);
  } else {
    T93 = YPfalse;
  }
  T92 = fun_sexpr_new_unique_name_counterX_66;
  T91 = CALL2(CHKREF(YPdefine_method),T93,T92);
  YsyntaxYsexpr_new_unique_name_counterX = T91;
  regsym(&YsyntaxYsexpr_new_unique_name_counterX,"syntax","sexpr-new-unique-name-counter!");
  YsyntaxYLnameG = CHKREF(YLanyG);
  regsym(&YsyntaxYLnameG,"syntax","<name>");
  T95 = YPsig(YPpair(YPPsym((P)"prefix"),Ynil),YPpair(CHKREF(YsyntaxYLnameG),Ynil),YPfalse,YPint((P)1),CHKREF(YLsymG));
  fun_sexpr_unique_name_67 = YPmet(FUNCODEREF(fun_sexpr_unique_name_67),YPPsym((P)"sexpr-unique-name"),T95,ENVNUL);
  T99 = BOUNDP(YsyntaxYsexpr_unique_name);
  if (T99 != YPfalse) {
    T98 = CHKREF(YsyntaxYsexpr_unique_name);
  } else {
    T98 = YPfalse;
  }
  T97 = fun_sexpr_unique_name_67;
  T96 = CALL2(CHKREF(YPdefine_method),T98,T97);
  YsyntaxYsexpr_unique_name = T96;
  regsym(&YsyntaxYsexpr_unique_name,"syntax","sexpr-unique-name");
  lit_20 = YPPsym((P)"let");
  YsyntaxYDsexpr_let_tag = lit_20;
  regsym(&YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
  T100 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_letQ_68 = YPmet(FUNCODEREF(fun_sexpr_letQ_68),YPPsym((P)"sexpr-let?"),T100,ENVNUL);
  T104 = BOUNDP(YsyntaxYsexpr_letQ);
  if (T104 != YPfalse) {
    T103 = CHKREF(YsyntaxYsexpr_letQ);
  } else {
    T103 = YPfalse;
  }
  T102 = fun_sexpr_letQ_68;
  T101 = CALL2(CHKREF(YPdefine_method),T103,T102);
  YsyntaxYsexpr_letQ = T101;
  regsym(&YsyntaxYsexpr_letQ,"syntax","sexpr-let?");
  T105 = YPsig(YPpair(YPPsym((P)"let-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_let_bound_variables_69 = YPmet(FUNCODEREF(fun_sexpr_let_bound_variables_69),YPPsym((P)"sexpr-let-bound-variables"),T105,ENVNUL);
  T109 = BOUNDP(YsyntaxYsexpr_let_bound_variables);
  if (T109 != YPfalse) {
    T108 = CHKREF(YsyntaxYsexpr_let_bound_variables);
  } else {
    T108 = YPfalse;
  }
  T107 = fun_sexpr_let_bound_variables_69;
  T106 = CALL2(CHKREF(YPdefine_method),T108,T107);
  YsyntaxYsexpr_let_bound_variables = T106;
  regsym(&YsyntaxYsexpr_let_bound_variables,"syntax","sexpr-let-bound-variables");
  T110 = YPsig(YPpair(YPPsym((P)"let-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_let_values_70 = YPmet(FUNCODEREF(fun_sexpr_let_values_70),YPPsym((P)"sexpr-let-values"),T110,ENVNUL);
  T114 = BOUNDP(YsyntaxYsexpr_let_values);
  if (T114 != YPfalse) {
    T113 = CHKREF(YsyntaxYsexpr_let_values);
  } else {
    T113 = YPfalse;
  }
  T112 = fun_sexpr_let_values_70;
  T111 = CALL2(CHKREF(YPdefine_method),T113,T112);
  YsyntaxYsexpr_let_values = T111;
  regsym(&YsyntaxYsexpr_let_values,"syntax","sexpr-let-values");
  T115 = YPsig(YPpair(YPPsym((P)"let-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_let_body_71 = YPmet(FUNCODEREF(fun_sexpr_let_body_71),YPPsym((P)"sexpr-let-body"),T115,ENVNUL);
  T119 = BOUNDP(YsyntaxYsexpr_let_body);
  if (T119 != YPfalse) {
    T118 = CHKREF(YsyntaxYsexpr_let_body);
  } else {
    T118 = YPfalse;
  }
  T117 = fun_sexpr_let_body_71;
  T116 = CALL2(CHKREF(YPdefine_method),T118,T117);
  YsyntaxYsexpr_let_body = T116;
  regsym(&YsyntaxYsexpr_let_body,"syntax","sexpr-let-body");
  lit_21 = YPPsym((P)"head");
  lit_22 = YPPsym((P)"tail");
  lit_23 = YPPsym((P)"<lst>");
  lit_24 = YPPsym((P)"...");
  lit_25 = YPsb((P)"tup");
  lit_26 = YPPsym((P)"tup");
  T122 = YPsig(YPpair(YPPsym((P)"rtnames"),YPpair(YPPsym((P)"rtvalues"),YPpair(YPPsym((P)"index"),YPpair(YPPsym((P)"tnames"),Ynil)))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_inner_72 = YPmet(FUNCODEREF(fun_inner_72),YPPsym((P)"inner"),T122,ENVNUL);
  T121 = YPsig(YPpair(YPPsym((P)"rnames"),YPpair(YPPsym((P)"rvalues"),YPpair(YPPsym((P)"names"),YPpair(YPPsym((P)"vals"),Ynil)))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_loop_73 = YPmet(FUNCODEREF(fun_loop_73),YPPsym((P)"loop"),T121,ENVNUL);
  T120 = YPsig(YPpair(YPPsym((P)"names"),YPpair(YPPsym((P)"vals"),Ynil)),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLtupG));
  fun_sexpr_let_namesAvalues_74 = YPmet(FUNCODEREF(fun_sexpr_let_namesAvalues_74),YPPsym((P)"sexpr-let-names+values"),T120,ENVNUL);
  T126 = BOUNDP(YsyntaxYsexpr_let_namesAvalues);
  if (T126 != YPfalse) {
    T125 = CHKREF(YsyntaxYsexpr_let_namesAvalues);
  } else {
    T125 = YPfalse;
  }
  T124 = fun_sexpr_let_namesAvalues_74;
  T123 = CALL2(CHKREF(YPdefine_method),T125,T124);
  YsyntaxYsexpr_let_namesAvalues = T123;
  regsym(&YsyntaxYsexpr_let_namesAvalues,"syntax","sexpr-let-names+values");
  T128 = YPsig(YPpair(YPPsym((P)"names"),YPpair(YPPsym((P)"values"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_col_75 = YPmet(FUNCODEREF(fun_col_75),YPPsym((P)"col"),T128,ENVNUL);
  T127 = YPsig(YPpair(YPPsym((P)"let-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_let_Gcombination_76 = YPmet(FUNCODEREF(fun_sexpr_let_Gcombination_76),YPPsym((P)"sexpr-let->combination"),T127,ENVNUL);
  T132 = BOUNDP(YsyntaxYsexpr_let_Gcombination);
  if (T132 != YPfalse) {
    T131 = CHKREF(YsyntaxYsexpr_let_Gcombination);
  } else {
    T131 = YPfalse;
  }
  T130 = fun_sexpr_let_Gcombination_76;
  T129 = CALL2(CHKREF(YPdefine_method),T131,T130);
  YsyntaxYsexpr_let_Gcombination = T129;
  regsym(&YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
  lit_27 = YPPsym((P)"loc");
  YsyntaxYDsexpr_locals_tag = lit_27;
  regsym(&YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
  T133 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_locQ_77 = YPmet(FUNCODEREF(fun_sexpr_locQ_77),YPPsym((P)"sexpr-loc?"),T133,ENVNUL);
  T137 = BOUNDP(YsyntaxYsexpr_locQ);
  if (T137 != YPfalse) {
    T136 = CHKREF(YsyntaxYsexpr_locQ);
  } else {
    T136 = YPfalse;
  }
  T135 = fun_sexpr_locQ_77;
  T134 = CALL2(CHKREF(YPdefine_method),T136,T135);
  YsyntaxYsexpr_locQ = T134;
  regsym(&YsyntaxYsexpr_locQ,"syntax","sexpr-loc?");
  T138 = YPsig(YPpair(YPPsym((P)"loc-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_loc_bound_names_78 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_names_78),YPPsym((P)"sexpr-loc-bound-names"),T138,ENVNUL);
  T142 = BOUNDP(YsyntaxYsexpr_loc_bound_names);
  if (T142 != YPfalse) {
    T141 = CHKREF(YsyntaxYsexpr_loc_bound_names);
  } else {
    T141 = YPfalse;
  }
  T140 = fun_sexpr_loc_bound_names_78;
  T139 = CALL2(CHKREF(YPdefine_method),T141,T140);
  YsyntaxYsexpr_loc_bound_names = T139;
  regsym(&YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
  T143 = YPsig(YPpair(YPPsym((P)"loc-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_loc_bound_signatures_79 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_signatures_79),YPPsym((P)"sexpr-loc-bound-signatures"),T143,ENVNUL);
  T147 = BOUNDP(YsyntaxYsexpr_loc_bound_signatures);
  if (T147 != YPfalse) {
    T146 = CHKREF(YsyntaxYsexpr_loc_bound_signatures);
  } else {
    T146 = YPfalse;
  }
  T145 = fun_sexpr_loc_bound_signatures_79;
  T144 = CALL2(CHKREF(YPdefine_method),T146,T145);
  YsyntaxYsexpr_loc_bound_signatures = T144;
  regsym(&YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
  T148 = YPsig(YPpair(YPPsym((P)"loc-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_loc_bound_bodies_80 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_bodies_80),YPPsym((P)"sexpr-loc-bound-bodies"),T148,ENVNUL);
  T152 = BOUNDP(YsyntaxYsexpr_loc_bound_bodies);
  if (T152 != YPfalse) {
    T151 = CHKREF(YsyntaxYsexpr_loc_bound_bodies);
  } else {
    T151 = YPfalse;
  }
  T150 = fun_sexpr_loc_bound_bodies_80;
  T149 = CALL2(CHKREF(YPdefine_method),T151,T150);
  YsyntaxYsexpr_loc_bound_bodies = T149;
  regsym(&YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
  T153 = YPsig(YPpair(YPPsym((P)"loc-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_loc_raw_body_81 = YPmet(FUNCODEREF(fun_sexpr_loc_raw_body_81),YPPsym((P)"sexpr-loc-raw-body"),T153,ENVNUL);
  T157 = BOUNDP(YsyntaxYsexpr_loc_raw_body);
  if (T157 != YPfalse) {
    T156 = CHKREF(YsyntaxYsexpr_loc_raw_body);
  } else {
    T156 = YPfalse;
  }
  T155 = fun_sexpr_loc_raw_body_81;
  T154 = CALL2(CHKREF(YPdefine_method),T156,T155);
  YsyntaxYsexpr_loc_raw_body = T154;
  regsym(&YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
  T158 = YPsig(YPpair(YPPsym((P)"loc-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_loc_body_82 = YPmet(FUNCODEREF(fun_sexpr_loc_body_82),YPPsym((P)"sexpr-loc-body"),T158,ENVNUL);
  T162 = BOUNDP(YsyntaxYsexpr_loc_body);
  if (T162 != YPfalse) {
    T161 = CHKREF(YsyntaxYsexpr_loc_body);
  } else {
    T161 = YPfalse;
  }
  T160 = fun_sexpr_loc_body_82;
  T159 = CALL2(CHKREF(YPdefine_method),T161,T160);
  YsyntaxYsexpr_loc_body = T159;
  regsym(&YsyntaxYsexpr_loc_body,"syntax","sexpr-loc-body");
  lit_28 = YPPsym((P)"rep");
  YsyntaxYDsexpr_iterate_tag = lit_28;
  regsym(&YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
  T163 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_iterateQ_83 = YPmet(FUNCODEREF(fun_sexpr_iterateQ_83),YPPsym((P)"sexpr-iterate?"),T163,ENVNUL);
  T167 = BOUNDP(YsyntaxYsexpr_iterateQ);
  if (T167 != YPfalse) {
    T166 = CHKREF(YsyntaxYsexpr_iterateQ);
  } else {
    T166 = YPfalse;
  }
  T165 = fun_sexpr_iterateQ_83;
  T164 = CALL2(CHKREF(YPdefine_method),T166,T165);
  YsyntaxYsexpr_iterateQ = T164;
  regsym(&YsyntaxYsexpr_iterateQ,"syntax","sexpr-iterate?");
  T168 = YPsig(YPpair(YPPsym((P)"rep-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLsymG));
  fun_sexpr_iterate_name_84 = YPmet(FUNCODEREF(fun_sexpr_iterate_name_84),YPPsym((P)"sexpr-iterate-name"),T168,ENVNUL);
  T172 = BOUNDP(YsyntaxYsexpr_iterate_name);
  if (T172 != YPfalse) {
    T171 = CHKREF(YsyntaxYsexpr_iterate_name);
  } else {
    T171 = YPfalse;
  }
  T170 = fun_sexpr_iterate_name_84;
  T169 = CALL2(CHKREF(YPdefine_method),T171,T170);
  YsyntaxYsexpr_iterate_name = T169;
  regsym(&YsyntaxYsexpr_iterate_name,"syntax","sexpr-iterate-name");
  lit_29 = YPPsym((P)"=>");
  YsyntaxYDsexpr_values_tag = lit_29;
  regsym(&YsyntaxYDsexpr_values_tag,"syntax","$sexpr-values-tag");
  T173 = YPsig(YPpair(YPPsym((P)"rep-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_iterate_signature_85 = YPmet(FUNCODEREF(fun_sexpr_iterate_signature_85),YPPsym((P)"sexpr-iterate-signature"),T173,ENVNUL);
  T177 = BOUNDP(YsyntaxYsexpr_iterate_signature);
  if (T177 != YPfalse) {
    T176 = CHKREF(YsyntaxYsexpr_iterate_signature);
  } else {
    T176 = YPfalse;
  }
  T175 = fun_sexpr_iterate_signature_85;
  T174 = CALL2(CHKREF(YPdefine_method),T176,T175);
  YsyntaxYsexpr_iterate_signature = T174;
  regsym(&YsyntaxYsexpr_iterate_signature,"syntax","sexpr-iterate-signature");
  T178 = YPsig(YPpair(YPPsym((P)"rep-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_iterate_inits_86 = YPmet(FUNCODEREF(fun_sexpr_iterate_inits_86),YPPsym((P)"sexpr-iterate-inits"),T178,ENVNUL);
  T182 = BOUNDP(YsyntaxYsexpr_iterate_inits);
  if (T182 != YPfalse) {
    T181 = CHKREF(YsyntaxYsexpr_iterate_inits);
  } else {
    T181 = YPfalse;
  }
  T180 = fun_sexpr_iterate_inits_86;
  T179 = CALL2(CHKREF(YPdefine_method),T181,T180);
  YsyntaxYsexpr_iterate_inits = T179;
  regsym(&YsyntaxYsexpr_iterate_inits,"syntax","sexpr-iterate-inits");
  T183 = YPsig(YPpair(YPPsym((P)"rep-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_iterate_body_87 = YPmet(FUNCODEREF(fun_sexpr_iterate_body_87),YPPsym((P)"sexpr-iterate-body"),T183,ENVNUL);
  T187 = BOUNDP(YsyntaxYsexpr_iterate_body);
  if (T187 != YPfalse) {
    T186 = CHKREF(YsyntaxYsexpr_iterate_body);
  } else {
    T186 = YPfalse;
  }
  T185 = fun_sexpr_iterate_body_87;
  T184 = CALL2(CHKREF(YPdefine_method),T186,T185);
  YsyntaxYsexpr_iterate_body = T184;
  regsym(&YsyntaxYsexpr_iterate_body,"syntax","sexpr-iterate-body");
  T188 = YPsig(YPpair(YPPsym((P)"rep-exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_iterate_Gloc_88 = YPmet(FUNCODEREF(fun_sexpr_iterate_Gloc_88),YPPsym((P)"sexpr-iterate->loc"),T188,ENVNUL);
  T192 = BOUNDP(YsyntaxYsexpr_iterate_Gloc);
  if (T192 != YPfalse) {
    T191 = CHKREF(YsyntaxYsexpr_iterate_Gloc);
  } else {
    T191 = YPfalse;
  }
  T190 = fun_sexpr_iterate_Gloc_88;
  T189 = CALL2(CHKREF(YPdefine_method),T191,T190);
  YsyntaxYsexpr_iterate_Gloc = T189;
  regsym(&YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
  lit_30 = YPPsym((P)"isa");
  YsyntaxYDsexpr_isa_tag = lit_30;
  regsym(&YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
  T193 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_isaQ_89 = YPmet(FUNCODEREF(fun_sexpr_isaQ_89),YPPsym((P)"sexpr-isa?"),T193,ENVNUL);
  T197 = BOUNDP(YsyntaxYsexpr_isaQ);
  if (T197 != YPfalse) {
    T196 = CHKREF(YsyntaxYsexpr_isaQ);
  } else {
    T196 = YPfalse;
  }
  T195 = fun_sexpr_isaQ_89;
  T194 = CALL2(CHKREF(YPdefine_method),T196,T195);
  YsyntaxYsexpr_isaQ = T194;
  regsym(&YsyntaxYsexpr_isaQ,"syntax","sexpr-isa?");
  T198 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_isa_parents_90 = YPmet(FUNCODEREF(fun_sexpr_isa_parents_90),YPPsym((P)"sexpr-isa-parents"),T198,ENVNUL);
  T202 = BOUNDP(YsyntaxYsexpr_isa_parents);
  if (T202 != YPfalse) {
    T201 = CHKREF(YsyntaxYsexpr_isa_parents);
  } else {
    T201 = YPfalse;
  }
  T200 = fun_sexpr_isa_parents_90;
  T199 = CALL2(CHKREF(YPdefine_method),T201,T200);
  YsyntaxYsexpr_isa_parents = T199;
  regsym(&YsyntaxYsexpr_isa_parents,"syntax","sexpr-isa-parents");
  T203 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_isa_slot_inits_91 = YPmet(FUNCODEREF(fun_sexpr_isa_slot_inits_91),YPPsym((P)"sexpr-isa-slot-inits"),T203,ENVNUL);
  T207 = BOUNDP(YsyntaxYsexpr_isa_slot_inits);
  if (T207 != YPfalse) {
    T206 = CHKREF(YsyntaxYsexpr_isa_slot_inits);
  } else {
    T206 = YPfalse;
  }
  T205 = fun_sexpr_isa_slot_inits_91;
  T204 = CALL2(CHKREF(YPdefine_method),T206,T205);
  YsyntaxYsexpr_isa_slot_inits = T204;
  regsym(&YsyntaxYsexpr_isa_slot_inits,"syntax","sexpr-isa-slot-inits");
  T208 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_isa_init_slots_92 = YPmet(FUNCODEREF(fun_sexpr_isa_init_slots_92),YPPsym((P)"sexpr-isa-init-slots"),T208,ENVNUL);
  T212 = BOUNDP(YsyntaxYsexpr_isa_init_slots);
  if (T212 != YPfalse) {
    T211 = CHKREF(YsyntaxYsexpr_isa_init_slots);
  } else {
    T211 = YPfalse;
  }
  T210 = fun_sexpr_isa_init_slots_92;
  T209 = CALL2(CHKREF(YPdefine_method),T211,T210);
  YsyntaxYsexpr_isa_init_slots = T209;
  regsym(&YsyntaxYsexpr_isa_init_slots,"syntax","sexpr-isa-init-slots");
  T213 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_isa_init_values_93 = YPmet(FUNCODEREF(fun_sexpr_isa_init_values_93),YPPsym((P)"sexpr-isa-init-values"),T213,ENVNUL);
  T217 = BOUNDP(YsyntaxYsexpr_isa_init_values);
  if (T217 != YPfalse) {
    T216 = CHKREF(YsyntaxYsexpr_isa_init_values);
  } else {
    T216 = YPfalse;
  }
  T215 = fun_sexpr_isa_init_values_93;
  T214 = CALL2(CHKREF(YPdefine_method),T216,T215);
  YsyntaxYsexpr_isa_init_values = T214;
  regsym(&YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
  lit_31 = YPPsym((P)"slot");
  YsyntaxYDsexpr_slot_tag = lit_31;
  regsym(&YsyntaxYDsexpr_slot_tag,"syntax","$sexpr-slot-tag");
  T218 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_slotQ_94 = YPmet(FUNCODEREF(fun_sexpr_slotQ_94),YPPsym((P)"sexpr-slot?"),T218,ENVNUL);
  T222 = BOUNDP(YsyntaxYsexpr_slotQ);
  if (T222 != YPfalse) {
    T221 = CHKREF(YsyntaxYsexpr_slotQ);
  } else {
    T221 = YPfalse;
  }
  T220 = fun_sexpr_slotQ_94;
  T219 = CALL2(CHKREF(YPdefine_method),T221,T220);
  YsyntaxYsexpr_slotQ = T219;
  regsym(&YsyntaxYsexpr_slotQ,"syntax","sexpr-slot?");
  T223 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_slot_object_95 = YPmet(FUNCODEREF(fun_sexpr_slot_object_95),YPPsym((P)"sexpr-slot-object"),T223,ENVNUL);
  T227 = BOUNDP(YsyntaxYsexpr_slot_object);
  if (T227 != YPfalse) {
    T226 = CHKREF(YsyntaxYsexpr_slot_object);
  } else {
    T226 = YPfalse;
  }
  T225 = fun_sexpr_slot_object_95;
  T224 = CALL2(CHKREF(YPdefine_method),T226,T225);
  YsyntaxYsexpr_slot_object = T224;
  regsym(&YsyntaxYsexpr_slot_object,"syntax","sexpr-slot-object");
  T228 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_slot_variable_96 = YPmet(FUNCODEREF(fun_sexpr_slot_variable_96),YPPsym((P)"sexpr-slot-variable"),T228,ENVNUL);
  T232 = BOUNDP(YsyntaxYsexpr_slot_variable);
  if (T232 != YPfalse) {
    T231 = CHKREF(YsyntaxYsexpr_slot_variable);
  } else {
    T231 = YPfalse;
  }
  T230 = fun_sexpr_slot_variable_96;
  T229 = CALL2(CHKREF(YPdefine_method),T231,T230);
  YsyntaxYsexpr_slot_variable = T229;
  regsym(&YsyntaxYsexpr_slot_variable,"syntax","sexpr-slot-variable");
  lit_32 = YPPsym((P)"nul");
  T233 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_slot_init_97 = YPmet(FUNCODEREF(fun_sexpr_slot_init_97),YPPsym((P)"sexpr-slot-init"),T233,ENVNUL);
  T237 = BOUNDP(YsyntaxYsexpr_slot_init);
  if (T237 != YPfalse) {
    T236 = CHKREF(YsyntaxYsexpr_slot_init);
  } else {
    T236 = YPfalse;
  }
  T235 = fun_sexpr_slot_init_97;
  T234 = CALL2(CHKREF(YPdefine_method),T236,T235);
  YsyntaxYsexpr_slot_init = T234;
  regsym(&YsyntaxYsexpr_slot_init,"syntax","sexpr-slot-init");
  lit_33 = YPPsym((P)"_x");
  lit_34 = YPPsym((P)"slot-value");
  lit_35 = YPPsym((P)"_x");
  T238 = YPsig(YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"type"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_sexpr_make_getter_98 = YPmet(FUNCODEREF(fun_sexpr_make_getter_98),YPPsym((P)"sexpr-make-getter"),T238,ENVNUL);
  T242 = BOUNDP(YsyntaxYsexpr_make_getter);
  if (T242 != YPfalse) {
    T241 = CHKREF(YsyntaxYsexpr_make_getter);
  } else {
    T241 = YPfalse;
  }
  T240 = fun_sexpr_make_getter_98;
  T239 = CALL2(CHKREF(YPdefine_method),T241,T240);
  YsyntaxYsexpr_make_getter = T239;
  regsym(&YsyntaxYsexpr_make_getter,"syntax","sexpr-make-getter");
  lit_36 = YPPsym((P)"_x");
  lit_37 = YPPsym((P)"_z");
  lit_38 = YPPsym((P)"slot-value-setter");
  lit_39 = YPPsym((P)"_x");
  lit_40 = YPPsym((P)"_z");
  T243 = YPsig(YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"type"),YPpair(YPPsym((P)"slot-type"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLlstG));
  fun_sexpr_make_setter_99 = YPmet(FUNCODEREF(fun_sexpr_make_setter_99),YPPsym((P)"sexpr-make-setter"),T243,ENVNUL);
  T247 = BOUNDP(YsyntaxYsexpr_make_setter);
  if (T247 != YPfalse) {
    T246 = CHKREF(YsyntaxYsexpr_make_setter);
  } else {
    T246 = YPfalse;
  }
  T245 = fun_sexpr_make_setter_99;
  T244 = CALL2(CHKREF(YPdefine_method),T246,T245);
  YsyntaxYsexpr_make_setter = T244;
  regsym(&YsyntaxYsexpr_make_setter,"syntax","sexpr-make-setter");
  lit_41 = YPsb((P)"-setter");
  T248 = YPsig(YPpair(YPPsym((P)"name"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLsymG));
  fun_sexpr_make_setter_name_100 = YPmet(FUNCODEREF(fun_sexpr_make_setter_name_100),YPPsym((P)"sexpr-make-setter-name"),T248,ENVNUL);
  T252 = BOUNDP(YsyntaxYsexpr_make_setter_name);
  if (T252 != YPfalse) {
    T251 = CHKREF(YsyntaxYsexpr_make_setter_name);
  } else {
    T251 = YPfalse;
  }
  T250 = fun_sexpr_make_setter_name_100;
  T249 = CALL2(CHKREF(YPdefine_method),T251,T250);
  YsyntaxYsexpr_make_setter_name = T249;
  regsym(&YsyntaxYsexpr_make_setter_name,"syntax","sexpr-make-setter-name");
  T253 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_macroQ_101 = YPmet(FUNCODEREF(fun_sexpr_macroQ_101),YPPsym((P)"sexpr-macro?"),T253,ENVNUL);
  T257 = BOUNDP(YsyntaxYsexpr_macroQ);
  if (T257 != YPfalse) {
    T256 = CHKREF(YsyntaxYsexpr_macroQ);
  } else {
    T256 = YPfalse;
  }
  T255 = fun_sexpr_macroQ_101;
  T254 = CALL2(CHKREF(YPdefine_method),T256,T255);
  YsyntaxYsexpr_macroQ = T254;
  regsym(&YsyntaxYsexpr_macroQ,"syntax","sexpr-macro?");
  lit_42 = YPPsym((P)"macro-expand");
  YsyntaxYDsexpr_macro_expand_tag = lit_42;
  regsym(&YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
  T258 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_macro_expandQ_102 = YPmet(FUNCODEREF(fun_sexpr_macro_expandQ_102),YPPsym((P)"sexpr-macro-expand?"),T258,ENVNUL);
  T262 = BOUNDP(YsyntaxYsexpr_macro_expandQ);
  if (T262 != YPfalse) {
    T261 = CHKREF(YsyntaxYsexpr_macro_expandQ);
  } else {
    T261 = YPfalse;
  }
  T260 = fun_sexpr_macro_expandQ_102;
  T259 = CALL2(CHKREF(YPdefine_method),T261,T260);
  YsyntaxYsexpr_macro_expandQ = T259;
  regsym(&YsyntaxYsexpr_macro_expandQ,"syntax","sexpr-macro-expand?");
  lit_43 = YPPsym((P)"mif");
  T264 = YsyntaxYDsexpr_syntax_if_tag = lit_43;
  regsym(&YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
  T263 = T264;
  return T263;
}

P YsyntaxY___main_2___() {
  P T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90;
  P T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74;
  P T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58;
  P T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPpair(YPPsym((P)"pat"),YPpair(YPPsym((P)"exp"),YPpair(YPPsym((P)"then"),YPpair(YPPsym((P)"else"),Ynil)))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLlstG));
  fun_sexpr_make_syntax_if_103 = YPmet(FUNCODEREF(fun_sexpr_make_syntax_if_103),YPPsym((P)"sexpr-make-syntax-if"),T0,ENVNUL);
  T4 = BOUNDP(YsyntaxYsexpr_make_syntax_if);
  if (T4 != YPfalse) {
    T3 = CHKREF(YsyntaxYsexpr_make_syntax_if);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_sexpr_make_syntax_if_103;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YsyntaxYsexpr_make_syntax_if = T1;
  regsym(&YsyntaxYsexpr_make_syntax_if,"syntax","sexpr-make-syntax-if");
  lit_44 = YPPsym((P)"comma-atsign");
  YsyntaxYTcomma_atsignT = lit_44;
  regsym(&YsyntaxYTcomma_atsignT,"syntax","*comma-atsign*");
  lit_45 = YPPsym((P)"bq-list");
  YsyntaxYTbq_listT = lit_45;
  regsym(&YsyntaxYTbq_listT,"syntax","*bq-list*");
  lit_46 = YPPsym((P)"bq-list*");
  YsyntaxYTbq_listTT = lit_46;
  regsym(&YsyntaxYTbq_listTT,"syntax","*bq-list**");
  lit_47 = YPPsym((P)"bq-append");
  YsyntaxYTbq_appendT = lit_47;
  regsym(&YsyntaxYTbq_appendT,"syntax","*bq-append*");
  lit_48 = YPPsym((P)"bq-nconc");
  YsyntaxYTbq_nconcT = lit_48;
  regsym(&YsyntaxYTbq_nconcT,"syntax","*bq-nconc*");
  lit_49 = YPPsym((P)"bq-clobberable");
  YsyntaxYTbq_clobberableT = lit_49;
  regsym(&YsyntaxYTbq_clobberableT,"syntax","*bq-clobberable*");
  lit_50 = YPPsym((P)"bq-quote");
  YsyntaxYTbq_quoteT = lit_50;
  regsym(&YsyntaxYTbq_quoteT,"syntax","*bq-quote*");
  T5 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  YsyntaxYsexpr_expand_backquote = YPmet(FUNCODEREF(YsyntaxYsexpr_expand_backquote),YPPsym((P)"sexpr-expand-backquote"),T5,ENVNUL);
  T6 = YsyntaxYsexpr_expand_backquote;
  YsyntaxYsexpr_expand_backquote = T6;
  regsym(&YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
  T7 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_build_backquote_expander_105 = YPmet(FUNCODEREF(fun_sexpr_build_backquote_expander_105),YPPsym((P)"sexpr-build-backquote-expander"),T7,ENVNUL);
  T11 = BOUNDP(YsyntaxYsexpr_build_backquote_expander);
  if (T11 != YPfalse) {
    T10 = CHKREF(YsyntaxYsexpr_build_backquote_expander);
  } else {
    T10 = YPfalse;
  }
  T9 = fun_sexpr_build_backquote_expander_105;
  T8 = CALL2(CHKREF(YPdefine_method),T10,T9);
  YsyntaxYsexpr_build_backquote_expander = T8;
  regsym(&YsyntaxYsexpr_build_backquote_expander,"syntax","sexpr-build-backquote-expander");
  lit_51 = YPPsym((P)"unquote");
  T12 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_unquoteQ_106 = YPmet(FUNCODEREF(fun_sexpr_unquoteQ_106),YPPsym((P)"sexpr-unquote?"),T12,ENVNUL);
  T16 = BOUNDP(YsyntaxYsexpr_unquoteQ);
  if (T16 != YPfalse) {
    T15 = CHKREF(YsyntaxYsexpr_unquoteQ);
  } else {
    T15 = YPfalse;
  }
  T14 = fun_sexpr_unquoteQ_106;
  T13 = CALL2(CHKREF(YPdefine_method),T15,T14);
  YsyntaxYsexpr_unquoteQ = T13;
  regsym(&YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
  lit_52 = YPPsym((P)"unquote-splicing");
  T17 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_unquote_splicingQ_107 = YPmet(FUNCODEREF(fun_sexpr_unquote_splicingQ_107),YPPsym((P)"sexpr-unquote-splicing?"),T17,ENVNUL);
  T21 = BOUNDP(YsyntaxYsexpr_unquote_splicingQ);
  if (T21 != YPfalse) {
    T20 = CHKREF(YsyntaxYsexpr_unquote_splicingQ);
  } else {
    T20 = YPfalse;
  }
  T19 = fun_sexpr_unquote_splicingQ_107;
  T18 = CALL2(CHKREF(YPdefine_method),T20,T19);
  YsyntaxYsexpr_unquote_splicingQ = T18;
  regsym(&YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
  T22 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_backquoteQ_108 = YPmet(FUNCODEREF(fun_sexpr_backquoteQ_108),YPPsym((P)"sexpr-backquote?"),T22,ENVNUL);
  T26 = BOUNDP(YsyntaxYsexpr_backquoteQ);
  if (T26 != YPfalse) {
    T25 = CHKREF(YsyntaxYsexpr_backquoteQ);
  } else {
    T25 = YPfalse;
  }
  T24 = fun_sexpr_backquoteQ_108;
  T23 = CALL2(CHKREF(YPdefine_method),T25,T24);
  YsyntaxYsexpr_backquoteQ = T23;
  regsym(&YsyntaxYsexpr_backquoteQ,"syntax","sexpr-backquote?");
  T27 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_atomQ_109 = YPmet(FUNCODEREF(fun_sexpr_atomQ_109),YPPsym((P)"sexpr-atom?"),T27,ENVNUL);
  T31 = BOUNDP(YsyntaxYsexpr_atomQ);
  if (T31 != YPfalse) {
    T30 = CHKREF(YsyntaxYsexpr_atomQ);
  } else {
    T30 = YPfalse;
  }
  T29 = fun_sexpr_atomQ_109;
  T28 = CALL2(CHKREF(YPdefine_method),T30,T29);
  YsyntaxYsexpr_atomQ = T28;
  regsym(&YsyntaxYsexpr_atomQ,"syntax","sexpr-atom?");
  T32 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"y"),Ynil)),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_nreconc_110 = YPmet(FUNCODEREF(fun_nreconc_110),YPPsym((P)"nreconc"),T32,ENVNUL);
  T36 = BOUNDP(YsyntaxYnreconc);
  if (T36 != YPfalse) {
    T35 = CHKREF(YsyntaxYnreconc);
  } else {
    T35 = YPfalse;
  }
  T34 = fun_nreconc_110;
  T33 = CALL2(CHKREF(YPdefine_method),T35,T34);
  YsyntaxYnreconc = T33;
  regsym(&YsyntaxYnreconc,"syntax","nreconc");
  lit_53 = YPsb((P)"Dotted ,@%=");
  lit_54 = YPsb((P)"Malformed ,%=");
  lit_55 = YPsb((P)"UNQUOTE-SPLICING %= AFTER BQ");
  T39 = YPsig(YPpair(YPPsym((P)"p"),YPpair(YPPsym((P)"q"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_111 = YPmet(FUNCODEREF(fun_loop_111),YPPsym((P)"loop"),T39,ENVNUL);
  T38 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_112 = YPmet(FUNCODEREF(fun_112),YPfalse,T38,ENVNUL);
  T37 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_bq_process_113 = YPmet(FUNCODEREF(fun_bq_process_113),YPPsym((P)"bq-process"),T37,ENVNUL);
  T43 = BOUNDP(YsyntaxYbq_process);
  if (T43 != YPfalse) {
    T42 = CHKREF(YsyntaxYbq_process);
  } else {
    T42 = YPfalse;
  }
  T41 = fun_bq_process_113;
  T40 = CALL2(CHKREF(YPdefine_method),T42,T41);
  YsyntaxYbq_process = T40;
  regsym(&YsyntaxYbq_process,"syntax","bq-process");
  T44 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_bracket_114 = YPmet(FUNCODEREF(fun_bracket_114),YPPsym((P)"bracket"),T44,ENVNUL);
  T48 = BOUNDP(YsyntaxYbracket);
  if (T48 != YPfalse) {
    T47 = CHKREF(YsyntaxYbracket);
  } else {
    T47 = YPfalse;
  }
  T46 = fun_bracket_114;
  T45 = CALL2(CHKREF(YPdefine_method),T47,T46);
  YsyntaxYbracket = T45;
  regsym(&YsyntaxYbracket,"syntax","bracket");
  T49 = YPsig(YPpair(YPPsym((P)"fn"),YPpair(YPPsym((P)"x"),Ynil)),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_map_tree_115 = YPmet(FUNCODEREF(fun_map_tree_115),YPPsym((P)"map-tree"),T49,ENVNUL);
  T53 = BOUNDP(YsyntaxYmap_tree);
  if (T53 != YPfalse) {
    T52 = CHKREF(YsyntaxYmap_tree);
  } else {
    T52 = YPfalse;
  }
  T51 = fun_map_tree_115;
  T50 = CALL2(CHKREF(YPdefine_method),T52,T51);
  YsyntaxYmap_tree = T50;
  regsym(&YsyntaxYmap_tree,"syntax","map-tree");
  lit_56 = YPPsym((P)"pair");
  lit_57 = YPPsym((P)"quote");
  lit_58 = YPPsym((P)"list*");
  lit_59 = YPPsym((P)"cat!");
  lit_60 = YPPsym((P)"cat");
  lit_61 = YPPsym((P)"lst");
  T54 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_bq_remove_tokens_116 = YPmet(FUNCODEREF(fun_bq_remove_tokens_116),YPPsym((P)"bq-remove-tokens"),T54,ENVNUL);
  T58 = BOUNDP(YsyntaxYbq_remove_tokens);
  if (T58 != YPfalse) {
    T57 = CHKREF(YsyntaxYbq_remove_tokens);
  } else {
    T57 = YPfalse;
  }
  T56 = fun_bq_remove_tokens_116;
  T55 = CALL2(CHKREF(YPdefine_method),T57,T56);
  YsyntaxYbq_remove_tokens = T55;
  regsym(&YsyntaxYbq_remove_tokens,"syntax","bq-remove-tokens");
  T59 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_syntax_ifQ_117 = YPmet(FUNCODEREF(fun_sexpr_syntax_ifQ_117),YPPsym((P)"sexpr-syntax-if?"),T59,ENVNUL);
  T63 = BOUNDP(YsyntaxYsexpr_syntax_ifQ);
  if (T63 != YPfalse) {
    T62 = CHKREF(YsyntaxYsexpr_syntax_ifQ);
  } else {
    T62 = YPfalse;
  }
  T61 = fun_sexpr_syntax_ifQ_117;
  T60 = CALL2(CHKREF(YPdefine_method),T62,T61);
  YsyntaxYsexpr_syntax_ifQ = T60;
  regsym(&YsyntaxYsexpr_syntax_ifQ,"syntax","sexpr-syntax-if?");
  T64 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_syntax_if_value_118 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_value_118),YPPsym((P)"sexpr-syntax-if-value"),T64,ENVNUL);
  T68 = BOUNDP(YsyntaxYsexpr_syntax_if_value);
  if (T68 != YPfalse) {
    T67 = CHKREF(YsyntaxYsexpr_syntax_if_value);
  } else {
    T67 = YPfalse;
  }
  T66 = fun_sexpr_syntax_if_value_118;
  T65 = CALL2(CHKREF(YPdefine_method),T67,T66);
  YsyntaxYsexpr_syntax_if_value = T65;
  regsym(&YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
  T69 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_syntax_if_pattern_119 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_pattern_119),YPPsym((P)"sexpr-syntax-if-pattern"),T69,ENVNUL);
  T73 = BOUNDP(YsyntaxYsexpr_syntax_if_pattern);
  if (T73 != YPfalse) {
    T72 = CHKREF(YsyntaxYsexpr_syntax_if_pattern);
  } else {
    T72 = YPfalse;
  }
  T71 = fun_sexpr_syntax_if_pattern_119;
  T70 = CALL2(CHKREF(YPdefine_method),T72,T71);
  YsyntaxYsexpr_syntax_if_pattern = T70;
  regsym(&YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
  T74 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_syntax_if_then_120 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_then_120),YPPsym((P)"sexpr-syntax-if-then"),T74,ENVNUL);
  T78 = BOUNDP(YsyntaxYsexpr_syntax_if_then);
  if (T78 != YPfalse) {
    T77 = CHKREF(YsyntaxYsexpr_syntax_if_then);
  } else {
    T77 = YPfalse;
  }
  T76 = fun_sexpr_syntax_if_then_120;
  T75 = CALL2(CHKREF(YPdefine_method),T77,T76);
  YsyntaxYsexpr_syntax_if_then = T75;
  regsym(&YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
  T79 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_syntax_if_else_121 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_else_121),YPPsym((P)"sexpr-syntax-if-else"),T79,ENVNUL);
  T83 = BOUNDP(YsyntaxYsexpr_syntax_if_else);
  if (T83 != YPfalse) {
    T82 = CHKREF(YsyntaxYsexpr_syntax_if_else);
  } else {
    T82 = YPfalse;
  }
  T81 = fun_sexpr_syntax_if_else_121;
  T80 = CALL2(CHKREF(YPdefine_method),T82,T81);
  YsyntaxYsexpr_syntax_if_else = T80;
  regsym(&YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
  T84 = YPsig(YPpair(YPPsym((P)"pat"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_sexpr_pattern_variableQ_122 = YPmet(FUNCODEREF(fun_sexpr_pattern_variableQ_122),YPPsym((P)"sexpr-pattern-variable?"),T84,ENVNUL);
  T88 = BOUNDP(YsyntaxYsexpr_pattern_variableQ);
  if (T88 != YPfalse) {
    T87 = CHKREF(YsyntaxYsexpr_pattern_variableQ);
  } else {
    T87 = YPfalse;
  }
  T86 = fun_sexpr_pattern_variableQ_122;
  T85 = CALL2(CHKREF(YPdefine_method),T87,T86);
  YsyntaxYsexpr_pattern_variableQ = T85;
  regsym(&YsyntaxYsexpr_pattern_variableQ,"syntax","sexpr-pattern-variable?");
  T89 = YPsig(YPpair(YPPsym((P)"pat"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_pattern_variable_name_123 = YPmet(FUNCODEREF(fun_sexpr_pattern_variable_name_123),YPPsym((P)"sexpr-pattern-variable-name"),T89,ENVNUL);
  T93 = BOUNDP(YsyntaxYsexpr_pattern_variable_name);
  if (T93 != YPfalse) {
    T92 = CHKREF(YsyntaxYsexpr_pattern_variable_name);
  } else {
    T92 = YPfalse;
  }
  T91 = fun_sexpr_pattern_variable_name_123;
  T90 = CALL2(CHKREF(YPdefine_method),T92,T91);
  YsyntaxYsexpr_pattern_variable_name = T90;
  regsym(&YsyntaxYsexpr_pattern_variable_name,"syntax","sexpr-pattern-variable-name");
  T95 = YPsig(YPpair(YPPsym((P)"pat"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_col_124 = YPmet(FUNCODEREF(fun_col_124),YPPsym((P)"col"),T95,ENVNUL);
  T94 = YPsig(YPpair(YPPsym((P)"pat"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_sexpr_bind_pattern_variables_125 = YPmet(FUNCODEREF(fun_sexpr_bind_pattern_variables_125),YPPsym((P)"sexpr-bind-pattern-variables"),T94,ENVNUL);
  T99 = BOUNDP(YsyntaxYsexpr_bind_pattern_variables);
  if (T99 != YPfalse) {
    T98 = CHKREF(YsyntaxYsexpr_bind_pattern_variables);
  } else {
    T98 = YPfalse;
  }
  T97 = fun_sexpr_bind_pattern_variables_125;
  T96 = CALL2(CHKREF(YPdefine_method),T98,T97);
  YsyntaxYsexpr_bind_pattern_variables = T96;
  regsym(&YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
  lit_62 = YPPsym((P)"exp");
  lit_63 = YPPsym((P)"exp");
  T100 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sexpr_make_macro_function_126 = YPmet(FUNCODEREF(fun_sexpr_make_macro_function_126),YPPsym((P)"sexpr-make-macro-function"),T100,ENVNUL);
  T104 = BOUNDP(YsyntaxYsexpr_make_macro_function);
  if (T104 != YPfalse) {
    T103 = CHKREF(YsyntaxYsexpr_make_macro_function);
  } else {
    T103 = YPfalse;
  }
  T102 = fun_sexpr_make_macro_function_126;
  T101 = CALL2(CHKREF(YPdefine_method),T103,T102);
  YsyntaxYsexpr_make_macro_function = T101;
  regsym(&YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
  T105 = YPfalse;
  return T105;
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
