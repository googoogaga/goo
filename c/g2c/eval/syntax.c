/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: syntax */

EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YruntimeYfab,"runtime","fab");
DEF(YsyntaxYsexpr_blockQ,"syntax","sexpr-block?");
DEF(YsyntaxYsexpr_make_getter,"syntax","sexpr-make-getter");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
DEF(YsyntaxYsexpr_atomQ,"syntax","sexpr-atom?");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
DEF(YsyntaxYnreconc,"syntax","nreconc");
DEF(YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
EXT(YruntimeYempty,"runtime","empty");
EXT(YruntimeYvec,"runtime","vec");
EXT(YLflatG,"boot","<flat>");
EXT(Yhead,"boot","head");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(Yfind_getter,"boot","find-getter");
DEF(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
DEF(YsyntaxYsexpr_define_classQ,"syntax","sexpr-define-class?");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
DEF(YsyntaxYsexpr_method_definitionQ,"syntax","sexpr-method-definition?");
EXT(YruntimeYpos,"runtime","pos");
EXT(Yobject_class,"boot","object-class");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
DEF(YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
EXT(YDmax_int,"boot","$max-int");
EXT(YruntimeYA,"runtime","+");
EXT(YruntimeYfrom,"runtime","from");
DEF(YsyntaxYsexpr_method_parameters,"syntax","sexpr-method-parameters");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
DEF(YsyntaxYsexpr_let_namesAvalues,"syntax","sexpr-let-names+values");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYstr,"runtime","str");
EXT(Ynul,"boot","nul");
EXT(YLfunG,"boot","<fun>");
EXT(YmacrosYEE,"macros","==");
EXT(Yfab_gen,"boot","fab-gen");
DEF(YsyntaxYsexpr_syntax_ifQ,"syntax","sexpr-syntax-if?");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYread_char,"runtime","read-char");
DEF(YsyntaxYsexpr_let_values,"syntax","sexpr-let-values");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYmin,"runtime","min");
EXT(YPPmacro,"boot","%%macro");
EXT(YLlstG,"boot","<lst>");
EXT(YruntimeYalways,"runtime","always");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
DEF(YsyntaxYsexpr_slot_object,"syntax","sexpr-slot-object");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(YruntimeYL,"runtime","<");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YruntimeYS,"runtime","/");
DEF(YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
DEF(YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
DEF(YsyntaxYsexpr_iterate_body,"syntax","sexpr-iterate-body");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
DEF(YsyntaxYfind_option,"syntax","find-option");
EXT(Ysig_specs,"boot","sig-specs");
DEF(YsyntaxYsexpr_assignmentQ,"syntax","sexpr-assignment?");
DEF(YsyntaxYsexpr_monitor_type,"syntax","sexpr-monitor-type");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
DEF(YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
EXT(YruntimeY1st,"runtime","1st");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
DEF(YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
DEF(YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
EXT(YruntimeYoddQ,"runtime","odd?");
DEF(YsyntaxYsexpr_monitor_body,"syntax","sexpr-monitor-body");
EXT(YLseqG,"boot","<seq>");
DEF(YsyntaxYsexpr_slot_variable,"syntax","sexpr-slot-variable");
DEF(YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YruntimeYelt_or,"runtime","elt-or");
DEF(YsyntaxYsexpr_definitionQ,"syntax","sexpr-definition?");
DEF(YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(Ytail,"boot","tail");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
DEF(YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
DEF(YsyntaxYsexpr_make_method,"syntax","sexpr-make-method");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
DEF(YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
DEF(YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
DEF(YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
EXT(Yclass_slots,"boot","class-slots");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YLcolG,"boot","<col>");
DEF(YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YruntimeYneg,"runtime","neg");
DEF(YsyntaxYsexpr_begin_actions,"syntax","sexpr-begin-actions");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(Yfab_class,"boot","fab-class");
DEF(YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
DEF(YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
DEF(YsyntaxYbq_remove_tokens,"syntax","bq-remove-tokens");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YLsigG,"boot","<sig>");
DEF(YsyntaxYbracket,"syntax","bracket");
EXT(Ytype_error,"boot","type-error");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YmacrosYemptyQ,"macros","empty?");
DEF(YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
EXT(YLlocG,"boot","<loc>");
EXT(YruntimeYassqn,"runtime","assqn");
DEF(YsyntaxYeval,"syntax","eval");
DEF(YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
EXT(YruntimeYdel_dups,"runtime","del-dups");
DEF(YsyntaxYbq_process,"syntax","bq-process");
EXT(YruntimeYpick,"runtime","pick");
DEF(YsyntaxYsexpr_iterateQ,"syntax","sexpr-iterate?");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(YruntimeYLconditionG,"runtime","<condition>");
DEF(YsyntaxYTbq_nconcT,"syntax","*bq-nconc*");
DEF(YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
EXT(Ytype_elts,"boot","type-elts");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(YruntimeYsig,"runtime","sig");
DEF(YsyntaxYTbq_quoteT,"syntax","*bq-quote*");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
DEF(YsyntaxYDsexpr_values_tag,"syntax","$sexpr-values-tag");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YLfloG,"boot","<flo>");
DEF(YsyntaxYsexpr_last_expQ,"syntax","sexpr-last-exp?");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YPisa,"boot","%isa");
DEF(YsyntaxYsexpr_ifQ,"syntax","sexpr-if?");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YmacrosYmatch_atom,"macros","match-atom");
DEF(YsyntaxYsexpr_let_bound_variables,"syntax","sexpr-let-bound-variables");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
EXT(Ysig_value,"boot","sig-value");
EXT(YruntimeYin,"runtime","in");
EXT(Yclass_name,"boot","class-name");
DEF(YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
EXT(YruntimeYLstepG,"runtime","<step>");
DEF(YsyntaxYTbq_listT,"syntax","*bq-list*");
DEF(YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
EXT(YruntimeYfloorS,"runtime","floor/");
DEF(YsyntaxYmap_tree,"syntax","map-tree");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YLnumG,"boot","<num>");
EXT(YLintG,"boot","<int>");
EXT(YruntimeY2nd,"runtime","2nd");
DEF(YsyntaxYsexpr_function_value,"syntax","sexpr-function-value");
EXT(YruntimeYall2Q,"runtime","all2?");
DEF(YsyntaxYsexpr_first_operand,"syntax","sexpr-first-operand");
EXT(YruntimeYmemQ,"runtime","mem?");
DEF(YsyntaxYsexpr_tagged_listQ,"syntax","sexpr-tagged-list?");
DEF(YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
EXT(YruntimeYroundS,"runtime","round/");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(Yfun_value,"boot","fun-value");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YsubtypeQ,"boot","subtype?");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YruntimeYash,"runtime","ash");
DEF(YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
DEF(YsyntaxYsexpr_isa_parents,"syntax","sexpr-isa-parents");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYdel,"runtime","del");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYabs,"runtime","abs");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
DEF(YsyntaxYsexpr_method_value,"syntax","sexpr-method-value");
EXT(Ysig_names,"boot","sig-names");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YruntimeYmax,"runtime","max");
EXT(YPslot,"boot","%slot");
EXT(Yslot_setter,"boot","slot-setter");
DEF(YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
DEF(YsyntaxYsexpr_make_if,"syntax","sexpr-make-if");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
DEF(YsyntaxYTbq_appendT,"syntax","*bq-append*");
DEF(YsyntaxYsexpr_syntax_definitionQ,"syntax","sexpr-syntax-definition?");
EXT(YruntimeYT,"runtime","*");
EXT(YLlogG,"boot","<log>");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YruntimeYsub,"runtime","sub");
EXT(Yslot_value_setter,"boot","slot-value-setter");
DEF(YsyntaxYsexpr_monitor_info,"syntax","sexpr-monitor-info");
EXT(YruntimeYaddress_of,"runtime","address-of");
DEF(YsyntaxYTunique_name_counterT,"syntax","*unique-name-counter*");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYidentity,"runtime","identity");
DEF(YsyntaxYsexpr_make_syntax_if,"syntax","sexpr-make-syntax-if");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
DEF(YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
EXT(YPsymbols,"boot","%symbols");
EXT(Ynot,"boot","not");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
EXT(YruntimeYhandler_function,"runtime","handler-function");
DEF(YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
EXT(YLtupG,"boot","<tup>");
DEF(YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
EXT(YruntimeYmodulo,"runtime","modulo");
DEF(YsyntaxYsexpr_iterate_inits,"syntax","sexpr-iterate-inits");
DEF(YsyntaxYsexpr_no_operandsQ,"syntax","sexpr-no-operands?");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_parents,"boot","class-parents");
EXT(YruntimeYfloor,"runtime","floor");
DEF(YsyntaxYsexpr_slot_init,"syntax","sexpr-slot-init");
DEF(YsyntaxYDsexpr_slot_tag,"syntax","$sexpr-slot-tag");
EXT(YLanyG,"boot","<any>");
EXT(YruntimeYkeys,"runtime","keys");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YruntimeYassoc,"runtime","assoc");
DEF(YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
DEF(YsyntaxYsexpr_isaQ,"syntax","sexpr-isa?");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(Ytype_class,"boot","type-class");
DEF(YsyntaxYsexpr_iterate_signature,"syntax","sexpr-iterate-signature");
DEF(YsyntaxYsexpr_let_body,"syntax","sexpr-let-body");
DEF(YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YruntimeYformat,"runtime","format");
DEF(YsyntaxYsexpr_quotedQ,"syntax","sexpr-quoted?");
EXT(YLunionG,"boot","<union>");
EXT(YruntimeYLE,"runtime","<=");
DEF(YsyntaxYDsexpr_macro_tag,"syntax","$sexpr-macro-tag");
EXT(YruntimeYlen,"runtime","len");
EXT(Yfun_arity,"boot","fun-arity");
DEF(YsyntaxYsexpr_rest_exps,"syntax","sexpr-rest-exps");
DEF(YsyntaxYsexpr_rest_operands,"syntax","sexpr-rest-operands");
EXT(Yslot_value,"boot","slot-value");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YruntimeYlogior,"runtime","logior");
DEF(YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
EXT(Yerror,"boot","error");
DEF(YsyntaxYsexpr_locQ,"syntax","sexpr-loc?");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
DEF(YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
EXT(YLsubclassG,"boot","<subclass>");
DEF(YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
DEF(YsyntaxYsexpr_letQ,"syntax","sexpr-let?");
DEF(YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
EXT(YruntimeYany2Q,"runtime","any2?");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYlogxor,"runtime","logxor");
DEF(YsyntaxYsexpr_beginQ,"syntax","sexpr-begin?");
DEF(YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YruntimeYlow_elt_setter,"runtime","low-elt-setter");
EXT(YruntimeYfill,"runtime","fill");
EXT(YruntimeYNE,"runtime","~=");
DEF(YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
DEF(YsyntaxYsexpr_self_evaluatingQ,"syntax","sexpr-self-evaluating?");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
DEF(YsyntaxYTbq_clobberableT,"syntax","*bq-clobberable*");
DEF(YsyntaxYsexpr_backquoteQ,"syntax","sexpr-backquote?");
EXT(YLsingletonG,"boot","<singleton>");
EXT(Yunexec,"boot","unexec");
EXT(YruntimeYanyQ,"runtime","any?");
DEF(YsyntaxYsexpr_monitorQ,"syntax","sexpr-monitor?");
DEF(YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(Ynil,"boot","nil");
EXT(YruntimeYbuf,"runtime","buf");
DEF(YsyntaxYsexpr_generic_definitionQ,"syntax","sexpr-generic-definition?");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
DEF(YsyntaxYsexpr_operator,"syntax","sexpr-operator");
EXT(YruntimeYpop,"runtime","pop");
DEF(YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
DEF(YsyntaxYsexpr_applicationQ,"syntax","sexpr-application?");
DEF(YsyntaxYsexpr_operands,"syntax","sexpr-operands");
DEF(YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
DEF(YsyntaxYsexpr_isa_init_slots,"syntax","sexpr-isa-init-slots");
EXT(Ylst,"boot","lst");
DEF(YsyntaxYsexpr_unwind_protectQ,"syntax","sexpr-unwind-protect?");
DEF(YsyntaxYsexpr_slotQ,"syntax","sexpr-slot?");
EXT(YruntimeYalter,"runtime","alter");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
DEF(YsyntaxYsexpr_function_parameters,"syntax","sexpr-function-parameters");
EXT(YruntimeYtL,"runtime","t<");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
DEF(YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
EXT(YruntimeYas,"runtime","as");
EXT(YruntimeYlogand,"runtime","logand");
DEF(YsyntaxYsexpr_monitor_expand,"syntax","sexpr-monitor-expand");
DEF(YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YmacrosYnapply,"macros","napply");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YmacrosYtup,"macros","tup");
EXT(YruntimeYlen_setter,"runtime","len-setter");
DEF(YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
DEF(YsyntaxYsexpr_make_quote,"syntax","sexpr-make-quote");
DEF(YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(Yfun_naryQ,"boot","fun-nary?");
DEF(YsyntaxYsexpr_methodQ,"syntax","sexpr-method?");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YruntimeYlow_elt,"runtime","low-elt");
EXT(YruntimeYceiling,"runtime","ceiling");
DEF(YsyntaxYsexpr_loc_body,"syntax","sexpr-loc-body");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(YruntimeYLerrorG,"runtime","<error>");
DEF(YsyntaxYsexpr_pattern_variableQ,"syntax","sexpr-pattern-variable?");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YruntimeYapp_args,"runtime","app-args");
DEF(YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
DEF(YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YruntimeYlist,"runtime","list");
DEF(YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
DEF(YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
EXT(YPdefine_method,"boot","%define-method");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YPsnul,"boot","%snul");
DEF(YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
EXT(YmacrosYcat,"macros","cat");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYtE,"runtime","t=");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YPvnul,"boot","%vnul");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YruntimeYmake_handler,"runtime","make-handler");
DEF(YsyntaxYTbq_listTT,"syntax","*bq-list**");
EXT(YruntimeYG,"runtime",">");
DEF(YsyntaxYsexpr_macro_expandQ,"syntax","sexpr-macro-expand?");
DEF(YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YruntimeYpush,"runtime","push");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YruntimeYlast,"runtime","last");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YruntimeYcat2,"runtime","cat2");
DEF(YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
DEF(YsyntaxYsexpr_monitor_test,"syntax","sexpr-monitor-test");
EXT(YruntimeYzeroQ,"runtime","zero?");
DEF(YsyntaxYsexpr_make_setter,"syntax","sexpr-make-setter");
DEF(YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
EXT(Ytype_object,"boot","type-object");
EXT(YDmin_int,"boot","$min-int");
DEF(YsyntaxYsexpr_build_backquote_expander,"syntax","sexpr-build-backquote-expander");
DEF(YsyntaxYsexpr_pattern_variable_name,"syntax","sexpr-pattern-variable-name");
DEF(YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
EXT(YruntimeYtA,"runtime","t+");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YruntimeYcopy_state,"runtime","copy-state");
DEF(YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
EXT(YLclassG,"boot","<class>");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
DEF(YsyntaxYsexpr_define_class_parents,"syntax","sexpr-define-class-parents");
EXT(YruntimeYrev,"runtime","rev");
EXT(YruntimeYGE,"runtime",">=");
DEF(YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
DEF(YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
DEF(YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YLtypeG,"boot","<type>");
DEF(YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
DEF(YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYLmapG,"runtime","<map>");
DEF(YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
EXT(YruntimeYE,"runtime","=");
DEF(YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
EXT(YruntimeYdel_keys,"runtime","del-keys");
DEF(YsyntaxYsexpr_new_unique_name_counterX,"syntax","sexpr-new-unique-name-counter!");
DEF(YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLgenG,"boot","<gen>");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
DEF(YsyntaxYsexpr_make_setter_name,"syntax","sexpr-make-setter-name");
EXT(Yslot_init,"boot","slot-init");
EXT(Yobject_parents,"boot","object-parents");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YruntimeYLtabG,"runtime","<tab>");
DEF(YsyntaxYDsexpr_define_class_tag,"syntax","$sexpr-define-class-tag");
DEF(YsyntaxYsexpr_first_exp,"syntax","sexpr-first-exp");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(Yobject_slots,"boot","object-slots");
DEF(YsyntaxYsexpr_function_definitionQ,"syntax","sexpr-function-definition?");
DEF(YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YLsymG,"boot","<sym>");
EXT(Ysym_name,"boot","sym-name");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
DEF(YsyntaxYTcomma_atsignT,"syntax","*comma-atsign*");
EXT(YruntimeYround,"runtime","round");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YruntimeYdo2,"runtime","do2");
EXT(Yfind_setter,"boot","find-setter");
DEF(YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YruntimeYforce_output,"runtime","force-output");
DEF(YsyntaxYLnameG,"syntax","<name>");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
DEF(YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
EXT(YruntimeYdefault,"runtime","default");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYaddX,"runtime","add!");
DEF(YsyntaxYsexpr_iterate_name,"syntax","sexpr-iterate-name");
DEF(YsyntaxYsexpr_macroQ,"syntax","sexpr-macro?");
EXT(YruntimeYassq,"runtime","assq");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YruntimeYfab_map,"runtime","fab-map");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
DEF(YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
EXT(YruntimeYLlistG,"runtime","<list>");
DEF(YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
EXT(YruntimeYdo,"runtime","do");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(YLvecG,"boot","<vec>");
DEF(YsyntaxYsexpr_unique_name,"syntax","sexpr-unique-name");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YruntimeYport_contents,"runtime","port-contents");
DEF(YsyntaxYsexpr_isa_slot_inits,"syntax","sexpr-isa-slot-inits");
EXT(YruntimeYout,"runtime","out");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(Yfun_names,"boot","fun-names");
EXT(YLmetG,"boot","<met>");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(Yhead_setter,"boot","head-setter");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_170);
DEFLIT(lit_218);
DEFLIT(lit_164);
DEFLIT(lit_5);
DEFLIT(lit_4);
DEFLIT(lit_100);
DEFLIT(lit_133);
DEFLIT(lit_7);
DEFLIT(lit_131);
DEFLIT(lit_230);
DEFLIT(lit_195);
DEFLIT(lit_198);
DEFLIT(lit_153);
DEFLIT(lit_143);
DEFLIT(lit_87);
DEFLIT(lit_226);
DEFLIT(lit_98);
DEFLIT(lit_117);
DEFLIT(lit_184);
DEFLIT(lit_58);
DEFLIT(lit_21);
DEFLIT(lit_6);
DEFLIT(lit_215);
DEFLIT(lit_29);
DEFLIT(lit_50);
DEFLIT(lit_125);
DEFLIT(lit_194);
DEFLIT(lit_209);
DEFLIT(lit_44);
DEFLIT(lit_45);
DEFLIT(lit_163);
DEFLIT(lit_84);
DEFLIT(lit_182);
DEFLIT(lit_238);
DEFLIT(lit_96);
DEFLIT(lit_94);
DEFLIT(lit_158);
DEFLIT(lit_129);
DEFLIT(lit_178);
DEFLIT(lit_242);
DEFLIT(lit_236);
DEFLIT(lit_237);
DEFLIT(lit_105);
DEFLIT(lit_78);
DEFLIT(lit_206);
DEFLIT(lit_42);
DEFLIT(lit_73);
DEFLIT(lit_167);
DEFLIT(lit_28);
DEFLIT(lit_110);
DEFLIT(lit_82);
DEFLIT(lit_245);
DEFLIT(lit_67);
DEFLIT(lit_86);
DEFLIT(lit_111);
DEFLIT(lit_241);
DEFLIT(lit_233);
DEFLIT(lit_106);
DEFLIT(lit_190);
DEFLIT(lit_70);
DEFLIT(lit_243);
DEFLIT(lit_126);
DEFLIT(lit_24);
DEFLIT(lit_51);
DEFLIT(lit_10);
DEFLIT(lit_205);
DEFLIT(lit_179);
DEFLIT(lit_56);
DEFLIT(lit_2);
DEFLIT(lit_11);
DEFLIT(lit_89);
DEFLIT(lit_221);
DEFLIT(lit_75);
DEFLIT(lit_180);
DEFLIT(lit_60);
DEFLIT(lit_14);
DEFLIT(lit_37);
DEFLIT(lit_72);
DEFLIT(lit_34);
DEFLIT(lit_43);
DEFLIT(lit_213);
DEFLIT(lit_181);
DEFLIT(lit_220);
DEFLIT(lit_68);
DEFLIT(lit_35);
DEFLIT(lit_16);
DEFLIT(lit_145);
DEFLIT(lit_13);
DEFLIT(lit_147);
DEFLIT(lit_228);
DEFLIT(lit_185);
DEFLIT(lit_109);
DEFLIT(lit_202);
DEFLIT(lit_36);
DEFLIT(lit_214);
DEFLIT(lit_69);
DEFLIT(lit_99);
DEFLIT(lit_235);
DEFLIT(lit_88);
DEFLIT(lit_30);
DEFLIT(lit_57);
DEFLIT(lit_19);
DEFLIT(lit_210);
DEFLIT(lit_49);
DEFLIT(lit_92);
DEFLIT(lit_61);
DEFLIT(lit_140);
DEFLIT(lit_151);
DEFLIT(lit_54);
DEFLIT(lit_234);
DEFLIT(lit_157);
DEFLIT(lit_1);
DEFLIT(lit_174);
DEFLIT(lit_104);
DEFLIT(lit_232);
DEFLIT(lit_39);
DEFLIT(lit_120);
DEFLIT(lit_119);
DEFLIT(lit_162);
DEFLIT(lit_18);
DEFLIT(lit_136);
DEFLIT(lit_118);
DEFLIT(lit_115);
DEFLIT(lit_172);
DEFLIT(lit_65);
DEFLIT(lit_0);
DEFLIT(lit_168);
DEFLIT(lit_225);
DEFLIT(lit_197);
DEFLIT(lit_134);
DEFLIT(lit_216);
DEFLIT(lit_63);
DEFLIT(lit_203);
DEFLIT(lit_224);
DEFLIT(lit_103);
DEFLIT(lit_142);
DEFLIT(lit_146);
DEFLIT(lit_64);
DEFLIT(lit_83);
DEFLIT(lit_48);
DEFLIT(lit_171);
DEFLIT(lit_144);
DEFLIT(lit_166);
DEFLIT(lit_91);
DEFLIT(lit_17);
DEFLIT(lit_31);
DEFLIT(lit_155);
DEFLIT(lit_223);
DEFLIT(lit_196);
DEFLIT(lit_130);
DEFLIT(lit_113);
DEFLIT(lit_231);
DEFLIT(lit_93);
DEFLIT(lit_128);
DEFLIT(lit_192);
DEFLIT(lit_154);
DEFLIT(lit_9);
DEFLIT(lit_159);
DEFLIT(lit_76);
DEFLIT(lit_79);
DEFLIT(lit_156);
DEFLIT(lit_219);
DEFLIT(lit_85);
DEFLIT(lit_27);
DEFLIT(lit_15);
DEFLIT(lit_40);
DEFLIT(lit_102);
DEFLIT(lit_188);
DEFLIT(lit_137);
DEFLIT(lit_177);
DEFLIT(lit_41);
DEFLIT(lit_95);
DEFLIT(lit_81);
DEFLIT(lit_66);
DEFLIT(lit_38);
DEFLIT(lit_189);
DEFLIT(lit_114);
DEFLIT(lit_20);
DEFLIT(lit_80);
DEFLIT(lit_108);
DEFLIT(lit_77);
DEFLIT(lit_186);
DEFLIT(lit_207);
DEFLIT(lit_116);
DEFLIT(lit_46);
DEFLIT(lit_173);
DEFLIT(lit_211);
DEFLIT(lit_165);
DEFLIT(lit_97);
DEFLIT(lit_222);
DEFLIT(lit_124);
DEFLIT(lit_55);
DEFLIT(lit_150);
DEFLIT(lit_123);
DEFLIT(lit_71);
DEFLIT(lit_199);
DEFLIT(lit_204);
DEFLIT(lit_191);
DEFLIT(lit_229);
DEFLIT(lit_193);
DEFLIT(lit_239);
DEFLIT(lit_200);
DEFLIT(lit_240);
DEFLIT(lit_160);
DEFLIT(lit_201);
DEFLIT(lit_26);
DEFLIT(lit_135);
DEFLIT(lit_90);
DEFLIT(lit_183);
DEFLIT(lit_138);
DEFLIT(lit_217);
DEFLIT(lit_32);
DEFLIT(lit_62);
DEFLIT(lit_127);
DEFLIT(lit_74);
DEFLIT(lit_149);
DEFLIT(lit_22);
DEFLIT(lit_33);
DEFLIT(lit_139);
DEFLIT(lit_107);
DEFLIT(lit_47);
DEFLIT(lit_25);
DEFLIT(lit_122);
DEFLIT(lit_161);
DEFLIT(lit_52);
DEFLIT(lit_53);
DEFLIT(lit_148);
DEFLIT(lit_3);
DEFLIT(lit_12);
DEFLIT(lit_132);
DEFLIT(lit_23);
DEFLIT(lit_101);
DEFLIT(lit_169);
DEFLIT(lit_212);
DEFLIT(lit_152);
DEFLIT(lit_59);
DEFLIT(lit_227);
DEFLIT(lit_208);
DEFLIT(lit_121);
DEFLIT(lit_141);
DEFLIT(lit_187);
DEFLIT(lit_176);
DEFLIT(lit_112);
DEFLIT(lit_244);
DEFLIT(lit_175);
DEFLIT(lit_8);

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
  P tmpF1223;
  P tmpF1222;
  P tmpF1221;
  P tmpF1220;
  P tmpF1219;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,CHKREF(YisaQ),exp_,CHKREF(YLnumG));
  tmpF1219 = T1;
  if (tmpF1219 != YPfalse) {
    T2 = tmpF1219;
  } else {
    T4 = CALL2(1,CHKREF(YisaQ),exp_,CHKREF(YLchrG));
    tmpF1220 = T4;
    if (tmpF1220 != YPfalse) {
      T5 = tmpF1220;
    } else {
      T7 = CALL2(1,CHKREF(YmacrosYEE),exp_,YPtrue);
      tmpF1221 = T7;
      if (tmpF1221 != YPfalse) {
        T8 = tmpF1221;
      } else {
        T10 = CALL2(1,CHKREF(YmacrosYEE),exp_,YPfalse);
        tmpF1222 = T10;
        if (tmpF1222 != YPfalse) {
          T11 = tmpF1222;
        } else {
          T13 = CALL2(1,CHKREF(YisaQ),exp_,CHKREF(YLstrG));
          tmpF1223 = T13;
          if (tmpF1223 != YPfalse) {
            T14 = tmpF1223;
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
  P tmpF1224;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(tag_, 1);
loop:
  T1 = CALL2(1,CHKREF(YisaQ),exp_,CHKREF(YLlstG));
  tmpF1224 = T1;
  if (tmpF1224 != YPfalse) {
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
  P values_spec_indexF1225;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(signature_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYpos),signature_,CHKREF(lit_39));
  values_spec_indexF1225 = T1;
  T3 = CALL2(1,CHKREF(YmacrosYEE),values_spec_indexF1225,CHKREF(Ynul));
  if (T3 != YPfalse) {
    T2 = signature_;
  } else {
    T4 = CALL3(1,CHKREF(YruntimeYsub),signature_,YPint((P)0),values_spec_indexF1225);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_signature_value_25) {
  P signature_;
  P valueF1227;
  P values_spec_indexF1226;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(signature_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYpos),signature_,CHKREF(lit_39));
  values_spec_indexF1226 = T1;
  T3 = CALL2(1,CHKREF(YmacrosYEE),values_spec_indexF1226,CHKREF(Ynul));
  if (T3 != YPfalse) {
    T2 = YPfalse;
  } else {
    T6 = CALL2(1,CHKREF(YruntimeYA),values_spec_indexF1226,YPint((P)1));
    T5 = CALL2(1,CHKREF(YruntimeYelt),signature_,T6);
    valueF1227 = T5;
    T8 = CALL2(1,CHKREF(YsyntaxYsexpr_tagged_listQ),valueF1227,CHKREF(lit_41));
    if (T8 != YPfalse) {
      T7 = CHKREF(lit_42);
    } else {
      T7 = valueF1227;
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

FUNCODEDEF(fun_x_1263_50) {
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
  P optionsF1237;
  P x_1262F1236;
  P x_1262F1235;
  P x_1262F1234;
  P x_1262F1233;
  P bodyF1232;
  P handlerF1231;
  P optionsF1230;
  P x_1262F1229;
  P x_1263F1228;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1263_50,2);
  x_1263F1228 = T1;
  FUNINIT(x_1263F1228, 2,return_,FREEREF(0));
  x_1262F1229 = FREEREF(0);
  optionsF1230 = YPfalse;
  optionsF1230 = BOXFAB(optionsF1230);
  handlerF1231 = YPfalse;
  handlerF1231 = BOXFAB(handlerF1231);
  bodyF1232 = YPfalse;
  bodyF1232 = BOXFAB(bodyF1232);
  T9 = CALL2(1,CHKREF(YisaQ),x_1262F1229,CHKREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1262F1229,CHKREF(lit_77),x_1263F1228);
    x_1262F1233 = T11;
    T13 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1262F1233,x_1263F1228);
    BOXVAL(optionsF1230) = T13;
    T14 = CALL1(1,CHKREF(Ytail),x_1262F1233);
    x_1262F1234 = T14;
    T16 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1262F1234,x_1263F1228);
    BOXVAL(handlerF1231) = T16;
    T17 = CALL1(1,CHKREF(Ytail),x_1262F1234);
    x_1262F1235 = T17;
    BOXVAL(bodyF1232) = x_1262F1235;
    x_1262F1236 = Ynil;
    T19 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1262F1236,x_1263F1228);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1263F1228,CHKREF(lit_85),x_1262F1229);
  }
  T24 = BOXVAL(optionsF1230);
  T23 = CALL2(1,CHKREF(YisaQ),T24,CHKREF(YLsymG));
  if (T23 != YPfalse) {
    T28 = CALL1(1,CHKREF(Ylst),CHKREF(lit_86));
    T30 = BOXVAL(optionsF1230);
    T29 = CALL1(1,CHKREF(Ylst),T30);
    T27 = CALL3(1,CHKREF(YmacrosYcat),T28,T29,Ynil);
    T26 = CALL1(1,CHKREF(Ylst),T27);
    T25 = CALL2(1,CHKREF(YmacrosYcat),T26,Ynil);
    T22 = T25;
  } else {
    T31 = BOXVAL(optionsF1230);
    T22 = T31;
  }
  optionsF1237 = T22;
  T33 = CALL1(1,CHKREF(YsyntaxYsexpr_monitor_type),optionsF1237);
  T34 = CALL1(1,CHKREF(YsyntaxYsexpr_monitor_info),optionsF1237);
  T35 = CALL1(1,CHKREF(YsyntaxYsexpr_monitor_test),optionsF1237);
  T36 = BOXVAL(handlerF1231);
  T38 = BOXVAL(bodyF1232);
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

FUNCODEDEF(fun_x_1265_54) {
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
  P x_1264F1241;
  P typeF1240;
  P x_1264F1239;
  P x_1265F1238;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1265_54,2);
  x_1265F1238 = T1;
  FUNINIT(x_1265F1238, 2,return_,FREEREF(0));
  x_1264F1239 = FREEREF(0);
  typeF1240 = YPfalse;
  typeF1240 = BOXFAB(typeF1240);
  T5 = CALL2(1,CHKREF(YisaQ),x_1264F1239,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1264F1239,x_1265F1238);
    BOXVAL(typeF1240) = T7;
    T8 = CALL1(1,CHKREF(Ytail),x_1264F1239);
    x_1264F1241 = T8;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1264F1241,x_1265F1238);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1265F1238,CHKREF(lit_85),x_1264F1239);
  }
  T11 = BOXVAL(typeF1240);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_type_56) {
  P options_;
  P type_listF1242;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,CHKREF(YsyntaxYfind_option),options_,CHKREF(lit_86),CHKREF(lit_92));
  type_listF1242 = T1;
  T3 = FUNFAB(fun_55,1,type_listF1242);
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
  T1 = CALL2(1,CHKREF(Yerror),CHKREF(lit_100),FREEREF(1));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  P return_;
  P x_1266F1246;
  P info_exprF1245;
  P x_1266F1244;
  P x_1267F1243;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1267_57,2);
  x_1267F1243 = T1;
  FUNINIT(x_1267F1243, 2,return_,FREEREF(0));
  x_1266F1244 = FREEREF(0);
  info_exprF1245 = YPfalse;
  info_exprF1245 = BOXFAB(info_exprF1245);
  T5 = CALL2(1,CHKREF(YisaQ),x_1266F1244,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1266F1244,x_1267F1243);
    BOXVAL(info_exprF1245) = T7;
    T8 = CALL1(1,CHKREF(Ytail),x_1266F1244);
    x_1266F1246 = T8;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1266F1246,x_1267F1243);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1267F1243,CHKREF(lit_85),x_1266F1244);
  }
  T11 = BOXVAL(info_exprF1245);
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
  T1 = CALL2(1,CHKREF(Yerror),CHKREF(lit_102),FREEREF(1));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_60) {
  P return_;
  P x_1268F1252;
  P x_1268F1251;
  P argumentsF1250;
  P messageF1249;
  P x_1268F1248;
  P x_1269F1247;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1269_59,2);
  x_1269F1247 = T1;
  FUNINIT(x_1269F1247, 2,return_,FREEREF(0));
  x_1268F1248 = FREEREF(0);
  messageF1249 = YPfalse;
  messageF1249 = BOXFAB(messageF1249);
  argumentsF1250 = YPfalse;
  argumentsF1250 = BOXFAB(argumentsF1250);
  T7 = CALL2(1,CHKREF(YisaQ),x_1268F1248,CHKREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1268F1248,x_1269F1247);
    BOXVAL(messageF1249) = T9;
    T10 = CALL1(1,CHKREF(Ytail),x_1268F1248);
    x_1268F1251 = T10;
    BOXVAL(argumentsF1250) = x_1268F1251;
    x_1268F1252 = Ynil;
    T12 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1268F1252,x_1269F1247);
    T11 = T12;
    T8 = T11;
  } else {
    T13 = CALL2(1,x_1269F1247,CHKREF(lit_85),x_1268F1248);
  }
  T15 = CALL1(1,CHKREF(Ylst),CHKREF(lit_103));
  T16 = CALL1(1,CHKREF(Ylst),CHKREF(lit_104));
  T19 = CALL1(1,CHKREF(Ylst),CHKREF(lit_10));
  T20 = CALL1(1,CHKREF(Ylst),CHKREF(lit_105));
  T22 = BOXVAL(messageF1249);
  T21 = CALL1(1,CHKREF(Ylst),T22);
  T18 = CALLN(1,CHKREF(YmacrosYcat),4,T19,T20,T21,Ynil);
  T17 = CALL1(1,CHKREF(Ylst),T18);
  T25 = CALL1(1,CHKREF(Ylst),CHKREF(lit_10));
  T26 = CALL1(1,CHKREF(Ylst),CHKREF(lit_106));
  T29 = CALL1(1,CHKREF(Ylst),CHKREF(lit_107));
  T30 = BOXVAL(argumentsF1250);
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
  P tmpF1255;
  P descriptionF1254;
  P infoF1253;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,CHKREF(YsyntaxYfind_option),options_,CHKREF(lit_96),YPfalse);
  infoF1253 = T1;
  T3 = CALL3(1,CHKREF(YsyntaxYfind_option),options_,CHKREF(lit_97),YPfalse);
  descriptionF1254 = T3;
  tmpF1255 = infoF1253;
  if (tmpF1255 != YPfalse) {
    T6 = descriptionF1254;
  } else {
    T6 = YPfalse;
  }
  T5 = T6;
  if (T5 != YPfalse) {
    T7 = CALL2(1,CHKREF(Yerror),CHKREF(lit_98),options_);
    T4 = T7;
  } else {
    if (infoF1253 != YPfalse) {
      T10 = FUNFAB(fun_58,1,infoF1253);
      T9 = with_exit(T10);
      T8 = T9;
    } else {
      if (descriptionF1254 != YPfalse) {
        T13 = FUNFAB(fun_60,1,descriptionF1254);
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
  P test_bodyF1256;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,CHKREF(YsyntaxYfind_option),options_,CHKREF(lit_66),CHKREF(lit_110));
  test_bodyF1256 = T1;
  T2 = CALL2(1,CHKREF(YsyntaxYsexpr_make_anonymous_method),Ynil,test_bodyF1256);
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
  P tmpF1257;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,CHKREF(YisaQ),exp_,CHKREF(YLlstG));
  tmpF1257 = T1;
  if (tmpF1257 != YPfalse) {
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
  P tmpF1259;
  P nameF1258;
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
    nameF1258 = T4;
    T7 = CALL2(1,CHKREF(YisaQ),nameF1258,CHKREF(YLlstG));
    tmpF1259 = T7;
    if (tmpF1259 != YPfalse) {
      T11 = CALL1(1,CHKREF(Ytail),nameF1258);
      T10 = CALL1(1,CHKREF(Yhead),T11);
      T9 = CALL2(1,CHKREF(YmacrosYEE),T10,CHKREF(lit_152));
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    if (T6 != YPfalse) {
      T15 = CALL1(1,CHKREF(Yhead),nameF1258);
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
      T21 = CALL2(1,CHKREF(YmacrosYpair),nameF1258,rtnames_);
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
  P tup41F1269;
  P rtvaluesF1268;
  P tup41F1267;
  P rtnamesF1266;
  P tup41F1265;
  P innerF1264;
  P tupnameF1263;
  P tmpF1262;
  P valueF1261;
  P nameF1260;
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
    nameF1260 = T6;
    T8 = CALL1(1,CHKREF(Yhead),vals_);
    valueF1261 = T8;
    T11 = CALL2(1,CHKREF(YisaQ),nameF1260,CHKREF(YLlstG));
    tmpF1262 = T11;
    if (tmpF1262 != YPfalse) {
      T14 = CALL1(1,CHKREF(Yhead),nameF1260);
      T13 = CALL2(1,CHKREF(YmacrosYEE),T14,CHKREF(lit_41));
      T12 = T13;
    } else {
      T12 = YPfalse;
    }
    T10 = T12;
    if (T10 != YPfalse) {
      T16 = CALL1(1,CHKREF(YsyntaxYsexpr_unique_name),CHKREF(lit_146));
      tupnameF1263 = T16;
      T19 = FUNSHELL(1,fun_inner_84,2);
      innerF1264 = T19;
      FUNINIT(innerF1264, 2,innerF1264,tupnameF1263);
      T21 = CALL1(1,CHKREF(Ylst),tupnameF1263);
      T22 = CALL1(1,CHKREF(Ylst),valueF1261);
      T23 = CALL1(1,CHKREF(Ytail),nameF1260);
      T20 = CALLN(0,innerF1264,4,T21,T22,YPint((P)0),T23);
      T18 = T20;
      tup41F1265 = T18;
      T25 = CALL1(1,CHKREF(Yhead),tup41F1265);
      rtnamesF1266 = T25;
      T27 = CALL1(1,CHKREF(Ytail),tup41F1265);
      tup41F1267 = T27;
      T29 = CALL1(1,CHKREF(Yhead),tup41F1267);
      rtvaluesF1268 = T29;
      T31 = CALL1(1,CHKREF(Ytail),tup41F1267);
      tup41F1269 = T31;
      T33 = CALL2(1,CHKREF(YmacrosYcat),rtnamesF1266,rnames_);
      T34 = CALL2(1,CHKREF(YmacrosYcat),rtvaluesF1268,rvalues_);
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
      T38 = CALL2(1,CHKREF(YmacrosYpair),nameF1260,rnames_);
      T39 = CALL2(1,CHKREF(YmacrosYpair),valueF1261,rvalues_);
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
  P loopF1270;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(vals_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_85,1);
  loopF1270 = T1;
  FUNINIT(loopF1270, 1,loopF1270);
  T2 = CALLN(0,loopF1270,4,Ynil,Ynil,names_,vals_);
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
  P colF1279;
  P tup42F1278;
  P valuesF1277;
  P tup42F1276;
  P namesF1275;
  P tup42F1274;
  P bodyF1273;
  P ovaluesF1272;
  P onamesF1271;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T1 = CALL1(1,CHKREF(YsyntaxYsexpr_let_bound_variables),let_exp_);
  onamesF1271 = T1;
  T3 = CALL1(1,CHKREF(YsyntaxYsexpr_let_values),let_exp_);
  ovaluesF1272 = T3;
  T5 = CALL1(1,CHKREF(YsyntaxYsexpr_let_body),let_exp_);
  bodyF1273 = T5;
  T7 = CALL2(1,CHKREF(YsyntaxYsexpr_let_namesAvalues),onamesF1271,ovaluesF1272);
  tup42F1274 = T7;
  T9 = CALL1(1,CHKREF(Yhead),tup42F1274);
  namesF1275 = T9;
  T11 = CALL1(1,CHKREF(Ytail),tup42F1274);
  tup42F1276 = T11;
  T13 = CALL1(1,CHKREF(Yhead),tup42F1276);
  valuesF1277 = T13;
  T15 = CALL1(1,CHKREF(Ytail),tup42F1276);
  tup42F1278 = T15;
  T17 = FUNSHELL(1,fun_col_87,2);
  colF1279 = T17;
  FUNINIT(colF1279, 2,bodyF1273,colF1279);
  T18 = CALL2(0,colF1279,namesF1275,valuesF1277);
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
  P sigF1280;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeY3rd),rep_exp_);
  sigF1280 = T1;
  T4 = CALL1(1,CHKREF(YsyntaxYsexpr_signature_parameters),sigF1280);
  T3 = CALL2(1,CHKREF(YmacrosYmap),CHKREF(YruntimeY1st),T4);
  T6 = CALL1(1,CHKREF(YsyntaxYsexpr_signature_value),sigF1280);
  if (T6 != YPfalse) {
    T5 = Ynil;
  } else {
    T7 = CALL1(1,CHKREF(Ylst),CHKREF(YsyntaxYDsexpr_values_tag));
    T5 = T7;
  }
  T9 = CALL1(1,CHKREF(YsyntaxYsexpr_signature_value),sigF1280);
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
  P initsF1284;
  P bodyF1283;
  P sigF1282;
  P nameF1281;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = CALL1(1,CHKREF(YsyntaxYsexpr_iterate_name),rep_exp_);
  nameF1281 = T1;
  T3 = CALL1(1,CHKREF(YsyntaxYsexpr_iterate_signature),rep_exp_);
  sigF1282 = T3;
  T5 = CALL1(1,CHKREF(YsyntaxYsexpr_iterate_body),rep_exp_);
  bodyF1283 = T5;
  T7 = CALL1(1,CHKREF(YsyntaxYsexpr_iterate_inits),rep_exp_);
  initsF1284 = T7;
  T11 = CALL2(1,CHKREF(Ylst),nameF1281,sigF1282);
  T10 = CALL2(1,CHKREF(YmacrosYcat),T11,bodyF1283);
  T9 = CALL1(1,CHKREF(Ylst),T10);
  T13 = CALL1(1,CHKREF(Ylst),nameF1281);
  T12 = CALL2(1,CHKREF(YmacrosYcat),T13,initsF1284);
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
  P parentsF1285;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeY2nd),exp_);
  parentsF1285 = T1;
  T3 = CALL2(1,CHKREF(YisaQ),parentsF1285,CHKREF(YLlstG));
  if (T3 != YPfalse) {
    T2 = parentsF1285;
  } else {
    T4 = CALL1(1,CHKREF(Ylst),parentsF1285);
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
  P resF1287;
  P raw_resultF1286;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,CHKREF(YsyntaxYbq_process),x_);
  raw_resultF1286 = T1;
  T3 = CALL1(1,CHKREF(YsyntaxYbq_remove_tokens),raw_resultF1286);
  resF1287 = T3;
  T2 = resF1287;
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
  P tmpF1288;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,CHKREF(YisaQ),x_,CHKREF(YLlstG));
  T1 = CALL1(1,CHKREF(Ynot),T2);
  tmpF1288 = T1;
  if (tmpF1288 != YPfalse) {
    T3 = tmpF1288;
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
  P loopF1289;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_125,2);
  loopF1289 = T1;
  FUNINIT(loopF1289, 2,return_,loopF1289);
  T2 = CALL2(0,loopF1289,FREEREF(0),Ynil);
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
  P tmpF1292;
  P dF1291;
  P aF1290;
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
    aF1290 = T4;
    T8 = CALL1(1,CHKREF(Ytail),x_);
    T7 = CALL2(1,CHKREF(YsyntaxYmap_tree),fn_,T8);
    dF1291 = T7;
    T12 = CALL1(1,CHKREF(Yhead),x_);
    T11 = CALL2(1,CHKREF(YruntimeYE),aF1290,T12);
    tmpF1292 = T11;
    if (tmpF1292 != YPfalse) {
      T15 = CALL1(1,CHKREF(Ytail),x_);
      T14 = CALL2(1,CHKREF(YruntimeYE),dF1291,T15);
      T13 = T14;
    } else {
      T13 = YPfalse;
    }
    T10 = T13;
    if (T10 != YPfalse) {
      T9 = x_;
    } else {
      T16 = CALL2(1,CHKREF(YmacrosYpair),aF1290,dF1291);
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
  P tmpF1294;
  P tmpF1293;
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
                tmpF1293 = T20;
                if (tmpF1293 != YPfalse) {
                  T27 = CALL1(1,CHKREF(Ytail),x_);
                  T26 = CALL1(1,CHKREF(Ytail),T27);
                  T25 = CALL1(1,CHKREF(YmacrosYemptyQ),T26);
                  T24 = CALL1(1,CHKREF(Ynot),T25);
                  tmpF1294 = T24;
                  if (tmpF1294 != YPfalse) {
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
  P altF1295;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYelt),exp_,YPint((P)3));
  altF1295 = T1;
  T3 = CALL2(1,CHKREF(YmacrosYEE),altF1295,CHKREF(Ynul));
  if (T3 != YPfalse) {
    T2 = YPfalse;
  } else {
    T2 = altF1295;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_pattern_variableQ_136) {
  P pat_;
  P tmpF1296;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T1 = CALL1(1,CHKREF(YsyntaxYsexpr_unquoteQ),pat_);
  tmpF1296 = T1;
  if (tmpF1296 != YPfalse) {
    T2 = tmpF1296;
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
  P xF1298;
  P tmpF1297;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T3 = CALL2(1,CHKREF(YisaQ),pat_,CHKREF(YLlstG));
  T2 = CALL1(1,CHKREF(Ynot),T3);
  tmpF1297 = T2;
  if (tmpF1297 != YPfalse) {
    T4 = tmpF1297;
  } else {
    T5 = CALL1(1,CHKREF(YmacrosYemptyQ),pat_);
    T4 = T5;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T7 = CALL1(1,CHKREF(Yhead),pat_);
    xF1298 = T7;
    T9 = CALL1(1,CHKREF(YsyntaxYsexpr_pattern_variableQ),xF1298);
    if (T9 != YPfalse) {
      T11 = CALL1(1,CHKREF(YsyntaxYsexpr_pattern_variable_name),xF1298);
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
  P colF1299;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T2 = FUNSHELL(1,fun_col_138,1);
  colF1299 = T2;
  FUNINIT(colF1299, 1,colF1299);
  T3 = CALL1(0,colF1299,pat_);
  T1 = T3;
  T0 = CALL1(1,CHKREF(YruntimeYdel_dups),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_macro_function_140) {
  P exp_;
  P funcF1301;
  P mifF1300;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T2 = CALL1(1,CHKREF(YsyntaxYsexpr_method_parameters),exp_);
  T4 = CALL1(1,CHKREF(YsyntaxYsexpr_method_body),exp_);
  T3 = CALL1(1,CHKREF(YsyntaxYsexpr_sequence_Gbegin),T4);
  T1 = CALLN(1,CHKREF(YsyntaxYsexpr_make_syntax_if),4,T2,CHKREF(lit_1),T3,YPfalse);
  mifF1300 = T1;
  T7 = CALL1(1,CHKREF(Ylst),CHKREF(lit_1));
  T8 = CALL1(1,CHKREF(Ylst),mifF1300);
  T6 = CALL2(1,CHKREF(YsyntaxYsexpr_make_anonymous_method),T7,T8);
  funcF1301 = T6;
  T5 = funcF1301;
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
  fun_sexpr_self_evaluatingQ_0 = YPmet(FUNCODEREF(fun_sexpr_self_evaluatingQ_0),CHKREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_variableQ_1 = YPmet(FUNCODEREF(fun_sexpr_variableQ_1),CHKREF(lit_2),T5,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_tagged_listQ_2 = YPmet(FUNCODEREF(fun_sexpr_tagged_listQ_2),CHKREF(lit_3),T10,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_quotedQ_3 = YPmet(FUNCODEREF(fun_sexpr_quotedQ_3),CHKREF(lit_6),T15,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_make_quote_4 = YPmet(FUNCODEREF(fun_sexpr_make_quote_4),CHKREF(lit_7),T20,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_text_of_quotation_5 = YPmet(FUNCODEREF(fun_sexpr_text_of_quotation_5),CHKREF(lit_8),T25,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_assignmentQ_6 = YPmet(FUNCODEREF(fun_sexpr_assignmentQ_6),CHKREF(lit_11),T30,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_assignment_variable_7 = YPmet(FUNCODEREF(fun_sexpr_assignment_variable_7),CHKREF(lit_12),T35,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_assignment_value_8 = YPmet(FUNCODEREF(fun_sexpr_assignment_value_8),CHKREF(lit_14),T40,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_variable_name_9 = YPmet(FUNCODEREF(fun_sexpr_variable_name_9),CHKREF(lit_15),T45,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_variable_name_10 = YPmet(FUNCODEREF(fun_sexpr_variable_name_10),CHKREF(lit_15),T50,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_variable_type_11 = YPmet(FUNCODEREF(fun_sexpr_variable_type_11),CHKREF(lit_16),T55,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_variable_type_12 = YPmet(FUNCODEREF(fun_sexpr_variable_type_12),CHKREF(lit_16),T60,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_definitionQ_13 = YPmet(FUNCODEREF(fun_sexpr_definitionQ_13),CHKREF(lit_19),T65,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_definition_variable_14 = YPmet(FUNCODEREF(fun_sexpr_definition_variable_14),CHKREF(lit_21),T70,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_definition_value_15 = YPmet(FUNCODEREF(fun_sexpr_definition_value_15),CHKREF(lit_23),T75,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_syntax_definitionQ_16 = YPmet(FUNCODEREF(fun_sexpr_syntax_definitionQ_16),CHKREF(lit_25),T80,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_syntax_definition_variable_17 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_variable_17),CHKREF(lit_27),T85,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_syntax_definition_value_18 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_value_18),CHKREF(lit_28),T90,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_function_definitionQ_19 = YPmet(FUNCODEREF(fun_sexpr_function_definitionQ_19),CHKREF(lit_30),T95,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_method_definitionQ_20 = YPmet(FUNCODEREF(fun_sexpr_method_definitionQ_20),CHKREF(lit_32),T100,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_generic_definitionQ_21 = YPmet(FUNCODEREF(fun_sexpr_generic_definitionQ_21),CHKREF(lit_34),T105,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_function_definition_variable_22 = YPmet(FUNCODEREF(fun_sexpr_function_definition_variable_22),CHKREF(lit_35),T110,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_forward_primitiveQ_23 = YPmet(FUNCODEREF(fun_sexpr_forward_primitiveQ_23),CHKREF(lit_36),T115,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_signature_parameters_24 = YPmet(FUNCODEREF(fun_sexpr_signature_parameters_24),CHKREF(lit_37),T120,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_signature_value_25 = YPmet(FUNCODEREF(fun_sexpr_signature_value_25),CHKREF(lit_40),T125,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_function_signature_26 = YPmet(FUNCODEREF(fun_sexpr_function_signature_26),CHKREF(lit_43),T130,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_function_parameters_27 = YPmet(FUNCODEREF(fun_sexpr_function_parameters_27),CHKREF(lit_44),T135,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_function_value_28 = YPmet(FUNCODEREF(fun_sexpr_function_value_28),CHKREF(lit_45),T140,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_function_body_29 = YPmet(FUNCODEREF(fun_sexpr_function_body_29),CHKREF(lit_46),T145,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_function_definition_value_30 = YPmet(FUNCODEREF(fun_sexpr_function_definition_value_30),CHKREF(lit_48),T150,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_methodQ_31 = YPmet(FUNCODEREF(fun_sexpr_methodQ_31),CHKREF(lit_49),T155,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_method_signature_32 = YPmet(FUNCODEREF(fun_sexpr_method_signature_32),CHKREF(lit_50),T160,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_method_parameters_33 = YPmet(FUNCODEREF(fun_sexpr_method_parameters_33),CHKREF(lit_52),T165,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_method_value_34 = YPmet(FUNCODEREF(fun_sexpr_method_value_34),CHKREF(lit_53),T170,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_method_body_35 = YPmet(FUNCODEREF(fun_sexpr_method_body_35),CHKREF(lit_54),T175,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_make_anonymous_method_36 = YPmet(FUNCODEREF(fun_sexpr_make_anonymous_method_36),CHKREF(lit_55),T180,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_make_method_37 = YPmet(FUNCODEREF(fun_sexpr_make_method_37),CHKREF(lit_58),T185,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_ifQ_38 = YPmet(FUNCODEREF(fun_sexpr_ifQ_38),CHKREF(lit_61),T190,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_if_test_39 = YPmet(FUNCODEREF(fun_sexpr_if_test_39),CHKREF(lit_62),T195,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_if_then_40 = YPmet(FUNCODEREF(fun_sexpr_if_then_40),CHKREF(lit_63),T200,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_if_else_41 = YPmet(FUNCODEREF(fun_sexpr_if_else_41),CHKREF(lit_64),T205,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_make_if_42 = YPmet(FUNCODEREF(fun_sexpr_make_if_42),CHKREF(lit_65),T210,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_blockQ_43 = YPmet(FUNCODEREF(fun_sexpr_blockQ_43),CHKREF(lit_70),T215,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_block_name_44 = YPmet(FUNCODEREF(fun_sexpr_block_name_44),CHKREF(lit_71),T220,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_block_body_45 = YPmet(FUNCODEREF(fun_sexpr_block_body_45),CHKREF(lit_72),T225,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_unwind_protectQ_46 = YPmet(FUNCODEREF(fun_sexpr_unwind_protectQ_46),CHKREF(lit_74),T230,ENVNUL,PNUL,YPfalse);
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
  T236 = fun_sexpr_unwind_protect_protected_form_47 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_protected_form_47),CHKREF(lit_75),T237,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_unwind_protect_cleanup_forms_48 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_cleanup_forms_48),CHKREF(lit_76),T0,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_monitorQ_49 = YPmet(FUNCODEREF(fun_sexpr_monitorQ_49),CHKREF(lit_78),T5,ENVNUL,PNUL,YPfalse);
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
  lit_81 = YPPsym((P)"x-1263");
  lit_82 = YPPsym((P)"msg");
  lit_83 = YPPsym((P)"args");
  lit_84 = YPsb((P)"Malformed TRY expression: ~=");
  lit_85 = YPsb((P)"Match Pattern Failure");
  lit_86 = YPPsym((P)"type");
  T12 = YPsig(YPPlist(2,CHKREF(lit_82),CHKREF(lit_83)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1263_50 = YPmet(FUNCODEREF(fun_x_1263_50),CHKREF(lit_81),T12,ENVNUL,PNUL,YPfalse);
  T11 = YPsig(YPPlist(1,CHKREF(lit_80)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T11,ENVNUL,PNUL,YPfalse);
  T10 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_monitor_expand_52 = YPmet(FUNCODEREF(fun_sexpr_monitor_expand_52),CHKREF(lit_79),T10,ENVNUL,PNUL,YPfalse);
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
  YsyntaxYfind_option = YPmet(FUNCODEREF(YsyntaxYfind_option),CHKREF(lit_87),T17,ENVNUL,PNUL,YPfalse);
  T18 = YsyntaxYfind_option;
  YsyntaxYfind_option = T18;
  lit_91 = YPPsym((P)"sexpr-monitor-type");
  lit_92 = YPPlist(1,YPPsym((P)"<condition>"));
  lit_93 = YPPsym((P)"x-1265");
  lit_94 = YPsb((P)"Malformed TRY condition type: %=");
  T21 = YPsig(YPPlist(2,CHKREF(lit_82),CHKREF(lit_83)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1265_54 = YPmet(FUNCODEREF(fun_x_1265_54),CHKREF(lit_93),T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(1,CHKREF(lit_80)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T20,ENVNUL,PNUL,YPfalse);
  T19 = YPsig(YPPlist(1,CHKREF(lit_88)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_monitor_type_56 = YPmet(FUNCODEREF(fun_sexpr_monitor_type_56),CHKREF(lit_91),T19,ENVNUL,PNUL,YPfalse);
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
  T30 = YPsig(YPPlist(2,CHKREF(lit_82),CHKREF(lit_83)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1267_57 = YPmet(FUNCODEREF(fun_x_1267_57),CHKREF(lit_99),T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(1,CHKREF(lit_80)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(2,CHKREF(lit_82),CHKREF(lit_83)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1269_59 = YPmet(FUNCODEREF(fun_x_1269_59),CHKREF(lit_101),T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(YPPlist(1,CHKREF(lit_80)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(YPPlist(1,CHKREF(lit_88)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_monitor_info_61 = YPmet(FUNCODEREF(fun_sexpr_monitor_info_61),CHKREF(lit_95),T26,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_monitor_test_62 = YPmet(FUNCODEREF(fun_sexpr_monitor_test_62),CHKREF(lit_109),T35,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_monitor_body_63 = YPmet(FUNCODEREF(fun_sexpr_monitor_body_63),CHKREF(lit_111),T40,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_beginQ_64 = YPmet(FUNCODEREF(fun_sexpr_beginQ_64),CHKREF(lit_113),T45,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_begin_actions_65 = YPmet(FUNCODEREF(fun_sexpr_begin_actions_65),CHKREF(lit_114),T50,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_last_expQ_66 = YPmet(FUNCODEREF(fun_sexpr_last_expQ_66),CHKREF(lit_116),T55,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_first_exp_67 = YPmet(FUNCODEREF(fun_sexpr_first_exp_67),CHKREF(lit_117),T60,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_rest_exps_68 = YPmet(FUNCODEREF(fun_sexpr_rest_exps_68),CHKREF(lit_118),T65,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_sequence_Gbegin_69 = YPmet(FUNCODEREF(fun_sexpr_sequence_Gbegin_69),CHKREF(lit_119),T70,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_make_begin_70 = YPmet(FUNCODEREF(fun_sexpr_make_begin_70),CHKREF(lit_120),T75,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_applicationQ_71 = YPmet(FUNCODEREF(fun_sexpr_applicationQ_71),CHKREF(lit_121),T80,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_operator_72 = YPmet(FUNCODEREF(fun_sexpr_operator_72),CHKREF(lit_122),T85,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_operands_73 = YPmet(FUNCODEREF(fun_sexpr_operands_73),CHKREF(lit_124),T90,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_no_operandsQ_74 = YPmet(FUNCODEREF(fun_sexpr_no_operandsQ_74),CHKREF(lit_125),T95,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_first_operand_75 = YPmet(FUNCODEREF(fun_sexpr_first_operand_75),CHKREF(lit_126),T100,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_rest_operands_76 = YPmet(FUNCODEREF(fun_sexpr_rest_operands_76),CHKREF(lit_127),T105,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_make_application_77 = YPmet(FUNCODEREF(fun_sexpr_make_application_77),CHKREF(lit_128),T110,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_new_unique_name_counterX_78 = YPmet(FUNCODEREF(fun_sexpr_new_unique_name_counterX_78),CHKREF(lit_131),T115,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_unique_name_79 = YPmet(FUNCODEREF(fun_sexpr_unique_name_79),CHKREF(lit_132),T120,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_letQ_80 = YPmet(FUNCODEREF(fun_sexpr_letQ_80),CHKREF(lit_135),T125,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_let_bound_variables_81 = YPmet(FUNCODEREF(fun_sexpr_let_bound_variables_81),CHKREF(lit_136),T130,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_let_values_82 = YPmet(FUNCODEREF(fun_sexpr_let_values_82),CHKREF(lit_138),T135,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_let_body_83 = YPmet(FUNCODEREF(fun_sexpr_let_body_83),CHKREF(lit_139),T140,ENVNUL,PNUL,YPfalse);
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
  fun_inner_84 = YPmet(FUNCODEREF(fun_inner_84),CHKREF(lit_147),T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(YPPlist(4,CHKREF(lit_144),CHKREF(lit_145),CHKREF(lit_141),CHKREF(lit_142)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_loop_85 = YPmet(FUNCODEREF(fun_loop_85),CHKREF(lit_143),T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(YPPlist(2,CHKREF(lit_141),CHKREF(lit_142)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLtupG),Ynil);
  fun_sexpr_let_namesAvalues_86 = YPmet(FUNCODEREF(fun_sexpr_let_namesAvalues_86),CHKREF(lit_140),T145,ENVNUL,PNUL,YPfalse);
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
  fun_col_87 = YPmet(FUNCODEREF(fun_col_87),CHKREF(lit_157),T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(YPPlist(1,CHKREF(lit_137)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sexpr_let_Gcombination_88 = YPmet(FUNCODEREF(fun_sexpr_let_Gcombination_88),CHKREF(lit_156),T152,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_locQ_89 = YPmet(FUNCODEREF(fun_sexpr_locQ_89),CHKREF(lit_160),T158,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_loc_bound_names_90 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_names_90),CHKREF(lit_161),T163,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_loc_bound_signatures_91 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_signatures_91),CHKREF(lit_163),T168,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_loc_bound_bodies_92 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_bodies_92),CHKREF(lit_164),T173,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_loc_raw_body_93 = YPmet(FUNCODEREF(fun_sexpr_loc_raw_body_93),CHKREF(lit_165),T178,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_loc_body_94 = YPmet(FUNCODEREF(fun_sexpr_loc_body_94),CHKREF(lit_166),T183,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_iterateQ_95 = YPmet(FUNCODEREF(fun_sexpr_iterateQ_95),CHKREF(lit_168),T188,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_iterate_name_96 = YPmet(FUNCODEREF(fun_sexpr_iterate_name_96),CHKREF(lit_169),T193,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_iterate_signature_97 = YPmet(FUNCODEREF(fun_sexpr_iterate_signature_97),CHKREF(lit_171),T198,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_iterate_inits_98 = YPmet(FUNCODEREF(fun_sexpr_iterate_inits_98),CHKREF(lit_172),T203,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_iterate_body_99 = YPmet(FUNCODEREF(fun_sexpr_iterate_body_99),CHKREF(lit_173),T208,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_iterate_Gloc_100 = YPmet(FUNCODEREF(fun_sexpr_iterate_Gloc_100),CHKREF(lit_174),T213,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_isaQ_101 = YPmet(FUNCODEREF(fun_sexpr_isaQ_101),CHKREF(lit_175),T218,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_isa_parents_102 = YPmet(FUNCODEREF(fun_sexpr_isa_parents_102),CHKREF(lit_176),T223,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_isa_slot_inits_103 = YPmet(FUNCODEREF(fun_sexpr_isa_slot_inits_103),CHKREF(lit_177),T228,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_isa_init_slots_104 = YPmet(FUNCODEREF(fun_sexpr_isa_init_slots_104),CHKREF(lit_178),T233,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_isa_init_values_105 = YPmet(FUNCODEREF(fun_sexpr_isa_init_values_105),CHKREF(lit_179),T238,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_define_classQ_106 = YPmet(FUNCODEREF(fun_sexpr_define_classQ_106),CHKREF(lit_181),T243,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_define_class_parents_107 = YPmet(FUNCODEREF(fun_sexpr_define_class_parents_107),CHKREF(lit_182),T248,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_slotQ_108 = YPmet(FUNCODEREF(fun_sexpr_slotQ_108),CHKREF(lit_184),T253,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_slot_object_109 = YPmet(FUNCODEREF(fun_sexpr_slot_object_109),CHKREF(lit_185),T258,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_slot_variable_110 = YPmet(FUNCODEREF(fun_sexpr_slot_variable_110),CHKREF(lit_186),T263,ENVNUL,PNUL,YPfalse);
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
  T269 = fun_sexpr_slot_init_111 = YPmet(FUNCODEREF(fun_sexpr_slot_init_111),CHKREF(lit_187),T270,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_make_getter_112 = YPmet(FUNCODEREF(fun_sexpr_make_getter_112),CHKREF(lit_189),T0,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_make_setter_113 = YPmet(FUNCODEREF(fun_sexpr_make_setter_113),CHKREF(lit_192),T5,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_make_setter_name_114 = YPmet(FUNCODEREF(fun_sexpr_make_setter_name_114),CHKREF(lit_196),T10,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_macroQ_115 = YPmet(FUNCODEREF(fun_sexpr_macroQ_115),CHKREF(lit_198),T15,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_macro_expandQ_116 = YPmet(FUNCODEREF(fun_sexpr_macro_expandQ_116),CHKREF(lit_200),T20,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_make_syntax_if_117 = YPmet(FUNCODEREF(fun_sexpr_make_syntax_if_117),CHKREF(lit_202),T25,ENVNUL,PNUL,YPfalse);
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
  YsyntaxYsexpr_expand_backquote = YPmet(FUNCODEREF(YsyntaxYsexpr_expand_backquote),CHKREF(lit_211),T30,ENVNUL,PNUL,YPfalse);
  T31 = YsyntaxYsexpr_expand_backquote;
  YsyntaxYsexpr_expand_backquote = T31;
  lit_214 = YPPsym((P)"sexpr-build-backquote-expander");
  T32 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_build_backquote_expander_119 = YPmet(FUNCODEREF(fun_sexpr_build_backquote_expander_119),CHKREF(lit_214),T32,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_unquoteQ_120 = YPmet(FUNCODEREF(fun_sexpr_unquoteQ_120),CHKREF(lit_215),T37,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_unquote_splicingQ_121 = YPmet(FUNCODEREF(fun_sexpr_unquote_splicingQ_121),CHKREF(lit_217),T42,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_backquoteQ_122 = YPmet(FUNCODEREF(fun_sexpr_backquoteQ_122),CHKREF(lit_219),T47,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_atomQ_123 = YPmet(FUNCODEREF(fun_sexpr_atomQ_123),CHKREF(lit_220),T52,ENVNUL,PNUL,YPfalse);
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
  fun_nreconc_124 = YPmet(FUNCODEREF(fun_nreconc_124),CHKREF(lit_221),T57,ENVNUL,PNUL,YPfalse);
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
  fun_loop_125 = YPmet(FUNCODEREF(fun_loop_125),CHKREF(lit_143),T64,ENVNUL,PNUL,YPfalse);
  T63 = YPsig(YPPlist(1,CHKREF(lit_80)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_126 = YPmet(FUNCODEREF(fun_126),YPfalse,T63,ENVNUL,PNUL,YPfalse);
  T62 = YPsig(YPPlist(1,CHKREF(lit_212)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_bq_process_127 = YPmet(FUNCODEREF(fun_bq_process_127),CHKREF(lit_223),T62,ENVNUL,PNUL,YPfalse);
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
  fun_bracket_128 = YPmet(FUNCODEREF(fun_bracket_128),CHKREF(lit_229),T69,ENVNUL,PNUL,YPfalse);
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
  fun_map_tree_129 = YPmet(FUNCODEREF(fun_map_tree_129),CHKREF(lit_230),T74,ENVNUL,PNUL,YPfalse);
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
  fun_bq_remove_tokens_130 = YPmet(FUNCODEREF(fun_bq_remove_tokens_130),CHKREF(lit_232),T79,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_syntax_ifQ_131 = YPmet(FUNCODEREF(fun_sexpr_syntax_ifQ_131),CHKREF(lit_237),T84,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_syntax_if_value_132 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_value_132),CHKREF(lit_238),T89,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_syntax_if_pattern_133 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_pattern_133),CHKREF(lit_239),T94,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_syntax_if_then_134 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_then_134),CHKREF(lit_240),T99,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_syntax_if_else_135 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_else_135),CHKREF(lit_241),T104,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_pattern_variableQ_136 = YPmet(FUNCODEREF(fun_sexpr_pattern_variableQ_136),CHKREF(lit_242),T109,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_pattern_variable_name_137 = YPmet(FUNCODEREF(fun_sexpr_pattern_variable_name_137),CHKREF(lit_243),T114,ENVNUL,PNUL,YPfalse);
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
  fun_col_138 = YPmet(FUNCODEREF(fun_col_138),CHKREF(lit_157),T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(YPPlist(1,CHKREF(lit_203)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_sexpr_bind_pattern_variables_139 = YPmet(FUNCODEREF(fun_sexpr_bind_pattern_variables_139),CHKREF(lit_244),T119,ENVNUL,PNUL,YPfalse);
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
  fun_sexpr_make_macro_function_140 = YPmet(FUNCODEREF(fun_sexpr_make_macro_function_140),CHKREF(lit_245),T125,ENVNUL,PNUL,YPfalse);
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
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"fab", &module_info_runtime, "fab"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"collecting", &module_info_macros, "collecting"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"empty", &module_info_runtime, "empty"},
  {"vec", &module_info_runtime, "vec"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"head", &module_info_boot, "head"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"%lb", &module_info_boot, "%lb"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"pos", &module_info_runtime, "pos"},
  {"object-class", &module_info_boot, "object-class"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"+", &module_info_runtime, "+"},
  {"from", &module_info_runtime, "from"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"find-key", &module_info_runtime, "find-key"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"var-name", &module_info_macros, "var-name"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"elt", &module_info_runtime, "elt"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"str", &module_info_runtime, "str"},
  {"nul", &module_info_boot, "nul"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"==", &module_info_macros, "=="},
  {"@+", &module_info_boot, "@+"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"read-char", &module_info_runtime, "read-char"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"map", &module_info_macros, "map"},
  {"min", &module_info_runtime, "min"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"always", &module_info_runtime, "always"},
  {"opf", &module_info_macros, "opf"},
  {"case", &module_info_macros, "case"},
  {"write-char", &module_info_runtime, "write-char"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"map2", &module_info_runtime, "map2"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"truncate", &module_info_runtime, "truncate"},
  {"<", &module_info_runtime, "<"},
  {"%cb", &module_info_boot, "%cb"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"%f*", &module_info_boot, "%f*"},
  {"fabs", &module_info_runtime, "fabs"},
  {"/", &module_info_runtime, "/"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"%i!", &module_info_boot, "%i!"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"slot", &module_info_boot, "slot"},
  {"%i<", &module_info_boot, "%i<"},
  {"1st", &module_info_runtime, "1st"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"dss", &module_info_boot, "dss"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"odd?", &module_info_runtime, "odd?"},
  {"%slen", &module_info_boot, "%slen"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"inc", &module_info_macros, "inc"},
  {"%f=", &module_info_boot, "%f="},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"isa", &module_info_boot, "isa"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"elt-or", &module_info_runtime, "elt-or"},
  {"write-string", &module_info_runtime, "write-string"},
  {"tail", &module_info_boot, "tail"},
  {"all?", &module_info_runtime, "all?"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"%su", &module_info_boot, "%su"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"%ib", &module_info_boot, "%ib"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"<col>", &module_info_boot, "<col>"},
  {"%i^", &module_info_boot, "%i^"},
  {"curry", &module_info_runtime, "curry"},
  {"neg", &module_info_runtime, "neg"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"use", &module_info_boot, "use"},
  {"%vec", &module_info_boot, "%vec"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"%str", &module_info_boot, "%str"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"type-error", &module_info_boot, "type-error"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"swapf", &module_info_macros, "swapf"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"select", &module_info_macros, "select"},
  {"empty?", &module_info_macros, "empty?"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"assqn", &module_info_runtime, "assqn"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"pick", &module_info_runtime, "pick"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"loc", &module_info_boot, "loc"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"%c<", &module_info_boot, "%c<"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"sig", &module_info_runtime, "sig"},
  {"read", &module_info_runtime, "read"},
  {"ds", &module_info_boot, "ds"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"%untag", &module_info_boot, "%untag"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"gensym", &module_info_macros, "gensym"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"%isa", &module_info_boot, "%isa"},
  {"%i?", &module_info_boot, "%i?"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"now-key", &module_info_runtime, "now-key"},
  {"%with-monitor", &module_info_runtime, "%with-monitor"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"in", &module_info_runtime, "in"},
  {"class-name", &module_info_boot, "class-name"},
  {"<step>", &module_info_runtime, "<step>"},
  {"floor/", &module_info_runtime, "floor/"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"<num>", &module_info_boot, "<num>"},
  {"<int>", &module_info_boot, "<int>"},
  {"2nd", &module_info_runtime, "2nd"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"all2?", &module_info_runtime, "all2?"},
  {"mem?", &module_info_runtime, "mem?"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"%it/", &module_info_boot, "%it/"},
  {"%lu", &module_info_boot, "%lu"},
  {"round/", &module_info_runtime, "round/"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"try", &module_info_boot, "try"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"pair", &module_info_macros, "pair"},
  {"dv", &module_info_boot, "dv"},
  {"lsh", &module_info_runtime, "lsh"},
  {"@<", &module_info_boot, "@<"},
  {"assert", &module_info_macros, "assert"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"ash", &module_info_runtime, "ash"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"del", &module_info_runtime, "del"},
  {"export", &module_info_boot, "export"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"-", &module_info_runtime, "-"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"abs", &module_info_runtime, "abs"},
  {"%ft", &module_info_boot, "%ft"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"max", &module_info_runtime, "max"},
  {"%slot", &module_info_boot, "%slot"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"set", &module_info_boot, "set"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"ddv", &module_info_macros, "ddv"},
  {"%cu", &module_info_boot, "%cu"},
  {"assocq", &module_info_runtime, "assocq"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"*", &module_info_runtime, "*"},
  {"<log>", &module_info_boot, "<log>"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"sub", &module_info_runtime, "sub"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"%f-", &module_info_boot, "%f-"},
  {"address-of", &module_info_runtime, "address-of"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"identity", &module_info_runtime, "identity"},
  {"@==", &module_info_boot, "@=="},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"not", &module_info_boot, "not"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"or", &module_info_macros, "or"},
  {"@olen", &module_info_boot, "@olen"},
  {"collect", &module_info_macros, "collect"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"modulo", &module_info_runtime, "modulo"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"floor", &module_info_runtime, "floor"},
  {"seq", &module_info_boot, "seq"},
  {"<any>", &module_info_boot, "<any>"},
  {"keys", &module_info_runtime, "keys"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"dec", &module_info_macros, "dec"},
  {"assoc", &module_info_runtime, "assoc"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"type-class", &module_info_boot, "type-class"},
  {"%iu", &module_info_boot, "%iu"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"nul?", &module_info_runtime, "nul?"},
  {"format", &module_info_runtime, "format"},
  {"<union>", &module_info_boot, "<union>"},
  {"<=", &module_info_runtime, "<="},
  {"len", &module_info_runtime, "len"},
  {"apply", &module_info_macros, "apply"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"remainder", &module_info_runtime, "remainder"},
  {"logior", &module_info_runtime, "logior"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"rep", &module_info_boot, "rep"},
  {"error", &module_info_boot, "error"},
  {"unless", &module_info_macros, "unless"},
  {"3rd", &module_info_runtime, "3rd"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%fu", &module_info_boot, "%fu"},
  {"%i=", &module_info_boot, "%i="},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"%pair", &module_info_boot, "%pair"},
  {"%i&", &module_info_boot, "%i&"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"fun", &module_info_boot, "fun"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"any2?", &module_info_runtime, "any2?"},
  {"bound?", &module_info_boot, "bound?"},
  {"pos?", &module_info_runtime, "pos?"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"logxor", &module_info_runtime, "logxor"},
  {"false-or", &module_info_runtime, "false-or"},
  {"first-then", &module_info_runtime, "first-then"},
  {"quote", &module_info_boot, "quote"},
  {"ct", &module_info_boot, "ct"},
  {"low-elt-setter", &module_info_runtime, "low-elt-setter"},
  {"fill", &module_info_runtime, "fill"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"~=", &module_info_runtime, "~="},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"unexec", &module_info_boot, "unexec"},
  {"%fb", &module_info_boot, "%fb"},
  {"any?", &module_info_runtime, "any?"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"%f+", &module_info_boot, "%f+"},
  {"nil", &module_info_boot, "nil"},
  {"buf", &module_info_runtime, "buf"},
  {"dg", &module_info_boot, "dg"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"pop", &module_info_runtime, "pop"},
  {"lst", &module_info_boot, "lst"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"alter", &module_info_runtime, "alter"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"t<", &module_info_runtime, "t<"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"ascii-whitespaces", &module_info_runtime, "ascii-whitespaces"},
  {"and", &module_info_macros, "and"},
  {"as", &module_info_runtime, "as"},
  {"logand", &module_info_runtime, "logand"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"napply", &module_info_macros, "napply"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"tup", &module_info_macros, "tup"},
  {"dp", &module_info_boot, "dp"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"compose", &module_info_runtime, "compose"},
  {"low-elt", &module_info_runtime, "low-elt"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"char->ascii", &module_info_runtime, "char->ascii"},
  {"<error>", &module_info_runtime, "<error>"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"app-args", &module_info_runtime, "app-args"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"lognot", &module_info_runtime, "lognot"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"list", &module_info_runtime, "list"},
  {"%f<", &module_info_boot, "%f<"},
  {"if", &module_info_boot, "if"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"newline", &module_info_runtime, "newline"},
  {"popf", &module_info_macros, "popf"},
  {"%snul", &module_info_boot, "%snul"},
  {"fin", &module_info_boot, "fin"},
  {"cat", &module_info_macros, "cat"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"t=", &module_info_runtime, "t="},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"<port>", &module_info_runtime, "<port>"},
  {"port-index", &module_info_runtime, "port-index"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {">", &module_info_runtime, ">"},
  {"do3", &module_info_runtime, "do3"},
  {"push", &module_info_runtime, "push"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"isa?", &module_info_boot, "isa?"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"last", &module_info_runtime, "last"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"cat2", &module_info_runtime, "cat2"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"zero?", &module_info_runtime, "zero?"},
  {"type-object", &module_info_boot, "type-object"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"t+", &module_info_runtime, "t+"},
  {"add", &module_info_runtime, "add"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"<class>", &module_info_boot, "<class>"},
  {"assoc-value", &module_info_runtime, "assoc-value"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"pushf", &module_info_macros, "pushf"},
  {"rev", &module_info_runtime, "rev"},
  {"mif", &module_info_boot, "mif"},
  {">=", &module_info_runtime, ">="},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"%i+", &module_info_boot, "%i+"},
  {"let", &module_info_boot, "let"},
  {"%c=", &module_info_boot, "%c="},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"<type>", &module_info_boot, "<type>"},
  {"%i*", &module_info_boot, "%i*"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"%selt", &module_info_boot, "%selt"},
  {"%iv", &module_info_boot, "%iv"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"<map>", &module_info_runtime, "<map>"},
  {"=", &module_info_runtime, "="},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"from-above", &module_info_runtime, "from-above"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%raw", &module_info_boot, "%raw"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"dlet", &module_info_macros, "dlet"},
  {"from-below", &module_info_runtime, "from-below"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"reduce", &module_info_runtime, "reduce"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"next-method", &module_info_macros, "next-method"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"del-key", &module_info_runtime, "del-key"},
  {"rev!", &module_info_runtime, "rev!"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"lab", &module_info_boot, "lab"},
  {"~==", &module_info_runtime, "~=="},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"%velt", &module_info_boot, "%velt"},
  {"round", &module_info_runtime, "round"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"%bb", &module_info_boot, "%bb"},
  {"for", &module_info_macros, "for"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"do2", &module_info_runtime, "do2"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"cat!", &module_info_runtime, "cat!"},
  {"from-by", &module_info_runtime, "from-by"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"%f/", &module_info_boot, "%f/"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"%i-", &module_info_boot, "%i-"},
  {"df", &module_info_boot, "df"},
  {"force-output", &module_info_runtime, "force-output"},
  {"<str>", &module_info_boot, "<str>"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"default", &module_info_runtime, "default"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"even?", &module_info_runtime, "even?"},
  {"from-to", &module_info_runtime, "from-to"},
  {"var-type", &module_info_macros, "var-type"},
  {"add!", &module_info_runtime, "add!"},
  {"%sb", &module_info_boot, "%sb"},
  {"assq", &module_info_runtime, "assq"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"collected", &module_info_macros, "collected"},
  {"fab-map", &module_info_runtime, "fab-map"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"%im", &module_info_boot, "%im"},
  {"when", &module_info_macros, "when"},
  {"dc", &module_info_boot, "dc"},
  {"<list>", &module_info_runtime, "<list>"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"do", &module_info_runtime, "do"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"dm", &module_info_boot, "dm"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"out", &module_info_runtime, "out"},
  {"to-str", &module_info_runtime, "to-str"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"<met>", &module_info_boot, "<met>"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"<range>", &module_info_runtime, "<range>"},
  {"neg?", &module_info_runtime, "neg?"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sexpr-block?", &YsyntaxYsexpr_blockQ},
  {"sexpr-make-getter", &YsyntaxYsexpr_make_getter},
  {"sexpr-atom?", &YsyntaxYsexpr_atomQ},
  {"nreconc", &YsyntaxYnreconc},
  {"$sexpr-iterate-tag", &YsyntaxYDsexpr_iterate_tag},
  {"sexpr-signature-parameters", &YsyntaxYsexpr_signature_parameters},
  {"sexpr-define-class?", &YsyntaxYsexpr_define_classQ},
  {"sexpr-method-definition?", &YsyntaxYsexpr_method_definitionQ},
  {"sexpr-unquote-splicing?", &YsyntaxYsexpr_unquote_splicingQ},
  {"sexpr-method-parameters", &YsyntaxYsexpr_method_parameters},
  {"sexpr-let-names+values", &YsyntaxYsexpr_let_namesAvalues},
  {"sexpr-syntax-if?", &YsyntaxYsexpr_syntax_ifQ},
  {"sexpr-let-values", &YsyntaxYsexpr_let_values},
  {"sexpr-slot-object", &YsyntaxYsexpr_slot_object},
  {"sexpr-function-body", &YsyntaxYsexpr_function_body},
  {"sexpr-let->combination", &YsyntaxYsexpr_let_Gcombination},
  {"sexpr-iterate-body", &YsyntaxYsexpr_iterate_body},
  {"find-option", &YsyntaxYfind_option},
  {"sexpr-assignment?", &YsyntaxYsexpr_assignmentQ},
  {"sexpr-monitor-type", &YsyntaxYsexpr_monitor_type},
  {"sexpr-expand-backquote", &YsyntaxYsexpr_expand_backquote},
  {"$sexpr-syntax-if-tag", &YsyntaxYDsexpr_syntax_if_tag},
  {"sexpr-make-application", &YsyntaxYsexpr_make_application},
  {"sexpr-monitor-body", &YsyntaxYsexpr_monitor_body},
  {"sexpr-slot-variable", &YsyntaxYsexpr_slot_variable},
  {"$sexpr-let-tag", &YsyntaxYDsexpr_let_tag},
  {"sexpr-definition?", &YsyntaxYsexpr_definitionQ},
  {"sexpr-variable?", &YsyntaxYsexpr_variableQ},
  {"sexpr-definition-variable", &YsyntaxYsexpr_definition_variable},
  {"sexpr-make-method", &YsyntaxYsexpr_make_method},
  {"sexpr-assignment-value", &YsyntaxYsexpr_assignment_value},
  {"sexpr-variable-name", &YsyntaxYsexpr_variable_name},
  {"sexpr-method-body", &YsyntaxYsexpr_method_body},
  {"sexpr-loc-raw-body", &YsyntaxYsexpr_loc_raw_body},
  {"sexpr-begin-actions", &YsyntaxYsexpr_begin_actions},
  {"sexpr-syntax-if-value", &YsyntaxYsexpr_syntax_if_value},
  {"sexpr-sequence->begin", &YsyntaxYsexpr_sequence_Gbegin},
  {"bq-remove-tokens", &YsyntaxYbq_remove_tokens},
  {"bracket", &YsyntaxYbracket},
  {"$sexpr-if-tag", &YsyntaxYDsexpr_if_tag},
  {"eval", &YsyntaxYeval},
  {"sexpr-syntax-definition-value", &YsyntaxYsexpr_syntax_definition_value},
  {"bq-process", &YsyntaxYbq_process},
  {"sexpr-iterate?", &YsyntaxYsexpr_iterateQ},
  {"*bq-nconc*", &YsyntaxYTbq_nconcT},
  {"sexpr-unwind-protect-protected-form", &YsyntaxYsexpr_unwind_protect_protected_form},
  {"---main-0---", NULL},
  {"*bq-quote*", &YsyntaxYTbq_quoteT},
  {"$sexpr-values-tag", &YsyntaxYDsexpr_values_tag},
  {"sexpr-last-exp?", &YsyntaxYsexpr_last_expQ},
  {"sexpr-if?", &YsyntaxYsexpr_ifQ},
  {"sexpr-let-bound-variables", &YsyntaxYsexpr_let_bound_variables},
  {"sexpr-assignment-variable", &YsyntaxYsexpr_assignment_variable},
  {"*bq-list*", &YsyntaxYTbq_listT},
  {"$sexpr-define-syntax-tag", &YsyntaxYDsexpr_define_syntax_tag},
  {"map-tree", &YsyntaxYmap_tree},
  {"sexpr-function-value", &YsyntaxYsexpr_function_value},
  {"sexpr-first-operand", &YsyntaxYsexpr_first_operand},
  {"sexpr-tagged-list?", &YsyntaxYsexpr_tagged_listQ},
  {"sexpr-loc-bound-bodies", &YsyntaxYsexpr_loc_bound_bodies},
  {"$sexpr-monitor-tag", &YsyntaxYDsexpr_monitor_tag},
  {"sexpr-isa-parents", &YsyntaxYsexpr_isa_parents},
  {"sexpr-method-value", &YsyntaxYsexpr_method_value},
  {"$sexpr-unwind-protect-tag", &YsyntaxYDsexpr_unwind_protect_tag},
  {"sexpr-make-if", &YsyntaxYsexpr_make_if},
  {"*bq-append*", &YsyntaxYTbq_appendT},
  {"sexpr-syntax-definition?", &YsyntaxYsexpr_syntax_definitionQ},
  {"sexpr-monitor-info", &YsyntaxYsexpr_monitor_info},
  {"*unique-name-counter*", &YsyntaxYTunique_name_counterT},
  {"sexpr-make-syntax-if", &YsyntaxYsexpr_make_syntax_if},
  {"sexpr-forward-primitive?", &YsyntaxYsexpr_forward_primitiveQ},
  {"$sexpr-quasiquote-tag", &YsyntaxYDsexpr_quasiquote_tag},
  {"sexpr-if-else", &YsyntaxYsexpr_if_else},
  {"sexpr-iterate-inits", &YsyntaxYsexpr_iterate_inits},
  {"sexpr-no-operands?", &YsyntaxYsexpr_no_operandsQ},
  {"sexpr-slot-init", &YsyntaxYsexpr_slot_init},
  {"$sexpr-slot-tag", &YsyntaxYDsexpr_slot_tag},
  {"sexpr-unwind-protect-cleanup-forms", &YsyntaxYsexpr_unwind_protect_cleanup_forms},
  {"sexpr-isa?", &YsyntaxYsexpr_isaQ},
  {"sexpr-iterate-signature", &YsyntaxYsexpr_iterate_signature},
  {"sexpr-let-body", &YsyntaxYsexpr_let_body},
  {"$sexpr-begin-tag", &YsyntaxYDsexpr_begin_tag},
  {"sexpr-quoted?", &YsyntaxYsexpr_quotedQ},
  {"$sexpr-macro-tag", &YsyntaxYDsexpr_macro_tag},
  {"sexpr-rest-exps", &YsyntaxYsexpr_rest_exps},
  {"sexpr-rest-operands", &YsyntaxYsexpr_rest_operands},
  {"$sexpr-define-function-tag", &YsyntaxYDsexpr_define_function_tag},
  {"sexpr-loc?", &YsyntaxYsexpr_locQ},
  {"sexpr-loc-bound-names", &YsyntaxYsexpr_loc_bound_names},
  {"sexpr-syntax-definition-variable", &YsyntaxYsexpr_syntax_definition_variable},
  {"sexpr-let?", &YsyntaxYsexpr_letQ},
  {"$sexpr-method-tag", &YsyntaxYDsexpr_method_tag},
  {"sexpr-begin?", &YsyntaxYsexpr_beginQ},
  {"sexpr-make-macro-function", &YsyntaxYsexpr_make_macro_function},
  {"$sexpr-define-generic-tag", &YsyntaxYDsexpr_define_generic_tag},
  {"sexpr-self-evaluating?", &YsyntaxYsexpr_self_evaluatingQ},
  {"*bq-clobberable*", &YsyntaxYTbq_clobberableT},
  {"sexpr-backquote?", &YsyntaxYsexpr_backquoteQ},
  {"sexpr-monitor?", &YsyntaxYsexpr_monitorQ},
  {"$sexpr-set-tag", &YsyntaxYDsexpr_set_tag},
  {"sexpr-generic-definition?", &YsyntaxYsexpr_generic_definitionQ},
  {"sexpr-operator", &YsyntaxYsexpr_operator},
  {"sexpr-unquote?", &YsyntaxYsexpr_unquoteQ},
  {"sexpr-application?", &YsyntaxYsexpr_applicationQ},
  {"sexpr-operands", &YsyntaxYsexpr_operands},
  {"sexpr-definition-value", &YsyntaxYsexpr_definition_value},
  {"sexpr-isa-init-slots", &YsyntaxYsexpr_isa_init_slots},
  {"sexpr-unwind-protect?", &YsyntaxYsexpr_unwind_protectQ},
  {"sexpr-slot?", &YsyntaxYsexpr_slotQ},
  {"sexpr-function-parameters", &YsyntaxYsexpr_function_parameters},
  {"---main-2---", NULL},
  {"sexpr-if-then", &YsyntaxYsexpr_if_then},
  {"sexpr-monitor-expand", &YsyntaxYsexpr_monitor_expand},
  {"$sexpr-macro-expand-tag", &YsyntaxYDsexpr_macro_expand_tag},
  {"sexpr-variable-type", &YsyntaxYsexpr_variable_type},
  {"sexpr-make-quote", &YsyntaxYsexpr_make_quote},
  {"sexpr-isa-init-values", &YsyntaxYsexpr_isa_init_values},
  {"sexpr-method?", &YsyntaxYsexpr_methodQ},
  {"sexpr-loc-body", &YsyntaxYsexpr_loc_body},
  {"sexpr-pattern-variable?", &YsyntaxYsexpr_pattern_variableQ},
  {"$sexpr-define-tag", &YsyntaxYDsexpr_define_tag},
  {"$sexpr-define-method-tag", &YsyntaxYDsexpr_define_method_tag},
  {"sexpr-if-test", &YsyntaxYsexpr_if_test},
  {"sexpr-bind-pattern-variables", &YsyntaxYsexpr_bind_pattern_variables},
  {"sexpr-loc-bound-signatures", &YsyntaxYsexpr_loc_bound_signatures},
  {"*bq-list**", &YsyntaxYTbq_listTT},
  {"sexpr-macro-expand?", &YsyntaxYsexpr_macro_expandQ},
  {"sexpr-make-anonymous-method", &YsyntaxYsexpr_make_anonymous_method},
  {"$sexpr-bind-exit-tag", &YsyntaxYDsexpr_bind_exit_tag},
  {"sexpr-monitor-test", &YsyntaxYsexpr_monitor_test},
  {"sexpr-make-setter", &YsyntaxYsexpr_make_setter},
  {"sexpr-make-begin", &YsyntaxYsexpr_make_begin},
  {"sexpr-build-backquote-expander", &YsyntaxYsexpr_build_backquote_expander},
  {"sexpr-pattern-variable-name", &YsyntaxYsexpr_pattern_variable_name},
  {"sexpr-block-name", &YsyntaxYsexpr_block_name},
  {"$sexpr-isa-tag", &YsyntaxYDsexpr_isa_tag},
  {"sexpr-define-class-parents", &YsyntaxYsexpr_define_class_parents},
  {"$sexpr-quote-tag", &YsyntaxYDsexpr_quote_tag},
  {"sexpr-syntax-if-else", &YsyntaxYsexpr_syntax_if_else},
  {"sexpr-syntax-if-pattern", &YsyntaxYsexpr_syntax_if_pattern},
  {"sexpr-block-body", &YsyntaxYsexpr_block_body},
  {"$sexpr-locals-tag", &YsyntaxYDsexpr_locals_tag},
  {"sexpr-signature-value", &YsyntaxYsexpr_signature_value},
  {"sexpr-text-of-quotation", &YsyntaxYsexpr_text_of_quotation},
  {"sexpr-new-unique-name-counter!", &YsyntaxYsexpr_new_unique_name_counterX},
  {"sexpr-function-signature", &YsyntaxYsexpr_function_signature},
  {"sexpr-make-setter-name", &YsyntaxYsexpr_make_setter_name},
  {"$sexpr-define-class-tag", &YsyntaxYDsexpr_define_class_tag},
  {"sexpr-first-exp", &YsyntaxYsexpr_first_exp},
  {"sexpr-function-definition?", &YsyntaxYsexpr_function_definitionQ},
  {"sexpr-function-definition-variable", &YsyntaxYsexpr_function_definition_variable},
  {"*comma-atsign*", &YsyntaxYTcomma_atsignT},
  {"sexpr-function-definition-value", &YsyntaxYsexpr_function_definition_value},
  {"<name>", &YsyntaxYLnameG},
  {"sexpr-syntax-if-then", &YsyntaxYsexpr_syntax_if_then},
  {"---main-1---", NULL},
  {"sexpr-iterate-name", &YsyntaxYsexpr_iterate_name},
  {"sexpr-macro?", &YsyntaxYsexpr_macroQ},
  {"sexpr-method-signature", &YsyntaxYsexpr_method_signature},
  {"sexpr-iterate->loc", &YsyntaxYsexpr_iterate_Gloc},
  {"sexpr-unique-name", &YsyntaxYsexpr_unique_name},
  {"sexpr-isa-slot-inits", &YsyntaxYsexpr_isa_slot_inits},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"sexpr-make-getter", "sexpr-make-getter"},
  {"$sexpr-iterate-tag", "$sexpr-iterate-tag"},
  {"sexpr-syntax-if-pattern", "sexpr-syntax-if-pattern"},
  {"sexpr-function-definition-value", "sexpr-function-definition-value"},
  {"sexpr-define-class?", "sexpr-define-class?"},
  {"sexpr-signature-parameters", "sexpr-signature-parameters"},
  {"sexpr-block-body", "sexpr-block-body"},
  {"sexpr-function-body", "sexpr-function-body"},
  {"sexpr-let->combination", "sexpr-let->combination"},
  {"sexpr-expand-backquote", "sexpr-expand-backquote"},
  {"sexpr-unquote-splicing?", "sexpr-unquote-splicing?"},
  {"$sexpr-syntax-if-tag", "$sexpr-syntax-if-tag"},
  {"sexpr-make-application", "sexpr-make-application"},
  {"$sexpr-let-tag", "$sexpr-let-tag"},
  {"sexpr-variable?", "sexpr-variable?"},
  {"$sexpr-bind-exit-tag", "$sexpr-bind-exit-tag"},
  {"sexpr-method-body", "sexpr-method-body"},
  {"sexpr-isa-init-slots", "sexpr-isa-init-slots"},
  {"sexpr-loc-raw-body", "sexpr-loc-raw-body"},
  {"sexpr-syntax-if-value", "sexpr-syntax-if-value"},
  {"sexpr-sequence->begin", "sexpr-sequence->begin"},
  {"$sexpr-if-tag", "$sexpr-if-tag"},
  {"eval", "eval"},
  {"sexpr-syntax-definition-value", "sexpr-syntax-definition-value"},
  {"sexpr-unwind-protect-protected-form", "sexpr-unwind-protect-protected-form"},
  {"sexpr-assignment-variable", "sexpr-assignment-variable"},
  {"$sexpr-define-syntax-tag", "$sexpr-define-syntax-tag"},
  {"sexpr-loc-bound-bodies", "sexpr-loc-bound-bodies"},
  {"$sexpr-monitor-tag", "$sexpr-monitor-tag"},
  {"sexpr-isa-parents", "sexpr-isa-parents"},
  {"$sexpr-unwind-protect-tag", "$sexpr-unwind-protect-tag"},
  {"sexpr-method-signature", "sexpr-method-signature"},
  {"$sexpr-locals-tag", "$sexpr-locals-tag"},
  {"sexpr-forward-primitive?", "sexpr-forward-primitive?"},
  {"$sexpr-quasiquote-tag", "$sexpr-quasiquote-tag"},
  {"sexpr-if-else", "sexpr-if-else"},
  {"sexpr-slot-init", "sexpr-slot-init"},
  {"$sexpr-slot-tag", "$sexpr-slot-tag"},
  {"sexpr-unwind-protect-cleanup-forms", "sexpr-unwind-protect-cleanup-forms"},
  {"$sexpr-begin-tag", "$sexpr-begin-tag"},
  {"$sexpr-define-function-tag", "$sexpr-define-function-tag"},
  {"sexpr-loc-bound-names", "sexpr-loc-bound-names"},
  {"sexpr-syntax-definition-variable", "sexpr-syntax-definition-variable"},
  {"$sexpr-method-tag", "$sexpr-method-tag"},
  {"$sexpr-isa-tag", "$sexpr-isa-tag"},
  {"sexpr-make-macro-function", "sexpr-make-macro-function"},
  {"sexpr-slot-variable", "sexpr-slot-variable"},
  {"$sexpr-define-generic-tag", "$sexpr-define-generic-tag"},
  {"$sexpr-set-tag", "$sexpr-set-tag"},
  {"sexpr-operator", "sexpr-operator"},
  {"sexpr-unquote?", "sexpr-unquote?"},
  {"sexpr-definition-value", "sexpr-definition-value"},
  {"sexpr-if-then", "sexpr-if-then"},
  {"sexpr-monitor-expand", "sexpr-monitor-expand"},
  {"$sexpr-macro-expand-tag", "$sexpr-macro-expand-tag"},
  {"sexpr-slot-object", "sexpr-slot-object"},
  {"sexpr-variable-type", "sexpr-variable-type"},
  {"sexpr-isa-init-values", "sexpr-isa-init-values"},
  {"$sexpr-define-tag", "$sexpr-define-tag"},
  {"$sexpr-define-method-tag", "$sexpr-define-method-tag"},
  {"sexpr-if-test", "sexpr-if-test"},
  {"sexpr-bind-pattern-variables", "sexpr-bind-pattern-variables"},
  {"sexpr-loc-bound-signatures", "sexpr-loc-bound-signatures"},
  {"sexpr-make-anonymous-method", "sexpr-make-anonymous-method"},
  {"sexpr-make-setter", "sexpr-make-setter"},
  {"sexpr-make-begin", "sexpr-make-begin"},
  {"sexpr-block-name", "sexpr-block-name"},
  {"$sexpr-quote-tag", "$sexpr-quote-tag"},
  {"sexpr-define-class-parents", "sexpr-define-class-parents"},
  {"sexpr-syntax-if-else", "sexpr-syntax-if-else"},
  {"sexpr-definition-variable", "sexpr-definition-variable"},
  {"sexpr-signature-value", "sexpr-signature-value"},
  {"sexpr-text-of-quotation", "sexpr-text-of-quotation"},
  {"sexpr-function-signature", "sexpr-function-signature"},
  {"sexpr-make-setter-name", "sexpr-make-setter-name"},
  {"$sexpr-define-class-tag", "$sexpr-define-class-tag"},
  {"sexpr-function-definition-variable", "sexpr-function-definition-variable"},
  {"sexpr-operands", "sexpr-operands"},
  {"sexpr-variable-name", "sexpr-variable-name"},
  {"sexpr-syntax-if-then", "sexpr-syntax-if-then"},
  {"sexpr-iterate->loc", "sexpr-iterate->loc"},
  {"sexpr-assignment-value", "sexpr-assignment-value"},
  {"sexpr-isa-slot-inits", "sexpr-isa-slot-inits"},
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
