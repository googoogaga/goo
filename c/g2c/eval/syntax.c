/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: syntax */

EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YLlocG,"boot","<loc>");
DEF(YsyntaxYsexpr_begin_actions,"syntax","sexpr-begin-actions");
DEF(YsyntaxYLnameG,"syntax","<name>");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YLseqG,"boot","<seq>");
DEF(YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
DEF(YsyntaxYsexpr_applicationQ,"syntax","sexpr-application?");
DEF(YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
DEF(YsyntaxYsexpr_iterateQ,"syntax","sexpr-iterate?");
DEF(YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
EXT(YruntimeYS,"runtime","/");
EXT(YruntimeYreduceA,"runtime","reduce+");
DEF(YsyntaxYDsexpr_define_class_tag,"syntax","$sexpr-define-class-tag");
DEF(YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
DEF(YsyntaxYbracket,"syntax","bracket");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YruntimeYroundS,"runtime","round/");
DEF(YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YruntimeYE,"runtime","=");
EXT(Yslot_init,"boot","slot-init");
EXT(YruntimeYrev,"runtime","rev");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YLtraitsG,"boot","<traits>");
DEF(YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
DEF(YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
DEF(YsyntaxYTbq_quoteT,"syntax","*bq-quote*");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Yfapply,"boot","fapply");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YruntimeYmap2,"runtime","map2");
DEF(YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
DEF(YsyntaxYsexpr_last_expQ,"syntax","sexpr-last-exp?");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YLsigG,"boot","<sig>");
EXT(YruntimeYini_state,"runtime","ini-state");
DEF(YsyntaxYsexpr_rest_operands,"syntax","sexpr-rest-operands");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYport_index,"runtime","port-index");
DEF(YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
DEF(YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
EXT(YobjectL,"boot","object<");
DEF(YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YruntimeYtA,"runtime","t+");
EXT(YruntimeYfrom,"runtime","from");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(YruntimeYcompose,"runtime","compose");
DEF(YsyntaxYsexpr_letQ,"syntax","sexpr-let?");
DEF(YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
DEF(YsyntaxYsexpr_define_classQ,"syntax","sexpr-define-class?");
DEF(YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
DEF(YsyntaxYsexpr_monitor_type,"syntax","sexpr-monitor-type");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeY1st,"runtime","1st");
EXT(Yfun_name,"boot","fun-name");
EXT(YruntimeYL,"runtime","<");
EXT(Yfab_sym,"boot","fab-sym");
DEF(YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
DEF(YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
EXT(YPsymbols,"boot","%symbols");
DEF(YsyntaxYsexpr_new_unique_name_counterX,"syntax","sexpr-new-unique-name-counter!");
EXT(YruntimeYas,"runtime","as");
EXT(YPsnul,"boot","%snul");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YruntimeYassqn,"runtime","assqn");
DEF(YsyntaxYsexpr_build_backquote_expander,"syntax","sexpr-build-backquote-expander");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
DEF(YsyntaxYsexpr_slot_variable,"syntax","sexpr-slot-variable");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYNE,"runtime","~=");
EXT(YruntimeYstr,"runtime","str");
DEF(YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
EXT(YruntimeYpush,"runtime","push");
EXT(YruntimeYsig,"runtime","sig");
EXT(YLcolG,"boot","<col>");
DEF(YsyntaxYsexpr_no_operandsQ,"syntax","sexpr-no-operands?");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YruntimeYmax,"runtime","max");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YmacrosYcat,"macros","cat");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(Yerror,"boot","error");
DEF(YsyntaxYDsexpr_values_tag,"syntax","$sexpr-values-tag");
DEF(YsyntaxYsexpr_isa_init_slots,"syntax","sexpr-isa-init-slots");
DEF(YsyntaxYsexpr_monitor_body,"syntax","sexpr-monitor-body");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YruntimeYLE,"runtime","<=");
DEF(YsyntaxYnreconc,"syntax","nreconc");
EXT(Ysig_value,"boot","sig-value");
DEF(YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YmacrosYtup,"macros","tup");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YLvecG,"boot","<vec>");
EXT(YruntimeYformat,"runtime","format");
EXT(YruntimeYpick,"runtime","pick");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YruntimeYG,"runtime",">");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
DEF(YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
EXT(YruntimeYfloor,"runtime","floor");
DEF(YsyntaxYTbq_listT,"syntax","*bq-list*");
DEF(YsyntaxYmap_tree,"syntax","map-tree");
EXT(YruntimeYidentity,"runtime","identity");
EXT(Ynil,"boot","nil");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YruntimeYaddress_of,"runtime","address-of");
DEF(YsyntaxYsexpr_define_class_parents,"syntax","sexpr-define-class-parents");
DEF(YsyntaxYsexpr_assignmentQ,"syntax","sexpr-assignment?");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(Ytype_error,"boot","type-error");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
DEF(YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
DEF(YsyntaxYsexpr_unique_name,"syntax","sexpr-unique-name");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YruntimeYabs,"runtime","abs");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(Ytail,"boot","tail");
DEF(YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
DEF(YsyntaxYsexpr_generic_definitionQ,"syntax","sexpr-generic-definition?");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYpop,"runtime","pop");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YruntimeYlognot,"runtime","lognot");
DEF(YsyntaxYsexpr_let_values,"syntax","sexpr-let-values");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(YruntimeYlist,"runtime","list");
EXT(YruntimeYround,"runtime","round");
EXT(YruntimeYT,"runtime","*");
EXT(YruntimeYfab,"runtime","fab");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYmodulo,"runtime","modulo");
DEF(YsyntaxYsexpr_tagged_listQ,"syntax","sexpr-tagged-list?");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
DEF(YsyntaxYsexpr_monitor_test,"syntax","sexpr-monitor-test");
EXT(YLtupG,"boot","<tup>");
DEF(YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
DEF(YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
DEF(YsyntaxYsexpr_method_parameters,"syntax","sexpr-method-parameters");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYcurry,"runtime","curry");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YruntimeYdel,"runtime","del");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
DEF(YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
EXT(YruntimeYlast,"runtime","last");
EXT(YruntimeYLtabG,"runtime","<tab>");
DEF(YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(Ynul,"boot","nul");
EXT(YruntimeYLstepG,"runtime","<step>");
DEF(YsyntaxYsexpr_make_method,"syntax","sexpr-make-method");
DEF(YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
EXT(Ytail_setter,"boot","tail-setter");
DEF(YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
EXT(YruntimeYwrite_string,"runtime","write-string");
DEF(YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
EXT(YruntimeYLportG,"runtime","<port>");
DEF(YsyntaxYDsexpr_macro_tag,"syntax","$sexpr-macro-tag");
DEF(YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
EXT(Ysig_names,"boot","sig-names");
EXT(YLlogG,"boot","<log>");
EXT(YPisa,"boot","%isa");
DEF(YsyntaxYsexpr_macroQ,"syntax","sexpr-macro?");
DEF(YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YruntimeYlen,"runtime","len");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YruntimeYdo,"runtime","do");
DEF(YsyntaxYsexpr_macro_expandQ,"syntax","sexpr-macro-expand?");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YisaQ,"boot","isa?");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(Yapply,"boot","apply");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
DEF(YsyntaxYsexpr_iterate_body,"syntax","sexpr-iterate-body");
DEF(YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
DEF(YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(Yobject_parents,"boot","object-parents");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
DEF(YsyntaxYTbq_listTT,"syntax","*bq-list**");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYdel_key,"runtime","del-key");
DEF(YsyntaxYsexpr_make_setter_name,"syntax","sexpr-make-setter-name");
EXT(Yunknown_function_error,"boot","unknown-function-error");
DEF(YsyntaxYsexpr_operator,"syntax","sexpr-operator");
DEF(YsyntaxYsexpr_unwind_protectQ,"syntax","sexpr-unwind-protect?");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YruntimeYlocative_value,"runtime","locative-value");
DEF(YsyntaxYsexpr_function_parameters,"syntax","sexpr-function-parameters");
EXT(YLgenG,"boot","<gen>");
DEF(YsyntaxYsexpr_method_definitionQ,"syntax","sexpr-method-definition?");
DEF(YsyntaxYsexpr_slotQ,"syntax","sexpr-slot?");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YmacrosYEE,"macros","==");
DEF(YsyntaxYbq_process,"syntax","bq-process");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(Yfun_mets,"boot","fun-mets");
DEF(YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
DEF(YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
EXT(YruntimeYassq,"runtime","assq");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YruntimeYport_contents,"runtime","port-contents");
DEF(YsyntaxYDsexpr_slot_tag,"syntax","$sexpr-slot-tag");
DEF(YsyntaxYsexpr_syntax_definitionQ,"syntax","sexpr-syntax-definition?");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(Ynot,"boot","not");
EXT(YLchrG,"boot","<chr>");
DEF(YsyntaxYsexpr_quotedQ,"syntax","sexpr-quoted?");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YmacrosYmap,"macros","map");
DEF(YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
DEF(YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYmin,"runtime","min");
DEF(YsyntaxYsexpr_function_definitionQ,"syntax","sexpr-function-definition?");
DEF(YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
EXT(YLanyG,"boot","<any>");
DEF(YsyntaxYsexpr_make_getter,"syntax","sexpr-make-getter");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
DEF(YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
DEF(YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(YruntimeYlen_setter,"runtime","len-setter");
DEF(YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
EXT(Yobject_slots,"boot","object-slots");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
DEF(YsyntaxYsexpr_backquoteQ,"syntax","sexpr-backquote?");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YruntimeYfloorS,"runtime","floor/");
DEF(YsyntaxYsexpr_blockQ,"syntax","sexpr-block?");
EXT(YruntimeYLerrorG,"runtime","<error>");
DEF(YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYdo2,"runtime","do2");
DEF(YsyntaxYsexpr_first_operand,"syntax","sexpr-first-operand");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYA,"runtime","+");
DEF(YsyntaxYsexpr_methodQ,"syntax","sexpr-method?");
EXT(YLintG,"boot","<int>");
EXT(YruntimeYpos,"runtime","pos");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYkeys,"runtime","keys");
DEF(YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
DEF(YsyntaxYsexpr_isa_parents,"syntax","sexpr-isa-parents");
DEF(YsyntaxYsexpr_syntax_ifQ,"syntax","sexpr-syntax-if?");
EXT(Yfind_setter,"boot","find-setter");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYposQ,"runtime","pos?");
DEF(YsyntaxYbq_remove_tokens,"syntax","bq-remove-tokens");
DEF(YsyntaxYsexpr_iterate_inits,"syntax","sexpr-iterate-inits");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
DEF(YsyntaxYsexpr_self_evaluatingQ,"syntax","sexpr-self-evaluating?");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
DEF(YsyntaxYsexpr_make_if,"syntax","sexpr-make-if");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
DEF(YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
DEF(YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
DEF(YsyntaxYsexpr_iterate_name,"syntax","sexpr-iterate-name");
EXT(Ysym_name,"boot","sym-name");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
DEF(YsyntaxYeval,"syntax","eval");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YPdefine_method,"boot","%define-method");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYash,"runtime","ash");
EXT(YruntimeYto_digit,"runtime","to-digit");
DEF(YsyntaxYfind_option,"syntax","find-option");
EXT(Yslot_getter,"boot","slot-getter");
EXT(Yobject_direct_parents,"boot","object-direct-parents");
EXT(Yslot_value_setter,"boot","slot-value-setter");
DEF(YsyntaxYsexpr_let_namesAvalues,"syntax","sexpr-let-names+values");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
DEF(YsyntaxYsexpr_pattern_variable_name,"syntax","sexpr-pattern-variable-name");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
DEF(YsyntaxYsexpr_loc_body,"syntax","sexpr-loc-body");
EXT(YruntimeYvec,"runtime","vec");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YruntimeYfalse_or,"runtime","false-or");
DEF(YsyntaxYsexpr_beginQ,"syntax","sexpr-begin?");
DEF(YsyntaxYTbq_appendT,"syntax","*bq-append*");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
DEF(YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
DEF(YsyntaxYsexpr_make_quote,"syntax","sexpr-make-quote");
EXT(YruntimeYalways,"runtime","always");
DEF(YsyntaxYsexpr_pattern_variableQ,"syntax","sexpr-pattern-variable?");
DEF(YsyntaxYsexpr_iterate_signature,"syntax","sexpr-iterate-signature");
EXT(YruntimeYsub,"runtime","sub");
DEF(YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
DEF(YsyntaxYsexpr_make_syntax_if,"syntax","sexpr-make-syntax-if");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
DEF(YsyntaxYsexpr_definitionQ,"syntax","sexpr-definition?");
EXT(YruntimeYlsh,"runtime","lsh");
DEF(YsyntaxYsexpr_isa_slot_inits,"syntax","sexpr-isa-slot-inits");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(Ysig_arity,"boot","sig-arity");
DEF(YsyntaxYsexpr_let_bound_variables,"syntax","sexpr-let-bound-variables");
EXT(YruntimeYin,"runtime","in");
DEF(YsyntaxYsexpr_method_value,"syntax","sexpr-method-value");
EXT(YruntimeYfill,"runtime","fill");
DEF(YsyntaxYsexpr_operands,"syntax","sexpr-operands");
DEF(YsyntaxYTbq_clobberableT,"syntax","*bq-clobberable*");
EXT(YruntimeYalter,"runtime","alter");
EXT(YruntimeYout,"runtime","out");
DEF(YsyntaxYsexpr_let_body,"syntax","sexpr-let-body");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
DEF(YsyntaxYsexpr_make_setter,"syntax","sexpr-make-setter");
DEF(YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
EXT(YruntimeYadd,"runtime","add");
DEF(YsyntaxYTcomma_atsignT,"syntax","*comma-atsign*");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
DEF(YsyntaxYsexpr_slot_init,"syntax","sexpr-slot-init");
DEF(YsyntaxYTunique_name_counterT,"syntax","*unique-name-counter*");
EXT(YruntimeYLbufG,"runtime","<buf>");
DEF(YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
DEF(YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(Ylst,"boot","lst");
DEF(YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
DEF(YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
DEF(YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
DEF(YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
EXT(Yfind_getter,"boot","find-getter");
EXT(Yobject_direct_slots,"boot","object-direct-slots");
EXT(YruntimeYNEE,"runtime","~==");
DEF(YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YruntimeYempty,"runtime","empty");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
DEF(YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
DEF(YsyntaxYsexpr_slot_object,"syntax","sexpr-slot-object");
DEF(YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
EXT(YLmetG,"boot","<met>");
DEF(YsyntaxYTbq_nconcT,"syntax","*bq-nconc*");
EXT(YruntimeYallQ,"runtime","all?");
DEF(YsyntaxYsexpr_isaQ,"syntax","sexpr-isa?");
EXT(YruntimeYtL,"runtime","t<");
DEF(YsyntaxYsexpr_monitor_info,"syntax","sexpr-monitor-info");
EXT(YruntimeYlogior,"runtime","logior");
DEF(YsyntaxYsexpr_rest_exps,"syntax","sexpr-rest-exps");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(Yhead,"boot","head");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYdefault,"runtime","default");
EXT(Yslot_value,"boot","slot-value");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(Yfun_value,"boot","fun-value");
EXT(Ysig_specs,"boot","sig-specs");
EXT(Yfun_names,"boot","fun-names");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YruntimeYGE,"runtime",">=");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
DEF(YsyntaxYsexpr_locQ,"syntax","sexpr-loc?");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
DEF(YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
EXT(YPvnul,"boot","%vnul");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
DEF(YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
EXT(YLfloG,"boot","<flo>");
DEF(YsyntaxYsexpr_monitorQ,"syntax","sexpr-monitor?");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YruntimeYneg,"runtime","neg");
DEF(YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YLflatG,"boot","<flat>");
DEF(YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
DEF(YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
DEF(YsyntaxYsexpr_ifQ,"syntax","sexpr-if?");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(YruntimeYforce_output,"runtime","force-output");
DEF(YsyntaxYsexpr_atomQ,"syntax","sexpr-atom?");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
DEF(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(YLlstG,"boot","<lst>");
DEF(YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
EXT(Yhead_setter,"boot","head-setter");
DEF(YsyntaxYsexpr_first_exp,"syntax","sexpr-first-exp");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YPPmacro,"boot","%%macro");
DEF(YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YPcall_next_method,"boot","%call-next-method");
EXT(YruntimeYrevX,"runtime","rev!");
DEF(YsyntaxYsexpr_monitor_expand,"syntax","sexpr-monitor-expand");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYtE,"runtime","t=");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YruntimeY3rd,"runtime","3rd");
DEF(YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
DEF(YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
DEF(YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
DEF(YsyntaxYsexpr_function_value,"syntax","sexpr-function-value");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_180);
DEFLIT(lit_14);
DEFLIT(lit_217);
DEFLIT(lit_167);
DEFLIT(lit_195);
DEFLIT(lit_3);
DEFLIT(lit_13);
DEFLIT(lit_27);
DEFLIT(lit_73);
DEFLIT(lit_116);
DEFLIT(lit_199);
DEFLIT(lit_240);
DEFLIT(lit_131);
DEFLIT(lit_230);
DEFLIT(lit_80);
DEFLIT(lit_136);
DEFLIT(lit_86);
DEFLIT(lit_216);
DEFLIT(lit_46);
DEFLIT(lit_17);
DEFLIT(lit_11);
DEFLIT(lit_110);
DEFLIT(lit_227);
DEFLIT(lit_102);
DEFLIT(lit_40);
DEFLIT(lit_155);
DEFLIT(lit_133);
DEFLIT(lit_178);
DEFLIT(lit_223);
DEFLIT(lit_55);
DEFLIT(lit_94);
DEFLIT(lit_206);
DEFLIT(lit_153);
DEFLIT(lit_108);
DEFLIT(lit_134);
DEFLIT(lit_9);
DEFLIT(lit_15);
DEFLIT(lit_170);
DEFLIT(lit_65);
DEFLIT(lit_184);
DEFLIT(lit_77);
DEFLIT(lit_25);
DEFLIT(lit_8);
DEFLIT(lit_144);
DEFLIT(lit_128);
DEFLIT(lit_42);
DEFLIT(lit_7);
DEFLIT(lit_175);
DEFLIT(lit_56);
DEFLIT(lit_66);
DEFLIT(lit_205);
DEFLIT(lit_39);
DEFLIT(lit_10);
DEFLIT(lit_138);
DEFLIT(lit_171);
DEFLIT(lit_54);
DEFLIT(lit_47);
DEFLIT(lit_132);
DEFLIT(lit_0);
DEFLIT(lit_208);
DEFLIT(lit_49);
DEFLIT(lit_222);
DEFLIT(lit_209);
DEFLIT(lit_130);
DEFLIT(lit_181);
DEFLIT(lit_192);
DEFLIT(lit_190);
DEFLIT(lit_149);
DEFLIT(lit_62);
DEFLIT(lit_224);
DEFLIT(lit_38);
DEFLIT(lit_35);
DEFLIT(lit_156);
DEFLIT(lit_207);
DEFLIT(lit_29);
DEFLIT(lit_59);
DEFLIT(lit_161);
DEFLIT(lit_51);
DEFLIT(lit_231);
DEFLIT(lit_84);
DEFLIT(lit_57);
DEFLIT(lit_96);
DEFLIT(lit_122);
DEFLIT(lit_142);
DEFLIT(lit_82);
DEFLIT(lit_32);
DEFLIT(lit_121);
DEFLIT(lit_174);
DEFLIT(lit_235);
DEFLIT(lit_5);
DEFLIT(lit_41);
DEFLIT(lit_98);
DEFLIT(lit_74);
DEFLIT(lit_104);
DEFLIT(lit_228);
DEFLIT(lit_213);
DEFLIT(lit_204);
DEFLIT(lit_221);
DEFLIT(lit_4);
DEFLIT(lit_234);
DEFLIT(lit_245);
DEFLIT(lit_241);
DEFLIT(lit_214);
DEFLIT(lit_22);
DEFLIT(lit_196);
DEFLIT(lit_31);
DEFLIT(lit_233);
DEFLIT(lit_2);
DEFLIT(lit_69);
DEFLIT(lit_106);
DEFLIT(lit_48);
DEFLIT(lit_53);
DEFLIT(lit_158);
DEFLIT(lit_107);
DEFLIT(lit_37);
DEFLIT(lit_239);
DEFLIT(lit_164);
DEFLIT(lit_78);
DEFLIT(lit_33);
DEFLIT(lit_95);
DEFLIT(lit_211);
DEFLIT(lit_126);
DEFLIT(lit_12);
DEFLIT(lit_193);
DEFLIT(lit_28);
DEFLIT(lit_109);
DEFLIT(lit_157);
DEFLIT(lit_61);
DEFLIT(lit_99);
DEFLIT(lit_16);
DEFLIT(lit_194);
DEFLIT(lit_188);
DEFLIT(lit_183);
DEFLIT(lit_141);
DEFLIT(lit_36);
DEFLIT(lit_34);
DEFLIT(lit_68);
DEFLIT(lit_105);
DEFLIT(lit_186);
DEFLIT(lit_145);
DEFLIT(lit_163);
DEFLIT(lit_238);
DEFLIT(lit_219);
DEFLIT(lit_85);
DEFLIT(lit_123);
DEFLIT(lit_20);
DEFLIT(lit_81);
DEFLIT(lit_160);
DEFLIT(lit_140);
DEFLIT(lit_93);
DEFLIT(lit_111);
DEFLIT(lit_212);
DEFLIT(lit_169);
DEFLIT(lit_101);
DEFLIT(lit_91);
DEFLIT(lit_45);
DEFLIT(lit_92);
DEFLIT(lit_50);
DEFLIT(lit_43);
DEFLIT(lit_150);
DEFLIT(lit_162);
DEFLIT(lit_76);
DEFLIT(lit_89);
DEFLIT(lit_79);
DEFLIT(lit_18);
DEFLIT(lit_197);
DEFLIT(lit_172);
DEFLIT(lit_1);
DEFLIT(lit_179);
DEFLIT(lit_189);
DEFLIT(lit_71);
DEFLIT(lit_168);
DEFLIT(lit_191);
DEFLIT(lit_6);
DEFLIT(lit_152);
DEFLIT(lit_60);
DEFLIT(lit_21);
DEFLIT(lit_244);
DEFLIT(lit_67);
DEFLIT(lit_100);
DEFLIT(lit_232);
DEFLIT(lit_185);
DEFLIT(lit_203);
DEFLIT(lit_125);
DEFLIT(lit_198);
DEFLIT(lit_115);
DEFLIT(lit_24);
DEFLIT(lit_236);
DEFLIT(lit_52);
DEFLIT(lit_143);
DEFLIT(lit_215);
DEFLIT(lit_210);
DEFLIT(lit_87);
DEFLIT(lit_83);
DEFLIT(lit_117);
DEFLIT(lit_135);
DEFLIT(lit_103);
DEFLIT(lit_176);
DEFLIT(lit_58);
DEFLIT(lit_187);
DEFLIT(lit_90);
DEFLIT(lit_119);
DEFLIT(lit_201);
DEFLIT(lit_218);
DEFLIT(lit_114);
DEFLIT(lit_220);
DEFLIT(lit_200);
DEFLIT(lit_63);
DEFLIT(lit_242);
DEFLIT(lit_243);
DEFLIT(lit_26);
DEFLIT(lit_147);
DEFLIT(lit_165);
DEFLIT(lit_97);
DEFLIT(lit_124);
DEFLIT(lit_137);
DEFLIT(lit_75);
DEFLIT(lit_229);
DEFLIT(lit_113);
DEFLIT(lit_173);
DEFLIT(lit_129);
DEFLIT(lit_64);
DEFLIT(lit_120);
DEFLIT(lit_127);
DEFLIT(lit_72);
DEFLIT(lit_177);
DEFLIT(lit_151);
DEFLIT(lit_23);
DEFLIT(lit_225);
DEFLIT(lit_146);
DEFLIT(lit_237);
DEFLIT(lit_154);
DEFLIT(lit_166);
DEFLIT(lit_30);
DEFLIT(lit_70);
DEFLIT(lit_44);
DEFLIT(lit_118);
DEFLIT(lit_88);
DEFLIT(lit_112);
DEFLIT(lit_226);
DEFLIT(lit_182);
DEFLIT(lit_159);
DEFLIT(lit_19);
DEFLIT(lit_202);
DEFLIT(lit_148);
DEFLIT(lit_139);

/* FUNCTIONS: */

LOCFOR(fun_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_3);
LOCFOR(fun_4);
LOCFOR(fun_5);
LOCFOR(fun_6);
LOCFOR(fun_7);
LOCFOR(fun_8);
LOCFOR(fun_9);
LOCFOR(fun_10);
LOCFOR(fun_11);
LOCFOR(fun_12);
LOCFOR(fun_13);
LOCFOR(fun_14);
LOCFOR(fun_15);
LOCFOR(fun_16);
LOCFOR(fun_17);
LOCFOR(fun_18);
LOCFOR(fun_19);
LOCFOR(fun_20);
LOCFOR(fun_21);
LOCFOR(fun_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_35);
LOCFOR(fun_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_46);
LOCFOR(fun_47);
LOCFOR(fun_48);
LOCFOR(fun_49);
LOCFOR(fun_x_1232_50);
LOCFOR(fun_51);
LOCFOR(fun_52);
FUNFOR(YsyntaxYfind_option);
LOCFOR(fun_x_1234_54);
LOCFOR(fun_55);
LOCFOR(fun_56);
LOCFOR(fun_x_1238_57);
LOCFOR(fun_58);
LOCFOR(fun_x_1236_59);
LOCFOR(fun_60);
LOCFOR(fun_61);
LOCFOR(fun_62);
LOCFOR(fun_63);
LOCFOR(fun_64);
LOCFOR(fun_65);
LOCFOR(fun_66);
LOCFOR(fun_67);
LOCFOR(fun_68);
LOCFOR(fun_69);
LOCFOR(fun_70);
LOCFOR(fun_71);
LOCFOR(fun_72);
LOCFOR(fun_73);
LOCFOR(fun_74);
LOCFOR(fun_75);
LOCFOR(fun_76);
LOCFOR(fun_77);
LOCFOR(fun_78);
LOCFOR(fun_79);
LOCFOR(fun_80);
LOCFOR(fun_81);
LOCFOR(fun_82);
LOCFOR(fun_83);
LOCFOR(fun_inner_84);
LOCFOR(fun_loop_85);
LOCFOR(fun_86);
LOCFOR(fun_col_87);
LOCFOR(fun_88);
LOCFOR(fun_89);
LOCFOR(fun_90);
LOCFOR(fun_91);
LOCFOR(fun_92);
LOCFOR(fun_93);
LOCFOR(fun_94);
LOCFOR(fun_95);
LOCFOR(fun_96);
LOCFOR(fun_97);
LOCFOR(fun_98);
LOCFOR(fun_99);
LOCFOR(fun_100);
LOCFOR(fun_101);
LOCFOR(fun_102);
LOCFOR(fun_103);
LOCFOR(fun_104);
LOCFOR(fun_105);
LOCFOR(fun_106);
LOCFOR(fun_107);
LOCFOR(fun_108);
LOCFOR(fun_109);
LOCFOR(fun_110);
LOCFOR(fun_111);
LOCFOR(fun_112);
LOCFOR(fun_113);
LOCFOR(fun_114);
LOCFOR(fun_115);
LOCFOR(fun_116);
LOCFOR(fun_117);
FUNFOR(YsyntaxYsexpr_expand_backquote);
LOCFOR(fun_119);
LOCFOR(fun_120);
LOCFOR(fun_121);
LOCFOR(fun_122);
LOCFOR(fun_123);
LOCFOR(fun_124);
LOCFOR(fun_loop_125);
LOCFOR(fun_126);
LOCFOR(fun_127);
LOCFOR(fun_128);
LOCFOR(fun_129);
LOCFOR(fun_130);
LOCFOR(fun_131);
LOCFOR(fun_132);
LOCFOR(fun_133);
LOCFOR(fun_134);
LOCFOR(fun_135);
LOCFOR(fun_136);
LOCFOR(fun_137);
LOCFOR(fun_col_138);
LOCFOR(fun_139);
LOCFOR(fun_140);
extern P YsyntaxY___main_0___ ();
extern P YsyntaxY___main_1___ ();
extern P YsyntaxY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_0) {
  ARG(exp_, 0);
  P tmpF1138;
  P tmpF1137;
  P tmpF1136;
  P tmpF1135;
  P tmpF1134;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T15 = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLnumG));
  tmpF1134 = T15;
  if (tmpF1134 != YPfalse) {
    T1 = tmpF1134;
  } else {
    T14 = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLchrG));
    tmpF1135 = T14;
    if (tmpF1135 != YPfalse) {
      T3 = tmpF1135;
    } else {
      T13 = CALL2(CHKREF(YmacrosYEE),exp_,YPtrue);
      tmpF1136 = T13;
      if (tmpF1136 != YPfalse) {
        T5 = tmpF1136;
      } else {
        T12 = CALL2(CHKREF(YmacrosYEE),exp_,YPfalse);
        tmpF1137 = T12;
        if (tmpF1137 != YPfalse) {
          T7 = tmpF1137;
        } else {
          T11 = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLstrG));
          tmpF1138 = T11;
          if (tmpF1138 != YPfalse) {
            T9 = tmpF1138;
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

FUNCODEDEF(fun_1) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLsymG));
  RET(T0);
}

FUNCODEDEF(fun_2) {
  ARG(tag_, 0);
  ARG(exp_, 1);
  P tmpF1139;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLlstG));
  tmpF1139 = T4;
  if (tmpF1139 != YPfalse) {
    T3 = CALL1(CHKREF(Yhead),exp_);
    T2 = CALL2(CHKREF(YmacrosYEE),T3,tag_);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_3) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_quote_tag));
  RET(T0);
}

FUNCODEDEF(fun_4) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Ylst),CHKREF(YsyntaxYDsexpr_quote_tag),exp_);
  RET(T0);
}

FUNCODEDEF(fun_5) {
  ARG(quot_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),quot_);
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_set_tag));
  RET(T0);
}

FUNCODEDEF(fun_7) {
  ARG(assn_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),assn_);
  QRET(T0);
}

FUNCODEDEF(fun_8) {
  ARG(assn_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY3rd),assn_);
  QRET(T0);
}

FUNCODEDEF(fun_9) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY1st),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_10) {
  ARG(exp_, 0);
  P a1;
loop:
  QRET(exp_);
}

FUNCODEDEF(fun_11) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_12) {
  ARG(exp_, 0);
  P a1;
loop:
  QRET(CHKREF(lit_17));
}

FUNCODEDEF(fun_13) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_define_tag));
  RET(T0);
}

FUNCODEDEF(fun_14) {
  ARG(defn_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),defn_);
  QRET(T0);
}

FUNCODEDEF(fun_15) {
  ARG(defn_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY3rd),defn_);
  QRET(T0);
}

FUNCODEDEF(fun_16) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_define_syntax_tag));
  RET(T0);
}

FUNCODEDEF(fun_17) {
  ARG(defn_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(Ytail),defn_);
  T1 = CALL1(CHKREF(Yhead),T2);
  T0 = CALL1(CHKREF(YruntimeY1st),T1);
  QRET(T0);
}

FUNCODEDEF(fun_18) {
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

FUNCODEDEF(fun_19) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_define_function_tag));
  RET(T0);
}

FUNCODEDEF(fun_20) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_define_method_tag));
  RET(T0);
}

FUNCODEDEF(fun_21) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_define_generic_tag));
  RET(T0);
}

FUNCODEDEF(fun_22) {
  ARG(defn_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),defn_);
  QRET(T0);
}

FUNCODEDEF(fun_23) {
  ARG(defn_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeYlen),defn_);
  T0 = CALL2(CHKREF(YruntimeYE),T1,YPint((P)2));
  RET(T0);
}

FUNCODEDEF(fun_24) {
  ARG(signature_, 0);
  P values_spec_indexF1140;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL2(CHKREF(YruntimeYpos),signature_,CHKREF(lit_39));
  values_spec_indexF1140 = T4;
  T3 = CALL2(CHKREF(YmacrosYEE),values_spec_indexF1140,CHKREF(Ynul));
  if (T3 != YPfalse) {
    T1 = signature_;
  } else {
    T2 = CALL3(CHKREF(YruntimeYsub),signature_,YPint((P)0),values_spec_indexF1140);
    T1 = T2;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_25) {
  ARG(signature_, 0);
  P valueF1142;
  P values_spec_indexF1141;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = CALL2(CHKREF(YruntimeYpos),signature_,CHKREF(lit_39));
  values_spec_indexF1141 = T12;
  T11 = CALL2(CHKREF(YmacrosYEE),values_spec_indexF1141,CHKREF(Ynul));
  if (T11 != YPfalse) {
    T1 = YPfalse;
  } else {
    T10 = CALL2(CHKREF(YruntimeYA),values_spec_indexF1141,YPint((P)1));
    T9 = CALL2(CHKREF(YruntimeYelt),signature_,T10);
    valueF1142 = T9;
    T8 = CALL2(CHKREF(YisaQ),valueF1142,CHKREF(YLlstG));
    if (T8 != YPfalse) {
      T7 = CALL1(CHKREF(Yhead),valueF1142);
      T6 = CALL2(CHKREF(YmacrosYEE),T7,CHKREF(lit_42));
      if (T6 != YPfalse) {
        T4 = CHKREF(lit_41);
      } else {
        T5 = CALL1(CHKREF(YruntimeY2nd),valueF1142);
        T4 = T5;
      }
      T3 = T4;
    } else {
      T3 = valueF1142;
    }
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  ARG(defn_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY3rd),defn_);
  RET(T0);
}

FUNCODEDEF(fun_27) {
  ARG(defn_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YsyntaxYsexpr_function_signature),defn_);
  T0 = CALL1(CHKREF(YsyntaxYsexpr_signature_parameters),T1);
  RET(T0);
}

FUNCODEDEF(fun_28) {
  ARG(defn_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YsyntaxYsexpr_function_signature),defn_);
  T0 = CALL1(CHKREF(YsyntaxYsexpr_signature_value),T1);
  RET(T0);
}

FUNCODEDEF(fun_29) {
  ARG(defn_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(Ytail),defn_);
  T1 = CALL1(CHKREF(Ytail),T2);
  T0 = CALL1(CHKREF(Ytail),T1);
  QRET(T0);
}

FUNCODEDEF(fun_30) {
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

FUNCODEDEF(fun_31) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_method_tag));
  RET(T0);
}

FUNCODEDEF(fun_32) {
  ARG(method_exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),method_exp_);
  RET(T0);
}

FUNCODEDEF(fun_33) {
  ARG(method_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YsyntaxYsexpr_method_signature),method_exp_);
  T0 = CALL1(CHKREF(YsyntaxYsexpr_signature_parameters),T1);
  RET(T0);
}

FUNCODEDEF(fun_34) {
  ARG(method_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YsyntaxYsexpr_method_signature),method_exp_);
  T0 = CALL1(CHKREF(YsyntaxYsexpr_signature_value),T1);
  QRET(T0);
}

FUNCODEDEF(fun_35) {
  ARG(method_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(Ytail),method_exp_);
  T0 = CALL1(CHKREF(Ytail),T1);
  RET(T0);
}

FUNCODEDEF(fun_36) {
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

FUNCODEDEF(fun_37) {
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

FUNCODEDEF(fun_38) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_if_tag));
  RET(T0);
}

FUNCODEDEF(fun_39) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_40) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY3rd),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_41) {
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

FUNCODEDEF(fun_42) {
  ARG(else_, 0);
  ARG(then_, 1);
  ARG(test_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALLN(CHKREF(Ylst),4,CHKREF(YsyntaxYDsexpr_if_tag),test_,then_,else_);
  RET(T0);
}

FUNCODEDEF(fun_43) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_bind_exit_tag));
  RET(T0);
}

FUNCODEDEF(fun_44) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(Ytail),exp_);
  T0 = CALL1(CHKREF(Ytail),T1);
  RET(T0);
}

FUNCODEDEF(fun_46) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_unwind_protect_tag));
  RET(T0);
}

FUNCODEDEF(fun_47) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_48) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(Ytail),exp_);
  T0 = CALL1(CHKREF(Ytail),T1);
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_monitor_tag));
  RET(T0);
}

FUNCODEDEF(fun_x_1232_50) {
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
  P x_1231F1152;
  P x_1231F1151;
  P x_1231F1150;
  P x_1231F1149;
  P optionsF1148;
  P bodyF1147;
  P handlerF1146;
  P optionsF1145;
  P x_1231F1144;
  P x_1232F1143;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T38 = FUNSHELL(0,fun_x_1232_50,2);
  x_1232F1143 = T38;
  FUNINIT(x_1232F1143, 2,FREEREF(0),return_);
  x_1231F1144 = FREEREF(0);
  optionsF1145 = YPfalse;
  optionsF1145 = BOXFAB(optionsF1145);
  handlerF1146 = YPfalse;
  handlerF1146 = BOXFAB(handlerF1146);
  bodyF1147 = YPfalse;
  bodyF1147 = BOXFAB(bodyF1147);
  T19 = CALL2(CHKREF(YisaQ),x_1231F1144,CHKREF(YLlstG));
  if (T19 != YPfalse) {
    T18 = CALL3(CHKREF(YmacrosYmatch_atom),x_1231F1144,CHKREF(lit_77),x_1232F1143);
    x_1231F1149 = T18;
    T16 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1231F1149,x_1232F1143);
    BOXVAL(optionsF1145) = T16;
    T17 = CALL1(CHKREF(Ytail),x_1231F1149);
    x_1231F1150 = T17;
    T14 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1231F1150,x_1232F1143);
    BOXVAL(handlerF1146) = T14;
    T15 = CALL1(CHKREF(Ytail),x_1231F1150);
    x_1231F1151 = T15;
    BOXVAL(bodyF1147) = x_1231F1151;
    x_1231F1152 = Ynil;
    T13 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1231F1152,x_1232F1143);
    T12 = T13;
    T11 = T12;
    T10 = T11;
    T9 = T10;
  } else {
    T8 = CALL2(x_1232F1143,CHKREF(lit_82),x_1231F1144);
  }
  T37 = BOXVAL(optionsF1145);
  T36 = CALL2(CHKREF(YisaQ),T37,CHKREF(YLsymG));
  if (T36 != YPfalse) {
    T35 = CALL1(CHKREF(Ylst),CHKREF(lit_81));
    T34 = BOXVAL(optionsF1145);
    T33 = CALL1(CHKREF(Ylst),T34);
    T32 = CALL3(CHKREF(YmacrosYcat),T35,T33,Ynil);
    T31 = CALL1(CHKREF(Ylst),T32);
    T30 = CALL2(CHKREF(YmacrosYcat),T31,Ynil);
    T28 = T30;
  } else {
    T29 = BOXVAL(optionsF1145);
    T28 = T29;
  }
  optionsF1148 = T28;
  T27 = CALL1(CHKREF(YsyntaxYsexpr_monitor_type),optionsF1148);
  T26 = CALL1(CHKREF(YsyntaxYsexpr_monitor_info),optionsF1148);
  T25 = CALL1(CHKREF(YsyntaxYsexpr_monitor_test),optionsF1148);
  T24 = BOXVAL(handlerF1146);
  T23 = BOXVAL(bodyF1147);
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

FUNCODEDEF(fun_52) {
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

FUNCODEDEF(fun_x_1234_54) {
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
  P x_1233F1156;
  P typeF1155;
  P x_1233F1154;
  P x_1234F1153;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T11 = FUNSHELL(0,fun_x_1234_54,2);
  x_1234F1153 = T11;
  FUNINIT(x_1234F1153, 2,FREEREF(0),return_);
  x_1233F1154 = FREEREF(0);
  typeF1155 = YPfalse;
  typeF1155 = BOXFAB(typeF1155);
  T9 = CALL2(CHKREF(YisaQ),x_1233F1154,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T7 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1233F1154,x_1234F1153);
    BOXVAL(typeF1155) = T7;
    T8 = CALL1(CHKREF(Ytail),x_1233F1154);
    x_1233F1156 = T8;
    T6 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1233F1156,x_1234F1153);
    T5 = T6;
  } else {
    T4 = CALL2(x_1234F1153,CHKREF(lit_82),x_1233F1154);
  }
  T10 = BOXVAL(typeF1155);
  T2 = T10;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_56) {
  ARG(options_, 0);
  P type_listF1157;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL3(CHKREF(YsyntaxYfind_option),options_,CHKREF(lit_81),CHKREF(lit_94));
  type_listF1157 = T3;
  T2 = FUNFAB(fun_55,1,type_listF1157);
  T1 = with_exit(T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1238_57) {
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
  P x_1237F1163;
  P x_1237F1162;
  P argumentsF1161;
  P messageF1160;
  P x_1237F1159;
  P x_1238F1158;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T30 = FUNSHELL(0,fun_x_1238_57,2);
  x_1238F1158 = T30;
  FUNINIT(x_1238F1158, 2,FREEREF(0),return_);
  x_1237F1159 = FREEREF(0);
  messageF1160 = YPfalse;
  messageF1160 = BOXFAB(messageF1160);
  argumentsF1161 = YPfalse;
  argumentsF1161 = BOXFAB(argumentsF1161);
  T12 = CALL2(CHKREF(YisaQ),x_1237F1159,CHKREF(YLlstG));
  if (T12 != YPfalse) {
    T10 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1237F1159,x_1238F1158);
    BOXVAL(messageF1160) = T10;
    T11 = CALL1(CHKREF(Ytail),x_1237F1159);
    x_1237F1162 = T11;
    BOXVAL(argumentsF1161) = x_1237F1162;
    x_1237F1163 = Ynil;
    T9 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1237F1163,x_1238F1158);
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1238F1158,CHKREF(lit_82),x_1237F1159);
  }
  T29 = CALL1(CHKREF(Ylst),CHKREF(lit_101));
  T28 = CALL1(CHKREF(Ylst),CHKREF(lit_100));
  T27 = CALL1(CHKREF(Ylst),CHKREF(lit_10));
  T26 = CALL1(CHKREF(Ylst),CHKREF(lit_99));
  T25 = BOXVAL(messageF1160);
  T24 = CALL1(CHKREF(Ylst),T25);
  T23 = CALLN(CHKREF(YmacrosYcat),4,T27,T26,T24,Ynil);
  T22 = CALL1(CHKREF(Ylst),T23);
  T21 = CALL1(CHKREF(Ylst),CHKREF(lit_10));
  T20 = CALL1(CHKREF(Ylst),CHKREF(lit_98));
  T19 = CALL1(CHKREF(Ylst),CHKREF(lit_97));
  T18 = BOXVAL(argumentsF1161);
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

FUNCODEDEF(fun_x_1236_59) {
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
  P x_1235F1167;
  P info_exprF1166;
  P x_1235F1165;
  P x_1236F1164;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T11 = FUNSHELL(0,fun_x_1236_59,2);
  x_1236F1164 = T11;
  FUNINIT(x_1236F1164, 2,FREEREF(0),return_);
  x_1235F1165 = FREEREF(0);
  info_exprF1166 = YPfalse;
  info_exprF1166 = BOXFAB(info_exprF1166);
  T9 = CALL2(CHKREF(YisaQ),x_1235F1165,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T7 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1235F1165,x_1236F1164);
    BOXVAL(info_exprF1166) = T7;
    T8 = CALL1(CHKREF(Ytail),x_1235F1165);
    x_1235F1167 = T8;
    T6 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1235F1167,x_1236F1164);
    T5 = T6;
  } else {
    T4 = CALL2(x_1236F1164,CHKREF(lit_82),x_1235F1165);
  }
  T10 = BOXVAL(info_exprF1166);
  T2 = T10;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  ARG(options_, 0);
  P tmpF1170;
  P descriptionF1169;
  P infoF1168;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T14 = CALL3(CHKREF(YsyntaxYfind_option),options_,CHKREF(lit_108),YPfalse);
  infoF1168 = T14;
  T13 = CALL3(CHKREF(YsyntaxYfind_option),options_,CHKREF(lit_107),YPfalse);
  descriptionF1169 = T13;
  tmpF1170 = infoF1168;
  if (tmpF1170 != YPfalse) {
    T12 = descriptionF1169;
  } else {
    T12 = YPfalse;
  }
  T11 = T12;
  if (T11 != YPfalse) {
    T10 = CALL2(CHKREF(Yerror),CHKREF(lit_106),options_);
    T2 = T10;
  } else {
    if (infoF1168 != YPfalse) {
      T9 = FUNFAB(fun_60,1,infoF1168);
      T8 = with_exit(T9);
      T3 = T8;
    } else {
      if (descriptionF1169 != YPfalse) {
        T7 = FUNFAB(fun_58,1,descriptionF1169);
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

FUNCODEDEF(fun_62) {
  ARG(options_, 0);
  P test_bodyF1171;
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL3(CHKREF(YsyntaxYfind_option),options_,CHKREF(lit_68),CHKREF(lit_110));
  test_bodyF1171 = T2;
  T1 = CALL2(CHKREF(YsyntaxYsexpr_make_anonymous_method),Ynil,test_bodyF1171);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_63) {
  ARG(body_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_make_anonymous_method),Ynil,body_);
  RET(T0);
}

FUNCODEDEF(fun_64) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_begin_tag));
  RET(T0);
}

FUNCODEDEF(fun_65) {
  ARG(begin_exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Ytail),begin_exp_);
  RET(T0);
}

FUNCODEDEF(fun_66) {
  ARG(seq_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(Ytail),seq_);
  T0 = CALL1(CHKREF(YmacrosYemptyQ),T1);
  RET(T0);
}

FUNCODEDEF(fun_67) {
  ARG(seq_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Yhead),seq_);
  QRET(T0);
}

FUNCODEDEF(fun_68) {
  ARG(seq_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Ytail),seq_);
  RET(T0);
}

FUNCODEDEF(fun_69) {
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

FUNCODEDEF(fun_70) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYpair),CHKREF(YsyntaxYDsexpr_begin_tag),exp_);
  RET(T0);
}

FUNCODEDEF(fun_71) {
  ARG(exp_, 0);
  P tmpF1172;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLlstG));
  tmpF1172 = T4;
  if (tmpF1172 != YPfalse) {
    T3 = CALL1(CHKREF(YmacrosYemptyQ),exp_);
    T2 = CALL1(CHKREF(Ynot),T3);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_72) {
  ARG(app_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Yhead),app_);
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  ARG(app_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Ytail),app_);
  RET(T0);
}

FUNCODEDEF(fun_74) {
  ARG(args_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YmacrosYemptyQ),args_);
  RET(T0);
}

FUNCODEDEF(fun_75) {
  ARG(args_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Yhead),args_);
  QRET(T0);
}

FUNCODEDEF(fun_76) {
  ARG(args_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Ytail),args_);
  RET(T0);
}

FUNCODEDEF(fun_77) {
  ARG(operands_, 0);
  ARG(op_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(Ylst),op_);
  T0 = CALL2(CHKREF(YmacrosYcat),T1,operands_);
  RET(T0);
}

FUNCODEDEF(fun_78) {
  P T0;
loop:
  T0 = CALL2(CHKREF(YruntimeYA),CHKREF(YsyntaxYTunique_name_counterT),YPint((P)1));
  YsyntaxYTunique_name_counterT = T0;
  RET(CHKREF(YsyntaxYTunique_name_counterT));
}

FUNCODEDEF(fun_79) {
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

FUNCODEDEF(fun_80) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_let_tag));
  RET(T0);
}

FUNCODEDEF(fun_81) {
  ARG(let_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeY2nd),let_exp_);
  T0 = CALL2(CHKREF(YmacrosYmap),CHKREF(Yhead),T1);
  RET(T0);
}

FUNCODEDEF(fun_82) {
  ARG(let_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeY2nd),let_exp_);
  T0 = CALL2(CHKREF(YmacrosYmap),CHKREF(YruntimeY2nd),T1);
  RET(T0);
}

FUNCODEDEF(fun_83) {
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
  P tmpF1174;
  P nameF1173;
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
    nameF1173 = T25;
    T24 = CALL2(CHKREF(YisaQ),nameF1173,CHKREF(YLlstG));
    tmpF1174 = T24;
    if (tmpF1174 != YPfalse) {
      T23 = CALL1(CHKREF(Ytail),nameF1173);
      T22 = CALL1(CHKREF(Yhead),T23);
      T21 = CALL2(CHKREF(YmacrosYEE),T22,CHKREF(lit_154));
      T20 = T21;
    } else {
      T20 = YPfalse;
    }
    T19 = T20;
    if (T19 != YPfalse) {
      T18 = CALL1(CHKREF(Yhead),nameF1173);
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
      T11 = CALL2(CHKREF(YmacrosYpair),nameF1173,rtnames_);
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
  P tmpF1184;
  P tup34F1183;
  P rtvaluesF1182;
  P tup34F1181;
  P rtnamesF1180;
  P tup34F1179;
  P innerF1178;
  P tupnameF1177;
  P valueF1176;
  P nameF1175;
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
    nameF1175 = T37;
    T36 = CALL1(CHKREF(Yhead),vals_);
    valueF1176 = T36;
    T35 = CALL2(CHKREF(YisaQ),nameF1175,CHKREF(YLlstG));
    tmpF1184 = T35;
    if (tmpF1184 != YPfalse) {
      T34 = CALL1(CHKREF(Yhead),nameF1175);
      T33 = CALL2(CHKREF(YmacrosYEE),T34,CHKREF(lit_42));
      T32 = T33;
    } else {
      T32 = YPfalse;
    }
    T31 = T32;
    if (T31 != YPfalse) {
      T30 = CALL1(CHKREF(YsyntaxYsexpr_unique_name),CHKREF(lit_155));
      tupnameF1177 = T30;
      T29 = FUNSHELL(1,fun_inner_84,2);
      innerF1178 = T29;
      FUNINIT(innerF1178, 2,tupnameF1177,innerF1178);
      T28 = CALL1(CHKREF(Ylst),tupnameF1177);
      T27 = CALL1(CHKREF(Ylst),valueF1176);
      T26 = CALL1(CHKREF(Ytail),nameF1175);
      T25 = KCALLN(innerF1178,4,T28,T27,YPint((P)0),T26);
      T24 = T25;
      tup34F1179 = T24;
      T23 = CALL1(CHKREF(Yhead),tup34F1179);
      rtnamesF1180 = T23;
      T22 = CALL1(CHKREF(Ytail),tup34F1179);
      tup34F1181 = T22;
      T21 = CALL1(CHKREF(Yhead),tup34F1181);
      rtvaluesF1182 = T21;
      T20 = CALL1(CHKREF(Ytail),tup34F1181);
      tup34F1183 = T20;
      T19 = CALL2(CHKREF(YmacrosYcat),rtnamesF1180,rnames_);
      T18 = CALL2(CHKREF(YmacrosYcat),rtvaluesF1182,rvalues_);
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
      T8 = CALL2(CHKREF(YmacrosYpair),nameF1175,rnames_);
      T7 = CALL2(CHKREF(YmacrosYpair),valueF1176,rvalues_);
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

FUNCODEDEF(fun_86) {
  ARG(vals_, 0);
  ARG(names_, 1);
  P loopF1185;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_loop_85,1);
  loopF1185 = T2;
  FUNINIT(loopF1185, 1,loopF1185);
  T1 = KCALLN(loopF1185,4,Ynil,Ynil,names_,vals_);
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

FUNCODEDEF(fun_88) {
  ARG(let_exp_, 0);
  P colF1194;
  P tup35F1193;
  P valuesF1192;
  P tup35F1191;
  P namesF1190;
  P tup35F1189;
  P bodyF1188;
  P ovaluesF1187;
  P onamesF1186;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
loop:
  T18 = CALL1(CHKREF(YsyntaxYsexpr_let_bound_variables),let_exp_);
  onamesF1186 = T18;
  T17 = CALL1(CHKREF(YsyntaxYsexpr_let_values),let_exp_);
  ovaluesF1187 = T17;
  T16 = CALL1(CHKREF(YsyntaxYsexpr_let_body),let_exp_);
  bodyF1188 = T16;
  T15 = CALL2(CHKREF(YsyntaxYsexpr_let_namesAvalues),onamesF1186,ovaluesF1187);
  tup35F1189 = T15;
  T14 = CALL1(CHKREF(Yhead),tup35F1189);
  namesF1190 = T14;
  T13 = CALL1(CHKREF(Ytail),tup35F1189);
  tup35F1191 = T13;
  T12 = CALL1(CHKREF(Yhead),tup35F1191);
  valuesF1192 = T12;
  T11 = CALL1(CHKREF(Ytail),tup35F1191);
  tup35F1193 = T11;
  T10 = FUNSHELL(1,fun_col_87,2);
  colF1194 = T10;
  FUNINIT(colF1194, 2,colF1194,bodyF1188);
  T9 = KCALL2(colF1194,namesF1190,valuesF1192);
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

FUNCODEDEF(fun_89) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_locals_tag));
  RET(T0);
}

FUNCODEDEF(fun_90) {
  ARG(loc_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeY2nd),loc_exp_);
  T0 = CALL2(CHKREF(YmacrosYmap),CHKREF(YruntimeY1st),T1);
  RET(T0);
}

FUNCODEDEF(fun_91) {
  ARG(loc_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeY2nd),loc_exp_);
  T0 = CALL2(CHKREF(YmacrosYmap),CHKREF(YruntimeY2nd),T1);
  RET(T0);
}

FUNCODEDEF(fun_92) {
  ARG(loc_exp_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL2(CHKREF(YruntimeYcompose),CHKREF(Ytail),CHKREF(Ytail));
  T1 = CALL1(CHKREF(YruntimeY2nd),loc_exp_);
  T0 = CALL2(CHKREF(YmacrosYmap),T2,T1);
  RET(T0);
}

FUNCODEDEF(fun_93) {
  ARG(loc_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(Ytail),loc_exp_);
  T0 = CALL1(CHKREF(Ytail),T1);
  RET(T0);
}

FUNCODEDEF(fun_94) {
  ARG(loc_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YsyntaxYsexpr_loc_raw_body),loc_exp_);
  T0 = CALL1(CHKREF(YsyntaxYsexpr_sequence_Gbegin),T1);
  QRET(T0);
}

FUNCODEDEF(fun_95) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_iterate_tag));
  RET(T0);
}

FUNCODEDEF(fun_96) {
  ARG(rep_exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),rep_exp_);
  RET(T0);
}

FUNCODEDEF(fun_97) {
  ARG(rep_exp_, 0);
  P sigF1195;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T9 = CALL1(CHKREF(YruntimeY3rd),rep_exp_);
  sigF1195 = T9;
  T8 = CALL1(CHKREF(YsyntaxYsexpr_signature_parameters),sigF1195);
  T7 = CALL2(CHKREF(YmacrosYmap),CHKREF(YruntimeY1st),T8);
  T6 = CALL1(CHKREF(YsyntaxYsexpr_signature_value),sigF1195);
  if (T6 != YPfalse) {
    T4 = Ynil;
  } else {
    T5 = CALL1(CHKREF(Ylst),CHKREF(YsyntaxYDsexpr_values_tag));
    T4 = T5;
  }
  T3 = CALL1(CHKREF(YsyntaxYsexpr_signature_value),sigF1195);
  T2 = CALL1(CHKREF(Ylst),T3);
  T1 = CALL3(CHKREF(YmacrosYcat),T7,T4,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_98) {
  ARG(rep_exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeY3rd),rep_exp_);
  T0 = CALL2(CHKREF(YmacrosYmap),CHKREF(YruntimeY2nd),T1);
  RET(T0);
}

FUNCODEDEF(fun_99) {
  ARG(rep_exp_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(Ytail),rep_exp_);
  T1 = CALL1(CHKREF(Ytail),T2);
  T0 = CALL1(CHKREF(Ytail),T1);
  RET(T0);
}

FUNCODEDEF(fun_100) {
  ARG(rep_exp_, 0);
  P initsF1199;
  P bodyF1198;
  P sigF1197;
  P nameF1196;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T13 = CALL1(CHKREF(YsyntaxYsexpr_iterate_name),rep_exp_);
  nameF1196 = T13;
  T12 = CALL1(CHKREF(YsyntaxYsexpr_iterate_signature),rep_exp_);
  sigF1197 = T12;
  T11 = CALL1(CHKREF(YsyntaxYsexpr_iterate_body),rep_exp_);
  bodyF1198 = T11;
  T10 = CALL1(CHKREF(YsyntaxYsexpr_iterate_inits),rep_exp_);
  initsF1199 = T10;
  T9 = CALL2(CHKREF(Ylst),nameF1196,sigF1197);
  T8 = CALL2(CHKREF(YmacrosYcat),T9,bodyF1198);
  T7 = CALL1(CHKREF(Ylst),T8);
  T6 = CALL1(CHKREF(Ylst),nameF1196);
  T5 = CALL2(CHKREF(YmacrosYcat),T6,initsF1199);
  T4 = CALL3(CHKREF(Ylst),CHKREF(YsyntaxYDsexpr_locals_tag),T7,T5);
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_101) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_isa_tag));
  RET(T0);
}

FUNCODEDEF(fun_102) {
  ARG(exp_, 0);
  P parentsF1200;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL1(CHKREF(YruntimeY2nd),exp_);
  parentsF1200 = T4;
  T3 = CALL2(CHKREF(YisaQ),parentsF1200,CHKREF(YLlstG));
  if (T3 != YPfalse) {
    T1 = parentsF1200;
  } else {
    T2 = CALL1(CHKREF(Ylst),parentsF1200);
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_103) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(Ytail),exp_);
  T0 = CALL1(CHKREF(Ytail),T1);
  RET(T0);
}

FUNCODEDEF(fun_104) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYmap),CHKREF(YruntimeY2nd),exp_);
  RET(T0);
}

FUNCODEDEF(fun_105) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYmap),CHKREF(YruntimeY3rd),exp_);
  RET(T0);
}

FUNCODEDEF(fun_106) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_define_class_tag));
  RET(T0);
}

FUNCODEDEF(fun_107) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY3rd),exp_);
  RET(T0);
}

FUNCODEDEF(fun_108) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_slot_tag));
  RET(T0);
}

FUNCODEDEF(fun_109) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_110) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY3rd),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_111) {
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

FUNCODEDEF(fun_112) {
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

FUNCODEDEF(fun_113) {
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

FUNCODEDEF(fun_114) {
  ARG(name_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),name_);
  T1 = CALL2(CHKREF(YmacrosYcat),T2,CHKREF(lit_197));
  T0 = CALL2(CHKREF(YruntimeYas),CHKREF(YLsymG),T1);
  RET(T0);
}

FUNCODEDEF(fun_115) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_macro_tag));
  RET(T0);
}

FUNCODEDEF(fun_116) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_macro_expand_tag));
  RET(T0);
}

FUNCODEDEF(fun_117) {
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

FUNCODEDEF(fun_119) {
  ARG(x_, 0);
  P resF1202;
  P raw_resultF1201;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL1(CHKREF(YsyntaxYbq_process),x_);
  raw_resultF1201 = T3;
  T2 = CALL1(CHKREF(YsyntaxYbq_remove_tokens),raw_resultF1201);
  resF1202 = T2;
  T1 = resF1202;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_120) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),x_,CHKREF(lit_216));
  RET(T0);
}

FUNCODEDEF(fun_121) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),x_,CHKREF(lit_218));
  RET(T0);
}

FUNCODEDEF(fun_122) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),x_,CHKREF(YsyntaxYDsexpr_quasiquote_tag));
  RET(T0);
}

FUNCODEDEF(fun_123) {
  ARG(x_, 0);
  P tmpF1203;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL2(CHKREF(YisaQ),x_,CHKREF(YLlstG));
  T3 = CALL1(CHKREF(Ynot),T4);
  tmpF1203 = T3;
  if (tmpF1203 != YPfalse) {
    T1 = tmpF1203;
  } else {
    T2 = CALL2(CHKREF(YmacrosYEE),x_,Ynil);
    T1 = T2;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_124) {
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
  P loopF1204;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_loop_125,2);
  loopF1204 = T2;
  FUNINIT(loopF1204, 2,loopF1204,return_);
  T1 = KCALL2(loopF1204,FREEREF(0),Ynil);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_127) {
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

FUNCODEDEF(fun_128) {
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

FUNCODEDEF(fun_129) {
  ARG(x_, 0);
  ARG(fn_, 1);
  P tmpF1207;
  P dF1206;
  P aF1205;
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
    aF1205 = T13;
    T12 = CALL1(CHKREF(Ytail),x_);
    T11 = CALL2(CHKREF(YsyntaxYmap_tree),fn_,T12);
    dF1206 = T11;
    T10 = CALL1(CHKREF(Yhead),x_);
    T9 = CALL2(CHKREF(YruntimeYE),aF1205,T10);
    tmpF1207 = T9;
    if (tmpF1207 != YPfalse) {
      T8 = CALL1(CHKREF(Ytail),x_);
      T7 = CALL2(CHKREF(YruntimeYE),dF1206,T8);
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T5 = T6;
    if (T5 != YPfalse) {
      T3 = x_;
    } else {
      T4 = CALL2(CHKREF(YmacrosYpair),aF1205,dF1206);
      T3 = T4;
    }
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_130) {
  ARG(x_, 0);
  P tmpF1209;
  P tmpF1208;
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
                tmpF1208 = T25;
                if (tmpF1208 != YPfalse) {
                  T24 = CALL1(CHKREF(Ytail),x_);
                  T23 = CALL1(CHKREF(Ytail),T24);
                  T22 = CALL1(CHKREF(YmacrosYemptyQ),T23);
                  T21 = CALL1(CHKREF(Ynot),T22);
                  tmpF1209 = T21;
                  if (tmpF1209 != YPfalse) {
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

FUNCODEDEF(fun_131) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YsyntaxYsexpr_tagged_listQ),exp_,CHKREF(YsyntaxYDsexpr_syntax_if_tag));
  RET(T0);
}

FUNCODEDEF(fun_132) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeY2nd),exp_);
  T0 = CALL1(CHKREF(YruntimeY2nd),T1);
  QRET(T0);
}

FUNCODEDEF(fun_133) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeY2nd),exp_);
  T0 = CALL1(CHKREF(YruntimeY1st),T1);
  QRET(T0);
}

FUNCODEDEF(fun_134) {
  ARG(exp_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY3rd),exp_);
  QRET(T0);
}

FUNCODEDEF(fun_135) {
  ARG(exp_, 0);
  P altF1210;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL2(CHKREF(YruntimeYelt),exp_,YPint((P)3));
  altF1210 = T3;
  T2 = CALL2(CHKREF(YmacrosYEE),altF1210,CHKREF(Ynul));
  if (T2 != YPfalse) {
    T1 = YPfalse;
  } else {
    T1 = altF1210;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_136) {
  ARG(pat_, 0);
  P tmpF1211;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL1(CHKREF(YsyntaxYsexpr_unquoteQ),pat_);
  tmpF1211 = T3;
  if (tmpF1211 != YPfalse) {
    T1 = tmpF1211;
  } else {
    T2 = CALL1(CHKREF(YsyntaxYsexpr_unquote_splicingQ),pat_);
    T1 = T2;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_137) {
  ARG(pat_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeY2nd),pat_);
  QRET(T0);
}

FUNCODEDEF(fun_col_138) {
  ARG(pat_, 0);
  P tmpF1213;
  P xF1212;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
loop:
  T18 = CALL2(CHKREF(YisaQ),pat_,CHKREF(YLlstG));
  T17 = CALL1(CHKREF(Ynot),T18);
  tmpF1213 = T17;
  if (tmpF1213 != YPfalse) {
    T15 = tmpF1213;
  } else {
    T16 = CALL1(CHKREF(YmacrosYemptyQ),pat_);
    T15 = T16;
  }
  T14 = T15;
  if (T14 != YPfalse) {
    T0 = Ynil;
  } else {
    T13 = CALL1(CHKREF(Yhead),pat_);
    xF1212 = T13;
    T12 = CALL1(CHKREF(YsyntaxYsexpr_pattern_variableQ),xF1212);
    if (T12 != YPfalse) {
      T11 = CALL1(CHKREF(YsyntaxYsexpr_pattern_variable_name),xF1212);
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

FUNCODEDEF(fun_139) {
  ARG(pat_, 0);
  P colF1214;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = FUNSHELL(1,fun_col_138,1);
  colF1214 = T3;
  FUNINIT(colF1214, 1,colF1214);
  T2 = KCALL1(colF1214,pat_);
  T1 = T2;
  T0 = CALL1(CHKREF(YruntimeYdel_dups),T1);
  RET(T0);
}

FUNCODEDEF(fun_140) {
  ARG(exp_, 0);
  P funcF1216;
  P mifF1215;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = CALL1(CHKREF(YsyntaxYsexpr_method_parameters),exp_);
  T7 = CALL1(CHKREF(YsyntaxYsexpr_method_body),exp_);
  T6 = CALL1(CHKREF(YsyntaxYsexpr_sequence_Gbegin),T7);
  T5 = CALLN(CHKREF(YsyntaxYsexpr_make_syntax_if),4,T8,CHKREF(lit_1),T6,YPfalse);
  mifF1215 = T5;
  T4 = CALL1(CHKREF(Ylst),CHKREF(lit_1));
  T3 = CALL1(CHKREF(Ylst),mifF1215);
  T2 = CALL2(CHKREF(YsyntaxYsexpr_make_anonymous_method),T4,T3);
  funcF1216 = T2;
  T1 = funcF1216;
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
  fun_0 = YPmet(FUNCODEREF(fun_0),CHKREF(lit_0),T0,ENVNUL);
  T4 = BOUNDP(YsyntaxYsexpr_self_evaluatingQ);
  if (T4 != YPfalse) {
    T3 = CHKREF(YsyntaxYsexpr_self_evaluatingQ);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_0;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YsyntaxYsexpr_self_evaluatingQ = T1;
  regsym(&YsyntaxYsexpr_self_evaluatingQ,"syntax","sexpr-self-evaluating?");
  lit_2 = YPPsym((P)"sexpr-variable?");
  T5 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_1 = YPmet(FUNCODEREF(fun_1),CHKREF(lit_2),T5,ENVNUL);
  T9 = BOUNDP(YsyntaxYsexpr_variableQ);
  if (T9 != YPfalse) {
    T8 = CHKREF(YsyntaxYsexpr_variableQ);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_1;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  YsyntaxYsexpr_variableQ = T6;
  regsym(&YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
  lit_3 = YPPsym((P)"sexpr-tagged-list?");
  lit_4 = YPPsym((P)"tag");
  T10 = YPsig(YPPlist(2,CHKREF(lit_1),CHKREF(lit_4)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_2 = YPmet(FUNCODEREF(fun_2),CHKREF(lit_3),T10,ENVNUL);
  T14 = BOUNDP(YsyntaxYsexpr_tagged_listQ);
  if (T14 != YPfalse) {
    T13 = CHKREF(YsyntaxYsexpr_tagged_listQ);
  } else {
    T13 = YPfalse;
  }
  T12 = fun_2;
  T11 = CALL2(CHKREF(YPdefine_method),T13,T12);
  YsyntaxYsexpr_tagged_listQ = T11;
  regsym(&YsyntaxYsexpr_tagged_listQ,"syntax","sexpr-tagged-list?");
  lit_5 = YPPsym((P)"quote");
  YsyntaxYDsexpr_quote_tag = CHKREF(lit_5);
  regsym(&YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
  lit_6 = YPPsym((P)"sexpr-quoted?");
  T15 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_3 = YPmet(FUNCODEREF(fun_3),CHKREF(lit_6),T15,ENVNUL);
  T19 = BOUNDP(YsyntaxYsexpr_quotedQ);
  if (T19 != YPfalse) {
    T18 = CHKREF(YsyntaxYsexpr_quotedQ);
  } else {
    T18 = YPfalse;
  }
  T17 = fun_3;
  T16 = CALL2(CHKREF(YPdefine_method),T18,T17);
  YsyntaxYsexpr_quotedQ = T16;
  regsym(&YsyntaxYsexpr_quotedQ,"syntax","sexpr-quoted?");
  lit_7 = YPPsym((P)"sexpr-make-quote");
  T20 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_4 = YPmet(FUNCODEREF(fun_4),CHKREF(lit_7),T20,ENVNUL);
  T24 = BOUNDP(YsyntaxYsexpr_make_quote);
  if (T24 != YPfalse) {
    T23 = CHKREF(YsyntaxYsexpr_make_quote);
  } else {
    T23 = YPfalse;
  }
  T22 = fun_4;
  T21 = CALL2(CHKREF(YPdefine_method),T23,T22);
  YsyntaxYsexpr_make_quote = T21;
  regsym(&YsyntaxYsexpr_make_quote,"syntax","sexpr-make-quote");
  lit_8 = YPPsym((P)"sexpr-text-of-quotation");
  lit_9 = YPPsym((P)"quot");
  T25 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_5 = YPmet(FUNCODEREF(fun_5),CHKREF(lit_8),T25,ENVNUL);
  T29 = BOUNDP(YsyntaxYsexpr_text_of_quotation);
  if (T29 != YPfalse) {
    T28 = CHKREF(YsyntaxYsexpr_text_of_quotation);
  } else {
    T28 = YPfalse;
  }
  T27 = fun_5;
  T26 = CALL2(CHKREF(YPdefine_method),T28,T27);
  YsyntaxYsexpr_text_of_quotation = T26;
  regsym(&YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
  lit_10 = YPPsym((P)"set");
  YsyntaxYDsexpr_set_tag = CHKREF(lit_10);
  regsym(&YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
  lit_11 = YPPsym((P)"sexpr-assignment?");
  T30 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_6 = YPmet(FUNCODEREF(fun_6),CHKREF(lit_11),T30,ENVNUL);
  T34 = BOUNDP(YsyntaxYsexpr_assignmentQ);
  if (T34 != YPfalse) {
    T33 = CHKREF(YsyntaxYsexpr_assignmentQ);
  } else {
    T33 = YPfalse;
  }
  T32 = fun_6;
  T31 = CALL2(CHKREF(YPdefine_method),T33,T32);
  YsyntaxYsexpr_assignmentQ = T31;
  regsym(&YsyntaxYsexpr_assignmentQ,"syntax","sexpr-assignment?");
  lit_12 = YPPsym((P)"sexpr-assignment-variable");
  lit_13 = YPPsym((P)"assn");
  T35 = YPsig(YPPlist(1,CHKREF(lit_13)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_7 = YPmet(FUNCODEREF(fun_7),CHKREF(lit_12),T35,ENVNUL);
  T39 = BOUNDP(YsyntaxYsexpr_assignment_variable);
  if (T39 != YPfalse) {
    T38 = CHKREF(YsyntaxYsexpr_assignment_variable);
  } else {
    T38 = YPfalse;
  }
  T37 = fun_7;
  T36 = CALL2(CHKREF(YPdefine_method),T38,T37);
  YsyntaxYsexpr_assignment_variable = T36;
  regsym(&YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
  lit_14 = YPPsym((P)"sexpr-assignment-value");
  T40 = YPsig(YPPlist(1,CHKREF(lit_13)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_8 = YPmet(FUNCODEREF(fun_8),CHKREF(lit_14),T40,ENVNUL);
  T44 = BOUNDP(YsyntaxYsexpr_assignment_value);
  if (T44 != YPfalse) {
    T43 = CHKREF(YsyntaxYsexpr_assignment_value);
  } else {
    T43 = YPfalse;
  }
  T42 = fun_8;
  T41 = CALL2(CHKREF(YPdefine_method),T43,T42);
  YsyntaxYsexpr_assignment_value = T41;
  regsym(&YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
  lit_15 = YPPsym((P)"sexpr-variable-name");
  T45 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_9 = YPmet(FUNCODEREF(fun_9),CHKREF(lit_15),T45,ENVNUL);
  T49 = BOUNDP(YsyntaxYsexpr_variable_name);
  if (T49 != YPfalse) {
    T48 = CHKREF(YsyntaxYsexpr_variable_name);
  } else {
    T48 = YPfalse;
  }
  T47 = fun_9;
  T46 = CALL2(CHKREF(YPdefine_method),T48,T47);
  YsyntaxYsexpr_variable_name = T46;
  regsym(&YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
  T50 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_10 = YPmet(FUNCODEREF(fun_10),CHKREF(lit_15),T50,ENVNUL);
  T54 = BOUNDP(YsyntaxYsexpr_variable_name);
  if (T54 != YPfalse) {
    T53 = CHKREF(YsyntaxYsexpr_variable_name);
  } else {
    T53 = YPfalse;
  }
  T52 = fun_10;
  T51 = CALL2(CHKREF(YPdefine_method),T53,T52);
  YsyntaxYsexpr_variable_name = T51;
  regsym(&YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
  lit_16 = YPPsym((P)"sexpr-variable-type");
  T55 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_11 = YPmet(FUNCODEREF(fun_11),CHKREF(lit_16),T55,ENVNUL);
  T59 = BOUNDP(YsyntaxYsexpr_variable_type);
  if (T59 != YPfalse) {
    T58 = CHKREF(YsyntaxYsexpr_variable_type);
  } else {
    T58 = YPfalse;
  }
  T57 = fun_11;
  T56 = CALL2(CHKREF(YPdefine_method),T58,T57);
  YsyntaxYsexpr_variable_type = T56;
  regsym(&YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
  lit_17 = YPPsym((P)"<any>");
  T60 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_12 = YPmet(FUNCODEREF(fun_12),CHKREF(lit_16),T60,ENVNUL);
  T64 = BOUNDP(YsyntaxYsexpr_variable_type);
  if (T64 != YPfalse) {
    T63 = CHKREF(YsyntaxYsexpr_variable_type);
  } else {
    T63 = YPfalse;
  }
  T62 = fun_12;
  T61 = CALL2(CHKREF(YPdefine_method),T63,T62);
  YsyntaxYsexpr_variable_type = T61;
  regsym(&YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
  lit_18 = YPPsym((P)"dv");
  YsyntaxYDsexpr_define_tag = CHKREF(lit_18);
  regsym(&YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
  lit_19 = YPPsym((P)"sexpr-definition?");
  T65 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_13 = YPmet(FUNCODEREF(fun_13),CHKREF(lit_19),T65,ENVNUL);
  T69 = BOUNDP(YsyntaxYsexpr_definitionQ);
  if (T69 != YPfalse) {
    T68 = CHKREF(YsyntaxYsexpr_definitionQ);
  } else {
    T68 = YPfalse;
  }
  T67 = fun_13;
  T66 = CALL2(CHKREF(YPdefine_method),T68,T67);
  YsyntaxYsexpr_definitionQ = T66;
  regsym(&YsyntaxYsexpr_definitionQ,"syntax","sexpr-definition?");
  lit_20 = YPPsym((P)"quasiquote");
  YsyntaxYDsexpr_quasiquote_tag = CHKREF(lit_20);
  regsym(&YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
  lit_21 = YPPsym((P)"sexpr-definition-variable");
  lit_22 = YPPsym((P)"defn");
  T70 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_14 = YPmet(FUNCODEREF(fun_14),CHKREF(lit_21),T70,ENVNUL);
  T74 = BOUNDP(YsyntaxYsexpr_definition_variable);
  if (T74 != YPfalse) {
    T73 = CHKREF(YsyntaxYsexpr_definition_variable);
  } else {
    T73 = YPfalse;
  }
  T72 = fun_14;
  T71 = CALL2(CHKREF(YPdefine_method),T73,T72);
  YsyntaxYsexpr_definition_variable = T71;
  regsym(&YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
  lit_23 = YPPsym((P)"sexpr-definition-value");
  T75 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_15 = YPmet(FUNCODEREF(fun_15),CHKREF(lit_23),T75,ENVNUL);
  T79 = BOUNDP(YsyntaxYsexpr_definition_value);
  if (T79 != YPfalse) {
    T78 = CHKREF(YsyntaxYsexpr_definition_value);
  } else {
    T78 = YPfalse;
  }
  T77 = fun_15;
  T76 = CALL2(CHKREF(YPdefine_method),T78,T77);
  YsyntaxYsexpr_definition_value = T76;
  regsym(&YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
  lit_24 = YPPsym((P)"ds");
  YsyntaxYDsexpr_define_syntax_tag = CHKREF(lit_24);
  regsym(&YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
  lit_25 = YPPsym((P)"sexpr-syntax-definition?");
  T80 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_16 = YPmet(FUNCODEREF(fun_16),CHKREF(lit_25),T80,ENVNUL);
  T84 = BOUNDP(YsyntaxYsexpr_syntax_definitionQ);
  if (T84 != YPfalse) {
    T83 = CHKREF(YsyntaxYsexpr_syntax_definitionQ);
  } else {
    T83 = YPfalse;
  }
  T82 = fun_16;
  T81 = CALL2(CHKREF(YPdefine_method),T83,T82);
  YsyntaxYsexpr_syntax_definitionQ = T81;
  regsym(&YsyntaxYsexpr_syntax_definitionQ,"syntax","sexpr-syntax-definition?");
  lit_26 = YPPsym((P)"mac");
  YsyntaxYDsexpr_macro_tag = CHKREF(lit_26);
  regsym(&YsyntaxYDsexpr_macro_tag,"syntax","$sexpr-macro-tag");
  lit_27 = YPPsym((P)"sexpr-syntax-definition-variable");
  T85 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_17 = YPmet(FUNCODEREF(fun_17),CHKREF(lit_27),T85,ENVNUL);
  T89 = BOUNDP(YsyntaxYsexpr_syntax_definition_variable);
  if (T89 != YPfalse) {
    T88 = CHKREF(YsyntaxYsexpr_syntax_definition_variable);
  } else {
    T88 = YPfalse;
  }
  T87 = fun_17;
  T86 = CALL2(CHKREF(YPdefine_method),T88,T87);
  YsyntaxYsexpr_syntax_definition_variable = T86;
  regsym(&YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
  lit_28 = YPPsym((P)"sexpr-syntax-definition-value");
  T90 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_18 = YPmet(FUNCODEREF(fun_18),CHKREF(lit_28),T90,ENVNUL);
  T94 = BOUNDP(YsyntaxYsexpr_syntax_definition_value);
  if (T94 != YPfalse) {
    T93 = CHKREF(YsyntaxYsexpr_syntax_definition_value);
  } else {
    T93 = YPfalse;
  }
  T92 = fun_18;
  T91 = CALL2(CHKREF(YPdefine_method),T93,T92);
  YsyntaxYsexpr_syntax_definition_value = T91;
  regsym(&YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
  lit_29 = YPPsym((P)"df");
  YsyntaxYDsexpr_define_function_tag = CHKREF(lit_29);
  regsym(&YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
  lit_30 = YPPsym((P)"sexpr-function-definition?");
  T95 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_19 = YPmet(FUNCODEREF(fun_19),CHKREF(lit_30),T95,ENVNUL);
  T99 = BOUNDP(YsyntaxYsexpr_function_definitionQ);
  if (T99 != YPfalse) {
    T98 = CHKREF(YsyntaxYsexpr_function_definitionQ);
  } else {
    T98 = YPfalse;
  }
  T97 = fun_19;
  T96 = CALL2(CHKREF(YPdefine_method),T98,T97);
  YsyntaxYsexpr_function_definitionQ = T96;
  regsym(&YsyntaxYsexpr_function_definitionQ,"syntax","sexpr-function-definition?");
  lit_31 = YPPsym((P)"dm");
  YsyntaxYDsexpr_define_method_tag = CHKREF(lit_31);
  regsym(&YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
  lit_32 = YPPsym((P)"sexpr-method-definition?");
  T100 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_20 = YPmet(FUNCODEREF(fun_20),CHKREF(lit_32),T100,ENVNUL);
  T104 = BOUNDP(YsyntaxYsexpr_method_definitionQ);
  if (T104 != YPfalse) {
    T103 = CHKREF(YsyntaxYsexpr_method_definitionQ);
  } else {
    T103 = YPfalse;
  }
  T102 = fun_20;
  T101 = CALL2(CHKREF(YPdefine_method),T103,T102);
  YsyntaxYsexpr_method_definitionQ = T101;
  regsym(&YsyntaxYsexpr_method_definitionQ,"syntax","sexpr-method-definition?");
  lit_33 = YPPsym((P)"dg");
  YsyntaxYDsexpr_define_generic_tag = CHKREF(lit_33);
  regsym(&YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
  lit_34 = YPPsym((P)"sexpr-generic-definition?");
  T105 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_21 = YPmet(FUNCODEREF(fun_21),CHKREF(lit_34),T105,ENVNUL);
  T109 = BOUNDP(YsyntaxYsexpr_generic_definitionQ);
  if (T109 != YPfalse) {
    T108 = CHKREF(YsyntaxYsexpr_generic_definitionQ);
  } else {
    T108 = YPfalse;
  }
  T107 = fun_21;
  T106 = CALL2(CHKREF(YPdefine_method),T108,T107);
  YsyntaxYsexpr_generic_definitionQ = T106;
  regsym(&YsyntaxYsexpr_generic_definitionQ,"syntax","sexpr-generic-definition?");
  lit_35 = YPPsym((P)"sexpr-function-definition-variable");
  T110 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_22 = YPmet(FUNCODEREF(fun_22),CHKREF(lit_35),T110,ENVNUL);
  T114 = BOUNDP(YsyntaxYsexpr_function_definition_variable);
  if (T114 != YPfalse) {
    T113 = CHKREF(YsyntaxYsexpr_function_definition_variable);
  } else {
    T113 = YPfalse;
  }
  T112 = fun_22;
  T111 = CALL2(CHKREF(YPdefine_method),T113,T112);
  YsyntaxYsexpr_function_definition_variable = T111;
  regsym(&YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
  lit_36 = YPPsym((P)"sexpr-forward-primitive?");
  T115 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_23 = YPmet(FUNCODEREF(fun_23),CHKREF(lit_36),T115,ENVNUL);
  T119 = BOUNDP(YsyntaxYsexpr_forward_primitiveQ);
  if (T119 != YPfalse) {
    T118 = CHKREF(YsyntaxYsexpr_forward_primitiveQ);
  } else {
    T118 = YPfalse;
  }
  T117 = fun_23;
  T116 = CALL2(CHKREF(YPdefine_method),T118,T117);
  YsyntaxYsexpr_forward_primitiveQ = T116;
  regsym(&YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
  lit_37 = YPPsym((P)"sexpr-signature-parameters");
  lit_38 = YPPsym((P)"signature");
  lit_39 = YPPsym((P)"=>");
  T120 = YPsig(YPPlist(1,CHKREF(lit_38)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_24 = YPmet(FUNCODEREF(fun_24),CHKREF(lit_37),T120,ENVNUL);
  T124 = BOUNDP(YsyntaxYsexpr_signature_parameters);
  if (T124 != YPfalse) {
    T123 = CHKREF(YsyntaxYsexpr_signature_parameters);
  } else {
    T123 = YPfalse;
  }
  T122 = fun_24;
  T121 = CALL2(CHKREF(YPdefine_method),T123,T122);
  YsyntaxYsexpr_signature_parameters = T121;
  regsym(&YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
  lit_40 = YPPsym((P)"sexpr-signature-value");
  lit_41 = YPPsym((P)"<tup>");
  lit_42 = YPPsym((P)"tup");
  T125 = YPsig(YPPlist(1,CHKREF(lit_38)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_25 = YPmet(FUNCODEREF(fun_25),CHKREF(lit_40),T125,ENVNUL);
  T129 = BOUNDP(YsyntaxYsexpr_signature_value);
  if (T129 != YPfalse) {
    T128 = CHKREF(YsyntaxYsexpr_signature_value);
  } else {
    T128 = YPfalse;
  }
  T127 = fun_25;
  T126 = CALL2(CHKREF(YPdefine_method),T128,T127);
  YsyntaxYsexpr_signature_value = T126;
  regsym(&YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
  lit_43 = YPPsym((P)"sexpr-function-signature");
  T130 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_26 = YPmet(FUNCODEREF(fun_26),CHKREF(lit_43),T130,ENVNUL);
  T134 = BOUNDP(YsyntaxYsexpr_function_signature);
  if (T134 != YPfalse) {
    T133 = CHKREF(YsyntaxYsexpr_function_signature);
  } else {
    T133 = YPfalse;
  }
  T132 = fun_26;
  T131 = CALL2(CHKREF(YPdefine_method),T133,T132);
  YsyntaxYsexpr_function_signature = T131;
  regsym(&YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
  lit_44 = YPPsym((P)"sexpr-function-parameters");
  T135 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_27 = YPmet(FUNCODEREF(fun_27),CHKREF(lit_44),T135,ENVNUL);
  T139 = BOUNDP(YsyntaxYsexpr_function_parameters);
  if (T139 != YPfalse) {
    T138 = CHKREF(YsyntaxYsexpr_function_parameters);
  } else {
    T138 = YPfalse;
  }
  T137 = fun_27;
  T136 = CALL2(CHKREF(YPdefine_method),T138,T137);
  YsyntaxYsexpr_function_parameters = T136;
  regsym(&YsyntaxYsexpr_function_parameters,"syntax","sexpr-function-parameters");
  lit_45 = YPPsym((P)"sexpr-function-value");
  T140 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_28 = YPmet(FUNCODEREF(fun_28),CHKREF(lit_45),T140,ENVNUL);
  T144 = BOUNDP(YsyntaxYsexpr_function_value);
  if (T144 != YPfalse) {
    T143 = CHKREF(YsyntaxYsexpr_function_value);
  } else {
    T143 = YPfalse;
  }
  T142 = fun_28;
  T141 = CALL2(CHKREF(YPdefine_method),T143,T142);
  YsyntaxYsexpr_function_value = T141;
  regsym(&YsyntaxYsexpr_function_value,"syntax","sexpr-function-value");
  lit_46 = YPPsym((P)"sexpr-function-body");
  T145 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_29 = YPmet(FUNCODEREF(fun_29),CHKREF(lit_46),T145,ENVNUL);
  T149 = BOUNDP(YsyntaxYsexpr_function_body);
  if (T149 != YPfalse) {
    T148 = CHKREF(YsyntaxYsexpr_function_body);
  } else {
    T148 = YPfalse;
  }
  T147 = fun_29;
  T146 = CALL2(CHKREF(YPdefine_method),T148,T147);
  YsyntaxYsexpr_function_body = T146;
  regsym(&YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
  lit_47 = YPPsym((P)"fun");
  YsyntaxYDsexpr_method_tag = CHKREF(lit_47);
  regsym(&YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
  lit_48 = YPPsym((P)"sexpr-function-definition-value");
  T150 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_30 = YPmet(FUNCODEREF(fun_30),CHKREF(lit_48),T150,ENVNUL);
  T154 = BOUNDP(YsyntaxYsexpr_function_definition_value);
  if (T154 != YPfalse) {
    T153 = CHKREF(YsyntaxYsexpr_function_definition_value);
  } else {
    T153 = YPfalse;
  }
  T152 = fun_30;
  T151 = CALL2(CHKREF(YPdefine_method),T153,T152);
  YsyntaxYsexpr_function_definition_value = T151;
  regsym(&YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
  lit_49 = YPPsym((P)"sexpr-method?");
  T155 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_31 = YPmet(FUNCODEREF(fun_31),CHKREF(lit_49),T155,ENVNUL);
  T159 = BOUNDP(YsyntaxYsexpr_methodQ);
  if (T159 != YPfalse) {
    T158 = CHKREF(YsyntaxYsexpr_methodQ);
  } else {
    T158 = YPfalse;
  }
  T157 = fun_31;
  T156 = CALL2(CHKREF(YPdefine_method),T158,T157);
  YsyntaxYsexpr_methodQ = T156;
  regsym(&YsyntaxYsexpr_methodQ,"syntax","sexpr-method?");
  lit_50 = YPPsym((P)"sexpr-method-signature");
  lit_51 = YPPsym((P)"method-exp");
  T160 = YPsig(YPPlist(1,CHKREF(lit_51)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_32 = YPmet(FUNCODEREF(fun_32),CHKREF(lit_50),T160,ENVNUL);
  T164 = BOUNDP(YsyntaxYsexpr_method_signature);
  if (T164 != YPfalse) {
    T163 = CHKREF(YsyntaxYsexpr_method_signature);
  } else {
    T163 = YPfalse;
  }
  T162 = fun_32;
  T161 = CALL2(CHKREF(YPdefine_method),T163,T162);
  YsyntaxYsexpr_method_signature = T161;
  regsym(&YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
  lit_52 = YPPsym((P)"sexpr-method-parameters");
  T165 = YPsig(YPPlist(1,CHKREF(lit_51)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_33 = YPmet(FUNCODEREF(fun_33),CHKREF(lit_52),T165,ENVNUL);
  T169 = BOUNDP(YsyntaxYsexpr_method_parameters);
  if (T169 != YPfalse) {
    T168 = CHKREF(YsyntaxYsexpr_method_parameters);
  } else {
    T168 = YPfalse;
  }
  T167 = fun_33;
  T166 = CALL2(CHKREF(YPdefine_method),T168,T167);
  YsyntaxYsexpr_method_parameters = T166;
  regsym(&YsyntaxYsexpr_method_parameters,"syntax","sexpr-method-parameters");
  lit_53 = YPPsym((P)"sexpr-method-value");
  T170 = YPsig(YPPlist(1,CHKREF(lit_51)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_34 = YPmet(FUNCODEREF(fun_34),CHKREF(lit_53),T170,ENVNUL);
  T174 = BOUNDP(YsyntaxYsexpr_method_value);
  if (T174 != YPfalse) {
    T173 = CHKREF(YsyntaxYsexpr_method_value);
  } else {
    T173 = YPfalse;
  }
  T172 = fun_34;
  T171 = CALL2(CHKREF(YPdefine_method),T173,T172);
  YsyntaxYsexpr_method_value = T171;
  regsym(&YsyntaxYsexpr_method_value,"syntax","sexpr-method-value");
  lit_54 = YPPsym((P)"sexpr-method-body");
  T175 = YPsig(YPPlist(1,CHKREF(lit_51)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_35 = YPmet(FUNCODEREF(fun_35),CHKREF(lit_54),T175,ENVNUL);
  T179 = BOUNDP(YsyntaxYsexpr_method_body);
  if (T179 != YPfalse) {
    T178 = CHKREF(YsyntaxYsexpr_method_body);
  } else {
    T178 = YPfalse;
  }
  T177 = fun_35;
  T176 = CALL2(CHKREF(YPdefine_method),T178,T177);
  YsyntaxYsexpr_method_body = T176;
  regsym(&YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
  lit_55 = YPPsym((P)"sexpr-make-anonymous-method");
  lit_56 = YPPsym((P)"body");
  lit_57 = YPPsym((P)"parameters");
  T180 = YPsig(YPPlist(2,CHKREF(lit_57),CHKREF(lit_56)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_36 = YPmet(FUNCODEREF(fun_36),CHKREF(lit_55),T180,ENVNUL);
  T184 = BOUNDP(YsyntaxYsexpr_make_anonymous_method);
  if (T184 != YPfalse) {
    T183 = CHKREF(YsyntaxYsexpr_make_anonymous_method);
  } else {
    T183 = YPfalse;
  }
  T182 = fun_36;
  T181 = CALL2(CHKREF(YPdefine_method),T183,T182);
  YsyntaxYsexpr_make_anonymous_method = T181;
  regsym(&YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
  lit_58 = YPPsym((P)"sexpr-make-method");
  lit_59 = YPPsym((P)"name");
  T185 = YPsig(YPPlist(3,CHKREF(lit_59),CHKREF(lit_57),CHKREF(lit_56)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)3),CHKREF(YLlstG));
  fun_37 = YPmet(FUNCODEREF(fun_37),CHKREF(lit_58),T185,ENVNUL);
  T189 = BOUNDP(YsyntaxYsexpr_make_method);
  if (T189 != YPfalse) {
    T188 = CHKREF(YsyntaxYsexpr_make_method);
  } else {
    T188 = YPfalse;
  }
  T187 = fun_37;
  T186 = CALL2(CHKREF(YPdefine_method),T188,T187);
  YsyntaxYsexpr_make_method = T186;
  regsym(&YsyntaxYsexpr_make_method,"syntax","sexpr-make-method");
  lit_60 = YPPsym((P)"if");
  YsyntaxYDsexpr_if_tag = CHKREF(lit_60);
  regsym(&YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
  lit_61 = YPPsym((P)"sexpr-if?");
  T190 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_38 = YPmet(FUNCODEREF(fun_38),CHKREF(lit_61),T190,ENVNUL);
  T194 = BOUNDP(YsyntaxYsexpr_ifQ);
  if (T194 != YPfalse) {
    T193 = CHKREF(YsyntaxYsexpr_ifQ);
  } else {
    T193 = YPfalse;
  }
  T192 = fun_38;
  T191 = CALL2(CHKREF(YPdefine_method),T193,T192);
  YsyntaxYsexpr_ifQ = T191;
  regsym(&YsyntaxYsexpr_ifQ,"syntax","sexpr-if?");
  lit_62 = YPPsym((P)"sexpr-if-test");
  T195 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_39 = YPmet(FUNCODEREF(fun_39),CHKREF(lit_62),T195,ENVNUL);
  T199 = BOUNDP(YsyntaxYsexpr_if_test);
  if (T199 != YPfalse) {
    T198 = CHKREF(YsyntaxYsexpr_if_test);
  } else {
    T198 = YPfalse;
  }
  T197 = fun_39;
  T196 = CALL2(CHKREF(YPdefine_method),T198,T197);
  YsyntaxYsexpr_if_test = T196;
  regsym(&YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
  lit_63 = YPPsym((P)"sexpr-if-then");
  T200 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_40 = YPmet(FUNCODEREF(fun_40),CHKREF(lit_63),T200,ENVNUL);
  T204 = BOUNDP(YsyntaxYsexpr_if_then);
  if (T204 != YPfalse) {
    T203 = CHKREF(YsyntaxYsexpr_if_then);
  } else {
    T203 = YPfalse;
  }
  T202 = fun_40;
  T201 = CALL2(CHKREF(YPdefine_method),T203,T202);
  YsyntaxYsexpr_if_then = T201;
  regsym(&YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
  lit_64 = YPPsym((P)"sexpr-if-else");
  T205 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_41 = YPmet(FUNCODEREF(fun_41),CHKREF(lit_64),T205,ENVNUL);
  T209 = BOUNDP(YsyntaxYsexpr_if_else);
  if (T209 != YPfalse) {
    T208 = CHKREF(YsyntaxYsexpr_if_else);
  } else {
    T208 = YPfalse;
  }
  T207 = fun_41;
  T206 = CALL2(CHKREF(YPdefine_method),T208,T207);
  YsyntaxYsexpr_if_else = T206;
  regsym(&YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
  lit_65 = YPPsym((P)"sexpr-make-if");
  lit_66 = YPPsym((P)"else");
  lit_67 = YPPsym((P)"then");
  lit_68 = YPPsym((P)"test");
  T210 = YPsig(YPPlist(3,CHKREF(lit_68),CHKREF(lit_67),CHKREF(lit_66)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLlstG));
  fun_42 = YPmet(FUNCODEREF(fun_42),CHKREF(lit_65),T210,ENVNUL);
  T214 = BOUNDP(YsyntaxYsexpr_make_if);
  if (T214 != YPfalse) {
    T213 = CHKREF(YsyntaxYsexpr_make_if);
  } else {
    T213 = YPfalse;
  }
  T212 = fun_42;
  T211 = CALL2(CHKREF(YPdefine_method),T213,T212);
  YsyntaxYsexpr_make_if = T211;
  regsym(&YsyntaxYsexpr_make_if,"syntax","sexpr-make-if");
  lit_69 = YPPsym((P)"lab");
  YsyntaxYDsexpr_bind_exit_tag = CHKREF(lit_69);
  regsym(&YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
  lit_70 = YPPsym((P)"sexpr-block?");
  T215 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_43 = YPmet(FUNCODEREF(fun_43),CHKREF(lit_70),T215,ENVNUL);
  T219 = BOUNDP(YsyntaxYsexpr_blockQ);
  if (T219 != YPfalse) {
    T218 = CHKREF(YsyntaxYsexpr_blockQ);
  } else {
    T218 = YPfalse;
  }
  T217 = fun_43;
  T216 = CALL2(CHKREF(YPdefine_method),T218,T217);
  YsyntaxYsexpr_blockQ = T216;
  regsym(&YsyntaxYsexpr_blockQ,"syntax","sexpr-block?");
  lit_71 = YPPsym((P)"sexpr-block-name");
  T220 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_44 = YPmet(FUNCODEREF(fun_44),CHKREF(lit_71),T220,ENVNUL);
  T224 = BOUNDP(YsyntaxYsexpr_block_name);
  if (T224 != YPfalse) {
    T223 = CHKREF(YsyntaxYsexpr_block_name);
  } else {
    T223 = YPfalse;
  }
  T222 = fun_44;
  T221 = CALL2(CHKREF(YPdefine_method),T223,T222);
  YsyntaxYsexpr_block_name = T221;
  regsym(&YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
  lit_72 = YPPsym((P)"sexpr-block-body");
  T225 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_45 = YPmet(FUNCODEREF(fun_45),CHKREF(lit_72),T225,ENVNUL);
  T229 = BOUNDP(YsyntaxYsexpr_block_body);
  if (T229 != YPfalse) {
    T228 = CHKREF(YsyntaxYsexpr_block_body);
  } else {
    T228 = YPfalse;
  }
  T227 = fun_45;
  T226 = CALL2(CHKREF(YPdefine_method),T228,T227);
  YsyntaxYsexpr_block_body = T226;
  regsym(&YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
  lit_73 = YPPsym((P)"fin");
  YsyntaxYDsexpr_unwind_protect_tag = CHKREF(lit_73);
  regsym(&YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
  lit_74 = YPPsym((P)"sexpr-unwind-protect?");
  T230 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_46 = YPmet(FUNCODEREF(fun_46),CHKREF(lit_74),T230,ENVNUL);
  T234 = BOUNDP(YsyntaxYsexpr_unwind_protectQ);
  if (T234 != YPfalse) {
    T233 = CHKREF(YsyntaxYsexpr_unwind_protectQ);
  } else {
    T233 = YPfalse;
  }
  T232 = fun_46;
  T231 = CALL2(CHKREF(YPdefine_method),T233,T232);
  YsyntaxYsexpr_unwind_protectQ = T231;
  regsym(&YsyntaxYsexpr_unwind_protectQ,"syntax","sexpr-unwind-protect?");
  lit_75 = YPPsym((P)"sexpr-unwind-protect-protected-form");
  T237 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  T236 = fun_47 = YPmet(FUNCODEREF(fun_47),CHKREF(lit_75),T237,ENVNUL);
  T242 = BOUNDP(YsyntaxYsexpr_unwind_protect_protected_form);
  if (T242 != YPfalse) {
    T241 = CHKREF(YsyntaxYsexpr_unwind_protect_protected_form);
  } else {
    T241 = YPfalse;
  }
  T240 = fun_47;
  T239 = CALL2(CHKREF(YPdefine_method),T241,T240);
  T238 = YsyntaxYsexpr_unwind_protect_protected_form = T239;
  regsym(&YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
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
  fun_48 = YPmet(FUNCODEREF(fun_48),CHKREF(lit_76),T0,ENVNUL);
  T4 = BOUNDP(YsyntaxYsexpr_unwind_protect_cleanup_forms);
  if (T4 != YPfalse) {
    T3 = CHKREF(YsyntaxYsexpr_unwind_protect_cleanup_forms);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_48;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YsyntaxYsexpr_unwind_protect_cleanup_forms = T1;
  regsym(&YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
  lit_77 = YPPsym((P)"try");
  YsyntaxYDsexpr_monitor_tag = CHKREF(lit_77);
  regsym(&YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
  lit_78 = YPPsym((P)"sexpr-monitor?");
  T5 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_49 = YPmet(FUNCODEREF(fun_49),CHKREF(lit_78),T5,ENVNUL);
  T9 = BOUNDP(YsyntaxYsexpr_monitorQ);
  if (T9 != YPfalse) {
    T8 = CHKREF(YsyntaxYsexpr_monitorQ);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_49;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  YsyntaxYsexpr_monitorQ = T6;
  regsym(&YsyntaxYsexpr_monitorQ,"syntax","sexpr-monitor?");
  lit_79 = YPPsym((P)"sexpr-monitor-expand");
  lit_80 = YPPsym((P)"return");
  lit_81 = YPPsym((P)"type");
  lit_82 = YPsb((P)"Match Pattern Failure");
  lit_83 = YPPsym((P)"x-1232");
  lit_84 = YPPsym((P)"args");
  lit_85 = YPPsym((P)"msg");
  lit_86 = YPsb((P)"Malformed TRY expression: ~=");
  T12 = YPsig(YPPlist(2,CHKREF(lit_85),CHKREF(lit_84)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1232_50 = YPmet(FUNCODEREF(fun_x_1232_50),CHKREF(lit_83),T12,ENVNUL);
  T11 = YPsig(YPPlist(1,CHKREF(lit_80)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T11,ENVNUL);
  T10 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_52 = YPmet(FUNCODEREF(fun_52),CHKREF(lit_79),T10,ENVNUL);
  T16 = BOUNDP(YsyntaxYsexpr_monitor_expand);
  if (T16 != YPfalse) {
    T15 = CHKREF(YsyntaxYsexpr_monitor_expand);
  } else {
    T15 = YPfalse;
  }
  T14 = fun_52;
  T13 = CALL2(CHKREF(YPdefine_method),T15,T14);
  YsyntaxYsexpr_monitor_expand = T13;
  regsym(&YsyntaxYsexpr_monitor_expand,"syntax","sexpr-monitor-expand");
  lit_87 = YPPsym((P)"find-option");
  lit_88 = YPPsym((P)"default");
  lit_89 = YPPsym((P)"option");
  lit_90 = YPPsym((P)"options");
  T17 = YPsig(YPPlist(3,CHKREF(lit_90),CHKREF(lit_89),CHKREF(lit_88)),YPPlist(3,CHKREF(YLlstG),CHKREF(YLsymG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  YsyntaxYfind_option = YPmet(FUNCODEREF(YsyntaxYfind_option),CHKREF(lit_87),T17,ENVNUL);
  T18 = YsyntaxYfind_option;
  YsyntaxYfind_option = T18;
  regsym(&YsyntaxYfind_option,"syntax","find-option");
  lit_91 = YPPsym((P)"sexpr-monitor-type");
  lit_92 = YPPsym((P)"x-1234");
  lit_93 = YPsb((P)"Malformed TRY condition type: %=");
  lit_94 = YPPlist(1,YPPsym((P)"<condition>"));
  T21 = YPsig(YPPlist(2,CHKREF(lit_85),CHKREF(lit_84)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1234_54 = YPmet(FUNCODEREF(fun_x_1234_54),CHKREF(lit_92),T21,ENVNUL);
  T20 = YPsig(YPPlist(1,CHKREF(lit_80)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T20,ENVNUL);
  T19 = YPsig(YPPlist(1,CHKREF(lit_90)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_56 = YPmet(FUNCODEREF(fun_56),CHKREF(lit_91),T19,ENVNUL);
  T25 = BOUNDP(YsyntaxYsexpr_monitor_type);
  if (T25 != YPfalse) {
    T24 = CHKREF(YsyntaxYsexpr_monitor_type);
  } else {
    T24 = YPfalse;
  }
  T23 = fun_56;
  T22 = CALL2(CHKREF(YPdefine_method),T24,T23);
  YsyntaxYsexpr_monitor_type = T22;
  regsym(&YsyntaxYsexpr_monitor_type,"syntax","sexpr-monitor-type");
  lit_95 = YPPsym((P)"sexpr-monitor-info");
  lit_96 = YPPsym((P)"$default-handler-info");
  lit_97 = YPPsym((P)"lst");
  lit_98 = YPPsym((P)"handler-info-arguments");
  lit_99 = YPPsym((P)"handler-info-message");
  lit_100 = YPPsym((P)"<simple-handler-info>");
  lit_101 = YPPsym((P)"isa");
  lit_102 = YPPsym((P)"x-1238");
  lit_103 = YPsb((P)"Malformed TRY description: %=");
  lit_104 = YPPsym((P)"x-1236");
  lit_105 = YPsb((P)"Malformed TRY info expression: %=");
  lit_106 = YPsb((P)"TRY may only have one of INFO or DESCRIPTION: %=");
  lit_107 = YPPsym((P)"description");
  lit_108 = YPPsym((P)"info");
  T30 = YPsig(YPPlist(2,CHKREF(lit_85),CHKREF(lit_84)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1238_57 = YPmet(FUNCODEREF(fun_x_1238_57),CHKREF(lit_102),T30,ENVNUL);
  T29 = YPsig(YPPlist(1,CHKREF(lit_80)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T29,ENVNUL);
  T28 = YPsig(YPPlist(2,CHKREF(lit_85),CHKREF(lit_84)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1236_59 = YPmet(FUNCODEREF(fun_x_1236_59),CHKREF(lit_104),T28,ENVNUL);
  T27 = YPsig(YPPlist(1,CHKREF(lit_80)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T27,ENVNUL);
  T26 = YPsig(YPPlist(1,CHKREF(lit_90)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_61 = YPmet(FUNCODEREF(fun_61),CHKREF(lit_95),T26,ENVNUL);
  T34 = BOUNDP(YsyntaxYsexpr_monitor_info);
  if (T34 != YPfalse) {
    T33 = CHKREF(YsyntaxYsexpr_monitor_info);
  } else {
    T33 = YPfalse;
  }
  T32 = fun_61;
  T31 = CALL2(CHKREF(YPdefine_method),T33,T32);
  YsyntaxYsexpr_monitor_info = T31;
  regsym(&YsyntaxYsexpr_monitor_info,"syntax","sexpr-monitor-info");
  lit_109 = YPPsym((P)"sexpr-monitor-test");
  lit_110 = YPPlist(1,YPtrue);
  T35 = YPsig(YPPlist(1,CHKREF(lit_90)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_62 = YPmet(FUNCODEREF(fun_62),CHKREF(lit_109),T35,ENVNUL);
  T39 = BOUNDP(YsyntaxYsexpr_monitor_test);
  if (T39 != YPfalse) {
    T38 = CHKREF(YsyntaxYsexpr_monitor_test);
  } else {
    T38 = YPfalse;
  }
  T37 = fun_62;
  T36 = CALL2(CHKREF(YPdefine_method),T38,T37);
  YsyntaxYsexpr_monitor_test = T36;
  regsym(&YsyntaxYsexpr_monitor_test,"syntax","sexpr-monitor-test");
  lit_111 = YPPsym((P)"sexpr-monitor-body");
  T40 = YPsig(YPPlist(1,CHKREF(lit_56)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_63 = YPmet(FUNCODEREF(fun_63),CHKREF(lit_111),T40,ENVNUL);
  T44 = BOUNDP(YsyntaxYsexpr_monitor_body);
  if (T44 != YPfalse) {
    T43 = CHKREF(YsyntaxYsexpr_monitor_body);
  } else {
    T43 = YPfalse;
  }
  T42 = fun_63;
  T41 = CALL2(CHKREF(YPdefine_method),T43,T42);
  YsyntaxYsexpr_monitor_body = T41;
  regsym(&YsyntaxYsexpr_monitor_body,"syntax","sexpr-monitor-body");
  lit_112 = YPPsym((P)"seq");
  YsyntaxYDsexpr_begin_tag = CHKREF(lit_112);
  regsym(&YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
  lit_113 = YPPsym((P)"sexpr-begin?");
  T45 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_64 = YPmet(FUNCODEREF(fun_64),CHKREF(lit_113),T45,ENVNUL);
  T49 = BOUNDP(YsyntaxYsexpr_beginQ);
  if (T49 != YPfalse) {
    T48 = CHKREF(YsyntaxYsexpr_beginQ);
  } else {
    T48 = YPfalse;
  }
  T47 = fun_64;
  T46 = CALL2(CHKREF(YPdefine_method),T48,T47);
  YsyntaxYsexpr_beginQ = T46;
  regsym(&YsyntaxYsexpr_beginQ,"syntax","sexpr-begin?");
  lit_114 = YPPsym((P)"sexpr-begin-actions");
  lit_115 = YPPsym((P)"begin-exp");
  T50 = YPsig(YPPlist(1,CHKREF(lit_115)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_65 = YPmet(FUNCODEREF(fun_65),CHKREF(lit_114),T50,ENVNUL);
  T54 = BOUNDP(YsyntaxYsexpr_begin_actions);
  if (T54 != YPfalse) {
    T53 = CHKREF(YsyntaxYsexpr_begin_actions);
  } else {
    T53 = YPfalse;
  }
  T52 = fun_65;
  T51 = CALL2(CHKREF(YPdefine_method),T53,T52);
  YsyntaxYsexpr_begin_actions = T51;
  regsym(&YsyntaxYsexpr_begin_actions,"syntax","sexpr-begin-actions");
  lit_116 = YPPsym((P)"sexpr-last-exp?");
  T55 = YPsig(YPPlist(1,CHKREF(lit_112)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_66 = YPmet(FUNCODEREF(fun_66),CHKREF(lit_116),T55,ENVNUL);
  T59 = BOUNDP(YsyntaxYsexpr_last_expQ);
  if (T59 != YPfalse) {
    T58 = CHKREF(YsyntaxYsexpr_last_expQ);
  } else {
    T58 = YPfalse;
  }
  T57 = fun_66;
  T56 = CALL2(CHKREF(YPdefine_method),T58,T57);
  YsyntaxYsexpr_last_expQ = T56;
  regsym(&YsyntaxYsexpr_last_expQ,"syntax","sexpr-last-exp?");
  lit_117 = YPPsym((P)"sexpr-first-exp");
  T60 = YPsig(YPPlist(1,CHKREF(lit_112)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_67 = YPmet(FUNCODEREF(fun_67),CHKREF(lit_117),T60,ENVNUL);
  T64 = BOUNDP(YsyntaxYsexpr_first_exp);
  if (T64 != YPfalse) {
    T63 = CHKREF(YsyntaxYsexpr_first_exp);
  } else {
    T63 = YPfalse;
  }
  T62 = fun_67;
  T61 = CALL2(CHKREF(YPdefine_method),T63,T62);
  YsyntaxYsexpr_first_exp = T61;
  regsym(&YsyntaxYsexpr_first_exp,"syntax","sexpr-first-exp");
  lit_118 = YPPsym((P)"sexpr-rest-exps");
  T65 = YPsig(YPPlist(1,CHKREF(lit_112)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_68 = YPmet(FUNCODEREF(fun_68),CHKREF(lit_118),T65,ENVNUL);
  T69 = BOUNDP(YsyntaxYsexpr_rest_exps);
  if (T69 != YPfalse) {
    T68 = CHKREF(YsyntaxYsexpr_rest_exps);
  } else {
    T68 = YPfalse;
  }
  T67 = fun_68;
  T66 = CALL2(CHKREF(YPdefine_method),T68,T67);
  YsyntaxYsexpr_rest_exps = T66;
  regsym(&YsyntaxYsexpr_rest_exps,"syntax","sexpr-rest-exps");
  lit_119 = YPPsym((P)"sexpr-sequence->begin");
  T70 = YPsig(YPPlist(1,CHKREF(lit_112)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_69 = YPmet(FUNCODEREF(fun_69),CHKREF(lit_119),T70,ENVNUL);
  T74 = BOUNDP(YsyntaxYsexpr_sequence_Gbegin);
  if (T74 != YPfalse) {
    T73 = CHKREF(YsyntaxYsexpr_sequence_Gbegin);
  } else {
    T73 = YPfalse;
  }
  T72 = fun_69;
  T71 = CALL2(CHKREF(YPdefine_method),T73,T72);
  YsyntaxYsexpr_sequence_Gbegin = T71;
  regsym(&YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
  lit_120 = YPPsym((P)"sexpr-make-begin");
  T75 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_70 = YPmet(FUNCODEREF(fun_70),CHKREF(lit_120),T75,ENVNUL);
  T79 = BOUNDP(YsyntaxYsexpr_make_begin);
  if (T79 != YPfalse) {
    T78 = CHKREF(YsyntaxYsexpr_make_begin);
  } else {
    T78 = YPfalse;
  }
  T77 = fun_70;
  T76 = CALL2(CHKREF(YPdefine_method),T78,T77);
  YsyntaxYsexpr_make_begin = T76;
  regsym(&YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
  lit_121 = YPPsym((P)"sexpr-application?");
  T80 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_71 = YPmet(FUNCODEREF(fun_71),CHKREF(lit_121),T80,ENVNUL);
  T84 = BOUNDP(YsyntaxYsexpr_applicationQ);
  if (T84 != YPfalse) {
    T83 = CHKREF(YsyntaxYsexpr_applicationQ);
  } else {
    T83 = YPfalse;
  }
  T82 = fun_71;
  T81 = CALL2(CHKREF(YPdefine_method),T83,T82);
  YsyntaxYsexpr_applicationQ = T81;
  regsym(&YsyntaxYsexpr_applicationQ,"syntax","sexpr-application?");
  lit_122 = YPPsym((P)"sexpr-operator");
  lit_123 = YPPsym((P)"app");
  T85 = YPsig(YPPlist(1,CHKREF(lit_123)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_72 = YPmet(FUNCODEREF(fun_72),CHKREF(lit_122),T85,ENVNUL);
  T89 = BOUNDP(YsyntaxYsexpr_operator);
  if (T89 != YPfalse) {
    T88 = CHKREF(YsyntaxYsexpr_operator);
  } else {
    T88 = YPfalse;
  }
  T87 = fun_72;
  T86 = CALL2(CHKREF(YPdefine_method),T88,T87);
  YsyntaxYsexpr_operator = T86;
  regsym(&YsyntaxYsexpr_operator,"syntax","sexpr-operator");
  lit_124 = YPPsym((P)"sexpr-operands");
  T90 = YPsig(YPPlist(1,CHKREF(lit_123)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_73 = YPmet(FUNCODEREF(fun_73),CHKREF(lit_124),T90,ENVNUL);
  T94 = BOUNDP(YsyntaxYsexpr_operands);
  if (T94 != YPfalse) {
    T93 = CHKREF(YsyntaxYsexpr_operands);
  } else {
    T93 = YPfalse;
  }
  T92 = fun_73;
  T91 = CALL2(CHKREF(YPdefine_method),T93,T92);
  YsyntaxYsexpr_operands = T91;
  regsym(&YsyntaxYsexpr_operands,"syntax","sexpr-operands");
  lit_125 = YPPsym((P)"sexpr-no-operands?");
  T95 = YPsig(YPPlist(1,CHKREF(lit_84)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_74 = YPmet(FUNCODEREF(fun_74),CHKREF(lit_125),T95,ENVNUL);
  T99 = BOUNDP(YsyntaxYsexpr_no_operandsQ);
  if (T99 != YPfalse) {
    T98 = CHKREF(YsyntaxYsexpr_no_operandsQ);
  } else {
    T98 = YPfalse;
  }
  T97 = fun_74;
  T96 = CALL2(CHKREF(YPdefine_method),T98,T97);
  YsyntaxYsexpr_no_operandsQ = T96;
  regsym(&YsyntaxYsexpr_no_operandsQ,"syntax","sexpr-no-operands?");
  lit_126 = YPPsym((P)"sexpr-first-operand");
  T100 = YPsig(YPPlist(1,CHKREF(lit_84)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_75 = YPmet(FUNCODEREF(fun_75),CHKREF(lit_126),T100,ENVNUL);
  T104 = BOUNDP(YsyntaxYsexpr_first_operand);
  if (T104 != YPfalse) {
    T103 = CHKREF(YsyntaxYsexpr_first_operand);
  } else {
    T103 = YPfalse;
  }
  T102 = fun_75;
  T101 = CALL2(CHKREF(YPdefine_method),T103,T102);
  YsyntaxYsexpr_first_operand = T101;
  regsym(&YsyntaxYsexpr_first_operand,"syntax","sexpr-first-operand");
  lit_127 = YPPsym((P)"sexpr-rest-operands");
  T105 = YPsig(YPPlist(1,CHKREF(lit_84)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_76 = YPmet(FUNCODEREF(fun_76),CHKREF(lit_127),T105,ENVNUL);
  T109 = BOUNDP(YsyntaxYsexpr_rest_operands);
  if (T109 != YPfalse) {
    T108 = CHKREF(YsyntaxYsexpr_rest_operands);
  } else {
    T108 = YPfalse;
  }
  T107 = fun_76;
  T106 = CALL2(CHKREF(YPdefine_method),T108,T107);
  YsyntaxYsexpr_rest_operands = T106;
  regsym(&YsyntaxYsexpr_rest_operands,"syntax","sexpr-rest-operands");
  lit_128 = YPPsym((P)"sexpr-make-application");
  lit_129 = YPPsym((P)"operands");
  lit_130 = YPPsym((P)"op");
  T110 = YPsig(YPPlist(2,CHKREF(lit_130),CHKREF(lit_129)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_77 = YPmet(FUNCODEREF(fun_77),CHKREF(lit_128),T110,ENVNUL);
  T114 = BOUNDP(YsyntaxYsexpr_make_application);
  if (T114 != YPfalse) {
    T113 = CHKREF(YsyntaxYsexpr_make_application);
  } else {
    T113 = YPfalse;
  }
  T112 = fun_77;
  T111 = CALL2(CHKREF(YPdefine_method),T113,T112);
  YsyntaxYsexpr_make_application = T111;
  regsym(&YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
  YsyntaxYTunique_name_counterT = YPint((P)0);
  regsym(&YsyntaxYTunique_name_counterT,"syntax","*unique-name-counter*");
  lit_131 = YPPsym((P)"sexpr-new-unique-name-counter!");
  T115 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLintG));
  fun_78 = YPmet(FUNCODEREF(fun_78),CHKREF(lit_131),T115,ENVNUL);
  T119 = BOUNDP(YsyntaxYsexpr_new_unique_name_counterX);
  if (T119 != YPfalse) {
    T118 = CHKREF(YsyntaxYsexpr_new_unique_name_counterX);
  } else {
    T118 = YPfalse;
  }
  T117 = fun_78;
  T116 = CALL2(CHKREF(YPdefine_method),T118,T117);
  YsyntaxYsexpr_new_unique_name_counterX = T116;
  regsym(&YsyntaxYsexpr_new_unique_name_counterX,"syntax","sexpr-new-unique-name-counter!");
  YsyntaxYLnameG = CHKREF(YLanyG);
  regsym(&YsyntaxYLnameG,"syntax","<name>");
  lit_132 = YPPsym((P)"sexpr-unique-name");
  lit_133 = YPPsym((P)"prefix");
  T120 = YPsig(YPPlist(1,CHKREF(lit_133)),YPPlist(1,CHKREF(YsyntaxYLnameG)),YPfalse,YPint((P)1),CHKREF(YLsymG));
  fun_79 = YPmet(FUNCODEREF(fun_79),CHKREF(lit_132),T120,ENVNUL);
  T124 = BOUNDP(YsyntaxYsexpr_unique_name);
  if (T124 != YPfalse) {
    T123 = CHKREF(YsyntaxYsexpr_unique_name);
  } else {
    T123 = YPfalse;
  }
  T122 = fun_79;
  T121 = CALL2(CHKREF(YPdefine_method),T123,T122);
  YsyntaxYsexpr_unique_name = T121;
  regsym(&YsyntaxYsexpr_unique_name,"syntax","sexpr-unique-name");
  lit_134 = YPPsym((P)"let");
  YsyntaxYDsexpr_let_tag = CHKREF(lit_134);
  regsym(&YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
  lit_135 = YPPsym((P)"sexpr-let?");
  T125 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_80 = YPmet(FUNCODEREF(fun_80),CHKREF(lit_135),T125,ENVNUL);
  T129 = BOUNDP(YsyntaxYsexpr_letQ);
  if (T129 != YPfalse) {
    T128 = CHKREF(YsyntaxYsexpr_letQ);
  } else {
    T128 = YPfalse;
  }
  T127 = fun_80;
  T126 = CALL2(CHKREF(YPdefine_method),T128,T127);
  YsyntaxYsexpr_letQ = T126;
  regsym(&YsyntaxYsexpr_letQ,"syntax","sexpr-let?");
  lit_136 = YPPsym((P)"sexpr-let-bound-variables");
  lit_137 = YPPsym((P)"let-exp");
  T130 = YPsig(YPPlist(1,CHKREF(lit_137)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_81 = YPmet(FUNCODEREF(fun_81),CHKREF(lit_136),T130,ENVNUL);
  T134 = BOUNDP(YsyntaxYsexpr_let_bound_variables);
  if (T134 != YPfalse) {
    T133 = CHKREF(YsyntaxYsexpr_let_bound_variables);
  } else {
    T133 = YPfalse;
  }
  T132 = fun_81;
  T131 = CALL2(CHKREF(YPdefine_method),T133,T132);
  YsyntaxYsexpr_let_bound_variables = T131;
  regsym(&YsyntaxYsexpr_let_bound_variables,"syntax","sexpr-let-bound-variables");
  lit_138 = YPPsym((P)"sexpr-let-values");
  T135 = YPsig(YPPlist(1,CHKREF(lit_137)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_82 = YPmet(FUNCODEREF(fun_82),CHKREF(lit_138),T135,ENVNUL);
  T139 = BOUNDP(YsyntaxYsexpr_let_values);
  if (T139 != YPfalse) {
    T138 = CHKREF(YsyntaxYsexpr_let_values);
  } else {
    T138 = YPfalse;
  }
  T137 = fun_82;
  T136 = CALL2(CHKREF(YPdefine_method),T138,T137);
  YsyntaxYsexpr_let_values = T136;
  regsym(&YsyntaxYsexpr_let_values,"syntax","sexpr-let-values");
  lit_139 = YPPsym((P)"sexpr-let-body");
  T140 = YPsig(YPPlist(1,CHKREF(lit_137)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_83 = YPmet(FUNCODEREF(fun_83),CHKREF(lit_139),T140,ENVNUL);
  T144 = BOUNDP(YsyntaxYsexpr_let_body);
  if (T144 != YPfalse) {
    T143 = CHKREF(YsyntaxYsexpr_let_body);
  } else {
    T143 = YPfalse;
  }
  T142 = fun_83;
  T141 = CALL2(CHKREF(YPdefine_method),T143,T142);
  YsyntaxYsexpr_let_body = T141;
  regsym(&YsyntaxYsexpr_let_body,"syntax","sexpr-let-body");
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
  fun_86 = YPmet(FUNCODEREF(fun_86),CHKREF(lit_140),T145,ENVNUL);
  T151 = BOUNDP(YsyntaxYsexpr_let_namesAvalues);
  if (T151 != YPfalse) {
    T150 = CHKREF(YsyntaxYsexpr_let_namesAvalues);
  } else {
    T150 = YPfalse;
  }
  T149 = fun_86;
  T148 = CALL2(CHKREF(YPdefine_method),T150,T149);
  YsyntaxYsexpr_let_namesAvalues = T148;
  regsym(&YsyntaxYsexpr_let_namesAvalues,"syntax","sexpr-let-names+values");
  lit_156 = YPPsym((P)"sexpr-let->combination");
  lit_157 = YPPsym((P)"col");
  lit_158 = YPPsym((P)"values");
  T153 = YPsig(YPPlist(2,CHKREF(lit_142),CHKREF(lit_158)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_col_87 = YPmet(FUNCODEREF(fun_col_87),CHKREF(lit_157),T153,ENVNUL);
  T152 = YPsig(YPPlist(1,CHKREF(lit_137)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_88 = YPmet(FUNCODEREF(fun_88),CHKREF(lit_156),T152,ENVNUL);
  T157 = BOUNDP(YsyntaxYsexpr_let_Gcombination);
  if (T157 != YPfalse) {
    T156 = CHKREF(YsyntaxYsexpr_let_Gcombination);
  } else {
    T156 = YPfalse;
  }
  T155 = fun_88;
  T154 = CALL2(CHKREF(YPdefine_method),T156,T155);
  YsyntaxYsexpr_let_Gcombination = T154;
  regsym(&YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
  lit_159 = YPPsym((P)"loc");
  YsyntaxYDsexpr_locals_tag = CHKREF(lit_159);
  regsym(&YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
  lit_160 = YPPsym((P)"sexpr-loc?");
  T158 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_89 = YPmet(FUNCODEREF(fun_89),CHKREF(lit_160),T158,ENVNUL);
  T162 = BOUNDP(YsyntaxYsexpr_locQ);
  if (T162 != YPfalse) {
    T161 = CHKREF(YsyntaxYsexpr_locQ);
  } else {
    T161 = YPfalse;
  }
  T160 = fun_89;
  T159 = CALL2(CHKREF(YPdefine_method),T161,T160);
  YsyntaxYsexpr_locQ = T159;
  regsym(&YsyntaxYsexpr_locQ,"syntax","sexpr-loc?");
  lit_161 = YPPsym((P)"sexpr-loc-bound-names");
  lit_162 = YPPsym((P)"loc-exp");
  T163 = YPsig(YPPlist(1,CHKREF(lit_162)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_90 = YPmet(FUNCODEREF(fun_90),CHKREF(lit_161),T163,ENVNUL);
  T167 = BOUNDP(YsyntaxYsexpr_loc_bound_names);
  if (T167 != YPfalse) {
    T166 = CHKREF(YsyntaxYsexpr_loc_bound_names);
  } else {
    T166 = YPfalse;
  }
  T165 = fun_90;
  T164 = CALL2(CHKREF(YPdefine_method),T166,T165);
  YsyntaxYsexpr_loc_bound_names = T164;
  regsym(&YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
  lit_163 = YPPsym((P)"sexpr-loc-bound-signatures");
  T168 = YPsig(YPPlist(1,CHKREF(lit_162)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_91 = YPmet(FUNCODEREF(fun_91),CHKREF(lit_163),T168,ENVNUL);
  T172 = BOUNDP(YsyntaxYsexpr_loc_bound_signatures);
  if (T172 != YPfalse) {
    T171 = CHKREF(YsyntaxYsexpr_loc_bound_signatures);
  } else {
    T171 = YPfalse;
  }
  T170 = fun_91;
  T169 = CALL2(CHKREF(YPdefine_method),T171,T170);
  YsyntaxYsexpr_loc_bound_signatures = T169;
  regsym(&YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
  lit_164 = YPPsym((P)"sexpr-loc-bound-bodies");
  T173 = YPsig(YPPlist(1,CHKREF(lit_162)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_92 = YPmet(FUNCODEREF(fun_92),CHKREF(lit_164),T173,ENVNUL);
  T177 = BOUNDP(YsyntaxYsexpr_loc_bound_bodies);
  if (T177 != YPfalse) {
    T176 = CHKREF(YsyntaxYsexpr_loc_bound_bodies);
  } else {
    T176 = YPfalse;
  }
  T175 = fun_92;
  T174 = CALL2(CHKREF(YPdefine_method),T176,T175);
  YsyntaxYsexpr_loc_bound_bodies = T174;
  regsym(&YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
  lit_165 = YPPsym((P)"sexpr-loc-raw-body");
  T178 = YPsig(YPPlist(1,CHKREF(lit_162)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_93 = YPmet(FUNCODEREF(fun_93),CHKREF(lit_165),T178,ENVNUL);
  T182 = BOUNDP(YsyntaxYsexpr_loc_raw_body);
  if (T182 != YPfalse) {
    T181 = CHKREF(YsyntaxYsexpr_loc_raw_body);
  } else {
    T181 = YPfalse;
  }
  T180 = fun_93;
  T179 = CALL2(CHKREF(YPdefine_method),T181,T180);
  YsyntaxYsexpr_loc_raw_body = T179;
  regsym(&YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
  lit_166 = YPPsym((P)"sexpr-loc-body");
  T183 = YPsig(YPPlist(1,CHKREF(lit_162)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_94 = YPmet(FUNCODEREF(fun_94),CHKREF(lit_166),T183,ENVNUL);
  T187 = BOUNDP(YsyntaxYsexpr_loc_body);
  if (T187 != YPfalse) {
    T186 = CHKREF(YsyntaxYsexpr_loc_body);
  } else {
    T186 = YPfalse;
  }
  T185 = fun_94;
  T184 = CALL2(CHKREF(YPdefine_method),T186,T185);
  YsyntaxYsexpr_loc_body = T184;
  regsym(&YsyntaxYsexpr_loc_body,"syntax","sexpr-loc-body");
  lit_167 = YPPsym((P)"rep");
  YsyntaxYDsexpr_iterate_tag = CHKREF(lit_167);
  regsym(&YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
  lit_168 = YPPsym((P)"sexpr-iterate?");
  T188 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_95 = YPmet(FUNCODEREF(fun_95),CHKREF(lit_168),T188,ENVNUL);
  T192 = BOUNDP(YsyntaxYsexpr_iterateQ);
  if (T192 != YPfalse) {
    T191 = CHKREF(YsyntaxYsexpr_iterateQ);
  } else {
    T191 = YPfalse;
  }
  T190 = fun_95;
  T189 = CALL2(CHKREF(YPdefine_method),T191,T190);
  YsyntaxYsexpr_iterateQ = T189;
  regsym(&YsyntaxYsexpr_iterateQ,"syntax","sexpr-iterate?");
  lit_169 = YPPsym((P)"sexpr-iterate-name");
  lit_170 = YPPsym((P)"rep-exp");
  T193 = YPsig(YPPlist(1,CHKREF(lit_170)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLsymG));
  fun_96 = YPmet(FUNCODEREF(fun_96),CHKREF(lit_169),T193,ENVNUL);
  T197 = BOUNDP(YsyntaxYsexpr_iterate_name);
  if (T197 != YPfalse) {
    T196 = CHKREF(YsyntaxYsexpr_iterate_name);
  } else {
    T196 = YPfalse;
  }
  T195 = fun_96;
  T194 = CALL2(CHKREF(YPdefine_method),T196,T195);
  YsyntaxYsexpr_iterate_name = T194;
  regsym(&YsyntaxYsexpr_iterate_name,"syntax","sexpr-iterate-name");
  YsyntaxYDsexpr_values_tag = CHKREF(lit_39);
  regsym(&YsyntaxYDsexpr_values_tag,"syntax","$sexpr-values-tag");
  lit_171 = YPPsym((P)"sexpr-iterate-signature");
  T198 = YPsig(YPPlist(1,CHKREF(lit_170)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_97 = YPmet(FUNCODEREF(fun_97),CHKREF(lit_171),T198,ENVNUL);
  T202 = BOUNDP(YsyntaxYsexpr_iterate_signature);
  if (T202 != YPfalse) {
    T201 = CHKREF(YsyntaxYsexpr_iterate_signature);
  } else {
    T201 = YPfalse;
  }
  T200 = fun_97;
  T199 = CALL2(CHKREF(YPdefine_method),T201,T200);
  YsyntaxYsexpr_iterate_signature = T199;
  regsym(&YsyntaxYsexpr_iterate_signature,"syntax","sexpr-iterate-signature");
  lit_172 = YPPsym((P)"sexpr-iterate-inits");
  T203 = YPsig(YPPlist(1,CHKREF(lit_170)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_98 = YPmet(FUNCODEREF(fun_98),CHKREF(lit_172),T203,ENVNUL);
  T207 = BOUNDP(YsyntaxYsexpr_iterate_inits);
  if (T207 != YPfalse) {
    T206 = CHKREF(YsyntaxYsexpr_iterate_inits);
  } else {
    T206 = YPfalse;
  }
  T205 = fun_98;
  T204 = CALL2(CHKREF(YPdefine_method),T206,T205);
  YsyntaxYsexpr_iterate_inits = T204;
  regsym(&YsyntaxYsexpr_iterate_inits,"syntax","sexpr-iterate-inits");
  lit_173 = YPPsym((P)"sexpr-iterate-body");
  T208 = YPsig(YPPlist(1,CHKREF(lit_170)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_99 = YPmet(FUNCODEREF(fun_99),CHKREF(lit_173),T208,ENVNUL);
  T212 = BOUNDP(YsyntaxYsexpr_iterate_body);
  if (T212 != YPfalse) {
    T211 = CHKREF(YsyntaxYsexpr_iterate_body);
  } else {
    T211 = YPfalse;
  }
  T210 = fun_99;
  T209 = CALL2(CHKREF(YPdefine_method),T211,T210);
  YsyntaxYsexpr_iterate_body = T209;
  regsym(&YsyntaxYsexpr_iterate_body,"syntax","sexpr-iterate-body");
  lit_174 = YPPsym((P)"sexpr-iterate->loc");
  T213 = YPsig(YPPlist(1,CHKREF(lit_170)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_100 = YPmet(FUNCODEREF(fun_100),CHKREF(lit_174),T213,ENVNUL);
  T217 = BOUNDP(YsyntaxYsexpr_iterate_Gloc);
  if (T217 != YPfalse) {
    T216 = CHKREF(YsyntaxYsexpr_iterate_Gloc);
  } else {
    T216 = YPfalse;
  }
  T215 = fun_100;
  T214 = CALL2(CHKREF(YPdefine_method),T216,T215);
  YsyntaxYsexpr_iterate_Gloc = T214;
  regsym(&YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
  YsyntaxYDsexpr_isa_tag = CHKREF(lit_101);
  regsym(&YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
  lit_175 = YPPsym((P)"sexpr-isa?");
  T218 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_101 = YPmet(FUNCODEREF(fun_101),CHKREF(lit_175),T218,ENVNUL);
  T222 = BOUNDP(YsyntaxYsexpr_isaQ);
  if (T222 != YPfalse) {
    T221 = CHKREF(YsyntaxYsexpr_isaQ);
  } else {
    T221 = YPfalse;
  }
  T220 = fun_101;
  T219 = CALL2(CHKREF(YPdefine_method),T221,T220);
  YsyntaxYsexpr_isaQ = T219;
  regsym(&YsyntaxYsexpr_isaQ,"syntax","sexpr-isa?");
  lit_176 = YPPsym((P)"sexpr-isa-parents");
  T223 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_102 = YPmet(FUNCODEREF(fun_102),CHKREF(lit_176),T223,ENVNUL);
  T227 = BOUNDP(YsyntaxYsexpr_isa_parents);
  if (T227 != YPfalse) {
    T226 = CHKREF(YsyntaxYsexpr_isa_parents);
  } else {
    T226 = YPfalse;
  }
  T225 = fun_102;
  T224 = CALL2(CHKREF(YPdefine_method),T226,T225);
  YsyntaxYsexpr_isa_parents = T224;
  regsym(&YsyntaxYsexpr_isa_parents,"syntax","sexpr-isa-parents");
  lit_177 = YPPsym((P)"sexpr-isa-slot-inits");
  T228 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_103 = YPmet(FUNCODEREF(fun_103),CHKREF(lit_177),T228,ENVNUL);
  T232 = BOUNDP(YsyntaxYsexpr_isa_slot_inits);
  if (T232 != YPfalse) {
    T231 = CHKREF(YsyntaxYsexpr_isa_slot_inits);
  } else {
    T231 = YPfalse;
  }
  T230 = fun_103;
  T229 = CALL2(CHKREF(YPdefine_method),T231,T230);
  YsyntaxYsexpr_isa_slot_inits = T229;
  regsym(&YsyntaxYsexpr_isa_slot_inits,"syntax","sexpr-isa-slot-inits");
  lit_178 = YPPsym((P)"sexpr-isa-init-slots");
  T233 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_104 = YPmet(FUNCODEREF(fun_104),CHKREF(lit_178),T233,ENVNUL);
  T237 = BOUNDP(YsyntaxYsexpr_isa_init_slots);
  if (T237 != YPfalse) {
    T236 = CHKREF(YsyntaxYsexpr_isa_init_slots);
  } else {
    T236 = YPfalse;
  }
  T235 = fun_104;
  T234 = CALL2(CHKREF(YPdefine_method),T236,T235);
  YsyntaxYsexpr_isa_init_slots = T234;
  regsym(&YsyntaxYsexpr_isa_init_slots,"syntax","sexpr-isa-init-slots");
  lit_179 = YPPsym((P)"sexpr-isa-init-values");
  T238 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_105 = YPmet(FUNCODEREF(fun_105),CHKREF(lit_179),T238,ENVNUL);
  T242 = BOUNDP(YsyntaxYsexpr_isa_init_values);
  if (T242 != YPfalse) {
    T241 = CHKREF(YsyntaxYsexpr_isa_init_values);
  } else {
    T241 = YPfalse;
  }
  T240 = fun_105;
  T239 = CALL2(CHKREF(YPdefine_method),T241,T240);
  YsyntaxYsexpr_isa_init_values = T239;
  regsym(&YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
  lit_180 = YPPsym((P)"dc");
  YsyntaxYDsexpr_define_class_tag = CHKREF(lit_180);
  regsym(&YsyntaxYDsexpr_define_class_tag,"syntax","$sexpr-define-class-tag");
  lit_181 = YPPsym((P)"sexpr-define-class?");
  T243 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_106 = YPmet(FUNCODEREF(fun_106),CHKREF(lit_181),T243,ENVNUL);
  T247 = BOUNDP(YsyntaxYsexpr_define_classQ);
  if (T247 != YPfalse) {
    T246 = CHKREF(YsyntaxYsexpr_define_classQ);
  } else {
    T246 = YPfalse;
  }
  T245 = fun_106;
  T244 = CALL2(CHKREF(YPdefine_method),T246,T245);
  YsyntaxYsexpr_define_classQ = T244;
  regsym(&YsyntaxYsexpr_define_classQ,"syntax","sexpr-define-class?");
  lit_182 = YPPsym((P)"sexpr-define-class-parents");
  T248 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_107 = YPmet(FUNCODEREF(fun_107),CHKREF(lit_182),T248,ENVNUL);
  T252 = BOUNDP(YsyntaxYsexpr_define_class_parents);
  if (T252 != YPfalse) {
    T251 = CHKREF(YsyntaxYsexpr_define_class_parents);
  } else {
    T251 = YPfalse;
  }
  T250 = fun_107;
  T249 = CALL2(CHKREF(YPdefine_method),T251,T250);
  YsyntaxYsexpr_define_class_parents = T249;
  regsym(&YsyntaxYsexpr_define_class_parents,"syntax","sexpr-define-class-parents");
  lit_183 = YPPsym((P)"slot");
  YsyntaxYDsexpr_slot_tag = CHKREF(lit_183);
  regsym(&YsyntaxYDsexpr_slot_tag,"syntax","$sexpr-slot-tag");
  lit_184 = YPPsym((P)"sexpr-slot?");
  T253 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_108 = YPmet(FUNCODEREF(fun_108),CHKREF(lit_184),T253,ENVNUL);
  T257 = BOUNDP(YsyntaxYsexpr_slotQ);
  if (T257 != YPfalse) {
    T256 = CHKREF(YsyntaxYsexpr_slotQ);
  } else {
    T256 = YPfalse;
  }
  T255 = fun_108;
  T254 = CALL2(CHKREF(YPdefine_method),T256,T255);
  YsyntaxYsexpr_slotQ = T254;
  regsym(&YsyntaxYsexpr_slotQ,"syntax","sexpr-slot?");
  lit_185 = YPPsym((P)"sexpr-slot-object");
  T258 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_109 = YPmet(FUNCODEREF(fun_109),CHKREF(lit_185),T258,ENVNUL);
  T262 = BOUNDP(YsyntaxYsexpr_slot_object);
  if (T262 != YPfalse) {
    T261 = CHKREF(YsyntaxYsexpr_slot_object);
  } else {
    T261 = YPfalse;
  }
  T260 = fun_109;
  T259 = CALL2(CHKREF(YPdefine_method),T261,T260);
  YsyntaxYsexpr_slot_object = T259;
  regsym(&YsyntaxYsexpr_slot_object,"syntax","sexpr-slot-object");
  lit_186 = YPPsym((P)"sexpr-slot-variable");
  T263 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_110 = YPmet(FUNCODEREF(fun_110),CHKREF(lit_186),T263,ENVNUL);
  T267 = BOUNDP(YsyntaxYsexpr_slot_variable);
  if (T267 != YPfalse) {
    T266 = CHKREF(YsyntaxYsexpr_slot_variable);
  } else {
    T266 = YPfalse;
  }
  T265 = fun_110;
  T264 = CALL2(CHKREF(YPdefine_method),T266,T265);
  YsyntaxYsexpr_slot_variable = T264;
  regsym(&YsyntaxYsexpr_slot_variable,"syntax","sexpr-slot-variable");
  lit_187 = YPPsym((P)"sexpr-slot-init");
  lit_188 = YPPsym((P)"nul");
  T270 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  T269 = fun_111 = YPmet(FUNCODEREF(fun_111),CHKREF(lit_187),T270,ENVNUL);
  T275 = BOUNDP(YsyntaxYsexpr_slot_init);
  if (T275 != YPfalse) {
    T274 = CHKREF(YsyntaxYsexpr_slot_init);
  } else {
    T274 = YPfalse;
  }
  T273 = fun_111;
  T272 = CALL2(CHKREF(YPdefine_method),T274,T273);
  T271 = YsyntaxYsexpr_slot_init = T272;
  regsym(&YsyntaxYsexpr_slot_init,"syntax","sexpr-slot-init");
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
  fun_112 = YPmet(FUNCODEREF(fun_112),CHKREF(lit_189),T0,ENVNUL);
  T4 = BOUNDP(YsyntaxYsexpr_make_getter);
  if (T4 != YPfalse) {
    T3 = CHKREF(YsyntaxYsexpr_make_getter);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_112;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YsyntaxYsexpr_make_getter = T1;
  regsym(&YsyntaxYsexpr_make_getter,"syntax","sexpr-make-getter");
  lit_192 = YPPsym((P)"sexpr-make-setter");
  lit_193 = YPPsym((P)"slot-type");
  lit_194 = YPPsym((P)"_z");
  lit_195 = YPPsym((P)"slot-value-setter");
  T5 = YPsig(YPPlist(3,CHKREF(lit_59),CHKREF(lit_81),CHKREF(lit_193)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLlstG));
  fun_113 = YPmet(FUNCODEREF(fun_113),CHKREF(lit_192),T5,ENVNUL);
  T9 = BOUNDP(YsyntaxYsexpr_make_setter);
  if (T9 != YPfalse) {
    T8 = CHKREF(YsyntaxYsexpr_make_setter);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_113;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  YsyntaxYsexpr_make_setter = T6;
  regsym(&YsyntaxYsexpr_make_setter,"syntax","sexpr-make-setter");
  lit_196 = YPPsym((P)"sexpr-make-setter-name");
  lit_197 = YPsb((P)"-setter");
  T10 = YPsig(YPPlist(1,CHKREF(lit_59)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLsymG));
  fun_114 = YPmet(FUNCODEREF(fun_114),CHKREF(lit_196),T10,ENVNUL);
  T14 = BOUNDP(YsyntaxYsexpr_make_setter_name);
  if (T14 != YPfalse) {
    T13 = CHKREF(YsyntaxYsexpr_make_setter_name);
  } else {
    T13 = YPfalse;
  }
  T12 = fun_114;
  T11 = CALL2(CHKREF(YPdefine_method),T13,T12);
  YsyntaxYsexpr_make_setter_name = T11;
  regsym(&YsyntaxYsexpr_make_setter_name,"syntax","sexpr-make-setter-name");
  lit_198 = YPPsym((P)"sexpr-macro?");
  T15 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_115 = YPmet(FUNCODEREF(fun_115),CHKREF(lit_198),T15,ENVNUL);
  T19 = BOUNDP(YsyntaxYsexpr_macroQ);
  if (T19 != YPfalse) {
    T18 = CHKREF(YsyntaxYsexpr_macroQ);
  } else {
    T18 = YPfalse;
  }
  T17 = fun_115;
  T16 = CALL2(CHKREF(YPdefine_method),T18,T17);
  YsyntaxYsexpr_macroQ = T16;
  regsym(&YsyntaxYsexpr_macroQ,"syntax","sexpr-macro?");
  lit_199 = YPPsym((P)"macro-expand");
  YsyntaxYDsexpr_macro_expand_tag = CHKREF(lit_199);
  regsym(&YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
  lit_200 = YPPsym((P)"sexpr-macro-expand?");
  T20 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_116 = YPmet(FUNCODEREF(fun_116),CHKREF(lit_200),T20,ENVNUL);
  T24 = BOUNDP(YsyntaxYsexpr_macro_expandQ);
  if (T24 != YPfalse) {
    T23 = CHKREF(YsyntaxYsexpr_macro_expandQ);
  } else {
    T23 = YPfalse;
  }
  T22 = fun_116;
  T21 = CALL2(CHKREF(YPdefine_method),T23,T22);
  YsyntaxYsexpr_macro_expandQ = T21;
  regsym(&YsyntaxYsexpr_macro_expandQ,"syntax","sexpr-macro-expand?");
  lit_201 = YPPsym((P)"mif");
  YsyntaxYDsexpr_syntax_if_tag = CHKREF(lit_201);
  regsym(&YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
  lit_202 = YPPsym((P)"sexpr-make-syntax-if");
  lit_203 = YPPsym((P)"pat");
  T25 = YPsig(YPPlist(4,CHKREF(lit_203),CHKREF(lit_1),CHKREF(lit_67),CHKREF(lit_66)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YLlstG));
  fun_117 = YPmet(FUNCODEREF(fun_117),CHKREF(lit_202),T25,ENVNUL);
  T29 = BOUNDP(YsyntaxYsexpr_make_syntax_if);
  if (T29 != YPfalse) {
    T28 = CHKREF(YsyntaxYsexpr_make_syntax_if);
  } else {
    T28 = YPfalse;
  }
  T27 = fun_117;
  T26 = CALL2(CHKREF(YPdefine_method),T28,T27);
  YsyntaxYsexpr_make_syntax_if = T26;
  regsym(&YsyntaxYsexpr_make_syntax_if,"syntax","sexpr-make-syntax-if");
  lit_204 = YPPsym((P)"comma-atsign");
  YsyntaxYTcomma_atsignT = CHKREF(lit_204);
  regsym(&YsyntaxYTcomma_atsignT,"syntax","*comma-atsign*");
  lit_205 = YPPsym((P)"bq-list");
  YsyntaxYTbq_listT = CHKREF(lit_205);
  regsym(&YsyntaxYTbq_listT,"syntax","*bq-list*");
  lit_206 = YPPsym((P)"bq-list*");
  YsyntaxYTbq_listTT = CHKREF(lit_206);
  regsym(&YsyntaxYTbq_listTT,"syntax","*bq-list**");
  lit_207 = YPPsym((P)"bq-append");
  YsyntaxYTbq_appendT = CHKREF(lit_207);
  regsym(&YsyntaxYTbq_appendT,"syntax","*bq-append*");
  lit_208 = YPPsym((P)"bq-nconc");
  YsyntaxYTbq_nconcT = CHKREF(lit_208);
  regsym(&YsyntaxYTbq_nconcT,"syntax","*bq-nconc*");
  lit_209 = YPPsym((P)"bq-clobberable");
  YsyntaxYTbq_clobberableT = CHKREF(lit_209);
  regsym(&YsyntaxYTbq_clobberableT,"syntax","*bq-clobberable*");
  lit_210 = YPPsym((P)"bq-quote");
  YsyntaxYTbq_quoteT = CHKREF(lit_210);
  regsym(&YsyntaxYTbq_quoteT,"syntax","*bq-quote*");
  lit_211 = YPPsym((P)"sexpr-expand-backquote");
  lit_212 = YPPsym((P)"x");
  lit_213 = YPPsym((P)"proto");
  T30 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  YsyntaxYsexpr_expand_backquote = YPmet(FUNCODEREF(YsyntaxYsexpr_expand_backquote),CHKREF(lit_211),T30,ENVNUL);
  T31 = YsyntaxYsexpr_expand_backquote;
  YsyntaxYsexpr_expand_backquote = T31;
  regsym(&YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
  lit_214 = YPPsym((P)"sexpr-build-backquote-expander");
  T32 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_119 = YPmet(FUNCODEREF(fun_119),CHKREF(lit_214),T32,ENVNUL);
  T36 = BOUNDP(YsyntaxYsexpr_build_backquote_expander);
  if (T36 != YPfalse) {
    T35 = CHKREF(YsyntaxYsexpr_build_backquote_expander);
  } else {
    T35 = YPfalse;
  }
  T34 = fun_119;
  T33 = CALL2(CHKREF(YPdefine_method),T35,T34);
  YsyntaxYsexpr_build_backquote_expander = T33;
  regsym(&YsyntaxYsexpr_build_backquote_expander,"syntax","sexpr-build-backquote-expander");
  lit_215 = YPPsym((P)"sexpr-unquote?");
  lit_216 = YPPsym((P)"unquote");
  T37 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_120 = YPmet(FUNCODEREF(fun_120),CHKREF(lit_215),T37,ENVNUL);
  T41 = BOUNDP(YsyntaxYsexpr_unquoteQ);
  if (T41 != YPfalse) {
    T40 = CHKREF(YsyntaxYsexpr_unquoteQ);
  } else {
    T40 = YPfalse;
  }
  T39 = fun_120;
  T38 = CALL2(CHKREF(YPdefine_method),T40,T39);
  YsyntaxYsexpr_unquoteQ = T38;
  regsym(&YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
  lit_217 = YPPsym((P)"sexpr-unquote-splicing?");
  lit_218 = YPPsym((P)"unquote-splicing");
  T42 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_121 = YPmet(FUNCODEREF(fun_121),CHKREF(lit_217),T42,ENVNUL);
  T46 = BOUNDP(YsyntaxYsexpr_unquote_splicingQ);
  if (T46 != YPfalse) {
    T45 = CHKREF(YsyntaxYsexpr_unquote_splicingQ);
  } else {
    T45 = YPfalse;
  }
  T44 = fun_121;
  T43 = CALL2(CHKREF(YPdefine_method),T45,T44);
  YsyntaxYsexpr_unquote_splicingQ = T43;
  regsym(&YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
  lit_219 = YPPsym((P)"sexpr-backquote?");
  T47 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_122 = YPmet(FUNCODEREF(fun_122),CHKREF(lit_219),T47,ENVNUL);
  T51 = BOUNDP(YsyntaxYsexpr_backquoteQ);
  if (T51 != YPfalse) {
    T50 = CHKREF(YsyntaxYsexpr_backquoteQ);
  } else {
    T50 = YPfalse;
  }
  T49 = fun_122;
  T48 = CALL2(CHKREF(YPdefine_method),T50,T49);
  YsyntaxYsexpr_backquoteQ = T48;
  regsym(&YsyntaxYsexpr_backquoteQ,"syntax","sexpr-backquote?");
  lit_220 = YPPsym((P)"sexpr-atom?");
  T52 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_123 = YPmet(FUNCODEREF(fun_123),CHKREF(lit_220),T52,ENVNUL);
  T56 = BOUNDP(YsyntaxYsexpr_atomQ);
  if (T56 != YPfalse) {
    T55 = CHKREF(YsyntaxYsexpr_atomQ);
  } else {
    T55 = YPfalse;
  }
  T54 = fun_123;
  T53 = CALL2(CHKREF(YPdefine_method),T55,T54);
  YsyntaxYsexpr_atomQ = T53;
  regsym(&YsyntaxYsexpr_atomQ,"syntax","sexpr-atom?");
  lit_221 = YPPsym((P)"nreconc");
  lit_222 = YPPsym((P)"y");
  T57 = YPsig(YPPlist(2,CHKREF(lit_212),CHKREF(lit_222)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_124 = YPmet(FUNCODEREF(fun_124),CHKREF(lit_221),T57,ENVNUL);
  T61 = BOUNDP(YsyntaxYnreconc);
  if (T61 != YPfalse) {
    T60 = CHKREF(YsyntaxYnreconc);
  } else {
    T60 = YPfalse;
  }
  T59 = fun_124;
  T58 = CALL2(CHKREF(YPdefine_method),T60,T59);
  YsyntaxYnreconc = T58;
  regsym(&YsyntaxYnreconc,"syntax","nreconc");
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
  fun_127 = YPmet(FUNCODEREF(fun_127),CHKREF(lit_223),T62,ENVNUL);
  T68 = BOUNDP(YsyntaxYbq_process);
  if (T68 != YPfalse) {
    T67 = CHKREF(YsyntaxYbq_process);
  } else {
    T67 = YPfalse;
  }
  T66 = fun_127;
  T65 = CALL2(CHKREF(YPdefine_method),T67,T66);
  YsyntaxYbq_process = T65;
  regsym(&YsyntaxYbq_process,"syntax","bq-process");
  lit_229 = YPPsym((P)"bracket");
  T69 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_128 = YPmet(FUNCODEREF(fun_128),CHKREF(lit_229),T69,ENVNUL);
  T73 = BOUNDP(YsyntaxYbracket);
  if (T73 != YPfalse) {
    T72 = CHKREF(YsyntaxYbracket);
  } else {
    T72 = YPfalse;
  }
  T71 = fun_128;
  T70 = CALL2(CHKREF(YPdefine_method),T72,T71);
  YsyntaxYbracket = T70;
  regsym(&YsyntaxYbracket,"syntax","bracket");
  lit_230 = YPPsym((P)"map-tree");
  lit_231 = YPPsym((P)"fn");
  T74 = YPsig(YPPlist(2,CHKREF(lit_231),CHKREF(lit_212)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_129 = YPmet(FUNCODEREF(fun_129),CHKREF(lit_230),T74,ENVNUL);
  T78 = BOUNDP(YsyntaxYmap_tree);
  if (T78 != YPfalse) {
    T77 = CHKREF(YsyntaxYmap_tree);
  } else {
    T77 = YPfalse;
  }
  T76 = fun_129;
  T75 = CALL2(CHKREF(YPdefine_method),T77,T76);
  YsyntaxYmap_tree = T75;
  regsym(&YsyntaxYmap_tree,"syntax","map-tree");
  lit_232 = YPPsym((P)"bq-remove-tokens");
  lit_233 = YPPsym((P)"pair");
  lit_234 = YPPsym((P)"list*");
  lit_235 = YPPsym((P)"cat!");
  lit_236 = YPPsym((P)"cat");
  T79 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_130 = YPmet(FUNCODEREF(fun_130),CHKREF(lit_232),T79,ENVNUL);
  T83 = BOUNDP(YsyntaxYbq_remove_tokens);
  if (T83 != YPfalse) {
    T82 = CHKREF(YsyntaxYbq_remove_tokens);
  } else {
    T82 = YPfalse;
  }
  T81 = fun_130;
  T80 = CALL2(CHKREF(YPdefine_method),T82,T81);
  YsyntaxYbq_remove_tokens = T80;
  regsym(&YsyntaxYbq_remove_tokens,"syntax","bq-remove-tokens");
  lit_237 = YPPsym((P)"sexpr-syntax-if?");
  T84 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_131 = YPmet(FUNCODEREF(fun_131),CHKREF(lit_237),T84,ENVNUL);
  T88 = BOUNDP(YsyntaxYsexpr_syntax_ifQ);
  if (T88 != YPfalse) {
    T87 = CHKREF(YsyntaxYsexpr_syntax_ifQ);
  } else {
    T87 = YPfalse;
  }
  T86 = fun_131;
  T85 = CALL2(CHKREF(YPdefine_method),T87,T86);
  YsyntaxYsexpr_syntax_ifQ = T85;
  regsym(&YsyntaxYsexpr_syntax_ifQ,"syntax","sexpr-syntax-if?");
  lit_238 = YPPsym((P)"sexpr-syntax-if-value");
  T89 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_132 = YPmet(FUNCODEREF(fun_132),CHKREF(lit_238),T89,ENVNUL);
  T93 = BOUNDP(YsyntaxYsexpr_syntax_if_value);
  if (T93 != YPfalse) {
    T92 = CHKREF(YsyntaxYsexpr_syntax_if_value);
  } else {
    T92 = YPfalse;
  }
  T91 = fun_132;
  T90 = CALL2(CHKREF(YPdefine_method),T92,T91);
  YsyntaxYsexpr_syntax_if_value = T90;
  regsym(&YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
  lit_239 = YPPsym((P)"sexpr-syntax-if-pattern");
  T94 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_133 = YPmet(FUNCODEREF(fun_133),CHKREF(lit_239),T94,ENVNUL);
  T98 = BOUNDP(YsyntaxYsexpr_syntax_if_pattern);
  if (T98 != YPfalse) {
    T97 = CHKREF(YsyntaxYsexpr_syntax_if_pattern);
  } else {
    T97 = YPfalse;
  }
  T96 = fun_133;
  T95 = CALL2(CHKREF(YPdefine_method),T97,T96);
  YsyntaxYsexpr_syntax_if_pattern = T95;
  regsym(&YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
  lit_240 = YPPsym((P)"sexpr-syntax-if-then");
  T99 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_134 = YPmet(FUNCODEREF(fun_134),CHKREF(lit_240),T99,ENVNUL);
  T103 = BOUNDP(YsyntaxYsexpr_syntax_if_then);
  if (T103 != YPfalse) {
    T102 = CHKREF(YsyntaxYsexpr_syntax_if_then);
  } else {
    T102 = YPfalse;
  }
  T101 = fun_134;
  T100 = CALL2(CHKREF(YPdefine_method),T102,T101);
  YsyntaxYsexpr_syntax_if_then = T100;
  regsym(&YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
  lit_241 = YPPsym((P)"sexpr-syntax-if-else");
  T104 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_135 = YPmet(FUNCODEREF(fun_135),CHKREF(lit_241),T104,ENVNUL);
  T108 = BOUNDP(YsyntaxYsexpr_syntax_if_else);
  if (T108 != YPfalse) {
    T107 = CHKREF(YsyntaxYsexpr_syntax_if_else);
  } else {
    T107 = YPfalse;
  }
  T106 = fun_135;
  T105 = CALL2(CHKREF(YPdefine_method),T107,T106);
  YsyntaxYsexpr_syntax_if_else = T105;
  regsym(&YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
  lit_242 = YPPsym((P)"sexpr-pattern-variable?");
  T109 = YPsig(YPPlist(1,CHKREF(lit_203)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_136 = YPmet(FUNCODEREF(fun_136),CHKREF(lit_242),T109,ENVNUL);
  T113 = BOUNDP(YsyntaxYsexpr_pattern_variableQ);
  if (T113 != YPfalse) {
    T112 = CHKREF(YsyntaxYsexpr_pattern_variableQ);
  } else {
    T112 = YPfalse;
  }
  T111 = fun_136;
  T110 = CALL2(CHKREF(YPdefine_method),T112,T111);
  YsyntaxYsexpr_pattern_variableQ = T110;
  regsym(&YsyntaxYsexpr_pattern_variableQ,"syntax","sexpr-pattern-variable?");
  lit_243 = YPPsym((P)"sexpr-pattern-variable-name");
  T114 = YPsig(YPPlist(1,CHKREF(lit_203)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_137 = YPmet(FUNCODEREF(fun_137),CHKREF(lit_243),T114,ENVNUL);
  T118 = BOUNDP(YsyntaxYsexpr_pattern_variable_name);
  if (T118 != YPfalse) {
    T117 = CHKREF(YsyntaxYsexpr_pattern_variable_name);
  } else {
    T117 = YPfalse;
  }
  T116 = fun_137;
  T115 = CALL2(CHKREF(YPdefine_method),T117,T116);
  YsyntaxYsexpr_pattern_variable_name = T115;
  regsym(&YsyntaxYsexpr_pattern_variable_name,"syntax","sexpr-pattern-variable-name");
  lit_244 = YPPsym((P)"sexpr-bind-pattern-variables");
  T120 = YPsig(YPPlist(1,CHKREF(lit_203)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_col_138 = YPmet(FUNCODEREF(fun_col_138),CHKREF(lit_157),T120,ENVNUL);
  T119 = YPsig(YPPlist(1,CHKREF(lit_203)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_139 = YPmet(FUNCODEREF(fun_139),CHKREF(lit_244),T119,ENVNUL);
  T124 = BOUNDP(YsyntaxYsexpr_bind_pattern_variables);
  if (T124 != YPfalse) {
    T123 = CHKREF(YsyntaxYsexpr_bind_pattern_variables);
  } else {
    T123 = YPfalse;
  }
  T122 = fun_139;
  T121 = CALL2(CHKREF(YPdefine_method),T123,T122);
  YsyntaxYsexpr_bind_pattern_variables = T121;
  regsym(&YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
  lit_245 = YPPsym((P)"sexpr-make-macro-function");
  T125 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_140 = YPmet(FUNCODEREF(fun_140),CHKREF(lit_245),T125,ENVNUL);
  T129 = BOUNDP(YsyntaxYsexpr_make_macro_function);
  if (T129 != YPfalse) {
    T128 = CHKREF(YsyntaxYsexpr_make_macro_function);
  } else {
    T128 = YPfalse;
  }
  T127 = fun_140;
  T126 = CALL2(CHKREF(YPdefine_method),T128,T127);
  YsyntaxYsexpr_make_macro_function = T126;
  regsym(&YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
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
  {"%fb", &module_info_boot, "%fb"},
  {"dss", &module_info_boot, "dss"},
  {"logxor", &module_info_runtime, "logxor"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"unless", &module_info_macros, "unless"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"/", &module_info_runtime, "/"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"from-below", &module_info_runtime, "from-below"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"fabs", &module_info_runtime, "fabs"},
  {"%ft", &module_info_boot, "%ft"},
  {"round/", &module_info_runtime, "round/"},
  {"%im", &module_info_boot, "%im"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"=", &module_info_runtime, "="},
  {"slot-init", &module_info_boot, "slot-init"},
  {"rev", &module_info_runtime, "rev"},
  {"export", &module_info_boot, "export"},
  {"pair", &module_info_macros, "pair"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"%f/", &module_info_boot, "%f/"},
  {"zero?", &module_info_runtime, "zero?"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"<traits>", &module_info_boot, "<traits>"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"fapply", &module_info_boot, "fapply"},
  {"var-name", &module_info_macros, "var-name"},
  {"map2", &module_info_runtime, "map2"},
  {"do3", &module_info_runtime, "do3"},
  {"if", &module_info_boot, "if"},
  {"reduce", &module_info_runtime, "reduce"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"%i^", &module_info_boot, "%i^"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"assert", &module_info_macros, "assert"},
  {"port-index", &module_info_runtime, "port-index"},
  {"when", &module_info_macros, "when"},
  {"object<", &module_info_boot, "object<"},
  {"%i!", &module_info_boot, "%i!"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"t+", &module_info_runtime, "t+"},
  {"from", &module_info_runtime, "from"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"popf", &module_info_macros, "popf"},
  {"compose", &module_info_runtime, "compose"},
  {"let", &module_info_boot, "let"},
  {"%f=", &module_info_boot, "%f="},
  {"%cb", &module_info_boot, "%cb"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"1st", &module_info_runtime, "1st"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"<", &module_info_runtime, "<"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"%i*", &module_info_boot, "%i*"},
  {"as", &module_info_runtime, "as"},
  {"%snul", &module_info_boot, "%snul"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"assqn", &module_info_runtime, "assqn"},
  {"%slen", &module_info_boot, "%slen"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"logand", &module_info_runtime, "logand"},
  {"~=", &module_info_runtime, "~="},
  {"df", &module_info_boot, "df"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"str", &module_info_runtime, "str"},
  {"or", &module_info_macros, "or"},
  {"push", &module_info_runtime, "push"},
  {"sig", &module_info_runtime, "sig"},
  {"dv", &module_info_boot, "dv"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"<col>", &module_info_boot, "<col>"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"%lu", &module_info_boot, "%lu"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"max", &module_info_runtime, "max"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"cat", &module_info_macros, "cat"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"error", &module_info_boot, "error"},
  {"%do-runtime-bindings", &module_info_boot, "%do-runtime-bindings"},
  {"%cu", &module_info_boot, "%cu"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"<=", &module_info_runtime, "<="},
  {"%pair", &module_info_boot, "%pair"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"seq", &module_info_boot, "seq"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"tup", &module_info_macros, "tup"},
  {"from-above", &module_info_runtime, "from-above"},
  {"%sb", &module_info_boot, "%sb"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"pushf", &module_info_macros, "pushf"},
  {"quote", &module_info_boot, "quote"},
  {"format", &module_info_runtime, "format"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"pick", &module_info_runtime, "pick"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"%it/", &module_info_boot, "%it/"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {">", &module_info_runtime, ">"},
  {"loc", &module_info_boot, "loc"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"%i=", &module_info_boot, "%i="},
  {"floor", &module_info_runtime, "floor"},
  {"identity", &module_info_runtime, "identity"},
  {"dec", &module_info_macros, "dec"},
  {"%ib", &module_info_boot, "%ib"},
  {"nil", &module_info_boot, "nil"},
  {"%c<", &module_info_boot, "%c<"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"newline", &module_info_runtime, "newline"},
  {"address-of", &module_info_runtime, "address-of"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"type-error", &module_info_boot, "type-error"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"odd?", &module_info_runtime, "odd?"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"from-by", &module_info_runtime, "from-by"},
  {"cat2", &module_info_runtime, "cat2"},
  {"abs", &module_info_runtime, "abs"},
  {"assocq", &module_info_runtime, "assocq"},
  {"tail", &module_info_boot, "tail"},
  {"char->ascii", &module_info_runtime, "char->ascii"},
  {"%fu", &module_info_boot, "%fu"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"pop", &module_info_runtime, "pop"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"collected", &module_info_macros, "collected"},
  {"lognot", &module_info_runtime, "lognot"},
  {"%f<", &module_info_boot, "%f<"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"list", &module_info_runtime, "list"},
  {"round", &module_info_runtime, "round"},
  {"*", &module_info_runtime, "*"},
  {"fab", &module_info_runtime, "fab"},
  {"elt", &module_info_runtime, "elt"},
  {"modulo", &module_info_runtime, "modulo"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"now-key", &module_info_runtime, "now-key"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"next-method", &module_info_macros, "next-method"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"curry", &module_info_runtime, "curry"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"%f*", &module_info_boot, "%f*"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"dp", &module_info_boot, "dp"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"del", &module_info_runtime, "del"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"dm", &module_info_boot, "dm"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"%iu", &module_info_boot, "%iu"},
  {"last", &module_info_runtime, "last"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"nul", &module_info_boot, "nul"},
  {"<step>", &module_info_runtime, "<step>"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"write-string", &module_info_runtime, "write-string"},
  {"<port>", &module_info_runtime, "<port>"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"<log>", &module_info_boot, "<log>"},
  {"mif", &module_info_boot, "mif"},
  {"%isa", &module_info_boot, "%isa"},
  {"dc", &module_info_boot, "dc"},
  {"dg", &module_info_boot, "dg"},
  {"<range>", &module_info_runtime, "<range>"},
  {"len", &module_info_runtime, "len"},
  {"read-char", &module_info_runtime, "read-char"},
  {"do", &module_info_runtime, "do"},
  {"empty?", &module_info_macros, "empty?"},
  {"buf", &module_info_runtime, "buf"},
  {"inc", &module_info_macros, "inc"},
  {"isa?", &module_info_boot, "isa?"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"apply", &module_info_boot, "apply"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"<list>", &module_info_runtime, "<list>"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"assoc", &module_info_runtime, "assoc"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"-", &module_info_runtime, "-"},
  {"del-key", &module_info_runtime, "del-key"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"isa", &module_info_boot, "isa"},
  {"neg?", &module_info_runtime, "neg?"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"fun", &module_info_boot, "fun"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"read", &module_info_runtime, "read"},
  {"remainder", &module_info_runtime, "remainder"},
  {"==", &module_info_macros, "=="},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"to-str", &module_info_runtime, "to-str"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"write-char", &module_info_runtime, "write-char"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"assq", &module_info_runtime, "assq"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"%i<", &module_info_boot, "%i<"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"not", &module_info_boot, "not"},
  {"%i+", &module_info_boot, "%i+"},
  {"try", &module_info_boot, "try"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"map", &module_info_macros, "map"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"2nd", &module_info_runtime, "2nd"},
  {"min", &module_info_runtime, "min"},
  {"<any>", &module_info_boot, "<any>"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"fin", &module_info_boot, "fin"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"truncate", &module_info_runtime, "truncate"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"ds", &module_info_boot, "ds"},
  {"nul?", &module_info_runtime, "nul?"},
  {"floor/", &module_info_runtime, "floor/"},
  {"<error>", &module_info_runtime, "<error>"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"do2", &module_info_runtime, "do2"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"+", &module_info_runtime, "+"},
  {"select", &module_info_macros, "select"},
  {"<int>", &module_info_boot, "<int>"},
  {"%vec", &module_info_boot, "%vec"},
  {"pos", &module_info_runtime, "pos"},
  {"cat!", &module_info_runtime, "cat!"},
  {"keys", &module_info_runtime, "keys"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"var-type", &module_info_macros, "var-type"},
  {"pos?", &module_info_runtime, "pos?"},
  {"<num>", &module_info_boot, "<num>"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"%su", &module_info_boot, "%su"},
  {"dlet", &module_info_macros, "dlet"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"<str>", &module_info_boot, "<str>"},
  {"case", &module_info_macros, "case"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"%with-monitor", &module_info_runtime, "%with-monitor"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"%bb", &module_info_boot, "%bb"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"assoc-value", &module_info_runtime, "assoc-value"},
  {"gensym", &module_info_macros, "gensym"},
  {"ash", &module_info_runtime, "ash"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"object-direct-parents", &module_info_boot, "object-direct-parents"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"ascii-whitespaces", &module_info_runtime, "ascii-whitespaces"},
  {"vec", &module_info_runtime, "vec"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"false-or", &module_info_runtime, "false-or"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"always", &module_info_runtime, "always"},
  {"%raw", &module_info_boot, "%raw"},
  {"sub", &module_info_runtime, "sub"},
  {"%f-", &module_info_boot, "%f-"},
  {"%f+", &module_info_boot, "%f+"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"lsh", &module_info_runtime, "lsh"},
  {"use", &module_info_boot, "use"},
  {"%i&", &module_info_boot, "%i&"},
  {"mem?", &module_info_runtime, "mem?"},
  {"find-key", &module_info_runtime, "find-key"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"in", &module_info_runtime, "in"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"fill", &module_info_runtime, "fill"},
  {"ct", &module_info_boot, "ct"},
  {"alter", &module_info_runtime, "alter"},
  {"out", &module_info_runtime, "out"},
  {"%iv", &module_info_boot, "%iv"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"and", &module_info_macros, "and"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"add", &module_info_runtime, "add"},
  {"%selt", &module_info_boot, "%selt"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"for", &module_info_macros, "for"},
  {"lst", &module_info_boot, "lst"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"object-direct-slots", &module_info_boot, "object-direct-slots"},
  {"~==", &module_info_runtime, "~=="},
  {"empty", &module_info_runtime, "empty"},
  {"lab", &module_info_boot, "lab"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"<met>", &module_info_boot, "<met>"},
  {"all?", &module_info_runtime, "all?"},
  {"t<", &module_info_runtime, "t<"},
  {"logior", &module_info_runtime, "logior"},
  {"%slot", &module_info_boot, "%slot"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"%i?", &module_info_boot, "%i?"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"head", &module_info_boot, "head"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"default", &module_info_runtime, "default"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"slot", &module_info_boot, "slot"},
  {"any?", &module_info_runtime, "any?"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"even?", &module_info_runtime, "even?"},
  {">=", &module_info_runtime, ">="},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"%velt", &module_info_boot, "%velt"},
  {"<map>", &module_info_runtime, "<map>"},
  {"collect", &module_info_macros, "collect"},
  {"%str", &module_info_boot, "%str"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"add!", &module_info_runtime, "add!"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"first-then", &module_info_runtime, "first-then"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"neg", &module_info_runtime, "neg"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"rep", &module_info_boot, "rep"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"force-output", &module_info_runtime, "force-output"},
  {"app-args", &module_info_runtime, "app-args"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%i-", &module_info_boot, "%i-"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"collecting", &module_info_macros, "collecting"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"bound?", &module_info_boot, "bound?"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"%call-next-method", &module_info_boot, "%call-next-method"},
  {"rev!", &module_info_runtime, "rev!"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"set", &module_info_boot, "set"},
  {"t=", &module_info_runtime, "t="},
  {"%c=", &module_info_boot, "%c="},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"from-to", &module_info_runtime, "from-to"},
  {"3rd", &module_info_runtime, "3rd"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sexpr-begin-actions", &YsyntaxYsexpr_begin_actions},
  {"<name>", &YsyntaxYLnameG},
  {"sexpr-sequence->begin", &YsyntaxYsexpr_sequence_Gbegin},
  {"sexpr-application?", &YsyntaxYsexpr_applicationQ},
  {"sexpr-function-body", &YsyntaxYsexpr_function_body},
  {"sexpr-iterate?", &YsyntaxYsexpr_iterateQ},
  {"sexpr-make-begin", &YsyntaxYsexpr_make_begin},
  {"$sexpr-define-class-tag", &YsyntaxYDsexpr_define_class_tag},
  {"$sexpr-iterate-tag", &YsyntaxYDsexpr_iterate_tag},
  {"bracket", &YsyntaxYbracket},
  {"sexpr-function-definition-value", &YsyntaxYsexpr_function_definition_value},
  {"sexpr-variable-name", &YsyntaxYsexpr_variable_name},
  {"sexpr-method-signature", &YsyntaxYsexpr_method_signature},
  {"*bq-quote*", &YsyntaxYTbq_quoteT},
  {"$sexpr-define-tag", &YsyntaxYDsexpr_define_tag},
  {"sexpr-last-exp?", &YsyntaxYsexpr_last_expQ},
  {"sexpr-rest-operands", &YsyntaxYsexpr_rest_operands},
  {"$sexpr-isa-tag", &YsyntaxYDsexpr_isa_tag},
  {"sexpr-bind-pattern-variables", &YsyntaxYsexpr_bind_pattern_variables},
  {"$sexpr-define-syntax-tag", &YsyntaxYDsexpr_define_syntax_tag},
  {"sexpr-let?", &YsyntaxYsexpr_letQ},
  {"$sexpr-let-tag", &YsyntaxYDsexpr_let_tag},
  {"sexpr-define-class?", &YsyntaxYsexpr_define_classQ},
  {"$sexpr-quasiquote-tag", &YsyntaxYDsexpr_quasiquote_tag},
  {"sexpr-monitor-type", &YsyntaxYsexpr_monitor_type},
  {"sexpr-loc-raw-body", &YsyntaxYsexpr_loc_raw_body},
  {"sexpr-if-test", &YsyntaxYsexpr_if_test},
  {"sexpr-new-unique-name-counter!", &YsyntaxYsexpr_new_unique_name_counterX},
  {"sexpr-build-backquote-expander", &YsyntaxYsexpr_build_backquote_expander},
  {"sexpr-slot-variable", &YsyntaxYsexpr_slot_variable},
  {"sexpr-variable?", &YsyntaxYsexpr_variableQ},
  {"sexpr-no-operands?", &YsyntaxYsexpr_no_operandsQ},
  {"$sexpr-values-tag", &YsyntaxYDsexpr_values_tag},
  {"sexpr-isa-init-slots", &YsyntaxYsexpr_isa_init_slots},
  {"sexpr-monitor-body", &YsyntaxYsexpr_monitor_body},
  {"nreconc", &YsyntaxYnreconc},
  {"$sexpr-begin-tag", &YsyntaxYDsexpr_begin_tag},
  {"sexpr-syntax-if-value", &YsyntaxYsexpr_syntax_if_value},
  {"*bq-list*", &YsyntaxYTbq_listT},
  {"map-tree", &YsyntaxYmap_tree},
  {"sexpr-define-class-parents", &YsyntaxYsexpr_define_class_parents},
  {"sexpr-assignment?", &YsyntaxYsexpr_assignmentQ},
  {"sexpr-if-else", &YsyntaxYsexpr_if_else},
  {"sexpr-unique-name", &YsyntaxYsexpr_unique_name},
  {"sexpr-syntax-if-else", &YsyntaxYsexpr_syntax_if_else},
  {"sexpr-generic-definition?", &YsyntaxYsexpr_generic_definitionQ},
  {"sexpr-let-values", &YsyntaxYsexpr_let_values},
  {"sexpr-tagged-list?", &YsyntaxYsexpr_tagged_listQ},
  {"sexpr-monitor-test", &YsyntaxYsexpr_monitor_test},
  {"$sexpr-monitor-tag", &YsyntaxYDsexpr_monitor_tag},
  {"$sexpr-macro-expand-tag", &YsyntaxYDsexpr_macro_expand_tag},
  {"sexpr-method-parameters", &YsyntaxYsexpr_method_parameters},
  {"sexpr-syntax-definition-value", &YsyntaxYsexpr_syntax_definition_value},
  {"sexpr-syntax-definition-variable", &YsyntaxYsexpr_syntax_definition_variable},
  {"sexpr-make-method", &YsyntaxYsexpr_make_method},
  {"sexpr-syntax-if-then", &YsyntaxYsexpr_syntax_if_then},
  {"$sexpr-define-function-tag", &YsyntaxYDsexpr_define_function_tag},
  {"$sexpr-if-tag", &YsyntaxYDsexpr_if_tag},
  {"$sexpr-macro-tag", &YsyntaxYDsexpr_macro_tag},
  {"sexpr-if-then", &YsyntaxYsexpr_if_then},
  {"sexpr-macro?", &YsyntaxYsexpr_macroQ},
  {"$sexpr-method-tag", &YsyntaxYDsexpr_method_tag},
  {"sexpr-macro-expand?", &YsyntaxYsexpr_macro_expandQ},
  {"sexpr-iterate-body", &YsyntaxYsexpr_iterate_body},
  {"sexpr-block-body", &YsyntaxYsexpr_block_body},
  {"sexpr-make-anonymous-method", &YsyntaxYsexpr_make_anonymous_method},
  {"*bq-list**", &YsyntaxYTbq_listTT},
  {"sexpr-make-setter-name", &YsyntaxYsexpr_make_setter_name},
  {"sexpr-operator", &YsyntaxYsexpr_operator},
  {"sexpr-unwind-protect?", &YsyntaxYsexpr_unwind_protectQ},
  {"sexpr-function-parameters", &YsyntaxYsexpr_function_parameters},
  {"sexpr-method-definition?", &YsyntaxYsexpr_method_definitionQ},
  {"sexpr-slot?", &YsyntaxYsexpr_slotQ},
  {"bq-process", &YsyntaxYbq_process},
  {"$sexpr-locals-tag", &YsyntaxYDsexpr_locals_tag},
  {"$sexpr-set-tag", &YsyntaxYDsexpr_set_tag},
  {"$sexpr-slot-tag", &YsyntaxYDsexpr_slot_tag},
  {"sexpr-syntax-definition?", &YsyntaxYsexpr_syntax_definitionQ},
  {"---main-1---", NULL},
  {"sexpr-quoted?", &YsyntaxYsexpr_quotedQ},
  {"sexpr-isa-init-values", &YsyntaxYsexpr_isa_init_values},
  {"sexpr-loc-bound-bodies", &YsyntaxYsexpr_loc_bound_bodies},
  {"sexpr-function-definition?", &YsyntaxYsexpr_function_definitionQ},
  {"$sexpr-syntax-if-tag", &YsyntaxYDsexpr_syntax_if_tag},
  {"sexpr-make-getter", &YsyntaxYsexpr_make_getter},
  {"sexpr-definition-variable", &YsyntaxYsexpr_definition_variable},
  {"sexpr-unquote-splicing?", &YsyntaxYsexpr_unquote_splicingQ},
  {"sexpr-unwind-protect-protected-form", &YsyntaxYsexpr_unwind_protect_protected_form},
  {"sexpr-backquote?", &YsyntaxYsexpr_backquoteQ},
  {"sexpr-block?", &YsyntaxYsexpr_blockQ},
  {"$sexpr-quote-tag", &YsyntaxYDsexpr_quote_tag},
  {"sexpr-first-operand", &YsyntaxYsexpr_first_operand},
  {"sexpr-method?", &YsyntaxYsexpr_methodQ},
  {"sexpr-block-name", &YsyntaxYsexpr_block_name},
  {"sexpr-isa-parents", &YsyntaxYsexpr_isa_parents},
  {"sexpr-syntax-if?", &YsyntaxYsexpr_syntax_ifQ},
  {"bq-remove-tokens", &YsyntaxYbq_remove_tokens},
  {"sexpr-iterate-inits", &YsyntaxYsexpr_iterate_inits},
  {"sexpr-self-evaluating?", &YsyntaxYsexpr_self_evaluatingQ},
  {"sexpr-make-if", &YsyntaxYsexpr_make_if},
  {"sexpr-assignment-variable", &YsyntaxYsexpr_assignment_variable},
  {"sexpr-forward-primitive?", &YsyntaxYsexpr_forward_primitiveQ},
  {"sexpr-iterate-name", &YsyntaxYsexpr_iterate_name},
  {"eval", &YsyntaxYeval},
  {"find-option", &YsyntaxYfind_option},
  {"sexpr-let-names+values", &YsyntaxYsexpr_let_namesAvalues},
  {"sexpr-pattern-variable-name", &YsyntaxYsexpr_pattern_variable_name},
  {"sexpr-loc-body", &YsyntaxYsexpr_loc_body},
  {"sexpr-begin?", &YsyntaxYsexpr_beginQ},
  {"*bq-append*", &YsyntaxYTbq_appendT},
  {"sexpr-make-application", &YsyntaxYsexpr_make_application},
  {"sexpr-make-quote", &YsyntaxYsexpr_make_quote},
  {"sexpr-pattern-variable?", &YsyntaxYsexpr_pattern_variableQ},
  {"sexpr-iterate-signature", &YsyntaxYsexpr_iterate_signature},
  {"sexpr-make-macro-function", &YsyntaxYsexpr_make_macro_function},
  {"sexpr-make-syntax-if", &YsyntaxYsexpr_make_syntax_if},
  {"sexpr-definition?", &YsyntaxYsexpr_definitionQ},
  {"sexpr-isa-slot-inits", &YsyntaxYsexpr_isa_slot_inits},
  {"---main-2---", NULL},
  {"sexpr-let-bound-variables", &YsyntaxYsexpr_let_bound_variables},
  {"sexpr-method-value", &YsyntaxYsexpr_method_value},
  {"sexpr-operands", &YsyntaxYsexpr_operands},
  {"*bq-clobberable*", &YsyntaxYTbq_clobberableT},
  {"sexpr-let-body", &YsyntaxYsexpr_let_body},
  {"sexpr-make-setter", &YsyntaxYsexpr_make_setter},
  {"sexpr-definition-value", &YsyntaxYsexpr_definition_value},
  {"*comma-atsign*", &YsyntaxYTcomma_atsignT},
  {"sexpr-slot-init", &YsyntaxYsexpr_slot_init},
  {"*unique-name-counter*", &YsyntaxYTunique_name_counterT},
  {"sexpr-text-of-quotation", &YsyntaxYsexpr_text_of_quotation},
  {"sexpr-expand-backquote", &YsyntaxYsexpr_expand_backquote},
  {"sexpr-variable-type", &YsyntaxYsexpr_variable_type},
  {"$sexpr-unwind-protect-tag", &YsyntaxYDsexpr_unwind_protect_tag},
  {"$sexpr-define-method-tag", &YsyntaxYDsexpr_define_method_tag},
  {"sexpr-method-body", &YsyntaxYsexpr_method_body},
  {"sexpr-unwind-protect-cleanup-forms", &YsyntaxYsexpr_unwind_protect_cleanup_forms},
  {"sexpr-unquote?", &YsyntaxYsexpr_unquoteQ},
  {"sexpr-slot-object", &YsyntaxYsexpr_slot_object},
  {"sexpr-signature-value", &YsyntaxYsexpr_signature_value},
  {"*bq-nconc*", &YsyntaxYTbq_nconcT},
  {"sexpr-isa?", &YsyntaxYsexpr_isaQ},
  {"sexpr-monitor-info", &YsyntaxYsexpr_monitor_info},
  {"sexpr-rest-exps", &YsyntaxYsexpr_rest_exps},
  {"sexpr-loc?", &YsyntaxYsexpr_locQ},
  {"---main-0---", NULL},
  {"sexpr-function-signature", &YsyntaxYsexpr_function_signature},
  {"sexpr-function-definition-variable", &YsyntaxYsexpr_function_definition_variable},
  {"sexpr-monitor?", &YsyntaxYsexpr_monitorQ},
  {"sexpr-syntax-if-pattern", &YsyntaxYsexpr_syntax_if_pattern},
  {"sexpr-assignment-value", &YsyntaxYsexpr_assignment_value},
  {"sexpr-iterate->loc", &YsyntaxYsexpr_iterate_Gloc},
  {"sexpr-if?", &YsyntaxYsexpr_ifQ},
  {"sexpr-atom?", &YsyntaxYsexpr_atomQ},
  {"sexpr-signature-parameters", &YsyntaxYsexpr_signature_parameters},
  {"$sexpr-bind-exit-tag", &YsyntaxYDsexpr_bind_exit_tag},
  {"sexpr-first-exp", &YsyntaxYsexpr_first_exp},
  {"$sexpr-define-generic-tag", &YsyntaxYDsexpr_define_generic_tag},
  {"sexpr-monitor-expand", &YsyntaxYsexpr_monitor_expand},
  {"sexpr-let->combination", &YsyntaxYsexpr_let_Gcombination},
  {"sexpr-loc-bound-names", &YsyntaxYsexpr_loc_bound_names},
  {"sexpr-loc-bound-signatures", &YsyntaxYsexpr_loc_bound_signatures},
  {"sexpr-function-value", &YsyntaxYsexpr_function_value},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"sexpr-function-definition-variable", "sexpr-function-definition-variable"},
  {"sexpr-sequence->begin", "sexpr-sequence->begin"},
  {"sexpr-function-body", "sexpr-function-body"},
  {"sexpr-make-begin", "sexpr-make-begin"},
  {"$sexpr-iterate-tag", "$sexpr-iterate-tag"},
  {"sexpr-function-definition-value", "sexpr-function-definition-value"},
  {"sexpr-variable-name", "sexpr-variable-name"},
  {"sexpr-method-signature", "sexpr-method-signature"},
  {"$sexpr-define-tag", "$sexpr-define-tag"},
  {"$sexpr-isa-tag", "$sexpr-isa-tag"},
  {"sexpr-bind-pattern-variables", "sexpr-bind-pattern-variables"},
  {"$sexpr-define-syntax-tag", "$sexpr-define-syntax-tag"},
  {"eval", "eval"},
  {"sexpr-define-class?", "sexpr-define-class?"},
  {"$sexpr-quasiquote-tag", "$sexpr-quasiquote-tag"},
  {"sexpr-loc-raw-body", "sexpr-loc-raw-body"},
  {"sexpr-if-test", "sexpr-if-test"},
  {"sexpr-slot-variable", "sexpr-slot-variable"},
  {"sexpr-variable?", "sexpr-variable?"},
  {"$sexpr-set-tag", "$sexpr-set-tag"},
  {"sexpr-isa-init-slots", "sexpr-isa-init-slots"},
  {"$sexpr-begin-tag", "$sexpr-begin-tag"},
  {"sexpr-syntax-if-value", "sexpr-syntax-if-value"},
  {"sexpr-define-class-parents", "sexpr-define-class-parents"},
  {"sexpr-if-else", "sexpr-if-else"},
  {"sexpr-syntax-if-else", "sexpr-syntax-if-else"},
  {"$sexpr-monitor-tag", "$sexpr-monitor-tag"},
  {"$sexpr-macro-expand-tag", "$sexpr-macro-expand-tag"},
  {"sexpr-syntax-definition-value", "sexpr-syntax-definition-value"},
  {"sexpr-syntax-definition-variable", "sexpr-syntax-definition-variable"},
  {"sexpr-loc-bound-signatures", "sexpr-loc-bound-signatures"},
  {"sexpr-syntax-if-then", "sexpr-syntax-if-then"},
  {"$sexpr-define-function-tag", "$sexpr-define-function-tag"},
  {"$sexpr-if-tag", "$sexpr-if-tag"},
  {"sexpr-if-then", "sexpr-if-then"},
  {"$sexpr-method-tag", "$sexpr-method-tag"},
  {"sexpr-block-body", "sexpr-block-body"},
  {"sexpr-make-setter-name", "sexpr-make-setter-name"},
  {"sexpr-method-body", "sexpr-method-body"},
  {"sexpr-operator", "sexpr-operator"},
  {"$sexpr-locals-tag", "$sexpr-locals-tag"},
  {"sexpr-monitor-expand", "sexpr-monitor-expand"},
  {"$sexpr-slot-tag", "$sexpr-slot-tag"},
  {"sexpr-isa-init-values", "sexpr-isa-init-values"},
  {"sexpr-loc-bound-bodies", "sexpr-loc-bound-bodies"},
  {"$sexpr-syntax-if-tag", "$sexpr-syntax-if-tag"},
  {"sexpr-make-getter", "sexpr-make-getter"},
  {"$sexpr-let-tag", "$sexpr-let-tag"},
  {"sexpr-definition-variable", "sexpr-definition-variable"},
  {"sexpr-unquote-splicing?", "sexpr-unquote-splicing?"},
  {"sexpr-unwind-protect-protected-form", "sexpr-unwind-protect-protected-form"},
  {"$sexpr-quote-tag", "$sexpr-quote-tag"},
  {"sexpr-block-name", "sexpr-block-name"},
  {"sexpr-isa-parents", "sexpr-isa-parents"},
  {"sexpr-assignment-variable", "sexpr-assignment-variable"},
  {"sexpr-make-application", "sexpr-make-application"},
  {"sexpr-make-macro-function", "sexpr-make-macro-function"},
  {"$sexpr-define-class-tag", "$sexpr-define-class-tag"},
  {"sexpr-isa-slot-inits", "sexpr-isa-slot-inits"},
  {"sexpr-operands", "sexpr-operands"},
  {"sexpr-make-setter", "sexpr-make-setter"},
  {"sexpr-definition-value", "sexpr-definition-value"},
  {"sexpr-slot-init", "sexpr-slot-init"},
  {"sexpr-text-of-quotation", "sexpr-text-of-quotation"},
  {"sexpr-expand-backquote", "sexpr-expand-backquote"},
  {"sexpr-variable-type", "sexpr-variable-type"},
  {"$sexpr-unwind-protect-tag", "$sexpr-unwind-protect-tag"},
  {"$sexpr-define-method-tag", "$sexpr-define-method-tag"},
  {"sexpr-unwind-protect-cleanup-forms", "sexpr-unwind-protect-cleanup-forms"},
  {"sexpr-unquote?", "sexpr-unquote?"},
  {"sexpr-slot-object", "sexpr-slot-object"},
  {"sexpr-signature-value", "sexpr-signature-value"},
  {"sexpr-signature-parameters", "sexpr-signature-parameters"},
  {"sexpr-function-signature", "sexpr-function-signature"},
  {"sexpr-forward-primitive?", "sexpr-forward-primitive?"},
  {"sexpr-syntax-if-pattern", "sexpr-syntax-if-pattern"},
  {"sexpr-assignment-value", "sexpr-assignment-value"},
  {"sexpr-iterate->loc", "sexpr-iterate->loc"},
  {"sexpr-make-anonymous-method", "sexpr-make-anonymous-method"},
  {"$sexpr-bind-exit-tag", "$sexpr-bind-exit-tag"},
  {"$sexpr-define-generic-tag", "$sexpr-define-generic-tag"},
  {"sexpr-let->combination", "sexpr-let->combination"},
  {"sexpr-loc-bound-names", "sexpr-loc-bound-names"},
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
