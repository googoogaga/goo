/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: ast */

EXT(YsyntaxYsexpr_isa_slot_inits,"syntax","sexpr-isa-slot-inits");
DEF(YastYr_extendT,"ast","r-extend*");
EXT(YruntimeYfrom_to,"runtime","from-to");
DEF(YastYfind_binding,"ast","find-binding");
DEF(YastYspecial_define_syntax,"ast","special-define-syntax");
DEF(YastYmagic_bindings,"ast","magic-bindings");
DEF(YastYspecial_quote,"ast","special-quote");
EXT(YruntimeYpop,"runtime","pop");
EXT(Ynot,"boot","not");
DEF(YastYmodule_binding,"ast","module-binding");
EXT(Yfun_value,"boot","fun-value");
DEF(YastYbinding_dottedQ,"ast","binding-dotted?");
DEF(YastYast_macro_expand,"ast","ast-macro-expand");
DEF(YastYfix_let_bindings,"ast","fix-let-bindings");
DEF(YastYmodule_name,"ast","module-name");
DEF(YastYobjectify_locals,"ast","objectify-locals");
EXT(YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
DEF(YastYenvironment_module_loader,"ast","environment-module-loader");
DEF(YastYobjectify_assignment_using,"ast","objectify-assignment-using");
EXT(YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
EXT(Yfun_name_setter,"boot","fun-name-setter");
DEF(YastYLlocal_bindingG,"ast","<local-binding>");
DEF(YastYmonitor_handler_setter,"ast","monitor-handler-setter");
DEF(YastYspecial_slot,"ast","special-slot");
EXT(Yfile_opening_error,"boot","file-opening-error");
DEF(YastYDsexpr_Praw_tag,"ast","$sexpr-%raw-tag");
DEF(YastYpairize,"ast","pairize");
DEF(YastYTruntime_module_loaderT,"ast","*runtime-module-loader*");
EXT(Ytail_setter,"boot","tail-setter");
DEF(YastYbinding_module_name,"ast","binding-module-name");
EXT(YruntimeYfab,"runtime","fab");
EXT(YsyntaxYsexpr_slot_init,"syntax","sexpr-slot-init");
EXT(YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
EXT(YruntimeYcatX,"runtime","cat!");
DEF(YastYcompute_local_reference_offsets,"ast","compute-local-reference-offsets");
DEF(YastYLbindingG,"ast","<binding>");
DEF(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YLcolG,"boot","<col>");
DEF(YastYftype,"ast","ftype");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(Yerror,"boot","error");
DEF(YastYmodule_syntax_environment_setter,"ast","module-syntax-environment-setter");
DEF(YastYinit_ast,"ast","init-ast");
EXT(YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
EXT(Yslot_getter,"boot","slot-getter");
DEF(YastYDsequential_empty,"ast","$sequential-empty");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
DEF(YastYbind_exit_main_fun_setter,"ast","bind-exit-main-fun-setter");
DEF(YastYinsert_globalX,"ast","insert-global!");
DEF(YastYassignment_reference,"ast","assignment-reference");
EXT(YsyntaxYsexpr_isa_parents,"syntax","sexpr-isa-parents");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YPsymbols,"boot","%symbols");
DEF(YastYLmoduleG,"ast","<module>");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
DEF(YastYfix_let_body,"ast","fix-let-body");
DEF(YastYDsexpr_define_static_syntax_tag,"ast","$sexpr-define-static-syntax-tag");
EXT(YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
EXT(YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
EXT(YruntimeYfrom_below,"runtime","from-below");
DEF(YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
DEF(YastYapplication_function,"ast","application-function");
DEF(YastYobjectify_function_definition,"ast","objectify-function-definition");
EXT(YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
DEF(YastYfunction_value,"ast","function-value");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
DEF(YastYreference_frame_offset_setter,"ast","reference-frame-offset-setter");
EXT(YmacrosYlst,"macros","lst");
DEF(YastYregister_magic_binding,"ast","register-magic-binding");
DEF(YastYDsexpr_use_module_tag,"ast","$sexpr-use-module-tag");
DEF(YastYexpand_syntax_if,"ast","expand-syntax-if");
DEF(YastYremove_module_internalX,"ast","remove-module-internal!");
DEF(YastYobjectify_signature,"ast","objectify-signature");
DEF(YastYspecial_isa,"ast","special-isa");
DEF(YastYLtypesG,"ast","<types>");
EXT(YPcall_next_method,"boot","%call-next-method");
EXT(YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
EXT(YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
DEF(YastYLast_function_definitionG,"ast","<ast-function-definition>");
EXT(YruntimeYforce_output,"runtime","force-output");
DEF(YastYfab_syntax_environment,"ast","fab-syntax-environment");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YLstrG,"boot","<str>");
DEF(YastYDarguments_empty,"ast","$arguments-empty");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(YPPmacro,"boot","%%macro");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YruntimeYas,"runtime","as");
DEF(YastYbinding_handler,"ast","binding-handler");
DEF(YastYTmacro_tracingQT,"ast","*macro-tracing?*");
EXT(YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
DEF(YastYarguments,"ast","arguments");
DEF(YastYspecial_Praw,"ast","special-%raw");
DEF(YastYsignature_names_setter,"ast","signature-names-setter");
DEF(YastYobjectify_quotation,"ast","objectify-quotation");
DEF(YastYLast_generic_definitionG,"ast","<ast-generic-definition>");
EXT(YruntimeYempty,"runtime","empty");
DEF(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
DEF(YastYprogram_register_setter,"ast","program-register-setter");
DEF(YastYenvironment_next_setter,"ast","environment-next-setter");
DEF(YastYspecial_use_module,"ast","special-use-module");
EXT(YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
EXT(YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(Ytype_error,"boot","type-error");
DEF(YastYreference_binding,"ast","reference-binding");
DEF(YastYmodule_loader_stack_setter,"ast","module-loader-stack-setter");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(Ysym_name,"boot","sym-name");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
EXT(YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
DEF(YastYspecial_define_static_syntax,"ast","special-define-static-syntax");
DEF(YastYreference_frame_offset,"ast","reference-frame-offset");
DEF(YastYload_module,"ast","load-module");
DEF(YastYlocals_body_setter,"ast","locals-body-setter");
DEF(YastYmonitor_main_thunk_setter,"ast","monitor-main-thunk-setter");
DEF(YastYprocess_nary_closed_application,"ast","process-nary-closed-application");
EXT(YruntimeYLmapG,"runtime","<map>");
DEF(YastYmodule_loader_modules_setter,"ast","module-loader-modules-setter");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
DEF(YastYassignment_form_setter,"ast","assignment-form-setter");
DEF(YastYspecial_iterate,"ast","special-iterate");
DEF(YastYruntime_environment,"ast","runtime-environment");
EXT(YruntimeYadd,"runtime","add");
EXT(YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
DEF(YastYDempty_static_environment,"ast","$empty-static-environment");
EXT(YruntimeYfrom,"runtime","from");
EXT(YwriteYwriteln,"write","writeln");
DEF(YastYbinding_type,"ast","binding-type");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(Ynul,"boot","nul");
DEF(YastYLsequentialG,"ast","<sequential>");
EXT(YruntimeY1st,"runtime","1st");
DEF(YastYobjectify_list,"ast","objectify-list");
DEF(YastYsyntax_environment_bindings,"ast","syntax-environment-bindings");
EXT(YwriteYwrite,"write","write");
EXT(YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
DEF(YastYbinding_mutableQ,"ast","binding-mutable?");
EXT(YstringsYstring_join,"strings","string-join");
EXT(YLsigG,"boot","<sig>");
DEF(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
EXT(YruntimeYpush,"runtime","push");
EXT(YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
DEF(YastYfab_static_global_environment,"ast","fab-static-global-environment");
DEF(YastYDtypes_empty,"ast","$types-empty");
EXT(YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
EXT(YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
DEF(YastYspecial_begin,"ast","special-begin");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YruntimeYnulQ,"runtime","nul?");
DEF(YastYLdefinitionG,"ast","<definition>");
EXT(YmacrosYcat,"macros","cat");
DEF(YastYenvironment_bindings,"ast","environment-bindings");
EXT(YruntimeYfill,"runtime","fill");
DEF(YastYenvironment_module_setter,"ast","environment-module-setter");
DEF(YastYobjectify_symbol,"ast","objectify-symbol");
EXT(YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
DEF(YastYsequential,"ast","sequential");
EXT(YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
DEF(YastYprogram_type_setter,"ast","program-type-setter");
DEF(YastYsignature_value_setter,"ast","signature-value-setter");
DEF(YastYimport_globalX,"ast","import-global!");
EXT(YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
EXT(Yslot_value,"boot","slot-value");
EXT(YmacrosYEE,"macros","==");
DEF(YastYLlocalsG,"ast","<locals>");
DEF(YastYlocals_bindings,"ast","locals-bindings");
EXT(YLanyG,"boot","<any>");
EXT(YLseqG,"boot","<seq>");
DEF(YastYtypes,"ast","types");
DEF(YastYLruntime_referenceG,"ast","<runtime-reference>");
DEF(YastYbinding_dottedQ_setter,"ast","binding-dotted?-setter");
EXT(YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
DEF(YastYfunction_signature,"ast","function-signature");
DEF(YastYLprogramsG,"ast","<programs>");
DEF(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
EXT(YsyntaxYeval,"syntax","eval");
EXT(YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
EXT(YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
EXT(YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
DEF(YastYinit_p2c_regular_environment,"ast","init-p2c-regular-environment");
EXT(YruntimeYini_state,"runtime","ini-state");
DEF(YastYDfunctions_empty,"ast","$functions-empty");
DEF(YastYDsexpr_optionals_tag,"ast","$sexpr-optionals-tag");
EXT(YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
DEF(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
DEF(YastYLast_method_definitionG,"ast","<ast-method-definition>");
DEF(YastYcopy_environment_bindings,"ast","copy-environment-bindings");
DEF(YastYmodule_loader_stack,"ast","module-loader-stack");
EXT(YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
EXT(YstringsYmap_str,"strings","map-str");
DEF(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
DEF(YastYenvironment_bindings_setter,"ast","environment-bindings-setter");
EXT(YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
DEF(YastYspecial_syntax_if,"ast","special-syntax-if");
DEF(YastYLbind_exitG,"ast","<bind-exit>");
DEF(YastYspecial_bind_exit,"ast","special-bind-exit");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
DEF(YastYsignature_bindings,"ast","signature-bindings");
DEF(YastYdefault_type,"ast","default-type");
DEF(YastYunwind_protect_protected_thunk_setter,"ast","unwind-protect-protected-thunk-setter");
DEF(YastYbinding_type_setter,"ast","binding-type-setter");
EXT(YsyntaxYsexpr_slot_object,"syntax","sexpr-slot-object");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YruntimeYwrite_char,"runtime","write-char");
DEF(YastYbinding_native_toQ,"ast","binding-native-to?");
EXT(YruntimeYE,"runtime","=");
DEF(YastYLstatic_local_environmentG,"ast","<static-local-environment>");
DEF(YastYspecial_define_method,"ast","special-define-method");
DEF(YastYapplication_knownQ_setter,"ast","application-known?-setter");
DEF(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
DEF(YastYfind_environment_module,"ast","find-environment-module");
EXT(Yfapply,"boot","fapply");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YLlstG,"boot","<lst>");
DEF(YastYbinding_freeQ_setter,"ast","binding-free?-setter");
DEF(YastYfunction_signature_setter,"ast","function-signature-setter");
DEF(YastYspecial_if,"ast","special-if");
EXT(YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
DEF(YastYbinding_reference_prototype,"ast","binding-reference-prototype");
DEF(YastYobjectify_error,"ast","objectify-error");
DEF(YastYLast_signatureG,"ast","<ast-signature>");
DEF(YastYobjectify,"ast","objectify");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
DEF(YastYspecial_let,"ast","special-let");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(YruntimeYcompose,"runtime","compose");
DEF(YastYfab_p2c_module,"ast","fab-p2c-module");
DEF(YastYLconstantG,"ast","<constant>");
DEF(YastYexpand_bind_listT,"ast","expand-bind-list*");
EXT(YLmetG,"boot","<met>");
DEF(YastYsignature_naryQ,"ast","signature-nary?");
DEF(YastYsignature_naryQ_setter,"ast","signature-nary?-setter");
DEF(YastYfunction_name_setter,"ast","function-name-setter");
DEF(YastYalternative_condition_setter,"ast","alternative-condition-setter");
DEF(YastYDsexpr_define_primitive_tag,"ast","$sexpr-define-primitive-tag");
DEF(YastYcompile_time_program,"ast","compile-time-program");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
EXT(YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
DEF(YastYbinding_kind,"ast","binding-kind");
EXT(YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
DEF(YastYLreferenceG,"ast","<reference>");
EXT(YPisa,"boot","%isa");
DEF(YastYspecial_define_primitive,"ast","special-define-primitive");
DEF(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
DEF(YastYspecial_define_function,"ast","special-define-function");
EXT(YruntimeYlen,"runtime","len");
DEF(YastYlocals_functions,"ast","locals-functions");
DEF(YastYLpassive_programG,"ast","<passive-program>");
DEF(YastYunwind_protect_cleanup_thunk_setter,"ast","unwind-protect-cleanup-thunk-setter");
DEF(YastYobjectify_generic_definition,"ast","objectify-generic-definition");
DEF(YastYprimitives,"ast","primitives");
EXT(Ysig_names,"boot","sig-names");
DEF(YastYglobal_box_value,"ast","global-box-value");
DEF(YastYenvironment_next,"ast","environment-next");
DEF(YastYLfix_letG,"ast","<fix-let>");
DEF(YastYenvironment_implements,"ast","environment-implements");
DEF(YastYobjectify_raw,"ast","objectify-raw");
EXT(YruntimeYdel_keys,"runtime","del-keys");
DEF(YastYconstant_value,"ast","constant-value");
DEF(YastYspecial_macro_expand,"ast","special-macro-expand");
EXT(YsyntaxYsexpr_slot_variable,"syntax","sexpr-slot-variable");
EXT(YmacrosYpair,"macros","pair");
DEF(YastYenvironment_uses_modules_setter,"ast","environment-uses-modules-setter");
DEF(YastYspecial_locals,"ast","special-locals");
DEF(YastYLmodule_loaderG,"ast","<module-loader>");
DEF(YastYDsexpr_compile_time_also_tag,"ast","$sexpr-compile-time-also-tag");
DEF(YastYspecial_export,"ast","special-export");
DEF(YastYinsert_globalsX,"ast","insert-globals!");
DEF(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YruntimeYL,"runtime","<");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YsyntaxYsexpr_make_setter,"syntax","sexpr-make-setter");
DEF(YastYreference_called_functionQ,"ast","reference-called-function?");
EXT(YruntimeYlast,"runtime","last");
EXT(YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
EXT(YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
DEF(YastYapplication_binding,"ast","application-binding");
DEF(YastYLpredefined_applicationG,"ast","<predefined-application>");
DEF(YastYDsexpr_boundQ_tag,"ast","$sexpr-bound?-tag");
EXT(YisaQ,"boot","isa?");
DEF(YastYLast_genericG,"ast","<ast-generic>");
DEF(YastYexpand_bind_list,"ast","expand-bind-list");
DEF(YastYsignature_names,"ast","signature-names");
DEF(YastYapplication_arguments_setter,"ast","application-arguments-setter");
DEF(YastYobjectify_unwind_protect,"ast","objectify-unwind-protect");
EXT(YruntimeYvec,"runtime","vec");
EXT(YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
EXT(YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
EXT(YLtraitsG,"boot","<traits>");
EXT(YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
DEF(YastYobjectify_compile_time,"ast","objectify-compile-time");
EXT(YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
EXT(YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
EXT(YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
DEF(YastYLregular_applicationG,"ast","<regular-application>");
DEF(YastYLassignmentG,"ast","<assignment>");
DEF(YastYobjectify_bind_exit,"ast","objectify-bind-exit");
DEF(YastYprogram_register,"ast","program-register");
DEF(YastYenvironment_implements_setter,"ast","environment-implements-setter");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
DEF(YastYfind_syntax_environment,"ast","find-syntax-environment");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(Yfab_sym,"boot","fab-sym");
DEF(YastYassignment_reference_setter,"ast","assignment-reference-setter");
DEF(YastYTmagic_bindingsT,"ast","*magic-bindings*");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YPdefine_method,"boot","%define-method");
DEF(YastYLlocal_referenceG,"ast","<local-reference>");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
DEF(YastYcompute_transitive_users,"ast","compute-transitive-users");
DEF(YastYreference_frame_number_setter,"ast","reference-frame-number-setter");
EXT(YruntimeYA,"runtime","+");
DEF(YastYLmodule_bindingG,"ast","<module-binding>");
DEF(YastYobjectify_monitor,"ast","objectify-monitor");
EXT(YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
EXT(YPslot,"boot","%slot");
DEF(YastYfunction_body_setter,"ast","function-body-setter");
DEF(YastYalternative_condition,"ast","alternative-condition");
EXT(YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
DEF(YastYglobal_box_value_setter,"ast","global-box-value-setter");
DEF(YastYspecial_compile_time_also,"ast","special-compile-time-also");
EXT(YruntimeYtype_or,"runtime","type-or");
EXT(YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
DEF(YastYbinding_info_setter,"ast","binding-info-setter");
DEF(YastYprogram_type,"ast","program-type");
EXT(YruntimeYrcurry,"runtime","rcurry");
DEF(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
DEF(YastYfab_primitive,"ast","fab-primitive");
DEF(YastYast_define_binding,"ast","ast-define-binding");
DEF(YastYassignment_binding_setter,"ast","assignment-binding-setter");
DEF(YastYLast_primitiveG,"ast","<ast-primitive>");
DEF(YastYobjectify_alternative,"ast","objectify-alternative");
DEF(YastYalternative_consequent_setter,"ast","alternative-consequent-setter");
EXT(YruntimeYG,"runtime",">");
EXT(YLvecG,"boot","<vec>");
DEF(YastYassignment_form,"ast","assignment-form");
DEF(YastYalternative_alternant,"ast","alternative-alternant");
DEF(YastYbinding_locative,"ast","binding-locative");
DEF(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
EXT(YmacrosYvar_name,"macros","var-name");
DEF(YastYreference_frame_number,"ast","reference-frame-number");
EXT(YstringsYstring_split,"strings","string-split");
DEF(YastYreference_binding_setter,"ast","reference-binding-setter");
DEF(YastYfunction_bindings,"ast","function-bindings");
EXT(YsyntaxYsexpr_operator,"syntax","sexpr-operator");
DEF(YastYLcomputed_programG,"ast","<computed-program>");
DEF(YastYLalternativeG,"ast","<alternative>");
DEF(YastYobjectify_method_definition,"ast","objectify-method-definition");
DEF(YastYmonitor_handler,"ast","monitor-handler");
DEF(YastYfunction_body,"ast","function-body");
DEF(YastYobjectify_definition,"ast","objectify-definition");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
DEF(YastYTprimitivesT,"ast","*primitives*");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
DEF(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
DEF(YastYconvert2arguments,"ast","convert2arguments");
EXT(YruntimeYalways,"runtime","always");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYformat,"runtime","format");
DEF(YastYapplication_binding_setter,"ast","application-binding-setter");
EXT(YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
DEF(YastYbinding_handler_setter,"ast","binding-handler-setter");
EXT(YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
DEF(YastYinit_p2c_boot_environment,"ast","init-p2c-boot-environment");
DEF(YastYfix_let_types_setter,"ast","fix-let-types-setter");
DEF(YastYfix_let_arguments,"ast","fix-let-arguments");
DEF(YastYlocals_body,"ast","locals-body");
EXT(YruntimeYfirst_then,"runtime","first-then");
DEF(YastYDsexpr_compile_time_tag,"ast","$sexpr-compile-time-tag");
DEF(YastYframe_bindings,"ast","frame-bindings");
DEF(YastYapplication_function_setter,"ast","application-function-setter");
DEF(YastYobjectify_use_module,"ast","objectify-use-module");
EXT(YruntimeYrev,"runtime","rev");
DEF(YastYobjectify_free_global_reference,"ast","objectify-free-global-reference");
EXT(YLbagG,"boot","<bag>");
DEF(YastYapplication_knownQ,"ast","application-known?");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeY_,"runtime","-");
DEF(YastYLast_functionG,"ast","<ast-function>");
DEF(YastYfix_let_types,"ast","fix-let-types");
DEF(YastYsequentialize,"ast","sequentialize");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYmap2,"runtime","map2");
DEF(YastYexport_bindingX,"ast","export-binding!");
DEF(YastYapplication_tailQ,"ast","application-tail?");
DEF(YastYobjectify_boundQ,"ast","objectify-bound?");
EXT(YruntimeYGE,"runtime",">=");
EXT(YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
DEF(YastYLmonitorG,"ast","<monitor>");
EXT(Yfun_names,"boot","fun-names");
DEF(YastYalternative_consequent,"ast","alternative-consequent");
DEF(YastYfunction_kind,"ast","function-kind");
DEF(YastYfunction_naryQ,"ast","function-nary?");
EXT(Ysig_arity,"boot","sig-arity");
DEF(YastYLast_methodG,"ast","<ast-method>");
DEF(YastYalternative_alternant_setter,"ast","alternative-alternant-setter");
EXT(YruntimeYfile_mtime,"runtime","file-mtime");
EXT(YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
DEF(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
EXT(YLlogG,"boot","<log>");
DEF(YastYbinding_freeQ,"ast","binding-free?");
DEF(YastYmodule_exports,"ast","module-exports");
DEF(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
DEF(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
EXT(YPvnul,"boot","%vnul");
EXT(YsyntaxYsexpr_operands,"syntax","sexpr-operands");
DEF(YastYobjectify_assignment,"ast","objectify-assignment");
EXT(YwriteYdisplay,"write","display");
DEF(YastYregister_moduleX,"ast","register-module!");
DEF(YastYbinding_global_box,"ast","binding-global-box");
DEF(YastYmodule_target_environment_setter,"ast","module-target-environment-setter");
EXT(Yobject_parents,"boot","object-parents");
EXT(YruntimeYdo2,"runtime","do2");
DEF(YastYLboundQG,"ast","<bound?>");
DEF(YastYLglobal_assignmentG,"ast","<global-assignment>");
DEF(YastYbinding_value,"ast","binding-value");
DEF(YastYenvironment_module_loader_setter,"ast","environment-module-loader-setter");
EXT(YruntimeYdo,"runtime","do");
DEF(YastYobjectify_application,"ast","objectify-application");
DEF(YastYLstatic_environmentG,"ast","<static-environment>");
DEF(YastYexpand_bind_element,"ast","expand-bind-element");
DEF(YastYLvariable_definitionG,"ast","<variable-definition>");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YruntimeYneg,"runtime","neg");
DEF(YastYboundQ_reference_setter,"ast","bound?-reference-setter");
DEF(YastYbinding_name_setter,"ast","binding-name-setter");
DEF(YastYobjectify_primitive_definition,"ast","objectify-primitive-definition");
DEF(YastYregister_primitive,"ast","register-primitive");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
EXT(YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
EXT(YruntimeYtruncateS,"runtime","truncate/");
DEF(YastYLargumentsG,"ast","<arguments>");
DEF(YastYsignature_specs,"ast","signature-specs");
DEF(YastYLunwind_protectG,"ast","<unwind-protect>");
DEF(YastYfab_subset_environment,"ast","fab-subset-environment");
DEF(YastYexpand_pattern,"ast","expand-pattern");
EXT(YruntimeYcat2,"runtime","cat2");
DEF(YastYLruntime_assignmentG,"ast","<runtime-assignment>");
DEF(YastYenvironment_module,"ast","environment-module");
EXT(YsyntaxYsexpr_isa_init_slots,"syntax","sexpr-isa-init-slots");
DEF(YastYLreal_referenceG,"ast","<real-reference>");
EXT(YruntimeYnow_elt,"runtime","now-elt");
DEF(YastYassignment_binding,"ast","assignment-binding");
EXT(YsyntaxYsexpr_make_getter,"syntax","sexpr-make-getter");
DEF(YastYload_and_register_module,"ast","load-and-register-module");
DEF(YastYLapplicationG,"ast","<application>");
DEF(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(YPsnul,"boot","%snul");
DEF(YastYobjectify_export,"ast","objectify-export");
DEF(YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
EXT(YruntimeYdel_dups,"runtime","del-dups");
DEF(YastYLbinding_nameG,"ast","<binding-name>");
EXT(YruntimeYpos,"runtime","pos");
DEF(YastYLstatic_empty_environmentG,"ast","<static-empty-environment>");
DEF(YastYfunction_name,"ast","function-name");
DEF(YastYLglobal_boxG,"ast","<global-box>");
DEF(YastYfix_let_body_setter,"ast","fix-let-body-setter");
DEF(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
DEF(YastYboundQ_reference,"ast","bound?-reference");
EXT(YLtupG,"boot","<tup>");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(Ysig_value,"boot","sig-value");
EXT(YsyntaxYsexpr_monitor_handler,"syntax","sexpr-monitor-handler");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYpeek_char,"runtime","peek-char");
DEF(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
EXT(YruntimeYin,"runtime","in");
DEF(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(YsyntaxYsexpr_monitor_body,"syntax","sexpr-monitor-body");
DEF(YastYobjectify_sequential,"ast","objectify-sequential");
DEF(YastYmodule_exports_setter,"ast","module-exports-setter");
EXT(YruntimeYassoc,"runtime","assoc");
DEF(YastYspecial_define,"ast","special-define");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
DEF(YastYspecial_quasiquote,"ast","special-quasiquote");
EXT(YwriteYenv_object_name,"write","env-object-name");
EXT(YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
EXT(YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
DEF(YastYsignature_specs_setter,"ast","signature-specs-setter");
DEF(YastYconstant_value_setter,"ast","constant-value-setter");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(Yfun_arity,"boot","fun-arity");
DEF(YastYLlocal_assignmentG,"ast","<local-assignment>");
DEF(YastYLraw_constantG,"ast","<raw-constant>");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
DEF(YastYTruntime_moduleT,"ast","*runtime-module*");
EXT(YsyntaxYsexpr_make_setter_name,"syntax","sexpr-make-setter-name");
DEF(YastYapplication_arguments,"ast","application-arguments");
EXT(YLfloG,"boot","<flo>");
EXT(YLoptsG,"boot","<opts>");
DEF(YastYset_module_environments,"ast","set-module-environments");
DEF(YastYobjectify_function,"ast","objectify-function");
DEF(YastYbinding_locative_setter,"ast","binding-locative-setter");
DEF(YastYprocess_closed_application,"ast","process-closed-application");
EXT(YruntimeYnewline,"runtime","newline");
DEF(YastYLprogramG,"ast","<program>");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYelt,"runtime","elt");
DEF(YastYLcompile_timeG,"ast","<compile-time>");
DEF(YastYLfunctionsG,"ast","<functions>");
DEF(YastYinit_runtime,"ast","init-runtime");
EXT(YLgenG,"boot","<gen>");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
EXT(YsyntaxYDsexpr_slot_tag,"syntax","$sexpr-slot-tag");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YLsymG,"boot","<sym>");
EXT(YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
DEF(YastYbinding_module_name_setter,"ast","binding-module-name-setter");
DEF(YastYDsexpr_export_tag,"ast","$sexpr-export-tag");
EXT(YLlocG,"boot","<loc>");
EXT(YLintG,"boot","<int>");
EXT(Yhead,"boot","head");
EXT(YruntimeYread_char,"runtime","read-char");
DEF(YastYTruntime_environmentT,"ast","*runtime-environment*");
EXT(YstringsYstring_repeat,"strings","string-repeat");
DEF(YastYmodule_loader_modules,"ast","module-loader-modules");
EXT(YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
EXT(Yfun_specs,"boot","fun-specs");
DEF(YastYenvironment_uses_modules,"ast","environment-uses-modules");
DEF(YastYbinding_info,"ast","binding-info");
DEF(YastYprobe_module,"ast","probe-module");
DEF(YastYruntime_module_loader,"ast","runtime-module-loader");
EXT(YLslotG,"boot","<slot>");
EXT(YLflatG,"boot","<flat>");
DEF(YastYspecial_define_generic,"ast","special-define-generic");
EXT(YmacrosYmatch_atom,"macros","match-atom");
DEF(YastYLpredefined_referenceG,"ast","<predefined-reference>");
EXT(YruntimeYassocq,"runtime","assocq");
DEF(YastYobjectify_syntax_definition,"ast","objectify-syntax-definition");
EXT(YLfunG,"boot","<fun>");
DEF(YastYruntime_module,"ast","runtime-module");
EXT(YmacrosYtup,"macros","tup");
DEF(YastYbinding_name,"ast","binding-name");
DEF(YastYmodule_syntax_environment,"ast","module-syntax-environment");
EXT(YruntimeYsig,"runtime","sig");
DEF(YastYast_evaluate,"ast","ast-evaluate");
DEF(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
DEF(YastYspecial_unwind_protect,"ast","special-unwind-protect");
DEF(YastYspecial_compile_time,"ast","special-compile-time");
DEF(YastYspecial_set,"ast","special-set");
EXT(YruntimeYsub,"runtime","sub");
DEF(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(Yobject_slots,"boot","object-slots");
EXT(YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
EXT(Yapply,"boot","apply");
DEF(YastYmodule_name_setter,"ast","module-name-setter");
DEF(YastYobjectify_binding,"ast","objectify-binding");
EXT(Yfun_name,"boot","fun-name");
EXT(YruntimeYout,"runtime","out");
EXT(YruntimeYeof_object,"runtime","eof-object");
DEF(YastYbinding_mutableQ_setter,"ast","binding-mutable?-setter");
EXT(Ytail,"boot","tail");
DEF(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
DEF(YastYapplication_tailQ_setter,"ast","application-tail?-setter");
EXT(YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
DEF(YastYmodule_target_environment,"ast","module-target-environment");
EXT(YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
DEF(YastYsignature_value,"ast","signature-value");
DEF(YastYfind_static_global_environment,"ast","find-static-global-environment");
DEF(YastYDsexpr_optionals_type_name,"ast","$sexpr-optionals-type-name");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YruntimeYassq,"runtime","assq");
EXT(Yhead_setter,"boot","head-setter");
EXT(YruntimeYcurry,"runtime","curry");
DEF(YastYspecial_boundQ,"ast","special-bound?");
DEF(YastYspecial_method,"ast","special-method");
EXT(YruntimeYlocative_value,"runtime","locative-value");
DEF(YastYbinding_kind_setter,"ast","binding-kind-setter");
EXT(YruntimeYwrite_string,"runtime","write-string");
DEF(YastYfunctions,"ast","functions");
DEF(YastYcompile_time_program_setter,"ast","compile-time-program-setter");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
DEF(YastYspecial_monitor,"ast","special-monitor");
EXT(YruntimeYto_str,"runtime","to-str");
DEF(YastYfunction_specs,"ast","function-specs");
DEF(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");

/* FORWARD QUOTATIONS: */

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

LOCFOR(fun_objectify_error_0);
LOCFOR(fun_program_type_1);
LOCFOR(fun_program_type_setter_2);
LOCFOR(fun_3);
LOCFOR(fun_program_register_4);
LOCFOR(fun_program_register_5);
LOCFOR(fun_program_register_setter_6);
LOCFOR(fun_7);
LOCFOR(fun_binding_name_8);
LOCFOR(fun_binding_name_setter_9);
LOCFOR(fun_10);
LOCFOR(fun_binding_type_11);
LOCFOR(fun_binding_type_setter_12);
LOCFOR(fun_13);
LOCFOR(fun_global_box_value_14);
LOCFOR(fun_global_box_value_setter_15);
LOCFOR(fun_16);
LOCFOR(fun_binding_kind_17);
LOCFOR(fun_binding_kind_setter_18);
LOCFOR(fun_19);
LOCFOR(fun_binding_module_name_20);
LOCFOR(fun_binding_module_name_setter_21);
LOCFOR(fun_22);
LOCFOR(fun_binding_freeQ_23);
LOCFOR(fun_binding_freeQ_setter_24);
LOCFOR(fun_25);
LOCFOR(fun_binding_info_26);
LOCFOR(fun_binding_info_setter_27);
LOCFOR(fun_28);
LOCFOR(fun_binding_value_29);
LOCFOR(fun_binding_value_setter_30);
LOCFOR(fun_31);
LOCFOR(fun_binding_mutableQ_32);
LOCFOR(fun_binding_mutableQ_setter_33);
LOCFOR(fun_34);
LOCFOR(fun_binding_dynamic_extentQ_35);
LOCFOR(fun_binding_dynamic_extentQ_setter_36);
LOCFOR(fun_37);
LOCFOR(fun_binding_dottedQ_38);
LOCFOR(fun_binding_dottedQ_setter_39);
LOCFOR(fun_40);
LOCFOR(fun_compile_time_program_41);
LOCFOR(fun_compile_time_program_setter_42);
LOCFOR(fun_43);
LOCFOR(fun_reference_binding_44);
LOCFOR(fun_reference_binding_setter_45);
LOCFOR(fun_46);
LOCFOR(fun_reference_called_functionQ_47);
LOCFOR(fun_reference_called_functionQ_setter_48);
LOCFOR(fun_49);
LOCFOR(fun_reference_frame_number_50);
LOCFOR(fun_reference_frame_number_setter_51);
LOCFOR(fun_52);
LOCFOR(fun_reference_frame_offset_53);
LOCFOR(fun_reference_frame_offset_setter_54);
LOCFOR(fun_55);
LOCFOR(fun_boundQ_reference_56);
LOCFOR(fun_boundQ_reference_setter_57);
LOCFOR(fun_58);
LOCFOR(fun_assignment_form_59);
LOCFOR(fun_assignment_form_setter_60);
LOCFOR(fun_61);
LOCFOR(fun_assignment_reference_62);
LOCFOR(fun_assignment_reference_setter_63);
LOCFOR(fun_64);
LOCFOR(fun_assignment_binding_65);
LOCFOR(fun_assignment_binding_setter_66);
LOCFOR(fun_67);
LOCFOR(fun_signature_names_68);
LOCFOR(fun_signature_names_setter_69);
LOCFOR(fun_70);
LOCFOR(fun_signature_specs_71);
LOCFOR(fun_signature_specs_setter_72);
LOCFOR(fun_73);
LOCFOR(fun_signature_naryQ_74);
LOCFOR(fun_signature_naryQ_setter_75);
LOCFOR(fun_76);
LOCFOR(fun_signature_value_77);
LOCFOR(fun_signature_value_setter_78);
LOCFOR(fun_79);
LOCFOR(fun_function_name_80);
LOCFOR(fun_function_name_setter_81);
LOCFOR(fun_82);
LOCFOR(fun_function_signature_83);
LOCFOR(fun_function_signature_setter_84);
LOCFOR(fun_85);
FUNFOR(YastYfunction_bindings);
FUNFOR(YastYfunction_specs);
FUNFOR(YastYfunction_naryQ);
FUNFOR(YastYfunction_value);
LOCFOR(fun_function_kind_90);
LOCFOR(fun_function_body_91);
LOCFOR(fun_function_body_setter_92);
LOCFOR(fun_93);
LOCFOR(fun_function_kind_94);
LOCFOR(fun_function_kind_95);
LOCFOR(fun_function_kind_96);
LOCFOR(fun_alternative_condition_97);
LOCFOR(fun_alternative_condition_setter_98);
LOCFOR(fun_99);
LOCFOR(fun_alternative_consequent_100);
LOCFOR(fun_alternative_consequent_setter_101);
LOCFOR(fun_102);
LOCFOR(fun_alternative_alternant_103);
LOCFOR(fun_alternative_alternant_setter_104);
LOCFOR(fun_105);
LOCFOR(fun_x_1214_106);
LOCFOR(fun_107);
LOCFOR(fun_108);
LOCFOR(fun_x_1218_109);
LOCFOR(fun_110);
LOCFOR(fun_111);
LOCFOR(fun_as_112);
LOCFOR(fun_as_113);
LOCFOR(fun_as_114);
FUNFOR(YastYsequential);
LOCFOR(fun_empty_116);
LOCFOR(fun_constant_value_117);
LOCFOR(fun_constant_value_setter_118);
LOCFOR(fun_119);
LOCFOR(fun_application_arguments_120);
LOCFOR(fun_application_arguments_setter_121);
LOCFOR(fun_122);
LOCFOR(fun_application_tailQ_123);
LOCFOR(fun_application_tailQ_setter_124);
LOCFOR(fun_125);
LOCFOR(fun_application_function_126);
LOCFOR(fun_application_function_setter_127);
LOCFOR(fun_128);
LOCFOR(fun_application_knownQ_129);
LOCFOR(fun_application_knownQ_setter_130);
LOCFOR(fun_131);
LOCFOR(fun_application_binding_132);
LOCFOR(fun_application_binding_setter_133);
LOCFOR(fun_134);
LOCFOR(fun_fix_let_bindings_135);
LOCFOR(fun_fix_let_bindings_setter_136);
LOCFOR(fun_137);
LOCFOR(fun_fix_let_types_138);
LOCFOR(fun_fix_let_types_setter_139);
LOCFOR(fun_140);
LOCFOR(fun_fix_let_arguments_141);
LOCFOR(fun_fix_let_arguments_setter_142);
LOCFOR(fun_143);
LOCFOR(fun_fix_let_body_144);
LOCFOR(fun_fix_let_body_setter_145);
LOCFOR(fun_146);
LOCFOR(fun_as_147);
LOCFOR(fun_as_148);
LOCFOR(fun_as_149);
FUNFOR(YastYtypes);
LOCFOR(fun_empty_151);
LOCFOR(fun_as_152);
LOCFOR(fun_as_153);
LOCFOR(fun_as_154);
FUNFOR(YastYarguments);
LOCFOR(fun_empty_156);
LOCFOR(fun_loop_157);
LOCFOR(fun_as_158);
LOCFOR(fun_locals_bindings_159);
LOCFOR(fun_locals_bindings_setter_160);
LOCFOR(fun_161);
LOCFOR(fun_locals_functions_162);
LOCFOR(fun_locals_functions_setter_163);
LOCFOR(fun_164);
LOCFOR(fun_locals_body_165);
LOCFOR(fun_locals_body_setter_166);
LOCFOR(fun_167);
LOCFOR(fun_bind_exit_main_fun_168);
LOCFOR(fun_bind_exit_main_fun_setter_169);
LOCFOR(fun_170);
LOCFOR(fun_unwind_protect_protected_thunk_171);
LOCFOR(fun_unwind_protect_protected_thunk_setter_172);
LOCFOR(fun_173);
LOCFOR(fun_unwind_protect_cleanup_thunk_174);
LOCFOR(fun_unwind_protect_cleanup_thunk_setter_175);
LOCFOR(fun_176);
LOCFOR(fun_monitor_handler_177);
LOCFOR(fun_monitor_handler_setter_178);
LOCFOR(fun_179);
LOCFOR(fun_monitor_main_thunk_180);
LOCFOR(fun_monitor_main_thunk_setter_181);
LOCFOR(fun_182);
LOCFOR(fun_environment_next_183);
LOCFOR(fun_environment_next_setter_184);
LOCFOR(fun_185);
LOCFOR(fun_environment_bindings_186);
LOCFOR(fun_environment_bindings_setter_187);
LOCFOR(fun_188);
LOCFOR(fun_environment_module_189);
LOCFOR(fun_environment_module_setter_190);
LOCFOR(fun_191);
LOCFOR(fun_environment_module_loader_192);
LOCFOR(fun_environment_module_loader_setter_193);
LOCFOR(fun_194);
LOCFOR(fun_environment_uses_modules_195);
LOCFOR(fun_environment_uses_modules_setter_196);
LOCFOR(fun_197);
LOCFOR(fun_environment_implements_198);
LOCFOR(fun_environment_implements_setter_199);
LOCFOR(fun_200);
LOCFOR(fun_201);
LOCFOR(fun_202);
LOCFOR(fun_env_object_name_203);
LOCFOR(fun_objectify_204);
LOCFOR(fun_objectify_list_205);
LOCFOR(fun_objectify_list_206);
LOCFOR(fun_objectify_207);
LOCFOR(fun_objectify_208);
LOCFOR(fun_objectify_209);
LOCFOR(fun_objectify_210);
LOCFOR(fun_objectify_211);
LOCFOR(fun_objectify_quotation_212);
LOCFOR(fun_objectify_raw_213);
LOCFOR(fun_objectify_boundQ_214);
LOCFOR(fun_objectify_compile_time_215);
LOCFOR(fun_objectify_alternative_216);
LOCFOR(fun_loop_217);
LOCFOR(fun_sequentialize_218);
LOCFOR(fun_loop_219);
LOCFOR(fun_objectify_sequential_220);
LOCFOR(fun_221);
LOCFOR(fun_objectify_application_222);
LOCFOR(fun_223);
LOCFOR(fun_objectify_application_224);
LOCFOR(fun_225);
LOCFOR(fun_objectify_application_226);
LOCFOR(fun_process_closed_application_227);
LOCFOR(fun_gather_arguments_228);
LOCFOR(fun_pack_nary_args_229);
LOCFOR(fun_process_nary_closed_application_230);
LOCFOR(fun_convert2arguments_231);
LOCFOR(fun_objectify_assignment_232);
LOCFOR(fun_objectify_assignment_233);
LOCFOR(fun_objectify_assignment_using_234);
LOCFOR(fun_objectify_assignment_using_235);
LOCFOR(fun_objectify_assignment_using_236);
LOCFOR(fun_ast_define_binding_237);
LOCFOR(fun_objectify_definition_238);
LOCFOR(fun_expand_239);
FUNFOR(YPPmacro);
LOCFOR(fun_objectify_syntax_definition_241);
LOCFOR(fun_objectify_function_definition_242);
FUNFOR(YastYmodule_binding);
LOCFOR(fun_objectify_primitive_definition_244);
LOCFOR(fun_objectify_generic_definition_245);
LOCFOR(fun_objectify_method_definition_246);
LOCFOR(fun_objectify_function_247);
LOCFOR(fun_col_248);
LOCFOR(fun_objectify_signature_249);
LOCFOR(fun_find_250);
LOCFOR(fun_loop_251);
LOCFOR(fun_compute_local_reference_offsets_252);
LOCFOR(fun_objectify_binding_253);
LOCFOR(fun_binding_reference_prototype_254);
LOCFOR(fun_objectify_binding_255);
LOCFOR(fun_objectify_binding_256);
LOCFOR(fun_default_type_257);
LOCFOR(fun_objectify_free_global_reference_258);
LOCFOR(fun_objectify_symbol_259);
LOCFOR(fun_ftype_260);
LOCFOR(fun_as_261);
LOCFOR(fun_as_262);
LOCFOR(fun_as_263);
FUNFOR(YastYfunctions);
LOCFOR(fun_empty_265);
LOCFOR(fun_266);
LOCFOR(fun_267);
LOCFOR(fun_objectify_locals_268);
LOCFOR(fun_objectify_bind_exit_269);
LOCFOR(fun_objectify_unwind_protect_270);
LOCFOR(fun_objectify_monitor_271);
LOCFOR(fun_x_1228_272);
LOCFOR(fun_objectify_export_273);
FUNFOR(YastYimport_globalX);
LOCFOR(fun_objectify_use_module_275);
LOCFOR(fun_expand_bind_list_276);
LOCFOR(fun_expand_bind_list_277);
LOCFOR(fun_expand_bind_list_278);
LOCFOR(fun_expand_bind_listT_279);
LOCFOR(fun_expand_bind_listT_280);
LOCFOR(fun_expand_bind_element_281);
LOCFOR(fun_expand_bind_element_282);
LOCFOR(fun_expand_pattern_283);
LOCFOR(fun_284);
LOCFOR(fun_expand_syntax_if_285);
LOCFOR(fun_r_extendT_286);
LOCFOR(fun_insert_globalX_287);
LOCFOR(fun_288);
LOCFOR(fun_insert_globalsX_289);
LOCFOR(fun_find_static_global_environment_290);
LOCFOR(fun_find_static_global_environment_291);
LOCFOR(fun_find_syntax_environment_292);
LOCFOR(fun_find_environment_module_293);
LOCFOR(fun_loop_294);
LOCFOR(fun_find_binding_295);
LOCFOR(fun_find_binding_296);
LOCFOR(fun_find_binding_297);
LOCFOR(fun_frame_bindings_298);
LOCFOR(fun_register_magic_binding_299);
LOCFOR(fun_magic_bindings_300);
LOCFOR(fun_x_1232_301);
LOCFOR(fun_302);
LOCFOR(fun_303);
LOCFOR(fun_304);
LOCFOR(fun_305);
LOCFOR(fun_306);
LOCFOR(fun_307);
LOCFOR(fun_308);
LOCFOR(fun_309);
LOCFOR(fun_310);
LOCFOR(fun_311);
LOCFOR(fun_312);
LOCFOR(fun_313);
LOCFOR(fun_314);
LOCFOR(fun_315);
LOCFOR(fun_316);
LOCFOR(fun_317);
LOCFOR(fun_318);
LOCFOR(fun_319);
LOCFOR(fun_320);
LOCFOR(fun_321);
LOCFOR(fun_322);
LOCFOR(fun_pairize_323);
LOCFOR(fun_324);
LOCFOR(fun_325);
LOCFOR(fun_326);
LOCFOR(fun_327);
LOCFOR(fun_328);
LOCFOR(fun_329);
LOCFOR(fun_ast_macro_expand_330);
LOCFOR(fun_331);
LOCFOR(fun_332);
LOCFOR(fun_333);
LOCFOR(fun_334);
LOCFOR(fun_primitives_335);
LOCFOR(fun_register_primitive_336);
FUNFOR(YastYfab_primitive);
LOCFOR(fun_x_1236_338);
LOCFOR(fun_339);
LOCFOR(fun_340);
LOCFOR(fun_module_loader_modules_341);
LOCFOR(fun_module_loader_modules_setter_342);
LOCFOR(fun_343);
LOCFOR(fun_module_loader_stack_344);
LOCFOR(fun_module_loader_stack_setter_345);
LOCFOR(fun_346);
LOCFOR(fun_module_name_347);
LOCFOR(fun_module_name_setter_348);
LOCFOR(fun_349);
LOCFOR(fun_module_target_environment_350);
LOCFOR(fun_module_target_environment_setter_351);
LOCFOR(fun_352);
LOCFOR(fun_module_syntax_environment_353);
LOCFOR(fun_module_syntax_environment_setter_354);
LOCFOR(fun_355);
LOCFOR(fun_module_exports_356);
LOCFOR(fun_module_exports_setter_357);
LOCFOR(fun_358);
FUNFOR(YastYset_module_environments);
LOCFOR(fun_360);
FUNFOR(YastYdo_module_loader_modules);
LOCFOR(fun_module_loader_module_type_362);
FUNFOR(YastYregister_moduleX);
FUNFOR(YastYprobe_module);
LOCFOR(fun_365);
LOCFOR(fun_366);
FUNFOR(YastYload_and_register_module);
FUNFOR(YastYexport_bindingX);
FUNFOR(YastYbinding_native_toQ);
LOCFOR(fun_370);
FUNFOR(YastYreport_undefined_global_bindings);
LOCFOR(fun_372);
LOCFOR(fun_373);
LOCFOR(fun_374);
LOCFOR(fun_add_user_375);
FUNFOR(YastYcompute_transitive_users);
LOCFOR(fun_377);
FUNFOR(YastYremove_module_internalX);
LOCFOR(fun_379);
FUNFOR(YastYremove_modules_by_nameX);
FUNFOR(YastYfab_static_global_environment);
LOCFOR(fun_x_1243_382);
FUNFOR(YastYcopy_environment_bindings);
LOCFOR(fun_fab_subset_environment_384);
FUNFOR(YastYruntime_environment);
FUNFOR(YastYruntime_module);
FUNFOR(YastYruntime_module_loader);
LOCFOR(fun_388);
FUNFOR(YastYinit_runtime);
FUNFOR(YastYfab_syntax_environment);
FUNFOR(YastYfab_p2c_module);
FUNFOR(YastYinit_p2c_boot_environment);
FUNFOR(YastYinit_p2c_regular_environment);
FUNFOR(YastYinit_ast);
LOCFOR(fun_loop_395);
FUNFOR(YastYdo_static_global_bindings);
extern P YastY___main_0___ ();
extern P YastY___main_1___ ();
extern P YastY___main_2___ ();
extern P YastY___main_3___ ();
extern P YastY___main_4___ ();
extern P YastY___main_5___ ();
extern P YastY___main_6___ ();
extern P YastY___main_7___ ();
extern P YastY___main_8___ ();
extern P YastY___main_9___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_objectify_error_0) {
  ARG(arguments_, 0);
  ARG(message_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yapply),CHKREF(Yerror),message_,arguments_);
  QRET(T0);
}

FUNCODEDEF(fun_program_type_1) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYprogram_type));
  QRET(T0);
}

FUNCODEDEF(fun_program_type_setter_2) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYprogram_type));
  QRET(T0);
}

FUNCODEDEF(fun_3) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_program_register_4) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_program_register_5) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYprogram_register));
  QRET(T0);
}

FUNCODEDEF(fun_program_register_setter_6) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYprogram_register));
  QRET(T0);
}

FUNCODEDEF(fun_7) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_name_8) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYbinding_name));
  QRET(T0);
}

FUNCODEDEF(fun_binding_name_setter_9) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYbinding_name));
  QRET(T0);
}

FUNCODEDEF(fun_10) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_binding_type_11) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYbinding_type));
  QRET(T0);
}

FUNCODEDEF(fun_binding_type_setter_12) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYbinding_type));
  QRET(T0);
}

FUNCODEDEF(fun_13) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_global_box_value_14) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYglobal_box_value));
  QRET(T0);
}

FUNCODEDEF(fun_global_box_value_setter_15) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYglobal_box_value));
  QRET(T0);
}

FUNCODEDEF(fun_16) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_binding_kind_17) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYbinding_kind));
  QRET(T0);
}

FUNCODEDEF(fun_binding_kind_setter_18) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYbinding_kind));
  QRET(T0);
}

FUNCODEDEF(fun_19) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(lit_2));
}

FUNCODEDEF(fun_binding_module_name_20) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYbinding_module_name));
  QRET(T0);
}

FUNCODEDEF(fun_binding_module_name_setter_21) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYbinding_module_name));
  QRET(T0);
}

FUNCODEDEF(fun_22) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_binding_freeQ_23) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYbinding_freeQ));
  QRET(T0);
}

FUNCODEDEF(fun_binding_freeQ_setter_24) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYbinding_freeQ));
  QRET(T0);
}

FUNCODEDEF(fun_25) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_info_26) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYbinding_info));
  QRET(T0);
}

FUNCODEDEF(fun_binding_info_setter_27) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYbinding_info));
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_value_29) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYbinding_value));
  QRET(T0);
}

FUNCODEDEF(fun_binding_value_setter_30) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYbinding_value));
  QRET(T0);
}

FUNCODEDEF(fun_31) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_mutableQ_32) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYbinding_mutableQ));
  QRET(T0);
}

FUNCODEDEF(fun_binding_mutableQ_setter_33) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYbinding_mutableQ));
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_dynamic_extentQ_35) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYbinding_dynamic_extentQ));
  QRET(T0);
}

FUNCODEDEF(fun_binding_dynamic_extentQ_setter_36) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYbinding_dynamic_extentQ));
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPtrue);
}

FUNCODEDEF(fun_binding_dottedQ_38) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYbinding_dottedQ));
  QRET(T0);
}

FUNCODEDEF(fun_binding_dottedQ_setter_39) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYbinding_dottedQ));
  QRET(T0);
}

FUNCODEDEF(fun_40) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_compile_time_program_41) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYcompile_time_program));
  QRET(T0);
}

FUNCODEDEF(fun_compile_time_program_setter_42) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYcompile_time_program));
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_reference_binding_44) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYreference_binding));
  QRET(T0);
}

FUNCODEDEF(fun_reference_binding_setter_45) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYreference_binding));
  QRET(T0);
}

FUNCODEDEF(fun_46) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_reference_called_functionQ_47) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYreference_called_functionQ));
  QRET(T0);
}

FUNCODEDEF(fun_reference_called_functionQ_setter_48) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYreference_called_functionQ));
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_reference_frame_number_50) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYreference_frame_number));
  QRET(T0);
}

FUNCODEDEF(fun_reference_frame_number_setter_51) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYreference_frame_number));
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_reference_frame_offset_53) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYreference_frame_offset));
  QRET(T0);
}

FUNCODEDEF(fun_reference_frame_offset_setter_54) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYreference_frame_offset));
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_boundQ_reference_56) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYboundQ_reference));
  QRET(T0);
}

FUNCODEDEF(fun_boundQ_reference_setter_57) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYboundQ_reference));
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_assignment_form_59) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYassignment_form));
  QRET(T0);
}

FUNCODEDEF(fun_assignment_form_setter_60) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYassignment_form));
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_assignment_reference_62) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYassignment_reference));
  QRET(T0);
}

FUNCODEDEF(fun_assignment_reference_setter_63) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYassignment_reference));
  QRET(T0);
}

FUNCODEDEF(fun_64) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_assignment_binding_65) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYassignment_binding));
  QRET(T0);
}

FUNCODEDEF(fun_assignment_binding_setter_66) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYassignment_binding));
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_signature_names_68) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYsignature_names));
  QRET(T0);
}

FUNCODEDEF(fun_signature_names_setter_69) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYsignature_names));
  QRET(T0);
}

FUNCODEDEF(fun_70) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_signature_specs_71) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYsignature_specs));
  QRET(T0);
}

FUNCODEDEF(fun_signature_specs_setter_72) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYsignature_specs));
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_signature_naryQ_74) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYsignature_naryQ));
  QRET(T0);
}

FUNCODEDEF(fun_signature_naryQ_setter_75) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYsignature_naryQ));
  QRET(T0);
}

FUNCODEDEF(fun_76) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_signature_value_77) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYsignature_value));
  QRET(T0);
}

FUNCODEDEF(fun_signature_value_setter_78) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYsignature_value));
  QRET(T0);
}

FUNCODEDEF(fun_79) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_name_80) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYfunction_name));
  QRET(T0);
}

FUNCODEDEF(fun_function_name_setter_81) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYfunction_name));
  QRET(T0);
}

FUNCODEDEF(fun_82) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_signature_83) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYfunction_signature));
  QRET(T0);
}

FUNCODEDEF(fun_function_signature_setter_84) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYfunction_signature));
  QRET(T0);
}

FUNCODEDEF(fun_85) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(YastYfunction_bindings) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YastYfunction_signature),x_);
  T0 = CALL1(CHKREF(YastYsignature_names),T1);
  QRET(T0);
}

FUNCODEDEF(YastYfunction_specs) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YastYfunction_signature),x_);
  T0 = CALL1(CHKREF(YastYsignature_specs),T1);
  QRET(T0);
}

FUNCODEDEF(YastYfunction_naryQ) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YastYfunction_signature),x_);
  T0 = CALL1(CHKREF(YastYsignature_naryQ),T1);
  QRET(T0);
}

FUNCODEDEF(YastYfunction_value) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YastYfunction_signature),x_);
  T0 = CALL1(CHKREF(YastYsignature_value),T1);
  QRET(T0);
}

FUNCODEDEF(fun_function_kind_90) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(lit_3));
}

FUNCODEDEF(fun_function_body_91) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYfunction_body));
  QRET(T0);
}

FUNCODEDEF(fun_function_body_setter_92) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYfunction_body));
  QRET(T0);
}

FUNCODEDEF(fun_93) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_function_kind_94) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(lit_4));
}

FUNCODEDEF(fun_function_kind_95) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(lit_5));
}

FUNCODEDEF(fun_function_kind_96) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(lit_6));
}

FUNCODEDEF(fun_alternative_condition_97) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYalternative_condition));
  QRET(T0);
}

FUNCODEDEF(fun_alternative_condition_setter_98) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYalternative_condition));
  QRET(T0);
}

FUNCODEDEF(fun_99) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_alternative_consequent_100) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYalternative_consequent));
  QRET(T0);
}

FUNCODEDEF(fun_alternative_consequent_setter_101) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYalternative_consequent));
  QRET(T0);
}

FUNCODEDEF(fun_102) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_alternative_alternant_103) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYalternative_alternant));
  QRET(T0);
}

FUNCODEDEF(fun_alternative_alternant_setter_104) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYalternative_alternant));
  QRET(T0);
}

FUNCODEDEF(fun_105) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_x_1214_106) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_107) {
  ARG(return_, 0);
  P x_1213F1182;
  P x_1213F1181;
  P x_1213F1180;
  P x_1213F1179;
  P x_1213F1178;
  P DemptyF1177;
  P classF1176;
  P supersF1175;
  P nameF1174;
  P x_1213F1173;
  P x_1214F1172;
  P T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140;
  P T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124;
  P T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108;
  P T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92;
  P T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76;
  P T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60;
  P T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T155 = FUNSHELL(0,fun_x_1214_106,1);
  x_1214F1172 = T155;
  FUNINIT(x_1214F1172, 1,return_);
  x_1213F1173 = FREEREF(0);
  nameF1174 = YPfalse;
  nameF1174 = BOXFAB(nameF1174);
  supersF1175 = YPfalse;
  supersF1175 = BOXFAB(supersF1175);
  T18 = CALL2(CHKREF(YisaQ),x_1213F1173,CHKREF(YLlstG));
  if (T18 != YPfalse) {
    T17 = CALL3(CHKREF(YmacrosYmatch_atom),x_1213F1173,CHKREF(lit_64),x_1214F1172);
    x_1213F1178 = T17;
    T15 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1213F1178,x_1214F1172);
    BOXVAL(nameF1174) = T15;
    T16 = CALL1(CHKREF(Ytail),x_1213F1178);
    x_1213F1179 = T16;
    T13 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1213F1179,x_1214F1172);
    x_1213F1180 = T13;
    BOXVAL(supersF1175) = x_1213F1180;
    x_1213F1181 = Ynil;
    T12 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1213F1181,x_1214F1172);
    T11 = T12;
    T14 = CALL1(CHKREF(Ytail),x_1213F1179);
    x_1213F1182 = T14;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1213F1182,x_1214F1172);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1214F1172,CHKREF(lit_63),x_1213F1173);
  }
  T154 = BOXVAL(nameF1174);
  T153 = CALL3(CHKREF(YmacrosYmake_sym),CHKREF(lit_62),T154,CHKREF(lit_61));
  classF1176 = T153;
  T152 = BOXVAL(nameF1174);
  T151 = CALL3(CHKREF(YmacrosYmake_sym),CHKREF(lit_60),T152,CHKREF(lit_59));
  DemptyF1177 = T151;
  T150 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_58));
  T149 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_57));
  T148 = CALL1(CHKREF(YmacrosYlst),classF1176);
  T147 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_56));
  T146 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_55));
  T145 = BOXVAL(supersF1175);
  T144 = CALL3(CHKREF(YmacrosYcat),T146,T145,Ynil);
  T143 = CALL1(CHKREF(YmacrosYlst),T144);
  T142 = CALL3(CHKREF(YmacrosYcat),T147,T143,Ynil);
  T141 = CALL1(CHKREF(YmacrosYlst),T142);
  T140 = CALLN(CHKREF(YmacrosYcat),4,T149,T148,T141,Ynil);
  T139 = CALL1(CHKREF(YmacrosYlst),T140);
  T138 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_54));
  T137 = CALL1(CHKREF(YmacrosYlst),DemptyF1177);
  T136 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_53));
  T135 = CALL1(CHKREF(YmacrosYlst),classF1176);
  T134 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_52));
  T133 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_51));
  T132 = CALL1(CHKREF(YmacrosYlst),YPfalse);
  T131 = CALLN(CHKREF(YmacrosYcat),4,T134,T133,T132,Ynil);
  T130 = CALL1(CHKREF(YmacrosYlst),T131);
  T129 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_50));
  T128 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_49));
  T127 = CALL1(CHKREF(YmacrosYlst),YPfalse);
  T126 = CALLN(CHKREF(YmacrosYcat),4,T129,T128,T127,Ynil);
  T125 = CALL1(CHKREF(YmacrosYlst),T126);
  T124 = CALLN(CHKREF(YmacrosYcat),5,T136,T135,T130,T125,Ynil);
  T123 = CALL1(CHKREF(YmacrosYlst),T124);
  T122 = CALLN(CHKREF(YmacrosYcat),4,T138,T137,T123,Ynil);
  T121 = CALL1(CHKREF(YmacrosYlst),T122);
  T120 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_48));
  T119 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_47));
  T118 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_46));
  T117 = CALL1(CHKREF(YmacrosYlst),classF1176);
  T116 = CALL3(CHKREF(YmacrosYcat),T118,T117,Ynil);
  T115 = CALL1(CHKREF(YmacrosYlst),T116);
  T114 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_45));
  T113 = CALL1(CHKREF(YmacrosYlst),classF1176);
  T112 = CALL3(CHKREF(YmacrosYcat),T114,T113,Ynil);
  T111 = CALL1(CHKREF(YmacrosYlst),T112);
  T110 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_44));
  T109 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_43));
  T108 = CALLN(CHKREF(YmacrosYcat),5,T115,T111,T110,T109,Ynil);
  T107 = CALL1(CHKREF(YmacrosYlst),T108);
  T106 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_42));
  T105 = CALLN(CHKREF(YmacrosYcat),5,T120,T119,T107,T106,Ynil);
  T104 = CALL1(CHKREF(YmacrosYlst),T105);
  T103 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_41));
  T102 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_40));
  T101 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_39));
  T100 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_38));
  T99 = CALL3(CHKREF(YmacrosYcat),T101,T100,Ynil);
  T98 = CALL1(CHKREF(YmacrosYlst),T99);
  T97 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_37));
  T96 = CALL1(CHKREF(YmacrosYlst),classF1176);
  T95 = CALL3(CHKREF(YmacrosYcat),T97,T96,Ynil);
  T94 = CALL1(CHKREF(YmacrosYlst),T95);
  T93 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_36));
  T92 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_35));
  T91 = CALLN(CHKREF(YmacrosYcat),5,T98,T94,T93,T92,Ynil);
  T90 = CALL1(CHKREF(YmacrosYlst),T91);
  T89 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_34));
  T88 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_33));
  T87 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_32));
  T86 = CALLN(CHKREF(YmacrosYcat),4,T89,T88,T87,Ynil);
  T85 = CALL1(CHKREF(YmacrosYlst),T86);
  T84 = CALLN(CHKREF(YmacrosYcat),5,T103,T102,T90,T85,Ynil);
  T83 = CALL1(CHKREF(YmacrosYlst),T84);
  T82 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_31));
  T81 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_30));
  T80 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_29));
  T79 = CALL1(CHKREF(YmacrosYlst),classF1176);
  T78 = CALL3(CHKREF(YmacrosYcat),T80,T79,Ynil);
  T77 = CALL1(CHKREF(YmacrosYlst),T78);
  T76 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_28));
  T75 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_27));
  T74 = CALL3(CHKREF(YmacrosYcat),T76,T75,Ynil);
  T73 = CALL1(CHKREF(YmacrosYlst),T74);
  T72 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_26));
  T71 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_25));
  T70 = CALLN(CHKREF(YmacrosYcat),5,T77,T73,T72,T71,Ynil);
  T69 = CALL1(CHKREF(YmacrosYlst),T70);
  T68 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_24));
  T67 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_23));
  T66 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_22));
  T65 = CALL1(CHKREF(YmacrosYlst),classF1176);
  T64 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_21));
  T63 = CALLN(CHKREF(YmacrosYcat),4,T66,T65,T64,Ynil);
  T62 = CALL1(CHKREF(YmacrosYlst),T63);
  T61 = CALLN(CHKREF(YmacrosYcat),4,T68,T67,T62,Ynil);
  T60 = CALL1(CHKREF(YmacrosYlst),T61);
  T59 = CALLN(CHKREF(YmacrosYcat),5,T82,T81,T69,T60,Ynil);
  T58 = CALL1(CHKREF(YmacrosYlst),T59);
  T57 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_20));
  T56 = BOXVAL(nameF1174);
  T55 = CALL1(CHKREF(YmacrosYlst),T56);
  T54 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_19));
  T53 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_18));
  T52 = CALL3(CHKREF(YmacrosYcat),T54,T53,Ynil);
  T51 = CALL1(CHKREF(YmacrosYlst),T52);
  T50 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_17));
  T49 = CALL1(CHKREF(YmacrosYlst),classF1176);
  T48 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_16));
  T47 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_15));
  T46 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_14));
  T45 = CALLN(CHKREF(YmacrosYcat),4,T48,T47,T46,Ynil);
  T44 = CALL1(CHKREF(YmacrosYlst),T45);
  T43 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_13));
  T42 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_12));
  T41 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_11));
  T40 = CALLN(CHKREF(YmacrosYcat),4,T43,T42,T41,Ynil);
  T39 = CALL1(CHKREF(YmacrosYlst),T40);
  T38 = CALLN(CHKREF(YmacrosYcat),5,T50,T49,T44,T39,Ynil);
  T37 = CALL1(CHKREF(YmacrosYlst),T38);
  T36 = CALLN(CHKREF(YmacrosYcat),5,T57,T55,T51,T37,Ynil);
  T35 = CALL1(CHKREF(YmacrosYlst),T36);
  T34 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_10));
  T33 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_9));
  T32 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_8));
  T31 = CALL1(CHKREF(YmacrosYlst),classF1176);
  T30 = CALL3(CHKREF(YmacrosYcat),T32,T31,Ynil);
  T29 = CALL1(CHKREF(YmacrosYlst),T30);
  T28 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_7));
  T27 = CALL1(CHKREF(YmacrosYlst),classF1176);
  T26 = CALLN(CHKREF(YmacrosYcat),4,T29,T28,T27,Ynil);
  T25 = CALL1(CHKREF(YmacrosYlst),T26);
  T24 = CALL1(CHKREF(YmacrosYlst),DemptyF1177);
  T23 = CALLN(CHKREF(YmacrosYcat),5,T34,T33,T25,T24,Ynil);
  T22 = CALL1(CHKREF(YmacrosYlst),T23);
  T21 = CALLN(CHKREF(YmacrosYcat),9,T150,T139,T121,T104,T83,T58,T35,T22,Ynil);
  T20 = T21;
  T19 = T20;
  T4 = T19;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_108) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_107,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_x_1218_109) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_110) {
  ARG(return_, 0);
  P x_1217F1187;
  P x_1217F1186;
  P nameF1185;
  P x_1217F1184;
  P x_1218F1183;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
loop:
  T19 = FUNSHELL(0,fun_x_1218_109,1);
  x_1218F1183 = T19;
  FUNINIT(x_1218F1183, 1,return_);
  x_1217F1184 = FREEREF(0);
  nameF1185 = YPfalse;
  nameF1185 = BOXFAB(nameF1185);
  T11 = CALL2(CHKREF(YisaQ),x_1217F1184,CHKREF(YLlstG));
  if (T11 != YPfalse) {
    T10 = CALL3(CHKREF(YmacrosYmatch_atom),x_1217F1184,CHKREF(lit_68),x_1218F1183);
    x_1217F1186 = T10;
    T8 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1217F1186,x_1218F1183);
    BOXVAL(nameF1185) = T8;
    T9 = CALL1(CHKREF(Ytail),x_1217F1186);
    x_1217F1187 = T9;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1217F1187,x_1218F1183);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1218F1183,CHKREF(lit_67),x_1217F1184);
  }
  T18 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_66));
  T17 = BOXVAL(nameF1185);
  T16 = CALL1(CHKREF(YmacrosYlst),T17);
  T15 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_65));
  T14 = CALL2(CHKREF(YmacrosYcat),T15,Ynil);
  T13 = CALL1(CHKREF(YmacrosYlst),T14);
  T12 = CALLN(CHKREF(YmacrosYcat),4,T18,T16,T13,Ynil);
  T2 = T12;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_111) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_110,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_as_112) {
  ARG(x_, 0);
  ARG(p_, 1);
  P a1,a2;
loop:
  RET(x_);
}

FUNCODEDEF(fun_as_113) {
  ARG(x_, 0);
  ARG(p_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(Yapply),CHKREF(YmacrosYlst),x_);
  RET(T0);
}

FUNCODEDEF(fun_as_114) {
  ARG(x_, 0);
  ARG(p_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YmacrosYpair),CHKREF(YastYLsequentialG),x_);
  T0 = CALL2(CHKREF(Yapply),CHKREF(YruntimeYfabs),T1);
  RET(T0);
}

FUNCODEDEF(YastYsequential) {
  ARG(t_, 0);
  ARG(h_, 1);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = (P)YPpair(CHKREF(YastYLsequentialG),Ynil);
  T4 = (P)YPpair(CHKREF(Ytail),Ynil);
  T3 = (P)YPpair(CHKREF(Yhead),T4);
  T2 = (P)YPpair(t_,Ynil);
  T1 = (P)YPpair(h_,T2);
  T0 = CALL3(CHKREF(YPisa),T5,T3,T1);
  QRET(T0);
}

FUNCODEDEF(fun_empty_116) {
  ARG(e_, 0);
  P a1;
loop:
  RET(CHKREF(YastYDsequential_empty));
}

FUNCODEDEF(fun_constant_value_117) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYconstant_value));
  QRET(T0);
}

FUNCODEDEF(fun_constant_value_setter_118) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYconstant_value));
  QRET(T0);
}

FUNCODEDEF(fun_119) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_application_arguments_120) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYapplication_arguments));
  QRET(T0);
}

FUNCODEDEF(fun_application_arguments_setter_121) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYapplication_arguments));
  QRET(T0);
}

FUNCODEDEF(fun_122) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_application_tailQ_123) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYapplication_tailQ));
  QRET(T0);
}

FUNCODEDEF(fun_application_tailQ_setter_124) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYapplication_tailQ));
  QRET(T0);
}

FUNCODEDEF(fun_125) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_application_function_126) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYapplication_function));
  QRET(T0);
}

FUNCODEDEF(fun_application_function_setter_127) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYapplication_function));
  QRET(T0);
}

FUNCODEDEF(fun_128) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_application_knownQ_129) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYapplication_knownQ));
  QRET(T0);
}

FUNCODEDEF(fun_application_knownQ_setter_130) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYapplication_knownQ));
  QRET(T0);
}

FUNCODEDEF(fun_131) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_application_binding_132) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYapplication_binding));
  QRET(T0);
}

FUNCODEDEF(fun_application_binding_setter_133) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYapplication_binding));
  QRET(T0);
}

FUNCODEDEF(fun_134) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_fix_let_bindings_135) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYfix_let_bindings));
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_bindings_setter_136) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYfix_let_bindings));
  QRET(T0);
}

FUNCODEDEF(fun_137) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_fix_let_types_138) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYfix_let_types));
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_types_setter_139) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYfix_let_types));
  QRET(T0);
}

FUNCODEDEF(fun_140) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_fix_let_arguments_141) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYfix_let_arguments));
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_arguments_setter_142) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYfix_let_arguments));
  QRET(T0);
}

FUNCODEDEF(fun_143) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_fix_let_body_144) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYfix_let_body));
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_body_setter_145) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYfix_let_body));
  QRET(T0);
}

FUNCODEDEF(fun_146) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_as_147) {
  ARG(x_, 0);
  ARG(p_, 1);
  P a1,a2;
loop:
  RET(x_);
}

FUNCODEDEF(fun_as_148) {
  ARG(x_, 0);
  ARG(p_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(Yapply),CHKREF(YmacrosYlst),x_);
  RET(T0);
}

FUNCODEDEF(fun_as_149) {
  ARG(x_, 0);
  ARG(p_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YmacrosYpair),CHKREF(YastYLtypesG),x_);
  T0 = CALL2(CHKREF(Yapply),CHKREF(YruntimeYfabs),T1);
  RET(T0);
}

FUNCODEDEF(YastYtypes) {
  ARG(t_, 0);
  ARG(h_, 1);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = (P)YPpair(CHKREF(YastYLtypesG),Ynil);
  T4 = (P)YPpair(CHKREF(Ytail),Ynil);
  T3 = (P)YPpair(CHKREF(Yhead),T4);
  T2 = (P)YPpair(t_,Ynil);
  T1 = (P)YPpair(h_,T2);
  T0 = CALL3(CHKREF(YPisa),T5,T3,T1);
  QRET(T0);
}

FUNCODEDEF(fun_empty_151) {
  ARG(e_, 0);
  P a1;
loop:
  RET(CHKREF(YastYDtypes_empty));
}

FUNCODEDEF(fun_as_152) {
  ARG(x_, 0);
  ARG(p_, 1);
  P a1,a2;
loop:
  RET(x_);
}

FUNCODEDEF(fun_as_153) {
  ARG(x_, 0);
  ARG(p_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(Yapply),CHKREF(YmacrosYlst),x_);
  RET(T0);
}

FUNCODEDEF(fun_as_154) {
  ARG(x_, 0);
  ARG(p_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YmacrosYpair),CHKREF(YastYLargumentsG),x_);
  T0 = CALL2(CHKREF(Yapply),CHKREF(YruntimeYfabs),T1);
  RET(T0);
}

FUNCODEDEF(YastYarguments) {
  ARG(t_, 0);
  ARG(h_, 1);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = (P)YPpair(CHKREF(YastYLargumentsG),Ynil);
  T4 = (P)YPpair(CHKREF(Ytail),Ynil);
  T3 = (P)YPpair(CHKREF(Yhead),T4);
  T2 = (P)YPpair(t_,Ynil);
  T1 = (P)YPpair(h_,T2);
  T0 = CALL3(CHKREF(YPisa),T5,T3,T1);
  QRET(T0);
}

FUNCODEDEF(fun_empty_156) {
  ARG(e_, 0);
  P a1;
loop:
  RET(CHKREF(YastYDarguments_empty));
}

FUNCODEDEF(fun_loop_157) {
  ARG(e_, 0);
  ARG(res_, 1);
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YmacrosYemptyQ),e_);
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YruntimeYrevX),res_);
    T0 = T3;
  } else {
    T2 = CALL2(CHKREF(YastYarguments),res_,e_);
    a1 = T2;
    res_ = a1;
    e_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_as_158) {
  ARG(e_, 0);
  ARG(c_, 1);
  P loopF1188;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_loop_157,1);
  loopF1188 = T2;
  FUNINIT(loopF1188, 1,loopF1188);
  T1 = KCALL2(loopF1188,Ynil,e_);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_locals_bindings_159) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYlocals_bindings));
  QRET(T0);
}

FUNCODEDEF(fun_locals_bindings_setter_160) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYlocals_bindings));
  QRET(T0);
}

FUNCODEDEF(fun_161) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_locals_functions_162) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYlocals_functions));
  QRET(T0);
}

FUNCODEDEF(fun_locals_functions_setter_163) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYlocals_functions));
  QRET(T0);
}

FUNCODEDEF(fun_164) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_locals_body_165) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYlocals_body));
  QRET(T0);
}

FUNCODEDEF(fun_locals_body_setter_166) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYlocals_body));
  QRET(T0);
}

FUNCODEDEF(fun_167) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_bind_exit_main_fun_168) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYbind_exit_main_fun));
  QRET(T0);
}

FUNCODEDEF(fun_bind_exit_main_fun_setter_169) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYbind_exit_main_fun));
  QRET(T0);
}

FUNCODEDEF(fun_170) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_unwind_protect_protected_thunk_171) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYunwind_protect_protected_thunk));
  QRET(T0);
}

FUNCODEDEF(fun_unwind_protect_protected_thunk_setter_172) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYunwind_protect_protected_thunk));
  QRET(T0);
}

FUNCODEDEF(fun_173) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_unwind_protect_cleanup_thunk_174) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYunwind_protect_cleanup_thunk));
  QRET(T0);
}

FUNCODEDEF(fun_unwind_protect_cleanup_thunk_setter_175) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYunwind_protect_cleanup_thunk));
  QRET(T0);
}

FUNCODEDEF(fun_176) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_monitor_handler_177) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYmonitor_handler));
  QRET(T0);
}

FUNCODEDEF(fun_monitor_handler_setter_178) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYmonitor_handler));
  QRET(T0);
}

FUNCODEDEF(fun_179) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_monitor_main_thunk_180) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYmonitor_main_thunk));
  QRET(T0);
}

FUNCODEDEF(fun_monitor_main_thunk_setter_181) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYmonitor_main_thunk));
  QRET(T0);
}

FUNCODEDEF(fun_182) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_environment_next_183) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYenvironment_next));
  QRET(T0);
}

FUNCODEDEF(fun_environment_next_setter_184) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYenvironment_next));
  QRET(T0);
}

FUNCODEDEF(fun_185) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_environment_bindings_186) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYenvironment_bindings));
  QRET(T0);
}

FUNCODEDEF(fun_environment_bindings_setter_187) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYenvironment_bindings));
  QRET(T0);
}

FUNCODEDEF(fun_188) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_environment_module_189) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYenvironment_module));
  QRET(T0);
}

FUNCODEDEF(fun_environment_module_setter_190) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYenvironment_module));
  QRET(T0);
}

FUNCODEDEF(fun_191) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_environment_module_loader_192) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYenvironment_module_loader));
  QRET(T0);
}

FUNCODEDEF(fun_environment_module_loader_setter_193) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYenvironment_module_loader));
  QRET(T0);
}

FUNCODEDEF(fun_194) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_environment_uses_modules_195) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYenvironment_uses_modules));
  QRET(T0);
}

FUNCODEDEF(fun_environment_uses_modules_setter_196) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYenvironment_uses_modules));
  QRET(T0);
}

FUNCODEDEF(fun_197) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYfab),CHKREF(YruntimeYLbufG),YPint((P)0));
  QRET(T0);
}

FUNCODEDEF(fun_environment_implements_198) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYenvironment_implements));
  QRET(T0);
}

FUNCODEDEF(fun_environment_implements_setter_199) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYenvironment_implements));
  QRET(T0);
}

FUNCODEDEF(fun_200) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_201) {
  ARG(binding_, 0);
  P tmpF1190;
  P tmpF1189;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = CALL1(CHKREF(YastYbinding_kind),binding_);
  T11 = CALL2(CHKREF(YmacrosYEE),T12,CHKREF(lit_69));
  tmpF1189 = T11;
  if (tmpF1189 != YPfalse) {
    T10 = CALL1(CHKREF(YastYbinding_global_box),binding_);
    tmpF1190 = T10;
    if (tmpF1190 != YPfalse) {
      T9 = CALL1(CHKREF(YastYbinding_global_box),binding_);
      T8 = CALL1(CHKREF(YastYglobal_box_value),T9);
      T7 = CALL2(CHKREF(YmacrosYEE),FREEREF(1),T8);
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T5 = T6;
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T3 = T4;
  if (T3 != YPfalse) {
    T2 = CALL1(CHKREF(YastYbinding_name),binding_);
    T1 = CALL1(FREEREF(0),T2);
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_202) {
  ARG(return_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_201,2,return_,FREEREF(0));
  T0 = CALL0(CHKREF(YastYruntime_environment));
  CALL2(CHKREF(YastYdo_static_global_bindings),T1,T0);
  QRET(YPfalse);
}

FUNCODEDEF(fun_env_object_name_203) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_202,1,x_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_objectify_204) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(e_, 2);
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T4 = CALL2(CHKREF(YisaQ),e_,CHKREF(YastYLprogramG));
  if (T4 != YPfalse) {
    T0 = e_;
  } else {
    T3 = CALL1(CHKREF(Yhead),e_);
    T2 = CALL3(CHKREF(YastYobjectify),T3,r_,YPfalse);
    T1 = CALLN(CHKREF(YastYobjectify_list),4,T2,e_,r_,tailQ_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_objectify_list_205) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(e_, 2);
  ARG(f_, 3);
  P T1,T0;
  P a1,a2,a3,a4;
loop:
  T1 = CALL1(CHKREF(Ytail),e_);
  T0 = CALLN(CHKREF(YastYobjectify_application),4,f_,T1,r_,tailQ_);
  QRET(T0);
}

FUNCODEDEF(fun_objectify_list_206) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(e_, 2);
  ARG(f_, 3);
  P x_1220F1192;
  P x_1219F1191;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T12 = CALL1(CHKREF(YastYbinding_kind),f_);
  x_1219F1191 = T12;
  T11 = CALL2(CHKREF(YmacrosYEE),x_1219F1191,CHKREF(lit_72));
  if (T11 != YPfalse) {
    T10 = CALL1(CHKREF(YastYbinding_handler),f_);
    T9 = CALL3(T10,e_,r_,tailQ_);
    T1 = T9;
  } else {
    x_1220F1192 = x_1219F1191;
    T8 = CALL2(CHKREF(YmacrosYEE),x_1220F1192,CHKREF(lit_71));
    if (T8 != YPfalse) {
      T7 = CALL1(CHKREF(YastYbinding_handler),f_);
      T6 = CALL3(T7,e_,r_,tailQ_);
      T5 = CALL3(CHKREF(YastYobjectify),T6,r_,tailQ_);
      T3 = T5;
    } else {
      T4 = CALL2(CHKREF(Yerror),CHKREF(lit_70),f_);
      T3 = T4;
    }
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_objectify_207) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(e_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALL2(CHKREF(YastYobjectify_symbol),e_,r_);
  QRET(T0);
}

FUNCODEDEF(fun_objectify_208) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(e_, 2);
  P a1,a2,a3;
loop:
  QRET(e_);
}

FUNCODEDEF(fun_objectify_209) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(e_, 2);
  P a1,a2,a3;
loop:
  QRET(e_);
}

FUNCODEDEF(fun_objectify_210) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(e_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALL2(CHKREF(YastYobjectify_quotation),e_,r_);
  QRET(T0);
}

FUNCODEDEF(fun_objectify_211) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(e_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALL2(CHKREF(YastYobjectify_quotation),e_,r_);
  QRET(T0);
}

FUNCODEDEF(fun_objectify_quotation_212) {
  ARG(r_, 0);
  ARG(value_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = (P)YPpair(CHKREF(YastYLconstantG),Ynil);
  T2 = (P)YPpair(CHKREF(YastYconstant_value),Ynil);
  T1 = (P)YPpair(value_,Ynil);
  T0 = CALL3(CHKREF(YPisa),T3,T2,T1);
  RET(T0);
}

FUNCODEDEF(fun_objectify_raw_213) {
  ARG(r_, 0);
  ARG(value_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = (P)YPpair(CHKREF(YastYLraw_constantG),Ynil);
  T2 = (P)YPpair(CHKREF(YastYconstant_value),Ynil);
  T1 = (P)YPpair(value_,Ynil);
  T0 = CALL3(CHKREF(YPisa),T3,T2,T1);
  RET(T0);
}

FUNCODEDEF(fun_objectify_boundQ_214) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(e_, 2);
  P refF1193;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T5 = CALL2(CHKREF(YastYobjectify_symbol),e_,r_);
  refF1193 = T5;
  T4 = (P)YPpair(CHKREF(YastYLboundQG),Ynil);
  T3 = (P)YPpair(CHKREF(YastYboundQ_reference),Ynil);
  T2 = (P)YPpair(refF1193,Ynil);
  T1 = CALL3(CHKREF(YPisa),T4,T3,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_objectify_compile_time_215) {
  ARG(rtQ_, 0);
  ARG(tailQ_, 1);
  ARG(r_, 2);
  ARG(program_, 3);
  P tmpF1198;
  P astF1197;
  P target_envF1196;
  P syntax_envF1195;
  P modF1194;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2,a3,a4;
loop:
  T16 = CALL1(CHKREF(YastYfind_environment_module),r_);
  modF1194 = T16;
  T15 = CALL1(CHKREF(YastYmodule_syntax_environment),modF1194);
  syntax_envF1195 = T15;
  T14 = CALL1(CHKREF(YastYmodule_target_environment),modF1194);
  target_envF1196 = T14;
  T13 = CALL3(CHKREF(YastYobjectify),program_,syntax_envF1195,tailQ_);
  astF1197 = T13;
  CALL1(CHKREF(YastYast_evaluate),astF1197);
  tmpF1198 = rtQ_;
  if (tmpF1198 != YPfalse) {
    T12 = CALL2(CHKREF(YruntimeYNEE),syntax_envF1195,target_envF1196);
    T11 = T12;
  } else {
    T11 = YPfalse;
  }
  T10 = T11;
  if (T10 != YPfalse) {
    T9 = CALL3(CHKREF(YastYobjectify),program_,r_,tailQ_);
    T4 = T9;
  } else {
    T8 = (P)YPpair(CHKREF(YastYLconstantG),Ynil);
    T7 = (P)YPpair(CHKREF(YastYconstant_value),Ynil);
    T6 = (P)YPpair(YPfalse,Ynil);
    T5 = CALL3(CHKREF(YPisa),T8,T7,T6);
    T4 = T5;
  }
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_objectify_alternative_216) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(a_, 2);
  ARG(c_, 3);
  ARG(t_, 4);
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
loop:
  T10 = (P)YPpair(CHKREF(YastYLalternativeG),Ynil);
  T9 = (P)YPpair(CHKREF(YastYalternative_alternant),Ynil);
  T8 = (P)YPpair(CHKREF(YastYalternative_consequent),T9);
  T7 = (P)YPpair(CHKREF(YastYalternative_condition),T8);
  T6 = CALL3(CHKREF(YastYobjectify),t_,r_,YPfalse);
  T5 = CALL3(CHKREF(YastYobjectify),c_,r_,tailQ_);
  T4 = CALL3(CHKREF(YastYobjectify),a_,r_,tailQ_);
  T3 = (P)YPpair(T4,Ynil);
  T2 = (P)YPpair(T5,T3);
  T1 = (P)YPpair(T6,T2);
  T0 = CALL3(CHKREF(YPisa),T10,T7,T1);
  RET(T0);
}

FUNCODEDEF(fun_loop_217) {
  ARG(eT_, 0);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = CALL1(CHKREF(YmacrosYemptyQ),eT_);
  if (T6 != YPfalse) {
    T5 = CALL1(CHKREF(YruntimeYempty),CHKREF(YastYLsequentialG));
    T0 = T5;
  } else {
    T4 = CALL1(CHKREF(Yhead),eT_);
    T3 = CALL1(CHKREF(Ytail),eT_);
    T2 = KCALL1(FREEREF(0),T3);
    T1 = CALL2(CHKREF(YastYsequential),T4,T2);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_sequentialize_218) {
  ARG(eT_, 0);
  P loopF1199;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = CALL1(CHKREF(YmacrosYemptyQ),eT_);
  if (T12 != YPfalse) {
    T11 = (P)YPpair(CHKREF(YastYLconstantG),Ynil);
    T10 = (P)YPpair(CHKREF(YastYconstant_value),Ynil);
    T9 = (P)YPpair(YPfalse,Ynil);
    T8 = CALL3(CHKREF(YPisa),T11,T10,T9);
    T0 = T8;
  } else {
    T7 = CALL1(CHKREF(Ytail),eT_);
    T6 = CALL1(CHKREF(YmacrosYemptyQ),T7);
    if (T6 != YPfalse) {
      T5 = CALL1(CHKREF(Yhead),eT_);
      T1 = T5;
    } else {
      T4 = FUNSHELL(1,fun_loop_217,1);
      loopF1199 = T4;
      FUNINIT(loopF1199, 1,loopF1199);
      T3 = KCALL1(loopF1199,eT_);
      T2 = T3;
      T1 = T2;
    }
    T0 = T1;
  }
  RET(T0);
}

FUNCODEDEF(fun_loop_219) {
  ARG(eT_, 0);
  ARG(res_, 1);
  P headF1201;
  P tailQF1200;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T12 = CALL1(CHKREF(YmacrosYemptyQ),eT_);
  if (T12 != YPfalse) {
    T11 = CALL1(CHKREF(YruntimeYrevX),res_);
    T0 = T11;
  } else {
    T10 = CALL1(CHKREF(Ytail),eT_);
    T9 = CALL1(CHKREF(YmacrosYemptyQ),T10);
    if (T9 != YPfalse) {
      T8 = FREEREF(0);
    } else {
      T8 = YPfalse;
    }
    tailQF1200 = T8;
    T7 = CALL1(CHKREF(Yhead),eT_);
    T6 = CALL3(CHKREF(YastYobjectify),T7,FREEREF(1),tailQF1200);
    headF1201 = T6;
    T5 = CALL2(CHKREF(YmacrosYpair),headF1201,res_);
    T4 = CALL1(CHKREF(Ytail),eT_);
    a1 = T5;
    a2 = T4;
    res_ = a1;
    eT_ = a2;
    goto loop;
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_objectify_sequential_220) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(eT_, 2);
  P astsF1203;
  P loopF1202;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T4 = FUNSHELL(1,fun_loop_219,3);
  loopF1202 = T4;
  FUNINIT(loopF1202, 3,tailQ_,r_,loopF1202);
  T3 = KCALL2(loopF1202,Ynil,eT_);
  T2 = T3;
  astsF1203 = T2;
  T1 = CALL1(CHKREF(YastYsequentialize),astsF1203);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_221) {
  ARG(e_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(YastYobjectify),e_,FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_objectify_application_222) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(eT_, 2);
  ARG(ff_, 3);
  P eeTF1204;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = FUNFAB(fun_221,1,r_);
  T3 = CALL2(CHKREF(YmacrosYmap),T4,eT_);
  T2 = CALL1(CHKREF(YastYconvert2arguments),T3);
  eeTF1204 = T2;
  T1 = CALLN(CHKREF(YastYprocess_closed_application),4,ff_,eeTF1204,r_,tailQ_);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_223) {
  ARG(e_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(YastYobjectify),e_,FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_objectify_application_224) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(eT_, 2);
  ARG(ff_, 3);
  P fvfF1206;
  P eeTF1205;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T13 = FUNFAB(fun_223,1,r_);
  T12 = CALL2(CHKREF(YmacrosYmap),T13,eT_);
  T11 = CALL1(CHKREF(YastYconvert2arguments),T12);
  eeTF1205 = T11;
  T10 = CALL1(CHKREF(YastYreference_binding),ff_);
  fvfF1206 = T10;
  T9 = (P)YPpair(CHKREF(YastYLpredefined_applicationG),Ynil);
  T8 = (P)YPpair(CHKREF(YastYapplication_tailQ),Ynil);
  T7 = (P)YPpair(CHKREF(YastYapplication_arguments),T8);
  T6 = (P)YPpair(CHKREF(YastYapplication_binding),T7);
  T5 = (P)YPpair(tailQ_,Ynil);
  T4 = (P)YPpair(eeTF1205,T5);
  T3 = (P)YPpair(fvfF1206,T4);
  T2 = CALL3(CHKREF(YPisa),T9,T6,T3);
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_225) {
  ARG(e_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(YastYobjectify),e_,FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_objectify_application_226) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(eT_, 2);
  ARG(ff_, 3);
  P eeTF1207;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T11 = FUNFAB(fun_225,1,r_);
  T10 = CALL2(CHKREF(YmacrosYmap),T11,eT_);
  T9 = CALL1(CHKREF(YastYconvert2arguments),T10);
  eeTF1207 = T9;
  T8 = (P)YPpair(CHKREF(YastYLregular_applicationG),Ynil);
  T7 = (P)YPpair(CHKREF(YastYapplication_tailQ),Ynil);
  T6 = (P)YPpair(CHKREF(YastYapplication_arguments),T7);
  T5 = (P)YPpair(CHKREF(YastYapplication_function),T6);
  T4 = (P)YPpair(tailQ_,Ynil);
  T3 = (P)YPpair(eeTF1207,T4);
  T2 = (P)YPpair(ff_,T3);
  T1 = CALL3(CHKREF(YPisa),T8,T5,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_process_closed_application_227) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(eT_, 2);
  ARG(f_, 3);
  P bF1209;
  P vTF1208;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T25 = CALL1(CHKREF(YastYfunction_bindings),f_);
  vTF1208 = T25;
  T24 = CALL1(CHKREF(YastYfunction_body),f_);
  bF1209 = T24;
  T23 = CALL1(CHKREF(YastYfunction_naryQ),f_);
  if (T23 != YPfalse) {
    T22 = CALLN(CHKREF(YastYprocess_nary_closed_application),4,f_,eT_,r_,tailQ_);
    T2 = T22;
  } else {
    T21 = CALL1(CHKREF(YruntimeYlen),eT_);
    T20 = CALL1(CHKREF(YastYfunction_bindings),f_);
    T19 = CALL1(CHKREF(YruntimeYlen),T20);
    T18 = CALL2(CHKREF(YruntimeYE),T21,T19);
    if (T18 != YPfalse) {
      T17 = (P)YPpair(CHKREF(YastYLfix_letG),Ynil);
      T16 = (P)YPpair(CHKREF(YastYfix_let_body),Ynil);
      T15 = (P)YPpair(CHKREF(YastYfix_let_arguments),T16);
      T14 = (P)YPpair(CHKREF(YastYfix_let_types),T15);
      T13 = (P)YPpair(CHKREF(YastYfix_let_bindings),T14);
      T12 = CALL1(CHKREF(YastYfunction_bindings),f_);
      T11 = CALL1(CHKREF(YastYfunction_specs),f_);
      T10 = CALL1(CHKREF(YastYfunction_body),f_);
      T9 = (P)YPpair(T10,Ynil);
      T8 = (P)YPpair(eT_,T9);
      T7 = (P)YPpair(T11,T8);
      T6 = (P)YPpair(T12,T7);
      T5 = CALL3(CHKREF(YPisa),T17,T13,T6);
      T3 = T5;
    } else {
      T4 = CALL3(CHKREF(YastYobjectify_error),CHKREF(lit_73),f_,eT_);
      T3 = T4;
    }
    T2 = T3;
  }
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_gather_arguments_228) {
  ARG(vT_, 0);
  ARG(eT_, 1);
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T14 = CALL1(CHKREF(Yhead),vT_);
  T13 = CALL1(CHKREF(YastYbinding_dottedQ),T14);
  if (T13 != YPfalse) {
    T12 = KCALL1(FREEREF(3),eT_);
    T11 = CALL3(CHKREF(YastYobjectify),T12,FREEREF(2),YPfalse);
    T10 = CALL1(CHKREF(YruntimeYempty),CHKREF(YastYLargumentsG));
    T9 = CALL2(CHKREF(YastYarguments),T11,T10);
    T0 = T9;
  } else {
    T8 = CALL1(CHKREF(YmacrosYemptyQ),eT_);
    if (T8 != YPfalse) {
      T7 = CALL3(CHKREF(YastYobjectify_error),CHKREF(lit_74),FREEREF(1),eT_);
      T1 = T7;
    } else {
      T6 = CALL1(CHKREF(Yhead),eT_);
      T5 = CALL1(CHKREF(Ytail),eT_);
      T4 = CALL1(CHKREF(Ytail),vT_);
      T3 = KCALL2(FREEREF(0),T5,T4);
      T2 = CALL2(CHKREF(YastYarguments),T6,T3);
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_pack_nary_args_229) {
  ARG(eT_, 0);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = CALL1(CHKREF(YmacrosYemptyQ),eT_);
  if (T6 != YPfalse) {
    T5 = CALL2(CHKREF(YmacrosYlst),CHKREF(lit_76),Ynil);
    T0 = T5;
  } else {
    T4 = CALL1(CHKREF(Yhead),eT_);
    T3 = CALL1(CHKREF(Ytail),eT_);
    T2 = KCALL1(FREEREF(0),T3);
    T1 = CALL3(CHKREF(YmacrosYlst),CHKREF(lit_75),T4,T2);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_process_nary_closed_application_230) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(eT_, 2);
  ARG(f_, 3);
  P oF1213;
  P vTF1212;
  P gather_argumentsF1211;
  P pack_nary_argsF1210;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T19 = FUNSHELL(1,fun_pack_nary_args_229,1);
  pack_nary_argsF1210 = T19;
  T18 = FUNSHELL(1,fun_gather_arguments_228,4);
  gather_argumentsF1211 = T18;
  FUNINIT(pack_nary_argsF1210, 1,pack_nary_argsF1210);
  FUNINIT(gather_argumentsF1211, 4,gather_argumentsF1211,f_,r_,pack_nary_argsF1210);
  T17 = CALL1(CHKREF(YastYfunction_bindings),f_);
  vTF1212 = T17;
  T16 = (P)YPpair(CHKREF(YastYLfix_letG),Ynil);
  T15 = (P)YPpair(CHKREF(YastYfix_let_body),Ynil);
  T14 = (P)YPpair(CHKREF(YastYfix_let_arguments),T15);
  T13 = (P)YPpair(CHKREF(YastYfix_let_types),T14);
  T12 = (P)YPpair(CHKREF(YastYfix_let_bindings),T13);
  T11 = CALL1(CHKREF(YastYfunction_specs),f_);
  T10 = KCALL2(gather_argumentsF1211,eT_,vTF1212);
  T9 = CALL1(CHKREF(YastYfunction_body),f_);
  T8 = (P)YPpair(T9,Ynil);
  T7 = (P)YPpair(T10,T8);
  T6 = (P)YPpair(T11,T7);
  T5 = (P)YPpair(vTF1212,T6);
  T4 = CALL3(CHKREF(YPisa),T16,T12,T5);
  oF1213 = T4;
  T3 = CALL1(CHKREF(YruntimeYlast),vTF1212);
  CALL2(CHKREF(YastYbinding_dottedQ_setter),YPfalse,T3);
  T2 = oF1213;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_convert2arguments_231) {
  ARG(eT_, 0);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = CALL1(CHKREF(YmacrosYemptyQ),eT_);
  if (T6 != YPfalse) {
    T5 = CALL1(CHKREF(YruntimeYempty),CHKREF(YastYLargumentsG));
    T0 = T5;
  } else {
    T4 = CALL1(CHKREF(Yhead),eT_);
    T3 = CALL1(CHKREF(Ytail),eT_);
    T2 = CALL1(CHKREF(YastYconvert2arguments),T3);
    T1 = CALL2(CHKREF(YastYarguments),T4,T2);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_objectify_assignment_232) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(e_, 2);
  ARG(binding_, 3);
  P opF1214;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T10 = CALL1(CHKREF(YsyntaxYsexpr_operator),binding_);
  opF1214 = T10;
  T9 = CALL1(CHKREF(YsyntaxYsexpr_variableQ),opF1214);
  if (T9 != YPfalse) {
    T8 = CALL1(CHKREF(YsyntaxYsexpr_make_setter_name),opF1214);
    T7 = CALL3(CHKREF(YastYobjectify),T8,r_,YPfalse);
    T6 = CALL1(CHKREF(YsyntaxYsexpr_operands),binding_);
    T5 = CALL2(CHKREF(YmacrosYpair),e_,T6);
    T4 = CALL2(CHKREF(YsyntaxYsexpr_make_application),T7,T5);
    T3 = CALL3(CHKREF(YastYobjectify),T4,r_,tailQ_);
    T1 = T3;
  } else {
    T2 = CALL2(CHKREF(YastYobjectify_error),CHKREF(lit_77),e_);
    T1 = T2;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_233) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(e_, 2);
  ARG(binding_, 3);
  P valF1216;
  P refF1215;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = CALL3(CHKREF(YastYobjectify),binding_,r_,YPfalse);
  refF1215 = T4;
  T3 = CALL3(CHKREF(YastYobjectify),e_,r_,YPfalse);
  valF1216 = T3;
  T2 = CALL2(CHKREF(YastYobjectify_assignment_using),refF1215,valF1216);
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_using_234) {
  ARG(val_, 0);
  ARG(ref_, 1);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T0 = CALL1(CHKREF(YastYreference_binding),ref_);
  CALL2(CHKREF(YastYbinding_mutableQ_setter),YPtrue,T0);
  T6 = (P)YPpair(CHKREF(YastYLlocal_assignmentG),Ynil);
  T5 = (P)YPpair(CHKREF(YastYassignment_form),Ynil);
  T4 = (P)YPpair(CHKREF(YastYassignment_reference),T5);
  T3 = (P)YPpair(val_,Ynil);
  T2 = (P)YPpair(ref_,T3);
  T1 = CALL3(CHKREF(YPisa),T6,T4,T2);
  RET(T1);
}

FUNCODEDEF(fun_objectify_assignment_using_235) {
  ARG(val_, 0);
  ARG(ref_, 1);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T6 = (P)YPpair(CHKREF(YastYLglobal_assignmentG),Ynil);
  T5 = (P)YPpair(CHKREF(YastYassignment_form),Ynil);
  T4 = (P)YPpair(CHKREF(YastYassignment_binding),T5);
  T3 = CALL1(CHKREF(YastYreference_binding),ref_);
  T2 = (P)YPpair(val_,Ynil);
  T1 = (P)YPpair(T3,T2);
  T0 = CALL3(CHKREF(YPisa),T6,T4,T1);
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_using_236) {
  ARG(val_, 0);
  ARG(ref_, 1);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T6 = (P)YPpair(CHKREF(YastYLruntime_assignmentG),Ynil);
  T5 = (P)YPpair(CHKREF(YastYassignment_form),Ynil);
  T4 = (P)YPpair(CHKREF(YastYassignment_binding),T5);
  T3 = CALL1(CHKREF(YastYreference_binding),ref_);
  T2 = (P)YPpair(val_,Ynil);
  T1 = (P)YPpair(T3,T2);
  T0 = CALL3(CHKREF(YPisa),T6,T4,T1);
  RET(T0);
}

FUNCODEDEF(fun_ast_define_binding_237) {
  ARG(kind_, 0);
  ARG(defining_methodQ_, 1);
  ARG(name_, 2);
  ARG(r_, 3);
  P bindingF1225;
  P x_1221F1224;
  P foreignQF1223;
  P tmpF1222;
  P bindingF1221;
  P mod_nameF1220;
  P modF1219;
  P grF1218;
  P existing_bindingF1217;
  P T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T36 = CALL2(CHKREF(YastYfind_binding),name_,r_);
  existing_bindingF1217 = T36;
  T35 = CALL1(CHKREF(YastYfind_static_global_environment),r_);
  grF1218 = T35;
  T34 = CALL1(CHKREF(YastYenvironment_module),grF1218);
  modF1219 = T34;
  if (existing_bindingF1217 != YPfalse) {
    T33 = CALL2(CHKREF(YastYbinding_native_toQ),existing_bindingF1217,modF1219);
    tmpF1222 = T33;
    if (tmpF1222 != YPfalse) {
      T32 = tmpF1222;
    } else {
      T32 = defining_methodQ_;
    }
    T31 = T32;
    T30 = CALL1(CHKREF(Ynot),T31);
    foreignQF1223 = T30;
    T29 = CALL1(CHKREF(YastYbinding_freeQ),existing_bindingF1217);
    if (T29 != YPfalse) {
      CALL2(CHKREF(YastYbinding_freeQ_setter),YPfalse,existing_bindingF1217);
      if (foreignQF1223 != YPfalse) {
        x_1221F1224 = grF1218;
        T28 = CALL1(CHKREF(YastYenvironment_implements),x_1221F1224);
        T27 = CALL2(CHKREF(YruntimeYpush),T28,existing_bindingF1217);
        T26 = CALL2(CHKREF(YastYenvironment_implements_setter),T27,x_1221F1224);
        T25 = T26;
        T24 = T25;
      } else {
        T24 = YPfalse;
      }
    } else {
      if (foreignQF1223 != YPfalse) {
        T23 = CALL1(CHKREF(YastYmodule_name),modF1219);
        T22 = CALL1(CHKREF(YastYbinding_module_name),existing_bindingF1217);
        T21 = CALLN(CHKREF(YruntimeYformat),5,CHKREF(YruntimeYout),CHKREF(lit_78),T23,name_,T22);
        T20 = T21;
      } else {
        T20 = YPfalse;
      }
    }
    T19 = existing_bindingF1217;
    T4 = T19;
  } else {
    T18 = CALL1(CHKREF(YastYfind_environment_module),r_);
    T17 = CALL1(CHKREF(YastYmodule_name),T18);
    mod_nameF1220 = T17;
    T16 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
    T15 = (P)YPpair(CHKREF(YastYbinding_module_name),Ynil);
    T14 = (P)YPpair(CHKREF(YastYbinding_freeQ),T15);
    T13 = (P)YPpair(CHKREF(YastYbinding_name),T14);
    T12 = (P)YPpair(CHKREF(YastYbinding_kind),T13);
    T11 = (P)YPpair(mod_nameF1220,Ynil);
    T10 = (P)YPpair(YPfalse,T11);
    T9 = (P)YPpair(name_,T10);
    T8 = (P)YPpair(kind_,T9);
    T7 = CALL3(CHKREF(YPisa),T16,T12,T8);
    bindingF1221 = T7;
    CALL2(CHKREF(YastYinsert_globalX),bindingF1221,grF1218);
    T6 = bindingF1221;
    T5 = T6;
    T4 = T5;
  }
  bindingF1225 = T4;
  T3 = bindingF1225;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_objectify_definition_238) {
  ARG(r_, 0);
  ARG(e_, 1);
  ARG(var_, 2);
  P defnF1228;
  P bindingF1227;
  P nameF1226;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T11 = CALL1(CHKREF(YsyntaxYsexpr_variable_name),var_);
  nameF1226 = T11;
  T10 = CALLN(CHKREF(YastYast_define_binding),4,r_,nameF1226,YPfalse,CHKREF(lit_79));
  bindingF1227 = T10;
  T9 = (P)YPpair(CHKREF(YastYLdefinitionG),Ynil);
  T8 = (P)YPpair(CHKREF(YastYassignment_form),Ynil);
  T7 = (P)YPpair(CHKREF(YastYassignment_binding),T8);
  T6 = CALL3(CHKREF(YastYobjectify),e_,r_,YPfalse);
  T5 = (P)YPpair(T6,Ynil);
  T4 = (P)YPpair(bindingF1227,T5);
  T3 = CALL3(CHKREF(YPisa),T9,T7,T4);
  defnF1228 = T3;
  T2 = defnF1228;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_expand_239) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P expF1229;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  if (CHKREF(YastYTmacro_tracingQT) != YPfalse) {
    CALL2(CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_84));
    CALL2(CHKREF(YwriteYwrite),CHKREF(YruntimeYout),x_);
    T0 = CALL2(CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_83));
  } else {
  }
  T4 = CALL1(CHKREF(YmacrosYlst),x_);
  T3 = CALL2(CHKREF(Yapply),FREEREF(0),T4);
  expF1229 = T3;
  if (CHKREF(YastYTmacro_tracingQT) != YPfalse) {
    CALL2(CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_82));
    CALL2(CHKREF(YwriteYwrite),CHKREF(YruntimeYout),expF1229);
    T2 = CALL2(CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_81));
  } else {
  }
  T1 = expF1229;
  QRET(T1);
}

FUNCODEDEF(YPPmacro) {
  ARG(r_, 0);
  ARG(expander_, 1);
  ARG(name_, 2);
  P bindingF1231;
  P expandF1230;
  P T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T3 = FUNSHELL(0,fun_expand_239,1);
  expandF1230 = T3;
  FUNINIT(expandF1230, 1,expander_);
  T2 = CALLN(CHKREF(YastYast_define_binding),4,r_,name_,YPfalse,CHKREF(lit_80));
  bindingF1231 = T2;
  CALL2(CHKREF(YastYbinding_handler_setter),expandF1230,bindingF1231);
  T1 = bindingF1231;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_objectify_syntax_definition_241) {
  ARG(rtQ_, 0);
  ARG(r_, 1);
  ARG(e_, 2);
  ARG(name_, 3);
  P bindingF1236;
  P expanderF1235;
  P ast_expanderF1234;
  P syntax_envF1233;
  P sep_expanderF1232;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T21 = CALL1(CHKREF(YsyntaxYsexpr_make_macro_function),e_);
  sep_expanderF1232 = T21;
  T20 = CALL1(CHKREF(YastYfind_syntax_environment),r_);
  syntax_envF1233 = T20;
  T19 = CALL3(CHKREF(YastYobjectify),sep_expanderF1232,syntax_envF1233,YPfalse);
  ast_expanderF1234 = T19;
  T18 = CALL1(CHKREF(YastYast_evaluate),ast_expanderF1234);
  expanderF1235 = T18;
  T17 = CALL3(CHKREF(YPPmacro),name_,expanderF1235,r_);
  bindingF1236 = T17;
  T7 = CALL1(CHKREF(YastYfind_static_global_environment),r_);
  T6 = CALL2(CHKREF(YruntimeYNEE),syntax_envF1233,T7);
  if (T6 != YPfalse) {
    T5 = CALL2(CHKREF(YastYinsert_globalX),bindingF1236,syntax_envF1233);
  } else {
  }
  if (rtQ_ != YPfalse) {
    T16 = (P)YPpair(CHKREF(YastYLast_macro_definitionG),Ynil);
    T15 = (P)YPpair(CHKREF(YastYassignment_form),Ynil);
    T14 = (P)YPpair(CHKREF(YastYassignment_binding),T15);
    T13 = CALL3(CHKREF(YastYobjectify),sep_expanderF1232,r_,YPfalse);
    T12 = (P)YPpair(T13,Ynil);
    T11 = (P)YPpair(bindingF1236,T12);
    T10 = CALL3(CHKREF(YPisa),T16,T14,T11);
    T8 = T10;
  } else {
    T9 = CALL2(CHKREF(YastYobjectify_quotation),YPfalse,r_);
    T8 = T9;
  }
  T4 = T8;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_objectify_function_definition_242) {
  ARG(r_, 0);
  ARG(e_, 1);
  ARG(name_, 2);
  P defnF1239;
  P fF1238;
  P bindingF1237;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T10 = CALLN(CHKREF(YastYast_define_binding),4,r_,name_,YPfalse,CHKREF(lit_85));
  bindingF1237 = T10;
  T9 = CALL3(CHKREF(YastYobjectify),e_,r_,YPfalse);
  fF1238 = T9;
  CALL2(CHKREF(YastYfunction_name_setter),bindingF1237,fF1238);
  T8 = (P)YPpair(CHKREF(YastYLast_function_definitionG),Ynil);
  T7 = (P)YPpair(CHKREF(YastYassignment_form),Ynil);
  T6 = (P)YPpair(CHKREF(YastYassignment_binding),T7);
  T5 = (P)YPpair(fF1238,Ynil);
  T4 = (P)YPpair(bindingF1237,T5);
  T3 = CALL3(CHKREF(YPisa),T8,T6,T4);
  defnF1239 = T3;
  T2 = defnF1239;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(YastYmodule_binding) {
  ARG(kind_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T2 = (P)YPpair(CHKREF(YastYbinding_kind),Ynil);
  T1 = (P)YPpair(kind_,Ynil);
  T0 = CALL3(CHKREF(YPisa),T3,T2,T1);
  RET(T0);
}

FUNCODEDEF(fun_objectify_primitive_definition_244) {
  ARG(r_, 0);
  ARG(body_, 1);
  ARG(sig_, 2);
  ARG(name_, 3);
  P defnF1245;
  P formF1244;
  P bodyF1243;
  P new_rF1242;
  P signatureF1241;
  P bindingF1240;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T24 = CALLN(CHKREF(YastYast_define_binding),4,r_,name_,YPfalse,CHKREF(lit_86));
  bindingF1240 = T24;
  T23 = CALL2(CHKREF(YastYobjectify_signature),sig_,r_);
  signatureF1241 = T23;
  T22 = CALL1(CHKREF(YastYsignature_bindings),signatureF1241);
  T21 = CALL2(CHKREF(YastYr_extendT),r_,T22);
  new_rF1242 = T21;
  T20 = CALL3(CHKREF(YastYobjectify_sequential),body_,new_rF1242,YPtrue);
  bodyF1243 = T20;
  T19 = (P)YPpair(CHKREF(YastYLast_primitiveG),Ynil);
  T18 = (P)YPpair(CHKREF(YastYfunction_body),Ynil);
  T17 = (P)YPpair(CHKREF(YastYfunction_signature),T18);
  T16 = (P)YPpair(CHKREF(YastYfunction_name),T17);
  T15 = (P)YPpair(bodyF1243,Ynil);
  T14 = (P)YPpair(signatureF1241,T15);
  T13 = (P)YPpair(bindingF1240,T14);
  T12 = CALL3(CHKREF(YPisa),T19,T16,T13);
  formF1244 = T12;
  T11 = (P)YPpair(CHKREF(YastYLast_primitive_definitionG),Ynil);
  T10 = (P)YPpair(CHKREF(YastYassignment_form),Ynil);
  T9 = (P)YPpair(CHKREF(YastYassignment_binding),T10);
  T8 = (P)YPpair(formF1244,Ynil);
  T7 = (P)YPpair(bindingF1240,T8);
  T6 = CALL3(CHKREF(YPisa),T11,T9,T7);
  defnF1245 = T6;
  T5 = defnF1245;
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_objectify_generic_definition_245) {
  ARG(r_, 0);
  ARG(sig_, 1);
  ARG(name_, 2);
  P defnF1249;
  P formF1248;
  P signatureF1247;
  P bindingF1246;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2,a3;
loop:
  T17 = CALLN(CHKREF(YastYast_define_binding),4,r_,name_,YPfalse,CHKREF(lit_87));
  bindingF1246 = T17;
  T16 = CALL2(CHKREF(YastYobjectify_signature),sig_,r_);
  signatureF1247 = T16;
  T15 = (P)YPpair(CHKREF(YastYLast_genericG),Ynil);
  T14 = (P)YPpair(CHKREF(YastYfunction_signature),Ynil);
  T13 = (P)YPpair(CHKREF(YastYfunction_name),T14);
  T12 = (P)YPpair(signatureF1247,Ynil);
  T11 = (P)YPpair(bindingF1246,T12);
  T10 = CALL3(CHKREF(YPisa),T15,T13,T11);
  formF1248 = T10;
  T9 = (P)YPpair(CHKREF(YastYLast_generic_definitionG),Ynil);
  T8 = (P)YPpair(CHKREF(YastYassignment_form),Ynil);
  T7 = (P)YPpair(CHKREF(YastYassignment_binding),T8);
  T6 = (P)YPpair(formF1248,Ynil);
  T5 = (P)YPpair(bindingF1246,T6);
  T4 = CALL3(CHKREF(YPisa),T9,T7,T5);
  defnF1249 = T4;
  T3 = defnF1249;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_objectify_method_definition_246) {
  ARG(r_, 0);
  ARG(e_, 1);
  ARG(name_, 2);
  P defnF1255;
  P formF1254;
  P callF1253;
  P metF1252;
  P genF1251;
  P bindingF1250;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2,a3;
loop:
  T17 = CALLN(CHKREF(YastYast_define_binding),4,r_,name_,YPtrue,CHKREF(lit_91));
  bindingF1250 = T17;
  T16 = CALL2(CHKREF(YmacrosYlst),CHKREF(lit_89),name_);
  T15 = CALLN(CHKREF(YmacrosYlst),4,CHKREF(lit_90),T16,name_,YPfalse);
  genF1251 = T15;
  T14 = CALL3(CHKREF(YastYobjectify),e_,r_,YPfalse);
  metF1252 = T14;
  T13 = CALL3(CHKREF(YmacrosYlst),CHKREF(lit_88),genF1251,metF1252);
  callF1253 = T13;
  T12 = CALL3(CHKREF(YastYobjectify),callF1253,r_,YPfalse);
  formF1254 = T12;
  T11 = (P)YPpair(CHKREF(YastYLast_method_definitionG),Ynil);
  T10 = (P)YPpair(CHKREF(YastYassignment_form),Ynil);
  T9 = (P)YPpair(CHKREF(YastYassignment_binding),T10);
  T8 = (P)YPpair(formF1254,Ynil);
  T7 = (P)YPpair(bindingF1250,T8);
  T6 = CALL3(CHKREF(YPisa),T11,T9,T7);
  defnF1255 = T6;
  CALL2(CHKREF(YastYfunction_name_setter),name_,metF1252);
  T5 = defnF1255;
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_objectify_function_247) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(body_, 2);
  ARG(sig_, 3);
  P bF1258;
  P new_rF1257;
  P signatureF1256;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T12 = CALL2(CHKREF(YastYobjectify_signature),sig_,r_);
  signatureF1256 = T12;
  T11 = CALL1(CHKREF(YastYsignature_bindings),signatureF1256);
  T10 = CALL2(CHKREF(YastYr_extendT),r_,T11);
  new_rF1257 = T10;
  T9 = CALL3(CHKREF(YastYobjectify_sequential),body_,new_rF1257,YPtrue);
  bF1258 = T9;
  T8 = (P)YPpair(CHKREF(YastYLast_methodG),Ynil);
  T7 = (P)YPpair(CHKREF(YastYfunction_body),Ynil);
  T6 = (P)YPpair(CHKREF(YastYfunction_signature),T7);
  T5 = (P)YPpair(bF1258,Ynil);
  T4 = (P)YPpair(signatureF1256,T5);
  T3 = CALL3(CHKREF(YPisa),T8,T6,T4);
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_col_248) {
  ARG(types_, 0);
  ARG(bindings_, 1);
  ARG(naryQ_, 2);
  ARG(params_, 3);
  P valueF1268;
  P tmpF1267;
  P sexpr_valueF1266;
  P bindingF1265;
  P typeF1264;
  P stypeF1263;
  P dottedQF1262;
  P stypeF1261;
  P snameF1260;
  P paramF1259;
  P T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T50 = CALL1(CHKREF(YmacrosYemptyQ),params_);
  if (T50 != YPfalse) {
    T49 = CALL1(CHKREF(YsyntaxYsexpr_signature_value),FREEREF(2));
    sexpr_valueF1266 = T49;
    tmpF1267 = sexpr_valueF1266;
    if (tmpF1267 != YPfalse) {
      T47 = tmpF1267;
    } else {
      T48 = CALL1(CHKREF(YastYdefault_type),FREEREF(0));
      T47 = T48;
    }
    T46 = T47;
    T45 = CALL3(CHKREF(YastYobjectify),T46,FREEREF(0),YPfalse);
    valueF1268 = T45;
    T44 = (P)YPpair(CHKREF(YastYLast_signatureG),Ynil);
    T43 = (P)YPpair(CHKREF(YastYsignature_value),Ynil);
    T42 = (P)YPpair(CHKREF(YastYsignature_naryQ),T43);
    T41 = (P)YPpair(CHKREF(YastYsignature_specs),T42);
    T40 = (P)YPpair(CHKREF(YastYsignature_names),T41);
    T39 = CALL1(CHKREF(YruntimeYrevX),bindings_);
    T38 = CALL1(CHKREF(YruntimeYrevX),types_);
    T37 = (P)YPpair(valueF1268,Ynil);
    T36 = (P)YPpair(naryQ_,T37);
    T35 = (P)YPpair(T38,T36);
    T34 = (P)YPpair(T39,T35);
    T33 = CALL3(CHKREF(YPisa),T44,T40,T34);
    T32 = T33;
    T31 = T32;
    T0 = T31;
  } else {
    T30 = CALL1(CHKREF(Yhead),params_);
    paramF1259 = T30;
    T29 = CALL1(CHKREF(YsyntaxYsexpr_variable_name),paramF1259);
    snameF1260 = T29;
    T28 = CALL1(CHKREF(YsyntaxYsexpr_variable_type),paramF1259);
    stypeF1261 = T28;
    T27 = CALL2(CHKREF(YmacrosYEE),stypeF1261,CHKREF(YastYDsexpr_optionals_tag));
    dottedQF1262 = T27;
    if (dottedQF1262 != YPfalse) {
      T26 = CHKREF(YastYDsexpr_optionals_type_name);
    } else {
      T26 = stypeF1261;
    }
    stypeF1263 = T26;
    T25 = CALL3(CHKREF(YastYobjectify),stypeF1263,FREEREF(0),YPfalse);
    typeF1264 = T25;
    T24 = (P)YPpair(CHKREF(YastYLlocal_bindingG),Ynil);
    T23 = (P)YPpair(CHKREF(YastYbinding_dottedQ),Ynil);
    T22 = (P)YPpair(CHKREF(YastYbinding_type),T23);
    T21 = (P)YPpair(CHKREF(YastYbinding_name),T22);
    T20 = (P)YPpair(dottedQF1262,Ynil);
    T19 = (P)YPpair(typeF1264,T20);
    T18 = (P)YPpair(snameF1260,T19);
    T17 = CALL3(CHKREF(YPisa),T24,T21,T18);
    bindingF1265 = T17;
    T16 = CALL1(CHKREF(Ytail),params_);
    T15 = CALL2(CHKREF(YmacrosYpair),bindingF1265,bindings_);
    T14 = (P)YPpair(CHKREF(YastYLtypesG),Ynil);
    T13 = (P)YPpair(CHKREF(Ytail),Ynil);
    T12 = (P)YPpair(CHKREF(Yhead),T13);
    T11 = (P)YPpair(types_,Ynil);
    T10 = (P)YPpair(typeF1264,T11);
    T9 = CALL3(CHKREF(YPisa),T14,T12,T10);
    a1 = T16;
    a2 = dottedQF1262;
    a3 = T15;
    a4 = T9;
    params_ = a1;
    naryQ_ = a2;
    bindings_ = a3;
    types_ = a4;
    goto loop;
    T7 = T8;
    T6 = T7;
    T5 = T6;
    T4 = T5;
    T3 = T4;
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_objectify_signature_249) {
  ARG(r_, 0);
  ARG(sig_, 1);
  P colF1270;
  P sexpr_paramsF1269;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = CALL1(CHKREF(YsyntaxYsexpr_signature_parameters),sig_);
  sexpr_paramsF1269 = T5;
  T4 = FUNSHELL(1,fun_col_248,3);
  colF1270 = T4;
  FUNINIT(colF1270, 3,r_,colF1270,sig_);
  T3 = CALL1(CHKREF(YruntimeYempty),CHKREF(YastYLtypesG));
  T2 = KCALLN(colF1270,4,sexpr_paramsF1269,YPfalse,Ynil,T3);
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_find_250) {
  ARG(bindings_, 0);
  ARG(j_, 1);
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T11 = CALL1(CHKREF(YmacrosYemptyQ),bindings_);
  if (T11 != YPfalse) {
    T10 = CALL2(CHKREF(YruntimeYA),FREEREF(1),YPint((P)1));
    T9 = CALL1(CHKREF(YastYenvironment_next),FREEREF(3));
    T8 = KCALL2(FREEREF(4),T10,T9);
    T0 = T8;
  } else {
    T7 = CALL1(CHKREF(Yhead),bindings_);
    T6 = CALL2(CHKREF(YmacrosYEE),T7,FREEREF(2));
    if (T6 != YPfalse) {
      T5 = CALL2(CHKREF(YmacrosYtup),FREEREF(1),j_);
      T1 = T5;
    } else {
      T4 = CALL2(CHKREF(YruntimeYA),j_,YPint((P)1));
      T3 = CALL1(CHKREF(Ytail),bindings_);
      a1 = T4;
      a2 = T3;
      j_ = a1;
      bindings_ = a2;
      goto loop;
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_loop_251) {
  ARG(r_, 0);
  ARG(i_, 1);
  P findF1271;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = CALL2(CHKREF(YisaQ),r_,CHKREF(YastYLstatic_local_environmentG));
  if (T7 != YPfalse) {
    T6 = FUNSHELL(1,fun_find_250,5);
    findF1271 = T6;
    FUNINIT(findF1271, 5,findF1271,i_,FREEREF(0),r_,FREEREF(1));
    T5 = CALL1(CHKREF(YastYenvironment_bindings),r_);
    T4 = KCALL2(findF1271,YPint((P)0),T5);
    T3 = T4;
    T0 = T3;
  } else {
    T2 = CALL1(CHKREF(YastYbinding_name),FREEREF(0));
    T1 = CALL3(CHKREF(Yerror),CHKREF(lit_94),T2,r_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_compute_local_reference_offsets_252) {
  ARG(r_, 0);
  ARG(binding_, 1);
  P loopF1272;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_loop_251,2);
  loopF1272 = T2;
  FUNINIT(loopF1272, 2,binding_,loopF1272);
  T1 = KCALL2(loopF1272,YPint((P)0),r_);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_objectify_binding_253) {
  ARG(r_, 0);
  ARG(b_, 1);
  ARG(n_, 2);
  P tup36F1277;
  P jF1276;
  P tup36F1275;
  P iF1274;
  P tup36F1273;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2,a3;
loop:
  T17 = CALL2(CHKREF(YastYcompute_local_reference_offsets),b_,r_);
  tup36F1273 = T17;
  T16 = CALL1(CHKREF(Yhead),tup36F1273);
  iF1274 = T16;
  T15 = CALL1(CHKREF(Ytail),tup36F1273);
  tup36F1275 = T15;
  T14 = CALL1(CHKREF(Yhead),tup36F1275);
  jF1276 = T14;
  T13 = CALL1(CHKREF(Ytail),tup36F1275);
  tup36F1277 = T13;
  T12 = (P)YPpair(CHKREF(YastYLlocal_referenceG),Ynil);
  T11 = (P)YPpair(CHKREF(YastYreference_frame_offset),Ynil);
  T10 = (P)YPpair(CHKREF(YastYreference_frame_number),T11);
  T9 = (P)YPpair(CHKREF(YastYreference_binding),T10);
  T8 = (P)YPpair(jF1276,Ynil);
  T7 = (P)YPpair(iF1274,T8);
  T6 = (P)YPpair(b_,T7);
  T5 = CALL3(CHKREF(YPisa),T12,T9,T6);
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_binding_reference_prototype_254) {
  ARG(b_, 0);
  P x_1224F1280;
  P x_1223F1279;
  P x_1222F1278;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T11 = CALL1(CHKREF(YastYbinding_kind),b_);
  x_1222F1278 = T11;
  T10 = CALL2(CHKREF(YmacrosYEE),x_1222F1278,CHKREF(lit_98));
  if (T10 != YPfalse) {
    T1 = CHKREF(YastYLglobal_referenceG);
  } else {
    x_1223F1279 = x_1222F1278;
    T9 = CALL2(CHKREF(YmacrosYEE),x_1223F1279,CHKREF(lit_97));
    if (T9 != YPfalse) {
      T3 = CHKREF(YastYLpredefined_referenceG);
    } else {
      x_1224F1280 = x_1223F1279;
      T8 = CALL2(CHKREF(YmacrosYEE),x_1224F1280,CHKREF(lit_96));
      if (T8 != YPfalse) {
        T5 = CHKREF(YastYLruntime_referenceG);
      } else {
        T7 = CALL1(CHKREF(YastYbinding_kind),b_);
        T6 = CALL2(CHKREF(Yerror),CHKREF(lit_95),T7);
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

FUNCODEDEF(fun_objectify_binding_255) {
  ARG(r_, 0);
  ARG(b_, 1);
  ARG(n_, 2);
  P tmpF1283;
  P LrefGF1282;
  P x_1225F1281;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T12 = CALL1(CHKREF(YastYbinding_kind),b_);
  x_1225F1281 = T12;
  T11 = CALL2(CHKREF(YmacrosYEE),x_1225F1281,CHKREF(lit_100));
  tmpF1283 = T11;
  if (tmpF1283 != YPfalse) {
    T9 = tmpF1283;
  } else {
    T10 = CALL2(CHKREF(YmacrosYEE),x_1225F1281,CHKREF(lit_99));
    T9 = T10;
  }
  T8 = T9;
  if (T8 != YPfalse) {
    T1 = b_;
  } else {
    T7 = CALL1(CHKREF(YastYbinding_reference_prototype),b_);
    LrefGF1282 = T7;
    T6 = (P)YPpair(LrefGF1282,Ynil);
    T5 = (P)YPpair(CHKREF(YastYreference_binding),Ynil);
    T4 = (P)YPpair(b_,Ynil);
    T3 = CALL3(CHKREF(YPisa),T6,T5,T4);
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_objectify_binding_256) {
  ARG(r_, 0);
  ARG(b_, 1);
  ARG(n_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALL2(CHKREF(YastYobjectify_free_global_reference),n_,r_);
  RET(T0);
}

FUNCODEDEF(fun_default_type_257) {
  ARG(r_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(YastYobjectify),CHKREF(lit_101),r_,YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_objectify_free_global_reference_258) {
  ARG(r_, 0);
  ARG(name_, 1);
  P bF1285;
  P grF1284;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
loop:
  T18 = CALL1(CHKREF(YastYfind_static_global_environment),r_);
  grF1284 = T18;
  T17 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T16 = (P)YPpair(CHKREF(YastYbinding_module_name),Ynil);
  T15 = (P)YPpair(CHKREF(YastYbinding_name),T16);
  T14 = (P)YPpair(CHKREF(YastYbinding_kind),T15);
  T13 = (P)YPpair(CHKREF(YastYbinding_freeQ),T14);
  T12 = CALL1(CHKREF(YastYfind_environment_module),r_);
  T11 = CALL1(CHKREF(YastYmodule_name),T12);
  T10 = (P)YPpair(T11,Ynil);
  T9 = (P)YPpair(name_,T10);
  T8 = (P)YPpair(CHKREF(lit_102),T9);
  T7 = (P)YPpair(YPtrue,T8);
  T6 = CALL3(CHKREF(YPisa),T17,T13,T7);
  bF1285 = T6;
  CALL2(CHKREF(YastYinsert_globalX),bF1285,grF1284);
  T5 = (P)YPpair(CHKREF(YastYLglobal_referenceG),Ynil);
  T4 = (P)YPpair(CHKREF(YastYreference_binding),Ynil);
  T3 = (P)YPpair(bF1285,Ynil);
  T2 = CALL3(CHKREF(YPisa),T5,T4,T3);
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_objectify_symbol_259) {
  ARG(r_, 0);
  ARG(name_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YastYfind_binding),name_,r_);
  T0 = CALL3(CHKREF(YastYobjectify_binding),name_,T1,r_);
  QRET(T0);
}

FUNCODEDEF(fun_ftype_260) {
  ARG(r_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(YastYobjectify),CHKREF(lit_103),r_,YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_as_261) {
  ARG(x_, 0);
  ARG(p_, 1);
  P a1,a2;
loop:
  RET(x_);
}

FUNCODEDEF(fun_as_262) {
  ARG(x_, 0);
  ARG(p_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(Yapply),CHKREF(YmacrosYlst),x_);
  RET(T0);
}

FUNCODEDEF(fun_as_263) {
  ARG(x_, 0);
  ARG(p_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YmacrosYpair),CHKREF(YastYLfunctionsG),x_);
  T0 = CALL2(CHKREF(Yapply),CHKREF(YruntimeYfabs),T1);
  RET(T0);
}

FUNCODEDEF(YastYfunctions) {
  ARG(t_, 0);
  ARG(h_, 1);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = (P)YPpair(CHKREF(YastYLfunctionsG),Ynil);
  T4 = (P)YPpair(CHKREF(Ytail),Ynil);
  T3 = (P)YPpair(CHKREF(Yhead),T4);
  T2 = (P)YPpair(t_,Ynil);
  T1 = (P)YPpair(h_,T2);
  T0 = CALL3(CHKREF(YPisa),T5,T3,T1);
  QRET(T0);
}

FUNCODEDEF(fun_empty_265) {
  ARG(e_, 0);
  P a1;
loop:
  RET(CHKREF(YastYDfunctions_empty));
}

FUNCODEDEF(fun_266) {
  ARG(b_, 0);
  ARG(f_, 1);
  P T0;
  P a1,a2;
loop:
  CALL2(CHKREF(YastYfunction_name_setter),b_,f_);
  T0 = CALL2(CHKREF(YastYbinding_value_setter),f_,b_);
  QRET(T0);
}

FUNCODEDEF(fun_267) {
  ARG(n_, 0);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = (P)YPpair(CHKREF(YastYLlocal_bindingG),Ynil);
  T5 = (P)YPpair(CHKREF(YastYbinding_type),Ynil);
  T4 = (P)YPpair(CHKREF(YastYbinding_name),T5);
  T3 = CALL1(CHKREF(YastYftype),FREEREF(0));
  T2 = (P)YPpair(T3,Ynil);
  T1 = (P)YPpair(n_,T2);
  T0 = CALL3(CHKREF(YPisa),T6,T4,T1);
  QRET(T0);
}

FUNCODEDEF(fun_objectify_locals_268) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(body_, 2);
  ARG(bodies_, 3);
  ARG(sigs_, 4);
  ARG(names_, 5);
  P functionsF1289;
  P function_formsF1288;
  P new_rF1287;
  P bindingsF1286;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6;
loop:
  T21 = FUNFAB(fun_267,1,r_);
  T20 = CALL2(CHKREF(YmacrosYmap),T21,names_);
  bindingsF1286 = T20;
  T19 = CALL2(CHKREF(YastYr_extendT),r_,bindingsF1286);
  new_rF1287 = T19;
  T18 = CALL3(CHKREF(YruntimeYmap2),CHKREF(YsyntaxYsexpr_make_anonymous_method),sigs_,bodies_);
  function_formsF1288 = T18;
  T17 = CALL3(CHKREF(YruntimeYrcurry),CHKREF(YastYobjectify),new_rF1287,YPfalse);
  T16 = CALL2(CHKREF(YmacrosYmap),T17,function_formsF1288);
  functionsF1289 = T16;
  T4 = fun_266;
  CALL3(CHKREF(YruntimeYdo2),T4,functionsF1289,bindingsF1286);
  T15 = (P)YPpair(CHKREF(YastYLlocalsG),Ynil);
  T14 = (P)YPpair(CHKREF(YastYlocals_body),Ynil);
  T13 = (P)YPpair(CHKREF(YastYlocals_functions),T14);
  T12 = (P)YPpair(CHKREF(YastYlocals_bindings),T13);
  T11 = CALL2(CHKREF(YmacrosYpair),CHKREF(YastYLfunctionsG),functionsF1289);
  T10 = CALL2(CHKREF(Yapply),CHKREF(YruntimeYfabs),T11);
  T9 = CALL3(CHKREF(YastYobjectify_sequential),body_,new_rF1287,YPtrue);
  T8 = (P)YPpair(T9,Ynil);
  T7 = (P)YPpair(T10,T8);
  T6 = (P)YPpair(bindingsF1286,T7);
  T5 = CALL3(CHKREF(YPisa),T15,T12,T6);
  T3 = T5;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_objectify_bind_exit_269) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(body_, 2);
  ARG(name_, 3);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T6 = (P)YPpair(CHKREF(YastYLbind_exitG),Ynil);
  T5 = (P)YPpair(CHKREF(YastYbind_exit_main_fun),Ynil);
  T4 = CALL1(CHKREF(YmacrosYlst),name_);
  T3 = CALL2(CHKREF(YsyntaxYsexpr_make_anonymous_method),T4,body_);
  T2 = CALL3(CHKREF(YastYobjectify),T3,r_,YPfalse);
  T1 = (P)YPpair(T2,Ynil);
  T0 = CALL3(CHKREF(YPisa),T6,T5,T1);
  RET(T0);
}

FUNCODEDEF(fun_objectify_unwind_protect_270) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(cleanup_forms_, 2);
  ARG(protected_form_, 3);
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T10 = (P)YPpair(CHKREF(YastYLunwind_protectG),Ynil);
  T9 = (P)YPpair(CHKREF(YastYunwind_protect_cleanup_thunk),Ynil);
  T8 = (P)YPpair(CHKREF(YastYunwind_protect_protected_thunk),T9);
  T7 = CALL1(CHKREF(YmacrosYlst),protected_form_);
  T6 = CALL2(CHKREF(YsyntaxYsexpr_make_anonymous_method),Ynil,T7);
  T5 = CALL3(CHKREF(YastYobjectify),T6,r_,YPfalse);
  T4 = CALL2(CHKREF(YsyntaxYsexpr_make_anonymous_method),Ynil,cleanup_forms_);
  T3 = CALL3(CHKREF(YastYobjectify),T4,r_,YPfalse);
  T2 = (P)YPpair(T3,Ynil);
  T1 = (P)YPpair(T5,T2);
  T0 = CALL3(CHKREF(YPisa),T10,T8,T1);
  RET(T0);
}

FUNCODEDEF(fun_objectify_monitor_271) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(body_, 2);
  ARG(handler_, 3);
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T8 = (P)YPpair(CHKREF(YastYLmonitorG),Ynil);
  T7 = (P)YPpair(CHKREF(YastYmonitor_main_thunk),Ynil);
  T6 = (P)YPpair(CHKREF(YastYmonitor_handler),T7);
  T5 = CALL3(CHKREF(YastYobjectify),handler_,r_,YPfalse);
  T4 = CALL2(CHKREF(YsyntaxYsexpr_make_anonymous_method),Ynil,body_);
  T3 = CALL3(CHKREF(YastYobjectify),T4,r_,YPfalse);
  T2 = (P)YPpair(T3,Ynil);
  T1 = (P)YPpair(T5,T2);
  T0 = CALL3(CHKREF(YPisa),T8,T6,T1);
  RET(T0);
}

FUNCODEDEF(fun_x_1228_272) {
  ARG(x_1226_, 0);
  P bindingF1291;
  P nameF1290;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T11 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),x_1226_);
  T10 = CALL1(CHKREF(Ynot),T11);
  if (T10 != YPfalse) {
    T9 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),x_1226_);
    nameF1290 = T9;
    T6 = CALL2(CHKREF(YastYfind_binding),nameF1290,FREEREF(2));
    bindingF1291 = T6;
    T5 = CALL2(CHKREF(YmacrosYEE),bindingF1291,YPfalse);
    if (T5 != YPfalse) {
      T4 = CALL2(CHKREF(Yerror),CHKREF(lit_104),nameF1290);
      T2 = T4;
    } else {
      T3 = CALL3(CHKREF(YastYexport_bindingX),FREEREF(3),nameF1290,bindingF1291);
      T2 = T3;
    }
    T8 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),x_1226_);
    a1 = T8;
    x_1226_ = a1;
    goto loop;
    T1 = T7;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_objectify_export_273) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(names_, 2);
  P x_1228F1295;
  P x_1227F1294;
  P moduleF1293;
  P envF1292;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T11 = CALL1(CHKREF(YastYfind_static_global_environment),r_);
  envF1292 = T11;
  T10 = CALL1(CHKREF(YastYfind_environment_module),r_);
  moduleF1293 = T10;
  T4 = CALL1(CHKREF(YastYmodule_target_environment),moduleF1293);
  T3 = CALL2(CHKREF(YmacrosYEE),envF1292,T4);
  T2 = CALL1(CHKREF(Ynot),T3);
  if (T2 != YPfalse) {
    T1 = CALL1(CHKREF(Yerror),CHKREF(lit_105));
  } else {
  }
  x_1227F1294 = names_;
  T9 = FUNSHELL(1,fun_x_1228_272,4);
  x_1228F1295 = T9;
  FUNINIT(x_1228F1295, 4,x_1227F1294,x_1228F1295,envF1292,moduleF1293);
  T8 = CALL1(CHKREF(YruntimeYini_state),x_1227F1294);
  T7 = KCALL1(x_1228F1295,T8);
  T6 = T7;
  T5 = T6;
  T0 = T5;
  T15 = (P)YPpair(CHKREF(YastYLconstantG),Ynil);
  T14 = (P)YPpair(CHKREF(YastYconstant_value),Ynil);
  T13 = (P)YPpair(YPfalse,Ynil);
  T12 = CALL3(CHKREF(YPisa),T15,T14,T13);
  RET(T12);
}

FUNCODEDEF(YastYimport_globalX) {
  ARG(env_, 0);
  ARG(b_, 1);
  P tmpF1297;
  P existingF1296;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = CALL1(CHKREF(YastYbinding_name),b_);
  T9 = CALL2(CHKREF(YastYfind_binding),T10,env_);
  existingF1296 = T9;
  T8 = CALL2(CHKREF(YmacrosYEE),existingF1296,YPfalse);
  tmpF1297 = T8;
  if (tmpF1297 != YPfalse) {
    T6 = tmpF1297;
  } else {
    T7 = CALL2(CHKREF(YmacrosYEE),existingF1296,b_);
    T6 = T7;
  }
  T5 = T6;
  T4 = CALL1(CHKREF(Ynot),T5);
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YastYbinding_name),b_);
    T2 = CALL1(CHKREF(YastYbinding_module_name),b_);
    T1 = CALLN(CHKREF(YruntimeYformat),4,CHKREF(YruntimeYout),CHKREF(lit_106),T3,T2);
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  CALL2(CHKREF(YastYinsert_globalX),b_,env_);
  QRET(YPfalse);
}

FUNCODEDEF(fun_objectify_use_module_275) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(name_, 2);
  P used_moduleF1300;
  P loaderF1299;
  P envF1298;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T8 = CALL1(CHKREF(YastYfind_static_global_environment),r_);
  envF1298 = T8;
  T7 = CALL1(CHKREF(YastYenvironment_module_loader),envF1298);
  loaderF1299 = T7;
  T6 = CALL2(CHKREF(YastYprobe_module),loaderF1299,name_);
  used_moduleF1300 = T6;
  T2 = CALL1(CHKREF(YastYenvironment_uses_modules),envF1298);
  CALL2(CHKREF(YruntimeYpush_lastX),T2,used_moduleF1300);
  T5 = CALL2(CHKREF(YruntimeYrcurry),CHKREF(YastYimport_globalX),envF1298);
  T4 = CALL1(CHKREF(YastYmodule_exports),used_moduleF1300);
  T3 = CALL2(CHKREF(YruntimeYdo),T5,T4);
  T1 = T3;
  T0 = T1;
  T12 = (P)YPpair(CHKREF(YastYLconstantG),Ynil);
  T11 = (P)YPpair(CHKREF(YastYconstant_value),Ynil);
  T10 = (P)YPpair(YPfalse,Ynil);
  T9 = CALL3(CHKREF(YPisa),T12,T11,T10);
  RET(T9);
}

FUNCODEDEF(fun_expand_bind_list_276) {
  ARG(fail_, 0);
  ARG(var_, 1);
  ARG(pat_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALL2(CHKREF(Yerror),CHKREF(lit_107),pat_);
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_list_277) {
  ARG(fail_, 0);
  ARG(var_, 1);
  ARG(pat_, 2);
  P T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T3 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_108));
  T2 = CALL1(CHKREF(YmacrosYlst),var_);
  T1 = CALL1(CHKREF(YmacrosYlst),fail_);
  T0 = CALLN(CHKREF(YmacrosYcat),4,T3,T2,T1,Ynil);
  RET(T0);
}

FUNCODEDEF(fun_expand_bind_list_278) {
  ARG(fail_, 0);
  ARG(var_, 1);
  ARG(pat_, 2);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T7 = CALL1(CHKREF(YsyntaxYsexpr_unquoteQ),pat_);
  if (T7 != YPfalse) {
    T6 = CALL2(CHKREF(Yerror),CHKREF(lit_110),pat_);
    T0 = T6;
  } else {
    T5 = CALL1(CHKREF(YsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T5 != YPfalse) {
      T4 = CALL2(CHKREF(Yerror),CHKREF(lit_109),pat_);
      T1 = T4;
    } else {
      if (YPtrue != YPfalse) {
        T3 = CALL3(CHKREF(YastYexpand_bind_listT),pat_,var_,fail_);
        T2 = T3;
      } else {
        T2 = YPfalse;
      }
      T1 = T2;
    }
    T0 = T1;
  }
  RET(T0);
}

FUNCODEDEF(fun_expand_bind_listT_279) {
  ARG(fail_, 0);
  ARG(var_, 1);
  ARG(pat_, 2);
  P T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T3 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_111));
  T2 = CALL1(CHKREF(YmacrosYlst),var_);
  T1 = CALL1(CHKREF(YmacrosYlst),fail_);
  T0 = CALLN(CHKREF(YmacrosYcat),4,T3,T2,T1,Ynil);
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_listT_280) {
  ARG(fail_, 0);
  ARG(var_, 1);
  ARG(pat_, 2);
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T12 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_112));
  T11 = CALL1(CHKREF(YmacrosYlst),var_);
  T10 = CALL1(CHKREF(Yhead),pat_);
  T9 = CALL3(CHKREF(YastYexpand_bind_element),T10,var_,fail_);
  T8 = CALL1(CHKREF(YmacrosYlst),T9);
  T7 = CALL3(CHKREF(YmacrosYcat),T11,T8,Ynil);
  T6 = CALL1(CHKREF(YmacrosYlst),T7);
  T5 = CALL2(CHKREF(YmacrosYcat),T6,Ynil);
  T4 = CALL1(CHKREF(YmacrosYlst),T5);
  T3 = CALL1(CHKREF(Ytail),pat_);
  T2 = CALL3(CHKREF(YastYexpand_bind_listT),T3,var_,fail_);
  T1 = CALL1(CHKREF(YmacrosYlst),T2);
  T0 = CALLN(CHKREF(YmacrosYcat),4,T12,T4,T1,Ynil);
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_element_281) {
  ARG(fail_, 0);
  ARG(var_, 1);
  ARG(pat_, 2);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T7 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_114));
  T6 = CALL1(CHKREF(YmacrosYlst),var_);
  T5 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_113));
  T4 = CALL1(CHKREF(YmacrosYlst),pat_);
  T3 = CALL3(CHKREF(YmacrosYcat),T5,T4,Ynil);
  T2 = CALL1(CHKREF(YmacrosYlst),T3);
  T1 = CALL1(CHKREF(YmacrosYlst),fail_);
  T0 = CALLN(CHKREF(YmacrosYcat),5,T7,T6,T2,T1,Ynil);
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_element_282) {
  ARG(fail_, 0);
  ARG(var_, 1);
  ARG(pat_, 2);
  P T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T53 = CALL1(CHKREF(YsyntaxYsexpr_unquoteQ),pat_);
  if (T53 != YPfalse) {
    T52 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_125));
    T51 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_124));
    T50 = CALL1(CHKREF(YruntimeY2nd),pat_);
    T49 = CALL1(CHKREF(YmacrosYlst),T50);
    T48 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_123));
    T47 = CALL1(CHKREF(YmacrosYlst),var_);
    T46 = CALL1(CHKREF(YmacrosYlst),fail_);
    T45 = CALLN(CHKREF(YmacrosYcat),4,T48,T47,T46,Ynil);
    T44 = CALL1(CHKREF(YmacrosYlst),T45);
    T43 = CALLN(CHKREF(YmacrosYcat),4,T51,T49,T44,Ynil);
    T42 = CALL1(CHKREF(YmacrosYlst),T43);
    T41 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_122));
    T40 = CALL1(CHKREF(YmacrosYlst),var_);
    T39 = CALL3(CHKREF(YmacrosYcat),T41,T40,Ynil);
    T38 = CALL1(CHKREF(YmacrosYlst),T39);
    T37 = CALLN(CHKREF(YmacrosYcat),4,T52,T42,T38,Ynil);
    T0 = T37;
  } else {
    T36 = CALL1(CHKREF(YsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T36 != YPfalse) {
      T35 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_121));
      T34 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_120));
      T33 = CALL1(CHKREF(YruntimeY2nd),pat_);
      T32 = CALL1(CHKREF(YmacrosYlst),T33);
      T31 = CALL1(CHKREF(YmacrosYlst),var_);
      T30 = CALLN(CHKREF(YmacrosYcat),4,T34,T32,T31,Ynil);
      T29 = CALL1(CHKREF(YmacrosYlst),T30);
      T28 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_119));
      T27 = CALL1(CHKREF(YmacrosYlst),Ynil);
      T26 = CALL3(CHKREF(YmacrosYcat),T28,T27,Ynil);
      T25 = CALL1(CHKREF(YmacrosYlst),T26);
      T24 = CALLN(CHKREF(YmacrosYcat),4,T35,T29,T25,Ynil);
      T1 = T24;
    } else {
      if (YPtrue != YPfalse) {
        T23 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_118));
        T22 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_117));
        T21 = CALL1(CHKREF(YmacrosYlst),var_);
        T20 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_116));
        T19 = CALL1(CHKREF(YmacrosYlst),var_);
        T18 = CALL1(CHKREF(YmacrosYlst),fail_);
        T17 = CALLN(CHKREF(YmacrosYcat),4,T20,T19,T18,Ynil);
        T16 = CALL1(CHKREF(YmacrosYlst),T17);
        T15 = CALL3(CHKREF(YmacrosYcat),T21,T16,Ynil);
        T14 = CALL1(CHKREF(YmacrosYlst),T15);
        T13 = CALL2(CHKREF(YmacrosYcat),T14,Ynil);
        T12 = CALL1(CHKREF(YmacrosYlst),T13);
        T11 = CALL3(CHKREF(YastYexpand_bind_list),pat_,var_,fail_);
        T10 = CALL1(CHKREF(YmacrosYlst),T11);
        T9 = CALLN(CHKREF(YmacrosYcat),4,T22,T12,T10,Ynil);
        T8 = CALL1(CHKREF(YmacrosYlst),T9);
        T7 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_115));
        T6 = CALL1(CHKREF(YmacrosYlst),var_);
        T5 = CALL3(CHKREF(YmacrosYcat),T7,T6,Ynil);
        T4 = CALL1(CHKREF(YmacrosYlst),T5);
        T3 = CALLN(CHKREF(YmacrosYcat),4,T23,T8,T4,Ynil);
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

FUNCODEDEF(fun_expand_pattern_283) {
  ARG(fail_, 0);
  ARG(var_, 1);
  ARG(pat_, 2);
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T13 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_129));
  T12 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_128));
  T11 = CALL1(CHKREF(YmacrosYlst),var_);
  T10 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_127));
  T9 = CALLN(CHKREF(YmacrosYcat),4,T12,T11,T10,Ynil);
  T8 = CALL1(CHKREF(YmacrosYlst),T9);
  T7 = CALL3(CHKREF(YastYexpand_bind_list),pat_,var_,fail_);
  T6 = CALL1(CHKREF(YmacrosYlst),T7);
  T5 = CALL1(CHKREF(YmacrosYlst),fail_);
  T4 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_126));
  T3 = CALL1(CHKREF(YmacrosYlst),var_);
  T2 = CALLN(CHKREF(YmacrosYcat),4,T5,T4,T3,Ynil);
  T1 = CALL1(CHKREF(YmacrosYlst),T2);
  T0 = CALLN(CHKREF(YmacrosYcat),5,T13,T8,T6,T1,Ynil);
  QRET(T0);
}

FUNCODEDEF(fun_284) {
  ARG(x_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(YmacrosYlst),x_);
  T1 = CALL1(CHKREF(YmacrosYlst),YPfalse);
  T0 = CALL3(CHKREF(YmacrosYcat),T2,T1,Ynil);
  QRET(T0);
}

FUNCODEDEF(fun_expand_syntax_if_285) {
  ARG(x_, 0);
  P epatF1308;
  P failF1307;
  P varF1306;
  P elseF1305;
  P thenF1304;
  P valueF1303;
  P varsF1302;
  P patF1301;
  P T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T57 = CALL1(CHKREF(YsyntaxYsexpr_syntax_if_pattern),x_);
  patF1301 = T57;
  T56 = CALL1(CHKREF(YsyntaxYsexpr_bind_pattern_variables),patF1301);
  varsF1302 = T56;
  T55 = CALL1(CHKREF(YsyntaxYsexpr_syntax_if_value),x_);
  valueF1303 = T55;
  T54 = CALL1(CHKREF(YsyntaxYsexpr_syntax_if_then),x_);
  thenF1304 = T54;
  T53 = CALL1(CHKREF(YsyntaxYsexpr_syntax_if_else),x_);
  elseF1305 = T53;
  T52 = CALL0(CHKREF(YmacrosYgensym));
  varF1306 = T52;
  T51 = CALL0(CHKREF(YmacrosYgensym));
  failF1307 = T51;
  T50 = CALL3(CHKREF(YastYexpand_pattern),patF1301,varF1306,failF1307);
  epatF1308 = T50;
  T49 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_139));
  T48 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_138));
  T47 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_137));
  T46 = CALL1(CHKREF(YmacrosYlst),failF1307);
  T45 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_136));
  T44 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_135));
  T43 = CALL3(CHKREF(YmacrosYcat),T45,T44,Ynil);
  T42 = CALL1(CHKREF(YmacrosYlst),T43);
  T41 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_134));
  T40 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_133));
  T39 = CALL3(CHKREF(YmacrosYcat),T41,T40,Ynil);
  T38 = CALL1(CHKREF(YmacrosYlst),T39);
  T37 = CALL3(CHKREF(YmacrosYcat),T42,T38,Ynil);
  T36 = CALL1(CHKREF(YmacrosYlst),T37);
  T35 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_132));
  T34 = CALL1(CHKREF(YmacrosYlst),elseF1305);
  T33 = CALL3(CHKREF(YmacrosYcat),T35,T34,Ynil);
  T32 = CALL1(CHKREF(YmacrosYlst),T33);
  T31 = CALLN(CHKREF(YmacrosYcat),4,T46,T36,T32,Ynil);
  T30 = CALL1(CHKREF(YmacrosYlst),T31);
  T29 = CALL2(CHKREF(YmacrosYcat),T30,Ynil);
  T28 = CALL1(CHKREF(YmacrosYlst),T29);
  T27 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_131));
  T26 = CALL1(CHKREF(YmacrosYlst),varF1306);
  T25 = CALL1(CHKREF(YmacrosYlst),valueF1303);
  T24 = CALL3(CHKREF(YmacrosYcat),T26,T25,Ynil);
  T23 = CALL1(CHKREF(YmacrosYlst),T24);
  T22 = CALL2(CHKREF(YmacrosYcat),T23,Ynil);
  T21 = CALL1(CHKREF(YmacrosYlst),T22);
  T20 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_130));
  T19 = fun_284;
  T18 = CALL2(CHKREF(YmacrosYmap),T19,varsF1302);
  T17 = CALL1(CHKREF(YmacrosYlst),T18);
  T16 = CALL1(CHKREF(YmacrosYlst),epatF1308);
  T15 = CALL1(CHKREF(YmacrosYlst),thenF1304);
  T14 = CALLN(CHKREF(YmacrosYcat),5,T20,T17,T16,T15,Ynil);
  T13 = CALL1(CHKREF(YmacrosYlst),T14);
  T12 = CALLN(CHKREF(YmacrosYcat),4,T27,T21,T13,Ynil);
  T11 = CALL1(CHKREF(YmacrosYlst),T12);
  T10 = CALLN(CHKREF(YmacrosYcat),4,T47,T28,T11,Ynil);
  T9 = CALL1(CHKREF(YmacrosYlst),T10);
  T8 = CALLN(CHKREF(YmacrosYcat),4,T49,T48,T9,Ynil);
  T7 = T8;
  T6 = T7;
  T5 = T6;
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_r_extendT_286) {
  ARG(bindings_, 0);
  ARG(r_, 1);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = (P)YPpair(CHKREF(YastYLstatic_local_environmentG),Ynil);
  T4 = (P)YPpair(CHKREF(YastYenvironment_bindings),Ynil);
  T3 = (P)YPpair(CHKREF(YastYenvironment_next),T4);
  T2 = (P)YPpair(bindings_,Ynil);
  T1 = (P)YPpair(r_,T2);
  T0 = CALL3(CHKREF(YPisa),T5,T3,T1);
  RET(T0);
}

FUNCODEDEF(fun_insert_globalX_287) {
  ARG(r_, 0);
  ARG(binding_, 1);
  P rF1309;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YastYfind_static_global_environment),r_);
  check_type(T4,CHKREF(YastYLstatic_global_environmentG));
  rF1309 = T4;
  T3 = CALL1(CHKREF(YastYenvironment_bindings),rF1309);
  T2 = CALL1(CHKREF(YastYbinding_name),binding_);
  T1 = CALL3(CHKREF(YruntimeYelt_setter),binding_,T3,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_288) {
  ARG(b_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YastYinsert_globalX),b_,FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(fun_insert_globalsX_289) {
  ARG(r_, 0);
  ARG(bindings_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = FUNFAB(fun_288,1,r_);
  T0 = CALL2(CHKREF(YruntimeYdo),T1,bindings_);
  QRET(T0);
}

FUNCODEDEF(fun_find_static_global_environment_290) {
  ARG(r_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YastYenvironment_next),r_);
  T0 = CALL1(CHKREF(YastYfind_static_global_environment),T1);
  RET(T0);
}

FUNCODEDEF(fun_find_static_global_environment_291) {
  ARG(r_, 0);
  P a1;
loop:
  RET(r_);
}

FUNCODEDEF(fun_find_syntax_environment_292) {
  ARG(r_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YastYfind_environment_module),r_);
  T0 = CALL1(CHKREF(YastYmodule_syntax_environment),T1);
  RET(T0);
}

FUNCODEDEF(fun_find_environment_module_293) {
  ARG(r_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YastYfind_static_global_environment),r_);
  T0 = CALL1(CHKREF(YastYenvironment_module),T1);
  QRET(T0);
}

FUNCODEDEF(fun_loop_294) {
  ARG(bindings_, 0);
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T10 = CALL1(CHKREF(YmacrosYemptyQ),bindings_);
  if (T10 != YPfalse) {
    T9 = CALL1(CHKREF(YastYenvironment_next),FREEREF(2));
    T8 = CALL2(CHKREF(YastYfind_binding),FREEREF(1),T9);
    T0 = T8;
  } else {
    T7 = CALL1(CHKREF(Yhead),bindings_);
    T6 = CALL1(CHKREF(YastYbinding_name),T7);
    T5 = CALL2(CHKREF(YmacrosYEE),FREEREF(1),T6);
    if (T5 != YPfalse) {
      T4 = CALL1(CHKREF(Yhead),bindings_);
      T1 = T4;
    } else {
      T3 = CALL1(CHKREF(Ytail),bindings_);
      a1 = T3;
      bindings_ = a1;
      goto loop;
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_find_binding_295) {
  ARG(r_, 0);
  ARG(name_, 1);
  P loopF1310;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_loop_294,3);
  loopF1310 = T3;
  FUNINIT(loopF1310, 3,loopF1310,name_,r_);
  T2 = CALL1(CHKREF(YastYenvironment_bindings),r_);
  T1 = KCALL1(loopF1310,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_find_binding_296) {
  ARG(r_, 0);
  ARG(name_, 1);
  P a1,a2;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_find_binding_297) {
  ARG(r_, 0);
  ARG(name_, 1);
  P bindingF1311;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T6 = CALL1(CHKREF(YastYenvironment_bindings),r_);
  T5 = CALL2(CHKREF(YruntimeYelt),T6,name_);
  bindingF1311 = T5;
  T4 = CALL2(CHKREF(YmacrosYEE),bindingF1311,CHKREF(Ynul));
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YastYenvironment_next),r_);
    T2 = CALL2(CHKREF(YastYfind_binding),name_,T3);
    T1 = T2;
  } else {
    T1 = bindingF1311;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_frame_bindings_298) {
  ARG(env_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YastYenvironment_bindings),env_);
  RET(T0);
}

FUNCODEDEF(fun_register_magic_binding_299) {
  ARG(value_, 0);
  ARG(name_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YruntimeYadd),CHKREF(YastYTmagic_bindingsT),value_);
  T0 = YastYTmagic_bindingsT = T1;
  QRET(T0);
}

FUNCODEDEF(fun_magic_bindings_300) {
loop:
  QRET(CHKREF(YastYTmagic_bindingsT));
}

FUNCODEDEF(fun_x_1232_301) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_302) {
  ARG(return_, 0);
  P x_1231F1324;
  P x_1231F1323;
  P x_1231F1322;
  P x_1231F1321;
  P x_1231F1320;
  P x_1231F1319;
  P sexpr_nameF1318;
  P special_nameF1317;
  P bodyF1316;
  P paramsF1315;
  P nameF1314;
  P x_1231F1313;
  P x_1232F1312;
  P T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66;
  P T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50;
  P T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
loop:
  T81 = FUNSHELL(0,fun_x_1232_301,1);
  x_1232F1312 = T81;
  FUNINIT(x_1232F1312, 1,return_);
  x_1231F1313 = FREEREF(0);
  nameF1314 = YPfalse;
  nameF1314 = BOXFAB(nameF1314);
  paramsF1315 = YPfalse;
  paramsF1315 = BOXFAB(paramsF1315);
  bodyF1316 = YPfalse;
  bodyF1316 = BOXFAB(bodyF1316);
  T21 = CALL2(CHKREF(YisaQ),x_1231F1313,CHKREF(YLlstG));
  if (T21 != YPfalse) {
    T20 = CALL3(CHKREF(YmacrosYmatch_atom),x_1231F1313,CHKREF(lit_164),x_1232F1312);
    x_1231F1319 = T20;
    T18 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1231F1319,x_1232F1312);
    BOXVAL(nameF1314) = T18;
    T19 = CALL1(CHKREF(Ytail),x_1231F1319);
    x_1231F1320 = T19;
    T16 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1231F1320,x_1232F1312);
    x_1231F1321 = T16;
    BOXVAL(paramsF1315) = x_1231F1321;
    x_1231F1322 = Ynil;
    T15 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1231F1322,x_1232F1312);
    T14 = T15;
    T17 = CALL1(CHKREF(Ytail),x_1231F1320);
    x_1231F1323 = T17;
    BOXVAL(bodyF1316) = x_1231F1323;
    x_1231F1324 = Ynil;
    T13 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1231F1324,x_1232F1312);
    T12 = T13;
    T11 = T12;
    T10 = T11;
    T9 = T10;
  } else {
    T8 = CALL2(x_1232F1312,CHKREF(lit_163),x_1231F1313);
  }
  T80 = BOXVAL(nameF1314);
  T79 = CALL2(CHKREF(YmacrosYmake_sym),CHKREF(lit_162),T80);
  special_nameF1317 = T79;
  T78 = BOXVAL(nameF1314);
  T77 = CALL3(CHKREF(YmacrosYmake_sym),CHKREF(lit_161),T78,CHKREF(lit_160));
  sexpr_nameF1318 = T77;
  T76 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_159));
  T75 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_158));
  T74 = CALL1(CHKREF(YmacrosYlst),special_nameF1317);
  T73 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_157));
  T72 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_156));
  T71 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_155));
  T70 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_154));
  T69 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_153));
  T68 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_152));
  T67 = CALL3(CHKREF(YmacrosYcat),T69,T68,Ynil);
  T66 = CALL1(CHKREF(YmacrosYlst),T67);
  T65 = CALLN(CHKREF(YmacrosYcat),4,T71,T70,T66,Ynil);
  T64 = CALL1(CHKREF(YmacrosYlst),T65);
  T63 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_151));
  T62 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_150));
  T61 = CALL1(CHKREF(YmacrosYlst),sexpr_nameF1318);
  T60 = CALLN(CHKREF(YmacrosYcat),4,T63,T62,T61,Ynil);
  T59 = CALL1(CHKREF(YmacrosYlst),T60);
  T58 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_149));
  T57 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_148));
  T56 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_147));
  T55 = CALLN(CHKREF(YmacrosYcat),4,T58,T57,T56,Ynil);
  T54 = CALL1(CHKREF(YmacrosYlst),T55);
  T53 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_146));
  T52 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_145));
  T51 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_144));
  T50 = BOXVAL(paramsF1315);
  T49 = CALL2(CHKREF(YmacrosYcat),T50,Ynil);
  T48 = CALL1(CHKREF(YmacrosYlst),T49);
  T47 = BOXVAL(bodyF1316);
  T46 = CALLN(CHKREF(YmacrosYcat),4,T51,T48,T47,Ynil);
  T45 = CALL1(CHKREF(YmacrosYlst),T46);
  T44 = CALLN(CHKREF(YmacrosYcat),4,T53,T52,T45,Ynil);
  T43 = CALL1(CHKREF(YmacrosYlst),T44);
  T42 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_143));
  T41 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_142));
  T40 = CALL1(CHKREF(YmacrosYlst),YPfalse);
  T39 = CALLN(CHKREF(YmacrosYcat),4,T42,T41,T40,Ynil);
  T38 = CALL1(CHKREF(YmacrosYlst),T39);
  T37 = CALLN(CHKREF(YmacrosYcat),8,T73,T72,T64,T59,T54,T43,T38,Ynil);
  T36 = CALL1(CHKREF(YmacrosYlst),T37);
  T35 = CALLN(CHKREF(YmacrosYcat),4,T75,T74,T36,Ynil);
  T34 = CALL1(CHKREF(YmacrosYlst),T35);
  T33 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_141));
  T32 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_140));
  T31 = BOXVAL(nameF1314);
  T30 = CALL1(CHKREF(YmacrosYlst),T31);
  T29 = CALL3(CHKREF(YmacrosYcat),T32,T30,Ynil);
  T28 = CALL1(CHKREF(YmacrosYlst),T29);
  T27 = CALL1(CHKREF(YmacrosYlst),special_nameF1317);
  T26 = CALLN(CHKREF(YmacrosYcat),4,T33,T28,T27,Ynil);
  T25 = CALL1(CHKREF(YmacrosYlst),T26);
  T24 = CALLN(CHKREF(YmacrosYcat),4,T76,T34,T25,Ynil);
  T23 = T24;
  T22 = T23;
  T6 = T22;
  T4 = T6;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_303) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_302,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_304) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T3 = CALL1(CHKREF(YsyntaxYsexpr_if_test),x_);
  T2 = CALL1(CHKREF(YsyntaxYsexpr_if_then),x_);
  T1 = CALL1(CHKREF(YsyntaxYsexpr_if_else),x_);
  T0 = CALLN(CHKREF(YastYobjectify_alternative),5,T3,T2,T1,r_,tailQ_);
  QRET(T0);
}

FUNCODEDEF(fun_305) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T1,T0;
  P a1,a2,a3;
loop:
  T1 = CALL1(CHKREF(Ytail),x_);
  T0 = CALL3(CHKREF(YastYobjectify_sequential),T1,r_,tailQ_);
  QRET(T0);
}

FUNCODEDEF(fun_306) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T1,T0;
  P a1,a2,a3;
loop:
  T1 = CALL1(CHKREF(YruntimeY2nd),x_);
  T0 = CALL2(CHKREF(YastYobjectify_raw),T1,r_);
  QRET(T0);
}

FUNCODEDEF(fun_307) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T1,T0;
  P a1,a2,a3;
loop:
  T1 = CALL1(CHKREF(YsyntaxYsexpr_text_of_quotation),x_);
  T0 = CALL2(CHKREF(YastYobjectify_quotation),T1,r_);
  QRET(T0);
}

FUNCODEDEF(fun_308) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = CALL1(CHKREF(YsyntaxYsexpr_assignment_variable),x_);
  T1 = CALL1(CHKREF(YsyntaxYsexpr_assignment_value),x_);
  T0 = CALLN(CHKREF(YastYobjectify_assignment),4,T2,T1,r_,tailQ_);
  QRET(T0);
}

FUNCODEDEF(fun_309) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = CALL1(CHKREF(YsyntaxYsexpr_definition_variable),x_);
  T1 = CALL1(CHKREF(YsyntaxYsexpr_definition_value),x_);
  T0 = CALL3(CHKREF(YastYobjectify_definition),T2,T1,r_);
  QRET(T0);
}

FUNCODEDEF(fun_310) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = CALL1(CHKREF(YsyntaxYsexpr_syntax_definition_variable),x_);
  T1 = CALL1(CHKREF(YsyntaxYsexpr_syntax_definition_value),x_);
  T0 = CALLN(CHKREF(YastYobjectify_syntax_definition),4,T2,T1,r_,YPtrue);
  QRET(T0);
}

FUNCODEDEF(fun_311) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = CALL1(CHKREF(YsyntaxYsexpr_syntax_definition_variable),x_);
  T1 = CALL1(CHKREF(YsyntaxYsexpr_syntax_definition_value),x_);
  T0 = CALLN(CHKREF(YastYobjectify_syntax_definition),4,T2,T1,r_,YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_312) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = CALL1(CHKREF(YsyntaxYsexpr_function_definition_variable),x_);
  T1 = CALL1(CHKREF(YsyntaxYsexpr_function_definition_value),x_);
  T0 = CALL3(CHKREF(YastYobjectify_method_definition),T2,T1,r_);
  QRET(T0);
}

FUNCODEDEF(fun_313) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = CALL1(CHKREF(YsyntaxYsexpr_function_definition_variable),x_);
  T1 = CALL1(CHKREF(YsyntaxYsexpr_function_signature),x_);
  T0 = CALL3(CHKREF(YastYobjectify_generic_definition),T2,T1,r_);
  QRET(T0);
}

FUNCODEDEF(fun_314) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = CALL1(CHKREF(YsyntaxYsexpr_function_definition_variable),x_);
  T1 = CALL1(CHKREF(YsyntaxYsexpr_function_definition_value),x_);
  T0 = CALL3(CHKREF(YastYobjectify_function_definition),T2,T1,r_);
  QRET(T0);
}

FUNCODEDEF(fun_315) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = CALL1(CHKREF(YsyntaxYsexpr_method_signature),x_);
  T1 = CALL1(CHKREF(YsyntaxYsexpr_method_body),x_);
  T0 = CALLN(CHKREF(YastYobjectify_function),4,T2,T1,r_,tailQ_);
  QRET(T0);
}

FUNCODEDEF(fun_316) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T1,T0;
  P a1,a2,a3;
loop:
  T1 = CALL1(CHKREF(YruntimeY2nd),x_);
  T0 = CALL3(CHKREF(YastYobjectify_boundQ),T1,r_,tailQ_);
  QRET(T0);
}

FUNCODEDEF(fun_317) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T1,T0;
  P a1,a2,a3;
loop:
  T1 = CALL1(CHKREF(YsyntaxYsexpr_let_Gcombination),x_);
  T0 = CALL3(CHKREF(YastYobjectify),T1,r_,tailQ_);
  QRET(T0);
}

FUNCODEDEF(fun_318) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T4 = CALL1(CHKREF(YsyntaxYsexpr_loc_bound_names),x_);
  T3 = CALL1(CHKREF(YsyntaxYsexpr_loc_bound_signatures),x_);
  T2 = CALL1(CHKREF(YsyntaxYsexpr_loc_bound_bodies),x_);
  T1 = CALL1(CHKREF(YsyntaxYsexpr_loc_raw_body),x_);
  T0 = CALLN(CHKREF(YastYobjectify_locals),6,T4,T3,T2,T1,r_,tailQ_);
  QRET(T0);
}

FUNCODEDEF(fun_319) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T1,T0;
  P a1,a2,a3;
loop:
  T1 = CALL1(CHKREF(YsyntaxYsexpr_iterate_Gloc),x_);
  T0 = CALL3(CHKREF(YastYobjectify),T1,r_,tailQ_);
  QRET(T0);
}

FUNCODEDEF(fun_320) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = CALL1(CHKREF(YsyntaxYsexpr_block_name),x_);
  T1 = CALL1(CHKREF(YsyntaxYsexpr_block_body),x_);
  T0 = CALLN(CHKREF(YastYobjectify_bind_exit),4,T2,T1,r_,tailQ_);
  QRET(T0);
}

FUNCODEDEF(fun_321) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = CALL1(CHKREF(YsyntaxYsexpr_unwind_protect_protected_form),x_);
  T1 = CALL1(CHKREF(YsyntaxYsexpr_unwind_protect_cleanup_forms),x_);
  T0 = CALLN(CHKREF(YastYobjectify_unwind_protect),4,T2,T1,r_,tailQ_);
  QRET(T0);
}

FUNCODEDEF(fun_322) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = CALL1(CHKREF(YsyntaxYsexpr_monitor_handler),x_);
  T1 = CALL1(CHKREF(YsyntaxYsexpr_monitor_body),x_);
  T0 = CALLN(CHKREF(YastYobjectify_monitor),4,T2,T1,r_,tailQ_);
  QRET(T0);
}

FUNCODEDEF(fun_pairize_323) {
  ARG(args_, 0);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = CALL1(CHKREF(YmacrosYemptyQ),args_);
  if (T6 != YPfalse) {
    T5 = CALL2(CHKREF(YmacrosYlst),CHKREF(lit_207),Ynil);
    T0 = T5;
  } else {
    T4 = CALL1(CHKREF(Yhead),args_);
    T3 = CALL1(CHKREF(Ytail),args_);
    T2 = CALL1(CHKREF(YastYpairize),T3);
    T1 = CALL3(CHKREF(YmacrosYlst),CHKREF(lit_206),T4,T2);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_324) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P slot_initsF1325;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T10 = CALL1(CHKREF(YsyntaxYsexpr_isa_slot_inits),x_);
  slot_initsF1325 = T10;
  T9 = CALL1(CHKREF(YsyntaxYsexpr_isa_parents),x_);
  T8 = CALL1(CHKREF(YastYpairize),T9);
  T7 = CALL1(CHKREF(YsyntaxYsexpr_isa_init_slots),slot_initsF1325);
  T6 = CALL1(CHKREF(YastYpairize),T7);
  T5 = CALL1(CHKREF(YsyntaxYsexpr_isa_init_values),slot_initsF1325);
  T4 = CALL1(CHKREF(YastYpairize),T5);
  T3 = CALL3(CHKREF(YmacrosYlst),T8,T6,T4);
  T2 = CALL2(CHKREF(YsyntaxYsexpr_make_application),CHKREF(lit_208),T3);
  T1 = CALL3(CHKREF(YastYobjectify),T2,r_,tailQ_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_325) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P slot_typeF1329;
  P setter_nameF1328;
  P nameF1327;
  P varF1326;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T20 = CALL1(CHKREF(YsyntaxYsexpr_slot_variable),x_);
  varF1326 = T20;
  T19 = CALL1(CHKREF(YsyntaxYsexpr_variable_name),varF1326);
  nameF1327 = T19;
  T18 = CALL1(CHKREF(YsyntaxYsexpr_make_setter_name),nameF1327);
  setter_nameF1328 = T18;
  T17 = CALL1(CHKREF(YsyntaxYsexpr_variable_type),varF1326);
  slot_typeF1329 = T17;
  T16 = CALL1(CHKREF(YsyntaxYsexpr_slot_object),x_);
  T15 = CALL2(CHKREF(YsyntaxYsexpr_make_getter),nameF1327,T16);
  T14 = CALL1(CHKREF(YsyntaxYsexpr_slot_object),x_);
  T13 = CALL3(CHKREF(YsyntaxYsexpr_make_setter),nameF1327,T14,slot_typeF1329);
  T12 = CALL1(CHKREF(YsyntaxYsexpr_slot_object),x_);
  T11 = CALL1(CHKREF(YsyntaxYsexpr_slot_init),x_);
  T10 = CALL1(CHKREF(YmacrosYlst),T11);
  T9 = CALL2(CHKREF(YsyntaxYsexpr_make_anonymous_method),CHKREF(lit_211),T10);
  T8 = CALLN(CHKREF(YmacrosYlst),5,T12,nameF1327,setter_nameF1328,slot_typeF1329,T9);
  T7 = CALL2(CHKREF(YsyntaxYsexpr_make_application),CHKREF(lit_212),T8);
  T6 = CALL3(CHKREF(YmacrosYlst),T15,T13,T7);
  T5 = CALL1(CHKREF(YsyntaxYsexpr_make_begin),T6);
  T4 = CALL3(CHKREF(YastYobjectify),T5,r_,tailQ_);
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_326) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = CALL1(CHKREF(Ytail),x_);
  T1 = CALL1(CHKREF(Yhead),T2);
  T0 = CALLN(CHKREF(YastYobjectify_compile_time),4,T1,r_,tailQ_,YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_327) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = CALL1(CHKREF(Ytail),x_);
  T1 = CALL1(CHKREF(Yhead),T2);
  T0 = CALLN(CHKREF(YastYobjectify_compile_time),4,T1,r_,tailQ_,YPtrue);
  QRET(T0);
}

FUNCODEDEF(fun_328) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T7 = CALL1(CHKREF(YsyntaxYsexpr_forward_primitiveQ),x_);
  if (T7 != YPfalse) {
    T5 = CALL1(CHKREF(YsyntaxYsexpr_function_definition_variable),x_);
    CALLN(CHKREF(YastYast_define_binding),4,r_,T5,YPfalse,CHKREF(lit_222));
    T6 = CALL3(CHKREF(YastYobjectify),YPfalse,r_,tailQ_);
    T0 = T6;
  } else {
    T4 = CALL1(CHKREF(YsyntaxYsexpr_function_definition_variable),x_);
    T3 = CALL1(CHKREF(YsyntaxYsexpr_function_signature),x_);
    T2 = CALL1(CHKREF(YsyntaxYsexpr_function_body),x_);
    T1 = CALLN(CHKREF(YastYobjectify_primitive_definition),4,T4,T3,T2,r_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_329) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T1,T0;
  P a1,a2,a3;
loop:
  T1 = CALL1(CHKREF(YsyntaxYsexpr_expand_backquote),x_);
  T0 = CALL3(CHKREF(YastYobjectify),T1,r_,tailQ_);
  QRET(T0);
}

FUNCODEDEF(fun_ast_macro_expand_330) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P tmpF1332;
  P resF1331;
  P mF1330;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T11 = CALL1(CHKREF(Yhead),x_);
  T10 = CALL3(CHKREF(YastYobjectify),T11,r_,tailQ_);
  mF1330 = T10;
  T9 = CALL2(CHKREF(YisaQ),mF1330,CHKREF(YastYLmodule_bindingG));
  tmpF1332 = T9;
  if (tmpF1332 != YPfalse) {
    T8 = CALL1(CHKREF(YastYbinding_kind),mF1330);
    T7 = CALL2(CHKREF(YmacrosYEE),T8,CHKREF(lit_227));
    T6 = T7;
  } else {
    T6 = YPfalse;
  }
  T5 = T6;
  if (T5 != YPfalse) {
    T4 = CALL1(CHKREF(YastYbinding_handler),mF1330);
    T3 = CALL3(T4,x_,r_,tailQ_);
    resF1331 = T3;
    T2 = resF1331;
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_331) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = CALL1(CHKREF(YruntimeY2nd),x_);
  T1 = CALL3(CHKREF(YastYast_macro_expand),T2,r_,tailQ_);
  T0 = CALL2(CHKREF(YastYobjectify_quotation),T1,r_);
  QRET(T0);
}

FUNCODEDEF(fun_332) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T1,T0;
  P a1,a2,a3;
loop:
  T1 = CALL1(CHKREF(YastYexpand_syntax_if),x_);
  T0 = CALL3(CHKREF(YastYobjectify),T1,r_,tailQ_);
  QRET(T0);
}

FUNCODEDEF(fun_333) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T1,T0;
  P a1,a2,a3;
loop:
  T1 = CALL1(CHKREF(Ytail),x_);
  T0 = CALL3(CHKREF(YastYobjectify_export),T1,r_,tailQ_);
  QRET(T0);
}

FUNCODEDEF(fun_334) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T1,T0;
  P a1,a2,a3;
loop:
  T1 = CALL1(CHKREF(YruntimeY2nd),x_);
  T0 = CALL3(CHKREF(YastYobjectify_use_module),T1,r_,tailQ_);
  QRET(T0);
}

FUNCODEDEF(fun_primitives_335) {
loop:
  QRET(CHKREF(YastYTprimitivesT));
}

FUNCODEDEF(fun_register_primitive_336) {
  ARG(value_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YmacrosYpair),value_,CHKREF(YastYTprimitivesT));
  T0 = YastYTprimitivesT = T1;
  QRET(T0);
}

FUNCODEDEF(YastYfab_primitive) {
  ARG(params_, 0);
  ARG(name_, 1);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T6 = (P)YPpair(CHKREF(YastYbinding_module_name),Ynil);
  T5 = (P)YPpair(CHKREF(YastYbinding_name),T6);
  T4 = (P)YPpair(CHKREF(YastYbinding_kind),T5);
  T3 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),Ynil);
  T2 = (P)YPpair(name_,T3);
  T1 = (P)YPpair(CHKREF(lit_238),T2);
  T0 = CALL3(CHKREF(YPisa),T7,T4,T1);
  QRET(T0);
}

FUNCODEDEF(fun_x_1236_338) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_339) {
  ARG(return_, 0);
  P x_1235F1341;
  P x_1235F1340;
  P x_1235F1339;
  P x_1235F1338;
  P x_1235F1337;
  P paramsF1336;
  P nameF1335;
  P x_1235F1334;
  P x_1236F1333;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T38 = FUNSHELL(0,fun_x_1236_338,1);
  x_1236F1333 = T38;
  FUNINIT(x_1236F1333, 1,return_);
  x_1235F1334 = FREEREF(0);
  nameF1335 = YPfalse;
  nameF1335 = BOXFAB(nameF1335);
  paramsF1336 = YPfalse;
  paramsF1336 = BOXFAB(paramsF1336);
  T18 = CALL2(CHKREF(YisaQ),x_1235F1334,CHKREF(YLlstG));
  if (T18 != YPfalse) {
    T17 = CALL3(CHKREF(YmacrosYmatch_atom),x_1235F1334,CHKREF(lit_246),x_1236F1333);
    x_1235F1337 = T17;
    T15 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1235F1337,x_1236F1333);
    BOXVAL(nameF1335) = T15;
    T16 = CALL1(CHKREF(Ytail),x_1235F1337);
    x_1235F1338 = T16;
    T13 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1235F1338,x_1236F1333);
    x_1235F1339 = T13;
    BOXVAL(paramsF1336) = x_1235F1339;
    x_1235F1340 = Ynil;
    T12 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1235F1340,x_1236F1333);
    T11 = T12;
    T14 = CALL1(CHKREF(Ytail),x_1235F1338);
    x_1235F1341 = T14;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1235F1341,x_1236F1333);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1236F1333,CHKREF(lit_245),x_1235F1334);
  }
  T37 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_244));
  T36 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_243));
  T35 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_242));
  T34 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_241));
  T33 = BOXVAL(nameF1335);
  T32 = CALL1(CHKREF(YmacrosYlst),T33);
  T31 = CALL3(CHKREF(YmacrosYcat),T34,T32,Ynil);
  T30 = CALL1(CHKREF(YmacrosYlst),T31);
  T29 = CALL3(CHKREF(YmacrosYcat),T35,T30,Ynil);
  T28 = CALL1(CHKREF(YmacrosYlst),T29);
  T27 = CALL3(CHKREF(YmacrosYcat),T36,T28,Ynil);
  T26 = CALL1(CHKREF(YmacrosYlst),T27);
  T25 = CALL2(CHKREF(YmacrosYcat),T26,Ynil);
  T24 = CALL1(CHKREF(YmacrosYlst),T25);
  T23 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_240));
  T22 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_239));
  T21 = CALL3(CHKREF(YmacrosYcat),T23,T22,Ynil);
  T20 = CALL1(CHKREF(YmacrosYlst),T21);
  T19 = CALLN(CHKREF(YmacrosYcat),4,T37,T24,T20,Ynil);
  T4 = T19;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_340) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_339,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_modules_341) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYmodule_loader_modules));
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_modules_setter_342) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYmodule_loader_modules));
  QRET(T0);
}

FUNCODEDEF(fun_343) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYfab),CHKREF(YruntimeYLtabG),YPint((P)1000));
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_stack_344) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYmodule_loader_stack));
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_stack_setter_345) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYmodule_loader_stack));
  QRET(T0);
}

FUNCODEDEF(fun_346) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_module_name_347) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYmodule_name));
  QRET(T0);
}

FUNCODEDEF(fun_module_name_setter_348) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYmodule_name));
  QRET(T0);
}

FUNCODEDEF(fun_349) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_module_target_environment_350) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYmodule_target_environment));
  QRET(T0);
}

FUNCODEDEF(fun_module_target_environment_setter_351) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYmodule_target_environment));
  QRET(T0);
}

FUNCODEDEF(fun_352) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_module_syntax_environment_353) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYmodule_syntax_environment));
  QRET(T0);
}

FUNCODEDEF(fun_module_syntax_environment_setter_354) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYmodule_syntax_environment));
  QRET(T0);
}

FUNCODEDEF(fun_355) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_module_exports_356) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYmodule_exports));
  QRET(T0);
}

FUNCODEDEF(fun_module_exports_setter_357) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYmodule_exports));
  QRET(T0);
}

FUNCODEDEF(fun_358) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYfab),CHKREF(YruntimeYLtabG),YPint((P)1000));
  QRET(T0);
}

FUNCODEDEF(YastYset_module_environments) {
  ARG(target_env_, 0);
  ARG(syntax_env_, 1);
  ARG(mod_, 2);
  P T0;
  P a1,a2,a3;
loop:
  CALL2(CHKREF(YastYmodule_syntax_environment_setter),syntax_env_,mod_);
  T0 = CALL2(CHKREF(YastYmodule_target_environment_setter),target_env_,mod_);
  QRET(T0);
}

FUNCODEDEF(fun_360) {
  ARG(mod_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(FREEREF(0),mod_);
  QRET(T0);
}

FUNCODEDEF(YastYdo_module_loader_modules) {
  ARG(loader_, 0);
  ARG(f_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNFAB(fun_360,1,f_);
  T1 = CALL1(CHKREF(YastYmodule_loader_modules),loader_);
  T0 = CALL2(CHKREF(YruntimeYdo),T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_module_type_362) {
  ARG(loader_, 0);
  P a1;
loop:
  RET(CHKREF(YastYLmoduleG));
}

FUNCODEDEF(YastYregister_moduleX) {
  ARG(mod_, 0);
  ARG(module_loader_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YastYmodule_loader_modules),module_loader_);
  T0 = CALL1(CHKREF(YastYmodule_name),mod_);
  CALL3(CHKREF(YruntimeYelt_setter),mod_,T1,T0);
  RET(module_loader_);
}

FUNCODEDEF(YastYprobe_module) {
  ARG(name_, 0);
  ARG(module_loader_, 1);
  P moduleF1342;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = CALL1(CHKREF(YastYmodule_loader_modules),module_loader_);
  T4 = CALL2(CHKREF(YruntimeYelt),T5,name_);
  moduleF1342 = T4;
  T3 = CALL2(CHKREF(YmacrosYEE),moduleF1342,CHKREF(Ynul));
  if (T3 != YPfalse) {
    T2 = CALL2(CHKREF(YastYload_and_register_module),module_loader_,name_);
    T1 = T2;
  } else {
    T1 = moduleF1342;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_365) {
  P tup37F1348;
  P x_1240F1347;
  P tup37F1346;
  P x_1239F1345;
  P tup37F1344;
  P x_1238F1343;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  x_1238F1343 = FREEREF(0);
  T11 = CALL1(CHKREF(YastYmodule_loader_stack),x_1238F1343);
  T10 = CALL1(CHKREF(YruntimeYpop),T11);
  tup37F1344 = T10;
  T9 = CALL1(CHKREF(Yhead),tup37F1344);
  x_1239F1345 = T9;
  T8 = CALL1(CHKREF(Ytail),tup37F1344);
  tup37F1346 = T8;
  T7 = CALL1(CHKREF(Yhead),tup37F1346);
  x_1240F1347 = T7;
  T6 = CALL1(CHKREF(Ytail),tup37F1346);
  tup37F1348 = T6;
  CALL2(CHKREF(YastYmodule_loader_stack_setter),x_1239F1345,x_1238F1343);
  T5 = x_1240F1347;
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_366) {
  P T0;
loop:
  T0 = CALL2(CHKREF(YastYload_module),FREEREF(1),FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(YastYload_and_register_module) {
  ARG(name_, 0);
  ARG(loader_, 1);
  P modF1353;
  P x_1237F1352;
  P indentF1351;
  P depthF1350;
  P stackF1349;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T15 = CALL1(CHKREF(YastYmodule_loader_stack),loader_);
  stackF1349 = T15;
  T14 = CALL1(CHKREF(YruntimeYlen),stackF1349);
  depthF1350 = T14;
  T13 = CALL2(CHKREF(YstringsYstring_repeat),CHKREF(lit_348),depthF1350);
  indentF1351 = T13;
  T5 = CALL2(CHKREF(YruntimeYmemQ),stackF1349,name_);
  if (T5 != YPfalse) {
    T4 = CALL1(CHKREF(Yhead),stackF1349);
    T3 = CALL3(CHKREF(Yerror),CHKREF(lit_347),T4,name_);
  } else {
  }
  CALLN(CHKREF(YruntimeYformat),4,CHKREF(YruntimeYout),CHKREF(lit_346),indentF1351,name_);
  x_1237F1352 = loader_;
  T9 = CALL1(CHKREF(YastYmodule_loader_stack),x_1237F1352);
  T8 = CALL2(CHKREF(YruntimeYpush),T9,name_);
  T7 = CALL2(CHKREF(YastYmodule_loader_stack_setter),T8,x_1237F1352);
  T12 = FUNFAB(fun_366,2,name_,loader_);
  T11 = FUNFAB(fun_365,1,loader_);
  T10 = with_cleanup(T12,T11);
  modF1353 = T10;
  CALL2(CHKREF(YastYregister_moduleX),loader_,modF1353);
  CALL3(CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_345),indentF1351);
  T6 = modF1353;
  T2 = T6;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(YastYexport_bindingX) {
  ARG(binding_, 0);
  ARG(name_, 1);
  ARG(module_, 2);
  P tmpF1356;
  P existingF1355;
  P exportsF1354;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T9 = CALL1(CHKREF(YastYmodule_exports),module_);
  exportsF1354 = T9;
  T8 = CALL2(CHKREF(YruntimeYelt),exportsF1354,name_);
  existingF1355 = T8;
  T7 = CALL2(CHKREF(YmacrosYEE),existingF1355,CHKREF(Ynul));
  tmpF1356 = T7;
  if (tmpF1356 != YPfalse) {
    T5 = tmpF1356;
  } else {
    T6 = CALL2(CHKREF(YmacrosYEE),existingF1355,binding_);
    T5 = T6;
  }
  T4 = T5;
  T3 = CALL1(CHKREF(Ynot),T4);
  if (T3 != YPfalse) {
    T2 = CALLN(CHKREF(Yerror),5,CHKREF(lit_349),existingF1355,binding_,module_,name_);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  CALL3(CHKREF(YruntimeYelt_setter),binding_,exportsF1354,name_);
  T0 = YPfalse;
  QRET(T0);
}

FUNCODEDEF(YastYbinding_native_toQ) {
  ARG(module_, 0);
  ARG(binding_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL1(CHKREF(YastYmodule_name),module_);
  T1 = CALL1(CHKREF(YastYbinding_module_name),binding_);
  T0 = CALL2(CHKREF(YmacrosYEE),T2,T1);
  RET(T0);
}

FUNCODEDEF(fun_370) {
  ARG(binding_, 0);
  P tmpF1357;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = CALL1(CHKREF(YastYbinding_freeQ),binding_);
  tmpF1357 = T7;
  if (tmpF1357 != YPfalse) {
    T6 = CALL2(CHKREF(YastYbinding_native_toQ),binding_,FREEREF(0));
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T4 = T5;
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YastYmodule_name),FREEREF(0));
    T2 = CALL1(CHKREF(YastYbinding_name),binding_);
    T1 = CALLN(CHKREF(YruntimeYformat),4,CHKREF(YruntimeYout),CHKREF(lit_350),T3,T2);
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(YastYreport_undefined_global_bindings) {
  ARG(mod_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNFAB(fun_370,1,mod_);
  T1 = CALL1(CHKREF(YastYmodule_target_environment),mod_);
  T0 = CALL2(CHKREF(YastYdo_static_global_bindings),T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_372) {
  ARG(v_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(CHKREF(YmacrosYpair),v_,T2);
  T0 = BOXVAL(FREEREF(0)) = T1;
  QRET(T0);
}

FUNCODEDEF(fun_373) {
  ARG(uses_mod_, 0);
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL1(CHKREF(YastYmodule_name),uses_mod_);
  T3 = CALL2(CHKREF(YmacrosYEE),FREEREF(2),T4);
  if (T3 != YPfalse) {
    T2 = CALL1(CHKREF(YastYmodule_name),FREEREF(0));
    T1 = KCALL1(FREEREF(1),T2);
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_374) {
  ARG(mod_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = FUNFAB(fun_373,3,mod_,FREEREF(1),FREEREF(0));
  T2 = CALL1(CHKREF(YastYmodule_target_environment),mod_);
  T1 = CALL1(CHKREF(YastYenvironment_uses_modules),T2);
  T0 = CALL2(CHKREF(YruntimeYdo),T3,T1);
  QRET(T0);
}

FUNCODEDEF(fun_add_user_375) {
  ARG(modname_, 0);
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL2(CHKREF(YruntimeYelt),FREEREF(2),modname_);
  T3 = CALL1(CHKREF(YruntimeYnulQ),T4);
  if (T3 != YPfalse) {
    CALL3(CHKREF(YruntimeYelt_setter),modname_,FREEREF(2),modname_);
    T2 = FUNFAB(fun_374,2,modname_,FREEREF(1));
    T1 = CALL2(CHKREF(YastYdo_module_loader_modules),T2,FREEREF(0));
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(YastYcompute_transitive_users) {
  ARG(modnames_, 0);
  ARG(loader_, 1);
  P collector_F1360;
  P add_userF1359;
  P usersF1358;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = CALL2(CHKREF(YruntimeYfab),CHKREF(YruntimeYLtabG),YPint((P)100));
  usersF1358 = T8;
  T7 = FUNSHELL(0,fun_add_user_375,3);
  add_userF1359 = T7;
  FUNINIT(add_userF1359, 3,loader_,add_userF1359,usersF1358);
  CALL2(CHKREF(YruntimeYdo),add_userF1359,modnames_);
  collector_F1360 = Ynil;
  collector_F1360 = BOXFAB(collector_F1360);
  T4 = FUNFAB(fun_372,1,collector_F1360);
  CALL2(CHKREF(YruntimeYdo),T4,usersF1358);
  T6 = BOXVAL(collector_F1360);
  T5 = CALL1(CHKREF(YruntimeYrevX),T6);
  T2 = T5;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_377) {
  ARG(binding_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YastYbinding_freeQ_setter),YPtrue,binding_);
  QRET(T0);
}

FUNCODEDEF(YastYremove_module_internalX) {
  ARG(mod_, 0);
  ARG(loader_, 1);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = fun_377;
  T1 = CALL1(CHKREF(YastYmodule_target_environment),mod_);
  T0 = CALL1(CHKREF(YastYenvironment_implements),T1);
  CALL2(CHKREF(YruntimeYdo),T2,T0);
  T5 = CALL1(CHKREF(YastYmodule_loader_modules),loader_);
  T4 = CALL1(CHKREF(YastYmodule_name),mod_);
  T3 = CALL2(CHKREF(YruntimeYdel_key),T5,T4);
  QRET(T3);
}

FUNCODEDEF(fun_379) {
  ARG(modname_, 0);
  P modF1361;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL1(CHKREF(YastYmodule_loader_modules),FREEREF(0));
  T2 = CALL2(CHKREF(YruntimeYelt),T3,modname_);
  modF1361 = T2;
  T1 = CALL2(CHKREF(YastYremove_module_internalX),FREEREF(0),modF1361);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(YastYremove_modules_by_nameX) {
  ARG(modnames_, 0);
  ARG(loader_, 1);
  P remove_namesF1362;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL2(CHKREF(YastYcompute_transitive_users),loader_,modnames_);
  remove_namesF1362 = T2;
  T1 = FUNFAB(fun_379,1,loader_);
  T0 = CALL2(CHKREF(YruntimeYdo),T1,remove_namesF1362);
  QRET(YPfalse);
}

FUNCODEDEF(YastYfab_static_global_environment) {
  ARG(module_loader_, 0);
  ARG(module_, 1);
  P new_envF1363;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T11 = (P)YPpair(CHKREF(YastYLstatic_global_environmentG),Ynil);
  T10 = (P)YPpair(CHKREF(YastYenvironment_bindings),Ynil);
  T9 = (P)YPpair(CHKREF(YastYenvironment_next),T10);
  T8 = (P)YPpair(CHKREF(YastYenvironment_module_loader),T9);
  T7 = (P)YPpair(CHKREF(YastYenvironment_module),T8);
  T6 = CALL2(CHKREF(YruntimeYfab),CHKREF(YruntimeYLtabG),YPint((P)2000));
  T5 = (P)YPpair(T6,Ynil);
  T4 = (P)YPpair(CHKREF(YastYDempty_static_environment),T5);
  T3 = (P)YPpair(module_loader_,T4);
  T2 = (P)YPpair(module_,T3);
  T1 = CALL3(CHKREF(YPisa),T11,T7,T2);
  new_envF1363 = T1;
  T0 = new_envF1363;
  RET(T0);
}

FUNCODEDEF(fun_x_1243_382) {
  ARG(x_1241_, 0);
  P bindingF1365;
  P nameF1364;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T10 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),x_1241_);
  T9 = CALL1(CHKREF(Ynot),T10);
  if (T9 != YPfalse) {
    T8 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),x_1241_);
    nameF1364 = T8;
    T5 = CALL2(CHKREF(YastYfind_binding),nameF1364,FREEREF(2));
    bindingF1365 = T5;
    if (bindingF1365 != YPfalse) {
      T4 = CALL2(CHKREF(YastYinsert_globalX),bindingF1365,FREEREF(3));
      T2 = T4;
    } else {
      T3 = CALL2(CHKREF(Yerror),CHKREF(lit_351),nameF1364);
      T2 = T3;
    }
    T7 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),x_1241_);
    a1 = T7;
    x_1241_ = a1;
    goto loop;
    T1 = T6;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(YastYcopy_environment_bindings) {
  ARG(names_, 0);
  ARG(src_env_, 1);
  ARG(dst_env_, 2);
  P x_1243F1367;
  P x_1242F1366;
  P T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  x_1242F1366 = names_;
  T3 = FUNSHELL(1,fun_x_1243_382,4);
  x_1243F1367 = T3;
  FUNINIT(x_1243F1367, 4,x_1242F1366,x_1243F1367,src_env_,dst_env_);
  T2 = CALL1(CHKREF(YruntimeYini_state),x_1242F1366);
  T1 = KCALL1(x_1243F1367,T2);
  T0 = T1;
  RET(dst_env_);
}

FUNCODEDEF(fun_fab_subset_environment_384) {
  ARG(subset_, 0);
  ARG(old_env_, 1);
  ARG(module_, 2);
  P new_envF1368;
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = CALL1(CHKREF(YastYenvironment_module_loader),old_env_);
  T1 = CALL2(CHKREF(YastYfab_static_global_environment),module_,T2);
  new_envF1368 = T1;
  CALL3(CHKREF(YastYcopy_environment_bindings),new_envF1368,old_env_,subset_);
  T0 = new_envF1368;
  RET(T0);
}

FUNCODEDEF(YastYruntime_environment) {
loop:
  QRET(CHKREF(YastYTruntime_environmentT));
}

FUNCODEDEF(YastYruntime_module) {
loop:
  QRET(CHKREF(YastYTruntime_moduleT));
}

FUNCODEDEF(YastYruntime_module_loader) {
loop:
  QRET(CHKREF(YastYTruntime_module_loaderT));
}

FUNCODEDEF(fun_388) {
  ARG(loc_, 0);
  ARG(name_, 1);
  ARG(mod_, 2);
  P bindingF1369;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T13 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T12 = (P)YPpair(CHKREF(YastYbinding_locative),Ynil);
  T11 = (P)YPpair(CHKREF(YastYbinding_name),T12);
  T10 = (P)YPpair(CHKREF(YastYbinding_module_name),T11);
  T9 = (P)YPpair(CHKREF(YastYbinding_kind),T10);
  T8 = CALL2(CHKREF(YruntimeYas),CHKREF(YLsymG),mod_);
  T7 = CALL2(CHKREF(YruntimeYas),CHKREF(YLsymG),name_);
  T6 = (P)YPpair(loc_,Ynil);
  T5 = (P)YPpair(T7,T6);
  T4 = (P)YPpair(T8,T5);
  T3 = (P)YPpair(CHKREF(lit_352),T4);
  T2 = CALL3(CHKREF(YPisa),T13,T9,T3);
  bindingF1369 = T2;
  T1 = CALL2(CHKREF(YastYinsert_globalX),bindingF1369,FREEREF(0));
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(YastYinit_runtime) {
  P rt_envF1373;
  P rt_moduleF1372;
  P typeF1371;
  P rt_loaderF1370;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T14 = (P)YPpair(CHKREF(YastYLmodule_loaderG),Ynil);
  T13 = CALL3(CHKREF(YPisa),T14,Ynil,Ynil);
  rt_loaderF1370 = T13;
  T12 = CALL1(CHKREF(YastYmodule_loader_module_type),rt_loaderF1370);
  typeF1371 = T12;
  T11 = (P)YPpair(typeF1371,Ynil);
  T10 = (P)YPpair(CHKREF(YastYmodule_name),Ynil);
  T9 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),Ynil);
  T8 = CALL3(CHKREF(YPisa),T11,T10,T9);
  rt_moduleF1372 = T8;
  T7 = CALL2(CHKREF(YastYfab_static_global_environment),rt_moduleF1372,rt_loaderF1370);
  rt_envF1373 = T7;
  CALL3(CHKREF(YastYset_module_environments),rt_moduleF1372,rt_envF1373,rt_envF1373);
  T4 = FUNFAB(fun_388,1,rt_envF1373);
  (P)YPdo_runtime_bindings(T4);
  T5 = CALL0(CHKREF(YastYmagic_bindings));
  CALL2(CHKREF(YastYinsert_globalsX),T5,rt_envF1373);
  CALL1(CHKREF(YastYinit_environment_for_eval),rt_envF1373);
  T6 = CALL2(CHKREF(YruntimeYrcurry),CHKREF(YPPmacro),rt_envF1373);
  CALL3(CHKREF(YruntimeYdo2),T6,CHKREF(YTboot_macro_namesT),CHKREF(YTboot_macro_expandersT));
  YTmacros_okQT = YPtrue;
  YastYTruntime_module_loaderT = rt_loaderF1370;
  YastYTruntime_moduleT = rt_moduleF1372;
  YastYTruntime_environmentT = rt_envF1373;
  T3 = YPfalse;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(YastYfab_syntax_environment) {
  ARG(module_, 0);
  P syn_envF1374;
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL0(CHKREF(YastYruntime_environment));
  T1 = CALL3(CHKREF(YastYfab_subset_environment),module_,T2,CHKREF(YastYsyntax_environment_bindings));
  syn_envF1374 = T1;
  CALL1(CHKREF(YastYinit_environment_for_eval),syn_envF1374);
  T0 = syn_envF1374;
  RET(T0);
}

FUNCODEDEF(YastYfab_p2c_module) {
  ARG(name_, 0);
  ARG(loader_, 1);
  P target_envF1378;
  P syntax_envF1377;
  P moduleF1376;
  P typeF1375;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T13 = CALL1(CHKREF(YastYmodule_loader_module_type),loader_);
  typeF1375 = T13;
  T12 = (P)YPpair(typeF1375,Ynil);
  T11 = (P)YPpair(CHKREF(YastYmodule_name),Ynil);
  T10 = (P)YPpair(name_,Ynil);
  T9 = CALL3(CHKREF(YPisa),T12,T11,T10);
  moduleF1376 = T9;
  T8 = CALL1(CHKREF(YastYfab_syntax_environment),moduleF1376);
  syntax_envF1377 = T8;
  T7 = CALL2(CHKREF(YastYfab_static_global_environment),moduleF1376,loader_);
  target_envF1378 = T7;
  CALL3(CHKREF(YastYset_module_environments),moduleF1376,syntax_envF1377,target_envF1378);
  T6 = CALL2(CHKREF(YmacrosYEE),name_,CHKREF(YastYDproto_boot_module_name));
  if (T6 != YPfalse) {
    T5 = CALL1(CHKREF(YastYinit_p2c_boot_environment),target_envF1378);
  } else {
    T4 = CALL2(CHKREF(YastYinit_p2c_regular_environment),target_envF1378,loader_);
  }
  T3 = moduleF1376;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(YastYinit_p2c_boot_environment) {
  ARG(env_, 0);
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T2 = CALL0(CHKREF(YastYmagic_bindings));
  T1 = CALL0(CHKREF(YastYprimitives));
  T0 = CALL2(CHKREF(YmacrosYcat),T2,T1);
  CALL2(CHKREF(YastYinsert_globalsX),T0,env_);
  T4 = CALL0(CHKREF(YastYruntime_environment));
  T3 = CALL3(CHKREF(YastYcopy_environment_bindings),env_,T4,CHKREF(lit_354));
  QRET(T3);
}

FUNCODEDEF(YastYinit_p2c_regular_environment) {
  ARG(loader_, 0);
  ARG(env_, 1);
  P bootenvF1380;
  P bootmodF1379;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL2(CHKREF(YastYprobe_module),loader_,CHKREF(YastYDproto_boot_module_name));
  bootmodF1379 = T4;
  T3 = CALL1(CHKREF(YastYmodule_target_environment),bootmodF1379);
  bootenvF1380 = T3;
  T2 = CALL3(CHKREF(YastYcopy_environment_bindings),env_,bootenvF1380,CHKREF(lit_355));
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(YastYinit_ast) {
  P T0;
loop:
  T0 = CALL0(CHKREF(YastYinit_runtime));
  QRET(T0);
}

FUNCODEDEF(fun_loop_395) {
  ARG(env_, 0);
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = CALL2(CHKREF(YisaQ),env_,CHKREF(YastYLstatic_empty_environmentG));
  T4 = CALL1(CHKREF(Ynot),T5);
  if (T4 != YPfalse) {
    T1 = CALL1(CHKREF(YastYframe_bindings),env_);
    CALL2(CHKREF(YruntimeYdo),FREEREF(1),T1);
    T3 = CALL1(CHKREF(YastYenvironment_next),env_);
    a1 = T3;
    env_ = a1;
    goto loop;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(YastYdo_static_global_bindings) {
  ARG(env_, 0);
  ARG(f_, 1);
  P loopF1381;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_loop_395,2);
  loopF1381 = T2;
  FUNINIT(loopF1381, 2,loopF1381,f_);
  T1 = KCALL1(loopF1381,env_);
  T0 = T1;
  QRET(T0);
}

P YastY___main_0___() {
  P T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168;
  P T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152;
  P T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136;
  P T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120;
  P T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104;
  P T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88;
  P T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72;
  P T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56;
  P T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"boot");
  YastYDproto_boot_module_name = CHKREF(lit_0);
  regsym(&YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
  lit_1 = YPPsym((P)"runtime");
  YastYDproto_runtime_module_name = CHKREF(lit_1);
  regsym(&YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
  T0 = YPsig(YPpair(YPPsym((P)"message"),YPpair(YPPsym((P)"arguments"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_objectify_error_0 = YPmet(FUNCODEREF(fun_objectify_error_0),YPPsym((P)"objectify-error"),T0,ENVNUL);
  T4 = BOUNDP(YastYobjectify_error);
  if (T4 != YPfalse) {
    T3 = CHKREF(YastYobjectify_error);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_objectify_error_0;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YastYobjectify_error = T1;
  regsym(&YastYobjectify_error,"ast","objectify-error");
  T6 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T5 = CALL3(CHKREF(YPisa),T6,Ynil,Ynil);
  YastYLprogramG = T5;
  regsym(&YastYLprogramG,"ast","<program>");
  T7 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLprogramG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_program_type_1 = YPmet(FUNCODEREF(fun_program_type_1),YPPsym((P)"program-type"),T7,ENVNUL);
  T11 = BOUNDP(YastYprogram_type);
  if (T11 != YPfalse) {
    T10 = CHKREF(YastYprogram_type);
  } else {
    T10 = YPfalse;
  }
  T9 = fun_program_type_1;
  T8 = CALL2(CHKREF(YPdefine_method),T10,T9);
  YastYprogram_type = T8;
  regsym(&YastYprogram_type,"ast","program-type");
  T12 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLprogramG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_program_type_setter_2 = YPmet(FUNCODEREF(fun_program_type_setter_2),YPPsym((P)"program-type-setter"),T12,ENVNUL);
  T16 = BOUNDP(YastYprogram_type_setter);
  if (T16 != YPfalse) {
    T15 = CHKREF(YastYprogram_type_setter);
  } else {
    T15 = YPfalse;
  }
  T14 = fun_program_type_setter_2;
  T13 = CALL2(CHKREF(YPdefine_method),T15,T14);
  YastYprogram_type_setter = T13;
  regsym(&YastYprogram_type_setter,"ast","program-type-setter");
  T17 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_3 = YPmet(FUNCODEREF(fun_3),YPfalse,T17,ENVNUL);
  T18 = fun_3;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLprogramG),CHKREF(YastYprogram_type),CHKREF(YastYprogram_type_setter),CHKREF(YLanyG),T18);
  T19 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YastYLprogramG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_program_register_4 = YPmet(FUNCODEREF(fun_program_register_4),YPPsym((P)"program-register"),T19,ENVNUL);
  T23 = BOUNDP(YastYprogram_register);
  if (T23 != YPfalse) {
    T22 = CHKREF(YastYprogram_register);
  } else {
    T22 = YPfalse;
  }
  T21 = fun_program_register_4;
  T20 = CALL2(CHKREF(YPdefine_method),T22,T21);
  YastYprogram_register = T20;
  regsym(&YastYprogram_register,"ast","program-register");
  T25 = (P)YPpair(CHKREF(YastYLprogramG),Ynil);
  T24 = CALL3(CHKREF(YPisa),T25,Ynil,Ynil);
  YastYLcomputed_programG = T24;
  regsym(&YastYLcomputed_programG,"ast","<computed-program>");
  T26 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLcomputed_programG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_program_register_5 = YPmet(FUNCODEREF(fun_program_register_5),YPPsym((P)"program-register"),T26,ENVNUL);
  T30 = BOUNDP(YastYprogram_register);
  if (T30 != YPfalse) {
    T29 = CHKREF(YastYprogram_register);
  } else {
    T29 = YPfalse;
  }
  T28 = fun_program_register_5;
  T27 = CALL2(CHKREF(YPdefine_method),T29,T28);
  YastYprogram_register = T27;
  regsym(&YastYprogram_register,"ast","program-register");
  T31 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLcomputed_programG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_program_register_setter_6 = YPmet(FUNCODEREF(fun_program_register_setter_6),YPPsym((P)"program-register-setter"),T31,ENVNUL);
  T35 = BOUNDP(YastYprogram_register_setter);
  if (T35 != YPfalse) {
    T34 = CHKREF(YastYprogram_register_setter);
  } else {
    T34 = YPfalse;
  }
  T33 = fun_program_register_setter_6;
  T32 = CALL2(CHKREF(YPdefine_method),T34,T33);
  YastYprogram_register_setter = T32;
  regsym(&YastYprogram_register_setter,"ast","program-register-setter");
  T36 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T36,ENVNUL);
  T37 = fun_7;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLcomputed_programG),CHKREF(YastYprogram_register),CHKREF(YastYprogram_register_setter),CHKREF(YLanyG),T37);
  T39 = (P)YPpair(CHKREF(YastYLprogramG),Ynil);
  T38 = CALL3(CHKREF(YPisa),T39,Ynil,Ynil);
  YastYLpassive_programG = T38;
  regsym(&YastYLpassive_programG,"ast","<passive-program>");
  YastYLbinding_nameG = CHKREF(YLanyG);
  regsym(&YastYLbinding_nameG,"ast","<binding-name>");
  T41 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T40 = CALL3(CHKREF(YPisa),T41,Ynil,Ynil);
  YastYLbindingG = T40;
  regsym(&YastYLbindingG,"ast","<binding>");
  T42 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLbindingG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_binding_name_8 = YPmet(FUNCODEREF(fun_binding_name_8),YPPsym((P)"binding-name"),T42,ENVNUL);
  T46 = BOUNDP(YastYbinding_name);
  if (T46 != YPfalse) {
    T45 = CHKREF(YastYbinding_name);
  } else {
    T45 = YPfalse;
  }
  T44 = fun_binding_name_8;
  T43 = CALL2(CHKREF(YPdefine_method),T45,T44);
  YastYbinding_name = T43;
  regsym(&YastYbinding_name,"ast","binding-name");
  T47 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YastYLbinding_nameG),YPpair(CHKREF(YastYLbindingG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_binding_name_setter_9 = YPmet(FUNCODEREF(fun_binding_name_setter_9),YPPsym((P)"binding-name-setter"),T47,ENVNUL);
  T51 = BOUNDP(YastYbinding_name_setter);
  if (T51 != YPfalse) {
    T50 = CHKREF(YastYbinding_name_setter);
  } else {
    T50 = YPfalse;
  }
  T49 = fun_binding_name_setter_9;
  T48 = CALL2(CHKREF(YPdefine_method),T50,T49);
  YastYbinding_name_setter = T48;
  regsym(&YastYbinding_name_setter,"ast","binding-name-setter");
  T52 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T52,ENVNUL);
  T53 = fun_10;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLbindingG),CHKREF(YastYbinding_name),CHKREF(YastYbinding_name_setter),CHKREF(YastYLbinding_nameG),T53);
  T54 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLbindingG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_binding_type_11 = YPmet(FUNCODEREF(fun_binding_type_11),YPPsym((P)"binding-type"),T54,ENVNUL);
  T58 = BOUNDP(YastYbinding_type);
  if (T58 != YPfalse) {
    T57 = CHKREF(YastYbinding_type);
  } else {
    T57 = YPfalse;
  }
  T56 = fun_binding_type_11;
  T55 = CALL2(CHKREF(YPdefine_method),T57,T56);
  YastYbinding_type = T55;
  regsym(&YastYbinding_type,"ast","binding-type");
  T59 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YastYLprogramG),YPpair(CHKREF(YastYLbindingG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_binding_type_setter_12 = YPmet(FUNCODEREF(fun_binding_type_setter_12),YPPsym((P)"binding-type-setter"),T59,ENVNUL);
  T63 = BOUNDP(YastYbinding_type_setter);
  if (T63 != YPfalse) {
    T62 = CHKREF(YastYbinding_type_setter);
  } else {
    T62 = YPfalse;
  }
  T61 = fun_binding_type_setter_12;
  T60 = CALL2(CHKREF(YPdefine_method),T62,T61);
  YastYbinding_type_setter = T60;
  regsym(&YastYbinding_type_setter,"ast","binding-type-setter");
  T64 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T64,ENVNUL);
  T65 = fun_13;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLbindingG),CHKREF(YastYbinding_type),CHKREF(YastYbinding_type_setter),CHKREF(YastYLprogramG),T65);
  T67 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T66 = CALL3(CHKREF(YPisa),T67,Ynil,Ynil);
  YastYLglobal_boxG = T66;
  regsym(&YastYLglobal_boxG,"ast","<global-box>");
  T68 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLglobal_boxG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_global_box_value_14 = YPmet(FUNCODEREF(fun_global_box_value_14),YPPsym((P)"global-box-value"),T68,ENVNUL);
  T72 = BOUNDP(YastYglobal_box_value);
  if (T72 != YPfalse) {
    T71 = CHKREF(YastYglobal_box_value);
  } else {
    T71 = YPfalse;
  }
  T70 = fun_global_box_value_14;
  T69 = CALL2(CHKREF(YPdefine_method),T71,T70);
  YastYglobal_box_value = T69;
  regsym(&YastYglobal_box_value,"ast","global-box-value");
  T73 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLglobal_boxG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_global_box_value_setter_15 = YPmet(FUNCODEREF(fun_global_box_value_setter_15),YPPsym((P)"global-box-value-setter"),T73,ENVNUL);
  T77 = BOUNDP(YastYglobal_box_value_setter);
  if (T77 != YPfalse) {
    T76 = CHKREF(YastYglobal_box_value_setter);
  } else {
    T76 = YPfalse;
  }
  T75 = fun_global_box_value_setter_15;
  T74 = CALL2(CHKREF(YPdefine_method),T76,T75);
  YastYglobal_box_value_setter = T74;
  regsym(&YastYglobal_box_value_setter,"ast","global-box-value-setter");
  T78 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T78,ENVNUL);
  T79 = fun_16;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLglobal_boxG),CHKREF(YastYglobal_box_value),CHKREF(YastYglobal_box_value_setter),CHKREF(YLanyG),T79);
  T81 = (P)YPpair(CHKREF(YastYLbindingG),Ynil);
  T80 = CALL3(CHKREF(YPisa),T81,Ynil,Ynil);
  YastYLmodule_bindingG = T80;
  regsym(&YastYLmodule_bindingG,"ast","<module-binding>");
  T82 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLmodule_bindingG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_binding_kind_17 = YPmet(FUNCODEREF(fun_binding_kind_17),YPPsym((P)"binding-kind"),T82,ENVNUL);
  T86 = BOUNDP(YastYbinding_kind);
  if (T86 != YPfalse) {
    T85 = CHKREF(YastYbinding_kind);
  } else {
    T85 = YPfalse;
  }
  T84 = fun_binding_kind_17;
  T83 = CALL2(CHKREF(YPdefine_method),T85,T84);
  YastYbinding_kind = T83;
  regsym(&YastYbinding_kind,"ast","binding-kind");
  T87 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLmodule_bindingG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_binding_kind_setter_18 = YPmet(FUNCODEREF(fun_binding_kind_setter_18),YPPsym((P)"binding-kind-setter"),T87,ENVNUL);
  T91 = BOUNDP(YastYbinding_kind_setter);
  if (T91 != YPfalse) {
    T90 = CHKREF(YastYbinding_kind_setter);
  } else {
    T90 = YPfalse;
  }
  T89 = fun_binding_kind_setter_18;
  T88 = CALL2(CHKREF(YPdefine_method),T90,T89);
  YastYbinding_kind_setter = T88;
  regsym(&YastYbinding_kind_setter,"ast","binding-kind-setter");
  lit_2 = YPPsym((P)"global");
  T92 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T92,ENVNUL);
  T93 = fun_19;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmodule_bindingG),CHKREF(YastYbinding_kind),CHKREF(YastYbinding_kind_setter),CHKREF(YLanyG),T93);
  T94 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLmodule_bindingG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_binding_module_name_20 = YPmet(FUNCODEREF(fun_binding_module_name_20),YPPsym((P)"binding-module-name"),T94,ENVNUL);
  T98 = BOUNDP(YastYbinding_module_name);
  if (T98 != YPfalse) {
    T97 = CHKREF(YastYbinding_module_name);
  } else {
    T97 = YPfalse;
  }
  T96 = fun_binding_module_name_20;
  T95 = CALL2(CHKREF(YPdefine_method),T97,T96);
  YastYbinding_module_name = T95;
  regsym(&YastYbinding_module_name,"ast","binding-module-name");
  T99 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLsymG),YPpair(CHKREF(YastYLmodule_bindingG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_binding_module_name_setter_21 = YPmet(FUNCODEREF(fun_binding_module_name_setter_21),YPPsym((P)"binding-module-name-setter"),T99,ENVNUL);
  T103 = BOUNDP(YastYbinding_module_name_setter);
  if (T103 != YPfalse) {
    T102 = CHKREF(YastYbinding_module_name_setter);
  } else {
    T102 = YPfalse;
  }
  T101 = fun_binding_module_name_setter_21;
  T100 = CALL2(CHKREF(YPdefine_method),T102,T101);
  YastYbinding_module_name_setter = T100;
  regsym(&YastYbinding_module_name_setter,"ast","binding-module-name-setter");
  T104 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T104,ENVNUL);
  T105 = fun_22;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmodule_bindingG),CHKREF(YastYbinding_module_name),CHKREF(YastYbinding_module_name_setter),CHKREF(YLsymG),T105);
  T106 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLmodule_bindingG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_binding_freeQ_23 = YPmet(FUNCODEREF(fun_binding_freeQ_23),YPPsym((P)"binding-free?"),T106,ENVNUL);
  T110 = BOUNDP(YastYbinding_freeQ);
  if (T110 != YPfalse) {
    T109 = CHKREF(YastYbinding_freeQ);
  } else {
    T109 = YPfalse;
  }
  T108 = fun_binding_freeQ_23;
  T107 = CALL2(CHKREF(YPdefine_method),T109,T108);
  YastYbinding_freeQ = T107;
  regsym(&YastYbinding_freeQ,"ast","binding-free?");
  T111 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLlogG),YPpair(CHKREF(YastYLmodule_bindingG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_binding_freeQ_setter_24 = YPmet(FUNCODEREF(fun_binding_freeQ_setter_24),YPPsym((P)"binding-free?-setter"),T111,ENVNUL);
  T115 = BOUNDP(YastYbinding_freeQ_setter);
  if (T115 != YPfalse) {
    T114 = CHKREF(YastYbinding_freeQ_setter);
  } else {
    T114 = YPfalse;
  }
  T113 = fun_binding_freeQ_setter_24;
  T112 = CALL2(CHKREF(YPdefine_method),T114,T113);
  YastYbinding_freeQ_setter = T112;
  regsym(&YastYbinding_freeQ_setter,"ast","binding-free?-setter");
  T116 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T116,ENVNUL);
  T117 = fun_25;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmodule_bindingG),CHKREF(YastYbinding_freeQ),CHKREF(YastYbinding_freeQ_setter),CHKREF(YLlogG),T117);
  T118 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLmodule_bindingG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_binding_info_26 = YPmet(FUNCODEREF(fun_binding_info_26),YPPsym((P)"binding-info"),T118,ENVNUL);
  T122 = BOUNDP(YastYbinding_info);
  if (T122 != YPfalse) {
    T121 = CHKREF(YastYbinding_info);
  } else {
    T121 = YPfalse;
  }
  T120 = fun_binding_info_26;
  T119 = CALL2(CHKREF(YPdefine_method),T121,T120);
  YastYbinding_info = T119;
  regsym(&YastYbinding_info,"ast","binding-info");
  T123 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLmodule_bindingG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_binding_info_setter_27 = YPmet(FUNCODEREF(fun_binding_info_setter_27),YPPsym((P)"binding-info-setter"),T123,ENVNUL);
  T127 = BOUNDP(YastYbinding_info_setter);
  if (T127 != YPfalse) {
    T126 = CHKREF(YastYbinding_info_setter);
  } else {
    T126 = YPfalse;
  }
  T125 = fun_binding_info_setter_27;
  T124 = CALL2(CHKREF(YPdefine_method),T126,T125);
  YastYbinding_info_setter = T124;
  regsym(&YastYbinding_info_setter,"ast","binding-info-setter");
  T128 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T128,ENVNUL);
  T129 = fun_28;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmodule_bindingG),CHKREF(YastYbinding_info),CHKREF(YastYbinding_info_setter),CHKREF(YLanyG),T129);
  YastYbinding_global_box = CHKREF(YastYbinding_info);
  regsym(&YastYbinding_global_box,"ast","binding-global-box");
  YastYbinding_global_box_setter = CHKREF(YastYbinding_info_setter);
  regsym(&YastYbinding_global_box_setter,"ast","binding-global-box-setter");
  YastYbinding_locative = CHKREF(YastYbinding_info);
  regsym(&YastYbinding_locative,"ast","binding-locative");
  YastYbinding_locative_setter = CHKREF(YastYbinding_info_setter);
  regsym(&YastYbinding_locative_setter,"ast","binding-locative-setter");
  YastYbinding_handler = CHKREF(YastYbinding_info);
  regsym(&YastYbinding_handler,"ast","binding-handler");
  YastYbinding_handler_setter = CHKREF(YastYbinding_info_setter);
  regsym(&YastYbinding_handler_setter,"ast","binding-handler-setter");
  T131 = (P)YPpair(CHKREF(YastYLbindingG),Ynil);
  T130 = CALL3(CHKREF(YPisa),T131,Ynil,Ynil);
  YastYLlocal_bindingG = T130;
  regsym(&YastYLlocal_bindingG,"ast","<local-binding>");
  T132 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLlocal_bindingG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_binding_value_29 = YPmet(FUNCODEREF(fun_binding_value_29),YPPsym((P)"binding-value"),T132,ENVNUL);
  T136 = BOUNDP(YastYbinding_value);
  if (T136 != YPfalse) {
    T135 = CHKREF(YastYbinding_value);
  } else {
    T135 = YPfalse;
  }
  T134 = fun_binding_value_29;
  T133 = CALL2(CHKREF(YPdefine_method),T135,T134);
  YastYbinding_value = T133;
  regsym(&YastYbinding_value,"ast","binding-value");
  T137 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLlocal_bindingG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_binding_value_setter_30 = YPmet(FUNCODEREF(fun_binding_value_setter_30),YPPsym((P)"binding-value-setter"),T137,ENVNUL);
  T141 = BOUNDP(YastYbinding_value_setter);
  if (T141 != YPfalse) {
    T140 = CHKREF(YastYbinding_value_setter);
  } else {
    T140 = YPfalse;
  }
  T139 = fun_binding_value_setter_30;
  T138 = CALL2(CHKREF(YPdefine_method),T140,T139);
  YastYbinding_value_setter = T138;
  regsym(&YastYbinding_value_setter,"ast","binding-value-setter");
  T142 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T142,ENVNUL);
  T143 = fun_31;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLlocal_bindingG),CHKREF(YastYbinding_value),CHKREF(YastYbinding_value_setter),CHKREF(YLanyG),T143);
  T144 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLlocal_bindingG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_binding_mutableQ_32 = YPmet(FUNCODEREF(fun_binding_mutableQ_32),YPPsym((P)"binding-mutable?"),T144,ENVNUL);
  T148 = BOUNDP(YastYbinding_mutableQ);
  if (T148 != YPfalse) {
    T147 = CHKREF(YastYbinding_mutableQ);
  } else {
    T147 = YPfalse;
  }
  T146 = fun_binding_mutableQ_32;
  T145 = CALL2(CHKREF(YPdefine_method),T147,T146);
  YastYbinding_mutableQ = T145;
  regsym(&YastYbinding_mutableQ,"ast","binding-mutable?");
  T149 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLlocal_bindingG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_binding_mutableQ_setter_33 = YPmet(FUNCODEREF(fun_binding_mutableQ_setter_33),YPPsym((P)"binding-mutable?-setter"),T149,ENVNUL);
  T153 = BOUNDP(YastYbinding_mutableQ_setter);
  if (T153 != YPfalse) {
    T152 = CHKREF(YastYbinding_mutableQ_setter);
  } else {
    T152 = YPfalse;
  }
  T151 = fun_binding_mutableQ_setter_33;
  T150 = CALL2(CHKREF(YPdefine_method),T152,T151);
  YastYbinding_mutableQ_setter = T150;
  regsym(&YastYbinding_mutableQ_setter,"ast","binding-mutable?-setter");
  T154 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T154,ENVNUL);
  T155 = fun_34;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLlocal_bindingG),CHKREF(YastYbinding_mutableQ),CHKREF(YastYbinding_mutableQ_setter),CHKREF(YLanyG),T155);
  T156 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLlocal_bindingG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_binding_dynamic_extentQ_35 = YPmet(FUNCODEREF(fun_binding_dynamic_extentQ_35),YPPsym((P)"binding-dynamic-extent?"),T156,ENVNUL);
  T160 = BOUNDP(YastYbinding_dynamic_extentQ);
  if (T160 != YPfalse) {
    T159 = CHKREF(YastYbinding_dynamic_extentQ);
  } else {
    T159 = YPfalse;
  }
  T158 = fun_binding_dynamic_extentQ_35;
  T157 = CALL2(CHKREF(YPdefine_method),T159,T158);
  YastYbinding_dynamic_extentQ = T157;
  regsym(&YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
  T161 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLlocal_bindingG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_binding_dynamic_extentQ_setter_36 = YPmet(FUNCODEREF(fun_binding_dynamic_extentQ_setter_36),YPPsym((P)"binding-dynamic-extent?-setter"),T161,ENVNUL);
  T165 = BOUNDP(YastYbinding_dynamic_extentQ_setter);
  if (T165 != YPfalse) {
    T164 = CHKREF(YastYbinding_dynamic_extentQ_setter);
  } else {
    T164 = YPfalse;
  }
  T163 = fun_binding_dynamic_extentQ_setter_36;
  T162 = CALL2(CHKREF(YPdefine_method),T164,T163);
  YastYbinding_dynamic_extentQ_setter = T162;
  regsym(&YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
  T166 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T166,ENVNUL);
  T167 = fun_37;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLlocal_bindingG),CHKREF(YastYbinding_dynamic_extentQ),CHKREF(YastYbinding_dynamic_extentQ_setter),CHKREF(YLanyG),T167);
  T168 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLlocal_bindingG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_binding_dottedQ_38 = YPmet(FUNCODEREF(fun_binding_dottedQ_38),YPPsym((P)"binding-dotted?"),T168,ENVNUL);
  T172 = BOUNDP(YastYbinding_dottedQ);
  if (T172 != YPfalse) {
    T171 = CHKREF(YastYbinding_dottedQ);
  } else {
    T171 = YPfalse;
  }
  T170 = fun_binding_dottedQ_38;
  T169 = CALL2(CHKREF(YPdefine_method),T171,T170);
  YastYbinding_dottedQ = T169;
  regsym(&YastYbinding_dottedQ,"ast","binding-dotted?");
  T173 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLlocal_bindingG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_binding_dottedQ_setter_39 = YPmet(FUNCODEREF(fun_binding_dottedQ_setter_39),YPPsym((P)"binding-dotted?-setter"),T173,ENVNUL);
  T177 = BOUNDP(YastYbinding_dottedQ_setter);
  if (T177 != YPfalse) {
    T176 = CHKREF(YastYbinding_dottedQ_setter);
  } else {
    T176 = YPfalse;
  }
  T175 = fun_binding_dottedQ_setter_39;
  T174 = CALL2(CHKREF(YPdefine_method),T176,T175);
  YastYbinding_dottedQ_setter = T174;
  regsym(&YastYbinding_dottedQ_setter,"ast","binding-dotted?-setter");
  T178 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T178,ENVNUL);
  T179 = fun_40;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLlocal_bindingG),CHKREF(YastYbinding_dottedQ),CHKREF(YastYbinding_dottedQ_setter),CHKREF(YLanyG),T179);
  T183 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T182 = CALL3(CHKREF(YPisa),T183,Ynil,Ynil);
  T181 = YastYLcompile_timeG = T182;
  regsym(&YastYLcompile_timeG,"ast","<compile-time>");
  T180 = T181;
  return T180;
}

P YastY___main_1___() {
  P T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200;
  P T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184;
  P T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168;
  P T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152;
  P T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136;
  P T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120;
  P T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104;
  P T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88;
  P T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72;
  P T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56;
  P T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLcompile_timeG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_compile_time_program_41 = YPmet(FUNCODEREF(fun_compile_time_program_41),YPPsym((P)"compile-time-program"),T0,ENVNUL);
  T4 = BOUNDP(YastYcompile_time_program);
  if (T4 != YPfalse) {
    T3 = CHKREF(YastYcompile_time_program);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_compile_time_program_41;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YastYcompile_time_program = T1;
  regsym(&YastYcompile_time_program,"ast","compile-time-program");
  T5 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLcompile_timeG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_compile_time_program_setter_42 = YPmet(FUNCODEREF(fun_compile_time_program_setter_42),YPPsym((P)"compile-time-program-setter"),T5,ENVNUL);
  T9 = BOUNDP(YastYcompile_time_program_setter);
  if (T9 != YPfalse) {
    T8 = CHKREF(YastYcompile_time_program_setter);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_compile_time_program_setter_42;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  YastYcompile_time_program_setter = T6;
  regsym(&YastYcompile_time_program_setter,"ast","compile-time-program-setter");
  T10 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T10,ENVNUL);
  T11 = fun_43;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLcompile_timeG),CHKREF(YastYcompile_time_program),CHKREF(YastYcompile_time_program_setter),CHKREF(YLanyG),T11);
  T13 = (P)YPpair(CHKREF(YastYLpassive_programG),Ynil);
  T12 = CALL3(CHKREF(YPisa),T13,Ynil,Ynil);
  YastYLreferenceG = T12;
  regsym(&YastYLreferenceG,"ast","<reference>");
  T15 = (P)YPpair(CHKREF(YastYLreferenceG),Ynil);
  T14 = CALL3(CHKREF(YPisa),T15,Ynil,Ynil);
  YastYLreal_referenceG = T14;
  regsym(&YastYLreal_referenceG,"ast","<real-reference>");
  T16 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLreal_referenceG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_reference_binding_44 = YPmet(FUNCODEREF(fun_reference_binding_44),YPPsym((P)"reference-binding"),T16,ENVNUL);
  T20 = BOUNDP(YastYreference_binding);
  if (T20 != YPfalse) {
    T19 = CHKREF(YastYreference_binding);
  } else {
    T19 = YPfalse;
  }
  T18 = fun_reference_binding_44;
  T17 = CALL2(CHKREF(YPdefine_method),T19,T18);
  YastYreference_binding = T17;
  regsym(&YastYreference_binding,"ast","reference-binding");
  T21 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLreal_referenceG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_reference_binding_setter_45 = YPmet(FUNCODEREF(fun_reference_binding_setter_45),YPPsym((P)"reference-binding-setter"),T21,ENVNUL);
  T25 = BOUNDP(YastYreference_binding_setter);
  if (T25 != YPfalse) {
    T24 = CHKREF(YastYreference_binding_setter);
  } else {
    T24 = YPfalse;
  }
  T23 = fun_reference_binding_setter_45;
  T22 = CALL2(CHKREF(YPdefine_method),T24,T23);
  YastYreference_binding_setter = T22;
  regsym(&YastYreference_binding_setter,"ast","reference-binding-setter");
  T26 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T26,ENVNUL);
  T27 = fun_46;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLreal_referenceG),CHKREF(YastYreference_binding),CHKREF(YastYreference_binding_setter),CHKREF(YLanyG),T27);
  T29 = (P)YPpair(CHKREF(YastYLreal_referenceG),Ynil);
  T28 = CALL3(CHKREF(YPisa),T29,Ynil,Ynil);
  YastYLlocal_referenceG = T28;
  regsym(&YastYLlocal_referenceG,"ast","<local-reference>");
  T30 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLlocal_referenceG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_reference_called_functionQ_47 = YPmet(FUNCODEREF(fun_reference_called_functionQ_47),YPPsym((P)"reference-called-function?"),T30,ENVNUL);
  T34 = BOUNDP(YastYreference_called_functionQ);
  if (T34 != YPfalse) {
    T33 = CHKREF(YastYreference_called_functionQ);
  } else {
    T33 = YPfalse;
  }
  T32 = fun_reference_called_functionQ_47;
  T31 = CALL2(CHKREF(YPdefine_method),T33,T32);
  YastYreference_called_functionQ = T31;
  regsym(&YastYreference_called_functionQ,"ast","reference-called-function?");
  T35 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLlocal_referenceG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_reference_called_functionQ_setter_48 = YPmet(FUNCODEREF(fun_reference_called_functionQ_setter_48),YPPsym((P)"reference-called-function?-setter"),T35,ENVNUL);
  T39 = BOUNDP(YastYreference_called_functionQ_setter);
  if (T39 != YPfalse) {
    T38 = CHKREF(YastYreference_called_functionQ_setter);
  } else {
    T38 = YPfalse;
  }
  T37 = fun_reference_called_functionQ_setter_48;
  T36 = CALL2(CHKREF(YPdefine_method),T38,T37);
  YastYreference_called_functionQ_setter = T36;
  regsym(&YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
  T40 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T40,ENVNUL);
  T41 = fun_49;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLlocal_referenceG),CHKREF(YastYreference_called_functionQ),CHKREF(YastYreference_called_functionQ_setter),CHKREF(YLanyG),T41);
  T42 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLlocal_referenceG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_reference_frame_number_50 = YPmet(FUNCODEREF(fun_reference_frame_number_50),YPPsym((P)"reference-frame-number"),T42,ENVNUL);
  T46 = BOUNDP(YastYreference_frame_number);
  if (T46 != YPfalse) {
    T45 = CHKREF(YastYreference_frame_number);
  } else {
    T45 = YPfalse;
  }
  T44 = fun_reference_frame_number_50;
  T43 = CALL2(CHKREF(YPdefine_method),T45,T44);
  YastYreference_frame_number = T43;
  regsym(&YastYreference_frame_number,"ast","reference-frame-number");
  T47 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLintG),YPpair(CHKREF(YastYLlocal_referenceG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_reference_frame_number_setter_51 = YPmet(FUNCODEREF(fun_reference_frame_number_setter_51),YPPsym((P)"reference-frame-number-setter"),T47,ENVNUL);
  T51 = BOUNDP(YastYreference_frame_number_setter);
  if (T51 != YPfalse) {
    T50 = CHKREF(YastYreference_frame_number_setter);
  } else {
    T50 = YPfalse;
  }
  T49 = fun_reference_frame_number_setter_51;
  T48 = CALL2(CHKREF(YPdefine_method),T50,T49);
  YastYreference_frame_number_setter = T48;
  regsym(&YastYreference_frame_number_setter,"ast","reference-frame-number-setter");
  T52 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T52,ENVNUL);
  T53 = fun_52;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLlocal_referenceG),CHKREF(YastYreference_frame_number),CHKREF(YastYreference_frame_number_setter),CHKREF(YLintG),T53);
  T54 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLlocal_referenceG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_reference_frame_offset_53 = YPmet(FUNCODEREF(fun_reference_frame_offset_53),YPPsym((P)"reference-frame-offset"),T54,ENVNUL);
  T58 = BOUNDP(YastYreference_frame_offset);
  if (T58 != YPfalse) {
    T57 = CHKREF(YastYreference_frame_offset);
  } else {
    T57 = YPfalse;
  }
  T56 = fun_reference_frame_offset_53;
  T55 = CALL2(CHKREF(YPdefine_method),T57,T56);
  YastYreference_frame_offset = T55;
  regsym(&YastYreference_frame_offset,"ast","reference-frame-offset");
  T59 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLintG),YPpair(CHKREF(YastYLlocal_referenceG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_reference_frame_offset_setter_54 = YPmet(FUNCODEREF(fun_reference_frame_offset_setter_54),YPPsym((P)"reference-frame-offset-setter"),T59,ENVNUL);
  T63 = BOUNDP(YastYreference_frame_offset_setter);
  if (T63 != YPfalse) {
    T62 = CHKREF(YastYreference_frame_offset_setter);
  } else {
    T62 = YPfalse;
  }
  T61 = fun_reference_frame_offset_setter_54;
  T60 = CALL2(CHKREF(YPdefine_method),T62,T61);
  YastYreference_frame_offset_setter = T60;
  regsym(&YastYreference_frame_offset_setter,"ast","reference-frame-offset-setter");
  T64 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T64,ENVNUL);
  T65 = fun_55;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLlocal_referenceG),CHKREF(YastYreference_frame_offset),CHKREF(YastYreference_frame_offset_setter),CHKREF(YLintG),T65);
  T67 = (P)YPpair(CHKREF(YastYLreal_referenceG),Ynil);
  T66 = CALL3(CHKREF(YPisa),T67,Ynil,Ynil);
  YastYLglobal_referenceG = T66;
  regsym(&YastYLglobal_referenceG,"ast","<global-reference>");
  T69 = (P)YPpair(CHKREF(YastYLreal_referenceG),Ynil);
  T68 = CALL3(CHKREF(YPisa),T69,Ynil,Ynil);
  YastYLruntime_referenceG = T68;
  regsym(&YastYLruntime_referenceG,"ast","<runtime-reference>");
  T71 = (P)YPpair(CHKREF(YastYLreal_referenceG),Ynil);
  T70 = CALL3(CHKREF(YPisa),T71,Ynil,Ynil);
  YastYLpredefined_referenceG = T70;
  regsym(&YastYLpredefined_referenceG,"ast","<predefined-reference>");
  T73 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T72 = CALL3(CHKREF(YPisa),T73,Ynil,Ynil);
  YastYLboundQG = T72;
  regsym(&YastYLboundQG,"ast","<bound?>");
  T74 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLboundQG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_boundQ_reference_56 = YPmet(FUNCODEREF(fun_boundQ_reference_56),YPPsym((P)"bound?-reference"),T74,ENVNUL);
  T78 = BOUNDP(YastYboundQ_reference);
  if (T78 != YPfalse) {
    T77 = CHKREF(YastYboundQ_reference);
  } else {
    T77 = YPfalse;
  }
  T76 = fun_boundQ_reference_56;
  T75 = CALL2(CHKREF(YPdefine_method),T77,T76);
  YastYboundQ_reference = T75;
  regsym(&YastYboundQ_reference,"ast","bound?-reference");
  T79 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLboundQG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_boundQ_reference_setter_57 = YPmet(FUNCODEREF(fun_boundQ_reference_setter_57),YPPsym((P)"bound?-reference-setter"),T79,ENVNUL);
  T83 = BOUNDP(YastYboundQ_reference_setter);
  if (T83 != YPfalse) {
    T82 = CHKREF(YastYboundQ_reference_setter);
  } else {
    T82 = YPfalse;
  }
  T81 = fun_boundQ_reference_setter_57;
  T80 = CALL2(CHKREF(YPdefine_method),T82,T81);
  YastYboundQ_reference_setter = T80;
  regsym(&YastYboundQ_reference_setter,"ast","bound?-reference-setter");
  T84 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T84,ENVNUL);
  T85 = fun_58;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLboundQG),CHKREF(YastYboundQ_reference),CHKREF(YastYboundQ_reference_setter),CHKREF(YLanyG),T85);
  T87 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T86 = CALL3(CHKREF(YPisa),T87,Ynil,Ynil);
  YastYLassignmentG = T86;
  regsym(&YastYLassignmentG,"ast","<assignment>");
  T88 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLassignmentG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_assignment_form_59 = YPmet(FUNCODEREF(fun_assignment_form_59),YPPsym((P)"assignment-form"),T88,ENVNUL);
  T92 = BOUNDP(YastYassignment_form);
  if (T92 != YPfalse) {
    T91 = CHKREF(YastYassignment_form);
  } else {
    T91 = YPfalse;
  }
  T90 = fun_assignment_form_59;
  T89 = CALL2(CHKREF(YPdefine_method),T91,T90);
  YastYassignment_form = T89;
  regsym(&YastYassignment_form,"ast","assignment-form");
  T93 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLassignmentG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_assignment_form_setter_60 = YPmet(FUNCODEREF(fun_assignment_form_setter_60),YPPsym((P)"assignment-form-setter"),T93,ENVNUL);
  T97 = BOUNDP(YastYassignment_form_setter);
  if (T97 != YPfalse) {
    T96 = CHKREF(YastYassignment_form_setter);
  } else {
    T96 = YPfalse;
  }
  T95 = fun_assignment_form_setter_60;
  T94 = CALL2(CHKREF(YPdefine_method),T96,T95);
  YastYassignment_form_setter = T94;
  regsym(&YastYassignment_form_setter,"ast","assignment-form-setter");
  T98 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T98,ENVNUL);
  T99 = fun_61;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLassignmentG),CHKREF(YastYassignment_form),CHKREF(YastYassignment_form_setter),CHKREF(YLanyG),T99);
  T101 = (P)YPpair(CHKREF(YastYLassignmentG),Ynil);
  T100 = CALL3(CHKREF(YPisa),T101,Ynil,Ynil);
  YastYLlocal_assignmentG = T100;
  regsym(&YastYLlocal_assignmentG,"ast","<local-assignment>");
  T102 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLlocal_assignmentG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_assignment_reference_62 = YPmet(FUNCODEREF(fun_assignment_reference_62),YPPsym((P)"assignment-reference"),T102,ENVNUL);
  T106 = BOUNDP(YastYassignment_reference);
  if (T106 != YPfalse) {
    T105 = CHKREF(YastYassignment_reference);
  } else {
    T105 = YPfalse;
  }
  T104 = fun_assignment_reference_62;
  T103 = CALL2(CHKREF(YPdefine_method),T105,T104);
  YastYassignment_reference = T103;
  regsym(&YastYassignment_reference,"ast","assignment-reference");
  T107 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLlocal_assignmentG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_assignment_reference_setter_63 = YPmet(FUNCODEREF(fun_assignment_reference_setter_63),YPPsym((P)"assignment-reference-setter"),T107,ENVNUL);
  T111 = BOUNDP(YastYassignment_reference_setter);
  if (T111 != YPfalse) {
    T110 = CHKREF(YastYassignment_reference_setter);
  } else {
    T110 = YPfalse;
  }
  T109 = fun_assignment_reference_setter_63;
  T108 = CALL2(CHKREF(YPdefine_method),T110,T109);
  YastYassignment_reference_setter = T108;
  regsym(&YastYassignment_reference_setter,"ast","assignment-reference-setter");
  T112 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T112,ENVNUL);
  T113 = fun_64;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLlocal_assignmentG),CHKREF(YastYassignment_reference),CHKREF(YastYassignment_reference_setter),CHKREF(YLanyG),T113);
  T115 = (P)YPpair(CHKREF(YastYLassignmentG),Ynil);
  T114 = CALL3(CHKREF(YPisa),T115,Ynil,Ynil);
  YastYLglobal_assignmentG = T114;
  regsym(&YastYLglobal_assignmentG,"ast","<global-assignment>");
  T116 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLglobal_assignmentG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_assignment_binding_65 = YPmet(FUNCODEREF(fun_assignment_binding_65),YPPsym((P)"assignment-binding"),T116,ENVNUL);
  T120 = BOUNDP(YastYassignment_binding);
  if (T120 != YPfalse) {
    T119 = CHKREF(YastYassignment_binding);
  } else {
    T119 = YPfalse;
  }
  T118 = fun_assignment_binding_65;
  T117 = CALL2(CHKREF(YPdefine_method),T119,T118);
  YastYassignment_binding = T117;
  regsym(&YastYassignment_binding,"ast","assignment-binding");
  T121 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLglobal_assignmentG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_assignment_binding_setter_66 = YPmet(FUNCODEREF(fun_assignment_binding_setter_66),YPPsym((P)"assignment-binding-setter"),T121,ENVNUL);
  T125 = BOUNDP(YastYassignment_binding_setter);
  if (T125 != YPfalse) {
    T124 = CHKREF(YastYassignment_binding_setter);
  } else {
    T124 = YPfalse;
  }
  T123 = fun_assignment_binding_setter_66;
  T122 = CALL2(CHKREF(YPdefine_method),T124,T123);
  YastYassignment_binding_setter = T122;
  regsym(&YastYassignment_binding_setter,"ast","assignment-binding-setter");
  T126 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T126,ENVNUL);
  T127 = fun_67;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLglobal_assignmentG),CHKREF(YastYassignment_binding),CHKREF(YastYassignment_binding_setter),CHKREF(YLanyG),T127);
  T129 = (P)YPpair(CHKREF(YastYLglobal_assignmentG),Ynil);
  T128 = CALL3(CHKREF(YPisa),T129,Ynil,Ynil);
  YastYLruntime_assignmentG = T128;
  regsym(&YastYLruntime_assignmentG,"ast","<runtime-assignment>");
  T131 = (P)YPpair(CHKREF(YastYLglobal_assignmentG),Ynil);
  T130 = CALL3(CHKREF(YPisa),T131,Ynil,Ynil);
  YastYLdefinitionG = T130;
  regsym(&YastYLdefinitionG,"ast","<definition>");
  T133 = (P)YPpair(CHKREF(YastYLdefinitionG),Ynil);
  T132 = CALL3(CHKREF(YPisa),T133,Ynil,Ynil);
  YastYLvariable_definitionG = T132;
  regsym(&YastYLvariable_definitionG,"ast","<variable-definition>");
  T135 = (P)YPpair(CHKREF(YastYLdefinitionG),Ynil);
  T134 = CALL3(CHKREF(YPisa),T135,Ynil,Ynil);
  YastYLast_generic_definitionG = T134;
  regsym(&YastYLast_generic_definitionG,"ast","<ast-generic-definition>");
  T137 = (P)YPpair(CHKREF(YastYLdefinitionG),Ynil);
  T136 = CALL3(CHKREF(YPisa),T137,Ynil,Ynil);
  YastYLast_function_definitionG = T136;
  regsym(&YastYLast_function_definitionG,"ast","<ast-function-definition>");
  T139 = (P)YPpair(CHKREF(YastYLdefinitionG),Ynil);
  T138 = CALL3(CHKREF(YPisa),T139,Ynil,Ynil);
  YastYLast_method_definitionG = T138;
  regsym(&YastYLast_method_definitionG,"ast","<ast-method-definition>");
  T141 = (P)YPpair(CHKREF(YastYLdefinitionG),Ynil);
  T140 = CALL3(CHKREF(YPisa),T141,Ynil,Ynil);
  YastYLast_primitive_definitionG = T140;
  regsym(&YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
  T143 = (P)YPpair(CHKREF(YastYLdefinitionG),Ynil);
  T142 = CALL3(CHKREF(YPisa),T143,Ynil,Ynil);
  YastYLast_macro_definitionG = T142;
  regsym(&YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
  T145 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T144 = CALL3(CHKREF(YPisa),T145,Ynil,Ynil);
  YastYLast_signatureG = T144;
  regsym(&YastYLast_signatureG,"ast","<ast-signature>");
  T146 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLast_signatureG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_signature_names_68 = YPmet(FUNCODEREF(fun_signature_names_68),YPPsym((P)"signature-names"),T146,ENVNUL);
  T150 = BOUNDP(YastYsignature_names);
  if (T150 != YPfalse) {
    T149 = CHKREF(YastYsignature_names);
  } else {
    T149 = YPfalse;
  }
  T148 = fun_signature_names_68;
  T147 = CALL2(CHKREF(YPdefine_method),T149,T148);
  YastYsignature_names = T147;
  regsym(&YastYsignature_names,"ast","signature-names");
  T151 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLast_signatureG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_signature_names_setter_69 = YPmet(FUNCODEREF(fun_signature_names_setter_69),YPPsym((P)"signature-names-setter"),T151,ENVNUL);
  T155 = BOUNDP(YastYsignature_names_setter);
  if (T155 != YPfalse) {
    T154 = CHKREF(YastYsignature_names_setter);
  } else {
    T154 = YPfalse;
  }
  T153 = fun_signature_names_setter_69;
  T152 = CALL2(CHKREF(YPdefine_method),T154,T153);
  YastYsignature_names_setter = T152;
  regsym(&YastYsignature_names_setter,"ast","signature-names-setter");
  T156 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T156,ENVNUL);
  T157 = fun_70;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLast_signatureG),CHKREF(YastYsignature_names),CHKREF(YastYsignature_names_setter),CHKREF(YLanyG),T157);
  T158 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLast_signatureG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_signature_specs_71 = YPmet(FUNCODEREF(fun_signature_specs_71),YPPsym((P)"signature-specs"),T158,ENVNUL);
  T162 = BOUNDP(YastYsignature_specs);
  if (T162 != YPfalse) {
    T161 = CHKREF(YastYsignature_specs);
  } else {
    T161 = YPfalse;
  }
  T160 = fun_signature_specs_71;
  T159 = CALL2(CHKREF(YPdefine_method),T161,T160);
  YastYsignature_specs = T159;
  regsym(&YastYsignature_specs,"ast","signature-specs");
  T163 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLast_signatureG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_signature_specs_setter_72 = YPmet(FUNCODEREF(fun_signature_specs_setter_72),YPPsym((P)"signature-specs-setter"),T163,ENVNUL);
  T167 = BOUNDP(YastYsignature_specs_setter);
  if (T167 != YPfalse) {
    T166 = CHKREF(YastYsignature_specs_setter);
  } else {
    T166 = YPfalse;
  }
  T165 = fun_signature_specs_setter_72;
  T164 = CALL2(CHKREF(YPdefine_method),T166,T165);
  YastYsignature_specs_setter = T164;
  regsym(&YastYsignature_specs_setter,"ast","signature-specs-setter");
  T168 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T168,ENVNUL);
  T169 = fun_73;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLast_signatureG),CHKREF(YastYsignature_specs),CHKREF(YastYsignature_specs_setter),CHKREF(YLanyG),T169);
  T170 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLast_signatureG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_signature_naryQ_74 = YPmet(FUNCODEREF(fun_signature_naryQ_74),YPPsym((P)"signature-nary?"),T170,ENVNUL);
  T174 = BOUNDP(YastYsignature_naryQ);
  if (T174 != YPfalse) {
    T173 = CHKREF(YastYsignature_naryQ);
  } else {
    T173 = YPfalse;
  }
  T172 = fun_signature_naryQ_74;
  T171 = CALL2(CHKREF(YPdefine_method),T173,T172);
  YastYsignature_naryQ = T171;
  regsym(&YastYsignature_naryQ,"ast","signature-nary?");
  T175 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLast_signatureG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_signature_naryQ_setter_75 = YPmet(FUNCODEREF(fun_signature_naryQ_setter_75),YPPsym((P)"signature-nary?-setter"),T175,ENVNUL);
  T179 = BOUNDP(YastYsignature_naryQ_setter);
  if (T179 != YPfalse) {
    T178 = CHKREF(YastYsignature_naryQ_setter);
  } else {
    T178 = YPfalse;
  }
  T177 = fun_signature_naryQ_setter_75;
  T176 = CALL2(CHKREF(YPdefine_method),T178,T177);
  YastYsignature_naryQ_setter = T176;
  regsym(&YastYsignature_naryQ_setter,"ast","signature-nary?-setter");
  T180 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T180,ENVNUL);
  T181 = fun_76;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLast_signatureG),CHKREF(YastYsignature_naryQ),CHKREF(YastYsignature_naryQ_setter),CHKREF(YLanyG),T181);
  T182 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLast_signatureG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_signature_value_77 = YPmet(FUNCODEREF(fun_signature_value_77),YPPsym((P)"signature-value"),T182,ENVNUL);
  T186 = BOUNDP(YastYsignature_value);
  if (T186 != YPfalse) {
    T185 = CHKREF(YastYsignature_value);
  } else {
    T185 = YPfalse;
  }
  T184 = fun_signature_value_77;
  T183 = CALL2(CHKREF(YPdefine_method),T185,T184);
  YastYsignature_value = T183;
  regsym(&YastYsignature_value,"ast","signature-value");
  T187 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLast_signatureG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_signature_value_setter_78 = YPmet(FUNCODEREF(fun_signature_value_setter_78),YPPsym((P)"signature-value-setter"),T187,ENVNUL);
  T191 = BOUNDP(YastYsignature_value_setter);
  if (T191 != YPfalse) {
    T190 = CHKREF(YastYsignature_value_setter);
  } else {
    T190 = YPfalse;
  }
  T189 = fun_signature_value_setter_78;
  T188 = CALL2(CHKREF(YPdefine_method),T190,T189);
  YastYsignature_value_setter = T188;
  regsym(&YastYsignature_value_setter,"ast","signature-value-setter");
  T192 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T192,ENVNUL);
  T193 = fun_79;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLast_signatureG),CHKREF(YastYsignature_value),CHKREF(YastYsignature_value_setter),CHKREF(YLanyG),T193);
  YastYsignature_bindings = CHKREF(YastYsignature_names);
  regsym(&YastYsignature_bindings,"ast","signature-bindings");
  T195 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T194 = CALL3(CHKREF(YPisa),T195,Ynil,Ynil);
  YastYLast_functionG = T194;
  regsym(&YastYLast_functionG,"ast","<ast-function>");
  T196 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLast_functionG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_function_name_80 = YPmet(FUNCODEREF(fun_function_name_80),YPPsym((P)"function-name"),T196,ENVNUL);
  T200 = BOUNDP(YastYfunction_name);
  if (T200 != YPfalse) {
    T199 = CHKREF(YastYfunction_name);
  } else {
    T199 = YPfalse;
  }
  T198 = fun_function_name_80;
  T197 = CALL2(CHKREF(YPdefine_method),T199,T198);
  YastYfunction_name = T197;
  regsym(&YastYfunction_name,"ast","function-name");
  T201 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLast_functionG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_function_name_setter_81 = YPmet(FUNCODEREF(fun_function_name_setter_81),YPPsym((P)"function-name-setter"),T201,ENVNUL);
  T205 = BOUNDP(YastYfunction_name_setter);
  if (T205 != YPfalse) {
    T204 = CHKREF(YastYfunction_name_setter);
  } else {
    T204 = YPfalse;
  }
  T203 = fun_function_name_setter_81;
  T202 = CALL2(CHKREF(YPdefine_method),T204,T203);
  YastYfunction_name_setter = T202;
  regsym(&YastYfunction_name_setter,"ast","function-name-setter");
  T206 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T206,ENVNUL);
  T207 = fun_82;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLast_functionG),CHKREF(YastYfunction_name),CHKREF(YastYfunction_name_setter),CHKREF(YLanyG),T207);
  T210 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLast_functionG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  T209 = fun_function_signature_83 = YPmet(FUNCODEREF(fun_function_signature_83),YPPsym((P)"function-signature"),T210,ENVNUL);
  T215 = BOUNDP(YastYfunction_signature);
  if (T215 != YPfalse) {
    T214 = CHKREF(YastYfunction_signature);
  } else {
    T214 = YPfalse;
  }
  T213 = fun_function_signature_83;
  T212 = CALL2(CHKREF(YPdefine_method),T214,T213);
  T211 = YastYfunction_signature = T212;
  regsym(&YastYfunction_signature,"ast","function-signature");
  T208 = T211;
  return T208;
}

P YastY___main_2___() {
  P T235,T234,T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220;
  P T219,T218,T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204;
  P T203,T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188;
  P T187,T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172;
  P T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156;
  P T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140;
  P T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124;
  P T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108;
  P T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92;
  P T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76;
  P T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60;
  P T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLast_functionG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_function_signature_setter_84 = YPmet(FUNCODEREF(fun_function_signature_setter_84),YPPsym((P)"function-signature-setter"),T0,ENVNUL);
  T4 = BOUNDP(YastYfunction_signature_setter);
  if (T4 != YPfalse) {
    T3 = CHKREF(YastYfunction_signature_setter);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_function_signature_setter_84;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YastYfunction_signature_setter = T1;
  regsym(&YastYfunction_signature_setter,"ast","function-signature-setter");
  T5 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T5,ENVNUL);
  T6 = fun_85;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLast_functionG),CHKREF(YastYfunction_signature),CHKREF(YastYfunction_signature_setter),CHKREF(YLanyG),T6);
  T7 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YastYLast_functionG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YastYfunction_bindings = YPmet(FUNCODEREF(YastYfunction_bindings),YPPsym((P)"function-bindings"),T7,ENVNUL);
  T8 = YastYfunction_bindings;
  YastYfunction_bindings = T8;
  regsym(&YastYfunction_bindings,"ast","function-bindings");
  T9 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YastYLast_functionG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YastYfunction_specs = YPmet(FUNCODEREF(YastYfunction_specs),YPPsym((P)"function-specs"),T9,ENVNUL);
  T10 = YastYfunction_specs;
  YastYfunction_specs = T10;
  regsym(&YastYfunction_specs,"ast","function-specs");
  T11 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YastYLast_functionG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YastYfunction_naryQ = YPmet(FUNCODEREF(YastYfunction_naryQ),YPPsym((P)"function-nary?"),T11,ENVNUL);
  T12 = YastYfunction_naryQ;
  YastYfunction_naryQ = T12;
  regsym(&YastYfunction_naryQ,"ast","function-nary?");
  T13 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YastYLast_functionG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YastYfunction_value = YPmet(FUNCODEREF(YastYfunction_value),YPPsym((P)"function-value"),T13,ENVNUL);
  T14 = YastYfunction_value;
  YastYfunction_value = T14;
  regsym(&YastYfunction_value,"ast","function-value");
  lit_3 = YPsb((P)"FUN");
  T15 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YastYLast_functionG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_function_kind_90 = YPmet(FUNCODEREF(fun_function_kind_90),YPPsym((P)"function-kind"),T15,ENVNUL);
  T19 = BOUNDP(YastYfunction_kind);
  if (T19 != YPfalse) {
    T18 = CHKREF(YastYfunction_kind);
  } else {
    T18 = YPfalse;
  }
  T17 = fun_function_kind_90;
  T16 = CALL2(CHKREF(YPdefine_method),T18,T17);
  YastYfunction_kind = T16;
  regsym(&YastYfunction_kind,"ast","function-kind");
  T21 = (P)YPpair(CHKREF(YastYLast_functionG),Ynil);
  T20 = CALL3(CHKREF(YPisa),T21,Ynil,Ynil);
  YastYLast_methodG = T20;
  regsym(&YastYLast_methodG,"ast","<ast-method>");
  T22 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLast_methodG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_function_body_91 = YPmet(FUNCODEREF(fun_function_body_91),YPPsym((P)"function-body"),T22,ENVNUL);
  T26 = BOUNDP(YastYfunction_body);
  if (T26 != YPfalse) {
    T25 = CHKREF(YastYfunction_body);
  } else {
    T25 = YPfalse;
  }
  T24 = fun_function_body_91;
  T23 = CALL2(CHKREF(YPdefine_method),T25,T24);
  YastYfunction_body = T23;
  regsym(&YastYfunction_body,"ast","function-body");
  T27 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLast_methodG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_function_body_setter_92 = YPmet(FUNCODEREF(fun_function_body_setter_92),YPPsym((P)"function-body-setter"),T27,ENVNUL);
  T31 = BOUNDP(YastYfunction_body_setter);
  if (T31 != YPfalse) {
    T30 = CHKREF(YastYfunction_body_setter);
  } else {
    T30 = YPfalse;
  }
  T29 = fun_function_body_setter_92;
  T28 = CALL2(CHKREF(YPdefine_method),T30,T29);
  YastYfunction_body_setter = T28;
  regsym(&YastYfunction_body_setter,"ast","function-body-setter");
  T32 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_93 = YPmet(FUNCODEREF(fun_93),YPfalse,T32,ENVNUL);
  T33 = fun_93;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLast_methodG),CHKREF(YastYfunction_body),CHKREF(YastYfunction_body_setter),CHKREF(YLanyG),T33);
  lit_4 = YPsb((P)"MET");
  T34 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YastYLast_methodG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_function_kind_94 = YPmet(FUNCODEREF(fun_function_kind_94),YPPsym((P)"function-kind"),T34,ENVNUL);
  T38 = BOUNDP(YastYfunction_kind);
  if (T38 != YPfalse) {
    T37 = CHKREF(YastYfunction_kind);
  } else {
    T37 = YPfalse;
  }
  T36 = fun_function_kind_94;
  T35 = CALL2(CHKREF(YPdefine_method),T37,T36);
  YastYfunction_kind = T35;
  regsym(&YastYfunction_kind,"ast","function-kind");
  T40 = (P)YPpair(CHKREF(YastYLast_methodG),Ynil);
  T39 = CALL3(CHKREF(YPisa),T40,Ynil,Ynil);
  YastYLast_primitiveG = T39;
  regsym(&YastYLast_primitiveG,"ast","<ast-primitive>");
  lit_5 = YPsb((P)"PRM");
  T41 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YastYLast_primitiveG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_function_kind_95 = YPmet(FUNCODEREF(fun_function_kind_95),YPPsym((P)"function-kind"),T41,ENVNUL);
  T45 = BOUNDP(YastYfunction_kind);
  if (T45 != YPfalse) {
    T44 = CHKREF(YastYfunction_kind);
  } else {
    T44 = YPfalse;
  }
  T43 = fun_function_kind_95;
  T42 = CALL2(CHKREF(YPdefine_method),T44,T43);
  YastYfunction_kind = T42;
  regsym(&YastYfunction_kind,"ast","function-kind");
  T47 = (P)YPpair(CHKREF(YastYLast_functionG),Ynil);
  T46 = CALL3(CHKREF(YPisa),T47,Ynil,Ynil);
  YastYLast_genericG = T46;
  regsym(&YastYLast_genericG,"ast","<ast-generic>");
  lit_6 = YPsb((P)"GEN");
  T48 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YastYLast_genericG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_function_kind_96 = YPmet(FUNCODEREF(fun_function_kind_96),YPPsym((P)"function-kind"),T48,ENVNUL);
  T52 = BOUNDP(YastYfunction_kind);
  if (T52 != YPfalse) {
    T51 = CHKREF(YastYfunction_kind);
  } else {
    T51 = YPfalse;
  }
  T50 = fun_function_kind_96;
  T49 = CALL2(CHKREF(YPdefine_method),T51,T50);
  YastYfunction_kind = T49;
  regsym(&YastYfunction_kind,"ast","function-kind");
  T54 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T53 = CALL3(CHKREF(YPisa),T54,Ynil,Ynil);
  YastYLalternativeG = T53;
  regsym(&YastYLalternativeG,"ast","<alternative>");
  T55 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLalternativeG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_alternative_condition_97 = YPmet(FUNCODEREF(fun_alternative_condition_97),YPPsym((P)"alternative-condition"),T55,ENVNUL);
  T59 = BOUNDP(YastYalternative_condition);
  if (T59 != YPfalse) {
    T58 = CHKREF(YastYalternative_condition);
  } else {
    T58 = YPfalse;
  }
  T57 = fun_alternative_condition_97;
  T56 = CALL2(CHKREF(YPdefine_method),T58,T57);
  YastYalternative_condition = T56;
  regsym(&YastYalternative_condition,"ast","alternative-condition");
  T60 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLalternativeG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_alternative_condition_setter_98 = YPmet(FUNCODEREF(fun_alternative_condition_setter_98),YPPsym((P)"alternative-condition-setter"),T60,ENVNUL);
  T64 = BOUNDP(YastYalternative_condition_setter);
  if (T64 != YPfalse) {
    T63 = CHKREF(YastYalternative_condition_setter);
  } else {
    T63 = YPfalse;
  }
  T62 = fun_alternative_condition_setter_98;
  T61 = CALL2(CHKREF(YPdefine_method),T63,T62);
  YastYalternative_condition_setter = T61;
  regsym(&YastYalternative_condition_setter,"ast","alternative-condition-setter");
  T65 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_99 = YPmet(FUNCODEREF(fun_99),YPfalse,T65,ENVNUL);
  T66 = fun_99;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLalternativeG),CHKREF(YastYalternative_condition),CHKREF(YastYalternative_condition_setter),CHKREF(YLanyG),T66);
  T67 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLalternativeG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_alternative_consequent_100 = YPmet(FUNCODEREF(fun_alternative_consequent_100),YPPsym((P)"alternative-consequent"),T67,ENVNUL);
  T71 = BOUNDP(YastYalternative_consequent);
  if (T71 != YPfalse) {
    T70 = CHKREF(YastYalternative_consequent);
  } else {
    T70 = YPfalse;
  }
  T69 = fun_alternative_consequent_100;
  T68 = CALL2(CHKREF(YPdefine_method),T70,T69);
  YastYalternative_consequent = T68;
  regsym(&YastYalternative_consequent,"ast","alternative-consequent");
  T72 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLalternativeG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_alternative_consequent_setter_101 = YPmet(FUNCODEREF(fun_alternative_consequent_setter_101),YPPsym((P)"alternative-consequent-setter"),T72,ENVNUL);
  T76 = BOUNDP(YastYalternative_consequent_setter);
  if (T76 != YPfalse) {
    T75 = CHKREF(YastYalternative_consequent_setter);
  } else {
    T75 = YPfalse;
  }
  T74 = fun_alternative_consequent_setter_101;
  T73 = CALL2(CHKREF(YPdefine_method),T75,T74);
  YastYalternative_consequent_setter = T73;
  regsym(&YastYalternative_consequent_setter,"ast","alternative-consequent-setter");
  T77 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_102 = YPmet(FUNCODEREF(fun_102),YPfalse,T77,ENVNUL);
  T78 = fun_102;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLalternativeG),CHKREF(YastYalternative_consequent),CHKREF(YastYalternative_consequent_setter),CHKREF(YLanyG),T78);
  T79 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLalternativeG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_alternative_alternant_103 = YPmet(FUNCODEREF(fun_alternative_alternant_103),YPPsym((P)"alternative-alternant"),T79,ENVNUL);
  T83 = BOUNDP(YastYalternative_alternant);
  if (T83 != YPfalse) {
    T82 = CHKREF(YastYalternative_alternant);
  } else {
    T82 = YPfalse;
  }
  T81 = fun_alternative_alternant_103;
  T80 = CALL2(CHKREF(YPdefine_method),T82,T81);
  YastYalternative_alternant = T80;
  regsym(&YastYalternative_alternant,"ast","alternative-alternant");
  T84 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLalternativeG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_alternative_alternant_setter_104 = YPmet(FUNCODEREF(fun_alternative_alternant_setter_104),YPPsym((P)"alternative-alternant-setter"),T84,ENVNUL);
  T88 = BOUNDP(YastYalternative_alternant_setter);
  if (T88 != YPfalse) {
    T87 = CHKREF(YastYalternative_alternant_setter);
  } else {
    T87 = YPfalse;
  }
  T86 = fun_alternative_alternant_setter_104;
  T85 = CALL2(CHKREF(YPdefine_method),T87,T86);
  YastYalternative_alternant_setter = T85;
  regsym(&YastYalternative_alternant_setter,"ast","alternative-alternant-setter");
  T89 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T89,ENVNUL);
  T90 = fun_105;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLalternativeG),CHKREF(YastYalternative_alternant),CHKREF(YastYalternative_alternant_setter),CHKREF(YLanyG),T90);
  T92 = (P)YPpair(CHKREF(YastYLpassive_programG),Ynil);
  T91 = CALL3(CHKREF(YPisa),T92,Ynil,Ynil);
  YastYLprogramsG = T91;
  regsym(&YastYLprogramsG,"ast","<programs>");
  lit_7 = YPPsym((P)"=>");
  lit_8 = YPPsym((P)"e");
  lit_9 = YPPsym((P)"empty");
  lit_10 = YPPsym((P)"dm");
  lit_11 = YPPsym((P)"t");
  lit_12 = YPPsym((P)"tail");
  lit_13 = YPPsym((P)"set");
  lit_14 = YPPsym((P)"h");
  lit_15 = YPPsym((P)"head");
  lit_16 = YPPsym((P)"set");
  lit_17 = YPPsym((P)"isa");
  lit_18 = YPPsym((P)"t");
  lit_19 = YPPsym((P)"h");
  lit_20 = YPPsym((P)"df");
  lit_21 = YPPsym((P)"x");
  lit_22 = YPPsym((P)"pair");
  lit_23 = YPPsym((P)"fabs");
  lit_24 = YPPsym((P)"apply");
  lit_25 = YPPsym((P)"<lst>");
  lit_26 = YPPsym((P)"=>");
  lit_27 = YPPsym((P)"<lst>");
  lit_28 = YPPsym((P)"x");
  lit_29 = YPPsym((P)"p");
  lit_30 = YPPsym((P)"as");
  lit_31 = YPPsym((P)"dm");
  lit_32 = YPPsym((P)"x");
  lit_33 = YPPsym((P)"lst");
  lit_34 = YPPsym((P)"apply");
  lit_35 = YPPsym((P)"<lst>");
  lit_36 = YPPsym((P)"=>");
  lit_37 = YPPsym((P)"x");
  lit_38 = YPPsym((P)"<lst>");
  lit_39 = YPPsym((P)"p");
  lit_40 = YPPsym((P)"as");
  lit_41 = YPPsym((P)"dm");
  lit_42 = YPPsym((P)"x");
  lit_43 = YPPsym((P)"<lst>");
  lit_44 = YPPsym((P)"=>");
  lit_45 = YPPsym((P)"x");
  lit_46 = YPPsym((P)"p");
  lit_47 = YPPsym((P)"as");
  lit_48 = YPPsym((P)"dm");
  lit_49 = YPPsym((P)"tail");
  lit_50 = YPPsym((P)"set");
  lit_51 = YPPsym((P)"head");
  lit_52 = YPPsym((P)"set");
  lit_53 = YPPsym((P)"isa");
  lit_54 = YPPsym((P)"dv");
  lit_55 = YPPsym((P)"<lst>");
  lit_56 = YPPsym((P)"isa");
  lit_57 = YPPsym((P)"dv");
  lit_58 = YPPsym((P)"seq");
  lit_59 = YPsb((P)"-empty");
  lit_60 = YPsb((P)"$");
  lit_61 = YPsb((P)">");
  lit_62 = YPsb((P)"<");
  lit_63 = YPsb((P)"Match Pattern Failure");
  lit_64 = YPPsym((P)"def-list");
  T95 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1214_106 = YPmet(FUNCODEREF(fun_x_1214_106),YPPsym((P)"x-1214"),T95,ENVNUL);
  T94 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_107 = YPmet(FUNCODEREF(fun_107),YPfalse,T94,ENVNUL);
  T93 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T93,ENVNUL);
  T96 = fun_108;
  YPmacro(YPPsym((P)"def-list"),T96);
  lit_65 = YPPsym((P)"<programs>");
  lit_66 = YPPsym((P)"def-list");
  lit_67 = YPsb((P)"Match Pattern Failure");
  lit_68 = YPPsym((P)"def-programs");
  T99 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1218_109 = YPmet(FUNCODEREF(fun_x_1218_109),YPPsym((P)"x-1218"),T99,ENVNUL);
  T98 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_110 = YPmet(FUNCODEREF(fun_110),YPfalse,T98,ENVNUL);
  T97 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T97,ENVNUL);
  T100 = fun_111;
  YPmacro(YPPsym((P)"def-programs"),T100);
  T103 = (P)YPpair(CHKREF(YastYLprogramsG),Ynil);
  T102 = (P)YPpair(CHKREF(YLlstG),T103);
  T101 = CALL3(CHKREF(YPisa),T102,Ynil,Ynil);
  YastYLsequentialG = T101;
  regsym(&YastYLsequentialG,"ast","<sequential>");
  T109 = (P)YPpair(CHKREF(YastYLsequentialG),Ynil);
  T108 = (P)YPpair(CHKREF(Ytail),Ynil);
  T107 = (P)YPpair(CHKREF(Yhead),T108);
  T106 = (P)YPpair(YPfalse,Ynil);
  T105 = (P)YPpair(YPfalse,T106);
  T104 = CALL3(CHKREF(YPisa),T109,T107,T105);
  YastYDsequential_empty = T104;
  regsym(&YastYDsequential_empty,"ast","$sequential-empty");
  T110 = YPsig(YPpair(YPPsym((P)"p"),YPpair(YPPsym((P)"x"),Ynil)),YPpair(CHKREF(YastYLsequentialG),YPpair(CHKREF(YastYLsequentialG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_as_112 = YPmet(FUNCODEREF(fun_as_112),YPPsym((P)"as"),T110,ENVNUL);
  T114 = BOUNDP(YruntimeYas);
  if (T114 != YPfalse) {
    T113 = CHKREF(YruntimeYas);
  } else {
    T113 = YPfalse;
  }
  T112 = fun_as_112;
  T111 = CALL2(CHKREF(YPdefine_method),T113,T112);
  YruntimeYas = T111;
  regsym(&YruntimeYas,"runtime","as");
  T115 = YPsig(YPpair(YPPsym((P)"p"),YPpair(YPPsym((P)"x"),Ynil)),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YastYLsequentialG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_as_113 = YPmet(FUNCODEREF(fun_as_113),YPPsym((P)"as"),T115,ENVNUL);
  T119 = BOUNDP(YruntimeYas);
  if (T119 != YPfalse) {
    T118 = CHKREF(YruntimeYas);
  } else {
    T118 = YPfalse;
  }
  T117 = fun_as_113;
  T116 = CALL2(CHKREF(YPdefine_method),T118,T117);
  YruntimeYas = T116;
  regsym(&YruntimeYas,"runtime","as");
  T120 = YPsig(YPpair(YPPsym((P)"p"),YPpair(YPPsym((P)"x"),Ynil)),YPpair(CHKREF(YastYLsequentialG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_as_114 = YPmet(FUNCODEREF(fun_as_114),YPPsym((P)"as"),T120,ENVNUL);
  T124 = BOUNDP(YruntimeYas);
  if (T124 != YPfalse) {
    T123 = CHKREF(YruntimeYas);
  } else {
    T123 = YPfalse;
  }
  T122 = fun_as_114;
  T121 = CALL2(CHKREF(YPdefine_method),T123,T122);
  YruntimeYas = T121;
  regsym(&YruntimeYas,"runtime","as");
  T125 = YPsig(YPpair(YPPsym((P)"h"),YPpair(YPPsym((P)"t"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYsequential = YPmet(FUNCODEREF(YastYsequential),YPPsym((P)"sequential"),T125,ENVNUL);
  T126 = YastYsequential;
  YastYsequential = T126;
  regsym(&YastYsequential,"ast","sequential");
  T127 = YPsig(YPpair(YPPsym((P)"e"),Ynil),YPpair(CHKREF(YastYLsequentialG),Ynil),YPfalse,YPint((P)1),CHKREF(YastYLsequentialG));
  fun_empty_116 = YPmet(FUNCODEREF(fun_empty_116),YPPsym((P)"empty"),T127,ENVNUL);
  T131 = BOUNDP(YruntimeYempty);
  if (T131 != YPfalse) {
    T130 = CHKREF(YruntimeYempty);
  } else {
    T130 = YPfalse;
  }
  T129 = fun_empty_116;
  T128 = CALL2(CHKREF(YPdefine_method),T130,T129);
  YruntimeYempty = T128;
  regsym(&YruntimeYempty,"runtime","empty");
  T133 = (P)YPpair(CHKREF(YastYLpassive_programG),Ynil);
  T132 = CALL3(CHKREF(YPisa),T133,Ynil,Ynil);
  YastYLconstantG = T132;
  regsym(&YastYLconstantG,"ast","<constant>");
  T134 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLconstantG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_constant_value_117 = YPmet(FUNCODEREF(fun_constant_value_117),YPPsym((P)"constant-value"),T134,ENVNUL);
  T138 = BOUNDP(YastYconstant_value);
  if (T138 != YPfalse) {
    T137 = CHKREF(YastYconstant_value);
  } else {
    T137 = YPfalse;
  }
  T136 = fun_constant_value_117;
  T135 = CALL2(CHKREF(YPdefine_method),T137,T136);
  YastYconstant_value = T135;
  regsym(&YastYconstant_value,"ast","constant-value");
  T139 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLconstantG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_constant_value_setter_118 = YPmet(FUNCODEREF(fun_constant_value_setter_118),YPPsym((P)"constant-value-setter"),T139,ENVNUL);
  T143 = BOUNDP(YastYconstant_value_setter);
  if (T143 != YPfalse) {
    T142 = CHKREF(YastYconstant_value_setter);
  } else {
    T142 = YPfalse;
  }
  T141 = fun_constant_value_setter_118;
  T140 = CALL2(CHKREF(YPdefine_method),T142,T141);
  YastYconstant_value_setter = T140;
  regsym(&YastYconstant_value_setter,"ast","constant-value-setter");
  T144 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_119 = YPmet(FUNCODEREF(fun_119),YPfalse,T144,ENVNUL);
  T145 = fun_119;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLconstantG),CHKREF(YastYconstant_value),CHKREF(YastYconstant_value_setter),CHKREF(YLanyG),T145);
  T147 = (P)YPpair(CHKREF(YastYLconstantG),Ynil);
  T146 = CALL3(CHKREF(YPisa),T147,Ynil,Ynil);
  YastYLraw_constantG = T146;
  regsym(&YastYLraw_constantG,"ast","<raw-constant>");
  T149 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T148 = CALL3(CHKREF(YPisa),T149,Ynil,Ynil);
  YastYLapplicationG = T148;
  regsym(&YastYLapplicationG,"ast","<application>");
  T150 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLapplicationG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_application_arguments_120 = YPmet(FUNCODEREF(fun_application_arguments_120),YPPsym((P)"application-arguments"),T150,ENVNUL);
  T154 = BOUNDP(YastYapplication_arguments);
  if (T154 != YPfalse) {
    T153 = CHKREF(YastYapplication_arguments);
  } else {
    T153 = YPfalse;
  }
  T152 = fun_application_arguments_120;
  T151 = CALL2(CHKREF(YPdefine_method),T153,T152);
  YastYapplication_arguments = T151;
  regsym(&YastYapplication_arguments,"ast","application-arguments");
  T155 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLapplicationG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_application_arguments_setter_121 = YPmet(FUNCODEREF(fun_application_arguments_setter_121),YPPsym((P)"application-arguments-setter"),T155,ENVNUL);
  T159 = BOUNDP(YastYapplication_arguments_setter);
  if (T159 != YPfalse) {
    T158 = CHKREF(YastYapplication_arguments_setter);
  } else {
    T158 = YPfalse;
  }
  T157 = fun_application_arguments_setter_121;
  T156 = CALL2(CHKREF(YPdefine_method),T158,T157);
  YastYapplication_arguments_setter = T156;
  regsym(&YastYapplication_arguments_setter,"ast","application-arguments-setter");
  T160 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_122 = YPmet(FUNCODEREF(fun_122),YPfalse,T160,ENVNUL);
  T161 = fun_122;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLapplicationG),CHKREF(YastYapplication_arguments),CHKREF(YastYapplication_arguments_setter),CHKREF(YLanyG),T161);
  T162 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLapplicationG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_application_tailQ_123 = YPmet(FUNCODEREF(fun_application_tailQ_123),YPPsym((P)"application-tail?"),T162,ENVNUL);
  T166 = BOUNDP(YastYapplication_tailQ);
  if (T166 != YPfalse) {
    T165 = CHKREF(YastYapplication_tailQ);
  } else {
    T165 = YPfalse;
  }
  T164 = fun_application_tailQ_123;
  T163 = CALL2(CHKREF(YPdefine_method),T165,T164);
  YastYapplication_tailQ = T163;
  regsym(&YastYapplication_tailQ,"ast","application-tail?");
  T167 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLapplicationG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_application_tailQ_setter_124 = YPmet(FUNCODEREF(fun_application_tailQ_setter_124),YPPsym((P)"application-tail?-setter"),T167,ENVNUL);
  T171 = BOUNDP(YastYapplication_tailQ_setter);
  if (T171 != YPfalse) {
    T170 = CHKREF(YastYapplication_tailQ_setter);
  } else {
    T170 = YPfalse;
  }
  T169 = fun_application_tailQ_setter_124;
  T168 = CALL2(CHKREF(YPdefine_method),T170,T169);
  YastYapplication_tailQ_setter = T168;
  regsym(&YastYapplication_tailQ_setter,"ast","application-tail?-setter");
  T172 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_125 = YPmet(FUNCODEREF(fun_125),YPfalse,T172,ENVNUL);
  T173 = fun_125;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLapplicationG),CHKREF(YastYapplication_tailQ),CHKREF(YastYapplication_tailQ_setter),CHKREF(YLanyG),T173);
  T175 = (P)YPpair(CHKREF(YastYLapplicationG),Ynil);
  T174 = CALL3(CHKREF(YPisa),T175,Ynil,Ynil);
  YastYLregular_applicationG = T174;
  regsym(&YastYLregular_applicationG,"ast","<regular-application>");
  T176 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLregular_applicationG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_application_function_126 = YPmet(FUNCODEREF(fun_application_function_126),YPPsym((P)"application-function"),T176,ENVNUL);
  T180 = BOUNDP(YastYapplication_function);
  if (T180 != YPfalse) {
    T179 = CHKREF(YastYapplication_function);
  } else {
    T179 = YPfalse;
  }
  T178 = fun_application_function_126;
  T177 = CALL2(CHKREF(YPdefine_method),T179,T178);
  YastYapplication_function = T177;
  regsym(&YastYapplication_function,"ast","application-function");
  T181 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLregular_applicationG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_application_function_setter_127 = YPmet(FUNCODEREF(fun_application_function_setter_127),YPPsym((P)"application-function-setter"),T181,ENVNUL);
  T185 = BOUNDP(YastYapplication_function_setter);
  if (T185 != YPfalse) {
    T184 = CHKREF(YastYapplication_function_setter);
  } else {
    T184 = YPfalse;
  }
  T183 = fun_application_function_setter_127;
  T182 = CALL2(CHKREF(YPdefine_method),T184,T183);
  YastYapplication_function_setter = T182;
  regsym(&YastYapplication_function_setter,"ast","application-function-setter");
  T186 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_128 = YPmet(FUNCODEREF(fun_128),YPfalse,T186,ENVNUL);
  T187 = fun_128;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLregular_applicationG),CHKREF(YastYapplication_function),CHKREF(YastYapplication_function_setter),CHKREF(YLanyG),T187);
  T188 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLregular_applicationG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_application_knownQ_129 = YPmet(FUNCODEREF(fun_application_knownQ_129),YPPsym((P)"application-known?"),T188,ENVNUL);
  T192 = BOUNDP(YastYapplication_knownQ);
  if (T192 != YPfalse) {
    T191 = CHKREF(YastYapplication_knownQ);
  } else {
    T191 = YPfalse;
  }
  T190 = fun_application_knownQ_129;
  T189 = CALL2(CHKREF(YPdefine_method),T191,T190);
  YastYapplication_knownQ = T189;
  regsym(&YastYapplication_knownQ,"ast","application-known?");
  T193 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLregular_applicationG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_application_knownQ_setter_130 = YPmet(FUNCODEREF(fun_application_knownQ_setter_130),YPPsym((P)"application-known?-setter"),T193,ENVNUL);
  T197 = BOUNDP(YastYapplication_knownQ_setter);
  if (T197 != YPfalse) {
    T196 = CHKREF(YastYapplication_knownQ_setter);
  } else {
    T196 = YPfalse;
  }
  T195 = fun_application_knownQ_setter_130;
  T194 = CALL2(CHKREF(YPdefine_method),T196,T195);
  YastYapplication_knownQ_setter = T194;
  regsym(&YastYapplication_knownQ_setter,"ast","application-known?-setter");
  T198 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_131 = YPmet(FUNCODEREF(fun_131),YPfalse,T198,ENVNUL);
  T199 = fun_131;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLregular_applicationG),CHKREF(YastYapplication_knownQ),CHKREF(YastYapplication_knownQ_setter),CHKREF(YLanyG),T199);
  T201 = (P)YPpair(CHKREF(YastYLapplicationG),Ynil);
  T200 = CALL3(CHKREF(YPisa),T201,Ynil,Ynil);
  YastYLpredefined_applicationG = T200;
  regsym(&YastYLpredefined_applicationG,"ast","<predefined-application>");
  T202 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLpredefined_applicationG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_application_binding_132 = YPmet(FUNCODEREF(fun_application_binding_132),YPPsym((P)"application-binding"),T202,ENVNUL);
  T206 = BOUNDP(YastYapplication_binding);
  if (T206 != YPfalse) {
    T205 = CHKREF(YastYapplication_binding);
  } else {
    T205 = YPfalse;
  }
  T204 = fun_application_binding_132;
  T203 = CALL2(CHKREF(YPdefine_method),T205,T204);
  YastYapplication_binding = T203;
  regsym(&YastYapplication_binding,"ast","application-binding");
  T207 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLpredefined_applicationG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_application_binding_setter_133 = YPmet(FUNCODEREF(fun_application_binding_setter_133),YPPsym((P)"application-binding-setter"),T207,ENVNUL);
  T211 = BOUNDP(YastYapplication_binding_setter);
  if (T211 != YPfalse) {
    T210 = CHKREF(YastYapplication_binding_setter);
  } else {
    T210 = YPfalse;
  }
  T209 = fun_application_binding_setter_133;
  T208 = CALL2(CHKREF(YPdefine_method),T210,T209);
  YastYapplication_binding_setter = T208;
  regsym(&YastYapplication_binding_setter,"ast","application-binding-setter");
  T212 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_134 = YPmet(FUNCODEREF(fun_134),YPfalse,T212,ENVNUL);
  T213 = fun_134;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLpredefined_applicationG),CHKREF(YastYapplication_binding),CHKREF(YastYapplication_binding_setter),CHKREF(YLanyG),T213);
  T215 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T214 = CALL3(CHKREF(YPisa),T215,Ynil,Ynil);
  YastYLfix_letG = T214;
  regsym(&YastYLfix_letG,"ast","<fix-let>");
  T216 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLfix_letG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_fix_let_bindings_135 = YPmet(FUNCODEREF(fun_fix_let_bindings_135),YPPsym((P)"fix-let-bindings"),T216,ENVNUL);
  T220 = BOUNDP(YastYfix_let_bindings);
  if (T220 != YPfalse) {
    T219 = CHKREF(YastYfix_let_bindings);
  } else {
    T219 = YPfalse;
  }
  T218 = fun_fix_let_bindings_135;
  T217 = CALL2(CHKREF(YPdefine_method),T219,T218);
  YastYfix_let_bindings = T217;
  regsym(&YastYfix_let_bindings,"ast","fix-let-bindings");
  T221 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLfix_letG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_fix_let_bindings_setter_136 = YPmet(FUNCODEREF(fun_fix_let_bindings_setter_136),YPPsym((P)"fix-let-bindings-setter"),T221,ENVNUL);
  T225 = BOUNDP(YastYfix_let_bindings_setter);
  if (T225 != YPfalse) {
    T224 = CHKREF(YastYfix_let_bindings_setter);
  } else {
    T224 = YPfalse;
  }
  T223 = fun_fix_let_bindings_setter_136;
  T222 = CALL2(CHKREF(YPdefine_method),T224,T223);
  YastYfix_let_bindings_setter = T222;
  regsym(&YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
  T226 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_137 = YPmet(FUNCODEREF(fun_137),YPfalse,T226,ENVNUL);
  T227 = fun_137;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLfix_letG),CHKREF(YastYfix_let_bindings),CHKREF(YastYfix_let_bindings_setter),CHKREF(YLanyG),T227);
  T230 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLfix_letG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  T229 = fun_fix_let_types_138 = YPmet(FUNCODEREF(fun_fix_let_types_138),YPPsym((P)"fix-let-types"),T230,ENVNUL);
  T235 = BOUNDP(YastYfix_let_types);
  if (T235 != YPfalse) {
    T234 = CHKREF(YastYfix_let_types);
  } else {
    T234 = YPfalse;
  }
  T233 = fun_fix_let_types_138;
  T232 = CALL2(CHKREF(YPdefine_method),T234,T233);
  T231 = YastYfix_let_types = T232;
  regsym(&YastYfix_let_types,"ast","fix-let-types");
  T228 = T231;
  return T228;
}

P YastY___main_3___() {
  P T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245,T244,T243,T242,T241,T240;
  P T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228,T227,T226,T225,T224;
  P T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212,T211,T210,T209,T208;
  P T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192;
  P T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176;
  P T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160;
  P T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144;
  P T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128;
  P T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112;
  P T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96;
  P T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80;
  P T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64;
  P T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48;
  P T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLfix_letG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_fix_let_types_setter_139 = YPmet(FUNCODEREF(fun_fix_let_types_setter_139),YPPsym((P)"fix-let-types-setter"),T0,ENVNUL);
  T4 = BOUNDP(YastYfix_let_types_setter);
  if (T4 != YPfalse) {
    T3 = CHKREF(YastYfix_let_types_setter);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_fix_let_types_setter_139;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YastYfix_let_types_setter = T1;
  regsym(&YastYfix_let_types_setter,"ast","fix-let-types-setter");
  T5 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_140 = YPmet(FUNCODEREF(fun_140),YPfalse,T5,ENVNUL);
  T6 = fun_140;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLfix_letG),CHKREF(YastYfix_let_types),CHKREF(YastYfix_let_types_setter),CHKREF(YLanyG),T6);
  T7 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLfix_letG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_fix_let_arguments_141 = YPmet(FUNCODEREF(fun_fix_let_arguments_141),YPPsym((P)"fix-let-arguments"),T7,ENVNUL);
  T11 = BOUNDP(YastYfix_let_arguments);
  if (T11 != YPfalse) {
    T10 = CHKREF(YastYfix_let_arguments);
  } else {
    T10 = YPfalse;
  }
  T9 = fun_fix_let_arguments_141;
  T8 = CALL2(CHKREF(YPdefine_method),T10,T9);
  YastYfix_let_arguments = T8;
  regsym(&YastYfix_let_arguments,"ast","fix-let-arguments");
  T12 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLfix_letG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_fix_let_arguments_setter_142 = YPmet(FUNCODEREF(fun_fix_let_arguments_setter_142),YPPsym((P)"fix-let-arguments-setter"),T12,ENVNUL);
  T16 = BOUNDP(YastYfix_let_arguments_setter);
  if (T16 != YPfalse) {
    T15 = CHKREF(YastYfix_let_arguments_setter);
  } else {
    T15 = YPfalse;
  }
  T14 = fun_fix_let_arguments_setter_142;
  T13 = CALL2(CHKREF(YPdefine_method),T15,T14);
  YastYfix_let_arguments_setter = T13;
  regsym(&YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
  T17 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_143 = YPmet(FUNCODEREF(fun_143),YPfalse,T17,ENVNUL);
  T18 = fun_143;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLfix_letG),CHKREF(YastYfix_let_arguments),CHKREF(YastYfix_let_arguments_setter),CHKREF(YLanyG),T18);
  T19 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLfix_letG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_fix_let_body_144 = YPmet(FUNCODEREF(fun_fix_let_body_144),YPPsym((P)"fix-let-body"),T19,ENVNUL);
  T23 = BOUNDP(YastYfix_let_body);
  if (T23 != YPfalse) {
    T22 = CHKREF(YastYfix_let_body);
  } else {
    T22 = YPfalse;
  }
  T21 = fun_fix_let_body_144;
  T20 = CALL2(CHKREF(YPdefine_method),T22,T21);
  YastYfix_let_body = T20;
  regsym(&YastYfix_let_body,"ast","fix-let-body");
  T24 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLfix_letG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_fix_let_body_setter_145 = YPmet(FUNCODEREF(fun_fix_let_body_setter_145),YPPsym((P)"fix-let-body-setter"),T24,ENVNUL);
  T28 = BOUNDP(YastYfix_let_body_setter);
  if (T28 != YPfalse) {
    T27 = CHKREF(YastYfix_let_body_setter);
  } else {
    T27 = YPfalse;
  }
  T26 = fun_fix_let_body_setter_145;
  T25 = CALL2(CHKREF(YPdefine_method),T27,T26);
  YastYfix_let_body_setter = T25;
  regsym(&YastYfix_let_body_setter,"ast","fix-let-body-setter");
  T29 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_146 = YPmet(FUNCODEREF(fun_146),YPfalse,T29,ENVNUL);
  T30 = fun_146;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLfix_letG),CHKREF(YastYfix_let_body),CHKREF(YastYfix_let_body_setter),CHKREF(YLanyG),T30);
  T33 = (P)YPpair(CHKREF(YastYLprogramsG),Ynil);
  T32 = (P)YPpair(CHKREF(YLlstG),T33);
  T31 = CALL3(CHKREF(YPisa),T32,Ynil,Ynil);
  YastYLtypesG = T31;
  regsym(&YastYLtypesG,"ast","<types>");
  T39 = (P)YPpair(CHKREF(YastYLtypesG),Ynil);
  T38 = (P)YPpair(CHKREF(Ytail),Ynil);
  T37 = (P)YPpair(CHKREF(Yhead),T38);
  T36 = (P)YPpair(YPfalse,Ynil);
  T35 = (P)YPpair(YPfalse,T36);
  T34 = CALL3(CHKREF(YPisa),T39,T37,T35);
  YastYDtypes_empty = T34;
  regsym(&YastYDtypes_empty,"ast","$types-empty");
  T40 = YPsig(YPpair(YPPsym((P)"p"),YPpair(YPPsym((P)"x"),Ynil)),YPpair(CHKREF(YastYLtypesG),YPpair(CHKREF(YastYLtypesG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_as_147 = YPmet(FUNCODEREF(fun_as_147),YPPsym((P)"as"),T40,ENVNUL);
  T44 = BOUNDP(YruntimeYas);
  if (T44 != YPfalse) {
    T43 = CHKREF(YruntimeYas);
  } else {
    T43 = YPfalse;
  }
  T42 = fun_as_147;
  T41 = CALL2(CHKREF(YPdefine_method),T43,T42);
  YruntimeYas = T41;
  regsym(&YruntimeYas,"runtime","as");
  T45 = YPsig(YPpair(YPPsym((P)"p"),YPpair(YPPsym((P)"x"),Ynil)),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YastYLtypesG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_as_148 = YPmet(FUNCODEREF(fun_as_148),YPPsym((P)"as"),T45,ENVNUL);
  T49 = BOUNDP(YruntimeYas);
  if (T49 != YPfalse) {
    T48 = CHKREF(YruntimeYas);
  } else {
    T48 = YPfalse;
  }
  T47 = fun_as_148;
  T46 = CALL2(CHKREF(YPdefine_method),T48,T47);
  YruntimeYas = T46;
  regsym(&YruntimeYas,"runtime","as");
  T50 = YPsig(YPpair(YPPsym((P)"p"),YPpair(YPPsym((P)"x"),Ynil)),YPpair(CHKREF(YastYLtypesG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_as_149 = YPmet(FUNCODEREF(fun_as_149),YPPsym((P)"as"),T50,ENVNUL);
  T54 = BOUNDP(YruntimeYas);
  if (T54 != YPfalse) {
    T53 = CHKREF(YruntimeYas);
  } else {
    T53 = YPfalse;
  }
  T52 = fun_as_149;
  T51 = CALL2(CHKREF(YPdefine_method),T53,T52);
  YruntimeYas = T51;
  regsym(&YruntimeYas,"runtime","as");
  T55 = YPsig(YPpair(YPPsym((P)"h"),YPpair(YPPsym((P)"t"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYtypes = YPmet(FUNCODEREF(YastYtypes),YPPsym((P)"types"),T55,ENVNUL);
  T56 = YastYtypes;
  YastYtypes = T56;
  regsym(&YastYtypes,"ast","types");
  T57 = YPsig(YPpair(YPPsym((P)"e"),Ynil),YPpair(CHKREF(YastYLtypesG),Ynil),YPfalse,YPint((P)1),CHKREF(YastYLtypesG));
  fun_empty_151 = YPmet(FUNCODEREF(fun_empty_151),YPPsym((P)"empty"),T57,ENVNUL);
  T61 = BOUNDP(YruntimeYempty);
  if (T61 != YPfalse) {
    T60 = CHKREF(YruntimeYempty);
  } else {
    T60 = YPfalse;
  }
  T59 = fun_empty_151;
  T58 = CALL2(CHKREF(YPdefine_method),T60,T59);
  YruntimeYempty = T58;
  regsym(&YruntimeYempty,"runtime","empty");
  T64 = (P)YPpair(CHKREF(YastYLprogramsG),Ynil);
  T63 = (P)YPpair(CHKREF(YLlstG),T64);
  T62 = CALL3(CHKREF(YPisa),T63,Ynil,Ynil);
  YastYLargumentsG = T62;
  regsym(&YastYLargumentsG,"ast","<arguments>");
  T70 = (P)YPpair(CHKREF(YastYLargumentsG),Ynil);
  T69 = (P)YPpair(CHKREF(Ytail),Ynil);
  T68 = (P)YPpair(CHKREF(Yhead),T69);
  T67 = (P)YPpair(YPfalse,Ynil);
  T66 = (P)YPpair(YPfalse,T67);
  T65 = CALL3(CHKREF(YPisa),T70,T68,T66);
  YastYDarguments_empty = T65;
  regsym(&YastYDarguments_empty,"ast","$arguments-empty");
  T71 = YPsig(YPpair(YPPsym((P)"p"),YPpair(YPPsym((P)"x"),Ynil)),YPpair(CHKREF(YastYLargumentsG),YPpair(CHKREF(YastYLargumentsG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_as_152 = YPmet(FUNCODEREF(fun_as_152),YPPsym((P)"as"),T71,ENVNUL);
  T75 = BOUNDP(YruntimeYas);
  if (T75 != YPfalse) {
    T74 = CHKREF(YruntimeYas);
  } else {
    T74 = YPfalse;
  }
  T73 = fun_as_152;
  T72 = CALL2(CHKREF(YPdefine_method),T74,T73);
  YruntimeYas = T72;
  regsym(&YruntimeYas,"runtime","as");
  T76 = YPsig(YPpair(YPPsym((P)"p"),YPpair(YPPsym((P)"x"),Ynil)),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YastYLargumentsG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_as_153 = YPmet(FUNCODEREF(fun_as_153),YPPsym((P)"as"),T76,ENVNUL);
  T80 = BOUNDP(YruntimeYas);
  if (T80 != YPfalse) {
    T79 = CHKREF(YruntimeYas);
  } else {
    T79 = YPfalse;
  }
  T78 = fun_as_153;
  T77 = CALL2(CHKREF(YPdefine_method),T79,T78);
  YruntimeYas = T77;
  regsym(&YruntimeYas,"runtime","as");
  T81 = YPsig(YPpair(YPPsym((P)"p"),YPpair(YPPsym((P)"x"),Ynil)),YPpair(CHKREF(YastYLargumentsG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_as_154 = YPmet(FUNCODEREF(fun_as_154),YPPsym((P)"as"),T81,ENVNUL);
  T85 = BOUNDP(YruntimeYas);
  if (T85 != YPfalse) {
    T84 = CHKREF(YruntimeYas);
  } else {
    T84 = YPfalse;
  }
  T83 = fun_as_154;
  T82 = CALL2(CHKREF(YPdefine_method),T84,T83);
  YruntimeYas = T82;
  regsym(&YruntimeYas,"runtime","as");
  T86 = YPsig(YPpair(YPPsym((P)"h"),YPpair(YPPsym((P)"t"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYarguments = YPmet(FUNCODEREF(YastYarguments),YPPsym((P)"arguments"),T86,ENVNUL);
  T87 = YastYarguments;
  YastYarguments = T87;
  regsym(&YastYarguments,"ast","arguments");
  T88 = YPsig(YPpair(YPPsym((P)"e"),Ynil),YPpair(CHKREF(YastYLargumentsG),Ynil),YPfalse,YPint((P)1),CHKREF(YastYLargumentsG));
  fun_empty_156 = YPmet(FUNCODEREF(fun_empty_156),YPPsym((P)"empty"),T88,ENVNUL);
  T92 = BOUNDP(YruntimeYempty);
  if (T92 != YPfalse) {
    T91 = CHKREF(YruntimeYempty);
  } else {
    T91 = YPfalse;
  }
  T90 = fun_empty_156;
  T89 = CALL2(CHKREF(YPdefine_method),T91,T90);
  YruntimeYempty = T89;
  regsym(&YruntimeYempty,"runtime","empty");
  T94 = YPsig(YPpair(YPPsym((P)"res"),YPpair(YPPsym((P)"e"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_157 = YPmet(FUNCODEREF(fun_loop_157),YPPsym((P)"loop"),T94,ENVNUL);
  T93 = YPsig(YPpair(YPPsym((P)"c"),YPpair(YPPsym((P)"e"),Ynil)),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YastYLargumentsG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_as_158 = YPmet(FUNCODEREF(fun_as_158),YPPsym((P)"as"),T93,ENVNUL);
  T98 = BOUNDP(YruntimeYas);
  if (T98 != YPfalse) {
    T97 = CHKREF(YruntimeYas);
  } else {
    T97 = YPfalse;
  }
  T96 = fun_as_158;
  T95 = CALL2(CHKREF(YPdefine_method),T97,T96);
  YruntimeYas = T95;
  regsym(&YruntimeYas,"runtime","as");
  T100 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T99 = CALL3(CHKREF(YPisa),T100,Ynil,Ynil);
  YastYLlocalsG = T99;
  regsym(&YastYLlocalsG,"ast","<locals>");
  T101 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLlocalsG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_locals_bindings_159 = YPmet(FUNCODEREF(fun_locals_bindings_159),YPPsym((P)"locals-bindings"),T101,ENVNUL);
  T105 = BOUNDP(YastYlocals_bindings);
  if (T105 != YPfalse) {
    T104 = CHKREF(YastYlocals_bindings);
  } else {
    T104 = YPfalse;
  }
  T103 = fun_locals_bindings_159;
  T102 = CALL2(CHKREF(YPdefine_method),T104,T103);
  YastYlocals_bindings = T102;
  regsym(&YastYlocals_bindings,"ast","locals-bindings");
  T106 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLlocalsG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_locals_bindings_setter_160 = YPmet(FUNCODEREF(fun_locals_bindings_setter_160),YPPsym((P)"locals-bindings-setter"),T106,ENVNUL);
  T110 = BOUNDP(YastYlocals_bindings_setter);
  if (T110 != YPfalse) {
    T109 = CHKREF(YastYlocals_bindings_setter);
  } else {
    T109 = YPfalse;
  }
  T108 = fun_locals_bindings_setter_160;
  T107 = CALL2(CHKREF(YPdefine_method),T109,T108);
  YastYlocals_bindings_setter = T107;
  regsym(&YastYlocals_bindings_setter,"ast","locals-bindings-setter");
  T111 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_161 = YPmet(FUNCODEREF(fun_161),YPfalse,T111,ENVNUL);
  T112 = fun_161;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLlocalsG),CHKREF(YastYlocals_bindings),CHKREF(YastYlocals_bindings_setter),CHKREF(YLanyG),T112);
  T113 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLlocalsG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_locals_functions_162 = YPmet(FUNCODEREF(fun_locals_functions_162),YPPsym((P)"locals-functions"),T113,ENVNUL);
  T117 = BOUNDP(YastYlocals_functions);
  if (T117 != YPfalse) {
    T116 = CHKREF(YastYlocals_functions);
  } else {
    T116 = YPfalse;
  }
  T115 = fun_locals_functions_162;
  T114 = CALL2(CHKREF(YPdefine_method),T116,T115);
  YastYlocals_functions = T114;
  regsym(&YastYlocals_functions,"ast","locals-functions");
  T118 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLlocalsG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_locals_functions_setter_163 = YPmet(FUNCODEREF(fun_locals_functions_setter_163),YPPsym((P)"locals-functions-setter"),T118,ENVNUL);
  T122 = BOUNDP(YastYlocals_functions_setter);
  if (T122 != YPfalse) {
    T121 = CHKREF(YastYlocals_functions_setter);
  } else {
    T121 = YPfalse;
  }
  T120 = fun_locals_functions_setter_163;
  T119 = CALL2(CHKREF(YPdefine_method),T121,T120);
  YastYlocals_functions_setter = T119;
  regsym(&YastYlocals_functions_setter,"ast","locals-functions-setter");
  T123 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_164 = YPmet(FUNCODEREF(fun_164),YPfalse,T123,ENVNUL);
  T124 = fun_164;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLlocalsG),CHKREF(YastYlocals_functions),CHKREF(YastYlocals_functions_setter),CHKREF(YLanyG),T124);
  T125 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLlocalsG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_locals_body_165 = YPmet(FUNCODEREF(fun_locals_body_165),YPPsym((P)"locals-body"),T125,ENVNUL);
  T129 = BOUNDP(YastYlocals_body);
  if (T129 != YPfalse) {
    T128 = CHKREF(YastYlocals_body);
  } else {
    T128 = YPfalse;
  }
  T127 = fun_locals_body_165;
  T126 = CALL2(CHKREF(YPdefine_method),T128,T127);
  YastYlocals_body = T126;
  regsym(&YastYlocals_body,"ast","locals-body");
  T130 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLlocalsG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_locals_body_setter_166 = YPmet(FUNCODEREF(fun_locals_body_setter_166),YPPsym((P)"locals-body-setter"),T130,ENVNUL);
  T134 = BOUNDP(YastYlocals_body_setter);
  if (T134 != YPfalse) {
    T133 = CHKREF(YastYlocals_body_setter);
  } else {
    T133 = YPfalse;
  }
  T132 = fun_locals_body_setter_166;
  T131 = CALL2(CHKREF(YPdefine_method),T133,T132);
  YastYlocals_body_setter = T131;
  regsym(&YastYlocals_body_setter,"ast","locals-body-setter");
  T135 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_167 = YPmet(FUNCODEREF(fun_167),YPfalse,T135,ENVNUL);
  T136 = fun_167;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLlocalsG),CHKREF(YastYlocals_body),CHKREF(YastYlocals_body_setter),CHKREF(YLanyG),T136);
  T138 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T137 = CALL3(CHKREF(YPisa),T138,Ynil,Ynil);
  YastYLbind_exitG = T137;
  regsym(&YastYLbind_exitG,"ast","<bind-exit>");
  T139 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLbind_exitG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_bind_exit_main_fun_168 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_168),YPPsym((P)"bind-exit-main-fun"),T139,ENVNUL);
  T143 = BOUNDP(YastYbind_exit_main_fun);
  if (T143 != YPfalse) {
    T142 = CHKREF(YastYbind_exit_main_fun);
  } else {
    T142 = YPfalse;
  }
  T141 = fun_bind_exit_main_fun_168;
  T140 = CALL2(CHKREF(YPdefine_method),T142,T141);
  YastYbind_exit_main_fun = T140;
  regsym(&YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
  T144 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLbind_exitG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_bind_exit_main_fun_setter_169 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_setter_169),YPPsym((P)"bind-exit-main-fun-setter"),T144,ENVNUL);
  T148 = BOUNDP(YastYbind_exit_main_fun_setter);
  if (T148 != YPfalse) {
    T147 = CHKREF(YastYbind_exit_main_fun_setter);
  } else {
    T147 = YPfalse;
  }
  T146 = fun_bind_exit_main_fun_setter_169;
  T145 = CALL2(CHKREF(YPdefine_method),T147,T146);
  YastYbind_exit_main_fun_setter = T145;
  regsym(&YastYbind_exit_main_fun_setter,"ast","bind-exit-main-fun-setter");
  T149 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_170 = YPmet(FUNCODEREF(fun_170),YPfalse,T149,ENVNUL);
  T150 = fun_170;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLbind_exitG),CHKREF(YastYbind_exit_main_fun),CHKREF(YastYbind_exit_main_fun_setter),CHKREF(YLanyG),T150);
  T152 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T151 = CALL3(CHKREF(YPisa),T152,Ynil,Ynil);
  YastYLunwind_protectG = T151;
  regsym(&YastYLunwind_protectG,"ast","<unwind-protect>");
  T153 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLunwind_protectG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_unwind_protect_protected_thunk_171 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_171),YPPsym((P)"unwind-protect-protected-thunk"),T153,ENVNUL);
  T157 = BOUNDP(YastYunwind_protect_protected_thunk);
  if (T157 != YPfalse) {
    T156 = CHKREF(YastYunwind_protect_protected_thunk);
  } else {
    T156 = YPfalse;
  }
  T155 = fun_unwind_protect_protected_thunk_171;
  T154 = CALL2(CHKREF(YPdefine_method),T156,T155);
  YastYunwind_protect_protected_thunk = T154;
  regsym(&YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
  T158 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLunwind_protectG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_unwind_protect_protected_thunk_setter_172 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_setter_172),YPPsym((P)"unwind-protect-protected-thunk-setter"),T158,ENVNUL);
  T162 = BOUNDP(YastYunwind_protect_protected_thunk_setter);
  if (T162 != YPfalse) {
    T161 = CHKREF(YastYunwind_protect_protected_thunk_setter);
  } else {
    T161 = YPfalse;
  }
  T160 = fun_unwind_protect_protected_thunk_setter_172;
  T159 = CALL2(CHKREF(YPdefine_method),T161,T160);
  YastYunwind_protect_protected_thunk_setter = T159;
  regsym(&YastYunwind_protect_protected_thunk_setter,"ast","unwind-protect-protected-thunk-setter");
  T163 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_173 = YPmet(FUNCODEREF(fun_173),YPfalse,T163,ENVNUL);
  T164 = fun_173;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLunwind_protectG),CHKREF(YastYunwind_protect_protected_thunk),CHKREF(YastYunwind_protect_protected_thunk_setter),CHKREF(YLanyG),T164);
  T165 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLunwind_protectG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_unwind_protect_cleanup_thunk_174 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_174),YPPsym((P)"unwind-protect-cleanup-thunk"),T165,ENVNUL);
  T169 = BOUNDP(YastYunwind_protect_cleanup_thunk);
  if (T169 != YPfalse) {
    T168 = CHKREF(YastYunwind_protect_cleanup_thunk);
  } else {
    T168 = YPfalse;
  }
  T167 = fun_unwind_protect_cleanup_thunk_174;
  T166 = CALL2(CHKREF(YPdefine_method),T168,T167);
  YastYunwind_protect_cleanup_thunk = T166;
  regsym(&YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
  T170 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLunwind_protectG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_unwind_protect_cleanup_thunk_setter_175 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_setter_175),YPPsym((P)"unwind-protect-cleanup-thunk-setter"),T170,ENVNUL);
  T174 = BOUNDP(YastYunwind_protect_cleanup_thunk_setter);
  if (T174 != YPfalse) {
    T173 = CHKREF(YastYunwind_protect_cleanup_thunk_setter);
  } else {
    T173 = YPfalse;
  }
  T172 = fun_unwind_protect_cleanup_thunk_setter_175;
  T171 = CALL2(CHKREF(YPdefine_method),T173,T172);
  YastYunwind_protect_cleanup_thunk_setter = T171;
  regsym(&YastYunwind_protect_cleanup_thunk_setter,"ast","unwind-protect-cleanup-thunk-setter");
  T175 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_176 = YPmet(FUNCODEREF(fun_176),YPfalse,T175,ENVNUL);
  T176 = fun_176;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLunwind_protectG),CHKREF(YastYunwind_protect_cleanup_thunk),CHKREF(YastYunwind_protect_cleanup_thunk_setter),CHKREF(YLanyG),T176);
  T178 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T177 = CALL3(CHKREF(YPisa),T178,Ynil,Ynil);
  YastYLmonitorG = T177;
  regsym(&YastYLmonitorG,"ast","<monitor>");
  T179 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLmonitorG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_monitor_handler_177 = YPmet(FUNCODEREF(fun_monitor_handler_177),YPPsym((P)"monitor-handler"),T179,ENVNUL);
  T183 = BOUNDP(YastYmonitor_handler);
  if (T183 != YPfalse) {
    T182 = CHKREF(YastYmonitor_handler);
  } else {
    T182 = YPfalse;
  }
  T181 = fun_monitor_handler_177;
  T180 = CALL2(CHKREF(YPdefine_method),T182,T181);
  YastYmonitor_handler = T180;
  regsym(&YastYmonitor_handler,"ast","monitor-handler");
  T184 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLmonitorG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_monitor_handler_setter_178 = YPmet(FUNCODEREF(fun_monitor_handler_setter_178),YPPsym((P)"monitor-handler-setter"),T184,ENVNUL);
  T188 = BOUNDP(YastYmonitor_handler_setter);
  if (T188 != YPfalse) {
    T187 = CHKREF(YastYmonitor_handler_setter);
  } else {
    T187 = YPfalse;
  }
  T186 = fun_monitor_handler_setter_178;
  T185 = CALL2(CHKREF(YPdefine_method),T187,T186);
  YastYmonitor_handler_setter = T185;
  regsym(&YastYmonitor_handler_setter,"ast","monitor-handler-setter");
  T189 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_179 = YPmet(FUNCODEREF(fun_179),YPfalse,T189,ENVNUL);
  T190 = fun_179;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmonitorG),CHKREF(YastYmonitor_handler),CHKREF(YastYmonitor_handler_setter),CHKREF(YLanyG),T190);
  T191 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLmonitorG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_monitor_main_thunk_180 = YPmet(FUNCODEREF(fun_monitor_main_thunk_180),YPPsym((P)"monitor-main-thunk"),T191,ENVNUL);
  T195 = BOUNDP(YastYmonitor_main_thunk);
  if (T195 != YPfalse) {
    T194 = CHKREF(YastYmonitor_main_thunk);
  } else {
    T194 = YPfalse;
  }
  T193 = fun_monitor_main_thunk_180;
  T192 = CALL2(CHKREF(YPdefine_method),T194,T193);
  YastYmonitor_main_thunk = T192;
  regsym(&YastYmonitor_main_thunk,"ast","monitor-main-thunk");
  T196 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLmonitorG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_monitor_main_thunk_setter_181 = YPmet(FUNCODEREF(fun_monitor_main_thunk_setter_181),YPPsym((P)"monitor-main-thunk-setter"),T196,ENVNUL);
  T200 = BOUNDP(YastYmonitor_main_thunk_setter);
  if (T200 != YPfalse) {
    T199 = CHKREF(YastYmonitor_main_thunk_setter);
  } else {
    T199 = YPfalse;
  }
  T198 = fun_monitor_main_thunk_setter_181;
  T197 = CALL2(CHKREF(YPdefine_method),T199,T198);
  YastYmonitor_main_thunk_setter = T197;
  regsym(&YastYmonitor_main_thunk_setter,"ast","monitor-main-thunk-setter");
  T201 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_182 = YPmet(FUNCODEREF(fun_182),YPfalse,T201,ENVNUL);
  T202 = fun_182;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmonitorG),CHKREF(YastYmonitor_main_thunk),CHKREF(YastYmonitor_main_thunk_setter),CHKREF(YLanyG),T202);
  T204 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T203 = CALL3(CHKREF(YPisa),T204,Ynil,Ynil);
  YastYLstatic_environmentG = T203;
  regsym(&YastYLstatic_environmentG,"ast","<static-environment>");
  T205 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLstatic_environmentG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_environment_next_183 = YPmet(FUNCODEREF(fun_environment_next_183),YPPsym((P)"environment-next"),T205,ENVNUL);
  T209 = BOUNDP(YastYenvironment_next);
  if (T209 != YPfalse) {
    T208 = CHKREF(YastYenvironment_next);
  } else {
    T208 = YPfalse;
  }
  T207 = fun_environment_next_183;
  T206 = CALL2(CHKREF(YPdefine_method),T208,T207);
  YastYenvironment_next = T206;
  regsym(&YastYenvironment_next,"ast","environment-next");
  T210 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLstatic_environmentG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_environment_next_setter_184 = YPmet(FUNCODEREF(fun_environment_next_setter_184),YPPsym((P)"environment-next-setter"),T210,ENVNUL);
  T214 = BOUNDP(YastYenvironment_next_setter);
  if (T214 != YPfalse) {
    T213 = CHKREF(YastYenvironment_next_setter);
  } else {
    T213 = YPfalse;
  }
  T212 = fun_environment_next_setter_184;
  T211 = CALL2(CHKREF(YPdefine_method),T213,T212);
  YastYenvironment_next_setter = T211;
  regsym(&YastYenvironment_next_setter,"ast","environment-next-setter");
  T215 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_185 = YPmet(FUNCODEREF(fun_185),YPfalse,T215,ENVNUL);
  T216 = fun_185;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLstatic_environmentG),CHKREF(YastYenvironment_next),CHKREF(YastYenvironment_next_setter),CHKREF(YLanyG),T216);
  T217 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLstatic_environmentG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_environment_bindings_186 = YPmet(FUNCODEREF(fun_environment_bindings_186),YPPsym((P)"environment-bindings"),T217,ENVNUL);
  T221 = BOUNDP(YastYenvironment_bindings);
  if (T221 != YPfalse) {
    T220 = CHKREF(YastYenvironment_bindings);
  } else {
    T220 = YPfalse;
  }
  T219 = fun_environment_bindings_186;
  T218 = CALL2(CHKREF(YPdefine_method),T220,T219);
  YastYenvironment_bindings = T218;
  regsym(&YastYenvironment_bindings,"ast","environment-bindings");
  T222 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLcolG),YPpair(CHKREF(YastYLstatic_environmentG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_environment_bindings_setter_187 = YPmet(FUNCODEREF(fun_environment_bindings_setter_187),YPPsym((P)"environment-bindings-setter"),T222,ENVNUL);
  T226 = BOUNDP(YastYenvironment_bindings_setter);
  if (T226 != YPfalse) {
    T225 = CHKREF(YastYenvironment_bindings_setter);
  } else {
    T225 = YPfalse;
  }
  T224 = fun_environment_bindings_setter_187;
  T223 = CALL2(CHKREF(YPdefine_method),T225,T224);
  YastYenvironment_bindings_setter = T223;
  regsym(&YastYenvironment_bindings_setter,"ast","environment-bindings-setter");
  T227 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_188 = YPmet(FUNCODEREF(fun_188),YPfalse,T227,ENVNUL);
  T228 = fun_188;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLstatic_environmentG),CHKREF(YastYenvironment_bindings),CHKREF(YastYenvironment_bindings_setter),CHKREF(YLcolG),T228);
  T230 = (P)YPpair(CHKREF(YastYLstatic_environmentG),Ynil);
  T229 = CALL3(CHKREF(YPisa),T230,Ynil,Ynil);
  YastYLstatic_global_environmentG = T229;
  regsym(&YastYLstatic_global_environmentG,"ast","<static-global-environment>");
  T231 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLstatic_global_environmentG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_environment_module_189 = YPmet(FUNCODEREF(fun_environment_module_189),YPPsym((P)"environment-module"),T231,ENVNUL);
  T235 = BOUNDP(YastYenvironment_module);
  if (T235 != YPfalse) {
    T234 = CHKREF(YastYenvironment_module);
  } else {
    T234 = YPfalse;
  }
  T233 = fun_environment_module_189;
  T232 = CALL2(CHKREF(YPdefine_method),T234,T233);
  YastYenvironment_module = T232;
  regsym(&YastYenvironment_module,"ast","environment-module");
  T236 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLstatic_global_environmentG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_environment_module_setter_190 = YPmet(FUNCODEREF(fun_environment_module_setter_190),YPPsym((P)"environment-module-setter"),T236,ENVNUL);
  T240 = BOUNDP(YastYenvironment_module_setter);
  if (T240 != YPfalse) {
    T239 = CHKREF(YastYenvironment_module_setter);
  } else {
    T239 = YPfalse;
  }
  T238 = fun_environment_module_setter_190;
  T237 = CALL2(CHKREF(YPdefine_method),T239,T238);
  YastYenvironment_module_setter = T237;
  regsym(&YastYenvironment_module_setter,"ast","environment-module-setter");
  T241 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_191 = YPmet(FUNCODEREF(fun_191),YPfalse,T241,ENVNUL);
  T242 = fun_191;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLstatic_global_environmentG),CHKREF(YastYenvironment_module),CHKREF(YastYenvironment_module_setter),CHKREF(YLanyG),T242);
  T243 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLstatic_global_environmentG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_environment_module_loader_192 = YPmet(FUNCODEREF(fun_environment_module_loader_192),YPPsym((P)"environment-module-loader"),T243,ENVNUL);
  T247 = BOUNDP(YastYenvironment_module_loader);
  if (T247 != YPfalse) {
    T246 = CHKREF(YastYenvironment_module_loader);
  } else {
    T246 = YPfalse;
  }
  T245 = fun_environment_module_loader_192;
  T244 = CALL2(CHKREF(YPdefine_method),T246,T245);
  YastYenvironment_module_loader = T244;
  regsym(&YastYenvironment_module_loader,"ast","environment-module-loader");
  T250 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLstatic_global_environmentG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  T249 = fun_environment_module_loader_setter_193 = YPmet(FUNCODEREF(fun_environment_module_loader_setter_193),YPPsym((P)"environment-module-loader-setter"),T250,ENVNUL);
  T255 = BOUNDP(YastYenvironment_module_loader_setter);
  if (T255 != YPfalse) {
    T254 = CHKREF(YastYenvironment_module_loader_setter);
  } else {
    T254 = YPfalse;
  }
  T253 = fun_environment_module_loader_setter_193;
  T252 = CALL2(CHKREF(YPdefine_method),T254,T253);
  T251 = YastYenvironment_module_loader_setter = T252;
  regsym(&YastYenvironment_module_loader_setter,"ast","environment-module-loader-setter");
  T248 = T251;
  return T248;
}

P YastY___main_4___() {
  P T295,T294,T293,T292,T291,T290,T289,T288,T287,T286,T285,T284,T283,T282,T281,T280;
  P T279,T278,T277,T276,T275,T274,T273,T272,T271,T270,T269,T268,T267,T266,T265,T264;
  P T263,T262,T261,T260,T259,T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248;
  P T247,T246,T245,T244,T243,T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232;
  P T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216;
  P T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200;
  P T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184;
  P T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168;
  P T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152;
  P T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136;
  P T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120;
  P T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104;
  P T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88;
  P T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72;
  P T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56;
  P T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_194 = YPmet(FUNCODEREF(fun_194),YPfalse,T0,ENVNUL);
  T1 = fun_194;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLstatic_global_environmentG),CHKREF(YastYenvironment_module_loader),CHKREF(YastYenvironment_module_loader_setter),CHKREF(YLanyG),T1);
  T2 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLstatic_global_environmentG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_environment_uses_modules_195 = YPmet(FUNCODEREF(fun_environment_uses_modules_195),YPPsym((P)"environment-uses-modules"),T2,ENVNUL);
  T6 = BOUNDP(YastYenvironment_uses_modules);
  if (T6 != YPfalse) {
    T5 = CHKREF(YastYenvironment_uses_modules);
  } else {
    T5 = YPfalse;
  }
  T4 = fun_environment_uses_modules_195;
  T3 = CALL2(CHKREF(YPdefine_method),T5,T4);
  YastYenvironment_uses_modules = T3;
  regsym(&YastYenvironment_uses_modules,"ast","environment-uses-modules");
  T7 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YruntimeYLbufG),YPpair(CHKREF(YastYLstatic_global_environmentG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_environment_uses_modules_setter_196 = YPmet(FUNCODEREF(fun_environment_uses_modules_setter_196),YPPsym((P)"environment-uses-modules-setter"),T7,ENVNUL);
  T11 = BOUNDP(YastYenvironment_uses_modules_setter);
  if (T11 != YPfalse) {
    T10 = CHKREF(YastYenvironment_uses_modules_setter);
  } else {
    T10 = YPfalse;
  }
  T9 = fun_environment_uses_modules_setter_196;
  T8 = CALL2(CHKREF(YPdefine_method),T10,T9);
  YastYenvironment_uses_modules_setter = T8;
  regsym(&YastYenvironment_uses_modules_setter,"ast","environment-uses-modules-setter");
  T12 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_197 = YPmet(FUNCODEREF(fun_197),YPfalse,T12,ENVNUL);
  T13 = fun_197;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLstatic_global_environmentG),CHKREF(YastYenvironment_uses_modules),CHKREF(YastYenvironment_uses_modules_setter),CHKREF(YruntimeYLbufG),T13);
  T14 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLstatic_global_environmentG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_environment_implements_198 = YPmet(FUNCODEREF(fun_environment_implements_198),YPPsym((P)"environment-implements"),T14,ENVNUL);
  T18 = BOUNDP(YastYenvironment_implements);
  if (T18 != YPfalse) {
    T17 = CHKREF(YastYenvironment_implements);
  } else {
    T17 = YPfalse;
  }
  T16 = fun_environment_implements_198;
  T15 = CALL2(CHKREF(YPdefine_method),T17,T16);
  YastYenvironment_implements = T15;
  regsym(&YastYenvironment_implements,"ast","environment-implements");
  T19 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YastYLstatic_global_environmentG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_environment_implements_setter_199 = YPmet(FUNCODEREF(fun_environment_implements_setter_199),YPPsym((P)"environment-implements-setter"),T19,ENVNUL);
  T23 = BOUNDP(YastYenvironment_implements_setter);
  if (T23 != YPfalse) {
    T22 = CHKREF(YastYenvironment_implements_setter);
  } else {
    T22 = YPfalse;
  }
  T21 = fun_environment_implements_setter_199;
  T20 = CALL2(CHKREF(YPdefine_method),T22,T21);
  YastYenvironment_implements_setter = T20;
  regsym(&YastYenvironment_implements_setter,"ast","environment-implements-setter");
  T24 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_200 = YPmet(FUNCODEREF(fun_200),YPfalse,T24,ENVNUL);
  T25 = fun_200;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLstatic_global_environmentG),CHKREF(YastYenvironment_implements),CHKREF(YastYenvironment_implements_setter),CHKREF(YLlstG),T25);
  T27 = (P)YPpair(CHKREF(YastYLstatic_environmentG),Ynil);
  T26 = CALL3(CHKREF(YPisa),T27,Ynil,Ynil);
  YastYLstatic_empty_environmentG = T26;
  regsym(&YastYLstatic_empty_environmentG,"ast","<static-empty-environment>");
  T29 = (P)YPpair(CHKREF(YastYLstatic_empty_environmentG),Ynil);
  T28 = CALL3(CHKREF(YPisa),T29,Ynil,Ynil);
  YastYDempty_static_environment = T28;
  regsym(&YastYDempty_static_environment,"ast","$empty-static-environment");
  T31 = (P)YPpair(CHKREF(YastYLstatic_environmentG),Ynil);
  T30 = CALL3(CHKREF(YPisa),T31,Ynil,Ynil);
  YastYLstatic_local_environmentG = T30;
  regsym(&YastYLstatic_local_environmentG,"ast","<static-local-environment>");
  lit_69 = YPPsym((P)"global");
  T34 = YPsig(YPpair(YPPsym((P)"binding"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_201 = YPmet(FUNCODEREF(fun_201),YPfalse,T34,ENVNUL);
  T33 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_202 = YPmet(FUNCODEREF(fun_202),YPfalse,T33,ENVNUL);
  T32 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_env_object_name_203 = YPmet(FUNCODEREF(fun_env_object_name_203),YPPsym((P)"env-object-name"),T32,ENVNUL);
  T38 = BOUNDP(YwriteYenv_object_name);
  if (T38 != YPfalse) {
    T37 = CHKREF(YwriteYenv_object_name);
  } else {
    T37 = YPfalse;
  }
  T36 = fun_env_object_name_203;
  T35 = CALL2(CHKREF(YPdefine_method),T37,T36);
  YwriteYenv_object_name = T35;
  regsym(&YwriteYenv_object_name,"write","env-object-name");
  T39 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YastYLstatic_environmentG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_objectify_204 = YPmet(FUNCODEREF(fun_objectify_204),YPPsym((P)"objectify"),T39,ENVNUL);
  T43 = BOUNDP(YastYobjectify);
  if (T43 != YPfalse) {
    T42 = CHKREF(YastYobjectify);
  } else {
    T42 = YPfalse;
  }
  T41 = fun_objectify_204;
  T40 = CALL2(CHKREF(YPdefine_method),T42,T41);
  YastYobjectify = T40;
  regsym(&YastYobjectify,"ast","objectify");
  T44 = YPsig(YPpair(YPPsym((P)"f"),YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil)))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YastYLstatic_environmentG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_objectify_list_205 = YPmet(FUNCODEREF(fun_objectify_list_205),YPPsym((P)"objectify-list"),T44,ENVNUL);
  T48 = BOUNDP(YastYobjectify_list);
  if (T48 != YPfalse) {
    T47 = CHKREF(YastYobjectify_list);
  } else {
    T47 = YPfalse;
  }
  T46 = fun_objectify_list_205;
  T45 = CALL2(CHKREF(YPdefine_method),T47,T46);
  YastYobjectify_list = T45;
  regsym(&YastYobjectify_list,"ast","objectify-list");
  lit_70 = YPsb((P)"Magic or Macro binding expected %=");
  lit_71 = YPPsym((P)"macro");
  lit_72 = YPPsym((P)"magic");
  T49 = YPsig(YPpair(YPPsym((P)"f"),YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil)))),YPpair(CHKREF(YastYLmodule_bindingG),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YastYLstatic_environmentG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_objectify_list_206 = YPmet(FUNCODEREF(fun_objectify_list_206),YPPsym((P)"objectify-list"),T49,ENVNUL);
  T53 = BOUNDP(YastYobjectify_list);
  if (T53 != YPfalse) {
    T52 = CHKREF(YastYobjectify_list);
  } else {
    T52 = YPfalse;
  }
  T51 = fun_objectify_list_206;
  T50 = CALL2(CHKREF(YPdefine_method),T52,T51);
  YastYobjectify_list = T50;
  regsym(&YastYobjectify_list,"ast","objectify-list");
  T54 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLsymG),YPpair(CHKREF(YastYLstatic_environmentG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_objectify_207 = YPmet(FUNCODEREF(fun_objectify_207),YPPsym((P)"objectify"),T54,ENVNUL);
  T58 = BOUNDP(YastYobjectify);
  if (T58 != YPfalse) {
    T57 = CHKREF(YastYobjectify);
  } else {
    T57 = YPfalse;
  }
  T56 = fun_objectify_207;
  T55 = CALL2(CHKREF(YPdefine_method),T57,T56);
  YastYobjectify = T55;
  regsym(&YastYobjectify,"ast","objectify");
  T59 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YastYLmodule_bindingG),YPpair(CHKREF(YastYLstatic_environmentG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_objectify_208 = YPmet(FUNCODEREF(fun_objectify_208),YPPsym((P)"objectify"),T59,ENVNUL);
  T63 = BOUNDP(YastYobjectify);
  if (T63 != YPfalse) {
    T62 = CHKREF(YastYobjectify);
  } else {
    T62 = YPfalse;
  }
  T61 = fun_objectify_208;
  T60 = CALL2(CHKREF(YPdefine_method),T62,T61);
  YastYobjectify = T60;
  regsym(&YastYobjectify,"ast","objectify");
  T64 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YastYLprogramG),YPpair(CHKREF(YastYLstatic_environmentG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_objectify_209 = YPmet(FUNCODEREF(fun_objectify_209),YPPsym((P)"objectify"),T64,ENVNUL);
  T68 = BOUNDP(YastYobjectify);
  if (T68 != YPfalse) {
    T67 = CHKREF(YastYobjectify);
  } else {
    T67 = YPfalse;
  }
  T66 = fun_objectify_209;
  T65 = CALL2(CHKREF(YPdefine_method),T67,T66);
  YastYobjectify = T65;
  regsym(&YastYobjectify,"ast","objectify");
  T69 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(Ynil,YPpair(CHKREF(YastYLstatic_environmentG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_objectify_210 = YPmet(FUNCODEREF(fun_objectify_210),YPPsym((P)"objectify"),T69,ENVNUL);
  T73 = BOUNDP(YastYobjectify);
  if (T73 != YPfalse) {
    T72 = CHKREF(YastYobjectify);
  } else {
    T72 = YPfalse;
  }
  T71 = fun_objectify_210;
  T70 = CALL2(CHKREF(YPdefine_method),T72,T71);
  YastYobjectify = T70;
  regsym(&YastYobjectify,"ast","objectify");
  T74 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLstatic_environmentG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_objectify_211 = YPmet(FUNCODEREF(fun_objectify_211),YPPsym((P)"objectify"),T74,ENVNUL);
  T78 = BOUNDP(YastYobjectify);
  if (T78 != YPfalse) {
    T77 = CHKREF(YastYobjectify);
  } else {
    T77 = YPfalse;
  }
  T76 = fun_objectify_211;
  T75 = CALL2(CHKREF(YPdefine_method),T77,T76);
  YastYobjectify = T75;
  regsym(&YastYobjectify,"ast","objectify");
  T79 = YPsig(YPpair(YPPsym((P)"value"),YPpair(YPPsym((P)"r"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YastYLconstantG));
  fun_objectify_quotation_212 = YPmet(FUNCODEREF(fun_objectify_quotation_212),YPPsym((P)"objectify-quotation"),T79,ENVNUL);
  T83 = BOUNDP(YastYobjectify_quotation);
  if (T83 != YPfalse) {
    T82 = CHKREF(YastYobjectify_quotation);
  } else {
    T82 = YPfalse;
  }
  T81 = fun_objectify_quotation_212;
  T80 = CALL2(CHKREF(YPdefine_method),T82,T81);
  YastYobjectify_quotation = T80;
  regsym(&YastYobjectify_quotation,"ast","objectify-quotation");
  T84 = YPsig(YPpair(YPPsym((P)"value"),YPpair(YPPsym((P)"r"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YastYLraw_constantG));
  fun_objectify_raw_213 = YPmet(FUNCODEREF(fun_objectify_raw_213),YPPsym((P)"objectify-raw"),T84,ENVNUL);
  T88 = BOUNDP(YastYobjectify_raw);
  if (T88 != YPfalse) {
    T87 = CHKREF(YastYobjectify_raw);
  } else {
    T87 = YPfalse;
  }
  T86 = fun_objectify_raw_213;
  T85 = CALL2(CHKREF(YPdefine_method),T87,T86);
  YastYobjectify_raw = T85;
  regsym(&YastYobjectify_raw,"ast","objectify-raw");
  T89 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLsymG),YPpair(CHKREF(YastYLstatic_environmentG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_objectify_boundQ_214 = YPmet(FUNCODEREF(fun_objectify_boundQ_214),YPPsym((P)"objectify-bound?"),T89,ENVNUL);
  T93 = BOUNDP(YastYobjectify_boundQ);
  if (T93 != YPfalse) {
    T92 = CHKREF(YastYobjectify_boundQ);
  } else {
    T92 = YPfalse;
  }
  T91 = fun_objectify_boundQ_214;
  T90 = CALL2(CHKREF(YPdefine_method),T92,T91);
  YastYobjectify_boundQ = T90;
  regsym(&YastYobjectify_boundQ,"ast","objectify-bound?");
  T94 = YPsig(YPpair(YPPsym((P)"program"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),YPpair(YPPsym((P)"rt?"),Ynil)))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YastYLprogramG));
  fun_objectify_compile_time_215 = YPmet(FUNCODEREF(fun_objectify_compile_time_215),YPPsym((P)"objectify-compile-time"),T94,ENVNUL);
  T98 = BOUNDP(YastYobjectify_compile_time);
  if (T98 != YPfalse) {
    T97 = CHKREF(YastYobjectify_compile_time);
  } else {
    T97 = YPfalse;
  }
  T96 = fun_objectify_compile_time_215;
  T95 = CALL2(CHKREF(YPdefine_method),T97,T96);
  YastYobjectify_compile_time = T95;
  regsym(&YastYobjectify_compile_time,"ast","objectify-compile-time");
  T99 = YPsig(YPpair(YPPsym((P)"t"),YPpair(YPPsym((P)"c"),YPpair(YPPsym((P)"a"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))))),YPfalse,YPint((P)5),CHKREF(YastYLalternativeG));
  fun_objectify_alternative_216 = YPmet(FUNCODEREF(fun_objectify_alternative_216),YPPsym((P)"objectify-alternative"),T99,ENVNUL);
  T103 = BOUNDP(YastYobjectify_alternative);
  if (T103 != YPfalse) {
    T102 = CHKREF(YastYobjectify_alternative);
  } else {
    T102 = YPfalse;
  }
  T101 = fun_objectify_alternative_216;
  T100 = CALL2(CHKREF(YPdefine_method),T102,T101);
  YastYobjectify_alternative = T100;
  regsym(&YastYobjectify_alternative,"ast","objectify-alternative");
  T105 = YPsig(YPpair(YPPsym((P)"e*"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_217 = YPmet(FUNCODEREF(fun_loop_217),YPPsym((P)"loop"),T105,ENVNUL);
  T104 = YPsig(YPpair(YPPsym((P)"e*"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YastYLprogramG));
  fun_sequentialize_218 = YPmet(FUNCODEREF(fun_sequentialize_218),YPPsym((P)"sequentialize"),T104,ENVNUL);
  T109 = BOUNDP(YastYsequentialize);
  if (T109 != YPfalse) {
    T108 = CHKREF(YastYsequentialize);
  } else {
    T108 = YPfalse;
  }
  T107 = fun_sequentialize_218;
  T106 = CALL2(CHKREF(YPdefine_method),T108,T107);
  YastYsequentialize = T106;
  regsym(&YastYsequentialize,"ast","sequentialize");
  T111 = YPsig(YPpair(YPPsym((P)"res"),YPpair(YPPsym((P)"e*"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_219 = YPmet(FUNCODEREF(fun_loop_219),YPPsym((P)"loop"),T111,ENVNUL);
  T110 = YPsig(YPpair(YPPsym((P)"e*"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YastYLprogramG));
  fun_objectify_sequential_220 = YPmet(FUNCODEREF(fun_objectify_sequential_220),YPPsym((P)"objectify-sequential"),T110,ENVNUL);
  T115 = BOUNDP(YastYobjectify_sequential);
  if (T115 != YPfalse) {
    T114 = CHKREF(YastYobjectify_sequential);
  } else {
    T114 = YPfalse;
  }
  T113 = fun_objectify_sequential_220;
  T112 = CALL2(CHKREF(YPdefine_method),T114,T113);
  YastYobjectify_sequential = T112;
  regsym(&YastYobjectify_sequential,"ast","objectify-sequential");
  T117 = YPsig(YPpair(YPPsym((P)"e"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_221 = YPmet(FUNCODEREF(fun_221),YPfalse,T117,ENVNUL);
  T116 = YPsig(YPpair(YPPsym((P)"ff"),YPpair(YPPsym((P)"e*"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil)))),YPpair(CHKREF(YastYLast_methodG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YastYLprogramG));
  fun_objectify_application_222 = YPmet(FUNCODEREF(fun_objectify_application_222),YPPsym((P)"objectify-application"),T116,ENVNUL);
  T121 = BOUNDP(YastYobjectify_application);
  if (T121 != YPfalse) {
    T120 = CHKREF(YastYobjectify_application);
  } else {
    T120 = YPfalse;
  }
  T119 = fun_objectify_application_222;
  T118 = CALL2(CHKREF(YPdefine_method),T120,T119);
  YastYobjectify_application = T118;
  regsym(&YastYobjectify_application,"ast","objectify-application");
  T123 = YPsig(YPpair(YPPsym((P)"e"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_223 = YPmet(FUNCODEREF(fun_223),YPfalse,T123,ENVNUL);
  T122 = YPsig(YPpair(YPPsym((P)"ff"),YPpair(YPPsym((P)"e*"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil)))),YPpair(CHKREF(YastYLpredefined_referenceG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YastYLprogramG));
  fun_objectify_application_224 = YPmet(FUNCODEREF(fun_objectify_application_224),YPPsym((P)"objectify-application"),T122,ENVNUL);
  T127 = BOUNDP(YastYobjectify_application);
  if (T127 != YPfalse) {
    T126 = CHKREF(YastYobjectify_application);
  } else {
    T126 = YPfalse;
  }
  T125 = fun_objectify_application_224;
  T124 = CALL2(CHKREF(YPdefine_method),T126,T125);
  YastYobjectify_application = T124;
  regsym(&YastYobjectify_application,"ast","objectify-application");
  T129 = YPsig(YPpair(YPPsym((P)"e"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_225 = YPmet(FUNCODEREF(fun_225),YPfalse,T129,ENVNUL);
  T128 = YPsig(YPpair(YPPsym((P)"ff"),YPpair(YPPsym((P)"e*"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil)))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YastYLprogramG));
  fun_objectify_application_226 = YPmet(FUNCODEREF(fun_objectify_application_226),YPPsym((P)"objectify-application"),T128,ENVNUL);
  T133 = BOUNDP(YastYobjectify_application);
  if (T133 != YPfalse) {
    T132 = CHKREF(YastYobjectify_application);
  } else {
    T132 = YPfalse;
  }
  T131 = fun_objectify_application_226;
  T130 = CALL2(CHKREF(YPdefine_method),T132,T131);
  YastYobjectify_application = T130;
  regsym(&YastYobjectify_application,"ast","objectify-application");
  lit_73 = YPsb((P)"incorrect regular arity");
  T134 = YPsig(YPpair(YPPsym((P)"f"),YPpair(YPPsym((P)"e*"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil)))),YPpair(CHKREF(YastYLast_methodG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YastYLfix_letG));
  fun_process_closed_application_227 = YPmet(FUNCODEREF(fun_process_closed_application_227),YPPsym((P)"process-closed-application"),T134,ENVNUL);
  T138 = BOUNDP(YastYprocess_closed_application);
  if (T138 != YPfalse) {
    T137 = CHKREF(YastYprocess_closed_application);
  } else {
    T137 = YPfalse;
  }
  T136 = fun_process_closed_application_227;
  T135 = CALL2(CHKREF(YPdefine_method),T137,T136);
  YastYprocess_closed_application = T135;
  regsym(&YastYprocess_closed_application,"ast","process-closed-application");
  lit_74 = YPsb((P)"incorrect dotted arity");
  lit_75 = YPPsym((P)"%pair");
  lit_76 = YPPsym((P)"quote");
  T141 = YPsig(YPpair(YPPsym((P)"e*"),YPpair(YPPsym((P)"v*"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_gather_arguments_228 = YPmet(FUNCODEREF(fun_gather_arguments_228),YPPsym((P)"gather-arguments"),T141,ENVNUL);
  T140 = YPsig(YPpair(YPPsym((P)"e*"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_pack_nary_args_229 = YPmet(FUNCODEREF(fun_pack_nary_args_229),YPPsym((P)"pack-nary-args"),T140,ENVNUL);
  T139 = YPsig(YPpair(YPPsym((P)"f"),YPpair(YPPsym((P)"e*"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil)))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YastYLfix_letG));
  fun_process_nary_closed_application_230 = YPmet(FUNCODEREF(fun_process_nary_closed_application_230),YPPsym((P)"process-nary-closed-application"),T139,ENVNUL);
  T145 = BOUNDP(YastYprocess_nary_closed_application);
  if (T145 != YPfalse) {
    T144 = CHKREF(YastYprocess_nary_closed_application);
  } else {
    T144 = YPfalse;
  }
  T143 = fun_process_nary_closed_application_230;
  T142 = CALL2(CHKREF(YPdefine_method),T144,T143);
  YastYprocess_nary_closed_application = T142;
  regsym(&YastYprocess_nary_closed_application,"ast","process-nary-closed-application");
  T146 = YPsig(YPpair(YPPsym((P)"e*"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_convert2arguments_231 = YPmet(FUNCODEREF(fun_convert2arguments_231),YPPsym((P)"convert2arguments"),T146,ENVNUL);
  T150 = BOUNDP(YastYconvert2arguments);
  if (T150 != YPfalse) {
    T149 = CHKREF(YastYconvert2arguments);
  } else {
    T149 = YPfalse;
  }
  T148 = fun_convert2arguments_231;
  T147 = CALL2(CHKREF(YPdefine_method),T149,T148);
  YastYconvert2arguments = T147;
  regsym(&YastYconvert2arguments,"ast","convert2arguments");
  lit_77 = YPsb((P)"Unsupported Set!: %=");
  T151 = YPsig(YPpair(YPPsym((P)"binding"),YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil)))),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YastYLprogramG));
  fun_objectify_assignment_232 = YPmet(FUNCODEREF(fun_objectify_assignment_232),YPPsym((P)"objectify-assignment"),T151,ENVNUL);
  T155 = BOUNDP(YastYobjectify_assignment);
  if (T155 != YPfalse) {
    T154 = CHKREF(YastYobjectify_assignment);
  } else {
    T154 = YPfalse;
  }
  T153 = fun_objectify_assignment_232;
  T152 = CALL2(CHKREF(YPdefine_method),T154,T153);
  YastYobjectify_assignment = T152;
  regsym(&YastYobjectify_assignment,"ast","objectify-assignment");
  T156 = YPsig(YPpair(YPPsym((P)"binding"),YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil)))),YPpair(CHKREF(YLsymG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YastYLassignmentG));
  fun_objectify_assignment_233 = YPmet(FUNCODEREF(fun_objectify_assignment_233),YPPsym((P)"objectify-assignment"),T156,ENVNUL);
  T160 = BOUNDP(YastYobjectify_assignment);
  if (T160 != YPfalse) {
    T159 = CHKREF(YastYobjectify_assignment);
  } else {
    T159 = YPfalse;
  }
  T158 = fun_objectify_assignment_233;
  T157 = CALL2(CHKREF(YPdefine_method),T159,T158);
  YastYobjectify_assignment = T157;
  regsym(&YastYobjectify_assignment,"ast","objectify-assignment");
  T161 = YPsig(YPpair(YPPsym((P)"ref"),YPpair(YPPsym((P)"val"),Ynil)),YPpair(CHKREF(YastYLlocal_referenceG),YPpair(CHKREF(YastYLprogramG),Ynil)),YPfalse,YPint((P)2),CHKREF(YastYLlocal_assignmentG));
  fun_objectify_assignment_using_234 = YPmet(FUNCODEREF(fun_objectify_assignment_using_234),YPPsym((P)"objectify-assignment-using"),T161,ENVNUL);
  T165 = BOUNDP(YastYobjectify_assignment_using);
  if (T165 != YPfalse) {
    T164 = CHKREF(YastYobjectify_assignment_using);
  } else {
    T164 = YPfalse;
  }
  T163 = fun_objectify_assignment_using_234;
  T162 = CALL2(CHKREF(YPdefine_method),T164,T163);
  YastYobjectify_assignment_using = T162;
  regsym(&YastYobjectify_assignment_using,"ast","objectify-assignment-using");
  T166 = YPsig(YPpair(YPPsym((P)"ref"),YPpair(YPPsym((P)"val"),Ynil)),YPpair(CHKREF(YastYLglobal_referenceG),YPpair(CHKREF(YastYLprogramG),Ynil)),YPfalse,YPint((P)2),CHKREF(YastYLglobal_assignmentG));
  fun_objectify_assignment_using_235 = YPmet(FUNCODEREF(fun_objectify_assignment_using_235),YPPsym((P)"objectify-assignment-using"),T166,ENVNUL);
  T170 = BOUNDP(YastYobjectify_assignment_using);
  if (T170 != YPfalse) {
    T169 = CHKREF(YastYobjectify_assignment_using);
  } else {
    T169 = YPfalse;
  }
  T168 = fun_objectify_assignment_using_235;
  T167 = CALL2(CHKREF(YPdefine_method),T169,T168);
  YastYobjectify_assignment_using = T167;
  regsym(&YastYobjectify_assignment_using,"ast","objectify-assignment-using");
  T171 = YPsig(YPpair(YPPsym((P)"ref"),YPpair(YPPsym((P)"val"),Ynil)),YPpair(CHKREF(YastYLruntime_referenceG),YPpair(CHKREF(YastYLprogramG),Ynil)),YPfalse,YPint((P)2),CHKREF(YastYLruntime_assignmentG));
  fun_objectify_assignment_using_236 = YPmet(FUNCODEREF(fun_objectify_assignment_using_236),YPPsym((P)"objectify-assignment-using"),T171,ENVNUL);
  T175 = BOUNDP(YastYobjectify_assignment_using);
  if (T175 != YPfalse) {
    T174 = CHKREF(YastYobjectify_assignment_using);
  } else {
    T174 = YPfalse;
  }
  T173 = fun_objectify_assignment_using_236;
  T172 = CALL2(CHKREF(YPdefine_method),T174,T173);
  YastYobjectify_assignment_using = T172;
  regsym(&YastYobjectify_assignment_using,"ast","objectify-assignment-using");
  lit_78 = YPsb((P)"%s: warning: '%s' clobbers binding from %s.\n");
  T176 = YPsig(YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"defining-method?"),YPpair(YPPsym((P)"kind"),Ynil)))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_ast_define_binding_237 = YPmet(FUNCODEREF(fun_ast_define_binding_237),YPPsym((P)"ast-define-binding"),T176,ENVNUL);
  T180 = BOUNDP(YastYast_define_binding);
  if (T180 != YPfalse) {
    T179 = CHKREF(YastYast_define_binding);
  } else {
    T179 = YPfalse;
  }
  T178 = fun_ast_define_binding_237;
  T177 = CALL2(CHKREF(YPdefine_method),T179,T178);
  YastYast_define_binding = T177;
  regsym(&YastYast_define_binding,"ast","ast-define-binding");
  YastYTmacro_tracingQT = YPfalse;
  regsym(&YastYTmacro_tracingQT,"ast","*macro-tracing?*");
  lit_79 = YPPsym((P)"global");
  T181 = YPsig(YPpair(YPPsym((P)"var"),YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"r"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_objectify_definition_238 = YPmet(FUNCODEREF(fun_objectify_definition_238),YPPsym((P)"objectify-definition"),T181,ENVNUL);
  T185 = BOUNDP(YastYobjectify_definition);
  if (T185 != YPfalse) {
    T184 = CHKREF(YastYobjectify_definition);
  } else {
    T184 = YPfalse;
  }
  T183 = fun_objectify_definition_238;
  T182 = CALL2(CHKREF(YPdefine_method),T184,T183);
  YastYobjectify_definition = T182;
  regsym(&YastYobjectify_definition,"ast","objectify-definition");
  lit_80 = YPPsym((P)"macro");
  lit_81 = YPsb((P)"\n");
  lit_82 = YPsb((P)"  => ");
  lit_83 = YPsb((P)"\n");
  lit_84 = YPsb((P)"MACRO ");
  T187 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_expand_239 = YPmet(FUNCODEREF(fun_expand_239),YPPsym((P)"expand"),T187,ENVNUL);
  T186 = YPsig(YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"expander"),YPpair(YPPsym((P)"r"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YastYLmodule_bindingG));
  YPPmacro = YPmet(FUNCODEREF(YPPmacro),YPPsym((P)"%%macro"),T186,ENVNUL);
  T188 = YPPmacro;
  YPPmacro = T188;
  regsym(&YPPmacro,"boot","%%macro");
  T189 = YPsig(YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"rt?"),Ynil)))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_objectify_syntax_definition_241 = YPmet(FUNCODEREF(fun_objectify_syntax_definition_241),YPPsym((P)"objectify-syntax-definition"),T189,ENVNUL);
  T193 = BOUNDP(YastYobjectify_syntax_definition);
  if (T193 != YPfalse) {
    T192 = CHKREF(YastYobjectify_syntax_definition);
  } else {
    T192 = YPfalse;
  }
  T191 = fun_objectify_syntax_definition_241;
  T190 = CALL2(CHKREF(YPdefine_method),T192,T191);
  YastYobjectify_syntax_definition = T190;
  regsym(&YastYobjectify_syntax_definition,"ast","objectify-syntax-definition");
  lit_85 = YPPsym((P)"global");
  T194 = YPsig(YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"r"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YastYLast_function_definitionG));
  fun_objectify_function_definition_242 = YPmet(FUNCODEREF(fun_objectify_function_definition_242),YPPsym((P)"objectify-function-definition"),T194,ENVNUL);
  T198 = BOUNDP(YastYobjectify_function_definition);
  if (T198 != YPfalse) {
    T197 = CHKREF(YastYobjectify_function_definition);
  } else {
    T197 = YPfalse;
  }
  T196 = fun_objectify_function_definition_242;
  T195 = CALL2(CHKREF(YPdefine_method),T197,T196);
  YastYobjectify_function_definition = T195;
  regsym(&YastYobjectify_function_definition,"ast","objectify-function-definition");
  T199 = YPsig(YPpair(YPPsym((P)"kind"),Ynil),YPpair(CHKREF(YLsymG),Ynil),YPfalse,YPint((P)1),CHKREF(YastYLmodule_bindingG));
  YastYmodule_binding = YPmet(FUNCODEREF(YastYmodule_binding),YPPsym((P)"module-binding"),T199,ENVNUL);
  T200 = YastYmodule_binding;
  YastYmodule_binding = T200;
  regsym(&YastYmodule_binding,"ast","module-binding");
  lit_86 = YPPsym((P)"predefined");
  T201 = YPsig(YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"sig"),YPpair(YPPsym((P)"body"),YPpair(YPPsym((P)"r"),Ynil)))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YastYLast_primitive_definitionG));
  fun_objectify_primitive_definition_244 = YPmet(FUNCODEREF(fun_objectify_primitive_definition_244),YPPsym((P)"objectify-primitive-definition"),T201,ENVNUL);
  T205 = BOUNDP(YastYobjectify_primitive_definition);
  if (T205 != YPfalse) {
    T204 = CHKREF(YastYobjectify_primitive_definition);
  } else {
    T204 = YPfalse;
  }
  T203 = fun_objectify_primitive_definition_244;
  T202 = CALL2(CHKREF(YPdefine_method),T204,T203);
  YastYobjectify_primitive_definition = T202;
  regsym(&YastYobjectify_primitive_definition,"ast","objectify-primitive-definition");
  lit_87 = YPPsym((P)"global");
  T206 = YPsig(YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"sig"),YPpair(YPPsym((P)"r"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YastYLast_generic_definitionG));
  fun_objectify_generic_definition_245 = YPmet(FUNCODEREF(fun_objectify_generic_definition_245),YPPsym((P)"objectify-generic-definition"),T206,ENVNUL);
  T210 = BOUNDP(YastYobjectify_generic_definition);
  if (T210 != YPfalse) {
    T209 = CHKREF(YastYobjectify_generic_definition);
  } else {
    T209 = YPfalse;
  }
  T208 = fun_objectify_generic_definition_245;
  T207 = CALL2(CHKREF(YPdefine_method),T209,T208);
  YastYobjectify_generic_definition = T207;
  regsym(&YastYobjectify_generic_definition,"ast","objectify-generic-definition");
  lit_88 = YPPsym((P)"%define-method");
  lit_89 = YPPsym((P)"bound?");
  lit_90 = YPPsym((P)"if");
  lit_91 = YPPsym((P)"global");
  T211 = YPsig(YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"r"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YastYLast_method_definitionG));
  fun_objectify_method_definition_246 = YPmet(FUNCODEREF(fun_objectify_method_definition_246),YPPsym((P)"objectify-method-definition"),T211,ENVNUL);
  T215 = BOUNDP(YastYobjectify_method_definition);
  if (T215 != YPfalse) {
    T214 = CHKREF(YastYobjectify_method_definition);
  } else {
    T214 = YPfalse;
  }
  T213 = fun_objectify_method_definition_246;
  T212 = CALL2(CHKREF(YPdefine_method),T214,T213);
  YastYobjectify_method_definition = T212;
  regsym(&YastYobjectify_method_definition,"ast","objectify-method-definition");
  T216 = YPsig(YPpair(YPPsym((P)"sig"),YPpair(YPPsym((P)"body"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil)))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YastYLast_methodG));
  fun_objectify_function_247 = YPmet(FUNCODEREF(fun_objectify_function_247),YPPsym((P)"objectify-function"),T216,ENVNUL);
  T220 = BOUNDP(YastYobjectify_function);
  if (T220 != YPfalse) {
    T219 = CHKREF(YastYobjectify_function);
  } else {
    T219 = YPfalse;
  }
  T218 = fun_objectify_function_247;
  T217 = CALL2(CHKREF(YPdefine_method),T219,T218);
  YastYobjectify_function = T217;
  regsym(&YastYobjectify_function,"ast","objectify-function");
  lit_92 = YPPsym((P)"...");
  YastYDsexpr_optionals_tag = CHKREF(lit_92);
  regsym(&YastYDsexpr_optionals_tag,"ast","$sexpr-optionals-tag");
  lit_93 = YPPsym((P)"<opts>");
  YastYDsexpr_optionals_type_name = CHKREF(lit_93);
  regsym(&YastYDsexpr_optionals_type_name,"ast","$sexpr-optionals-type-name");
  T222 = YPsig(YPpair(YPPsym((P)"params"),YPpair(YPPsym((P)"nary?"),YPpair(YPPsym((P)"bindings"),YPpair(YPPsym((P)"types"),Ynil)))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_col_248 = YPmet(FUNCODEREF(fun_col_248),YPPsym((P)"col"),T222,ENVNUL);
  T221 = YPsig(YPpair(YPPsym((P)"sig"),YPpair(YPPsym((P)"r"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YastYLast_signatureG));
  fun_objectify_signature_249 = YPmet(FUNCODEREF(fun_objectify_signature_249),YPPsym((P)"objectify-signature"),T221,ENVNUL);
  T226 = BOUNDP(YastYobjectify_signature);
  if (T226 != YPfalse) {
    T225 = CHKREF(YastYobjectify_signature);
  } else {
    T225 = YPfalse;
  }
  T224 = fun_objectify_signature_249;
  T223 = CALL2(CHKREF(YPdefine_method),T225,T224);
  YastYobjectify_signature = T223;
  regsym(&YastYobjectify_signature,"ast","objectify-signature");
  lit_94 = YPsb((P)"DIDN'T FIND LOCAL BINDING %= IN %=");
  T229 = YPsig(YPpair(YPPsym((P)"j"),YPpair(YPPsym((P)"bindings"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_find_250 = YPmet(FUNCODEREF(fun_find_250),YPPsym((P)"find"),T229,ENVNUL);
  T228 = YPsig(YPpair(YPPsym((P)"i"),YPpair(YPPsym((P)"r"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_251 = YPmet(FUNCODEREF(fun_loop_251),YPPsym((P)"loop"),T228,ENVNUL);
  T227 = YPsig(YPpair(YPPsym((P)"binding"),YPpair(YPPsym((P)"r"),Ynil)),YPpair(CHKREF(YastYLlocal_bindingG),YPpair(CHKREF(YastYLstatic_local_environmentG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLtupG));
  fun_compute_local_reference_offsets_252 = YPmet(FUNCODEREF(fun_compute_local_reference_offsets_252),YPPsym((P)"compute-local-reference-offsets"),T227,ENVNUL);
  T233 = BOUNDP(YastYcompute_local_reference_offsets);
  if (T233 != YPfalse) {
    T232 = CHKREF(YastYcompute_local_reference_offsets);
  } else {
    T232 = YPfalse;
  }
  T231 = fun_compute_local_reference_offsets_252;
  T230 = CALL2(CHKREF(YPdefine_method),T232,T231);
  YastYcompute_local_reference_offsets = T230;
  regsym(&YastYcompute_local_reference_offsets,"ast","compute-local-reference-offsets");
  T234 = YPsig(YPpair(YPPsym((P)"n"),YPpair(YPPsym((P)"b"),YPpair(YPPsym((P)"r"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLlocal_bindingG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YastYLlocal_referenceG));
  fun_objectify_binding_253 = YPmet(FUNCODEREF(fun_objectify_binding_253),YPPsym((P)"objectify-binding"),T234,ENVNUL);
  T238 = BOUNDP(YastYobjectify_binding);
  if (T238 != YPfalse) {
    T237 = CHKREF(YastYobjectify_binding);
  } else {
    T237 = YPfalse;
  }
  T236 = fun_objectify_binding_253;
  T235 = CALL2(CHKREF(YPdefine_method),T237,T236);
  YastYobjectify_binding = T235;
  regsym(&YastYobjectify_binding,"ast","objectify-binding");
  lit_95 = YPsb((P)"Unknown binding-kind %=");
  lit_96 = YPPsym((P)"runtime");
  lit_97 = YPPsym((P)"predefined");
  lit_98 = YPPsym((P)"global");
  T239 = YPsig(YPpair(YPPsym((P)"b"),Ynil),YPpair(CHKREF(YastYLmodule_bindingG),Ynil),YPfalse,YPint((P)1),CHKREF(YastYLreferenceG));
  fun_binding_reference_prototype_254 = YPmet(FUNCODEREF(fun_binding_reference_prototype_254),YPPsym((P)"binding-reference-prototype"),T239,ENVNUL);
  T243 = BOUNDP(YastYbinding_reference_prototype);
  if (T243 != YPfalse) {
    T242 = CHKREF(YastYbinding_reference_prototype);
  } else {
    T242 = YPfalse;
  }
  T241 = fun_binding_reference_prototype_254;
  T240 = CALL2(CHKREF(YPdefine_method),T242,T241);
  YastYbinding_reference_prototype = T240;
  regsym(&YastYbinding_reference_prototype,"ast","binding-reference-prototype");
  lit_99 = YPPsym((P)"macro");
  lit_100 = YPPsym((P)"magic");
  T244 = YPsig(YPpair(YPPsym((P)"n"),YPpair(YPPsym((P)"b"),YPpair(YPPsym((P)"r"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLmodule_bindingG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_objectify_binding_255 = YPmet(FUNCODEREF(fun_objectify_binding_255),YPPsym((P)"objectify-binding"),T244,ENVNUL);
  T248 = BOUNDP(YastYobjectify_binding);
  if (T248 != YPfalse) {
    T247 = CHKREF(YastYobjectify_binding);
  } else {
    T247 = YPfalse;
  }
  T246 = fun_objectify_binding_255;
  T245 = CALL2(CHKREF(YPdefine_method),T247,T246);
  YastYobjectify_binding = T245;
  regsym(&YastYobjectify_binding,"ast","objectify-binding");
  T249 = YPsig(YPpair(YPPsym((P)"n"),YPpair(YPPsym((P)"b"),YPpair(YPPsym((P)"r"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YastYLreferenceG));
  fun_objectify_binding_256 = YPmet(FUNCODEREF(fun_objectify_binding_256),YPPsym((P)"objectify-binding"),T249,ENVNUL);
  T253 = BOUNDP(YastYobjectify_binding);
  if (T253 != YPfalse) {
    T252 = CHKREF(YastYobjectify_binding);
  } else {
    T252 = YPfalse;
  }
  T251 = fun_objectify_binding_256;
  T250 = CALL2(CHKREF(YPdefine_method),T252,T251);
  YastYobjectify_binding = T250;
  regsym(&YastYobjectify_binding,"ast","objectify-binding");
  lit_101 = YPPsym((P)"<any>");
  T254 = YPsig(YPpair(YPPsym((P)"r"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_default_type_257 = YPmet(FUNCODEREF(fun_default_type_257),YPPsym((P)"default-type"),T254,ENVNUL);
  T258 = BOUNDP(YastYdefault_type);
  if (T258 != YPfalse) {
    T257 = CHKREF(YastYdefault_type);
  } else {
    T257 = YPfalse;
  }
  T256 = fun_default_type_257;
  T255 = CALL2(CHKREF(YPdefine_method),T257,T256);
  YastYdefault_type = T255;
  regsym(&YastYdefault_type,"ast","default-type");
  lit_102 = YPPsym((P)"global");
  T259 = YPsig(YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"r"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YastYLglobal_referenceG));
  fun_objectify_free_global_reference_258 = YPmet(FUNCODEREF(fun_objectify_free_global_reference_258),YPPsym((P)"objectify-free-global-reference"),T259,ENVNUL);
  T263 = BOUNDP(YastYobjectify_free_global_reference);
  if (T263 != YPfalse) {
    T262 = CHKREF(YastYobjectify_free_global_reference);
  } else {
    T262 = YPfalse;
  }
  T261 = fun_objectify_free_global_reference_258;
  T260 = CALL2(CHKREF(YPdefine_method),T262,T261);
  YastYobjectify_free_global_reference = T260;
  regsym(&YastYobjectify_free_global_reference,"ast","objectify-free-global-reference");
  T264 = YPsig(YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"r"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_objectify_symbol_259 = YPmet(FUNCODEREF(fun_objectify_symbol_259),YPPsym((P)"objectify-symbol"),T264,ENVNUL);
  T268 = BOUNDP(YastYobjectify_symbol);
  if (T268 != YPfalse) {
    T267 = CHKREF(YastYobjectify_symbol);
  } else {
    T267 = YPfalse;
  }
  T266 = fun_objectify_symbol_259;
  T265 = CALL2(CHKREF(YPdefine_method),T267,T266);
  YastYobjectify_symbol = T265;
  regsym(&YastYobjectify_symbol,"ast","objectify-symbol");
  lit_103 = YPPsym((P)"<fun>");
  T269 = YPsig(YPpair(YPPsym((P)"r"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_ftype_260 = YPmet(FUNCODEREF(fun_ftype_260),YPPsym((P)"ftype"),T269,ENVNUL);
  T273 = BOUNDP(YastYftype);
  if (T273 != YPfalse) {
    T272 = CHKREF(YastYftype);
  } else {
    T272 = YPfalse;
  }
  T271 = fun_ftype_260;
  T270 = CALL2(CHKREF(YPdefine_method),T272,T271);
  YastYftype = T270;
  regsym(&YastYftype,"ast","ftype");
  T276 = (P)YPpair(CHKREF(YastYLprogramsG),Ynil);
  T275 = (P)YPpair(CHKREF(YLlstG),T276);
  T274 = CALL3(CHKREF(YPisa),T275,Ynil,Ynil);
  YastYLfunctionsG = T274;
  regsym(&YastYLfunctionsG,"ast","<functions>");
  T282 = (P)YPpair(CHKREF(YastYLfunctionsG),Ynil);
  T281 = (P)YPpair(CHKREF(Ytail),Ynil);
  T280 = (P)YPpair(CHKREF(Yhead),T281);
  T279 = (P)YPpair(YPfalse,Ynil);
  T278 = (P)YPpair(YPfalse,T279);
  T277 = CALL3(CHKREF(YPisa),T282,T280,T278);
  YastYDfunctions_empty = T277;
  regsym(&YastYDfunctions_empty,"ast","$functions-empty");
  T283 = YPsig(YPpair(YPPsym((P)"p"),YPpair(YPPsym((P)"x"),Ynil)),YPpair(CHKREF(YastYLfunctionsG),YPpair(CHKREF(YastYLfunctionsG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_as_261 = YPmet(FUNCODEREF(fun_as_261),YPPsym((P)"as"),T283,ENVNUL);
  T287 = BOUNDP(YruntimeYas);
  if (T287 != YPfalse) {
    T286 = CHKREF(YruntimeYas);
  } else {
    T286 = YPfalse;
  }
  T285 = fun_as_261;
  T284 = CALL2(CHKREF(YPdefine_method),T286,T285);
  YruntimeYas = T284;
  regsym(&YruntimeYas,"runtime","as");
  T290 = YPsig(YPpair(YPPsym((P)"p"),YPpair(YPPsym((P)"x"),Ynil)),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YastYLfunctionsG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  T289 = fun_as_262 = YPmet(FUNCODEREF(fun_as_262),YPPsym((P)"as"),T290,ENVNUL);
  T295 = BOUNDP(YruntimeYas);
  if (T295 != YPfalse) {
    T294 = CHKREF(YruntimeYas);
  } else {
    T294 = YPfalse;
  }
  T293 = fun_as_262;
  T292 = CALL2(CHKREF(YPdefine_method),T294,T293);
  T291 = YruntimeYas = T292;
  regsym(&YruntimeYas,"runtime","as");
  T288 = T291;
  return T288;
}

P YastY___main_5___() {
  P T362,T361,T360,T359,T358,T357,T356,T355,T354,T353,T352,T351,T350,T349,T348,T347;
  P T346,T345,T344,T343,T342,T341,T340,T339,T338,T337,T336,T335,T334,T333,T332,T331;
  P T330,T329,T328,T327,T326,T325,T324,T323,T322,T321,T320,T319,T318,T317,T316,T315;
  P T314,T313,T312,T311,T310,T309,T308,T307,T306,T305,T304,T303,T302,T301,T300,T299;
  P T298,T297,T296,T295,T294,T293,T292,T291,T290,T289,T288,T287,T286,T285,T284,T283;
  P T282,T281,T280,T279,T278,T277,T276,T275,T274,T273,T272,T271,T270,T269,T268,T267;
  P T266,T265,T264,T263,T262,T261,T260,T259,T258,T257,T256,T255,T254,T253,T252,T251;
  P T250,T249,T248,T247,T246,T245,T244,T243,T242,T241,T240,T239,T238,T237,T236,T235;
  P T234,T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219;
  P T218,T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203;
  P T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187;
  P T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171;
  P T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155;
  P T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139;
  P T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123;
  P T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107;
  P T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91;
  P T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75;
  P T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPpair(YPPsym((P)"p"),YPpair(YPPsym((P)"x"),Ynil)),YPpair(CHKREF(YastYLfunctionsG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_as_263 = YPmet(FUNCODEREF(fun_as_263),YPPsym((P)"as"),T0,ENVNUL);
  T4 = BOUNDP(YruntimeYas);
  if (T4 != YPfalse) {
    T3 = CHKREF(YruntimeYas);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_as_263;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YruntimeYas = T1;
  regsym(&YruntimeYas,"runtime","as");
  T5 = YPsig(YPpair(YPPsym((P)"h"),YPpair(YPPsym((P)"t"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYfunctions = YPmet(FUNCODEREF(YastYfunctions),YPPsym((P)"functions"),T5,ENVNUL);
  T6 = YastYfunctions;
  YastYfunctions = T6;
  regsym(&YastYfunctions,"ast","functions");
  T7 = YPsig(YPpair(YPPsym((P)"e"),Ynil),YPpair(CHKREF(YastYLfunctionsG),Ynil),YPfalse,YPint((P)1),CHKREF(YastYLfunctionsG));
  fun_empty_265 = YPmet(FUNCODEREF(fun_empty_265),YPPsym((P)"empty"),T7,ENVNUL);
  T11 = BOUNDP(YruntimeYempty);
  if (T11 != YPfalse) {
    T10 = CHKREF(YruntimeYempty);
  } else {
    T10 = YPfalse;
  }
  T9 = fun_empty_265;
  T8 = CALL2(CHKREF(YPdefine_method),T10,T9);
  YruntimeYempty = T8;
  regsym(&YruntimeYempty,"runtime","empty");
  T14 = YPsig(YPpair(YPPsym((P)"f"),YPpair(YPPsym((P)"b"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_266 = YPmet(FUNCODEREF(fun_266),YPfalse,T14,ENVNUL);
  T13 = YPsig(YPpair(YPPsym((P)"n"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_267 = YPmet(FUNCODEREF(fun_267),YPfalse,T13,ENVNUL);
  T12 = YPsig(YPpair(YPPsym((P)"names"),YPpair(YPPsym((P)"sigs"),YPpair(YPPsym((P)"bodies"),YPpair(YPPsym((P)"body"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil)))))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))))),YPfalse,YPint((P)6),CHKREF(YastYLlocalsG));
  fun_objectify_locals_268 = YPmet(FUNCODEREF(fun_objectify_locals_268),YPPsym((P)"objectify-locals"),T12,ENVNUL);
  T18 = BOUNDP(YastYobjectify_locals);
  if (T18 != YPfalse) {
    T17 = CHKREF(YastYobjectify_locals);
  } else {
    T17 = YPfalse;
  }
  T16 = fun_objectify_locals_268;
  T15 = CALL2(CHKREF(YPdefine_method),T17,T16);
  YastYobjectify_locals = T15;
  regsym(&YastYobjectify_locals,"ast","objectify-locals");
  T19 = YPsig(YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"body"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil)))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YastYLbind_exitG));
  fun_objectify_bind_exit_269 = YPmet(FUNCODEREF(fun_objectify_bind_exit_269),YPPsym((P)"objectify-bind-exit"),T19,ENVNUL);
  T23 = BOUNDP(YastYobjectify_bind_exit);
  if (T23 != YPfalse) {
    T22 = CHKREF(YastYobjectify_bind_exit);
  } else {
    T22 = YPfalse;
  }
  T21 = fun_objectify_bind_exit_269;
  T20 = CALL2(CHKREF(YPdefine_method),T22,T21);
  YastYobjectify_bind_exit = T20;
  regsym(&YastYobjectify_bind_exit,"ast","objectify-bind-exit");
  T24 = YPsig(YPpair(YPPsym((P)"protected-form"),YPpair(YPPsym((P)"cleanup-forms"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil)))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YastYLunwind_protectG));
  fun_objectify_unwind_protect_270 = YPmet(FUNCODEREF(fun_objectify_unwind_protect_270),YPPsym((P)"objectify-unwind-protect"),T24,ENVNUL);
  T28 = BOUNDP(YastYobjectify_unwind_protect);
  if (T28 != YPfalse) {
    T27 = CHKREF(YastYobjectify_unwind_protect);
  } else {
    T27 = YPfalse;
  }
  T26 = fun_objectify_unwind_protect_270;
  T25 = CALL2(CHKREF(YPdefine_method),T27,T26);
  YastYobjectify_unwind_protect = T25;
  regsym(&YastYobjectify_unwind_protect,"ast","objectify-unwind-protect");
  T29 = YPsig(YPpair(YPPsym((P)"handler"),YPpair(YPPsym((P)"body"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil)))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YastYLmonitorG));
  fun_objectify_monitor_271 = YPmet(FUNCODEREF(fun_objectify_monitor_271),YPPsym((P)"objectify-monitor"),T29,ENVNUL);
  T33 = BOUNDP(YastYobjectify_monitor);
  if (T33 != YPfalse) {
    T32 = CHKREF(YastYobjectify_monitor);
  } else {
    T32 = YPfalse;
  }
  T31 = fun_objectify_monitor_271;
  T30 = CALL2(CHKREF(YPdefine_method),T32,T31);
  YastYobjectify_monitor = T30;
  regsym(&YastYobjectify_monitor,"ast","objectify-monitor");
  lit_104 = YPsb((P)"Can't export undefined binding %s.\n");
  lit_105 = YPsb((P)"Can only export bindings from target environment.\n");
  T35 = YPsig(YPpair(YPPsym((P)"x-1226"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_x_1228_272 = YPmet(FUNCODEREF(fun_x_1228_272),YPPsym((P)"x-1228"),T35,ENVNUL);
  T34 = YPsig(YPpair(YPPsym((P)"names"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YastYLprogramG));
  fun_objectify_export_273 = YPmet(FUNCODEREF(fun_objectify_export_273),YPPsym((P)"objectify-export"),T34,ENVNUL);
  T39 = BOUNDP(YastYobjectify_export);
  if (T39 != YPfalse) {
    T38 = CHKREF(YastYobjectify_export);
  } else {
    T38 = YPfalse;
  }
  T37 = fun_objectify_export_273;
  T36 = CALL2(CHKREF(YPdefine_method),T38,T37);
  YastYobjectify_export = T36;
  regsym(&YastYobjectify_export,"ast","objectify-export");
  lit_106 = YPsb((P)"warning: '%s' from %s clobbers local binding.\n");
  T40 = YPsig(YPpair(YPPsym((P)"b"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLmodule_bindingG),YPpair(CHKREF(YastYLstatic_global_environmentG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYimport_globalX = YPmet(FUNCODEREF(YastYimport_globalX),YPPsym((P)"import-global!"),T40,ENVNUL);
  T41 = YastYimport_globalX;
  YastYimport_globalX = T41;
  regsym(&YastYimport_globalX,"ast","import-global!");
  T42 = YPsig(YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YastYLprogramG));
  fun_objectify_use_module_275 = YPmet(FUNCODEREF(fun_objectify_use_module_275),YPPsym((P)"objectify-use-module"),T42,ENVNUL);
  T46 = BOUNDP(YastYobjectify_use_module);
  if (T46 != YPfalse) {
    T45 = CHKREF(YastYobjectify_use_module);
  } else {
    T45 = YPfalse;
  }
  T44 = fun_objectify_use_module_275;
  T43 = CALL2(CHKREF(YPdefine_method),T45,T44);
  YastYobjectify_use_module = T43;
  regsym(&YastYobjectify_use_module,"ast","objectify-use-module");
  lit_107 = YPsb((P)"Expected Pattern List %=\n");
  T47 = YPsig(YPpair(YPPsym((P)"pat"),YPpair(YPPsym((P)"var"),YPpair(YPPsym((P)"fail"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_expand_bind_list_276 = YPmet(FUNCODEREF(fun_expand_bind_list_276),YPPsym((P)"expand-bind-list"),T47,ENVNUL);
  T51 = BOUNDP(YastYexpand_bind_list);
  if (T51 != YPfalse) {
    T50 = CHKREF(YastYexpand_bind_list);
  } else {
    T50 = YPfalse;
  }
  T49 = fun_expand_bind_list_276;
  T48 = CALL2(CHKREF(YPdefine_method),T50,T49);
  YastYexpand_bind_list = T48;
  regsym(&YastYexpand_bind_list,"ast","expand-bind-list");
  lit_108 = YPPsym((P)"match-empty-list");
  T52 = YPsig(YPpair(YPPsym((P)"pat"),YPpair(YPPsym((P)"var"),YPpair(YPPsym((P)"fail"),Ynil))),YPpair(Ynil,YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLlstG));
  fun_expand_bind_list_277 = YPmet(FUNCODEREF(fun_expand_bind_list_277),YPPsym((P)"expand-bind-list"),T52,ENVNUL);
  T56 = BOUNDP(YastYexpand_bind_list);
  if (T56 != YPfalse) {
    T55 = CHKREF(YastYexpand_bind_list);
  } else {
    T55 = YPfalse;
  }
  T54 = fun_expand_bind_list_277;
  T53 = CALL2(CHKREF(YPdefine_method),T55,T54);
  YastYexpand_bind_list = T53;
  regsym(&YastYexpand_bind_list,"ast","expand-bind-list");
  lit_109 = YPsb((P)"Unquote Splicing Unexpected Here %=\n");
  lit_110 = YPsb((P)"Unquote Unexpected Here %=\n");
  T57 = YPsig(YPpair(YPPsym((P)"pat"),YPpair(YPPsym((P)"var"),YPpair(YPPsym((P)"fail"),Ynil))),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLlstG));
  fun_expand_bind_list_278 = YPmet(FUNCODEREF(fun_expand_bind_list_278),YPPsym((P)"expand-bind-list"),T57,ENVNUL);
  T61 = BOUNDP(YastYexpand_bind_list);
  if (T61 != YPfalse) {
    T60 = CHKREF(YastYexpand_bind_list);
  } else {
    T60 = YPfalse;
  }
  T59 = fun_expand_bind_list_278;
  T58 = CALL2(CHKREF(YPdefine_method),T60,T59);
  YastYexpand_bind_list = T58;
  regsym(&YastYexpand_bind_list,"ast","expand-bind-list");
  lit_111 = YPPsym((P)"match-empty-list");
  T62 = YPsig(YPpair(YPPsym((P)"pat"),YPpair(YPPsym((P)"var"),YPpair(YPPsym((P)"fail"),Ynil))),YPpair(Ynil,YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_expand_bind_listT_279 = YPmet(FUNCODEREF(fun_expand_bind_listT_279),YPPsym((P)"expand-bind-list*"),T62,ENVNUL);
  T66 = BOUNDP(YastYexpand_bind_listT);
  if (T66 != YPfalse) {
    T65 = CHKREF(YastYexpand_bind_listT);
  } else {
    T65 = YPfalse;
  }
  T64 = fun_expand_bind_listT_279;
  T63 = CALL2(CHKREF(YPdefine_method),T65,T64);
  YastYexpand_bind_listT = T63;
  regsym(&YastYexpand_bind_listT,"ast","expand-bind-list*");
  lit_112 = YPPsym((P)"let");
  T67 = YPsig(YPpair(YPPsym((P)"pat"),YPpair(YPPsym((P)"var"),YPpair(YPPsym((P)"fail"),Ynil))),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_expand_bind_listT_280 = YPmet(FUNCODEREF(fun_expand_bind_listT_280),YPPsym((P)"expand-bind-list*"),T67,ENVNUL);
  T71 = BOUNDP(YastYexpand_bind_listT);
  if (T71 != YPfalse) {
    T70 = CHKREF(YastYexpand_bind_listT);
  } else {
    T70 = YPfalse;
  }
  T69 = fun_expand_bind_listT_280;
  T68 = CALL2(CHKREF(YPdefine_method),T70,T69);
  YastYexpand_bind_listT = T68;
  regsym(&YastYexpand_bind_listT,"ast","expand-bind-list*");
  lit_113 = YPPsym((P)"quote");
  lit_114 = YPPsym((P)"match-atom");
  T72 = YPsig(YPpair(YPPsym((P)"pat"),YPpair(YPPsym((P)"var"),YPpair(YPPsym((P)"fail"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_expand_bind_element_281 = YPmet(FUNCODEREF(fun_expand_bind_element_281),YPPsym((P)"expand-bind-element"),T72,ENVNUL);
  T76 = BOUNDP(YastYexpand_bind_element);
  if (T76 != YPfalse) {
    T75 = CHKREF(YastYexpand_bind_element);
  } else {
    T75 = YPfalse;
  }
  T74 = fun_expand_bind_element_281;
  T73 = CALL2(CHKREF(YPdefine_method),T75,T74);
  YastYexpand_bind_element = T73;
  regsym(&YastYexpand_bind_element,"ast","expand-bind-element");
  lit_115 = YPPsym((P)"tail");
  lit_116 = YPPsym((P)"match-sublist");
  lit_117 = YPPsym((P)"let");
  lit_118 = YPPsym((P)"seq");
  lit_119 = YPPsym((P)"quote");
  lit_120 = YPPsym((P)"set");
  lit_121 = YPPsym((P)"seq");
  lit_122 = YPPsym((P)"tail");
  lit_123 = YPPsym((P)"match-unquote");
  lit_124 = YPPsym((P)"set");
  lit_125 = YPPsym((P)"seq");
  T77 = YPsig(YPpair(YPPsym((P)"pat"),YPpair(YPPsym((P)"var"),YPpair(YPPsym((P)"fail"),Ynil))),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_expand_bind_element_282 = YPmet(FUNCODEREF(fun_expand_bind_element_282),YPPsym((P)"expand-bind-element"),T77,ENVNUL);
  T81 = BOUNDP(YastYexpand_bind_element);
  if (T81 != YPfalse) {
    T80 = CHKREF(YastYexpand_bind_element);
  } else {
    T80 = YPfalse;
  }
  T79 = fun_expand_bind_element_282;
  T78 = CALL2(CHKREF(YPdefine_method),T80,T79);
  YastYexpand_bind_element = T78;
  regsym(&YastYexpand_bind_element,"ast","expand-bind-element");
  lit_126 = YPsb((P)"Match Pattern Failure");
  lit_127 = YPPsym((P)"<lst>");
  lit_128 = YPPsym((P)"isa?");
  lit_129 = YPPsym((P)"if");
  T82 = YPsig(YPpair(YPPsym((P)"pat"),YPpair(YPPsym((P)"var"),YPpair(YPPsym((P)"fail"),Ynil))),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_expand_pattern_283 = YPmet(FUNCODEREF(fun_expand_pattern_283),YPPsym((P)"expand-pattern"),T82,ENVNUL);
  T86 = BOUNDP(YastYexpand_pattern);
  if (T86 != YPfalse) {
    T85 = CHKREF(YastYexpand_pattern);
  } else {
    T85 = YPfalse;
  }
  T84 = fun_expand_pattern_283;
  T83 = CALL2(CHKREF(YPdefine_method),T85,T84);
  YastYexpand_pattern = T83;
  regsym(&YastYexpand_pattern,"ast","expand-pattern");
  lit_130 = YPPsym((P)"let");
  lit_131 = YPPsym((P)"let");
  lit_132 = YPPsym((P)"return");
  lit_133 = YPPsym((P)"...");
  lit_134 = YPPsym((P)"args");
  lit_135 = YPPsym((P)"<str>");
  lit_136 = YPPsym((P)"msg");
  lit_137 = YPPsym((P)"loc");
  lit_138 = YPPsym((P)"return");
  lit_139 = YPPsym((P)"lab");
  T88 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_284 = YPmet(FUNCODEREF(fun_284),YPfalse,T88,ENVNUL);
  T87 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_expand_syntax_if_285 = YPmet(FUNCODEREF(fun_expand_syntax_if_285),YPPsym((P)"expand-syntax-if"),T87,ENVNUL);
  T92 = BOUNDP(YastYexpand_syntax_if);
  if (T92 != YPfalse) {
    T91 = CHKREF(YastYexpand_syntax_if);
  } else {
    T91 = YPfalse;
  }
  T90 = fun_expand_syntax_if_285;
  T89 = CALL2(CHKREF(YPdefine_method),T91,T90);
  YastYexpand_syntax_if = T89;
  regsym(&YastYexpand_syntax_if,"ast","expand-syntax-if");
  T93 = YPsig(YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"bindings"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),CHKREF(YastYLstatic_environmentG));
  fun_r_extendT_286 = YPmet(FUNCODEREF(fun_r_extendT_286),YPPsym((P)"r-extend*"),T93,ENVNUL);
  T97 = BOUNDP(YastYr_extendT);
  if (T97 != YPfalse) {
    T96 = CHKREF(YastYr_extendT);
  } else {
    T96 = YPfalse;
  }
  T95 = fun_r_extendT_286;
  T94 = CALL2(CHKREF(YPdefine_method),T96,T95);
  YastYr_extendT = T94;
  regsym(&YastYr_extendT,"ast","r-extend*");
  T98 = YPsig(YPpair(YPPsym((P)"binding"),YPpair(YPPsym((P)"r"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_insert_globalX_287 = YPmet(FUNCODEREF(fun_insert_globalX_287),YPPsym((P)"insert-global!"),T98,ENVNUL);
  T102 = BOUNDP(YastYinsert_globalX);
  if (T102 != YPfalse) {
    T101 = CHKREF(YastYinsert_globalX);
  } else {
    T101 = YPfalse;
  }
  T100 = fun_insert_globalX_287;
  T99 = CALL2(CHKREF(YPdefine_method),T101,T100);
  YastYinsert_globalX = T99;
  regsym(&YastYinsert_globalX,"ast","insert-global!");
  T104 = YPsig(YPpair(YPPsym((P)"b"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_288 = YPmet(FUNCODEREF(fun_288),YPfalse,T104,ENVNUL);
  T103 = YPsig(YPpair(YPPsym((P)"bindings"),YPpair(YPPsym((P)"r"),Ynil)),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_insert_globalsX_289 = YPmet(FUNCODEREF(fun_insert_globalsX_289),YPPsym((P)"insert-globals!"),T103,ENVNUL);
  T108 = BOUNDP(YastYinsert_globalsX);
  if (T108 != YPfalse) {
    T107 = CHKREF(YastYinsert_globalsX);
  } else {
    T107 = YPfalse;
  }
  T106 = fun_insert_globalsX_289;
  T105 = CALL2(CHKREF(YPdefine_method),T107,T106);
  YastYinsert_globalsX = T105;
  regsym(&YastYinsert_globalsX,"ast","insert-globals!");
  T109 = YPsig(YPpair(YPPsym((P)"r"),Ynil),YPpair(CHKREF(YastYLstatic_local_environmentG),Ynil),YPfalse,YPint((P)1),CHKREF(YastYLstatic_global_environmentG));
  fun_find_static_global_environment_290 = YPmet(FUNCODEREF(fun_find_static_global_environment_290),YPPsym((P)"find-static-global-environment"),T109,ENVNUL);
  T113 = BOUNDP(YastYfind_static_global_environment);
  if (T113 != YPfalse) {
    T112 = CHKREF(YastYfind_static_global_environment);
  } else {
    T112 = YPfalse;
  }
  T111 = fun_find_static_global_environment_290;
  T110 = CALL2(CHKREF(YPdefine_method),T112,T111);
  YastYfind_static_global_environment = T110;
  regsym(&YastYfind_static_global_environment,"ast","find-static-global-environment");
  T114 = YPsig(YPpair(YPPsym((P)"r"),Ynil),YPpair(CHKREF(YastYLstatic_global_environmentG),Ynil),YPfalse,YPint((P)1),CHKREF(YastYLstatic_global_environmentG));
  fun_find_static_global_environment_291 = YPmet(FUNCODEREF(fun_find_static_global_environment_291),YPPsym((P)"find-static-global-environment"),T114,ENVNUL);
  T118 = BOUNDP(YastYfind_static_global_environment);
  if (T118 != YPfalse) {
    T117 = CHKREF(YastYfind_static_global_environment);
  } else {
    T117 = YPfalse;
  }
  T116 = fun_find_static_global_environment_291;
  T115 = CALL2(CHKREF(YPdefine_method),T117,T116);
  YastYfind_static_global_environment = T115;
  regsym(&YastYfind_static_global_environment,"ast","find-static-global-environment");
  T119 = YPsig(YPpair(YPPsym((P)"r"),Ynil),YPpair(CHKREF(YastYLstatic_environmentG),Ynil),YPfalse,YPint((P)1),CHKREF(YastYLstatic_global_environmentG));
  fun_find_syntax_environment_292 = YPmet(FUNCODEREF(fun_find_syntax_environment_292),YPPsym((P)"find-syntax-environment"),T119,ENVNUL);
  T123 = BOUNDP(YastYfind_syntax_environment);
  if (T123 != YPfalse) {
    T122 = CHKREF(YastYfind_syntax_environment);
  } else {
    T122 = YPfalse;
  }
  T121 = fun_find_syntax_environment_292;
  T120 = CALL2(CHKREF(YPdefine_method),T122,T121);
  YastYfind_syntax_environment = T120;
  regsym(&YastYfind_syntax_environment,"ast","find-syntax-environment");
  T124 = YPsig(YPpair(YPPsym((P)"r"),Ynil),YPpair(CHKREF(YastYLstatic_environmentG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_find_environment_module_293 = YPmet(FUNCODEREF(fun_find_environment_module_293),YPPsym((P)"find-environment-module"),T124,ENVNUL);
  T128 = BOUNDP(YastYfind_environment_module);
  if (T128 != YPfalse) {
    T127 = CHKREF(YastYfind_environment_module);
  } else {
    T127 = YPfalse;
  }
  T126 = fun_find_environment_module_293;
  T125 = CALL2(CHKREF(YPdefine_method),T127,T126);
  YastYfind_environment_module = T125;
  regsym(&YastYfind_environment_module,"ast","find-environment-module");
  T130 = YPsig(YPpair(YPPsym((P)"bindings"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_294 = YPmet(FUNCODEREF(fun_loop_294),YPPsym((P)"loop"),T130,ENVNUL);
  T129 = YPsig(YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"r"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLstatic_local_environmentG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_find_binding_295 = YPmet(FUNCODEREF(fun_find_binding_295),YPPsym((P)"find-binding"),T129,ENVNUL);
  T134 = BOUNDP(YastYfind_binding);
  if (T134 != YPfalse) {
    T133 = CHKREF(YastYfind_binding);
  } else {
    T133 = YPfalse;
  }
  T132 = fun_find_binding_295;
  T131 = CALL2(CHKREF(YPdefine_method),T133,T132);
  YastYfind_binding = T131;
  regsym(&YastYfind_binding,"ast","find-binding");
  T135 = YPsig(YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"r"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLstatic_empty_environmentG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_find_binding_296 = YPmet(FUNCODEREF(fun_find_binding_296),YPPsym((P)"find-binding"),T135,ENVNUL);
  T139 = BOUNDP(YastYfind_binding);
  if (T139 != YPfalse) {
    T138 = CHKREF(YastYfind_binding);
  } else {
    T138 = YPfalse;
  }
  T137 = fun_find_binding_296;
  T136 = CALL2(CHKREF(YPdefine_method),T138,T137);
  YastYfind_binding = T136;
  regsym(&YastYfind_binding,"ast","find-binding");
  T140 = YPsig(YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"r"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLstatic_global_environmentG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_find_binding_297 = YPmet(FUNCODEREF(fun_find_binding_297),YPPsym((P)"find-binding"),T140,ENVNUL);
  T144 = BOUNDP(YastYfind_binding);
  if (T144 != YPfalse) {
    T143 = CHKREF(YastYfind_binding);
  } else {
    T143 = YPfalse;
  }
  T142 = fun_find_binding_297;
  T141 = CALL2(CHKREF(YPdefine_method),T143,T142);
  YastYfind_binding = T141;
  regsym(&YastYfind_binding,"ast","find-binding");
  T145 = YPsig(YPpair(YPPsym((P)"env"),Ynil),YPpair(CHKREF(YastYLstatic_environmentG),Ynil),YPfalse,YPint((P)1),CHKREF(YLcolG));
  fun_frame_bindings_298 = YPmet(FUNCODEREF(fun_frame_bindings_298),YPPsym((P)"frame-bindings"),T145,ENVNUL);
  T149 = BOUNDP(YastYframe_bindings);
  if (T149 != YPfalse) {
    T148 = CHKREF(YastYframe_bindings);
  } else {
    T148 = YPfalse;
  }
  T147 = fun_frame_bindings_298;
  T146 = CALL2(CHKREF(YPdefine_method),T148,T147);
  YastYframe_bindings = T146;
  regsym(&YastYframe_bindings,"ast","frame-bindings");
  YastYTmagic_bindingsT = Ynil;
  regsym(&YastYTmagic_bindingsT,"ast","*magic-bindings*");
  T150 = YPsig(YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"value"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_register_magic_binding_299 = YPmet(FUNCODEREF(fun_register_magic_binding_299),YPPsym((P)"register-magic-binding"),T150,ENVNUL);
  T154 = BOUNDP(YastYregister_magic_binding);
  if (T154 != YPfalse) {
    T153 = CHKREF(YastYregister_magic_binding);
  } else {
    T153 = YPfalse;
  }
  T152 = fun_register_magic_binding_299;
  T151 = CALL2(CHKREF(YPdefine_method),T153,T152);
  YastYregister_magic_binding = T151;
  regsym(&YastYregister_magic_binding,"ast","register-magic-binding");
  T155 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_magic_bindings_300 = YPmet(FUNCODEREF(fun_magic_bindings_300),YPPsym((P)"magic-bindings"),T155,ENVNUL);
  T159 = BOUNDP(YastYmagic_bindings);
  if (T159 != YPfalse) {
    T158 = CHKREF(YastYmagic_bindings);
  } else {
    T158 = YPfalse;
  }
  T157 = fun_magic_bindings_300;
  T156 = CALL2(CHKREF(YPdefine_method),T158,T157);
  YastYmagic_bindings = T156;
  regsym(&YastYmagic_bindings,"ast","magic-bindings");
  lit_140 = YPPsym((P)"quote");
  lit_141 = YPPsym((P)"register-magic-binding");
  lit_142 = YPPsym((P)"binding-free?");
  lit_143 = YPPsym((P)"set");
  lit_144 = YPPsym((P)"fun");
  lit_145 = YPPsym((P)"binding-handler");
  lit_146 = YPPsym((P)"set");
  lit_147 = YPPsym((P)"$proto-boot-module-name");
  lit_148 = YPPsym((P)"binding-module-name");
  lit_149 = YPPsym((P)"set");
  lit_150 = YPPsym((P)"binding-name");
  lit_151 = YPPsym((P)"set");
  lit_152 = YPPsym((P)"magic");
  lit_153 = YPPsym((P)"quote");
  lit_154 = YPPsym((P)"binding-kind");
  lit_155 = YPPsym((P)"set");
  lit_156 = YPPsym((P)"<module-binding>");
  lit_157 = YPPsym((P)"isa");
  lit_158 = YPPsym((P)"dv");
  lit_159 = YPPsym((P)"seq");
  lit_160 = YPsb((P)"-tag");
  lit_161 = YPsb((P)"$sexpr-");
  lit_162 = YPsb((P)"special-");
  lit_163 = YPsb((P)"Match Pattern Failure");
  lit_164 = YPPsym((P)"define-magic-binding");
  T162 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1232_301 = YPmet(FUNCODEREF(fun_x_1232_301),YPPsym((P)"x-1232"),T162,ENVNUL);
  T161 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_302 = YPmet(FUNCODEREF(fun_302),YPfalse,T161,ENVNUL);
  T160 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_303 = YPmet(FUNCODEREF(fun_303),YPfalse,T160,ENVNUL);
  T163 = fun_303;
  YPmacro(YPPsym((P)"define-magic-binding"),T163);
  lit_165 = YPPsym((P)"magic");
  T164 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_304 = YPmet(FUNCODEREF(fun_304),YPfalse,T164,ENVNUL);
  T177 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T176 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T175 = (P)YPpair(CHKREF(YastYbinding_handler),T176);
  T174 = (P)YPpair(CHKREF(YastYbinding_module_name),T175);
  T173 = (P)YPpair(CHKREF(YastYbinding_name),T174);
  T172 = (P)YPpair(CHKREF(YastYbinding_kind),T173);
  T171 = fun_304;
  T170 = (P)YPpair(YPfalse,Ynil);
  T169 = (P)YPpair(T171,T170);
  T168 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T169);
  T167 = (P)YPpair(CHKREF(YsyntaxYDsexpr_if_tag),T168);
  T166 = (P)YPpair(CHKREF(lit_165),T167);
  T165 = CALL3(CHKREF(YPisa),T177,T172,T166);
  YastYspecial_if = T165;
  regsym(&YastYspecial_if,"ast","special-if");
  lit_166 = YPPsym((P)"if");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_166),CHKREF(YastYspecial_if));
  lit_167 = YPPsym((P)"magic");
  T178 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_305 = YPmet(FUNCODEREF(fun_305),YPfalse,T178,ENVNUL);
  T191 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T190 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T189 = (P)YPpair(CHKREF(YastYbinding_handler),T190);
  T188 = (P)YPpair(CHKREF(YastYbinding_module_name),T189);
  T187 = (P)YPpair(CHKREF(YastYbinding_name),T188);
  T186 = (P)YPpair(CHKREF(YastYbinding_kind),T187);
  T185 = fun_305;
  T184 = (P)YPpair(YPfalse,Ynil);
  T183 = (P)YPpair(T185,T184);
  T182 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T183);
  T181 = (P)YPpair(CHKREF(YsyntaxYDsexpr_begin_tag),T182);
  T180 = (P)YPpair(CHKREF(lit_167),T181);
  T179 = CALL3(CHKREF(YPisa),T191,T186,T180);
  YastYspecial_begin = T179;
  regsym(&YastYspecial_begin,"ast","special-begin");
  lit_168 = YPPsym((P)"begin");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_168),CHKREF(YastYspecial_begin));
  lit_169 = YPPsym((P)"%raw");
  YastYDsexpr_Praw_tag = CHKREF(lit_169);
  regsym(&YastYDsexpr_Praw_tag,"ast","$sexpr-%raw-tag");
  lit_170 = YPPsym((P)"magic");
  T192 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_306 = YPmet(FUNCODEREF(fun_306),YPfalse,T192,ENVNUL);
  T205 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T204 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T203 = (P)YPpair(CHKREF(YastYbinding_handler),T204);
  T202 = (P)YPpair(CHKREF(YastYbinding_module_name),T203);
  T201 = (P)YPpair(CHKREF(YastYbinding_name),T202);
  T200 = (P)YPpair(CHKREF(YastYbinding_kind),T201);
  T199 = fun_306;
  T198 = (P)YPpair(YPfalse,Ynil);
  T197 = (P)YPpair(T199,T198);
  T196 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T197);
  T195 = (P)YPpair(CHKREF(YastYDsexpr_Praw_tag),T196);
  T194 = (P)YPpair(CHKREF(lit_170),T195);
  T193 = CALL3(CHKREF(YPisa),T205,T200,T194);
  YastYspecial_Praw = T193;
  regsym(&YastYspecial_Praw,"ast","special-%raw");
  lit_171 = YPPsym((P)"%raw");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_171),CHKREF(YastYspecial_Praw));
  lit_172 = YPPsym((P)"magic");
  T206 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_307 = YPmet(FUNCODEREF(fun_307),YPfalse,T206,ENVNUL);
  T219 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T218 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T217 = (P)YPpair(CHKREF(YastYbinding_handler),T218);
  T216 = (P)YPpair(CHKREF(YastYbinding_module_name),T217);
  T215 = (P)YPpair(CHKREF(YastYbinding_name),T216);
  T214 = (P)YPpair(CHKREF(YastYbinding_kind),T215);
  T213 = fun_307;
  T212 = (P)YPpair(YPfalse,Ynil);
  T211 = (P)YPpair(T213,T212);
  T210 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T211);
  T209 = (P)YPpair(CHKREF(YsyntaxYDsexpr_quote_tag),T210);
  T208 = (P)YPpair(CHKREF(lit_172),T209);
  T207 = CALL3(CHKREF(YPisa),T219,T214,T208);
  YastYspecial_quote = T207;
  regsym(&YastYspecial_quote,"ast","special-quote");
  lit_173 = YPPsym((P)"quote");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_173),CHKREF(YastYspecial_quote));
  lit_174 = YPPsym((P)"magic");
  T220 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_308 = YPmet(FUNCODEREF(fun_308),YPfalse,T220,ENVNUL);
  T233 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T232 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T231 = (P)YPpair(CHKREF(YastYbinding_handler),T232);
  T230 = (P)YPpair(CHKREF(YastYbinding_module_name),T231);
  T229 = (P)YPpair(CHKREF(YastYbinding_name),T230);
  T228 = (P)YPpair(CHKREF(YastYbinding_kind),T229);
  T227 = fun_308;
  T226 = (P)YPpair(YPfalse,Ynil);
  T225 = (P)YPpair(T227,T226);
  T224 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T225);
  T223 = (P)YPpair(CHKREF(YsyntaxYDsexpr_set_tag),T224);
  T222 = (P)YPpair(CHKREF(lit_174),T223);
  T221 = CALL3(CHKREF(YPisa),T233,T228,T222);
  YastYspecial_set = T221;
  regsym(&YastYspecial_set,"ast","special-set");
  lit_175 = YPPsym((P)"set");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_175),CHKREF(YastYspecial_set));
  lit_176 = YPPsym((P)"magic");
  T234 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_309 = YPmet(FUNCODEREF(fun_309),YPfalse,T234,ENVNUL);
  T247 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T246 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T245 = (P)YPpair(CHKREF(YastYbinding_handler),T246);
  T244 = (P)YPpair(CHKREF(YastYbinding_module_name),T245);
  T243 = (P)YPpair(CHKREF(YastYbinding_name),T244);
  T242 = (P)YPpair(CHKREF(YastYbinding_kind),T243);
  T241 = fun_309;
  T240 = (P)YPpair(YPfalse,Ynil);
  T239 = (P)YPpair(T241,T240);
  T238 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T239);
  T237 = (P)YPpair(CHKREF(YsyntaxYDsexpr_define_tag),T238);
  T236 = (P)YPpair(CHKREF(lit_176),T237);
  T235 = CALL3(CHKREF(YPisa),T247,T242,T236);
  YastYspecial_define = T235;
  regsym(&YastYspecial_define,"ast","special-define");
  lit_177 = YPPsym((P)"define");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_177),CHKREF(YastYspecial_define));
  lit_178 = YPPsym((P)"magic");
  T248 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_310 = YPmet(FUNCODEREF(fun_310),YPfalse,T248,ENVNUL);
  T261 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T260 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T259 = (P)YPpair(CHKREF(YastYbinding_handler),T260);
  T258 = (P)YPpair(CHKREF(YastYbinding_module_name),T259);
  T257 = (P)YPpair(CHKREF(YastYbinding_name),T258);
  T256 = (P)YPpair(CHKREF(YastYbinding_kind),T257);
  T255 = fun_310;
  T254 = (P)YPpair(YPfalse,Ynil);
  T253 = (P)YPpair(T255,T254);
  T252 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T253);
  T251 = (P)YPpair(CHKREF(YsyntaxYDsexpr_define_syntax_tag),T252);
  T250 = (P)YPpair(CHKREF(lit_178),T251);
  T249 = CALL3(CHKREF(YPisa),T261,T256,T250);
  YastYspecial_define_syntax = T249;
  regsym(&YastYspecial_define_syntax,"ast","special-define-syntax");
  lit_179 = YPPsym((P)"define-syntax");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_179),CHKREF(YastYspecial_define_syntax));
  lit_180 = YPPsym((P)"dss");
  YastYDsexpr_define_static_syntax_tag = CHKREF(lit_180);
  regsym(&YastYDsexpr_define_static_syntax_tag,"ast","$sexpr-define-static-syntax-tag");
  lit_181 = YPPsym((P)"magic");
  T262 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_311 = YPmet(FUNCODEREF(fun_311),YPfalse,T262,ENVNUL);
  T275 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T274 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T273 = (P)YPpair(CHKREF(YastYbinding_handler),T274);
  T272 = (P)YPpair(CHKREF(YastYbinding_module_name),T273);
  T271 = (P)YPpair(CHKREF(YastYbinding_name),T272);
  T270 = (P)YPpair(CHKREF(YastYbinding_kind),T271);
  T269 = fun_311;
  T268 = (P)YPpair(YPfalse,Ynil);
  T267 = (P)YPpair(T269,T268);
  T266 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T267);
  T265 = (P)YPpair(CHKREF(YastYDsexpr_define_static_syntax_tag),T266);
  T264 = (P)YPpair(CHKREF(lit_181),T265);
  T263 = CALL3(CHKREF(YPisa),T275,T270,T264);
  YastYspecial_define_static_syntax = T263;
  regsym(&YastYspecial_define_static_syntax,"ast","special-define-static-syntax");
  lit_182 = YPPsym((P)"define-static-syntax");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_182),CHKREF(YastYspecial_define_static_syntax));
  lit_183 = YPPsym((P)"magic");
  T276 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_312 = YPmet(FUNCODEREF(fun_312),YPfalse,T276,ENVNUL);
  T289 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T288 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T287 = (P)YPpair(CHKREF(YastYbinding_handler),T288);
  T286 = (P)YPpair(CHKREF(YastYbinding_module_name),T287);
  T285 = (P)YPpair(CHKREF(YastYbinding_name),T286);
  T284 = (P)YPpair(CHKREF(YastYbinding_kind),T285);
  T283 = fun_312;
  T282 = (P)YPpair(YPfalse,Ynil);
  T281 = (P)YPpair(T283,T282);
  T280 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T281);
  T279 = (P)YPpair(CHKREF(YsyntaxYDsexpr_define_method_tag),T280);
  T278 = (P)YPpair(CHKREF(lit_183),T279);
  T277 = CALL3(CHKREF(YPisa),T289,T284,T278);
  YastYspecial_define_method = T277;
  regsym(&YastYspecial_define_method,"ast","special-define-method");
  lit_184 = YPPsym((P)"define-method");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_184),CHKREF(YastYspecial_define_method));
  lit_185 = YPPsym((P)"magic");
  T290 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_313 = YPmet(FUNCODEREF(fun_313),YPfalse,T290,ENVNUL);
  T303 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T302 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T301 = (P)YPpair(CHKREF(YastYbinding_handler),T302);
  T300 = (P)YPpair(CHKREF(YastYbinding_module_name),T301);
  T299 = (P)YPpair(CHKREF(YastYbinding_name),T300);
  T298 = (P)YPpair(CHKREF(YastYbinding_kind),T299);
  T297 = fun_313;
  T296 = (P)YPpair(YPfalse,Ynil);
  T295 = (P)YPpair(T297,T296);
  T294 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T295);
  T293 = (P)YPpair(CHKREF(YsyntaxYDsexpr_define_generic_tag),T294);
  T292 = (P)YPpair(CHKREF(lit_185),T293);
  T291 = CALL3(CHKREF(YPisa),T303,T298,T292);
  YastYspecial_define_generic = T291;
  regsym(&YastYspecial_define_generic,"ast","special-define-generic");
  lit_186 = YPPsym((P)"define-generic");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_186),CHKREF(YastYspecial_define_generic));
  lit_187 = YPPsym((P)"magic");
  T304 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_314 = YPmet(FUNCODEREF(fun_314),YPfalse,T304,ENVNUL);
  T317 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T316 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T315 = (P)YPpair(CHKREF(YastYbinding_handler),T316);
  T314 = (P)YPpair(CHKREF(YastYbinding_module_name),T315);
  T313 = (P)YPpair(CHKREF(YastYbinding_name),T314);
  T312 = (P)YPpair(CHKREF(YastYbinding_kind),T313);
  T311 = fun_314;
  T310 = (P)YPpair(YPfalse,Ynil);
  T309 = (P)YPpair(T311,T310);
  T308 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T309);
  T307 = (P)YPpair(CHKREF(YsyntaxYDsexpr_define_function_tag),T308);
  T306 = (P)YPpair(CHKREF(lit_187),T307);
  T305 = CALL3(CHKREF(YPisa),T317,T312,T306);
  YastYspecial_define_function = T305;
  regsym(&YastYspecial_define_function,"ast","special-define-function");
  lit_188 = YPPsym((P)"define-function");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_188),CHKREF(YastYspecial_define_function));
  lit_189 = YPPsym((P)"magic");
  T318 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_315 = YPmet(FUNCODEREF(fun_315),YPfalse,T318,ENVNUL);
  T331 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T330 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T329 = (P)YPpair(CHKREF(YastYbinding_handler),T330);
  T328 = (P)YPpair(CHKREF(YastYbinding_module_name),T329);
  T327 = (P)YPpair(CHKREF(YastYbinding_name),T328);
  T326 = (P)YPpair(CHKREF(YastYbinding_kind),T327);
  T325 = fun_315;
  T324 = (P)YPpair(YPfalse,Ynil);
  T323 = (P)YPpair(T325,T324);
  T322 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T323);
  T321 = (P)YPpair(CHKREF(YsyntaxYDsexpr_method_tag),T322);
  T320 = (P)YPpair(CHKREF(lit_189),T321);
  T319 = CALL3(CHKREF(YPisa),T331,T326,T320);
  YastYspecial_method = T319;
  regsym(&YastYspecial_method,"ast","special-method");
  lit_190 = YPPsym((P)"method");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_190),CHKREF(YastYspecial_method));
  lit_191 = YPPsym((P)"bound?");
  YastYDsexpr_boundQ_tag = CHKREF(lit_191);
  regsym(&YastYDsexpr_boundQ_tag,"ast","$sexpr-bound?-tag");
  lit_192 = YPPsym((P)"magic");
  T332 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_316 = YPmet(FUNCODEREF(fun_316),YPfalse,T332,ENVNUL);
  T345 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T344 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T343 = (P)YPpair(CHKREF(YastYbinding_handler),T344);
  T342 = (P)YPpair(CHKREF(YastYbinding_module_name),T343);
  T341 = (P)YPpair(CHKREF(YastYbinding_name),T342);
  T340 = (P)YPpair(CHKREF(YastYbinding_kind),T341);
  T339 = fun_316;
  T338 = (P)YPpair(YPfalse,Ynil);
  T337 = (P)YPpair(T339,T338);
  T336 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T337);
  T335 = (P)YPpair(CHKREF(YastYDsexpr_boundQ_tag),T336);
  T334 = (P)YPpair(CHKREF(lit_192),T335);
  T333 = CALL3(CHKREF(YPisa),T345,T340,T334);
  YastYspecial_boundQ = T333;
  regsym(&YastYspecial_boundQ,"ast","special-bound?");
  lit_193 = YPPsym((P)"bound?");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_193),CHKREF(YastYspecial_boundQ));
  lit_194 = YPPsym((P)"magic");
  T348 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  T347 = fun_317 = YPmet(FUNCODEREF(fun_317),YPfalse,T348,ENVNUL);
  T362 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T361 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T360 = (P)YPpair(CHKREF(YastYbinding_handler),T361);
  T359 = (P)YPpair(CHKREF(YastYbinding_module_name),T360);
  T358 = (P)YPpair(CHKREF(YastYbinding_name),T359);
  T357 = (P)YPpair(CHKREF(YastYbinding_kind),T358);
  T356 = fun_317;
  T355 = (P)YPpair(YPfalse,Ynil);
  T354 = (P)YPpair(T356,T355);
  T353 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T354);
  T352 = (P)YPpair(CHKREF(YsyntaxYDsexpr_let_tag),T353);
  T351 = (P)YPpair(CHKREF(lit_194),T352);
  T350 = CALL3(CHKREF(YPisa),T362,T357,T351);
  T349 = YastYspecial_let = T350;
  regsym(&YastYspecial_let,"ast","special-let");
  T346 = T349;
  return T346;
}

P YastY___main_6___() {
  P bindingF1401;
  P bindingF1400;
  P bindingF1399;
  P bindingF1398;
  P bindingF1397;
  P bindingF1396;
  P bindingF1395;
  P bindingF1394;
  P bindingF1393;
  P bindingF1392;
  P bindingF1391;
  P bindingF1390;
  P bindingF1389;
  P bindingF1388;
  P bindingF1387;
  P bindingF1386;
  P bindingF1385;
  P bindingF1384;
  P bindingF1383;
  P bindingF1382;
  P T277,T276,T275,T274,T273,T272,T271,T270,T269,T268,T267,T266,T265,T264,T263,T262;
  P T261,T260,T259,T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248,T247,T246;
  P T245,T244,T243,T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230;
  P T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214;
  P T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198;
  P T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182;
  P T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166;
  P T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150;
  P T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134;
  P T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118;
  P T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102;
  P T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86;
  P T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70;
  P T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54;
  P T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
loop:
  lit_195 = YPPsym((P)"let");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_195),CHKREF(YastYspecial_let));
  lit_196 = YPPsym((P)"magic");
  T0 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_318 = YPmet(FUNCODEREF(fun_318),YPfalse,T0,ENVNUL);
  T13 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T12 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T11 = (P)YPpair(CHKREF(YastYbinding_handler),T12);
  T10 = (P)YPpair(CHKREF(YastYbinding_module_name),T11);
  T9 = (P)YPpair(CHKREF(YastYbinding_name),T10);
  T8 = (P)YPpair(CHKREF(YastYbinding_kind),T9);
  T7 = fun_318;
  T6 = (P)YPpair(YPfalse,Ynil);
  T5 = (P)YPpair(T7,T6);
  T4 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T5);
  T3 = (P)YPpair(CHKREF(YsyntaxYDsexpr_locals_tag),T4);
  T2 = (P)YPpair(CHKREF(lit_196),T3);
  T1 = CALL3(CHKREF(YPisa),T13,T8,T2);
  YastYspecial_locals = T1;
  regsym(&YastYspecial_locals,"ast","special-locals");
  lit_197 = YPPsym((P)"locals");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_197),CHKREF(YastYspecial_locals));
  lit_198 = YPPsym((P)"magic");
  T14 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_319 = YPmet(FUNCODEREF(fun_319),YPfalse,T14,ENVNUL);
  T27 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T26 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T25 = (P)YPpair(CHKREF(YastYbinding_handler),T26);
  T24 = (P)YPpair(CHKREF(YastYbinding_module_name),T25);
  T23 = (P)YPpair(CHKREF(YastYbinding_name),T24);
  T22 = (P)YPpair(CHKREF(YastYbinding_kind),T23);
  T21 = fun_319;
  T20 = (P)YPpair(YPfalse,Ynil);
  T19 = (P)YPpair(T21,T20);
  T18 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T19);
  T17 = (P)YPpair(CHKREF(YsyntaxYDsexpr_iterate_tag),T18);
  T16 = (P)YPpair(CHKREF(lit_198),T17);
  T15 = CALL3(CHKREF(YPisa),T27,T22,T16);
  YastYspecial_iterate = T15;
  regsym(&YastYspecial_iterate,"ast","special-iterate");
  lit_199 = YPPsym((P)"iterate");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_199),CHKREF(YastYspecial_iterate));
  lit_200 = YPPsym((P)"magic");
  T28 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_320 = YPmet(FUNCODEREF(fun_320),YPfalse,T28,ENVNUL);
  T41 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T40 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T39 = (P)YPpair(CHKREF(YastYbinding_handler),T40);
  T38 = (P)YPpair(CHKREF(YastYbinding_module_name),T39);
  T37 = (P)YPpair(CHKREF(YastYbinding_name),T38);
  T36 = (P)YPpair(CHKREF(YastYbinding_kind),T37);
  T35 = fun_320;
  T34 = (P)YPpair(YPfalse,Ynil);
  T33 = (P)YPpair(T35,T34);
  T32 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T33);
  T31 = (P)YPpair(CHKREF(YsyntaxYDsexpr_bind_exit_tag),T32);
  T30 = (P)YPpair(CHKREF(lit_200),T31);
  T29 = CALL3(CHKREF(YPisa),T41,T36,T30);
  YastYspecial_bind_exit = T29;
  regsym(&YastYspecial_bind_exit,"ast","special-bind-exit");
  lit_201 = YPPsym((P)"bind-exit");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_201),CHKREF(YastYspecial_bind_exit));
  lit_202 = YPPsym((P)"magic");
  T42 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_321 = YPmet(FUNCODEREF(fun_321),YPfalse,T42,ENVNUL);
  T55 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T54 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T53 = (P)YPpair(CHKREF(YastYbinding_handler),T54);
  T52 = (P)YPpair(CHKREF(YastYbinding_module_name),T53);
  T51 = (P)YPpair(CHKREF(YastYbinding_name),T52);
  T50 = (P)YPpair(CHKREF(YastYbinding_kind),T51);
  T49 = fun_321;
  T48 = (P)YPpair(YPfalse,Ynil);
  T47 = (P)YPpair(T49,T48);
  T46 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T47);
  T45 = (P)YPpair(CHKREF(YsyntaxYDsexpr_unwind_protect_tag),T46);
  T44 = (P)YPpair(CHKREF(lit_202),T45);
  T43 = CALL3(CHKREF(YPisa),T55,T50,T44);
  YastYspecial_unwind_protect = T43;
  regsym(&YastYspecial_unwind_protect,"ast","special-unwind-protect");
  lit_203 = YPPsym((P)"unwind-protect");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_203),CHKREF(YastYspecial_unwind_protect));
  lit_204 = YPPsym((P)"magic");
  T56 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_322 = YPmet(FUNCODEREF(fun_322),YPfalse,T56,ENVNUL);
  T69 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T68 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T67 = (P)YPpair(CHKREF(YastYbinding_handler),T68);
  T66 = (P)YPpair(CHKREF(YastYbinding_module_name),T67);
  T65 = (P)YPpair(CHKREF(YastYbinding_name),T66);
  T64 = (P)YPpair(CHKREF(YastYbinding_kind),T65);
  T63 = fun_322;
  T62 = (P)YPpair(YPfalse,Ynil);
  T61 = (P)YPpair(T63,T62);
  T60 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T61);
  T59 = (P)YPpair(CHKREF(YsyntaxYDsexpr_monitor_tag),T60);
  T58 = (P)YPpair(CHKREF(lit_204),T59);
  T57 = CALL3(CHKREF(YPisa),T69,T64,T58);
  YastYspecial_monitor = T57;
  regsym(&YastYspecial_monitor,"ast","special-monitor");
  lit_205 = YPPsym((P)"monitor");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_205),CHKREF(YastYspecial_monitor));
  lit_206 = YPPsym((P)"%pair");
  lit_207 = YPPsym((P)"quote");
  T70 = YPsig(YPpair(YPPsym((P)"args"),Ynil),YPpair(CHKREF(YLlstG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_pairize_323 = YPmet(FUNCODEREF(fun_pairize_323),YPPsym((P)"pairize"),T70,ENVNUL);
  T74 = BOUNDP(YastYpairize);
  if (T74 != YPfalse) {
    T73 = CHKREF(YastYpairize);
  } else {
    T73 = YPfalse;
  }
  T72 = fun_pairize_323;
  T71 = CALL2(CHKREF(YPdefine_method),T73,T72);
  YastYpairize = T71;
  regsym(&YastYpairize,"ast","pairize");
  lit_208 = YPPsym((P)"%isa");
  lit_209 = YPPsym((P)"magic");
  T75 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_324 = YPmet(FUNCODEREF(fun_324),YPfalse,T75,ENVNUL);
  T88 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T87 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T86 = (P)YPpair(CHKREF(YastYbinding_handler),T87);
  T85 = (P)YPpair(CHKREF(YastYbinding_module_name),T86);
  T84 = (P)YPpair(CHKREF(YastYbinding_name),T85);
  T83 = (P)YPpair(CHKREF(YastYbinding_kind),T84);
  T82 = fun_324;
  T81 = (P)YPpair(YPfalse,Ynil);
  T80 = (P)YPpair(T82,T81);
  T79 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T80);
  T78 = (P)YPpair(CHKREF(YsyntaxYDsexpr_isa_tag),T79);
  T77 = (P)YPpair(CHKREF(lit_209),T78);
  T76 = CALL3(CHKREF(YPisa),T88,T83,T77);
  YastYspecial_isa = T76;
  regsym(&YastYspecial_isa,"ast","special-isa");
  lit_210 = YPPsym((P)"isa");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_210),CHKREF(YastYspecial_isa));
  lit_211 = YPpair(YPpair(YPPsym((P)"x"), YPpair(YPPsym((P)"<any>"), Ynil)), Ynil);
  lit_212 = YPPsym((P)"%slot");
  lit_213 = YPPsym((P)"magic");
  T89 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_325 = YPmet(FUNCODEREF(fun_325),YPfalse,T89,ENVNUL);
  T102 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T101 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T100 = (P)YPpair(CHKREF(YastYbinding_handler),T101);
  T99 = (P)YPpair(CHKREF(YastYbinding_module_name),T100);
  T98 = (P)YPpair(CHKREF(YastYbinding_name),T99);
  T97 = (P)YPpair(CHKREF(YastYbinding_kind),T98);
  T96 = fun_325;
  T95 = (P)YPpair(YPfalse,Ynil);
  T94 = (P)YPpair(T96,T95);
  T93 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T94);
  T92 = (P)YPpair(CHKREF(YsyntaxYDsexpr_slot_tag),T93);
  T91 = (P)YPpair(CHKREF(lit_213),T92);
  T90 = CALL3(CHKREF(YPisa),T102,T97,T91);
  YastYspecial_slot = T90;
  regsym(&YastYspecial_slot,"ast","special-slot");
  lit_214 = YPPsym((P)"slot");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_214),CHKREF(YastYspecial_slot));
  lit_215 = YPPsym((P)"ct");
  YastYDsexpr_compile_time_tag = CHKREF(lit_215);
  regsym(&YastYDsexpr_compile_time_tag,"ast","$sexpr-compile-time-tag");
  lit_216 = YPPsym((P)"magic");
  T103 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_326 = YPmet(FUNCODEREF(fun_326),YPfalse,T103,ENVNUL);
  T116 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T115 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T114 = (P)YPpair(CHKREF(YastYbinding_handler),T115);
  T113 = (P)YPpair(CHKREF(YastYbinding_module_name),T114);
  T112 = (P)YPpair(CHKREF(YastYbinding_name),T113);
  T111 = (P)YPpair(CHKREF(YastYbinding_kind),T112);
  T110 = fun_326;
  T109 = (P)YPpair(YPfalse,Ynil);
  T108 = (P)YPpair(T110,T109);
  T107 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T108);
  T106 = (P)YPpair(CHKREF(YastYDsexpr_compile_time_tag),T107);
  T105 = (P)YPpair(CHKREF(lit_216),T106);
  T104 = CALL3(CHKREF(YPisa),T116,T111,T105);
  YastYspecial_compile_time = T104;
  regsym(&YastYspecial_compile_time,"ast","special-compile-time");
  lit_217 = YPPsym((P)"compile-time");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_217),CHKREF(YastYspecial_compile_time));
  lit_218 = YPPsym((P)"ct-also");
  YastYDsexpr_compile_time_also_tag = CHKREF(lit_218);
  regsym(&YastYDsexpr_compile_time_also_tag,"ast","$sexpr-compile-time-also-tag");
  lit_219 = YPPsym((P)"magic");
  T117 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_327 = YPmet(FUNCODEREF(fun_327),YPfalse,T117,ENVNUL);
  T130 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T129 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T128 = (P)YPpair(CHKREF(YastYbinding_handler),T129);
  T127 = (P)YPpair(CHKREF(YastYbinding_module_name),T128);
  T126 = (P)YPpair(CHKREF(YastYbinding_name),T127);
  T125 = (P)YPpair(CHKREF(YastYbinding_kind),T126);
  T124 = fun_327;
  T123 = (P)YPpair(YPfalse,Ynil);
  T122 = (P)YPpair(T124,T123);
  T121 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T122);
  T120 = (P)YPpair(CHKREF(YastYDsexpr_compile_time_also_tag),T121);
  T119 = (P)YPpair(CHKREF(lit_219),T120);
  T118 = CALL3(CHKREF(YPisa),T130,T125,T119);
  YastYspecial_compile_time_also = T118;
  regsym(&YastYspecial_compile_time_also,"ast","special-compile-time-also");
  lit_220 = YPPsym((P)"compile-time-also");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_220),CHKREF(YastYspecial_compile_time_also));
  lit_221 = YPPsym((P)"dp");
  YastYDsexpr_define_primitive_tag = CHKREF(lit_221);
  regsym(&YastYDsexpr_define_primitive_tag,"ast","$sexpr-define-primitive-tag");
  lit_222 = YPPsym((P)"predefined");
  lit_223 = YPPsym((P)"magic");
  T131 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_328 = YPmet(FUNCODEREF(fun_328),YPfalse,T131,ENVNUL);
  T144 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T143 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T142 = (P)YPpair(CHKREF(YastYbinding_handler),T143);
  T141 = (P)YPpair(CHKREF(YastYbinding_module_name),T142);
  T140 = (P)YPpair(CHKREF(YastYbinding_name),T141);
  T139 = (P)YPpair(CHKREF(YastYbinding_kind),T140);
  T138 = fun_328;
  T137 = (P)YPpair(YPfalse,Ynil);
  T136 = (P)YPpair(T138,T137);
  T135 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T136);
  T134 = (P)YPpair(CHKREF(YastYDsexpr_define_primitive_tag),T135);
  T133 = (P)YPpair(CHKREF(lit_223),T134);
  T132 = CALL3(CHKREF(YPisa),T144,T139,T133);
  YastYspecial_define_primitive = T132;
  regsym(&YastYspecial_define_primitive,"ast","special-define-primitive");
  lit_224 = YPPsym((P)"define-primitive");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_224),CHKREF(YastYspecial_define_primitive));
  lit_225 = YPPsym((P)"magic");
  T145 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_329 = YPmet(FUNCODEREF(fun_329),YPfalse,T145,ENVNUL);
  T158 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T157 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T156 = (P)YPpair(CHKREF(YastYbinding_handler),T157);
  T155 = (P)YPpair(CHKREF(YastYbinding_module_name),T156);
  T154 = (P)YPpair(CHKREF(YastYbinding_name),T155);
  T153 = (P)YPpair(CHKREF(YastYbinding_kind),T154);
  T152 = fun_329;
  T151 = (P)YPpair(YPfalse,Ynil);
  T150 = (P)YPpair(T152,T151);
  T149 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T150);
  T148 = (P)YPpair(CHKREF(YsyntaxYDsexpr_quasiquote_tag),T149);
  T147 = (P)YPpair(CHKREF(lit_225),T148);
  T146 = CALL3(CHKREF(YPisa),T158,T153,T147);
  YastYspecial_quasiquote = T146;
  regsym(&YastYspecial_quasiquote,"ast","special-quasiquote");
  lit_226 = YPPsym((P)"quasiquote");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_226),CHKREF(YastYspecial_quasiquote));
  lit_227 = YPPsym((P)"magic");
  T159 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_ast_macro_expand_330 = YPmet(FUNCODEREF(fun_ast_macro_expand_330),YPPsym((P)"ast-macro-expand"),T159,ENVNUL);
  T163 = BOUNDP(YastYast_macro_expand);
  if (T163 != YPfalse) {
    T162 = CHKREF(YastYast_macro_expand);
  } else {
    T162 = YPfalse;
  }
  T161 = fun_ast_macro_expand_330;
  T160 = CALL2(CHKREF(YPdefine_method),T162,T161);
  YastYast_macro_expand = T160;
  regsym(&YastYast_macro_expand,"ast","ast-macro-expand");
  lit_228 = YPPsym((P)"magic");
  T164 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_331 = YPmet(FUNCODEREF(fun_331),YPfalse,T164,ENVNUL);
  T177 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T176 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T175 = (P)YPpair(CHKREF(YastYbinding_handler),T176);
  T174 = (P)YPpair(CHKREF(YastYbinding_module_name),T175);
  T173 = (P)YPpair(CHKREF(YastYbinding_name),T174);
  T172 = (P)YPpair(CHKREF(YastYbinding_kind),T173);
  T171 = fun_331;
  T170 = (P)YPpair(YPfalse,Ynil);
  T169 = (P)YPpair(T171,T170);
  T168 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T169);
  T167 = (P)YPpair(CHKREF(YsyntaxYDsexpr_macro_expand_tag),T168);
  T166 = (P)YPpair(CHKREF(lit_228),T167);
  T165 = CALL3(CHKREF(YPisa),T177,T172,T166);
  YastYspecial_macro_expand = T165;
  regsym(&YastYspecial_macro_expand,"ast","special-macro-expand");
  lit_229 = YPPsym((P)"macro-expand");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_229),CHKREF(YastYspecial_macro_expand));
  lit_230 = YPPsym((P)"magic");
  T178 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_332 = YPmet(FUNCODEREF(fun_332),YPfalse,T178,ENVNUL);
  T191 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T190 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T189 = (P)YPpair(CHKREF(YastYbinding_handler),T190);
  T188 = (P)YPpair(CHKREF(YastYbinding_module_name),T189);
  T187 = (P)YPpair(CHKREF(YastYbinding_name),T188);
  T186 = (P)YPpair(CHKREF(YastYbinding_kind),T187);
  T185 = fun_332;
  T184 = (P)YPpair(YPfalse,Ynil);
  T183 = (P)YPpair(T185,T184);
  T182 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T183);
  T181 = (P)YPpair(CHKREF(YsyntaxYDsexpr_syntax_if_tag),T182);
  T180 = (P)YPpair(CHKREF(lit_230),T181);
  T179 = CALL3(CHKREF(YPisa),T191,T186,T180);
  YastYspecial_syntax_if = T179;
  regsym(&YastYspecial_syntax_if,"ast","special-syntax-if");
  lit_231 = YPPsym((P)"syntax-if");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_231),CHKREF(YastYspecial_syntax_if));
  lit_232 = YPPsym((P)"export");
  YastYDsexpr_export_tag = CHKREF(lit_232);
  regsym(&YastYDsexpr_export_tag,"ast","$sexpr-export-tag");
  lit_233 = YPPsym((P)"magic");
  T192 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_333 = YPmet(FUNCODEREF(fun_333),YPfalse,T192,ENVNUL);
  T205 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T204 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T203 = (P)YPpair(CHKREF(YastYbinding_handler),T204);
  T202 = (P)YPpair(CHKREF(YastYbinding_module_name),T203);
  T201 = (P)YPpair(CHKREF(YastYbinding_name),T202);
  T200 = (P)YPpair(CHKREF(YastYbinding_kind),T201);
  T199 = fun_333;
  T198 = (P)YPpair(YPfalse,Ynil);
  T197 = (P)YPpair(T199,T198);
  T196 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T197);
  T195 = (P)YPpair(CHKREF(YastYDsexpr_export_tag),T196);
  T194 = (P)YPpair(CHKREF(lit_233),T195);
  T193 = CALL3(CHKREF(YPisa),T205,T200,T194);
  YastYspecial_export = T193;
  regsym(&YastYspecial_export,"ast","special-export");
  lit_234 = YPPsym((P)"export");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_234),CHKREF(YastYspecial_export));
  lit_235 = YPPsym((P)"use");
  YastYDsexpr_use_module_tag = CHKREF(lit_235);
  regsym(&YastYDsexpr_use_module_tag,"ast","$sexpr-use-module-tag");
  lit_236 = YPPsym((P)"magic");
  T206 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"r"),YPpair(YPPsym((P)"tail?"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_334 = YPmet(FUNCODEREF(fun_334),YPfalse,T206,ENVNUL);
  T219 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T218 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T217 = (P)YPpair(CHKREF(YastYbinding_handler),T218);
  T216 = (P)YPpair(CHKREF(YastYbinding_module_name),T217);
  T215 = (P)YPpair(CHKREF(YastYbinding_name),T216);
  T214 = (P)YPpair(CHKREF(YastYbinding_kind),T215);
  T213 = fun_334;
  T212 = (P)YPpair(YPfalse,Ynil);
  T211 = (P)YPpair(T213,T212);
  T210 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T211);
  T209 = (P)YPpair(CHKREF(YastYDsexpr_use_module_tag),T210);
  T208 = (P)YPpair(CHKREF(lit_236),T209);
  T207 = CALL3(CHKREF(YPisa),T219,T214,T208);
  YastYspecial_use_module = T207;
  regsym(&YastYspecial_use_module,"ast","special-use-module");
  lit_237 = YPPsym((P)"use-module");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_237),CHKREF(YastYspecial_use_module));
  YastYTprimitivesT = Ynil;
  regsym(&YastYTprimitivesT,"ast","*primitives*");
  T220 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_primitives_335 = YPmet(FUNCODEREF(fun_primitives_335),YPPsym((P)"primitives"),T220,ENVNUL);
  T224 = BOUNDP(YastYprimitives);
  if (T224 != YPfalse) {
    T223 = CHKREF(YastYprimitives);
  } else {
    T223 = YPfalse;
  }
  T222 = fun_primitives_335;
  T221 = CALL2(CHKREF(YPdefine_method),T223,T222);
  YastYprimitives = T221;
  regsym(&YastYprimitives,"ast","primitives");
  T225 = YPsig(YPpair(YPPsym((P)"value"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_register_primitive_336 = YPmet(FUNCODEREF(fun_register_primitive_336),YPPsym((P)"register-primitive"),T225,ENVNUL);
  T229 = BOUNDP(YastYregister_primitive);
  if (T229 != YPfalse) {
    T228 = CHKREF(YastYregister_primitive);
  } else {
    T228 = YPfalse;
  }
  T227 = fun_register_primitive_336;
  T226 = CALL2(CHKREF(YPdefine_method),T228,T227);
  YastYregister_primitive = T226;
  regsym(&YastYregister_primitive,"ast","register-primitive");
  lit_238 = YPPsym((P)"predefined");
  T230 = YPsig(YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"params"),Ynil)),YPpair(CHKREF(YLanyG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  YastYfab_primitive = YPmet(FUNCODEREF(YastYfab_primitive),YPPsym((P)"fab-primitive"),T230,ENVNUL);
  T231 = YastYfab_primitive;
  YastYfab_primitive = T231;
  regsym(&YastYfab_primitive,"ast","fab-primitive");
  lit_239 = YPPsym((P)"binding");
  lit_240 = YPPsym((P)"register-primitive");
  lit_241 = YPPsym((P)"quote");
  lit_242 = YPPsym((P)"fab-primitive");
  lit_243 = YPPsym((P)"binding");
  lit_244 = YPPsym((P)"let");
  lit_245 = YPsb((P)"Match Pattern Failure");
  lit_246 = YPPsym((P)"define-primitive");
  T234 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1236_338 = YPmet(FUNCODEREF(fun_x_1236_338),YPPsym((P)"x-1236"),T234,ENVNUL);
  T233 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_339 = YPmet(FUNCODEREF(fun_339),YPfalse,T233,ENVNUL);
  T232 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_340 = YPmet(FUNCODEREF(fun_340),YPfalse,T232,ENVNUL);
  T235 = fun_340;
  YPmacro(YPPsym((P)"define-primitive"),T235);
  lit_247 = YPPsym((P)"%eq?");
  T237 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_247));
  bindingF1401 = T237;
  T236 = CALL1(CHKREF(YastYregister_primitive),bindingF1401);
  lit_248 = YPPsym((P)"%bb");
  T239 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_248));
  bindingF1400 = T239;
  T238 = CALL1(CHKREF(YastYregister_primitive),bindingF1400);
  lit_249 = YPPsym((P)"%i=");
  T241 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_249));
  bindingF1399 = T241;
  T240 = CALL1(CHKREF(YastYregister_primitive),bindingF1399);
  lit_250 = YPPsym((P)"%i<");
  T243 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_250));
  bindingF1398 = T243;
  T242 = CALL1(CHKREF(YastYregister_primitive),bindingF1398);
  lit_251 = YPPsym((P)"%i+");
  T245 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_251));
  bindingF1397 = T245;
  T244 = CALL1(CHKREF(YastYregister_primitive),bindingF1397);
  lit_252 = YPPsym((P)"%i-");
  T247 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_252));
  bindingF1396 = T247;
  T246 = CALL1(CHKREF(YastYregister_primitive),bindingF1396);
  lit_253 = YPPsym((P)"%i*");
  T249 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_253));
  bindingF1395 = T249;
  T248 = CALL1(CHKREF(YastYregister_primitive),bindingF1395);
  lit_254 = YPPsym((P)"%im");
  T251 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_254));
  bindingF1394 = T251;
  T250 = CALL1(CHKREF(YastYregister_primitive),bindingF1394);
  lit_255 = YPPsym((P)"%ir");
  T253 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_255));
  bindingF1393 = T253;
  T252 = CALL1(CHKREF(YastYregister_primitive),bindingF1393);
  lit_256 = YPPsym((P)"%it/");
  T255 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_256));
  bindingF1392 = T255;
  T254 = CALL1(CHKREF(YastYregister_primitive),bindingF1392);
  lit_257 = YPPsym((P)"%iv");
  T257 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_257));
  bindingF1391 = T257;
  T256 = CALL1(CHKREF(YastYregister_primitive),bindingF1391);
  lit_258 = YPPsym((P)"%i^");
  T259 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_258));
  bindingF1390 = T259;
  T258 = CALL1(CHKREF(YastYregister_primitive),bindingF1390);
  lit_259 = YPPsym((P)"%i&");
  T261 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_259));
  bindingF1389 = T261;
  T260 = CALL1(CHKREF(YastYregister_primitive),bindingF1389);
  lit_260 = YPPsym((P)"%i!");
  T263 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_260));
  bindingF1388 = T263;
  T262 = CALL1(CHKREF(YastYregister_primitive),bindingF1388);
  lit_261 = YPPsym((P)"%i?");
  T265 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_261));
  bindingF1387 = T265;
  T264 = CALL1(CHKREF(YastYregister_primitive),bindingF1387);
  lit_262 = YPPsym((P)"%i<<");
  T267 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_262));
  bindingF1386 = T267;
  T266 = CALL1(CHKREF(YastYregister_primitive),bindingF1386);
  lit_263 = YPPsym((P)"%i>>");
  T269 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_263));
  bindingF1385 = T269;
  T268 = CALL1(CHKREF(YastYregister_primitive),bindingF1385);
  lit_264 = YPPsym((P)"%i<<<");
  T271 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_264));
  bindingF1384 = T271;
  T270 = CALL1(CHKREF(YastYregister_primitive),bindingF1384);
  lit_265 = YPPsym((P)"%i>>>");
  T273 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_265));
  bindingF1383 = T273;
  T272 = CALL1(CHKREF(YastYregister_primitive),bindingF1383);
  lit_266 = YPPsym((P)"%fi2f");
  T277 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_266));
  bindingF1382 = T277;
  T276 = CALL1(CHKREF(YastYregister_primitive),bindingF1382);
  T275 = T276;
  T274 = T275;
  return T274;
}

P YastY___main_7___() {
  P bindingF1465;
  P bindingF1464;
  P bindingF1463;
  P bindingF1462;
  P bindingF1461;
  P bindingF1460;
  P bindingF1459;
  P bindingF1458;
  P bindingF1457;
  P bindingF1456;
  P bindingF1455;
  P bindingF1454;
  P bindingF1453;
  P bindingF1452;
  P bindingF1451;
  P bindingF1450;
  P bindingF1449;
  P bindingF1448;
  P bindingF1447;
  P bindingF1446;
  P bindingF1445;
  P bindingF1444;
  P bindingF1443;
  P bindingF1442;
  P bindingF1441;
  P bindingF1440;
  P bindingF1439;
  P bindingF1438;
  P bindingF1437;
  P bindingF1436;
  P bindingF1435;
  P bindingF1434;
  P bindingF1433;
  P bindingF1432;
  P bindingF1431;
  P bindingF1430;
  P bindingF1429;
  P bindingF1428;
  P bindingF1427;
  P bindingF1426;
  P bindingF1425;
  P bindingF1424;
  P bindingF1423;
  P bindingF1422;
  P bindingF1421;
  P bindingF1420;
  P bindingF1419;
  P bindingF1418;
  P bindingF1417;
  P bindingF1416;
  P bindingF1415;
  P bindingF1414;
  P bindingF1413;
  P bindingF1412;
  P bindingF1411;
  P bindingF1410;
  P bindingF1409;
  P bindingF1408;
  P bindingF1407;
  P bindingF1406;
  P bindingF1405;
  P bindingF1404;
  P bindingF1403;
  P bindingF1402;
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
  lit_267 = YPPsym((P)"%f=");
  T1 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_267));
  bindingF1465 = T1;
  T0 = CALL1(CHKREF(YastYregister_primitive),bindingF1465);
  lit_268 = YPPsym((P)"%f<");
  T3 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_268));
  bindingF1464 = T3;
  T2 = CALL1(CHKREF(YastYregister_primitive),bindingF1464);
  lit_269 = YPPsym((P)"%f+");
  T5 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_269));
  bindingF1463 = T5;
  T4 = CALL1(CHKREF(YastYregister_primitive),bindingF1463);
  lit_270 = YPPsym((P)"%f*");
  T7 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_270));
  bindingF1462 = T7;
  T6 = CALL1(CHKREF(YastYregister_primitive),bindingF1462);
  lit_271 = YPPsym((P)"%f-");
  T9 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_271));
  bindingF1461 = T9;
  T8 = CALL1(CHKREF(YastYregister_primitive),bindingF1461);
  lit_272 = YPPsym((P)"%f/");
  T11 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_272));
  bindingF1460 = T11;
  T10 = CALL1(CHKREF(YastYregister_primitive),bindingF1460);
  lit_273 = YPPsym((P)"%ft");
  T13 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_273));
  bindingF1459 = T13;
  T12 = CALL1(CHKREF(YastYregister_primitive),bindingF1459);
  lit_274 = YPPsym((P)"%ft/");
  T15 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_274));
  bindingF1458 = T15;
  T14 = CALL1(CHKREF(YastYregister_primitive),bindingF1458);
  lit_275 = YPPsym((P)"%ff");
  T17 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_275));
  bindingF1457 = T17;
  T16 = CALL1(CHKREF(YastYregister_primitive),bindingF1457);
  lit_276 = YPPsym((P)"%fc");
  T19 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_276));
  bindingF1456 = T19;
  T18 = CALL1(CHKREF(YastYregister_primitive),bindingF1456);
  lit_277 = YPPsym((P)"%flo-bits");
  T21 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_277));
  bindingF1455 = T21;
  T20 = CALL1(CHKREF(YastYregister_primitive),bindingF1455);
  lit_278 = YPPsym((P)"%c=");
  T23 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_278));
  bindingF1454 = T23;
  T22 = CALL1(CHKREF(YastYregister_primitive),bindingF1454);
  lit_279 = YPPsym((P)"%c<");
  T25 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_279));
  bindingF1453 = T25;
  T24 = CALL1(CHKREF(YastYregister_primitive),bindingF1453);
  lit_280 = YPPsym((P)"%current-output-port");
  T27 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_280));
  bindingF1452 = T27;
  T26 = CALL1(CHKREF(YastYregister_primitive),bindingF1452);
  lit_281 = YPPsym((P)"%current-input-port");
  T29 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_281));
  bindingF1451 = T29;
  T28 = CALL1(CHKREF(YastYregister_primitive),bindingF1451);
  lit_282 = YPPsym((P)"%open-input-file");
  T31 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_282));
  bindingF1450 = T31;
  T30 = CALL1(CHKREF(YastYregister_primitive),bindingF1450);
  lit_283 = YPPsym((P)"%open-output-file");
  T33 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_283));
  bindingF1449 = T33;
  T32 = CALL1(CHKREF(YastYregister_primitive),bindingF1449);
  lit_284 = YPPsym((P)"%close-output-port");
  T35 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_284));
  bindingF1448 = T35;
  T34 = CALL1(CHKREF(YastYregister_primitive),bindingF1448);
  lit_285 = YPPsym((P)"%close-input-port");
  T37 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_285));
  bindingF1447 = T37;
  T36 = CALL1(CHKREF(YastYregister_primitive),bindingF1447);
  lit_286 = YPPsym((P)"%write-char");
  T39 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_286));
  bindingF1446 = T39;
  T38 = CALL1(CHKREF(YastYregister_primitive),bindingF1446);
  lit_287 = YPPsym((P)"%write-string");
  T41 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_287));
  bindingF1445 = T41;
  T40 = CALL1(CHKREF(YastYregister_primitive),bindingF1445);
  lit_288 = YPPsym((P)"%file-mtime");
  T43 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_288));
  bindingF1444 = T43;
  T42 = CALL1(CHKREF(YastYregister_primitive),bindingF1444);
  lit_289 = YPPsym((P)"%force-output");
  T45 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_289));
  bindingF1443 = T45;
  T44 = CALL1(CHKREF(YastYregister_primitive),bindingF1443);
  lit_290 = YPPsym((P)"%char-ready?");
  T47 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_290));
  bindingF1442 = T47;
  T46 = CALL1(CHKREF(YastYregister_primitive),bindingF1442);
  lit_291 = YPPsym((P)"%read-char");
  T49 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_291));
  bindingF1441 = T49;
  T48 = CALL1(CHKREF(YastYregister_primitive),bindingF1441);
  lit_292 = YPPsym((P)"%newline");
  T51 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_292));
  bindingF1440 = T51;
  T50 = CALL1(CHKREF(YastYregister_primitive),bindingF1440);
  lit_293 = YPPsym((P)"%eof-object");
  T53 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_293));
  bindingF1439 = T53;
  T52 = CALL1(CHKREF(YastYregister_primitive),bindingF1439);
  lit_294 = YPPsym((P)"%eof-object");
  T55 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_294));
  bindingF1438 = T55;
  T54 = CALL1(CHKREF(YastYregister_primitive),bindingF1438);
  lit_295 = YPPsym((P)"%peek-char");
  T57 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_295));
  bindingF1437 = T57;
  T56 = CALL1(CHKREF(YastYregister_primitive),bindingF1437);
  lit_296 = YPPsym((P)"%char-ready");
  T59 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_296));
  bindingF1436 = T59;
  T58 = CALL1(CHKREF(YastYregister_primitive),bindingF1436);
  lit_297 = YPPsym((P)"%object-traits");
  T61 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_297));
  bindingF1435 = T61;
  T60 = CALL1(CHKREF(YastYregister_primitive),bindingF1435);
  lit_298 = YPPsym((P)"%object-traits-setter");
  T63 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_298));
  bindingF1434 = T63;
  T62 = CALL1(CHKREF(YastYregister_primitive),bindingF1434);
  lit_299 = YPPsym((P)"%object-values");
  T65 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_299));
  bindingF1433 = T65;
  T64 = CALL1(CHKREF(YastYregister_primitive),bindingF1433);
  lit_300 = YPPsym((P)"%object-values-setter");
  T67 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_300));
  bindingF1432 = T67;
  T66 = CALL1(CHKREF(YastYregister_primitive),bindingF1432);
  lit_301 = YPPsym((P)"%raw-alloc");
  T69 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_301));
  bindingF1431 = T69;
  T68 = CALL1(CHKREF(YastYregister_primitive),bindingF1431);
  lit_302 = YPPsym((P)"%make-object");
  T71 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_302));
  bindingF1430 = T71;
  T70 = CALL1(CHKREF(YastYregister_primitive),bindingF1430);
  lit_303 = YPPsym((P)"%clone");
  T73 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_303));
  bindingF1429 = T73;
  T72 = CALL1(CHKREF(YastYregister_primitive),bindingF1429);
  lit_304 = YPPsym((P)"%slot-elt");
  T75 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_304));
  bindingF1428 = T75;
  T74 = CALL1(CHKREF(YastYregister_primitive),bindingF1428);
  lit_305 = YPPsym((P)"%slot-elt-setter");
  T77 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_305));
  bindingF1427 = T77;
  T76 = CALL1(CHKREF(YastYregister_primitive),bindingF1427);
  lit_306 = YPPsym((P)"%make-object-values");
  T79 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_306));
  bindingF1426 = T79;
  T78 = CALL1(CHKREF(YastYregister_primitive),bindingF1426);
  lit_307 = YPPsym((P)"%install-object-values");
  T81 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_307));
  bindingF1425 = T81;
  T80 = CALL1(CHKREF(YastYregister_primitive),bindingF1425);
  lit_308 = YPPsym((P)"%adjust-object-values-size");
  T83 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_308));
  bindingF1424 = T83;
  T82 = CALL1(CHKREF(YastYregister_primitive),bindingF1424);
  lit_309 = YPPsym((P)"%elt");
  T85 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_309));
  bindingF1423 = T85;
  T84 = CALL1(CHKREF(YastYregister_primitive),bindingF1423);
  lit_310 = YPPsym((P)"%elt-setter");
  T87 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_310));
  bindingF1422 = T87;
  T86 = CALL1(CHKREF(YastYregister_primitive),bindingF1422);
  lit_311 = YPPsym((P)"%%slen");
  T89 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_311));
  bindingF1421 = T89;
  T88 = CALL1(CHKREF(YastYregister_primitive),bindingF1421);
  lit_312 = YPPsym((P)"%%selt");
  T91 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_312));
  bindingF1420 = T91;
  T90 = CALL1(CHKREF(YastYregister_primitive),bindingF1420);
  lit_313 = YPPsym((P)"%%selt-setter");
  T93 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_313));
  bindingF1419 = T93;
  T92 = CALL1(CHKREF(YastYregister_primitive),bindingF1419);
  lit_314 = YPPsym((P)"%%sfab");
  T95 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_314));
  bindingF1418 = T95;
  T94 = CALL1(CHKREF(YastYregister_primitive),bindingF1418);
  lit_315 = YPPsym((P)"%%vlen");
  T97 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_315));
  bindingF1417 = T97;
  T96 = CALL1(CHKREF(YastYregister_primitive),bindingF1417);
  lit_316 = YPPsym((P)"%%velt");
  T99 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_316));
  bindingF1416 = T99;
  T98 = CALL1(CHKREF(YastYregister_primitive),bindingF1416);
  lit_317 = YPPsym((P)"%%velt-setter");
  T101 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_317));
  bindingF1415 = T101;
  T100 = CALL1(CHKREF(YastYregister_primitive),bindingF1415);
  lit_318 = YPPsym((P)"%%vfab");
  T103 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_318));
  bindingF1414 = T103;
  T102 = CALL1(CHKREF(YastYregister_primitive),bindingF1414);
  lit_319 = YPPsym((P)"%app-filename");
  T105 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_319));
  bindingF1413 = T105;
  T104 = CALL1(CHKREF(YastYregister_primitive),bindingF1413);
  lit_320 = YPPsym((P)"%app-args");
  T107 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_320));
  bindingF1412 = T107;
  T106 = CALL1(CHKREF(YastYregister_primitive),bindingF1412);
  lit_321 = YPPsym((P)"%locative-value");
  T109 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_321));
  bindingF1411 = T109;
  T108 = CALL1(CHKREF(YastYregister_primitive),bindingF1411);
  lit_322 = YPPsym((P)"%locative-value-setter");
  T111 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_322));
  bindingF1410 = T111;
  T110 = CALL1(CHKREF(YastYregister_primitive),bindingF1410);
  lit_323 = YPPsym((P)"%invoke-debugger");
  T113 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_323));
  bindingF1409 = T113;
  T112 = CALL1(CHKREF(YastYregister_primitive),bindingF1409);
  lit_324 = YPPsym((P)"%os-name");
  T115 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_324));
  bindingF1408 = T115;
  T114 = CALL1(CHKREF(YastYregister_primitive),bindingF1408);
  lit_325 = YPPsym((P)"%os-binding-value");
  T117 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_325));
  bindingF1407 = T117;
  T116 = CALL1(CHKREF(YastYregister_primitive),bindingF1407);
  lit_326 = YPPsym((P)"%os-binding-value-setter");
  T119 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_326));
  bindingF1406 = T119;
  T118 = CALL1(CHKREF(YastYregister_primitive),bindingF1406);
  lit_327 = YPPsym((P)"%break");
  T121 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_327));
  bindingF1405 = T121;
  T120 = CALL1(CHKREF(YastYregister_primitive),bindingF1405);
  lit_328 = YPPsym((P)"%binding-name");
  T123 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_328));
  bindingF1404 = T123;
  T122 = CALL1(CHKREF(YastYregister_primitive),bindingF1404);
  lit_329 = YPPsym((P)"%fun-reg");
  T125 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_329));
  bindingF1403 = T125;
  T124 = CALL1(CHKREF(YastYregister_primitive),bindingF1403);
  lit_330 = YPPsym((P)"%trace-on");
  T129 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_330));
  bindingF1402 = T129;
  T128 = CALL1(CHKREF(YastYregister_primitive),bindingF1402);
  T127 = T128;
  T126 = T127;
  return T126;
}

P YastY___main_8___() {
  P bindingF1479;
  P bindingF1478;
  P bindingF1477;
  P bindingF1476;
  P bindingF1475;
  P bindingF1474;
  P bindingF1473;
  P bindingF1472;
  P bindingF1471;
  P bindingF1470;
  P bindingF1469;
  P bindingF1468;
  P bindingF1467;
  P bindingF1466;
  P T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151;
  P T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135;
  P T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119;
  P T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103;
  P T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87;
  P T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71;
  P T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55;
  P T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_331 = YPPsym((P)"%trace-off");
  T1 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_331));
  bindingF1479 = T1;
  T0 = CALL1(CHKREF(YastYregister_primitive),bindingF1479);
  lit_332 = YPPsym((P)"%%apply");
  T3 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_332));
  bindingF1478 = T3;
  T2 = CALL1(CHKREF(YastYregister_primitive),bindingF1478);
  lit_333 = YPPsym((P)"%%mep-apply");
  T5 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_333));
  bindingF1477 = T5;
  T4 = CALL1(CHKREF(YastYregister_primitive),bindingF1477);
  lit_334 = YPPsym((P)"%next-methods");
  T7 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_334));
  bindingF1476 = T7;
  T6 = CALL1(CHKREF(YastYregister_primitive),bindingF1476);
  lit_335 = YPPsym((P)"%fapply");
  T9 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_335));
  bindingF1475 = T9;
  T8 = CALL1(CHKREF(YastYregister_primitive),bindingF1475);
  lit_336 = YPPsym((P)"%do-runtime-bindings");
  T11 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_336));
  bindingF1474 = T11;
  T10 = CALL1(CHKREF(YastYregister_primitive),bindingF1474);
  lit_337 = YPPsym((P)"%do-stack-frames");
  T13 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_337));
  bindingF1473 = T13;
  T12 = CALL1(CHKREF(YastYregister_primitive),bindingF1473);
  lit_338 = YPPsym((P)"%pair");
  T15 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_338));
  bindingF1472 = T15;
  T14 = CALL1(CHKREF(YastYregister_primitive),bindingF1472);
  lit_339 = YPPsym((P)"%grid-open");
  T17 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_339));
  bindingF1471 = T17;
  T16 = CALL1(CHKREF(YastYregister_primitive),bindingF1471);
  lit_340 = YPPsym((P)"%grid-close");
  T19 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_340));
  bindingF1470 = T19;
  T18 = CALL1(CHKREF(YastYregister_primitive),bindingF1470);
  lit_341 = YPPsym((P)"%grid-move");
  T21 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_341));
  bindingF1469 = T21;
  T20 = CALL1(CHKREF(YastYregister_primitive),bindingF1469);
  lit_342 = YPPsym((P)"%grid-read");
  T23 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_342));
  bindingF1468 = T23;
  T22 = CALL1(CHKREF(YastYregister_primitive),bindingF1468);
  lit_343 = YPPsym((P)"%grid-write");
  T25 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_343));
  bindingF1467 = T25;
  T24 = CALL1(CHKREF(YastYregister_primitive),bindingF1467);
  lit_344 = YPPsym((P)"%grid-refresh");
  T27 = CALL1(CHKREF(YastYfab_primitive),CHKREF(lit_344));
  bindingF1466 = T27;
  T26 = CALL1(CHKREF(YastYregister_primitive),bindingF1466);
  T29 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T28 = CALL3(CHKREF(YPisa),T29,Ynil,Ynil);
  YastYLmodule_loaderG = T28;
  regsym(&YastYLmodule_loaderG,"ast","<module-loader>");
  T30 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLmodule_loaderG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_module_loader_modules_341 = YPmet(FUNCODEREF(fun_module_loader_modules_341),YPPsym((P)"module-loader-modules"),T30,ENVNUL);
  T34 = BOUNDP(YastYmodule_loader_modules);
  if (T34 != YPfalse) {
    T33 = CHKREF(YastYmodule_loader_modules);
  } else {
    T33 = YPfalse;
  }
  T32 = fun_module_loader_modules_341;
  T31 = CALL2(CHKREF(YPdefine_method),T33,T32);
  YastYmodule_loader_modules = T31;
  regsym(&YastYmodule_loader_modules,"ast","module-loader-modules");
  T35 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YruntimeYLtabG),YPpair(CHKREF(YastYLmodule_loaderG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_module_loader_modules_setter_342 = YPmet(FUNCODEREF(fun_module_loader_modules_setter_342),YPPsym((P)"module-loader-modules-setter"),T35,ENVNUL);
  T39 = BOUNDP(YastYmodule_loader_modules_setter);
  if (T39 != YPfalse) {
    T38 = CHKREF(YastYmodule_loader_modules_setter);
  } else {
    T38 = YPfalse;
  }
  T37 = fun_module_loader_modules_setter_342;
  T36 = CALL2(CHKREF(YPdefine_method),T38,T37);
  YastYmodule_loader_modules_setter = T36;
  regsym(&YastYmodule_loader_modules_setter,"ast","module-loader-modules-setter");
  T40 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_343 = YPmet(FUNCODEREF(fun_343),YPfalse,T40,ENVNUL);
  T41 = fun_343;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmodule_loaderG),CHKREF(YastYmodule_loader_modules),CHKREF(YastYmodule_loader_modules_setter),CHKREF(YruntimeYLtabG),T41);
  T42 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLmodule_loaderG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_module_loader_stack_344 = YPmet(FUNCODEREF(fun_module_loader_stack_344),YPPsym((P)"module-loader-stack"),T42,ENVNUL);
  T46 = BOUNDP(YastYmodule_loader_stack);
  if (T46 != YPfalse) {
    T45 = CHKREF(YastYmodule_loader_stack);
  } else {
    T45 = YPfalse;
  }
  T44 = fun_module_loader_stack_344;
  T43 = CALL2(CHKREF(YPdefine_method),T45,T44);
  YastYmodule_loader_stack = T43;
  regsym(&YastYmodule_loader_stack,"ast","module-loader-stack");
  T47 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YastYLmodule_loaderG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_module_loader_stack_setter_345 = YPmet(FUNCODEREF(fun_module_loader_stack_setter_345),YPPsym((P)"module-loader-stack-setter"),T47,ENVNUL);
  T51 = BOUNDP(YastYmodule_loader_stack_setter);
  if (T51 != YPfalse) {
    T50 = CHKREF(YastYmodule_loader_stack_setter);
  } else {
    T50 = YPfalse;
  }
  T49 = fun_module_loader_stack_setter_345;
  T48 = CALL2(CHKREF(YPdefine_method),T50,T49);
  YastYmodule_loader_stack_setter = T48;
  regsym(&YastYmodule_loader_stack_setter,"ast","module-loader-stack-setter");
  T52 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_346 = YPmet(FUNCODEREF(fun_346),YPfalse,T52,ENVNUL);
  T53 = fun_346;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmodule_loaderG),CHKREF(YastYmodule_loader_stack),CHKREF(YastYmodule_loader_stack_setter),CHKREF(YLlstG),T53);
  T55 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T54 = CALL3(CHKREF(YPisa),T55,Ynil,Ynil);
  YastYLmoduleG = T54;
  regsym(&YastYLmoduleG,"ast","<module>");
  T56 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLmoduleG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_module_name_347 = YPmet(FUNCODEREF(fun_module_name_347),YPPsym((P)"module-name"),T56,ENVNUL);
  T60 = BOUNDP(YastYmodule_name);
  if (T60 != YPfalse) {
    T59 = CHKREF(YastYmodule_name);
  } else {
    T59 = YPfalse;
  }
  T58 = fun_module_name_347;
  T57 = CALL2(CHKREF(YPdefine_method),T59,T58);
  YastYmodule_name = T57;
  regsym(&YastYmodule_name,"ast","module-name");
  T61 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLsymG),YPpair(CHKREF(YastYLmoduleG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_module_name_setter_348 = YPmet(FUNCODEREF(fun_module_name_setter_348),YPPsym((P)"module-name-setter"),T61,ENVNUL);
  T65 = BOUNDP(YastYmodule_name_setter);
  if (T65 != YPfalse) {
    T64 = CHKREF(YastYmodule_name_setter);
  } else {
    T64 = YPfalse;
  }
  T63 = fun_module_name_setter_348;
  T62 = CALL2(CHKREF(YPdefine_method),T64,T63);
  YastYmodule_name_setter = T62;
  regsym(&YastYmodule_name_setter,"ast","module-name-setter");
  T66 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_349 = YPmet(FUNCODEREF(fun_349),YPfalse,T66,ENVNUL);
  T67 = fun_349;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmoduleG),CHKREF(YastYmodule_name),CHKREF(YastYmodule_name_setter),CHKREF(YLsymG),T67);
  T68 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLmoduleG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_module_target_environment_350 = YPmet(FUNCODEREF(fun_module_target_environment_350),YPPsym((P)"module-target-environment"),T68,ENVNUL);
  T72 = BOUNDP(YastYmodule_target_environment);
  if (T72 != YPfalse) {
    T71 = CHKREF(YastYmodule_target_environment);
  } else {
    T71 = YPfalse;
  }
  T70 = fun_module_target_environment_350;
  T69 = CALL2(CHKREF(YPdefine_method),T71,T70);
  YastYmodule_target_environment = T69;
  regsym(&YastYmodule_target_environment,"ast","module-target-environment");
  T73 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YastYLstatic_global_environmentG),YPpair(CHKREF(YastYLmoduleG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_module_target_environment_setter_351 = YPmet(FUNCODEREF(fun_module_target_environment_setter_351),YPPsym((P)"module-target-environment-setter"),T73,ENVNUL);
  T77 = BOUNDP(YastYmodule_target_environment_setter);
  if (T77 != YPfalse) {
    T76 = CHKREF(YastYmodule_target_environment_setter);
  } else {
    T76 = YPfalse;
  }
  T75 = fun_module_target_environment_setter_351;
  T74 = CALL2(CHKREF(YPdefine_method),T76,T75);
  YastYmodule_target_environment_setter = T74;
  regsym(&YastYmodule_target_environment_setter,"ast","module-target-environment-setter");
  T78 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_352 = YPmet(FUNCODEREF(fun_352),YPfalse,T78,ENVNUL);
  T79 = fun_352;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmoduleG),CHKREF(YastYmodule_target_environment),CHKREF(YastYmodule_target_environment_setter),CHKREF(YastYLstatic_global_environmentG),T79);
  T80 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLmoduleG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_module_syntax_environment_353 = YPmet(FUNCODEREF(fun_module_syntax_environment_353),YPPsym((P)"module-syntax-environment"),T80,ENVNUL);
  T84 = BOUNDP(YastYmodule_syntax_environment);
  if (T84 != YPfalse) {
    T83 = CHKREF(YastYmodule_syntax_environment);
  } else {
    T83 = YPfalse;
  }
  T82 = fun_module_syntax_environment_353;
  T81 = CALL2(CHKREF(YPdefine_method),T83,T82);
  YastYmodule_syntax_environment = T81;
  regsym(&YastYmodule_syntax_environment,"ast","module-syntax-environment");
  T85 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YastYLstatic_global_environmentG),YPpair(CHKREF(YastYLmoduleG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_module_syntax_environment_setter_354 = YPmet(FUNCODEREF(fun_module_syntax_environment_setter_354),YPPsym((P)"module-syntax-environment-setter"),T85,ENVNUL);
  T89 = BOUNDP(YastYmodule_syntax_environment_setter);
  if (T89 != YPfalse) {
    T88 = CHKREF(YastYmodule_syntax_environment_setter);
  } else {
    T88 = YPfalse;
  }
  T87 = fun_module_syntax_environment_setter_354;
  T86 = CALL2(CHKREF(YPdefine_method),T88,T87);
  YastYmodule_syntax_environment_setter = T86;
  regsym(&YastYmodule_syntax_environment_setter,"ast","module-syntax-environment-setter");
  T90 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_355 = YPmet(FUNCODEREF(fun_355),YPfalse,T90,ENVNUL);
  T91 = fun_355;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmoduleG),CHKREF(YastYmodule_syntax_environment),CHKREF(YastYmodule_syntax_environment_setter),CHKREF(YastYLstatic_global_environmentG),T91);
  T92 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YastYLmoduleG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_module_exports_356 = YPmet(FUNCODEREF(fun_module_exports_356),YPPsym((P)"module-exports"),T92,ENVNUL);
  T96 = BOUNDP(YastYmodule_exports);
  if (T96 != YPfalse) {
    T95 = CHKREF(YastYmodule_exports);
  } else {
    T95 = YPfalse;
  }
  T94 = fun_module_exports_356;
  T93 = CALL2(CHKREF(YPdefine_method),T95,T94);
  YastYmodule_exports = T93;
  regsym(&YastYmodule_exports,"ast","module-exports");
  T97 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YruntimeYLtabG),YPpair(CHKREF(YastYLmoduleG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_module_exports_setter_357 = YPmet(FUNCODEREF(fun_module_exports_setter_357),YPPsym((P)"module-exports-setter"),T97,ENVNUL);
  T101 = BOUNDP(YastYmodule_exports_setter);
  if (T101 != YPfalse) {
    T100 = CHKREF(YastYmodule_exports_setter);
  } else {
    T100 = YPfalse;
  }
  T99 = fun_module_exports_setter_357;
  T98 = CALL2(CHKREF(YPdefine_method),T100,T99);
  YastYmodule_exports_setter = T98;
  regsym(&YastYmodule_exports_setter,"ast","module-exports-setter");
  T102 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_358 = YPmet(FUNCODEREF(fun_358),YPfalse,T102,ENVNUL);
  T103 = fun_358;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmoduleG),CHKREF(YastYmodule_exports),CHKREF(YastYmodule_exports_setter),CHKREF(YruntimeYLtabG),T103);
  T104 = YPsig(YPpair(YPPsym((P)"mod"),YPpair(YPPsym((P)"syntax-env"),YPpair(YPPsym((P)"target-env"),Ynil))),YPpair(CHKREF(YastYLmoduleG),YPpair(CHKREF(YastYLstatic_global_environmentG),YPpair(CHKREF(YastYLstatic_global_environmentG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  YastYset_module_environments = YPmet(FUNCODEREF(YastYset_module_environments),YPPsym((P)"set-module-environments"),T104,ENVNUL);
  T105 = YastYset_module_environments;
  YastYset_module_environments = T105;
  regsym(&YastYset_module_environments,"ast","set-module-environments");
  T107 = YPsig(YPpair(YPPsym((P)"mod"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_360 = YPmet(FUNCODEREF(fun_360),YPfalse,T107,ENVNUL);
  T106 = YPsig(YPpair(YPPsym((P)"f"),YPpair(YPPsym((P)"loader"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYdo_module_loader_modules = YPmet(FUNCODEREF(YastYdo_module_loader_modules),YPPsym((P)"do-module-loader-modules"),T106,ENVNUL);
  T108 = YastYdo_module_loader_modules;
  YastYdo_module_loader_modules = T108;
  regsym(&YastYdo_module_loader_modules,"ast","do-module-loader-modules");
  T109 = YPsig(YPpair(YPPsym((P)"loader"),Ynil),YPpair(CHKREF(YastYLmodule_loaderG),Ynil),YPfalse,YPint((P)1),CHKREF(YastYLmoduleG));
  fun_module_loader_module_type_362 = YPmet(FUNCODEREF(fun_module_loader_module_type_362),YPPsym((P)"module-loader-module-type"),T109,ENVNUL);
  T113 = BOUNDP(YastYmodule_loader_module_type);
  if (T113 != YPfalse) {
    T112 = CHKREF(YastYmodule_loader_module_type);
  } else {
    T112 = YPfalse;
  }
  T111 = fun_module_loader_module_type_362;
  T110 = CALL2(CHKREF(YPdefine_method),T112,T111);
  YastYmodule_loader_module_type = T110;
  regsym(&YastYmodule_loader_module_type,"ast","module-loader-module-type");
  T114 = YPsig(YPpair(YPPsym((P)"module-loader"),YPpair(YPPsym((P)"mod"),Ynil)),YPpair(CHKREF(YastYLmodule_loaderG),YPpair(CHKREF(YastYLmoduleG),Ynil)),YPfalse,YPint((P)2),CHKREF(YastYLmodule_loaderG));
  YastYregister_moduleX = YPmet(FUNCODEREF(YastYregister_moduleX),YPPsym((P)"register-module!"),T114,ENVNUL);
  T115 = YastYregister_moduleX;
  YastYregister_moduleX = T115;
  regsym(&YastYregister_moduleX,"ast","register-module!");
  T116 = YPsig(YPpair(YPPsym((P)"module-loader"),YPpair(YPPsym((P)"name"),Ynil)),YPpair(CHKREF(YastYLmodule_loaderG),YPpair(CHKREF(YLsymG),Ynil)),YPfalse,YPint((P)2),CHKREF(YastYLmoduleG));
  YastYprobe_module = YPmet(FUNCODEREF(YastYprobe_module),YPPsym((P)"probe-module"),T116,ENVNUL);
  T117 = YastYprobe_module;
  YastYprobe_module = T117;
  regsym(&YastYprobe_module,"ast","probe-module");
  lit_345 = YPsb((P)"%s]\n");
  lit_346 = YPsb((P)"%s[Loading module %s...\n");
  lit_347 = YPsb((P)"%s: error: Circular use of %s not allowed");
  lit_348 = YPsb((P)"  ");
  T120 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_365 = YPmet(FUNCODEREF(fun_365),YPfalse,T120,ENVNUL);
  T119 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_366 = YPmet(FUNCODEREF(fun_366),YPfalse,T119,ENVNUL);
  T118 = YPsig(YPpair(YPPsym((P)"loader"),YPpair(YPPsym((P)"name"),Ynil)),YPpair(CHKREF(YastYLmodule_loaderG),YPpair(CHKREF(YLsymG),Ynil)),YPfalse,YPint((P)2),CHKREF(YastYLmoduleG));
  YastYload_and_register_module = YPmet(FUNCODEREF(YastYload_and_register_module),YPPsym((P)"load-and-register-module"),T118,ENVNUL);
  T121 = YastYload_and_register_module;
  YastYload_and_register_module = T121;
  regsym(&YastYload_and_register_module,"ast","load-and-register-module");
  T123 = YPsig(YPpair(YPPsym((P)"loader"),YPpair(YPPsym((P)"name"),Ynil)),YPpair(CHKREF(YastYLmodule_loaderG),YPpair(CHKREF(YLsymG),Ynil)),YPfalse,YPint((P)2),CHKREF(YastYLmoduleG));
  T122 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),YPPsym((P)"load-module"),T123,Ynil,YPfalse);
  YastYload_module = T122;
  regsym(&YastYload_module,"ast","load-module");
  lit_349 = YPsb((P)"Tried to export %= and %= from %= as %=");
  T124 = YPsig(YPpair(YPPsym((P)"module"),YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"binding"),Ynil))),YPpair(CHKREF(YastYLmoduleG),YPpair(CHKREF(YastYLbinding_nameG),YPpair(CHKREF(YastYLmodule_bindingG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  YastYexport_bindingX = YPmet(FUNCODEREF(YastYexport_bindingX),YPPsym((P)"export-binding!"),T124,ENVNUL);
  T125 = YastYexport_bindingX;
  YastYexport_bindingX = T125;
  regsym(&YastYexport_bindingX,"ast","export-binding!");
  T126 = YPsig(YPpair(YPPsym((P)"binding"),YPpair(YPPsym((P)"module"),Ynil)),YPpair(CHKREF(YastYLmodule_bindingG),YPpair(CHKREF(YastYLmoduleG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  YastYbinding_native_toQ = YPmet(FUNCODEREF(YastYbinding_native_toQ),YPPsym((P)"binding-native-to?"),T126,ENVNUL);
  T127 = YastYbinding_native_toQ;
  YastYbinding_native_toQ = T127;
  regsym(&YastYbinding_native_toQ,"ast","binding-native-to?");
  lit_350 = YPsb((P)"%s: warning: undefined binding '%s'.\n");
  T129 = YPsig(YPpair(YPPsym((P)"binding"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_370 = YPmet(FUNCODEREF(fun_370),YPfalse,T129,ENVNUL);
  T128 = YPsig(YPpair(YPPsym((P)"mod"),Ynil),YPpair(CHKREF(YastYLmoduleG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YastYreport_undefined_global_bindings = YPmet(FUNCODEREF(YastYreport_undefined_global_bindings),YPPsym((P)"report-undefined-global-bindings"),T128,ENVNUL);
  T130 = YastYreport_undefined_global_bindings;
  YastYreport_undefined_global_bindings = T130;
  regsym(&YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
  T135 = YPsig(YPpair(YPPsym((P)"v"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_372 = YPmet(FUNCODEREF(fun_372),YPfalse,T135,ENVNUL);
  T134 = YPsig(YPpair(YPPsym((P)"uses-mod"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_373 = YPmet(FUNCODEREF(fun_373),YPfalse,T134,ENVNUL);
  T133 = YPsig(YPpair(YPPsym((P)"mod"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_374 = YPmet(FUNCODEREF(fun_374),YPfalse,T133,ENVNUL);
  T132 = YPsig(YPpair(YPPsym((P)"modname"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_add_user_375 = YPmet(FUNCODEREF(fun_add_user_375),YPPsym((P)"add-user"),T132,ENVNUL);
  T131 = YPsig(YPpair(YPPsym((P)"loader"),YPpair(YPPsym((P)"modnames"),Ynil)),YPpair(CHKREF(YastYLmodule_loaderG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  YastYcompute_transitive_users = YPmet(FUNCODEREF(YastYcompute_transitive_users),YPPsym((P)"compute-transitive-users"),T131,ENVNUL);
  T136 = YastYcompute_transitive_users;
  YastYcompute_transitive_users = T136;
  regsym(&YastYcompute_transitive_users,"ast","compute-transitive-users");
  T138 = YPsig(YPpair(YPPsym((P)"binding"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_377 = YPmet(FUNCODEREF(fun_377),YPfalse,T138,ENVNUL);
  T137 = YPsig(YPpair(YPPsym((P)"loader"),YPpair(YPPsym((P)"mod"),Ynil)),YPpair(CHKREF(YastYLmodule_loaderG),YPpair(CHKREF(YastYLmoduleG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYremove_module_internalX = YPmet(FUNCODEREF(YastYremove_module_internalX),YPPsym((P)"remove-module-internal!"),T137,ENVNUL);
  T139 = YastYremove_module_internalX;
  YastYremove_module_internalX = T139;
  regsym(&YastYremove_module_internalX,"ast","remove-module-internal!");
  T141 = YPsig(YPpair(YPPsym((P)"modname"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_379 = YPmet(FUNCODEREF(fun_379),YPfalse,T141,ENVNUL);
  T140 = YPsig(YPpair(YPPsym((P)"loader"),YPpair(YPPsym((P)"modnames"),Ynil)),YPpair(CHKREF(YastYLmodule_loaderG),YPpair(CHKREF(YLlstG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYremove_modules_by_nameX = YPmet(FUNCODEREF(YastYremove_modules_by_nameX),YPPsym((P)"remove-modules-by-name!"),T140,ENVNUL);
  T142 = YastYremove_modules_by_nameX;
  YastYremove_modules_by_nameX = T142;
  regsym(&YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
  T143 = YPsig(YPpair(YPPsym((P)"module"),YPpair(YPPsym((P)"module-loader"),Ynil)),YPpair(CHKREF(YastYLmoduleG),YPpair(CHKREF(YastYLmodule_loaderG),Ynil)),YPfalse,YPint((P)2),CHKREF(YastYLstatic_global_environmentG));
  YastYfab_static_global_environment = YPmet(FUNCODEREF(YastYfab_static_global_environment),YPPsym((P)"fab-static-global-environment"),T143,ENVNUL);
  T144 = YastYfab_static_global_environment;
  YastYfab_static_global_environment = T144;
  regsym(&YastYfab_static_global_environment,"ast","fab-static-global-environment");
  lit_351 = YPsb((P)"Can't find binding '%=' for copy.\n");
  T146 = YPsig(YPpair(YPPsym((P)"x-1241"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_x_1243_382 = YPmet(FUNCODEREF(fun_x_1243_382),YPPsym((P)"x-1243"),T146,ENVNUL);
  T145 = YPsig(YPpair(YPPsym((P)"dst-env"),YPpair(YPPsym((P)"src-env"),YPpair(YPPsym((P)"names"),Ynil))),YPpair(CHKREF(YastYLstatic_global_environmentG),YPpair(CHKREF(YastYLstatic_global_environmentG),YPpair(CHKREF(YLcolG),Ynil))),YPfalse,YPint((P)3),CHKREF(YastYLstatic_global_environmentG));
  YastYcopy_environment_bindings = YPmet(FUNCODEREF(YastYcopy_environment_bindings),YPPsym((P)"copy-environment-bindings"),T145,ENVNUL);
  T147 = YastYcopy_environment_bindings;
  YastYcopy_environment_bindings = T147;
  regsym(&YastYcopy_environment_bindings,"ast","copy-environment-bindings");
  T148 = YPsig(YPpair(YPPsym((P)"module"),YPpair(YPPsym((P)"old-env"),YPpair(YPPsym((P)"subset"),Ynil))),YPpair(CHKREF(YastYLmoduleG),YPpair(CHKREF(YastYLstatic_global_environmentG),YPpair(CHKREF(YLcolG),Ynil))),YPfalse,YPint((P)3),CHKREF(YastYLstatic_global_environmentG));
  fun_fab_subset_environment_384 = YPmet(FUNCODEREF(fun_fab_subset_environment_384),YPPsym((P)"fab-subset-environment"),T148,ENVNUL);
  T152 = BOUNDP(YastYfab_subset_environment);
  if (T152 != YPfalse) {
    T151 = CHKREF(YastYfab_subset_environment);
  } else {
    T151 = YPfalse;
  }
  T150 = fun_fab_subset_environment_384;
  T149 = CALL2(CHKREF(YPdefine_method),T151,T150);
  YastYfab_subset_environment = T149;
  regsym(&YastYfab_subset_environment,"ast","fab-subset-environment");
  YastYTruntime_environmentT = CHKREF(Ynul);
  regsym(&YastYTruntime_environmentT,"ast","*runtime-environment*");
  YastYTruntime_moduleT = CHKREF(Ynul);
  regsym(&YastYTruntime_moduleT,"ast","*runtime-module*");
  YastYTruntime_module_loaderT = CHKREF(Ynul);
  regsym(&YastYTruntime_module_loaderT,"ast","*runtime-module-loader*");
  T153 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  YastYruntime_environment = YPmet(FUNCODEREF(YastYruntime_environment),YPPsym((P)"runtime-environment"),T153,ENVNUL);
  T154 = YastYruntime_environment;
  YastYruntime_environment = T154;
  regsym(&YastYruntime_environment,"ast","runtime-environment");
  T155 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  YastYruntime_module = YPmet(FUNCODEREF(YastYruntime_module),YPPsym((P)"runtime-module"),T155,ENVNUL);
  T156 = YastYruntime_module;
  YastYruntime_module = T156;
  regsym(&YastYruntime_module,"ast","runtime-module");
  T157 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  YastYruntime_module_loader = YPmet(FUNCODEREF(YastYruntime_module_loader),YPPsym((P)"runtime-module-loader"),T157,ENVNUL);
  T158 = YastYruntime_module_loader;
  YastYruntime_module_loader = T158;
  regsym(&YastYruntime_module_loader,"ast","runtime-module-loader");
  lit_352 = YPPsym((P)"runtime");
  T160 = YPsig(YPpair(YPPsym((P)"mod"),YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"loc"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_388 = YPmet(FUNCODEREF(fun_388),YPfalse,T160,ENVNUL);
  T159 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  YastYinit_runtime = YPmet(FUNCODEREF(YastYinit_runtime),YPPsym((P)"init-runtime"),T159,ENVNUL);
  T161 = YastYinit_runtime;
  YastYinit_runtime = T161;
  regsym(&YastYinit_runtime,"ast","init-runtime");
  lit_353 = YPpair(YPPsym((P)"if"), YPpair(YPPsym((P)"seq"), YPpair(YPPsym((P)"set"), YPpair(YPPsym((P)"fun"), YPpair(YPPsym((P)"let"), YPpair(YPPsym((P)"loc"), YPpair(YPPsym((P)"lab"), YPpair(YPPsym((P)"fin"), YPpair(YPPsym((P)"dv"), YPpair(YPPsym((P)"dm"), YPpair(YPPsym((P)"dg"), YPpair(YPPsym((P)"isa"), YPpair(YPPsym((P)"slot"), YPpair(YPPsym((P)"macro-expand"), YPpair(YPPsym((P)"next-method"), YPpair(YPPsym((P)"quote"), YPpair(YPPsym((P)"df"), YPpair(YPPsym((P)"try"), YPpair(YPPsym((P)"rep"), YPpair(YPPsym((P)"mif"), YPpair(YPPsym((P)"and"), YPpair(YPPsym((P)"or"), YPpair(YPPsym((P)"select"), YPpair(YPPsym((P)"case"), YPpair(YPPsym((P)"inc"), YPpair(YPPsym((P)"dec"), YPpair(YPPsym((P)"unless"), YPpair(YPPsym((P)"when"), YPpair(YPPsym((P)"assert"), YPpair(YPPsym((P)"for"), YPpair(YPPsym((P)"collecting"), YPpair(YPPsym((P)"pushf"), YPpair(YPPsym((P)"popf"), YPpair(YPPsym((P)"quasiquote"), YPpair(YPPsym((P)"<any>"), YPpair(YPPsym((P)"as"), YPpair(YPPsym((P)"=="), YPpair(YPPsym((P)"="), YPpair(YPPsym((P)"<"), YPpair(YPPsym((P)"~="), YPpair(YPPsym((P)"~=="), YPpair(YPPsym((P)">"), YPpair(YPPsym((P)"<="), YPpair(YPPsym((P)">="), YPpair(YPPsym((P)"min"), YPpair(YPPsym((P)"max"), YPpair(YPPsym((P)"isa?"), YPpair(YPPsym((P)"object<"), YPpair(YPPsym((P)"object-direct-slots"), YPpair(YPPsym((P)"object-direct-parents"), YPpair(YPPsym((P)"object-slots"), YPpair(YPPsym((P)"object-parents"), YPpair(YPPsym((P)"object-name"), YPpair(YPPsym((P)"nul"), YPpair(YPPsym((P)"nul?"), YPpair(YPPsym((P)"<log>"), YPpair(YPPsym((P)"not"), YPpair(YPPsym((P)"<chr>"), YPpair(YPPsym((P)"lowercase?"), YPpair(YPPsym((P)"uppercase?"), YPpair(YPPsym((P)"as-lowercase"), YPpair(YPPsym((P)"as-uppercase"), YPpair(YPPsym((P)"alphabetic?"), YPpair(YPPsym((P)"numeric?"), YPpair(YPPsym((P)"to-digit"), YPpair(YPPsym((P)"eof-object?"), YPpair(YPPsym((P)"<num>"), YPpair(YPPsym((P)"+"), YPpair(YPPsym((P)"-"), YPpair(YPPsym((P)"*"), YPpair(YPPsym((P)"/"), YPpair(YPPsym((P)"floor"), YPpair(YPPsym((P)"ceiling"), YPpair(YPPsym((P)"round"), YPpair(YPPsym((P)"truncate"), YPpair(YPPsym((P)"floor/"), YPpair(YPPsym((P)"ceiling/"), YPpair(YPPsym((P)"round/"), YPpair(YPPsym((P)"truncate/"), YPpair(YPPsym((P)"modulo"), YPpair(YPPsym((P)"remainder"), YPpair(YPPsym((P)"pos?"), YPpair(YPPsym((P)"zero?"), YPpair(YPPsym((P)"neg?"), YPpair(YPPsym((P)"neg"), YPpair(YPPsym((P)"abs"), YPpair(YPPsym((P)"*print-base*"), YPpair(YPPsym((P)"num-to-str"), YPpair(YPPsym((P)"str-to-num"), YPpair(YPPsym((P)"<int>"), YPpair(YPPsym((P)"logior"), YPpair(YPPsym((P)"logxor"), YPpair(YPPsym((P)"logand"), YPpair(YPPsym((P)"lognot"), YPpair(YPPsym((P)"logbit?"), YPpair(YPPsym((P)"even?"), YPpair(YPPsym((P)"odd?"), YPpair(YPPsym((P)"ash"), YPpair(YPPsym((P)"lsh"), YPpair(YPPsym((P)"<flo>"), YPpair(YPPsym((P)"flo-bits"), YPpair(YPPsym((P)"<loc>"), YPpair(YPPsym((P)"locative-value"), YPpair(YPPsym((P)"locative-value-setter"), YPpair(YPPsym((P)"address-of"), YPpair(YPPsym((P)"<col>"), YPpair(YPPsym((P)"len"), YPpair(YPPsym((P)"elt"), YPpair(YPPsym((P)"elt-setter"), YPpair(YPPsym((P)"empty?"), YPpair(YPPsym((P)"empty"), YPpair(YPPsym((P)"default"), YPpair(YPPsym((P)"fab"), YPpair(YPPsym((P)"fabs"), YPpair(YPPsym((P)"fill"), YPpair(YPPsym((P)"alter"), YPpair(YPPsym((P)"any?"), YPpair(YPPsym((P)"all?"), YPpair(YPPsym((P)"reduce"), YPpair(YPPsym((P)"reduce+"), YPpair(YPPsym((P)"find-key"), YPpair(YPPsym((P)"del-key"), YPpair(YPPsym((P)"del-keys"), YPpair(YPPsym((P)"do"), YPpair(YPPsym((P)"do2"), YPpair(YPPsym((P)"map"), YPpair(YPPsym((P)"map2"), YPpair(YPPsym((P)"do-keyed"), YPpair(YPPsym((P)"map-keyed"), YPpair(YPPsym((P)"mem?"), YPpair(YPPsym((P)"ini-state"), YPpair(YPPsym((P)"fin-state?"), YPpair(YPPsym((P)"nxt-state"), YPpair(YPPsym((P)"now-elt"), YPpair(YPPsym((P)"now-elt-setter"), YPpair(YPPsym((P)"now-key"), YPpair(YPPsym((P)"copy-state"), YPpair(YPPsym((P)"<map>"), YPpair(YPPsym((P)"<assocs>"), YPpair(YPPsym((P)"assocs-test"), YPpair(YPPsym((P)"<tab>"), YPpair(YPPsym((P)"table-growth-factor"), YPpair(YPPsym((P)"table-growth-threshold"), YPpair(YPPsym((P)"table-shrink-threshold"), YPpair(YPPsym((P)"table-protocol"), YPpair(YPPsym((P)"$permanent-hash-state"), YPpair(YPPsym((P)"current-gc-state"), YPpair(YPPsym((P)"id-hash"), YPpair(YPPsym((P)"<str-tab>"), YPpair(YPPsym((P)"case-insensitive-string-hash"), YPpair(YPPsym((P)"case-insensitive-string-equal"), YPpair(YPPsym((P)"<seq>"), YPpair(YPPsym((P)"add"), YPpair(YPPsym((P)"1st"), YPpair(YPPsym((P)"2nd"), YPpair(YPPsym((P)"3rd"), YPpair(YPPsym((P)"last"), YPpair(YPPsym((P)"pos"), YPpair(YPPsym((P)"rev"), YPpair(YPPsym((P)"rev!"), YPpair(YPPsym((P)"cat"), YPpair(YPPsym((P)"cat!"), YPpair(YPPsym((P)"cat2"), YPpair(YPPsym((P)"sub"), YPpair(YPPsym((P)"sub-setter"), YPpair(YPPsym((P)"pick"), YPpair(YPPsym((P)"del"), YPpair(YPPsym((P)"del-dups"), YPpair(YPPsym((P)"<tup>"), YPpair(YPPsym((P)"tup"), YPpair(YPPsym((P)"<lst>"), YPpair(YPPsym((P)"<list>"), YPpair(YPPsym((P)"head"), YPpair(YPPsym((P)"tail"), YPpair(YPPsym((P)"lst"), YPpair(YPPsym((P)"list"), YPpair(YPPsym((P)"pair"), YPpair(YPPsym((P)"nil"), YPpair(YPPsym((P)"push"), YPpair(YPPsym((P)"pop"), YPpair(YPPsym((P)"<opts>"), YPpair(YPPsym((P)"<flat>"), YPpair(YPPsym((P)"<vec>"), YPpair(YPPsym((P)"vec"), YPpair(YPPsym((P)"<str>"), YPpair(YPPsym((P)"str"), YPpair(YPPsym((P)"to-str"), YPpair(YPPsym((P)"<buf>"), YPpair(YPPsym((P)"buf"), YPpair(YPPsym((P)"push-last!"), YPpair(YPPsym((P)"pop-last!"), YPpair(YPPsym((P)"<range>"), YPpair(YPPsym((P)"from"), YPpair(YPPsym((P)"from-by"), YPpair(YPPsym((P)"from-to"), YPpair(YPPsym((P)"from-to-by"), YPpair(YPPsym((P)"from-below"), YPpair(YPPsym((P)"from-below-by"), YPpair(YPPsym((P)"from-above"), YPpair(YPPsym((P)"from-above-by"), YPpair(YPPsym((P)"<step>"), YPpair(YPPsym((P)"first-then"), YPpair(YPPsym((P)"<sym>"), YPpair(YPPsym((P)"as"), YPpair(YPPsym((P)"make-sym"), YPpair(YPPsym((P)"gensym"), YPpair(YPPsym((P)"make-setter-name"), YPpair(YPPsym((P)"var-name"), YPpair(YPPsym((P)"var-type"), YPpair(YPPsym((P)"<slot>"), YPpair(YPPsym((P)"slot-owner"), YPpair(YPPsym((P)"slot-getter"), YPpair(YPPsym((P)"slot-setter"), YPpair(YPPsym((P)"slot-type"), YPpair(YPPsym((P)"slot-init"), YPpair(YPPsym((P)"slot-value"), YPpair(YPPsym((P)"slot-value-setter"), YPpair(YPPsym((P)"find-getter"), YPpair(YPPsym((P)"find-setter"), YPpair(YPPsym((P)"add-slot"), YPpair(YPPsym((P)"<fun>"), YPpair(YPPsym((P)"fun-name"), YPpair(YPPsym((P)"fun-names"), YPpair(YPPsym((P)"fun-specs"), YPpair(YPPsym((P)"fun-nary?"), YPpair(YPPsym((P)"fun-arity"), YPpair(YPPsym((P)"fun-value"), YPpair(YPPsym((P)"identity"), YPpair(YPPsym((P)"compose"), YPpair(YPPsym((P)"curry"), YPpair(YPPsym((P)"rcurry"), YPpair(YPPsym((P)"always"), YPpair(YPPsym((P)"apply"), YPpair(YPPsym((P)"<gen>"), YPpair(YPPsym((P)"fun-mets"), YPpair(YPPsym((P)"gen-add-met"), YPpair(YPPsym((P)"sorted-app-mets"), YPpair(YPPsym((P)"<met>"), YPpair(YPPsym((P)"met-app?"), YPpair(YPPsym((P)"<condition>"), YPpair(YPPsym((P)"default-handler"), YPpair(YPPsym((P)"sig"), YPpair(YPPsym((P)"<simple-condition>"), YPpair(YPPsym((P)"condition-message"), YPpair(YPPsym((P)"condition-arguments"), YPpair(YPPsym((P)"<serious-condition>"), YPpair(YPPsym((P)"<error>"), YPpair(YPPsym((P)"error"), YPpair(YPPsym((P)"<simple-error>"), YPpair(YPPsym((P)"<handler>"), YPpair(YPPsym((P)"handler-function"), YPpair(YPPsym((P)"make-handler"), YPpair(YPPsym((P)"handler-matches?"), YPpair(YPPsym((P)"<port>"), YPpair(YPPsym((P)"<input-port>"), YPpair(YPPsym((P)"read-char"), YPpair(YPPsym((P)"peek-char"), YPpair(YPPsym((P)"char-ready?"), YPpair(YPPsym((P)"<output-port>"), YPpair(YPPsym((P)"newline"), YPpair(YPPsym((P)"force-output"), YPpair(YPPsym((P)"write-char"), YPpair(YPPsym((P)"write-string"), YPpair(YPPsym((P)"<file-port>"), YPpair(YPPsym((P)"<file-input-port>"), YPpair(YPPsym((P)"open-input-file"), YPpair(YPPsym((P)"close-input-port"), YPpair(YPPsym((P)"call-with-input-file"), YPpair(YPPsym((P)"in"), YPpair(YPPsym((P)"<file-output-port>"), YPpair(YPPsym((P)"open-output-file"), YPpair(YPPsym((P)"close-output-port"), YPpair(YPPsym((P)"call-with-output-file"), YPpair(YPPsym((P)"out"), YPpair(YPPsym((P)"<string-port>"), YPpair(YPPsym((P)"port-contents"), YPpair(YPPsym((P)"<string-input-port>"), YPpair(YPPsym((P)"port-index"), YPpair(YPPsym((P)"call-with-string-input-port"), YPpair(YPPsym((P)"<string-output-port>"), YPpair(YPPsym((P)"call-with-string-output-port"), YPpair(YPPsym((P)"read"), YPpair(YPPsym((P)"read-from-string"), YPpair(YPPsym((P)"read-file"), YPpair(YPPsym((P)"write"), YPpair(YPPsym((P)"display"), YPpair(YPPsym((P)"writeln"), YPpair(YPPsym((P)"write-to-string"), YPpair(YPPsym((P)"format"), YPpair(YPPsym((P)"app-filename"), YPpair(YPPsym((P)"app-args"), YPpair(YPPsym((P)"do-stack-frames"), YPpair(YPPsym((P)"backtrace"), YPpair(YPPsym((P)"match-atom"), YPpair(YPPsym((P)"match-empty-list"), YPpair(YPPsym((P)"match-unquote"), YPpair(YPPsym((P)"match-sublist"), YPpair(YPPsym((P)"sexpr-signature-parameters"), Ynil))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
  YastYsyntax_environment_bindings = CHKREF(lit_353);
  regsym(&YastYsyntax_environment_bindings,"ast","syntax-environment-bindings");
  T162 = YPsig(YPpair(YPPsym((P)"module"),Ynil),YPpair(CHKREF(YastYLmoduleG),Ynil),YPfalse,YPint((P)1),CHKREF(YastYLstatic_global_environmentG));
  YastYfab_syntax_environment = YPmet(FUNCODEREF(YastYfab_syntax_environment),YPPsym((P)"fab-syntax-environment"),T162,ENVNUL);
  T163 = YastYfab_syntax_environment;
  YastYfab_syntax_environment = T163;
  regsym(&YastYfab_syntax_environment,"ast","fab-syntax-environment");
  T164 = YPsig(YPpair(YPPsym((P)"loader"),YPpair(YPPsym((P)"name"),Ynil)),YPpair(CHKREF(YastYLmodule_loaderG),YPpair(CHKREF(YLsymG),Ynil)),YPfalse,YPint((P)2),CHKREF(YastYLmoduleG));
  YastYfab_p2c_module = YPmet(FUNCODEREF(YastYfab_p2c_module),YPPsym((P)"fab-p2c-module"),T164,ENVNUL);
  T165 = YastYfab_p2c_module;
  YastYfab_p2c_module = T165;
  regsym(&YastYfab_p2c_module,"ast","fab-p2c-module");
  T166 = YPfalse;
  return T166;
}

P YastY___main_9___() {
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_354 = YPpair(YPPsym((P)"unless"), YPpair(YPPsym((P)"when"), YPpair(YPPsym((P)"or"), YPpair(YPPsym((P)"and"), Ynil))));
  T0 = YPsig(YPpair(YPPsym((P)"env"),Ynil),YPpair(CHKREF(YastYLstatic_global_environmentG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YastYinit_p2c_boot_environment = YPmet(FUNCODEREF(YastYinit_p2c_boot_environment),YPPsym((P)"init-p2c-boot-environment"),T0,ENVNUL);
  T1 = YastYinit_p2c_boot_environment;
  YastYinit_p2c_boot_environment = T1;
  regsym(&YastYinit_p2c_boot_environment,"ast","init-p2c-boot-environment");
  lit_355 = YPpair(YPPsym((P)"seq"), YPpair(YPPsym((P)"use"), Ynil));
  T2 = YPsig(YPpair(YPPsym((P)"env"),YPpair(YPPsym((P)"loader"),Ynil)),YPpair(CHKREF(YastYLstatic_global_environmentG),YPpair(CHKREF(YastYLmodule_loaderG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYinit_p2c_regular_environment = YPmet(FUNCODEREF(YastYinit_p2c_regular_environment),YPPsym((P)"init-p2c-regular-environment"),T2,ENVNUL);
  T3 = YastYinit_p2c_regular_environment;
  YastYinit_p2c_regular_environment = T3;
  regsym(&YastYinit_p2c_regular_environment,"ast","init-p2c-regular-environment");
  T4 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  YastYinit_ast = YPmet(FUNCODEREF(YastYinit_ast),YPPsym((P)"init-ast"),T4,ENVNUL);
  T5 = YastYinit_ast;
  YastYinit_ast = T5;
  regsym(&YastYinit_ast,"ast","init-ast");
  T7 = YPsig(YPpair(YPPsym((P)"env"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_395 = YPmet(FUNCODEREF(fun_loop_395),YPPsym((P)"loop"),T7,ENVNUL);
  T6 = YPsig(YPpair(YPPsym((P)"f"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YastYLstatic_global_environmentG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYdo_static_global_bindings = YPmet(FUNCODEREF(YastYdo_static_global_bindings),YPPsym((P)"do-static-global-bindings"),T6,ENVNUL);
  T8 = YastYdo_static_global_bindings;
  YastYdo_static_global_bindings = T8;
  regsym(&YastYdo_static_global_bindings,"ast","do-static-global-bindings");
  T9 = YPfalse;
  return T9;
}

/* MODULES USED: */

extern void load_module_boot (void);
extern void load_module_macros (void);
extern void load_module_runtime (void);
extern void load_module_write (void);
extern void load_module_syntax (void);
extern void load_module_strings (void);

/* EXPRESSION: */

extern void load_module_ast (void);

void load_module_ast (void) {
  static int need_init = 1;
  if (!need_init) return;

  load_module_boot();
  load_module_macros();
  load_module_runtime();
  load_module_write();
  load_module_syntax();
  load_module_strings();

  (P)YastY___main_0___();
  (P)YastY___main_1___();
  (P)YastY___main_2___();
  (P)YastY___main_3___();
  (P)YastY___main_4___();
  (P)YastY___main_5___();
  (P)YastY___main_6___();
  (P)YastY___main_7___();
  (P)YastY___main_8___();
  (P)YastY___main_9___();

  need_init = 0;
}

/* END OF GENERATED CODE. */
