/* PROTO 2 C $REVISION: 0.1 $ 
  */

#include "proto.h"

/* GLOBAL ENVIRONMENT: */
DEF(Ynow_elt_setter,"now-elt-setter");
DEF(Yport_index,"port-index");
DEF(Yfun_cache,"fun-cache");
DEF(YLdescriptionG,"<description>");
DEF(Ydo,"do");
DEF(Ygen_from_met,"gen-from-met");
DEF(Yenv_runtime_value,"env-runtime-value");
DEF(YOfun_specs,"@fun-specs");
DEF(Ytraits_slots,"traits-slots");
DEF(Ymake_handler,"make-handler");
DEF(Yassocs_vals,"assocs-vals");
DEF(YLapplicationG,"<application>");
DEF(Yenv_binding_value_setter,"env-binding-value-setter");
DEF(Ysexpr_operator,"sexpr-operator");
DEF(Yinsert_globalX,"insert-global!");
DEF(YLbindingG,"<binding>");
DEF(Yspecial_quote,"special-quote");
DEF(Yos_binding_value_setter,"os-binding-value-setter");
DEF(YPindex_setter,"%index-setter");
DEF(Ylognot,"lognot");
DEF(Yifun,"ifun");
DEF(Yapplication_arguments_setter,"application-arguments-setter");
DEF(YDsexpr_define_syntax_tag,"$sexpr-define-syntax-tag");
DEF(Yas_uppercase,"as-uppercase");
DEF(YOgen_cache_classes_setter,"@gen-cache-classes-setter");
DEF(Ycall_with_output_file,"call-with-output-file");
DEF(Ysif_then,"sif-then");
DEF(YDsexpr_unwind_protect_tag,"$sexpr-unwind-protect-tag");
DEF(YreduceA,"reduce+");
DEF(Yload,"load");
DEF(Yenv_runtime_value_setter,"env-runtime-value-setter");
DEF(YLruntime_bindingG,"<runtime-binding>");
DEF(Ygobble_line,"gobble-line");
DEF(Yfin_stateQ,"fin-state?");
DEF(Yarguments_tail_setter,"arguments-tail-setter");
DEF(Yp,"p");
DEF(Yenv_names_setter,"env-names-setter");
DEF(YDsexpr_monitor_tag,"$sexpr-monitor-tag");
DEF(YLslotG,"<slot>");
DEF(YTstatic_predefined_global_boot_environmentT,"*static-predefined-global-boot-environment*");
DEF(Yapplication_arguments,"application-arguments");
DEF(Ysexpr_block_body,"sexpr-block-body");
DEF(YlowercaseQ,"lowercase?");
DEF(YDsexpr_syntax_if_tag,"$sexpr-syntax-if-tag");
DEF(YDsexpr_slot_tag,"$sexpr-slot-tag");
DEF(Ynyi_error,"nyi-error");
DEF(YLspecsG,"<specs>");
DEF(YTbq_listT,"*bq-list*");
DEF(YLregular_applicationG,"<regular-application>");
DEF(YTstatic_global_environmentT,"*static-global-environment*");
DEF(Yenv_parent_setter,"env-parent-setter");
DEF(Yspecial_set,"special-set");
DEF(YNEE,"~==");
DEF(Yfix_let_arguments,"fix-let-arguments");
DEF(Yenvironment_next_index,"environment-next-index");
DEF(Ydefault_type,"default-type");
DEF(Yspecial_define,"special-define");
DEF(Ypush,"push");
DEF(YLgenG,"<gen>");
DEF(Yfile_opening_error,"file-opening-error");
DEF(Yenv_function_setter,"env-function-setter");
DEF(Yspecial_define_syntax,"special-define-syntax");
DEF(Ymodulo,"modulo");
DEF(YquotationQ,"quotation?");
DEF(YLstatic_environmentG,"<static-environment>");
DEF(YLlocal_assignmentG,"<local-assignment>");
DEF(Ysexpr_make_application,"sexpr-make-application");
DEF(Yhandler_function_setter,"handler-function-setter");
DEF(Ytraits_parents,"traits-parents");
DEF(Ydel,"del");
DEF(Yassignment_form,"assignment-form");
DEF(Yconstant_value_setter,"constant-value-setter");
DEF(Yslot_owner_setter,"slot-owner-setter");
DEF(Ylocals_body_setter,"locals-body-setter");
DEF(Ysexpr_pattern_variableQ,"sexpr-pattern-variable?");
DEF(Y3rd,"3rd");
DEF(Yenvironment_next_setter,"environment-next-setter");
DEF(Ysexpr_make_method,"sexpr-make-method");
DEF(YDsexpr_method_tag,"$sexpr-method-tag");
DEF(Ymap_keyed,"map-keyed");
DEF(Ysexpr_macro_expandQ,"sexpr-macro-expand?");
DEF(Ybinding_description_setter,"binding-description-setter");
DEF(YDsexpr_quasiquote_tag,"$sexpr-quasiquote-tag");
DEF(YfloorS,"floor/");
DEF(YLmatch_unquote_splicingG,"<match-unquote-splicing>");
DEF(Yarguments_head,"arguments-head");
DEF(Yreverse_list_Gstring,"reverse-list->string");
DEF(Yenvironment_next,"environment-next");
DEF(Yapp_filename,"app-filename");
DEF(YLast_primitiveG,"<ast-primitive>");
DEF(YPvacated,"%vacated");
DEF(Ystr,"str");
DEF(Ysexpr_rest_exps,"sexpr-rest-exps");
DEF(Yobject_parents,"object-parents");
DEF(Yalternative_consequent,"alternative-consequent");
DEF(Ymaybe_write_proto_name,"maybe-write-proto-name");
DEF(Ysexpr_syntax_definition_variable,"sexpr-syntax-definition-variable");
DEF(Ynow_elt,"now-elt");
DEF(YOdel_dups,"@del-dups");
DEF(Ysexpr_unwind_protect_protected_form,"sexpr-unwind-protect-protected-form");
DEF(YDsexpr_define_tag,"$sexpr-define-tag");
DEF(YLserious_conditionG,"<serious-condition>");
DEF(YLmatch_bindingG,"<match-binding>");
DEF(YDsexpr_bind_exit_tag,"$sexpr-bind-exit-tag");
DEF(Ymap,"map");
DEF(YTproto_versionT,"*proto-version*");
DEF(Yorder_specs,"order-specs");
DEF(Yreference_frame_offset_setter,"reference-frame-offset-setter");
DEF(YDsexpr_macro_expand_tag,"$sexpr-macro-expand-tag");
DEF(Ylast,"last");
DEF(Yast_eval_boundQ,"ast-eval-bound?");
DEF(YLmatch_listG,"<match-list>");
DEF(Yspecial_define_function,"special-define-function");
DEF(Yidentity,"identity");
DEF(Yassignment_reference,"assignment-reference");
DEF(Ytail_setter,"tail-setter");
DEF(Yinit_ast_eval,"init-ast-eval");
DEF(Ysexpr_make_begin,"sexpr-make-begin");
DEF(Yspecial_if,"special-if");
DEF(Ypair,"pair");
DEF(Ytraits_direct_slots,"traits-direct-slots");
DEF(Ybind_exit_main_fun_setter,"bind-exit-main-fun-setter");
DEF(Ysif_bindings_setter,"sif-bindings-setter");
DEF(Ysexpr_method_parameters,"sexpr-method-parameters");
DEF(Yfab,"fab");
DEF(Ysexpr_if_else,"sexpr-if-else");
DEF(Ycompute_local_reference_offsets,"compute-local-reference-offsets");
DEF(YDnul_loc_env,"$nul-loc-env");
DEF(Ytable_shrink_threshold,"table-shrink-threshold");
DEF(Yto_digit,"to-digit");
DEF(Ysub_read_token,"sub-read-token");
DEF(Ysexpr_syntax_if_value,"sexpr-syntax-if-value");
DEF(YDsexpr_set_tag,"$sexpr-set-tag");
DEF(YDsexpr_isa_tag,"$sexpr-isa-tag");
DEF(Ypower_of_two_ceiling,"power-of-two-ceiling");
DEF(Yspecial_slot,"special-slot");
DEF(Yfunction_bindings,"function-bindings");
DEF(Ysequentialize,"sequentialize");
DEF(Yfun_code_setter,"fun-code-setter");
DEF(YLtab_stateG,"<tab-state>");
DEF(Ysexpr_if_test,"sexpr-if-test");
DEF(YLmetG,"<met>");
DEF(Yapply,"apply");
DEF(YLhandlerG,"<handler>");
DEF(Ymake_immutableX,"make-immutable!");
DEF(Yobjectify_function,"objectify-function");
DEF(YPbucket,"%bucket");
DEF(Yslot_offset,"slot-offset");
DEF(YPbucket_setter,"%bucket-setter");
DEF(YcatX,"cat!");
DEF(Yos_binding_value,"os-binding-value");
DEF(YLpredefined_applicationG,"<predefined-application>");
DEF(Ysexpr_expand_backquote,"sexpr-expand-backquote");
DEF(Ysexpr_isa_init_values,"sexpr-isa-init-values");
DEF(YrevX,"rev!");
DEF(YDsexpr_optionals_tag,"$sexpr-optionals-tag");
DEF(Ybase_path,"base-path");
DEF(Yfun_arity_setter,"fun-arity-setter");
DEF(Ytable_growth_threshold_setter,"table-growth-threshold-setter");
DEF(Ycondition_message,"condition-message");
DEF(YPindex,"%index");
DEF(YLanyG,"<any>");
DEF(YLkeyboard_interruptG,"<keyboard-interrupt>");
DEF(Yenv_global_binding_value_or,"env-global-binding-value-or");
DEF(YLstatic_predefined_global_environmentG,"<static-predefined-global-environment>");
DEF(Ysexpr_monitor_body,"sexpr-monitor-body");
DEF(YceilingS,"ceiling/");
DEF(Ytraits_direct_parents,"traits-direct-parents");
DEF(YTbq_quoteT,"*bq-quote*");
DEF(YtruncateS,"truncate/");
DEF(Yenv_global_binding_value_setter,"env-global-binding-value-setter");
DEF(YboundQ_reference_setter,"bound?-reference-setter");
DEF(YOdo,"@do");
DEF(Ysexpr_monitorQ,"sexpr-monitor?");
DEF(YDsexpr_macro_tag,"$sexpr-macro-tag");
DEF(YLmatch_empty_listG,"<match-empty-list>");
DEF(YDnul_init,"$nul-init");
DEF(Ytraits_direct_slots_setter,"traits-direct-slots-setter");
DEF(YLstatic_empty_environmentG,"<static-empty-environment>");
DEF(YLast_generic_definitionG,"<ast-generic-definition>");
DEF(Ymake_reader_token,"make-reader-token");
DEF(Yspecial_unwind_protect,"special-unwind-protect");
DEF(YTmagic_bindingsT,"*magic-bindings*");
DEF(Yempty_sequential,"empty-sequential");
DEF(Ywrite_number,"write-number");
DEF(Ysexpr_loc_body,"sexpr-loc-body");
DEF(YPdefine_setter,"%define-setter");
DEF(Yspecial_macro_expand,"special-macro-expand");
DEF(YLassignmentG,"<assignment>");
DEF(Yobjectify_bind_list,"objectify-bind-list");
DEF(Ysexpr_slotQ,"sexpr-slot?");
DEF(YLmatch_atomG,"<match-atom>");
DEF(YLenvG,"<env>");
DEF(Yobjectify_assignment,"objectify-assignment");
DEF(Yfun_naryQ_setter,"fun-nary?-setter");
DEF(YLfunG,"<fun>");
DEF(YDsexpr_Praw_tag,"$sexpr-%raw-tag");
DEF(Ypeek_char,"peek-char");
DEF(YOrevX,"@rev!");
DEF(Ytraits_owner,"traits-owner");
DEF(Ysequential_tail,"sequential-tail");
DEF(Yct_boot_env,"ct-boot-env");
DEF(Ystr_parse,"str-parse");
DEF(Yfunction_body,"function-body");
DEF(Yin,"in");
DEF(YDempty_sequential,"$empty-sequential");
DEF(YLsyntax_ifG,"<syntax-if>");
DEF(Ywriteln,"writeln");
DEF(YTdebug_tablesQT,"*debug-tables?*");
DEF(YOtup,"@tup");
DEF(YDvacated_cell_marker,"$vacated-cell-marker");
DEF(Ybox_value_setter,"box-value-setter");
DEF(Ymethod_accessor_offset,"method-accessor-offset");
DEF(Ysexpr_assignment_variable,"sexpr-assignment-variable");
DEF(Yrecurring_write,"recurring-write");
DEF(Ymonitor_main_thunk,"monitor-main-thunk");
DEF(Yinsert_globalsX,"insert-globals!");
DEF(Ysif_value_setter,"sif-value-setter");
DEF(YG,">");
DEF(Ysexpr_definitionQ,"sexpr-definition?");
DEF(YL,"<");
DEF(YDstring_escape_chars,"$string-escape-chars");
DEF(Yadd_slot,"add-slot");
DEF(YE,"=");
DEF(YLstrG,"<str>");
DEF(Ynreconc,"nreconc");
DEF(YLslotsG,"<slots>");
DEF(YOlst,"@lst");
DEF(Yos_name,"os-name");
DEF(Ysexpr_unquote_splicingQ,"sexpr-unquote-splicing?");
DEF(Ywrite_char_literal,"write-char-literal");
DEF(Yast_read_eval,"ast-read-eval");
DEF(Ybox_value,"box-value");
DEF(Ybinding_index,"binding-index");
DEF(Ytrace,"trace");
DEF(Yunwind_protect_cleanup_thunk_setter,"unwind-protect-cleanup-thunk-setter");
DEF(Yobject_name,"object-name");
DEF(Yslot_setter_setter,"slot-setter-setter");
DEF(Yobjectify_bind_unquote,"objectify-bind-unquote");
DEF(Yast_eval_match,"ast-eval-match");
DEF(Ywrite_fun_guts,"write-fun-guts");
DEF(Yeval,"eval");
DEF(YOgen_cache_classes,"@gen-cache-classes");
DEF(YLfix_letG,"<fix-let>");
DEF(Yapplication_binding,"application-binding");
DEF(Ynumber_of,"number-of");
DEF(Ysexpr_syntax_if_else,"sexpr-syntax-if-else");
DEF(YPprimary_modulus_setter,"%primary-modulus-setter");
DEF(YLvariable_definitionG,"<variable-definition>");
DEF(YLvecG,"<vec>");
DEF(Yhash_moduli,"hash-moduli");
DEF(Yobjectify_generic_definition,"objectify-generic-definition");
DEF(Ysub_read_carefully,"sub-read-carefully");
DEF(YLflatG,"<flat>");
DEF(YLstr_tabG,"<str-tab>");
DEF(Yenv_local_reference_value_setter,"env-local-reference-value-setter");
DEF(Ynil,"nil");
DEF(YLtraitsG,"<traits>");
DEF(Yload_in,"load-in");
DEF(YLportG,"<port>");
DEF(Ymap_tree,"map-tree");
DEF(YPbucket_depth,"%bucket-depth");
DEF(YOmemQ,"@mem?");
DEF(Yport_contents,"port-contents");
DEF(Yread_string_literal,"read-string-literal");
DEF(Yfab_glo_env,"fab-glo-env");
DEF(YmetL,"met<");
DEF(YLlstG,"<lst>");
DEF(Ysexpr_unquoteQ,"sexpr-unquote?");
DEF(YOmap,"@map");
DEF(YLtupG,"<tup>");
DEF(YPn_buckets_setter,"%n-buckets-setter");
DEF(Yboot_symbols,"boot-symbols");
DEF(Ytup,"tup");
DEF(Yload_from,"load-from");
DEF(Ypreferred_case,"preferred-case");
DEF(Yascii_chars,"ascii-chars");
DEF(Yenv_values_setter,"env-values-setter");
DEF(YLseqG,"<seq>");
DEF(YLcolG,"<col>");
DEF(YPPstr_dat,"%%str-dat");
DEF(Yfunction_bindings_setter,"function-bindings-setter");
DEF(YLglo_envG,"<glo-env>");
DEF(Yport_guts,"port-guts");
DEF(YPloc_val,"%loc-val");
DEF(YPdefine_getter,"%define-getter");
DEF(Ybacktrace,"backtrace");
DEF(Ysexpr_text_of_quotation,"sexpr-text-of-quotation");
DEF(YOfun_mets_setter,"@fun-mets-setter");
DEF(Yspecial_define_method,"special-define-method");
DEF(Yfix_let_arguments_setter,"fix-let-arguments-setter");
DEF(Yftype,"ftype");
DEF(YLintG_traits,"<int>-traits");
DEF(YLtabG,"<tab>");
DEF(Ysexpr_tagged_listQ,"sexpr-tagged-list?");
DEF(YPsymbols,"%symbols");
DEF(YOgen_cache_singletons,"@gen-cache-singletons");
DEF(Ytruncate,"truncate");
DEF(Ymatch_binding,"match-binding");
DEF(YLoutput_portG,"<output-port>");
DEF(Yreader_tokenQ,"reader-token?");
DEF(YLlocG,"<loc>");
DEF(YPchr_val,"%chr-val");
DEF(Ymatch_element,"match-element");
DEF(Yspecial_iterate,"special-iterate");
DEF(Ybinding_dottedQ,"binding-dotted?");
DEF(Yobjectify_raw,"objectify-raw");
DEF(Ysub_read,"sub-read");
DEF(Yprimitives,"primitives");
DEF(Ysexpr_variableQ,"sexpr-variable?");
DEF(Ynul_slot,"nul-slot");
DEF(Ygen_cache_classes_setter,"gen-cache-classes-setter");
DEF(Ynul,"nul");
DEF(Ywrite,"write");
DEF(Yread,"read");
DEF(Yrt_glo_env,"rt-glo-env");
DEF(Yport_handle_setter,"port-handle-setter");
DEF(YLchrG,"<chr>");
DEF(YLstring_input_portG,"<string-input-port>");
DEF(YTprimitivesT,"*primitives*");
DEF(YPflo_val,"%flo-val");
DEF(Yspecial_compile_time,"special-compile-time");
DEF(YPgc_state_setter,"%gc-state-setter");
DEF(Ysexpr_methodQ,"sexpr-method?");
DEF(Ysexpr_quotedQ,"sexpr-quoted?");
DEF(Yobjectify_function_definition,"objectify-function-definition");
DEF(Yobjectify_quotation,"objectify-quotation");
DEF(YLglobal_referenceG,"<global-reference>");
DEF(YOOEE,"@@==");
DEF(Yobjectify_definition,"objectify-definition");
DEF(YLcompile_timeG,"<compile-time>");
DEF(YLruntime_assignmentG,"<runtime-assignment>");
DEF(Yslot_value,"slot-value");
DEF(Yfind_getter,"find-getter");
DEF(YPPvec_dat,"%%vec-dat");
DEF(Ystr_parse_in,"str-parse-in");
DEF(Yassignment_binding,"assignment-binding");
DEF(Yobjectify_sequential,"objectify-sequential");
DEF(Yreference_frame_number,"reference-frame-number");
DEF(Ysexpr_definition_variable,"sexpr-definition-variable");
DEF(YTstackT,"*stack*");
DEF(YLfloG,"<flo>");
DEF(YPint_val,"%int-val");
DEF(Ydescription_comparator_setter,"description-comparator-setter");
DEF(Yport_guts_setter,"port-guts-setter");
DEF(YPfinalize_slotsX,"%finalize-slots!");
DEF(Ynot,"not");
DEF(Ygen_lookup_miss,"gen-lookup-miss");
DEF(YTread_dispatch_vectorT,"*read-dispatch-vector*");
DEF(YTrt_envT,"*rt-env*");
DEF(YPvnul,"%vnul");
DEF(Yreference_binding,"reference-binding");
DEF(YPsnul,"%snul");
DEF(Ydefault,"default");
DEF(Ysexpr_operands,"sexpr-operands");
DEF(Yslot_value_setter,"slot-value-setter");
DEF(YLintG,"<int>");
DEF(Ysexpr_variable_name,"sexpr-variable-name");
DEF(YLnumG,"<num>");
DEF(Ysexpr_function_parameters,"sexpr-function-parameters");
DEF(Yrt_env_setter,"rt-env-setter");
DEF(YPpatch_early_generics,"%patch-early-generics");
DEF(YTbq_clobberableT,"*bq-clobberable*");
DEF(Ytable_protocol,"table-protocol");
DEF(YobjectL,"object<");
DEF(Ysexpr_function_definition_variable,"sexpr-function-definition-variable");
DEF(YPtrue,"%true");
DEF(Yempty_argument_list,"empty-argument-list");
DEF(YLslotG_traits,"<slot>-traits");
DEF(Yinteger_Gchar,"integer->char");
DEF(Ysif_bindings,"sif-bindings");
DEF(YPfalse,"%false");
DEF(YLlogG,"<log>");
DEF(Ysexpr_applicationQ,"sexpr-application?");
DEF(Yenv_local_reference_value,"env-local-reference-value");
DEF(YOfill,"@fill");
DEF(YLast_method_definitionG,"<ast-method-definition>");
DEF(Ylocals_bindings_setter,"locals-bindings-setter");
DEF(Yfunction_kind,"function-kind");
DEF(YDsexpr_define_generic_tag,"$sexpr-define-generic-tag");
DEF(Ysexpr_make_setter_name,"sexpr-make-setter-name");
DEF(Yspecial_begin,"special-begin");
DEF(YLmatch_unquoteG,"<match-unquote>");
DEF(YTbq_nconcT,"*bq-nconc*");
DEF(YOOemptyQ,"@@empty?");
DEF(YLfile_output_portG,"<file-output-port>");
DEF(Yas_binding_name,"as-binding-name");
DEF(Ydescription_arity_setter,"description-arity-setter");
DEF(Yfun_mets,"fun-mets");
DEF(Yobjectify_unwind_protect,"objectify-unwind-protect");
DEF(YPvector,"%vector");
DEF(Yhead,"head");
DEF(Ysexpr_isaQ,"sexpr-isa?");
DEF(YPdefine_accessor,"%define-accessor");
DEF(YOfind_key,"@find-key");
DEF(YLsymG,"<sym>");
DEF(Ysexpr_sequence_Gbegin,"sexpr-sequence->begin");
DEF(Ytail,"tail");
DEF(YOgen_cache_singletons_setter,"@gen-cache-singletons-setter");
DEF(YPcount,"%count");
DEF(YTstatic_global_boot_environmentT,"*static-global-boot-environment*");
DEF(Yassocs_keys,"assocs-keys");
DEF(Yobjectify_binding,"objectify-binding");
DEF(Yremainder,"remainder");
DEF(YPcount_setter,"%count-setter");
DEF(Yfill,"fill");
DEF(Yname,"name");
DEF(YemptyQ,"empty?");
DEF(Ysexpr_iterate_body,"sexpr-iterate-body");
DEF(Ycat2,"cat2");
DEF(Ysexpr_iterate_inits,"sexpr-iterate-inits");
DEF(Ysub,"sub");
DEF(Yc_filename,"c-filename");
DEF(Ytable_shrink_threshold_setter,"table-shrink-threshold-setter");
DEF(Yread_from_string,"read-from-string");
DEF(Yout,"out");
DEF(Ycopy_to_new_vector,"copy-to-new-vector");
DEF(Ymin,"min");
DEF(Yprompt_for_command_expression,"prompt-for-command-expression");
DEF(Yfab_sym,"fab-sym");
DEF(YTsharp_macrosT,"*sharp-macros*");
DEF(Yr_extendT,"r-extend*");
DEF(Ysequential_tail_setter,"sequential-tail-setter");
DEF(YLast_functionG,"<ast-function>");
DEF(Ymax,"max");
DEF(Yfun_env,"fun-env");
DEF(Yobjectify_compile_time,"objectify-compile-time");
DEF(YOfun_mets,"@fun-mets");
DEF(Ymap2,"map2");
DEF(Ylsh,"lsh");
DEF(YLstatic_global_environmentG,"<static-global-environment>");
DEF(Yvar_name,"var-name");
DEF(Ysexpr_let_bound_variables,"sexpr-let-bound-variables");
DEF(YLbinding_nameG,"<binding-name>");
DEF(Y_,"-");
DEF(YLmatchG,"<match>");
DEF(Yread_file,"read-file");
DEF(Yopen_output_file,"open-output-file");
DEF(Ymatch_error,"match-error");
DEF(YDdigit_to_char,"$digit-to-char");
DEF(Ypos,"pos");
DEF(Ysexpr_assignment_value,"sexpr-assignment-value");
DEF(Ysexpr_syntax_ifQ,"sexpr-syntax-if?");
DEF(YzeroQ,"zero?");
DEF(YPdefine_structure,"%define-structure");
DEF(Ydefine_sharp_macro,"define-sharp-macro");
DEF(YoddQ,"odd?");
DEF(Ychoose_table_geometry,"choose-table-geometry");
DEF(Ysexpr_first_operand,"sexpr-first-operand");
DEF(YLlstG_traits,"<lst>-traits");
DEF(YalphabeticQ,"alphabetic?");
DEF(Ytype_error,"type-error");
DEF(YPcheck_typesQ,"%check-types?");
DEF(Ysexpr_make_if,"sexpr-make-if");
DEF(Yneg,"neg");
DEF(Ybinding_dottedQ_setter,"binding-dotted?-setter");
DEF(Yspecial_bind_exit,"special-bind-exit");
DEF(Yrcurry,"rcurry");
DEF(Yopt_args,"opt-args");
DEF(YPcollect_direct_slots,"%collect-direct-slots");
DEF(YLmatch_structureG,"<match-structure>");
DEF(Ysexpr_bind_pattern_variables,"sexpr-bind-pattern-variables");
DEF(Yobject_traits,"object-traits");
DEF(Ysequential_head,"sequential-head");
DEF(YLparentsG,"<parents>");
DEF(YLconstantG,"<constant>");
DEF(Yslot_init_setter,"slot-init-setter");
DEF(YTcurrent_handlersT,"*current-handlers*");
DEF(Yassocs_test,"assocs-test");
DEF(YLinput_portG,"<input-port>");
DEF(Ypick,"pick");
DEF(YOelt,"@elt");
DEF(Yast_eval_in,"ast-eval-in");
DEF(YDstrange_symbol_names,"$strange-symbol-names");
DEF(YPdefine_structure_accessors,"%define-structure-accessors");
DEF(YLtraitsG_traits,"<traits>-traits");
DEF(Ymatch_elements_setter,"match-elements-setter");
DEF(Yobjectify_error,"objectify-error");
DEF(Yascii_limit,"ascii-limit");
DEF(Yfix_let_bindings,"fix-let-bindings");
DEF(Yascii_whitespaces,"ascii-whitespaces");
DEF(Yinto,"into");
DEF(Ysvec_len_setter,"svec-len-setter");
DEF(Yselect,"select");
DEF(Ysexpr_method_values,"sexpr-method-values");
DEF(YLpredefined_referenceG,"<predefined-reference>");
DEF(Yport_handle,"port-handle");
DEF(YPstr_eqQ,"%str-eq?");
DEF(YDtag_msk,"$tag-msk");
DEF(Ychar_readyQ,"char-ready?");
DEF(Yfind_setter,"find-setter");
DEF(Yparse,"parse");
DEF(Ydel_dups,"del-dups");
DEF(Ysexpr_iterate_Gloc,"sexpr-iterate->loc");
DEF(Yclose_input_port,"close-input-port");
DEF(Yenv_binding_value,"env-binding-value");
DEF(Ylocals_body,"locals-body");
DEF(YLsimple_table_vectorG,"<simple-table-vector>");
DEF(YPdefine_boxed_structure,"%define-boxed-structure");
DEF(Yunless,"unless");
DEF(Ysexpr_atomQ,"sexpr-atom?");
DEF(Ylocals_functions,"locals-functions");
DEF(YLmetG_traits,"<met>-traits");
DEF(YLpredefined_bindingG,"<predefined-binding>");
DEF(Yapp_args,"app-args");
DEF(Yconstant_value,"constant-value");
DEF(Ysexpr_make_getter,"sexpr-make-getter");
DEF(Ydisplay,"display");
DEF(Yini_state,"ini-state");
DEF(Ydel_key,"del-key");
DEF(Ymonitor_handler,"monitor-handler");
DEF(YDadr_tag,"$adr-tag");
DEF(Yassocs_test_setter,"assocs-test-setter");
DEF(Ysexpr_signature_values,"sexpr-signature-values");
DEF(YPsecondary_modulus,"%secondary-modulus");
DEF(YevenQ,"even?");
DEF(Yobject_direct_parents,"object-direct-parents");
DEF(Yfun_naryQ,"fun-nary?");
DEF(Ycharacter_name,"character-name");
DEF(Ydefault_handler,"default-handler");
DEF(Yconvert2arguments,"convert2arguments");
DEF(Ydo_key_vals,"do-key-vals");
DEF(Yfix_let_body_setter,"fix-let-body-setter");
DEF(Ychoose_method,"choose-method");
DEF(YroundS,"round/");
DEF(Yrt_glo_env_setter,"rt-glo-env-setter");
DEF(Ysexpr_blockQ,"sexpr-block?");
DEF(YDtag_len,"$tag-len");
DEF(Yprocess_closed_application,"process-closed-application");
DEF(YPfab_sym2,"%fab-sym2");
DEF(Ytraits_parents_setter,"traits-parents-setter");
DEF(YPfinalize_slots,"%finalize-slots");
DEF(YDdirect_object_traits,"$direct-object-traits");
DEF(YPboot_defs,"%boot-defs");
DEF(Yinit_ast,"init-ast");
DEF(Yalternative_condition,"alternative-condition");
DEF(Ychar_Ginteger,"char->integer");
DEF(YPmap_boot_protos,"%map-boot-protos");
DEF(YLE,"<=");
DEF(Ywrite_string_literal,"write-string-literal");
DEF(Yarguments_head_setter,"arguments-head-setter");
DEF(YPdefine_tagged_structure,"%define-tagged-structure");
DEF(YPobject_shells,"%object-shells");
DEF(Yassq,"assq");
DEF(Ylogand,"logand");
DEF(YLalternativeG,"<alternative>");
DEF(Yinit_rt_environment,"init-rt-environment");
DEF(Ylogior,"logior");
DEF(YOcat2,"@cat2");
DEF(Yabs,"abs");
DEF(YPdispatch,"%dispatch");
DEF(YLoptsG,"<opts>");
DEF(Yfabs,"fabs");
DEF(Ytop,"top");
DEF(YTprotosT,"*protos*");
DEF(Yfun_specs,"fun-specs");
DEF(YPmap_boot_slots,"%map-boot-slots");
DEF(YPfab_sym3,"%fab-sym3");
DEF(YDreader_token_marker,"$reader-token-marker");
DEF(YPadd_met,"%add-met");
DEF(Yspecial_locals,"special-locals");
DEF(YuppercaseQ,"uppercase?");
DEF(Ysexpr_first_exp,"sexpr-first-exp");
DEF(Yinc,"inc");
DEF(Ysif_then_setter,"sif-then-setter");
DEF(Ybot,"bot");
DEF(Yfun_specs_setter,"fun-specs-setter");
DEF(YLargument_listG,"<argument-list>");
DEF(YPfun_specs,"%fun-specs");
DEF(YPcat,"%cat");
DEF(Yassignment_reference_setter,"assignment-reference-setter");
DEF(Yfix_let_body,"fix-let-body");
DEF(YPdefine_hierarchy,"%define-hierarchy");
DEF(YPlist,"%list");
DEF(YOanyQ,"@any?");
DEF(Ysingleton_specQ,"singleton-spec?");
DEF(Yspecial_define_generic,"special-define-generic");
DEF(Yor,"or");
DEF(Yenv_parent,"env-parent");
DEF(Yassocs_vals_setter,"assocs-vals-setter");
DEF(YPfun_naryQ,"%fun-nary?");
DEF(YOall2Q,"@all2?");
DEF(Ynum_to_str,"num-to-str");
DEF(Yfun_mets_setter,"fun-mets-setter");
DEF(Yfun_code,"fun-code");
DEF(YLgenG_traits,"<gen>-traits");
DEF(Ysvec_len,"svec-len");
DEF(YLast_genericG,"<ast-generic>");
DEF(Yset_standard_read_macroX,"set-standard-read-macro!");
DEF(Yenv_define_bindingX,"env-define-binding!");
DEF(Yalternative_condition_setter,"alternative-condition-setter");
DEF(Ysub_read_list,"sub-read-list");
DEF(YaddX,"add!");
DEF(Yproto_filename,"proto-filename");
DEF(Yfun_same_metQ,"fun-same-met?");
DEF(YLsimple_errorG,"<simple-error>");
DEF(Yinit_static_global_environment,"init-static-global-environment");
DEF(Ysorted_app_mets,"sorted-app-mets");
DEF(Yvar_type,"var-type");
DEF(Ysexpr_function_body,"sexpr-function-body");
DEF(YnumericQ,"numeric?");
DEF(Yensure_traits,"ensure-traits");
DEF(Ystr_to_num,"str-to-num");
DEF(Yfun_cache_setter,"fun-cache-setter");
DEF(YLdefinitionG,"<definition>");
DEF(YOfun_arity,"@fun-arity");
DEF(Yrot,"rot");
DEF(Y2nd,"2nd");
DEF(Yobjectify_assignment_using,"objectify-assignment-using");
DEF(Ysexpr_letQ,"sexpr-let?");
DEF(Ysexpr_loc_raw_body,"sexpr-loc-raw-body");
DEF(YposQ,"pos?");
DEF(Ywrong_number_arguments_error,"wrong-number-arguments-error");
DEF(Ysexpr_loc_bound_bodies,"sexpr-loc-bound-bodies");
DEF(Yvec,"vec");
DEF(YTgensym_counterT,"*gensym-counter*");
DEF(Ysexpr_locQ,"sexpr-loc?");
DEF(Ysexpr_let_Gcombination,"sexpr-let->combination");
DEF(Ysexpr_loc_bound_parameters,"sexpr-loc-bound-parameters");
DEF(Yfloor,"floor");
DEF(Ybinding_index_setter,"binding-index-setter");
DEF(Yobjectify_boundQ,"objectify-bound?");
DEF(YLsequentialG,"<sequential>");
DEF(YLfile_portG,"<file-port>");
DEF(Ybinding_freeQ_setter,"binding-free?-setter");
DEF(Ysexpr_make_syntax_if,"sexpr-make-syntax-if");
DEF(Ysexpr_loc_bound_names,"sexpr-loc-bound-names");
DEF(YPregister_early_generic,"%register-early-generic");
DEF(Yobjectify,"objectify");
DEF(Ysif_pattern_setter,"sif-pattern-setter");
DEF(Ystr_eval,"str-eval");
DEF(Ydo_keyed,"do-keyed");
DEF(Ywrite_to_string,"write-to-string");
DEF(Yparse_token,"parse-token");
DEF(Yobjectify_locals,"objectify-locals");
DEF(YLprogramG,"<program>");
DEF(Ysymbols,"symbols");
DEF(Yparse_in,"parse-in");
DEF(Ylocative_value,"locative-value");
DEF(Ybinding_freeQ,"binding-free?");
DEF(YDsexpr_boundQ_tag,"$sexpr-bound?-tag");
DEF(Yalter,"alter");
DEF(Ypop,"pop");
DEF(Ybinding_handler,"binding-handler");
DEF(Yfind_app_singleton_mets,"find-app-singleton-mets");
DEF(Yobjectify_monitor,"objectify-monitor");
DEF(Yid_hash,"id-hash");
DEF(Yenvironment_next_index_setter,"environment-next-index-setter");
DEF(Ypairize,"pairize");
DEF(YDsexpr_let_tag,"$sexpr-let-tag");
DEF(Ygen_cache_classes,"gen-cache-classes");
DEF(YPprimary_modulus,"%primary-modulus");
DEF(Yslot_type_setter,"slot-type-setter");
DEF(Ynxt_state,"nxt-state");
DEF(YDsexpr_locals_tag,"$sexpr-locals-tag");
DEF(YLpattern_match_failureG,"<pattern-match-failure>");
DEF(Ycontagious_call,"contagious-call");
DEF(Ybinding_name,"binding-name");
DEF(Ydo_static_global_bindings,"do-static-global-bindings");
DEF(YLreal_referenceG,"<real-reference>");
DEF(YLmagic_bindingG,"<magic-binding>");
DEF(Yfab_gen,"fab-gen");
DEF(Yobjectify_syntax_definition,"objectify-syntax-definition");
DEF(YTtwin_primesT,"*twin-primes*");
DEF(Yregister_magic_binding,"register-magic-binding");
DEF(Ysexpr_make_setter,"sexpr-make-setter");
DEF(Ydlet,"dlet");
DEF(Ywrite_string,"write-string");
DEF(YLargsG,"<args>");
DEF(YPdefine_slots,"%define-slots");
DEF(YLconditionG,"<condition>");
DEF(Yobjectify_bind_exit,"objectify-bind-exit");
DEF(YPvacated_setter,"%vacated-setter");
DEF(YOreduce,"@reduce");
DEF(Yround,"round");
DEF(Yobjectify_symbol,"objectify-symbol");
DEF(Ysym_name,"sym-name");
DEF(Ysexpr_block_name,"sexpr-block-name");
DEF(Ybq_remove_tokens,"bq-remove-tokens");
DEF(Yfind_key,"find-key");
DEF(Ymagic_bindings,"magic-bindings");
DEF(Yaddress_of,"address-of");
DEF(Yobjectify_free_global_reference,"objectify-free-global-reference");
DEF(Ysexpr_method_definitionQ,"sexpr-method-definition?");
DEF(Ymake_sym,"make-sym");
DEF(Ysexpr_definition_value,"sexpr-definition-value");
DEF(Ylocals_functions_setter,"locals-functions-setter");
DEF(Ysexpr_slot_init,"sexpr-slot-init");
DEF(Ysvec,"svec");
DEF(Ygen_cache_singletons,"gen-cache-singletons");
DEF(Ysexpr_last_expQ,"sexpr-last-exp?");
DEF(YPloc_val_setter,"%loc-val-setter");
DEF(Yobject_direct_slots,"object-direct-slots");
DEF(YS,"/");
DEF(YLnameG,"<name>");
DEF(Ybracket,"bracket");
DEF(Ysexpr_let_body,"sexpr-let-body");
DEF(Yspecial_monitor,"special-monitor");
DEF(Ysexpr_unique_name,"sexpr-unique-name");
DEF(YA,"+");
DEF(YDsexpr_values_tag,"$sexpr-values-tag");
DEF(Ycondition_message_setter,"condition-message-setter");
DEF(YDsexpr_define_method_tag,"$sexpr-define-method-tag");
DEF(YPsig_false,"%sig-false");
DEF(YLlocal_referenceG,"<local-reference>");
DEF(Yepsilon,"epsilon");
DEF(Ysexpr_assignmentQ,"sexpr-assignment?");
DEF(YPsig_true,"%sig-true");
DEF(Yfunction_naryQ_setter,"function-nary?-setter");
DEF(Ysexpr_if_then,"sexpr-if-then");
DEF(YTread_terminatingQ_vectorT,"*read-terminating?-vector*");
DEF(YLast_primitive_definitionG,"<ast-primitive-definition>");
DEF(Ymake_setter_name,"make-setter-name");
DEF(YTbq_appendT,"*bq-append*");
DEF(YPspec_pair,"%spec-pair");
DEF(YTprint_baseT,"*print-base*");
DEF(Ysexpr_ifQ,"sexpr-if?");
DEF(YPspec_nil,"%spec-nil");
DEF(YDargument_empty_list,"$argument-empty-list");
DEF(Ywrite_boolean,"write-boolean");
DEF(Ysif_pattern,"sif-pattern");
DEF(Y1st,"1st");
DEF(Ysexpr_new_unique_name_counterX,"sexpr-new-unique-name-counter!");
DEF(YLruntime_referenceG,"<runtime-reference>");
DEF(Yread_char,"read-char");
DEF(Ytraits_direct_parents_setter,"traits-direct-parents-setter");
DEF(YallQ,"all?");
DEF(Ysexpr_begin_actions,"sexpr-begin-actions");
DEF(Ytraits_slots_setter,"traits-slots-setter");
DEF(Yexport_proto_method,"export-proto-method");
DEF(YTearly_genericsT,"*early-generics*");
DEF(Yelt_setter,"elt-setter");
DEF(Ysexpr_syntax_if_then,"sexpr-syntax-if-then");
DEF(YLlocal_bindingG,"<local-binding>");
DEF(YLmetsG,"<mets>");
DEF(Ylst,"lst");
DEF(Ysexpr_function_definitionQ,"sexpr-function-definition?");
DEF(YOallQ,"@all?");
DEF(YPdata,"%data");
DEF(YDclose_paren,"$close-paren");
DEF(YDmissed_dispatch,"$missed-dispatch");
DEF(YLsvecG,"<svec>");
DEF(Ysexpr_slot_variable,"sexpr-slot-variable");
DEF(Yobjectify_method_definition,"objectify-method-definition");
DEF(Ymet_appQ,"met-app?");
DEF(Ybinding_description,"binding-description");
DEF(Ycompose,"compose");
DEF(Ywrite_char,"write-char");
DEF(YBpairize,"&pairize");
DEF(Yast_macro_expand,"ast-macro-expand");
DEF(Yelt,"elt");
DEF(YDempty_static_environment,"$empty-static-environment");
DEF(Ysexpr_no_operandsQ,"sexpr-no-operands?");
DEF(Ynative_chars,"native-chars");
DEF(Yslot_getter_setter,"slot-getter-setter");
DEF(Yall2Q,"all2?");
DEF(Ymonitor_main_thunk_setter,"monitor-main-thunk-setter");
DEF(Ysexpr_let_values,"sexpr-let-values");
DEF(YPbucket_depth_setter,"%bucket-depth-setter");
DEF(YmemQ,"mem?");
DEF(YLmonitorG,"<monitor>");
DEF(Ygen_add_met,"gen-add-met");
DEF(Yeof_object,"eof-object");
DEF(Ytable_growth_factor,"table-growth-factor");
DEF(YLerrorG,"<error>");
DEF(YPdefine_method,"%define-method");
DEF(Yobjectify_primitive_definition,"objectify-primitive-definition");
DEF(Ycat,"cat");
DEF(Yalternative_consequent_setter,"alternative-consequent-setter");
DEF(Ysexpr_iterate_signature,"sexpr-iterate-signature");
DEF(Ytop_in,"top-in");
DEF(YLbagG,"<bag>");
DEF(Ybooted_fab_sym,"booted-fab-sym");
DEF(Ytraits_ordered_slots,"traits-ordered-slots");
DEF(Ydefine_magic_binding,"define-magic-binding");
DEF(Yempty_sequentialQ,"empty-sequential?");
DEF(YanyQ,"any?");
DEF(Yenv_global_binding_value,"env-global-binding-value");
DEF(YPvector_setter,"%vector-setter");
DEF(Yobjectify_parameters,"objectify-parameters");
DEF(YDmin_glo_env_size,"$min-glo-env-size");
DEF(Yas,"as");
DEF(Yspecial_define_primitive,"special-define-primitive");
DEF(YLglobal_bindingG,"<global-binding>");
DEF(Ysexpr_iterate_name,"sexpr-iterate-name");
DEF(Yfab_static_global_environment,"fab-static-global-environment");
DEF(Ycondition_arguments_setter,"condition-arguments-setter");
DEF(Ytable_growth_threshold,"table-growth-threshold");
DEF(YPPvec_dat_setter,"%%vec-dat-setter");
DEF(Ycase_insensitive_string_hash,"case-insensitive-string-hash");
DEF(Ybinding_locative,"binding-locative");
DEF(Yto_str,"to-str");
DEF(Ysif_else,"sif-else");
DEF(YDsexpr_define_primitive_tag,"$sexpr-define-primitive-tag");
DEF(Ylen_setter,"len-setter");
DEF(Ydescription_generator_setter,"description-generator-setter");
DEF(Ycall_with_string_output_port,"call-with-string-output-port");
DEF(Ydescription_arity,"description-arity");
DEF(YLconstant_descriptionG,"<constant-description>");
DEF(Ysig,"sig");
DEF(YTbase_pathT,"*base-path*");
DEF(Ybinding_type,"binding-type");
DEF(YLfunctional_descriptionG,"<functional-description>");
DEF(YDempty_cell_marker,"$empty-cell-marker");
DEF(Yceiling,"ceiling");
DEF(YclrX,"clr!");
DEF(YDpermanent_hash_state,"$permanent-hash-state");
DEF(Yset_standard_syntaxX,"set-standard-syntax!");
DEF(Yobjectify_alternative,"objectify-alternative");
DEF(Yspecial_method,"special-method");
DEF(Yslot_init,"slot-init");
DEF(Yenv_values,"env-values");
DEF(Ydescription_value_setter,"description-value-setter");
DEF(YTstatic_predefined_global_environmentT,"*static-predefined-global-environment*");
DEF(YPearly_dispatch,"%early-dispatch");
DEF(Ysexpr_self_evaluatingQ,"sexpr-self-evaluating?");
DEF(YPslot,"%slot");
DEF(YLstring_portG,"<string-port>");
DEF(Yspecial_Praw,"special-%raw");
DEF(Ybq_process,"bq-process");
DEF(Yfunction_name_setter,"function-name-setter");
DEF(YPisa,"%isa");
DEF(Yfix_let_bindings_setter,"fix-let-bindings-setter");
DEF(YPPstr_dat_setter,"%%str-dat-setter");
DEF(Ywhen,"when");
DEF(Ysexpr_isa_init_slots,"sexpr-isa-init-slots");
DEF(Ytable_growth_factor_setter,"table-growth-factor-setter");
DEF(Ysym_name_setter,"sym-name-setter");
DEF(YboundQ_reference,"bound?-reference");
DEF(YLboxG,"<box>");
DEF(Ychar_Gascii,"char->ascii");
DEF(Ysif_else_setter,"sif-else-setter");
DEF(Ysrc_filename,"src-filename");
DEF(Yalternative_alternant,"alternative-alternant");
DEF(Ygen_lookup_miss_1_using,"gen-lookup-miss-1-using");
DEF(Ysexpr_signature_parameters,"sexpr-signature-parameters");
DEF(Ynyi,"nyi");
DEF(Ysexpr_isa_slot_inits,"sexpr-isa-slot-inits");
DEF(Ysif_value,"sif-value");
DEF(Ybinding_mutableQ_setter,"binding-mutable?-setter");
DEF(YOfun_naryQ,"@fun-nary?");
DEF(YLboundQG,"<bound?>");
DEF(YisaQ,"isa?");
DEF(Yast_define_binding,"ast-define-binding");
DEF(Yreading_error,"reading-error");
DEF(Yfun_spec,"fun-spec");
DEF(Yrev,"rev");
DEF(YLgen_cacheG,"<gen-cache>");
DEF(Ysexpr_rest_operands,"sexpr-rest-operands");
DEF(Yenv_local_value,"env-local-value");
DEF(Yfun_env_setter,"fun-env-setter");
DEF(Ysvec_dat,"svec-dat");
DEF(YPadd_slot,"%add-slot");
DEF(Yenv_function,"env-function");
DEF(Ysexpr_macroQ,"sexpr-macro?");
DEF(Yeof_objectQ,"eof-object?");
DEF(YOfab,"@fab");
DEF(Yerror,"error");
DEF(Yfab_table_vector,"fab-table-vector");
DEF(Yobjectify_bind_listT,"objectify-bind-list*");
DEF(YLunwind_protectG,"<unwind-protect>");
DEF(Yarguments_tail,"arguments-tail");
DEF(Ybind_exit_main_fun,"bind-exit-main-fun");
DEF(Yspecial_boundQ,"special-bound?");
DEF(Ymatch_value_setter,"match-value-setter");
DEF(Ysexpr_unwind_protectQ,"sexpr-unwind-protect?");
DEF(YDsexpr_if_tag,"$sexpr-if-tag");
DEF(YDsexpr_iterate_tag,"$sexpr-iterate-tag");
DEF(YTcomma_atsignT,"*comma-atsign*");
DEF(Ysexpr_beginQ,"sexpr-begin?");
DEF(Ysexpr_backquoteQ,"sexpr-backquote?");
DEF(Yslot_type,"slot-type");
DEF(YLraw_constantG,"<raw-constant>");
DEF(Yfind_static_global_environment,"find-static-global-environment");
DEF(Yobjectify_syntax_if,"objectify-syntax-if");
DEF(Ycase,"case");
DEF(Yreference_frame_number_setter,"reference-frame-number-setter");
DEF(YTbq_listTT,"*bq-list**");
DEF(Ycurry,"curry");
DEF(Ysexpr_monitor_handler,"sexpr-monitor-handler");
DEF(Ybinding_handler_setter,"binding-handler-setter");
DEF(YDsexpr_quote_tag,"$sexpr-quote-tag");
DEF(YLlocalsG,"<locals>");
DEF(YPgc_state,"%gc-state");
DEF(Ybinding_type_setter,"binding-type-setter");
DEF(Ysexpr_pattern_variable_name,"sexpr-pattern-variable-name");
DEF(Ymatch_value,"match-value");
DEF(Yprocess_nary_closed_application,"process-nary-closed-application");
DEF(YDsexpr_optionals_type_name,"$sexpr-optionals-type-name");
DEF(Ytraits_owner_setter,"traits-owner-setter");
DEF(Yframe_bindings,"frame-bindings");
DEF(Yreference_binding_setter,"reference-binding-setter");
DEF(YTunique_name_counterT,"*unique-name-counter*");
DEF(Yfind_binding,"find-binding");
DEF(Yport_index_setter,"port-index-setter");
DEF(Yunwind_protect_protected_thunk,"unwind-protect-protected-thunk");
DEF(Ycase_insensitive_string_equal,"case-insensitive-string-equal");
DEF(Yand,"and");
DEF(YLast_methodG,"<ast-method>");
DEF(Ysorted_app_mets_1,"sorted-app-mets-1");
DEF(Yalways,"always");
DEF(Yrehash_table,"rehash-table");
DEF(YDsexpr_define_function_tag,"$sexpr-define-function-tag");
DEF(Ybinding_name_setter,"binding-name-setter");
DEF(Ymatch_elements,"match-elements");
DEF(Ycontagious_type,"contagious-type");
DEF(Ystr_eval_in,"str-eval-in");
DEF(Yunwind_protect_protected_thunk_setter,"unwind-protect-protected-thunk-setter");
DEF(Ycurrent_gc_state,"current-gc-state");
DEF(YLast_function_definitionG,"<ast-function-definition>");
DEF(Ygrow_table,"grow-table");
DEF(Yopen_input_file,"open-input-file");
DEF(YlogbitQ,"logbit?");
DEF(YPdata_setter,"%data-setter");
DEF(Yfun_congruentQ,"fun-congruent?");
DEF(YLbind_exitG,"<bind-exit>");
DEF(Yflo_bits,"flo-bits");
DEF(Ysexpr_syntax_definitionQ,"sexpr-syntax-definition?");
DEF(YLreferenceG,"<reference>");
DEF(Yreport_undefined_global_bindings,"report-undefined-global-bindings");
DEF(Yalternative_alternant_setter,"alternative-alternant-setter");
DEF(Yast_eval,"ast-eval");
DEF(YDchar_long_names,"$char-long-names");
DEF(Yslot_setter,"slot-setter");
DEF(Yobjectify_application,"objectify-application");
DEF(YDdot,"$dot");
DEF(Ybinding_mutableQ,"binding-mutable?");
DEF(Yclose_output_port,"close-output-port");
DEF(Ydef_fun_var,"def-fun-var");
DEF(Ybinding_locative_setter,"binding-locative-setter");
DEF(YGE,">=");
DEF(Ysexpr_make_macro_function,"sexpr-make-macro-function");
DEF(Yunwind_protect_cleanup_thunk,"unwind-protect-cleanup-thunk");
DEF(Ysexpr_make_anonymous_method,"sexpr-make-anonymous-method");
DEF(Ynewline,"newline");
DEF(Yhead_setter,"head-setter");
DEF(Ywrite_vector,"write-vector");
DEF(Ymonitor_handler_setter,"monitor-handler-setter");
DEF(Yany2Q,"any2?");
DEF(Yfunction_naryQ,"function-nary?");
DEF(Yempty,"empty");
DEF(YTpath_separatorT,"*path-separator*");
DEF(Yenv_global_value,"env-global-value");
DEF(YLfile_input_portG,"<file-input-port>");
DEF(Yspecial_isa,"special-isa");
DEF(YnegQ,"neg?");
DEF(Ydescription_value,"description-value");
DEF(Ydescription_generator,"description-generator");
DEF(Ylocative_value_setter,"locative-value-setter");
DEF(Ysexpr_function_definition_value,"sexpr-function-definition-value");
DEF(YPdefine_repeated_structure,"%define-repeated-structure");
DEF(Yreference_frame_offset,"reference-frame-offset");
DEF(Yspecial_quasiquote,"special-quasiquote");
DEF(Ysub_read_constituent,"sub-read-constituent");
DEF(YLmapG,"<map>");
DEF(Ydescription_comparator,"description-comparator");
DEF(Yspecial_let,"special-let");
DEF(YPchr_val_setter,"%chr-val-setter");
DEF(Yslot_getter,"slot-getter");
DEF(Yapplication_function_setter,"application-function-setter");
DEF(Yfunction_body_setter,"function-body-setter");
DEF(Ymake_traits,"make-traits");
DEF(YEE,"==");
DEF(YLbodyG,"<body>");
DEF(Ywrite_list,"write-list");
DEF(Yforce_output,"force-output");
DEF(Ygen_cache_singletons_setter,"gen-cache-singletons-setter");
DEF(Yenv_frameX,"env-frame!");
DEF(Yast_eval_specs,"ast-eval-specs");
DEF(Yenv_global_value_setter,"env-global-value-setter");
DEF(Ysexpr_isa_parents,"sexpr-isa-parents");
DEF(Ysexpr_generic_definitionQ,"sexpr-generic-definition?");
DEF(Yvals_to_str,"vals-to-str");
DEF(Ysexpr_method_body,"sexpr-method-body");
DEF(Yrt_env,"rt-env");
DEF(Ysexpr_syntax_if_pattern,"sexpr-syntax-if-pattern");
DEF(Ymatch_element_setter,"match-element-setter");
DEF(Yassignment_form_setter,"assignment-form-setter");
DEF(YTrt_glo_envT,"*rt-glo-env*");
DEF(Yct_env,"ct-env");
DEF(Ysexpr_slot_object,"sexpr-slot-object");
DEF(Ydel_keys,"del-keys");
DEF(Ycall_with_input_file,"call-with-input-file");
DEF(YLstatic_local_environmentG,"<static-local-environment>");
DEF(YLassocsG,"<assocs>");
DEF(Yadd,"add");
DEF(YLmatch_sublistG,"<match-sublist>");
DEF(Ysequential_head_setter,"sequential-head-setter");
DEF(Yformat,"format");
DEF(Yobjectify_pattern,"objectify-pattern");
DEF(Ylogxor,"logxor");
DEF(Yenv_define_global_bindingX,"env-define-global-binding!");
DEF(Yhandler_matchesQ,"handler-matches?");
DEF(Yspecial_syntax_if,"special-syntax-if");
DEF(Ysexpr_variable_type,"sexpr-variable-type");
DEF(Ysexpr_unwind_protect_cleanup_forms,"sexpr-unwind-protect-cleanup-forms");
DEF(YPslot_offset,"%slot-offset");
DEF(Yslot_owner,"slot-owner");
DEF(Yenvironment_bindings_setter,"environment-bindings-setter");
DEF(Ykeyboard_interrupt,"keyboard-interrupt");
DEF(Yassert,"assert");
DEF(Yobjectify_bind_unquote_splicing,"objectify-bind-unquote-splicing");
DEF(Ylen,"len");
DEF(Yapplication_binding_setter,"application-binding-setter");
DEF(Ylocals_bindings,"locals-bindings");
DEF(YPn_buckets,"%n-buckets");
DEF(YPint_val_setter,"%int-val-setter");
DEF(Ydec,"dec");
DEF(YLglobal_assignmentG,"<global-assignment>");
DEF(Ycopy_state,"copy-state");
DEF(YLsimple_conditionG,"<simple-condition>");
DEF(Ycompile_time_program,"compile-time-program");
DEF(Yunknown_function_error,"unknown-function-error");
DEF(Yfun_arity,"fun-arity");
DEF(Yascii_Gchar,"ascii->char");
DEF(YLloc_envG,"<loc-env>");
DEF(Ynow_key,"now-key");
DEF(YNE,"~=");
DEF(Ysexpr_syntax_definition_value,"sexpr-syntax-definition-value");
DEF(Ytraits_ordered_parents,"traits-ordered-parents");
DEF(Yreduce,"reduce");
DEF(YLstring_output_portG,"<string-output-port>");
DEF(Yassocs_keys_setter,"assocs-keys-setter");
DEF(Yfunction_name,"function-name");
DEF(YDsexpr_compile_time_tag,"$sexpr-compile-time-tag");
DEF(Ygensym,"gensym");
DEF(Ysvec_dat_setter,"svec-dat-setter");
DEF(Yeval_in,"eval-in");
DEF(Ycompile_time_program_setter,"compile-time-program-setter");
DEF(YPsecondary_modulus_setter,"%secondary-modulus-setter");
DEF(Yorder_mets,"order-mets");
DEF(Ygen_lookup_miss_1,"gen-lookup-miss-1");
DEF(Ycall_with_string_input_port,"call-with-string-input-port");
DEF(YOalter,"@alter");
DEF(YTmacro_tracingQT,"*macro-tracing?*");
DEF(Yapplication_function,"application-function");
DEF(YTproto_rootT,"*proto-root*");
DEF(Ydecode_radix_option,"decode-radix-option");
DEF(Yobject_slots,"object-slots");
DEF(Yhandler_function,"handler-function");
DEF(Yas_lowercase,"as-lowercase");
DEF(YTproto_dateT,"*proto-date*");
DEF(Yassignment_binding_setter,"assignment-binding-setter");
DEF(YDsexpr_begin_tag,"$sexpr-begin-tag");
DEF(Ymatch_binding_setter,"match-binding-setter");
DEF(Ymet_has_singleton_specsQ,"met-has-singleton-specs?");
DEF(Yempty_argument_listQ,"empty-argument-list?");
DEF(Ysexpr_make_quote,"sexpr-make-quote");
DEF(YPflo_val_setter,"%flo-val-setter");
DEF(YT,"*");
DEF(Ysexpr_iterateQ,"sexpr-iterate?");
DEF(Ywarn,"warn");
DEF(Ycondition_arguments,"condition-arguments");
DEF(Ynul_init,"nul-init");
DEF(Yobjectify_bind_element,"objectify-bind-element");
DEF(Yenv_local_value_setter,"env-local-value-setter");
DEF(Ydo2,"do2");
DEF(Yenv_names,"env-names");
DEF(Yash,"ash");
DEF(Yenvironment_bindings,"environment-bindings");

/* FORWARD QUOTATIONS: */
DEFLIT(lit_750);
DEFLIT(lit_749);
DEFLIT(lit_748);
DEFLIT(lit_747);
DEFLIT(lit_746);
DEFLIT(lit_745);
DEFLIT(lit_744);
DEFLIT(lit_743);
DEFLIT(lit_742);
DEFLIT(lit_741);
DEFLIT(lit_740);
DEFLIT(lit_739);
DEFLIT(lit_738);
DEFLIT(lit_737);
DEFLIT(lit_736);
DEFLIT(lit_735);
DEFLIT(lit_734);
DEFLIT(lit_733);
DEFLIT(lit_732);
DEFLIT(lit_731);
DEFLIT(lit_730);
DEFLIT(lit_729);
DEFLIT(lit_728);
DEFLIT(lit_727);
DEFLIT(lit_726);
DEFLIT(lit_725);
DEFLIT(lit_724);
DEFLIT(lit_723);
DEFLIT(lit_722);
DEFLIT(lit_721);
DEFLIT(lit_720);
DEFLIT(lit_719);
DEFLIT(lit_718);
DEFLIT(lit_717);
DEFLIT(lit_716);
DEFLIT(lit_715);
DEFLIT(lit_714);
DEFLIT(lit_713);
DEFLIT(lit_712);
DEFLIT(lit_711);
DEFLIT(lit_710);
DEFLIT(lit_709);
DEFLIT(lit_708);
DEFLIT(lit_707);
DEFLIT(lit_706);
DEFLIT(lit_705);
DEFLIT(lit_704);
DEFLIT(lit_703);
DEFLIT(lit_702);
DEFLIT(lit_701);
DEFLIT(lit_700);
DEFLIT(lit_699);
DEFLIT(lit_698);
DEFLIT(lit_697);
DEFLIT(lit_696);
DEFLIT(lit_695);
DEFLIT(lit_694);
DEFLIT(lit_693);
DEFLIT(lit_692);
DEFLIT(lit_691);
DEFLIT(lit_690);
DEFLIT(lit_689);
DEFLIT(lit_688);
DEFLIT(lit_687);
DEFLIT(lit_686);
DEFLIT(lit_685);
DEFLIT(lit_684);
DEFLIT(lit_683);
DEFLIT(lit_682);
DEFLIT(lit_681);
DEFLIT(lit_680);
DEFLIT(lit_679);
DEFLIT(lit_678);
DEFLIT(lit_677);
DEFLIT(lit_676);
DEFLIT(lit_675);
DEFLIT(lit_674);
DEFLIT(lit_673);
DEFLIT(lit_672);
DEFLIT(lit_671);
DEFLIT(lit_670);
DEFLIT(lit_669);
DEFLIT(lit_668);
DEFLIT(lit_667);
DEFLIT(lit_666);
DEFLIT(lit_665);
DEFLIT(lit_664);
DEFLIT(lit_663);
DEFLIT(lit_662);
DEFLIT(lit_661);
DEFLIT(lit_660);
DEFLIT(lit_659);
DEFLIT(lit_658);
DEFLIT(lit_657);
DEFLIT(lit_656);
DEFLIT(lit_655);
DEFLIT(lit_654);
DEFLIT(lit_653);
DEFLIT(lit_652);
DEFLIT(lit_651);
DEFLIT(lit_650);
DEFLIT(lit_649);
DEFLIT(lit_648);
DEFLIT(lit_647);
DEFLIT(lit_646);
DEFLIT(lit_645);
DEFLIT(lit_644);
DEFLIT(lit_643);
DEFLIT(lit_642);
DEFLIT(lit_641);
DEFLIT(lit_640);
DEFLIT(lit_639);
DEFLIT(lit_638);
DEFLIT(lit_637);
DEFLIT(lit_636);
DEFLIT(lit_635);
DEFLIT(lit_634);
DEFLIT(lit_633);
DEFLIT(lit_632);
DEFLIT(lit_631);
DEFLIT(lit_630);
DEFLIT(lit_629);
DEFLIT(lit_628);
DEFLIT(lit_627);
DEFLIT(lit_626);
DEFLIT(lit_625);
DEFLIT(lit_624);
DEFLIT(lit_623);
DEFLIT(lit_622);
DEFLIT(lit_621);
DEFLIT(lit_620);
DEFLIT(lit_619);
DEFLIT(lit_618);
DEFLIT(lit_617);
DEFLIT(lit_616);
DEFLIT(lit_615);
DEFLIT(lit_614);
DEFLIT(lit_613);
DEFLIT(lit_612);
DEFLIT(lit_611);
DEFLIT(lit_610);
DEFLIT(lit_609);
DEFLIT(lit_608);
DEFLIT(lit_607);
DEFLIT(lit_606);
DEFLIT(lit_605);
DEFLIT(lit_604);
DEFLIT(lit_603);
DEFLIT(lit_602);
DEFLIT(lit_601);
DEFLIT(lit_600);
DEFLIT(lit_599);
DEFLIT(lit_598);
DEFLIT(lit_597);
DEFLIT(lit_596);
DEFLIT(lit_595);
DEFLIT(lit_594);
DEFLIT(lit_593);
DEFLIT(lit_592);
DEFLIT(lit_591);
DEFLIT(lit_590);
DEFLIT(lit_589);
DEFLIT(lit_588);
DEFLIT(lit_587);
DEFLIT(lit_586);
DEFLIT(lit_585);
DEFLIT(lit_584);
DEFLIT(lit_583);
DEFLIT(lit_582);
DEFLIT(lit_581);
DEFLIT(lit_580);
DEFLIT(lit_579);
DEFLIT(lit_578);
DEFLIT(lit_577);
DEFLIT(lit_576);
DEFLIT(lit_575);
DEFLIT(lit_574);
DEFLIT(lit_573);
DEFLIT(lit_572);
DEFLIT(lit_571);
DEFLIT(lit_570);
DEFLIT(lit_569);
DEFLIT(lit_568);
DEFLIT(lit_567);
DEFLIT(lit_566);
DEFLIT(lit_565);
DEFLIT(lit_564);
DEFLIT(lit_563);
DEFLIT(lit_562);
DEFLIT(lit_561);
DEFLIT(lit_560);
DEFLIT(lit_559);
DEFLIT(lit_558);
DEFLIT(lit_557);
DEFLIT(lit_556);
DEFLIT(lit_555);
DEFLIT(lit_554);
DEFLIT(lit_553);
DEFLIT(lit_552);
DEFLIT(lit_551);
DEFLIT(lit_550);
DEFLIT(lit_549);
DEFLIT(lit_548);
DEFLIT(lit_547);
DEFLIT(lit_546);
DEFLIT(lit_545);
DEFLIT(lit_544);
DEFLIT(lit_543);
DEFLIT(lit_542);
DEFLIT(lit_541);
DEFLIT(lit_540);
DEFLIT(lit_539);
DEFLIT(lit_538);
DEFLIT(lit_537);
DEFLIT(lit_536);
DEFLIT(lit_535);
DEFLIT(lit_534);
DEFLIT(lit_533);
DEFLIT(lit_532);
DEFLIT(lit_531);
DEFLIT(lit_530);
DEFLIT(lit_529);
DEFLIT(lit_528);
DEFLIT(lit_527);
DEFLIT(lit_526);
DEFLIT(lit_525);
DEFLIT(lit_524);
DEFLIT(lit_523);
DEFLIT(lit_522);
DEFLIT(lit_521);
DEFLIT(lit_520);
DEFLIT(lit_519);
DEFLIT(lit_518);
DEFLIT(lit_517);
DEFLIT(lit_516);
DEFLIT(lit_515);
DEFLIT(lit_514);
DEFLIT(lit_513);
DEFLIT(lit_512);
DEFLIT(lit_511);
DEFLIT(lit_510);
DEFLIT(lit_509);
DEFLIT(lit_508);
DEFLIT(lit_507);
DEFLIT(lit_506);
DEFLIT(lit_505);
DEFLIT(lit_504);
DEFLIT(lit_503);
DEFLIT(lit_502);
DEFLIT(lit_501);
DEFLIT(lit_500);
DEFLIT(lit_499);
DEFLIT(lit_498);
DEFLIT(lit_497);
DEFLIT(lit_496);
DEFLIT(lit_495);
DEFLIT(lit_494);
DEFLIT(lit_493);
DEFLIT(lit_492);
DEFLIT(lit_491);
DEFLIT(lit_490);
DEFLIT(lit_489);
DEFLIT(lit_488);
DEFLIT(lit_487);
DEFLIT(lit_486);
DEFLIT(lit_485);
DEFLIT(lit_484);
DEFLIT(lit_483);
DEFLIT(lit_482);
DEFLIT(lit_481);
DEFLIT(lit_480);
DEFLIT(lit_479);
DEFLIT(lit_478);
DEFLIT(lit_477);
DEFLIT(lit_476);
DEFLIT(lit_475);
DEFLIT(lit_474);
DEFLIT(lit_473);
DEFLIT(lit_472);
DEFLIT(lit_471);
DEFLIT(lit_470);
DEFLIT(lit_469);
DEFLIT(lit_468);
DEFLIT(lit_467);
DEFLIT(lit_466);
DEFLIT(lit_465);
DEFLIT(lit_464);
DEFLIT(lit_463);
DEFLIT(lit_462);
DEFLIT(lit_461);
DEFLIT(lit_460);
DEFLIT(lit_459);
DEFLIT(lit_458);
DEFLIT(lit_457);
DEFLIT(lit_456);
DEFLIT(lit_455);
DEFLIT(lit_454);
DEFLIT(lit_453);
DEFLIT(lit_452);
DEFLIT(lit_451);
DEFLIT(lit_450);
DEFLIT(lit_449);
DEFLIT(lit_448);
DEFLIT(lit_447);
DEFLIT(lit_446);
DEFLIT(lit_445);
DEFLIT(lit_444);
DEFLIT(lit_443);
DEFLIT(lit_442);
DEFLIT(lit_441);
DEFLIT(lit_440);
DEFLIT(lit_439);
DEFLIT(lit_438);
DEFLIT(lit_437);
DEFLIT(lit_436);
DEFLIT(lit_435);
DEFLIT(lit_434);
DEFLIT(lit_433);
DEFLIT(lit_432);
DEFLIT(lit_431);
DEFLIT(lit_430);
DEFLIT(lit_429);
DEFLIT(lit_428);
DEFLIT(lit_427);
DEFLIT(lit_426);
DEFLIT(lit_425);
DEFLIT(lit_424);
DEFLIT(lit_423);
DEFLIT(lit_422);
DEFLIT(lit_421);
DEFLIT(lit_420);
DEFLIT(lit_419);
DEFLIT(lit_418);
DEFLIT(lit_417);
DEFLIT(lit_416);
DEFLIT(lit_415);
DEFLIT(lit_414);
DEFLIT(lit_413);
DEFLIT(lit_412);
DEFLIT(lit_411);
DEFLIT(lit_410);
DEFLIT(lit_409);
DEFLIT(lit_408);
DEFLIT(lit_407);
DEFLIT(lit_406);
DEFLIT(lit_405);
DEFLIT(lit_404);
DEFLIT(lit_403);
DEFLIT(lit_402);
DEFLIT(lit_401);
DEFLIT(lit_400);
DEFLIT(lit_399);
DEFLIT(lit_398);
DEFLIT(lit_397);
DEFLIT(lit_396);
DEFLIT(lit_395);
DEFLIT(lit_394);
DEFLIT(lit_393);
DEFLIT(lit_392);
DEFLIT(lit_391);
DEFLIT(lit_390);
DEFLIT(lit_389);
DEFLIT(lit_388);
DEFLIT(lit_387);
DEFLIT(lit_386);
DEFLIT(lit_385);
DEFLIT(lit_384);
DEFLIT(lit_383);
DEFLIT(lit_382);
DEFLIT(lit_381);
DEFLIT(lit_380);
DEFLIT(lit_379);
DEFLIT(lit_378);
DEFLIT(lit_377);
DEFLIT(lit_376);
DEFLIT(lit_375);
DEFLIT(lit_374);
DEFLIT(lit_373);
DEFLIT(lit_372);
DEFLIT(lit_371);
DEFLIT(lit_370);
DEFLIT(lit_369);
DEFLIT(lit_368);
DEFLIT(lit_367);
DEFLIT(lit_366);
DEFLIT(lit_365);
DEFLIT(lit_364);
DEFLIT(lit_363);
DEFLIT(lit_362);
DEFLIT(lit_361);
DEFLIT(lit_360);
DEFLIT(lit_359);
DEFLIT(lit_358);
DEFLIT(lit_357);
DEFLIT(lit_356);
DEFLIT(lit_355);
DEFLIT(lit_354);
DEFLIT(lit_353);
DEFLIT(lit_352);
DEFLIT(lit_351);
DEFLIT(lit_350);
DEFLIT(lit_349);
DEFLIT(lit_348);
DEFLIT(lit_347);
DEFLIT(lit_346);
DEFLIT(lit_345);
DEFLIT(lit_344);
DEFLIT(lit_343);
DEFLIT(lit_342);
DEFLIT(lit_341);
DEFLIT(lit_340);
DEFLIT(lit_339);
DEFLIT(lit_338);
DEFLIT(lit_337);
DEFLIT(lit_336);
DEFLIT(lit_335);
DEFLIT(lit_334);
DEFLIT(lit_333);
DEFLIT(lit_332);
DEFLIT(lit_331);
DEFLIT(lit_330);
DEFLIT(lit_329);
DEFLIT(lit_328);
DEFLIT(lit_327);
DEFLIT(lit_326);
DEFLIT(lit_325);
DEFLIT(lit_324);
DEFLIT(lit_323);
DEFLIT(lit_322);
DEFLIT(lit_321);
DEFLIT(lit_320);
DEFLIT(lit_319);
DEFLIT(lit_318);
DEFLIT(lit_317);
DEFLIT(lit_316);
DEFLIT(lit_315);
DEFLIT(lit_314);
DEFLIT(lit_313);
DEFLIT(lit_312);
DEFLIT(lit_311);
DEFLIT(lit_310);
DEFLIT(lit_309);
DEFLIT(lit_308);
DEFLIT(lit_307);
DEFLIT(lit_306);
DEFLIT(lit_305);
DEFLIT(lit_304);
DEFLIT(lit_303);
DEFLIT(lit_302);
DEFLIT(lit_301);
DEFLIT(lit_300);
DEFLIT(lit_299);
DEFLIT(lit_298);
DEFLIT(lit_297);
DEFLIT(lit_296);
DEFLIT(lit_295);
DEFLIT(lit_294);
DEFLIT(lit_293);
DEFLIT(lit_292);
DEFLIT(lit_291);
DEFLIT(lit_290);
DEFLIT(lit_289);
DEFLIT(lit_288);
DEFLIT(lit_287);
DEFLIT(lit_286);
DEFLIT(lit_285);
DEFLIT(lit_284);
DEFLIT(lit_283);
DEFLIT(lit_282);
DEFLIT(lit_281);
DEFLIT(lit_280);
DEFLIT(lit_279);
DEFLIT(lit_278);
DEFLIT(lit_277);
DEFLIT(lit_276);
DEFLIT(lit_275);
DEFLIT(lit_274);
DEFLIT(lit_273);
DEFLIT(lit_272);
DEFLIT(lit_271);
DEFLIT(lit_270);
DEFLIT(lit_269);
DEFLIT(lit_268);
DEFLIT(lit_267);
DEFLIT(lit_266);
DEFLIT(lit_265);
DEFLIT(lit_264);
DEFLIT(lit_263);
DEFLIT(lit_262);
DEFLIT(lit_261);
DEFLIT(lit_260);
DEFLIT(lit_259);
DEFLIT(lit_258);
DEFLIT(lit_257);
DEFLIT(lit_256);
DEFLIT(lit_255);
DEFLIT(lit_254);
DEFLIT(lit_253);
DEFLIT(lit_252);
DEFLIT(lit_251);
DEFLIT(lit_250);
DEFLIT(lit_249);
DEFLIT(lit_248);
DEFLIT(lit_247);
DEFLIT(lit_246);
DEFLIT(lit_245);
DEFLIT(lit_244);
DEFLIT(lit_243);
DEFLIT(lit_242);
DEFLIT(lit_241);
DEFLIT(lit_240);
DEFLIT(lit_239);
DEFLIT(lit_238);
DEFLIT(lit_237);
DEFLIT(lit_236);
DEFLIT(lit_235);
DEFLIT(lit_234);
DEFLIT(lit_233);
DEFLIT(lit_232);
DEFLIT(lit_231);
DEFLIT(lit_230);
DEFLIT(lit_229);
DEFLIT(lit_228);
DEFLIT(lit_227);
DEFLIT(lit_226);
DEFLIT(lit_225);
DEFLIT(lit_224);
DEFLIT(lit_223);
DEFLIT(lit_222);
DEFLIT(lit_221);
DEFLIT(lit_220);
DEFLIT(lit_219);
DEFLIT(lit_218);
DEFLIT(lit_217);
DEFLIT(lit_216);
DEFLIT(lit_215);
DEFLIT(lit_214);
DEFLIT(lit_213);
DEFLIT(lit_212);
DEFLIT(lit_211);
DEFLIT(lit_210);
DEFLIT(lit_209);
DEFLIT(lit_208);
DEFLIT(lit_207);
DEFLIT(lit_206);
DEFLIT(lit_205);
DEFLIT(lit_204);
DEFLIT(lit_203);
DEFLIT(lit_202);
DEFLIT(lit_201);
DEFLIT(lit_200);
DEFLIT(lit_199);
DEFLIT(lit_198);
DEFLIT(lit_197);
DEFLIT(lit_196);
DEFLIT(lit_195);
DEFLIT(lit_194);
DEFLIT(lit_193);
DEFLIT(lit_192);
DEFLIT(lit_191);
DEFLIT(lit_190);
DEFLIT(lit_189);
DEFLIT(lit_188);
DEFLIT(lit_187);
DEFLIT(lit_186);
DEFLIT(lit_185);
DEFLIT(lit_184);
DEFLIT(lit_183);
DEFLIT(lit_182);
DEFLIT(lit_181);
DEFLIT(lit_180);
DEFLIT(lit_179);
DEFLIT(lit_178);
DEFLIT(lit_177);
DEFLIT(lit_176);
DEFLIT(lit_175);
DEFLIT(lit_174);
DEFLIT(lit_173);
DEFLIT(lit_172);
DEFLIT(lit_171);
DEFLIT(lit_170);
DEFLIT(lit_169);
DEFLIT(lit_168);
DEFLIT(lit_167);
DEFLIT(lit_166);
DEFLIT(lit_165);
DEFLIT(lit_164);
DEFLIT(lit_163);
DEFLIT(lit_162);
DEFLIT(lit_161);
DEFLIT(lit_160);
DEFLIT(lit_159);
DEFLIT(lit_158);
DEFLIT(lit_157);
DEFLIT(lit_156);
DEFLIT(lit_155);
DEFLIT(lit_154);
DEFLIT(lit_153);
DEFLIT(lit_152);
DEFLIT(lit_151);
DEFLIT(lit_150);
DEFLIT(lit_149);
DEFLIT(lit_148);
DEFLIT(lit_147);
DEFLIT(lit_146);
DEFLIT(lit_145);
DEFLIT(lit_144);
DEFLIT(lit_143);
DEFLIT(lit_142);
DEFLIT(lit_141);
DEFLIT(lit_140);
DEFLIT(lit_139);
DEFLIT(lit_138);
DEFLIT(lit_137);
DEFLIT(lit_136);
DEFLIT(lit_135);
DEFLIT(lit_134);
DEFLIT(lit_133);
DEFLIT(lit_132);
DEFLIT(lit_131);
DEFLIT(lit_130);
DEFLIT(lit_129);
DEFLIT(lit_128);
DEFLIT(lit_127);
DEFLIT(lit_126);
DEFLIT(lit_125);
DEFLIT(lit_124);
DEFLIT(lit_123);
DEFLIT(lit_122);
DEFLIT(lit_121);
DEFLIT(lit_120);
DEFLIT(lit_119);
DEFLIT(lit_118);
DEFLIT(lit_117);
DEFLIT(lit_116);
DEFLIT(lit_115);
DEFLIT(lit_114);
DEFLIT(lit_113);
DEFLIT(lit_112);
DEFLIT(lit_111);
DEFLIT(lit_110);
DEFLIT(lit_109);
DEFLIT(lit_108);
DEFLIT(lit_107);
DEFLIT(lit_106);
DEFLIT(lit_105);
DEFLIT(lit_104);
DEFLIT(lit_103);
DEFLIT(lit_102);
DEFLIT(lit_101);
DEFLIT(lit_100);
DEFLIT(lit_99);
DEFLIT(lit_98);
DEFLIT(lit_97);
DEFLIT(lit_96);
DEFLIT(lit_95);
DEFLIT(lit_94);
DEFLIT(lit_93);
DEFLIT(lit_92);
DEFLIT(lit_91);
DEFLIT(lit_90);
DEFLIT(lit_89);
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
extern P YPPtraits (P);
extern P YPobject_shell ();
extern P YPobject_of (P,P);
extern P YPhead_setter (P,P);
extern P YPhead (P);
extern P YPtail_setter (P,P);
extern P YPtail (P);
extern P YPlst (P,P);
extern P YPpair (P,P);
extern P YPmet_code_setter (P,P);
extern P YPmet_code (P);
extern P YPmet_specs_setter (P,P);
extern P YPmet_specs (P);
extern P YPmet_naryQ_setter (P,P);
extern P YPmet_naryQ (P);
extern P YPmet_arity_setter (P,P);
extern P YPmet_arity (P);
extern P YPmet_env_setter (P,P);
extern P YPmet_env (P);
extern P YPmet (P,P,P,P,P);
extern P YPemptyQ (P);
extern P YPPlen (P);
extern P YPtraits_owner_setter (P,P);
extern P YPtraits_owner (P);
extern P YPtraits_direct_parents_setter (P,P);
extern P YPtraits_direct_parents (P);
extern P YPtraits_direct_slots_setter (P,P);
extern P YPtraits_direct_slots (P);
extern P YPtraits_parents_setter (P,P);
extern P YPtraits_parents (P);
extern P YPtraits_slots_setter (P,P);
extern P YPtraits_slots (P);
extern P YPtraits (P,P,P,P,P);
extern P YPcompute_parents (P);
extern P YPdefine_parent (P,P);
extern P YPcopy (P);
extern P YPpatch_parents (P);
extern P YPtag_bits (P);
extern P YPtag (P,P);
extern P YPuntag (P);
extern P YPindirect_objectQ (P);
extern P YPtraits_of (P);
FUNFOR(Yobject_traits);
extern P YPib (P);
extern P YPint (P);
extern P YPiu (P);
extern P YPcb (P);
extern P YPchr (P);
extern P YPcu (P);
extern P YPlb (P);
extern P YPloc (P);
extern P YPlu (P);
LOCFOR(fun_loop_52);
extern P YPrevX (P);
LOCFOR(fun_coly_54);
LOCFOR(fun_colx_55);
extern P YPcat2 (P,P);
extern P YPflo_dat_setter (P,P);
extern P YPflo_dat (P);
extern P YPflo (P);
extern P YPfb (P);
extern P YPfu (P);
extern P YPslot_owner_setter (P,P);
extern P YPslot_owner (P);
extern P YPslot_getter_setter (P,P);
extern P YPslot_getter (P);
extern P YPslot_setter_setter (P,P);
extern P YPslot_setter (P);
extern P YPslot_type_setter (P,P);
extern P YPslot_type (P);
extern P YPslot_init_setter (P,P);
extern P YPslot_init (P);
extern P YPPslot (P,P,P,P,P);
extern P YPgen_cache_singletons_setter (P,P);
extern P YPgen_cache_singletons (P);
extern P YPgen_cache_classes_setter (P,P);
extern P YPgen_cache_classes (P);
extern P YPgen_cache (P,P);
extern P YPgen_code_setter (P,P);
extern P YPgen_code (P);
extern P YPgen_specs_setter (P,P);
extern P YPgen_specs (P);
extern P YPgen_naryQ_setter (P,P);
extern P YPgen_naryQ (P);
extern P YPgen_arity_setter (P,P);
extern P YPgen_arity (P);
extern P YPgen_mets_setter (P,P);
extern P YPgen_mets (P);
extern P YPfun_cache_setter (P,P);
extern P YPfun_cache (P);
extern P YPgen (P,P,P,P,P,P);
LOCFOR(fun_loop_91);
FUNFOR(YPslot_offset);
FUNFOR(YPearly_dispatch);
FUNFOR(YPregister_early_generic);
FUNFOR(YPadd_met);
FUNFOR(Ynul_init);
FUNFOR(YPadd_slot);
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
LOCFOR(fun_118);
LOCFOR(fun_119);
LOCFOR(fun_120);
LOCFOR(fun_121);
LOCFOR(fun_122);
LOCFOR(fun_123);
LOCFOR(fun_124);
LOCFOR(fun_125);
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
LOCFOR(fun_138);
LOCFOR(fun_139);
LOCFOR(fun_140);
LOCFOR(fun_141);
LOCFOR(fun_142);
LOCFOR(fun_143);
LOCFOR(fun_144);
LOCFOR(fun_145);
LOCFOR(fun_146);
LOCFOR(fun_147);
LOCFOR(fun_148);
LOCFOR(fun_149);
LOCFOR(fun_150);
LOCFOR(fun_151);
LOCFOR(fun_152);
LOCFOR(fun_153);
LOCFOR(fun_154);
LOCFOR(fun_155);
LOCFOR(fun_156);
LOCFOR(fun_157);
LOCFOR(fun_158);
LOCFOR(fun_159);
LOCFOR(fun_160);
LOCFOR(fun_161);
LOCFOR(fun_162);
LOCFOR(fun_163);
LOCFOR(fun_164);
LOCFOR(fun_165);
LOCFOR(fun_166);
LOCFOR(fun_167);
LOCFOR(fun_168);
LOCFOR(fun_169);
LOCFOR(fun_170);
LOCFOR(fun_171);
LOCFOR(fun_172);
LOCFOR(fun_173);
LOCFOR(fun_174);
LOCFOR(fun_175);
LOCFOR(fun_176);
LOCFOR(fun_177);
LOCFOR(fun_178);
LOCFOR(fun_179);
LOCFOR(fun_180);
LOCFOR(fun_181);
LOCFOR(fun_182);
FUNFOR(YPcollect_direct_slots);
FUNFOR(YPfinalize_slotsX);
extern P YPpatch_lst (P);
extern P YPstr_dat_setter (P,P);
extern P YPstr_dat (P);
extern P YPstrX (P);
extern P YPstr (P);
extern P YPsb (P);
extern P YPsu (P);
extern P YPslen (P);
extern P YPselt (P,P);
extern P YPselt_setter (P,P,P);
extern P YPvec_dat_setter (P,P);
extern P YPvec_dat (P);
extern P YPvecX (P);
extern P YPvec (P);
extern P YPvb (P);
extern P YPvu (P);
extern P YPvlen (P);
extern P YPvelt (P,P);
extern P YPvelt_setter (P,P,P);
LOCFOR(fun_loop_204);
FUNFOR(YPstr_eqQ);
extern P YPsym_nam_setter (P,P);
extern P YPsym_nam (P);
extern P YPsym (P);
LOCFOR(fun_lookup_209);
FUNFOR(Yfab_sym);
extern P YPPsym (P);
extern P YOhead (P);
extern P YOhead_setter (P,P);
extern P YOtail (P);
extern P YOtail_setter (P,P);
extern P YOE (P,P);
extern P YOL (P,P);
extern P YOA (P,P);
extern P YOEE (P,P);
FUNFOR(YOOEE);
FUNFOR(Ynot);
extern P YOemptyQ (P);
FUNFOR(YOOemptyQ);
FUNFOR(YOrevX);
extern P YOlen (P);
LOCFOR(fun_fnd_226);
FUNFOR(YOallQ);
LOCFOR(fun_fnd_228);
FUNFOR(YOall2Q);
LOCFOR(fun_fnd_230);
FUNFOR(YOelt);
LOCFOR(fun_loop_232);
FUNFOR(YOfill);
LOCFOR(fun_fnd_234);
FUNFOR(YOanyQ);
extern P YOpair (P,P);
extern P YOadd (P,P);
LOCFOR(fun_do_238);
FUNFOR(YOmap);
LOCFOR(fun_do_240);
FUNFOR(YOdo);
LOCFOR(fun_in_242);
FUNFOR(YOalter);
LOCFOR(fun_fab_244);
FUNFOR(YOfab);
LOCFOR(fun_red_246);
FUNFOR(YOreduce);
FUNFOR(YOcat2);
LOCFOR(fun_fnd_249);
FUNFOR(YOfind_key);
LOCFOR(fun_251);
FUNFOR(YOmemQ);
LOCFOR(fun_253);
FUNFOR(YOdel_dups);
FUNFOR(YOlst);
FUNFOR(YOfun_specs);
FUNFOR(YOfun_naryQ);
FUNFOR(YOfun_arity);
FUNFOR(YOfun_mets);
FUNFOR(YOfun_mets_setter);
FUNFOR(Yfun_spec);
FUNFOR(Yfab_gen);
FUNFOR(Yfun_same_metQ);
FUNFOR(Yfun_congruentQ);
LOCFOR(fun_col_265);
FUNFOR(Ygen_add_met);
LOCFOR(fun_find_267);
extern P YPisaQ (P,P);
FUNFOR(YisaQ);
LOCFOR(fun_find_270);
FUNFOR(YobjectL);
FUNFOR(Yorder_specs);
LOCFOR(fun_loop_273);
FUNFOR(Yorder_mets);
LOCFOR(fun_loop_275);
LOCFOR(fun_make_ambiguous_276);
LOCFOR(fun_loop_277);
LOCFOR(fun_precedes_allQ_278);
LOCFOR(fun_check_subsequent_ambiguities_279);
LOCFOR(fun_insert_280);
LOCFOR(fun_loop_281);
FUNFOR(Ysorted_app_mets_1);
LOCFOR(fun_loop_283);
FUNFOR(Ymet_appQ);
LOCFOR(fun_col_285);
FUNFOR(Ysorted_app_mets);
LOCFOR(fun_col_287);
FUNFOR(Yopt_args);
FUNFOR(YOgen_cache_singletons);
FUNFOR(YOgen_cache_singletons_setter);
FUNFOR(YOgen_cache_classes);
FUNFOR(YOgen_cache_classes_setter);
LOCFOR(fun_loop_293);
FUNFOR(Ygen_lookup_miss_1_using);
FUNFOR(Ysingleton_specQ);
FUNFOR(Ymethod_accessor_offset);
FUNFOR(Ygen_lookup_miss_1);
extern P Ygen_lookup (P,P);
extern P Ygen_lookup_1_using (P,P,P,P,P,P,P,P,P);
extern P Yslot_value_at (P,P);
extern P Yslot_value_at_setter (P,P,P);
extern P Ygen_lookup_1 (P,P,P,P,P,P);
FUNFOR(Ychoose_method);
FUNFOR(YmetL);
FUNFOR(Ymet_has_singleton_specsQ);
LOCFOR(fun_loop_306);
FUNFOR(Yfind_app_singleton_mets);
LOCFOR(fun_308);
FUNFOR(Ygen_lookup_miss);
FUNFOR(YPdispatch);
LOCFOR(fun_311);
FUNFOR(Ygen_from_met);
FUNFOR(YPdefine_method);
LOCFOR(fun_loop_314);
FUNFOR(YPpatch_early_generics);
FUNFOR(Yapply);
LOCFOR(fun_p_in_and_unconstrained_inQ_317);
LOCFOR(fun_p_unconstrained_inQ_318);
LOCFOR(fun_unconstrained_proto_319);
LOCFOR(fun_unconstrained_object_in_parents_320);
LOCFOR(fun_remove_next_321);
LOCFOR(fun_merge_lists_322);
FUNFOR(Ytraits_ordered_parents);
FUNFOR(Ytraits_ordered_slots);
FUNFOR(Ymake_traits);
FUNFOR(Yobject_direct_slots);
FUNFOR(Yobject_direct_parents);
FUNFOR(Yobject_slots);
FUNFOR(Yobject_parents);
LOCFOR(fun_loop_330);
FUNFOR(Yslot_offset);
FUNFOR(Yslot_value);
FUNFOR(Yslot_value_setter);
FUNFOR(Yensure_traits);
LOCFOR(fun_loop_335);
FUNFOR(YPisa);
LOCFOR(fun_loop_337);
FUNFOR(Yfind_getter);
LOCFOR(fun_loop_339);
FUNFOR(Yfind_setter);
FUNFOR(YPslot);
LOCFOR(fun_342);
LOCFOR(fun_make_sym_343);
LOCFOR(fun_gensym_344);
LOCFOR(fun_make_setter_name_345);
LOCFOR(fun_var_name_346);
LOCFOR(fun_var_name_347);
LOCFOR(fun_var_type_348);
LOCFOR(fun_var_type_349);
LOCFOR(fun_nyi_error_350);
LOCFOR(fun_to_str_351);
LOCFOR(fun_to_str_352);
LOCFOR(fun_to_str_353);
LOCFOR(fun_as_354);
LOCFOR(fun_EE_355);
LOCFOR(fun_E_356);
LOCFOR(fun_NE_357);
LOCFOR(fun_NEE_358);
LOCFOR(fun_G_359);
LOCFOR(fun_LE_360);
LOCFOR(fun_GE_361);
LOCFOR(fun_min_362);
LOCFOR(fun_max_363);
LOCFOR(fun_as_364);
LOCFOR(fun_as_365);
LOCFOR(fun_L_366);
LOCFOR(fun_EE_367);
LOCFOR(fun_lowercaseQ_368);
LOCFOR(fun_uppercaseQ_369);
LOCFOR(fun_as_lowercase_370);
LOCFOR(fun_as_uppercase_371);
LOCFOR(fun_to_str_372);
LOCFOR(fun_alphabeticQ_373);
LOCFOR(fun_numericQ_374);
LOCFOR(fun_to_digit_375);
LOCFOR(fun_contagious_call_376);
LOCFOR(fun_L_377);
LOCFOR(fun_A_378);
LOCFOR(fun___379);
LOCFOR(fun_T_380);
LOCFOR(fun_floor_381);
LOCFOR(fun_ceiling_382);
LOCFOR(fun_round_383);
LOCFOR(fun_truncate_384);
LOCFOR(fun_floorS_385);
LOCFOR(fun_ceilingS_386);
LOCFOR(fun_roundS_387);
LOCFOR(fun_truncateS_388);
LOCFOR(fun_modulo_389);
LOCFOR(fun_remainder_390);
LOCFOR(fun_posQ_391);
LOCFOR(fun_zeroQ_392);
LOCFOR(fun_negQ_393);
LOCFOR(fun_neg_394);
LOCFOR(fun_abs_395);
LOCFOR(fun_to_str_396);
LOCFOR(fun_contagious_type_397);
LOCFOR(fun_contagious_type_398);
LOCFOR(fun_contagious_type_399);
LOCFOR(fun_contagious_type_400);
LOCFOR(fun_EE_401);
LOCFOR(fun_L_402);
LOCFOR(fun_A_403);
LOCFOR(fun___404);
LOCFOR(fun_T_405);
LOCFOR(fun_floor_406);
LOCFOR(fun_ceiling_407);
LOCFOR(fun_round_408);
LOCFOR(fun_truncate_409);
LOCFOR(fun_truncateS_410);
LOCFOR(fun_modulo_411);
LOCFOR(fun_logior_412);
LOCFOR(fun_logxor_413);
LOCFOR(fun_logand_414);
LOCFOR(fun_lognot_415);
LOCFOR(fun_logbitQ_416);
LOCFOR(fun_evenQ_417);
LOCFOR(fun_oddQ_418);
LOCFOR(fun_ash_419);
LOCFOR(fun_lsh_420);
LOCFOR(fun_search_421);
LOCFOR(fun_power_of_two_ceiling_422);
LOCFOR(fun_decode_radix_option_423);
LOCFOR(fun_loop_424);
LOCFOR(fun_num_to_str_425);
FUNFOR(Yflo_bits);
LOCFOR(fun_as_427);
LOCFOR(fun_EE_428);
LOCFOR(fun_L_429);
LOCFOR(fun_A_430);
LOCFOR(fun___431);
LOCFOR(fun_T_432);
LOCFOR(fun_S_433);
LOCFOR(fun_truncateS_434);
LOCFOR(fun_loop_435);
LOCFOR(fun_num_to_str_436);
LOCFOR(fun_emptyQ_437);
LOCFOR(fun_empty_438);
LOCFOR(fun_default_439);
LOCFOR(fun_eq_440);
LOCFOR(fun_E_441);
LOCFOR(fun_fab_442);
LOCFOR(fun_as_443);
LOCFOR(fun_rep_444);
LOCFOR(fun_do_key_vals_445);
LOCFOR(fun_446);
LOCFOR(fun_fabs_447);
LOCFOR(fun_in_448);
LOCFOR(fun_alter_449);
LOCFOR(fun_in_450);
LOCFOR(fun_fill_451);
LOCFOR(fun_fnd_452);
LOCFOR(fun_anyQ_453);
LOCFOR(fun_fnd_454);
LOCFOR(fun_any2Q_455);
LOCFOR(fun_fnd_456);
LOCFOR(fun_allQ_457);
LOCFOR(fun_fnd_458);
LOCFOR(fun_all2Q_459);
LOCFOR(fun_red_460);
LOCFOR(fun_reduce_461);
LOCFOR(fun_red_462);
LOCFOR(fun_reduceA_463);
LOCFOR(fun_fnd_464);
LOCFOR(fun_find_key_465);
LOCFOR(fun_con_466);
LOCFOR(fun_map_467);
LOCFOR(fun_lop_468);
LOCFOR(fun_do_469);
LOCFOR(fun_con_470);
LOCFOR(fun_map2_471);
LOCFOR(fun_lop_472);
LOCFOR(fun_do2_473);
LOCFOR(fun_con_474);
LOCFOR(fun_map_keyed_475);
LOCFOR(fun_lop_476);
LOCFOR(fun_do_keyed_477);
LOCFOR(fun_478);
LOCFOR(fun_memQ_479);
LOCFOR(fun_assocs_test_480);
LOCFOR(fun_assocs_test_setter_481);
LOCFOR(fun_482);
LOCFOR(fun_assocs_keys_483);
LOCFOR(fun_assocs_keys_setter_484);
LOCFOR(fun_485);
LOCFOR(fun_assocs_vals_486);
LOCFOR(fun_assocs_vals_setter_487);
LOCFOR(fun_488);
LOCFOR(fun_fab_489);
LOCFOR(fun_len_490);
LOCFOR(fun_fnd_491);
LOCFOR(fun_elt_492);
LOCFOR(fun_fnd_493);
LOCFOR(fun_elt_setter_494);
LOCFOR(fun_as_495);
LOCFOR(fun_1st_496);
LOCFOR(fun_2nd_497);
LOCFOR(fun_3rd_498);
LOCFOR(fun_last_499);
LOCFOR(fun_addX_500);
LOCFOR(fun_push_501);
LOCFOR(fun_pos_502);
LOCFOR(fun_in_503);
LOCFOR(fun_into_504);
LOCFOR(fun_con_505);
LOCFOR(fun_rev_506);
LOCFOR(fun_con_y_507);
LOCFOR(fun_con_x_508);
LOCFOR(fun_cat2_509);
LOCFOR(fun_cat_510);
LOCFOR(fun_catX_511);
LOCFOR(fun_find_tail_512);
LOCFOR(fun_connect_513);
LOCFOR(fun_find_result_514);
LOCFOR(fun_catX_515);
LOCFOR(fun_con_x_516);
LOCFOR(fun_sub_517);
LOCFOR(fun_con_518);
LOCFOR(fun_pick_519);
LOCFOR(fun_520);
LOCFOR(fun_del_dups_521);
LOCFOR(fun_522);
LOCFOR(fun_del_523);
LOCFOR(fun_524);
LOCFOR(fun_vals_to_str_525);
LOCFOR(fun_to_str_526);
LOCFOR(fun_pair_527);
LOCFOR(fun_fab_528);
LOCFOR(fun_fab_529);
LOCFOR(fun_as_530);
LOCFOR(fun_empty_531);
LOCFOR(fun_build_532);
LOCFOR(fun_lst_533);
LOCFOR(fun_fabs_534);
LOCFOR(fun_sum_535);
LOCFOR(fun_len_536);
LOCFOR(fun_fnd_537);
LOCFOR(fun_elt_538);
LOCFOR(fun_fnd_539);
LOCFOR(fun_elt_setter_540);
LOCFOR(fun_add_541);
LOCFOR(fun_loop_542);
LOCFOR(fun_revX_543);
LOCFOR(fun_assq_544);
LOCFOR(fun_fnd_545);
LOCFOR(fun_last_546);
LOCFOR(fun_ini_state_547);
LOCFOR(fun_fin_stateQ_548);
LOCFOR(fun_nxt_state_549);
LOCFOR(fun_now_elt_550);
LOCFOR(fun_now_elt_setter_551);
LOCFOR(fun_fnd_552);
LOCFOR(fun_now_key_553);
LOCFOR(fun_copy_state_554);
LOCFOR(fun_ini_state_555);
LOCFOR(fun_fin_stateQ_556);
LOCFOR(fun_nxt_state_557);
LOCFOR(fun_now_elt_558);
LOCFOR(fun_now_elt_setter_559);
LOCFOR(fun_now_key_560);
LOCFOR(fun_copy_state_561);
LOCFOR(fun_empty_562);
FUNFOR(Yvec);
LOCFOR(fun_fabs_564);
LOCFOR(fun_fab_565);
LOCFOR(fun_len_566);
LOCFOR(fun_elt_567);
LOCFOR(fun_elt_setter_568);
LOCFOR(fun_to_str_569);
LOCFOR(fun_svec_len_570);
LOCFOR(fun_svec_len_setter_571);
LOCFOR(fun_572);
LOCFOR(fun_svec_dat_573);
LOCFOR(fun_svec_dat_setter_574);
LOCFOR(fun_575);
LOCFOR(fun_empty_576);
LOCFOR(fun_svec_577);
LOCFOR(fun_fabs_578);
LOCFOR(fun_fab_579);
LOCFOR(fun_len_580);
LOCFOR(fun_fill_581);
LOCFOR(fun_len_setter_582);
LOCFOR(fun_elt_583);
LOCFOR(fun_elt_setter_584);
LOCFOR(fun_addX_585);
LOCFOR(fun_push_586);
LOCFOR(fun_pop_587);
LOCFOR(fun_to_str_588);
LOCFOR(fun_empty_589);
LOCFOR(fun_default_590);
LOCFOR(fun_fab_591);
LOCFOR(fun_str_592);
LOCFOR(fun_fabs_593);
LOCFOR(fun_len_594);
LOCFOR(fun_elt_595);
LOCFOR(fun_elt_setter_596);
LOCFOR(fun_to_str_597);
LOCFOR(fun_as_598);
LOCFOR(fun_as_599);
LOCFOR(fun_L_600);
LOCFOR(fun_to_str_601);
LOCFOR(fun_identity_602);
LOCFOR(fun_603);
LOCFOR(fun_compose_604);
LOCFOR(fun_605);
LOCFOR(fun_rcurry_606);
LOCFOR(fun_607);
LOCFOR(fun_curry_608);
LOCFOR(fun_609);
LOCFOR(fun_always_610);
LOCFOR(fun_default_handler_611);
LOCFOR(fun_condition_message_612);
LOCFOR(fun_condition_message_setter_613);
LOCFOR(fun_614);
LOCFOR(fun_condition_arguments_615);
LOCFOR(fun_condition_arguments_setter_616);
LOCFOR(fun_617);
LOCFOR(fun_default_handler_618);
LOCFOR(fun_handler_function_619);
LOCFOR(fun_handler_function_setter_620);
LOCFOR(fun_621);
FUNFOR(Ymake_handler);
FUNFOR(Yhandler_matchesQ);
LOCFOR(fun_624);
LOCFOR(fun_Uhandler_functionU_625);
LOCFOR(fun_626);
LOCFOR(fun_627);
LOCFOR(fun_628);
extern P YPwith_monitor (P,P);
LOCFOR(fun_630);
LOCFOR(fun_search_631);
LOCFOR(fun_sig_632);
LOCFOR(fun_sig_633);
LOCFOR(fun_error_634);
LOCFOR(fun_error_635);
FUNFOR(Ywrong_number_arguments_error);
FUNFOR(Yunknown_function_error);
FUNFOR(Ytype_error);
FUNFOR(Ylocative_value);
FUNFOR(Ylocative_value_setter);
FUNFOR(Yapp_filename);
FUNFOR(Yapp_args);
LOCFOR(fun_sym_name_643);
FUNFOR(Yaddress_of);
LOCFOR(fun_Pvacated_645);
LOCFOR(fun_Pvacated_setter_646);
LOCFOR(fun_647);
LOCFOR(fun_Pprimary_modulus_648);
LOCFOR(fun_Pprimary_modulus_setter_649);
LOCFOR(fun_650);
LOCFOR(fun_Psecondary_modulus_651);
LOCFOR(fun_Psecondary_modulus_setter_652);
LOCFOR(fun_653);
LOCFOR(fun_Pn_buckets_654);
LOCFOR(fun_Pn_buckets_setter_655);
LOCFOR(fun_656);
LOCFOR(fun_Pbucket_depth_657);
LOCFOR(fun_Pbucket_depth_setter_658);
LOCFOR(fun_659);
LOCFOR(fun_Pdata_660);
LOCFOR(fun_Pdata_setter_661);
LOCFOR(fun_662);
LOCFOR(fun_Pgc_state_663);
LOCFOR(fun_Pgc_state_setter_664);
LOCFOR(fun_665);
FUNFOR(Yfab_table_vector);
LOCFOR(fun_elt_667);
LOCFOR(fun_elt_setter_668);
LOCFOR(fun_clrX_669);
FUNFOR(Ytrace);
LOCFOR(fun_table_growth_factor_671);
LOCFOR(fun_table_growth_factor_setter_672);
LOCFOR(fun_673);
LOCFOR(fun_table_growth_threshold_674);
LOCFOR(fun_table_growth_threshold_setter_675);
LOCFOR(fun_676);
LOCFOR(fun_table_shrink_threshold_677);
LOCFOR(fun_table_shrink_threshold_setter_678);
LOCFOR(fun_679);
LOCFOR(fun_Pcount_680);
LOCFOR(fun_Pcount_setter_681);
LOCFOR(fun_682);
LOCFOR(fun_Pvector_683);
LOCFOR(fun_Pvector_setter_684);
LOCFOR(fun_685);
LOCFOR(fun_table_protocol_686);
FUNFOR(Yhash_moduli);
LOCFOR(fun_fab_688);
LOCFOR(fun_inner_689);
LOCFOR(fun_outer_690);
LOCFOR(fun_691);
LOCFOR(fun_elt_692);
LOCFOR(fun_inner_693);
LOCFOR(fun_outer_694);
LOCFOR(fun_695);
LOCFOR(fun_elt_setter_696);
LOCFOR(fun_inner_697);
LOCFOR(fun_outer_698);
LOCFOR(fun_699);
LOCFOR(fun_del_key_700);
LOCFOR(fun_inner_701);
LOCFOR(fun_outer_702);
LOCFOR(fun_do_703);
LOCFOR(fun_del_keys_704);
LOCFOR(fun_len_705);
LOCFOR(fun_Pvector_706);
LOCFOR(fun_Pvector_setter_707);
LOCFOR(fun_708);
LOCFOR(fun_Pbucket_709);
LOCFOR(fun_Pbucket_setter_710);
LOCFOR(fun_711);
LOCFOR(fun_Pindex_712);
LOCFOR(fun_Pindex_setter_713);
LOCFOR(fun_714);
LOCFOR(fun_inner_715);
LOCFOR(fun_outer_716);
LOCFOR(fun_717);
LOCFOR(fun_ini_state_718);
LOCFOR(fun_inner_719);
LOCFOR(fun_outer_720);
LOCFOR(fun_721);
LOCFOR(fun_nxt_state_722);
LOCFOR(fun_fin_stateQ_723);
LOCFOR(fun_now_key_724);
LOCFOR(fun_now_elt_725);
LOCFOR(fun_now_elt_setter_726);
LOCFOR(fun_copy_state_727);
LOCFOR(fun_grow_table_728);
LOCFOR(fun_rehash_table_729);
LOCFOR(fun_730);
LOCFOR(fun_731);
FUNFOR(Ychoose_table_geometry);
LOCFOR(fun_inner_733);
LOCFOR(fun_outer_734);
LOCFOR(fun_735);
LOCFOR(fun_736);
LOCFOR(fun_copy_to_new_vector_737);
FUNFOR(Ycurrent_gc_state);
LOCFOR(fun_id_hash_739);
LOCFOR(fun_id_hash_740);
FUNFOR(Yrot);
LOCFOR(fun_id_hash_742);
LOCFOR(fun_id_hash_743);
LOCFOR(fun_id_hash_744);
LOCFOR(fun_loop_745);
FUNFOR(Ycase_insensitive_string_hash);
LOCFOR(fun_loop_747);
FUNFOR(Ycase_insensitive_string_equal);
LOCFOR(fun_table_protocol_749);
FUNFOR(Ybooted_fab_sym);
LOCFOR(fun_boot_751);
FUNFOR(Yboot_symbols);
LOCFOR(fun_loop_753);
LOCFOR(fun_754);
LOCFOR(fun_ascii_Gchar_755);
LOCFOR(fun_char_Ginteger_756);
LOCFOR(fun_integer_Gchar_757);
LOCFOR(fun_loop_758);
LOCFOR(fun_loop_759);
LOCFOR(fun_char_Gascii_760);
LOCFOR(fun_match_761);
LOCFOR(fun_failXX_762);
LOCFOR(fun_763);
LOCFOR(fun_match_digitX_764);
LOCFOR(fun_looking_at_alphabeticQ_765);
LOCFOR(fun_loop_766);
LOCFOR(fun_str_to_num_767);
LOCFOR(fun_port_handle_768);
LOCFOR(fun_port_handle_setter_769);
LOCFOR(fun_770);
LOCFOR(fun_open_input_file_771);
LOCFOR(fun_file_opening_error_772);
LOCFOR(fun_open_output_file_773);
LOCFOR(fun_close_input_port_774);
LOCFOR(fun_close_output_port_775);
LOCFOR(fun_776);
LOCFOR(fun_777);
LOCFOR(fun_call_with_input_file_778);
LOCFOR(fun_779);
LOCFOR(fun_780);
LOCFOR(fun_call_with_output_file_781);
LOCFOR(fun_eof_objectQ_782);
LOCFOR(fun_eof_object_783);
LOCFOR(fun_read_char_784);
LOCFOR(fun_peek_char_785);
LOCFOR(fun_char_readyQ_786);
LOCFOR(fun_newline_787);
LOCFOR(fun_force_output_788);
LOCFOR(fun_write_char_789);
LOCFOR(fun_write_string_790);
LOCFOR(fun_port_guts_791);
LOCFOR(fun_port_guts_setter_792);
LOCFOR(fun_793);
LOCFOR(fun_port_contents_794);
LOCFOR(fun_port_index_795);
LOCFOR(fun_port_index_setter_796);
LOCFOR(fun_797);
LOCFOR(fun_call_with_string_input_port_798);
LOCFOR(fun_call_with_string_output_port_799);
LOCFOR(fun_peek_char_800);
LOCFOR(fun_read_char_801);
LOCFOR(fun_char_readyQ_802);
LOCFOR(fun_write_char_803);
LOCFOR(fun_write_string_804);
LOCFOR(fun_loop_805);
LOCFOR(fun_read_806);
LOCFOR(fun_read_from_string_807);
LOCFOR(fun_sub_read_carefully_808);
LOCFOR(fun_make_reader_token_809);
LOCFOR(fun_reader_tokenQ_810);
LOCFOR(fun_sub_read_811);
LOCFOR(fun_812);
LOCFOR(fun_set_standard_syntaxX_813);
LOCFOR(fun_814);
LOCFOR(fun_815);
FUNFOR(Ysub_read_constituent);
LOCFOR(fun_817);
LOCFOR(fun_set_standard_read_macroX_818);
LOCFOR(fun_sub_read_list_819);
LOCFOR(fun_820);
LOCFOR(fun_821);
LOCFOR(fun_822);
LOCFOR(fun_823);
LOCFOR(fun_loop_824);
FUNFOR(Yread_string_literal);
LOCFOR(fun_826);
LOCFOR(fun_loop_827);
LOCFOR(fun_gobble_line_828);
LOCFOR(fun_define_sharp_macro_829);
LOCFOR(fun_830);
LOCFOR(fun_831);
LOCFOR(fun_832);
LOCFOR(fun_833);
LOCFOR(fun_834);
LOCFOR(fun_835);
LOCFOR(fun_836);
LOCFOR(fun_loop_837);
LOCFOR(fun_sub_read_token_838);
LOCFOR(fun_839);
LOCFOR(fun_parse_token_840);
LOCFOR(fun_reading_error_841);
LOCFOR(fun_warn_842);
LOCFOR(fun_reverse_list_Gstring_843);
LOCFOR(fun_make_immutableX_844);
LOCFOR(fun_as_binding_name_845);
LOCFOR(fun_display_846);
LOCFOR(fun_display_847);
LOCFOR(fun_recur_848);
LOCFOR(fun_display_849);
LOCFOR(fun_write_to_string_850);
LOCFOR(fun_recur_851);
LOCFOR(fun_write_852);
LOCFOR(fun_writeln_853);
LOCFOR(fun_recurring_write_854);
LOCFOR(fun_recurring_write_855);
LOCFOR(fun_recurring_write_856);
LOCFOR(fun_recurring_write_857);
LOCFOR(fun_recurring_write_858);
LOCFOR(fun_recurring_write_859);
LOCFOR(fun_recurring_write_860);
LOCFOR(fun_recurring_write_861);
LOCFOR(fun_write_boolean_862);
LOCFOR(fun_write_number_863);
LOCFOR(fun_write_char_literal_864);
LOCFOR(fun_character_name_865);
LOCFOR(fun_loop_866);
LOCFOR(fun_write_string_literal_867);
LOCFOR(fun_loop_868);
LOCFOR(fun_write_list_869);
LOCFOR(fun_quotationQ_870);
LOCFOR(fun_loop_871);
LOCFOR(fun_write_vector_872);
LOCFOR(fun_recurring_write_873);
LOCFOR(fun_recurring_write_874);
LOCFOR(fun_object_name_875);
LOCFOR(fun_write_fun_guts_876);
LOCFOR(fun_recurring_write_877);
LOCFOR(fun_recurring_write_878);
LOCFOR(fun_879);
LOCFOR(fun_recurring_write_880);
LOCFOR(fun_recurring_write_881);
LOCFOR(fun_arg_882);
LOCFOR(fun_883);
LOCFOR(fun_format_884);
LOCFOR(fun_sexpr_self_evaluatingQ_885);
LOCFOR(fun_sexpr_variableQ_886);
LOCFOR(fun_sexpr_tagged_listQ_887);
LOCFOR(fun_sexpr_quotedQ_888);
LOCFOR(fun_sexpr_make_quote_889);
LOCFOR(fun_sexpr_text_of_quotation_890);
LOCFOR(fun_sexpr_assignmentQ_891);
LOCFOR(fun_sexpr_assignment_variable_892);
LOCFOR(fun_sexpr_assignment_value_893);
LOCFOR(fun_sexpr_variable_name_894);
LOCFOR(fun_sexpr_variable_name_895);
LOCFOR(fun_sexpr_variable_type_896);
LOCFOR(fun_sexpr_variable_type_897);
LOCFOR(fun_sexpr_definitionQ_898);
LOCFOR(fun_sexpr_definition_variable_899);
LOCFOR(fun_sexpr_definition_value_900);
LOCFOR(fun_sexpr_syntax_definitionQ_901);
LOCFOR(fun_sexpr_syntax_definition_variable_902);
LOCFOR(fun_sexpr_syntax_definition_value_903);
LOCFOR(fun_sexpr_function_definitionQ_904);
LOCFOR(fun_sexpr_method_definitionQ_905);
LOCFOR(fun_sexpr_generic_definitionQ_906);
LOCFOR(fun_sexpr_function_definition_variable_907);
LOCFOR(fun_sexpr_signature_parameters_908);
LOCFOR(fun_sexpr_signature_values_909);
LOCFOR(fun_sexpr_function_parameters_910);
LOCFOR(fun_sexpr_function_body_911);
LOCFOR(fun_sexpr_function_definition_value_912);
LOCFOR(fun_sexpr_methodQ_913);
LOCFOR(fun_sexpr_method_parameters_914);
LOCFOR(fun_sexpr_method_values_915);
LOCFOR(fun_sexpr_method_body_916);
LOCFOR(fun_sexpr_make_anonymous_method_917);
LOCFOR(fun_sexpr_make_method_918);
LOCFOR(fun_sexpr_ifQ_919);
LOCFOR(fun_sexpr_if_test_920);
LOCFOR(fun_sexpr_if_then_921);
LOCFOR(fun_sexpr_if_else_922);
LOCFOR(fun_sexpr_make_if_923);
LOCFOR(fun_sexpr_blockQ_924);
LOCFOR(fun_sexpr_block_name_925);
LOCFOR(fun_sexpr_block_body_926);
LOCFOR(fun_sexpr_unwind_protectQ_927);
LOCFOR(fun_sexpr_unwind_protect_protected_form_928);
LOCFOR(fun_sexpr_unwind_protect_cleanup_forms_929);
LOCFOR(fun_sexpr_monitorQ_930);
LOCFOR(fun_sexpr_monitor_handler_931);
LOCFOR(fun_sexpr_monitor_body_932);
LOCFOR(fun_sexpr_beginQ_933);
LOCFOR(fun_sexpr_begin_actions_934);
LOCFOR(fun_sexpr_last_expQ_935);
LOCFOR(fun_sexpr_first_exp_936);
LOCFOR(fun_sexpr_rest_exps_937);
LOCFOR(fun_sexpr_sequence_Gbegin_938);
LOCFOR(fun_sexpr_make_begin_939);
LOCFOR(fun_sexpr_applicationQ_940);
LOCFOR(fun_sexpr_operator_941);
LOCFOR(fun_sexpr_operands_942);
LOCFOR(fun_sexpr_no_operandsQ_943);
LOCFOR(fun_sexpr_first_operand_944);
LOCFOR(fun_sexpr_rest_operands_945);
LOCFOR(fun_sexpr_make_application_946);
LOCFOR(fun_sexpr_new_unique_name_counterX_947);
LOCFOR(fun_sexpr_unique_name_948);
LOCFOR(fun_sexpr_letQ_949);
LOCFOR(fun_sexpr_let_bound_variables_950);
LOCFOR(fun_sexpr_let_values_951);
LOCFOR(fun_sexpr_let_body_952);
LOCFOR(fun_col_953);
LOCFOR(fun_sexpr_let_Gcombination_954);
LOCFOR(fun_sexpr_locQ_955);
LOCFOR(fun_sexpr_loc_bound_names_956);
LOCFOR(fun_sexpr_loc_bound_parameters_957);
LOCFOR(fun_sexpr_loc_bound_bodies_958);
LOCFOR(fun_sexpr_loc_raw_body_959);
LOCFOR(fun_sexpr_loc_body_960);
LOCFOR(fun_sexpr_iterateQ_961);
LOCFOR(fun_sexpr_iterate_name_962);
LOCFOR(fun_sexpr_iterate_signature_963);
LOCFOR(fun_sexpr_iterate_inits_964);
LOCFOR(fun_sexpr_iterate_body_965);
LOCFOR(fun_sexpr_iterate_Gloc_966);
LOCFOR(fun_sexpr_isaQ_967);
LOCFOR(fun_sexpr_isa_parents_968);
LOCFOR(fun_sexpr_isa_slot_inits_969);
LOCFOR(fun_sexpr_isa_init_slots_970);
LOCFOR(fun_sexpr_isa_init_values_971);
LOCFOR(fun_sexpr_slotQ_972);
LOCFOR(fun_sexpr_slot_object_973);
LOCFOR(fun_sexpr_slot_variable_974);
LOCFOR(fun_sexpr_slot_init_975);
LOCFOR(fun_sexpr_make_getter_976);
LOCFOR(fun_sexpr_make_setter_977);
LOCFOR(fun_sexpr_make_setter_name_978);
LOCFOR(fun_sexpr_macroQ_979);
LOCFOR(fun_sexpr_macro_expandQ_980);
LOCFOR(fun_sexpr_make_syntax_if_981);
LOCFOR(fun_sexpr_expand_backquote_982);
LOCFOR(fun_sexpr_unquoteQ_983);
LOCFOR(fun_sexpr_unquote_splicingQ_984);
LOCFOR(fun_sexpr_backquoteQ_985);
LOCFOR(fun_sexpr_atomQ_986);
LOCFOR(fun_nreconc_987);
LOCFOR(fun_loop_988);
LOCFOR(fun_989);
LOCFOR(fun_bq_process_990);
LOCFOR(fun_bracket_991);
LOCFOR(fun_map_tree_992);
LOCFOR(fun_bq_remove_tokens_993);
LOCFOR(fun_sexpr_syntax_ifQ_994);
LOCFOR(fun_sexpr_syntax_if_value_995);
LOCFOR(fun_sexpr_syntax_if_pattern_996);
LOCFOR(fun_sexpr_syntax_if_then_997);
LOCFOR(fun_sexpr_syntax_if_else_998);
LOCFOR(fun_sexpr_pattern_variableQ_999);
LOCFOR(fun_sexpr_pattern_variable_name_1000);
LOCFOR(fun_col_1001);
LOCFOR(fun_sexpr_bind_pattern_variables_1002);
LOCFOR(fun_sexpr_make_macro_function_1003);
LOCFOR(fun_env_values_1004);
LOCFOR(fun_env_values_setter_1005);
LOCFOR(fun_1006);
LOCFOR(fun_fab_glo_env_1007);
LOCFOR(fun_env_global_value_1008);
LOCFOR(fun_env_global_value_setter_1009);
LOCFOR(fun_env_define_global_bindingX_1010);
LOCFOR(fun_env_runtime_value_1011);
LOCFOR(fun_env_runtime_value_setter_1012);
LOCFOR(fun_env_parent_1013);
LOCFOR(fun_env_parent_setter_1014);
LOCFOR(fun_1015);
LOCFOR(fun_env_function_1016);
LOCFOR(fun_env_function_setter_1017);
LOCFOR(fun_1018);
LOCFOR(fun_env_names_1019);
LOCFOR(fun_env_names_setter_1020);
LOCFOR(fun_1021);
LOCFOR(fun_env_values_1022);
LOCFOR(fun_env_values_setter_1023);
LOCFOR(fun_1024);
LOCFOR(fun_env_frameX_1025);
LOCFOR(fun_env_local_value_1026);
LOCFOR(fun_env_local_value_setter_1027);
LOCFOR(fun_loop_1028);
LOCFOR(fun_env_binding_value_1029);
LOCFOR(fun_loop_1030);
LOCFOR(fun_env_binding_value_setter_1031);
LOCFOR(fun_objectify_error_1032);
LOCFOR(fun_binding_name_1033);
LOCFOR(fun_binding_name_setter_1034);
LOCFOR(fun_1035);
LOCFOR(fun_binding_type_1036);
LOCFOR(fun_binding_type_setter_1037);
LOCFOR(fun_1038);
LOCFOR(fun_binding_freeQ_1039);
LOCFOR(fun_binding_freeQ_1040);
LOCFOR(fun_binding_freeQ_setter_1041);
LOCFOR(fun_1042);
LOCFOR(fun_binding_index_1043);
LOCFOR(fun_binding_index_setter_1044);
LOCFOR(fun_1045);
LOCFOR(fun_binding_locative_1046);
LOCFOR(fun_binding_locative_setter_1047);
LOCFOR(fun_1048);
LOCFOR(fun_binding_description_1049);
LOCFOR(fun_binding_description_setter_1050);
LOCFOR(fun_1051);
LOCFOR(fun_binding_mutableQ_1052);
LOCFOR(fun_binding_mutableQ_setter_1053);
LOCFOR(fun_1054);
LOCFOR(fun_binding_dottedQ_1055);
LOCFOR(fun_binding_dottedQ_setter_1056);
LOCFOR(fun_1057);
LOCFOR(fun_description_comparator_1058);
LOCFOR(fun_description_comparator_setter_1059);
LOCFOR(fun_1060);
LOCFOR(fun_description_arity_1061);
LOCFOR(fun_description_arity_setter_1062);
LOCFOR(fun_1063);
LOCFOR(fun_description_generator_1064);
LOCFOR(fun_description_generator_setter_1065);
LOCFOR(fun_1066);
LOCFOR(fun_description_value_1067);
LOCFOR(fun_description_value_setter_1068);
LOCFOR(fun_1069);
LOCFOR(fun_compile_time_program_1070);
LOCFOR(fun_compile_time_program_setter_1071);
LOCFOR(fun_1072);
LOCFOR(fun_binding_handler_1073);
LOCFOR(fun_binding_handler_setter_1074);
LOCFOR(fun_1075);
LOCFOR(fun_reference_binding_1076);
LOCFOR(fun_reference_binding_1077);
LOCFOR(fun_reference_binding_setter_1078);
LOCFOR(fun_1079);
LOCFOR(fun_reference_frame_number_1080);
LOCFOR(fun_reference_frame_number_setter_1081);
LOCFOR(fun_1082);
LOCFOR(fun_reference_frame_offset_1083);
LOCFOR(fun_reference_frame_offset_setter_1084);
LOCFOR(fun_1085);
LOCFOR(fun_boundQ_reference_1086);
LOCFOR(fun_boundQ_reference_setter_1087);
LOCFOR(fun_1088);
LOCFOR(fun_assignment_form_1089);
LOCFOR(fun_assignment_form_setter_1090);
LOCFOR(fun_1091);
LOCFOR(fun_assignment_reference_1092);
LOCFOR(fun_assignment_reference_setter_1093);
LOCFOR(fun_1094);
LOCFOR(fun_assignment_binding_1095);
LOCFOR(fun_assignment_binding_setter_1096);
LOCFOR(fun_1097);
LOCFOR(fun_function_name_1098);
LOCFOR(fun_function_name_setter_1099);
LOCFOR(fun_1100);
LOCFOR(fun_function_bindings_1101);
LOCFOR(fun_function_bindings_setter_1102);
LOCFOR(fun_1103);
LOCFOR(fun_function_naryQ_1104);
LOCFOR(fun_function_naryQ_setter_1105);
LOCFOR(fun_1106);
LOCFOR(fun_function_kind_1107);
LOCFOR(fun_function_body_1108);
LOCFOR(fun_function_body_setter_1109);
LOCFOR(fun_1110);
LOCFOR(fun_function_kind_1111);
LOCFOR(fun_function_kind_1112);
LOCFOR(fun_function_kind_1113);
LOCFOR(fun_alternative_condition_1114);
LOCFOR(fun_alternative_condition_setter_1115);
LOCFOR(fun_1116);
LOCFOR(fun_alternative_consequent_1117);
LOCFOR(fun_alternative_consequent_setter_1118);
LOCFOR(fun_1119);
LOCFOR(fun_alternative_alternant_1120);
LOCFOR(fun_alternative_alternant_setter_1121);
LOCFOR(fun_1122);
LOCFOR(fun_sequential_head_1123);
LOCFOR(fun_sequential_head_setter_1124);
LOCFOR(fun_1125);
LOCFOR(fun_sequential_tail_1126);
LOCFOR(fun_sequential_tail_setter_1127);
LOCFOR(fun_1128);
LOCFOR(fun_empty_sequential_1129);
LOCFOR(fun_empty_sequentialQ_1130);
LOCFOR(fun_constant_value_1131);
LOCFOR(fun_constant_value_setter_1132);
LOCFOR(fun_1133);
LOCFOR(fun_application_arguments_1134);
LOCFOR(fun_application_arguments_setter_1135);
LOCFOR(fun_1136);
LOCFOR(fun_application_function_1137);
LOCFOR(fun_application_function_setter_1138);
LOCFOR(fun_1139);
LOCFOR(fun_application_binding_1140);
LOCFOR(fun_application_binding_setter_1141);
LOCFOR(fun_1142);
LOCFOR(fun_fix_let_bindings_1143);
LOCFOR(fun_fix_let_bindings_setter_1144);
LOCFOR(fun_1145);
LOCFOR(fun_fix_let_arguments_1146);
LOCFOR(fun_fix_let_arguments_setter_1147);
LOCFOR(fun_1148);
LOCFOR(fun_fix_let_body_1149);
LOCFOR(fun_fix_let_body_setter_1150);
LOCFOR(fun_1151);
LOCFOR(fun_arguments_head_1152);
LOCFOR(fun_arguments_head_setter_1153);
LOCFOR(fun_1154);
LOCFOR(fun_arguments_tail_1155);
LOCFOR(fun_arguments_tail_setter_1156);
LOCFOR(fun_1157);
LOCFOR(fun_empty_argument_list_1158);
LOCFOR(fun_empty_argument_listQ_1159);
LOCFOR(fun_loop_1160);
LOCFOR(fun_as_1161);
LOCFOR(fun_locals_bindings_1162);
LOCFOR(fun_locals_bindings_setter_1163);
LOCFOR(fun_1164);
LOCFOR(fun_locals_functions_1165);
LOCFOR(fun_locals_functions_setter_1166);
LOCFOR(fun_1167);
LOCFOR(fun_locals_body_1168);
LOCFOR(fun_locals_body_setter_1169);
LOCFOR(fun_1170);
LOCFOR(fun_bind_exit_main_fun_1171);
LOCFOR(fun_bind_exit_main_fun_setter_1172);
LOCFOR(fun_1173);
LOCFOR(fun_unwind_protect_protected_thunk_1174);
LOCFOR(fun_unwind_protect_protected_thunk_setter_1175);
LOCFOR(fun_1176);
LOCFOR(fun_unwind_protect_cleanup_thunk_1177);
LOCFOR(fun_unwind_protect_cleanup_thunk_setter_1178);
LOCFOR(fun_1179);
LOCFOR(fun_monitor_handler_1180);
LOCFOR(fun_monitor_handler_setter_1181);
LOCFOR(fun_1182);
LOCFOR(fun_monitor_main_thunk_1183);
LOCFOR(fun_monitor_main_thunk_setter_1184);
LOCFOR(fun_1185);
LOCFOR(fun_sif_pattern_1186);
LOCFOR(fun_sif_pattern_setter_1187);
LOCFOR(fun_1188);
LOCFOR(fun_sif_bindings_1189);
LOCFOR(fun_sif_bindings_setter_1190);
LOCFOR(fun_1191);
LOCFOR(fun_sif_value_1192);
LOCFOR(fun_sif_value_setter_1193);
LOCFOR(fun_1194);
LOCFOR(fun_sif_then_1195);
LOCFOR(fun_sif_then_setter_1196);
LOCFOR(fun_1197);
LOCFOR(fun_sif_else_1198);
LOCFOR(fun_sif_else_setter_1199);
LOCFOR(fun_1200);
LOCFOR(fun_match_value_1201);
LOCFOR(fun_match_value_setter_1202);
LOCFOR(fun_1203);
LOCFOR(fun_match_elements_1204);
LOCFOR(fun_match_elements_setter_1205);
LOCFOR(fun_1206);
LOCFOR(fun_match_element_1207);
LOCFOR(fun_match_element_setter_1208);
LOCFOR(fun_1209);
LOCFOR(fun_match_binding_1210);
LOCFOR(fun_match_binding_setter_1211);
LOCFOR(fun_1212);
LOCFOR(fun_environment_next_1213);
LOCFOR(fun_environment_next_setter_1214);
LOCFOR(fun_1215);
LOCFOR(fun_environment_bindings_1216);
LOCFOR(fun_environment_bindings_setter_1217);
LOCFOR(fun_1218);
LOCFOR(fun_environment_next_index_1219);
LOCFOR(fun_environment_next_index_setter_1220);
LOCFOR(fun_1221);
LOCFOR(fun_objectify_1222);
LOCFOR(fun_objectify_1223);
LOCFOR(fun_objectify_1224);
LOCFOR(fun_objectify_1225);
LOCFOR(fun_objectify_1226);
LOCFOR(fun_objectify_1227);
LOCFOR(fun_objectify_quotation_1228);
LOCFOR(fun_objectify_raw_1229);
LOCFOR(fun_objectify_boundQ_1230);
LOCFOR(fun_objectify_compile_time_1231);
LOCFOR(fun_objectify_alternative_1232);
LOCFOR(fun_loop_1233);
LOCFOR(fun_sequentialize_1234);
LOCFOR(fun_objectify_sequential_1235);
LOCFOR(fun_1236);
LOCFOR(fun_objectify_application_1237);
LOCFOR(fun_1238);
LOCFOR(fun_objectify_application_1239);
LOCFOR(fun_1240);
LOCFOR(fun_objectify_application_1241);
LOCFOR(fun_process_closed_application_1242);
LOCFOR(fun_pack_dotted_arguments_1243);
LOCFOR(fun_gather_arguments_1244);
LOCFOR(fun_process_nary_closed_application_1245);
LOCFOR(fun_convert2arguments_1246);
LOCFOR(fun_number_of_1247);
LOCFOR(fun_objectify_assignment_1248);
LOCFOR(fun_objectify_assignment_1249);
LOCFOR(fun_objectify_assignment_using_1250);
LOCFOR(fun_objectify_assignment_using_1251);
LOCFOR(fun_objectify_assignment_using_1252);
LOCFOR(fun_ast_define_binding_1253);
LOCFOR(fun_1254);
LOCFOR(fun_objectify_definition_1255);
LOCFOR(fun_expand_1256);
LOCFOR(fun_1257);
LOCFOR(fun_objectify_syntax_definition_1258);
LOCFOR(fun_1259);
LOCFOR(fun_objectify_function_definition_1260);
LOCFOR(fun_1261);
LOCFOR(fun_objectify_primitive_definition_1262);
LOCFOR(fun_1263);
LOCFOR(fun_objectify_generic_definition_1264);
LOCFOR(fun_1265);
LOCFOR(fun_objectify_method_definition_1266);
LOCFOR(fun_objectify_function_1267);
LOCFOR(fun_col_1268);
LOCFOR(fun_objectify_parameters_1269);
LOCFOR(fun_objectify_binding_1270);
LOCFOR(fun_find_1271);
LOCFOR(fun_loop_1272);
LOCFOR(fun_compute_local_reference_offsets_1273);
LOCFOR(fun_objectify_binding_1274);
LOCFOR(fun_objectify_binding_1275);
LOCFOR(fun_objectify_binding_1276);
LOCFOR(fun_objectify_binding_1277);
LOCFOR(fun_default_type_1278);
LOCFOR(fun_objectify_free_global_reference_1279);
LOCFOR(fun_objectify_binding_1280);
LOCFOR(fun_objectify_symbol_1281);
LOCFOR(fun_ftype_1282);
LOCFOR(fun_1283);
LOCFOR(fun_1284);
LOCFOR(fun_objectify_locals_1285);
LOCFOR(fun_objectify_bind_exit_1286);
LOCFOR(fun_objectify_unwind_protect_1287);
LOCFOR(fun_objectify_monitor_1288);
LOCFOR(fun_objectify_bind_list_1289);
LOCFOR(fun_objectify_bind_list_1290);
LOCFOR(fun_objectify_bind_list_1291);
LOCFOR(fun_objectify_bind_listT_1292);
LOCFOR(fun_objectify_bind_element_1293);
LOCFOR(fun_objectify_bind_element_1294);
LOCFOR(fun_objectify_bind_unquote_1295);
LOCFOR(fun_objectify_bind_unquote_splicing_1296);
LOCFOR(fun_objectify_pattern_1297);
LOCFOR(fun_1298);
LOCFOR(fun_objectify_syntax_if_1299);
LOCFOR(fun_r_extendT_1300);
LOCFOR(fun_insert_globalX_1301);
LOCFOR(fun_1302);
LOCFOR(fun_insert_globalsX_1303);
LOCFOR(fun_find_static_global_environment_1304);
LOCFOR(fun_find_static_global_environment_1305);
LOCFOR(fun_loop_1306);
LOCFOR(fun_find_binding_1307);
LOCFOR(fun_find_binding_1308);
LOCFOR(fun_find_binding_1309);
LOCFOR(fun_frame_bindings_1310);
LOCFOR(fun_1311);
LOCFOR(fun_loop_1312);
FUNFOR(Yreport_undefined_global_bindings);
LOCFOR(fun_register_magic_binding_1314);
LOCFOR(fun_magic_bindings_1315);
LOCFOR(fun_1316);
LOCFOR(fun_1317);
LOCFOR(fun_1318);
LOCFOR(fun_1319);
LOCFOR(fun_1320);
LOCFOR(fun_1321);
LOCFOR(fun_1322);
LOCFOR(fun_1323);
LOCFOR(fun_1324);
LOCFOR(fun_1325);
LOCFOR(fun_1326);
LOCFOR(fun_1327);
LOCFOR(fun_1328);
LOCFOR(fun_1329);
LOCFOR(fun_1330);
LOCFOR(fun_1331);
LOCFOR(fun_1332);
LOCFOR(fun_1333);
LOCFOR(fun_pairize_1334);
LOCFOR(fun_1335);
LOCFOR(fun_1336);
LOCFOR(fun_1337);
LOCFOR(fun_1338);
LOCFOR(fun_1339);
LOCFOR(fun_ast_macro_expand_1340);
LOCFOR(fun_1341);
LOCFOR(fun_1342);
LOCFOR(fun_primitives_1343);
LOCFOR(fun_1344);
FUNFOR(Yinit_rt_environment);
FUNFOR(Yfab_static_global_environment);
FUNFOR(Yinit_static_global_environment);
FUNFOR(Yinit_ast);
FUNFOR(Yct_env);
FUNFOR(Yct_boot_env);
LOCFOR(fun_loop_1351);
FUNFOR(Ydo_static_global_bindings);
LOCFOR(fun_ast_eval_in_1353);
LOCFOR(fun_ast_eval_1354);
LOCFOR(fun_ast_eval_1355);
LOCFOR(fun_ast_eval_1356);
LOCFOR(fun_loop_1357);
LOCFOR(fun_ast_eval_specs_1358);
LOCFOR(fun_1359);
LOCFOR(fun_1360);
LOCFOR(fun_1361);
LOCFOR(fun_1362);
LOCFOR(fun_1363);
LOCFOR(fun_1364);
LOCFOR(fun_1365);
LOCFOR(fun_1366);
LOCFOR(fun_1367);
LOCFOR(fun_1368);
LOCFOR(fun_export_proto_method_1369);
LOCFOR(fun_1370);
LOCFOR(fun_ast_eval_1371);
LOCFOR(fun_ast_eval_1372);
LOCFOR(fun_env_local_reference_value_1373);
LOCFOR(fun_env_local_reference_value_setter_1374);
LOCFOR(fun_ast_eval_1375);
LOCFOR(fun_env_global_binding_value_or_1376);
LOCFOR(fun_env_global_binding_value_1377);
LOCFOR(fun_env_global_binding_value_setter_1378);
LOCFOR(fun_ast_eval_1379);
LOCFOR(fun_ast_eval_1380);
LOCFOR(fun_ast_eval_1381);
LOCFOR(fun_ast_eval_boundQ_1382);
LOCFOR(fun_ast_eval_boundQ_1383);
LOCFOR(fun_ast_eval_boundQ_1384);
LOCFOR(fun_ast_eval_1385);
LOCFOR(fun_ast_eval_1386);
LOCFOR(fun_ast_eval_1387);
LOCFOR(fun_env_define_bindingX_1388);
LOCFOR(fun_env_define_bindingX_1389);
LOCFOR(fun_ast_eval_1390);
LOCFOR(fun_box_value_1391);
LOCFOR(fun_box_value_setter_1392);
LOCFOR(fun_1393);
LOCFOR(fun_ast_eval_1394);
LOCFOR(fun_eval_1395);
LOCFOR(fun_ast_eval_1396);
LOCFOR(fun_eval_1397);
LOCFOR(fun_ast_eval_1398);
LOCFOR(fun_ast_eval_1399);
LOCFOR(fun_ast_eval_1400);
LOCFOR(fun_ast_eval_1401);
LOCFOR(fun_1402);
LOCFOR(fun_ast_eval_1403);
LOCFOR(fun_1404);
LOCFOR(fun_1405);
LOCFOR(fun_ast_eval_1406);
LOCFOR(fun_1407);
LOCFOR(fun_1408);
LOCFOR(fun_ast_eval_1409);
LOCFOR(fun_ast_eval_1410);
LOCFOR(fun_match_error_1411);
LOCFOR(fun_ast_eval_match_1412);
LOCFOR(fun_loop_1413);
LOCFOR(fun_ast_eval_match_1414);
LOCFOR(fun_ast_eval_match_1415);
LOCFOR(fun_ast_eval_match_1416);
LOCFOR(fun_ast_eval_match_1417);
LOCFOR(fun_ast_eval_match_1418);
LOCFOR(fun_1419);
LOCFOR(fun_1420);
LOCFOR(fun_1421);
LOCFOR(fun_ast_eval_1422);
FUNFOR(Yrt_glo_env);
FUNFOR(Yrt_glo_env_setter);
FUNFOR(Yrt_env);
FUNFOR(Yrt_env_setter);
FUNFOR(Yast_read_eval);
FUNFOR(Yinit_ast_eval);
LOCFOR(fun_os_name_1429);
LOCFOR(fun_os_binding_value_1430);
LOCFOR(fun_os_binding_value_setter_1431);
LOCFOR(fun_loop_1432);
LOCFOR(fun_base_path_1433);
LOCFOR(fun_src_filename_1434);
LOCFOR(fun_parse_in_1435);
LOCFOR(fun_parse_1436);
LOCFOR(fun_str_parse_in_1437);
LOCFOR(fun_str_parse_1438);
LOCFOR(fun_eval_in_1439);
LOCFOR(fun_eval_1440);
LOCFOR(fun_str_eval_in_1441);
LOCFOR(fun_str_eval_1442);
LOCFOR(fun_loop_1443);
LOCFOR(fun_1444);
LOCFOR(fun_read_file_1445);
LOCFOR(fun_load_in_1446);
LOCFOR(fun_load_1447);
FUNFOR(Yproto_filename);
FUNFOR(Yc_filename);
LOCFOR(fun_load_from_1450);
LOCFOR(fun_prompt_for_command_expression_1451);
LOCFOR(fun_inner_1452);
LOCFOR(fun_loop_1453);
LOCFOR(fun_backtrace_1454);
FUNFOR(Ykeyboard_interrupt);
LOCFOR(fun_1456);
LOCFOR(fun_1457);
LOCFOR(fun_1458);
LOCFOR(fun_loop_1459);
LOCFOR(fun_1460);
LOCFOR(fun_top_in_1461);
LOCFOR(fun_1462);
LOCFOR(fun_top_1463);
extern P Y___main___ ();

/* FUNCTION CODES: */

P YPPtraits(P owner_) {
  P traitsF1;
  P res, a1;
loop:
  res = (traitsF1=(P)YPmake_object(),((P)YPinstall_object_values((P)traitsF1,(P)(P)5),
  (P)YPslot_elt_setter((P)owner_,(P)traitsF1,(P)(P)0),
  traitsF1));
return res;
}


P YPobject_shell() {
  P protoF2;
  P res;
loop:
  res = (protoF2=(P)YPmake_object(),((P)YPobject_traits_setter((P)(P)YPPtraits((P)protoF2),(P)protoF2),
  protoF2));
return res;
}


P YPobject_of(P owner_, P size_) {
  P protoF3;
  P res, a1, a2;
loop:
  res = (protoF3=(P)YPmake_object(),((P)YPobject_traits_setter((P)(P)YPobject_traits((P)owner_),(P)protoF3),
  (P)YPobject_values_setter((P)(P)YPmake_object_values((P)size_),(P)protoF3),
  protoF3));
return res;
}


P YPhead_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)0);
return res;
}


P YPhead(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)0);
return res;
}


P YPtail_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)1);
return res;
}


P YPtail(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)1);
return res;
}


P YPlst(P head_, P tail_) {
  P protoF4;
  P res, a1, a2;
loop:
  res = (protoF4=(P)YPobject_of((P)CHKREF(YLlstG),(P)(P)2),((P)YPslot_elt_setter((P)tail_,(P)protoF4,(P)(P)1),
  (P)YPslot_elt_setter((P)head_,(P)protoF4,(P)(P)0),
  protoF4));
return res;
}


P YPpair(P head_, P tail_) {
  P res, a1, a2;
loop:
  res = (P)YPlst((P)head_,(P)tail_);
return res;
}


P YPmet_code_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)0);
return res;
}


P YPmet_code(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)0);
return res;
}


P YPmet_specs_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)1);
return res;
}


P YPmet_specs(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)1);
return res;
}


P YPmet_naryQ_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)2);
return res;
}


P YPmet_naryQ(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)2);
return res;
}


P YPmet_arity_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)3);
return res;
}


P YPmet_arity(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)3);
return res;
}


P YPmet_env_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)4);
return res;
}


P YPmet_env(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)4);
return res;
}


P YPmet(P met_code_, P met_specs_, P met_naryQ_, P met_arity_, P met_env_) {
  P protoF5;
  P res, a1, a2, a3, a4, a5;
loop:
  res = (protoF5=(P)YPobject_of((P)CHKREF(YLmetG),(P)(P)5),((P)YPslot_elt_setter((P)met_env_,(P)protoF5,(P)(P)4),
  (P)YPslot_elt_setter((P)met_arity_,(P)protoF5,(P)(P)3),
  (P)YPslot_elt_setter((P)met_naryQ_,(P)protoF5,(P)(P)2),
  (P)YPslot_elt_setter((P)met_specs_,(P)protoF5,(P)(P)1),
  (P)YPslot_elt_setter((P)met_code_,(P)protoF5,(P)(P)0),
  protoF5));
return res;
}


INLINE P YPemptyQ(P x_) {
  P res, a1;
loop:
  res = (P)YPbb((P)(P)YPeqQ((P)x_,(P)CHKREF(Ynil)));
return res;
}


P YPPlen(P x_) {
  P res, a1;
loop:
  res = (((P)YPemptyQ((P)x_) != YPfalse)
    ? (P)0
    : (P)YPiA((P)(P)YPPlen((P)(P)YPtail((P)x_)),(P)(P)1));
return res;
}


P YPtraits_owner_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)0);
return res;
}


P YPtraits_owner(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)0);
return res;
}


P YPtraits_direct_parents_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)1);
return res;
}


P YPtraits_direct_parents(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)1);
return res;
}


P YPtraits_direct_slots_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)2);
return res;
}


P YPtraits_direct_slots(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)2);
return res;
}


P YPtraits_parents_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)3);
return res;
}


P YPtraits_parents(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)3);
return res;
}


P YPtraits_slots_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)4);
return res;
}


P YPtraits_slots(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)4);
return res;
}


P YPtraits(P traits_owner_, P traits_direct_parents_, P traits_direct_slots_, P traits_parents_, P traits_slots_) {
  P protoF6;
  P res, a1, a2, a3, a4, a5;
loop:
  res = (protoF6=(P)YPobject_of((P)CHKREF(YLtraitsG),(P)(P)5),((P)YPslot_elt_setter((P)traits_slots_,(P)protoF6,(P)(P)4),
  (P)YPslot_elt_setter((P)traits_parents_,(P)protoF6,(P)(P)3),
  (P)YPslot_elt_setter((P)traits_direct_slots_,(P)protoF6,(P)(P)2),
  (P)YPslot_elt_setter((P)traits_direct_parents_,(P)protoF6,(P)(P)1),
  (P)YPslot_elt_setter((P)traits_owner_,(P)protoF6,(P)(P)0),
  protoF6));
return res;
}


P YPcompute_parents(P parent_) {
  P traitsF7;
  P res, a1;
loop:
  res = (traitsF7=(P)YPobject_traits((P)parent_),(((P)YPbb((P)(P)YPeqQ((P)traitsF7,(P)(P)YPobject_traits((P)CHKREF(YLanyG)))) != YPfalse)
    ? (P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))
    : (P)YPpair((P)(P)YPtraits_owner((P)traitsF7),(P)(P)YPcompute_parents((P)(P)YPhead((P)(P)YPtraits_direct_parents((P)traitsF7))))));
return res;
}


P YPdefine_parent(P owner_, P direct_parent_) {
  P parentsF9;
  P direct_parentsF8;
  P res, a1, a2;
loop:
  res = (direct_parentsF8=(P)YPpair((P)direct_parent_,(P)CHKREF(Ynil)),(parentsF9=(P)YPpair((P)owner_,(P)(P)YPcompute_parents((P)direct_parent_)),(((YTprotosT = (P)YPpair((P)owner_,(P)CHKREF(YTprotosT)))),
  (P)YPobject_traits_setter((P)(P)YPtraits((P)owner_,(P)direct_parentsF8,(P)CHKREF(Ynil),(P)parentsF9,(P)CHKREF(Ynil)),(P)owner_))));
return res;
}


P YPcopy(P x_) {
  P res, a1;
loop:
  res = (((P)YPemptyQ((P)x_) != YPfalse)
    ? x_
    : (P)YPpair((P)(P)YPhead((P)x_),(P)(P)YPcopy((P)(P)YPtail((P)x_))));
return res;
}


P YPpatch_parents(P protos_) {
  P traitsF10;
  P res, a1;
loop:
  res = (((P)YPemptyQ((P)protos_) != YPfalse)
    ? YPfalse
    : (traitsF10=(P)YPobject_traits((P)(P)YPhead((P)protos_)),((P)YPobject_traits_setter((P)CHKREF(YLtraitsG_traits),(P)traitsF10),
  (P)YPtraits_parents_setter((P)(P)YPcopy((P)(P)YPtraits_parents((P)traitsF10)),(P)traitsF10),
  (P)YPtraits_direct_parents_setter((P)(P)YPcopy((P)(P)YPtraits_direct_parents((P)traitsF10)),(P)traitsF10),
  (a1=(P)YPtail((P)protos_),protos_=a1,PNUL))));
if (res == PNUL) goto loop; else return res;
}


INLINE P YPtag_bits(P x_) {
  P res, a1;
loop:
  res = (P)YPiB((P)x_,(P)CHKREF(YDtag_msk));
return res;
}


INLINE P YPtag(P x_, P t_) {
  P res, a1, a2;
loop:
  res = (P)YPiv((P)(P)YPiLL((P)x_,(P)CHKREF(YDtag_len)),(P)t_);
return res;
}


INLINE P YPuntag(P x_) {
  P res, a1;
loop:
  res = (P)YPiGG((P)x_,(P)CHKREF(YDtag_len));
return res;
}


P YPindirect_objectQ(P x_) {
  P res, a1;
loop:
  res = (P)YPiE((P)(P)YPtag_bits((P)x_),(P)CHKREF(YDadr_tag));
return res;
}


INLINE P YPtraits_of(P x_) {
  P tagF11;
  P res, a1;
loop:
  res = (tagF11=(P)YPtag_bits((P)x_),(((P)YPbb((P)(P)YPiE((P)tagF11,(P)CHKREF(YDadr_tag))) != YPfalse)
    ? (P)YPobject_traits((P)x_)
    : (P)YPelt((P)CHKREF(YDdirect_object_traits),(P)tagF11)));
return res;
}


FUNCODEDEF(Yobject_traits) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPtraits_of((P)x_);
return res;
}


INLINE P YPib(P x_) {
  P res, a1;
loop:
  res = (P)YPtag((P)x_,(P)(P)1);
return res;
}


INLINE P YPint(P x_) {
  P res, a1;
loop:
  res = (P)YPib((P)x_);
return res;
}


INLINE P YPiu(P x_) {
  P res, a1;
loop:
  res = (P)YPuntag((P)x_);
return res;
}


INLINE P YPcb(P x_) {
  P res, a1;
loop:
  res = (P)YPtag((P)x_,(P)(P)2);
return res;
}


INLINE P YPchr(P x_) {
  P res, a1;
loop:
  res = (P)YPcb((P)x_);
return res;
}


INLINE P YPcu(P x_) {
  P res, a1;
loop:
  res = (P)YPuntag((P)x_);
return res;
}


INLINE P YPlb(P x_) {
  P res, a1;
loop:
  res = (P)YPtag((P)x_,(P)(P)3);
return res;
}


INLINE P YPloc(P x_) {
  P res, a1;
loop:
  res = (P)YPlb((P)x_);
return res;
}


INLINE P YPlu(P x_) {
  P res, a1;
loop:
  res = (P)YPuntag((P)x_);
return res;
}


FUNCODEDEF(fun_loop_52) {
  ARG(r_);
  ARG(l_);
  P tF12;
  P res, a1, a2;
loop:
  res = (((P)YPemptyQ((P)l_) != YPfalse)
    ? r_
    : (tF12=(P)YPtail((P)l_),((P)YPtail_setter((P)r_,(P)l_),
  (a1=tF12,a2=l_,l_=a1,r_=a2,PNUL))));
if (res == PNUL) goto loop; else return res;
}


P YPrevX(P c_) {
  P loopF13;
  P res, a1;
loop:
  res = (loopF13=FUNSHELL(fun_loop_52, 1),FUNINIT(loopF13, 1,loopF13),
  CALL2(loopF13,c_,CHKREF(Ynil)));
return res;
}


FUNCODEDEF(fun_coly_54) {
  ARG(y_);
  ARG(lxy_);
  P res, a1, a2;
loop:
  res = (((P)YPemptyQ((P)y_) != YPfalse)
    ? (P)YPrevX((P)lxy_)
    : (a1=(P)YPpair((P)(P)YPhead((P)y_),(P)lxy_),a2=(P)YPtail((P)y_),lxy_=a1,y_=a2,PNUL));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_colx_55) {
  ARG(x_);
  ARG(lx_);
  P colyF14;
  P res, a1, a2;
loop:
  res = (((P)YPemptyQ((P)x_) != YPfalse)
    ? (colyF14=FUNSHELL(fun_coly_54, 1),FUNINIT(colyF14, 1,colyF14),
  CALL2(colyF14,lx_,FREEREF(0)))
    : (a1=(P)YPpair((P)(P)YPhead((P)x_),(P)lx_),a2=(P)YPtail((P)x_),lx_=a1,x_=a2,PNUL));
if (res == PNUL) goto loop; else return res;
}


P YPcat2(P x_, P y_) {
  P colxF15;
  P res, a1, a2;
loop:
  res = (colxF15=FUNSHELL(fun_colx_55, 2),FUNINIT(colxF15, 2,y_,colxF15),
  CALL2(colxF15,CHKREF(Ynil),x_));
return res;
}


P YPflo_dat_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)0);
return res;
}


P YPflo_dat(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)0);
return res;
}


P YPflo(P flo_dat_) {
  P protoF16;
  P res, a1;
loop:
  res = (protoF16=(P)YPobject_of((P)CHKREF(YLfloG),(P)(P)1),((P)YPslot_elt_setter((P)flo_dat_,(P)protoF16,(P)(P)0),
  protoF16));
return res;
}


P YPfb(P x_) {
  P res, a1;
loop:
  res = (P)YPflo((P)x_);
return res;
}


P YPfu(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)0);
return res;
}


P YPslot_owner_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)0);
return res;
}


P YPslot_owner(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)0);
return res;
}


P YPslot_getter_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)1);
return res;
}


P YPslot_getter(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)1);
return res;
}


P YPslot_setter_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)2);
return res;
}


P YPslot_setter(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)2);
return res;
}


P YPslot_type_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)3);
return res;
}


P YPslot_type(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)3);
return res;
}


P YPslot_init_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)4);
return res;
}


P YPslot_init(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)4);
return res;
}


P YPPslot(P slot_owner_, P slot_getter_, P slot_setter_, P slot_type_, P slot_init_) {
  P protoF17;
  P res, a1, a2, a3, a4, a5;
loop:
  res = (protoF17=(P)YPobject_of((P)CHKREF(YLslotG),(P)(P)5),((P)YPslot_elt_setter((P)slot_init_,(P)protoF17,(P)(P)4),
  (P)YPslot_elt_setter((P)slot_type_,(P)protoF17,(P)(P)3),
  (P)YPslot_elt_setter((P)slot_setter_,(P)protoF17,(P)(P)2),
  (P)YPslot_elt_setter((P)slot_getter_,(P)protoF17,(P)(P)1),
  (P)YPslot_elt_setter((P)slot_owner_,(P)protoF17,(P)(P)0),
  protoF17));
return res;
}


P YPgen_cache_singletons_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)0);
return res;
}


P YPgen_cache_singletons(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)0);
return res;
}


P YPgen_cache_classes_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)1);
return res;
}


P YPgen_cache_classes(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)1);
return res;
}


P YPgen_cache(P gen_cache_singletons_, P gen_cache_classes_) {
  P protoF18;
  P res, a1, a2;
loop:
  res = (protoF18=(P)YPobject_of((P)CHKREF(YLgen_cacheG),(P)(P)2),((P)YPslot_elt_setter((P)gen_cache_classes_,(P)protoF18,(P)(P)1),
  (P)YPslot_elt_setter((P)gen_cache_singletons_,(P)protoF18,(P)(P)0),
  protoF18));
return res;
}


P YPgen_code_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)0);
return res;
}


P YPgen_code(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)0);
return res;
}


P YPgen_specs_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)1);
return res;
}


P YPgen_specs(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)1);
return res;
}


P YPgen_naryQ_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)2);
return res;
}


P YPgen_naryQ(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)2);
return res;
}


P YPgen_arity_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)3);
return res;
}


P YPgen_arity(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)3);
return res;
}


P YPgen_mets_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)4);
return res;
}


P YPgen_mets(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)4);
return res;
}


P YPfun_cache_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)5);
return res;
}


P YPfun_cache(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)5);
return res;
}


P YPgen(P gen_code_, P gen_specs_, P gen_naryQ_, P gen_arity_, P gen_mets_, P fun_cache_) {
  P protoF19;
  P res, a1, a2, a3, a4, a5, a6;
loop:
  res = (protoF19=(P)YPobject_of((P)CHKREF(YLgenG),(P)(P)6),((P)YPslot_elt_setter((P)fun_cache_,(P)protoF19,(P)(P)5),
  (P)YPslot_elt_setter((P)gen_mets_,(P)protoF19,(P)(P)4),
  (P)YPslot_elt_setter((P)gen_arity_,(P)protoF19,(P)(P)3),
  (P)YPslot_elt_setter((P)gen_naryQ_,(P)protoF19,(P)(P)2),
  (P)YPslot_elt_setter((P)gen_specs_,(P)protoF19,(P)(P)1),
  (P)YPslot_elt_setter((P)gen_code_,(P)protoF19,(P)(P)0),
  protoF19));
return res;
}


FUNCODEDEF(fun_loop_91) {
  ARG(slots_);
  ARG(i_);
  P slotF20;
  P res, a1, a2;
loop:
  res = (((P)YPemptyQ((P)slots_) != YPfalse)
    ? (P)-1
    : (slotF20=(P)YPhead((P)slots_),(((P)YPbb((P)(P)YPeqQ((P)(P)YPslot_getter((P)slotF20),(P)FREEREF(0))) != YPfalse)
    ? i_
    : (a1=(P)YPiA((P)i_,(P)(P)1),a2=(P)YPtail((P)slots_),i_=a1,slots_=a2,PNUL))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(YPslot_offset) {
  ARG(getter_);
  ARG(owner_);
  P loopF21;
  P res, a1, a2;
loop:
  res = (loopF21=FUNSHELL(fun_loop_91, 2),FUNINIT(loopF21, 2,getter_,loopF21),
  CALL2(loopF21,(P)0,(P)YPtraits_slots((P)(P)YPobject_traits((P)owner_))));
return res;
}


FUNCODEDEF(YPearly_dispatch) {
  ARG(args_);
  P genF22;
  P res, a1;
loop:
  res = (genF22=(P)YPfun_reg(),(P)YPPapply((P)(P)YPhead((P)(P)YPgen_mets((P)genF22)),(P)args_));
return res;
}


FUNCODEDEF(YPregister_early_generic) {
  ARG(x_);
  P res, a1;
loop:
  res = ((YTearly_genericsT = (P)YPpair((P)x_,(P)CHKREF(YTearly_genericsT))));
return res;
}


FUNCODEDEF(YPadd_met) {
  ARG(met_);
  ARG(gen_);
  P res, a1, a2;
loop:
  res = (P)YPgen_mets_setter((P)(P)YPpair((P)met_,(P)(P)YPgen_mets((P)gen_)),(P)gen_);
return res;
}


FUNCODEDEF(Ynul_init) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul_slot);
return res;
}


FUNCODEDEF(YPadd_slot) {
  ARG(slot_);
  ARG(owner_);
  P traitsF23;
  P res, a1, a2;
loop:
  res = (traitsF23=(P)YPobject_traits((P)owner_),(P)YPtraits_direct_slots_setter((P)(P)YPpair((P)slot_,(P)(P)YPtraits_direct_slots((P)traitsF23)),(P)traitsF23));
return res;
}


FUNCODEDEF(fun_98) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLchrG),CHKREF(YPchr_val)));
return res;
}


FUNCODEDEF(fun_99) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLchrG),CHKREF(YPchr_val)));
return res;
}


FUNCODEDEF(fun_100) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul_slot);
return res;
}


FUNCODEDEF(fun_101) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLintG),CHKREF(YPint_val)));
return res;
}


FUNCODEDEF(fun_102) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLintG),CHKREF(YPint_val)));
return res;
}


FUNCODEDEF(fun_103) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul_slot);
return res;
}


FUNCODEDEF(fun_104) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLfloG),CHKREF(YPflo_val)));
return res;
}


FUNCODEDEF(fun_105) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLfloG),CHKREF(YPflo_val)));
return res;
}


FUNCODEDEF(fun_106) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul_slot);
return res;
}


FUNCODEDEF(fun_107) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLlocG),CHKREF(YPloc_val)));
return res;
}


FUNCODEDEF(fun_108) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLlocG),CHKREF(YPloc_val)));
return res;
}


FUNCODEDEF(fun_109) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul_slot);
return res;
}


FUNCODEDEF(fun_110) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLlstG),CHKREF(Yhead)));
return res;
}


FUNCODEDEF(fun_111) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLlstG),CHKREF(Yhead)));
return res;
}


FUNCODEDEF(fun_112) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynil);
return res;
}


FUNCODEDEF(fun_113) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLlstG),CHKREF(Ytail)));
return res;
}


FUNCODEDEF(fun_114) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLlstG),CHKREF(Ytail)));
return res;
}


FUNCODEDEF(fun_115) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynil);
return res;
}


FUNCODEDEF(fun_116) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLvecG),CHKREF(YPPvec_dat)));
return res;
}


FUNCODEDEF(fun_117) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLvecG),CHKREF(YPPvec_dat)));
return res;
}


FUNCODEDEF(fun_118) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul_slot);
return res;
}


FUNCODEDEF(fun_119) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLstrG),CHKREF(YPPstr_dat)));
return res;
}


FUNCODEDEF(fun_120) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLstrG),CHKREF(YPPstr_dat)));
return res;
}


FUNCODEDEF(fun_121) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul_slot);
return res;
}


FUNCODEDEF(fun_122) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLsymG),CHKREF(Ysym_name)));
return res;
}


FUNCODEDEF(fun_123) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLsymG),CHKREF(Ysym_name)));
return res;
}


FUNCODEDEF(fun_124) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul_slot);
return res;
}


FUNCODEDEF(fun_125) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_owner)));
return res;
}


FUNCODEDEF(fun_126) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_owner)));
return res;
}


FUNCODEDEF(fun_127) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul_slot);
return res;
}


FUNCODEDEF(fun_128) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_direct_parents)));
return res;
}


FUNCODEDEF(fun_129) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_direct_parents)));
return res;
}


FUNCODEDEF(fun_130) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynil);
return res;
}


FUNCODEDEF(fun_131) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_direct_slots)));
return res;
}


FUNCODEDEF(fun_132) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_direct_slots)));
return res;
}


FUNCODEDEF(fun_133) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynil);
return res;
}


FUNCODEDEF(fun_134) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_parents)));
return res;
}


FUNCODEDEF(fun_135) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_parents)));
return res;
}


FUNCODEDEF(fun_136) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynil);
return res;
}


FUNCODEDEF(fun_137) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_slots)));
return res;
}


FUNCODEDEF(fun_138) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_slots)));
return res;
}


FUNCODEDEF(fun_139) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynil);
return res;
}


FUNCODEDEF(fun_140) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_owner)));
return res;
}


FUNCODEDEF(fun_141) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_owner)));
return res;
}


FUNCODEDEF(fun_142) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul_slot);
return res;
}


FUNCODEDEF(fun_143) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_getter)));
return res;
}


FUNCODEDEF(fun_144) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_getter)));
return res;
}


FUNCODEDEF(fun_145) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul_slot);
return res;
}


FUNCODEDEF(fun_146) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_setter)));
return res;
}


FUNCODEDEF(fun_147) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_setter)));
return res;
}


FUNCODEDEF(fun_148) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul_slot);
return res;
}


FUNCODEDEF(fun_149) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_type)));
return res;
}


FUNCODEDEF(fun_150) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_type)));
return res;
}


FUNCODEDEF(fun_151) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul_slot);
return res;
}


FUNCODEDEF(fun_152) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_init)));
return res;
}


FUNCODEDEF(fun_153) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_init)));
return res;
}


FUNCODEDEF(fun_154) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul_slot);
return res;
}


FUNCODEDEF(fun_155) {
  ARG(x_);
  P res, a1;
loop:
  res = fun_154;
return res;
}


FUNCODEDEF(fun_156) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_singletons)));
return res;
}


FUNCODEDEF(fun_157) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_singletons)));
return res;
}


FUNCODEDEF(fun_158) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynil);
return res;
}


FUNCODEDEF(fun_159) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_classes)));
return res;
}


FUNCODEDEF(fun_160) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_classes)));
return res;
}


FUNCODEDEF(fun_161) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynil);
return res;
}


FUNCODEDEF(fun_162) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_code)));
return res;
}


FUNCODEDEF(fun_163) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_code)));
return res;
}


FUNCODEDEF(fun_164) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(YPfalse);
return res;
}


FUNCODEDEF(fun_165) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_specs)));
return res;
}


FUNCODEDEF(fun_166) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_specs)));
return res;
}


FUNCODEDEF(fun_167) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynil);
return res;
}


FUNCODEDEF(fun_168) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_naryQ)));
return res;
}


FUNCODEDEF(fun_169) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_naryQ)));
return res;
}


FUNCODEDEF(fun_170) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(YPfalse);
return res;
}


FUNCODEDEF(fun_171) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_arity)));
return res;
}


FUNCODEDEF(fun_172) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_arity)));
return res;
}


FUNCODEDEF(fun_173) {
  ARG(x_);
  P res, a1;
loop:
  res = lit_51;
return res;
}


FUNCODEDEF(fun_174) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLmetG),CHKREF(Yfun_env)));
return res;
}


FUNCODEDEF(fun_175) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLmetG),CHKREF(Yfun_env)));
return res;
}


FUNCODEDEF(fun_176) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(YPfalse);
return res;
}


FUNCODEDEF(fun_177) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLgenG),CHKREF(Yfun_mets)));
return res;
}


FUNCODEDEF(fun_178) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLgenG),CHKREF(Yfun_mets)));
return res;
}


FUNCODEDEF(fun_179) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynil);
return res;
}


FUNCODEDEF(fun_180) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLgenG),CHKREF(Yfun_cache)));
return res;
}


FUNCODEDEF(fun_181) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)CALL2(CHKREF(YPslot_offset),CHKREF(YLgenG),CHKREF(Yfun_cache)));
return res;
}


FUNCODEDEF(fun_182) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(YPfalse);
return res;
}


FUNCODEDEF(YPcollect_direct_slots) {
  ARG(traits_);
  P parentF24;
  P res, a1;
loop:
  res = (parentF24=(P)YPhead((P)(P)YPtraits_direct_parents((P)traits_)),(P)YPcat2((P)(P)YPtraits_slots((P)(P)YPobject_traits((P)parentF24)),(P)(P)YPtraits_direct_slots((P)traits_)));
return res;
}


FUNCODEDEF(YPfinalize_slotsX) {
  ARG(owner_);
  P traitsF25;
  P res, a1;
loop:
  res = (traitsF25=(P)YPobject_traits((P)owner_),((P)YPtraits_direct_slots_setter((P)(P)YPrevX((P)(P)YPtraits_direct_slots((P)traitsF25)),(P)traitsF25),
  (P)YPtraits_slots_setter((P)CALL1(CHKREF(YPcollect_direct_slots),traitsF25),(P)traitsF25),
  (P)YPadjust_object_values_size((P)owner_,(P)(P)YPPlen((P)(P)YPtraits_slots((P)traitsF25)),(P)owner_),
  owner_));
return res;
}


P YPpatch_lst(P x_) {
  P res, a1;
loop:
(P)YPhead_setter((P)CHKREF(Ynil),(P)x_);
  res = (P)YPtail_setter((P)CHKREF(Ynil),(P)x_);
return res;
}


P YPstr_dat_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)0);
return res;
}


P YPstr_dat(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)0);
return res;
}


P YPstrX(P len_) {
  P protoF26;
  P res, a1;
loop:
  res = (protoF26=(P)YPobject_of((P)CHKREF(YLstrG),(P)(P)1),((P)YPstr_dat_setter((P)(P)YPPsfab((P)len_,(P)(P)YPcu((P)lit_58)),(P)protoF26),
  protoF26));
return res;
}


P YPstr(P len_) {
  P res, a1;
loop:
  res = (((P)YPbb((P)(P)YPiE((P)len_,(P)(P)0)) != YPfalse)
    ? CHKREF(YPsnul)
    : (P)YPstrX((P)len_));
return res;
}


P YPsb(P x_) {
  P protoF27;
  P res, a1;
loop:
  res = (protoF27=(P)YPobject_of((P)CHKREF(YLstrG),(P)(P)1),((P)YPstr_dat_setter((P)x_,(P)protoF27),
  protoF27));
return res;
}


P YPsu(P x_) {
  P res, a1;
loop:
  res = (P)YPstr_dat((P)x_);
return res;
}


P YPslen(P x_) {
  P res, a1;
loop:
  res = (P)YPPslen((P)(P)YPstr_dat((P)x_));
return res;
}


P YPselt(P x_, P i_) {
  P res, a1, a2;
loop:
  res = (P)YPPselt((P)(P)YPstr_dat((P)x_),(P)i_);
return res;
}


P YPselt_setter(P z_, P x_, P i_) {
  P res, a1, a2, a3;
loop:
  res = (P)YPPselt_setter((P)z_,(P)(P)YPstr_dat((P)x_),(P)i_);
return res;
}


P YPvec_dat_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)0);
return res;
}


P YPvec_dat(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)0);
return res;
}


P YPvecX(P len_) {
  P protoF28;
  P res, a1;
loop:
  res = (protoF28=(P)YPobject_of((P)CHKREF(YLvecG),(P)(P)1),((P)YPvec_dat_setter((P)(P)YPPvfab((P)len_,(P)CHKREF(Ynul)),(P)protoF28),
  protoF28));
return res;
}


P YPvec(P len_) {
  P res, a1;
loop:
  res = (((P)YPbb((P)(P)YPiE((P)len_,(P)(P)0)) != YPfalse)
    ? CHKREF(YPvnul)
    : (P)YPvecX((P)len_));
return res;
}


P YPvb(P x_) {
  P protoF29;
  P res, a1;
loop:
  res = (protoF29=(P)YPobject_of((P)CHKREF(YLvecG),(P)(P)1),((P)YPvec_dat_setter((P)x_,(P)protoF29),
  protoF29));
return res;
}


P YPvu(P x_) {
  P res, a1;
loop:
  res = (P)YPvec_dat((P)x_);
return res;
}


P YPvlen(P x_) {
  P res, a1;
loop:
  res = (P)YPPvlen((P)(P)YPvec_dat((P)x_));
return res;
}


P YPvelt(P x_, P i_) {
  P res, a1, a2;
loop:
  res = (P)YPPvelt((P)(P)YPvec_dat((P)x_),(P)i_);
return res;
}


P YPvelt_setter(P z_, P x_, P i_) {
  P res, a1, a2, a3;
loop:
  res = (P)YPPvelt_setter((P)z_,(P)(P)YPvec_dat((P)x_),(P)i_);
return res;
}


FUNCODEDEF(fun_loop_204) {
  ARG(i_);
  P tmpF33;
  P c2F32;
  P c1F31;
  P tmpF30;
  P res, a1;
loop:
  res = (tmpF30=(P)YPbb((P)(P)YPiE((P)i_,(P)FREEREF(0))),((tmpF30 != YPfalse)
    ? tmpF30
    : (c1F31=(P)YPselt((P)FREEREF(1),(P)i_),(c2F32=(P)YPselt((P)FREEREF(2),(P)i_),(tmpF33=(P)YPbb((P)(P)YPcE((P)c1F31,(P)c2F32)),((tmpF33 != YPfalse)
    ? (a1=(P)YPiA((P)i_,(P)(P)1),i_=a1,PNUL)
    : YPfalse))))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(YPstr_eqQ) {
  ARG(s2_);
  ARG(s1_);
  P loopF36;
  P tmpF35;
  P lenF34;
  P res, a1, a2;
loop:
  res = (lenF34=(P)YPslen((P)s1_),(tmpF35=(P)YPbb((P)(P)YPiE((P)lenF34,(P)(P)YPslen((P)s2_))),((tmpF35 != YPfalse)
    ? (loopF36=FUNSHELL(fun_loop_204, 4),FUNINIT(loopF36, 4,lenF34,s1_,s2_,loopF36),
  CALL1(loopF36,(P)0))
    : YPfalse)));
return res;
}


P YPsym_nam_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)x_,(P)(P)0);
return res;
}


P YPsym_nam(P x_) {
  P res, a1;
loop:
  res = (P)YPslot_elt((P)x_,(P)(P)0);
return res;
}


P YPsym(P sym_nam_) {
  P protoF37;
  P res, a1;
loop:
  res = (protoF37=(P)YPobject_of((P)CHKREF(YLsymG),(P)(P)1),((P)YPslot_elt_setter((P)sym_nam_,(P)protoF37,(P)(P)0),
  protoF37));
return res;
}


FUNCODEDEF(fun_lookup_209) {
  ARG(s_);
  P symF39;
  P symF38;
  P res, a1;
loop:
  res = (((P)YPemptyQ((P)s_) != YPfalse)
    ? (symF38=(P)YPsym((P)FREEREF(0)),(((YPsymbols = (P)YPpair((P)symF38,(P)CHKREF(YPsymbols)))),
  symF38))
    : (symF39=(P)YPhead((P)s_),((CALL2(CHKREF(YPstr_eqQ),(P)YPsym_nam((P)symF39),FREEREF(0)) != YPfalse)
    ? symF39
    : (a1=(P)YPtail((P)s_),s_=a1,PNUL))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(Yfab_sym) {
  ARG(name_);
  P lookupF40;
  P res, a1;
loop:
  res = (lookupF40=FUNSHELL(fun_lookup_209, 2),FUNINIT(lookupF40, 2,name_,lookupF40),
  CALL1(lookupF40,CHKREF(YPsymbols)));
return res;
}


P YPPsym(P raw_str_) {
  P res, a1;
loop:
  res = CALL1(CHKREF(Yfab_sym),(P)YPsb((P)raw_str_));
return res;
}


INLINE P YOhead(P x_) {
  P res, a1;
loop:
  res = (P)YPhead((P)x_);
return res;
}


P YOhead_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPhead_setter((P)z_,(P)x_);
return res;
}


INLINE P YOtail(P x_) {
  P res, a1;
loop:
  res = (P)YPtail((P)x_);
return res;
}


P YOtail_setter(P z_, P x_) {
  P res, a1, a2;
loop:
  res = (P)YPtail_setter((P)z_,(P)x_);
return res;
}


INLINE P YOE(P x_, P y_) {
  P res, a1, a2;
loop:
  res = (P)YPbb((P)(P)YPiE((P)(P)YPiu((P)x_),(P)(P)YPiu((P)y_)));
return res;
}


INLINE P YOL(P x_, P y_) {
  P res, a1, a2;
loop:
  res = (P)YPbb((P)(P)YPiL((P)(P)YPiu((P)x_),(P)(P)YPiu((P)y_)));
return res;
}


INLINE P YOA(P x_, P y_) {
  P res, a1, a2;
loop:
  res = (P)YPib((P)(P)YPiA((P)(P)YPiu((P)x_),(P)(P)YPiu((P)y_)));
return res;
}


INLINE P YOEE(P x_, P y_) {
  P res, a1, a2;
loop:
  res = (P)YPbb((P)(P)YPeqQ((P)x_,(P)y_));
return res;
}


FUNCODEDEF(YOOEE) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPbb((P)(P)YPeqQ((P)x_,(P)y_));
return res;
}


FUNCODEDEF(Ynot) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPbb((P)(P)YPeqQ((P)x_,(P)YPfalse));
return res;
}


P YOemptyQ(P x_) {
  P res, a1;
loop:
  res = (P)YPemptyQ((P)x_);
return res;
}


FUNCODEDEF(YOOemptyQ) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPemptyQ((P)x_);
return res;
}


FUNCODEDEF(YOrevX) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPrevX((P)x_);
return res;
}


P YOlen(P x_) {
  P res, a1;
loop:
  res = (P)YPib((P)(P)YPPlen((P)x_));
return res;
}


FUNCODEDEF(fun_fnd_226) {
  ARG(p_);
  P res, a1;
loop:
  res = (((P)YOemptyQ((P)p_) != YPfalse)
    ? YPtrue
    : ((CALL1(FREEREF(0),(P)YOhead((P)p_)) != YPfalse)
    ? (a1=(P)YOtail((P)p_),p_=a1,PNUL)
    : YPfalse));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(YOallQ) {
  ARG(c_);
  ARG(test_);
  P fndF41;
  P res, a1, a2;
loop:
  res = (fndF41=FUNSHELL(fun_fnd_226, 2),FUNINIT(fndF41, 2,test_,fndF41),
  CALL1(fndF41,c_));
return res;
}


FUNCODEDEF(fun_fnd_228) {
  ARG(py_);
  ARG(px_);
  P res, a1, a2;
loop:
  res = (((P)YOemptyQ((P)px_) != YPfalse)
    ? (P)YOemptyQ((P)py_)
    : (((P)YOemptyQ((P)py_) != YPfalse)
    ? YPfalse
    : ((CALL2(FREEREF(0),(P)YOhead((P)px_),(P)YOhead((P)py_)) != YPfalse)
    ? (a1=(P)YOtail((P)px_),a2=(P)YOtail((P)py_),px_=a1,py_=a2,PNUL)
    : YPfalse)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(YOall2Q) {
  ARG(y_);
  ARG(x_);
  ARG(test_);
  P fndF42;
  P res, a1, a2, a3;
loop:
  res = (fndF42=FUNSHELL(fun_fnd_228, 2),FUNINIT(fndF42, 2,test_,fndF42),
  CALL2(fndF42,x_,y_));
return res;
}


FUNCODEDEF(fun_fnd_230) {
  ARG(x_);
  ARG(count_);
  P res, a1, a2;
loop:
  res = (((P)YOEE((P)x_,(P)Ynil) != YPfalse)
    ? CHKREF(Ynul)
    : (((P)YOE((P)count_,(P)FREEREF(0)) != YPfalse)
    ? (P)YOhead((P)x_)
    : (a1=(P)YOA((P)count_,(P)lit_59),a2=(P)YOtail((P)x_),count_=a1,x_=a2,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(YOelt) {
  ARG(key_);
  ARG(x_);
  P fndF43;
  P res, a1, a2;
loop:
  res = (fndF43=FUNSHELL(fun_fnd_230, 2),FUNINIT(fndF43, 2,key_,fndF43),
  CALL2(fndF43,lit_60,x_));
return res;
}


FUNCODEDEF(fun_loop_232) {
  ARG(x_);
  P res, a1;
loop:
  res = (((P)YOemptyQ((P)CHKREF(Yp)) != YPfalse)
    ? x_
    : ((P)YOhead_setter((P)FREEREF(0),(P)CHKREF(Yp)),
  (a1=(P)YOtail((P)CHKREF(Yp)),x_=a1,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(YOfill) {
  ARG(f_);
  ARG(x_);
  P loopF44;
  P res, a1, a2;
loop:
  res = (loopF44=FUNSHELL(fun_loop_232, 2),FUNINIT(loopF44, 2,f_,loopF44),
  CALL1(loopF44,x_));
return res;
}


FUNCODEDEF(fun_fnd_234) {
  ARG(p_);
  P tmpF45;
  P res, a1;
loop:
  res = (((P)YOemptyQ((P)p_) != YPfalse)
    ? YPfalse
    : (tmpF45=CALL1(FREEREF(0),(P)YOhead((P)p_)),((tmpF45 != YPfalse)
    ? tmpF45
    : (a1=(P)YOtail((P)p_),p_=a1,PNUL))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(YOanyQ) {
  ARG(c_);
  ARG(test_);
  P fndF46;
  P res, a1, a2;
loop:
  res = (fndF46=FUNSHELL(fun_fnd_234, 2),FUNINIT(fndF46, 2,test_,fndF46),
  CALL1(fndF46,c_));
return res;
}


P YOpair(P x_, P y_) {
  P res, a1, a2;
loop:
  res = (P)YPpair((P)x_,(P)y_);
return res;
}


P YOadd(P c_, P e_) {
  P res, a1, a2;
loop:
  res = (P)YPpair((P)e_,(P)c_);
return res;
}


FUNCODEDEF(fun_do_238) {
  ARG(res_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (((P)YOemptyQ((P)x_) != YPfalse)
    ? CALL1(CHKREF(YOrevX),res_)
    : (a1=(P)YOtail((P)x_),a2=(P)YOpair((P)CALL1(FREEREF(0),(P)YOhead((P)x_)),(P)res_),x_=a1,res_=a2,PNUL));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(YOmap) {
  ARG(x_);
  ARG(f_);
  P doF47;
  P res, a1, a2;
loop:
  res = (doF47=FUNSHELL(fun_do_238, 2),FUNINIT(doF47, 2,f_,doF47),
  CALL2(doF47,x_,Ynil));
return res;
}


FUNCODEDEF(fun_do_240) {
  ARG(x_);
  P res, a1;
loop:
  res = (((P)YOemptyQ((P)x_) != YPfalse)
    ? YPfalse
    : (CALL1(FREEREF(0),(P)YOhead((P)x_)),
  (a1=(P)YOtail((P)x_),x_=a1,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(YOdo) {
  ARG(x_);
  ARG(f_);
  P doF48;
  P res, a1, a2;
loop:
  res = (doF48=FUNSHELL(fun_do_240, 2),FUNINIT(doF48, 2,f_,doF48),
  CALL1(doF48,x_));
return res;
}


FUNCODEDEF(fun_in_242) {
  ARG(ss_);
  ARG(ds_);
  P tmpF49;
  P res, a1, a2;
loop:
  res = (((tmpF49=(P)YOemptyQ((P)ds_),((tmpF49 != YPfalse)
    ? tmpF49
    : (P)YOemptyQ((P)ss_))) != YPfalse)
    ? FREEREF(0)
    : ((P)YOhead_setter((P)(P)YOhead((P)ss_),(P)ds_),
  (a1=(P)YOtail((P)ds_),a2=(P)YOtail((P)ss_),ds_=a1,ss_=a2,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(YOalter) {
  ARG(src_);
  ARG(dst_);
  P inF50;
  P res, a1, a2;
loop:
  res = (inF50=FUNSHELL(fun_in_242, 2),FUNINIT(inF50, 2,dst_,inF50),
  CALL2(inF50,dst_,src_));
return res;
}


FUNCODEDEF(fun_fab_244) {
  ARG(res_);
  ARG(i_);
  P res, a1, a2;
loop:
  res = (((P)YOL((P)i_,(P)lit_61) != YPfalse)
    ? res_
    : (a1=(P)YOA((P)i_,(P)lit_62),a2=(P)YOpair((P)CHKREF(Ynul),(P)res_),i_=a1,res_=a2,PNUL));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(YOfab) {
  ARG(s_);
  ARG(x_);
  P fabF51;
  P res, a1, a2;
loop:
  res = (fabF51=FUNSHELL(fun_fab_244, 1),FUNINIT(fabF51, 1,fabF51),
  CALL2(fabF51,s_,Ynil));
return res;
}


FUNCODEDEF(fun_red_246) {
  ARG(c_);
  ARG(res_);
  P res, a1, a2;
loop:
  res = (((P)YOemptyQ((P)c_) != YPfalse)
    ? res_
    : (a1=CALL2(FREEREF(0),res_,(P)YOhead((P)c_)),a2=(P)YOtail((P)c_),res_=a1,c_=a2,PNUL));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(YOreduce) {
  ARG(c_);
  ARG(init_);
  ARG(combine_);
  P redF52;
  P res, a1, a2, a3;
loop:
  res = (redF52=FUNSHELL(fun_red_246, 2),FUNINIT(redF52, 2,combine_,redF52),
  CALL2(redF52,init_,c_));
return res;
}


FUNCODEDEF(YOcat2) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPcat2((P)x_,(P)y_);
return res;
}


FUNCODEDEF(fun_fnd_249) {
  ARG(i_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = (((P)YOemptyQ((P)c_) != YPfalse)
    ? CHKREF(Ynul)
    : ((CALL1(FREEREF(0),(P)YOhead((P)c_)) != YPfalse)
    ? i_
    : (a1=(P)YOtail((P)c_),a2=(P)YOA((P)i_,(P)lit_63),c_=a1,i_=a2,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(YOfind_key) {
  ARG(c_);
  ARG(f_);
  P fndF53;
  P res, a1, a2;
loop:
  res = (fndF53=FUNSHELL(fun_fnd_249, 2),FUNINIT(fndF53, 2,f_,fndF53),
  CALL2(fndF53,c_,lit_64));
return res;
}


FUNCODEDEF(fun_251) {
  ARG(y_);
  P res, a1;
loop:
  res = (P)YOEE((P)FREEREF(0),(P)y_);
return res;
}


FUNCODEDEF(YOmemQ) {
  ARG(x_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CALL1(CHKREF(Ynot),(P)YOEE((P)CALL2(CHKREF(YOfind_key),FUNFAB(fun_251, 1,x_),c_),(P)CHKREF(Ynul)));
return res;
}


FUNCODEDEF(fun_253) {
  ARG(e_);
  ARG(s_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YOmemQ),s_,e_) != YPfalse)
    ? s_
    : (P)YOpair((P)e_,(P)s_));
return res;
}


FUNCODEDEF(YOdel_dups) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL3(CHKREF(YOreduce),fun_253,Ynil,x_);
return res;
}


FUNCODEDEF(YOlst) {
  ARG(objects_);
  P res, a1;
loop:
  res = objects_;
return res;
}


FUNCODEDEF(YOfun_specs) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPgen_specs((P)x_);
return res;
}


FUNCODEDEF(YOfun_naryQ) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPgen_naryQ((P)x_);
return res;
}


FUNCODEDEF(YOfun_arity) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPgen_arity((P)x_);
return res;
}


FUNCODEDEF(YOfun_mets) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPgen_mets((P)x_);
return res;
}


FUNCODEDEF(YOfun_mets_setter) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPgen_mets_setter((P)z_,(P)x_);
return res;
}


FUNCODEDEF(Yfun_spec) {
  ARG(i_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(YOelt),CALL1(CHKREF(YOfun_specs),x_),i_);
return res;
}


FUNCODEDEF(Yfab_gen) {
  ARG(mets_);
  ARG(naryQ_);
  ARG(specs_);
  P res, a1, a2, a3;
loop:
  res = (P)YPgen((P)(P)YPgen_code((P)CHKREF(YPdispatch)),(P)specs_,(P)naryQ_,(P)CALL1(CHKREF(Ylen),specs_),(P)mets_,(P)YPfalse);
return res;
}


FUNCODEDEF(Yfun_same_metQ) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(YOall2Q),CHKREF(YOOEE),CALL1(CHKREF(YOfun_specs),x_),CALL1(CHKREF(YOfun_specs),y_));
return res;
}


FUNCODEDEF(Yfun_congruentQ) {
  ARG(y_);
  ARG(x_);
  P tmpF55;
  P tmpF54;
  P res, a1, a2;
loop:
  res = (tmpF54=(P)YOE((P)CALL1(CHKREF(YOfun_arity),x_),(P)CALL1(CHKREF(YOfun_arity),y_)),((tmpF54 != YPfalse)
    ? (tmpF55=(P)YOEE((P)CALL1(CHKREF(YOfun_naryQ),x_),(P)CALL1(CHKREF(YOfun_naryQ),y_)),((tmpF55 != YPfalse)
    ? CALL3(CHKREF(YOall2Q),CHKREF(YisaQ),CALL1(CHKREF(YOfun_specs),x_),CALL1(CHKREF(YOfun_specs),y_))
    : YPfalse))
    : YPfalse));
return res;
}


FUNCODEDEF(fun_col_265) {
  ARG(gms_);
  ARG(sameQ_);
  ARG(mets_);
  P tmpF58;
  P now_sameQF57;
  P gmF56;
  P res, a1, a2, a3;
loop:
  res = (((P)YOemptyQ((P)gms_) != YPfalse)
    ? (P)YPgen_mets_setter((P)CALL1(CHKREF(YOrevX),((sameQ_ != YPfalse)
    ? mets_
    : (P)YOadd((P)mets_,(P)FREEREF(0)))),(P)FREEREF(1))
    : (gmF56=(P)YOhead((P)gms_),(now_sameQF57=CALL2(CHKREF(Yfun_same_metQ),gmF56,FREEREF(0)),(a1=(P)YOadd((P)mets_,(P)((now_sameQF57 != YPfalse)
    ? FREEREF(0)
    : gmF56)),a2=(tmpF58=now_sameQF57,((tmpF58 != YPfalse)
    ? tmpF58
    : sameQ_)),a3=(P)YOtail((P)gms_),mets_=a1,sameQ_=a2,gms_=a3,PNUL))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(Ygen_add_met) {
  ARG(m_);
  ARG(g_);
  P colF59;
  P res, a1, a2;
loop:
(P)YPfun_cache_setter((P)YPfalse,(P)g_);
  ((CALL1(CHKREF(Ynot),CALL2(CHKREF(Yfun_congruentQ),m_,g_)) != YPfalse)
    ? CALL3(CHKREF(Yerror),lit_65,m_,g_)
    : YPfalse);
  (colF59=FUNSHELL(fun_col_265, 3),FUNINIT(colF59, 3,m_,g_,colF59),
  CALL3(colF59,Ynil,YPfalse,CALL1(CHKREF(YOfun_mets),g_)));
  res = g_;
return res;
}


FUNCODEDEF(fun_find_267) {
  ARG(ps_);
  P oF60;
  P res, a1;
loop:
  res = (((P)YOemptyQ((P)ps_) != YPfalse)
    ? YPfalse
    : (oF60=(P)YOhead((P)ps_),(((P)YOEE((P)oF60,(P)FREEREF(0)) != YPfalse)
    ? YPtrue
    : (a1=(P)YOtail((P)ps_),ps_=a1,PNUL))));
if (res == PNUL) goto loop; else return res;
}


INLINE P YPisaQ(P o1_, P o2_) {
  P findF63;
  P tmpF62;
  P tmpF61;
  P res, a1, a2;
loop:
  res = (tmpF61=(P)YOEE((P)o2_,(P)CHKREF(YLanyG)),((tmpF61 != YPfalse)
    ? tmpF61
    : (tmpF62=(P)YOEE((P)o1_,(P)o2_),((tmpF62 != YPfalse)
    ? tmpF62
    : (findF63=FUNSHELL(fun_find_267, 2),FUNINIT(findF63, 2,o2_,findF63),
  CALL1(findF63,CALL1(CHKREF(Yobject_parents),o1_)))))));
return res;
}


FUNCODEDEF(YisaQ) {
  ARG(o2_);
  ARG(o1_);
  P res, a1, a2;
loop:
  res = (P)YPisaQ((P)o1_,(P)o2_);
return res;
}


FUNCODEDEF(fun_find_270) {
  ARG(ps_);
  P oF64;
  P res, a1;
loop:
  res = (((P)YOemptyQ((P)ps_) != YPfalse)
    ? CALLN(CHKREF(Yerror),5,lit_66,lit_67,FREEREF(0),FREEREF(1),FREEREF(2))
    : (oF64=(P)YOhead((P)ps_),(((P)YOEE((P)oF64,(P)FREEREF(1)) != YPfalse)
    ? YPtrue
    : (((P)YOEE((P)oF64,(P)FREEREF(2)) != YPfalse)
    ? YPfalse
    : (a1=(P)YOtail((P)ps_),ps_=a1,PNUL)))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(YobjectL) {
  ARG(wrt_);
  ARG(o2_);
  ARG(o1_);
  P findF65;
  P res, a1, a2, a3;
loop:
  res = (((P)YOEE((P)wrt_,(P)o1_) != YPfalse)
    ? YPtrue
    : (((P)YOEE((P)wrt_,(P)o2_) != YPfalse)
    ? YPfalse
    : (findF65=FUNSHELL(fun_find_270, 4),FUNINIT(findF65, 4,wrt_,o1_,o2_,findF65),
  CALL1(findF65,CALL1(CHKREF(Yobject_parents),wrt_)))));
return res;
}


FUNCODEDEF(Yorder_specs) {
  ARG(arg_);
  ARG(t2_);
  ARG(t1_);
  P res, a1, a2, a3;
loop:
  res = (((P)YOEE((P)t1_,(P)t2_) != YPfalse)
    ? CALL2(CHKREF(YOtup),lit_68,t1_)
    : ((CALL3(CHKREF(YobjectL),t1_,t2_,arg_) != YPfalse)
    ? CALL2(CHKREF(YOtup),lit_69,t1_)
    : CALL2(CHKREF(YOtup),lit_70,t2_)));
return res;
}


FUNCODEDEF(fun_loop_273) {
  ARG(idx_);
  ARG(state_);
  P tmpF72;
  P tmpF71;
  P idxF70;
  P cmpF69;
  P cmpAtypF68;
  P m2specF67;
  P m1specF66;
  P res, a1, a2;
loop:
  res = (((P)YOE((P)idx_,(P)FREEREF(0)) != YPfalse)
    ? state_
    : (m1specF66=CALL2(CHKREF(Yfun_spec),FREEREF(1),idx_),(m2specF67=CALL2(CHKREF(Yfun_spec),FREEREF(2),idx_),(cmpAtypF68=CALL3(CHKREF(Yorder_specs),m1specF66,m2specF67,CALL2(CHKREF(YOelt),FREEREF(3),idx_)),(cmpF69=CALL2(CHKREF(YOelt),cmpAtypF68,lit_71),(idxF70=(P)YOA((P)idx_,(P)lit_72),(((P)YOEE((P)cmpF69,(P)lit_73) != YPfalse)
    ? (a1=state_,a2=idxF70,state_=a1,idx_=a2,PNUL)
    : (((tmpF71=CALL1(CHKREF(Ynot),(P)YOEE((P)cmpF69,(P)lit_74)),((tmpF71 != YPfalse)
    ? (tmpF72=(P)YOEE((P)state_,(P)lit_75),((tmpF72 != YPfalse)
    ? tmpF72
    : (P)YOEE((P)cmpF69,(P)state_)))
    : YPfalse)) != YPfalse)
    ? (a1=cmpF69,a2=idxF70,state_=a1,idx_=a2,PNUL)
    : lit_76))))))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(Yorder_mets) {
  ARG(args_);
  ARG(m2_);
  ARG(m1_);
  P loopF74;
  P arityF73;
  P res, a1, a2, a3;
loop:
  res = (arityF73=CALL1(CHKREF(YOfun_arity),m1_),(loopF74=FUNSHELL(fun_loop_273, 5),FUNINIT(loopF74, 5,arityF73,m1_,m2_,args_,loopF74),
  CALL2(loopF74,lit_77,lit_78)));
return res;
}


FUNCODEDEF(fun_loop_275) {
  ARG(l_);
  P t1F76;
  P tmpF75;
  P res, a1;
loop:
  res = (tmpF75=(P)YOEE((P)l_,(P)Ynil),((tmpF75 != YPfalse)
    ? tmpF75
    : (t1F76=(P)YOtail((P)l_),((P)YOtail_setter((P)(P)YOtail((P)FREEREF(0)),(P)l_),
  (P)YOtail_setter((P)l_,(P)FREEREF(0)),
  (a1=t1F76,l_=a1,PNUL)))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_make_ambiguous_276) {
  ARG(headed_list_);
  P loopF77;
  P res, a1;
loop:
(loopF77=FUNSHELL(fun_loop_275, 2),FUNINIT(loopF77, 2,FREEREF(0),loopF77),
  CALL1(loopF77,(P)YOtail((P)headed_list_)));
  (P)YOtail_setter((P)Ynil,(P)headed_list_);
  res = (P)YOtail_setter((P)(P)YOpair((P)FREEREF(1),(P)(P)YOtail((P)FREEREF(0))),(P)FREEREF(0));
return res;
}


FUNCODEDEF(fun_loop_277) {
  ARG(l_);
  P res, a1;
loop:
  res = (((P)YOEE((P)l_,(P)Ynil) != YPfalse)
    ? YPtrue
    : (((P)YOEE((P)CALL3(FREEREF(2),FREEREF(0),(P)YOhead((P)l_),FREEREF(1)),(P)lit_79) != YPfalse)
    ? (a1=(P)YOtail((P)l_),l_=a1,PNUL)
    : YPfalse));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_precedes_allQ_278) {
  ARG(l_);
  P loopF78;
  P res, a1;
loop:
  res = (loopF78=FUNSHELL(fun_loop_277, 4),FUNINIT(loopF78, 4,FREEREF(0),FREEREF(1),FREEREF(2),loopF78),
  CALL1(loopF78,l_));
return res;
}


FUNCODEDEF(fun_check_subsequent_ambiguities_279) {
  ARG(oprev_);
  P tmpF79;
  P res, a1;
loop:
  res = (((tmpF79=CALL1(CHKREF(Ynot),CALL1(FREEREF(0),(P)YOtail((P)oprev_))),((tmpF79 != YPfalse)
    ? tmpF79
    : CALL1(CHKREF(Ynot),CALL1(FREEREF(0),(P)YOtail((P)FREEREF(1)))))) != YPfalse)
    ? CALL1(FREEREF(2),oprev_)
    : (P)YOtail_setter((P)(P)YOpair((P)FREEREF(3),(P)(P)YOtail((P)oprev_)),(P)oprev_));
return res;
}


FUNCODEDEF(fun_insert_280) {
  ARG(osub_);
  ARG(oprev_);
  P indicF80;
  P res, a1, a2;
loop:
  res = (((P)YOemptyQ((P)osub_) != YPfalse)
    ? CALL1(FREEREF(0),oprev_)
    : (indicF80=CALL3(FREEREF(3),FREEREF(1),(P)YOhead((P)osub_),FREEREF(2)),(((P)YOEE((P)indicF80,(P)lit_80) != YPfalse)
    ? CALL1(FREEREF(0),oprev_)
    : (((P)YOEE((P)indicF80,(P)lit_81) != YPfalse)
    ? (a1=osub_,a2=(P)YOtail((P)osub_),oprev_=a1,osub_=a2,PNUL)
    : CALL1(FREEREF(5),oprev_)))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_loop_281) {
  ARG(mets_);
  P insertF85;
  P check_subsequent_ambiguitiesF84;
  P precedes_allQF83;
  P make_ambiguousF82;
  P metF81;
  P res, a1;
loop:
  res = ((CALL1(CHKREF(Ynot),(P)YOEE((P)mets_,(P)Ynil)) != YPfalse)
    ? (metF81=(P)YOhead((P)mets_),(make_ambiguousF82=FUNSHELL(fun_make_ambiguous_276, 2),precedes_allQF83=FUNSHELL(fun_precedes_allQ_278, 3),check_subsequent_ambiguitiesF84=FUNSHELL(fun_check_subsequent_ambiguities_279, 4),insertF85=FUNSHELL(fun_insert_280, 6),FUNINIT(make_ambiguousF82, 2,FREEREF(0),metF81),
  FUNINIT(precedes_allQF83, 3,metF81,FREEREF(1),FREEREF(2)),
  FUNINIT(check_subsequent_ambiguitiesF84, 4,precedes_allQF83,FREEREF(0),make_ambiguousF82,metF81),
  FUNINIT(insertF85, 6,check_subsequent_ambiguitiesF84,metF81,FREEREF(1),FREEREF(2),insertF85,make_ambiguousF82),
  (CALL2(insertF85,FREEREF(3),(P)YOtail((P)FREEREF(3))),
  (a1=(P)YOtail((P)mets_),mets_=a1,PNUL))))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(Ysorted_app_mets_1) {
  ARG(order_mets_);
  ARG(args_);
  ARG(mets_);
  P loopF88;
  P aheadF87;
  P oheadF86;
  P res, a1, a2, a3;
loop:
  res = (oheadF86=(P)YOpair((P)YPfalse,(P)Ynil),(aheadF87=(P)YOpair((P)YPfalse,(P)Ynil),((loopF88=FUNSHELL(fun_loop_281, 5),FUNINIT(loopF88, 5,aheadF87,args_,order_mets_,oheadF86,loopF88),
  CALL1(loopF88,mets_)),
  CALL2(CHKREF(YOtup),(P)YOtail((P)oheadF86),(P)YOtail((P)aheadF87)))));
return res;
}


FUNCODEDEF(fun_loop_283) {
  ARG(i_);
  P res, a1;
loop:
  res = (((P)YOE((P)i_,(P)FREEREF(0)) != YPfalse)
    ? YPtrue
    : ((CALL2(CHKREF(YisaQ),CALL2(CHKREF(YOelt),FREEREF(1),i_),CALL2(CHKREF(Yfun_spec),FREEREF(2),i_)) != YPfalse)
    ? (a1=(P)YOA((P)i_,(P)lit_82),i_=a1,PNUL)
    : YPfalse));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(Ymet_appQ) {
  ARG(args_);
  ARG(met_);
  P loopF90;
  P nF89;
  P res, a1, a2;
loop:
  res = (nF89=CALL1(CHKREF(YOfun_arity),met_),(loopF90=FUNSHELL(fun_loop_283, 4),FUNINIT(loopF90, 4,nF89,args_,met_,loopF90),
  CALL1(loopF90,lit_83)));
return res;
}


FUNCODEDEF(fun_col_285) {
  ARG(ms_);
  ARG(ans_);
  P ansF92;
  P mF91;
  P res, a1, a2;
loop:
  res = (((P)YOemptyQ((P)ms_) != YPfalse)
    ? ans_
    : (mF91=(P)YOhead((P)ms_),(ansF92=((CALL2(CHKREF(Ymet_appQ),mF91,FREEREF(0)) != YPfalse)
    ? (P)YOpair((P)mF91,(P)ans_)
    : ans_),(a1=ansF92,a2=(P)YOtail((P)ms_),ans_=a1,ms_=a2,PNUL))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(Ysorted_app_mets) {
  ARG(args_);
  ARG(gf_);
  P considered_metsF94;
  P colF93;
  P res, a1, a2;
loop:
  res = (considered_metsF94=(colF93=FUNSHELL(fun_col_285, 2),FUNINIT(colF93, 2,args_,colF93),
  CALL2(colF93,Ynil,CALL1(CHKREF(YOfun_mets),gf_))),CALL3(CHKREF(Ysorted_app_mets_1),considered_metsF94,args_,CHKREF(Yorder_mets)));
return res;
}


FUNCODEDEF(fun_col_287) {
  ARG(p_);
  ARG(l_);
  ARG(i_);
  P res, a1, a2, a3;
loop:
  res = (((P)YOE((P)i_,(P)FREEREF(0)) != YPfalse)
    ? (((P)YOemptyQ((P)l_) != YPfalse)
    ? CALL1(CHKREF(YOlst),p_)
    : ((P)YOtail_setter((P)CALL1(CHKREF(YOlst),p_),(P)l_),
  FREEREF(1)))
    : (a1=(P)YOA((P)i_,(P)lit_84),a2=p_,a3=(P)YOtail((P)p_),i_=a1,l_=a2,p_=a3,PNUL));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(Yopt_args) {
  ARG(args_);
  ARG(n_);
  P colF95;
  P res, a1, a2;
loop:
  res = (colF95=FUNSHELL(fun_col_287, 3),FUNINIT(colF95, 3,n_,args_,colF95),
  CALL3(colF95,lit_85,Ynil,args_));
return res;
}


FUNCODEDEF(YOgen_cache_singletons) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPgen_cache_singletons((P)x_);
return res;
}


FUNCODEDEF(YOgen_cache_singletons_setter) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPgen_cache_singletons_setter((P)z_,(P)x_);
return res;
}


FUNCODEDEF(YOgen_cache_classes) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPgen_cache_classes((P)x_);
return res;
}


FUNCODEDEF(YOgen_cache_classes_setter) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPgen_cache_classes_setter((P)z_,(P)x_);
return res;
}


FUNCODEDEF(fun_loop_293) {
  ARG(assocs_);
  P vF98;
  P kF97;
  P valF96;
  P res, a1;
loop:
  res = (((P)YOemptyQ((P)assocs_) != YPfalse)
    ? (valF96=CALLN(CHKREF(Ygen_lookup_miss_1),7,FREEREF(0),YPfalse,FREEREF(1),(P)YOA((P)FREEREF(2),(P)lit_86),FREEREF(3),FREEREF(4),FREEREF(5)),CALL2(FREEREF(9),(P)YOpair((P)FREEREF(6),(P)(P)YOpair((P)valF96,(P)CALL1(FREEREF(8),FREEREF(7)))),FREEREF(7)))
    : (kF97=(P)YOhead((P)assocs_),(vF98=(P)YOhead((P)(P)YOtail((P)assocs_)),(((P)YOEE((P)kF97,(P)FREEREF(6)) != YPfalse)
    ? CALLN(CHKREF(Ygen_lookup_miss_1),7,FREEREF(0),vF98,FREEREF(1),(P)YOA((P)FREEREF(2),(P)lit_87),FREEREF(3),FREEREF(4),FREEREF(5))
    : (a1=(P)YOtail((P)(P)YOtail((P)assocs_)),assocs_=a1,PNUL)))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(Ygen_lookup_miss_1_using) {
  ARG(specs_);
  ARG(args_);
  ARG(n_);
  ARG(i_);
  ARG(met_);
  ARG(cache_);
  ARG(gen_);
  ARG(all_assocs_setter_);
  ARG(all_assocs_);
  ARG(key_);
  P loopF101;
  P cacheF100;
  P tmpF99;
  P res, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
loop:
  res = (cacheF100=(tmpF99=cache_,((tmpF99 != YPfalse)
    ? tmpF99
    : (P)YPgen_cache((P)CHKREF(Ynil),(P)CHKREF(Ynil)))),((loopF101=FUNSHELL(fun_loop_293, 11),FUNINIT(loopF101, 11,gen_,met_,i_,n_,args_,specs_,key_,cacheF100,all_assocs_,all_assocs_setter_,loopF101),
  CALL1(loopF101,CALL1(all_assocs_,cacheF100))),
  cacheF100));
return res;
}


FUNCODEDEF(Ysingleton_specQ) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ynot),(P)YOEE((P)(P)YPtraits_owner((P)(P)YPtraits_of((P)x_)),(P)x_));
return res;
}


FUNCODEDEF(Ymethod_accessor_offset) {
  ARG(args_);
  ARG(met_);
  ARG(gen_);
  P tmpF106;
  P nF105;
  P slotQF104;
  P tmpF103;
  P slotF102;
  P res, a1, a2, a3;
loop:
  res = (slotF102=(P)YPmet_env((P)met_),(slotQF104=(tmpF103=slotF102,((tmpF103 != YPfalse)
    ? (P)YOEE((P)(P)YPtraits_of((P)slotF102),(P)CHKREF(YLslotG_traits))
    : YPfalse)),(nF105=(P)YOlen((P)args_),(tmpF106=slotQF104,((tmpF106 != YPfalse)
    ? (((P)YOE((P)nF105,(P)lit_88) != YPfalse)
    ? CALL2(CHKREF(Yslot_offset),(P)YPhead((P)args_),gen_)
    : CALL2(CHKREF(Yslot_offset),(P)YPhead((P)(P)YPtail((P)args_)),(P)YPslot_getter((P)slotF102)))
    : YPfalse)))));
return res;
}


FUNCODEDEF(Ygen_lookup_miss_1) {
  ARG(specs_);
  ARG(args_);
  ARG(n_);
  ARG(i_);
  ARG(met_);
  ARG(cache_);
  ARG(gen_);
  P specF109;
  P tmpF108;
  P offsetF107;
  P res, a1, a2, a3, a4, a5, a6, a7;
loop:
  res = (((P)YOE((P)i_,(P)n_) != YPfalse)
    ? (offsetF107=CALL3(CHKREF(Ymethod_accessor_offset),gen_,met_,args_),(tmpF108=offsetF107,((tmpF108 != YPfalse)
    ? tmpF108
    : met_)))
    : (specF109=CALL2(CHKREF(YOelt),specs_,i_),((CALL1(CHKREF(Ysingleton_specQ),specF109) != YPfalse)
    ? CALLN(CHKREF(Ygen_lookup_miss_1_using),10,specF109,CHKREF(YOgen_cache_singletons),CHKREF(YOgen_cache_singletons_setter),gen_,cache_,met_,i_,n_,args_,specs_)
    : CALLN(CHKREF(Ygen_lookup_miss_1_using),10,(P)YPtraits_of((P)CALL2(CHKREF(YOelt),args_,i_)),CHKREF(YOgen_cache_classes),CHKREF(YOgen_cache_classes_setter),gen_,cache_,met_,i_,n_,args_,specs_))));
return res;
}


INLINE P Ygen_lookup(P gen_, P args_) {
  P cF111;
  P nF110;
  P res, a1, a2;
loop:
  res = (nF110=(P)YPgen_arity((P)gen_),(cF111=(P)YPfun_cache((P)gen_),(P)Ygen_lookup_1((P)gen_,(P)cF111,(P)lit_89,(P)nF110,(P)args_,(P)args_)));
return res;
}


INLINE P Ygen_lookup_1_using(P key_, P assocs_, P missableQ_, P gen_, P cache_, P i_, P n_, P args_, P all_args_) {
  P vF113;
  P kF112;
  P res, a1, a2, a3, a4, a5, a6, a7, a8, a9;
loop:
  res = (((P)YOemptyQ((P)assocs_) != YPfalse)
    ? ((missableQ_ != YPfalse)
    ? CHKREF(YDmissed_dispatch)
    : ((P)YPfun_cache_setter((P)CALL2(CHKREF(Ygen_lookup_miss),gen_,all_args_),(P)gen_),
  (P)Ygen_lookup((P)gen_,(P)all_args_)))
    : (kF112=(P)YPhead((P)assocs_),(vF113=(P)YPhead((P)(P)YPtail((P)assocs_)),(((P)YOEE((P)kF112,(P)key_) != YPfalse)
    ? (P)Ygen_lookup_1((P)gen_,(P)vF113,(P)(P)YOA((P)i_,(P)lit_90),(P)n_,(P)(P)YPtail((P)args_),(P)all_args_)
    : (a1=key_,a2=(P)YPtail((P)(P)YPtail((P)assocs_)),a3=missableQ_,a4=gen_,a5=cache_,a6=i_,a7=n_,a8=args_,a9=all_args_,key_=a1,assocs_=a2,missableQ_=a3,gen_=a4,cache_=a5,i_=a6,n_=a7,args_=a8,all_args_=a9,PNUL)))));
if (res == PNUL) goto loop; else return res;
}


INLINE P Yslot_value_at(P object_, P offset_) {
  P slotsF115;
  P valF114;
  P res, a1, a2;
loop:
  res = (valF114=(P)YPslot_elt((P)object_,(P)(P)YPiu((P)offset_)),(((P)YOEE((P)valF114,(P)CHKREF(Ynul_slot)) != YPfalse)
    ? (slotsF115=CALL1(CHKREF(Yobject_slots),object_),(P)YPslot_elt_setter((P)CALL1((P)YPslot_init((P)CALL2(CHKREF(YOelt),slotsF115,offset_)),object_),(P)object_,(P)(P)YPiu((P)offset_)))
    : valF114));
return res;
}


INLINE P Yslot_value_at_setter(P z_, P object_, P offset_) {
  P res, a1, a2, a3;
loop:
  res = (P)YPslot_elt_setter((P)z_,(P)object_,(P)(P)YPiu((P)offset_));
return res;
}


P Ygen_lookup_1(P gen_, P cache_, P i_, P n_, P args_, P all_args_) {
  P valF117;
  P argF116;
  P res, a1, a2, a3, a4, a5, a6;
loop:
  res = ((cache_ != YPfalse)
    ? (((P)YOE((P)i_,(P)n_) != YPfalse)
    ? (((P)YOEE((P)(P)YPtraits_of((P)cache_),(P)CHKREF(YLintG_traits)) != YPfalse)
    ? (((P)YOE((P)n_,(P)lit_91) != YPfalse)
    ? (P)Yslot_value_at((P)(P)YPhead((P)all_args_),(P)cache_)
    : (P)Yslot_value_at_setter((P)(P)YPhead((P)all_args_),(P)(P)YPhead((P)(P)YPtail((P)all_args_)),(P)cache_))
    : (P)YPPmep_apply((P)cache_,(P)all_args_))
    : (argF116=(P)YPhead((P)args_),(valF117=(P)Ygen_lookup_1_using((P)argF116,(P)(P)YPgen_cache_singletons((P)cache_),(P)YPtrue,(P)gen_,(P)cache_,(P)i_,(P)n_,(P)args_,(P)all_args_),(((P)YOEE((P)valF117,(P)CHKREF(YDmissed_dispatch)) != YPfalse)
    ? (P)Ygen_lookup_1_using((P)(P)YPtraits_of((P)argF116),(P)(P)YPgen_cache_classes((P)cache_),(P)YPfalse,(P)gen_,(P)cache_,(P)i_,(P)n_,(P)args_,(P)all_args_)
    : valF117))))
    : ((P)YPfun_cache_setter((P)CALL2(CHKREF(Ygen_lookup_miss),gen_,all_args_),(P)gen_),
  (P)Ygen_lookup((P)gen_,(P)all_args_)));
return res;
}


FUNCODEDEF(Ychoose_method) {
  ARG(args_);
  ARG(gen_);
  P ambiguous_metsF120;
  P sorted_metsF119;
  P ord_amb_metsF118;
  P res, a1, a2;
loop:
  res = (ord_amb_metsF118=CALL2(CHKREF(Ysorted_app_mets),gen_,args_),(sorted_metsF119=CALL2(CHKREF(YOelt),ord_amb_metsF118,lit_92),(ambiguous_metsF120=CALL2(CHKREF(YOelt),ord_amb_metsF118,lit_93),(((P)YOL((P)lit_94,(P)(P)YOlen((P)ambiguous_metsF120)) != YPfalse)
    ? CALL3(CHKREF(Yerror),lit_95,gen_,args_)
    : (((P)YOemptyQ((P)sorted_metsF119) != YPfalse)
    ? CALL3(CHKREF(Yerror),lit_96,gen_,args_)
    : (P)YOhead((P)sorted_metsF119))))));
return res;
}


FUNCODEDEF(YmetL) {
  ARG(m2_);
  ARG(m1_);
  P res, a1, a2;
loop:
  res = (((P)YOEE((P)m1_,(P)m2_) != YPfalse)
    ? YPfalse
    : CALL3(CHKREF(YOall2Q),CHKREF(YisaQ),CALL1(CHKREF(YOfun_specs),m1_),CALL1(CHKREF(YOfun_specs),m2_)));
return res;
}


FUNCODEDEF(Ymet_has_singleton_specsQ) {
  ARG(m_);
  P res, a1;
loop:
  res = CALL2(CHKREF(YOanyQ),CHKREF(Ysingleton_specQ),CALL1(CHKREF(YOfun_specs),m_));
return res;
}


FUNCODEDEF(fun_loop_306) {
  ARG(mets_);
  ARG(res_);
  P singleton_appQF123;
  P tmpF122;
  P mF121;
  P res, a1, a2;
loop:
  res = (((P)YOemptyQ((P)mets_) != YPfalse)
    ? res_
    : (mF121=(P)YOhead((P)mets_),(singleton_appQF123=(tmpF122=CALL1(CHKREF(Ymet_has_singleton_specsQ),mF121),((tmpF122 != YPfalse)
    ? CALL2(CHKREF(YmetL),mF121,FREEREF(0))
    : YPfalse)),(a1=((singleton_appQF123 != YPfalse)
    ? (P)YOpair((P)mF121,(P)res_)
    : res_),a2=(P)YOtail((P)mets_),res_=a1,mets_=a2,PNUL))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(Yfind_app_singleton_mets) {
  ARG(met_);
  ARG(gen_);
  P loopF124;
  P res, a1, a2;
loop:
  res = (loopF124=FUNSHELL(fun_loop_306, 2),FUNINIT(loopF124, 2,met_,loopF124),
  CALL2(loopF124,Ynil,CALL1(CHKREF(YOfun_mets),gen_)));
return res;
}


FUNCODEDEF(fun_308) {
  ARG(m_);
  P res, a1;
loop:
  res = CALLN(CHKREF(Ygen_lookup_miss_1),7,FREEREF(0),FREEREF(1),m_,lit_98,FREEREF(2),FREEREF(3),CALL1(CHKREF(YOfun_specs),m_));
return res;
}


FUNCODEDEF(Ygen_lookup_miss) {
  ARG(args_);
  ARG(gen_);
  P app_singleton_metsF129;
  P cacheF128;
  P nF127;
  P specsF126;
  P metF125;
  P res, a1, a2;
loop:
  res = (metF125=CALL2(CHKREF(Ychoose_method),gen_,args_),(specsF126=CALL1(CHKREF(YOfun_specs),metF125),(nF127=CALL1(CHKREF(YOfun_arity),gen_),(cacheF128=CALLN(CHKREF(Ygen_lookup_miss_1),7,gen_,(P)YPfun_cache((P)gen_),metF125,lit_97,nF127,args_,specsF126),(app_singleton_metsF129=CALL2(CHKREF(Yfind_app_singleton_mets),gen_,metF125),(CALL2(CHKREF(YOdo),FUNFAB(fun_308, 4,gen_,cacheF128,nF127,args_),app_singleton_metsF129),
  cacheF128))))));
return res;
}


FUNCODEDEF(YPdispatch) {
  ARG(args_);
  P res, a1;
loop:
  res = (P)Ygen_lookup((P)(P)YPfun_reg(),(P)args_);
return res;
}


FUNCODEDEF(fun_311) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(YLanyG);
return res;
}


FUNCODEDEF(Ygen_from_met) {
  ARG(x_);
  P specsF130;
  P res, a1;
loop:
  res = (specsF130=CALL2(CHKREF(YOmap),fun_311,CALL1(CHKREF(YOfun_specs),x_)),(P)YPgen((P)(P)YPgen_code((P)CHKREF(YPdispatch)),(P)specsF130,(P)CALL1(CHKREF(YOfun_naryQ),x_),(P)(P)YOlen((P)specsF130),(P)Ynil,(P)YPfalse));
return res;
}


FUNCODEDEF(YPdefine_method) {
  ARG(met_);
  ARG(gen_);
  P genF132;
  P tmpF131;
  P res, a1, a2;
loop:
  res = (genF132=(tmpF131=gen_,((tmpF131 != YPfalse)
    ? tmpF131
    : CALL1(CHKREF(Ygen_from_met),met_))),(CALL2(CHKREF(Ygen_add_met),genF132,met_),
  genF132));
return res;
}


FUNCODEDEF(fun_loop_314) {
  ARG(gens_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(Ynot),(P)YOemptyQ((P)gens_)) != YPfalse)
    ? ((P)YPgen_code_setter((P)(P)YPgen_code((P)CHKREF(YPdispatch)),(P)(P)YOhead((P)gens_)),
  (a1=(P)YOtail((P)gens_),gens_=a1,PNUL))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(YPpatch_early_generics) {
  P loopF133;
  P res;
loop:
(P)YPgen_code_setter((P)CHKREF(YPdispatch),(P)CHKREF(YLgenG));
  (loopF133=FUNSHELL(fun_loop_314, 1),FUNINIT(loopF133, 1,loopF133),
  CALL1(loopF133,CHKREF(YTearly_genericsT)));
  res = ((YTearly_genericsT = Ynil));
return res;
}


FUNCODEDEF(Yapply) {
  ARG(args_);
  ARG(proc_);
  P res, a1, a2;
loop:
  res = (P)YPPapply((P)proc_,(P)args_);
return res;
}


FUNCODEDEF(fun_p_in_and_unconstrained_inQ_317) {
  ARG(l_);
  P res, a1;
loop:
  res = (P)YOEE((P)(P)YOhead((P)l_),(P)FREEREF(0));
return res;
}


FUNCODEDEF(fun_p_unconstrained_inQ_318) {
  ARG(l_);
  P tmpF134;
  P res, a1;
loop:
  res = (tmpF134=(P)YOEE((P)(P)YOhead((P)l_),(P)FREEREF(0)),((tmpF134 != YPfalse)
    ? tmpF134
    : CALL1(CHKREF(Ynot),CALL2(CHKREF(YOmemQ),(P)YOtail((P)l_),FREEREF(0)))));
return res;
}


FUNCODEDEF(fun_unconstrained_proto_319) {
  ARG(p_);
  P tmpF138;
  P tmpF137;
  P p_unconstrained_inQF136;
  P p_in_and_unconstrained_inQF135;
  P res, a1;
loop:
  res = (p_in_and_unconstrained_inQF135=FUNSHELL(fun_p_in_and_unconstrained_inQ_317, 1),p_unconstrained_inQF136=FUNSHELL(fun_p_unconstrained_inQ_318, 1),FUNINIT(p_in_and_unconstrained_inQF135, 1,p_),
  FUNINIT(p_unconstrained_inQF136, 1,p_),
  (tmpF137=CALL2(CHKREF(YOanyQ),p_in_and_unconstrained_inQF135,FREEREF(0)),((tmpF137 != YPfalse)
    ? (tmpF138=CALL2(CHKREF(YOallQ),p_unconstrained_inQF136,FREEREF(0)),((tmpF138 != YPfalse)
    ? p_
    : YPfalse))
    : YPfalse)));
return res;
}


FUNCODEDEF(fun_unconstrained_object_in_parents_320) {
  ARG(o_);
  P res, a1;
loop:
  res = CALL2(CHKREF(YOanyQ),FREEREF(0),CALL1(CHKREF(Yobject_direct_parents),o_));
return res;
}


FUNCODEDEF(fun_remove_next_321) {
  ARG(l_);
  P res, a1;
loop:
  res = (((P)YOEE((P)(P)YOhead((P)l_),(P)FREEREF(0)) != YPfalse)
    ? (P)YOtail((P)l_)
    : l_);
return res;
}


FUNCODEDEF(fun_merge_lists_322) {
  ARG(remaining_lists_);
  ARG(partial_cpl_);
  P remove_nextF142;
  P nextF141;
  P unconstrained_object_in_parentsF140;
  P unconstrained_protoF139;
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YOallQ),CHKREF(YOOemptyQ),remaining_lists_) != YPfalse)
    ? CALL1(CHKREF(YOrevX),partial_cpl_)
    : (unconstrained_protoF139=FUNSHELL(fun_unconstrained_proto_319, 1),unconstrained_object_in_parentsF140=FUNSHELL(fun_unconstrained_object_in_parents_320, 1),FUNINIT(unconstrained_protoF139, 1,remaining_lists_),
  FUNINIT(unconstrained_object_in_parentsF140, 1,unconstrained_protoF139),
  (nextF141=CALL2(CHKREF(YOanyQ),unconstrained_object_in_parentsF140,partial_cpl_),((nextF141 != YPfalse)
    ? (remove_nextF142=FUNSHELL(fun_remove_next_321, 1),FUNINIT(remove_nextF142, 1,nextF141),
  (a1=(P)YOpair((P)nextF141,(P)partial_cpl_),a2=CALL2(CHKREF(YOmap),remove_nextF142,remaining_lists_),partial_cpl_=a1,remaining_lists_=a2,PNUL))
    : CALL1(CHKREF(Yerror),lit_99)))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(Ytraits_ordered_parents) {
  ARG(o_);
  P tmpF146;
  P tmpF145;
  P parentsF144;
  P merge_listsF143;
  P res, a1;
loop:
  res = (merge_listsF143=FUNSHELL(fun_merge_lists_322, 1),FUNINIT(merge_listsF143, 1,merge_listsF143),
  (parentsF144=(P)YPtraits_direct_parents((P)o_),(((tmpF145=(P)YOemptyQ((P)parentsF144),((tmpF145 != YPfalse)
    ? tmpF145
    : (tmpF146=(P)YOE((P)(P)YOlen((P)parentsF144),(P)lit_100),((tmpF146 != YPfalse)
    ? (P)YOEE((P)CALL2(CHKREF(YOelt),parentsF144,lit_101),(P)(P)YPtraits_owner((P)o_))
    : YPfalse)))) != YPfalse)
    ? parentsF144
    : CALL2(merge_listsF143,CALL1(CHKREF(YOlst),(P)YPtraits_owner((P)o_)),(P)YOadd((P)CALL2(CHKREF(YOmap),CHKREF(Yobject_parents),parentsF144),(P)parentsF144)))));
return res;
}


FUNCODEDEF(Ytraits_ordered_slots) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL1(CHKREF(YOdel_dups),CALL3(CHKREF(YOreduce),CHKREF(YOcat2),Ynil,CALL2(CHKREF(YOmap),CHKREF(Yobject_direct_slots),(P)YPtraits_parents((P)x_))));
return res;
}


FUNCODEDEF(Ymake_traits) {
  ARG(owner_);
  ARG(slots_);
  ARG(parents_);
  P xF147;
  P res, a1, a2, a3;
loop:
  res = (xF147=(P)YPtraits((P)owner_,(P)parents_,(P)slots_,(P)Ynil,(P)Ynil),((P)YPobject_traits_setter((P)xF147,(P)owner_),
  (((P)YOemptyQ((P)(P)YPtraits_direct_parents((P)xF147)) != YPfalse)
    ? (P)YPtraits_direct_parents_setter((P)CALL1(CHKREF(YOlst),(P)YPtraits_owner((P)xF147)),(P)xF147)
    : YPfalse),
  (P)YPtraits_parents_setter((P)CALL1(CHKREF(Ytraits_ordered_parents),xF147),(P)xF147),
  (P)YPtraits_slots_setter((P)CALL1(CHKREF(Ytraits_ordered_slots),xF147),(P)xF147),
  xF147));
return res;
}


FUNCODEDEF(Yobject_direct_slots) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPtraits_direct_slots((P)(P)YPtraits_of((P)x_));
return res;
}


FUNCODEDEF(Yobject_direct_parents) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPtraits_direct_parents((P)(P)YPtraits_of((P)x_));
return res;
}


FUNCODEDEF(Yobject_slots) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPtraits_slots((P)(P)YPtraits_of((P)x_));
return res;
}


FUNCODEDEF(Yobject_parents) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPtraits_parents((P)(P)YPtraits_of((P)x_));
return res;
}


FUNCODEDEF(fun_loop_330) {
  ARG(slots_);
  ARG(i_);
  P res, a1, a2;
loop:
  res = (((P)YOemptyQ((P)slots_) != YPfalse)
    ? lit_102
    : (((P)YOEE((P)(P)YPslot_getter((P)(P)YOhead((P)slots_)),(P)FREEREF(0)) != YPfalse)
    ? i_
    : (a1=(P)YOA((P)i_,(P)lit_103),a2=(P)YOtail((P)slots_),i_=a1,slots_=a2,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(Yslot_offset) {
  ARG(getter_);
  ARG(object_);
  P loopF148;
  P res, a1, a2;
loop:
  res = (loopF148=FUNSHELL(fun_loop_330, 2),FUNINIT(loopF148, 2,getter_,loopF148),
  CALL2(loopF148,lit_104,CALL1(CHKREF(Yobject_slots),object_)));
return res;
}


FUNCODEDEF(Yslot_value) {
  ARG(getter_);
  ARG(object_);
  P offsetF149;
  P res, a1, a2;
loop:
  res = (offsetF149=CALL2(CHKREF(Yslot_offset),object_,getter_),((offsetF149 != YPfalse)
    ? (P)Yslot_value_at((P)object_,(P)offsetF149)
    : CALL3(CHKREF(Yerror),lit_105,getter_,object_)));
return res;
}


FUNCODEDEF(Yslot_value_setter) {
  ARG(getter_);
  ARG(object_);
  ARG(z_);
  P offsetF150;
  P res, a1, a2, a3;
loop:
  res = (offsetF150=CALL2(CHKREF(Yslot_offset),object_,getter_),((offsetF150 != YPfalse)
    ? (P)Yslot_value_at_setter((P)z_,(P)object_,(P)offsetF150)
    : CALL3(CHKREF(Yerror),lit_106,getter_,object_)));
return res;
}


FUNCODEDEF(Yensure_traits) {
  ARG(x_);
  P res, a1;
loop:
((CALL1(CHKREF(Ynot),(P)YOEE((P)(P)YPtraits_owner((P)(P)YPobject_traits((P)x_)),(P)x_)) != YPfalse)
    ? (P)YPobject_traits_setter((P)CALL3(CHKREF(Ymake_traits),CALL1(CHKREF(YOlst),(P)YPtraits_owner((P)(P)YPobject_traits((P)x_))),(P)YPtraits_direct_slots((P)(P)YPobject_traits((P)x_)),x_),(P)x_)
    : YPfalse);
  res = x_;
return res;
}


FUNCODEDEF(fun_loop_335) {
  ARG(vals_);
  ARG(getters_);
  P tmpF151;
  P res, a1, a2;
loop:
  res = ((CALL1(CHKREF(Ynot),(tmpF151=(P)YOEE((P)getters_,(P)Ynil),((tmpF151 != YPfalse)
    ? tmpF151
    : (P)YOEE((P)vals_,(P)Ynil)))) != YPfalse)
    ? (CALL3(CHKREF(Yslot_value_setter),(P)YOhead((P)vals_),FREEREF(0),(P)YOhead((P)getters_)),
  (a1=(P)YOtail((P)getters_),a2=(P)YOtail((P)vals_),getters_=a1,vals_=a2,PNUL))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(YPisa) {
  ARG(vals_);
  ARG(getters_);
  ARG(parents_);
  P loopF154;
  P traitsF153;
  P objectF152;
  P res, a1, a2, a3;
loop:
  res = (objectF152=(P)YPmake_object(),(traitsF153=(((P)YOE((P)(P)YOlen((P)parents_),(P)lit_107) != YPfalse)
    ? (P)YPobject_traits((P)CALL1(CHKREF(Yensure_traits),CALL2(CHKREF(YOelt),parents_,lit_108)))
    : CALL3(CHKREF(Ymake_traits),CALL2(CHKREF(YOmap),CHKREF(Yensure_traits),parents_),Ynil,objectF152)),((P)YPobject_traits_setter((P)traitsF153,(P)objectF152),
  (P)YPinstall_object_values((P)objectF152,(P)(P)YPPlen((P)CALL1(CHKREF(Yobject_slots),objectF152))),
  (loopF154=FUNSHELL(fun_loop_335, 2),FUNINIT(loopF154, 2,objectF152,loopF154),
  CALL2(loopF154,getters_,vals_)),
  objectF152)));
return res;
}


FUNCODEDEF(fun_loop_337) {
  ARG(mets_);
  P metF155;
  P res, a1;
loop:
  res = (((P)YOemptyQ((P)mets_) != YPfalse)
    ? CALL1(CHKREF(Yerror),lit_109)
    : (metF155=(P)YOhead((P)mets_),(((P)YOEE((P)CALL2(CHKREF(Yfun_spec),metF155,lit_110),(P)FREEREF(0)) != YPfalse)
    ? metF155
    : (a1=(P)YOtail((P)mets_),mets_=a1,PNUL))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(Yfind_getter) {
  ARG(getter_);
  ARG(owner_);
  P loopF156;
  P res, a1, a2;
loop:
  res = (loopF156=FUNSHELL(fun_loop_337, 2),FUNINIT(loopF156, 2,owner_,loopF156),
  CALL1(loopF156,CALL1(CHKREF(YOfun_mets),getter_)));
return res;
}


FUNCODEDEF(fun_loop_339) {
  ARG(mets_);
  P tmpF158;
  P metF157;
  P res, a1;
loop:
  res = (((P)YOemptyQ((P)mets_) != YPfalse)
    ? CALL1(CHKREF(Yerror),lit_111)
    : (metF157=(P)YOhead((P)mets_),(((tmpF158=(P)YOEE((P)CALL2(CHKREF(Yfun_spec),metF157,lit_112),(P)FREEREF(0)),((tmpF158 != YPfalse)
    ? (P)YOEE((P)CALL2(CHKREF(Yfun_spec),metF157,lit_113),(P)FREEREF(1))
    : YPfalse)) != YPfalse)
    ? metF157
    : (a1=(P)YOtail((P)mets_),mets_=a1,PNUL))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(Yfind_setter) {
  ARG(zetter_);
  ARG(type_);
  ARG(owner_);
  P loopF159;
  P res, a1, a2, a3;
loop:
  res = (loopF159=FUNSHELL(fun_loop_339, 3),FUNINIT(loopF159, 3,owner_,type_,loopF159),
  CALL1(loopF159,CALL1(CHKREF(YOfun_mets),zetter_)));
return res;
}


FUNCODEDEF(YPslot) {
  ARG(init_);
  ARG(type_);
  ARG(setter_);
  ARG(getter_);
  ARG(owner_);
  P setter_metF163;
  P getter_metF162;
  P slotF161;
  P traitsF160;
  P res, a1, a2, a3, a4, a5;
loop:
CALL1(CHKREF(Yensure_traits),owner_);
  res = (traitsF160=(P)YPobject_traits((P)owner_),(slotF161=CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLslotG),(P)Ynil),(P)YPpair((P)CHKREF(Yslot_owner),(P)(P)YPpair((P)CHKREF(Yslot_getter),(P)(P)YPpair((P)CHKREF(Yslot_setter),(P)(P)YPpair((P)CHKREF(Yslot_type),(P)(P)YPpair((P)CHKREF(Yslot_init),(P)Ynil))))),(P)YPpair((P)owner_,(P)(P)YPpair((P)getter_,(P)(P)YPpair((P)setter_,(P)(P)YPpair((P)type_,(P)(P)YPpair((P)init_,(P)Ynil)))))),(getter_metF162=CALL2(CHKREF(Yfind_getter),owner_,getter_),(setter_metF163=CALL3(CHKREF(Yfind_setter),owner_,type_,setter_),((P)YPmet_env_setter((P)slotF161,(P)getter_metF162),
  (P)YPmet_env_setter((P)slotF161,(P)setter_metF163),
  (P)YPtraits_direct_slots_setter((P)CALL2(CHKREF(YOcat2),(P)YPtraits_direct_slots((P)traitsF160),CALL1(CHKREF(YOlst),slotF161)),(P)traitsF160),
  (P)YPtraits_slots_setter((P)CALL1(CHKREF(Ytraits_ordered_slots),traitsF160),(P)traitsF160),
  (P)YPadjust_object_values_size((P)owner_,(P)(P)YPPlen((P)CALL1(CHKREF(Yobject_slots),owner_)),(P)owner_),
  slotF161)))));
return res;
}


FUNCODEDEF(fun_342) {
  ARG(e_);
  ARG(r_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Ycat),r_,CALL1(CHKREF(Yto_str),e_));
return res;
}


FUNCODEDEF(fun_make_sym_343) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yas),CHKREF(YLsymG),CALL3(CHKREF(Yreduce),fun_342,lit_114,x_));
return res;
}


FUNCODEDEF(fun_gensym_344) {
  P res;
loop:
  res = CALL2(CHKREF(Ymake_sym),lit_116,((YTgensym_counterT = CALL2(CHKREF(YA),CHKREF(YTgensym_counterT),lit_117))));
return res;
}


FUNCODEDEF(fun_make_setter_name_345) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ymake_sym),x_,lit_118);
return res;
}


FUNCODEDEF(fun_var_name_346) {
  ARG(x_);
  P res, a1;
loop:
  res = x_;
return res;
}


FUNCODEDEF(fun_var_name_347) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yelt),x_,lit_119);
return res;
}


FUNCODEDEF(fun_var_type_348) {
  ARG(x_);
  P res, a1;
loop:
  res = lit_120;
return res;
}


FUNCODEDEF(fun_var_type_349) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yelt),x_,lit_121);
return res;
}


FUNCODEDEF(fun_nyi_error_350) {
  P res;
loop:
  res = CALL0(CHKREF(Ynyi));
return res;
}


FUNCODEDEF(fun_to_str_351) {
  ARG(x_);
  P nameF164;
  P res, a1;
loop:
  res = (nameF164=(P)YPbinding_name((P)x_),((nameF164 != YPfalse)
    ? CALL2(CHKREF(Ycat),lit_122,CALL1(CHKREF(Yto_str),nameF164))
    : CALL3(CHKREF(Ycat),lit_123,CALL1(CHKREF(Yto_str),CALL1(CHKREF(Yobject_parents),x_)),lit_124)));
return res;
}


FUNCODEDEF(fun_to_str_352) {
  ARG(x_);
  P res, a1;
loop:
  res = lit_125;
return res;
}


FUNCODEDEF(fun_to_str_353) {
  ARG(x_);
  P res, a1;
loop:
  res = lit_126;
return res;
}


FUNCODEDEF(fun_as_354) {
  ARG(x_);
  ARG(type_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YisaQ),x_,type_) != YPfalse)
    ? x_
    : CALL3(CHKREF(Yerror),lit_127,type_,x_));
return res;
}


FUNCODEDEF(fun_EE_355) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPbb((P)(P)YPeqQ((P)x_,(P)y_));
return res;
}


FUNCODEDEF(fun_E_356) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(YEE),x_,y_);
return res;
}


FUNCODEDEF(fun_NE_357) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL1(CHKREF(Ynot),CALL2(CHKREF(YE),x_,y_));
return res;
}


FUNCODEDEF(fun_NEE_358) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL1(CHKREF(Ynot),CALL2(CHKREF(YEE),x_,y_));
return res;
}


FUNCODEDEF(fun_G_359) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(YL),y_,x_);
return res;
}


FUNCODEDEF(fun_LE_360) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL1(CHKREF(Ynot),CALL2(CHKREF(YL),y_,x_));
return res;
}


FUNCODEDEF(fun_GE_361) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL1(CHKREF(Ynot),CALL2(CHKREF(YL),x_,y_));
return res;
}


FUNCODEDEF(fun_min_362) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YL),x_,y_) != YPfalse)
    ? x_
    : y_);
return res;
}


FUNCODEDEF(fun_max_363) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YG),x_,y_) != YPfalse)
    ? x_
    : y_);
return res;
}


FUNCODEDEF(fun_as_364) {
  ARG(i_);
  ARG(U_);
  P res, a1, a2;
loop:
  res = (P)YPcb((P)(P)YPiu((P)i_));
return res;
}


FUNCODEDEF(fun_as_365) {
  ARG(c_);
  ARG(U_);
  P res, a1, a2;
loop:
  res = (P)YPib((P)(P)YPcu((P)c_));
return res;
}


FUNCODEDEF(fun_L_366) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPbb((P)(P)YPcL((P)(P)YPcu((P)x_),(P)(P)YPcu((P)y_)));
return res;
}


FUNCODEDEF(fun_EE_367) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPbb((P)(P)YPcE((P)(P)YPcu((P)x_),(P)(P)YPcu((P)y_)));
return res;
}


FUNCODEDEF(fun_lowercaseQ_368) {
  ARG(x_);
  P codeF165;
  P res, a1;
loop:
  res = (codeF165=CALL2(CHKREF(Yas),CHKREF(YLintG),x_),((CALL2(CHKREF(YGE),codeF165,CALL2(CHKREF(Yas),CHKREF(YLintG),lit_128)) != YPfalse)
    ? CALL2(CHKREF(YLE),codeF165,CALL2(CHKREF(Yas),CHKREF(YLintG),lit_129))
    : YPfalse));
return res;
}


FUNCODEDEF(fun_uppercaseQ_369) {
  ARG(x_);
  P codeF166;
  P res, a1;
loop:
  res = (codeF166=CALL2(CHKREF(Yas),CHKREF(YLintG),x_),((CALL2(CHKREF(YGE),codeF166,CALL2(CHKREF(Yas),CHKREF(YLintG),lit_130)) != YPfalse)
    ? CALL2(CHKREF(YLE),codeF166,CALL2(CHKREF(Yas),CHKREF(YLintG),lit_131))
    : YPfalse));
return res;
}


FUNCODEDEF(fun_as_lowercase_370) {
  ARG(x_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(YuppercaseQ),x_) != YPfalse)
    ? CALL2(CHKREF(Yas),CHKREF(YLchrG),CALL2(CHKREF(YA),CALL2(CHKREF(Yas),CHKREF(YLintG),x_),CALL2(CHKREF(Y_),CALL2(CHKREF(Yas),CHKREF(YLintG),lit_132),CALL2(CHKREF(Yas),CHKREF(YLintG),lit_133))))
    : x_);
return res;
}


FUNCODEDEF(fun_as_uppercase_371) {
  ARG(x_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(YlowercaseQ),x_) != YPfalse)
    ? CALL2(CHKREF(Yas),CHKREF(YLchrG),CALL2(CHKREF(YA),CALL2(CHKREF(Yas),CHKREF(YLintG),x_),CALL2(CHKREF(Y_),CALL2(CHKREF(Yas),CHKREF(YLintG),lit_134),CALL2(CHKREF(Yas),CHKREF(YLintG),lit_135))))
    : x_);
return res;
}


FUNCODEDEF(fun_to_str_372) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yfabs),CHKREF(YLstrG),x_);
return res;
}


FUNCODEDEF(fun_alphabeticQ_373) {
  ARG(x_);
  P tmpF169;
  P tmpF168;
  P tmpF167;
  P res, a1;
loop:
  res = (tmpF168=(tmpF167=CALL2(CHKREF(YLE),lit_136,x_),((tmpF167 != YPfalse)
    ? CALL2(CHKREF(YLE),x_,lit_137)
    : YPfalse)),((tmpF168 != YPfalse)
    ? tmpF168
    : (tmpF169=CALL2(CHKREF(YLE),lit_138,x_),((tmpF169 != YPfalse)
    ? CALL2(CHKREF(YLE),x_,lit_139)
    : YPfalse))));
return res;
}


FUNCODEDEF(fun_numericQ_374) {
  ARG(x_);
  P tmpF170;
  P res, a1;
loop:
  res = (tmpF170=CALL2(CHKREF(YLE),lit_140,x_),((tmpF170 != YPfalse)
    ? CALL2(CHKREF(YLE),x_,lit_141)
    : YPfalse));
return res;
}


FUNCODEDEF(fun_to_digit_375) {
  ARG(digit_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Y_),CALL1(CHKREF(Ychar_Gascii),digit_),CALL1(CHKREF(Ychar_Gascii),lit_142));
return res;
}


FUNCODEDEF(fun_contagious_call_376) {
  ARG(y_);
  ARG(x_);
  ARG(f_);
  P typeF171;
  P res, a1, a2, a3;
loop:
  res = (typeF171=CALL2(CHKREF(Ycontagious_type),x_,y_),CALL2(f_,CALL2(CHKREF(Yas),typeF171,x_),CALL2(CHKREF(Yas),typeF171,y_)));
return res;
}


FUNCODEDEF(fun_L_377) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Ycontagious_call),CHKREF(YL),x_,y_);
return res;
}


FUNCODEDEF(fun_A_378) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Ycontagious_call),CHKREF(YA),x_,y_);
return res;
}


FUNCODEDEF(fun___379) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Ycontagious_call),CHKREF(Y_),x_,y_);
return res;
}


FUNCODEDEF(fun_T_380) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Ycontagious_call),CHKREF(YT),x_,y_);
return res;
}


FUNCODEDEF(fun_floor_381) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL3(CHKREF(Ycontagious_call),CHKREF(YfloorS),x_,lit_143);
return res;
}


FUNCODEDEF(fun_ceiling_382) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL3(CHKREF(Ycontagious_call),CHKREF(YceilingS),x_,lit_144);
return res;
}


FUNCODEDEF(fun_round_383) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL3(CHKREF(Ycontagious_call),CHKREF(YroundS),x_,lit_145);
return res;
}


FUNCODEDEF(fun_truncate_384) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL3(CHKREF(Ycontagious_call),CHKREF(YtruncateS),x_,lit_146);
return res;
}


FUNCODEDEF(fun_floorS_385) {
  ARG(divisor_);
  ARG(real_);
  P tmpF177;
  P tup7F176;
  P remainderF175;
  P tup7F174;
  P integerF173;
  P tup7F172;
  P res, a1, a2;
loop:
  res = (tup7F172=CALL2(CHKREF(YtruncateS),real_,divisor_),(integerF173=CALL1(CHKREF(Yhead),tup7F172),(tup7F174=CALL1(CHKREF(Ytail),tup7F172),(remainderF175=CALL1(CHKREF(Yhead),tup7F174),(tup7F176=CALL1(CHKREF(Ytail),tup7F174),(((tmpF177=CALL1(CHKREF(Ynot),CALL1(CHKREF(YzeroQ),remainderF175)),((tmpF177 != YPfalse)
    ? ((CALL1(CHKREF(YnegQ),divisor_) != YPfalse)
    ? CALL1(CHKREF(YposQ),real_)
    : CALL1(CHKREF(YnegQ),real_))
    : YPfalse)) != YPfalse)
    ? CALL2(CHKREF(Ytup),CALL2(CHKREF(Y_),integerF173,lit_147),CALL2(CHKREF(YA),remainderF175,divisor_))
    : CALL2(CHKREF(Ytup),integerF173,remainderF175)))))));
return res;
}


FUNCODEDEF(fun_ceilingS_386) {
  ARG(divisor_);
  ARG(real_);
  P tmpF183;
  P tup8F182;
  P remainderF181;
  P tup8F180;
  P integerF179;
  P tup8F178;
  P res, a1, a2;
loop:
  res = (tup8F178=CALL2(CHKREF(YtruncateS),real_,divisor_),(integerF179=CALL1(CHKREF(Yhead),tup8F178),(tup8F180=CALL1(CHKREF(Ytail),tup8F178),(remainderF181=CALL1(CHKREF(Yhead),tup8F180),(tup8F182=CALL1(CHKREF(Ytail),tup8F180),(((tmpF183=CALL1(CHKREF(Ynot),CALL1(CHKREF(YzeroQ),remainderF181)),((tmpF183 != YPfalse)
    ? ((CALL1(CHKREF(YnegQ),divisor_) != YPfalse)
    ? CALL1(CHKREF(YnegQ),real_)
    : CALL1(CHKREF(YposQ),real_))
    : YPfalse)) != YPfalse)
    ? CALL2(CHKREF(Ytup),CALL2(CHKREF(YA),integerF179,lit_148),CALL2(CHKREF(Y_),remainderF181,divisor_))
    : CALL2(CHKREF(Ytup),integerF179,remainderF181)))))));
return res;
}


FUNCODEDEF(fun_roundS_387) {
  ARG(divisor_);
  ARG(real_);
  P tmpF194;
  P tmpF193;
  P minus_thresholdF192;
  P tmpF191;
  P tmpF190;
  P thresholdF189;
  P tup9F188;
  P remainderF187;
  P tup9F186;
  P integerF185;
  P tup9F184;
  P res, a1, a2;
loop:
  res = (tup9F184=CALL2(CHKREF(YtruncateS),real_,divisor_),(integerF185=CALL1(CHKREF(Yhead),tup9F184),(tup9F186=CALL1(CHKREF(Ytail),tup9F184),(remainderF187=CALL1(CHKREF(Yhead),tup9F186),(tup9F188=CALL1(CHKREF(Ytail),tup9F186),(thresholdF189=CALL2(CHKREF(YS),CALL1(CHKREF(Yabs),divisor_),lit_149),(((tmpF190=CALL2(CHKREF(YG),remainderF187,thresholdF189),((tmpF190 != YPfalse)
    ? tmpF190
    : (tmpF191=CALL2(CHKREF(YE),remainderF187,thresholdF189),((tmpF191 != YPfalse)
    ? CALL1(CHKREF(YoddQ),integerF185)
    : YPfalse)))) != YPfalse)
    ? ((CALL1(CHKREF(YnegQ),divisor_) != YPfalse)
    ? CALL2(CHKREF(Ytup),CALL2(CHKREF(Y_),integerF185,lit_150),CALL2(CHKREF(YA),remainderF187,divisor_))
    : CALL2(CHKREF(Ytup),CALL2(CHKREF(YA),integerF185,lit_151),CALL2(CHKREF(Y_),remainderF187,divisor_)))
    : (((minus_thresholdF192=CALL1(CHKREF(Yneg),thresholdF189),(tmpF193=CALL2(CHKREF(YL),remainderF187,minus_thresholdF192),((tmpF193 != YPfalse)
    ? tmpF193
    : (tmpF194=CALL2(CHKREF(YE),remainderF187,minus_thresholdF192),((tmpF194 != YPfalse)
    ? CALL1(CHKREF(YoddQ),integerF185)
    : YPfalse))))) != YPfalse)
    ? ((CALL1(CHKREF(YnegQ),divisor_) != YPfalse)
    ? CALL2(CHKREF(Ytup),CALL2(CHKREF(YA),integerF185,lit_152),CALL2(CHKREF(Y_),remainderF187,divisor_))
    : CALL2(CHKREF(Ytup),CALL2(CHKREF(Y_),integerF185,lit_153),CALL2(CHKREF(YA),remainderF187,divisor_)))
    : CALL2(CHKREF(Ytup),integerF185,remainderF187)))))))));
return res;
}


FUNCODEDEF(fun_truncateS_388) {
  ARG(divisor_);
  ARG(real_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Ycontagious_call),CHKREF(YtruncateS),real_,divisor_);
return res;
}


FUNCODEDEF(fun_modulo_389) {
  ARG(divisor_);
  ARG(real_);
  P tup10F199;
  P remainderF198;
  P tup10F197;
  P UF196;
  P tup10F195;
  P res, a1, a2;
loop:
  res = (tup10F195=CALL2(CHKREF(YfloorS),real_,divisor_),(UF196=CALL1(CHKREF(Yhead),tup10F195),(tup10F197=CALL1(CHKREF(Ytail),tup10F195),(remainderF198=CALL1(CHKREF(Yhead),tup10F197),(tup10F199=CALL1(CHKREF(Ytail),tup10F197),remainderF198)))));
return res;
}


FUNCODEDEF(fun_remainder_390) {
  ARG(divisor_);
  ARG(real_);
  P tup11F204;
  P remainderF203;
  P tup11F202;
  P UF201;
  P tup11F200;
  P res, a1, a2;
loop:
  res = (tup11F200=CALL2(CHKREF(YtruncateS),real_,divisor_),(UF201=CALL1(CHKREF(Yhead),tup11F200),(tup11F202=CALL1(CHKREF(Ytail),tup11F200),(remainderF203=CALL1(CHKREF(Yhead),tup11F202),(tup11F204=CALL1(CHKREF(Ytail),tup11F202),remainderF203)))));
return res;
}


FUNCODEDEF(fun_posQ_391) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(YG),x_,lit_154);
return res;
}


FUNCODEDEF(fun_zeroQ_392) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(YE),x_,lit_155);
return res;
}


FUNCODEDEF(fun_negQ_393) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(YL),x_,lit_156);
return res;
}


FUNCODEDEF(fun_neg_394) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Y_),lit_157,x_);
return res;
}


FUNCODEDEF(fun_abs_395) {
  ARG(x_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(YnegQ),x_) != YPfalse)
    ? CALL1(CHKREF(Yneg),x_)
    : x_);
return res;
}


FUNCODEDEF(fun_to_str_396) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ynum_to_str),x_);
return res;
}


FUNCODEDEF(fun_contagious_type_397) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CHKREF(YLintG);
return res;
}


FUNCODEDEF(fun_contagious_type_398) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CHKREF(YLfloG);
return res;
}


FUNCODEDEF(fun_contagious_type_399) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CHKREF(YLfloG);
return res;
}


FUNCODEDEF(fun_contagious_type_400) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CHKREF(YLfloG);
return res;
}


FUNCODEDEF(fun_EE_401) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPbb((P)(P)YPiE((P)(P)YPiu((P)x_),(P)(P)YPiu((P)y_)));
return res;
}


FUNCODEDEF(fun_L_402) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPbb((P)(P)YPiL((P)(P)YPiu((P)x_),(P)(P)YPiu((P)y_)));
return res;
}


FUNCODEDEF(fun_A_403) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPib((P)(P)YPiA((P)(P)YPiu((P)x_),(P)(P)YPiu((P)y_)));
return res;
}


FUNCODEDEF(fun___404) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPib((P)(P)YPi_((P)(P)YPiu((P)x_),(P)(P)YPiu((P)y_)));
return res;
}


FUNCODEDEF(fun_T_405) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPib((P)(P)YPiT((P)(P)YPiu((P)x_),(P)(P)YPiu((P)y_)));
return res;
}


FUNCODEDEF(fun_floor_406) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ytup),x_,lit_158);
return res;
}


FUNCODEDEF(fun_ceiling_407) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ytup),x_,lit_159);
return res;
}


FUNCODEDEF(fun_round_408) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ytup),x_,lit_160);
return res;
}


FUNCODEDEF(fun_truncate_409) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ytup),x_,lit_161);
return res;
}


FUNCODEDEF(fun_truncateS_410) {
  ARG(y_);
  ARG(x_);
  P resultF205;
  P res, a1, a2;
loop:
  res = (resultF205=(P)YPib((P)(P)YPitS((P)(P)YPiu((P)x_),(P)(P)YPiu((P)y_))),CALL2(CHKREF(Ytup),resultF205,CALL2(CHKREF(Y_),x_,CALL2(CHKREF(YT),resultF205,y_))));
return res;
}


FUNCODEDEF(fun_modulo_411) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPib((P)(P)YPim((P)(P)YPiu((P)x_),(P)(P)YPiu((P)y_)));
return res;
}


FUNCODEDEF(fun_logior_412) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPib((P)(P)YPiv((P)(P)YPiu((P)x_),(P)(P)YPiu((P)y_)));
return res;
}


FUNCODEDEF(fun_logxor_413) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPib((P)(P)YPiC((P)(P)YPiu((P)x_),(P)(P)YPiu((P)y_)));
return res;
}


FUNCODEDEF(fun_logand_414) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPib((P)(P)YPiB((P)(P)YPiu((P)x_),(P)(P)YPiu((P)y_)));
return res;
}


FUNCODEDEF(fun_lognot_415) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPib((P)(P)YPiX((P)(P)YPiu((P)x_)));
return res;
}


FUNCODEDEF(fun_logbitQ_416) {
  ARG(x_);
  ARG(o_);
  P res, a1, a2;
loop:
  res = (P)YPib((P)(P)YPiQ((P)(P)YPiu((P)o_),(P)(P)YPiu((P)x_)));
return res;
}


FUNCODEDEF(fun_evenQ_417) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL1(CHKREF(YzeroQ),CALL2(CHKREF(Ylogand),x_,lit_162));
return res;
}


FUNCODEDEF(fun_oddQ_418) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ynot),CALL1(CHKREF(YevenQ),x_));
return res;
}


FUNCODEDEF(fun_ash_419) {
  ARG(a_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = ((CALL1(CHKREF(YnegQ),a_) != YPfalse)
    ? (P)YPib((P)(P)YPiGG((P)(P)YPiu((P)x_),(P)(P)YPiu((P)a_)))
    : (P)YPib((P)(P)YPiLL((P)(P)YPiu((P)x_),(P)(P)YPiu((P)a_))));
return res;
}


FUNCODEDEF(fun_lsh_420) {
  ARG(a_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = ((CALL1(CHKREF(YnegQ),a_) != YPfalse)
    ? (P)YPib((P)(P)YPiGGG((P)(P)YPiu((P)x_),(P)(P)YPiu((P)a_)))
    : (P)YPib((P)(P)YPiLLL((P)(P)YPiu((P)x_),(P)(P)YPiu((P)a_))));
return res;
}


FUNCODEDEF(fun_search_421) {
  ARG(po2_);
  P res, a1;
loop:
  res = ((CALL2(CHKREF(YG),po2_,FREEREF(0)) != YPfalse)
    ? po2_
    : (a1=CALL2(CHKREF(YA),po2_,po2_),po2_=a1,PNUL));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_power_of_two_ceiling_422) {
  ARG(x_);
  P searchF206;
  P res, a1;
loop:
  res = (searchF206=FUNSHELL(fun_search_421, 2),FUNINIT(searchF206, 2,x_,searchF206),
  CALL1(searchF206,lit_163));
return res;
}


FUNCODEDEF(fun_decode_radix_option_423) {
  ARG(caller_name_);
  ARG(default_);
  ARG(rest_);
  P res, a1, a2, a3;
loop:
  res = ((CALL1(CHKREF(YemptyQ),rest_) != YPfalse)
    ? default_
    : ((CALL2(CHKREF(YE),CALL1(CHKREF(Ylen),rest_),lit_167) != YPfalse)
    ? CALL1(CHKREF(Yhead),rest_)
    : CALL3(CHKREF(Yerror),lit_168,caller_name_,rest_)));
return res;
}


FUNCODEDEF(fun_loop_424) {
  ARG(num_);
  ARG(digit_list_);
  P digitF207;
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YE),num_,lit_173) != YPfalse)
    ? digit_list_
    : (digitF207=CALL2(CHKREF(Yelt),CHKREF(YDdigit_to_char),CALL2(CHKREF(Yremainder),num_,FREEREF(0))),(a1=CALL2(CHKREF(Ypair),digitF207,digit_list_),a2=CALL1(CHKREF(Y1st),CALL2(CHKREF(YtruncateS),num_,FREEREF(0))),digit_list_=a1,num_=a2,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_num_to_str_425) {
  ARG(radix_option_);
  ARG(num_);
  P digit_listF211;
  P loopF210;
  P sF209;
  P radixF208;
  P res, a1, a2;
loop:
  res = (radixF208=CALL3(CHKREF(Ydecode_radix_option),radix_option_,CHKREF(YTprint_baseT),lit_169),(sF209=((CALL2(CHKREF(YL),num_,lit_170) != YPfalse)
    ? lit_171
    : lit_172),(digit_listF211=(loopF210=FUNSHELL(fun_loop_424, 2),FUNINIT(loopF210, 2,radixF208,loopF210),
  CALL2(loopF210,Ynil,CALL2(CHKREF(YT),num_,sF209))),CALL2(CHKREF(Yas),CHKREF(YLstrG),((CALL2(CHKREF(YL),sF209,lit_174) != YPfalse)
    ? CALL2(CHKREF(Ypair),lit_175,digit_listF211)
    : ((CALL2(CHKREF(YE),num_,lit_176) != YPfalse)
    ? lit_177
    : digit_listF211))))));
return res;
}


FUNCODEDEF(Yflo_bits) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPib((P)(P)YPflo_bits((P)(P)YPfu((P)x_)));
return res;
}


FUNCODEDEF(fun_as_427) {
  ARG(x_);
  ARG(U_);
  P res, a1, a2;
loop:
  res = (P)YPfb((P)(P)YPfi2f((P)(P)YPiu((P)x_)));
return res;
}


FUNCODEDEF(fun_EE_428) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPbb((P)(P)YPfE((P)(P)YPfu((P)x_),(P)(P)YPfu((P)y_)));
return res;
}


FUNCODEDEF(fun_L_429) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPbb((P)(P)YPfL((P)(P)YPfu((P)x_),(P)(P)YPfu((P)y_)));
return res;
}


FUNCODEDEF(fun_A_430) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPfb((P)(P)YPfA((P)(P)YPfu((P)x_),(P)(P)YPfu((P)y_)));
return res;
}


FUNCODEDEF(fun___431) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPfb((P)(P)YPf_((P)(P)YPfu((P)x_),(P)(P)YPfu((P)y_)));
return res;
}


FUNCODEDEF(fun_T_432) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPfb((P)(P)YPfT((P)(P)YPfu((P)x_),(P)(P)YPfu((P)y_)));
return res;
}


FUNCODEDEF(fun_S_433) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPfb((P)(P)YPfS((P)(P)YPfu((P)x_),(P)(P)YPfu((P)y_)));
return res;
}


FUNCODEDEF(fun_truncateS_434) {
  ARG(y_);
  ARG(x_);
  P resultF213;
  P dividedF212;
  P res, a1, a2;
loop:
  res = (dividedF212=CALL2(CHKREF(YS),x_,y_),(resultF213=(P)YPib((P)(P)YPft((P)(P)YPfu((P)x_))),CALL2(CHKREF(Ytup),resultF213,CALL2(CHKREF(YT),y_,CALL2(CHKREF(Y_),dividedF212,CALL2(CHKREF(Yas),CHKREF(YLfloG),resultF213))))));
return res;
}


FUNCODEDEF(fun_loop_435) {
  ARG(e_);
  ARG(p_);
  P tup12F216;
  P iF215;
  P tup12F214;
  P res, a1, a2;
loop:
  res = (tup12F214=CALL1(CHKREF(Ytruncate),p_),(iF215=CALL1(CHKREF(Yhead),tup12F214),(tup12F216=CALL1(CHKREF(Ytail),tup12F214),((CALL2(CHKREF(YL),CALL2(CHKREF(Y_),p_,iF215),CHKREF(Yepsilon)) != YPfalse)
    ? ((BOXVAL(FREEREF(0))=CALL2(CHKREF(Ynum_to_str),iF215,FREEREF(1))),
  e_)
    : (a1=CALL2(CHKREF(YT),p_,FREEREF(1)),a2=CALL2(CHKREF(YA),e_,lit_183),p_=a1,e_=a2,PNUL)))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_num_to_str_436) {
  ARG(radix_option_);
  ARG(num_);
  P lengthF223;
  P eF222;
  P loopF221;
  P stringF220;
  P pF219;
  P sF218;
  P radixF217;
  P res, a1, a2;
loop:
  res = (radixF217=CALL3(CHKREF(Ydecode_radix_option),radix_option_,CHKREF(YTprint_baseT),lit_178),(sF218=((CALL2(CHKREF(YL),num_,lit_179) != YPfalse)
    ? lit_180
    : lit_181),(pF219=CALL2(CHKREF(YT),num_,sF218),(stringF220=lit_182,(stringF220= BOXFAB(stringF220),
  (eF222=(loopF221=FUNSHELL(fun_loop_435, 3),FUNINIT(loopF221, 3,stringF220,radixF217,loopF221),
  CALL2(loopF221,pF219,lit_184)),(lengthF223=CALL1(CHKREF(Ylen),BOXVAL(stringF220)),((BOXVAL(stringF220)=((CALL2(CHKREF(YE),eF222,lit_185) != YPfalse)
    ? CALL2(CHKREF(Ycat),BOXVAL(stringF220),lit_186)
    : ((CALL2(CHKREF(YE),eF222,lengthF223) != YPfalse)
    ? CALL2(CHKREF(Ycat),lit_187,BOXVAL(stringF220))
    : ((CALL2(CHKREF(YL),eF222,lengthF223) != YPfalse)
    ? CALL3(CHKREF(Ycat),CALL3(CHKREF(Ysub),BOXVAL(stringF220),lit_188,CALL2(CHKREF(Y_),lengthF223,eF222)),lit_189,CALL3(CHKREF(Ysub),BOXVAL(stringF220),CALL2(CHKREF(Y_),lengthF223,eF222),lengthF223))
    : CALL2(CHKREF(Ycat),CALL3(CHKREF(Ysub),lit_190,lit_191,CALL2(CHKREF(YA),CALL2(CHKREF(Y_),eF222,lengthF223),lit_192)),BOXVAL(stringF220)))))),
  ((CALL2(CHKREF(YL),sF218,lit_193) != YPfalse)
    ? CALL2(CHKREF(Ycat),lit_194,BOXVAL(stringF220))
    : BOXVAL(stringF220))))))))));
return res;
}


FUNCODEDEF(fun_emptyQ_437) {
  ARG(c_);
  P res, a1;
loop:
  res = CALL2(CHKREF(YE),CALL1(CHKREF(Ylen),c_),lit_195);
return res;
}


FUNCODEDEF(fun_empty_438) {
  ARG(c_);
  P res, a1;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)c_,(P)Ynil),Ynil,Ynil);
return res;
}


FUNCODEDEF(fun_default_439) {
  ARG(c_);
  P res, a1;
loop:
  res = YPfalse;
return res;
}


FUNCODEDEF(fun_eq_440) {
  ARG(s2_);
  ARG(s1_);
  P tmpF224;
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(Yfin_stateQ),FREEREF(0),s1_) != YPfalse)
    ? CALL2(CHKREF(Yfin_stateQ),FREEREF(1),s2_)
    : (tmpF224=CALL2(CHKREF(YE),CALL2(CHKREF(Ynow_elt),FREEREF(0),s1_),CALL2(CHKREF(Ynow_elt),FREEREF(1),s2_)),((tmpF224 != YPfalse)
    ? (a1=CALL2(CHKREF(Ynxt_state),FREEREF(0),s1_),a2=CALL2(CHKREF(Ynxt_state),FREEREF(1),s2_),s1_=a1,s2_=a2,PNUL)
    : YPfalse)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_E_441) {
  ARG(c2_);
  ARG(c1_);
  P eqF225;
  P res, a1, a2;
loop:
  res = (eqF225=FUNSHELL(fun_eq_440, 3),FUNINIT(eqF225, 3,c1_,c2_,eqF225),
  CALL2(eqF225,CALL1(CHKREF(Yini_state),c1_),CALL1(CHKREF(Yini_state),c2_)));
return res;
}


FUNCODEDEF(fun_fab_442) {
  ARG(s_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CALL0(CHKREF(Ynyi_error));
return res;
}


FUNCODEDEF(fun_as_443) {
  ARG(x_);
  ARG(p_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yinto),CALL2(CHKREF(Yfab),p_,CALL1(CHKREF(Ylen),x_)),x_);
return res;
}


FUNCODEDEF(fun_rep_444) {
  ARG(key_vals_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(Ynot),CALL1(CHKREF(YemptyQ),key_vals_)) != YPfalse)
    ? (CALL2(FREEREF(0),CALL1(CHKREF(Yhead),key_vals_),CALL1(CHKREF(Yhead),CALL1(CHKREF(Ytail),key_vals_))),
  (a1=CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),key_vals_)),key_vals_=a1,PNUL))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_do_key_vals_445) {
  ARG(key_vals_);
  ARG(fn_);
  P repF226;
  P res, a1, a2;
loop:
  res = (repF226=FUNSHELL(fun_rep_444, 2),FUNINIT(repF226, 2,fn_,repF226),
  CALL1(repF226,key_vals_));
return res;
}


FUNCODEDEF(fun_446) {
  ARG(val_);
  ARG(key_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yelt_setter),val_,FREEREF(0),key_);
return res;
}


FUNCODEDEF(fun_fabs_447) {
  ARG(key_vals_);
  ARG(p_);
  P xF227;
  P res, a1, a2;
loop:
  res = (xF227=CALL3(CHKREF(YPisa),(P)YPpair((P)p_,(P)Ynil),Ynil,Ynil),(CALL2(CHKREF(Ydo_key_vals),FUNFAB(fun_446, 1,xF227),key_vals_),
  xF227));
return res;
}


FUNCODEDEF(fun_in_448) {
  ARG(ss_);
  ARG(ds_);
  P res, a1, a2;
loop:
  res = ((((CALL2(CHKREF(Yfin_stateQ),FREEREF(0),ds_) != YPfalse)
    ? YPtrue
    : CALL2(CHKREF(Yfin_stateQ),FREEREF(1),ss_)) != YPfalse)
    ? FREEREF(0)
    : (CALL3(CHKREF(Ynow_elt_setter),CALL2(CHKREF(Ynow_elt),FREEREF(1),ss_),FREEREF(0),ds_),
  (a1=CALL2(CHKREF(Ynxt_state),FREEREF(0),ds_),a2=CALL2(CHKREF(Ynxt_state),FREEREF(1),ss_),ds_=a1,ss_=a2,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_alter_449) {
  ARG(src_);
  ARG(dst_);
  P inF228;
  P res, a1, a2;
loop:
  res = (inF228=FUNSHELL(fun_in_448, 3),FUNINIT(inF228, 3,dst_,src_,inF228),
  CALL2(inF228,CALL1(CHKREF(Yini_state),dst_),CALL1(CHKREF(Yini_state),src_)));
return res;
}


FUNCODEDEF(fun_in_450) {
  ARG(ds_);
  P res, a1;
loop:
  res = ((CALL2(CHKREF(Yfin_stateQ),FREEREF(0),ds_) != YPfalse)
    ? FREEREF(0)
    : (CALL3(CHKREF(Ynow_elt_setter),FREEREF(1),FREEREF(0),ds_),
  (a1=CALL2(CHKREF(Ynxt_state),FREEREF(0),ds_),ds_=a1,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_fill_451) {
  ARG(val_);
  ARG(dst_);
  P inF229;
  P res, a1, a2;
loop:
  res = (inF229=FUNSHELL(fun_in_450, 3),FUNINIT(inF229, 3,dst_,val_,inF229),
  CALL1(inF229,CALL1(CHKREF(Yini_state),dst_)));
return res;
}


FUNCODEDEF(fun_fnd_452) {
  ARG(state_);
  P tmpF230;
  P res, a1;
loop:
  res = ((CALL2(CHKREF(Yfin_stateQ),FREEREF(0),state_) != YPfalse)
    ? YPfalse
    : (tmpF230=CALL1(FREEREF(1),CALL2(CHKREF(Ynow_elt),FREEREF(0),state_)),((tmpF230 != YPfalse)
    ? tmpF230
    : (a1=CALL2(CHKREF(Ynxt_state),FREEREF(0),state_),state_=a1,PNUL))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_anyQ_453) {
  ARG(c_);
  ARG(test_);
  P fndF231;
  P res, a1, a2;
loop:
  res = (fndF231=FUNSHELL(fun_fnd_452, 3),FUNINIT(fndF231, 3,c_,test_,fndF231),
  CALL1(fndF231,CALL1(CHKREF(Yini_state),c_)));
return res;
}


FUNCODEDEF(fun_fnd_454) {
  ARG(sy_);
  ARG(sx_);
  P tmpF233;
  P tmpF232;
  P res, a1, a2;
loop:
  res = (((tmpF232=CALL2(CHKREF(Yfin_stateQ),FREEREF(0),sx_),((tmpF232 != YPfalse)
    ? tmpF232
    : CALL2(CHKREF(Yfin_stateQ),FREEREF(1),sy_))) != YPfalse)
    ? YPfalse
    : (tmpF233=CALL2(FREEREF(2),CALL2(CHKREF(Ynow_elt),FREEREF(0),sx_),CALL2(CHKREF(Ynow_elt),FREEREF(1),sy_)),((tmpF233 != YPfalse)
    ? tmpF233
    : (a1=CALL2(CHKREF(Ynxt_state),FREEREF(0),sx_),a2=CALL2(CHKREF(Ynxt_state),FREEREF(1),sy_),sx_=a1,sy_=a2,PNUL))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_any2Q_455) {
  ARG(y_);
  ARG(x_);
  ARG(test_);
  P fndF234;
  P res, a1, a2, a3;
loop:
  res = (fndF234=FUNSHELL(fun_fnd_454, 4),FUNINIT(fndF234, 4,x_,y_,test_,fndF234),
  CALL2(fndF234,CALL1(CHKREF(Yini_state),x_),CALL1(CHKREF(Yini_state),y_)));
return res;
}


FUNCODEDEF(fun_fnd_456) {
  ARG(state_);
  P tmpF236;
  P tmpF235;
  P res, a1;
loop:
  res = (tmpF235=CALL2(CHKREF(Yfin_stateQ),FREEREF(0),state_),((tmpF235 != YPfalse)
    ? tmpF235
    : (tmpF236=CALL1(FREEREF(1),CALL2(CHKREF(Ynow_elt),FREEREF(0),state_)),((tmpF236 != YPfalse)
    ? (a1=CALL2(CHKREF(Ynxt_state),FREEREF(0),state_),state_=a1,PNUL)
    : YPfalse))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_allQ_457) {
  ARG(c_);
  ARG(test_);
  P fndF237;
  P res, a1, a2;
loop:
  res = (fndF237=FUNSHELL(fun_fnd_456, 3),FUNINIT(fndF237, 3,c_,test_,fndF237),
  CALL1(fndF237,CALL1(CHKREF(Yini_state),c_)));
return res;
}


FUNCODEDEF(fun_fnd_458) {
  ARG(sy_);
  ARG(sx_);
  P tmpF240;
  P tmpF239;
  P tmpF238;
  P res, a1, a2;
loop:
  res = (tmpF238=CALL2(CHKREF(Yfin_stateQ),FREEREF(0),sx_),((tmpF238 != YPfalse)
    ? tmpF238
    : (tmpF239=CALL2(CHKREF(Yfin_stateQ),FREEREF(1),sy_),((tmpF239 != YPfalse)
    ? tmpF239
    : (tmpF240=CALL2(FREEREF(2),CALL2(CHKREF(Ynow_elt),FREEREF(0),sx_),CALL2(CHKREF(Ynow_elt),FREEREF(1),sy_)),((tmpF240 != YPfalse)
    ? (a1=CALL2(CHKREF(Ynxt_state),FREEREF(0),sx_),a2=CALL2(CHKREF(Ynxt_state),FREEREF(1),sy_),sx_=a1,sy_=a2,PNUL)
    : YPfalse))))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_all2Q_459) {
  ARG(y_);
  ARG(x_);
  ARG(test_);
  P fndF241;
  P res, a1, a2, a3;
loop:
  res = (fndF241=FUNSHELL(fun_fnd_458, 4),FUNINIT(fndF241, 4,x_,y_,test_,fndF241),
  CALL2(fndF241,CALL1(CHKREF(Yini_state),x_),CALL1(CHKREF(Yini_state),y_)));
return res;
}


FUNCODEDEF(fun_red_460) {
  ARG(state_);
  ARG(res_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(Yfin_stateQ),FREEREF(0),state_) != YPfalse)
    ? res_
    : (a1=CALL2(FREEREF(1),res_,CALL2(CHKREF(Ynow_elt),FREEREF(0),state_)),a2=CALL2(CHKREF(Ynxt_state),FREEREF(0),state_),res_=a1,state_=a2,PNUL));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_reduce_461) {
  ARG(c_);
  ARG(init_);
  ARG(combine_);
  P redF242;
  P res, a1, a2, a3;
loop:
  res = (redF242=FUNSHELL(fun_red_460, 3),FUNINIT(redF242, 3,c_,combine_,redF242),
  CALL2(redF242,init_,CALL1(CHKREF(Yini_state),c_)));
return res;
}


FUNCODEDEF(fun_red_462) {
  ARG(state_);
  ARG(res_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(Yfin_stateQ),FREEREF(0),state_) != YPfalse)
    ? res_
    : (a1=CALL2(FREEREF(1),res_,CALL2(CHKREF(Ynow_elt),FREEREF(0),state_)),a2=CALL2(CHKREF(Ynxt_state),FREEREF(0),state_),res_=a1,state_=a2,PNUL));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_reduceA_463) {
  ARG(c_);
  ARG(combine_);
  P redF245;
  P initF244;
  P stateF243;
  P res, a1, a2;
loop:
  res = (stateF243=CALL1(CHKREF(Yini_state),c_),(initF244=CALL2(CHKREF(Ynow_elt),c_,stateF243),(redF245=FUNSHELL(fun_red_462, 3),FUNINIT(redF245, 3,c_,combine_,redF245),
  CALL2(redF245,initF244,CALL2(CHKREF(Ynxt_state),c_,stateF243)))));
return res;
}


FUNCODEDEF(fun_fnd_464) {
  ARG(state_);
  P res, a1;
loop:
  res = ((CALL2(CHKREF(Yfin_stateQ),FREEREF(0),state_) != YPfalse)
    ? CHKREF(Ynul)
    : ((CALL1(FREEREF(1),CALL2(CHKREF(Ynow_elt),FREEREF(0),state_)) != YPfalse)
    ? CALL2(CHKREF(Ynow_key),FREEREF(0),state_)
    : (a1=CALL2(CHKREF(Ynxt_state),FREEREF(0),state_),state_=a1,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_find_key_465) {
  ARG(c_);
  ARG(f_);
  P fndF246;
  P res, a1, a2;
loop:
  res = (fndF246=FUNSHELL(fun_fnd_464, 3),FUNINIT(fndF246, 3,c_,f_,fndF246),
  CALL1(fndF246,CALL1(CHKREF(Yini_state),c_)));
return res;
}


FUNCODEDEF(fun_con_466) {
  ARG(s_);
  ARG(res_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(Yfin_stateQ),FREEREF(0),s_) != YPfalse)
    ? CALL2(CHKREF(Yas),FREEREF(0),CALL1(CHKREF(YrevX),res_))
    : (a1=CALL2(CHKREF(Yadd),res_,CALL1(FREEREF(1),CALL2(CHKREF(Ynow_elt),FREEREF(0),s_))),a2=CALL2(CHKREF(Ynxt_state),FREEREF(0),s_),res_=a1,s_=a2,PNUL));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_map_467) {
  ARG(c_);
  ARG(f_);
  P conF247;
  P res, a1, a2;
loop:
  res = (conF247=FUNSHELL(fun_con_466, 3),FUNINIT(conF247, 3,c_,f_,conF247),
  CALL2(conF247,Ynil,CALL1(CHKREF(Yini_state),c_)));
return res;
}


FUNCODEDEF(fun_lop_468) {
  ARG(s_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(Ynot),CALL2(CHKREF(Yfin_stateQ),FREEREF(0),s_)) != YPfalse)
    ? (CALL1(FREEREF(1),CALL2(CHKREF(Ynow_elt),FREEREF(0),s_)),
  (a1=CALL2(CHKREF(Ynxt_state),FREEREF(0),s_),s_=a1,PNUL))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_do_469) {
  ARG(c_);
  ARG(f_);
  P lopF248;
  P res, a1, a2;
loop:
  res = (lopF248=FUNSHELL(fun_lop_468, 3),FUNINIT(lopF248, 3,c_,f_,lopF248),
  CALL1(lopF248,CALL1(CHKREF(Yini_state),c_)));
return res;
}


FUNCODEDEF(fun_con_470) {
  ARG(sy_);
  ARG(sx_);
  ARG(res_);
  P tmpF249;
  P res, a1, a2, a3;
loop:
  res = (((tmpF249=CALL2(CHKREF(Yfin_stateQ),FREEREF(0),sx_),((tmpF249 != YPfalse)
    ? tmpF249
    : CALL2(CHKREF(Yfin_stateQ),FREEREF(1),sy_))) != YPfalse)
    ? CALL2(CHKREF(Yas),FREEREF(0),CALL1(CHKREF(YrevX),res_))
    : (a1=CALL2(CHKREF(Yadd),res_,CALL2(FREEREF(2),CALL2(CHKREF(Ynow_elt),FREEREF(0),sx_),CALL2(CHKREF(Ynow_elt),FREEREF(1),sy_))),a2=CALL2(CHKREF(Ynxt_state),FREEREF(0),sx_),a3=CALL2(CHKREF(Ynxt_state),FREEREF(1),sy_),res_=a1,sx_=a2,sy_=a3,PNUL));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_map2_471) {
  ARG(y_);
  ARG(x_);
  ARG(f_);
  P conF250;
  P res, a1, a2, a3;
loop:
  res = (conF250=FUNSHELL(fun_con_470, 4),FUNINIT(conF250, 4,x_,y_,f_,conF250),
  CALL3(conF250,Ynil,CALL1(CHKREF(Yini_state),x_),CALL1(CHKREF(Yini_state),y_)));
return res;
}


FUNCODEDEF(fun_lop_472) {
  ARG(sy_);
  ARG(sx_);
  P tmpF251;
  P res, a1, a2;
loop:
  res = ((CALL1(CHKREF(Ynot),(tmpF251=CALL2(CHKREF(Yfin_stateQ),FREEREF(0),sx_),((tmpF251 != YPfalse)
    ? tmpF251
    : CALL2(CHKREF(Yfin_stateQ),FREEREF(1),sy_)))) != YPfalse)
    ? (CALL2(FREEREF(2),CALL2(CHKREF(Ynow_elt),FREEREF(0),sx_),CALL2(CHKREF(Ynow_elt),FREEREF(1),sy_)),
  (a1=CALL2(CHKREF(Ynxt_state),FREEREF(0),sx_),a2=CALL2(CHKREF(Ynxt_state),FREEREF(1),sy_),sx_=a1,sy_=a2,PNUL))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_do2_473) {
  ARG(y_);
  ARG(x_);
  ARG(f_);
  P lopF252;
  P res, a1, a2, a3;
loop:
  res = (lopF252=FUNSHELL(fun_lop_472, 4),FUNINIT(lopF252, 4,x_,y_,f_,lopF252),
  CALL2(lopF252,CALL1(CHKREF(Yini_state),x_),CALL1(CHKREF(Yini_state),y_)));
return res;
}


FUNCODEDEF(fun_con_474) {
  ARG(s_);
  ARG(res_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(Yfin_stateQ),FREEREF(0),s_) != YPfalse)
    ? CALL2(CHKREF(Yas),FREEREF(0),CALL1(CHKREF(YrevX),res_))
    : (a1=CALL2(CHKREF(Yadd),res_,CALL2(FREEREF(1),CALL2(CHKREF(Ynow_key),FREEREF(0),s_),CALL2(CHKREF(Ynow_elt),FREEREF(0),s_))),a2=CALL2(CHKREF(Ynxt_state),FREEREF(0),s_),res_=a1,s_=a2,PNUL));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_map_keyed_475) {
  ARG(c_);
  ARG(f_);
  P conF253;
  P res, a1, a2;
loop:
  res = (conF253=FUNSHELL(fun_con_474, 3),FUNINIT(conF253, 3,c_,f_,conF253),
  CALL2(conF253,Ynil,CALL1(CHKREF(Yini_state),c_)));
return res;
}


FUNCODEDEF(fun_lop_476) {
  ARG(s_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(Ynot),CALL2(CHKREF(Yfin_stateQ),FREEREF(0),s_)) != YPfalse)
    ? (CALL2(FREEREF(1),CALL2(CHKREF(Ynow_key),FREEREF(0),s_),CALL2(CHKREF(Ynow_elt),FREEREF(0),s_)),
  (a1=CALL2(CHKREF(Ynxt_state),FREEREF(0),s_),s_=a1,PNUL))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_do_keyed_477) {
  ARG(c_);
  ARG(f_);
  P lopF254;
  P res, a1, a2;
loop:
  res = (lopF254=FUNSHELL(fun_lop_476, 3),FUNINIT(lopF254, 3,c_,f_,lopF254),
  CALL1(lopF254,CALL1(CHKREF(Yini_state),c_)));
return res;
}


FUNCODEDEF(fun_478) {
  ARG(e_);
  P res, a1;
loop:
  res = CALL2(CHKREF(YEE),e_,FREEREF(0));
return res;
}


FUNCODEDEF(fun_memQ_479) {
  ARG(x_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(YanyQ),FUNFAB(fun_478, 1,x_),c_);
return res;
}


FUNCODEDEF(fun_assocs_test_480) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yassocs_test));
return res;
}


FUNCODEDEF(fun_assocs_test_setter_481) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yassocs_test));
return res;
}


FUNCODEDEF(fun_482) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(YEE);
return res;
}


FUNCODEDEF(fun_assocs_keys_483) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yassocs_keys));
return res;
}


FUNCODEDEF(fun_assocs_keys_setter_484) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yassocs_keys));
return res;
}


FUNCODEDEF(fun_485) {
  ARG(x_);
  P res, a1;
loop:
  res = Ynil;
return res;
}


FUNCODEDEF(fun_assocs_vals_486) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yassocs_vals));
return res;
}


FUNCODEDEF(fun_assocs_vals_setter_487) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yassocs_vals));
return res;
}


FUNCODEDEF(fun_488) {
  ARG(x_);
  P res, a1;
loop:
  res = Ynil;
return res;
}


FUNCODEDEF(fun_fab_489) {
  ARG(s_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLassocsG),(P)Ynil),Ynil,Ynil);
return res;
}


FUNCODEDEF(fun_len_490) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ylen),CALL1(CHKREF(Yassocs_keys),x_));
return res;
}


FUNCODEDEF(fun_fnd_491) {
  ARG(vals_);
  ARG(keys_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YEE),keys_,Ynil) != YPfalse)
    ? CHKREF(Ynul)
    : ((CALL2(CALL1(CHKREF(Yassocs_test),FREEREF(1)),FREEREF(0),CALL1(CHKREF(Yhead),keys_)) != YPfalse)
    ? CALL1(CHKREF(Yhead),vals_)
    : (a1=CALL1(CHKREF(Ytail),keys_),a2=CALL1(CHKREF(Ytail),vals_),keys_=a1,vals_=a2,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_elt_492) {
  ARG(key_);
  ARG(x_);
  P fndF255;
  P res, a1, a2;
loop:
  res = (fndF255=FUNSHELL(fun_fnd_491, 3),FUNINIT(fndF255, 3,key_,x_,fndF255),
  CALL2(fndF255,CALL1(CHKREF(Yassocs_keys),x_),CALL1(CHKREF(Yassocs_vals),x_)));
return res;
}


FUNCODEDEF(fun_fnd_493) {
  ARG(vals_);
  ARG(keys_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YEE),keys_,Ynil) != YPfalse)
    ? (CALL2(CHKREF(Yassocs_keys_setter),CALL2(CHKREF(Ypair),FREEREF(0),CALL1(CHKREF(Yassocs_keys),FREEREF(1))),FREEREF(1)),
  CALL2(CHKREF(Yassocs_vals_setter),CALL2(CHKREF(Ypair),FREEREF(2),CALL1(CHKREF(Yassocs_vals),FREEREF(1))),FREEREF(1)),
  FREEREF(2))
    : ((CALL2(CALL1(CHKREF(Yassocs_test),FREEREF(1)),FREEREF(0),CALL1(CHKREF(Yhead),keys_)) != YPfalse)
    ? CALL2(CHKREF(Yhead_setter),FREEREF(2),vals_)
    : (a1=CALL1(CHKREF(Ytail),keys_),a2=CALL1(CHKREF(Ytail),vals_),keys_=a1,vals_=a2,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_elt_setter_494) {
  ARG(key_);
  ARG(x_);
  ARG(val_);
  P fndF256;
  P res, a1, a2, a3;
loop:
  res = (fndF256=FUNSHELL(fun_fnd_493, 4),FUNINIT(fndF256, 4,key_,x_,val_,fndF256),
  CALL2(fndF256,CALL1(CHKREF(Yassocs_keys),x_),CALL1(CHKREF(Yassocs_vals),x_)));
return res;
}


FUNCODEDEF(fun_as_495) {
  ARG(s_);
  ARG(d_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yalter),CALL2(CHKREF(Yfab),d_,CALL1(CHKREF(Ylen),s_)),s_);
return res;
}


FUNCODEDEF(fun_1st_496) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yelt),x_,lit_196);
return res;
}


FUNCODEDEF(fun_2nd_497) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yelt),x_,lit_197);
return res;
}


FUNCODEDEF(fun_3rd_498) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yelt),x_,lit_198);
return res;
}


FUNCODEDEF(fun_last_499) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yelt),x_,CALL2(CHKREF(Y_),CALL1(CHKREF(Ylen),x_),lit_199));
return res;
}


FUNCODEDEF(fun_addX_500) {
  ARG(x_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yadd),c_,x_);
return res;
}


FUNCODEDEF(fun_push_501) {
  ARG(x_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(YaddX),c_,x_);
return res;
}


FUNCODEDEF(fun_pos_502) {
  ARG(v_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yfind_key),CALL2(CHKREF(Ycurry),CHKREF(YEE),v_),x_);
return res;
}


FUNCODEDEF(fun_in_503) {
  ARG(ss_);
  ARG(ds_);
  P res, a1, a2;
loop:
  res = ((((CALL2(CHKREF(Yfin_stateQ),FREEREF(0),ds_) != YPfalse)
    ? YPtrue
    : CALL2(CHKREF(Yfin_stateQ),FREEREF(1),ss_)) != YPfalse)
    ? FREEREF(0)
    : (CALL3(CHKREF(Ynow_elt_setter),CALL2(CHKREF(Ynow_elt),FREEREF(1),ss_),FREEREF(0),ds_),
  (a1=CALL2(CHKREF(Ynxt_state),FREEREF(0),ds_),a2=CALL2(CHKREF(Ynxt_state),FREEREF(1),ss_),ds_=a1,ss_=a2,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_into_504) {
  ARG(below_);
  ARG(from_);
  ARG(src_);
  ARG(dst_);
  P inF257;
  P res, a1, a2, a3, a4;
loop:
  res = (inF257=FUNSHELL(fun_in_503, 3),FUNINIT(inF257, 3,dst_,src_,inF257),
  CALL2(inF257,CALL1(CHKREF(Yini_state),dst_),CALL1(CHKREF(Yini_state),src_)));
return res;
}


FUNCODEDEF(fun_con_505) {
  ARG(sta_);
  ARG(seq_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(Yfin_stateQ),FREEREF(0),sta_) != YPfalse)
    ? CALL2(CHKREF(Yas),FREEREF(0),seq_)
    : (a1=CALL2(CHKREF(Yadd),seq_,CALL2(CHKREF(Ynow_elt),FREEREF(0),sta_)),a2=CALL2(CHKREF(Ynxt_state),FREEREF(0),sta_),seq_=a1,sta_=a2,PNUL));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_rev_506) {
  ARG(x_);
  P conF258;
  P res, a1;
loop:
  res = (conF258=FUNSHELL(fun_con_505, 2),FUNINIT(conF258, 2,x_,conF258),
  CALL2(conF258,Ynil,CALL1(CHKREF(Yini_state),x_)));
return res;
}


FUNCODEDEF(fun_con_y_507) {
  ARG(sta_);
  ARG(seq_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(Yfin_stateQ),FREEREF(0),sta_) != YPfalse)
    ? CALL2(CHKREF(Yas),FREEREF(1),CALL1(CHKREF(YrevX),seq_))
    : (a1=CALL2(CHKREF(Yadd),seq_,CALL2(CHKREF(Ynow_elt),FREEREF(0),sta_)),a2=CALL2(CHKREF(Ynxt_state),FREEREF(0),sta_),seq_=a1,sta_=a2,PNUL));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_con_x_508) {
  ARG(sta_);
  ARG(seq_);
  P con_yF259;
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(Yfin_stateQ),FREEREF(0),sta_) != YPfalse)
    ? (con_yF259=FUNSHELL(fun_con_y_507, 3),FUNINIT(con_yF259, 3,FREEREF(1),FREEREF(0),con_yF259),
  CALL2(con_yF259,seq_,CALL1(CHKREF(Yini_state),FREEREF(1))))
    : (a1=CALL2(CHKREF(Yadd),seq_,CALL2(CHKREF(Ynow_elt),FREEREF(0),sta_)),a2=CALL2(CHKREF(Ynxt_state),FREEREF(0),sta_),seq_=a1,sta_=a2,PNUL));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_cat2_509) {
  ARG(y_);
  ARG(x_);
  P con_xF260;
  P res, a1, a2;
loop:
  res = (con_xF260=FUNSHELL(fun_con_x_508, 3),FUNINIT(con_xF260, 3,x_,y_,con_xF260),
  CALL2(con_xF260,Ynil,CALL1(CHKREF(Yini_state),x_)));
return res;
}


FUNCODEDEF(fun_cat_510) {
  ARG(ss_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yreduce),CHKREF(Ycat2),x_,ss_);
return res;
}


FUNCODEDEF(fun_catX_511) {
  ARG(more_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yapply),CHKREF(Ycat),CALL2(CHKREF(Ypair),x_,more_));
return res;
}


FUNCODEDEF(fun_find_tail_512) {
  ARG(p_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(YemptyQ),CALL1(CHKREF(Ytail),p_)) != YPfalse)
    ? (CALL2(CHKREF(Ytail_setter),FREEREF(0),p_),
  CALL2(FREEREF(2),FREEREF(0),CALL1(CHKREF(Ytail),FREEREF(1))))
    : (a1=CALL1(CHKREF(Ytail),p_),p_=a1,PNUL));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_connect_513) {
  ARG(more_);
  ARG(p_);
  P find_tailF262;
  P xF261;
  P res, a1, a2;
loop:
  res = ((CALL1(CHKREF(YemptyQ),more_) != YPfalse)
    ? FREEREF(0)
    : (xF261=CALL2(CHKREF(Yas),CHKREF(YLlstG),CALL1(CHKREF(Yhead),more_)),((CALL1(CHKREF(YemptyQ),xF261) != YPfalse)
    ? (a1=p_,a2=CALL1(CHKREF(Ytail),more_),p_=a1,more_=a2,PNUL)
    : (find_tailF262=FUNSHELL(fun_find_tail_512, 4),FUNINIT(find_tailF262, 4,xF261,more_,FREEREF(1),find_tailF262),
  CALL1(find_tailF262,p_)))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_find_result_514) {
  ARG(more_);
  ARG(r_);
  P connectF263;
  P res, a1, a2;
loop:
  res = ((CALL1(CHKREF(YemptyQ),more_) != YPfalse)
    ? r_
    : ((CALL1(CHKREF(YemptyQ),r_) != YPfalse)
    ? (a1=CALL2(CHKREF(Yas),CHKREF(YLlstG),CALL1(CHKREF(Yhead),more_)),a2=CALL1(CHKREF(Ytail),more_),r_=a1,more_=a2,PNUL)
    : (connectF263=FUNSHELL(fun_connect_513, 2),FUNINIT(connectF263, 2,r_,connectF263),
  CALL2(connectF263,r_,more_))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_catX_515) {
  ARG(more_);
  ARG(x_);
  P find_resultF264;
  P res, a1, a2;
loop:
  res = (find_resultF264=FUNSHELL(fun_find_result_514, 1),FUNINIT(find_resultF264, 1,find_resultF264),
  CALL2(find_resultF264,x_,more_));
return res;
}


FUNCODEDEF(fun_con_x_516) {
  ARG(sta_);
  ARG(i_);
  ARG(seq_);
  P res, a1, a2, a3;
loop:
  res = ((CALL2(CHKREF(Yfin_stateQ),FREEREF(0),sta_) != YPfalse)
    ? CALL2(CHKREF(Yas),FREEREF(0),CALL1(CHKREF(YrevX),seq_))
    : (a1=((((CALL2(CHKREF(YGE),i_,FREEREF(1)) != YPfalse)
    ? CALL2(CHKREF(YL),i_,FREEREF(2))
    : YPfalse) != YPfalse)
    ? CALL2(CHKREF(Yadd),seq_,CALL2(CHKREF(Ynow_elt),FREEREF(0),sta_))
    : seq_),a2=CALL2(CHKREF(YA),i_,lit_200),a3=CALL2(CHKREF(Ynxt_state),FREEREF(0),sta_),seq_=a1,i_=a2,sta_=a3,PNUL));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_sub_517) {
  ARG(below_);
  ARG(from_);
  ARG(x_);
  P con_xF265;
  P res, a1, a2, a3;
loop:
  res = (con_xF265=FUNSHELL(fun_con_x_516, 4),FUNINIT(con_xF265, 4,x_,from_,below_,con_xF265),
  CALL3(con_xF265,Ynil,lit_201,CALL1(CHKREF(Yini_state),x_)));
return res;
}


FUNCODEDEF(fun_con_518) {
  ARG(sta_);
  ARG(seq_);
  P eF266;
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(Yfin_stateQ),FREEREF(0),sta_) != YPfalse)
    ? CALL2(CHKREF(Yas),FREEREF(0),seq_)
    : (eF266=CALL2(CHKREF(Ynow_elt),FREEREF(0),sta_),(a1=((CALL1(FREEREF(1),eF266) != YPfalse)
    ? CALL2(CHKREF(Yadd),seq_,eF266)
    : seq_),a2=CALL2(CHKREF(Ynxt_state),FREEREF(0),sta_),seq_=a1,sta_=a2,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_pick_519) {
  ARG(x_);
  ARG(test_);
  P conF267;
  P res, a1, a2;
loop:
  res = (conF267=FUNSHELL(fun_con_518, 3),FUNINIT(conF267, 3,x_,test_,conF267),
  CALL2(conF267,Ynil,CALL1(CHKREF(Yini_state),x_)));
return res;
}


FUNCODEDEF(fun_520) {
  ARG(e_);
  ARG(s_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YmemQ),s_,e_) != YPfalse)
    ? s_
    : CALL2(CHKREF(Yadd),s_,e_));
return res;
}


FUNCODEDEF(fun_del_dups_521) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yas),x_,CALL3(CHKREF(Yreduce),fun_520,Ynil,x_));
return res;
}


FUNCODEDEF(fun_522) {
  ARG(e_);
  P res, a1;
loop:
  res = CALL2(CHKREF(YNEE),e_,FREEREF(0));
return res;
}


FUNCODEDEF(fun_del_523) {
  ARG(x_);
  ARG(s_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Ypick),FUNFAB(fun_522, 1,x_),s_);
return res;
}


FUNCODEDEF(fun_524) {
  ARG(e_);
  ARG(s_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Ycat),s_,((CALL1(CHKREF(YemptyQ),s_) != YPfalse)
    ? lit_202
    : lit_203),CALL1(CHKREF(Yto_str),e_));
return res;
}


FUNCODEDEF(fun_vals_to_str_525) {
  ARG(s_);
  P res, a1;
loop:
  res = CALL3(CHKREF(Yreduce),fun_524,lit_204,s_);
return res;
}


FUNCODEDEF(fun_to_str_526) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL3(CHKREF(Ycat),lit_205,CALL1(CHKREF(Yvals_to_str),x_),lit_206);
return res;
}


FUNCODEDEF(fun_pair_527) {
  ARG(t_);
  ARG(h_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLlstG),(P)Ynil),(P)YPpair((P)CHKREF(Yhead),(P)(P)YPpair((P)CHKREF(Ytail),(P)Ynil)),(P)YPpair((P)h_,(P)(P)YPpair((P)t_,(P)Ynil)));
return res;
}


FUNCODEDEF(fun_fab_528) {
  ARG(res_);
  ARG(i_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YG),i_,lit_207) != YPfalse)
    ? (a1=CALL2(CHKREF(Y_),i_,lit_208),a2=CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLlstG),(P)Ynil),(P)YPpair((P)CHKREF(Ytail),(P)Ynil),(P)YPpair((P)res_,(P)Ynil)),i_=a1,res_=a2,PNUL)
    : res_);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_fab_529) {
  ARG(s_);
  ARG(x_);
  P fabF268;
  P res, a1, a2;
loop:
  res = (fabF268=FUNSHELL(fun_fab_528, 1),FUNINIT(fabF268, 1,fabF268),
  CALL2(fabF268,s_,Ynil));
return res;
}


FUNCODEDEF(fun_as_530) {
  ARG(x_);
  ARG(p_);
  P res, a1, a2;
loop:
  res = x_;
return res;
}


FUNCODEDEF(fun_empty_531) {
  ARG(c_);
  P res, a1;
loop:
  res = Ynil;
return res;
}


FUNCODEDEF(fun_build_532) {
  ARG(result_);
  ARG(index_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YL),index_,lit_209) != YPfalse)
    ? result_
    : (a1=CALL2(CHKREF(Y_),index_,lit_210),a2=CALL2(CHKREF(Ypair),CALL2(CHKREF(Yelt),FREEREF(0),index_),result_),index_=a1,result_=a2,PNUL));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_lst_533) {
  ARG(objects_);
  P buildF269;
  P res, a1;
loop:
  res = (buildF269=FUNSHELL(fun_build_532, 2),FUNINIT(buildF269, 2,objects_,buildF269),
  CALL2(buildF269,CALL2(CHKREF(Y_),CALL1(CHKREF(Ylen),objects_),lit_211),Ynil));
return res;
}


FUNCODEDEF(fun_fabs_534) {
  ARG(objects_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yapply),CHKREF(Ylst),objects_);
return res;
}


FUNCODEDEF(fun_sum_535) {
  ARG(x_);
  ARG(count_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YEE),x_,Ynil) != YPfalse)
    ? count_
    : (a1=CALL2(CHKREF(YA),count_,lit_212),a2=CALL1(CHKREF(Ytail),x_),count_=a1,x_=a2,PNUL));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_len_536) {
  ARG(x_);
  P sumF270;
  P res, a1;
loop:
  res = (sumF270=FUNSHELL(fun_sum_535, 1),FUNINIT(sumF270, 1,sumF270),
  CALL2(sumF270,lit_213,x_));
return res;
}


FUNCODEDEF(fun_fnd_537) {
  ARG(x_);
  ARG(count_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YEE),x_,Ynil) != YPfalse)
    ? CHKREF(Ynul)
    : ((CALL2(CHKREF(YEE),count_,FREEREF(0)) != YPfalse)
    ? CALL1(CHKREF(Yhead),x_)
    : (a1=CALL2(CHKREF(YA),count_,lit_214),a2=CALL1(CHKREF(Ytail),x_),count_=a1,x_=a2,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_elt_538) {
  ARG(key_);
  ARG(x_);
  P fndF271;
  P res, a1, a2;
loop:
  res = (fndF271=FUNSHELL(fun_fnd_537, 2),FUNINIT(fndF271, 2,key_,fndF271),
  CALL2(fndF271,lit_215,x_));
return res;
}


FUNCODEDEF(fun_fnd_539) {
  ARG(x_);
  ARG(count_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YEE),x_,Ynil) != YPfalse)
    ? CHKREF(Ynul)
    : ((CALL2(CHKREF(YEE),count_,FREEREF(0)) != YPfalse)
    ? CALL2(CHKREF(Yhead_setter),FREEREF(1),x_)
    : (a1=CALL2(CHKREF(YA),count_,lit_216),a2=CALL1(CHKREF(Ytail),x_),count_=a1,x_=a2,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_elt_setter_540) {
  ARG(key_);
  ARG(x_);
  ARG(z_);
  P fndF272;
  P res, a1, a2, a3;
loop:
  res = (fndF272=FUNSHELL(fun_fnd_539, 3),FUNINIT(fndF272, 3,key_,z_,fndF272),
  CALL2(fndF272,lit_217,x_));
return res;
}


FUNCODEDEF(fun_add_541) {
  ARG(x_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Ypair),x_,c_);
return res;
}


FUNCODEDEF(fun_loop_542) {
  ARG(r_);
  ARG(l_);
  P tF273;
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YEE),l_,Ynil) != YPfalse)
    ? r_
    : (tF273=CALL1(CHKREF(Ytail),l_),(CALL2(CHKREF(Ytail_setter),r_,l_),
  (a1=tF273,a2=l_,l_=a1,r_=a2,PNUL))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_revX_543) {
  ARG(c_);
  P loopF274;
  P res, a1;
loop:
  res = (loopF274=FUNSHELL(fun_loop_542, 1),FUNINIT(loopF274, 1,loopF274),
  CALL2(loopF274,c_,Ynil));
return res;
}


FUNCODEDEF(fun_assq_544) {
  ARG(l_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = ((CALL1(CHKREF(YemptyQ),l_) != YPfalse)
    ? YPfalse
    : ((CALL2(CHKREF(YEE),x_,CALL1(CHKREF(Yhead),CALL1(CHKREF(Yhead),l_))) != YPfalse)
    ? CALL1(CHKREF(Yhead),l_)
    : CALL2(CHKREF(Yassq),x_,CALL1(CHKREF(Ytail),l_))));
return res;
}


FUNCODEDEF(fun_fnd_545) {
  ARG(px_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = ((CALL1(CHKREF(YemptyQ),x_) != YPfalse)
    ? CALL1(CHKREF(Yhead),px_)
    : (a1=CALL1(CHKREF(Ytail),x_),a2=x_,x_=a1,px_=a2,PNUL));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_last_546) {
  ARG(x_);
  P fndF275;
  P res, a1;
loop:
  res = (fndF275=FUNSHELL(fun_fnd_545, 1),FUNINIT(fndF275, 1,fndF275),
  CALL2(fndF275,x_,x_));
return res;
}


FUNCODEDEF(fun_ini_state_547) {
  ARG(c_);
  P res, a1;
loop:
  res = c_;
return res;
}


FUNCODEDEF(fun_fin_stateQ_548) {
  ARG(state_);
  ARG(U_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(YEE),state_,Ynil);
return res;
}


FUNCODEDEF(fun_nxt_state_549) {
  ARG(state_);
  ARG(U_);
  P res, a1, a2;
loop:
  res = CALL1(CHKREF(Ytail),state_);
return res;
}


FUNCODEDEF(fun_now_elt_550) {
  ARG(state_);
  ARG(U_);
  P res, a1, a2;
loop:
  res = CALL1(CHKREF(Yhead),state_);
return res;
}


FUNCODEDEF(fun_now_elt_setter_551) {
  ARG(state_);
  ARG(U_);
  ARG(z_);
  P res, a1, a2, a3;
loop:
  res = CALL2(CHKREF(Yhead_setter),z_,state_);
return res;
}


FUNCODEDEF(fun_fnd_552) {
  ARG(c_);
  ARG(key_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YEE),c_,FREEREF(0)) != YPfalse)
    ? key_
    : (a1=CALL2(CHKREF(YA),key_,lit_218),a2=CALL1(CHKREF(Ytail),c_),key_=a1,c_=a2,PNUL));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_now_key_553) {
  ARG(state_);
  ARG(c_);
  P fndF276;
  P res, a1, a2;
loop:
  res = (fndF276=FUNSHELL(fun_fnd_552, 2),FUNINIT(fndF276, 2,state_,fndF276),
  CALL2(fndF276,lit_219,c_));
return res;
}


FUNCODEDEF(fun_copy_state_554) {
  ARG(state_);
  ARG(U_);
  P res, a1, a2;
loop:
  res = state_;
return res;
}


FUNCODEDEF(fun_ini_state_555) {
  ARG(c_);
  P res, a1;
loop:
  res = lit_220;
return res;
}


FUNCODEDEF(fun_fin_stateQ_556) {
  ARG(state_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(YEE),state_,CALL1(CHKREF(Ylen),c_));
return res;
}


FUNCODEDEF(fun_nxt_state_557) {
  ARG(state_);
  ARG(U_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(YA),state_,lit_221);
return res;
}


FUNCODEDEF(fun_now_elt_558) {
  ARG(state_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yelt),c_,state_);
return res;
}


FUNCODEDEF(fun_now_elt_setter_559) {
  ARG(state_);
  ARG(c_);
  ARG(z_);
  P res, a1, a2, a3;
loop:
  res = CALL3(CHKREF(Yelt_setter),z_,c_,state_);
return res;
}


FUNCODEDEF(fun_now_key_560) {
  ARG(state_);
  ARG(U_);
  P res, a1, a2;
loop:
  res = state_;
return res;
}


FUNCODEDEF(fun_copy_state_561) {
  ARG(state_);
  ARG(U_);
  P res, a1, a2;
loop:
  res = state_;
return res;
}


FUNCODEDEF(fun_empty_562) {
  ARG(c_);
  P res, a1;
loop:
  res = CHKREF(YPvnul);
return res;
}


FUNCODEDEF(Yvec) {
  ARG(objects_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yalter),CALL2(CHKREF(Yfab),CHKREF(YLvecG),CALL1(CHKREF(Ylen),objects_)),objects_);
return res;
}


FUNCODEDEF(fun_fabs_564) {
  ARG(objects_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yapply),CHKREF(Yvec),objects_);
return res;
}


FUNCODEDEF(fun_fab_565) {
  ARG(s_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPvec((P)(P)YPiu((P)s_));
return res;
}


FUNCODEDEF(fun_len_566) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPib((P)(P)YPvlen((P)x_));
return res;
}


FUNCODEDEF(fun_elt_567) {
  ARG(i_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPvelt((P)x_,(P)(P)YPiu((P)i_));
return res;
}


FUNCODEDEF(fun_elt_setter_568) {
  ARG(i_);
  ARG(x_);
  ARG(z_);
  P res, a1, a2, a3;
loop:
  res = (P)YPvelt_setter((P)z_,(P)x_,(P)(P)YPiu((P)i_));
return res;
}


FUNCODEDEF(fun_to_str_569) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL3(CHKREF(Ycat),lit_222,CALL1(CHKREF(Yvals_to_str),x_),lit_223);
return res;
}


FUNCODEDEF(fun_svec_len_570) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ysvec_len));
return res;
}


FUNCODEDEF(fun_svec_len_setter_571) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ysvec_len));
return res;
}


FUNCODEDEF(fun_572) {
  ARG(x_);
  P res, a1;
loop:
  res = lit_224;
return res;
}


FUNCODEDEF(fun_svec_dat_573) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ysvec_dat));
return res;
}


FUNCODEDEF(fun_svec_dat_setter_574) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ysvec_dat));
return res;
}


FUNCODEDEF(fun_575) {
  ARG(x_);
  P res, a1;
loop:
  res = lit_225;
return res;
}


FUNCODEDEF(fun_empty_576) {
  ARG(c_);
  P res, a1;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLsvecG),(P)Ynil),Ynil,Ynil);
return res;
}


FUNCODEDEF(fun_svec_577) {
  ARG(elts_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yalter),CALL2(CHKREF(Yfab),CHKREF(YLsvecG),CALL1(CHKREF(Ylen),elts_)),elts_);
return res;
}


FUNCODEDEF(fun_fabs_578) {
  ARG(elts_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yapply),CHKREF(Ysvec),elts_);
return res;
}


FUNCODEDEF(fun_fab_579) {
  ARG(s_);
  ARG(c_);
  P datF277;
  P res, a1, a2;
loop:
  res = (datF277=CALL2(CHKREF(Yfab),CHKREF(YLvecG),CALL1(CHKREF(Ypower_of_two_ceiling),s_)),CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLsvecG),(P)Ynil),(P)YPpair((P)CHKREF(Ysvec_len),(P)(P)YPpair((P)CHKREF(Ysvec_dat),(P)Ynil)),(P)YPpair((P)s_,(P)(P)YPpair((P)datF277,(P)Ynil))));
return res;
}


FUNCODEDEF(fun_len_580) {
  ARG(c_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ysvec_len),c_);
return res;
}


FUNCODEDEF(fun_fill_581) {
  ARG(i_);
  P tmpF279;
  P tmpF278;
  P res, a1;
loop:
  res = (tmpF278=CALL2(CHKREF(YL),i_,FREEREF(0)),((tmpF278 != YPfalse)
    ? (tmpF279=CALL3(CHKREF(Yelt_setter),CHKREF(Ynul),FREEREF(1),i_),((tmpF279 != YPfalse)
    ? (a1=CALL2(CHKREF(YA),i_,lit_226),i_=a1,PNUL)
    : YPfalse))
    : YPfalse));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_len_setter_582) {
  ARG(c_);
  ARG(new_len_);
  P fillF283;
  P old_lenF282;
  P new_dataF281;
  P datF280;
  P res, a1, a2;
loop:
  res = (datF280=CALL1(CHKREF(Ysvec_dat),c_),((CALL2(CHKREF(YG),new_len_,CALL1(CHKREF(Ylen),datF280)) != YPfalse)
    ? (new_dataF281=CALL2(CHKREF(Yfab),CHKREF(YLvecG),CALL1(CHKREF(Ypower_of_two_ceiling),new_len_)),(CALL2(CHKREF(Yalter),new_dataF281,datF280),
  CALL2(CHKREF(Ysvec_len_setter),new_len_,c_),
  CALL2(CHKREF(Ysvec_dat_setter),new_dataF281,c_)))
    : ((CALL2(CHKREF(YL),new_len_,CALL1(CHKREF(Ylen),c_)) != YPfalse)
    ? (old_lenF282=CALL1(CHKREF(Ylen),c_),(CALL2(CHKREF(Ysvec_len_setter),new_len_,c_),
  (fillF283=FUNSHELL(fun_fill_581, 3),FUNINIT(fillF283, 3,old_lenF282,datF280,fillF283),
  CALL1(fillF283,new_len_))))
    : CALL2(CHKREF(Ysvec_len_setter),new_len_,c_))));
return res;
}


FUNCODEDEF(fun_elt_583) {
  ARG(i_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yelt),CALL1(CHKREF(Ysvec_dat),c_),i_);
return res;
}


FUNCODEDEF(fun_elt_setter_584) {
  ARG(i_);
  ARG(c_);
  ARG(v_);
  P res, a1, a2, a3;
loop:
((CALL2(CHKREF(YGE),i_,CALL1(CHKREF(Ylen),c_)) != YPfalse)
    ? CALL2(CHKREF(Ylen_setter),i_,c_)
    : YPfalse);
  res = CALL3(CHKREF(Yelt_setter),v_,CALL1(CHKREF(Ysvec_dat),c_),i_);
return res;
}


FUNCODEDEF(fun_addX_585) {
  ARG(x_);
  ARG(c_);
  P res, a1, a2;
loop:
CALL3(CHKREF(Yelt_setter),x_,c_,CALL1(CHKREF(Ylen),c_));
  res = c_;
return res;
}


FUNCODEDEF(fun_push_586) {
  ARG(x_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(YaddX),c_,x_);
return res;
}


FUNCODEDEF(fun_pop_587) {
  ARG(c_);
  P xF285;
  P new_lenF284;
  P res, a1;
loop:
  res = (new_lenF284=CALL2(CHKREF(Y_),CALL1(CHKREF(Ylen),c_),lit_227),(xF285=CALL2(CHKREF(Yelt),c_,new_lenF284),(CALL2(CHKREF(Ylen_setter),new_lenF284,c_),
  xF285)));
return res;
}


FUNCODEDEF(fun_to_str_588) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL3(CHKREF(Ycat),lit_228,CALL1(CHKREF(Yvals_to_str),x_),lit_229);
return res;
}


FUNCODEDEF(fun_empty_589) {
  ARG(c_);
  P res, a1;
loop:
  res = CHKREF(YPsnul);
return res;
}


FUNCODEDEF(fun_default_590) {
  ARG(c_);
  P res, a1;
loop:
  res = lit_230;
return res;
}


FUNCODEDEF(fun_fab_591) {
  ARG(s_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPstr((P)(P)YPiu((P)s_));
return res;
}


FUNCODEDEF(fun_str_592) {
  ARG(objects_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yalter),CALL2(CHKREF(Yfab),CHKREF(YLstrG),CALL1(CHKREF(Ylen),objects_)),objects_);
return res;
}


FUNCODEDEF(fun_fabs_593) {
  ARG(objects_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yapply),CHKREF(Ystr),objects_);
return res;
}


FUNCODEDEF(fun_len_594) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPib((P)(P)YPslen((P)x_));
return res;
}


FUNCODEDEF(fun_elt_595) {
  ARG(i_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = (P)YPcb((P)(P)YPselt((P)x_,(P)(P)YPiu((P)i_)));
return res;
}


FUNCODEDEF(fun_elt_setter_596) {
  ARG(i_);
  ARG(x_);
  ARG(z_);
  P res, a1, a2, a3;
loop:
  res = (P)YPselt_setter((P)(P)YPcu((P)z_),(P)x_,(P)(P)YPiu((P)i_));
return res;
}


FUNCODEDEF(fun_to_str_597) {
  ARG(x_);
  P res, a1;
loop:
  res = x_;
return res;
}


FUNCODEDEF(fun_as_598) {
  ARG(s_);
  ARG(U_);
  P res, a1, a2;
loop:
  res = CALL1(CHKREF(Ysym_name),s_);
return res;
}


FUNCODEDEF(fun_as_599) {
  ARG(s_);
  ARG(U_);
  P res, a1, a2;
loop:
  res = CALL1(CHKREF(Yfab_sym),s_);
return res;
}


FUNCODEDEF(fun_L_600) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(YL),CALL1(CHKREF(Ysym_name),x_),CALL1(CHKREF(Ysym_name),y_));
return res;
}


FUNCODEDEF(fun_to_str_601) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ysym_name),x_);
return res;
}


FUNCODEDEF(fun_identity_602) {
  ARG(x_);
  P res, a1;
loop:
  res = x_;
return res;
}


FUNCODEDEF(fun_603) {
  ARG(args_);
  P res, a1;
loop:
  res = CALL1(FREEREF(1),CALL2(CHKREF(Yapply),FREEREF(0),args_));
return res;
}


FUNCODEDEF(fun_compose_604) {
  ARG(fy_);
  ARG(fx_);
  P res, a1, a2;
loop:
  res = FUNFAB(fun_603, 2,fy_,fx_);
return res;
}


FUNCODEDEF(fun_605) {
  ARG(args_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yapply),FREEREF(0),CALL2(CHKREF(Ycat),args_,FREEREF(1)));
return res;
}


FUNCODEDEF(fun_rcurry_606) {
  ARG(curried_);
  ARG(f_);
  P res, a1, a2;
loop:
  res = FUNFAB(fun_605, 2,f_,curried_);
return res;
}


FUNCODEDEF(fun_607) {
  ARG(args_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yapply),FREEREF(0),CALL2(CHKREF(Ycat),FREEREF(1),args_));
return res;
}


FUNCODEDEF(fun_curry_608) {
  ARG(curried_);
  ARG(f_);
  P res, a1, a2;
loop:
  res = FUNFAB(fun_607, 2,f_,curried_);
return res;
}


FUNCODEDEF(fun_609) {
  ARG(args_);
  P res, a1;
loop:
  res = FREEREF(0);
return res;
}


FUNCODEDEF(fun_always_610) {
  ARG(x_);
  P res, a1;
loop:
  res = FUNFAB(fun_609, 1,x_);
return res;
}


FUNCODEDEF(fun_default_handler_611) {
  ARG(c_);
  P res, a1;
loop:
  res = YPfalse;
return res;
}


FUNCODEDEF(fun_condition_message_612) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ycondition_message));
return res;
}


FUNCODEDEF(fun_condition_message_setter_613) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ycondition_message));
return res;
}


FUNCODEDEF(fun_614) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_condition_arguments_615) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ycondition_arguments));
return res;
}


FUNCODEDEF(fun_condition_arguments_setter_616) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ycondition_arguments));
return res;
}


FUNCODEDEF(fun_617) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_default_handler_618) {
  ARG(c_);
  P res, a1;
loop:
((CALL2(CHKREF(YisaQ),c_,CHKREF(YLsimple_conditionG)) != YPfalse)
    ? CALL2(CHKREF(Yapply),CALL3(CHKREF(Ycurry),CHKREF(Yformat),CHKREF(Yout),CALL1(CHKREF(Ycondition_message),c_)),CALL1(CHKREF(Ycondition_arguments),c_))
    : YPfalse);
  res = (P)YPinvoke_debugger((P)c_);
return res;
}


FUNCODEDEF(fun_handler_function_619) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yhandler_function));
return res;
}


FUNCODEDEF(fun_handler_function_setter_620) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yhandler_function));
return res;
}


FUNCODEDEF(fun_621) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(Ymake_handler) {
  ARG(f_);
  P res, a1;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLhandlerG),(P)Ynil),(P)YPpair((P)CHKREF(Yhandler_function),(P)Ynil),(P)YPpair((P)f_,(P)Ynil));
return res;
}


FUNCODEDEF(Yhandler_matchesQ) {
  ARG(condition_);
  ARG(handler_);
  P res, a1, a2;
loop:
  res = YPtrue;
return res;
}


FUNCODEDEF(fun_624) {
  ARG(UresumeU_);
  P res, a1;
loop:
CALL2(FREEREF(1),FREEREF(0),UresumeU_);
  res = CALL0(FREEREF(2));
return res;
}


FUNCODEDEF(fun_Uhandler_functionU_625) {
  ARG(Unext_handlerU_);
  ARG(condition_);
  P res, a1, a2;
loop:
((YTcurrent_handlersT = FREEREF(0)));
  res = with_exit(FUNFAB(fun_624, 3,condition_,FREEREF(1),Unext_handlerU_));
return res;
}


FUNCODEDEF(fun_626) {
  P res;
loop:
  res = CALL0(FREEREF(0));
return res;
}


FUNCODEDEF(fun_627) {
  P res;
loop:
  res = ((YTcurrent_handlersT = FREEREF(0)));
return res;
}


FUNCODEDEF(fun_628) {
  ARG(Uunwind_exceptionU_);
  P Uhandler_functionUF287;
  P Uoriginal_handlersUF286;
  P res, a1;
loop:
  res = (Uoriginal_handlersUF286=CHKREF(YTcurrent_handlersT),(Uhandler_functionUF287=FUNSHELL(fun_Uhandler_functionU_625, 2),FUNINIT(Uhandler_functionUF287, 2,Uoriginal_handlersUF286,FREEREF(0)),
  (((YTcurrent_handlersT = CALL2(CHKREF(Ypair),CALL1(CHKREF(Ymake_handler),Uhandler_functionUF287),CHKREF(YTcurrent_handlersT)))),
  with_cleanup(FUNFAB(fun_626, 1,FREEREF(1)), FUNFAB(fun_627, 1,Uoriginal_handlersUF286)))));
return res;
}


P YPwith_monitor(P user_handler_, P main_fun_) {
  P res, a1, a2;
loop:
  res = with_exit(FUNFAB(fun_628, 2,user_handler_,main_fun_));
return res;
}


FUNCODEDEF(fun_630) {
  P res;
loop:
  res = CALL1(FREEREF(1),FREEREF(0));
return res;
}


FUNCODEDEF(fun_search_631) {
  ARG(handlers_);
  P remainingF289;
  P handlerF288;
  P res, a1;
loop:
  res = ((CALL1(CHKREF(YemptyQ),handlers_) != YPfalse)
    ? CALL1(CHKREF(Ydefault_handler),FREEREF(0))
    : (handlerF288=CALL1(CHKREF(Yhead),handlers_),(remainingF289=CALL1(CHKREF(Ytail),handlers_),((CALL2(CHKREF(Yhandler_matchesQ),handlerF288,FREEREF(0)) != YPfalse)
    ? CALL2(CALL1(CHKREF(Yhandler_function),handlerF288),FREEREF(0),FUNFAB(fun_630, 2,remainingF289,FREEREF(1)))
    : (a1=remainingF289,handlers_=a1,PNUL)))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_sig_632) {
  ARG(args_);
  ARG(condition_);
  P searchF290;
  P res, a1, a2;
loop:
  res = (searchF290=FUNSHELL(fun_search_631, 2),FUNINIT(searchF290, 2,condition_,searchF290),
  CALL1(searchF290,CHKREF(YTcurrent_handlersT)));
return res;
}


FUNCODEDEF(fun_sig_633) {
  ARG(args_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CALL1(CHKREF(Ysig),CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLsimple_conditionG),(P)Ynil),(P)YPpair((P)CHKREF(Ycondition_message),(P)(P)YPpair((P)CHKREF(Ycondition_arguments),(P)Ynil)),(P)YPpair((P)c_,(P)(P)YPpair((P)args_,(P)Ynil))));
return res;
}


FUNCODEDEF(fun_error_634) {
  ARG(args_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CALL1(CHKREF(Ysig),c_);
return res;
}


FUNCODEDEF(fun_error_635) {
  ARG(args_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CALL1(CHKREF(Yerror),CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLsimple_errorG),(P)Ynil),(P)YPpair((P)CHKREF(Ycondition_message),(P)(P)YPpair((P)CHKREF(Ycondition_arguments),(P)Ynil)),(P)YPpair((P)c_,(P)(P)YPpair((P)args_,(P)Ynil))));
return res;
}


FUNCODEDEF(Ywrong_number_arguments_error) {
  ARG(n_);
  ARG(fun_);
  P res, a1, a2;
loop:
  res = CALLN(CHKREF(Yerror),4,lit_231,fun_,n_,CALL1(CHKREF(Yfun_arity),fun_));
return res;
}


FUNCODEDEF(Yunknown_function_error) {
  ARG(fun_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yerror),lit_232,fun_);
return res;
}


FUNCODEDEF(Ytype_error) {
  ARG(type_);
  ARG(arg_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yerror),lit_233,arg_,type_);
return res;
}


FUNCODEDEF(Ylocative_value) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPlocative_value((P)x_);
return res;
}


FUNCODEDEF(Ylocative_value_setter) {
  ARG(x_);
  ARG(z_);
  P res, a1, a2;
loop:
  res = (P)YPlocative_value_setter((P)z_,(P)x_);
return res;
}


FUNCODEDEF(Yapp_filename) {
  P res;
loop:
  res = (P)YPapp_filename();
return res;
}


FUNCODEDEF(Yapp_args) {
  P res;
loop:
  res = (P)YPapp_args();
return res;
}


FUNCODEDEF(fun_sym_name_643) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPsym_nam((P)x_);
return res;
}


FUNCODEDEF(Yaddress_of) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPib((P)x_);
return res;
}


FUNCODEDEF(fun_Pvacated_645) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YPvacated));
return res;
}


FUNCODEDEF(fun_Pvacated_setter_646) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YPvacated));
return res;
}


FUNCODEDEF(fun_647) {
  ARG(x_);
  P res, a1;
loop:
  res = lit_235;
return res;
}


FUNCODEDEF(fun_Pprimary_modulus_648) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YPprimary_modulus));
return res;
}


FUNCODEDEF(fun_Pprimary_modulus_setter_649) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YPprimary_modulus));
return res;
}


FUNCODEDEF(fun_650) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_Psecondary_modulus_651) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YPsecondary_modulus));
return res;
}


FUNCODEDEF(fun_Psecondary_modulus_setter_652) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YPsecondary_modulus));
return res;
}


FUNCODEDEF(fun_653) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_Pn_buckets_654) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YPn_buckets));
return res;
}


FUNCODEDEF(fun_Pn_buckets_setter_655) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YPn_buckets));
return res;
}


FUNCODEDEF(fun_656) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_Pbucket_depth_657) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YPbucket_depth));
return res;
}


FUNCODEDEF(fun_Pbucket_depth_setter_658) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YPbucket_depth));
return res;
}


FUNCODEDEF(fun_659) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_Pdata_660) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YPdata));
return res;
}


FUNCODEDEF(fun_Pdata_setter_661) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YPdata));
return res;
}


FUNCODEDEF(fun_662) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_Pgc_state_663) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YPgc_state));
return res;
}


FUNCODEDEF(fun_Pgc_state_setter_664) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YPgc_state));
return res;
}


FUNCODEDEF(fun_665) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(Yfab_table_vector) {
  ARG(secondary_modulus_);
  ARG(primary_modulus_);
  ARG(bucket_depth_);
  ARG(n_buckets_);
  ARG(fill_value_);
  ARG(size_);
  P vF291;
  P res, a1, a2, a3, a4, a5, a6;
loop:
  res = (vF291=CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLsimple_table_vectorG),(P)Ynil),(P)YPpair((P)CHKREF(YPn_buckets),(P)(P)YPpair((P)CHKREF(YPbucket_depth),(P)(P)YPpair((P)CHKREF(YPprimary_modulus),(P)(P)YPpair((P)CHKREF(YPsecondary_modulus),(P)Ynil)))),(P)YPpair((P)n_buckets_,(P)(P)YPpair((P)bucket_depth_,(P)(P)YPpair((P)primary_modulus_,(P)(P)YPpair((P)secondary_modulus_,(P)Ynil))))),(CALL2(CHKREF(YPdata_setter),CALL2(CHKREF(Yfill),CALL2(CHKREF(Yfab),CHKREF(YLvecG),size_),fill_value_),vF291),
  vF291));
return res;
}


FUNCODEDEF(fun_elt_667) {
  ARG(index_);
  ARG(vector_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yelt),CALL1(CHKREF(YPdata),vector_),index_);
return res;
}


FUNCODEDEF(fun_elt_setter_668) {
  ARG(index_);
  ARG(vector_);
  ARG(new_value_);
  P res, a1, a2, a3;
loop:
  res = CALL3(CHKREF(Yelt_setter),new_value_,CALL1(CHKREF(YPdata),vector_),index_);
return res;
}


FUNCODEDEF(fun_clrX_669) {
  ARG(fill_);
  ARG(vector_);
  P res, a1, a2;
loop:
CALL2(fill_,CALL1(CHKREF(YPdata),vector_),fill_);
  res = CALL2(CHKREF(YPvacated_setter),lit_236,vector_);
return res;
}


FUNCODEDEF(Ytrace) {
  ARG(args_);
  ARG(msg_);
  ARG(port_);
  P tmpF292;
  P res, a1, a2, a3;
loop:
  res = (tmpF292=CHKREF(YTdebug_tablesQT),((tmpF292 != YPfalse)
    ? CALL2(CHKREF(Yapply),CHKREF(Yformat),CALL2(CHKREF(Ycat),CALL2(CHKREF(Ylst),port_,msg_),args_))
    : YPfalse));
return res;
}


FUNCODEDEF(fun_table_growth_factor_671) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ytable_growth_factor));
return res;
}


FUNCODEDEF(fun_table_growth_factor_setter_672) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ytable_growth_factor));
return res;
}


FUNCODEDEF(fun_673) {
  ARG(x_);
  P res, a1;
loop:
  res = lit_237;
return res;
}


FUNCODEDEF(fun_table_growth_threshold_674) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ytable_growth_threshold));
return res;
}


FUNCODEDEF(fun_table_growth_threshold_setter_675) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ytable_growth_threshold));
return res;
}


FUNCODEDEF(fun_676) {
  ARG(x_);
  P res, a1;
loop:
  res = lit_238;
return res;
}


FUNCODEDEF(fun_table_shrink_threshold_677) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ytable_shrink_threshold));
return res;
}


FUNCODEDEF(fun_table_shrink_threshold_setter_678) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ytable_shrink_threshold));
return res;
}


FUNCODEDEF(fun_679) {
  ARG(x_);
  P res, a1;
loop:
  res = lit_239;
return res;
}


FUNCODEDEF(fun_Pcount_680) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YPcount));
return res;
}


FUNCODEDEF(fun_Pcount_setter_681) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YPcount));
return res;
}


FUNCODEDEF(fun_682) {
  ARG(x_);
  P res, a1;
loop:
  res = lit_240;
return res;
}


FUNCODEDEF(fun_Pvector_683) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YPvector));
return res;
}


FUNCODEDEF(fun_Pvector_setter_684) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YPvector));
return res;
}


FUNCODEDEF(fun_685) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_table_protocol_686) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ytup),CHKREF(YEE),CHKREF(Yid_hash));
return res;
}


FUNCODEDEF(Yhash_moduli) {
  ARG(secondary_);
  ARG(primary_);
  ARG(hash_);
  P res, a1, a2, a3;
loop:
  res = CALL2(CHKREF(Ytup),CALL2(CHKREF(Ymodulo),hash_,primary_),CALL2(CHKREF(YA),CALL2(CHKREF(Ymodulo),hash_,secondary_),lit_243));
return res;
}


FUNCODEDEF(fun_fab_688) {
  ARG(size_);
  ARG(type_);
  P tableF298;
  P tup13F297;
  P bucket_depthF296;
  P tup13F295;
  P n_bucketsF294;
  P tup13F293;
  P res, a1, a2;
loop:
  res = (tup13F293=CALL1(CHKREF(Ychoose_table_geometry),size_),(n_bucketsF294=CALL1(CHKREF(Yhead),tup13F293),(tup13F295=CALL1(CHKREF(Ytail),tup13F293),(bucket_depthF296=CALL1(CHKREF(Yhead),tup13F295),(tup13F297=CALL1(CHKREF(Ytail),tup13F295),(tableF298=CALL3(CHKREF(YPisa),(P)YPpair((P)type_,(P)Ynil),Ynil,Ynil),(CALL2(CHKREF(YPvector_setter),CALLN(CHKREF(Yfab_table_vector),6,CALL2(CHKREF(YT),n_bucketsF294,CALL2(CHKREF(YT),bucket_depthF296,lit_244)),CHKREF(YDempty_cell_marker),n_bucketsF294,bucket_depthF296,n_bucketsF294,CALL2(CHKREF(Y_),n_bucketsF294,lit_245)),tableF298),
  tableF298)))))));
return res;
}


FUNCODEDEF(fun_inner_689) {
  ARG(this_bucket_raw_index_);
  ARG(i_);
  P this_keyF299;
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YL),i_,FREEREF(0)) != YPfalse)
    ? (this_keyF299=CALL2(CHKREF(Yelt),FREEREF(1),this_bucket_raw_index_),(((CALL2(CHKREF(YEE),this_keyF299,CHKREF(YDempty_cell_marker)) != YPfalse)
    ? CALL1(FREEREF(2),CHKREF(Ynul))
    : YPfalse),
  ((CALL2(FREEREF(4),FREEREF(3),this_keyF299) != YPfalse)
    ? CALL1(FREEREF(2),CALL2(CHKREF(Yelt),FREEREF(1),CALL2(CHKREF(YA),this_bucket_raw_index_,FREEREF(0))))
    : YPfalse),
  (a1=CALL2(CHKREF(YA),i_,lit_247),a2=CALL2(CHKREF(YA),this_bucket_raw_index_,lit_248),i_=a1,this_bucket_raw_index_=a2,PNUL)))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_outer_690) {
  ARG(probes_);
  P innerF301;
  P indexF300;
  P res, a1;
loop:
  res = ((CALL2(CHKREF(YL),probes_,FREEREF(0)) != YPfalse)
    ? (indexF300=CALL2(CHKREF(YT),BOXVAL(FREEREF(1)),CALL2(CHKREF(YT),FREEREF(2),lit_246)),((innerF301=FUNSHELL(fun_inner_689, 6),FUNINIT(innerF301, 6,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6),innerF301),
  CALL2(innerF301,lit_249,indexF300)),
  (BOXVAL(FREEREF(1))=CALL2(CHKREF(Y_),BOXVAL(FREEREF(1)),FREEREF(7))),
  ((CALL1(CHKREF(YnegQ),BOXVAL(FREEREF(1))) != YPfalse)
    ? (BOXVAL(FREEREF(1))=CALL2(CHKREF(YA),BOXVAL(FREEREF(1)),FREEREF(0)))
    : YPfalse),
  (a1=CALL2(CHKREF(YA),probes_,lit_250),probes_=a1,PNUL)))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_691) {
  ARG(return_);
  P outerF320;
  P tup16F319;
  P bucket_offsetF318;
  P tup16F317;
  P bucket_indexF316;
  P tup16F315;
  P bucket_depthF314;
  P n_bucketsF313;
  P vectorF312;
  P tup15F311;
  P stateF310;
  P tup15F309;
  P hashF308;
  P tup15F307;
  P tup14F306;
  P hash_functionF305;
  P tup14F304;
  P test_functionF303;
  P tup14F302;
  P res, a1;
loop:
  res = (tup14F302=CALL1(CHKREF(Ytable_protocol),FREEREF(0)),(test_functionF303=CALL1(CHKREF(Yhead),tup14F302),(tup14F304=CALL1(CHKREF(Ytail),tup14F302),(hash_functionF305=CALL1(CHKREF(Yhead),tup14F304),(tup14F306=CALL1(CHKREF(Ytail),tup14F304),(tup15F307=CALL1(hash_functionF305,FREEREF(1)),(hashF308=CALL1(CHKREF(Yhead),tup15F307),(tup15F309=CALL1(CHKREF(Ytail),tup15F307),(stateF310=CALL1(CHKREF(Yhead),tup15F309),(tup15F311=CALL1(CHKREF(Ytail),tup15F309),(vectorF312=CALL1(CHKREF(YPvector),FREEREF(0)),(n_bucketsF313=CALL1(CHKREF(YPn_buckets),vectorF312),(bucket_depthF314=CALL1(CHKREF(YPbucket_depth),vectorF312),(tup16F315=CALL3(CHKREF(Yhash_moduli),hashF308,CALL1(CHKREF(YPprimary_modulus),vectorF312),CALL1(CHKREF(YPsecondary_modulus),vectorF312)),(bucket_indexF316=CALL1(CHKREF(Yhead),tup16F315),(bucket_indexF316= BOXFAB(bucket_indexF316),
  (tup16F317=CALL1(CHKREF(Ytail),tup16F315),(bucket_offsetF318=CALL1(CHKREF(Yhead),tup16F317),(tup16F319=CALL1(CHKREF(Ytail),tup16F317),((outerF320=FUNSHELL(fun_outer_690, 9),FUNINIT(outerF320, 9,n_bucketsF313,bucket_indexF316,bucket_depthF314,vectorF312,return_,FREEREF(1),test_functionF303,bucket_offsetF318,outerF320),
  CALL1(outerF320,lit_251)),
  CALL1(CHKREF(Yerror),lit_252)))))))))))))))))))));
return res;
}


FUNCODEDEF(fun_elt_692) {
  ARG(key_);
  ARG(table_);
  P res, a1, a2;
loop:
  res = with_exit(FUNFAB(fun_691, 2,table_,key_));
return res;
}


FUNCODEDEF(fun_inner_693) {
  ARG(this_bucket_raw_index_);
  ARG(i_);
  P indexF323;
  P this_keyF322;
  P vacancy_indexF321;
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YL),i_,FREEREF(0)) != YPfalse)
    ? (vacancy_indexF321=YPfalse,(vacancy_indexF321= BOXFAB(vacancy_indexF321),
  (this_keyF322=CALL2(CHKREF(Yelt),BOXVAL(FREEREF(1)),this_bucket_raw_index_),(((CALL2(CHKREF(YEE),this_keyF322,CHKREF(YDempty_cell_marker)) != YPfalse)
    ? (indexF323=((BOXVAL(vacancy_indexF321) != YPfalse)
    ? (CALL2(CHKREF(YPvacated_setter),CALL2(CHKREF(Y_),CALL1(CHKREF(YPvacated),BOXVAL(FREEREF(1))),lit_254),BOXVAL(FREEREF(1))),
  BOXVAL(vacancy_indexF321))
    : this_bucket_raw_index_),(CALL3(CHKREF(Yelt_setter),FREEREF(2),BOXVAL(FREEREF(1)),indexF323),
  CALL3(CHKREF(Yelt_setter),FREEREF(3),BOXVAL(FREEREF(1)),CALL2(CHKREF(YA),indexF323,FREEREF(0))),
  CALL2(CHKREF(YPcount_setter),CALL2(CHKREF(YA),CALL1(CHKREF(YPcount),FREEREF(4)),lit_255),FREEREF(4)),
  CALL1(FREEREF(5),FREEREF(3))))
    : ((CALL2(CHKREF(YEE),this_keyF322,CHKREF(YDvacated_cell_marker)) != YPfalse)
    ? ((CALL1(CHKREF(Ynot),BOXVAL(vacancy_indexF321)) != YPfalse)
    ? (BOXVAL(vacancy_indexF321)=this_bucket_raw_index_)
    : YPfalse)
    : ((CALL2(FREEREF(6),FREEREF(2),this_keyF322) != YPfalse)
    ? (CALL3(CHKREF(Yelt_setter),FREEREF(3),BOXVAL(FREEREF(1)),CALL2(CHKREF(YA),this_bucket_raw_index_,FREEREF(0))),
  CALL1(FREEREF(5),FREEREF(3)))
    : YPfalse))),
  (a1=CALL2(CHKREF(YA),i_,lit_256),a2=CALL2(CHKREF(YA),this_bucket_raw_index_,lit_257),i_=a1,this_bucket_raw_index_=a2,PNUL)))))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_outer_694) {
  ARG(probes_);
  P innerF325;
  P indexF324;
  P res, a1;
loop:
  res = ((CALL2(CHKREF(YL),probes_,FREEREF(0)) != YPfalse)
    ? (indexF324=CALL2(CHKREF(YT),BOXVAL(FREEREF(1)),CALL2(CHKREF(YT),FREEREF(2),lit_253)),((innerF325=FUNSHELL(fun_inner_693, 8),FUNINIT(innerF325, 8,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6),FREEREF(7),FREEREF(8),innerF325),
  CALL2(innerF325,lit_258,indexF324)),
  (BOXVAL(FREEREF(1))=CALL2(CHKREF(Y_),BOXVAL(FREEREF(1)),FREEREF(9))),
  ((CALL1(CHKREF(YnegQ),BOXVAL(FREEREF(1))) != YPfalse)
    ? (BOXVAL(FREEREF(1))=CALL2(CHKREF(YA),BOXVAL(FREEREF(1)),FREEREF(0)))
    : YPfalse),
  (a1=CALL2(CHKREF(YA),probes_,lit_259),probes_=a1,PNUL)))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_695) {
  ARG(return_);
  P outerF343;
  P tup19F342;
  P bucket_offsetF341;
  P tup19F340;
  P bucket_indexF339;
  P tup19F338;
  P n_bucketsF337;
  P bucket_depthF336;
  P tup18F335;
  P stateF334;
  P tup18F333;
  P hashF332;
  P tup18F331;
  P tup17F330;
  P hash_functionF329;
  P tup17F328;
  P test_functionF327;
  P tup17F326;
  P res, a1;
loop:
  res = (tup17F326=CALL1(CHKREF(Ytable_protocol),FREEREF(0)),(test_functionF327=CALL1(CHKREF(Yhead),tup17F326),(tup17F328=CALL1(CHKREF(Ytail),tup17F326),(hash_functionF329=CALL1(CHKREF(Yhead),tup17F328),(tup17F330=CALL1(CHKREF(Ytail),tup17F328),(tup18F331=CALL1(hash_functionF329,FREEREF(1)),(hashF332=CALL1(CHKREF(Yhead),tup18F331),(tup18F333=CALL1(CHKREF(Ytail),tup18F331),(stateF334=CALL1(CHKREF(Yhead),tup18F333),(tup18F335=CALL1(CHKREF(Ytail),tup18F333),(bucket_depthF336=CALL1(CHKREF(YPbucket_depth),BOXVAL(FREEREF(2))),(n_bucketsF337=CALL1(CHKREF(YPn_buckets),BOXVAL(FREEREF(2))),(tup19F338=CALL3(CHKREF(Yhash_moduli),hashF332,CALL1(CHKREF(YPprimary_modulus),BOXVAL(FREEREF(2))),CALL1(CHKREF(YPsecondary_modulus),BOXVAL(FREEREF(2)))),(bucket_indexF339=CALL1(CHKREF(Yhead),tup19F338),(bucket_indexF339= BOXFAB(bucket_indexF339),
  (tup19F340=CALL1(CHKREF(Ytail),tup19F338),(bucket_offsetF341=CALL1(CHKREF(Yhead),tup19F340),(tup19F342=CALL1(CHKREF(Ytail),tup19F340),((outerF343=FUNSHELL(fun_outer_694, 11),FUNINIT(outerF343, 11,n_bucketsF337,bucket_indexF339,bucket_depthF336,FREEREF(2),FREEREF(1),FREEREF(3),FREEREF(0),return_,test_functionF327,bucket_offsetF341,outerF343),
  CALL1(outerF343,lit_260)),
  CALL1(CHKREF(Yerror),lit_261))))))))))))))))))));
return res;
}


FUNCODEDEF(fun_elt_setter_696) {
  ARG(key_);
  ARG(table_);
  ARG(value_);
  P vectorF344;
  P res, a1, a2, a3;
loop:
  res = (vectorF344=CALL1(CHKREF(YPvector),table_),(vectorF344= BOXFAB(vectorF344),
  (((CALL2(CHKREF(YG),CALL1(CHKREF(YPcount),table_),CALL2(CHKREF(YT),CALL2(CHKREF(YT),CALL1(CHKREF(YPn_buckets),BOXVAL(vectorF344)),CALL1(CHKREF(YPbucket_depth),BOXVAL(vectorF344))),CALL1(CHKREF(Ytable_growth_threshold),table_))) != YPfalse)
    ? (BOXVAL(vectorF344)=CALL1(CHKREF(YPvector),CALL1(CHKREF(Ygrow_table),table_)))
    : ((CALL2(CHKREF(YG),CALL2(CHKREF(YA),CALL1(CHKREF(YPcount),table_),CALL1(CHKREF(YPvacated),BOXVAL(vectorF344))),CALL2(CHKREF(YT),CALL2(CHKREF(YT),CALL1(CHKREF(YPn_buckets),BOXVAL(vectorF344)),CALL1(CHKREF(YPbucket_depth),BOXVAL(vectorF344))),CALL1(CHKREF(Ytable_growth_threshold),table_))) != YPfalse)
    ? (BOXVAL(vectorF344)=CALL1(CHKREF(YPvector),CALL1(CHKREF(Yrehash_table),table_)))
    : YPfalse)),
  with_exit(FUNFAB(fun_695, 4,table_,key_,vectorF344,value_)))));
return res;
}


FUNCODEDEF(fun_inner_697) {
  ARG(this_bucket_raw_index_);
  ARG(i_);
  P tmpF346;
  P this_keyF345;
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YL),i_,FREEREF(0)) != YPfalse)
    ? (this_keyF345=CALL2(CHKREF(Yelt),FREEREF(1),this_bucket_raw_index_),(((CALL2(CHKREF(YEE),this_keyF345,CHKREF(YDempty_cell_marker)) != YPfalse)
    ? CALL1(FREEREF(2),YPfalse)
    : YPfalse),
  (((tmpF346=CALL2(CHKREF(YNEE),this_keyF345,CHKREF(YDvacated_cell_marker)),((tmpF346 != YPfalse)
    ? CALL2(FREEREF(4),FREEREF(3),this_keyF345)
    : YPfalse)) != YPfalse)
    ? (CALL3(CHKREF(Yelt_setter),CHKREF(YDvacated_cell_marker),FREEREF(1),this_bucket_raw_index_),
  CALL2(CHKREF(YPcount_setter),CALL2(CHKREF(Y_),CALL1(CHKREF(YPcount),FREEREF(5)),lit_263),FREEREF(5)),
  CALL2(CHKREF(YPvacated_setter),CALL2(CHKREF(YA),CALL1(CHKREF(YPvacated),FREEREF(1)),lit_264),FREEREF(1)),
  CALL1(FREEREF(2),YPtrue))
    : YPfalse),
  (a1=CALL2(CHKREF(YA),i_,lit_265),a2=CALL2(CHKREF(YA),this_bucket_raw_index_,lit_266),i_=a1,this_bucket_raw_index_=a2,PNUL)))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_outer_698) {
  ARG(probes_);
  P innerF348;
  P indexF347;
  P res, a1;
loop:
  res = ((CALL2(CHKREF(YL),probes_,FREEREF(0)) != YPfalse)
    ? (indexF347=CALL2(CHKREF(YT),BOXVAL(FREEREF(1)),CALL2(CHKREF(YT),FREEREF(2),lit_262)),((innerF348=FUNSHELL(fun_inner_697, 7),FUNINIT(innerF348, 7,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6),FREEREF(7),innerF348),
  CALL2(innerF348,lit_267,indexF347)),
  (BOXVAL(FREEREF(1))=CALL2(CHKREF(Y_),BOXVAL(FREEREF(1)),FREEREF(8))),
  ((CALL1(CHKREF(YnegQ),BOXVAL(FREEREF(1))) != YPfalse)
    ? (BOXVAL(FREEREF(1))=CALL2(CHKREF(YA),BOXVAL(FREEREF(1)),FREEREF(0)))
    : YPfalse),
  (a1=CALL2(CHKREF(YA),probes_,lit_268),probes_=a1,PNUL)))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_699) {
  ARG(return_);
  P outerF367;
  P tup22F366;
  P bucket_offsetF365;
  P tup22F364;
  P bucket_indexF363;
  P tup22F362;
  P bucket_depthF361;
  P n_bucketsF360;
  P vectorF359;
  P tup21F358;
  P stateF357;
  P tup21F356;
  P hashF355;
  P tup21F354;
  P tup20F353;
  P hash_functionF352;
  P tup20F351;
  P test_functionF350;
  P tup20F349;
  P res, a1;
loop:
  res = (tup20F349=CALL1(CHKREF(Ytable_protocol),FREEREF(0)),(test_functionF350=CALL1(CHKREF(Yhead),tup20F349),(tup20F351=CALL1(CHKREF(Ytail),tup20F349),(hash_functionF352=CALL1(CHKREF(Yhead),tup20F351),(tup20F353=CALL1(CHKREF(Ytail),tup20F351),(tup21F354=CALL1(hash_functionF352,FREEREF(1)),(hashF355=CALL1(CHKREF(Yhead),tup21F354),(tup21F356=CALL1(CHKREF(Ytail),tup21F354),(stateF357=CALL1(CHKREF(Yhead),tup21F356),(tup21F358=CALL1(CHKREF(Ytail),tup21F356),(vectorF359=CALL1(CHKREF(YPvector),FREEREF(0)),(n_bucketsF360=CALL1(CHKREF(YPn_buckets),vectorF359),(bucket_depthF361=CALL1(CHKREF(YPbucket_depth),vectorF359),(tup22F362=CALL3(CHKREF(Yhash_moduli),hashF355,CALL1(CHKREF(YPprimary_modulus),vectorF359),CALL1(CHKREF(YPsecondary_modulus),vectorF359)),(bucket_indexF363=CALL1(CHKREF(Yhead),tup22F362),(bucket_indexF363= BOXFAB(bucket_indexF363),
  (tup22F364=CALL1(CHKREF(Ytail),tup22F362),(bucket_offsetF365=CALL1(CHKREF(Yhead),tup22F364),(tup22F366=CALL1(CHKREF(Ytail),tup22F364),((outerF367=FUNSHELL(fun_outer_698, 10),FUNINIT(outerF367, 10,n_bucketsF360,bucket_indexF363,bucket_depthF361,vectorF359,return_,FREEREF(1),test_functionF350,FREEREF(0),bucket_offsetF365,outerF367),
  CALL1(outerF367,lit_269)),
  CALL1(CHKREF(Yerror),lit_270)))))))))))))))))))));
return res;
}


FUNCODEDEF(fun_del_key_700) {
  ARG(key_);
  ARG(table_);
  P res, a1, a2;
loop:
  res = with_exit(FUNFAB(fun_699, 2,table_,key_));
return res;
}


FUNCODEDEF(fun_inner_701) {
  ARG(i_);
  P indexF370;
  P tmpF369;
  P keyF368;
  P res, a1;
loop:
  res = ((CALL2(CHKREF(YL),i_,FREEREF(0)) != YPfalse)
    ? ((keyF368=CALL2(CHKREF(Yelt),FREEREF(1),CALL2(CHKREF(YA),i_,CALL2(CHKREF(YT),FREEREF(2),CALL2(CHKREF(YT),FREEREF(0),lit_271)))),((CALL1(CHKREF(Ynot),(tmpF369=CALL2(CHKREF(YEE),keyF368,CHKREF(YDempty_cell_marker)),((tmpF369 != YPfalse)
    ? tmpF369
    : CALL2(CHKREF(YEE),keyF368,CHKREF(YDvacated_cell_marker))))) != YPfalse)
    ? (indexF370=CALL2(CHKREF(YA),i_,CALL2(CHKREF(YA),CALL2(CHKREF(YT),FREEREF(2),CALL2(CHKREF(YT),FREEREF(0),lit_272)),FREEREF(0))),CALL2(FREEREF(3),keyF368,CALL2(CHKREF(Yelt),FREEREF(1),indexF370)))
    : YPfalse)),
  (a1=CALL2(CHKREF(YA),i_,lit_273),i_=a1,PNUL))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_outer_702) {
  ARG(b_);
  P innerF371;
  P res, a1;
loop:
  res = ((CALL2(CHKREF(YL),b_,FREEREF(0)) != YPfalse)
    ? ((innerF371=FUNSHELL(fun_inner_701, 5),FUNINIT(innerF371, 5,FREEREF(1),FREEREF(2),b_,FREEREF(3),innerF371),
  CALL1(innerF371,lit_274)),
  (a1=CALL2(CHKREF(YA),b_,lit_275),b_=a1,PNUL))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_do_703) {
  ARG(table_);
  ARG(function_);
  P outerF375;
  P bucket_depthF374;
  P n_bucketsF373;
  P vectorF372;
  P res, a1, a2;
loop:
  res = (vectorF372=CALL1(CHKREF(YPvector),table_),(n_bucketsF373=CALL1(CHKREF(YPn_buckets),vectorF372),(bucket_depthF374=CALL1(CHKREF(YPbucket_depth),vectorF372),(outerF375=FUNSHELL(fun_outer_702, 5),FUNINIT(outerF375, 5,n_bucketsF373,bucket_depthF374,vectorF372,function_,outerF375),
  CALL1(outerF375,lit_276)))));
return res;
}


FUNCODEDEF(fun_del_keys_704) {
  ARG(table_);
  P res, a1;
loop:
CALL2(CHKREF(YclrX),CALL1(CHKREF(YPvector),table_),CHKREF(YDempty_cell_marker));
  res = CALL2(CHKREF(YPcount_setter),lit_277,table_);
return res;
}


FUNCODEDEF(fun_len_705) {
  ARG(table_);
  P res, a1;
loop:
  res = CALL1(CHKREF(YPcount),table_);
return res;
}


FUNCODEDEF(fun_Pvector_706) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YPvector));
return res;
}


FUNCODEDEF(fun_Pvector_setter_707) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YPvector));
return res;
}


FUNCODEDEF(fun_708) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_Pbucket_709) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YPbucket));
return res;
}


FUNCODEDEF(fun_Pbucket_setter_710) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YPbucket));
return res;
}


FUNCODEDEF(fun_711) {
  ARG(x_);
  P res, a1;
loop:
  res = lit_278;
return res;
}


FUNCODEDEF(fun_Pindex_712) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YPindex));
return res;
}


FUNCODEDEF(fun_Pindex_setter_713) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YPindex));
return res;
}


FUNCODEDEF(fun_714) {
  ARG(x_);
  P res, a1;
loop:
  res = lit_279;
return res;
}


FUNCODEDEF(fun_inner_715) {
  ARG(i_);
  P tmpF377;
  P keyF376;
  P res, a1;
loop:
  res = ((CALL2(CHKREF(YL),i_,FREEREF(0)) != YPfalse)
    ? (keyF376=CALL2(CHKREF(Yelt),FREEREF(1),CALL2(CHKREF(YA),i_,CALL2(CHKREF(YT),FREEREF(2),CALL2(CHKREF(YT),FREEREF(0),lit_281)))),(((CALL1(CHKREF(Ynot),(tmpF377=CALL2(CHKREF(YEE),keyF376,CHKREF(YDempty_cell_marker)),((tmpF377 != YPfalse)
    ? tmpF377
    : CALL2(CHKREF(YEE),keyF376,CHKREF(YDvacated_cell_marker))))) != YPfalse)
    ? CALL1(FREEREF(3),CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLtab_stateG),(P)Ynil),(P)YPpair((P)CHKREF(YPvector),(P)(P)YPpair((P)CHKREF(YPbucket),(P)(P)YPpair((P)CHKREF(YPindex),(P)Ynil))),(P)YPpair((P)FREEREF(1),(P)(P)YPpair((P)FREEREF(2),(P)(P)YPpair((P)i_,(P)Ynil)))))
    : YPfalse),
  (a1=CALL2(CHKREF(YA),i_,lit_282),i_=a1,PNUL)))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_outer_716) {
  ARG(b_);
  P innerF378;
  P res, a1;
loop:
  res = ((CALL2(CHKREF(YL),b_,FREEREF(0)) != YPfalse)
    ? ((innerF378=FUNSHELL(fun_inner_715, 5),FUNINIT(innerF378, 5,FREEREF(1),FREEREF(2),b_,FREEREF(3),innerF378),
  CALL1(innerF378,lit_283)),
  (a1=CALL2(CHKREF(YA),b_,lit_284),b_=a1,PNUL))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_717) {
  ARG(return_);
  P outerF382;
  P bucket_depthF381;
  P n_bucketsF380;
  P vectorF379;
  P res, a1;
loop:
  res = (vectorF379=CALL1(CHKREF(YPvector),FREEREF(0)),(n_bucketsF380=CALL1(CHKREF(YPn_buckets),vectorF379),(bucket_depthF381=CALL1(CHKREF(YPbucket_depth),vectorF379),((outerF382=FUNSHELL(fun_outer_716, 5),FUNINIT(outerF382, 5,n_bucketsF380,bucket_depthF381,vectorF379,return_,outerF382),
  CALL1(outerF382,lit_285)),
  YPfalse))));
return res;
}


FUNCODEDEF(fun_ini_state_718) {
  ARG(table_);
  P res, a1;
loop:
  res = ((CALL2(CHKREF(YE),CALL1(CHKREF(Ylen),table_),lit_280) != YPfalse)
    ? YPfalse
    : with_exit(FUNFAB(fun_717, 1,table_)));
return res;
}


FUNCODEDEF(fun_inner_719) {
  ARG(i_);
  P tmpF384;
  P keyF383;
  P res, a1;
loop:
  res = ((CALL2(CHKREF(YL),i_,FREEREF(0)) != YPfalse)
    ? (keyF383=CALL2(CHKREF(Yelt),FREEREF(1),CALL2(CHKREF(YA),i_,CALL2(CHKREF(YT),FREEREF(2),CALL2(CHKREF(YT),FREEREF(0),lit_289)))),(((CALL1(CHKREF(Ynot),(tmpF384=CALL2(CHKREF(YEE),keyF383,CHKREF(YDempty_cell_marker)),((tmpF384 != YPfalse)
    ? tmpF384
    : CALL2(CHKREF(YEE),keyF383,CHKREF(YDvacated_cell_marker))))) != YPfalse)
    ? (CALL2(CHKREF(YPbucket_setter),FREEREF(2),FREEREF(3)),
  CALL2(CHKREF(YPindex_setter),i_,FREEREF(3)),
  CALL1(FREEREF(4),FREEREF(3)))
    : YPfalse),
  (a1=CALL2(CHKREF(YA),i_,lit_290),i_=a1,PNUL)))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_outer_720) {
  ARG(b_);
  P innerF385;
  P res, a1;
loop:
  res = ((CALL2(CHKREF(YL),b_,FREEREF(0)) != YPfalse)
    ? ((innerF385=FUNSHELL(fun_inner_719, 6),FUNINIT(innerF385, 6,FREEREF(1),FREEREF(2),b_,FREEREF(3),FREEREF(4),innerF385),
  CALL1(innerF385,lit_291)),
  (a1=CALL2(CHKREF(YA),b_,lit_292),b_=a1,PNUL))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_721) {
  ARG(return_);
  P outerF386;
  P res, a1;
loop:
(outerF386=FUNSHELL(fun_outer_720, 6),FUNINIT(outerF386, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_,outerF386),
  CALL1(outerF386,lit_293));
  res = YPfalse;
return res;
}


FUNCODEDEF(fun_nxt_state_722) {
  ARG(state_);
  ARG(table_);
  P indexF391;
  P bucketF390;
  P bucket_depthF389;
  P n_bucketsF388;
  P vectorF387;
  P res, a1, a2;
loop:
  res = (vectorF387=CALL1(CHKREF(YPvector),state_),(n_bucketsF388=CALL1(CHKREF(YPn_buckets),vectorF387),(bucket_depthF389=CALL1(CHKREF(YPbucket_depth),vectorF387),(bucketF390=CALL1(CHKREF(YPbucket),state_),(bucketF390= BOXFAB(bucketF390),
  (indexF391=CALL1(CHKREF(YPindex),state_),(indexF391= BOXFAB(indexF391),
  ((BOXVAL(indexF391)=CALL2(CHKREF(YA),BOXVAL(indexF391),lit_286)),
  ((CALL2(CHKREF(YE),BOXVAL(indexF391),bucket_depthF389) != YPfalse)
    ? ((BOXVAL(bucketF390)=CALL2(CHKREF(YA),BOXVAL(bucketF390),lit_287)),
  (BOXVAL(indexF391)=lit_288))
    : YPfalse),
  with_exit(FUNFAB(fun_721, 4,n_bucketsF388,bucket_depthF389,vectorF387,state_))))))))));
return res;
}


FUNCODEDEF(fun_fin_stateQ_723) {
  ARG(state_);
  ARG(table_);
  P res, a1, a2;
loop:
  res = CALL1(CHKREF(Ynot),state_);
return res;
}


FUNCODEDEF(fun_now_key_724) {
  ARG(state_);
  ARG(table_);
  P bucket_depthF393;
  P vectorF392;
  P res, a1, a2;
loop:
  res = (vectorF392=CALL1(CHKREF(YPvector),state_),(bucket_depthF393=CALL1(CHKREF(YPbucket_depth),vectorF392),CALL2(CHKREF(Yelt),vectorF392,CALL2(CHKREF(YA),CALL1(CHKREF(YPindex),state_),CALL2(CHKREF(YT),CALL1(CHKREF(YPbucket),state_),CALL2(CHKREF(YT),bucket_depthF393,lit_294))))));
return res;
}


FUNCODEDEF(fun_now_elt_725) {
  ARG(state_);
  ARG(table_);
  P depthF395;
  P vectorF394;
  P res, a1, a2;
loop:
  res = (vectorF394=CALL1(CHKREF(YPvector),state_),(depthF395=CALL1(CHKREF(YPbucket_depth),vectorF394),CALL2(CHKREF(Yelt),vectorF394,CALL2(CHKREF(YA),CALL1(CHKREF(YPindex),state_),CALL2(CHKREF(YA),depthF395,CALL2(CHKREF(YT),CALL1(CHKREF(YPbucket),state_),CALL2(CHKREF(YT),depthF395,lit_295)))))));
return res;
}


FUNCODEDEF(fun_now_elt_setter_726) {
  ARG(state_);
  ARG(table_);
  ARG(value_);
  P depthF398;
  P indexF397;
  P vectorF396;
  P res, a1, a2, a3;
loop:
  res = (vectorF396=CALL1(CHKREF(YPvector),state_),(indexF397=CALL1(CHKREF(YPindex),state_),(depthF398=CALL1(CHKREF(YPbucket_depth),vectorF396),CALL3(CHKREF(Yelt_setter),value_,vectorF396,CALL2(CHKREF(YA),indexF397,CALL2(CHKREF(YA),depthF398,CALL2(CHKREF(YT),CALL1(CHKREF(YPbucket),state_),CALL2(CHKREF(YT),depthF398,lit_296))))))));
return res;
}


FUNCODEDEF(fun_copy_state_727) {
  ARG(state_);
  ARG(table_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLtab_stateG),(P)Ynil),(P)YPpair((P)CHKREF(YPvector),(P)(P)YPpair((P)CHKREF(YPbucket),(P)(P)YPpair((P)CHKREF(YPindex),(P)Ynil))),(P)YPpair((P)CALL1(CHKREF(YPvector),state_),(P)(P)YPpair((P)CALL1(CHKREF(YPbucket),state_),(P)(P)YPpair((P)CALL1(CHKREF(YPindex),state_),(P)Ynil))));
return res;
}


FUNCODEDEF(fun_grow_table_728) {
  ARG(table_);
  P new_vectorF406;
  P tup23F405;
  P new_bucket_depthF404;
  P tup23F403;
  P new_n_bucketsF402;
  P tup23F401;
  P vectorF400;
  P vecF399;
  P res, a1;
loop:
(vecF399=CALL1(CHKREF(YPvector),table_),CALLN(CHKREF(Ytrace),4,CHKREF(Yout),lit_297,CALL1(CHKREF(YPcount),table_),CALL2(CHKREF(YT),CALL1(CHKREF(YPn_buckets),vecF399),CALL1(CHKREF(YPbucket_depth),vecF399))));
  res = (vectorF400=CALL1(CHKREF(YPvector),table_),(tup23F401=CALL1(CHKREF(Ychoose_table_geometry),CALL2(CHKREF(YT),CALL1(CHKREF(YPn_buckets),vectorF400),CALL1(CHKREF(YPbucket_depth),vectorF400))),(new_n_bucketsF402=CALL1(CHKREF(Yhead),tup23F401),(tup23F403=CALL1(CHKREF(Ytail),tup23F401),(new_bucket_depthF404=CALL1(CHKREF(Yhead),tup23F403),(tup23F405=CALL1(CHKREF(Ytail),tup23F403),(new_vectorF406=CALLN(CHKREF(Yfab_table_vector),6,CALL2(CHKREF(Yelt),CALL1(CHKREF(Yfloor),CALL2(CHKREF(YT),new_n_bucketsF402,CALL2(CHKREF(YT),new_bucket_depthF404,CALL1(CHKREF(Ytable_growth_factor),table_)))),lit_298),CHKREF(YDempty_cell_marker),new_n_bucketsF402,new_bucket_depthF404,new_n_bucketsF402,CALL2(CHKREF(Y_),new_n_bucketsF402,lit_299)),(CALL3(CHKREF(Ytrace),CHKREF(Yout),lit_300,CALL1(CHKREF(YPdata),CALL1(CHKREF(YPvector),table_))),
  CALL2(CHKREF(Ycopy_to_new_vector),table_,new_vectorF406),
  CALL2(CHKREF(YPvector_setter),new_vectorF406,table_),
  CALL3(CHKREF(Ytrace),CHKREF(Yout),lit_301,CALL1(CHKREF(YPdata),CALL1(CHKREF(YPvector),table_))),
  table_))))))));
return res;
}


FUNCODEDEF(fun_rehash_table_729) {
  ARG(table_);
  P new_vectorF408;
  P vectorF407;
  P res, a1;
loop:
  res = (vectorF407=CALL1(CHKREF(YPvector),table_),(new_vectorF408=CALLN(CHKREF(Yfab_table_vector),6,CALL2(CHKREF(YT),CALL1(CHKREF(YPn_buckets),vectorF407),CALL2(CHKREF(YT),CALL1(CHKREF(YPbucket_depth),vectorF407),lit_302)),CHKREF(YDempty_cell_marker),CALL1(CHKREF(YPn_buckets),vectorF407),CALL1(CHKREF(YPbucket_depth),vectorF407),CALL1(CHKREF(YPprimary_modulus),vectorF407),CALL1(CHKREF(YPsecondary_modulus),vectorF407)),(CALL2(CHKREF(Ycopy_to_new_vector),table_,new_vectorF408),
  CALL2(CHKREF(YPvector_setter),new_vectorF408,table_),
  table_)));
return res;
}


FUNCODEDEF(fun_730) {
  ARG(p_);
  P res, a1;
loop:
  res = ((CALL2(CHKREF(YG),p_,CALL2(CHKREF(Yelt),CALL2(CHKREF(YceilingS),FREEREF(0),FREEREF(1)),lit_314)) != YPfalse)
    ? CALL1(FREEREF(2),CALL2(CHKREF(Ytup),CALL2(CHKREF(YA),p_,lit_315),FREEREF(1)))
    : YPfalse);
return res;
}


FUNCODEDEF(fun_731) {
  ARG(return_);
  P depthF409;
  P res, a1;
loop:
  res = (depthF409=((CALL2(CHKREF(YL),FREEREF(0),lit_303) != YPfalse)
    ? lit_304
    : ((CALL2(CHKREF(YL),FREEREF(0),lit_305) != YPfalse)
    ? lit_306
    : ((CALL2(CHKREF(YL),FREEREF(0),lit_307) != YPfalse)
    ? lit_308
    : ((CALL2(CHKREF(YL),FREEREF(0),lit_309) != YPfalse)
    ? lit_310
    : ((CALL2(CHKREF(YL),FREEREF(0),lit_311) != YPfalse)
    ? lit_312
    : ((YPtrue != YPfalse)
    ? lit_313
    : YPfalse)))))),(CALL2(CHKREF(Ydo),FUNFAB(fun_730, 3,FREEREF(0),depthF409,return_),CHKREF(YTtwin_primesT)),
  CALL1(CHKREF(Yerror),lit_316)));
return res;
}


FUNCODEDEF(Ychoose_table_geometry) {
  ARG(capacity_);
  P res, a1;
loop:
  res = with_exit(FUNFAB(fun_731, 1,capacity_));
return res;
}


FUNCODEDEF(fun_inner_733) {
  ARG(index_);
  ARG(i_);
  P this_keyF410;
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YL),i_,FREEREF(0)) != YPfalse)
    ? (this_keyF410=CALL2(CHKREF(Yelt),FREEREF(1),index_),(((CALL2(CHKREF(YEE),this_keyF410,CHKREF(YDempty_cell_marker)) != YPfalse)
    ? (CALLN(CHKREF(Ytrace),5,CHKREF(Yout),lit_319,FREEREF(2),FREEREF(3),index_),
  CALL3(CHKREF(Yelt_setter),FREEREF(2),FREEREF(1),index_),
  CALL3(CHKREF(Yelt_setter),FREEREF(3),FREEREF(1),CALL2(CHKREF(YA),index_,FREEREF(0))),
  CALL1(FREEREF(4),YPfalse))
    : YPfalse),
  (a1=CALL2(CHKREF(YA),i_,lit_320),a2=CALL2(CHKREF(YA),index_,lit_321),i_=a1,index_=a2,PNUL)))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_outer_734) {
  ARG(probes_);
  P innerF412;
  P bucket_startF411;
  P res, a1;
loop:
  res = ((CALL2(CHKREF(YL),probes_,FREEREF(0)) != YPfalse)
    ? (bucket_startF411=CALL2(CHKREF(YT),BOXVAL(FREEREF(1)),CALL2(CHKREF(YT),FREEREF(2),lit_318)),((innerF412=FUNSHELL(fun_inner_733, 6),FUNINIT(innerF412, 6,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6),innerF412),
  CALL2(innerF412,lit_322,bucket_startF411)),
  (BOXVAL(FREEREF(1))=CALL2(CHKREF(Y_),BOXVAL(FREEREF(1)),FREEREF(7))),
  ((CALL1(CHKREF(YnegQ),BOXVAL(FREEREF(1))) != YPfalse)
    ? (BOXVAL(FREEREF(1))=CALL2(CHKREF(YA),BOXVAL(FREEREF(1)),FREEREF(0)))
    : YPfalse),
  (a1=CALL2(CHKREF(YA),probes_,lit_323),probes_=a1,PNUL)))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_735) {
  ARG(return_);
  P outerF432;
  P tup26F431;
  P new_bucket_offsetF430;
  P tup26F429;
  P new_bucket_indexF428;
  P tup26F427;
  P new_secondary_modulusF426;
  P new_primary_modulusF425;
  P new_bucket_depthF424;
  P new_n_bucketsF423;
  P tup25F422;
  P stateF421;
  P tup25F420;
  P hashF419;
  P tup25F418;
  P tup24F417;
  P hash_functionF416;
  P tup24F415;
  P test_functionF414;
  P tup24F413;
  P res, a1;
loop:
  res = (tup24F413=CALL1(CHKREF(Ytable_protocol),FREEREF(0)),(test_functionF414=CALL1(CHKREF(Yhead),tup24F413),(tup24F415=CALL1(CHKREF(Ytail),tup24F413),(hash_functionF416=CALL1(CHKREF(Yhead),tup24F415),(tup24F417=CALL1(CHKREF(Ytail),tup24F415),(tup25F418=CALL1(hash_functionF416,FREEREF(1)),(hashF419=CALL1(CHKREF(Yhead),tup25F418),(tup25F420=CALL1(CHKREF(Ytail),tup25F418),(stateF421=CALL1(CHKREF(Yhead),tup25F420),(tup25F422=CALL1(CHKREF(Ytail),tup25F420),(new_n_bucketsF423=CALL1(CHKREF(YPn_buckets),FREEREF(2)),(new_bucket_depthF424=CALL1(CHKREF(YPbucket_depth),FREEREF(2)),(new_primary_modulusF425=CALL1(CHKREF(YPprimary_modulus),FREEREF(2)),(new_secondary_modulusF426=CALL1(CHKREF(YPsecondary_modulus),FREEREF(2)),(tup26F427=CALL3(CHKREF(Yhash_moduli),hashF419,new_primary_modulusF425,new_secondary_modulusF426),(new_bucket_indexF428=CALL1(CHKREF(Yhead),tup26F427),(new_bucket_indexF428= BOXFAB(new_bucket_indexF428),
  (tup26F429=CALL1(CHKREF(Ytail),tup26F427),(new_bucket_offsetF430=CALL1(CHKREF(Yhead),tup26F429),(tup26F431=CALL1(CHKREF(Ytail),tup26F429),(CALLN(CHKREF(Ytrace),4,CHKREF(Yout),lit_317,FREEREF(1),FREEREF(3)),
  (outerF432=FUNSHELL(fun_outer_734, 9),FUNINIT(outerF432, 9,new_n_bucketsF423,new_bucket_indexF428,new_bucket_depthF424,FREEREF(2),FREEREF(1),FREEREF(3),return_,new_bucket_offsetF430,outerF432),
  CALL1(outerF432,lit_324)),
  CALL1(CHKREF(Yerror),lit_325))))))))))))))))))))));
return res;
}


FUNCODEDEF(fun_736) {
  ARG(v_);
  ARG(k_);
  P res, a1, a2;
loop:
  res = with_exit(FUNFAB(fun_735, 4,FREEREF(0),k_,FREEREF(1),v_));
return res;
}


FUNCODEDEF(fun_copy_to_new_vector_737) {
  ARG(new_vector_);
  ARG(table_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Ydo),FUNFAB(fun_736, 2,table_,new_vector_),table_);
return res;
}


FUNCODEDEF(Ycurrent_gc_state) {
  P res;
loop:
  res = CHKREF(YDpermanent_hash_state);
return res;
}


FUNCODEDEF(fun_id_hash_739) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ytup),CALL1(CHKREF(Yaddress_of),x_),CALL0(CHKREF(Ycurrent_gc_state)));
return res;
}


FUNCODEDEF(fun_id_hash_740) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ytup),((x_ != YPfalse)
    ? lit_326
    : lit_327),CHKREF(YDpermanent_hash_state));
return res;
}


FUNCODEDEF(Yrot) {
  ARG(a_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Ylogior),CALL2(CHKREF(Yash),x_,CALL1(CHKREF(Yneg),a_)),CALL2(CHKREF(Yash),x_,a_));
return res;
}


FUNCODEDEF(fun_id_hash_742) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ytup),CALL1(CHKREF(Yabs),CALL2(CHKREF(YA),CALL2(CHKREF(Y_),CALL2(CHKREF(Yrot),x_,lit_328),x_),lit_329)),CHKREF(YDpermanent_hash_state));
return res;
}


FUNCODEDEF(fun_id_hash_743) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Yid_hash),CALL2(CHKREF(Yas),CHKREF(YLintG),x_));
return res;
}


FUNCODEDEF(fun_id_hash_744) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ytup),CALL2(CHKREF(YA),CALL1(CHKREF(Yflo_bits),x_),lit_330),CHKREF(YDpermanent_hash_state));
return res;
}


FUNCODEDEF(fun_loop_745) {
  ARG(hash_);
  ARG(i_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YL),i_,FREEREF(0)) != YPfalse)
    ? (a1=CALL2(CHKREF(YA),i_,lit_332),a2=CALL2(CHKREF(Ymodulo),CALL2(CHKREF(YA),CALL2(CHKREF(Yash),hash_,lit_333),CALL2(CHKREF(Ylogand),CALL2(CHKREF(Yas),CHKREF(YLintG),CALL2(CHKREF(Yelt),FREEREF(1),i_)),lit_334)),lit_335),i_=a1,hash_=a2,PNUL)
    : CALL2(CHKREF(Ytup),hash_,CHKREF(YDpermanent_hash_state)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(Ycase_insensitive_string_hash) {
  ARG(x_);
  P loopF435;
  P eF434;
  P sF433;
  P res, a1;
loop:
  res = (sF433=lit_331,(eF434=CALL1(CHKREF(Ylen),x_),(loopF435=FUNSHELL(fun_loop_745, 3),FUNINIT(loopF435, 3,eF434,x_,loopF435),
  CALL2(loopF435,sF433,lit_336))));
return res;
}


FUNCODEDEF(fun_loop_747) {
  ARG(i_);
  P tmpF440;
  P tmpF439;
  P cyF438;
  P cxF437;
  P tmpF436;
  P res, a1;
loop:
  res = (tmpF436=CALL2(CHKREF(YEE),i_,FREEREF(0)),((tmpF436 != YPfalse)
    ? tmpF436
    : (cxF437=CALL2(CHKREF(Yelt),FREEREF(1),CALL2(CHKREF(Y_),i_,FREEREF(2))),(cyF438=CALL2(CHKREF(Yelt),FREEREF(3),i_),(tmpF440=(tmpF439=CALL2(CHKREF(YEE),cxF437,cyF438),((tmpF439 != YPfalse)
    ? tmpF439
    : CALL2(CHKREF(YEE),CALL1(CHKREF(Yas_lowercase),cxF437),CALL1(CHKREF(Yas_lowercase),cyF438)))),((tmpF440 != YPfalse)
    ? (a1=CALL2(CHKREF(YA),i_,lit_338),i_=a1,PNUL)
    : YPfalse))))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(Ycase_insensitive_string_equal) {
  ARG(y_);
  ARG(x_);
  P loopF443;
  P eyF442;
  P syF441;
  P res, a1, a2;
loop:
  res = (syF441=lit_337,(eyF442=CALL1(CHKREF(Ylen),y_),((CALL2(CHKREF(YEE),CALL1(CHKREF(Ylen),x_),CALL2(CHKREF(Y_),eyF442,syF441)) != YPfalse)
    ? (loopF443=FUNSHELL(fun_loop_747, 5),FUNINIT(loopF443, 5,eyF442,x_,syF441,y_,loopF443),
  CALL1(loopF443,syF441))
    : YPfalse)));
return res;
}


FUNCODEDEF(fun_table_protocol_749) {
  ARG(U_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ytup),CHKREF(Ycase_insensitive_string_equal),CHKREF(Ycase_insensitive_string_hash));
return res;
}


FUNCODEDEF(Ybooted_fab_sym) {
  ARG(name_);
  P symF444;
  P res, a1;
loop:
  res = (symF444=CALL2(CHKREF(Yelt),CHKREF(Ysymbols),name_),((CALL2(CHKREF(YEE),symF444,CHKREF(Ynul)) != YPfalse)
    ? CALL3(CHKREF(Yelt_setter),(P)YPsym((P)name_),CHKREF(Ysymbols),name_)
    : symF444));
return res;
}


FUNCODEDEF(fun_boot_751) {
  ARG(syms_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(Ynot),CALL1(CHKREF(YemptyQ),syms_)) != YPfalse)
    ? (CALL1(CHKREF(Ybooted_fab_sym),(P)YPsym_nam((P)CALL1(CHKREF(Yhead),syms_))),
  (a1=CALL1(CHKREF(Ytail),syms_),syms_=a1,PNUL))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(Yboot_symbols) {
  P bootF445;
  P res;
loop:
  res = (bootF445=FUNSHELL(fun_boot_751, 1),FUNINIT(bootF445, 1,bootF445),
  CALL1(bootF445,CHKREF(YPsymbols)));
return res;
}


FUNCODEDEF(fun_loop_753) {
  ARG(j_);
  ARG(i_);
  P res, a1, a2;
loop:
  res = ((CALL1(CHKREF(Ynot),CALL2(CHKREF(YE),j_,CALL1(CHKREF(Ylen),FREEREF(0)))) != YPfalse)
    ? (CALL3(CHKREF(Yelt_setter),CALL2(CHKREF(Yelt),FREEREF(0),j_),FREEREF(1),i_),
  (a1=CALL2(CHKREF(YA),i_,lit_341),a2=CALL2(CHKREF(YA),j_,lit_342),i_=a1,j_=a2,PNUL))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_754) {
  ARG(s_);
  ARG(i_);
  P loopF446;
  P res, a1, a2;
loop:
  res = (loopF446=FUNSHELL(fun_loop_753, 3),FUNINIT(loopF446, 3,s_,FREEREF(0),loopF446),
  CALL2(loopF446,i_,lit_343));
return res;
}


FUNCODEDEF(fun_ascii_Gchar_755) {
  ARG(n_);
  P tmpF447;
  P res, a1;
loop:
  res = (tmpF447=CALL2(CHKREF(Yelt),CHKREF(Yascii_chars),n_),((tmpF447 != YPfalse)
    ? tmpF447
    : CALL2(CHKREF(Yerror),lit_358,n_)));
return res;
}


FUNCODEDEF(fun_char_Ginteger_756) {
  ARG(char_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yas),CHKREF(YLintG),char_);
return res;
}


FUNCODEDEF(fun_integer_Gchar_757) {
  ARG(n_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yas),CHKREF(YLchrG),n_);
return res;
}


FUNCODEDEF(fun_loop_758) {
  ARG(i_);
  P cF448;
  P res, a1;
loop:
  res = ((CALL2(CHKREF(YE),i_,FREEREF(0)) != YPfalse)
    ? CALL2(CHKREF(Ylst),FREEREF(1),FREEREF(2))
    : (cF448=CALL2(CHKREF(Yelt),CHKREF(Yascii_chars),i_),(((cF448 != YPfalse)
    ? CALL3(CHKREF(Yelt_setter),i_,FREEREF(2),CALL2(CHKREF(Y_),CALL1(CHKREF(Ychar_Ginteger),cF448),FREEREF(1)))
    : YPfalse),
  (a1=CALL2(CHKREF(YA),i_,lit_360),i_=a1,PNUL))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_loop_759) {
  ARG(greatest_);
  ARG(least_);
  ARG(i_);
  P nF452;
  P cF451;
  P loopF450;
  P vF449;
  P res, a1, a2, a3;
loop:
  res = ((CALL2(CHKREF(YE),i_,FREEREF(0)) != YPfalse)
    ? (vF449=CALL2(CHKREF(Yfill),CALL2(CHKREF(Yfab),CHKREF(YLvecG),CALL2(CHKREF(YA),CALL2(CHKREF(Y_),greatest_,least_),lit_359)),YPfalse),(loopF450=FUNSHELL(fun_loop_758, 4),FUNINIT(loopF450, 4,FREEREF(0),least_,vF449,loopF450),
  CALL1(loopF450,lit_361)))
    : (cF451=CALL2(CHKREF(Yelt),CHKREF(Yascii_chars),i_),((cF451 != YPfalse)
    ? (nF452=CALL1(CHKREF(Ychar_Ginteger),cF451),(a1=CALL2(CHKREF(YA),i_,lit_362),a2=((least_ != YPfalse)
    ? CALL2(CHKREF(Ymin),least_,nF452)
    : nF452),a3=((greatest_ != YPfalse)
    ? CALL2(CHKREF(Ymax),greatest_,nF452)
    : nF452),i_=a1,least_=a2,greatest_=a3,PNUL))
    : (a1=CALL2(CHKREF(YA),i_,lit_363),a2=least_,a3=greatest_,i_=a1,least_=a2,greatest_=a3,PNUL))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_char_Gascii_760) {
  ARG(char_);
  P tmpF453;
  P res, a1;
loop:
  res = (tmpF453=CALL2(CHKREF(Yelt),CALL1(CHKREF(Yhead),CALL1(CHKREF(Ytail),CHKREF(Ynative_chars))),CALL2(CHKREF(Y_),CALL1(CHKREF(Ychar_Ginteger),char_),CALL1(CHKREF(Yhead),CHKREF(Ynative_chars)))),((tmpF453 != YPfalse)
    ? tmpF453
    : CALL2(CHKREF(Yerror),lit_365,char_)));
return res;
}


FUNCODEDEF(fun_match_761) {
  ARG(char_);
  P tmpF454;
  P res, a1;
loop:
  res = (((tmpF454=CALL2(CHKREF(YL),BOXVAL(FREEREF(0)),FREEREF(1)),((tmpF454 != YPfalse)
    ? CALL2(CHKREF(YE),CALL2(CHKREF(Yelt),FREEREF(2),BOXVAL(FREEREF(0))),char_)
    : YPfalse)) != YPfalse)
    ? ((BOXVAL(FREEREF(0))=CALL2(CHKREF(YA),BOXVAL(FREEREF(0)),lit_373)),
  YPtrue)
    : YPfalse);
return res;
}


FUNCODEDEF(fun_failXX_762) {
  P res;
loop:
  res = CALL1(FREEREF(0),YPfalse);
return res;
}


FUNCODEDEF(fun_763) {
  ARG(return_);
  P charF456;
  P failXXF455;
  P res, a1;
loop:
  res = (failXXF455=FUNSHELL(fun_failXX_762, 1),FUNINIT(failXXF455, 1,return_),
  (((CALL2(CHKREF(YGE),BOXVAL(FREEREF(0)),FREEREF(1)) != YPfalse)
    ? CALL0(failXXF455)
    : YPfalse),
  (charF456=CALL2(CHKREF(Yelt),FREEREF(2),BOXVAL(FREEREF(0))),(charF456= BOXFAB(charF456),
  (((CALL2(CHKREF(YE),BOXVAL(charF456),lit_374) != YPfalse)
    ? ((BOXVAL(FREEREF(3)) != YPfalse)
    ? CALL2(CHKREF(Yerror),lit_375,FREEREF(2))
    : ((BOXVAL(FREEREF(3))=YPtrue),
  (BOXVAL(FREEREF(0))=CALL2(CHKREF(YA),BOXVAL(FREEREF(0)),lit_376)),
  ((CALL2(CHKREF(YGE),BOXVAL(FREEREF(0)),FREEREF(1)) != YPfalse)
    ? CALL0(failXXF455)
    : YPfalse),
  (BOXVAL(charF456)=CALL2(CHKREF(Yelt),FREEREF(2),BOXVAL(FREEREF(0))))))
    : YPfalse),
  ((CALL1(CHKREF(Ynot),CALL1(CHKREF(YnumericQ),BOXVAL(charF456))) != YPfalse)
    ? CALL0(failXXF455)
    : YPfalse),
  (BOXVAL(FREEREF(4))=CALL1(CHKREF(Yto_digit),CALL2(CHKREF(Yelt),FREEREF(2),BOXVAL(FREEREF(0))))),
  (BOXVAL(FREEREF(0))=CALL2(CHKREF(YA),BOXVAL(FREEREF(0)),lit_377)),
  ((BOXVAL(FREEREF(3)) != YPfalse)
    ? (BOXVAL(FREEREF(5))=CALL2(CHKREF(YT),BOXVAL(FREEREF(5)),FREEREF(6)))
    : YPfalse),
  YPtrue)))));
return res;
}


FUNCODEDEF(fun_match_digitX_764) {
  ARG(U_);
  P res, a1;
loop:
  res = with_exit(FUNFAB(fun_763, 7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6)));
return res;
}


FUNCODEDEF(fun_looking_at_alphabeticQ_765) {
  P tmpF457;
  P res;
loop:
  res = (((tmpF457=CALL2(CHKREF(YL),BOXVAL(FREEREF(0)),FREEREF(1)),((tmpF457 != YPfalse)
    ? CALL1(CHKREF(YalphabeticQ),CALL2(CHKREF(Yelt),FREEREF(2),BOXVAL(FREEREF(0))))
    : YPfalse)) != YPfalse)
    ? YPtrue
    : YPfalse);
return res;
}


FUNCODEDEF(fun_loop_766) {
  P tmpF458;
  P res;
loop:
  res = (((tmpF458=CALL1(FREEREF(1),BOXVAL(FREEREF(0))),((tmpF458 != YPfalse)
    ? (BOXVAL(FREEREF(2))=CALL2(CHKREF(YA),CALL2(CHKREF(YT),BOXVAL(FREEREF(2)),FREEREF(3)),BOXVAL(FREEREF(0))))
    : YPfalse)) != YPfalse)
    ? (PNUL)
    : YPtrue);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_str_to_num_767) {
  ARG(string_);
  P fF479;
  P tmpF478;
  P tmpF477;
  P loopF476;
  P tmpF475;
  P tmpF474;
  P tmpF473;
  P tmpF472;
  P tmpF471;
  P tmpF470;
  P looking_at_alphabeticQF469;
  P match_digitXF468;
  P matchF467;
  P radixF466;
  P seen_decimal_pointQF465;
  P lengthF464;
  P scaleF463;
  P iF462;
  P nF461;
  P dF460;
  P sF459;
  P res, a1;
loop:
  res = (sF459=lit_367,(sF459= BOXFAB(sF459),
  (dF460=lit_368,(dF460= BOXFAB(dF460),
  (nF461=lit_369,(nF461= BOXFAB(nF461),
  (iF462=lit_370,(iF462= BOXFAB(iF462),
  (scaleF463=lit_371,(scaleF463= BOXFAB(scaleF463),
  (lengthF464=CALL1(CHKREF(Ylen),string_),(seen_decimal_pointQF465=YPfalse,(seen_decimal_pointQF465= BOXFAB(seen_decimal_pointQF465),
  (radixF466=lit_372,(matchF467=FUNSHELL(fun_match_761, 3),match_digitXF468=FUNSHELL(fun_match_digitX_764, 7),looking_at_alphabeticQF469=FUNSHELL(fun_looking_at_alphabeticQ_765, 3),FUNINIT(matchF467, 3,iF462,lengthF464,string_),
  FUNINIT(match_digitXF468, 7,iF462,lengthF464,string_,seen_decimal_pointQF465,dF460,scaleF463,radixF466),
  FUNINIT(looking_at_alphabeticQF469, 3,iF462,lengthF464,string_),
  (tmpF473=(tmpF470=CALL1(matchF467,lit_378),((tmpF470 != YPfalse)
    ? tmpF470
    : (tmpF472=(tmpF471=CALL1(matchF467,lit_379),((tmpF471 != YPfalse)
    ? (BOXVAL(sF459)=lit_380)
    : YPfalse)),((tmpF472 != YPfalse)
    ? tmpF472
    : YPtrue)))),((tmpF473 != YPfalse)
    ? (tmpF475=(tmpF474=CALL1(match_digitXF468,BOXVAL(dF460)),((tmpF474 != YPfalse)
    ? (BOXVAL(nF461)=BOXVAL(dF460))
    : YPfalse)),((tmpF475 != YPfalse)
    ? (tmpF477=(loopF476=FUNSHELL(fun_loop_766, 5),FUNINIT(loopF476, 5,dF460,match_digitXF468,nF461,radixF466,loopF476),
  CALL0(loopF476)),((tmpF477 != YPfalse)
    ? (tmpF478=CALL2(CHKREF(YE),BOXVAL(iF462),lengthF464),((tmpF478 != YPfalse)
    ? (fF479=CALL2(CHKREF(YT),CALL2(CHKREF(Yas),CHKREF(YLfloG),BOXVAL(sF459)),CALL2(CHKREF(YS),CALL2(CHKREF(Yas),CHKREF(YLfloG),BOXVAL(nF461)),CALL2(CHKREF(Yas),CHKREF(YLfloG),BOXVAL(scaleF463)))),((BOXVAL(seen_decimal_pointQF465) != YPfalse)
    ? fF479
    : CALL1(CHKREF(Y1st),CALL1(CHKREF(Ytruncate),fF479))))
    : YPfalse))
    : YPfalse))
    : YPfalse))
    : YPfalse)))))))))))))))));
return res;
}


FUNCODEDEF(fun_port_handle_768) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yport_handle));
return res;
}


FUNCODEDEF(fun_port_handle_setter_769) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yport_handle));
return res;
}


FUNCODEDEF(fun_770) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_open_input_file_771) {
  ARG(filename_);
  P res, a1;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLfile_input_portG),(P)Ynil),(P)YPpair((P)CHKREF(Yport_handle),(P)Ynil),(P)YPpair((P)(P)YPopen_input_file((P)(P)YPsu((P)filename_)),(P)Ynil));
return res;
}


FUNCODEDEF(fun_file_opening_error_772) {
  ARG(filename_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yerror),lit_381,filename_);
return res;
}


FUNCODEDEF(fun_open_output_file_773) {
  ARG(filename_);
  P res, a1;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLfile_output_portG),(P)Ynil),(P)YPpair((P)CHKREF(Yport_handle),(P)Ynil),(P)YPpair((P)(P)YPopen_output_file((P)(P)YPsu((P)filename_)),(P)Ynil));
return res;
}


FUNCODEDEF(fun_close_input_port_774) {
  ARG(port_);
  P res, a1;
loop:
  res = (P)YPclose_input_port((P)CALL1(CHKREF(Yport_handle),port_));
return res;
}


FUNCODEDEF(fun_close_output_port_775) {
  ARG(port_);
  P res, a1;
loop:
  res = (P)YPclose_output_port((P)CALL1(CHKREF(Yport_handle),port_));
return res;
}


FUNCODEDEF(fun_776) {
  P res;
loop:
(BOXVAL(FREEREF(0))=CALL1(CHKREF(Yopen_input_file),FREEREF(1)));
  res = CALL1(FREEREF(2),BOXVAL(FREEREF(0)));
return res;
}


FUNCODEDEF(fun_777) {
  P tmpF480;
  P res;
loop:
  res = (tmpF480=BOXVAL(FREEREF(0)),((tmpF480 != YPfalse)
    ? CALL1(CHKREF(Yclose_input_port),BOXVAL(FREEREF(0)))
    : YPfalse));
return res;
}


FUNCODEDEF(fun_call_with_input_file_778) {
  ARG(proc_);
  ARG(string_);
  P portF481;
  P res, a1, a2;
loop:
  res = (portF481=YPfalse,(portF481= BOXFAB(portF481),
  with_cleanup(FUNFAB(fun_776, 3,portF481,string_,proc_), FUNFAB(fun_777, 1,portF481))));
return res;
}


FUNCODEDEF(fun_779) {
  P res;
loop:
(BOXVAL(FREEREF(0))=CALL1(CHKREF(Yopen_output_file),FREEREF(1)));
  res = CALL1(FREEREF(2),BOXVAL(FREEREF(0)));
return res;
}


FUNCODEDEF(fun_780) {
  P tmpF482;
  P res;
loop:
  res = (tmpF482=BOXVAL(FREEREF(0)),((tmpF482 != YPfalse)
    ? CALL1(CHKREF(Yclose_output_port),BOXVAL(FREEREF(0)))
    : YPfalse));
return res;
}


FUNCODEDEF(fun_call_with_output_file_781) {
  ARG(proc_);
  ARG(string_);
  P portF483;
  P res, a1, a2;
loop:
  res = (portF483=YPfalse,(portF483= BOXFAB(portF483),
  with_cleanup(FUNFAB(fun_779, 3,portF483,string_,proc_), FUNFAB(fun_780, 1,portF483))));
return res;
}


FUNCODEDEF(fun_eof_objectQ_782) {
  ARG(x_);
  P res, a1;
loop:
  res = (P)YPbb((P)(P)YPeqQ((P)(P)YPcu((P)x_),(P)(P)YPeof_object()));
return res;
}


FUNCODEDEF(fun_eof_object_783) {
  P res;
loop:
  res = (P)YPcb((P)(P)YPeof_object());
return res;
}


FUNCODEDEF(fun_read_char_784) {
  ARG(port_);
  P res, a1;
loop:
  res = (P)YPcb((P)(P)YPread_char((P)CALL1(CHKREF(Yport_handle),port_)));
return res;
}


FUNCODEDEF(fun_peek_char_785) {
  ARG(port_);
  P res, a1;
loop:
  res = (P)YPcb((P)(P)YPpeek_char((P)CALL1(CHKREF(Yport_handle),port_)));
return res;
}


FUNCODEDEF(fun_char_readyQ_786) {
  ARG(port_);
  P res, a1;
loop:
  res = (P)YPchar_readyQ((P)CALL1(CHKREF(Yport_handle),port_));
return res;
}


FUNCODEDEF(fun_newline_787) {
  ARG(port_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ywrite_char),port_,lit_382);
return res;
}


FUNCODEDEF(fun_force_output_788) {
  ARG(port_);
  P res, a1;
loop:
  res = (P)YPforce_output((P)CALL1(CHKREF(Yport_handle),port_));
return res;
}


FUNCODEDEF(fun_write_char_789) {
  ARG(c_);
  ARG(port_);
  P res, a1, a2;
loop:
  res = (P)YPwrite_char((P)CALL1(CHKREF(Yport_handle),port_),(P)(P)YPcu((P)c_));
return res;
}


FUNCODEDEF(fun_write_string_790) {
  ARG(s_);
  ARG(port_);
  P res, a1, a2;
loop:
  res = (P)YPwrite_string((P)CALL1(CHKREF(Yport_handle),port_),(P)(P)YPsu((P)s_));
return res;
}


FUNCODEDEF(fun_port_guts_791) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yport_guts));
return res;
}


FUNCODEDEF(fun_port_guts_setter_792) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yport_guts));
return res;
}


FUNCODEDEF(fun_793) {
  ARG(x_);
  P res, a1;
loop:
  res = lit_383;
return res;
}


FUNCODEDEF(fun_port_contents_794) {
  ARG(port_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yas),CHKREF(YLstrG),CALL1(CHKREF(Yport_guts),port_));
return res;
}


FUNCODEDEF(fun_port_index_795) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yport_index));
return res;
}


FUNCODEDEF(fun_port_index_setter_796) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yport_index));
return res;
}


FUNCODEDEF(fun_797) {
  ARG(x_);
  P res, a1;
loop:
  res = lit_384;
return res;
}


FUNCODEDEF(fun_call_with_string_input_port_798) {
  ARG(proc_);
  ARG(string_);
  P res, a1, a2;
loop:
  res = CALL1(proc_,CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLstring_input_portG),(P)Ynil),(P)YPpair((P)CHKREF(Yport_guts),(P)Ynil),(P)YPpair((P)string_,(P)Ynil)));
return res;
}


FUNCODEDEF(fun_call_with_string_output_port_799) {
  ARG(proc_);
  P res, a1;
loop:
  res = CALL1(proc_,CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLstring_output_portG),(P)Ynil),Ynil,Ynil));
return res;
}


FUNCODEDEF(fun_peek_char_800) {
  ARG(port_);
  P res, a1;
loop:
  res = ((CALL2(CHKREF(YGE),CALL1(CHKREF(Yport_index),port_),CALL1(CHKREF(Ylen),CALL1(CHKREF(Yport_guts),port_))) != YPfalse)
    ? CALL0(CHKREF(Yeof_object))
    : CALL2(CHKREF(Yelt),CALL1(CHKREF(Yport_guts),port_),CALL1(CHKREF(Yport_index),port_)));
return res;
}


FUNCODEDEF(fun_read_char_801) {
  ARG(port_);
  P resF484;
  P res, a1;
loop:
  res = ((CALL2(CHKREF(YGE),CALL1(CHKREF(Yport_index),port_),CALL1(CHKREF(Ylen),CALL1(CHKREF(Yport_guts),port_))) != YPfalse)
    ? CALL0(CHKREF(Yeof_object))
    : (resF484=CALL2(CHKREF(Yelt),CALL1(CHKREF(Yport_guts),port_),CALL1(CHKREF(Yport_index),port_)),(CALL2(CHKREF(Yport_index_setter),CALL2(CHKREF(YA),CALL1(CHKREF(Yport_index),port_),lit_385),port_),
  resF484)));
return res;
}


FUNCODEDEF(fun_char_readyQ_802) {
  ARG(port_);
  P res, a1;
loop:
  res = YPtrue;
return res;
}


FUNCODEDEF(fun_write_char_803) {
  ARG(c_);
  ARG(port_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yport_guts_setter),CALL2(CHKREF(Yadd),CALL1(CHKREF(Yport_guts),port_),c_),port_);
return res;
}


FUNCODEDEF(fun_write_string_804) {
  ARG(s_);
  ARG(port_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yport_guts_setter),CALL2(CHKREF(Ycat),CALL1(CHKREF(Yport_guts),port_),s_),port_);
return res;
}


FUNCODEDEF(fun_loop_805) {
  P formF485;
  P res;
loop:
  res = (formF485=CALL1(CHKREF(Ysub_read),FREEREF(0)),((CALL1(CHKREF(Ynot),CALL1(CHKREF(Yreader_tokenQ),formF485)) != YPfalse)
    ? formF485
    : ((CALL2(CHKREF(YEE),formF485,CHKREF(YDclose_paren)) != YPfalse)
    ? CALL1(CHKREF(Ywarn),lit_386)
    : (PNUL))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_read_806) {
  ARG(port_);
  P loopF486;
  P res, a1;
loop:
  res = (loopF486=FUNSHELL(fun_loop_805, 2),FUNINIT(loopF486, 2,port_,loopF486),
  CALL0(loopF486));
return res;
}


FUNCODEDEF(fun_read_from_string_807) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ycall_with_string_input_port),x_,CHKREF(Yread));
return res;
}


FUNCODEDEF(fun_sub_read_carefully_808) {
  ARG(port_);
  P formF487;
  P res, a1;
loop:
  res = (formF487=CALL1(CHKREF(Ysub_read),port_),((CALL1(CHKREF(Yeof_objectQ),formF487) != YPfalse)
    ? CALL2(CHKREF(Yreading_error),port_,lit_387)
    : ((CALL1(CHKREF(Yreader_tokenQ),formF487) != YPfalse)
    ? CALL2(CHKREF(Yreading_error),port_,CALL1(CHKREF(Ytail),formF487))
    : formF487)));
return res;
}


FUNCODEDEF(fun_make_reader_token_809) {
  ARG(message_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yvec),CHKREF(YDreader_token_marker),message_);
return res;
}


FUNCODEDEF(fun_reader_tokenQ_810) {
  ARG(form_);
  P tmpF488;
  P res, a1;
loop:
  res = (tmpF488=CALL2(CHKREF(YisaQ),form_,CHKREF(YLvecG)),((tmpF488 != YPfalse)
    ? CALL2(CHKREF(YEE),CALL2(CHKREF(Yelt),form_,lit_389),CHKREF(YDreader_token_marker))
    : YPfalse));
return res;
}


FUNCODEDEF(fun_sub_read_811) {
  ARG(port_);
  P cF489;
  P res, a1;
loop:
  res = (cF489=CALL1(CHKREF(Yread_char),port_),((CALL1(CHKREF(Yeof_objectQ),cF489) != YPfalse)
    ? cF489
    : CALL2(CALL2(CHKREF(Yelt),CHKREF(YTread_dispatch_vectorT),CALL1(CHKREF(Ychar_Gascii),cF489)),cF489,port_)));
return res;
}


FUNCODEDEF(fun_812) {
  ARG(port_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yreading_error),port_,lit_392,c_);
return res;
}


FUNCODEDEF(fun_set_standard_syntaxX_813) {
  ARG(reader_);
  ARG(terminatingQ_);
  ARG(char_);
  P res, a1, a2, a3;
loop:
CALL3(CHKREF(Yelt_setter),reader_,CHKREF(YTread_dispatch_vectorT),CALL1(CHKREF(Ychar_Gascii),char_));
  res = CALL3(CHKREF(Yelt_setter),terminatingQ_,CHKREF(YTread_terminatingQ_vectorT),CALL1(CHKREF(Ychar_Gascii),char_));
return res;
}


FUNCODEDEF(fun_814) {
  ARG(port_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CALL1(CHKREF(Ysub_read),port_);
return res;
}


FUNCODEDEF(fun_815) {
  ARG(c_);
  P res, a1;
loop:
  res = CALL3(CHKREF(Yelt_setter),FREEREF(0),CHKREF(YTread_dispatch_vectorT),c_);
return res;
}


FUNCODEDEF(Ysub_read_constituent) {
  ARG(port_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yparse_token),CALL2(CHKREF(Ysub_read_token),c_,port_),port_);
return res;
}


FUNCODEDEF(fun_817) {
  ARG(c_);
  P res, a1;
loop:
  res = CALL3(CHKREF(Yset_standard_syntaxX),c_,YPfalse,CHKREF(Ysub_read_constituent));
return res;
}


FUNCODEDEF(fun_set_standard_read_macroX_818) {
  ARG(proc_);
  ARG(terminatingQ_);
  ARG(char_);
  P res, a1, a2, a3;
loop:
  res = CALL3(CHKREF(Yset_standard_syntaxX),char_,terminatingQ_,proc_);
return res;
}


FUNCODEDEF(fun_sub_read_list_819) {
  ARG(port_);
  ARG(c_);
  P another_formF492;
  P last_formF491;
  P formF490;
  P res, a1, a2;
loop:
  res = (formF490=CALL1(CHKREF(Ysub_read),port_),((CALL1(CHKREF(Yeof_objectQ),formF490) != YPfalse)
    ? CALL2(CHKREF(Yreading_error),port_,lit_395)
    : ((CALL2(CHKREF(YEE),formF490,CHKREF(YDclose_paren)) != YPfalse)
    ? Ynil
    : ((CALL2(CHKREF(YEE),formF490,CHKREF(YDdot)) != YPfalse)
    ? (last_formF491=CALL1(CHKREF(Ysub_read_carefully),port_),(another_formF492=CALL1(CHKREF(Ysub_read),port_),((CALL2(CHKREF(YEE),another_formF492,CHKREF(YDclose_paren)) != YPfalse)
    ? last_formF491
    : CALL3(CHKREF(Yreading_error),port_,lit_396,another_formF492))))
    : CALL2(CHKREF(Ypair),formF490,CALL2(CHKREF(Ysub_read_list),c_,port_))))));
return res;
}


FUNCODEDEF(fun_820) {
  ARG(port_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CHKREF(YDclose_paren);
return res;
}


FUNCODEDEF(fun_821) {
  ARG(port_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Ylst),lit_400,CALL1(CHKREF(Ysub_read_carefully),port_));
return res;
}


FUNCODEDEF(fun_822) {
  ARG(port_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Ylst),lit_402,CALL1(CHKREF(Ysub_read_carefully),port_));
return res;
}


FUNCODEDEF(fun_823) {
  ARG(port_);
  ARG(c_);
  P keywordF494;
  P nextF493;
  P res, a1, a2;
loop:
  res = (nextF493=CALL1(CHKREF(Ypeek_char),port_),(keywordF494=((CALL1(CHKREF(Yeof_objectQ),nextF493) != YPfalse)
    ? CALL2(CHKREF(Yreading_error),port_,lit_404)
    : ((CALL2(CHKREF(YE),nextF493,lit_405) != YPfalse)
    ? (CALL1(CHKREF(Yread_char),port_),
  lit_406)
    : lit_407)),CALL2(CHKREF(Ylst),keywordF494,CALL1(CHKREF(Ysub_read_carefully),port_))));
return res;
}


FUNCODEDEF(fun_loop_824) {
  ARG(i_);
  ARG(l_);
  P ecF498;
  P tmpF497;
  P cF496;
  P cF495;
  P res, a1, a2;
loop:
  res = (cF495=CALL1(CHKREF(Yread_char),FREEREF(0)),((CALL1(CHKREF(Yeof_objectQ),cF495) != YPfalse)
    ? CALL2(CHKREF(Yreading_error),FREEREF(0),lit_416)
    : ((CALL2(CHKREF(YE),cF495,lit_417) != YPfalse)
    ? (cF496=CALL1(CHKREF(Yread_char),FREEREF(0)),((CALL1(CHKREF(Yeof_objectQ),cF496) != YPfalse)
    ? CALL2(CHKREF(Yreading_error),FREEREF(0),lit_418)
    : (((tmpF497=CALL2(CHKREF(YE),cF496,lit_419),((tmpF497 != YPfalse)
    ? tmpF497
    : CALL2(CHKREF(YE),cF496,lit_420))) != YPfalse)
    ? (a1=CALL2(CHKREF(Ypair),cF496,l_),a2=CALL2(CHKREF(YA),i_,lit_421),l_=a1,i_=a2,PNUL)
    : (ecF498=CALL2(CHKREF(Yelt),CHKREF(YDstring_escape_chars),CALL2(CHKREF(Yas),CHKREF(YLintG),cF496)),((ecF498 != YPfalse)
    ? (a1=CALL2(CHKREF(Ypair),ecF498,l_),a2=CALL2(CHKREF(YA),i_,lit_422),l_=a1,i_=a2,PNUL)
    : CALL3(CHKREF(Yreading_error),FREEREF(0),lit_423,cF496))))))
    : ((CALL2(CHKREF(YE),cF495,lit_424) != YPfalse)
    ? CALL2(CHKREF(Yreverse_list_Gstring),l_,i_)
    : (a1=CALL2(CHKREF(Ypair),cF495,l_),a2=CALL2(CHKREF(YA),i_,lit_425),l_=a1,i_=a2,PNUL)))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(Yread_string_literal) {
  ARG(port_);
  ARG(c_);
  P loopF499;
  P res, a1, a2;
loop:
  res = (loopF499=FUNSHELL(fun_loop_824, 2),FUNINIT(loopF499, 2,port_,loopF499),
  CALL2(loopF499,Ynil,lit_426));
return res;
}


FUNCODEDEF(fun_826) {
  ARG(port_);
  ARG(c_);
  P res, a1, a2;
loop:
CALL1(CHKREF(Ygobble_line),port_);
  res = CALL1(CHKREF(Ysub_read),port_);
return res;
}


FUNCODEDEF(fun_loop_827) {
  P cF500;
  P res;
loop:
  res = (cF500=CALL1(CHKREF(Yread_char),FREEREF(0)),((CALL1(CHKREF(Yeof_objectQ),cF500) != YPfalse)
    ? cF500
    : ((CALL2(CHKREF(YE),cF500,lit_429) != YPfalse)
    ? YPfalse
    : (PNUL))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_gobble_line_828) {
  ARG(port_);
  P loopF501;
  P res, a1;
loop:
  res = (loopF501=FUNSHELL(fun_loop_827, 2),FUNINIT(loopF501, 2,port_,loopF501),
  CALL0(loopF501));
return res;
}


FUNCODEDEF(fun_define_sharp_macro_829) {
  ARG(proc_);
  ARG(c_);
  P res, a1, a2;
loop:
  res = ((YTsharp_macrosT = CALL2(CHKREF(Ypair),CALL2(CHKREF(Ylst),c_,proc_),CHKREF(YTsharp_macrosT))));
return res;
}


FUNCODEDEF(fun_830) {
  ARG(port_);
  ARG(c_);
  P probeF504;
  P cF503;
  P cF502;
  P res, a1, a2;
loop:
  res = (cF502=CALL1(CHKREF(Ypeek_char),port_),(cF503=((CALL1(CHKREF(Yeof_objectQ),cF502) != YPfalse)
    ? CALL2(CHKREF(Yreading_error),port_,lit_431)
    : CALL1(CHKREF(Yas_lowercase),cF502)),(probeF504=CALL2(CHKREF(Yassq),cF503,CHKREF(YTsharp_macrosT)),((probeF504 != YPfalse)
    ? CALL2(CALL1(CHKREF(Yhead),CALL1(CHKREF(Ytail),probeF504)),cF503,port_)
    : CALL3(CHKREF(Yreading_error),port_,lit_432,cF503)))));
return res;
}


FUNCODEDEF(fun_831) {
  ARG(port_);
  ARG(c_);
  P res, a1, a2;
loop:
CALL1(CHKREF(Yread_char),port_);
  res = YPfalse;
return res;
}


FUNCODEDEF(fun_832) {
  ARG(port_);
  ARG(c_);
  P res, a1, a2;
loop:
CALL1(CHKREF(Yread_char),port_);
  res = YPtrue;
return res;
}


FUNCODEDEF(fun_833) {
  ARG(port_);
  ARG(c_);
  P tempF507;
  P nameF506;
  P cF505;
  P res, a1, a2;
loop:
CALL1(CHKREF(Yread_char),port_);
  res = (cF505=CALL1(CHKREF(Ypeek_char),port_),((CALL1(CHKREF(Yeof_objectQ),cF505) != YPfalse)
    ? CALL2(CHKREF(Yreading_error),port_,lit_437)
    : ((CALL1(CHKREF(YalphabeticQ),cF505) != YPfalse)
    ? (nameF506=CALL1(CHKREF(Ysub_read_carefully),port_),((CALL2(CHKREF(YE),CALL1(CHKREF(Ylen),CALL2(CHKREF(Yas),CHKREF(YLstrG),nameF506)),lit_438) != YPfalse)
    ? cF505
    : (tempF507=CALL2(CHKREF(Yassq),nameF506,CHKREF(YDchar_long_names)),((tempF507 != YPfalse)
    ? CALL1(CHKREF(Yhead),CALL1(CHKREF(Ytail),tempF507))
    : CALL3(CHKREF(Yreading_error),port_,lit_439,nameF506)))))
    : CALL1(CHKREF(Yread_char),port_))));
return res;
}


FUNCODEDEF(fun_834) {
  ARG(port_);
  ARG(c_);
  P res, a1, a2;
loop:
CALL1(CHKREF(Yread_char),port_);
  res = CALL2(CHKREF(Yas),CHKREF(YLvecG),CALL2(CHKREF(Ysub_read_list),c_,port_));
return res;
}


FUNCODEDEF(fun_835) {
  ARG(port_);
  ARG(c_);
  P tmpF509;
  P stringF508;
  P res, a1, a2;
loop:
  res = (stringF508=CALL2(CHKREF(Ysub_read_token),lit_441,port_),(tmpF509=CALL1(CHKREF(Ystr_to_num),stringF508),((tmpF509 != YPfalse)
    ? tmpF509
    : CALL3(CHKREF(Yreading_error),port_,lit_442,stringF508))));
return res;
}


FUNCODEDEF(fun_836) {
  ARG(c_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ydefine_sharp_macro),c_,FREEREF(0));
return res;
}


FUNCODEDEF(fun_loop_837) {
  ARG(n_);
  ARG(l_);
  P tmpF511;
  P cF510;
  P res, a1, a2;
loop:
  res = (cF510=CALL1(CHKREF(Ypeek_char),FREEREF(0)),(((tmpF511=CALL1(CHKREF(Yeof_objectQ),cF510),((tmpF511 != YPfalse)
    ? tmpF511
    : CALL2(CHKREF(Yelt),CHKREF(YTread_terminatingQ_vectorT),CALL1(CHKREF(Ychar_Gascii),cF510)))) != YPfalse)
    ? CALL2(CHKREF(Yreverse_list_Gstring),l_,n_)
    : (a1=CALL2(CHKREF(Ypair),CALL1(CHKREF(Ypreferred_case),CALL1(CHKREF(Yread_char),FREEREF(0))),l_),a2=CALL2(CHKREF(YA),n_,lit_444),l_=a1,n_=a2,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_sub_read_token_838) {
  ARG(port_);
  ARG(c_);
  P loopF512;
  P res, a1, a2;
loop:
  res = (loopF512=FUNSHELL(fun_loop_837, 2),FUNINIT(loopF512, 2,port_,loopF512),
  CALL2(loopF512,CALL1(CHKREF(Ylst),CALL1(CHKREF(Ypreferred_case),c_)),lit_445));
return res;
}


FUNCODEDEF(fun_839) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(YE),FREEREF(0),x_);
return res;
}


FUNCODEDEF(fun_parse_token_840) {
  ARG(port_);
  ARG(string_);
  P maybe_numberF517;
  P tmpF516;
  P tmpF515;
  P tmpF514;
  P cF513;
  P res, a1, a2;
loop:
  res = (((cF513=CALL2(CHKREF(Yelt),string_,lit_446),(tmpF514=CALL1(CHKREF(YnumericQ),cF513),((tmpF514 != YPfalse)
    ? tmpF514
    : (tmpF515=CALL2(CHKREF(YE),cF513,lit_447),((tmpF515 != YPfalse)
    ? tmpF515
    : (tmpF516=CALL2(CHKREF(YE),cF513,lit_448),((tmpF516 != YPfalse)
    ? tmpF516
    : CALL2(CHKREF(YE),cF513,lit_449)))))))) != YPfalse)
    ? (maybe_numberF517=CALL1(CHKREF(Ystr_to_num),string_),((maybe_numberF517 != YPfalse)
    ? maybe_numberF517
    : ((CALL2(CHKREF(YanyQ),FUNFAB(fun_839, 1,string_),CHKREF(YDstrange_symbol_names)) != YPfalse)
    ? CALL2(CHKREF(Yas),CHKREF(YLsymG),CALL1(CHKREF(Ymake_immutableX),string_))
    : ((CALL2(CHKREF(YE),string_,lit_450) != YPfalse)
    ? CHKREF(YDdot)
    : CALL3(CHKREF(Yreading_error),port_,lit_451,string_)))))
    : CALL2(CHKREF(Yas),CHKREF(YLsymG),CALL1(CHKREF(Ymake_immutableX),string_)));
return res;
}


FUNCODEDEF(fun_reading_error_841) {
  ARG(irritants_);
  ARG(message_);
  ARG(port_);
  P res, a1, a2, a3;
loop:
  res = CALL2(CHKREF(Yerror),CALL2(CHKREF(Ycat),message_,lit_456),CALL2(CHKREF(Ycat),irritants_,CALL1(CHKREF(Ylst),port_)));
return res;
}


FUNCODEDEF(fun_warn_842) {
  ARG(irritants_and_port_);
  ARG(string_);
  P res, a1, a2;
loop:
  res = YPfalse;
return res;
}


FUNCODEDEF(fun_reverse_list_Gstring_843) {
  ARG(n_);
  ARG(l_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yas),CHKREF(YLstrG),CALL1(CHKREF(YrevX),l_));
return res;
}


FUNCODEDEF(fun_make_immutableX_844) {
  ARG(x_);
  P res, a1;
loop:
  res = x_;
return res;
}


FUNCODEDEF(fun_as_binding_name_845) {
  ARG(name_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yas),CHKREF(YLstrG),name_);
return res;
}


FUNCODEDEF(fun_display_846) {
  ARG(x_);
  ARG(port_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YEE),x_,CHKREF(YLstrG)) != YPfalse)
    ? CALL2(CHKREF(Ywrite_string),port_,CALL1(CHKREF(Yas_binding_name),lit_457))
    : CALL2(CHKREF(Ywrite_string),port_,x_));
return res;
}


FUNCODEDEF(fun_display_847) {
  ARG(x_);
  ARG(port_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YEE),x_,CHKREF(YLchrG)) != YPfalse)
    ? CALL2(CHKREF(Ywrite_string),port_,CALL1(CHKREF(Yas_binding_name),lit_458))
    : CALL2(CHKREF(Ywrite_char),port_,x_));
return res;
}


FUNCODEDEF(fun_recur_848) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL3(CHKREF(Yrecurring_write),FREEREF(0),x_,FREEREF(1));
return res;
}


FUNCODEDEF(fun_display_849) {
  ARG(x_);
  ARG(port_);
  P recurF518;
  P res, a1, a2;
loop:
  res = (recurF518=FUNSHELL(fun_recur_848, 2),FUNINIT(recurF518, 2,port_,recurF518),
  CALL1(recurF518,x_));
return res;
}


FUNCODEDEF(fun_write_to_string_850) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ycall_with_string_output_port),CALL2(CHKREF(Yrcurry),CHKREF(Ywrite),x_));
return res;
}


FUNCODEDEF(fun_recur_851) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL3(CHKREF(Yrecurring_write),FREEREF(0),x_,FREEREF(1));
return res;
}


FUNCODEDEF(fun_write_852) {
  ARG(x_);
  ARG(port_);
  P recurF519;
  P res, a1, a2;
loop:
  res = (recurF519=FUNSHELL(fun_recur_851, 2),FUNINIT(recurF519, 2,port_,recurF519),
  CALL1(recurF519,x_));
return res;
}


FUNCODEDEF(fun_writeln_853) {
  ARG(x_);
  ARG(port_);
  P res, a1, a2;
loop:
CALL2(CHKREF(Ywrite),port_,x_);
  res = CALL1(CHKREF(Ynewline),port_);
return res;
}


FUNCODEDEF(fun_recurring_write_854) {
  ARG(recur_);
  ARG(x_);
  ARG(port_);
  P res, a1, a2, a3;
loop:
  res = ((CALL1(CHKREF(YemptyQ),x_) != YPfalse)
    ? CALL2(CHKREF(Ywrite_string),port_,lit_459)
    : ((CALL2(CHKREF(YEE),x_,CHKREF(YLlstG)) != YPfalse)
    ? CALL2(CHKREF(Ywrite_string),port_,CALL1(CHKREF(Yas_binding_name),lit_460))
    : CALL3(CHKREF(Ywrite_list),port_,x_,recur_)));
return res;
}


FUNCODEDEF(fun_recurring_write_855) {
  ARG(recur_);
  ARG(x_);
  ARG(port_);
  P res, a1, a2, a3;
loop:
  res = ((CALL2(CHKREF(YEE),x_,CHKREF(YLvecG)) != YPfalse)
    ? CALL2(CHKREF(Ywrite_string),port_,CALL1(CHKREF(Yas_binding_name),lit_461))
    : CALL3(CHKREF(Ywrite_vector),port_,x_,recur_));
return res;
}


FUNCODEDEF(fun_recurring_write_856) {
  ARG(recur_);
  ARG(x_);
  ARG(port_);
  P res, a1, a2, a3;
loop:
  res = ((x_ != YPfalse)
    ? CALL2(CHKREF(Ywrite_boolean),port_,lit_462)
    : CALL2(CHKREF(Ywrite_boolean),port_,lit_463));
return res;
}


FUNCODEDEF(fun_recurring_write_857) {
  ARG(recur_);
  ARG(x_);
  ARG(port_);
  P res, a1, a2, a3;
loop:
  res = ((CALL2(CHKREF(YEE),x_,CHKREF(YLsymG)) != YPfalse)
    ? CALL2(CHKREF(Ywrite_string),port_,CALL1(CHKREF(Yas_binding_name),lit_464))
    : CALL2(CHKREF(Ywrite_string),port_,CALL2(CHKREF(Yas),CHKREF(YLstrG),x_)));
return res;
}


FUNCODEDEF(fun_recurring_write_858) {
  ARG(recur_);
  ARG(x_);
  ARG(port_);
  P res, a1, a2, a3;
loop:
  res = ((CALL2(CHKREF(YEE),x_,CHKREF(YLlocG)) != YPfalse)
    ? CALL2(CHKREF(Ywrite_string),port_,CALL1(CHKREF(Yas_binding_name),lit_465))
    : (CALL2(CHKREF(Ywrite_string),port_,lit_466),
  CALL2(CHKREF(Ynum_to_str),(P)YPib((P)(P)YPlu((P)x_)),lit_467)));
return res;
}


FUNCODEDEF(fun_recurring_write_859) {
  ARG(recur_);
  ARG(x_);
  ARG(port_);
  P res, a1, a2, a3;
loop:
  res = ((CALL2(CHKREF(YOOEE),x_,CHKREF(YLnumG)) != YPfalse)
    ? CALL2(CHKREF(Ywrite_string),port_,CALL1(CHKREF(Yas_binding_name),lit_468))
    : CALL2(CHKREF(Ywrite_number),port_,x_));
return res;
}


FUNCODEDEF(fun_recurring_write_860) {
  ARG(recur_);
  ARG(x_);
  ARG(port_);
  P res, a1, a2, a3;
loop:
  res = ((CALL2(CHKREF(YEE),x_,CHKREF(YLstrG)) != YPfalse)
    ? CALL2(CHKREF(Ywrite_string),port_,CALL1(CHKREF(Yas_binding_name),lit_469))
    : CALL2(CHKREF(Ywrite_string_literal),port_,x_));
return res;
}


FUNCODEDEF(fun_recurring_write_861) {
  ARG(recur_);
  ARG(x_);
  ARG(port_);
  P res, a1, a2, a3;
loop:
  res = ((CALL2(CHKREF(YEE),x_,CHKREF(YLchrG)) != YPfalse)
    ? CALL2(CHKREF(Ywrite_string),port_,CALL1(CHKREF(Yas_binding_name),lit_470))
    : CALL2(CHKREF(Ywrite_char_literal),port_,x_));
return res;
}


FUNCODEDEF(fun_write_boolean_862) {
  ARG(mumble_);
  ARG(port_);
  P res, a1, a2;
loop:
CALL2(CHKREF(Ywrite_char),port_,lit_471);
  res = CALL2(CHKREF(Ywrite),port_,mumble_);
return res;
}


FUNCODEDEF(fun_write_number_863) {
  ARG(x_);
  ARG(port_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YEE),x_,CHKREF(YLintG)) != YPfalse)
    ? CALL2(CHKREF(Ywrite_string),port_,CALL1(CHKREF(Yas_binding_name),lit_472))
    : ((CALL2(CHKREF(YEE),x_,CHKREF(YLfloG)) != YPfalse)
    ? CALL2(CHKREF(Ywrite_string),port_,CALL1(CHKREF(Yas_binding_name),lit_473))
    : CALL2(CHKREF(Ywrite_string),port_,CALL2(CHKREF(Ynum_to_str),x_,lit_474))));
return res;
}


FUNCODEDEF(fun_write_char_literal_864) {
  ARG(x_);
  ARG(port_);
  P probeF520;
  P res, a1, a2;
loop:
  res = (probeF520=CALL1(CHKREF(Ycharacter_name),x_),(CALL2(CHKREF(Ywrite_string),port_,lit_475),
  ((probeF520 != YPfalse)
    ? CALL2(CHKREF(Ywrite),port_,probeF520)
    : CALL2(CHKREF(Ywrite_char),port_,x_))));
return res;
}


FUNCODEDEF(fun_character_name_865) {
  ARG(char_);
  P res, a1;
loop:
  res = ((CALL2(CHKREF(YE),char_,lit_476) != YPfalse)
    ? lit_477
    : ((CALL2(CHKREF(YE),char_,lit_478) != YPfalse)
    ? lit_479
    : YPfalse));
return res;
}


FUNCODEDEF(fun_loop_866) {
  ARG(i_);
  P tmpF522;
  P cF521;
  P res, a1;
loop:
  res = ((CALL2(CHKREF(YE),i_,FREEREF(0)) != YPfalse)
    ? CALL2(CHKREF(Ywrite_char),FREEREF(1),lit_481)
    : (cF521=CALL2(CHKREF(Yelt),FREEREF(2),i_),((((tmpF522=CALL2(CHKREF(YE),cF521,lit_482),((tmpF522 != YPfalse)
    ? tmpF522
    : CALL2(CHKREF(YE),cF521,lit_483))) != YPfalse)
    ? CALL2(CHKREF(Ywrite_char),FREEREF(1),lit_484)
    : YPfalse),
  CALL2(CHKREF(Ywrite_char),FREEREF(1),cF521),
  (a1=CALL2(CHKREF(YA),i_,lit_485),i_=a1,PNUL))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_write_string_literal_867) {
  ARG(x_);
  ARG(port_);
  P loopF524;
  P lenF523;
  P res, a1, a2;
loop:
CALL2(CHKREF(Ywrite_char),port_,lit_480);
  res = (lenF523=CALL1(CHKREF(Ylen),x_),(loopF524=FUNSHELL(fun_loop_866, 4),FUNINIT(loopF524, 4,lenF523,port_,x_,loopF524),
  CALL1(loopF524,lit_486)));
return res;
}


FUNCODEDEF(fun_loop_868) {
  ARG(n_);
  ARG(l_);
  P res, a1, a2;
loop:
  res = ((CALL1(CHKREF(Ynot),CALL1(CHKREF(YemptyQ),l_)) != YPfalse)
    ? (CALL2(CHKREF(Ywrite_char),FREEREF(0),lit_489),
  CALL1(FREEREF(1),CALL1(CHKREF(Yhead),l_)),
  (a1=CALL1(CHKREF(Ytail),l_),a2=CALL2(CHKREF(YA),n_,lit_490),l_=a1,n_=a2,PNUL))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_write_list_869) {
  ARG(recur_);
  ARG(x_);
  ARG(port_);
  P loopF525;
  P res, a1, a2, a3;
loop:
  res = ((CALL1(CHKREF(YquotationQ),x_) != YPfalse)
    ? (CALL2(CHKREF(Ywrite_char),port_,lit_487),
  CALL1(recur_,CALL1(CHKREF(Yhead),CALL1(CHKREF(Ytail),x_))))
    : (CALL2(CHKREF(Ywrite_char),port_,lit_488),
  CALL1(recur_,CALL1(CHKREF(Yhead),x_)),
  (loopF525=FUNSHELL(fun_loop_868, 3),FUNINIT(loopF525, 3,port_,recur_,loopF525),
  CALL2(loopF525,CALL1(CHKREF(Ytail),x_),lit_491)),
  CALL2(CHKREF(Ywrite_char),port_,lit_492)));
return res;
}


FUNCODEDEF(fun_quotationQ_870) {
  ARG(x_);
  P tmpF528;
  P tmpF527;
  P tmpF526;
  P res, a1;
loop:
  res = (tmpF526=CALL2(CHKREF(YisaQ),x_,CHKREF(YLlstG)),((tmpF526 != YPfalse)
    ? (tmpF527=CALL2(CHKREF(YEE),CALL1(CHKREF(Yhead),x_),lit_493),((tmpF527 != YPfalse)
    ? (tmpF528=CALL2(CHKREF(YisaQ),CALL1(CHKREF(Ytail),x_),CHKREF(YLlstG)),((tmpF528 != YPfalse)
    ? CALL1(CHKREF(YemptyQ),CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),x_)))
    : YPfalse))
    : YPfalse))
    : YPfalse));
return res;
}


FUNCODEDEF(fun_loop_871) {
  ARG(i_);
  P res, a1;
loop:
  res = ((CALL2(CHKREF(YGE),i_,FREEREF(0)) != YPfalse)
    ? YPtrue
    : (CALL2(CHKREF(Ywrite_char),FREEREF(1),lit_497),
  CALL1(FREEREF(3),CALL2(CHKREF(Yelt),FREEREF(2),i_)),
  (a1=CALL2(CHKREF(YA),i_,lit_498),i_=a1,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_write_vector_872) {
  ARG(recur_);
  ARG(x_);
  ARG(port_);
  P loopF530;
  P zF529;
  P res, a1, a2, a3;
loop:
CALL2(CHKREF(Ywrite_string),port_,lit_494);
  (zF529=CALL1(CHKREF(Ylen),x_),((CALL2(CHKREF(YG),zF529,lit_495) != YPfalse)
    ? (CALL1(recur_,CALL2(CHKREF(Yelt),x_,lit_496)),
  (loopF530=FUNSHELL(fun_loop_871, 5),FUNINIT(loopF530, 5,zF529,port_,x_,recur_,loopF530),
  CALL1(loopF530,lit_499)))
    : YPfalse));
  res = CALL2(CHKREF(Ywrite_char),port_,lit_500);
return res;
}


FUNCODEDEF(fun_recurring_write_873) {
  ARG(recur_);
  ARG(x_);
  ARG(port_);
  P res, a1, a2, a3;
loop:
  res = CALL2(CHKREF(Ywrite_string),port_,lit_501);
return res;
}


FUNCODEDEF(fun_recurring_write_874) {
  ARG(recur_);
  ARG(x_);
  ARG(port_);
  P res, a1, a2, a3;
loop:
  res = CALL2(CHKREF(Ywrite_string),port_,lit_502);
return res;
}


FUNCODEDEF(fun_object_name_875) {
  ARG(x_);
  P tmpF532;
  P nameF531;
  P res, a1;
loop:
  res = (nameF531=(P)YPbinding_name((P)x_),(tmpF532=nameF531,((tmpF532 != YPfalse)
    ? CALL2(CHKREF(Yas),CHKREF(YLstrG),nameF531)
    : YPfalse)));
return res;
}


FUNCODEDEF(fun_write_fun_guts_876) {
  ARG(recur_);
  ARG(name_);
  ARG(x_);
  ARG(port_);
  P tmpF534;
  P nameF533;
  P res, a1, a2, a3, a4;
loop:
CALL2(CHKREF(Ywrite_string),port_,lit_503);
  CALL2(CHKREF(Ywrite_string),port_,name_);
  (nameF533=CALL1(CHKREF(Yobject_name),x_),(tmpF534=nameF533,((tmpF534 != YPfalse)
    ? (CALL2(CHKREF(Ywrite_char),port_,lit_504),
  CALL2(CHKREF(Ywrite_string),port_,nameF533))
    : YPfalse)));
  CALL2(CHKREF(Ywrite_char),port_,lit_505);
  CALL1(recur_,CALL1(CHKREF(Yfun_specs),x_));
  res = CALL2(CHKREF(Ywrite_string),port_,lit_506);
return res;
}


FUNCODEDEF(fun_recurring_write_877) {
  ARG(recur_);
  ARG(x_);
  ARG(port_);
  P res, a1, a2, a3;
loop:
  res = ((CALL2(CHKREF(YEE),x_,CHKREF(YLgenG)) != YPfalse)
    ? CALL2(CHKREF(Ywrite_string),port_,CALL1(CHKREF(Yas_binding_name),lit_507))
    : CALLN(CHKREF(Ywrite_fun_guts),4,port_,x_,lit_508,recur_));
return res;
}


FUNCODEDEF(fun_recurring_write_878) {
  ARG(recur_);
  ARG(x_);
  ARG(port_);
  P res, a1, a2, a3;
loop:
  res = ((CALL2(CHKREF(YEE),x_,CHKREF(YLmetG)) != YPfalse)
    ? CALL2(CHKREF(Ywrite_string),port_,CALL1(CHKREF(Yas_binding_name),lit_509))
    : CALLN(CHKREF(Ywrite_fun_guts),4,port_,x_,lit_510,recur_));
return res;
}


FUNCODEDEF(fun_879) {
  ARG(slot_);
  P getterF535;
  P res, a1;
loop:
  res = (getterF535=CALL1(CHKREF(Yslot_getter),slot_),(CALL2(CHKREF(Ywrite_char),FREEREF(0),lit_512),
  CALL2(CHKREF(Ydisplay),FREEREF(0),CALL1(CHKREF(Yobject_name),getterF535)),
  CALL2(CHKREF(Ywrite_string),FREEREF(0),lit_513),
  CALL1(FREEREF(2),CALL2(CHKREF(Yslot_value),FREEREF(1),getterF535))));
return res;
}


FUNCODEDEF(fun_recurring_write_880) {
  ARG(recur_);
  ARG(x_);
  ARG(port_);
  P ownerF537;
  P nameF536;
  P res, a1, a2, a3;
loop:
  res = (nameF536=CALL1(CHKREF(Yobject_name),x_),((nameF536 != YPfalse)
    ? CALL2(CHKREF(Ywrite_string),port_,CALL1(CHKREF(Yas_binding_name),nameF536))
    : (ownerF537=CALL1(CHKREF(Yobject_name),CALL1(CHKREF(Y1st),CALL1(CHKREF(Yobject_parents),x_))),(CALL2(CHKREF(Ywrite_string),port_,lit_511),
  CALL2(CHKREF(Ydisplay),port_,ownerF537),
  CALL2(CHKREF(Ydo),FUNFAB(fun_879, 3,port_,x_,recur_),CALL1(CHKREF(Yobject_slots),x_)),
  CALL2(CHKREF(Ywrite_string),port_,lit_514)))));
return res;
}


FUNCODEDEF(fun_recurring_write_881) {
  ARG(recur_);
  ARG(x_);
  ARG(port_);
  P res, a1, a2, a3;
loop:
  res = CALL2(CHKREF(Ywrite_string),port_,lit_515);
return res;
}


FUNCODEDEF(fun_arg_882) {
  ARG(class_);
  ARG(char_);
  P tmpF540;
  P argumentF539;
  P current_indexF538;
  P res, a1, a2;
loop:
  res = (current_indexF538=BOXVAL(FREEREF(0)),((BOXVAL(FREEREF(0))=CALL2(CHKREF(YA),BOXVAL(FREEREF(0)),lit_517)),
  ((CALL1(CHKREF(Ynot),CALL2(CHKREF(YL),current_indexF538,FREEREF(1))) != YPfalse)
    ? CALL3(CHKREF(Yerror),lit_518,FREEREF(2),FREEREF(3))
    : YPfalse),
  (argumentF539=CALL2(CHKREF(Yelt),FREEREF(3),current_indexF538),(((CALL1(CHKREF(Ynot),(tmpF540=CALL2(CHKREF(YEE),class_,CHKREF(YLanyG)),((tmpF540 != YPfalse)
    ? tmpF540
    : CALL2(CHKREF(YisaQ),argumentF539,class_)))) != YPfalse)
    ? CALLN(CHKREF(Yerror),4,lit_519,char_,class_,argumentF539)
    : YPfalse),
  argumentF539))));
return res;
}


FUNCODEDEF(fun_883) {
  ARG(c_);
  P x_1008F548;
  P x_1007F547;
  P x_1006F546;
  P x_1005F545;
  P x_1004F544;
  P x_1003F543;
  P x_1002F542;
  P x_1001F541;
  P res, a1;
loop:
  res = ((BOXVAL(FREEREF(0)) != YPfalse)
    ? ((x_1001F541=CALL1(CHKREF(Yas_uppercase),c_),((CALL2(CHKREF(YEE),x_1001F541,lit_520) != YPfalse)
    ? CALL2(CHKREF(Ywrite_string),FREEREF(1),CALL1(CHKREF(Ynum_to_str),CALL2(FREEREF(2),c_,CHKREF(YLnumG))))
    : (x_1002F542=x_1001F541,((CALL2(CHKREF(YEE),x_1002F542,lit_521) != YPfalse)
    ? CALL2(CHKREF(Ywrite_string),FREEREF(1),CALL2(CHKREF(Ynum_to_str),CALL2(FREEREF(2),c_,CHKREF(YLintG)),lit_522))
    : (x_1003F543=x_1002F542,((CALL2(CHKREF(YEE),x_1003F543,lit_523) != YPfalse)
    ? CALL2(CHKREF(Ywrite_string),FREEREF(1),CALL2(CHKREF(Ynum_to_str),CALL2(FREEREF(2),c_,CHKREF(YLintG)),lit_524))
    : (x_1004F544=x_1003F543,((CALL2(CHKREF(YEE),x_1004F544,lit_525) != YPfalse)
    ? CALL2(CHKREF(Ywrite_string),FREEREF(1),CALL2(CHKREF(Ynum_to_str),CALL2(FREEREF(2),c_,CHKREF(YLintG)),lit_526))
    : (x_1005F545=x_1004F544,((CALL2(CHKREF(YEE),x_1005F545,lit_527) != YPfalse)
    ? CALL2(CHKREF(Ywrite_char),FREEREF(1),CALL2(FREEREF(2),c_,CHKREF(YLchrG)))
    : (x_1006F546=x_1005F545,((CALL2(CHKREF(YEE),x_1006F546,lit_528) != YPfalse)
    ? CALL2(CHKREF(Ydisplay),FREEREF(1),CALL2(FREEREF(2),c_,CHKREF(YLanyG)))
    : (x_1007F547=x_1006F546,((CALL2(CHKREF(YEE),x_1007F547,lit_529) != YPfalse)
    ? CALL2(CHKREF(Ywrite),FREEREF(1),CALL2(FREEREF(2),c_,CHKREF(YLanyG)))
    : (x_1008F548=x_1007F547,((CALL2(CHKREF(YEE),x_1008F548,lit_530) != YPfalse)
    ? CALL2(CHKREF(Ywrite_char),FREEREF(1),lit_531)
    : CALL3(CHKREF(Yerror),lit_532,c_,FREEREF(3)))))))))))))))))),
  (BOXVAL(FREEREF(0))=YPfalse))
    : ((CALL2(CHKREF(YEE),c_,lit_533) != YPfalse)
    ? (BOXVAL(FREEREF(0))=YPtrue)
    : CALL2(CHKREF(Ywrite_char),FREEREF(1),c_)));
return res;
}


FUNCODEDEF(fun_format_884) {
  ARG(arguments_);
  ARG(message_);
  ARG(port_);
  P argF552;
  P no_of_argumentsF551;
  P argument_indexF550;
  P found_percentQF549;
  P res, a1, a2, a3;
loop:
  res = (found_percentQF549=YPfalse,(found_percentQF549= BOXFAB(found_percentQF549),
  (argument_indexF550=lit_516,(argument_indexF550= BOXFAB(argument_indexF550),
  (no_of_argumentsF551=CALL1(CHKREF(Ylen),arguments_),((argF552=FUNSHELL(fun_arg_882, 4),FUNINIT(argF552, 4,argument_indexF550,no_of_argumentsF551,message_,arguments_),
  CALL2(CHKREF(Ydo),FUNFAB(fun_883, 4,found_percentQF549,port_,argF552,message_),message_)),
  ((CALL1(CHKREF(Ynot),CALL1(CHKREF(Ynot),BOXVAL(found_percentQF549))) != YPfalse)
    ? CALL2(CHKREF(Yerror),lit_534,message_)
    : YPfalse)))))));
return res;
}


FUNCODEDEF(fun_sexpr_self_evaluatingQ_885) {
  ARG(exp_);
  P tmpF557;
  P tmpF556;
  P tmpF555;
  P tmpF554;
  P tmpF553;
  P res, a1;
loop:
  res = (tmpF553=CALL2(CHKREF(YisaQ),exp_,CHKREF(YLnumG)),((tmpF553 != YPfalse)
    ? tmpF553
    : (tmpF554=CALL2(CHKREF(YisaQ),exp_,CHKREF(YLchrG)),((tmpF554 != YPfalse)
    ? tmpF554
    : (tmpF555=CALL2(CHKREF(YEE),exp_,YPtrue),((tmpF555 != YPfalse)
    ? tmpF555
    : (tmpF556=CALL2(CHKREF(YEE),exp_,YPfalse),((tmpF556 != YPfalse)
    ? tmpF556
    : (tmpF557=CALL2(CHKREF(YisaQ),exp_,CHKREF(YLstrG)),((tmpF557 != YPfalse)
    ? tmpF557
    : CALL2(CHKREF(YisaQ),exp_,CHKREF(YLvecG))))))))))));
return res;
}


FUNCODEDEF(fun_sexpr_variableQ_886) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(YisaQ),exp_,CHKREF(YLsymG));
return res;
}


FUNCODEDEF(fun_sexpr_tagged_listQ_887) {
  ARG(tag_);
  ARG(exp_);
  P tmpF558;
  P res, a1, a2;
loop:
  res = (tmpF558=CALL2(CHKREF(YisaQ),exp_,CHKREF(YLlstG)),((tmpF558 != YPfalse)
    ? CALL2(CHKREF(YEE),CALL1(CHKREF(Yhead),exp_),tag_)
    : YPfalse));
return res;
}


FUNCODEDEF(fun_sexpr_quotedQ_888) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),exp_,CHKREF(YDsexpr_quote_tag));
return res;
}


FUNCODEDEF(fun_sexpr_make_quote_889) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ylst),CHKREF(YDsexpr_quote_tag),exp_);
return res;
}


FUNCODEDEF(fun_sexpr_text_of_quotation_890) {
  ARG(quot_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Y2nd),quot_);
return res;
}


FUNCODEDEF(fun_sexpr_assignmentQ_891) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),exp_,CHKREF(YDsexpr_set_tag));
return res;
}


FUNCODEDEF(fun_sexpr_assignment_variable_892) {
  ARG(assn_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Y2nd),assn_);
return res;
}


FUNCODEDEF(fun_sexpr_assignment_value_893) {
  ARG(assn_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Y3rd),assn_);
return res;
}


FUNCODEDEF(fun_sexpr_variable_name_894) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Y1st),exp_);
return res;
}


FUNCODEDEF(fun_sexpr_variable_name_895) {
  ARG(exp_);
  P res, a1;
loop:
  res = exp_;
return res;
}


FUNCODEDEF(fun_sexpr_variable_type_896) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Y2nd),exp_);
return res;
}


FUNCODEDEF(fun_sexpr_variable_type_897) {
  ARG(exp_);
  P res, a1;
loop:
  res = lit_537;
return res;
}


FUNCODEDEF(fun_sexpr_definitionQ_898) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),exp_,CHKREF(YDsexpr_define_tag));
return res;
}


FUNCODEDEF(fun_sexpr_definition_variable_899) {
  ARG(defn_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Y2nd),defn_);
return res;
}


FUNCODEDEF(fun_sexpr_definition_value_900) {
  ARG(defn_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Y3rd),defn_);
return res;
}


FUNCODEDEF(fun_sexpr_syntax_definitionQ_901) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),exp_,CHKREF(YDsexpr_define_syntax_tag));
return res;
}


FUNCODEDEF(fun_sexpr_syntax_definition_variable_902) {
  ARG(defn_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Y1st),CALL1(CHKREF(Yhead),CALL1(CHKREF(Ytail),defn_)));
return res;
}


FUNCODEDEF(fun_sexpr_syntax_definition_value_903) {
  ARG(defn_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ypair),CHKREF(YDsexpr_macro_tag),CALL2(CHKREF(Ypair),CALL1(CHKREF(Y2nd),defn_),CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),defn_))));
return res;
}


FUNCODEDEF(fun_sexpr_function_definitionQ_904) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),exp_,CHKREF(YDsexpr_define_function_tag));
return res;
}


FUNCODEDEF(fun_sexpr_method_definitionQ_905) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),exp_,CHKREF(YDsexpr_define_method_tag));
return res;
}


FUNCODEDEF(fun_sexpr_generic_definitionQ_906) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),exp_,CHKREF(YDsexpr_define_generic_tag));
return res;
}


FUNCODEDEF(fun_sexpr_function_definition_variable_907) {
  ARG(defn_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Y2nd),defn_);
return res;
}


FUNCODEDEF(fun_sexpr_signature_parameters_908) {
  ARG(signature_);
  P values_spec_indexF559;
  P res, a1;
loop:
  res = (values_spec_indexF559=CALL2(CHKREF(Ypos),signature_,lit_545),((CALL2(CHKREF(YEE),values_spec_indexF559,CHKREF(Ynul)) != YPfalse)
    ? signature_
    : CALL3(CHKREF(Ysub),signature_,lit_546,values_spec_indexF559)));
return res;
}


FUNCODEDEF(fun_sexpr_signature_values_909) {
  ARG(signature_);
  P values_spec_indexF560;
  P res, a1;
loop:
  res = (values_spec_indexF560=CALL2(CHKREF(Ypos),signature_,lit_547),((CALL2(CHKREF(YEE),values_spec_indexF560,CHKREF(Ynul)) != YPfalse)
    ? Ynil
    : CALL3(CHKREF(Ysub),signature_,CALL2(CHKREF(YA),values_spec_indexF560,lit_548),CALL1(CHKREF(Ylen),signature_))));
return res;
}


FUNCODEDEF(fun_sexpr_function_parameters_910) {
  ARG(defn_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ysexpr_signature_parameters),CALL1(CHKREF(Y3rd),defn_));
return res;
}


FUNCODEDEF(fun_sexpr_function_body_911) {
  ARG(defn_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),defn_)));
return res;
}


FUNCODEDEF(fun_sexpr_function_definition_value_912) {
  ARG(defn_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ypair),CHKREF(YDsexpr_method_tag),CALL2(CHKREF(Ypair),CALL1(CHKREF(Y3rd),defn_),CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),defn_)))));
return res;
}


FUNCODEDEF(fun_sexpr_methodQ_913) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),exp_,CHKREF(YDsexpr_method_tag));
return res;
}


FUNCODEDEF(fun_sexpr_method_parameters_914) {
  ARG(method_exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ysexpr_signature_parameters),CALL1(CHKREF(Y2nd),method_exp_));
return res;
}


FUNCODEDEF(fun_sexpr_method_values_915) {
  ARG(method_exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ysexpr_signature_values),CALL1(CHKREF(Y2nd),method_exp_));
return res;
}


FUNCODEDEF(fun_sexpr_method_body_916) {
  ARG(method_exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),method_exp_));
return res;
}


FUNCODEDEF(fun_sexpr_make_anonymous_method_917) {
  ARG(body_);
  ARG(parameters_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Ycat),CALL1(CHKREF(Ylst),CHKREF(YDsexpr_method_tag)),CALL1(CHKREF(Ylst),parameters_),body_);
return res;
}


FUNCODEDEF(fun_sexpr_make_method_918) {
  ARG(body_);
  ARG(parameters_);
  ARG(name_);
  P res, a1, a2, a3;
loop:
  res = CALL2(CHKREF(Ycat),CALL3(CHKREF(Ylst),CHKREF(YDsexpr_define_method_tag),name_,parameters_),body_);
return res;
}


FUNCODEDEF(fun_sexpr_ifQ_919) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),exp_,CHKREF(YDsexpr_if_tag));
return res;
}


FUNCODEDEF(fun_sexpr_if_test_920) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Y2nd),exp_);
return res;
}


FUNCODEDEF(fun_sexpr_if_then_921) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Y3rd),exp_);
return res;
}


FUNCODEDEF(fun_sexpr_if_else_922) {
  ARG(exp_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(YemptyQ),CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),exp_)))) != YPfalse)
    ? YPfalse
    : CALL1(CHKREF(Yhead),CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),exp_)))));
return res;
}


FUNCODEDEF(fun_sexpr_make_if_923) {
  ARG(else_);
  ARG(then_);
  ARG(test_);
  P res, a1, a2, a3;
loop:
  res = CALLN(CHKREF(Ylst),4,CHKREF(YDsexpr_if_tag),test_,then_,else_);
return res;
}


FUNCODEDEF(fun_sexpr_blockQ_924) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),exp_,CHKREF(YDsexpr_bind_exit_tag));
return res;
}


FUNCODEDEF(fun_sexpr_block_name_925) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Y2nd),exp_);
return res;
}


FUNCODEDEF(fun_sexpr_block_body_926) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),exp_));
return res;
}


FUNCODEDEF(fun_sexpr_unwind_protectQ_927) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),exp_,CHKREF(YDsexpr_unwind_protect_tag));
return res;
}


FUNCODEDEF(fun_sexpr_unwind_protect_protected_form_928) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Y2nd),exp_);
return res;
}


FUNCODEDEF(fun_sexpr_unwind_protect_cleanup_forms_929) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),exp_));
return res;
}


FUNCODEDEF(fun_sexpr_monitorQ_930) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),exp_,CHKREF(YDsexpr_monitor_tag));
return res;
}


FUNCODEDEF(fun_sexpr_monitor_handler_931) {
  ARG(exp_);
  P handler_exprF561;
  P res, a1;
loop:
  res = (handler_exprF561=CALL1(CHKREF(Y2nd),exp_),CALL2(CHKREF(Ysexpr_make_anonymous_method),CALL1(CHKREF(Yhead),handler_exprF561),CALL1(CHKREF(Ytail),handler_exprF561)));
return res;
}


FUNCODEDEF(fun_sexpr_monitor_body_932) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),exp_));
return res;
}


FUNCODEDEF(fun_sexpr_beginQ_933) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),exp_,CHKREF(YDsexpr_begin_tag));
return res;
}


FUNCODEDEF(fun_sexpr_begin_actions_934) {
  ARG(begin_exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ytail),begin_exp_);
return res;
}


FUNCODEDEF(fun_sexpr_last_expQ_935) {
  ARG(seq_);
  P res, a1;
loop:
  res = CALL1(CHKREF(YemptyQ),CALL1(CHKREF(Ytail),seq_));
return res;
}


FUNCODEDEF(fun_sexpr_first_exp_936) {
  ARG(seq_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Yhead),seq_);
return res;
}


FUNCODEDEF(fun_sexpr_rest_exps_937) {
  ARG(seq_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ytail),seq_);
return res;
}


FUNCODEDEF(fun_sexpr_sequence_Gbegin_938) {
  ARG(seq_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(YemptyQ),seq_) != YPfalse)
    ? seq_
    : ((CALL1(CHKREF(Ysexpr_last_expQ),seq_) != YPfalse)
    ? CALL1(CHKREF(Ysexpr_first_exp),seq_)
    : CALL1(CHKREF(Ysexpr_make_begin),seq_)));
return res;
}


FUNCODEDEF(fun_sexpr_make_begin_939) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ypair),CHKREF(YDsexpr_begin_tag),exp_);
return res;
}


FUNCODEDEF(fun_sexpr_applicationQ_940) {
  ARG(exp_);
  P tmpF562;
  P res, a1;
loop:
  res = (tmpF562=CALL2(CHKREF(YisaQ),exp_,CHKREF(YLlstG)),((tmpF562 != YPfalse)
    ? CALL1(CHKREF(Ynot),CALL1(CHKREF(YemptyQ),exp_))
    : YPfalse));
return res;
}


FUNCODEDEF(fun_sexpr_operator_941) {
  ARG(app_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Yhead),app_);
return res;
}


FUNCODEDEF(fun_sexpr_operands_942) {
  ARG(app_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ytail),app_);
return res;
}


FUNCODEDEF(fun_sexpr_no_operandsQ_943) {
  ARG(args_);
  P res, a1;
loop:
  res = CALL1(CHKREF(YemptyQ),args_);
return res;
}


FUNCODEDEF(fun_sexpr_first_operand_944) {
  ARG(args_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Yhead),args_);
return res;
}


FUNCODEDEF(fun_sexpr_rest_operands_945) {
  ARG(args_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ytail),args_);
return res;
}


FUNCODEDEF(fun_sexpr_make_application_946) {
  ARG(operands_);
  ARG(op_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Ycat),CALL1(CHKREF(Ylst),op_),operands_);
return res;
}


FUNCODEDEF(fun_sexpr_new_unique_name_counterX_947) {
  P res;
loop:
((YTunique_name_counterT = CALL2(CHKREF(YA),CHKREF(YTunique_name_counterT),lit_556)));
  res = CHKREF(YTunique_name_counterT);
return res;
}


FUNCODEDEF(fun_sexpr_unique_name_948) {
  ARG(prefix_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yas),CHKREF(YLsymG),CALL2(CHKREF(Ycat),CALL2(CHKREF(Yas),CHKREF(YLstrG),prefix_),CALL1(CHKREF(Ynum_to_str),CALL0(CHKREF(Ysexpr_new_unique_name_counterX)))));
return res;
}


FUNCODEDEF(fun_sexpr_letQ_949) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),exp_,CHKREF(YDsexpr_let_tag));
return res;
}


FUNCODEDEF(fun_sexpr_let_bound_variables_950) {
  ARG(let_exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ymap),CHKREF(Yhead),CALL1(CHKREF(Y2nd),let_exp_));
return res;
}


FUNCODEDEF(fun_sexpr_let_values_951) {
  ARG(let_exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ymap),CHKREF(Y2nd),CALL1(CHKREF(Y2nd),let_exp_));
return res;
}


FUNCODEDEF(fun_sexpr_let_body_952) {
  ARG(let_exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ysexpr_sequence_Gbegin),CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),let_exp_)));
return res;
}


FUNCODEDEF(fun_col_953) {
  ARG(values_);
  ARG(names_);
  P res, a1, a2;
loop:
  res = ((CALL1(CHKREF(YemptyQ),names_) != YPfalse)
    ? FREEREF(0)
    : CALL2(CHKREF(Ypair),CALL3(CHKREF(Ylst),CHKREF(YDsexpr_method_tag),CALL1(CHKREF(Ylst),CALL1(CHKREF(Yhead),names_)),CALL2(FREEREF(1),CALL1(CHKREF(Ytail),names_),CALL1(CHKREF(Ytail),values_))),CALL1(CHKREF(Ylst),CALL1(CHKREF(Yhead),values_))));
return res;
}


FUNCODEDEF(fun_sexpr_let_Gcombination_954) {
  ARG(let_exp_);
  P colF566;
  P bodyF565;
  P valuesF564;
  P namesF563;
  P res, a1;
loop:
  res = (namesF563=CALL1(CHKREF(Ysexpr_let_bound_variables),let_exp_),(valuesF564=CALL1(CHKREF(Ysexpr_let_values),let_exp_),(bodyF565=CALL1(CHKREF(Ysexpr_let_body),let_exp_),(colF566=FUNSHELL(fun_col_953, 2),FUNINIT(colF566, 2,bodyF565,colF566),
  CALL2(colF566,namesF563,valuesF564)))));
return res;
}


FUNCODEDEF(fun_sexpr_locQ_955) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),exp_,CHKREF(YDsexpr_locals_tag));
return res;
}


FUNCODEDEF(fun_sexpr_loc_bound_names_956) {
  ARG(loc_exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ymap),CHKREF(Y1st),CALL1(CHKREF(Y2nd),loc_exp_));
return res;
}


FUNCODEDEF(fun_sexpr_loc_bound_parameters_957) {
  ARG(loc_exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ymap),CHKREF(Y2nd),CALL1(CHKREF(Y2nd),loc_exp_));
return res;
}


FUNCODEDEF(fun_sexpr_loc_bound_bodies_958) {
  ARG(loc_exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ymap),CALL2(CHKREF(Ycompose),CHKREF(Ytail),CHKREF(Ytail)),CALL1(CHKREF(Y2nd),loc_exp_));
return res;
}


FUNCODEDEF(fun_sexpr_loc_raw_body_959) {
  ARG(loc_exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),loc_exp_));
return res;
}


FUNCODEDEF(fun_sexpr_loc_body_960) {
  ARG(loc_exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ysexpr_sequence_Gbegin),CALL1(CHKREF(Ysexpr_loc_raw_body),loc_exp_));
return res;
}


FUNCODEDEF(fun_sexpr_iterateQ_961) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),exp_,CHKREF(YDsexpr_iterate_tag));
return res;
}


FUNCODEDEF(fun_sexpr_iterate_name_962) {
  ARG(rep_exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Y2nd),rep_exp_);
return res;
}


FUNCODEDEF(fun_sexpr_iterate_signature_963) {
  ARG(rep_exp_);
  P sigF567;
  P res, a1;
loop:
  res = (sigF567=CALL1(CHKREF(Y3rd),rep_exp_),CALL3(CHKREF(Ycat),CALL2(CHKREF(Ymap),CHKREF(Y1st),CALL1(CHKREF(Ysexpr_signature_parameters),sigF567)),((CALL1(CHKREF(YemptyQ),CALL1(CHKREF(Ysexpr_signature_values),sigF567)) != YPfalse)
    ? Ynil
    : CALL1(CHKREF(Ylst),CHKREF(YDsexpr_values_tag))),CALL1(CHKREF(Ysexpr_signature_values),sigF567)));
return res;
}


FUNCODEDEF(fun_sexpr_iterate_inits_964) {
  ARG(rep_exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ymap),CHKREF(Y2nd),CALL1(CHKREF(Y3rd),rep_exp_));
return res;
}


FUNCODEDEF(fun_sexpr_iterate_body_965) {
  ARG(rep_exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),rep_exp_)));
return res;
}


FUNCODEDEF(fun_sexpr_iterate_Gloc_966) {
  ARG(rep_exp_);
  P initsF571;
  P bodyF570;
  P sigF569;
  P nameF568;
  P res, a1;
loop:
  res = (nameF568=CALL1(CHKREF(Ysexpr_iterate_name),rep_exp_),(sigF569=CALL1(CHKREF(Ysexpr_iterate_signature),rep_exp_),(bodyF570=CALL1(CHKREF(Ysexpr_iterate_body),rep_exp_),(initsF571=CALL1(CHKREF(Ysexpr_iterate_inits),rep_exp_),CALL3(CHKREF(Ylst),CHKREF(YDsexpr_locals_tag),CALL1(CHKREF(Ylst),CALL2(CHKREF(Ycat),CALL2(CHKREF(Ylst),nameF568,sigF569),bodyF570)),CALL2(CHKREF(Ycat),CALL1(CHKREF(Ylst),nameF568),initsF571))))));
return res;
}


FUNCODEDEF(fun_sexpr_isaQ_967) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),exp_,CHKREF(YDsexpr_isa_tag));
return res;
}


FUNCODEDEF(fun_sexpr_isa_parents_968) {
  ARG(exp_);
  P parentsF572;
  P res, a1;
loop:
  res = (parentsF572=CALL1(CHKREF(Y2nd),exp_),((CALL2(CHKREF(YisaQ),parentsF572,CHKREF(YLlstG)) != YPfalse)
    ? parentsF572
    : CALL1(CHKREF(Ylst),parentsF572)));
return res;
}


FUNCODEDEF(fun_sexpr_isa_slot_inits_969) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),exp_));
return res;
}


FUNCODEDEF(fun_sexpr_isa_init_slots_970) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ymap),CHKREF(Y2nd),exp_);
return res;
}


FUNCODEDEF(fun_sexpr_isa_init_values_971) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ymap),CHKREF(Y3rd),exp_);
return res;
}


FUNCODEDEF(fun_sexpr_slotQ_972) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),exp_,CHKREF(YDsexpr_slot_tag));
return res;
}


FUNCODEDEF(fun_sexpr_slot_object_973) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Y2nd),exp_);
return res;
}


FUNCODEDEF(fun_sexpr_slot_variable_974) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Y3rd),exp_);
return res;
}


FUNCODEDEF(fun_sexpr_slot_init_975) {
  ARG(exp_);
  P res, a1;
loop:
  res = ((CALL2(CHKREF(YE),CALL1(CHKREF(Ylen),exp_),lit_563) != YPfalse)
    ? CALL2(CHKREF(Yelt),exp_,lit_564)
    : lit_565);
return res;
}


FUNCODEDEF(fun_sexpr_make_getter_976) {
  ARG(type_);
  ARG(name_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Ysexpr_make_method),name_,CALL1(CHKREF(Ylst),CALL2(CHKREF(Ylst),lit_566,type_)),CALL1(CHKREF(Ylst),CALL3(CHKREF(Ylst),lit_567,lit_568,name_)));
return res;
}


FUNCODEDEF(fun_sexpr_make_setter_977) {
  ARG(slot_type_);
  ARG(type_);
  ARG(name_);
  P res, a1, a2, a3;
loop:
  res = CALL3(CHKREF(Ysexpr_make_method),CALL1(CHKREF(Ysexpr_make_setter_name),name_),CALL2(CHKREF(Ylst),CALL2(CHKREF(Ylst),lit_569,slot_type_),CALL2(CHKREF(Ylst),lit_570,type_)),CALL1(CHKREF(Ylst),CALLN(CHKREF(Ylst),4,lit_571,lit_572,lit_573,name_)));
return res;
}


FUNCODEDEF(fun_sexpr_make_setter_name_978) {
  ARG(name_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yas),CHKREF(YLsymG),CALL2(CHKREF(Ycat),CALL2(CHKREF(Yas),CHKREF(YLstrG),name_),lit_574));
return res;
}


FUNCODEDEF(fun_sexpr_macroQ_979) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),exp_,CHKREF(YDsexpr_macro_tag));
return res;
}


FUNCODEDEF(fun_sexpr_macro_expandQ_980) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),exp_,CHKREF(YDsexpr_macro_expand_tag));
return res;
}


FUNCODEDEF(fun_sexpr_make_syntax_if_981) {
  ARG(else_);
  ARG(then_);
  ARG(exp_);
  ARG(pat_);
  P res, a1, a2, a3, a4;
loop:
  res = CALLN(CHKREF(Ylst),4,CHKREF(YDsexpr_syntax_if_tag),CALL2(CHKREF(Ylst),pat_,exp_),then_,else_);
return res;
}


FUNCODEDEF(fun_sexpr_expand_backquote_982) {
  ARG(x_);
  P resF574;
  P raw_resultF573;
  P res, a1;
loop:
  res = (raw_resultF573=CALL1(CHKREF(Ybq_process),x_),(resF574=CALL1(CHKREF(Ybq_remove_tokens),raw_resultF573),resF574));
return res;
}


FUNCODEDEF(fun_sexpr_unquoteQ_983) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),x_,lit_584);
return res;
}


FUNCODEDEF(fun_sexpr_unquote_splicingQ_984) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),x_,lit_585);
return res;
}


FUNCODEDEF(fun_sexpr_backquoteQ_985) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),x_,CHKREF(YDsexpr_quasiquote_tag));
return res;
}


FUNCODEDEF(fun_sexpr_atomQ_986) {
  ARG(x_);
  P tmpF575;
  P res, a1;
loop:
  res = (tmpF575=CALL1(CHKREF(Ynot),CALL2(CHKREF(YisaQ),x_,CHKREF(YLlstG))),((tmpF575 != YPfalse)
    ? tmpF575
    : CALL2(CHKREF(YEE),x_,Ynil)));
return res;
}


FUNCODEDEF(fun_nreconc_987) {
  ARG(y_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(YcatX),CALL1(CHKREF(YrevX),x_),y_);
return res;
}


FUNCODEDEF(fun_loop_988) {
  ARG(q_);
  ARG(p_);
  P res, a1, a2;
loop:
  res = ((CALL1(CHKREF(Ysexpr_atomQ),p_) != YPfalse)
    ? CALL1(FREEREF(0),CALL2(CHKREF(Ypair),CHKREF(YTbq_appendT),CALL2(CHKREF(Ynreconc),q_,CALL1(CHKREF(Ylst),CALL2(CHKREF(Ylst),CHKREF(YTbq_quoteT),p_)))))
    : (((CALL1(CHKREF(Ysexpr_unquoteQ),p_) != YPfalse)
    ? (((CALL1(CHKREF(Ynot),CALL1(CHKREF(YemptyQ),CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),p_)))) != YPfalse)
    ? CALL2(CHKREF(Yerror),lit_587,p_)
    : YPfalse),
  CALL1(FREEREF(0),CALL2(CHKREF(Ypair),CHKREF(YTbq_appendT),CALL2(CHKREF(Ynreconc),q_,CALL1(CHKREF(Ylst),CALL1(CHKREF(Yhead),CALL1(CHKREF(Ytail),p_)))))))
    : YPfalse),
  ((CALL2(CHKREF(YEE),CALL1(CHKREF(Ytail),p_),CHKREF(YTcomma_atsignT)) != YPfalse)
    ? CALL2(CHKREF(Yerror),lit_588,p_)
    : YPfalse),
  (a1=CALL1(CHKREF(Ytail),p_),a2=CALL2(CHKREF(Ypair),CALL1(CHKREF(Ybracket),CALL1(CHKREF(Yhead),p_)),q_),p_=a1,q_=a2,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_989) {
  ARG(return_);
  P loopF576;
  P res, a1;
loop:
  res = (loopF576=FUNSHELL(fun_loop_988, 2),FUNINIT(loopF576, 2,return_,loopF576),
  CALL2(loopF576,FREEREF(0),Ynil));
return res;
}


FUNCODEDEF(fun_bq_process_990) {
  ARG(x_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(Ysexpr_atomQ),x_) != YPfalse)
    ? CALL2(CHKREF(Ylst),CHKREF(YTbq_quoteT),x_)
    : ((CALL1(CHKREF(Ysexpr_backquoteQ),x_) != YPfalse)
    ? CALL1(CHKREF(Ybq_process),CALL1(CHKREF(Ysexpr_expand_backquote),CALL1(CHKREF(Yhead),CALL1(CHKREF(Ytail),x_))))
    : ((CALL1(CHKREF(Ysexpr_unquoteQ),x_) != YPfalse)
    ? CALL1(CHKREF(Yhead),CALL1(CHKREF(Ytail),x_))
    : ((CALL1(CHKREF(Ysexpr_unquote_splicingQ),x_) != YPfalse)
    ? CALL2(CHKREF(Yerror),lit_586,CALL1(CHKREF(Yhead),CALL1(CHKREF(Ytail),CALL0(x_))))
    : ((YPtrue != YPfalse)
    ? with_exit(FUNFAB(fun_989, 1,x_))
    : YPfalse)))));
return res;
}


FUNCODEDEF(fun_bracket_991) {
  ARG(x_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(Ysexpr_atomQ),x_) != YPfalse)
    ? CALL2(CHKREF(Ylst),CHKREF(YTbq_listT),CALL1(CHKREF(Ybq_process),x_))
    : ((CALL1(CHKREF(Ysexpr_unquoteQ),x_) != YPfalse)
    ? CALL2(CHKREF(Ylst),CHKREF(YTbq_listT),CALL1(CHKREF(Yhead),CALL1(CHKREF(Ytail),x_)))
    : ((CALL1(CHKREF(Ysexpr_unquote_splicingQ),x_) != YPfalse)
    ? CALL2(CHKREF(Ylst),CHKREF(YTbq_clobberableT),CALL1(CHKREF(Yhead),CALL1(CHKREF(Ytail),x_)))
    : ((YPtrue != YPfalse)
    ? CALL2(CHKREF(Ylst),CHKREF(YTbq_listT),CALL1(CHKREF(Ybq_process),x_))
    : YPfalse))));
return res;
}


FUNCODEDEF(fun_map_tree_992) {
  ARG(x_);
  ARG(fn_);
  P tmpF579;
  P dF578;
  P aF577;
  P res, a1, a2;
loop:
  res = ((CALL1(CHKREF(Ysexpr_atomQ),x_) != YPfalse)
    ? CALL1(fn_,x_)
    : (aF577=CALL1(fn_,CALL1(CHKREF(Yhead),x_)),(dF578=CALL2(CHKREF(Ymap_tree),fn_,CALL1(CHKREF(Ytail),x_)),(((tmpF579=CALL2(CHKREF(YE),aF577,CALL1(CHKREF(Yhead),x_)),((tmpF579 != YPfalse)
    ? CALL2(CHKREF(YE),dF578,CALL1(CHKREF(Ytail),x_))
    : YPfalse)) != YPfalse)
    ? x_
    : CALL2(CHKREF(Ypair),aF577,dF578)))));
return res;
}


FUNCODEDEF(fun_bq_remove_tokens_993) {
  ARG(x_);
  P tmpF581;
  P tmpF580;
  P res, a1;
loop:
  res = ((CALL2(CHKREF(YEE),x_,CHKREF(YTbq_listT)) != YPfalse)
    ? lit_589
    : ((CALL2(CHKREF(YEE),x_,CHKREF(YTbq_appendT)) != YPfalse)
    ? lit_590
    : ((CALL2(CHKREF(YEE),x_,CHKREF(YTbq_nconcT)) != YPfalse)
    ? lit_591
    : ((CALL2(CHKREF(YEE),x_,CHKREF(YTbq_listTT)) != YPfalse)
    ? lit_592
    : ((CALL2(CHKREF(YEE),x_,CHKREF(YTbq_quoteT)) != YPfalse)
    ? lit_593
    : ((CALL1(CHKREF(Ysexpr_atomQ),x_) != YPfalse)
    ? x_
    : ((CALL2(CHKREF(YEE),CALL1(CHKREF(Yhead),x_),CHKREF(YTbq_clobberableT)) != YPfalse)
    ? CALL1(CHKREF(Ybq_remove_tokens),CALL1(CHKREF(Yhead),CALL1(CHKREF(Ytail),x_)))
    : (((tmpF580=CALL2(CHKREF(YEE),CALL1(CHKREF(Yhead),x_),CHKREF(YTbq_listTT)),((tmpF580 != YPfalse)
    ? (tmpF581=CALL1(CHKREF(Ynot),CALL1(CHKREF(YemptyQ),CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),x_)))),((tmpF581 != YPfalse)
    ? CALL1(CHKREF(YemptyQ),CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),CALL1(CHKREF(Ytail),x_))))
    : YPfalse))
    : YPfalse)) != YPfalse)
    ? CALL2(CHKREF(Ypair),lit_594,CALL2(CHKREF(Ymap_tree),CHKREF(Ybq_remove_tokens),CALL1(CHKREF(Ytail),x_)))
    : ((YPtrue != YPfalse)
    ? CALL2(CHKREF(Ymap_tree),CHKREF(Ybq_remove_tokens),x_)
    : YPfalse)))))))));
return res;
}


FUNCODEDEF(fun_sexpr_syntax_ifQ_994) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ysexpr_tagged_listQ),exp_,CHKREF(YDsexpr_syntax_if_tag));
return res;
}


FUNCODEDEF(fun_sexpr_syntax_if_value_995) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Y2nd),CALL1(CHKREF(Y2nd),exp_));
return res;
}


FUNCODEDEF(fun_sexpr_syntax_if_pattern_996) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Y1st),CALL1(CHKREF(Y2nd),exp_));
return res;
}


FUNCODEDEF(fun_sexpr_syntax_if_then_997) {
  ARG(exp_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Y3rd),exp_);
return res;
}


FUNCODEDEF(fun_sexpr_syntax_if_else_998) {
  ARG(exp_);
  P altF582;
  P res, a1;
loop:
  res = (altF582=CALL2(CHKREF(Yelt),exp_,lit_595),((CALL2(CHKREF(YEE),altF582,CHKREF(Ynul)) != YPfalse)
    ? YPfalse
    : altF582));
return res;
}


FUNCODEDEF(fun_sexpr_pattern_variableQ_999) {
  ARG(pat_);
  P tmpF583;
  P res, a1;
loop:
  res = (tmpF583=CALL1(CHKREF(Ysexpr_unquoteQ),pat_),((tmpF583 != YPfalse)
    ? tmpF583
    : CALL1(CHKREF(Ysexpr_unquote_splicingQ),pat_)));
return res;
}


FUNCODEDEF(fun_sexpr_pattern_variable_name_1000) {
  ARG(pat_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Y2nd),pat_);
return res;
}


FUNCODEDEF(fun_col_1001) {
  ARG(pat_);
  P xF585;
  P tmpF584;
  P res, a1;
loop:
  res = (((tmpF584=CALL1(CHKREF(Ynot),CALL2(CHKREF(YisaQ),pat_,CHKREF(YLlstG))),((tmpF584 != YPfalse)
    ? tmpF584
    : CALL1(CHKREF(YemptyQ),pat_))) != YPfalse)
    ? Ynil
    : (xF585=CALL1(CHKREF(Yhead),pat_),((CALL1(CHKREF(Ysexpr_pattern_variableQ),xF585) != YPfalse)
    ? CALL2(CHKREF(Ypair),CALL1(CHKREF(Ysexpr_pattern_variable_name),xF585),CALL1(FREEREF(0),CALL1(CHKREF(Ytail),pat_)))
    : CALL2(CHKREF(Ycat),CALL1(FREEREF(0),CALL1(CHKREF(Yhead),pat_)),CALL1(FREEREF(0),CALL1(CHKREF(Ytail),pat_))))));
return res;
}


FUNCODEDEF(fun_sexpr_bind_pattern_variables_1002) {
  ARG(pat_);
  P colF586;
  P res, a1;
loop:
  res = CALL1(CHKREF(Ydel_dups),(colF586=FUNSHELL(fun_col_1001, 1),FUNINIT(colF586, 1,colF586),
  CALL1(colF586,pat_)));
return res;
}


FUNCODEDEF(fun_sexpr_make_macro_function_1003) {
  ARG(exp_);
  P funcF588;
  P mifF587;
  P res, a1;
loop:
  res = (mifF587=CALLN(CHKREF(Ysexpr_make_syntax_if),4,CALL1(CHKREF(Ysexpr_method_parameters),exp_),lit_596,CALL1(CHKREF(Ysexpr_sequence_Gbegin),CALL1(CHKREF(Ysexpr_method_body),exp_)),YPfalse),(funcF588=CALL2(CHKREF(Ysexpr_make_anonymous_method),CALL1(CHKREF(Ylst),lit_597),CALL1(CHKREF(Ylst),mifF587)),funcF588));
return res;
}


FUNCODEDEF(fun_env_values_1004) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yenv_values));
return res;
}


FUNCODEDEF(fun_env_values_setter_1005) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yenv_values));
return res;
}


FUNCODEDEF(fun_1006) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_fab_glo_env_1007) {
  P res;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLglo_envG),(P)Ynil),(P)YPpair((P)CHKREF(Yenv_values),(P)Ynil),(P)YPpair((P)CALL2(CHKREF(Yfill),CALL2(CHKREF(Yfab),CHKREF(YLvecG),CHKREF(YDmin_glo_env_size)),CHKREF(Ynul)),(P)Ynil));
return res;
}


FUNCODEDEF(fun_env_global_value_1008) {
  ARG(i_);
  ARG(env_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yelt),CALL1(CHKREF(Yenv_values),env_),i_);
return res;
}


FUNCODEDEF(fun_env_global_value_setter_1009) {
  ARG(i_);
  ARG(env_);
  ARG(v_);
  P res, a1, a2, a3;
loop:
  res = CALL3(CHKREF(Yelt_setter),v_,CALL1(CHKREF(Yenv_values),env_),i_);
return res;
}


FUNCODEDEF(fun_env_define_global_bindingX_1010) {
  ARG(v_);
  ARG(i_);
  ARG(env_);
  P res, a1, a2, a3;
loop:
  res = CALL3(CHKREF(Yelt_setter),v_,CALL1(CHKREF(Yenv_values),env_),i_);
return res;
}


FUNCODEDEF(fun_env_runtime_value_1011) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Ylocative_value),x_);
return res;
}


FUNCODEDEF(fun_env_runtime_value_setter_1012) {
  ARG(x_);
  ARG(v_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Ylocative_value_setter),v_,x_);
return res;
}


FUNCODEDEF(fun_env_parent_1013) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yenv_parent));
return res;
}


FUNCODEDEF(fun_env_parent_setter_1014) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yenv_parent));
return res;
}


FUNCODEDEF(fun_1015) {
  ARG(x_);
  P res, a1;
loop:
  res = YPfalse;
return res;
}


FUNCODEDEF(fun_env_function_1016) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yenv_function));
return res;
}


FUNCODEDEF(fun_env_function_setter_1017) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yenv_function));
return res;
}


FUNCODEDEF(fun_1018) {
  ARG(x_);
  P res, a1;
loop:
  res = YPfalse;
return res;
}


FUNCODEDEF(fun_env_names_1019) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yenv_names));
return res;
}


FUNCODEDEF(fun_env_names_setter_1020) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yenv_names));
return res;
}


FUNCODEDEF(fun_1021) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_env_values_1022) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yenv_values));
return res;
}


FUNCODEDEF(fun_env_values_setter_1023) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yenv_values));
return res;
}


FUNCODEDEF(fun_1024) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_env_frameX_1025) {
  ARG(args_);
  ARG(names_);
  ARG(function_);
  ARG(env_);
  P valuesF589;
  P res, a1, a2, a3, a4;
loop:
  res = (valuesF589=CALL2(CHKREF(Yas),CHKREF(YLvecG),args_),CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLloc_envG),(P)Ynil),(P)YPpair((P)CHKREF(Yenv_parent),(P)(P)YPpair((P)CHKREF(Yenv_function),(P)(P)YPpair((P)CHKREF(Yenv_values),(P)(P)YPpair((P)CHKREF(Yenv_names),(P)Ynil)))),(P)YPpair((P)env_,(P)(P)YPpair((P)function_,(P)(P)YPpair((P)valuesF589,(P)(P)YPpair((P)names_,(P)Ynil))))));
return res;
}


FUNCODEDEF(fun_env_local_value_1026) {
  ARG(j_);
  ARG(i_);
  ARG(env_);
  P res, a1, a2, a3;
loop:
  res = ((CALL2(CHKREF(YE),i_,lit_599) != YPfalse)
    ? CALL2(CHKREF(Yelt),CALL1(CHKREF(Yenv_values),env_),j_)
    : CALL3(CHKREF(Yenv_local_value),CALL1(CHKREF(Yenv_parent),env_),CALL2(CHKREF(Y_),i_,lit_600),j_));
return res;
}


FUNCODEDEF(fun_env_local_value_setter_1027) {
  ARG(j_);
  ARG(i_);
  ARG(env_);
  ARG(v_);
  P res, a1, a2, a3, a4;
loop:
  res = ((CALL2(CHKREF(YE),i_,lit_601) != YPfalse)
    ? CALL3(CHKREF(Yelt_setter),v_,CALL1(CHKREF(Yenv_values),env_),j_)
    : CALLN(CHKREF(Yenv_local_value_setter),4,v_,CALL1(CHKREF(Yenv_parent),env_),CALL2(CHKREF(Y_),i_,lit_602),j_));
return res;
}


FUNCODEDEF(fun_loop_1028) {
  ARG(i_);
  ARG(names_);
  P res, a1, a2;
loop:
  res = ((CALL1(CHKREF(YemptyQ),names_) != YPfalse)
    ? CALL2(CHKREF(Yenv_binding_value),CALL1(CHKREF(Yenv_parent),FREEREF(0)),FREEREF(1))
    : ((CALL2(CHKREF(YEE),FREEREF(1),CALL1(CHKREF(Yhead),names_)) != YPfalse)
    ? CALL2(CHKREF(Yelt),CALL1(CHKREF(Yenv_values),FREEREF(0)),i_)
    : (a1=CALL1(CHKREF(Ytail),names_),a2=CALL2(CHKREF(YA),i_,lit_603),names_=a1,i_=a2,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_env_binding_value_1029) {
  ARG(name_);
  ARG(env_);
  P loopF590;
  P res, a1, a2;
loop:
  res = (loopF590=FUNSHELL(fun_loop_1028, 3),FUNINIT(loopF590, 3,env_,name_,loopF590),
  CALL2(loopF590,CALL1(CHKREF(Yenv_names),env_),lit_604));
return res;
}


FUNCODEDEF(fun_loop_1030) {
  ARG(i_);
  ARG(names_);
  P res, a1, a2;
loop:
  res = ((CALL1(CHKREF(YemptyQ),names_) != YPfalse)
    ? CALL3(CHKREF(Yenv_binding_value_setter),FREEREF(0),CALL1(CHKREF(Yenv_parent),FREEREF(1)),FREEREF(2))
    : ((CALL2(CHKREF(YEE),FREEREF(2),CALL1(CHKREF(Yhead),names_)) != YPfalse)
    ? CALL3(CHKREF(Yelt_setter),FREEREF(0),CALL1(CHKREF(Yenv_values),FREEREF(1)),i_)
    : (a1=CALL1(CHKREF(Ytail),names_),a2=CALL2(CHKREF(YA),i_,lit_605),names_=a1,i_=a2,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_env_binding_value_setter_1031) {
  ARG(name_);
  ARG(env_);
  ARG(v_);
  P loopF591;
  P res, a1, a2, a3;
loop:
  res = (loopF591=FUNSHELL(fun_loop_1030, 4),FUNINIT(loopF591, 4,v_,env_,name_,loopF591),
  CALL2(loopF591,CALL1(CHKREF(Yenv_names),env_),lit_606));
return res;
}


FUNCODEDEF(fun_objectify_error_1032) {
  ARG(arguments_);
  ARG(message_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yapply),CHKREF(Yerror),message_,arguments_);
return res;
}


FUNCODEDEF(fun_binding_name_1033) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ybinding_name));
return res;
}


FUNCODEDEF(fun_binding_name_setter_1034) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ybinding_name));
return res;
}


FUNCODEDEF(fun_1035) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_binding_type_1036) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ybinding_type));
return res;
}


FUNCODEDEF(fun_binding_type_setter_1037) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ybinding_type));
return res;
}


FUNCODEDEF(fun_1038) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_binding_freeQ_1039) {
  ARG(x_);
  P res, a1;
loop:
  res = YPfalse;
return res;
}


FUNCODEDEF(fun_binding_freeQ_1040) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ybinding_freeQ));
return res;
}


FUNCODEDEF(fun_binding_freeQ_setter_1041) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ybinding_freeQ));
return res;
}


FUNCODEDEF(fun_1042) {
  ARG(x_);
  P res, a1;
loop:
  res = YPtrue;
return res;
}


FUNCODEDEF(fun_binding_index_1043) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ybinding_index));
return res;
}


FUNCODEDEF(fun_binding_index_setter_1044) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ybinding_index));
return res;
}


FUNCODEDEF(fun_1045) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_binding_locative_1046) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ybinding_locative));
return res;
}


FUNCODEDEF(fun_binding_locative_setter_1047) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ybinding_locative));
return res;
}


FUNCODEDEF(fun_1048) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_binding_description_1049) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ybinding_description));
return res;
}


FUNCODEDEF(fun_binding_description_setter_1050) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ybinding_description));
return res;
}


FUNCODEDEF(fun_1051) {
  ARG(x_);
  P res, a1;
loop:
  res = YPfalse;
return res;
}


FUNCODEDEF(fun_binding_mutableQ_1052) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ybinding_mutableQ));
return res;
}


FUNCODEDEF(fun_binding_mutableQ_setter_1053) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ybinding_mutableQ));
return res;
}


FUNCODEDEF(fun_1054) {
  ARG(x_);
  P res, a1;
loop:
  res = YPfalse;
return res;
}


FUNCODEDEF(fun_binding_dottedQ_1055) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ybinding_dottedQ));
return res;
}


FUNCODEDEF(fun_binding_dottedQ_setter_1056) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ybinding_dottedQ));
return res;
}


FUNCODEDEF(fun_1057) {
  ARG(x_);
  P res, a1;
loop:
  res = YPfalse;
return res;
}


FUNCODEDEF(fun_description_comparator_1058) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ydescription_comparator));
return res;
}


FUNCODEDEF(fun_description_comparator_setter_1059) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ydescription_comparator));
return res;
}


FUNCODEDEF(fun_1060) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_description_arity_1061) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ydescription_arity));
return res;
}


FUNCODEDEF(fun_description_arity_setter_1062) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ydescription_arity));
return res;
}


FUNCODEDEF(fun_1063) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_description_generator_1064) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ydescription_generator));
return res;
}


FUNCODEDEF(fun_description_generator_setter_1065) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ydescription_generator));
return res;
}


FUNCODEDEF(fun_1066) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_description_value_1067) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ydescription_value));
return res;
}


FUNCODEDEF(fun_description_value_setter_1068) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ydescription_value));
return res;
}


FUNCODEDEF(fun_1069) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_compile_time_program_1070) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ycompile_time_program));
return res;
}


FUNCODEDEF(fun_compile_time_program_setter_1071) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ycompile_time_program));
return res;
}


FUNCODEDEF(fun_1072) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_binding_handler_1073) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ybinding_handler));
return res;
}


FUNCODEDEF(fun_binding_handler_setter_1074) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ybinding_handler));
return res;
}


FUNCODEDEF(fun_1075) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_reference_binding_1076) {
  ARG(x_);
  P res, a1;
loop:
  res = x_;
return res;
}


FUNCODEDEF(fun_reference_binding_1077) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yreference_binding));
return res;
}


FUNCODEDEF(fun_reference_binding_setter_1078) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yreference_binding));
return res;
}


FUNCODEDEF(fun_1079) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_reference_frame_number_1080) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yreference_frame_number));
return res;
}


FUNCODEDEF(fun_reference_frame_number_setter_1081) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yreference_frame_number));
return res;
}


FUNCODEDEF(fun_1082) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_reference_frame_offset_1083) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yreference_frame_offset));
return res;
}


FUNCODEDEF(fun_reference_frame_offset_setter_1084) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yreference_frame_offset));
return res;
}


FUNCODEDEF(fun_1085) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_boundQ_reference_1086) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YboundQ_reference));
return res;
}


FUNCODEDEF(fun_boundQ_reference_setter_1087) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YboundQ_reference));
return res;
}


FUNCODEDEF(fun_1088) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_assignment_form_1089) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yassignment_form));
return res;
}


FUNCODEDEF(fun_assignment_form_setter_1090) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yassignment_form));
return res;
}


FUNCODEDEF(fun_1091) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_assignment_reference_1092) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yassignment_reference));
return res;
}


FUNCODEDEF(fun_assignment_reference_setter_1093) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yassignment_reference));
return res;
}


FUNCODEDEF(fun_1094) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_assignment_binding_1095) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yassignment_binding));
return res;
}


FUNCODEDEF(fun_assignment_binding_setter_1096) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yassignment_binding));
return res;
}


FUNCODEDEF(fun_1097) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_function_name_1098) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yfunction_name));
return res;
}


FUNCODEDEF(fun_function_name_setter_1099) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yfunction_name));
return res;
}


FUNCODEDEF(fun_1100) {
  ARG(x_);
  P res, a1;
loop:
  res = YPfalse;
return res;
}


FUNCODEDEF(fun_function_bindings_1101) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yfunction_bindings));
return res;
}


FUNCODEDEF(fun_function_bindings_setter_1102) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yfunction_bindings));
return res;
}


FUNCODEDEF(fun_1103) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_function_naryQ_1104) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yfunction_naryQ));
return res;
}


FUNCODEDEF(fun_function_naryQ_setter_1105) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yfunction_naryQ));
return res;
}


FUNCODEDEF(fun_1106) {
  ARG(x_);
  P res, a1;
loop:
  res = YPfalse;
return res;
}


FUNCODEDEF(fun_function_kind_1107) {
  ARG(x_);
  P res, a1;
loop:
  res = lit_607;
return res;
}


FUNCODEDEF(fun_function_body_1108) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yfunction_body));
return res;
}


FUNCODEDEF(fun_function_body_setter_1109) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yfunction_body));
return res;
}


FUNCODEDEF(fun_1110) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_function_kind_1111) {
  ARG(x_);
  P res, a1;
loop:
  res = lit_608;
return res;
}


FUNCODEDEF(fun_function_kind_1112) {
  ARG(x_);
  P res, a1;
loop:
  res = lit_609;
return res;
}


FUNCODEDEF(fun_function_kind_1113) {
  ARG(x_);
  P res, a1;
loop:
  res = lit_610;
return res;
}


FUNCODEDEF(fun_alternative_condition_1114) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yalternative_condition));
return res;
}


FUNCODEDEF(fun_alternative_condition_setter_1115) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yalternative_condition));
return res;
}


FUNCODEDEF(fun_1116) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_alternative_consequent_1117) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yalternative_consequent));
return res;
}


FUNCODEDEF(fun_alternative_consequent_setter_1118) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yalternative_consequent));
return res;
}


FUNCODEDEF(fun_1119) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_alternative_alternant_1120) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yalternative_alternant));
return res;
}


FUNCODEDEF(fun_alternative_alternant_setter_1121) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yalternative_alternant));
return res;
}


FUNCODEDEF(fun_1122) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_sequential_head_1123) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ysequential_head));
return res;
}


FUNCODEDEF(fun_sequential_head_setter_1124) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ysequential_head));
return res;
}


FUNCODEDEF(fun_1125) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_sequential_tail_1126) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ysequential_tail));
return res;
}


FUNCODEDEF(fun_sequential_tail_setter_1127) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ysequential_tail));
return res;
}


FUNCODEDEF(fun_1128) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_empty_sequential_1129) {
  P res;
loop:
  res = CHKREF(YDempty_sequential);
return res;
}


FUNCODEDEF(fun_empty_sequentialQ_1130) {
  ARG(e_);
  P res, a1;
loop:
  res = CALL2(CHKREF(YEE),e_,CHKREF(YDempty_sequential));
return res;
}


FUNCODEDEF(fun_constant_value_1131) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yconstant_value));
return res;
}


FUNCODEDEF(fun_constant_value_setter_1132) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yconstant_value));
return res;
}


FUNCODEDEF(fun_1133) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_application_arguments_1134) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yapplication_arguments));
return res;
}


FUNCODEDEF(fun_application_arguments_setter_1135) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yapplication_arguments));
return res;
}


FUNCODEDEF(fun_1136) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_application_function_1137) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yapplication_function));
return res;
}


FUNCODEDEF(fun_application_function_setter_1138) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yapplication_function));
return res;
}


FUNCODEDEF(fun_1139) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_application_binding_1140) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yapplication_binding));
return res;
}


FUNCODEDEF(fun_application_binding_setter_1141) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yapplication_binding));
return res;
}


FUNCODEDEF(fun_1142) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_fix_let_bindings_1143) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yfix_let_bindings));
return res;
}


FUNCODEDEF(fun_fix_let_bindings_setter_1144) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yfix_let_bindings));
return res;
}


FUNCODEDEF(fun_1145) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_fix_let_arguments_1146) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yfix_let_arguments));
return res;
}


FUNCODEDEF(fun_fix_let_arguments_setter_1147) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yfix_let_arguments));
return res;
}


FUNCODEDEF(fun_1148) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_fix_let_body_1149) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yfix_let_body));
return res;
}


FUNCODEDEF(fun_fix_let_body_setter_1150) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yfix_let_body));
return res;
}


FUNCODEDEF(fun_1151) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_arguments_head_1152) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yarguments_head));
return res;
}


FUNCODEDEF(fun_arguments_head_setter_1153) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yarguments_head));
return res;
}


FUNCODEDEF(fun_1154) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_arguments_tail_1155) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yarguments_tail));
return res;
}


FUNCODEDEF(fun_arguments_tail_setter_1156) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yarguments_tail));
return res;
}


FUNCODEDEF(fun_1157) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_empty_argument_list_1158) {
  P res;
loop:
  res = CHKREF(YDargument_empty_list);
return res;
}


FUNCODEDEF(fun_empty_argument_listQ_1159) {
  ARG(e_);
  P res, a1;
loop:
  res = CALL2(CHKREF(YEE),e_,CHKREF(YDargument_empty_list));
return res;
}


FUNCODEDEF(fun_loop_1160) {
  ARG(e_);
  ARG(res_);
  P res, a1, a2;
loop:
  res = ((CALL1(CHKREF(Yempty_argument_listQ),e_) != YPfalse)
    ? CALL1(CHKREF(YrevX),res_)
    : (a1=CALL2(CHKREF(Ypair),CALL1(CHKREF(Yarguments_head),e_),res_),a2=CALL1(CHKREF(Yarguments_tail),e_),res_=a1,e_=a2,PNUL));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_as_1161) {
  ARG(e_);
  ARG(c_);
  P loopF592;
  P res, a1, a2;
loop:
  res = (loopF592=FUNSHELL(fun_loop_1160, 1),FUNINIT(loopF592, 1,loopF592),
  CALL2(loopF592,Ynil,e_));
return res;
}


FUNCODEDEF(fun_locals_bindings_1162) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ylocals_bindings));
return res;
}


FUNCODEDEF(fun_locals_bindings_setter_1163) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ylocals_bindings));
return res;
}


FUNCODEDEF(fun_1164) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_locals_functions_1165) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ylocals_functions));
return res;
}


FUNCODEDEF(fun_locals_functions_setter_1166) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ylocals_functions));
return res;
}


FUNCODEDEF(fun_1167) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_locals_body_1168) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ylocals_body));
return res;
}


FUNCODEDEF(fun_locals_body_setter_1169) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ylocals_body));
return res;
}


FUNCODEDEF(fun_1170) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_bind_exit_main_fun_1171) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ybind_exit_main_fun));
return res;
}


FUNCODEDEF(fun_bind_exit_main_fun_setter_1172) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ybind_exit_main_fun));
return res;
}


FUNCODEDEF(fun_1173) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_unwind_protect_protected_thunk_1174) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yunwind_protect_protected_thunk));
return res;
}


FUNCODEDEF(fun_unwind_protect_protected_thunk_setter_1175) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yunwind_protect_protected_thunk));
return res;
}


FUNCODEDEF(fun_1176) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_unwind_protect_cleanup_thunk_1177) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yunwind_protect_cleanup_thunk));
return res;
}


FUNCODEDEF(fun_unwind_protect_cleanup_thunk_setter_1178) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yunwind_protect_cleanup_thunk));
return res;
}


FUNCODEDEF(fun_1179) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_monitor_handler_1180) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ymonitor_handler));
return res;
}


FUNCODEDEF(fun_monitor_handler_setter_1181) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ymonitor_handler));
return res;
}


FUNCODEDEF(fun_1182) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_monitor_main_thunk_1183) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ymonitor_main_thunk));
return res;
}


FUNCODEDEF(fun_monitor_main_thunk_setter_1184) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ymonitor_main_thunk));
return res;
}


FUNCODEDEF(fun_1185) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_sif_pattern_1186) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ysif_pattern));
return res;
}


FUNCODEDEF(fun_sif_pattern_setter_1187) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ysif_pattern));
return res;
}


FUNCODEDEF(fun_1188) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_sif_bindings_1189) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ysif_bindings));
return res;
}


FUNCODEDEF(fun_sif_bindings_setter_1190) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ysif_bindings));
return res;
}


FUNCODEDEF(fun_1191) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_sif_value_1192) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ysif_value));
return res;
}


FUNCODEDEF(fun_sif_value_setter_1193) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ysif_value));
return res;
}


FUNCODEDEF(fun_1194) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_sif_then_1195) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ysif_then));
return res;
}


FUNCODEDEF(fun_sif_then_setter_1196) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ysif_then));
return res;
}


FUNCODEDEF(fun_1197) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_sif_else_1198) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ysif_else));
return res;
}


FUNCODEDEF(fun_sif_else_setter_1199) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ysif_else));
return res;
}


FUNCODEDEF(fun_1200) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_match_value_1201) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ymatch_value));
return res;
}


FUNCODEDEF(fun_match_value_setter_1202) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ymatch_value));
return res;
}


FUNCODEDEF(fun_1203) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_match_elements_1204) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ymatch_elements));
return res;
}


FUNCODEDEF(fun_match_elements_setter_1205) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ymatch_elements));
return res;
}


FUNCODEDEF(fun_1206) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_match_element_1207) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ymatch_element));
return res;
}


FUNCODEDEF(fun_match_element_setter_1208) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ymatch_element));
return res;
}


FUNCODEDEF(fun_1209) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_match_binding_1210) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ymatch_binding));
return res;
}


FUNCODEDEF(fun_match_binding_setter_1211) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ymatch_binding));
return res;
}


FUNCODEDEF(fun_1212) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_environment_next_1213) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yenvironment_next));
return res;
}


FUNCODEDEF(fun_environment_next_setter_1214) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yenvironment_next));
return res;
}


FUNCODEDEF(fun_1215) {
  ARG(x_);
  P res, a1;
loop:
  res = YPfalse;
return res;
}


FUNCODEDEF(fun_environment_bindings_1216) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yenvironment_bindings));
return res;
}


FUNCODEDEF(fun_environment_bindings_setter_1217) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yenvironment_bindings));
return res;
}


FUNCODEDEF(fun_1218) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_environment_next_index_1219) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yenvironment_next_index));
return res;
}


FUNCODEDEF(fun_environment_next_index_setter_1220) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yenvironment_next_index));
return res;
}


FUNCODEDEF(fun_1221) {
  ARG(x_);
  P res, a1;
loop:
  res = lit_611;
return res;
}


FUNCODEDEF(fun_objectify_1222) {
  ARG(r_);
  ARG(e_);
  P mF593;
  P res, a1, a2;
loop:
  res = (mF593=CALL2(CHKREF(Yobjectify),CALL1(CHKREF(Yhead),e_),r_),((CALL2(CHKREF(YisaQ),mF593,CHKREF(YLmagic_bindingG)) != YPfalse)
    ? CALL2(CHKREF(Yobjectify),CALL2(CALL1(CHKREF(Ybinding_handler),mF593),e_,r_),r_)
    : CALL3(CHKREF(Yobjectify_application),mF593,CALL1(CHKREF(Ytail),e_),r_)));
return res;
}


FUNCODEDEF(fun_objectify_1223) {
  ARG(r_);
  ARG(e_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yobjectify_symbol),e_,r_);
return res;
}


FUNCODEDEF(fun_objectify_1224) {
  ARG(r_);
  ARG(e_);
  P res, a1, a2;
loop:
  res = e_;
return res;
}


FUNCODEDEF(fun_objectify_1225) {
  ARG(r_);
  ARG(e_);
  P res, a1, a2;
loop:
  res = e_;
return res;
}


FUNCODEDEF(fun_objectify_1226) {
  ARG(r_);
  ARG(e_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yobjectify_quotation),e_,r_);
return res;
}


FUNCODEDEF(fun_objectify_1227) {
  ARG(r_);
  ARG(e_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yobjectify_quotation),e_,r_);
return res;
}


FUNCODEDEF(fun_objectify_quotation_1228) {
  ARG(r_);
  ARG(value_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLconstantG),(P)Ynil),(P)YPpair((P)CHKREF(Yconstant_value),(P)Ynil),(P)YPpair((P)value_,(P)Ynil));
return res;
}


FUNCODEDEF(fun_objectify_raw_1229) {
  ARG(r_);
  ARG(value_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLraw_constantG),(P)Ynil),(P)YPpair((P)CHKREF(Yconstant_value),(P)Ynil),(P)YPpair((P)value_,(P)Ynil));
return res;
}


FUNCODEDEF(fun_objectify_boundQ_1230) {
  ARG(r_);
  ARG(e_);
  P refF594;
  P res, a1, a2;
loop:
  res = (refF594=CALL2(CHKREF(Yobjectify_symbol),e_,r_),CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLboundQG),(P)Ynil),(P)YPpair((P)CHKREF(YboundQ_reference),(P)Ynil),(P)YPpair((P)refF594,(P)Ynil)));
return res;
}


FUNCODEDEF(fun_objectify_compile_time_1231) {
  ARG(r_);
  ARG(program_);
  P programF595;
  P res, a1, a2;
loop:
  res = (programF595=CALL2(CHKREF(Yobjectify),program_,r_),(CALL2(CHKREF(Yast_eval),programF595,CALL0(CHKREF(Yrt_env))),
  CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLconstantG),(P)Ynil),(P)YPpair((P)CHKREF(Yconstant_value),(P)Ynil),(P)YPpair((P)YPfalse,(P)Ynil))));
return res;
}


FUNCODEDEF(fun_objectify_alternative_1232) {
  ARG(r_);
  ARG(a_);
  ARG(c_);
  ARG(t_);
  P res, a1, a2, a3, a4;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLalternativeG),(P)Ynil),(P)YPpair((P)CHKREF(Yalternative_condition),(P)(P)YPpair((P)CHKREF(Yalternative_consequent),(P)(P)YPpair((P)CHKREF(Yalternative_alternant),(P)Ynil))),(P)YPpair((P)CALL2(CHKREF(Yobjectify),t_,r_),(P)(P)YPpair((P)CALL2(CHKREF(Yobjectify),c_,r_),(P)(P)YPpair((P)CALL2(CHKREF(Yobjectify),a_,r_),(P)Ynil))));
return res;
}


FUNCODEDEF(fun_loop_1233) {
  ARG(eT_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(YemptyQ),eT_) != YPfalse)
    ? CALL0(CHKREF(Yempty_sequential))
    : CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLsequentialG),(P)Ynil),(P)YPpair((P)CHKREF(Ysequential_head),(P)(P)YPpair((P)CHKREF(Ysequential_tail),(P)Ynil)),(P)YPpair((P)CALL1(CHKREF(Yhead),eT_),(P)(P)YPpair((P)CALL1(FREEREF(0),CALL1(CHKREF(Ytail),eT_)),(P)Ynil))));
return res;
}


FUNCODEDEF(fun_sequentialize_1234) {
  ARG(eT_);
  P loopF596;
  P res, a1;
loop:
  res = ((CALL1(CHKREF(YemptyQ),eT_) != YPfalse)
    ? CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLconstantG),(P)Ynil),(P)YPpair((P)CHKREF(Yconstant_value),(P)Ynil),(P)YPpair((P)YPfalse,(P)Ynil))
    : ((CALL1(CHKREF(YemptyQ),CALL1(CHKREF(Ytail),eT_)) != YPfalse)
    ? CALL1(CHKREF(Yhead),eT_)
    : (loopF596=FUNSHELL(fun_loop_1233, 1),FUNINIT(loopF596, 1,loopF596),
  CALL1(loopF596,eT_))));
return res;
}


FUNCODEDEF(fun_objectify_sequential_1235) {
  ARG(r_);
  ARG(eT_);
  P res, a1, a2;
loop:
  res = CALL1(CHKREF(Ysequentialize),CALL2(CHKREF(Ymap),CALL2(CHKREF(Yrcurry),CHKREF(Yobjectify),r_),eT_));
return res;
}


FUNCODEDEF(fun_1236) {
  ARG(e_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yobjectify),e_,FREEREF(0));
return res;
}


FUNCODEDEF(fun_objectify_application_1237) {
  ARG(r_);
  ARG(eT_);
  ARG(ff_);
  P eeTF597;
  P res, a1, a2, a3;
loop:
  res = (eeTF597=CALL1(CHKREF(Yconvert2arguments),CALL2(CHKREF(Ymap),FUNFAB(fun_1236, 1,r_),eT_)),CALL3(CHKREF(Yprocess_closed_application),ff_,eeTF597,r_));
return res;
}


FUNCODEDEF(fun_1238) {
  ARG(e_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yobjectify),e_,FREEREF(0));
return res;
}


FUNCODEDEF(fun_objectify_application_1239) {
  ARG(r_);
  ARG(eT_);
  ARG(ff_);
  P descF600;
  P fvfF599;
  P eeTF598;
  P res, a1, a2, a3;
loop:
  res = (eeTF598=CALL1(CHKREF(Yconvert2arguments),CALL2(CHKREF(Ymap),FUNFAB(fun_1238, 1,r_),eT_)),(fvfF599=CALL1(CHKREF(Yreference_binding),ff_),(descF600=CALL1(CHKREF(Ybinding_description),fvfF599),CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLpredefined_applicationG),(P)Ynil),(P)YPpair((P)CHKREF(Yapplication_binding),(P)(P)YPpair((P)CHKREF(Yapplication_arguments),(P)Ynil)),(P)YPpair((P)fvfF599,(P)(P)YPpair((P)eeTF598,(P)Ynil))))));
return res;
}


FUNCODEDEF(fun_1240) {
  ARG(e_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yobjectify),e_,FREEREF(0));
return res;
}


FUNCODEDEF(fun_objectify_application_1241) {
  ARG(r_);
  ARG(eT_);
  ARG(ff_);
  P eeTF601;
  P res, a1, a2, a3;
loop:
  res = (eeTF601=CALL1(CHKREF(Yconvert2arguments),CALL2(CHKREF(Ymap),FUNFAB(fun_1240, 1,r_),eT_)),CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLregular_applicationG),(P)Ynil),(P)YPpair((P)CHKREF(Yapplication_function),(P)(P)YPpair((P)CHKREF(Yapplication_arguments),(P)Ynil)),(P)YPpair((P)ff_,(P)(P)YPpair((P)eeTF601,(P)Ynil))));
return res;
}


FUNCODEDEF(fun_process_closed_application_1242) {
  ARG(r_);
  ARG(eT_);
  ARG(f_);
  P bF603;
  P vTF602;
  P res, a1, a2, a3;
loop:
  res = (vTF602=CALL1(CHKREF(Yfunction_bindings),f_),(bF603=CALL1(CHKREF(Yfunction_body),f_),((CALL1(CHKREF(Yfunction_naryQ),f_) != YPfalse)
    ? CALL3(CHKREF(Yprocess_nary_closed_application),f_,eT_,r_)
    : ((CALL2(CHKREF(YE),CALL1(CHKREF(Ynumber_of),eT_),CALL1(CHKREF(Ylen),CALL1(CHKREF(Yfunction_bindings),f_))) != YPfalse)
    ? CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLfix_letG),(P)Ynil),(P)YPpair((P)CHKREF(Yfix_let_bindings),(P)(P)YPpair((P)CHKREF(Yfix_let_arguments),(P)(P)YPpair((P)CHKREF(Yfix_let_body),(P)Ynil))),(P)YPpair((P)CALL1(CHKREF(Yfunction_bindings),f_),(P)(P)YPpair((P)eT_,(P)(P)YPpair((P)CALL1(CHKREF(Yfunction_body),f_),(P)Ynil))))
    : CALL3(CHKREF(Yobjectify_error),lit_612,f_,eT_)))));
return res;
}


FUNCODEDEF(fun_pack_dotted_arguments_1243) {
  ARG(eT_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(Yempty_argument_listQ),eT_) != YPfalse)
    ? CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLconstantG),(P)Ynil),(P)YPpair((P)CHKREF(Yconstant_value),(P)Ynil),(P)YPpair((P)Ynil,(P)Ynil))
    : CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLregular_applicationG),(P)Ynil),(P)YPpair((P)CHKREF(Yapplication_function),(P)(P)YPpair((P)CHKREF(Yapplication_arguments),(P)Ynil)),(P)YPpair((P)CALL2(CHKREF(Yobjectify_symbol),lit_613,FREEREF(0)),(P)(P)YPpair((P)CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLargument_listG),(P)Ynil),(P)YPpair((P)CHKREF(Yarguments_head),(P)(P)YPpair((P)CHKREF(Yarguments_tail),(P)Ynil)),(P)YPpair((P)CALL1(CHKREF(Yarguments_head),eT_),(P)(P)YPpair((P)CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLargument_listG),(P)Ynil),(P)YPpair((P)CHKREF(Yarguments_head),(P)(P)YPpair((P)CHKREF(Yarguments_tail),(P)Ynil)),(P)YPpair((P)CALL1(FREEREF(1),CALL1(CHKREF(Yarguments_tail),eT_)),(P)(P)YPpair((P)CALL0(CHKREF(Yempty_argument_list)),(P)Ynil))),(P)Ynil))),(P)Ynil))));
return res;
}


FUNCODEDEF(fun_gather_arguments_1244) {
  ARG(vT_);
  ARG(eT_);
  P res, a1, a2;
loop:
  res = ((CALL1(CHKREF(Ybinding_dottedQ),CALL1(CHKREF(Yhead),vT_)) != YPfalse)
    ? CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLargument_listG),(P)Ynil),(P)YPpair((P)CHKREF(Yarguments_head),(P)(P)YPpair((P)CHKREF(Yarguments_tail),(P)Ynil)),(P)YPpair((P)CALL1(FREEREF(0),eT_),(P)(P)YPpair((P)CALL0(CHKREF(Yempty_argument_list)),(P)Ynil)))
    : ((CALL1(CHKREF(Yempty_argument_listQ),eT_) != YPfalse)
    ? CALL3(CHKREF(Yobjectify_error),lit_614,FREEREF(1),eT_)
    : CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLargument_listG),(P)Ynil),(P)YPpair((P)CHKREF(Yarguments_head),(P)(P)YPpair((P)CHKREF(Yarguments_tail),(P)Ynil)),(P)YPpair((P)CALL1(CHKREF(Yarguments_head),eT_),(P)(P)YPpair((P)CALL2(FREEREF(2),CALL1(CHKREF(Yarguments_tail),eT_),CALL1(CHKREF(Ytail),vT_)),(P)Ynil)))));
return res;
}


FUNCODEDEF(fun_process_nary_closed_application_1245) {
  ARG(r_);
  ARG(eT_);
  ARG(f_);
  P oF608;
  P bF607;
  P vTF606;
  P gather_argumentsF605;
  P pack_dotted_argumentsF604;
  P res, a1, a2, a3;
loop:
  res = (pack_dotted_argumentsF604=FUNSHELL(fun_pack_dotted_arguments_1243, 2),gather_argumentsF605=FUNSHELL(fun_gather_arguments_1244, 3),FUNINIT(pack_dotted_argumentsF604, 2,r_,pack_dotted_argumentsF604),
  FUNINIT(gather_argumentsF605, 3,pack_dotted_argumentsF604,f_,gather_argumentsF605),
  (vTF606=CALL1(CHKREF(Yfunction_bindings),f_),(bF607=CALL1(CHKREF(Yfunction_body),f_),(oF608=CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLfix_letG),(P)Ynil),(P)YPpair((P)CHKREF(Yfix_let_bindings),(P)(P)YPpair((P)CHKREF(Yfix_let_arguments),(P)(P)YPpair((P)CHKREF(Yfix_let_body),(P)Ynil))),(P)YPpair((P)vTF606,(P)(P)YPpair((P)CALL2(gather_argumentsF605,eT_,vTF606),(P)(P)YPpair((P)bF607,(P)Ynil)))),(CALL2(CHKREF(Ybinding_dottedQ_setter),YPfalse,CALL1(CHKREF(Ylast),vTF606)),
  oF608)))));
return res;
}


FUNCODEDEF(fun_convert2arguments_1246) {
  ARG(eT_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(YemptyQ),eT_) != YPfalse)
    ? CALL0(CHKREF(Yempty_argument_list))
    : CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLargument_listG),(P)Ynil),(P)YPpair((P)CHKREF(Yarguments_head),(P)(P)YPpair((P)CHKREF(Yarguments_tail),(P)Ynil)),(P)YPpair((P)CALL1(CHKREF(Yhead),eT_),(P)(P)YPpair((P)CALL1(CHKREF(Yconvert2arguments),CALL1(CHKREF(Ytail),eT_)),(P)Ynil))));
return res;
}


FUNCODEDEF(fun_number_of_1247) {
  ARG(o_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(Yempty_argument_listQ),o_) != YPfalse)
    ? lit_615
    : CALL2(CHKREF(YA),lit_616,CALL1(CHKREF(Ynumber_of),CALL1(CHKREF(Yarguments_tail),o_))));
return res;
}


FUNCODEDEF(fun_objectify_assignment_1248) {
  ARG(r_);
  ARG(e_);
  ARG(binding_);
  P opF609;
  P res, a1, a2, a3;
loop:
  res = (opF609=CALL1(CHKREF(Ysexpr_operator),binding_),((CALL1(CHKREF(Ysexpr_variableQ),opF609) != YPfalse)
    ? CALL2(CHKREF(Yobjectify),CALL2(CHKREF(Ysexpr_make_application),CALL2(CHKREF(Yobjectify),CALL1(CHKREF(Ysexpr_make_setter_name),opF609),r_),CALL2(CHKREF(Ypair),e_,CALL1(CHKREF(Ysexpr_operands),binding_))),r_)
    : CALL2(CHKREF(Yobjectify_error),lit_617,e_)));
return res;
}


FUNCODEDEF(fun_objectify_assignment_1249) {
  ARG(r_);
  ARG(e_);
  ARG(binding_);
  P valF611;
  P refF610;
  P res, a1, a2, a3;
loop:
  res = (refF610=CALL2(CHKREF(Yobjectify),binding_,r_),(valF611=CALL2(CHKREF(Yobjectify),e_,r_),CALL2(CHKREF(Yobjectify_assignment_using),refF610,valF611)));
return res;
}


FUNCODEDEF(fun_objectify_assignment_using_1250) {
  ARG(val_);
  ARG(ref_);
  P res, a1, a2;
loop:
CALL2(CHKREF(Ybinding_mutableQ_setter),YPtrue,CALL1(CHKREF(Yreference_binding),ref_));
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLlocal_assignmentG),(P)Ynil),(P)YPpair((P)CHKREF(Yassignment_reference),(P)(P)YPpair((P)CHKREF(Yassignment_form),(P)Ynil)),(P)YPpair((P)ref_,(P)(P)YPpair((P)val_,(P)Ynil)));
return res;
}


FUNCODEDEF(fun_objectify_assignment_using_1251) {
  ARG(val_);
  ARG(ref_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLglobal_assignmentG),(P)Ynil),(P)YPpair((P)CHKREF(Yassignment_binding),(P)(P)YPpair((P)CHKREF(Yassignment_form),(P)Ynil)),(P)YPpair((P)CALL1(CHKREF(Yreference_binding),ref_),(P)(P)YPpair((P)val_,(P)Ynil)));
return res;
}


FUNCODEDEF(fun_objectify_assignment_using_1252) {
  ARG(val_);
  ARG(ref_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLruntime_assignmentG),(P)Ynil),(P)YPpair((P)CHKREF(Yassignment_binding),(P)(P)YPpair((P)CHKREF(Yassignment_form),(P)Ynil)),(P)YPpair((P)CALL1(CHKREF(Yreference_binding),ref_),(P)(P)YPpair((P)val_,(P)Ynil)));
return res;
}


FUNCODEDEF(fun_ast_define_binding_1253) {
  ARG(make_binding_);
  ARG(name_);
  ARG(r_);
  P bindingF615;
  P grF614;
  P bindingF613;
  P existing_bindingF612;
  P res, a1, a2, a3;
loop:
  res = (existing_bindingF612=CALL2(CHKREF(Yfind_binding),name_,r_),(bindingF615=((existing_bindingF612 != YPfalse)
    ? (((CALL1(CHKREF(Ybinding_freeQ),existing_bindingF612) != YPfalse)
    ? CALL2(CHKREF(Ybinding_freeQ_setter),YPfalse,existing_bindingF612)
    : YPfalse),
  existing_bindingF612)
    : (bindingF613=CALL0(make_binding_),(grF614=CALL1(CHKREF(Yfind_static_global_environment),r_),(CALL2(CHKREF(Ybinding_name_setter),name_,bindingF613),
  CALL2(CHKREF(Ybinding_freeQ_setter),YPfalse,bindingF613),
  CALL2(CHKREF(Ybinding_index_setter),CALL2(CHKREF(Yenvironment_next_index_setter),CALL2(CHKREF(YA),CALL1(CHKREF(Yenvironment_next_index),grF614),lit_618),grF614),bindingF613),
  CALL2(CHKREF(Yinsert_globalX),bindingF613,grF614),
  bindingF613)))),bindingF615));
return res;
}


FUNCODEDEF(fun_1254) {
  P res;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLglobal_bindingG),(P)Ynil),Ynil,Ynil);
return res;
}


FUNCODEDEF(fun_objectify_definition_1255) {
  ARG(r_);
  ARG(e_);
  ARG(var_);
  P defnF618;
  P bindingF617;
  P nameF616;
  P res, a1, a2, a3;
loop:
  res = (nameF616=CALL1(CHKREF(Ysexpr_variable_name),var_),(bindingF617=CALL3(CHKREF(Yast_define_binding),r_,nameF616,fun_1254),(defnF618=CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLdefinitionG),(P)Ynil),(P)YPpair((P)CHKREF(Yassignment_binding),(P)(P)YPpair((P)CHKREF(Yassignment_form),(P)Ynil)),(P)YPpair((P)bindingF617,(P)(P)YPpair((P)CALL2(CHKREF(Yobjectify),e_,r_),(P)Ynil))),defnF618)));
return res;
}


FUNCODEDEF(fun_expand_1256) {
  ARG(r_);
  ARG(x_);
  P expF619;
  P res, a1, a2;
loop:
((CHKREF(YTmacro_tracingQT) != YPfalse)
    ? (CALL2(CHKREF(Yformat),CHKREF(Yout),lit_619),
  CALL2(CHKREF(Ywrite),CHKREF(Yout),x_),
  CALL2(CHKREF(Yformat),CHKREF(Yout),lit_620))
    : YPfalse);
  res = (expF619=CALL2(CHKREF(Yapply),FREEREF(0),CALL1(CHKREF(Ylst),x_)),(((CHKREF(YTmacro_tracingQT) != YPfalse)
    ? (CALL2(CHKREF(Yformat),CHKREF(Yout),lit_621),
  CALL2(CHKREF(Ywrite),CHKREF(Yout),expF619),
  CALL2(CHKREF(Yformat),CHKREF(Yout),lit_622))
    : YPfalse),
  expF619));
return res;
}


FUNCODEDEF(fun_1257) {
  P res;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_handler),(P)Ynil),(P)YPpair((P)FREEREF(0),(P)Ynil));
return res;
}


FUNCODEDEF(fun_objectify_syntax_definition_1258) {
  ARG(r_);
  ARG(e_);
  ARG(name_);
  P bindingF624;
  P expandF623;
  P expanderF622;
  P ast_expanderF621;
  P sep_expanderF620;
  P res, a1, a2, a3;
loop:
  res = (sep_expanderF620=CALL1(CHKREF(Ysexpr_make_macro_function),e_),(ast_expanderF621=CALL2(CHKREF(Yobjectify),sep_expanderF620,r_),(expanderF622=CALL2(CHKREF(Yast_eval),ast_expanderF621,CALL0(CHKREF(Yrt_env))),(expandF623=FUNSHELL(fun_expand_1256, 1),FUNINIT(expandF623, 1,expanderF622),
  (bindingF624=CALL3(CHKREF(Yast_define_binding),r_,name_,FUNFAB(fun_1257, 1,expandF623)),CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLconstantG),(P)Ynil),(P)YPpair((P)CHKREF(Yconstant_value),(P)Ynil),(P)YPpair((P)YPfalse,(P)Ynil)))))));
return res;
}


FUNCODEDEF(fun_1259) {
  P res;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLglobal_bindingG),(P)Ynil),Ynil,Ynil);
return res;
}


FUNCODEDEF(fun_objectify_function_definition_1260) {
  ARG(r_);
  ARG(e_);
  ARG(name_);
  P defnF627;
  P fF626;
  P bindingF625;
  P res, a1, a2, a3;
loop:
  res = (bindingF625=CALL3(CHKREF(Yast_define_binding),r_,name_,fun_1259),(fF626=CALL2(CHKREF(Yobjectify),e_,r_),(CALL2(CHKREF(Yfunction_name_setter),bindingF625,fF626),
  (defnF627=CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLast_function_definitionG),(P)Ynil),(P)YPpair((P)CHKREF(Yassignment_binding),(P)(P)YPpair((P)CHKREF(Yassignment_form),(P)Ynil)),(P)YPpair((P)bindingF625,(P)(P)YPpair((P)fF626,(P)Ynil))),defnF627))));
return res;
}


FUNCODEDEF(fun_1261) {
  P res;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLpredefined_bindingG),(P)Ynil),Ynil,Ynil);
return res;
}


FUNCODEDEF(fun_objectify_primitive_definition_1262) {
  ARG(r_);
  ARG(body_);
  ARG(params_);
  ARG(name_);
  P defnF636;
  P formF635;
  P bodyF634;
  P tup27F633;
  P naryQF632;
  P tup27F631;
  P bindingsF630;
  P tup27F629;
  P bindingF628;
  P res, a1, a2, a3, a4;
loop:
  res = (bindingF628=CALL3(CHKREF(Yast_define_binding),r_,name_,fun_1261),(tup27F629=CALL2(CHKREF(Yobjectify_parameters),params_,r_),(bindingsF630=CALL1(CHKREF(Yhead),tup27F629),(tup27F631=CALL1(CHKREF(Ytail),tup27F629),(naryQF632=CALL1(CHKREF(Yhead),tup27F631),(tup27F633=CALL1(CHKREF(Ytail),tup27F631),(bodyF634=CALL2(CHKREF(Yobjectify_sequential),body_,CALL2(CHKREF(Yr_extendT),r_,bindingsF630)),(formF635=CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLast_primitiveG),(P)Ynil),(P)YPpair((P)CHKREF(Yfunction_name),(P)(P)YPpair((P)CHKREF(Yfunction_bindings),(P)(P)YPpair((P)CHKREF(Yfunction_naryQ),(P)(P)YPpair((P)CHKREF(Yfunction_body),(P)Ynil)))),(P)YPpair((P)bindingF628,(P)(P)YPpair((P)bindingsF630,(P)(P)YPpair((P)naryQF632,(P)(P)YPpair((P)bodyF634,(P)Ynil))))),(CALL2(CHKREF(Ybinding_description_setter),formF635,bindingF628),
  (defnF636=CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLast_primitive_definitionG),(P)Ynil),(P)YPpair((P)CHKREF(Yassignment_binding),(P)(P)YPpair((P)CHKREF(Yassignment_form),(P)Ynil)),(P)YPpair((P)bindingF628,(P)(P)YPpair((P)formF635,(P)Ynil))),defnF636))))))))));
return res;
}


FUNCODEDEF(fun_1263) {
  P res;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLglobal_bindingG),(P)Ynil),Ynil,Ynil);
return res;
}


FUNCODEDEF(fun_objectify_generic_definition_1264) {
  ARG(r_);
  ARG(params_);
  ARG(name_);
  P defnF644;
  P formF643;
  P tup28F642;
  P naryQF641;
  P tup28F640;
  P bindingsF639;
  P tup28F638;
  P bindingF637;
  P res, a1, a2, a3;
loop:
  res = (bindingF637=CALL3(CHKREF(Yast_define_binding),r_,name_,fun_1263),(tup28F638=CALL2(CHKREF(Yobjectify_parameters),params_,r_),(bindingsF639=CALL1(CHKREF(Yhead),tup28F638),(tup28F640=CALL1(CHKREF(Ytail),tup28F638),(naryQF641=CALL1(CHKREF(Yhead),tup28F640),(tup28F642=CALL1(CHKREF(Ytail),tup28F640),(formF643=CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLast_genericG),(P)Ynil),(P)YPpair((P)CHKREF(Yfunction_name),(P)(P)YPpair((P)CHKREF(Yfunction_bindings),(P)(P)YPpair((P)CHKREF(Yfunction_naryQ),(P)Ynil))),(P)YPpair((P)bindingF637,(P)(P)YPpair((P)bindingsF639,(P)(P)YPpair((P)naryQF641,(P)Ynil)))),(defnF644=CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLast_generic_definitionG),(P)Ynil),(P)YPpair((P)CHKREF(Yassignment_binding),(P)(P)YPpair((P)CHKREF(Yassignment_form),(P)Ynil)),(P)YPpair((P)bindingF637,(P)(P)YPpair((P)formF643,(P)Ynil))),defnF644))))))));
return res;
}


FUNCODEDEF(fun_1265) {
  P res;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLglobal_bindingG),(P)Ynil),Ynil,Ynil);
return res;
}


FUNCODEDEF(fun_objectify_method_definition_1266) {
  ARG(r_);
  ARG(e_);
  ARG(name_);
  P defnF650;
  P formF649;
  P callF648;
  P metF647;
  P genF646;
  P bindingF645;
  P res, a1, a2, a3;
loop:
  res = (bindingF645=CALL3(CHKREF(Yast_define_binding),r_,name_,fun_1265),(genF646=CALLN(CHKREF(Ylst),4,lit_623,CALL2(CHKREF(Ylst),lit_624,name_),name_,YPfalse),(metF647=CALL2(CHKREF(Yobjectify),e_,r_),(callF648=CALL3(CHKREF(Ylst),lit_625,genF646,metF647),(formF649=CALL2(CHKREF(Yobjectify),callF648,r_),(defnF650=CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLast_method_definitionG),(P)Ynil),(P)YPpair((P)CHKREF(Yassignment_binding),(P)(P)YPpair((P)CHKREF(Yassignment_form),(P)Ynil)),(P)YPpair((P)bindingF645,(P)(P)YPpair((P)formF649,(P)Ynil))),(CALL2(CHKREF(Yfunction_name_setter),name_,metF647),
  defnF650)))))));
return res;
}


FUNCODEDEF(fun_objectify_function_1267) {
  ARG(r_);
  ARG(body_);
  ARG(parameters_);
  P bF656;
  P tup29F655;
  P naryQF654;
  P tup29F653;
  P bindingsF652;
  P tup29F651;
  P res, a1, a2, a3;
loop:
  res = (tup29F651=CALL2(CHKREF(Yobjectify_parameters),parameters_,r_),(bindingsF652=CALL1(CHKREF(Yhead),tup29F651),(tup29F653=CALL1(CHKREF(Ytail),tup29F651),(naryQF654=CALL1(CHKREF(Yhead),tup29F653),(tup29F655=CALL1(CHKREF(Ytail),tup29F653),(bF656=CALL2(CHKREF(Yobjectify_sequential),body_,CALL2(CHKREF(Yr_extendT),r_,bindingsF652)),CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLast_methodG),(P)Ynil),(P)YPpair((P)CHKREF(Yfunction_bindings),(P)(P)YPpair((P)CHKREF(Yfunction_naryQ),(P)(P)YPpair((P)CHKREF(Yfunction_body),(P)Ynil))),(P)YPpair((P)bindingsF652,(P)(P)YPpair((P)naryQF654,(P)(P)YPpair((P)bF656,(P)Ynil))))))))));
return res;
}


FUNCODEDEF(fun_col_1268) {
  ARG(bindings_);
  ARG(naryQ_);
  ARG(params_);
  P bindingF663;
  P typeF662;
  P stypeF661;
  P dottedQF660;
  P stypeF659;
  P snameF658;
  P paramF657;
  P res, a1, a2, a3;
loop:
  res = ((CALL1(CHKREF(YemptyQ),params_) != YPfalse)
    ? CALL2(CHKREF(Ytup),CALL1(CHKREF(YrevX),bindings_),naryQ_)
    : (paramF657=CALL1(CHKREF(Yhead),params_),(snameF658=CALL1(CHKREF(Ysexpr_variable_name),paramF657),(stypeF659=CALL1(CHKREF(Ysexpr_variable_type),paramF657),(dottedQF660=CALL2(CHKREF(YEE),stypeF659,CHKREF(YDsexpr_optionals_tag)),(stypeF661=((dottedQF660 != YPfalse)
    ? CHKREF(YDsexpr_optionals_type_name)
    : stypeF659),(typeF662=CALL2(CHKREF(Yobjectify),stypeF661,FREEREF(0)),(bindingF663=CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLlocal_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_type),(P)(P)YPpair((P)CHKREF(Ybinding_dottedQ),(P)Ynil))),(P)YPpair((P)snameF658,(P)(P)YPpair((P)typeF662,(P)(P)YPpair((P)dottedQF660,(P)Ynil)))),(a1=CALL1(CHKREF(Ytail),params_),a2=dottedQF660,a3=CALL2(CHKREF(Ypair),bindingF663,bindings_),params_=a1,naryQ_=a2,bindings_=a3,PNUL)))))))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_objectify_parameters_1269) {
  ARG(r_);
  ARG(params_);
  P colF664;
  P res, a1, a2;
loop:
  res = (colF664=FUNSHELL(fun_col_1268, 2),FUNINIT(colF664, 2,r_,colF664),
  CALL3(colF664,params_,YPfalse,Ynil));
return res;
}


FUNCODEDEF(fun_objectify_binding_1270) {
  ARG(r_);
  ARG(b_);
  ARG(n_);
  P res, a1, a2, a3;
loop:
  res = b_;
return res;
}


FUNCODEDEF(fun_find_1271) {
  ARG(bindings_);
  ARG(j_);
  P res, a1, a2;
loop:
  res = ((CALL1(CHKREF(YemptyQ),bindings_) != YPfalse)
    ? CALL2(FREEREF(2),CALL2(CHKREF(YA),FREEREF(0),lit_628),CALL1(CHKREF(Yenvironment_next),FREEREF(1)))
    : ((CALL2(CHKREF(YEE),CALL1(CHKREF(Yhead),bindings_),FREEREF(3)) != YPfalse)
    ? CALL2(CHKREF(Ytup),FREEREF(0),j_)
    : (a1=CALL2(CHKREF(YA),j_,lit_629),a2=CALL1(CHKREF(Ytail),bindings_),j_=a1,bindings_=a2,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_loop_1272) {
  ARG(r_);
  ARG(i_);
  P findF665;
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(YisaQ),r_,CHKREF(YLstatic_local_environmentG)) != YPfalse)
    ? (findF665=FUNSHELL(fun_find_1271, 5),FUNINIT(findF665, 5,i_,r_,FREEREF(0),FREEREF(1),findF665),
  CALL2(findF665,lit_630,CALL1(CHKREF(Yenvironment_bindings),r_)))
    : CALL3(CHKREF(Yerror),lit_631,CHKREF(Yname),r_));
return res;
}


FUNCODEDEF(fun_compute_local_reference_offsets_1273) {
  ARG(r_);
  ARG(binding_);
  P loopF666;
  P res, a1, a2;
loop:
  res = (loopF666=FUNSHELL(fun_loop_1272, 2),FUNINIT(loopF666, 2,loopF666,binding_),
  CALL2(loopF666,lit_632,r_));
return res;
}


FUNCODEDEF(fun_objectify_binding_1274) {
  ARG(r_);
  ARG(b_);
  ARG(n_);
  P tup30F671;
  P jF670;
  P tup30F669;
  P iF668;
  P tup30F667;
  P res, a1, a2, a3;
loop:
  res = (tup30F667=CALL2(CHKREF(Ycompute_local_reference_offsets),b_,r_),(iF668=CALL1(CHKREF(Yhead),tup30F667),(tup30F669=CALL1(CHKREF(Ytail),tup30F667),(jF670=CALL1(CHKREF(Yhead),tup30F669),(tup30F671=CALL1(CHKREF(Ytail),tup30F669),CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLlocal_referenceG),(P)Ynil),(P)YPpair((P)CHKREF(Yreference_binding),(P)(P)YPpair((P)CHKREF(Yreference_frame_number),(P)(P)YPpair((P)CHKREF(Yreference_frame_offset),(P)Ynil))),(P)YPpair((P)b_,(P)(P)YPpair((P)iF668,(P)(P)YPpair((P)jF670,(P)Ynil)))))))));
return res;
}


FUNCODEDEF(fun_objectify_binding_1275) {
  ARG(r_);
  ARG(b_);
  ARG(n_);
  P res, a1, a2, a3;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLglobal_referenceG),(P)Ynil),(P)YPpair((P)CHKREF(Yreference_binding),(P)Ynil),(P)YPpair((P)b_,(P)Ynil));
return res;
}


FUNCODEDEF(fun_objectify_binding_1276) {
  ARG(r_);
  ARG(b_);
  ARG(n_);
  P res, a1, a2, a3;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLruntime_referenceG),(P)Ynil),(P)YPpair((P)CHKREF(Yreference_binding),(P)Ynil),(P)YPpair((P)b_,(P)Ynil));
return res;
}


FUNCODEDEF(fun_objectify_binding_1277) {
  ARG(r_);
  ARG(b_);
  ARG(n_);
  P res, a1, a2, a3;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLpredefined_referenceG),(P)Ynil),(P)YPpair((P)CHKREF(Yreference_binding),(P)Ynil),(P)YPpair((P)b_,(P)Ynil));
return res;
}


FUNCODEDEF(fun_default_type_1278) {
  ARG(r_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yobjectify),lit_633,r_);
return res;
}


FUNCODEDEF(fun_objectify_free_global_reference_1279) {
  ARG(r_);
  ARG(name_);
  P bF673;
  P grF672;
  P res, a1, a2;
loop:
  res = (grF672=CALL1(CHKREF(Yfind_static_global_environment),r_),(bF673=CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLglobal_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_index),(P)Ynil)),(P)YPpair((P)name_,(P)(P)YPpair((P)CALL2(CHKREF(Yenvironment_next_index_setter),CALL2(CHKREF(YA),CALL1(CHKREF(Yenvironment_next_index),grF672),lit_634),grF672),(P)Ynil))),(CALL2(CHKREF(Yinsert_globalX),bF673,grF672),
  CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLglobal_referenceG),(P)Ynil),(P)YPpair((P)CHKREF(Yreference_binding),(P)Ynil),(P)YPpair((P)bF673,(P)Ynil)))));
return res;
}


FUNCODEDEF(fun_objectify_binding_1280) {
  ARG(r_);
  ARG(b_);
  ARG(n_);
  P res, a1, a2, a3;
loop:
  res = CALL2(CHKREF(Yobjectify_free_global_reference),n_,r_);
return res;
}


FUNCODEDEF(fun_objectify_symbol_1281) {
  ARG(r_);
  ARG(name_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yobjectify_binding),name_,CALL2(CHKREF(Yfind_binding),name_,r_),r_);
return res;
}


FUNCODEDEF(fun_ftype_1282) {
  ARG(r_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yobjectify),lit_635,r_);
return res;
}


FUNCODEDEF(fun_1283) {
  ARG(n_);
  P res, a1;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLlocal_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_type),(P)Ynil)),(P)YPpair((P)n_,(P)(P)YPpair((P)CALL1(CHKREF(Yftype),FREEREF(0)),(P)Ynil)));
return res;
}


FUNCODEDEF(fun_1284) {
  ARG(n_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yfunction_name_setter),n_,x_);
return res;
}


FUNCODEDEF(fun_objectify_locals_1285) {
  ARG(r_);
  ARG(body_);
  ARG(bodies_);
  ARG(sigs_);
  ARG(names_);
  P functionsF677;
  P function_formsF676;
  P new_rF675;
  P bindingsF674;
  P res, a1, a2, a3, a4, a5;
loop:
  res = (bindingsF674=CALL2(CHKREF(Ymap),FUNFAB(fun_1283, 1,r_),names_),(new_rF675=CALL2(CHKREF(Yr_extendT),r_,bindingsF674),(function_formsF676=CALL3(CHKREF(Ymap2),CHKREF(Ysexpr_make_anonymous_method),sigs_,bodies_),(functionsF677=CALL2(CHKREF(Ymap),CALL2(CHKREF(Yrcurry),CHKREF(Yobjectify),new_rF675),function_formsF676),(CALL3(CHKREF(Ydo2),fun_1284,functionsF677,bindingsF674),
  CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLlocalsG),(P)Ynil),(P)YPpair((P)CHKREF(Ylocals_bindings),(P)(P)YPpair((P)CHKREF(Ylocals_functions),(P)(P)YPpair((P)CHKREF(Ylocals_body),(P)Ynil))),(P)YPpair((P)bindingsF674,(P)(P)YPpair((P)functionsF677,(P)(P)YPpair((P)CALL2(CHKREF(Yobjectify_sequential),body_,new_rF675),(P)Ynil)))))))));
return res;
}


FUNCODEDEF(fun_objectify_bind_exit_1286) {
  ARG(r_);
  ARG(body_);
  ARG(name_);
  P res, a1, a2, a3;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLbind_exitG),(P)Ynil),(P)YPpair((P)CHKREF(Ybind_exit_main_fun),(P)Ynil),(P)YPpair((P)CALL2(CHKREF(Yobjectify),CALL2(CHKREF(Ysexpr_make_anonymous_method),CALL1(CHKREF(Ylst),name_),body_),r_),(P)Ynil));
return res;
}


FUNCODEDEF(fun_objectify_unwind_protect_1287) {
  ARG(r_);
  ARG(cleanup_forms_);
  ARG(protected_form_);
  P res, a1, a2, a3;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLunwind_protectG),(P)Ynil),(P)YPpair((P)CHKREF(Yunwind_protect_protected_thunk),(P)(P)YPpair((P)CHKREF(Yunwind_protect_cleanup_thunk),(P)Ynil)),(P)YPpair((P)CALL2(CHKREF(Yobjectify),CALL2(CHKREF(Ysexpr_make_anonymous_method),Ynil,CALL1(CHKREF(Ylst),protected_form_)),r_),(P)(P)YPpair((P)CALL2(CHKREF(Yobjectify),CALL2(CHKREF(Ysexpr_make_anonymous_method),Ynil,cleanup_forms_),r_),(P)Ynil)));
return res;
}


FUNCODEDEF(fun_objectify_monitor_1288) {
  ARG(r_);
  ARG(body_);
  ARG(handler_);
  P res, a1, a2, a3;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmonitorG),(P)Ynil),(P)YPpair((P)CHKREF(Ymonitor_handler),(P)(P)YPpair((P)CHKREF(Ymonitor_main_thunk),(P)Ynil)),(P)YPpair((P)CALL2(CHKREF(Yobjectify),handler_,r_),(P)(P)YPpair((P)CALL2(CHKREF(Yobjectify),CALL2(CHKREF(Ysexpr_make_anonymous_method),Ynil,body_),r_),(P)Ynil)));
return res;
}


FUNCODEDEF(fun_objectify_bind_list_1289) {
  ARG(pat_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yerror),lit_636,pat_);
return res;
}


FUNCODEDEF(fun_objectify_bind_list_1290) {
  ARG(pat_);
  P res, a1;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmatch_empty_listG),(P)Ynil),Ynil,Ynil);
return res;
}


FUNCODEDEF(fun_objectify_bind_list_1291) {
  ARG(pat_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(Ysexpr_unquoteQ),pat_) != YPfalse)
    ? CALL2(CHKREF(Yerror),lit_637,pat_)
    : ((CALL1(CHKREF(Ysexpr_unquote_splicingQ),pat_) != YPfalse)
    ? CALL2(CHKREF(Yerror),lit_638,pat_)
    : ((YPtrue != YPfalse)
    ? CALL1(CHKREF(Yobjectify_bind_listT),pat_)
    : YPfalse)));
return res;
}


FUNCODEDEF(fun_objectify_bind_listT_1292) {
  ARG(pat_);
  P matchersF678;
  P res, a1;
loop:
  res = (matchersF678=CALL2(CHKREF(Ymap),CHKREF(Yobjectify_bind_element),pat_),CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmatch_listG),(P)Ynil),(P)YPpair((P)CHKREF(Ymatch_elements),(P)Ynil),(P)YPpair((P)matchersF678,(P)Ynil)));
return res;
}


FUNCODEDEF(fun_objectify_bind_element_1293) {
  ARG(pat_);
  P res, a1;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmatch_atomG),(P)Ynil),(P)YPpair((P)CHKREF(Ymatch_value),(P)Ynil),(P)YPpair((P)pat_,(P)Ynil));
return res;
}


FUNCODEDEF(fun_objectify_bind_element_1294) {
  ARG(pat_);
  P matcherF679;
  P res, a1;
loop:
  res = ((CALL1(CHKREF(Ysexpr_unquoteQ),pat_) != YPfalse)
    ? CALL1(CHKREF(Yobjectify_bind_unquote),pat_)
    : ((CALL1(CHKREF(Ysexpr_unquote_splicingQ),pat_) != YPfalse)
    ? CALL1(CHKREF(Yobjectify_bind_unquote_splicing),pat_)
    : ((YPtrue != YPfalse)
    ? (matcherF679=CALL1(CHKREF(Yobjectify_bind_list),pat_),CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmatch_sublistG),(P)Ynil),(P)YPpair((P)CHKREF(Ymatch_element),(P)Ynil),(P)YPpair((P)matcherF679,(P)Ynil)))
    : YPfalse)));
return res;
}


FUNCODEDEF(fun_objectify_bind_unquote_1295) {
  ARG(pat_);
  P bindingF680;
  P res, a1;
loop:
  res = (bindingF680=CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLlocal_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)Ynil),(P)YPpair((P)CALL1(CHKREF(Y2nd),pat_),(P)Ynil)),CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmatch_unquoteG),(P)Ynil),(P)YPpair((P)CHKREF(Ymatch_binding),(P)Ynil),(P)YPpair((P)bindingF680,(P)Ynil)));
return res;
}


FUNCODEDEF(fun_objectify_bind_unquote_splicing_1296) {
  ARG(pat_);
  P bindingF681;
  P res, a1;
loop:
  res = (bindingF681=CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLlocal_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)Ynil),(P)YPpair((P)CALL1(CHKREF(Y2nd),pat_),(P)Ynil)),CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmatch_unquote_splicingG),(P)Ynil),(P)YPpair((P)CHKREF(Ymatch_binding),(P)Ynil),(P)YPpair((P)bindingF681,(P)Ynil)));
return res;
}


FUNCODEDEF(fun_objectify_pattern_1297) {
  ARG(pattern_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Yobjectify_bind_list),pattern_);
return res;
}


FUNCODEDEF(fun_1298) {
  ARG(n_);
  P res, a1;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLlocal_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)Ynil),(P)YPpair((P)n_,(P)Ynil));
return res;
}


FUNCODEDEF(fun_objectify_syntax_if_1299) {
  ARG(r_);
  ARG(else_);
  ARG(then_);
  ARG(value_);
  ARG(bindings_);
  ARG(pattern_);
  P bindingsF682;
  P res, a1, a2, a3, a4, a5, a6;
loop:
  res = (bindingsF682=CALL2(CHKREF(Ymap),fun_1298,bindings_),CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLsyntax_ifG),(P)Ynil),(P)YPpair((P)CHKREF(Ysif_pattern),(P)(P)YPpair((P)CHKREF(Ysif_bindings),(P)(P)YPpair((P)CHKREF(Ysif_value),(P)(P)YPpair((P)CHKREF(Ysif_then),(P)(P)YPpair((P)CHKREF(Ysif_else),(P)Ynil))))),(P)YPpair((P)CALL1(CHKREF(Yobjectify_pattern),pattern_),(P)(P)YPpair((P)bindingsF682,(P)(P)YPpair((P)CALL2(CHKREF(Yobjectify),value_,r_),(P)(P)YPpair((P)CALL2(CHKREF(Yobjectify),then_,CALL2(CHKREF(Yr_extendT),r_,bindingsF682)),(P)(P)YPpair((P)CALL2(CHKREF(Yobjectify),else_,r_),(P)Ynil)))))));
return res;
}


FUNCODEDEF(fun_r_extendT_1300) {
  ARG(bindings_);
  ARG(r_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLstatic_local_environmentG),(P)Ynil),(P)YPpair((P)CHKREF(Yenvironment_next),(P)(P)YPpair((P)CHKREF(Yenvironment_bindings),(P)Ynil)),(P)YPpair((P)r_,(P)(P)YPpair((P)bindings_,(P)Ynil)));
return res;
}


FUNCODEDEF(fun_insert_globalX_1301) {
  ARG(r_);
  ARG(binding_);
  P rF683;
  P res, a1, a2;
loop:
  res = (rF683=CALL1(CHKREF(Yfind_static_global_environment),r_),CALL3(CHKREF(Yelt_setter),binding_,CALL1(CHKREF(Yenvironment_bindings),rF683),CALL1(CHKREF(Ybinding_name),binding_)));
return res;
}


FUNCODEDEF(fun_1302) {
  ARG(b_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yinsert_globalX),b_,FREEREF(0));
return res;
}


FUNCODEDEF(fun_insert_globalsX_1303) {
  ARG(r_);
  ARG(bindings_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Ydo),FUNFAB(fun_1302, 1,r_),bindings_);
return res;
}


FUNCODEDEF(fun_find_static_global_environment_1304) {
  ARG(r_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Yfind_static_global_environment),CALL1(CHKREF(Yenvironment_next),r_));
return res;
}


FUNCODEDEF(fun_find_static_global_environment_1305) {
  ARG(r_);
  P res, a1;
loop:
  res = r_;
return res;
}


FUNCODEDEF(fun_loop_1306) {
  ARG(bindings_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(YemptyQ),bindings_) != YPfalse)
    ? CALL2(CHKREF(Yfind_binding),FREEREF(0),CALL1(CHKREF(Yenvironment_next),FREEREF(1)))
    : ((CALL2(CHKREF(YEE),FREEREF(0),CALL1(CHKREF(Ybinding_name),CALL1(CHKREF(Yhead),bindings_))) != YPfalse)
    ? CALL1(CHKREF(Yhead),bindings_)
    : (a1=CALL1(CHKREF(Ytail),bindings_),bindings_=a1,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_find_binding_1307) {
  ARG(r_);
  ARG(name_);
  P loopF684;
  P res, a1, a2;
loop:
  res = (loopF684=FUNSHELL(fun_loop_1306, 3),FUNINIT(loopF684, 3,name_,r_,loopF684),
  CALL1(loopF684,CALL1(CHKREF(Yenvironment_bindings),r_)));
return res;
}


FUNCODEDEF(fun_find_binding_1308) {
  ARG(r_);
  ARG(name_);
  P bindingF685;
  P res, a1, a2;
loop:
  res = (bindingF685=CALL2(CHKREF(Yelt),CALL1(CHKREF(Yenvironment_bindings),r_),name_),((CALL2(CHKREF(YEE),bindingF685,CHKREF(Ynul)) != YPfalse)
    ? CALL2(CHKREF(Yfind_binding),name_,CALL1(CHKREF(Yenvironment_next),r_))
    : bindingF685));
return res;
}


FUNCODEDEF(fun_find_binding_1309) {
  ARG(r_);
  ARG(name_);
  P res, a1, a2;
loop:
  res = YPfalse;
return res;
}


FUNCODEDEF(fun_frame_bindings_1310) {
  ARG(env_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yas),CHKREF(YLlstG),CALL2(CHKREF(Ymap),CHKREF(Yidentity),CALL1(CHKREF(Yenvironment_bindings),env_)));
return res;
}


FUNCODEDEF(fun_1311) {
  ARG(binding_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(Ybinding_freeQ),binding_) != YPfalse)
    ? CALL3(CHKREF(Yformat),CHKREF(Yout),lit_639,CALL1(CHKREF(Ybinding_name),binding_))
    : YPfalse);
return res;
}


FUNCODEDEF(fun_loop_1312) {
  ARG(env_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(Ynot),CALL2(CHKREF(YisaQ),env_,CHKREF(YLstatic_empty_environmentG))) != YPfalse)
    ? (CALL2(CHKREF(Ydo),fun_1311,CALL1(CHKREF(Yframe_bindings),env_)),
  (a1=CALL1(CHKREF(Yenvironment_next),env_),env_=a1,PNUL))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(Yreport_undefined_global_bindings) {
  ARG(env_);
  P loopF687;
  P envF686;
  P res, a1;
loop:
  res = (envF686=CALL1(CHKREF(Yfind_static_global_environment),env_),(loopF687=FUNSHELL(fun_loop_1312, 1),FUNINIT(loopF687, 1,loopF687),
  CALL1(loopF687,envF686)));
return res;
}


FUNCODEDEF(fun_register_magic_binding_1314) {
  ARG(value_);
  ARG(name_);
  P res, a1, a2;
loop:
  res = ((YTmagic_bindingsT = CALL2(CHKREF(Yadd),CHKREF(YTmagic_bindingsT),value_)));
return res;
}


FUNCODEDEF(fun_magic_bindings_1315) {
  P res;
loop:
  res = CHKREF(YTmagic_bindingsT);
return res;
}


FUNCODEDEF(fun_1316) {
  ARG(r_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALLN(CHKREF(Yobjectify_alternative),4,CALL1(CHKREF(Ysexpr_if_test),x_),CALL1(CHKREF(Ysexpr_if_then),x_),CALL1(CHKREF(Ysexpr_if_else),x_),r_);
return res;
}


FUNCODEDEF(fun_1317) {
  ARG(r_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yobjectify_sequential),CALL1(CHKREF(Ytail),x_),r_);
return res;
}


FUNCODEDEF(fun_1318) {
  ARG(r_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yobjectify_raw),CALL1(CHKREF(Y2nd),x_),r_);
return res;
}


FUNCODEDEF(fun_1319) {
  ARG(r_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yobjectify_quotation),CALL1(CHKREF(Ysexpr_text_of_quotation),x_),r_);
return res;
}


FUNCODEDEF(fun_1320) {
  ARG(r_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yobjectify_assignment),CALL1(CHKREF(Ysexpr_assignment_variable),x_),CALL1(CHKREF(Ysexpr_assignment_value),x_),r_);
return res;
}


FUNCODEDEF(fun_1321) {
  ARG(r_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yobjectify_definition),CALL1(CHKREF(Ysexpr_definition_variable),x_),CALL1(CHKREF(Ysexpr_definition_value),x_),r_);
return res;
}


FUNCODEDEF(fun_1322) {
  ARG(r_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yobjectify_syntax_definition),CALL1(CHKREF(Ysexpr_syntax_definition_variable),x_),CALL1(CHKREF(Ysexpr_syntax_definition_value),x_),r_);
return res;
}


FUNCODEDEF(fun_1323) {
  ARG(r_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yobjectify_method_definition),CALL1(CHKREF(Ysexpr_function_definition_variable),x_),CALL1(CHKREF(Ysexpr_function_definition_value),x_),r_);
return res;
}


FUNCODEDEF(fun_1324) {
  ARG(r_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yobjectify_generic_definition),CALL1(CHKREF(Ysexpr_function_definition_variable),x_),CALL1(CHKREF(Ysexpr_function_parameters),x_),r_);
return res;
}


FUNCODEDEF(fun_1325) {
  ARG(r_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yobjectify_function_definition),CALL1(CHKREF(Ysexpr_function_definition_variable),x_),CALL1(CHKREF(Ysexpr_function_definition_value),x_),r_);
return res;
}


FUNCODEDEF(fun_1326) {
  ARG(r_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yobjectify_function),CALL1(CHKREF(Ysexpr_method_parameters),x_),CALL1(CHKREF(Ysexpr_method_body),x_),r_);
return res;
}


FUNCODEDEF(fun_1327) {
  ARG(r_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yobjectify_boundQ),CALL1(CHKREF(Y2nd),x_),r_);
return res;
}


FUNCODEDEF(fun_1328) {
  ARG(r_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yobjectify),CALL1(CHKREF(Ysexpr_let_Gcombination),x_),r_);
return res;
}


FUNCODEDEF(fun_1329) {
  ARG(r_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALLN(CHKREF(Yobjectify_locals),5,CALL1(CHKREF(Ysexpr_loc_bound_names),x_),CALL1(CHKREF(Ysexpr_loc_bound_parameters),x_),CALL1(CHKREF(Ysexpr_loc_bound_bodies),x_),CALL1(CHKREF(Ysexpr_loc_raw_body),x_),r_);
return res;
}


FUNCODEDEF(fun_1330) {
  ARG(r_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yobjectify),CALL1(CHKREF(Ysexpr_iterate_Gloc),x_),r_);
return res;
}


FUNCODEDEF(fun_1331) {
  ARG(r_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yobjectify_bind_exit),CALL1(CHKREF(Ysexpr_block_name),x_),CALL1(CHKREF(Ysexpr_block_body),x_),r_);
return res;
}


FUNCODEDEF(fun_1332) {
  ARG(r_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yobjectify_unwind_protect),CALL1(CHKREF(Ysexpr_unwind_protect_protected_form),x_),CALL1(CHKREF(Ysexpr_unwind_protect_cleanup_forms),x_),r_);
return res;
}


FUNCODEDEF(fun_1333) {
  ARG(r_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yobjectify_monitor),CALL1(CHKREF(Ysexpr_monitor_handler),x_),CALL1(CHKREF(Ysexpr_monitor_body),x_),r_);
return res;
}


FUNCODEDEF(fun_pairize_1334) {
  ARG(args_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(YemptyQ),args_) != YPfalse)
    ? CALL2(CHKREF(Ylst),lit_660,Ynil)
    : CALL3(CHKREF(Ylst),lit_661,CALL1(CHKREF(Yhead),args_),CALL1(CHKREF(Ypairize),CALL1(CHKREF(Ytail),args_))));
return res;
}


FUNCODEDEF(fun_1335) {
  ARG(r_);
  ARG(x_);
  P slot_initsF688;
  P res, a1, a2;
loop:
  res = (slot_initsF688=CALL1(CHKREF(Ysexpr_isa_slot_inits),x_),CALL2(CHKREF(Yobjectify),CALL2(CHKREF(Ysexpr_make_application),lit_662,CALL3(CHKREF(Ylst),CALL1(CHKREF(Ypairize),CALL1(CHKREF(Ysexpr_isa_parents),x_)),CALL1(CHKREF(Ypairize),CALL1(CHKREF(Ysexpr_isa_init_slots),slot_initsF688)),CALL1(CHKREF(Ypairize),CALL1(CHKREF(Ysexpr_isa_init_values),slot_initsF688)))),r_));
return res;
}


FUNCODEDEF(fun_1336) {
  ARG(r_);
  ARG(x_);
  P slot_typeF692;
  P setter_nameF691;
  P nameF690;
  P varF689;
  P res, a1, a2;
loop:
  res = (varF689=CALL1(CHKREF(Ysexpr_slot_variable),x_),(nameF690=CALL1(CHKREF(Ysexpr_variable_name),varF689),(setter_nameF691=CALL1(CHKREF(Ysexpr_make_setter_name),nameF690),(slot_typeF692=CALL1(CHKREF(Ysexpr_variable_type),varF689),CALL2(CHKREF(Yobjectify),CALL1(CHKREF(Ysexpr_make_begin),CALL3(CHKREF(Ylst),CALL2(CHKREF(Ysexpr_make_getter),nameF690,CALL1(CHKREF(Ysexpr_slot_object),x_)),CALL3(CHKREF(Ysexpr_make_setter),nameF690,CALL1(CHKREF(Ysexpr_slot_object),x_),slot_typeF692),CALL2(CHKREF(Ysexpr_make_application),lit_664,CALLN(CHKREF(Ylst),5,CALL1(CHKREF(Ysexpr_slot_object),x_),nameF690,setter_nameF691,slot_typeF692,CALL2(CHKREF(Ysexpr_make_anonymous_method),lit_665,CALL1(CHKREF(Ylst),CALL1(CHKREF(Ysexpr_slot_init),x_))))))),r_)))));
return res;
}


FUNCODEDEF(fun_1337) {
  ARG(r_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yobjectify_compile_time),CALL1(CHKREF(Yhead),CALL1(CHKREF(Ytail),x_)),r_);
return res;
}


FUNCODEDEF(fun_1338) {
  ARG(r_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALLN(CHKREF(Yobjectify_primitive_definition),4,CALL1(CHKREF(Ysexpr_function_definition_variable),x_),CALL1(CHKREF(Ysexpr_function_parameters),x_),CALL1(CHKREF(Ysexpr_function_body),x_),r_);
return res;
}


FUNCODEDEF(fun_1339) {
  ARG(r_);
  ARG(x_);
  P expansionF694;
  P bq_astF693;
  P res, a1, a2;
loop:
  res = (bq_astF693=CALL2(CHKREF(Yobjectify),CALL1(CHKREF(Ysexpr_expand_backquote),x_),r_),(expansionF694=CALL2(CHKREF(Yast_eval),bq_astF693,CALL0(CHKREF(Yrt_env))),CALL2(CHKREF(Yobjectify),expansionF694,r_)));
return res;
}


FUNCODEDEF(fun_ast_macro_expand_1340) {
  ARG(r_);
  ARG(x_);
  P resF696;
  P mF695;
  P res, a1, a2;
loop:
  res = (mF695=CALL2(CHKREF(Yobjectify),CALL1(CHKREF(Yhead),x_),r_),((CALL2(CHKREF(YisaQ),mF695,CHKREF(YLmagic_bindingG)) != YPfalse)
    ? (resF696=CALL2(CALL1(CHKREF(Ybinding_handler),mF695),x_,r_),resF696)
    : YPfalse));
return res;
}


FUNCODEDEF(fun_1341) {
  ARG(r_);
  ARG(x_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yobjectify_quotation),CALL2(CHKREF(Yast_macro_expand),CALL1(CHKREF(Y2nd),x_),r_),r_);
return res;
}


FUNCODEDEF(fun_1342) {
  ARG(r_);
  ARG(x_);
  P patF697;
  P res, a1, a2;
loop:
  res = (patF697=CALL1(CHKREF(Ysexpr_syntax_if_pattern),x_),CALLN(CHKREF(Yobjectify_syntax_if),6,patF697,CALL1(CHKREF(Ysexpr_bind_pattern_variables),patF697),CALL1(CHKREF(Ysexpr_syntax_if_value),x_),CALL1(CHKREF(Ysexpr_syntax_if_then),x_),CALL1(CHKREF(Ysexpr_syntax_if_else),x_),r_));
return res;
}


FUNCODEDEF(fun_primitives_1343) {
  P res;
loop:
  res = CHKREF(YTprimitivesT);
return res;
}


FUNCODEDEF(fun_1344) {
  ARG(loc_);
  ARG(name_);
  P bindingF699;
  P symF698;
  P res, a1, a2;
loop:
  res = (symF698=CALL2(CHKREF(Yas),CHKREF(YLsymG),name_),(bindingF699=CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLruntime_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_locative),(P)Ynil)),(P)YPpair((P)symF698,(P)(P)YPpair((P)loc_,(P)Ynil))),CALL2(CHKREF(Yinsert_globalX),bindingF699,FREEREF(0))));
return res;
}


FUNCODEDEF(Yinit_rt_environment) {
  ARG(rt_env_);
  P res, a1;
loop:
  res = (P)YPdo_runtime_bindings((P)FUNFAB(fun_1344, 1,rt_env_));
return res;
}


FUNCODEDEF(Yfab_static_global_environment) {
  ARG(next_);
  ARG(type_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(YPisa),(P)YPpair((P)type_,(P)Ynil),(P)YPpair((P)CHKREF(Yenvironment_next),(P)(P)YPpair((P)CHKREF(Yenvironment_bindings),(P)Ynil)),(P)YPpair((P)next_,(P)(P)YPpair((P)CALL2(CHKREF(Yfab),CHKREF(YLtabG),lit_674),(P)Ynil)));
return res;
}


FUNCODEDEF(Yinit_static_global_environment) {
  P user_envF702;
  P sys_envF701;
  P rt_envF700;
  P res;
loop:
  res = (rt_envF700=CALL2(CHKREF(Yfab_static_global_environment),CHKREF(YLstatic_predefined_global_environmentG),CHKREF(YDempty_static_environment)),(sys_envF701=CALL2(CHKREF(Yfab_static_global_environment),CHKREF(YLstatic_predefined_global_environmentG),rt_envF700),(user_envF702=CALL2(CHKREF(Yfab_static_global_environment),CHKREF(YLstatic_global_environmentG),sys_envF701),(CALL1(CHKREF(Yinit_rt_environment),rt_envF700),
  CALL2(CHKREF(Yinsert_globalsX),CALL2(CHKREF(Ycat),CALL0(CHKREF(Ymagic_bindings)),CALL0(CHKREF(Yprimitives))),sys_envF701),
  CALL2(CHKREF(Ytup),sys_envF701,user_envF702)))));
return res;
}


FUNCODEDEF(Yinit_ast) {
  P tup31F707;
  P usr_envF706;
  P tup31F705;
  P sys_envF704;
  P tup31F703;
  P res;
loop:
  res = (tup31F703=CALL0(CHKREF(Yinit_static_global_environment)),(sys_envF704=CALL1(CHKREF(Yhead),tup31F703),(tup31F705=CALL1(CHKREF(Ytail),tup31F703),(usr_envF706=CALL1(CHKREF(Yhead),tup31F705),(tup31F707=CALL1(CHKREF(Ytail),tup31F705),(((YTstatic_predefined_global_environmentT = sys_envF704)),
  ((YTstatic_global_environmentT = usr_envF706))))))));
return res;
}


FUNCODEDEF(Yct_env) {
  P res;
loop:
  res = CHKREF(YTstatic_global_environmentT);
return res;
}


FUNCODEDEF(Yct_boot_env) {
  P res;
loop:
  res = CHKREF(YTstatic_global_boot_environmentT);
return res;
}


FUNCODEDEF(fun_loop_1351) {
  ARG(env_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(Ynot),CALL2(CHKREF(YisaQ),env_,CHKREF(YLstatic_predefined_global_environmentG))) != YPfalse)
    ? (CALL2(CHKREF(Ydo),FREEREF(0),CALL1(CHKREF(Yframe_bindings),env_)),
  (a1=CALL1(CHKREF(Yenvironment_next),env_),env_=a1,PNUL))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(Ydo_static_global_bindings) {
  ARG(env_);
  ARG(f_);
  P loopF708;
  P res, a1, a2;
loop:
  res = (loopF708=FUNSHELL(fun_loop_1351, 2),FUNINIT(loopF708, 2,f_,loopF708),
  CALL1(loopF708,env_));
return res;
}


FUNCODEDEF(fun_ast_eval_in_1353) {
  ARG(env_);
  ARG(e_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yast_eval),e_,env_);
return res;
}


FUNCODEDEF(fun_ast_eval_1354) {
  ARG(env_);
  ARG(e_);
  P res, a1, a2;
loop:
  res = CALL1(CHKREF(Yconstant_value),e_);
return res;
}


FUNCODEDEF(fun_ast_eval_1355) {
  ARG(env_);
  ARG(e_);
  P res, a1, a2;
loop:
  res = CALL1(CHKREF(Yconstant_value),e_);
return res;
}


FUNCODEDEF(fun_ast_eval_1356) {
  ARG(ee_);
  ARG(e_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Ycompile_time_program),e_),CALL0(CHKREF(Yrt_env)));
return res;
}


FUNCODEDEF(fun_loop_1357) {
  ARG(i_);
  ARG(specs_);
  ARG(res_);
  P typeF710;
  P specF709;
  P res, a1, a2, a3;
loop:
  res = ((CALL2(CHKREF(YE),i_,FREEREF(0)) != YPfalse)
    ? CALL1(CHKREF(YrevX),res_)
    : (specF709=CALL1(CHKREF(Yhead),specs_),(typeF710=((specF709 != YPfalse)
    ? CALL2(CHKREF(Yast_eval),specF709,FREEREF(1))
    : CHKREF(YLanyG)),(a1=CALL2(CHKREF(Ypair),typeF710,res_),a2=CALL1(CHKREF(Ytail),specs_),a3=CALL2(CHKREF(YA),i_,lit_676),res_=a1,specs_=a2,i_=a3,PNUL))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_ast_eval_specs_1358) {
  ARG(env_);
  ARG(naryQ_);
  ARG(specs_);
  P loopF712;
  P nreqF711;
  P res, a1, a2, a3;
loop:
  res = (nreqF711=((naryQ_ != YPfalse)
    ? CALL2(CHKREF(Y_),CALL1(CHKREF(Ylen),specs_),lit_675)
    : CALL1(CHKREF(Ylen),specs_)),(loopF712=FUNSHELL(fun_loop_1357, 3),FUNINIT(loopF712, 3,nreqF711,env_,loopF712),
  CALL3(loopF712,Ynil,specs_,lit_677)));
return res;
}


FUNCODEDEF(fun_1359) {
  P frameF713;
  P res;
loop:
  res = (frameF713=CALLN(CHKREF(Yenv_frameX),4,FREEREF(0),FREEREF(1),FREEREF(2),CALL0(CHKREF(Ylst))),CALL1(FREEREF(3),frameF713));
return res;
}


FUNCODEDEF(fun_1360) {
  ARG(a1_);
  P frameF714;
  P res, a1;
loop:
  res = (frameF714=CALLN(CHKREF(Yenv_frameX),4,FREEREF(0),FREEREF(1),FREEREF(2),CALL1(CHKREF(Ylst),a1_)),CALL1(FREEREF(3),frameF714));
return res;
}


FUNCODEDEF(fun_1361) {
  ARG(a2_);
  ARG(a1_);
  P frameF715;
  P res, a1, a2;
loop:
  res = (frameF715=CALLN(CHKREF(Yenv_frameX),4,FREEREF(0),FREEREF(1),FREEREF(2),CALL2(CHKREF(Ylst),a1_,a2_)),CALL1(FREEREF(3),frameF715));
return res;
}


FUNCODEDEF(fun_1362) {
  ARG(a3_);
  ARG(a2_);
  ARG(a1_);
  P frameF716;
  P res, a1, a2, a3;
loop:
  res = (frameF716=CALLN(CHKREF(Yenv_frameX),4,FREEREF(0),FREEREF(1),FREEREF(2),CALL3(CHKREF(Ylst),a1_,a2_,a3_)),CALL1(FREEREF(3),frameF716));
return res;
}


FUNCODEDEF(fun_1363) {
  ARG(a4_);
  ARG(a3_);
  ARG(a2_);
  ARG(a1_);
  P frameF717;
  P res, a1, a2, a3, a4;
loop:
  res = (frameF717=CALLN(CHKREF(Yenv_frameX),4,FREEREF(0),FREEREF(1),FREEREF(2),CALLN(CHKREF(Ylst),4,a1_,a2_,a3_,a4_)),CALL1(FREEREF(3),frameF717));
return res;
}


FUNCODEDEF(fun_1364) {
  ARG(a5_);
  ARG(a4_);
  ARG(a3_);
  ARG(a2_);
  ARG(a1_);
  P frameF718;
  P res, a1, a2, a3, a4, a5;
loop:
  res = (frameF718=CALLN(CHKREF(Yenv_frameX),4,FREEREF(0),FREEREF(1),FREEREF(2),CALLN(CHKREF(Ylst),5,a1_,a2_,a3_,a4_,a5_)),CALL1(FREEREF(3),frameF718));
return res;
}


FUNCODEDEF(fun_1365) {
  ARG(a6_);
  ARG(a5_);
  ARG(a4_);
  ARG(a3_);
  ARG(a2_);
  ARG(a1_);
  P frameF719;
  P res, a1, a2, a3, a4, a5, a6;
loop:
  res = (frameF719=CALLN(CHKREF(Yenv_frameX),4,FREEREF(0),FREEREF(1),FREEREF(2),CALLN(CHKREF(Ylst),6,a1_,a2_,a3_,a4_,a5_,a6_)),CALL1(FREEREF(3),frameF719));
return res;
}


FUNCODEDEF(fun_1366) {
  ARG(a7_);
  ARG(a6_);
  ARG(a5_);
  ARG(a4_);
  ARG(a3_);
  ARG(a2_);
  ARG(a1_);
  P frameF720;
  P res, a1, a2, a3, a4, a5, a6, a7;
loop:
  res = (frameF720=CALLN(CHKREF(Yenv_frameX),4,FREEREF(0),FREEREF(1),FREEREF(2),CALLN(CHKREF(Ylst),7,a1_,a2_,a3_,a4_,a5_,a6_,a7_)),CALL1(FREEREF(3),frameF720));
return res;
}


FUNCODEDEF(fun_1367) {
  ARG(a8_);
  ARG(a7_);
  ARG(a6_);
  ARG(a5_);
  ARG(a4_);
  ARG(a3_);
  ARG(a2_);
  ARG(a1_);
  P frameF721;
  P res, a1, a2, a3, a4, a5, a6, a7, a8;
loop:
  res = (frameF721=CALLN(CHKREF(Yenv_frameX),4,FREEREF(0),FREEREF(1),FREEREF(2),CALLN(CHKREF(Ylst),8,a1_,a2_,a3_,a4_,a5_,a6_,a7_,a8_)),CALL1(FREEREF(3),frameF721));
return res;
}


FUNCODEDEF(fun_1368) {
  ARG(a9_);
  ARG(a8_);
  ARG(a7_);
  ARG(a6_);
  ARG(a5_);
  ARG(a4_);
  ARG(a3_);
  ARG(a2_);
  ARG(a1_);
  P frameF722;
  P res, a1, a2, a3, a4, a5, a6, a7, a8, a9;
loop:
  res = (frameF722=CALLN(CHKREF(Yenv_frameX),4,FREEREF(0),FREEREF(1),FREEREF(2),CALLN(CHKREF(Ylst),9,a1_,a2_,a3_,a4_,a5_,a6_,a7_,a8_,a9_)),CALL1(FREEREF(3),frameF722));
return res;
}


FUNCODEDEF(fun_export_proto_method_1369) {
  ARG(env_);
  ARG(body_);
  ARG(naryQ_);
  ARG(specs_);
  ARG(names_);
  ARG(f_);
  P efunF733;
  P x_1018F732;
  P x_1017F731;
  P x_1016F730;
  P x_1015F729;
  P x_1014F728;
  P x_1013F727;
  P x_1012F726;
  P x_1011F725;
  P x_1010F724;
  P x_1009F723;
  P res, a1, a2, a3, a4, a5, a6;
loop:
  res = (efunF733=(x_1009F723=CALL1(CHKREF(Ylen),names_),((CALL2(CHKREF(YEE),x_1009F723,lit_679) != YPfalse)
    ? FUNFAB(fun_1359, 4,env_,f_,names_,body_)
    : (x_1010F724=x_1009F723,((CALL2(CHKREF(YEE),x_1010F724,lit_680) != YPfalse)
    ? FUNFAB(fun_1360, 4,env_,f_,names_,body_)
    : (x_1011F725=x_1010F724,((CALL2(CHKREF(YEE),x_1011F725,lit_681) != YPfalse)
    ? FUNFAB(fun_1361, 4,env_,f_,names_,body_)
    : (x_1012F726=x_1011F725,((CALL2(CHKREF(YEE),x_1012F726,lit_682) != YPfalse)
    ? FUNFAB(fun_1362, 4,env_,f_,names_,body_)
    : (x_1013F727=x_1012F726,((CALL2(CHKREF(YEE),x_1013F727,lit_683) != YPfalse)
    ? FUNFAB(fun_1363, 4,env_,f_,names_,body_)
    : (x_1014F728=x_1013F727,((CALL2(CHKREF(YEE),x_1014F728,lit_684) != YPfalse)
    ? FUNFAB(fun_1364, 4,env_,f_,names_,body_)
    : (x_1015F729=x_1014F728,((CALL2(CHKREF(YEE),x_1015F729,lit_685) != YPfalse)
    ? FUNFAB(fun_1365, 4,env_,f_,names_,body_)
    : (x_1016F730=x_1015F729,((CALL2(CHKREF(YEE),x_1016F730,lit_686) != YPfalse)
    ? FUNFAB(fun_1366, 4,env_,f_,names_,body_)
    : (x_1017F731=x_1016F730,((CALL2(CHKREF(YEE),x_1017F731,lit_687) != YPfalse)
    ? FUNFAB(fun_1367, 4,env_,f_,names_,body_)
    : (x_1018F732=x_1017F731,((CALL2(CHKREF(YEE),x_1018F732,lit_688) != YPfalse)
    ? FUNFAB(fun_1368, 4,env_,f_,names_,body_)
    : YPfalse)))))))))))))))))))),(((naryQ_ != YPfalse)
    ? (CALL2(CHKREF(Yfun_naryQ_setter),YPtrue,efunF733),
  CALL2(CHKREF(Yfun_arity_setter),CALL2(CHKREF(Y_),CALL1(CHKREF(Yfun_arity),efunF733),lit_689),efunF733))
    : YPfalse),
  CALL2(CHKREF(Yfun_specs_setter),CALL3(CHKREF(Yast_eval_specs),specs_,naryQ_,env_),efunF733),
  efunF733));
return res;
}


FUNCODEDEF(fun_1370) {
  ARG(env_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Yfunction_body),FREEREF(0)),env_);
return res;
}


FUNCODEDEF(fun_ast_eval_1371) {
  ARG(env_);
  ARG(e_);
  P evalF735;
  P paramsF734;
  P res, a1, a2;
loop:
  res = (paramsF734=CALL1(CHKREF(Yfunction_bindings),e_),(evalF735=FUNFAB(fun_1370, 1,e_),CALLN(CHKREF(Yexport_proto_method),6,e_,CALL2(CHKREF(Ymap),CHKREF(Ybinding_name),paramsF734),CALL2(CHKREF(Ymap),CHKREF(Ybinding_type),paramsF734),CALL1(CHKREF(Yfunction_naryQ),e_),evalF735,env_)));
return res;
}


FUNCODEDEF(fun_ast_eval_1372) {
  ARG(env_);
  ARG(e_);
  P specsF738;
  P naryQF737;
  P paramsF736;
  P res, a1, a2;
loop:
  res = (paramsF736=CALL1(CHKREF(Yfunction_bindings),e_),(naryQF737=CALL1(CHKREF(Yfunction_naryQ),e_),(specsF738=CALL3(CHKREF(Yast_eval_specs),CALL2(CHKREF(Ymap),CHKREF(Ybinding_type),paramsF736),naryQF737,env_),CALL3(CHKREF(Yfab_gen),specsF738,naryQF737,Ynil))));
return res;
}


FUNCODEDEF(fun_env_local_reference_value_1373) {
  ARG(ref_);
  ARG(env_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yenv_local_value),env_,CALL1(CHKREF(Yreference_frame_number),ref_),CALL1(CHKREF(Yreference_frame_offset),ref_));
return res;
}


FUNCODEDEF(fun_env_local_reference_value_setter_1374) {
  ARG(ref_);
  ARG(env_);
  ARG(val_);
  P res, a1, a2, a3;
loop:
  res = CALLN(CHKREF(Yenv_local_value_setter),4,val_,env_,CALL1(CHKREF(Yreference_frame_number),ref_),CALL1(CHKREF(Yreference_frame_offset),ref_));
return res;
}


FUNCODEDEF(fun_ast_eval_1375) {
  ARG(env_);
  ARG(e_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yenv_local_reference_value),env_,e_);
return res;
}


FUNCODEDEF(fun_env_global_binding_value_or_1376) {
  ARG(default_);
  ARG(b_);
  ARG(env_);
  P valueF739;
  P res, a1, a2, a3;
loop:
  res = (valueF739=CALL2(CHKREF(Yenv_global_value),env_,CALL1(CHKREF(Ybinding_index),b_)),((CALL2(CHKREF(YEE),valueF739,CHKREF(Ynul)) != YPfalse)
    ? default_
    : valueF739));
return res;
}


FUNCODEDEF(fun_env_global_binding_value_1377) {
  ARG(b_);
  ARG(env_);
  P valueF740;
  P res, a1, a2;
loop:
  res = (valueF740=CALL2(CHKREF(Yenv_global_value),env_,CALL1(CHKREF(Ybinding_index),b_)),((CALL2(CHKREF(YEE),valueF740,CHKREF(Ynul)) != YPfalse)
    ? CALL3(CHKREF(Yerror),lit_690,CALL1(CHKREF(Ybinding_name),b_),valueF740)
    : valueF740));
return res;
}


FUNCODEDEF(fun_env_global_binding_value_setter_1378) {
  ARG(b_);
  ARG(env_);
  ARG(value_);
  P res, a1, a2, a3;
loop:
  res = CALL3(CHKREF(Yenv_global_value_setter),value_,env_,CALL1(CHKREF(Ybinding_index),b_));
return res;
}


FUNCODEDEF(fun_ast_eval_1379) {
  ARG(env_);
  ARG(e_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yenv_global_binding_value),CALL0(CHKREF(Yrt_glo_env)),CALL1(CHKREF(Yreference_binding),e_));
return res;
}


FUNCODEDEF(fun_ast_eval_1380) {
  ARG(env_);
  ARG(e_);
  P res, a1, a2;
loop:
  res = CALL1(CHKREF(Yenv_runtime_value),CALL1(CHKREF(Ybinding_locative),CALL1(CHKREF(Yreference_binding),e_)));
return res;
}


FUNCODEDEF(fun_ast_eval_1381) {
  ARG(env_);
  ARG(e_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yast_eval_boundQ),e_,CALL1(CHKREF(Yreference_binding),CALL1(CHKREF(YboundQ_reference),e_)),env_);
return res;
}


FUNCODEDEF(fun_ast_eval_boundQ_1382) {
  ARG(env_);
  ARG(binding_);
  ARG(e_);
  P res, a1, a2, a3;
loop:
  res = CALL2(CHKREF(YNEE),CALL3(CHKREF(Yenv_global_binding_value_or),CALL0(CHKREF(Yrt_glo_env)),binding_,CHKREF(Ynul)),CHKREF(Ynul));
return res;
}


FUNCODEDEF(fun_ast_eval_boundQ_1383) {
  ARG(env_);
  ARG(binding_);
  ARG(e_);
  P res, a1, a2, a3;
loop:
  res = YPtrue;
return res;
}


FUNCODEDEF(fun_ast_eval_boundQ_1384) {
  ARG(env_);
  ARG(binding_);
  ARG(e_);
  P res, a1, a2, a3;
loop:
  res = YPtrue;
return res;
}


FUNCODEDEF(fun_ast_eval_1385) {
  ARG(env_);
  ARG(e_);
  P valueF741;
  P res, a1, a2;
loop:
  res = (valueF741=CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Yassignment_form),e_),env_),CALL3(CHKREF(Yenv_global_binding_value_setter),valueF741,CALL0(CHKREF(Yrt_glo_env)),CALL1(CHKREF(Yassignment_binding),e_)));
return res;
}


FUNCODEDEF(fun_ast_eval_1386) {
  ARG(env_);
  ARG(e_);
  P valueF742;
  P res, a1, a2;
loop:
  res = (valueF742=CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Yassignment_form),e_),env_),CALL2(CHKREF(Yenv_runtime_value_setter),valueF742,CALL1(CHKREF(Ybinding_locative),CALL1(CHKREF(Yassignment_binding),e_))));
return res;
}


FUNCODEDEF(fun_ast_eval_1387) {
  ARG(env_);
  ARG(e_);
  P valueF743;
  P res, a1, a2;
loop:
  res = (valueF743=CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Yassignment_form),e_),env_),CALL3(CHKREF(Yenv_local_reference_value_setter),valueF743,env_,CALL1(CHKREF(Yassignment_reference),e_)));
return res;
}


FUNCODEDEF(fun_env_define_bindingX_1388) {
  ARG(v_);
  ARG(b_);
  ARG(env_);
  P res, a1, a2, a3;
loop:
  res = CALL2(CHKREF(Yenv_runtime_value_setter),v_,CALL1(CHKREF(Ybinding_locative),b_));
return res;
}


FUNCODEDEF(fun_env_define_bindingX_1389) {
  ARG(v_);
  ARG(b_);
  ARG(env_);
  P res, a1, a2, a3;
loop:
  res = CALL3(CHKREF(Yenv_global_value_setter),v_,env_,CALL1(CHKREF(Ybinding_index),b_));
return res;
}


FUNCODEDEF(fun_ast_eval_1390) {
  ARG(env_);
  ARG(e_);
  P valueF744;
  P res, a1, a2;
loop:
  res = (valueF744=CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Yassignment_form),e_),env_),(CALL3(CHKREF(Yenv_define_bindingX),CALL0(CHKREF(Yrt_glo_env)),CALL1(CHKREF(Yassignment_binding),e_),valueF744),
  YPfalse));
return res;
}


FUNCODEDEF(fun_box_value_1391) {
  ARG(Ux_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Ybox_value));
return res;
}


FUNCODEDEF(fun_box_value_setter_1392) {
  ARG(Ux_);
  ARG(Uz_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Ybox_value));
return res;
}


FUNCODEDEF(fun_1393) {
  ARG(x_);
  P res, a1;
loop:
  res = CHKREF(Ynul);
return res;
}


FUNCODEDEF(fun_ast_eval_1394) {
  ARG(env_);
  ARG(e_);
  P res, a1, a2;
loop:
  res = ((CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Yalternative_condition),e_),env_) != YPfalse)
    ? CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Yalternative_consequent),e_),env_)
    : CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Yalternative_alternant),e_),env_));
return res;
}


FUNCODEDEF(fun_eval_1395) {
  ARG(e_);
  P valF746;
  P nxtF745;
  P res, a1;
loop:
  res = (nxtF745=CALL1(CHKREF(Ysequential_tail),e_),(valF746=CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Ysequential_head),e_),FREEREF(0)),((CALL1(CHKREF(Yempty_sequentialQ),nxtF745) != YPfalse)
    ? valF746
    : (a1=nxtF745,e_=a1,PNUL))));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_ast_eval_1396) {
  ARG(env_);
  ARG(e_);
  P evalF747;
  P res, a1, a2;
loop:
  res = (evalF747=FUNSHELL(fun_eval_1395, 2),FUNINIT(evalF747, 2,env_,evalF747),
  CALL1(evalF747,e_));
return res;
}


FUNCODEDEF(fun_eval_1397) {
  ARG(args_);
  ARG(res_);
  P res, a1, a2;
loop:
  res = ((CALL1(CHKREF(Yempty_argument_listQ),args_) != YPfalse)
    ? CALL1(CHKREF(YrevX),res_)
    : (a1=CALL2(CHKREF(Ypair),CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Yarguments_head),args_),FREEREF(0)),res_),a2=CALL1(CHKREF(Yarguments_tail),args_),res_=a1,args_=a2,PNUL));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_ast_eval_1398) {
  ARG(env_);
  ARG(e_);
  P evalF748;
  P res, a1, a2;
loop:
  res = (evalF748=FUNSHELL(fun_eval_1397, 2),FUNINIT(evalF748, 2,env_,evalF748),
  CALL2(evalF748,Ynil,e_));
return res;
}


FUNCODEDEF(fun_ast_eval_1399) {
  ARG(env_);
  ARG(e_);
  P argsF750;
  P fF749;
  P res, a1, a2;
loop:
  res = (fF749=CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Yapplication_function),e_),env_),(argsF750=CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Yapplication_arguments),e_),env_),CALL2(CHKREF(Yapply),fF749,argsF750)));
return res;
}


FUNCODEDEF(fun_ast_eval_1400) {
  ARG(env_);
  ARG(e_);
  P argsF752;
  P fF751;
  P res, a1, a2;
loop:
  res = (fF751=CALL2(CHKREF(Yenv_binding_value),env_,CALL1(CHKREF(Ybinding_name),CALL1(CHKREF(Yapplication_binding),e_))),(argsF752=CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Yapplication_arguments),e_),env_),CALL2(CHKREF(Yapply),fF751,argsF752)));
return res;
}


FUNCODEDEF(fun_ast_eval_1401) {
  ARG(env_);
  ARG(e_);
  P nenvF754;
  P argsF753;
  P res, a1, a2;
loop:
  res = (argsF753=CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Yfix_let_arguments),e_),env_),(nenvF754=CALLN(CHKREF(Yenv_frameX),4,env_,YPfalse,CALL2(CHKREF(Ymap),CHKREF(Ybinding_name),CALL1(CHKREF(Yfix_let_bindings),e_)),argsF753),CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Yfix_let_body),e_),nenvF754)));
return res;
}


FUNCODEDEF(fun_1402) {
  ARG(value_);
  ARG(name_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yenv_binding_value_setter),value_,FREEREF(0),name_);
return res;
}


FUNCODEDEF(fun_ast_eval_1403) {
  ARG(env_);
  ARG(e_);
  P new_envF756;
  P bindingsF755;
  P res, a1, a2;
loop:
  res = (bindingsF755=CALL1(CHKREF(Ylocals_bindings),e_),(new_envF756=CALLN(CHKREF(Yenv_frameX),4,env_,YPfalse,CALL2(CHKREF(Ymap),CHKREF(Ybinding_name),bindingsF755),CALL2(CHKREF(Ymap),CALL1(CHKREF(Yalways),CHKREF(Ynul)),bindingsF755)),(CALL3(CHKREF(Ydo2),FUNFAB(fun_1402, 1,new_envF756),CALL2(CHKREF(Ymap),CHKREF(Ybinding_name),bindingsF755),CALL2(CHKREF(Ymap),CALL2(CHKREF(Yrcurry),CHKREF(Yast_eval),new_envF756),CALL1(CHKREF(Ylocals_functions),e_))),
  CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Ylocals_body),e_),new_envF756))));
return res;
}


FUNCODEDEF(fun_1404) {
  ARG(env_);
  P res, a1;
loop:
  res = CALL1(FREEREF(0),CALL2(CHKREF(Yenv_binding_value),env_,lit_691));
return res;
}


FUNCODEDEF(fun_1405) {
  ARG(return_);
  P exitF758;
  P rprocF757;
  P res, a1;
loop:
  res = (rprocF757=FUNFAB(fun_1404, 1,return_),(exitF758=CALLN(CHKREF(Yexport_proto_method),6,rprocF757,CALL1(CHKREF(Ylst),lit_692),CALL1(CHKREF(Ylst),YPfalse),YPfalse,rprocF757,FREEREF(0)),CALL1(CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Ybind_exit_main_fun),FREEREF(1)),FREEREF(0)),exitF758)));
return res;
}


FUNCODEDEF(fun_ast_eval_1406) {
  ARG(env_);
  ARG(e_);
  P res, a1, a2;
loop:
  res = with_exit(FUNFAB(fun_1405, 2,env_,e_));
return res;
}


FUNCODEDEF(fun_1407) {
  P res;
loop:
  res = CALL0(CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Yunwind_protect_protected_thunk),FREEREF(0)),FREEREF(1)));
return res;
}


FUNCODEDEF(fun_1408) {
  P res;
loop:
  res = CALL0(CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Yunwind_protect_cleanup_thunk),FREEREF(0)),FREEREF(1)));
return res;
}


FUNCODEDEF(fun_ast_eval_1409) {
  ARG(env_);
  ARG(e_);
  P res, a1, a2;
loop:
  res = with_cleanup(FUNFAB(fun_1407, 2,e_,env_), FUNFAB(fun_1408, 2,e_,env_));
return res;
}


FUNCODEDEF(fun_ast_eval_1410) {
  ARG(env_);
  ARG(e_);
  P res, a1, a2;
loop:
  res = (P)YPwith_monitor((P)CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Ymonitor_handler),e_),env_),(P)CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Ymonitor_main_thunk),e_),env_));
return res;
}


FUNCODEDEF(fun_match_error_1411) {
  ARG(args_);
  ARG(message_);
  P res, a1, a2;
loop:
  res = CALL1(CHKREF(Ysig),CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLpattern_match_failureG),(P)Ynil),(P)YPpair((P)CHKREF(Ycondition_message),(P)(P)YPpair((P)CHKREF(Ycondition_arguments),(P)Ynil)),(P)YPpair((P)message_,(P)(P)YPpair((P)args_,(P)Ynil))));
return res;
}


FUNCODEDEF(fun_ast_eval_match_1412) {
  ARG(e_);
  ARG(v_);
  ARG(match_);
  P res, a1, a2, a3;
loop:
  res = ((CALL1(CHKREF(Ynot),CALL2(CHKREF(YEE),v_,Ynil)) != YPfalse)
    ? CALL3(CHKREF(Ymatch_error),lit_693,v_,match_)
    : YPfalse);
return res;
}


FUNCODEDEF(fun_loop_1413) {
  ARG(elts_);
  ARG(v_);
  P res, a1, a2;
loop:
  res = ((CALL1(CHKREF(Ynot),CALL1(CHKREF(YemptyQ),elts_)) != YPfalse)
    ? (CALL3(CHKREF(Yast_eval_match),CALL1(CHKREF(Yhead),elts_),v_,FREEREF(0)),
  (a1=CALL1(CHKREF(Ytail),v_),a2=CALL1(CHKREF(Ytail),elts_),v_=a1,elts_=a2,PNUL))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_ast_eval_match_1414) {
  ARG(e_);
  ARG(v_);
  ARG(match_);
  P loopF759;
  P res, a1, a2, a3;
loop:
  res = ((CALL2(CHKREF(YisaQ),v_,CHKREF(YLlstG)) != YPfalse)
    ? (loopF759=FUNSHELL(fun_loop_1413, 2),FUNINIT(loopF759, 2,e_,loopF759),
  CALL2(loopF759,v_,CALL1(CHKREF(Ymatch_elements),match_)))
    : CALL3(CHKREF(Ymatch_error),lit_694,v_,match_));
return res;
}


FUNCODEDEF(fun_ast_eval_match_1415) {
  ARG(e_);
  ARG(v_);
  ARG(match_);
  P expF760;
  P res, a1, a2, a3;
loop:
  res = ((CALL2(CHKREF(YEE),v_,Ynil) != YPfalse)
    ? CALL2(CHKREF(Ymatch_error),lit_695,match_)
    : (expF760=CALL1(CHKREF(Yhead),v_),((CALL1(CHKREF(Ynot),CALL2(CHKREF(YEE),expF760,CALL1(CHKREF(Ymatch_value),match_))) != YPfalse)
    ? CALL3(CHKREF(Ymatch_error),lit_696,expF760,match_)
    : YPfalse)));
return res;
}


FUNCODEDEF(fun_ast_eval_match_1416) {
  ARG(e_);
  ARG(v_);
  ARG(match_);
  P res, a1, a2, a3;
loop:
  res = ((CALL2(CHKREF(YEE),v_,Ynil) != YPfalse)
    ? CALL2(CHKREF(Ymatch_error),lit_697,match_)
    : CALL3(CHKREF(Yenv_binding_value_setter),CALL1(CHKREF(Yhead),v_),e_,CALL1(CHKREF(Ybinding_name),CALL1(CHKREF(Ymatch_binding),match_))));
return res;
}


FUNCODEDEF(fun_ast_eval_match_1417) {
  ARG(e_);
  ARG(v_);
  ARG(match_);
  P res, a1, a2, a3;
loop:
  res = CALL3(CHKREF(Yenv_binding_value_setter),v_,e_,CALL1(CHKREF(Ybinding_name),CALL1(CHKREF(Ymatch_binding),match_)));
return res;
}


FUNCODEDEF(fun_ast_eval_match_1418) {
  ARG(e_);
  ARG(v_);
  ARG(match_);
  P tmpF761;
  P res, a1, a2, a3;
loop:
  res = (((tmpF761=CALL2(CHKREF(YisaQ),v_,CHKREF(YLlstG)),((tmpF761 != YPfalse)
    ? CALL1(CHKREF(Ynot),CALL2(CHKREF(YEE),v_,Ynil))
    : YPfalse)) != YPfalse)
    ? CALL3(CHKREF(Yast_eval_match),CALL1(CHKREF(Ymatch_element),match_),CALL1(CHKREF(Yhead),v_),e_)
    : CALL3(CHKREF(Ymatch_error),lit_698,v_,match_));
return res;
}


FUNCODEDEF(fun_1419) {
  ARG(resume_);
  ARG(condition_);
  P res, a1, a2;
loop:
  res = CALL1(FREEREF(2),CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Ysif_else),FREEREF(0)),FREEREF(1)));
return res;
}


FUNCODEDEF(fun_1420) {
  P res;
loop:
  res = CALL3(CHKREF(Yast_eval_match),CALL1(CHKREF(Ysif_pattern),FREEREF(0)),FREEREF(1),FREEREF(2));
return res;
}


FUNCODEDEF(fun_1421) {
  ARG(return_);
  P res, a1;
loop:
YPwith_monitor(FUNFAB(fun_1419, 3,FREEREF(0),FREEREF(1),return_), FUNFAB(fun_1420, 3,FREEREF(0),FREEREF(2),FREEREF(3)));
  res = CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Ysif_then),FREEREF(0)),FREEREF(3));
return res;
}


FUNCODEDEF(fun_ast_eval_1422) {
  ARG(env_);
  ARG(x_);
  P new_envF764;
  P bindingsF763;
  P valueF762;
  P res, a1, a2;
loop:
  res = (valueF762=CALL2(CHKREF(Yast_eval),CALL1(CHKREF(Ysif_value),x_),env_),(bindingsF763=CALL1(CHKREF(Ysif_bindings),x_),(new_envF764=CALLN(CHKREF(Yenv_frameX),4,env_,YPfalse,CALL2(CHKREF(Ymap),CHKREF(Ybinding_name),bindingsF763),CALL2(CHKREF(Ymap),CALL1(CHKREF(Yalways),CHKREF(Ynul)),bindingsF763)),with_exit(FUNFAB(fun_1421, 4,x_,env_,valueF762,new_envF764)))));
return res;
}


FUNCODEDEF(Yrt_glo_env) {
  P res;
loop:
  res = CHKREF(YTrt_glo_envT);
return res;
}


FUNCODEDEF(Yrt_glo_env_setter) {
  ARG(env_);
  P res, a1;
loop:
  res = ((YTrt_glo_envT = env_));
return res;
}


FUNCODEDEF(Yrt_env) {
  P res;
loop:
  res = CHKREF(YTrt_envT);
return res;
}


FUNCODEDEF(Yrt_env_setter) {
  ARG(env_);
  P res, a1;
loop:
  res = ((YTrt_envT = env_));
return res;
}


FUNCODEDEF(Yast_read_eval) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yast_eval_in),CALL2(CHKREF(Yobjectify),x_,CALL0(CHKREF(Yct_env))),CALL0(CHKREF(Yrt_env)));
return res;
}


FUNCODEDEF(Yinit_ast_eval) {
  P res;
loop:
  res = ((YTrt_glo_envT = CALL0(CHKREF(Yfab_glo_env))));
return res;
}


FUNCODEDEF(fun_os_name_1429) {
  P res;
loop:
  res = (P)YPsb((P)(P)YPos_name());
return res;
}


FUNCODEDEF(fun_os_binding_value_1430) {
  ARG(s_);
  P res, a1;
loop:
  res = (P)YPsb((P)(P)YPos_binding_value((P)(P)YPsu((P)s_)));
return res;
}


FUNCODEDEF(fun_os_binding_value_setter_1431) {
  ARG(s_);
  ARG(v_);
  P res, a1, a2;
loop:
(P)YPos_binding_value_setter((P)(P)YPsu((P)v_),(P)(P)YPsu((P)s_));
  res = v_;
return res;
}


FUNCODEDEF(fun_loop_1432) {
  ARG(i_);
  P res, a1;
loop:
  res = ((CALL2(CHKREF(YL),i_,lit_704) != YPfalse)
    ? lit_705
    : ((CALL2(CHKREF(YE),CALL2(CHKREF(Yelt),FREEREF(0),i_),CALL2(CHKREF(Yelt),CHKREF(YTpath_separatorT),lit_706)) != YPfalse)
    ? CALL3(CHKREF(Ysub),FREEREF(0),lit_707,CALL2(CHKREF(YA),i_,lit_708))
    : (a1=CALL2(CHKREF(Y_),i_,lit_709),i_=a1,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_base_path_1433) {
  ARG(filename_);
  P loopF765;
  P res, a1;
loop:
  res = (loopF765=FUNSHELL(fun_loop_1432, 2),FUNINIT(loopF765, 2,filename_,loopF765),
  CALL1(loopF765,CALL1(CHKREF(Ylen),filename_)));
return res;
}


FUNCODEDEF(fun_src_filename_1434) {
  ARG(filename_);
  P res, a1;
loop:
  res = ((CALL1(CHKREF(YemptyQ),CHKREF(YTproto_rootT)) != YPfalse)
    ? CALLN(CHKREF(Ycat),6,CALL1(CHKREF(Ybase_path),CALL0(CHKREF(Yapp_filename))),lit_711,CHKREF(YTpath_separatorT),lit_712,CHKREF(YTpath_separatorT),filename_)
    : CALLN(CHKREF(Ycat),4,CHKREF(YTproto_rootT),lit_713,CHKREF(YTpath_separatorT),filename_));
return res;
}


FUNCODEDEF(fun_parse_in_1435) {
  ARG(ct_env_);
  ARG(s_);
  P res, a1, a2;
loop:
  res = CALL2(CHKREF(Yobjectify),CALL1(CHKREF(Yread_from_string),s_),ct_env_);
return res;
}


FUNCODEDEF(fun_parse_1436) {
  ARG(s_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Yparse_in),s_,CALL0(CHKREF(Yct_env)));
return res;
}


FUNCODEDEF(fun_str_parse_in_1437) {
  ARG(ct_env_);
  ARG(s_);
  P res, a1, a2;
loop:
  res = CALL3(CHKREF(Yformat),CHKREF(Yout),lit_714,CALL2(CHKREF(Yparse_in),s_,ct_env_));
return res;
}


FUNCODEDEF(fun_str_parse_1438) {
  ARG(s_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ystr_parse_in),s_,CALL0(CHKREF(Yct_env)));
return res;
}


FUNCODEDEF(fun_eval_in_1439) {
  ARG(rt_env_);
  ARG(ct_env_);
  ARG(x_);
  P eF767;
  P oF766;
  P res, a1, a2, a3;
loop:
  res = (oF766=CALL2(CHKREF(Yobjectify),x_,ct_env_),(eF767=CALL2(CHKREF(Yast_eval_in),oF766,rt_env_),eF767));
return res;
}


FUNCODEDEF(fun_eval_1440) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL3(CHKREF(Yeval_in),x_,CALL0(CHKREF(Yct_env)),CALL0(CHKREF(Yrt_env)));
return res;
}


FUNCODEDEF(fun_str_eval_in_1441) {
  ARG(rt_env_);
  ARG(ct_env_);
  ARG(x_);
  P res, a1, a2, a3;
loop:
  res = CALL1(CHKREF(Ywrite_to_string),CALL3(CHKREF(Yeval_in),CALL1(CHKREF(Yread_from_string),x_),ct_env_,rt_env_));
return res;
}


FUNCODEDEF(fun_str_eval_1442) {
  ARG(x_);
  P res, a1;
loop:
  res = CALL3(CHKREF(Ystr_eval_in),x_,CALL0(CHKREF(Yct_env)),CALL0(CHKREF(Yrt_env)));
return res;
}


FUNCODEDEF(fun_loop_1443) {
  ARG(forms_);
  P xF768;
  P res, a1;
loop:
  res = (xF768=CALL1(CHKREF(Yread),FREEREF(0)),((CALL1(CHKREF(Yeof_objectQ),xF768) != YPfalse)
    ? CALL1(CHKREF(Ysexpr_sequence_Gbegin),CALL1(CHKREF(YrevX),forms_))
    : (a1=CALL2(CHKREF(Ypair),xF768,forms_),forms_=a1,PNUL)));
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_1444) {
  ARG(port_);
  P loopF769;
  P res, a1;
loop:
  res = (loopF769=FUNSHELL(fun_loop_1443, 2),FUNINIT(loopF769, 2,port_,loopF769),
  CALL1(loopF769,Ynil));
return res;
}


FUNCODEDEF(fun_read_file_1445) {
  ARG(filename_);
  P res, a1;
loop:
  res = CALL2(CHKREF(Ycall_with_input_file),filename_,fun_1444);
return res;
}


FUNCODEDEF(fun_load_in_1446) {
  ARG(ct_env_);
  ARG(rt_env_);
  ARG(filename_);
  P oF771;
  P xF770;
  P res, a1, a2, a3;
loop:
  res = (xF770=CALL1(CHKREF(Yread_file),filename_),(oF771=CALL2(CHKREF(Yobjectify),xF770,ct_env_),CALL2(CHKREF(Yast_eval_in),oF771,rt_env_)));
return res;
}


FUNCODEDEF(fun_load_1447) {
  ARG(filename_);
  P res, a1;
loop:
  res = CALL3(CHKREF(Yload_in),filename_,CALL0(CHKREF(Yrt_env)),CALL0(CHKREF(Yct_env)));
return res;
}


FUNCODEDEF(Yproto_filename) {
  ARG(name_);
  P res, a1;
loop:
  res = CALL3(CHKREF(Ycat),CHKREF(YTbase_pathT),name_,lit_716);
return res;
}


FUNCODEDEF(Yc_filename) {
  ARG(name_);
  P res, a1;
loop:
  res = CALLN(CHKREF(Ycat),4,CHKREF(YTbase_pathT),lit_717,name_,lit_718);
return res;
}


FUNCODEDEF(fun_load_from_1450) {
  ARG(name_);
  P res, a1;
loop:
  res = CALL1(CHKREF(Yload),CALL1(CHKREF(Yproto_filename),name_));
return res;
}


FUNCODEDEF(fun_prompt_for_command_expression_1451) {
  ARG(prompt_);
  ARG(level_);
  P res, a1, a2;
loop:
CALLN(CHKREF(Yformat),4,CHKREF(Yout),lit_719,level_,prompt_);
  CALL1(CHKREF(Yforce_output),CHKREF(Yout));
  res = CALL1(CHKREF(Yread),CHKREF(Yin));
return res;
}


FUNCODEDEF(fun_inner_1452) {
  ARG(i_);
  ARG(names_);
  P res, a1, a2;
loop:
  res = ((CALL1(CHKREF(Ynot),CALL1(CHKREF(YemptyQ),names_)) != YPfalse)
    ? (CALLN(CHKREF(Yformat),4,CHKREF(Yout),lit_723,CALL1(CHKREF(Yhead),names_),CALL2(CHKREF(Yelt),FREEREF(0),i_)),
  (a1=CALL1(CHKREF(Ytail),names_),a2=CALL2(CHKREF(YA),i_,lit_724),names_=a1,i_=a2,PNUL))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_loop_1453) {
  ARG(i_);
  P innerF777;
  P tmpF776;
  P functionF775;
  P valuesF774;
  P namesF773;
  P envF772;
  P res, a1;
loop:
  res = ((CALL1(CHKREF(Ynot),CALL2(CHKREF(YL),i_,lit_720)) != YPfalse)
    ? ((envF772=CALL2(CHKREF(Yelt),CHKREF(YTstackT),i_),(namesF773=CALL1(CHKREF(Yenv_names),envF772),(valuesF774=CALL1(CHKREF(Yenv_values),envF772),(functionF775=CALL1(CHKREF(Yenv_function),envF772),(CALL3(CHKREF(Yformat),CHKREF(Yout),lit_721,CALL2(CHKREF(Y_),FREEREF(0),i_)),
  (tmpF776=functionF775,((tmpF776 != YPfalse)
    ? CALL3(CHKREF(Yformat),CHKREF(Yout),lit_722,functionF775)
    : YPfalse)),
  CALL1(CHKREF(Ynewline),CHKREF(Yout)),
  (innerF777=FUNSHELL(fun_inner_1452, 2),FUNINIT(innerF777, 2,valuesF774,innerF777),
  CALL2(innerF777,namesF773,lit_725))))))),
  (a1=CALL2(CHKREF(Y_),i_,lit_726),i_=a1,PNUL))
    : YPfalse);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_backtrace_1454) {
  P loopF779;
  P stack_lenF778;
  P res;
loop:
  res = (stack_lenF778=CALL1(CHKREF(Ylen),CHKREF(YTstackT)),(loopF779=FUNSHELL(fun_loop_1453, 2),FUNINIT(loopF779, 2,stack_lenF778,loopF779),
  CALL1(loopF779,CALL2(CHKREF(Y_),stack_lenF778,lit_727))));
return res;
}


FUNCODEDEF(Ykeyboard_interrupt) {
  P res;
loop:
  res = CALL1(CHKREF(Ysig),CHKREF(YLkeyboard_interruptG));
return res;
}


FUNCODEDEF(fun_1456) {
  ARG(r_);
  ARG(c_);
  P res, a1, a2;
loop:
((CALL2(CHKREF(YisaQ),c_,CHKREF(YLkeyboard_interruptG)) != YPfalse)
    ? CALL2(CHKREF(Yformat),CHKREF(Yout),lit_728)
    : (CALL2(CHKREF(Yformat),CHKREF(Yout),lit_729),
  ((CALL2(CHKREF(YisaQ),c_,CHKREF(YLsimple_conditionG)) != YPfalse)
    ? CALL2(CHKREF(Yapply),CALL3(CHKREF(Ycurry),CHKREF(Yformat),CHKREF(Yout),CALL1(CHKREF(Ycondition_message),c_)),CALL1(CHKREF(Ycondition_arguments),c_))
    : YPfalse)));
  CALLN(CHKREF(Ytop_in),4,CALL2(CHKREF(YA),FREEREF(0),lit_730),FREEREF(1),FREEREF(2),FREEREF(3));
  res = CALL1(FREEREF(4),YPfalse);
return res;
}


FUNCODEDEF(fun_1457) {
  P resultF782;
  P astF781;
  P formF780;
  P res;
loop:
CALL1(CHKREF(Ynewline),CHKREF(Yout));
  res = (formF780=CALL2(CHKREF(Yprompt_for_command_expression),FREEREF(0),lit_731),((CALL2(CHKREF(YE),formF780,lit_732) != YPfalse)
    ? CALL1(FREEREF(1),YPfalse)
    : ((CALL2(CHKREF(YE),formF780,lit_733) != YPfalse)
    ? CALL1(FREEREF(2),YPfalse)
    : (astF781=CALL2(CHKREF(Yobjectify),formF780,FREEREF(3)),(resultF782=CALL2(CHKREF(Yast_eval_in),astF781,FREEREF(4)),(CALL3(CHKREF(Yformat),CHKREF(Yout),lit_734,FREEREF(0)),
  CALL2(CHKREF(Ywrite),CHKREF(Yout),resultF782)))))));
return res;
}


FUNCODEDEF(fun_1458) {
  ARG(continue_);
  P res, a1;
loop:
  res = YPwith_monitor(FUNFAB(fun_1456, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),continue_), FUNFAB(fun_1457, 5,FREEREF(0),FREEREF(1),FREEREF(4),FREEREF(2),FREEREF(3)));
return res;
}


FUNCODEDEF(fun_loop_1459) {
  P res;
loop:
with_exit(FUNFAB(fun_1458, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4)));
  res = (PNUL);
if (res == PNUL) goto loop; else return res;
}


FUNCODEDEF(fun_1460) {
  ARG(blow_);
  P loopF783;
  P res, a1;
loop:
  res = (loopF783=FUNSHELL(fun_loop_1459, 6),FUNINIT(loopF783, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),blow_,loopF783),
  CALL0(loopF783));
return res;
}


FUNCODEDEF(fun_top_in_1461) {
  ARG(rt_env_);
  ARG(ct_env_);
  ARG(quit_);
  ARG(level_);
  P res, a1, a2, a3, a4;
loop:
  res = with_exit(FUNFAB(fun_1460, 4,level_,quit_,ct_env_,rt_env_));
return res;
}


FUNCODEDEF(fun_1462) {
  ARG(quit_);
  P res, a1;
loop:
  res = CALLN(CHKREF(Ytop_in),4,lit_735,quit_,CALL0(CHKREF(Yct_env)),CALL0(CHKREF(Yrt_env)));
return res;
}


FUNCODEDEF(fun_top_1463) {
  P res;
loop:
  res = with_exit(fun_1462);
return res;
}


P Y___main___() {
  P number_sharp_macroF931;
  P vecF930;
  P str10496F929;
  P sub_read_whitespaceF928;
  P loopF927;
  P end259F926;
  P initF925;
  P ascii_charsF924;
  P slotF923;
  P setterF922;
  P accessorF921;
  P getterF920;
  P accessorF919;
  P slotF918;
  P setterF917;
  P accessorF916;
  P getterF915;
  P accessorF914;
  P slotF913;
  P setterF912;
  P accessorF911;
  P getterF910;
  P accessorF909;
  P slotF908;
  P setterF907;
  P accessorF906;
  P getterF905;
  P accessorF904;
  P slotF903;
  P setterF902;
  P accessorF901;
  P getterF900;
  P accessorF899;
  P slotF898;
  P setterF897;
  P accessorF896;
  P getterF895;
  P accessorF894;
  P slotF893;
  P setterF892;
  P accessorF891;
  P getterF890;
  P accessorF889;
  P slotF888;
  P setterF887;
  P accessorF886;
  P getterF885;
  P accessorF884;
  P slotF883;
  P setterF882;
  P accessorF881;
  P getterF880;
  P accessorF879;
  P slotF878;
  P setterF877;
  P accessorF876;
  P getterF875;
  P accessorF874;
  P slotF873;
  P setterF872;
  P accessorF871;
  P getterF870;
  P accessorF869;
  P slotF868;
  P setterF867;
  P accessorF866;
  P getterF865;
  P accessorF864;
  P slotF863;
  P setterF862;
  P accessorF861;
  P getterF860;
  P accessorF859;
  P slotF858;
  P setterF857;
  P accessorF856;
  P getterF855;
  P accessorF854;
  P slotF853;
  P setterF852;
  P accessorF851;
  P getterF850;
  P accessorF849;
  P slotF848;
  P setterF847;
  P accessorF846;
  P getterF845;
  P accessorF844;
  P slotF843;
  P setterF842;
  P accessorF841;
  P getterF840;
  P accessorF839;
  P slotF838;
  P setterF837;
  P accessorF836;
  P getterF835;
  P accessorF834;
  P slotF833;
  P setterF832;
  P accessorF831;
  P getterF830;
  P accessorF829;
  P slotF828;
  P setterF827;
  P accessorF826;
  P getterF825;
  P accessorF824;
  P slotF823;
  P setterF822;
  P accessorF821;
  P getterF820;
  P accessorF819;
  P slotF818;
  P setterF817;
  P accessorF816;
  P getterF815;
  P accessorF814;
  P slotF813;
  P setterF812;
  P accessorF811;
  P getterF810;
  P accessorF809;
  P slotF808;
  P setterF807;
  P accessorF806;
  P getterF805;
  P accessorF804;
  P slotF803;
  P setterF802;
  P accessorF801;
  P getterF800;
  P accessorF799;
  P slotF798;
  P setterF797;
  P accessorF796;
  P getterF795;
  P accessorF794;
  P slotF793;
  P setterF792;
  P accessorF791;
  P getterF790;
  P accessorF789;
  P slotF788;
  P setterF787;
  P accessorF786;
  P getterF785;
  P accessorF784;
  P res;
loop:
(((YPfalse = (P)0), (regsym(&YPfalse,"%false"))));
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (((YLanyG = (P)YPobject_shell()), (regsym(&YLanyG,"<any>"))));
  (((Ynul = (P)YPobject_shell()), (regsym(&Ynul,"nul"))));
  (((Ynul_slot = (P)YPobject_shell()), (regsym(&Ynul_slot,"nul-slot"))));
  (((YLlogG = (P)YPobject_shell()), (regsym(&YLlogG,"<log>"))));
  (((YPtrue = (P)YPobject_shell()), (regsym(&YPtrue,"%true"))));
  (((YPfalse = (P)YPobject_shell()), (regsym(&YPfalse,"%false"))));
  (((YLchrG = (P)YPobject_shell()), (regsym(&YLchrG,"<chr>"))));
  (((YLnumG = (P)YPobject_shell()), (regsym(&YLnumG,"<num>"))));
  (((YLintG = (P)YPobject_shell()), (regsym(&YLintG,"<int>"))));
  (((YLfloG = (P)YPobject_shell()), (regsym(&YLfloG,"<flo>"))));
  (((YLlocG = (P)YPobject_shell()), (regsym(&YLlocG,"<loc>"))));
  (((YLcolG = (P)YPobject_shell()), (regsym(&YLcolG,"<col>"))));
  (((YLbagG = (P)YPobject_shell()), (regsym(&YLbagG,"<bag>"))));
  (((YLseqG = (P)YPobject_shell()), (regsym(&YLseqG,"<seq>"))));
  (((YLlstG = (P)YPobject_shell()), (regsym(&YLlstG,"<lst>"))));
  (((Ynil = (P)YPobject_shell()), (regsym(&Ynil,"nil"))));
  (((YLflatG = (P)YPobject_shell()), (regsym(&YLflatG,"<flat>"))));
  (((YLvecG = (P)YPobject_shell()), (regsym(&YLvecG,"<vec>"))));
  (((YLstrG = (P)YPobject_shell()), (regsym(&YLstrG,"<str>"))));
  (((YLsymG = (P)YPobject_shell()), (regsym(&YLsymG,"<sym>"))));
  (((YLtraitsG = (P)YPobject_shell()), (regsym(&YLtraitsG,"<traits>"))));
  (((YLslotG = (P)YPobject_shell()), (regsym(&YLslotG,"<slot>"))));
  (((YLgen_cacheG = (P)YPobject_shell()), (regsym(&YLgen_cacheG,"<gen-cache>"))));
  (((YLfunG = (P)YPobject_shell()), (regsym(&YLfunG,"<fun>"))));
  (((YLmetG = (P)YPobject_shell()), (regsym(&YLmetG,"<met>"))));
  (((YLgenG = (P)YPobject_shell()), (regsym(&YLgenG,"<gen>"))));
  (((YPcheck_typesQ = YPfalse), (regsym(&YPcheck_typesQ,"%check-types?"))));
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (((YPfun_naryQ = YPmet_naryQ), (regsym(&YPfun_naryQ,"%fun-nary?"))));
  (((YPfun_specs = YPmet_specs), (regsym(&YPfun_specs,"%fun-specs"))));
  (YPfalse);
  (YPfalse);
  (((YPspec_nil = CHKREF(Ynil)), (regsym(&YPspec_nil,"%spec-nil"))));
  (((YPspec_pair = YPpair), (regsym(&YPspec_pair,"%spec-pair"))));
  (((YPsig_true = CHKREF(YPtrue)), (regsym(&YPsig_true,"%sig-true"))));
  (((YPsig_false = CHKREF(YPfalse)), (regsym(&YPsig_false,"%sig-false"))));
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (((YTprotosT = CHKREF(Ynil)), (regsym(&YTprotosT,"*protos*"))));
  (YPfalse);
  (YPfalse);
  ((P)YPdefine_parent((P)CHKREF(YLanyG),(P)CHKREF(YLanyG)));
  ((P)YPdefine_parent((P)CHKREF(Ynul),(P)CHKREF(YLanyG)));
  ((P)YPdefine_parent((P)CHKREF(Ynul_slot),(P)CHKREF(YLanyG)));
  ((P)YPdefine_parent((P)CHKREF(YLlogG),(P)CHKREF(YLanyG)));
  ((P)YPdefine_parent((P)CHKREF(YPtrue),(P)CHKREF(YLlogG)));
  ((P)YPdefine_parent((P)CHKREF(YPfalse),(P)CHKREF(YLlogG)));
  ((P)YPdefine_parent((P)CHKREF(YLchrG),(P)CHKREF(YLanyG)));
  ((P)YPdefine_parent((P)CHKREF(YLnumG),(P)CHKREF(YLanyG)));
  ((P)YPdefine_parent((P)CHKREF(YLintG),(P)CHKREF(YLnumG)));
  ((P)YPdefine_parent((P)CHKREF(YLfloG),(P)CHKREF(YLnumG)));
  ((P)YPdefine_parent((P)CHKREF(YLlocG),(P)CHKREF(YLanyG)));
  ((P)YPdefine_parent((P)CHKREF(YLcolG),(P)CHKREF(YLanyG)));
  ((P)YPdefine_parent((P)CHKREF(YLbagG),(P)CHKREF(YLcolG)));
  ((P)YPdefine_parent((P)CHKREF(YLseqG),(P)CHKREF(YLcolG)));
  ((P)YPdefine_parent((P)CHKREF(YLlstG),(P)CHKREF(YLseqG)));
  ((P)YPdefine_parent((P)CHKREF(Ynil),(P)CHKREF(YLlstG)));
  ((P)YPdefine_parent((P)CHKREF(YLflatG),(P)CHKREF(YLseqG)));
  ((P)YPdefine_parent((P)CHKREF(YLvecG),(P)CHKREF(YLflatG)));
  ((P)YPdefine_parent((P)CHKREF(YLstrG),(P)CHKREF(YLflatG)));
  ((P)YPdefine_parent((P)CHKREF(YLsymG),(P)CHKREF(YLanyG)));
  ((P)YPdefine_parent((P)CHKREF(YLtraitsG),(P)CHKREF(YLanyG)));
  ((P)YPdefine_parent((P)CHKREF(YLslotG),(P)CHKREF(YLanyG)));
  ((P)YPdefine_parent((P)CHKREF(YLgen_cacheG),(P)CHKREF(YLanyG)));
  ((P)YPdefine_parent((P)CHKREF(YLfunG),(P)CHKREF(YLanyG)));
  ((P)YPdefine_parent((P)CHKREF(YLmetG),(P)CHKREF(YLfunG)));
  ((P)YPdefine_parent((P)CHKREF(YLgenG),(P)CHKREF(YLfunG)));
  (YPfalse);
  (((YLtraitsG_traits = (P)YPobject_traits((P)CHKREF(YLtraitsG))), (regsym(&YLtraitsG_traits,"<traits>-traits"))));
  (YPfalse);
  ((P)YPpatch_parents((P)CHKREF(YTprotosT)));
  (((YLgenG_traits = (P)YPobject_traits((P)CHKREF(YLgenG))), (regsym(&YLgenG_traits,"<gen>-traits"))));
  (((YLmetG_traits = (P)YPobject_traits((P)CHKREF(YLmetG))), (regsym(&YLmetG_traits,"<met>-traits"))));
  (((YLlstG_traits = (P)YPobject_traits((P)CHKREF(YLlstG))), (regsym(&YLlstG_traits,"<lst>-traits"))));
  (((YDdirect_object_traits = (P)YPraw_alloc((P)(P)4)), (regsym(&YDdirect_object_traits,"$direct-object-traits"))));
  (((YDtag_msk = (P)3), (regsym(&YDtag_msk,"$tag-msk"))));
  (((YDtag_len = (P)2), (regsym(&YDtag_len,"$tag-len"))));
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (((YDadr_tag = (P)0), (regsym(&YDadr_tag,"$adr-tag"))));
  (YPfalse);
  (YPfalse);
  Yobject_traits = YPmet(FUNCODEREF(Yobject_traits),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yobject_traits = Yobject_traits), (regsym(&Yobject_traits,"object-traits"))));
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  ((P)YPelt_setter((P)(P)YPobject_traits((P)CHKREF(YLintG)),(P)CHKREF(YDdirect_object_traits),(P)(P)1));
  (YPfalse);
  (YPfalse);
  (YPfalse);
  ((P)YPelt_setter((P)(P)YPobject_traits((P)CHKREF(YLchrG)),(P)CHKREF(YDdirect_object_traits),(P)(P)2));
  (YPfalse);
  (YPfalse);
  (YPfalse);
  ((P)YPelt_setter((P)(P)YPobject_traits((P)CHKREF(YLlocG)),(P)CHKREF(YDdirect_object_traits),(P)(P)3));
  fun_loop_52 = YPmet(FUNCODEREF(fun_loop_52),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (YPfalse);
  fun_coly_54 = YPmet(FUNCODEREF(fun_coly_54),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_colx_55 = YPmet(FUNCODEREF(fun_colx_55),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  fun_loop_91 = YPmet(FUNCODEREF(fun_loop_91),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  YPslot_offset = YPmet(FUNCODEREF(YPslot_offset),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YPslot_offset = YPslot_offset), (regsym(&YPslot_offset,"%slot-offset"))));
  (YPfalse);
  (YPfalse);
  YPearly_dispatch = YPmet(FUNCODEREF(YPearly_dispatch),Ynil,YPtrue,YPint((P)0),ENVNUL); 
  (((YPearly_dispatch = YPearly_dispatch), (regsym(&YPearly_dispatch,"%early-dispatch"))));
  (((YTearly_genericsT = Ynil), (regsym(&YTearly_genericsT,"*early-generics*"))));
  YPregister_early_generic = YPmet(FUNCODEREF(YPregister_early_generic),YPpair(CHKREF(YLgenG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YPregister_early_generic = YPregister_early_generic), (regsym(&YPregister_early_generic,"%register-early-generic"))));
  YPadd_met = YPmet(FUNCODEREF(YPadd_met),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YPadd_met = YPadd_met), (regsym(&YPadd_met,"%add-met"))));
  (YPfalse);
  (YPfalse);
  (YPfalse);
  lit_0 = YPsb((P)"NUL-INIT");
  (((YDnul_init = (P)YPpair((P)lit_0,(P)CHKREF(Ynil))), (regsym(&YDnul_init,"$nul-init"))));
  Ynul_init = YPmet(FUNCODEREF(Ynul_init),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ynul_init = Ynul_init), (regsym(&Ynul_init,"nul-init"))));
  YPadd_slot = YPmet(FUNCODEREF(YPadd_slot),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YPadd_slot = YPadd_slot), (regsym(&YPadd_slot,"%add-slot"))));
  (YPfalse);
  lit_1 = YPint((P)1);
  lit_2 = YPint((P)2);
  fun_98 = YPmet(FUNCODEREF(fun_98),YPpair(CHKREF(YLchrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_99 = YPmet(FUNCODEREF(fun_99),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLchrG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_100 = YPmet(FUNCODEREF(fun_100),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF785=(((YPchr_val = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_1,(P)Ynil,(P)YPfalse)), (regsym(&YPchr_val,"%chr-val"))),
  (accessorF784=fun_98,(CALL2(CHKREF(YPadd_met),CHKREF(YPchr_val),accessorF784),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(YPchr_val)),
  accessorF784))),(setterF787=(((YPchr_val_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_2,(P)Ynil,(P)YPfalse)), (regsym(&YPchr_val_setter,"%chr-val-setter"))),
  (accessorF786=fun_99,(CALL2(CHKREF(YPadd_met),CHKREF(YPchr_val_setter),accessorF786),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(YPchr_val_setter)),
  accessorF786))),(slotF788=(P)YPPslot((P)CHKREF(YLchrG),(P)CHKREF(YPchr_val),(P)CHKREF(YPchr_val_setter),(P)CHKREF(YLintG),(P)fun_100),((P)YPmet_env_setter((P)slotF788,(P)getterF785),
  (P)YPmet_env_setter((P)slotF788,(P)setterF787),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLchrG),slotF788))))));
  lit_3 = YPint((P)1);
  lit_4 = YPint((P)2);
  fun_101 = YPmet(FUNCODEREF(fun_101),YPpair(CHKREF(YLintG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_102 = YPmet(FUNCODEREF(fun_102),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_103 = YPmet(FUNCODEREF(fun_103),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF790=(((YPint_val = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_3,(P)Ynil,(P)YPfalse)), (regsym(&YPint_val,"%int-val"))),
  (accessorF789=fun_101,(CALL2(CHKREF(YPadd_met),CHKREF(YPint_val),accessorF789),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(YPint_val)),
  accessorF789))),(setterF792=(((YPint_val_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_4,(P)Ynil,(P)YPfalse)), (regsym(&YPint_val_setter,"%int-val-setter"))),
  (accessorF791=fun_102,(CALL2(CHKREF(YPadd_met),CHKREF(YPint_val_setter),accessorF791),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(YPint_val_setter)),
  accessorF791))),(slotF793=(P)YPPslot((P)CHKREF(YLintG),(P)CHKREF(YPint_val),(P)CHKREF(YPint_val_setter),(P)CHKREF(YLanyG),(P)fun_103),((P)YPmet_env_setter((P)slotF793,(P)getterF790),
  (P)YPmet_env_setter((P)slotF793,(P)setterF792),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLintG),slotF793))))));
  lit_5 = YPint((P)1);
  lit_6 = YPint((P)2);
  fun_104 = YPmet(FUNCODEREF(fun_104),YPpair(CHKREF(YLfloG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_105 = YPmet(FUNCODEREF(fun_105),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLfloG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_106 = YPmet(FUNCODEREF(fun_106),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF795=(((YPflo_val = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_5,(P)Ynil,(P)YPfalse)), (regsym(&YPflo_val,"%flo-val"))),
  (accessorF794=fun_104,(CALL2(CHKREF(YPadd_met),CHKREF(YPflo_val),accessorF794),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(YPflo_val)),
  accessorF794))),(setterF797=(((YPflo_val_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_6,(P)Ynil,(P)YPfalse)), (regsym(&YPflo_val_setter,"%flo-val-setter"))),
  (accessorF796=fun_105,(CALL2(CHKREF(YPadd_met),CHKREF(YPflo_val_setter),accessorF796),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(YPflo_val_setter)),
  accessorF796))),(slotF798=(P)YPPslot((P)CHKREF(YLfloG),(P)CHKREF(YPflo_val),(P)CHKREF(YPflo_val_setter),(P)CHKREF(YLanyG),(P)fun_106),((P)YPmet_env_setter((P)slotF798,(P)getterF795),
  (P)YPmet_env_setter((P)slotF798,(P)setterF797),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLfloG),slotF798))))));
  lit_7 = YPint((P)1);
  lit_8 = YPint((P)2);
  fun_107 = YPmet(FUNCODEREF(fun_107),YPpair(CHKREF(YLlocG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_108 = YPmet(FUNCODEREF(fun_108),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlocG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_109 = YPmet(FUNCODEREF(fun_109),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF800=(((YPloc_val = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_7,(P)Ynil,(P)YPfalse)), (regsym(&YPloc_val,"%loc-val"))),
  (accessorF799=fun_107,(CALL2(CHKREF(YPadd_met),CHKREF(YPloc_val),accessorF799),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(YPloc_val)),
  accessorF799))),(setterF802=(((YPloc_val_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_8,(P)Ynil,(P)YPfalse)), (regsym(&YPloc_val_setter,"%loc-val-setter"))),
  (accessorF801=fun_108,(CALL2(CHKREF(YPadd_met),CHKREF(YPloc_val_setter),accessorF801),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(YPloc_val_setter)),
  accessorF801))),(slotF803=(P)YPPslot((P)CHKREF(YLlocG),(P)CHKREF(YPloc_val),(P)CHKREF(YPloc_val_setter),(P)CHKREF(YLanyG),(P)fun_109),((P)YPmet_env_setter((P)slotF803,(P)getterF800),
  (P)YPmet_env_setter((P)slotF803,(P)setterF802),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLlocG),slotF803))))));
  lit_9 = YPint((P)1);
  lit_10 = YPint((P)2);
  fun_110 = YPmet(FUNCODEREF(fun_110),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_111 = YPmet(FUNCODEREF(fun_111),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_112 = YPmet(FUNCODEREF(fun_112),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF805=(((Yhead = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_9,(P)Ynil,(P)YPfalse)), (regsym(&Yhead,"head"))),
  (accessorF804=fun_110,(CALL2(CHKREF(YPadd_met),CHKREF(Yhead),accessorF804),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yhead)),
  accessorF804))),(setterF807=(((Yhead_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_10,(P)Ynil,(P)YPfalse)), (regsym(&Yhead_setter,"head-setter"))),
  (accessorF806=fun_111,(CALL2(CHKREF(YPadd_met),CHKREF(Yhead_setter),accessorF806),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yhead_setter)),
  accessorF806))),(slotF808=(P)YPPslot((P)CHKREF(YLlstG),(P)CHKREF(Yhead),(P)CHKREF(Yhead_setter),(P)CHKREF(YLanyG),(P)fun_112),((P)YPmet_env_setter((P)slotF808,(P)getterF805),
  (P)YPmet_env_setter((P)slotF808,(P)setterF807),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLlstG),slotF808))))));
  lit_11 = YPint((P)1);
  lit_12 = YPint((P)2);
  fun_113 = YPmet(FUNCODEREF(fun_113),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_114 = YPmet(FUNCODEREF(fun_114),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_115 = YPmet(FUNCODEREF(fun_115),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF810=(((Ytail = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_11,(P)Ynil,(P)YPfalse)), (regsym(&Ytail,"tail"))),
  (accessorF809=fun_113,(CALL2(CHKREF(YPadd_met),CHKREF(Ytail),accessorF809),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Ytail)),
  accessorF809))),(setterF812=(((Ytail_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_12,(P)Ynil,(P)YPfalse)), (regsym(&Ytail_setter,"tail-setter"))),
  (accessorF811=fun_114,(CALL2(CHKREF(YPadd_met),CHKREF(Ytail_setter),accessorF811),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Ytail_setter)),
  accessorF811))),(slotF813=(P)YPPslot((P)CHKREF(YLlstG),(P)CHKREF(Ytail),(P)CHKREF(Ytail_setter),(P)CHKREF(YLlstG),(P)fun_115),((P)YPmet_env_setter((P)slotF813,(P)getterF810),
  (P)YPmet_env_setter((P)slotF813,(P)setterF812),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLlstG),slotF813))))));
  lit_13 = YPint((P)1);
  lit_14 = YPint((P)2);
  fun_116 = YPmet(FUNCODEREF(fun_116),YPpair(CHKREF(YLvecG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_117 = YPmet(FUNCODEREF(fun_117),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLvecG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_118 = YPmet(FUNCODEREF(fun_118),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF815=(((YPPvec_dat = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_13,(P)Ynil,(P)YPfalse)), (regsym(&YPPvec_dat,"%%vec-dat"))),
  (accessorF814=fun_116,(CALL2(CHKREF(YPadd_met),CHKREF(YPPvec_dat),accessorF814),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(YPPvec_dat)),
  accessorF814))),(setterF817=(((YPPvec_dat_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_14,(P)Ynil,(P)YPfalse)), (regsym(&YPPvec_dat_setter,"%%vec-dat-setter"))),
  (accessorF816=fun_117,(CALL2(CHKREF(YPadd_met),CHKREF(YPPvec_dat_setter),accessorF816),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(YPPvec_dat_setter)),
  accessorF816))),(slotF818=(P)YPPslot((P)CHKREF(YLvecG),(P)CHKREF(YPPvec_dat),(P)CHKREF(YPPvec_dat_setter),(P)CHKREF(YLanyG),(P)fun_118),((P)YPmet_env_setter((P)slotF818,(P)getterF815),
  (P)YPmet_env_setter((P)slotF818,(P)setterF817),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLvecG),slotF818))))));
  lit_15 = YPint((P)1);
  lit_16 = YPint((P)2);
  fun_119 = YPmet(FUNCODEREF(fun_119),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_120 = YPmet(FUNCODEREF(fun_120),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLstrG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_121 = YPmet(FUNCODEREF(fun_121),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF820=(((YPPstr_dat = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_15,(P)Ynil,(P)YPfalse)), (regsym(&YPPstr_dat,"%%str-dat"))),
  (accessorF819=fun_119,(CALL2(CHKREF(YPadd_met),CHKREF(YPPstr_dat),accessorF819),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(YPPstr_dat)),
  accessorF819))),(setterF822=(((YPPstr_dat_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_16,(P)Ynil,(P)YPfalse)), (regsym(&YPPstr_dat_setter,"%%str-dat-setter"))),
  (accessorF821=fun_120,(CALL2(CHKREF(YPadd_met),CHKREF(YPPstr_dat_setter),accessorF821),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(YPPstr_dat_setter)),
  accessorF821))),(slotF823=(P)YPPslot((P)CHKREF(YLstrG),(P)CHKREF(YPPstr_dat),(P)CHKREF(YPPstr_dat_setter),(P)CHKREF(YLanyG),(P)fun_121),((P)YPmet_env_setter((P)slotF823,(P)getterF820),
  (P)YPmet_env_setter((P)slotF823,(P)setterF822),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLstrG),slotF823))))));
  lit_17 = YPint((P)1);
  lit_18 = YPint((P)2);
  fun_122 = YPmet(FUNCODEREF(fun_122),YPpair(CHKREF(YLsymG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_123 = YPmet(FUNCODEREF(fun_123),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLsymG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_124 = YPmet(FUNCODEREF(fun_124),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF825=(((Ysym_name = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_17,(P)Ynil,(P)YPfalse)), (regsym(&Ysym_name,"sym-name"))),
  (accessorF824=fun_122,(CALL2(CHKREF(YPadd_met),CHKREF(Ysym_name),accessorF824),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Ysym_name)),
  accessorF824))),(setterF827=(((Ysym_name_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_18,(P)Ynil,(P)YPfalse)), (regsym(&Ysym_name_setter,"sym-name-setter"))),
  (accessorF826=fun_123,(CALL2(CHKREF(YPadd_met),CHKREF(Ysym_name_setter),accessorF826),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Ysym_name_setter)),
  accessorF826))),(slotF828=(P)YPPslot((P)CHKREF(YLsymG),(P)CHKREF(Ysym_name),(P)CHKREF(Ysym_name_setter),(P)CHKREF(YLstrG),(P)fun_124),((P)YPmet_env_setter((P)slotF828,(P)getterF825),
  (P)YPmet_env_setter((P)slotF828,(P)setterF827),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLsymG),slotF828))))));
  lit_19 = YPint((P)1);
  lit_20 = YPint((P)2);
  fun_125 = YPmet(FUNCODEREF(fun_125),YPpair(CHKREF(YLtraitsG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_126 = YPmet(FUNCODEREF(fun_126),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLtraitsG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_127 = YPmet(FUNCODEREF(fun_127),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF830=(((Ytraits_owner = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_19,(P)Ynil,(P)YPfalse)), (regsym(&Ytraits_owner,"traits-owner"))),
  (accessorF829=fun_125,(CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_owner),accessorF829),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Ytraits_owner)),
  accessorF829))),(setterF832=(((Ytraits_owner_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_20,(P)Ynil,(P)YPfalse)), (regsym(&Ytraits_owner_setter,"traits-owner-setter"))),
  (accessorF831=fun_126,(CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_owner_setter),accessorF831),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Ytraits_owner_setter)),
  accessorF831))),(slotF833=(P)YPPslot((P)CHKREF(YLtraitsG),(P)CHKREF(Ytraits_owner),(P)CHKREF(Ytraits_owner_setter),(P)CHKREF(YLanyG),(P)fun_127),((P)YPmet_env_setter((P)slotF833,(P)getterF830),
  (P)YPmet_env_setter((P)slotF833,(P)setterF832),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLtraitsG),slotF833))))));
  lit_21 = YPint((P)1);
  lit_22 = YPint((P)2);
  fun_128 = YPmet(FUNCODEREF(fun_128),YPpair(CHKREF(YLtraitsG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_129 = YPmet(FUNCODEREF(fun_129),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLtraitsG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_130 = YPmet(FUNCODEREF(fun_130),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF835=(((Ytraits_direct_parents = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_21,(P)Ynil,(P)YPfalse)), (regsym(&Ytraits_direct_parents,"traits-direct-parents"))),
  (accessorF834=fun_128,(CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_direct_parents),accessorF834),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Ytraits_direct_parents)),
  accessorF834))),(setterF837=(((Ytraits_direct_parents_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_22,(P)Ynil,(P)YPfalse)), (regsym(&Ytraits_direct_parents_setter,"traits-direct-parents-setter"))),
  (accessorF836=fun_129,(CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_direct_parents_setter),accessorF836),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Ytraits_direct_parents_setter)),
  accessorF836))),(slotF838=(P)YPPslot((P)CHKREF(YLtraitsG),(P)CHKREF(Ytraits_direct_parents),(P)CHKREF(Ytraits_direct_parents_setter),(P)CHKREF(YLlstG),(P)fun_130),((P)YPmet_env_setter((P)slotF838,(P)getterF835),
  (P)YPmet_env_setter((P)slotF838,(P)setterF837),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLtraitsG),slotF838))))));
  lit_23 = YPint((P)1);
  lit_24 = YPint((P)2);
  fun_131 = YPmet(FUNCODEREF(fun_131),YPpair(CHKREF(YLtraitsG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_132 = YPmet(FUNCODEREF(fun_132),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLtraitsG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_133 = YPmet(FUNCODEREF(fun_133),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF840=(((Ytraits_direct_slots = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_23,(P)Ynil,(P)YPfalse)), (regsym(&Ytraits_direct_slots,"traits-direct-slots"))),
  (accessorF839=fun_131,(CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_direct_slots),accessorF839),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Ytraits_direct_slots)),
  accessorF839))),(setterF842=(((Ytraits_direct_slots_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_24,(P)Ynil,(P)YPfalse)), (regsym(&Ytraits_direct_slots_setter,"traits-direct-slots-setter"))),
  (accessorF841=fun_132,(CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_direct_slots_setter),accessorF841),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Ytraits_direct_slots_setter)),
  accessorF841))),(slotF843=(P)YPPslot((P)CHKREF(YLtraitsG),(P)CHKREF(Ytraits_direct_slots),(P)CHKREF(Ytraits_direct_slots_setter),(P)CHKREF(YLlstG),(P)fun_133),((P)YPmet_env_setter((P)slotF843,(P)getterF840),
  (P)YPmet_env_setter((P)slotF843,(P)setterF842),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLtraitsG),slotF843))))));
  lit_25 = YPint((P)1);
  lit_26 = YPint((P)2);
  fun_134 = YPmet(FUNCODEREF(fun_134),YPpair(CHKREF(YLtraitsG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_135 = YPmet(FUNCODEREF(fun_135),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLtraitsG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_136 = YPmet(FUNCODEREF(fun_136),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF845=(((Ytraits_parents = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_25,(P)Ynil,(P)YPfalse)), (regsym(&Ytraits_parents,"traits-parents"))),
  (accessorF844=fun_134,(CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_parents),accessorF844),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Ytraits_parents)),
  accessorF844))),(setterF847=(((Ytraits_parents_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_26,(P)Ynil,(P)YPfalse)), (regsym(&Ytraits_parents_setter,"traits-parents-setter"))),
  (accessorF846=fun_135,(CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_parents_setter),accessorF846),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Ytraits_parents_setter)),
  accessorF846))),(slotF848=(P)YPPslot((P)CHKREF(YLtraitsG),(P)CHKREF(Ytraits_parents),(P)CHKREF(Ytraits_parents_setter),(P)CHKREF(YLlstG),(P)fun_136),((P)YPmet_env_setter((P)slotF848,(P)getterF845),
  (P)YPmet_env_setter((P)slotF848,(P)setterF847),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLtraitsG),slotF848))))));
  lit_27 = YPint((P)1);
  lit_28 = YPint((P)2);
  fun_137 = YPmet(FUNCODEREF(fun_137),YPpair(CHKREF(YLtraitsG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_138 = YPmet(FUNCODEREF(fun_138),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLtraitsG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_139 = YPmet(FUNCODEREF(fun_139),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF850=(((Ytraits_slots = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_27,(P)Ynil,(P)YPfalse)), (regsym(&Ytraits_slots,"traits-slots"))),
  (accessorF849=fun_137,(CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_slots),accessorF849),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Ytraits_slots)),
  accessorF849))),(setterF852=(((Ytraits_slots_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_28,(P)Ynil,(P)YPfalse)), (regsym(&Ytraits_slots_setter,"traits-slots-setter"))),
  (accessorF851=fun_138,(CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_slots_setter),accessorF851),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Ytraits_slots_setter)),
  accessorF851))),(slotF853=(P)YPPslot((P)CHKREF(YLtraitsG),(P)CHKREF(Ytraits_slots),(P)CHKREF(Ytraits_slots_setter),(P)CHKREF(YLlstG),(P)fun_139),((P)YPmet_env_setter((P)slotF853,(P)getterF850),
  (P)YPmet_env_setter((P)slotF853,(P)setterF852),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLtraitsG),slotF853))))));
  lit_29 = YPint((P)1);
  lit_30 = YPint((P)2);
  fun_140 = YPmet(FUNCODEREF(fun_140),YPpair(CHKREF(YLslotG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_141 = YPmet(FUNCODEREF(fun_141),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLslotG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_142 = YPmet(FUNCODEREF(fun_142),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF855=(((Yslot_owner = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_29,(P)Ynil,(P)YPfalse)), (regsym(&Yslot_owner,"slot-owner"))),
  (accessorF854=fun_140,(CALL2(CHKREF(YPadd_met),CHKREF(Yslot_owner),accessorF854),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yslot_owner)),
  accessorF854))),(setterF857=(((Yslot_owner_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_30,(P)Ynil,(P)YPfalse)), (regsym(&Yslot_owner_setter,"slot-owner-setter"))),
  (accessorF856=fun_141,(CALL2(CHKREF(YPadd_met),CHKREF(Yslot_owner_setter),accessorF856),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yslot_owner_setter)),
  accessorF856))),(slotF858=(P)YPPslot((P)CHKREF(YLslotG),(P)CHKREF(Yslot_owner),(P)CHKREF(Yslot_owner_setter),(P)CHKREF(YLanyG),(P)fun_142),((P)YPmet_env_setter((P)slotF858,(P)getterF855),
  (P)YPmet_env_setter((P)slotF858,(P)setterF857),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLslotG),slotF858))))));
  lit_31 = YPint((P)1);
  lit_32 = YPint((P)2);
  fun_143 = YPmet(FUNCODEREF(fun_143),YPpair(CHKREF(YLslotG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_144 = YPmet(FUNCODEREF(fun_144),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLslotG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_145 = YPmet(FUNCODEREF(fun_145),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF860=(((Yslot_getter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_31,(P)Ynil,(P)YPfalse)), (regsym(&Yslot_getter,"slot-getter"))),
  (accessorF859=fun_143,(CALL2(CHKREF(YPadd_met),CHKREF(Yslot_getter),accessorF859),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yslot_getter)),
  accessorF859))),(setterF862=(((Yslot_getter_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_32,(P)Ynil,(P)YPfalse)), (regsym(&Yslot_getter_setter,"slot-getter-setter"))),
  (accessorF861=fun_144,(CALL2(CHKREF(YPadd_met),CHKREF(Yslot_getter_setter),accessorF861),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yslot_getter_setter)),
  accessorF861))),(slotF863=(P)YPPslot((P)CHKREF(YLslotG),(P)CHKREF(Yslot_getter),(P)CHKREF(Yslot_getter_setter),(P)CHKREF(YLfunG),(P)fun_145),((P)YPmet_env_setter((P)slotF863,(P)getterF860),
  (P)YPmet_env_setter((P)slotF863,(P)setterF862),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLslotG),slotF863))))));
  lit_33 = YPint((P)1);
  lit_34 = YPint((P)2);
  fun_146 = YPmet(FUNCODEREF(fun_146),YPpair(CHKREF(YLslotG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_147 = YPmet(FUNCODEREF(fun_147),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLslotG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_148 = YPmet(FUNCODEREF(fun_148),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF865=(((Yslot_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_33,(P)Ynil,(P)YPfalse)), (regsym(&Yslot_setter,"slot-setter"))),
  (accessorF864=fun_146,(CALL2(CHKREF(YPadd_met),CHKREF(Yslot_setter),accessorF864),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yslot_setter)),
  accessorF864))),(setterF867=(((Yslot_setter_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_34,(P)Ynil,(P)YPfalse)), (regsym(&Yslot_setter_setter,"slot-setter-setter"))),
  (accessorF866=fun_147,(CALL2(CHKREF(YPadd_met),CHKREF(Yslot_setter_setter),accessorF866),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yslot_setter_setter)),
  accessorF866))),(slotF868=(P)YPPslot((P)CHKREF(YLslotG),(P)CHKREF(Yslot_setter),(P)CHKREF(Yslot_setter_setter),(P)CHKREF(YLfunG),(P)fun_148),((P)YPmet_env_setter((P)slotF868,(P)getterF865),
  (P)YPmet_env_setter((P)slotF868,(P)setterF867),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLslotG),slotF868))))));
  lit_35 = YPint((P)1);
  lit_36 = YPint((P)2);
  fun_149 = YPmet(FUNCODEREF(fun_149),YPpair(CHKREF(YLslotG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_150 = YPmet(FUNCODEREF(fun_150),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLslotG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_151 = YPmet(FUNCODEREF(fun_151),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF870=(((Yslot_type = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_35,(P)Ynil,(P)YPfalse)), (regsym(&Yslot_type,"slot-type"))),
  (accessorF869=fun_149,(CALL2(CHKREF(YPadd_met),CHKREF(Yslot_type),accessorF869),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yslot_type)),
  accessorF869))),(setterF872=(((Yslot_type_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_36,(P)Ynil,(P)YPfalse)), (regsym(&Yslot_type_setter,"slot-type-setter"))),
  (accessorF871=fun_150,(CALL2(CHKREF(YPadd_met),CHKREF(Yslot_type_setter),accessorF871),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yslot_type_setter)),
  accessorF871))),(slotF873=(P)YPPslot((P)CHKREF(YLslotG),(P)CHKREF(Yslot_type),(P)CHKREF(Yslot_type_setter),(P)CHKREF(YLanyG),(P)fun_151),((P)YPmet_env_setter((P)slotF873,(P)getterF870),
  (P)YPmet_env_setter((P)slotF873,(P)setterF872),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLslotG),slotF873))))));
  lit_37 = YPint((P)1);
  lit_38 = YPint((P)2);
  fun_152 = YPmet(FUNCODEREF(fun_152),YPpair(CHKREF(YLslotG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_153 = YPmet(FUNCODEREF(fun_153),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLslotG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_154 = YPmet(FUNCODEREF(fun_154),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_155 = YPmet(FUNCODEREF(fun_155),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF875=(((Yslot_init = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_37,(P)Ynil,(P)YPfalse)), (regsym(&Yslot_init,"slot-init"))),
  (accessorF874=fun_152,(CALL2(CHKREF(YPadd_met),CHKREF(Yslot_init),accessorF874),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yslot_init)),
  accessorF874))),(setterF877=(((Yslot_init_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_38,(P)Ynil,(P)YPfalse)), (regsym(&Yslot_init_setter,"slot-init-setter"))),
  (accessorF876=fun_153,(CALL2(CHKREF(YPadd_met),CHKREF(Yslot_init_setter),accessorF876),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yslot_init_setter)),
  accessorF876))),(slotF878=(P)YPPslot((P)CHKREF(YLslotG),(P)CHKREF(Yslot_init),(P)CHKREF(Yslot_init_setter),(P)CHKREF(YLfunG),(P)fun_155),((P)YPmet_env_setter((P)slotF878,(P)getterF875),
  (P)YPmet_env_setter((P)slotF878,(P)setterF877),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLslotG),slotF878))))));
  lit_39 = YPint((P)1);
  lit_40 = YPint((P)2);
  fun_156 = YPmet(FUNCODEREF(fun_156),YPpair(CHKREF(YLgen_cacheG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_157 = YPmet(FUNCODEREF(fun_157),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLgen_cacheG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_158 = YPmet(FUNCODEREF(fun_158),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF880=(((Ygen_cache_singletons = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_39,(P)Ynil,(P)YPfalse)), (regsym(&Ygen_cache_singletons,"gen-cache-singletons"))),
  (accessorF879=fun_156,(CALL2(CHKREF(YPadd_met),CHKREF(Ygen_cache_singletons),accessorF879),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Ygen_cache_singletons)),
  accessorF879))),(setterF882=(((Ygen_cache_singletons_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_40,(P)Ynil,(P)YPfalse)), (regsym(&Ygen_cache_singletons_setter,"gen-cache-singletons-setter"))),
  (accessorF881=fun_157,(CALL2(CHKREF(YPadd_met),CHKREF(Ygen_cache_singletons_setter),accessorF881),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Ygen_cache_singletons_setter)),
  accessorF881))),(slotF883=(P)YPPslot((P)CHKREF(YLgen_cacheG),(P)CHKREF(Ygen_cache_singletons),(P)CHKREF(Ygen_cache_singletons_setter),(P)CHKREF(YLlstG),(P)fun_158),((P)YPmet_env_setter((P)slotF883,(P)getterF880),
  (P)YPmet_env_setter((P)slotF883,(P)setterF882),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLgen_cacheG),slotF883))))));
  lit_41 = YPint((P)1);
  lit_42 = YPint((P)2);
  fun_159 = YPmet(FUNCODEREF(fun_159),YPpair(CHKREF(YLgen_cacheG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_160 = YPmet(FUNCODEREF(fun_160),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLgen_cacheG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_161 = YPmet(FUNCODEREF(fun_161),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF885=(((Ygen_cache_classes = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_41,(P)Ynil,(P)YPfalse)), (regsym(&Ygen_cache_classes,"gen-cache-classes"))),
  (accessorF884=fun_159,(CALL2(CHKREF(YPadd_met),CHKREF(Ygen_cache_classes),accessorF884),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Ygen_cache_classes)),
  accessorF884))),(setterF887=(((Ygen_cache_classes_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_42,(P)Ynil,(P)YPfalse)), (regsym(&Ygen_cache_classes_setter,"gen-cache-classes-setter"))),
  (accessorF886=fun_160,(CALL2(CHKREF(YPadd_met),CHKREF(Ygen_cache_classes_setter),accessorF886),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Ygen_cache_classes_setter)),
  accessorF886))),(slotF888=(P)YPPslot((P)CHKREF(YLgen_cacheG),(P)CHKREF(Ygen_cache_classes),(P)CHKREF(Ygen_cache_classes_setter),(P)CHKREF(YLlstG),(P)fun_161),((P)YPmet_env_setter((P)slotF888,(P)getterF885),
  (P)YPmet_env_setter((P)slotF888,(P)setterF887),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLgen_cacheG),slotF888))))));
  lit_43 = YPint((P)1);
  lit_44 = YPint((P)2);
  fun_162 = YPmet(FUNCODEREF(fun_162),YPpair(CHKREF(YLfunG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_163 = YPmet(FUNCODEREF(fun_163),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLfunG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_164 = YPmet(FUNCODEREF(fun_164),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF890=(((Yfun_code = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_43,(P)Ynil,(P)YPfalse)), (regsym(&Yfun_code,"fun-code"))),
  (accessorF889=fun_162,(CALL2(CHKREF(YPadd_met),CHKREF(Yfun_code),accessorF889),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yfun_code)),
  accessorF889))),(setterF892=(((Yfun_code_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_44,(P)Ynil,(P)YPfalse)), (regsym(&Yfun_code_setter,"fun-code-setter"))),
  (accessorF891=fun_163,(CALL2(CHKREF(YPadd_met),CHKREF(Yfun_code_setter),accessorF891),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yfun_code_setter)),
  accessorF891))),(slotF893=(P)YPPslot((P)CHKREF(YLfunG),(P)CHKREF(Yfun_code),(P)CHKREF(Yfun_code_setter),(P)CHKREF(YLanyG),(P)fun_164),((P)YPmet_env_setter((P)slotF893,(P)getterF890),
  (P)YPmet_env_setter((P)slotF893,(P)setterF892),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLfunG),slotF893))))));
  lit_45 = YPint((P)1);
  lit_46 = YPint((P)2);
  fun_165 = YPmet(FUNCODEREF(fun_165),YPpair(CHKREF(YLfunG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_166 = YPmet(FUNCODEREF(fun_166),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLfunG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_167 = YPmet(FUNCODEREF(fun_167),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF895=(((Yfun_specs = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_45,(P)Ynil,(P)YPfalse)), (regsym(&Yfun_specs,"fun-specs"))),
  (accessorF894=fun_165,(CALL2(CHKREF(YPadd_met),CHKREF(Yfun_specs),accessorF894),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yfun_specs)),
  accessorF894))),(setterF897=(((Yfun_specs_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_46,(P)Ynil,(P)YPfalse)), (regsym(&Yfun_specs_setter,"fun-specs-setter"))),
  (accessorF896=fun_166,(CALL2(CHKREF(YPadd_met),CHKREF(Yfun_specs_setter),accessorF896),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yfun_specs_setter)),
  accessorF896))),(slotF898=(P)YPPslot((P)CHKREF(YLfunG),(P)CHKREF(Yfun_specs),(P)CHKREF(Yfun_specs_setter),(P)CHKREF(YLlstG),(P)fun_167),((P)YPmet_env_setter((P)slotF898,(P)getterF895),
  (P)YPmet_env_setter((P)slotF898,(P)setterF897),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLfunG),slotF898))))));
  lit_47 = YPint((P)1);
  lit_48 = YPint((P)2);
  fun_168 = YPmet(FUNCODEREF(fun_168),YPpair(CHKREF(YLfunG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_169 = YPmet(FUNCODEREF(fun_169),YPpair(CHKREF(YLlogG),YPpair(CHKREF(YLfunG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_170 = YPmet(FUNCODEREF(fun_170),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF900=(((Yfun_naryQ = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_47,(P)Ynil,(P)YPfalse)), (regsym(&Yfun_naryQ,"fun-nary?"))),
  (accessorF899=fun_168,(CALL2(CHKREF(YPadd_met),CHKREF(Yfun_naryQ),accessorF899),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yfun_naryQ)),
  accessorF899))),(setterF902=(((Yfun_naryQ_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_48,(P)Ynil,(P)YPfalse)), (regsym(&Yfun_naryQ_setter,"fun-nary?-setter"))),
  (accessorF901=fun_169,(CALL2(CHKREF(YPadd_met),CHKREF(Yfun_naryQ_setter),accessorF901),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yfun_naryQ_setter)),
  accessorF901))),(slotF903=(P)YPPslot((P)CHKREF(YLfunG),(P)CHKREF(Yfun_naryQ),(P)CHKREF(Yfun_naryQ_setter),(P)CHKREF(YLlogG),(P)fun_170),((P)YPmet_env_setter((P)slotF903,(P)getterF900),
  (P)YPmet_env_setter((P)slotF903,(P)setterF902),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLfunG),slotF903))))));
  lit_49 = YPint((P)1);
  lit_50 = YPint((P)2);
  lit_51 = YPint((P)0);
  fun_171 = YPmet(FUNCODEREF(fun_171),YPpair(CHKREF(YLfunG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_172 = YPmet(FUNCODEREF(fun_172),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfunG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_173 = YPmet(FUNCODEREF(fun_173),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF905=(((Yfun_arity = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_49,(P)Ynil,(P)YPfalse)), (regsym(&Yfun_arity,"fun-arity"))),
  (accessorF904=fun_171,(CALL2(CHKREF(YPadd_met),CHKREF(Yfun_arity),accessorF904),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yfun_arity)),
  accessorF904))),(setterF907=(((Yfun_arity_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_50,(P)Ynil,(P)YPfalse)), (regsym(&Yfun_arity_setter,"fun-arity-setter"))),
  (accessorF906=fun_172,(CALL2(CHKREF(YPadd_met),CHKREF(Yfun_arity_setter),accessorF906),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yfun_arity_setter)),
  accessorF906))),(slotF908=(P)YPPslot((P)CHKREF(YLfunG),(P)CHKREF(Yfun_arity),(P)CHKREF(Yfun_arity_setter),(P)CHKREF(YLintG),(P)fun_173),((P)YPmet_env_setter((P)slotF908,(P)getterF905),
  (P)YPmet_env_setter((P)slotF908,(P)setterF907),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLfunG),slotF908))))));
  lit_52 = YPint((P)1);
  lit_53 = YPint((P)2);
  fun_174 = YPmet(FUNCODEREF(fun_174),YPpair(CHKREF(YLmetG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_175 = YPmet(FUNCODEREF(fun_175),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLmetG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_176 = YPmet(FUNCODEREF(fun_176),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF910=(((Yfun_env = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_52,(P)Ynil,(P)YPfalse)), (regsym(&Yfun_env,"fun-env"))),
  (accessorF909=fun_174,(CALL2(CHKREF(YPadd_met),CHKREF(Yfun_env),accessorF909),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yfun_env)),
  accessorF909))),(setterF912=(((Yfun_env_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_53,(P)Ynil,(P)YPfalse)), (regsym(&Yfun_env_setter,"fun-env-setter"))),
  (accessorF911=fun_175,(CALL2(CHKREF(YPadd_met),CHKREF(Yfun_env_setter),accessorF911),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yfun_env_setter)),
  accessorF911))),(slotF913=(P)YPPslot((P)CHKREF(YLmetG),(P)CHKREF(Yfun_env),(P)CHKREF(Yfun_env_setter),(P)CHKREF(YLanyG),(P)fun_176),((P)YPmet_env_setter((P)slotF913,(P)getterF910),
  (P)YPmet_env_setter((P)slotF913,(P)setterF912),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLmetG),slotF913))))));
  lit_54 = YPint((P)1);
  lit_55 = YPint((P)2);
  fun_177 = YPmet(FUNCODEREF(fun_177),YPpair(CHKREF(YLgenG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_178 = YPmet(FUNCODEREF(fun_178),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLgenG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_179 = YPmet(FUNCODEREF(fun_179),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF915=(((Yfun_mets = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_54,(P)Ynil,(P)YPfalse)), (regsym(&Yfun_mets,"fun-mets"))),
  (accessorF914=fun_177,(CALL2(CHKREF(YPadd_met),CHKREF(Yfun_mets),accessorF914),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yfun_mets)),
  accessorF914))),(setterF917=(((Yfun_mets_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_55,(P)Ynil,(P)YPfalse)), (regsym(&Yfun_mets_setter,"fun-mets-setter"))),
  (accessorF916=fun_178,(CALL2(CHKREF(YPadd_met),CHKREF(Yfun_mets_setter),accessorF916),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yfun_mets_setter)),
  accessorF916))),(slotF918=(P)YPPslot((P)CHKREF(YLgenG),(P)CHKREF(Yfun_mets),(P)CHKREF(Yfun_mets_setter),(P)CHKREF(YLlstG),(P)fun_179),((P)YPmet_env_setter((P)slotF918,(P)getterF915),
  (P)YPmet_env_setter((P)slotF918,(P)setterF917),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLgenG),slotF918))))));
  lit_56 = YPint((P)1);
  lit_57 = YPint((P)2);
  fun_180 = YPmet(FUNCODEREF(fun_180),YPpair(CHKREF(YLgenG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_181 = YPmet(FUNCODEREF(fun_181),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLgenG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_182 = YPmet(FUNCODEREF(fun_182),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((getterF920=(((Yfun_cache = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil)),(P)YPfalse,(P)lit_56,(P)Ynil,(P)YPfalse)), (regsym(&Yfun_cache,"fun-cache"))),
  (accessorF919=fun_180,(CALL2(CHKREF(YPadd_met),CHKREF(Yfun_cache),accessorF919),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yfun_cache)),
  accessorF919))),(setterF922=(((Yfun_cache_setter = (P)YPgen((P)CHKREF(YPearly_dispatch),(P)(P)YPpair((P)CHKREF(YLanyG),(P)(P)YPpair((P)CHKREF(YLanyG),(P)CHKREF(Ynil))),(P)YPfalse,(P)lit_57,(P)Ynil,(P)YPfalse)), (regsym(&Yfun_cache_setter,"fun-cache-setter"))),
  (accessorF921=fun_181,(CALL2(CHKREF(YPadd_met),CHKREF(Yfun_cache_setter),accessorF921),
  CALL1(CHKREF(YPregister_early_generic),CHKREF(Yfun_cache_setter)),
  accessorF921))),(slotF923=(P)YPPslot((P)CHKREF(YLgenG),(P)CHKREF(Yfun_cache),(P)CHKREF(Yfun_cache_setter),(P)CHKREF(YLanyG),(P)fun_182),((P)YPmet_env_setter((P)slotF923,(P)getterF920),
  (P)YPmet_env_setter((P)slotF923,(P)setterF922),
  CALL2(CHKREF(YPadd_slot),CHKREF(YLgenG),slotF923))))));
  YPcollect_direct_slots = YPmet(FUNCODEREF(YPcollect_direct_slots),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YPcollect_direct_slots = YPcollect_direct_slots), (regsym(&YPcollect_direct_slots,"%collect-direct-slots"))));
  YPfinalize_slotsX = YPmet(FUNCODEREF(YPfinalize_slotsX),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YPfinalize_slotsX = YPfinalize_slotsX), (regsym(&YPfinalize_slotsX,"%finalize-slots!"))));
  (YPfalse);
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLanyG)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(Ynul)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(Ynul_slot)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLlogG)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YPtrue)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YPfalse)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLchrG)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLnumG)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLintG)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLfloG)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLlocG)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLcolG)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLbagG)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLseqG)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLlstG)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(Ynil)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLflatG)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLvecG)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLstrG)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLsymG)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLtraitsG)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLslotG)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLgen_cacheG)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLfunG)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLmetG)));
  (CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLgenG)));
  (YPfalse);
  ((P)YPpatch_lst((P)Ynil));
  ((P)YPpatch_lst((P)CHKREF(YLlstG)));
  (YPfalse);
  (YPfalse);
  (YPfalse);
  lit_58 = YPchr((P)32);
  (YPfalse);
  (((YPsnul = (P)YPstrX((P)(P)0)), (regsym(&YPsnul,"%snul"))));
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (((YPvnul = (P)YPvecX((P)(P)0)), (regsym(&YPvnul,"%vnul"))));
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  fun_loop_204 = YPmet(FUNCODEREF(fun_loop_204),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  YPstr_eqQ = YPmet(FUNCODEREF(YPstr_eqQ),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YPstr_eqQ = YPstr_eqQ), (regsym(&YPstr_eqQ,"%str-eq?"))));
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (((YPsymbols = CHKREF(Ynil)), (regsym(&YPsymbols,"%symbols"))));
  fun_lookup_209 = YPmet(FUNCODEREF(fun_lookup_209),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  Yfab_sym = YPmet(FUNCODEREF(Yfab_sym),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yfab_sym = Yfab_sym), (regsym(&Yfab_sym,"fab-sym"))));
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  YOOEE = YPmet(FUNCODEREF(YOOEE),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YOOEE = YOOEE), (regsym(&YOOEE,"@@=="))));
  Ynot = YPmet(FUNCODEREF(Ynot),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ynot = Ynot), (regsym(&Ynot,"not"))));
  (YPfalse);
  YOOemptyQ = YPmet(FUNCODEREF(YOOemptyQ),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YOOemptyQ = YOOemptyQ), (regsym(&YOOemptyQ,"@@empty?"))));
  YOrevX = YPmet(FUNCODEREF(YOrevX),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YOrevX = YOrevX), (regsym(&YOrevX,"@rev!"))));
  (YPfalse);
  fun_fnd_226 = YPmet(FUNCODEREF(fun_fnd_226),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  YOallQ = YPmet(FUNCODEREF(YOallQ),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YOallQ = YOallQ), (regsym(&YOallQ,"@all?"))));
  fun_fnd_228 = YPmet(FUNCODEREF(fun_fnd_228),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  YOall2Q = YPmet(FUNCODEREF(YOall2Q),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((YOall2Q = YOall2Q), (regsym(&YOall2Q,"@all2?"))));
  lit_59 = YPint((P)1);
  lit_60 = YPint((P)0);
  fun_fnd_230 = YPmet(FUNCODEREF(fun_fnd_230),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  YOelt = YPmet(FUNCODEREF(YOelt),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YOelt = YOelt), (regsym(&YOelt,"@elt"))));
  fun_loop_232 = YPmet(FUNCODEREF(fun_loop_232),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  YOfill = YPmet(FUNCODEREF(YOfill),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLfunG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YOfill = YOfill), (regsym(&YOfill,"@fill"))));
  fun_fnd_234 = YPmet(FUNCODEREF(fun_fnd_234),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  YOanyQ = YPmet(FUNCODEREF(YOanyQ),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YOanyQ = YOanyQ), (regsym(&YOanyQ,"@any?"))));
  (YPfalse);
  (YPfalse);
  fun_do_238 = YPmet(FUNCODEREF(fun_do_238),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  YOmap = YPmet(FUNCODEREF(YOmap),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YOmap = YOmap), (regsym(&YOmap,"@map"))));
  fun_do_240 = YPmet(FUNCODEREF(fun_do_240),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  YOdo = YPmet(FUNCODEREF(YOdo),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YOdo = YOdo), (regsym(&YOdo,"@do"))));
  fun_in_242 = YPmet(FUNCODEREF(fun_in_242),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  YOalter = YPmet(FUNCODEREF(YOalter),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YOalter = YOalter), (regsym(&YOalter,"@alter"))));
  lit_61 = YPint((P)0);
  lit_62 = YPint((P)-1);
  fun_fab_244 = YPmet(FUNCODEREF(fun_fab_244),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  YOfab = YPmet(FUNCODEREF(YOfab),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YOfab = YOfab), (regsym(&YOfab,"@fab"))));
  fun_red_246 = YPmet(FUNCODEREF(fun_red_246),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  YOreduce = YPmet(FUNCODEREF(YOreduce),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlstG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((YOreduce = YOreduce), (regsym(&YOreduce,"@reduce"))));
  YOcat2 = YPmet(FUNCODEREF(YOcat2),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YOcat2 = YOcat2), (regsym(&YOcat2,"@cat2"))));
  lit_63 = YPint((P)1);
  lit_64 = YPint((P)0);
  fun_fnd_249 = YPmet(FUNCODEREF(fun_fnd_249),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  YOfind_key = YPmet(FUNCODEREF(YOfind_key),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YOfind_key = YOfind_key), (regsym(&YOfind_key,"@find-key"))));
  fun_251 = YPmet(FUNCODEREF(fun_251),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  YOmemQ = YPmet(FUNCODEREF(YOmemQ),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YOmemQ = YOmemQ), (regsym(&YOmemQ,"@mem?"))));
  fun_253 = YPmet(FUNCODEREF(fun_253),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  YOdel_dups = YPmet(FUNCODEREF(YOdel_dups),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YOdel_dups = YOdel_dups), (regsym(&YOdel_dups,"@del-dups"))));
  YOlst = YPmet(FUNCODEREF(YOlst),Ynil,YPtrue,YPint((P)0),ENVNUL); 
  (((YOlst = YOlst), (regsym(&YOlst,"@lst"))));
  YOfun_specs = YPmet(FUNCODEREF(YOfun_specs),YPpair(CHKREF(YLfunG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YOfun_specs = YOfun_specs), (regsym(&YOfun_specs,"@fun-specs"))));
  YOfun_naryQ = YPmet(FUNCODEREF(YOfun_naryQ),YPpair(CHKREF(YLfunG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YOfun_naryQ = YOfun_naryQ), (regsym(&YOfun_naryQ,"@fun-nary?"))));
  YOfun_arity = YPmet(FUNCODEREF(YOfun_arity),YPpair(CHKREF(YLfunG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YOfun_arity = YOfun_arity), (regsym(&YOfun_arity,"@fun-arity"))));
  YOfun_mets = YPmet(FUNCODEREF(YOfun_mets),YPpair(CHKREF(YLfunG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YOfun_mets = YOfun_mets), (regsym(&YOfun_mets,"@fun-mets"))));
  YOfun_mets_setter = YPmet(FUNCODEREF(YOfun_mets_setter),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLfunG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YOfun_mets_setter = YOfun_mets_setter), (regsym(&YOfun_mets_setter,"@fun-mets-setter"))));
  (((YLenvG = CHKREF(YLanyG)), (regsym(&YLenvG,"<env>"))));
  (((YLspecsG = CHKREF(YLlstG)), (regsym(&YLspecsG,"<specs>"))));
  (((YLbodyG = CHKREF(YLanyG)), (regsym(&YLbodyG,"<body>"))));
  Yfun_spec = YPmet(FUNCODEREF(Yfun_spec),YPpair(CHKREF(YLmetG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfun_spec = Yfun_spec), (regsym(&Yfun_spec,"fun-spec"))));
  (((YLmetsG = CHKREF(YLlstG)), (regsym(&YLmetsG,"<mets>"))));
  Yfab_gen = YPmet(FUNCODEREF(Yfab_gen),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlogG),YPpair(CHKREF(YLlstG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yfab_gen = Yfab_gen), (regsym(&Yfab_gen,"fab-gen"))));
  Yfun_same_metQ = YPmet(FUNCODEREF(Yfun_same_metQ),YPpair(CHKREF(YLmetG),YPpair(CHKREF(YLmetG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfun_same_metQ = Yfun_same_metQ), (regsym(&Yfun_same_metQ,"fun-same-met?"))));
  Yfun_congruentQ = YPmet(FUNCODEREF(Yfun_congruentQ),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLfunG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfun_congruentQ = Yfun_congruentQ), (regsym(&Yfun_congruentQ,"fun-congruent?"))));
  lit_65 = YPsb((P)"Method %= Incongruent with Generic %=");
  fun_col_265 = YPmet(FUNCODEREF(fun_col_265),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLmetsG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  Ygen_add_met = YPmet(FUNCODEREF(Ygen_add_met),YPpair(CHKREF(YLgenG),YPpair(CHKREF(YLmetG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ygen_add_met = Ygen_add_met), (regsym(&Ygen_add_met,"gen-add-met"))));
  (((YLargsG = CHKREF(YLlstG)), (regsym(&YLargsG,"<args>"))));
  fun_find_267 = YPmet(FUNCODEREF(fun_find_267),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (YPfalse);
  YisaQ = YPmet(FUNCODEREF(YisaQ),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YisaQ = YisaQ), (regsym(&YisaQ,"isa?"))));
  lit_66 = YPsb((P)"can't order specializers - arg/reference object %= is ");
  lit_67 = YPsb((P)"neither %= nor %=");
  fun_find_270 = YPmet(FUNCODEREF(fun_find_270),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  YobjectL = YPmet(FUNCODEREF(YobjectL),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((YobjectL = YobjectL), (regsym(&YobjectL,"object<"))));
  (((YLtupG = CHKREF(YLlstG)), (regsym(&YLtupG,"<tup>"))));
  (((YOtup = CHKREF(YOlst)), (regsym(&YOtup,"@tup"))));
  lit_68 = YPPsym((P)"=");
  lit_69 = YPPsym((P)"<");
  lit_70 = YPPsym((P)">");
  Yorder_specs = YPmet(FUNCODEREF(Yorder_specs),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yorder_specs = Yorder_specs), (regsym(&Yorder_specs,"order-specs"))));
  lit_71 = YPint((P)0);
  lit_72 = YPint((P)1);
  lit_73 = YPPsym((P)"=");
  lit_74 = YPPsym((P)"<>");
  lit_75 = YPPsym((P)"=");
  lit_76 = YPPsym((P)"<>");
  lit_77 = YPPsym((P)"=");
  lit_78 = YPint((P)0);
  fun_loop_273 = YPmet(FUNCODEREF(fun_loop_273),YPpair(CHKREF(YLsymG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  Yorder_mets = YPmet(FUNCODEREF(Yorder_mets),YPpair(CHKREF(YLmetG),YPpair(CHKREF(YLmetG),YPpair(CHKREF(YLargsG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yorder_mets = Yorder_mets), (regsym(&Yorder_mets,"order-mets"))));
  lit_79 = YPPsym((P)"<");
  lit_80 = YPPsym((P)"<");
  lit_81 = YPPsym((P)">");
  fun_loop_275 = YPmet(FUNCODEREF(fun_loop_275),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_make_ambiguous_276 = YPmet(FUNCODEREF(fun_make_ambiguous_276),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_loop_277 = YPmet(FUNCODEREF(fun_loop_277),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_precedes_allQ_278 = YPmet(FUNCODEREF(fun_precedes_allQ_278),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_check_subsequent_ambiguities_279 = YPmet(FUNCODEREF(fun_check_subsequent_ambiguities_279),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_insert_280 = YPmet(FUNCODEREF(fun_insert_280),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_loop_281 = YPmet(FUNCODEREF(fun_loop_281),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  Ysorted_app_mets_1 = YPmet(FUNCODEREF(Ysorted_app_mets_1),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLargsG),YPpair(CHKREF(YLfunG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Ysorted_app_mets_1 = Ysorted_app_mets_1), (regsym(&Ysorted_app_mets_1,"sorted-app-mets-1"))));
  lit_82 = YPint((P)1);
  lit_83 = YPint((P)0);
  fun_loop_283 = YPmet(FUNCODEREF(fun_loop_283),YPpair(CHKREF(YLintG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  Ymet_appQ = YPmet(FUNCODEREF(Ymet_appQ),YPpair(CHKREF(YLmetG),YPpair(CHKREF(YLargsG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ymet_appQ = Ymet_appQ), (regsym(&Ymet_appQ,"met-app?"))));
  fun_col_285 = YPmet(FUNCODEREF(fun_col_285),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  Ysorted_app_mets = YPmet(FUNCODEREF(Ysorted_app_mets),YPpair(CHKREF(YLgenG),YPpair(CHKREF(YLargsG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ysorted_app_mets = Ysorted_app_mets), (regsym(&Ysorted_app_mets,"sorted-app-mets"))));
  lit_84 = YPint((P)1);
  lit_85 = YPint((P)0);
  fun_col_287 = YPmet(FUNCODEREF(fun_col_287),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLargsG),YPpair(CHKREF(YLargsG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  Yopt_args = YPmet(FUNCODEREF(Yopt_args),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLargsG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yopt_args = Yopt_args), (regsym(&Yopt_args,"opt-args"))));
  YOgen_cache_singletons = YPmet(FUNCODEREF(YOgen_cache_singletons),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YOgen_cache_singletons = YOgen_cache_singletons), (regsym(&YOgen_cache_singletons,"@gen-cache-singletons"))));
  YOgen_cache_singletons_setter = YPmet(FUNCODEREF(YOgen_cache_singletons_setter),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YOgen_cache_singletons_setter = YOgen_cache_singletons_setter), (regsym(&YOgen_cache_singletons_setter,"@gen-cache-singletons-setter"))));
  YOgen_cache_classes = YPmet(FUNCODEREF(YOgen_cache_classes),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YOgen_cache_classes = YOgen_cache_classes), (regsym(&YOgen_cache_classes,"@gen-cache-classes"))));
  YOgen_cache_classes_setter = YPmet(FUNCODEREF(YOgen_cache_classes_setter),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YOgen_cache_classes_setter = YOgen_cache_classes_setter), (regsym(&YOgen_cache_classes_setter,"@gen-cache-classes-setter"))));
  lit_86 = YPint((P)1);
  lit_87 = YPint((P)1);
  fun_loop_293 = YPmet(FUNCODEREF(fun_loop_293),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  Ygen_lookup_miss_1_using = YPmet(FUNCODEREF(Ygen_lookup_miss_1_using),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLgenG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLmetG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)))))))))),YPfalse,YPint((P)10),ENVNUL); 
  (((Ygen_lookup_miss_1_using = Ygen_lookup_miss_1_using), (regsym(&Ygen_lookup_miss_1_using,"gen-lookup-miss-1-using"))));
  Ysingleton_specQ = YPmet(FUNCODEREF(Ysingleton_specQ),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysingleton_specQ = Ysingleton_specQ), (regsym(&Ysingleton_specQ,"singleton-spec?"))));
  (((YLslotG_traits = (P)YPobject_traits((P)CHKREF(YLslotG))), (regsym(&YLslotG_traits,"<slot>-traits"))));
  lit_88 = YPint((P)1);
  Ymethod_accessor_offset = YPmet(FUNCODEREF(Ymethod_accessor_offset),YPpair(CHKREF(YLgenG),YPpair(CHKREF(YLmetG),YPpair(CHKREF(YLlstG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Ymethod_accessor_offset = Ymethod_accessor_offset), (regsym(&Ymethod_accessor_offset,"method-accessor-offset"))));
  Ygen_lookup_miss_1 = YPmet(FUNCODEREF(Ygen_lookup_miss_1),YPpair(CHKREF(YLgenG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLmetG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil))))))),YPfalse,YPint((P)7),ENVNUL); 
  (((Ygen_lookup_miss_1 = Ygen_lookup_miss_1), (regsym(&Ygen_lookup_miss_1,"gen-lookup-miss-1"))));
  (YPfalse);
  lit_89 = YPint((P)0);
  (YPfalse);
  (((YDmissed_dispatch = (P)YPpair((P)CHKREF(Ynil),(P)CHKREF(Ynil))), (regsym(&YDmissed_dispatch,"$missed-dispatch"))));
  lit_90 = YPint((P)1);
  (YPfalse);
  (((YLintG_traits = (P)YPtraits_of((P)CHKREF(YLintG))), (regsym(&YLintG_traits,"<int>-traits"))));
  (YPfalse);
  (YPfalse);
  lit_91 = YPint((P)1);
  (YPfalse);
  lit_92 = YPint((P)0);
  lit_93 = YPint((P)1);
  lit_94 = YPint((P)0);
  lit_95 = YPsb((P)"Ambiguous Method Error when calling %= on %=");
  lit_96 = YPsb((P)"No Applicable Methods Error when calling %= on %=");
  Ychoose_method = YPmet(FUNCODEREF(Ychoose_method),YPpair(CHKREF(YLgenG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ychoose_method = Ychoose_method), (regsym(&Ychoose_method,"choose-method"))));
  YmetL = YPmet(FUNCODEREF(YmetL),YPpair(CHKREF(YLmetG),YPpair(CHKREF(YLmetG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YmetL = YmetL), (regsym(&YmetL,"met<"))));
  Ymet_has_singleton_specsQ = YPmet(FUNCODEREF(Ymet_has_singleton_specsQ),YPpair(CHKREF(YLmetG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ymet_has_singleton_specsQ = Ymet_has_singleton_specsQ), (regsym(&Ymet_has_singleton_specsQ,"met-has-singleton-specs?"))));
  fun_loop_306 = YPmet(FUNCODEREF(fun_loop_306),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  Yfind_app_singleton_mets = YPmet(FUNCODEREF(Yfind_app_singleton_mets),YPpair(CHKREF(YLgenG),YPpair(CHKREF(YLmetG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfind_app_singleton_mets = Yfind_app_singleton_mets), (regsym(&Yfind_app_singleton_mets,"find-app-singleton-mets"))));
  lit_97 = YPint((P)0);
  lit_98 = YPint((P)0);
  fun_308 = YPmet(FUNCODEREF(fun_308),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  Ygen_lookup_miss = YPmet(FUNCODEREF(Ygen_lookup_miss),YPpair(CHKREF(YLgenG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ygen_lookup_miss = Ygen_lookup_miss), (regsym(&Ygen_lookup_miss,"gen-lookup-miss"))));
  YPdispatch = YPmet(FUNCODEREF(YPdispatch),Ynil,YPtrue,YPint((P)0),ENVNUL); 
  (((YPdispatch = YPdispatch), (regsym(&YPdispatch,"%dispatch"))));
  fun_311 = YPmet(FUNCODEREF(fun_311),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  Ygen_from_met = YPmet(FUNCODEREF(Ygen_from_met),YPpair(CHKREF(YLmetG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ygen_from_met = Ygen_from_met), (regsym(&Ygen_from_met,"gen-from-met"))));
  YPdefine_method = YPmet(FUNCODEREF(YPdefine_method),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLmetG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YPdefine_method = YPdefine_method), (regsym(&YPdefine_method,"%define-method"))));
  fun_loop_314 = YPmet(FUNCODEREF(fun_loop_314),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  YPpatch_early_generics = YPmet(FUNCODEREF(YPpatch_early_generics),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((YPpatch_early_generics = YPpatch_early_generics), (regsym(&YPpatch_early_generics,"%patch-early-generics"))));
  (CALL0(CHKREF(YPpatch_early_generics)));
  (((YLoptsG = CHKREF(YLlstG)), (regsym(&YLoptsG,"<opts>"))));
  Yapply = YPmet(FUNCODEREF(Yapply),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLoptsG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yapply = Yapply), (regsym(&Yapply,"apply"))));
  (((YLparentsG = CHKREF(YLlstG)), (regsym(&YLparentsG,"<parents>"))));
  (((YLslotsG = CHKREF(YLlstG)), (regsym(&YLslotsG,"<slots>"))));
  lit_99 = YPsb((P)"inconsistent precedence graph");
  lit_100 = YPint((P)1);
  lit_101 = YPint((P)0);
  fun_p_in_and_unconstrained_inQ_317 = YPmet(FUNCODEREF(fun_p_in_and_unconstrained_inQ_317),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_p_unconstrained_inQ_318 = YPmet(FUNCODEREF(fun_p_unconstrained_inQ_318),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_unconstrained_proto_319 = YPmet(FUNCODEREF(fun_unconstrained_proto_319),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_unconstrained_object_in_parents_320 = YPmet(FUNCODEREF(fun_unconstrained_object_in_parents_320),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_remove_next_321 = YPmet(FUNCODEREF(fun_remove_next_321),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_merge_lists_322 = YPmet(FUNCODEREF(fun_merge_lists_322),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  Ytraits_ordered_parents = YPmet(FUNCODEREF(Ytraits_ordered_parents),YPpair(CHKREF(YLtraitsG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ytraits_ordered_parents = Ytraits_ordered_parents), (regsym(&Ytraits_ordered_parents,"traits-ordered-parents"))));
  Ytraits_ordered_slots = YPmet(FUNCODEREF(Ytraits_ordered_slots),YPpair(CHKREF(YLtraitsG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ytraits_ordered_slots = Ytraits_ordered_slots), (regsym(&Ytraits_ordered_slots,"traits-ordered-slots"))));
  Ymake_traits = YPmet(FUNCODEREF(Ymake_traits),YPpair(CHKREF(YLparentsG),YPpair(CHKREF(YLslotsG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Ymake_traits = Ymake_traits), (regsym(&Ymake_traits,"make-traits"))));
  Yobject_direct_slots = YPmet(FUNCODEREF(Yobject_direct_slots),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yobject_direct_slots = Yobject_direct_slots), (regsym(&Yobject_direct_slots,"object-direct-slots"))));
  Yobject_direct_parents = YPmet(FUNCODEREF(Yobject_direct_parents),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yobject_direct_parents = Yobject_direct_parents), (regsym(&Yobject_direct_parents,"object-direct-parents"))));
  Yobject_slots = YPmet(FUNCODEREF(Yobject_slots),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yobject_slots = Yobject_slots), (regsym(&Yobject_slots,"object-slots"))));
  Yobject_parents = YPmet(FUNCODEREF(Yobject_parents),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yobject_parents = Yobject_parents), (regsym(&Yobject_parents,"object-parents"))));
  lit_102 = YPint((P)-1);
  lit_103 = YPint((P)1);
  lit_104 = YPint((P)0);
  fun_loop_330 = YPmet(FUNCODEREF(fun_loop_330),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  Yslot_offset = YPmet(FUNCODEREF(Yslot_offset),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLfunG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yslot_offset = Yslot_offset), (regsym(&Yslot_offset,"slot-offset"))));
  lit_105 = YPsb((P)"slot %s not found in %=");
  Yslot_value = YPmet(FUNCODEREF(Yslot_value),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLfunG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yslot_value = Yslot_value), (regsym(&Yslot_value,"slot-value"))));
  lit_106 = YPsb((P)"slot %s not found in %=");
  Yslot_value_setter = YPmet(FUNCODEREF(Yslot_value_setter),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLfunG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yslot_value_setter = Yslot_value_setter), (regsym(&Yslot_value_setter,"slot-value-setter"))));
  Yensure_traits = YPmet(FUNCODEREF(Yensure_traits),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yensure_traits = Yensure_traits), (regsym(&Yensure_traits,"ensure-traits"))));
  lit_107 = YPint((P)1);
  lit_108 = YPint((P)0);
  fun_loop_335 = YPmet(FUNCODEREF(fun_loop_335),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  YPisa = YPmet(FUNCODEREF(YPisa),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((YPisa = YPisa), (regsym(&YPisa,"%isa"))));
  lit_109 = YPsb((P)"COULDN'T FIND GETTER");
  lit_110 = YPint((P)0);
  fun_loop_337 = YPmet(FUNCODEREF(fun_loop_337),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  Yfind_getter = YPmet(FUNCODEREF(Yfind_getter),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLgenG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfind_getter = Yfind_getter), (regsym(&Yfind_getter,"find-getter"))));
  lit_111 = YPsb((P)"COULDN'T FIND SETTER");
  lit_112 = YPint((P)1);
  lit_113 = YPint((P)0);
  fun_loop_339 = YPmet(FUNCODEREF(fun_loop_339),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  Yfind_setter = YPmet(FUNCODEREF(Yfind_setter),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLgenG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yfind_setter = Yfind_setter), (regsym(&Yfind_setter,"find-setter"))));
  YPslot = YPmet(FUNCODEREF(YPslot),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLgenG),YPpair(CHKREF(YLgenG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLfunG),Ynil))))),YPfalse,YPint((P)5),ENVNUL); 
  (((YPslot = YPslot), (regsym(&YPslot,"%slot"))));
  (((Yadd_slot = CHKREF(YPslot)), (regsym(&Yadd_slot,"add-slot"))));
  (((YPcheck_typesQ = YPtrue)));
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  (YPfalse);
  lit_114 = YPsb((P)"");
  fun_342 = YPmet(FUNCODEREF(fun_342),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_make_sym_343 = YPmet(FUNCODEREF(fun_make_sym_343),Ynil,YPtrue,YPint((P)0),ENVNUL); 
  (((Ymake_sym = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymake_sym) != YPfalse)
    ? CHKREF(Ymake_sym)
    : YPfalse),fun_make_sym_343)), (regsym(&Ymake_sym,"make-sym"))));
  lit_115 = YPint((P)1000);
  (((YTgensym_counterT = lit_115), (regsym(&YTgensym_counterT,"*gensym-counter*"))));
  lit_116 = YPsb((P)"x-");
  lit_117 = YPint((P)1);
  fun_gensym_344 = YPmet(FUNCODEREF(fun_gensym_344),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Ygensym = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ygensym) != YPfalse)
    ? CHKREF(Ygensym)
    : YPfalse),fun_gensym_344)), (regsym(&Ygensym,"gensym"))));
  lit_118 = YPsb((P)"-setter");
  fun_make_setter_name_345 = YPmet(FUNCODEREF(fun_make_setter_name_345),YPpair(CHKREF(YLsymG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ymake_setter_name = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymake_setter_name) != YPfalse)
    ? CHKREF(Ymake_setter_name)
    : YPfalse),fun_make_setter_name_345)), (regsym(&Ymake_setter_name,"make-setter-name"))));
  fun_var_name_346 = YPmet(FUNCODEREF(fun_var_name_346),YPpair(CHKREF(YLsymG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yvar_name = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yvar_name) != YPfalse)
    ? CHKREF(Yvar_name)
    : YPfalse),fun_var_name_346)), (regsym(&Yvar_name,"var-name"))));
  lit_119 = YPint((P)0);
  fun_var_name_347 = YPmet(FUNCODEREF(fun_var_name_347),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yvar_name = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yvar_name) != YPfalse)
    ? CHKREF(Yvar_name)
    : YPfalse),fun_var_name_347)), (regsym(&Yvar_name,"var-name"))));
  lit_120 = YPPsym((P)"<any>");
  fun_var_type_348 = YPmet(FUNCODEREF(fun_var_type_348),YPpair(CHKREF(YLsymG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yvar_type = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yvar_type) != YPfalse)
    ? CHKREF(Yvar_type)
    : YPfalse),fun_var_type_348)), (regsym(&Yvar_type,"var-type"))));
  lit_121 = YPint((P)1);
  fun_var_type_349 = YPmet(FUNCODEREF(fun_var_type_349),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yvar_type = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yvar_type) != YPfalse)
    ? CHKREF(Yvar_type)
    : YPfalse),fun_var_type_349)), (regsym(&Yvar_type,"var-type"))));
  (YPfalse);
  (YPfalse);
  fun_nyi_error_350 = YPmet(FUNCODEREF(fun_nyi_error_350),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Ynyi_error = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ynyi_error) != YPfalse)
    ? CHKREF(Ynyi_error)
    : YPfalse),fun_nyi_error_350)), (regsym(&Ynyi_error,"nyi-error"))));
  lit_122 = YPsb((P)"$");
  lit_123 = YPsb((P)"{ obj(");
  lit_124 = YPsb((P)") }");
  fun_to_str_351 = YPmet(FUNCODEREF(fun_to_str_351),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yto_str = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yto_str) != YPfalse)
    ? CHKREF(Yto_str)
    : YPfalse),fun_to_str_351)), (regsym(&Yto_str,"to-str"))));
  (((Ybot = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLanyG),(P)Ynil),Ynil,Ynil)), (regsym(&Ybot,"bot"))));
  lit_125 = YPsb((P)"#t");
  fun_to_str_352 = YPmet(FUNCODEREF(fun_to_str_352),YPpair(YPtrue,Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yto_str = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yto_str) != YPfalse)
    ? CHKREF(Yto_str)
    : YPfalse),fun_to_str_352)), (regsym(&Yto_str,"to-str"))));
  lit_126 = YPsb((P)"#f");
  fun_to_str_353 = YPmet(FUNCODEREF(fun_to_str_353),YPpair(YPfalse,Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yto_str = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yto_str) != YPfalse)
    ? CHKREF(Yto_str)
    : YPfalse),fun_to_str_353)), (regsym(&Yto_str,"to-str"))));
  lit_127 = YPsb((P)"NO AS METHOD FOR %= AND %=");
  fun_as_354 = YPmet(FUNCODEREF(fun_as_354),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yas = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yas) != YPfalse)
    ? CHKREF(Yas)
    : YPfalse),fun_as_354)), (regsym(&Yas,"as"))));
  fun_EE_355 = YPmet(FUNCODEREF(fun_EE_355),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YEE = CALL2(CHKREF(YPdefine_method),((BOUNDP(YEE) != YPfalse)
    ? CHKREF(YEE)
    : YPfalse),fun_EE_355)), (regsym(&YEE,"=="))));
  fun_E_356 = YPmet(FUNCODEREF(fun_E_356),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YE = CALL2(CHKREF(YPdefine_method),((BOUNDP(YE) != YPfalse)
    ? CHKREF(YE)
    : YPfalse),fun_E_356)), (regsym(&YE,"="))));
  fun_NE_357 = YPmet(FUNCODEREF(fun_NE_357),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YNE = CALL2(CHKREF(YPdefine_method),((BOUNDP(YNE) != YPfalse)
    ? CHKREF(YNE)
    : YPfalse),fun_NE_357)), (regsym(&YNE,"~="))));
  fun_NEE_358 = YPmet(FUNCODEREF(fun_NEE_358),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YNEE = CALL2(CHKREF(YPdefine_method),((BOUNDP(YNEE) != YPfalse)
    ? CHKREF(YNEE)
    : YPfalse),fun_NEE_358)), (regsym(&YNEE,"~=="))));
  fun_G_359 = YPmet(FUNCODEREF(fun_G_359),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YG = CALL2(CHKREF(YPdefine_method),((BOUNDP(YG) != YPfalse)
    ? CHKREF(YG)
    : YPfalse),fun_G_359)), (regsym(&YG,">"))));
  fun_LE_360 = YPmet(FUNCODEREF(fun_LE_360),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YLE = CALL2(CHKREF(YPdefine_method),((BOUNDP(YLE) != YPfalse)
    ? CHKREF(YLE)
    : YPfalse),fun_LE_360)), (regsym(&YLE,"<="))));
  fun_GE_361 = YPmet(FUNCODEREF(fun_GE_361),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YGE = CALL2(CHKREF(YPdefine_method),((BOUNDP(YGE) != YPfalse)
    ? CHKREF(YGE)
    : YPfalse),fun_GE_361)), (regsym(&YGE,">="))));
  fun_min_362 = YPmet(FUNCODEREF(fun_min_362),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ymin = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymin) != YPfalse)
    ? CHKREF(Ymin)
    : YPfalse),fun_min_362)), (regsym(&Ymin,"min"))));
  fun_max_363 = YPmet(FUNCODEREF(fun_max_363),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ymax = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymax) != YPfalse)
    ? CHKREF(Ymax)
    : YPfalse),fun_max_363)), (regsym(&Ymax,"max"))));
  fun_as_364 = YPmet(FUNCODEREF(fun_as_364),YPpair(CHKREF(YLchrG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yas = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yas) != YPfalse)
    ? CHKREF(Yas)
    : YPfalse),fun_as_364)), (regsym(&Yas,"as"))));
  fun_as_365 = YPmet(FUNCODEREF(fun_as_365),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLchrG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yas = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yas) != YPfalse)
    ? CHKREF(Yas)
    : YPfalse),fun_as_365)), (regsym(&Yas,"as"))));
  fun_L_366 = YPmet(FUNCODEREF(fun_L_366),YPpair(CHKREF(YLchrG),YPpair(CHKREF(YLchrG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YL = CALL2(CHKREF(YPdefine_method),((BOUNDP(YL) != YPfalse)
    ? CHKREF(YL)
    : YPfalse),fun_L_366)), (regsym(&YL,"<"))));
  fun_EE_367 = YPmet(FUNCODEREF(fun_EE_367),YPpair(CHKREF(YLchrG),YPpair(CHKREF(YLchrG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YEE = CALL2(CHKREF(YPdefine_method),((BOUNDP(YEE) != YPfalse)
    ? CHKREF(YEE)
    : YPfalse),fun_EE_367)), (regsym(&YEE,"=="))));
  lit_128 = YPchr((P)97);
  lit_129 = YPchr((P)122);
  fun_lowercaseQ_368 = YPmet(FUNCODEREF(fun_lowercaseQ_368),YPpair(CHKREF(YLchrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YlowercaseQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(YlowercaseQ) != YPfalse)
    ? CHKREF(YlowercaseQ)
    : YPfalse),fun_lowercaseQ_368)), (regsym(&YlowercaseQ,"lowercase?"))));
  lit_130 = YPchr((P)65);
  lit_131 = YPchr((P)90);
  fun_uppercaseQ_369 = YPmet(FUNCODEREF(fun_uppercaseQ_369),YPpair(CHKREF(YLchrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YuppercaseQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(YuppercaseQ) != YPfalse)
    ? CHKREF(YuppercaseQ)
    : YPfalse),fun_uppercaseQ_369)), (regsym(&YuppercaseQ,"uppercase?"))));
  lit_132 = YPchr((P)97);
  lit_133 = YPchr((P)65);
  fun_as_lowercase_370 = YPmet(FUNCODEREF(fun_as_lowercase_370),YPpair(CHKREF(YLchrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yas_lowercase = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yas_lowercase) != YPfalse)
    ? CHKREF(Yas_lowercase)
    : YPfalse),fun_as_lowercase_370)), (regsym(&Yas_lowercase,"as-lowercase"))));
  lit_134 = YPchr((P)65);
  lit_135 = YPchr((P)97);
  fun_as_uppercase_371 = YPmet(FUNCODEREF(fun_as_uppercase_371),YPpair(CHKREF(YLchrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yas_uppercase = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yas_uppercase) != YPfalse)
    ? CHKREF(Yas_uppercase)
    : YPfalse),fun_as_uppercase_371)), (regsym(&Yas_uppercase,"as-uppercase"))));
  fun_to_str_372 = YPmet(FUNCODEREF(fun_to_str_372),YPpair(CHKREF(YLchrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yto_str = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yto_str) != YPfalse)
    ? CHKREF(Yto_str)
    : YPfalse),fun_to_str_372)), (regsym(&Yto_str,"to-str"))));
  lit_136 = YPchr((P)97);
  lit_137 = YPchr((P)122);
  lit_138 = YPchr((P)65);
  lit_139 = YPchr((P)90);
  fun_alphabeticQ_373 = YPmet(FUNCODEREF(fun_alphabeticQ_373),YPpair(CHKREF(YLchrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YalphabeticQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(YalphabeticQ) != YPfalse)
    ? CHKREF(YalphabeticQ)
    : YPfalse),fun_alphabeticQ_373)), (regsym(&YalphabeticQ,"alphabetic?"))));
  lit_140 = YPchr((P)48);
  lit_141 = YPchr((P)57);
  fun_numericQ_374 = YPmet(FUNCODEREF(fun_numericQ_374),YPpair(CHKREF(YLchrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YnumericQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(YnumericQ) != YPfalse)
    ? CHKREF(YnumericQ)
    : YPfalse),fun_numericQ_374)), (regsym(&YnumericQ,"numeric?"))));
  lit_142 = YPchr((P)48);
  fun_to_digit_375 = YPmet(FUNCODEREF(fun_to_digit_375),YPpair(CHKREF(YLchrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yto_digit = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yto_digit) != YPfalse)
    ? CHKREF(Yto_digit)
    : YPfalse),fun_to_digit_375)), (regsym(&Yto_digit,"to-digit"))));
  (((Ycontagious_type = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),YPpair(CHKREF(YLnumG),YPpair(CHKREF(YLnumG),Ynil)),YPfalse,YPint((P)2),Ynil,YPfalse)), (regsym(&Ycontagious_type,"contagious-type"))));
  (((Ycontagious_call = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLnumG),YPpair(CHKREF(YLnumG),Ynil))),YPfalse,YPint((P)3),Ynil,YPfalse)), (regsym(&Ycontagious_call,"contagious-call"))));
  fun_contagious_call_376 = YPmet(FUNCODEREF(fun_contagious_call_376),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLnumG),YPpair(CHKREF(YLnumG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Ycontagious_call = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycontagious_call) != YPfalse)
    ? CHKREF(Ycontagious_call)
    : YPfalse),fun_contagious_call_376)), (regsym(&Ycontagious_call,"contagious-call"))));
  fun_L_377 = YPmet(FUNCODEREF(fun_L_377),YPpair(CHKREF(YLnumG),YPpair(CHKREF(YLnumG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YL = CALL2(CHKREF(YPdefine_method),((BOUNDP(YL) != YPfalse)
    ? CHKREF(YL)
    : YPfalse),fun_L_377)), (regsym(&YL,"<"))));
  fun_A_378 = YPmet(FUNCODEREF(fun_A_378),YPpair(CHKREF(YLnumG),YPpair(CHKREF(YLnumG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YA = CALL2(CHKREF(YPdefine_method),((BOUNDP(YA) != YPfalse)
    ? CHKREF(YA)
    : YPfalse),fun_A_378)), (regsym(&YA,"+"))));
  fun___379 = YPmet(FUNCODEREF(fun___379),YPpair(CHKREF(YLnumG),YPpair(CHKREF(YLnumG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Y_ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Y_) != YPfalse)
    ? CHKREF(Y_)
    : YPfalse),fun___379)), (regsym(&Y_,"-"))));
  fun_T_380 = YPmet(FUNCODEREF(fun_T_380),YPpair(CHKREF(YLnumG),YPpair(CHKREF(YLnumG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YT = CALL2(CHKREF(YPdefine_method),((BOUNDP(YT) != YPfalse)
    ? CHKREF(YT)
    : YPfalse),fun_T_380)), (regsym(&YT,"*"))));
  lit_143 = YPint((P)1);
  fun_floor_381 = YPmet(FUNCODEREF(fun_floor_381),YPpair(CHKREF(YLnumG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yfloor = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfloor) != YPfalse)
    ? CHKREF(Yfloor)
    : YPfalse),fun_floor_381)), (regsym(&Yfloor,"floor"))));
  lit_144 = YPint((P)1);
  fun_ceiling_382 = YPmet(FUNCODEREF(fun_ceiling_382),YPpair(CHKREF(YLnumG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yceiling = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yceiling) != YPfalse)
    ? CHKREF(Yceiling)
    : YPfalse),fun_ceiling_382)), (regsym(&Yceiling,"ceiling"))));
  lit_145 = YPint((P)1);
  fun_round_383 = YPmet(FUNCODEREF(fun_round_383),YPpair(CHKREF(YLnumG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yround = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yround) != YPfalse)
    ? CHKREF(Yround)
    : YPfalse),fun_round_383)), (regsym(&Yround,"round"))));
  lit_146 = YPint((P)1);
  fun_truncate_384 = YPmet(FUNCODEREF(fun_truncate_384),YPpair(CHKREF(YLnumG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ytruncate = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ytruncate) != YPfalse)
    ? CHKREF(Ytruncate)
    : YPfalse),fun_truncate_384)), (regsym(&Ytruncate,"truncate"))));
  lit_147 = YPint((P)1);
  fun_floorS_385 = YPmet(FUNCODEREF(fun_floorS_385),YPpair(CHKREF(YLnumG),YPpair(CHKREF(YLnumG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YfloorS = CALL2(CHKREF(YPdefine_method),((BOUNDP(YfloorS) != YPfalse)
    ? CHKREF(YfloorS)
    : YPfalse),fun_floorS_385)), (regsym(&YfloorS,"floor/"))));
  lit_148 = YPint((P)1);
  fun_ceilingS_386 = YPmet(FUNCODEREF(fun_ceilingS_386),YPpair(CHKREF(YLnumG),YPpair(CHKREF(YLnumG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YceilingS = CALL2(CHKREF(YPdefine_method),((BOUNDP(YceilingS) != YPfalse)
    ? CHKREF(YceilingS)
    : YPfalse),fun_ceilingS_386)), (regsym(&YceilingS,"ceiling/"))));
  lit_149 = YPflo(FLOINT(2.0000000));
  lit_150 = YPint((P)1);
  lit_151 = YPint((P)1);
  lit_152 = YPint((P)1);
  lit_153 = YPint((P)1);
  fun_roundS_387 = YPmet(FUNCODEREF(fun_roundS_387),YPpair(CHKREF(YLnumG),YPpair(CHKREF(YLnumG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YroundS = CALL2(CHKREF(YPdefine_method),((BOUNDP(YroundS) != YPfalse)
    ? CHKREF(YroundS)
    : YPfalse),fun_roundS_387)), (regsym(&YroundS,"round/"))));
  fun_truncateS_388 = YPmet(FUNCODEREF(fun_truncateS_388),YPpair(CHKREF(YLnumG),YPpair(CHKREF(YLnumG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YtruncateS = CALL2(CHKREF(YPdefine_method),((BOUNDP(YtruncateS) != YPfalse)
    ? CHKREF(YtruncateS)
    : YPfalse),fun_truncateS_388)), (regsym(&YtruncateS,"truncate/"))));
  fun_modulo_389 = YPmet(FUNCODEREF(fun_modulo_389),YPpair(CHKREF(YLnumG),YPpair(CHKREF(YLnumG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ymodulo = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymodulo) != YPfalse)
    ? CHKREF(Ymodulo)
    : YPfalse),fun_modulo_389)), (regsym(&Ymodulo,"modulo"))));
  fun_remainder_390 = YPmet(FUNCODEREF(fun_remainder_390),YPpair(CHKREF(YLnumG),YPpair(CHKREF(YLnumG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yremainder = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yremainder) != YPfalse)
    ? CHKREF(Yremainder)
    : YPfalse),fun_remainder_390)), (regsym(&Yremainder,"remainder"))));
  lit_154 = YPint((P)0);
  fun_posQ_391 = YPmet(FUNCODEREF(fun_posQ_391),YPpair(CHKREF(YLnumG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YposQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(YposQ) != YPfalse)
    ? CHKREF(YposQ)
    : YPfalse),fun_posQ_391)), (regsym(&YposQ,"pos?"))));
  lit_155 = YPint((P)0);
  fun_zeroQ_392 = YPmet(FUNCODEREF(fun_zeroQ_392),YPpair(CHKREF(YLnumG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YzeroQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(YzeroQ) != YPfalse)
    ? CHKREF(YzeroQ)
    : YPfalse),fun_zeroQ_392)), (regsym(&YzeroQ,"zero?"))));
  lit_156 = YPint((P)0);
  fun_negQ_393 = YPmet(FUNCODEREF(fun_negQ_393),YPpair(CHKREF(YLnumG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YnegQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(YnegQ) != YPfalse)
    ? CHKREF(YnegQ)
    : YPfalse),fun_negQ_393)), (regsym(&YnegQ,"neg?"))));
  lit_157 = YPint((P)0);
  fun_neg_394 = YPmet(FUNCODEREF(fun_neg_394),YPpair(CHKREF(YLnumG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yneg = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yneg) != YPfalse)
    ? CHKREF(Yneg)
    : YPfalse),fun_neg_394)), (regsym(&Yneg,"neg"))));
  fun_abs_395 = YPmet(FUNCODEREF(fun_abs_395),YPpair(CHKREF(YLnumG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yabs = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yabs) != YPfalse)
    ? CHKREF(Yabs)
    : YPfalse),fun_abs_395)), (regsym(&Yabs,"abs"))));
  fun_to_str_396 = YPmet(FUNCODEREF(fun_to_str_396),YPpair(CHKREF(YLnumG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yto_str = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yto_str) != YPfalse)
    ? CHKREF(Yto_str)
    : YPfalse),fun_to_str_396)), (regsym(&Yto_str,"to-str"))));
  fun_contagious_type_397 = YPmet(FUNCODEREF(fun_contagious_type_397),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ycontagious_type = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycontagious_type) != YPfalse)
    ? CHKREF(Ycontagious_type)
    : YPfalse),fun_contagious_type_397)), (regsym(&Ycontagious_type,"contagious-type"))));
  fun_contagious_type_398 = YPmet(FUNCODEREF(fun_contagious_type_398),YPpair(CHKREF(YLfloG),YPpair(CHKREF(YLfloG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ycontagious_type = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycontagious_type) != YPfalse)
    ? CHKREF(Ycontagious_type)
    : YPfalse),fun_contagious_type_398)), (regsym(&Ycontagious_type,"contagious-type"))));
  fun_contagious_type_399 = YPmet(FUNCODEREF(fun_contagious_type_399),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfloG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ycontagious_type = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycontagious_type) != YPfalse)
    ? CHKREF(Ycontagious_type)
    : YPfalse),fun_contagious_type_399)), (regsym(&Ycontagious_type,"contagious-type"))));
  fun_contagious_type_400 = YPmet(FUNCODEREF(fun_contagious_type_400),YPpair(CHKREF(YLfloG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ycontagious_type = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycontagious_type) != YPfalse)
    ? CHKREF(Ycontagious_type)
    : YPfalse),fun_contagious_type_400)), (regsym(&Ycontagious_type,"contagious-type"))));
  fun_EE_401 = YPmet(FUNCODEREF(fun_EE_401),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YEE = CALL2(CHKREF(YPdefine_method),((BOUNDP(YEE) != YPfalse)
    ? CHKREF(YEE)
    : YPfalse),fun_EE_401)), (regsym(&YEE,"=="))));
  fun_L_402 = YPmet(FUNCODEREF(fun_L_402),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YL = CALL2(CHKREF(YPdefine_method),((BOUNDP(YL) != YPfalse)
    ? CHKREF(YL)
    : YPfalse),fun_L_402)), (regsym(&YL,"<"))));
  fun_A_403 = YPmet(FUNCODEREF(fun_A_403),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YA = CALL2(CHKREF(YPdefine_method),((BOUNDP(YA) != YPfalse)
    ? CHKREF(YA)
    : YPfalse),fun_A_403)), (regsym(&YA,"+"))));
  fun___404 = YPmet(FUNCODEREF(fun___404),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Y_ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Y_) != YPfalse)
    ? CHKREF(Y_)
    : YPfalse),fun___404)), (regsym(&Y_,"-"))));
  fun_T_405 = YPmet(FUNCODEREF(fun_T_405),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YT = CALL2(CHKREF(YPdefine_method),((BOUNDP(YT) != YPfalse)
    ? CHKREF(YT)
    : YPfalse),fun_T_405)), (regsym(&YT,"*"))));
  lit_158 = YPint((P)0);
  fun_floor_406 = YPmet(FUNCODEREF(fun_floor_406),YPpair(CHKREF(YLintG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yfloor = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfloor) != YPfalse)
    ? CHKREF(Yfloor)
    : YPfalse),fun_floor_406)), (regsym(&Yfloor,"floor"))));
  lit_159 = YPint((P)0);
  fun_ceiling_407 = YPmet(FUNCODEREF(fun_ceiling_407),YPpair(CHKREF(YLintG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yceiling = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yceiling) != YPfalse)
    ? CHKREF(Yceiling)
    : YPfalse),fun_ceiling_407)), (regsym(&Yceiling,"ceiling"))));
  lit_160 = YPint((P)0);
  fun_round_408 = YPmet(FUNCODEREF(fun_round_408),YPpair(CHKREF(YLintG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yround = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yround) != YPfalse)
    ? CHKREF(Yround)
    : YPfalse),fun_round_408)), (regsym(&Yround,"round"))));
  lit_161 = YPint((P)0);
  fun_truncate_409 = YPmet(FUNCODEREF(fun_truncate_409),YPpair(CHKREF(YLintG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ytruncate = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ytruncate) != YPfalse)
    ? CHKREF(Ytruncate)
    : YPfalse),fun_truncate_409)), (regsym(&Ytruncate,"truncate"))));
  fun_truncateS_410 = YPmet(FUNCODEREF(fun_truncateS_410),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YtruncateS = CALL2(CHKREF(YPdefine_method),((BOUNDP(YtruncateS) != YPfalse)
    ? CHKREF(YtruncateS)
    : YPfalse),fun_truncateS_410)), (regsym(&YtruncateS,"truncate/"))));
  fun_modulo_411 = YPmet(FUNCODEREF(fun_modulo_411),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ymodulo = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymodulo) != YPfalse)
    ? CHKREF(Ymodulo)
    : YPfalse),fun_modulo_411)), (regsym(&Ymodulo,"modulo"))));
  fun_logior_412 = YPmet(FUNCODEREF(fun_logior_412),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ylogior = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ylogior) != YPfalse)
    ? CHKREF(Ylogior)
    : YPfalse),fun_logior_412)), (regsym(&Ylogior,"logior"))));
  fun_logxor_413 = YPmet(FUNCODEREF(fun_logxor_413),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ylogxor = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ylogxor) != YPfalse)
    ? CHKREF(Ylogxor)
    : YPfalse),fun_logxor_413)), (regsym(&Ylogxor,"logxor"))));
  fun_logand_414 = YPmet(FUNCODEREF(fun_logand_414),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ylogand = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ylogand) != YPfalse)
    ? CHKREF(Ylogand)
    : YPfalse),fun_logand_414)), (regsym(&Ylogand,"logand"))));
  fun_lognot_415 = YPmet(FUNCODEREF(fun_lognot_415),YPpair(CHKREF(YLintG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ylognot = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ylognot) != YPfalse)
    ? CHKREF(Ylognot)
    : YPfalse),fun_lognot_415)), (regsym(&Ylognot,"lognot"))));
  fun_logbitQ_416 = YPmet(FUNCODEREF(fun_logbitQ_416),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YlogbitQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(YlogbitQ) != YPfalse)
    ? CHKREF(YlogbitQ)
    : YPfalse),fun_logbitQ_416)), (regsym(&YlogbitQ,"logbit?"))));
  lit_162 = YPint((P)1);
  fun_evenQ_417 = YPmet(FUNCODEREF(fun_evenQ_417),YPpair(CHKREF(YLintG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YevenQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(YevenQ) != YPfalse)
    ? CHKREF(YevenQ)
    : YPfalse),fun_evenQ_417)), (regsym(&YevenQ,"even?"))));
  fun_oddQ_418 = YPmet(FUNCODEREF(fun_oddQ_418),YPpair(CHKREF(YLintG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YoddQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(YoddQ) != YPfalse)
    ? CHKREF(YoddQ)
    : YPfalse),fun_oddQ_418)), (regsym(&YoddQ,"odd?"))));
  fun_ash_419 = YPmet(FUNCODEREF(fun_ash_419),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yash = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yash) != YPfalse)
    ? CHKREF(Yash)
    : YPfalse),fun_ash_419)), (regsym(&Yash,"ash"))));
  fun_lsh_420 = YPmet(FUNCODEREF(fun_lsh_420),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ylsh = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ylsh) != YPfalse)
    ? CHKREF(Ylsh)
    : YPfalse),fun_lsh_420)), (regsym(&Ylsh,"lsh"))));
  lit_163 = YPint((P)1);
  fun_search_421 = YPmet(FUNCODEREF(fun_search_421),YPpair(CHKREF(YLintG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_power_of_two_ceiling_422 = YPmet(FUNCODEREF(fun_power_of_two_ceiling_422),YPpair(CHKREF(YLintG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ypower_of_two_ceiling = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ypower_of_two_ceiling) != YPfalse)
    ? CHKREF(Ypower_of_two_ceiling)
    : YPfalse),fun_power_of_two_ceiling_422)), (regsym(&Ypower_of_two_ceiling,"power-of-two-ceiling"))));
  lit_164 = YPsb((P)"0123456789abcdefghijklmnopqrstuvwxyz");
  (((YDdigit_to_char = lit_164), (regsym(&YDdigit_to_char,"$digit-to-char"))));
  lit_165 = YPint((P)10);
  (((YTprint_baseT = lit_165), (regsym(&YTprint_baseT,"*print-base*"))));
  lit_166 = YPflo(FLOINT(1.0000000e-6));
  (((Yepsilon = lit_166), (regsym(&Yepsilon,"epsilon"))));
  lit_167 = YPint((P)1);
  lit_168 = YPsb((P)"too many arguments: %=, %=");
  fun_decode_radix_option_423 = YPmet(FUNCODEREF(fun_decode_radix_option_423),YPpair(CHKREF(YLoptsG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Ydecode_radix_option = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydecode_radix_option) != YPfalse)
    ? CHKREF(Ydecode_radix_option)
    : YPfalse),fun_decode_radix_option_423)), (regsym(&Ydecode_radix_option,"decode-radix-option"))));
  lit_169 = YPPsym((P)"num-to-str");
  lit_170 = YPint((P)0);
  lit_171 = YPint((P)-1);
  lit_172 = YPint((P)1);
  lit_173 = YPint((P)0);
  lit_174 = YPint((P)0);
  lit_175 = YPchr((P)45);
  lit_176 = YPint((P)0);
  lit_177 = YPsb((P)"0");
  fun_loop_424 = YPmet(FUNCODEREF(fun_loop_424),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_num_to_str_425 = YPmet(FUNCODEREF(fun_num_to_str_425),YPpair(CHKREF(YLintG),Ynil),YPtrue,YPint((P)1),ENVNUL); 
  (((Ynum_to_str = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ynum_to_str) != YPfalse)
    ? CHKREF(Ynum_to_str)
    : YPfalse),fun_num_to_str_425)), (regsym(&Ynum_to_str,"num-to-str"))));
  Yflo_bits = YPmet(FUNCODEREF(Yflo_bits),YPpair(CHKREF(YLfloG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yflo_bits = Yflo_bits), (regsym(&Yflo_bits,"flo-bits"))));
  fun_as_427 = YPmet(FUNCODEREF(fun_as_427),YPpair(CHKREF(YLfloG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yas = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yas) != YPfalse)
    ? CHKREF(Yas)
    : YPfalse),fun_as_427)), (regsym(&Yas,"as"))));
  fun_EE_428 = YPmet(FUNCODEREF(fun_EE_428),YPpair(CHKREF(YLfloG),YPpair(CHKREF(YLfloG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YEE = CALL2(CHKREF(YPdefine_method),((BOUNDP(YEE) != YPfalse)
    ? CHKREF(YEE)
    : YPfalse),fun_EE_428)), (regsym(&YEE,"=="))));
  fun_L_429 = YPmet(FUNCODEREF(fun_L_429),YPpair(CHKREF(YLfloG),YPpair(CHKREF(YLfloG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YL = CALL2(CHKREF(YPdefine_method),((BOUNDP(YL) != YPfalse)
    ? CHKREF(YL)
    : YPfalse),fun_L_429)), (regsym(&YL,"<"))));
  fun_A_430 = YPmet(FUNCODEREF(fun_A_430),YPpair(CHKREF(YLfloG),YPpair(CHKREF(YLfloG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YA = CALL2(CHKREF(YPdefine_method),((BOUNDP(YA) != YPfalse)
    ? CHKREF(YA)
    : YPfalse),fun_A_430)), (regsym(&YA,"+"))));
  fun___431 = YPmet(FUNCODEREF(fun___431),YPpair(CHKREF(YLfloG),YPpair(CHKREF(YLfloG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Y_ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Y_) != YPfalse)
    ? CHKREF(Y_)
    : YPfalse),fun___431)), (regsym(&Y_,"-"))));
  fun_T_432 = YPmet(FUNCODEREF(fun_T_432),YPpair(CHKREF(YLfloG),YPpair(CHKREF(YLfloG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YT = CALL2(CHKREF(YPdefine_method),((BOUNDP(YT) != YPfalse)
    ? CHKREF(YT)
    : YPfalse),fun_T_432)), (regsym(&YT,"*"))));
  fun_S_433 = YPmet(FUNCODEREF(fun_S_433),YPpair(CHKREF(YLfloG),YPpair(CHKREF(YLfloG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YS = CALL2(CHKREF(YPdefine_method),((BOUNDP(YS) != YPfalse)
    ? CHKREF(YS)
    : YPfalse),fun_S_433)), (regsym(&YS,"/"))));
  fun_truncateS_434 = YPmet(FUNCODEREF(fun_truncateS_434),YPpair(CHKREF(YLfloG),YPpair(CHKREF(YLfloG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YtruncateS = CALL2(CHKREF(YPdefine_method),((BOUNDP(YtruncateS) != YPfalse)
    ? CHKREF(YtruncateS)
    : YPfalse),fun_truncateS_434)), (regsym(&YtruncateS,"truncate/"))));
  lit_178 = YPPsym((P)"num-to-str");
  lit_179 = YPint((P)0);
  lit_180 = YPint((P)-1);
  lit_181 = YPint((P)1);
  lit_182 = YPsb((P)"");
  lit_183 = YPint((P)1);
  lit_184 = YPint((P)0);
  lit_185 = YPint((P)0);
  lit_186 = YPsb((P)".0");
  lit_187 = YPsb((P)"0.");
  lit_188 = YPint((P)0);
  lit_189 = YPsb((P)".");
  lit_190 = YPsb((P)"0.0000000000000");
  lit_191 = YPint((P)0);
  lit_192 = YPint((P)2);
  lit_193 = YPint((P)0);
  lit_194 = YPsb((P)"-");
  fun_loop_435 = YPmet(FUNCODEREF(fun_loop_435),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_num_to_str_436 = YPmet(FUNCODEREF(fun_num_to_str_436),YPpair(CHKREF(YLfloG),Ynil),YPtrue,YPint((P)1),ENVNUL); 
  (((Ynum_to_str = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ynum_to_str) != YPfalse)
    ? CHKREF(Ynum_to_str)
    : YPfalse),fun_num_to_str_436)), (regsym(&Ynum_to_str,"num-to-str"))));
  lit_195 = YPint((P)0);
  fun_emptyQ_437 = YPmet(FUNCODEREF(fun_emptyQ_437),YPpair(CHKREF(YLcolG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YemptyQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(YemptyQ) != YPfalse)
    ? CHKREF(YemptyQ)
    : YPfalse),fun_emptyQ_437)), (regsym(&YemptyQ,"empty?"))));
  fun_empty_438 = YPmet(FUNCODEREF(fun_empty_438),YPpair(CHKREF(YLcolG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yempty = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yempty) != YPfalse)
    ? CHKREF(Yempty)
    : YPfalse),fun_empty_438)), (regsym(&Yempty,"empty"))));
  fun_default_439 = YPmet(FUNCODEREF(fun_default_439),YPpair(CHKREF(YLcolG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ydefault = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydefault) != YPfalse)
    ? CHKREF(Ydefault)
    : YPfalse),fun_default_439)), (regsym(&Ydefault,"default"))));
  fun_eq_440 = YPmet(FUNCODEREF(fun_eq_440),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_E_441 = YPmet(FUNCODEREF(fun_E_441),YPpair(CHKREF(YLcolG),YPpair(CHKREF(YLcolG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YE = CALL2(CHKREF(YPdefine_method),((BOUNDP(YE) != YPfalse)
    ? CHKREF(YE)
    : YPfalse),fun_E_441)), (regsym(&YE,"="))));
  fun_fab_442 = YPmet(FUNCODEREF(fun_fab_442),YPpair(CHKREF(YLcolG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfab = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfab) != YPfalse)
    ? CHKREF(Yfab)
    : YPfalse),fun_fab_442)), (regsym(&Yfab,"fab"))));
  fun_as_443 = YPmet(FUNCODEREF(fun_as_443),YPpair(CHKREF(YLcolG),YPpair(CHKREF(YLcolG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yas = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yas) != YPfalse)
    ? CHKREF(Yas)
    : YPfalse),fun_as_443)), (regsym(&Yas,"as"))));
  fun_rep_444 = YPmet(FUNCODEREF(fun_rep_444),YPpair(CHKREF(YLoptsG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_do_key_vals_445 = YPmet(FUNCODEREF(fun_do_key_vals_445),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLoptsG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ydo_key_vals = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydo_key_vals) != YPfalse)
    ? CHKREF(Ydo_key_vals)
    : YPfalse),fun_do_key_vals_445)), (regsym(&Ydo_key_vals,"do-key-vals"))));
  fun_446 = YPmet(FUNCODEREF(fun_446),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_fabs_447 = YPmet(FUNCODEREF(fun_fabs_447),YPpair(CHKREF(YLcolG),Ynil),YPtrue,YPint((P)1),ENVNUL); 
  (((Yfabs = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfabs) != YPfalse)
    ? CHKREF(Yfabs)
    : YPfalse),fun_fabs_447)), (regsym(&Yfabs,"fabs"))));
  fun_in_448 = YPmet(FUNCODEREF(fun_in_448),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_alter_449 = YPmet(FUNCODEREF(fun_alter_449),YPpair(CHKREF(YLcolG),YPpair(CHKREF(YLcolG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yalter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yalter) != YPfalse)
    ? CHKREF(Yalter)
    : YPfalse),fun_alter_449)), (regsym(&Yalter,"alter"))));
  fun_in_450 = YPmet(FUNCODEREF(fun_in_450),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_fill_451 = YPmet(FUNCODEREF(fun_fill_451),YPpair(CHKREF(YLcolG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfill = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfill) != YPfalse)
    ? CHKREF(Yfill)
    : YPfalse),fun_fill_451)), (regsym(&Yfill,"fill"))));
  fun_fnd_452 = YPmet(FUNCODEREF(fun_fnd_452),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_anyQ_453 = YPmet(FUNCODEREF(fun_anyQ_453),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLcolG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YanyQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(YanyQ) != YPfalse)
    ? CHKREF(YanyQ)
    : YPfalse),fun_anyQ_453)), (regsym(&YanyQ,"any?"))));
  fun_fnd_454 = YPmet(FUNCODEREF(fun_fnd_454),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_any2Q_455 = YPmet(FUNCODEREF(fun_any2Q_455),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLcolG),YPpair(CHKREF(YLcolG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yany2Q = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yany2Q) != YPfalse)
    ? CHKREF(Yany2Q)
    : YPfalse),fun_any2Q_455)), (regsym(&Yany2Q,"any2?"))));
  fun_fnd_456 = YPmet(FUNCODEREF(fun_fnd_456),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_allQ_457 = YPmet(FUNCODEREF(fun_allQ_457),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLcolG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YallQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(YallQ) != YPfalse)
    ? CHKREF(YallQ)
    : YPfalse),fun_allQ_457)), (regsym(&YallQ,"all?"))));
  fun_fnd_458 = YPmet(FUNCODEREF(fun_fnd_458),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_all2Q_459 = YPmet(FUNCODEREF(fun_all2Q_459),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLcolG),YPpair(CHKREF(YLcolG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yall2Q = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yall2Q) != YPfalse)
    ? CHKREF(Yall2Q)
    : YPfalse),fun_all2Q_459)), (regsym(&Yall2Q,"all2?"))));
  fun_red_460 = YPmet(FUNCODEREF(fun_red_460),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_reduce_461 = YPmet(FUNCODEREF(fun_reduce_461),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLcolG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yreduce = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yreduce) != YPfalse)
    ? CHKREF(Yreduce)
    : YPfalse),fun_reduce_461)), (regsym(&Yreduce,"reduce"))));
  fun_red_462 = YPmet(FUNCODEREF(fun_red_462),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_reduceA_463 = YPmet(FUNCODEREF(fun_reduceA_463),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLcolG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YreduceA = CALL2(CHKREF(YPdefine_method),((BOUNDP(YreduceA) != YPfalse)
    ? CHKREF(YreduceA)
    : YPfalse),fun_reduceA_463)), (regsym(&YreduceA,"reduce+"))));
  fun_fnd_464 = YPmet(FUNCODEREF(fun_fnd_464),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_find_key_465 = YPmet(FUNCODEREF(fun_find_key_465),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLcolG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfind_key = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfind_key) != YPfalse)
    ? CHKREF(Yfind_key)
    : YPfalse),fun_find_key_465)), (regsym(&Yfind_key,"find-key"))));
  fun_con_466 = YPmet(FUNCODEREF(fun_con_466),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_map_467 = YPmet(FUNCODEREF(fun_map_467),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLcolG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ymap = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymap) != YPfalse)
    ? CHKREF(Ymap)
    : YPfalse),fun_map_467)), (regsym(&Ymap,"map"))));
  fun_lop_468 = YPmet(FUNCODEREF(fun_lop_468),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_do_469 = YPmet(FUNCODEREF(fun_do_469),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLcolG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ydo = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydo) != YPfalse)
    ? CHKREF(Ydo)
    : YPfalse),fun_do_469)), (regsym(&Ydo,"do"))));
  fun_con_470 = YPmet(FUNCODEREF(fun_con_470),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  fun_map2_471 = YPmet(FUNCODEREF(fun_map2_471),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLcolG),YPpair(CHKREF(YLcolG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Ymap2 = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymap2) != YPfalse)
    ? CHKREF(Ymap2)
    : YPfalse),fun_map2_471)), (regsym(&Ymap2,"map2"))));
  fun_lop_472 = YPmet(FUNCODEREF(fun_lop_472),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_do2_473 = YPmet(FUNCODEREF(fun_do2_473),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLcolG),YPpair(CHKREF(YLcolG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Ydo2 = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydo2) != YPfalse)
    ? CHKREF(Ydo2)
    : YPfalse),fun_do2_473)), (regsym(&Ydo2,"do2"))));
  fun_con_474 = YPmet(FUNCODEREF(fun_con_474),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_map_keyed_475 = YPmet(FUNCODEREF(fun_map_keyed_475),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLcolG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ymap_keyed = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymap_keyed) != YPfalse)
    ? CHKREF(Ymap_keyed)
    : YPfalse),fun_map_keyed_475)), (regsym(&Ymap_keyed,"map-keyed"))));
  fun_lop_476 = YPmet(FUNCODEREF(fun_lop_476),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_do_keyed_477 = YPmet(FUNCODEREF(fun_do_keyed_477),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLcolG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ydo_keyed = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydo_keyed) != YPfalse)
    ? CHKREF(Ydo_keyed)
    : YPfalse),fun_do_keyed_477)), (regsym(&Ydo_keyed,"do-keyed"))));
  fun_478 = YPmet(FUNCODEREF(fun_478),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_memQ_479 = YPmet(FUNCODEREF(fun_memQ_479),YPpair(CHKREF(YLcolG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YmemQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(YmemQ) != YPfalse)
    ? CHKREF(YmemQ)
    : YPfalse),fun_memQ_479)), (regsym(&YmemQ,"mem?"))));
  (((YLbagG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLcolG),(P)Ynil),Ynil,Ynil)), (regsym(&YLbagG,"<bag>"))));
  (((YLmapG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLcolG),(P)Ynil),Ynil,Ynil)), (regsym(&YLmapG,"<map>"))));
  (((YLassocsG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmapG),(P)Ynil),Ynil,Ynil)), (regsym(&YLassocsG,"<assocs>"))));
  fun_assocs_test_480 = YPmet(FUNCODEREF(fun_assocs_test_480),YPpair(CHKREF(YLassocsG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yassocs_test = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yassocs_test) != YPfalse)
    ? CHKREF(Yassocs_test)
    : YPfalse),fun_assocs_test_480)), (regsym(&Yassocs_test,"assocs-test"))));
  fun_assocs_test_setter_481 = YPmet(FUNCODEREF(fun_assocs_test_setter_481),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLassocsG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yassocs_test_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yassocs_test_setter) != YPfalse)
    ? CHKREF(Yassocs_test_setter)
    : YPfalse),fun_assocs_test_setter_481)), (regsym(&Yassocs_test_setter,"assocs-test-setter"))));
  fun_482 = YPmet(FUNCODEREF(fun_482),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLassocsG),CHKREF(Yassocs_test),CHKREF(Yassocs_test_setter),CHKREF(YLfunG),fun_482));
  fun_assocs_keys_483 = YPmet(FUNCODEREF(fun_assocs_keys_483),YPpair(CHKREF(YLassocsG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yassocs_keys = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yassocs_keys) != YPfalse)
    ? CHKREF(Yassocs_keys)
    : YPfalse),fun_assocs_keys_483)), (regsym(&Yassocs_keys,"assocs-keys"))));
  fun_assocs_keys_setter_484 = YPmet(FUNCODEREF(fun_assocs_keys_setter_484),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLassocsG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yassocs_keys_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yassocs_keys_setter) != YPfalse)
    ? CHKREF(Yassocs_keys_setter)
    : YPfalse),fun_assocs_keys_setter_484)), (regsym(&Yassocs_keys_setter,"assocs-keys-setter"))));
  fun_485 = YPmet(FUNCODEREF(fun_485),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLassocsG),CHKREF(Yassocs_keys),CHKREF(Yassocs_keys_setter),CHKREF(YLlstG),fun_485));
  fun_assocs_vals_486 = YPmet(FUNCODEREF(fun_assocs_vals_486),YPpair(CHKREF(YLassocsG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yassocs_vals = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yassocs_vals) != YPfalse)
    ? CHKREF(Yassocs_vals)
    : YPfalse),fun_assocs_vals_486)), (regsym(&Yassocs_vals,"assocs-vals"))));
  fun_assocs_vals_setter_487 = YPmet(FUNCODEREF(fun_assocs_vals_setter_487),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLassocsG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yassocs_vals_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yassocs_vals_setter) != YPfalse)
    ? CHKREF(Yassocs_vals_setter)
    : YPfalse),fun_assocs_vals_setter_487)), (regsym(&Yassocs_vals_setter,"assocs-vals-setter"))));
  fun_488 = YPmet(FUNCODEREF(fun_488),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLassocsG),CHKREF(Yassocs_vals),CHKREF(Yassocs_vals_setter),CHKREF(YLlstG),fun_488));
  fun_fab_489 = YPmet(FUNCODEREF(fun_fab_489),YPpair(CHKREF(YLassocsG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfab = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfab) != YPfalse)
    ? CHKREF(Yfab)
    : YPfalse),fun_fab_489)), (regsym(&Yfab,"fab"))));
  fun_len_490 = YPmet(FUNCODEREF(fun_len_490),YPpair(CHKREF(YLassocsG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ylen = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ylen) != YPfalse)
    ? CHKREF(Ylen)
    : YPfalse),fun_len_490)), (regsym(&Ylen,"len"))));
  fun_fnd_491 = YPmet(FUNCODEREF(fun_fnd_491),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_elt_492 = YPmet(FUNCODEREF(fun_elt_492),YPpair(CHKREF(YLassocsG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yelt = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yelt) != YPfalse)
    ? CHKREF(Yelt)
    : YPfalse),fun_elt_492)), (regsym(&Yelt,"elt"))));
  fun_fnd_493 = YPmet(FUNCODEREF(fun_fnd_493),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_elt_setter_494 = YPmet(FUNCODEREF(fun_elt_setter_494),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLassocsG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yelt_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yelt_setter) != YPfalse)
    ? CHKREF(Yelt_setter)
    : YPfalse),fun_elt_setter_494)), (regsym(&Yelt_setter,"elt-setter"))));
  fun_as_495 = YPmet(FUNCODEREF(fun_as_495),YPpair(CHKREF(YLseqG),YPpair(CHKREF(YLseqG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yas = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yas) != YPfalse)
    ? CHKREF(Yas)
    : YPfalse),fun_as_495)), (regsym(&Yas,"as"))));
  lit_196 = YPint((P)0);
  fun_1st_496 = YPmet(FUNCODEREF(fun_1st_496),YPpair(CHKREF(YLseqG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Y1st = CALL2(CHKREF(YPdefine_method),((BOUNDP(Y1st) != YPfalse)
    ? CHKREF(Y1st)
    : YPfalse),fun_1st_496)), (regsym(&Y1st,"1st"))));
  lit_197 = YPint((P)1);
  fun_2nd_497 = YPmet(FUNCODEREF(fun_2nd_497),YPpair(CHKREF(YLseqG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Y2nd = CALL2(CHKREF(YPdefine_method),((BOUNDP(Y2nd) != YPfalse)
    ? CHKREF(Y2nd)
    : YPfalse),fun_2nd_497)), (regsym(&Y2nd,"2nd"))));
  lit_198 = YPint((P)2);
  fun_3rd_498 = YPmet(FUNCODEREF(fun_3rd_498),YPpair(CHKREF(YLseqG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Y3rd = CALL2(CHKREF(YPdefine_method),((BOUNDP(Y3rd) != YPfalse)
    ? CHKREF(Y3rd)
    : YPfalse),fun_3rd_498)), (regsym(&Y3rd,"3rd"))));
  lit_199 = YPint((P)1);
  fun_last_499 = YPmet(FUNCODEREF(fun_last_499),YPpair(CHKREF(YLseqG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ylast = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ylast) != YPfalse)
    ? CHKREF(Ylast)
    : YPfalse),fun_last_499)), (regsym(&Ylast,"last"))));
  (((Yadd = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),YPpair(CHKREF(YLseqG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),Ynil,YPfalse)), (regsym(&Yadd,"add"))));
  fun_addX_500 = YPmet(FUNCODEREF(fun_addX_500),YPpair(CHKREF(YLseqG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YaddX = CALL2(CHKREF(YPdefine_method),((BOUNDP(YaddX) != YPfalse)
    ? CHKREF(YaddX)
    : YPfalse),fun_addX_500)), (regsym(&YaddX,"add!"))));
  fun_push_501 = YPmet(FUNCODEREF(fun_push_501),YPpair(CHKREF(YLseqG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ypush = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ypush) != YPfalse)
    ? CHKREF(Ypush)
    : YPfalse),fun_push_501)), (regsym(&Ypush,"push"))));
  fun_pos_502 = YPmet(FUNCODEREF(fun_pos_502),YPpair(CHKREF(YLseqG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ypos = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ypos) != YPfalse)
    ? CHKREF(Ypos)
    : YPfalse),fun_pos_502)), (regsym(&Ypos,"pos"))));
  fun_in_503 = YPmet(FUNCODEREF(fun_in_503),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_into_504 = YPmet(FUNCODEREF(fun_into_504),YPpair(CHKREF(YLseqG),YPpair(CHKREF(YLseqG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil)))),YPfalse,YPint((P)4),ENVNUL); 
  (((Yinto = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yinto) != YPfalse)
    ? CHKREF(Yinto)
    : YPfalse),fun_into_504)), (regsym(&Yinto,"into"))));
  fun_con_505 = YPmet(FUNCODEREF(fun_con_505),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_rev_506 = YPmet(FUNCODEREF(fun_rev_506),YPpair(CHKREF(YLseqG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yrev = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yrev) != YPfalse)
    ? CHKREF(Yrev)
    : YPfalse),fun_rev_506)), (regsym(&Yrev,"rev"))));
  fun_con_y_507 = YPmet(FUNCODEREF(fun_con_y_507),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_con_x_508 = YPmet(FUNCODEREF(fun_con_x_508),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_cat2_509 = YPmet(FUNCODEREF(fun_cat2_509),YPpair(CHKREF(YLseqG),YPpair(CHKREF(YLseqG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ycat2 = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycat2) != YPfalse)
    ? CHKREF(Ycat2)
    : YPfalse),fun_cat2_509)), (regsym(&Ycat2,"cat2"))));
  fun_cat_510 = YPmet(FUNCODEREF(fun_cat_510),YPpair(CHKREF(YLseqG),Ynil),YPtrue,YPint((P)1),ENVNUL); 
  (((Ycat = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycat) != YPfalse)
    ? CHKREF(Ycat)
    : YPfalse),fun_cat_510)), (regsym(&Ycat,"cat"))));
  fun_catX_511 = YPmet(FUNCODEREF(fun_catX_511),YPpair(CHKREF(YLseqG),Ynil),YPtrue,YPint((P)1),ENVNUL); 
  (((YcatX = CALL2(CHKREF(YPdefine_method),((BOUNDP(YcatX) != YPfalse)
    ? CHKREF(YcatX)
    : YPfalse),fun_catX_511)), (regsym(&YcatX,"cat!"))));
  fun_find_tail_512 = YPmet(FUNCODEREF(fun_find_tail_512),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_connect_513 = YPmet(FUNCODEREF(fun_connect_513),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_find_result_514 = YPmet(FUNCODEREF(fun_find_result_514),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_catX_515 = YPmet(FUNCODEREF(fun_catX_515),YPpair(CHKREF(YLlstG),Ynil),YPtrue,YPint((P)1),ENVNUL); 
  (((YcatX = CALL2(CHKREF(YPdefine_method),((BOUNDP(YcatX) != YPfalse)
    ? CHKREF(YcatX)
    : YPfalse),fun_catX_515)), (regsym(&YcatX,"cat!"))));
  lit_200 = YPint((P)1);
  lit_201 = YPint((P)0);
  fun_con_x_516 = YPmet(FUNCODEREF(fun_con_x_516),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  fun_sub_517 = YPmet(FUNCODEREF(fun_sub_517),YPpair(CHKREF(YLseqG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Ysub = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysub) != YPfalse)
    ? CHKREF(Ysub)
    : YPfalse),fun_sub_517)), (regsym(&Ysub,"sub"))));
  fun_con_518 = YPmet(FUNCODEREF(fun_con_518),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_pick_519 = YPmet(FUNCODEREF(fun_pick_519),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLseqG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ypick = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ypick) != YPfalse)
    ? CHKREF(Ypick)
    : YPfalse),fun_pick_519)), (regsym(&Ypick,"pick"))));
  fun_520 = YPmet(FUNCODEREF(fun_520),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_del_dups_521 = YPmet(FUNCODEREF(fun_del_dups_521),YPpair(CHKREF(YLseqG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ydel_dups = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydel_dups) != YPfalse)
    ? CHKREF(Ydel_dups)
    : YPfalse),fun_del_dups_521)), (regsym(&Ydel_dups,"del-dups"))));
  fun_522 = YPmet(FUNCODEREF(fun_522),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_del_523 = YPmet(FUNCODEREF(fun_del_523),YPpair(CHKREF(YLseqG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ydel = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydel) != YPfalse)
    ? CHKREF(Ydel)
    : YPfalse),fun_del_523)), (regsym(&Ydel,"del"))));
  lit_202 = YPsb((P)"");
  lit_203 = YPsb((P)" ");
  lit_204 = YPsb((P)"");
  fun_524 = YPmet(FUNCODEREF(fun_524),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_vals_to_str_525 = YPmet(FUNCODEREF(fun_vals_to_str_525),YPpair(CHKREF(YLseqG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yvals_to_str = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yvals_to_str) != YPfalse)
    ? CHKREF(Yvals_to_str)
    : YPfalse),fun_vals_to_str_525)), (regsym(&Yvals_to_str,"vals-to-str"))));
  lit_205 = YPsb((P)"(");
  lit_206 = YPsb((P)")");
  fun_to_str_526 = YPmet(FUNCODEREF(fun_to_str_526),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yto_str = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yto_str) != YPfalse)
    ? CHKREF(Yto_str)
    : YPfalse),fun_to_str_526)), (regsym(&Yto_str,"to-str"))));
  fun_pair_527 = YPmet(FUNCODEREF(fun_pair_527),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ypair = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ypair) != YPfalse)
    ? CHKREF(Ypair)
    : YPfalse),fun_pair_527)), (regsym(&Ypair,"pair"))));
  lit_207 = YPint((P)0);
  lit_208 = YPint((P)1);
  fun_fab_528 = YPmet(FUNCODEREF(fun_fab_528),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_fab_529 = YPmet(FUNCODEREF(fun_fab_529),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfab = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfab) != YPfalse)
    ? CHKREF(Yfab)
    : YPfalse),fun_fab_529)), (regsym(&Yfab,"fab"))));
  fun_as_530 = YPmet(FUNCODEREF(fun_as_530),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yas = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yas) != YPfalse)
    ? CHKREF(Yas)
    : YPfalse),fun_as_530)), (regsym(&Yas,"as"))));
  fun_empty_531 = YPmet(FUNCODEREF(fun_empty_531),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yempty = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yempty) != YPfalse)
    ? CHKREF(Yempty)
    : YPfalse),fun_empty_531)), (regsym(&Yempty,"empty"))));
  lit_209 = YPint((P)0);
  lit_210 = YPint((P)1);
  lit_211 = YPint((P)1);
  fun_build_532 = YPmet(FUNCODEREF(fun_build_532),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_lst_533 = YPmet(FUNCODEREF(fun_lst_533),Ynil,YPtrue,YPint((P)0),ENVNUL); 
  (((Ylst = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ylst) != YPfalse)
    ? CHKREF(Ylst)
    : YPfalse),fun_lst_533)), (regsym(&Ylst,"lst"))));
  fun_fabs_534 = YPmet(FUNCODEREF(fun_fabs_534),YPpair(CHKREF(YLlstG),Ynil),YPtrue,YPint((P)1),ENVNUL); 
  (((Yfabs = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfabs) != YPfalse)
    ? CHKREF(Yfabs)
    : YPfalse),fun_fabs_534)), (regsym(&Yfabs,"fabs"))));
  lit_212 = YPint((P)1);
  lit_213 = YPint((P)0);
  fun_sum_535 = YPmet(FUNCODEREF(fun_sum_535),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_len_536 = YPmet(FUNCODEREF(fun_len_536),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ylen = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ylen) != YPfalse)
    ? CHKREF(Ylen)
    : YPfalse),fun_len_536)), (regsym(&Ylen,"len"))));
  lit_214 = YPint((P)1);
  lit_215 = YPint((P)0);
  fun_fnd_537 = YPmet(FUNCODEREF(fun_fnd_537),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_elt_538 = YPmet(FUNCODEREF(fun_elt_538),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yelt = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yelt) != YPfalse)
    ? CHKREF(Yelt)
    : YPfalse),fun_elt_538)), (regsym(&Yelt,"elt"))));
  lit_216 = YPint((P)1);
  lit_217 = YPint((P)0);
  fun_fnd_539 = YPmet(FUNCODEREF(fun_fnd_539),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_elt_setter_540 = YPmet(FUNCODEREF(fun_elt_setter_540),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLintG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yelt_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yelt_setter) != YPfalse)
    ? CHKREF(Yelt_setter)
    : YPfalse),fun_elt_setter_540)), (regsym(&Yelt_setter,"elt-setter"))));
  fun_add_541 = YPmet(FUNCODEREF(fun_add_541),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yadd = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yadd) != YPfalse)
    ? CHKREF(Yadd)
    : YPfalse),fun_add_541)), (regsym(&Yadd,"add"))));
  fun_loop_542 = YPmet(FUNCODEREF(fun_loop_542),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_revX_543 = YPmet(FUNCODEREF(fun_revX_543),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YrevX = CALL2(CHKREF(YPdefine_method),((BOUNDP(YrevX) != YPfalse)
    ? CHKREF(YrevX)
    : YPfalse),fun_revX_543)), (regsym(&YrevX,"rev!"))));
  fun_assq_544 = YPmet(FUNCODEREF(fun_assq_544),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yassq = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yassq) != YPfalse)
    ? CHKREF(Yassq)
    : YPfalse),fun_assq_544)), (regsym(&Yassq,"assq"))));
  fun_fnd_545 = YPmet(FUNCODEREF(fun_fnd_545),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_last_546 = YPmet(FUNCODEREF(fun_last_546),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ylast = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ylast) != YPfalse)
    ? CHKREF(Ylast)
    : YPfalse),fun_last_546)), (regsym(&Ylast,"last"))));
  fun_ini_state_547 = YPmet(FUNCODEREF(fun_ini_state_547),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yini_state = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yini_state) != YPfalse)
    ? CHKREF(Yini_state)
    : YPfalse),fun_ini_state_547)), (regsym(&Yini_state,"ini-state"))));
  fun_fin_stateQ_548 = YPmet(FUNCODEREF(fun_fin_stateQ_548),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfin_stateQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfin_stateQ) != YPfalse)
    ? CHKREF(Yfin_stateQ)
    : YPfalse),fun_fin_stateQ_548)), (regsym(&Yfin_stateQ,"fin-state?"))));
  fun_nxt_state_549 = YPmet(FUNCODEREF(fun_nxt_state_549),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ynxt_state = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ynxt_state) != YPfalse)
    ? CHKREF(Ynxt_state)
    : YPfalse),fun_nxt_state_549)), (regsym(&Ynxt_state,"nxt-state"))));
  fun_now_elt_550 = YPmet(FUNCODEREF(fun_now_elt_550),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ynow_elt = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ynow_elt) != YPfalse)
    ? CHKREF(Ynow_elt)
    : YPfalse),fun_now_elt_550)), (regsym(&Ynow_elt,"now-elt"))));
  fun_now_elt_setter_551 = YPmet(FUNCODEREF(fun_now_elt_setter_551),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Ynow_elt_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ynow_elt_setter) != YPfalse)
    ? CHKREF(Ynow_elt_setter)
    : YPfalse),fun_now_elt_setter_551)), (regsym(&Ynow_elt_setter,"now-elt-setter"))));
  lit_218 = YPint((P)1);
  lit_219 = YPint((P)0);
  fun_fnd_552 = YPmet(FUNCODEREF(fun_fnd_552),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_now_key_553 = YPmet(FUNCODEREF(fun_now_key_553),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ynow_key = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ynow_key) != YPfalse)
    ? CHKREF(Ynow_key)
    : YPfalse),fun_now_key_553)), (regsym(&Ynow_key,"now-key"))));
  fun_copy_state_554 = YPmet(FUNCODEREF(fun_copy_state_554),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ycopy_state = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycopy_state) != YPfalse)
    ? CHKREF(Ycopy_state)
    : YPfalse),fun_copy_state_554)), (regsym(&Ycopy_state,"copy-state"))));
  (((Ytup = CHKREF(Ylst)), (regsym(&Ytup,"tup"))));
  lit_220 = YPint((P)0);
  fun_ini_state_555 = YPmet(FUNCODEREF(fun_ini_state_555),YPpair(CHKREF(YLflatG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yini_state = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yini_state) != YPfalse)
    ? CHKREF(Yini_state)
    : YPfalse),fun_ini_state_555)), (regsym(&Yini_state,"ini-state"))));
  fun_fin_stateQ_556 = YPmet(FUNCODEREF(fun_fin_stateQ_556),YPpair(CHKREF(YLflatG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfin_stateQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfin_stateQ) != YPfalse)
    ? CHKREF(Yfin_stateQ)
    : YPfalse),fun_fin_stateQ_556)), (regsym(&Yfin_stateQ,"fin-state?"))));
  lit_221 = YPint((P)1);
  fun_nxt_state_557 = YPmet(FUNCODEREF(fun_nxt_state_557),YPpair(CHKREF(YLflatG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ynxt_state = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ynxt_state) != YPfalse)
    ? CHKREF(Ynxt_state)
    : YPfalse),fun_nxt_state_557)), (regsym(&Ynxt_state,"nxt-state"))));
  fun_now_elt_558 = YPmet(FUNCODEREF(fun_now_elt_558),YPpair(CHKREF(YLflatG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ynow_elt = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ynow_elt) != YPfalse)
    ? CHKREF(Ynow_elt)
    : YPfalse),fun_now_elt_558)), (regsym(&Ynow_elt,"now-elt"))));
  fun_now_elt_setter_559 = YPmet(FUNCODEREF(fun_now_elt_setter_559),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLflatG),YPpair(CHKREF(YLintG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Ynow_elt_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ynow_elt_setter) != YPfalse)
    ? CHKREF(Ynow_elt_setter)
    : YPfalse),fun_now_elt_setter_559)), (regsym(&Ynow_elt_setter,"now-elt-setter"))));
  fun_now_key_560 = YPmet(FUNCODEREF(fun_now_key_560),YPpair(CHKREF(YLflatG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ynow_key = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ynow_key) != YPfalse)
    ? CHKREF(Ynow_key)
    : YPfalse),fun_now_key_560)), (regsym(&Ynow_key,"now-key"))));
  fun_copy_state_561 = YPmet(FUNCODEREF(fun_copy_state_561),YPpair(CHKREF(YLflatG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ycopy_state = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycopy_state) != YPfalse)
    ? CHKREF(Ycopy_state)
    : YPfalse),fun_copy_state_561)), (regsym(&Ycopy_state,"copy-state"))));
  fun_empty_562 = YPmet(FUNCODEREF(fun_empty_562),YPpair(CHKREF(YLvecG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yempty = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yempty) != YPfalse)
    ? CHKREF(Yempty)
    : YPfalse),fun_empty_562)), (regsym(&Yempty,"empty"))));
  Yvec = YPmet(FUNCODEREF(Yvec),Ynil,YPtrue,YPint((P)0),ENVNUL); 
  (((Yvec = Yvec), (regsym(&Yvec,"vec"))));
  fun_fabs_564 = YPmet(FUNCODEREF(fun_fabs_564),YPpair(CHKREF(YLvecG),Ynil),YPtrue,YPint((P)1),ENVNUL); 
  (((Yfabs = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfabs) != YPfalse)
    ? CHKREF(Yfabs)
    : YPfalse),fun_fabs_564)), (regsym(&Yfabs,"fabs"))));
  fun_fab_565 = YPmet(FUNCODEREF(fun_fab_565),YPpair(CHKREF(YLvecG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfab = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfab) != YPfalse)
    ? CHKREF(Yfab)
    : YPfalse),fun_fab_565)), (regsym(&Yfab,"fab"))));
  fun_len_566 = YPmet(FUNCODEREF(fun_len_566),YPpair(CHKREF(YLvecG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ylen = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ylen) != YPfalse)
    ? CHKREF(Ylen)
    : YPfalse),fun_len_566)), (regsym(&Ylen,"len"))));
  fun_elt_567 = YPmet(FUNCODEREF(fun_elt_567),YPpair(CHKREF(YLvecG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yelt = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yelt) != YPfalse)
    ? CHKREF(Yelt)
    : YPfalse),fun_elt_567)), (regsym(&Yelt,"elt"))));
  fun_elt_setter_568 = YPmet(FUNCODEREF(fun_elt_setter_568),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLvecG),YPpair(CHKREF(YLintG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yelt_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yelt_setter) != YPfalse)
    ? CHKREF(Yelt_setter)
    : YPfalse),fun_elt_setter_568)), (regsym(&Yelt_setter,"elt-setter"))));
  lit_222 = YPsb((P)"#(");
  lit_223 = YPsb((P)")");
  fun_to_str_569 = YPmet(FUNCODEREF(fun_to_str_569),YPpair(CHKREF(YLvecG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yto_str = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yto_str) != YPfalse)
    ? CHKREF(Yto_str)
    : YPfalse),fun_to_str_569)), (regsym(&Yto_str,"to-str"))));
  (((YLsvecG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLflatG),(P)Ynil),Ynil,Ynil)), (regsym(&YLsvecG,"<svec>"))));
  fun_svec_len_570 = YPmet(FUNCODEREF(fun_svec_len_570),YPpair(CHKREF(YLsvecG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysvec_len = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysvec_len) != YPfalse)
    ? CHKREF(Ysvec_len)
    : YPfalse),fun_svec_len_570)), (regsym(&Ysvec_len,"svec-len"))));
  fun_svec_len_setter_571 = YPmet(FUNCODEREF(fun_svec_len_setter_571),YPpair(CHKREF(YLvecG),YPpair(CHKREF(YLsvecG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ysvec_len_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysvec_len_setter) != YPfalse)
    ? CHKREF(Ysvec_len_setter)
    : YPfalse),fun_svec_len_setter_571)), (regsym(&Ysvec_len_setter,"svec-len-setter"))));
  lit_224 = YPint((P)0);
  fun_572 = YPmet(FUNCODEREF(fun_572),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLsvecG),CHKREF(Ysvec_len),CHKREF(Ysvec_len_setter),CHKREF(YLvecG),fun_572));
  fun_svec_dat_573 = YPmet(FUNCODEREF(fun_svec_dat_573),YPpair(CHKREF(YLsvecG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysvec_dat = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysvec_dat) != YPfalse)
    ? CHKREF(Ysvec_dat)
    : YPfalse),fun_svec_dat_573)), (regsym(&Ysvec_dat,"svec-dat"))));
  fun_svec_dat_setter_574 = YPmet(FUNCODEREF(fun_svec_dat_setter_574),YPpair(CHKREF(YLvecG),YPpair(CHKREF(YLsvecG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ysvec_dat_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysvec_dat_setter) != YPfalse)
    ? CHKREF(Ysvec_dat_setter)
    : YPfalse),fun_svec_dat_setter_574)), (regsym(&Ysvec_dat_setter,"svec-dat-setter"))));
  lit_225 = CALLN(Yvec, 0);
  fun_575 = YPmet(FUNCODEREF(fun_575),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLsvecG),CHKREF(Ysvec_dat),CHKREF(Ysvec_dat_setter),CHKREF(YLvecG),fun_575));
  fun_empty_576 = YPmet(FUNCODEREF(fun_empty_576),YPpair(CHKREF(YLsvecG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yempty = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yempty) != YPfalse)
    ? CHKREF(Yempty)
    : YPfalse),fun_empty_576)), (regsym(&Yempty,"empty"))));
  fun_svec_577 = YPmet(FUNCODEREF(fun_svec_577),Ynil,YPtrue,YPint((P)0),ENVNUL); 
  (((Ysvec = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysvec) != YPfalse)
    ? CHKREF(Ysvec)
    : YPfalse),fun_svec_577)), (regsym(&Ysvec,"svec"))));
  fun_fabs_578 = YPmet(FUNCODEREF(fun_fabs_578),YPpair(CHKREF(YLsvecG),Ynil),YPtrue,YPint((P)1),ENVNUL); 
  (((Yfabs = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfabs) != YPfalse)
    ? CHKREF(Yfabs)
    : YPfalse),fun_fabs_578)), (regsym(&Yfabs,"fabs"))));
  fun_fab_579 = YPmet(FUNCODEREF(fun_fab_579),YPpair(CHKREF(YLsvecG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfab = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfab) != YPfalse)
    ? CHKREF(Yfab)
    : YPfalse),fun_fab_579)), (regsym(&Yfab,"fab"))));
  fun_len_580 = YPmet(FUNCODEREF(fun_len_580),YPpair(CHKREF(YLsvecG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ylen = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ylen) != YPfalse)
    ? CHKREF(Ylen)
    : YPfalse),fun_len_580)), (regsym(&Ylen,"len"))));
  lit_226 = YPint((P)1);
  fun_fill_581 = YPmet(FUNCODEREF(fun_fill_581),YPpair(CHKREF(YLintG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_len_setter_582 = YPmet(FUNCODEREF(fun_len_setter_582),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLsvecG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ylen_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ylen_setter) != YPfalse)
    ? CHKREF(Ylen_setter)
    : YPfalse),fun_len_setter_582)), (regsym(&Ylen_setter,"len-setter"))));
  fun_elt_583 = YPmet(FUNCODEREF(fun_elt_583),YPpair(CHKREF(YLsvecG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yelt = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yelt) != YPfalse)
    ? CHKREF(Yelt)
    : YPfalse),fun_elt_583)), (regsym(&Yelt,"elt"))));
  fun_elt_setter_584 = YPmet(FUNCODEREF(fun_elt_setter_584),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLsvecG),YPpair(CHKREF(YLintG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yelt_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yelt_setter) != YPfalse)
    ? CHKREF(Yelt_setter)
    : YPfalse),fun_elt_setter_584)), (regsym(&Yelt_setter,"elt-setter"))));
  fun_addX_585 = YPmet(FUNCODEREF(fun_addX_585),YPpair(CHKREF(YLsvecG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YaddX = CALL2(CHKREF(YPdefine_method),((BOUNDP(YaddX) != YPfalse)
    ? CHKREF(YaddX)
    : YPfalse),fun_addX_585)), (regsym(&YaddX,"add!"))));
  fun_push_586 = YPmet(FUNCODEREF(fun_push_586),YPpair(CHKREF(YLsvecG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ypush = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ypush) != YPfalse)
    ? CHKREF(Ypush)
    : YPfalse),fun_push_586)), (regsym(&Ypush,"push"))));
  lit_227 = YPint((P)1);
  fun_pop_587 = YPmet(FUNCODEREF(fun_pop_587),YPpair(CHKREF(YLsvecG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ypop = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ypop) != YPfalse)
    ? CHKREF(Ypop)
    : YPfalse),fun_pop_587)), (regsym(&Ypop,"pop"))));
  lit_228 = YPsb((P)"#[");
  lit_229 = YPsb((P)"]");
  fun_to_str_588 = YPmet(FUNCODEREF(fun_to_str_588),YPpair(CHKREF(YLsvecG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yto_str = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yto_str) != YPfalse)
    ? CHKREF(Yto_str)
    : YPfalse),fun_to_str_588)), (regsym(&Yto_str,"to-str"))));
  fun_empty_589 = YPmet(FUNCODEREF(fun_empty_589),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yempty = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yempty) != YPfalse)
    ? CHKREF(Yempty)
    : YPfalse),fun_empty_589)), (regsym(&Yempty,"empty"))));
  lit_230 = YPchr((P)32);
  fun_default_590 = YPmet(FUNCODEREF(fun_default_590),YPpair(CHKREF(YLcolG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ydefault = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydefault) != YPfalse)
    ? CHKREF(Ydefault)
    : YPfalse),fun_default_590)), (regsym(&Ydefault,"default"))));
  fun_fab_591 = YPmet(FUNCODEREF(fun_fab_591),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfab = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfab) != YPfalse)
    ? CHKREF(Yfab)
    : YPfalse),fun_fab_591)), (regsym(&Yfab,"fab"))));
  fun_str_592 = YPmet(FUNCODEREF(fun_str_592),Ynil,YPtrue,YPint((P)0),ENVNUL); 
  (((Ystr = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ystr) != YPfalse)
    ? CHKREF(Ystr)
    : YPfalse),fun_str_592)), (regsym(&Ystr,"str"))));
  fun_fabs_593 = YPmet(FUNCODEREF(fun_fabs_593),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),ENVNUL); 
  (((Yfabs = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfabs) != YPfalse)
    ? CHKREF(Yfabs)
    : YPfalse),fun_fabs_593)), (regsym(&Yfabs,"fabs"))));
  fun_len_594 = YPmet(FUNCODEREF(fun_len_594),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ylen = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ylen) != YPfalse)
    ? CHKREF(Ylen)
    : YPfalse),fun_len_594)), (regsym(&Ylen,"len"))));
  fun_elt_595 = YPmet(FUNCODEREF(fun_elt_595),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yelt = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yelt) != YPfalse)
    ? CHKREF(Yelt)
    : YPfalse),fun_elt_595)), (regsym(&Yelt,"elt"))));
  fun_elt_setter_596 = YPmet(FUNCODEREF(fun_elt_setter_596),YPpair(CHKREF(YLchrG),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLintG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yelt_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yelt_setter) != YPfalse)
    ? CHKREF(Yelt_setter)
    : YPfalse),fun_elt_setter_596)), (regsym(&Yelt_setter,"elt-setter"))));
  fun_to_str_597 = YPmet(FUNCODEREF(fun_to_str_597),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yto_str = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yto_str) != YPfalse)
    ? CHKREF(Yto_str)
    : YPfalse),fun_to_str_597)), (regsym(&Yto_str,"to-str"))));
  fun_as_598 = YPmet(FUNCODEREF(fun_as_598),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLsymG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yas = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yas) != YPfalse)
    ? CHKREF(Yas)
    : YPfalse),fun_as_598)), (regsym(&Yas,"as"))));
  fun_as_599 = YPmet(FUNCODEREF(fun_as_599),YPpair(CHKREF(YLsymG),YPpair(CHKREF(YLstrG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yas = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yas) != YPfalse)
    ? CHKREF(Yas)
    : YPfalse),fun_as_599)), (regsym(&Yas,"as"))));
  fun_L_600 = YPmet(FUNCODEREF(fun_L_600),YPpair(CHKREF(YLsymG),YPpair(CHKREF(YLsymG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YL = CALL2(CHKREF(YPdefine_method),((BOUNDP(YL) != YPfalse)
    ? CHKREF(YL)
    : YPfalse),fun_L_600)), (regsym(&YL,"<"))));
  fun_to_str_601 = YPmet(FUNCODEREF(fun_to_str_601),YPpair(CHKREF(YLsymG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yto_str = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yto_str) != YPfalse)
    ? CHKREF(Yto_str)
    : YPfalse),fun_to_str_601)), (regsym(&Yto_str,"to-str"))));
  fun_identity_602 = YPmet(FUNCODEREF(fun_identity_602),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yidentity = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yidentity) != YPfalse)
    ? CHKREF(Yidentity)
    : YPfalse),fun_identity_602)), (regsym(&Yidentity,"identity"))));
  fun_603 = YPmet(FUNCODEREF(fun_603),Ynil,YPtrue,YPint((P)0),ENVNUL); 
  fun_compose_604 = YPmet(FUNCODEREF(fun_compose_604),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLfunG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ycompose = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycompose) != YPfalse)
    ? CHKREF(Ycompose)
    : YPfalse),fun_compose_604)), (regsym(&Ycompose,"compose"))));
  fun_605 = YPmet(FUNCODEREF(fun_605),Ynil,YPtrue,YPint((P)0),ENVNUL); 
  fun_rcurry_606 = YPmet(FUNCODEREF(fun_rcurry_606),YPpair(CHKREF(YLfunG),Ynil),YPtrue,YPint((P)1),ENVNUL); 
  (((Yrcurry = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yrcurry) != YPfalse)
    ? CHKREF(Yrcurry)
    : YPfalse),fun_rcurry_606)), (regsym(&Yrcurry,"rcurry"))));
  fun_607 = YPmet(FUNCODEREF(fun_607),Ynil,YPtrue,YPint((P)0),ENVNUL); 
  fun_curry_608 = YPmet(FUNCODEREF(fun_curry_608),YPpair(CHKREF(YLfunG),Ynil),YPtrue,YPint((P)1),ENVNUL); 
  (((Ycurry = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycurry) != YPfalse)
    ? CHKREF(Ycurry)
    : YPfalse),fun_curry_608)), (regsym(&Ycurry,"curry"))));
  fun_609 = YPmet(FUNCODEREF(fun_609),Ynil,YPtrue,YPint((P)0),ENVNUL); 
  fun_always_610 = YPmet(FUNCODEREF(fun_always_610),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yalways = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yalways) != YPfalse)
    ? CHKREF(Yalways)
    : YPfalse),fun_always_610)), (regsym(&Yalways,"always"))));
  (((YLconditionG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLanyG),(P)Ynil),Ynil,Ynil)), (regsym(&YLconditionG,"<condition>"))));
  fun_default_handler_611 = YPmet(FUNCODEREF(fun_default_handler_611),YPpair(CHKREF(YLconditionG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ydefault_handler = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydefault_handler) != YPfalse)
    ? CHKREF(Ydefault_handler)
    : YPfalse),fun_default_handler_611)), (regsym(&Ydefault_handler,"default-handler"))));
  (((YLsimple_conditionG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLconditionG),(P)Ynil),Ynil,Ynil)), (regsym(&YLsimple_conditionG,"<simple-condition>"))));
  fun_condition_message_612 = YPmet(FUNCODEREF(fun_condition_message_612),YPpair(CHKREF(YLsimple_conditionG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ycondition_message = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycondition_message) != YPfalse)
    ? CHKREF(Ycondition_message)
    : YPfalse),fun_condition_message_612)), (regsym(&Ycondition_message,"condition-message"))));
  fun_condition_message_setter_613 = YPmet(FUNCODEREF(fun_condition_message_setter_613),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLsimple_conditionG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ycondition_message_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycondition_message_setter) != YPfalse)
    ? CHKREF(Ycondition_message_setter)
    : YPfalse),fun_condition_message_setter_613)), (regsym(&Ycondition_message_setter,"condition-message-setter"))));
  fun_614 = YPmet(FUNCODEREF(fun_614),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLsimple_conditionG),CHKREF(Ycondition_message),CHKREF(Ycondition_message_setter),CHKREF(YLstrG),fun_614));
  fun_condition_arguments_615 = YPmet(FUNCODEREF(fun_condition_arguments_615),YPpair(CHKREF(YLsimple_conditionG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ycondition_arguments = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycondition_arguments) != YPfalse)
    ? CHKREF(Ycondition_arguments)
    : YPfalse),fun_condition_arguments_615)), (regsym(&Ycondition_arguments,"condition-arguments"))));
  fun_condition_arguments_setter_616 = YPmet(FUNCODEREF(fun_condition_arguments_setter_616),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLsimple_conditionG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ycondition_arguments_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycondition_arguments_setter) != YPfalse)
    ? CHKREF(Ycondition_arguments_setter)
    : YPfalse),fun_condition_arguments_setter_616)), (regsym(&Ycondition_arguments_setter,"condition-arguments-setter"))));
  fun_617 = YPmet(FUNCODEREF(fun_617),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLsimple_conditionG),CHKREF(Ycondition_arguments),CHKREF(Ycondition_arguments_setter),CHKREF(YLstrG),fun_617));
  (((YLserious_conditionG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLconditionG),(P)Ynil),Ynil,Ynil)), (regsym(&YLserious_conditionG,"<serious-condition>"))));
  fun_default_handler_618 = YPmet(FUNCODEREF(fun_default_handler_618),YPpair(CHKREF(YLserious_conditionG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ydefault_handler = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydefault_handler) != YPfalse)
    ? CHKREF(Ydefault_handler)
    : YPfalse),fun_default_handler_618)), (regsym(&Ydefault_handler,"default-handler"))));
  (((YLerrorG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLserious_conditionG),(P)Ynil),Ynil,Ynil)), (regsym(&YLerrorG,"<error>"))));
  (((YLsimple_errorG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLerrorG),(P)(P)YPpair((P)CHKREF(YLsimple_conditionG),(P)Ynil)),Ynil,Ynil)), (regsym(&YLsimple_errorG,"<simple-error>"))));
  (((YTcurrent_handlersT = Ynil), (regsym(&YTcurrent_handlersT,"*current-handlers*"))));
  (((YLhandlerG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLanyG),(P)Ynil),Ynil,Ynil)), (regsym(&YLhandlerG,"<handler>"))));
  fun_handler_function_619 = YPmet(FUNCODEREF(fun_handler_function_619),YPpair(CHKREF(YLhandlerG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yhandler_function = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yhandler_function) != YPfalse)
    ? CHKREF(Yhandler_function)
    : YPfalse),fun_handler_function_619)), (regsym(&Yhandler_function,"handler-function"))));
  fun_handler_function_setter_620 = YPmet(FUNCODEREF(fun_handler_function_setter_620),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLhandlerG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yhandler_function_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yhandler_function_setter) != YPfalse)
    ? CHKREF(Yhandler_function_setter)
    : YPfalse),fun_handler_function_setter_620)), (regsym(&Yhandler_function_setter,"handler-function-setter"))));
  fun_621 = YPmet(FUNCODEREF(fun_621),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLhandlerG),CHKREF(Yhandler_function),CHKREF(Yhandler_function_setter),CHKREF(YLfunG),fun_621));
  Ymake_handler = YPmet(FUNCODEREF(Ymake_handler),YPpair(CHKREF(YLfunG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ymake_handler = Ymake_handler), (regsym(&Ymake_handler,"make-handler"))));
  Yhandler_matchesQ = YPmet(FUNCODEREF(Yhandler_matchesQ),YPpair(CHKREF(YLhandlerG),YPpair(CHKREF(YLconditionG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yhandler_matchesQ = Yhandler_matchesQ), (regsym(&Yhandler_matchesQ,"handler-matches?"))));
  fun_624 = YPmet(FUNCODEREF(fun_624),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_Uhandler_functionU_625 = YPmet(FUNCODEREF(fun_Uhandler_functionU_625),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_626 = YPmet(FUNCODEREF(fun_626),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_627 = YPmet(FUNCODEREF(fun_627),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_628 = YPmet(FUNCODEREF(fun_628),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (YPfalse);
  fun_630 = YPmet(FUNCODEREF(fun_630),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_search_631 = YPmet(FUNCODEREF(fun_search_631),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_sig_632 = YPmet(FUNCODEREF(fun_sig_632),YPpair(CHKREF(YLconditionG),Ynil),YPtrue,YPint((P)1),ENVNUL); 
  (((Ysig = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysig) != YPfalse)
    ? CHKREF(Ysig)
    : YPfalse),fun_sig_632)), (regsym(&Ysig,"sig"))));
  fun_sig_633 = YPmet(FUNCODEREF(fun_sig_633),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),ENVNUL); 
  (((Ysig = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysig) != YPfalse)
    ? CHKREF(Ysig)
    : YPfalse),fun_sig_633)), (regsym(&Ysig,"sig"))));
  fun_error_634 = YPmet(FUNCODEREF(fun_error_634),YPpair(CHKREF(YLsimple_errorG),Ynil),YPtrue,YPint((P)1),ENVNUL); 
  (((Yerror = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yerror) != YPfalse)
    ? CHKREF(Yerror)
    : YPfalse),fun_error_634)), (regsym(&Yerror,"error"))));
  fun_error_635 = YPmet(FUNCODEREF(fun_error_635),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),ENVNUL); 
  (((Yerror = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yerror) != YPfalse)
    ? CHKREF(Yerror)
    : YPfalse),fun_error_635)), (regsym(&Yerror,"error"))));
  lit_231 = YPsb((P)"%= CALLED WITH %= ARGUMENTS EXPECTED %=");
  Ywrong_number_arguments_error = YPmet(FUNCODEREF(Ywrong_number_arguments_error),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ywrong_number_arguments_error = Ywrong_number_arguments_error), (regsym(&Ywrong_number_arguments_error,"wrong-number-arguments-error"))));
  lit_232 = YPsb((P)"UNKNOWN FUNCTION %= CALLED");
  Yunknown_function_error = YPmet(FUNCODEREF(Yunknown_function_error),YPpair(CHKREF(YLfunG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yunknown_function_error = Yunknown_function_error), (regsym(&Yunknown_function_error,"unknown-function-error"))));
  lit_233 = YPsb((P)"TYPE ERROR %= SHOULD BE A %=");
  Ytype_error = YPmet(FUNCODEREF(Ytype_error),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ytype_error = Ytype_error), (regsym(&Ytype_error,"type-error"))));
  Ylocative_value = YPmet(FUNCODEREF(Ylocative_value),YPpair(CHKREF(YLlocG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ylocative_value = Ylocative_value), (regsym(&Ylocative_value,"locative-value"))));
  Ylocative_value_setter = YPmet(FUNCODEREF(Ylocative_value_setter),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlocG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ylocative_value_setter = Ylocative_value_setter), (regsym(&Ylocative_value_setter,"locative-value-setter"))));
  Yapp_filename = YPmet(FUNCODEREF(Yapp_filename),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Yapp_filename = Yapp_filename), (regsym(&Yapp_filename,"app-filename"))));
  Yapp_args = YPmet(FUNCODEREF(Yapp_args),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Yapp_args = Yapp_args), (regsym(&Yapp_args,"app-args"))));
  fun_sym_name_643 = YPmet(FUNCODEREF(fun_sym_name_643),YPpair(CHKREF(YLsymG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysym_name = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysym_name) != YPfalse)
    ? CHKREF(Ysym_name)
    : YPfalse),fun_sym_name_643)), (regsym(&Ysym_name,"sym-name"))));
  Yaddress_of = YPmet(FUNCODEREF(Yaddress_of),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yaddress_of = Yaddress_of), (regsym(&Yaddress_of,"address-of"))));
  lit_234 = YPpair(YPint((P)3), YPpair(YPint((P)5), YPpair(YPint((P)11), YPpair(YPint((P)17), YPpair(YPint((P)29), YPpair(YPint((P)41), YPpair(YPint((P)47), YPpair(YPint((P)59), YPpair(YPint((P)71), YPpair(YPint((P)101), YPpair(YPint((P)107), YPpair(YPint((P)137), YPpair(YPint((P)149), YPpair(YPint((P)167), YPpair(YPint((P)179), YPpair(YPint((P)191), YPpair(YPint((P)197), YPpair(YPint((P)227), YPpair(YPint((P)239), YPpair(YPint((P)269), YPpair(YPint((P)281), YPpair(YPint((P)311), YPpair(YPint((P)347), YPpair(YPint((P)419), YPpair(YPint((P)431), YPpair(YPint((P)461), YPpair(YPint((P)521), YPpair(YPint((P)569), YPpair(YPint((P)599), YPpair(YPint((P)617), YPpair(YPint((P)641), YPpair(YPint((P)659), YPpair(YPint((P)809), YPpair(YPint((P)839), YPpair(YPint((P)881), YPpair(YPint((P)1019), YPpair(YPint((P)1049), YPpair(YPint((P)1091), YPpair(YPint((P)1151), YPpair(YPint((P)1229), YPpair(YPint((P)1277), YPpair(YPint((P)1319), YPpair(YPint((P)1367), YPpair(YPint((P)1427), YPpair(YPint((P)1481), YPpair(YPint((P)1607), YPpair(YPint((P)1667), YPpair(YPint((P)1721), YPpair(YPint((P)1787), YPpair(YPint((P)1871), YPpair(YPint((P)1931), YPpair(YPint((P)1997), YPpair(YPint((P)2081), YPpair(YPint((P)2141), YPpair(YPint((P)2207), YPpair(YPint((P)2267), YPpair(YPint((P)2339), YPpair(YPint((P)2549), YPpair(YPint((P)2657), YPpair(YPint((P)2729), YPpair(YPint((P)2801), YPpair(YPint((P)2969), YPpair(YPint((P)3119), YPpair(YPint((P)3251), YPpair(YPint((P)3359), YPpair(YPint((P)3461), YPpair(YPint((P)3557), YPpair(YPint((P)3671), YPpair(YPint((P)3767), YPpair(YPint((P)3917), YPpair(YPint((P)4019), YPpair(YPint((P)4127), YPpair(YPint((P)4241), YPpair(YPint((P)4421), YPpair(YPint((P)4547), YPpair(YPint((P)4721), YPpair(YPint((P)4931), YPpair(YPint((P)5099), YPpair(YPint((P)5231), YPpair(YPint((P)5417), YPpair(YPint((P)5639), YPpair(YPint((P)5849), YPpair(YPint((P)6089), YPpair(YPint((P)6269), YPpair(YPint((P)6449), YPpair(YPint((P)6659), YPpair(YPint((P)6827), YPpair(YPint((P)7127), YPpair(YPint((P)7307), YPpair(YPint((P)7547), YPpair(YPint((P)7757), YPpair(YPint((P)8009), YPpair(YPint((P)8219), YPpair(YPint((P)8429), YPpair(YPint((P)8819), YPpair(YPint((P)9041), YPpair(YPint((P)9281), YPpair(YPint((P)9629), YPpair(YPint((P)9929), YPpair(YPint((P)10271), YPpair(YPint((P)10529), YPpair(YPint((P)10859), YPpair(YPint((P)11159), YPpair(YPint((P)11447), YPpair(YPint((P)11777), YPpair(YPint((P)12107), YPpair(YPint((P)12539), YPpair(YPint((P)12917), YPpair(YPint((P)13337), YPpair(YPint((P)13679), YPpair(YPint((P)14081), YPpair(YPint((P)14447), YPpair(YPint((P)14867), YPpair(YPint((P)15269), YPpair(YPint((P)15731), YPpair(YPint((P)16139), YPpair(YPint((P)16631), YPpair(YPint((P)17189), YPpair(YPint((P)17657), YPpair(YPint((P)18119), YPpair(YPint((P)18911), YPpair(YPint((P)19421), YPpair(YPint((P)19961), YPpair(YPint((P)20477), YPpair(YPint((P)21011), YPpair(YPint((P)21557), YPpair(YPint((P)22109), YPpair(YPint((P)22697), YPpair(YPint((P)23291), YPpair(YPint((P)23909), YPpair(YPint((P)24917), YPpair(YPint((P)25577), YPpair(YPint((P)26249), YPpair(YPint((P)26951), YPpair(YPint((P)27689), YPpair(YPint((P)28409), YPpair(YPint((P)29129), YPpair(YPint((P)29879), YPpair(YPint((P)30839), YPpair(YPint((P)31721), YPpair(YPint((P)32531), YPpair(YPint((P)33347), YPpair(YPint((P)34211), YPpair(YPint((P)35081), YPpair(YPint((P)36011), YPpair(YPint((P)36929), YPpair(YPint((P)37991), YPpair(YPint((P)39041), YPpair(YPint((P)40037), YPpair(YPint((P)41141), YPpair(YPint((P)42179), YPpair(YPint((P)43319), YPpair(YPint((P)44531), YPpair(YPint((P)45821), YPpair(YPint((P)47057), YPpair(YPint((P)48311), YPpair(YPint((P)49529), YPpair(YPint((P)50891), YPpair(YPint((P)52181), YPpair(YPint((P)53549), YPpair(YPint((P)54917), YPpair(YPint((P)56477), YPpair(YPint((P)57899), YPpair(YPint((P)59357), YPpair(YPint((P)60887), YPpair(YPint((P)62927), YPpair(YPint((P)64577), YPpair(YPint((P)66359), YPpair(YPint((P)68111), YPpair(YPint((P)69827), YPpair(YPint((P)71711), YPpair(YPint((P)73607), YPpair(YPint((P)75539), YPpair(YPint((P)77477), YPpair(YPint((P)79559), YPpair(YPint((P)81551), YPpair(YPint((P)83639), YPpair(YPint((P)85817), YPpair(YPint((P)88001), YPpair(YPint((P)90371), YPpair(YPint((P)92639), YPpair(YPint((P)95087), YPpair(YPint((P)97499), YPpair(YPint((P)99989), YPpair(YPint((P)102497), YPpair(YPint((P)105227), YPpair(YPint((P)108011), YPpair(YPint((P)110729), YPpair(YPint((P)113537), YPpair(YPint((P)116531), YPpair(YPint((P)119549), YPpair(YPint((P)122597), YPpair(YPint((P)125789), YPpair(YPint((P)128939), YPpair(YPint((P)132329), YPpair(YPint((P)135647), YPpair(YPint((P)139121), YPpair(YPint((P)142607), YPpair(YPint((P)146297), YPpair(YPint((P)149969), YPpair(YPint((P)153887), YPpair(YPint((P)157769), YPpair(YPint((P)161729), YPpair(YPint((P)166301), YPpair(YPint((P)170537), YPpair(YPint((P)174929), YPpair(YPint((P)179381), YPpair(YPint((P)183917), YPpair(YPint((P)188831), YPpair(YPint((P)193601), YPpair(YPint((P)198461), YPpair(YPint((P)203429), YPpair(YPint((P)208589), YPpair(YPint((P)213947), YPpair(YPint((P)219311), YPpair(YPint((P)224909), YPpair(YPint((P)230561), YPpair(YPint((P)236477), YPpair(YPint((P)242447), YPpair(YPint((P)248639), YPpair(YPint((P)254927), YPpair(YPint((P)261431), YPpair(YPint((P)268517), YPpair(YPint((P)275321), YPpair(YPint((P)282239), YPpair(YPint((P)289841), YPpair(YPint((P)297467), YPpair(YPint((P)304979), YPpair(YPint((P)312617), YPpair(YPint((P)320561), YPpair(YPint((P)328589), YPpair(YPint((P)336827), YPpair(YPint((P)345461), YPpair(YPint((P)354251), YPpair(YPint((P)363149), YPpair(YPint((P)372269), YPpair(YPint((P)381629), YPpair(YPint((P)391217), YPpair(YPint((P)401309), YPpair(YPint((P)411527), YPpair(YPint((P)422087), YPpair(YPint((P)432659), YPpair(YPint((P)443561), YPpair(YPint((P)454709), YPpair(YPint((P)466181), YPpair(YPint((P)478067), YPpair(YPint((P)490031), YPpair(YPint((P)502499), YPpair(YPint((P)515087), YPpair(YPint((P)527981), YPpair(YPint((P)541361), YPpair(YPint((P)555041), YPpair(YPint((P)569081), YPpair(YPint((P)583337), YPpair(YPint((P)598049), YPpair(YPint((P)613007), YPpair(YPint((P)628679), YPpair(YPint((P)644489), YPpair(YPint((P)660617), YPpair(YPint((P)677231), YPpair(YPint((P)694259), YPpair(YPint((P)711707), YPpair(YPint((P)729557), YPpair(YPint((P)747827), YPpair(YPint((P)766541), YPpair(YPint((P)785777), YPpair(YPint((P)805499), YPpair(YPint((P)825827), YPpair(YPint((P)846749), YPpair(YPint((P)868121), YPpair(YPint((P)889871), YPpair(YPint((P)912449), YPpair(YPint((P)935591), YPpair(YPint((P)959207), YPpair(YPint((P)983327), Ynil)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
  (((YTtwin_primesT = CALL2(CHKREF(Yas),CHKREF(YLvecG),lit_234)), (regsym(&YTtwin_primesT,"*twin-primes*"))));
  (((YLsimple_table_vectorG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLanyG),(P)Ynil),Ynil,Ynil)), (regsym(&YLsimple_table_vectorG,"<simple-table-vector>"))));
  fun_Pvacated_645 = YPmet(FUNCODEREF(fun_Pvacated_645),YPpair(CHKREF(YLsimple_table_vectorG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YPvacated = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPvacated) != YPfalse)
    ? CHKREF(YPvacated)
    : YPfalse),fun_Pvacated_645)), (regsym(&YPvacated,"%vacated"))));
  fun_Pvacated_setter_646 = YPmet(FUNCODEREF(fun_Pvacated_setter_646),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLsimple_table_vectorG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YPvacated_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPvacated_setter) != YPfalse)
    ? CHKREF(YPvacated_setter)
    : YPfalse),fun_Pvacated_setter_646)), (regsym(&YPvacated_setter,"%vacated-setter"))));
  lit_235 = YPint((P)0);
  fun_647 = YPmet(FUNCODEREF(fun_647),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLsimple_table_vectorG),CHKREF(YPvacated),CHKREF(YPvacated_setter),CHKREF(YLintG),fun_647));
  fun_Pprimary_modulus_648 = YPmet(FUNCODEREF(fun_Pprimary_modulus_648),YPpair(CHKREF(YLsimple_table_vectorG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YPprimary_modulus = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPprimary_modulus) != YPfalse)
    ? CHKREF(YPprimary_modulus)
    : YPfalse),fun_Pprimary_modulus_648)), (regsym(&YPprimary_modulus,"%primary-modulus"))));
  fun_Pprimary_modulus_setter_649 = YPmet(FUNCODEREF(fun_Pprimary_modulus_setter_649),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLsimple_table_vectorG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YPprimary_modulus_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPprimary_modulus_setter) != YPfalse)
    ? CHKREF(YPprimary_modulus_setter)
    : YPfalse),fun_Pprimary_modulus_setter_649)), (regsym(&YPprimary_modulus_setter,"%primary-modulus-setter"))));
  fun_650 = YPmet(FUNCODEREF(fun_650),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLsimple_table_vectorG),CHKREF(YPprimary_modulus),CHKREF(YPprimary_modulus_setter),CHKREF(YLintG),fun_650));
  fun_Psecondary_modulus_651 = YPmet(FUNCODEREF(fun_Psecondary_modulus_651),YPpair(CHKREF(YLsimple_table_vectorG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YPsecondary_modulus = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPsecondary_modulus) != YPfalse)
    ? CHKREF(YPsecondary_modulus)
    : YPfalse),fun_Psecondary_modulus_651)), (regsym(&YPsecondary_modulus,"%secondary-modulus"))));
  fun_Psecondary_modulus_setter_652 = YPmet(FUNCODEREF(fun_Psecondary_modulus_setter_652),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLsimple_table_vectorG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YPsecondary_modulus_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPsecondary_modulus_setter) != YPfalse)
    ? CHKREF(YPsecondary_modulus_setter)
    : YPfalse),fun_Psecondary_modulus_setter_652)), (regsym(&YPsecondary_modulus_setter,"%secondary-modulus-setter"))));
  fun_653 = YPmet(FUNCODEREF(fun_653),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLsimple_table_vectorG),CHKREF(YPsecondary_modulus),CHKREF(YPsecondary_modulus_setter),CHKREF(YLintG),fun_653));
  fun_Pn_buckets_654 = YPmet(FUNCODEREF(fun_Pn_buckets_654),YPpair(CHKREF(YLsimple_table_vectorG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YPn_buckets = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPn_buckets) != YPfalse)
    ? CHKREF(YPn_buckets)
    : YPfalse),fun_Pn_buckets_654)), (regsym(&YPn_buckets,"%n-buckets"))));
  fun_Pn_buckets_setter_655 = YPmet(FUNCODEREF(fun_Pn_buckets_setter_655),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLsimple_table_vectorG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YPn_buckets_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPn_buckets_setter) != YPfalse)
    ? CHKREF(YPn_buckets_setter)
    : YPfalse),fun_Pn_buckets_setter_655)), (regsym(&YPn_buckets_setter,"%n-buckets-setter"))));
  fun_656 = YPmet(FUNCODEREF(fun_656),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLsimple_table_vectorG),CHKREF(YPn_buckets),CHKREF(YPn_buckets_setter),CHKREF(YLintG),fun_656));
  fun_Pbucket_depth_657 = YPmet(FUNCODEREF(fun_Pbucket_depth_657),YPpair(CHKREF(YLsimple_table_vectorG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YPbucket_depth = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPbucket_depth) != YPfalse)
    ? CHKREF(YPbucket_depth)
    : YPfalse),fun_Pbucket_depth_657)), (regsym(&YPbucket_depth,"%bucket-depth"))));
  fun_Pbucket_depth_setter_658 = YPmet(FUNCODEREF(fun_Pbucket_depth_setter_658),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLsimple_table_vectorG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YPbucket_depth_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPbucket_depth_setter) != YPfalse)
    ? CHKREF(YPbucket_depth_setter)
    : YPfalse),fun_Pbucket_depth_setter_658)), (regsym(&YPbucket_depth_setter,"%bucket-depth-setter"))));
  fun_659 = YPmet(FUNCODEREF(fun_659),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLsimple_table_vectorG),CHKREF(YPbucket_depth),CHKREF(YPbucket_depth_setter),CHKREF(YLintG),fun_659));
  fun_Pdata_660 = YPmet(FUNCODEREF(fun_Pdata_660),YPpair(CHKREF(YLsimple_table_vectorG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YPdata = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPdata) != YPfalse)
    ? CHKREF(YPdata)
    : YPfalse),fun_Pdata_660)), (regsym(&YPdata,"%data"))));
  fun_Pdata_setter_661 = YPmet(FUNCODEREF(fun_Pdata_setter_661),YPpair(CHKREF(YLvecG),YPpair(CHKREF(YLsimple_table_vectorG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YPdata_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPdata_setter) != YPfalse)
    ? CHKREF(YPdata_setter)
    : YPfalse),fun_Pdata_setter_661)), (regsym(&YPdata_setter,"%data-setter"))));
  fun_662 = YPmet(FUNCODEREF(fun_662),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLsimple_table_vectorG),CHKREF(YPdata),CHKREF(YPdata_setter),CHKREF(YLvecG),fun_662));
  fun_Pgc_state_663 = YPmet(FUNCODEREF(fun_Pgc_state_663),YPpair(CHKREF(YLsimple_table_vectorG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YPgc_state = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPgc_state) != YPfalse)
    ? CHKREF(YPgc_state)
    : YPfalse),fun_Pgc_state_663)), (regsym(&YPgc_state,"%gc-state"))));
  fun_Pgc_state_setter_664 = YPmet(FUNCODEREF(fun_Pgc_state_setter_664),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLsimple_table_vectorG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YPgc_state_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPgc_state_setter) != YPfalse)
    ? CHKREF(YPgc_state_setter)
    : YPfalse),fun_Pgc_state_setter_664)), (regsym(&YPgc_state_setter,"%gc-state-setter"))));
  fun_665 = YPmet(FUNCODEREF(fun_665),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLsimple_table_vectorG),CHKREF(YPgc_state),CHKREF(YPgc_state_setter),CHKREF(YLanyG),fun_665));
  Yfab_table_vector = YPmet(FUNCODEREF(Yfab_table_vector),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil)))))),YPfalse,YPint((P)6),ENVNUL); 
  (((Yfab_table_vector = Yfab_table_vector), (regsym(&Yfab_table_vector,"fab-table-vector"))));
  fun_elt_667 = YPmet(FUNCODEREF(fun_elt_667),YPpair(CHKREF(YLsimple_table_vectorG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yelt = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yelt) != YPfalse)
    ? CHKREF(Yelt)
    : YPfalse),fun_elt_667)), (regsym(&Yelt,"elt"))));
  fun_elt_setter_668 = YPmet(FUNCODEREF(fun_elt_setter_668),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLsimple_table_vectorG),YPpair(CHKREF(YLintG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yelt_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yelt_setter) != YPfalse)
    ? CHKREF(Yelt_setter)
    : YPfalse),fun_elt_setter_668)), (regsym(&Yelt_setter,"elt-setter"))));
  lit_236 = YPint((P)0);
  fun_clrX_669 = YPmet(FUNCODEREF(fun_clrX_669),YPpair(CHKREF(YLsimple_table_vectorG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YclrX = CALL2(CHKREF(YPdefine_method),((BOUNDP(YclrX) != YPfalse)
    ? CHKREF(YclrX)
    : YPfalse),fun_clrX_669)), (regsym(&YclrX,"clr!"))));
  (((YTdebug_tablesQT = YPfalse), (regsym(&YTdebug_tablesQT,"*debug-tables?*"))));
  Ytrace = YPmet(FUNCODEREF(Ytrace),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPtrue,YPint((P)2),ENVNUL); 
  (((Ytrace = Ytrace), (regsym(&Ytrace,"trace"))));
  (((YLtabG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmapG),(P)Ynil),Ynil,Ynil)), (regsym(&YLtabG,"<tab>"))));
  fun_table_growth_factor_671 = YPmet(FUNCODEREF(fun_table_growth_factor_671),YPpair(CHKREF(YLtabG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ytable_growth_factor = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ytable_growth_factor) != YPfalse)
    ? CHKREF(Ytable_growth_factor)
    : YPfalse),fun_table_growth_factor_671)), (regsym(&Ytable_growth_factor,"table-growth-factor"))));
  fun_table_growth_factor_setter_672 = YPmet(FUNCODEREF(fun_table_growth_factor_setter_672),YPpair(CHKREF(YLfloG),YPpair(CHKREF(YLtabG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ytable_growth_factor_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ytable_growth_factor_setter) != YPfalse)
    ? CHKREF(Ytable_growth_factor_setter)
    : YPfalse),fun_table_growth_factor_setter_672)), (regsym(&Ytable_growth_factor_setter,"table-growth-factor-setter"))));
  lit_237 = YPflo(FLOINT(2.0000000));
  fun_673 = YPmet(FUNCODEREF(fun_673),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLtabG),CHKREF(Ytable_growth_factor),CHKREF(Ytable_growth_factor_setter),CHKREF(YLfloG),fun_673));
  fun_table_growth_threshold_674 = YPmet(FUNCODEREF(fun_table_growth_threshold_674),YPpair(CHKREF(YLtabG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ytable_growth_threshold = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ytable_growth_threshold) != YPfalse)
    ? CHKREF(Ytable_growth_threshold)
    : YPfalse),fun_table_growth_threshold_674)), (regsym(&Ytable_growth_threshold,"table-growth-threshold"))));
  fun_table_growth_threshold_setter_675 = YPmet(FUNCODEREF(fun_table_growth_threshold_setter_675),YPpair(CHKREF(YLfloG),YPpair(CHKREF(YLtabG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ytable_growth_threshold_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ytable_growth_threshold_setter) != YPfalse)
    ? CHKREF(Ytable_growth_threshold_setter)
    : YPfalse),fun_table_growth_threshold_setter_675)), (regsym(&Ytable_growth_threshold_setter,"table-growth-threshold-setter"))));
  lit_238 = YPflo(FLOINT(0.8000000));
  fun_676 = YPmet(FUNCODEREF(fun_676),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLtabG),CHKREF(Ytable_growth_threshold),CHKREF(Ytable_growth_threshold_setter),CHKREF(YLfloG),fun_676));
  fun_table_shrink_threshold_677 = YPmet(FUNCODEREF(fun_table_shrink_threshold_677),YPpair(CHKREF(YLtabG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ytable_shrink_threshold = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ytable_shrink_threshold) != YPfalse)
    ? CHKREF(Ytable_shrink_threshold)
    : YPfalse),fun_table_shrink_threshold_677)), (regsym(&Ytable_shrink_threshold,"table-shrink-threshold"))));
  fun_table_shrink_threshold_setter_678 = YPmet(FUNCODEREF(fun_table_shrink_threshold_setter_678),YPpair(CHKREF(YLfloG),YPpair(CHKREF(YLtabG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ytable_shrink_threshold_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ytable_shrink_threshold_setter) != YPfalse)
    ? CHKREF(Ytable_shrink_threshold_setter)
    : YPfalse),fun_table_shrink_threshold_setter_678)), (regsym(&Ytable_shrink_threshold_setter,"table-shrink-threshold-setter"))));
  lit_239 = YPflo(FLOINT(0.5000000));
  fun_679 = YPmet(FUNCODEREF(fun_679),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLtabG),CHKREF(Ytable_shrink_threshold),CHKREF(Ytable_shrink_threshold_setter),CHKREF(YLfloG),fun_679));
  fun_Pcount_680 = YPmet(FUNCODEREF(fun_Pcount_680),YPpair(CHKREF(YLtabG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YPcount = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPcount) != YPfalse)
    ? CHKREF(YPcount)
    : YPfalse),fun_Pcount_680)), (regsym(&YPcount,"%count"))));
  fun_Pcount_setter_681 = YPmet(FUNCODEREF(fun_Pcount_setter_681),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLtabG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YPcount_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPcount_setter) != YPfalse)
    ? CHKREF(YPcount_setter)
    : YPfalse),fun_Pcount_setter_681)), (regsym(&YPcount_setter,"%count-setter"))));
  lit_240 = YPint((P)0);
  fun_682 = YPmet(FUNCODEREF(fun_682),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLtabG),CHKREF(YPcount),CHKREF(YPcount_setter),CHKREF(YLintG),fun_682));
  fun_Pvector_683 = YPmet(FUNCODEREF(fun_Pvector_683),YPpair(CHKREF(YLtabG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YPvector = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPvector) != YPfalse)
    ? CHKREF(YPvector)
    : YPfalse),fun_Pvector_683)), (regsym(&YPvector,"%vector"))));
  fun_Pvector_setter_684 = YPmet(FUNCODEREF(fun_Pvector_setter_684),YPpair(CHKREF(YLsimple_table_vectorG),YPpair(CHKREF(YLtabG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YPvector_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPvector_setter) != YPfalse)
    ? CHKREF(YPvector_setter)
    : YPfalse),fun_Pvector_setter_684)), (regsym(&YPvector_setter,"%vector-setter"))));
  fun_685 = YPmet(FUNCODEREF(fun_685),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLtabG),CHKREF(YPvector),CHKREF(YPvector_setter),CHKREF(YLsimple_table_vectorG),fun_685));
  (((Ytable_protocol = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),YPpair(CHKREF(YLtabG),Ynil),YPfalse,YPint((P)1),Ynil,YPfalse)), (regsym(&Ytable_protocol,"table-protocol"))));
  fun_table_protocol_686 = YPmet(FUNCODEREF(fun_table_protocol_686),YPpair(CHKREF(YLtabG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ytable_protocol = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ytable_protocol) != YPfalse)
    ? CHKREF(Ytable_protocol)
    : YPfalse),fun_table_protocol_686)), (regsym(&Ytable_protocol,"table-protocol"))));
  lit_241 = YPsb((P)"empty cell");
  (((YDempty_cell_marker = CALL1(CHKREF(Ylst),lit_241)), (regsym(&YDempty_cell_marker,"$empty-cell-marker"))));
  lit_242 = YPsb((P)"vacated cell");
  (((YDvacated_cell_marker = CALL1(CHKREF(Ylst),lit_242)), (regsym(&YDvacated_cell_marker,"$vacated-cell-marker"))));
  lit_243 = YPint((P)1);
  Yhash_moduli = YPmet(FUNCODEREF(Yhash_moduli),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yhash_moduli = Yhash_moduli), (regsym(&Yhash_moduli,"hash-moduli"))));
  lit_244 = YPint((P)2);
  lit_245 = YPint((P)2);
  fun_fab_688 = YPmet(FUNCODEREF(fun_fab_688),YPpair(CHKREF(YLtabG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfab = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfab) != YPfalse)
    ? CHKREF(Yfab)
    : YPfalse),fun_fab_688)), (regsym(&Yfab,"fab"))));
  lit_246 = YPint((P)2);
  lit_247 = YPint((P)1);
  lit_248 = YPint((P)1);
  lit_249 = YPint((P)0);
  lit_250 = YPint((P)1);
  lit_251 = YPint((P)0);
  lit_252 = YPsb((P)"The table is totally full this shouldn't happen");
  fun_inner_689 = YPmet(FUNCODEREF(fun_inner_689),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_outer_690 = YPmet(FUNCODEREF(fun_outer_690),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_691 = YPmet(FUNCODEREF(fun_691),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_elt_692 = YPmet(FUNCODEREF(fun_elt_692),YPpair(CHKREF(YLtabG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yelt = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yelt) != YPfalse)
    ? CHKREF(Yelt)
    : YPfalse),fun_elt_692)), (regsym(&Yelt,"elt"))));
  lit_253 = YPint((P)2);
  lit_254 = YPint((P)1);
  lit_255 = YPint((P)1);
  lit_256 = YPint((P)1);
  lit_257 = YPint((P)1);
  lit_258 = YPint((P)0);
  lit_259 = YPint((P)1);
  lit_260 = YPint((P)0);
  lit_261 = YPsb((P)"The table is totally full this shouldn't happen");
  fun_inner_693 = YPmet(FUNCODEREF(fun_inner_693),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_outer_694 = YPmet(FUNCODEREF(fun_outer_694),YPpair(CHKREF(YLintG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_695 = YPmet(FUNCODEREF(fun_695),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_elt_setter_696 = YPmet(FUNCODEREF(fun_elt_setter_696),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLtabG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yelt_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yelt_setter) != YPfalse)
    ? CHKREF(Yelt_setter)
    : YPfalse),fun_elt_setter_696)), (regsym(&Yelt_setter,"elt-setter"))));
  lit_262 = YPint((P)2);
  lit_263 = YPint((P)1);
  lit_264 = YPint((P)1);
  lit_265 = YPint((P)1);
  lit_266 = YPint((P)1);
  lit_267 = YPint((P)0);
  lit_268 = YPint((P)1);
  lit_269 = YPint((P)0);
  lit_270 = YPsb((P)"The table is totally full this shouldn't happen");
  fun_inner_697 = YPmet(FUNCODEREF(fun_inner_697),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_outer_698 = YPmet(FUNCODEREF(fun_outer_698),YPpair(CHKREF(YLintG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_699 = YPmet(FUNCODEREF(fun_699),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_del_key_700 = YPmet(FUNCODEREF(fun_del_key_700),YPpair(CHKREF(YLtabG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ydel_key = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydel_key) != YPfalse)
    ? CHKREF(Ydel_key)
    : YPfalse),fun_del_key_700)), (regsym(&Ydel_key,"del-key"))));
  lit_271 = YPint((P)2);
  lit_272 = YPint((P)2);
  lit_273 = YPint((P)1);
  lit_274 = YPint((P)0);
  lit_275 = YPint((P)1);
  lit_276 = YPint((P)0);
  fun_inner_701 = YPmet(FUNCODEREF(fun_inner_701),YPpair(CHKREF(YLintG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_outer_702 = YPmet(FUNCODEREF(fun_outer_702),YPpair(CHKREF(YLintG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_do_703 = YPmet(FUNCODEREF(fun_do_703),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLtabG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ydo = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydo) != YPfalse)
    ? CHKREF(Ydo)
    : YPfalse),fun_do_703)), (regsym(&Ydo,"do"))));
  lit_277 = YPint((P)0);
  fun_del_keys_704 = YPmet(FUNCODEREF(fun_del_keys_704),YPpair(CHKREF(YLtabG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ydel_keys = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydel_keys) != YPfalse)
    ? CHKREF(Ydel_keys)
    : YPfalse),fun_del_keys_704)), (regsym(&Ydel_keys,"del-keys"))));
  fun_len_705 = YPmet(FUNCODEREF(fun_len_705),YPpair(CHKREF(YLtabG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ylen = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ylen) != YPfalse)
    ? CHKREF(Ylen)
    : YPfalse),fun_len_705)), (regsym(&Ylen,"len"))));
  (((YLtab_stateG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLanyG),(P)Ynil),Ynil,Ynil)), (regsym(&YLtab_stateG,"<tab-state>"))));
  fun_Pvector_706 = YPmet(FUNCODEREF(fun_Pvector_706),YPpair(CHKREF(YLtab_stateG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YPvector = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPvector) != YPfalse)
    ? CHKREF(YPvector)
    : YPfalse),fun_Pvector_706)), (regsym(&YPvector,"%vector"))));
  fun_Pvector_setter_707 = YPmet(FUNCODEREF(fun_Pvector_setter_707),YPpair(CHKREF(YLsimple_table_vectorG),YPpair(CHKREF(YLtab_stateG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YPvector_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPvector_setter) != YPfalse)
    ? CHKREF(YPvector_setter)
    : YPfalse),fun_Pvector_setter_707)), (regsym(&YPvector_setter,"%vector-setter"))));
  fun_708 = YPmet(FUNCODEREF(fun_708),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLtab_stateG),CHKREF(YPvector),CHKREF(YPvector_setter),CHKREF(YLsimple_table_vectorG),fun_708));
  fun_Pbucket_709 = YPmet(FUNCODEREF(fun_Pbucket_709),YPpair(CHKREF(YLtab_stateG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YPbucket = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPbucket) != YPfalse)
    ? CHKREF(YPbucket)
    : YPfalse),fun_Pbucket_709)), (regsym(&YPbucket,"%bucket"))));
  fun_Pbucket_setter_710 = YPmet(FUNCODEREF(fun_Pbucket_setter_710),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLtab_stateG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YPbucket_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPbucket_setter) != YPfalse)
    ? CHKREF(YPbucket_setter)
    : YPfalse),fun_Pbucket_setter_710)), (regsym(&YPbucket_setter,"%bucket-setter"))));
  lit_278 = YPint((P)0);
  fun_711 = YPmet(FUNCODEREF(fun_711),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLtab_stateG),CHKREF(YPbucket),CHKREF(YPbucket_setter),CHKREF(YLintG),fun_711));
  fun_Pindex_712 = YPmet(FUNCODEREF(fun_Pindex_712),YPpair(CHKREF(YLtab_stateG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YPindex = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPindex) != YPfalse)
    ? CHKREF(YPindex)
    : YPfalse),fun_Pindex_712)), (regsym(&YPindex,"%index"))));
  fun_Pindex_setter_713 = YPmet(FUNCODEREF(fun_Pindex_setter_713),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLtab_stateG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YPindex_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(YPindex_setter) != YPfalse)
    ? CHKREF(YPindex_setter)
    : YPfalse),fun_Pindex_setter_713)), (regsym(&YPindex_setter,"%index-setter"))));
  lit_279 = YPint((P)0);
  fun_714 = YPmet(FUNCODEREF(fun_714),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLtab_stateG),CHKREF(YPindex),CHKREF(YPindex_setter),CHKREF(YLintG),fun_714));
  lit_280 = YPint((P)0);
  lit_281 = YPint((P)2);
  lit_282 = YPint((P)1);
  lit_283 = YPint((P)0);
  lit_284 = YPint((P)1);
  lit_285 = YPint((P)0);
  fun_inner_715 = YPmet(FUNCODEREF(fun_inner_715),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_outer_716 = YPmet(FUNCODEREF(fun_outer_716),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_717 = YPmet(FUNCODEREF(fun_717),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_ini_state_718 = YPmet(FUNCODEREF(fun_ini_state_718),YPpair(CHKREF(YLtabG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yini_state = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yini_state) != YPfalse)
    ? CHKREF(Yini_state)
    : YPfalse),fun_ini_state_718)), (regsym(&Yini_state,"ini-state"))));
  lit_286 = YPint((P)1);
  lit_287 = YPint((P)1);
  lit_288 = YPint((P)0);
  lit_289 = YPint((P)2);
  lit_290 = YPint((P)1);
  lit_291 = YPint((P)0);
  lit_292 = YPint((P)1);
  lit_293 = YPint((P)0);
  fun_inner_719 = YPmet(FUNCODEREF(fun_inner_719),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_outer_720 = YPmet(FUNCODEREF(fun_outer_720),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_721 = YPmet(FUNCODEREF(fun_721),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_nxt_state_722 = YPmet(FUNCODEREF(fun_nxt_state_722),YPpair(CHKREF(YLtabG),YPpair(CHKREF(YLtab_stateG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ynxt_state = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ynxt_state) != YPfalse)
    ? CHKREF(Ynxt_state)
    : YPfalse),fun_nxt_state_722)), (regsym(&Ynxt_state,"nxt-state"))));
  fun_fin_stateQ_723 = YPmet(FUNCODEREF(fun_fin_stateQ_723),YPpair(CHKREF(YLtabG),YPpair(CHKREF(YLtab_stateG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfin_stateQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfin_stateQ) != YPfalse)
    ? CHKREF(Yfin_stateQ)
    : YPfalse),fun_fin_stateQ_723)), (regsym(&Yfin_stateQ,"fin-state?"))));
  lit_294 = YPint((P)2);
  fun_now_key_724 = YPmet(FUNCODEREF(fun_now_key_724),YPpair(CHKREF(YLtabG),YPpair(CHKREF(YLtab_stateG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ynow_key = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ynow_key) != YPfalse)
    ? CHKREF(Ynow_key)
    : YPfalse),fun_now_key_724)), (regsym(&Ynow_key,"now-key"))));
  lit_295 = YPint((P)2);
  fun_now_elt_725 = YPmet(FUNCODEREF(fun_now_elt_725),YPpair(CHKREF(YLtabG),YPpair(CHKREF(YLtab_stateG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ynow_elt = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ynow_elt) != YPfalse)
    ? CHKREF(Ynow_elt)
    : YPfalse),fun_now_elt_725)), (regsym(&Ynow_elt,"now-elt"))));
  lit_296 = YPint((P)2);
  fun_now_elt_setter_726 = YPmet(FUNCODEREF(fun_now_elt_setter_726),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLtabG),YPpair(CHKREF(YLtab_stateG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Ynow_elt_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ynow_elt_setter) != YPfalse)
    ? CHKREF(Ynow_elt_setter)
    : YPfalse),fun_now_elt_setter_726)), (regsym(&Ynow_elt_setter,"now-elt-setter"))));
  fun_copy_state_727 = YPmet(FUNCODEREF(fun_copy_state_727),YPpair(CHKREF(YLtabG),YPpair(CHKREF(YLtab_stateG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ycopy_state = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycopy_state) != YPfalse)
    ? CHKREF(Ycopy_state)
    : YPfalse),fun_copy_state_727)), (regsym(&Ycopy_state,"copy-state"))));
  lit_297 = YPsb((P)"GROWING TABLE %= OF %=\n");
  lit_298 = YPint((P)0);
  lit_299 = YPint((P)2);
  lit_300 = YPsb((P)"OLD DATA %=\n");
  lit_301 = YPsb((P)"NEW DATA %=\n");
  fun_grow_table_728 = YPmet(FUNCODEREF(fun_grow_table_728),YPpair(CHKREF(YLtabG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ygrow_table = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ygrow_table) != YPfalse)
    ? CHKREF(Ygrow_table)
    : YPfalse),fun_grow_table_728)), (regsym(&Ygrow_table,"grow-table"))));
  lit_302 = YPint((P)2);
  fun_rehash_table_729 = YPmet(FUNCODEREF(fun_rehash_table_729),YPpair(CHKREF(YLtabG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yrehash_table = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yrehash_table) != YPfalse)
    ? CHKREF(Yrehash_table)
    : YPfalse),fun_rehash_table_729)), (regsym(&Yrehash_table,"rehash-table"))));
  lit_303 = YPint((P)2000);
  lit_304 = YPint((P)1);
  lit_305 = YPint((P)5000);
  lit_306 = YPint((P)2);
  lit_307 = YPint((P)15000);
  lit_308 = YPint((P)4);
  lit_309 = YPint((P)50000);
  lit_310 = YPint((P)8);
  lit_311 = YPint((P)250000);
  lit_312 = YPint((P)16);
  lit_313 = YPint((P)32);
  lit_314 = YPint((P)0);
  lit_315 = YPint((P)2);
  lit_316 = YPsb((P)"Not enough primes to compute new table size");
  fun_730 = YPmet(FUNCODEREF(fun_730),YPpair(CHKREF(YLintG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_731 = YPmet(FUNCODEREF(fun_731),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  Ychoose_table_geometry = YPmet(FUNCODEREF(Ychoose_table_geometry),YPpair(CHKREF(YLintG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ychoose_table_geometry = Ychoose_table_geometry), (regsym(&Ychoose_table_geometry,"choose-table-geometry"))));
  lit_317 = YPsb((P)"VISITING (%= %=)\n");
  lit_318 = YPint((P)2);
  lit_319 = YPsb((P)"COPYING TO (%= %=) %=\n");
  lit_320 = YPint((P)1);
  lit_321 = YPint((P)1);
  lit_322 = YPint((P)0);
  lit_323 = YPint((P)1);
  lit_324 = YPint((P)0);
  lit_325 = YPsb((P)"The table is totally full this shouldn't happen");
  fun_inner_733 = YPmet(FUNCODEREF(fun_inner_733),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_outer_734 = YPmet(FUNCODEREF(fun_outer_734),YPpair(CHKREF(YLintG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_735 = YPmet(FUNCODEREF(fun_735),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_736 = YPmet(FUNCODEREF(fun_736),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_copy_to_new_vector_737 = YPmet(FUNCODEREF(fun_copy_to_new_vector_737),YPpair(CHKREF(YLtabG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ycopy_to_new_vector = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycopy_to_new_vector) != YPfalse)
    ? CHKREF(Ycopy_to_new_vector)
    : YPfalse),fun_copy_to_new_vector_737)), (regsym(&Ycopy_to_new_vector,"copy-to-new-vector"))));
  (((YDpermanent_hash_state = YPfalse), (regsym(&YDpermanent_hash_state,"$permanent-hash-state"))));
  Ycurrent_gc_state = YPmet(FUNCODEREF(Ycurrent_gc_state),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Ycurrent_gc_state = Ycurrent_gc_state), (regsym(&Ycurrent_gc_state,"current-gc-state"))));
  fun_id_hash_739 = YPmet(FUNCODEREF(fun_id_hash_739),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yid_hash = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yid_hash) != YPfalse)
    ? CHKREF(Yid_hash)
    : YPfalse),fun_id_hash_739)), (regsym(&Yid_hash,"id-hash"))));
  lit_326 = YPint((P)131);
  lit_327 = YPint((P)149);
  fun_id_hash_740 = YPmet(FUNCODEREF(fun_id_hash_740),YPpair(CHKREF(YLlogG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yid_hash = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yid_hash) != YPfalse)
    ? CHKREF(Yid_hash)
    : YPfalse),fun_id_hash_740)), (regsym(&Yid_hash,"id-hash"))));
  Yrot = YPmet(FUNCODEREF(Yrot),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yrot = Yrot), (regsym(&Yrot,"rot"))));
  lit_328 = YPint((P)15);
  lit_329 = YPint((P)31);
  fun_id_hash_742 = YPmet(FUNCODEREF(fun_id_hash_742),YPpair(CHKREF(YLintG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yid_hash = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yid_hash) != YPfalse)
    ? CHKREF(Yid_hash)
    : YPfalse),fun_id_hash_742)), (regsym(&Yid_hash,"id-hash"))));
  fun_id_hash_743 = YPmet(FUNCODEREF(fun_id_hash_743),YPpair(CHKREF(YLchrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yid_hash = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yid_hash) != YPfalse)
    ? CHKREF(Yid_hash)
    : YPfalse),fun_id_hash_743)), (regsym(&Yid_hash,"id-hash"))));
  lit_330 = YPint((P)89);
  fun_id_hash_744 = YPmet(FUNCODEREF(fun_id_hash_744),YPpair(CHKREF(YLfloG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yid_hash = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yid_hash) != YPfalse)
    ? CHKREF(Yid_hash)
    : YPfalse),fun_id_hash_744)), (regsym(&Yid_hash,"id-hash"))));
  lit_331 = YPint((P)0);
  lit_332 = YPint((P)1);
  lit_333 = YPint((P)6);
  lit_334 = YPint((P)159);
  lit_335 = YPint((P)970747);
  lit_336 = YPint((P)0);
  fun_loop_745 = YPmet(FUNCODEREF(fun_loop_745),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  Ycase_insensitive_string_hash = YPmet(FUNCODEREF(Ycase_insensitive_string_hash),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ycase_insensitive_string_hash = Ycase_insensitive_string_hash), (regsym(&Ycase_insensitive_string_hash,"case-insensitive-string-hash"))));
  lit_337 = YPint((P)0);
  lit_338 = YPint((P)1);
  fun_loop_747 = YPmet(FUNCODEREF(fun_loop_747),YPpair(CHKREF(YLintG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  Ycase_insensitive_string_equal = YPmet(FUNCODEREF(Ycase_insensitive_string_equal),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLstrG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ycase_insensitive_string_equal = Ycase_insensitive_string_equal), (regsym(&Ycase_insensitive_string_equal,"case-insensitive-string-equal"))));
  (((YLstr_tabG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLtabG),(P)Ynil),Ynil,Ynil)), (regsym(&YLstr_tabG,"<str-tab>"))));
  fun_table_protocol_749 = YPmet(FUNCODEREF(fun_table_protocol_749),YPpair(CHKREF(YLstr_tabG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ytable_protocol = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ytable_protocol) != YPfalse)
    ? CHKREF(Ytable_protocol)
    : YPfalse),fun_table_protocol_749)), (regsym(&Ytable_protocol,"table-protocol"))));
  lit_339 = YPint((P)2000);
  (((Ysymbols = CALL2(CHKREF(Yfab),CHKREF(YLstr_tabG),lit_339)), (regsym(&Ysymbols,"symbols"))));
  Ybooted_fab_sym = YPmet(FUNCODEREF(Ybooted_fab_sym),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ybooted_fab_sym = Ybooted_fab_sym), (regsym(&Ybooted_fab_sym,"booted-fab-sym"))));
  fun_boot_751 = YPmet(FUNCODEREF(fun_boot_751),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  Yboot_symbols = YPmet(FUNCODEREF(Yboot_symbols),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Yboot_symbols = Yboot_symbols), (regsym(&Yboot_symbols,"boot-symbols"))));
  (CALL0(CHKREF(Yboot_symbols)));
  (((Yfab_sym = CHKREF(Ybooted_fab_sym))));
  lit_340 = YPint((P)128);
  (((Yascii_limit = lit_340), (regsym(&Yascii_limit,"ascii-limit"))));
  lit_341 = YPint((P)1);
  lit_342 = YPint((P)1);
  lit_343 = YPint((P)0);
  lit_344 = YPint((P)9);
  lit_345 = YPsb((P)"\t");
  lit_346 = YPint((P)10);
  lit_347 = YPsb((P)"\n");
  lit_348 = YPint((P)12);
  lit_349 = YPsb((P)"\f");
  lit_350 = YPint((P)13);
  lit_351 = YPsb((P)"\r");
  lit_352 = YPint((P)32);
  lit_353 = YPsb((P)" !\"#$%&'()*+,-./0123456789:;<=>?");
  lit_354 = YPint((P)64);
  lit_355 = YPsb((P)"@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_");
  lit_356 = YPint((P)96);
  lit_357 = YPsb((P)"`abcdefghijklmnopqrstuvwxyz{|}~");
  fun_loop_753 = YPmet(FUNCODEREF(fun_loop_753),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_754 = YPmet(FUNCODEREF(fun_754),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yascii_chars = (ascii_charsF924=CALL2(CHKREF(Yfill),CALL2(CHKREF(Yfab),CHKREF(YLvecG),CHKREF(Yascii_limit)),YPfalse),(initF925=FUNFAB(fun_754, 1,ascii_charsF924),(CALL2(initF925,lit_344,lit_345),
  CALL2(initF925,lit_346,lit_347),
  CALL2(initF925,lit_348,lit_349),
  CALL2(initF925,lit_350,lit_351),
  CALL2(initF925,lit_352,lit_353),
  CALL2(initF925,lit_354,lit_355),
  CALL2(initF925,lit_356,lit_357),
  ascii_charsF924)))), (regsym(&Yascii_chars,"ascii-chars"))));
  lit_358 = YPsb((P)"not a standard character's ASCII code: %=");
  fun_ascii_Gchar_755 = YPmet(FUNCODEREF(fun_ascii_Gchar_755),YPpair(CHKREF(YLintG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yascii_Gchar = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yascii_Gchar) != YPfalse)
    ? CHKREF(Yascii_Gchar)
    : YPfalse),fun_ascii_Gchar_755)), (regsym(&Yascii_Gchar,"ascii->char"))));
  fun_char_Ginteger_756 = YPmet(FUNCODEREF(fun_char_Ginteger_756),YPpair(CHKREF(YLchrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ychar_Ginteger = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ychar_Ginteger) != YPfalse)
    ? CHKREF(Ychar_Ginteger)
    : YPfalse),fun_char_Ginteger_756)), (regsym(&Ychar_Ginteger,"char->integer"))));
  fun_integer_Gchar_757 = YPmet(FUNCODEREF(fun_integer_Gchar_757),YPpair(CHKREF(YLintG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yinteger_Gchar = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yinteger_Gchar) != YPfalse)
    ? CHKREF(Yinteger_Gchar)
    : YPfalse),fun_integer_Gchar_757)), (regsym(&Yinteger_Gchar,"integer->char"))));
  lit_359 = YPint((P)1);
  lit_360 = YPint((P)1);
  lit_361 = YPint((P)0);
  lit_362 = YPint((P)1);
  lit_363 = YPint((P)1);
  lit_364 = YPint((P)0);
  fun_loop_758 = YPmet(FUNCODEREF(fun_loop_758),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_loop_759 = YPmet(FUNCODEREF(fun_loop_759),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Ynative_chars = (end259F926=CALL1(CHKREF(Ylen),CHKREF(Yascii_chars)),(loopF927=FUNSHELL(fun_loop_759, 2),FUNINIT(loopF927, 2,end259F926,loopF927),
  CALL3(loopF927,lit_364,YPfalse,YPfalse)))), (regsym(&Ynative_chars,"native-chars"))));
  lit_365 = YPsb((P)"not a standard character: %=");
  fun_char_Gascii_760 = YPmet(FUNCODEREF(fun_char_Gascii_760),YPpair(CHKREF(YLchrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ychar_Gascii = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ychar_Gascii) != YPfalse)
    ? CHKREF(Ychar_Gascii)
    : YPfalse),fun_char_Gascii_760)), (regsym(&Ychar_Gascii,"char->ascii"))));
  lit_366 = YPpair(YPint((P)32), YPpair(YPint((P)10), YPpair(YPint((P)9), YPpair(YPint((P)12), YPpair(YPint((P)13), Ynil)))));
  (((Yascii_whitespaces = lit_366), (regsym(&Yascii_whitespaces,"ascii-whitespaces"))));
  lit_367 = YPint((P)1);
  lit_368 = YPint((P)0);
  lit_369 = YPint((P)0);
  lit_370 = YPint((P)0);
  lit_371 = YPint((P)1);
  lit_372 = YPint((P)10);
  lit_373 = YPint((P)1);
  lit_374 = YPchr((P)46);
  lit_375 = YPsb((P)"string->number: Two decimal points: %=");
  lit_376 = YPint((P)1);
  lit_377 = YPint((P)1);
  lit_378 = YPchr((P)43);
  lit_379 = YPchr((P)45);
  lit_380 = YPint((P)-1);
  fun_match_761 = YPmet(FUNCODEREF(fun_match_761),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_failXX_762 = YPmet(FUNCODEREF(fun_failXX_762),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_763 = YPmet(FUNCODEREF(fun_763),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_match_digitX_764 = YPmet(FUNCODEREF(fun_match_digitX_764),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_looking_at_alphabeticQ_765 = YPmet(FUNCODEREF(fun_looking_at_alphabeticQ_765),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_loop_766 = YPmet(FUNCODEREF(fun_loop_766),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_str_to_num_767 = YPmet(FUNCODEREF(fun_str_to_num_767),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ystr_to_num = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ystr_to_num) != YPfalse)
    ? CHKREF(Ystr_to_num)
    : YPfalse),fun_str_to_num_767)), (regsym(&Ystr_to_num,"str-to-num"))));
  (((YLportG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLanyG),(P)Ynil),Ynil,Ynil)), (regsym(&YLportG,"<port>"))));
  fun_port_handle_768 = YPmet(FUNCODEREF(fun_port_handle_768),YPpair(CHKREF(YLportG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yport_handle = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yport_handle) != YPfalse)
    ? CHKREF(Yport_handle)
    : YPfalse),fun_port_handle_768)), (regsym(&Yport_handle,"port-handle"))));
  fun_port_handle_setter_769 = YPmet(FUNCODEREF(fun_port_handle_setter_769),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLportG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yport_handle_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yport_handle_setter) != YPfalse)
    ? CHKREF(Yport_handle_setter)
    : YPfalse),fun_port_handle_setter_769)), (regsym(&Yport_handle_setter,"port-handle-setter"))));
  fun_770 = YPmet(FUNCODEREF(fun_770),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLportG),CHKREF(Yport_handle),CHKREF(Yport_handle_setter),CHKREF(YLanyG),fun_770));
  (((YLinput_portG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLportG),(P)Ynil),Ynil,Ynil)), (regsym(&YLinput_portG,"<input-port>"))));
  (((YLoutput_portG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLportG),(P)Ynil),Ynil,Ynil)), (regsym(&YLoutput_portG,"<output-port>"))));
  (((YLfile_portG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLportG),(P)Ynil),Ynil,Ynil)), (regsym(&YLfile_portG,"<file-port>"))));
  (((YLfile_input_portG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLfile_portG),(P)(P)YPpair((P)CHKREF(YLinput_portG),(P)Ynil)),Ynil,Ynil)), (regsym(&YLfile_input_portG,"<file-input-port>"))));
  (((YLfile_output_portG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLfile_portG),(P)(P)YPpair((P)CHKREF(YLoutput_portG),(P)Ynil)),Ynil,Ynil)), (regsym(&YLfile_output_portG,"<file-output-port>"))));
  fun_open_input_file_771 = YPmet(FUNCODEREF(fun_open_input_file_771),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yopen_input_file = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yopen_input_file) != YPfalse)
    ? CHKREF(Yopen_input_file)
    : YPfalse),fun_open_input_file_771)), (regsym(&Yopen_input_file,"open-input-file"))));
  lit_381 = YPsb((P)"Cannot open file named %=");
  fun_file_opening_error_772 = YPmet(FUNCODEREF(fun_file_opening_error_772),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yfile_opening_error = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfile_opening_error) != YPfalse)
    ? CHKREF(Yfile_opening_error)
    : YPfalse),fun_file_opening_error_772)), (regsym(&Yfile_opening_error,"file-opening-error"))));
  fun_open_output_file_773 = YPmet(FUNCODEREF(fun_open_output_file_773),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yopen_output_file = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yopen_output_file) != YPfalse)
    ? CHKREF(Yopen_output_file)
    : YPfalse),fun_open_output_file_773)), (regsym(&Yopen_output_file,"open-output-file"))));
  fun_close_input_port_774 = YPmet(FUNCODEREF(fun_close_input_port_774),YPpair(CHKREF(YLfile_input_portG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yclose_input_port = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yclose_input_port) != YPfalse)
    ? CHKREF(Yclose_input_port)
    : YPfalse),fun_close_input_port_774)), (regsym(&Yclose_input_port,"close-input-port"))));
  fun_close_output_port_775 = YPmet(FUNCODEREF(fun_close_output_port_775),YPpair(CHKREF(YLfile_output_portG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yclose_output_port = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yclose_output_port) != YPfalse)
    ? CHKREF(Yclose_output_port)
    : YPfalse),fun_close_output_port_775)), (regsym(&Yclose_output_port,"close-output-port"))));
  fun_776 = YPmet(FUNCODEREF(fun_776),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_777 = YPmet(FUNCODEREF(fun_777),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_call_with_input_file_778 = YPmet(FUNCODEREF(fun_call_with_input_file_778),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLfunG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ycall_with_input_file = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycall_with_input_file) != YPfalse)
    ? CHKREF(Ycall_with_input_file)
    : YPfalse),fun_call_with_input_file_778)), (regsym(&Ycall_with_input_file,"call-with-input-file"))));
  fun_779 = YPmet(FUNCODEREF(fun_779),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_780 = YPmet(FUNCODEREF(fun_780),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_call_with_output_file_781 = YPmet(FUNCODEREF(fun_call_with_output_file_781),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLfunG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ycall_with_output_file = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycall_with_output_file) != YPfalse)
    ? CHKREF(Ycall_with_output_file)
    : YPfalse),fun_call_with_output_file_781)), (regsym(&Ycall_with_output_file,"call-with-output-file"))));
  (((Yin = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLfile_input_portG),(P)Ynil),(P)YPpair((P)CHKREF(Yport_handle),(P)Ynil),(P)YPpair((P)(P)YPcurrent_input_port(),(P)Ynil))), (regsym(&Yin,"in"))));
  (((Yout = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLfile_output_portG),(P)Ynil),(P)YPpair((P)CHKREF(Yport_handle),(P)Ynil),(P)YPpair((P)(P)YPcurrent_output_port(),(P)Ynil))), (regsym(&Yout,"out"))));
  fun_eof_objectQ_782 = YPmet(FUNCODEREF(fun_eof_objectQ_782),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yeof_objectQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yeof_objectQ) != YPfalse)
    ? CHKREF(Yeof_objectQ)
    : YPfalse),fun_eof_objectQ_782)), (regsym(&Yeof_objectQ,"eof-object?"))));
  fun_eof_object_783 = YPmet(FUNCODEREF(fun_eof_object_783),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Yeof_object = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yeof_object) != YPfalse)
    ? CHKREF(Yeof_object)
    : YPfalse),fun_eof_object_783)), (regsym(&Yeof_object,"eof-object"))));
  fun_read_char_784 = YPmet(FUNCODEREF(fun_read_char_784),YPpair(CHKREF(YLfile_input_portG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yread_char = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yread_char) != YPfalse)
    ? CHKREF(Yread_char)
    : YPfalse),fun_read_char_784)), (regsym(&Yread_char,"read-char"))));
  fun_peek_char_785 = YPmet(FUNCODEREF(fun_peek_char_785),YPpair(CHKREF(YLfile_input_portG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ypeek_char = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ypeek_char) != YPfalse)
    ? CHKREF(Ypeek_char)
    : YPfalse),fun_peek_char_785)), (regsym(&Ypeek_char,"peek-char"))));
  fun_char_readyQ_786 = YPmet(FUNCODEREF(fun_char_readyQ_786),YPpair(CHKREF(YLfile_input_portG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ychar_readyQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ychar_readyQ) != YPfalse)
    ? CHKREF(Ychar_readyQ)
    : YPfalse),fun_char_readyQ_786)), (regsym(&Ychar_readyQ,"char-ready?"))));
  lit_382 = YPchr((P)10);
  fun_newline_787 = YPmet(FUNCODEREF(fun_newline_787),YPpair(CHKREF(YLoutput_portG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ynewline = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ynewline) != YPfalse)
    ? CHKREF(Ynewline)
    : YPfalse),fun_newline_787)), (regsym(&Ynewline,"newline"))));
  fun_force_output_788 = YPmet(FUNCODEREF(fun_force_output_788),YPpair(CHKREF(YLfile_output_portG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yforce_output = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yforce_output) != YPfalse)
    ? CHKREF(Yforce_output)
    : YPfalse),fun_force_output_788)), (regsym(&Yforce_output,"force-output"))));
  fun_write_char_789 = YPmet(FUNCODEREF(fun_write_char_789),YPpair(CHKREF(YLfile_output_portG),YPpair(CHKREF(YLchrG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ywrite_char = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ywrite_char) != YPfalse)
    ? CHKREF(Ywrite_char)
    : YPfalse),fun_write_char_789)), (regsym(&Ywrite_char,"write-char"))));
  fun_write_string_790 = YPmet(FUNCODEREF(fun_write_string_790),YPpair(CHKREF(YLfile_output_portG),YPpair(CHKREF(YLstrG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ywrite_string = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ywrite_string) != YPfalse)
    ? CHKREF(Ywrite_string)
    : YPfalse),fun_write_string_790)), (regsym(&Ywrite_string,"write-string"))));
  (((YLstring_portG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLportG),(P)Ynil),Ynil,Ynil)), (regsym(&YLstring_portG,"<string-port>"))));
  fun_port_guts_791 = YPmet(FUNCODEREF(fun_port_guts_791),YPpair(CHKREF(YLstring_portG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yport_guts = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yport_guts) != YPfalse)
    ? CHKREF(Yport_guts)
    : YPfalse),fun_port_guts_791)), (regsym(&Yport_guts,"port-guts"))));
  fun_port_guts_setter_792 = YPmet(FUNCODEREF(fun_port_guts_setter_792),YPpair(CHKREF(YLseqG),YPpair(CHKREF(YLstring_portG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yport_guts_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yport_guts_setter) != YPfalse)
    ? CHKREF(Yport_guts_setter)
    : YPfalse),fun_port_guts_setter_792)), (regsym(&Yport_guts_setter,"port-guts-setter"))));
  lit_383 = YPsb((P)"");
  fun_793 = YPmet(FUNCODEREF(fun_793),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLstring_portG),CHKREF(Yport_guts),CHKREF(Yport_guts_setter),CHKREF(YLseqG),fun_793));
  fun_port_contents_794 = YPmet(FUNCODEREF(fun_port_contents_794),YPpair(CHKREF(YLstring_portG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yport_contents = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yport_contents) != YPfalse)
    ? CHKREF(Yport_contents)
    : YPfalse),fun_port_contents_794)), (regsym(&Yport_contents,"port-contents"))));
  (((YLstring_input_portG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLstring_portG),(P)(P)YPpair((P)CHKREF(YLinput_portG),(P)Ynil)),Ynil,Ynil)), (regsym(&YLstring_input_portG,"<string-input-port>"))));
  fun_port_index_795 = YPmet(FUNCODEREF(fun_port_index_795),YPpair(CHKREF(YLstring_input_portG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yport_index = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yport_index) != YPfalse)
    ? CHKREF(Yport_index)
    : YPfalse),fun_port_index_795)), (regsym(&Yport_index,"port-index"))));
  fun_port_index_setter_796 = YPmet(FUNCODEREF(fun_port_index_setter_796),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLstring_input_portG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yport_index_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yport_index_setter) != YPfalse)
    ? CHKREF(Yport_index_setter)
    : YPfalse),fun_port_index_setter_796)), (regsym(&Yport_index_setter,"port-index-setter"))));
  lit_384 = YPint((P)0);
  fun_797 = YPmet(FUNCODEREF(fun_797),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLstring_input_portG),CHKREF(Yport_index),CHKREF(Yport_index_setter),CHKREF(YLintG),fun_797));
  (((YLstring_output_portG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLstring_portG),(P)(P)YPpair((P)CHKREF(YLoutput_portG),(P)Ynil)),Ynil,Ynil)), (regsym(&YLstring_output_portG,"<string-output-port>"))));
  fun_call_with_string_input_port_798 = YPmet(FUNCODEREF(fun_call_with_string_input_port_798),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLfunG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ycall_with_string_input_port = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycall_with_string_input_port) != YPfalse)
    ? CHKREF(Ycall_with_string_input_port)
    : YPfalse),fun_call_with_string_input_port_798)), (regsym(&Ycall_with_string_input_port,"call-with-string-input-port"))));
  fun_call_with_string_output_port_799 = YPmet(FUNCODEREF(fun_call_with_string_output_port_799),YPpair(CHKREF(YLfunG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ycall_with_string_output_port = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycall_with_string_output_port) != YPfalse)
    ? CHKREF(Ycall_with_string_output_port)
    : YPfalse),fun_call_with_string_output_port_799)), (regsym(&Ycall_with_string_output_port,"call-with-string-output-port"))));
  fun_peek_char_800 = YPmet(FUNCODEREF(fun_peek_char_800),YPpair(CHKREF(YLstring_input_portG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ypeek_char = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ypeek_char) != YPfalse)
    ? CHKREF(Ypeek_char)
    : YPfalse),fun_peek_char_800)), (regsym(&Ypeek_char,"peek-char"))));
  lit_385 = YPint((P)1);
  fun_read_char_801 = YPmet(FUNCODEREF(fun_read_char_801),YPpair(CHKREF(YLstring_input_portG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yread_char = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yread_char) != YPfalse)
    ? CHKREF(Yread_char)
    : YPfalse),fun_read_char_801)), (regsym(&Yread_char,"read-char"))));
  fun_char_readyQ_802 = YPmet(FUNCODEREF(fun_char_readyQ_802),YPpair(CHKREF(YLstring_input_portG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ychar_readyQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ychar_readyQ) != YPfalse)
    ? CHKREF(Ychar_readyQ)
    : YPfalse),fun_char_readyQ_802)), (regsym(&Ychar_readyQ,"char-ready?"))));
  fun_write_char_803 = YPmet(FUNCODEREF(fun_write_char_803),YPpair(CHKREF(YLstring_output_portG),YPpair(CHKREF(YLchrG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ywrite_char = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ywrite_char) != YPfalse)
    ? CHKREF(Ywrite_char)
    : YPfalse),fun_write_char_803)), (regsym(&Ywrite_char,"write-char"))));
  fun_write_string_804 = YPmet(FUNCODEREF(fun_write_string_804),YPpair(CHKREF(YLstring_output_portG),YPpair(CHKREF(YLstrG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ywrite_string = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ywrite_string) != YPfalse)
    ? CHKREF(Ywrite_string)
    : YPfalse),fun_write_string_804)), (regsym(&Ywrite_string,"write-string"))));
  lit_386 = YPsb((P)"discarding extraneous right parenthesis");
  fun_loop_805 = YPmet(FUNCODEREF(fun_loop_805),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_read_806 = YPmet(FUNCODEREF(fun_read_806),YPpair(CHKREF(YLinput_portG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yread = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yread) != YPfalse)
    ? CHKREF(Yread)
    : YPfalse),fun_read_806)), (regsym(&Yread,"read"))));
  fun_read_from_string_807 = YPmet(FUNCODEREF(fun_read_from_string_807),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yread_from_string = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yread_from_string) != YPfalse)
    ? CHKREF(Yread_from_string)
    : YPfalse),fun_read_from_string_807)), (regsym(&Yread_from_string,"read-from-string"))));
  lit_387 = YPsb((P)"unexpected end of file");
  fun_sub_read_carefully_808 = YPmet(FUNCODEREF(fun_sub_read_carefully_808),YPpair(CHKREF(YLportG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysub_read_carefully = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysub_read_carefully) != YPfalse)
    ? CHKREF(Ysub_read_carefully)
    : YPfalse),fun_sub_read_carefully_808)), (regsym(&Ysub_read_carefully,"sub-read-carefully"))));
  lit_388 = YPPsym((P)"reader-token");
  (((YDreader_token_marker = CALL1(CHKREF(Yvec),lit_388)), (regsym(&YDreader_token_marker,"$reader-token-marker"))));
  fun_make_reader_token_809 = YPmet(FUNCODEREF(fun_make_reader_token_809),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ymake_reader_token = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymake_reader_token) != YPfalse)
    ? CHKREF(Ymake_reader_token)
    : YPfalse),fun_make_reader_token_809)), (regsym(&Ymake_reader_token,"make-reader-token"))));
  lit_389 = YPint((P)0);
  fun_reader_tokenQ_810 = YPmet(FUNCODEREF(fun_reader_tokenQ_810),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yreader_tokenQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yreader_tokenQ) != YPfalse)
    ? CHKREF(Yreader_tokenQ)
    : YPfalse),fun_reader_tokenQ_810)), (regsym(&Yreader_tokenQ,"reader-token?"))));
  lit_390 = YPsb((P)"unexpected right parenthesis");
  (((YDclose_paren = CALL1(CHKREF(Ymake_reader_token),lit_390)), (regsym(&YDclose_paren,"$close-paren"))));
  lit_391 = YPsb((P)"unexpected \" . \"");
  (((YDdot = CALL1(CHKREF(Ymake_reader_token),lit_391)), (regsym(&YDdot,"$dot"))));
  fun_sub_read_811 = YPmet(FUNCODEREF(fun_sub_read_811),YPpair(CHKREF(YLportG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysub_read = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysub_read) != YPfalse)
    ? CHKREF(Ysub_read)
    : YPfalse),fun_sub_read_811)), (regsym(&Ysub_read,"sub-read"))));
  lit_392 = YPsb((P)"illegal character read");
  fun_812 = YPmet(FUNCODEREF(fun_812),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YTread_dispatch_vectorT = CALL2(CHKREF(Yfill),CALL2(CHKREF(Yfab),CHKREF(YLvecG),CHKREF(Yascii_limit)),fun_812)), (regsym(&YTread_dispatch_vectorT,"*read-dispatch-vector*"))));
  (((YTread_terminatingQ_vectorT = CALL2(CHKREF(Yfill),CALL2(CHKREF(Yfab),CHKREF(YLvecG),CHKREF(Yascii_limit)),YPtrue)), (regsym(&YTread_terminatingQ_vectorT,"*read-terminating?-vector*"))));
  fun_set_standard_syntaxX_813 = YPmet(FUNCODEREF(fun_set_standard_syntaxX_813),YPpair(CHKREF(YLchrG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yset_standard_syntaxX = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yset_standard_syntaxX) != YPfalse)
    ? CHKREF(Yset_standard_syntaxX)
    : YPfalse),fun_set_standard_syntaxX_813)), (regsym(&Yset_standard_syntaxX,"set-standard-syntax!"))));
  fun_814 = YPmet(FUNCODEREF(fun_814),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_815 = YPmet(FUNCODEREF(fun_815),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((sub_read_whitespaceF928=fun_814,CALL2(CHKREF(Ydo),FUNFAB(fun_815, 1,sub_read_whitespaceF928),CHKREF(Yascii_whitespaces))));
  Ysub_read_constituent = YPmet(FUNCODEREF(Ysub_read_constituent),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ysub_read_constituent = Ysub_read_constituent), (regsym(&Ysub_read_constituent,"sub-read-constituent"))));
  lit_393 = YPsb((P)"!$%&*+-./0123456789:<=>?@^_~ABCDEFGHIJKLM");
  lit_394 = YPsb((P)"NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  fun_817 = YPmet(FUNCODEREF(fun_817),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((str10496F929=CALL2(CHKREF(Ycat),lit_393,lit_394),CALL2(CHKREF(Ydo),fun_817,str10496F929)));
  fun_set_standard_read_macroX_818 = YPmet(FUNCODEREF(fun_set_standard_read_macroX_818),YPpair(CHKREF(YLchrG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLfunG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yset_standard_read_macroX = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yset_standard_read_macroX) != YPfalse)
    ? CHKREF(Yset_standard_read_macroX)
    : YPfalse),fun_set_standard_read_macroX_818)), (regsym(&Yset_standard_read_macroX,"set-standard-read-macro!"))));
  lit_395 = YPsb((P)"end of file inside list -- unbalanced parentheses");
  lit_396 = YPsb((P)"randomness after form after dot");
  fun_sub_read_list_819 = YPmet(FUNCODEREF(fun_sub_read_list_819),YPpair(CHKREF(YLchrG),YPpair(CHKREF(YLportG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ysub_read_list = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysub_read_list) != YPfalse)
    ? CHKREF(Ysub_read_list)
    : YPfalse),fun_sub_read_list_819)), (regsym(&Ysub_read_list,"sub-read-list"))));
  lit_397 = YPchr((P)40);
  (CALL3(CHKREF(Yset_standard_read_macroX),lit_397,YPtrue,CHKREF(Ysub_read_list)));
  lit_398 = YPchr((P)41);
  fun_820 = YPmet(FUNCODEREF(fun_820),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (CALL3(CHKREF(Yset_standard_read_macroX),lit_398,YPtrue,fun_820));
  lit_399 = YPchr((P)39);
  lit_400 = YPPsym((P)"quote");
  fun_821 = YPmet(FUNCODEREF(fun_821),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (CALL3(CHKREF(Yset_standard_read_macroX),lit_399,YPtrue,fun_821));
  lit_401 = YPchr((P)96);
  lit_402 = YPPsym((P)"quasiquote");
  fun_822 = YPmet(FUNCODEREF(fun_822),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (CALL3(CHKREF(Yset_standard_read_macroX),lit_401,YPtrue,fun_822));
  lit_403 = YPchr((P)44);
  lit_404 = YPsb((P)"end of file after ,");
  lit_405 = YPchr((P)64);
  lit_406 = YPPsym((P)"unquote-splicing");
  lit_407 = YPPsym((P)"unquote");
  fun_823 = YPmet(FUNCODEREF(fun_823),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (CALL3(CHKREF(Yset_standard_read_macroX),lit_403,YPtrue,fun_823));
  lit_408 = YPchr((P)9);
  lit_409 = YPchr((P)116);
  lit_410 = YPchr((P)12);
  lit_411 = YPchr((P)102);
  lit_412 = YPchr((P)13);
  lit_413 = YPchr((P)114);
  lit_414 = YPchr((P)10);
  lit_415 = YPchr((P)110);
  (((YDstring_escape_chars = (vecF930=CALL2(CHKREF(Yfill),CALL2(CHKREF(Yfab),CHKREF(YLvecG),CHKREF(Yascii_limit)),YPfalse),(CALL3(CHKREF(Yelt_setter),lit_408,vecF930,CALL2(CHKREF(Yas),CHKREF(YLintG),lit_409)),
  CALL3(CHKREF(Yelt_setter),lit_410,vecF930,CALL2(CHKREF(Yas),CHKREF(YLintG),lit_411)),
  CALL3(CHKREF(Yelt_setter),lit_412,vecF930,CALL2(CHKREF(Yas),CHKREF(YLintG),lit_413)),
  CALL3(CHKREF(Yelt_setter),lit_414,vecF930,CALL2(CHKREF(Yas),CHKREF(YLintG),lit_415)),
  vecF930))), (regsym(&YDstring_escape_chars,"$string-escape-chars"))));
  lit_416 = YPsb((P)"end of file within a string");
  lit_417 = YPchr((P)92);
  lit_418 = YPsb((P)"end of file within a string");
  lit_419 = YPchr((P)92);
  lit_420 = YPchr((P)34);
  lit_421 = YPint((P)1);
  lit_422 = YPint((P)1);
  lit_423 = YPsb((P)"invalid escaped character in string");
  lit_424 = YPchr((P)34);
  lit_425 = YPint((P)1);
  lit_426 = YPint((P)0);
  fun_loop_824 = YPmet(FUNCODEREF(fun_loop_824),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  Yread_string_literal = YPmet(FUNCODEREF(Yread_string_literal),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yread_string_literal = Yread_string_literal), (regsym(&Yread_string_literal,"read-string-literal"))));
  lit_427 = YPchr((P)34);
  (CALL3(CHKREF(Yset_standard_read_macroX),lit_427,YPtrue,CHKREF(Yread_string_literal)));
  lit_428 = YPchr((P)59);
  fun_826 = YPmet(FUNCODEREF(fun_826),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (CALL3(CHKREF(Yset_standard_read_macroX),lit_428,YPtrue,fun_826));
  lit_429 = YPchr((P)10);
  fun_loop_827 = YPmet(FUNCODEREF(fun_loop_827),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_gobble_line_828 = YPmet(FUNCODEREF(fun_gobble_line_828),YPpair(CHKREF(YLportG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ygobble_line = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ygobble_line) != YPfalse)
    ? CHKREF(Ygobble_line)
    : YPfalse),fun_gobble_line_828)), (regsym(&Ygobble_line,"gobble-line"))));
  (((YTsharp_macrosT = Ynil), (regsym(&YTsharp_macrosT,"*sharp-macros*"))));
  fun_define_sharp_macro_829 = YPmet(FUNCODEREF(fun_define_sharp_macro_829),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ydefine_sharp_macro = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydefine_sharp_macro) != YPfalse)
    ? CHKREF(Ydefine_sharp_macro)
    : YPfalse),fun_define_sharp_macro_829)), (regsym(&Ydefine_sharp_macro,"define-sharp-macro"))));
  lit_430 = YPchr((P)35);
  lit_431 = YPsb((P)"end of file after #");
  lit_432 = YPsb((P)"unknown # syntax");
  fun_830 = YPmet(FUNCODEREF(fun_830),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (CALL3(CHKREF(Yset_standard_read_macroX),lit_430,YPfalse,fun_830));
  lit_433 = YPchr((P)102);
  fun_831 = YPmet(FUNCODEREF(fun_831),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (CALL2(CHKREF(Ydefine_sharp_macro),lit_433,fun_831));
  lit_434 = YPchr((P)116);
  fun_832 = YPmet(FUNCODEREF(fun_832),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (CALL2(CHKREF(Ydefine_sharp_macro),lit_434,fun_832));
  lit_435 = YPpair(YPpair(YPPsym((P)"tab"), YPpair(YPchr((P)9), Ynil)), YPpair(YPpair(YPPsym((P)"page"), YPpair(YPchr((P)12), Ynil)), YPpair(YPpair(YPPsym((P)"return"), YPpair(YPchr((P)13), Ynil)), YPpair(YPpair(YPPsym((P)"newline"), YPpair(YPchr((P)10), Ynil)), YPpair(YPpair(YPPsym((P)"space"), YPpair(YPchr((P)32), Ynil)), Ynil)))));
  (((YDchar_long_names = lit_435), (regsym(&YDchar_long_names,"$char-long-names"))));
  lit_436 = YPchr((P)92);
  lit_437 = YPsb((P)"end of file after #\\");
  lit_438 = YPint((P)1);
  lit_439 = YPsb((P)"unknown #\\ name");
  fun_833 = YPmet(FUNCODEREF(fun_833),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (CALL2(CHKREF(Ydefine_sharp_macro),lit_436,fun_833));
  lit_440 = YPchr((P)40);
  fun_834 = YPmet(FUNCODEREF(fun_834),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (CALL2(CHKREF(Ydefine_sharp_macro),lit_440,fun_834));
  lit_441 = YPchr((P)35);
  lit_442 = YPsb((P)"unsupported number syntax");
  lit_443 = YPpair(YPchr((P)98), YPpair(YPchr((P)111), YPpair(YPchr((P)100), YPpair(YPchr((P)120), YPpair(YPchr((P)105), YPpair(YPchr((P)101), Ynil))))));
  fun_835 = YPmet(FUNCODEREF(fun_835),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_836 = YPmet(FUNCODEREF(fun_836),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  ((number_sharp_macroF931=fun_835,CALL2(CHKREF(Ydo),FUNFAB(fun_836, 1,number_sharp_macroF931),lit_443)));
  lit_444 = YPint((P)1);
  lit_445 = YPint((P)1);
  fun_loop_837 = YPmet(FUNCODEREF(fun_loop_837),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_sub_read_token_838 = YPmet(FUNCODEREF(fun_sub_read_token_838),YPpair(CHKREF(YLchrG),YPpair(CHKREF(YLportG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ysub_read_token = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysub_read_token) != YPfalse)
    ? CHKREF(Ysub_read_token)
    : YPfalse),fun_sub_read_token_838)), (regsym(&Ysub_read_token,"sub-read-token"))));
  lit_446 = YPint((P)0);
  lit_447 = YPchr((P)43);
  lit_448 = YPchr((P)45);
  lit_449 = YPchr((P)46);
  lit_450 = YPsb((P)".");
  lit_451 = YPsb((P)"unsupported number syntax");
  fun_839 = YPmet(FUNCODEREF(fun_839),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_parse_token_840 = YPmet(FUNCODEREF(fun_parse_token_840),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLportG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yparse_token = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yparse_token) != YPfalse)
    ? CHKREF(Yparse_token)
    : YPfalse),fun_parse_token_840)), (regsym(&Yparse_token,"parse-token"))));
  lit_452 = YPpair(YPsb((P)"+"), YPpair(YPsb((P)"-"), YPpair(YPsb((P)"..."), YPpair(YPsb((P)"1st"), YPpair(YPsb((P)"2nd"), YPpair(YPsb((P)"3rd"), YPpair(YPsb((P)"1+"), YPpair(YPsb((P)"-1+"), YPpair(YPsb((P)"->"), Ynil)))))))));
  (((YDstrange_symbol_names = lit_452), (regsym(&YDstrange_symbol_names,"$strange-symbol-names"))));
  lit_453 = YPPsym((P)"t");
  lit_454 = YPint((P)0);
  lit_455 = YPchr((P)84);
  (((Ypreferred_case = ((CALL2(CHKREF(YE),CALL2(CHKREF(Yelt),CALL2(CHKREF(Yas),CHKREF(YLstrG),lit_453),lit_454),lit_455) != YPfalse)
    ? CHKREF(Yas_uppercase)
    : CHKREF(Yas_lowercase))), (regsym(&Ypreferred_case,"preferred-case"))));
  lit_456 = YPsb((P)": %=");
  fun_reading_error_841 = YPmet(FUNCODEREF(fun_reading_error_841),YPpair(CHKREF(YLportG),YPpair(CHKREF(YLstrG),Ynil)),YPtrue,YPint((P)2),ENVNUL); 
  (((Yreading_error = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yreading_error) != YPfalse)
    ? CHKREF(Yreading_error)
    : YPfalse),fun_reading_error_841)), (regsym(&Yreading_error,"reading-error"))));
  fun_warn_842 = YPmet(FUNCODEREF(fun_warn_842),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),ENVNUL); 
  (((Ywarn = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ywarn) != YPfalse)
    ? CHKREF(Ywarn)
    : YPfalse),fun_warn_842)), (regsym(&Ywarn,"warn"))));
  fun_reverse_list_Gstring_843 = YPmet(FUNCODEREF(fun_reverse_list_Gstring_843),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yreverse_list_Gstring = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yreverse_list_Gstring) != YPfalse)
    ? CHKREF(Yreverse_list_Gstring)
    : YPfalse),fun_reverse_list_Gstring_843)), (regsym(&Yreverse_list_Gstring,"reverse-list->string"))));
  fun_make_immutableX_844 = YPmet(FUNCODEREF(fun_make_immutableX_844),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ymake_immutableX = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymake_immutableX) != YPfalse)
    ? CHKREF(Ymake_immutableX)
    : YPfalse),fun_make_immutableX_844)), (regsym(&Ymake_immutableX,"make-immutable!"))));
  fun_as_binding_name_845 = YPmet(FUNCODEREF(fun_as_binding_name_845),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yas_binding_name = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yas_binding_name) != YPfalse)
    ? CHKREF(Yas_binding_name)
    : YPfalse),fun_as_binding_name_845)), (regsym(&Yas_binding_name,"as-binding-name"))));
  (YPfalse);
  lit_457 = YPPsym((P)"<str>");
  fun_display_846 = YPmet(FUNCODEREF(fun_display_846),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLstrG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ydisplay = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydisplay) != YPfalse)
    ? CHKREF(Ydisplay)
    : YPfalse),fun_display_846)), (regsym(&Ydisplay,"display"))));
  lit_458 = YPPsym((P)"<chr>");
  fun_display_847 = YPmet(FUNCODEREF(fun_display_847),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLchrG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ydisplay = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydisplay) != YPfalse)
    ? CHKREF(Ydisplay)
    : YPfalse),fun_display_847)), (regsym(&Ydisplay,"display"))));
  fun_recur_848 = YPmet(FUNCODEREF(fun_recur_848),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_display_849 = YPmet(FUNCODEREF(fun_display_849),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ydisplay = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydisplay) != YPfalse)
    ? CHKREF(Ydisplay)
    : YPfalse),fun_display_849)), (regsym(&Ydisplay,"display"))));
  fun_write_to_string_850 = YPmet(FUNCODEREF(fun_write_to_string_850),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ywrite_to_string = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ywrite_to_string) != YPfalse)
    ? CHKREF(Ywrite_to_string)
    : YPfalse),fun_write_to_string_850)), (regsym(&Ywrite_to_string,"write-to-string"))));
  fun_recur_851 = YPmet(FUNCODEREF(fun_recur_851),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_write_852 = YPmet(FUNCODEREF(fun_write_852),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ywrite = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ywrite) != YPfalse)
    ? CHKREF(Ywrite)
    : YPfalse),fun_write_852)), (regsym(&Ywrite,"write"))));
  fun_writeln_853 = YPmet(FUNCODEREF(fun_writeln_853),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ywriteln = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ywriteln) != YPfalse)
    ? CHKREF(Ywriteln)
    : YPfalse),fun_writeln_853)), (regsym(&Ywriteln,"writeln"))));
  lit_459 = YPsb((P)"()");
  lit_460 = YPPsym((P)"<lst>");
  fun_recurring_write_854 = YPmet(FUNCODEREF(fun_recurring_write_854),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yrecurring_write = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yrecurring_write) != YPfalse)
    ? CHKREF(Yrecurring_write)
    : YPfalse),fun_recurring_write_854)), (regsym(&Yrecurring_write,"recurring-write"))));
  lit_461 = YPPsym((P)"<vec>");
  fun_recurring_write_855 = YPmet(FUNCODEREF(fun_recurring_write_855),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLvecG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yrecurring_write = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yrecurring_write) != YPfalse)
    ? CHKREF(Yrecurring_write)
    : YPfalse),fun_recurring_write_855)), (regsym(&Yrecurring_write,"recurring-write"))));
  lit_462 = YPPsym((P)"t");
  lit_463 = YPPsym((P)"f");
  fun_recurring_write_856 = YPmet(FUNCODEREF(fun_recurring_write_856),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLlogG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yrecurring_write = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yrecurring_write) != YPfalse)
    ? CHKREF(Yrecurring_write)
    : YPfalse),fun_recurring_write_856)), (regsym(&Yrecurring_write,"recurring-write"))));
  lit_464 = YPPsym((P)"<sym>");
  fun_recurring_write_857 = YPmet(FUNCODEREF(fun_recurring_write_857),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLsymG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yrecurring_write = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yrecurring_write) != YPfalse)
    ? CHKREF(Yrecurring_write)
    : YPfalse),fun_recurring_write_857)), (regsym(&Yrecurring_write,"recurring-write"))));
  lit_465 = YPPsym((P)"<loc>");
  lit_466 = YPsb((P)"&0x");
  lit_467 = YPint((P)16);
  fun_recurring_write_858 = YPmet(FUNCODEREF(fun_recurring_write_858),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLlocG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yrecurring_write = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yrecurring_write) != YPfalse)
    ? CHKREF(Yrecurring_write)
    : YPfalse),fun_recurring_write_858)), (regsym(&Yrecurring_write,"recurring-write"))));
  lit_468 = YPsb((P)"<num>");
  fun_recurring_write_859 = YPmet(FUNCODEREF(fun_recurring_write_859),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLnumG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yrecurring_write = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yrecurring_write) != YPfalse)
    ? CHKREF(Yrecurring_write)
    : YPfalse),fun_recurring_write_859)), (regsym(&Yrecurring_write,"recurring-write"))));
  lit_469 = YPPsym((P)"<str>");
  fun_recurring_write_860 = YPmet(FUNCODEREF(fun_recurring_write_860),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yrecurring_write = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yrecurring_write) != YPfalse)
    ? CHKREF(Yrecurring_write)
    : YPfalse),fun_recurring_write_860)), (regsym(&Yrecurring_write,"recurring-write"))));
  lit_470 = YPPsym((P)"<chr>");
  fun_recurring_write_861 = YPmet(FUNCODEREF(fun_recurring_write_861),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLchrG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yrecurring_write = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yrecurring_write) != YPfalse)
    ? CHKREF(Yrecurring_write)
    : YPfalse),fun_recurring_write_861)), (regsym(&Yrecurring_write,"recurring-write"))));
  lit_471 = YPchr((P)35);
  fun_write_boolean_862 = YPmet(FUNCODEREF(fun_write_boolean_862),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ywrite_boolean = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ywrite_boolean) != YPfalse)
    ? CHKREF(Ywrite_boolean)
    : YPfalse),fun_write_boolean_862)), (regsym(&Ywrite_boolean,"write-boolean"))));
  lit_472 = YPPsym((P)"<int>");
  lit_473 = YPPsym((P)"<flo>");
  lit_474 = YPint((P)10);
  fun_write_number_863 = YPmet(FUNCODEREF(fun_write_number_863),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLnumG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ywrite_number = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ywrite_number) != YPfalse)
    ? CHKREF(Ywrite_number)
    : YPfalse),fun_write_number_863)), (regsym(&Ywrite_number,"write-number"))));
  lit_475 = YPsb((P)"#\\");
  fun_write_char_literal_864 = YPmet(FUNCODEREF(fun_write_char_literal_864),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ywrite_char_literal = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ywrite_char_literal) != YPfalse)
    ? CHKREF(Ywrite_char_literal)
    : YPfalse),fun_write_char_literal_864)), (regsym(&Ywrite_char_literal,"write-char-literal"))));
  lit_476 = YPchr((P)32);
  lit_477 = YPPsym((P)"space");
  lit_478 = YPchr((P)10);
  lit_479 = YPPsym((P)"newline");
  fun_character_name_865 = YPmet(FUNCODEREF(fun_character_name_865),YPpair(CHKREF(YLchrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ycharacter_name = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycharacter_name) != YPfalse)
    ? CHKREF(Ycharacter_name)
    : YPfalse),fun_character_name_865)), (regsym(&Ycharacter_name,"character-name"))));
  lit_480 = YPchr((P)34);
  lit_481 = YPchr((P)34);
  lit_482 = YPchr((P)92);
  lit_483 = YPchr((P)34);
  lit_484 = YPchr((P)92);
  lit_485 = YPint((P)1);
  lit_486 = YPint((P)0);
  fun_loop_866 = YPmet(FUNCODEREF(fun_loop_866),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_write_string_literal_867 = YPmet(FUNCODEREF(fun_write_string_literal_867),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ywrite_string_literal = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ywrite_string_literal) != YPfalse)
    ? CHKREF(Ywrite_string_literal)
    : YPfalse),fun_write_string_literal_867)), (regsym(&Ywrite_string_literal,"write-string-literal"))));
  lit_487 = YPchr((P)39);
  lit_488 = YPchr((P)40);
  lit_489 = YPchr((P)32);
  lit_490 = YPint((P)1);
  lit_491 = YPint((P)1);
  lit_492 = YPchr((P)41);
  fun_loop_868 = YPmet(FUNCODEREF(fun_loop_868),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_write_list_869 = YPmet(FUNCODEREF(fun_write_list_869),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Ywrite_list = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ywrite_list) != YPfalse)
    ? CHKREF(Ywrite_list)
    : YPfalse),fun_write_list_869)), (regsym(&Ywrite_list,"write-list"))));
  lit_493 = YPPsym((P)"quote");
  fun_quotationQ_870 = YPmet(FUNCODEREF(fun_quotationQ_870),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YquotationQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(YquotationQ) != YPfalse)
    ? CHKREF(YquotationQ)
    : YPfalse),fun_quotationQ_870)), (regsym(&YquotationQ,"quotation?"))));
  lit_494 = YPsb((P)"#(");
  lit_495 = YPint((P)0);
  lit_496 = YPint((P)0);
  lit_497 = YPchr((P)32);
  lit_498 = YPint((P)1);
  lit_499 = YPint((P)1);
  lit_500 = YPchr((P)41);
  fun_loop_871 = YPmet(FUNCODEREF(fun_loop_871),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_write_vector_872 = YPmet(FUNCODEREF(fun_write_vector_872),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLvecG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Ywrite_vector = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ywrite_vector) != YPfalse)
    ? CHKREF(Ywrite_vector)
    : YPfalse),fun_write_vector_872)), (regsym(&Ywrite_vector,"write-vector"))));
  lit_501 = YPsb((P)"#{Input-port}");
  fun_recurring_write_873 = YPmet(FUNCODEREF(fun_recurring_write_873),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLinput_portG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yrecurring_write = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yrecurring_write) != YPfalse)
    ? CHKREF(Yrecurring_write)
    : YPfalse),fun_recurring_write_873)), (regsym(&Yrecurring_write,"recurring-write"))));
  lit_502 = YPsb((P)"#{Output-port}");
  fun_recurring_write_874 = YPmet(FUNCODEREF(fun_recurring_write_874),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yrecurring_write = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yrecurring_write) != YPfalse)
    ? CHKREF(Yrecurring_write)
    : YPfalse),fun_recurring_write_874)), (regsym(&Yrecurring_write,"recurring-write"))));
  fun_object_name_875 = YPmet(FUNCODEREF(fun_object_name_875),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yobject_name = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobject_name) != YPfalse)
    ? CHKREF(Yobject_name)
    : YPfalse),fun_object_name_875)), (regsym(&Yobject_name,"object-name"))));
  lit_503 = YPsb((P)"#{");
  lit_504 = YPchr((P)32);
  lit_505 = YPchr((P)32);
  lit_506 = YPsb((P)"}");
  fun_write_fun_guts_876 = YPmet(FUNCODEREF(fun_write_fun_guts_876),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),ENVNUL); 
  (((Ywrite_fun_guts = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ywrite_fun_guts) != YPfalse)
    ? CHKREF(Ywrite_fun_guts)
    : YPfalse),fun_write_fun_guts_876)), (regsym(&Ywrite_fun_guts,"write-fun-guts"))));
  lit_507 = YPPsym((P)"<gen>");
  lit_508 = YPsb((P)"Gen");
  fun_recurring_write_877 = YPmet(FUNCODEREF(fun_recurring_write_877),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLgenG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yrecurring_write = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yrecurring_write) != YPfalse)
    ? CHKREF(Yrecurring_write)
    : YPfalse),fun_recurring_write_877)), (regsym(&Yrecurring_write,"recurring-write"))));
  lit_509 = YPPsym((P)"<met>");
  lit_510 = YPsb((P)"Met");
  fun_recurring_write_878 = YPmet(FUNCODEREF(fun_recurring_write_878),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLmetG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yrecurring_write = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yrecurring_write) != YPfalse)
    ? CHKREF(Yrecurring_write)
    : YPfalse),fun_recurring_write_878)), (regsym(&Yrecurring_write,"recurring-write"))));
  lit_511 = YPsb((P)"#{");
  lit_512 = YPchr((P)32);
  lit_513 = YPsb((P)": ");
  lit_514 = YPsb((P)"}");
  fun_879 = YPmet(FUNCODEREF(fun_879),YPpair(CHKREF(YLslotG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_recurring_write_880 = YPmet(FUNCODEREF(fun_recurring_write_880),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yrecurring_write = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yrecurring_write) != YPfalse)
    ? CHKREF(Yrecurring_write)
    : YPfalse),fun_recurring_write_880)), (regsym(&Yrecurring_write,"recurring-write"))));
  lit_515 = YPsb((P)"#{End-of-file}");
  fun_recurring_write_881 = YPmet(FUNCODEREF(fun_recurring_write_881),YPpair(CHKREF(YLoutput_portG),YPpair(CALL0(CHKREF(Yeof_object)),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yrecurring_write = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yrecurring_write) != YPfalse)
    ? CHKREF(Yrecurring_write)
    : YPfalse),fun_recurring_write_881)), (regsym(&Yrecurring_write,"recurring-write"))));
  lit_516 = YPint((P)0);
  lit_517 = YPint((P)1);
  lit_518 = YPsb((P)"Too few arguments for format string %=: %=");
  lit_519 = YPsb((P)"Format argument for directive '%%%c' not of class %s: %=");
  lit_520 = YPchr((P)68);
  lit_521 = YPchr((P)66);
  lit_522 = YPint((P)2);
  lit_523 = YPchr((P)79);
  lit_524 = YPint((P)8);
  lit_525 = YPchr((P)88);
  lit_526 = YPint((P)16);
  lit_527 = YPchr((P)67);
  lit_528 = YPchr((P)83);
  lit_529 = YPchr((P)61);
  lit_530 = YPchr((P)37);
  lit_531 = YPchr((P)37);
  lit_532 = YPsb((P)"Invalid format directive '%s' in \"%s\"");
  lit_533 = YPchr((P)37);
  lit_534 = YPsb((P)"Incomplete format directive in \"%s\"");
  fun_arg_882 = YPmet(FUNCODEREF(fun_arg_882),YPpair(CHKREF(YLchrG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_883 = YPmet(FUNCODEREF(fun_883),YPpair(CHKREF(YLchrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_format_884 = YPmet(FUNCODEREF(fun_format_884),YPpair(CHKREF(YLoutput_portG),YPpair(CHKREF(YLstrG),Ynil)),YPtrue,YPint((P)2),ENVNUL); 
  (((Yformat = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yformat) != YPfalse)
    ? CHKREF(Yformat)
    : YPfalse),fun_format_884)), (regsym(&Yformat,"format"))));
  fun_sexpr_self_evaluatingQ_885 = YPmet(FUNCODEREF(fun_sexpr_self_evaluatingQ_885),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_self_evaluatingQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_self_evaluatingQ) != YPfalse)
    ? CHKREF(Ysexpr_self_evaluatingQ)
    : YPfalse),fun_sexpr_self_evaluatingQ_885)), (regsym(&Ysexpr_self_evaluatingQ,"sexpr-self-evaluating?"))));
  fun_sexpr_variableQ_886 = YPmet(FUNCODEREF(fun_sexpr_variableQ_886),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_variableQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_variableQ) != YPfalse)
    ? CHKREF(Ysexpr_variableQ)
    : YPfalse),fun_sexpr_variableQ_886)), (regsym(&Ysexpr_variableQ,"sexpr-variable?"))));
  fun_sexpr_tagged_listQ_887 = YPmet(FUNCODEREF(fun_sexpr_tagged_listQ_887),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ysexpr_tagged_listQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_tagged_listQ) != YPfalse)
    ? CHKREF(Ysexpr_tagged_listQ)
    : YPfalse),fun_sexpr_tagged_listQ_887)), (regsym(&Ysexpr_tagged_listQ,"sexpr-tagged-list?"))));
  lit_535 = YPPsym((P)"quote");
  (((YDsexpr_quote_tag = lit_535), (regsym(&YDsexpr_quote_tag,"$sexpr-quote-tag"))));
  fun_sexpr_quotedQ_888 = YPmet(FUNCODEREF(fun_sexpr_quotedQ_888),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_quotedQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_quotedQ) != YPfalse)
    ? CHKREF(Ysexpr_quotedQ)
    : YPfalse),fun_sexpr_quotedQ_888)), (regsym(&Ysexpr_quotedQ,"sexpr-quoted?"))));
  fun_sexpr_make_quote_889 = YPmet(FUNCODEREF(fun_sexpr_make_quote_889),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_make_quote = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_make_quote) != YPfalse)
    ? CHKREF(Ysexpr_make_quote)
    : YPfalse),fun_sexpr_make_quote_889)), (regsym(&Ysexpr_make_quote,"sexpr-make-quote"))));
  fun_sexpr_text_of_quotation_890 = YPmet(FUNCODEREF(fun_sexpr_text_of_quotation_890),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_text_of_quotation = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_text_of_quotation) != YPfalse)
    ? CHKREF(Ysexpr_text_of_quotation)
    : YPfalse),fun_sexpr_text_of_quotation_890)), (regsym(&Ysexpr_text_of_quotation,"sexpr-text-of-quotation"))));
  lit_536 = YPPsym((P)"set");
  (((YDsexpr_set_tag = lit_536), (regsym(&YDsexpr_set_tag,"$sexpr-set-tag"))));
  fun_sexpr_assignmentQ_891 = YPmet(FUNCODEREF(fun_sexpr_assignmentQ_891),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_assignmentQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_assignmentQ) != YPfalse)
    ? CHKREF(Ysexpr_assignmentQ)
    : YPfalse),fun_sexpr_assignmentQ_891)), (regsym(&Ysexpr_assignmentQ,"sexpr-assignment?"))));
  fun_sexpr_assignment_variable_892 = YPmet(FUNCODEREF(fun_sexpr_assignment_variable_892),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_assignment_variable = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_assignment_variable) != YPfalse)
    ? CHKREF(Ysexpr_assignment_variable)
    : YPfalse),fun_sexpr_assignment_variable_892)), (regsym(&Ysexpr_assignment_variable,"sexpr-assignment-variable"))));
  fun_sexpr_assignment_value_893 = YPmet(FUNCODEREF(fun_sexpr_assignment_value_893),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_assignment_value = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_assignment_value) != YPfalse)
    ? CHKREF(Ysexpr_assignment_value)
    : YPfalse),fun_sexpr_assignment_value_893)), (regsym(&Ysexpr_assignment_value,"sexpr-assignment-value"))));
  fun_sexpr_variable_name_894 = YPmet(FUNCODEREF(fun_sexpr_variable_name_894),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_variable_name = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_variable_name) != YPfalse)
    ? CHKREF(Ysexpr_variable_name)
    : YPfalse),fun_sexpr_variable_name_894)), (regsym(&Ysexpr_variable_name,"sexpr-variable-name"))));
  fun_sexpr_variable_name_895 = YPmet(FUNCODEREF(fun_sexpr_variable_name_895),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_variable_name = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_variable_name) != YPfalse)
    ? CHKREF(Ysexpr_variable_name)
    : YPfalse),fun_sexpr_variable_name_895)), (regsym(&Ysexpr_variable_name,"sexpr-variable-name"))));
  fun_sexpr_variable_type_896 = YPmet(FUNCODEREF(fun_sexpr_variable_type_896),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_variable_type = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_variable_type) != YPfalse)
    ? CHKREF(Ysexpr_variable_type)
    : YPfalse),fun_sexpr_variable_type_896)), (regsym(&Ysexpr_variable_type,"sexpr-variable-type"))));
  lit_537 = YPPsym((P)"<any>");
  fun_sexpr_variable_type_897 = YPmet(FUNCODEREF(fun_sexpr_variable_type_897),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_variable_type = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_variable_type) != YPfalse)
    ? CHKREF(Ysexpr_variable_type)
    : YPfalse),fun_sexpr_variable_type_897)), (regsym(&Ysexpr_variable_type,"sexpr-variable-type"))));
  lit_538 = YPPsym((P)"dv");
  (((YDsexpr_define_tag = lit_538), (regsym(&YDsexpr_define_tag,"$sexpr-define-tag"))));
  fun_sexpr_definitionQ_898 = YPmet(FUNCODEREF(fun_sexpr_definitionQ_898),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_definitionQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_definitionQ) != YPfalse)
    ? CHKREF(Ysexpr_definitionQ)
    : YPfalse),fun_sexpr_definitionQ_898)), (regsym(&Ysexpr_definitionQ,"sexpr-definition?"))));
  lit_539 = YPPsym((P)"quasiquote");
  (((YDsexpr_quasiquote_tag = lit_539), (regsym(&YDsexpr_quasiquote_tag,"$sexpr-quasiquote-tag"))));
  fun_sexpr_definition_variable_899 = YPmet(FUNCODEREF(fun_sexpr_definition_variable_899),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_definition_variable = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_definition_variable) != YPfalse)
    ? CHKREF(Ysexpr_definition_variable)
    : YPfalse),fun_sexpr_definition_variable_899)), (regsym(&Ysexpr_definition_variable,"sexpr-definition-variable"))));
  fun_sexpr_definition_value_900 = YPmet(FUNCODEREF(fun_sexpr_definition_value_900),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_definition_value = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_definition_value) != YPfalse)
    ? CHKREF(Ysexpr_definition_value)
    : YPfalse),fun_sexpr_definition_value_900)), (regsym(&Ysexpr_definition_value,"sexpr-definition-value"))));
  lit_540 = YPPsym((P)"ds");
  (((YDsexpr_define_syntax_tag = lit_540), (regsym(&YDsexpr_define_syntax_tag,"$sexpr-define-syntax-tag"))));
  fun_sexpr_syntax_definitionQ_901 = YPmet(FUNCODEREF(fun_sexpr_syntax_definitionQ_901),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_syntax_definitionQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_syntax_definitionQ) != YPfalse)
    ? CHKREF(Ysexpr_syntax_definitionQ)
    : YPfalse),fun_sexpr_syntax_definitionQ_901)), (regsym(&Ysexpr_syntax_definitionQ,"sexpr-syntax-definition?"))));
  lit_541 = YPPsym((P)"mac");
  (((YDsexpr_macro_tag = lit_541), (regsym(&YDsexpr_macro_tag,"$sexpr-macro-tag"))));
  fun_sexpr_syntax_definition_variable_902 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_variable_902),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_syntax_definition_variable = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_syntax_definition_variable) != YPfalse)
    ? CHKREF(Ysexpr_syntax_definition_variable)
    : YPfalse),fun_sexpr_syntax_definition_variable_902)), (regsym(&Ysexpr_syntax_definition_variable,"sexpr-syntax-definition-variable"))));
  fun_sexpr_syntax_definition_value_903 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_value_903),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_syntax_definition_value = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_syntax_definition_value) != YPfalse)
    ? CHKREF(Ysexpr_syntax_definition_value)
    : YPfalse),fun_sexpr_syntax_definition_value_903)), (regsym(&Ysexpr_syntax_definition_value,"sexpr-syntax-definition-value"))));
  lit_542 = YPPsym((P)"df");
  (((YDsexpr_define_function_tag = lit_542), (regsym(&YDsexpr_define_function_tag,"$sexpr-define-function-tag"))));
  fun_sexpr_function_definitionQ_904 = YPmet(FUNCODEREF(fun_sexpr_function_definitionQ_904),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_function_definitionQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_function_definitionQ) != YPfalse)
    ? CHKREF(Ysexpr_function_definitionQ)
    : YPfalse),fun_sexpr_function_definitionQ_904)), (regsym(&Ysexpr_function_definitionQ,"sexpr-function-definition?"))));
  lit_543 = YPPsym((P)"dm");
  (((YDsexpr_define_method_tag = lit_543), (regsym(&YDsexpr_define_method_tag,"$sexpr-define-method-tag"))));
  fun_sexpr_method_definitionQ_905 = YPmet(FUNCODEREF(fun_sexpr_method_definitionQ_905),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_method_definitionQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_method_definitionQ) != YPfalse)
    ? CHKREF(Ysexpr_method_definitionQ)
    : YPfalse),fun_sexpr_method_definitionQ_905)), (regsym(&Ysexpr_method_definitionQ,"sexpr-method-definition?"))));
  lit_544 = YPPsym((P)"dg");
  (((YDsexpr_define_generic_tag = lit_544), (regsym(&YDsexpr_define_generic_tag,"$sexpr-define-generic-tag"))));
  fun_sexpr_generic_definitionQ_906 = YPmet(FUNCODEREF(fun_sexpr_generic_definitionQ_906),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_generic_definitionQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_generic_definitionQ) != YPfalse)
    ? CHKREF(Ysexpr_generic_definitionQ)
    : YPfalse),fun_sexpr_generic_definitionQ_906)), (regsym(&Ysexpr_generic_definitionQ,"sexpr-generic-definition?"))));
  fun_sexpr_function_definition_variable_907 = YPmet(FUNCODEREF(fun_sexpr_function_definition_variable_907),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_function_definition_variable = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_function_definition_variable) != YPfalse)
    ? CHKREF(Ysexpr_function_definition_variable)
    : YPfalse),fun_sexpr_function_definition_variable_907)), (regsym(&Ysexpr_function_definition_variable,"sexpr-function-definition-variable"))));
  lit_545 = YPPsym((P)"=>");
  lit_546 = YPint((P)0);
  fun_sexpr_signature_parameters_908 = YPmet(FUNCODEREF(fun_sexpr_signature_parameters_908),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_signature_parameters = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_signature_parameters) != YPfalse)
    ? CHKREF(Ysexpr_signature_parameters)
    : YPfalse),fun_sexpr_signature_parameters_908)), (regsym(&Ysexpr_signature_parameters,"sexpr-signature-parameters"))));
  lit_547 = YPPsym((P)"=>");
  lit_548 = YPint((P)1);
  fun_sexpr_signature_values_909 = YPmet(FUNCODEREF(fun_sexpr_signature_values_909),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_signature_values = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_signature_values) != YPfalse)
    ? CHKREF(Ysexpr_signature_values)
    : YPfalse),fun_sexpr_signature_values_909)), (regsym(&Ysexpr_signature_values,"sexpr-signature-values"))));
  fun_sexpr_function_parameters_910 = YPmet(FUNCODEREF(fun_sexpr_function_parameters_910),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_function_parameters = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_function_parameters) != YPfalse)
    ? CHKREF(Ysexpr_function_parameters)
    : YPfalse),fun_sexpr_function_parameters_910)), (regsym(&Ysexpr_function_parameters,"sexpr-function-parameters"))));
  fun_sexpr_function_body_911 = YPmet(FUNCODEREF(fun_sexpr_function_body_911),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_function_body = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_function_body) != YPfalse)
    ? CHKREF(Ysexpr_function_body)
    : YPfalse),fun_sexpr_function_body_911)), (regsym(&Ysexpr_function_body,"sexpr-function-body"))));
  lit_549 = YPPsym((P)"fun");
  (((YDsexpr_method_tag = lit_549), (regsym(&YDsexpr_method_tag,"$sexpr-method-tag"))));
  fun_sexpr_function_definition_value_912 = YPmet(FUNCODEREF(fun_sexpr_function_definition_value_912),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_function_definition_value = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_function_definition_value) != YPfalse)
    ? CHKREF(Ysexpr_function_definition_value)
    : YPfalse),fun_sexpr_function_definition_value_912)), (regsym(&Ysexpr_function_definition_value,"sexpr-function-definition-value"))));
  fun_sexpr_methodQ_913 = YPmet(FUNCODEREF(fun_sexpr_methodQ_913),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_methodQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_methodQ) != YPfalse)
    ? CHKREF(Ysexpr_methodQ)
    : YPfalse),fun_sexpr_methodQ_913)), (regsym(&Ysexpr_methodQ,"sexpr-method?"))));
  fun_sexpr_method_parameters_914 = YPmet(FUNCODEREF(fun_sexpr_method_parameters_914),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_method_parameters = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_method_parameters) != YPfalse)
    ? CHKREF(Ysexpr_method_parameters)
    : YPfalse),fun_sexpr_method_parameters_914)), (regsym(&Ysexpr_method_parameters,"sexpr-method-parameters"))));
  fun_sexpr_method_values_915 = YPmet(FUNCODEREF(fun_sexpr_method_values_915),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_method_values = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_method_values) != YPfalse)
    ? CHKREF(Ysexpr_method_values)
    : YPfalse),fun_sexpr_method_values_915)), (regsym(&Ysexpr_method_values,"sexpr-method-values"))));
  fun_sexpr_method_body_916 = YPmet(FUNCODEREF(fun_sexpr_method_body_916),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_method_body = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_method_body) != YPfalse)
    ? CHKREF(Ysexpr_method_body)
    : YPfalse),fun_sexpr_method_body_916)), (regsym(&Ysexpr_method_body,"sexpr-method-body"))));
  fun_sexpr_make_anonymous_method_917 = YPmet(FUNCODEREF(fun_sexpr_make_anonymous_method_917),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ysexpr_make_anonymous_method = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_make_anonymous_method) != YPfalse)
    ? CHKREF(Ysexpr_make_anonymous_method)
    : YPfalse),fun_sexpr_make_anonymous_method_917)), (regsym(&Ysexpr_make_anonymous_method,"sexpr-make-anonymous-method"))));
  fun_sexpr_make_method_918 = YPmet(FUNCODEREF(fun_sexpr_make_method_918),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Ysexpr_make_method = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_make_method) != YPfalse)
    ? CHKREF(Ysexpr_make_method)
    : YPfalse),fun_sexpr_make_method_918)), (regsym(&Ysexpr_make_method,"sexpr-make-method"))));
  lit_550 = YPPsym((P)"if");
  (((YDsexpr_if_tag = lit_550), (regsym(&YDsexpr_if_tag,"$sexpr-if-tag"))));
  fun_sexpr_ifQ_919 = YPmet(FUNCODEREF(fun_sexpr_ifQ_919),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_ifQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_ifQ) != YPfalse)
    ? CHKREF(Ysexpr_ifQ)
    : YPfalse),fun_sexpr_ifQ_919)), (regsym(&Ysexpr_ifQ,"sexpr-if?"))));
  fun_sexpr_if_test_920 = YPmet(FUNCODEREF(fun_sexpr_if_test_920),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_if_test = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_if_test) != YPfalse)
    ? CHKREF(Ysexpr_if_test)
    : YPfalse),fun_sexpr_if_test_920)), (regsym(&Ysexpr_if_test,"sexpr-if-test"))));
  fun_sexpr_if_then_921 = YPmet(FUNCODEREF(fun_sexpr_if_then_921),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_if_then = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_if_then) != YPfalse)
    ? CHKREF(Ysexpr_if_then)
    : YPfalse),fun_sexpr_if_then_921)), (regsym(&Ysexpr_if_then,"sexpr-if-then"))));
  fun_sexpr_if_else_922 = YPmet(FUNCODEREF(fun_sexpr_if_else_922),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_if_else = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_if_else) != YPfalse)
    ? CHKREF(Ysexpr_if_else)
    : YPfalse),fun_sexpr_if_else_922)), (regsym(&Ysexpr_if_else,"sexpr-if-else"))));
  fun_sexpr_make_if_923 = YPmet(FUNCODEREF(fun_sexpr_make_if_923),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Ysexpr_make_if = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_make_if) != YPfalse)
    ? CHKREF(Ysexpr_make_if)
    : YPfalse),fun_sexpr_make_if_923)), (regsym(&Ysexpr_make_if,"sexpr-make-if"))));
  lit_551 = YPPsym((P)"lab");
  (((YDsexpr_bind_exit_tag = lit_551), (regsym(&YDsexpr_bind_exit_tag,"$sexpr-bind-exit-tag"))));
  fun_sexpr_blockQ_924 = YPmet(FUNCODEREF(fun_sexpr_blockQ_924),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_blockQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_blockQ) != YPfalse)
    ? CHKREF(Ysexpr_blockQ)
    : YPfalse),fun_sexpr_blockQ_924)), (regsym(&Ysexpr_blockQ,"sexpr-block?"))));
  fun_sexpr_block_name_925 = YPmet(FUNCODEREF(fun_sexpr_block_name_925),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_block_name = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_block_name) != YPfalse)
    ? CHKREF(Ysexpr_block_name)
    : YPfalse),fun_sexpr_block_name_925)), (regsym(&Ysexpr_block_name,"sexpr-block-name"))));
  fun_sexpr_block_body_926 = YPmet(FUNCODEREF(fun_sexpr_block_body_926),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_block_body = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_block_body) != YPfalse)
    ? CHKREF(Ysexpr_block_body)
    : YPfalse),fun_sexpr_block_body_926)), (regsym(&Ysexpr_block_body,"sexpr-block-body"))));
  lit_552 = YPPsym((P)"fin");
  (((YDsexpr_unwind_protect_tag = lit_552), (regsym(&YDsexpr_unwind_protect_tag,"$sexpr-unwind-protect-tag"))));
  fun_sexpr_unwind_protectQ_927 = YPmet(FUNCODEREF(fun_sexpr_unwind_protectQ_927),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_unwind_protectQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_unwind_protectQ) != YPfalse)
    ? CHKREF(Ysexpr_unwind_protectQ)
    : YPfalse),fun_sexpr_unwind_protectQ_927)), (regsym(&Ysexpr_unwind_protectQ,"sexpr-unwind-protect?"))));
  fun_sexpr_unwind_protect_protected_form_928 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_protected_form_928),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_unwind_protect_protected_form = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_unwind_protect_protected_form) != YPfalse)
    ? CHKREF(Ysexpr_unwind_protect_protected_form)
    : YPfalse),fun_sexpr_unwind_protect_protected_form_928)), (regsym(&Ysexpr_unwind_protect_protected_form,"sexpr-unwind-protect-protected-form"))));
  fun_sexpr_unwind_protect_cleanup_forms_929 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_cleanup_forms_929),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_unwind_protect_cleanup_forms = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_unwind_protect_cleanup_forms) != YPfalse)
    ? CHKREF(Ysexpr_unwind_protect_cleanup_forms)
    : YPfalse),fun_sexpr_unwind_protect_cleanup_forms_929)), (regsym(&Ysexpr_unwind_protect_cleanup_forms,"sexpr-unwind-protect-cleanup-forms"))));
  lit_553 = YPPsym((P)"try");
  (((YDsexpr_monitor_tag = lit_553), (regsym(&YDsexpr_monitor_tag,"$sexpr-monitor-tag"))));
  fun_sexpr_monitorQ_930 = YPmet(FUNCODEREF(fun_sexpr_monitorQ_930),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_monitorQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_monitorQ) != YPfalse)
    ? CHKREF(Ysexpr_monitorQ)
    : YPfalse),fun_sexpr_monitorQ_930)), (regsym(&Ysexpr_monitorQ,"sexpr-monitor?"))));
  fun_sexpr_monitor_handler_931 = YPmet(FUNCODEREF(fun_sexpr_monitor_handler_931),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_monitor_handler = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_monitor_handler) != YPfalse)
    ? CHKREF(Ysexpr_monitor_handler)
    : YPfalse),fun_sexpr_monitor_handler_931)), (regsym(&Ysexpr_monitor_handler,"sexpr-monitor-handler"))));
  fun_sexpr_monitor_body_932 = YPmet(FUNCODEREF(fun_sexpr_monitor_body_932),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_monitor_body = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_monitor_body) != YPfalse)
    ? CHKREF(Ysexpr_monitor_body)
    : YPfalse),fun_sexpr_monitor_body_932)), (regsym(&Ysexpr_monitor_body,"sexpr-monitor-body"))));
  lit_554 = YPPsym((P)"seq");
  (((YDsexpr_begin_tag = lit_554), (regsym(&YDsexpr_begin_tag,"$sexpr-begin-tag"))));
  fun_sexpr_beginQ_933 = YPmet(FUNCODEREF(fun_sexpr_beginQ_933),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_beginQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_beginQ) != YPfalse)
    ? CHKREF(Ysexpr_beginQ)
    : YPfalse),fun_sexpr_beginQ_933)), (regsym(&Ysexpr_beginQ,"sexpr-begin?"))));
  fun_sexpr_begin_actions_934 = YPmet(FUNCODEREF(fun_sexpr_begin_actions_934),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_begin_actions = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_begin_actions) != YPfalse)
    ? CHKREF(Ysexpr_begin_actions)
    : YPfalse),fun_sexpr_begin_actions_934)), (regsym(&Ysexpr_begin_actions,"sexpr-begin-actions"))));
  fun_sexpr_last_expQ_935 = YPmet(FUNCODEREF(fun_sexpr_last_expQ_935),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_last_expQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_last_expQ) != YPfalse)
    ? CHKREF(Ysexpr_last_expQ)
    : YPfalse),fun_sexpr_last_expQ_935)), (regsym(&Ysexpr_last_expQ,"sexpr-last-exp?"))));
  fun_sexpr_first_exp_936 = YPmet(FUNCODEREF(fun_sexpr_first_exp_936),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_first_exp = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_first_exp) != YPfalse)
    ? CHKREF(Ysexpr_first_exp)
    : YPfalse),fun_sexpr_first_exp_936)), (regsym(&Ysexpr_first_exp,"sexpr-first-exp"))));
  fun_sexpr_rest_exps_937 = YPmet(FUNCODEREF(fun_sexpr_rest_exps_937),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_rest_exps = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_rest_exps) != YPfalse)
    ? CHKREF(Ysexpr_rest_exps)
    : YPfalse),fun_sexpr_rest_exps_937)), (regsym(&Ysexpr_rest_exps,"sexpr-rest-exps"))));
  fun_sexpr_sequence_Gbegin_938 = YPmet(FUNCODEREF(fun_sexpr_sequence_Gbegin_938),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_sequence_Gbegin = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_sequence_Gbegin) != YPfalse)
    ? CHKREF(Ysexpr_sequence_Gbegin)
    : YPfalse),fun_sexpr_sequence_Gbegin_938)), (regsym(&Ysexpr_sequence_Gbegin,"sexpr-sequence->begin"))));
  fun_sexpr_make_begin_939 = YPmet(FUNCODEREF(fun_sexpr_make_begin_939),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_make_begin = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_make_begin) != YPfalse)
    ? CHKREF(Ysexpr_make_begin)
    : YPfalse),fun_sexpr_make_begin_939)), (regsym(&Ysexpr_make_begin,"sexpr-make-begin"))));
  fun_sexpr_applicationQ_940 = YPmet(FUNCODEREF(fun_sexpr_applicationQ_940),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_applicationQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_applicationQ) != YPfalse)
    ? CHKREF(Ysexpr_applicationQ)
    : YPfalse),fun_sexpr_applicationQ_940)), (regsym(&Ysexpr_applicationQ,"sexpr-application?"))));
  fun_sexpr_operator_941 = YPmet(FUNCODEREF(fun_sexpr_operator_941),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_operator = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_operator) != YPfalse)
    ? CHKREF(Ysexpr_operator)
    : YPfalse),fun_sexpr_operator_941)), (regsym(&Ysexpr_operator,"sexpr-operator"))));
  fun_sexpr_operands_942 = YPmet(FUNCODEREF(fun_sexpr_operands_942),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_operands = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_operands) != YPfalse)
    ? CHKREF(Ysexpr_operands)
    : YPfalse),fun_sexpr_operands_942)), (regsym(&Ysexpr_operands,"sexpr-operands"))));
  fun_sexpr_no_operandsQ_943 = YPmet(FUNCODEREF(fun_sexpr_no_operandsQ_943),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_no_operandsQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_no_operandsQ) != YPfalse)
    ? CHKREF(Ysexpr_no_operandsQ)
    : YPfalse),fun_sexpr_no_operandsQ_943)), (regsym(&Ysexpr_no_operandsQ,"sexpr-no-operands?"))));
  fun_sexpr_first_operand_944 = YPmet(FUNCODEREF(fun_sexpr_first_operand_944),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_first_operand = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_first_operand) != YPfalse)
    ? CHKREF(Ysexpr_first_operand)
    : YPfalse),fun_sexpr_first_operand_944)), (regsym(&Ysexpr_first_operand,"sexpr-first-operand"))));
  fun_sexpr_rest_operands_945 = YPmet(FUNCODEREF(fun_sexpr_rest_operands_945),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_rest_operands = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_rest_operands) != YPfalse)
    ? CHKREF(Ysexpr_rest_operands)
    : YPfalse),fun_sexpr_rest_operands_945)), (regsym(&Ysexpr_rest_operands,"sexpr-rest-operands"))));
  fun_sexpr_make_application_946 = YPmet(FUNCODEREF(fun_sexpr_make_application_946),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ysexpr_make_application = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_make_application) != YPfalse)
    ? CHKREF(Ysexpr_make_application)
    : YPfalse),fun_sexpr_make_application_946)), (regsym(&Ysexpr_make_application,"sexpr-make-application"))));
  lit_555 = YPint((P)0);
  (((YTunique_name_counterT = lit_555), (regsym(&YTunique_name_counterT,"*unique-name-counter*"))));
  lit_556 = YPint((P)1);
  fun_sexpr_new_unique_name_counterX_947 = YPmet(FUNCODEREF(fun_sexpr_new_unique_name_counterX_947),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Ysexpr_new_unique_name_counterX = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_new_unique_name_counterX) != YPfalse)
    ? CHKREF(Ysexpr_new_unique_name_counterX)
    : YPfalse),fun_sexpr_new_unique_name_counterX_947)), (regsym(&Ysexpr_new_unique_name_counterX,"sexpr-new-unique-name-counter!"))));
  (((YLnameG = CHKREF(YLanyG)), (regsym(&YLnameG,"<name>"))));
  fun_sexpr_unique_name_948 = YPmet(FUNCODEREF(fun_sexpr_unique_name_948),YPpair(CHKREF(YLnameG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_unique_name = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_unique_name) != YPfalse)
    ? CHKREF(Ysexpr_unique_name)
    : YPfalse),fun_sexpr_unique_name_948)), (regsym(&Ysexpr_unique_name,"sexpr-unique-name"))));
  lit_557 = YPPsym((P)"let");
  (((YDsexpr_let_tag = lit_557), (regsym(&YDsexpr_let_tag,"$sexpr-let-tag"))));
  fun_sexpr_letQ_949 = YPmet(FUNCODEREF(fun_sexpr_letQ_949),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_letQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_letQ) != YPfalse)
    ? CHKREF(Ysexpr_letQ)
    : YPfalse),fun_sexpr_letQ_949)), (regsym(&Ysexpr_letQ,"sexpr-let?"))));
  fun_sexpr_let_bound_variables_950 = YPmet(FUNCODEREF(fun_sexpr_let_bound_variables_950),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_let_bound_variables = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_let_bound_variables) != YPfalse)
    ? CHKREF(Ysexpr_let_bound_variables)
    : YPfalse),fun_sexpr_let_bound_variables_950)), (regsym(&Ysexpr_let_bound_variables,"sexpr-let-bound-variables"))));
  fun_sexpr_let_values_951 = YPmet(FUNCODEREF(fun_sexpr_let_values_951),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_let_values = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_let_values) != YPfalse)
    ? CHKREF(Ysexpr_let_values)
    : YPfalse),fun_sexpr_let_values_951)), (regsym(&Ysexpr_let_values,"sexpr-let-values"))));
  fun_sexpr_let_body_952 = YPmet(FUNCODEREF(fun_sexpr_let_body_952),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_let_body = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_let_body) != YPfalse)
    ? CHKREF(Ysexpr_let_body)
    : YPfalse),fun_sexpr_let_body_952)), (regsym(&Ysexpr_let_body,"sexpr-let-body"))));
  fun_col_953 = YPmet(FUNCODEREF(fun_col_953),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_sexpr_let_Gcombination_954 = YPmet(FUNCODEREF(fun_sexpr_let_Gcombination_954),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_let_Gcombination = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_let_Gcombination) != YPfalse)
    ? CHKREF(Ysexpr_let_Gcombination)
    : YPfalse),fun_sexpr_let_Gcombination_954)), (regsym(&Ysexpr_let_Gcombination,"sexpr-let->combination"))));
  lit_558 = YPPsym((P)"loc");
  (((YDsexpr_locals_tag = lit_558), (regsym(&YDsexpr_locals_tag,"$sexpr-locals-tag"))));
  fun_sexpr_locQ_955 = YPmet(FUNCODEREF(fun_sexpr_locQ_955),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_locQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_locQ) != YPfalse)
    ? CHKREF(Ysexpr_locQ)
    : YPfalse),fun_sexpr_locQ_955)), (regsym(&Ysexpr_locQ,"sexpr-loc?"))));
  fun_sexpr_loc_bound_names_956 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_names_956),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_loc_bound_names = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_loc_bound_names) != YPfalse)
    ? CHKREF(Ysexpr_loc_bound_names)
    : YPfalse),fun_sexpr_loc_bound_names_956)), (regsym(&Ysexpr_loc_bound_names,"sexpr-loc-bound-names"))));
  fun_sexpr_loc_bound_parameters_957 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_parameters_957),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_loc_bound_parameters = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_loc_bound_parameters) != YPfalse)
    ? CHKREF(Ysexpr_loc_bound_parameters)
    : YPfalse),fun_sexpr_loc_bound_parameters_957)), (regsym(&Ysexpr_loc_bound_parameters,"sexpr-loc-bound-parameters"))));
  fun_sexpr_loc_bound_bodies_958 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_bodies_958),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_loc_bound_bodies = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_loc_bound_bodies) != YPfalse)
    ? CHKREF(Ysexpr_loc_bound_bodies)
    : YPfalse),fun_sexpr_loc_bound_bodies_958)), (regsym(&Ysexpr_loc_bound_bodies,"sexpr-loc-bound-bodies"))));
  fun_sexpr_loc_raw_body_959 = YPmet(FUNCODEREF(fun_sexpr_loc_raw_body_959),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_loc_raw_body = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_loc_raw_body) != YPfalse)
    ? CHKREF(Ysexpr_loc_raw_body)
    : YPfalse),fun_sexpr_loc_raw_body_959)), (regsym(&Ysexpr_loc_raw_body,"sexpr-loc-raw-body"))));
  fun_sexpr_loc_body_960 = YPmet(FUNCODEREF(fun_sexpr_loc_body_960),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_loc_body = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_loc_body) != YPfalse)
    ? CHKREF(Ysexpr_loc_body)
    : YPfalse),fun_sexpr_loc_body_960)), (regsym(&Ysexpr_loc_body,"sexpr-loc-body"))));
  lit_559 = YPPsym((P)"rep");
  (((YDsexpr_iterate_tag = lit_559), (regsym(&YDsexpr_iterate_tag,"$sexpr-iterate-tag"))));
  fun_sexpr_iterateQ_961 = YPmet(FUNCODEREF(fun_sexpr_iterateQ_961),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_iterateQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_iterateQ) != YPfalse)
    ? CHKREF(Ysexpr_iterateQ)
    : YPfalse),fun_sexpr_iterateQ_961)), (regsym(&Ysexpr_iterateQ,"sexpr-iterate?"))));
  fun_sexpr_iterate_name_962 = YPmet(FUNCODEREF(fun_sexpr_iterate_name_962),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_iterate_name = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_iterate_name) != YPfalse)
    ? CHKREF(Ysexpr_iterate_name)
    : YPfalse),fun_sexpr_iterate_name_962)), (regsym(&Ysexpr_iterate_name,"sexpr-iterate-name"))));
  lit_560 = YPPsym((P)"=>");
  (((YDsexpr_values_tag = lit_560), (regsym(&YDsexpr_values_tag,"$sexpr-values-tag"))));
  fun_sexpr_iterate_signature_963 = YPmet(FUNCODEREF(fun_sexpr_iterate_signature_963),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_iterate_signature = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_iterate_signature) != YPfalse)
    ? CHKREF(Ysexpr_iterate_signature)
    : YPfalse),fun_sexpr_iterate_signature_963)), (regsym(&Ysexpr_iterate_signature,"sexpr-iterate-signature"))));
  fun_sexpr_iterate_inits_964 = YPmet(FUNCODEREF(fun_sexpr_iterate_inits_964),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_iterate_inits = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_iterate_inits) != YPfalse)
    ? CHKREF(Ysexpr_iterate_inits)
    : YPfalse),fun_sexpr_iterate_inits_964)), (regsym(&Ysexpr_iterate_inits,"sexpr-iterate-inits"))));
  fun_sexpr_iterate_body_965 = YPmet(FUNCODEREF(fun_sexpr_iterate_body_965),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_iterate_body = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_iterate_body) != YPfalse)
    ? CHKREF(Ysexpr_iterate_body)
    : YPfalse),fun_sexpr_iterate_body_965)), (regsym(&Ysexpr_iterate_body,"sexpr-iterate-body"))));
  fun_sexpr_iterate_Gloc_966 = YPmet(FUNCODEREF(fun_sexpr_iterate_Gloc_966),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_iterate_Gloc = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_iterate_Gloc) != YPfalse)
    ? CHKREF(Ysexpr_iterate_Gloc)
    : YPfalse),fun_sexpr_iterate_Gloc_966)), (regsym(&Ysexpr_iterate_Gloc,"sexpr-iterate->loc"))));
  lit_561 = YPPsym((P)"isa");
  (((YDsexpr_isa_tag = lit_561), (regsym(&YDsexpr_isa_tag,"$sexpr-isa-tag"))));
  fun_sexpr_isaQ_967 = YPmet(FUNCODEREF(fun_sexpr_isaQ_967),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_isaQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_isaQ) != YPfalse)
    ? CHKREF(Ysexpr_isaQ)
    : YPfalse),fun_sexpr_isaQ_967)), (regsym(&Ysexpr_isaQ,"sexpr-isa?"))));
  fun_sexpr_isa_parents_968 = YPmet(FUNCODEREF(fun_sexpr_isa_parents_968),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_isa_parents = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_isa_parents) != YPfalse)
    ? CHKREF(Ysexpr_isa_parents)
    : YPfalse),fun_sexpr_isa_parents_968)), (regsym(&Ysexpr_isa_parents,"sexpr-isa-parents"))));
  fun_sexpr_isa_slot_inits_969 = YPmet(FUNCODEREF(fun_sexpr_isa_slot_inits_969),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_isa_slot_inits = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_isa_slot_inits) != YPfalse)
    ? CHKREF(Ysexpr_isa_slot_inits)
    : YPfalse),fun_sexpr_isa_slot_inits_969)), (regsym(&Ysexpr_isa_slot_inits,"sexpr-isa-slot-inits"))));
  fun_sexpr_isa_init_slots_970 = YPmet(FUNCODEREF(fun_sexpr_isa_init_slots_970),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_isa_init_slots = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_isa_init_slots) != YPfalse)
    ? CHKREF(Ysexpr_isa_init_slots)
    : YPfalse),fun_sexpr_isa_init_slots_970)), (regsym(&Ysexpr_isa_init_slots,"sexpr-isa-init-slots"))));
  fun_sexpr_isa_init_values_971 = YPmet(FUNCODEREF(fun_sexpr_isa_init_values_971),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_isa_init_values = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_isa_init_values) != YPfalse)
    ? CHKREF(Ysexpr_isa_init_values)
    : YPfalse),fun_sexpr_isa_init_values_971)), (regsym(&Ysexpr_isa_init_values,"sexpr-isa-init-values"))));
  lit_562 = YPPsym((P)"slot");
  (((YDsexpr_slot_tag = lit_562), (regsym(&YDsexpr_slot_tag,"$sexpr-slot-tag"))));
  fun_sexpr_slotQ_972 = YPmet(FUNCODEREF(fun_sexpr_slotQ_972),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_slotQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_slotQ) != YPfalse)
    ? CHKREF(Ysexpr_slotQ)
    : YPfalse),fun_sexpr_slotQ_972)), (regsym(&Ysexpr_slotQ,"sexpr-slot?"))));
  fun_sexpr_slot_object_973 = YPmet(FUNCODEREF(fun_sexpr_slot_object_973),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_slot_object = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_slot_object) != YPfalse)
    ? CHKREF(Ysexpr_slot_object)
    : YPfalse),fun_sexpr_slot_object_973)), (regsym(&Ysexpr_slot_object,"sexpr-slot-object"))));
  fun_sexpr_slot_variable_974 = YPmet(FUNCODEREF(fun_sexpr_slot_variable_974),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_slot_variable = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_slot_variable) != YPfalse)
    ? CHKREF(Ysexpr_slot_variable)
    : YPfalse),fun_sexpr_slot_variable_974)), (regsym(&Ysexpr_slot_variable,"sexpr-slot-variable"))));
  lit_563 = YPint((P)4);
  lit_564 = YPint((P)3);
  lit_565 = YPPsym((P)"nul");
  fun_sexpr_slot_init_975 = YPmet(FUNCODEREF(fun_sexpr_slot_init_975),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_slot_init = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_slot_init) != YPfalse)
    ? CHKREF(Ysexpr_slot_init)
    : YPfalse),fun_sexpr_slot_init_975)), (regsym(&Ysexpr_slot_init,"sexpr-slot-init"))));
  lit_566 = YPPsym((P)"_x");
  lit_567 = YPPsym((P)"%slot-value");
  lit_568 = YPPsym((P)"_x");
  fun_sexpr_make_getter_976 = YPmet(FUNCODEREF(fun_sexpr_make_getter_976),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ysexpr_make_getter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_make_getter) != YPfalse)
    ? CHKREF(Ysexpr_make_getter)
    : YPfalse),fun_sexpr_make_getter_976)), (regsym(&Ysexpr_make_getter,"sexpr-make-getter"))));
  lit_569 = YPPsym((P)"_z");
  lit_570 = YPPsym((P)"_x");
  lit_571 = YPPsym((P)"%slot-value-setter");
  lit_572 = YPPsym((P)"_z");
  lit_573 = YPPsym((P)"_x");
  fun_sexpr_make_setter_977 = YPmet(FUNCODEREF(fun_sexpr_make_setter_977),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Ysexpr_make_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_make_setter) != YPfalse)
    ? CHKREF(Ysexpr_make_setter)
    : YPfalse),fun_sexpr_make_setter_977)), (regsym(&Ysexpr_make_setter,"sexpr-make-setter"))));
  lit_574 = YPsb((P)"-setter");
  fun_sexpr_make_setter_name_978 = YPmet(FUNCODEREF(fun_sexpr_make_setter_name_978),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_make_setter_name = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_make_setter_name) != YPfalse)
    ? CHKREF(Ysexpr_make_setter_name)
    : YPfalse),fun_sexpr_make_setter_name_978)), (regsym(&Ysexpr_make_setter_name,"sexpr-make-setter-name"))));
  fun_sexpr_macroQ_979 = YPmet(FUNCODEREF(fun_sexpr_macroQ_979),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_macroQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_macroQ) != YPfalse)
    ? CHKREF(Ysexpr_macroQ)
    : YPfalse),fun_sexpr_macroQ_979)), (regsym(&Ysexpr_macroQ,"sexpr-macro?"))));
  lit_575 = YPPsym((P)"macro-expand");
  (((YDsexpr_macro_expand_tag = lit_575), (regsym(&YDsexpr_macro_expand_tag,"$sexpr-macro-expand-tag"))));
  fun_sexpr_macro_expandQ_980 = YPmet(FUNCODEREF(fun_sexpr_macro_expandQ_980),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_macro_expandQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_macro_expandQ) != YPfalse)
    ? CHKREF(Ysexpr_macro_expandQ)
    : YPfalse),fun_sexpr_macro_expandQ_980)), (regsym(&Ysexpr_macro_expandQ,"sexpr-macro-expand?"))));
  lit_576 = YPPsym((P)"mif");
  (((YDsexpr_syntax_if_tag = lit_576), (regsym(&YDsexpr_syntax_if_tag,"$sexpr-syntax-if-tag"))));
  fun_sexpr_make_syntax_if_981 = YPmet(FUNCODEREF(fun_sexpr_make_syntax_if_981),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),ENVNUL); 
  (((Ysexpr_make_syntax_if = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_make_syntax_if) != YPfalse)
    ? CHKREF(Ysexpr_make_syntax_if)
    : YPfalse),fun_sexpr_make_syntax_if_981)), (regsym(&Ysexpr_make_syntax_if,"sexpr-make-syntax-if"))));
  lit_577 = YPPsym((P)"comma-atsign");
  (((YTcomma_atsignT = lit_577), (regsym(&YTcomma_atsignT,"*comma-atsign*"))));
  lit_578 = YPPsym((P)"bq-list");
  (((YTbq_listT = lit_578), (regsym(&YTbq_listT,"*bq-list*"))));
  lit_579 = YPPsym((P)"bq-list*");
  (((YTbq_listTT = lit_579), (regsym(&YTbq_listTT,"*bq-list**"))));
  lit_580 = YPPsym((P)"bq-append");
  (((YTbq_appendT = lit_580), (regsym(&YTbq_appendT,"*bq-append*"))));
  lit_581 = YPPsym((P)"bq-nconc");
  (((YTbq_nconcT = lit_581), (regsym(&YTbq_nconcT,"*bq-nconc*"))));
  lit_582 = YPPsym((P)"bq-clobberable");
  (((YTbq_clobberableT = lit_582), (regsym(&YTbq_clobberableT,"*bq-clobberable*"))));
  lit_583 = YPPsym((P)"bq-quote");
  (((YTbq_quoteT = lit_583), (regsym(&YTbq_quoteT,"*bq-quote*"))));
  fun_sexpr_expand_backquote_982 = YPmet(FUNCODEREF(fun_sexpr_expand_backquote_982),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_expand_backquote = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_expand_backquote) != YPfalse)
    ? CHKREF(Ysexpr_expand_backquote)
    : YPfalse),fun_sexpr_expand_backquote_982)), (regsym(&Ysexpr_expand_backquote,"sexpr-expand-backquote"))));
  lit_584 = YPPsym((P)"unquote");
  fun_sexpr_unquoteQ_983 = YPmet(FUNCODEREF(fun_sexpr_unquoteQ_983),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_unquoteQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_unquoteQ) != YPfalse)
    ? CHKREF(Ysexpr_unquoteQ)
    : YPfalse),fun_sexpr_unquoteQ_983)), (regsym(&Ysexpr_unquoteQ,"sexpr-unquote?"))));
  lit_585 = YPPsym((P)"unquote-splicing");
  fun_sexpr_unquote_splicingQ_984 = YPmet(FUNCODEREF(fun_sexpr_unquote_splicingQ_984),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_unquote_splicingQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_unquote_splicingQ) != YPfalse)
    ? CHKREF(Ysexpr_unquote_splicingQ)
    : YPfalse),fun_sexpr_unquote_splicingQ_984)), (regsym(&Ysexpr_unquote_splicingQ,"sexpr-unquote-splicing?"))));
  fun_sexpr_backquoteQ_985 = YPmet(FUNCODEREF(fun_sexpr_backquoteQ_985),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_backquoteQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_backquoteQ) != YPfalse)
    ? CHKREF(Ysexpr_backquoteQ)
    : YPfalse),fun_sexpr_backquoteQ_985)), (regsym(&Ysexpr_backquoteQ,"sexpr-backquote?"))));
  fun_sexpr_atomQ_986 = YPmet(FUNCODEREF(fun_sexpr_atomQ_986),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_atomQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_atomQ) != YPfalse)
    ? CHKREF(Ysexpr_atomQ)
    : YPfalse),fun_sexpr_atomQ_986)), (regsym(&Ysexpr_atomQ,"sexpr-atom?"))));
  fun_nreconc_987 = YPmet(FUNCODEREF(fun_nreconc_987),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ynreconc = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ynreconc) != YPfalse)
    ? CHKREF(Ynreconc)
    : YPfalse),fun_nreconc_987)), (regsym(&Ynreconc,"nreconc"))));
  lit_586 = YPsb((P)"UNQUOTE-SPLICING %= AFTER BQ");
  lit_587 = YPsb((P)"Malformed ,%=");
  lit_588 = YPsb((P)"Dotted ,@%=");
  fun_loop_988 = YPmet(FUNCODEREF(fun_loop_988),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_989 = YPmet(FUNCODEREF(fun_989),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_bq_process_990 = YPmet(FUNCODEREF(fun_bq_process_990),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ybq_process = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybq_process) != YPfalse)
    ? CHKREF(Ybq_process)
    : YPfalse),fun_bq_process_990)), (regsym(&Ybq_process,"bq-process"))));
  fun_bracket_991 = YPmet(FUNCODEREF(fun_bracket_991),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ybracket = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybracket) != YPfalse)
    ? CHKREF(Ybracket)
    : YPfalse),fun_bracket_991)), (regsym(&Ybracket,"bracket"))));
  fun_map_tree_992 = YPmet(FUNCODEREF(fun_map_tree_992),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ymap_tree = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymap_tree) != YPfalse)
    ? CHKREF(Ymap_tree)
    : YPfalse),fun_map_tree_992)), (regsym(&Ymap_tree,"map-tree"))));
  lit_589 = YPPsym((P)"lst");
  lit_590 = YPPsym((P)"cat");
  lit_591 = YPPsym((P)"cat!");
  lit_592 = YPPsym((P)"list*");
  lit_593 = YPPsym((P)"quote");
  lit_594 = YPPsym((P)"pair");
  fun_bq_remove_tokens_993 = YPmet(FUNCODEREF(fun_bq_remove_tokens_993),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ybq_remove_tokens = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybq_remove_tokens) != YPfalse)
    ? CHKREF(Ybq_remove_tokens)
    : YPfalse),fun_bq_remove_tokens_993)), (regsym(&Ybq_remove_tokens,"bq-remove-tokens"))));
  fun_sexpr_syntax_ifQ_994 = YPmet(FUNCODEREF(fun_sexpr_syntax_ifQ_994),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_syntax_ifQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_syntax_ifQ) != YPfalse)
    ? CHKREF(Ysexpr_syntax_ifQ)
    : YPfalse),fun_sexpr_syntax_ifQ_994)), (regsym(&Ysexpr_syntax_ifQ,"sexpr-syntax-if?"))));
  fun_sexpr_syntax_if_value_995 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_value_995),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_syntax_if_value = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_syntax_if_value) != YPfalse)
    ? CHKREF(Ysexpr_syntax_if_value)
    : YPfalse),fun_sexpr_syntax_if_value_995)), (regsym(&Ysexpr_syntax_if_value,"sexpr-syntax-if-value"))));
  fun_sexpr_syntax_if_pattern_996 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_pattern_996),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_syntax_if_pattern = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_syntax_if_pattern) != YPfalse)
    ? CHKREF(Ysexpr_syntax_if_pattern)
    : YPfalse),fun_sexpr_syntax_if_pattern_996)), (regsym(&Ysexpr_syntax_if_pattern,"sexpr-syntax-if-pattern"))));
  fun_sexpr_syntax_if_then_997 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_then_997),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_syntax_if_then = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_syntax_if_then) != YPfalse)
    ? CHKREF(Ysexpr_syntax_if_then)
    : YPfalse),fun_sexpr_syntax_if_then_997)), (regsym(&Ysexpr_syntax_if_then,"sexpr-syntax-if-then"))));
  lit_595 = YPint((P)3);
  fun_sexpr_syntax_if_else_998 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_else_998),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_syntax_if_else = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_syntax_if_else) != YPfalse)
    ? CHKREF(Ysexpr_syntax_if_else)
    : YPfalse),fun_sexpr_syntax_if_else_998)), (regsym(&Ysexpr_syntax_if_else,"sexpr-syntax-if-else"))));
  fun_sexpr_pattern_variableQ_999 = YPmet(FUNCODEREF(fun_sexpr_pattern_variableQ_999),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_pattern_variableQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_pattern_variableQ) != YPfalse)
    ? CHKREF(Ysexpr_pattern_variableQ)
    : YPfalse),fun_sexpr_pattern_variableQ_999)), (regsym(&Ysexpr_pattern_variableQ,"sexpr-pattern-variable?"))));
  fun_sexpr_pattern_variable_name_1000 = YPmet(FUNCODEREF(fun_sexpr_pattern_variable_name_1000),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_pattern_variable_name = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_pattern_variable_name) != YPfalse)
    ? CHKREF(Ysexpr_pattern_variable_name)
    : YPfalse),fun_sexpr_pattern_variable_name_1000)), (regsym(&Ysexpr_pattern_variable_name,"sexpr-pattern-variable-name"))));
  fun_col_1001 = YPmet(FUNCODEREF(fun_col_1001),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_sexpr_bind_pattern_variables_1002 = YPmet(FUNCODEREF(fun_sexpr_bind_pattern_variables_1002),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_bind_pattern_variables = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_bind_pattern_variables) != YPfalse)
    ? CHKREF(Ysexpr_bind_pattern_variables)
    : YPfalse),fun_sexpr_bind_pattern_variables_1002)), (regsym(&Ysexpr_bind_pattern_variables,"sexpr-bind-pattern-variables"))));
  lit_596 = YPPsym((P)"exp");
  lit_597 = YPPsym((P)"exp");
  fun_sexpr_make_macro_function_1003 = YPmet(FUNCODEREF(fun_sexpr_make_macro_function_1003),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysexpr_make_macro_function = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysexpr_make_macro_function) != YPfalse)
    ? CHKREF(Ysexpr_make_macro_function)
    : YPfalse),fun_sexpr_make_macro_function_1003)), (regsym(&Ysexpr_make_macro_function,"sexpr-make-macro-function"))));
  (((YLglo_envG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLanyG),(P)Ynil),Ynil,Ynil)), (regsym(&YLglo_envG,"<glo-env>"))));
  fun_env_values_1004 = YPmet(FUNCODEREF(fun_env_values_1004),YPpair(CHKREF(YLglo_envG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yenv_values = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_values) != YPfalse)
    ? CHKREF(Yenv_values)
    : YPfalse),fun_env_values_1004)), (regsym(&Yenv_values,"env-values"))));
  fun_env_values_setter_1005 = YPmet(FUNCODEREF(fun_env_values_setter_1005),YPpair(CHKREF(YLvecG),YPpair(CHKREF(YLglo_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yenv_values_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_values_setter) != YPfalse)
    ? CHKREF(Yenv_values_setter)
    : YPfalse),fun_env_values_setter_1005)), (regsym(&Yenv_values_setter,"env-values-setter"))));
  fun_1006 = YPmet(FUNCODEREF(fun_1006),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLglo_envG),CHKREF(Yenv_values),CHKREF(Yenv_values_setter),CHKREF(YLvecG),fun_1006));
  lit_598 = YPint((P)10000);
  (((YDmin_glo_env_size = lit_598), (regsym(&YDmin_glo_env_size,"$min-glo-env-size"))));
  fun_fab_glo_env_1007 = YPmet(FUNCODEREF(fun_fab_glo_env_1007),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Yfab_glo_env = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfab_glo_env) != YPfalse)
    ? CHKREF(Yfab_glo_env)
    : YPfalse),fun_fab_glo_env_1007)), (regsym(&Yfab_glo_env,"fab-glo-env"))));
  fun_env_global_value_1008 = YPmet(FUNCODEREF(fun_env_global_value_1008),YPpair(CHKREF(YLglo_envG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yenv_global_value = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_global_value) != YPfalse)
    ? CHKREF(Yenv_global_value)
    : YPfalse),fun_env_global_value_1008)), (regsym(&Yenv_global_value,"env-global-value"))));
  fun_env_global_value_setter_1009 = YPmet(FUNCODEREF(fun_env_global_value_setter_1009),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLglo_envG),YPpair(CHKREF(YLintG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yenv_global_value_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_global_value_setter) != YPfalse)
    ? CHKREF(Yenv_global_value_setter)
    : YPfalse),fun_env_global_value_setter_1009)), (regsym(&Yenv_global_value_setter,"env-global-value-setter"))));
  fun_env_define_global_bindingX_1010 = YPmet(FUNCODEREF(fun_env_define_global_bindingX_1010),YPpair(CHKREF(YLglo_envG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yenv_define_global_bindingX = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_define_global_bindingX) != YPfalse)
    ? CHKREF(Yenv_define_global_bindingX)
    : YPfalse),fun_env_define_global_bindingX_1010)), (regsym(&Yenv_define_global_bindingX,"env-define-global-binding!"))));
  fun_env_runtime_value_1011 = YPmet(FUNCODEREF(fun_env_runtime_value_1011),YPpair(CHKREF(YLlocG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yenv_runtime_value = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_runtime_value) != YPfalse)
    ? CHKREF(Yenv_runtime_value)
    : YPfalse),fun_env_runtime_value_1011)), (regsym(&Yenv_runtime_value,"env-runtime-value"))));
  fun_env_runtime_value_setter_1012 = YPmet(FUNCODEREF(fun_env_runtime_value_setter_1012),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlocG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yenv_runtime_value_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_runtime_value_setter) != YPfalse)
    ? CHKREF(Yenv_runtime_value_setter)
    : YPfalse),fun_env_runtime_value_setter_1012)), (regsym(&Yenv_runtime_value_setter,"env-runtime-value-setter"))));
  (((YLloc_envG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLanyG),(P)Ynil),Ynil,Ynil)), (regsym(&YLloc_envG,"<loc-env>"))));
  fun_env_parent_1013 = YPmet(FUNCODEREF(fun_env_parent_1013),YPpair(CHKREF(YLloc_envG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yenv_parent = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_parent) != YPfalse)
    ? CHKREF(Yenv_parent)
    : YPfalse),fun_env_parent_1013)), (regsym(&Yenv_parent,"env-parent"))));
  fun_env_parent_setter_1014 = YPmet(FUNCODEREF(fun_env_parent_setter_1014),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yenv_parent_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_parent_setter) != YPfalse)
    ? CHKREF(Yenv_parent_setter)
    : YPfalse),fun_env_parent_setter_1014)), (regsym(&Yenv_parent_setter,"env-parent-setter"))));
  fun_1015 = YPmet(FUNCODEREF(fun_1015),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLloc_envG),CHKREF(Yenv_parent),CHKREF(Yenv_parent_setter),CHKREF(YLanyG),fun_1015));
  fun_env_function_1016 = YPmet(FUNCODEREF(fun_env_function_1016),YPpair(CHKREF(YLloc_envG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yenv_function = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_function) != YPfalse)
    ? CHKREF(Yenv_function)
    : YPfalse),fun_env_function_1016)), (regsym(&Yenv_function,"env-function"))));
  fun_env_function_setter_1017 = YPmet(FUNCODEREF(fun_env_function_setter_1017),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yenv_function_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_function_setter) != YPfalse)
    ? CHKREF(Yenv_function_setter)
    : YPfalse),fun_env_function_setter_1017)), (regsym(&Yenv_function_setter,"env-function-setter"))));
  fun_1018 = YPmet(FUNCODEREF(fun_1018),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLloc_envG),CHKREF(Yenv_function),CHKREF(Yenv_function_setter),CHKREF(YLanyG),fun_1018));
  fun_env_names_1019 = YPmet(FUNCODEREF(fun_env_names_1019),YPpair(CHKREF(YLloc_envG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yenv_names = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_names) != YPfalse)
    ? CHKREF(Yenv_names)
    : YPfalse),fun_env_names_1019)), (regsym(&Yenv_names,"env-names"))));
  fun_env_names_setter_1020 = YPmet(FUNCODEREF(fun_env_names_setter_1020),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yenv_names_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_names_setter) != YPfalse)
    ? CHKREF(Yenv_names_setter)
    : YPfalse),fun_env_names_setter_1020)), (regsym(&Yenv_names_setter,"env-names-setter"))));
  fun_1021 = YPmet(FUNCODEREF(fun_1021),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLloc_envG),CHKREF(Yenv_names),CHKREF(Yenv_names_setter),CHKREF(YLlstG),fun_1021));
  fun_env_values_1022 = YPmet(FUNCODEREF(fun_env_values_1022),YPpair(CHKREF(YLloc_envG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yenv_values = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_values) != YPfalse)
    ? CHKREF(Yenv_values)
    : YPfalse),fun_env_values_1022)), (regsym(&Yenv_values,"env-values"))));
  fun_env_values_setter_1023 = YPmet(FUNCODEREF(fun_env_values_setter_1023),YPpair(CHKREF(YLvecG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yenv_values_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_values_setter) != YPfalse)
    ? CHKREF(Yenv_values_setter)
    : YPfalse),fun_env_values_setter_1023)), (regsym(&Yenv_values_setter,"env-values-setter"))));
  fun_1024 = YPmet(FUNCODEREF(fun_1024),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLloc_envG),CHKREF(Yenv_values),CHKREF(Yenv_values_setter),CHKREF(YLvecG),fun_1024));
  (((YDnul_loc_env = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLloc_envG),(P)Ynil),Ynil,Ynil)), (regsym(&YDnul_loc_env,"$nul-loc-env"))));
  fun_env_frameX_1025 = YPmet(FUNCODEREF(fun_env_frameX_1025),YPpair(CHKREF(YLloc_envG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)))),YPfalse,YPint((P)4),ENVNUL); 
  (((Yenv_frameX = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_frameX) != YPfalse)
    ? CHKREF(Yenv_frameX)
    : YPfalse),fun_env_frameX_1025)), (regsym(&Yenv_frameX,"env-frame!"))));
  lit_599 = YPint((P)0);
  lit_600 = YPint((P)1);
  fun_env_local_value_1026 = YPmet(FUNCODEREF(fun_env_local_value_1026),YPpair(CHKREF(YLloc_envG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yenv_local_value = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_local_value) != YPfalse)
    ? CHKREF(Yenv_local_value)
    : YPfalse),fun_env_local_value_1026)), (regsym(&Yenv_local_value,"env-local-value"))));
  lit_601 = YPint((P)0);
  lit_602 = YPint((P)1);
  fun_env_local_value_setter_1027 = YPmet(FUNCODEREF(fun_env_local_value_setter_1027),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLloc_envG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil)))),YPfalse,YPint((P)4),ENVNUL); 
  (((Yenv_local_value_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_local_value_setter) != YPfalse)
    ? CHKREF(Yenv_local_value_setter)
    : YPfalse),fun_env_local_value_setter_1027)), (regsym(&Yenv_local_value_setter,"env-local-value-setter"))));
  lit_603 = YPint((P)1);
  lit_604 = YPint((P)0);
  fun_loop_1028 = YPmet(FUNCODEREF(fun_loop_1028),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_env_binding_value_1029 = YPmet(FUNCODEREF(fun_env_binding_value_1029),YPpair(CHKREF(YLloc_envG),YPpair(CHKREF(YLsymG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yenv_binding_value = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_binding_value) != YPfalse)
    ? CHKREF(Yenv_binding_value)
    : YPfalse),fun_env_binding_value_1029)), (regsym(&Yenv_binding_value,"env-binding-value"))));
  lit_605 = YPint((P)1);
  lit_606 = YPint((P)0);
  fun_loop_1030 = YPmet(FUNCODEREF(fun_loop_1030),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_env_binding_value_setter_1031 = YPmet(FUNCODEREF(fun_env_binding_value_setter_1031),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLloc_envG),YPpair(CHKREF(YLsymG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yenv_binding_value_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_binding_value_setter) != YPfalse)
    ? CHKREF(Yenv_binding_value_setter)
    : YPfalse),fun_env_binding_value_setter_1031)), (regsym(&Yenv_binding_value_setter,"env-binding-value-setter"))));
  fun_objectify_error_1032 = YPmet(FUNCODEREF(fun_objectify_error_1032),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),ENVNUL); 
  (((Yobjectify_error = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_error) != YPfalse)
    ? CHKREF(Yobjectify_error)
    : YPfalse),fun_objectify_error_1032)), (regsym(&Yobjectify_error,"objectify-error"))));
  (((YLprogramG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLanyG),(P)Ynil),Ynil,Ynil)), (regsym(&YLprogramG,"<program>"))));
  (((YLbinding_nameG = CHKREF(YLanyG)), (regsym(&YLbinding_nameG,"<binding-name>"))));
  (((YLbindingG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLanyG),(P)Ynil),Ynil,Ynil)), (regsym(&YLbindingG,"<binding>"))));
  fun_binding_name_1033 = YPmet(FUNCODEREF(fun_binding_name_1033),YPpair(CHKREF(YLbindingG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ybinding_name = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybinding_name) != YPfalse)
    ? CHKREF(Ybinding_name)
    : YPfalse),fun_binding_name_1033)), (regsym(&Ybinding_name,"binding-name"))));
  fun_binding_name_setter_1034 = YPmet(FUNCODEREF(fun_binding_name_setter_1034),YPpair(CHKREF(YLbinding_nameG),YPpair(CHKREF(YLbindingG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ybinding_name_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybinding_name_setter) != YPfalse)
    ? CHKREF(Ybinding_name_setter)
    : YPfalse),fun_binding_name_setter_1034)), (regsym(&Ybinding_name_setter,"binding-name-setter"))));
  fun_1035 = YPmet(FUNCODEREF(fun_1035),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLbindingG),CHKREF(Ybinding_name),CHKREF(Ybinding_name_setter),CHKREF(YLbinding_nameG),fun_1035));
  fun_binding_type_1036 = YPmet(FUNCODEREF(fun_binding_type_1036),YPpair(CHKREF(YLbindingG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ybinding_type = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybinding_type) != YPfalse)
    ? CHKREF(Ybinding_type)
    : YPfalse),fun_binding_type_1036)), (regsym(&Ybinding_type,"binding-type"))));
  fun_binding_type_setter_1037 = YPmet(FUNCODEREF(fun_binding_type_setter_1037),YPpair(CHKREF(YLprogramG),YPpair(CHKREF(YLbindingG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ybinding_type_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybinding_type_setter) != YPfalse)
    ? CHKREF(Ybinding_type_setter)
    : YPfalse),fun_binding_type_setter_1037)), (regsym(&Ybinding_type_setter,"binding-type-setter"))));
  fun_1038 = YPmet(FUNCODEREF(fun_1038),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLbindingG),CHKREF(Ybinding_type),CHKREF(Ybinding_type_setter),CHKREF(YLprogramG),fun_1038));
  fun_binding_freeQ_1039 = YPmet(FUNCODEREF(fun_binding_freeQ_1039),YPpair(CHKREF(YLbindingG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ybinding_freeQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybinding_freeQ) != YPfalse)
    ? CHKREF(Ybinding_freeQ)
    : YPfalse),fun_binding_freeQ_1039)), (regsym(&Ybinding_freeQ,"binding-free?"))));
  (((YLglobal_bindingG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLbindingG),(P)Ynil),Ynil,Ynil)), (regsym(&YLglobal_bindingG,"<global-binding>"))));
  fun_binding_freeQ_1040 = YPmet(FUNCODEREF(fun_binding_freeQ_1040),YPpair(CHKREF(YLglobal_bindingG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ybinding_freeQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybinding_freeQ) != YPfalse)
    ? CHKREF(Ybinding_freeQ)
    : YPfalse),fun_binding_freeQ_1040)), (regsym(&Ybinding_freeQ,"binding-free?"))));
  fun_binding_freeQ_setter_1041 = YPmet(FUNCODEREF(fun_binding_freeQ_setter_1041),YPpair(CHKREF(YLlogG),YPpair(CHKREF(YLglobal_bindingG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ybinding_freeQ_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybinding_freeQ_setter) != YPfalse)
    ? CHKREF(Ybinding_freeQ_setter)
    : YPfalse),fun_binding_freeQ_setter_1041)), (regsym(&Ybinding_freeQ_setter,"binding-free?-setter"))));
  fun_1042 = YPmet(FUNCODEREF(fun_1042),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLglobal_bindingG),CHKREF(Ybinding_freeQ),CHKREF(Ybinding_freeQ_setter),CHKREF(YLlogG),fun_1042));
  fun_binding_index_1043 = YPmet(FUNCODEREF(fun_binding_index_1043),YPpair(CHKREF(YLglobal_bindingG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ybinding_index = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybinding_index) != YPfalse)
    ? CHKREF(Ybinding_index)
    : YPfalse),fun_binding_index_1043)), (regsym(&Ybinding_index,"binding-index"))));
  fun_binding_index_setter_1044 = YPmet(FUNCODEREF(fun_binding_index_setter_1044),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLglobal_bindingG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ybinding_index_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybinding_index_setter) != YPfalse)
    ? CHKREF(Ybinding_index_setter)
    : YPfalse),fun_binding_index_setter_1044)), (regsym(&Ybinding_index_setter,"binding-index-setter"))));
  fun_1045 = YPmet(FUNCODEREF(fun_1045),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLglobal_bindingG),CHKREF(Ybinding_index),CHKREF(Ybinding_index_setter),CHKREF(YLintG),fun_1045));
  (((YLruntime_bindingG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLbindingG),(P)Ynil),Ynil,Ynil)), (regsym(&YLruntime_bindingG,"<runtime-binding>"))));
  fun_binding_locative_1046 = YPmet(FUNCODEREF(fun_binding_locative_1046),YPpair(CHKREF(YLruntime_bindingG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ybinding_locative = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybinding_locative) != YPfalse)
    ? CHKREF(Ybinding_locative)
    : YPfalse),fun_binding_locative_1046)), (regsym(&Ybinding_locative,"binding-locative"))));
  fun_binding_locative_setter_1047 = YPmet(FUNCODEREF(fun_binding_locative_setter_1047),YPpair(CHKREF(YLlocG),YPpair(CHKREF(YLruntime_bindingG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ybinding_locative_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybinding_locative_setter) != YPfalse)
    ? CHKREF(Ybinding_locative_setter)
    : YPfalse),fun_binding_locative_setter_1047)), (regsym(&Ybinding_locative_setter,"binding-locative-setter"))));
  fun_1048 = YPmet(FUNCODEREF(fun_1048),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLruntime_bindingG),CHKREF(Ybinding_locative),CHKREF(Ybinding_locative_setter),CHKREF(YLlocG),fun_1048));
  (((YLpredefined_bindingG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLbindingG),(P)Ynil),Ynil,Ynil)), (regsym(&YLpredefined_bindingG,"<predefined-binding>"))));
  fun_binding_description_1049 = YPmet(FUNCODEREF(fun_binding_description_1049),YPpair(CHKREF(YLpredefined_bindingG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ybinding_description = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybinding_description) != YPfalse)
    ? CHKREF(Ybinding_description)
    : YPfalse),fun_binding_description_1049)), (regsym(&Ybinding_description,"binding-description"))));
  fun_binding_description_setter_1050 = YPmet(FUNCODEREF(fun_binding_description_setter_1050),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLpredefined_bindingG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ybinding_description_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybinding_description_setter) != YPfalse)
    ? CHKREF(Ybinding_description_setter)
    : YPfalse),fun_binding_description_setter_1050)), (regsym(&Ybinding_description_setter,"binding-description-setter"))));
  fun_1051 = YPmet(FUNCODEREF(fun_1051),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLpredefined_bindingG),CHKREF(Ybinding_description),CHKREF(Ybinding_description_setter),CHKREF(YLanyG),fun_1051));
  (((YLlocal_bindingG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLbindingG),(P)Ynil),Ynil,Ynil)), (regsym(&YLlocal_bindingG,"<local-binding>"))));
  fun_binding_mutableQ_1052 = YPmet(FUNCODEREF(fun_binding_mutableQ_1052),YPpair(CHKREF(YLlocal_bindingG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ybinding_mutableQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybinding_mutableQ) != YPfalse)
    ? CHKREF(Ybinding_mutableQ)
    : YPfalse),fun_binding_mutableQ_1052)), (regsym(&Ybinding_mutableQ,"binding-mutable?"))));
  fun_binding_mutableQ_setter_1053 = YPmet(FUNCODEREF(fun_binding_mutableQ_setter_1053),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlocal_bindingG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ybinding_mutableQ_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybinding_mutableQ_setter) != YPfalse)
    ? CHKREF(Ybinding_mutableQ_setter)
    : YPfalse),fun_binding_mutableQ_setter_1053)), (regsym(&Ybinding_mutableQ_setter,"binding-mutable?-setter"))));
  fun_1054 = YPmet(FUNCODEREF(fun_1054),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLlocal_bindingG),CHKREF(Ybinding_mutableQ),CHKREF(Ybinding_mutableQ_setter),CHKREF(YLanyG),fun_1054));
  fun_binding_dottedQ_1055 = YPmet(FUNCODEREF(fun_binding_dottedQ_1055),YPpair(CHKREF(YLlocal_bindingG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ybinding_dottedQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybinding_dottedQ) != YPfalse)
    ? CHKREF(Ybinding_dottedQ)
    : YPfalse),fun_binding_dottedQ_1055)), (regsym(&Ybinding_dottedQ,"binding-dotted?"))));
  fun_binding_dottedQ_setter_1056 = YPmet(FUNCODEREF(fun_binding_dottedQ_setter_1056),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlocal_bindingG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ybinding_dottedQ_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybinding_dottedQ_setter) != YPfalse)
    ? CHKREF(Ybinding_dottedQ_setter)
    : YPfalse),fun_binding_dottedQ_setter_1056)), (regsym(&Ybinding_dottedQ_setter,"binding-dotted?-setter"))));
  fun_1057 = YPmet(FUNCODEREF(fun_1057),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLlocal_bindingG),CHKREF(Ybinding_dottedQ),CHKREF(Ybinding_dottedQ_setter),CHKREF(YLanyG),fun_1057));
  (((YLdescriptionG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLanyG),(P)Ynil),Ynil,Ynil)), (regsym(&YLdescriptionG,"<description>"))));
  (((YLfunctional_descriptionG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLdescriptionG),(P)Ynil),Ynil,Ynil)), (regsym(&YLfunctional_descriptionG,"<functional-description>"))));
  fun_description_comparator_1058 = YPmet(FUNCODEREF(fun_description_comparator_1058),YPpair(CHKREF(YLfunctional_descriptionG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ydescription_comparator = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydescription_comparator) != YPfalse)
    ? CHKREF(Ydescription_comparator)
    : YPfalse),fun_description_comparator_1058)), (regsym(&Ydescription_comparator,"description-comparator"))));
  fun_description_comparator_setter_1059 = YPmet(FUNCODEREF(fun_description_comparator_setter_1059),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLfunctional_descriptionG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ydescription_comparator_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydescription_comparator_setter) != YPfalse)
    ? CHKREF(Ydescription_comparator_setter)
    : YPfalse),fun_description_comparator_setter_1059)), (regsym(&Ydescription_comparator_setter,"description-comparator-setter"))));
  fun_1060 = YPmet(FUNCODEREF(fun_1060),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLfunctional_descriptionG),CHKREF(Ydescription_comparator),CHKREF(Ydescription_comparator_setter),CHKREF(YLanyG),fun_1060));
  fun_description_arity_1061 = YPmet(FUNCODEREF(fun_description_arity_1061),YPpair(CHKREF(YLfunctional_descriptionG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ydescription_arity = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydescription_arity) != YPfalse)
    ? CHKREF(Ydescription_arity)
    : YPfalse),fun_description_arity_1061)), (regsym(&Ydescription_arity,"description-arity"))));
  fun_description_arity_setter_1062 = YPmet(FUNCODEREF(fun_description_arity_setter_1062),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLfunctional_descriptionG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ydescription_arity_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydescription_arity_setter) != YPfalse)
    ? CHKREF(Ydescription_arity_setter)
    : YPfalse),fun_description_arity_setter_1062)), (regsym(&Ydescription_arity_setter,"description-arity-setter"))));
  fun_1063 = YPmet(FUNCODEREF(fun_1063),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLfunctional_descriptionG),CHKREF(Ydescription_arity),CHKREF(Ydescription_arity_setter),CHKREF(YLanyG),fun_1063));
  fun_description_generator_1064 = YPmet(FUNCODEREF(fun_description_generator_1064),YPpair(CHKREF(YLfunctional_descriptionG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ydescription_generator = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydescription_generator) != YPfalse)
    ? CHKREF(Ydescription_generator)
    : YPfalse),fun_description_generator_1064)), (regsym(&Ydescription_generator,"description-generator"))));
  fun_description_generator_setter_1065 = YPmet(FUNCODEREF(fun_description_generator_setter_1065),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLfunctional_descriptionG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ydescription_generator_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydescription_generator_setter) != YPfalse)
    ? CHKREF(Ydescription_generator_setter)
    : YPfalse),fun_description_generator_setter_1065)), (regsym(&Ydescription_generator_setter,"description-generator-setter"))));
  fun_1066 = YPmet(FUNCODEREF(fun_1066),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLfunctional_descriptionG),CHKREF(Ydescription_generator),CHKREF(Ydescription_generator_setter),CHKREF(YLanyG),fun_1066));
  (((YLconstant_descriptionG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLdescriptionG),(P)Ynil),Ynil,Ynil)), (regsym(&YLconstant_descriptionG,"<constant-description>"))));
  fun_description_value_1067 = YPmet(FUNCODEREF(fun_description_value_1067),YPpair(CHKREF(YLconstant_descriptionG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ydescription_value = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydescription_value) != YPfalse)
    ? CHKREF(Ydescription_value)
    : YPfalse),fun_description_value_1067)), (regsym(&Ydescription_value,"description-value"))));
  fun_description_value_setter_1068 = YPmet(FUNCODEREF(fun_description_value_setter_1068),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLconstant_descriptionG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ydescription_value_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydescription_value_setter) != YPfalse)
    ? CHKREF(Ydescription_value_setter)
    : YPfalse),fun_description_value_setter_1068)), (regsym(&Ydescription_value_setter,"description-value-setter"))));
  fun_1069 = YPmet(FUNCODEREF(fun_1069),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLconstant_descriptionG),CHKREF(Ydescription_value),CHKREF(Ydescription_value_setter),CHKREF(YLanyG),fun_1069));
  (((YLcompile_timeG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLprogramG),(P)Ynil),Ynil,Ynil)), (regsym(&YLcompile_timeG,"<compile-time>"))));
  fun_compile_time_program_1070 = YPmet(FUNCODEREF(fun_compile_time_program_1070),YPpair(CHKREF(YLcompile_timeG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ycompile_time_program = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycompile_time_program) != YPfalse)
    ? CHKREF(Ycompile_time_program)
    : YPfalse),fun_compile_time_program_1070)), (regsym(&Ycompile_time_program,"compile-time-program"))));
  fun_compile_time_program_setter_1071 = YPmet(FUNCODEREF(fun_compile_time_program_setter_1071),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLcompile_timeG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ycompile_time_program_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycompile_time_program_setter) != YPfalse)
    ? CHKREF(Ycompile_time_program_setter)
    : YPfalse),fun_compile_time_program_setter_1071)), (regsym(&Ycompile_time_program_setter,"compile-time-program-setter"))));
  fun_1072 = YPmet(FUNCODEREF(fun_1072),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLcompile_timeG),CHKREF(Ycompile_time_program),CHKREF(Ycompile_time_program_setter),CHKREF(YLanyG),fun_1072));
  (((YLreferenceG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLprogramG),(P)Ynil),Ynil,Ynil)), (regsym(&YLreferenceG,"<reference>"))));
  (((YLmagic_bindingG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLglobal_bindingG),(P)(P)YPpair((P)CHKREF(YLreferenceG),(P)Ynil)),Ynil,Ynil)), (regsym(&YLmagic_bindingG,"<magic-binding>"))));
  fun_binding_handler_1073 = YPmet(FUNCODEREF(fun_binding_handler_1073),YPpair(CHKREF(YLmagic_bindingG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ybinding_handler = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybinding_handler) != YPfalse)
    ? CHKREF(Ybinding_handler)
    : YPfalse),fun_binding_handler_1073)), (regsym(&Ybinding_handler,"binding-handler"))));
  fun_binding_handler_setter_1074 = YPmet(FUNCODEREF(fun_binding_handler_setter_1074),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLmagic_bindingG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ybinding_handler_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybinding_handler_setter) != YPfalse)
    ? CHKREF(Ybinding_handler_setter)
    : YPfalse),fun_binding_handler_setter_1074)), (regsym(&Ybinding_handler_setter,"binding-handler-setter"))));
  fun_1075 = YPmet(FUNCODEREF(fun_1075),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLmagic_bindingG),CHKREF(Ybinding_handler),CHKREF(Ybinding_handler_setter),CHKREF(YLanyG),fun_1075));
  fun_reference_binding_1076 = YPmet(FUNCODEREF(fun_reference_binding_1076),YPpair(CHKREF(YLmagic_bindingG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yreference_binding = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yreference_binding) != YPfalse)
    ? CHKREF(Yreference_binding)
    : YPfalse),fun_reference_binding_1076)), (regsym(&Yreference_binding,"reference-binding"))));
  (((YLreal_referenceG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLreferenceG),(P)Ynil),Ynil,Ynil)), (regsym(&YLreal_referenceG,"<real-reference>"))));
  fun_reference_binding_1077 = YPmet(FUNCODEREF(fun_reference_binding_1077),YPpair(CHKREF(YLreal_referenceG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yreference_binding = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yreference_binding) != YPfalse)
    ? CHKREF(Yreference_binding)
    : YPfalse),fun_reference_binding_1077)), (regsym(&Yreference_binding,"reference-binding"))));
  fun_reference_binding_setter_1078 = YPmet(FUNCODEREF(fun_reference_binding_setter_1078),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLreal_referenceG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yreference_binding_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yreference_binding_setter) != YPfalse)
    ? CHKREF(Yreference_binding_setter)
    : YPfalse),fun_reference_binding_setter_1078)), (regsym(&Yreference_binding_setter,"reference-binding-setter"))));
  fun_1079 = YPmet(FUNCODEREF(fun_1079),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLreal_referenceG),CHKREF(Yreference_binding),CHKREF(Yreference_binding_setter),CHKREF(YLanyG),fun_1079));
  (((YLlocal_referenceG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLreal_referenceG),(P)Ynil),Ynil,Ynil)), (regsym(&YLlocal_referenceG,"<local-reference>"))));
  fun_reference_frame_number_1080 = YPmet(FUNCODEREF(fun_reference_frame_number_1080),YPpair(CHKREF(YLlocal_referenceG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yreference_frame_number = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yreference_frame_number) != YPfalse)
    ? CHKREF(Yreference_frame_number)
    : YPfalse),fun_reference_frame_number_1080)), (regsym(&Yreference_frame_number,"reference-frame-number"))));
  fun_reference_frame_number_setter_1081 = YPmet(FUNCODEREF(fun_reference_frame_number_setter_1081),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLlocal_referenceG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yreference_frame_number_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yreference_frame_number_setter) != YPfalse)
    ? CHKREF(Yreference_frame_number_setter)
    : YPfalse),fun_reference_frame_number_setter_1081)), (regsym(&Yreference_frame_number_setter,"reference-frame-number-setter"))));
  fun_1082 = YPmet(FUNCODEREF(fun_1082),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLlocal_referenceG),CHKREF(Yreference_frame_number),CHKREF(Yreference_frame_number_setter),CHKREF(YLintG),fun_1082));
  fun_reference_frame_offset_1083 = YPmet(FUNCODEREF(fun_reference_frame_offset_1083),YPpair(CHKREF(YLlocal_referenceG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yreference_frame_offset = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yreference_frame_offset) != YPfalse)
    ? CHKREF(Yreference_frame_offset)
    : YPfalse),fun_reference_frame_offset_1083)), (regsym(&Yreference_frame_offset,"reference-frame-offset"))));
  fun_reference_frame_offset_setter_1084 = YPmet(FUNCODEREF(fun_reference_frame_offset_setter_1084),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLlocal_referenceG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yreference_frame_offset_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yreference_frame_offset_setter) != YPfalse)
    ? CHKREF(Yreference_frame_offset_setter)
    : YPfalse),fun_reference_frame_offset_setter_1084)), (regsym(&Yreference_frame_offset_setter,"reference-frame-offset-setter"))));
  fun_1085 = YPmet(FUNCODEREF(fun_1085),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLlocal_referenceG),CHKREF(Yreference_frame_offset),CHKREF(Yreference_frame_offset_setter),CHKREF(YLintG),fun_1085));
  (((YLglobal_referenceG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLreal_referenceG),(P)Ynil),Ynil,Ynil)), (regsym(&YLglobal_referenceG,"<global-reference>"))));
  (((YLruntime_referenceG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLreal_referenceG),(P)Ynil),Ynil,Ynil)), (regsym(&YLruntime_referenceG,"<runtime-reference>"))));
  (((YLpredefined_referenceG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLreal_referenceG),(P)Ynil),Ynil,Ynil)), (regsym(&YLpredefined_referenceG,"<predefined-reference>"))));
  (((YLboundQG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLprogramG),(P)Ynil),Ynil,Ynil)), (regsym(&YLboundQG,"<bound?>"))));
  fun_boundQ_reference_1086 = YPmet(FUNCODEREF(fun_boundQ_reference_1086),YPpair(CHKREF(YLboundQG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((YboundQ_reference = CALL2(CHKREF(YPdefine_method),((BOUNDP(YboundQ_reference) != YPfalse)
    ? CHKREF(YboundQ_reference)
    : YPfalse),fun_boundQ_reference_1086)), (regsym(&YboundQ_reference,"bound?-reference"))));
  fun_boundQ_reference_setter_1087 = YPmet(FUNCODEREF(fun_boundQ_reference_setter_1087),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLboundQG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((YboundQ_reference_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(YboundQ_reference_setter) != YPfalse)
    ? CHKREF(YboundQ_reference_setter)
    : YPfalse),fun_boundQ_reference_setter_1087)), (regsym(&YboundQ_reference_setter,"bound?-reference-setter"))));
  fun_1088 = YPmet(FUNCODEREF(fun_1088),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLboundQG),CHKREF(YboundQ_reference),CHKREF(YboundQ_reference_setter),CHKREF(YLanyG),fun_1088));
  (((YLassignmentG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLprogramG),(P)Ynil),Ynil,Ynil)), (regsym(&YLassignmentG,"<assignment>"))));
  fun_assignment_form_1089 = YPmet(FUNCODEREF(fun_assignment_form_1089),YPpair(CHKREF(YLassignmentG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yassignment_form = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yassignment_form) != YPfalse)
    ? CHKREF(Yassignment_form)
    : YPfalse),fun_assignment_form_1089)), (regsym(&Yassignment_form,"assignment-form"))));
  fun_assignment_form_setter_1090 = YPmet(FUNCODEREF(fun_assignment_form_setter_1090),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLassignmentG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yassignment_form_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yassignment_form_setter) != YPfalse)
    ? CHKREF(Yassignment_form_setter)
    : YPfalse),fun_assignment_form_setter_1090)), (regsym(&Yassignment_form_setter,"assignment-form-setter"))));
  fun_1091 = YPmet(FUNCODEREF(fun_1091),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLassignmentG),CHKREF(Yassignment_form),CHKREF(Yassignment_form_setter),CHKREF(YLanyG),fun_1091));
  (((YLlocal_assignmentG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLassignmentG),(P)Ynil),Ynil,Ynil)), (regsym(&YLlocal_assignmentG,"<local-assignment>"))));
  fun_assignment_reference_1092 = YPmet(FUNCODEREF(fun_assignment_reference_1092),YPpair(CHKREF(YLlocal_assignmentG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yassignment_reference = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yassignment_reference) != YPfalse)
    ? CHKREF(Yassignment_reference)
    : YPfalse),fun_assignment_reference_1092)), (regsym(&Yassignment_reference,"assignment-reference"))));
  fun_assignment_reference_setter_1093 = YPmet(FUNCODEREF(fun_assignment_reference_setter_1093),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlocal_assignmentG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yassignment_reference_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yassignment_reference_setter) != YPfalse)
    ? CHKREF(Yassignment_reference_setter)
    : YPfalse),fun_assignment_reference_setter_1093)), (regsym(&Yassignment_reference_setter,"assignment-reference-setter"))));
  fun_1094 = YPmet(FUNCODEREF(fun_1094),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLlocal_assignmentG),CHKREF(Yassignment_reference),CHKREF(Yassignment_reference_setter),CHKREF(YLanyG),fun_1094));
  (((YLglobal_assignmentG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLassignmentG),(P)Ynil),Ynil,Ynil)), (regsym(&YLglobal_assignmentG,"<global-assignment>"))));
  fun_assignment_binding_1095 = YPmet(FUNCODEREF(fun_assignment_binding_1095),YPpair(CHKREF(YLglobal_assignmentG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yassignment_binding = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yassignment_binding) != YPfalse)
    ? CHKREF(Yassignment_binding)
    : YPfalse),fun_assignment_binding_1095)), (regsym(&Yassignment_binding,"assignment-binding"))));
  fun_assignment_binding_setter_1096 = YPmet(FUNCODEREF(fun_assignment_binding_setter_1096),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLglobal_assignmentG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yassignment_binding_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yassignment_binding_setter) != YPfalse)
    ? CHKREF(Yassignment_binding_setter)
    : YPfalse),fun_assignment_binding_setter_1096)), (regsym(&Yassignment_binding_setter,"assignment-binding-setter"))));
  fun_1097 = YPmet(FUNCODEREF(fun_1097),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLglobal_assignmentG),CHKREF(Yassignment_binding),CHKREF(Yassignment_binding_setter),CHKREF(YLanyG),fun_1097));
  (((YLruntime_assignmentG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLglobal_assignmentG),(P)Ynil),Ynil,Ynil)), (regsym(&YLruntime_assignmentG,"<runtime-assignment>"))));
  (((YLdefinitionG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLglobal_assignmentG),(P)Ynil),Ynil,Ynil)), (regsym(&YLdefinitionG,"<definition>"))));
  (((YLvariable_definitionG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLdefinitionG),(P)Ynil),Ynil,Ynil)), (regsym(&YLvariable_definitionG,"<variable-definition>"))));
  (((YLast_generic_definitionG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLdefinitionG),(P)Ynil),Ynil,Ynil)), (regsym(&YLast_generic_definitionG,"<ast-generic-definition>"))));
  (((YLast_function_definitionG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLdefinitionG),(P)Ynil),Ynil,Ynil)), (regsym(&YLast_function_definitionG,"<ast-function-definition>"))));
  (((YLast_method_definitionG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLdefinitionG),(P)Ynil),Ynil,Ynil)), (regsym(&YLast_method_definitionG,"<ast-method-definition>"))));
  (((YLast_primitive_definitionG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLdefinitionG),(P)Ynil),Ynil,Ynil)), (regsym(&YLast_primitive_definitionG,"<ast-primitive-definition>"))));
  (((YLast_functionG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLprogramG),(P)Ynil),Ynil,Ynil)), (regsym(&YLast_functionG,"<ast-function>"))));
  fun_function_name_1098 = YPmet(FUNCODEREF(fun_function_name_1098),YPpair(CHKREF(YLast_functionG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yfunction_name = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfunction_name) != YPfalse)
    ? CHKREF(Yfunction_name)
    : YPfalse),fun_function_name_1098)), (regsym(&Yfunction_name,"function-name"))));
  fun_function_name_setter_1099 = YPmet(FUNCODEREF(fun_function_name_setter_1099),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLast_functionG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfunction_name_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfunction_name_setter) != YPfalse)
    ? CHKREF(Yfunction_name_setter)
    : YPfalse),fun_function_name_setter_1099)), (regsym(&Yfunction_name_setter,"function-name-setter"))));
  fun_1100 = YPmet(FUNCODEREF(fun_1100),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLast_functionG),CHKREF(Yfunction_name),CHKREF(Yfunction_name_setter),CHKREF(YLanyG),fun_1100));
  fun_function_bindings_1101 = YPmet(FUNCODEREF(fun_function_bindings_1101),YPpair(CHKREF(YLast_functionG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yfunction_bindings = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfunction_bindings) != YPfalse)
    ? CHKREF(Yfunction_bindings)
    : YPfalse),fun_function_bindings_1101)), (regsym(&Yfunction_bindings,"function-bindings"))));
  fun_function_bindings_setter_1102 = YPmet(FUNCODEREF(fun_function_bindings_setter_1102),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLast_functionG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfunction_bindings_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfunction_bindings_setter) != YPfalse)
    ? CHKREF(Yfunction_bindings_setter)
    : YPfalse),fun_function_bindings_setter_1102)), (regsym(&Yfunction_bindings_setter,"function-bindings-setter"))));
  fun_1103 = YPmet(FUNCODEREF(fun_1103),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLast_functionG),CHKREF(Yfunction_bindings),CHKREF(Yfunction_bindings_setter),CHKREF(YLanyG),fun_1103));
  fun_function_naryQ_1104 = YPmet(FUNCODEREF(fun_function_naryQ_1104),YPpair(CHKREF(YLast_functionG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yfunction_naryQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfunction_naryQ) != YPfalse)
    ? CHKREF(Yfunction_naryQ)
    : YPfalse),fun_function_naryQ_1104)), (regsym(&Yfunction_naryQ,"function-nary?"))));
  fun_function_naryQ_setter_1105 = YPmet(FUNCODEREF(fun_function_naryQ_setter_1105),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLast_functionG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfunction_naryQ_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfunction_naryQ_setter) != YPfalse)
    ? CHKREF(Yfunction_naryQ_setter)
    : YPfalse),fun_function_naryQ_setter_1105)), (regsym(&Yfunction_naryQ_setter,"function-nary?-setter"))));
  fun_1106 = YPmet(FUNCODEREF(fun_1106),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLast_functionG),CHKREF(Yfunction_naryQ),CHKREF(Yfunction_naryQ_setter),CHKREF(YLanyG),fun_1106));
  lit_607 = YPsb((P)"FUN");
  fun_function_kind_1107 = YPmet(FUNCODEREF(fun_function_kind_1107),YPpair(CHKREF(YLast_functionG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yfunction_kind = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfunction_kind) != YPfalse)
    ? CHKREF(Yfunction_kind)
    : YPfalse),fun_function_kind_1107)), (regsym(&Yfunction_kind,"function-kind"))));
  (((YLast_methodG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLast_functionG),(P)Ynil),Ynil,Ynil)), (regsym(&YLast_methodG,"<ast-method>"))));
  fun_function_body_1108 = YPmet(FUNCODEREF(fun_function_body_1108),YPpair(CHKREF(YLast_methodG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yfunction_body = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfunction_body) != YPfalse)
    ? CHKREF(Yfunction_body)
    : YPfalse),fun_function_body_1108)), (regsym(&Yfunction_body,"function-body"))));
  fun_function_body_setter_1109 = YPmet(FUNCODEREF(fun_function_body_setter_1109),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLast_methodG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfunction_body_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfunction_body_setter) != YPfalse)
    ? CHKREF(Yfunction_body_setter)
    : YPfalse),fun_function_body_setter_1109)), (regsym(&Yfunction_body_setter,"function-body-setter"))));
  fun_1110 = YPmet(FUNCODEREF(fun_1110),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLast_methodG),CHKREF(Yfunction_body),CHKREF(Yfunction_body_setter),CHKREF(YLanyG),fun_1110));
  lit_608 = YPsb((P)"MET");
  fun_function_kind_1111 = YPmet(FUNCODEREF(fun_function_kind_1111),YPpair(CHKREF(YLast_methodG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yfunction_kind = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfunction_kind) != YPfalse)
    ? CHKREF(Yfunction_kind)
    : YPfalse),fun_function_kind_1111)), (regsym(&Yfunction_kind,"function-kind"))));
  (((YLast_primitiveG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLast_methodG),(P)Ynil),Ynil,Ynil)), (regsym(&YLast_primitiveG,"<ast-primitive>"))));
  lit_609 = YPsb((P)"PRM");
  fun_function_kind_1112 = YPmet(FUNCODEREF(fun_function_kind_1112),YPpair(CHKREF(YLast_primitiveG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yfunction_kind = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfunction_kind) != YPfalse)
    ? CHKREF(Yfunction_kind)
    : YPfalse),fun_function_kind_1112)), (regsym(&Yfunction_kind,"function-kind"))));
  (((YLast_genericG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLast_functionG),(P)Ynil),Ynil,Ynil)), (regsym(&YLast_genericG,"<ast-generic>"))));
  lit_610 = YPsb((P)"GEN");
  fun_function_kind_1113 = YPmet(FUNCODEREF(fun_function_kind_1113),YPpair(CHKREF(YLast_genericG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yfunction_kind = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfunction_kind) != YPfalse)
    ? CHKREF(Yfunction_kind)
    : YPfalse),fun_function_kind_1113)), (regsym(&Yfunction_kind,"function-kind"))));
  (((YLalternativeG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLprogramG),(P)Ynil),Ynil,Ynil)), (regsym(&YLalternativeG,"<alternative>"))));
  fun_alternative_condition_1114 = YPmet(FUNCODEREF(fun_alternative_condition_1114),YPpair(CHKREF(YLalternativeG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yalternative_condition = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yalternative_condition) != YPfalse)
    ? CHKREF(Yalternative_condition)
    : YPfalse),fun_alternative_condition_1114)), (regsym(&Yalternative_condition,"alternative-condition"))));
  fun_alternative_condition_setter_1115 = YPmet(FUNCODEREF(fun_alternative_condition_setter_1115),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLalternativeG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yalternative_condition_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yalternative_condition_setter) != YPfalse)
    ? CHKREF(Yalternative_condition_setter)
    : YPfalse),fun_alternative_condition_setter_1115)), (regsym(&Yalternative_condition_setter,"alternative-condition-setter"))));
  fun_1116 = YPmet(FUNCODEREF(fun_1116),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLalternativeG),CHKREF(Yalternative_condition),CHKREF(Yalternative_condition_setter),CHKREF(YLanyG),fun_1116));
  fun_alternative_consequent_1117 = YPmet(FUNCODEREF(fun_alternative_consequent_1117),YPpair(CHKREF(YLalternativeG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yalternative_consequent = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yalternative_consequent) != YPfalse)
    ? CHKREF(Yalternative_consequent)
    : YPfalse),fun_alternative_consequent_1117)), (regsym(&Yalternative_consequent,"alternative-consequent"))));
  fun_alternative_consequent_setter_1118 = YPmet(FUNCODEREF(fun_alternative_consequent_setter_1118),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLalternativeG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yalternative_consequent_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yalternative_consequent_setter) != YPfalse)
    ? CHKREF(Yalternative_consequent_setter)
    : YPfalse),fun_alternative_consequent_setter_1118)), (regsym(&Yalternative_consequent_setter,"alternative-consequent-setter"))));
  fun_1119 = YPmet(FUNCODEREF(fun_1119),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLalternativeG),CHKREF(Yalternative_consequent),CHKREF(Yalternative_consequent_setter),CHKREF(YLanyG),fun_1119));
  fun_alternative_alternant_1120 = YPmet(FUNCODEREF(fun_alternative_alternant_1120),YPpair(CHKREF(YLalternativeG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yalternative_alternant = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yalternative_alternant) != YPfalse)
    ? CHKREF(Yalternative_alternant)
    : YPfalse),fun_alternative_alternant_1120)), (regsym(&Yalternative_alternant,"alternative-alternant"))));
  fun_alternative_alternant_setter_1121 = YPmet(FUNCODEREF(fun_alternative_alternant_setter_1121),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLalternativeG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yalternative_alternant_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yalternative_alternant_setter) != YPfalse)
    ? CHKREF(Yalternative_alternant_setter)
    : YPfalse),fun_alternative_alternant_setter_1121)), (regsym(&Yalternative_alternant_setter,"alternative-alternant-setter"))));
  fun_1122 = YPmet(FUNCODEREF(fun_1122),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLalternativeG),CHKREF(Yalternative_alternant),CHKREF(Yalternative_alternant_setter),CHKREF(YLanyG),fun_1122));
  (((YLsequentialG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLprogramG),(P)Ynil),Ynil,Ynil)), (regsym(&YLsequentialG,"<sequential>"))));
  fun_sequential_head_1123 = YPmet(FUNCODEREF(fun_sequential_head_1123),YPpair(CHKREF(YLsequentialG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysequential_head = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysequential_head) != YPfalse)
    ? CHKREF(Ysequential_head)
    : YPfalse),fun_sequential_head_1123)), (regsym(&Ysequential_head,"sequential-head"))));
  fun_sequential_head_setter_1124 = YPmet(FUNCODEREF(fun_sequential_head_setter_1124),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLsequentialG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ysequential_head_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysequential_head_setter) != YPfalse)
    ? CHKREF(Ysequential_head_setter)
    : YPfalse),fun_sequential_head_setter_1124)), (regsym(&Ysequential_head_setter,"sequential-head-setter"))));
  fun_1125 = YPmet(FUNCODEREF(fun_1125),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLsequentialG),CHKREF(Ysequential_head),CHKREF(Ysequential_head_setter),CHKREF(YLanyG),fun_1125));
  fun_sequential_tail_1126 = YPmet(FUNCODEREF(fun_sequential_tail_1126),YPpair(CHKREF(YLsequentialG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysequential_tail = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysequential_tail) != YPfalse)
    ? CHKREF(Ysequential_tail)
    : YPfalse),fun_sequential_tail_1126)), (regsym(&Ysequential_tail,"sequential-tail"))));
  fun_sequential_tail_setter_1127 = YPmet(FUNCODEREF(fun_sequential_tail_setter_1127),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLsequentialG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ysequential_tail_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysequential_tail_setter) != YPfalse)
    ? CHKREF(Ysequential_tail_setter)
    : YPfalse),fun_sequential_tail_setter_1127)), (regsym(&Ysequential_tail_setter,"sequential-tail-setter"))));
  fun_1128 = YPmet(FUNCODEREF(fun_1128),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLsequentialG),CHKREF(Ysequential_tail),CHKREF(Ysequential_tail_setter),CHKREF(YLanyG),fun_1128));
  (((YDempty_sequential = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLsequentialG),(P)Ynil),(P)YPpair((P)CHKREF(Ysequential_head),(P)(P)YPpair((P)CHKREF(Ysequential_tail),(P)Ynil)),(P)YPpair((P)YPfalse,(P)(P)YPpair((P)YPfalse,(P)Ynil)))), (regsym(&YDempty_sequential,"$empty-sequential"))));
  fun_empty_sequential_1129 = YPmet(FUNCODEREF(fun_empty_sequential_1129),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Yempty_sequential = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yempty_sequential) != YPfalse)
    ? CHKREF(Yempty_sequential)
    : YPfalse),fun_empty_sequential_1129)), (regsym(&Yempty_sequential,"empty-sequential"))));
  fun_empty_sequentialQ_1130 = YPmet(FUNCODEREF(fun_empty_sequentialQ_1130),YPpair(CHKREF(YLsequentialG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yempty_sequentialQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yempty_sequentialQ) != YPfalse)
    ? CHKREF(Yempty_sequentialQ)
    : YPfalse),fun_empty_sequentialQ_1130)), (regsym(&Yempty_sequentialQ,"empty-sequential?"))));
  (((YLconstantG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLprogramG),(P)Ynil),Ynil,Ynil)), (regsym(&YLconstantG,"<constant>"))));
  fun_constant_value_1131 = YPmet(FUNCODEREF(fun_constant_value_1131),YPpair(CHKREF(YLconstantG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yconstant_value = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yconstant_value) != YPfalse)
    ? CHKREF(Yconstant_value)
    : YPfalse),fun_constant_value_1131)), (regsym(&Yconstant_value,"constant-value"))));
  fun_constant_value_setter_1132 = YPmet(FUNCODEREF(fun_constant_value_setter_1132),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLconstantG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yconstant_value_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yconstant_value_setter) != YPfalse)
    ? CHKREF(Yconstant_value_setter)
    : YPfalse),fun_constant_value_setter_1132)), (regsym(&Yconstant_value_setter,"constant-value-setter"))));
  fun_1133 = YPmet(FUNCODEREF(fun_1133),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLconstantG),CHKREF(Yconstant_value),CHKREF(Yconstant_value_setter),CHKREF(YLanyG),fun_1133));
  (((YLraw_constantG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLconstantG),(P)Ynil),Ynil,Ynil)), (regsym(&YLraw_constantG,"<raw-constant>"))));
  (((YLapplicationG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLprogramG),(P)Ynil),Ynil,Ynil)), (regsym(&YLapplicationG,"<application>"))));
  fun_application_arguments_1134 = YPmet(FUNCODEREF(fun_application_arguments_1134),YPpair(CHKREF(YLapplicationG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yapplication_arguments = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yapplication_arguments) != YPfalse)
    ? CHKREF(Yapplication_arguments)
    : YPfalse),fun_application_arguments_1134)), (regsym(&Yapplication_arguments,"application-arguments"))));
  fun_application_arguments_setter_1135 = YPmet(FUNCODEREF(fun_application_arguments_setter_1135),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLapplicationG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yapplication_arguments_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yapplication_arguments_setter) != YPfalse)
    ? CHKREF(Yapplication_arguments_setter)
    : YPfalse),fun_application_arguments_setter_1135)), (regsym(&Yapplication_arguments_setter,"application-arguments-setter"))));
  fun_1136 = YPmet(FUNCODEREF(fun_1136),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLapplicationG),CHKREF(Yapplication_arguments),CHKREF(Yapplication_arguments_setter),CHKREF(YLanyG),fun_1136));
  (((YLregular_applicationG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLapplicationG),(P)Ynil),Ynil,Ynil)), (regsym(&YLregular_applicationG,"<regular-application>"))));
  fun_application_function_1137 = YPmet(FUNCODEREF(fun_application_function_1137),YPpair(CHKREF(YLregular_applicationG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yapplication_function = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yapplication_function) != YPfalse)
    ? CHKREF(Yapplication_function)
    : YPfalse),fun_application_function_1137)), (regsym(&Yapplication_function,"application-function"))));
  fun_application_function_setter_1138 = YPmet(FUNCODEREF(fun_application_function_setter_1138),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLregular_applicationG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yapplication_function_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yapplication_function_setter) != YPfalse)
    ? CHKREF(Yapplication_function_setter)
    : YPfalse),fun_application_function_setter_1138)), (regsym(&Yapplication_function_setter,"application-function-setter"))));
  fun_1139 = YPmet(FUNCODEREF(fun_1139),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLregular_applicationG),CHKREF(Yapplication_function),CHKREF(Yapplication_function_setter),CHKREF(YLanyG),fun_1139));
  (((YLpredefined_applicationG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLapplicationG),(P)Ynil),Ynil,Ynil)), (regsym(&YLpredefined_applicationG,"<predefined-application>"))));
  fun_application_binding_1140 = YPmet(FUNCODEREF(fun_application_binding_1140),YPpair(CHKREF(YLpredefined_applicationG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yapplication_binding = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yapplication_binding) != YPfalse)
    ? CHKREF(Yapplication_binding)
    : YPfalse),fun_application_binding_1140)), (regsym(&Yapplication_binding,"application-binding"))));
  fun_application_binding_setter_1141 = YPmet(FUNCODEREF(fun_application_binding_setter_1141),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLpredefined_applicationG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yapplication_binding_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yapplication_binding_setter) != YPfalse)
    ? CHKREF(Yapplication_binding_setter)
    : YPfalse),fun_application_binding_setter_1141)), (regsym(&Yapplication_binding_setter,"application-binding-setter"))));
  fun_1142 = YPmet(FUNCODEREF(fun_1142),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLpredefined_applicationG),CHKREF(Yapplication_binding),CHKREF(Yapplication_binding_setter),CHKREF(YLanyG),fun_1142));
  (((YLfix_letG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLprogramG),(P)Ynil),Ynil,Ynil)), (regsym(&YLfix_letG,"<fix-let>"))));
  fun_fix_let_bindings_1143 = YPmet(FUNCODEREF(fun_fix_let_bindings_1143),YPpair(CHKREF(YLfix_letG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yfix_let_bindings = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfix_let_bindings) != YPfalse)
    ? CHKREF(Yfix_let_bindings)
    : YPfalse),fun_fix_let_bindings_1143)), (regsym(&Yfix_let_bindings,"fix-let-bindings"))));
  fun_fix_let_bindings_setter_1144 = YPmet(FUNCODEREF(fun_fix_let_bindings_setter_1144),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLfix_letG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfix_let_bindings_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfix_let_bindings_setter) != YPfalse)
    ? CHKREF(Yfix_let_bindings_setter)
    : YPfalse),fun_fix_let_bindings_setter_1144)), (regsym(&Yfix_let_bindings_setter,"fix-let-bindings-setter"))));
  fun_1145 = YPmet(FUNCODEREF(fun_1145),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLfix_letG),CHKREF(Yfix_let_bindings),CHKREF(Yfix_let_bindings_setter),CHKREF(YLanyG),fun_1145));
  fun_fix_let_arguments_1146 = YPmet(FUNCODEREF(fun_fix_let_arguments_1146),YPpair(CHKREF(YLfix_letG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yfix_let_arguments = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfix_let_arguments) != YPfalse)
    ? CHKREF(Yfix_let_arguments)
    : YPfalse),fun_fix_let_arguments_1146)), (regsym(&Yfix_let_arguments,"fix-let-arguments"))));
  fun_fix_let_arguments_setter_1147 = YPmet(FUNCODEREF(fun_fix_let_arguments_setter_1147),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLfix_letG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfix_let_arguments_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfix_let_arguments_setter) != YPfalse)
    ? CHKREF(Yfix_let_arguments_setter)
    : YPfalse),fun_fix_let_arguments_setter_1147)), (regsym(&Yfix_let_arguments_setter,"fix-let-arguments-setter"))));
  fun_1148 = YPmet(FUNCODEREF(fun_1148),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLfix_letG),CHKREF(Yfix_let_arguments),CHKREF(Yfix_let_arguments_setter),CHKREF(YLanyG),fun_1148));
  fun_fix_let_body_1149 = YPmet(FUNCODEREF(fun_fix_let_body_1149),YPpair(CHKREF(YLfix_letG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yfix_let_body = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfix_let_body) != YPfalse)
    ? CHKREF(Yfix_let_body)
    : YPfalse),fun_fix_let_body_1149)), (regsym(&Yfix_let_body,"fix-let-body"))));
  fun_fix_let_body_setter_1150 = YPmet(FUNCODEREF(fun_fix_let_body_setter_1150),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLfix_letG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfix_let_body_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfix_let_body_setter) != YPfalse)
    ? CHKREF(Yfix_let_body_setter)
    : YPfalse),fun_fix_let_body_setter_1150)), (regsym(&Yfix_let_body_setter,"fix-let-body-setter"))));
  fun_1151 = YPmet(FUNCODEREF(fun_1151),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLfix_letG),CHKREF(Yfix_let_body),CHKREF(Yfix_let_body_setter),CHKREF(YLanyG),fun_1151));
  (((YLargument_listG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLprogramG),(P)Ynil),Ynil,Ynil)), (regsym(&YLargument_listG,"<argument-list>"))));
  fun_arguments_head_1152 = YPmet(FUNCODEREF(fun_arguments_head_1152),YPpair(CHKREF(YLargument_listG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yarguments_head = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yarguments_head) != YPfalse)
    ? CHKREF(Yarguments_head)
    : YPfalse),fun_arguments_head_1152)), (regsym(&Yarguments_head,"arguments-head"))));
  fun_arguments_head_setter_1153 = YPmet(FUNCODEREF(fun_arguments_head_setter_1153),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLargument_listG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yarguments_head_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yarguments_head_setter) != YPfalse)
    ? CHKREF(Yarguments_head_setter)
    : YPfalse),fun_arguments_head_setter_1153)), (regsym(&Yarguments_head_setter,"arguments-head-setter"))));
  fun_1154 = YPmet(FUNCODEREF(fun_1154),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLargument_listG),CHKREF(Yarguments_head),CHKREF(Yarguments_head_setter),CHKREF(YLanyG),fun_1154));
  fun_arguments_tail_1155 = YPmet(FUNCODEREF(fun_arguments_tail_1155),YPpair(CHKREF(YLargument_listG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yarguments_tail = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yarguments_tail) != YPfalse)
    ? CHKREF(Yarguments_tail)
    : YPfalse),fun_arguments_tail_1155)), (regsym(&Yarguments_tail,"arguments-tail"))));
  fun_arguments_tail_setter_1156 = YPmet(FUNCODEREF(fun_arguments_tail_setter_1156),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLargument_listG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yarguments_tail_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yarguments_tail_setter) != YPfalse)
    ? CHKREF(Yarguments_tail_setter)
    : YPfalse),fun_arguments_tail_setter_1156)), (regsym(&Yarguments_tail_setter,"arguments-tail-setter"))));
  fun_1157 = YPmet(FUNCODEREF(fun_1157),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLargument_listG),CHKREF(Yarguments_tail),CHKREF(Yarguments_tail_setter),CHKREF(YLanyG),fun_1157));
  (((YDargument_empty_list = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLargument_listG),(P)Ynil),(P)YPpair((P)CHKREF(Yarguments_head),(P)(P)YPpair((P)CHKREF(Yarguments_tail),(P)Ynil)),(P)YPpair((P)YPfalse,(P)(P)YPpair((P)YPfalse,(P)Ynil)))), (regsym(&YDargument_empty_list,"$argument-empty-list"))));
  fun_empty_argument_list_1158 = YPmet(FUNCODEREF(fun_empty_argument_list_1158),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Yempty_argument_list = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yempty_argument_list) != YPfalse)
    ? CHKREF(Yempty_argument_list)
    : YPfalse),fun_empty_argument_list_1158)), (regsym(&Yempty_argument_list,"empty-argument-list"))));
  fun_empty_argument_listQ_1159 = YPmet(FUNCODEREF(fun_empty_argument_listQ_1159),YPpair(CHKREF(YLargument_listG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yempty_argument_listQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yempty_argument_listQ) != YPfalse)
    ? CHKREF(Yempty_argument_listQ)
    : YPfalse),fun_empty_argument_listQ_1159)), (regsym(&Yempty_argument_listQ,"empty-argument-list?"))));
  fun_loop_1160 = YPmet(FUNCODEREF(fun_loop_1160),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_as_1161 = YPmet(FUNCODEREF(fun_as_1161),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLargument_listG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yas = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yas) != YPfalse)
    ? CHKREF(Yas)
    : YPfalse),fun_as_1161)), (regsym(&Yas,"as"))));
  (((YLlocalsG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLprogramG),(P)Ynil),Ynil,Ynil)), (regsym(&YLlocalsG,"<locals>"))));
  fun_locals_bindings_1162 = YPmet(FUNCODEREF(fun_locals_bindings_1162),YPpair(CHKREF(YLlocalsG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ylocals_bindings = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ylocals_bindings) != YPfalse)
    ? CHKREF(Ylocals_bindings)
    : YPfalse),fun_locals_bindings_1162)), (regsym(&Ylocals_bindings,"locals-bindings"))));
  fun_locals_bindings_setter_1163 = YPmet(FUNCODEREF(fun_locals_bindings_setter_1163),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlocalsG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ylocals_bindings_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ylocals_bindings_setter) != YPfalse)
    ? CHKREF(Ylocals_bindings_setter)
    : YPfalse),fun_locals_bindings_setter_1163)), (regsym(&Ylocals_bindings_setter,"locals-bindings-setter"))));
  fun_1164 = YPmet(FUNCODEREF(fun_1164),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLlocalsG),CHKREF(Ylocals_bindings),CHKREF(Ylocals_bindings_setter),CHKREF(YLanyG),fun_1164));
  fun_locals_functions_1165 = YPmet(FUNCODEREF(fun_locals_functions_1165),YPpair(CHKREF(YLlocalsG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ylocals_functions = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ylocals_functions) != YPfalse)
    ? CHKREF(Ylocals_functions)
    : YPfalse),fun_locals_functions_1165)), (regsym(&Ylocals_functions,"locals-functions"))));
  fun_locals_functions_setter_1166 = YPmet(FUNCODEREF(fun_locals_functions_setter_1166),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlocalsG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ylocals_functions_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ylocals_functions_setter) != YPfalse)
    ? CHKREF(Ylocals_functions_setter)
    : YPfalse),fun_locals_functions_setter_1166)), (regsym(&Ylocals_functions_setter,"locals-functions-setter"))));
  fun_1167 = YPmet(FUNCODEREF(fun_1167),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLlocalsG),CHKREF(Ylocals_functions),CHKREF(Ylocals_functions_setter),CHKREF(YLanyG),fun_1167));
  fun_locals_body_1168 = YPmet(FUNCODEREF(fun_locals_body_1168),YPpair(CHKREF(YLlocalsG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ylocals_body = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ylocals_body) != YPfalse)
    ? CHKREF(Ylocals_body)
    : YPfalse),fun_locals_body_1168)), (regsym(&Ylocals_body,"locals-body"))));
  fun_locals_body_setter_1169 = YPmet(FUNCODEREF(fun_locals_body_setter_1169),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlocalsG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ylocals_body_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ylocals_body_setter) != YPfalse)
    ? CHKREF(Ylocals_body_setter)
    : YPfalse),fun_locals_body_setter_1169)), (regsym(&Ylocals_body_setter,"locals-body-setter"))));
  fun_1170 = YPmet(FUNCODEREF(fun_1170),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLlocalsG),CHKREF(Ylocals_body),CHKREF(Ylocals_body_setter),CHKREF(YLanyG),fun_1170));
  (((YLbind_exitG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLprogramG),(P)Ynil),Ynil,Ynil)), (regsym(&YLbind_exitG,"<bind-exit>"))));
  fun_bind_exit_main_fun_1171 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_1171),YPpair(CHKREF(YLbind_exitG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ybind_exit_main_fun = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybind_exit_main_fun) != YPfalse)
    ? CHKREF(Ybind_exit_main_fun)
    : YPfalse),fun_bind_exit_main_fun_1171)), (regsym(&Ybind_exit_main_fun,"bind-exit-main-fun"))));
  fun_bind_exit_main_fun_setter_1172 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_setter_1172),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLbind_exitG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ybind_exit_main_fun_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybind_exit_main_fun_setter) != YPfalse)
    ? CHKREF(Ybind_exit_main_fun_setter)
    : YPfalse),fun_bind_exit_main_fun_setter_1172)), (regsym(&Ybind_exit_main_fun_setter,"bind-exit-main-fun-setter"))));
  fun_1173 = YPmet(FUNCODEREF(fun_1173),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLbind_exitG),CHKREF(Ybind_exit_main_fun),CHKREF(Ybind_exit_main_fun_setter),CHKREF(YLanyG),fun_1173));
  (((YLunwind_protectG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLprogramG),(P)Ynil),Ynil,Ynil)), (regsym(&YLunwind_protectG,"<unwind-protect>"))));
  fun_unwind_protect_protected_thunk_1174 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_1174),YPpair(CHKREF(YLunwind_protectG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yunwind_protect_protected_thunk = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yunwind_protect_protected_thunk) != YPfalse)
    ? CHKREF(Yunwind_protect_protected_thunk)
    : YPfalse),fun_unwind_protect_protected_thunk_1174)), (regsym(&Yunwind_protect_protected_thunk,"unwind-protect-protected-thunk"))));
  fun_unwind_protect_protected_thunk_setter_1175 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_setter_1175),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLunwind_protectG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yunwind_protect_protected_thunk_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yunwind_protect_protected_thunk_setter) != YPfalse)
    ? CHKREF(Yunwind_protect_protected_thunk_setter)
    : YPfalse),fun_unwind_protect_protected_thunk_setter_1175)), (regsym(&Yunwind_protect_protected_thunk_setter,"unwind-protect-protected-thunk-setter"))));
  fun_1176 = YPmet(FUNCODEREF(fun_1176),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLunwind_protectG),CHKREF(Yunwind_protect_protected_thunk),CHKREF(Yunwind_protect_protected_thunk_setter),CHKREF(YLanyG),fun_1176));
  fun_unwind_protect_cleanup_thunk_1177 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_1177),YPpair(CHKREF(YLunwind_protectG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yunwind_protect_cleanup_thunk = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yunwind_protect_cleanup_thunk) != YPfalse)
    ? CHKREF(Yunwind_protect_cleanup_thunk)
    : YPfalse),fun_unwind_protect_cleanup_thunk_1177)), (regsym(&Yunwind_protect_cleanup_thunk,"unwind-protect-cleanup-thunk"))));
  fun_unwind_protect_cleanup_thunk_setter_1178 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_setter_1178),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLunwind_protectG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yunwind_protect_cleanup_thunk_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yunwind_protect_cleanup_thunk_setter) != YPfalse)
    ? CHKREF(Yunwind_protect_cleanup_thunk_setter)
    : YPfalse),fun_unwind_protect_cleanup_thunk_setter_1178)), (regsym(&Yunwind_protect_cleanup_thunk_setter,"unwind-protect-cleanup-thunk-setter"))));
  fun_1179 = YPmet(FUNCODEREF(fun_1179),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLunwind_protectG),CHKREF(Yunwind_protect_cleanup_thunk),CHKREF(Yunwind_protect_cleanup_thunk_setter),CHKREF(YLanyG),fun_1179));
  (((YLmonitorG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLprogramG),(P)Ynil),Ynil,Ynil)), (regsym(&YLmonitorG,"<monitor>"))));
  fun_monitor_handler_1180 = YPmet(FUNCODEREF(fun_monitor_handler_1180),YPpair(CHKREF(YLmonitorG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ymonitor_handler = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymonitor_handler) != YPfalse)
    ? CHKREF(Ymonitor_handler)
    : YPfalse),fun_monitor_handler_1180)), (regsym(&Ymonitor_handler,"monitor-handler"))));
  fun_monitor_handler_setter_1181 = YPmet(FUNCODEREF(fun_monitor_handler_setter_1181),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLmonitorG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ymonitor_handler_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymonitor_handler_setter) != YPfalse)
    ? CHKREF(Ymonitor_handler_setter)
    : YPfalse),fun_monitor_handler_setter_1181)), (regsym(&Ymonitor_handler_setter,"monitor-handler-setter"))));
  fun_1182 = YPmet(FUNCODEREF(fun_1182),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLmonitorG),CHKREF(Ymonitor_handler),CHKREF(Ymonitor_handler_setter),CHKREF(YLanyG),fun_1182));
  fun_monitor_main_thunk_1183 = YPmet(FUNCODEREF(fun_monitor_main_thunk_1183),YPpair(CHKREF(YLmonitorG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ymonitor_main_thunk = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymonitor_main_thunk) != YPfalse)
    ? CHKREF(Ymonitor_main_thunk)
    : YPfalse),fun_monitor_main_thunk_1183)), (regsym(&Ymonitor_main_thunk,"monitor-main-thunk"))));
  fun_monitor_main_thunk_setter_1184 = YPmet(FUNCODEREF(fun_monitor_main_thunk_setter_1184),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLmonitorG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ymonitor_main_thunk_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymonitor_main_thunk_setter) != YPfalse)
    ? CHKREF(Ymonitor_main_thunk_setter)
    : YPfalse),fun_monitor_main_thunk_setter_1184)), (regsym(&Ymonitor_main_thunk_setter,"monitor-main-thunk-setter"))));
  fun_1185 = YPmet(FUNCODEREF(fun_1185),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLmonitorG),CHKREF(Ymonitor_main_thunk),CHKREF(Ymonitor_main_thunk_setter),CHKREF(YLanyG),fun_1185));
  (((YLsyntax_ifG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLprogramG),(P)Ynil),Ynil,Ynil)), (regsym(&YLsyntax_ifG,"<syntax-if>"))));
  fun_sif_pattern_1186 = YPmet(FUNCODEREF(fun_sif_pattern_1186),YPpair(CHKREF(YLsyntax_ifG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysif_pattern = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysif_pattern) != YPfalse)
    ? CHKREF(Ysif_pattern)
    : YPfalse),fun_sif_pattern_1186)), (regsym(&Ysif_pattern,"sif-pattern"))));
  fun_sif_pattern_setter_1187 = YPmet(FUNCODEREF(fun_sif_pattern_setter_1187),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLsyntax_ifG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ysif_pattern_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysif_pattern_setter) != YPfalse)
    ? CHKREF(Ysif_pattern_setter)
    : YPfalse),fun_sif_pattern_setter_1187)), (regsym(&Ysif_pattern_setter,"sif-pattern-setter"))));
  fun_1188 = YPmet(FUNCODEREF(fun_1188),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLsyntax_ifG),CHKREF(Ysif_pattern),CHKREF(Ysif_pattern_setter),CHKREF(YLanyG),fun_1188));
  fun_sif_bindings_1189 = YPmet(FUNCODEREF(fun_sif_bindings_1189),YPpair(CHKREF(YLsyntax_ifG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysif_bindings = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysif_bindings) != YPfalse)
    ? CHKREF(Ysif_bindings)
    : YPfalse),fun_sif_bindings_1189)), (regsym(&Ysif_bindings,"sif-bindings"))));
  fun_sif_bindings_setter_1190 = YPmet(FUNCODEREF(fun_sif_bindings_setter_1190),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLsyntax_ifG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ysif_bindings_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysif_bindings_setter) != YPfalse)
    ? CHKREF(Ysif_bindings_setter)
    : YPfalse),fun_sif_bindings_setter_1190)), (regsym(&Ysif_bindings_setter,"sif-bindings-setter"))));
  fun_1191 = YPmet(FUNCODEREF(fun_1191),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLsyntax_ifG),CHKREF(Ysif_bindings),CHKREF(Ysif_bindings_setter),CHKREF(YLanyG),fun_1191));
  fun_sif_value_1192 = YPmet(FUNCODEREF(fun_sif_value_1192),YPpair(CHKREF(YLsyntax_ifG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysif_value = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysif_value) != YPfalse)
    ? CHKREF(Ysif_value)
    : YPfalse),fun_sif_value_1192)), (regsym(&Ysif_value,"sif-value"))));
  fun_sif_value_setter_1193 = YPmet(FUNCODEREF(fun_sif_value_setter_1193),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLsyntax_ifG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ysif_value_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysif_value_setter) != YPfalse)
    ? CHKREF(Ysif_value_setter)
    : YPfalse),fun_sif_value_setter_1193)), (regsym(&Ysif_value_setter,"sif-value-setter"))));
  fun_1194 = YPmet(FUNCODEREF(fun_1194),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLsyntax_ifG),CHKREF(Ysif_value),CHKREF(Ysif_value_setter),CHKREF(YLanyG),fun_1194));
  fun_sif_then_1195 = YPmet(FUNCODEREF(fun_sif_then_1195),YPpair(CHKREF(YLsyntax_ifG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysif_then = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysif_then) != YPfalse)
    ? CHKREF(Ysif_then)
    : YPfalse),fun_sif_then_1195)), (regsym(&Ysif_then,"sif-then"))));
  fun_sif_then_setter_1196 = YPmet(FUNCODEREF(fun_sif_then_setter_1196),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLsyntax_ifG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ysif_then_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysif_then_setter) != YPfalse)
    ? CHKREF(Ysif_then_setter)
    : YPfalse),fun_sif_then_setter_1196)), (regsym(&Ysif_then_setter,"sif-then-setter"))));
  fun_1197 = YPmet(FUNCODEREF(fun_1197),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLsyntax_ifG),CHKREF(Ysif_then),CHKREF(Ysif_then_setter),CHKREF(YLanyG),fun_1197));
  fun_sif_else_1198 = YPmet(FUNCODEREF(fun_sif_else_1198),YPpair(CHKREF(YLsyntax_ifG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysif_else = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysif_else) != YPfalse)
    ? CHKREF(Ysif_else)
    : YPfalse),fun_sif_else_1198)), (regsym(&Ysif_else,"sif-else"))));
  fun_sif_else_setter_1199 = YPmet(FUNCODEREF(fun_sif_else_setter_1199),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLsyntax_ifG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ysif_else_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysif_else_setter) != YPfalse)
    ? CHKREF(Ysif_else_setter)
    : YPfalse),fun_sif_else_setter_1199)), (regsym(&Ysif_else_setter,"sif-else-setter"))));
  fun_1200 = YPmet(FUNCODEREF(fun_1200),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLsyntax_ifG),CHKREF(Ysif_else),CHKREF(Ysif_else_setter),CHKREF(YLanyG),fun_1200));
  (((YLmatchG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLanyG),(P)Ynil),Ynil,Ynil)), (regsym(&YLmatchG,"<match>"))));
  (((YLmatch_structureG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmatchG),(P)Ynil),Ynil,Ynil)), (regsym(&YLmatch_structureG,"<match-structure>"))));
  (((YLmatch_atomG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmatch_structureG),(P)Ynil),Ynil,Ynil)), (regsym(&YLmatch_atomG,"<match-atom>"))));
  fun_match_value_1201 = YPmet(FUNCODEREF(fun_match_value_1201),YPpair(CHKREF(YLmatch_structureG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ymatch_value = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymatch_value) != YPfalse)
    ? CHKREF(Ymatch_value)
    : YPfalse),fun_match_value_1201)), (regsym(&Ymatch_value,"match-value"))));
  fun_match_value_setter_1202 = YPmet(FUNCODEREF(fun_match_value_setter_1202),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLmatch_structureG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ymatch_value_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymatch_value_setter) != YPfalse)
    ? CHKREF(Ymatch_value_setter)
    : YPfalse),fun_match_value_setter_1202)), (regsym(&Ymatch_value_setter,"match-value-setter"))));
  fun_1203 = YPmet(FUNCODEREF(fun_1203),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLmatch_structureG),CHKREF(Ymatch_value),CHKREF(Ymatch_value_setter),CHKREF(YLanyG),fun_1203));
  (((YLmatch_listG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmatch_structureG),(P)Ynil),Ynil,Ynil)), (regsym(&YLmatch_listG,"<match-list>"))));
  fun_match_elements_1204 = YPmet(FUNCODEREF(fun_match_elements_1204),YPpair(CHKREF(YLmatch_structureG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ymatch_elements = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymatch_elements) != YPfalse)
    ? CHKREF(Ymatch_elements)
    : YPfalse),fun_match_elements_1204)), (regsym(&Ymatch_elements,"match-elements"))));
  fun_match_elements_setter_1205 = YPmet(FUNCODEREF(fun_match_elements_setter_1205),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLmatch_structureG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ymatch_elements_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymatch_elements_setter) != YPfalse)
    ? CHKREF(Ymatch_elements_setter)
    : YPfalse),fun_match_elements_setter_1205)), (regsym(&Ymatch_elements_setter,"match-elements-setter"))));
  fun_1206 = YPmet(FUNCODEREF(fun_1206),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLmatch_structureG),CHKREF(Ymatch_elements),CHKREF(Ymatch_elements_setter),CHKREF(YLanyG),fun_1206));
  (((YLmatch_sublistG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmatch_structureG),(P)Ynil),Ynil,Ynil)), (regsym(&YLmatch_sublistG,"<match-sublist>"))));
  fun_match_element_1207 = YPmet(FUNCODEREF(fun_match_element_1207),YPpair(CHKREF(YLmatch_sublistG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ymatch_element = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymatch_element) != YPfalse)
    ? CHKREF(Ymatch_element)
    : YPfalse),fun_match_element_1207)), (regsym(&Ymatch_element,"match-element"))));
  fun_match_element_setter_1208 = YPmet(FUNCODEREF(fun_match_element_setter_1208),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLmatch_sublistG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ymatch_element_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymatch_element_setter) != YPfalse)
    ? CHKREF(Ymatch_element_setter)
    : YPfalse),fun_match_element_setter_1208)), (regsym(&Ymatch_element_setter,"match-element-setter"))));
  fun_1209 = YPmet(FUNCODEREF(fun_1209),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLmatch_sublistG),CHKREF(Ymatch_element),CHKREF(Ymatch_element_setter),CHKREF(YLanyG),fun_1209));
  (((YLmatch_empty_listG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmatch_structureG),(P)Ynil),Ynil,Ynil)), (regsym(&YLmatch_empty_listG,"<match-empty-list>"))));
  (((YLmatch_bindingG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmatchG),(P)Ynil),Ynil,Ynil)), (regsym(&YLmatch_bindingG,"<match-binding>"))));
  fun_match_binding_1210 = YPmet(FUNCODEREF(fun_match_binding_1210),YPpair(CHKREF(YLmatch_bindingG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ymatch_binding = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymatch_binding) != YPfalse)
    ? CHKREF(Ymatch_binding)
    : YPfalse),fun_match_binding_1210)), (regsym(&Ymatch_binding,"match-binding"))));
  fun_match_binding_setter_1211 = YPmet(FUNCODEREF(fun_match_binding_setter_1211),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLmatch_bindingG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ymatch_binding_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymatch_binding_setter) != YPfalse)
    ? CHKREF(Ymatch_binding_setter)
    : YPfalse),fun_match_binding_setter_1211)), (regsym(&Ymatch_binding_setter,"match-binding-setter"))));
  fun_1212 = YPmet(FUNCODEREF(fun_1212),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLmatch_bindingG),CHKREF(Ymatch_binding),CHKREF(Ymatch_binding_setter),CHKREF(YLanyG),fun_1212));
  (((YLmatch_unquoteG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmatch_bindingG),(P)Ynil),Ynil,Ynil)), (regsym(&YLmatch_unquoteG,"<match-unquote>"))));
  (((YLmatch_unquote_splicingG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmatch_bindingG),(P)Ynil),Ynil,Ynil)), (regsym(&YLmatch_unquote_splicingG,"<match-unquote-splicing>"))));
  (((YLstatic_environmentG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLanyG),(P)Ynil),Ynil,Ynil)), (regsym(&YLstatic_environmentG,"<static-environment>"))));
  fun_environment_next_1213 = YPmet(FUNCODEREF(fun_environment_next_1213),YPpair(CHKREF(YLstatic_environmentG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yenvironment_next = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenvironment_next) != YPfalse)
    ? CHKREF(Yenvironment_next)
    : YPfalse),fun_environment_next_1213)), (regsym(&Yenvironment_next,"environment-next"))));
  fun_environment_next_setter_1214 = YPmet(FUNCODEREF(fun_environment_next_setter_1214),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLstatic_environmentG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yenvironment_next_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenvironment_next_setter) != YPfalse)
    ? CHKREF(Yenvironment_next_setter)
    : YPfalse),fun_environment_next_setter_1214)), (regsym(&Yenvironment_next_setter,"environment-next-setter"))));
  fun_1215 = YPmet(FUNCODEREF(fun_1215),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLstatic_environmentG),CHKREF(Yenvironment_next),CHKREF(Yenvironment_next_setter),CHKREF(YLanyG),fun_1215));
  fun_environment_bindings_1216 = YPmet(FUNCODEREF(fun_environment_bindings_1216),YPpair(CHKREF(YLstatic_environmentG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yenvironment_bindings = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenvironment_bindings) != YPfalse)
    ? CHKREF(Yenvironment_bindings)
    : YPfalse),fun_environment_bindings_1216)), (regsym(&Yenvironment_bindings,"environment-bindings"))));
  fun_environment_bindings_setter_1217 = YPmet(FUNCODEREF(fun_environment_bindings_setter_1217),YPpair(CHKREF(YLcolG),YPpair(CHKREF(YLstatic_environmentG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yenvironment_bindings_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenvironment_bindings_setter) != YPfalse)
    ? CHKREF(Yenvironment_bindings_setter)
    : YPfalse),fun_environment_bindings_setter_1217)), (regsym(&Yenvironment_bindings_setter,"environment-bindings-setter"))));
  fun_1218 = YPmet(FUNCODEREF(fun_1218),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLstatic_environmentG),CHKREF(Yenvironment_bindings),CHKREF(Yenvironment_bindings_setter),CHKREF(YLcolG),fun_1218));
  (((YLstatic_global_environmentG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLstatic_environmentG),(P)Ynil),Ynil,Ynil)), (regsym(&YLstatic_global_environmentG,"<static-global-environment>"))));
  fun_environment_next_index_1219 = YPmet(FUNCODEREF(fun_environment_next_index_1219),YPpair(CHKREF(YLstatic_global_environmentG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yenvironment_next_index = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenvironment_next_index) != YPfalse)
    ? CHKREF(Yenvironment_next_index)
    : YPfalse),fun_environment_next_index_1219)), (regsym(&Yenvironment_next_index,"environment-next-index"))));
  fun_environment_next_index_setter_1220 = YPmet(FUNCODEREF(fun_environment_next_index_setter_1220),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLstatic_global_environmentG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yenvironment_next_index_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenvironment_next_index_setter) != YPfalse)
    ? CHKREF(Yenvironment_next_index_setter)
    : YPfalse),fun_environment_next_index_setter_1220)), (regsym(&Yenvironment_next_index_setter,"environment-next-index-setter"))));
  lit_611 = YPint((P)-1);
  fun_1221 = YPmet(FUNCODEREF(fun_1221),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLstatic_global_environmentG),CHKREF(Yenvironment_next_index),CHKREF(Yenvironment_next_index_setter),CHKREF(YLanyG),fun_1221));
  (((YLstatic_predefined_global_environmentG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLstatic_global_environmentG),(P)Ynil),Ynil,Ynil)), (regsym(&YLstatic_predefined_global_environmentG,"<static-predefined-global-environment>"))));
  (((YLstatic_empty_environmentG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLstatic_environmentG),(P)Ynil),Ynil,Ynil)), (regsym(&YLstatic_empty_environmentG,"<static-empty-environment>"))));
  (((YDempty_static_environment = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLstatic_empty_environmentG),(P)Ynil),Ynil,Ynil)), (regsym(&YDempty_static_environment,"$empty-static-environment"))));
  (((YLstatic_local_environmentG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLstatic_environmentG),(P)Ynil),Ynil,Ynil)), (regsym(&YLstatic_local_environmentG,"<static-local-environment>"))));
  fun_objectify_1222 = YPmet(FUNCODEREF(fun_objectify_1222),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLstatic_environmentG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yobjectify = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify) != YPfalse)
    ? CHKREF(Yobjectify)
    : YPfalse),fun_objectify_1222)), (regsym(&Yobjectify,"objectify"))));
  fun_objectify_1223 = YPmet(FUNCODEREF(fun_objectify_1223),YPpair(CHKREF(YLsymG),YPpair(CHKREF(YLstatic_environmentG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yobjectify = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify) != YPfalse)
    ? CHKREF(Yobjectify)
    : YPfalse),fun_objectify_1223)), (regsym(&Yobjectify,"objectify"))));
  fun_objectify_1224 = YPmet(FUNCODEREF(fun_objectify_1224),YPpair(CHKREF(YLmagic_bindingG),YPpair(CHKREF(YLstatic_environmentG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yobjectify = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify) != YPfalse)
    ? CHKREF(Yobjectify)
    : YPfalse),fun_objectify_1224)), (regsym(&Yobjectify,"objectify"))));
  fun_objectify_1225 = YPmet(FUNCODEREF(fun_objectify_1225),YPpair(CHKREF(YLprogramG),YPpair(CHKREF(YLstatic_environmentG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yobjectify = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify) != YPfalse)
    ? CHKREF(Yobjectify)
    : YPfalse),fun_objectify_1225)), (regsym(&Yobjectify,"objectify"))));
  fun_objectify_1226 = YPmet(FUNCODEREF(fun_objectify_1226),YPpair(Ynil,YPpair(CHKREF(YLstatic_environmentG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yobjectify = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify) != YPfalse)
    ? CHKREF(Yobjectify)
    : YPfalse),fun_objectify_1226)), (regsym(&Yobjectify,"objectify"))));
  fun_objectify_1227 = YPmet(FUNCODEREF(fun_objectify_1227),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLstatic_environmentG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yobjectify = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify) != YPfalse)
    ? CHKREF(Yobjectify)
    : YPfalse),fun_objectify_1227)), (regsym(&Yobjectify,"objectify"))));
  fun_objectify_quotation_1228 = YPmet(FUNCODEREF(fun_objectify_quotation_1228),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yobjectify_quotation = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_quotation) != YPfalse)
    ? CHKREF(Yobjectify_quotation)
    : YPfalse),fun_objectify_quotation_1228)), (regsym(&Yobjectify_quotation,"objectify-quotation"))));
  fun_objectify_raw_1229 = YPmet(FUNCODEREF(fun_objectify_raw_1229),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yobjectify_raw = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_raw) != YPfalse)
    ? CHKREF(Yobjectify_raw)
    : YPfalse),fun_objectify_raw_1229)), (regsym(&Yobjectify_raw,"objectify-raw"))));
  fun_objectify_boundQ_1230 = YPmet(FUNCODEREF(fun_objectify_boundQ_1230),YPpair(CHKREF(YLsymG),YPpair(CHKREF(YLstatic_environmentG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yobjectify_boundQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_boundQ) != YPfalse)
    ? CHKREF(Yobjectify_boundQ)
    : YPfalse),fun_objectify_boundQ_1230)), (regsym(&Yobjectify_boundQ,"objectify-bound?"))));
  fun_objectify_compile_time_1231 = YPmet(FUNCODEREF(fun_objectify_compile_time_1231),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yobjectify_compile_time = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_compile_time) != YPfalse)
    ? CHKREF(Yobjectify_compile_time)
    : YPfalse),fun_objectify_compile_time_1231)), (regsym(&Yobjectify_compile_time,"objectify-compile-time"))));
  fun_objectify_alternative_1232 = YPmet(FUNCODEREF(fun_objectify_alternative_1232),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),ENVNUL); 
  (((Yobjectify_alternative = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_alternative) != YPfalse)
    ? CHKREF(Yobjectify_alternative)
    : YPfalse),fun_objectify_alternative_1232)), (regsym(&Yobjectify_alternative,"objectify-alternative"))));
  fun_loop_1233 = YPmet(FUNCODEREF(fun_loop_1233),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_sequentialize_1234 = YPmet(FUNCODEREF(fun_sequentialize_1234),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysequentialize = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysequentialize) != YPfalse)
    ? CHKREF(Ysequentialize)
    : YPfalse),fun_sequentialize_1234)), (regsym(&Ysequentialize,"sequentialize"))));
  fun_objectify_sequential_1235 = YPmet(FUNCODEREF(fun_objectify_sequential_1235),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yobjectify_sequential = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_sequential) != YPfalse)
    ? CHKREF(Yobjectify_sequential)
    : YPfalse),fun_objectify_sequential_1235)), (regsym(&Yobjectify_sequential,"objectify-sequential"))));
  fun_1236 = YPmet(FUNCODEREF(fun_1236),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_objectify_application_1237 = YPmet(FUNCODEREF(fun_objectify_application_1237),YPpair(CHKREF(YLast_methodG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yobjectify_application = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_application) != YPfalse)
    ? CHKREF(Yobjectify_application)
    : YPfalse),fun_objectify_application_1237)), (regsym(&Yobjectify_application,"objectify-application"))));
  fun_1238 = YPmet(FUNCODEREF(fun_1238),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_objectify_application_1239 = YPmet(FUNCODEREF(fun_objectify_application_1239),YPpair(CHKREF(YLpredefined_referenceG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yobjectify_application = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_application) != YPfalse)
    ? CHKREF(Yobjectify_application)
    : YPfalse),fun_objectify_application_1239)), (regsym(&Yobjectify_application,"objectify-application"))));
  fun_1240 = YPmet(FUNCODEREF(fun_1240),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_objectify_application_1241 = YPmet(FUNCODEREF(fun_objectify_application_1241),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yobjectify_application = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_application) != YPfalse)
    ? CHKREF(Yobjectify_application)
    : YPfalse),fun_objectify_application_1241)), (regsym(&Yobjectify_application,"objectify-application"))));
  lit_612 = YPsb((P)"incorrect regular arity");
  fun_process_closed_application_1242 = YPmet(FUNCODEREF(fun_process_closed_application_1242),YPpair(CHKREF(YLast_methodG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yprocess_closed_application = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yprocess_closed_application) != YPfalse)
    ? CHKREF(Yprocess_closed_application)
    : YPfalse),fun_process_closed_application_1242)), (regsym(&Yprocess_closed_application,"process-closed-application"))));
  lit_613 = YPPsym((P)"pair");
  lit_614 = YPsb((P)"incorrect dotted arity");
  fun_pack_dotted_arguments_1243 = YPmet(FUNCODEREF(fun_pack_dotted_arguments_1243),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_gather_arguments_1244 = YPmet(FUNCODEREF(fun_gather_arguments_1244),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_process_nary_closed_application_1245 = YPmet(FUNCODEREF(fun_process_nary_closed_application_1245),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yprocess_nary_closed_application = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yprocess_nary_closed_application) != YPfalse)
    ? CHKREF(Yprocess_nary_closed_application)
    : YPfalse),fun_process_nary_closed_application_1245)), (regsym(&Yprocess_nary_closed_application,"process-nary-closed-application"))));
  fun_convert2arguments_1246 = YPmet(FUNCODEREF(fun_convert2arguments_1246),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yconvert2arguments = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yconvert2arguments) != YPfalse)
    ? CHKREF(Yconvert2arguments)
    : YPfalse),fun_convert2arguments_1246)), (regsym(&Yconvert2arguments,"convert2arguments"))));
  lit_615 = YPint((P)0);
  lit_616 = YPint((P)1);
  fun_number_of_1247 = YPmet(FUNCODEREF(fun_number_of_1247),YPpair(CHKREF(YLargument_listG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ynumber_of = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ynumber_of) != YPfalse)
    ? CHKREF(Ynumber_of)
    : YPfalse),fun_number_of_1247)), (regsym(&Ynumber_of,"number-of"))));
  lit_617 = YPsb((P)"Unsupported Set!: %=");
  fun_objectify_assignment_1248 = YPmet(FUNCODEREF(fun_objectify_assignment_1248),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yobjectify_assignment = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_assignment) != YPfalse)
    ? CHKREF(Yobjectify_assignment)
    : YPfalse),fun_objectify_assignment_1248)), (regsym(&Yobjectify_assignment,"objectify-assignment"))));
  fun_objectify_assignment_1249 = YPmet(FUNCODEREF(fun_objectify_assignment_1249),YPpair(CHKREF(YLsymG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yobjectify_assignment = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_assignment) != YPfalse)
    ? CHKREF(Yobjectify_assignment)
    : YPfalse),fun_objectify_assignment_1249)), (regsym(&Yobjectify_assignment,"objectify-assignment"))));
  fun_objectify_assignment_using_1250 = YPmet(FUNCODEREF(fun_objectify_assignment_using_1250),YPpair(CHKREF(YLlocal_referenceG),YPpair(CHKREF(YLprogramG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yobjectify_assignment_using = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_assignment_using) != YPfalse)
    ? CHKREF(Yobjectify_assignment_using)
    : YPfalse),fun_objectify_assignment_using_1250)), (regsym(&Yobjectify_assignment_using,"objectify-assignment-using"))));
  fun_objectify_assignment_using_1251 = YPmet(FUNCODEREF(fun_objectify_assignment_using_1251),YPpair(CHKREF(YLglobal_referenceG),YPpair(CHKREF(YLprogramG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yobjectify_assignment_using = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_assignment_using) != YPfalse)
    ? CHKREF(Yobjectify_assignment_using)
    : YPfalse),fun_objectify_assignment_using_1251)), (regsym(&Yobjectify_assignment_using,"objectify-assignment-using"))));
  fun_objectify_assignment_using_1252 = YPmet(FUNCODEREF(fun_objectify_assignment_using_1252),YPpair(CHKREF(YLruntime_referenceG),YPpair(CHKREF(YLprogramG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yobjectify_assignment_using = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_assignment_using) != YPfalse)
    ? CHKREF(Yobjectify_assignment_using)
    : YPfalse),fun_objectify_assignment_using_1252)), (regsym(&Yobjectify_assignment_using,"objectify-assignment-using"))));
  lit_618 = YPint((P)1);
  fun_ast_define_binding_1253 = YPmet(FUNCODEREF(fun_ast_define_binding_1253),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yast_define_binding = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_define_binding) != YPfalse)
    ? CHKREF(Yast_define_binding)
    : YPfalse),fun_ast_define_binding_1253)), (regsym(&Yast_define_binding,"ast-define-binding"))));
  (((YTmacro_tracingQT = YPfalse), (regsym(&YTmacro_tracingQT,"*macro-tracing?*"))));
  fun_1254 = YPmet(FUNCODEREF(fun_1254),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_objectify_definition_1255 = YPmet(FUNCODEREF(fun_objectify_definition_1255),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yobjectify_definition = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_definition) != YPfalse)
    ? CHKREF(Yobjectify_definition)
    : YPfalse),fun_objectify_definition_1255)), (regsym(&Yobjectify_definition,"objectify-definition"))));
  lit_619 = YPsb((P)"MACRO ");
  lit_620 = YPsb((P)"\n");
  lit_621 = YPsb((P)"  => ");
  lit_622 = YPsb((P)"\n");
  fun_expand_1256 = YPmet(FUNCODEREF(fun_expand_1256),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_1257 = YPmet(FUNCODEREF(fun_1257),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_objectify_syntax_definition_1258 = YPmet(FUNCODEREF(fun_objectify_syntax_definition_1258),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yobjectify_syntax_definition = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_syntax_definition) != YPfalse)
    ? CHKREF(Yobjectify_syntax_definition)
    : YPfalse),fun_objectify_syntax_definition_1258)), (regsym(&Yobjectify_syntax_definition,"objectify-syntax-definition"))));
  fun_1259 = YPmet(FUNCODEREF(fun_1259),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_objectify_function_definition_1260 = YPmet(FUNCODEREF(fun_objectify_function_definition_1260),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yobjectify_function_definition = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_function_definition) != YPfalse)
    ? CHKREF(Yobjectify_function_definition)
    : YPfalse),fun_objectify_function_definition_1260)), (regsym(&Yobjectify_function_definition,"objectify-function-definition"))));
  fun_1261 = YPmet(FUNCODEREF(fun_1261),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_objectify_primitive_definition_1262 = YPmet(FUNCODEREF(fun_objectify_primitive_definition_1262),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),ENVNUL); 
  (((Yobjectify_primitive_definition = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_primitive_definition) != YPfalse)
    ? CHKREF(Yobjectify_primitive_definition)
    : YPfalse),fun_objectify_primitive_definition_1262)), (regsym(&Yobjectify_primitive_definition,"objectify-primitive-definition"))));
  fun_1263 = YPmet(FUNCODEREF(fun_1263),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_objectify_generic_definition_1264 = YPmet(FUNCODEREF(fun_objectify_generic_definition_1264),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yobjectify_generic_definition = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_generic_definition) != YPfalse)
    ? CHKREF(Yobjectify_generic_definition)
    : YPfalse),fun_objectify_generic_definition_1264)), (regsym(&Yobjectify_generic_definition,"objectify-generic-definition"))));
  lit_623 = YPPsym((P)"if");
  lit_624 = YPPsym((P)"bound?");
  lit_625 = YPPsym((P)"%define-method");
  fun_1265 = YPmet(FUNCODEREF(fun_1265),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_objectify_method_definition_1266 = YPmet(FUNCODEREF(fun_objectify_method_definition_1266),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yobjectify_method_definition = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_method_definition) != YPfalse)
    ? CHKREF(Yobjectify_method_definition)
    : YPfalse),fun_objectify_method_definition_1266)), (regsym(&Yobjectify_method_definition,"objectify-method-definition"))));
  fun_objectify_function_1267 = YPmet(FUNCODEREF(fun_objectify_function_1267),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yobjectify_function = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_function) != YPfalse)
    ? CHKREF(Yobjectify_function)
    : YPfalse),fun_objectify_function_1267)), (regsym(&Yobjectify_function,"objectify-function"))));
  lit_626 = YPPsym((P)"...");
  (((YDsexpr_optionals_tag = lit_626), (regsym(&YDsexpr_optionals_tag,"$sexpr-optionals-tag"))));
  lit_627 = YPPsym((P)"<opts>");
  (((YDsexpr_optionals_type_name = lit_627), (regsym(&YDsexpr_optionals_type_name,"$sexpr-optionals-type-name"))));
  fun_col_1268 = YPmet(FUNCODEREF(fun_col_1268),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  fun_objectify_parameters_1269 = YPmet(FUNCODEREF(fun_objectify_parameters_1269),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yobjectify_parameters = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_parameters) != YPfalse)
    ? CHKREF(Yobjectify_parameters)
    : YPfalse),fun_objectify_parameters_1269)), (regsym(&Yobjectify_parameters,"objectify-parameters"))));
  fun_objectify_binding_1270 = YPmet(FUNCODEREF(fun_objectify_binding_1270),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLmagic_bindingG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yobjectify_binding = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_binding) != YPfalse)
    ? CHKREF(Yobjectify_binding)
    : YPfalse),fun_objectify_binding_1270)), (regsym(&Yobjectify_binding,"objectify-binding"))));
  lit_628 = YPint((P)1);
  lit_629 = YPint((P)1);
  lit_630 = YPint((P)0);
  lit_631 = YPsb((P)"DIDN'T FIND LOCAL BINDING %= IN %=");
  lit_632 = YPint((P)0);
  fun_find_1271 = YPmet(FUNCODEREF(fun_find_1271),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_loop_1272 = YPmet(FUNCODEREF(fun_loop_1272),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_compute_local_reference_offsets_1273 = YPmet(FUNCODEREF(fun_compute_local_reference_offsets_1273),YPpair(CHKREF(YLlocal_bindingG),YPpair(CHKREF(YLstatic_local_environmentG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ycompute_local_reference_offsets = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ycompute_local_reference_offsets) != YPfalse)
    ? CHKREF(Ycompute_local_reference_offsets)
    : YPfalse),fun_compute_local_reference_offsets_1273)), (regsym(&Ycompute_local_reference_offsets,"compute-local-reference-offsets"))));
  fun_objectify_binding_1274 = YPmet(FUNCODEREF(fun_objectify_binding_1274),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlocal_bindingG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yobjectify_binding = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_binding) != YPfalse)
    ? CHKREF(Yobjectify_binding)
    : YPfalse),fun_objectify_binding_1274)), (regsym(&Yobjectify_binding,"objectify-binding"))));
  fun_objectify_binding_1275 = YPmet(FUNCODEREF(fun_objectify_binding_1275),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLglobal_bindingG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yobjectify_binding = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_binding) != YPfalse)
    ? CHKREF(Yobjectify_binding)
    : YPfalse),fun_objectify_binding_1275)), (regsym(&Yobjectify_binding,"objectify-binding"))));
  fun_objectify_binding_1276 = YPmet(FUNCODEREF(fun_objectify_binding_1276),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLruntime_bindingG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yobjectify_binding = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_binding) != YPfalse)
    ? CHKREF(Yobjectify_binding)
    : YPfalse),fun_objectify_binding_1276)), (regsym(&Yobjectify_binding,"objectify-binding"))));
  fun_objectify_binding_1277 = YPmet(FUNCODEREF(fun_objectify_binding_1277),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLpredefined_bindingG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yobjectify_binding = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_binding) != YPfalse)
    ? CHKREF(Yobjectify_binding)
    : YPfalse),fun_objectify_binding_1277)), (regsym(&Yobjectify_binding,"objectify-binding"))));
  lit_633 = YPPsym((P)"<any>");
  fun_default_type_1278 = YPmet(FUNCODEREF(fun_default_type_1278),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ydefault_type = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ydefault_type) != YPfalse)
    ? CHKREF(Ydefault_type)
    : YPfalse),fun_default_type_1278)), (regsym(&Ydefault_type,"default-type"))));
  lit_634 = YPint((P)1);
  fun_objectify_free_global_reference_1279 = YPmet(FUNCODEREF(fun_objectify_free_global_reference_1279),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yobjectify_free_global_reference = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_free_global_reference) != YPfalse)
    ? CHKREF(Yobjectify_free_global_reference)
    : YPfalse),fun_objectify_free_global_reference_1279)), (regsym(&Yobjectify_free_global_reference,"objectify-free-global-reference"))));
  fun_objectify_binding_1280 = YPmet(FUNCODEREF(fun_objectify_binding_1280),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yobjectify_binding = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_binding) != YPfalse)
    ? CHKREF(Yobjectify_binding)
    : YPfalse),fun_objectify_binding_1280)), (regsym(&Yobjectify_binding,"objectify-binding"))));
  fun_objectify_symbol_1281 = YPmet(FUNCODEREF(fun_objectify_symbol_1281),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yobjectify_symbol = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_symbol) != YPfalse)
    ? CHKREF(Yobjectify_symbol)
    : YPfalse),fun_objectify_symbol_1281)), (regsym(&Yobjectify_symbol,"objectify-symbol"))));
  lit_635 = YPPsym((P)"<fun>");
  fun_ftype_1282 = YPmet(FUNCODEREF(fun_ftype_1282),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yftype = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yftype) != YPfalse)
    ? CHKREF(Yftype)
    : YPfalse),fun_ftype_1282)), (regsym(&Yftype,"ftype"))));
  fun_1283 = YPmet(FUNCODEREF(fun_1283),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_1284 = YPmet(FUNCODEREF(fun_1284),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_objectify_locals_1285 = YPmet(FUNCODEREF(fun_objectify_locals_1285),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))))),YPfalse,YPint((P)5),ENVNUL); 
  (((Yobjectify_locals = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_locals) != YPfalse)
    ? CHKREF(Yobjectify_locals)
    : YPfalse),fun_objectify_locals_1285)), (regsym(&Yobjectify_locals,"objectify-locals"))));
  fun_objectify_bind_exit_1286 = YPmet(FUNCODEREF(fun_objectify_bind_exit_1286),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yobjectify_bind_exit = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_bind_exit) != YPfalse)
    ? CHKREF(Yobjectify_bind_exit)
    : YPfalse),fun_objectify_bind_exit_1286)), (regsym(&Yobjectify_bind_exit,"objectify-bind-exit"))));
  fun_objectify_unwind_protect_1287 = YPmet(FUNCODEREF(fun_objectify_unwind_protect_1287),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yobjectify_unwind_protect = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_unwind_protect) != YPfalse)
    ? CHKREF(Yobjectify_unwind_protect)
    : YPfalse),fun_objectify_unwind_protect_1287)), (regsym(&Yobjectify_unwind_protect,"objectify-unwind-protect"))));
  fun_objectify_monitor_1288 = YPmet(FUNCODEREF(fun_objectify_monitor_1288),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yobjectify_monitor = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_monitor) != YPfalse)
    ? CHKREF(Yobjectify_monitor)
    : YPfalse),fun_objectify_monitor_1288)), (regsym(&Yobjectify_monitor,"objectify-monitor"))));
  lit_636 = YPsb((P)"Expected Pattern List %=\n");
  fun_objectify_bind_list_1289 = YPmet(FUNCODEREF(fun_objectify_bind_list_1289),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yobjectify_bind_list = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_bind_list) != YPfalse)
    ? CHKREF(Yobjectify_bind_list)
    : YPfalse),fun_objectify_bind_list_1289)), (regsym(&Yobjectify_bind_list,"objectify-bind-list"))));
  fun_objectify_bind_list_1290 = YPmet(FUNCODEREF(fun_objectify_bind_list_1290),YPpair(Ynil,Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yobjectify_bind_list = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_bind_list) != YPfalse)
    ? CHKREF(Yobjectify_bind_list)
    : YPfalse),fun_objectify_bind_list_1290)), (regsym(&Yobjectify_bind_list,"objectify-bind-list"))));
  lit_637 = YPsb((P)"Unquote Unexpected Here %=\n");
  lit_638 = YPsb((P)"Unquote Splicing Unexpected Here %=\n");
  fun_objectify_bind_list_1291 = YPmet(FUNCODEREF(fun_objectify_bind_list_1291),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yobjectify_bind_list = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_bind_list) != YPfalse)
    ? CHKREF(Yobjectify_bind_list)
    : YPfalse),fun_objectify_bind_list_1291)), (regsym(&Yobjectify_bind_list,"objectify-bind-list"))));
  fun_objectify_bind_listT_1292 = YPmet(FUNCODEREF(fun_objectify_bind_listT_1292),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yobjectify_bind_listT = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_bind_listT) != YPfalse)
    ? CHKREF(Yobjectify_bind_listT)
    : YPfalse),fun_objectify_bind_listT_1292)), (regsym(&Yobjectify_bind_listT,"objectify-bind-list*"))));
  fun_objectify_bind_element_1293 = YPmet(FUNCODEREF(fun_objectify_bind_element_1293),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yobjectify_bind_element = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_bind_element) != YPfalse)
    ? CHKREF(Yobjectify_bind_element)
    : YPfalse),fun_objectify_bind_element_1293)), (regsym(&Yobjectify_bind_element,"objectify-bind-element"))));
  fun_objectify_bind_element_1294 = YPmet(FUNCODEREF(fun_objectify_bind_element_1294),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yobjectify_bind_element = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_bind_element) != YPfalse)
    ? CHKREF(Yobjectify_bind_element)
    : YPfalse),fun_objectify_bind_element_1294)), (regsym(&Yobjectify_bind_element,"objectify-bind-element"))));
  fun_objectify_bind_unquote_1295 = YPmet(FUNCODEREF(fun_objectify_bind_unquote_1295),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yobjectify_bind_unquote = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_bind_unquote) != YPfalse)
    ? CHKREF(Yobjectify_bind_unquote)
    : YPfalse),fun_objectify_bind_unquote_1295)), (regsym(&Yobjectify_bind_unquote,"objectify-bind-unquote"))));
  fun_objectify_bind_unquote_splicing_1296 = YPmet(FUNCODEREF(fun_objectify_bind_unquote_splicing_1296),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yobjectify_bind_unquote_splicing = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_bind_unquote_splicing) != YPfalse)
    ? CHKREF(Yobjectify_bind_unquote_splicing)
    : YPfalse),fun_objectify_bind_unquote_splicing_1296)), (regsym(&Yobjectify_bind_unquote_splicing,"objectify-bind-unquote-splicing"))));
  fun_objectify_pattern_1297 = YPmet(FUNCODEREF(fun_objectify_pattern_1297),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yobjectify_pattern = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_pattern) != YPfalse)
    ? CHKREF(Yobjectify_pattern)
    : YPfalse),fun_objectify_pattern_1297)), (regsym(&Yobjectify_pattern,"objectify-pattern"))));
  fun_1298 = YPmet(FUNCODEREF(fun_1298),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_objectify_syntax_if_1299 = YPmet(FUNCODEREF(fun_objectify_syntax_if_1299),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))))),YPfalse,YPint((P)6),ENVNUL); 
  (((Yobjectify_syntax_if = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yobjectify_syntax_if) != YPfalse)
    ? CHKREF(Yobjectify_syntax_if)
    : YPfalse),fun_objectify_syntax_if_1299)), (regsym(&Yobjectify_syntax_if,"objectify-syntax-if"))));
  fun_r_extendT_1300 = YPmet(FUNCODEREF(fun_r_extendT_1300),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yr_extendT = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yr_extendT) != YPfalse)
    ? CHKREF(Yr_extendT)
    : YPfalse),fun_r_extendT_1300)), (regsym(&Yr_extendT,"r-extend*"))));
  fun_insert_globalX_1301 = YPmet(FUNCODEREF(fun_insert_globalX_1301),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yinsert_globalX = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yinsert_globalX) != YPfalse)
    ? CHKREF(Yinsert_globalX)
    : YPfalse),fun_insert_globalX_1301)), (regsym(&Yinsert_globalX,"insert-global!"))));
  fun_1302 = YPmet(FUNCODEREF(fun_1302),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_insert_globalsX_1303 = YPmet(FUNCODEREF(fun_insert_globalsX_1303),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yinsert_globalsX = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yinsert_globalsX) != YPfalse)
    ? CHKREF(Yinsert_globalsX)
    : YPfalse),fun_insert_globalsX_1303)), (regsym(&Yinsert_globalsX,"insert-globals!"))));
  fun_find_static_global_environment_1304 = YPmet(FUNCODEREF(fun_find_static_global_environment_1304),YPpair(CHKREF(YLstatic_local_environmentG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yfind_static_global_environment = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfind_static_global_environment) != YPfalse)
    ? CHKREF(Yfind_static_global_environment)
    : YPfalse),fun_find_static_global_environment_1304)), (regsym(&Yfind_static_global_environment,"find-static-global-environment"))));
  fun_find_static_global_environment_1305 = YPmet(FUNCODEREF(fun_find_static_global_environment_1305),YPpair(CHKREF(YLstatic_global_environmentG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yfind_static_global_environment = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfind_static_global_environment) != YPfalse)
    ? CHKREF(Yfind_static_global_environment)
    : YPfalse),fun_find_static_global_environment_1305)), (regsym(&Yfind_static_global_environment,"find-static-global-environment"))));
  fun_loop_1306 = YPmet(FUNCODEREF(fun_loop_1306),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_find_binding_1307 = YPmet(FUNCODEREF(fun_find_binding_1307),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLstatic_local_environmentG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfind_binding = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfind_binding) != YPfalse)
    ? CHKREF(Yfind_binding)
    : YPfalse),fun_find_binding_1307)), (regsym(&Yfind_binding,"find-binding"))));
  fun_find_binding_1308 = YPmet(FUNCODEREF(fun_find_binding_1308),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLstatic_global_environmentG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfind_binding = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfind_binding) != YPfalse)
    ? CHKREF(Yfind_binding)
    : YPfalse),fun_find_binding_1308)), (regsym(&Yfind_binding,"find-binding"))));
  fun_find_binding_1309 = YPmet(FUNCODEREF(fun_find_binding_1309),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLstatic_empty_environmentG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfind_binding = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yfind_binding) != YPfalse)
    ? CHKREF(Yfind_binding)
    : YPfalse),fun_find_binding_1309)), (regsym(&Yfind_binding,"find-binding"))));
  fun_frame_bindings_1310 = YPmet(FUNCODEREF(fun_frame_bindings_1310),YPpair(CHKREF(YLstatic_environmentG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yframe_bindings = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yframe_bindings) != YPfalse)
    ? CHKREF(Yframe_bindings)
    : YPfalse),fun_frame_bindings_1310)), (regsym(&Yframe_bindings,"frame-bindings"))));
  lit_639 = YPsb((P)"%= UNDEFINED\n");
  fun_1311 = YPmet(FUNCODEREF(fun_1311),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_loop_1312 = YPmet(FUNCODEREF(fun_loop_1312),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  Yreport_undefined_global_bindings = YPmet(FUNCODEREF(Yreport_undefined_global_bindings),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yreport_undefined_global_bindings = Yreport_undefined_global_bindings), (regsym(&Yreport_undefined_global_bindings,"report-undefined-global-bindings"))));
  (((YTmagic_bindingsT = Ynil), (regsym(&YTmagic_bindingsT,"*magic-bindings*"))));
  fun_register_magic_binding_1314 = YPmet(FUNCODEREF(fun_register_magic_binding_1314),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yregister_magic_binding = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yregister_magic_binding) != YPfalse)
    ? CHKREF(Yregister_magic_binding)
    : YPfalse),fun_register_magic_binding_1314)), (regsym(&Yregister_magic_binding,"register-magic-binding"))));
  fun_magic_bindings_1315 = YPmet(FUNCODEREF(fun_magic_bindings_1315),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Ymagic_bindings = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymagic_bindings) != YPfalse)
    ? CHKREF(Ymagic_bindings)
    : YPfalse),fun_magic_bindings_1315)), (regsym(&Ymagic_bindings,"magic-bindings"))));
  (YPfalse);
  fun_1316 = YPmet(FUNCODEREF(fun_1316),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_if = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_if_tag),(P)(P)YPpair((P)fun_1316,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_if,"special-if"))));
  lit_640 = YPPsym((P)"if");
  (CALL2(CHKREF(Yregister_magic_binding),lit_640,CHKREF(Yspecial_if)));
  fun_1317 = YPmet(FUNCODEREF(fun_1317),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_begin = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_begin_tag),(P)(P)YPpair((P)fun_1317,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_begin,"special-begin"))));
  lit_641 = YPPsym((P)"begin");
  (CALL2(CHKREF(Yregister_magic_binding),lit_641,CHKREF(Yspecial_begin)));
  lit_642 = YPPsym((P)"%raw");
  (((YDsexpr_Praw_tag = lit_642), (regsym(&YDsexpr_Praw_tag,"$sexpr-%raw-tag"))));
  fun_1318 = YPmet(FUNCODEREF(fun_1318),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_Praw = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_Praw_tag),(P)(P)YPpair((P)fun_1318,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_Praw,"special-%raw"))));
  lit_643 = YPPsym((P)"%raw");
  (CALL2(CHKREF(Yregister_magic_binding),lit_643,CHKREF(Yspecial_Praw)));
  fun_1319 = YPmet(FUNCODEREF(fun_1319),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_quote = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_quote_tag),(P)(P)YPpair((P)fun_1319,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_quote,"special-quote"))));
  lit_644 = YPPsym((P)"quote");
  (CALL2(CHKREF(Yregister_magic_binding),lit_644,CHKREF(Yspecial_quote)));
  fun_1320 = YPmet(FUNCODEREF(fun_1320),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_set = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_set_tag),(P)(P)YPpair((P)fun_1320,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_set,"special-set"))));
  lit_645 = YPPsym((P)"set");
  (CALL2(CHKREF(Yregister_magic_binding),lit_645,CHKREF(Yspecial_set)));
  fun_1321 = YPmet(FUNCODEREF(fun_1321),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_define = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_define_tag),(P)(P)YPpair((P)fun_1321,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_define,"special-define"))));
  lit_646 = YPPsym((P)"define");
  (CALL2(CHKREF(Yregister_magic_binding),lit_646,CHKREF(Yspecial_define)));
  fun_1322 = YPmet(FUNCODEREF(fun_1322),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_define_syntax = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_define_syntax_tag),(P)(P)YPpair((P)fun_1322,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_define_syntax,"special-define-syntax"))));
  lit_647 = YPPsym((P)"define-syntax");
  (CALL2(CHKREF(Yregister_magic_binding),lit_647,CHKREF(Yspecial_define_syntax)));
  fun_1323 = YPmet(FUNCODEREF(fun_1323),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_define_method = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_define_method_tag),(P)(P)YPpair((P)fun_1323,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_define_method,"special-define-method"))));
  lit_648 = YPPsym((P)"define-method");
  (CALL2(CHKREF(Yregister_magic_binding),lit_648,CHKREF(Yspecial_define_method)));
  fun_1324 = YPmet(FUNCODEREF(fun_1324),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_define_generic = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_define_generic_tag),(P)(P)YPpair((P)fun_1324,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_define_generic,"special-define-generic"))));
  lit_649 = YPPsym((P)"define-generic");
  (CALL2(CHKREF(Yregister_magic_binding),lit_649,CHKREF(Yspecial_define_generic)));
  fun_1325 = YPmet(FUNCODEREF(fun_1325),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_define_function = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_define_function_tag),(P)(P)YPpair((P)fun_1325,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_define_function,"special-define-function"))));
  lit_650 = YPPsym((P)"define-function");
  (CALL2(CHKREF(Yregister_magic_binding),lit_650,CHKREF(Yspecial_define_function)));
  fun_1326 = YPmet(FUNCODEREF(fun_1326),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_method = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_method_tag),(P)(P)YPpair((P)fun_1326,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_method,"special-method"))));
  lit_651 = YPPsym((P)"method");
  (CALL2(CHKREF(Yregister_magic_binding),lit_651,CHKREF(Yspecial_method)));
  lit_652 = YPPsym((P)"bound?");
  (((YDsexpr_boundQ_tag = lit_652), (regsym(&YDsexpr_boundQ_tag,"$sexpr-bound?-tag"))));
  fun_1327 = YPmet(FUNCODEREF(fun_1327),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_boundQ = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_boundQ_tag),(P)(P)YPpair((P)fun_1327,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_boundQ,"special-bound?"))));
  lit_653 = YPPsym((P)"bound?");
  (CALL2(CHKREF(Yregister_magic_binding),lit_653,CHKREF(Yspecial_boundQ)));
  fun_1328 = YPmet(FUNCODEREF(fun_1328),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_let = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_let_tag),(P)(P)YPpair((P)fun_1328,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_let,"special-let"))));
  lit_654 = YPPsym((P)"let");
  (CALL2(CHKREF(Yregister_magic_binding),lit_654,CHKREF(Yspecial_let)));
  fun_1329 = YPmet(FUNCODEREF(fun_1329),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_locals = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_locals_tag),(P)(P)YPpair((P)fun_1329,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_locals,"special-locals"))));
  lit_655 = YPPsym((P)"locals");
  (CALL2(CHKREF(Yregister_magic_binding),lit_655,CHKREF(Yspecial_locals)));
  fun_1330 = YPmet(FUNCODEREF(fun_1330),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_iterate = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_iterate_tag),(P)(P)YPpair((P)fun_1330,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_iterate,"special-iterate"))));
  lit_656 = YPPsym((P)"iterate");
  (CALL2(CHKREF(Yregister_magic_binding),lit_656,CHKREF(Yspecial_iterate)));
  fun_1331 = YPmet(FUNCODEREF(fun_1331),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_bind_exit = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_bind_exit_tag),(P)(P)YPpair((P)fun_1331,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_bind_exit,"special-bind-exit"))));
  lit_657 = YPPsym((P)"bind-exit");
  (CALL2(CHKREF(Yregister_magic_binding),lit_657,CHKREF(Yspecial_bind_exit)));
  fun_1332 = YPmet(FUNCODEREF(fun_1332),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_unwind_protect = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_unwind_protect_tag),(P)(P)YPpair((P)fun_1332,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_unwind_protect,"special-unwind-protect"))));
  lit_658 = YPPsym((P)"unwind-protect");
  (CALL2(CHKREF(Yregister_magic_binding),lit_658,CHKREF(Yspecial_unwind_protect)));
  fun_1333 = YPmet(FUNCODEREF(fun_1333),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_monitor = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_monitor_tag),(P)(P)YPpair((P)fun_1333,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_monitor,"special-monitor"))));
  lit_659 = YPPsym((P)"monitor");
  (CALL2(CHKREF(Yregister_magic_binding),lit_659,CHKREF(Yspecial_monitor)));
  lit_660 = YPPsym((P)"quote");
  lit_661 = YPPsym((P)"pair");
  fun_pairize_1334 = YPmet(FUNCODEREF(fun_pairize_1334),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ypairize = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ypairize) != YPfalse)
    ? CHKREF(Ypairize)
    : YPfalse),fun_pairize_1334)), (regsym(&Ypairize,"pairize"))));
  lit_662 = YPPsym((P)"%isa");
  fun_1335 = YPmet(FUNCODEREF(fun_1335),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_isa = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_isa_tag),(P)(P)YPpair((P)fun_1335,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_isa,"special-isa"))));
  lit_663 = YPPsym((P)"isa");
  (CALL2(CHKREF(Yregister_magic_binding),lit_663,CHKREF(Yspecial_isa)));
  lit_664 = YPPsym((P)"%slot");
  lit_665 = YPpair(YPpair(YPPsym((P)"x"), YPpair(YPPsym((P)"<any>"), Ynil)), Ynil);
  fun_1336 = YPmet(FUNCODEREF(fun_1336),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_slot = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_slot_tag),(P)(P)YPpair((P)fun_1336,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_slot,"special-slot"))));
  lit_666 = YPPsym((P)"slot");
  (CALL2(CHKREF(Yregister_magic_binding),lit_666,CHKREF(Yspecial_slot)));
  lit_667 = YPPsym((P)"ct");
  (((YDsexpr_compile_time_tag = lit_667), (regsym(&YDsexpr_compile_time_tag,"$sexpr-compile-time-tag"))));
  fun_1337 = YPmet(FUNCODEREF(fun_1337),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_compile_time = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_compile_time_tag),(P)(P)YPpair((P)fun_1337,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_compile_time,"special-compile-time"))));
  lit_668 = YPPsym((P)"compile-time");
  (CALL2(CHKREF(Yregister_magic_binding),lit_668,CHKREF(Yspecial_compile_time)));
  lit_669 = YPPsym((P)"dp");
  (((YDsexpr_define_primitive_tag = lit_669), (regsym(&YDsexpr_define_primitive_tag,"$sexpr-define-primitive-tag"))));
  fun_1338 = YPmet(FUNCODEREF(fun_1338),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_define_primitive = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_define_primitive_tag),(P)(P)YPpair((P)fun_1338,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_define_primitive,"special-define-primitive"))));
  lit_670 = YPPsym((P)"define-primitive");
  (CALL2(CHKREF(Yregister_magic_binding),lit_670,CHKREF(Yspecial_define_primitive)));
  fun_1339 = YPmet(FUNCODEREF(fun_1339),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_quasiquote = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_quasiquote_tag),(P)(P)YPpair((P)fun_1339,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_quasiquote,"special-quasiquote"))));
  lit_671 = YPPsym((P)"quasiquote");
  (CALL2(CHKREF(Yregister_magic_binding),lit_671,CHKREF(Yspecial_quasiquote)));
  fun_ast_macro_expand_1340 = YPmet(FUNCODEREF(fun_ast_macro_expand_1340),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_macro_expand = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_macro_expand) != YPfalse)
    ? CHKREF(Yast_macro_expand)
    : YPfalse),fun_ast_macro_expand_1340)), (regsym(&Yast_macro_expand,"ast-macro-expand"))));
  fun_1341 = YPmet(FUNCODEREF(fun_1341),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_macro_expand = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_macro_expand_tag),(P)(P)YPpair((P)fun_1341,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_macro_expand,"special-macro-expand"))));
  lit_672 = YPPsym((P)"macro-expand");
  (CALL2(CHKREF(Yregister_magic_binding),lit_672,CHKREF(Yspecial_macro_expand)));
  fun_1342 = YPmet(FUNCODEREF(fun_1342),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yspecial_syntax_if = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLmagic_bindingG),(P)Ynil),(P)YPpair((P)CHKREF(Ybinding_name),(P)(P)YPpair((P)CHKREF(Ybinding_handler),(P)(P)YPpair((P)CHKREF(Ybinding_freeQ),(P)Ynil))),(P)YPpair((P)CHKREF(YDsexpr_syntax_if_tag),(P)(P)YPpair((P)fun_1342,(P)(P)YPpair((P)YPfalse,(P)Ynil))))), (regsym(&Yspecial_syntax_if,"special-syntax-if"))));
  lit_673 = YPPsym((P)"syntax-if");
  (CALL2(CHKREF(Yregister_magic_binding),lit_673,CHKREF(Yspecial_syntax_if)));
  (((YTprimitivesT = Ynil), (regsym(&YTprimitivesT,"*primitives*"))));
  fun_primitives_1343 = YPmet(FUNCODEREF(fun_primitives_1343),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Yprimitives = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yprimitives) != YPfalse)
    ? CHKREF(Yprimitives)
    : YPfalse),fun_primitives_1343)), (regsym(&Yprimitives,"primitives"))));
  fun_1344 = YPmet(FUNCODEREF(fun_1344),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  Yinit_rt_environment = YPmet(FUNCODEREF(Yinit_rt_environment),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yinit_rt_environment = Yinit_rt_environment), (regsym(&Yinit_rt_environment,"init-rt-environment"))));
  lit_674 = YPint((P)1000);
  Yfab_static_global_environment = YPmet(FUNCODEREF(Yfab_static_global_environment),YPpair(CHKREF(YLstatic_environmentG),YPpair(CHKREF(YLstatic_environmentG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yfab_static_global_environment = Yfab_static_global_environment), (regsym(&Yfab_static_global_environment,"fab-static-global-environment"))));
  Yinit_static_global_environment = YPmet(FUNCODEREF(Yinit_static_global_environment),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Yinit_static_global_environment = Yinit_static_global_environment), (regsym(&Yinit_static_global_environment,"init-static-global-environment"))));
  (((YTstatic_predefined_global_environmentT = CHKREF(YDempty_static_environment)), (regsym(&YTstatic_predefined_global_environmentT,"*static-predefined-global-environment*"))));
  (((YTstatic_global_environmentT = CHKREF(YDempty_static_environment)), (regsym(&YTstatic_global_environmentT,"*static-global-environment*"))));
  (((YTstatic_predefined_global_boot_environmentT = CHKREF(YDempty_static_environment)), (regsym(&YTstatic_predefined_global_boot_environmentT,"*static-predefined-global-boot-environment*"))));
  (((YTstatic_global_boot_environmentT = CHKREF(YDempty_static_environment)), (regsym(&YTstatic_global_boot_environmentT,"*static-global-boot-environment*"))));
  Yinit_ast = YPmet(FUNCODEREF(Yinit_ast),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Yinit_ast = Yinit_ast), (regsym(&Yinit_ast,"init-ast"))));
  Yct_env = YPmet(FUNCODEREF(Yct_env),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Yct_env = Yct_env), (regsym(&Yct_env,"ct-env"))));
  Yct_boot_env = YPmet(FUNCODEREF(Yct_boot_env),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Yct_boot_env = Yct_boot_env), (regsym(&Yct_boot_env,"ct-boot-env"))));
  fun_loop_1351 = YPmet(FUNCODEREF(fun_loop_1351),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  Ydo_static_global_bindings = YPmet(FUNCODEREF(Ydo_static_global_bindings),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ydo_static_global_bindings = Ydo_static_global_bindings), (regsym(&Ydo_static_global_bindings,"do-static-global-bindings"))));
  fun_ast_eval_in_1353 = YPmet(FUNCODEREF(fun_ast_eval_in_1353),YPpair(CHKREF(YLprogramG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval_in = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval_in) != YPfalse)
    ? CHKREF(Yast_eval_in)
    : YPfalse),fun_ast_eval_in_1353)), (regsym(&Yast_eval_in,"ast-eval-in"))));
  (((Yast_eval = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),YPpair(CHKREF(YLprogramG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),Ynil,YPfalse)), (regsym(&Yast_eval,"ast-eval"))));
  fun_ast_eval_1354 = YPmet(FUNCODEREF(fun_ast_eval_1354),YPpair(CHKREF(YLconstantG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1354)), (regsym(&Yast_eval,"ast-eval"))));
  fun_ast_eval_1355 = YPmet(FUNCODEREF(fun_ast_eval_1355),YPpair(CHKREF(YLraw_constantG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1355)), (regsym(&Yast_eval,"ast-eval"))));
  fun_ast_eval_1356 = YPmet(FUNCODEREF(fun_ast_eval_1356),YPpair(CHKREF(YLcompile_timeG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1356)), (regsym(&Yast_eval,"ast-eval"))));
  lit_675 = YPint((P)1);
  lit_676 = YPint((P)1);
  lit_677 = YPint((P)0);
  fun_loop_1357 = YPmet(FUNCODEREF(fun_loop_1357),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  fun_ast_eval_specs_1358 = YPmet(FUNCODEREF(fun_ast_eval_specs_1358),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlogG),YPpair(CHKREF(YLloc_envG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yast_eval_specs = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval_specs) != YPfalse)
    ? CHKREF(Yast_eval_specs)
    : YPfalse),fun_ast_eval_specs_1358)), (regsym(&Yast_eval_specs,"ast-eval-specs"))));
  lit_678 = YPint((P)0);
  (((YTstackT = CALL2(CHKREF(Yfab),CHKREF(YLsvecG),lit_678)), (regsym(&YTstackT,"*stack*"))));
  (YPfalse);
  lit_679 = YPint((P)0);
  lit_680 = YPint((P)1);
  lit_681 = YPint((P)2);
  lit_682 = YPint((P)3);
  lit_683 = YPint((P)4);
  lit_684 = YPint((P)5);
  lit_685 = YPint((P)6);
  lit_686 = YPint((P)7);
  lit_687 = YPint((P)8);
  lit_688 = YPint((P)9);
  lit_689 = YPint((P)1);
  fun_1359 = YPmet(FUNCODEREF(fun_1359),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_1360 = YPmet(FUNCODEREF(fun_1360),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_1361 = YPmet(FUNCODEREF(fun_1361),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_1362 = YPmet(FUNCODEREF(fun_1362),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  fun_1363 = YPmet(FUNCODEREF(fun_1363),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),ENVNUL); 
  fun_1364 = YPmet(FUNCODEREF(fun_1364),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))))),YPfalse,YPint((P)5),ENVNUL); 
  fun_1365 = YPmet(FUNCODEREF(fun_1365),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))))),YPfalse,YPint((P)6),ENVNUL); 
  fun_1366 = YPmet(FUNCODEREF(fun_1366),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))))))),YPfalse,YPint((P)7),ENVNUL); 
  fun_1367 = YPmet(FUNCODEREF(fun_1367),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))))))),YPfalse,YPint((P)8),ENVNUL); 
  fun_1368 = YPmet(FUNCODEREF(fun_1368),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))))))))),YPfalse,YPint((P)9),ENVNUL); 
  fun_export_proto_method_1369 = YPmet(FUNCODEREF(fun_export_proto_method_1369),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))))),YPfalse,YPint((P)6),ENVNUL); 
  (((Yexport_proto_method = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yexport_proto_method) != YPfalse)
    ? CHKREF(Yexport_proto_method)
    : YPfalse),fun_export_proto_method_1369)), (regsym(&Yexport_proto_method,"export-proto-method"))));
  fun_1370 = YPmet(FUNCODEREF(fun_1370),YPpair(CHKREF(YLloc_envG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_ast_eval_1371 = YPmet(FUNCODEREF(fun_ast_eval_1371),YPpair(CHKREF(YLast_methodG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1371)), (regsym(&Yast_eval,"ast-eval"))));
  fun_ast_eval_1372 = YPmet(FUNCODEREF(fun_ast_eval_1372),YPpair(CHKREF(YLast_genericG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1372)), (regsym(&Yast_eval,"ast-eval"))));
  fun_env_local_reference_value_1373 = YPmet(FUNCODEREF(fun_env_local_reference_value_1373),YPpair(CHKREF(YLloc_envG),YPpair(CHKREF(YLlocal_referenceG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yenv_local_reference_value = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_local_reference_value) != YPfalse)
    ? CHKREF(Yenv_local_reference_value)
    : YPfalse),fun_env_local_reference_value_1373)), (regsym(&Yenv_local_reference_value,"env-local-reference-value"))));
  fun_env_local_reference_value_setter_1374 = YPmet(FUNCODEREF(fun_env_local_reference_value_setter_1374),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLloc_envG),YPpair(CHKREF(YLlocal_referenceG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yenv_local_reference_value_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_local_reference_value_setter) != YPfalse)
    ? CHKREF(Yenv_local_reference_value_setter)
    : YPfalse),fun_env_local_reference_value_setter_1374)), (regsym(&Yenv_local_reference_value_setter,"env-local-reference-value-setter"))));
  fun_ast_eval_1375 = YPmet(FUNCODEREF(fun_ast_eval_1375),YPpair(CHKREF(YLlocal_referenceG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1375)), (regsym(&Yast_eval,"ast-eval"))));
  fun_env_global_binding_value_or_1376 = YPmet(FUNCODEREF(fun_env_global_binding_value_or_1376),YPpair(CHKREF(YLglo_envG),YPpair(CHKREF(YLglobal_bindingG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yenv_global_binding_value_or = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_global_binding_value_or) != YPfalse)
    ? CHKREF(Yenv_global_binding_value_or)
    : YPfalse),fun_env_global_binding_value_or_1376)), (regsym(&Yenv_global_binding_value_or,"env-global-binding-value-or"))));
  lit_690 = YPsb((P)"Unbound binding: %=");
  fun_env_global_binding_value_1377 = YPmet(FUNCODEREF(fun_env_global_binding_value_1377),YPpair(CHKREF(YLglo_envG),YPpair(CHKREF(YLglobal_bindingG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yenv_global_binding_value = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_global_binding_value) != YPfalse)
    ? CHKREF(Yenv_global_binding_value)
    : YPfalse),fun_env_global_binding_value_1377)), (regsym(&Yenv_global_binding_value,"env-global-binding-value"))));
  fun_env_global_binding_value_setter_1378 = YPmet(FUNCODEREF(fun_env_global_binding_value_setter_1378),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLglo_envG),YPpair(CHKREF(YLglobal_bindingG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yenv_global_binding_value_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_global_binding_value_setter) != YPfalse)
    ? CHKREF(Yenv_global_binding_value_setter)
    : YPfalse),fun_env_global_binding_value_setter_1378)), (regsym(&Yenv_global_binding_value_setter,"env-global-binding-value-setter"))));
  fun_ast_eval_1379 = YPmet(FUNCODEREF(fun_ast_eval_1379),YPpair(CHKREF(YLglobal_referenceG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1379)), (regsym(&Yast_eval,"ast-eval"))));
  fun_ast_eval_1380 = YPmet(FUNCODEREF(fun_ast_eval_1380),YPpair(CHKREF(YLruntime_referenceG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1380)), (regsym(&Yast_eval,"ast-eval"))));
  fun_ast_eval_1381 = YPmet(FUNCODEREF(fun_ast_eval_1381),YPpair(CHKREF(YLboundQG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1381)), (regsym(&Yast_eval,"ast-eval"))));
  fun_ast_eval_boundQ_1382 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_1382),YPpair(CHKREF(YLboundQG),YPpair(CHKREF(YLglobal_bindingG),YPpair(CHKREF(YLloc_envG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yast_eval_boundQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval_boundQ) != YPfalse)
    ? CHKREF(Yast_eval_boundQ)
    : YPfalse),fun_ast_eval_boundQ_1382)), (regsym(&Yast_eval_boundQ,"ast-eval-bound?"))));
  fun_ast_eval_boundQ_1383 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_1383),YPpair(CHKREF(YLboundQG),YPpair(CHKREF(YLruntime_bindingG),YPpair(CHKREF(YLloc_envG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yast_eval_boundQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval_boundQ) != YPfalse)
    ? CHKREF(Yast_eval_boundQ)
    : YPfalse),fun_ast_eval_boundQ_1383)), (regsym(&Yast_eval_boundQ,"ast-eval-bound?"))));
  fun_ast_eval_boundQ_1384 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_1384),YPpair(CHKREF(YLboundQG),YPpair(CHKREF(YLlocal_bindingG),YPpair(CHKREF(YLloc_envG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yast_eval_boundQ = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval_boundQ) != YPfalse)
    ? CHKREF(Yast_eval_boundQ)
    : YPfalse),fun_ast_eval_boundQ_1384)), (regsym(&Yast_eval_boundQ,"ast-eval-bound?"))));
  fun_ast_eval_1385 = YPmet(FUNCODEREF(fun_ast_eval_1385),YPpair(CHKREF(YLglobal_assignmentG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1385)), (regsym(&Yast_eval,"ast-eval"))));
  fun_ast_eval_1386 = YPmet(FUNCODEREF(fun_ast_eval_1386),YPpair(CHKREF(YLruntime_assignmentG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1386)), (regsym(&Yast_eval,"ast-eval"))));
  fun_ast_eval_1387 = YPmet(FUNCODEREF(fun_ast_eval_1387),YPpair(CHKREF(YLlocal_assignmentG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1387)), (regsym(&Yast_eval,"ast-eval"))));
  fun_env_define_bindingX_1388 = YPmet(FUNCODEREF(fun_env_define_bindingX_1388),YPpair(CHKREF(YLglo_envG),YPpair(CHKREF(YLruntime_bindingG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yenv_define_bindingX = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_define_bindingX) != YPfalse)
    ? CHKREF(Yenv_define_bindingX)
    : YPfalse),fun_env_define_bindingX_1388)), (regsym(&Yenv_define_bindingX,"env-define-binding!"))));
  fun_env_define_bindingX_1389 = YPmet(FUNCODEREF(fun_env_define_bindingX_1389),YPpair(CHKREF(YLglo_envG),YPpair(CHKREF(YLglobal_bindingG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yenv_define_bindingX = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yenv_define_bindingX) != YPfalse)
    ? CHKREF(Yenv_define_bindingX)
    : YPfalse),fun_env_define_bindingX_1389)), (regsym(&Yenv_define_bindingX,"env-define-binding!"))));
  fun_ast_eval_1390 = YPmet(FUNCODEREF(fun_ast_eval_1390),YPpair(CHKREF(YLdefinitionG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1390)), (regsym(&Yast_eval,"ast-eval"))));
  (((YLboxG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLanyG),(P)Ynil),Ynil,Ynil)), (regsym(&YLboxG,"<box>"))));
  fun_box_value_1391 = YPmet(FUNCODEREF(fun_box_value_1391),YPpair(CHKREF(YLboxG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ybox_value = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybox_value) != YPfalse)
    ? CHKREF(Ybox_value)
    : YPfalse),fun_box_value_1391)), (regsym(&Ybox_value,"box-value"))));
  fun_box_value_setter_1392 = YPmet(FUNCODEREF(fun_box_value_setter_1392),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLboxG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ybox_value_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybox_value_setter) != YPfalse)
    ? CHKREF(Ybox_value_setter)
    : YPfalse),fun_box_value_setter_1392)), (regsym(&Ybox_value_setter,"box-value-setter"))));
  fun_1393 = YPmet(FUNCODEREF(fun_1393),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (CALLN(CHKREF(YPslot),5,CHKREF(YLboxG),CHKREF(Ybox_value),CHKREF(Ybox_value_setter),CHKREF(YLanyG),fun_1393));
  fun_ast_eval_1394 = YPmet(FUNCODEREF(fun_ast_eval_1394),YPpair(CHKREF(YLalternativeG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1394)), (regsym(&Yast_eval,"ast-eval"))));
  fun_eval_1395 = YPmet(FUNCODEREF(fun_eval_1395),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_ast_eval_1396 = YPmet(FUNCODEREF(fun_ast_eval_1396),YPpair(CHKREF(YLsequentialG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1396)), (regsym(&Yast_eval,"ast-eval"))));
  fun_eval_1397 = YPmet(FUNCODEREF(fun_eval_1397),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_ast_eval_1398 = YPmet(FUNCODEREF(fun_ast_eval_1398),YPpair(CHKREF(YLargument_listG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1398)), (regsym(&Yast_eval,"ast-eval"))));
  fun_ast_eval_1399 = YPmet(FUNCODEREF(fun_ast_eval_1399),YPpair(CHKREF(YLregular_applicationG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1399)), (regsym(&Yast_eval,"ast-eval"))));
  fun_ast_eval_1400 = YPmet(FUNCODEREF(fun_ast_eval_1400),YPpair(CHKREF(YLpredefined_applicationG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1400)), (regsym(&Yast_eval,"ast-eval"))));
  fun_ast_eval_1401 = YPmet(FUNCODEREF(fun_ast_eval_1401),YPpair(CHKREF(YLfix_letG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1401)), (regsym(&Yast_eval,"ast-eval"))));
  fun_1402 = YPmet(FUNCODEREF(fun_1402),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_ast_eval_1403 = YPmet(FUNCODEREF(fun_ast_eval_1403),YPpair(CHKREF(YLlocalsG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1403)), (regsym(&Yast_eval,"ast-eval"))));
  lit_691 = YPPsym((P)"x");
  lit_692 = YPPsym((P)"x");
  fun_1404 = YPmet(FUNCODEREF(fun_1404),YPpair(CHKREF(YLloc_envG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_1405 = YPmet(FUNCODEREF(fun_1405),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_ast_eval_1406 = YPmet(FUNCODEREF(fun_ast_eval_1406),YPpair(CHKREF(YLbind_exitG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1406)), (regsym(&Yast_eval,"ast-eval"))));
  fun_1407 = YPmet(FUNCODEREF(fun_1407),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_1408 = YPmet(FUNCODEREF(fun_1408),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_ast_eval_1409 = YPmet(FUNCODEREF(fun_ast_eval_1409),YPpair(CHKREF(YLunwind_protectG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1409)), (regsym(&Yast_eval,"ast-eval"))));
  fun_ast_eval_1410 = YPmet(FUNCODEREF(fun_ast_eval_1410),YPpair(CHKREF(YLmonitorG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1410)), (regsym(&Yast_eval,"ast-eval"))));
  (((YLpattern_match_failureG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLsimple_conditionG),(P)Ynil),Ynil,Ynil)), (regsym(&YLpattern_match_failureG,"<pattern-match-failure>"))));
  fun_match_error_1411 = YPmet(FUNCODEREF(fun_match_error_1411),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),ENVNUL); 
  (((Ymatch_error = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ymatch_error) != YPfalse)
    ? CHKREF(Ymatch_error)
    : YPfalse),fun_match_error_1411)), (regsym(&Ymatch_error,"match-error"))));
  lit_693 = YPsb((P)"Match Empty Failure of %= on %=");
  fun_ast_eval_match_1412 = YPmet(FUNCODEREF(fun_ast_eval_match_1412),YPpair(CHKREF(YLmatch_empty_listG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLloc_envG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yast_eval_match = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval_match) != YPfalse)
    ? CHKREF(Yast_eval_match)
    : YPfalse),fun_ast_eval_match_1412)), (regsym(&Yast_eval_match,"ast-eval-match"))));
  lit_694 = YPsb((P)"Match Failure of %= on %= Expected List");
  fun_loop_1413 = YPmet(FUNCODEREF(fun_loop_1413),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_ast_eval_match_1414 = YPmet(FUNCODEREF(fun_ast_eval_match_1414),YPpair(CHKREF(YLmatch_listG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLloc_envG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yast_eval_match = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval_match) != YPfalse)
    ? CHKREF(Yast_eval_match)
    : YPfalse),fun_ast_eval_match_1414)), (regsym(&Yast_eval_match,"ast-eval-match"))));
  lit_695 = YPsb((P)"Match Failure Empty List on %=");
  lit_696 = YPsb((P)"Match Failure of %= on %=");
  fun_ast_eval_match_1415 = YPmet(FUNCODEREF(fun_ast_eval_match_1415),YPpair(CHKREF(YLmatch_atomG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLloc_envG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yast_eval_match = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval_match) != YPfalse)
    ? CHKREF(Yast_eval_match)
    : YPfalse),fun_ast_eval_match_1415)), (regsym(&Yast_eval_match,"ast-eval-match"))));
  lit_697 = YPsb((P)"Match Failure Empty List on %=");
  fun_ast_eval_match_1416 = YPmet(FUNCODEREF(fun_ast_eval_match_1416),YPpair(CHKREF(YLmatch_unquoteG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLloc_envG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yast_eval_match = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval_match) != YPfalse)
    ? CHKREF(Yast_eval_match)
    : YPfalse),fun_ast_eval_match_1416)), (regsym(&Yast_eval_match,"ast-eval-match"))));
  fun_ast_eval_match_1417 = YPmet(FUNCODEREF(fun_ast_eval_match_1417),YPpair(CHKREF(YLmatch_unquote_splicingG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLloc_envG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yast_eval_match = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval_match) != YPfalse)
    ? CHKREF(Yast_eval_match)
    : YPfalse),fun_ast_eval_match_1417)), (regsym(&Yast_eval_match,"ast-eval-match"))));
  lit_698 = YPsb((P)"Match Failure of %= on %= Expected List");
  fun_ast_eval_match_1418 = YPmet(FUNCODEREF(fun_ast_eval_match_1418),YPpair(CHKREF(YLmatch_sublistG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLloc_envG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yast_eval_match = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval_match) != YPfalse)
    ? CHKREF(Yast_eval_match)
    : YPfalse),fun_ast_eval_match_1418)), (regsym(&Yast_eval_match,"ast-eval-match"))));
  fun_1419 = YPmet(FUNCODEREF(fun_1419),YPpair(CHKREF(YLpattern_match_failureG),YPpair(CHKREF(YLfunG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_1420 = YPmet(FUNCODEREF(fun_1420),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_1421 = YPmet(FUNCODEREF(fun_1421),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_ast_eval_1422 = YPmet(FUNCODEREF(fun_ast_eval_1422),YPpair(CHKREF(YLsyntax_ifG),YPpair(CHKREF(YLloc_envG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yast_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yast_eval) != YPfalse)
    ? CHKREF(Yast_eval)
    : YPfalse),fun_ast_eval_1422)), (regsym(&Yast_eval,"ast-eval"))));
  (((YTrt_glo_envT = YPfalse), (regsym(&YTrt_glo_envT,"*rt-glo-env*"))));
  Yrt_glo_env = YPmet(FUNCODEREF(Yrt_glo_env),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Yrt_glo_env = Yrt_glo_env), (regsym(&Yrt_glo_env,"rt-glo-env"))));
  Yrt_glo_env_setter = YPmet(FUNCODEREF(Yrt_glo_env_setter),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yrt_glo_env_setter = Yrt_glo_env_setter), (regsym(&Yrt_glo_env_setter,"rt-glo-env-setter"))));
  (((YTrt_envT = CHKREF(YDnul_loc_env)), (regsym(&YTrt_envT,"*rt-env*"))));
  Yrt_env = YPmet(FUNCODEREF(Yrt_env),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Yrt_env = Yrt_env), (regsym(&Yrt_env,"rt-env"))));
  Yrt_env_setter = YPmet(FUNCODEREF(Yrt_env_setter),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yrt_env_setter = Yrt_env_setter), (regsym(&Yrt_env_setter,"rt-env-setter"))));
  Yast_read_eval = YPmet(FUNCODEREF(Yast_read_eval),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yast_read_eval = Yast_read_eval), (regsym(&Yast_read_eval,"ast-read-eval"))));
  Yinit_ast_eval = YPmet(FUNCODEREF(Yinit_ast_eval),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Yinit_ast_eval = Yinit_ast_eval), (regsym(&Yinit_ast_eval,"init-ast-eval"))));
  fun_os_name_1429 = YPmet(FUNCODEREF(fun_os_name_1429),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Yos_name = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yos_name) != YPfalse)
    ? CHKREF(Yos_name)
    : YPfalse),fun_os_name_1429)), (regsym(&Yos_name,"os-name"))));
  fun_os_binding_value_1430 = YPmet(FUNCODEREF(fun_os_binding_value_1430),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yos_binding_value = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yos_binding_value) != YPfalse)
    ? CHKREF(Yos_binding_value)
    : YPfalse),fun_os_binding_value_1430)), (regsym(&Yos_binding_value,"os-binding-value"))));
  fun_os_binding_value_setter_1431 = YPmet(FUNCODEREF(fun_os_binding_value_setter_1431),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLstrG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yos_binding_value_setter = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yos_binding_value_setter) != YPfalse)
    ? CHKREF(Yos_binding_value_setter)
    : YPfalse),fun_os_binding_value_setter_1431)), (regsym(&Yos_binding_value_setter,"os-binding-value-setter"))));
  lit_699 = YPsb((P)"linux");
  lit_700 = YPsb((P)"/");
  lit_701 = YPsb((P)"win32");
  lit_702 = YPsb((P)"\\");
  lit_703 = YPsb((P)"/");
  (((YTpath_separatorT = ((CALL2(CHKREF(YE),CALL0(CHKREF(Yos_name)),lit_699) != YPfalse)
    ? lit_700
    : ((CALL2(CHKREF(YE),CALL0(CHKREF(Yos_name)),lit_701) != YPfalse)
    ? lit_702
    : ((YPtrue != YPfalse)
    ? lit_703
    : YPfalse)))), (regsym(&YTpath_separatorT,"*path-separator*"))));
  lit_704 = YPint((P)0);
  lit_705 = YPsb((P)"");
  lit_706 = YPint((P)0);
  lit_707 = YPint((P)0);
  lit_708 = YPint((P)1);
  lit_709 = YPint((P)1);
  fun_loop_1432 = YPmet(FUNCODEREF(fun_loop_1432),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_base_path_1433 = YPmet(FUNCODEREF(fun_base_path_1433),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ybase_path = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybase_path) != YPfalse)
    ? CHKREF(Ybase_path)
    : YPfalse),fun_base_path_1433)), (regsym(&Ybase_path,"base-path"))));
  lit_710 = YPsb((P)"PROTO_ROOT");
  (((YTproto_rootT = CALL1(CHKREF(Yos_binding_value),lit_710)), (regsym(&YTproto_rootT,"*proto-root*"))));
  lit_711 = YPsb((P)"..");
  lit_712 = YPsb((P)"SRC");
  lit_713 = YPsb((P)"SRC");
  fun_src_filename_1434 = YPmet(FUNCODEREF(fun_src_filename_1434),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ysrc_filename = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ysrc_filename) != YPfalse)
    ? CHKREF(Ysrc_filename)
    : YPfalse),fun_src_filename_1434)), (regsym(&Ysrc_filename,"src-filename"))));
  fun_parse_in_1435 = YPmet(FUNCODEREF(fun_parse_in_1435),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yparse_in = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yparse_in) != YPfalse)
    ? CHKREF(Yparse_in)
    : YPfalse),fun_parse_in_1435)), (regsym(&Yparse_in,"parse-in"))));
  fun_parse_1436 = YPmet(FUNCODEREF(fun_parse_1436),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yparse = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yparse) != YPfalse)
    ? CHKREF(Yparse)
    : YPfalse),fun_parse_1436)), (regsym(&Yparse,"parse"))));
  lit_714 = YPsb((P)"%=\n");
  fun_str_parse_in_1437 = YPmet(FUNCODEREF(fun_str_parse_in_1437),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Ystr_parse_in = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ystr_parse_in) != YPfalse)
    ? CHKREF(Ystr_parse_in)
    : YPfalse),fun_str_parse_in_1437)), (regsym(&Ystr_parse_in,"str-parse-in"))));
  fun_str_parse_1438 = YPmet(FUNCODEREF(fun_str_parse_1438),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ystr_parse = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ystr_parse) != YPfalse)
    ? CHKREF(Ystr_parse)
    : YPfalse),fun_str_parse_1438)), (regsym(&Ystr_parse,"str-parse"))));
  fun_eval_in_1439 = YPmet(FUNCODEREF(fun_eval_in_1439),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yeval_in = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yeval_in) != YPfalse)
    ? CHKREF(Yeval_in)
    : YPfalse),fun_eval_in_1439)), (regsym(&Yeval_in,"eval-in"))));
  fun_eval_1440 = YPmet(FUNCODEREF(fun_eval_1440),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yeval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yeval) != YPfalse)
    ? CHKREF(Yeval)
    : YPfalse),fun_eval_1440)), (regsym(&Yeval,"eval"))));
  fun_str_eval_in_1441 = YPmet(FUNCODEREF(fun_str_eval_in_1441),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Ystr_eval_in = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ystr_eval_in) != YPfalse)
    ? CHKREF(Ystr_eval_in)
    : YPfalse),fun_str_eval_in_1441)), (regsym(&Ystr_eval_in,"str-eval-in"))));
  fun_str_eval_1442 = YPmet(FUNCODEREF(fun_str_eval_1442),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Ystr_eval = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ystr_eval) != YPfalse)
    ? CHKREF(Ystr_eval)
    : YPfalse),fun_str_eval_1442)), (regsym(&Ystr_eval,"str-eval"))));
  fun_loop_1443 = YPmet(FUNCODEREF(fun_loop_1443),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_1444 = YPmet(FUNCODEREF(fun_1444),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_read_file_1445 = YPmet(FUNCODEREF(fun_read_file_1445),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yread_file = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yread_file) != YPfalse)
    ? CHKREF(Yread_file)
    : YPfalse),fun_read_file_1445)), (regsym(&Yread_file,"read-file"))));
  fun_load_in_1446 = YPmet(FUNCODEREF(fun_load_in_1446),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLloc_envG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),ENVNUL); 
  (((Yload_in = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yload_in) != YPfalse)
    ? CHKREF(Yload_in)
    : YPfalse),fun_load_in_1446)), (regsym(&Yload_in,"load-in"))));
  fun_load_1447 = YPmet(FUNCODEREF(fun_load_1447),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yload = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yload) != YPfalse)
    ? CHKREF(Yload)
    : YPfalse),fun_load_1447)), (regsym(&Yload,"load"))));
  lit_715 = YPsb((P)"\\jrb\\ai\\proto\\src\\");
  (((YTbase_pathT = lit_715), (regsym(&YTbase_pathT,"*base-path*"))));
  lit_716 = YPsb((P)".proto");
  Yproto_filename = YPmet(FUNCODEREF(Yproto_filename),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yproto_filename = Yproto_filename), (regsym(&Yproto_filename,"proto-filename"))));
  lit_717 = YPsb((P)"..\\c\\");
  lit_718 = YPsb((P)".c");
  Yc_filename = YPmet(FUNCODEREF(Yc_filename),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yc_filename = Yc_filename), (regsym(&Yc_filename,"c-filename"))));
  fun_load_from_1450 = YPmet(FUNCODEREF(fun_load_from_1450),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  (((Yload_from = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yload_from) != YPfalse)
    ? CHKREF(Yload_from)
    : YPfalse),fun_load_from_1450)), (regsym(&Yload_from,"load-from"))));
  lit_719 = YPsb((P)"%=%s");
  fun_prompt_for_command_expression_1451 = YPmet(FUNCODEREF(fun_prompt_for_command_expression_1451),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  (((Yprompt_for_command_expression = CALL2(CHKREF(YPdefine_method),((BOUNDP(Yprompt_for_command_expression) != YPfalse)
    ? CHKREF(Yprompt_for_command_expression)
    : YPfalse),fun_prompt_for_command_expression_1451)), (regsym(&Yprompt_for_command_expression,"prompt-for-command-expression"))));
  lit_720 = YPint((P)0);
  lit_721 = YPsb((P)"FRAME %=");
  lit_722 = YPsb((P)" FUN %=");
  lit_723 = YPsb((P)"  %= %=\n");
  lit_724 = YPint((P)1);
  lit_725 = YPint((P)0);
  lit_726 = YPint((P)1);
  lit_727 = YPint((P)1);
  fun_inner_1452 = YPmet(FUNCODEREF(fun_inner_1452),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_loop_1453 = YPmet(FUNCODEREF(fun_loop_1453),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_backtrace_1454 = YPmet(FUNCODEREF(fun_backtrace_1454),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Ybacktrace = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ybacktrace) != YPfalse)
    ? CHKREF(Ybacktrace)
    : YPfalse),fun_backtrace_1454)), (regsym(&Ybacktrace,"backtrace"))));
  (((YLkeyboard_interruptG = CALL3(CHKREF(YPisa),(P)YPpair((P)CHKREF(YLconditionG),(P)Ynil),Ynil,Ynil)), (regsym(&YLkeyboard_interruptG,"<keyboard-interrupt>"))));
  Ykeyboard_interrupt = YPmet(FUNCODEREF(Ykeyboard_interrupt),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Ykeyboard_interrupt = Ykeyboard_interrupt), (regsym(&Ykeyboard_interrupt,"keyboard-interrupt"))));
  lit_728 = YPsb((P)"BREAK");
  lit_729 = YPsb((P)"ERROR: ");
  lit_730 = YPint((P)1);
  lit_731 = YPsb((P)"<= ");
  lit_732 = YPpair(YPPsym((P)"quit"), Ynil);
  lit_733 = YPpair(YPPsym((P)"up"), Ynil);
  lit_734 = YPsb((P)"%==> ");
  fun_1456 = YPmet(FUNCODEREF(fun_1456),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),ENVNUL); 
  fun_1457 = YPmet(FUNCODEREF(fun_1457),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_1458 = YPmet(FUNCODEREF(fun_1458),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_loop_1459 = YPmet(FUNCODEREF(fun_loop_1459),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  fun_1460 = YPmet(FUNCODEREF(fun_1460),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_top_in_1461 = YPmet(FUNCODEREF(fun_top_in_1461),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),ENVNUL); 
  (((Ytop_in = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ytop_in) != YPfalse)
    ? CHKREF(Ytop_in)
    : YPfalse),fun_top_in_1461)), (regsym(&Ytop_in,"top-in"))));
  lit_735 = YPint((P)0);
  fun_1462 = YPmet(FUNCODEREF(fun_1462),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),ENVNUL); 
  fun_top_1463 = YPmet(FUNCODEREF(fun_top_1463),Ynil,YPfalse,YPint((P)0),ENVNUL); 
  (((Ytop = CALL2(CHKREF(YPdefine_method),((BOUNDP(Ytop) != YPfalse)
    ? CHKREF(Ytop)
    : YPfalse),fun_top_1463)), (regsym(&Ytop,"top"))));
  lit_736 = YPsb((P)"0.74");
  (((YTproto_versionT = lit_736), (regsym(&YTproto_versionT,"*proto-version*"))));
  lit_737 = YPsb((P)"MAR 09, 2001");
  (((YTproto_dateT = lit_737), (regsym(&YTproto_dateT,"*proto-date*"))));
  lit_738 = YPsb((P)";;; \n");
  (CALL2(CHKREF(Yformat),CHKREF(Yout),lit_738));
  lit_739 = YPsb((P)";;; PROTO\n");
  (CALL2(CHKREF(Yformat),CHKREF(Yout),lit_739));
  lit_740 = YPsb((P)";;; JONATHAN BACHRACH\n");
  (CALL2(CHKREF(Yformat),CHKREF(Yout),lit_740));
  lit_741 = YPsb((P)";;; MIT AI Lab\n");
  (CALL2(CHKREF(Yformat),CHKREF(Yout),lit_741));
  lit_742 = YPsb((P)";;; %s\n");
  (CALL3(CHKREF(Yformat),CHKREF(Yout),lit_742,CHKREF(YTproto_dateT)));
  lit_743 = YPsb((P)";;; \n");
  (CALL2(CHKREF(Yformat),CHKREF(Yout),lit_743));
  lit_744 = YPsb((P)";;; VERSION = %s\n");
  (CALL3(CHKREF(Yformat),CHKREF(Yout),lit_744,CHKREF(YTproto_versionT)));
  lit_745 = YPsb((P)";;; ROOT    = %s\n");
  (CALL3(CHKREF(Yformat),CHKREF(Yout),lit_745,CHKREF(YTproto_rootT)));
  lit_746 = YPsb((P)";;; \n");
  (CALL2(CHKREF(Yformat),CHKREF(Yout),lit_746));
  lit_747 = YPsb((P)";;; Loading Runtime Bindings...\n");
  (CALL2(CHKREF(Yformat),CHKREF(Yout),lit_747));
  (CALL0(CHKREF(Yinit_ast)));
  (CALL0(CHKREF(Yinit_ast_eval)));
  lit_748 = YPsb((P)";;; Loading Macros...\n");
  (CALL2(CHKREF(Yformat),CHKREF(Yout),lit_748));
  lit_749 = YPsb((P)"macros.proto");
  (CALL1(CHKREF(Yload),CALL1(CHKREF(Ysrc_filename),lit_749)));
  lit_750 = YPsb((P)";;; \n");
  (CALL2(CHKREF(Yformat),CHKREF(Yout),lit_750));
  res = (CALL0(CHKREF(Ytop)));
return res;
}


/* EXPRESSION: */
int main(int argc, char* argv[]) {
  YPinit_world(argc, argv);
  (((P)Y___main___()));
  return(0);
}

/* END OF GENERATED CODE. */
