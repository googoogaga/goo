/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: syntax */

EXT(YruntimeYreduceA,"runtime","reduce+");
DEF(YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
EXT(YmacrosYmap,"macros","map");
DEF(YsyntaxYsexpr_tagged_listQ,"syntax","sexpr-tagged-list?");
EXT(Ynul,"boot","nul");
DEF(YsyntaxYsexpr_slot_object,"syntax","sexpr-slot-object");
EXT(YruntimeYcurry,"runtime","curry");
DEF(YsyntaxYsexpr_unwind_protectQ,"syntax","sexpr-unwind-protect?");
DEF(YsyntaxYsexpr_no_operandsQ,"syntax","sexpr-no-operands?");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(Ysig_value,"boot","sig-value");
EXT(YruntimeYin,"runtime","in");
EXT(Yclass_name,"boot","class-name");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYalways,"runtime","always");
DEF(YsyntaxYbracket,"syntax","bracket");
DEF(YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
DEF(YsyntaxYsexpr_build_backquote_expander,"syntax","sexpr-build-backquote-expander");
EXT(Ymay_isaQ,"boot","may-isa?");
DEF(YsyntaxYsexpr_monitor_info,"syntax","sexpr-monitor-info");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
DEF(YsyntaxYsexpr_pattern_variableQ,"syntax","sexpr-pattern-variable?");
EXT(YLintG,"boot","<int>");
EXT(YLnumG,"boot","<num>");
DEF(YsyntaxYfind_option,"syntax","find-option");
EXT(YruntimeYmap2,"runtime","map2");
DEF(YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
DEF(YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(Yfun_value,"boot","fun-value");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
DEF(YsyntaxYsexpr_ifQ,"syntax","sexpr-if?");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
DEF(YsyntaxYTunique_name_counterT,"syntax","*unique-name-counter*");
DEF(YsyntaxYsexpr_new_unique_name_counterX,"syntax","sexpr-new-unique-name-counter!");
DEF(YsyntaxYTbq_appendT,"syntax","*bq-append*");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
DEF(YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
DEF(YsyntaxYsexpr_make_getter,"syntax","sexpr-make-getter");
EXT(YLchrG,"boot","<chr>");
EXT(YmacrosYmatch_atom,"macros","match-atom");
DEF(YsyntaxYsexpr_first_operand,"syntax","sexpr-first-operand");
DEF(YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
EXT(YruntimeYport_index,"runtime","port-index");
DEF(YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YruntimeYnow_key,"runtime","now-key");
DEF(YsyntaxYsexpr_definitionQ,"syntax","sexpr-definition?");
DEF(YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
EXT(YruntimeYreduce,"runtime","reduce");
DEF(YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(Ysig_names,"boot","sig-names");
DEF(YsyntaxYsexpr_make_method,"syntax","sexpr-make-method");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YruntimeYroundS,"runtime","round/");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
DEF(YsyntaxYsexpr_slot_variable,"syntax","sexpr-slot-variable");
EXT(YDmin_int,"boot","$min-int");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YruntimeYnow_elt,"runtime","now-elt");
DEF(YsyntaxYeval,"syntax","eval");
DEF(YsyntaxYDsexpr_define_class_tag,"syntax","$sexpr-define-class-tag");
DEF(YsyntaxYsexpr_monitorQ,"syntax","sexpr-monitor?");
EXT(YLlogG,"boot","<log>");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
DEF(YsyntaxYsexpr_begin_actions,"syntax","sexpr-begin-actions");
EXT(YruntimeYlsh,"runtime","lsh");
DEF(YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
EXT(YruntimeYash,"runtime","ash");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YLslotG,"boot","<slot>");
DEF(YsyntaxYsexpr_function_parameters,"syntax","sexpr-function-parameters");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
DEF(YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(Ynot,"boot","not");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
DEF(YsyntaxYsexpr_make_quote,"syntax","sexpr-make-quote");
DEF(YsyntaxYsexpr_rest_operands,"syntax","sexpr-rest-operands");
EXT(YruntimeY_,"runtime","-");
EXT(Yfun_name,"boot","fun-name");
EXT(YruntimeYabs,"runtime","abs");
EXT(Yclass_parents,"boot","class-parents");
DEF(YsyntaxYbq_process,"syntax","bq-process");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYmax,"runtime","max");
EXT(YLanyG,"boot","<any>");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
DEF(YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
DEF(YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
EXT(YruntimeYT,"runtime","*");
DEF(YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
DEF(YsyntaxYsexpr_methodQ,"syntax","sexpr-method?");
DEF(YsyntaxYsexpr_slot_init,"syntax","sexpr-slot-init");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Ytype_class,"boot","type-class");
DEF(YsyntaxYsexpr_first_exp,"syntax","sexpr-first-exp");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
DEF(YsyntaxYsexpr_make_if,"syntax","sexpr-make-if");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
DEF(YsyntaxYsexpr_make_setter,"syntax","sexpr-make-setter");
EXT(YLunionG,"boot","<union>");
EXT(Ylst,"boot","lst");
DEF(YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
EXT(Yslot_value,"boot","slot-value");
EXT(YDmax_int,"boot","$max-int");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YmacrosYcat,"macros","cat");
DEF(YsyntaxYsexpr_make_setter_name,"syntax","sexpr-make-setter-name");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YmacrosYvar_name,"macros","var-name");
DEF(YsyntaxYsexpr_isa_parent,"syntax","sexpr-isa-parent");
DEF(YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YruntimeYpick,"runtime","pick");
DEF(YsyntaxYsexpr_rest_exps,"syntax","sexpr-rest-exps");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YruntimeYlast,"runtime","last");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YruntimeYlow_elt,"runtime","low-elt");
DEF(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Yfab_sym,"boot","fab-sym");
DEF(YsyntaxYsexpr_operator,"syntax","sexpr-operator");
EXT(Ysig_arity,"boot","sig-arity");
DEF(YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YruntimeYformat,"runtime","format");
EXT(YruntimeYall2Q,"runtime","all2?");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
DEF(YsyntaxYsexpr_method_parameters,"syntax","sexpr-method-parameters");
DEF(YsyntaxYsexpr_last_expQ,"syntax","sexpr-last-exp?");
EXT(YruntimeYlow_elt_setter,"runtime","low-elt-setter");
DEF(YsyntaxYnreconc,"syntax","nreconc");
DEF(YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
DEF(YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
EXT(Yunexec,"boot","unexec");
EXT(YruntimeYmemQ,"runtime","mem?");
DEF(YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YruntimeYcondition_message,"runtime","condition-message");
DEF(YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
EXT(YPsnul,"boot","%snul");
EXT(Yerror,"boot","error");
EXT(YruntimeYlogior,"runtime","logior");
DEF(YsyntaxYsexpr_isa_slot_inits,"syntax","sexpr-isa-slot-inits");
EXT(YruntimeYrev,"runtime","rev");
DEF(YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
DEF(YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
EXT(YruntimeYLstepG,"runtime","<step>");
DEF(YsyntaxYsexpr_pattern_variable_name,"syntax","sexpr-pattern-variable-name");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YruntimeYLmapG,"runtime","<map>");
DEF(YsyntaxYsexpr_method_value,"syntax","sexpr-method-value");
DEF(YsyntaxYsexpr_loc_body,"syntax","sexpr-loc-body");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
DEF(YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YruntimeYG,"runtime",">");
DEF(YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
DEF(YsyntaxYsexpr_monitor_type,"syntax","sexpr-monitor-type");
DEF(YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
EXT(YruntimeYNE,"runtime","~=");
DEF(YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
EXT(YruntimeYLrestartG,"runtime","<restart>");
DEF(YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
DEF(YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
EXT(YPvnul,"boot","%vnul");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YruntimeYsig,"runtime","sig");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYcopy_state,"runtime","copy-state");
DEF(YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
EXT(Yfun_naryQ,"boot","fun-nary?");
DEF(YsyntaxYsexpr_define_classQ,"syntax","sexpr-define-class?");
DEF(YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
DEF(YsyntaxYsexpr_operands,"syntax","sexpr-operands");
EXT(YruntimeYlogxor,"runtime","logxor");
DEF(YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
DEF(YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
DEF(YsyntaxYsexpr_iterateQ,"syntax","sexpr-iterate?");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
DEF(YsyntaxYsexpr_isa_init_slots,"syntax","sexpr-isa-init-slots");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
DEF(YsyntaxYbq_remove_tokens,"syntax","bq-remove-tokens");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YruntimeYL,"runtime","<");
EXT(YruntimeYpop,"runtime","pop");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YPdefine_method,"boot","%define-method");
DEF(YsyntaxYsexpr_applicationQ,"syntax","sexpr-application?");
DEF(YsyntaxYsexpr_syntax_ifQ,"syntax","sexpr-syntax-if?");
DEF(YsyntaxYsexpr_monitor_expand,"syntax","sexpr-monitor-expand");
EXT(YruntimeYdefault,"runtime","default");
DEF(YsyntaxYsexpr_syntax_definitionQ,"syntax","sexpr-syntax-definition?");
EXT(YLoptsG,"boot","<opts>");
DEF(YsyntaxYsexpr_function_value,"syntax","sexpr-function-value");
EXT(YruntimeYkeys,"runtime","keys");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYLconditionG,"runtime","<condition>");
DEF(YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
EXT(YruntimeYcatX,"runtime","cat!");
DEF(YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
DEF(YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
EXT(YruntimeYlen,"runtime","len");
EXT(YmacrosYnapply,"macros","napply");
EXT(YruntimeYE,"runtime","=");
EXT(YmacrosYtup,"macros","tup");
DEF(YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
DEF(YsyntaxYTbq_quoteT,"syntax","*bq-quote*");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
DEF(YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
EXT(YruntimeYaddX,"runtime","add!");
DEF(YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
EXT(YruntimeYid_hash,"runtime","id-hash");
DEF(YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YruntimeYeof_object,"runtime","eof-object");
DEF(YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYlognot,"runtime","lognot");
DEF(YsyntaxYmap_tree,"syntax","map-tree");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
DEF(YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYany2Q,"runtime","any2?");
DEF(YsyntaxYsexpr_self_evaluatingQ,"syntax","sexpr-self-evaluating?");
EXT(Ytype_object,"boot","type-object");
DEF(YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
EXT(YLclassG,"boot","<class>");
EXT(YruntimeYas,"runtime","as");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
DEF(YsyntaxYsexpr_unique_name,"syntax","sexpr-unique-name");
DEF(YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
EXT(YruntimeYto_digit,"runtime","to-digit");
DEF(YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
EXT(YruntimeYanyQ,"runtime","any?");
DEF(YsyntaxYsexpr_macroQ,"syntax","sexpr-macro?");
EXT(YruntimeYassq,"runtime","assq");
DEF(YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
DEF(YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
EXT(YLtypeG,"boot","<type>");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YruntimeYpush,"runtime","push");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YruntimeYfill,"runtime","fill");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYout,"runtime","out");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
DEF(YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(YruntimeYfrom,"runtime","from");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLgenG,"boot","<gen>");
DEF(YsyntaxYsexpr_assignmentQ,"syntax","sexpr-assignment?");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(Yslot_init,"boot","slot-init");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YPsymbols,"boot","%symbols");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
DEF(YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
DEF(YsyntaxYsexpr_letQ,"syntax","sexpr-let?");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(Yobject_slots,"boot","object-slots");
DEF(YsyntaxYsexpr_function_definitionQ,"syntax","sexpr-function-definition?");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YruntimeYalter,"runtime","alter");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YLsymG,"boot","<sym>");
EXT(Ysym_name,"boot","sym-name");
EXT(YruntimeYGE,"runtime",">=");
EXT(YmacrosYelt,"macros","elt");
EXT(Yfind_setter,"boot","find-setter");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
DEF(YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YruntimeYnewline,"runtime","newline");
DEF(YsyntaxYsexpr_iterate_signature,"syntax","sexpr-iterate-signature");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
DEF(YsyntaxYsexpr_make_syntax_if,"syntax","sexpr-make-syntax-if");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YruntimeYvec,"runtime","vec");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYstr,"runtime","str");
DEF(YsyntaxYsexpr_macro_expandQ,"syntax","sexpr-macro-expand?");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeY1st,"runtime","1st");
DEF(YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
DEF(YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYpos,"runtime","pos");
DEF(YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
EXT(YruntimeYdo3,"runtime","do3");
DEF(YsyntaxYsexpr_backquoteQ,"syntax","sexpr-backquote?");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YruntimeYdo,"runtime","do");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
DEF(YsyntaxYsexpr_define_class_parents,"syntax","sexpr-define-class-parents");
EXT(YruntimeYapp_filename,"runtime","app-filename");
DEF(YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
EXT(YruntimeYround,"runtime","round");
EXT(YLvecG,"boot","<vec>");
DEF(YsyntaxYsexpr_iterate_name,"syntax","sexpr-iterate-name");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
DEF(YsyntaxYsexpr_iterate_inits,"syntax","sexpr-iterate-inits");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(Yfun_names,"boot","fun-names");
EXT(YLmetG,"boot","<met>");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(Yhead_setter,"boot","head-setter");
DEF(YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
DEF(YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
EXT(YruntimeYfab,"runtime","fab");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
DEF(YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
DEF(YsyntaxYsexpr_slotQ,"syntax","sexpr-slot?");
EXT(Yfind_getter,"boot","find-getter");
EXT(Yfile_opening_error,"boot","file-opening-error");
DEF(YsyntaxYTbq_listT,"syntax","*bq-list*");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YLflatG,"boot","<flat>");
EXT(YruntimeYlist,"runtime","list");
EXT(Yhead,"boot","head");
EXT(YruntimeYmake_handler,"runtime","make-handler");
DEF(YsyntaxYDsexpr_slot_tag,"syntax","$sexpr-slot-tag");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
DEF(YsyntaxYTcomma_atsignT,"syntax","*comma-atsign*");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
DEF(YsyntaxYsexpr_blockQ,"syntax","sexpr-block?");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YruntimeYbuf,"runtime","buf");
EXT(Yobject_class,"boot","object-class");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
DEF(YsyntaxYsexpr_iterate_body,"syntax","sexpr-iterate-body");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
DEF(YsyntaxYsexpr_let_values,"syntax","sexpr-let-values");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
DEF(YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YLfunG,"boot","<fun>");
DEF(YsyntaxYTbq_nconcT,"syntax","*bq-nconc*");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YruntimeYempty,"runtime","empty");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YLlstG,"boot","<lst>");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YruntimeYtL,"runtime","t<");
DEF(YsyntaxYDsexpr_macro_tag,"syntax","$sexpr-macro-tag");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(Ysig_specs,"boot","sig-specs");
DEF(YsyntaxYDsexpr_values_tag,"syntax","$sexpr-values-tag");
EXT(YLtupG,"boot","<tup>");
EXT(Ytype_error,"boot","type-error");
EXT(YruntimeYdo2,"runtime","do2");
DEF(YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
DEF(YsyntaxYsexpr_method_definitionQ,"syntax","sexpr-method-definition?");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYlocative_value,"runtime","locative-value");
DEF(YsyntaxYsexpr_monitor_test,"syntax","sexpr-monitor-test");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YLseqG,"boot","<seq>");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
DEF(YsyntaxYTbq_listTT,"syntax","*bq-list**");
EXT(YruntimeYA,"runtime","+");
DEF(YsyntaxYsexpr_beginQ,"syntax","sexpr-begin?");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
DEF(YsyntaxYsexpr_let_bound_variables,"syntax","sexpr-let-bound-variables");
EXT(Ytail,"boot","tail");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YmacrosYEE,"macros","==");
EXT(YruntimeYwrite_char,"runtime","write-char");
DEF(YsyntaxYsexpr_monitor_body,"syntax","sexpr-monitor-body");
EXT(YruntimeYmin,"runtime","min");
EXT(YruntimeYS,"runtime","/");
DEF(YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
EXT(YruntimeYtE,"runtime","t=");
EXT(YruntimeYfab_map,"runtime","fab-map");
EXT(YruntimeYfrom_by,"runtime","from-by");
DEF(YsyntaxYsexpr_let_body,"syntax","sexpr-let-body");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(Yclass_slots,"boot","class-slots");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(YruntimeYfabs,"runtime","fabs");
DEF(YsyntaxYsexpr_locQ,"syntax","sexpr-loc?");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YLcolG,"boot","<col>");
DEF(YsyntaxYLnameG,"syntax","<name>");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(Yfab_class,"boot","fab-class");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YruntimeYdel,"runtime","del");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
DEF(YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
DEF(YsyntaxYsexpr_quotedQ,"syntax","sexpr-quoted?");
DEF(YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
EXT(YLsigG,"boot","<sig>");
DEF(YsyntaxYsexpr_generic_definitionQ,"syntax","sexpr-generic-definition?");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(Ynil,"boot","nil");
EXT(YLlocG,"boot","<loc>");
DEF(YsyntaxYsexpr_isaQ,"syntax","sexpr-isa?");
EXT(YPPmacro,"boot","%%macro");
EXT(YruntimeYtA,"runtime","t+");
EXT(YruntimeYsub,"runtime","sub");
EXT(YruntimeYelt_or,"runtime","elt-or");
DEF(YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(Ytype_elts,"boot","type-elts");
DEF(YsyntaxYsexpr_let_namesAvalues,"syntax","sexpr-let-names+values");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYneg,"runtime","neg");
DEF(YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
DEF(YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YPisa,"boot","%isa");
DEF(YsyntaxYTbq_clobberableT,"syntax","*bq-clobberable*");
EXT(YLfloG,"boot","<flo>");
DEF(YsyntaxYsexpr_atomQ,"syntax","sexpr-atom?");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYfind_key,"runtime","find-key");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_34);
DEFLIT(lit_220);
DEFLIT(lit_120);
DEFLIT(lit_150);
DEFLIT(lit_72);
DEFLIT(lit_49);
DEFLIT(lit_28);
DEFLIT(lit_197);
DEFLIT(lit_24);
DEFLIT(lit_204);
DEFLIT(lit_5);
DEFLIT(lit_207);
DEFLIT(lit_108);
DEFLIT(lit_240);
DEFLIT(lit_196);
DEFLIT(lit_234);
DEFLIT(lit_57);
DEFLIT(lit_85);
DEFLIT(lit_69);
DEFLIT(lit_111);
DEFLIT(lit_9);
DEFLIT(lit_155);
DEFLIT(lit_11);
DEFLIT(lit_37);
DEFLIT(lit_129);
DEFLIT(lit_188);
DEFLIT(lit_200);
DEFLIT(lit_101);
DEFLIT(lit_67);
DEFLIT(lit_39);
DEFLIT(lit_3);
DEFLIT(lit_128);
DEFLIT(lit_212);
DEFLIT(lit_162);
DEFLIT(lit_187);
DEFLIT(lit_80);
DEFLIT(lit_191);
DEFLIT(lit_61);
DEFLIT(lit_219);
DEFLIT(lit_127);
DEFLIT(lit_213);
DEFLIT(lit_102);
DEFLIT(lit_8);
DEFLIT(lit_63);
DEFLIT(lit_169);
DEFLIT(lit_131);
DEFLIT(lit_36);
DEFLIT(lit_73);
DEFLIT(lit_185);
DEFLIT(lit_79);
DEFLIT(lit_15);
DEFLIT(lit_168);
DEFLIT(lit_145);
DEFLIT(lit_140);
DEFLIT(lit_122);
DEFLIT(lit_109);
DEFLIT(lit_23);
DEFLIT(lit_245);
DEFLIT(lit_62);
DEFLIT(lit_217);
DEFLIT(lit_114);
DEFLIT(lit_77);
DEFLIT(lit_92);
DEFLIT(lit_1);
DEFLIT(lit_139);
DEFLIT(lit_147);
DEFLIT(lit_59);
DEFLIT(lit_10);
DEFLIT(lit_104);
DEFLIT(lit_241);
DEFLIT(lit_209);
DEFLIT(lit_237);
DEFLIT(lit_158);
DEFLIT(lit_198);
DEFLIT(lit_45);
DEFLIT(lit_65);
DEFLIT(lit_105);
DEFLIT(lit_159);
DEFLIT(lit_244);
DEFLIT(lit_176);
DEFLIT(lit_91);
DEFLIT(lit_60);
DEFLIT(lit_183);
DEFLIT(lit_110);
DEFLIT(lit_12);
DEFLIT(lit_180);
DEFLIT(lit_231);
DEFLIT(lit_136);
DEFLIT(lit_195);
DEFLIT(lit_130);
DEFLIT(lit_166);
DEFLIT(lit_83);
DEFLIT(lit_32);
DEFLIT(lit_149);
DEFLIT(lit_29);
DEFLIT(lit_236);
DEFLIT(lit_238);
DEFLIT(lit_246);
DEFLIT(lit_17);
DEFLIT(lit_88);
DEFLIT(lit_50);
DEFLIT(lit_165);
DEFLIT(lit_14);
DEFLIT(lit_107);
DEFLIT(lit_95);
DEFLIT(lit_224);
DEFLIT(lit_242);
DEFLIT(lit_226);
DEFLIT(lit_211);
DEFLIT(lit_222);
DEFLIT(lit_206);
DEFLIT(lit_33);
DEFLIT(lit_124);
DEFLIT(lit_64);
DEFLIT(lit_40);
DEFLIT(lit_216);
DEFLIT(lit_90);
DEFLIT(lit_152);
DEFLIT(lit_100);
DEFLIT(lit_210);
DEFLIT(lit_233);
DEFLIT(lit_6);
DEFLIT(lit_35);
DEFLIT(lit_227);
DEFLIT(lit_58);
DEFLIT(lit_0);
DEFLIT(lit_56);
DEFLIT(lit_142);
DEFLIT(lit_76);
DEFLIT(lit_27);
DEFLIT(lit_133);
DEFLIT(lit_199);
DEFLIT(lit_118);
DEFLIT(lit_19);
DEFLIT(lit_16);
DEFLIT(lit_192);
DEFLIT(lit_22);
DEFLIT(lit_98);
DEFLIT(lit_106);
DEFLIT(lit_201);
DEFLIT(lit_190);
DEFLIT(lit_205);
DEFLIT(lit_228);
DEFLIT(lit_112);
DEFLIT(lit_134);
DEFLIT(lit_223);
DEFLIT(lit_203);
DEFLIT(lit_94);
DEFLIT(lit_43);
DEFLIT(lit_126);
DEFLIT(lit_218);
DEFLIT(lit_31);
DEFLIT(lit_189);
DEFLIT(lit_194);
DEFLIT(lit_46);
DEFLIT(lit_144);
DEFLIT(lit_96);
DEFLIT(lit_25);
DEFLIT(lit_54);
DEFLIT(lit_66);
DEFLIT(lit_117);
DEFLIT(lit_184);
DEFLIT(lit_160);
DEFLIT(lit_41);
DEFLIT(lit_243);
DEFLIT(lit_75);
DEFLIT(lit_156);
DEFLIT(lit_103);
DEFLIT(lit_170);
DEFLIT(lit_81);
DEFLIT(lit_93);
DEFLIT(lit_186);
DEFLIT(lit_214);
DEFLIT(lit_18);
DEFLIT(lit_208);
DEFLIT(lit_181);
DEFLIT(lit_179);
DEFLIT(lit_225);
DEFLIT(lit_74);
DEFLIT(lit_146);
DEFLIT(lit_70);
DEFLIT(lit_68);
DEFLIT(lit_161);
DEFLIT(lit_178);
DEFLIT(lit_53);
DEFLIT(lit_230);
DEFLIT(lit_154);
DEFLIT(lit_116);
DEFLIT(lit_193);
DEFLIT(lit_164);
DEFLIT(lit_148);
DEFLIT(lit_239);
DEFLIT(lit_215);
DEFLIT(lit_177);
DEFLIT(lit_119);
DEFLIT(lit_20);
DEFLIT(lit_82);
DEFLIT(lit_84);
DEFLIT(lit_163);
DEFLIT(lit_232);
DEFLIT(lit_87);
DEFLIT(lit_157);
DEFLIT(lit_86);
DEFLIT(lit_52);
DEFLIT(lit_2);
DEFLIT(lit_78);
DEFLIT(lit_175);
DEFLIT(lit_123);
DEFLIT(lit_7);
DEFLIT(lit_4);
DEFLIT(lit_167);
DEFLIT(lit_47);
DEFLIT(lit_153);
DEFLIT(lit_113);
DEFLIT(lit_174);
DEFLIT(lit_99);
DEFLIT(lit_115);
DEFLIT(lit_55);
DEFLIT(lit_182);
DEFLIT(lit_13);
DEFLIT(lit_44);
DEFLIT(lit_173);
DEFLIT(lit_121);
DEFLIT(lit_135);
DEFLIT(lit_141);
DEFLIT(lit_125);
DEFLIT(lit_138);
DEFLIT(lit_26);
DEFLIT(lit_172);
DEFLIT(lit_132);
DEFLIT(lit_21);
DEFLIT(lit_71);
DEFLIT(lit_51);
DEFLIT(lit_38);
DEFLIT(lit_143);
DEFLIT(lit_202);
DEFLIT(lit_151);
DEFLIT(lit_137);
DEFLIT(lit_42);
DEFLIT(lit_229);
DEFLIT(lit_97);
DEFLIT(lit_171);
DEFLIT(lit_89);
DEFLIT(lit_235);
DEFLIT(lit_48);
DEFLIT(lit_221);
DEFLIT(lit_30);

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
LOCFOR(fun_x_1263_50);
LOCFOR(fun_51);
LOCFOR(fun_sexpr_monitor_expand_52);
FUNFOR(YsyntaxYfind_option);
LOCFOR(fun_x_1265_54);
LOCFOR(fun_55);
LOCFOR(fun_sexpr_monitor_type_56);
LOCFOR(fun_x_1267_57);
LOCFOR(fun_58);
LOCFOR(fun_x_1269_59);
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
  P tmpF1167;
  P tmpF1166;
  P tmpF1165;
  P tmpF1164;
  P tmpF1163;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLnumG));
  tmpF1163 = T1;
  if (tmpF1163 != YPfalse) {
    T2 = tmpF1163;
  } else {
    T4 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLchrG));
    tmpF1164 = T4;
    if (tmpF1164 != YPfalse) {
      T5 = tmpF1164;
    } else {
      T7 = CALL2(1,VARREF(YmacrosYEE),exp_,YPtrue);
      tmpF1165 = T7;
      if (tmpF1165 != YPfalse) {
        T8 = tmpF1165;
      } else {
        T10 = CALL2(1,VARREF(YmacrosYEE),exp_,YPfalse);
        tmpF1166 = T10;
        if (tmpF1166 != YPfalse) {
          T11 = tmpF1166;
        } else {
          T13 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLstrG));
          tmpF1167 = T13;
          if (tmpF1167 != YPfalse) {
            T14 = tmpF1167;
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
  P tmpF1168;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(tag_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLlstG));
  tmpF1168 = T1;
  if (tmpF1168 != YPfalse) {
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
  T0 = CALL1(1,VARREF(YruntimeY2nd),quot_);
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
  T0 = CALL1(1,VARREF(YruntimeY2nd),assn_);
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
  T0 = CALL1(1,VARREF(YruntimeY3rd),assn_);
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
  T0 = CALL1(1,VARREF(YruntimeY1st),exp_);
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
  T0 = CALL1(1,VARREF(YruntimeY2nd),exp_);
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
  T0 = CALL1(1,VARREF(YruntimeY2nd),defn_);
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
  T0 = CALL1(1,VARREF(YruntimeY3rd),defn_);
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
  T0 = CALL1(1,VARREF(YruntimeY1st),T1);
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
  T2 = CALL1(1,VARREF(YruntimeY2nd),defn_);
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
  T0 = CALL1(1,VARREF(YruntimeY2nd),defn_);
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
  T1 = CALL1(1,VARREF(YruntimeYlen),defn_);
  T0 = CALL2(1,VARREF(YruntimeYE),T1,YPint((P)2));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_signature_parameters_24) {
  P signature_;
  P values_spec_indexF1169;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(signature_, 0);
loop:
  T1 = CALL2(1,VARREF(YruntimeYpos),signature_,LITREF(lit_39));
  values_spec_indexF1169 = T1;
  T3 = CALL2(1,VARREF(YmacrosYEE),values_spec_indexF1169,VARREF(Ynul));
  if (T3 != YPfalse) {
    T2 = signature_;
  } else {
    T4 = CALL3(1,VARREF(YruntimeYsub),signature_,YPint((P)0),values_spec_indexF1169);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_signature_value_25) {
  P signature_;
  P valueF1171;
  P values_spec_indexF1170;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(signature_, 0);
loop:
  T1 = CALL2(1,VARREF(YruntimeYpos),signature_,LITREF(lit_39));
  values_spec_indexF1170 = T1;
  T3 = CALL2(1,VARREF(YmacrosYEE),values_spec_indexF1170,VARREF(Ynul));
  if (T3 != YPfalse) {
    T2 = YPfalse;
  } else {
    T6 = CALL2(1,VARREF(YruntimeYA),values_spec_indexF1170,YPint((P)1));
    T5 = CALL2(1,VARREF(YmacrosYelt),signature_,T6);
    valueF1171 = T5;
    T8 = CALL2(1,VARREF(YsyntaxYsexpr_tagged_listQ),valueF1171,LITREF(lit_41));
    if (T8 != YPfalse) {
      T7 = LITREF(lit_42);
    } else {
      T7 = valueF1171;
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
  T0 = CALL1(1,VARREF(YruntimeY3rd),defn_);
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
  T2 = CALL1(1,VARREF(YruntimeY3rd),defn_);
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
  T0 = CALL1(1,VARREF(YruntimeY2nd),method_exp_);
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
  T0 = CALL1(1,VARREF(YruntimeY2nd),exp_);
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
  T0 = CALL1(1,VARREF(YruntimeY3rd),exp_);
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
  T0 = CALL1(1,VARREF(YruntimeY2nd),exp_);
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
  T0 = CALL1(1,VARREF(YruntimeY2nd),exp_);
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

FUNCODEDEF(fun_x_1263_50) {
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
  P optionsF1181;
  P x_1262F1180;
  P x_1262F1179;
  P x_1262F1178;
  P x_1262F1177;
  P bodyF1176;
  P handlerF1175;
  P optionsF1174;
  P x_1262F1173;
  P x_1263F1172;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1263_50,2);
  x_1263F1172 = T1;
  FUNINIT(x_1263F1172, 2,return_,FREEREF(0));
  x_1262F1173 = FREEREF(0);
  optionsF1174 = YPfalse;
  optionsF1174 = BOXFAB(optionsF1174);
  handlerF1175 = YPfalse;
  handlerF1175 = BOXFAB(handlerF1175);
  bodyF1176 = YPfalse;
  bodyF1176 = BOXFAB(bodyF1176);
  T9 = CALL2(1,VARREF(YisaQ),x_1262F1173,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1262F1173,LITREF(lit_77),x_1263F1172);
    x_1262F1177 = T11;
    T13 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1262F1177,x_1263F1172);
    BOXVAL(optionsF1174) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1262F1177);
    x_1262F1178 = T14;
    T16 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1262F1178,x_1263F1172);
    BOXVAL(handlerF1175) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1262F1178);
    x_1262F1179 = T17;
    BOXVAL(bodyF1176) = x_1262F1179;
    x_1262F1180 = Ynil;
    T19 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1262F1180,x_1263F1172);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1263F1172,LITREF(lit_85),x_1262F1173);
  }
  T24 = BOXVAL(optionsF1174);
  T23 = CALL2(1,VARREF(YisaQ),T24,VARREF(YLsymG));
  if (T23 != YPfalse) {
    T28 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
    T30 = BOXVAL(optionsF1174);
    T29 = CALL1(1,VARREF(Ylst),T30);
    T27 = CALL3(1,VARREF(YmacrosYcat),T28,T29,Ynil);
    T26 = CALL1(1,VARREF(Ylst),T27);
    T25 = CALL2(1,VARREF(YmacrosYcat),T26,Ynil);
    T22 = T25;
  } else {
    T31 = BOXVAL(optionsF1174);
    T22 = T31;
  }
  optionsF1181 = T22;
  T33 = CALL1(1,VARREF(YsyntaxYsexpr_monitor_type),optionsF1181);
  T34 = CALL1(1,VARREF(YsyntaxYsexpr_monitor_info),optionsF1181);
  T35 = CALL1(1,VARREF(YsyntaxYsexpr_monitor_test),optionsF1181);
  T36 = BOXVAL(handlerF1175);
  T38 = BOXVAL(bodyF1176);
  T37 = CALL1(1,VARREF(YsyntaxYsexpr_monitor_body),T38);
  T32 = CALLN(1,VARREF(YmacrosYtup),5,T33,T34,T35,T36,T37);
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
    T5 = CALL1(1,VARREF(YruntimeY1st),options_);
    T4 = CALL1(1,VARREF(Yhead),T5);
    T3 = CALL2(1,VARREF(YmacrosYEE),option_,T4);
    if (T3 != YPfalse) {
      T7 = CALL1(1,VARREF(YruntimeY1st),options_);
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

FUNCODEDEF(fun_x_1265_54) {
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
  P x_1264F1185;
  P typeF1184;
  P x_1264F1183;
  P x_1265F1182;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1265_54,2);
  x_1265F1182 = T1;
  FUNINIT(x_1265F1182, 2,return_,FREEREF(0));
  x_1264F1183 = FREEREF(0);
  typeF1184 = YPfalse;
  typeF1184 = BOXFAB(typeF1184);
  T5 = CALL2(1,VARREF(YisaQ),x_1264F1183,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1264F1183,x_1265F1182);
    BOXVAL(typeF1184) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1264F1183);
    x_1264F1185 = T8;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1264F1185,x_1265F1182);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1265F1182,LITREF(lit_85),x_1264F1183);
  }
  T11 = BOXVAL(typeF1184);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_type_56) {
  P options_;
  P type_listF1186;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YsyntaxYfind_option),options_,LITREF(lit_86),LITREF(lit_92));
  type_listF1186 = T1;
  T3 = FUNFAB(fun_55,1,type_listF1186);
  T2 = with_exit(T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1267_57) {
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
  P x_1266F1190;
  P info_exprF1189;
  P x_1266F1188;
  P x_1267F1187;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1267_57,2);
  x_1267F1187 = T1;
  FUNINIT(x_1267F1187, 2,return_,FREEREF(0));
  x_1266F1188 = FREEREF(0);
  info_exprF1189 = YPfalse;
  info_exprF1189 = BOXFAB(info_exprF1189);
  T5 = CALL2(1,VARREF(YisaQ),x_1266F1188,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1266F1188,x_1267F1187);
    BOXVAL(info_exprF1189) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1266F1188);
    x_1266F1190 = T8;
    T9 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1266F1190,x_1267F1187);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1267F1187,LITREF(lit_85),x_1266F1188);
  }
  T11 = BOXVAL(info_exprF1189);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1269_59) {
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
  P x_1268F1196;
  P x_1268F1195;
  P argumentsF1194;
  P messageF1193;
  P x_1268F1192;
  P x_1269F1191;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1269_59,2);
  x_1269F1191 = T1;
  FUNINIT(x_1269F1191, 2,return_,FREEREF(0));
  x_1268F1192 = FREEREF(0);
  messageF1193 = YPfalse;
  messageF1193 = BOXFAB(messageF1193);
  argumentsF1194 = YPfalse;
  argumentsF1194 = BOXFAB(argumentsF1194);
  T7 = CALL2(1,VARREF(YisaQ),x_1268F1192,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1268F1192,x_1269F1191);
    BOXVAL(messageF1193) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1268F1192);
    x_1268F1195 = T10;
    BOXVAL(argumentsF1194) = x_1268F1195;
    x_1268F1196 = Ynil;
    T12 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1268F1196,x_1269F1191);
    T11 = T12;
    T8 = T11;
  } else {
    T13 = CALL2(1,x_1269F1191,LITREF(lit_85),x_1268F1192);
  }
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_103));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_104));
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
  T22 = BOXVAL(messageF1193);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T18 = CALLN(1,VARREF(YmacrosYcat),4,T19,T20,T21,Ynil);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_107));
  T30 = BOXVAL(argumentsF1194);
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
  P tmpF1199;
  P descriptionF1198;
  P infoF1197;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YsyntaxYfind_option),options_,LITREF(lit_96),YPfalse);
  infoF1197 = T1;
  T3 = CALL3(1,VARREF(YsyntaxYfind_option),options_,LITREF(lit_97),YPfalse);
  descriptionF1198 = T3;
  tmpF1199 = infoF1197;
  if (tmpF1199 != YPfalse) {
    T6 = descriptionF1198;
  } else {
    T6 = YPfalse;
  }
  T5 = T6;
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(Yerror),LITREF(lit_98),options_);
    T4 = T7;
  } else {
    if (infoF1197 != YPfalse) {
      T10 = FUNFAB(fun_58,1,infoF1197);
      T9 = with_exit(T10);
      T8 = T9;
    } else {
      if (descriptionF1198 != YPfalse) {
        T13 = FUNFAB(fun_60,1,descriptionF1198);
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
  P test_bodyF1200;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YsyntaxYfind_option),options_,LITREF(lit_66),LITREF(lit_110));
  test_bodyF1200 = T1;
  T2 = CALL2(1,VARREF(YsyntaxYsexpr_make_anonymous_method),Ynil,test_bodyF1200);
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
  P tmpF1201;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLlstG));
  tmpF1201 = T1;
  if (tmpF1201 != YPfalse) {
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
  T0 = CALL2(1,VARREF(YruntimeYA),VARREF(YsyntaxYTunique_name_counterT),YPint((P)1));
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
  T2 = CALL2(1,VARREF(YruntimeYas),VARREF(YLstrG),prefix_);
  T4 = CALL0(1,VARREF(YsyntaxYsexpr_new_unique_name_counterX));
  T3 = CALL1(1,VARREF(YruntimeYnum_to_str),T4);
  T1 = CALL2(1,VARREF(YmacrosYcat),T2,T3);
  T0 = CALL2(1,VARREF(YruntimeYas),VARREF(YLsymG),T1);
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
  T1 = CALL1(1,VARREF(YruntimeY2nd),let_exp_);
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
  T1 = CALL1(1,VARREF(YruntimeY2nd),let_exp_);
  T0 = CALL2(1,VARREF(YmacrosYmap),VARREF(YruntimeY2nd),T1);
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
  P tmpF1203;
  P nameF1202;
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
    T2 = CALL2(1,VARREF(YmacrosYtup),rtnames_,rtvalues_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),tnames_);
    nameF1202 = T4;
    T7 = CALL2(1,VARREF(YisaQ),nameF1202,VARREF(YLlstG));
    tmpF1203 = T7;
    if (tmpF1203 != YPfalse) {
      T11 = CALL1(1,VARREF(Ytail),nameF1202);
      T10 = CALL1(1,VARREF(Yhead),T11);
      T9 = CALL2(1,VARREF(YmacrosYEE),T10,LITREF(lit_152));
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    if (T6 != YPfalse) {
      T15 = CALL1(1,VARREF(Yhead),nameF1202);
      T14 = CALL2(1,VARREF(Ylst),T15,LITREF(lit_153));
      T13 = CALL2(1,VARREF(YmacrosYpair),T14,rtnames_);
      T18 = CALL2(1,VARREF(Ylst),LITREF(lit_155),FREEREF(1));
      T17 = CALLN(1,VARREF(Ylst),4,LITREF(lit_154),FREEREF(1),index_,T18);
      T16 = CALL2(1,VARREF(YmacrosYpair),T17,rtvalues_);
      T19 = CALL2(1,VARREF(YruntimeYA),index_,YPint((P)1));
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
      T22 = CALL2(1,VARREF(YmacrosYpair),nameF1202,rtnames_);
      T24 = CALL3(1,VARREF(Ylst),LITREF(lit_156),FREEREF(1),index_);
      T23 = CALL2(1,VARREF(YmacrosYpair),T24,rtvalues_);
      T25 = CALL2(1,VARREF(YruntimeYA),index_,YPint((P)1));
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
  P rtvaluesF1211;
  P rtnamesF1210;
  P tup40F1209;
  P innerF1208;
  P tupnameF1207;
  P tmpF1206;
  P valueF1205;
  P nameF1204;
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
    T3 = CALL1(1,VARREF(YruntimeYrevX),rnames_);
    T4 = CALL1(1,VARREF(YruntimeYrevX),rvalues_);
    T2 = CALL2(1,VARREF(YmacrosYtup),T3,T4);
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),names_);
    nameF1204 = T6;
    T8 = CALL1(1,VARREF(Yhead),vals_);
    valueF1205 = T8;
    T11 = CALL2(1,VARREF(YisaQ),nameF1204,VARREF(YLlstG));
    tmpF1206 = T11;
    if (tmpF1206 != YPfalse) {
      T14 = CALL1(1,VARREF(Yhead),nameF1204);
      T13 = CALL2(1,VARREF(YmacrosYEE),T14,LITREF(lit_41));
      T12 = T13;
    } else {
      T12 = YPfalse;
    }
    T10 = T12;
    if (T10 != YPfalse) {
      T16 = CALL1(1,VARREF(YsyntaxYsexpr_unique_name),LITREF(lit_146));
      tupnameF1207 = T16;
      T19 = FUNSHELL(1,fun_inner_84,2);
      innerF1208 = T19;
      FUNINIT(innerF1208, 2,innerF1208,tupnameF1207);
      T21 = CALL1(1,VARREF(Ylst),tupnameF1207);
      T22 = CALL1(1,VARREF(Ylst),valueF1205);
      T23 = CALL1(1,VARREF(Ytail),nameF1204);
      T20 = CALLN(0,innerF1208,4,T21,T22,YPint((P)0),T23);
      T18 = T20;
      tup40F1209 = T18;
      T25 = CALL2(1,VARREF(YmacrosYelt),tup40F1209,YPint((P)0));
      rtnamesF1210 = T25;
      T27 = CALL2(1,VARREF(YmacrosYelt),tup40F1209,YPint((P)1));
      rtvaluesF1211 = T27;
      T29 = CALL2(1,VARREF(YmacrosYcat),rtnamesF1210,rnames_);
      T30 = CALL2(1,VARREF(YmacrosYcat),rtvaluesF1211,rvalues_);
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
      T34 = CALL2(1,VARREF(YmacrosYpair),nameF1204,rnames_);
      T35 = CALL2(1,VARREF(YmacrosYpair),valueF1205,rvalues_);
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
  P loopF1212;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(vals_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_85,1);
  loopF1212 = T1;
  FUNINIT(loopF1212, 1,loopF1212);
  T2 = CALLN(0,loopF1212,4,Ynil,Ynil,names_,vals_);
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
  P colF1219;
  P valuesF1218;
  P namesF1217;
  P tup41F1216;
  P bodyF1215;
  P ovaluesF1214;
  P onamesF1213;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_let_bound_variables),let_exp_);
  onamesF1213 = T1;
  T3 = CALL1(1,VARREF(YsyntaxYsexpr_let_values),let_exp_);
  ovaluesF1214 = T3;
  T5 = CALL1(1,VARREF(YsyntaxYsexpr_let_body),let_exp_);
  bodyF1215 = T5;
  T7 = CALL2(1,VARREF(YsyntaxYsexpr_let_namesAvalues),onamesF1213,ovaluesF1214);
  tup41F1216 = T7;
  T9 = CALL2(1,VARREF(YmacrosYelt),tup41F1216,YPint((P)0));
  namesF1217 = T9;
  T11 = CALL2(1,VARREF(YmacrosYelt),tup41F1216,YPint((P)1));
  valuesF1218 = T11;
  T13 = FUNSHELL(1,fun_col_87,2);
  colF1219 = T13;
  FUNINIT(colF1219, 2,bodyF1215,colF1219);
  T14 = CALL2(0,colF1219,namesF1217,valuesF1218);
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
  T1 = CALL1(1,VARREF(YruntimeY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YmacrosYmap),VARREF(YruntimeY1st),T1);
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
  T1 = CALL1(1,VARREF(YruntimeY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YmacrosYmap),VARREF(YruntimeY2nd),T1);
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
  T2 = CALL1(1,VARREF(YruntimeY2nd),loc_exp_);
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
  T0 = CALL1(1,VARREF(YruntimeY2nd),rep_exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_signature_97) {
  P rep_exp_;
  P sigF1220;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YruntimeY3rd),rep_exp_);
  sigF1220 = T1;
  T4 = CALL1(1,VARREF(YsyntaxYsexpr_signature_parameters),sigF1220);
  T3 = CALL2(1,VARREF(YmacrosYmap),VARREF(YruntimeY1st),T4);
  T6 = CALL1(1,VARREF(YsyntaxYsexpr_signature_value),sigF1220);
  if (T6 != YPfalse) {
    T5 = Ynil;
  } else {
    T7 = CALL1(1,VARREF(Ylst),VARREF(YsyntaxYDsexpr_values_tag));
    T5 = T7;
  }
  T9 = CALL1(1,VARREF(YsyntaxYsexpr_signature_value),sigF1220);
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
  T1 = CALL1(1,VARREF(YruntimeY3rd),rep_exp_);
  T0 = CALL2(1,VARREF(YmacrosYmap),VARREF(YruntimeY2nd),T1);
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
  P initsF1224;
  P bodyF1223;
  P sigF1222;
  P nameF1221;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_iterate_name),rep_exp_);
  nameF1221 = T1;
  T3 = CALL1(1,VARREF(YsyntaxYsexpr_iterate_signature),rep_exp_);
  sigF1222 = T3;
  T5 = CALL1(1,VARREF(YsyntaxYsexpr_iterate_body),rep_exp_);
  bodyF1223 = T5;
  T7 = CALL1(1,VARREF(YsyntaxYsexpr_iterate_inits),rep_exp_);
  initsF1224 = T7;
  T11 = CALL2(1,VARREF(Ylst),nameF1221,sigF1222);
  T10 = CALL2(1,VARREF(YmacrosYcat),T11,bodyF1223);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T13 = CALL1(1,VARREF(Ylst),nameF1221);
  T12 = CALL2(1,VARREF(YmacrosYcat),T13,initsF1224);
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
  T0 = CALL1(1,VARREF(YruntimeY2nd),exp_);
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
  T0 = CALL2(1,VARREF(YmacrosYmap),VARREF(YruntimeY2nd),exp_);
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
  T0 = CALL2(1,VARREF(YmacrosYmap),VARREF(YruntimeY3rd),exp_);
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
  T0 = CALL1(1,VARREF(YruntimeY3rd),exp_);
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
  T0 = CALL1(1,VARREF(YruntimeY2nd),exp_);
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
  T0 = CALL1(1,VARREF(YruntimeY3rd),exp_);
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
  T2 = CALL1(1,VARREF(YruntimeYlen),exp_);
  T1 = CALL2(1,VARREF(YruntimeYE),T2,YPint((P)4));
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
  T2 = CALL2(1,VARREF(YruntimeYas),VARREF(YLstrG),name_);
  T1 = CALL2(1,VARREF(YmacrosYcat),T2,LITREF(lit_198));
  T0 = CALL2(1,VARREF(YruntimeYas),VARREF(YLsymG),T1);
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
  P resF1226;
  P raw_resultF1225;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYbq_process),x_);
  raw_resultF1225 = T1;
  T3 = CALL1(1,VARREF(YsyntaxYbq_remove_tokens),raw_resultF1225);
  resF1226 = T3;
  T2 = resF1226;
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
  P tmpF1227;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  T1 = CALL1(1,VARREF(Ynot),T2);
  tmpF1227 = T1;
  if (tmpF1227 != YPfalse) {
    T3 = tmpF1227;
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
  T1 = CALL1(1,VARREF(YruntimeYrevX),x_);
  T0 = CALL2(1,VARREF(YruntimeYcatX),T1,y_);
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
  P loopF1228;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_125,2);
  loopF1228 = T1;
  FUNINIT(loopF1228, 2,return_,loopF1228);
  T2 = CALL2(0,loopF1228,FREEREF(0),Ynil);
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
  P tmpF1231;
  P dF1230;
  P aF1229;
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
    aF1229 = T4;
    T8 = CALL1(1,VARREF(Ytail),x_);
    T7 = CALL2(1,VARREF(YsyntaxYmap_tree),fn_,T8);
    dF1230 = T7;
    T12 = CALL1(1,VARREF(Yhead),x_);
    T11 = CALL2(1,VARREF(YruntimeYE),aF1229,T12);
    tmpF1231 = T11;
    if (tmpF1231 != YPfalse) {
      T15 = CALL1(1,VARREF(Ytail),x_);
      T14 = CALL2(1,VARREF(YruntimeYE),dF1230,T15);
      T13 = T14;
    } else {
      T13 = YPfalse;
    }
    T10 = T13;
    if (T10 != YPfalse) {
      T9 = x_;
    } else {
      T16 = CALL2(1,VARREF(YmacrosYpair),aF1229,dF1230);
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
  P tmpF1233;
  P tmpF1232;
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
                tmpF1232 = T20;
                if (tmpF1232 != YPfalse) {
                  T27 = CALL1(1,VARREF(Ytail),x_);
                  T26 = CALL1(1,VARREF(Ytail),T27);
                  T25 = CALL1(1,VARREF(YmacrosYemptyQ),T26);
                  T24 = CALL1(1,VARREF(Ynot),T25);
                  tmpF1233 = T24;
                  if (tmpF1233 != YPfalse) {
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
  T1 = CALL1(1,VARREF(YruntimeY2nd),exp_);
  T0 = CALL1(1,VARREF(YruntimeY2nd),T1);
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
  T1 = CALL1(1,VARREF(YruntimeY2nd),exp_);
  T0 = CALL1(1,VARREF(YruntimeY1st),T1);
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
  T0 = CALL1(1,VARREF(YruntimeY3rd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_else_135) {
  P exp_;
  P altF1234;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YmacrosYelt),exp_,YPint((P)3));
  altF1234 = T1;
  T3 = CALL2(1,VARREF(YmacrosYEE),altF1234,VARREF(Ynul));
  if (T3 != YPfalse) {
    T2 = YPfalse;
  } else {
    T2 = altF1234;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_pattern_variableQ_136) {
  P pat_;
  P tmpF1235;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_unquoteQ),pat_);
  tmpF1235 = T1;
  if (tmpF1235 != YPfalse) {
    T2 = tmpF1235;
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
  T0 = CALL1(1,VARREF(YruntimeY2nd),pat_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_col_138) {
  P pat_;
  P xF1237;
  P tmpF1236;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T3 = CALL2(1,VARREF(YisaQ),pat_,VARREF(YLlstG));
  T2 = CALL1(1,VARREF(Ynot),T3);
  tmpF1236 = T2;
  if (tmpF1236 != YPfalse) {
    T4 = tmpF1236;
  } else {
    T5 = CALL1(1,VARREF(YmacrosYemptyQ),pat_);
    T4 = T5;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T7 = CALL1(1,VARREF(Yhead),pat_);
    xF1237 = T7;
    T9 = CALL1(1,VARREF(YsyntaxYsexpr_pattern_variableQ),xF1237);
    if (T9 != YPfalse) {
      T11 = CALL1(1,VARREF(YsyntaxYsexpr_pattern_variable_name),xF1237);
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
  P colF1238;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T2 = FUNSHELL(1,fun_col_138,1);
  colF1238 = T2;
  FUNINIT(colF1238, 1,colF1238);
  T3 = CALL1(0,colF1238,pat_);
  T1 = T3;
  T0 = CALL1(1,VARREF(YruntimeYdel_dups),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_macro_function_140) {
  P exp_;
  P funcF1240;
  P mifF1239;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T2 = CALL1(1,VARREF(YsyntaxYsexpr_method_parameters),exp_);
  T4 = CALL1(1,VARREF(YsyntaxYsexpr_method_body),exp_);
  T3 = CALL1(1,VARREF(YsyntaxYsexpr_sequence_Gbegin),T4);
  T1 = CALLN(1,VARREF(YsyntaxYsexpr_make_syntax_if),4,T2,LITREF(lit_1),T3,YPfalse);
  mifF1239 = T1;
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_1));
  T8 = CALL1(1,VARREF(Ylst),mifF1239);
  T6 = CALL2(1,VARREF(YsyntaxYsexpr_make_anonymous_method),T7,T8);
  funcF1240 = T6;
  T5 = funcF1240;
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
  T225 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_block_body_45 = YPmet(FUNCODEREF(fun_sexpr_block_body_45),LITREF(lit_72),T225,ENVNUL,PNUL,YPfalse);
  T228 = BOUNDP(YsyntaxYsexpr_block_body);
  if (T228 != YPfalse) {
    T227 = VARREF(YsyntaxYsexpr_block_body);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_sexpr_block_body_45;
  T226 = CALL2(1,VARREF(YPdefine_method),T227,T229);
  VARSET(YsyntaxYsexpr_block_body,T226);
  lit_73 = YPPsym((P)"fin");
  VARSET(YsyntaxYDsexpr_unwind_protect_tag,LITREF(lit_73));
  lit_74 = YPPsym((P)"sexpr-unwind-protect?");
  T230 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unwind_protectQ_46 = YPmet(FUNCODEREF(fun_sexpr_unwind_protectQ_46),LITREF(lit_74),T230,ENVNUL,PNUL,YPfalse);
  T233 = BOUNDP(YsyntaxYsexpr_unwind_protectQ);
  if (T233 != YPfalse) {
    T232 = VARREF(YsyntaxYsexpr_unwind_protectQ);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_sexpr_unwind_protectQ_46;
  T231 = CALL2(1,VARREF(YPdefine_method),T232,T234);
  VARSET(YsyntaxYsexpr_unwind_protectQ,T231);
  lit_75 = YPPsym((P)"sexpr-unwind-protect-protected-form");
  T237 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T236 = fun_sexpr_unwind_protect_protected_form_47 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_protected_form_47),LITREF(lit_75),T237,ENVNUL,PNUL,YPfalse);
  T241 = BOUNDP(YsyntaxYsexpr_unwind_protect_protected_form);
  if (T241 != YPfalse) {
    T240 = VARREF(YsyntaxYsexpr_unwind_protect_protected_form);
  } else {
    T240 = YPfalse;
  }
  T242 = fun_sexpr_unwind_protect_protected_form_47;
  T239 = CALL2(1,VARREF(YPdefine_method),T240,T242);
  T238 = VARSET(YsyntaxYsexpr_unwind_protect_protected_form,T239);
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
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_unwind_protect_cleanup_forms_48 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_cleanup_forms_48),LITREF(lit_76),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YsyntaxYsexpr_unwind_protect_cleanup_forms);
  if (T3 != YPfalse) {
    T2 = VARREF(YsyntaxYsexpr_unwind_protect_cleanup_forms);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_unwind_protect_cleanup_forms_48;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YsyntaxYsexpr_unwind_protect_cleanup_forms,T1);
  lit_77 = YPPsym((P)"try");
  VARSET(YsyntaxYDsexpr_monitor_tag,LITREF(lit_77));
  lit_78 = YPPsym((P)"sexpr-monitor?");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_monitorQ_49 = YPmet(FUNCODEREF(fun_sexpr_monitorQ_49),LITREF(lit_78),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YsyntaxYsexpr_monitorQ);
  if (T8 != YPfalse) {
    T7 = VARREF(YsyntaxYsexpr_monitorQ);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_monitorQ_49;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YsyntaxYsexpr_monitorQ,T6);
  lit_79 = YPPsym((P)"sexpr-monitor-expand");
  lit_80 = YPPsym((P)"return");
  lit_81 = YPPsym((P)"x-1263");
  lit_82 = YPPsym((P)"msg");
  lit_83 = YPPsym((P)"args");
  lit_84 = YPsb((P)"Malformed TRY expression: ~=");
  lit_85 = YPsb((P)"Match Pattern Failure");
  lit_86 = YPPsym((P)"type");
  T12 = YPsig(YPPlist(2,LITREF(lit_82),LITREF(lit_83)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1263_50 = YPmet(FUNCODEREF(fun_x_1263_50),LITREF(lit_81),T12,ENVNUL,PNUL,YPfalse);
  T11 = YPsig(YPPlist(1,LITREF(lit_80)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T11,ENVNUL,PNUL,YPfalse);
  T10 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_expand_52 = YPmet(FUNCODEREF(fun_sexpr_monitor_expand_52),LITREF(lit_79),T10,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YsyntaxYsexpr_monitor_expand);
  if (T15 != YPfalse) {
    T14 = VARREF(YsyntaxYsexpr_monitor_expand);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_sexpr_monitor_expand_52;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YsyntaxYsexpr_monitor_expand,T13);
  lit_87 = YPPsym((P)"find-option");
  lit_88 = YPPsym((P)"options");
  lit_89 = YPPsym((P)"option");
  lit_90 = YPPsym((P)"default");
  T17 = YPsig(YPPlist(3,LITREF(lit_88),LITREF(lit_89),LITREF(lit_90)),YPPlist(3,VARREF(YLlstG),VARREF(YLsymG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YsyntaxYfind_option = YPmet(FUNCODEREF(YsyntaxYfind_option),LITREF(lit_87),T17,ENVNUL,PNUL,YPfalse);
  T18 = YsyntaxYfind_option;
  VARSET(YsyntaxYfind_option,T18);
  lit_91 = YPPsym((P)"sexpr-monitor-type");
  lit_92 = YPPlist(1,YPPsym((P)"<condition>"));
  lit_93 = YPPsym((P)"x-1265");
  lit_94 = YPsb((P)"Malformed TRY condition type: %=");
  T21 = YPsig(YPPlist(2,LITREF(lit_82),LITREF(lit_83)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1265_54 = YPmet(FUNCODEREF(fun_x_1265_54),LITREF(lit_93),T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(1,LITREF(lit_80)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T20,ENVNUL,PNUL,YPfalse);
  T19 = YPsig(YPPlist(1,LITREF(lit_88)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_type_56 = YPmet(FUNCODEREF(fun_sexpr_monitor_type_56),LITREF(lit_91),T19,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YsyntaxYsexpr_monitor_type);
  if (T24 != YPfalse) {
    T23 = VARREF(YsyntaxYsexpr_monitor_type);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_sexpr_monitor_type_56;
  T22 = CALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YsyntaxYsexpr_monitor_type,T22);
  lit_95 = YPPsym((P)"sexpr-monitor-info");
  lit_96 = YPPsym((P)"info");
  lit_97 = YPPsym((P)"description");
  lit_98 = YPsb((P)"TRY may only have one of INFO or DESCRIPTION: %=");
  lit_99 = YPPsym((P)"x-1267");
  lit_100 = YPsb((P)"Malformed TRY info expression: %=");
  lit_101 = YPPsym((P)"x-1269");
  lit_102 = YPsb((P)"Malformed TRY description: %=");
  lit_103 = YPPsym((P)"isa");
  lit_104 = YPPsym((P)"<simple-handler-info>");
  lit_105 = YPPsym((P)"handler-info-message");
  lit_106 = YPPsym((P)"handler-info-arguments");
  lit_107 = YPPsym((P)"lst");
  lit_108 = YPPsym((P)"$default-handler-info");
  T30 = YPsig(YPPlist(2,LITREF(lit_82),LITREF(lit_83)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1267_57 = YPmet(FUNCODEREF(fun_x_1267_57),LITREF(lit_99),T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(1,LITREF(lit_80)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(2,LITREF(lit_82),LITREF(lit_83)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1269_59 = YPmet(FUNCODEREF(fun_x_1269_59),LITREF(lit_101),T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(YPPlist(1,LITREF(lit_80)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(YPPlist(1,LITREF(lit_88)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_info_61 = YPmet(FUNCODEREF(fun_sexpr_monitor_info_61),LITREF(lit_95),T26,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YsyntaxYsexpr_monitor_info);
  if (T33 != YPfalse) {
    T32 = VARREF(YsyntaxYsexpr_monitor_info);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_sexpr_monitor_info_61;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YsyntaxYsexpr_monitor_info,T31);
  lit_109 = YPPsym((P)"sexpr-monitor-test");
  lit_110 = YPPlist(1,YPtrue);
  T35 = YPsig(YPPlist(1,LITREF(lit_88)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_monitor_test_62 = YPmet(FUNCODEREF(fun_sexpr_monitor_test_62),LITREF(lit_109),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YsyntaxYsexpr_monitor_test);
  if (T38 != YPfalse) {
    T37 = VARREF(YsyntaxYsexpr_monitor_test);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_sexpr_monitor_test_62;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YsyntaxYsexpr_monitor_test,T36);
  lit_111 = YPPsym((P)"sexpr-monitor-body");
  T40 = YPsig(YPPlist(1,LITREF(lit_57)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_monitor_body_63 = YPmet(FUNCODEREF(fun_sexpr_monitor_body_63),LITREF(lit_111),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YsyntaxYsexpr_monitor_body);
  if (T43 != YPfalse) {
    T42 = VARREF(YsyntaxYsexpr_monitor_body);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_sexpr_monitor_body_63;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YsyntaxYsexpr_monitor_body,T41);
  lit_112 = YPPsym((P)"seq");
  VARSET(YsyntaxYDsexpr_begin_tag,LITREF(lit_112));
  lit_113 = YPPsym((P)"sexpr-begin?");
  T45 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_beginQ_64 = YPmet(FUNCODEREF(fun_sexpr_beginQ_64),LITREF(lit_113),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YsyntaxYsexpr_beginQ);
  if (T48 != YPfalse) {
    T47 = VARREF(YsyntaxYsexpr_beginQ);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_sexpr_beginQ_64;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YsyntaxYsexpr_beginQ,T46);
  lit_114 = YPPsym((P)"sexpr-begin-actions");
  lit_115 = YPPsym((P)"begin-exp");
  T50 = YPsig(YPPlist(1,LITREF(lit_115)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_begin_actions_65 = YPmet(FUNCODEREF(fun_sexpr_begin_actions_65),LITREF(lit_114),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YsyntaxYsexpr_begin_actions);
  if (T53 != YPfalse) {
    T52 = VARREF(YsyntaxYsexpr_begin_actions);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_sexpr_begin_actions_65;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YsyntaxYsexpr_begin_actions,T51);
  lit_116 = YPPsym((P)"sexpr-last-exp?");
  T55 = YPsig(YPPlist(1,LITREF(lit_112)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_last_expQ_66 = YPmet(FUNCODEREF(fun_sexpr_last_expQ_66),LITREF(lit_116),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YsyntaxYsexpr_last_expQ);
  if (T58 != YPfalse) {
    T57 = VARREF(YsyntaxYsexpr_last_expQ);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_sexpr_last_expQ_66;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YsyntaxYsexpr_last_expQ,T56);
  lit_117 = YPPsym((P)"sexpr-first-exp");
  T60 = YPsig(YPPlist(1,LITREF(lit_112)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_first_exp_67 = YPmet(FUNCODEREF(fun_sexpr_first_exp_67),LITREF(lit_117),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YsyntaxYsexpr_first_exp);
  if (T63 != YPfalse) {
    T62 = VARREF(YsyntaxYsexpr_first_exp);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_sexpr_first_exp_67;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YsyntaxYsexpr_first_exp,T61);
  lit_118 = YPPsym((P)"sexpr-rest-exps");
  T65 = YPsig(YPPlist(1,LITREF(lit_112)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_rest_exps_68 = YPmet(FUNCODEREF(fun_sexpr_rest_exps_68),LITREF(lit_118),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YsyntaxYsexpr_rest_exps);
  if (T68 != YPfalse) {
    T67 = VARREF(YsyntaxYsexpr_rest_exps);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_sexpr_rest_exps_68;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YsyntaxYsexpr_rest_exps,T66);
  lit_119 = YPPsym((P)"sexpr-sequence->begin");
  T70 = YPsig(YPPlist(1,LITREF(lit_112)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_sequence_Gbegin_69 = YPmet(FUNCODEREF(fun_sexpr_sequence_Gbegin_69),LITREF(lit_119),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YsyntaxYsexpr_sequence_Gbegin);
  if (T73 != YPfalse) {
    T72 = VARREF(YsyntaxYsexpr_sequence_Gbegin);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_sexpr_sequence_Gbegin_69;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YsyntaxYsexpr_sequence_Gbegin,T71);
  lit_120 = YPPsym((P)"sexpr-make-begin");
  T75 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_make_begin_70 = YPmet(FUNCODEREF(fun_sexpr_make_begin_70),LITREF(lit_120),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YsyntaxYsexpr_make_begin);
  if (T78 != YPfalse) {
    T77 = VARREF(YsyntaxYsexpr_make_begin);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_sexpr_make_begin_70;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YsyntaxYsexpr_make_begin,T76);
  lit_121 = YPPsym((P)"sexpr-application?");
  T80 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_applicationQ_71 = YPmet(FUNCODEREF(fun_sexpr_applicationQ_71),LITREF(lit_121),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YsyntaxYsexpr_applicationQ);
  if (T83 != YPfalse) {
    T82 = VARREF(YsyntaxYsexpr_applicationQ);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_sexpr_applicationQ_71;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YsyntaxYsexpr_applicationQ,T81);
  lit_122 = YPPsym((P)"sexpr-operator");
  lit_123 = YPPsym((P)"app");
  T85 = YPsig(YPPlist(1,LITREF(lit_123)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_operator_72 = YPmet(FUNCODEREF(fun_sexpr_operator_72),LITREF(lit_122),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YsyntaxYsexpr_operator);
  if (T88 != YPfalse) {
    T87 = VARREF(YsyntaxYsexpr_operator);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_sexpr_operator_72;
  T86 = CALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YsyntaxYsexpr_operator,T86);
  lit_124 = YPPsym((P)"sexpr-operands");
  T90 = YPsig(YPPlist(1,LITREF(lit_123)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_operands_73 = YPmet(FUNCODEREF(fun_sexpr_operands_73),LITREF(lit_124),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YsyntaxYsexpr_operands);
  if (T93 != YPfalse) {
    T92 = VARREF(YsyntaxYsexpr_operands);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_sexpr_operands_73;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YsyntaxYsexpr_operands,T91);
  lit_125 = YPPsym((P)"sexpr-no-operands?");
  T95 = YPsig(YPPlist(1,LITREF(lit_83)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_no_operandsQ_74 = YPmet(FUNCODEREF(fun_sexpr_no_operandsQ_74),LITREF(lit_125),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YsyntaxYsexpr_no_operandsQ);
  if (T98 != YPfalse) {
    T97 = VARREF(YsyntaxYsexpr_no_operandsQ);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_sexpr_no_operandsQ_74;
  T96 = CALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YsyntaxYsexpr_no_operandsQ,T96);
  lit_126 = YPPsym((P)"sexpr-first-operand");
  T100 = YPsig(YPPlist(1,LITREF(lit_83)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_first_operand_75 = YPmet(FUNCODEREF(fun_sexpr_first_operand_75),LITREF(lit_126),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YsyntaxYsexpr_first_operand);
  if (T103 != YPfalse) {
    T102 = VARREF(YsyntaxYsexpr_first_operand);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_sexpr_first_operand_75;
  T101 = CALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YsyntaxYsexpr_first_operand,T101);
  lit_127 = YPPsym((P)"sexpr-rest-operands");
  T105 = YPsig(YPPlist(1,LITREF(lit_83)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_rest_operands_76 = YPmet(FUNCODEREF(fun_sexpr_rest_operands_76),LITREF(lit_127),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YsyntaxYsexpr_rest_operands);
  if (T108 != YPfalse) {
    T107 = VARREF(YsyntaxYsexpr_rest_operands);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_sexpr_rest_operands_76;
  T106 = CALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YsyntaxYsexpr_rest_operands,T106);
  lit_128 = YPPsym((P)"sexpr-make-application");
  lit_129 = YPPsym((P)"op");
  lit_130 = YPPsym((P)"operands");
  T110 = YPsig(YPPlist(2,LITREF(lit_129),LITREF(lit_130)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_make_application_77 = YPmet(FUNCODEREF(fun_sexpr_make_application_77),LITREF(lit_128),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YsyntaxYsexpr_make_application);
  if (T113 != YPfalse) {
    T112 = VARREF(YsyntaxYsexpr_make_application);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_sexpr_make_application_77;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YsyntaxYsexpr_make_application,T111);
  VARSET(YsyntaxYTunique_name_counterT,YPint((P)0));
  lit_131 = YPPsym((P)"sexpr-new-unique-name-counter!");
  T115 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLintG),Ynil);
  fun_sexpr_new_unique_name_counterX_78 = YPmet(FUNCODEREF(fun_sexpr_new_unique_name_counterX_78),LITREF(lit_131),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YsyntaxYsexpr_new_unique_name_counterX);
  if (T118 != YPfalse) {
    T117 = VARREF(YsyntaxYsexpr_new_unique_name_counterX);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_sexpr_new_unique_name_counterX_78;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YsyntaxYsexpr_new_unique_name_counterX,T116);
  VARSET(YsyntaxYLnameG,VARREF(YLanyG));
  lit_132 = YPPsym((P)"sexpr-unique-name");
  lit_133 = YPPsym((P)"prefix");
  T120 = YPsig(YPPlist(1,LITREF(lit_133)),YPPlist(1,VARREF(YsyntaxYLnameG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_unique_name_79 = YPmet(FUNCODEREF(fun_sexpr_unique_name_79),LITREF(lit_132),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YsyntaxYsexpr_unique_name);
  if (T123 != YPfalse) {
    T122 = VARREF(YsyntaxYsexpr_unique_name);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_sexpr_unique_name_79;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YsyntaxYsexpr_unique_name,T121);
  lit_134 = YPPsym((P)"let");
  VARSET(YsyntaxYDsexpr_let_tag,LITREF(lit_134));
  lit_135 = YPPsym((P)"sexpr-let?");
  T125 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_letQ_80 = YPmet(FUNCODEREF(fun_sexpr_letQ_80),LITREF(lit_135),T125,ENVNUL,PNUL,YPfalse);
  T128 = BOUNDP(YsyntaxYsexpr_letQ);
  if (T128 != YPfalse) {
    T127 = VARREF(YsyntaxYsexpr_letQ);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_sexpr_letQ_80;
  T126 = CALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YsyntaxYsexpr_letQ,T126);
  lit_136 = YPPsym((P)"sexpr-let-bound-variables");
  lit_137 = YPPsym((P)"let-exp");
  T130 = YPsig(YPPlist(1,LITREF(lit_137)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_let_bound_variables_81 = YPmet(FUNCODEREF(fun_sexpr_let_bound_variables_81),LITREF(lit_136),T130,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(YsyntaxYsexpr_let_bound_variables);
  if (T133 != YPfalse) {
    T132 = VARREF(YsyntaxYsexpr_let_bound_variables);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_sexpr_let_bound_variables_81;
  T131 = CALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YsyntaxYsexpr_let_bound_variables,T131);
  lit_138 = YPPsym((P)"sexpr-let-values");
  T135 = YPsig(YPPlist(1,LITREF(lit_137)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_let_values_82 = YPmet(FUNCODEREF(fun_sexpr_let_values_82),LITREF(lit_138),T135,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(YsyntaxYsexpr_let_values);
  if (T138 != YPfalse) {
    T137 = VARREF(YsyntaxYsexpr_let_values);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_sexpr_let_values_82;
  T136 = CALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YsyntaxYsexpr_let_values,T136);
  lit_139 = YPPsym((P)"sexpr-let-body");
  T140 = YPsig(YPPlist(1,LITREF(lit_137)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_let_body_83 = YPmet(FUNCODEREF(fun_sexpr_let_body_83),LITREF(lit_139),T140,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(YsyntaxYsexpr_let_body);
  if (T143 != YPfalse) {
    T142 = VARREF(YsyntaxYsexpr_let_body);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_sexpr_let_body_83;
  T141 = CALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YsyntaxYsexpr_let_body,T141);
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
  T147 = YPsig(YPPlist(4,LITREF(lit_148),LITREF(lit_149),LITREF(lit_150),LITREF(lit_151)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_inner_84 = YPmet(FUNCODEREF(fun_inner_84),LITREF(lit_147),T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(YPPlist(4,LITREF(lit_144),LITREF(lit_145),LITREF(lit_141),LITREF(lit_142)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_loop_85 = YPmet(FUNCODEREF(fun_loop_85),LITREF(lit_143),T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(YPPlist(2,LITREF(lit_141),LITREF(lit_142)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_sexpr_let_namesAvalues_86 = YPmet(FUNCODEREF(fun_sexpr_let_namesAvalues_86),LITREF(lit_140),T145,ENVNUL,PNUL,YPfalse);
  T150 = BOUNDP(YsyntaxYsexpr_let_namesAvalues);
  if (T150 != YPfalse) {
    T149 = VARREF(YsyntaxYsexpr_let_namesAvalues);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_sexpr_let_namesAvalues_86;
  T148 = CALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(YsyntaxYsexpr_let_namesAvalues,T148);
  lit_157 = YPPsym((P)"sexpr-let->combination");
  lit_158 = YPPsym((P)"col");
  lit_159 = YPPsym((P)"values");
  T153 = YPsig(YPPlist(2,LITREF(lit_141),LITREF(lit_159)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_col_87 = YPmet(FUNCODEREF(fun_col_87),LITREF(lit_158),T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(YPPlist(1,LITREF(lit_137)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_let_Gcombination_88 = YPmet(FUNCODEREF(fun_sexpr_let_Gcombination_88),LITREF(lit_157),T152,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(YsyntaxYsexpr_let_Gcombination);
  if (T156 != YPfalse) {
    T155 = VARREF(YsyntaxYsexpr_let_Gcombination);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_sexpr_let_Gcombination_88;
  T154 = CALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YsyntaxYsexpr_let_Gcombination,T154);
  lit_160 = YPPsym((P)"loc");
  VARSET(YsyntaxYDsexpr_locals_tag,LITREF(lit_160));
  lit_161 = YPPsym((P)"sexpr-loc?");
  T158 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_locQ_89 = YPmet(FUNCODEREF(fun_sexpr_locQ_89),LITREF(lit_161),T158,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(YsyntaxYsexpr_locQ);
  if (T161 != YPfalse) {
    T160 = VARREF(YsyntaxYsexpr_locQ);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_sexpr_locQ_89;
  T159 = CALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(YsyntaxYsexpr_locQ,T159);
  lit_162 = YPPsym((P)"sexpr-loc-bound-names");
  lit_163 = YPPsym((P)"loc-exp");
  T163 = YPsig(YPPlist(1,LITREF(lit_163)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_names_90 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_names_90),LITREF(lit_162),T163,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(YsyntaxYsexpr_loc_bound_names);
  if (T166 != YPfalse) {
    T165 = VARREF(YsyntaxYsexpr_loc_bound_names);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_sexpr_loc_bound_names_90;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(YsyntaxYsexpr_loc_bound_names,T164);
  lit_164 = YPPsym((P)"sexpr-loc-bound-signatures");
  T168 = YPsig(YPPlist(1,LITREF(lit_163)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_signatures_91 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_signatures_91),LITREF(lit_164),T168,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(YsyntaxYsexpr_loc_bound_signatures);
  if (T171 != YPfalse) {
    T170 = VARREF(YsyntaxYsexpr_loc_bound_signatures);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_sexpr_loc_bound_signatures_91;
  T169 = CALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(YsyntaxYsexpr_loc_bound_signatures,T169);
  lit_165 = YPPsym((P)"sexpr-loc-bound-bodies");
  T173 = YPsig(YPPlist(1,LITREF(lit_163)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_bodies_92 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_bodies_92),LITREF(lit_165),T173,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(YsyntaxYsexpr_loc_bound_bodies);
  if (T176 != YPfalse) {
    T175 = VARREF(YsyntaxYsexpr_loc_bound_bodies);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_sexpr_loc_bound_bodies_92;
  T174 = CALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(YsyntaxYsexpr_loc_bound_bodies,T174);
  lit_166 = YPPsym((P)"sexpr-loc-raw-body");
  T178 = YPsig(YPPlist(1,LITREF(lit_163)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_raw_body_93 = YPmet(FUNCODEREF(fun_sexpr_loc_raw_body_93),LITREF(lit_166),T178,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(YsyntaxYsexpr_loc_raw_body);
  if (T181 != YPfalse) {
    T180 = VARREF(YsyntaxYsexpr_loc_raw_body);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_sexpr_loc_raw_body_93;
  T179 = CALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(YsyntaxYsexpr_loc_raw_body,T179);
  lit_167 = YPPsym((P)"sexpr-loc-body");
  T183 = YPsig(YPPlist(1,LITREF(lit_163)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_loc_body_94 = YPmet(FUNCODEREF(fun_sexpr_loc_body_94),LITREF(lit_167),T183,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(YsyntaxYsexpr_loc_body);
  if (T186 != YPfalse) {
    T185 = VARREF(YsyntaxYsexpr_loc_body);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_sexpr_loc_body_94;
  T184 = CALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(YsyntaxYsexpr_loc_body,T184);
  lit_168 = YPPsym((P)"rep");
  VARSET(YsyntaxYDsexpr_iterate_tag,LITREF(lit_168));
  lit_169 = YPPsym((P)"sexpr-iterate?");
  T188 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_iterateQ_95 = YPmet(FUNCODEREF(fun_sexpr_iterateQ_95),LITREF(lit_169),T188,ENVNUL,PNUL,YPfalse);
  T191 = BOUNDP(YsyntaxYsexpr_iterateQ);
  if (T191 != YPfalse) {
    T190 = VARREF(YsyntaxYsexpr_iterateQ);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_sexpr_iterateQ_95;
  T189 = CALL2(1,VARREF(YPdefine_method),T190,T192);
  VARSET(YsyntaxYsexpr_iterateQ,T189);
  lit_170 = YPPsym((P)"sexpr-iterate-name");
  lit_171 = YPPsym((P)"rep-exp");
  T193 = YPsig(YPPlist(1,LITREF(lit_171)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_iterate_name_96 = YPmet(FUNCODEREF(fun_sexpr_iterate_name_96),LITREF(lit_170),T193,ENVNUL,PNUL,YPfalse);
  T196 = BOUNDP(YsyntaxYsexpr_iterate_name);
  if (T196 != YPfalse) {
    T195 = VARREF(YsyntaxYsexpr_iterate_name);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_sexpr_iterate_name_96;
  T194 = CALL2(1,VARREF(YPdefine_method),T195,T197);
  VARSET(YsyntaxYsexpr_iterate_name,T194);
  VARSET(YsyntaxYDsexpr_values_tag,LITREF(lit_39));
  lit_172 = YPPsym((P)"sexpr-iterate-signature");
  T198 = YPsig(YPPlist(1,LITREF(lit_171)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_signature_97 = YPmet(FUNCODEREF(fun_sexpr_iterate_signature_97),LITREF(lit_172),T198,ENVNUL,PNUL,YPfalse);
  T201 = BOUNDP(YsyntaxYsexpr_iterate_signature);
  if (T201 != YPfalse) {
    T200 = VARREF(YsyntaxYsexpr_iterate_signature);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_sexpr_iterate_signature_97;
  T199 = CALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(YsyntaxYsexpr_iterate_signature,T199);
  lit_173 = YPPsym((P)"sexpr-iterate-inits");
  T203 = YPsig(YPPlist(1,LITREF(lit_171)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_inits_98 = YPmet(FUNCODEREF(fun_sexpr_iterate_inits_98),LITREF(lit_173),T203,ENVNUL,PNUL,YPfalse);
  T206 = BOUNDP(YsyntaxYsexpr_iterate_inits);
  if (T206 != YPfalse) {
    T205 = VARREF(YsyntaxYsexpr_iterate_inits);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_sexpr_iterate_inits_98;
  T204 = CALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(YsyntaxYsexpr_iterate_inits,T204);
  lit_174 = YPPsym((P)"sexpr-iterate-body");
  T208 = YPsig(YPPlist(1,LITREF(lit_171)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_body_99 = YPmet(FUNCODEREF(fun_sexpr_iterate_body_99),LITREF(lit_174),T208,ENVNUL,PNUL,YPfalse);
  T211 = BOUNDP(YsyntaxYsexpr_iterate_body);
  if (T211 != YPfalse) {
    T210 = VARREF(YsyntaxYsexpr_iterate_body);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_sexpr_iterate_body_99;
  T209 = CALL2(1,VARREF(YPdefine_method),T210,T212);
  VARSET(YsyntaxYsexpr_iterate_body,T209);
  lit_175 = YPPsym((P)"sexpr-iterate->loc");
  T213 = YPsig(YPPlist(1,LITREF(lit_171)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_Gloc_100 = YPmet(FUNCODEREF(fun_sexpr_iterate_Gloc_100),LITREF(lit_175),T213,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(YsyntaxYsexpr_iterate_Gloc);
  if (T216 != YPfalse) {
    T215 = VARREF(YsyntaxYsexpr_iterate_Gloc);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_sexpr_iterate_Gloc_100;
  T214 = CALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(YsyntaxYsexpr_iterate_Gloc,T214);
  VARSET(YsyntaxYDsexpr_isa_tag,LITREF(lit_103));
  lit_176 = YPPsym((P)"sexpr-isa?");
  T218 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_isaQ_101 = YPmet(FUNCODEREF(fun_sexpr_isaQ_101),LITREF(lit_176),T218,ENVNUL,PNUL,YPfalse);
  T221 = BOUNDP(YsyntaxYsexpr_isaQ);
  if (T221 != YPfalse) {
    T220 = VARREF(YsyntaxYsexpr_isaQ);
  } else {
    T220 = YPfalse;
  }
  T222 = fun_sexpr_isaQ_101;
  T219 = CALL2(1,VARREF(YPdefine_method),T220,T222);
  VARSET(YsyntaxYsexpr_isaQ,T219);
  lit_177 = YPPsym((P)"sexpr-isa-parent");
  T223 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_isa_parent_102 = YPmet(FUNCODEREF(fun_sexpr_isa_parent_102),LITREF(lit_177),T223,ENVNUL,PNUL,YPfalse);
  T226 = BOUNDP(YsyntaxYsexpr_isa_parent);
  if (T226 != YPfalse) {
    T225 = VARREF(YsyntaxYsexpr_isa_parent);
  } else {
    T225 = YPfalse;
  }
  T227 = fun_sexpr_isa_parent_102;
  T224 = CALL2(1,VARREF(YPdefine_method),T225,T227);
  VARSET(YsyntaxYsexpr_isa_parent,T224);
  lit_178 = YPPsym((P)"sexpr-isa-slot-inits");
  T228 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_slot_inits_103 = YPmet(FUNCODEREF(fun_sexpr_isa_slot_inits_103),LITREF(lit_178),T228,ENVNUL,PNUL,YPfalse);
  T231 = BOUNDP(YsyntaxYsexpr_isa_slot_inits);
  if (T231 != YPfalse) {
    T230 = VARREF(YsyntaxYsexpr_isa_slot_inits);
  } else {
    T230 = YPfalse;
  }
  T232 = fun_sexpr_isa_slot_inits_103;
  T229 = CALL2(1,VARREF(YPdefine_method),T230,T232);
  VARSET(YsyntaxYsexpr_isa_slot_inits,T229);
  lit_179 = YPPsym((P)"sexpr-isa-init-slots");
  T233 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_init_slots_104 = YPmet(FUNCODEREF(fun_sexpr_isa_init_slots_104),LITREF(lit_179),T233,ENVNUL,PNUL,YPfalse);
  T236 = BOUNDP(YsyntaxYsexpr_isa_init_slots);
  if (T236 != YPfalse) {
    T235 = VARREF(YsyntaxYsexpr_isa_init_slots);
  } else {
    T235 = YPfalse;
  }
  T237 = fun_sexpr_isa_init_slots_104;
  T234 = CALL2(1,VARREF(YPdefine_method),T235,T237);
  VARSET(YsyntaxYsexpr_isa_init_slots,T234);
  lit_180 = YPPsym((P)"sexpr-isa-init-values");
  T238 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_init_values_105 = YPmet(FUNCODEREF(fun_sexpr_isa_init_values_105),LITREF(lit_180),T238,ENVNUL,PNUL,YPfalse);
  T241 = BOUNDP(YsyntaxYsexpr_isa_init_values);
  if (T241 != YPfalse) {
    T240 = VARREF(YsyntaxYsexpr_isa_init_values);
  } else {
    T240 = YPfalse;
  }
  T242 = fun_sexpr_isa_init_values_105;
  T239 = CALL2(1,VARREF(YPdefine_method),T240,T242);
  VARSET(YsyntaxYsexpr_isa_init_values,T239);
  lit_181 = YPPsym((P)"dc");
  VARSET(YsyntaxYDsexpr_define_class_tag,LITREF(lit_181));
  lit_182 = YPPsym((P)"sexpr-define-class?");
  T243 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_define_classQ_106 = YPmet(FUNCODEREF(fun_sexpr_define_classQ_106),LITREF(lit_182),T243,ENVNUL,PNUL,YPfalse);
  T246 = BOUNDP(YsyntaxYsexpr_define_classQ);
  if (T246 != YPfalse) {
    T245 = VARREF(YsyntaxYsexpr_define_classQ);
  } else {
    T245 = YPfalse;
  }
  T247 = fun_sexpr_define_classQ_106;
  T244 = CALL2(1,VARREF(YPdefine_method),T245,T247);
  VARSET(YsyntaxYsexpr_define_classQ,T244);
  lit_183 = YPPsym((P)"sexpr-define-class-parents");
  T248 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_define_class_parents_107 = YPmet(FUNCODEREF(fun_sexpr_define_class_parents_107),LITREF(lit_183),T248,ENVNUL,PNUL,YPfalse);
  T251 = BOUNDP(YsyntaxYsexpr_define_class_parents);
  if (T251 != YPfalse) {
    T250 = VARREF(YsyntaxYsexpr_define_class_parents);
  } else {
    T250 = YPfalse;
  }
  T252 = fun_sexpr_define_class_parents_107;
  T249 = CALL2(1,VARREF(YPdefine_method),T250,T252);
  VARSET(YsyntaxYsexpr_define_class_parents,T249);
  lit_184 = YPPsym((P)"slot");
  VARSET(YsyntaxYDsexpr_slot_tag,LITREF(lit_184));
  lit_185 = YPPsym((P)"sexpr-slot?");
  T253 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_slotQ_108 = YPmet(FUNCODEREF(fun_sexpr_slotQ_108),LITREF(lit_185),T253,ENVNUL,PNUL,YPfalse);
  T256 = BOUNDP(YsyntaxYsexpr_slotQ);
  if (T256 != YPfalse) {
    T255 = VARREF(YsyntaxYsexpr_slotQ);
  } else {
    T255 = YPfalse;
  }
  T257 = fun_sexpr_slotQ_108;
  T254 = CALL2(1,VARREF(YPdefine_method),T255,T257);
  VARSET(YsyntaxYsexpr_slotQ,T254);
  lit_186 = YPPsym((P)"sexpr-slot-object");
  T258 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_slot_object_109 = YPmet(FUNCODEREF(fun_sexpr_slot_object_109),LITREF(lit_186),T258,ENVNUL,PNUL,YPfalse);
  T261 = BOUNDP(YsyntaxYsexpr_slot_object);
  if (T261 != YPfalse) {
    T260 = VARREF(YsyntaxYsexpr_slot_object);
  } else {
    T260 = YPfalse;
  }
  T262 = fun_sexpr_slot_object_109;
  T259 = CALL2(1,VARREF(YPdefine_method),T260,T262);
  VARSET(YsyntaxYsexpr_slot_object,T259);
  lit_187 = YPPsym((P)"sexpr-slot-variable");
  T263 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_slot_variable_110 = YPmet(FUNCODEREF(fun_sexpr_slot_variable_110),LITREF(lit_187),T263,ENVNUL,PNUL,YPfalse);
  T266 = BOUNDP(YsyntaxYsexpr_slot_variable);
  if (T266 != YPfalse) {
    T265 = VARREF(YsyntaxYsexpr_slot_variable);
  } else {
    T265 = YPfalse;
  }
  T267 = fun_sexpr_slot_variable_110;
  T264 = CALL2(1,VARREF(YPdefine_method),T265,T267);
  VARSET(YsyntaxYsexpr_slot_variable,T264);
  lit_188 = YPPsym((P)"sexpr-slot-init");
  lit_189 = YPPsym((P)"nul");
  T270 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T269 = fun_sexpr_slot_init_111 = YPmet(FUNCODEREF(fun_sexpr_slot_init_111),LITREF(lit_188),T270,ENVNUL,PNUL,YPfalse);
  T274 = BOUNDP(YsyntaxYsexpr_slot_init);
  if (T274 != YPfalse) {
    T273 = VARREF(YsyntaxYsexpr_slot_init);
  } else {
    T273 = YPfalse;
  }
  T275 = fun_sexpr_slot_init_111;
  T272 = CALL2(1,VARREF(YPdefine_method),T273,T275);
  T271 = VARSET(YsyntaxYsexpr_slot_init,T272);
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
  lit_190 = YPPsym((P)"sexpr-make-getter");
  lit_191 = YPPsym((P)"_x");
  lit_192 = YPPsym((P)"slot-value");
  T0 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_86)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_make_getter_112 = YPmet(FUNCODEREF(fun_sexpr_make_getter_112),LITREF(lit_190),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YsyntaxYsexpr_make_getter);
  if (T3 != YPfalse) {
    T2 = VARREF(YsyntaxYsexpr_make_getter);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_make_getter_112;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YsyntaxYsexpr_make_getter,T1);
  lit_193 = YPPsym((P)"sexpr-make-setter");
  lit_194 = YPPsym((P)"slot-type");
  lit_195 = YPPsym((P)"_z");
  lit_196 = YPPsym((P)"slot-value-setter");
  T5 = YPsig(YPPlist(3,LITREF(lit_59),LITREF(lit_86),LITREF(lit_194)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_make_setter_113 = YPmet(FUNCODEREF(fun_sexpr_make_setter_113),LITREF(lit_193),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YsyntaxYsexpr_make_setter);
  if (T8 != YPfalse) {
    T7 = VARREF(YsyntaxYsexpr_make_setter);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_make_setter_113;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YsyntaxYsexpr_make_setter,T6);
  lit_197 = YPPsym((P)"sexpr-make-setter-name");
  lit_198 = YPsb((P)"-setter");
  T10 = YPsig(YPPlist(1,LITREF(lit_59)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_make_setter_name_114 = YPmet(FUNCODEREF(fun_sexpr_make_setter_name_114),LITREF(lit_197),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YsyntaxYsexpr_make_setter_name);
  if (T13 != YPfalse) {
    T12 = VARREF(YsyntaxYsexpr_make_setter_name);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_sexpr_make_setter_name_114;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YsyntaxYsexpr_make_setter_name,T11);
  lit_199 = YPPsym((P)"sexpr-macro?");
  T15 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_macroQ_115 = YPmet(FUNCODEREF(fun_sexpr_macroQ_115),LITREF(lit_199),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YsyntaxYsexpr_macroQ);
  if (T18 != YPfalse) {
    T17 = VARREF(YsyntaxYsexpr_macroQ);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_sexpr_macroQ_115;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YsyntaxYsexpr_macroQ,T16);
  lit_200 = YPPsym((P)"macro-expand");
  VARSET(YsyntaxYDsexpr_macro_expand_tag,LITREF(lit_200));
  lit_201 = YPPsym((P)"sexpr-macro-expand?");
  T20 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_macro_expandQ_116 = YPmet(FUNCODEREF(fun_sexpr_macro_expandQ_116),LITREF(lit_201),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YsyntaxYsexpr_macro_expandQ);
  if (T23 != YPfalse) {
    T22 = VARREF(YsyntaxYsexpr_macro_expandQ);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_sexpr_macro_expandQ_116;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YsyntaxYsexpr_macro_expandQ,T21);
  lit_202 = YPPsym((P)"mif");
  VARSET(YsyntaxYDsexpr_syntax_if_tag,LITREF(lit_202));
  lit_203 = YPPsym((P)"sexpr-make-syntax-if");
  lit_204 = YPPsym((P)"pat");
  T25 = YPsig(YPPlist(4,LITREF(lit_204),LITREF(lit_1),LITREF(lit_67),LITREF(lit_68)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  fun_sexpr_make_syntax_if_117 = YPmet(FUNCODEREF(fun_sexpr_make_syntax_if_117),LITREF(lit_203),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YsyntaxYsexpr_make_syntax_if);
  if (T28 != YPfalse) {
    T27 = VARREF(YsyntaxYsexpr_make_syntax_if);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_sexpr_make_syntax_if_117;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YsyntaxYsexpr_make_syntax_if,T26);
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
  T30 = YPsig(YPPlist(1,LITREF(lit_213)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YsyntaxYsexpr_expand_backquote = YPmet(FUNCODEREF(YsyntaxYsexpr_expand_backquote),LITREF(lit_212),T30,ENVNUL,PNUL,YPfalse);
  T31 = YsyntaxYsexpr_expand_backquote;
  VARSET(YsyntaxYsexpr_expand_backquote,T31);
  lit_215 = YPPsym((P)"sexpr-build-backquote-expander");
  T32 = YPsig(YPPlist(1,LITREF(lit_213)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_build_backquote_expander_119 = YPmet(FUNCODEREF(fun_sexpr_build_backquote_expander_119),LITREF(lit_215),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YsyntaxYsexpr_build_backquote_expander);
  if (T35 != YPfalse) {
    T34 = VARREF(YsyntaxYsexpr_build_backquote_expander);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_sexpr_build_backquote_expander_119;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YsyntaxYsexpr_build_backquote_expander,T33);
  lit_216 = YPPsym((P)"sexpr-unquote?");
  lit_217 = YPPsym((P)"unquote");
  T37 = YPsig(YPPlist(1,LITREF(lit_213)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unquoteQ_120 = YPmet(FUNCODEREF(fun_sexpr_unquoteQ_120),LITREF(lit_216),T37,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YsyntaxYsexpr_unquoteQ);
  if (T40 != YPfalse) {
    T39 = VARREF(YsyntaxYsexpr_unquoteQ);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_sexpr_unquoteQ_120;
  T38 = CALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YsyntaxYsexpr_unquoteQ,T38);
  lit_218 = YPPsym((P)"sexpr-unquote-splicing?");
  lit_219 = YPPsym((P)"unquote-splicing");
  T42 = YPsig(YPPlist(1,LITREF(lit_213)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unquote_splicingQ_121 = YPmet(FUNCODEREF(fun_sexpr_unquote_splicingQ_121),LITREF(lit_218),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YsyntaxYsexpr_unquote_splicingQ);
  if (T45 != YPfalse) {
    T44 = VARREF(YsyntaxYsexpr_unquote_splicingQ);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_sexpr_unquote_splicingQ_121;
  T43 = CALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YsyntaxYsexpr_unquote_splicingQ,T43);
  lit_220 = YPPsym((P)"sexpr-backquote?");
  T47 = YPsig(YPPlist(1,LITREF(lit_213)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_backquoteQ_122 = YPmet(FUNCODEREF(fun_sexpr_backquoteQ_122),LITREF(lit_220),T47,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(YsyntaxYsexpr_backquoteQ);
  if (T50 != YPfalse) {
    T49 = VARREF(YsyntaxYsexpr_backquoteQ);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_sexpr_backquoteQ_122;
  T48 = CALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YsyntaxYsexpr_backquoteQ,T48);
  lit_221 = YPPsym((P)"sexpr-atom?");
  T52 = YPsig(YPPlist(1,LITREF(lit_213)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_atomQ_123 = YPmet(FUNCODEREF(fun_sexpr_atomQ_123),LITREF(lit_221),T52,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YsyntaxYsexpr_atomQ);
  if (T55 != YPfalse) {
    T54 = VARREF(YsyntaxYsexpr_atomQ);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_sexpr_atomQ_123;
  T53 = CALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YsyntaxYsexpr_atomQ,T53);
  lit_222 = YPPsym((P)"nreconc");
  lit_223 = YPPsym((P)"y");
  T57 = YPsig(YPPlist(2,LITREF(lit_213),LITREF(lit_223)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_nreconc_124 = YPmet(FUNCODEREF(fun_nreconc_124),LITREF(lit_222),T57,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(YsyntaxYnreconc);
  if (T60 != YPfalse) {
    T59 = VARREF(YsyntaxYnreconc);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_nreconc_124;
  T58 = CALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YsyntaxYnreconc,T58);
  lit_224 = YPPsym((P)"bq-process");
  lit_225 = YPsb((P)"UNQUOTE-SPLICING %= AFTER BQ");
  lit_226 = YPPsym((P)"p");
  lit_227 = YPPsym((P)"q");
  lit_228 = YPsb((P)"Malformed ,%=");
  lit_229 = YPsb((P)"Dotted ,@%=");
  T64 = YPsig(YPPlist(2,LITREF(lit_226),LITREF(lit_227)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_125 = YPmet(FUNCODEREF(fun_loop_125),LITREF(lit_143),T64,ENVNUL,PNUL,YPfalse);
  T63 = YPsig(YPPlist(1,LITREF(lit_80)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_126 = YPmet(FUNCODEREF(fun_126),YPfalse,T63,ENVNUL,PNUL,YPfalse);
  T62 = YPsig(YPPlist(1,LITREF(lit_213)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bq_process_127 = YPmet(FUNCODEREF(fun_bq_process_127),LITREF(lit_224),T62,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YsyntaxYbq_process);
  if (T67 != YPfalse) {
    T66 = VARREF(YsyntaxYbq_process);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_bq_process_127;
  T65 = CALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YsyntaxYbq_process,T65);
  lit_230 = YPPsym((P)"bracket");
  T69 = YPsig(YPPlist(1,LITREF(lit_213)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bracket_128 = YPmet(FUNCODEREF(fun_bracket_128),LITREF(lit_230),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YsyntaxYbracket);
  if (T72 != YPfalse) {
    T71 = VARREF(YsyntaxYbracket);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_bracket_128;
  T70 = CALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YsyntaxYbracket,T70);
  lit_231 = YPPsym((P)"map-tree");
  lit_232 = YPPsym((P)"fn");
  T74 = YPsig(YPPlist(2,LITREF(lit_232),LITREF(lit_213)),YPPlist(2,VARREF(YLfunG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_map_tree_129 = YPmet(FUNCODEREF(fun_map_tree_129),LITREF(lit_231),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YsyntaxYmap_tree);
  if (T77 != YPfalse) {
    T76 = VARREF(YsyntaxYmap_tree);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_map_tree_129;
  T75 = CALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YsyntaxYmap_tree,T75);
  lit_233 = YPPsym((P)"bq-remove-tokens");
  lit_234 = YPPsym((P)"cat");
  lit_235 = YPPsym((P)"cat!");
  lit_236 = YPPsym((P)"list*");
  lit_237 = YPPsym((P)"pair");
  T79 = YPsig(YPPlist(1,LITREF(lit_213)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bq_remove_tokens_130 = YPmet(FUNCODEREF(fun_bq_remove_tokens_130),LITREF(lit_233),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YsyntaxYbq_remove_tokens);
  if (T82 != YPfalse) {
    T81 = VARREF(YsyntaxYbq_remove_tokens);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_bq_remove_tokens_130;
  T80 = CALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YsyntaxYbq_remove_tokens,T80);
  lit_238 = YPPsym((P)"sexpr-syntax-if?");
  T84 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_syntax_ifQ_131 = YPmet(FUNCODEREF(fun_sexpr_syntax_ifQ_131),LITREF(lit_238),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YsyntaxYsexpr_syntax_ifQ);
  if (T87 != YPfalse) {
    T86 = VARREF(YsyntaxYsexpr_syntax_ifQ);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_sexpr_syntax_ifQ_131;
  T85 = CALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YsyntaxYsexpr_syntax_ifQ,T85);
  lit_239 = YPPsym((P)"sexpr-syntax-if-value");
  T89 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_value_132 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_value_132),LITREF(lit_239),T89,ENVNUL,PNUL,YPfalse);
  T92 = BOUNDP(YsyntaxYsexpr_syntax_if_value);
  if (T92 != YPfalse) {
    T91 = VARREF(YsyntaxYsexpr_syntax_if_value);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_sexpr_syntax_if_value_132;
  T90 = CALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YsyntaxYsexpr_syntax_if_value,T90);
  lit_240 = YPPsym((P)"sexpr-syntax-if-pattern");
  T94 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_pattern_133 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_pattern_133),LITREF(lit_240),T94,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YsyntaxYsexpr_syntax_if_pattern);
  if (T97 != YPfalse) {
    T96 = VARREF(YsyntaxYsexpr_syntax_if_pattern);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_sexpr_syntax_if_pattern_133;
  T95 = CALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YsyntaxYsexpr_syntax_if_pattern,T95);
  lit_241 = YPPsym((P)"sexpr-syntax-if-then");
  T99 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_then_134 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_then_134),LITREF(lit_241),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(YsyntaxYsexpr_syntax_if_then);
  if (T102 != YPfalse) {
    T101 = VARREF(YsyntaxYsexpr_syntax_if_then);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_sexpr_syntax_if_then_134;
  T100 = CALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YsyntaxYsexpr_syntax_if_then,T100);
  lit_242 = YPPsym((P)"sexpr-syntax-if-else");
  T104 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_else_135 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_else_135),LITREF(lit_242),T104,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(YsyntaxYsexpr_syntax_if_else);
  if (T107 != YPfalse) {
    T106 = VARREF(YsyntaxYsexpr_syntax_if_else);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_sexpr_syntax_if_else_135;
  T105 = CALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YsyntaxYsexpr_syntax_if_else,T105);
  lit_243 = YPPsym((P)"sexpr-pattern-variable?");
  T109 = YPsig(YPPlist(1,LITREF(lit_204)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_pattern_variableQ_136 = YPmet(FUNCODEREF(fun_sexpr_pattern_variableQ_136),LITREF(lit_243),T109,ENVNUL,PNUL,YPfalse);
  T112 = BOUNDP(YsyntaxYsexpr_pattern_variableQ);
  if (T112 != YPfalse) {
    T111 = VARREF(YsyntaxYsexpr_pattern_variableQ);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_sexpr_pattern_variableQ_136;
  T110 = CALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(YsyntaxYsexpr_pattern_variableQ,T110);
  lit_244 = YPPsym((P)"sexpr-pattern-variable-name");
  T114 = YPsig(YPPlist(1,LITREF(lit_204)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_pattern_variable_name_137 = YPmet(FUNCODEREF(fun_sexpr_pattern_variable_name_137),LITREF(lit_244),T114,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YsyntaxYsexpr_pattern_variable_name);
  if (T117 != YPfalse) {
    T116 = VARREF(YsyntaxYsexpr_pattern_variable_name);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_sexpr_pattern_variable_name_137;
  T115 = CALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YsyntaxYsexpr_pattern_variable_name,T115);
  lit_245 = YPPsym((P)"sexpr-bind-pattern-variables");
  T120 = YPsig(YPPlist(1,LITREF(lit_204)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_col_138 = YPmet(FUNCODEREF(fun_col_138),LITREF(lit_158),T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(YPPlist(1,LITREF(lit_204)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_bind_pattern_variables_139 = YPmet(FUNCODEREF(fun_sexpr_bind_pattern_variables_139),LITREF(lit_245),T119,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YsyntaxYsexpr_bind_pattern_variables);
  if (T123 != YPfalse) {
    T122 = VARREF(YsyntaxYsexpr_bind_pattern_variables);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_sexpr_bind_pattern_variables_139;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YsyntaxYsexpr_bind_pattern_variables,T121);
  lit_246 = YPPsym((P)"sexpr-make-macro-function");
  T125 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_make_macro_function_140 = YPmet(FUNCODEREF(fun_sexpr_make_macro_function_140),LITREF(lit_246),T125,ENVNUL,PNUL,YPfalse);
  T128 = BOUNDP(YsyntaxYsexpr_make_macro_function);
  if (T128 != YPfalse) {
    T127 = VARREF(YsyntaxYsexpr_make_macro_function);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_sexpr_make_macro_function_140;
  T126 = CALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YsyntaxYsexpr_make_macro_function,T126);
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
  {"reduce+", &module_info_runtime, "reduce+"},
  {"map", &module_info_macros, "map"},
  {"nul", &module_info_boot, "nul"},
  {"swapf", &module_info_macros, "swapf"},
  {"curry", &module_info_runtime, "curry"},
  {"%i<", &module_info_boot, "%i<"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"in", &module_info_runtime, "in"},
  {"class-name", &module_info_boot, "class-name"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"always", &module_info_runtime, "always"},
  {"select", &module_info_macros, "select"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"<int>", &module_info_boot, "<int>"},
  {"<num>", &module_info_boot, "<num>"},
  {"map2", &module_info_runtime, "map2"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"%i^", &module_info_boot, "%i^"},
  {"3rd", &module_info_runtime, "3rd"},
  {"read-char", &module_info_runtime, "read-char"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"%i-", &module_info_boot, "%i-"},
  {"loc", &module_info_boot, "loc"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"%selt", &module_info_boot, "%selt"},
  {"port-index", &module_info_runtime, "port-index"},
  {"floor/", &module_info_runtime, "floor/"},
  {"now-key", &module_info_runtime, "now-key"},
  {"%cu", &module_info_boot, "%cu"},
  {"reduce", &module_info_runtime, "reduce"},
  {"%slot", &module_info_boot, "%slot"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"%fu", &module_info_boot, "%fu"},
  {"var-type", &module_info_macros, "var-type"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"dg", &module_info_boot, "dg"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"round/", &module_info_runtime, "round/"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"dss", &module_info_boot, "dss"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"dp", &module_info_boot, "dp"},
  {"assocq", &module_info_runtime, "assocq"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"%sb", &module_info_boot, "%sb"},
  {"<log>", &module_info_boot, "<log>"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"lsh", &module_info_runtime, "lsh"},
  {"ash", &module_info_runtime, "ash"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"identity", &module_info_runtime, "identity"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%with-monitor", &module_info_runtime, "%with-monitor"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"pair", &module_info_macros, "pair"},
  {"dv", &module_info_boot, "dv"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"not", &module_info_boot, "not"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"-", &module_info_runtime, "-"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"abs", &module_info_runtime, "abs"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"to-str", &module_info_runtime, "to-str"},
  {"max", &module_info_runtime, "max"},
  {"%f*", &module_info_boot, "%f*"},
  {"<any>", &module_info_boot, "<any>"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"%su", &module_info_boot, "%su"},
  {"assert", &module_info_macros, "assert"},
  {"*", &module_info_runtime, "*"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"set", &module_info_boot, "set"},
  {"export", &module_info_boot, "export"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"type-class", &module_info_boot, "type-class"},
  {"ddv", &module_info_macros, "ddv"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"<union>", &module_info_boot, "<union>"},
  {"%bb", &module_info_boot, "%bb"},
  {"lst", &module_info_boot, "lst"},
  {"%ft", &module_info_boot, "%ft"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"cat", &module_info_macros, "cat"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"assoc", &module_info_runtime, "assoc"},
  {"isa", &module_info_boot, "isa"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"floor", &module_info_runtime, "floor"},
  {"<error>", &module_info_runtime, "<error>"},
  {"var-name", &module_info_macros, "var-name"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"modulo", &module_info_runtime, "modulo"},
  {"fun", &module_info_boot, "fun"},
  {"pick", &module_info_runtime, "pick"},
  {"collect", &module_info_macros, "collect"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"last", &module_info_runtime, "last"},
  {"or", &module_info_macros, "or"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"low-elt", &module_info_runtime, "low-elt"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"dec", &module_info_macros, "dec"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"<=", &module_info_runtime, "<="},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"format", &module_info_runtime, "format"},
  {"all2?", &module_info_runtime, "all2?"},
  {"@+", &module_info_boot, "@+"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"low-elt-setter", &module_info_runtime, "low-elt-setter"},
  {"seq", &module_info_boot, "seq"},
  {"unexec", &module_info_boot, "unexec"},
  {"%pair", &module_info_boot, "%pair"},
  {"mem?", &module_info_runtime, "mem?"},
  {"apply", &module_info_macros, "apply"},
  {"%c=", &module_info_boot, "%c="},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"remainder", &module_info_runtime, "remainder"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"%vec", &module_info_boot, "%vec"},
  {"%snul", &module_info_boot, "%snul"},
  {"error", &module_info_boot, "error"},
  {"rep", &module_info_boot, "rep"},
  {"logior", &module_info_runtime, "logior"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"rev", &module_info_runtime, "rev"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"<step>", &module_info_runtime, "<step>"},
  {"try", &module_info_boot, "try"},
  {"%i*", &module_info_boot, "%i*"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"<map>", &module_info_runtime, "<map>"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"pos?", &module_info_runtime, "pos?"},
  {"%ib", &module_info_boot, "%ib"},
  {">", &module_info_runtime, ">"},
  {"unless", &module_info_macros, "unless"},
  {"~=", &module_info_runtime, "~="},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"quote", &module_info_boot, "quote"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"sig", &module_info_runtime, "sig"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"logxor", &module_info_runtime, "logxor"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"%fb", &module_info_boot, "%fb"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"cat2", &module_info_runtime, "cat2"},
  {"<", &module_info_runtime, "<"},
  {"pop", &module_info_runtime, "pop"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"default", &module_info_runtime, "default"},
  {"%f=", &module_info_boot, "%f="},
  {"%process-module", &module_info_boot, "%process-module"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"keys", &module_info_runtime, "keys"},
  {"logand", &module_info_runtime, "logand"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"cat!", &module_info_runtime, "cat!"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"len", &module_info_runtime, "len"},
  {"napply", &module_info_macros, "napply"},
  {"and", &module_info_macros, "and"},
  {"=", &module_info_runtime, "="},
  {"tup", &module_info_macros, "tup"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"add", &module_info_runtime, "add"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"add!", &module_info_runtime, "add!"},
  {"%str", &module_info_boot, "%str"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"@<", &module_info_boot, "@<"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"lognot", &module_info_runtime, "lognot"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"%lb", &module_info_boot, "%lb"},
  {"gensym", &module_info_macros, "gensym"},
  {"any2?", &module_info_runtime, "any2?"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"type-object", &module_info_boot, "type-object"},
  {"if", &module_info_boot, "if"},
  {"<class>", &module_info_boot, "<class>"},
  {"popf", &module_info_macros, "popf"},
  {"as", &module_info_runtime, "as"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"fin", &module_info_boot, "fin"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"any?", &module_info_runtime, "any?"},
  {"assq", &module_info_runtime, "assq"},
  {"<type>", &module_info_boot, "<type>"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"push", &module_info_runtime, "push"},
  {"compose", &module_info_runtime, "compose"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"fill", &module_info_runtime, "fill"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"out", &module_info_runtime, "out"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"%iu", &module_info_boot, "%iu"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"%slen", &module_info_boot, "%slen"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"char->ascii", &module_info_runtime, "char->ascii"},
  {"from", &module_info_runtime, "from"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"dc", &module_info_boot, "dc"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"%iv", &module_info_boot, "%iv"},
  {"first-then", &module_info_runtime, "first-then"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"false-or", &module_info_runtime, "false-or"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"zero?", &module_info_runtime, "zero?"},
  {"pushf", &module_info_macros, "pushf"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"address-of", &module_info_runtime, "address-of"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"alter", &module_info_runtime, "alter"},
  {"all?", &module_info_runtime, "all?"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"sym-name", &module_info_boot, "sym-name"},
  {">=", &module_info_runtime, ">="},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"elt", &module_info_macros, "elt"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"%c<", &module_info_boot, "%c<"},
  {"let", &module_info_boot, "let"},
  {"<port>", &module_info_runtime, "<port>"},
  {"<list>", &module_info_runtime, "<list>"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"%i+", &module_info_boot, "%i+"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"newline", &module_info_runtime, "newline"},
  {"%raw", &module_info_boot, "%raw"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"vec", &module_info_runtime, "vec"},
  {"%im", &module_info_boot, "%im"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"<str>", &module_info_boot, "<str>"},
  {"dlet", &module_info_macros, "dlet"},
  {"str", &module_info_runtime, "str"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"next-method", &module_info_macros, "next-method"},
  {"app-args", &module_info_runtime, "app-args"},
  {"bound?", &module_info_boot, "bound?"},
  {"%f+", &module_info_boot, "%f+"},
  {"~==", &module_info_runtime, "~=="},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"read", &module_info_runtime, "read"},
  {"rev!", &module_info_runtime, "rev!"},
  {"1st", &module_info_runtime, "1st"},
  {"write-string", &module_info_runtime, "write-string"},
  {"pos", &module_info_runtime, "pos"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"do3", &module_info_runtime, "do3"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"%lu", &module_info_boot, "%lu"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"force-output", &module_info_runtime, "force-output"},
  {"do", &module_info_runtime, "do"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"case", &module_info_macros, "case"},
  {"for", &module_info_macros, "for"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"round", &module_info_runtime, "round"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"ascii-whitespaces", &module_info_runtime, "ascii-whitespaces"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"<met>", &module_info_boot, "<met>"},
  {"nul?", &module_info_runtime, "nul?"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"@olen", &module_info_boot, "@olen"},
  {"fab", &module_info_runtime, "fab"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"%it/", &module_info_boot, "%it/"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"list", &module_info_runtime, "list"},
  {"head", &module_info_boot, "head"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"collected", &module_info_macros, "collected"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"even?", &module_info_runtime, "even?"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"use", &module_info_boot, "use"},
  {"df", &module_info_boot, "df"},
  {"buf", &module_info_runtime, "buf"},
  {"object-class", &module_info_boot, "object-class"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"assoc-value", &module_info_runtime, "assoc-value"},
  {"dm", &module_info_boot, "dm"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"when", &module_info_macros, "when"},
  {"neg?", &module_info_runtime, "neg?"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"%velt", &module_info_boot, "%velt"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"empty", &module_info_runtime, "empty"},
  {"collecting", &module_info_macros, "collecting"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"%untag", &module_info_boot, "%untag"},
  {"%i=", &module_info_boot, "%i="},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"from-above", &module_info_runtime, "from-above"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"t<", &module_info_runtime, "t<"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"type-error", &module_info_boot, "type-error"},
  {"do2", &module_info_runtime, "do2"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"slot", &module_info_boot, "slot"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"from-below", &module_info_runtime, "from-below"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"assqn", &module_info_runtime, "assqn"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"2nd", &module_info_runtime, "2nd"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"+", &module_info_runtime, "+"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"ct", &module_info_boot, "ct"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"tail", &module_info_boot, "tail"},
  {"%f<", &module_info_boot, "%f<"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"==", &module_info_macros, "=="},
  {"write-char", &module_info_runtime, "write-char"},
  {"%i!", &module_info_boot, "%i!"},
  {"opf", &module_info_macros, "opf"},
  {"min", &module_info_runtime, "min"},
  {"/", &module_info_runtime, "/"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"t=", &module_info_runtime, "t="},
  {"fab-map", &module_info_runtime, "fab-map"},
  {"from-by", &module_info_runtime, "from-by"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"truncate", &module_info_runtime, "truncate"},
  {"fabs", &module_info_runtime, "fabs"},
  {"<range>", &module_info_runtime, "<range>"},
  {"<col>", &module_info_boot, "<col>"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"@==", &module_info_boot, "@=="},
  {"from-to", &module_info_runtime, "from-to"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"del-key", &module_info_runtime, "del-key"},
  {"del", &module_info_runtime, "del"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"lab", &module_info_boot, "lab"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"%cb", &module_info_boot, "%cb"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"mif", &module_info_boot, "mif"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"odd?", &module_info_runtime, "odd?"},
  {"nil", &module_info_boot, "nil"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"t+", &module_info_runtime, "t+"},
  {"inc", &module_info_macros, "inc"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"sub", &module_info_runtime, "sub"},
  {"%f/", &module_info_boot, "%f/"},
  {"elt-or", &module_info_runtime, "elt-or"},
  {"%f-", &module_info_boot, "%f-"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"isa?", &module_info_boot, "isa?"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"ds", &module_info_boot, "ds"},
  {"neg", &module_info_runtime, "neg"},
  {"empty?", &module_info_macros, "empty?"},
  {"%i?", &module_info_boot, "%i?"},
  {"%isa", &module_info_boot, "%isa"},
  {"%i&", &module_info_boot, "%i&"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"find-key", &module_info_runtime, "find-key"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sexpr-block-name", &YsyntaxYsexpr_block_name},
  {"sexpr-tagged-list?", &YsyntaxYsexpr_tagged_listQ},
  {"sexpr-slot-object", &YsyntaxYsexpr_slot_object},
  {"sexpr-unwind-protect?", &YsyntaxYsexpr_unwind_protectQ},
  {"sexpr-no-operands?", &YsyntaxYsexpr_no_operandsQ},
  {"bracket", &YsyntaxYbracket},
  {"$sexpr-isa-tag", &YsyntaxYDsexpr_isa_tag},
  {"sexpr-build-backquote-expander", &YsyntaxYsexpr_build_backquote_expander},
  {"sexpr-monitor-info", &YsyntaxYsexpr_monitor_info},
  {"sexpr-pattern-variable?", &YsyntaxYsexpr_pattern_variableQ},
  {"find-option", &YsyntaxYfind_option},
  {"$sexpr-syntax-if-tag", &YsyntaxYDsexpr_syntax_if_tag},
  {"sexpr-block-body", &YsyntaxYsexpr_block_body},
  {"sexpr-if?", &YsyntaxYsexpr_ifQ},
  {"*unique-name-counter*", &YsyntaxYTunique_name_counterT},
  {"sexpr-new-unique-name-counter!", &YsyntaxYsexpr_new_unique_name_counterX},
  {"*bq-append*", &YsyntaxYTbq_appendT},
  {"$sexpr-define-generic-tag", &YsyntaxYDsexpr_define_generic_tag},
  {"sexpr-make-getter", &YsyntaxYsexpr_make_getter},
  {"sexpr-first-operand", &YsyntaxYsexpr_first_operand},
  {"$sexpr-quote-tag", &YsyntaxYDsexpr_quote_tag},
  {"sexpr-loc-bound-signatures", &YsyntaxYsexpr_loc_bound_signatures},
  {"sexpr-definition?", &YsyntaxYsexpr_definitionQ},
  {"$sexpr-set-tag", &YsyntaxYDsexpr_set_tag},
  {"sexpr-unquote?", &YsyntaxYsexpr_unquoteQ},
  {"sexpr-make-method", &YsyntaxYsexpr_make_method},
  {"sexpr-slot-variable", &YsyntaxYsexpr_slot_variable},
  {"eval", &YsyntaxYeval},
  {"$sexpr-define-class-tag", &YsyntaxYDsexpr_define_class_tag},
  {"sexpr-monitor?", &YsyntaxYsexpr_monitorQ},
  {"sexpr-begin-actions", &YsyntaxYsexpr_begin_actions},
  {"$sexpr-define-tag", &YsyntaxYDsexpr_define_tag},
  {"sexpr-function-parameters", &YsyntaxYsexpr_function_parameters},
  {"sexpr-definition-value", &YsyntaxYsexpr_definition_value},
  {"sexpr-make-quote", &YsyntaxYsexpr_make_quote},
  {"sexpr-rest-operands", &YsyntaxYsexpr_rest_operands},
  {"bq-process", &YsyntaxYbq_process},
  {"sexpr-function-definition-variable", &YsyntaxYsexpr_function_definition_variable},
  {"sexpr-loc-bound-names", &YsyntaxYsexpr_loc_bound_names},
  {"sexpr-loc-bound-bodies", &YsyntaxYsexpr_loc_bound_bodies},
  {"sexpr-method?", &YsyntaxYsexpr_methodQ},
  {"sexpr-slot-init", &YsyntaxYsexpr_slot_init},
  {"sexpr-first-exp", &YsyntaxYsexpr_first_exp},
  {"sexpr-make-if", &YsyntaxYsexpr_make_if},
  {"sexpr-make-setter", &YsyntaxYsexpr_make_setter},
  {"sexpr-forward-primitive?", &YsyntaxYsexpr_forward_primitiveQ},
  {"sexpr-make-setter-name", &YsyntaxYsexpr_make_setter_name},
  {"sexpr-isa-parent", &YsyntaxYsexpr_isa_parent},
  {"sexpr-make-application", &YsyntaxYsexpr_make_application},
  {"sexpr-rest-exps", &YsyntaxYsexpr_rest_exps},
  {"sexpr-signature-parameters", &YsyntaxYsexpr_signature_parameters},
  {"sexpr-operator", &YsyntaxYsexpr_operator},
  {"sexpr-loc-raw-body", &YsyntaxYsexpr_loc_raw_body},
  {"sexpr-method-parameters", &YsyntaxYsexpr_method_parameters},
  {"sexpr-last-exp?", &YsyntaxYsexpr_last_expQ},
  {"nreconc", &YsyntaxYnreconc},
  {"sexpr-sequence->begin", &YsyntaxYsexpr_sequence_Gbegin},
  {"sexpr-let->combination", &YsyntaxYsexpr_let_Gcombination},
  {"sexpr-variable-type", &YsyntaxYsexpr_variable_type},
  {"$sexpr-method-tag", &YsyntaxYDsexpr_method_tag},
  {"sexpr-isa-slot-inits", &YsyntaxYsexpr_isa_slot_inits},
  {"sexpr-if-else", &YsyntaxYsexpr_if_else},
  {"sexpr-unwind-protect-protected-form", &YsyntaxYsexpr_unwind_protect_protected_form},
  {"sexpr-pattern-variable-name", &YsyntaxYsexpr_pattern_variable_name},
  {"sexpr-method-value", &YsyntaxYsexpr_method_value},
  {"sexpr-loc-body", &YsyntaxYsexpr_loc_body},
  {"$sexpr-define-method-tag", &YsyntaxYDsexpr_define_method_tag},
  {"$sexpr-quasiquote-tag", &YsyntaxYDsexpr_quasiquote_tag},
  {"sexpr-monitor-type", &YsyntaxYsexpr_monitor_type},
  {"$sexpr-locals-tag", &YsyntaxYDsexpr_locals_tag},
  {"sexpr-if-test", &YsyntaxYsexpr_if_test},
  {"sexpr-unwind-protect-cleanup-forms", &YsyntaxYsexpr_unwind_protect_cleanup_forms},
  {"sexpr-make-begin", &YsyntaxYsexpr_make_begin},
  {"$sexpr-define-function-tag", &YsyntaxYDsexpr_define_function_tag},
  {"sexpr-define-class?", &YsyntaxYsexpr_define_classQ},
  {"sexpr-definition-variable", &YsyntaxYsexpr_definition_variable},
  {"sexpr-operands", &YsyntaxYsexpr_operands},
  {"sexpr-unquote-splicing?", &YsyntaxYsexpr_unquote_splicingQ},
  {"sexpr-method-body", &YsyntaxYsexpr_method_body},
  {"sexpr-iterate?", &YsyntaxYsexpr_iterateQ},
  {"sexpr-isa-init-slots", &YsyntaxYsexpr_isa_init_slots},
  {"bq-remove-tokens", &YsyntaxYbq_remove_tokens},
  {"sexpr-application?", &YsyntaxYsexpr_applicationQ},
  {"sexpr-syntax-if?", &YsyntaxYsexpr_syntax_ifQ},
  {"sexpr-monitor-expand", &YsyntaxYsexpr_monitor_expand},
  {"sexpr-syntax-definition?", &YsyntaxYsexpr_syntax_definitionQ},
  {"sexpr-function-value", &YsyntaxYsexpr_function_value},
  {"sexpr-if-then", &YsyntaxYsexpr_if_then},
  {"sexpr-text-of-quotation", &YsyntaxYsexpr_text_of_quotation},
  {"sexpr-bind-pattern-variables", &YsyntaxYsexpr_bind_pattern_variables},
  {"sexpr-expand-backquote", &YsyntaxYsexpr_expand_backquote},
  {"*bq-quote*", &YsyntaxYTbq_quoteT},
  {"sexpr-method-signature", &YsyntaxYsexpr_method_signature},
  {"$sexpr-iterate-tag", &YsyntaxYDsexpr_iterate_tag},
  {"sexpr-syntax-definition-variable", &YsyntaxYsexpr_syntax_definition_variable},
  {"$sexpr-unwind-protect-tag", &YsyntaxYDsexpr_unwind_protect_tag},
  {"---main-2---", NULL},
  {"map-tree", &YsyntaxYmap_tree},
  {"sexpr-make-macro-function", &YsyntaxYsexpr_make_macro_function},
  {"sexpr-self-evaluating?", &YsyntaxYsexpr_self_evaluatingQ},
  {"sexpr-isa-init-values", &YsyntaxYsexpr_isa_init_values},
  {"sexpr-unique-name", &YsyntaxYsexpr_unique_name},
  {"sexpr-syntax-definition-value", &YsyntaxYsexpr_syntax_definition_value},
  {"sexpr-assignment-value", &YsyntaxYsexpr_assignment_value},
  {"sexpr-macro?", &YsyntaxYsexpr_macroQ},
  {"sexpr-signature-value", &YsyntaxYsexpr_signature_value},
  {"sexpr-variable-name", &YsyntaxYsexpr_variable_name},
  {"$sexpr-define-syntax-tag", &YsyntaxYDsexpr_define_syntax_tag},
  {"sexpr-assignment?", &YsyntaxYsexpr_assignmentQ},
  {"$sexpr-if-tag", &YsyntaxYDsexpr_if_tag},
  {"sexpr-let?", &YsyntaxYsexpr_letQ},
  {"sexpr-function-definition?", &YsyntaxYsexpr_function_definitionQ},
  {"$sexpr-macro-expand-tag", &YsyntaxYDsexpr_macro_expand_tag},
  {"sexpr-iterate-signature", &YsyntaxYsexpr_iterate_signature},
  {"sexpr-make-syntax-if", &YsyntaxYsexpr_make_syntax_if},
  {"sexpr-macro-expand?", &YsyntaxYsexpr_macro_expandQ},
  {"$sexpr-bind-exit-tag", &YsyntaxYDsexpr_bind_exit_tag},
  {"sexpr-make-anonymous-method", &YsyntaxYsexpr_make_anonymous_method},
  {"sexpr-function-body", &YsyntaxYsexpr_function_body},
  {"sexpr-backquote?", &YsyntaxYsexpr_backquoteQ},
  {"sexpr-define-class-parents", &YsyntaxYsexpr_define_class_parents},
  {"sexpr-assignment-variable", &YsyntaxYsexpr_assignment_variable},
  {"sexpr-iterate-name", &YsyntaxYsexpr_iterate_name},
  {"sexpr-iterate-inits", &YsyntaxYsexpr_iterate_inits},
  {"$sexpr-let-tag", &YsyntaxYDsexpr_let_tag},
  {"sexpr-syntax-if-value", &YsyntaxYsexpr_syntax_if_value},
  {"sexpr-variable?", &YsyntaxYsexpr_variableQ},
  {"sexpr-slot?", &YsyntaxYsexpr_slotQ},
  {"*bq-list*", &YsyntaxYTbq_listT},
  {"$sexpr-slot-tag", &YsyntaxYDsexpr_slot_tag},
  {"*comma-atsign*", &YsyntaxYTcomma_atsignT},
  {"sexpr-block?", &YsyntaxYsexpr_blockQ},
  {"sexpr-iterate-body", &YsyntaxYsexpr_iterate_body},
  {"sexpr-let-values", &YsyntaxYsexpr_let_values},
  {"sexpr-syntax-if-pattern", &YsyntaxYsexpr_syntax_if_pattern},
  {"*bq-nconc*", &YsyntaxYTbq_nconcT},
  {"$sexpr-macro-tag", &YsyntaxYDsexpr_macro_tag},
  {"$sexpr-values-tag", &YsyntaxYDsexpr_values_tag},
  {"sexpr-iterate->loc", &YsyntaxYsexpr_iterate_Gloc},
  {"sexpr-method-definition?", &YsyntaxYsexpr_method_definitionQ},
  {"sexpr-monitor-test", &YsyntaxYsexpr_monitor_test},
  {"*bq-list**", &YsyntaxYTbq_listTT},
  {"sexpr-begin?", &YsyntaxYsexpr_beginQ},
  {"sexpr-let-bound-variables", &YsyntaxYsexpr_let_bound_variables},
  {"sexpr-monitor-body", &YsyntaxYsexpr_monitor_body},
  {"sexpr-syntax-if-then", &YsyntaxYsexpr_syntax_if_then},
  {"sexpr-let-body", &YsyntaxYsexpr_let_body},
  {"sexpr-loc?", &YsyntaxYsexpr_locQ},
  {"<name>", &YsyntaxYLnameG},
  {"sexpr-function-signature", &YsyntaxYsexpr_function_signature},
  {"sexpr-quoted?", &YsyntaxYsexpr_quotedQ},
  {"sexpr-function-definition-value", &YsyntaxYsexpr_function_definition_value},
  {"sexpr-generic-definition?", &YsyntaxYsexpr_generic_definitionQ},
  {"---main-1---", NULL},
  {"sexpr-isa?", &YsyntaxYsexpr_isaQ},
  {"sexpr-syntax-if-else", &YsyntaxYsexpr_syntax_if_else},
  {"sexpr-let-names+values", &YsyntaxYsexpr_let_namesAvalues},
  {"$sexpr-begin-tag", &YsyntaxYDsexpr_begin_tag},
  {"$sexpr-monitor-tag", &YsyntaxYDsexpr_monitor_tag},
  {"*bq-clobberable*", &YsyntaxYTbq_clobberableT},
  {"---main-0---", NULL},
  {"sexpr-atom?", &YsyntaxYsexpr_atomQ},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"sexpr-block-name", "sexpr-block-name"},
  {"sexpr-slot-object", "sexpr-slot-object"},
  {"$sexpr-isa-tag", "$sexpr-isa-tag"},
  {"$sexpr-syntax-if-tag", "$sexpr-syntax-if-tag"},
  {"sexpr-signature-value", "sexpr-signature-value"},
  {"sexpr-block-body", "sexpr-block-body"},
  {"$sexpr-define-generic-tag", "$sexpr-define-generic-tag"},
  {"sexpr-make-getter", "sexpr-make-getter"},
  {"$sexpr-quasiquote-tag", "$sexpr-quasiquote-tag"},
  {"$sexpr-quote-tag", "$sexpr-quote-tag"},
  {"sexpr-loc-bound-signatures", "sexpr-loc-bound-signatures"},
  {"$sexpr-set-tag", "$sexpr-set-tag"},
  {"sexpr-unquote?", "sexpr-unquote?"},
  {"sexpr-slot-variable", "sexpr-slot-variable"},
  {"eval", "eval"},
  {"$sexpr-define-class-tag", "$sexpr-define-class-tag"},
  {"$sexpr-define-tag", "$sexpr-define-tag"},
  {"sexpr-definition-value", "sexpr-definition-value"},
  {"sexpr-if-else", "sexpr-if-else"},
  {"sexpr-function-definition-variable", "sexpr-function-definition-variable"},
  {"sexpr-loc-bound-names", "sexpr-loc-bound-names"},
  {"sexpr-loc-bound-bodies", "sexpr-loc-bound-bodies"},
  {"sexpr-slot-init", "sexpr-slot-init"},
  {"sexpr-make-setter", "sexpr-make-setter"},
  {"sexpr-forward-primitive?", "sexpr-forward-primitive?"},
  {"sexpr-make-setter-name", "sexpr-make-setter-name"},
  {"sexpr-isa-parent", "sexpr-isa-parent"},
  {"sexpr-make-application", "sexpr-make-application"},
  {"sexpr-signature-parameters", "sexpr-signature-parameters"},
  {"sexpr-loc-raw-body", "sexpr-loc-raw-body"},
  {"sexpr-sequence->begin", "sexpr-sequence->begin"},
  {"sexpr-let->combination", "sexpr-let->combination"},
  {"sexpr-variable-type", "sexpr-variable-type"},
  {"sexpr-isa-slot-inits", "sexpr-isa-slot-inits"},
  {"sexpr-unwind-protect-protected-form", "sexpr-unwind-protect-protected-form"},
  {"$sexpr-define-method-tag", "$sexpr-define-method-tag"},
  {"$sexpr-locals-tag", "$sexpr-locals-tag"},
  {"sexpr-if-test", "sexpr-if-test"},
  {"sexpr-unwind-protect-cleanup-forms", "sexpr-unwind-protect-cleanup-forms"},
  {"sexpr-make-begin", "sexpr-make-begin"},
  {"$sexpr-define-function-tag", "$sexpr-define-function-tag"},
  {"sexpr-define-class?", "sexpr-define-class?"},
  {"sexpr-definition-variable", "sexpr-definition-variable"},
  {"sexpr-operands", "sexpr-operands"},
  {"sexpr-unquote-splicing?", "sexpr-unquote-splicing?"},
  {"sexpr-method-body", "sexpr-method-body"},
  {"sexpr-isa-init-slots", "sexpr-isa-init-slots"},
  {"sexpr-monitor-expand", "sexpr-monitor-expand"},
  {"sexpr-if-then", "sexpr-if-then"},
  {"sexpr-text-of-quotation", "sexpr-text-of-quotation"},
  {"sexpr-bind-pattern-variables", "sexpr-bind-pattern-variables"},
  {"sexpr-expand-backquote", "sexpr-expand-backquote"},
  {"sexpr-method-signature", "sexpr-method-signature"},
  {"$sexpr-iterate-tag", "$sexpr-iterate-tag"},
  {"sexpr-syntax-definition-variable", "sexpr-syntax-definition-variable"},
  {"$sexpr-unwind-protect-tag", "$sexpr-unwind-protect-tag"},
  {"sexpr-make-macro-function", "sexpr-make-macro-function"},
  {"sexpr-isa-init-values", "sexpr-isa-init-values"},
  {"sexpr-syntax-definition-value", "sexpr-syntax-definition-value"},
  {"sexpr-assignment-value", "sexpr-assignment-value"},
  {"sexpr-variable-name", "sexpr-variable-name"},
  {"$sexpr-define-syntax-tag", "$sexpr-define-syntax-tag"},
  {"$sexpr-if-tag", "$sexpr-if-tag"},
  {"$sexpr-macro-expand-tag", "$sexpr-macro-expand-tag"},
  {"sexpr-operator", "sexpr-operator"},
  {"$sexpr-bind-exit-tag", "$sexpr-bind-exit-tag"},
  {"sexpr-make-anonymous-method", "sexpr-make-anonymous-method"},
  {"sexpr-function-body", "sexpr-function-body"},
  {"sexpr-define-class-parents", "sexpr-define-class-parents"},
  {"sexpr-assignment-variable", "sexpr-assignment-variable"},
  {"$sexpr-let-tag", "$sexpr-let-tag"},
  {"sexpr-syntax-if-value", "sexpr-syntax-if-value"},
  {"sexpr-variable?", "sexpr-variable?"},
  {"$sexpr-slot-tag", "$sexpr-slot-tag"},
  {"$sexpr-method-tag", "$sexpr-method-tag"},
  {"sexpr-syntax-if-pattern", "sexpr-syntax-if-pattern"},
  {"sexpr-iterate->loc", "sexpr-iterate->loc"},
  {"sexpr-syntax-if-then", "sexpr-syntax-if-then"},
  {"sexpr-function-signature", "sexpr-function-signature"},
  {"sexpr-function-definition-value", "sexpr-function-definition-value"},
  {"sexpr-syntax-if-else", "sexpr-syntax-if-else"},
  {"$sexpr-begin-tag", "$sexpr-begin-tag"},
  {"$sexpr-monitor-tag", "$sexpr-monitor-tag"},
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
