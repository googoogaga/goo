/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: ast */

DEF(YastYast_evaluate,"ast","ast-evaluate");
EXT(YruntimeYlocative_value,"runtime","locative-value");
DEF(YastYenvironment_module,"ast","environment-module");
DEF(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
DEF(YastYDsexpr_compile_time_tag,"ast","$sexpr-compile-time-tag");
DEF(YastYbinding_value_setter,"ast","binding-value-setter");
DEF(YastYfunction_body_setter,"ast","function-body-setter");
DEF(YastYspecial_use_module,"ast","special-use-module");
EXT(YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
EXT(YsyntaxYsexpr_make_getter,"syntax","sexpr-make-getter");
DEF(YastYcompile_time_program,"ast","compile-time-program");
EXT(YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
DEF(YastYmonitor_info,"ast","monitor-info");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
DEF(YastYprogram_type,"ast","program-type");
DEF(YastYspecial_unwind_protect,"ast","special-unwind-protect");
DEF(YastYLdefinitionG,"ast","<definition>");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YLlstG,"boot","<lst>");
EXT(YLsigG,"boot","<sig>");
DEF(YastYast_macro_expand,"ast","ast-macro-expand");
DEF(YastYsignature_naryQ,"ast","signature-nary?");
DEF(YastYDsexpr_use_module_tag,"ast","$sexpr-use-module-tag");
DEF(YastYenvironment_module_loader_setter,"ast","environment-module-loader-setter");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
DEF(YastYLcomputed_programG,"ast","<computed-program>");
EXT(YruntimeYassq,"runtime","assq");
DEF(YastYLvariable_definitionG,"ast","<variable-definition>");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYE,"runtime","=");
DEF(YastYinit_p2c_boot_environment,"ast","init-p2c-boot-environment");
DEF(YastYconstant_value_setter,"ast","constant-value-setter");
EXT(Yslot_init,"boot","slot-init");
DEF(YastYassignment_binding,"ast","assignment-binding");
DEF(YastYbinding_kind_setter,"ast","binding-kind-setter");
EXT(YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
DEF(YastYobjectify_bind_exit,"ast","objectify-bind-exit");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
DEF(YastYmonitor_test_setter,"ast","monitor-test-setter");
DEF(YastYmodule_target_environment,"ast","module-target-environment");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
DEF(YastYobjectify_boundQ,"ast","objectify-bound?");
DEF(YastYLast_primitiveG,"ast","<ast-primitive>");
DEF(YastYLmonitorG,"ast","<monitor>");
DEF(YastYmodule_name_setter,"ast","module-name-setter");
DEF(YastYfunction_debug_name_setter,"ast","function-debug-name-setter");
DEF(YastYboundQ_reference,"ast","bound?-reference");
EXT(YruntimeY2nd,"runtime","2nd");
DEF(YastYDsexpr_optionals_type_name,"ast","$sexpr-optionals-type-name");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
DEF(YastYregister_moduleX,"ast","register-module!");
EXT(YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
DEF(YastYmodule_exports_setter,"ast","module-exports-setter");
EXT(Yfapply,"boot","fapply");
EXT(YmacrosYvar_name,"macros","var-name");
DEF(YastYLstatic_empty_environmentG,"ast","<static-empty-environment>");
DEF(YastYobjectify_assignment,"ast","objectify-assignment");
EXT(YLvecG,"boot","<vec>");
EXT(YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
EXT(YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
DEF(YastYlocals_functions_setter,"ast","locals-functions-setter");
DEF(YastYdefault_type,"ast","default-type");
EXT(YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
EXT(YprotoSsystemYTc_extensionT,"proto/system","*c-extension*");
DEF(YastYDsexpr_define_primitive_tag,"ast","$sexpr-define-primitive-tag");
EXT(YLintG,"boot","<int>");
DEF(YastYalternative_condition,"ast","alternative-condition");
DEF(YastYobjectify_sequential,"ast","objectify-sequential");
DEF(YastYLbinding_nameG,"ast","<binding-name>");
EXT(YLlogG,"boot","<log>");
EXT(YruntimeYdo2,"runtime","do2");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
DEF(YastYlocals_functions,"ast","locals-functions");
DEF(YastYspecial_method,"ast","special-method");
DEF(YastYLprogramG,"ast","<program>");
DEF(YastYapplication_binding,"ast","application-binding");
DEF(YastYinstall_magic_bindings,"ast","install-magic-bindings");
EXT(YruntimeYcompose,"runtime","compose");
DEF(YastYsignature_value_setter,"ast","signature-value-setter");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYround,"runtime","round");
EXT(YobjectL,"boot","object<");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
DEF(YastYload_and_register_module,"ast","load-and-register-module");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYtype_or,"runtime","type-or");
EXT(YsyntaxYDsexpr_slot_tag,"syntax","$sexpr-slot-tag");
DEF(YastYbind_exit_main_fun_setter,"ast","bind-exit-main-fun-setter");
DEF(YastYprobe_module,"ast","probe-module");
EXT(YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
DEF(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(YprotoSsystemYexe_filename,"proto/system","exe-filename");
DEF(YastYfunction_naryQ,"ast","function-nary?");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
DEF(YastYDempty_static_environment,"ast","$empty-static-environment");
EXT(Yfun_name,"boot","fun-name");
DEF(YastYLcompile_timeG,"ast","<compile-time>");
EXT(YruntimeYL,"runtime","<");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YsyntaxYsexpr_isa_slot_inits,"syntax","sexpr-isa-slot-inits");
EXT(YruntimeYcopy_state,"runtime","copy-state");
DEF(YastYDsexpr_define_static_syntax_tag,"ast","$sexpr-define-static-syntax-tag");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
DEF(YastYalternative_alternant,"ast","alternative-alternant");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
EXT(YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
DEF(YastYenvironment_uses_modules_setter,"ast","environment-uses-modules-setter");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
EXT(YruntimeYkeys,"runtime","keys");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YsyntaxYsexpr_slot_init,"syntax","sexpr-slot-init");
DEF(YastYmodule_binding,"ast","module-binding");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YruntimeYLbufG,"runtime","<buf>");
DEF(YastYLraw_constantG,"ast","<raw-constant>");
EXT(YLcolG,"boot","<col>");
EXT(YprotoSsystemYfile_type,"proto/system","file-type");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
DEF(YastYalternative_condition_setter,"ast","alternative-condition-setter");
DEF(YastYbinding_type_setter,"ast","binding-type-setter");
DEF(YastYfix_let_body_setter,"ast","fix-let-body-setter");
EXT(YPsymbols,"boot","%symbols");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
DEF(YastYspecial_bind_exit,"ast","special-bind-exit");
EXT(YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
DEF(YastYLalternativeG,"ast","<alternative>");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YstringsYstring_split,"strings","string-split");
DEF(YastYlocals_bindings,"ast","locals-bindings");
DEF(YastYobjectify_syntax_definition,"ast","objectify-syntax-definition");
DEF(YastYTmagic_bindingsT,"ast","*magic-bindings*");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
DEF(YastYmodule_syntax_environment_setter,"ast","module-syntax-environment-setter");
DEF(YastYcompute_transitive_users,"ast","compute-transitive-users");
EXT(YprotoSsystemYobj_filename,"proto/system","obj-filename");
EXT(Yerror,"boot","error");
DEF(YastYalternative_consequent_setter,"ast","alternative-consequent-setter");
EXT(YwriteYenv_object_name,"write","env-object-name");
EXT(YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
EXT(YmacrosYpair,"macros","pair");
DEF(YastYexpand_bind_list,"ast","expand-bind-list");
DEF(YastYassignment_form_setter,"ast","assignment-form-setter");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
EXT(Ysig_value,"boot","sig-value");
DEF(YastYspecial_macro_expand,"ast","special-macro-expand");
EXT(YmacrosYtup,"macros","tup");
DEF(YastYapplication_function,"ast","application-function");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
DEF(YastYmonitor_info_setter,"ast","monitor-info-setter");
EXT(YruntimeYash,"runtime","ash");
DEF(YastYset_module_environments,"ast","set-module-environments");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(YruntimeYLportG,"runtime","<port>");
DEF(YastYreloader_do_other_binding,"ast","reloader-do-other-binding");
EXT(Yfun_name_setter,"boot","fun-name-setter");
DEF(YastYsignature_naryQ_setter,"ast","signature-nary?-setter");
EXT(YruntimeYG,"runtime",">");
DEF(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
DEF(YastYmodule_loader_modules,"ast","module-loader-modules");
EXT(YruntimeYGE,"runtime",">=");
DEF(YastYsequential,"ast","sequential");
EXT(YLmetG,"boot","<met>");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YruntimeYsub,"runtime","sub");
DEF(YastYenvironment_bindings,"ast","environment-bindings");
EXT(YPvnul,"boot","%vnul");
DEF(YastYremove_module_internalX,"ast","remove-module-internal!");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
DEF(YastYprogram_register_setter,"ast","program-register-setter");
EXT(YLoptsG,"boot","<opts>");
DEF(YastYDsexpr_compile_time_also_tag,"ast","$sexpr-compile-time-also-tag");
DEF(YastYLsequentialG,"ast","<sequential>");
DEF(YastYDsexpr_Praw_tag,"ast","$sexpr-%raw-tag");
EXT(YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
DEF(YastYexpand_syntax_if,"ast","expand-syntax-if");
EXT(YwriteYdisplay,"write","display");
EXT(YruntimeYfrom_by,"runtime","from-by");
DEF(YastYDsequential_empty,"ast","$sequential-empty");
DEF(YastYinit_p2c_regular_environment,"ast","init-p2c-regular-environment");
EXT(YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
EXT(YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
DEF(YastYLast_generic_definitionG,"ast","<ast-generic-definition>");
EXT(YruntimeYidentity,"runtime","identity");
DEF(YastYbinding_freeQ,"ast","binding-free?");
DEF(YastYcompute_local_reference_offsets,"ast","compute-local-reference-offsets");
DEF(YastYDarguments_empty,"ast","$arguments-empty");
DEF(YastYLboundQG,"ast","<bound?>");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YsyntaxYsexpr_slot_variable,"syntax","sexpr-slot-variable");
DEF(YastYobjectify_function_definition,"ast","objectify-function-definition");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
DEF(YastYLregular_applicationG,"ast","<regular-application>");
EXT(YruntimeYlsh,"runtime","lsh");
DEF(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
EXT(YruntimeYmemQ,"runtime","mem?");
DEF(YastYmonitor_main_thunk_setter,"ast","monitor-main-thunk-setter");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
DEF(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
DEF(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(YruntimeYfloor,"runtime","floor");
DEF(YastYLast_functionG,"ast","<ast-function>");
EXT(Ymet_appQ,"boot","met-app?");
DEF(YastYreference_called_functionQ,"ast","reference-called-function?");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
EXT(Ytail,"boot","tail");
DEF(YastYDfab_list_empty,"ast","$fab-list-empty");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
DEF(YastYenvironment_module_loader,"ast","environment-module-loader");
DEF(YastYobjectify_export,"ast","objectify-export");
EXT(YruntimeYfill,"runtime","fill");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YruntimeYadd,"runtime","add");
EXT(YLflatG,"boot","<flat>");
EXT(YruntimeYpop,"runtime","pop");
EXT(YstringsYstring_repeat,"strings","string-repeat");
DEF(YastYspecial_locals,"ast","special-locals");
EXT(YruntimeYalter,"runtime","alter");
EXT(YruntimeYpush,"runtime","push");
DEF(YastYapplication_binding_setter,"ast","application-binding-setter");
DEF(YastYassignment_form,"ast","assignment-form");
DEF(YastYunwind_protect_protected_thunk_setter,"ast","unwind-protect-protected-thunk-setter");
EXT(YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
DEF(YastYobjectify_monitor,"ast","objectify-monitor");
DEF(YastYenvironment_module_setter,"ast","environment-module-setter");
EXT(YruntimeYfab,"runtime","fab");
DEF(YastYbinding_mutableQ,"ast","binding-mutable?");
DEF(YastYLfunctionsG,"ast","<functions>");
EXT(YruntimeYmodulo,"runtime","modulo");
DEF(YastYarguments,"ast","arguments");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
DEF(YastYenvironment_uses_modules,"ast","environment-uses-modules");
DEF(YastYspecial_define_function,"ast","special-define-function");
EXT(YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
EXT(YruntimeYcurry,"runtime","curry");
DEF(YastYLpredefined_referenceG,"ast","<predefined-reference>");
DEF(YastYobjectify_list,"ast","objectify-list");
DEF(YastYspecial_define_generic,"ast","special-define-generic");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YruntimeYtruncate,"runtime","truncate");
DEF(YastYsignature_value,"ast","signature-value");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
DEF(YastYfind_static_global_environment,"ast","find-static-global-environment");
EXT(Ylst,"boot","lst");
DEF(YastYfix_let_arguments,"ast","fix-let-arguments");
DEF(YastYLruntime_module_loaderG,"ast","<runtime-module-loader>");
EXT(YruntimeYassoc,"runtime","assoc");
DEF(YastYupdate_binding_kind,"ast","update-binding-kind");
DEF(YastYobjectify_alternative,"ast","objectify-alternative");
EXT(YruntimeYnow_key,"runtime","now-key");
DEF(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(YruntimeYempty,"runtime","empty");
DEF(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
EXT(YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
DEF(YastYexpand_pattern,"ast","expand-pattern");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YLstrG,"boot","<str>");
DEF(YastYbinding_name,"ast","binding-name");
DEF(YastYbinding_mutableQ_setter,"ast","binding-mutable?-setter");
DEF(YastYobjectify_compile_time,"ast","objectify-compile-time");
DEF(YastYprogram_type_setter,"ast","program-type-setter");
DEF(YastYLbind_exitG,"ast","<bind-exit>");
DEF(YastYglobal_box_value_setter,"ast","global-box-value-setter");
DEF(YastYobjectify_generic_definition,"ast","objectify-generic-definition");
DEF(YastYspecial_iterate,"ast","special-iterate");
DEF(YastYinit_ast,"ast","init-ast");
EXT(YruntimeYallQ,"runtime","all?");
DEF(YastYspecial_boundQ,"ast","special-bound?");
EXT(YsyntaxYsexpr_isa_init_slots,"syntax","sexpr-isa-init-slots");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YruntimeYfrom_above,"runtime","from-above");
DEF(YastYspecial_quasiquote,"ast","special-quasiquote");
DEF(YastYsignature_names_setter,"ast","signature-names-setter");
DEF(YastYobjectify_foreign_reference,"ast","objectify-foreign-reference");
EXT(YruntimeYdefault,"runtime","default");
EXT(Yfile_opening_error,"boot","file-opening-error");
DEF(YastYmonitor_test,"ast","monitor-test");
DEF(YastYLconstantG,"ast","<constant>");
DEF(YastYenvironment_bindings_setter,"ast","environment-bindings-setter");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YsyntaxYsexpr_operands,"syntax","sexpr-operands");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
DEF(YastYLast_genericG,"ast","<ast-generic>");
DEF(YastYapplication_knownQ,"ast","application-known?");
EXT(YruntimeYevenQ,"runtime","even?");
DEF(YastYLfab_listG,"ast","<fab-list>");
EXT(Ytail_setter,"boot","tail-setter");
DEF(YastYLprogramsG,"ast","<programs>");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
DEF(YastYspecial_compile_time,"ast","special-compile-time");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YprotoSsystemYadd_src_path,"proto/system","add-src-path");
DEF(YastYbinding_handler,"ast","binding-handler");
DEF(YastYfab_syntax_environment,"ast","fab-syntax-environment");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
EXT(Ysig_names,"boot","sig-names");
DEF(YastYruntime_environment,"ast","runtime-environment");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YPisa,"boot","%isa");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
DEF(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
DEF(YastYdo_named_static_global_bindings,"ast","do-named-static-global-bindings");
EXT(YLtupG,"boot","<tup>");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(YruntimeYneg,"runtime","neg");
EXT(YruntimeYdo,"runtime","do");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YisaQ,"boot","isa?");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(Yapply,"boot","apply");
DEF(YastYsignature_specs_setter,"ast","signature-specs-setter");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
DEF(YastYalternative_alternant_setter,"ast","alternative-alternant-setter");
DEF(YastYbinding_kind,"ast","binding-kind");
DEF(YastYexpand_bind_listT,"ast","expand-bind-list*");
EXT(YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
DEF(YastYapplication_arguments_setter,"ast","application-arguments-setter");
EXT(Yobject_parents,"boot","object-parents");
DEF(YastYspecial_define,"ast","special-define");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
DEF(YastYreference_binding,"ast","reference-binding");
EXT(YruntimeYnow_elt,"runtime","now-elt");
DEF(YastYexpand_bind_element,"ast","expand-bind-element");
DEF(YastYobjectify_use_module,"ast","objectify-use-module");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
DEF(YastYfab_subset_environment,"ast","fab-subset-environment");
DEF(YastYspecial_syntax_if,"ast","special-syntax-if");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
DEF(YastYunwind_protect_cleanup_thunk_setter,"ast","unwind-protect-cleanup-thunk-setter");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
EXT(YprotoSsystemYadd_build_path,"proto/system","add-build-path");
DEF(YastYfind_environment_module,"ast","find-environment-module");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YprotoSsystemYproto_filename,"proto/system","proto-filename");
DEF(YastYobjectify_assignment_using,"ast","objectify-assignment-using");
DEF(YastYLmodule_bindingG,"ast","<module-binding>");
DEF(YastYspecial_define_method,"ast","special-define-method");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
DEF(YastYLlocal_referenceG,"ast","<local-reference>");
DEF(YastYfunctions,"ast","functions");
EXT(YruntimeYLerrorG,"runtime","<error>");
DEF(YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
DEF(YastYLast_method_definitionG,"ast","<ast-method-definition>");
DEF(YastYLpredefined_applicationG,"ast","<predefined-application>");
DEF(YastYLpassive_programG,"ast","<passive-program>");
DEF(YastYinit_runtime,"ast","init-runtime");
DEF(YastYbinding_info,"ast","binding-info");
DEF(YastYspecial_define_syntax,"ast","special-define-syntax");
DEF(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
DEF(YastYconvert2arguments,"ast","convert2arguments");
EXT(YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
EXT(YmacrosYEE,"macros","==");
DEF(YastYapplication_tailQ,"ast","application-tail?");
EXT(YLlocG,"boot","<loc>");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YprotoSsystemYTproto_extensionT,"proto/system","*proto-extension*");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YruntimeYvec,"runtime","vec");
DEF(YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
DEF(YastYbinding_handler_setter,"ast","binding-handler-setter");
DEF(YastYfunction_value,"ast","function-value");
EXT(YruntimeYlen_setter,"runtime","len-setter");
DEF(YastYftype,"ast","ftype");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YruntimeYwrite_char,"runtime","write-char");
DEF(YastYprocess_nary_closed_application,"ast","process-nary-closed-application");
DEF(YastYDfunctions_empty,"ast","$functions-empty");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
DEF(YastYforeign_nameQ,"ast","foreign-name?");
DEF(YastYobjectify_unwind_protect,"ast","objectify-unwind-protect");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(Ynot,"boot","not");
DEF(YastYinstall_interpreter_hacks,"ast","install-interpreter-hacks");
DEF(YastYreload_modules,"ast","reload-modules");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YruntimeYdel_dups,"runtime","del-dups");
DEF(YastYpairize,"ast","pairize");
DEF(YastYobjectify_primitive_definition,"ast","objectify-primitive-definition");
DEF(YastYbinding_locative_setter,"ast","binding-locative-setter");
EXT(YruntimeYas,"runtime","as");
DEF(YastYspecial_monitor,"ast","special-monitor");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
DEF(YastYapplication_knownQ_setter,"ast","application-known?-setter");
DEF(YastYspecial_isa,"ast","special-isa");
EXT(YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
DEF(YastYsignature_bindings,"ast","signature-bindings");
EXT(YLanyG,"boot","<any>");
DEF(YastYenvironment_next,"ast","environment-next");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(YruntimeYNE,"runtime","~=");
DEF(YastYLstatic_environmentG,"ast","<static-environment>");
EXT(YprotoSsystemYlabel_components,"proto/system","label-components");
DEF(YastYLglobal_assignmentG,"ast","<global-assignment>");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YruntimeYS,"runtime","/");
EXT(YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
EXT(YruntimeYreduceA,"runtime","reduce+");
DEF(YastYLreal_referenceG,"ast","<real-reference>");
DEF(YastYLglobal_boxG,"ast","<global-box>");
DEF(YastYfind_syntax_environment,"ast","find-syntax-environment");
DEF(YastYLmoduleG,"ast","<module>");
EXT(YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YruntimeYfabs,"runtime","fabs");
DEF(YastYLfix_letG,"ast","<fix-let>");
DEF(YastYassignment_reference_setter,"ast","assignment-reference-setter");
DEF(YastYsignature_names,"ast","signature-names");
EXT(YruntimeYrev,"runtime","rev");
DEF(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
DEF(YastYDsexpr_optionals_tag,"ast","$sexpr-optionals-tag");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YruntimeYmax,"runtime","max");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Yobject_slots,"boot","object-slots");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YruntimeYpeek_char,"runtime","peek-char");
DEF(YastYlocals_body,"ast","locals-body");
EXT(YprotoSsystemYTpath_separatorT,"proto/system","*path-separator*");
DEF(YastYinsert_globalsX,"ast","insert-globals!");
DEF(YastYfunction_specs,"ast","function-specs");
EXT(YPsnul,"boot","%snul");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYLE,"runtime","<=");
DEF(YastYLlocal_bindingG,"ast","<local-binding>");
DEF(YastYbinding_locative,"ast","binding-locative");
DEF(YastYLassignmentG,"ast","<assignment>");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(Yslot_type,"boot","slot-type");
DEF(YastYbinding_value,"ast","binding-value");
DEF(YastYLast_signatureG,"ast","<ast-signature>");
EXT(YsyntaxYsexpr_make_setter_name,"syntax","sexpr-make-setter-name");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
DEF(YastYlocals_body_setter,"ast","locals-body-setter");
DEF(YastYbinding_global_box,"ast","binding-global-box");
EXT(YprotoSsystemYfile_mtime,"proto/system","file-mtime");
EXT(YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
EXT(Yfun_specs,"boot","fun-specs");
DEF(YastYspecial_define_primitive,"ast","special-define-primitive");
EXT(YruntimeYA,"runtime","+");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YruntimeYpos,"runtime","pos");
EXT(YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
DEF(YastYLlocalsG,"ast","<locals>");
DEF(YastYspecial_compile_time_also,"ast","special-compile-time-also");
EXT(YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
EXT(YruntimeYreduce,"runtime","reduce");
DEF(YastYload_module,"ast","load-module");
DEF(YastYfix_let_types,"ast","fix-let-types");
DEF(YastYmodule_syntax_environment,"ast","module-syntax-environment");
EXT(Yfind_setter,"boot","find-setter");
DEF(YastYfunction_bindings,"ast","function-bindings");
DEF(YastYmodule_loader_modules_setter,"ast","module-loader-modules-setter");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
EXT(YmacrosYvar_type,"macros","var-type");
DEF(YastYmonitor_handler_setter,"ast","monitor-handler-setter");
EXT(YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
DEF(YastYobjectify_binding,"ast","objectify-binding");
DEF(YastYreloader_do_import,"ast","reloader-do-import");
DEF(YastYmonitor_type_setter,"ast","monitor-type-setter");
DEF(YastYLruntime_assignmentG,"ast","<runtime-assignment>");
DEF(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
EXT(YPPmacro,"boot","%%macro");
EXT(YprotoSsystemYos_binding_value_setter,"proto/system","os-binding-value-setter");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
DEF(YastYreference_frame_offset,"ast","reference-frame-offset");
EXT(YruntimeYfrom,"runtime","from");
DEF(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
DEF(YastYinsert_globalX,"ast","insert-global!");
DEF(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
DEF(YastYfunction_binding,"ast","function-binding");
EXT(YwriteYwriteln,"write","writeln");
DEF(YastYenvironment_implements_setter,"ast","environment-implements-setter");
EXT(YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YruntimeY1st,"runtime","1st");
EXT(YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
EXT(YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
EXT(YprotoSsystemYTproto_rootT,"proto/system","*proto-root*");
DEF(YastYfix_let_bindings,"ast","fix-let-bindings");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYforce_output,"runtime","force-output");
DEF(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
EXT(YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
DEF(YastYload_in,"ast","load-in");
DEF(YastYreference_frame_number,"ast","reference-frame-number");
EXT(Ysym_name,"boot","sym-name");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YsyntaxYsexpr_isa_parents,"syntax","sexpr-isa-parents");
EXT(YPdefine_method,"boot","%define-method");
DEF(YastYobjectify_free_global_reference,"ast","objectify-free-global-reference");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
EXT(YsyntaxYsexpr_make_setter,"syntax","sexpr-make-setter");
EXT(YruntimeYassqn,"runtime","assqn");
DEF(YastYmodule_loader_stack,"ast","module-loader-stack");
EXT(Yslot_getter,"boot","slot-getter");
EXT(Yobject_direct_parents,"boot","object-direct-parents");
DEF(YastYbinding_module_name,"ast","binding-module-name");
EXT(Yslot_value_setter,"boot","slot-value-setter");
DEF(YastYmagic_bindings,"ast","magic-bindings");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(YsyntaxYsexpr_monitor_expand,"syntax","sexpr-monitor-expand");
EXT(YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
DEF(YastYmodule_target_environment_setter,"ast","module-target-environment-setter");
EXT(YmacrosYmatch_atom,"macros","match-atom");
DEF(YastYLapplicationG,"ast","<application>");
DEF(YastYsignature_bindings_setter,"ast","signature-bindings-setter");
DEF(YastYruntime_module_loader,"ast","runtime-module-loader");
DEF(YastYreference_frame_number_setter,"ast","reference-frame-number-setter");
EXT(Yhandler_info_message,"boot","handler-info-message");
DEF(YastYregister_magic_binding,"ast","register-magic-binding");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YprotoSsystemYcomponents_parent_directory,"proto/system","components-parent-directory");
DEF(YastYobjectify_raw,"ast","objectify-raw");
EXT(YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YprotoSsystemYcomponents_to_pathname,"proto/system","components-to-pathname");
EXT(YruntimeYT,"runtime","*");
DEF(YastYspecial_begin,"ast","special-begin");
EXT(YruntimeYalways,"runtime","always");
DEF(YastYfab_list,"ast","fab-list");
EXT(YmacrosYcat,"macros","cat");
EXT(YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
DEF(YastYfunction_signature_setter,"ast","function-signature-setter");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
DEF(YastYobjectify_locals,"ast","objectify-locals");
EXT(YprotoSsystemYc_filename,"proto/system","c-filename");
DEF(YastYTruntime_module_loaderT,"ast","*runtime-module-loader*");
EXT(YprotoSsystemYpathname_to_components,"proto/system","pathname-to-components");
EXT(YprotoSsystemYfile_existsQ,"proto/system","file-exists?");
DEF(YastYruntime_module,"ast","runtime-module");
EXT(YruntimeYstr,"runtime","str");
DEF(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
EXT(YprotoSsystemYos_name,"proto/system","os-name");
DEF(YastYobjectify_quotation,"ast","objectify-quotation");
DEF(YastYmonitor_type,"ast","monitor-type");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
DEF(YastYreloader_do_use_module,"ast","reloader-do-use-module");
DEF(YastYimport_globalX,"ast","import-global!");
EXT(YsyntaxYsexpr_slot_object,"syntax","sexpr-slot-object");
EXT(YruntimeYpick,"runtime","pick");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(Ysig_arity,"boot","sig-arity");
DEF(YastYobjectify_definition,"ast","objectify-definition");
EXT(YruntimeYin,"runtime","in");
DEF(YastYmodule_name,"ast","module-name");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
DEF(YastYbinding_dottedQ,"ast","binding-dotted?");
DEF(YastYobjectify_error,"ast","objectify-error");
DEF(YastYcompile_time_program_setter,"ast","compile-time-program-setter");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
DEF(YastYsignature_specs,"ast","signature-specs");
DEF(YastYLargumentsG,"ast","<arguments>");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
DEF(YastYreference_binding_setter,"ast","reference-binding-setter");
EXT(YruntimeYout,"runtime","out");
DEF(YastYobjectify_application,"ast","objectify-application");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YprotoSsystemYos_binding_value,"proto/system","os-binding-value");
EXT(YprotoSsystemYparent_directory,"proto/system","parent-directory");
DEF(YastYreference_frame_offset_setter,"ast","reference-frame-offset-setter");
EXT(YsyntaxYsexpr_operator,"syntax","sexpr-operator");
EXT(YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
DEF(YastYbinding_reference_prototype,"ast","binding-reference-prototype");
DEF(YastYspecial_export,"ast","special-export");
DEF(YastYfunction_signature,"ast","function-signature");
DEF(YastYspecial_quote,"ast","special-quote");
DEF(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(Ynil,"boot","nil");
DEF(YastYspecial_let,"ast","special-let");
DEF(YastYmodule_loader_stack_setter,"ast","module-loader-stack-setter");
DEF(YastYLstatic_local_environmentG,"ast","<static-local-environment>");
EXT(YLseqG,"boot","<seq>");
DEF(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
DEF(YastYassignment_binding_setter,"ast","assignment-binding-setter");
DEF(YastYfind_binding,"ast","find-binding");
DEF(YastYfunction_body,"ast","function-body");
DEF(YastYreloader_do_runtime_binding,"ast","reloader-do-runtime-binding");
EXT(YprotoSsystemYcomponents_last,"proto/system","components-last");
DEF(YastYsyntax_environment_excluded_bindings,"ast","syntax-environment-excluded-bindings");
DEF(YastYenvironment_allows_foreign_namesQ_setter,"ast","environment-allows-foreign-names?-setter");
EXT(Yfind_getter,"boot","find-getter");
EXT(YruntimeYroundS,"runtime","round/");
EXT(Yobject_direct_slots,"boot","object-direct-slots");
EXT(YruntimeYabs,"runtime","abs");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
DEF(YastYfunction_kind,"ast","function-kind");
EXT(YruntimeYcat2,"runtime","cat2");
DEF(YastYbinding_module_name_setter,"ast","binding-module-name-setter");
DEF(YastYast_define_binding,"ast","ast-define-binding");
EXT(YLgenG,"boot","<gen>");
EXT(YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
EXT(YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
DEF(YastYspecial_slot,"ast","special-slot");
DEF(YastYenvironment_implements,"ast","environment-implements");
DEF(YastYspecial_define_static_syntax,"ast","special-define-static-syntax");
DEF(YastYbinding_type,"ast","binding-type");
DEF(YastYfix_let_types_setter,"ast","fix-let-types-setter");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
DEF(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
EXT(YPslot,"boot","%slot");
DEF(YastYspecial_Praw,"ast","special-%raw");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
DEF(YastYbinding_name_setter,"ast","binding-name-setter");
EXT(YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
EXT(Yhead,"boot","head");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
DEF(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(Yslot_value,"boot","slot-value");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YprotoSsystemYcomponents_basename,"proto/system","components-basename");
DEF(YastYreloader_do_export,"ast","reloader-do-export");
EXT(YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
EXT(YruntimeYsig,"runtime","sig");
EXT(Yfun_value,"boot","fun-value");
EXT(Ysig_specs,"boot","sig-specs");
EXT(Yfun_names,"boot","fun-names");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYfirst_then,"runtime","first-then");
DEF(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYto_str,"runtime","to-str");
DEF(YastYspecial_if,"ast","special-if");
EXT(YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
DEF(YastYbinding_info_setter,"ast","binding-info-setter");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
DEF(YastYboundQ_reference_setter,"ast","bound?-reference-setter");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYread,"runtime","read");
EXT(YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
DEF(YastYconstant_value,"ast","constant-value");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YprotoSsystemYprobe_directory,"proto/system","probe-directory");
DEF(YastYfree_implemented_foreign_bindings,"ast","free-implemented-foreign-bindings");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
DEF(YastYobjectify_symbol,"ast","objectify-symbol");
EXT(YstringsYmap_str,"strings","map-str");
DEF(YastYassignment_reference,"ast","assignment-reference");
DEF(YastYbinding_freeQ_setter,"ast","binding-free?-setter");
DEF(YastYr_extendT,"ast","r-extend*");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
DEF(YastYobjectify_signature,"ast","objectify-signature");
DEF(YastYTmacro_tracingQT,"ast","*macro-tracing?*");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YruntimeYdel,"runtime","del");
DEF(YastYfunction_binding_setter,"ast","function-binding-setter");
EXT(YsyntaxYeval,"syntax","eval");
DEF(YastYmonitor_handler,"ast","monitor-handler");
DEF(YastYbinding_dottedQ_setter,"ast","binding-dotted?-setter");
DEF(YastYbinding_native_toQ,"ast","binding-native-to?");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
DEF(YastYspecial_set,"ast","special-set");
EXT(YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
DEF(YastYglobal_box_value,"ast","global-box-value");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YruntimeYlast,"runtime","last");
DEF(YastYenvironment_next_setter,"ast","environment-next-setter");
EXT(YwriteYobject_name,"write","object-name");
DEF(YastYapplication_function_setter,"ast","application-function-setter");
DEF(YastYobjectify_method_definition,"ast","objectify-method-definition");
DEF(YastYmodule_exports,"ast","module-exports");
EXT(YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YruntimeYmin,"runtime","min");
DEF(YastYsequentialize,"ast","sequentialize");
EXT(YruntimeYformat,"runtime","format");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
DEF(YastYLbindingG,"ast","<binding>");
DEF(YastYalternative_consequent,"ast","alternative-consequent");
EXT(Ytype_error,"boot","type-error");
EXT(YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
DEF(YastYDsexpr_boundQ_tag,"ast","$sexpr-bound?-tag");
DEF(YastYprogram_register,"ast","program-register");
DEF(YastYLreferenceG,"ast","<reference>");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
DEF(YastYfab_p2c_module,"ast","fab-p2c-module");
DEF(YastYapplication_arguments,"ast","application-arguments");
DEF(YastYfix_let_body,"ast","fix-let-body");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YstringsYstring_join,"strings","string-join");
EXT(YwriteYwrite,"write","write");
DEF(YastYmodule_name_to_relpath,"ast","module-name-to-relpath");
DEF(YastYobjectify,"ast","objectify");
EXT(Yhead_setter,"boot","head-setter");
EXT(YLtraitsG,"boot","<traits>");
DEF(YastYreload_macros,"ast","reload-macros");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YprotoSsystemYhierarchical_components,"proto/system","hierarchical-components");
DEF(YastYobjectify_function,"ast","objectify-function");
EXT(YruntimeYlen,"runtime","len");
EXT(Ynul,"boot","nul");
EXT(YmacrosYemptyQ,"macros","empty?");
DEF(YastYfab_static_global_environment,"ast","fab-static-global-environment");
DEF(YastYapplication_tailQ_setter,"ast","application-tail?-setter");
EXT(YPcall_next_method,"boot","%call-next-method");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
DEF(YastYfunction_debug_name,"ast","function-debug-name");
EXT(YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(YprotoSsystemYcreate_directory,"proto/system","create-directory");
DEF(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
DEF(YastYexport_bindingX,"ast","export-binding!");
DEF(YastYinstall_initial_bindings,"ast","install-initial-bindings");
DEF(YastYframe_bindings,"ast","frame-bindings");
DEF(YastYprocess_closed_application,"ast","process-closed-application");
EXT(YruntimeYread_char,"runtime","read-char");
DEF(YastYreloader_do_create_module,"ast","reloader-do-create-module");
DEF(YastYLmodule_loaderG,"ast","<module-loader>");
EXT(YLfloG,"boot","<flo>");
DEF(YastYLast_function_definitionG,"ast","<ast-function-definition>");
EXT(YruntimeYbuf,"runtime","buf");
DEF(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(YprotoSsystemYTobj_extensionT,"proto/system","*obj-extension*");
DEF(YastYLunwind_protectG,"ast","<unwind-protect>");
DEF(YastYDsexpr_export_tag,"ast","$sexpr-export-tag");
EXT(YprotoSsystemYTexe_extensionT,"proto/system","*exe-extension*");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(YruntimeYlist,"runtime","list");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
DEF(YastYLast_methodG,"ast","<ast-method>");
EXT(YruntimeYnewline,"runtime","newline");
DEF(YastYenvironment_allows_foreign_namesQ,"ast","environment-allows-foreign-names?");
EXT(YruntimeYnegQ,"runtime","neg?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_50);
DEFLIT(lit_348);
DEFLIT(lit_171);
DEFLIT(lit_424);
DEFLIT(lit_28);
DEFLIT(lit_76);
DEFLIT(lit_35);
DEFLIT(lit_159);
DEFLIT(lit_220);
DEFLIT(lit_102);
DEFLIT(lit_369);
DEFLIT(lit_243);
DEFLIT(lit_59);
DEFLIT(lit_154);
DEFLIT(lit_174);
DEFLIT(lit_238);
DEFLIT(lit_188);
DEFLIT(lit_237);
DEFLIT(lit_434);
DEFLIT(lit_122);
DEFLIT(lit_51);
DEFLIT(lit_19);
DEFLIT(lit_142);
DEFLIT(lit_404);
DEFLIT(lit_304);
DEFLIT(lit_317);
DEFLIT(lit_99);
DEFLIT(lit_162);
DEFLIT(lit_381);
DEFLIT(lit_231);
DEFLIT(lit_368);
DEFLIT(lit_194);
DEFLIT(lit_227);
DEFLIT(lit_216);
DEFLIT(lit_380);
DEFLIT(lit_66);
DEFLIT(lit_45);
DEFLIT(lit_394);
DEFLIT(lit_386);
DEFLIT(lit_385);
DEFLIT(lit_215);
DEFLIT(lit_367);
DEFLIT(lit_176);
DEFLIT(lit_371);
DEFLIT(lit_271);
DEFLIT(lit_250);
DEFLIT(lit_202);
DEFLIT(lit_342);
DEFLIT(lit_147);
DEFLIT(lit_74);
DEFLIT(lit_234);
DEFLIT(lit_131);
DEFLIT(lit_441);
DEFLIT(lit_402);
DEFLIT(lit_62);
DEFLIT(lit_320);
DEFLIT(lit_301);
DEFLIT(lit_133);
DEFLIT(lit_397);
DEFLIT(lit_254);
DEFLIT(lit_388);
DEFLIT(lit_245);
DEFLIT(lit_396);
DEFLIT(lit_199);
DEFLIT(lit_311);
DEFLIT(lit_366);
DEFLIT(lit_354);
DEFLIT(lit_272);
DEFLIT(lit_403);
DEFLIT(lit_116);
DEFLIT(lit_109);
DEFLIT(lit_224);
DEFLIT(lit_307);
DEFLIT(lit_152);
DEFLIT(lit_84);
DEFLIT(lit_400);
DEFLIT(lit_355);
DEFLIT(lit_139);
DEFLIT(lit_241);
DEFLIT(lit_81);
DEFLIT(lit_15);
DEFLIT(lit_184);
DEFLIT(lit_140);
DEFLIT(lit_106);
DEFLIT(lit_309);
DEFLIT(lit_391);
DEFLIT(lit_325);
DEFLIT(lit_212);
DEFLIT(lit_89);
DEFLIT(lit_409);
DEFLIT(lit_83);
DEFLIT(lit_364);
DEFLIT(lit_78);
DEFLIT(lit_303);
DEFLIT(lit_210);
DEFLIT(lit_71);
DEFLIT(lit_86);
DEFLIT(lit_107);
DEFLIT(lit_127);
DEFLIT(lit_356);
DEFLIT(lit_433);
DEFLIT(lit_213);
DEFLIT(lit_295);
DEFLIT(lit_265);
DEFLIT(lit_436);
DEFLIT(lit_260);
DEFLIT(lit_372);
DEFLIT(lit_60);
DEFLIT(lit_146);
DEFLIT(lit_375);
DEFLIT(lit_120);
DEFLIT(lit_236);
DEFLIT(lit_169);
DEFLIT(lit_259);
DEFLIT(lit_11);
DEFLIT(lit_253);
DEFLIT(lit_319);
DEFLIT(lit_232);
DEFLIT(lit_450);
DEFLIT(lit_408);
DEFLIT(lit_126);
DEFLIT(lit_23);
DEFLIT(lit_261);
DEFLIT(lit_0);
DEFLIT(lit_249);
DEFLIT(lit_240);
DEFLIT(lit_88);
DEFLIT(lit_347);
DEFLIT(lit_160);
DEFLIT(lit_40);
DEFLIT(lit_13);
DEFLIT(lit_351);
DEFLIT(lit_322);
DEFLIT(lit_255);
DEFLIT(lit_393);
DEFLIT(lit_440);
DEFLIT(lit_229);
DEFLIT(lit_39);
DEFLIT(lit_447);
DEFLIT(lit_98);
DEFLIT(lit_93);
DEFLIT(lit_173);
DEFLIT(lit_294);
DEFLIT(lit_225);
DEFLIT(lit_112);
DEFLIT(lit_410);
DEFLIT(lit_132);
DEFLIT(lit_47);
DEFLIT(lit_419);
DEFLIT(lit_289);
DEFLIT(lit_144);
DEFLIT(lit_29);
DEFLIT(lit_3);
DEFLIT(lit_453);
DEFLIT(lit_175);
DEFLIT(lit_172);
DEFLIT(lit_219);
DEFLIT(lit_335);
DEFLIT(lit_186);
DEFLIT(lit_61);
DEFLIT(lit_326);
DEFLIT(lit_145);
DEFLIT(lit_137);
DEFLIT(lit_285);
DEFLIT(lit_344);
DEFLIT(lit_90);
DEFLIT(lit_316);
DEFLIT(lit_119);
DEFLIT(lit_12);
DEFLIT(lit_30);
DEFLIT(lit_7);
DEFLIT(lit_17);
DEFLIT(lit_246);
DEFLIT(lit_201);
DEFLIT(lit_91);
DEFLIT(lit_451);
DEFLIT(lit_389);
DEFLIT(lit_275);
DEFLIT(lit_449);
DEFLIT(lit_296);
DEFLIT(lit_338);
DEFLIT(lit_421);
DEFLIT(lit_161);
DEFLIT(lit_79);
DEFLIT(lit_170);
DEFLIT(lit_117);
DEFLIT(lit_129);
DEFLIT(lit_362);
DEFLIT(lit_274);
DEFLIT(lit_446);
DEFLIT(lit_239);
DEFLIT(lit_204);
DEFLIT(lit_423);
DEFLIT(lit_358);
DEFLIT(lit_31);
DEFLIT(lit_115);
DEFLIT(lit_280);
DEFLIT(lit_452);
DEFLIT(lit_318);
DEFLIT(lit_314);
DEFLIT(lit_101);
DEFLIT(lit_350);
DEFLIT(lit_85);
DEFLIT(lit_18);
DEFLIT(lit_334);
DEFLIT(lit_310);
DEFLIT(lit_293);
DEFLIT(lit_124);
DEFLIT(lit_353);
DEFLIT(lit_270);
DEFLIT(lit_37);
DEFLIT(lit_312);
DEFLIT(lit_302);
DEFLIT(lit_401);
DEFLIT(lit_156);
DEFLIT(lit_328);
DEFLIT(lit_38);
DEFLIT(lit_217);
DEFLIT(lit_336);
DEFLIT(lit_4);
DEFLIT(lit_281);
DEFLIT(lit_190);
DEFLIT(lit_444);
DEFLIT(lit_25);
DEFLIT(lit_343);
DEFLIT(lit_165);
DEFLIT(lit_214);
DEFLIT(lit_292);
DEFLIT(lit_125);
DEFLIT(lit_1);
DEFLIT(lit_63);
DEFLIT(lit_209);
DEFLIT(lit_166);
DEFLIT(lit_72);
DEFLIT(lit_439);
DEFLIT(lit_279);
DEFLIT(lit_329);
DEFLIT(lit_286);
DEFLIT(lit_97);
DEFLIT(lit_445);
DEFLIT(lit_443);
DEFLIT(lit_197);
DEFLIT(lit_192);
DEFLIT(lit_357);
DEFLIT(lit_430);
DEFLIT(lit_242);
DEFLIT(lit_185);
DEFLIT(lit_104);
DEFLIT(lit_324);
DEFLIT(lit_53);
DEFLIT(lit_167);
DEFLIT(lit_65);
DEFLIT(lit_108);
DEFLIT(lit_308);
DEFLIT(lit_306);
DEFLIT(lit_383);
DEFLIT(lit_100);
DEFLIT(lit_55);
DEFLIT(lit_399);
DEFLIT(lit_153);
DEFLIT(lit_379);
DEFLIT(lit_9);
DEFLIT(lit_149);
DEFLIT(lit_77);
DEFLIT(lit_413);
DEFLIT(lit_70);
DEFLIT(lit_341);
DEFLIT(lit_339);
DEFLIT(lit_27);
DEFLIT(lit_384);
DEFLIT(lit_432);
DEFLIT(lit_256);
DEFLIT(lit_150);
DEFLIT(lit_287);
DEFLIT(lit_297);
DEFLIT(lit_382);
DEFLIT(lit_340);
DEFLIT(lit_105);
DEFLIT(lit_305);
DEFLIT(lit_277);
DEFLIT(lit_268);
DEFLIT(lit_198);
DEFLIT(lit_36);
DEFLIT(lit_405);
DEFLIT(lit_69);
DEFLIT(lit_376);
DEFLIT(lit_164);
DEFLIT(lit_111);
DEFLIT(lit_349);
DEFLIT(lit_266);
DEFLIT(lit_398);
DEFLIT(lit_431);
DEFLIT(lit_158);
DEFLIT(lit_134);
DEFLIT(lit_230);
DEFLIT(lit_43);
DEFLIT(lit_32);
DEFLIT(lit_95);
DEFLIT(lit_110);
DEFLIT(lit_407);
DEFLIT(lit_226);
DEFLIT(lit_178);
DEFLIT(lit_5);
DEFLIT(lit_262);
DEFLIT(lit_196);
DEFLIT(lit_337);
DEFLIT(lit_195);
DEFLIT(lit_155);
DEFLIT(lit_41);
DEFLIT(lit_290);
DEFLIT(lit_248);
DEFLIT(lit_273);
DEFLIT(lit_207);
DEFLIT(lit_370);
DEFLIT(lit_377);
DEFLIT(lit_411);
DEFLIT(lit_21);
DEFLIT(lit_332);
DEFLIT(lit_148);
DEFLIT(lit_283);
DEFLIT(lit_80);
DEFLIT(lit_313);
DEFLIT(lit_222);
DEFLIT(lit_54);
DEFLIT(lit_42);
DEFLIT(lit_331);
DEFLIT(lit_193);
DEFLIT(lit_438);
DEFLIT(lit_182);
DEFLIT(lit_68);
DEFLIT(lit_282);
DEFLIT(lit_426);
DEFLIT(lit_151);
DEFLIT(lit_92);
DEFLIT(lit_157);
DEFLIT(lit_298);
DEFLIT(lit_429);
DEFLIT(lit_321);
DEFLIT(lit_299);
DEFLIT(lit_191);
DEFLIT(lit_228);
DEFLIT(lit_103);
DEFLIT(lit_390);
DEFLIT(lit_87);
DEFLIT(lit_8);
DEFLIT(lit_33);
DEFLIT(lit_2);
DEFLIT(lit_235);
DEFLIT(lit_352);
DEFLIT(lit_57);
DEFLIT(lit_20);
DEFLIT(lit_203);
DEFLIT(lit_6);
DEFLIT(lit_44);
DEFLIT(lit_221);
DEFLIT(lit_269);
DEFLIT(lit_67);
DEFLIT(lit_138);
DEFLIT(lit_333);
DEFLIT(lit_276);
DEFLIT(lit_189);
DEFLIT(lit_378);
DEFLIT(lit_56);
DEFLIT(lit_206);
DEFLIT(lit_52);
DEFLIT(lit_75);
DEFLIT(lit_345);
DEFLIT(lit_180);
DEFLIT(lit_267);
DEFLIT(lit_187);
DEFLIT(lit_359);
DEFLIT(lit_73);
DEFLIT(lit_22);
DEFLIT(lit_223);
DEFLIT(lit_365);
DEFLIT(lit_114);
DEFLIT(lit_177);
DEFLIT(lit_422);
DEFLIT(lit_258);
DEFLIT(lit_136);
DEFLIT(lit_360);
DEFLIT(lit_130);
DEFLIT(lit_135);
DEFLIT(lit_96);
DEFLIT(lit_361);
DEFLIT(lit_437);
DEFLIT(lit_244);
DEFLIT(lit_387);
DEFLIT(lit_233);
DEFLIT(lit_48);
DEFLIT(lit_315);
DEFLIT(lit_26);
DEFLIT(lit_46);
DEFLIT(lit_252);
DEFLIT(lit_121);
DEFLIT(lit_414);
DEFLIT(lit_218);
DEFLIT(lit_395);
DEFLIT(lit_278);
DEFLIT(lit_49);
DEFLIT(lit_24);
DEFLIT(lit_323);
DEFLIT(lit_346);
DEFLIT(lit_113);
DEFLIT(lit_128);
DEFLIT(lit_64);
DEFLIT(lit_363);
DEFLIT(lit_163);
DEFLIT(lit_34);
DEFLIT(lit_406);
DEFLIT(lit_300);
DEFLIT(lit_16);
DEFLIT(lit_168);
DEFLIT(lit_392);
DEFLIT(lit_247);
DEFLIT(lit_416);
DEFLIT(lit_200);
DEFLIT(lit_82);
DEFLIT(lit_264);
DEFLIT(lit_10);
DEFLIT(lit_448);
DEFLIT(lit_14);
DEFLIT(lit_208);
DEFLIT(lit_123);
DEFLIT(lit_327);
DEFLIT(lit_427);
DEFLIT(lit_417);
DEFLIT(lit_183);
DEFLIT(lit_425);
DEFLIT(lit_442);
DEFLIT(lit_435);
DEFLIT(lit_415);
DEFLIT(lit_251);
DEFLIT(lit_58);
DEFLIT(lit_420);
DEFLIT(lit_291);
DEFLIT(lit_141);
DEFLIT(lit_94);
DEFLIT(lit_181);
DEFLIT(lit_374);
DEFLIT(lit_257);
DEFLIT(lit_118);
DEFLIT(lit_418);
DEFLIT(lit_330);
DEFLIT(lit_205);
DEFLIT(lit_428);
DEFLIT(lit_211);
DEFLIT(lit_284);
DEFLIT(lit_143);
DEFLIT(lit_373);
DEFLIT(lit_263);
DEFLIT(lit_412);
DEFLIT(lit_179);
DEFLIT(lit_288);

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
LOCFOR(fun_50);
LOCFOR(fun_51);
LOCFOR(fun_52);
LOCFOR(fun_53);
LOCFOR(fun_54);
LOCFOR(fun_55);
LOCFOR(fun_56);
LOCFOR(fun_57);
LOCFOR(fun_58);
LOCFOR(fun_59);
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
LOCFOR(fun_84);
LOCFOR(fun_85);
LOCFOR(fun_86);
LOCFOR(fun_87);
LOCFOR(fun_88);
LOCFOR(fun_89);
LOCFOR(fun_90);
LOCFOR(fun_91);
FUNFOR(YastYfunction_bindings);
FUNFOR(YastYfunction_specs);
FUNFOR(YastYfunction_naryQ);
FUNFOR(YastYfunction_value);
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
LOCFOR(fun_x_1240_112);
LOCFOR(fun_113);
LOCFOR(fun_114);
LOCFOR(fun_x_1244_115);
LOCFOR(fun_116);
LOCFOR(fun_117);
LOCFOR(fun_118);
LOCFOR(fun_119);
LOCFOR(fun_120);
FUNFOR(YastYsequential);
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
FUNFOR(YastYfab_list);
LOCFOR(fun_157);
LOCFOR(fun_158);
LOCFOR(fun_159);
LOCFOR(fun_160);
FUNFOR(YastYarguments);
LOCFOR(fun_162);
LOCFOR(fun_loop_163);
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
LOCFOR(fun_183);
LOCFOR(fun_184);
LOCFOR(fun_185);
LOCFOR(fun_186);
LOCFOR(fun_187);
LOCFOR(fun_188);
LOCFOR(fun_189);
LOCFOR(fun_190);
LOCFOR(fun_191);
LOCFOR(fun_192);
LOCFOR(fun_193);
LOCFOR(fun_194);
LOCFOR(fun_195);
LOCFOR(fun_196);
LOCFOR(fun_197);
LOCFOR(fun_198);
LOCFOR(fun_199);
LOCFOR(fun_200);
LOCFOR(fun_201);
LOCFOR(fun_202);
LOCFOR(fun_203);
LOCFOR(fun_204);
LOCFOR(fun_205);
LOCFOR(fun_206);
LOCFOR(fun_207);
LOCFOR(fun_208);
LOCFOR(fun_209);
LOCFOR(fun_210);
LOCFOR(fun_211);
LOCFOR(fun_212);
LOCFOR(fun_213);
LOCFOR(fun_214);
LOCFOR(fun_215);
LOCFOR(fun_216);
LOCFOR(fun_217);
LOCFOR(fun_218);
LOCFOR(fun_219);
LOCFOR(fun_220);
LOCFOR(fun_221);
LOCFOR(fun_222);
LOCFOR(fun_223);
LOCFOR(fun_224);
LOCFOR(fun_225);
LOCFOR(fun_226);
LOCFOR(fun_227);
LOCFOR(fun_228);
LOCFOR(fun_229);
LOCFOR(fun_230);
LOCFOR(fun_231);
LOCFOR(fun_232);
LOCFOR(fun_233);
LOCFOR(fun_234);
LOCFOR(fun_loop_235);
LOCFOR(fun_236);
LOCFOR(fun_loop_237);
LOCFOR(fun_238);
LOCFOR(fun_239);
LOCFOR(fun_240);
LOCFOR(fun_241);
LOCFOR(fun_242);
LOCFOR(fun_243);
LOCFOR(fun_244);
LOCFOR(fun_245);
LOCFOR(fun_gather_arguments_246);
LOCFOR(fun_pack_nary_args_247);
LOCFOR(fun_248);
LOCFOR(fun_249);
LOCFOR(fun_250);
LOCFOR(fun_251);
LOCFOR(fun_252);
LOCFOR(fun_253);
LOCFOR(fun_254);
FUNFOR(YastYupdate_binding_kind);
LOCFOR(fun_256);
LOCFOR(fun_257);
LOCFOR(fun_expand_258);
FUNFOR(YPPmacro);
LOCFOR(fun_260);
LOCFOR(fun_261);
FUNFOR(YastYmodule_binding);
LOCFOR(fun_263);
LOCFOR(fun_264);
LOCFOR(fun_265);
LOCFOR(fun_266);
LOCFOR(fun_col_267);
LOCFOR(fun_268);
LOCFOR(fun_find_269);
LOCFOR(fun_loop_270);
LOCFOR(fun_271);
LOCFOR(fun_272);
LOCFOR(fun_273);
LOCFOR(fun_274);
LOCFOR(fun_275);
LOCFOR(fun_276);
LOCFOR(fun_277);
FUNFOR(YastYforeign_nameQ);
LOCFOR(fun_279);
LOCFOR(fun_280);
LOCFOR(fun_281);
LOCFOR(fun_282);
LOCFOR(fun_283);
LOCFOR(fun_284);
FUNFOR(YastYfunctions);
LOCFOR(fun_286);
LOCFOR(fun_287);
LOCFOR(fun_288);
LOCFOR(fun_289);
LOCFOR(fun_290);
LOCFOR(fun_291);
LOCFOR(fun_292);
LOCFOR(fun_293);
LOCFOR(fun_294);
LOCFOR(fun_295);
LOCFOR(fun_296);
LOCFOR(fun_297);
LOCFOR(fun_298);
FUNFOR(YastYimport_globalX);
LOCFOR(fun_300);
LOCFOR(fun_301);
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
LOCFOR(fun_loop_319);
LOCFOR(fun_320);
LOCFOR(fun_321);
LOCFOR(fun_322);
LOCFOR(fun_323);
LOCFOR(fun_324);
LOCFOR(fun_325);
LOCFOR(fun_x_1255_326);
LOCFOR(fun_327);
LOCFOR(fun_328);
LOCFOR(fun_329);
LOCFOR(fun_330);
LOCFOR(fun_331);
LOCFOR(fun_332);
LOCFOR(fun_333);
LOCFOR(fun_334);
LOCFOR(fun_335);
LOCFOR(fun_336);
LOCFOR(fun_337);
LOCFOR(fun_338);
LOCFOR(fun_339);
LOCFOR(fun_340);
LOCFOR(fun_341);
LOCFOR(fun_342);
LOCFOR(fun_343);
LOCFOR(fun_344);
LOCFOR(fun_345);
LOCFOR(fun_346);
LOCFOR(fun_347);
LOCFOR(fun_348);
LOCFOR(fun_349);
LOCFOR(fun_350);
LOCFOR(fun_351);
LOCFOR(fun_352);
LOCFOR(fun_353);
LOCFOR(fun_354);
LOCFOR(fun_355);
LOCFOR(fun_356);
LOCFOR(fun_357);
LOCFOR(fun_358);
LOCFOR(fun_359);
LOCFOR(fun_360);
LOCFOR(fun_361);
LOCFOR(fun_362);
LOCFOR(fun_363);
LOCFOR(fun_364);
LOCFOR(fun_365);
LOCFOR(fun_366);
LOCFOR(fun_367);
LOCFOR(fun_368);
LOCFOR(fun_369);
LOCFOR(fun_370);
LOCFOR(fun_371);
LOCFOR(fun_372);
LOCFOR(fun_373);
LOCFOR(fun_374);
LOCFOR(fun_375);
LOCFOR(fun_376);
LOCFOR(fun_377);
FUNFOR(YastYset_module_environments);
LOCFOR(fun_379);
FUNFOR(YastYdo_module_loader_modules);
LOCFOR(fun_381);
FUNFOR(YastYregister_moduleX);
FUNFOR(YastYprobe_module);
LOCFOR(fun_384);
LOCFOR(fun_385);
FUNFOR(YastYload_and_register_module);
FUNFOR(YastYexport_bindingX);
FUNFOR(YastYbinding_native_toQ);
LOCFOR(fun_389);
FUNFOR(YastYreport_undefined_global_bindings);
LOCFOR(fun_391);
LOCFOR(fun_392);
LOCFOR(fun_393);
LOCFOR(fun_add_user_394);
FUNFOR(YastYcompute_transitive_users);
LOCFOR(fun_396);
FUNFOR(YastYfree_implemented_foreign_bindings);
FUNFOR(YastYremove_module_internalX);
LOCFOR(fun_399);
FUNFOR(YastYremove_modules_by_nameX);
FUNFOR(YastYmodule_name_to_relpath);
LOCFOR(fun_402);
FUNFOR(YastYinstall_initial_bindings);
FUNFOR(YastYfab_static_global_environment);
LOCFOR(fun_405);
FUNFOR(YastYfab_subset_environment);
LOCFOR(fun_407);
LOCFOR(fun_408);
LOCFOR(fun_409);
FUNFOR(YastYruntime_module_loader);
FUNFOR(YastYruntime_module);
FUNFOR(YastYruntime_environment);
FUNFOR(YastYreloader_do_create_module);
FUNFOR(YastYreloader_do_use_module);
FUNFOR(YastYreloader_do_import);
FUNFOR(YastYreloader_do_runtime_binding);
FUNFOR(YastYreloader_do_other_binding);
FUNFOR(YastYreloader_do_export);
FUNFOR(YastYreload_modules);
LOCFOR(fun_420);
FUNFOR(YastYinstall_magic_bindings);
FUNFOR(YastYreload_macros);
FUNFOR(YastYinstall_interpreter_hacks);
FUNFOR(YastYinit_runtime);
FUNFOR(YastYfab_syntax_environment);
FUNFOR(YastYfab_p2c_module);
FUNFOR(YastYinit_p2c_boot_environment);
FUNFOR(YastYinit_p2c_regular_environment);
FUNFOR(YastYinit_ast);
LOCFOR(fun_loop_430);
FUNFOR(YastYdo_static_global_bindings);
LOCFOR(fun_loop_432);
FUNFOR(YastYdo_named_static_global_bindings);
extern P YastY___main_0___ ();
extern P YastY___main_1___ ();
extern P YastY___main_2___ ();
extern P YastY___main_3___ ();
extern P YastY___main_4___ ();
extern P YastY___main_5___ ();
extern P YastY___main_6___ ();
extern P YastY___main_7___ ();
extern P YastY___main_8___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_0) {
  ARG(arguments_, 0);
  ARG(message_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yapply),CHKREF(Yerror),message_,arguments_);
  QRET(T0);
}

FUNCODEDEF(fun_1) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYprogram_type));
  QRET(T0);
}

FUNCODEDEF(fun_2) {
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

FUNCODEDEF(fun_4) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_5) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYprogram_register));
  QRET(T0);
}

FUNCODEDEF(fun_6) {
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

FUNCODEDEF(fun_8) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYbinding_name));
  QRET(T0);
}

FUNCODEDEF(fun_9) {
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

FUNCODEDEF(fun_11) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYbinding_type));
  QRET(T0);
}

FUNCODEDEF(fun_12) {
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

FUNCODEDEF(fun_14) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYglobal_box_value));
  QRET(T0);
}

FUNCODEDEF(fun_15) {
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

FUNCODEDEF(fun_17) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYbinding_kind));
  QRET(T0);
}

FUNCODEDEF(fun_18) {
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
  QRET(CHKREF(lit_20));
}

FUNCODEDEF(fun_20) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYbinding_module_name));
  QRET(T0);
}

FUNCODEDEF(fun_21) {
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

FUNCODEDEF(fun_23) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYbinding_freeQ));
  QRET(T0);
}

FUNCODEDEF(fun_24) {
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

FUNCODEDEF(fun_26) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYbinding_info));
  QRET(T0);
}

FUNCODEDEF(fun_27) {
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

FUNCODEDEF(fun_29) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYbinding_value));
  QRET(T0);
}

FUNCODEDEF(fun_30) {
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

FUNCODEDEF(fun_32) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYbinding_mutableQ));
  QRET(T0);
}

FUNCODEDEF(fun_33) {
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

FUNCODEDEF(fun_35) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYbinding_dynamic_extentQ));
  QRET(T0);
}

FUNCODEDEF(fun_36) {
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

FUNCODEDEF(fun_38) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYbinding_dottedQ));
  QRET(T0);
}

FUNCODEDEF(fun_39) {
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

FUNCODEDEF(fun_41) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYcompile_time_program));
  QRET(T0);
}

FUNCODEDEF(fun_42) {
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

FUNCODEDEF(fun_44) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYreference_binding));
  QRET(T0);
}

FUNCODEDEF(fun_45) {
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

FUNCODEDEF(fun_47) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYreference_called_functionQ));
  QRET(T0);
}

FUNCODEDEF(fun_48) {
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

FUNCODEDEF(fun_50) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYreference_frame_number));
  QRET(T0);
}

FUNCODEDEF(fun_51) {
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

FUNCODEDEF(fun_53) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYreference_frame_offset));
  QRET(T0);
}

FUNCODEDEF(fun_54) {
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

FUNCODEDEF(fun_56) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYboundQ_reference));
  QRET(T0);
}

FUNCODEDEF(fun_57) {
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

FUNCODEDEF(fun_59) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYassignment_form));
  QRET(T0);
}

FUNCODEDEF(fun_60) {
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

FUNCODEDEF(fun_62) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYassignment_reference));
  QRET(T0);
}

FUNCODEDEF(fun_63) {
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

FUNCODEDEF(fun_65) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYassignment_binding));
  QRET(T0);
}

FUNCODEDEF(fun_66) {
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

FUNCODEDEF(fun_68) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYsignature_bindings));
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYsignature_bindings));
  QRET(T0);
}

FUNCODEDEF(fun_70) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_71) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYsignature_names));
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYsignature_names));
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_74) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYsignature_specs));
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYsignature_specs));
  QRET(T0);
}

FUNCODEDEF(fun_76) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_77) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYsignature_naryQ));
  QRET(T0);
}

FUNCODEDEF(fun_78) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYsignature_naryQ));
  QRET(T0);
}

FUNCODEDEF(fun_79) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_80) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYsignature_value));
  QRET(T0);
}

FUNCODEDEF(fun_81) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYsignature_value));
  QRET(T0);
}

FUNCODEDEF(fun_82) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_83) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYfunction_binding));
  QRET(T0);
}

FUNCODEDEF(fun_84) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYfunction_binding));
  QRET(T0);
}

FUNCODEDEF(fun_85) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_86) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYfunction_debug_name));
  QRET(T0);
}

FUNCODEDEF(fun_87) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYfunction_debug_name));
  QRET(T0);
}

FUNCODEDEF(fun_88) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_89) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYfunction_signature));
  QRET(T0);
}

FUNCODEDEF(fun_90) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYfunction_signature));
  QRET(T0);
}

FUNCODEDEF(fun_91) {
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
  T0 = CALL1(CHKREF(YastYsignature_bindings),T1);
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

FUNCODEDEF(fun_96) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(lit_74));
}

FUNCODEDEF(fun_97) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYfunction_body));
  QRET(T0);
}

FUNCODEDEF(fun_98) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYfunction_body));
  QRET(T0);
}

FUNCODEDEF(fun_99) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_100) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(lit_77));
}

FUNCODEDEF(fun_101) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(lit_78));
}

FUNCODEDEF(fun_102) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(lit_79));
}

FUNCODEDEF(fun_103) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYalternative_condition));
  QRET(T0);
}

FUNCODEDEF(fun_104) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYalternative_condition));
  QRET(T0);
}

FUNCODEDEF(fun_105) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_106) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYalternative_consequent));
  QRET(T0);
}

FUNCODEDEF(fun_107) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYalternative_consequent));
  QRET(T0);
}

FUNCODEDEF(fun_108) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_109) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYalternative_alternant));
  QRET(T0);
}

FUNCODEDEF(fun_110) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYalternative_alternant));
  QRET(T0);
}

FUNCODEDEF(fun_111) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_x_1240_112) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_113) {
  ARG(return_, 0);
  P x_1239F1243;
  P x_1239F1242;
  P x_1239F1241;
  P x_1239F1240;
  P x_1239F1239;
  P DemptyF1238;
  P classF1237;
  P supersF1236;
  P nameF1235;
  P x_1239F1234;
  P x_1240F1233;
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
  T155 = FUNSHELL(0,fun_x_1240_112,1);
  x_1240F1233 = T155;
  FUNINIT(x_1240F1233, 1,return_);
  x_1239F1234 = FREEREF(0);
  nameF1235 = YPfalse;
  nameF1235 = BOXFAB(nameF1235);
  supersF1236 = YPfalse;
  supersF1236 = BOXFAB(supersF1236);
  T18 = CALL2(CHKREF(YisaQ),x_1239F1234,CHKREF(YLlstG));
  if (T18 != YPfalse) {
    T17 = CALL3(CHKREF(YmacrosYmatch_atom),x_1239F1234,CHKREF(lit_113),x_1240F1233);
    x_1239F1239 = T17;
    T15 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1239F1239,x_1240F1233);
    BOXVAL(nameF1235) = T15;
    T16 = CALL1(CHKREF(Ytail),x_1239F1239);
    x_1239F1240 = T16;
    T13 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1239F1240,x_1240F1233);
    x_1239F1241 = T13;
    BOXVAL(supersF1236) = x_1239F1241;
    x_1239F1242 = Ynil;
    T12 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1239F1242,x_1240F1233);
    T11 = T12;
    T14 = CALL1(CHKREF(Ytail),x_1239F1240);
    x_1239F1243 = T14;
    T10 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1239F1243,x_1240F1233);
    T9 = T10;
    T8 = T9;
    T7 = T8;
  } else {
    T6 = CALL2(x_1240F1233,CHKREF(lit_112),x_1239F1234);
  }
  T154 = BOXVAL(nameF1235);
  T153 = CALL3(CHKREF(YmacrosYmake_sym),CHKREF(lit_111),T154,CHKREF(lit_110));
  classF1237 = T153;
  T152 = BOXVAL(nameF1235);
  T151 = CALL3(CHKREF(YmacrosYmake_sym),CHKREF(lit_109),T152,CHKREF(lit_108));
  DemptyF1238 = T151;
  T150 = CALL1(CHKREF(Ylst),CHKREF(lit_107));
  T149 = CALL1(CHKREF(Ylst),CHKREF(lit_106));
  T148 = CALL1(CHKREF(Ylst),classF1237);
  T147 = CALL1(CHKREF(Ylst),CHKREF(lit_97));
  T146 = CALL1(CHKREF(Ylst),CHKREF(lit_102));
  T145 = BOXVAL(supersF1236);
  T144 = CALL3(CHKREF(YmacrosYcat),T146,T145,Ynil);
  T143 = CALL1(CHKREF(Ylst),T144);
  T142 = CALL3(CHKREF(YmacrosYcat),T147,T143,Ynil);
  T141 = CALL1(CHKREF(Ylst),T142);
  T140 = CALLN(CHKREF(YmacrosYcat),4,T149,T148,T141,Ynil);
  T139 = CALL1(CHKREF(Ylst),T140);
  T138 = CALL1(CHKREF(Ylst),CHKREF(lit_106));
  T137 = CALL1(CHKREF(Ylst),DemptyF1238);
  T136 = CALL1(CHKREF(Ylst),CHKREF(lit_97));
  T135 = CALL1(CHKREF(Ylst),classF1237);
  T134 = CALL1(CHKREF(Ylst),CHKREF(lit_94));
  T133 = CALL1(CHKREF(Ylst),CHKREF(lit_96));
  T132 = CALL1(CHKREF(Ylst),YPfalse);
  T131 = CALLN(CHKREF(YmacrosYcat),4,T134,T133,T132,Ynil);
  T130 = CALL1(CHKREF(Ylst),T131);
  T129 = CALL1(CHKREF(Ylst),CHKREF(lit_94));
  T128 = CALL1(CHKREF(Ylst),CHKREF(lit_93));
  T127 = CALL1(CHKREF(Ylst),YPfalse);
  T126 = CALLN(CHKREF(YmacrosYcat),4,T129,T128,T127,Ynil);
  T125 = CALL1(CHKREF(Ylst),T126);
  T124 = CALLN(CHKREF(YmacrosYcat),5,T136,T135,T130,T125,Ynil);
  T123 = CALL1(CHKREF(Ylst),T124);
  T122 = CALLN(CHKREF(YmacrosYcat),4,T138,T137,T123,Ynil);
  T121 = CALL1(CHKREF(Ylst),T122);
  T120 = CALL1(CHKREF(Ylst),CHKREF(lit_91));
  T119 = CALL1(CHKREF(Ylst),CHKREF(lit_104));
  T118 = CALL1(CHKREF(Ylst),CHKREF(lit_103));
  T117 = CALL1(CHKREF(Ylst),classF1237);
  T116 = CALL3(CHKREF(YmacrosYcat),T118,T117,Ynil);
  T115 = CALL1(CHKREF(Ylst),T116);
  T114 = CALL1(CHKREF(Ylst),CHKREF(lit_9));
  T113 = CALL1(CHKREF(Ylst),classF1237);
  T112 = CALL3(CHKREF(YmacrosYcat),T114,T113,Ynil);
  T111 = CALL1(CHKREF(Ylst),T112);
  T110 = CALL1(CHKREF(Ylst),CHKREF(lit_88));
  T109 = CALL1(CHKREF(Ylst),CHKREF(lit_102));
  T108 = CALLN(CHKREF(YmacrosYcat),5,T115,T111,T110,T109,Ynil);
  T107 = CALL1(CHKREF(Ylst),T108);
  T106 = CALL1(CHKREF(Ylst),CHKREF(lit_9));
  T105 = CALLN(CHKREF(YmacrosYcat),5,T120,T119,T107,T106,Ynil);
  T104 = CALL1(CHKREF(Ylst),T105);
  T103 = CALL1(CHKREF(Ylst),CHKREF(lit_91));
  T102 = CALL1(CHKREF(Ylst),CHKREF(lit_104));
  T101 = CALL1(CHKREF(Ylst),CHKREF(lit_103));
  T100 = CALL1(CHKREF(Ylst),CHKREF(lit_102));
  T99 = CALL3(CHKREF(YmacrosYcat),T101,T100,Ynil);
  T98 = CALL1(CHKREF(Ylst),T99);
  T97 = CALL1(CHKREF(Ylst),CHKREF(lit_9));
  T96 = CALL1(CHKREF(Ylst),classF1237);
  T95 = CALL3(CHKREF(YmacrosYcat),T97,T96,Ynil);
  T94 = CALL1(CHKREF(Ylst),T95);
  T93 = CALL1(CHKREF(Ylst),CHKREF(lit_88));
  T92 = CALL1(CHKREF(Ylst),CHKREF(lit_102));
  T91 = CALLN(CHKREF(YmacrosYcat),5,T98,T94,T93,T92,Ynil);
  T90 = CALL1(CHKREF(Ylst),T91);
  T89 = CALL1(CHKREF(Ylst),CHKREF(lit_101));
  T88 = CALL1(CHKREF(Ylst),CHKREF(lit_105));
  T87 = CALL1(CHKREF(Ylst),CHKREF(lit_9));
  T86 = CALLN(CHKREF(YmacrosYcat),4,T89,T88,T87,Ynil);
  T85 = CALL1(CHKREF(Ylst),T86);
  T84 = CALLN(CHKREF(YmacrosYcat),5,T103,T102,T90,T85,Ynil);
  T83 = CALL1(CHKREF(Ylst),T84);
  T82 = CALL1(CHKREF(Ylst),CHKREF(lit_91));
  T81 = CALL1(CHKREF(Ylst),CHKREF(lit_104));
  T80 = CALL1(CHKREF(Ylst),CHKREF(lit_103));
  T79 = CALL1(CHKREF(Ylst),classF1237);
  T78 = CALL3(CHKREF(YmacrosYcat),T80,T79,Ynil);
  T77 = CALL1(CHKREF(Ylst),T78);
  T76 = CALL1(CHKREF(Ylst),CHKREF(lit_9));
  T75 = CALL1(CHKREF(Ylst),CHKREF(lit_102));
  T74 = CALL3(CHKREF(YmacrosYcat),T76,T75,Ynil);
  T73 = CALL1(CHKREF(Ylst),T74);
  T72 = CALL1(CHKREF(Ylst),CHKREF(lit_88));
  T71 = CALL1(CHKREF(Ylst),CHKREF(lit_102));
  T70 = CALLN(CHKREF(YmacrosYcat),5,T77,T73,T72,T71,Ynil);
  T69 = CALL1(CHKREF(Ylst),T70);
  T68 = CALL1(CHKREF(Ylst),CHKREF(lit_101));
  T67 = CALL1(CHKREF(Ylst),CHKREF(lit_100));
  T66 = CALL1(CHKREF(Ylst),CHKREF(lit_99));
  T65 = CALL1(CHKREF(Ylst),classF1237);
  T64 = CALL1(CHKREF(Ylst),CHKREF(lit_9));
  T63 = CALLN(CHKREF(YmacrosYcat),4,T66,T65,T64,Ynil);
  T62 = CALL1(CHKREF(Ylst),T63);
  T61 = CALLN(CHKREF(YmacrosYcat),4,T68,T67,T62,Ynil);
  T60 = CALL1(CHKREF(Ylst),T61);
  T59 = CALLN(CHKREF(YmacrosYcat),5,T82,T81,T69,T60,Ynil);
  T58 = CALL1(CHKREF(Ylst),T59);
  T57 = CALL1(CHKREF(Ylst),CHKREF(lit_98));
  T56 = BOXVAL(nameF1235);
  T55 = CALL1(CHKREF(Ylst),T56);
  T54 = CALL1(CHKREF(Ylst),CHKREF(lit_95));
  T53 = CALL1(CHKREF(Ylst),CHKREF(lit_92));
  T52 = CALL3(CHKREF(YmacrosYcat),T54,T53,Ynil);
  T51 = CALL1(CHKREF(Ylst),T52);
  T50 = CALL1(CHKREF(Ylst),CHKREF(lit_97));
  T49 = CALL1(CHKREF(Ylst),classF1237);
  T48 = CALL1(CHKREF(Ylst),CHKREF(lit_94));
  T47 = CALL1(CHKREF(Ylst),CHKREF(lit_96));
  T46 = CALL1(CHKREF(Ylst),CHKREF(lit_95));
  T45 = CALLN(CHKREF(YmacrosYcat),4,T48,T47,T46,Ynil);
  T44 = CALL1(CHKREF(Ylst),T45);
  T43 = CALL1(CHKREF(Ylst),CHKREF(lit_94));
  T42 = CALL1(CHKREF(Ylst),CHKREF(lit_93));
  T41 = CALL1(CHKREF(Ylst),CHKREF(lit_92));
  T40 = CALLN(CHKREF(YmacrosYcat),4,T43,T42,T41,Ynil);
  T39 = CALL1(CHKREF(Ylst),T40);
  T38 = CALLN(CHKREF(YmacrosYcat),5,T50,T49,T44,T39,Ynil);
  T37 = CALL1(CHKREF(Ylst),T38);
  T36 = CALLN(CHKREF(YmacrosYcat),5,T57,T55,T51,T37,Ynil);
  T35 = CALL1(CHKREF(Ylst),T36);
  T34 = CALL1(CHKREF(Ylst),CHKREF(lit_91));
  T33 = CALL1(CHKREF(Ylst),CHKREF(lit_90));
  T32 = CALL1(CHKREF(Ylst),CHKREF(lit_89));
  T31 = CALL1(CHKREF(Ylst),classF1237);
  T30 = CALL3(CHKREF(YmacrosYcat),T32,T31,Ynil);
  T29 = CALL1(CHKREF(Ylst),T30);
  T28 = CALL1(CHKREF(Ylst),CHKREF(lit_88));
  T27 = CALL1(CHKREF(Ylst),classF1237);
  T26 = CALLN(CHKREF(YmacrosYcat),4,T29,T28,T27,Ynil);
  T25 = CALL1(CHKREF(Ylst),T26);
  T24 = CALL1(CHKREF(Ylst),DemptyF1238);
  T23 = CALLN(CHKREF(YmacrosYcat),5,T34,T33,T25,T24,Ynil);
  T22 = CALL1(CHKREF(Ylst),T23);
  T21 = CALLN(CHKREF(YmacrosYcat),9,T150,T139,T121,T104,T83,T58,T35,T22,Ynil);
  T20 = T21;
  T19 = T20;
  T4 = T19;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_114) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_113,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_x_1244_115) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_116) {
  ARG(return_, 0);
  P x_1243F1248;
  P x_1243F1247;
  P nameF1246;
  P x_1243F1245;
  P x_1244F1244;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
loop:
  T19 = FUNSHELL(0,fun_x_1244_115,1);
  x_1244F1244 = T19;
  FUNINIT(x_1244F1244, 1,return_);
  x_1243F1245 = FREEREF(0);
  nameF1246 = YPfalse;
  nameF1246 = BOXFAB(nameF1246);
  T11 = CALL2(CHKREF(YisaQ),x_1243F1245,CHKREF(YLlstG));
  if (T11 != YPfalse) {
    T10 = CALL3(CHKREF(YmacrosYmatch_atom),x_1243F1245,CHKREF(lit_118),x_1244F1244);
    x_1243F1247 = T10;
    T8 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1243F1247,x_1244F1244);
    BOXVAL(nameF1246) = T8;
    T9 = CALL1(CHKREF(Ytail),x_1243F1247);
    x_1243F1248 = T9;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1243F1248,x_1244F1244);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1244F1244,CHKREF(lit_112),x_1243F1245);
  }
  T18 = CALL1(CHKREF(Ylst),CHKREF(lit_113));
  T17 = BOXVAL(nameF1246);
  T16 = CALL1(CHKREF(Ylst),T17);
  T15 = CALL1(CHKREF(Ylst),CHKREF(lit_117));
  T14 = CALL2(CHKREF(YmacrosYcat),T15,Ynil);
  T13 = CALL1(CHKREF(Ylst),T14);
  T12 = CALLN(CHKREF(YmacrosYcat),4,T18,T16,T13,Ynil);
  T2 = T12;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_117) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_116,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_118) {
  ARG(x_, 0);
  ARG(p_, 1);
  P a1,a2;
loop:
  RET(x_);
}

FUNCODEDEF(fun_119) {
  ARG(x_, 0);
  ARG(p_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(Yapply),CHKREF(Ylst),x_);
  RET(T0);
}

FUNCODEDEF(fun_120) {
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

FUNCODEDEF(fun_122) {
  ARG(e_, 0);
  P a1;
loop:
  RET(CHKREF(YastYDsequential_empty));
}

FUNCODEDEF(fun_123) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYconstant_value));
  QRET(T0);
}

FUNCODEDEF(fun_124) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYconstant_value));
  QRET(T0);
}

FUNCODEDEF(fun_125) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_126) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYapplication_arguments));
  QRET(T0);
}

FUNCODEDEF(fun_127) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYapplication_arguments));
  QRET(T0);
}

FUNCODEDEF(fun_128) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_129) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYapplication_tailQ));
  QRET(T0);
}

FUNCODEDEF(fun_130) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYapplication_tailQ));
  QRET(T0);
}

FUNCODEDEF(fun_131) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_132) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYapplication_function));
  QRET(T0);
}

FUNCODEDEF(fun_133) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYapplication_function));
  QRET(T0);
}

FUNCODEDEF(fun_134) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_135) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYapplication_knownQ));
  QRET(T0);
}

FUNCODEDEF(fun_136) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYapplication_knownQ));
  QRET(T0);
}

FUNCODEDEF(fun_137) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_138) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYapplication_binding));
  QRET(T0);
}

FUNCODEDEF(fun_139) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYapplication_binding));
  QRET(T0);
}

FUNCODEDEF(fun_140) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_141) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYfix_let_bindings));
  QRET(T0);
}

FUNCODEDEF(fun_142) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYfix_let_bindings));
  QRET(T0);
}

FUNCODEDEF(fun_143) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_144) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYfix_let_types));
  QRET(T0);
}

FUNCODEDEF(fun_145) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYfix_let_types));
  QRET(T0);
}

FUNCODEDEF(fun_146) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_147) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYfix_let_arguments));
  QRET(T0);
}

FUNCODEDEF(fun_148) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYfix_let_arguments));
  QRET(T0);
}

FUNCODEDEF(fun_149) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_150) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYfix_let_body));
  QRET(T0);
}

FUNCODEDEF(fun_151) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYfix_let_body));
  QRET(T0);
}

FUNCODEDEF(fun_152) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_153) {
  ARG(x_, 0);
  ARG(p_, 1);
  P a1,a2;
loop:
  RET(x_);
}

FUNCODEDEF(fun_154) {
  ARG(x_, 0);
  ARG(p_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(Yapply),CHKREF(Ylst),x_);
  RET(T0);
}

FUNCODEDEF(fun_155) {
  ARG(x_, 0);
  ARG(p_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YmacrosYpair),CHKREF(YastYLfab_listG),x_);
  T0 = CALL2(CHKREF(Yapply),CHKREF(YruntimeYfabs),T1);
  RET(T0);
}

FUNCODEDEF(YastYfab_list) {
  ARG(t_, 0);
  ARG(h_, 1);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = (P)YPpair(CHKREF(YastYLfab_listG),Ynil);
  T4 = (P)YPpair(CHKREF(Ytail),Ynil);
  T3 = (P)YPpair(CHKREF(Yhead),T4);
  T2 = (P)YPpair(t_,Ynil);
  T1 = (P)YPpair(h_,T2);
  T0 = CALL3(CHKREF(YPisa),T5,T3,T1);
  QRET(T0);
}

FUNCODEDEF(fun_157) {
  ARG(e_, 0);
  P a1;
loop:
  RET(CHKREF(YastYDfab_list_empty));
}

FUNCODEDEF(fun_158) {
  ARG(x_, 0);
  ARG(p_, 1);
  P a1,a2;
loop:
  RET(x_);
}

FUNCODEDEF(fun_159) {
  ARG(x_, 0);
  ARG(p_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(Yapply),CHKREF(Ylst),x_);
  RET(T0);
}

FUNCODEDEF(fun_160) {
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

FUNCODEDEF(fun_162) {
  ARG(e_, 0);
  P a1;
loop:
  RET(CHKREF(YastYDarguments_empty));
}

FUNCODEDEF(fun_loop_163) {
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

FUNCODEDEF(fun_164) {
  ARG(e_, 0);
  ARG(c_, 1);
  P loopF1249;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_loop_163,1);
  loopF1249 = T2;
  FUNINIT(loopF1249, 1,loopF1249);
  T1 = KCALL2(loopF1249,Ynil,e_);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_165) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYlocals_bindings));
  QRET(T0);
}

FUNCODEDEF(fun_166) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYlocals_bindings));
  QRET(T0);
}

FUNCODEDEF(fun_167) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_168) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYlocals_functions));
  QRET(T0);
}

FUNCODEDEF(fun_169) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYlocals_functions));
  QRET(T0);
}

FUNCODEDEF(fun_170) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_171) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYlocals_body));
  QRET(T0);
}

FUNCODEDEF(fun_172) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYlocals_body));
  QRET(T0);
}

FUNCODEDEF(fun_173) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_174) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYbind_exit_main_fun));
  QRET(T0);
}

FUNCODEDEF(fun_175) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYbind_exit_main_fun));
  QRET(T0);
}

FUNCODEDEF(fun_176) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_177) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYunwind_protect_protected_thunk));
  QRET(T0);
}

FUNCODEDEF(fun_178) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYunwind_protect_protected_thunk));
  QRET(T0);
}

FUNCODEDEF(fun_179) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_180) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYunwind_protect_cleanup_thunk));
  QRET(T0);
}

FUNCODEDEF(fun_181) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYunwind_protect_cleanup_thunk));
  QRET(T0);
}

FUNCODEDEF(fun_182) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_183) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYmonitor_type));
  QRET(T0);
}

FUNCODEDEF(fun_184) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYmonitor_type));
  QRET(T0);
}

FUNCODEDEF(fun_185) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_186) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYmonitor_info));
  QRET(T0);
}

FUNCODEDEF(fun_187) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYmonitor_info));
  QRET(T0);
}

FUNCODEDEF(fun_188) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_189) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYmonitor_test));
  QRET(T0);
}

FUNCODEDEF(fun_190) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYmonitor_test));
  QRET(T0);
}

FUNCODEDEF(fun_191) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_192) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYmonitor_handler));
  QRET(T0);
}

FUNCODEDEF(fun_193) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYmonitor_handler));
  QRET(T0);
}

FUNCODEDEF(fun_194) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_195) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYmonitor_main_thunk));
  QRET(T0);
}

FUNCODEDEF(fun_196) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYmonitor_main_thunk));
  QRET(T0);
}

FUNCODEDEF(fun_197) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_198) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYenvironment_next));
  QRET(T0);
}

FUNCODEDEF(fun_199) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYenvironment_next));
  QRET(T0);
}

FUNCODEDEF(fun_200) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_201) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYenvironment_bindings));
  QRET(T0);
}

FUNCODEDEF(fun_202) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYenvironment_bindings));
  QRET(T0);
}

FUNCODEDEF(fun_203) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_204) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYenvironment_module));
  QRET(T0);
}

FUNCODEDEF(fun_205) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYenvironment_module));
  QRET(T0);
}

FUNCODEDEF(fun_206) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_207) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYenvironment_module_loader));
  QRET(T0);
}

FUNCODEDEF(fun_208) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYenvironment_module_loader));
  QRET(T0);
}

FUNCODEDEF(fun_209) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_210) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYenvironment_uses_modules));
  QRET(T0);
}

FUNCODEDEF(fun_211) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYenvironment_uses_modules));
  QRET(T0);
}

FUNCODEDEF(fun_212) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYfab),CHKREF(YruntimeYLbufG),YPint((P)0));
  QRET(T0);
}

FUNCODEDEF(fun_213) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYenvironment_implements));
  QRET(T0);
}

FUNCODEDEF(fun_214) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYenvironment_implements));
  QRET(T0);
}

FUNCODEDEF(fun_215) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_216) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYenvironment_allows_foreign_namesQ));
  QRET(T0);
}

FUNCODEDEF(fun_217) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYenvironment_allows_foreign_namesQ));
  QRET(T0);
}

FUNCODEDEF(fun_218) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_219) {
  ARG(binding_, 0);
  P tmpF1251;
  P tmpF1250;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = CALL1(CHKREF(YastYbinding_kind),binding_);
  T11 = CALL2(CHKREF(YmacrosYEE),T12,CHKREF(lit_20));
  tmpF1250 = T11;
  if (tmpF1250 != YPfalse) {
    T10 = CALL1(CHKREF(YastYbinding_global_box),binding_);
    tmpF1251 = T10;
    if (tmpF1251 != YPfalse) {
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

FUNCODEDEF(fun_220) {
  ARG(return_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_219,2,return_,FREEREF(0));
  T0 = CALL1(CHKREF(YastYruntime_environment),CHKREF(lit_0));
  CALL2(CHKREF(YastYdo_static_global_bindings),T1,T0);
  QRET(YPfalse);
}

FUNCODEDEF(fun_221) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_220,1,x_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_222) {
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

FUNCODEDEF(fun_223) {
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

FUNCODEDEF(fun_224) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(e_, 2);
  ARG(f_, 3);
  P x_1246F1253;
  P x_1245F1252;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T12 = CALL1(CHKREF(YastYbinding_kind),f_);
  x_1245F1252 = T12;
  T11 = CALL2(CHKREF(YmacrosYEE),x_1245F1252,CHKREF(lit_190));
  if (T11 != YPfalse) {
    T10 = CALL1(CHKREF(YastYbinding_handler),f_);
    T9 = CALL3(T10,e_,r_,tailQ_);
    T1 = T9;
  } else {
    x_1246F1253 = x_1245F1252;
    T8 = CALL2(CHKREF(YmacrosYEE),x_1246F1253,CHKREF(lit_189));
    if (T8 != YPfalse) {
      T7 = CALL1(CHKREF(YastYbinding_handler),f_);
      T6 = CALL3(T7,e_,r_,tailQ_);
      T5 = CALL3(CHKREF(YastYobjectify),T6,r_,tailQ_);
      T3 = T5;
    } else {
      T4 = CALL2(CHKREF(Yerror),CHKREF(lit_188),f_);
      T3 = T4;
    }
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_225) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(e_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALL2(CHKREF(YastYobjectify_symbol),e_,r_);
  QRET(T0);
}

FUNCODEDEF(fun_226) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(e_, 2);
  P a1,a2,a3;
loop:
  QRET(e_);
}

FUNCODEDEF(fun_227) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(e_, 2);
  P a1,a2,a3;
loop:
  QRET(e_);
}

FUNCODEDEF(fun_228) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(e_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALL2(CHKREF(YastYobjectify_quotation),e_,r_);
  QRET(T0);
}

FUNCODEDEF(fun_229) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(e_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALL2(CHKREF(YastYobjectify_quotation),e_,r_);
  QRET(T0);
}

FUNCODEDEF(fun_230) {
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

FUNCODEDEF(fun_231) {
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

FUNCODEDEF(fun_232) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(e_, 2);
  P refF1254;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T5 = CALL2(CHKREF(YastYobjectify_symbol),e_,r_);
  refF1254 = T5;
  T4 = (P)YPpair(CHKREF(YastYLboundQG),Ynil);
  T3 = (P)YPpair(CHKREF(YastYboundQ_reference),Ynil);
  T2 = (P)YPpair(refF1254,Ynil);
  T1 = CALL3(CHKREF(YPisa),T4,T3,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_233) {
  ARG(rtQ_, 0);
  ARG(tailQ_, 1);
  ARG(r_, 2);
  ARG(program_, 3);
  P tmpF1259;
  P astF1258;
  P target_envF1257;
  P syntax_envF1256;
  P modF1255;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2,a3,a4;
loop:
  T16 = CALL1(CHKREF(YastYfind_environment_module),r_);
  modF1255 = T16;
  T15 = CALL1(CHKREF(YastYmodule_syntax_environment),modF1255);
  syntax_envF1256 = T15;
  T14 = CALL1(CHKREF(YastYmodule_target_environment),modF1255);
  target_envF1257 = T14;
  T13 = CALL3(CHKREF(YastYobjectify),program_,syntax_envF1256,tailQ_);
  astF1258 = T13;
  CALL1(CHKREF(YastYast_evaluate),astF1258);
  tmpF1259 = rtQ_;
  if (tmpF1259 != YPfalse) {
    T12 = CALL2(CHKREF(YruntimeYNEE),syntax_envF1256,target_envF1257);
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

FUNCODEDEF(fun_234) {
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

FUNCODEDEF(fun_loop_235) {
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

FUNCODEDEF(fun_236) {
  ARG(eT_, 0);
  P loopF1260;
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
      T4 = FUNSHELL(1,fun_loop_235,1);
      loopF1260 = T4;
      FUNINIT(loopF1260, 1,loopF1260);
      T3 = KCALL1(loopF1260,eT_);
      T2 = T3;
      T1 = T2;
    }
    T0 = T1;
  }
  RET(T0);
}

FUNCODEDEF(fun_loop_237) {
  ARG(eT_, 0);
  ARG(res_, 1);
  P headF1262;
  P tailQF1261;
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
    tailQF1261 = T8;
    T7 = CALL1(CHKREF(Yhead),eT_);
    T6 = CALL3(CHKREF(YastYobjectify),T7,FREEREF(1),tailQF1261);
    headF1262 = T6;
    T5 = CALL2(CHKREF(YmacrosYpair),headF1262,res_);
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

FUNCODEDEF(fun_238) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(eT_, 2);
  P astsF1264;
  P loopF1263;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T4 = FUNSHELL(1,fun_loop_237,3);
  loopF1263 = T4;
  FUNINIT(loopF1263, 3,tailQ_,r_,loopF1263);
  T3 = KCALL2(loopF1263,Ynil,eT_);
  T2 = T3;
  astsF1264 = T2;
  T1 = CALL1(CHKREF(YastYsequentialize),astsF1264);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_239) {
  ARG(e_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(YastYobjectify),e_,FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_240) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(eT_, 2);
  ARG(ff_, 3);
  P eeTF1265;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = FUNFAB(fun_239,1,r_);
  T3 = CALL2(CHKREF(YmacrosYmap),T4,eT_);
  T2 = CALL1(CHKREF(YastYconvert2arguments),T3);
  eeTF1265 = T2;
  T1 = CALLN(CHKREF(YastYprocess_closed_application),4,ff_,eeTF1265,r_,tailQ_);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_241) {
  ARG(e_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(YastYobjectify),e_,FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_242) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(eT_, 2);
  ARG(ff_, 3);
  P fvfF1267;
  P eeTF1266;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T13 = FUNFAB(fun_241,1,r_);
  T12 = CALL2(CHKREF(YmacrosYmap),T13,eT_);
  T11 = CALL1(CHKREF(YastYconvert2arguments),T12);
  eeTF1266 = T11;
  T10 = CALL1(CHKREF(YastYreference_binding),ff_);
  fvfF1267 = T10;
  T9 = (P)YPpair(CHKREF(YastYLpredefined_applicationG),Ynil);
  T8 = (P)YPpair(CHKREF(YastYapplication_tailQ),Ynil);
  T7 = (P)YPpair(CHKREF(YastYapplication_arguments),T8);
  T6 = (P)YPpair(CHKREF(YastYapplication_binding),T7);
  T5 = (P)YPpair(tailQ_,Ynil);
  T4 = (P)YPpair(eeTF1266,T5);
  T3 = (P)YPpair(fvfF1267,T4);
  T2 = CALL3(CHKREF(YPisa),T9,T6,T3);
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_243) {
  ARG(e_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(YastYobjectify),e_,FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_244) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(eT_, 2);
  ARG(ff_, 3);
  P eeTF1268;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T11 = FUNFAB(fun_243,1,r_);
  T10 = CALL2(CHKREF(YmacrosYmap),T11,eT_);
  T9 = CALL1(CHKREF(YastYconvert2arguments),T10);
  eeTF1268 = T9;
  T8 = (P)YPpair(CHKREF(YastYLregular_applicationG),Ynil);
  T7 = (P)YPpair(CHKREF(YastYapplication_tailQ),Ynil);
  T6 = (P)YPpair(CHKREF(YastYapplication_arguments),T7);
  T5 = (P)YPpair(CHKREF(YastYapplication_function),T6);
  T4 = (P)YPpair(tailQ_,Ynil);
  T3 = (P)YPpair(eeTF1268,T4);
  T2 = (P)YPpair(ff_,T3);
  T1 = CALL3(CHKREF(YPisa),T8,T5,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_245) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(eT_, 2);
  ARG(f_, 3);
  P bF1270;
  P vTF1269;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T25 = CALL1(CHKREF(YastYfunction_bindings),f_);
  vTF1269 = T25;
  T24 = CALL1(CHKREF(YastYfunction_body),f_);
  bF1270 = T24;
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
      T4 = CALL3(CHKREF(YastYobjectify_error),CHKREF(lit_206),f_,eT_);
      T3 = T4;
    }
    T2 = T3;
  }
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_gather_arguments_246) {
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
      T7 = CALL3(CHKREF(YastYobjectify_error),CHKREF(lit_210),FREEREF(1),eT_);
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

FUNCODEDEF(fun_pack_nary_args_247) {
  ARG(eT_, 0);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = CALL1(CHKREF(YmacrosYemptyQ),eT_);
  if (T6 != YPfalse) {
    T5 = CALL2(CHKREF(Ylst),CHKREF(lit_213),Ynil);
    T0 = T5;
  } else {
    T4 = CALL1(CHKREF(Yhead),eT_);
    T3 = CALL1(CHKREF(Ytail),eT_);
    T2 = KCALL1(FREEREF(0),T3);
    T1 = CALL3(CHKREF(Ylst),CHKREF(lit_212),T4,T2);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_248) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(eT_, 2);
  ARG(f_, 3);
  P oF1274;
  P vTF1273;
  P gather_argumentsF1272;
  P pack_nary_argsF1271;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T19 = FUNSHELL(1,fun_pack_nary_args_247,1);
  pack_nary_argsF1271 = T19;
  T18 = FUNSHELL(1,fun_gather_arguments_246,4);
  gather_argumentsF1272 = T18;
  FUNINIT(pack_nary_argsF1271, 1,pack_nary_argsF1271);
  FUNINIT(gather_argumentsF1272, 4,gather_argumentsF1272,f_,r_,pack_nary_argsF1271);
  T17 = CALL1(CHKREF(YastYfunction_bindings),f_);
  vTF1273 = T17;
  T16 = (P)YPpair(CHKREF(YastYLfix_letG),Ynil);
  T15 = (P)YPpair(CHKREF(YastYfix_let_body),Ynil);
  T14 = (P)YPpair(CHKREF(YastYfix_let_arguments),T15);
  T13 = (P)YPpair(CHKREF(YastYfix_let_types),T14);
  T12 = (P)YPpair(CHKREF(YastYfix_let_bindings),T13);
  T11 = CALL1(CHKREF(YastYfunction_specs),f_);
  T10 = KCALL2(gather_argumentsF1272,eT_,vTF1273);
  T9 = CALL1(CHKREF(YastYfunction_body),f_);
  T8 = (P)YPpair(T9,Ynil);
  T7 = (P)YPpair(T10,T8);
  T6 = (P)YPpair(T11,T7);
  T5 = (P)YPpair(vTF1273,T6);
  T4 = CALL3(CHKREF(YPisa),T16,T12,T5);
  oF1274 = T4;
  T3 = CALL1(CHKREF(YruntimeYlast),vTF1273);
  CALL2(CHKREF(YastYbinding_dottedQ_setter),YPfalse,T3);
  T2 = oF1274;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_249) {
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

FUNCODEDEF(fun_250) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(e_, 2);
  ARG(binding_, 3);
  P opF1275;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T10 = CALL1(CHKREF(YsyntaxYsexpr_operator),binding_);
  opF1275 = T10;
  T9 = CALL1(CHKREF(YsyntaxYsexpr_variableQ),opF1275);
  if (T9 != YPfalse) {
    T8 = CALL1(CHKREF(YsyntaxYsexpr_make_setter_name),opF1275);
    T7 = CALL3(CHKREF(YastYobjectify),T8,r_,YPfalse);
    T6 = CALL1(CHKREF(YsyntaxYsexpr_operands),binding_);
    T5 = CALL2(CHKREF(YmacrosYpair),e_,T6);
    T4 = CALL2(CHKREF(YsyntaxYsexpr_make_application),T7,T5);
    T3 = CALL3(CHKREF(YastYobjectify),T4,r_,tailQ_);
    T1 = T3;
  } else {
    T2 = CALL2(CHKREF(YastYobjectify_error),CHKREF(lit_216),e_);
    T1 = T2;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_251) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(e_, 2);
  ARG(binding_, 3);
  P valF1277;
  P refF1276;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = CALL3(CHKREF(YastYobjectify),binding_,r_,YPfalse);
  refF1276 = T4;
  T3 = CALL3(CHKREF(YastYobjectify),e_,r_,YPfalse);
  valF1277 = T3;
  T2 = CALL2(CHKREF(YastYobjectify_assignment_using),refF1276,valF1277);
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_252) {
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

FUNCODEDEF(fun_253) {
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

FUNCODEDEF(fun_254) {
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

FUNCODEDEF(YastYupdate_binding_kind) {
  ARG(new_kind_, 0);
  ARG(binding_, 1);
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = CALL1(CHKREF(YastYbinding_kind),binding_);
  T9 = CALL2(CHKREF(YruntimeYNEE),T10,CHKREF(lit_1));
  if (T9 != YPfalse) {
    T8 = CALL2(CHKREF(YastYbinding_kind_setter),new_kind_,binding_);
    T0 = T8;
  } else {
    T7 = CALL2(CHKREF(YmacrosYEE),new_kind_,CHKREF(lit_1));
    if (T7 != YPfalse) {
      T1 = YPtrue;
    } else {
      T6 = CALL2(CHKREF(YmacrosYEE),new_kind_,CHKREF(lit_20));
      if (T6 != YPfalse) {
        T2 = YPtrue;
      } else {
        if (YPtrue != YPfalse) {
          T5 = CALL1(CHKREF(YastYbinding_name),binding_);
          T4 = CALL3(CHKREF(Yerror),CHKREF(lit_222),T5,new_kind_);
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

FUNCODEDEF(fun_256) {
  ARG(kind_, 0);
  ARG(defining_methodQ_, 1);
  ARG(name_, 2);
  ARG(r_, 3);
  P bindingF1286;
  P x_1247F1285;
  P foreignQF1284;
  P tmpF1283;
  P bindingF1282;
  P mod_nameF1281;
  P modF1280;
  P grF1279;
  P existing_bindingF1278;
  P T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T36 = CALL2(CHKREF(YastYfind_binding),name_,r_);
  existing_bindingF1278 = T36;
  T35 = CALL1(CHKREF(YastYfind_static_global_environment),r_);
  grF1279 = T35;
  T34 = CALL1(CHKREF(YastYenvironment_module),grF1279);
  modF1280 = T34;
  if (existing_bindingF1278 != YPfalse) {
    T33 = CALL2(CHKREF(YastYbinding_native_toQ),existing_bindingF1278,modF1280);
    tmpF1283 = T33;
    if (tmpF1283 != YPfalse) {
      T32 = tmpF1283;
    } else {
      T32 = defining_methodQ_;
    }
    T31 = T32;
    T30 = CALL1(CHKREF(Ynot),T31);
    foreignQF1284 = T30;
    T29 = CALL1(CHKREF(YastYbinding_freeQ),existing_bindingF1278);
    if (T29 != YPfalse) {
      CALL2(CHKREF(YastYbinding_freeQ_setter),YPfalse,existing_bindingF1278);
      if (foreignQF1284 != YPfalse) {
        x_1247F1285 = grF1279;
        T28 = CALL1(CHKREF(YastYenvironment_implements),x_1247F1285);
        T27 = CALL2(CHKREF(YruntimeYpush),T28,existing_bindingF1278);
        T26 = CALL2(CHKREF(YastYenvironment_implements_setter),T27,x_1247F1285);
        T25 = T26;
        T24 = T25;
      } else {
        T24 = YPfalse;
      }
    } else {
      if (foreignQF1284 != YPfalse) {
        T23 = CALL1(CHKREF(YastYmodule_name),modF1280);
        T22 = CALL1(CHKREF(YastYbinding_module_name),existing_bindingF1278);
        T21 = CALLN(CHKREF(YruntimeYformat),5,CHKREF(YruntimeYout),CHKREF(lit_227),T23,name_,T22);
        T20 = T21;
      } else {
        T20 = YPfalse;
      }
    }
    CALL2(CHKREF(YastYupdate_binding_kind),existing_bindingF1278,kind_);
    T19 = existing_bindingF1278;
    T4 = T19;
  } else {
    T18 = CALL1(CHKREF(YastYfind_environment_module),r_);
    T17 = CALL1(CHKREF(YastYmodule_name),T18);
    mod_nameF1281 = T17;
    T16 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
    T15 = (P)YPpair(CHKREF(YastYbinding_module_name),Ynil);
    T14 = (P)YPpair(CHKREF(YastYbinding_freeQ),T15);
    T13 = (P)YPpair(CHKREF(YastYbinding_name),T14);
    T12 = (P)YPpair(CHKREF(YastYbinding_kind),T13);
    T11 = (P)YPpair(mod_nameF1281,Ynil);
    T10 = (P)YPpair(YPfalse,T11);
    T9 = (P)YPpair(name_,T10);
    T8 = (P)YPpair(kind_,T9);
    T7 = CALL3(CHKREF(YPisa),T16,T12,T8);
    bindingF1282 = T7;
    CALL2(CHKREF(YastYinsert_globalX),bindingF1282,grF1279);
    T6 = bindingF1282;
    T5 = T6;
    T4 = T5;
  }
  bindingF1286 = T4;
  T3 = bindingF1286;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_257) {
  ARG(r_, 0);
  ARG(e_, 1);
  ARG(var_, 2);
  P defnF1289;
  P bindingF1288;
  P nameF1287;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T11 = CALL1(CHKREF(YsyntaxYsexpr_variable_name),var_);
  nameF1287 = T11;
  T10 = CALLN(CHKREF(YastYast_define_binding),4,r_,nameF1287,YPfalse,CHKREF(lit_20));
  bindingF1288 = T10;
  T9 = (P)YPpair(CHKREF(YastYLdefinitionG),Ynil);
  T8 = (P)YPpair(CHKREF(YastYassignment_form),Ynil);
  T7 = (P)YPpair(CHKREF(YastYassignment_binding),T8);
  T6 = CALL3(CHKREF(YastYobjectify),e_,r_,YPfalse);
  T5 = (P)YPpair(T6,Ynil);
  T4 = (P)YPpair(bindingF1288,T5);
  T3 = CALL3(CHKREF(YPisa),T9,T7,T4);
  defnF1289 = T3;
  T2 = defnF1289;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_expand_258) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P expF1290;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  if (CHKREF(YastYTmacro_tracingQT) != YPfalse) {
    CALL2(CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_238));
    CALL2(CHKREF(YwriteYwrite),CHKREF(YruntimeYout),x_);
    T0 = CALL2(CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_237));
  } else {
  }
  T4 = CALL1(CHKREF(Ylst),x_);
  T3 = CALL2(CHKREF(Yapply),FREEREF(0),T4);
  expF1290 = T3;
  if (CHKREF(YastYTmacro_tracingQT) != YPfalse) {
    CALL2(CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_236));
    CALL2(CHKREF(YwriteYwrite),CHKREF(YruntimeYout),expF1290);
    T2 = CALL2(CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_235));
  } else {
  }
  T1 = expF1290;
  QRET(T1);
}

FUNCODEDEF(YPPmacro) {
  ARG(env_or_false_, 0);
  ARG(expander_, 1);
  ARG(name_, 2);
  ARG(modname_, 3);
  P bindingF1294;
  P envF1293;
  P tmpF1292;
  P expandF1291;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T7 = FUNSHELL(0,fun_expand_258,1);
  expandF1291 = T7;
  FUNINIT(expandF1291, 1,expander_);
  tmpF1292 = env_or_false_;
  if (tmpF1292 != YPfalse) {
    T5 = tmpF1292;
  } else {
    T6 = CALL1(CHKREF(YastYruntime_environment),modname_);
    T5 = T6;
  }
  T4 = T5;
  envF1293 = T4;
  T3 = CALLN(CHKREF(YastYast_define_binding),4,envF1293,name_,YPfalse,CHKREF(lit_189));
  bindingF1294 = T3;
  CALL2(CHKREF(YastYbinding_handler_setter),expandF1291,bindingF1294);
  T2 = bindingF1294;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_260) {
  ARG(rtQ_, 0);
  ARG(r_, 1);
  ARG(e_, 2);
  ARG(name_, 3);
  P bindingF1300;
  P modnameF1299;
  P expanderF1298;
  P ast_expanderF1297;
  P syntax_envF1296;
  P sep_expanderF1295;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T25 = CALL1(CHKREF(YsyntaxYsexpr_make_macro_function),e_);
  sep_expanderF1295 = T25;
  T24 = CALL1(CHKREF(YastYfind_syntax_environment),r_);
  syntax_envF1296 = T24;
  T23 = CALL3(CHKREF(YastYobjectify),sep_expanderF1295,syntax_envF1296,YPfalse);
  ast_expanderF1297 = T23;
  T22 = CALL1(CHKREF(YastYast_evaluate),ast_expanderF1297);
  expanderF1298 = T22;
  T21 = CALL1(CHKREF(YastYfind_environment_module),r_);
  T20 = CALL1(CHKREF(YastYmodule_name),T21);
  modnameF1299 = T20;
  T19 = CALL1(CHKREF(YastYfind_static_global_environment),r_);
  T18 = CALLN(CHKREF(YPPmacro),4,modnameF1299,name_,expanderF1298,T19);
  bindingF1300 = T18;
  T8 = CALL1(CHKREF(YastYfind_static_global_environment),r_);
  T7 = CALL2(CHKREF(YruntimeYNEE),syntax_envF1296,T8);
  if (T7 != YPfalse) {
    T6 = CALL2(CHKREF(YastYinsert_globalX),bindingF1300,syntax_envF1296);
  } else {
  }
  if (rtQ_ != YPfalse) {
    T17 = (P)YPpair(CHKREF(YastYLast_macro_definitionG),Ynil);
    T16 = (P)YPpair(CHKREF(YastYassignment_form),Ynil);
    T15 = (P)YPpair(CHKREF(YastYassignment_binding),T16);
    T14 = CALL3(CHKREF(YastYobjectify),sep_expanderF1295,r_,YPfalse);
    T13 = (P)YPpair(T14,Ynil);
    T12 = (P)YPpair(bindingF1300,T13);
    T11 = CALL3(CHKREF(YPisa),T17,T15,T12);
    T9 = T11;
  } else {
    T10 = CALL2(CHKREF(YastYobjectify_quotation),YPfalse,r_);
    T9 = T10;
  }
  T5 = T9;
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_261) {
  ARG(r_, 0);
  ARG(e_, 1);
  ARG(name_, 2);
  P defnF1303;
  P fF1302;
  P bindingF1301;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T11 = CALLN(CHKREF(YastYast_define_binding),4,r_,name_,YPfalse,CHKREF(lit_20));
  bindingF1301 = T11;
  T10 = CALL3(CHKREF(YastYobjectify),e_,r_,YPfalse);
  fF1302 = T10;
  CALL2(CHKREF(YastYfunction_binding_setter),bindingF1301,fF1302);
  T2 = CALL2(CHKREF(YastYobjectify_quotation),name_,r_);
  CALL2(CHKREF(YastYfunction_debug_name_setter),T2,fF1302);
  T9 = (P)YPpair(CHKREF(YastYLast_function_definitionG),Ynil);
  T8 = (P)YPpair(CHKREF(YastYassignment_form),Ynil);
  T7 = (P)YPpair(CHKREF(YastYassignment_binding),T8);
  T6 = (P)YPpair(fF1302,Ynil);
  T5 = (P)YPpair(bindingF1301,T6);
  T4 = CALL3(CHKREF(YPisa),T9,T7,T5);
  defnF1303 = T4;
  T3 = defnF1303;
  T1 = T3;
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

FUNCODEDEF(fun_263) {
  ARG(r_, 0);
  ARG(body_, 1);
  ARG(sig_, 2);
  ARG(name_, 3);
  P defnF1309;
  P formF1308;
  P bodyF1307;
  P new_rF1306;
  P signatureF1305;
  P bindingF1304;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T27 = CALLN(CHKREF(YastYast_define_binding),4,r_,name_,YPfalse,CHKREF(lit_245));
  bindingF1304 = T27;
  T26 = CALL2(CHKREF(YastYobjectify_signature),sig_,r_);
  signatureF1305 = T26;
  T25 = CALL1(CHKREF(YastYsignature_bindings),signatureF1305);
  T24 = CALL2(CHKREF(YastYr_extendT),r_,T25);
  new_rF1306 = T24;
  T23 = CALL3(CHKREF(YastYobjectify_sequential),body_,new_rF1306,YPtrue);
  bodyF1307 = T23;
  T22 = (P)YPpair(CHKREF(YastYLast_primitiveG),Ynil);
  T21 = (P)YPpair(CHKREF(YastYfunction_body),Ynil);
  T20 = (P)YPpair(CHKREF(YastYfunction_signature),T21);
  T19 = (P)YPpair(CHKREF(YastYfunction_debug_name),T20);
  T18 = (P)YPpair(CHKREF(YastYfunction_binding),T19);
  T17 = CALL2(CHKREF(YastYobjectify_quotation),name_,r_);
  T16 = (P)YPpair(bodyF1307,Ynil);
  T15 = (P)YPpair(signatureF1305,T16);
  T14 = (P)YPpair(T17,T15);
  T13 = (P)YPpair(bindingF1304,T14);
  T12 = CALL3(CHKREF(YPisa),T22,T18,T13);
  formF1308 = T12;
  T11 = (P)YPpair(CHKREF(YastYLast_primitive_definitionG),Ynil);
  T10 = (P)YPpair(CHKREF(YastYassignment_form),Ynil);
  T9 = (P)YPpair(CHKREF(YastYassignment_binding),T10);
  T8 = (P)YPpair(formF1308,Ynil);
  T7 = (P)YPpair(bindingF1304,T8);
  T6 = CALL3(CHKREF(YPisa),T11,T9,T7);
  defnF1309 = T6;
  T5 = defnF1309;
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_264) {
  ARG(r_, 0);
  ARG(sig_, 1);
  ARG(name_, 2);
  P defnF1313;
  P formF1312;
  P signatureF1311;
  P bindingF1310;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T20 = CALLN(CHKREF(YastYast_define_binding),4,r_,name_,YPfalse,CHKREF(lit_20));
  bindingF1310 = T20;
  T19 = CALL2(CHKREF(YastYobjectify_signature),sig_,r_);
  signatureF1311 = T19;
  T18 = (P)YPpair(CHKREF(YastYLast_genericG),Ynil);
  T17 = (P)YPpair(CHKREF(YastYfunction_signature),Ynil);
  T16 = (P)YPpair(CHKREF(YastYfunction_debug_name),T17);
  T15 = (P)YPpair(CHKREF(YastYfunction_binding),T16);
  T14 = CALL2(CHKREF(YastYobjectify_quotation),name_,r_);
  T13 = (P)YPpair(signatureF1311,Ynil);
  T12 = (P)YPpair(T14,T13);
  T11 = (P)YPpair(bindingF1310,T12);
  T10 = CALL3(CHKREF(YPisa),T18,T15,T11);
  formF1312 = T10;
  T9 = (P)YPpair(CHKREF(YastYLast_generic_definitionG),Ynil);
  T8 = (P)YPpair(CHKREF(YastYassignment_form),Ynil);
  T7 = (P)YPpair(CHKREF(YastYassignment_binding),T8);
  T6 = (P)YPpair(formF1312,Ynil);
  T5 = (P)YPpair(bindingF1310,T6);
  T4 = CALL3(CHKREF(YPisa),T9,T7,T5);
  defnF1313 = T4;
  T3 = defnF1313;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_265) {
  ARG(r_, 0);
  ARG(e_, 1);
  ARG(name_, 2);
  P defnF1319;
  P formF1318;
  P callF1317;
  P metF1316;
  P genF1315;
  P bindingF1314;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T18 = CALLN(CHKREF(YastYast_define_binding),4,r_,name_,YPtrue,CHKREF(lit_20));
  bindingF1314 = T18;
  T17 = CALL2(CHKREF(Ylst),CHKREF(lit_249),name_);
  T16 = CALLN(CHKREF(Ylst),4,CHKREF(lit_250),T17,name_,YPfalse);
  genF1315 = T16;
  T15 = CALL3(CHKREF(YastYobjectify),e_,r_,YPfalse);
  metF1316 = T15;
  T14 = CALL3(CHKREF(Ylst),CHKREF(lit_248),genF1315,metF1316);
  callF1317 = T14;
  T13 = CALL3(CHKREF(YastYobjectify),callF1317,r_,YPfalse);
  formF1318 = T13;
  T12 = (P)YPpair(CHKREF(YastYLast_method_definitionG),Ynil);
  T11 = (P)YPpair(CHKREF(YastYassignment_form),Ynil);
  T10 = (P)YPpair(CHKREF(YastYassignment_binding),T11);
  T9 = (P)YPpair(formF1318,Ynil);
  T8 = (P)YPpair(bindingF1314,T9);
  T7 = CALL3(CHKREF(YPisa),T12,T10,T8);
  defnF1319 = T7;
  T6 = CALL2(CHKREF(YastYobjectify_quotation),name_,r_);
  CALL2(CHKREF(YastYfunction_debug_name_setter),T6,metF1316);
  T5 = defnF1319;
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_266) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(body_, 2);
  ARG(sig_, 3);
  P bF1322;
  P new_rF1321;
  P signatureF1320;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T15 = CALL2(CHKREF(YastYobjectify_signature),sig_,r_);
  signatureF1320 = T15;
  T14 = CALL1(CHKREF(YastYsignature_bindings),signatureF1320);
  T13 = CALL2(CHKREF(YastYr_extendT),r_,T14);
  new_rF1321 = T13;
  T12 = CALL3(CHKREF(YastYobjectify_sequential),body_,new_rF1321,YPtrue);
  bF1322 = T12;
  T11 = (P)YPpair(CHKREF(YastYLast_methodG),Ynil);
  T10 = (P)YPpair(CHKREF(YastYfunction_body),Ynil);
  T9 = (P)YPpair(CHKREF(YastYfunction_signature),T10);
  T8 = (P)YPpair(CHKREF(YastYfunction_debug_name),T9);
  T7 = CALL2(CHKREF(YastYobjectify_quotation),YPfalse,r_);
  T6 = (P)YPpair(bF1322,Ynil);
  T5 = (P)YPpair(signatureF1320,T6);
  T4 = (P)YPpair(T7,T5);
  T3 = CALL3(CHKREF(YPisa),T11,T8,T4);
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_col_267) {
  ARG(types_, 0);
  ARG(names_, 1);
  ARG(bindings_, 2);
  ARG(naryQ_, 3);
  ARG(params_, 4);
  P valueF1333;
  P tmpF1332;
  P sexpr_valueF1331;
  P bindingF1330;
  P nameF1329;
  P typeF1328;
  P stypeF1327;
  P dottedQF1326;
  P stypeF1325;
  P snameF1324;
  P paramF1323;
  P T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46;
  P T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
loop:
  T61 = CALL1(CHKREF(YmacrosYemptyQ),params_);
  if (T61 != YPfalse) {
    T60 = CALL1(CHKREF(YsyntaxYsexpr_signature_value),FREEREF(2));
    sexpr_valueF1331 = T60;
    tmpF1332 = sexpr_valueF1331;
    if (tmpF1332 != YPfalse) {
      T58 = tmpF1332;
    } else {
      T59 = CALL1(CHKREF(YastYdefault_type),FREEREF(0));
      T58 = T59;
    }
    T57 = T58;
    T56 = CALL3(CHKREF(YastYobjectify),T57,FREEREF(0),YPfalse);
    valueF1333 = T56;
    T55 = (P)YPpair(CHKREF(YastYLast_signatureG),Ynil);
    T54 = (P)YPpair(CHKREF(YastYsignature_value),Ynil);
    T53 = (P)YPpair(CHKREF(YastYsignature_naryQ),T54);
    T52 = (P)YPpair(CHKREF(YastYsignature_specs),T53);
    T51 = (P)YPpair(CHKREF(YastYsignature_names),T52);
    T50 = (P)YPpair(CHKREF(YastYsignature_bindings),T51);
    T49 = CALL1(CHKREF(YruntimeYrevX),bindings_);
    T48 = CALL1(CHKREF(YruntimeYrevX),names_);
    T47 = CALL1(CHKREF(YruntimeYrevX),types_);
    T46 = (P)YPpair(valueF1333,Ynil);
    T45 = (P)YPpair(naryQ_,T46);
    T44 = (P)YPpair(T47,T45);
    T43 = (P)YPpair(T48,T44);
    T42 = (P)YPpair(T49,T43);
    T41 = CALL3(CHKREF(YPisa),T55,T50,T42);
    T40 = T41;
    T39 = T40;
    T0 = T39;
  } else {
    T38 = CALL1(CHKREF(Yhead),params_);
    paramF1323 = T38;
    T37 = CALL1(CHKREF(YsyntaxYsexpr_variable_name),paramF1323);
    snameF1324 = T37;
    T36 = CALL1(CHKREF(YsyntaxYsexpr_variable_type),paramF1323);
    stypeF1325 = T36;
    T35 = CALL2(CHKREF(YmacrosYEE),stypeF1325,CHKREF(YastYDsexpr_optionals_tag));
    dottedQF1326 = T35;
    if (dottedQF1326 != YPfalse) {
      T34 = CHKREF(YastYDsexpr_optionals_type_name);
    } else {
      T34 = stypeF1325;
    }
    stypeF1327 = T34;
    T33 = CALL3(CHKREF(YastYobjectify),stypeF1327,FREEREF(0),YPfalse);
    typeF1328 = T33;
    T32 = CALL2(CHKREF(YastYobjectify_quotation),snameF1324,FREEREF(0));
    nameF1329 = T32;
    T31 = (P)YPpair(CHKREF(YastYLlocal_bindingG),Ynil);
    T30 = (P)YPpair(CHKREF(YastYbinding_dottedQ),Ynil);
    T29 = (P)YPpair(CHKREF(YastYbinding_type),T30);
    T28 = (P)YPpair(CHKREF(YastYbinding_name),T29);
    T27 = (P)YPpair(dottedQF1326,Ynil);
    T26 = (P)YPpair(typeF1328,T27);
    T25 = (P)YPpair(snameF1324,T26);
    T24 = CALL3(CHKREF(YPisa),T31,T28,T25);
    bindingF1330 = T24;
    T23 = CALL1(CHKREF(Ytail),params_);
    T22 = CALL2(CHKREF(YmacrosYpair),bindingF1330,bindings_);
    T21 = (P)YPpair(CHKREF(YastYLfab_listG),Ynil);
    T20 = (P)YPpair(CHKREF(Ytail),Ynil);
    T19 = (P)YPpair(CHKREF(Yhead),T20);
    T18 = (P)YPpair(names_,Ynil);
    T17 = (P)YPpair(nameF1329,T18);
    T16 = CALL3(CHKREF(YPisa),T21,T19,T17);
    T15 = (P)YPpair(CHKREF(YastYLfab_listG),Ynil);
    T14 = (P)YPpair(CHKREF(Ytail),Ynil);
    T13 = (P)YPpair(CHKREF(Yhead),T14);
    T12 = (P)YPpair(types_,Ynil);
    T11 = (P)YPpair(typeF1328,T12);
    T10 = CALL3(CHKREF(YPisa),T15,T13,T11);
    a1 = T23;
    a2 = dottedQF1326;
    a3 = T22;
    a4 = T16;
    a5 = T10;
    params_ = a1;
    naryQ_ = a2;
    bindings_ = a3;
    names_ = a4;
    types_ = a5;
    goto loop;
    T8 = T9;
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

FUNCODEDEF(fun_268) {
  ARG(r_, 0);
  ARG(sig_, 1);
  P colF1335;
  P sexpr_paramsF1334;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T6 = CALL1(CHKREF(YsyntaxYsexpr_signature_parameters),sig_);
  sexpr_paramsF1334 = T6;
  T5 = FUNSHELL(1,fun_col_267,3);
  colF1335 = T5;
  FUNINIT(colF1335, 3,r_,colF1335,sig_);
  T4 = CALL1(CHKREF(YruntimeYempty),CHKREF(YastYLfab_listG));
  T3 = CALL1(CHKREF(YruntimeYempty),CHKREF(YastYLfab_listG));
  T2 = KCALLN(colF1335,5,sexpr_paramsF1334,YPfalse,Ynil,T4,T3);
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_find_269) {
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

FUNCODEDEF(fun_loop_270) {
  ARG(r_, 0);
  ARG(i_, 1);
  P findF1336;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = CALL2(CHKREF(YisaQ),r_,CHKREF(YastYLstatic_local_environmentG));
  if (T7 != YPfalse) {
    T6 = FUNSHELL(1,fun_find_269,5);
    findF1336 = T6;
    FUNINIT(findF1336, 5,findF1336,i_,FREEREF(0),r_,FREEREF(1));
    T5 = CALL1(CHKREF(YastYenvironment_bindings),r_);
    T4 = KCALL2(findF1336,YPint((P)0),T5);
    T3 = T4;
    T0 = T3;
  } else {
    T2 = CALL1(CHKREF(YastYbinding_name),FREEREF(0));
    T1 = CALL3(CHKREF(Yerror),CHKREF(lit_263),T2,r_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_271) {
  ARG(r_, 0);
  ARG(binding_, 1);
  P loopF1337;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_loop_270,2);
  loopF1337 = T2;
  FUNINIT(loopF1337, 2,binding_,loopF1337);
  T1 = KCALL2(loopF1337,YPint((P)0),r_);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_272) {
  ARG(r_, 0);
  ARG(b_, 1);
  ARG(n_, 2);
  P tup36F1342;
  P jF1341;
  P tup36F1340;
  P iF1339;
  P tup36F1338;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2,a3;
loop:
  T17 = CALL2(CHKREF(YastYcompute_local_reference_offsets),b_,r_);
  tup36F1338 = T17;
  T16 = CALL1(CHKREF(Yhead),tup36F1338);
  iF1339 = T16;
  T15 = CALL1(CHKREF(Ytail),tup36F1338);
  tup36F1340 = T15;
  T14 = CALL1(CHKREF(Yhead),tup36F1340);
  jF1341 = T14;
  T13 = CALL1(CHKREF(Ytail),tup36F1340);
  tup36F1342 = T13;
  T12 = (P)YPpair(CHKREF(YastYLlocal_referenceG),Ynil);
  T11 = (P)YPpair(CHKREF(YastYreference_frame_offset),Ynil);
  T10 = (P)YPpair(CHKREF(YastYreference_frame_number),T11);
  T9 = (P)YPpair(CHKREF(YastYreference_binding),T10);
  T8 = (P)YPpair(jF1341,Ynil);
  T7 = (P)YPpair(iF1339,T8);
  T6 = (P)YPpair(b_,T7);
  T5 = CALL3(CHKREF(YPisa),T12,T9,T6);
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_273) {
  ARG(b_, 0);
  P x_1250F1345;
  P x_1249F1344;
  P x_1248F1343;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T11 = CALL1(CHKREF(YastYbinding_kind),b_);
  x_1248F1343 = T11;
  T10 = CALL2(CHKREF(YmacrosYEE),x_1248F1343,CHKREF(lit_20));
  if (T10 != YPfalse) {
    T1 = CHKREF(YastYLglobal_referenceG);
  } else {
    x_1249F1344 = x_1248F1343;
    T9 = CALL2(CHKREF(YmacrosYEE),x_1249F1344,CHKREF(lit_245));
    if (T9 != YPfalse) {
      T3 = CHKREF(YastYLpredefined_referenceG);
    } else {
      x_1250F1345 = x_1249F1344;
      T8 = CALL2(CHKREF(YmacrosYEE),x_1250F1345,CHKREF(lit_1));
      if (T8 != YPfalse) {
        T5 = CHKREF(YastYLruntime_referenceG);
      } else {
        T7 = CALL1(CHKREF(YastYbinding_kind),b_);
        T6 = CALL2(CHKREF(Yerror),CHKREF(lit_270),T7);
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

FUNCODEDEF(fun_274) {
  ARG(r_, 0);
  ARG(b_, 1);
  ARG(n_, 2);
  P tmpF1348;
  P LrefGF1347;
  P x_1251F1346;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T12 = CALL1(CHKREF(YastYbinding_kind),b_);
  x_1251F1346 = T12;
  T11 = CALL2(CHKREF(YmacrosYEE),x_1251F1346,CHKREF(lit_190));
  tmpF1348 = T11;
  if (tmpF1348 != YPfalse) {
    T9 = tmpF1348;
  } else {
    T10 = CALL2(CHKREF(YmacrosYEE),x_1251F1346,CHKREF(lit_189));
    T9 = T10;
  }
  T8 = T9;
  if (T8 != YPfalse) {
    T1 = b_;
  } else {
    T7 = CALL1(CHKREF(YastYbinding_reference_prototype),b_);
    LrefGF1347 = T7;
    T6 = (P)YPpair(LrefGF1347,Ynil);
    T5 = (P)YPpair(CHKREF(YastYreference_binding),Ynil);
    T4 = (P)YPpair(b_,Ynil);
    T3 = CALL3(CHKREF(YPisa),T6,T5,T4);
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_275) {
  ARG(r_, 0);
  ARG(b_, 1);
  ARG(n_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALL2(CHKREF(YastYobjectify_free_global_reference),n_,r_);
  RET(T0);
}

FUNCODEDEF(fun_276) {
  ARG(r_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(YastYobjectify),CHKREF(lit_272),r_,YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_277) {
  ARG(r_, 0);
  ARG(name_, 1);
  P tmpF1351;
  P bF1350;
  P grF1349;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T24 = CALL1(CHKREF(YastYfind_static_global_environment),r_);
  grF1349 = T24;
  T23 = CALL1(CHKREF(YastYenvironment_allows_foreign_namesQ),grF1349);
  tmpF1351 = T23;
  if (tmpF1351 != YPfalse) {
    T22 = CALL1(CHKREF(YastYforeign_nameQ),name_);
    T21 = T22;
  } else {
    T21 = YPfalse;
  }
  T20 = T21;
  if (T20 != YPfalse) {
    T19 = CALL2(CHKREF(YastYobjectify_foreign_reference),name_,r_);
    T1 = T19;
  } else {
    T18 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
    T17 = (P)YPpair(CHKREF(YastYbinding_module_name),Ynil);
    T16 = (P)YPpair(CHKREF(YastYbinding_name),T17);
    T15 = (P)YPpair(CHKREF(YastYbinding_kind),T16);
    T14 = (P)YPpair(CHKREF(YastYbinding_freeQ),T15);
    T13 = CALL1(CHKREF(YastYfind_environment_module),r_);
    T12 = CALL1(CHKREF(YastYmodule_name),T13);
    T11 = (P)YPpair(T12,Ynil);
    T10 = (P)YPpair(name_,T11);
    T9 = (P)YPpair(CHKREF(lit_20),T10);
    T8 = (P)YPpair(YPtrue,T9);
    T7 = CALL3(CHKREF(YPisa),T18,T14,T8);
    bF1350 = T7;
    CALL2(CHKREF(YastYinsert_globalX),bF1350,grF1349);
    T6 = (P)YPpair(CHKREF(YastYLglobal_referenceG),Ynil);
    T5 = (P)YPpair(CHKREF(YastYreference_binding),Ynil);
    T4 = (P)YPpair(bF1350,Ynil);
    T3 = CALL3(CHKREF(YPisa),T6,T5,T4);
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(YastYforeign_nameQ) {
  ARG(name_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),name_);
  T2 = CALL2(CHKREF(YruntimeYpos),T3,YPchr((P)58));
  T1 = CALL1(CHKREF(YruntimeYnulQ),T2);
  T0 = CALL1(CHKREF(Ynot),T1);
  RET(T0);
}

FUNCODEDEF(fun_279) {
  ARG(r_, 0);
  ARG(name_, 1);
  P tmpF1360;
  P bindingF1359;
  P modF1358;
  P loaderF1357;
  P grF1356;
  P varnameF1355;
  P modnameF1354;
  P breakF1353;
  P namestrF1352;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T31 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),name_);
  namestrF1352 = T31;
  T30 = CALL2(CHKREF(YruntimeYpos),namestrF1352,YPchr((P)58));
  breakF1353 = T30;
  T29 = CALL3(CHKREF(YruntimeYsub),namestrF1352,YPint((P)0),breakF1353);
  modnameF1354 = T29;
  T28 = CALL2(CHKREF(YruntimeYA),YPint((P)1),breakF1353);
  T27 = CALL1(CHKREF(YruntimeYlen),namestrF1352);
  T26 = CALL3(CHKREF(YruntimeYsub),namestrF1352,T28,T27);
  varnameF1355 = T26;
  T11 = CALL1(CHKREF(YruntimeYlen),modnameF1354);
  T10 = CALL2(CHKREF(YruntimeYG),T11,YPint((P)0));
  tmpF1360 = T10;
  if (tmpF1360 != YPfalse) {
    T9 = CALL1(CHKREF(YruntimeYlen),varnameF1355);
    T8 = CALL2(CHKREF(YruntimeYG),T9,YPint((P)0));
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
  T6 = T7;
  T5 = CALL1(CHKREF(Ynot),T6);
  if (T5 != YPfalse) {
    T4 = CALL2(CHKREF(Yerror),CHKREF(lit_277),name_);
  } else {
  }
  T25 = CALL1(CHKREF(YastYfind_static_global_environment),r_);
  grF1356 = T25;
  T24 = CALL1(CHKREF(YastYenvironment_module_loader),grF1356);
  loaderF1357 = T24;
  T23 = CALL2(CHKREF(YruntimeYas),CHKREF(YLsymG),modnameF1354);
  T22 = CALL2(CHKREF(YastYprobe_module),loaderF1357,T23);
  modF1358 = T22;
  T21 = CALL2(CHKREF(YruntimeYas),CHKREF(YLsymG),varnameF1355);
  T20 = CALL1(CHKREF(YastYmodule_target_environment),modF1358);
  T19 = CALL2(CHKREF(YastYfind_binding),T21,T20);
  bindingF1359 = T19;
  T17 = CALL1(CHKREF(Ynot),bindingF1359);
  if (T17 != YPfalse) {
    T16 = CALL3(CHKREF(Yerror),CHKREF(lit_276),varnameF1355,modnameF1354);
  } else {
  }
  T18 = CALL3(CHKREF(YastYobjectify_binding),name_,bindingF1359,r_);
  T15 = T18;
  T14 = T15;
  T13 = T14;
  T12 = T13;
  T3 = T12;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_280) {
  ARG(r_, 0);
  ARG(name_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YastYfind_binding),name_,r_);
  T0 = CALL3(CHKREF(YastYobjectify_binding),name_,T1,r_);
  QRET(T0);
}

FUNCODEDEF(fun_281) {
  ARG(r_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(YastYobjectify),CHKREF(lit_280),r_,YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_282) {
  ARG(x_, 0);
  ARG(p_, 1);
  P a1,a2;
loop:
  RET(x_);
}

FUNCODEDEF(fun_283) {
  ARG(x_, 0);
  ARG(p_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(Yapply),CHKREF(Ylst),x_);
  RET(T0);
}

FUNCODEDEF(fun_284) {
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

FUNCODEDEF(fun_286) {
  ARG(e_, 0);
  P a1;
loop:
  RET(CHKREF(YastYDfunctions_empty));
}

FUNCODEDEF(fun_287) {
  ARG(b_, 0);
  ARG(f_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  CALL2(CHKREF(YastYfunction_binding_setter),b_,f_);
  T1 = CALL1(CHKREF(YastYbinding_name),b_);
  T0 = CALL2(CHKREF(YastYobjectify_quotation),T1,FREEREF(0));
  CALL2(CHKREF(YastYfunction_debug_name_setter),T0,f_);
  T2 = CALL2(CHKREF(YastYbinding_value_setter),f_,b_);
  QRET(T2);
}

FUNCODEDEF(fun_288) {
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

FUNCODEDEF(fun_289) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(body_, 2);
  ARG(bodies_, 3);
  ARG(sigs_, 4);
  ARG(names_, 5);
  P functionsF1364;
  P function_formsF1363;
  P new_rF1362;
  P bindingsF1361;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6;
loop:
  T21 = FUNFAB(fun_288,1,r_);
  T20 = CALL2(CHKREF(YmacrosYmap),T21,names_);
  bindingsF1361 = T20;
  T19 = CALL2(CHKREF(YastYr_extendT),r_,bindingsF1361);
  new_rF1362 = T19;
  T18 = CALL3(CHKREF(YruntimeYmap2),CHKREF(YsyntaxYsexpr_make_anonymous_method),sigs_,bodies_);
  function_formsF1363 = T18;
  T17 = CALL3(CHKREF(YruntimeYrcurry),CHKREF(YastYobjectify),new_rF1362,YPfalse);
  T16 = CALL2(CHKREF(YmacrosYmap),T17,function_formsF1363);
  functionsF1364 = T16;
  T4 = FUNFAB(fun_287,1,r_);
  CALL3(CHKREF(YruntimeYdo2),T4,functionsF1364,bindingsF1361);
  T15 = (P)YPpair(CHKREF(YastYLlocalsG),Ynil);
  T14 = (P)YPpair(CHKREF(YastYlocals_body),Ynil);
  T13 = (P)YPpair(CHKREF(YastYlocals_functions),T14);
  T12 = (P)YPpair(CHKREF(YastYlocals_bindings),T13);
  T11 = CALL2(CHKREF(YmacrosYpair),CHKREF(YastYLfunctionsG),functionsF1364);
  T10 = CALL2(CHKREF(Yapply),CHKREF(YruntimeYfabs),T11);
  T9 = CALL3(CHKREF(YastYobjectify_sequential),body_,new_rF1362,YPtrue);
  T8 = (P)YPpair(T9,Ynil);
  T7 = (P)YPpair(T10,T8);
  T6 = (P)YPpair(bindingsF1361,T7);
  T5 = CALL3(CHKREF(YPisa),T15,T12,T6);
  T3 = T5;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_290) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(body_, 2);
  ARG(name_, 3);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T6 = (P)YPpair(CHKREF(YastYLbind_exitG),Ynil);
  T5 = (P)YPpair(CHKREF(YastYbind_exit_main_fun),Ynil);
  T4 = CALL1(CHKREF(Ylst),name_);
  T3 = CALL2(CHKREF(YsyntaxYsexpr_make_anonymous_method),T4,body_);
  T2 = CALL3(CHKREF(YastYobjectify),T3,r_,YPfalse);
  T1 = (P)YPpair(T2,Ynil);
  T0 = CALL3(CHKREF(YPisa),T6,T5,T1);
  RET(T0);
}

FUNCODEDEF(fun_291) {
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
  T7 = CALL1(CHKREF(Ylst),protected_form_);
  T6 = CALL2(CHKREF(YsyntaxYsexpr_make_anonymous_method),Ynil,T7);
  T5 = CALL3(CHKREF(YastYobjectify),T6,r_,YPfalse);
  T4 = CALL2(CHKREF(YsyntaxYsexpr_make_anonymous_method),Ynil,cleanup_forms_);
  T3 = CALL3(CHKREF(YastYobjectify),T4,r_,YPfalse);
  T2 = (P)YPpair(T3,Ynil);
  T1 = (P)YPpair(T5,T2);
  T0 = CALL3(CHKREF(YPisa),T10,T8,T1);
  RET(T0);
}

FUNCODEDEF(fun_292) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(body_, 2);
  ARG(handler_, 3);
  ARG(test_, 4);
  ARG(info_, 5);
  ARG(type_, 6);
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2,a3,a4,a5,a6,a7;
loop:
  T16 = (P)YPpair(CHKREF(YastYLmonitorG),Ynil);
  T15 = (P)YPpair(CHKREF(YastYmonitor_main_thunk),Ynil);
  T14 = (P)YPpair(CHKREF(YastYmonitor_handler),T15);
  T13 = (P)YPpair(CHKREF(YastYmonitor_test),T14);
  T12 = (P)YPpair(CHKREF(YastYmonitor_info),T13);
  T11 = (P)YPpair(CHKREF(YastYmonitor_type),T12);
  T10 = CALL3(CHKREF(YastYobjectify),type_,r_,YPfalse);
  T9 = CALL3(CHKREF(YastYobjectify),info_,r_,YPfalse);
  T8 = CALL3(CHKREF(YastYobjectify),test_,r_,YPfalse);
  T7 = CALL3(CHKREF(YastYobjectify),handler_,r_,YPfalse);
  T6 = CALL3(CHKREF(YastYobjectify),body_,r_,YPfalse);
  T5 = (P)YPpair(T6,Ynil);
  T4 = (P)YPpair(T7,T5);
  T3 = (P)YPpair(T8,T4);
  T2 = (P)YPpair(T9,T3);
  T1 = (P)YPpair(T10,T2);
  T0 = CALL3(CHKREF(YPisa),T16,T11,T1);
  RET(T0);
}

FUNCODEDEF(fun_293) {
  P T0;
loop:
  T0 = CALL2(CHKREF(Yerror),CHKREF(lit_296),FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(fun_294) {
  ARG(r_, 0);
  ARG(c_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_295) {
loop:
  QRET(YPtrue);
}

FUNCODEDEF(fun_296) {
  ARG(exit_, 0);
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T10 = (P)YPpair(CHKREF(YLsimple_handler_infoG),Ynil);
  T9 = (P)YPpair(CHKREF(Yhandler_info_arguments),Ynil);
  T8 = (P)YPpair(CHKREF(Yhandler_info_message),T9);
  T7 = CALL1(CHKREF(Ylst),FREEREF(0));
  T6 = (P)YPpair(T7,Ynil);
  T5 = (P)YPpair(CHKREF(lit_297),T6);
  T4 = CALL3(CHKREF(YPisa),T10,T8,T5);
  T3 = fun_295;
  T2 = FUNFAB(fun_294,1,exit_);
  T1 = FUNFAB(fun_293,1,FREEREF(0));
  T0 = CALLN(YruntimeYPwith_monitor,5,CHKREF(YruntimeYLrestartG),T4,T3,T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_297) {
  ARG(name_, 0);
  P bindingF1365;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = CALL2(CHKREF(YastYfind_binding),name_,FREEREF(0));
  bindingF1365 = T6;
  T5 = CALL2(CHKREF(YmacrosYEE),bindingF1365,YPfalse);
  if (T5 != YPfalse) {
    T4 = FUNFAB(fun_296,1,name_);
    T3 = with_exit(T4);
    T1 = T3;
  } else {
    T2 = CALL3(CHKREF(YastYexport_bindingX),FREEREF(1),name_,bindingF1365);
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_298) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(names_, 2);
  P moduleF1367;
  P envF1366;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T8 = CALL1(CHKREF(YastYfind_static_global_environment),r_);
  envF1366 = T8;
  T7 = CALL1(CHKREF(YastYfind_environment_module),r_);
  moduleF1367 = T7;
  T4 = CALL1(CHKREF(YastYmodule_target_environment),moduleF1367);
  T3 = CALL2(CHKREF(YmacrosYEE),envF1366,T4);
  T2 = CALL1(CHKREF(Ynot),T3);
  if (T2 != YPfalse) {
    T1 = CALL1(CHKREF(Yerror),CHKREF(lit_298));
  } else {
  }
  T6 = FUNFAB(fun_297,2,envF1366,moduleF1367);
  T5 = CALL2(CHKREF(YruntimeYdo),T6,names_);
  T0 = T5;
  T12 = (P)YPpair(CHKREF(YastYLconstantG),Ynil);
  T11 = (P)YPpair(CHKREF(YastYconstant_value),Ynil);
  T10 = (P)YPpair(YPfalse,Ynil);
  T9 = CALL3(CHKREF(YPisa),T12,T11,T10);
  RET(T9);
}

FUNCODEDEF(YastYimport_globalX) {
  ARG(env_, 0);
  ARG(b_, 1);
  P tmpF1369;
  P existingF1368;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = CALL1(CHKREF(YastYbinding_name),b_);
  T9 = CALL2(CHKREF(YastYfind_binding),T10,env_);
  existingF1368 = T9;
  T8 = CALL2(CHKREF(YmacrosYEE),existingF1368,YPfalse);
  tmpF1369 = T8;
  if (tmpF1369 != YPfalse) {
    T6 = tmpF1369;
  } else {
    T7 = CALL2(CHKREF(YmacrosYEE),existingF1368,b_);
    T6 = T7;
  }
  T5 = T6;
  T4 = CALL1(CHKREF(Ynot),T5);
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YastYbinding_name),b_);
    T2 = CALL1(CHKREF(YastYbinding_module_name),b_);
    T1 = CALLN(CHKREF(YruntimeYformat),4,CHKREF(YruntimeYout),CHKREF(lit_301),T3,T2);
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  CALL2(CHKREF(YastYinsert_globalX),b_,env_);
  QRET(YPfalse);
}

FUNCODEDEF(fun_300) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(name_, 2);
  P used_moduleF1372;
  P loaderF1371;
  P envF1370;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T8 = CALL1(CHKREF(YastYfind_static_global_environment),r_);
  envF1370 = T8;
  T7 = CALL1(CHKREF(YastYenvironment_module_loader),envF1370);
  loaderF1371 = T7;
  T6 = CALL2(CHKREF(YastYprobe_module),loaderF1371,name_);
  used_moduleF1372 = T6;
  T2 = CALL1(CHKREF(YastYenvironment_uses_modules),envF1370);
  CALL2(CHKREF(YruntimeYpush_lastX),T2,used_moduleF1372);
  T5 = CALL2(CHKREF(YruntimeYrcurry),CHKREF(YastYimport_globalX),envF1370);
  T4 = CALL1(CHKREF(YastYmodule_exports),used_moduleF1372);
  T3 = CALL2(CHKREF(YruntimeYdo),T5,T4);
  T1 = T3;
  T0 = T1;
  T12 = (P)YPpair(CHKREF(YastYLconstantG),Ynil);
  T11 = (P)YPpair(CHKREF(YastYconstant_value),Ynil);
  T10 = (P)YPpair(YPfalse,Ynil);
  T9 = CALL3(CHKREF(YPisa),T12,T11,T10);
  RET(T9);
}

FUNCODEDEF(fun_301) {
  ARG(fail_, 0);
  ARG(var_, 1);
  ARG(pat_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALL2(CHKREF(Yerror),CHKREF(lit_306),pat_);
  QRET(T0);
}

FUNCODEDEF(fun_302) {
  ARG(fail_, 0);
  ARG(var_, 1);
  ARG(pat_, 2);
  P T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T3 = CALL1(CHKREF(Ylst),CHKREF(lit_307));
  T2 = CALL1(CHKREF(Ylst),var_);
  T1 = CALL1(CHKREF(Ylst),fail_);
  T0 = CALLN(CHKREF(YmacrosYcat),4,T3,T2,T1,Ynil);
  RET(T0);
}

FUNCODEDEF(fun_303) {
  ARG(fail_, 0);
  ARG(var_, 1);
  ARG(pat_, 2);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T7 = CALL1(CHKREF(YsyntaxYsexpr_unquoteQ),pat_);
  if (T7 != YPfalse) {
    T6 = CALL2(CHKREF(Yerror),CHKREF(lit_309),pat_);
    T0 = T6;
  } else {
    T5 = CALL1(CHKREF(YsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T5 != YPfalse) {
      T4 = CALL2(CHKREF(Yerror),CHKREF(lit_308),pat_);
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

FUNCODEDEF(fun_304) {
  ARG(fail_, 0);
  ARG(var_, 1);
  ARG(pat_, 2);
  P T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T3 = CALL1(CHKREF(Ylst),CHKREF(lit_307));
  T2 = CALL1(CHKREF(Ylst),var_);
  T1 = CALL1(CHKREF(Ylst),fail_);
  T0 = CALLN(CHKREF(YmacrosYcat),4,T3,T2,T1,Ynil);
  QRET(T0);
}

FUNCODEDEF(fun_305) {
  ARG(fail_, 0);
  ARG(var_, 1);
  ARG(pat_, 2);
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T12 = CALL1(CHKREF(Ylst),CHKREF(lit_311));
  T11 = CALL1(CHKREF(Ylst),var_);
  T10 = CALL1(CHKREF(Yhead),pat_);
  T9 = CALL3(CHKREF(YastYexpand_bind_element),T10,var_,fail_);
  T8 = CALL1(CHKREF(Ylst),T9);
  T7 = CALL3(CHKREF(YmacrosYcat),T11,T8,Ynil);
  T6 = CALL1(CHKREF(Ylst),T7);
  T5 = CALL2(CHKREF(YmacrosYcat),T6,Ynil);
  T4 = CALL1(CHKREF(Ylst),T5);
  T3 = CALL1(CHKREF(Ytail),pat_);
  T2 = CALL3(CHKREF(YastYexpand_bind_listT),T3,var_,fail_);
  T1 = CALL1(CHKREF(Ylst),T2);
  T0 = CALLN(CHKREF(YmacrosYcat),4,T12,T4,T1,Ynil);
  QRET(T0);
}

FUNCODEDEF(fun_306) {
  ARG(fail_, 0);
  ARG(var_, 1);
  ARG(pat_, 2);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T7 = CALL1(CHKREF(Ylst),CHKREF(lit_313));
  T6 = CALL1(CHKREF(Ylst),var_);
  T5 = CALL1(CHKREF(Ylst),CHKREF(lit_213));
  T4 = CALL1(CHKREF(Ylst),pat_);
  T3 = CALL3(CHKREF(YmacrosYcat),T5,T4,Ynil);
  T2 = CALL1(CHKREF(Ylst),T3);
  T1 = CALL1(CHKREF(Ylst),fail_);
  T0 = CALLN(CHKREF(YmacrosYcat),5,T7,T6,T2,T1,Ynil);
  QRET(T0);
}

FUNCODEDEF(fun_307) {
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
    T52 = CALL1(CHKREF(Ylst),CHKREF(lit_107));
    T51 = CALL1(CHKREF(Ylst),CHKREF(lit_94));
    T50 = CALL1(CHKREF(YruntimeY2nd),pat_);
    T49 = CALL1(CHKREF(Ylst),T50);
    T48 = CALL1(CHKREF(Ylst),CHKREF(lit_315));
    T47 = CALL1(CHKREF(Ylst),var_);
    T46 = CALL1(CHKREF(Ylst),fail_);
    T45 = CALLN(CHKREF(YmacrosYcat),4,T48,T47,T46,Ynil);
    T44 = CALL1(CHKREF(Ylst),T45);
    T43 = CALLN(CHKREF(YmacrosYcat),4,T51,T49,T44,Ynil);
    T42 = CALL1(CHKREF(Ylst),T43);
    T41 = CALL1(CHKREF(Ylst),CHKREF(lit_93));
    T40 = CALL1(CHKREF(Ylst),var_);
    T39 = CALL3(CHKREF(YmacrosYcat),T41,T40,Ynil);
    T38 = CALL1(CHKREF(Ylst),T39);
    T37 = CALLN(CHKREF(YmacrosYcat),4,T52,T42,T38,Ynil);
    T0 = T37;
  } else {
    T36 = CALL1(CHKREF(YsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T36 != YPfalse) {
      T35 = CALL1(CHKREF(Ylst),CHKREF(lit_107));
      T34 = CALL1(CHKREF(Ylst),CHKREF(lit_94));
      T33 = CALL1(CHKREF(YruntimeY2nd),pat_);
      T32 = CALL1(CHKREF(Ylst),T33);
      T31 = CALL1(CHKREF(Ylst),var_);
      T30 = CALLN(CHKREF(YmacrosYcat),4,T34,T32,T31,Ynil);
      T29 = CALL1(CHKREF(Ylst),T30);
      T28 = CALL1(CHKREF(Ylst),CHKREF(lit_213));
      T27 = CALL1(CHKREF(Ylst),Ynil);
      T26 = CALL3(CHKREF(YmacrosYcat),T28,T27,Ynil);
      T25 = CALL1(CHKREF(Ylst),T26);
      T24 = CALLN(CHKREF(YmacrosYcat),4,T35,T29,T25,Ynil);
      T1 = T24;
    } else {
      if (YPtrue != YPfalse) {
        T23 = CALL1(CHKREF(Ylst),CHKREF(lit_107));
        T22 = CALL1(CHKREF(Ylst),CHKREF(lit_311));
        T21 = CALL1(CHKREF(Ylst),var_);
        T20 = CALL1(CHKREF(Ylst),CHKREF(lit_314));
        T19 = CALL1(CHKREF(Ylst),var_);
        T18 = CALL1(CHKREF(Ylst),fail_);
        T17 = CALLN(CHKREF(YmacrosYcat),4,T20,T19,T18,Ynil);
        T16 = CALL1(CHKREF(Ylst),T17);
        T15 = CALL3(CHKREF(YmacrosYcat),T21,T16,Ynil);
        T14 = CALL1(CHKREF(Ylst),T15);
        T13 = CALL2(CHKREF(YmacrosYcat),T14,Ynil);
        T12 = CALL1(CHKREF(Ylst),T13);
        T11 = CALL3(CHKREF(YastYexpand_bind_list),pat_,var_,fail_);
        T10 = CALL1(CHKREF(Ylst),T11);
        T9 = CALLN(CHKREF(YmacrosYcat),4,T22,T12,T10,Ynil);
        T8 = CALL1(CHKREF(Ylst),T9);
        T7 = CALL1(CHKREF(Ylst),CHKREF(lit_93));
        T6 = CALL1(CHKREF(Ylst),var_);
        T5 = CALL3(CHKREF(YmacrosYcat),T7,T6,Ynil);
        T4 = CALL1(CHKREF(Ylst),T5);
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

FUNCODEDEF(fun_308) {
  ARG(fail_, 0);
  ARG(var_, 1);
  ARG(pat_, 2);
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T13 = CALL1(CHKREF(Ylst),CHKREF(lit_250));
  T12 = CALL1(CHKREF(Ylst),CHKREF(lit_318));
  T11 = CALL1(CHKREF(Ylst),var_);
  T10 = CALL1(CHKREF(Ylst),CHKREF(lit_102));
  T9 = CALLN(CHKREF(YmacrosYcat),4,T12,T11,T10,Ynil);
  T8 = CALL1(CHKREF(Ylst),T9);
  T7 = CALL3(CHKREF(YastYexpand_bind_list),pat_,var_,fail_);
  T6 = CALL1(CHKREF(Ylst),T7);
  T5 = CALL1(CHKREF(Ylst),fail_);
  T4 = CALL1(CHKREF(Ylst),CHKREF(lit_317));
  T3 = CALL1(CHKREF(Ylst),var_);
  T2 = CALLN(CHKREF(YmacrosYcat),4,T5,T4,T3,Ynil);
  T1 = CALL1(CHKREF(Ylst),T2);
  T0 = CALLN(CHKREF(YmacrosYcat),5,T13,T8,T6,T1,Ynil);
  QRET(T0);
}

FUNCODEDEF(fun_309) {
  ARG(x_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(Ylst),x_);
  T1 = CALL1(CHKREF(Ylst),YPfalse);
  T0 = CALL3(CHKREF(YmacrosYcat),T2,T1,Ynil);
  QRET(T0);
}

FUNCODEDEF(fun_310) {
  ARG(x_, 0);
  P epatF1380;
  P failF1379;
  P varF1378;
  P elseF1377;
  P thenF1376;
  P valueF1375;
  P varsF1374;
  P patF1373;
  P T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T57 = CALL1(CHKREF(YsyntaxYsexpr_syntax_if_pattern),x_);
  patF1373 = T57;
  T56 = CALL1(CHKREF(YsyntaxYsexpr_bind_pattern_variables),patF1373);
  varsF1374 = T56;
  T55 = CALL1(CHKREF(YsyntaxYsexpr_syntax_if_value),x_);
  valueF1375 = T55;
  T54 = CALL1(CHKREF(YsyntaxYsexpr_syntax_if_then),x_);
  thenF1376 = T54;
  T53 = CALL1(CHKREF(YsyntaxYsexpr_syntax_if_else),x_);
  elseF1377 = T53;
  T52 = CALL0(CHKREF(YmacrosYgensym));
  varF1378 = T52;
  T51 = CALL0(CHKREF(YmacrosYgensym));
  failF1379 = T51;
  T50 = CALL3(CHKREF(YastYexpand_pattern),patF1373,varF1378,failF1379);
  epatF1380 = T50;
  T49 = CALL1(CHKREF(Ylst),CHKREF(lit_322));
  T48 = CALL1(CHKREF(Ylst),CHKREF(lit_87));
  T47 = CALL1(CHKREF(Ylst),CHKREF(lit_321));
  T46 = CALL1(CHKREF(Ylst),failF1379);
  T45 = CALL1(CHKREF(Ylst),CHKREF(lit_116));
  T44 = CALL1(CHKREF(Ylst),CHKREF(lit_320));
  T43 = CALL3(CHKREF(YmacrosYcat),T45,T44,Ynil);
  T42 = CALL1(CHKREF(Ylst),T43);
  T41 = CALL1(CHKREF(Ylst),CHKREF(lit_115));
  T40 = CALL1(CHKREF(Ylst),CHKREF(lit_252));
  T39 = CALL3(CHKREF(YmacrosYcat),T41,T40,Ynil);
  T38 = CALL1(CHKREF(Ylst),T39);
  T37 = CALL3(CHKREF(YmacrosYcat),T42,T38,Ynil);
  T36 = CALL1(CHKREF(Ylst),T37);
  T35 = CALL1(CHKREF(Ylst),CHKREF(lit_87));
  T34 = CALL1(CHKREF(Ylst),elseF1377);
  T33 = CALL3(CHKREF(YmacrosYcat),T35,T34,Ynil);
  T32 = CALL1(CHKREF(Ylst),T33);
  T31 = CALLN(CHKREF(YmacrosYcat),4,T46,T36,T32,Ynil);
  T30 = CALL1(CHKREF(Ylst),T31);
  T29 = CALL2(CHKREF(YmacrosYcat),T30,Ynil);
  T28 = CALL1(CHKREF(Ylst),T29);
  T27 = CALL1(CHKREF(Ylst),CHKREF(lit_311));
  T26 = CALL1(CHKREF(Ylst),varF1378);
  T25 = CALL1(CHKREF(Ylst),valueF1375);
  T24 = CALL3(CHKREF(YmacrosYcat),T26,T25,Ynil);
  T23 = CALL1(CHKREF(Ylst),T24);
  T22 = CALL2(CHKREF(YmacrosYcat),T23,Ynil);
  T21 = CALL1(CHKREF(Ylst),T22);
  T20 = CALL1(CHKREF(Ylst),CHKREF(lit_311));
  T19 = fun_309;
  T18 = CALL2(CHKREF(YmacrosYmap),T19,varsF1374);
  T17 = CALL1(CHKREF(Ylst),T18);
  T16 = CALL1(CHKREF(Ylst),epatF1380);
  T15 = CALL1(CHKREF(Ylst),thenF1376);
  T14 = CALLN(CHKREF(YmacrosYcat),5,T20,T17,T16,T15,Ynil);
  T13 = CALL1(CHKREF(Ylst),T14);
  T12 = CALLN(CHKREF(YmacrosYcat),4,T27,T21,T13,Ynil);
  T11 = CALL1(CHKREF(Ylst),T12);
  T10 = CALLN(CHKREF(YmacrosYcat),4,T47,T28,T11,Ynil);
  T9 = CALL1(CHKREF(Ylst),T10);
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

FUNCODEDEF(fun_311) {
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

FUNCODEDEF(fun_312) {
  ARG(r_, 0);
  ARG(binding_, 1);
  P rF1381;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YastYfind_static_global_environment),r_);
  check_type(T4,CHKREF(YastYLstatic_global_environmentG));
  rF1381 = T4;
  T3 = CALL1(CHKREF(YastYenvironment_bindings),rF1381);
  T2 = CALL1(CHKREF(YastYbinding_name),binding_);
  T1 = CALL3(CHKREF(YruntimeYelt_setter),binding_,T3,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_313) {
  ARG(b_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YastYinsert_globalX),b_,FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(fun_314) {
  ARG(r_, 0);
  ARG(bindings_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = FUNFAB(fun_313,1,r_);
  T0 = CALL2(CHKREF(YruntimeYdo),T1,bindings_);
  QRET(T0);
}

FUNCODEDEF(fun_315) {
  ARG(r_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YastYenvironment_next),r_);
  T0 = CALL1(CHKREF(YastYfind_static_global_environment),T1);
  RET(T0);
}

FUNCODEDEF(fun_316) {
  ARG(r_, 0);
  P a1;
loop:
  RET(r_);
}

FUNCODEDEF(fun_317) {
  ARG(r_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YastYfind_environment_module),r_);
  T0 = CALL1(CHKREF(YastYmodule_syntax_environment),T1);
  RET(T0);
}

FUNCODEDEF(fun_318) {
  ARG(r_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YastYfind_static_global_environment),r_);
  T0 = CALL1(CHKREF(YastYenvironment_module),T1);
  QRET(T0);
}

FUNCODEDEF(fun_loop_319) {
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

FUNCODEDEF(fun_320) {
  ARG(r_, 0);
  ARG(name_, 1);
  P loopF1382;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_loop_319,3);
  loopF1382 = T3;
  FUNINIT(loopF1382, 3,loopF1382,name_,r_);
  T2 = CALL1(CHKREF(YastYenvironment_bindings),r_);
  T1 = KCALL1(loopF1382,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_321) {
  ARG(r_, 0);
  ARG(name_, 1);
  P a1,a2;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_322) {
  ARG(r_, 0);
  ARG(name_, 1);
  P bindingF1383;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T6 = CALL1(CHKREF(YastYenvironment_bindings),r_);
  T5 = CALL2(CHKREF(YruntimeYelt),T6,name_);
  bindingF1383 = T5;
  T4 = CALL2(CHKREF(YmacrosYEE),bindingF1383,CHKREF(Ynul));
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YastYenvironment_next),r_);
    T2 = CALL2(CHKREF(YastYfind_binding),name_,T3);
    T1 = T2;
  } else {
    T1 = bindingF1383;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_323) {
  ARG(env_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YastYenvironment_bindings),env_);
  RET(T0);
}

FUNCODEDEF(fun_324) {
  ARG(value_, 0);
  ARG(name_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YruntimeYadd),CHKREF(YastYTmagic_bindingsT),value_);
  T0 = YastYTmagic_bindingsT = T1;
  QRET(T0);
}

FUNCODEDEF(fun_325) {
loop:
  QRET(CHKREF(YastYTmagic_bindingsT));
}

FUNCODEDEF(fun_x_1255_326) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_327) {
  ARG(return_, 0);
  P x_1254F1396;
  P x_1254F1395;
  P x_1254F1394;
  P x_1254F1393;
  P x_1254F1392;
  P x_1254F1391;
  P sexpr_nameF1390;
  P special_nameF1389;
  P bodyF1388;
  P paramsF1387;
  P nameF1386;
  P x_1254F1385;
  P x_1255F1384;
  P T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66;
  P T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50;
  P T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
loop:
  T81 = FUNSHELL(0,fun_x_1255_326,1);
  x_1255F1384 = T81;
  FUNINIT(x_1255F1384, 1,return_);
  x_1254F1385 = FREEREF(0);
  nameF1386 = YPfalse;
  nameF1386 = BOXFAB(nameF1386);
  paramsF1387 = YPfalse;
  paramsF1387 = BOXFAB(paramsF1387);
  bodyF1388 = YPfalse;
  bodyF1388 = BOXFAB(bodyF1388);
  T21 = CALL2(CHKREF(YisaQ),x_1254F1385,CHKREF(YLlstG));
  if (T21 != YPfalse) {
    T20 = CALL3(CHKREF(YmacrosYmatch_atom),x_1254F1385,CHKREF(lit_340),x_1255F1384);
    x_1254F1391 = T20;
    T18 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1254F1391,x_1255F1384);
    BOXVAL(nameF1386) = T18;
    T19 = CALL1(CHKREF(Ytail),x_1254F1391);
    x_1254F1392 = T19;
    T16 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1254F1392,x_1255F1384);
    x_1254F1393 = T16;
    BOXVAL(paramsF1387) = x_1254F1393;
    x_1254F1394 = Ynil;
    T15 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1254F1394,x_1255F1384);
    T14 = T15;
    T17 = CALL1(CHKREF(Ytail),x_1254F1392);
    x_1254F1395 = T17;
    BOXVAL(bodyF1388) = x_1254F1395;
    x_1254F1396 = Ynil;
    T13 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1254F1396,x_1255F1384);
    T12 = T13;
    T11 = T12;
    T10 = T11;
    T9 = T10;
  } else {
    T8 = CALL2(x_1255F1384,CHKREF(lit_112),x_1254F1385);
  }
  T80 = BOXVAL(nameF1386);
  T79 = CALL2(CHKREF(YmacrosYmake_sym),CHKREF(lit_339),T80);
  special_nameF1389 = T79;
  T78 = BOXVAL(nameF1386);
  T77 = CALL3(CHKREF(YmacrosYmake_sym),CHKREF(lit_338),T78,CHKREF(lit_337));
  sexpr_nameF1390 = T77;
  T76 = CALL1(CHKREF(Ylst),CHKREF(lit_107));
  T75 = CALL1(CHKREF(Ylst),CHKREF(lit_106));
  T74 = CALL1(CHKREF(Ylst),special_nameF1389);
  T73 = CALL1(CHKREF(Ylst),CHKREF(lit_97));
  T72 = CALL1(CHKREF(Ylst),CHKREF(lit_336));
  T71 = CALL1(CHKREF(Ylst),CHKREF(lit_94));
  T70 = CALL1(CHKREF(Ylst),CHKREF(lit_18));
  T69 = CALL1(CHKREF(Ylst),CHKREF(lit_213));
  T68 = CALL1(CHKREF(Ylst),CHKREF(lit_190));
  T67 = CALL3(CHKREF(YmacrosYcat),T69,T68,Ynil);
  T66 = CALL1(CHKREF(Ylst),T67);
  T65 = CALLN(CHKREF(YmacrosYcat),4,T71,T70,T66,Ynil);
  T64 = CALL1(CHKREF(Ylst),T65);
  T63 = CALL1(CHKREF(Ylst),CHKREF(lit_94));
  T62 = CALL1(CHKREF(Ylst),CHKREF(lit_12));
  T61 = CALL1(CHKREF(Ylst),sexpr_nameF1390);
  T60 = CALLN(CHKREF(YmacrosYcat),4,T63,T62,T61,Ynil);
  T59 = CALL1(CHKREF(Ylst),T60);
  T58 = CALL1(CHKREF(Ylst),CHKREF(lit_94));
  T57 = CALL1(CHKREF(Ylst),CHKREF(lit_21));
  T56 = CALL1(CHKREF(Ylst),CHKREF(lit_335));
  T55 = CALLN(CHKREF(YmacrosYcat),4,T58,T57,T56,Ynil);
  T54 = CALL1(CHKREF(Ylst),T55);
  T53 = CALL1(CHKREF(Ylst),CHKREF(lit_94));
  T52 = CALL1(CHKREF(Ylst),CHKREF(lit_334));
  T51 = CALL1(CHKREF(Ylst),CHKREF(lit_333));
  T50 = BOXVAL(paramsF1387);
  T49 = CALL2(CHKREF(YmacrosYcat),T50,Ynil);
  T48 = CALL1(CHKREF(Ylst),T49);
  T47 = BOXVAL(bodyF1388);
  T46 = CALLN(CHKREF(YmacrosYcat),4,T51,T48,T47,Ynil);
  T45 = CALL1(CHKREF(Ylst),T46);
  T44 = CALLN(CHKREF(YmacrosYcat),4,T53,T52,T45,Ynil);
  T43 = CALL1(CHKREF(Ylst),T44);
  T42 = CALL1(CHKREF(Ylst),CHKREF(lit_94));
  T41 = CALL1(CHKREF(Ylst),CHKREF(lit_23));
  T40 = CALL1(CHKREF(Ylst),YPfalse);
  T39 = CALLN(CHKREF(YmacrosYcat),4,T42,T41,T40,Ynil);
  T38 = CALL1(CHKREF(Ylst),T39);
  T37 = CALLN(CHKREF(YmacrosYcat),8,T73,T72,T64,T59,T54,T43,T38,Ynil);
  T36 = CALL1(CHKREF(Ylst),T37);
  T35 = CALLN(CHKREF(YmacrosYcat),4,T75,T74,T36,Ynil);
  T34 = CALL1(CHKREF(Ylst),T35);
  T33 = CALL1(CHKREF(Ylst),CHKREF(lit_331));
  T32 = CALL1(CHKREF(Ylst),CHKREF(lit_213));
  T31 = BOXVAL(nameF1386);
  T30 = CALL1(CHKREF(Ylst),T31);
  T29 = CALL3(CHKREF(YmacrosYcat),T32,T30,Ynil);
  T28 = CALL1(CHKREF(Ylst),T29);
  T27 = CALL1(CHKREF(Ylst),special_nameF1389);
  T26 = CALLN(CHKREF(YmacrosYcat),4,T33,T28,T27,Ynil);
  T25 = CALL1(CHKREF(Ylst),T26);
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

FUNCODEDEF(fun_328) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_327,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_329) {
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

FUNCODEDEF(fun_330) {
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

FUNCODEDEF(fun_331) {
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

FUNCODEDEF(fun_332) {
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

FUNCODEDEF(fun_333) {
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

FUNCODEDEF(fun_334) {
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

FUNCODEDEF(fun_335) {
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

FUNCODEDEF(fun_336) {
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

FUNCODEDEF(fun_337) {
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

FUNCODEDEF(fun_338) {
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

FUNCODEDEF(fun_339) {
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

FUNCODEDEF(fun_340) {
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

FUNCODEDEF(fun_341) {
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

FUNCODEDEF(fun_342) {
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

FUNCODEDEF(fun_343) {
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

FUNCODEDEF(fun_344) {
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

FUNCODEDEF(fun_345) {
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

FUNCODEDEF(fun_346) {
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

FUNCODEDEF(fun_347) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P tup37F1407;
  P bodyF1406;
  P tup37F1405;
  P handlerF1404;
  P tup37F1403;
  P testF1402;
  P tup37F1401;
  P infoF1400;
  P tup37F1399;
  P typeF1398;
  P tup37F1397;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T22 = CALL1(CHKREF(YsyntaxYsexpr_monitor_expand),x_);
  tup37F1397 = T22;
  T21 = CALL1(CHKREF(Yhead),tup37F1397);
  typeF1398 = T21;
  T20 = CALL1(CHKREF(Ytail),tup37F1397);
  tup37F1399 = T20;
  T19 = CALL1(CHKREF(Yhead),tup37F1399);
  infoF1400 = T19;
  T18 = CALL1(CHKREF(Ytail),tup37F1399);
  tup37F1401 = T18;
  T17 = CALL1(CHKREF(Yhead),tup37F1401);
  testF1402 = T17;
  T16 = CALL1(CHKREF(Ytail),tup37F1401);
  tup37F1403 = T16;
  T15 = CALL1(CHKREF(Yhead),tup37F1403);
  handlerF1404 = T15;
  T14 = CALL1(CHKREF(Ytail),tup37F1403);
  tup37F1405 = T14;
  T13 = CALL1(CHKREF(Yhead),tup37F1405);
  bodyF1406 = T13;
  T12 = CALL1(CHKREF(Ytail),tup37F1405);
  tup37F1407 = T12;
  T11 = CALLN(CHKREF(YastYobjectify_monitor),7,typeF1398,infoF1400,testF1402,handlerF1404,bodyF1406,r_,tailQ_);
  T10 = T11;
  T9 = T10;
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

FUNCODEDEF(fun_348) {
  ARG(args_, 0);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = CALL1(CHKREF(YmacrosYemptyQ),args_);
  if (T6 != YPfalse) {
    T5 = CALL2(CHKREF(Ylst),CHKREF(lit_213),Ynil);
    T0 = T5;
  } else {
    T4 = CALL1(CHKREF(Yhead),args_);
    T3 = CALL1(CHKREF(Ytail),args_);
    T2 = CALL1(CHKREF(YastYpairize),T3);
    T1 = CALL3(CHKREF(Ylst),CHKREF(lit_212),T4,T2);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_349) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P slot_initsF1408;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T10 = CALL1(CHKREF(YsyntaxYsexpr_isa_slot_inits),x_);
  slot_initsF1408 = T10;
  T9 = CALL1(CHKREF(YsyntaxYsexpr_isa_parents),x_);
  T8 = CALL1(CHKREF(YastYpairize),T9);
  T7 = CALL1(CHKREF(YsyntaxYsexpr_isa_init_slots),slot_initsF1408);
  T6 = CALL1(CHKREF(YastYpairize),T7);
  T5 = CALL1(CHKREF(YsyntaxYsexpr_isa_init_values),slot_initsF1408);
  T4 = CALL1(CHKREF(YastYpairize),T5);
  T3 = CALL3(CHKREF(Ylst),T8,T6,T4);
  T2 = CALL2(CHKREF(YsyntaxYsexpr_make_application),CHKREF(lit_358),T3);
  T1 = CALL3(CHKREF(YastYobjectify),T2,r_,tailQ_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_350) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P slot_typeF1412;
  P setter_nameF1411;
  P nameF1410;
  P varF1409;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T20 = CALL1(CHKREF(YsyntaxYsexpr_slot_variable),x_);
  varF1409 = T20;
  T19 = CALL1(CHKREF(YsyntaxYsexpr_variable_name),varF1409);
  nameF1410 = T19;
  T18 = CALL1(CHKREF(YsyntaxYsexpr_make_setter_name),nameF1410);
  setter_nameF1411 = T18;
  T17 = CALL1(CHKREF(YsyntaxYsexpr_variable_type),varF1409);
  slot_typeF1412 = T17;
  T16 = CALL1(CHKREF(YsyntaxYsexpr_slot_object),x_);
  T15 = CALL2(CHKREF(YsyntaxYsexpr_make_getter),nameF1410,T16);
  T14 = CALL1(CHKREF(YsyntaxYsexpr_slot_object),x_);
  T13 = CALL3(CHKREF(YsyntaxYsexpr_make_setter),nameF1410,T14,slot_typeF1412);
  T12 = CALL1(CHKREF(YsyntaxYsexpr_slot_object),x_);
  T11 = CALL1(CHKREF(YsyntaxYsexpr_slot_init),x_);
  T10 = CALL1(CHKREF(Ylst),T11);
  T9 = CALL2(CHKREF(YsyntaxYsexpr_make_anonymous_method),CHKREF(lit_359),T10);
  T8 = CALLN(CHKREF(Ylst),5,T12,nameF1410,setter_nameF1411,slot_typeF1412,T9);
  T7 = CALL2(CHKREF(YsyntaxYsexpr_make_application),CHKREF(lit_360),T8);
  T6 = CALL3(CHKREF(Ylst),T15,T13,T7);
  T5 = CALL1(CHKREF(YsyntaxYsexpr_make_begin),T6);
  T4 = CALL3(CHKREF(YastYobjectify),T5,r_,tailQ_);
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_351) {
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

FUNCODEDEF(fun_352) {
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

FUNCODEDEF(fun_353) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T7 = CALL1(CHKREF(YsyntaxYsexpr_forward_primitiveQ),x_);
  if (T7 != YPfalse) {
    T5 = CALL1(CHKREF(YsyntaxYsexpr_function_definition_variable),x_);
    CALLN(CHKREF(YastYast_define_binding),4,r_,T5,YPfalse,CHKREF(lit_245));
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

FUNCODEDEF(fun_354) {
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

FUNCODEDEF(fun_355) {
  ARG(tailQ_, 0);
  ARG(r_, 1);
  ARG(x_, 2);
  P tmpF1415;
  P resF1414;
  P mF1413;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T11 = CALL1(CHKREF(Yhead),x_);
  T10 = CALL3(CHKREF(YastYobjectify),T11,r_,tailQ_);
  mF1413 = T10;
  T9 = CALL2(CHKREF(YisaQ),mF1413,CHKREF(YastYLmodule_bindingG));
  tmpF1415 = T9;
  if (tmpF1415 != YPfalse) {
    T8 = CALL1(CHKREF(YastYbinding_kind),mF1413);
    T7 = CALL2(CHKREF(YmacrosYEE),T8,CHKREF(lit_190));
    T6 = T7;
  } else {
    T6 = YPfalse;
  }
  T5 = T6;
  if (T5 != YPfalse) {
    T4 = CALL1(CHKREF(YastYbinding_handler),mF1413);
    T3 = CALL3(T4,x_,r_,tailQ_);
    resF1414 = T3;
    T2 = resF1414;
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_356) {
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

FUNCODEDEF(fun_357) {
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

FUNCODEDEF(fun_358) {
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

FUNCODEDEF(fun_359) {
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

FUNCODEDEF(fun_360) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYmodule_loader_modules));
  QRET(T0);
}

FUNCODEDEF(fun_361) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYmodule_loader_modules));
  QRET(T0);
}

FUNCODEDEF(fun_362) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYfab),CHKREF(YruntimeYLtabG),YPint((P)1000));
  QRET(T0);
}

FUNCODEDEF(fun_363) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYmodule_loader_stack));
  QRET(T0);
}

FUNCODEDEF(fun_364) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYmodule_loader_stack));
  QRET(T0);
}

FUNCODEDEF(fun_365) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_366) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYmodule_name));
  QRET(T0);
}

FUNCODEDEF(fun_367) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYmodule_name));
  QRET(T0);
}

FUNCODEDEF(fun_368) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_369) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYmodule_target_environment));
  QRET(T0);
}

FUNCODEDEF(fun_370) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYmodule_target_environment));
  QRET(T0);
}

FUNCODEDEF(fun_371) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_372) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYmodule_syntax_environment));
  QRET(T0);
}

FUNCODEDEF(fun_373) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYmodule_syntax_environment));
  QRET(T0);
}

FUNCODEDEF(fun_374) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_375) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YastYmodule_exports));
  QRET(T0);
}

FUNCODEDEF(fun_376) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YastYmodule_exports));
  QRET(T0);
}

FUNCODEDEF(fun_377) {
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

FUNCODEDEF(fun_379) {
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
  T2 = FUNFAB(fun_379,1,f_);
  T1 = CALL1(CHKREF(YastYmodule_loader_modules),loader_);
  T0 = CALL2(CHKREF(YruntimeYdo),T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_381) {
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
  P moduleF1416;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = CALL1(CHKREF(YastYmodule_loader_modules),module_loader_);
  T4 = CALL2(CHKREF(YruntimeYelt),T5,name_);
  moduleF1416 = T4;
  T3 = CALL2(CHKREF(YmacrosYEE),moduleF1416,CHKREF(Ynul));
  if (T3 != YPfalse) {
    T2 = CALL2(CHKREF(YastYload_and_register_module),module_loader_,name_);
    T1 = T2;
  } else {
    T1 = moduleF1416;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_384) {
  P tup38F1422;
  P x_1259F1421;
  P tup38F1420;
  P x_1258F1419;
  P tup38F1418;
  P x_1257F1417;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  x_1257F1417 = FREEREF(0);
  T11 = CALL1(CHKREF(YastYmodule_loader_stack),x_1257F1417);
  T10 = CALL1(CHKREF(YruntimeYpop),T11);
  tup38F1418 = T10;
  T9 = CALL1(CHKREF(Yhead),tup38F1418);
  x_1258F1419 = T9;
  T8 = CALL1(CHKREF(Ytail),tup38F1418);
  tup38F1420 = T8;
  T7 = CALL1(CHKREF(Yhead),tup38F1420);
  x_1259F1421 = T7;
  T6 = CALL1(CHKREF(Ytail),tup38F1420);
  tup38F1422 = T6;
  CALL2(CHKREF(YastYmodule_loader_stack_setter),x_1258F1419,x_1257F1417);
  T5 = x_1259F1421;
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_385) {
  P T0;
loop:
  T0 = CALL2(CHKREF(YastYload_module),FREEREF(1),FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(YastYload_and_register_module) {
  ARG(name_, 0);
  ARG(loader_, 1);
  P modF1427;
  P x_1256F1426;
  P indentF1425;
  P depthF1424;
  P stackF1423;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T15 = CALL1(CHKREF(YastYmodule_loader_stack),loader_);
  stackF1423 = T15;
  T14 = CALL1(CHKREF(YruntimeYlen),stackF1423);
  depthF1424 = T14;
  T13 = CALL2(CHKREF(YstringsYstring_repeat),CHKREF(lit_401),depthF1424);
  indentF1425 = T13;
  T5 = CALL2(CHKREF(YruntimeYmemQ),stackF1423,name_);
  if (T5 != YPfalse) {
    T4 = CALL1(CHKREF(Yhead),stackF1423);
    T3 = CALL3(CHKREF(Yerror),CHKREF(lit_400),T4,name_);
  } else {
  }
  CALLN(CHKREF(YruntimeYformat),4,CHKREF(YruntimeYout),CHKREF(lit_399),indentF1425,name_);
  x_1256F1426 = loader_;
  T9 = CALL1(CHKREF(YastYmodule_loader_stack),x_1256F1426);
  T8 = CALL2(CHKREF(YruntimeYpush),T9,name_);
  T7 = CALL2(CHKREF(YastYmodule_loader_stack_setter),T8,x_1256F1426);
  T12 = FUNFAB(fun_385,2,name_,loader_);
  T11 = FUNFAB(fun_384,1,loader_);
  T10 = with_cleanup(T12,T11);
  modF1427 = T10;
  CALL2(CHKREF(YastYregister_moduleX),loader_,modF1427);
  CALL3(CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_398),indentF1425);
  T6 = modF1427;
  T2 = T6;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(YastYexport_bindingX) {
  ARG(binding_, 0);
  ARG(name_, 1);
  ARG(module_, 2);
  P tmpF1430;
  P existingF1429;
  P exportsF1428;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T9 = CALL1(CHKREF(YastYmodule_exports),module_);
  exportsF1428 = T9;
  T8 = CALL2(CHKREF(YruntimeYelt),exportsF1428,name_);
  existingF1429 = T8;
  T7 = CALL2(CHKREF(YmacrosYEE),existingF1429,CHKREF(Ynul));
  tmpF1430 = T7;
  if (tmpF1430 != YPfalse) {
    T5 = tmpF1430;
  } else {
    T6 = CALL2(CHKREF(YmacrosYEE),existingF1429,binding_);
    T5 = T6;
  }
  T4 = T5;
  T3 = CALL1(CHKREF(Ynot),T4);
  if (T3 != YPfalse) {
    T2 = CALLN(CHKREF(Yerror),5,CHKREF(lit_405),existingF1429,binding_,module_,name_);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  CALL3(CHKREF(YruntimeYelt_setter),binding_,exportsF1428,name_);
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

FUNCODEDEF(fun_389) {
  ARG(binding_, 0);
  P tmpF1431;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = CALL1(CHKREF(YastYbinding_freeQ),binding_);
  tmpF1431 = T7;
  if (tmpF1431 != YPfalse) {
    T6 = CALL2(CHKREF(YastYbinding_native_toQ),binding_,FREEREF(0));
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T4 = T5;
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YastYmodule_name),FREEREF(0));
    T2 = CALL1(CHKREF(YastYbinding_name),binding_);
    T1 = CALLN(CHKREF(YruntimeYformat),4,CHKREF(YruntimeYout),CHKREF(lit_408),T3,T2);
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
  T2 = FUNFAB(fun_389,1,mod_);
  T1 = CALL1(CHKREF(YastYmodule_target_environment),mod_);
  T0 = CALL2(CHKREF(YastYdo_static_global_bindings),T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_391) {
  ARG(v_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(CHKREF(YmacrosYpair),v_,T2);
  T0 = BOXVAL(FREEREF(0)) = T1;
  QRET(T0);
}

FUNCODEDEF(fun_392) {
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

FUNCODEDEF(fun_393) {
  ARG(mod_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = FUNFAB(fun_392,3,mod_,FREEREF(1),FREEREF(0));
  T2 = CALL1(CHKREF(YastYmodule_target_environment),mod_);
  T1 = CALL1(CHKREF(YastYenvironment_uses_modules),T2);
  T0 = CALL2(CHKREF(YruntimeYdo),T3,T1);
  QRET(T0);
}

FUNCODEDEF(fun_add_user_394) {
  ARG(modname_, 0);
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL2(CHKREF(YruntimeYelt),FREEREF(2),modname_);
  T3 = CALL1(CHKREF(YruntimeYnulQ),T4);
  if (T3 != YPfalse) {
    CALL3(CHKREF(YruntimeYelt_setter),modname_,FREEREF(2),modname_);
    T2 = FUNFAB(fun_393,2,modname_,FREEREF(1));
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
  P collector_F1434;
  P add_userF1433;
  P usersF1432;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = CALL2(CHKREF(YruntimeYfab),CHKREF(YruntimeYLtabG),YPint((P)100));
  usersF1432 = T8;
  T7 = FUNSHELL(0,fun_add_user_394,3);
  add_userF1433 = T7;
  FUNINIT(add_userF1433, 3,loader_,add_userF1433,usersF1432);
  CALL2(CHKREF(YruntimeYdo),add_userF1433,modnames_);
  collector_F1434 = Ynil;
  collector_F1434 = BOXFAB(collector_F1434);
  T4 = FUNFAB(fun_391,1,collector_F1434);
  CALL2(CHKREF(YruntimeYdo),T4,usersF1432);
  T6 = BOXVAL(collector_F1434);
  T5 = CALL1(CHKREF(YruntimeYrevX),T6);
  T2 = T5;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_396) {
  ARG(binding_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YastYbinding_freeQ_setter),YPtrue,binding_);
  QRET(T0);
}

FUNCODEDEF(YastYfree_implemented_foreign_bindings) {
  ARG(mod_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = fun_396;
  T2 = CALL1(CHKREF(YastYmodule_target_environment),mod_);
  T1 = CALL1(CHKREF(YastYenvironment_implements),T2);
  T0 = CALL2(CHKREF(YruntimeYdo),T3,T1);
  QRET(T0);
}

FUNCODEDEF(YastYremove_module_internalX) {
  ARG(mod_, 0);
  ARG(loader_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  CALL1(CHKREF(YastYfree_implemented_foreign_bindings),mod_);
  T2 = CALL1(CHKREF(YastYmodule_loader_modules),loader_);
  T1 = CALL1(CHKREF(YastYmodule_name),mod_);
  T0 = CALL2(CHKREF(YruntimeYdel_key),T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_399) {
  ARG(modname_, 0);
  P modF1435;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL1(CHKREF(YastYmodule_loader_modules),FREEREF(0));
  T2 = CALL2(CHKREF(YruntimeYelt),T3,modname_);
  modF1435 = T2;
  T1 = CALL2(CHKREF(YastYremove_module_internalX),FREEREF(0),modF1435);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(YastYremove_modules_by_nameX) {
  ARG(modnames_, 0);
  ARG(loader_, 1);
  P remove_namesF1436;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL2(CHKREF(YastYcompute_transitive_users),loader_,modnames_);
  remove_namesF1436 = T2;
  T1 = FUNFAB(fun_399,1,loader_);
  T0 = CALL2(CHKREF(YruntimeYdo),T1,remove_namesF1436);
  QRET(YPfalse);
}

FUNCODEDEF(YastYmodule_name_to_relpath) {
  ARG(name_, 0);
  P namestrF1437;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL1(CHKREF(Ysym_name),name_);
  T3 = CALL2(CHKREF(YstringsYmap_str),CHKREF(YruntimeYas_lowercase),T4);
  namestrF1437 = T3;
  T2 = CALL2(CHKREF(YstringsYstring_split),namestrF1437,YPchr((P)47));
  T1 = CALL2(CHKREF(YstringsYstring_join),T2,CHKREF(YprotoSsystemYTpath_separatorT));
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_402) {
  ARG(name_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YastYfind_binding),name_,FREEREF(1));
  T0 = CALL2(CHKREF(YastYinsert_globalX),T1,FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(YastYinstall_initial_bindings) {
  ARG(loader_, 0);
  ARG(env_, 1);
  P bootenvF1439;
  P bootmodF1438;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = CALL2(CHKREF(YastYprobe_module),loader_,CHKREF(YastYDproto_boot_module_name));
  bootmodF1438 = T5;
  T4 = CALL1(CHKREF(YastYmodule_target_environment),bootmodF1438);
  bootenvF1439 = T4;
  T3 = FUNFAB(fun_402,2,env_,bootenvF1439);
  T2 = CALL2(CHKREF(YruntimeYdo),T3,CHKREF(lit_419));
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(YastYfab_static_global_environment) {
  ARG(allow_foreign_namesQ_, 0);
  ARG(module_loader_, 1);
  ARG(module_, 2);
  P new_envF1440;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T13 = (P)YPpair(CHKREF(YastYLstatic_global_environmentG),Ynil);
  T12 = (P)YPpair(CHKREF(YastYenvironment_bindings),Ynil);
  T11 = (P)YPpair(CHKREF(YastYenvironment_allows_foreign_namesQ),T12);
  T10 = (P)YPpair(CHKREF(YastYenvironment_next),T11);
  T9 = (P)YPpair(CHKREF(YastYenvironment_module_loader),T10);
  T8 = (P)YPpair(CHKREF(YastYenvironment_module),T9);
  T7 = CALL2(CHKREF(YruntimeYfab),CHKREF(YruntimeYLtabG),YPint((P)2000));
  T6 = (P)YPpair(T7,Ynil);
  T5 = (P)YPpair(allow_foreign_namesQ_,T6);
  T4 = (P)YPpair(CHKREF(YastYDempty_static_environment),T5);
  T3 = (P)YPpair(module_loader_,T4);
  T2 = (P)YPpair(module_,T3);
  T1 = CALL3(CHKREF(YPisa),T13,T8,T2);
  new_envF1440 = T1;
  T0 = new_envF1440;
  RET(T0);
}

FUNCODEDEF(fun_405) {
  ARG(binding_, 0);
  ARG(name_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = CALL2(CHKREF(YruntimeYmemQ),FREEREF(1),name_);
  T2 = CALL1(CHKREF(Ynot),T3);
  if (T2 != YPfalse) {
    T1 = CALL2(CHKREF(YastYinsert_globalX),binding_,FREEREF(0));
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(YastYfab_subset_environment) {
  ARG(excluded_, 0);
  ARG(src_module_, 1);
  ARG(module_, 2);
  P new_envF1442;
  P loaderF1441;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T6 = CALL1(CHKREF(YastYmodule_target_environment),src_module_);
  T5 = CALL1(CHKREF(YastYenvironment_module_loader),T6);
  loaderF1441 = T5;
  T4 = CALL3(CHKREF(YastYfab_static_global_environment),module_,loaderF1441,YPfalse);
  new_envF1442 = T4;
  T3 = FUNFAB(fun_405,2,new_envF1442,excluded_);
  T2 = CALL1(CHKREF(YastYmodule_exports),src_module_);
  CALL2(CHKREF(YruntimeYdo_keyed),T3,T2);
  T1 = new_envF1442;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_407) {
  P T3,T2,T1,T0;
loop:
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL1(CHKREF(Ynot),T3);
  if (T2 != YPfalse) {
    T1 = CALL1(CHKREF(YastYfree_implemented_foreign_bindings),FREEREF(0));
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_408) {
loop:
  CALL2(CHKREF(YastYload_in),FREEREF(3),FREEREF(2));
  CALL2(CHKREF(YastYenvironment_allows_foreign_namesQ_setter),YPtrue,FREEREF(2));
  BOXVAL(FREEREF(1)) = YPtrue;
  QRET(FREEREF(0));
}

FUNCODEDEF(fun_409) {
  ARG(name_, 0);
  ARG(loader_, 1);
  P src_fileF1448;
  P fileF1447;
  P keepmodQF1446;
  P envF1445;
  P moduleF1444;
  P typeF1443;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
loop:
  T18 = CALL1(CHKREF(YastYmodule_loader_module_type),loader_);
  typeF1443 = T18;
  T17 = (P)YPpair(typeF1443,Ynil);
  T16 = (P)YPpair(CHKREF(YastYmodule_name),Ynil);
  T15 = (P)YPpair(name_,Ynil);
  T14 = CALL3(CHKREF(YPisa),T17,T16,T15);
  moduleF1444 = T14;
  T13 = CALL3(CHKREF(YastYfab_static_global_environment),moduleF1444,loader_,YPfalse);
  envF1445 = T13;
  keepmodQF1446 = YPfalse;
  keepmodQF1446 = BOXFAB(keepmodQF1446);
  T12 = CALL1(CHKREF(YastYmodule_name_to_relpath),name_);
  fileF1447 = T12;
  T11 = CALL1(CHKREF(YprotoSsystemYproto_filename),fileF1447);
  T10 = CALL1(CHKREF(YprotoSsystemYadd_src_path),T11);
  src_fileF1448 = T10;
  CALL3(CHKREF(YastYset_module_environments),moduleF1444,envF1445,envF1445);
  CALL2(CHKREF(YastYinstall_initial_bindings),envF1445,loader_);
  T9 = FUNFAB(fun_408,4,moduleF1444,keepmodQF1446,envF1445,src_fileF1448);
  T8 = FUNFAB(fun_407,2,moduleF1444,keepmodQF1446);
  T7 = with_cleanup(T9,T8);
  T6 = T7;
  T5 = T6;
  T3 = T5;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(YastYruntime_module_loader) {
loop:
  QRET(CHKREF(YastYTruntime_module_loaderT));
}

FUNCODEDEF(YastYruntime_module) {
  ARG(modname_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL0(CHKREF(YastYruntime_module_loader));
  T0 = CALL2(CHKREF(YastYprobe_module),T1,modname_);
  QRET(T0);
}

FUNCODEDEF(YastYruntime_environment) {
  ARG(modname_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YastYruntime_module),modname_);
  T0 = CALL1(CHKREF(YastYmodule_target_environment),T1);
  QRET(T0);
}

FUNCODEDEF(YastYreloader_do_create_module) {
  ARG(modname_, 0);
  P envF1452;
  P modF1451;
  P typeF1450;
  P loaderF1449;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T11 = CALL0(CHKREF(YastYruntime_module_loader));
  loaderF1449 = T11;
  T10 = CALL1(CHKREF(YastYmodule_loader_module_type),loaderF1449);
  typeF1450 = T10;
  T9 = (P)YPpair(typeF1450,Ynil);
  T8 = (P)YPpair(CHKREF(YastYmodule_name),Ynil);
  T7 = CALL2(CHKREF(YruntimeYas),CHKREF(YLsymG),modname_);
  T6 = (P)YPpair(T7,Ynil);
  T5 = CALL3(CHKREF(YPisa),T9,T8,T6);
  modF1451 = T5;
  T4 = CALL3(CHKREF(YastYfab_static_global_environment),modF1451,loaderF1449,YPtrue);
  envF1452 = T4;
  CALL3(CHKREF(YastYset_module_environments),modF1451,envF1452,envF1452);
  CALL2(CHKREF(YastYregister_moduleX),loaderF1449,modF1451);
  T3 = modF1451;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(YastYreloader_do_use_module) {
  ARG(uses_, 0);
  ARG(mod_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL1(CHKREF(YastYmodule_target_environment),mod_);
  T1 = CALL1(CHKREF(YastYenvironment_uses_modules),T2);
  T0 = CALL2(CHKREF(YruntimeYpush_lastX),T1,uses_);
  QRET(T0);
}

FUNCODEDEF(YastYreloader_do_import) {
  ARG(original_name_, 0);
  ARG(from_mod_, 1);
  ARG(name_, 2);
  ARG(mod_, 3);
  P bindingF1454;
  P home_envF1453;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T10 = CALL1(CHKREF(YastYmodule_target_environment),from_mod_);
  home_envF1453 = T10;
  T9 = CALL2(CHKREF(YruntimeYas),CHKREF(YLsymG),original_name_);
  T8 = CALL2(CHKREF(YastYfind_binding),T9,home_envF1453);
  bindingF1454 = T8;
  T5 = CALL1(CHKREF(Ynot),bindingF1454);
  if (T5 != YPfalse) {
    T4 = CALL1(CHKREF(YastYmodule_name),from_mod_);
    T3 = CALL1(CHKREF(YastYmodule_name),mod_);
    T2 = CALLN(CHKREF(Yerror),4,CHKREF(lit_434),original_name_,T4,T3);
  } else {
  }
  T7 = CALL1(CHKREF(YastYmodule_target_environment),mod_);
  T6 = CALL2(CHKREF(YastYinsert_globalX),bindingF1454,T7);
  T1 = T6;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(YastYreloader_do_runtime_binding) {
  ARG(loc_, 0);
  ARG(name_, 1);
  ARG(mod_, 2);
  P bindingF1455;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2,a3;
loop:
  T16 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T15 = (P)YPpair(CHKREF(YastYbinding_locative),Ynil);
  T14 = (P)YPpair(CHKREF(YastYbinding_freeQ),T15);
  T13 = (P)YPpair(CHKREF(YastYbinding_name),T14);
  T12 = (P)YPpair(CHKREF(YastYbinding_module_name),T13);
  T11 = (P)YPpair(CHKREF(YastYbinding_kind),T12);
  T10 = CALL1(CHKREF(YastYmodule_name),mod_);
  T9 = CALL2(CHKREF(YruntimeYas),CHKREF(YLsymG),name_);
  T8 = (P)YPpair(loc_,Ynil);
  T7 = (P)YPpair(YPfalse,T8);
  T6 = (P)YPpair(T9,T7);
  T5 = (P)YPpair(T10,T6);
  T4 = (P)YPpair(CHKREF(lit_1),T5);
  T3 = CALL3(CHKREF(YPisa),T16,T11,T4);
  bindingF1455 = T3;
  T2 = CALL1(CHKREF(YastYmodule_target_environment),mod_);
  T1 = CALL2(CHKREF(YastYinsert_globalX),bindingF1455,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(YastYreloader_do_other_binding) {
  ARG(name_, 0);
  ARG(mod_, 1);
  P bindingF1456;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T14 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T13 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T12 = (P)YPpair(CHKREF(YastYbinding_name),T13);
  T11 = (P)YPpair(CHKREF(YastYbinding_module_name),T12);
  T10 = (P)YPpair(CHKREF(YastYbinding_kind),T11);
  T9 = CALL1(CHKREF(YastYmodule_name),mod_);
  T8 = CALL2(CHKREF(YruntimeYas),CHKREF(YLsymG),name_);
  T7 = (P)YPpair(YPtrue,Ynil);
  T6 = (P)YPpair(T8,T7);
  T5 = (P)YPpair(T9,T6);
  T4 = (P)YPpair(CHKREF(lit_20),T5);
  T3 = CALL3(CHKREF(YPisa),T14,T10,T4);
  bindingF1456 = T3;
  T2 = CALL1(CHKREF(YastYmodule_target_environment),mod_);
  T1 = CALL2(CHKREF(YastYinsert_globalX),bindingF1456,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(YastYreloader_do_export) {
  ARG(as_name_, 0);
  ARG(name_, 1);
  ARG(mod_, 2);
  P bindingF1457;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T8 = CALL2(CHKREF(YruntimeYas),CHKREF(YLsymG),name_);
  T7 = CALL1(CHKREF(YastYmodule_target_environment),mod_);
  T6 = CALL2(CHKREF(YastYfind_binding),T8,T7);
  bindingF1457 = T6;
  T3 = CALL1(CHKREF(Ynot),bindingF1457);
  if (T3 != YPfalse) {
    T2 = CALL1(CHKREF(YastYmodule_name),mod_);
    T1 = CALL3(CHKREF(Yerror),CHKREF(lit_439),name_,T2);
  } else {
  }
  T5 = CALL2(CHKREF(YruntimeYas),CHKREF(YLsymG),as_name_);
  T4 = CALL3(CHKREF(YastYexport_bindingX),mod_,T5,bindingF1457);
  T0 = T4;
  QRET(T0);
}

FUNCODEDEF(YastYreload_modules) {
  P T0;
loop:
  T0 = (P)YPbuild_runtime_modules(CHKREF(YastYreloader_do_create_module),CHKREF(YastYreloader_do_use_module),CHKREF(YastYreloader_do_import),CHKREF(YastYreloader_do_runtime_binding),CHKREF(YastYreloader_do_other_binding),CHKREF(YastYreloader_do_export));
  QRET(T0);
}

FUNCODEDEF(fun_420) {
  ARG(binding_, 0);
  P cloneF1458;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL1(CHKREF(YastYbinding_name),binding_);
  T3 = CALLN(CHKREF(YastYast_define_binding),4,FREEREF(0),T4,YPfalse,CHKREF(lit_190));
  cloneF1458 = T3;
  T2 = CALL1(CHKREF(YastYbinding_handler),binding_);
  T1 = CALL2(CHKREF(YastYbinding_handler_setter),T2,cloneF1458);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(YastYinstall_magic_bindings) {
  ARG(env_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNFAB(fun_420,1,env_);
  T1 = CALL0(CHKREF(YastYmagic_bindings));
  T0 = CALL2(CHKREF(YruntimeYdo),T2,T1);
  QRET(T0);
}

FUNCODEDEF(YastYreload_macros) {
  P T1,T0;
loop:
  T0 = CALL2(CHKREF(YruntimeYrcurry),CHKREF(YPPmacro),YPfalse);
  CALLN(CHKREF(YruntimeYdo3),4,T0,CHKREF(YTboot_macro_module_namesT),CHKREF(YTboot_macro_namesT),CHKREF(YTboot_macro_expandersT));
  T1 = YTmacros_okQT = YPtrue;
  QRET(T1);
}

FUNCODEDEF(YastYinstall_interpreter_hacks) {
  ARG(env_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YastYinit_environment_for_eval),env_);
  QRET(T0);
}

FUNCODEDEF(YastYinit_runtime) {
  P bootenvF1460;
  P bootmodF1459;
  P T4,T3,T2,T1,T0;
loop:
  CALL0(CHKREF(YastYreload_modules));
  T4 = CALL0(CHKREF(YastYruntime_module_loader));
  T3 = CALL2(CHKREF(YastYprobe_module),T4,CHKREF(YastYDproto_boot_module_name));
  bootmodF1459 = T3;
  T2 = CALL1(CHKREF(YastYmodule_target_environment),bootmodF1459);
  bootenvF1460 = T2;
  CALL1(CHKREF(YastYinstall_magic_bindings),bootenvF1460);
  CALL0(CHKREF(YastYreload_macros));
  T1 = CALL1(CHKREF(YastYinstall_interpreter_hacks),bootenvF1460);
  T0 = T1;
  QRET(YPfalse);
}

FUNCODEDEF(YastYfab_syntax_environment) {
  ARG(module_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YastYruntime_module),CHKREF(lit_447));
  T0 = CALL3(CHKREF(YastYfab_subset_environment),module_,T1,CHKREF(YastYsyntax_environment_excluded_bindings));
  RET(T0);
}

FUNCODEDEF(YastYfab_p2c_module) {
  ARG(name_, 0);
  ARG(loader_, 1);
  P target_envF1464;
  P syntax_envF1463;
  P moduleF1462;
  P typeF1461;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T13 = CALL1(CHKREF(YastYmodule_loader_module_type),loader_);
  typeF1461 = T13;
  T12 = (P)YPpair(typeF1461,Ynil);
  T11 = (P)YPpair(CHKREF(YastYmodule_name),Ynil);
  T10 = (P)YPpair(name_,Ynil);
  T9 = CALL3(CHKREF(YPisa),T12,T11,T10);
  moduleF1462 = T9;
  T8 = CALL1(CHKREF(YastYfab_syntax_environment),moduleF1462);
  syntax_envF1463 = T8;
  T7 = CALL3(CHKREF(YastYfab_static_global_environment),moduleF1462,loader_,YPfalse);
  target_envF1464 = T7;
  CALL3(CHKREF(YastYset_module_environments),moduleF1462,syntax_envF1463,target_envF1464);
  T6 = CALL2(CHKREF(YmacrosYEE),name_,CHKREF(YastYDproto_boot_module_name));
  if (T6 != YPfalse) {
    T5 = CALL1(CHKREF(YastYinit_p2c_boot_environment),target_envF1464);
  } else {
    T4 = CALL2(CHKREF(YastYinit_p2c_regular_environment),target_envF1464,loader_);
  }
  T3 = moduleF1462;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(YastYinit_p2c_boot_environment) {
  ARG(env_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL0(CHKREF(YastYmagic_bindings));
  T0 = CALL2(CHKREF(YastYinsert_globalsX),T1,env_);
  QRET(T0);
}

FUNCODEDEF(YastYinit_p2c_regular_environment) {
  ARG(loader_, 0);
  ARG(env_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(YastYinstall_initial_bindings),env_,loader_);
  QRET(T0);
}

FUNCODEDEF(YastYinit_ast) {
  P T0;
loop:
  T0 = CALL0(CHKREF(YastYinit_runtime));
  QRET(T0);
}

FUNCODEDEF(fun_loop_430) {
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
  P loopF1465;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_loop_430,2);
  loopF1465 = T2;
  FUNINIT(loopF1465, 2,loopF1465,f_);
  T1 = KCALL1(loopF1465,env_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_loop_432) {
  ARG(env_, 0);
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = CALL2(CHKREF(YisaQ),env_,CHKREF(YastYLstatic_empty_environmentG));
  T4 = CALL1(CHKREF(Ynot),T5);
  if (T4 != YPfalse) {
    T1 = CALL1(CHKREF(YastYframe_bindings),env_);
    CALL2(CHKREF(YruntimeYdo_keyed),FREEREF(1),T1);
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

FUNCODEDEF(YastYdo_named_static_global_bindings) {
  ARG(env_, 0);
  ARG(f_, 1);
  P loopF1466;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_loop_432,2);
  loopF1466 = T2;
  FUNINIT(loopF1466, 2,loopF1466,f_);
  T1 = KCALL1(loopF1466,env_);
  T0 = T1;
  QRET(T0);
}

P YastY___main_0___() {
  P T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167;
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
  lit_0 = YPPsym((P)"boot");
  YastYDproto_boot_module_name = CHKREF(lit_0);
  regsym(&YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
  lit_1 = YPPsym((P)"runtime");
  YastYDproto_runtime_module_name = CHKREF(lit_1);
  regsym(&YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
  lit_2 = YPPsym((P)"objectify-error");
  lit_3 = YPPsym((P)"arguments");
  lit_4 = YPPsym((P)"message");
  T0 = YPsig(YPPlist(2,CHKREF(lit_4),CHKREF(lit_3)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_0 = YPmet(FUNCODEREF(fun_0),CHKREF(lit_2),T0,ENVNUL);
  T4 = BOUNDP(YastYobjectify_error);
  if (T4 != YPfalse) {
    T3 = CHKREF(YastYobjectify_error);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_0;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YastYobjectify_error = T1;
  regsym(&YastYobjectify_error,"ast","objectify-error");
  T6 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T5 = CALL3(CHKREF(YPisa),T6,Ynil,Ynil);
  YastYLprogramG = T5;
  regsym(&YastYLprogramG,"ast","<program>");
  lit_5 = YPPsym((P)"program-type");
  lit_6 = YPPsym((P)"_x");
  T7 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_1 = YPmet(FUNCODEREF(fun_1),CHKREF(lit_5),T7,ENVNUL);
  T11 = BOUNDP(YastYprogram_type);
  if (T11 != YPfalse) {
    T10 = CHKREF(YastYprogram_type);
  } else {
    T10 = YPfalse;
  }
  T9 = fun_1;
  T8 = CALL2(CHKREF(YPdefine_method),T10,T9);
  YastYprogram_type = T8;
  regsym(&YastYprogram_type,"ast","program-type");
  lit_7 = YPPsym((P)"program-type-setter");
  lit_8 = YPPsym((P)"_z");
  T12 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLprogramG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_2 = YPmet(FUNCODEREF(fun_2),CHKREF(lit_7),T12,ENVNUL);
  T16 = BOUNDP(YastYprogram_type_setter);
  if (T16 != YPfalse) {
    T15 = CHKREF(YastYprogram_type_setter);
  } else {
    T15 = YPfalse;
  }
  T14 = fun_2;
  T13 = CALL2(CHKREF(YPdefine_method),T15,T14);
  YastYprogram_type_setter = T13;
  regsym(&YastYprogram_type_setter,"ast","program-type-setter");
  lit_9 = YPPsym((P)"x");
  T17 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_3 = YPmet(FUNCODEREF(fun_3),YPfalse,T17,ENVNUL);
  T18 = fun_3;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLprogramG),CHKREF(YastYprogram_type),CHKREF(YastYprogram_type_setter),CHKREF(YLanyG),T18);
  lit_10 = YPPsym((P)"program-register");
  T19 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_4 = YPmet(FUNCODEREF(fun_4),CHKREF(lit_10),T19,ENVNUL);
  T23 = BOUNDP(YastYprogram_register);
  if (T23 != YPfalse) {
    T22 = CHKREF(YastYprogram_register);
  } else {
    T22 = YPfalse;
  }
  T21 = fun_4;
  T20 = CALL2(CHKREF(YPdefine_method),T22,T21);
  YastYprogram_register = T20;
  regsym(&YastYprogram_register,"ast","program-register");
  T25 = (P)YPpair(CHKREF(YastYLprogramG),Ynil);
  T24 = CALL3(CHKREF(YPisa),T25,Ynil,Ynil);
  YastYLcomputed_programG = T24;
  regsym(&YastYLcomputed_programG,"ast","<computed-program>");
  T26 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLcomputed_programG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_5 = YPmet(FUNCODEREF(fun_5),CHKREF(lit_10),T26,ENVNUL);
  T30 = BOUNDP(YastYprogram_register);
  if (T30 != YPfalse) {
    T29 = CHKREF(YastYprogram_register);
  } else {
    T29 = YPfalse;
  }
  T28 = fun_5;
  T27 = CALL2(CHKREF(YPdefine_method),T29,T28);
  YastYprogram_register = T27;
  regsym(&YastYprogram_register,"ast","program-register");
  lit_11 = YPPsym((P)"program-register-setter");
  T31 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLcomputed_programG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_6 = YPmet(FUNCODEREF(fun_6),CHKREF(lit_11),T31,ENVNUL);
  T35 = BOUNDP(YastYprogram_register_setter);
  if (T35 != YPfalse) {
    T34 = CHKREF(YastYprogram_register_setter);
  } else {
    T34 = YPfalse;
  }
  T33 = fun_6;
  T32 = CALL2(CHKREF(YPdefine_method),T34,T33);
  YastYprogram_register_setter = T32;
  regsym(&YastYprogram_register_setter,"ast","program-register-setter");
  T36 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
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
  lit_12 = YPPsym((P)"binding-name");
  T42 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLbindingG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_8 = YPmet(FUNCODEREF(fun_8),CHKREF(lit_12),T42,ENVNUL);
  T46 = BOUNDP(YastYbinding_name);
  if (T46 != YPfalse) {
    T45 = CHKREF(YastYbinding_name);
  } else {
    T45 = YPfalse;
  }
  T44 = fun_8;
  T43 = CALL2(CHKREF(YPdefine_method),T45,T44);
  YastYbinding_name = T43;
  regsym(&YastYbinding_name,"ast","binding-name");
  lit_13 = YPPsym((P)"binding-name-setter");
  T47 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YastYLbinding_nameG),CHKREF(YastYLbindingG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_9 = YPmet(FUNCODEREF(fun_9),CHKREF(lit_13),T47,ENVNUL);
  T51 = BOUNDP(YastYbinding_name_setter);
  if (T51 != YPfalse) {
    T50 = CHKREF(YastYbinding_name_setter);
  } else {
    T50 = YPfalse;
  }
  T49 = fun_9;
  T48 = CALL2(CHKREF(YPdefine_method),T50,T49);
  YastYbinding_name_setter = T48;
  regsym(&YastYbinding_name_setter,"ast","binding-name-setter");
  T52 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T52,ENVNUL);
  T53 = fun_10;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLbindingG),CHKREF(YastYbinding_name),CHKREF(YastYbinding_name_setter),CHKREF(YastYLbinding_nameG),T53);
  lit_14 = YPPsym((P)"binding-type");
  T54 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLbindingG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_11 = YPmet(FUNCODEREF(fun_11),CHKREF(lit_14),T54,ENVNUL);
  T58 = BOUNDP(YastYbinding_type);
  if (T58 != YPfalse) {
    T57 = CHKREF(YastYbinding_type);
  } else {
    T57 = YPfalse;
  }
  T56 = fun_11;
  T55 = CALL2(CHKREF(YPdefine_method),T57,T56);
  YastYbinding_type = T55;
  regsym(&YastYbinding_type,"ast","binding-type");
  lit_15 = YPPsym((P)"binding-type-setter");
  T59 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YastYLprogramG),CHKREF(YastYLbindingG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_12 = YPmet(FUNCODEREF(fun_12),CHKREF(lit_15),T59,ENVNUL);
  T63 = BOUNDP(YastYbinding_type_setter);
  if (T63 != YPfalse) {
    T62 = CHKREF(YastYbinding_type_setter);
  } else {
    T62 = YPfalse;
  }
  T61 = fun_12;
  T60 = CALL2(CHKREF(YPdefine_method),T62,T61);
  YastYbinding_type_setter = T60;
  regsym(&YastYbinding_type_setter,"ast","binding-type-setter");
  T64 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T64,ENVNUL);
  T65 = fun_13;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLbindingG),CHKREF(YastYbinding_type),CHKREF(YastYbinding_type_setter),CHKREF(YastYLprogramG),T65);
  T67 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T66 = CALL3(CHKREF(YPisa),T67,Ynil,Ynil);
  YastYLglobal_boxG = T66;
  regsym(&YastYLglobal_boxG,"ast","<global-box>");
  lit_16 = YPPsym((P)"global-box-value");
  T68 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLglobal_boxG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_14 = YPmet(FUNCODEREF(fun_14),CHKREF(lit_16),T68,ENVNUL);
  T72 = BOUNDP(YastYglobal_box_value);
  if (T72 != YPfalse) {
    T71 = CHKREF(YastYglobal_box_value);
  } else {
    T71 = YPfalse;
  }
  T70 = fun_14;
  T69 = CALL2(CHKREF(YPdefine_method),T71,T70);
  YastYglobal_box_value = T69;
  regsym(&YastYglobal_box_value,"ast","global-box-value");
  lit_17 = YPPsym((P)"global-box-value-setter");
  T73 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLglobal_boxG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_15 = YPmet(FUNCODEREF(fun_15),CHKREF(lit_17),T73,ENVNUL);
  T77 = BOUNDP(YastYglobal_box_value_setter);
  if (T77 != YPfalse) {
    T76 = CHKREF(YastYglobal_box_value_setter);
  } else {
    T76 = YPfalse;
  }
  T75 = fun_15;
  T74 = CALL2(CHKREF(YPdefine_method),T76,T75);
  YastYglobal_box_value_setter = T74;
  regsym(&YastYglobal_box_value_setter,"ast","global-box-value-setter");
  T78 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T78,ENVNUL);
  T79 = fun_16;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLglobal_boxG),CHKREF(YastYglobal_box_value),CHKREF(YastYglobal_box_value_setter),CHKREF(YLanyG),T79);
  T81 = (P)YPpair(CHKREF(YastYLbindingG),Ynil);
  T80 = CALL3(CHKREF(YPisa),T81,Ynil,Ynil);
  YastYLmodule_bindingG = T80;
  regsym(&YastYLmodule_bindingG,"ast","<module-binding>");
  lit_18 = YPPsym((P)"binding-kind");
  T82 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_17 = YPmet(FUNCODEREF(fun_17),CHKREF(lit_18),T82,ENVNUL);
  T86 = BOUNDP(YastYbinding_kind);
  if (T86 != YPfalse) {
    T85 = CHKREF(YastYbinding_kind);
  } else {
    T85 = YPfalse;
  }
  T84 = fun_17;
  T83 = CALL2(CHKREF(YPdefine_method),T85,T84);
  YastYbinding_kind = T83;
  regsym(&YastYbinding_kind,"ast","binding-kind");
  lit_19 = YPPsym((P)"binding-kind-setter");
  T87 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLmodule_bindingG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_18 = YPmet(FUNCODEREF(fun_18),CHKREF(lit_19),T87,ENVNUL);
  T91 = BOUNDP(YastYbinding_kind_setter);
  if (T91 != YPfalse) {
    T90 = CHKREF(YastYbinding_kind_setter);
  } else {
    T90 = YPfalse;
  }
  T89 = fun_18;
  T88 = CALL2(CHKREF(YPdefine_method),T90,T89);
  YastYbinding_kind_setter = T88;
  regsym(&YastYbinding_kind_setter,"ast","binding-kind-setter");
  lit_20 = YPPsym((P)"global");
  T92 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T92,ENVNUL);
  T93 = fun_19;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmodule_bindingG),CHKREF(YastYbinding_kind),CHKREF(YastYbinding_kind_setter),CHKREF(YLanyG),T93);
  lit_21 = YPPsym((P)"binding-module-name");
  T94 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_20 = YPmet(FUNCODEREF(fun_20),CHKREF(lit_21),T94,ENVNUL);
  T98 = BOUNDP(YastYbinding_module_name);
  if (T98 != YPfalse) {
    T97 = CHKREF(YastYbinding_module_name);
  } else {
    T97 = YPfalse;
  }
  T96 = fun_20;
  T95 = CALL2(CHKREF(YPdefine_method),T97,T96);
  YastYbinding_module_name = T95;
  regsym(&YastYbinding_module_name,"ast","binding-module-name");
  lit_22 = YPPsym((P)"binding-module-name-setter");
  T99 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLsymG),CHKREF(YastYLmodule_bindingG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_21 = YPmet(FUNCODEREF(fun_21),CHKREF(lit_22),T99,ENVNUL);
  T103 = BOUNDP(YastYbinding_module_name_setter);
  if (T103 != YPfalse) {
    T102 = CHKREF(YastYbinding_module_name_setter);
  } else {
    T102 = YPfalse;
  }
  T101 = fun_21;
  T100 = CALL2(CHKREF(YPdefine_method),T102,T101);
  YastYbinding_module_name_setter = T100;
  regsym(&YastYbinding_module_name_setter,"ast","binding-module-name-setter");
  T104 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T104,ENVNUL);
  T105 = fun_22;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmodule_bindingG),CHKREF(YastYbinding_module_name),CHKREF(YastYbinding_module_name_setter),CHKREF(YLsymG),T105);
  lit_23 = YPPsym((P)"binding-free?");
  T106 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_23 = YPmet(FUNCODEREF(fun_23),CHKREF(lit_23),T106,ENVNUL);
  T110 = BOUNDP(YastYbinding_freeQ);
  if (T110 != YPfalse) {
    T109 = CHKREF(YastYbinding_freeQ);
  } else {
    T109 = YPfalse;
  }
  T108 = fun_23;
  T107 = CALL2(CHKREF(YPdefine_method),T109,T108);
  YastYbinding_freeQ = T107;
  regsym(&YastYbinding_freeQ,"ast","binding-free?");
  lit_24 = YPPsym((P)"binding-free?-setter");
  T111 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLlogG),CHKREF(YastYLmodule_bindingG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_24 = YPmet(FUNCODEREF(fun_24),CHKREF(lit_24),T111,ENVNUL);
  T115 = BOUNDP(YastYbinding_freeQ_setter);
  if (T115 != YPfalse) {
    T114 = CHKREF(YastYbinding_freeQ_setter);
  } else {
    T114 = YPfalse;
  }
  T113 = fun_24;
  T112 = CALL2(CHKREF(YPdefine_method),T114,T113);
  YastYbinding_freeQ_setter = T112;
  regsym(&YastYbinding_freeQ_setter,"ast","binding-free?-setter");
  T116 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T116,ENVNUL);
  T117 = fun_25;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmodule_bindingG),CHKREF(YastYbinding_freeQ),CHKREF(YastYbinding_freeQ_setter),CHKREF(YLlogG),T117);
  lit_25 = YPPsym((P)"binding-info");
  T118 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_26 = YPmet(FUNCODEREF(fun_26),CHKREF(lit_25),T118,ENVNUL);
  T122 = BOUNDP(YastYbinding_info);
  if (T122 != YPfalse) {
    T121 = CHKREF(YastYbinding_info);
  } else {
    T121 = YPfalse;
  }
  T120 = fun_26;
  T119 = CALL2(CHKREF(YPdefine_method),T121,T120);
  YastYbinding_info = T119;
  regsym(&YastYbinding_info,"ast","binding-info");
  lit_26 = YPPsym((P)"binding-info-setter");
  T123 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLmodule_bindingG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_27 = YPmet(FUNCODEREF(fun_27),CHKREF(lit_26),T123,ENVNUL);
  T127 = BOUNDP(YastYbinding_info_setter);
  if (T127 != YPfalse) {
    T126 = CHKREF(YastYbinding_info_setter);
  } else {
    T126 = YPfalse;
  }
  T125 = fun_27;
  T124 = CALL2(CHKREF(YPdefine_method),T126,T125);
  YastYbinding_info_setter = T124;
  regsym(&YastYbinding_info_setter,"ast","binding-info-setter");
  T128 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
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
  lit_27 = YPPsym((P)"binding-value");
  T132 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLlocal_bindingG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_29 = YPmet(FUNCODEREF(fun_29),CHKREF(lit_27),T132,ENVNUL);
  T136 = BOUNDP(YastYbinding_value);
  if (T136 != YPfalse) {
    T135 = CHKREF(YastYbinding_value);
  } else {
    T135 = YPfalse;
  }
  T134 = fun_29;
  T133 = CALL2(CHKREF(YPdefine_method),T135,T134);
  YastYbinding_value = T133;
  regsym(&YastYbinding_value,"ast","binding-value");
  lit_28 = YPPsym((P)"binding-value-setter");
  T137 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLlocal_bindingG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_30 = YPmet(FUNCODEREF(fun_30),CHKREF(lit_28),T137,ENVNUL);
  T141 = BOUNDP(YastYbinding_value_setter);
  if (T141 != YPfalse) {
    T140 = CHKREF(YastYbinding_value_setter);
  } else {
    T140 = YPfalse;
  }
  T139 = fun_30;
  T138 = CALL2(CHKREF(YPdefine_method),T140,T139);
  YastYbinding_value_setter = T138;
  regsym(&YastYbinding_value_setter,"ast","binding-value-setter");
  T142 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T142,ENVNUL);
  T143 = fun_31;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLlocal_bindingG),CHKREF(YastYbinding_value),CHKREF(YastYbinding_value_setter),CHKREF(YLanyG),T143);
  lit_29 = YPPsym((P)"binding-mutable?");
  T144 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLlocal_bindingG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_32 = YPmet(FUNCODEREF(fun_32),CHKREF(lit_29),T144,ENVNUL);
  T148 = BOUNDP(YastYbinding_mutableQ);
  if (T148 != YPfalse) {
    T147 = CHKREF(YastYbinding_mutableQ);
  } else {
    T147 = YPfalse;
  }
  T146 = fun_32;
  T145 = CALL2(CHKREF(YPdefine_method),T147,T146);
  YastYbinding_mutableQ = T145;
  regsym(&YastYbinding_mutableQ,"ast","binding-mutable?");
  lit_30 = YPPsym((P)"binding-mutable?-setter");
  T149 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLlocal_bindingG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_33 = YPmet(FUNCODEREF(fun_33),CHKREF(lit_30),T149,ENVNUL);
  T153 = BOUNDP(YastYbinding_mutableQ_setter);
  if (T153 != YPfalse) {
    T152 = CHKREF(YastYbinding_mutableQ_setter);
  } else {
    T152 = YPfalse;
  }
  T151 = fun_33;
  T150 = CALL2(CHKREF(YPdefine_method),T152,T151);
  YastYbinding_mutableQ_setter = T150;
  regsym(&YastYbinding_mutableQ_setter,"ast","binding-mutable?-setter");
  T154 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T154,ENVNUL);
  T155 = fun_34;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLlocal_bindingG),CHKREF(YastYbinding_mutableQ),CHKREF(YastYbinding_mutableQ_setter),CHKREF(YLanyG),T155);
  lit_31 = YPPsym((P)"binding-dynamic-extent?");
  T156 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLlocal_bindingG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_35 = YPmet(FUNCODEREF(fun_35),CHKREF(lit_31),T156,ENVNUL);
  T160 = BOUNDP(YastYbinding_dynamic_extentQ);
  if (T160 != YPfalse) {
    T159 = CHKREF(YastYbinding_dynamic_extentQ);
  } else {
    T159 = YPfalse;
  }
  T158 = fun_35;
  T157 = CALL2(CHKREF(YPdefine_method),T159,T158);
  YastYbinding_dynamic_extentQ = T157;
  regsym(&YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
  lit_32 = YPPsym((P)"binding-dynamic-extent?-setter");
  T161 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLlocal_bindingG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_36 = YPmet(FUNCODEREF(fun_36),CHKREF(lit_32),T161,ENVNUL);
  T165 = BOUNDP(YastYbinding_dynamic_extentQ_setter);
  if (T165 != YPfalse) {
    T164 = CHKREF(YastYbinding_dynamic_extentQ_setter);
  } else {
    T164 = YPfalse;
  }
  T163 = fun_36;
  T162 = CALL2(CHKREF(YPdefine_method),T164,T163);
  YastYbinding_dynamic_extentQ_setter = T162;
  regsym(&YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
  T166 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T166,ENVNUL);
  T167 = fun_37;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLlocal_bindingG),CHKREF(YastYbinding_dynamic_extentQ),CHKREF(YastYbinding_dynamic_extentQ_setter),CHKREF(YLanyG),T167);
  lit_33 = YPPsym((P)"binding-dotted?");
  T168 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLlocal_bindingG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_38 = YPmet(FUNCODEREF(fun_38),CHKREF(lit_33),T168,ENVNUL);
  T172 = BOUNDP(YastYbinding_dottedQ);
  if (T172 != YPfalse) {
    T171 = CHKREF(YastYbinding_dottedQ);
  } else {
    T171 = YPfalse;
  }
  T170 = fun_38;
  T169 = CALL2(CHKREF(YPdefine_method),T171,T170);
  YastYbinding_dottedQ = T169;
  regsym(&YastYbinding_dottedQ,"ast","binding-dotted?");
  lit_34 = YPPsym((P)"binding-dotted?-setter");
  T173 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLlocal_bindingG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_39 = YPmet(FUNCODEREF(fun_39),CHKREF(lit_34),T173,ENVNUL);
  T177 = BOUNDP(YastYbinding_dottedQ_setter);
  if (T177 != YPfalse) {
    T176 = CHKREF(YastYbinding_dottedQ_setter);
  } else {
    T176 = YPfalse;
  }
  T175 = fun_39;
  T174 = CALL2(CHKREF(YPdefine_method),T176,T175);
  YastYbinding_dottedQ_setter = T174;
  regsym(&YastYbinding_dottedQ_setter,"ast","binding-dotted?-setter");
  T180 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  T179 = fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T180,ENVNUL);
  T182 = fun_40;
  T181 = CALLN(CHKREF(YPslot),5,CHKREF(YastYLlocal_bindingG),CHKREF(YastYbinding_dottedQ),CHKREF(YastYbinding_dottedQ_setter),CHKREF(YLanyG),T182);
  T178 = T181;
  return T178;
}

P YastY___main_1___() {
  P T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202;
  P T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186;
  P T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170;
  P T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154;
  P T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138;
  P T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122;
  P T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106;
  P T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90;
  P T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74;
  P T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58;
  P T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T1 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T0 = CALL3(CHKREF(YPisa),T1,Ynil,Ynil);
  YastYLcompile_timeG = T0;
  regsym(&YastYLcompile_timeG,"ast","<compile-time>");
  lit_35 = YPPsym((P)"compile-time-program");
  T2 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLcompile_timeG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_41 = YPmet(FUNCODEREF(fun_41),CHKREF(lit_35),T2,ENVNUL);
  T6 = BOUNDP(YastYcompile_time_program);
  if (T6 != YPfalse) {
    T5 = CHKREF(YastYcompile_time_program);
  } else {
    T5 = YPfalse;
  }
  T4 = fun_41;
  T3 = CALL2(CHKREF(YPdefine_method),T5,T4);
  YastYcompile_time_program = T3;
  regsym(&YastYcompile_time_program,"ast","compile-time-program");
  lit_36 = YPPsym((P)"compile-time-program-setter");
  T7 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLcompile_timeG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_42 = YPmet(FUNCODEREF(fun_42),CHKREF(lit_36),T7,ENVNUL);
  T11 = BOUNDP(YastYcompile_time_program_setter);
  if (T11 != YPfalse) {
    T10 = CHKREF(YastYcompile_time_program_setter);
  } else {
    T10 = YPfalse;
  }
  T9 = fun_42;
  T8 = CALL2(CHKREF(YPdefine_method),T10,T9);
  YastYcompile_time_program_setter = T8;
  regsym(&YastYcompile_time_program_setter,"ast","compile-time-program-setter");
  T12 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T12,ENVNUL);
  T13 = fun_43;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLcompile_timeG),CHKREF(YastYcompile_time_program),CHKREF(YastYcompile_time_program_setter),CHKREF(YLanyG),T13);
  T15 = (P)YPpair(CHKREF(YastYLpassive_programG),Ynil);
  T14 = CALL3(CHKREF(YPisa),T15,Ynil,Ynil);
  YastYLreferenceG = T14;
  regsym(&YastYLreferenceG,"ast","<reference>");
  T17 = (P)YPpair(CHKREF(YastYLreferenceG),Ynil);
  T16 = CALL3(CHKREF(YPisa),T17,Ynil,Ynil);
  YastYLreal_referenceG = T16;
  regsym(&YastYLreal_referenceG,"ast","<real-reference>");
  lit_37 = YPPsym((P)"reference-binding");
  T18 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLreal_referenceG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_44 = YPmet(FUNCODEREF(fun_44),CHKREF(lit_37),T18,ENVNUL);
  T22 = BOUNDP(YastYreference_binding);
  if (T22 != YPfalse) {
    T21 = CHKREF(YastYreference_binding);
  } else {
    T21 = YPfalse;
  }
  T20 = fun_44;
  T19 = CALL2(CHKREF(YPdefine_method),T21,T20);
  YastYreference_binding = T19;
  regsym(&YastYreference_binding,"ast","reference-binding");
  lit_38 = YPPsym((P)"reference-binding-setter");
  T23 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLreal_referenceG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_45 = YPmet(FUNCODEREF(fun_45),CHKREF(lit_38),T23,ENVNUL);
  T27 = BOUNDP(YastYreference_binding_setter);
  if (T27 != YPfalse) {
    T26 = CHKREF(YastYreference_binding_setter);
  } else {
    T26 = YPfalse;
  }
  T25 = fun_45;
  T24 = CALL2(CHKREF(YPdefine_method),T26,T25);
  YastYreference_binding_setter = T24;
  regsym(&YastYreference_binding_setter,"ast","reference-binding-setter");
  T28 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T28,ENVNUL);
  T29 = fun_46;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLreal_referenceG),CHKREF(YastYreference_binding),CHKREF(YastYreference_binding_setter),CHKREF(YLanyG),T29);
  T31 = (P)YPpair(CHKREF(YastYLreal_referenceG),Ynil);
  T30 = CALL3(CHKREF(YPisa),T31,Ynil,Ynil);
  YastYLlocal_referenceG = T30;
  regsym(&YastYLlocal_referenceG,"ast","<local-reference>");
  lit_39 = YPPsym((P)"reference-called-function?");
  T32 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLlocal_referenceG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_47 = YPmet(FUNCODEREF(fun_47),CHKREF(lit_39),T32,ENVNUL);
  T36 = BOUNDP(YastYreference_called_functionQ);
  if (T36 != YPfalse) {
    T35 = CHKREF(YastYreference_called_functionQ);
  } else {
    T35 = YPfalse;
  }
  T34 = fun_47;
  T33 = CALL2(CHKREF(YPdefine_method),T35,T34);
  YastYreference_called_functionQ = T33;
  regsym(&YastYreference_called_functionQ,"ast","reference-called-function?");
  lit_40 = YPPsym((P)"reference-called-function?-setter");
  T37 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLlocal_referenceG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_48 = YPmet(FUNCODEREF(fun_48),CHKREF(lit_40),T37,ENVNUL);
  T41 = BOUNDP(YastYreference_called_functionQ_setter);
  if (T41 != YPfalse) {
    T40 = CHKREF(YastYreference_called_functionQ_setter);
  } else {
    T40 = YPfalse;
  }
  T39 = fun_48;
  T38 = CALL2(CHKREF(YPdefine_method),T40,T39);
  YastYreference_called_functionQ_setter = T38;
  regsym(&YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
  T42 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T42,ENVNUL);
  T43 = fun_49;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLlocal_referenceG),CHKREF(YastYreference_called_functionQ),CHKREF(YastYreference_called_functionQ_setter),CHKREF(YLanyG),T43);
  lit_41 = YPPsym((P)"reference-frame-number");
  T44 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLlocal_referenceG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_50 = YPmet(FUNCODEREF(fun_50),CHKREF(lit_41),T44,ENVNUL);
  T48 = BOUNDP(YastYreference_frame_number);
  if (T48 != YPfalse) {
    T47 = CHKREF(YastYreference_frame_number);
  } else {
    T47 = YPfalse;
  }
  T46 = fun_50;
  T45 = CALL2(CHKREF(YPdefine_method),T47,T46);
  YastYreference_frame_number = T45;
  regsym(&YastYreference_frame_number,"ast","reference-frame-number");
  lit_42 = YPPsym((P)"reference-frame-number-setter");
  T49 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLintG),CHKREF(YastYLlocal_referenceG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_51 = YPmet(FUNCODEREF(fun_51),CHKREF(lit_42),T49,ENVNUL);
  T53 = BOUNDP(YastYreference_frame_number_setter);
  if (T53 != YPfalse) {
    T52 = CHKREF(YastYreference_frame_number_setter);
  } else {
    T52 = YPfalse;
  }
  T51 = fun_51;
  T50 = CALL2(CHKREF(YPdefine_method),T52,T51);
  YastYreference_frame_number_setter = T50;
  regsym(&YastYreference_frame_number_setter,"ast","reference-frame-number-setter");
  T54 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T54,ENVNUL);
  T55 = fun_52;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLlocal_referenceG),CHKREF(YastYreference_frame_number),CHKREF(YastYreference_frame_number_setter),CHKREF(YLintG),T55);
  lit_43 = YPPsym((P)"reference-frame-offset");
  T56 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLlocal_referenceG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_53 = YPmet(FUNCODEREF(fun_53),CHKREF(lit_43),T56,ENVNUL);
  T60 = BOUNDP(YastYreference_frame_offset);
  if (T60 != YPfalse) {
    T59 = CHKREF(YastYreference_frame_offset);
  } else {
    T59 = YPfalse;
  }
  T58 = fun_53;
  T57 = CALL2(CHKREF(YPdefine_method),T59,T58);
  YastYreference_frame_offset = T57;
  regsym(&YastYreference_frame_offset,"ast","reference-frame-offset");
  lit_44 = YPPsym((P)"reference-frame-offset-setter");
  T61 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLintG),CHKREF(YastYLlocal_referenceG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_54 = YPmet(FUNCODEREF(fun_54),CHKREF(lit_44),T61,ENVNUL);
  T65 = BOUNDP(YastYreference_frame_offset_setter);
  if (T65 != YPfalse) {
    T64 = CHKREF(YastYreference_frame_offset_setter);
  } else {
    T64 = YPfalse;
  }
  T63 = fun_54;
  T62 = CALL2(CHKREF(YPdefine_method),T64,T63);
  YastYreference_frame_offset_setter = T62;
  regsym(&YastYreference_frame_offset_setter,"ast","reference-frame-offset-setter");
  T66 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T66,ENVNUL);
  T67 = fun_55;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLlocal_referenceG),CHKREF(YastYreference_frame_offset),CHKREF(YastYreference_frame_offset_setter),CHKREF(YLintG),T67);
  T69 = (P)YPpair(CHKREF(YastYLreal_referenceG),Ynil);
  T68 = CALL3(CHKREF(YPisa),T69,Ynil,Ynil);
  YastYLglobal_referenceG = T68;
  regsym(&YastYLglobal_referenceG,"ast","<global-reference>");
  T71 = (P)YPpair(CHKREF(YastYLreal_referenceG),Ynil);
  T70 = CALL3(CHKREF(YPisa),T71,Ynil,Ynil);
  YastYLruntime_referenceG = T70;
  regsym(&YastYLruntime_referenceG,"ast","<runtime-reference>");
  T73 = (P)YPpair(CHKREF(YastYLreal_referenceG),Ynil);
  T72 = CALL3(CHKREF(YPisa),T73,Ynil,Ynil);
  YastYLpredefined_referenceG = T72;
  regsym(&YastYLpredefined_referenceG,"ast","<predefined-reference>");
  T75 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T74 = CALL3(CHKREF(YPisa),T75,Ynil,Ynil);
  YastYLboundQG = T74;
  regsym(&YastYLboundQG,"ast","<bound?>");
  lit_45 = YPPsym((P)"bound?-reference");
  T76 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLboundQG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_56 = YPmet(FUNCODEREF(fun_56),CHKREF(lit_45),T76,ENVNUL);
  T80 = BOUNDP(YastYboundQ_reference);
  if (T80 != YPfalse) {
    T79 = CHKREF(YastYboundQ_reference);
  } else {
    T79 = YPfalse;
  }
  T78 = fun_56;
  T77 = CALL2(CHKREF(YPdefine_method),T79,T78);
  YastYboundQ_reference = T77;
  regsym(&YastYboundQ_reference,"ast","bound?-reference");
  lit_46 = YPPsym((P)"bound?-reference-setter");
  T81 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLboundQG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_57 = YPmet(FUNCODEREF(fun_57),CHKREF(lit_46),T81,ENVNUL);
  T85 = BOUNDP(YastYboundQ_reference_setter);
  if (T85 != YPfalse) {
    T84 = CHKREF(YastYboundQ_reference_setter);
  } else {
    T84 = YPfalse;
  }
  T83 = fun_57;
  T82 = CALL2(CHKREF(YPdefine_method),T84,T83);
  YastYboundQ_reference_setter = T82;
  regsym(&YastYboundQ_reference_setter,"ast","bound?-reference-setter");
  T86 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T86,ENVNUL);
  T87 = fun_58;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLboundQG),CHKREF(YastYboundQ_reference),CHKREF(YastYboundQ_reference_setter),CHKREF(YLanyG),T87);
  T89 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T88 = CALL3(CHKREF(YPisa),T89,Ynil,Ynil);
  YastYLassignmentG = T88;
  regsym(&YastYLassignmentG,"ast","<assignment>");
  lit_47 = YPPsym((P)"assignment-form");
  T90 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLassignmentG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_59 = YPmet(FUNCODEREF(fun_59),CHKREF(lit_47),T90,ENVNUL);
  T94 = BOUNDP(YastYassignment_form);
  if (T94 != YPfalse) {
    T93 = CHKREF(YastYassignment_form);
  } else {
    T93 = YPfalse;
  }
  T92 = fun_59;
  T91 = CALL2(CHKREF(YPdefine_method),T93,T92);
  YastYassignment_form = T91;
  regsym(&YastYassignment_form,"ast","assignment-form");
  lit_48 = YPPsym((P)"assignment-form-setter");
  T95 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLassignmentG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_60 = YPmet(FUNCODEREF(fun_60),CHKREF(lit_48),T95,ENVNUL);
  T99 = BOUNDP(YastYassignment_form_setter);
  if (T99 != YPfalse) {
    T98 = CHKREF(YastYassignment_form_setter);
  } else {
    T98 = YPfalse;
  }
  T97 = fun_60;
  T96 = CALL2(CHKREF(YPdefine_method),T98,T97);
  YastYassignment_form_setter = T96;
  regsym(&YastYassignment_form_setter,"ast","assignment-form-setter");
  T100 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T100,ENVNUL);
  T101 = fun_61;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLassignmentG),CHKREF(YastYassignment_form),CHKREF(YastYassignment_form_setter),CHKREF(YLanyG),T101);
  T103 = (P)YPpair(CHKREF(YastYLassignmentG),Ynil);
  T102 = CALL3(CHKREF(YPisa),T103,Ynil,Ynil);
  YastYLlocal_assignmentG = T102;
  regsym(&YastYLlocal_assignmentG,"ast","<local-assignment>");
  lit_49 = YPPsym((P)"assignment-reference");
  T104 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLlocal_assignmentG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_62 = YPmet(FUNCODEREF(fun_62),CHKREF(lit_49),T104,ENVNUL);
  T108 = BOUNDP(YastYassignment_reference);
  if (T108 != YPfalse) {
    T107 = CHKREF(YastYassignment_reference);
  } else {
    T107 = YPfalse;
  }
  T106 = fun_62;
  T105 = CALL2(CHKREF(YPdefine_method),T107,T106);
  YastYassignment_reference = T105;
  regsym(&YastYassignment_reference,"ast","assignment-reference");
  lit_50 = YPPsym((P)"assignment-reference-setter");
  T109 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLlocal_assignmentG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_63 = YPmet(FUNCODEREF(fun_63),CHKREF(lit_50),T109,ENVNUL);
  T113 = BOUNDP(YastYassignment_reference_setter);
  if (T113 != YPfalse) {
    T112 = CHKREF(YastYassignment_reference_setter);
  } else {
    T112 = YPfalse;
  }
  T111 = fun_63;
  T110 = CALL2(CHKREF(YPdefine_method),T112,T111);
  YastYassignment_reference_setter = T110;
  regsym(&YastYassignment_reference_setter,"ast","assignment-reference-setter");
  T114 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T114,ENVNUL);
  T115 = fun_64;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLlocal_assignmentG),CHKREF(YastYassignment_reference),CHKREF(YastYassignment_reference_setter),CHKREF(YLanyG),T115);
  T117 = (P)YPpair(CHKREF(YastYLassignmentG),Ynil);
  T116 = CALL3(CHKREF(YPisa),T117,Ynil,Ynil);
  YastYLglobal_assignmentG = T116;
  regsym(&YastYLglobal_assignmentG,"ast","<global-assignment>");
  lit_51 = YPPsym((P)"assignment-binding");
  T118 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLglobal_assignmentG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_65 = YPmet(FUNCODEREF(fun_65),CHKREF(lit_51),T118,ENVNUL);
  T122 = BOUNDP(YastYassignment_binding);
  if (T122 != YPfalse) {
    T121 = CHKREF(YastYassignment_binding);
  } else {
    T121 = YPfalse;
  }
  T120 = fun_65;
  T119 = CALL2(CHKREF(YPdefine_method),T121,T120);
  YastYassignment_binding = T119;
  regsym(&YastYassignment_binding,"ast","assignment-binding");
  lit_52 = YPPsym((P)"assignment-binding-setter");
  T123 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLglobal_assignmentG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_66 = YPmet(FUNCODEREF(fun_66),CHKREF(lit_52),T123,ENVNUL);
  T127 = BOUNDP(YastYassignment_binding_setter);
  if (T127 != YPfalse) {
    T126 = CHKREF(YastYassignment_binding_setter);
  } else {
    T126 = YPfalse;
  }
  T125 = fun_66;
  T124 = CALL2(CHKREF(YPdefine_method),T126,T125);
  YastYassignment_binding_setter = T124;
  regsym(&YastYassignment_binding_setter,"ast","assignment-binding-setter");
  T128 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T128,ENVNUL);
  T129 = fun_67;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLglobal_assignmentG),CHKREF(YastYassignment_binding),CHKREF(YastYassignment_binding_setter),CHKREF(YLanyG),T129);
  T131 = (P)YPpair(CHKREF(YastYLglobal_assignmentG),Ynil);
  T130 = CALL3(CHKREF(YPisa),T131,Ynil,Ynil);
  YastYLruntime_assignmentG = T130;
  regsym(&YastYLruntime_assignmentG,"ast","<runtime-assignment>");
  T133 = (P)YPpair(CHKREF(YastYLglobal_assignmentG),Ynil);
  T132 = CALL3(CHKREF(YPisa),T133,Ynil,Ynil);
  YastYLdefinitionG = T132;
  regsym(&YastYLdefinitionG,"ast","<definition>");
  T135 = (P)YPpair(CHKREF(YastYLdefinitionG),Ynil);
  T134 = CALL3(CHKREF(YPisa),T135,Ynil,Ynil);
  YastYLvariable_definitionG = T134;
  regsym(&YastYLvariable_definitionG,"ast","<variable-definition>");
  T137 = (P)YPpair(CHKREF(YastYLdefinitionG),Ynil);
  T136 = CALL3(CHKREF(YPisa),T137,Ynil,Ynil);
  YastYLast_generic_definitionG = T136;
  regsym(&YastYLast_generic_definitionG,"ast","<ast-generic-definition>");
  T139 = (P)YPpair(CHKREF(YastYLdefinitionG),Ynil);
  T138 = CALL3(CHKREF(YPisa),T139,Ynil,Ynil);
  YastYLast_function_definitionG = T138;
  regsym(&YastYLast_function_definitionG,"ast","<ast-function-definition>");
  T141 = (P)YPpair(CHKREF(YastYLdefinitionG),Ynil);
  T140 = CALL3(CHKREF(YPisa),T141,Ynil,Ynil);
  YastYLast_method_definitionG = T140;
  regsym(&YastYLast_method_definitionG,"ast","<ast-method-definition>");
  T143 = (P)YPpair(CHKREF(YastYLdefinitionG),Ynil);
  T142 = CALL3(CHKREF(YPisa),T143,Ynil,Ynil);
  YastYLast_primitive_definitionG = T142;
  regsym(&YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
  T145 = (P)YPpair(CHKREF(YastYLdefinitionG),Ynil);
  T144 = CALL3(CHKREF(YPisa),T145,Ynil,Ynil);
  YastYLast_macro_definitionG = T144;
  regsym(&YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
  T147 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T146 = CALL3(CHKREF(YPisa),T147,Ynil,Ynil);
  YastYLast_signatureG = T146;
  regsym(&YastYLast_signatureG,"ast","<ast-signature>");
  lit_53 = YPPsym((P)"signature-bindings");
  T148 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLast_signatureG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_68 = YPmet(FUNCODEREF(fun_68),CHKREF(lit_53),T148,ENVNUL);
  T152 = BOUNDP(YastYsignature_bindings);
  if (T152 != YPfalse) {
    T151 = CHKREF(YastYsignature_bindings);
  } else {
    T151 = YPfalse;
  }
  T150 = fun_68;
  T149 = CALL2(CHKREF(YPdefine_method),T151,T150);
  YastYsignature_bindings = T149;
  regsym(&YastYsignature_bindings,"ast","signature-bindings");
  lit_54 = YPPsym((P)"signature-bindings-setter");
  T153 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLast_signatureG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_69 = YPmet(FUNCODEREF(fun_69),CHKREF(lit_54),T153,ENVNUL);
  T157 = BOUNDP(YastYsignature_bindings_setter);
  if (T157 != YPfalse) {
    T156 = CHKREF(YastYsignature_bindings_setter);
  } else {
    T156 = YPfalse;
  }
  T155 = fun_69;
  T154 = CALL2(CHKREF(YPdefine_method),T156,T155);
  YastYsignature_bindings_setter = T154;
  regsym(&YastYsignature_bindings_setter,"ast","signature-bindings-setter");
  T158 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T158,ENVNUL);
  T159 = fun_70;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLast_signatureG),CHKREF(YastYsignature_bindings),CHKREF(YastYsignature_bindings_setter),CHKREF(YLanyG),T159);
  lit_55 = YPPsym((P)"signature-names");
  T160 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLast_signatureG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_71 = YPmet(FUNCODEREF(fun_71),CHKREF(lit_55),T160,ENVNUL);
  T164 = BOUNDP(YastYsignature_names);
  if (T164 != YPfalse) {
    T163 = CHKREF(YastYsignature_names);
  } else {
    T163 = YPfalse;
  }
  T162 = fun_71;
  T161 = CALL2(CHKREF(YPdefine_method),T163,T162);
  YastYsignature_names = T161;
  regsym(&YastYsignature_names,"ast","signature-names");
  lit_56 = YPPsym((P)"signature-names-setter");
  T165 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLast_signatureG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_72 = YPmet(FUNCODEREF(fun_72),CHKREF(lit_56),T165,ENVNUL);
  T169 = BOUNDP(YastYsignature_names_setter);
  if (T169 != YPfalse) {
    T168 = CHKREF(YastYsignature_names_setter);
  } else {
    T168 = YPfalse;
  }
  T167 = fun_72;
  T166 = CALL2(CHKREF(YPdefine_method),T168,T167);
  YastYsignature_names_setter = T166;
  regsym(&YastYsignature_names_setter,"ast","signature-names-setter");
  T170 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T170,ENVNUL);
  T171 = fun_73;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLast_signatureG),CHKREF(YastYsignature_names),CHKREF(YastYsignature_names_setter),CHKREF(YLanyG),T171);
  lit_57 = YPPsym((P)"signature-specs");
  T172 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLast_signatureG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_74 = YPmet(FUNCODEREF(fun_74),CHKREF(lit_57),T172,ENVNUL);
  T176 = BOUNDP(YastYsignature_specs);
  if (T176 != YPfalse) {
    T175 = CHKREF(YastYsignature_specs);
  } else {
    T175 = YPfalse;
  }
  T174 = fun_74;
  T173 = CALL2(CHKREF(YPdefine_method),T175,T174);
  YastYsignature_specs = T173;
  regsym(&YastYsignature_specs,"ast","signature-specs");
  lit_58 = YPPsym((P)"signature-specs-setter");
  T177 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLast_signatureG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_75 = YPmet(FUNCODEREF(fun_75),CHKREF(lit_58),T177,ENVNUL);
  T181 = BOUNDP(YastYsignature_specs_setter);
  if (T181 != YPfalse) {
    T180 = CHKREF(YastYsignature_specs_setter);
  } else {
    T180 = YPfalse;
  }
  T179 = fun_75;
  T178 = CALL2(CHKREF(YPdefine_method),T180,T179);
  YastYsignature_specs_setter = T178;
  regsym(&YastYsignature_specs_setter,"ast","signature-specs-setter");
  T182 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T182,ENVNUL);
  T183 = fun_76;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLast_signatureG),CHKREF(YastYsignature_specs),CHKREF(YastYsignature_specs_setter),CHKREF(YLanyG),T183);
  lit_59 = YPPsym((P)"signature-nary?");
  T184 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLast_signatureG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_77 = YPmet(FUNCODEREF(fun_77),CHKREF(lit_59),T184,ENVNUL);
  T188 = BOUNDP(YastYsignature_naryQ);
  if (T188 != YPfalse) {
    T187 = CHKREF(YastYsignature_naryQ);
  } else {
    T187 = YPfalse;
  }
  T186 = fun_77;
  T185 = CALL2(CHKREF(YPdefine_method),T187,T186);
  YastYsignature_naryQ = T185;
  regsym(&YastYsignature_naryQ,"ast","signature-nary?");
  lit_60 = YPPsym((P)"signature-nary?-setter");
  T189 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLast_signatureG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_78 = YPmet(FUNCODEREF(fun_78),CHKREF(lit_60),T189,ENVNUL);
  T193 = BOUNDP(YastYsignature_naryQ_setter);
  if (T193 != YPfalse) {
    T192 = CHKREF(YastYsignature_naryQ_setter);
  } else {
    T192 = YPfalse;
  }
  T191 = fun_78;
  T190 = CALL2(CHKREF(YPdefine_method),T192,T191);
  YastYsignature_naryQ_setter = T190;
  regsym(&YastYsignature_naryQ_setter,"ast","signature-nary?-setter");
  T194 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T194,ENVNUL);
  T195 = fun_79;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLast_signatureG),CHKREF(YastYsignature_naryQ),CHKREF(YastYsignature_naryQ_setter),CHKREF(YLanyG),T195);
  lit_61 = YPPsym((P)"signature-value");
  T196 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLast_signatureG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_80 = YPmet(FUNCODEREF(fun_80),CHKREF(lit_61),T196,ENVNUL);
  T200 = BOUNDP(YastYsignature_value);
  if (T200 != YPfalse) {
    T199 = CHKREF(YastYsignature_value);
  } else {
    T199 = YPfalse;
  }
  T198 = fun_80;
  T197 = CALL2(CHKREF(YPdefine_method),T199,T198);
  YastYsignature_value = T197;
  regsym(&YastYsignature_value,"ast","signature-value");
  lit_62 = YPPsym((P)"signature-value-setter");
  T201 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLast_signatureG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_81 = YPmet(FUNCODEREF(fun_81),CHKREF(lit_62),T201,ENVNUL);
  T205 = BOUNDP(YastYsignature_value_setter);
  if (T205 != YPfalse) {
    T204 = CHKREF(YastYsignature_value_setter);
  } else {
    T204 = YPfalse;
  }
  T203 = fun_81;
  T202 = CALL2(CHKREF(YPdefine_method),T204,T203);
  YastYsignature_value_setter = T202;
  regsym(&YastYsignature_value_setter,"ast","signature-value-setter");
  T206 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T206,ENVNUL);
  T207 = fun_82;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLast_signatureG),CHKREF(YastYsignature_value),CHKREF(YastYsignature_value_setter),CHKREF(YLanyG),T207);
  T209 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T208 = CALL3(CHKREF(YPisa),T209,Ynil,Ynil);
  YastYLast_functionG = T208;
  regsym(&YastYLast_functionG,"ast","<ast-function>");
  lit_63 = YPPsym((P)"function-binding");
  T212 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLast_functionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  T211 = fun_83 = YPmet(FUNCODEREF(fun_83),CHKREF(lit_63),T212,ENVNUL);
  T217 = BOUNDP(YastYfunction_binding);
  if (T217 != YPfalse) {
    T216 = CHKREF(YastYfunction_binding);
  } else {
    T216 = YPfalse;
  }
  T215 = fun_83;
  T214 = CALL2(CHKREF(YPdefine_method),T216,T215);
  T213 = YastYfunction_binding = T214;
  regsym(&YastYfunction_binding,"ast","function-binding");
  T210 = T213;
  return T210;
}

P YastY___main_2___() {
  P T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223;
  P T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207;
  P T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191;
  P T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175;
  P T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159;
  P T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143;
  P T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127;
  P T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111;
  P T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95;
  P T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79;
  P T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63;
  P T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47;
  P T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_64 = YPPsym((P)"function-binding-setter");
  T0 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLast_functionG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_84 = YPmet(FUNCODEREF(fun_84),CHKREF(lit_64),T0,ENVNUL);
  T4 = BOUNDP(YastYfunction_binding_setter);
  if (T4 != YPfalse) {
    T3 = CHKREF(YastYfunction_binding_setter);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_84;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YastYfunction_binding_setter = T1;
  regsym(&YastYfunction_binding_setter,"ast","function-binding-setter");
  T5 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T5,ENVNUL);
  T6 = fun_85;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLast_functionG),CHKREF(YastYfunction_binding),CHKREF(YastYfunction_binding_setter),CHKREF(YLanyG),T6);
  lit_65 = YPPsym((P)"function-debug-name");
  T7 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLast_functionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_86 = YPmet(FUNCODEREF(fun_86),CHKREF(lit_65),T7,ENVNUL);
  T11 = BOUNDP(YastYfunction_debug_name);
  if (T11 != YPfalse) {
    T10 = CHKREF(YastYfunction_debug_name);
  } else {
    T10 = YPfalse;
  }
  T9 = fun_86;
  T8 = CALL2(CHKREF(YPdefine_method),T10,T9);
  YastYfunction_debug_name = T8;
  regsym(&YastYfunction_debug_name,"ast","function-debug-name");
  lit_66 = YPPsym((P)"function-debug-name-setter");
  T12 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLast_functionG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_87 = YPmet(FUNCODEREF(fun_87),CHKREF(lit_66),T12,ENVNUL);
  T16 = BOUNDP(YastYfunction_debug_name_setter);
  if (T16 != YPfalse) {
    T15 = CHKREF(YastYfunction_debug_name_setter);
  } else {
    T15 = YPfalse;
  }
  T14 = fun_87;
  T13 = CALL2(CHKREF(YPdefine_method),T15,T14);
  YastYfunction_debug_name_setter = T13;
  regsym(&YastYfunction_debug_name_setter,"ast","function-debug-name-setter");
  T17 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T17,ENVNUL);
  T18 = fun_88;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLast_functionG),CHKREF(YastYfunction_debug_name),CHKREF(YastYfunction_debug_name_setter),CHKREF(YLanyG),T18);
  lit_67 = YPPsym((P)"function-signature");
  T19 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLast_functionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_89 = YPmet(FUNCODEREF(fun_89),CHKREF(lit_67),T19,ENVNUL);
  T23 = BOUNDP(YastYfunction_signature);
  if (T23 != YPfalse) {
    T22 = CHKREF(YastYfunction_signature);
  } else {
    T22 = YPfalse;
  }
  T21 = fun_89;
  T20 = CALL2(CHKREF(YPdefine_method),T22,T21);
  YastYfunction_signature = T20;
  regsym(&YastYfunction_signature,"ast","function-signature");
  lit_68 = YPPsym((P)"function-signature-setter");
  T24 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLast_functionG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_90 = YPmet(FUNCODEREF(fun_90),CHKREF(lit_68),T24,ENVNUL);
  T28 = BOUNDP(YastYfunction_signature_setter);
  if (T28 != YPfalse) {
    T27 = CHKREF(YastYfunction_signature_setter);
  } else {
    T27 = YPfalse;
  }
  T26 = fun_90;
  T25 = CALL2(CHKREF(YPdefine_method),T27,T26);
  YastYfunction_signature_setter = T25;
  regsym(&YastYfunction_signature_setter,"ast","function-signature-setter");
  T29 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T29,ENVNUL);
  T30 = fun_91;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLast_functionG),CHKREF(YastYfunction_signature),CHKREF(YastYfunction_signature_setter),CHKREF(YLanyG),T30);
  lit_69 = YPPsym((P)"function-bindings");
  T31 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YastYLast_functionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YastYfunction_bindings = YPmet(FUNCODEREF(YastYfunction_bindings),CHKREF(lit_69),T31,ENVNUL);
  T32 = YastYfunction_bindings;
  YastYfunction_bindings = T32;
  regsym(&YastYfunction_bindings,"ast","function-bindings");
  lit_70 = YPPsym((P)"function-specs");
  T33 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YastYLast_functionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YastYfunction_specs = YPmet(FUNCODEREF(YastYfunction_specs),CHKREF(lit_70),T33,ENVNUL);
  T34 = YastYfunction_specs;
  YastYfunction_specs = T34;
  regsym(&YastYfunction_specs,"ast","function-specs");
  lit_71 = YPPsym((P)"function-nary?");
  T35 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YastYLast_functionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YastYfunction_naryQ = YPmet(FUNCODEREF(YastYfunction_naryQ),CHKREF(lit_71),T35,ENVNUL);
  T36 = YastYfunction_naryQ;
  YastYfunction_naryQ = T36;
  regsym(&YastYfunction_naryQ,"ast","function-nary?");
  lit_72 = YPPsym((P)"function-value");
  T37 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YastYLast_functionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YastYfunction_value = YPmet(FUNCODEREF(YastYfunction_value),CHKREF(lit_72),T37,ENVNUL);
  T38 = YastYfunction_value;
  YastYfunction_value = T38;
  regsym(&YastYfunction_value,"ast","function-value");
  lit_73 = YPPsym((P)"function-kind");
  lit_74 = YPsb((P)"FUN");
  T39 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YastYLast_functionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_96 = YPmet(FUNCODEREF(fun_96),CHKREF(lit_73),T39,ENVNUL);
  T43 = BOUNDP(YastYfunction_kind);
  if (T43 != YPfalse) {
    T42 = CHKREF(YastYfunction_kind);
  } else {
    T42 = YPfalse;
  }
  T41 = fun_96;
  T40 = CALL2(CHKREF(YPdefine_method),T42,T41);
  YastYfunction_kind = T40;
  regsym(&YastYfunction_kind,"ast","function-kind");
  T45 = (P)YPpair(CHKREF(YastYLast_functionG),Ynil);
  T44 = CALL3(CHKREF(YPisa),T45,Ynil,Ynil);
  YastYLast_methodG = T44;
  regsym(&YastYLast_methodG,"ast","<ast-method>");
  lit_75 = YPPsym((P)"function-body");
  T46 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLast_methodG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_97 = YPmet(FUNCODEREF(fun_97),CHKREF(lit_75),T46,ENVNUL);
  T50 = BOUNDP(YastYfunction_body);
  if (T50 != YPfalse) {
    T49 = CHKREF(YastYfunction_body);
  } else {
    T49 = YPfalse;
  }
  T48 = fun_97;
  T47 = CALL2(CHKREF(YPdefine_method),T49,T48);
  YastYfunction_body = T47;
  regsym(&YastYfunction_body,"ast","function-body");
  lit_76 = YPPsym((P)"function-body-setter");
  T51 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLast_methodG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_98 = YPmet(FUNCODEREF(fun_98),CHKREF(lit_76),T51,ENVNUL);
  T55 = BOUNDP(YastYfunction_body_setter);
  if (T55 != YPfalse) {
    T54 = CHKREF(YastYfunction_body_setter);
  } else {
    T54 = YPfalse;
  }
  T53 = fun_98;
  T52 = CALL2(CHKREF(YPdefine_method),T54,T53);
  YastYfunction_body_setter = T52;
  regsym(&YastYfunction_body_setter,"ast","function-body-setter");
  T56 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_99 = YPmet(FUNCODEREF(fun_99),YPfalse,T56,ENVNUL);
  T57 = fun_99;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLast_methodG),CHKREF(YastYfunction_body),CHKREF(YastYfunction_body_setter),CHKREF(YLanyG),T57);
  lit_77 = YPsb((P)"MET");
  T58 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YastYLast_methodG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_100 = YPmet(FUNCODEREF(fun_100),CHKREF(lit_73),T58,ENVNUL);
  T62 = BOUNDP(YastYfunction_kind);
  if (T62 != YPfalse) {
    T61 = CHKREF(YastYfunction_kind);
  } else {
    T61 = YPfalse;
  }
  T60 = fun_100;
  T59 = CALL2(CHKREF(YPdefine_method),T61,T60);
  YastYfunction_kind = T59;
  regsym(&YastYfunction_kind,"ast","function-kind");
  T64 = (P)YPpair(CHKREF(YastYLast_methodG),Ynil);
  T63 = CALL3(CHKREF(YPisa),T64,Ynil,Ynil);
  YastYLast_primitiveG = T63;
  regsym(&YastYLast_primitiveG,"ast","<ast-primitive>");
  lit_78 = YPsb((P)"PRM");
  T65 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YastYLast_primitiveG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_101 = YPmet(FUNCODEREF(fun_101),CHKREF(lit_73),T65,ENVNUL);
  T69 = BOUNDP(YastYfunction_kind);
  if (T69 != YPfalse) {
    T68 = CHKREF(YastYfunction_kind);
  } else {
    T68 = YPfalse;
  }
  T67 = fun_101;
  T66 = CALL2(CHKREF(YPdefine_method),T68,T67);
  YastYfunction_kind = T66;
  regsym(&YastYfunction_kind,"ast","function-kind");
  T71 = (P)YPpair(CHKREF(YastYLast_functionG),Ynil);
  T70 = CALL3(CHKREF(YPisa),T71,Ynil,Ynil);
  YastYLast_genericG = T70;
  regsym(&YastYLast_genericG,"ast","<ast-generic>");
  lit_79 = YPsb((P)"GEN");
  T72 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YastYLast_genericG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_102 = YPmet(FUNCODEREF(fun_102),CHKREF(lit_73),T72,ENVNUL);
  T76 = BOUNDP(YastYfunction_kind);
  if (T76 != YPfalse) {
    T75 = CHKREF(YastYfunction_kind);
  } else {
    T75 = YPfalse;
  }
  T74 = fun_102;
  T73 = CALL2(CHKREF(YPdefine_method),T75,T74);
  YastYfunction_kind = T73;
  regsym(&YastYfunction_kind,"ast","function-kind");
  T78 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T77 = CALL3(CHKREF(YPisa),T78,Ynil,Ynil);
  YastYLalternativeG = T77;
  regsym(&YastYLalternativeG,"ast","<alternative>");
  lit_80 = YPPsym((P)"alternative-condition");
  T79 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLalternativeG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_103 = YPmet(FUNCODEREF(fun_103),CHKREF(lit_80),T79,ENVNUL);
  T83 = BOUNDP(YastYalternative_condition);
  if (T83 != YPfalse) {
    T82 = CHKREF(YastYalternative_condition);
  } else {
    T82 = YPfalse;
  }
  T81 = fun_103;
  T80 = CALL2(CHKREF(YPdefine_method),T82,T81);
  YastYalternative_condition = T80;
  regsym(&YastYalternative_condition,"ast","alternative-condition");
  lit_81 = YPPsym((P)"alternative-condition-setter");
  T84 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLalternativeG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_104 = YPmet(FUNCODEREF(fun_104),CHKREF(lit_81),T84,ENVNUL);
  T88 = BOUNDP(YastYalternative_condition_setter);
  if (T88 != YPfalse) {
    T87 = CHKREF(YastYalternative_condition_setter);
  } else {
    T87 = YPfalse;
  }
  T86 = fun_104;
  T85 = CALL2(CHKREF(YPdefine_method),T87,T86);
  YastYalternative_condition_setter = T85;
  regsym(&YastYalternative_condition_setter,"ast","alternative-condition-setter");
  T89 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T89,ENVNUL);
  T90 = fun_105;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLalternativeG),CHKREF(YastYalternative_condition),CHKREF(YastYalternative_condition_setter),CHKREF(YLanyG),T90);
  lit_82 = YPPsym((P)"alternative-consequent");
  T91 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLalternativeG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_106 = YPmet(FUNCODEREF(fun_106),CHKREF(lit_82),T91,ENVNUL);
  T95 = BOUNDP(YastYalternative_consequent);
  if (T95 != YPfalse) {
    T94 = CHKREF(YastYalternative_consequent);
  } else {
    T94 = YPfalse;
  }
  T93 = fun_106;
  T92 = CALL2(CHKREF(YPdefine_method),T94,T93);
  YastYalternative_consequent = T92;
  regsym(&YastYalternative_consequent,"ast","alternative-consequent");
  lit_83 = YPPsym((P)"alternative-consequent-setter");
  T96 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLalternativeG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_107 = YPmet(FUNCODEREF(fun_107),CHKREF(lit_83),T96,ENVNUL);
  T100 = BOUNDP(YastYalternative_consequent_setter);
  if (T100 != YPfalse) {
    T99 = CHKREF(YastYalternative_consequent_setter);
  } else {
    T99 = YPfalse;
  }
  T98 = fun_107;
  T97 = CALL2(CHKREF(YPdefine_method),T99,T98);
  YastYalternative_consequent_setter = T97;
  regsym(&YastYalternative_consequent_setter,"ast","alternative-consequent-setter");
  T101 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T101,ENVNUL);
  T102 = fun_108;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLalternativeG),CHKREF(YastYalternative_consequent),CHKREF(YastYalternative_consequent_setter),CHKREF(YLanyG),T102);
  lit_84 = YPPsym((P)"alternative-alternant");
  T103 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLalternativeG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_109 = YPmet(FUNCODEREF(fun_109),CHKREF(lit_84),T103,ENVNUL);
  T107 = BOUNDP(YastYalternative_alternant);
  if (T107 != YPfalse) {
    T106 = CHKREF(YastYalternative_alternant);
  } else {
    T106 = YPfalse;
  }
  T105 = fun_109;
  T104 = CALL2(CHKREF(YPdefine_method),T106,T105);
  YastYalternative_alternant = T104;
  regsym(&YastYalternative_alternant,"ast","alternative-alternant");
  lit_85 = YPPsym((P)"alternative-alternant-setter");
  T108 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLalternativeG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_110 = YPmet(FUNCODEREF(fun_110),CHKREF(lit_85),T108,ENVNUL);
  T112 = BOUNDP(YastYalternative_alternant_setter);
  if (T112 != YPfalse) {
    T111 = CHKREF(YastYalternative_alternant_setter);
  } else {
    T111 = YPfalse;
  }
  T110 = fun_110;
  T109 = CALL2(CHKREF(YPdefine_method),T111,T110);
  YastYalternative_alternant_setter = T109;
  regsym(&YastYalternative_alternant_setter,"ast","alternative-alternant-setter");
  T113 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T113,ENVNUL);
  T114 = fun_111;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLalternativeG),CHKREF(YastYalternative_alternant),CHKREF(YastYalternative_alternant_setter),CHKREF(YLanyG),T114);
  T116 = (P)YPpair(CHKREF(YastYLpassive_programG),Ynil);
  T115 = CALL3(CHKREF(YPisa),T116,Ynil,Ynil);
  YastYLprogramsG = T115;
  regsym(&YastYLprogramsG,"ast","<programs>");
  lit_86 = YPPsym((P)"exp");
  lit_87 = YPPsym((P)"return");
  lit_88 = YPPsym((P)"=>");
  lit_89 = YPPsym((P)"e");
  lit_90 = YPPsym((P)"empty");
  lit_91 = YPPsym((P)"dm");
  lit_92 = YPPsym((P)"t");
  lit_93 = YPPsym((P)"tail");
  lit_94 = YPPsym((P)"set");
  lit_95 = YPPsym((P)"h");
  lit_96 = YPPsym((P)"head");
  lit_97 = YPPsym((P)"isa");
  lit_98 = YPPsym((P)"df");
  lit_99 = YPPsym((P)"pair");
  lit_100 = YPPsym((P)"fabs");
  lit_101 = YPPsym((P)"apply");
  lit_102 = YPPsym((P)"<lst>");
  lit_103 = YPPsym((P)"p");
  lit_104 = YPPsym((P)"as");
  lit_105 = YPPsym((P)"lst");
  lit_106 = YPPsym((P)"dv");
  lit_107 = YPPsym((P)"seq");
  lit_108 = YPsb((P)"-empty");
  lit_109 = YPsb((P)"$");
  lit_110 = YPsb((P)">");
  lit_111 = YPsb((P)"<");
  lit_112 = YPsb((P)"Match Pattern Failure");
  lit_113 = YPPsym((P)"def-list");
  lit_114 = YPPsym((P)"x-1240");
  lit_115 = YPPsym((P)"args");
  lit_116 = YPPsym((P)"msg");
  T119 = YPsig(YPPlist(2,CHKREF(lit_116),CHKREF(lit_115)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1240_112 = YPmet(FUNCODEREF(fun_x_1240_112),CHKREF(lit_114),T119,ENVNUL);
  T118 = YPsig(YPPlist(1,CHKREF(lit_87)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_113 = YPmet(FUNCODEREF(fun_113),YPfalse,T118,ENVNUL);
  T117 = YPsig(YPPlist(1,CHKREF(lit_86)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_114 = YPmet(FUNCODEREF(fun_114),YPfalse,T117,ENVNUL);
  T120 = fun_114;
  YPmacro(YPPsym((P)"ast"),YPPsym((P)"def-list"),T120);
  lit_117 = YPPsym((P)"<programs>");
  lit_118 = YPPsym((P)"def-programs");
  lit_119 = YPPsym((P)"x-1244");
  T123 = YPsig(YPPlist(2,CHKREF(lit_116),CHKREF(lit_115)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1244_115 = YPmet(FUNCODEREF(fun_x_1244_115),CHKREF(lit_119),T123,ENVNUL);
  T122 = YPsig(YPPlist(1,CHKREF(lit_87)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_116 = YPmet(FUNCODEREF(fun_116),YPfalse,T122,ENVNUL);
  T121 = YPsig(YPPlist(1,CHKREF(lit_86)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_117 = YPmet(FUNCODEREF(fun_117),YPfalse,T121,ENVNUL);
  T124 = fun_117;
  YPmacro(YPPsym((P)"ast"),YPPsym((P)"def-programs"),T124);
  T127 = (P)YPpair(CHKREF(YastYLprogramsG),Ynil);
  T126 = (P)YPpair(CHKREF(YLlstG),T127);
  T125 = CALL3(CHKREF(YPisa),T126,Ynil,Ynil);
  YastYLsequentialG = T125;
  regsym(&YastYLsequentialG,"ast","<sequential>");
  T133 = (P)YPpair(CHKREF(YastYLsequentialG),Ynil);
  T132 = (P)YPpair(CHKREF(Ytail),Ynil);
  T131 = (P)YPpair(CHKREF(Yhead),T132);
  T130 = (P)YPpair(YPfalse,Ynil);
  T129 = (P)YPpair(YPfalse,T130);
  T128 = CALL3(CHKREF(YPisa),T133,T131,T129);
  YastYDsequential_empty = T128;
  regsym(&YastYDsequential_empty,"ast","$sequential-empty");
  T134 = YPsig(YPPlist(2,CHKREF(lit_103),CHKREF(lit_9)),YPPlist(2,CHKREF(YastYLsequentialG),CHKREF(YastYLsequentialG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_118 = YPmet(FUNCODEREF(fun_118),CHKREF(lit_104),T134,ENVNUL);
  T138 = BOUNDP(YruntimeYas);
  if (T138 != YPfalse) {
    T137 = CHKREF(YruntimeYas);
  } else {
    T137 = YPfalse;
  }
  T136 = fun_118;
  T135 = CALL2(CHKREF(YPdefine_method),T137,T136);
  YruntimeYas = T135;
  regsym(&YruntimeYas,"runtime","as");
  T139 = YPsig(YPPlist(2,CHKREF(lit_103),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YastYLsequentialG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_119 = YPmet(FUNCODEREF(fun_119),CHKREF(lit_104),T139,ENVNUL);
  T143 = BOUNDP(YruntimeYas);
  if (T143 != YPfalse) {
    T142 = CHKREF(YruntimeYas);
  } else {
    T142 = YPfalse;
  }
  T141 = fun_119;
  T140 = CALL2(CHKREF(YPdefine_method),T142,T141);
  YruntimeYas = T140;
  regsym(&YruntimeYas,"runtime","as");
  T144 = YPsig(YPPlist(2,CHKREF(lit_103),CHKREF(lit_9)),YPPlist(2,CHKREF(YastYLsequentialG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_120 = YPmet(FUNCODEREF(fun_120),CHKREF(lit_104),T144,ENVNUL);
  T148 = BOUNDP(YruntimeYas);
  if (T148 != YPfalse) {
    T147 = CHKREF(YruntimeYas);
  } else {
    T147 = YPfalse;
  }
  T146 = fun_120;
  T145 = CALL2(CHKREF(YPdefine_method),T147,T146);
  YruntimeYas = T145;
  regsym(&YruntimeYas,"runtime","as");
  lit_120 = YPPsym((P)"sequential");
  T149 = YPsig(YPPlist(2,CHKREF(lit_95),CHKREF(lit_92)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYsequential = YPmet(FUNCODEREF(YastYsequential),CHKREF(lit_120),T149,ENVNUL);
  T150 = YastYsequential;
  YastYsequential = T150;
  regsym(&YastYsequential,"ast","sequential");
  T151 = YPsig(YPPlist(1,CHKREF(lit_89)),YPPlist(1,CHKREF(YastYLsequentialG)),YPfalse,YPint((P)1),CHKREF(YastYLsequentialG));
  fun_122 = YPmet(FUNCODEREF(fun_122),CHKREF(lit_90),T151,ENVNUL);
  T155 = BOUNDP(YruntimeYempty);
  if (T155 != YPfalse) {
    T154 = CHKREF(YruntimeYempty);
  } else {
    T154 = YPfalse;
  }
  T153 = fun_122;
  T152 = CALL2(CHKREF(YPdefine_method),T154,T153);
  YruntimeYempty = T152;
  regsym(&YruntimeYempty,"runtime","empty");
  T157 = (P)YPpair(CHKREF(YastYLpassive_programG),Ynil);
  T156 = CALL3(CHKREF(YPisa),T157,Ynil,Ynil);
  YastYLconstantG = T156;
  regsym(&YastYLconstantG,"ast","<constant>");
  lit_121 = YPPsym((P)"constant-value");
  T158 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLconstantG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_123 = YPmet(FUNCODEREF(fun_123),CHKREF(lit_121),T158,ENVNUL);
  T162 = BOUNDP(YastYconstant_value);
  if (T162 != YPfalse) {
    T161 = CHKREF(YastYconstant_value);
  } else {
    T161 = YPfalse;
  }
  T160 = fun_123;
  T159 = CALL2(CHKREF(YPdefine_method),T161,T160);
  YastYconstant_value = T159;
  regsym(&YastYconstant_value,"ast","constant-value");
  lit_122 = YPPsym((P)"constant-value-setter");
  T163 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLconstantG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_124 = YPmet(FUNCODEREF(fun_124),CHKREF(lit_122),T163,ENVNUL);
  T167 = BOUNDP(YastYconstant_value_setter);
  if (T167 != YPfalse) {
    T166 = CHKREF(YastYconstant_value_setter);
  } else {
    T166 = YPfalse;
  }
  T165 = fun_124;
  T164 = CALL2(CHKREF(YPdefine_method),T166,T165);
  YastYconstant_value_setter = T164;
  regsym(&YastYconstant_value_setter,"ast","constant-value-setter");
  T168 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_125 = YPmet(FUNCODEREF(fun_125),YPfalse,T168,ENVNUL);
  T169 = fun_125;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLconstantG),CHKREF(YastYconstant_value),CHKREF(YastYconstant_value_setter),CHKREF(YLanyG),T169);
  T171 = (P)YPpair(CHKREF(YastYLconstantG),Ynil);
  T170 = CALL3(CHKREF(YPisa),T171,Ynil,Ynil);
  YastYLraw_constantG = T170;
  regsym(&YastYLraw_constantG,"ast","<raw-constant>");
  T173 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T172 = CALL3(CHKREF(YPisa),T173,Ynil,Ynil);
  YastYLapplicationG = T172;
  regsym(&YastYLapplicationG,"ast","<application>");
  lit_123 = YPPsym((P)"application-arguments");
  T174 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLapplicationG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_126 = YPmet(FUNCODEREF(fun_126),CHKREF(lit_123),T174,ENVNUL);
  T178 = BOUNDP(YastYapplication_arguments);
  if (T178 != YPfalse) {
    T177 = CHKREF(YastYapplication_arguments);
  } else {
    T177 = YPfalse;
  }
  T176 = fun_126;
  T175 = CALL2(CHKREF(YPdefine_method),T177,T176);
  YastYapplication_arguments = T175;
  regsym(&YastYapplication_arguments,"ast","application-arguments");
  lit_124 = YPPsym((P)"application-arguments-setter");
  T179 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLapplicationG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_127 = YPmet(FUNCODEREF(fun_127),CHKREF(lit_124),T179,ENVNUL);
  T183 = BOUNDP(YastYapplication_arguments_setter);
  if (T183 != YPfalse) {
    T182 = CHKREF(YastYapplication_arguments_setter);
  } else {
    T182 = YPfalse;
  }
  T181 = fun_127;
  T180 = CALL2(CHKREF(YPdefine_method),T182,T181);
  YastYapplication_arguments_setter = T180;
  regsym(&YastYapplication_arguments_setter,"ast","application-arguments-setter");
  T184 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_128 = YPmet(FUNCODEREF(fun_128),YPfalse,T184,ENVNUL);
  T185 = fun_128;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLapplicationG),CHKREF(YastYapplication_arguments),CHKREF(YastYapplication_arguments_setter),CHKREF(YLanyG),T185);
  lit_125 = YPPsym((P)"application-tail?");
  T186 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLapplicationG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_129 = YPmet(FUNCODEREF(fun_129),CHKREF(lit_125),T186,ENVNUL);
  T190 = BOUNDP(YastYapplication_tailQ);
  if (T190 != YPfalse) {
    T189 = CHKREF(YastYapplication_tailQ);
  } else {
    T189 = YPfalse;
  }
  T188 = fun_129;
  T187 = CALL2(CHKREF(YPdefine_method),T189,T188);
  YastYapplication_tailQ = T187;
  regsym(&YastYapplication_tailQ,"ast","application-tail?");
  lit_126 = YPPsym((P)"application-tail?-setter");
  T191 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLapplicationG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_130 = YPmet(FUNCODEREF(fun_130),CHKREF(lit_126),T191,ENVNUL);
  T195 = BOUNDP(YastYapplication_tailQ_setter);
  if (T195 != YPfalse) {
    T194 = CHKREF(YastYapplication_tailQ_setter);
  } else {
    T194 = YPfalse;
  }
  T193 = fun_130;
  T192 = CALL2(CHKREF(YPdefine_method),T194,T193);
  YastYapplication_tailQ_setter = T192;
  regsym(&YastYapplication_tailQ_setter,"ast","application-tail?-setter");
  T196 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_131 = YPmet(FUNCODEREF(fun_131),YPfalse,T196,ENVNUL);
  T197 = fun_131;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLapplicationG),CHKREF(YastYapplication_tailQ),CHKREF(YastYapplication_tailQ_setter),CHKREF(YLanyG),T197);
  T199 = (P)YPpair(CHKREF(YastYLapplicationG),Ynil);
  T198 = CALL3(CHKREF(YPisa),T199,Ynil,Ynil);
  YastYLregular_applicationG = T198;
  regsym(&YastYLregular_applicationG,"ast","<regular-application>");
  lit_127 = YPPsym((P)"application-function");
  T200 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLregular_applicationG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_132 = YPmet(FUNCODEREF(fun_132),CHKREF(lit_127),T200,ENVNUL);
  T204 = BOUNDP(YastYapplication_function);
  if (T204 != YPfalse) {
    T203 = CHKREF(YastYapplication_function);
  } else {
    T203 = YPfalse;
  }
  T202 = fun_132;
  T201 = CALL2(CHKREF(YPdefine_method),T203,T202);
  YastYapplication_function = T201;
  regsym(&YastYapplication_function,"ast","application-function");
  lit_128 = YPPsym((P)"application-function-setter");
  T205 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLregular_applicationG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_133 = YPmet(FUNCODEREF(fun_133),CHKREF(lit_128),T205,ENVNUL);
  T209 = BOUNDP(YastYapplication_function_setter);
  if (T209 != YPfalse) {
    T208 = CHKREF(YastYapplication_function_setter);
  } else {
    T208 = YPfalse;
  }
  T207 = fun_133;
  T206 = CALL2(CHKREF(YPdefine_method),T208,T207);
  YastYapplication_function_setter = T206;
  regsym(&YastYapplication_function_setter,"ast","application-function-setter");
  T210 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_134 = YPmet(FUNCODEREF(fun_134),YPfalse,T210,ENVNUL);
  T211 = fun_134;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLregular_applicationG),CHKREF(YastYapplication_function),CHKREF(YastYapplication_function_setter),CHKREF(YLanyG),T211);
  lit_129 = YPPsym((P)"application-known?");
  T212 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLregular_applicationG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_135 = YPmet(FUNCODEREF(fun_135),CHKREF(lit_129),T212,ENVNUL);
  T216 = BOUNDP(YastYapplication_knownQ);
  if (T216 != YPfalse) {
    T215 = CHKREF(YastYapplication_knownQ);
  } else {
    T215 = YPfalse;
  }
  T214 = fun_135;
  T213 = CALL2(CHKREF(YPdefine_method),T215,T214);
  YastYapplication_knownQ = T213;
  regsym(&YastYapplication_knownQ,"ast","application-known?");
  lit_130 = YPPsym((P)"application-known?-setter");
  T217 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLregular_applicationG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_136 = YPmet(FUNCODEREF(fun_136),CHKREF(lit_130),T217,ENVNUL);
  T221 = BOUNDP(YastYapplication_knownQ_setter);
  if (T221 != YPfalse) {
    T220 = CHKREF(YastYapplication_knownQ_setter);
  } else {
    T220 = YPfalse;
  }
  T219 = fun_136;
  T218 = CALL2(CHKREF(YPdefine_method),T220,T219);
  YastYapplication_knownQ_setter = T218;
  regsym(&YastYapplication_knownQ_setter,"ast","application-known?-setter");
  T222 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_137 = YPmet(FUNCODEREF(fun_137),YPfalse,T222,ENVNUL);
  T223 = fun_137;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLregular_applicationG),CHKREF(YastYapplication_knownQ),CHKREF(YastYapplication_knownQ_setter),CHKREF(YLanyG),T223);
  T225 = (P)YPpair(CHKREF(YastYLapplicationG),Ynil);
  T224 = CALL3(CHKREF(YPisa),T225,Ynil,Ynil);
  YastYLpredefined_applicationG = T224;
  regsym(&YastYLpredefined_applicationG,"ast","<predefined-application>");
  lit_131 = YPPsym((P)"application-binding");
  T226 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLpredefined_applicationG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_138 = YPmet(FUNCODEREF(fun_138),CHKREF(lit_131),T226,ENVNUL);
  T230 = BOUNDP(YastYapplication_binding);
  if (T230 != YPfalse) {
    T229 = CHKREF(YastYapplication_binding);
  } else {
    T229 = YPfalse;
  }
  T228 = fun_138;
  T227 = CALL2(CHKREF(YPdefine_method),T229,T228);
  YastYapplication_binding = T227;
  regsym(&YastYapplication_binding,"ast","application-binding");
  lit_132 = YPPsym((P)"application-binding-setter");
  T233 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLpredefined_applicationG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  T232 = fun_139 = YPmet(FUNCODEREF(fun_139),CHKREF(lit_132),T233,ENVNUL);
  T238 = BOUNDP(YastYapplication_binding_setter);
  if (T238 != YPfalse) {
    T237 = CHKREF(YastYapplication_binding_setter);
  } else {
    T237 = YPfalse;
  }
  T236 = fun_139;
  T235 = CALL2(CHKREF(YPdefine_method),T237,T236);
  T234 = YastYapplication_binding_setter = T235;
  regsym(&YastYapplication_binding_setter,"ast","application-binding-setter");
  T231 = T234;
  return T231;
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
  T0 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_140 = YPmet(FUNCODEREF(fun_140),YPfalse,T0,ENVNUL);
  T1 = fun_140;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLpredefined_applicationG),CHKREF(YastYapplication_binding),CHKREF(YastYapplication_binding_setter),CHKREF(YLanyG),T1);
  T3 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T2 = CALL3(CHKREF(YPisa),T3,Ynil,Ynil);
  YastYLfix_letG = T2;
  regsym(&YastYLfix_letG,"ast","<fix-let>");
  lit_133 = YPPsym((P)"fix-let-bindings");
  T4 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLfix_letG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_141 = YPmet(FUNCODEREF(fun_141),CHKREF(lit_133),T4,ENVNUL);
  T8 = BOUNDP(YastYfix_let_bindings);
  if (T8 != YPfalse) {
    T7 = CHKREF(YastYfix_let_bindings);
  } else {
    T7 = YPfalse;
  }
  T6 = fun_141;
  T5 = CALL2(CHKREF(YPdefine_method),T7,T6);
  YastYfix_let_bindings = T5;
  regsym(&YastYfix_let_bindings,"ast","fix-let-bindings");
  lit_134 = YPPsym((P)"fix-let-bindings-setter");
  T9 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLfix_letG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_142 = YPmet(FUNCODEREF(fun_142),CHKREF(lit_134),T9,ENVNUL);
  T13 = BOUNDP(YastYfix_let_bindings_setter);
  if (T13 != YPfalse) {
    T12 = CHKREF(YastYfix_let_bindings_setter);
  } else {
    T12 = YPfalse;
  }
  T11 = fun_142;
  T10 = CALL2(CHKREF(YPdefine_method),T12,T11);
  YastYfix_let_bindings_setter = T10;
  regsym(&YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
  T14 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_143 = YPmet(FUNCODEREF(fun_143),YPfalse,T14,ENVNUL);
  T15 = fun_143;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLfix_letG),CHKREF(YastYfix_let_bindings),CHKREF(YastYfix_let_bindings_setter),CHKREF(YLanyG),T15);
  lit_135 = YPPsym((P)"fix-let-types");
  T16 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLfix_letG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_144 = YPmet(FUNCODEREF(fun_144),CHKREF(lit_135),T16,ENVNUL);
  T20 = BOUNDP(YastYfix_let_types);
  if (T20 != YPfalse) {
    T19 = CHKREF(YastYfix_let_types);
  } else {
    T19 = YPfalse;
  }
  T18 = fun_144;
  T17 = CALL2(CHKREF(YPdefine_method),T19,T18);
  YastYfix_let_types = T17;
  regsym(&YastYfix_let_types,"ast","fix-let-types");
  lit_136 = YPPsym((P)"fix-let-types-setter");
  T21 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLfix_letG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_145 = YPmet(FUNCODEREF(fun_145),CHKREF(lit_136),T21,ENVNUL);
  T25 = BOUNDP(YastYfix_let_types_setter);
  if (T25 != YPfalse) {
    T24 = CHKREF(YastYfix_let_types_setter);
  } else {
    T24 = YPfalse;
  }
  T23 = fun_145;
  T22 = CALL2(CHKREF(YPdefine_method),T24,T23);
  YastYfix_let_types_setter = T22;
  regsym(&YastYfix_let_types_setter,"ast","fix-let-types-setter");
  T26 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_146 = YPmet(FUNCODEREF(fun_146),YPfalse,T26,ENVNUL);
  T27 = fun_146;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLfix_letG),CHKREF(YastYfix_let_types),CHKREF(YastYfix_let_types_setter),CHKREF(YLanyG),T27);
  lit_137 = YPPsym((P)"fix-let-arguments");
  T28 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLfix_letG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_147 = YPmet(FUNCODEREF(fun_147),CHKREF(lit_137),T28,ENVNUL);
  T32 = BOUNDP(YastYfix_let_arguments);
  if (T32 != YPfalse) {
    T31 = CHKREF(YastYfix_let_arguments);
  } else {
    T31 = YPfalse;
  }
  T30 = fun_147;
  T29 = CALL2(CHKREF(YPdefine_method),T31,T30);
  YastYfix_let_arguments = T29;
  regsym(&YastYfix_let_arguments,"ast","fix-let-arguments");
  lit_138 = YPPsym((P)"fix-let-arguments-setter");
  T33 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLfix_letG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_148 = YPmet(FUNCODEREF(fun_148),CHKREF(lit_138),T33,ENVNUL);
  T37 = BOUNDP(YastYfix_let_arguments_setter);
  if (T37 != YPfalse) {
    T36 = CHKREF(YastYfix_let_arguments_setter);
  } else {
    T36 = YPfalse;
  }
  T35 = fun_148;
  T34 = CALL2(CHKREF(YPdefine_method),T36,T35);
  YastYfix_let_arguments_setter = T34;
  regsym(&YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
  T38 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_149 = YPmet(FUNCODEREF(fun_149),YPfalse,T38,ENVNUL);
  T39 = fun_149;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLfix_letG),CHKREF(YastYfix_let_arguments),CHKREF(YastYfix_let_arguments_setter),CHKREF(YLanyG),T39);
  lit_139 = YPPsym((P)"fix-let-body");
  T40 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLfix_letG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_150 = YPmet(FUNCODEREF(fun_150),CHKREF(lit_139),T40,ENVNUL);
  T44 = BOUNDP(YastYfix_let_body);
  if (T44 != YPfalse) {
    T43 = CHKREF(YastYfix_let_body);
  } else {
    T43 = YPfalse;
  }
  T42 = fun_150;
  T41 = CALL2(CHKREF(YPdefine_method),T43,T42);
  YastYfix_let_body = T41;
  regsym(&YastYfix_let_body,"ast","fix-let-body");
  lit_140 = YPPsym((P)"fix-let-body-setter");
  T45 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLfix_letG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_151 = YPmet(FUNCODEREF(fun_151),CHKREF(lit_140),T45,ENVNUL);
  T49 = BOUNDP(YastYfix_let_body_setter);
  if (T49 != YPfalse) {
    T48 = CHKREF(YastYfix_let_body_setter);
  } else {
    T48 = YPfalse;
  }
  T47 = fun_151;
  T46 = CALL2(CHKREF(YPdefine_method),T48,T47);
  YastYfix_let_body_setter = T46;
  regsym(&YastYfix_let_body_setter,"ast","fix-let-body-setter");
  T50 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_152 = YPmet(FUNCODEREF(fun_152),YPfalse,T50,ENVNUL);
  T51 = fun_152;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLfix_letG),CHKREF(YastYfix_let_body),CHKREF(YastYfix_let_body_setter),CHKREF(YLanyG),T51);
  T54 = (P)YPpair(CHKREF(YastYLprogramsG),Ynil);
  T53 = (P)YPpair(CHKREF(YLlstG),T54);
  T52 = CALL3(CHKREF(YPisa),T53,Ynil,Ynil);
  YastYLfab_listG = T52;
  regsym(&YastYLfab_listG,"ast","<fab-list>");
  T60 = (P)YPpair(CHKREF(YastYLfab_listG),Ynil);
  T59 = (P)YPpair(CHKREF(Ytail),Ynil);
  T58 = (P)YPpair(CHKREF(Yhead),T59);
  T57 = (P)YPpair(YPfalse,Ynil);
  T56 = (P)YPpair(YPfalse,T57);
  T55 = CALL3(CHKREF(YPisa),T60,T58,T56);
  YastYDfab_list_empty = T55;
  regsym(&YastYDfab_list_empty,"ast","$fab-list-empty");
  T61 = YPsig(YPPlist(2,CHKREF(lit_103),CHKREF(lit_9)),YPPlist(2,CHKREF(YastYLfab_listG),CHKREF(YastYLfab_listG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_153 = YPmet(FUNCODEREF(fun_153),CHKREF(lit_104),T61,ENVNUL);
  T65 = BOUNDP(YruntimeYas);
  if (T65 != YPfalse) {
    T64 = CHKREF(YruntimeYas);
  } else {
    T64 = YPfalse;
  }
  T63 = fun_153;
  T62 = CALL2(CHKREF(YPdefine_method),T64,T63);
  YruntimeYas = T62;
  regsym(&YruntimeYas,"runtime","as");
  T66 = YPsig(YPPlist(2,CHKREF(lit_103),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YastYLfab_listG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_154 = YPmet(FUNCODEREF(fun_154),CHKREF(lit_104),T66,ENVNUL);
  T70 = BOUNDP(YruntimeYas);
  if (T70 != YPfalse) {
    T69 = CHKREF(YruntimeYas);
  } else {
    T69 = YPfalse;
  }
  T68 = fun_154;
  T67 = CALL2(CHKREF(YPdefine_method),T69,T68);
  YruntimeYas = T67;
  regsym(&YruntimeYas,"runtime","as");
  T71 = YPsig(YPPlist(2,CHKREF(lit_103),CHKREF(lit_9)),YPPlist(2,CHKREF(YastYLfab_listG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_155 = YPmet(FUNCODEREF(fun_155),CHKREF(lit_104),T71,ENVNUL);
  T75 = BOUNDP(YruntimeYas);
  if (T75 != YPfalse) {
    T74 = CHKREF(YruntimeYas);
  } else {
    T74 = YPfalse;
  }
  T73 = fun_155;
  T72 = CALL2(CHKREF(YPdefine_method),T74,T73);
  YruntimeYas = T72;
  regsym(&YruntimeYas,"runtime","as");
  lit_141 = YPPsym((P)"fab-list");
  T76 = YPsig(YPPlist(2,CHKREF(lit_95),CHKREF(lit_92)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYfab_list = YPmet(FUNCODEREF(YastYfab_list),CHKREF(lit_141),T76,ENVNUL);
  T77 = YastYfab_list;
  YastYfab_list = T77;
  regsym(&YastYfab_list,"ast","fab-list");
  T78 = YPsig(YPPlist(1,CHKREF(lit_89)),YPPlist(1,CHKREF(YastYLfab_listG)),YPfalse,YPint((P)1),CHKREF(YastYLfab_listG));
  fun_157 = YPmet(FUNCODEREF(fun_157),CHKREF(lit_90),T78,ENVNUL);
  T82 = BOUNDP(YruntimeYempty);
  if (T82 != YPfalse) {
    T81 = CHKREF(YruntimeYempty);
  } else {
    T81 = YPfalse;
  }
  T80 = fun_157;
  T79 = CALL2(CHKREF(YPdefine_method),T81,T80);
  YruntimeYempty = T79;
  regsym(&YruntimeYempty,"runtime","empty");
  T85 = (P)YPpair(CHKREF(YastYLprogramsG),Ynil);
  T84 = (P)YPpair(CHKREF(YLlstG),T85);
  T83 = CALL3(CHKREF(YPisa),T84,Ynil,Ynil);
  YastYLargumentsG = T83;
  regsym(&YastYLargumentsG,"ast","<arguments>");
  T91 = (P)YPpair(CHKREF(YastYLargumentsG),Ynil);
  T90 = (P)YPpair(CHKREF(Ytail),Ynil);
  T89 = (P)YPpair(CHKREF(Yhead),T90);
  T88 = (P)YPpair(YPfalse,Ynil);
  T87 = (P)YPpair(YPfalse,T88);
  T86 = CALL3(CHKREF(YPisa),T91,T89,T87);
  YastYDarguments_empty = T86;
  regsym(&YastYDarguments_empty,"ast","$arguments-empty");
  T92 = YPsig(YPPlist(2,CHKREF(lit_103),CHKREF(lit_9)),YPPlist(2,CHKREF(YastYLargumentsG),CHKREF(YastYLargumentsG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_158 = YPmet(FUNCODEREF(fun_158),CHKREF(lit_104),T92,ENVNUL);
  T96 = BOUNDP(YruntimeYas);
  if (T96 != YPfalse) {
    T95 = CHKREF(YruntimeYas);
  } else {
    T95 = YPfalse;
  }
  T94 = fun_158;
  T93 = CALL2(CHKREF(YPdefine_method),T95,T94);
  YruntimeYas = T93;
  regsym(&YruntimeYas,"runtime","as");
  T97 = YPsig(YPPlist(2,CHKREF(lit_103),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YastYLargumentsG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_159 = YPmet(FUNCODEREF(fun_159),CHKREF(lit_104),T97,ENVNUL);
  T101 = BOUNDP(YruntimeYas);
  if (T101 != YPfalse) {
    T100 = CHKREF(YruntimeYas);
  } else {
    T100 = YPfalse;
  }
  T99 = fun_159;
  T98 = CALL2(CHKREF(YPdefine_method),T100,T99);
  YruntimeYas = T98;
  regsym(&YruntimeYas,"runtime","as");
  T102 = YPsig(YPPlist(2,CHKREF(lit_103),CHKREF(lit_9)),YPPlist(2,CHKREF(YastYLargumentsG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_160 = YPmet(FUNCODEREF(fun_160),CHKREF(lit_104),T102,ENVNUL);
  T106 = BOUNDP(YruntimeYas);
  if (T106 != YPfalse) {
    T105 = CHKREF(YruntimeYas);
  } else {
    T105 = YPfalse;
  }
  T104 = fun_160;
  T103 = CALL2(CHKREF(YPdefine_method),T105,T104);
  YruntimeYas = T103;
  regsym(&YruntimeYas,"runtime","as");
  T107 = YPsig(YPPlist(2,CHKREF(lit_95),CHKREF(lit_92)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYarguments = YPmet(FUNCODEREF(YastYarguments),CHKREF(lit_3),T107,ENVNUL);
  T108 = YastYarguments;
  YastYarguments = T108;
  regsym(&YastYarguments,"ast","arguments");
  T109 = YPsig(YPPlist(1,CHKREF(lit_89)),YPPlist(1,CHKREF(YastYLargumentsG)),YPfalse,YPint((P)1),CHKREF(YastYLargumentsG));
  fun_162 = YPmet(FUNCODEREF(fun_162),CHKREF(lit_90),T109,ENVNUL);
  T113 = BOUNDP(YruntimeYempty);
  if (T113 != YPfalse) {
    T112 = CHKREF(YruntimeYempty);
  } else {
    T112 = YPfalse;
  }
  T111 = fun_162;
  T110 = CALL2(CHKREF(YPdefine_method),T112,T111);
  YruntimeYempty = T110;
  regsym(&YruntimeYempty,"runtime","empty");
  lit_142 = YPPsym((P)"c");
  lit_143 = YPPsym((P)"loop");
  lit_144 = YPPsym((P)"res");
  T115 = YPsig(YPPlist(2,CHKREF(lit_144),CHKREF(lit_89)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_163 = YPmet(FUNCODEREF(fun_loop_163),CHKREF(lit_143),T115,ENVNUL);
  T114 = YPsig(YPPlist(2,CHKREF(lit_142),CHKREF(lit_89)),YPPlist(2,CHKREF(YLlstG),CHKREF(YastYLargumentsG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_164 = YPmet(FUNCODEREF(fun_164),CHKREF(lit_104),T114,ENVNUL);
  T119 = BOUNDP(YruntimeYas);
  if (T119 != YPfalse) {
    T118 = CHKREF(YruntimeYas);
  } else {
    T118 = YPfalse;
  }
  T117 = fun_164;
  T116 = CALL2(CHKREF(YPdefine_method),T118,T117);
  YruntimeYas = T116;
  regsym(&YruntimeYas,"runtime","as");
  T121 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T120 = CALL3(CHKREF(YPisa),T121,Ynil,Ynil);
  YastYLlocalsG = T120;
  regsym(&YastYLlocalsG,"ast","<locals>");
  lit_145 = YPPsym((P)"locals-bindings");
  T122 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLlocalsG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_165 = YPmet(FUNCODEREF(fun_165),CHKREF(lit_145),T122,ENVNUL);
  T126 = BOUNDP(YastYlocals_bindings);
  if (T126 != YPfalse) {
    T125 = CHKREF(YastYlocals_bindings);
  } else {
    T125 = YPfalse;
  }
  T124 = fun_165;
  T123 = CALL2(CHKREF(YPdefine_method),T125,T124);
  YastYlocals_bindings = T123;
  regsym(&YastYlocals_bindings,"ast","locals-bindings");
  lit_146 = YPPsym((P)"locals-bindings-setter");
  T127 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLlocalsG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_166 = YPmet(FUNCODEREF(fun_166),CHKREF(lit_146),T127,ENVNUL);
  T131 = BOUNDP(YastYlocals_bindings_setter);
  if (T131 != YPfalse) {
    T130 = CHKREF(YastYlocals_bindings_setter);
  } else {
    T130 = YPfalse;
  }
  T129 = fun_166;
  T128 = CALL2(CHKREF(YPdefine_method),T130,T129);
  YastYlocals_bindings_setter = T128;
  regsym(&YastYlocals_bindings_setter,"ast","locals-bindings-setter");
  T132 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_167 = YPmet(FUNCODEREF(fun_167),YPfalse,T132,ENVNUL);
  T133 = fun_167;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLlocalsG),CHKREF(YastYlocals_bindings),CHKREF(YastYlocals_bindings_setter),CHKREF(YLanyG),T133);
  lit_147 = YPPsym((P)"locals-functions");
  T134 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLlocalsG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_168 = YPmet(FUNCODEREF(fun_168),CHKREF(lit_147),T134,ENVNUL);
  T138 = BOUNDP(YastYlocals_functions);
  if (T138 != YPfalse) {
    T137 = CHKREF(YastYlocals_functions);
  } else {
    T137 = YPfalse;
  }
  T136 = fun_168;
  T135 = CALL2(CHKREF(YPdefine_method),T137,T136);
  YastYlocals_functions = T135;
  regsym(&YastYlocals_functions,"ast","locals-functions");
  lit_148 = YPPsym((P)"locals-functions-setter");
  T139 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLlocalsG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_169 = YPmet(FUNCODEREF(fun_169),CHKREF(lit_148),T139,ENVNUL);
  T143 = BOUNDP(YastYlocals_functions_setter);
  if (T143 != YPfalse) {
    T142 = CHKREF(YastYlocals_functions_setter);
  } else {
    T142 = YPfalse;
  }
  T141 = fun_169;
  T140 = CALL2(CHKREF(YPdefine_method),T142,T141);
  YastYlocals_functions_setter = T140;
  regsym(&YastYlocals_functions_setter,"ast","locals-functions-setter");
  T144 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_170 = YPmet(FUNCODEREF(fun_170),YPfalse,T144,ENVNUL);
  T145 = fun_170;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLlocalsG),CHKREF(YastYlocals_functions),CHKREF(YastYlocals_functions_setter),CHKREF(YLanyG),T145);
  lit_149 = YPPsym((P)"locals-body");
  T146 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLlocalsG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_171 = YPmet(FUNCODEREF(fun_171),CHKREF(lit_149),T146,ENVNUL);
  T150 = BOUNDP(YastYlocals_body);
  if (T150 != YPfalse) {
    T149 = CHKREF(YastYlocals_body);
  } else {
    T149 = YPfalse;
  }
  T148 = fun_171;
  T147 = CALL2(CHKREF(YPdefine_method),T149,T148);
  YastYlocals_body = T147;
  regsym(&YastYlocals_body,"ast","locals-body");
  lit_150 = YPPsym((P)"locals-body-setter");
  T151 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLlocalsG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_172 = YPmet(FUNCODEREF(fun_172),CHKREF(lit_150),T151,ENVNUL);
  T155 = BOUNDP(YastYlocals_body_setter);
  if (T155 != YPfalse) {
    T154 = CHKREF(YastYlocals_body_setter);
  } else {
    T154 = YPfalse;
  }
  T153 = fun_172;
  T152 = CALL2(CHKREF(YPdefine_method),T154,T153);
  YastYlocals_body_setter = T152;
  regsym(&YastYlocals_body_setter,"ast","locals-body-setter");
  T156 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_173 = YPmet(FUNCODEREF(fun_173),YPfalse,T156,ENVNUL);
  T157 = fun_173;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLlocalsG),CHKREF(YastYlocals_body),CHKREF(YastYlocals_body_setter),CHKREF(YLanyG),T157);
  T159 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T158 = CALL3(CHKREF(YPisa),T159,Ynil,Ynil);
  YastYLbind_exitG = T158;
  regsym(&YastYLbind_exitG,"ast","<bind-exit>");
  lit_151 = YPPsym((P)"bind-exit-main-fun");
  T160 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLbind_exitG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_174 = YPmet(FUNCODEREF(fun_174),CHKREF(lit_151),T160,ENVNUL);
  T164 = BOUNDP(YastYbind_exit_main_fun);
  if (T164 != YPfalse) {
    T163 = CHKREF(YastYbind_exit_main_fun);
  } else {
    T163 = YPfalse;
  }
  T162 = fun_174;
  T161 = CALL2(CHKREF(YPdefine_method),T163,T162);
  YastYbind_exit_main_fun = T161;
  regsym(&YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
  lit_152 = YPPsym((P)"bind-exit-main-fun-setter");
  T165 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLbind_exitG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_175 = YPmet(FUNCODEREF(fun_175),CHKREF(lit_152),T165,ENVNUL);
  T169 = BOUNDP(YastYbind_exit_main_fun_setter);
  if (T169 != YPfalse) {
    T168 = CHKREF(YastYbind_exit_main_fun_setter);
  } else {
    T168 = YPfalse;
  }
  T167 = fun_175;
  T166 = CALL2(CHKREF(YPdefine_method),T168,T167);
  YastYbind_exit_main_fun_setter = T166;
  regsym(&YastYbind_exit_main_fun_setter,"ast","bind-exit-main-fun-setter");
  T170 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_176 = YPmet(FUNCODEREF(fun_176),YPfalse,T170,ENVNUL);
  T171 = fun_176;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLbind_exitG),CHKREF(YastYbind_exit_main_fun),CHKREF(YastYbind_exit_main_fun_setter),CHKREF(YLanyG),T171);
  T173 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T172 = CALL3(CHKREF(YPisa),T173,Ynil,Ynil);
  YastYLunwind_protectG = T172;
  regsym(&YastYLunwind_protectG,"ast","<unwind-protect>");
  lit_153 = YPPsym((P)"unwind-protect-protected-thunk");
  T174 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLunwind_protectG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_177 = YPmet(FUNCODEREF(fun_177),CHKREF(lit_153),T174,ENVNUL);
  T178 = BOUNDP(YastYunwind_protect_protected_thunk);
  if (T178 != YPfalse) {
    T177 = CHKREF(YastYunwind_protect_protected_thunk);
  } else {
    T177 = YPfalse;
  }
  T176 = fun_177;
  T175 = CALL2(CHKREF(YPdefine_method),T177,T176);
  YastYunwind_protect_protected_thunk = T175;
  regsym(&YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
  lit_154 = YPPsym((P)"unwind-protect-protected-thunk-setter");
  T179 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLunwind_protectG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_178 = YPmet(FUNCODEREF(fun_178),CHKREF(lit_154),T179,ENVNUL);
  T183 = BOUNDP(YastYunwind_protect_protected_thunk_setter);
  if (T183 != YPfalse) {
    T182 = CHKREF(YastYunwind_protect_protected_thunk_setter);
  } else {
    T182 = YPfalse;
  }
  T181 = fun_178;
  T180 = CALL2(CHKREF(YPdefine_method),T182,T181);
  YastYunwind_protect_protected_thunk_setter = T180;
  regsym(&YastYunwind_protect_protected_thunk_setter,"ast","unwind-protect-protected-thunk-setter");
  T184 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_179 = YPmet(FUNCODEREF(fun_179),YPfalse,T184,ENVNUL);
  T185 = fun_179;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLunwind_protectG),CHKREF(YastYunwind_protect_protected_thunk),CHKREF(YastYunwind_protect_protected_thunk_setter),CHKREF(YLanyG),T185);
  lit_155 = YPPsym((P)"unwind-protect-cleanup-thunk");
  T186 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLunwind_protectG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_180 = YPmet(FUNCODEREF(fun_180),CHKREF(lit_155),T186,ENVNUL);
  T190 = BOUNDP(YastYunwind_protect_cleanup_thunk);
  if (T190 != YPfalse) {
    T189 = CHKREF(YastYunwind_protect_cleanup_thunk);
  } else {
    T189 = YPfalse;
  }
  T188 = fun_180;
  T187 = CALL2(CHKREF(YPdefine_method),T189,T188);
  YastYunwind_protect_cleanup_thunk = T187;
  regsym(&YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
  lit_156 = YPPsym((P)"unwind-protect-cleanup-thunk-setter");
  T191 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLunwind_protectG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_181 = YPmet(FUNCODEREF(fun_181),CHKREF(lit_156),T191,ENVNUL);
  T195 = BOUNDP(YastYunwind_protect_cleanup_thunk_setter);
  if (T195 != YPfalse) {
    T194 = CHKREF(YastYunwind_protect_cleanup_thunk_setter);
  } else {
    T194 = YPfalse;
  }
  T193 = fun_181;
  T192 = CALL2(CHKREF(YPdefine_method),T194,T193);
  YastYunwind_protect_cleanup_thunk_setter = T192;
  regsym(&YastYunwind_protect_cleanup_thunk_setter,"ast","unwind-protect-cleanup-thunk-setter");
  T196 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_182 = YPmet(FUNCODEREF(fun_182),YPfalse,T196,ENVNUL);
  T197 = fun_182;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLunwind_protectG),CHKREF(YastYunwind_protect_cleanup_thunk),CHKREF(YastYunwind_protect_cleanup_thunk_setter),CHKREF(YLanyG),T197);
  T199 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T198 = CALL3(CHKREF(YPisa),T199,Ynil,Ynil);
  YastYLmonitorG = T198;
  regsym(&YastYLmonitorG,"ast","<monitor>");
  lit_157 = YPPsym((P)"monitor-type");
  T200 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLmonitorG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_183 = YPmet(FUNCODEREF(fun_183),CHKREF(lit_157),T200,ENVNUL);
  T204 = BOUNDP(YastYmonitor_type);
  if (T204 != YPfalse) {
    T203 = CHKREF(YastYmonitor_type);
  } else {
    T203 = YPfalse;
  }
  T202 = fun_183;
  T201 = CALL2(CHKREF(YPdefine_method),T203,T202);
  YastYmonitor_type = T201;
  regsym(&YastYmonitor_type,"ast","monitor-type");
  lit_158 = YPPsym((P)"monitor-type-setter");
  T205 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLmonitorG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_184 = YPmet(FUNCODEREF(fun_184),CHKREF(lit_158),T205,ENVNUL);
  T209 = BOUNDP(YastYmonitor_type_setter);
  if (T209 != YPfalse) {
    T208 = CHKREF(YastYmonitor_type_setter);
  } else {
    T208 = YPfalse;
  }
  T207 = fun_184;
  T206 = CALL2(CHKREF(YPdefine_method),T208,T207);
  YastYmonitor_type_setter = T206;
  regsym(&YastYmonitor_type_setter,"ast","monitor-type-setter");
  T210 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_185 = YPmet(FUNCODEREF(fun_185),YPfalse,T210,ENVNUL);
  T211 = fun_185;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmonitorG),CHKREF(YastYmonitor_type),CHKREF(YastYmonitor_type_setter),CHKREF(YLanyG),T211);
  lit_159 = YPPsym((P)"monitor-info");
  T212 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLmonitorG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_186 = YPmet(FUNCODEREF(fun_186),CHKREF(lit_159),T212,ENVNUL);
  T216 = BOUNDP(YastYmonitor_info);
  if (T216 != YPfalse) {
    T215 = CHKREF(YastYmonitor_info);
  } else {
    T215 = YPfalse;
  }
  T214 = fun_186;
  T213 = CALL2(CHKREF(YPdefine_method),T215,T214);
  YastYmonitor_info = T213;
  regsym(&YastYmonitor_info,"ast","monitor-info");
  lit_160 = YPPsym((P)"monitor-info-setter");
  T217 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLmonitorG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_187 = YPmet(FUNCODEREF(fun_187),CHKREF(lit_160),T217,ENVNUL);
  T221 = BOUNDP(YastYmonitor_info_setter);
  if (T221 != YPfalse) {
    T220 = CHKREF(YastYmonitor_info_setter);
  } else {
    T220 = YPfalse;
  }
  T219 = fun_187;
  T218 = CALL2(CHKREF(YPdefine_method),T220,T219);
  YastYmonitor_info_setter = T218;
  regsym(&YastYmonitor_info_setter,"ast","monitor-info-setter");
  T222 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_188 = YPmet(FUNCODEREF(fun_188),YPfalse,T222,ENVNUL);
  T223 = fun_188;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmonitorG),CHKREF(YastYmonitor_info),CHKREF(YastYmonitor_info_setter),CHKREF(YLanyG),T223);
  lit_161 = YPPsym((P)"monitor-test");
  T224 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLmonitorG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_189 = YPmet(FUNCODEREF(fun_189),CHKREF(lit_161),T224,ENVNUL);
  T228 = BOUNDP(YastYmonitor_test);
  if (T228 != YPfalse) {
    T227 = CHKREF(YastYmonitor_test);
  } else {
    T227 = YPfalse;
  }
  T226 = fun_189;
  T225 = CALL2(CHKREF(YPdefine_method),T227,T226);
  YastYmonitor_test = T225;
  regsym(&YastYmonitor_test,"ast","monitor-test");
  lit_162 = YPPsym((P)"monitor-test-setter");
  T229 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLmonitorG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_190 = YPmet(FUNCODEREF(fun_190),CHKREF(lit_162),T229,ENVNUL);
  T233 = BOUNDP(YastYmonitor_test_setter);
  if (T233 != YPfalse) {
    T232 = CHKREF(YastYmonitor_test_setter);
  } else {
    T232 = YPfalse;
  }
  T231 = fun_190;
  T230 = CALL2(CHKREF(YPdefine_method),T232,T231);
  YastYmonitor_test_setter = T230;
  regsym(&YastYmonitor_test_setter,"ast","monitor-test-setter");
  T234 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_191 = YPmet(FUNCODEREF(fun_191),YPfalse,T234,ENVNUL);
  T235 = fun_191;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmonitorG),CHKREF(YastYmonitor_test),CHKREF(YastYmonitor_test_setter),CHKREF(YLanyG),T235);
  lit_163 = YPPsym((P)"monitor-handler");
  T236 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLmonitorG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_192 = YPmet(FUNCODEREF(fun_192),CHKREF(lit_163),T236,ENVNUL);
  T240 = BOUNDP(YastYmonitor_handler);
  if (T240 != YPfalse) {
    T239 = CHKREF(YastYmonitor_handler);
  } else {
    T239 = YPfalse;
  }
  T238 = fun_192;
  T237 = CALL2(CHKREF(YPdefine_method),T239,T238);
  YastYmonitor_handler = T237;
  regsym(&YastYmonitor_handler,"ast","monitor-handler");
  lit_164 = YPPsym((P)"monitor-handler-setter");
  T241 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLmonitorG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_193 = YPmet(FUNCODEREF(fun_193),CHKREF(lit_164),T241,ENVNUL);
  T245 = BOUNDP(YastYmonitor_handler_setter);
  if (T245 != YPfalse) {
    T244 = CHKREF(YastYmonitor_handler_setter);
  } else {
    T244 = YPfalse;
  }
  T243 = fun_193;
  T242 = CALL2(CHKREF(YPdefine_method),T244,T243);
  YastYmonitor_handler_setter = T242;
  regsym(&YastYmonitor_handler_setter,"ast","monitor-handler-setter");
  T246 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_194 = YPmet(FUNCODEREF(fun_194),YPfalse,T246,ENVNUL);
  T247 = fun_194;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmonitorG),CHKREF(YastYmonitor_handler),CHKREF(YastYmonitor_handler_setter),CHKREF(YLanyG),T247);
  lit_165 = YPPsym((P)"monitor-main-thunk");
  T250 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLmonitorG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  T249 = fun_195 = YPmet(FUNCODEREF(fun_195),CHKREF(lit_165),T250,ENVNUL);
  T255 = BOUNDP(YastYmonitor_main_thunk);
  if (T255 != YPfalse) {
    T254 = CHKREF(YastYmonitor_main_thunk);
  } else {
    T254 = YPfalse;
  }
  T253 = fun_195;
  T252 = CALL2(CHKREF(YPdefine_method),T254,T253);
  T251 = YastYmonitor_main_thunk = T252;
  regsym(&YastYmonitor_main_thunk,"ast","monitor-main-thunk");
  T248 = T251;
  return T248;
}

P YastY___main_4___() {
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
  lit_166 = YPPsym((P)"monitor-main-thunk-setter");
  T0 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLmonitorG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_196 = YPmet(FUNCODEREF(fun_196),CHKREF(lit_166),T0,ENVNUL);
  T4 = BOUNDP(YastYmonitor_main_thunk_setter);
  if (T4 != YPfalse) {
    T3 = CHKREF(YastYmonitor_main_thunk_setter);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_196;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YastYmonitor_main_thunk_setter = T1;
  regsym(&YastYmonitor_main_thunk_setter,"ast","monitor-main-thunk-setter");
  T5 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_197 = YPmet(FUNCODEREF(fun_197),YPfalse,T5,ENVNUL);
  T6 = fun_197;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmonitorG),CHKREF(YastYmonitor_main_thunk),CHKREF(YastYmonitor_main_thunk_setter),CHKREF(YLanyG),T6);
  T8 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T7 = CALL3(CHKREF(YPisa),T8,Ynil,Ynil);
  YastYLstatic_environmentG = T7;
  regsym(&YastYLstatic_environmentG,"ast","<static-environment>");
  lit_167 = YPPsym((P)"environment-next");
  T9 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLstatic_environmentG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_198 = YPmet(FUNCODEREF(fun_198),CHKREF(lit_167),T9,ENVNUL);
  T13 = BOUNDP(YastYenvironment_next);
  if (T13 != YPfalse) {
    T12 = CHKREF(YastYenvironment_next);
  } else {
    T12 = YPfalse;
  }
  T11 = fun_198;
  T10 = CALL2(CHKREF(YPdefine_method),T12,T11);
  YastYenvironment_next = T10;
  regsym(&YastYenvironment_next,"ast","environment-next");
  lit_168 = YPPsym((P)"environment-next-setter");
  T14 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLstatic_environmentG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_199 = YPmet(FUNCODEREF(fun_199),CHKREF(lit_168),T14,ENVNUL);
  T18 = BOUNDP(YastYenvironment_next_setter);
  if (T18 != YPfalse) {
    T17 = CHKREF(YastYenvironment_next_setter);
  } else {
    T17 = YPfalse;
  }
  T16 = fun_199;
  T15 = CALL2(CHKREF(YPdefine_method),T17,T16);
  YastYenvironment_next_setter = T15;
  regsym(&YastYenvironment_next_setter,"ast","environment-next-setter");
  T19 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_200 = YPmet(FUNCODEREF(fun_200),YPfalse,T19,ENVNUL);
  T20 = fun_200;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLstatic_environmentG),CHKREF(YastYenvironment_next),CHKREF(YastYenvironment_next_setter),CHKREF(YLanyG),T20);
  lit_169 = YPPsym((P)"environment-bindings");
  T21 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLstatic_environmentG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_201 = YPmet(FUNCODEREF(fun_201),CHKREF(lit_169),T21,ENVNUL);
  T25 = BOUNDP(YastYenvironment_bindings);
  if (T25 != YPfalse) {
    T24 = CHKREF(YastYenvironment_bindings);
  } else {
    T24 = YPfalse;
  }
  T23 = fun_201;
  T22 = CALL2(CHKREF(YPdefine_method),T24,T23);
  YastYenvironment_bindings = T22;
  regsym(&YastYenvironment_bindings,"ast","environment-bindings");
  lit_170 = YPPsym((P)"environment-bindings-setter");
  T26 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLcolG),CHKREF(YastYLstatic_environmentG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_202 = YPmet(FUNCODEREF(fun_202),CHKREF(lit_170),T26,ENVNUL);
  T30 = BOUNDP(YastYenvironment_bindings_setter);
  if (T30 != YPfalse) {
    T29 = CHKREF(YastYenvironment_bindings_setter);
  } else {
    T29 = YPfalse;
  }
  T28 = fun_202;
  T27 = CALL2(CHKREF(YPdefine_method),T29,T28);
  YastYenvironment_bindings_setter = T27;
  regsym(&YastYenvironment_bindings_setter,"ast","environment-bindings-setter");
  T31 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_203 = YPmet(FUNCODEREF(fun_203),YPfalse,T31,ENVNUL);
  T32 = fun_203;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLstatic_environmentG),CHKREF(YastYenvironment_bindings),CHKREF(YastYenvironment_bindings_setter),CHKREF(YLcolG),T32);
  T34 = (P)YPpair(CHKREF(YastYLstatic_environmentG),Ynil);
  T33 = CALL3(CHKREF(YPisa),T34,Ynil,Ynil);
  YastYLstatic_global_environmentG = T33;
  regsym(&YastYLstatic_global_environmentG,"ast","<static-global-environment>");
  lit_171 = YPPsym((P)"environment-module");
  T35 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_204 = YPmet(FUNCODEREF(fun_204),CHKREF(lit_171),T35,ENVNUL);
  T39 = BOUNDP(YastYenvironment_module);
  if (T39 != YPfalse) {
    T38 = CHKREF(YastYenvironment_module);
  } else {
    T38 = YPfalse;
  }
  T37 = fun_204;
  T36 = CALL2(CHKREF(YPdefine_method),T38,T37);
  YastYenvironment_module = T36;
  regsym(&YastYenvironment_module,"ast","environment-module");
  lit_172 = YPPsym((P)"environment-module-setter");
  T40 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_205 = YPmet(FUNCODEREF(fun_205),CHKREF(lit_172),T40,ENVNUL);
  T44 = BOUNDP(YastYenvironment_module_setter);
  if (T44 != YPfalse) {
    T43 = CHKREF(YastYenvironment_module_setter);
  } else {
    T43 = YPfalse;
  }
  T42 = fun_205;
  T41 = CALL2(CHKREF(YPdefine_method),T43,T42);
  YastYenvironment_module_setter = T41;
  regsym(&YastYenvironment_module_setter,"ast","environment-module-setter");
  T45 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_206 = YPmet(FUNCODEREF(fun_206),YPfalse,T45,ENVNUL);
  T46 = fun_206;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLstatic_global_environmentG),CHKREF(YastYenvironment_module),CHKREF(YastYenvironment_module_setter),CHKREF(YLanyG),T46);
  lit_173 = YPPsym((P)"environment-module-loader");
  T47 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_207 = YPmet(FUNCODEREF(fun_207),CHKREF(lit_173),T47,ENVNUL);
  T51 = BOUNDP(YastYenvironment_module_loader);
  if (T51 != YPfalse) {
    T50 = CHKREF(YastYenvironment_module_loader);
  } else {
    T50 = YPfalse;
  }
  T49 = fun_207;
  T48 = CALL2(CHKREF(YPdefine_method),T50,T49);
  YastYenvironment_module_loader = T48;
  regsym(&YastYenvironment_module_loader,"ast","environment-module-loader");
  lit_174 = YPPsym((P)"environment-module-loader-setter");
  T52 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_208 = YPmet(FUNCODEREF(fun_208),CHKREF(lit_174),T52,ENVNUL);
  T56 = BOUNDP(YastYenvironment_module_loader_setter);
  if (T56 != YPfalse) {
    T55 = CHKREF(YastYenvironment_module_loader_setter);
  } else {
    T55 = YPfalse;
  }
  T54 = fun_208;
  T53 = CALL2(CHKREF(YPdefine_method),T55,T54);
  YastYenvironment_module_loader_setter = T53;
  regsym(&YastYenvironment_module_loader_setter,"ast","environment-module-loader-setter");
  T57 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_209 = YPmet(FUNCODEREF(fun_209),YPfalse,T57,ENVNUL);
  T58 = fun_209;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLstatic_global_environmentG),CHKREF(YastYenvironment_module_loader),CHKREF(YastYenvironment_module_loader_setter),CHKREF(YLanyG),T58);
  lit_175 = YPPsym((P)"environment-uses-modules");
  T59 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_210 = YPmet(FUNCODEREF(fun_210),CHKREF(lit_175),T59,ENVNUL);
  T63 = BOUNDP(YastYenvironment_uses_modules);
  if (T63 != YPfalse) {
    T62 = CHKREF(YastYenvironment_uses_modules);
  } else {
    T62 = YPfalse;
  }
  T61 = fun_210;
  T60 = CALL2(CHKREF(YPdefine_method),T62,T61);
  YastYenvironment_uses_modules = T60;
  regsym(&YastYenvironment_uses_modules,"ast","environment-uses-modules");
  lit_176 = YPPsym((P)"environment-uses-modules-setter");
  T64 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YruntimeYLbufG),CHKREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_211 = YPmet(FUNCODEREF(fun_211),CHKREF(lit_176),T64,ENVNUL);
  T68 = BOUNDP(YastYenvironment_uses_modules_setter);
  if (T68 != YPfalse) {
    T67 = CHKREF(YastYenvironment_uses_modules_setter);
  } else {
    T67 = YPfalse;
  }
  T66 = fun_211;
  T65 = CALL2(CHKREF(YPdefine_method),T67,T66);
  YastYenvironment_uses_modules_setter = T65;
  regsym(&YastYenvironment_uses_modules_setter,"ast","environment-uses-modules-setter");
  T69 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_212 = YPmet(FUNCODEREF(fun_212),YPfalse,T69,ENVNUL);
  T70 = fun_212;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLstatic_global_environmentG),CHKREF(YastYenvironment_uses_modules),CHKREF(YastYenvironment_uses_modules_setter),CHKREF(YruntimeYLbufG),T70);
  lit_177 = YPPsym((P)"environment-implements");
  T71 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_213 = YPmet(FUNCODEREF(fun_213),CHKREF(lit_177),T71,ENVNUL);
  T75 = BOUNDP(YastYenvironment_implements);
  if (T75 != YPfalse) {
    T74 = CHKREF(YastYenvironment_implements);
  } else {
    T74 = YPfalse;
  }
  T73 = fun_213;
  T72 = CALL2(CHKREF(YPdefine_method),T74,T73);
  YastYenvironment_implements = T72;
  regsym(&YastYenvironment_implements,"ast","environment-implements");
  lit_178 = YPPsym((P)"environment-implements-setter");
  T76 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLlstG),CHKREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_214 = YPmet(FUNCODEREF(fun_214),CHKREF(lit_178),T76,ENVNUL);
  T80 = BOUNDP(YastYenvironment_implements_setter);
  if (T80 != YPfalse) {
    T79 = CHKREF(YastYenvironment_implements_setter);
  } else {
    T79 = YPfalse;
  }
  T78 = fun_214;
  T77 = CALL2(CHKREF(YPdefine_method),T79,T78);
  YastYenvironment_implements_setter = T77;
  regsym(&YastYenvironment_implements_setter,"ast","environment-implements-setter");
  T81 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_215 = YPmet(FUNCODEREF(fun_215),YPfalse,T81,ENVNUL);
  T82 = fun_215;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLstatic_global_environmentG),CHKREF(YastYenvironment_implements),CHKREF(YastYenvironment_implements_setter),CHKREF(YLlstG),T82);
  lit_179 = YPPsym((P)"environment-allows-foreign-names?");
  T83 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_216 = YPmet(FUNCODEREF(fun_216),CHKREF(lit_179),T83,ENVNUL);
  T87 = BOUNDP(YastYenvironment_allows_foreign_namesQ);
  if (T87 != YPfalse) {
    T86 = CHKREF(YastYenvironment_allows_foreign_namesQ);
  } else {
    T86 = YPfalse;
  }
  T85 = fun_216;
  T84 = CALL2(CHKREF(YPdefine_method),T86,T85);
  YastYenvironment_allows_foreign_namesQ = T84;
  regsym(&YastYenvironment_allows_foreign_namesQ,"ast","environment-allows-foreign-names?");
  lit_180 = YPPsym((P)"environment-allows-foreign-names?-setter");
  T88 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLlogG),CHKREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_217 = YPmet(FUNCODEREF(fun_217),CHKREF(lit_180),T88,ENVNUL);
  T92 = BOUNDP(YastYenvironment_allows_foreign_namesQ_setter);
  if (T92 != YPfalse) {
    T91 = CHKREF(YastYenvironment_allows_foreign_namesQ_setter);
  } else {
    T91 = YPfalse;
  }
  T90 = fun_217;
  T89 = CALL2(CHKREF(YPdefine_method),T91,T90);
  YastYenvironment_allows_foreign_namesQ_setter = T89;
  regsym(&YastYenvironment_allows_foreign_namesQ_setter,"ast","environment-allows-foreign-names?-setter");
  T93 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_218 = YPmet(FUNCODEREF(fun_218),YPfalse,T93,ENVNUL);
  T94 = fun_218;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLstatic_global_environmentG),CHKREF(YastYenvironment_allows_foreign_namesQ),CHKREF(YastYenvironment_allows_foreign_namesQ_setter),CHKREF(YLlogG),T94);
  T96 = (P)YPpair(CHKREF(YastYLstatic_environmentG),Ynil);
  T95 = CALL3(CHKREF(YPisa),T96,Ynil,Ynil);
  YastYLstatic_empty_environmentG = T95;
  regsym(&YastYLstatic_empty_environmentG,"ast","<static-empty-environment>");
  T98 = (P)YPpair(CHKREF(YastYLstatic_empty_environmentG),Ynil);
  T97 = CALL3(CHKREF(YPisa),T98,Ynil,Ynil);
  YastYDempty_static_environment = T97;
  regsym(&YastYDempty_static_environment,"ast","$empty-static-environment");
  T100 = (P)YPpair(CHKREF(YastYLstatic_environmentG),Ynil);
  T99 = CALL3(CHKREF(YPisa),T100,Ynil,Ynil);
  YastYLstatic_local_environmentG = T99;
  regsym(&YastYLstatic_local_environmentG,"ast","<static-local-environment>");
  lit_181 = YPPsym((P)"env-object-name");
  lit_182 = YPPsym((P)"binding");
  T103 = YPsig(YPPlist(1,CHKREF(lit_182)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_219 = YPmet(FUNCODEREF(fun_219),YPfalse,T103,ENVNUL);
  T102 = YPsig(YPPlist(1,CHKREF(lit_87)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_220 = YPmet(FUNCODEREF(fun_220),YPfalse,T102,ENVNUL);
  T101 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_221 = YPmet(FUNCODEREF(fun_221),CHKREF(lit_181),T101,ENVNUL);
  T107 = BOUNDP(YwriteYenv_object_name);
  if (T107 != YPfalse) {
    T106 = CHKREF(YwriteYenv_object_name);
  } else {
    T106 = YPfalse;
  }
  T105 = fun_221;
  T104 = CALL2(CHKREF(YPdefine_method),T106,T105);
  YwriteYenv_object_name = T104;
  regsym(&YwriteYenv_object_name,"write","env-object-name");
  lit_183 = YPPsym((P)"objectify");
  lit_184 = YPPsym((P)"tail?");
  lit_185 = YPPsym((P)"r");
  T108 = YPsig(YPPlist(3,CHKREF(lit_89),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLlstG),CHKREF(YastYLstatic_environmentG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_222 = YPmet(FUNCODEREF(fun_222),CHKREF(lit_183),T108,ENVNUL);
  T112 = BOUNDP(YastYobjectify);
  if (T112 != YPfalse) {
    T111 = CHKREF(YastYobjectify);
  } else {
    T111 = YPfalse;
  }
  T110 = fun_222;
  T109 = CALL2(CHKREF(YPdefine_method),T111,T110);
  YastYobjectify = T109;
  regsym(&YastYobjectify,"ast","objectify");
  lit_186 = YPPsym((P)"objectify-list");
  lit_187 = YPPsym((P)"f");
  T113 = YPsig(YPPlist(4,CHKREF(lit_187),CHKREF(lit_89),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLlstG),CHKREF(YastYLstatic_environmentG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_223 = YPmet(FUNCODEREF(fun_223),CHKREF(lit_186),T113,ENVNUL);
  T117 = BOUNDP(YastYobjectify_list);
  if (T117 != YPfalse) {
    T116 = CHKREF(YastYobjectify_list);
  } else {
    T116 = YPfalse;
  }
  T115 = fun_223;
  T114 = CALL2(CHKREF(YPdefine_method),T116,T115);
  YastYobjectify_list = T114;
  regsym(&YastYobjectify_list,"ast","objectify-list");
  lit_188 = YPsb((P)"Magic or Macro binding expected %=");
  lit_189 = YPPsym((P)"macro");
  lit_190 = YPPsym((P)"magic");
  T118 = YPsig(YPPlist(4,CHKREF(lit_187),CHKREF(lit_89),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(4,CHKREF(YastYLmodule_bindingG),CHKREF(YLlstG),CHKREF(YastYLstatic_environmentG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_224 = YPmet(FUNCODEREF(fun_224),CHKREF(lit_186),T118,ENVNUL);
  T122 = BOUNDP(YastYobjectify_list);
  if (T122 != YPfalse) {
    T121 = CHKREF(YastYobjectify_list);
  } else {
    T121 = YPfalse;
  }
  T120 = fun_224;
  T119 = CALL2(CHKREF(YPdefine_method),T121,T120);
  YastYobjectify_list = T119;
  regsym(&YastYobjectify_list,"ast","objectify-list");
  T123 = YPsig(YPPlist(3,CHKREF(lit_89),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLsymG),CHKREF(YastYLstatic_environmentG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_225 = YPmet(FUNCODEREF(fun_225),CHKREF(lit_183),T123,ENVNUL);
  T127 = BOUNDP(YastYobjectify);
  if (T127 != YPfalse) {
    T126 = CHKREF(YastYobjectify);
  } else {
    T126 = YPfalse;
  }
  T125 = fun_225;
  T124 = CALL2(CHKREF(YPdefine_method),T126,T125);
  YastYobjectify = T124;
  regsym(&YastYobjectify,"ast","objectify");
  T128 = YPsig(YPPlist(3,CHKREF(lit_89),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YastYLmodule_bindingG),CHKREF(YastYLstatic_environmentG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_226 = YPmet(FUNCODEREF(fun_226),CHKREF(lit_183),T128,ENVNUL);
  T132 = BOUNDP(YastYobjectify);
  if (T132 != YPfalse) {
    T131 = CHKREF(YastYobjectify);
  } else {
    T131 = YPfalse;
  }
  T130 = fun_226;
  T129 = CALL2(CHKREF(YPdefine_method),T131,T130);
  YastYobjectify = T129;
  regsym(&YastYobjectify,"ast","objectify");
  T133 = YPsig(YPPlist(3,CHKREF(lit_89),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YastYLprogramG),CHKREF(YastYLstatic_environmentG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_227 = YPmet(FUNCODEREF(fun_227),CHKREF(lit_183),T133,ENVNUL);
  T137 = BOUNDP(YastYobjectify);
  if (T137 != YPfalse) {
    T136 = CHKREF(YastYobjectify);
  } else {
    T136 = YPfalse;
  }
  T135 = fun_227;
  T134 = CALL2(CHKREF(YPdefine_method),T136,T135);
  YastYobjectify = T134;
  regsym(&YastYobjectify,"ast","objectify");
  T138 = YPsig(YPPlist(3,CHKREF(lit_89),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,Ynil,CHKREF(YastYLstatic_environmentG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_228 = YPmet(FUNCODEREF(fun_228),CHKREF(lit_183),T138,ENVNUL);
  T142 = BOUNDP(YastYobjectify);
  if (T142 != YPfalse) {
    T141 = CHKREF(YastYobjectify);
  } else {
    T141 = YPfalse;
  }
  T140 = fun_228;
  T139 = CALL2(CHKREF(YPdefine_method),T141,T140);
  YastYobjectify = T139;
  regsym(&YastYobjectify,"ast","objectify");
  T143 = YPsig(YPPlist(3,CHKREF(lit_89),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YastYLstatic_environmentG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_229 = YPmet(FUNCODEREF(fun_229),CHKREF(lit_183),T143,ENVNUL);
  T147 = BOUNDP(YastYobjectify);
  if (T147 != YPfalse) {
    T146 = CHKREF(YastYobjectify);
  } else {
    T146 = YPfalse;
  }
  T145 = fun_229;
  T144 = CALL2(CHKREF(YPdefine_method),T146,T145);
  YastYobjectify = T144;
  regsym(&YastYobjectify,"ast","objectify");
  lit_191 = YPPsym((P)"objectify-quotation");
  lit_192 = YPPsym((P)"value");
  T148 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_185)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YastYLconstantG));
  fun_230 = YPmet(FUNCODEREF(fun_230),CHKREF(lit_191),T148,ENVNUL);
  T152 = BOUNDP(YastYobjectify_quotation);
  if (T152 != YPfalse) {
    T151 = CHKREF(YastYobjectify_quotation);
  } else {
    T151 = YPfalse;
  }
  T150 = fun_230;
  T149 = CALL2(CHKREF(YPdefine_method),T151,T150);
  YastYobjectify_quotation = T149;
  regsym(&YastYobjectify_quotation,"ast","objectify-quotation");
  lit_193 = YPPsym((P)"objectify-raw");
  T153 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_185)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YastYLraw_constantG));
  fun_231 = YPmet(FUNCODEREF(fun_231),CHKREF(lit_193),T153,ENVNUL);
  T157 = BOUNDP(YastYobjectify_raw);
  if (T157 != YPfalse) {
    T156 = CHKREF(YastYobjectify_raw);
  } else {
    T156 = YPfalse;
  }
  T155 = fun_231;
  T154 = CALL2(CHKREF(YPdefine_method),T156,T155);
  YastYobjectify_raw = T154;
  regsym(&YastYobjectify_raw,"ast","objectify-raw");
  lit_194 = YPPsym((P)"objectify-bound?");
  T158 = YPsig(YPPlist(3,CHKREF(lit_89),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLsymG),CHKREF(YastYLstatic_environmentG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_232 = YPmet(FUNCODEREF(fun_232),CHKREF(lit_194),T158,ENVNUL);
  T162 = BOUNDP(YastYobjectify_boundQ);
  if (T162 != YPfalse) {
    T161 = CHKREF(YastYobjectify_boundQ);
  } else {
    T161 = YPfalse;
  }
  T160 = fun_232;
  T159 = CALL2(CHKREF(YPdefine_method),T161,T160);
  YastYobjectify_boundQ = T159;
  regsym(&YastYobjectify_boundQ,"ast","objectify-bound?");
  lit_195 = YPPsym((P)"objectify-compile-time");
  lit_196 = YPPsym((P)"rt?");
  lit_197 = YPPsym((P)"program");
  T163 = YPsig(YPPlist(4,CHKREF(lit_197),CHKREF(lit_185),CHKREF(lit_184),CHKREF(lit_196)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YastYLprogramG));
  fun_233 = YPmet(FUNCODEREF(fun_233),CHKREF(lit_195),T163,ENVNUL);
  T167 = BOUNDP(YastYobjectify_compile_time);
  if (T167 != YPfalse) {
    T166 = CHKREF(YastYobjectify_compile_time);
  } else {
    T166 = YPfalse;
  }
  T165 = fun_233;
  T164 = CALL2(CHKREF(YPdefine_method),T166,T165);
  YastYobjectify_compile_time = T164;
  regsym(&YastYobjectify_compile_time,"ast","objectify-compile-time");
  lit_198 = YPPsym((P)"objectify-alternative");
  lit_199 = YPPsym((P)"a");
  T168 = YPsig(YPPlist(5,CHKREF(lit_92),CHKREF(lit_142),CHKREF(lit_199),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(5,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)5),CHKREF(YastYLalternativeG));
  fun_234 = YPmet(FUNCODEREF(fun_234),CHKREF(lit_198),T168,ENVNUL);
  T172 = BOUNDP(YastYobjectify_alternative);
  if (T172 != YPfalse) {
    T171 = CHKREF(YastYobjectify_alternative);
  } else {
    T171 = YPfalse;
  }
  T170 = fun_234;
  T169 = CALL2(CHKREF(YPdefine_method),T171,T170);
  YastYobjectify_alternative = T169;
  regsym(&YastYobjectify_alternative,"ast","objectify-alternative");
  lit_200 = YPPsym((P)"sequentialize");
  lit_201 = YPPsym((P)"e*");
  T174 = YPsig(YPPlist(1,CHKREF(lit_201)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_235 = YPmet(FUNCODEREF(fun_loop_235),CHKREF(lit_143),T174,ENVNUL);
  T173 = YPsig(YPPlist(1,CHKREF(lit_201)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YastYLprogramG));
  fun_236 = YPmet(FUNCODEREF(fun_236),CHKREF(lit_200),T173,ENVNUL);
  T178 = BOUNDP(YastYsequentialize);
  if (T178 != YPfalse) {
    T177 = CHKREF(YastYsequentialize);
  } else {
    T177 = YPfalse;
  }
  T176 = fun_236;
  T175 = CALL2(CHKREF(YPdefine_method),T177,T176);
  YastYsequentialize = T175;
  regsym(&YastYsequentialize,"ast","sequentialize");
  lit_202 = YPPsym((P)"objectify-sequential");
  T180 = YPsig(YPPlist(2,CHKREF(lit_144),CHKREF(lit_201)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_237 = YPmet(FUNCODEREF(fun_loop_237),CHKREF(lit_143),T180,ENVNUL);
  T179 = YPsig(YPPlist(3,CHKREF(lit_201),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLlstG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YastYLprogramG));
  fun_238 = YPmet(FUNCODEREF(fun_238),CHKREF(lit_202),T179,ENVNUL);
  T184 = BOUNDP(YastYobjectify_sequential);
  if (T184 != YPfalse) {
    T183 = CHKREF(YastYobjectify_sequential);
  } else {
    T183 = YPfalse;
  }
  T182 = fun_238;
  T181 = CALL2(CHKREF(YPdefine_method),T183,T182);
  YastYobjectify_sequential = T181;
  regsym(&YastYobjectify_sequential,"ast","objectify-sequential");
  lit_203 = YPPsym((P)"objectify-application");
  lit_204 = YPPsym((P)"ff");
  T186 = YPsig(YPPlist(1,CHKREF(lit_89)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_239 = YPmet(FUNCODEREF(fun_239),YPfalse,T186,ENVNUL);
  T185 = YPsig(YPPlist(4,CHKREF(lit_204),CHKREF(lit_201),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(4,CHKREF(YastYLast_methodG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YastYLprogramG));
  fun_240 = YPmet(FUNCODEREF(fun_240),CHKREF(lit_203),T185,ENVNUL);
  T190 = BOUNDP(YastYobjectify_application);
  if (T190 != YPfalse) {
    T189 = CHKREF(YastYobjectify_application);
  } else {
    T189 = YPfalse;
  }
  T188 = fun_240;
  T187 = CALL2(CHKREF(YPdefine_method),T189,T188);
  YastYobjectify_application = T187;
  regsym(&YastYobjectify_application,"ast","objectify-application");
  T192 = YPsig(YPPlist(1,CHKREF(lit_89)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_241 = YPmet(FUNCODEREF(fun_241),YPfalse,T192,ENVNUL);
  T191 = YPsig(YPPlist(4,CHKREF(lit_204),CHKREF(lit_201),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(4,CHKREF(YastYLpredefined_referenceG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YastYLprogramG));
  fun_242 = YPmet(FUNCODEREF(fun_242),CHKREF(lit_203),T191,ENVNUL);
  T196 = BOUNDP(YastYobjectify_application);
  if (T196 != YPfalse) {
    T195 = CHKREF(YastYobjectify_application);
  } else {
    T195 = YPfalse;
  }
  T194 = fun_242;
  T193 = CALL2(CHKREF(YPdefine_method),T195,T194);
  YastYobjectify_application = T193;
  regsym(&YastYobjectify_application,"ast","objectify-application");
  T198 = YPsig(YPPlist(1,CHKREF(lit_89)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_243 = YPmet(FUNCODEREF(fun_243),YPfalse,T198,ENVNUL);
  T197 = YPsig(YPPlist(4,CHKREF(lit_204),CHKREF(lit_201),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YastYLprogramG));
  fun_244 = YPmet(FUNCODEREF(fun_244),CHKREF(lit_203),T197,ENVNUL);
  T202 = BOUNDP(YastYobjectify_application);
  if (T202 != YPfalse) {
    T201 = CHKREF(YastYobjectify_application);
  } else {
    T201 = YPfalse;
  }
  T200 = fun_244;
  T199 = CALL2(CHKREF(YPdefine_method),T201,T200);
  YastYobjectify_application = T199;
  regsym(&YastYobjectify_application,"ast","objectify-application");
  lit_205 = YPPsym((P)"process-closed-application");
  lit_206 = YPsb((P)"incorrect regular arity");
  T203 = YPsig(YPPlist(4,CHKREF(lit_187),CHKREF(lit_201),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(4,CHKREF(YastYLast_methodG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YastYLfix_letG));
  fun_245 = YPmet(FUNCODEREF(fun_245),CHKREF(lit_205),T203,ENVNUL);
  T207 = BOUNDP(YastYprocess_closed_application);
  if (T207 != YPfalse) {
    T206 = CHKREF(YastYprocess_closed_application);
  } else {
    T206 = YPfalse;
  }
  T205 = fun_245;
  T204 = CALL2(CHKREF(YPdefine_method),T206,T205);
  YastYprocess_closed_application = T204;
  regsym(&YastYprocess_closed_application,"ast","process-closed-application");
  lit_207 = YPPsym((P)"process-nary-closed-application");
  lit_208 = YPPsym((P)"gather-arguments");
  lit_209 = YPPsym((P)"v*");
  lit_210 = YPsb((P)"incorrect dotted arity");
  lit_211 = YPPsym((P)"pack-nary-args");
  lit_212 = YPPsym((P)"%pair");
  lit_213 = YPPsym((P)"quote");
  T210 = YPsig(YPPlist(2,CHKREF(lit_201),CHKREF(lit_209)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_gather_arguments_246 = YPmet(FUNCODEREF(fun_gather_arguments_246),CHKREF(lit_208),T210,ENVNUL);
  T209 = YPsig(YPPlist(1,CHKREF(lit_201)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_pack_nary_args_247 = YPmet(FUNCODEREF(fun_pack_nary_args_247),CHKREF(lit_211),T209,ENVNUL);
  T208 = YPsig(YPPlist(4,CHKREF(lit_187),CHKREF(lit_201),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YastYLfix_letG));
  fun_248 = YPmet(FUNCODEREF(fun_248),CHKREF(lit_207),T208,ENVNUL);
  T214 = BOUNDP(YastYprocess_nary_closed_application);
  if (T214 != YPfalse) {
    T213 = CHKREF(YastYprocess_nary_closed_application);
  } else {
    T213 = YPfalse;
  }
  T212 = fun_248;
  T211 = CALL2(CHKREF(YPdefine_method),T213,T212);
  YastYprocess_nary_closed_application = T211;
  regsym(&YastYprocess_nary_closed_application,"ast","process-nary-closed-application");
  lit_214 = YPPsym((P)"convert2arguments");
  T215 = YPsig(YPPlist(1,CHKREF(lit_201)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_249 = YPmet(FUNCODEREF(fun_249),CHKREF(lit_214),T215,ENVNUL);
  T219 = BOUNDP(YastYconvert2arguments);
  if (T219 != YPfalse) {
    T218 = CHKREF(YastYconvert2arguments);
  } else {
    T218 = YPfalse;
  }
  T217 = fun_249;
  T216 = CALL2(CHKREF(YPdefine_method),T218,T217);
  YastYconvert2arguments = T216;
  regsym(&YastYconvert2arguments,"ast","convert2arguments");
  lit_215 = YPPsym((P)"objectify-assignment");
  lit_216 = YPsb((P)"Unsupported Set!: %=");
  T220 = YPsig(YPPlist(4,CHKREF(lit_182),CHKREF(lit_89),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(4,CHKREF(YLlstG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YastYLprogramG));
  fun_250 = YPmet(FUNCODEREF(fun_250),CHKREF(lit_215),T220,ENVNUL);
  T224 = BOUNDP(YastYobjectify_assignment);
  if (T224 != YPfalse) {
    T223 = CHKREF(YastYobjectify_assignment);
  } else {
    T223 = YPfalse;
  }
  T222 = fun_250;
  T221 = CALL2(CHKREF(YPdefine_method),T223,T222);
  YastYobjectify_assignment = T221;
  regsym(&YastYobjectify_assignment,"ast","objectify-assignment");
  T225 = YPsig(YPPlist(4,CHKREF(lit_182),CHKREF(lit_89),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(4,CHKREF(YLsymG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YastYLassignmentG));
  fun_251 = YPmet(FUNCODEREF(fun_251),CHKREF(lit_215),T225,ENVNUL);
  T229 = BOUNDP(YastYobjectify_assignment);
  if (T229 != YPfalse) {
    T228 = CHKREF(YastYobjectify_assignment);
  } else {
    T228 = YPfalse;
  }
  T227 = fun_251;
  T226 = CALL2(CHKREF(YPdefine_method),T228,T227);
  YastYobjectify_assignment = T226;
  regsym(&YastYobjectify_assignment,"ast","objectify-assignment");
  lit_217 = YPPsym((P)"objectify-assignment-using");
  lit_218 = YPPsym((P)"val");
  lit_219 = YPPsym((P)"ref");
  T230 = YPsig(YPPlist(2,CHKREF(lit_219),CHKREF(lit_218)),YPPlist(2,CHKREF(YastYLlocal_referenceG),CHKREF(YastYLprogramG)),YPfalse,YPint((P)2),CHKREF(YastYLlocal_assignmentG));
  fun_252 = YPmet(FUNCODEREF(fun_252),CHKREF(lit_217),T230,ENVNUL);
  T234 = BOUNDP(YastYobjectify_assignment_using);
  if (T234 != YPfalse) {
    T233 = CHKREF(YastYobjectify_assignment_using);
  } else {
    T233 = YPfalse;
  }
  T232 = fun_252;
  T231 = CALL2(CHKREF(YPdefine_method),T233,T232);
  YastYobjectify_assignment_using = T231;
  regsym(&YastYobjectify_assignment_using,"ast","objectify-assignment-using");
  T235 = YPsig(YPPlist(2,CHKREF(lit_219),CHKREF(lit_218)),YPPlist(2,CHKREF(YastYLglobal_referenceG),CHKREF(YastYLprogramG)),YPfalse,YPint((P)2),CHKREF(YastYLglobal_assignmentG));
  fun_253 = YPmet(FUNCODEREF(fun_253),CHKREF(lit_217),T235,ENVNUL);
  T239 = BOUNDP(YastYobjectify_assignment_using);
  if (T239 != YPfalse) {
    T238 = CHKREF(YastYobjectify_assignment_using);
  } else {
    T238 = YPfalse;
  }
  T237 = fun_253;
  T236 = CALL2(CHKREF(YPdefine_method),T238,T237);
  YastYobjectify_assignment_using = T236;
  regsym(&YastYobjectify_assignment_using,"ast","objectify-assignment-using");
  T240 = YPsig(YPPlist(2,CHKREF(lit_219),CHKREF(lit_218)),YPPlist(2,CHKREF(YastYLruntime_referenceG),CHKREF(YastYLprogramG)),YPfalse,YPint((P)2),CHKREF(YastYLruntime_assignmentG));
  fun_254 = YPmet(FUNCODEREF(fun_254),CHKREF(lit_217),T240,ENVNUL);
  T244 = BOUNDP(YastYobjectify_assignment_using);
  if (T244 != YPfalse) {
    T243 = CHKREF(YastYobjectify_assignment_using);
  } else {
    T243 = YPfalse;
  }
  T242 = fun_254;
  T241 = CALL2(CHKREF(YPdefine_method),T243,T242);
  YastYobjectify_assignment_using = T241;
  regsym(&YastYobjectify_assignment_using,"ast","objectify-assignment-using");
  lit_220 = YPPsym((P)"update-binding-kind");
  lit_221 = YPPsym((P)"new-kind");
  lit_222 = YPsb((P)"Cannot set type of runtime binding %s to %s.\n");
  T245 = YPsig(YPPlist(2,CHKREF(lit_182),CHKREF(lit_221)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYupdate_binding_kind = YPmet(FUNCODEREF(YastYupdate_binding_kind),CHKREF(lit_220),T245,ENVNUL);
  T246 = YastYupdate_binding_kind;
  YastYupdate_binding_kind = T246;
  regsym(&YastYupdate_binding_kind,"ast","update-binding-kind");
  lit_223 = YPPsym((P)"ast-define-binding");
  lit_224 = YPPsym((P)"kind");
  lit_225 = YPPsym((P)"defining-method?");
  lit_226 = YPPsym((P)"name");
  lit_227 = YPsb((P)"%s: warning: '%s' clobbers binding from %s.\n");
  T247 = YPsig(YPPlist(4,CHKREF(lit_185),CHKREF(lit_226),CHKREF(lit_225),CHKREF(lit_224)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_256 = YPmet(FUNCODEREF(fun_256),CHKREF(lit_223),T247,ENVNUL);
  T251 = BOUNDP(YastYast_define_binding);
  if (T251 != YPfalse) {
    T250 = CHKREF(YastYast_define_binding);
  } else {
    T250 = YPfalse;
  }
  T249 = fun_256;
  T248 = CALL2(CHKREF(YPdefine_method),T250,T249);
  YastYast_define_binding = T248;
  regsym(&YastYast_define_binding,"ast","ast-define-binding");
  YastYTmacro_tracingQT = YPfalse;
  regsym(&YastYTmacro_tracingQT,"ast","*macro-tracing?*");
  lit_228 = YPPsym((P)"objectify-definition");
  lit_229 = YPPsym((P)"var");
  T252 = YPsig(YPPlist(3,CHKREF(lit_229),CHKREF(lit_89),CHKREF(lit_185)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_257 = YPmet(FUNCODEREF(fun_257),CHKREF(lit_228),T252,ENVNUL);
  T256 = BOUNDP(YastYobjectify_definition);
  if (T256 != YPfalse) {
    T255 = CHKREF(YastYobjectify_definition);
  } else {
    T255 = YPfalse;
  }
  T254 = fun_257;
  T253 = CALL2(CHKREF(YPdefine_method),T255,T254);
  YastYobjectify_definition = T253;
  regsym(&YastYobjectify_definition,"ast","objectify-definition");
  lit_230 = YPPsym((P)"%%macro");
  lit_231 = YPPsym((P)"env-or-false");
  lit_232 = YPPsym((P)"expander");
  lit_233 = YPPsym((P)"modname");
  lit_234 = YPPsym((P)"expand");
  lit_235 = YPsb((P)"\n");
  lit_236 = YPsb((P)"  => ");
  lit_237 = YPsb((P)"\n");
  lit_238 = YPsb((P)"MACRO ");
  T258 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_expand_258 = YPmet(FUNCODEREF(fun_expand_258),CHKREF(lit_234),T258,ENVNUL);
  T257 = YPsig(YPPlist(4,CHKREF(lit_233),CHKREF(lit_226),CHKREF(lit_232),CHKREF(lit_231)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YastYLmodule_bindingG));
  YPPmacro = YPmet(FUNCODEREF(YPPmacro),CHKREF(lit_230),T257,ENVNUL);
  T259 = YPPmacro;
  YPPmacro = T259;
  regsym(&YPPmacro,"boot","%%macro");
  lit_239 = YPPsym((P)"objectify-syntax-definition");
  T260 = YPsig(YPPlist(4,CHKREF(lit_226),CHKREF(lit_89),CHKREF(lit_185),CHKREF(lit_196)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_260 = YPmet(FUNCODEREF(fun_260),CHKREF(lit_239),T260,ENVNUL);
  T264 = BOUNDP(YastYobjectify_syntax_definition);
  if (T264 != YPfalse) {
    T263 = CHKREF(YastYobjectify_syntax_definition);
  } else {
    T263 = YPfalse;
  }
  T262 = fun_260;
  T261 = CALL2(CHKREF(YPdefine_method),T263,T262);
  YastYobjectify_syntax_definition = T261;
  regsym(&YastYobjectify_syntax_definition,"ast","objectify-syntax-definition");
  lit_240 = YPPsym((P)"objectify-function-definition");
  T265 = YPsig(YPPlist(3,CHKREF(lit_226),CHKREF(lit_89),CHKREF(lit_185)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YastYLast_function_definitionG));
  fun_261 = YPmet(FUNCODEREF(fun_261),CHKREF(lit_240),T265,ENVNUL);
  T269 = BOUNDP(YastYobjectify_function_definition);
  if (T269 != YPfalse) {
    T268 = CHKREF(YastYobjectify_function_definition);
  } else {
    T268 = YPfalse;
  }
  T267 = fun_261;
  T266 = CALL2(CHKREF(YPdefine_method),T268,T267);
  YastYobjectify_function_definition = T266;
  regsym(&YastYobjectify_function_definition,"ast","objectify-function-definition");
  lit_241 = YPPsym((P)"module-binding");
  T270 = YPsig(YPPlist(1,CHKREF(lit_224)),YPPlist(1,CHKREF(YLsymG)),YPfalse,YPint((P)1),CHKREF(YastYLmodule_bindingG));
  YastYmodule_binding = YPmet(FUNCODEREF(YastYmodule_binding),CHKREF(lit_241),T270,ENVNUL);
  T271 = YastYmodule_binding;
  YastYmodule_binding = T271;
  regsym(&YastYmodule_binding,"ast","module-binding");
  lit_242 = YPPsym((P)"objectify-primitive-definition");
  lit_243 = YPPsym((P)"body");
  lit_244 = YPPsym((P)"sig");
  lit_245 = YPPsym((P)"predefined");
  T274 = YPsig(YPPlist(4,CHKREF(lit_226),CHKREF(lit_244),CHKREF(lit_243),CHKREF(lit_185)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YastYLast_primitive_definitionG));
  T273 = fun_263 = YPmet(FUNCODEREF(fun_263),CHKREF(lit_242),T274,ENVNUL);
  T279 = BOUNDP(YastYobjectify_primitive_definition);
  if (T279 != YPfalse) {
    T278 = CHKREF(YastYobjectify_primitive_definition);
  } else {
    T278 = YPfalse;
  }
  T277 = fun_263;
  T276 = CALL2(CHKREF(YPdefine_method),T278,T277);
  T275 = YastYobjectify_primitive_definition = T276;
  regsym(&YastYobjectify_primitive_definition,"ast","objectify-primitive-definition");
  T272 = T275;
  return T272;
}

P YastY___main_5___() {
  P T319,T318,T317,T316,T315,T314,T313,T312,T311,T310,T309,T308,T307,T306,T305,T304;
  P T303,T302,T301,T300,T299,T298,T297,T296,T295,T294,T293,T292,T291,T290,T289,T288;
  P T287,T286,T285,T284,T283,T282,T281,T280,T279,T278,T277,T276,T275,T274,T273,T272;
  P T271,T270,T269,T268,T267,T266,T265,T264,T263,T262,T261,T260,T259,T258,T257,T256;
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
  lit_246 = YPPsym((P)"objectify-generic-definition");
  T0 = YPsig(YPPlist(3,CHKREF(lit_226),CHKREF(lit_244),CHKREF(lit_185)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YastYLast_generic_definitionG));
  fun_264 = YPmet(FUNCODEREF(fun_264),CHKREF(lit_246),T0,ENVNUL);
  T4 = BOUNDP(YastYobjectify_generic_definition);
  if (T4 != YPfalse) {
    T3 = CHKREF(YastYobjectify_generic_definition);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_264;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YastYobjectify_generic_definition = T1;
  regsym(&YastYobjectify_generic_definition,"ast","objectify-generic-definition");
  lit_247 = YPPsym((P)"objectify-method-definition");
  lit_248 = YPPsym((P)"%define-method");
  lit_249 = YPPsym((P)"bound?");
  lit_250 = YPPsym((P)"if");
  T5 = YPsig(YPPlist(3,CHKREF(lit_226),CHKREF(lit_89),CHKREF(lit_185)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YastYLast_method_definitionG));
  fun_265 = YPmet(FUNCODEREF(fun_265),CHKREF(lit_247),T5,ENVNUL);
  T9 = BOUNDP(YastYobjectify_method_definition);
  if (T9 != YPfalse) {
    T8 = CHKREF(YastYobjectify_method_definition);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_265;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  YastYobjectify_method_definition = T6;
  regsym(&YastYobjectify_method_definition,"ast","objectify-method-definition");
  lit_251 = YPPsym((P)"objectify-function");
  T10 = YPsig(YPPlist(4,CHKREF(lit_244),CHKREF(lit_243),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YastYLast_methodG));
  fun_266 = YPmet(FUNCODEREF(fun_266),CHKREF(lit_251),T10,ENVNUL);
  T14 = BOUNDP(YastYobjectify_function);
  if (T14 != YPfalse) {
    T13 = CHKREF(YastYobjectify_function);
  } else {
    T13 = YPfalse;
  }
  T12 = fun_266;
  T11 = CALL2(CHKREF(YPdefine_method),T13,T12);
  YastYobjectify_function = T11;
  regsym(&YastYobjectify_function,"ast","objectify-function");
  lit_252 = YPPsym((P)"...");
  YastYDsexpr_optionals_tag = CHKREF(lit_252);
  regsym(&YastYDsexpr_optionals_tag,"ast","$sexpr-optionals-tag");
  lit_253 = YPPsym((P)"<opts>");
  YastYDsexpr_optionals_type_name = CHKREF(lit_253);
  regsym(&YastYDsexpr_optionals_type_name,"ast","$sexpr-optionals-type-name");
  lit_254 = YPPsym((P)"objectify-signature");
  lit_255 = YPPsym((P)"col");
  lit_256 = YPPsym((P)"types");
  lit_257 = YPPsym((P)"names");
  lit_258 = YPPsym((P)"bindings");
  lit_259 = YPPsym((P)"nary?");
  lit_260 = YPPsym((P)"params");
  T16 = YPsig(YPPlist(5,CHKREF(lit_260),CHKREF(lit_259),CHKREF(lit_258),CHKREF(lit_257),CHKREF(lit_256)),YPPlist(5,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)5),CHKREF(YLanyG));
  fun_col_267 = YPmet(FUNCODEREF(fun_col_267),CHKREF(lit_255),T16,ENVNUL);
  T15 = YPsig(YPPlist(2,CHKREF(lit_244),CHKREF(lit_185)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YastYLast_signatureG));
  fun_268 = YPmet(FUNCODEREF(fun_268),CHKREF(lit_254),T15,ENVNUL);
  T20 = BOUNDP(YastYobjectify_signature);
  if (T20 != YPfalse) {
    T19 = CHKREF(YastYobjectify_signature);
  } else {
    T19 = YPfalse;
  }
  T18 = fun_268;
  T17 = CALL2(CHKREF(YPdefine_method),T19,T18);
  YastYobjectify_signature = T17;
  regsym(&YastYobjectify_signature,"ast","objectify-signature");
  lit_261 = YPPsym((P)"compute-local-reference-offsets");
  lit_262 = YPPsym((P)"i");
  lit_263 = YPsb((P)"DIDN'T FIND LOCAL BINDING %= IN %=");
  lit_264 = YPPsym((P)"find");
  lit_265 = YPPsym((P)"j");
  T23 = YPsig(YPPlist(2,CHKREF(lit_265),CHKREF(lit_258)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_find_269 = YPmet(FUNCODEREF(fun_find_269),CHKREF(lit_264),T23,ENVNUL);
  T22 = YPsig(YPPlist(2,CHKREF(lit_262),CHKREF(lit_185)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_270 = YPmet(FUNCODEREF(fun_loop_270),CHKREF(lit_143),T22,ENVNUL);
  T21 = YPsig(YPPlist(2,CHKREF(lit_182),CHKREF(lit_185)),YPPlist(2,CHKREF(YastYLlocal_bindingG),CHKREF(YastYLstatic_local_environmentG)),YPfalse,YPint((P)2),CHKREF(YLtupG));
  fun_271 = YPmet(FUNCODEREF(fun_271),CHKREF(lit_261),T21,ENVNUL);
  T27 = BOUNDP(YastYcompute_local_reference_offsets);
  if (T27 != YPfalse) {
    T26 = CHKREF(YastYcompute_local_reference_offsets);
  } else {
    T26 = YPfalse;
  }
  T25 = fun_271;
  T24 = CALL2(CHKREF(YPdefine_method),T26,T25);
  YastYcompute_local_reference_offsets = T24;
  regsym(&YastYcompute_local_reference_offsets,"ast","compute-local-reference-offsets");
  lit_266 = YPPsym((P)"objectify-binding");
  lit_267 = YPPsym((P)"b");
  lit_268 = YPPsym((P)"n");
  T28 = YPsig(YPPlist(3,CHKREF(lit_268),CHKREF(lit_267),CHKREF(lit_185)),YPPlist(3,CHKREF(YLanyG),CHKREF(YastYLlocal_bindingG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YastYLlocal_referenceG));
  fun_272 = YPmet(FUNCODEREF(fun_272),CHKREF(lit_266),T28,ENVNUL);
  T32 = BOUNDP(YastYobjectify_binding);
  if (T32 != YPfalse) {
    T31 = CHKREF(YastYobjectify_binding);
  } else {
    T31 = YPfalse;
  }
  T30 = fun_272;
  T29 = CALL2(CHKREF(YPdefine_method),T31,T30);
  YastYobjectify_binding = T29;
  regsym(&YastYobjectify_binding,"ast","objectify-binding");
  lit_269 = YPPsym((P)"binding-reference-prototype");
  lit_270 = YPsb((P)"Unknown binding-kind %=");
  T33 = YPsig(YPPlist(1,CHKREF(lit_267)),YPPlist(1,CHKREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),CHKREF(YastYLreferenceG));
  fun_273 = YPmet(FUNCODEREF(fun_273),CHKREF(lit_269),T33,ENVNUL);
  T37 = BOUNDP(YastYbinding_reference_prototype);
  if (T37 != YPfalse) {
    T36 = CHKREF(YastYbinding_reference_prototype);
  } else {
    T36 = YPfalse;
  }
  T35 = fun_273;
  T34 = CALL2(CHKREF(YPdefine_method),T36,T35);
  YastYbinding_reference_prototype = T34;
  regsym(&YastYbinding_reference_prototype,"ast","binding-reference-prototype");
  T38 = YPsig(YPPlist(3,CHKREF(lit_268),CHKREF(lit_267),CHKREF(lit_185)),YPPlist(3,CHKREF(YLanyG),CHKREF(YastYLmodule_bindingG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_274 = YPmet(FUNCODEREF(fun_274),CHKREF(lit_266),T38,ENVNUL);
  T42 = BOUNDP(YastYobjectify_binding);
  if (T42 != YPfalse) {
    T41 = CHKREF(YastYobjectify_binding);
  } else {
    T41 = YPfalse;
  }
  T40 = fun_274;
  T39 = CALL2(CHKREF(YPdefine_method),T41,T40);
  YastYobjectify_binding = T39;
  regsym(&YastYobjectify_binding,"ast","objectify-binding");
  T43 = YPsig(YPPlist(3,CHKREF(lit_268),CHKREF(lit_267),CHKREF(lit_185)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YastYLreferenceG));
  fun_275 = YPmet(FUNCODEREF(fun_275),CHKREF(lit_266),T43,ENVNUL);
  T47 = BOUNDP(YastYobjectify_binding);
  if (T47 != YPfalse) {
    T46 = CHKREF(YastYobjectify_binding);
  } else {
    T46 = YPfalse;
  }
  T45 = fun_275;
  T44 = CALL2(CHKREF(YPdefine_method),T46,T45);
  YastYobjectify_binding = T44;
  regsym(&YastYobjectify_binding,"ast","objectify-binding");
  lit_271 = YPPsym((P)"default-type");
  lit_272 = YPPsym((P)"<any>");
  T48 = YPsig(YPPlist(1,CHKREF(lit_185)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_276 = YPmet(FUNCODEREF(fun_276),CHKREF(lit_271),T48,ENVNUL);
  T52 = BOUNDP(YastYdefault_type);
  if (T52 != YPfalse) {
    T51 = CHKREF(YastYdefault_type);
  } else {
    T51 = YPfalse;
  }
  T50 = fun_276;
  T49 = CALL2(CHKREF(YPdefine_method),T51,T50);
  YastYdefault_type = T49;
  regsym(&YastYdefault_type,"ast","default-type");
  lit_273 = YPPsym((P)"objectify-free-global-reference");
  T53 = YPsig(YPPlist(2,CHKREF(lit_226),CHKREF(lit_185)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YastYLreferenceG));
  fun_277 = YPmet(FUNCODEREF(fun_277),CHKREF(lit_273),T53,ENVNUL);
  T57 = BOUNDP(YastYobjectify_free_global_reference);
  if (T57 != YPfalse) {
    T56 = CHKREF(YastYobjectify_free_global_reference);
  } else {
    T56 = YPfalse;
  }
  T55 = fun_277;
  T54 = CALL2(CHKREF(YPdefine_method),T56,T55);
  YastYobjectify_free_global_reference = T54;
  regsym(&YastYobjectify_free_global_reference,"ast","objectify-free-global-reference");
  lit_274 = YPPsym((P)"foreign-name?");
  T58 = YPsig(YPPlist(1,CHKREF(lit_226)),YPPlist(1,CHKREF(YLsymG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  YastYforeign_nameQ = YPmet(FUNCODEREF(YastYforeign_nameQ),CHKREF(lit_274),T58,ENVNUL);
  T59 = YastYforeign_nameQ;
  YastYforeign_nameQ = T59;
  regsym(&YastYforeign_nameQ,"ast","foreign-name?");
  lit_275 = YPPsym((P)"objectify-foreign-reference");
  lit_276 = YPsb((P)"No binding %s in %s.\n");
  lit_277 = YPsb((P)"Malformed foreign name %s.\n");
  T60 = YPsig(YPPlist(2,CHKREF(lit_226),CHKREF(lit_185)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YastYLreferenceG));
  fun_279 = YPmet(FUNCODEREF(fun_279),CHKREF(lit_275),T60,ENVNUL);
  T64 = BOUNDP(YastYobjectify_foreign_reference);
  if (T64 != YPfalse) {
    T63 = CHKREF(YastYobjectify_foreign_reference);
  } else {
    T63 = YPfalse;
  }
  T62 = fun_279;
  T61 = CALL2(CHKREF(YPdefine_method),T63,T62);
  YastYobjectify_foreign_reference = T61;
  regsym(&YastYobjectify_foreign_reference,"ast","objectify-foreign-reference");
  lit_278 = YPPsym((P)"objectify-symbol");
  T65 = YPsig(YPPlist(2,CHKREF(lit_226),CHKREF(lit_185)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_280 = YPmet(FUNCODEREF(fun_280),CHKREF(lit_278),T65,ENVNUL);
  T69 = BOUNDP(YastYobjectify_symbol);
  if (T69 != YPfalse) {
    T68 = CHKREF(YastYobjectify_symbol);
  } else {
    T68 = YPfalse;
  }
  T67 = fun_280;
  T66 = CALL2(CHKREF(YPdefine_method),T68,T67);
  YastYobjectify_symbol = T66;
  regsym(&YastYobjectify_symbol,"ast","objectify-symbol");
  lit_279 = YPPsym((P)"ftype");
  lit_280 = YPPsym((P)"<fun>");
  T70 = YPsig(YPPlist(1,CHKREF(lit_185)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_281 = YPmet(FUNCODEREF(fun_281),CHKREF(lit_279),T70,ENVNUL);
  T74 = BOUNDP(YastYftype);
  if (T74 != YPfalse) {
    T73 = CHKREF(YastYftype);
  } else {
    T73 = YPfalse;
  }
  T72 = fun_281;
  T71 = CALL2(CHKREF(YPdefine_method),T73,T72);
  YastYftype = T71;
  regsym(&YastYftype,"ast","ftype");
  T77 = (P)YPpair(CHKREF(YastYLprogramsG),Ynil);
  T76 = (P)YPpair(CHKREF(YLlstG),T77);
  T75 = CALL3(CHKREF(YPisa),T76,Ynil,Ynil);
  YastYLfunctionsG = T75;
  regsym(&YastYLfunctionsG,"ast","<functions>");
  T83 = (P)YPpair(CHKREF(YastYLfunctionsG),Ynil);
  T82 = (P)YPpair(CHKREF(Ytail),Ynil);
  T81 = (P)YPpair(CHKREF(Yhead),T82);
  T80 = (P)YPpair(YPfalse,Ynil);
  T79 = (P)YPpair(YPfalse,T80);
  T78 = CALL3(CHKREF(YPisa),T83,T81,T79);
  YastYDfunctions_empty = T78;
  regsym(&YastYDfunctions_empty,"ast","$functions-empty");
  T84 = YPsig(YPPlist(2,CHKREF(lit_103),CHKREF(lit_9)),YPPlist(2,CHKREF(YastYLfunctionsG),CHKREF(YastYLfunctionsG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_282 = YPmet(FUNCODEREF(fun_282),CHKREF(lit_104),T84,ENVNUL);
  T88 = BOUNDP(YruntimeYas);
  if (T88 != YPfalse) {
    T87 = CHKREF(YruntimeYas);
  } else {
    T87 = YPfalse;
  }
  T86 = fun_282;
  T85 = CALL2(CHKREF(YPdefine_method),T87,T86);
  YruntimeYas = T85;
  regsym(&YruntimeYas,"runtime","as");
  T89 = YPsig(YPPlist(2,CHKREF(lit_103),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YastYLfunctionsG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_283 = YPmet(FUNCODEREF(fun_283),CHKREF(lit_104),T89,ENVNUL);
  T93 = BOUNDP(YruntimeYas);
  if (T93 != YPfalse) {
    T92 = CHKREF(YruntimeYas);
  } else {
    T92 = YPfalse;
  }
  T91 = fun_283;
  T90 = CALL2(CHKREF(YPdefine_method),T92,T91);
  YruntimeYas = T90;
  regsym(&YruntimeYas,"runtime","as");
  T94 = YPsig(YPPlist(2,CHKREF(lit_103),CHKREF(lit_9)),YPPlist(2,CHKREF(YastYLfunctionsG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_284 = YPmet(FUNCODEREF(fun_284),CHKREF(lit_104),T94,ENVNUL);
  T98 = BOUNDP(YruntimeYas);
  if (T98 != YPfalse) {
    T97 = CHKREF(YruntimeYas);
  } else {
    T97 = YPfalse;
  }
  T96 = fun_284;
  T95 = CALL2(CHKREF(YPdefine_method),T97,T96);
  YruntimeYas = T95;
  regsym(&YruntimeYas,"runtime","as");
  lit_281 = YPPsym((P)"functions");
  T99 = YPsig(YPPlist(2,CHKREF(lit_95),CHKREF(lit_92)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYfunctions = YPmet(FUNCODEREF(YastYfunctions),CHKREF(lit_281),T99,ENVNUL);
  T100 = YastYfunctions;
  YastYfunctions = T100;
  regsym(&YastYfunctions,"ast","functions");
  T101 = YPsig(YPPlist(1,CHKREF(lit_89)),YPPlist(1,CHKREF(YastYLfunctionsG)),YPfalse,YPint((P)1),CHKREF(YastYLfunctionsG));
  fun_286 = YPmet(FUNCODEREF(fun_286),CHKREF(lit_90),T101,ENVNUL);
  T105 = BOUNDP(YruntimeYempty);
  if (T105 != YPfalse) {
    T104 = CHKREF(YruntimeYempty);
  } else {
    T104 = YPfalse;
  }
  T103 = fun_286;
  T102 = CALL2(CHKREF(YPdefine_method),T104,T103);
  YruntimeYempty = T102;
  regsym(&YruntimeYempty,"runtime","empty");
  lit_282 = YPPsym((P)"objectify-locals");
  lit_283 = YPPsym((P)"bodies");
  lit_284 = YPPsym((P)"sigs");
  T108 = YPsig(YPPlist(2,CHKREF(lit_187),CHKREF(lit_267)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_287 = YPmet(FUNCODEREF(fun_287),YPfalse,T108,ENVNUL);
  T107 = YPsig(YPPlist(1,CHKREF(lit_268)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_288 = YPmet(FUNCODEREF(fun_288),YPfalse,T107,ENVNUL);
  T106 = YPsig(YPPlist(6,CHKREF(lit_257),CHKREF(lit_284),CHKREF(lit_283),CHKREF(lit_243),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(6,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)6),CHKREF(YastYLlocalsG));
  fun_289 = YPmet(FUNCODEREF(fun_289),CHKREF(lit_282),T106,ENVNUL);
  T112 = BOUNDP(YastYobjectify_locals);
  if (T112 != YPfalse) {
    T111 = CHKREF(YastYobjectify_locals);
  } else {
    T111 = YPfalse;
  }
  T110 = fun_289;
  T109 = CALL2(CHKREF(YPdefine_method),T111,T110);
  YastYobjectify_locals = T109;
  regsym(&YastYobjectify_locals,"ast","objectify-locals");
  lit_285 = YPPsym((P)"objectify-bind-exit");
  T113 = YPsig(YPPlist(4,CHKREF(lit_226),CHKREF(lit_243),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YastYLbind_exitG));
  fun_290 = YPmet(FUNCODEREF(fun_290),CHKREF(lit_285),T113,ENVNUL);
  T117 = BOUNDP(YastYobjectify_bind_exit);
  if (T117 != YPfalse) {
    T116 = CHKREF(YastYobjectify_bind_exit);
  } else {
    T116 = YPfalse;
  }
  T115 = fun_290;
  T114 = CALL2(CHKREF(YPdefine_method),T116,T115);
  YastYobjectify_bind_exit = T114;
  regsym(&YastYobjectify_bind_exit,"ast","objectify-bind-exit");
  lit_286 = YPPsym((P)"objectify-unwind-protect");
  lit_287 = YPPsym((P)"cleanup-forms");
  lit_288 = YPPsym((P)"protected-form");
  T118 = YPsig(YPPlist(4,CHKREF(lit_288),CHKREF(lit_287),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YastYLunwind_protectG));
  fun_291 = YPmet(FUNCODEREF(fun_291),CHKREF(lit_286),T118,ENVNUL);
  T122 = BOUNDP(YastYobjectify_unwind_protect);
  if (T122 != YPfalse) {
    T121 = CHKREF(YastYobjectify_unwind_protect);
  } else {
    T121 = YPfalse;
  }
  T120 = fun_291;
  T119 = CALL2(CHKREF(YPdefine_method),T121,T120);
  YastYobjectify_unwind_protect = T119;
  regsym(&YastYobjectify_unwind_protect,"ast","objectify-unwind-protect");
  lit_289 = YPPsym((P)"objectify-monitor");
  lit_290 = YPPsym((P)"handler");
  lit_291 = YPPsym((P)"test");
  lit_292 = YPPsym((P)"info");
  lit_293 = YPPsym((P)"type");
  T123 = YPsig(YPPlist(7,CHKREF(lit_293),CHKREF(lit_292),CHKREF(lit_291),CHKREF(lit_290),CHKREF(lit_243),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(7,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)7),CHKREF(YastYLmonitorG));
  fun_292 = YPmet(FUNCODEREF(fun_292),CHKREF(lit_289),T123,ENVNUL);
  T127 = BOUNDP(YastYobjectify_monitor);
  if (T127 != YPfalse) {
    T126 = CHKREF(YastYobjectify_monitor);
  } else {
    T126 = YPfalse;
  }
  T125 = fun_292;
  T124 = CALL2(CHKREF(YPdefine_method),T126,T125);
  YastYobjectify_monitor = T124;
  regsym(&YastYobjectify_monitor,"ast","objectify-monitor");
  lit_294 = YPPsym((P)"objectify-export");
  lit_295 = YPPsym((P)"exit");
  lit_296 = YPsb((P)"Can't export undefined binding %s.\n");
  lit_297 = YPsb((P)"Continue without exporting %s");
  lit_298 = YPsb((P)"Can only export bindings from target environment.\n");
  T133 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_293 = YPmet(FUNCODEREF(fun_293),YPfalse,T133,ENVNUL);
  T132 = YPsig(YPPlist(2,CHKREF(lit_142),CHKREF(lit_185)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_294 = YPmet(FUNCODEREF(fun_294),YPfalse,T132,ENVNUL);
  T131 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_295 = YPmet(FUNCODEREF(fun_295),YPfalse,T131,ENVNUL);
  T130 = YPsig(YPPlist(1,CHKREF(lit_295)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_296 = YPmet(FUNCODEREF(fun_296),YPfalse,T130,ENVNUL);
  T129 = YPsig(YPPlist(1,CHKREF(lit_226)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_297 = YPmet(FUNCODEREF(fun_297),YPfalse,T129,ENVNUL);
  T128 = YPsig(YPPlist(3,CHKREF(lit_257),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YastYLprogramG));
  fun_298 = YPmet(FUNCODEREF(fun_298),CHKREF(lit_294),T128,ENVNUL);
  T137 = BOUNDP(YastYobjectify_export);
  if (T137 != YPfalse) {
    T136 = CHKREF(YastYobjectify_export);
  } else {
    T136 = YPfalse;
  }
  T135 = fun_298;
  T134 = CALL2(CHKREF(YPdefine_method),T136,T135);
  YastYobjectify_export = T134;
  regsym(&YastYobjectify_export,"ast","objectify-export");
  lit_299 = YPPsym((P)"import-global!");
  lit_300 = YPPsym((P)"env");
  lit_301 = YPsb((P)"warning: '%s' from %s clobbers local binding.\n");
  T138 = YPsig(YPPlist(2,CHKREF(lit_267),CHKREF(lit_300)),YPPlist(2,CHKREF(YastYLmodule_bindingG),CHKREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYimport_globalX = YPmet(FUNCODEREF(YastYimport_globalX),CHKREF(lit_299),T138,ENVNUL);
  T139 = YastYimport_globalX;
  YastYimport_globalX = T139;
  regsym(&YastYimport_globalX,"ast","import-global!");
  lit_302 = YPPsym((P)"objectify-use-module");
  T140 = YPsig(YPPlist(3,CHKREF(lit_226),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YastYLprogramG));
  fun_300 = YPmet(FUNCODEREF(fun_300),CHKREF(lit_302),T140,ENVNUL);
  T144 = BOUNDP(YastYobjectify_use_module);
  if (T144 != YPfalse) {
    T143 = CHKREF(YastYobjectify_use_module);
  } else {
    T143 = YPfalse;
  }
  T142 = fun_300;
  T141 = CALL2(CHKREF(YPdefine_method),T143,T142);
  YastYobjectify_use_module = T141;
  regsym(&YastYobjectify_use_module,"ast","objectify-use-module");
  lit_303 = YPPsym((P)"expand-bind-list");
  lit_304 = YPPsym((P)"fail");
  lit_305 = YPPsym((P)"pat");
  lit_306 = YPsb((P)"Expected Pattern List %=\n");
  T145 = YPsig(YPPlist(3,CHKREF(lit_305),CHKREF(lit_229),CHKREF(lit_304)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_301 = YPmet(FUNCODEREF(fun_301),CHKREF(lit_303),T145,ENVNUL);
  T149 = BOUNDP(YastYexpand_bind_list);
  if (T149 != YPfalse) {
    T148 = CHKREF(YastYexpand_bind_list);
  } else {
    T148 = YPfalse;
  }
  T147 = fun_301;
  T146 = CALL2(CHKREF(YPdefine_method),T148,T147);
  YastYexpand_bind_list = T146;
  regsym(&YastYexpand_bind_list,"ast","expand-bind-list");
  lit_307 = YPPsym((P)"match-empty-list");
  T150 = YPsig(YPPlist(3,CHKREF(lit_305),CHKREF(lit_229),CHKREF(lit_304)),YPPlist(3,Ynil,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLlstG));
  fun_302 = YPmet(FUNCODEREF(fun_302),CHKREF(lit_303),T150,ENVNUL);
  T154 = BOUNDP(YastYexpand_bind_list);
  if (T154 != YPfalse) {
    T153 = CHKREF(YastYexpand_bind_list);
  } else {
    T153 = YPfalse;
  }
  T152 = fun_302;
  T151 = CALL2(CHKREF(YPdefine_method),T153,T152);
  YastYexpand_bind_list = T151;
  regsym(&YastYexpand_bind_list,"ast","expand-bind-list");
  lit_308 = YPsb((P)"Unquote Splicing Unexpected Here %=\n");
  lit_309 = YPsb((P)"Unquote Unexpected Here %=\n");
  T155 = YPsig(YPPlist(3,CHKREF(lit_305),CHKREF(lit_229),CHKREF(lit_304)),YPPlist(3,CHKREF(YLlstG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLlstG));
  fun_303 = YPmet(FUNCODEREF(fun_303),CHKREF(lit_303),T155,ENVNUL);
  T159 = BOUNDP(YastYexpand_bind_list);
  if (T159 != YPfalse) {
    T158 = CHKREF(YastYexpand_bind_list);
  } else {
    T158 = YPfalse;
  }
  T157 = fun_303;
  T156 = CALL2(CHKREF(YPdefine_method),T158,T157);
  YastYexpand_bind_list = T156;
  regsym(&YastYexpand_bind_list,"ast","expand-bind-list");
  lit_310 = YPPsym((P)"expand-bind-list*");
  T160 = YPsig(YPPlist(3,CHKREF(lit_305),CHKREF(lit_229),CHKREF(lit_304)),YPPlist(3,Ynil,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_304 = YPmet(FUNCODEREF(fun_304),CHKREF(lit_310),T160,ENVNUL);
  T164 = BOUNDP(YastYexpand_bind_listT);
  if (T164 != YPfalse) {
    T163 = CHKREF(YastYexpand_bind_listT);
  } else {
    T163 = YPfalse;
  }
  T162 = fun_304;
  T161 = CALL2(CHKREF(YPdefine_method),T163,T162);
  YastYexpand_bind_listT = T161;
  regsym(&YastYexpand_bind_listT,"ast","expand-bind-list*");
  lit_311 = YPPsym((P)"let");
  T165 = YPsig(YPPlist(3,CHKREF(lit_305),CHKREF(lit_229),CHKREF(lit_304)),YPPlist(3,CHKREF(YLlstG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_305 = YPmet(FUNCODEREF(fun_305),CHKREF(lit_310),T165,ENVNUL);
  T169 = BOUNDP(YastYexpand_bind_listT);
  if (T169 != YPfalse) {
    T168 = CHKREF(YastYexpand_bind_listT);
  } else {
    T168 = YPfalse;
  }
  T167 = fun_305;
  T166 = CALL2(CHKREF(YPdefine_method),T168,T167);
  YastYexpand_bind_listT = T166;
  regsym(&YastYexpand_bind_listT,"ast","expand-bind-list*");
  lit_312 = YPPsym((P)"expand-bind-element");
  lit_313 = YPPsym((P)"match-atom");
  T170 = YPsig(YPPlist(3,CHKREF(lit_305),CHKREF(lit_229),CHKREF(lit_304)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_306 = YPmet(FUNCODEREF(fun_306),CHKREF(lit_312),T170,ENVNUL);
  T174 = BOUNDP(YastYexpand_bind_element);
  if (T174 != YPfalse) {
    T173 = CHKREF(YastYexpand_bind_element);
  } else {
    T173 = YPfalse;
  }
  T172 = fun_306;
  T171 = CALL2(CHKREF(YPdefine_method),T173,T172);
  YastYexpand_bind_element = T171;
  regsym(&YastYexpand_bind_element,"ast","expand-bind-element");
  lit_314 = YPPsym((P)"match-sublist");
  lit_315 = YPPsym((P)"match-unquote");
  T175 = YPsig(YPPlist(3,CHKREF(lit_305),CHKREF(lit_229),CHKREF(lit_304)),YPPlist(3,CHKREF(YLlstG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_307 = YPmet(FUNCODEREF(fun_307),CHKREF(lit_312),T175,ENVNUL);
  T179 = BOUNDP(YastYexpand_bind_element);
  if (T179 != YPfalse) {
    T178 = CHKREF(YastYexpand_bind_element);
  } else {
    T178 = YPfalse;
  }
  T177 = fun_307;
  T176 = CALL2(CHKREF(YPdefine_method),T178,T177);
  YastYexpand_bind_element = T176;
  regsym(&YastYexpand_bind_element,"ast","expand-bind-element");
  lit_316 = YPPsym((P)"expand-pattern");
  lit_317 = YPsb((P)"Match Pattern Failure");
  lit_318 = YPPsym((P)"isa?");
  T180 = YPsig(YPPlist(3,CHKREF(lit_305),CHKREF(lit_229),CHKREF(lit_304)),YPPlist(3,CHKREF(YLlstG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_308 = YPmet(FUNCODEREF(fun_308),CHKREF(lit_316),T180,ENVNUL);
  T184 = BOUNDP(YastYexpand_pattern);
  if (T184 != YPfalse) {
    T183 = CHKREF(YastYexpand_pattern);
  } else {
    T183 = YPfalse;
  }
  T182 = fun_308;
  T181 = CALL2(CHKREF(YPdefine_method),T183,T182);
  YastYexpand_pattern = T181;
  regsym(&YastYexpand_pattern,"ast","expand-pattern");
  lit_319 = YPPsym((P)"expand-syntax-if");
  lit_320 = YPPsym((P)"<str>");
  lit_321 = YPPsym((P)"loc");
  lit_322 = YPPsym((P)"lab");
  T186 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_309 = YPmet(FUNCODEREF(fun_309),YPfalse,T186,ENVNUL);
  T185 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_310 = YPmet(FUNCODEREF(fun_310),CHKREF(lit_319),T185,ENVNUL);
  T190 = BOUNDP(YastYexpand_syntax_if);
  if (T190 != YPfalse) {
    T189 = CHKREF(YastYexpand_syntax_if);
  } else {
    T189 = YPfalse;
  }
  T188 = fun_310;
  T187 = CALL2(CHKREF(YPdefine_method),T189,T188);
  YastYexpand_syntax_if = T187;
  regsym(&YastYexpand_syntax_if,"ast","expand-syntax-if");
  lit_323 = YPPsym((P)"r-extend*");
  T191 = YPsig(YPPlist(2,CHKREF(lit_185),CHKREF(lit_258)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YastYLstatic_environmentG));
  fun_311 = YPmet(FUNCODEREF(fun_311),CHKREF(lit_323),T191,ENVNUL);
  T195 = BOUNDP(YastYr_extendT);
  if (T195 != YPfalse) {
    T194 = CHKREF(YastYr_extendT);
  } else {
    T194 = YPfalse;
  }
  T193 = fun_311;
  T192 = CALL2(CHKREF(YPdefine_method),T194,T193);
  YastYr_extendT = T192;
  regsym(&YastYr_extendT,"ast","r-extend*");
  lit_324 = YPPsym((P)"insert-global!");
  T196 = YPsig(YPPlist(2,CHKREF(lit_182),CHKREF(lit_185)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_312 = YPmet(FUNCODEREF(fun_312),CHKREF(lit_324),T196,ENVNUL);
  T200 = BOUNDP(YastYinsert_globalX);
  if (T200 != YPfalse) {
    T199 = CHKREF(YastYinsert_globalX);
  } else {
    T199 = YPfalse;
  }
  T198 = fun_312;
  T197 = CALL2(CHKREF(YPdefine_method),T199,T198);
  YastYinsert_globalX = T197;
  regsym(&YastYinsert_globalX,"ast","insert-global!");
  lit_325 = YPPsym((P)"insert-globals!");
  T202 = YPsig(YPPlist(1,CHKREF(lit_267)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_313 = YPmet(FUNCODEREF(fun_313),YPfalse,T202,ENVNUL);
  T201 = YPsig(YPPlist(2,CHKREF(lit_258),CHKREF(lit_185)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_314 = YPmet(FUNCODEREF(fun_314),CHKREF(lit_325),T201,ENVNUL);
  T206 = BOUNDP(YastYinsert_globalsX);
  if (T206 != YPfalse) {
    T205 = CHKREF(YastYinsert_globalsX);
  } else {
    T205 = YPfalse;
  }
  T204 = fun_314;
  T203 = CALL2(CHKREF(YPdefine_method),T205,T204);
  YastYinsert_globalsX = T203;
  regsym(&YastYinsert_globalsX,"ast","insert-globals!");
  lit_326 = YPPsym((P)"find-static-global-environment");
  T207 = YPsig(YPPlist(1,CHKREF(lit_185)),YPPlist(1,CHKREF(YastYLstatic_local_environmentG)),YPfalse,YPint((P)1),CHKREF(YastYLstatic_global_environmentG));
  fun_315 = YPmet(FUNCODEREF(fun_315),CHKREF(lit_326),T207,ENVNUL);
  T211 = BOUNDP(YastYfind_static_global_environment);
  if (T211 != YPfalse) {
    T210 = CHKREF(YastYfind_static_global_environment);
  } else {
    T210 = YPfalse;
  }
  T209 = fun_315;
  T208 = CALL2(CHKREF(YPdefine_method),T210,T209);
  YastYfind_static_global_environment = T208;
  regsym(&YastYfind_static_global_environment,"ast","find-static-global-environment");
  T212 = YPsig(YPPlist(1,CHKREF(lit_185)),YPPlist(1,CHKREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)1),CHKREF(YastYLstatic_global_environmentG));
  fun_316 = YPmet(FUNCODEREF(fun_316),CHKREF(lit_326),T212,ENVNUL);
  T216 = BOUNDP(YastYfind_static_global_environment);
  if (T216 != YPfalse) {
    T215 = CHKREF(YastYfind_static_global_environment);
  } else {
    T215 = YPfalse;
  }
  T214 = fun_316;
  T213 = CALL2(CHKREF(YPdefine_method),T215,T214);
  YastYfind_static_global_environment = T213;
  regsym(&YastYfind_static_global_environment,"ast","find-static-global-environment");
  lit_327 = YPPsym((P)"find-syntax-environment");
  T217 = YPsig(YPPlist(1,CHKREF(lit_185)),YPPlist(1,CHKREF(YastYLstatic_environmentG)),YPfalse,YPint((P)1),CHKREF(YastYLstatic_global_environmentG));
  fun_317 = YPmet(FUNCODEREF(fun_317),CHKREF(lit_327),T217,ENVNUL);
  T221 = BOUNDP(YastYfind_syntax_environment);
  if (T221 != YPfalse) {
    T220 = CHKREF(YastYfind_syntax_environment);
  } else {
    T220 = YPfalse;
  }
  T219 = fun_317;
  T218 = CALL2(CHKREF(YPdefine_method),T220,T219);
  YastYfind_syntax_environment = T218;
  regsym(&YastYfind_syntax_environment,"ast","find-syntax-environment");
  lit_328 = YPPsym((P)"find-environment-module");
  T222 = YPsig(YPPlist(1,CHKREF(lit_185)),YPPlist(1,CHKREF(YastYLstatic_environmentG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_318 = YPmet(FUNCODEREF(fun_318),CHKREF(lit_328),T222,ENVNUL);
  T226 = BOUNDP(YastYfind_environment_module);
  if (T226 != YPfalse) {
    T225 = CHKREF(YastYfind_environment_module);
  } else {
    T225 = YPfalse;
  }
  T224 = fun_318;
  T223 = CALL2(CHKREF(YPdefine_method),T225,T224);
  YastYfind_environment_module = T223;
  regsym(&YastYfind_environment_module,"ast","find-environment-module");
  lit_329 = YPPsym((P)"find-binding");
  T228 = YPsig(YPPlist(1,CHKREF(lit_258)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_319 = YPmet(FUNCODEREF(fun_loop_319),CHKREF(lit_143),T228,ENVNUL);
  T227 = YPsig(YPPlist(2,CHKREF(lit_226),CHKREF(lit_185)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLstatic_local_environmentG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_320 = YPmet(FUNCODEREF(fun_320),CHKREF(lit_329),T227,ENVNUL);
  T232 = BOUNDP(YastYfind_binding);
  if (T232 != YPfalse) {
    T231 = CHKREF(YastYfind_binding);
  } else {
    T231 = YPfalse;
  }
  T230 = fun_320;
  T229 = CALL2(CHKREF(YPdefine_method),T231,T230);
  YastYfind_binding = T229;
  regsym(&YastYfind_binding,"ast","find-binding");
  T233 = YPsig(YPPlist(2,CHKREF(lit_226),CHKREF(lit_185)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLstatic_empty_environmentG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_321 = YPmet(FUNCODEREF(fun_321),CHKREF(lit_329),T233,ENVNUL);
  T237 = BOUNDP(YastYfind_binding);
  if (T237 != YPfalse) {
    T236 = CHKREF(YastYfind_binding);
  } else {
    T236 = YPfalse;
  }
  T235 = fun_321;
  T234 = CALL2(CHKREF(YPdefine_method),T236,T235);
  YastYfind_binding = T234;
  regsym(&YastYfind_binding,"ast","find-binding");
  T238 = YPsig(YPPlist(2,CHKREF(lit_226),CHKREF(lit_185)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_322 = YPmet(FUNCODEREF(fun_322),CHKREF(lit_329),T238,ENVNUL);
  T242 = BOUNDP(YastYfind_binding);
  if (T242 != YPfalse) {
    T241 = CHKREF(YastYfind_binding);
  } else {
    T241 = YPfalse;
  }
  T240 = fun_322;
  T239 = CALL2(CHKREF(YPdefine_method),T241,T240);
  YastYfind_binding = T239;
  regsym(&YastYfind_binding,"ast","find-binding");
  lit_330 = YPPsym((P)"frame-bindings");
  T243 = YPsig(YPPlist(1,CHKREF(lit_300)),YPPlist(1,CHKREF(YastYLstatic_environmentG)),YPfalse,YPint((P)1),CHKREF(YLcolG));
  fun_323 = YPmet(FUNCODEREF(fun_323),CHKREF(lit_330),T243,ENVNUL);
  T247 = BOUNDP(YastYframe_bindings);
  if (T247 != YPfalse) {
    T246 = CHKREF(YastYframe_bindings);
  } else {
    T246 = YPfalse;
  }
  T245 = fun_323;
  T244 = CALL2(CHKREF(YPdefine_method),T246,T245);
  YastYframe_bindings = T244;
  regsym(&YastYframe_bindings,"ast","frame-bindings");
  YastYTmagic_bindingsT = Ynil;
  regsym(&YastYTmagic_bindingsT,"ast","*magic-bindings*");
  lit_331 = YPPsym((P)"register-magic-binding");
  T248 = YPsig(YPPlist(2,CHKREF(lit_226),CHKREF(lit_192)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_324 = YPmet(FUNCODEREF(fun_324),CHKREF(lit_331),T248,ENVNUL);
  T252 = BOUNDP(YastYregister_magic_binding);
  if (T252 != YPfalse) {
    T251 = CHKREF(YastYregister_magic_binding);
  } else {
    T251 = YPfalse;
  }
  T250 = fun_324;
  T249 = CALL2(CHKREF(YPdefine_method),T251,T250);
  YastYregister_magic_binding = T249;
  regsym(&YastYregister_magic_binding,"ast","register-magic-binding");
  lit_332 = YPPsym((P)"magic-bindings");
  T253 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_325 = YPmet(FUNCODEREF(fun_325),CHKREF(lit_332),T253,ENVNUL);
  T257 = BOUNDP(YastYmagic_bindings);
  if (T257 != YPfalse) {
    T256 = CHKREF(YastYmagic_bindings);
  } else {
    T256 = YPfalse;
  }
  T255 = fun_325;
  T254 = CALL2(CHKREF(YPdefine_method),T256,T255);
  YastYmagic_bindings = T254;
  regsym(&YastYmagic_bindings,"ast","magic-bindings");
  lit_333 = YPPsym((P)"fun");
  lit_334 = YPPsym((P)"binding-handler");
  lit_335 = YPPsym((P)"$proto-boot-module-name");
  lit_336 = YPPsym((P)"<module-binding>");
  lit_337 = YPsb((P)"-tag");
  lit_338 = YPsb((P)"$sexpr-");
  lit_339 = YPsb((P)"special-");
  lit_340 = YPPsym((P)"define-magic-binding");
  lit_341 = YPPsym((P)"x-1255");
  T260 = YPsig(YPPlist(2,CHKREF(lit_116),CHKREF(lit_115)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1255_326 = YPmet(FUNCODEREF(fun_x_1255_326),CHKREF(lit_341),T260,ENVNUL);
  T259 = YPsig(YPPlist(1,CHKREF(lit_87)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_327 = YPmet(FUNCODEREF(fun_327),YPfalse,T259,ENVNUL);
  T258 = YPsig(YPPlist(1,CHKREF(lit_86)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_328 = YPmet(FUNCODEREF(fun_328),YPfalse,T258,ENVNUL);
  T261 = fun_328;
  YPmacro(YPPsym((P)"ast"),YPPsym((P)"define-magic-binding"),T261);
  T262 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_329 = YPmet(FUNCODEREF(fun_329),YPfalse,T262,ENVNUL);
  T275 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T274 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T273 = (P)YPpair(CHKREF(YastYbinding_handler),T274);
  T272 = (P)YPpair(CHKREF(YastYbinding_module_name),T273);
  T271 = (P)YPpair(CHKREF(YastYbinding_name),T272);
  T270 = (P)YPpair(CHKREF(YastYbinding_kind),T271);
  T269 = fun_329;
  T268 = (P)YPpair(YPfalse,Ynil);
  T267 = (P)YPpair(T269,T268);
  T266 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T267);
  T265 = (P)YPpair(CHKREF(YsyntaxYDsexpr_if_tag),T266);
  T264 = (P)YPpair(CHKREF(lit_190),T265);
  T263 = CALL3(CHKREF(YPisa),T275,T270,T264);
  YastYspecial_if = T263;
  regsym(&YastYspecial_if,"ast","special-if");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_250),CHKREF(YastYspecial_if));
  T276 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_330 = YPmet(FUNCODEREF(fun_330),YPfalse,T276,ENVNUL);
  T289 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T288 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T287 = (P)YPpair(CHKREF(YastYbinding_handler),T288);
  T286 = (P)YPpair(CHKREF(YastYbinding_module_name),T287);
  T285 = (P)YPpair(CHKREF(YastYbinding_name),T286);
  T284 = (P)YPpair(CHKREF(YastYbinding_kind),T285);
  T283 = fun_330;
  T282 = (P)YPpair(YPfalse,Ynil);
  T281 = (P)YPpair(T283,T282);
  T280 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T281);
  T279 = (P)YPpair(CHKREF(YsyntaxYDsexpr_begin_tag),T280);
  T278 = (P)YPpair(CHKREF(lit_190),T279);
  T277 = CALL3(CHKREF(YPisa),T289,T284,T278);
  YastYspecial_begin = T277;
  regsym(&YastYspecial_begin,"ast","special-begin");
  lit_342 = YPPsym((P)"begin");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_342),CHKREF(YastYspecial_begin));
  lit_343 = YPPsym((P)"%raw");
  YastYDsexpr_Praw_tag = CHKREF(lit_343);
  regsym(&YastYDsexpr_Praw_tag,"ast","$sexpr-%raw-tag");
  T290 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_331 = YPmet(FUNCODEREF(fun_331),YPfalse,T290,ENVNUL);
  T303 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T302 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T301 = (P)YPpair(CHKREF(YastYbinding_handler),T302);
  T300 = (P)YPpair(CHKREF(YastYbinding_module_name),T301);
  T299 = (P)YPpair(CHKREF(YastYbinding_name),T300);
  T298 = (P)YPpair(CHKREF(YastYbinding_kind),T299);
  T297 = fun_331;
  T296 = (P)YPpair(YPfalse,Ynil);
  T295 = (P)YPpair(T297,T296);
  T294 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T295);
  T293 = (P)YPpair(CHKREF(YastYDsexpr_Praw_tag),T294);
  T292 = (P)YPpair(CHKREF(lit_190),T293);
  T291 = CALL3(CHKREF(YPisa),T303,T298,T292);
  YastYspecial_Praw = T291;
  regsym(&YastYspecial_Praw,"ast","special-%raw");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_343),CHKREF(YastYspecial_Praw));
  T304 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_332 = YPmet(FUNCODEREF(fun_332),YPfalse,T304,ENVNUL);
  T317 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T316 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T315 = (P)YPpair(CHKREF(YastYbinding_handler),T316);
  T314 = (P)YPpair(CHKREF(YastYbinding_module_name),T315);
  T313 = (P)YPpair(CHKREF(YastYbinding_name),T314);
  T312 = (P)YPpair(CHKREF(YastYbinding_kind),T313);
  T311 = fun_332;
  T310 = (P)YPpair(YPfalse,Ynil);
  T309 = (P)YPpair(T311,T310);
  T308 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T309);
  T307 = (P)YPpair(CHKREF(YsyntaxYDsexpr_quote_tag),T308);
  T306 = (P)YPpair(CHKREF(lit_190),T307);
  T305 = CALL3(CHKREF(YPisa),T317,T312,T306);
  YastYspecial_quote = T305;
  regsym(&YastYspecial_quote,"ast","special-quote");
  T319 = CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_213),CHKREF(YastYspecial_quote));
  T318 = T319;
  return T318;
}

P YastY___main_6___() {
  P T376,T375,T374,T373,T372,T371,T370,T369,T368,T367,T366,T365,T364,T363,T362,T361;
  P T360,T359,T358,T357,T356,T355,T354,T353,T352,T351,T350,T349,T348,T347,T346,T345;
  P T344,T343,T342,T341,T340,T339,T338,T337,T336,T335,T334,T333,T332,T331,T330,T329;
  P T328,T327,T326,T325,T324,T323,T322,T321,T320,T319,T318,T317,T316,T315,T314,T313;
  P T312,T311,T310,T309,T308,T307,T306,T305,T304,T303,T302,T301,T300,T299,T298,T297;
  P T296,T295,T294,T293,T292,T291,T290,T289,T288,T287,T286,T285,T284,T283,T282,T281;
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
  T0 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_333 = YPmet(FUNCODEREF(fun_333),YPfalse,T0,ENVNUL);
  T13 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T12 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T11 = (P)YPpair(CHKREF(YastYbinding_handler),T12);
  T10 = (P)YPpair(CHKREF(YastYbinding_module_name),T11);
  T9 = (P)YPpair(CHKREF(YastYbinding_name),T10);
  T8 = (P)YPpair(CHKREF(YastYbinding_kind),T9);
  T7 = fun_333;
  T6 = (P)YPpair(YPfalse,Ynil);
  T5 = (P)YPpair(T7,T6);
  T4 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T5);
  T3 = (P)YPpair(CHKREF(YsyntaxYDsexpr_set_tag),T4);
  T2 = (P)YPpair(CHKREF(lit_190),T3);
  T1 = CALL3(CHKREF(YPisa),T13,T8,T2);
  YastYspecial_set = T1;
  regsym(&YastYspecial_set,"ast","special-set");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_94),CHKREF(YastYspecial_set));
  T14 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_334 = YPmet(FUNCODEREF(fun_334),YPfalse,T14,ENVNUL);
  T27 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T26 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T25 = (P)YPpair(CHKREF(YastYbinding_handler),T26);
  T24 = (P)YPpair(CHKREF(YastYbinding_module_name),T25);
  T23 = (P)YPpair(CHKREF(YastYbinding_name),T24);
  T22 = (P)YPpair(CHKREF(YastYbinding_kind),T23);
  T21 = fun_334;
  T20 = (P)YPpair(YPfalse,Ynil);
  T19 = (P)YPpair(T21,T20);
  T18 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T19);
  T17 = (P)YPpair(CHKREF(YsyntaxYDsexpr_define_tag),T18);
  T16 = (P)YPpair(CHKREF(lit_190),T17);
  T15 = CALL3(CHKREF(YPisa),T27,T22,T16);
  YastYspecial_define = T15;
  regsym(&YastYspecial_define,"ast","special-define");
  lit_344 = YPPsym((P)"define");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_344),CHKREF(YastYspecial_define));
  T28 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_335 = YPmet(FUNCODEREF(fun_335),YPfalse,T28,ENVNUL);
  T41 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T40 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T39 = (P)YPpair(CHKREF(YastYbinding_handler),T40);
  T38 = (P)YPpair(CHKREF(YastYbinding_module_name),T39);
  T37 = (P)YPpair(CHKREF(YastYbinding_name),T38);
  T36 = (P)YPpair(CHKREF(YastYbinding_kind),T37);
  T35 = fun_335;
  T34 = (P)YPpair(YPfalse,Ynil);
  T33 = (P)YPpair(T35,T34);
  T32 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T33);
  T31 = (P)YPpair(CHKREF(YsyntaxYDsexpr_define_syntax_tag),T32);
  T30 = (P)YPpair(CHKREF(lit_190),T31);
  T29 = CALL3(CHKREF(YPisa),T41,T36,T30);
  YastYspecial_define_syntax = T29;
  regsym(&YastYspecial_define_syntax,"ast","special-define-syntax");
  lit_345 = YPPsym((P)"define-syntax");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_345),CHKREF(YastYspecial_define_syntax));
  lit_346 = YPPsym((P)"dss");
  YastYDsexpr_define_static_syntax_tag = CHKREF(lit_346);
  regsym(&YastYDsexpr_define_static_syntax_tag,"ast","$sexpr-define-static-syntax-tag");
  T42 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_336 = YPmet(FUNCODEREF(fun_336),YPfalse,T42,ENVNUL);
  T55 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T54 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T53 = (P)YPpair(CHKREF(YastYbinding_handler),T54);
  T52 = (P)YPpair(CHKREF(YastYbinding_module_name),T53);
  T51 = (P)YPpair(CHKREF(YastYbinding_name),T52);
  T50 = (P)YPpair(CHKREF(YastYbinding_kind),T51);
  T49 = fun_336;
  T48 = (P)YPpair(YPfalse,Ynil);
  T47 = (P)YPpair(T49,T48);
  T46 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T47);
  T45 = (P)YPpair(CHKREF(YastYDsexpr_define_static_syntax_tag),T46);
  T44 = (P)YPpair(CHKREF(lit_190),T45);
  T43 = CALL3(CHKREF(YPisa),T55,T50,T44);
  YastYspecial_define_static_syntax = T43;
  regsym(&YastYspecial_define_static_syntax,"ast","special-define-static-syntax");
  lit_347 = YPPsym((P)"define-static-syntax");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_347),CHKREF(YastYspecial_define_static_syntax));
  T56 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_337 = YPmet(FUNCODEREF(fun_337),YPfalse,T56,ENVNUL);
  T69 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T68 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T67 = (P)YPpair(CHKREF(YastYbinding_handler),T68);
  T66 = (P)YPpair(CHKREF(YastYbinding_module_name),T67);
  T65 = (P)YPpair(CHKREF(YastYbinding_name),T66);
  T64 = (P)YPpair(CHKREF(YastYbinding_kind),T65);
  T63 = fun_337;
  T62 = (P)YPpair(YPfalse,Ynil);
  T61 = (P)YPpair(T63,T62);
  T60 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T61);
  T59 = (P)YPpair(CHKREF(YsyntaxYDsexpr_define_method_tag),T60);
  T58 = (P)YPpair(CHKREF(lit_190),T59);
  T57 = CALL3(CHKREF(YPisa),T69,T64,T58);
  YastYspecial_define_method = T57;
  regsym(&YastYspecial_define_method,"ast","special-define-method");
  lit_348 = YPPsym((P)"define-method");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_348),CHKREF(YastYspecial_define_method));
  T70 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_338 = YPmet(FUNCODEREF(fun_338),YPfalse,T70,ENVNUL);
  T83 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T82 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T81 = (P)YPpair(CHKREF(YastYbinding_handler),T82);
  T80 = (P)YPpair(CHKREF(YastYbinding_module_name),T81);
  T79 = (P)YPpair(CHKREF(YastYbinding_name),T80);
  T78 = (P)YPpair(CHKREF(YastYbinding_kind),T79);
  T77 = fun_338;
  T76 = (P)YPpair(YPfalse,Ynil);
  T75 = (P)YPpair(T77,T76);
  T74 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T75);
  T73 = (P)YPpair(CHKREF(YsyntaxYDsexpr_define_generic_tag),T74);
  T72 = (P)YPpair(CHKREF(lit_190),T73);
  T71 = CALL3(CHKREF(YPisa),T83,T78,T72);
  YastYspecial_define_generic = T71;
  regsym(&YastYspecial_define_generic,"ast","special-define-generic");
  lit_349 = YPPsym((P)"define-generic");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_349),CHKREF(YastYspecial_define_generic));
  T84 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_339 = YPmet(FUNCODEREF(fun_339),YPfalse,T84,ENVNUL);
  T97 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T96 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T95 = (P)YPpair(CHKREF(YastYbinding_handler),T96);
  T94 = (P)YPpair(CHKREF(YastYbinding_module_name),T95);
  T93 = (P)YPpair(CHKREF(YastYbinding_name),T94);
  T92 = (P)YPpair(CHKREF(YastYbinding_kind),T93);
  T91 = fun_339;
  T90 = (P)YPpair(YPfalse,Ynil);
  T89 = (P)YPpair(T91,T90);
  T88 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T89);
  T87 = (P)YPpair(CHKREF(YsyntaxYDsexpr_define_function_tag),T88);
  T86 = (P)YPpair(CHKREF(lit_190),T87);
  T85 = CALL3(CHKREF(YPisa),T97,T92,T86);
  YastYspecial_define_function = T85;
  regsym(&YastYspecial_define_function,"ast","special-define-function");
  lit_350 = YPPsym((P)"define-function");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_350),CHKREF(YastYspecial_define_function));
  T98 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_340 = YPmet(FUNCODEREF(fun_340),YPfalse,T98,ENVNUL);
  T111 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T110 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T109 = (P)YPpair(CHKREF(YastYbinding_handler),T110);
  T108 = (P)YPpair(CHKREF(YastYbinding_module_name),T109);
  T107 = (P)YPpair(CHKREF(YastYbinding_name),T108);
  T106 = (P)YPpair(CHKREF(YastYbinding_kind),T107);
  T105 = fun_340;
  T104 = (P)YPpair(YPfalse,Ynil);
  T103 = (P)YPpair(T105,T104);
  T102 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T103);
  T101 = (P)YPpair(CHKREF(YsyntaxYDsexpr_method_tag),T102);
  T100 = (P)YPpair(CHKREF(lit_190),T101);
  T99 = CALL3(CHKREF(YPisa),T111,T106,T100);
  YastYspecial_method = T99;
  regsym(&YastYspecial_method,"ast","special-method");
  lit_351 = YPPsym((P)"method");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_351),CHKREF(YastYspecial_method));
  YastYDsexpr_boundQ_tag = CHKREF(lit_249);
  regsym(&YastYDsexpr_boundQ_tag,"ast","$sexpr-bound?-tag");
  T112 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_341 = YPmet(FUNCODEREF(fun_341),YPfalse,T112,ENVNUL);
  T125 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T124 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T123 = (P)YPpair(CHKREF(YastYbinding_handler),T124);
  T122 = (P)YPpair(CHKREF(YastYbinding_module_name),T123);
  T121 = (P)YPpair(CHKREF(YastYbinding_name),T122);
  T120 = (P)YPpair(CHKREF(YastYbinding_kind),T121);
  T119 = fun_341;
  T118 = (P)YPpair(YPfalse,Ynil);
  T117 = (P)YPpair(T119,T118);
  T116 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T117);
  T115 = (P)YPpair(CHKREF(YastYDsexpr_boundQ_tag),T116);
  T114 = (P)YPpair(CHKREF(lit_190),T115);
  T113 = CALL3(CHKREF(YPisa),T125,T120,T114);
  YastYspecial_boundQ = T113;
  regsym(&YastYspecial_boundQ,"ast","special-bound?");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_249),CHKREF(YastYspecial_boundQ));
  T126 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_342 = YPmet(FUNCODEREF(fun_342),YPfalse,T126,ENVNUL);
  T139 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T138 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T137 = (P)YPpair(CHKREF(YastYbinding_handler),T138);
  T136 = (P)YPpair(CHKREF(YastYbinding_module_name),T137);
  T135 = (P)YPpair(CHKREF(YastYbinding_name),T136);
  T134 = (P)YPpair(CHKREF(YastYbinding_kind),T135);
  T133 = fun_342;
  T132 = (P)YPpair(YPfalse,Ynil);
  T131 = (P)YPpair(T133,T132);
  T130 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T131);
  T129 = (P)YPpair(CHKREF(YsyntaxYDsexpr_let_tag),T130);
  T128 = (P)YPpair(CHKREF(lit_190),T129);
  T127 = CALL3(CHKREF(YPisa),T139,T134,T128);
  YastYspecial_let = T127;
  regsym(&YastYspecial_let,"ast","special-let");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_311),CHKREF(YastYspecial_let));
  T140 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_343 = YPmet(FUNCODEREF(fun_343),YPfalse,T140,ENVNUL);
  T153 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T152 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T151 = (P)YPpair(CHKREF(YastYbinding_handler),T152);
  T150 = (P)YPpair(CHKREF(YastYbinding_module_name),T151);
  T149 = (P)YPpair(CHKREF(YastYbinding_name),T150);
  T148 = (P)YPpair(CHKREF(YastYbinding_kind),T149);
  T147 = fun_343;
  T146 = (P)YPpair(YPfalse,Ynil);
  T145 = (P)YPpair(T147,T146);
  T144 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T145);
  T143 = (P)YPpair(CHKREF(YsyntaxYDsexpr_locals_tag),T144);
  T142 = (P)YPpair(CHKREF(lit_190),T143);
  T141 = CALL3(CHKREF(YPisa),T153,T148,T142);
  YastYspecial_locals = T141;
  regsym(&YastYspecial_locals,"ast","special-locals");
  lit_352 = YPPsym((P)"locals");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_352),CHKREF(YastYspecial_locals));
  T154 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_344 = YPmet(FUNCODEREF(fun_344),YPfalse,T154,ENVNUL);
  T167 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T166 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T165 = (P)YPpair(CHKREF(YastYbinding_handler),T166);
  T164 = (P)YPpair(CHKREF(YastYbinding_module_name),T165);
  T163 = (P)YPpair(CHKREF(YastYbinding_name),T164);
  T162 = (P)YPpair(CHKREF(YastYbinding_kind),T163);
  T161 = fun_344;
  T160 = (P)YPpair(YPfalse,Ynil);
  T159 = (P)YPpair(T161,T160);
  T158 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T159);
  T157 = (P)YPpair(CHKREF(YsyntaxYDsexpr_iterate_tag),T158);
  T156 = (P)YPpair(CHKREF(lit_190),T157);
  T155 = CALL3(CHKREF(YPisa),T167,T162,T156);
  YastYspecial_iterate = T155;
  regsym(&YastYspecial_iterate,"ast","special-iterate");
  lit_353 = YPPsym((P)"iterate");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_353),CHKREF(YastYspecial_iterate));
  T168 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_345 = YPmet(FUNCODEREF(fun_345),YPfalse,T168,ENVNUL);
  T181 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T180 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T179 = (P)YPpair(CHKREF(YastYbinding_handler),T180);
  T178 = (P)YPpair(CHKREF(YastYbinding_module_name),T179);
  T177 = (P)YPpair(CHKREF(YastYbinding_name),T178);
  T176 = (P)YPpair(CHKREF(YastYbinding_kind),T177);
  T175 = fun_345;
  T174 = (P)YPpair(YPfalse,Ynil);
  T173 = (P)YPpair(T175,T174);
  T172 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T173);
  T171 = (P)YPpair(CHKREF(YsyntaxYDsexpr_bind_exit_tag),T172);
  T170 = (P)YPpair(CHKREF(lit_190),T171);
  T169 = CALL3(CHKREF(YPisa),T181,T176,T170);
  YastYspecial_bind_exit = T169;
  regsym(&YastYspecial_bind_exit,"ast","special-bind-exit");
  lit_354 = YPPsym((P)"bind-exit");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_354),CHKREF(YastYspecial_bind_exit));
  T182 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_346 = YPmet(FUNCODEREF(fun_346),YPfalse,T182,ENVNUL);
  T195 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T194 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T193 = (P)YPpair(CHKREF(YastYbinding_handler),T194);
  T192 = (P)YPpair(CHKREF(YastYbinding_module_name),T193);
  T191 = (P)YPpair(CHKREF(YastYbinding_name),T192);
  T190 = (P)YPpair(CHKREF(YastYbinding_kind),T191);
  T189 = fun_346;
  T188 = (P)YPpair(YPfalse,Ynil);
  T187 = (P)YPpair(T189,T188);
  T186 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T187);
  T185 = (P)YPpair(CHKREF(YsyntaxYDsexpr_unwind_protect_tag),T186);
  T184 = (P)YPpair(CHKREF(lit_190),T185);
  T183 = CALL3(CHKREF(YPisa),T195,T190,T184);
  YastYspecial_unwind_protect = T183;
  regsym(&YastYspecial_unwind_protect,"ast","special-unwind-protect");
  lit_355 = YPPsym((P)"unwind-protect");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_355),CHKREF(YastYspecial_unwind_protect));
  T196 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_347 = YPmet(FUNCODEREF(fun_347),YPfalse,T196,ENVNUL);
  T209 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T208 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T207 = (P)YPpair(CHKREF(YastYbinding_handler),T208);
  T206 = (P)YPpair(CHKREF(YastYbinding_module_name),T207);
  T205 = (P)YPpair(CHKREF(YastYbinding_name),T206);
  T204 = (P)YPpair(CHKREF(YastYbinding_kind),T205);
  T203 = fun_347;
  T202 = (P)YPpair(YPfalse,Ynil);
  T201 = (P)YPpair(T203,T202);
  T200 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T201);
  T199 = (P)YPpair(CHKREF(YsyntaxYDsexpr_monitor_tag),T200);
  T198 = (P)YPpair(CHKREF(lit_190),T199);
  T197 = CALL3(CHKREF(YPisa),T209,T204,T198);
  YastYspecial_monitor = T197;
  regsym(&YastYspecial_monitor,"ast","special-monitor");
  lit_356 = YPPsym((P)"monitor");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_356),CHKREF(YastYspecial_monitor));
  lit_357 = YPPsym((P)"pairize");
  T210 = YPsig(YPPlist(1,CHKREF(lit_115)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_348 = YPmet(FUNCODEREF(fun_348),CHKREF(lit_357),T210,ENVNUL);
  T214 = BOUNDP(YastYpairize);
  if (T214 != YPfalse) {
    T213 = CHKREF(YastYpairize);
  } else {
    T213 = YPfalse;
  }
  T212 = fun_348;
  T211 = CALL2(CHKREF(YPdefine_method),T213,T212);
  YastYpairize = T211;
  regsym(&YastYpairize,"ast","pairize");
  lit_358 = YPPsym((P)"%isa");
  T215 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_349 = YPmet(FUNCODEREF(fun_349),YPfalse,T215,ENVNUL);
  T228 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T227 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T226 = (P)YPpair(CHKREF(YastYbinding_handler),T227);
  T225 = (P)YPpair(CHKREF(YastYbinding_module_name),T226);
  T224 = (P)YPpair(CHKREF(YastYbinding_name),T225);
  T223 = (P)YPpair(CHKREF(YastYbinding_kind),T224);
  T222 = fun_349;
  T221 = (P)YPpair(YPfalse,Ynil);
  T220 = (P)YPpair(T222,T221);
  T219 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T220);
  T218 = (P)YPpair(CHKREF(YsyntaxYDsexpr_isa_tag),T219);
  T217 = (P)YPpair(CHKREF(lit_190),T218);
  T216 = CALL3(CHKREF(YPisa),T228,T223,T217);
  YastYspecial_isa = T216;
  regsym(&YastYspecial_isa,"ast","special-isa");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_97),CHKREF(YastYspecial_isa));
  lit_359 = YPPlist(1,YPPlist(2,YPPsym((P)"x"),YPPsym((P)"<any>")));
  lit_360 = YPPsym((P)"%slot");
  T229 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_350 = YPmet(FUNCODEREF(fun_350),YPfalse,T229,ENVNUL);
  T242 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T241 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T240 = (P)YPpair(CHKREF(YastYbinding_handler),T241);
  T239 = (P)YPpair(CHKREF(YastYbinding_module_name),T240);
  T238 = (P)YPpair(CHKREF(YastYbinding_name),T239);
  T237 = (P)YPpair(CHKREF(YastYbinding_kind),T238);
  T236 = fun_350;
  T235 = (P)YPpair(YPfalse,Ynil);
  T234 = (P)YPpair(T236,T235);
  T233 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T234);
  T232 = (P)YPpair(CHKREF(YsyntaxYDsexpr_slot_tag),T233);
  T231 = (P)YPpair(CHKREF(lit_190),T232);
  T230 = CALL3(CHKREF(YPisa),T242,T237,T231);
  YastYspecial_slot = T230;
  regsym(&YastYspecial_slot,"ast","special-slot");
  lit_361 = YPPsym((P)"slot");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_361),CHKREF(YastYspecial_slot));
  lit_362 = YPPsym((P)"ct");
  YastYDsexpr_compile_time_tag = CHKREF(lit_362);
  regsym(&YastYDsexpr_compile_time_tag,"ast","$sexpr-compile-time-tag");
  T243 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_351 = YPmet(FUNCODEREF(fun_351),YPfalse,T243,ENVNUL);
  T256 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T255 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T254 = (P)YPpair(CHKREF(YastYbinding_handler),T255);
  T253 = (P)YPpair(CHKREF(YastYbinding_module_name),T254);
  T252 = (P)YPpair(CHKREF(YastYbinding_name),T253);
  T251 = (P)YPpair(CHKREF(YastYbinding_kind),T252);
  T250 = fun_351;
  T249 = (P)YPpair(YPfalse,Ynil);
  T248 = (P)YPpair(T250,T249);
  T247 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T248);
  T246 = (P)YPpair(CHKREF(YastYDsexpr_compile_time_tag),T247);
  T245 = (P)YPpair(CHKREF(lit_190),T246);
  T244 = CALL3(CHKREF(YPisa),T256,T251,T245);
  YastYspecial_compile_time = T244;
  regsym(&YastYspecial_compile_time,"ast","special-compile-time");
  lit_363 = YPPsym((P)"compile-time");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_363),CHKREF(YastYspecial_compile_time));
  lit_364 = YPPsym((P)"ct-also");
  YastYDsexpr_compile_time_also_tag = CHKREF(lit_364);
  regsym(&YastYDsexpr_compile_time_also_tag,"ast","$sexpr-compile-time-also-tag");
  T257 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_352 = YPmet(FUNCODEREF(fun_352),YPfalse,T257,ENVNUL);
  T270 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T269 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T268 = (P)YPpair(CHKREF(YastYbinding_handler),T269);
  T267 = (P)YPpair(CHKREF(YastYbinding_module_name),T268);
  T266 = (P)YPpair(CHKREF(YastYbinding_name),T267);
  T265 = (P)YPpair(CHKREF(YastYbinding_kind),T266);
  T264 = fun_352;
  T263 = (P)YPpair(YPfalse,Ynil);
  T262 = (P)YPpair(T264,T263);
  T261 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T262);
  T260 = (P)YPpair(CHKREF(YastYDsexpr_compile_time_also_tag),T261);
  T259 = (P)YPpair(CHKREF(lit_190),T260);
  T258 = CALL3(CHKREF(YPisa),T270,T265,T259);
  YastYspecial_compile_time_also = T258;
  regsym(&YastYspecial_compile_time_also,"ast","special-compile-time-also");
  lit_365 = YPPsym((P)"compile-time-also");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_365),CHKREF(YastYspecial_compile_time_also));
  lit_366 = YPPsym((P)"dp");
  YastYDsexpr_define_primitive_tag = CHKREF(lit_366);
  regsym(&YastYDsexpr_define_primitive_tag,"ast","$sexpr-define-primitive-tag");
  T271 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_353 = YPmet(FUNCODEREF(fun_353),YPfalse,T271,ENVNUL);
  T284 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T283 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T282 = (P)YPpair(CHKREF(YastYbinding_handler),T283);
  T281 = (P)YPpair(CHKREF(YastYbinding_module_name),T282);
  T280 = (P)YPpair(CHKREF(YastYbinding_name),T281);
  T279 = (P)YPpair(CHKREF(YastYbinding_kind),T280);
  T278 = fun_353;
  T277 = (P)YPpair(YPfalse,Ynil);
  T276 = (P)YPpair(T278,T277);
  T275 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T276);
  T274 = (P)YPpair(CHKREF(YastYDsexpr_define_primitive_tag),T275);
  T273 = (P)YPpair(CHKREF(lit_190),T274);
  T272 = CALL3(CHKREF(YPisa),T284,T279,T273);
  YastYspecial_define_primitive = T272;
  regsym(&YastYspecial_define_primitive,"ast","special-define-primitive");
  lit_367 = YPPsym((P)"define-primitive");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_367),CHKREF(YastYspecial_define_primitive));
  T285 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_354 = YPmet(FUNCODEREF(fun_354),YPfalse,T285,ENVNUL);
  T298 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T297 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T296 = (P)YPpair(CHKREF(YastYbinding_handler),T297);
  T295 = (P)YPpair(CHKREF(YastYbinding_module_name),T296);
  T294 = (P)YPpair(CHKREF(YastYbinding_name),T295);
  T293 = (P)YPpair(CHKREF(YastYbinding_kind),T294);
  T292 = fun_354;
  T291 = (P)YPpair(YPfalse,Ynil);
  T290 = (P)YPpair(T292,T291);
  T289 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T290);
  T288 = (P)YPpair(CHKREF(YsyntaxYDsexpr_quasiquote_tag),T289);
  T287 = (P)YPpair(CHKREF(lit_190),T288);
  T286 = CALL3(CHKREF(YPisa),T298,T293,T287);
  YastYspecial_quasiquote = T286;
  regsym(&YastYspecial_quasiquote,"ast","special-quasiquote");
  lit_368 = YPPsym((P)"quasiquote");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_368),CHKREF(YastYspecial_quasiquote));
  lit_369 = YPPsym((P)"ast-macro-expand");
  T299 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_355 = YPmet(FUNCODEREF(fun_355),CHKREF(lit_369),T299,ENVNUL);
  T303 = BOUNDP(YastYast_macro_expand);
  if (T303 != YPfalse) {
    T302 = CHKREF(YastYast_macro_expand);
  } else {
    T302 = YPfalse;
  }
  T301 = fun_355;
  T300 = CALL2(CHKREF(YPdefine_method),T302,T301);
  YastYast_macro_expand = T300;
  regsym(&YastYast_macro_expand,"ast","ast-macro-expand");
  T304 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_356 = YPmet(FUNCODEREF(fun_356),YPfalse,T304,ENVNUL);
  T317 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T316 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T315 = (P)YPpair(CHKREF(YastYbinding_handler),T316);
  T314 = (P)YPpair(CHKREF(YastYbinding_module_name),T315);
  T313 = (P)YPpair(CHKREF(YastYbinding_name),T314);
  T312 = (P)YPpair(CHKREF(YastYbinding_kind),T313);
  T311 = fun_356;
  T310 = (P)YPpair(YPfalse,Ynil);
  T309 = (P)YPpair(T311,T310);
  T308 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T309);
  T307 = (P)YPpair(CHKREF(YsyntaxYDsexpr_macro_expand_tag),T308);
  T306 = (P)YPpair(CHKREF(lit_190),T307);
  T305 = CALL3(CHKREF(YPisa),T317,T312,T306);
  YastYspecial_macro_expand = T305;
  regsym(&YastYspecial_macro_expand,"ast","special-macro-expand");
  lit_370 = YPPsym((P)"macro-expand");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_370),CHKREF(YastYspecial_macro_expand));
  T318 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_357 = YPmet(FUNCODEREF(fun_357),YPfalse,T318,ENVNUL);
  T331 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T330 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T329 = (P)YPpair(CHKREF(YastYbinding_handler),T330);
  T328 = (P)YPpair(CHKREF(YastYbinding_module_name),T329);
  T327 = (P)YPpair(CHKREF(YastYbinding_name),T328);
  T326 = (P)YPpair(CHKREF(YastYbinding_kind),T327);
  T325 = fun_357;
  T324 = (P)YPpair(YPfalse,Ynil);
  T323 = (P)YPpair(T325,T324);
  T322 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T323);
  T321 = (P)YPpair(CHKREF(YsyntaxYDsexpr_syntax_if_tag),T322);
  T320 = (P)YPpair(CHKREF(lit_190),T321);
  T319 = CALL3(CHKREF(YPisa),T331,T326,T320);
  YastYspecial_syntax_if = T319;
  regsym(&YastYspecial_syntax_if,"ast","special-syntax-if");
  lit_371 = YPPsym((P)"syntax-if");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_371),CHKREF(YastYspecial_syntax_if));
  lit_372 = YPPsym((P)"export");
  YastYDsexpr_export_tag = CHKREF(lit_372);
  regsym(&YastYDsexpr_export_tag,"ast","$sexpr-export-tag");
  T332 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_358 = YPmet(FUNCODEREF(fun_358),YPfalse,T332,ENVNUL);
  T345 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T344 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T343 = (P)YPpair(CHKREF(YastYbinding_handler),T344);
  T342 = (P)YPpair(CHKREF(YastYbinding_module_name),T343);
  T341 = (P)YPpair(CHKREF(YastYbinding_name),T342);
  T340 = (P)YPpair(CHKREF(YastYbinding_kind),T341);
  T339 = fun_358;
  T338 = (P)YPpair(YPfalse,Ynil);
  T337 = (P)YPpair(T339,T338);
  T336 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T337);
  T335 = (P)YPpair(CHKREF(YastYDsexpr_export_tag),T336);
  T334 = (P)YPpair(CHKREF(lit_190),T335);
  T333 = CALL3(CHKREF(YPisa),T345,T340,T334);
  YastYspecial_export = T333;
  regsym(&YastYspecial_export,"ast","special-export");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_372),CHKREF(YastYspecial_export));
  lit_373 = YPPsym((P)"use");
  YastYDsexpr_use_module_tag = CHKREF(lit_373);
  regsym(&YastYDsexpr_use_module_tag,"ast","$sexpr-use-module-tag");
  T346 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_185),CHKREF(lit_184)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_359 = YPmet(FUNCODEREF(fun_359),YPfalse,T346,ENVNUL);
  T359 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
  T358 = (P)YPpair(CHKREF(YastYbinding_freeQ),Ynil);
  T357 = (P)YPpair(CHKREF(YastYbinding_handler),T358);
  T356 = (P)YPpair(CHKREF(YastYbinding_module_name),T357);
  T355 = (P)YPpair(CHKREF(YastYbinding_name),T356);
  T354 = (P)YPpair(CHKREF(YastYbinding_kind),T355);
  T353 = fun_359;
  T352 = (P)YPpair(YPfalse,Ynil);
  T351 = (P)YPpair(T353,T352);
  T350 = (P)YPpair(CHKREF(YastYDproto_boot_module_name),T351);
  T349 = (P)YPpair(CHKREF(YastYDsexpr_use_module_tag),T350);
  T348 = (P)YPpair(CHKREF(lit_190),T349);
  T347 = CALL3(CHKREF(YPisa),T359,T354,T348);
  YastYspecial_use_module = T347;
  regsym(&YastYspecial_use_module,"ast","special-use-module");
  lit_374 = YPPsym((P)"use-module");
  CALL2(CHKREF(YastYregister_magic_binding),CHKREF(lit_374),CHKREF(YastYspecial_use_module));
  T361 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T360 = CALL3(CHKREF(YPisa),T361,Ynil,Ynil);
  YastYLmodule_loaderG = T360;
  regsym(&YastYLmodule_loaderG,"ast","<module-loader>");
  lit_375 = YPPsym((P)"module-loader-modules");
  T362 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLmodule_loaderG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_360 = YPmet(FUNCODEREF(fun_360),CHKREF(lit_375),T362,ENVNUL);
  T366 = BOUNDP(YastYmodule_loader_modules);
  if (T366 != YPfalse) {
    T365 = CHKREF(YastYmodule_loader_modules);
  } else {
    T365 = YPfalse;
  }
  T364 = fun_360;
  T363 = CALL2(CHKREF(YPdefine_method),T365,T364);
  YastYmodule_loader_modules = T363;
  regsym(&YastYmodule_loader_modules,"ast","module-loader-modules");
  lit_376 = YPPsym((P)"module-loader-modules-setter");
  T367 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YruntimeYLtabG),CHKREF(YastYLmodule_loaderG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_361 = YPmet(FUNCODEREF(fun_361),CHKREF(lit_376),T367,ENVNUL);
  T371 = BOUNDP(YastYmodule_loader_modules_setter);
  if (T371 != YPfalse) {
    T370 = CHKREF(YastYmodule_loader_modules_setter);
  } else {
    T370 = YPfalse;
  }
  T369 = fun_361;
  T368 = CALL2(CHKREF(YPdefine_method),T370,T369);
  YastYmodule_loader_modules_setter = T368;
  regsym(&YastYmodule_loader_modules_setter,"ast","module-loader-modules-setter");
  T374 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  T373 = fun_362 = YPmet(FUNCODEREF(fun_362),YPfalse,T374,ENVNUL);
  T376 = fun_362;
  T375 = CALLN(CHKREF(YPslot),5,CHKREF(YastYLmodule_loaderG),CHKREF(YastYmodule_loader_modules),CHKREF(YastYmodule_loader_modules_setter),CHKREF(YruntimeYLtabG),T376);
  T372 = T375;
  return T372;
}

P YastY___main_7___() {
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
  lit_377 = YPPsym((P)"module-loader-stack");
  T0 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLmodule_loaderG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_363 = YPmet(FUNCODEREF(fun_363),CHKREF(lit_377),T0,ENVNUL);
  T4 = BOUNDP(YastYmodule_loader_stack);
  if (T4 != YPfalse) {
    T3 = CHKREF(YastYmodule_loader_stack);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_363;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YastYmodule_loader_stack = T1;
  regsym(&YastYmodule_loader_stack,"ast","module-loader-stack");
  lit_378 = YPPsym((P)"module-loader-stack-setter");
  T5 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLlstG),CHKREF(YastYLmodule_loaderG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_364 = YPmet(FUNCODEREF(fun_364),CHKREF(lit_378),T5,ENVNUL);
  T9 = BOUNDP(YastYmodule_loader_stack_setter);
  if (T9 != YPfalse) {
    T8 = CHKREF(YastYmodule_loader_stack_setter);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_364;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  YastYmodule_loader_stack_setter = T6;
  regsym(&YastYmodule_loader_stack_setter,"ast","module-loader-stack-setter");
  T10 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_365 = YPmet(FUNCODEREF(fun_365),YPfalse,T10,ENVNUL);
  T11 = fun_365;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmodule_loaderG),CHKREF(YastYmodule_loader_stack),CHKREF(YastYmodule_loader_stack_setter),CHKREF(YLlstG),T11);
  T13 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T12 = CALL3(CHKREF(YPisa),T13,Ynil,Ynil);
  YastYLmoduleG = T12;
  regsym(&YastYLmoduleG,"ast","<module>");
  lit_379 = YPPsym((P)"module-name");
  T14 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLmoduleG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_366 = YPmet(FUNCODEREF(fun_366),CHKREF(lit_379),T14,ENVNUL);
  T18 = BOUNDP(YastYmodule_name);
  if (T18 != YPfalse) {
    T17 = CHKREF(YastYmodule_name);
  } else {
    T17 = YPfalse;
  }
  T16 = fun_366;
  T15 = CALL2(CHKREF(YPdefine_method),T17,T16);
  YastYmodule_name = T15;
  regsym(&YastYmodule_name,"ast","module-name");
  lit_380 = YPPsym((P)"module-name-setter");
  T19 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YLsymG),CHKREF(YastYLmoduleG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_367 = YPmet(FUNCODEREF(fun_367),CHKREF(lit_380),T19,ENVNUL);
  T23 = BOUNDP(YastYmodule_name_setter);
  if (T23 != YPfalse) {
    T22 = CHKREF(YastYmodule_name_setter);
  } else {
    T22 = YPfalse;
  }
  T21 = fun_367;
  T20 = CALL2(CHKREF(YPdefine_method),T22,T21);
  YastYmodule_name_setter = T20;
  regsym(&YastYmodule_name_setter,"ast","module-name-setter");
  T24 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_368 = YPmet(FUNCODEREF(fun_368),YPfalse,T24,ENVNUL);
  T25 = fun_368;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmoduleG),CHKREF(YastYmodule_name),CHKREF(YastYmodule_name_setter),CHKREF(YLsymG),T25);
  lit_381 = YPPsym((P)"module-target-environment");
  T26 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLmoduleG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_369 = YPmet(FUNCODEREF(fun_369),CHKREF(lit_381),T26,ENVNUL);
  T30 = BOUNDP(YastYmodule_target_environment);
  if (T30 != YPfalse) {
    T29 = CHKREF(YastYmodule_target_environment);
  } else {
    T29 = YPfalse;
  }
  T28 = fun_369;
  T27 = CALL2(CHKREF(YPdefine_method),T29,T28);
  YastYmodule_target_environment = T27;
  regsym(&YastYmodule_target_environment,"ast","module-target-environment");
  lit_382 = YPPsym((P)"module-target-environment-setter");
  T31 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YastYLstatic_global_environmentG),CHKREF(YastYLmoduleG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_370 = YPmet(FUNCODEREF(fun_370),CHKREF(lit_382),T31,ENVNUL);
  T35 = BOUNDP(YastYmodule_target_environment_setter);
  if (T35 != YPfalse) {
    T34 = CHKREF(YastYmodule_target_environment_setter);
  } else {
    T34 = YPfalse;
  }
  T33 = fun_370;
  T32 = CALL2(CHKREF(YPdefine_method),T34,T33);
  YastYmodule_target_environment_setter = T32;
  regsym(&YastYmodule_target_environment_setter,"ast","module-target-environment-setter");
  T36 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_371 = YPmet(FUNCODEREF(fun_371),YPfalse,T36,ENVNUL);
  T37 = fun_371;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmoduleG),CHKREF(YastYmodule_target_environment),CHKREF(YastYmodule_target_environment_setter),CHKREF(YastYLstatic_global_environmentG),T37);
  lit_383 = YPPsym((P)"module-syntax-environment");
  T38 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLmoduleG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_372 = YPmet(FUNCODEREF(fun_372),CHKREF(lit_383),T38,ENVNUL);
  T42 = BOUNDP(YastYmodule_syntax_environment);
  if (T42 != YPfalse) {
    T41 = CHKREF(YastYmodule_syntax_environment);
  } else {
    T41 = YPfalse;
  }
  T40 = fun_372;
  T39 = CALL2(CHKREF(YPdefine_method),T41,T40);
  YastYmodule_syntax_environment = T39;
  regsym(&YastYmodule_syntax_environment,"ast","module-syntax-environment");
  lit_384 = YPPsym((P)"module-syntax-environment-setter");
  T43 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YastYLstatic_global_environmentG),CHKREF(YastYLmoduleG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_373 = YPmet(FUNCODEREF(fun_373),CHKREF(lit_384),T43,ENVNUL);
  T47 = BOUNDP(YastYmodule_syntax_environment_setter);
  if (T47 != YPfalse) {
    T46 = CHKREF(YastYmodule_syntax_environment_setter);
  } else {
    T46 = YPfalse;
  }
  T45 = fun_373;
  T44 = CALL2(CHKREF(YPdefine_method),T46,T45);
  YastYmodule_syntax_environment_setter = T44;
  regsym(&YastYmodule_syntax_environment_setter,"ast","module-syntax-environment-setter");
  T48 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_374 = YPmet(FUNCODEREF(fun_374),YPfalse,T48,ENVNUL);
  T49 = fun_374;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmoduleG),CHKREF(YastYmodule_syntax_environment),CHKREF(YastYmodule_syntax_environment_setter),CHKREF(YastYLstatic_global_environmentG),T49);
  lit_385 = YPPsym((P)"module-exports");
  T50 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YastYLmoduleG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_375 = YPmet(FUNCODEREF(fun_375),CHKREF(lit_385),T50,ENVNUL);
  T54 = BOUNDP(YastYmodule_exports);
  if (T54 != YPfalse) {
    T53 = CHKREF(YastYmodule_exports);
  } else {
    T53 = YPfalse;
  }
  T52 = fun_375;
  T51 = CALL2(CHKREF(YPdefine_method),T53,T52);
  YastYmodule_exports = T51;
  regsym(&YastYmodule_exports,"ast","module-exports");
  lit_386 = YPPsym((P)"module-exports-setter");
  T55 = YPsig(YPPlist(2,CHKREF(lit_8),CHKREF(lit_6)),YPPlist(2,CHKREF(YruntimeYLtabG),CHKREF(YastYLmoduleG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_376 = YPmet(FUNCODEREF(fun_376),CHKREF(lit_386),T55,ENVNUL);
  T59 = BOUNDP(YastYmodule_exports_setter);
  if (T59 != YPfalse) {
    T58 = CHKREF(YastYmodule_exports_setter);
  } else {
    T58 = YPfalse;
  }
  T57 = fun_376;
  T56 = CALL2(CHKREF(YPdefine_method),T58,T57);
  YastYmodule_exports_setter = T56;
  regsym(&YastYmodule_exports_setter,"ast","module-exports-setter");
  T60 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_377 = YPmet(FUNCODEREF(fun_377),YPfalse,T60,ENVNUL);
  T61 = fun_377;
  CALLN(CHKREF(YPslot),5,CHKREF(YastYLmoduleG),CHKREF(YastYmodule_exports),CHKREF(YastYmodule_exports_setter),CHKREF(YruntimeYLtabG),T61);
  lit_387 = YPPsym((P)"set-module-environments");
  lit_388 = YPPsym((P)"target-env");
  lit_389 = YPPsym((P)"syntax-env");
  lit_390 = YPPsym((P)"mod");
  T62 = YPsig(YPPlist(3,CHKREF(lit_390),CHKREF(lit_389),CHKREF(lit_388)),YPPlist(3,CHKREF(YastYLmoduleG),CHKREF(YastYLstatic_global_environmentG),CHKREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  YastYset_module_environments = YPmet(FUNCODEREF(YastYset_module_environments),CHKREF(lit_387),T62,ENVNUL);
  T63 = YastYset_module_environments;
  YastYset_module_environments = T63;
  regsym(&YastYset_module_environments,"ast","set-module-environments");
  lit_391 = YPPsym((P)"do-module-loader-modules");
  lit_392 = YPPsym((P)"loader");
  T65 = YPsig(YPPlist(1,CHKREF(lit_390)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_379 = YPmet(FUNCODEREF(fun_379),YPfalse,T65,ENVNUL);
  T64 = YPsig(YPPlist(2,CHKREF(lit_187),CHKREF(lit_392)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYdo_module_loader_modules = YPmet(FUNCODEREF(YastYdo_module_loader_modules),CHKREF(lit_391),T64,ENVNUL);
  T66 = YastYdo_module_loader_modules;
  YastYdo_module_loader_modules = T66;
  regsym(&YastYdo_module_loader_modules,"ast","do-module-loader-modules");
  lit_393 = YPPsym((P)"module-loader-module-type");
  T67 = YPsig(YPPlist(1,CHKREF(lit_392)),YPPlist(1,CHKREF(YastYLmodule_loaderG)),YPfalse,YPint((P)1),CHKREF(YastYLmoduleG));
  fun_381 = YPmet(FUNCODEREF(fun_381),CHKREF(lit_393),T67,ENVNUL);
  T71 = BOUNDP(YastYmodule_loader_module_type);
  if (T71 != YPfalse) {
    T70 = CHKREF(YastYmodule_loader_module_type);
  } else {
    T70 = YPfalse;
  }
  T69 = fun_381;
  T68 = CALL2(CHKREF(YPdefine_method),T70,T69);
  YastYmodule_loader_module_type = T68;
  regsym(&YastYmodule_loader_module_type,"ast","module-loader-module-type");
  lit_394 = YPPsym((P)"register-module!");
  lit_395 = YPPsym((P)"module-loader");
  T72 = YPsig(YPPlist(2,CHKREF(lit_395),CHKREF(lit_390)),YPPlist(2,CHKREF(YastYLmodule_loaderG),CHKREF(YastYLmoduleG)),YPfalse,YPint((P)2),CHKREF(YastYLmodule_loaderG));
  YastYregister_moduleX = YPmet(FUNCODEREF(YastYregister_moduleX),CHKREF(lit_394),T72,ENVNUL);
  T73 = YastYregister_moduleX;
  YastYregister_moduleX = T73;
  regsym(&YastYregister_moduleX,"ast","register-module!");
  lit_396 = YPPsym((P)"probe-module");
  T74 = YPsig(YPPlist(2,CHKREF(lit_395),CHKREF(lit_226)),YPPlist(2,CHKREF(YastYLmodule_loaderG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YastYLmoduleG));
  YastYprobe_module = YPmet(FUNCODEREF(YastYprobe_module),CHKREF(lit_396),T74,ENVNUL);
  T75 = YastYprobe_module;
  YastYprobe_module = T75;
  regsym(&YastYprobe_module,"ast","probe-module");
  lit_397 = YPPsym((P)"load-and-register-module");
  lit_398 = YPsb((P)"%s]\n");
  lit_399 = YPsb((P)"%s[Loading module %s...\n");
  lit_400 = YPsb((P)"%s: error: Circular use of %s not allowed");
  lit_401 = YPsb((P)"  ");
  T78 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_384 = YPmet(FUNCODEREF(fun_384),YPfalse,T78,ENVNUL);
  T77 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_385 = YPmet(FUNCODEREF(fun_385),YPfalse,T77,ENVNUL);
  T76 = YPsig(YPPlist(2,CHKREF(lit_392),CHKREF(lit_226)),YPPlist(2,CHKREF(YastYLmodule_loaderG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YastYLmoduleG));
  YastYload_and_register_module = YPmet(FUNCODEREF(YastYload_and_register_module),CHKREF(lit_397),T76,ENVNUL);
  T79 = YastYload_and_register_module;
  YastYload_and_register_module = T79;
  regsym(&YastYload_and_register_module,"ast","load-and-register-module");
  lit_402 = YPPsym((P)"load-module");
  T81 = YPsig(YPPlist(2,CHKREF(lit_392),CHKREF(lit_226)),YPPlist(2,CHKREF(YastYLmodule_loaderG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YastYLmoduleG));
  T80 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),CHKREF(lit_402),T81,Ynil,YPfalse);
  YastYload_module = T80;
  regsym(&YastYload_module,"ast","load-module");
  lit_403 = YPPsym((P)"export-binding!");
  lit_404 = YPPsym((P)"module");
  lit_405 = YPsb((P)"Tried to export %= and %= from %= as %=");
  T82 = YPsig(YPPlist(3,CHKREF(lit_404),CHKREF(lit_226),CHKREF(lit_182)),YPPlist(3,CHKREF(YastYLmoduleG),CHKREF(YastYLbinding_nameG),CHKREF(YastYLmodule_bindingG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  YastYexport_bindingX = YPmet(FUNCODEREF(YastYexport_bindingX),CHKREF(lit_403),T82,ENVNUL);
  T83 = YastYexport_bindingX;
  YastYexport_bindingX = T83;
  regsym(&YastYexport_bindingX,"ast","export-binding!");
  lit_406 = YPPsym((P)"binding-native-to?");
  T84 = YPsig(YPPlist(2,CHKREF(lit_182),CHKREF(lit_404)),YPPlist(2,CHKREF(YastYLmodule_bindingG),CHKREF(YastYLmoduleG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  YastYbinding_native_toQ = YPmet(FUNCODEREF(YastYbinding_native_toQ),CHKREF(lit_406),T84,ENVNUL);
  T85 = YastYbinding_native_toQ;
  YastYbinding_native_toQ = T85;
  regsym(&YastYbinding_native_toQ,"ast","binding-native-to?");
  lit_407 = YPPsym((P)"report-undefined-global-bindings");
  lit_408 = YPsb((P)"%s: warning: undefined binding '%s'.\n");
  T87 = YPsig(YPPlist(1,CHKREF(lit_182)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_389 = YPmet(FUNCODEREF(fun_389),YPfalse,T87,ENVNUL);
  T86 = YPsig(YPPlist(1,CHKREF(lit_390)),YPPlist(1,CHKREF(YastYLmoduleG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YastYreport_undefined_global_bindings = YPmet(FUNCODEREF(YastYreport_undefined_global_bindings),CHKREF(lit_407),T86,ENVNUL);
  T88 = YastYreport_undefined_global_bindings;
  YastYreport_undefined_global_bindings = T88;
  regsym(&YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
  lit_409 = YPPsym((P)"compute-transitive-users");
  lit_410 = YPPsym((P)"modnames");
  lit_411 = YPPsym((P)"v");
  lit_412 = YPPsym((P)"add-user");
  lit_413 = YPPsym((P)"uses-mod");
  T93 = YPsig(YPPlist(1,CHKREF(lit_411)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_391 = YPmet(FUNCODEREF(fun_391),YPfalse,T93,ENVNUL);
  T92 = YPsig(YPPlist(1,CHKREF(lit_413)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_392 = YPmet(FUNCODEREF(fun_392),YPfalse,T92,ENVNUL);
  T91 = YPsig(YPPlist(1,CHKREF(lit_390)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_393 = YPmet(FUNCODEREF(fun_393),YPfalse,T91,ENVNUL);
  T90 = YPsig(YPPlist(1,CHKREF(lit_233)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_add_user_394 = YPmet(FUNCODEREF(fun_add_user_394),CHKREF(lit_412),T90,ENVNUL);
  T89 = YPsig(YPPlist(2,CHKREF(lit_392),CHKREF(lit_410)),YPPlist(2,CHKREF(YastYLmodule_loaderG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  YastYcompute_transitive_users = YPmet(FUNCODEREF(YastYcompute_transitive_users),CHKREF(lit_409),T89,ENVNUL);
  T94 = YastYcompute_transitive_users;
  YastYcompute_transitive_users = T94;
  regsym(&YastYcompute_transitive_users,"ast","compute-transitive-users");
  lit_414 = YPPsym((P)"free-implemented-foreign-bindings");
  T96 = YPsig(YPPlist(1,CHKREF(lit_182)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_396 = YPmet(FUNCODEREF(fun_396),YPfalse,T96,ENVNUL);
  T95 = YPsig(YPPlist(1,CHKREF(lit_390)),YPPlist(1,CHKREF(YastYLmoduleG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YastYfree_implemented_foreign_bindings = YPmet(FUNCODEREF(YastYfree_implemented_foreign_bindings),CHKREF(lit_414),T95,ENVNUL);
  T97 = YastYfree_implemented_foreign_bindings;
  YastYfree_implemented_foreign_bindings = T97;
  regsym(&YastYfree_implemented_foreign_bindings,"ast","free-implemented-foreign-bindings");
  lit_415 = YPPsym((P)"remove-module-internal!");
  T98 = YPsig(YPPlist(2,CHKREF(lit_392),CHKREF(lit_390)),YPPlist(2,CHKREF(YastYLmodule_loaderG),CHKREF(YastYLmoduleG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYremove_module_internalX = YPmet(FUNCODEREF(YastYremove_module_internalX),CHKREF(lit_415),T98,ENVNUL);
  T99 = YastYremove_module_internalX;
  YastYremove_module_internalX = T99;
  regsym(&YastYremove_module_internalX,"ast","remove-module-internal!");
  lit_416 = YPPsym((P)"remove-modules-by-name!");
  T101 = YPsig(YPPlist(1,CHKREF(lit_233)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_399 = YPmet(FUNCODEREF(fun_399),YPfalse,T101,ENVNUL);
  T100 = YPsig(YPPlist(2,CHKREF(lit_392),CHKREF(lit_410)),YPPlist(2,CHKREF(YastYLmodule_loaderG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYremove_modules_by_nameX = YPmet(FUNCODEREF(YastYremove_modules_by_nameX),CHKREF(lit_416),T100,ENVNUL);
  T102 = YastYremove_modules_by_nameX;
  YastYremove_modules_by_nameX = T102;
  regsym(&YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
  lit_417 = YPPsym((P)"module-name-to-relpath");
  T103 = YPsig(YPPlist(1,CHKREF(lit_226)),YPPlist(1,CHKREF(YLsymG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  YastYmodule_name_to_relpath = YPmet(FUNCODEREF(YastYmodule_name_to_relpath),CHKREF(lit_417),T103,ENVNUL);
  T104 = YastYmodule_name_to_relpath;
  YastYmodule_name_to_relpath = T104;
  regsym(&YastYmodule_name_to_relpath,"ast","module-name-to-relpath");
  lit_418 = YPPsym((P)"install-initial-bindings");
  lit_419 = YPPlist(2,YPPsym((P)"seq"),YPPsym((P)"use"));
  T106 = YPsig(YPPlist(1,CHKREF(lit_226)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_402 = YPmet(FUNCODEREF(fun_402),YPfalse,T106,ENVNUL);
  T105 = YPsig(YPPlist(2,CHKREF(lit_300),CHKREF(lit_392)),YPPlist(2,CHKREF(YastYLstatic_global_environmentG),CHKREF(YastYLmodule_loaderG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYinstall_initial_bindings = YPmet(FUNCODEREF(YastYinstall_initial_bindings),CHKREF(lit_418),T105,ENVNUL);
  T107 = YastYinstall_initial_bindings;
  YastYinstall_initial_bindings = T107;
  regsym(&YastYinstall_initial_bindings,"ast","install-initial-bindings");
  lit_420 = YPPsym((P)"fab-static-global-environment");
  lit_421 = YPPsym((P)"allow-foreign-names?");
  T108 = YPsig(YPPlist(3,CHKREF(lit_404),CHKREF(lit_395),CHKREF(lit_421)),YPPlist(3,CHKREF(YastYLmoduleG),CHKREF(YastYLmodule_loaderG),CHKREF(YLlogG)),YPfalse,YPint((P)3),CHKREF(YastYLstatic_global_environmentG));
  YastYfab_static_global_environment = YPmet(FUNCODEREF(YastYfab_static_global_environment),CHKREF(lit_420),T108,ENVNUL);
  T109 = YastYfab_static_global_environment;
  YastYfab_static_global_environment = T109;
  regsym(&YastYfab_static_global_environment,"ast","fab-static-global-environment");
  lit_422 = YPPsym((P)"fab-subset-environment");
  lit_423 = YPPsym((P)"excluded");
  lit_424 = YPPsym((P)"src-module");
  T111 = YPsig(YPPlist(2,CHKREF(lit_226),CHKREF(lit_182)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_405 = YPmet(FUNCODEREF(fun_405),YPfalse,T111,ENVNUL);
  T110 = YPsig(YPPlist(3,CHKREF(lit_404),CHKREF(lit_424),CHKREF(lit_423)),YPPlist(3,CHKREF(YastYLmoduleG),CHKREF(YastYLmoduleG),CHKREF(YLcolG)),YPfalse,YPint((P)3),CHKREF(YastYLstatic_global_environmentG));
  YastYfab_subset_environment = YPmet(FUNCODEREF(YastYfab_subset_environment),CHKREF(lit_422),T110,ENVNUL);
  T112 = YastYfab_subset_environment;
  YastYfab_subset_environment = T112;
  regsym(&YastYfab_subset_environment,"ast","fab-subset-environment");
  T114 = (P)YPpair(CHKREF(YastYLmodule_loaderG),Ynil);
  T113 = CALL3(CHKREF(YPisa),T114,Ynil,Ynil);
  YastYLruntime_module_loaderG = T113;
  regsym(&YastYLruntime_module_loaderG,"ast","<runtime-module-loader>");
  T117 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_407 = YPmet(FUNCODEREF(fun_407),YPfalse,T117,ENVNUL);
  T116 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_408 = YPmet(FUNCODEREF(fun_408),YPfalse,T116,ENVNUL);
  T115 = YPsig(YPPlist(2,CHKREF(lit_392),CHKREF(lit_226)),YPPlist(2,CHKREF(YastYLruntime_module_loaderG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YastYLmoduleG));
  fun_409 = YPmet(FUNCODEREF(fun_409),CHKREF(lit_402),T115,ENVNUL);
  T121 = BOUNDP(YastYload_module);
  if (T121 != YPfalse) {
    T120 = CHKREF(YastYload_module);
  } else {
    T120 = YPfalse;
  }
  T119 = fun_409;
  T118 = CALL2(CHKREF(YPdefine_method),T120,T119);
  YastYload_module = T118;
  regsym(&YastYload_module,"ast","load-module");
  T123 = (P)YPpair(CHKREF(YastYLruntime_module_loaderG),Ynil);
  T122 = CALL3(CHKREF(YPisa),T123,Ynil,Ynil);
  YastYTruntime_module_loaderT = T122;
  regsym(&YastYTruntime_module_loaderT,"ast","*runtime-module-loader*");
  lit_425 = YPPsym((P)"runtime-module-loader");
  T124 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  YastYruntime_module_loader = YPmet(FUNCODEREF(YastYruntime_module_loader),CHKREF(lit_425),T124,ENVNUL);
  T125 = YastYruntime_module_loader;
  YastYruntime_module_loader = T125;
  regsym(&YastYruntime_module_loader,"ast","runtime-module-loader");
  lit_426 = YPPsym((P)"runtime-module");
  T126 = YPsig(YPPlist(1,CHKREF(lit_233)),YPPlist(1,CHKREF(YLsymG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YastYruntime_module = YPmet(FUNCODEREF(YastYruntime_module),CHKREF(lit_426),T126,ENVNUL);
  T127 = YastYruntime_module;
  YastYruntime_module = T127;
  regsym(&YastYruntime_module,"ast","runtime-module");
  lit_427 = YPPsym((P)"runtime-environment");
  T128 = YPsig(YPPlist(1,CHKREF(lit_233)),YPPlist(1,CHKREF(YLsymG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YastYruntime_environment = YPmet(FUNCODEREF(YastYruntime_environment),CHKREF(lit_427),T128,ENVNUL);
  T129 = YastYruntime_environment;
  YastYruntime_environment = T129;
  regsym(&YastYruntime_environment,"ast","runtime-environment");
  lit_428 = YPPsym((P)"reloader-do-create-module");
  T130 = YPsig(YPPlist(1,CHKREF(lit_233)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YastYLmoduleG));
  YastYreloader_do_create_module = YPmet(FUNCODEREF(YastYreloader_do_create_module),CHKREF(lit_428),T130,ENVNUL);
  T131 = YastYreloader_do_create_module;
  YastYreloader_do_create_module = T131;
  regsym(&YastYreloader_do_create_module,"ast","reloader-do-create-module");
  lit_429 = YPPsym((P)"reloader-do-use-module");
  lit_430 = YPPsym((P)"uses");
  T132 = YPsig(YPPlist(2,CHKREF(lit_390),CHKREF(lit_430)),YPPlist(2,CHKREF(YastYLmoduleG),CHKREF(YastYLmoduleG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYreloader_do_use_module = YPmet(FUNCODEREF(YastYreloader_do_use_module),CHKREF(lit_429),T132,ENVNUL);
  T133 = YastYreloader_do_use_module;
  YastYreloader_do_use_module = T133;
  regsym(&YastYreloader_do_use_module,"ast","reloader-do-use-module");
  lit_431 = YPPsym((P)"reloader-do-import");
  lit_432 = YPPsym((P)"original-name");
  lit_433 = YPPsym((P)"from-mod");
  lit_434 = YPsb((P)"Can't find %s from %s for %s\n");
  T134 = YPsig(YPPlist(4,CHKREF(lit_390),CHKREF(lit_226),CHKREF(lit_433),CHKREF(lit_432)),YPPlist(4,CHKREF(YastYLmoduleG),CHKREF(YLstrG),CHKREF(YastYLmoduleG),CHKREF(YLstrG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  YastYreloader_do_import = YPmet(FUNCODEREF(YastYreloader_do_import),CHKREF(lit_431),T134,ENVNUL);
  T135 = YastYreloader_do_import;
  YastYreloader_do_import = T135;
  regsym(&YastYreloader_do_import,"ast","reloader-do-import");
  lit_435 = YPPsym((P)"reloader-do-runtime-binding");
  T136 = YPsig(YPPlist(3,CHKREF(lit_390),CHKREF(lit_226),CHKREF(lit_321)),YPPlist(3,CHKREF(YastYLmoduleG),CHKREF(YLstrG),CHKREF(YLlocG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  YastYreloader_do_runtime_binding = YPmet(FUNCODEREF(YastYreloader_do_runtime_binding),CHKREF(lit_435),T136,ENVNUL);
  T137 = YastYreloader_do_runtime_binding;
  YastYreloader_do_runtime_binding = T137;
  regsym(&YastYreloader_do_runtime_binding,"ast","reloader-do-runtime-binding");
  lit_436 = YPPsym((P)"reloader-do-other-binding");
  T138 = YPsig(YPPlist(2,CHKREF(lit_390),CHKREF(lit_226)),YPPlist(2,CHKREF(YastYLmoduleG),CHKREF(YLstrG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYreloader_do_other_binding = YPmet(FUNCODEREF(YastYreloader_do_other_binding),CHKREF(lit_436),T138,ENVNUL);
  T139 = YastYreloader_do_other_binding;
  YastYreloader_do_other_binding = T139;
  regsym(&YastYreloader_do_other_binding,"ast","reloader-do-other-binding");
  lit_437 = YPPsym((P)"reloader-do-export");
  lit_438 = YPPsym((P)"as-name");
  lit_439 = YPsb((P)"Can't find %s in %s\n");
  T140 = YPsig(YPPlist(3,CHKREF(lit_390),CHKREF(lit_226),CHKREF(lit_438)),YPPlist(3,CHKREF(YastYLmoduleG),CHKREF(YLstrG),CHKREF(YLstrG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  YastYreloader_do_export = YPmet(FUNCODEREF(YastYreloader_do_export),CHKREF(lit_437),T140,ENVNUL);
  T141 = YastYreloader_do_export;
  YastYreloader_do_export = T141;
  regsym(&YastYreloader_do_export,"ast","reloader-do-export");
  lit_440 = YPPsym((P)"reload-modules");
  T142 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  YastYreload_modules = YPmet(FUNCODEREF(YastYreload_modules),CHKREF(lit_440),T142,ENVNUL);
  T143 = YastYreload_modules;
  YastYreload_modules = T143;
  regsym(&YastYreload_modules,"ast","reload-modules");
  lit_441 = YPPsym((P)"install-magic-bindings");
  T145 = YPsig(YPPlist(1,CHKREF(lit_182)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_420 = YPmet(FUNCODEREF(fun_420),YPfalse,T145,ENVNUL);
  T144 = YPsig(YPPlist(1,CHKREF(lit_300)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YastYinstall_magic_bindings = YPmet(FUNCODEREF(YastYinstall_magic_bindings),CHKREF(lit_441),T144,ENVNUL);
  T146 = YastYinstall_magic_bindings;
  YastYinstall_magic_bindings = T146;
  regsym(&YastYinstall_magic_bindings,"ast","install-magic-bindings");
  lit_442 = YPPsym((P)"reload-macros");
  T147 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  YastYreload_macros = YPmet(FUNCODEREF(YastYreload_macros),CHKREF(lit_442),T147,ENVNUL);
  T148 = YastYreload_macros;
  YastYreload_macros = T148;
  regsym(&YastYreload_macros,"ast","reload-macros");
  lit_443 = YPPsym((P)"install-interpreter-hacks");
  T149 = YPsig(YPPlist(1,CHKREF(lit_300)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YastYinstall_interpreter_hacks = YPmet(FUNCODEREF(YastYinstall_interpreter_hacks),CHKREF(lit_443),T149,ENVNUL);
  T150 = YastYinstall_interpreter_hacks;
  YastYinstall_interpreter_hacks = T150;
  regsym(&YastYinstall_interpreter_hacks,"ast","install-interpreter-hacks");
  lit_444 = YPPsym((P)"init-runtime");
  T151 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  YastYinit_runtime = YPmet(FUNCODEREF(YastYinit_runtime),CHKREF(lit_444),T151,ENVNUL);
  T152 = YastYinit_runtime;
  YastYinit_runtime = T152;
  regsym(&YastYinit_runtime,"ast","init-runtime");
  lit_445 = YPPlist(5,YPPsym((P)"ct"),YPPsym((P)"ct-also"),YPPsym((P)"ds"),YPPsym((P)"use"),YPPsym((P)"export"));
  YastYsyntax_environment_excluded_bindings = CHKREF(lit_445);
  regsym(&YastYsyntax_environment_excluded_bindings,"ast","syntax-environment-excluded-bindings");
  lit_446 = YPPsym((P)"fab-syntax-environment");
  lit_447 = YPPsym((P)"proto");
  T153 = YPsig(YPPlist(1,CHKREF(lit_404)),YPPlist(1,CHKREF(YastYLmoduleG)),YPfalse,YPint((P)1),CHKREF(YastYLstatic_global_environmentG));
  YastYfab_syntax_environment = YPmet(FUNCODEREF(YastYfab_syntax_environment),CHKREF(lit_446),T153,ENVNUL);
  T154 = YastYfab_syntax_environment;
  YastYfab_syntax_environment = T154;
  regsym(&YastYfab_syntax_environment,"ast","fab-syntax-environment");
  lit_448 = YPPsym((P)"fab-p2c-module");
  T155 = YPsig(YPPlist(2,CHKREF(lit_392),CHKREF(lit_226)),YPPlist(2,CHKREF(YastYLmodule_loaderG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YastYLmoduleG));
  YastYfab_p2c_module = YPmet(FUNCODEREF(YastYfab_p2c_module),CHKREF(lit_448),T155,ENVNUL);
  T156 = YastYfab_p2c_module;
  YastYfab_p2c_module = T156;
  regsym(&YastYfab_p2c_module,"ast","fab-p2c-module");
  lit_449 = YPPsym((P)"init-p2c-boot-environment");
  T157 = YPsig(YPPlist(1,CHKREF(lit_300)),YPPlist(1,CHKREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YastYinit_p2c_boot_environment = YPmet(FUNCODEREF(YastYinit_p2c_boot_environment),CHKREF(lit_449),T157,ENVNUL);
  T158 = YastYinit_p2c_boot_environment;
  YastYinit_p2c_boot_environment = T158;
  regsym(&YastYinit_p2c_boot_environment,"ast","init-p2c-boot-environment");
  lit_450 = YPPsym((P)"init-p2c-regular-environment");
  T159 = YPsig(YPPlist(2,CHKREF(lit_300),CHKREF(lit_392)),YPPlist(2,CHKREF(YastYLstatic_global_environmentG),CHKREF(YastYLmodule_loaderG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYinit_p2c_regular_environment = YPmet(FUNCODEREF(YastYinit_p2c_regular_environment),CHKREF(lit_450),T159,ENVNUL);
  T160 = YastYinit_p2c_regular_environment;
  YastYinit_p2c_regular_environment = T160;
  regsym(&YastYinit_p2c_regular_environment,"ast","init-p2c-regular-environment");
  lit_451 = YPPsym((P)"init-ast");
  T161 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  YastYinit_ast = YPmet(FUNCODEREF(YastYinit_ast),CHKREF(lit_451),T161,ENVNUL);
  T162 = YastYinit_ast;
  YastYinit_ast = T162;
  regsym(&YastYinit_ast,"ast","init-ast");
  lit_452 = YPPsym((P)"do-static-global-bindings");
  T164 = YPsig(YPPlist(1,CHKREF(lit_300)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_430 = YPmet(FUNCODEREF(fun_loop_430),CHKREF(lit_143),T164,ENVNUL);
  T163 = YPsig(YPPlist(2,CHKREF(lit_187),CHKREF(lit_300)),YPPlist(2,CHKREF(YLfunG),CHKREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYdo_static_global_bindings = YPmet(FUNCODEREF(YastYdo_static_global_bindings),CHKREF(lit_452),T163,ENVNUL);
  T165 = YastYdo_static_global_bindings;
  YastYdo_static_global_bindings = T165;
  regsym(&YastYdo_static_global_bindings,"ast","do-static-global-bindings");
  lit_453 = YPPsym((P)"do-named-static-global-bindings");
  T167 = YPsig(YPPlist(1,CHKREF(lit_300)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_432 = YPmet(FUNCODEREF(fun_loop_432),CHKREF(lit_143),T167,ENVNUL);
  T166 = YPsig(YPPlist(2,CHKREF(lit_187),CHKREF(lit_300)),YPPlist(2,CHKREF(YLfunG),CHKREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YastYdo_named_static_global_bindings = YPmet(FUNCODEREF(YastYdo_named_static_global_bindings),CHKREF(lit_453),T166,ENVNUL);
  T168 = YastYdo_named_static_global_bindings;
  YastYdo_named_static_global_bindings = T168;
  regsym(&YastYdo_named_static_global_bindings,"ast","do-named-static-global-bindings");
  if (YPfalse != YPfalse) {
    T170 = CHKREF(YastYast_evaluate);
  } else {
    T170 = YPfalse;
  }
  T169 = T170;
  return T169;
}

P YastY___main_8___() {
  P T0;
loop:
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  T0 = YPfalse;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_write;
extern MODULE_INFO module_info_syntax;
extern MODULE_INFO module_info_strings;
extern MODULE_INFO module_info_protoSsystem;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_runtime},
  {&module_info_write},
  {&module_info_syntax},
  {&module_info_strings},
  {&module_info_protoSsystem},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"locative-value", &module_info_runtime, "locative-value"},
  {"sexpr-variable-name", &module_info_syntax, "sexpr-variable-name"},
  {"sexpr-make-getter", &module_info_syntax, "sexpr-make-getter"},
  {"sexpr-forward-primitive?", &module_info_syntax, "sexpr-forward-primitive?"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"remainder", &module_info_runtime, "remainder"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%i?", &module_info_boot, "%i?"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"ascii-whitespaces", &module_info_runtime, "ascii-whitespaces"},
  {"%su", &module_info_boot, "%su"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_syntax, "sexpr-unwind-protect-cleanup-forms"},
  {"assq", &module_info_runtime, "assq"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"=", &module_info_runtime, "="},
  {"slot-init", &module_info_boot, "slot-init"},
  {"$sexpr-set-tag", &module_info_syntax, "$sexpr-set-tag"},
  {"export", &module_info_boot, "export"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"map", &module_info_macros, "map"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"sexpr-method-signature", &module_info_syntax, "sexpr-method-signature"},
  {"%i!", &module_info_boot, "%i!"},
  {"2nd", &module_info_runtime, "2nd"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"sexpr-expand-backquote", &module_info_syntax, "sexpr-expand-backquote"},
  {"fapply", &module_info_boot, "fapply"},
  {"var-name", &module_info_macros, "var-name"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"sexpr-syntax-definition-value", &module_info_syntax, "sexpr-syntax-definition-value"},
  {"sexpr-loc-bound-signatures", &module_info_syntax, "sexpr-loc-bound-signatures"},
  {"sexpr-assignment-value", &module_info_syntax, "sexpr-assignment-value"},
  {"*c-extension*", &module_info_protoSsystem, "*c-extension*"},
  {"if", &module_info_boot, "if"},
  {"<int>", &module_info_boot, "<int>"},
  {"<log>", &module_info_boot, "<log>"},
  {"do2", &module_info_runtime, "do2"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"$sexpr-define-generic-tag", &module_info_syntax, "$sexpr-define-generic-tag"},
  {"compose", &module_info_runtime, "compose"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"or", &module_info_macros, "or"},
  {"assert", &module_info_macros, "assert"},
  {"round", &module_info_runtime, "round"},
  {"when", &module_info_macros, "when"},
  {"object<", &module_info_boot, "object<"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"sexpr-isa-init-values", &module_info_syntax, "sexpr-isa-init-values"},
  {"from-below", &module_info_runtime, "from-below"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"type-or", &module_info_runtime, "type-or"},
  {"$sexpr-slot-tag", &module_info_syntax, "$sexpr-slot-tag"},
  {"popf", &module_info_macros, "popf"},
  {"try", &module_info_boot, "try"},
  {"$sexpr-monitor-tag", &module_info_syntax, "$sexpr-monitor-tag"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"exe-filename", &module_info_protoSsystem, "exe-filename"},
  {"let", &module_info_boot, "let"},
  {"dp", &module_info_boot, "dp"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"sexpr-sequence->begin", &module_info_syntax, "sexpr-sequence->begin"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"sexpr-assignment-variable", &module_info_syntax, "sexpr-assignment-variable"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"<", &module_info_runtime, "<"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"sexpr-isa-slot-inits", &module_info_syntax, "sexpr-isa-slot-inits"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"%lu", &module_info_boot, "%lu"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"%with-monitor", &module_info_runtime, "%with-monitor"},
  {"sexpr-block-body", &module_info_syntax, "sexpr-block-body"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"cat!", &module_info_runtime, "cat!"},
  {"$sexpr-macro-expand-tag", &module_info_syntax, "$sexpr-macro-expand-tag"},
  {"keys", &module_info_runtime, "keys"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"sexpr-slot-init", &module_info_syntax, "sexpr-slot-init"},
  {"pos?", &module_info_runtime, "pos?"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"<col>", &module_info_boot, "<col>"},
  {"file-type", &module_info_protoSsystem, "file-type"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"dv", &module_info_boot, "dv"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"%f-", &module_info_boot, "%f-"},
  {"$sexpr-begin-tag", &module_info_syntax, "$sexpr-begin-tag"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"%fu", &module_info_boot, "%fu"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"string-split", &module_info_strings, "string-split"},
  {"%pair", &module_info_boot, "%pair"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"~==", &module_info_runtime, "~=="},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"obj-filename", &module_info_protoSsystem, "obj-filename"},
  {"error", &module_info_boot, "error"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"env-object-name", &module_info_write, "env-object-name"},
  {"sexpr-syntax-definition-variable", &module_info_syntax, "sexpr-syntax-definition-variable"},
  {"pair", &module_info_macros, "pair"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"$sexpr-bind-exit-tag", &module_info_syntax, "$sexpr-bind-exit-tag"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"seq", &module_info_boot, "seq"},
  {"tup", &module_info_macros, "tup"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"pushf", &module_info_macros, "pushf"},
  {"ash", &module_info_runtime, "ash"},
  {"quote", &module_info_boot, "quote"},
  {"port-index", &module_info_runtime, "port-index"},
  {"assocq", &module_info_runtime, "assocq"},
  {"%f+", &module_info_boot, "%f+"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"<port>", &module_info_runtime, "<port>"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {">", &module_info_runtime, ">"},
  {">=", &module_info_runtime, ">="},
  {"<met>", &module_info_boot, "<met>"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"sub", &module_info_runtime, "sub"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"sexpr-function-definition-variable", &module_info_syntax, "sexpr-function-definition-variable"},
  {"display", &module_info_write, "display"},
  {"from-by", &module_info_runtime, "from-by"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"%str", &module_info_boot, "%str"},
  {"sexpr-method-body", &module_info_syntax, "sexpr-method-body"},
  {"$sexpr-syntax-if-tag", &module_info_syntax, "$sexpr-syntax-if-tag"},
  {"dec", &module_info_macros, "dec"},
  {"identity", &module_info_runtime, "identity"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"bound?", &module_info_boot, "bound?"},
  {"sexpr-slot-variable", &module_info_syntax, "sexpr-slot-variable"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"lsh", &module_info_runtime, "lsh"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"mem?", &module_info_runtime, "mem?"},
  {"lab", &module_info_boot, "lab"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"floor", &module_info_runtime, "floor"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"find-key", &module_info_runtime, "find-key"},
  {"df", &module_info_boot, "df"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"sexpr-make-macro-function", &module_info_syntax, "sexpr-make-macro-function"},
  {"dg", &module_info_boot, "dg"},
  {"tail", &module_info_boot, "tail"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"%i+", &module_info_boot, "%i+"},
  {"fill", &module_info_runtime, "fill"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"add", &module_info_runtime, "add"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"pop", &module_info_runtime, "pop"},
  {"string-repeat", &module_info_strings, "string-repeat"},
  {"alter", &module_info_runtime, "alter"},
  {"push", &module_info_runtime, "push"},
  {"collected", &module_info_macros, "collected"},
  {"$sexpr-define-tag", &module_info_syntax, "$sexpr-define-tag"},
  {"fab", &module_info_runtime, "fab"},
  {"modulo", &module_info_runtime, "modulo"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"sexpr-if-else", &module_info_syntax, "sexpr-if-else"},
  {"%f/", &module_info_boot, "%f/"},
  {"sexpr-variable?", &module_info_syntax, "sexpr-variable?"},
  {"%cu", &module_info_boot, "%cu"},
  {"curry", &module_info_runtime, "curry"},
  {"%iu", &module_info_boot, "%iu"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"truncate", &module_info_runtime, "truncate"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"%i^", &module_info_boot, "%i^"},
  {"lst", &module_info_boot, "lst"},
  {"assoc", &module_info_runtime, "assoc"},
  {"%vec", &module_info_boot, "%vec"},
  {"now-key", &module_info_runtime, "now-key"},
  {"next-method", &module_info_macros, "next-method"},
  {"empty", &module_info_runtime, "empty"},
  {"sexpr-unquote?", &module_info_syntax, "sexpr-unquote?"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"<str>", &module_info_boot, "<str>"},
  {"%i&", &module_info_boot, "%i&"},
  {"all?", &module_info_runtime, "all?"},
  {"%cb", &module_info_boot, "%cb"},
  {"dm", &module_info_boot, "dm"},
  {"sexpr-isa-init-slots", &module_info_syntax, "sexpr-isa-init-slots"},
  {"logior", &module_info_runtime, "logior"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"from-above", &module_info_runtime, "from-above"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"default", &module_info_runtime, "default"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"any?", &module_info_runtime, "any?"},
  {"sexpr-operands", &module_info_syntax, "sexpr-operands"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"%i<", &module_info_boot, "%i<"},
  {"even?", &module_info_runtime, "even?"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"floor/", &module_info_runtime, "floor/"},
  {"add-src-path", &module_info_protoSsystem, "add-src-path"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"sexpr-definition-variable", &module_info_syntax, "sexpr-definition-variable"},
  {"%im", &module_info_boot, "%im"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"%isa", &module_info_boot, "%isa"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"char->ascii", &module_info_runtime, "char->ascii"},
  {"neg", &module_info_runtime, "neg"},
  {"do", &module_info_runtime, "do"},
  {"add!", &module_info_runtime, "add!"},
  {"inc", &module_info_macros, "inc"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"isa?", &module_info_boot, "isa?"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"apply", &module_info_boot, "apply"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"sexpr-function-definition-value", &module_info_syntax, "sexpr-function-definition-value"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"-", &module_info_runtime, "-"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"%ib", &module_info_boot, "%ib"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"sexpr-loc-bound-names", &module_info_syntax, "sexpr-loc-bound-names"},
  {"%it/", &module_info_boot, "%it/"},
  {"%do-runtime-bindings", &module_info_boot, "%do-runtime-bindings"},
  {"add-build-path", &module_info_protoSsystem, "add-build-path"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"proto-filename", &module_info_protoSsystem, "proto-filename"},
  {"fun", &module_info_boot, "fun"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"<error>", &module_info_runtime, "<error>"},
  {"%raw", &module_info_boot, "%raw"},
  {"%ft", &module_info_boot, "%ft"},
  {"$sexpr-define-method-tag", &module_info_syntax, "$sexpr-define-method-tag"},
  {"==", &module_info_macros, "=="},
  {"<loc>", &module_info_boot, "<loc>"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"*proto-extension*", &module_info_protoSsystem, "*proto-extension*"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"vec", &module_info_runtime, "vec"},
  {"%sb", &module_info_boot, "%sb"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"<range>", &module_info_runtime, "<range>"},
  {"write-char", &module_info_runtime, "write-char"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"3rd", &module_info_runtime, "3rd"},
  {"sexpr-syntax-if-value", &module_info_syntax, "sexpr-syntax-if-value"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"isa", &module_info_boot, "isa"},
  {"not", &module_info_boot, "not"},
  {"logxor", &module_info_runtime, "logxor"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"as", &module_info_runtime, "as"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"$sexpr-locals-tag", &module_info_syntax, "$sexpr-locals-tag"},
  {"<any>", &module_info_boot, "<any>"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"~=", &module_info_runtime, "~="},
  {"label-components", &module_info_protoSsystem, "label-components"},
  {"app-args", &module_info_runtime, "app-args"},
  {"/", &module_info_runtime, "/"},
  {"sexpr-if-then", &module_info_syntax, "sexpr-if-then"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"sexpr-text-of-quotation", &module_info_syntax, "sexpr-text-of-quotation"},
  {"fin", &module_info_boot, "fin"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"fabs", &module_info_runtime, "fabs"},
  {"rev", &module_info_runtime, "rev"},
  {"<list>", &module_info_runtime, "<list>"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"max", &module_info_runtime, "max"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"ds", &module_info_boot, "ds"},
  {"*path-separator*", &module_info_protoSsystem, "*path-separator*"},
  {"%snul", &module_info_boot, "%snul"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"<=", &module_info_runtime, "<="},
  {"zero?", &module_info_runtime, "zero?"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"sexpr-make-setter-name", &module_info_syntax, "sexpr-make-setter-name"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"map2", &module_info_runtime, "map2"},
  {"$sexpr-let-tag", &module_info_syntax, "$sexpr-let-tag"},
  {"file-mtime", &module_info_protoSsystem, "file-mtime"},
  {"sexpr-make-anonymous-method", &module_info_syntax, "sexpr-make-anonymous-method"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"+", &module_info_runtime, "+"},
  {"address-of", &module_info_runtime, "address-of"},
  {"%velt", &module_info_boot, "%velt"},
  {"select", &module_info_macros, "select"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"pos", &module_info_runtime, "pos"},
  {"sexpr-let->combination", &module_info_syntax, "sexpr-let->combination"},
  {"$sexpr-if-tag", &module_info_syntax, "$sexpr-if-tag"},
  {"reduce", &module_info_runtime, "reduce"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"do3", &module_info_runtime, "do3"},
  {"sexpr-loc-bound-bodies", &module_info_syntax, "sexpr-loc-bound-bodies"},
  {"var-type", &module_info_macros, "var-type"},
  {"%i-", &module_info_boot, "%i-"},
  {"$sexpr-define-syntax-tag", &module_info_syntax, "$sexpr-define-syntax-tag"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"os-binding-value-setter", &module_info_protoSsystem, "os-binding-value-setter"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"from", &module_info_runtime, "from"},
  {"dlet", &module_info_macros, "dlet"},
  {"$sexpr-unwind-protect-tag", &module_info_syntax, "$sexpr-unwind-protect-tag"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"writeln", &module_info_write, "writeln"},
  {"case", &module_info_macros, "case"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"sexpr-function-signature", &module_info_syntax, "sexpr-function-signature"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"1st", &module_info_runtime, "1st"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"$sexpr-method-tag", &module_info_syntax, "$sexpr-method-tag"},
  {"sexpr-variable-type", &module_info_syntax, "sexpr-variable-type"},
  {"*proto-root*", &module_info_protoSsystem, "*proto-root*"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"force-output", &module_info_runtime, "force-output"},
  {"sexpr-block-name", &module_info_syntax, "sexpr-block-name"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"write-to-string", &module_info_write, "write-to-string"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"sexpr-isa-parents", &module_info_syntax, "sexpr-isa-parents"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"gensym", &module_info_macros, "gensym"},
  {"$sexpr-quasiquote-tag", &module_info_syntax, "$sexpr-quasiquote-tag"},
  {"sexpr-make-setter", &module_info_syntax, "sexpr-make-setter"},
  {"assqn", &module_info_runtime, "assqn"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"object-direct-parents", &module_info_boot, "object-direct-parents"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"logand", &module_info_runtime, "logand"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"sexpr-monitor-expand", &module_info_syntax, "sexpr-monitor-expand"},
  {"sexpr-loc-raw-body", &module_info_syntax, "sexpr-loc-raw-body"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"components-parent-directory", &module_info_protoSsystem, "components-parent-directory"},
  {"$sexpr-isa-tag", &module_info_syntax, "$sexpr-isa-tag"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"components-to-pathname", &module_info_protoSsystem, "components-to-pathname"},
  {"*", &module_info_runtime, "*"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"always", &module_info_runtime, "always"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"cat", &module_info_macros, "cat"},
  {"sexpr-bind-pattern-variables", &module_info_syntax, "sexpr-bind-pattern-variables"},
  {"<num>", &module_info_boot, "<num>"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"sexpr-unquote-splicing?", &module_info_syntax, "sexpr-unquote-splicing?"},
  {"c-filename", &module_info_protoSsystem, "c-filename"},
  {"pathname-to-components", &module_info_protoSsystem, "pathname-to-components"},
  {"file-exists?", &module_info_protoSsystem, "file-exists?"},
  {"str", &module_info_runtime, "str"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"$sexpr-quote-tag", &module_info_syntax, "$sexpr-quote-tag"},
  {"os-name", &module_info_protoSsystem, "os-name"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"loc", &module_info_boot, "loc"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"sexpr-slot-object", &module_info_syntax, "sexpr-slot-object"},
  {"pick", &module_info_runtime, "pick"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"assoc-value", &module_info_runtime, "assoc-value"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"in", &module_info_runtime, "in"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"sexpr-iterate->loc", &module_info_syntax, "sexpr-iterate->loc"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"out", &module_info_runtime, "out"},
  {"%c=", &module_info_boot, "%c="},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"os-binding-value", &module_info_protoSsystem, "os-binding-value"},
  {"parent-directory", &module_info_protoSsystem, "parent-directory"},
  {"sexpr-operator", &module_info_syntax, "sexpr-operator"},
  {"and", &module_info_macros, "and"},
  {"sexpr-syntax-if-pattern", &module_info_syntax, "sexpr-syntax-if-pattern"},
  {"ct", &module_info_boot, "ct"},
  {"odd?", &module_info_runtime, "odd?"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"nil", &module_info_boot, "nil"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"for", &module_info_macros, "for"},
  {"components-last", &module_info_protoSsystem, "components-last"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"round/", &module_info_runtime, "round/"},
  {"object-direct-slots", &module_info_boot, "object-direct-slots"},
  {"mif", &module_info_boot, "mif"},
  {"abs", &module_info_runtime, "abs"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"%i=", &module_info_boot, "%i="},
  {"cat2", &module_info_runtime, "cat2"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"$sexpr-define-function-tag", &module_info_syntax, "$sexpr-define-function-tag"},
  {"sexpr-signature-value", &module_info_syntax, "sexpr-signature-value"},
  {"%slen", &module_info_boot, "%slen"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"%slot", &module_info_boot, "%slot"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"sexpr-syntax-if-then", &module_info_syntax, "sexpr-syntax-if-then"},
  {"head", &module_info_boot, "head"},
  {"lognot", &module_info_runtime, "lognot"},
  {"sexpr-syntax-if-else", &module_info_syntax, "sexpr-syntax-if-else"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"slot", &module_info_boot, "slot"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"components-basename", &module_info_protoSsystem, "components-basename"},
  {"$sexpr-iterate-tag", &module_info_syntax, "$sexpr-iterate-tag"},
  {"sig", &module_info_runtime, "sig"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"elt", &module_info_runtime, "elt"},
  {"first-then", &module_info_runtime, "first-then"},
  {"%f*", &module_info_boot, "%f*"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"to-str", &module_info_runtime, "to-str"},
  {"sexpr-function-body", &module_info_syntax, "sexpr-function-body"},
  {"collect", &module_info_macros, "collect"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"<map>", &module_info_runtime, "<map>"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"read", &module_info_runtime, "read"},
  {"sexpr-if-test", &module_info_syntax, "sexpr-if-test"},
  {"write-string", &module_info_runtime, "write-string"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"%f<", &module_info_boot, "%f<"},
  {"probe-directory", &module_info_protoSsystem, "probe-directory"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"map-str", &module_info_strings, "map-str"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"%c<", &module_info_boot, "%c<"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"dss", &module_info_boot, "dss"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"del-key", &module_info_runtime, "del-key"},
  {"del", &module_info_runtime, "del"},
  {"eval", &module_info_syntax, "eval"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"sexpr-unwind-protect-protected-form", &module_info_syntax, "sexpr-unwind-protect-protected-form"},
  {"%fb", &module_info_boot, "%fb"},
  {"from-to", &module_info_runtime, "from-to"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"rep", &module_info_boot, "rep"},
  {"last", &module_info_runtime, "last"},
  {"%f=", &module_info_boot, "%f="},
  {"object-name", &module_info_write, "object-name"},
  {"%bb", &module_info_boot, "%bb"},
  {"sexpr-definition-value", &module_info_syntax, "sexpr-definition-value"},
  {"<step>", &module_info_runtime, "<step>"},
  {"min", &module_info_runtime, "min"},
  {"format", &module_info_runtime, "format"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"type-error", &module_info_boot, "type-error"},
  {"sexpr-make-begin", &module_info_syntax, "sexpr-make-begin"},
  {"%iv", &module_info_boot, "%iv"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"use", &module_info_boot, "use"},
  {"%i*", &module_info_boot, "%i*"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"string-join", &module_info_strings, "string-join"},
  {"write", &module_info_write, "write"},
  {"collecting", &module_info_macros, "collecting"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"<traits>", &module_info_boot, "<traits>"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"hierarchical-components", &module_info_protoSsystem, "hierarchical-components"},
  {"len", &module_info_runtime, "len"},
  {"nul", &module_info_boot, "nul"},
  {"empty?", &module_info_macros, "empty?"},
  {"%call-next-method", &module_info_boot, "%call-next-method"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"rev!", &module_info_runtime, "rev!"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"set", &module_info_boot, "set"},
  {"nul?", &module_info_runtime, "nul?"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"sexpr-make-application", &module_info_syntax, "sexpr-make-application"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"create-directory", &module_info_protoSsystem, "create-directory"},
  {"%selt", &module_info_boot, "%selt"},
  {"read-char", &module_info_runtime, "read-char"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"buf", &module_info_runtime, "buf"},
  {"*obj-extension*", &module_info_protoSsystem, "*obj-extension*"},
  {"*exe-extension*", &module_info_protoSsystem, "*exe-extension*"},
  {"sexpr-signature-parameters", &module_info_syntax, "sexpr-signature-parameters"},
  {"list", &module_info_runtime, "list"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"newline", &module_info_runtime, "newline"},
  {"neg?", &module_info_runtime, "neg?"},
  {"unless", &module_info_macros, "unless"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"ast-evaluate", &YastYast_evaluate},
  {"environment-module", &YastYenvironment_module},
  {"init-environment-for-eval", &YastYinit_environment_for_eval},
  {"$sexpr-compile-time-tag", &YastYDsexpr_compile_time_tag},
  {"binding-value-setter", &YastYbinding_value_setter},
  {"function-body-setter", &YastYfunction_body_setter},
  {"special-use-module", &YastYspecial_use_module},
  {"compile-time-program", &YastYcompile_time_program},
  {"monitor-info", &YastYmonitor_info},
  {"program-type", &YastYprogram_type},
  {"special-unwind-protect", &YastYspecial_unwind_protect},
  {"<definition>", &YastYLdefinitionG},
  {"ast-macro-expand", &YastYast_macro_expand},
  {"signature-nary?", &YastYsignature_naryQ},
  {"$sexpr-use-module-tag", &YastYDsexpr_use_module_tag},
  {"environment-module-loader-setter", &YastYenvironment_module_loader_setter},
  {"---main-1---", NULL},
  {"<computed-program>", &YastYLcomputed_programG},
  {"<variable-definition>", &YastYLvariable_definitionG},
  {"init-p2c-boot-environment", &YastYinit_p2c_boot_environment},
  {"constant-value-setter", &YastYconstant_value_setter},
  {"assignment-binding", &YastYassignment_binding},
  {"binding-kind-setter", &YastYbinding_kind_setter},
  {"objectify-bind-exit", &YastYobjectify_bind_exit},
  {"monitor-test-setter", &YastYmonitor_test_setter},
  {"module-target-environment", &YastYmodule_target_environment},
  {"objectify-bound?", &YastYobjectify_boundQ},
  {"<ast-primitive>", &YastYLast_primitiveG},
  {"<monitor>", &YastYLmonitorG},
  {"module-name-setter", &YastYmodule_name_setter},
  {"function-debug-name-setter", &YastYfunction_debug_name_setter},
  {"bound?-reference", &YastYboundQ_reference},
  {"$sexpr-optionals-type-name", &YastYDsexpr_optionals_type_name},
  {"register-module!", &YastYregister_moduleX},
  {"module-exports-setter", &YastYmodule_exports_setter},
  {"<static-empty-environment>", &YastYLstatic_empty_environmentG},
  {"objectify-assignment", &YastYobjectify_assignment},
  {"locals-functions-setter", &YastYlocals_functions_setter},
  {"default-type", &YastYdefault_type},
  {"$sexpr-define-primitive-tag", &YastYDsexpr_define_primitive_tag},
  {"alternative-condition", &YastYalternative_condition},
  {"objectify-sequential", &YastYobjectify_sequential},
  {"<binding-name>", &YastYLbinding_nameG},
  {"locals-functions", &YastYlocals_functions},
  {"special-method", &YastYspecial_method},
  {"<program>", &YastYLprogramG},
  {"application-binding", &YastYapplication_binding},
  {"install-magic-bindings", &YastYinstall_magic_bindings},
  {"signature-value-setter", &YastYsignature_value_setter},
  {"load-and-register-module", &YastYload_and_register_module},
  {"bind-exit-main-fun-setter", &YastYbind_exit_main_fun_setter},
  {"probe-module", &YastYprobe_module},
  {"<runtime-reference>", &YastYLruntime_referenceG},
  {"function-nary?", &YastYfunction_naryQ},
  {"---main-2---", NULL},
  {"$empty-static-environment", &YastYDempty_static_environment},
  {"<compile-time>", &YastYLcompile_timeG},
  {"$sexpr-define-static-syntax-tag", &YastYDsexpr_define_static_syntax_tag},
  {"alternative-alternant", &YastYalternative_alternant},
  {"environment-uses-modules-setter", &YastYenvironment_uses_modules_setter},
  {"module-binding", &YastYmodule_binding},
  {"<raw-constant>", &YastYLraw_constantG},
  {"alternative-condition-setter", &YastYalternative_condition_setter},
  {"binding-type-setter", &YastYbinding_type_setter},
  {"---main-5---", NULL},
  {"fix-let-body-setter", &YastYfix_let_body_setter},
  {"special-bind-exit", &YastYspecial_bind_exit},
  {"<alternative>", &YastYLalternativeG},
  {"locals-bindings", &YastYlocals_bindings},
  {"objectify-syntax-definition", &YastYobjectify_syntax_definition},
  {"*magic-bindings*", &YastYTmagic_bindingsT},
  {"module-syntax-environment-setter", &YastYmodule_syntax_environment_setter},
  {"compute-transitive-users", &YastYcompute_transitive_users},
  {"alternative-consequent-setter", &YastYalternative_consequent_setter},
  {"expand-bind-list", &YastYexpand_bind_list},
  {"assignment-form-setter", &YastYassignment_form_setter},
  {"special-macro-expand", &YastYspecial_macro_expand},
  {"application-function", &YastYapplication_function},
  {"monitor-info-setter", &YastYmonitor_info_setter},
  {"set-module-environments", &YastYset_module_environments},
  {"---main-8---", NULL},
  {"reloader-do-other-binding", &YastYreloader_do_other_binding},
  {"signature-nary?-setter", &YastYsignature_naryQ_setter},
  {"locals-bindings-setter", &YastYlocals_bindings_setter},
  {"module-loader-modules", &YastYmodule_loader_modules},
  {"sequential", &YastYsequential},
  {"environment-bindings", &YastYenvironment_bindings},
  {"remove-module-internal!", &YastYremove_module_internalX},
  {"program-register-setter", &YastYprogram_register_setter},
  {"$sexpr-compile-time-also-tag", &YastYDsexpr_compile_time_also_tag},
  {"<sequential>", &YastYLsequentialG},
  {"$sexpr-%raw-tag", &YastYDsexpr_Praw_tag},
  {"expand-syntax-if", &YastYexpand_syntax_if},
  {"$sequential-empty", &YastYDsequential_empty},
  {"init-p2c-regular-environment", &YastYinit_p2c_regular_environment},
  {"<ast-generic-definition>", &YastYLast_generic_definitionG},
  {"binding-free?", &YastYbinding_freeQ},
  {"compute-local-reference-offsets", &YastYcompute_local_reference_offsets},
  {"$arguments-empty", &YastYDarguments_empty},
  {"<bound?>", &YastYLboundQG},
  {"objectify-function-definition", &YastYobjectify_function_definition},
  {"<regular-application>", &YastYLregular_applicationG},
  {"reference-called-function?-setter", &YastYreference_called_functionQ_setter},
  {"monitor-main-thunk-setter", &YastYmonitor_main_thunk_setter},
  {"do-static-global-bindings", &YastYdo_static_global_bindings},
  {"module-loader-module-type", &YastYmodule_loader_module_type},
  {"<ast-function>", &YastYLast_functionG},
  {"reference-called-function?", &YastYreference_called_functionQ},
  {"---main-7---", NULL},
  {"$fab-list-empty", &YastYDfab_list_empty},
  {"environment-module-loader", &YastYenvironment_module_loader},
  {"objectify-export", &YastYobjectify_export},
  {"special-locals", &YastYspecial_locals},
  {"application-binding-setter", &YastYapplication_binding_setter},
  {"assignment-form", &YastYassignment_form},
  {"unwind-protect-protected-thunk-setter", &YastYunwind_protect_protected_thunk_setter},
  {"objectify-monitor", &YastYobjectify_monitor},
  {"environment-module-setter", &YastYenvironment_module_setter},
  {"binding-mutable?", &YastYbinding_mutableQ},
  {"<functions>", &YastYLfunctionsG},
  {"arguments", &YastYarguments},
  {"environment-uses-modules", &YastYenvironment_uses_modules},
  {"special-define-function", &YastYspecial_define_function},
  {"<predefined-reference>", &YastYLpredefined_referenceG},
  {"objectify-list", &YastYobjectify_list},
  {"special-define-generic", &YastYspecial_define_generic},
  {"signature-value", &YastYsignature_value},
  {"find-static-global-environment", &YastYfind_static_global_environment},
  {"fix-let-arguments", &YastYfix_let_arguments},
  {"<runtime-module-loader>", &YastYLruntime_module_loaderG},
  {"update-binding-kind", &YastYupdate_binding_kind},
  {"objectify-alternative", &YastYobjectify_alternative},
  {"<ast-macro-definition>", &YastYLast_macro_definitionG},
  {"do-module-loader-modules", &YastYdo_module_loader_modules},
  {"expand-pattern", &YastYexpand_pattern},
  {"binding-name", &YastYbinding_name},
  {"binding-mutable?-setter", &YastYbinding_mutableQ_setter},
  {"objectify-compile-time", &YastYobjectify_compile_time},
  {"program-type-setter", &YastYprogram_type_setter},
  {"<bind-exit>", &YastYLbind_exitG},
  {"global-box-value-setter", &YastYglobal_box_value_setter},
  {"objectify-generic-definition", &YastYobjectify_generic_definition},
  {"special-iterate", &YastYspecial_iterate},
  {"init-ast", &YastYinit_ast},
  {"special-bound?", &YastYspecial_boundQ},
  {"special-quasiquote", &YastYspecial_quasiquote},
  {"signature-names-setter", &YastYsignature_names_setter},
  {"objectify-foreign-reference", &YastYobjectify_foreign_reference},
  {"monitor-test", &YastYmonitor_test},
  {"<constant>", &YastYLconstantG},
  {"environment-bindings-setter", &YastYenvironment_bindings_setter},
  {"<ast-generic>", &YastYLast_genericG},
  {"application-known?", &YastYapplication_knownQ},
  {"<fab-list>", &YastYLfab_listG},
  {"<programs>", &YastYLprogramsG},
  {"special-compile-time", &YastYspecial_compile_time},
  {"binding-handler", &YastYbinding_handler},
  {"fab-syntax-environment", &YastYfab_syntax_environment},
  {"runtime-environment", &YastYruntime_environment},
  {"binding-dynamic-extent?", &YastYbinding_dynamic_extentQ},
  {"do-named-static-global-bindings", &YastYdo_named_static_global_bindings},
  {"signature-specs-setter", &YastYsignature_specs_setter},
  {"alternative-alternant-setter", &YastYalternative_alternant_setter},
  {"binding-kind", &YastYbinding_kind},
  {"expand-bind-list*", &YastYexpand_bind_listT},
  {"application-arguments-setter", &YastYapplication_arguments_setter},
  {"special-define", &YastYspecial_define},
  {"reference-binding", &YastYreference_binding},
  {"expand-bind-element", &YastYexpand_bind_element},
  {"objectify-use-module", &YastYobjectify_use_module},
  {"fab-subset-environment", &YastYfab_subset_environment},
  {"special-syntax-if", &YastYspecial_syntax_if},
  {"unwind-protect-cleanup-thunk-setter", &YastYunwind_protect_cleanup_thunk_setter},
  {"---main-4---", NULL},
  {"find-environment-module", &YastYfind_environment_module},
  {"objectify-assignment-using", &YastYobjectify_assignment_using},
  {"<module-binding>", &YastYLmodule_bindingG},
  {"special-define-method", &YastYspecial_define_method},
  {"<local-reference>", &YastYLlocal_referenceG},
  {"---main-3---", NULL},
  {"functions", &YastYfunctions},
  {"$proto-boot-module-name", &YastYDproto_boot_module_name},
  {"<ast-method-definition>", &YastYLast_method_definitionG},
  {"<predefined-application>", &YastYLpredefined_applicationG},
  {"<passive-program>", &YastYLpassive_programG},
  {"init-runtime", &YastYinit_runtime},
  {"binding-info", &YastYbinding_info},
  {"special-define-syntax", &YastYspecial_define_syntax},
  {"monitor-main-thunk", &YastYmonitor_main_thunk},
  {"convert2arguments", &YastYconvert2arguments},
  {"application-tail?", &YastYapplication_tailQ},
  {"$proto-runtime-module-name", &YastYDproto_runtime_module_name},
  {"binding-handler-setter", &YastYbinding_handler_setter},
  {"function-value", &YastYfunction_value},
  {"ftype", &YastYftype},
  {"process-nary-closed-application", &YastYprocess_nary_closed_application},
  {"$functions-empty", &YastYDfunctions_empty},
  {"foreign-name?", &YastYforeign_nameQ},
  {"objectify-unwind-protect", &YastYobjectify_unwind_protect},
  {"install-interpreter-hacks", &YastYinstall_interpreter_hacks},
  {"reload-modules", &YastYreload_modules},
  {"pairize", &YastYpairize},
  {"objectify-primitive-definition", &YastYobjectify_primitive_definition},
  {"binding-locative-setter", &YastYbinding_locative_setter},
  {"special-monitor", &YastYspecial_monitor},
  {"application-known?-setter", &YastYapplication_knownQ_setter},
  {"special-isa", &YastYspecial_isa},
  {"signature-bindings", &YastYsignature_bindings},
  {"environment-next", &YastYenvironment_next},
  {"<static-environment>", &YastYLstatic_environmentG},
  {"<global-assignment>", &YastYLglobal_assignmentG},
  {"<real-reference>", &YastYLreal_referenceG},
  {"<global-box>", &YastYLglobal_boxG},
  {"find-syntax-environment", &YastYfind_syntax_environment},
  {"<module>", &YastYLmoduleG},
  {"<fix-let>", &YastYLfix_letG},
  {"assignment-reference-setter", &YastYassignment_reference_setter},
  {"signature-names", &YastYsignature_names},
  {"unwind-protect-protected-thunk", &YastYunwind_protect_protected_thunk},
  {"$sexpr-optionals-tag", &YastYDsexpr_optionals_tag},
  {"locals-body", &YastYlocals_body},
  {"insert-globals!", &YastYinsert_globalsX},
  {"function-specs", &YastYfunction_specs},
  {"<local-binding>", &YastYLlocal_bindingG},
  {"binding-locative", &YastYbinding_locative},
  {"<assignment>", &YastYLassignmentG},
  {"---main-6---", NULL},
  {"binding-value", &YastYbinding_value},
  {"<ast-signature>", &YastYLast_signatureG},
  {"locals-body-setter", &YastYlocals_body_setter},
  {"binding-global-box", &YastYbinding_global_box},
  {"special-define-primitive", &YastYspecial_define_primitive},
  {"define-magic-binding", NULL},
  {"<locals>", &YastYLlocalsG},
  {"special-compile-time-also", &YastYspecial_compile_time_also},
  {"load-module", &YastYload_module},
  {"fix-let-types", &YastYfix_let_types},
  {"module-syntax-environment", &YastYmodule_syntax_environment},
  {"function-bindings", &YastYfunction_bindings},
  {"module-loader-modules-setter", &YastYmodule_loader_modules_setter},
  {"monitor-handler-setter", &YastYmonitor_handler_setter},
  {"objectify-binding", &YastYobjectify_binding},
  {"reloader-do-import", &YastYreloader_do_import},
  {"monitor-type-setter", &YastYmonitor_type_setter},
  {"<runtime-assignment>", &YastYLruntime_assignmentG},
  {"fix-let-bindings-setter", &YastYfix_let_bindings_setter},
  {"reference-frame-offset", &YastYreference_frame_offset},
  {"binding-dynamic-extent?-setter", &YastYbinding_dynamic_extentQ_setter},
  {"insert-global!", &YastYinsert_globalX},
  {"report-undefined-global-bindings", &YastYreport_undefined_global_bindings},
  {"function-binding", &YastYfunction_binding},
  {"environment-implements-setter", &YastYenvironment_implements_setter},
  {"fix-let-bindings", &YastYfix_let_bindings},
  {"unwind-protect-cleanup-thunk", &YastYunwind_protect_cleanup_thunk},
  {"load-in", &YastYload_in},
  {"reference-frame-number", &YastYreference_frame_number},
  {"objectify-free-global-reference", &YastYobjectify_free_global_reference},
  {"module-loader-stack", &YastYmodule_loader_stack},
  {"binding-module-name", &YastYbinding_module_name},
  {"magic-bindings", &YastYmagic_bindings},
  {"module-target-environment-setter", &YastYmodule_target_environment_setter},
  {"<application>", &YastYLapplicationG},
  {"signature-bindings-setter", &YastYsignature_bindings_setter},
  {"runtime-module-loader", &YastYruntime_module_loader},
  {"reference-frame-number-setter", &YastYreference_frame_number_setter},
  {"register-magic-binding", &YastYregister_magic_binding},
  {"objectify-raw", &YastYobjectify_raw},
  {"special-begin", &YastYspecial_begin},
  {"fab-list", &YastYfab_list},
  {"function-signature-setter", &YastYfunction_signature_setter},
  {"objectify-locals", &YastYobjectify_locals},
  {"*runtime-module-loader*", &YastYTruntime_module_loaderT},
  {"runtime-module", &YastYruntime_module},
  {"bind-exit-main-fun", &YastYbind_exit_main_fun},
  {"objectify-quotation", &YastYobjectify_quotation},
  {"monitor-type", &YastYmonitor_type},
  {"reloader-do-use-module", &YastYreloader_do_use_module},
  {"import-global!", &YastYimport_globalX},
  {"---main-0---", NULL},
  {"objectify-definition", &YastYobjectify_definition},
  {"module-name", &YastYmodule_name},
  {"binding-dotted?", &YastYbinding_dottedQ},
  {"objectify-error", &YastYobjectify_error},
  {"compile-time-program-setter", &YastYcompile_time_program_setter},
  {"signature-specs", &YastYsignature_specs},
  {"<arguments>", &YastYLargumentsG},
  {"reference-binding-setter", &YastYreference_binding_setter},
  {"objectify-application", &YastYobjectify_application},
  {"reference-frame-offset-setter", &YastYreference_frame_offset_setter},
  {"binding-reference-prototype", &YastYbinding_reference_prototype},
  {"special-export", &YastYspecial_export},
  {"function-signature", &YastYfunction_signature},
  {"special-quote", &YastYspecial_quote},
  {"fix-let-arguments-setter", &YastYfix_let_arguments_setter},
  {"special-let", &YastYspecial_let},
  {"module-loader-stack-setter", &YastYmodule_loader_stack_setter},
  {"<static-local-environment>", &YastYLstatic_local_environmentG},
  {"binding-global-box-setter", &YastYbinding_global_box_setter},
  {"assignment-binding-setter", &YastYassignment_binding_setter},
  {"find-binding", &YastYfind_binding},
  {"function-body", &YastYfunction_body},
  {"reloader-do-runtime-binding", &YastYreloader_do_runtime_binding},
  {"syntax-environment-excluded-bindings", &YastYsyntax_environment_excluded_bindings},
  {"environment-allows-foreign-names?-setter", &YastYenvironment_allows_foreign_namesQ_setter},
  {"function-kind", &YastYfunction_kind},
  {"binding-module-name-setter", &YastYbinding_module_name_setter},
  {"ast-define-binding", &YastYast_define_binding},
  {"special-slot", &YastYspecial_slot},
  {"environment-implements", &YastYenvironment_implements},
  {"special-define-static-syntax", &YastYspecial_define_static_syntax},
  {"binding-type", &YastYbinding_type},
  {"fix-let-types-setter", &YastYfix_let_types_setter},
  {"<static-global-environment>", &YastYLstatic_global_environmentG},
  {"special-%raw", &YastYspecial_Praw},
  {"binding-name-setter", &YastYbinding_name_setter},
  {"<local-assignment>", &YastYLlocal_assignmentG},
  {"reloader-do-export", &YastYreloader_do_export},
  {"<global-reference>", &YastYLglobal_referenceG},
  {"special-if", &YastYspecial_if},
  {"binding-info-setter", &YastYbinding_info_setter},
  {"bound?-reference-setter", &YastYboundQ_reference_setter},
  {"constant-value", &YastYconstant_value},
  {"free-implemented-foreign-bindings", &YastYfree_implemented_foreign_bindings},
  {"objectify-symbol", &YastYobjectify_symbol},
  {"assignment-reference", &YastYassignment_reference},
  {"binding-free?-setter", &YastYbinding_freeQ_setter},
  {"r-extend*", &YastYr_extendT},
  {"objectify-signature", &YastYobjectify_signature},
  {"*macro-tracing?*", &YastYTmacro_tracingQT},
  {"def-list", NULL},
  {"function-binding-setter", &YastYfunction_binding_setter},
  {"monitor-handler", &YastYmonitor_handler},
  {"binding-dotted?-setter", &YastYbinding_dottedQ_setter},
  {"binding-native-to?", &YastYbinding_native_toQ},
  {"special-set", &YastYspecial_set},
  {"global-box-value", &YastYglobal_box_value},
  {"environment-next-setter", &YastYenvironment_next_setter},
  {"application-function-setter", &YastYapplication_function_setter},
  {"objectify-method-definition", &YastYobjectify_method_definition},
  {"module-exports", &YastYmodule_exports},
  {"sequentialize", &YastYsequentialize},
  {"<binding>", &YastYLbindingG},
  {"alternative-consequent", &YastYalternative_consequent},
  {"$sexpr-bound?-tag", &YastYDsexpr_boundQ_tag},
  {"program-register", &YastYprogram_register},
  {"<reference>", &YastYLreferenceG},
  {"fab-p2c-module", &YastYfab_p2c_module},
  {"application-arguments", &YastYapplication_arguments},
  {"fix-let-body", &YastYfix_let_body},
  {"module-name-to-relpath", &YastYmodule_name_to_relpath},
  {"objectify", &YastYobjectify},
  {"reload-macros", &YastYreload_macros},
  {"objectify-function", &YastYobjectify_function},
  {"fab-static-global-environment", &YastYfab_static_global_environment},
  {"application-tail?-setter", &YastYapplication_tailQ_setter},
  {"function-debug-name", &YastYfunction_debug_name},
  {"remove-modules-by-name!", &YastYremove_modules_by_nameX},
  {"def-programs", NULL},
  {"export-binding!", &YastYexport_bindingX},
  {"install-initial-bindings", &YastYinstall_initial_bindings},
  {"frame-bindings", &YastYframe_bindings},
  {"process-closed-application", &YastYprocess_closed_application},
  {"reloader-do-create-module", &YastYreloader_do_create_module},
  {"<module-loader>", &YastYLmodule_loaderG},
  {"<ast-function-definition>", &YastYLast_function_definitionG},
  {"<ast-primitive-definition>", &YastYLast_primitive_definitionG},
  {"<unwind-protect>", &YastYLunwind_protectG},
  {"$sexpr-export-tag", &YastYDsexpr_export_tag},
  {"<ast-method>", &YastYLast_methodG},
  {"environment-allows-foreign-names?", &YastYenvironment_allows_foreign_namesQ},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"binding-value-setter", "binding-value-setter"},
  {"function-body-setter", "function-body-setter"},
  {"compile-time-program", "compile-time-program"},
  {"monitor-info", "monitor-info"},
  {"<definition>", "<definition>"},
  {"signature-nary?", "signature-nary?"},
  {"<computed-program>", "<computed-program>"},
  {"assignment-binding", "assignment-binding"},
  {"module-target-environment", "module-target-environment"},
  {"<ast-primitive>", "<ast-primitive>"},
  {"<monitor>", "<monitor>"},
  {"function-debug-name-setter", "function-debug-name-setter"},
  {"bound?-reference", "bound?-reference"},
  {"module-exports", "module-exports"},
  {"locals-functions-setter", "locals-functions-setter"},
  {"<ast-function>", "<ast-function>"},
  {"alternative-condition", "alternative-condition"},
  {"locals-functions", "locals-functions"},
  {"<program>", "<program>"},
  {"application-binding", "application-binding"},
  {"signature-value-setter", "signature-value-setter"},
  {"<ast-primitive-definition>", "<ast-primitive-definition>"},
  {"function-debug-name", "function-debug-name"},
  {"probe-module", "probe-module"},
  {"<runtime-reference>", "<runtime-reference>"},
  {"function-nary?", "function-nary?"},
  {"<compile-time>", "<compile-time>"},
  {"alternative-alternant", "alternative-alternant"},
  {"fix-let-body", "fix-let-body"},
  {"<raw-constant>", "<raw-constant>"},
  {"binding-type-setter", "binding-type-setter"},
  {"fix-let-body-setter", "fix-let-body-setter"},
  {"do-module-loader-modules", "do-module-loader-modules"},
  {"<alternative>", "<alternative>"},
  {"ast-evaluate", "ast-evaluate"},
  {"locals-bindings", "locals-bindings"},
  {"env-object-name", "env-object-name"},
  {"application-function", "application-function"},
  {"set-module-environments", "set-module-environments"},
  {"signature-nary?-setter", "signature-nary?-setter"},
  {"locals-bindings-setter", "locals-bindings-setter"},
  {"program-register-setter", "program-register-setter"},
  {"<sequential>", "<sequential>"},
  {"<local-reference>", "<local-reference>"},
  {"<bound?>", "<bound?>"},
  {"<regular-application>", "<regular-application>"},
  {"reference-called-function?-setter", "reference-called-function?-setter"},
  {"module-loader-module-type", "module-loader-module-type"},
  {"reference-called-function?", "reference-called-function?"},
  {"<fab-list>", "<fab-list>"},
  {"<binding>", "<binding>"},
  {"assignment-form", "assignment-form"},
  {"binding-mutable?", "binding-mutable?"},
  {"do-named-static-global-bindings", "do-named-static-global-bindings"},
  {"environment-uses-modules", "environment-uses-modules"},
  {"init-environment-for-eval", "init-environment-for-eval"},
  {"signature-value", "signature-value"},
  {"module-binding", "module-binding"},
  {"fix-let-arguments", "fix-let-arguments"},
  {"<ast-macro-definition>", "<ast-macro-definition>"},
  {"do-static-global-bindings", "do-static-global-bindings"},
  {"init-ast", "init-ast"},
  {"binding-name", "binding-name"},
  {"global-box-value-setter", "global-box-value-setter"},
  {"signature-names-setter", "signature-names-setter"},
  {"monitor-test", "monitor-test"},
  {"<constant>", "<constant>"},
  {"<programs>", "<programs>"},
  {"<ast-generic>", "<ast-generic>"},
  {"application-known?", "application-known?"},
  {"runtime-environment", "runtime-environment"},
  {"binding-dynamic-extent?", "binding-dynamic-extent?"},
  {"signature-specs-setter", "signature-specs-setter"},
  {"binding-kind", "binding-kind"},
  {"reference-binding", "reference-binding"},
  {"find-environment-module", "find-environment-module"},
  {"<module-binding>", "<module-binding>"},
  {"$proto-boot-module-name", "$proto-boot-module-name"},
  {"<predefined-application>", "<predefined-application>"},
  {"<passive-program>", "<passive-program>"},
  {"binding-info", "binding-info"},
  {"monitor-main-thunk", "monitor-main-thunk"},
  {"application-tail?", "application-tail?"},
  {"$proto-runtime-module-name", "$proto-runtime-module-name"},
  {"function-value", "function-value"},
  {"application-known?-setter", "application-known?-setter"},
  {"signature-bindings", "signature-bindings"},
  {"<global-assignment>", "<global-assignment>"},
  {"<real-reference>", "<real-reference>"},
  {"<global-box>", "<global-box>"},
  {"<module>", "<module>"},
  {"module-syntax-environment", "module-syntax-environment"},
  {"<fix-let>", "<fix-let>"},
  {"signature-names", "signature-names"},
  {"unwind-protect-protected-thunk", "unwind-protect-protected-thunk"},
  {"locals-body", "locals-body"},
  {"<local-binding>", "<local-binding>"},
  {"binding-locative", "binding-locative"},
  {"binding-value", "binding-value"},
  {"<ast-signature>", "<ast-signature>"},
  {"locals-body-setter", "locals-body-setter"},
  {"binding-global-box", "binding-global-box"},
  {"objectify", "objectify"},
  {"<bind-exit>", "<bind-exit>"},
  {"<locals>", "<locals>"},
  {"function-bindings", "function-bindings"},
  {"fix-let-bindings-setter", "fix-let-bindings-setter"},
  {"%%macro", "%%macro"},
  {"reference-frame-offset", "reference-frame-offset"},
  {"binding-dynamic-extent?-setter", "binding-dynamic-extent?-setter"},
  {"report-undefined-global-bindings", "report-undefined-global-bindings"},
  {"function-binding", "function-binding"},
  {"load-module", "load-module"},
  {"fix-let-bindings", "fix-let-bindings"},
  {"unwind-protect-cleanup-thunk", "unwind-protect-cleanup-thunk"},
  {"load-in", "load-in"},
  {"reference-frame-number", "reference-frame-number"},
  {"binding-module-name", "binding-module-name"},
  {"<application>", "<application>"},
  {"signature-bindings-setter", "signature-bindings-setter"},
  {"<runtime-assignment>", "<runtime-assignment>"},
  {"signature-specs", "signature-specs"},
  {"<reference>", "<reference>"},
  {"function-signature-setter", "function-signature-setter"},
  {"bind-exit-main-fun", "bind-exit-main-fun"},
  {"monitor-type", "monitor-type"},
  {"objectify-quotation", "objectify-quotation"},
  {"<arguments>", "<arguments>"},
  {"function-signature", "function-signature"},
  {"fix-let-arguments-setter", "fix-let-arguments-setter"},
  {"binding-global-box-setter", "binding-global-box-setter"},
  {"function-body", "function-body"},
  {"ast-define-binding", "ast-define-binding"},
  {"binding-type", "binding-type"},
  {"fix-let-types-setter", "fix-let-types-setter"},
  {"<static-global-environment>", "<static-global-environment>"},
  {"fix-let-types", "fix-let-types"},
  {"<local-assignment>", "<local-assignment>"},
  {"<global-reference>", "<global-reference>"},
  {"module-name", "module-name"},
  {"binding-info-setter", "binding-info-setter"},
  {"constant-value", "constant-value"},
  {"free-implemented-foreign-bindings", "free-implemented-foreign-bindings"},
  {"assignment-reference", "assignment-reference"},
  {"def-list", "def-list"},
  {"monitor-handler", "monitor-handler"},
  {"binding-native-to?", "binding-native-to?"},
  {"global-box-value", "global-box-value"},
  {"sequentialize", "sequentialize"},
  {"alternative-consequent", "alternative-consequent"},
  {"program-register", "program-register"},
  {"fab-p2c-module", "fab-p2c-module"},
  {"application-arguments", "application-arguments"},
  {"module-name-to-relpath", "module-name-to-relpath"},
  {"<ast-method>", "<ast-method>"},
  {"remove-modules-by-name!", "remove-modules-by-name!"},
  {"def-programs", "def-programs"},
  {"install-initial-bindings", "install-initial-bindings"},
  {"<module-loader>", "<module-loader>"},
  {"<unwind-protect>", "<unwind-protect>"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_ast;
MODULE_INFO module_info_ast = {
  "ast",
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
extern void load_module_write (void);
extern void load_module_syntax (void);
extern void load_module_strings (void);
extern void load_module_protoSsystem (void);

/* EXPRESSION: */

extern void load_module_ast (void);

void load_module_ast (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_runtime();
  load_module_write();
  load_module_syntax();
  load_module_strings();
  load_module_protoSsystem();

  (P)YastY___main_0___();
  (P)YastY___main_1___();
  (P)YastY___main_2___();
  (P)YastY___main_3___();
  (P)YastY___main_4___();
  (P)YastY___main_5___();
  (P)YastY___main_6___();
  (P)YastY___main_7___();
  (P)YastY___main_8___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
