/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: top */

DEF(YtopYstr_eval,"top","str-eval");
EXT(YastYfunction_free_setter,"ast","function-free-setter");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YruntimeYfab,"runtime","fab");
EXT(YsyntaxYsexpr_make_getter,"syntax","sexpr-make-getter");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YastYinit_ast,"ast","init-ast");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
EXT(YruntimeYempty,"runtime","empty");
EXT(YruntimeYvec,"runtime","vec");
EXT(YastYLdefinitionG,"ast","<definition>");
EXT(YLflatG,"boot","<flat>");
EXT(Yhead,"boot","head");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(Yfind_getter,"boot","find-getter");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YastYassignment_binding,"ast","assignment-binding");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YsyntaxYsexpr_define_classQ,"syntax","sexpr-define-class?");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YastYsignature_arity,"ast","signature-arity");
EXT(YastYLprogramsG,"ast","<programs>");
DEF(YtopYstr_parse_in,"top","str-parse-in");
EXT(YastYfab_p2c_module,"ast","fab-p2c-module");
EXT(YastYsignature_naryQ_setter,"ast","signature-nary?-setter");
EXT(YruntimeYpos,"runtime","pos");
EXT(Yobject_class,"boot","object-class");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YastYsignature_names_setter,"ast","signature-names-setter");
EXT(YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
EXT(YastYLraw_constantG,"ast","<raw-constant>");
EXT(YDmax_int,"boot","$max-int");
EXT(YruntimeYA,"runtime","+");
EXT(YruntimeYfrom,"runtime","from");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YastYfunction_body_setter,"ast","function-body-setter");
EXT(YastYLprogramG,"ast","<program>");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YprotoSsystemYfile_mtime,"proto/system","file-mtime");
EXT(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
DEF(YtopYload_from,"top","load-from");
EXT(YastYLmoduleG,"ast","<module>");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YastYLglobal_assignmentG,"ast","<global-assignment>");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYelt,"runtime","elt");
EXT(YastYapplication_tailQ,"ast","application-tail?");
EXT(YruntimeYstr,"runtime","str");
EXT(Ynul,"boot","nul");
EXT(YastYprogram_type_setter,"ast","program-type-setter");
EXT(YLfunG,"boot","<fun>");
EXT(YmacrosYEE,"macros","==");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YastYLconstantG,"ast","<constant>");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYmin,"runtime","min");
EXT(YPPmacro,"boot","%%macro");
EXT(YastYmonitor_test,"ast","monitor-test");
EXT(YastYast_evaluate,"ast","ast-evaluate");
EXT(YLlstG,"boot","<lst>");
EXT(YruntimeYalways,"runtime","always");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YprotoSsystemYos_binding_value_setter,"proto/system","os-binding-value-setter");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(YruntimeYL,"runtime","<");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YastYassignment_form_setter,"ast","assignment-form-setter");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YruntimeYS,"runtime","/");
EXT(YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
EXT(YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
EXT(YruntimeY1st,"runtime","1st");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YprotoSsystemYcreate_directory,"proto/system","create-directory");
EXT(YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
EXT(YastYfunction_data_refs,"ast","function-data-refs");
EXT(YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(YsyntaxYsexpr_slot_object,"syntax","sexpr-slot-object");
EXT(YLseqG,"boot","<seq>");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
EXT(YsyntaxYsexpr_slot_variable,"syntax","sexpr-slot-variable");
EXT(YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
EXT(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YastYLreal_referenceG,"ast","<real-reference>");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YastYLast_functionG,"ast","<ast-function>");
EXT(YruntimeYelt_or,"runtime","elt-or");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(Ytail,"boot","tail");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
EXT(YastYassignment_form,"ast","assignment-form");
EXT(YastYbinding_global_box,"ast","binding-global-box");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
EXT(YastYboundQ_reference,"ast","bound?-reference");
DEF(YtopYtop,"top","top");
EXT(YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
EXT(YastYfix_let_body_setter,"ast","fix-let-body-setter");
EXT(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
EXT(Yclass_slots,"boot","class-slots");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YprotoSsystemYproto_filename,"proto/system","proto-filename");
EXT(YLcolG,"boot","<col>");
EXT(YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YruntimeYneg,"runtime","neg");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(Yfab_class,"boot","fab-class");
EXT(YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
EXT(YastYfunction_self_recursiveQ,"ast","function-self-recursive?");
EXT(YprotoSsystemYc_filename,"proto/system","c-filename");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YastYLfix_letG,"ast","<fix-let>");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
EXT(YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YLsigG,"boot","<sig>");
EXT(YastYfunction_registers_setter,"ast","function-registers-setter");
EXT(Ytype_error,"boot","type-error");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YastYmodule_name_to_relpath,"ast","module-name-to-relpath");
DEF(YtopYparse_in,"top","parse-in");
EXT(YastYfunction_data_refs_setter,"ast","function-data-refs-setter");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
EXT(YastYLast_signatureG,"ast","<ast-signature>");
EXT(YastYLmodule_loaderG,"ast","<module-loader>");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
EXT(YLlocG,"boot","<loc>");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(YsyntaxYeval,"syntax","eval");
EXT(YastYsignature_specs_setter,"ast","signature-specs-setter");
EXT(YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YruntimeYpick,"runtime","pick");
DEF(YtopYeval_in,"top","eval-in");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(YastYbinding_locative,"ast","binding-locative");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YastYbinding_type,"ast","binding-type");
EXT(YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
DEF(YtopYLkeyboard_interruptG,"top","<keyboard-interrupt>");
EXT(Ytype_elts,"boot","type-elts");
EXT(YastYLruntime_assignmentG,"ast","<runtime-assignment>");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(YastYLast_methodG,"ast","<ast-method>");
EXT(YruntimeYsig,"runtime","sig");
EXT(YruntimeYread,"runtime","read");
EXT(YprotoSsystemYadd_tmp_path,"proto/system","add-tmp-path");
EXT(YprotoSsystemYhierarchical_components,"proto/system","hierarchical-components");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YastYobjectify_quotation,"ast","objectify-quotation");
EXT(YastYast_define_binding,"ast","ast-define-binding");
EXT(YwriteYwrite,"write","write");
EXT(YprotoSsystemYTproto_rootT,"proto/system","*proto-root*");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(YastYreference_called_functionQ,"ast","reference-called-function?");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YLfloG,"boot","<flo>");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YPisa,"boot","%isa");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YastYfunction_temporaries,"ast","function-temporaries");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
EXT(YastYdo_named_static_global_bindings,"ast","do-named-static-global-bindings");
EXT(YastYLalternativeG,"ast","<alternative>");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
EXT(Ysig_value,"boot","sig-value");
EXT(YruntimeYin,"runtime","in");
EXT(Yclass_name,"boot","class-name");
EXT(YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
EXT(YastYapplication_function,"ast","application-function");
EXT(YastYglobal_box_value_setter,"ast","global-box-value-setter");
EXT(YastYsignature_names,"ast","signature-names");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
EXT(YastYmonitor_type,"ast","monitor-type");
EXT(YastYfree_implemented_foreign_bindings,"ast","free-implemented-foreign-bindings");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YLnumG,"boot","<num>");
EXT(YLintG,"boot","<int>");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYall2Q,"runtime","all2?");
EXT(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YastYconstant_value,"ast","constant-value");
EXT(YastYLmonitorG,"ast","<monitor>");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
EXT(YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
EXT(YastYfix_let_body,"ast","fix-let-body");
EXT(YruntimeYroundS,"runtime","round/");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YastYLbotG,"ast","<bot>");
EXT(Yfun_value,"boot","fun-value");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YwriteYdisplay,"write","display");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YastYbinding_dottedQ,"ast","binding-dotted?");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YmacrosYpair,"macros","pair");
EXT(YastYassignment_reference,"ast","assignment-reference");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YruntimeYash,"runtime","ash");
EXT(YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
EXT(YsyntaxYsexpr_isa_parents,"syntax","sexpr-isa-parents");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYdel,"runtime","del");
EXT(YastYobjectify,"ast","objectify");
EXT(YastYcompile_time_program,"ast","compile-time-program");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeY_,"runtime","-");
EXT(YastYLboundQG,"ast","<bound?>");
EXT(YastYload_module,"ast","load-module");
EXT(YruntimeYabs,"runtime","abs");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YastYfind_binding,"ast","find-binding");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YastYLbind_exitG,"ast","<bind-exit>");
EXT(YastYfunction_source_setter,"ast","function-source-setter");
EXT(Ysig_names,"boot","sig-names");
EXT(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(YastYLargumentsG,"ast","<arguments>");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YruntimeYmax,"runtime","max");
EXT(YPslot,"boot","%slot");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YprotoSsystemYcomponents_parent_directory,"proto/system","components-parent-directory");
EXT(YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
EXT(YprotoSsystemYcomponents_to_pathname,"proto/system","components-to-pathname");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YruntimeYT,"runtime","*");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(YLlogG,"boot","<log>");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YwriteYwriteln,"write","writeln");
EXT(YruntimeYsub,"runtime","sub");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
EXT(YastYLregular_applicationG,"ast","<regular-application>");
EXT(YastYfix_let_types_setter,"ast","fix-let-types-setter");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YastYset_module_environments,"ast","set-module-environments");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YastYfunction_signature,"ast","function-signature");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(YLslotG,"boot","<slot>");
DEF(YtopYp2c_eval,"top","p2c-eval");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
EXT(YastYfind_environment_module,"ast","find-environment-module");
EXT(YPsymbols,"boot","%symbols");
EXT(Ynot,"boot","not");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
EXT(YastYLmodule_binding_referenceG,"ast","<module-binding-reference>");
EXT(YLtupG,"boot","<tup>");
EXT(YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YastYsignature_value,"ast","signature-value");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_parents,"boot","class-parents");
EXT(YprotoSsystemYTobj_extensionT,"proto/system","*obj-extension*");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YastYLast_genericG,"ast","<ast-generic>");
EXT(YastYbinding_kind,"ast","binding-kind");
EXT(YsyntaxYsexpr_slot_init,"syntax","sexpr-slot-init");
EXT(YsyntaxYDsexpr_slot_tag,"syntax","$sexpr-slot-tag");
EXT(YLanyG,"boot","<any>");
DEF(YtopYprompt_for_command_expression,"top","prompt-for-command-expression");
EXT(YruntimeYkeys,"runtime","keys");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
EXT(YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(YastYfunction_temporaries_setter,"ast","function-temporaries-setter");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YastYmodule_exports,"ast","module-exports");
EXT(YastYbinding_mutableQ,"ast","binding-mutable?");
EXT(Ytype_class,"boot","type-class");
EXT(YastYmodule_target_environment,"ast","module-target-environment");
EXT(YastYLimmediate_constantG,"ast","<immediate-constant>");
EXT(YastYfunction_binding,"ast","function-binding");
EXT(YastYlocals_body,"ast","locals-body");
EXT(YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
EXT(YastYfunction_body,"ast","function-body");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YruntimeYformat,"runtime","format");
EXT(YLunionG,"boot","<union>");
EXT(YruntimeYLE,"runtime","<=");
DEF(YtopYbacktrace,"top","backtrace");
EXT(YruntimeYlen,"runtime","len");
EXT(YastYapplication_binding,"ast","application-binding");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YprotoSsystemYcomponents_basename,"proto/system","components-basename");
EXT(Yslot_value,"boot","slot-value");
EXT(YastYLbindingG,"ast","<binding>");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YprotoSsystemYadd_build_path,"proto/system","add-build-path");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YastYbinding_name,"ast","binding-name");
EXT(YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
EXT(YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
EXT(Yerror,"boot","error");
EXT(YastYLpassive_programG,"ast","<passive-program>");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(YprotoSsystemYfile_type,"proto/system","file-type");
EXT(YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YastYLfree_environmentG,"ast","<free-environment>");
EXT(YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
EXT(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
EXT(YastYsignature_bindings_setter,"ast","signature-bindings-setter");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
EXT(YastYbinding_index_setter,"ast","binding-index-setter");
EXT(YastYfunction_bindings,"ast","function-bindings");
EXT(YruntimeYany2Q,"runtime","any2?");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
EXT(YastYruntime_environment,"ast","runtime-environment");
EXT(YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YruntimeYlow_elt_setter,"runtime","low-elt-setter");
EXT(YruntimeYfill,"runtime","fill");
EXT(YwriteYTmax_print_depthT,"write","*max-print-depth*");
DEF(YtopYload,"top","load");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
EXT(YruntimeYNE,"runtime","~=");
EXT(YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
EXT(YastYLlocalsG,"ast","<locals>");
EXT(YprotoSsystemYprobe_directory,"proto/system","probe-directory");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YLsingletonG,"boot","<singleton>");
EXT(Yunexec,"boot","unexec");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YastYmonitor_handler,"ast","monitor-handler");
EXT(YprotoSsystemYlabel_components,"proto/system","label-components");
EXT(YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YprotoSsystemYTexe_extensionT,"proto/system","*exe-extension*");
EXT(YastYmodule_binding,"ast","module-binding");
EXT(YastYsignature_bindings,"ast","signature-bindings");
EXT(Ynil,"boot","nil");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YprotoSsystemYTc_extensionT,"proto/system","*c-extension*");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YsyntaxYsexpr_operator,"syntax","sexpr-operator");
EXT(YruntimeYpop,"runtime","pop");
EXT(YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
DEF(YtopYtop_in,"top","top-in");
EXT(YsyntaxYsexpr_operands,"syntax","sexpr-operands");
EXT(YsyntaxYsexpr_isa_init_slots,"syntax","sexpr-isa-init-slots");
EXT(YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
EXT(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
EXT(Ylst,"boot","lst");
EXT(YastYconstant_index_setter,"ast","constant-index-setter");
EXT(YastYLcomputed_programG,"ast","<computed-program>");
EXT(YastYprogram_register_setter,"ast","program-register-setter");
EXT(YastYreference_binding,"ast","reference-binding");
EXT(YruntimeYalter,"runtime","alter");
EXT(YastYfunction_signature_setter,"ast","function-signature-setter");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(YastYfunction_index_setter,"ast","function-index-setter");
DEF(YtopYprint_result_expression,"top","print-result-expression");
EXT(YruntimeYtL,"runtime","t<");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
EXT(YruntimeYas,"runtime","as");
EXT(YastYfunction_source,"ast","function-source");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YsyntaxYsexpr_monitor_expand,"syntax","sexpr-monitor-expand");
EXT(YastYfunction_self_recursiveQ_setter,"ast","function-self-recursive?-setter");
EXT(YprotoSsystemYos_name,"proto/system","os-name");
EXT(YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
EXT(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YmacrosYnapply,"macros","napply");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YprotoSsystemYfile_existsQ,"proto/system","file-exists?");
EXT(YmacrosYtup,"macros","tup");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YastYobjectify_signature,"ast","objectify-signature");
EXT(YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
EXT(YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
EXT(YastYLcompile_timeG,"ast","<compile-time>");
EXT(YprotoSsystemYexe_filename,"proto/system","exe-filename");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YastYbinding_inferred_type,"ast","binding-inferred-type");
EXT(YastYmonitor_info,"ast","monitor-info");
EXT(YastYbinding_dottedQ_setter,"ast","binding-dotted?-setter");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YastYbinding_module_name,"ast","binding-module-name");
EXT(YastYfree_environment,"ast","free-environment");
EXT(YruntimeYlow_elt,"runtime","low-elt");
DEF(YtopYsave_image,"top","save-image");
EXT(YastYbinding_index,"ast","binding-index");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YwriteYTmax_print_lengthT,"write","*max-print-length*");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YastYLlocal_referenceG,"ast","<local-reference>");
EXT(YreadYDchar_long_names,"read","$char-long-names");
EXT(YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YruntimeYlist,"runtime","list");
EXT(YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
EXT(YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
EXT(YPdefine_method,"boot","%define-method");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YastYfunction_value,"ast","function-value");
EXT(YPsnul,"boot","%snul");
EXT(YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
EXT(YmacrosYcat,"macros","cat");
EXT(YastYLmodule_bindingG,"ast","<module-binding>");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYtE,"runtime","t=");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YastYapplication_knownQ,"ast","application-known?");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YPvnul,"boot","%vnul");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YastYenvironment_module,"ast","environment-module");
EXT(YruntimeYG,"runtime",">");
EXT(YastYfunction_debug_name,"ast","function-debug-name");
EXT(YprotoSsystemYpathname_to_components,"proto/system","pathname-to-components");
EXT(YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
EXT(YastYlocals_functions,"ast","locals-functions");
EXT(YastYfix_let_arguments,"ast","fix-let-arguments");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YruntimeYpush,"runtime","push");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YastYLapplicationG,"ast","<application>");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YastYfix_let_types,"ast","fix-let-types");
EXT(YastYbinding_info,"ast","binding-info");
EXT(YruntimeYlast,"runtime","last");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YprotoSsystemYprocess_id,"proto/system","process-id");
DEF(YtopYdo_stack_frames,"top","do-stack-frames");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
EXT(YprotoSsystemYadd_src_path,"proto/system","add-src-path");
EXT(YruntimeYzeroQ,"runtime","zero?");
DEF(YtopYstr_parse,"top","str-parse");
EXT(YsyntaxYsexpr_make_setter,"syntax","sexpr-make-setter");
EXT(YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
EXT(Ytype_object,"boot","type-object");
EXT(YDmin_int,"boot","$min-int");
EXT(YastYenv_object_name,"ast","env-object-name");
EXT(YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
EXT(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
EXT(YruntimeYtA,"runtime","t+");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(YLclassG,"boot","<class>");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YsyntaxYsexpr_define_class_parents,"syntax","sexpr-define-class-parents");
EXT(YastYreference_frame_number,"ast","reference-frame-number");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(YruntimeYrev,"runtime","rev");
DEF(YtopYread_file,"top","read-file");
EXT(YruntimeYGE,"runtime",">=");
EXT(YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
EXT(YprotoSsystemYobj_filename,"proto/system","obj-filename");
EXT(YastYprobe_module,"ast","probe-module");
EXT(YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YastYLglobal_boxG,"ast","<global-box>");
EXT(YastYload_in,"ast","load-in");
EXT(YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
EXT(YastYprogram_type,"ast","program-type");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YLtypeG,"boot","<type>");
EXT(YastYenvironment_uses_modules,"ast","environment-uses-modules");
EXT(YastYfunction_index,"ast","function-index");
EXT(YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
EXT(YastYmodule_name,"ast","module-name");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YastYlocals_bindings,"ast","locals-bindings");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YastYapplication_knownQ_setter,"ast","application-known?-setter");
EXT(YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
EXT(YruntimeYE,"runtime","=");
DEF(YtopYstr_eval_in,"top","str-eval-in");
EXT(YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
EXT(YastYbinding_info_setter,"ast","binding-info-setter");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLgenG,"boot","<gen>");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YsyntaxYsexpr_make_setter_name,"syntax","sexpr-make-setter-name");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(Yslot_init,"boot","slot-init");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YastYfunction_registers,"ast","function-registers");
EXT(Yobject_parents,"boot","object-parents");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YastYbinding_value,"ast","binding-value");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YsyntaxYDsexpr_define_class_tag,"syntax","$sexpr-define-class-tag");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YprotoSsystemYcomponents_last,"proto/system","components-last");
EXT(Yobject_slots,"boot","object-slots");
EXT(YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
EXT(YastYbinding_inferred_type_setter,"ast","binding-inferred-type-setter");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YastYsignature_value_setter,"ast","signature-value-setter");
EXT(YastYLfab_listG,"ast","<fab-list>");
EXT(YLsymG,"boot","<sym>");
EXT(Ysym_name,"boot","sym-name");
DEF(YtopYparse,"top","parse");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YastYfunction_naryQ,"ast","function-nary?");
EXT(YruntimeYround,"runtime","round");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YruntimeYdo2,"runtime","do2");
EXT(YastYas_lst,"ast","as-lst");
EXT(YprotoSsystemYparent_directory,"proto/system","parent-directory");
EXT(Yfind_setter,"boot","find-setter");
EXT(YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
EXT(YastYmodule_syntax_environment,"ast","module-syntax-environment");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YastYfunction_free,"ast","function-free");
EXT(YastYsequentialize,"ast","sequentialize");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(YprotoSsystemYos_binding_value,"proto/system","os-binding-value");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YastYinstall_initial_bindings,"ast","install-initial-bindings");
DEF(YtopYdo_restart,"top","do-restart");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
EXT(YruntimeYdefault,"runtime","default");
EXT(YastYLsequentialG,"ast","<sequential>");
EXT(YastYapplication_arguments,"ast","application-arguments");
EXT(YastYconstant_index,"ast","constant-index");
EXT(YastYprogram_register,"ast","program-register");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YastYLassignmentG,"ast","<assignment>");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YastYfunction_debug_name_setter,"ast","function-debug-name-setter");
EXT(YruntimeYassq,"runtime","assq");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YruntimeYfab_map,"runtime","fab-map");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
EXT(YruntimeYdo,"runtime","do");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
EXT(YastYalternative_consequent,"ast","alternative-consequent");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
EXT(YLvecG,"boot","<vec>");
EXT(YprotoSsystemYTpath_separatorT,"proto/system","*path-separator*");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
EXT(YastYalternative_condition,"ast","alternative-condition");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YprotoSsystemYTproto_extensionT,"proto/system","*proto-extension*");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YsyntaxYsexpr_isa_slot_inits,"syntax","sexpr-isa-slot-inits");
EXT(YruntimeYout,"runtime","out");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YastYLreferenceG,"ast","<reference>");
EXT(Yfun_names,"boot","fun-names");
EXT(YLmetG,"boot","<met>");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(Yhead_setter,"boot","head-setter");
EXT(YastYsignature_arity_setter,"ast","signature-arity-setter");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YastYbinding_native_toQ,"ast","binding-native-to?");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_43);
DEFLIT(lit_57);
DEFLIT(lit_32);
DEFLIT(lit_69);
DEFLIT(lit_14);
DEFLIT(lit_54);
DEFLIT(lit_45);
DEFLIT(lit_74);
DEFLIT(lit_25);
DEFLIT(lit_22);
DEFLIT(lit_0);
DEFLIT(lit_39);
DEFLIT(lit_29);
DEFLIT(lit_53);
DEFLIT(lit_63);
DEFLIT(lit_66);
DEFLIT(lit_62);
DEFLIT(lit_60);
DEFLIT(lit_1);
DEFLIT(lit_61);
DEFLIT(lit_19);
DEFLIT(lit_48);
DEFLIT(lit_79);
DEFLIT(lit_3);
DEFLIT(lit_78);
DEFLIT(lit_30);
DEFLIT(lit_70);
DEFLIT(lit_73);
DEFLIT(lit_41);
DEFLIT(lit_59);
DEFLIT(lit_34);
DEFLIT(lit_47);
DEFLIT(lit_65);
DEFLIT(lit_10);
DEFLIT(lit_9);
DEFLIT(lit_18);
DEFLIT(lit_6);
DEFLIT(lit_50);
DEFLIT(lit_38);
DEFLIT(lit_11);
DEFLIT(lit_7);
DEFLIT(lit_56);
DEFLIT(lit_51);
DEFLIT(lit_76);
DEFLIT(lit_13);
DEFLIT(lit_17);
DEFLIT(lit_58);
DEFLIT(lit_28);
DEFLIT(lit_46);
DEFLIT(lit_75);
DEFLIT(lit_2);
DEFLIT(lit_71);
DEFLIT(lit_77);
DEFLIT(lit_37);
DEFLIT(lit_24);
DEFLIT(lit_68);
DEFLIT(lit_44);
DEFLIT(lit_4);
DEFLIT(lit_21);
DEFLIT(lit_36);
DEFLIT(lit_40);
DEFLIT(lit_31);
DEFLIT(lit_8);
DEFLIT(lit_26);
DEFLIT(lit_55);
DEFLIT(lit_72);
DEFLIT(lit_5);
DEFLIT(lit_12);
DEFLIT(lit_67);
DEFLIT(lit_64);
DEFLIT(lit_23);
DEFLIT(lit_20);
DEFLIT(lit_16);
DEFLIT(lit_49);
DEFLIT(lit_33);
DEFLIT(lit_15);
DEFLIT(lit_52);
DEFLIT(lit_42);
DEFLIT(lit_27);
DEFLIT(lit_35);

/* FUNCTIONS: */

LOCFOR(fun_parse_in_0);
LOCFOR(fun_parse_1);
LOCFOR(fun_str_parse_in_2);
LOCFOR(fun_str_parse_3);
LOCFOR(fun_eval_in_4);
LOCFOR(fun_eval_5);
LOCFOR(fun_str_eval_in_6);
LOCFOR(fun_str_eval_7);
LOCFOR(fun_loop_8);
LOCFOR(fun_9);
LOCFOR(fun_read_file_10);
LOCFOR(fun_load_in_11);
LOCFOR(fun_load_12);
LOCFOR(fun_load_from_13);
LOCFOR(fun_prompt_for_command_expression_14);
LOCFOR(fun_print_result_expression_15);
LOCFOR(fun_do_stack_frames_16);
LOCFOR(fun_17);
LOCFOR(fun_backtrace_18);
FUNFOR(Ykeyboard_interrupt);
FUNFOR(YtopYdo_restart);
LOCFOR(fun_ast_run_21);
LOCFOR(fun_p2c_run_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_x_1532_27);
LOCFOR(fun_28);
LOCFOR(fun_x_1534_29);
LOCFOR(fun_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_loop_34);
LOCFOR(fun_35);
LOCFOR(fun_top_in_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_loop_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
LOCFOR(fun_top_43);
LOCFOR(fun_44);
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
  T1 = CALL1(1,CHKREF(YreadYread_from_string),s_);
  T0 = CALL3(1,CHKREF(YastYobjectify),T1,ct_env_,YPfalse);
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
  T1 = CALL1(1,CHKREF(YastYruntime_environment),modname_);
  T0 = CALL2(1,CHKREF(YtopYparse_in),s_,T1);
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
  T1 = CALL2(1,CHKREF(YtopYparse_in),s_,ct_env_);
  T0 = CALL3(1,CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_8),T1);
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
  T1 = CALL1(1,CHKREF(YastYruntime_environment),modname_);
  T0 = CALL2(1,CHKREF(YtopYstr_parse_in),s_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_in_4) {
  P x_,ct_env_;
  P eF2376;
  P oF2375;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,CHKREF(YastYobjectify),x_,ct_env_,YPfalse);
  oF2375 = T1;
  T3 = CALL1(1,CHKREF(YastYast_evaluate),oF2375);
  eF2376 = T3;
  T2 = eF2376;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_5) {
  P x_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,CHKREF(YastYruntime_environment),modname_);
  T0 = CALL2(1,CHKREF(YtopYeval_in),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_eval_in_6) {
  P x_,ct_env_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T2 = CALL1(1,CHKREF(YreadYread_from_string),x_);
  T1 = CALL2(1,CHKREF(YtopYeval_in),T2,ct_env_);
  T0 = CALL1(1,CHKREF(YwriteYwrite_to_string),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_eval_7) {
  P x_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,CHKREF(YastYruntime_environment),modname_);
  T0 = CALL2(1,CHKREF(YtopYstr_eval_in),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_8) {
  P forms_;
  P xF2377;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(forms_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYread),FREEREF(0));
  xF2377 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYeof_objectQ),xF2377);
  if (T3 != YPfalse) {
    T5 = CALL1(1,CHKREF(YruntimeYrevX),forms_);
    T4 = CALL1(1,CHKREF(YsyntaxYsexpr_sequence_Gbegin),T5);
    T2 = T4;
  } else {
    T7 = CALL2(1,CHKREF(YmacrosYpair),xF2377,forms_);
    a1 = T7;
    forms_ = a1;
    goto loop;
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_9) {
  P port_;
  P loopF2378;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_8,2);
  loopF2378 = T1;
  FUNINIT(loopF2378, 2,port_,loopF2378);
  T2 = CALL1(0,loopF2378,Ynil);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_read_file_10) {
  P filename_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = fun_9;
  T0 = CALL2(1,CHKREF(YruntimeYcall_with_input_file),filename_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_in_11) {
  P filename_,ct_env_;
  P oF2380;
  P xF2379;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,CHKREF(YtopYread_file),filename_);
  xF2379 = T1;
  T3 = CALL3(1,CHKREF(YastYobjectify),xF2379,ct_env_,YPfalse);
  oF2380 = T3;
  T4 = CALL1(1,CHKREF(YastYast_evaluate),oF2380);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_12) {
  P filename_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,CHKREF(YastYruntime_environment),modname_);
  T0 = CALL2(1,CHKREF(YastYload_in),filename_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_from_13) {
  P name_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,CHKREF(YprotoSsystemYproto_filename),name_);
  T0 = CALL2(1,CHKREF(YtopYload),T1,modname_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_prompt_for_command_expression_14) {
  P env_,level_,prompt_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(prompt_, 2);
loop:
  T1 = CALL1(1,CHKREF(YastYfind_environment_module),env_);
  T0 = CALL1(1,CHKREF(YastYmodule_name),T1);
  CALLN(1,CHKREF(YruntimeYformat),5,CHKREF(YruntimeYout),CHKREF(lit_28),T0,level_,prompt_);
  CALL1(1,CHKREF(YruntimeYforce_output),CHKREF(YruntimeYout));
  T2 = CALL1(1,CHKREF(YruntimeYread),CHKREF(YruntimeYin));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_print_result_expression_15) {
  P env_,level_,label_,result_;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(label_, 2);
  ARG(result_, 3);
loop:
  T1 = CALL1(1,CHKREF(YastYfind_environment_module),env_);
  T0 = CALL1(1,CHKREF(YastYmodule_name),T1);
  CALLN(1,CHKREF(YruntimeYformat),5,CHKREF(YruntimeYout),CHKREF(lit_32),T0,level_,label_);
  T2 = CALL2(1,CHKREF(YwriteYwrite),CHKREF(YruntimeYout),result_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_do_stack_frames_16) {
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

FUNCODEDEF(fun_17) {
  P f_,args_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(args_, 1);
loop:
  T2 = CALL2(1,CHKREF(YisaQ),f_,CHKREF(YLgenG));
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = BOXVAL(FREEREF(0));
    CALLN(1,CHKREF(YruntimeYformat),5,CHKREF(YruntimeYout),CHKREF(lit_38),T3,f_,args_);
    T6 = BOXVAL(FREEREF(0));
    T5 = CALL2(1,CHKREF(YruntimeYA),T6,YPint((P)1));
    T4 = BOXVAL(FREEREF(0)) = T5;
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_backtrace_18) {
  P numF2381;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  numF2381 = YPint((P)0);
  numF2381 = BOXFAB(numF2381);
  T3 = FUNFAB(fun_17,1,numF2381);
  T2 = CALL1(1,CHKREF(YtopYdo_stack_frames),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ykeyboard_interrupt) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,CHKREF(YruntimeYsig),CHKREF(YtopYLkeyboard_interruptG));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YtopYdo_restart) {
  P restarts_,n_;
  P tmpF2382;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(restarts_, 0);
  ARG(n_, 1);
loop:
  T0 = CALL1(1,CHKREF(Ynot),restarts_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,CHKREF(Yerror),CHKREF(lit_44));
  } else {
  }
  T4 = CALL2(1,CHKREF(YruntimeYG),n_,YPint((P)0));
  tmpF2382 = T4;
  if (tmpF2382 != YPfalse) {
    T7 = CALL1(1,CHKREF(YruntimeYlen),restarts_);
    T6 = CALL2(1,CHKREF(YruntimeYLE),n_,T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  T2 = CALL1(1,CHKREF(Ynot),T3);
  if (T2 != YPfalse) {
    T8 = CALL1(1,CHKREF(Yerror),CHKREF(lit_45));
  } else {
  }
  T11 = CALL2(1,CHKREF(YruntimeY_),n_,YPint((P)1));
  T10 = CALL2(1,CHKREF(YruntimeYelt),restarts_,T11);
  T9 = CALL3(1,CHKREF(YruntimeYinvoke_handler_interactively),T10,CHKREF(YruntimeYin),CHKREF(YruntimeYout));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_ast_run_21) {
  P form_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(form_, 0);
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL3(1,CHKREF(YastYobjectify),form_,T2,YPfalse);
  T0 = CALL1(1,CHKREF(YastYast_evaluate),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_p2c_run_22) {
  P form_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(form_, 0);
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(1,CHKREF(YastYenvironment_module),T3);
  T1 = CALL1(1,CHKREF(YastYmodule_name),T2);
  T0 = CALL2(1,CHKREF(YtopYp2c_eval),form_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_23) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_24) {
  P c_,r_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL2(1,CHKREF(YisaQ),c_,CHKREF(YtopYLkeyboard_interruptG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_57));
  } else {
    T3 = CALL1(1,CHKREF(YruntimeYdescribe_condition),c_);
    T2 = CALL3(1,CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_58),T3);
  }
  T4 = CALL2(1,CHKREF(YruntimeYA),FREEREF(0),YPint((P)1));
  T5 = BOXVAL(FREEREF(3));
  CALLN(1,CHKREF(YtopYtop_in),5,T4,FREEREF(1),FREEREF(2),YPtrue,T5);
  T6 = CALL1(1,FREEREF(4),YPfalse);
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_25) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_26) {
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

FUNCODEDEF(fun_x_1532_27) {
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

FUNCODEDEF(fun_28) {
  P return_;
  P x_1531F2387;
  P x_1531F2386;
  P nF2385;
  P x_1531F2384;
  P x_1532F2383;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1532_27,1);
  x_1532F2383 = T1;
  FUNINIT(x_1532F2383, 1,return_);
  x_1531F2384 = FREEREF(0);
  nF2385 = YPfalse;
  nF2385 = BOXFAB(nF2385);
  T5 = CALL2(1,CHKREF(YisaQ),x_1531F2384,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1531F2384,CHKREF(lit_69),x_1532F2383);
    x_1531F2386 = T7;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1531F2386,x_1532F2383);
    BOXVAL(nF2385) = T9;
    T10 = CALL1(1,CHKREF(Ytail),x_1531F2386);
    x_1531F2387 = T10;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1531F2387,x_1532F2383);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1532F2383,CHKREF(lit_70),x_1531F2384);
  }
  T3 = YPtrue;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1534_29) {
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

FUNCODEDEF(fun_30) {
  P return_;
  P x_1533F2392;
  P x_1533F2391;
  P mF2390;
  P x_1533F2389;
  P x_1534F2388;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1534_29,1);
  x_1534F2388 = T1;
  FUNINIT(x_1534F2388, 1,return_);
  x_1533F2389 = FREEREF(0);
  mF2390 = YPfalse;
  mF2390 = BOXFAB(mF2390);
  T5 = CALL2(1,CHKREF(YisaQ),x_1533F2389,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1533F2389,CHKREF(lit_72),x_1534F2388);
    x_1533F2391 = T7;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1533F2391,x_1534F2388);
    BOXVAL(mF2390) = T9;
    T10 = CALL1(1,CHKREF(Ytail),x_1533F2391);
    x_1533F2392 = T10;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1533F2392,x_1534F2388);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1534F2388,CHKREF(lit_70),x_1533F2389);
  }
  T3 = YPtrue;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_31) {
  P new_envF2395;
  P tmpF2394;
  P formF2393;
  P T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  CALL1(1,CHKREF(YruntimeYnewline),CHKREF(YruntimeYout));
  T0 = BOXVAL(FREEREF(0));
  if (T0 != YPfalse) {
    CALL2(1,CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_60));
    T1 = CALL2(1,CHKREF(YruntimeYlist_handlers),CHKREF(YruntimeYLrestartG),CHKREF(YruntimeYout));
    BOXVAL(FREEREF(1)) = T1;
    T2 = BOXVAL(FREEREF(0)) = YPfalse;
  } else {
  }
  T5 = BOXVAL(FREEREF(2));
  T4 = CALL3(1,CHKREF(YtopYprompt_for_command_expression),T5,FREEREF(3),CHKREF(lit_61));
  formF2393 = T4;
  T8 = CALL2(1,CHKREF(YruntimeYE),formF2393,CHKREF(lit_62));
  tmpF2394 = T8;
  if (tmpF2394 != YPfalse) {
    T9 = tmpF2394;
  } else {
    T11 = CALL0(1,CHKREF(YruntimeYeof_object));
    T10 = CALL2(1,CHKREF(YruntimeYE),formF2393,T11);
    T9 = T10;
  }
  T7 = T9;
  if (T7 != YPfalse) {
    T12 = CALL1(1,FREEREF(4),YPfalse);
    T6 = T12;
  } else {
    T14 = CALL2(1,CHKREF(YruntimeYE),formF2393,CHKREF(lit_63));
    if (T14 != YPfalse) {
      T15 = CALL1(1,FREEREF(5),YPfalse);
      T13 = T15;
    } else {
      T17 = CALL2(1,CHKREF(YruntimeYE),formF2393,CHKREF(lit_64));
      if (T17 != YPfalse) {
        T18 = CALL2(1,CHKREF(YruntimeYlist_handlers),CHKREF(YruntimeYLconditionG),CHKREF(YruntimeYout));
        T16 = T18;
      } else {
        T20 = CALL2(1,CHKREF(YruntimeYE),formF2393,CHKREF(lit_65));
        if (T20 != YPfalse) {
          T21 = CALL2(1,CHKREF(YruntimeYlist_handlers),CHKREF(YruntimeYLrestartG),CHKREF(YruntimeYout));
          T19 = T21;
        } else {
          T24 = FUNFAB(fun_28,1,formF2393);
          T23 = with_exit(T24);
          if (T23 != YPfalse) {
            T26 = BOXVAL(FREEREF(1));
            T27 = CALL1(1,CHKREF(YruntimeY2nd),formF2393);
            T25 = CALL2(1,CHKREF(YtopYdo_restart),T26,T27);
            T22 = T25;
          } else {
            T30 = FUNFAB(fun_30,1,formF2393);
            T29 = with_exit(T30);
            if (T29 != YPfalse) {
              T33 = CALL1(1,CHKREF(YruntimeY2nd),formF2393);
              T32 = CALL1(1,CHKREF(YastYruntime_environment),T33);
              new_envF2395 = T32;
              T34 = BOXVAL(FREEREF(2)) = new_envF2395;
              T31 = T34;
              T28 = T31;
            } else {
              T36 = CALL2(1,CHKREF(YruntimeYE),formF2393,CHKREF(lit_73));
              if (T36 != YPfalse) {
                T37 = BOXVAL(FREEREF(6)) = FREEREF(7);
                T35 = T37;
              } else {
                T39 = CALL2(1,CHKREF(YruntimeYE),formF2393,CHKREF(lit_74));
                if (T39 != YPfalse) {
                  T40 = BOXVAL(FREEREF(6)) = FREEREF(8);
                  T38 = T40;
                } else {
                  if (YPtrue != YPfalse) {
                    T43 = BOXVAL(FREEREF(2));
                    T45 = BOXVAL(FREEREF(6));
                    T44 = CALL1(1,T45,formF2393);
                    T42 = CALLN(1,CHKREF(YtopYprint_result_expression),4,T43,FREEREF(3),CHKREF(lit_75),T44);
                    T41 = T42;
                  } else {
                    T41 = YPfalse;
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

FUNCODEDEF(fun_32) {
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T2 = (P)YPpair(CHKREF(YLsimple_handler_infoG),Ynil);
  T4 = (P)YPpair(CHKREF(Yhandler_info_arguments),Ynil);
  T3 = (P)YPpair(CHKREF(Yhandler_info_message),T4);
  T7 = CALL1(1,CHKREF(Ylst),FREEREF(0));
  T6 = (P)YPpair(T7,Ynil);
  T5 = (P)YPpair(CHKREF(lit_59),T6);
  T1 = CALL3(1,CHKREF(YPisa),T2,T3,T5);
  T8 = fun_25;
  T9 = FUNFAB(fun_26,1,FREEREF(1));
  T10 = FUNFAB(fun_31,9,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(0),FREEREF(5),FREEREF(6),FREEREF(7),FREEREF(8),FREEREF(9));
  T0 = CALLN(1,YruntimeYPwith_monitor,5,CHKREF(YruntimeYLrestartG),T1,T8,T9,T10);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  P continue_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(continue_, 0);
loop:
  T1 = fun_23;
  T2 = FUNFAB(fun_24,5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),continue_);
  T3 = FUNFAB(fun_32,10,FREEREF(0),continue_,FREEREF(4),FREEREF(5),FREEREF(3),FREEREF(2),FREEREF(6),FREEREF(7),FREEREF(8),FREEREF(9));
  T0 = CALLN(1,YruntimeYPwith_monitor,5,CHKREF(YruntimeYLconditionG),CHKREF(YruntimeYDdefault_handler_info),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_34) {
  P T1,T0;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_33,10,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6),FREEREF(7),FREEREF(8),FREEREF(9));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_35) {
  P blow_;
  P loopF2396;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_34,11);
  loopF2396 = T1;
  FUNINIT(loopF2396, 11,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),blow_,FREEREF(6),FREEREF(7),FREEREF(8),loopF2396);
  T2 = CALL0(0,loopF2396);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_top_in_36) {
  P level_,top_,quit_,show_restartsQ_,ct_env_;
  P evalF2400;
  P restartsF2399;
  P p2c_runF2398;
  P ast_runF2397;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
  T3 = FUNSHELL(0,fun_ast_run_21,1);
  ast_runF2397 = T3;
  T4 = FUNSHELL(0,fun_p2c_run_22,1);
  p2c_runF2398 = T4;
  FUNINIT(ast_runF2397, 1,ct_env_);
  FUNINIT(p2c_runF2398, 1,ct_env_);
  restartsF2399 = YPfalse;
  restartsF2399 = BOXFAB(restartsF2399);
  evalF2400 = ast_runF2397;
  evalF2400 = BOXFAB(evalF2400);
  T10 = FUNFAB(fun_35,9,level_,top_,quit_,ct_env_,show_restartsQ_,restartsF2399,evalF2400,p2c_runF2398,ast_runF2397);
  T9 = with_exit(T10);
  T7 = T9;
  T5 = T7;
  T2 = T5;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_37) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_38) {
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

FUNCODEDEF(fun_39) {
  P top_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(top_, 0);
loop:
  T1 = CALL1(1,CHKREF(YastYruntime_environment),FREEREF(1));
  T0 = CALLN(1,CHKREF(YtopYtop_in),5,YPint((P)0),top_,FREEREF(0),YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_40) {
  P T1,T0;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_39,2,FREEREF(0),FREEREF(1));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_41) {
  P loopF2401;
  P T2,T1,T0;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_loop_40,3);
  loopF2401 = T1;
  FUNINIT(loopF2401, 3,FREEREF(0),FREEREF(1),loopF2401);
  T2 = CALL0(0,loopF2401);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P quit_;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(quit_, 0);
loop:
  T2 = (P)YPpair(CHKREF(YLsimple_handler_infoG),Ynil);
  T4 = (P)YPpair(CHKREF(Yhandler_info_arguments),Ynil);
  T3 = (P)YPpair(CHKREF(Yhandler_info_message),T4);
  T7 = CALL0(1,CHKREF(Ylst));
  T6 = (P)YPpair(T7,Ynil);
  T5 = (P)YPpair(CHKREF(lit_76),T6);
  T1 = CALL3(1,CHKREF(YPisa),T2,T3,T5);
  T8 = fun_37;
  T9 = FUNFAB(fun_38,1,quit_);
  T10 = FUNFAB(fun_41,2,quit_,FREEREF(0));
  T0 = CALLN(1,YruntimeYPwith_monitor,5,CHKREF(YruntimeYLrestartG),T1,T8,T9,T10);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_top_43) {
  P modname_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = FUNFAB(fun_42,1,modname_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,CHKREF(YtopYtop),CHKREF(lit_79));
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
  T1 = fun_44;
  T0 = CALL2(1,CHKREF(Yunexec),image_name_,T1);
UNLINK_STACK();
  QRET(T0);
}

P YtopY___main_0___() {
  P T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110;
  P T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94;
  P T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78;
  P T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62;
  P T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46;
  P T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"p2c-eval");
  lit_1 = YPPsym((P)"exp");
  lit_2 = YPPsym((P)"modname");
  T1 = YPsig(YPPlist(2,CHKREF(lit_1),CHKREF(lit_2)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T0 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),CHKREF(lit_0),T1,Ynil,YPfalse);
  YtopYp2c_eval = T0;
  lit_3 = YPPsym((P)"parse-in");
  lit_4 = YPPsym((P)"s");
  lit_5 = YPPsym((P)"ct-env");
  T2 = YPsig(YPPlist(2,CHKREF(lit_4),CHKREF(lit_5)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_parse_in_0 = YPmet(FUNCODEREF(fun_parse_in_0),CHKREF(lit_3),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(YtopYparse_in);
  if (T5 != YPfalse) {
    T4 = CHKREF(YtopYparse_in);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_parse_in_0;
  T3 = CALL2(1,CHKREF(YPdefine_method),T4,T6);
  YtopYparse_in = T3;
  lit_6 = YPPsym((P)"parse");
  T7 = YPsig(YPPlist(2,CHKREF(lit_4),CHKREF(lit_2)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_parse_1 = YPmet(FUNCODEREF(fun_parse_1),CHKREF(lit_6),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YtopYparse);
  if (T10 != YPfalse) {
    T9 = CHKREF(YtopYparse);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_parse_1;
  T8 = CALL2(1,CHKREF(YPdefine_method),T9,T11);
  YtopYparse = T8;
  lit_7 = YPPsym((P)"str-parse-in");
  lit_8 = YPsb((P)"%=\n");
  T12 = YPsig(YPPlist(2,CHKREF(lit_4),CHKREF(lit_5)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_str_parse_in_2 = YPmet(FUNCODEREF(fun_str_parse_in_2),CHKREF(lit_7),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YtopYstr_parse_in);
  if (T15 != YPfalse) {
    T14 = CHKREF(YtopYstr_parse_in);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_str_parse_in_2;
  T13 = CALL2(1,CHKREF(YPdefine_method),T14,T16);
  YtopYstr_parse_in = T13;
  lit_9 = YPPsym((P)"str-parse");
  T17 = YPsig(YPPlist(2,CHKREF(lit_4),CHKREF(lit_2)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_str_parse_3 = YPmet(FUNCODEREF(fun_str_parse_3),CHKREF(lit_9),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YtopYstr_parse);
  if (T20 != YPfalse) {
    T19 = CHKREF(YtopYstr_parse);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_str_parse_3;
  T18 = CALL2(1,CHKREF(YPdefine_method),T19,T21);
  YtopYstr_parse = T18;
  lit_10 = YPPsym((P)"eval-in");
  lit_11 = YPPsym((P)"x");
  T22 = YPsig(YPPlist(2,CHKREF(lit_11),CHKREF(lit_5)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_eval_in_4 = YPmet(FUNCODEREF(fun_eval_in_4),CHKREF(lit_10),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YtopYeval_in);
  if (T25 != YPfalse) {
    T24 = CHKREF(YtopYeval_in);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_eval_in_4;
  T23 = CALL2(1,CHKREF(YPdefine_method),T24,T26);
  YtopYeval_in = T23;
  lit_12 = YPPsym((P)"eval");
  T27 = YPsig(YPPlist(2,CHKREF(lit_11),CHKREF(lit_2)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_eval_5 = YPmet(FUNCODEREF(fun_eval_5),CHKREF(lit_12),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YsyntaxYeval);
  if (T30 != YPfalse) {
    T29 = CHKREF(YsyntaxYeval);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_eval_5;
  T28 = CALL2(1,CHKREF(YPdefine_method),T29,T31);
  YsyntaxYeval = T28;
  lit_13 = YPPsym((P)"str-eval-in");
  T32 = YPsig(YPPlist(2,CHKREF(lit_11),CHKREF(lit_5)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_str_eval_in_6 = YPmet(FUNCODEREF(fun_str_eval_in_6),CHKREF(lit_13),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YtopYstr_eval_in);
  if (T35 != YPfalse) {
    T34 = CHKREF(YtopYstr_eval_in);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_str_eval_in_6;
  T33 = CALL2(1,CHKREF(YPdefine_method),T34,T36);
  YtopYstr_eval_in = T33;
  lit_14 = YPPsym((P)"str-eval");
  T37 = YPsig(YPPlist(2,CHKREF(lit_11),CHKREF(lit_2)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_str_eval_7 = YPmet(FUNCODEREF(fun_str_eval_7),CHKREF(lit_14),T37,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YtopYstr_eval);
  if (T40 != YPfalse) {
    T39 = CHKREF(YtopYstr_eval);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_str_eval_7;
  T38 = CALL2(1,CHKREF(YPdefine_method),T39,T41);
  YtopYstr_eval = T38;
  lit_15 = YPPsym((P)"read-file");
  lit_16 = YPPsym((P)"filename");
  lit_17 = YPPsym((P)"port");
  lit_18 = YPPsym((P)"loop");
  lit_19 = YPPsym((P)"forms");
  T44 = YPsig(YPPlist(1,CHKREF(lit_19)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_loop_8 = YPmet(FUNCODEREF(fun_loop_8),CHKREF(lit_18),T44,ENVNUL,PNUL,YPfalse);
  T43 = YPsig(YPPlist(1,CHKREF(lit_17)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T43,ENVNUL,PNUL,YPfalse);
  T42 = YPsig(YPPlist(1,CHKREF(lit_16)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_read_file_10 = YPmet(FUNCODEREF(fun_read_file_10),CHKREF(lit_15),T42,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YtopYread_file);
  if (T47 != YPfalse) {
    T46 = CHKREF(YtopYread_file);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_read_file_10;
  T45 = CALL2(1,CHKREF(YPdefine_method),T46,T48);
  YtopYread_file = T45;
  lit_20 = YPPsym((P)"load-in");
  T49 = YPsig(YPPlist(2,CHKREF(lit_16),CHKREF(lit_5)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_load_in_11 = YPmet(FUNCODEREF(fun_load_in_11),CHKREF(lit_20),T49,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(YastYload_in);
  if (T52 != YPfalse) {
    T51 = CHKREF(YastYload_in);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_load_in_11;
  T50 = CALL2(1,CHKREF(YPdefine_method),T51,T53);
  YastYload_in = T50;
  lit_21 = YPPsym((P)"load");
  T54 = YPsig(YPPlist(2,CHKREF(lit_16),CHKREF(lit_2)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_load_12 = YPmet(FUNCODEREF(fun_load_12),CHKREF(lit_21),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YtopYload);
  if (T57 != YPfalse) {
    T56 = CHKREF(YtopYload);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_load_12;
  T55 = CALL2(1,CHKREF(YPdefine_method),T56,T58);
  YtopYload = T55;
  lit_22 = YPPsym((P)"load-from");
  lit_23 = YPPsym((P)"name");
  T59 = YPsig(YPPlist(2,CHKREF(lit_23),CHKREF(lit_2)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_load_from_13 = YPmet(FUNCODEREF(fun_load_from_13),CHKREF(lit_22),T59,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YtopYload_from);
  if (T62 != YPfalse) {
    T61 = CHKREF(YtopYload_from);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_load_from_13;
  T60 = CALL2(1,CHKREF(YPdefine_method),T61,T63);
  YtopYload_from = T60;
  lit_24 = YPPsym((P)"prompt-for-command-expression");
  lit_25 = YPPsym((P)"env");
  lit_26 = YPPsym((P)"level");
  lit_27 = YPPsym((P)"prompt");
  lit_28 = YPsb((P)"%s %=%s");
  T64 = YPsig(YPPlist(3,CHKREF(lit_25),CHKREF(lit_26),CHKREF(lit_27)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_prompt_for_command_expression_14 = YPmet(FUNCODEREF(fun_prompt_for_command_expression_14),CHKREF(lit_24),T64,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YtopYprompt_for_command_expression);
  if (T67 != YPfalse) {
    T66 = CHKREF(YtopYprompt_for_command_expression);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_prompt_for_command_expression_14;
  T65 = CALL2(1,CHKREF(YPdefine_method),T66,T68);
  YtopYprompt_for_command_expression = T65;
  lit_29 = YPPsym((P)"print-result-expression");
  lit_30 = YPPsym((P)"label");
  lit_31 = YPPsym((P)"result");
  lit_32 = YPsb((P)"%s %=%s");
  T69 = YPsig(YPPlist(4,CHKREF(lit_25),CHKREF(lit_26),CHKREF(lit_30),CHKREF(lit_31)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_print_result_expression_15 = YPmet(FUNCODEREF(fun_print_result_expression_15),CHKREF(lit_29),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YtopYprint_result_expression);
  if (T72 != YPfalse) {
    T71 = CHKREF(YtopYprint_result_expression);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_print_result_expression_15;
  T70 = CALL2(1,CHKREF(YPdefine_method),T71,T73);
  YtopYprint_result_expression = T70;
  lit_33 = YPPsym((P)"do-stack-frames");
  lit_34 = YPPsym((P)"fun");
  T74 = YPsig(YPPlist(1,CHKREF(lit_34)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_do_stack_frames_16 = YPmet(FUNCODEREF(fun_do_stack_frames_16),CHKREF(lit_33),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YtopYdo_stack_frames);
  if (T77 != YPfalse) {
    T76 = CHKREF(YtopYdo_stack_frames);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_do_stack_frames_16;
  T75 = CALL2(1,CHKREF(YPdefine_method),T76,T78);
  YtopYdo_stack_frames = T75;
  lit_35 = YPPsym((P)"backtrace");
  lit_36 = YPPsym((P)"f");
  lit_37 = YPPsym((P)"args");
  lit_38 = YPsb((P)"[%=] %= %=\n");
  T80 = YPsig(YPPlist(2,CHKREF(lit_36),CHKREF(lit_37)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T80,ENVNUL,PNUL,YPfalse);
  T79 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_backtrace_18 = YPmet(FUNCODEREF(fun_backtrace_18),CHKREF(lit_35),T79,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YtopYbacktrace);
  if (T83 != YPfalse) {
    T82 = CHKREF(YtopYbacktrace);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_backtrace_18;
  T81 = CALL2(1,CHKREF(YPdefine_method),T82,T84);
  YtopYbacktrace = T81;
  lit_39 = YPPsym((P)"<keyboard-interrupt>");
  T86 = (P)YPpair(CHKREF(YruntimeYLconditionG),Ynil);
  T85 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_39),T86);
  YtopYLkeyboard_interruptG = T85;
  lit_40 = YPPsym((P)"keyboard-interrupt");
  T87 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  Ykeyboard_interrupt = YPmet(FUNCODEREF(Ykeyboard_interrupt),CHKREF(lit_40),T87,ENVNUL,PNUL,YPfalse);
  T88 = Ykeyboard_interrupt;
  Ykeyboard_interrupt = T88;
  lit_41 = YPPsym((P)"do-restart");
  lit_42 = YPPsym((P)"restarts");
  lit_43 = YPPsym((P)"n");
  lit_44 = YPsb((P)"No restarts available.\n");
  lit_45 = YPsb((P)"No restart #%d.\n");
  T89 = YPsig(YPPlist(2,CHKREF(lit_42),CHKREF(lit_43)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YtopYdo_restart = YPmet(FUNCODEREF(YtopYdo_restart),CHKREF(lit_41),T89,ENVNUL,PNUL,YPfalse);
  T90 = YtopYdo_restart;
  YtopYdo_restart = T90;
  lit_46 = YPPsym((P)"top-in");
  lit_47 = YPPsym((P)"top");
  lit_48 = YPPsym((P)"quit");
  lit_49 = YPPsym((P)"show-restarts?");
  lit_50 = YPPsym((P)"ast-run");
  lit_51 = YPPsym((P)"form");
  lit_52 = YPPsym((P)"p2c-run");
  lit_53 = YPPsym((P)"blow");
  lit_54 = YPPsym((P)"continue");
  lit_55 = YPPsym((P)"c");
  lit_56 = YPPsym((P)"r");
  lit_57 = YPsb((P)"BREAK");
  lit_58 = YPsb((P)"ERROR: %s");
  lit_59 = YPsb((P)"Return to interpreter level %d");
  lit_60 = YPsb((P)"Type (restart N) to restart execution:\n");
  lit_61 = YPsb((P)"<= ");
  lit_62 = YPPlist(1,YPPsym((P)"quit"));
  lit_63 = YPPlist(1,YPPsym((P)"up"));
  lit_64 = YPPlist(1,YPPsym((P)"handlers"));
  lit_65 = YPPlist(1,YPPsym((P)"restarts"));
  lit_66 = YPPsym((P)"return");
  lit_67 = YPPsym((P)"x-1532");
  lit_68 = YPPsym((P)"msg");
  lit_69 = YPPsym((P)"restart");
  lit_70 = YPsb((P)"Match Pattern Failure");
  lit_71 = YPPsym((P)"x-1534");
  lit_72 = YPPsym((P)"in-mod");
  lit_73 = YPPlist(1,YPPsym((P)"p2c-eval"));
  lit_74 = YPPlist(1,YPPsym((P)"ast-eval"));
  lit_75 = YPsb((P)"=> ");
  T106 = YPsig(YPPlist(1,CHKREF(lit_51)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_ast_run_21 = YPmet(FUNCODEREF(fun_ast_run_21),CHKREF(lit_50),T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(YPPlist(1,CHKREF(lit_51)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_p2c_run_22 = YPmet(FUNCODEREF(fun_p2c_run_22),CHKREF(lit_52),T105,ENVNUL,PNUL,YPfalse);
  T104 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T104,ENVNUL,PNUL,YPfalse);
  T103 = YPsig(YPPlist(2,CHKREF(lit_55),CHKREF(lit_56)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T103,ENVNUL,PNUL,YPfalse);
  T102 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T102,ENVNUL,PNUL,YPfalse);
  T101 = YPsig(YPPlist(2,CHKREF(lit_55),CHKREF(lit_56)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T101,ENVNUL,PNUL,YPfalse);
  T100 = YPsig(YPPlist(2,CHKREF(lit_68),CHKREF(lit_37)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1532_27 = YPmet(FUNCODEREF(fun_x_1532_27),CHKREF(lit_67),T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(YPPlist(1,CHKREF(lit_66)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T99,ENVNUL,PNUL,YPfalse);
  T98 = YPsig(YPPlist(2,CHKREF(lit_68),CHKREF(lit_37)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1534_29 = YPmet(FUNCODEREF(fun_x_1534_29),CHKREF(lit_71),T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(YPPlist(1,CHKREF(lit_66)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T96 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(YPPlist(1,CHKREF(lit_54)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T94,ENVNUL,PNUL,YPfalse);
  T93 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_loop_34 = YPmet(FUNCODEREF(fun_loop_34),CHKREF(lit_18),T93,ENVNUL,PNUL,YPfalse);
  T92 = YPsig(YPPlist(1,CHKREF(lit_53)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T92,ENVNUL,PNUL,YPfalse);
  T91 = YPsig(YPPlist(5,CHKREF(lit_26),CHKREF(lit_47),CHKREF(lit_48),CHKREF(lit_49),CHKREF(lit_5)),YPPlist(5,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)5),CHKREF(YLanyG),Ynil);
  fun_top_in_36 = YPmet(FUNCODEREF(fun_top_in_36),CHKREF(lit_46),T91,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YtopYtop_in);
  if (T109 != YPfalse) {
    T108 = CHKREF(YtopYtop_in);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_top_in_36;
  T107 = CALL2(1,CHKREF(YPdefine_method),T108,T110);
  YtopYtop_in = T107;
  lit_76 = YPsb((P)"Exit the top-level interpreter");
  T117 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(YPPlist(2,CHKREF(lit_55),CHKREF(lit_56)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(1,CHKREF(lit_47)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_loop_40 = YPmet(FUNCODEREF(fun_loop_40),CHKREF(lit_18),T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(YPPlist(1,CHKREF(lit_48)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T112,ENVNUL,PNUL,YPfalse);
  T111 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLsymG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_top_43 = YPmet(FUNCODEREF(fun_top_43),CHKREF(lit_47),T111,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YtopYtop);
  if (T120 != YPfalse) {
    T119 = CHKREF(YtopYtop);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_top_43;
  T118 = CALL2(1,CHKREF(YPdefine_method),T119,T121);
  YtopYtop = T118;
  lit_77 = YPPsym((P)"save-image");
  lit_78 = YPPsym((P)"image-name");
  lit_79 = YPPsym((P)"proto/user");
  T123 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T123,ENVNUL,PNUL,YPfalse);
  T122 = YPsig(YPPlist(1,CHKREF(lit_78)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YtopYsave_image = YPmet(FUNCODEREF(YtopYsave_image),CHKREF(lit_77),T122,ENVNUL,PNUL,YPfalse);
  T124 = YtopYsave_image;
  YtopYsave_image = T124;
  T125 = YPfalse;
  return T125;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_read;
extern MODULE_INFO module_info_write;
extern MODULE_INFO module_info_syntax;
extern MODULE_INFO module_info_ast;
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
  {&module_info_ast_eval},
  {&module_info_protoSsystem},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"function-free-setter", &module_info_ast, "function-free-setter"},
  {"<ast-primitive-definition>", &module_info_ast, "<ast-primitive-definition>"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"fab", &module_info_runtime, "fab"},
  {"sexpr-make-getter", &module_info_syntax, "sexpr-make-getter"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"init-ast", &module_info_ast, "init-ast"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"collecting", &module_info_macros, "collecting"},
  {"$sexpr-iterate-tag", &module_info_syntax, "$sexpr-iterate-tag"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"empty", &module_info_runtime, "empty"},
  {"vec", &module_info_runtime, "vec"},
  {"<definition>", &module_info_ast, "<definition>"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"head", &module_info_boot, "head"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"sexpr-signature-parameters", &module_info_syntax, "sexpr-signature-parameters"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"assignment-binding", &module_info_ast, "assignment-binding"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"sexpr-define-class?", &module_info_syntax, "sexpr-define-class?"},
  {"%lb", &module_info_boot, "%lb"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"signature-arity", &module_info_ast, "signature-arity"},
  {"<programs>", &module_info_ast, "<programs>"},
  {"fab-p2c-module", &module_info_ast, "fab-p2c-module"},
  {"signature-nary?-setter", &module_info_ast, "signature-nary?-setter"},
  {"pos", &module_info_runtime, "pos"},
  {"object-class", &module_info_boot, "object-class"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"signature-names-setter", &module_info_ast, "signature-names-setter"},
  {"sexpr-unquote-splicing?", &module_info_syntax, "sexpr-unquote-splicing?"},
  {"<raw-constant>", &module_info_ast, "<raw-constant>"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"+", &module_info_runtime, "+"},
  {"from", &module_info_runtime, "from"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"find-key", &module_info_runtime, "find-key"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"function-body-setter", &module_info_ast, "function-body-setter"},
  {"<program>", &module_info_ast, "<program>"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"file-mtime", &module_info_protoSsystem, "file-mtime"},
  {"bind-exit-main-fun", &module_info_ast, "bind-exit-main-fun"},
  {"signature-nary?", &module_info_ast, "signature-nary?"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"<module>", &module_info_ast, "<module>"},
  {"var-name", &module_info_macros, "var-name"},
  {"<global-assignment>", &module_info_ast, "<global-assignment>"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"elt", &module_info_runtime, "elt"},
  {"application-tail?", &module_info_ast, "application-tail?"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"str", &module_info_runtime, "str"},
  {"nul", &module_info_boot, "nul"},
  {"program-type-setter", &module_info_ast, "program-type-setter"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"==", &module_info_macros, "=="},
  {"@+", &module_info_boot, "@+"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"<constant>", &module_info_ast, "<constant>"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"read-char", &module_info_runtime, "read-char"},
  {"$proto-runtime-module-name", &module_info_ast, "$proto-runtime-module-name"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"map", &module_info_macros, "map"},
  {"min", &module_info_runtime, "min"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"monitor-test", &module_info_ast, "monitor-test"},
  {"ast-evaluate", &module_info_ast, "ast-evaluate"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"always", &module_info_runtime, "always"},
  {"opf", &module_info_macros, "opf"},
  {"case", &module_info_macros, "case"},
  {"write-char", &module_info_runtime, "write-char"},
  {"os-binding-value-setter", &module_info_protoSsystem, "os-binding-value-setter"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"map2", &module_info_runtime, "map2"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"truncate", &module_info_runtime, "truncate"},
  {"<", &module_info_runtime, "<"},
  {"%cb", &module_info_boot, "%cb"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"assignment-form-setter", &module_info_ast, "assignment-form-setter"},
  {"%f*", &module_info_boot, "%f*"},
  {"fabs", &module_info_runtime, "fabs"},
  {"/", &module_info_runtime, "/"},
  {"sexpr-function-body", &module_info_syntax, "sexpr-function-body"},
  {"sexpr-let->combination", &module_info_syntax, "sexpr-let->combination"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"fix-let-bindings-setter", &module_info_ast, "fix-let-bindings-setter"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"%i!", &module_info_boot, "%i!"},
  {"write-to-string", &module_info_write, "write-to-string"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"sexpr-expand-backquote", &module_info_syntax, "sexpr-expand-backquote"},
  {"slot", &module_info_boot, "slot"},
  {"%i<", &module_info_boot, "%i<"},
  {"1st", &module_info_runtime, "1st"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"dss", &module_info_boot, "dss"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"create-directory", &module_info_protoSsystem, "create-directory"},
  {"$sexpr-syntax-if-tag", &module_info_syntax, "$sexpr-syntax-if-tag"},
  {"function-data-refs", &module_info_ast, "function-data-refs"},
  {"sexpr-make-application", &module_info_syntax, "sexpr-make-application"},
  {"odd?", &module_info_runtime, "odd?"},
  {"%slen", &module_info_boot, "%slen"},
  {"sexpr-slot-object", &module_info_syntax, "sexpr-slot-object"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"binding-type-setter", &module_info_ast, "binding-type-setter"},
  {"inc", &module_info_macros, "inc"},
  {"sexpr-slot-variable", &module_info_syntax, "sexpr-slot-variable"},
  {"%f=", &module_info_boot, "%f="},
  {"$sexpr-let-tag", &module_info_syntax, "$sexpr-let-tag"},
  {"binding-global-box-setter", &module_info_ast, "binding-global-box-setter"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"<real-reference>", &module_info_ast, "<real-reference>"},
  {"isa", &module_info_boot, "isa"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"<ast-function>", &module_info_ast, "<ast-function>"},
  {"elt-or", &module_info_runtime, "elt-or"},
  {"<unwind-protect>", &module_info_ast, "<unwind-protect>"},
  {"sexpr-variable?", &module_info_syntax, "sexpr-variable?"},
  {"write-string", &module_info_runtime, "write-string"},
  {"tail", &module_info_boot, "tail"},
  {"all?", &module_info_runtime, "all?"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"sexpr-definition-variable", &module_info_syntax, "sexpr-definition-variable"},
  {"assignment-form", &module_info_ast, "assignment-form"},
  {"binding-global-box", &module_info_ast, "binding-global-box"},
  {"%su", &module_info_boot, "%su"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"sexpr-assignment-value", &module_info_syntax, "sexpr-assignment-value"},
  {"bound?-reference", &module_info_ast, "bound?-reference"},
  {"%ib", &module_info_boot, "%ib"},
  {"sexpr-variable-name", &module_info_syntax, "sexpr-variable-name"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"sexpr-method-body", &module_info_syntax, "sexpr-method-body"},
  {"fix-let-body-setter", &module_info_ast, "fix-let-body-setter"},
  {"do-module-loader-modules", &module_info_ast, "do-module-loader-modules"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"proto-filename", &module_info_protoSsystem, "proto-filename"},
  {"<col>", &module_info_boot, "<col>"},
  {"%i^", &module_info_boot, "%i^"},
  {"sexpr-loc-raw-body", &module_info_syntax, "sexpr-loc-raw-body"},
  {"curry", &module_info_runtime, "curry"},
  {"neg", &module_info_runtime, "neg"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"sexpr-syntax-if-value", &module_info_syntax, "sexpr-syntax-if-value"},
  {"use", &module_info_boot, "use"},
  {"%vec", &module_info_boot, "%vec"},
  {"function-self-recursive?", &module_info_ast, "function-self-recursive?"},
  {"c-filename", &module_info_protoSsystem, "c-filename"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"<fix-let>", &module_info_ast, "<fix-let>"},
  {"%str", &module_info_boot, "%str"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"unwind-protect-protected-thunk", &module_info_ast, "unwind-protect-protected-thunk"},
  {"sexpr-sequence->begin", &module_info_syntax, "sexpr-sequence->begin"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"function-registers-setter", &module_info_ast, "function-registers-setter"},
  {"type-error", &module_info_boot, "type-error"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"swapf", &module_info_macros, "swapf"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"module-name-to-relpath", &module_info_ast, "module-name-to-relpath"},
  {"function-data-refs-setter", &module_info_ast, "function-data-refs-setter"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"monitor-main-thunk", &module_info_ast, "monitor-main-thunk"},
  {"select", &module_info_macros, "select"},
  {"<ast-signature>", &module_info_ast, "<ast-signature>"},
  {"<module-loader>", &module_info_ast, "<module-loader>"},
  {"empty?", &module_info_macros, "empty?"},
  {"$sexpr-if-tag", &module_info_syntax, "$sexpr-if-tag"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"assqn", &module_info_runtime, "assqn"},
  {"eval", &module_info_syntax, "eval"},
  {"signature-specs-setter", &module_info_ast, "signature-specs-setter"},
  {"sexpr-syntax-definition-value", &module_info_syntax, "sexpr-syntax-definition-value"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"pick", &module_info_runtime, "pick"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"binding-locative", &module_info_ast, "binding-locative"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"binding-type", &module_info_ast, "binding-type"},
  {"sexpr-unwind-protect-protected-form", &module_info_syntax, "sexpr-unwind-protect-protected-form"},
  {"loc", &module_info_boot, "loc"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"%c<", &module_info_boot, "%c<"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"<runtime-assignment>", &module_info_ast, "<runtime-assignment>"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"<ast-method>", &module_info_ast, "<ast-method>"},
  {"sig", &module_info_runtime, "sig"},
  {"read", &module_info_runtime, "read"},
  {"ds", &module_info_boot, "ds"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"%untag", &module_info_boot, "%untag"},
  {"add-tmp-path", &module_info_protoSsystem, "add-tmp-path"},
  {"hierarchical-components", &module_info_protoSsystem, "hierarchical-components"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"objectify-quotation", &module_info_ast, "objectify-quotation"},
  {"ast-define-binding", &module_info_ast, "ast-define-binding"},
  {"write", &module_info_write, "write"},
  {"*proto-root*", &module_info_protoSsystem, "*proto-root*"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"reference-called-function?", &module_info_ast, "reference-called-function?"},
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
  {"function-temporaries", &module_info_ast, "function-temporaries"},
  {"unwind-protect-cleanup-thunk", &module_info_ast, "unwind-protect-cleanup-thunk"},
  {"do-named-static-global-bindings", &module_info_ast, "do-named-static-global-bindings"},
  {"<alternative>", &module_info_ast, "<alternative>"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"now-key", &module_info_runtime, "now-key"},
  {"%with-monitor", &module_info_runtime, "%with-monitor"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"in", &module_info_runtime, "in"},
  {"class-name", &module_info_boot, "class-name"},
  {"sexpr-assignment-variable", &module_info_syntax, "sexpr-assignment-variable"},
  {"application-function", &module_info_ast, "application-function"},
  {"global-box-value-setter", &module_info_ast, "global-box-value-setter"},
  {"signature-names", &module_info_ast, "signature-names"},
  {"<step>", &module_info_runtime, "<step>"},
  {"$sexpr-define-syntax-tag", &module_info_syntax, "$sexpr-define-syntax-tag"},
  {"monitor-type", &module_info_ast, "monitor-type"},
  {"free-implemented-foreign-bindings", &module_info_ast, "free-implemented-foreign-bindings"},
  {"floor/", &module_info_runtime, "floor/"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"<num>", &module_info_boot, "<num>"},
  {"<int>", &module_info_boot, "<int>"},
  {"2nd", &module_info_runtime, "2nd"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"all2?", &module_info_runtime, "all2?"},
  {"reference-called-function?-setter", &module_info_ast, "reference-called-function?-setter"},
  {"mem?", &module_info_runtime, "mem?"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"%it/", &module_info_boot, "%it/"},
  {"constant-value", &module_info_ast, "constant-value"},
  {"<monitor>", &module_info_ast, "<monitor>"},
  {"%lu", &module_info_boot, "%lu"},
  {"<predefined-application>", &module_info_ast, "<predefined-application>"},
  {"sexpr-loc-bound-bodies", &module_info_syntax, "sexpr-loc-bound-bodies"},
  {"fix-let-body", &module_info_ast, "fix-let-body"},
  {"round/", &module_info_runtime, "round/"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"<bot>", &module_info_ast, "<bot>"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"display", &module_info_write, "display"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"fix-let-bindings", &module_info_ast, "fix-let-bindings"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"binding-dotted?", &module_info_ast, "binding-dotted?"},
  {"try", &module_info_boot, "try"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"pair", &module_info_macros, "pair"},
  {"assignment-reference", &module_info_ast, "assignment-reference"},
  {"dv", &module_info_boot, "dv"},
  {"lsh", &module_info_runtime, "lsh"},
  {"@<", &module_info_boot, "@<"},
  {"assert", &module_info_macros, "assert"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"ash", &module_info_runtime, "ash"},
  {"$sexpr-monitor-tag", &module_info_syntax, "$sexpr-monitor-tag"},
  {"sexpr-isa-parents", &module_info_syntax, "sexpr-isa-parents"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"del", &module_info_runtime, "del"},
  {"objectify", &module_info_ast, "objectify"},
  {"export", &module_info_boot, "export"},
  {"compile-time-program", &module_info_ast, "compile-time-program"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"-", &module_info_runtime, "-"},
  {"<bound?>", &module_info_ast, "<bound?>"},
  {"load-module", &module_info_ast, "load-module"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"abs", &module_info_runtime, "abs"},
  {"%ft", &module_info_boot, "%ft"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"find-binding", &module_info_ast, "find-binding"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"<bind-exit>", &module_info_ast, "<bind-exit>"},
  {"function-source-setter", &module_info_ast, "function-source-setter"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"<runtime-reference>", &module_info_ast, "<runtime-reference>"},
  {"module-loader-module-type", &module_info_ast, "module-loader-module-type"},
  {"<arguments>", &module_info_ast, "<arguments>"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"max", &module_info_runtime, "max"},
  {"%slot", &module_info_boot, "%slot"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"components-parent-directory", &module_info_protoSsystem, "components-parent-directory"},
  {"$sexpr-unwind-protect-tag", &module_info_syntax, "$sexpr-unwind-protect-tag"},
  {"components-to-pathname", &module_info_protoSsystem, "components-to-pathname"},
  {"set", &module_info_boot, "set"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"ddv", &module_info_macros, "ddv"},
  {"%cu", &module_info_boot, "%cu"},
  {"assocq", &module_info_runtime, "assocq"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"*", &module_info_runtime, "*"},
  {"global-box-value", &module_info_ast, "global-box-value"},
  {"<log>", &module_info_boot, "<log>"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"writeln", &module_info_write, "writeln"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"sub", &module_info_runtime, "sub"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"$sexpr-locals-tag", &module_info_syntax, "$sexpr-locals-tag"},
  {"%f-", &module_info_boot, "%f-"},
  {"<regular-application>", &module_info_ast, "<regular-application>"},
  {"fix-let-types-setter", &module_info_ast, "fix-let-types-setter"},
  {"address-of", &module_info_runtime, "address-of"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"set-module-environments", &module_info_ast, "set-module-environments"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"function-signature", &module_info_ast, "function-signature"},
  {"locals-functions-setter", &module_info_ast, "locals-functions-setter"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"identity", &module_info_runtime, "identity"},
  {"@==", &module_info_boot, "@=="},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"sexpr-forward-primitive?", &module_info_syntax, "sexpr-forward-primitive?"},
  {"find-environment-module", &module_info_ast, "find-environment-module"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"not", &module_info_boot, "not"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"$sexpr-quasiquote-tag", &module_info_syntax, "$sexpr-quasiquote-tag"},
  {"<module-binding-reference>", &module_info_ast, "<module-binding-reference>"},
  {"or", &module_info_macros, "or"},
  {"@olen", &module_info_boot, "@olen"},
  {"collect", &module_info_macros, "collect"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"sexpr-if-else", &module_info_syntax, "sexpr-if-else"},
  {"modulo", &module_info_runtime, "modulo"},
  {"signature-value", &module_info_ast, "signature-value"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"*obj-extension*", &module_info_protoSsystem, "*obj-extension*"},
  {"floor", &module_info_runtime, "floor"},
  {"<ast-generic>", &module_info_ast, "<ast-generic>"},
  {"binding-kind", &module_info_ast, "binding-kind"},
  {"seq", &module_info_boot, "seq"},
  {"sexpr-slot-init", &module_info_syntax, "sexpr-slot-init"},
  {"$sexpr-slot-tag", &module_info_syntax, "$sexpr-slot-tag"},
  {"<any>", &module_info_boot, "<any>"},
  {"keys", &module_info_runtime, "keys"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"dec", &module_info_macros, "dec"},
  {"assoc", &module_info_runtime, "assoc"},
  {"<ast-primitive>", &module_info_ast, "<ast-primitive>"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_syntax, "sexpr-unwind-protect-cleanup-forms"},
  {"fix-let-arguments-setter", &module_info_ast, "fix-let-arguments-setter"},
  {"function-temporaries-setter", &module_info_ast, "function-temporaries-setter"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"module-exports", &module_info_ast, "module-exports"},
  {"binding-mutable?", &module_info_ast, "binding-mutable?"},
  {"type-class", &module_info_boot, "type-class"},
  {"module-target-environment", &module_info_ast, "module-target-environment"},
  {"<immediate-constant>", &module_info_ast, "<immediate-constant>"},
  {"function-binding", &module_info_ast, "function-binding"},
  {"%iu", &module_info_boot, "%iu"},
  {"locals-body", &module_info_ast, "locals-body"},
  {"$sexpr-begin-tag", &module_info_syntax, "$sexpr-begin-tag"},
  {"function-body", &module_info_ast, "function-body"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"nul?", &module_info_runtime, "nul?"},
  {"format", &module_info_runtime, "format"},
  {"<union>", &module_info_boot, "<union>"},
  {"<=", &module_info_runtime, "<="},
  {"len", &module_info_runtime, "len"},
  {"apply", &module_info_macros, "apply"},
  {"application-binding", &module_info_ast, "application-binding"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"components-basename", &module_info_protoSsystem, "components-basename"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"<binding>", &module_info_ast, "<binding>"},
  {"remainder", &module_info_runtime, "remainder"},
  {"add-build-path", &module_info_protoSsystem, "add-build-path"},
  {"logior", &module_info_runtime, "logior"},
  {"binding-name", &module_info_ast, "binding-name"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"$sexpr-define-function-tag", &module_info_syntax, "$sexpr-define-function-tag"},
  {"$proto-boot-module-name", &module_info_ast, "$proto-boot-module-name"},
  {"rep", &module_info_boot, "rep"},
  {"error", &module_info_boot, "error"},
  {"<passive-program>", &module_info_ast, "<passive-program>"},
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
  {"file-type", &module_info_protoSsystem, "file-type"},
  {"sexpr-loc-bound-names", &module_info_syntax, "sexpr-loc-bound-names"},
  {"fun", &module_info_boot, "fun"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"<free-environment>", &module_info_ast, "<free-environment>"},
  {"sexpr-syntax-definition-variable", &module_info_syntax, "sexpr-syntax-definition-variable"},
  {"locals-bindings-setter", &module_info_ast, "locals-bindings-setter"},
  {"signature-bindings-setter", &module_info_ast, "signature-bindings-setter"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"$sexpr-method-tag", &module_info_syntax, "$sexpr-method-tag"},
  {"binding-index-setter", &module_info_ast, "binding-index-setter"},
  {"function-bindings", &module_info_ast, "function-bindings"},
  {"any2?", &module_info_runtime, "any2?"},
  {"bound?", &module_info_boot, "bound?"},
  {"pos?", &module_info_runtime, "pos?"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"logxor", &module_info_runtime, "logxor"},
  {"$sexpr-isa-tag", &module_info_syntax, "$sexpr-isa-tag"},
  {"runtime-environment", &module_info_ast, "runtime-environment"},
  {"sexpr-make-macro-function", &module_info_syntax, "sexpr-make-macro-function"},
  {"false-or", &module_info_runtime, "false-or"},
  {"first-then", &module_info_runtime, "first-then"},
  {"quote", &module_info_boot, "quote"},
  {"ct", &module_info_boot, "ct"},
  {"low-elt-setter", &module_info_runtime, "low-elt-setter"},
  {"fill", &module_info_runtime, "fill"},
  {"*max-print-depth*", &module_info_write, "*max-print-depth*"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"<local-binding>", &module_info_ast, "<local-binding>"},
  {"~=", &module_info_runtime, "~="},
  {"$sexpr-define-generic-tag", &module_info_syntax, "$sexpr-define-generic-tag"},
  {"<locals>", &module_info_ast, "<locals>"},
  {"probe-directory", &module_info_protoSsystem, "probe-directory"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"unexec", &module_info_boot, "unexec"},
  {"%fb", &module_info_boot, "%fb"},
  {"any?", &module_info_runtime, "any?"},
  {"monitor-handler", &module_info_ast, "monitor-handler"},
  {"label-components", &module_info_protoSsystem, "label-components"},
  {"$sexpr-set-tag", &module_info_syntax, "$sexpr-set-tag"},
  {"def-list", &module_info_ast, "def-list"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"*exe-extension*", &module_info_protoSsystem, "*exe-extension*"},
  {"module-binding", &module_info_ast, "module-binding"},
  {"signature-bindings", &module_info_ast, "signature-bindings"},
  {"%f+", &module_info_boot, "%f+"},
  {"nil", &module_info_boot, "nil"},
  {"buf", &module_info_runtime, "buf"},
  {"dg", &module_info_boot, "dg"},
  {"*c-extension*", &module_info_protoSsystem, "*c-extension*"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"sexpr-operator", &module_info_syntax, "sexpr-operator"},
  {"pop", &module_info_runtime, "pop"},
  {"sexpr-unquote?", &module_info_syntax, "sexpr-unquote?"},
  {"sexpr-operands", &module_info_syntax, "sexpr-operands"},
  {"sexpr-isa-init-slots", &module_info_syntax, "sexpr-isa-init-slots"},
  {"sexpr-definition-value", &module_info_syntax, "sexpr-definition-value"},
  {"remove-modules-by-name!", &module_info_ast, "remove-modules-by-name!"},
  {"lst", &module_info_boot, "lst"},
  {"constant-index-setter", &module_info_ast, "constant-index-setter"},
  {"<computed-program>", &module_info_ast, "<computed-program>"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"program-register-setter", &module_info_ast, "program-register-setter"},
  {"reference-binding", &module_info_ast, "reference-binding"},
  {"alter", &module_info_runtime, "alter"},
  {"function-signature-setter", &module_info_ast, "function-signature-setter"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"<ast-macro-definition>", &module_info_ast, "<ast-macro-definition>"},
  {"function-index-setter", &module_info_ast, "function-index-setter"},
  {"t<", &module_info_runtime, "t<"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"ascii-whitespaces", &module_info_runtime, "ascii-whitespaces"},
  {"sexpr-if-then", &module_info_syntax, "sexpr-if-then"},
  {"and", &module_info_macros, "and"},
  {"as", &module_info_runtime, "as"},
  {"function-source", &module_info_ast, "function-source"},
  {"logand", &module_info_runtime, "logand"},
  {"sexpr-monitor-expand", &module_info_syntax, "sexpr-monitor-expand"},
  {"function-self-recursive?-setter", &module_info_ast, "function-self-recursive?-setter"},
  {"os-name", &module_info_protoSsystem, "os-name"},
  {"$sexpr-macro-expand-tag", &module_info_syntax, "$sexpr-macro-expand-tag"},
  {"report-undefined-global-bindings", &module_info_ast, "report-undefined-global-bindings"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"napply", &module_info_macros, "napply"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"file-exists?", &module_info_protoSsystem, "file-exists?"},
  {"tup", &module_info_macros, "tup"},
  {"dp", &module_info_boot, "dp"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"objectify-signature", &module_info_ast, "objectify-signature"},
  {"sexpr-variable-type", &module_info_syntax, "sexpr-variable-type"},
  {"sexpr-isa-init-values", &module_info_syntax, "sexpr-isa-init-values"},
  {"<compile-time>", &module_info_ast, "<compile-time>"},
  {"exe-filename", &module_info_protoSsystem, "exe-filename"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"binding-inferred-type", &module_info_ast, "binding-inferred-type"},
  {"monitor-info", &module_info_ast, "monitor-info"},
  {"binding-dotted?-setter", &module_info_ast, "binding-dotted?-setter"},
  {"compose", &module_info_runtime, "compose"},
  {"%binding-value", &module_info_ast_eval, "%binding-value"},
  {"binding-module-name", &module_info_ast, "binding-module-name"},
  {"free-environment", &module_info_ast, "free-environment"},
  {"low-elt", &module_info_runtime, "low-elt"},
  {"def-programs", &module_info_ast, "def-programs"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"binding-index", &module_info_ast, "binding-index"},
  {"alternative-alternant", &module_info_ast, "alternative-alternant"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"char->ascii", &module_info_runtime, "char->ascii"},
  {"binding-dynamic-extent?-setter", &module_info_ast, "binding-dynamic-extent?-setter"},
  {"<error>", &module_info_runtime, "<error>"},
  {"<global-reference>", &module_info_ast, "<global-reference>"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"*max-print-length*", &module_info_write, "*max-print-length*"},
  {"app-args", &module_info_runtime, "app-args"},
  {"$sexpr-define-tag", &module_info_syntax, "$sexpr-define-tag"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"<local-reference>", &module_info_ast, "<local-reference>"},
  {"$char-long-names", &module_info_read, "$char-long-names"},
  {"$sexpr-define-method-tag", &module_info_syntax, "$sexpr-define-method-tag"},
  {"lognot", &module_info_runtime, "lognot"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"list", &module_info_runtime, "list"},
  {"sexpr-if-test", &module_info_syntax, "sexpr-if-test"},
  {"%f<", &module_info_boot, "%f<"},
  {"sexpr-bind-pattern-variables", &module_info_syntax, "sexpr-bind-pattern-variables"},
  {"read-from-string", &module_info_read, "read-from-string"},
  {"do-static-global-bindings", &module_info_ast, "do-static-global-bindings"},
  {"if", &module_info_boot, "if"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"newline", &module_info_runtime, "newline"},
  {"function-value", &module_info_ast, "function-value"},
  {"popf", &module_info_macros, "popf"},
  {"%snul", &module_info_boot, "%snul"},
  {"fin", &module_info_boot, "fin"},
  {"sexpr-loc-bound-signatures", &module_info_syntax, "sexpr-loc-bound-signatures"},
  {"cat", &module_info_macros, "cat"},
  {"<module-binding>", &module_info_ast, "<module-binding>"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"t=", &module_info_runtime, "t="},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"<port>", &module_info_runtime, "<port>"},
  {"application-known?", &module_info_ast, "application-known?"},
  {"port-index", &module_info_runtime, "port-index"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"environment-module", &module_info_ast, "environment-module"},
  {">", &module_info_runtime, ">"},
  {"function-debug-name", &module_info_ast, "function-debug-name"},
  {"pathname-to-components", &module_info_protoSsystem, "pathname-to-components"},
  {"sexpr-make-anonymous-method", &module_info_syntax, "sexpr-make-anonymous-method"},
  {"locals-functions", &module_info_ast, "locals-functions"},
  {"fix-let-arguments", &module_info_ast, "fix-let-arguments"},
  {"do3", &module_info_runtime, "do3"},
  {"push", &module_info_runtime, "push"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"<application>", &module_info_ast, "<application>"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"isa?", &module_info_boot, "isa?"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"fix-let-types", &module_info_ast, "fix-let-types"},
  {"binding-info", &module_info_ast, "binding-info"},
  {"last", &module_info_runtime, "last"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"process-id", &module_info_protoSsystem, "process-id"},
  {"cat2", &module_info_runtime, "cat2"},
  {"$sexpr-bind-exit-tag", &module_info_syntax, "$sexpr-bind-exit-tag"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"add-src-path", &module_info_protoSsystem, "add-src-path"},
  {"zero?", &module_info_runtime, "zero?"},
  {"sexpr-make-setter", &module_info_syntax, "sexpr-make-setter"},
  {"sexpr-make-begin", &module_info_syntax, "sexpr-make-begin"},
  {"type-object", &module_info_boot, "type-object"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"env-object-name", &module_info_ast, "env-object-name"},
  {"sexpr-block-name", &module_info_syntax, "sexpr-block-name"},
  {"binding-dynamic-extent?", &module_info_ast, "binding-dynamic-extent?"},
  {"t+", &module_info_runtime, "t+"},
  {"add", &module_info_runtime, "add"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"<class>", &module_info_boot, "<class>"},
  {"assoc-value", &module_info_runtime, "assoc-value"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"sexpr-define-class-parents", &module_info_syntax, "sexpr-define-class-parents"},
  {"reference-frame-number", &module_info_ast, "reference-frame-number"},
  {"binding-value-setter", &module_info_ast, "binding-value-setter"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"pushf", &module_info_macros, "pushf"},
  {"rev", &module_info_runtime, "rev"},
  {"mif", &module_info_boot, "mif"},
  {">=", &module_info_runtime, ">="},
  {"$sexpr-quote-tag", &module_info_syntax, "$sexpr-quote-tag"},
  {"obj-filename", &module_info_protoSsystem, "obj-filename"},
  {"probe-module", &module_info_ast, "probe-module"},
  {"sexpr-syntax-if-else", &module_info_syntax, "sexpr-syntax-if-else"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"<global-box>", &module_info_ast, "<global-box>"},
  {"load-in", &module_info_ast, "load-in"},
  {"%i+", &module_info_boot, "%i+"},
  {"sexpr-syntax-if-pattern", &module_info_syntax, "sexpr-syntax-if-pattern"},
  {"program-type", &module_info_ast, "program-type"},
  {"let", &module_info_boot, "let"},
  {"%c=", &module_info_boot, "%c="},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"<type>", &module_info_boot, "<type>"},
  {"%i*", &module_info_boot, "%i*"},
  {"environment-uses-modules", &module_info_ast, "environment-uses-modules"},
  {"function-index", &module_info_ast, "function-index"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"sexpr-block-body", &module_info_syntax, "sexpr-block-body"},
  {"module-name", &module_info_ast, "module-name"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"locals-bindings", &module_info_ast, "locals-bindings"},
  {"%selt", &module_info_boot, "%selt"},
  {"%iv", &module_info_boot, "%iv"},
  {"locals-body-setter", &module_info_ast, "locals-body-setter"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"<map>", &module_info_runtime, "<map>"},
  {"application-known?-setter", &module_info_ast, "application-known?-setter"},
  {"sexpr-signature-value", &module_info_syntax, "sexpr-signature-value"},
  {"=", &module_info_runtime, "="},
  {"sexpr-text-of-quotation", &module_info_syntax, "sexpr-text-of-quotation"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"sexpr-function-signature", &module_info_syntax, "sexpr-function-signature"},
  {"binding-info-setter", &module_info_ast, "binding-info-setter"},
  {"from-above", &module_info_runtime, "from-above"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%raw", &module_info_boot, "%raw"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"sexpr-make-setter-name", &module_info_syntax, "sexpr-make-setter-name"},
  {"<local-assignment>", &module_info_ast, "<local-assignment>"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"signature-specs", &module_info_ast, "signature-specs"},
  {"function-registers", &module_info_ast, "function-registers"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"dlet", &module_info_macros, "dlet"},
  {"from-below", &module_info_runtime, "from-below"},
  {"binding-value", &module_info_ast, "binding-value"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"reduce", &module_info_runtime, "reduce"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"next-method", &module_info_macros, "next-method"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"$sexpr-define-class-tag", &module_info_syntax, "$sexpr-define-class-tag"},
  {"del-key", &module_info_runtime, "del-key"},
  {"rev!", &module_info_runtime, "rev!"},
  {"components-last", &module_info_protoSsystem, "components-last"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"sexpr-function-definition-variable", &module_info_syntax, "sexpr-function-definition-variable"},
  {"binding-inferred-type-setter", &module_info_ast, "binding-inferred-type-setter"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"signature-value-setter", &module_info_ast, "signature-value-setter"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"<fab-list>", &module_info_ast, "<fab-list>"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"lab", &module_info_boot, "lab"},
  {"~==", &module_info_runtime, "~=="},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"function-nary?", &module_info_ast, "function-nary?"},
  {"%velt", &module_info_boot, "%velt"},
  {"round", &module_info_runtime, "round"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"%bb", &module_info_boot, "%bb"},
  {"for", &module_info_macros, "for"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"do2", &module_info_runtime, "do2"},
  {"as-lst", &module_info_ast, "as-lst"},
  {"parent-directory", &module_info_protoSsystem, "parent-directory"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"sexpr-function-definition-value", &module_info_syntax, "sexpr-function-definition-value"},
  {"module-syntax-environment", &module_info_ast, "module-syntax-environment"},
  {"cat!", &module_info_runtime, "cat!"},
  {"from-by", &module_info_runtime, "from-by"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"function-free", &module_info_ast, "function-free"},
  {"sequentialize", &module_info_ast, "sequentialize"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"%f/", &module_info_boot, "%f/"},
  {"os-binding-value", &module_info_protoSsystem, "os-binding-value"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"%i-", &module_info_boot, "%i-"},
  {"install-initial-bindings", &module_info_ast, "install-initial-bindings"},
  {"df", &module_info_boot, "df"},
  {"force-output", &module_info_runtime, "force-output"},
  {"<str>", &module_info_boot, "<str>"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"sexpr-syntax-if-then", &module_info_syntax, "sexpr-syntax-if-then"},
  {"default", &module_info_runtime, "default"},
  {"<sequential>", &module_info_ast, "<sequential>"},
  {"application-arguments", &module_info_ast, "application-arguments"},
  {"constant-index", &module_info_ast, "constant-index"},
  {"program-register", &module_info_ast, "program-register"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"even?", &module_info_runtime, "even?"},
  {"from-to", &module_info_runtime, "from-to"},
  {"<assignment>", &module_info_ast, "<assignment>"},
  {"var-type", &module_info_macros, "var-type"},
  {"add!", &module_info_runtime, "add!"},
  {"function-debug-name-setter", &module_info_ast, "function-debug-name-setter"},
  {"%sb", &module_info_boot, "%sb"},
  {"assq", &module_info_runtime, "assq"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"collected", &module_info_macros, "collected"},
  {"fab-map", &module_info_runtime, "fab-map"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"sexpr-method-signature", &module_info_syntax, "sexpr-method-signature"},
  {"%im", &module_info_boot, "%im"},
  {"when", &module_info_macros, "when"},
  {"dc", &module_info_boot, "dc"},
  {"<list>", &module_info_runtime, "<list>"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"sexpr-iterate->loc", &module_info_syntax, "sexpr-iterate->loc"},
  {"do", &module_info_runtime, "do"},
  {"reference-frame-offset", &module_info_ast, "reference-frame-offset"},
  {"alternative-consequent", &module_info_ast, "alternative-consequent"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"init-environment-for-eval", &module_info_ast, "init-environment-for-eval"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"*path-separator*", &module_info_protoSsystem, "*path-separator*"},
  {"<static-global-environment>", &module_info_ast, "<static-global-environment>"},
  {"alternative-condition", &module_info_ast, "alternative-condition"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"*proto-extension*", &module_info_protoSsystem, "*proto-extension*"},
  {"dm", &module_info_boot, "dm"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"sexpr-isa-slot-inits", &module_info_syntax, "sexpr-isa-slot-inits"},
  {"out", &module_info_runtime, "out"},
  {"to-str", &module_info_runtime, "to-str"},
  {"<reference>", &module_info_ast, "<reference>"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"<met>", &module_info_boot, "<met>"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"%binding-value-setter", &module_info_ast_eval, "%binding-value-setter"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"signature-arity-setter", &module_info_ast, "signature-arity-setter"},
  {"<range>", &module_info_runtime, "<range>"},
  {"binding-native-to?", &module_info_ast, "binding-native-to?"},
  {"neg?", &module_info_runtime, "neg?"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"str-eval", &YtopYstr_eval},
  {"str-parse-in", &YtopYstr_parse_in},
  {"load-from", &YtopYload_from},
  {"top", &YtopYtop},
  {"parse-in", &YtopYparse_in},
  {"eval-in", &YtopYeval_in},
  {"<keyboard-interrupt>", &YtopYLkeyboard_interruptG},
  {"---main-0---", NULL},
  {"p2c-eval", &YtopYp2c_eval},
  {"prompt-for-command-expression", &YtopYprompt_for_command_expression},
  {"backtrace", &YtopYbacktrace},
  {"load", &YtopYload},
  {"top-in", &YtopYtop_in},
  {"print-result-expression", &YtopYprint_result_expression},
  {"save-image", &YtopYsave_image},
  {"do-stack-frames", &YtopYdo_stack_frames},
  {"str-parse", &YtopYstr_parse},
  {"read-file", &YtopYread_file},
  {"str-eval-in", &YtopYstr_eval_in},
  {"parse", &YtopYparse},
  {"do-restart", &YtopYdo_restart},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"save-image", "save-image"},
  {"do-stack-frames", "do-stack-frames"},
  {"top", "top"},
  {"parse-in", "parse-in"},
  {"eval", "eval"},
  {"read-file", "read-file"},
  {"p2c-eval", "p2c-eval"},
  {"backtrace", "backtrace"},
  {"load", "load"},
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
  load_module_ast_eval();
  load_module_protoSsystem();

  (P)YtopY___main_0___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
