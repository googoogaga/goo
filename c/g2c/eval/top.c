/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: top */

EXT(YastYbinding_kind,"ast","binding-kind");
EXT(YruntimeYreduceA,"runtime","reduce+");
DEF(YtopYload,"top","load");
EXT(YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
EXT(YastYmodule_target_environment,"ast","module-target-environment");
EXT(YwriteYwriteln,"write","writeln");
EXT(YmacrosYmap,"macros","map");
EXT(Ynul,"boot","nul");
EXT(YsyntaxYsexpr_slot_object,"syntax","sexpr-slot-object");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YastYLast_genericG,"ast","<ast-generic>");
EXT(YprotoSsystemYcomponents_basename,"proto/system","components-basename");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(Yast_linearizeYclosure_creation_index,"ast-linearize","closure-creation-index");
EXT(Ysig_value,"boot","sig-value");
EXT(YruntimeYin,"runtime","in");
EXT(Yclass_name,"boot","class-name");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YastYLfree_environmentG,"ast","<free-environment>");
EXT(YruntimeYalways,"runtime","always");
EXT(YprotoSsystemYos_name,"proto/system","os-name");
EXT(YprotoSsystemYTc_extensionT,"proto/system","*c-extension*");
EXT(YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(Yast_linearizeYprogram_quotations,"ast-linearize","program-quotations");
EXT(YastYLassignmentG,"ast","<assignment>");
EXT(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YLintG,"boot","<int>");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YastYfunction_source_setter,"ast","function-source-setter");
EXT(YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
EXT(YastYglobal_box_value_setter,"ast","global-box-value-setter");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YastYfunction_data_refs_setter,"ast","function-data-refs-setter");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YastYLlocal_referenceG,"ast","<local-reference>");
EXT(YruntimeYread_char,"runtime","read-char");
DEF(YtopYprompt_for_command_expression,"top","prompt-for-command-expression");
DEF(YtopYstr_parse_in,"top","str-parse-in");
EXT(YastYLdefinitionG,"ast","<definition>");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(Yfun_value,"boot","fun-value");
EXT(YastYload_in,"ast","load-in");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YastYalternative_condition,"ast","alternative-condition");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YastYfunction_signature_setter,"ast","function-signature-setter");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YastYfunction_temporaries,"ast","function-temporaries");
EXT(YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
EXT(YastYsignature_value,"ast","signature-value");
EXT(YsyntaxYsexpr_make_getter,"syntax","sexpr-make-getter");
EXT(YLchrG,"boot","<chr>");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YastYmodule_name_to_relpath,"ast","module-name-to-relpath");
EXT(YastYsignature_names_setter,"ast","signature-names-setter");
EXT(YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
EXT(YastYfunction_debug_name,"ast","function-debug-name");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
EXT(YprotoSsystemYadd_build_path,"proto/system","add-build-path");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YastYlocals_functions,"ast","locals-functions");
EXT(Ysig_names,"boot","sig-names");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(Yast_linearizeYextract_thingsX,"ast-linearize","extract-things!");
EXT(YprotoSsystemYproto_filename,"proto/system","proto-filename");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YruntimeYroundS,"runtime","round/");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YsyntaxYsexpr_slot_variable,"syntax","sexpr-slot-variable");
EXT(YDmin_int,"boot","$min-int");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(Yast_linearizeYTregister_passiveQT,"ast-linearize","*register-passive?*");
EXT(YsyntaxYeval,"syntax","eval");
EXT(YsyntaxYDsexpr_define_class_tag,"syntax","$sexpr-define-class-tag");
EXT(YLlogG,"boot","<log>");
EXT(YastYlocals_body,"ast","locals-body");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
EXT(YastYas_lst,"ast","as-lst");
EXT(YruntimeYash,"runtime","ash");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YmacrosYpair,"macros","pair");
EXT(YprotoSsystemYTobj_extensionT,"proto/system","*obj-extension*");
EXT(YprotoSsystemYadd_tmp_path,"proto/system","add-tmp-path");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
EXT(YastYLmoduleG,"ast","<module>");
EXT(YastYfunction_value,"ast","function-value");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(Ynot,"boot","not");
EXT(YprotoSsystemYcomponents_to_pathname,"proto/system","components-to-pathname");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YruntimeY_,"runtime","-");
EXT(YprotoSsystemYfile_mtime,"proto/system","file-mtime");
EXT(YastYapplication_binding,"ast","application-binding");
EXT(YprotoSsystemYadd_src_path,"proto/system","add-src-path");
EXT(Yfun_name,"boot","fun-name");
EXT(YruntimeYabs,"runtime","abs");
EXT(Yclass_parents,"boot","class-parents");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYmax,"runtime","max");
EXT(YastYapplication_tailQ,"ast","application-tail?");
EXT(YLanyG,"boot","<any>");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
EXT(YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
EXT(YastYLast_functionG,"ast","<ast-function>");
EXT(YruntimeYT,"runtime","*");
EXT(YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(Yast_linearizeYcollect_registersX,"ast-linearize","collect-registers!");
DEF(YtopYbacktrace,"top","backtrace");
EXT(YsyntaxYsexpr_slot_init,"syntax","sexpr-slot-init");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Ytype_class,"boot","type-class");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YwriteYwrite,"write","write");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YsyntaxYsexpr_make_setter,"syntax","sexpr-make-setter");
EXT(YLunionG,"boot","<union>");
EXT(YastYconstant_index_setter,"ast","constant-index-setter");
EXT(Yast_linearizeYinsert_boxX,"ast-linearize","insert-box!");
EXT(Ylst,"boot","lst");
EXT(YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
DEF(YtopYread_file,"top","read-file");
EXT(Yast_linearizeYcollect_temporariesX,"ast-linearize","collect-temporaries!");
EXT(Yslot_value,"boot","slot-value");
EXT(YDmax_int,"boot","$max-int");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YmacrosYcat,"macros","cat");
EXT(YsyntaxYsexpr_make_setter_name,"syntax","sexpr-make-setter-name");
EXT(YastYbinding_global_box,"ast","binding-global-box");
DEF(YtopYstr_parse,"top","str-parse");
EXT(YastYconstant_index,"ast","constant-index");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(YastYassignment_form_setter,"ast","assignment-form-setter");
EXT(Yast_linearizeYform_program,"ast-linearize","form-program");
DEF(YtopYeval_in,"top","eval-in");
EXT(YastYsignature_naryQ_setter,"ast","signature-nary?-setter");
EXT(YprotoSsystemYprobe_directory,"proto/system","probe-directory");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YastYbinding_value,"ast","binding-value");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(Yast_linearizeYbox_form,"ast-linearize","box-form");
EXT(YsyntaxYsexpr_isa_parent,"syntax","sexpr-isa-parent");
EXT(YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YruntimeYpick,"runtime","pick");
EXT(YastYmonitor_handler,"ast","monitor-handler");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YprotoSsystemYcomponents_last,"proto/system","components-last");
EXT(YruntimeYlast,"runtime","last");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YruntimeYlow_elt,"runtime","low-elt");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
DEF(YtopYp2c_eval,"top","p2c-eval");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YastYLmodule_bindingG,"ast","<module-binding>");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YsyntaxYsexpr_operator,"syntax","sexpr-operator");
EXT(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
EXT(YruntimeYLE,"runtime","<=");
DEF(YtopYparse,"top","parse");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YastYLargumentsG,"ast","<arguments>");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YastYsignature_bindings_setter,"ast","signature-bindings-setter");
EXT(YastYLast_signatureG,"ast","<ast-signature>");
EXT(YruntimeYformat,"runtime","format");
EXT(YprotoSsystemYTexe_extensionT,"proto/system","*exe-extension*");
EXT(YruntimeYall2Q,"runtime","all2?");
EXT(YastYfunction_signature,"ast","function-signature");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YastYmodule_syntax_environment,"ast","module-syntax-environment");
EXT(YruntimeYlow_elt_setter,"runtime","low-elt-setter");
EXT(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
EXT(YastYruntime_environment,"ast","runtime-environment");
EXT(YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
EXT(YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
EXT(Yunexec,"boot","unexec");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
EXT(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YwriteYdisplay,"write","display");
EXT(YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
EXT(YastYassignment_binding,"ast","assignment-binding");
EXT(YprotoSsystemYTpath_separatorT,"proto/system","*path-separator*");
EXT(YPsnul,"boot","%snul");
DEF(YtopYtop,"top","top");
EXT(Yerror,"boot","error");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YsyntaxYsexpr_isa_slot_inits,"syntax","sexpr-isa-slot-inits");
EXT(YruntimeYrev,"runtime","rev");
EXT(YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
EXT(Yast_linearizeYLbox_writeG,"ast-linearize","<box-write>");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
EXT(YastYfunction_self_recursiveQ_setter,"ast","function-self-recursive?-setter");
DEF(YtopYauto_run,"top","auto-run");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YwriteYTmax_print_depthT,"write","*max-print-depth*");
EXT(YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YastYprogram_type_setter,"ast","program-type-setter");
EXT(YastYfunction_temporaries_setter,"ast","function-temporaries-setter");
EXT(YruntimeYG,"runtime",">");
EXT(YastYdo_named_static_global_bindings,"ast","do-named-static-global-bindings");
EXT(YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
EXT(YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
EXT(YruntimeYNE,"runtime","~=");
EXT(YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
EXT(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
EXT(YPvnul,"boot","%vnul");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YastYbinding_name,"ast","binding-name");
EXT(YruntimeYsig,"runtime","sig");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
EXT(Yast_linearizeYprogram_definitions,"ast-linearize","program-definitions");
EXT(YprotoSsystemYexe_filename,"proto/system","exe-filename");
EXT(YastYfunction_registers_setter,"ast","function-registers-setter");
EXT(YastYfunction_source,"ast","function-source");
DEF(YtopYstr_eval,"top","str-eval");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YsyntaxYsexpr_define_classQ,"syntax","sexpr-define-class?");
EXT(YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
EXT(YsyntaxYsexpr_operands,"syntax","sexpr-operands");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
EXT(YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
EXT(YastYsignature_arity_setter,"ast","signature-arity-setter");
EXT(YastYmodule_binding,"ast","module-binding");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YsyntaxYsexpr_isa_init_slots,"syntax","sexpr-isa-init-slots");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(Yast_linearizeYLbox_creationG,"ast-linearize","<box-creation>");
EXT(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YruntimeYL,"runtime","<");
EXT(YruntimeYpop,"runtime","pop");
EXT(YastYlocals_bindings,"ast","locals-bindings");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YPdefine_method,"boot","%define-method");
EXT(YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
EXT(YastYfunction_self_recursiveQ,"ast","function-self-recursive?");
EXT(YastYLglobal_boxG,"ast","<global-box>");
DEF(YtopYdo_stack_frames,"top","do-stack-frames");
EXT(YsyntaxYsexpr_monitor_expand,"syntax","sexpr-monitor-expand");
EXT(YruntimeYdefault,"runtime","default");
EXT(YastYfind_binding,"ast","find-binding");
EXT(YLoptsG,"boot","<opts>");
DEF(YtopYstr_eval_in,"top","str-eval-in");
EXT(YruntimeYkeys,"runtime","keys");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
EXT(YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
EXT(YruntimeYlen,"runtime","len");
EXT(YastYfunction_index_setter,"ast","function-index-setter");
EXT(YmacrosYnapply,"macros","napply");
EXT(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
EXT(YruntimeYE,"runtime","=");
EXT(YastYprogram_type,"ast","program-type");
EXT(YmacrosYtup,"macros","tup");
EXT(YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
EXT(YprotoSsystemYparent_directory,"proto/system","parent-directory");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(YprotoSsystemYhierarchical_components,"proto/system","hierarchical-components");
EXT(YastYLreferenceG,"ast","<reference>");
DEF(YtopYrun,"top","run");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
EXT(Yast_linearizeYanalyze_dynamic_extent,"ast-linearize","analyze-dynamic-extent");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
EXT(YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYany2Q,"runtime","any2?");
EXT(Ytype_object,"boot","type-object");
EXT(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
EXT(YastYfunction_registers,"ast","function-registers");
EXT(YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
EXT(Yast_linearizeYLtop_level_formG,"ast-linearize","<top-level-form>");
EXT(YLclassG,"boot","<class>");
EXT(YruntimeYas,"runtime","as");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(YastYbinding_inferred_type_setter,"ast","binding-inferred-type-setter");
EXT(YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
EXT(Yast_linearizeYform_definitions,"ast-linearize","form-definitions");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(YastYLbotG,"ast","<bot>");
EXT(YastYprobe_module,"ast","probe-module");
EXT(YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
EXT(YastYbinding_dottedQ,"ast","binding-dotted?");
EXT(YastYLsequentialG,"ast","<sequential>");
EXT(YastYLreal_referenceG,"ast","<real-reference>");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YastYapplication_knownQ,"ast","application-known?");
EXT(YastYfunction_index,"ast","function-index");
DEF(YtopYtop_in,"top","top-in");
EXT(YastYapplication_knownQ_setter,"ast","application-known?-setter");
EXT(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
EXT(YastYbinding_index_setter,"ast","binding-index-setter");
EXT(YruntimeYassq,"runtime","assq");
EXT(YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
EXT(YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
EXT(YastYbinding_native_toQ,"ast","binding-native-to?");
EXT(YLtypeG,"boot","<type>");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YastYapplication_function,"ast","application-function");
EXT(YruntimeYpush,"runtime","push");
EXT(YastYset_module_environments,"ast","set-module-environments");
EXT(YastYmodule_name,"ast","module-name");
EXT(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(YastYbinding_inferred_type,"ast","binding-inferred-type");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YastYLregular_applicationG,"ast","<regular-application>");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YruntimeYfill,"runtime","fill");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YastYbinding_mutableQ,"ast","binding-mutable?");
EXT(YruntimeYout,"runtime","out");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(YastYassignment_form,"ast","assignment-form");
EXT(YruntimeYfrom,"runtime","from");
EXT(YastYapplication_arguments,"ast","application-arguments");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLgenG,"boot","<gen>");
EXT(YastYenv_object_name,"ast","env-object-name");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(Yslot_init,"boot","slot-init");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YastYreference_frame_number,"ast","reference-frame-number");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YprotoSsystemYos_binding_value,"proto/system","os-binding-value");
EXT(YastYLlocalsG,"ast","<locals>");
EXT(YPsymbols,"boot","%symbols");
DEF(YtopYp2c_run,"top","p2c-run");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YastYsignature_bindings,"ast","signature-bindings");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(Yast_linearizeYclosure_creation_free,"ast-linearize","closure-creation-free");
EXT(Yobject_slots,"boot","object-slots");
EXT(Yast_linearizeYLfree_referenceG,"ast-linearize","<free-reference>");
EXT(YprotoSsystemYprocess_id,"proto/system","process-id");
EXT(YastYinit_ast,"ast","init-ast");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YastYsignature_names,"ast","signature-names");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YruntimeYalter,"runtime","alter");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YLsymG,"boot","<sym>");
EXT(Ysym_name,"boot","sym-name");
EXT(YastYbinding_info_setter,"ast","binding-info-setter");
EXT(YruntimeYGE,"runtime",">=");
EXT(YastYbinding_module_name,"ast","binding-module-name");
EXT(YmacrosYelt,"macros","elt");
EXT(Yfind_setter,"boot","find-setter");
EXT(Yast_linearizeYregister_allocateX,"ast-linearize","register-allocate!");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YastYprogram_register_setter,"ast","program-register-setter");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YastYLcomputed_programG,"ast","<computed-program>");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YprotoSsystemYTproto_extensionT,"proto/system","*proto-extension*");
EXT(YprotoSsystemYos_binding_value_setter,"proto/system","os-binding-value-setter");
EXT(YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YastYprogram_register,"ast","program-register");
EXT(YruntimeYnewline,"runtime","newline");
DEF(YtopYast_run,"top","ast-run");
EXT(YastYLast_methodG,"ast","<ast-method>");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YastYfunction_free,"ast","function-free");
EXT(YastYLmodule_binding_referenceG,"ast","<module-binding-reference>");
EXT(YprotoSsystemYTproto_rootT,"proto/system","*proto-root*");
EXT(YastYbinding_info,"ast","binding-info");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YruntimeYvec,"runtime","vec");
EXT(YprotoSsystemYlabel_components,"proto/system","label-components");
EXT(YastYreference_binding,"ast","reference-binding");
EXT(YLstrG,"boot","<str>");
EXT(YastYLbindingG,"ast","<binding>");
EXT(YastYcompile_time_program,"ast","compile-time-program");
EXT(YruntimeYstr,"runtime","str");
EXT(YastYfind_environment_module,"ast","find-environment-module");
EXT(Yast_linearizeYupdate_walkX,"ast-linearize","update-walk!");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
EXT(YastYfunction_body,"ast","function-body");
EXT(YastYLraw_constantG,"ast","<raw-constant>");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YastYbinding_index,"ast","binding-index");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeY1st,"runtime","1st");
EXT(YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
EXT(YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
EXT(YastYmonitor_test,"ast","monitor-test");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYpos,"runtime","pos");
EXT(YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(YastYfunction_body_setter,"ast","function-body-setter");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YastYLprogramsG,"ast","<programs>");
EXT(YruntimeYdo,"runtime","do");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YsyntaxYsexpr_define_class_parents,"syntax","sexpr-define-class-parents");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
EXT(YastYbinding_type,"ast","binding-type");
EXT(YastYLconstantG,"ast","<constant>");
EXT(YruntimeYround,"runtime","round");
EXT(YastYLfab_listG,"ast","<fab-list>");
EXT(YLvecG,"boot","<vec>");
EXT(YastYboundQ_reference,"ast","bound?-reference");
EXT(YastYenvironment_module,"ast","environment-module");
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(Yast_linearizeYunconstrained_typeQ,"ast-linearize","unconstrained-type?");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(Yfun_names,"boot","fun-names");
EXT(YLmetG,"boot","<met>");
EXT(YastYLruntime_assignmentG,"ast","<runtime-assignment>");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YprotoSsystemYcreate_directory,"proto/system","create-directory");
EXT(Yhead_setter,"boot","head-setter");
EXT(YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
EXT(YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
EXT(YastYLmonitorG,"ast","<monitor>");
EXT(YwriteYTmax_print_lengthT,"write","*max-print-length*");
EXT(YruntimeYfab,"runtime","fab");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
DEF(YtopYprint_result_expression,"top","print-result-expression");
EXT(YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
EXT(Yfind_getter,"boot","find-getter");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YprotoSsystemYcomponents_parent_directory,"proto/system","components-parent-directory");
EXT(YprotoSsystemYfile_existsQ,"proto/system","file-exists?");
EXT(Yast_linearizeYprogram_form,"ast-linearize","program-form");
EXT(YprotoSsystemYpathname_to_components,"proto/system","pathname-to-components");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YLflatG,"boot","<flat>");
EXT(YruntimeYlist,"runtime","list");
EXT(Yhead,"boot","head");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YsyntaxYDsexpr_slot_tag,"syntax","$sexpr-slot-tag");
EXT(Yast_linearizeYgather_temporariesX,"ast-linearize","gather-temporaries!");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YastYast_define_binding,"ast","ast-define-binding");
EXT(YprotoSsystemYc_filename,"proto/system","c-filename");
EXT(YprotoSsystemYobj_filename,"proto/system","obj-filename");
EXT(YastYLbind_exitG,"ast","<bind-exit>");
EXT(YastYsequentialize,"ast","sequentialize");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YastYast_evaluate,"ast","ast-evaluate");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
EXT(Yast_linearizeYLbox_readG,"ast-linearize","<box-read>");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
EXT(Yobject_class,"boot","object-class");
EXT(YastYload_module,"ast","load-module");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YastYLprogramG,"ast","<program>");
DEF(YtopYparse_in,"top","parse-in");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YastYLglobal_assignmentG,"ast","<global-assignment>");
EXT(YastYobjectify_signature,"ast","objectify-signature");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YastYLpassive_programG,"ast","<passive-program>");
EXT(YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(Yast_linearizeYflatten_seqs,"ast-linearize","flatten-seqs");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YLfunG,"boot","<fun>");
EXT(Yast_linearizeYanalyze_calls,"ast-linearize","analyze-calls");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YastYbinding_locative,"ast","binding-locative");
EXT(YruntimeYempty,"runtime","empty");
EXT(YastYLboundQG,"ast","<bound?>");
EXT(YreadYDchar_long_names,"read","$char-long-names");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YastYalternative_consequent,"ast","alternative-consequent");
EXT(YastYfree_environment,"ast","free-environment");
EXT(YLlstG,"boot","<lst>");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YruntimeYtL,"runtime","t<");
EXT(YastYmodule_exports,"ast","module-exports");
EXT(YastYsignature_value_setter,"ast","signature-value-setter");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YruntimeYnumericQ,"runtime","numeric?");
DEF(YtopYsave_image,"top","save-image");
EXT(YastYconstant_value,"ast","constant-value");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YLtupG,"boot","<tup>");
EXT(Ytype_error,"boot","type-error");
EXT(YruntimeYdo2,"runtime","do2");
EXT(YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YastYfix_let_body_setter,"ast","fix-let-body-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YastYfunction_bindings,"ast","function-bindings");
EXT(YastYLalternativeG,"ast","<alternative>");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YastYfree_implemented_foreign_bindings,"ast","free-implemented-foreign-bindings");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YwriteYrecurring_write,"write","recurring-write");
EXT(YastYfunction_naryQ,"ast","function-nary?");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YLseqG,"boot","<seq>");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YastYLapplicationG,"ast","<application>");
EXT(YastYfunction_binding,"ast","function-binding");
EXT(YruntimeYA,"runtime","+");
DEF(YtopYLkeyboard_interruptG,"top","<keyboard-interrupt>");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YastYreference_called_functionQ,"ast","reference-called-function?");
EXT(Ytail,"boot","tail");
EXT(YastYfunction_data_refs,"ast","function-data-refs");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YmacrosYEE,"macros","==");
EXT(YastYmonitor_info,"ast","monitor-info");
EXT(YastYfunction_debug_name_setter,"ast","function-debug-name-setter");
EXT(YastYfix_let_types_setter,"ast","fix-let-types-setter");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYmin,"runtime","min");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
EXT(YruntimeYS,"runtime","/");
EXT(Yast_linearizeYliftX,"ast-linearize","lift!");
EXT(YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
EXT(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(YastYinstall_initial_bindings,"ast","install-initial-bindings");
EXT(YruntimeYtE,"runtime","t=");
EXT(YruntimeYfab_map,"runtime","fab-map");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(Yclass_slots,"boot","class-slots");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(Yast_linearizeYform_quotations,"ast-linearize","form-quotations");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YLcolG,"boot","<col>");
EXT(YprotoSsystemYfile_type,"proto/system","file-type");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(Yfab_class,"boot","fab-class");
EXT(YastYLimmediate_constantG,"ast","<immediate-constant>");
EXT(Yast_linearizeYreference_offset,"ast-linearize","reference-offset");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YruntimeYdel,"runtime","del");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(Yast_linearizeYbox_reference,"ast-linearize","box-reference");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
EXT(YastYsignature_specs_setter,"ast","signature-specs-setter");
DEF(YtopYload_from,"top","load-from");
EXT(YastYLfix_letG,"ast","<fix-let>");
EXT(YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
EXT(Yast_linearizeYreference_selfQ,"ast-linearize","reference-self?");
EXT(YLsigG,"boot","<sig>");
EXT(YastYfab_p2c_module,"ast","fab-p2c-module");
EXT(YastYmonitor_type,"ast","monitor-type");
EXT(YastYbinding_dottedQ_setter,"ast","binding-dotted?-setter");
EXT(YastYfix_let_body,"ast","fix-let-body");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YastYfunction_free_setter,"ast","function-free-setter");
EXT(YastYsignature_arity,"ast","signature-arity");
EXT(YastYfix_let_arguments,"ast","fix-let-arguments");
EXT(Yast_linearizeYast_contains_funQ,"ast-linearize","ast-contains-fun?");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(Ynil,"boot","nil");
EXT(YLlocG,"boot","<loc>");
EXT(YPPmacro,"boot","%%macro");
EXT(YastYobjectify_quotation,"ast","objectify-quotation");
EXT(YastYLmodule_loaderG,"ast","<module-loader>");
EXT(YruntimeYtA,"runtime","t+");
EXT(YastYenvironment_uses_modules,"ast","environment-uses-modules");
EXT(YruntimeYsub,"runtime","sub");
EXT(Yast_linearizeYclosurize_mainX,"ast-linearize","closurize-main!");
EXT(YruntimeYelt_or,"runtime","elt-or");
EXT(Yast_linearizeYLrenamed_local_bindingG,"ast-linearize","<renamed-local-binding>");
EXT(YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
EXT(Yast_linearizeYLclosure_creationG,"ast-linearize","<closure-creation>");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(Ytype_elts,"boot","type-elts");
EXT(YastYobjectify,"ast","objectify");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YastYfix_let_types,"ast","fix-let-types");
EXT(YruntimeYneg,"runtime","neg");
EXT(YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
EXT(YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YPisa,"boot","%isa");
EXT(YastYLcompile_timeG,"ast","<compile-time>");
DEF(YtopYdo_restart,"top","do-restart");
EXT(YastYassignment_reference,"ast","assignment-reference");
EXT(YLfloG,"boot","<flo>");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYfind_key,"runtime","find-key");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_16);
DEFLIT(lit_66);
DEFLIT(lit_28);
DEFLIT(lit_70);
DEFLIT(lit_35);
DEFLIT(lit_36);
DEFLIT(lit_71);
DEFLIT(lit_30);
DEFLIT(lit_14);
DEFLIT(lit_45);
DEFLIT(lit_47);
DEFLIT(lit_53);
DEFLIT(lit_52);
DEFLIT(lit_44);
DEFLIT(lit_76);
DEFLIT(lit_77);
DEFLIT(lit_79);
DEFLIT(lit_39);
DEFLIT(lit_27);
DEFLIT(lit_54);
DEFLIT(lit_25);
DEFLIT(lit_32);
DEFLIT(lit_78);
DEFLIT(lit_0);
DEFLIT(lit_10);
DEFLIT(lit_3);
DEFLIT(lit_17);
DEFLIT(lit_43);
DEFLIT(lit_50);
DEFLIT(lit_72);
DEFLIT(lit_57);
DEFLIT(lit_13);
DEFLIT(lit_23);
DEFLIT(lit_18);
DEFLIT(lit_7);
DEFLIT(lit_29);
DEFLIT(lit_20);
DEFLIT(lit_22);
DEFLIT(lit_73);
DEFLIT(lit_12);
DEFLIT(lit_60);
DEFLIT(lit_51);
DEFLIT(lit_15);
DEFLIT(lit_55);
DEFLIT(lit_26);
DEFLIT(lit_46);
DEFLIT(lit_49);
DEFLIT(lit_9);
DEFLIT(lit_1);
DEFLIT(lit_56);
DEFLIT(lit_38);
DEFLIT(lit_33);
DEFLIT(lit_68);
DEFLIT(lit_42);
DEFLIT(lit_2);
DEFLIT(lit_75);
DEFLIT(lit_41);
DEFLIT(lit_62);
DEFLIT(lit_58);
DEFLIT(lit_31);
DEFLIT(lit_11);
DEFLIT(lit_37);
DEFLIT(lit_21);
DEFLIT(lit_40);
DEFLIT(lit_34);
DEFLIT(lit_80);
DEFLIT(lit_67);
DEFLIT(lit_5);
DEFLIT(lit_6);
DEFLIT(lit_24);
DEFLIT(lit_69);
DEFLIT(lit_8);
DEFLIT(lit_48);
DEFLIT(lit_81);
DEFLIT(lit_64);
DEFLIT(lit_74);
DEFLIT(lit_61);
DEFLIT(lit_63);
DEFLIT(lit_4);
DEFLIT(lit_19);
DEFLIT(lit_65);
DEFLIT(lit_59);

/* FUNCTIONS: */

LOCFOR(fun_parse_in_0);
LOCFOR(fun_parse_1);
LOCFOR(fun_str_parse_in_2);
LOCFOR(fun_str_parse_3);
FUNFOR(YtopYast_run);
FUNFOR(YtopYp2c_run);
FUNFOR(YtopYauto_run);
LOCFOR(fun_eval_in_7);
LOCFOR(fun_eval_8);
LOCFOR(fun_str_eval_in_9);
LOCFOR(fun_str_eval_10);
LOCFOR(fun_loop_11);
LOCFOR(fun_12);
LOCFOR(fun_read_file_13);
LOCFOR(fun_load_in_14);
LOCFOR(fun_load_15);
LOCFOR(fun_load_from_16);
LOCFOR(fun_prompt_for_command_expression_17);
LOCFOR(fun_print_result_expression_18);
LOCFOR(fun_do_stack_frames_19);
LOCFOR(fun_20);
LOCFOR(fun_backtrace_21);
FUNFOR(Ykeyboard_interrupt);
FUNFOR(YtopYdo_restart);
LOCFOR(fun_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_x_1315_28);
LOCFOR(fun_29);
LOCFOR(fun_x_1317_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_loop_35);
LOCFOR(fun_36);
LOCFOR(fun_top_in_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_40);
LOCFOR(fun_loop_41);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_top_44);
LOCFOR(fun_45);
FUNFOR(YtopYsave_image);
extern P YtopY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_parse_in_0) {
  P s_,ct_env_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(YreadYread_from_string),s_);
  T0 = CALL3(1,VARREF(YastYobjectify),T1,ct_env_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_parse_1) {
  P s_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YtopYparse_in),s_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_parse_in_2) {
  P s_,ct_env_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL2(1,VARREF(YtopYparse_in),s_,ct_env_);
  T0 = CALL3(1,VARREF(YruntimeYformat),VARREF(YruntimeYout),LITREF(lit_8),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_parse_3) {
  P s_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YtopYstr_parse_in),s_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YtopYast_run) {
  P ast_,ct_env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
loop:
  T0 = CALL1(1,VARREF(YastYast_evaluate),ast_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YtopYp2c_run) {
  P ast_,ct_env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
loop:
  T0 = CALL2(1,VARREF(YtopYp2c_eval),ast_,ct_env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YtopYauto_run) {
  P ast_,ct_env_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(Yast_linearizeYast_contains_funQ),ast_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YtopYp2c_run),ast_,ct_env_);
    T0 = T2;
  } else {
    T3 = CALL2(1,VARREF(YtopYast_run),ast_,ct_env_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_in_7) {
  P x_,ct_env_;
  P eF1633;
  P oF1632;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YastYobjectify),x_,ct_env_,YPfalse);
  oF1632 = T1;
  T3 = CALL1(1,VARREF(YastYast_evaluate),oF1632);
  eF1633 = T3;
  T2 = eF1633;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_8) {
  P x_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YtopYeval_in),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_eval_in_9) {
  P x_,ct_env_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T2 = CALL1(1,VARREF(YreadYread_from_string),x_);
  T1 = CALL2(1,VARREF(YtopYeval_in),T2,ct_env_);
  T0 = CALL1(1,VARREF(YwriteYwrite_to_string),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_eval_10) {
  P x_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YtopYstr_eval_in),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_11) {
  P forms_;
  P xF1634;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(forms_, 0);
loop:
  T1 = CALL1(1,VARREF(YruntimeYread),FREEREF(0));
  xF1634 = T1;
  T3 = CALL1(1,VARREF(YruntimeYeof_objectQ),xF1634);
  if (T3 != YPfalse) {
    T5 = CALL1(1,VARREF(YruntimeYrevX),forms_);
    T4 = CALL1(1,VARREF(YsyntaxYsexpr_sequence_Gbegin),T5);
    T2 = T4;
  } else {
    T7 = CALL2(1,VARREF(YmacrosYpair),xF1634,forms_);
    a1 = T7;
    forms_ = a1;
    goto loop;
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_12) {
  P port_;
  P loopF1635;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_11,2);
  loopF1635 = T1;
  FUNINIT(loopF1635, 2,port_,loopF1635);
  T2 = CALL1(0,loopF1635,Ynil);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_read_file_13) {
  P filename_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = fun_12;
  T0 = CALL2(1,VARREF(YruntimeYcall_with_input_file),filename_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_in_14) {
  P filename_,ct_env_;
  P oF1637;
  P xF1636;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(YtopYread_file),filename_);
  xF1636 = T1;
  T3 = CALL3(1,VARREF(YastYobjectify),xF1636,ct_env_,YPfalse);
  oF1637 = T3;
  T4 = CALL2(1,VARREF(YtopYast_run),oF1637,ct_env_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_15) {
  P filename_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YastYload_in),filename_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_from_16) {
  P name_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(YprotoSsystemYproto_filename),name_);
  T0 = CALL2(1,VARREF(YtopYload),T1,modname_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_prompt_for_command_expression_17) {
  P env_,level_,prompt_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(prompt_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYfind_environment_module),env_);
  T0 = CALL1(1,VARREF(YastYmodule_name),T1);
  CALLN(1,VARREF(YruntimeYformat),5,VARREF(YruntimeYout),LITREF(lit_32),T0,level_,prompt_);
  CALL1(1,VARREF(YruntimeYforce_output),VARREF(YruntimeYout));
  T2 = CALL1(1,VARREF(YruntimeYread),VARREF(YruntimeYin));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_print_result_expression_18) {
  P env_,level_,label_,result_;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(label_, 2);
  ARG(result_, 3);
loop:
  T1 = CALL1(1,VARREF(YastYfind_environment_module),env_);
  T0 = CALL1(1,VARREF(YastYmodule_name),T1);
  CALLN(1,VARREF(YruntimeYformat),5,VARREF(YruntimeYout),LITREF(lit_36),T0,level_,label_);
  T2 = CALL2(1,VARREF(YwriteYwrite),VARREF(YruntimeYout),result_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_do_stack_frames_19) {
  P fun_;
  P T0;
  P a1;
LINK_STACK();
  ARG(fun_, 0);
loop:
  T0 = (P)YPdo_stack_frames(fun_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  P f_,args_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(args_, 1);
loop:
  T0 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(YruntimeYrev),args_);
  CALLN(1,VARREF(YruntimeYformat),5,VARREF(YruntimeYout),LITREF(lit_42),T0,f_,T1);
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL2(1,VARREF(YruntimeYA),T4,YPint((P)1));
  T2 = BOXVAL(FREEREF(0)) = T3;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_backtrace_21) {
  P numF1638;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  numF1638 = YPint((P)0);
  numF1638 = BOXFAB(numF1638);
  T3 = FUNFAB(fun_20,1,numF1638);
  T2 = CALL1(1,VARREF(YtopYdo_stack_frames),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ykeyboard_interrupt) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YruntimeYsig),VARREF(YtopYLkeyboard_interruptG));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YtopYdo_restart) {
  P restarts_,n_;
  P tmpF1639;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(restarts_, 0);
  ARG(n_, 1);
loop:
  T0 = CALL1(1,VARREF(Ynot),restarts_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_48));
  } else {
  }
  T4 = CALL2(1,VARREF(YruntimeYG),n_,YPint((P)0));
  tmpF1639 = T4;
  if (tmpF1639 != YPfalse) {
    T7 = CALL1(1,VARREF(YruntimeYlen),restarts_);
    T6 = CALL2(1,VARREF(YruntimeYLE),n_,T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T8 = CALL1(1,VARREF(Yerror),LITREF(lit_49));
  } else {
  }
  T11 = CALL2(1,VARREF(YruntimeY_),n_,YPint((P)1));
  T10 = CALL2(1,VARREF(YmacrosYelt),restarts_,T11);
  T9 = CALL3(1,VARREF(YruntimeYinvoke_handler_interactively),T10,VARREF(YruntimeYin),VARREF(YruntimeYout));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_24) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_25) {
  P c_,r_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL2(1,VARREF(YisaQ),c_,VARREF(YtopYLkeyboard_interruptG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YruntimeYformat),VARREF(YruntimeYout),LITREF(lit_58));
  } else {
    T3 = CALL1(1,VARREF(YruntimeYdescribe_condition),c_);
    T2 = CALL3(1,VARREF(YruntimeYformat),VARREF(YruntimeYout),LITREF(lit_59),T3);
  }
  T4 = CALL2(1,VARREF(YruntimeYA),FREEREF(0),YPint((P)1));
  T5 = BOXVAL(FREEREF(3));
  CALLN(1,VARREF(YtopYtop_in),5,T4,FREEREF(1),FREEREF(2),YPtrue,T5);
  T6 = CALL1(1,FREEREF(4),YPfalse);
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_26) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_27) {
  P c_,r_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1315_28) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  P return_;
  P x_1314F1644;
  P x_1314F1643;
  P nF1642;
  P x_1314F1641;
  P x_1315F1640;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1315_28,1);
  x_1315F1640 = T1;
  FUNINIT(x_1315F1640, 1,return_);
  x_1314F1641 = FREEREF(0);
  nF1642 = YPfalse;
  nF1642 = BOXFAB(nF1642);
  T5 = CALL2(1,VARREF(YisaQ),x_1314F1641,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1314F1641,LITREF(lit_70),x_1315F1640);
    x_1314F1643 = T7;
    T9 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1314F1643,x_1315F1640);
    BOXVAL(nF1642) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1314F1643);
    x_1314F1644 = T10;
    T11 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1314F1644,x_1315F1640);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1315F1640,LITREF(lit_71),x_1314F1641);
  }
  T3 = YPtrue;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1317_30) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_31) {
  P return_;
  P x_1316F1649;
  P x_1316F1648;
  P mF1647;
  P x_1316F1646;
  P x_1317F1645;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1317_30,1);
  x_1317F1645 = T1;
  FUNINIT(x_1317F1645, 1,return_);
  x_1316F1646 = FREEREF(0);
  mF1647 = YPfalse;
  mF1647 = BOXFAB(mF1647);
  T5 = CALL2(1,VARREF(YisaQ),x_1316F1646,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1316F1646,LITREF(lit_73),x_1317F1645);
    x_1316F1648 = T7;
    T9 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1316F1648,x_1317F1645);
    BOXVAL(mF1647) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1316F1648);
    x_1316F1649 = T10;
    T11 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1316F1649,x_1317F1645);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1317F1645,LITREF(lit_71),x_1316F1646);
  }
  T3 = YPtrue;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P astF1653;
  P new_envF1652;
  P tmpF1651;
  P formF1650;
  P T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36;
  P T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  CALL1(1,VARREF(YruntimeYnewline),VARREF(YruntimeYout));
  T0 = BOXVAL(FREEREF(0));
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YruntimeYformat),VARREF(YruntimeYout),LITREF(lit_61));
    T1 = CALL2(1,VARREF(YruntimeYlist_handlers),VARREF(YruntimeYLrestartG),VARREF(YruntimeYout));
    BOXVAL(FREEREF(1)) = T1;
    T2 = BOXVAL(FREEREF(0)) = YPfalse;
  } else {
  }
  T5 = BOXVAL(FREEREF(2));
  T4 = CALL3(1,VARREF(YtopYprompt_for_command_expression),T5,FREEREF(3),LITREF(lit_62));
  formF1650 = T4;
  T8 = CALL2(1,VARREF(YruntimeYE),formF1650,LITREF(lit_63));
  tmpF1651 = T8;
  if (tmpF1651 != YPfalse) {
    T9 = tmpF1651;
  } else {
    T11 = CALL0(1,VARREF(YruntimeYeof_object));
    T10 = CALL2(1,VARREF(YruntimeYE),formF1650,T11);
    T9 = T10;
  }
  T7 = T9;
  if (T7 != YPfalse) {
    T12 = CALL1(1,FREEREF(4),YPfalse);
    T6 = T12;
  } else {
    T14 = CALL2(1,VARREF(YruntimeYE),formF1650,LITREF(lit_64));
    if (T14 != YPfalse) {
      T15 = CALL1(1,FREEREF(5),YPfalse);
      T13 = T15;
    } else {
      T17 = CALL2(1,VARREF(YruntimeYE),formF1650,LITREF(lit_65));
      if (T17 != YPfalse) {
        T18 = CALL2(1,VARREF(YruntimeYlist_handlers),VARREF(YruntimeYLconditionG),VARREF(YruntimeYout));
        T16 = T18;
      } else {
        T20 = CALL2(1,VARREF(YruntimeYE),formF1650,LITREF(lit_66));
        if (T20 != YPfalse) {
          T21 = CALL2(1,VARREF(YruntimeYlist_handlers),VARREF(YruntimeYLrestartG),VARREF(YruntimeYout));
          T19 = T21;
        } else {
          T24 = FUNFAB(fun_29,1,formF1650);
          T23 = with_exit(T24);
          if (T23 != YPfalse) {
            T26 = BOXVAL(FREEREF(1));
            T27 = CALL1(1,VARREF(YruntimeY2nd),formF1650);
            T25 = CALL2(1,VARREF(YtopYdo_restart),T26,T27);
            T22 = T25;
          } else {
            T30 = FUNFAB(fun_31,1,formF1650);
            T29 = with_exit(T30);
            if (T29 != YPfalse) {
              T33 = CALL1(1,VARREF(YruntimeY2nd),formF1650);
              T32 = CALL1(1,VARREF(YastYruntime_environment),T33);
              new_envF1652 = T32;
              T34 = BOXVAL(FREEREF(2)) = new_envF1652;
              T31 = T34;
              T28 = T31;
            } else {
              T36 = CALL2(1,VARREF(YruntimeYE),formF1650,LITREF(lit_74));
              if (T36 != YPfalse) {
                T37 = VARSET(YtopYrun,VARREF(YtopYp2c_run));
                T35 = T37;
              } else {
                T39 = CALL2(1,VARREF(YruntimeYE),formF1650,LITREF(lit_75));
                if (T39 != YPfalse) {
                  T40 = VARSET(YtopYrun,VARREF(YtopYast_run));
                  T38 = T40;
                } else {
                  T42 = CALL2(1,VARREF(YruntimeYE),formF1650,LITREF(lit_76));
                  if (T42 != YPfalse) {
                    T43 = VARSET(YtopYrun,VARREF(YtopYauto_run));
                    T41 = T43;
                  } else {
                    if (YPtrue != YPfalse) {
                      T47 = BOXVAL(FREEREF(2));
                      T46 = CALL3(1,VARREF(YastYobjectify),formF1650,T47,YPfalse);
                      astF1653 = T46;
                      T49 = BOXVAL(FREEREF(2));
                      T51 = BOXVAL(FREEREF(2));
                      T50 = CALL2(1,VARREF(YtopYrun),astF1653,T51);
                      T48 = CALLN(1,VARREF(YtopYprint_result_expression),4,T49,FREEREF(3),LITREF(lit_77),T50);
                      T45 = T48;
                      T44 = T45;
                    } else {
                      T44 = YPfalse;
                    }
                    T41 = T44;
                  }
                  T38 = T41;
                }
                T35 = T38;
              }
              T28 = T35;
            }
            T22 = T28;
          }
          T19 = T22;
        }
        T16 = T19;
      }
      T13 = T16;
    }
    T6 = T13;
  }
  T3 = T6;
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_33) {
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T3 = (P)YPpair(VARREF(Yhandler_info_arguments),Ynil);
  T2 = (P)YPpair(VARREF(Yhandler_info_message),T3);
  T6 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T5 = (P)YPpair(T6,Ynil);
  T4 = (P)YPpair(LITREF(lit_60),T5);
  T1 = CALL3(1,VARREF(YPisa),VARREF(YLsimple_handler_infoG),T2,T4);
  T7 = fun_26;
  T8 = FUNFAB(fun_27,1,FREEREF(1));
  T9 = FUNFAB(fun_32,6,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(0),FREEREF(5),FREEREF(6));
  T0 = CALLN(1,YruntimeYPwith_monitor,5,VARREF(YruntimeYLrestartG),T1,T7,T8,T9);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  P continue_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(continue_, 0);
loop:
  T1 = fun_24;
  T2 = FUNFAB(fun_25,5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),continue_);
  T3 = FUNFAB(fun_33,7,FREEREF(0),continue_,FREEREF(4),FREEREF(5),FREEREF(3),FREEREF(2),FREEREF(6));
  T0 = CALLN(1,YruntimeYPwith_monitor,5,VARREF(YruntimeYLconditionG),VARREF(YruntimeYDdefault_handler_info),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_35) {
  P T1,T0;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_34,7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_36) {
  P blow_;
  P loopF1654;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_35,8);
  loopF1654 = T1;
  FUNINIT(loopF1654, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),blow_,loopF1654);
  T2 = CALL0(0,loopF1654);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_top_in_37) {
  P level_,top_,quit_,show_restartsQ_,ct_env_;
  P restartsF1655;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(level_, 0);
  ARG(top_, 1);
  ARG(quit_, 2);
  ARG(show_restartsQ_, 3);
  ARG(ct_env_, 4);
loop:
  show_restartsQ_ = BOXFAB(show_restartsQ_);
  ct_env_ = BOXFAB(ct_env_);
  restartsF1655 = YPfalse;
  restartsF1655 = BOXFAB(restartsF1655);
  T5 = FUNFAB(fun_36,6,level_,top_,quit_,ct_env_,show_restartsQ_,restartsF1655);
  T4 = with_exit(T5);
  T2 = T4;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_38) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_39) {
  P c_,r_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_40) {
  P top_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(top_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYruntime_environment),FREEREF(1));
  T0 = CALLN(1,VARREF(YtopYtop_in),5,YPint((P)0),top_,FREEREF(0),YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_41) {
  P T1,T0;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_40,2,FREEREF(0),FREEREF(1));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_42) {
  P loopF1656;
  P T2,T1,T0;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_loop_41,3);
  loopF1656 = T1;
  FUNINIT(loopF1656, 3,FREEREF(0),FREEREF(1),loopF1656);
  T2 = CALL0(0,loopF1656);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  P quit_;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(quit_, 0);
loop:
  T3 = (P)YPpair(VARREF(Yhandler_info_arguments),Ynil);
  T2 = (P)YPpair(VARREF(Yhandler_info_message),T3);
  T6 = CALL0(1,VARREF(Ylst));
  T5 = (P)YPpair(T6,Ynil);
  T4 = (P)YPpair(LITREF(lit_78),T5);
  T1 = CALL3(1,VARREF(YPisa),VARREF(YLsimple_handler_infoG),T2,T4);
  T7 = fun_38;
  T8 = FUNFAB(fun_39,1,quit_);
  T9 = FUNFAB(fun_42,2,quit_,FREEREF(0));
  T0 = CALLN(1,YruntimeYPwith_monitor,5,VARREF(YruntimeYLrestartG),T1,T7,T8,T9);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_top_44) {
  P modname_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = FUNFAB(fun_43,1,modname_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YtopYtop),LITREF(lit_81));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YtopYsave_image) {
  P image_name_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(image_name_, 0);
loop:
  T1 = fun_45;
  T0 = CALL2(1,VARREF(Yunexec),image_name_,T1);
UNLINK_STACK();
  QRET(T0);
}

P YtopY___main_0___() {
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
  lit_0 = YPPsym((P)"p2c-eval");
  lit_1 = YPPsym((P)"exp");
  lit_2 = YPPsym((P)"ct-env");
  T1 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T0 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_0),T1,Ynil,YPfalse);
  VARSET(YtopYp2c_eval,T0);
  lit_3 = YPPsym((P)"parse-in");
  lit_4 = YPPsym((P)"s");
  T2 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_in_0 = YPmet(FUNCODEREF(fun_parse_in_0),LITREF(lit_3),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(YtopYparse_in);
  if (T5 != YPfalse) {
    T4 = VARREF(YtopYparse_in);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_parse_in_0;
  T3 = CALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YtopYparse_in,T3);
  lit_5 = YPPsym((P)"parse");
  lit_6 = YPPsym((P)"modname");
  T7 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_6)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_1 = YPmet(FUNCODEREF(fun_parse_1),LITREF(lit_5),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YtopYparse);
  if (T10 != YPfalse) {
    T9 = VARREF(YtopYparse);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_parse_1;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YtopYparse,T8);
  lit_7 = YPPsym((P)"str-parse-in");
  lit_8 = YPsb((P)"%=\n");
  T12 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_in_2 = YPmet(FUNCODEREF(fun_str_parse_in_2),LITREF(lit_7),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YtopYstr_parse_in);
  if (T15 != YPfalse) {
    T14 = VARREF(YtopYstr_parse_in);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_str_parse_in_2;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YtopYstr_parse_in,T13);
  lit_9 = YPPsym((P)"str-parse");
  T17 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_6)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_3 = YPmet(FUNCODEREF(fun_str_parse_3),LITREF(lit_9),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YtopYstr_parse);
  if (T20 != YPfalse) {
    T19 = VARREF(YtopYstr_parse);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_str_parse_3;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YtopYstr_parse,T18);
  lit_10 = YPPsym((P)"ast-run");
  lit_11 = YPPsym((P)"ast");
  T22 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YtopYast_run = YPmet(FUNCODEREF(YtopYast_run),LITREF(lit_10),T22,ENVNUL,PNUL,YPfalse);
  T23 = YtopYast_run;
  VARSET(YtopYast_run,T23);
  lit_12 = YPPsym((P)"p2c-run");
  T24 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YtopYp2c_run = YPmet(FUNCODEREF(YtopYp2c_run),LITREF(lit_12),T24,ENVNUL,PNUL,YPfalse);
  T25 = YtopYp2c_run;
  VARSET(YtopYp2c_run,T25);
  lit_13 = YPPsym((P)"auto-run");
  T26 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YtopYauto_run = YPmet(FUNCODEREF(YtopYauto_run),LITREF(lit_13),T26,ENVNUL,PNUL,YPfalse);
  T27 = YtopYauto_run;
  VARSET(YtopYauto_run,T27);
  VARSET(YtopYrun,VARREF(YtopYauto_run));
  lit_14 = YPPsym((P)"eval-in");
  lit_15 = YPPsym((P)"x");
  T28 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_in_7 = YPmet(FUNCODEREF(fun_eval_in_7),LITREF(lit_14),T28,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YtopYeval_in);
  if (T31 != YPfalse) {
    T30 = VARREF(YtopYeval_in);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_eval_in_7;
  T29 = CALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YtopYeval_in,T29);
  lit_16 = YPPsym((P)"eval");
  T33 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_6)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_8 = YPmet(FUNCODEREF(fun_eval_8),LITREF(lit_16),T33,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YsyntaxYeval);
  if (T36 != YPfalse) {
    T35 = VARREF(YsyntaxYeval);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_eval_8;
  T34 = CALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YsyntaxYeval,T34);
  lit_17 = YPPsym((P)"str-eval-in");
  T38 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_2)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_in_9 = YPmet(FUNCODEREF(fun_str_eval_in_9),LITREF(lit_17),T38,ENVNUL,PNUL,YPfalse);
  T41 = BOUNDP(YtopYstr_eval_in);
  if (T41 != YPfalse) {
    T40 = VARREF(YtopYstr_eval_in);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_str_eval_in_9;
  T39 = CALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YtopYstr_eval_in,T39);
  lit_18 = YPPsym((P)"str-eval");
  T43 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_6)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_10 = YPmet(FUNCODEREF(fun_str_eval_10),LITREF(lit_18),T43,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YtopYstr_eval);
  if (T46 != YPfalse) {
    T45 = VARREF(YtopYstr_eval);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_str_eval_10;
  T44 = CALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YtopYstr_eval,T44);
  lit_19 = YPPsym((P)"read-file");
  lit_20 = YPPsym((P)"filename");
  lit_21 = YPPsym((P)"port");
  lit_22 = YPPsym((P)"loop");
  lit_23 = YPPsym((P)"forms");
  T50 = YPsig(YPPlist(1,LITREF(lit_23)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_11 = YPmet(FUNCODEREF(fun_loop_11),LITREF(lit_22),T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_file_13 = YPmet(FUNCODEREF(fun_read_file_13),LITREF(lit_19),T48,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YtopYread_file);
  if (T53 != YPfalse) {
    T52 = VARREF(YtopYread_file);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_read_file_13;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YtopYread_file,T51);
  lit_24 = YPPsym((P)"load-in");
  T55 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_2)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_in_14 = YPmet(FUNCODEREF(fun_load_in_14),LITREF(lit_24),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YastYload_in);
  if (T58 != YPfalse) {
    T57 = VARREF(YastYload_in);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_load_in_14;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YastYload_in,T56);
  lit_25 = YPPsym((P)"load");
  T60 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_6)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_15 = YPmet(FUNCODEREF(fun_load_15),LITREF(lit_25),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YtopYload);
  if (T63 != YPfalse) {
    T62 = VARREF(YtopYload);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_load_15;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YtopYload,T61);
  lit_26 = YPPsym((P)"load-from");
  lit_27 = YPPsym((P)"name");
  T65 = YPsig(YPPlist(2,LITREF(lit_27),LITREF(lit_6)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_from_16 = YPmet(FUNCODEREF(fun_load_from_16),LITREF(lit_26),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YtopYload_from);
  if (T68 != YPfalse) {
    T67 = VARREF(YtopYload_from);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_load_from_16;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YtopYload_from,T66);
  lit_28 = YPPsym((P)"prompt-for-command-expression");
  lit_29 = YPPsym((P)"env");
  lit_30 = YPPsym((P)"level");
  lit_31 = YPPsym((P)"prompt");
  lit_32 = YPsb((P)"%s %=%s");
  T70 = YPsig(YPPlist(3,LITREF(lit_29),LITREF(lit_30),LITREF(lit_31)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_prompt_for_command_expression_17 = YPmet(FUNCODEREF(fun_prompt_for_command_expression_17),LITREF(lit_28),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YtopYprompt_for_command_expression);
  if (T73 != YPfalse) {
    T72 = VARREF(YtopYprompt_for_command_expression);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_prompt_for_command_expression_17;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YtopYprompt_for_command_expression,T71);
  lit_33 = YPPsym((P)"print-result-expression");
  lit_34 = YPPsym((P)"label");
  lit_35 = YPPsym((P)"result");
  lit_36 = YPsb((P)"%s %=%s");
  T75 = YPsig(YPPlist(4,LITREF(lit_29),LITREF(lit_30),LITREF(lit_34),LITREF(lit_35)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_print_result_expression_18 = YPmet(FUNCODEREF(fun_print_result_expression_18),LITREF(lit_33),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YtopYprint_result_expression);
  if (T78 != YPfalse) {
    T77 = VARREF(YtopYprint_result_expression);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_print_result_expression_18;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YtopYprint_result_expression,T76);
  lit_37 = YPPsym((P)"do-stack-frames");
  lit_38 = YPPsym((P)"fun");
  T80 = YPsig(YPPlist(1,LITREF(lit_38)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_stack_frames_19 = YPmet(FUNCODEREF(fun_do_stack_frames_19),LITREF(lit_37),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YtopYdo_stack_frames);
  if (T83 != YPfalse) {
    T82 = VARREF(YtopYdo_stack_frames);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_do_stack_frames_19;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YtopYdo_stack_frames,T81);
  lit_39 = YPPsym((P)"backtrace");
  lit_40 = YPPsym((P)"f");
  lit_41 = YPPsym((P)"args");
  lit_42 = YPsb((P)"[%=] %= %=\n");
  T86 = YPsig(YPPlist(2,LITREF(lit_40),LITREF(lit_41)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T86,ENVNUL,PNUL,YPfalse);
  T85 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_backtrace_21 = YPmet(FUNCODEREF(fun_backtrace_21),LITREF(lit_39),T85,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YtopYbacktrace);
  if (T89 != YPfalse) {
    T88 = VARREF(YtopYbacktrace);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_backtrace_21;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YtopYbacktrace,T87);
  lit_43 = YPPsym((P)"<keyboard-interrupt>");
  T92 = (P)YPpair(VARREF(YruntimeYLconditionG),Ynil);
  T91 = CALL2(1,VARREF(Yfab_class),LITREF(lit_43),T92);
  VARSET(YtopYLkeyboard_interruptG,T91);
  lit_44 = YPPsym((P)"keyboard-interrupt");
  T93 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ykeyboard_interrupt = YPmet(FUNCODEREF(Ykeyboard_interrupt),LITREF(lit_44),T93,ENVNUL,PNUL,YPfalse);
  T94 = Ykeyboard_interrupt;
  VARSET(Ykeyboard_interrupt,T94);
  lit_45 = YPPsym((P)"do-restart");
  lit_46 = YPPsym((P)"restarts");
  lit_47 = YPPsym((P)"n");
  lit_48 = YPsb((P)"No restarts available.\n");
  lit_49 = YPsb((P)"No restart #%d.\n");
  T95 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_47)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YtopYdo_restart = YPmet(FUNCODEREF(YtopYdo_restart),LITREF(lit_45),T95,ENVNUL,PNUL,YPfalse);
  T96 = YtopYdo_restart;
  VARSET(YtopYdo_restart,T96);
  lit_50 = YPPsym((P)"top-in");
  lit_51 = YPPsym((P)"top");
  lit_52 = YPPsym((P)"quit");
  lit_53 = YPPsym((P)"show-restarts?");
  lit_54 = YPPsym((P)"blow");
  lit_55 = YPPsym((P)"continue");
  lit_56 = YPPsym((P)"c");
  lit_57 = YPPsym((P)"r");
  lit_58 = YPsb((P)"BREAK");
  lit_59 = YPsb((P)"ERROR: %s");
  lit_60 = YPsb((P)"Return to interpreter level %d");
  lit_61 = YPsb((P)"Type (restart N) to restart execution:\n");
  lit_62 = YPsb((P)"<= ");
  lit_63 = YPPlist(1,YPPsym((P)"quit"));
  lit_64 = YPPlist(1,YPPsym((P)"up"));
  lit_65 = YPPlist(1,YPPsym((P)"handlers"));
  lit_66 = YPPlist(1,YPPsym((P)"restarts"));
  lit_67 = YPPsym((P)"return");
  lit_68 = YPPsym((P)"x-1315");
  lit_69 = YPPsym((P)"msg");
  lit_70 = YPPsym((P)"restart");
  lit_71 = YPsb((P)"Match Pattern Failure");
  lit_72 = YPPsym((P)"x-1317");
  lit_73 = YPPsym((P)"in-mod");
  lit_74 = YPPlist(1,YPPsym((P)"p2c-eval"));
  lit_75 = YPPlist(1,YPPsym((P)"ast-eval"));
  lit_76 = YPPlist(1,YPPsym((P)"auto-eval"));
  lit_77 = YPsb((P)"=> ");
  T110 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(YPPlist(2,LITREF(lit_69),LITREF(lit_41)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1315_28 = YPmet(FUNCODEREF(fun_x_1315_28),LITREF(lit_68),T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(YPPlist(1,LITREF(lit_67)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T105,ENVNUL,PNUL,YPfalse);
  T104 = YPsig(YPPlist(2,LITREF(lit_69),LITREF(lit_41)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1317_30 = YPmet(FUNCODEREF(fun_x_1317_30),LITREF(lit_72),T104,ENVNUL,PNUL,YPfalse);
  T103 = YPsig(YPPlist(1,LITREF(lit_67)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T103,ENVNUL,PNUL,YPfalse);
  T102 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T102,ENVNUL,PNUL,YPfalse);
  T101 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T101,ENVNUL,PNUL,YPfalse);
  T100 = YPsig(YPPlist(1,LITREF(lit_55)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_35 = YPmet(FUNCODEREF(fun_loop_35),LITREF(lit_22),T99,ENVNUL,PNUL,YPfalse);
  T98 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(YPPlist(5,LITREF(lit_30),LITREF(lit_51),LITREF(lit_52),LITREF(lit_53),LITREF(lit_2)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_top_in_37 = YPmet(FUNCODEREF(fun_top_in_37),LITREF(lit_50),T97,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YtopYtop_in);
  if (T113 != YPfalse) {
    T112 = VARREF(YtopYtop_in);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_top_in_37;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YtopYtop_in,T111);
  lit_78 = YPsb((P)"Exit the top-level interpreter");
  T121 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(YPPlist(1,LITREF(lit_51)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T119,ENVNUL,PNUL,YPfalse);
  T118 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_41 = YPmet(FUNCODEREF(fun_loop_41),LITREF(lit_22),T118,ENVNUL,PNUL,YPfalse);
  T117 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_top_44 = YPmet(FUNCODEREF(fun_top_44),LITREF(lit_51),T115,ENVNUL,PNUL,YPfalse);
  T124 = BOUNDP(YtopYtop);
  if (T124 != YPfalse) {
    T123 = VARREF(YtopYtop);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_top_44;
  T122 = CALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(YtopYtop,T122);
  lit_79 = YPPsym((P)"save-image");
  lit_80 = YPPsym((P)"image-name");
  lit_81 = YPPsym((P)"proto/user");
  T127 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T127,ENVNUL,PNUL,YPfalse);
  T126 = YPsig(YPPlist(1,LITREF(lit_80)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YtopYsave_image = YPmet(FUNCODEREF(YtopYsave_image),LITREF(lit_79),T126,ENVNUL,PNUL,YPfalse);
  T128 = YtopYsave_image;
  VARSET(YtopYsave_image,T128);
  T129 = YPfalse;
  return T129;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_read;
extern MODULE_INFO module_info_write;
extern MODULE_INFO module_info_syntax;
extern MODULE_INFO module_info_ast;
extern MODULE_INFO module_info_ast_linearize;
extern MODULE_INFO module_info_ast_eval;
extern MODULE_INFO module_info_protoSsystem;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_runtime},
  {&module_info_read},
  {&module_info_write},
  {&module_info_syntax},
  {&module_info_ast},
  {&module_info_ast_linearize},
  {&module_info_ast_eval},
  {&module_info_protoSsystem},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"binding-kind", &module_info_ast, "binding-kind"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"sexpr-block-name", &module_info_syntax, "sexpr-block-name"},
  {"module-target-environment", &module_info_ast, "module-target-environment"},
  {"writeln", &module_info_write, "writeln"},
  {"map", &module_info_macros, "map"},
  {"nul", &module_info_boot, "nul"},
  {"swapf", &module_info_macros, "swapf"},
  {"sexpr-slot-object", &module_info_syntax, "sexpr-slot-object"},
  {"curry", &module_info_runtime, "curry"},
  {"<ast-generic>", &module_info_ast, "<ast-generic>"},
  {"%i<", &module_info_boot, "%i<"},
  {"components-basename", &module_info_protoSsystem, "components-basename"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"closure-creation-index", &module_info_ast_linearize, "closure-creation-index"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"in", &module_info_runtime, "in"},
  {"class-name", &module_info_boot, "class-name"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"<free-environment>", &module_info_ast, "<free-environment>"},
  {"always", &module_info_runtime, "always"},
  {"os-name", &module_info_protoSsystem, "os-name"},
  {"*c-extension*", &module_info_protoSsystem, "*c-extension*"},
  {"$sexpr-isa-tag", &module_info_syntax, "$sexpr-isa-tag"},
  {"select", &module_info_macros, "select"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"program-quotations", &module_info_ast_linearize, "program-quotations"},
  {"<assignment>", &module_info_ast, "<assignment>"},
  {"monitor-main-thunk", &module_info_ast, "monitor-main-thunk"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"<int>", &module_info_boot, "<int>"},
  {"<num>", &module_info_boot, "<num>"},
  {"map2", &module_info_runtime, "map2"},
  {"function-source-setter", &module_info_ast, "function-source-setter"},
  {"$sexpr-syntax-if-tag", &module_info_syntax, "$sexpr-syntax-if-tag"},
  {"global-box-value-setter", &module_info_ast, "global-box-value-setter"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"function-data-refs-setter", &module_info_ast, "function-data-refs-setter"},
  {"%i^", &module_info_boot, "%i^"},
  {"3rd", &module_info_runtime, "3rd"},
  {"<local-reference>", &module_info_ast, "<local-reference>"},
  {"read-char", &module_info_runtime, "read-char"},
  {"<definition>", &module_info_ast, "<definition>"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"sexpr-block-body", &module_info_syntax, "sexpr-block-body"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"load-in", &module_info_ast, "load-in"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"%i-", &module_info_boot, "%i-"},
  {"global-box-value", &module_info_ast, "global-box-value"},
  {"loc", &module_info_boot, "loc"},
  {"signature-specs", &module_info_ast, "signature-specs"},
  {"alternative-condition", &module_info_ast, "alternative-condition"},
  {"signature-nary?", &module_info_ast, "signature-nary?"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"function-signature-setter", &module_info_ast, "function-signature-setter"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"unwind-protect-cleanup-thunk", &module_info_ast, "unwind-protect-cleanup-thunk"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"function-temporaries", &module_info_ast, "function-temporaries"},
  {"$sexpr-define-generic-tag", &module_info_syntax, "$sexpr-define-generic-tag"},
  {"signature-value", &module_info_ast, "signature-value"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"sexpr-make-getter", &module_info_syntax, "sexpr-make-getter"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"%selt", &module_info_boot, "%selt"},
  {"module-name-to-relpath", &module_info_ast, "module-name-to-relpath"},
  {"signature-names-setter", &module_info_ast, "signature-names-setter"},
  {"$sexpr-quote-tag", &module_info_syntax, "$sexpr-quote-tag"},
  {"port-index", &module_info_runtime, "port-index"},
  {"sexpr-loc-bound-signatures", &module_info_syntax, "sexpr-loc-bound-signatures"},
  {"floor/", &module_info_runtime, "floor/"},
  {"now-key", &module_info_runtime, "now-key"},
  {"locals-body-setter", &module_info_ast, "locals-body-setter"},
  {"function-debug-name", &module_info_ast, "function-debug-name"},
  {"write-to-string", &module_info_write, "write-to-string"},
  {"%cu", &module_info_boot, "%cu"},
  {"$sexpr-set-tag", &module_info_syntax, "$sexpr-set-tag"},
  {"reduce", &module_info_runtime, "reduce"},
  {"sexpr-unquote?", &module_info_syntax, "sexpr-unquote?"},
  {"add-build-path", &module_info_protoSsystem, "add-build-path"},
  {"%slot", &module_info_boot, "%slot"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"<global-reference>", &module_info_ast, "<global-reference>"},
  {"%fu", &module_info_boot, "%fu"},
  {"var-type", &module_info_macros, "var-type"},
  {"locals-functions", &module_info_ast, "locals-functions"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"locals-functions-setter", &module_info_ast, "locals-functions-setter"},
  {"extract-things!", &module_info_ast_linearize, "extract-things!"},
  {"proto-filename", &module_info_protoSsystem, "proto-filename"},
  {"dg", &module_info_boot, "dg"},
  {"<ast-primitive-definition>", &module_info_ast, "<ast-primitive-definition>"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"round/", &module_info_runtime, "round/"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"sexpr-slot-variable", &module_info_syntax, "sexpr-slot-variable"},
  {"dss", &module_info_boot, "dss"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"dp", &module_info_boot, "dp"},
  {"assocq", &module_info_runtime, "assocq"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"*register-passive?*", &module_info_ast_linearize, "*register-passive?*"},
  {"%sb", &module_info_boot, "%sb"},
  {"eval", &module_info_syntax, "eval"},
  {"$sexpr-define-class-tag", &module_info_syntax, "$sexpr-define-class-tag"},
  {"<log>", &module_info_boot, "<log>"},
  {"locals-body", &module_info_ast, "locals-body"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"lsh", &module_info_runtime, "lsh"},
  {"$sexpr-define-tag", &module_info_syntax, "$sexpr-define-tag"},
  {"as-lst", &module_info_ast, "as-lst"},
  {"ash", &module_info_runtime, "ash"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"identity", &module_info_runtime, "identity"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%with-monitor", &module_info_runtime, "%with-monitor"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"pair", &module_info_macros, "pair"},
  {"*obj-extension*", &module_info_protoSsystem, "*obj-extension*"},
  {"dv", &module_info_boot, "dv"},
  {"add-tmp-path", &module_info_protoSsystem, "add-tmp-path"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"sexpr-definition-value", &module_info_syntax, "sexpr-definition-value"},
  {"<module>", &module_info_ast, "<module>"},
  {"function-value", &module_info_ast, "function-value"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"not", &module_info_boot, "not"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"components-to-pathname", &module_info_protoSsystem, "components-to-pathname"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"-", &module_info_runtime, "-"},
  {"file-mtime", &module_info_protoSsystem, "file-mtime"},
  {"application-binding", &module_info_ast, "application-binding"},
  {"add-src-path", &module_info_protoSsystem, "add-src-path"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"abs", &module_info_runtime, "abs"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"to-str", &module_info_runtime, "to-str"},
  {"max", &module_info_runtime, "max"},
  {"application-tail?", &module_info_ast, "application-tail?"},
  {"%f*", &module_info_boot, "%f*"},
  {"<any>", &module_info_boot, "<any>"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"sexpr-function-definition-variable", &module_info_syntax, "sexpr-function-definition-variable"},
  {"%su", &module_info_boot, "%su"},
  {"sexpr-loc-bound-names", &module_info_syntax, "sexpr-loc-bound-names"},
  {"assert", &module_info_macros, "assert"},
  {"<ast-function>", &module_info_ast, "<ast-function>"},
  {"*", &module_info_runtime, "*"},
  {"sexpr-loc-bound-bodies", &module_info_syntax, "sexpr-loc-bound-bodies"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"collect-registers!", &module_info_ast_linearize, "collect-registers!"},
  {"sexpr-slot-init", &module_info_syntax, "sexpr-slot-init"},
  {"set", &module_info_boot, "set"},
  {"export", &module_info_boot, "export"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"type-class", &module_info_boot, "type-class"},
  {"binding-value-setter", &module_info_ast, "binding-value-setter"},
  {"ddv", &module_info_macros, "ddv"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"write", &module_info_write, "write"},
  {"<unwind-protect>", &module_info_ast, "<unwind-protect>"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"sexpr-make-setter", &module_info_syntax, "sexpr-make-setter"},
  {"%binding-bound?", &module_info_ast_eval, "%binding-bound?"},
  {"<union>", &module_info_boot, "<union>"},
  {"constant-index-setter", &module_info_ast, "constant-index-setter"},
  {"insert-box!", &module_info_ast_linearize, "insert-box!"},
  {"%bb", &module_info_boot, "%bb"},
  {"lst", &module_info_boot, "lst"},
  {"%ft", &module_info_boot, "%ft"},
  {"sexpr-forward-primitive?", &module_info_syntax, "sexpr-forward-primitive?"},
  {"collect-temporaries!", &module_info_ast_linearize, "collect-temporaries!"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"cat", &module_info_macros, "cat"},
  {"sexpr-make-setter-name", &module_info_syntax, "sexpr-make-setter-name"},
  {"binding-global-box", &module_info_ast, "binding-global-box"},
  {"constant-index", &module_info_ast, "constant-index"},
  {"<local-assignment>", &module_info_ast, "<local-assignment>"},
  {"assignment-form-setter", &module_info_ast, "assignment-form-setter"},
  {"form-program", &module_info_ast_linearize, "form-program"},
  {"%binding-value-setter", &module_info_ast_eval, "%binding-value-setter"},
  {"signature-nary?-setter", &module_info_ast, "signature-nary?-setter"},
  {"probe-directory", &module_info_protoSsystem, "probe-directory"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"assoc", &module_info_runtime, "assoc"},
  {"binding-value", &module_info_ast, "binding-value"},
  {"isa", &module_info_boot, "isa"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"floor", &module_info_runtime, "floor"},
  {"<error>", &module_info_runtime, "<error>"},
  {"bind-exit-main-fun", &module_info_ast, "bind-exit-main-fun"},
  {"var-name", &module_info_macros, "var-name"},
  {"box-form", &module_info_ast_linearize, "box-form"},
  {"sexpr-isa-parent", &module_info_syntax, "sexpr-isa-parent"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"sexpr-make-application", &module_info_syntax, "sexpr-make-application"},
  {"modulo", &module_info_runtime, "modulo"},
  {"fun", &module_info_boot, "fun"},
  {"pick", &module_info_runtime, "pick"},
  {"collect", &module_info_macros, "collect"},
  {"monitor-handler", &module_info_ast, "monitor-handler"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"components-last", &module_info_protoSsystem, "components-last"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"last", &module_info_runtime, "last"},
  {"or", &module_info_macros, "or"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"low-elt", &module_info_runtime, "low-elt"},
  {"sexpr-signature-parameters", &module_info_syntax, "sexpr-signature-parameters"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"<module-binding>", &module_info_ast, "<module-binding>"},
  {"dec", &module_info_macros, "dec"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"sexpr-operator", &module_info_syntax, "sexpr-operator"},
  {"<ast-macro-definition>", &module_info_ast, "<ast-macro-definition>"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"sexpr-loc-raw-body", &module_info_syntax, "sexpr-loc-raw-body"},
  {"<=", &module_info_runtime, "<="},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"<arguments>", &module_info_ast, "<arguments>"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"signature-bindings-setter", &module_info_ast, "signature-bindings-setter"},
  {"<ast-signature>", &module_info_ast, "<ast-signature>"},
  {"format", &module_info_runtime, "format"},
  {"*exe-extension*", &module_info_protoSsystem, "*exe-extension*"},
  {"all2?", &module_info_runtime, "all2?"},
  {"function-signature", &module_info_ast, "function-signature"},
  {"@+", &module_info_boot, "@+"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"module-syntax-environment", &module_info_ast, "module-syntax-environment"},
  {"low-elt-setter", &module_info_runtime, "low-elt-setter"},
  {"report-undefined-global-bindings", &module_info_ast, "report-undefined-global-bindings"},
  {"seq", &module_info_boot, "seq"},
  {"runtime-environment", &module_info_ast, "runtime-environment"},
  {"sexpr-sequence->begin", &module_info_syntax, "sexpr-sequence->begin"},
  {"sexpr-let->combination", &module_info_syntax, "sexpr-let->combination"},
  {"unexec", &module_info_boot, "unexec"},
  {"%pair", &module_info_boot, "%pair"},
  {"mem?", &module_info_runtime, "mem?"},
  {"apply", &module_info_macros, "apply"},
  {"sexpr-variable-type", &module_info_syntax, "sexpr-variable-type"},
  {"%c=", &module_info_boot, "%c="},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"fix-let-bindings-setter", &module_info_ast, "fix-let-bindings-setter"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"remainder", &module_info_runtime, "remainder"},
  {"do-module-loader-modules", &module_info_ast, "do-module-loader-modules"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"display", &module_info_write, "display"},
  {"$sexpr-method-tag", &module_info_syntax, "$sexpr-method-tag"},
  {"assignment-binding", &module_info_ast, "assignment-binding"},
  {"*path-separator*", &module_info_protoSsystem, "*path-separator*"},
  {"%vec", &module_info_boot, "%vec"},
  {"%snul", &module_info_boot, "%snul"},
  {"error", &module_info_boot, "error"},
  {"rep", &module_info_boot, "rep"},
  {"logior", &module_info_runtime, "logior"},
  {"sexpr-isa-slot-inits", &module_info_syntax, "sexpr-isa-slot-inits"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"rev", &module_info_runtime, "rev"},
  {"sexpr-if-else", &module_info_syntax, "sexpr-if-else"},
  {"<box-write>", &module_info_ast_linearize, "<box-write>"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"sexpr-unwind-protect-protected-form", &module_info_syntax, "sexpr-unwind-protect-protected-form"},
  {"function-self-recursive?-setter", &module_info_ast, "function-self-recursive?-setter"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"<step>", &module_info_runtime, "<step>"},
  {"try", &module_info_boot, "try"},
  {"%i*", &module_info_boot, "%i*"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"<map>", &module_info_runtime, "<map>"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"$proto-boot-module-name", &module_info_ast, "$proto-boot-module-name"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"*max-print-depth*", &module_info_write, "*max-print-depth*"},
  {"$sexpr-define-method-tag", &module_info_syntax, "$sexpr-define-method-tag"},
  {"pos?", &module_info_runtime, "pos?"},
  {"program-type-setter", &module_info_ast, "program-type-setter"},
  {"%ib", &module_info_boot, "%ib"},
  {"function-temporaries-setter", &module_info_ast, "function-temporaries-setter"},
  {">", &module_info_runtime, ">"},
  {"do-named-static-global-bindings", &module_info_ast, "do-named-static-global-bindings"},
  {"$sexpr-quasiquote-tag", &module_info_syntax, "$sexpr-quasiquote-tag"},
  {"unless", &module_info_macros, "unless"},
  {"$sexpr-locals-tag", &module_info_syntax, "$sexpr-locals-tag"},
  {"~=", &module_info_runtime, "~="},
  {"sexpr-if-test", &module_info_syntax, "sexpr-if-test"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_syntax, "sexpr-unwind-protect-cleanup-forms"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"sexpr-make-begin", &module_info_syntax, "sexpr-make-begin"},
  {"do-static-global-bindings", &module_info_ast, "do-static-global-bindings"},
  {"quote", &module_info_boot, "quote"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"binding-name", &module_info_ast, "binding-name"},
  {"sig", &module_info_runtime, "sig"},
  {"<predefined-application>", &module_info_ast, "<predefined-application>"},
  {"reference-frame-offset", &module_info_ast, "reference-frame-offset"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"$sexpr-define-function-tag", &module_info_syntax, "$sexpr-define-function-tag"},
  {"program-definitions", &module_info_ast_linearize, "program-definitions"},
  {"exe-filename", &module_info_protoSsystem, "exe-filename"},
  {"function-registers-setter", &module_info_ast, "function-registers-setter"},
  {"function-source", &module_info_ast, "function-source"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"sexpr-define-class?", &module_info_syntax, "sexpr-define-class?"},
  {"sexpr-definition-variable", &module_info_syntax, "sexpr-definition-variable"},
  {"sexpr-operands", &module_info_syntax, "sexpr-operands"},
  {"logxor", &module_info_runtime, "logxor"},
  {"sexpr-unquote-splicing?", &module_info_syntax, "sexpr-unquote-splicing?"},
  {"sexpr-method-body", &module_info_syntax, "sexpr-method-body"},
  {"signature-arity-setter", &module_info_ast, "signature-arity-setter"},
  {"module-binding", &module_info_ast, "module-binding"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"sexpr-isa-init-slots", &module_info_syntax, "sexpr-isa-init-slots"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"<box-creation>", &module_info_ast_linearize, "<box-creation>"},
  {"%fb", &module_info_boot, "%fb"},
  {"remove-modules-by-name!", &module_info_ast, "remove-modules-by-name!"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"cat2", &module_info_runtime, "cat2"},
  {"<", &module_info_runtime, "<"},
  {"pop", &module_info_runtime, "pop"},
  {"locals-bindings", &module_info_ast, "locals-bindings"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"$proto-runtime-module-name", &module_info_ast, "$proto-runtime-module-name"},
  {"function-self-recursive?", &module_info_ast, "function-self-recursive?"},
  {"<global-box>", &module_info_ast, "<global-box>"},
  {"sexpr-monitor-expand", &module_info_syntax, "sexpr-monitor-expand"},
  {"default", &module_info_runtime, "default"},
  {"%f=", &module_info_boot, "%f="},
  {"find-binding", &module_info_ast, "find-binding"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"keys", &module_info_runtime, "keys"},
  {"logand", &module_info_runtime, "logand"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"sexpr-if-then", &module_info_syntax, "sexpr-if-then"},
  {"cat!", &module_info_runtime, "cat!"},
  {"sexpr-text-of-quotation", &module_info_syntax, "sexpr-text-of-quotation"},
  {"sexpr-bind-pattern-variables", &module_info_syntax, "sexpr-bind-pattern-variables"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"alternative-alternant", &module_info_ast, "alternative-alternant"},
  {"len", &module_info_runtime, "len"},
  {"function-index-setter", &module_info_ast, "function-index-setter"},
  {"napply", &module_info_macros, "napply"},
  {"and", &module_info_macros, "and"},
  {"reference-called-function?-setter", &module_info_ast, "reference-called-function?-setter"},
  {"=", &module_info_runtime, "="},
  {"program-type", &module_info_ast, "program-type"},
  {"tup", &module_info_macros, "tup"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"sexpr-expand-backquote", &module_info_syntax, "sexpr-expand-backquote"},
  {"parent-directory", &module_info_protoSsystem, "parent-directory"},
  {"add", &module_info_runtime, "add"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"hierarchical-components", &module_info_protoSsystem, "hierarchical-components"},
  {"<reference>", &module_info_ast, "<reference>"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"sexpr-method-signature", &module_info_syntax, "sexpr-method-signature"},
  {"add!", &module_info_runtime, "add!"},
  {"%str", &module_info_boot, "%str"},
  {"$sexpr-iterate-tag", &module_info_syntax, "$sexpr-iterate-tag"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"sexpr-syntax-definition-variable", &module_info_syntax, "sexpr-syntax-definition-variable"},
  {"@<", &module_info_boot, "@<"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"$sexpr-unwind-protect-tag", &module_info_syntax, "$sexpr-unwind-protect-tag"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"lognot", &module_info_runtime, "lognot"},
  {"locals-bindings-setter", &module_info_ast, "locals-bindings-setter"},
  {"analyze-dynamic-extent", &module_info_ast_linearize, "analyze-dynamic-extent"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"sexpr-make-macro-function", &module_info_syntax, "sexpr-make-macro-function"},
  {"%lb", &module_info_boot, "%lb"},
  {"gensym", &module_info_macros, "gensym"},
  {"any2?", &module_info_runtime, "any2?"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"type-object", &module_info_boot, "type-object"},
  {"binding-global-box-setter", &module_info_ast, "binding-global-box-setter"},
  {"if", &module_info_boot, "if"},
  {"function-registers", &module_info_ast, "function-registers"},
  {"sexpr-isa-init-values", &module_info_syntax, "sexpr-isa-init-values"},
  {"<top-level-form>", &module_info_ast_linearize, "<top-level-form>"},
  {"<class>", &module_info_boot, "<class>"},
  {"popf", &module_info_macros, "popf"},
  {"as", &module_info_runtime, "as"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"binding-inferred-type-setter", &module_info_ast, "binding-inferred-type-setter"},
  {"fin", &module_info_boot, "fin"},
  {"sexpr-syntax-definition-value", &module_info_syntax, "sexpr-syntax-definition-value"},
  {"form-definitions", &module_info_ast_linearize, "form-definitions"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"<bot>", &module_info_ast, "<bot>"},
  {"probe-module", &module_info_ast, "probe-module"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"sexpr-assignment-value", &module_info_syntax, "sexpr-assignment-value"},
  {"binding-dotted?", &module_info_ast, "binding-dotted?"},
  {"<sequential>", &module_info_ast, "<sequential>"},
  {"<real-reference>", &module_info_ast, "<real-reference>"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"any?", &module_info_runtime, "any?"},
  {"application-known?", &module_info_ast, "application-known?"},
  {"function-index", &module_info_ast, "function-index"},
  {"application-known?-setter", &module_info_ast, "application-known?-setter"},
  {"binding-dynamic-extent?", &module_info_ast, "binding-dynamic-extent?"},
  {"binding-index-setter", &module_info_ast, "binding-index-setter"},
  {"assq", &module_info_runtime, "assq"},
  {"sexpr-signature-value", &module_info_syntax, "sexpr-signature-value"},
  {"sexpr-variable-name", &module_info_syntax, "sexpr-variable-name"},
  {"binding-native-to?", &module_info_ast, "binding-native-to?"},
  {"<type>", &module_info_boot, "<type>"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"application-function", &module_info_ast, "application-function"},
  {"push", &module_info_runtime, "push"},
  {"set-module-environments", &module_info_ast, "set-module-environments"},
  {"module-name", &module_info_ast, "module-name"},
  {"binding-dynamic-extent?-setter", &module_info_ast, "binding-dynamic-extent?-setter"},
  {"binding-inferred-type", &module_info_ast, "binding-inferred-type"},
  {"compose", &module_info_runtime, "compose"},
  {"<regular-application>", &module_info_ast, "<regular-application>"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"fill", &module_info_runtime, "fill"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"binding-mutable?", &module_info_ast, "binding-mutable?"},
  {"out", &module_info_runtime, "out"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"%iu", &module_info_boot, "%iu"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"$sexpr-define-syntax-tag", &module_info_syntax, "$sexpr-define-syntax-tag"},
  {"%slen", &module_info_boot, "%slen"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"char->ascii", &module_info_runtime, "char->ascii"},
  {"assignment-form", &module_info_ast, "assignment-form"},
  {"from", &module_info_runtime, "from"},
  {"application-arguments", &module_info_ast, "application-arguments"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"dc", &module_info_boot, "dc"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"env-object-name", &module_info_ast, "env-object-name"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"%iv", &module_info_boot, "%iv"},
  {"<static-global-environment>", &module_info_ast, "<static-global-environment>"},
  {"first-then", &module_info_runtime, "first-then"},
  {"read-from-string", &module_info_read, "read-from-string"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"reference-frame-number", &module_info_ast, "reference-frame-number"},
  {"false-or", &module_info_runtime, "false-or"},
  {"module-loader-module-type", &module_info_ast, "module-loader-module-type"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"os-binding-value", &module_info_protoSsystem, "os-binding-value"},
  {"<locals>", &module_info_ast, "<locals>"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"$sexpr-if-tag", &module_info_syntax, "$sexpr-if-tag"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"signature-bindings", &module_info_ast, "signature-bindings"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"zero?", &module_info_runtime, "zero?"},
  {"pushf", &module_info_macros, "pushf"},
  {"closure-creation-free", &module_info_ast_linearize, "closure-creation-free"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"<free-reference>", &module_info_ast_linearize, "<free-reference>"},
  {"process-id", &module_info_protoSsystem, "process-id"},
  {"init-ast", &module_info_ast, "init-ast"},
  {"def-list", &module_info_ast, "def-list"},
  {"address-of", &module_info_runtime, "address-of"},
  {"signature-names", &module_info_ast, "signature-names"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"alter", &module_info_runtime, "alter"},
  {"all?", &module_info_runtime, "all?"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"binding-info-setter", &module_info_ast, "binding-info-setter"},
  {">=", &module_info_runtime, ">="},
  {"binding-module-name", &module_info_ast, "binding-module-name"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"def-programs", &module_info_ast, "def-programs"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"elt", &module_info_macros, "elt"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"%c<", &module_info_boot, "%c<"},
  {"register-allocate!", &module_info_ast_linearize, "register-allocate!"},
  {"let", &module_info_boot, "let"},
  {"<port>", &module_info_runtime, "<port>"},
  {"program-register-setter", &module_info_ast, "program-register-setter"},
  {"<list>", &module_info_runtime, "<list>"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"<computed-program>", &module_info_ast, "<computed-program>"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"*proto-extension*", &module_info_protoSsystem, "*proto-extension*"},
  {"os-binding-value-setter", &module_info_protoSsystem, "os-binding-value-setter"},
  {"%i+", &module_info_boot, "%i+"},
  {"$sexpr-macro-expand-tag", &module_info_syntax, "$sexpr-macro-expand-tag"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"program-register", &module_info_ast, "program-register"},
  {"newline", &module_info_runtime, "newline"},
  {"%raw", &module_info_boot, "%raw"},
  {"<ast-method>", &module_info_ast, "<ast-method>"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"function-free", &module_info_ast, "function-free"},
  {"<module-binding-reference>", &module_info_ast, "<module-binding-reference>"},
  {"*proto-root*", &module_info_protoSsystem, "*proto-root*"},
  {"%binding-value", &module_info_ast_eval, "%binding-value"},
  {"binding-info", &module_info_ast, "binding-info"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"vec", &module_info_runtime, "vec"},
  {"label-components", &module_info_protoSsystem, "label-components"},
  {"%im", &module_info_boot, "%im"},
  {"reference-binding", &module_info_ast, "reference-binding"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"<str>", &module_info_boot, "<str>"},
  {"<binding>", &module_info_ast, "<binding>"},
  {"compile-time-program", &module_info_ast, "compile-time-program"},
  {"dlet", &module_info_macros, "dlet"},
  {"str", &module_info_runtime, "str"},
  {"find-environment-module", &module_info_ast, "find-environment-module"},
  {"update-walk!", &module_info_ast_linearize, "update-walk!"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"next-method", &module_info_macros, "next-method"},
  {"app-args", &module_info_runtime, "app-args"},
  {"binding-type-setter", &module_info_ast, "binding-type-setter"},
  {"bound?", &module_info_boot, "bound?"},
  {"function-body", &module_info_ast, "function-body"},
  {"%f+", &module_info_boot, "%f+"},
  {"<raw-constant>", &module_info_ast, "<raw-constant>"},
  {"~==", &module_info_runtime, "~=="},
  {"binding-index", &module_info_ast, "binding-index"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"read", &module_info_runtime, "read"},
  {"rev!", &module_info_runtime, "rev!"},
  {"1st", &module_info_runtime, "1st"},
  {"$sexpr-bind-exit-tag", &module_info_syntax, "$sexpr-bind-exit-tag"},
  {"sexpr-make-anonymous-method", &module_info_syntax, "sexpr-make-anonymous-method"},
  {"init-environment-for-eval", &module_info_ast, "init-environment-for-eval"},
  {"monitor-test", &module_info_ast, "monitor-test"},
  {"write-string", &module_info_runtime, "write-string"},
  {"pos", &module_info_runtime, "pos"},
  {"sexpr-function-body", &module_info_syntax, "sexpr-function-body"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"do3", &module_info_runtime, "do3"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"<runtime-reference>", &module_info_ast, "<runtime-reference>"},
  {"%lu", &module_info_boot, "%lu"},
  {"function-body-setter", &module_info_ast, "function-body-setter"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"force-output", &module_info_runtime, "force-output"},
  {"<programs>", &module_info_ast, "<programs>"},
  {"do", &module_info_runtime, "do"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"case", &module_info_macros, "case"},
  {"sexpr-define-class-parents", &module_info_syntax, "sexpr-define-class-parents"},
  {"for", &module_info_macros, "for"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"sexpr-assignment-variable", &module_info_syntax, "sexpr-assignment-variable"},
  {"binding-type", &module_info_ast, "binding-type"},
  {"<constant>", &module_info_ast, "<constant>"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"round", &module_info_runtime, "round"},
  {"<fab-list>", &module_info_ast, "<fab-list>"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"bound?-reference", &module_info_ast, "bound?-reference"},
  {"environment-module", &module_info_ast, "environment-module"},
  {"unwind-protect-protected-thunk", &module_info_ast, "unwind-protect-protected-thunk"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"ascii-whitespaces", &module_info_runtime, "ascii-whitespaces"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"unconstrained-type?", &module_info_ast_linearize, "unconstrained-type?"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"<met>", &module_info_boot, "<met>"},
  {"<runtime-assignment>", &module_info_ast, "<runtime-assignment>"},
  {"nul?", &module_info_runtime, "nul?"},
  {"create-directory", &module_info_protoSsystem, "create-directory"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"$sexpr-let-tag", &module_info_syntax, "$sexpr-let-tag"},
  {"sexpr-syntax-if-value", &module_info_syntax, "sexpr-syntax-if-value"},
  {"<monitor>", &module_info_ast, "<monitor>"},
  {"@olen", &module_info_boot, "@olen"},
  {"*max-print-length*", &module_info_write, "*max-print-length*"},
  {"fab", &module_info_runtime, "fab"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"sexpr-variable?", &module_info_syntax, "sexpr-variable?"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"%it/", &module_info_boot, "%it/"},
  {"components-parent-directory", &module_info_protoSsystem, "components-parent-directory"},
  {"file-exists?", &module_info_protoSsystem, "file-exists?"},
  {"program-form", &module_info_ast_linearize, "program-form"},
  {"pathname-to-components", &module_info_protoSsystem, "pathname-to-components"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"list", &module_info_runtime, "list"},
  {"head", &module_info_boot, "head"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"$sexpr-slot-tag", &module_info_syntax, "$sexpr-slot-tag"},
  {"gather-temporaries!", &module_info_ast_linearize, "gather-temporaries!"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"ast-define-binding", &module_info_ast, "ast-define-binding"},
  {"collected", &module_info_macros, "collected"},
  {"c-filename", &module_info_protoSsystem, "c-filename"},
  {"obj-filename", &module_info_protoSsystem, "obj-filename"},
  {"<bind-exit>", &module_info_ast, "<bind-exit>"},
  {"sequentialize", &module_info_ast, "sequentialize"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"even?", &module_info_runtime, "even?"},
  {"ast-evaluate", &module_info_ast, "ast-evaluate"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"<local-binding>", &module_info_ast, "<local-binding>"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"<box-read>", &module_info_ast_linearize, "<box-read>"},
  {"use", &module_info_boot, "use"},
  {"df", &module_info_boot, "df"},
  {"buf", &module_info_runtime, "buf"},
  {"<ast-primitive>", &module_info_ast, "<ast-primitive>"},
  {"object-class", &module_info_boot, "object-class"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"load-module", &module_info_ast, "load-module"},
  {"assoc-value", &module_info_runtime, "assoc-value"},
  {"<program>", &module_info_ast, "<program>"},
  {"dm", &module_info_boot, "dm"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"<global-assignment>", &module_info_ast, "<global-assignment>"},
  {"objectify-signature", &module_info_ast, "objectify-signature"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"when", &module_info_macros, "when"},
  {"neg?", &module_info_runtime, "neg?"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"%velt", &module_info_boot, "%velt"},
  {"<passive-program>", &module_info_ast, "<passive-program>"},
  {"sexpr-syntax-if-pattern", &module_info_syntax, "sexpr-syntax-if-pattern"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"flatten-seqs", &module_info_ast_linearize, "flatten-seqs"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"analyze-calls", &module_info_ast_linearize, "analyze-calls"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"binding-locative", &module_info_ast, "binding-locative"},
  {"empty", &module_info_runtime, "empty"},
  {"collecting", &module_info_macros, "collecting"},
  {"<bound?>", &module_info_ast, "<bound?>"},
  {"$char-long-names", &module_info_read, "$char-long-names"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"alternative-consequent", &module_info_ast, "alternative-consequent"},
  {"%untag", &module_info_boot, "%untag"},
  {"%i=", &module_info_boot, "%i="},
  {"free-environment", &module_info_ast, "free-environment"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"from-above", &module_info_runtime, "from-above"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"t<", &module_info_runtime, "t<"},
  {"module-exports", &module_info_ast, "module-exports"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"signature-value-setter", &module_info_ast, "signature-value-setter"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"constant-value", &module_info_ast, "constant-value"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"type-error", &module_info_boot, "type-error"},
  {"do2", &module_info_runtime, "do2"},
  {"sexpr-iterate->loc", &module_info_syntax, "sexpr-iterate->loc"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"fix-let-body-setter", &module_info_ast, "fix-let-body-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"function-bindings", &module_info_ast, "function-bindings"},
  {"slot", &module_info_boot, "slot"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"<alternative>", &module_info_ast, "<alternative>"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"from-below", &module_info_runtime, "from-below"},
  {"free-implemented-foreign-bindings", &module_info_ast, "free-implemented-foreign-bindings"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"recurring-write", &module_info_write, "recurring-write"},
  {"function-nary?", &module_info_ast, "function-nary?"},
  {"assqn", &module_info_runtime, "assqn"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"2nd", &module_info_runtime, "2nd"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"<application>", &module_info_ast, "<application>"},
  {"function-binding", &module_info_ast, "function-binding"},
  {"+", &module_info_runtime, "+"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"reference-called-function?", &module_info_ast, "reference-called-function?"},
  {"ct", &module_info_boot, "ct"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"tail", &module_info_boot, "tail"},
  {"%f<", &module_info_boot, "%f<"},
  {"function-data-refs", &module_info_ast, "function-data-refs"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"==", &module_info_macros, "=="},
  {"monitor-info", &module_info_ast, "monitor-info"},
  {"function-debug-name-setter", &module_info_ast, "function-debug-name-setter"},
  {"fix-let-types-setter", &module_info_ast, "fix-let-types-setter"},
  {"write-char", &module_info_runtime, "write-char"},
  {"%i!", &module_info_boot, "%i!"},
  {"opf", &module_info_macros, "opf"},
  {"min", &module_info_runtime, "min"},
  {"fix-let-bindings", &module_info_ast, "fix-let-bindings"},
  {"/", &module_info_runtime, "/"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"lift!", &module_info_ast_linearize, "lift!"},
  {"sexpr-syntax-if-then", &module_info_syntax, "sexpr-syntax-if-then"},
  {"fix-let-arguments-setter", &module_info_ast, "fix-let-arguments-setter"},
  {"install-initial-bindings", &module_info_ast, "install-initial-bindings"},
  {"t=", &module_info_runtime, "t="},
  {"fab-map", &module_info_runtime, "fab-map"},
  {"from-by", &module_info_runtime, "from-by"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"truncate", &module_info_runtime, "truncate"},
  {"fabs", &module_info_runtime, "fabs"},
  {"form-quotations", &module_info_ast_linearize, "form-quotations"},
  {"<range>", &module_info_runtime, "<range>"},
  {"<col>", &module_info_boot, "<col>"},
  {"file-type", &module_info_protoSsystem, "file-type"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"@==", &module_info_boot, "@=="},
  {"from-to", &module_info_runtime, "from-to"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"<immediate-constant>", &module_info_ast, "<immediate-constant>"},
  {"reference-offset", &module_info_ast_linearize, "reference-offset"},
  {"del-key", &module_info_runtime, "del-key"},
  {"del", &module_info_runtime, "del"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"lab", &module_info_boot, "lab"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"%cb", &module_info_boot, "%cb"},
  {"box-reference", &module_info_ast_linearize, "box-reference"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"sexpr-function-signature", &module_info_syntax, "sexpr-function-signature"},
  {"signature-specs-setter", &module_info_ast, "signature-specs-setter"},
  {"<fix-let>", &module_info_ast, "<fix-let>"},
  {"mif", &module_info_boot, "mif"},
  {"sexpr-function-definition-value", &module_info_syntax, "sexpr-function-definition-value"},
  {"reference-self?", &module_info_ast_linearize, "reference-self?"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"fab-p2c-module", &module_info_ast, "fab-p2c-module"},
  {"monitor-type", &module_info_ast, "monitor-type"},
  {"binding-dotted?-setter", &module_info_ast, "binding-dotted?-setter"},
  {"fix-let-body", &module_info_ast, "fix-let-body"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"function-free-setter", &module_info_ast, "function-free-setter"},
  {"signature-arity", &module_info_ast, "signature-arity"},
  {"fix-let-arguments", &module_info_ast, "fix-let-arguments"},
  {"ast-contains-fun?", &module_info_ast_linearize, "ast-contains-fun?"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"odd?", &module_info_runtime, "odd?"},
  {"nil", &module_info_boot, "nil"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"objectify-quotation", &module_info_ast, "objectify-quotation"},
  {"<module-loader>", &module_info_ast, "<module-loader>"},
  {"t+", &module_info_runtime, "t+"},
  {"inc", &module_info_macros, "inc"},
  {"environment-uses-modules", &module_info_ast, "environment-uses-modules"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"sub", &module_info_runtime, "sub"},
  {"closurize-main!", &module_info_ast_linearize, "closurize-main!"},
  {"%f/", &module_info_boot, "%f/"},
  {"elt-or", &module_info_runtime, "elt-or"},
  {"<renamed-local-binding>", &module_info_ast_linearize, "<renamed-local-binding>"},
  {"%f-", &module_info_boot, "%f-"},
  {"sexpr-syntax-if-else", &module_info_syntax, "sexpr-syntax-if-else"},
  {"<closure-creation>", &module_info_ast_linearize, "<closure-creation>"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"objectify", &module_info_ast, "objectify"},
  {"isa?", &module_info_boot, "isa?"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"fix-let-types", &module_info_ast, "fix-let-types"},
  {"ds", &module_info_boot, "ds"},
  {"neg", &module_info_runtime, "neg"},
  {"$sexpr-begin-tag", &module_info_syntax, "$sexpr-begin-tag"},
  {"$sexpr-monitor-tag", &module_info_syntax, "$sexpr-monitor-tag"},
  {"empty?", &module_info_macros, "empty?"},
  {"%i?", &module_info_boot, "%i?"},
  {"%isa", &module_info_boot, "%isa"},
  {"<compile-time>", &module_info_ast, "<compile-time>"},
  {"%i&", &module_info_boot, "%i&"},
  {"assignment-reference", &module_info_ast, "assignment-reference"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"find-key", &module_info_runtime, "find-key"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"load", &YtopYload},
  {"prompt-for-command-expression", &YtopYprompt_for_command_expression},
  {"str-parse-in", &YtopYstr_parse_in},
  {"backtrace", &YtopYbacktrace},
  {"read-file", &YtopYread_file},
  {"str-parse", &YtopYstr_parse},
  {"eval-in", &YtopYeval_in},
  {"p2c-eval", &YtopYp2c_eval},
  {"parse", &YtopYparse},
  {"top", &YtopYtop},
  {"auto-run", &YtopYauto_run},
  {"str-eval", &YtopYstr_eval},
  {"do-stack-frames", &YtopYdo_stack_frames},
  {"str-eval-in", &YtopYstr_eval_in},
  {"run", &YtopYrun},
  {"top-in", &YtopYtop_in},
  {"p2c-run", &YtopYp2c_run},
  {"ast-run", &YtopYast_run},
  {"print-result-expression", &YtopYprint_result_expression},
  {"parse-in", &YtopYparse_in},
  {"save-image", &YtopYsave_image},
  {"<keyboard-interrupt>", &YtopYLkeyboard_interruptG},
  {"load-from", &YtopYload_from},
  {"do-restart", &YtopYdo_restart},
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"load", "load"},
  {"eval", "eval"},
  {"read-file", "read-file"},
  {"p2c-eval", "p2c-eval"},
  {"top", "top"},
  {"do-stack-frames", "do-stack-frames"},
  {"backtrace", "backtrace"},
  {"parse-in", "parse-in"},
  {"save-image", "save-image"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_top;
MODULE_INFO module_info_top = {
  "top",
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
extern void load_module_read (void);
extern void load_module_write (void);
extern void load_module_syntax (void);
extern void load_module_ast (void);
extern void load_module_ast_linearize (void);
extern void load_module_ast_eval (void);
extern void load_module_protoSsystem (void);

/* EXPRESSION: */

extern void load_module_top (void);

void load_module_top (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_runtime();
  load_module_read();
  load_module_write();
  load_module_syntax();
  load_module_ast();
  load_module_ast_linearize();
  load_module_ast_eval();
  load_module_protoSsystem();

  (P)YtopY___main_0___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
