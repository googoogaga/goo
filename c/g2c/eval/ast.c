/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: x8r/ast */

EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(Yx8rSsyntaxYsexpr_make_application,"x8r/syntax","sexpr-make-application");
DEF(Yx8rSastYassignment_reference,"x8r/ast","assignment-reference");
DEF(Yx8rSastYinstall_interpreter_hacks,"x8r/ast","install-interpreter-hacks");
EXT(Yx8rSsyntaxYDsexpr_define_class_tag,"x8r/syntax","$sexpr-define-class-tag");
DEF(Yx8rSastYbinding_locative,"x8r/ast","binding-locative");
EXT(Yx8rSsyntaxYsexpr_method_signature,"x8r/syntax","sexpr-method-signature");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(Yx8rSastYconstant_value,"x8r/ast","constant-value");
DEF(Yx8rSastYenvironment_allows_foreign_namesQ,"x8r/ast","environment-allows-foreign-names?");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(Yx8rSastYinit_environment_for_eval,"x8r/ast","init-environment-for-eval");
EXT(Yx8rSsyntaxYDsexpr_define_method_tag,"x8r/syntax","$sexpr-define-method-tag");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YLrepG,"goo/boot","<rep>");
DEF(Yx8rSastYLconstantG,"x8r/ast","<constant>");
DEF(Yx8rSastYtransaction_implemented_bindings_setter,"x8r/ast","transaction-implemented-bindings-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yx8rSsyntaxYsexpr_forward_primitiveQ,"x8r/syntax","sexpr-forward-primitive?");
DEF(Yx8rSastYfab_static_global_environment,"x8r/ast","fab-static-global-environment");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
DEF(Yx8rSastYassignment_reference_setter,"x8r/ast","assignment-reference-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yx8rSsyntaxYsexpr_function_definition_value,"x8r/syntax","sexpr-function-definition-value");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(Yx8rSsyntaxYsexpr_prop_init_var,"x8r/syntax","sexpr-prop-init-var");
EXT(Yx8rSsyntaxYDsexpr_define_generic_tag,"x8r/syntax","$sexpr-define-generic-tag");
DEF(Yx8rSastYmodule_exports,"x8r/ast","module-exports");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yx8rSsyntaxYsexpr_define_classQ,"x8r/syntax","sexpr-define-class?");
EXT(YgooSmathYDe,"goo/math","$e");
DEF(Yx8rSastYlocals_bindings_setter,"x8r/ast","locals-bindings-setter");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
DEF(Yx8rSastYspecial_syntax_if,"x8r/ast","special-syntax-if");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
DEF(Yx8rSastYDfunctions_empty,"x8r/ast","$functions-empty");
DEF(Yx8rSastYDsexpr_compile_time_tag,"x8r/ast","$sexpr-compile-time-tag");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
DEF(Yx8rSastYLglobal_referenceG,"x8r/ast","<global-reference>");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(Yx8rSastYspecial_unwind_protect,"x8r/ast","special-unwind-protect");
DEF(Yx8rSastYframe_bindings,"x8r/ast","frame-bindings");
EXT(Yx8rSsyntaxYDsexpr_set_tag,"x8r/syntax","$sexpr-set-tag");
DEF(Yx8rSastYDsexpr_optionals_tag,"x8r/ast","$sexpr-optionals-tag");
EXT(YgooSruntimeYformat,"goo/runtime","format");
DEF(Yx8rSastYLast_signatureG,"x8r/ast","<ast-signature>");
DEF(Yx8rSastYfree_environment,"x8r/ast","free-environment");
DEF(Yx8rSastYfind_syntax_environment,"x8r/ast","find-syntax-environment");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yx8rSsyntaxYsexpr_definition_variable,"x8r/syntax","sexpr-definition-variable");
EXT(Ytail,"goo/boot","tail");
DEF(Yx8rSastYast_LbotG,"x8r/ast","ast-<bot>");
DEF(Yx8rSastYboundQ_reference_setter,"x8r/ast","bound?-reference-setter");
DEF(Yx8rSastYalternative_condition_setter,"x8r/ast","alternative-condition-setter");
EXT(YLfunG,"goo/boot","<fun>");
DEF(Yx8rSastYobjectify_primitive_definition,"x8r/ast","objectify-primitive-definition");
DEF(Yx8rSastYlocals_functions_setter,"x8r/ast","locals-functions-setter");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yx8rSdependencyYdependency_includes_allQ,"x8r/dependency","dependency-includes-all?");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(Ytup,"goo/boot","tup");
DEF(Yx8rSastYfind_static_global_environment,"x8r/ast","find-static-global-environment");
EXT(Yx8rSsyntaxYsexpr_assignment_variable,"x8r/syntax","sexpr-assignment-variable");
EXT(YgooStypesYLproductG,"goo/types","<product>");
DEF(Yx8rSastYlocals_body_setter,"x8r/ast","locals-body-setter");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
DEF(Yx8rSastYunwind_protect_cleanup_thunk,"x8r/ast","unwind-protect-cleanup-thunk");
DEF(Yx8rSastYbinding_dottedQ,"x8r/ast","binding-dotted?");
DEF(Yx8rSastYmodule_exports_setter,"x8r/ast","module-exports-setter");
DEF(Yx8rSastYapplication_next_methods_setter,"x8r/ast","application-next-methods-setter");
EXT(YLgenG,"goo/boot","<gen>");
DEF(Yx8rSastYobjectify_method_definition,"x8r/ast","objectify-method-definition");
EXT(YOlst,"goo/boot","@lst");
DEF(Yx8rSastYfunction_signature_setter,"x8r/ast","function-signature-setter");
DEF(Yx8rSastYobjectify_function,"x8r/ast","objectify-function");
DEF(Yx8rSastYDgoo_boot_module_name,"x8r/ast","$goo-boot-module-name");
DEF(Yx8rSastYr_extendT,"x8r/ast","r-extend*");
DEF(Yx8rSastYsequentialize,"x8r/ast","sequentialize");
DEF(Yx8rSastYfab_syntax_environment,"x8r/ast","fab-syntax-environment");
EXT(Yx8rSsyntaxYsexpr_text_of_quotation,"x8r/syntax","sexpr-text-of-quotation");
DEF(Yx8rSastYexport_bindingX,"x8r/ast","export-binding!");
DEF(Yx8rSastYcompile_time_program,"x8r/ast","compile-time-program");
DEF(Yx8rSastYobjectify_syntax_definition,"x8r/ast","objectify-syntax-definition");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
DEF(Yx8rSastYobjectify_function_definition,"x8r/ast","objectify-function-definition");
DEF(Yx8rSastYinit_g2c_regular_environment,"x8r/ast","init-g2c-regular-environment");
DEF(Yx8rSastYobjectify_sequential,"x8r/ast","objectify-sequential");
DEF(Yx8rSastYobjectify_function_source,"x8r/ast","objectify-function-source");
DEF(Yx8rSastYbinding_value,"x8r/ast","binding-value");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(Yx8rSsyntaxYDsexpr_bind_exit_tag,"x8r/syntax","$sexpr-bind-exit-tag");
DEF(Yx8rSastYLfab_listG,"x8r/ast","<fab-list>");
DEF(Yx8rSastYprocess_module_data,"x8r/ast","process-module-data");
DEF(Yx8rSastYTruntime_module_loaderT,"x8r/ast","*runtime-module-loader*");
DEF(Yx8rSastYmodule_loader_stack_setter,"x8r/ast","module-loader-stack-setter");
DEF(Yx8rSastYreloader_do_runtime_binding,"x8r/ast","reloader-do-runtime-binding");
EXT(Yx8rSsyntaxYsexpr_fab_setter,"x8r/syntax","sexpr-fab-setter");
DEF(Yx8rSastYobjectify_useSexport_module,"x8r/ast","objectify-use/export-module");
EXT(Yx8rSsyntaxYsexpr_variableQ,"x8r/syntax","sexpr-variable?");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
DEF(Yx8rSastYinit_runtime,"x8r/ast","init-runtime");
DEF(Yx8rSastYobjectify_assignment_using,"x8r/ast","objectify-assignment-using");
DEF(Yx8rSastYmagic_bindings,"x8r/ast","magic-bindings");
DEF(Yx8rSastYbinding_inferred_type_setter,"x8r/ast","binding-inferred-type-setter");
EXT(Yx8rSsyntaxYsexpr_signature_value,"x8r/syntax","sexpr-signature-value");
DEF(Yx8rSastYspecial_define_primitive,"x8r/ast","special-define-primitive");
DEF(Yx8rSastYunchecked_runtime_environment,"x8r/ast","unchecked-runtime-environment");
DEF(Yx8rSastYruntime_core_environment,"x8r/ast","runtime-core-environment");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yx8rSsyntaxYsexpr_defQ,"x8r/syntax","sexpr-def?");
DEF(Yx8rSastYreference_binding,"x8r/ast","reference-binding");
DEF(Yx8rSastYLruntime_module_loaderG,"x8r/ast","<runtime-module-loader>");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
DEF(Yx8rSastYspecial_bind_exit,"x8r/ast","special-bind-exit");
EXT(Yx8rSsyntaxYDsexpr_isa_tag,"x8r/syntax","$sexpr-isa-tag");
DEF(Yx8rSastYfunction_self_recursiveQ_setter,"x8r/ast","function-self-recursive?-setter");
DEF(Yx8rSastYfix_let_arguments_setter,"x8r/ast","fix-let-arguments-setter");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
DEF(Yx8rSastYmacro_expander,"x8r/ast","macro-expander");
DEF(Yx8rSastYfunction_kind,"x8r/ast","function-kind");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
DEF(Yx8rSastYast_evaluate,"x8r/ast","ast-evaluate");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
DEF(Yx8rSastYreference_frame_number,"x8r/ast","reference-frame-number");
DEF(Yx8rSastYsignature_names_setter,"x8r/ast","signature-names-setter");
DEF(Yx8rSastYmodule_name_to_relpath,"x8r/ast","module-name-to-relpath");
EXT(YgooSmathYsin,"goo/math","sin");
DEF(Yx8rSastYlocals_body,"x8r/ast","locals-body");
DEF(Yx8rSastYLast_primitive_definitionG,"x8r/ast","<ast-primitive-definition>");
EXT(YLlstG,"goo/boot","<lst>");
DEF(Yx8rSastYpairize,"x8r/ast","pairize");
DEF(Yx8rSastYmodule_loader_module_type,"x8r/ast","module-loader-module-type");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(Yx8rSastYfunction_self_recursiveQ,"x8r/ast","function-self-recursive?");
DEF(Yx8rSastYfunction_source,"x8r/ast","function-source");
DEF(Yx8rSastYregister_moduleX,"x8r/ast","register-module!");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
DEF(Yx8rSastYfix_let_arguments,"x8r/ast","fix-let-arguments");
EXT(YPdefine_method,"goo/boot","%define-method");
DEF(Yx8rSastYLlocal_assignmentG,"x8r/ast","<local-assignment>");
DEF(Yx8rSastYsignature_names,"x8r/ast","signature-names");
DEF(Yx8rSastYbinding_type_setter,"x8r/ast","binding-type-setter");
DEF(Yx8rSastYtransaction_dependents_setter,"x8r/ast","transaction-dependents-setter");
DEF(Yx8rSastYLmodule_binding_referenceG,"x8r/ast","<module-binding-reference>");
DEF(Yx8rSastYset_module_environments,"x8r/ast","set-module-environments");
DEF(Yx8rSastYfix_let_types_setter,"x8r/ast","fix-let-types-setter");
DEF(Yx8rSastYdo_module_loader_modules,"x8r/ast","do-module-loader-modules");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(Yx8rSastYTcurrent_dependentT,"x8r/ast","*current-dependent*");
DEF(Yx8rSastYbinding_module_name_setter,"x8r/ast","binding-module-name-setter");
EXT(Yx8rSsyntaxYsexpr_fab_setter_name,"x8r/syntax","sexpr-fab-setter-name");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
DEF(Yx8rSastYbinding_name,"x8r/ast","binding-name");
DEF(Yx8rSastYLalternativeG,"x8r/ast","<alternative>");
DEF(Yx8rSastYfunction_registers_setter,"x8r/ast","function-registers-setter");
DEF(Yx8rSastYfunction_data_refs,"x8r/ast","function-data-refs");
EXT(YgooSioSwriteYpe_format,"goo/io/write","pe-format");
EXT(Yx8rSdependencyYDname_parse_dependency,"x8r/dependency","$name-parse-dependency");
DEF(Yx8rSastYreload_macros,"x8r/ast","reload-macros");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(Yx8rSastYLfix_letG,"x8r/ast","<fix-let>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
DEF(Yx8rSastYLruntime_assignmentG,"x8r/ast","<runtime-assignment>");
DEF(Yx8rSastYfunction_display_name,"x8r/ast","function-display-name");
EXT(Yx8rSsyntaxYsexpr_unwind_protect_protected_form,"x8r/syntax","sexpr-unwind-protect-protected-form");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
DEF(Yx8rSastYLast_genericG,"x8r/ast","<ast-generic>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
DEF(Yx8rSastYexpand_bind_list,"x8r/ast","expand-bind-list");
EXT(Yx8rSdependencyYdependency_includes_anyQ,"x8r/dependency","dependency-includes-any?");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DEF(Yx8rSastYalternative_consequent,"x8r/ast","alternative-consequent");
DEF(Yx8rSastYload_and_register_module,"x8r/ast","load-and-register-module");
EXT(Yx8rSsyntaxYsexpr_block_body,"x8r/syntax","sexpr-block-body");
EXT(Yx8rSsyntaxYDsexpr_syntax_if_tag,"x8r/syntax","$sexpr-syntax-if-tag");
EXT(Yx8rSsyntaxYsexpr_variable_name,"x8r/syntax","sexpr-variable-name");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
DEF(Yx8rSastYspecial_compile_time_also,"x8r/ast","special-compile-time-also");
DEF(Yx8rSastYmodule_data_processedQ,"x8r/ast","module-data-processed?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yx8rSsyntaxYsexpr_loc_raw_body,"x8r/syntax","sexpr-loc-raw-body");
DEF(Yx8rSastYfunction_registers,"x8r/ast","function-registers");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(Yx8rSastYunwind_protect_protected_thunk_setter,"x8r/ast","unwind-protect-protected-thunk-setter");
DEF(Yx8rSastYLbinding_nameG,"x8r/ast","<binding-name>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
DEF(Yx8rSastYglobal_box_value,"x8r/ast","global-box-value");
DEF(Yx8rSastYobjectify_use_module,"x8r/ast","objectify-use-module");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(Yx8rSastYbind_exit_main_fun_setter,"x8r/ast","bind-exit-main-fun-setter");
DEF(Yx8rSastYobjectify_binding,"x8r/ast","objectify-binding");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
DEF(Yx8rSastYTrecord_sourceQT,"x8r/ast","*record-source?*");
DEF(Yx8rSastYprogram_register,"x8r/ast","program-register");
EXT(YgooScolsScolYlow_fillX,"goo/cols/col","low-fill!");
DEF(Yx8rSastYLimmediate_constantG,"x8r/ast","<immediate-constant>");
EXT(Yx8rSsyntaxYsexpr_syntax_if_value,"x8r/syntax","sexpr-syntax-if-value");
DEF(Yx8rSastYupdate_binding_kind,"x8r/ast","update-binding-kind");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yx8rSdependencyYLdependency_typeG,"x8r/dependency","<dependency-type>");
DEF(Yx8rSastYapplication_binding_setter,"x8r/ast","application-binding-setter");
EXT(YgooScolsSassocYassocs_test,"goo/cols/assoc","assocs-test");
DEF(Yx8rSastYspecial_isa,"x8r/ast","special-isa");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(Yx8rSastYapplication_function_setter,"x8r/ast","application-function-setter");
EXT(Yx8rSdependencyYDoptimizaton_dependencies,"x8r/dependency","$optimizaton-dependencies");
DEF(Yx8rSastYTmagic_bindingsT,"x8r/ast","*magic-bindings*");
DEF(Yx8rSastYDsexpr_use_module_tag,"x8r/ast","$sexpr-use-module-tag");
EXT(Yx8rSsyntaxYsexpr_syntax_definition_value,"x8r/syntax","sexpr-syntax-definition-value");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DEF(Yx8rSastYfunction_naryQ,"x8r/ast","function-nary?");
EXT(Yx8rSdependencyYDempty_dependency,"x8r/dependency","$empty-dependency");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
DEF(Yx8rSastYdefault_type,"x8r/ast","default-type");
EXT(Yx8rSsyntaxYsexpr_loc_bound_names,"x8r/syntax","sexpr-loc-bound-names");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
DEF(Yx8rSastYmodule_runtime_data_setter,"x8r/ast","module-runtime-data-setter");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
DEF(Yx8rSastYLboundQG,"x8r/ast","<bound?>");
DEF(Yx8rSastYobjectify_free_global_reference,"x8r/ast","objectify-free-global-reference");
DEF(Yx8rSastYDsexpr_Praw_tag,"x8r/ast","$sexpr-%raw-tag");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Yx8rSsyntaxYsexpr_bind_pattern_variables,"x8r/syntax","sexpr-bind-pattern-variables");
DEF(Yx8rSastYbinding_freeQ,"x8r/ast","binding-free?");
EXT(Yfun_mets,"goo/boot","fun-mets");
DEF(Yx8rSastYassignment_binding,"x8r/ast","assignment-binding");
DEF(Yx8rSastYspecial_define_method,"x8r/ast","special-define-method");
EXT(Yx8rSsyntaxYsexpr_iterate_Gloc,"x8r/syntax","sexpr-iterate->loc");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
DEF(Yx8rSastYlocals_bindings,"x8r/ast","locals-bindings");
DEF(Yx8rSastYreloader_do_export,"x8r/ast","reloader-do-export");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
DEF(Yx8rSastYbinding_global_box_setter,"x8r/ast","binding-global-box-setter");
DEF(Yx8rSastYfunction_index,"x8r/ast","function-index");
DEF(Yx8rSastYmodule_syntax_environment_setter,"x8r/ast","module-syntax-environment-setter");
DEF(Yx8rSastYobjectify_application,"x8r/ast","objectify-application");
EXT(YgooSmathYT,"goo/math","*");
DEF(Yx8rSastYLpassive_programG,"x8r/ast","<passive-program>");
DEF(Yx8rSastYLstatic_empty_environmentG,"x8r/ast","<static-empty-environment>");
EXT(Yx8rSsyntaxYsexpr_definition_value,"x8r/syntax","sexpr-definition-value");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Yx8rSsyntaxYsexpr_isa_prop_inits,"x8r/syntax","sexpr-isa-prop-inits");
DEF(Yx8rSastYfab_subset_environment,"x8r/ast","fab-subset-environment");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
DEF(Yx8rSastYensure_module_data,"x8r/ast","ensure-module-data");
DEF(Yx8rSastYapplication_binding,"x8r/ast","application-binding");
DEF(Yx8rSastYruntime_environment,"x8r/ast","runtime-environment");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
DEF(Yx8rSastYenvironment_allows_foreign_namesQ_setter,"x8r/ast","environment-allows-foreign-names?-setter");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
DEF(Yx8rSastYimport_globalX,"x8r/ast","import-global!");
DEF(Yx8rSastYmodule_syntax_environment,"x8r/ast","module-syntax-environment");
DEF(Yx8rSastYmodule_binding,"x8r/ast","module-binding");
EXT(Yx8rSsyntaxYsexpr_unquote_splicingQ,"x8r/syntax","sexpr-unquote-splicing?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
DEF(Yx8rSastYDsexpr_boundQ_tag,"x8r/ast","$sexpr-bound?-tag");
EXT(Yerror,"goo/boot","error");
DEF(Yx8rSastYfunction_debug_name_setter,"x8r/ast","function-debug-name-setter");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
DEF(Yx8rSastYLast_generic_definitionG,"x8r/ast","<ast-generic-definition>");
DEF(Yx8rSastYsignature_specs_setter,"x8r/ast","signature-specs-setter");
DEF(Yx8rSastYsignature_arity,"x8r/ast","signature-arity");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
DEF(Yx8rSastYbinding_dynamic_extentQ_setter,"x8r/ast","binding-dynamic-extent?-setter");
EXT(YLsigG,"goo/boot","<sig>");
DEF(Yx8rSastYobjectify,"x8r/ast","objectify");
DEF(Yx8rSastYobjectify_unwind_protect,"x8r/ast","objectify-unwind-protect");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
DEF(Yx8rSastYmodule_transaction,"x8r/ast","module-transaction");
DEF(Yx8rSastYLdefinitionG,"x8r/ast","<definition>");
DEF(Yx8rSastYsignature_naryQ_setter,"x8r/ast","signature-nary?-setter");
EXT(Yx8rSsyntaxYsexpr_def_value,"x8r/syntax","sexpr-def-value");
DEF(Yx8rSastYLregular_applicationG,"x8r/ast","<regular-application>");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(Yx8rSsyntaxYsexpr_fab_getter,"x8r/syntax","sexpr-fab-getter");
DEF(Yx8rSastYsignature_specs,"x8r/ast","signature-specs");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(Ygen_src,"goo/boot","gen-src");
DEF(Yx8rSastYprocess_nary_closed_application,"x8r/ast","process-nary-closed-application");
EXT(Yx8rSsyntaxYsexpr_if_else,"x8r/syntax","sexpr-if-else");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
DEF(Yx8rSastYLruntime_referenceG,"x8r/ast","<runtime-reference>");
EXT(YgooSmathYNE,"goo/math","~=");
DEF(Yx8rSastYinit_g2c_boot_environment,"x8r/ast","init-g2c-boot-environment");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
DEF(Yx8rSastYapplication_tailQ_setter,"x8r/ast","application-tail?-setter");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYlow_into,"goo/cols/col","low-into");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
DEF(Yx8rSastYLlocalsG,"x8r/ast","<locals>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Yx8rSsyntaxYsexpr_loc_bound_bodies,"x8r/syntax","sexpr-loc-bound-bodies");
EXT(Yx8rSsyntaxYDsexpr_macro_expand_tag,"x8r/syntax","$sexpr-macro-expand-tag");
EXT(YgooSruntimeYspread,"goo/runtime","spread");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
DEF(Yx8rSastYreport_undefined_global_bindings,"x8r/ast","report-undefined-global-bindings");
DEF(Yx8rSastYcompile_time_program_setter,"x8r/ast","compile-time-program-setter");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
DEF(Yx8rSastYdo_named_static_global_bindings,"x8r/ast","do-named-static-global-bindings");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(Yx8rSdependencyYDexpansion_parse_dependency,"x8r/dependency","$expansion-parse-dependency");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(Yx8rSastYfunctions,"x8r/ast","functions");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Yx8rSdependencyYLdependentG,"x8r/dependency","<dependent>");
DEF(Yx8rSastYLfree_environmentG,"x8r/ast","<free-environment>");
DEF(Yx8rSastYsignature_naryQ,"x8r/ast","signature-nary?");
DEF(Yx8rSastYspecial_useSexport_module,"x8r/ast","special-use/export-module");
DEF(Yx8rSastYobjectify_with_subtransaction,"x8r/ast","objectify-with-subtransaction");
EXT(Yx8rSsyntaxYDsexpr_quasiquote_tag,"x8r/syntax","$sexpr-quasiquote-tag");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
DEF(Yx8rSastYfab_list,"x8r/ast","fab-list");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
DEF(Yx8rSastYobjectify_raw,"x8r/ast","objectify-raw");
DEF(Yx8rSastYunwind_protect_cleanup_thunk_setter,"x8r/ast","unwind-protect-cleanup-thunk-setter");
EXT(YgooStypesYanyQ,"goo/types","any?");
DEF(Yx8rSastYalternative_alternant,"x8r/ast","alternative-alternant");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
DEF(Yx8rSastYLglobal_boxG,"x8r/ast","<global-box>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
DEF(Yx8rSastYLreal_referenceG,"x8r/ast","<real-reference>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
DEF(Yx8rSastYobjectify_locals,"x8r/ast","objectify-locals");
DEF(Yx8rSastYmodule_target_environment,"x8r/ast","module-target-environment");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(Yx8rSsyntaxYsexpr_syntax_if_then,"x8r/syntax","sexpr-syntax-if-then");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(Ynul,"goo/boot","nul");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYsinh,"goo/math","sinh");
DEF(Yx8rSastYtransaction_register_implemented_binding,"x8r/ast","transaction-register-implemented-binding");
DEF(Yx8rSastYspecial_compile_time,"x8r/ast","special-compile-time");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
DEF(Yx8rSastYobjectify_quotation,"x8r/ast","objectify-quotation");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
DEF(Yx8rSastYmodule_name,"x8r/ast","module-name");
DEF(Yx8rSastYLast_function_definitionG,"x8r/ast","<ast-function-definition>");
DEF(Yx8rSastYexpand_bind_element,"x8r/ast","expand-bind-element");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(Yx8rSastYprogram_type,"x8r/ast","program-type");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
DEF(Yx8rSastYprobe_module,"x8r/ast","probe-module");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Ylst,"goo/boot","lst");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooStypesY2nd,"goo/types","2nd");
DEF(Yx8rSastYobjectify_boundQ,"x8r/ast","objectify-bound?");
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(Yx8rSastYmonitor_info_setter,"x8r/ast","monitor-info-setter");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
DEF(Yx8rSastYenv_object_name,"x8r/ast","env-object-name");
EXT(Yx8rSsyntaxYsexpr_loc_bound_signatures,"x8r/syntax","sexpr-loc-bound-signatures");
DEF(Yx8rSastYfunction_signature,"x8r/ast","function-signature");
EXT(Yx8rSsyntaxYsexpr_isa_init_props,"x8r/syntax","sexpr-isa-init-props");
EXT(Yx8rSsyntaxYsexpr_isa_parent,"x8r/syntax","sexpr-isa-parent");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(Yx8rSastYLassignmentG,"x8r/ast","<assignment>");
EXT(YgooScolsStabYtab_gc_state,"goo/cols/tab","tab-gc-state");
DEF(Yx8rSastYunwind_protect_protected_thunk,"x8r/ast","unwind-protect-protected-thunk");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
DEF(Yx8rSastYalternative_consequent_setter,"x8r/ast","alternative-consequent-setter");
DEF(Yx8rSastYmodule_loader_modules_setter,"x8r/ast","module-loader-modules-setter");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
DEF(Yx8rSastYLpredefined_referenceG,"x8r/ast","<predefined-reference>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Yx8rSsyntaxYsexpr_if_then,"x8r/syntax","sexpr-if-then");
EXT(Yx8rSsyntaxYsexpr_variable_type,"x8r/syntax","sexpr-variable-type");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(Yx8rSastYDsexpr_useSexport_module_tag,"x8r/ast","$sexpr-use/export-module-tag");
DEF(Yx8rSastYTmacro_tracingQT,"x8r/ast","*macro-tracing?*");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(Yx8rSastYapplication_next_methods,"x8r/ast","application-next-methods");
DEF(Yx8rSastYspecial_quote,"x8r/ast","special-quote");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(Yx8rSastYDsexpr_optionals_type_name,"x8r/ast","$sexpr-optionals-type-name");
EXT(Yhead,"goo/boot","head");
DEF(Yx8rSastYinsert_globalsX,"x8r/ast","insert-globals!");
DEF(Yx8rSastYspecial_begin,"x8r/ast","special-begin");
EXT(Yx8rSsyntaxYsexpr_make_macro_function,"x8r/syntax","sexpr-make-macro-function");
DEF(Yx8rSastYLstatic_local_environmentG,"x8r/ast","<static-local-environment>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSruntimeYformat_to_string,"goo/runtime","format-to-string");
DEF(Yx8rSastYinstall_magic_bindings,"x8r/ast","install-magic-bindings");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(Yx8rSastYmerge_transactionsX,"x8r/ast","merge-transactions!");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSioSportYgets,"goo/io/port","gets");
DEF(Yx8rSastYload_module,"x8r/ast","load-module");
DEF(Yx8rSastYreloader_do_create_module,"x8r/ast","reloader-do-create-module");
EXT(Yx8rSsyntaxYsexpr_syntax_if_pattern,"x8r/syntax","sexpr-syntax-if-pattern");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYupperQ,"goo/math","upper?");
DEF(Yx8rSastYspecial_prop,"x8r/ast","special-prop");
DEF(Yx8rSastYfunction_specs,"x8r/ast","function-specs");
DEF(Yx8rSastYconstant_index,"x8r/ast","constant-index");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
DEF(Yx8rSastYLlocal_bindingG,"x8r/ast","<local-binding>");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
DEF(Yx8rSastYmaybe_log_dependency,"x8r/ast","maybe-log-dependency");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
DEF(Yx8rSastYenvironment_module_setter,"x8r/ast","environment-module-setter");
DEF(Yx8rSastYfunction_binding,"x8r/ast","function-binding");
DEF(Yx8rSastYLmoduleG,"x8r/ast","<module>");
DEF(Yx8rSastYfix_let_bindings,"x8r/ast","fix-let-bindings");
EXT(Yfind_setter,"goo/boot","find-setter");
DEF(Yx8rSastYLcompile_timeG,"x8r/ast","<compile-time>");
DEF(Yx8rSastYremove_module_internalX,"x8r/ast","remove-module-internal!");
EXT(Yx8rSsyntaxYsexpr_block_name,"x8r/syntax","sexpr-block-name");
DEF(Yx8rSastYreloader_do_other_binding,"x8r/ast","reloader-do-other-binding");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(Yx8rSastYspecial_locals,"x8r/ast","special-locals");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
DEF(Yx8rSastYas_lst,"x8r/ast","as-lst");
EXT(YgooSmagYG,"goo/mag",">");
DEF(Yx8rSastYreference_binding_setter,"x8r/ast","reference-binding-setter");
DEF(Yx8rSastYDempty_static_environment,"x8r/ast","$empty-static-environment");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(Yx8rSdependencyYinvalidate_dependents,"x8r/dependency","invalidate-dependents");
EXT(YgooStypesYlen,"goo/types","len");
DEF(Yx8rSastYenvironment_module,"x8r/ast","environment-module");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yx8rSsyntaxYsexpr_assignment_value,"x8r/syntax","sexpr-assignment-value");
DEF(Yx8rSastYLbindingG,"x8r/ast","<binding>");
DEF(Yx8rSastYmodule_loader_stack,"x8r/ast","module-loader-stack");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
DEF(Yx8rSastYprogram_register_setter,"x8r/ast","program-register-setter");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yx8rSsyntaxYsexpr_make_anonymous_method,"x8r/syntax","sexpr-make-anonymous-method");
DEF(Yx8rSastYreference_frame_offset_setter,"x8r/ast","reference-frame-offset-setter");
EXT(Yx8rSsyntaxYsexpr_define_class_parents,"x8r/syntax","sexpr-define-class-parents");
DEF(Yx8rSastYLprogramsG,"x8r/ast","<programs>");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
DEF(Yx8rSastYPmodule_exports_setter,"x8r/ast","%module-exports-setter");
DEF(Yx8rSastYapplication_tailQ,"x8r/ast","application-tail?");
DEF(Yx8rSastYspecial_quasiquote,"x8r/ast","special-quasiquote");
EXT(Yx8rSsyntaxYsexpr_prop_init,"x8r/syntax","sexpr-prop-init");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YPsymbols,"goo/boot","%symbols");
DEF(Yx8rSastYmodule_loader_modules,"x8r/ast","module-loader-modules");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(Yx8rSsyntaxYeval,"x8r/syntax","eval");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
DEF(Yx8rSastYLmonitorG,"x8r/ast","<monitor>");
DEF(Yx8rSastYapplication_arguments,"x8r/ast","application-arguments");
DEF(Yx8rSastYenvironment_next,"x8r/ast","environment-next");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
DEF(Yx8rSastYbinding_mutableQ_setter,"x8r/ast","binding-mutable?-setter");
DEF(Yx8rSastYtransaction_emptyQ,"x8r/ast","transaction-empty?");
EXT(Yx8rSsyntaxYDsexpr_define_function_tag,"x8r/syntax","$sexpr-define-function-tag");
DEF(Yx8rSastYregister_magic_binding,"x8r/ast","register-magic-binding");
DEF(Yx8rSastYsignature_arity_setter,"x8r/ast","signature-arity-setter");
EXT(YgooSmathYround,"goo/math","round");
DEF(Yx8rSastYbinding_handler,"x8r/ast","binding-handler");
DEF(Yx8rSastYspecial_monitor,"x8r/ast","special-monitor");
EXT(Yx8rSsyntaxYDsexpr_method_tag,"x8r/syntax","$sexpr-method-tag");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yx8rSsyntaxYsexpr_operator,"x8r/syntax","sexpr-operator");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
DEF(Yx8rSastYmodule_data_processedQ_setter,"x8r/ast","module-data-processed?-setter");
EXT(Yx8rSsyntaxYsexpr_monitor_expand,"x8r/syntax","sexpr-monitor-expand");
DEF(Yx8rSastYinstall_initial_bindings,"x8r/ast","install-initial-bindings");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yx8rSsyntaxYsexpr_function_definition_variable,"x8r/syntax","sexpr-function-definition-variable");
DEF(Yx8rSastYLmodule_bindingG,"x8r/ast","<module-binding>");
DEF(Yx8rSastYbinding_dynamic_extentQ,"x8r/ast","binding-dynamic-extent?");
DEF(Yx8rSastYfunction_debug_name,"x8r/ast","function-debug-name");
DEF(Yx8rSastYenvironment_next_setter,"x8r/ast","environment-next-setter");
EXT(YgooSmagYmin,"goo/mag","min");
DEF(Yx8rSastYbind_exit_main_fun,"x8r/ast","bind-exit-main-fun");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
DEF(Yx8rSastYLapplicationG,"x8r/ast","<application>");
DEF(Yx8rSastYassignment_binding_setter,"x8r/ast","assignment-binding-setter");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
DEF(Yx8rSastYbinding_locative_setter,"x8r/ast","binding-locative-setter");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
DEF(Yx8rSastYDsexpr_define_static_syntax_tag,"x8r/ast","$sexpr-define-static-syntax-tag");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yx8rSdependencyYdependency_emptyQ,"x8r/dependency","dependency-empty?");
EXT(Yx8rSdependencyYdependency_or,"x8r/dependency","dependency-or");
DEF(Yx8rSastYbinding_global_box,"x8r/ast","binding-global-box");
EXT(Yx8rSsyntaxYsexpr_isa_init_values,"x8r/syntax","sexpr-isa-init-values");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
DEF(Yx8rSastYfunction_binding_setter,"x8r/ast","function-binding-setter");
DEF(Yx8rSastYapplication_function,"x8r/ast","application-function");
DEF(Yx8rSastYbinding_kind,"x8r/ast","binding-kind");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
DEF(Yx8rSastYfunction_temporaries_setter,"x8r/ast","function-temporaries-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
DEF(Yx8rSastYsyntax_environment_excluded_bindings,"x8r/ast","syntax-environment-excluded-bindings");
DEF(Yx8rSastYobjectify_error,"x8r/ast","objectify-error");
DEF(Yx8rSastYspecial_define_static_syntax,"x8r/ast","special-define-static-syntax");
DEF(Yx8rSastYobjectify_generic_definition,"x8r/ast","objectify-generic-definition");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yx8rSsyntaxYDsexpr_let_tag,"x8r/syntax","$sexpr-let-tag");
EXT(Ynot,"goo/boot","not");
DEF(Yx8rSastYDfree_environment_empty,"x8r/ast","$free-environment-empty");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(Yx8rSsyntaxYDsexpr_unwind_protect_tag,"x8r/syntax","$sexpr-unwind-protect-tag");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
DEF(Yx8rSastYast_define_binding,"x8r/ast","ast-define-binding");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
DEF(Yx8rSastYmonitor_main_thunk,"x8r/ast","monitor-main-thunk");
EXT(Yx8rSdependencyYDparse_dependencies,"x8r/dependency","$parse-dependencies");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsSstrYstring_join,"goo/cols/str","string-join");
DEF(Yx8rSastYLast_primitiveG,"x8r/ast","<ast-primitive>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(Yx8rSastYenvironment_module_loader,"x8r/ast","environment-module-loader");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(Yx8rSsyntaxYsexpr_operands,"x8r/syntax","sexpr-operands");
DEF(Yx8rSastYmonitor_type_setter,"x8r/ast","monitor-type-setter");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
DEF(Yx8rSastYdo_static_global_bindings,"x8r/ast","do-static-global-bindings");
EXT(Yx8rSsyntaxYsexpr_unquoteQ,"x8r/syntax","sexpr-unquote?");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yx8rSsyntaxYsexpr_syntax_if_else,"x8r/syntax","sexpr-syntax-if-else");
DEF(Yx8rSastYtransaction_implemented_bindings,"x8r/ast","transaction-implemented-bindings");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
DEF(Yx8rSastYfix_let_bindings_setter,"x8r/ast","fix-let-bindings-setter");
EXT(Yx8rSsyntaxYsexpr_method_body,"x8r/syntax","sexpr-method-body");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYLL,"goo/math","<<");
DEF(Yx8rSastYfunction_temporaries,"x8r/ast","function-temporaries");
DEF(Yx8rSastYspecial_define_syntax,"x8r/ast","special-define-syntax");
EXT(YPrnul,"goo/boot","%rnul");
DEF(Yx8rSastYfix_let_body_setter,"x8r/ast","fix-let-body-setter");
DEF(Yx8rSastYmonitor_info,"x8r/ast","monitor-info");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
DEF(Yx8rSastYLtransactionG,"x8r/ast","<transaction>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yx8rSdependencyYDall_dependency_types,"x8r/dependency","$all-dependency-types");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
DEF(Yx8rSastYLmodule_loaderG,"x8r/ast","<module-loader>");
EXT(YgooSmathYA,"goo/math","+");
DEF(Yx8rSastYmonitor_test_setter,"x8r/ast","monitor-test-setter");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(Yx8rSastYLast_macro_definitionG,"x8r/ast","<ast-macro-definition>");
EXT(YLpropG,"goo/boot","<prop>");
DEF(Yx8rSastYspecial_define_function,"x8r/ast","special-define-function");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsStabYtab_test,"goo/cols/tab","tab-test");
DEF(Yx8rSastYcall_with_subtransaction,"x8r/ast","call-with-subtransaction");
DEF(Yx8rSastYconstant_index_setter,"x8r/ast","constant-index-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmathYas_log,"goo/math","as-log");
DEF(Yx8rSastYassignment_form_setter,"x8r/ast","assignment-form-setter");
DEF(Yx8rSastYspecial_let,"x8r/ast","special-let");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Yx8rSsyntaxYDsexpr_prop_tag,"x8r/syntax","$sexpr-prop-tag");
DEF(Yx8rSastYmodule_runtime_data,"x8r/ast","module-runtime-data");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yx8rSdependencyYlog_dependency,"x8r/dependency","log-dependency");
DEF(Yx8rSastYenvironment_uses_modules_setter,"x8r/ast","environment-uses-modules-setter");
DEF(Yx8rSastYconvert2arguments,"x8r/ast","convert2arguments");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
DEF(Yx8rSastYobjectify_export,"x8r/ast","objectify-export");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
DEF(Yx8rSastYinsert_globalX,"x8r/ast","insert-global!");
DEF(Yx8rSastYspecial_method,"x8r/ast","special-method");
DEF(Yx8rSastYDsexpr_define_primitive_tag,"x8r/ast","$sexpr-define-primitive-tag");
DEF(Yx8rSastYprogram_type_setter,"x8r/ast","program-type-setter");
DEF(Yx8rSastYmonitor_handler,"x8r/ast","monitor-handler");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
DEF(Yx8rSastYsignature_value_setter,"x8r/ast","signature-value-setter");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooScolsStabYDpermanent_hash_state,"goo/cols/tab","$permanent-hash-state");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
DEF(Yx8rSastYfix_let_types,"x8r/ast","fix-let-types");
DEF(Yx8rSastYspecial_use_module,"x8r/ast","special-use-module");
EXT(Yx8rSsyntaxYDsexpr_if_tag,"x8r/syntax","$sexpr-if-tag");
DEF(Yx8rSastYfunction_value,"x8r/ast","function-value");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DEF(Yx8rSastYfind_binding,"x8r/ast","find-binding");
EXT(YgooSmathYGGG,"goo/math",">>>");
DEF(Yx8rSastYLglobal_assignmentG,"x8r/ast","<global-assignment>");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(Ysig_val,"goo/boot","sig-val");
DEF(Yx8rSastYarguments,"x8r/ast","arguments");
DEF(Yx8rSastYbinding_native_toQ,"x8r/ast","binding-native-to?");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
DEF(Yx8rSastYruntime_module,"x8r/ast","runtime-module");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DEF(Yx8rSastYLcomputed_programG,"x8r/ast","<computed-program>");
DEF(Yx8rSastYbinding_index,"x8r/ast","binding-index");
DEF(Yx8rSastYTnow_rt_envT,"x8r/ast","*now-rt-env*");
EXT(YgooSsystemYos_name,"goo/system","os-name");
DEF(Yx8rSastYenvironment_bindings_setter,"x8r/ast","environment-bindings-setter");
EXT(Ytype_object,"goo/boot","type-object");
DEF(Yx8rSastYDsexpr_compile_time_also_tag,"x8r/ast","$sexpr-compile-time-also-tag");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(Yx8rSastYmonitor_main_thunk_setter,"x8r/ast","monitor-main-thunk-setter");
EXT(YLstrG,"goo/boot","<str>");
DEF(Yx8rSastYreload_modules,"x8r/ast","reload-modules");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
DEF(Yx8rSastYDfab_list_empty,"x8r/ast","$fab-list-empty");
EXT(Yx8rSsyntaxYDsexpr_locals_tag,"x8r/syntax","$sexpr-locals-tag");
DEF(Yx8rSastYobjectify_assignment,"x8r/ast","objectify-assignment");
DEF(Yx8rSastYfunction_free,"x8r/ast","function-free");
DEF(Yx8rSastYspecial_boundQ,"x8r/ast","special-bound?");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yx8rSsyntaxYDsexpr_def_tag,"x8r/syntax","$sexpr-def-tag");
DEF(Yx8rSastYfunction_free_setter,"x8r/ast","function-free-setter");
DEF(Yx8rSastYload_in,"x8r/ast","load-in");
DEF(Yx8rSastYDarguments_empty,"x8r/ast","$arguments-empty");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Yx8rSsyntaxYsexpr_prop_owner,"x8r/syntax","sexpr-prop-owner");
DEF(Yx8rSastYLstatic_environmentG,"x8r/ast","<static-environment>");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
DEF(Yx8rSastYbinding_kind_setter,"x8r/ast","binding-kind-setter");
EXT(Yfun_val,"goo/boot","fun-val");
DEF(Yx8rSastYbinding_info,"x8r/ast","binding-info");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
DEF(Yx8rSastYfunction_body,"x8r/ast","function-body");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(Yx8rSastYspecial_if,"x8r/ast","special-if");
DEF(Yx8rSastYLprogramG,"x8r/ast","<program>");
DEF(Yx8rSastYPmodule_exports,"x8r/ast","%module-exports");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
EXT(Yx8rSsyntaxYsexpr_def_variable,"x8r/syntax","sexpr-def-variable");
DEF(Yx8rSastYbinding_info_setter,"x8r/ast","binding-info-setter");
DEF(Yx8rSastYenvironment_uses_modules,"x8r/ast","environment-uses-modules");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLcolIG,"goo/boot","<col.>");
DEF(Yx8rSastYobjectify_symbol,"x8r/ast","objectify-symbol");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(Yx8rSastYLast_functionG,"x8r/ast","<ast-function>");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yx8rSsyntaxYDsexpr_begin_tag,"x8r/syntax","$sexpr-begin-tag");
DEF(Yx8rSastYsignature_bindings_setter,"x8r/ast","signature-bindings-setter");
DEF(Yx8rSastYreference_called_functionQ,"x8r/ast","reference-called-function?");
DEF(Yx8rSastYconstant_value_setter,"x8r/ast","constant-value-setter");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yx8rSdependencyYinvalidate_dependent,"x8r/dependency","invalidate-dependent");
EXT(Yfun_name,"goo/boot","fun-name");
DEF(Yx8rSastYsignature_value,"x8r/ast","signature-value");
DEF(Yx8rSastYbinding_mutableQ,"x8r/ast","binding-mutable?");
EXT(YgooSmathYoddQ,"goo/math","odd?");
DEF(Yx8rSastYbinding_reference_class,"x8r/ast","binding-reference-class");
EXT(Yx8rSsyntaxYsexpr_make_begin,"x8r/syntax","sexpr-make-begin");
EXT(Yx8rSdependencyYdetach_dependent,"x8r/dependency","detach-dependent");
DEF(Yx8rSastYbinding_index_setter,"x8r/ast","binding-index-setter");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(Yx8rSastYDsequential_empty,"x8r/ast","$sequential-empty");
DEF(Yx8rSastYruntime_module_loader,"x8r/ast","runtime-module-loader");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(Yx8rSastYapplication_knownQ_setter,"x8r/ast","application-known?-setter");
EXT(Yx8rSsyntaxYsexpr_signature_parameters,"x8r/syntax","sexpr-signature-parameters");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(Yx8rSastYsignature_bindings,"x8r/ast","signature-bindings");
EXT(YgooScolsSstrYstring_split,"goo/cols/str","string-split");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
DEF(Yx8rSastYobjectify_alternative,"x8r/ast","objectify-alternative");
EXT(Yx8rSsyntaxYsexpr_prop_type,"x8r/syntax","sexpr-prop-type");
EXT(Yx8rSsyntaxYsexpr_prop_name,"x8r/syntax","sexpr-prop-name");
DEF(Yx8rSastYDsexpr_export_tag,"x8r/ast","$sexpr-export-tag");
DEF(Yx8rSastYboundQ_reference,"x8r/ast","bound?-reference");
DEF(Yx8rSastYcompute_transitive_users,"x8r/ast","compute-transitive-users");
EXT(Ynil,"goo/boot","nil");
DEF(Yx8rSastYLast_method_definitionG,"x8r/ast","<ast-method-definition>");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(Yx8rSsyntaxYDsexpr_iterate_tag,"x8r/syntax","$sexpr-iterate-tag");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
DEF(Yx8rSastYapplication_knownQ,"x8r/ast","application-known?");
EXT(YLunionG,"goo/boot","<union>");
DEF(Yx8rSastYinit_ast,"x8r/ast","init-ast");
EXT(Yx8rSsyntaxYDsexpr_define_tag,"x8r/syntax","$sexpr-define-tag");
EXT(Yx8rSsyntaxYDsexpr_quote_tag,"x8r/syntax","$sexpr-quote-tag");
DEF(Yx8rSastYreloader_do_use_module,"x8r/ast","reloader-do-use-module");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
DEF(Yx8rSastYroll_back_transaction,"x8r/ast","roll-back-transaction");
EXT(Yclass_parents,"goo/boot","class-parents");
DEF(Yx8rSastYobjectify_monitor,"x8r/ast","objectify-monitor");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(Yx8rSsyntaxYsexpr_if_test,"x8r/syntax","sexpr-if-test");
DEF(Yx8rSastYfunction_body_setter,"x8r/ast","function-body-setter");
DEF(Yx8rSastYbinding_module_name,"x8r/ast","binding-module-name");
DEF(Yx8rSastYfunction_index_setter,"x8r/ast","function-index-setter");
DEF(Yx8rSastYbinding_value_setter,"x8r/ast","binding-value-setter");
DEF(Yx8rSastYobjectify_foreign_reference,"x8r/ast","objectify-foreign-reference");
EXT(Yx8rSsyntaxYsexpr_unwind_protect_cleanup_forms,"x8r/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(Ynew,"goo/boot","new");
DEF(Yx8rSastYexpand_bind_listT,"x8r/ast","expand-bind-list*");
DEF(Yx8rSastYLvariable_definitionG,"x8r/ast","<variable-definition>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(Yx8rSastYreference_frame_offset,"x8r/ast","reference-frame-offset");
DEF(Yx8rSastYLargumentsG,"x8r/ast","<arguments>");
DEF(Yx8rSastYbinding_handler_setter,"x8r/ast","binding-handler-setter");
DEF(Yx8rSastYenvironment_module_loader_setter,"x8r/ast","environment-module-loader-setter");
DEF(Yx8rSastYbinding_type,"x8r/ast","binding-type");
DEF(Yx8rSastYTcurrent_subtransactionT,"x8r/ast","*current-subtransaction*");
DEF(Yx8rSastYtransaction_register_dependent,"x8r/ast","transaction-register-dependent");
DEF(Yx8rSastYspecial_export,"x8r/ast","special-export");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLanyG,"goo/boot","<any>");
DEF(Yx8rSastYobjectify_compile_time,"x8r/ast","objectify-compile-time");
EXT(Yx8rSsyntaxYDsexpr_define_syntax_tag,"x8r/syntax","$sexpr-define-syntax-tag");
DEF(Yx8rSastYLsequentialG,"x8r/ast","<sequential>");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yx8rSsyntaxYsexpr_let_Gcombination,"x8r/syntax","sexpr-let->combination");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSioSportYin,"goo/io/port","in");
DEF(Yx8rSastYast_macro_expand,"x8r/ast","ast-macro-expand");
DEF(Yx8rSastYtransform_defs,"x8r/ast","transform-defs");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
DEF(Yx8rSastYcompute_local_reference_offsets,"x8r/ast","compute-local-reference-offsets");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
DEF(Yx8rSastYbinding_name_setter,"x8r/ast","binding-name-setter");
EXT(Yx8rSsyntaxYsexpr_sequence_Gbegin,"x8r/syntax","sexpr-sequence->begin");
EXT(Yx8rSsyntaxYDsexpr_monitor_tag,"x8r/syntax","$sexpr-monitor-tag");
DEF(Yx8rSastYLast_methodG,"x8r/ast","<ast-method>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Yx8rSsyntaxYsexpr_function_signature,"x8r/syntax","sexpr-function-signature");
EXT(YgooSmathYC,"goo/math","^");
DEF(Yx8rSastYenvironment_bindings,"x8r/ast","environment-bindings");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Ymet_appQ,"goo/boot","met-app?");
DEF(Yx8rSastYmodule_transaction_setter,"x8r/ast","module-transaction-setter");
DEF(Yx8rSastYftype,"x8r/ast","ftype");
DEF(Yx8rSastYsequential,"x8r/ast","sequential");
DEF(Yx8rSastYfunction_bindings,"x8r/ast","function-bindings");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yx8rSdependencyYdependency_and,"x8r/dependency","dependency-and");
DEF(Yx8rSastYLast_embodied_functionG,"x8r/ast","<ast-embodied-function>");
EXT(YgooScolsSassocYLassocsG,"goo/cols/assoc","<assocs>");
DEF(Yx8rSastYprocess_closed_application,"x8r/ast","process-closed-application");
EXT(Yx8rSdependencyYDvalue_optimization_dependency,"x8r/dependency","$value-optimization-dependency");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yx8rSdependencyYLdependableG,"x8r/dependency","<dependable>");
DEF(Yx8rSastYLstatic_global_environmentG,"x8r/ast","<static-global-environment>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
DEF(Yx8rSastYforeign_nameQ,"x8r/ast","foreign-name?");
DEF(Yx8rSastYspecial_set,"x8r/ast","special-set");
EXT(YOisaQ,"goo/boot","@isa?");
DEF(Yx8rSastYlocals_functions,"x8r/ast","locals-functions");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
DEF(Yx8rSastYreference_frame_number_setter,"x8r/ast","reference-frame-number-setter");
DEF(Yx8rSastYLlocal_referenceG,"x8r/ast","<local-reference>");
EXT(YgooScolsSstrYstring_repeat,"goo/cols/str","string-repeat");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DEF(Yx8rSastYbinding_dottedQ_setter,"x8r/ast","binding-dotted?-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
DEF(Yx8rSastYbinding_freeQ_setter,"x8r/ast","binding-free?-setter");
DEF(Yx8rSastYmodule_target_environment_setter,"x8r/ast","module-target-environment-setter");
DEF(Yx8rSastYexpand_pattern,"x8r/ast","expand-pattern");
DEF(Yx8rSastYspecial_define_generic,"x8r/ast","special-define-generic");
DEF(Yx8rSastYremove_modules_by_nameX,"x8r/ast","remove-modules-by-name!");
DEF(Yx8rSastYmodule_name_setter,"x8r/ast","module-name-setter");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSassocYassocs_test_setter,"goo/cols/assoc","assocs-test-setter");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
DEF(Yx8rSastYLmethod_applicationG,"x8r/ast","<method-application>");
EXT(YgooSmathYacos,"goo/math","acos");
DEF(Yx8rSastYtransaction_dependents,"x8r/ast","transaction-dependents");
DEF(Yx8rSastYobjectify_list,"x8r/ast","objectify-list");
DEF(Yx8rSastYexpand_syntax_if,"x8r/ast","expand-syntax-if");
EXT(Yx8rSsyntaxYsexpr_function_body,"x8r/syntax","sexpr-function-body");
DEF(Yx8rSastYreloader_do_import,"x8r/ast","reloader-do-import");
EXT(YPprop,"goo/boot","%prop");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLsubclassG,"goo/boot","<subclass>");
DEF(Yx8rSastYapplication_arguments_setter,"x8r/ast","application-arguments-setter");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
DEF(Yx8rSastYspecial_define_class,"x8r/ast","special-define-class");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yx8rSsyntaxYsexpr_syntax_definition_variable,"x8r/syntax","sexpr-syntax-definition-variable");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
DEF(Yx8rSastYfunction_source_setter,"x8r/ast","function-source-setter");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Ytype_error,"goo/boot","type-error");
DEF(Yx8rSastYLpredefined_applicationG,"x8r/ast","<predefined-application>");
DEF(Yx8rSastYspecial_def,"x8r/ast","special-def");
EXT(YPisa,"goo/boot","%isa");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
DEF(Yx8rSastYobjectify_bind_exit,"x8r/ast","objectify-bind-exit");
DEF(Yx8rSastYspecial_define,"x8r/ast","special-define");
EXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
DEF(Yx8rSastYreference_called_functionQ_setter,"x8r/ast","reference-called-function?-setter");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
DEF(Yx8rSastYfind_environment_module,"x8r/ast","find-environment-module");
DEF(Yx8rSastYfunction_data_refs_setter,"x8r/ast","function-data-refs-setter");
DEF(Yx8rSastYspecial_iterate,"x8r/ast","special-iterate");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
DEF(Yx8rSastYassignment_form,"x8r/ast","assignment-form");
DEF(Yx8rSastYspecial_macro_expand,"x8r/ast","special-macro-expand");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
DEF(Yx8rSastYmonitor_test,"x8r/ast","monitor-test");
DEF(Yx8rSastYobjectify_definition,"x8r/ast","objectify-definition");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
DEF(Yx8rSastYLbind_exitG,"x8r/ast","<bind-exit>");
DEF(Yx8rSastYfab_g2c_module,"x8r/ast","fab-g2c-module");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(Yx8rSsyntaxYsexpr_expand_backquote,"x8r/syntax","sexpr-expand-backquote");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(Yx8rSdependencyYfind_dependency,"x8r/dependency","find-dependency");
DEF(Yx8rSastYglobal_box_value_setter,"x8r/ast","global-box-value-setter");
DEF(Yx8rSastYalternative_alternant_setter,"x8r/ast","alternative-alternant-setter");
DEF(Yx8rSastYspecial_Praw,"x8r/ast","special-%raw");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
DEF(Yx8rSastYbinding_inferred_type,"x8r/ast","binding-inferred-type");
DEF(Yx8rSastYobjectify_signature,"x8r/ast","objectify-signature");
DEF(Yx8rSastYLfunctionsG,"x8r/ast","<functions>");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
DEF(Yx8rSastYLreferenceG,"x8r/ast","<reference>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
DEF(Yx8rSastYalternative_condition,"x8r/ast","alternative-condition");
DEF(Yx8rSastYmonitor_type,"x8r/ast","monitor-type");
EXT(Yx8rSsyntaxYsexpr_prop_initQ,"x8r/syntax","sexpr-prop-init?");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
DEF(Yx8rSastYmonitor_handler_setter,"x8r/ast","monitor-handler-setter");
DEF(Yx8rSastYfix_let_body,"x8r/ast","fix-let-body");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
DEF(Yx8rSastYLraw_constantG,"x8r/ast","<raw-constant>");
DEF(Yx8rSastYLunwind_protectG,"x8r/ast","<unwind-protect>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_224);
DEFLIT(lit_88);
DEFLIT(lit_354);
DEFLIT(lit_1);
DEFLIT(lit_320);
DEFLIT(lit_443);
DEFLIT(lit_432);
DEFLIT(lit_201);
DEFLIT(lit_544);
DEFLIT(lit_5);
DEFLIT(lit_433);
DEFLIT(lit_143);
DEFLIT(lit_424);
DEFLIT(lit_200);
DEFLIT(lit_35);
DEFLIT(lit_128);
DEFLIT(lit_87);
DEFLIT(lit_297);
DEFLIT(lit_294);
DEFLIT(lit_89);
DEFLIT(lit_380);
DEFLIT(lit_550);
DEFLIT(lit_437);
DEFLIT(lit_332);
DEFLIT(lit_420);
DEFLIT(lit_301);
DEFLIT(lit_318);
DEFLIT(lit_397);
DEFLIT(lit_525);
DEFLIT(lit_199);
DEFLIT(lit_237);
DEFLIT(lit_494);
DEFLIT(lit_350);
DEFLIT(lit_450);
DEFLIT(lit_78);
DEFLIT(lit_185);
DEFLIT(lit_552);
DEFLIT(lit_431);
DEFLIT(lit_202);
DEFLIT(lit_182);
DEFLIT(lit_428);
DEFLIT(lit_142);
DEFLIT(lit_162);
DEFLIT(lit_193);
DEFLIT(lit_340);
DEFLIT(lit_239);
DEFLIT(lit_112);
DEFLIT(lit_427);
DEFLIT(lit_580);
DEFLIT(lit_535);
DEFLIT(lit_20);
DEFLIT(lit_280);
DEFLIT(lit_414);
DEFLIT(lit_155);
DEFLIT(lit_59);
DEFLIT(lit_310);
DEFLIT(lit_219);
DEFLIT(lit_120);
DEFLIT(lit_474);
DEFLIT(lit_439);
DEFLIT(lit_296);
DEFLIT(lit_542);
DEFLIT(lit_64);
DEFLIT(lit_338);
DEFLIT(lit_349);
DEFLIT(lit_39);
DEFLIT(lit_53);
DEFLIT(lit_31);
DEFLIT(lit_232);
DEFLIT(lit_509);
DEFLIT(lit_145);
DEFLIT(lit_326);
DEFLIT(lit_540);
DEFLIT(lit_449);
DEFLIT(lit_287);
DEFLIT(lit_33);
DEFLIT(lit_72);
DEFLIT(lit_107);
DEFLIT(lit_105);
DEFLIT(lit_570);
DEFLIT(lit_305);
DEFLIT(lit_559);
DEFLIT(lit_104);
DEFLIT(lit_184);
DEFLIT(lit_50);
DEFLIT(lit_125);
DEFLIT(lit_83);
DEFLIT(lit_393);
DEFLIT(lit_73);
DEFLIT(lit_554);
DEFLIT(lit_556);
DEFLIT(lit_463);
DEFLIT(lit_240);
DEFLIT(lit_358);
DEFLIT(lit_99);
DEFLIT(lit_148);
DEFLIT(lit_458);
DEFLIT(lit_299);
DEFLIT(lit_533);
DEFLIT(lit_536);
DEFLIT(lit_348);
DEFLIT(lit_101);
DEFLIT(lit_178);
DEFLIT(lit_316);
DEFLIT(lit_485);
DEFLIT(lit_77);
DEFLIT(lit_566);
DEFLIT(lit_530);
DEFLIT(lit_524);
DEFLIT(lit_592);
DEFLIT(lit_41);
DEFLIT(lit_9);
DEFLIT(lit_218);
DEFLIT(lit_314);
DEFLIT(lit_191);
DEFLIT(lit_92);
DEFLIT(lit_584);
DEFLIT(lit_288);
DEFLIT(lit_394);
DEFLIT(lit_127);
DEFLIT(lit_513);
DEFLIT(lit_189);
DEFLIT(lit_405);
DEFLIT(lit_177);
DEFLIT(lit_194);
DEFLIT(lit_95);
DEFLIT(lit_385);
DEFLIT(lit_0);
DEFLIT(lit_156);
DEFLIT(lit_522);
DEFLIT(lit_360);
DEFLIT(lit_173);
DEFLIT(lit_415);
DEFLIT(lit_347);
DEFLIT(lit_283);
DEFLIT(lit_404);
DEFLIT(lit_275);
DEFLIT(lit_309);
DEFLIT(lit_22);
DEFLIT(lit_324);
DEFLIT(lit_206);
DEFLIT(lit_317);
DEFLIT(lit_222);
DEFLIT(lit_188);
DEFLIT(lit_519);
DEFLIT(lit_282);
DEFLIT(lit_214);
DEFLIT(lit_568);
DEFLIT(lit_331);
DEFLIT(lit_585);
DEFLIT(lit_123);
DEFLIT(lit_538);
DEFLIT(lit_392);
DEFLIT(lit_373);
DEFLIT(lit_403);
DEFLIT(lit_572);
DEFLIT(lit_234);
DEFLIT(lit_43);
DEFLIT(lit_593);
DEFLIT(lit_91);
DEFLIT(lit_549);
DEFLIT(lit_285);
DEFLIT(lit_278);
DEFLIT(lit_419);
DEFLIT(lit_300);
DEFLIT(lit_26);
DEFLIT(lit_517);
DEFLIT(lit_376);
DEFLIT(lit_558);
DEFLIT(lit_158);
DEFLIT(lit_168);
DEFLIT(lit_236);
DEFLIT(lit_221);
DEFLIT(lit_571);
DEFLIT(lit_400);
DEFLIT(lit_339);
DEFLIT(lit_272);
DEFLIT(lit_118);
DEFLIT(lit_496);
DEFLIT(lit_110);
DEFLIT(lit_174);
DEFLIT(lit_58);
DEFLIT(lit_279);
DEFLIT(lit_389);
DEFLIT(lit_523);
DEFLIT(lit_94);
DEFLIT(lit_109);
DEFLIT(lit_212);
DEFLIT(lit_192);
DEFLIT(lit_229);
DEFLIT(lit_106);
DEFLIT(lit_577);
DEFLIT(lit_304);
DEFLIT(lit_362);
DEFLIT(lit_79);
DEFLIT(lit_447);
DEFLIT(lit_377);
DEFLIT(lit_473);
DEFLIT(lit_498);
DEFLIT(lit_211);
DEFLIT(lit_407);
DEFLIT(lit_186);
DEFLIT(lit_235);
DEFLIT(lit_503);
DEFLIT(lit_12);
DEFLIT(lit_25);
DEFLIT(lit_475);
DEFLIT(lit_564);
DEFLIT(lit_545);
DEFLIT(lit_65);
DEFLIT(lit_444);
DEFLIT(lit_21);
DEFLIT(lit_16);
DEFLIT(lit_292);
DEFLIT(lit_527);
DEFLIT(lit_595);
DEFLIT(lit_306);
DEFLIT(lit_382);
DEFLIT(lit_387);
DEFLIT(lit_590);
DEFLIT(lit_453);
DEFLIT(lit_401);
DEFLIT(lit_181);
DEFLIT(lit_108);
DEFLIT(lit_456);
DEFLIT(lit_233);
DEFLIT(lit_384);
DEFLIT(lit_442);
DEFLIT(lit_537);
DEFLIT(lit_49);
DEFLIT(lit_368);
DEFLIT(lit_330);
DEFLIT(lit_249);
DEFLIT(lit_196);
DEFLIT(lit_34);
DEFLIT(lit_176);
DEFLIT(lit_165);
DEFLIT(lit_154);
DEFLIT(lit_399);
DEFLIT(lit_303);
DEFLIT(lit_67);
DEFLIT(lit_383);
DEFLIT(lit_529);
DEFLIT(lit_248);
DEFLIT(lit_336);
DEFLIT(lit_323);
DEFLIT(lit_486);
DEFLIT(lit_562);
DEFLIT(lit_126);
DEFLIT(lit_511);
DEFLIT(lit_97);
DEFLIT(lit_413);
DEFLIT(lit_567);
DEFLIT(lit_163);
DEFLIT(lit_363);
DEFLIT(lit_409);
DEFLIT(lit_429);
DEFLIT(lit_247);
DEFLIT(lit_146);
DEFLIT(lit_289);
DEFLIT(lit_277);
DEFLIT(lit_119);
DEFLIT(lit_528);
DEFLIT(lit_308);
DEFLIT(lit_355);
DEFLIT(lit_345);
DEFLIT(lit_84);
DEFLIT(lit_138);
DEFLIT(lit_246);
DEFLIT(lit_195);
DEFLIT(lit_581);
DEFLIT(lit_507);
DEFLIT(lit_80);
DEFLIT(lit_130);
DEFLIT(lit_574);
DEFLIT(lit_472);
DEFLIT(lit_502);
DEFLIT(lit_454);
DEFLIT(lit_547);
DEFLIT(lit_357);
DEFLIT(lit_426);
DEFLIT(lit_418);
DEFLIT(lit_276);
DEFLIT(lit_583);
DEFLIT(lit_464);
DEFLIT(lit_438);
DEFLIT(lit_541);
DEFLIT(lit_151);
DEFLIT(lit_68);
DEFLIT(lit_203);
DEFLIT(lit_335);
DEFLIT(lit_367);
DEFLIT(lit_477);
DEFLIT(lit_52);
DEFLIT(lit_47);
DEFLIT(lit_575);
DEFLIT(lit_115);
DEFLIT(lit_510);
DEFLIT(lit_452);
DEFLIT(lit_63);
DEFLIT(lit_565);
DEFLIT(lit_561);
DEFLIT(lit_578);
DEFLIT(lit_11);
DEFLIT(lit_175);
DEFLIT(lit_251);
DEFLIT(lit_312);
DEFLIT(lit_69);
DEFLIT(lit_325);
DEFLIT(lit_539);
DEFLIT(lit_267);
DEFLIT(lit_268);
DEFLIT(lit_27);
DEFLIT(lit_23);
DEFLIT(lit_396);
DEFLIT(lit_266);
DEFLIT(lit_76);
DEFLIT(lit_359);
DEFLIT(lit_579);
DEFLIT(lit_518);
DEFLIT(lit_159);
DEFLIT(lit_346);
DEFLIT(lit_273);
DEFLIT(lit_506);
DEFLIT(lit_139);
DEFLIT(lit_412);
DEFLIT(lit_265);
DEFLIT(lit_129);
DEFLIT(lit_391);
DEFLIT(lit_497);
DEFLIT(lit_423);
DEFLIT(lit_500);
DEFLIT(lit_250);
DEFLIT(lit_208);
DEFLIT(lit_371);
DEFLIT(lit_132);
DEFLIT(lit_329);
DEFLIT(lit_137);
DEFLIT(lit_311);
DEFLIT(lit_435);
DEFLIT(lit_589);
DEFLIT(lit_493);
DEFLIT(lit_557);
DEFLIT(lit_520);
DEFLIT(lit_436);
DEFLIT(lit_364);
DEFLIT(lit_60);
DEFLIT(lit_57);
DEFLIT(lit_263);
DEFLIT(lit_337);
DEFLIT(lit_134);
DEFLIT(lit_228);
DEFLIT(lit_207);
DEFLIT(lit_140);
DEFLIT(lit_122);
DEFLIT(lit_465);
DEFLIT(lit_152);
DEFLIT(lit_441);
DEFLIT(lit_356);
DEFLIT(lit_422);
DEFLIT(lit_548);
DEFLIT(lit_213);
DEFLIT(lit_38);
DEFLIT(lit_526);
DEFLIT(lit_172);
DEFLIT(lit_7);
DEFLIT(lit_13);
DEFLIT(lit_344);
DEFLIT(lit_576);
DEFLIT(lit_223);
DEFLIT(lit_468);
DEFLIT(lit_534);
DEFLIT(lit_531);
DEFLIT(lit_321);
DEFLIT(lit_259);
DEFLIT(lit_483);
DEFLIT(lit_2);
DEFLIT(lit_116);
DEFLIT(lit_93);
DEFLIT(lit_161);
DEFLIT(lit_501);
DEFLIT(lit_269);
DEFLIT(lit_481);
DEFLIT(lit_406);
DEFLIT(lit_252);
DEFLIT(lit_594);
DEFLIT(lit_482);
DEFLIT(lit_421);
DEFLIT(lit_227);
DEFLIT(lit_471);
DEFLIT(lit_225);
DEFLIT(lit_171);
DEFLIT(lit_352);
DEFLIT(lit_135);
DEFLIT(lit_231);
DEFLIT(lit_205);
DEFLIT(lit_81);
DEFLIT(lit_56);
DEFLIT(lit_478);
DEFLIT(lit_480);
DEFLIT(lit_505);
DEFLIT(lit_256);
DEFLIT(lit_100);
DEFLIT(lit_257);
DEFLIT(lit_499);
DEFLIT(lit_204);
DEFLIT(lit_381);
DEFLIT(lit_86);
DEFLIT(lit_470);
DEFLIT(lit_187);
DEFLIT(lit_114);
DEFLIT(lit_14);
DEFLIT(lit_395);
DEFLIT(lit_425);
DEFLIT(lit_469);
DEFLIT(lit_113);
DEFLIT(lit_136);
DEFLIT(lit_8);
DEFLIT(lit_226);
DEFLIT(lit_190);
DEFLIT(lit_460);
DEFLIT(lit_124);
DEFLIT(lit_430);
DEFLIT(lit_466);
DEFLIT(lit_90);
DEFLIT(lit_461);
DEFLIT(lit_149);
DEFLIT(lit_15);
DEFLIT(lit_563);
DEFLIT(lit_61);
DEFLIT(lit_307);
DEFLIT(lit_504);
DEFLIT(lit_490);
DEFLIT(lit_555);
DEFLIT(lit_328);
DEFLIT(lit_260);
DEFLIT(lit_3);
DEFLIT(lit_582);
DEFLIT(lit_291);
DEFLIT(lit_521);
DEFLIT(lit_492);
DEFLIT(lit_462);
DEFLIT(lit_48);
DEFLIT(lit_588);
DEFLIT(lit_411);
DEFLIT(lit_24);
DEFLIT(lit_261);
DEFLIT(lit_117);
DEFLIT(lit_516);
DEFLIT(lit_45);
DEFLIT(lit_167);
DEFLIT(lit_144);
DEFLIT(lit_164);
DEFLIT(lit_17);
DEFLIT(lit_388);
DEFLIT(lit_551);
DEFLIT(lit_271);
DEFLIT(lit_327);
DEFLIT(lit_546);
DEFLIT(lit_378);
DEFLIT(lit_274);
DEFLIT(lit_586);
DEFLIT(lit_160);
DEFLIT(lit_489);
DEFLIT(lit_103);
DEFLIT(lit_71);
DEFLIT(lit_131);
DEFLIT(lit_244);
DEFLIT(lit_55);
DEFLIT(lit_457);
DEFLIT(lit_369);
DEFLIT(lit_322);
DEFLIT(lit_402);
DEFLIT(lit_62);
DEFLIT(lit_508);
DEFLIT(lit_446);
DEFLIT(lit_216);
DEFLIT(lit_111);
DEFLIT(lit_416);
DEFLIT(lit_102);
DEFLIT(lit_254);
DEFLIT(lit_293);
DEFLIT(lit_451);
DEFLIT(lit_82);
DEFLIT(lit_241);
DEFLIT(lit_98);
DEFLIT(lit_343);
DEFLIT(lit_215);
DEFLIT(lit_42);
DEFLIT(lit_295);
DEFLIT(lit_445);
DEFLIT(lit_46);
DEFLIT(lit_569);
DEFLIT(lit_147);
DEFLIT(lit_487);
DEFLIT(lit_390);
DEFLIT(lit_6);
DEFLIT(lit_448);
DEFLIT(lit_410);
DEFLIT(lit_170);
DEFLIT(lit_54);
DEFLIT(lit_532);
DEFLIT(lit_370);
DEFLIT(lit_476);
DEFLIT(lit_150);
DEFLIT(lit_560);
DEFLIT(lit_75);
DEFLIT(lit_270);
DEFLIT(lit_30);
DEFLIT(lit_4);
DEFLIT(lit_488);
DEFLIT(lit_372);
DEFLIT(lit_319);
DEFLIT(lit_365);
DEFLIT(lit_198);
DEFLIT(lit_353);
DEFLIT(lit_18);
DEFLIT(lit_341);
DEFLIT(lit_243);
DEFLIT(lit_298);
DEFLIT(lit_351);
DEFLIT(lit_361);
DEFLIT(lit_29);
DEFLIT(lit_183);
DEFLIT(lit_553);
DEFLIT(lit_587);
DEFLIT(lit_264);
DEFLIT(lit_51);
DEFLIT(lit_398);
DEFLIT(lit_379);
DEFLIT(lit_591);
DEFLIT(lit_573);
DEFLIT(lit_121);
DEFLIT(lit_495);
DEFLIT(lit_166);
DEFLIT(lit_302);
DEFLIT(lit_169);
DEFLIT(lit_334);
DEFLIT(lit_374);
DEFLIT(lit_238);
DEFLIT(lit_375);
DEFLIT(lit_153);
DEFLIT(lit_74);
DEFLIT(lit_70);
DEFLIT(lit_434);
DEFLIT(lit_133);
DEFLIT(lit_313);
DEFLIT(lit_96);
DEFLIT(lit_262);
DEFLIT(lit_44);
DEFLIT(lit_284);
DEFLIT(lit_417);
DEFLIT(lit_512);
DEFLIT(lit_440);
DEFLIT(lit_253);
DEFLIT(lit_217);
DEFLIT(lit_40);
DEFLIT(lit_484);
DEFLIT(lit_366);
DEFLIT(lit_210);
DEFLIT(lit_290);
DEFLIT(lit_209);
DEFLIT(lit_28);
DEFLIT(lit_515);
DEFLIT(lit_286);
DEFLIT(lit_180);
DEFLIT(lit_333);
DEFLIT(lit_19);
DEFLIT(lit_220);
DEFLIT(lit_10);
DEFLIT(lit_459);
DEFLIT(lit_386);
DEFLIT(lit_467);
DEFLIT(lit_141);
DEFLIT(lit_342);
DEFLIT(lit_408);
DEFLIT(lit_179);
DEFLIT(lit_543);
DEFLIT(lit_85);
DEFLIT(lit_255);
DEFLIT(lit_455);
DEFLIT(lit_242);
DEFLIT(lit_514);
DEFLIT(lit_315);
DEFLIT(lit_36);
DEFLIT(lit_197);
DEFLIT(lit_32);
DEFLIT(lit_281);
DEFLIT(lit_157);
DEFLIT(lit_66);
DEFLIT(lit_491);
DEFLIT(lit_37);
DEFLIT(lit_479);
DEFLIT(lit_258);
DEFLIT(lit_230);
DEFLIT(lit_245);

/* FUNCTIONS: */

LOCFOR(fun_x_1422_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_objectify_error_3);
LOCFOR(fun_program_type_4);
LOCFOR(fun_program_type_setter_5);
LOCFOR(fun_program_register_6);
LOCFOR(fun_program_register_setter_7);
LOCFOR(fun_8);
LOCFOR(fun_program_register_9);
LOCFOR(fun_program_register_setter_10);
LOCFOR(fun_11);
LOCFOR(fun_binding_name_12);
LOCFOR(fun_binding_name_setter_13);
LOCFOR(fun_binding_type_14);
LOCFOR(fun_binding_type_setter_15);
LOCFOR(fun_binding_inferred_type_16);
LOCFOR(fun_binding_inferred_type_setter_17);
LOCFOR(fun_18);
LOCFOR(fun_global_box_value_19);
LOCFOR(fun_global_box_value_setter_20);
LOCFOR(fun_21);
LOCFOR(fun_binding_kind_22);
LOCFOR(fun_binding_kind_setter_23);
LOCFOR(fun_24);
LOCFOR(fun_binding_module_name_25);
LOCFOR(fun_binding_module_name_setter_26);
LOCFOR(fun_binding_freeQ_27);
LOCFOR(fun_binding_freeQ_setter_28);
LOCFOR(fun_29);
LOCFOR(fun_binding_info_30);
LOCFOR(fun_binding_info_setter_31);
LOCFOR(fun_32);
FUNFOR(Yx8rSastYmaybe_log_dependency);
FUNFOR(Yx8rSastYmacro_expander);
LOCFOR(fun_binding_value_35);
LOCFOR(fun_binding_value_setter_36);
LOCFOR(fun_37);
LOCFOR(fun_binding_mutableQ_38);
LOCFOR(fun_binding_mutableQ_setter_39);
LOCFOR(fun_40);
LOCFOR(fun_binding_dynamic_extentQ_41);
LOCFOR(fun_binding_dynamic_extentQ_setter_42);
LOCFOR(fun_43);
LOCFOR(fun_binding_dottedQ_44);
LOCFOR(fun_binding_dottedQ_setter_45);
LOCFOR(fun_46);
LOCFOR(fun_binding_index_47);
LOCFOR(fun_binding_index_setter_48);
LOCFOR(fun_49);
LOCFOR(fun_compile_time_program_50);
LOCFOR(fun_compile_time_program_setter_51);
LOCFOR(fun_reference_binding_52);
LOCFOR(fun_reference_binding_setter_53);
LOCFOR(fun_reference_called_functionQ_54);
LOCFOR(fun_reference_called_functionQ_setter_55);
LOCFOR(fun_56);
LOCFOR(fun_reference_frame_number_57);
LOCFOR(fun_reference_frame_number_setter_58);
LOCFOR(fun_reference_frame_offset_59);
LOCFOR(fun_reference_frame_offset_setter_60);
LOCFOR(fun_boundQ_reference_61);
LOCFOR(fun_boundQ_reference_setter_62);
LOCFOR(fun_assignment_form_63);
LOCFOR(fun_assignment_form_setter_64);
LOCFOR(fun_assignment_reference_65);
LOCFOR(fun_assignment_reference_setter_66);
LOCFOR(fun_assignment_binding_67);
LOCFOR(fun_assignment_binding_setter_68);
LOCFOR(fun_signature_bindings_69);
LOCFOR(fun_signature_bindings_setter_70);
LOCFOR(fun_71);
LOCFOR(fun_signature_names_72);
LOCFOR(fun_signature_names_setter_73);
LOCFOR(fun_74);
LOCFOR(fun_signature_specs_75);
LOCFOR(fun_signature_specs_setter_76);
LOCFOR(fun_77);
LOCFOR(fun_signature_naryQ_78);
LOCFOR(fun_signature_naryQ_setter_79);
LOCFOR(fun_80);
LOCFOR(fun_signature_arity_81);
LOCFOR(fun_signature_arity_setter_82);
LOCFOR(fun_83);
LOCFOR(fun_signature_value_84);
LOCFOR(fun_signature_value_setter_85);
LOCFOR(fun_86);
LOCFOR(fun_function_binding_87);
LOCFOR(fun_function_binding_setter_88);
LOCFOR(fun_89);
LOCFOR(fun_function_debug_name_90);
LOCFOR(fun_function_debug_name_setter_91);
LOCFOR(fun_92);
LOCFOR(fun_function_signature_93);
LOCFOR(fun_function_signature_setter_94);
FUNFOR(Yx8rSastYfunction_bindings);
FUNFOR(Yx8rSastYfunction_specs);
FUNFOR(Yx8rSastYfunction_naryQ);
FUNFOR(Yx8rSastYfunction_value);
LOCFOR(fun_function_kind_99);
FUNFOR(Yx8rSastYfunction_display_name);
LOCFOR(fun_invalidate_dependent_101);
LOCFOR(fun_loop_102);
LOCFOR(fun_as_lst_103);
LOCFOR(fun_x_1426_104);
LOCFOR(fun_105);
LOCFOR(fun_106);
LOCFOR(fun_x_1430_107);
LOCFOR(fun_108);
LOCFOR(fun_109);
LOCFOR(fun_function_body_110);
LOCFOR(fun_function_body_setter_111);
LOCFOR(fun_112);
LOCFOR(fun_function_index_113);
LOCFOR(fun_function_index_setter_114);
LOCFOR(fun_115);
LOCFOR(fun_function_temporaries_116);
LOCFOR(fun_function_temporaries_setter_117);
LOCFOR(fun_118);
LOCFOR(fun_function_registers_119);
LOCFOR(fun_function_registers_setter_120);
LOCFOR(fun_121);
LOCFOR(fun_function_data_refs_122);
LOCFOR(fun_function_data_refs_setter_123);
LOCFOR(fun_124);
LOCFOR(fun_function_self_recursiveQ_125);
LOCFOR(fun_function_self_recursiveQ_setter_126);
LOCFOR(fun_127);
LOCFOR(fun_function_source_128);
LOCFOR(fun_function_source_setter_129);
LOCFOR(fun_130);
LOCFOR(fun_as_131);
LOCFOR(fun_as_132);
LOCFOR(fun_as_133);
FUNFOR(Yx8rSastYfree_environment);
LOCFOR(fun_empty_135);
LOCFOR(fun_function_free_136);
LOCFOR(fun_function_free_setter_137);
LOCFOR(fun_138);
LOCFOR(fun_function_kind_139);
LOCFOR(fun_function_kind_140);
LOCFOR(fun_function_kind_141);
LOCFOR(fun_alternative_condition_142);
LOCFOR(fun_alternative_condition_setter_143);
LOCFOR(fun_alternative_consequent_144);
LOCFOR(fun_alternative_consequent_setter_145);
LOCFOR(fun_alternative_alternant_146);
LOCFOR(fun_alternative_alternant_setter_147);
LOCFOR(fun_as_148);
LOCFOR(fun_as_149);
LOCFOR(fun_as_150);
FUNFOR(Yx8rSastYsequential);
LOCFOR(fun_empty_152);
LOCFOR(fun_constant_value_153);
LOCFOR(fun_constant_value_setter_154);
LOCFOR(fun_constant_index_155);
LOCFOR(fun_constant_index_setter_156);
LOCFOR(fun_application_arguments_157);
LOCFOR(fun_application_arguments_setter_158);
LOCFOR(fun_application_tailQ_159);
LOCFOR(fun_application_tailQ_setter_160);
LOCFOR(fun_161);
LOCFOR(fun_application_function_162);
LOCFOR(fun_application_function_setter_163);
LOCFOR(fun_application_knownQ_164);
LOCFOR(fun_application_knownQ_setter_165);
LOCFOR(fun_166);
LOCFOR(fun_application_next_methods_167);
LOCFOR(fun_application_next_methods_setter_168);
LOCFOR(fun_application_binding_169);
LOCFOR(fun_application_binding_setter_170);
LOCFOR(fun_fix_let_bindings_171);
LOCFOR(fun_fix_let_bindings_setter_172);
LOCFOR(fun_fix_let_types_173);
LOCFOR(fun_fix_let_types_setter_174);
LOCFOR(fun_fix_let_arguments_175);
LOCFOR(fun_fix_let_arguments_setter_176);
LOCFOR(fun_fix_let_body_177);
LOCFOR(fun_fix_let_body_setter_178);
LOCFOR(fun_as_179);
LOCFOR(fun_as_180);
LOCFOR(fun_as_181);
FUNFOR(Yx8rSastYfab_list);
LOCFOR(fun_empty_183);
LOCFOR(fun_as_184);
LOCFOR(fun_as_185);
LOCFOR(fun_as_186);
FUNFOR(Yx8rSastYarguments);
LOCFOR(fun_empty_188);
LOCFOR(fun_locals_bindings_189);
LOCFOR(fun_locals_bindings_setter_190);
LOCFOR(fun_locals_functions_191);
LOCFOR(fun_locals_functions_setter_192);
LOCFOR(fun_locals_body_193);
LOCFOR(fun_locals_body_setter_194);
LOCFOR(fun_bind_exit_main_fun_195);
LOCFOR(fun_bind_exit_main_fun_setter_196);
LOCFOR(fun_unwind_protect_protected_thunk_197);
LOCFOR(fun_unwind_protect_protected_thunk_setter_198);
LOCFOR(fun_unwind_protect_cleanup_thunk_199);
LOCFOR(fun_unwind_protect_cleanup_thunk_setter_200);
LOCFOR(fun_monitor_type_201);
LOCFOR(fun_monitor_type_setter_202);
LOCFOR(fun_monitor_info_203);
LOCFOR(fun_monitor_info_setter_204);
LOCFOR(fun_monitor_test_205);
LOCFOR(fun_monitor_test_setter_206);
LOCFOR(fun_monitor_handler_207);
LOCFOR(fun_monitor_handler_setter_208);
LOCFOR(fun_monitor_main_thunk_209);
LOCFOR(fun_monitor_main_thunk_setter_210);
LOCFOR(fun_environment_next_211);
LOCFOR(fun_environment_next_setter_212);
LOCFOR(fun_213);
LOCFOR(fun_environment_bindings_214);
LOCFOR(fun_environment_bindings_setter_215);
LOCFOR(fun_environment_module_216);
LOCFOR(fun_environment_module_setter_217);
LOCFOR(fun_environment_module_loader_218);
LOCFOR(fun_environment_module_loader_setter_219);
LOCFOR(fun_environment_uses_modules_220);
LOCFOR(fun_environment_uses_modules_setter_221);
LOCFOR(fun_222);
LOCFOR(fun_environment_allows_foreign_namesQ_223);
LOCFOR(fun_environment_allows_foreign_namesQ_setter_224);
LOCFOR(fun_225);
LOCFOR(fun_226);
LOCFOR(fun_227);
LOCFOR(fun_env_object_name_228);
LOCFOR(fun_objectify_229);
LOCFOR(fun_objectify_list_230);
LOCFOR(fun_objectify_list_231);
LOCFOR(fun_objectify_232);
LOCFOR(fun_objectify_233);
LOCFOR(fun_objectify_234);
LOCFOR(fun_objectify_235);
LOCFOR(fun_objectify_236);
LOCFOR(fun_objectify_quotation_237);
LOCFOR(fun_objectify_quotation_238);
LOCFOR(fun_objectify_quotation_239);
LOCFOR(fun_objectify_raw_240);
LOCFOR(fun_objectify_boundQ_241);
LOCFOR(fun_objectify_compile_time_242);
LOCFOR(fun_objectify_alternative_243);
LOCFOR(fun_loop_244);
LOCFOR(fun_sequentialize_245);
LOCFOR(fun_transform_defs_246);
LOCFOR(fun_loop_247);
LOCFOR(fun_objectify_sequential_248);
LOCFOR(fun_249);
LOCFOR(fun_objectify_application_250);
LOCFOR(fun_251);
LOCFOR(fun_objectify_application_252);
LOCFOR(fun_253);
LOCFOR(fun_objectify_application_254);
LOCFOR(fun_process_closed_application_255);
LOCFOR(fun_pack_nary_args_256);
LOCFOR(fun_gather_arguments_257);
LOCFOR(fun_process_nary_closed_application_258);
LOCFOR(fun_convert2arguments_259);
LOCFOR(fun_objectify_assignment_260);
LOCFOR(fun_objectify_assignment_261);
LOCFOR(fun_objectify_assignment_using_262);
LOCFOR(fun_objectify_assignment_using_263);
LOCFOR(fun_objectify_assignment_using_264);
FUNFOR(Yx8rSastYupdate_binding_kind);
LOCFOR(fun_ast_define_binding_266);
LOCFOR(fun_objectify_definition_267);
LOCFOR(fun_expand_268);
FUNFOR(YPPmacro);
LOCFOR(fun_objectify_syntax_definition_270);
LOCFOR(fun_objectify_function_definition_271);
FUNFOR(Yx8rSastYmodule_binding);
LOCFOR(fun_objectify_primitive_definition_273);
LOCFOR(fun_objectify_generic_definition_274);
LOCFOR(fun_objectify_method_definition_275);
LOCFOR(fun_276);
LOCFOR(fun_277);
LOCFOR(fun_278);
LOCFOR(fun_279);
LOCFOR(fun_objectify_function_source_280);
LOCFOR(fun_281);
LOCFOR(fun_282);
LOCFOR(fun_objectify_function_283);
LOCFOR(fun_col_284);
LOCFOR(fun_objectify_signature_285);
LOCFOR(fun_find_286);
LOCFOR(fun_loop_287);
LOCFOR(fun_compute_local_reference_offsets_288);
LOCFOR(fun_objectify_binding_289);
LOCFOR(fun_binding_reference_class_290);
LOCFOR(fun_objectify_binding_291);
LOCFOR(fun_objectify_binding_292);
LOCFOR(fun_default_type_293);
LOCFOR(fun_objectify_free_global_reference_294);
FUNFOR(Yx8rSastYforeign_nameQ);
LOCFOR(fun_objectify_foreign_reference_296);
LOCFOR(fun_objectify_symbol_297);
LOCFOR(fun_ftype_298);
LOCFOR(fun_as_299);
LOCFOR(fun_as_300);
LOCFOR(fun_as_301);
FUNFOR(Yx8rSastYfunctions);
LOCFOR(fun_empty_303);
LOCFOR(fun_304);
LOCFOR(fun_305);
LOCFOR(fun_objectify_locals_306);
LOCFOR(fun_objectify_bind_exit_307);
LOCFOR(fun_objectify_unwind_protect_308);
LOCFOR(fun_objectify_monitor_309);
LOCFOR(fun_310);
LOCFOR(fun_311);
LOCFOR(fun_312);
LOCFOR(fun_313);
LOCFOR(fun_314);
LOCFOR(fun_objectify_export_315);
FUNFOR(Yx8rSastYimport_globalX);
LOCFOR(fun_317);
LOCFOR(fun_objectify_useSexport_module_318);
LOCFOR(fun_319);
LOCFOR(fun_objectify_use_module_320);
LOCFOR(fun_expand_bind_list_321);
LOCFOR(fun_expand_bind_list_322);
LOCFOR(fun_expand_bind_list_323);
LOCFOR(fun_expand_bind_listT_324);
LOCFOR(fun_expand_bind_listT_325);
LOCFOR(fun_expand_bind_element_326);
LOCFOR(fun_expand_bind_element_327);
LOCFOR(fun_expand_pattern_328);
LOCFOR(fun_329);
LOCFOR(fun_expand_syntax_if_330);
LOCFOR(fun_r_extendT_331);
LOCFOR(fun_insert_globalX_332);
LOCFOR(fun_333);
LOCFOR(fun_insert_globalsX_334);
LOCFOR(fun_find_static_global_environment_335);
LOCFOR(fun_find_static_global_environment_336);
LOCFOR(fun_find_syntax_environment_337);
LOCFOR(fun_find_environment_module_338);
LOCFOR(fun_loop_339);
LOCFOR(fun_find_binding_340);
LOCFOR(fun_find_binding_341);
LOCFOR(fun_find_binding_342);
LOCFOR(fun_frame_bindings_343);
LOCFOR(fun_register_magic_binding_344);
LOCFOR(fun_magic_bindings_345);
LOCFOR(fun_x_1443_346);
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
LOCFOR(fun_pairize_369);
LOCFOR(fun_370);
LOCFOR(fun_371);
LOCFOR(fun_372);
LOCFOR(fun_373);
LOCFOR(fun_374);
LOCFOR(fun_375);
LOCFOR(fun_376);
LOCFOR(fun_ast_macro_expand_377);
LOCFOR(fun_378);
LOCFOR(fun_379);
LOCFOR(fun_380);
LOCFOR(fun_381);
LOCFOR(fun_382);
LOCFOR(fun_transaction_implemented_bindings_383);
LOCFOR(fun_transaction_implemented_bindings_setter_384);
LOCFOR(fun_385);
LOCFOR(fun_transaction_dependents_386);
LOCFOR(fun_transaction_dependents_setter_387);
LOCFOR(fun_388);
FUNFOR(Yx8rSastYtransaction_register_implemented_binding);
FUNFOR(Yx8rSastYtransaction_register_dependent);
FUNFOR(Yx8rSastYtransaction_emptyQ);
LOCFOR(fun_392);
LOCFOR(fun_393);
FUNFOR(Yx8rSastYmerge_transactionsX);
LOCFOR(fun_395);
LOCFOR(fun_396);
FUNFOR(Yx8rSastYroll_back_transaction);
LOCFOR(fun_398);
LOCFOR(fun_399);
FUNFOR(Yx8rSastYcall_with_subtransaction);
LOCFOR(fun_x_1447_401);
LOCFOR(fun_402);
LOCFOR(fun_403);
LOCFOR(fun_404);
FUNFOR(Yx8rSastYobjectify_with_subtransaction);
LOCFOR(fun_module_loader_modules_406);
LOCFOR(fun_module_loader_modules_setter_407);
LOCFOR(fun_408);
LOCFOR(fun_module_loader_stack_409);
LOCFOR(fun_module_loader_stack_setter_410);
LOCFOR(fun_411);
LOCFOR(fun_module_name_412);
LOCFOR(fun_module_name_setter_413);
LOCFOR(fun_module_target_environment_414);
LOCFOR(fun_module_target_environment_setter_415);
LOCFOR(fun_module_syntax_environment_416);
LOCFOR(fun_module_syntax_environment_setter_417);
LOCFOR(fun_Pmodule_exports_418);
LOCFOR(fun_Pmodule_exports_setter_419);
LOCFOR(fun_420);
LOCFOR(fun_module_data_processedQ_421);
LOCFOR(fun_module_data_processedQ_setter_422);
LOCFOR(fun_423);
LOCFOR(fun_module_runtime_data_424);
LOCFOR(fun_module_runtime_data_setter_425);
LOCFOR(fun_426);
LOCFOR(fun_module_transaction_427);
LOCFOR(fun_module_transaction_setter_428);
LOCFOR(fun_429);
LOCFOR(fun_module_exports_430);
FUNFOR(Yx8rSastYset_module_environments);
LOCFOR(fun_432);
FUNFOR(Yx8rSastYdo_module_loader_modules);
LOCFOR(fun_module_loader_module_type_434);
FUNFOR(Yx8rSastYregister_moduleX);
FUNFOR(Yx8rSastYprobe_module);
LOCFOR(fun_437);
LOCFOR(fun_438);
FUNFOR(Yx8rSastYload_and_register_module);
FUNFOR(Yx8rSastYexport_bindingX);
FUNFOR(Yx8rSastYbinding_native_toQ);
LOCFOR(fun_442);
FUNFOR(Yx8rSastYreport_undefined_global_bindings);
LOCFOR(fun_444);
LOCFOR(fun_445);
LOCFOR(fun_add_user_446);
LOCFOR(fun_447);
FUNFOR(Yx8rSastYcompute_transitive_users);
FUNFOR(Yx8rSastYremove_module_internalX);
LOCFOR(fun_450);
FUNFOR(Yx8rSastYremove_modules_by_nameX);
FUNFOR(Yx8rSastYmodule_name_to_relpath);
LOCFOR(fun_453);
FUNFOR(Yx8rSastYinstall_initial_bindings);
FUNFOR(Yx8rSastYfab_static_global_environment);
LOCFOR(fun_456);
FUNFOR(Yx8rSastYfab_subset_environment);
LOCFOR(fun_458);
LOCFOR(fun_459);
LOCFOR(fun_460);
LOCFOR(fun_461);
LOCFOR(fun_load_module_462);
FUNFOR(Yx8rSastYruntime_module_loader);
FUNFOR(Yx8rSastYruntime_module);
FUNFOR(Yx8rSastYruntime_environment);
FUNFOR(Yx8rSastYruntime_core_environment);
FUNFOR(Yx8rSastYunchecked_runtime_environment);
FUNFOR(Yx8rSastYreloader_do_create_module);
FUNFOR(Yx8rSastYreloader_do_use_module);
FUNFOR(Yx8rSastYreloader_do_import);
FUNFOR(Yx8rSastYprocess_module_data);
FUNFOR(Yx8rSastYensure_module_data);
FUNFOR(Yx8rSastYreloader_do_runtime_binding);
FUNFOR(Yx8rSastYreloader_do_other_binding);
FUNFOR(Yx8rSastYreloader_do_export);
FUNFOR(Yx8rSastYreload_modules);
LOCFOR(fun_477);
FUNFOR(Yx8rSastYinstall_magic_bindings);
FUNFOR(Yx8rSastYreload_macros);
FUNFOR(Yx8rSastYinstall_interpreter_hacks);
FUNFOR(Yx8rSastYinit_runtime);
FUNFOR(Yx8rSastYfab_syntax_environment);
FUNFOR(Yx8rSastYfab_g2c_module);
FUNFOR(Yx8rSastYinit_g2c_boot_environment);
FUNFOR(Yx8rSastYinit_g2c_regular_environment);
FUNFOR(Yx8rSastYinit_ast);
LOCFOR(fun_loop_487);
FUNFOR(Yx8rSastYdo_static_global_bindings);
LOCFOR(fun_loop_489);
FUNFOR(Yx8rSastYdo_named_static_global_bindings);
extern P Yx8rSastY___main_0___ ();
extern P Yx8rSastY___main_1___ ();
extern P Yx8rSastY___main_2___ ();
extern P Yx8rSastY___main_3___ ();
extern P Yx8rSastY___main_4___ ();
extern P Yx8rSastY___main_5___ ();
extern P Yx8rSastY___main_6___ ();
extern P Yx8rSastY___main_7___ ();
extern P Yx8rSastY___main_8___ ();
extern P Yx8rSastY___main_9___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_x_1422_0) {
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

FUNCODEDEF(fun_1) {
  P return_;
  P saved_dependentF1603;
  P x_1421F1602;
  P x_1421F1601;
  P x_1421F1600;
  P bodyF1599;
  P dependentF1598;
  P x_1421F1597;
  P x_1422F1596;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1422_0,1);
  x_1422F1596 = T1;
  FUNINIT(x_1422F1596, 1,return_);
  x_1421F1597 = FREEREF(0);
  dependentF1598 = YPfalse;
  dependentF1598 = BOXFAB(dependentF1598);
  bodyF1599 = YPfalse;
  bodyF1599 = BOXFAB(bodyF1599);
  T7 = CALL2(1,VARREF(YisaQ),x_1421F1597,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1421F1597,LITREF(lit_6),x_1422F1596);
    x_1421F1600 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1421F1600,x_1422F1596);
    BOXVAL(dependentF1598) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1421F1600);
    x_1421F1601 = T12;
    BOXVAL(bodyF1599) = x_1421F1601;
    x_1421F1602 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1421F1602,x_1422F1596);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1422F1596,LITREF(lit_7),x_1421F1597);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  saved_dependentF1603 = T17;
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T24 = CALL1(1,VARREF(Ylst),saved_dependentF1603);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,Ynil);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T21 = CALL2(1,VARREF(YgooSmacrosYcat),T22,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T31 = BOXVAL(dependentF1598);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T27 = CALL4(1,VARREF(YgooSmacrosYcat),T28,T29,T30,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T38 = BOXVAL(bodyF1599);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T43 = CALL1(1,VARREF(Ylst),saved_dependentF1603);
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T43,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T39,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T18 = CALLN(1,VARREF(YgooSmacrosYcat),5,T19,T20,T26,T32,Ynil);
  T16 = T18;
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_1,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_error_3) {
  P message_,arguments_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
loop:
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(Yerror),YPfalse,message_,arguments_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_type_4) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYprogram_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_type_setter_5) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYprogram_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_register_6) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYprogram_register));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_register_setter_7) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYprogram_register));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_8) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_program_register_9) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYprogram_register));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_register_setter_10) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYprogram_register));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_name_12) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYbinding_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_name_setter_13) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYbinding_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_type_14) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYbinding_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_type_setter_15) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYbinding_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_inferred_type_16) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYbinding_inferred_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_inferred_type_setter_17) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYbinding_inferred_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_18) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Yx8rSastYast_LbotG));
}

FUNCODEDEF(fun_global_box_value_19) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYglobal_box_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_global_box_value_setter_20) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYglobal_box_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_21) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_binding_kind_22) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYbinding_kind));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_kind_setter_23) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYbinding_kind));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_40));
}

FUNCODEDEF(fun_binding_module_name_25) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYbinding_module_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_module_name_setter_26) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYbinding_module_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_freeQ_27) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYbinding_freeQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_freeQ_setter_28) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYbinding_freeQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_info_30) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYbinding_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_info_setter_31) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYbinding_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(Yx8rSastYmaybe_log_dependency) {
  P dependable_,dtype_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(dtype_, 1);
loop:
  if (VARREF(Yx8rSastYTcurrent_dependentT) != YPfalse) {
    CALL3(1,VARREF(Yx8rSdependencyYlog_dependency),dependable_,VARREF(Yx8rSastYTcurrent_dependentT),dtype_);
    T1 = CALL1(1,VARREF(Yx8rSastYtransaction_register_dependent),VARREF(Yx8rSastYTcurrent_dependentT));
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYmacro_expander) {
  P macro_binding_;
  P T0;
  P a1;
LINK_STACK();
  ARG(macro_binding_, 0);
loop:
  CALL2(1,VARREF(Yx8rSastYmaybe_log_dependency),macro_binding_,VARREF(Yx8rSdependencyYDexpansion_parse_dependency));
  T0 = CALL1(1,VARREF(Yx8rSastYbinding_handler),macro_binding_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_binding_value_35) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYbinding_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_value_setter_36) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYbinding_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_mutableQ_38) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYbinding_mutableQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_mutableQ_setter_39) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYbinding_mutableQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_40) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_dynamic_extentQ_41) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYbinding_dynamic_extentQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_dynamic_extentQ_setter_42) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYbinding_dynamic_extentQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_binding_dottedQ_44) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYbinding_dottedQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_dottedQ_setter_45) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYbinding_dottedQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_46) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_index_47) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_setter_48) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_compile_time_program_50) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYcompile_time_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compile_time_program_setter_51) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYcompile_time_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_binding_52) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYreference_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_binding_setter_53) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYreference_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_called_functionQ_54) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYreference_called_functionQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_called_functionQ_setter_55) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYreference_called_functionQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_56) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_reference_frame_number_57) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYreference_frame_number));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_frame_number_setter_58) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYreference_frame_number));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_frame_offset_59) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYreference_frame_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_frame_offset_setter_60) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYreference_frame_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_boundQ_reference_61) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYboundQ_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_boundQ_reference_setter_62) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYboundQ_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_form_63) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYassignment_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_form_setter_64) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYassignment_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_reference_65) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYassignment_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_reference_setter_66) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYassignment_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_binding_67) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYassignment_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_binding_setter_68) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYassignment_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_bindings_69) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYsignature_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_bindings_setter_70) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYsignature_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_signature_names_72) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYsignature_names));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_names_setter_73) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYsignature_names));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_74) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_signature_specs_75) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYsignature_specs));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_specs_setter_76) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYsignature_specs));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_77) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_signature_naryQ_78) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYsignature_naryQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_naryQ_setter_79) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYsignature_naryQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_80) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_signature_arity_81) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYsignature_arity));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_arity_setter_82) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYsignature_arity));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_83) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_signature_value_84) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYsignature_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_value_setter_85) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYsignature_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_86) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_binding_87) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYfunction_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_binding_setter_88) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYfunction_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_89) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_debug_name_90) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYfunction_debug_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_debug_name_setter_91) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYfunction_debug_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_92) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_signature_93) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYfunction_signature));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_signature_setter_94) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYfunction_signature));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYfunction_bindings) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_signature),x_);
  T0 = CALL1(1,VARREF(Yx8rSastYsignature_bindings),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYfunction_specs) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_signature),x_);
  T0 = CALL1(1,VARREF(Yx8rSastYsignature_specs),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYfunction_naryQ) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYfunction_signature),x_);
  T1 = CALL1(1,VARREF(Yx8rSastYsignature_naryQ),T2);
  T0 = CALL1(1,VARREF(Yx8rSastYconstant_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYfunction_value) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_signature),x_);
  T0 = CALL1(1,VARREF(Yx8rSastYsignature_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_kind_99) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_126));
}

FUNCODEDEF(Yx8rSastYfunction_display_name) {
  P f_;
  P bF1604;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(f_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_binding),f_);
  bF1604 = T1;
  if (bF1604 != YPfalse) {
    T4 = CALL1(1,VARREF(Yx8rSastYbinding_module_name),bF1604);
    T5 = CALL1(1,VARREF(Yx8rSastYbinding_name),bF1604);
    T3 = CALL3(1,VARREF(YgooSruntimeYformat_to_string),LITREF(lit_129),T4,T5);
    T2 = T3;
  } else {
    T2 = LITREF(lit_130);
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_invalidate_dependent_101) {
  P dependent_,dependable_,dtype_;
  P nameF1605;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(dependable_, 1);
  ARG(dtype_, 2);
loop:
  CALL1(1,VARREF(Yx8rSdependencyYdetach_dependent),dependent_);
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_display_name),dependent_);
  nameF1605 = T1;
  T3 = CALL2(1,VARREF(Yx8rSdependencyYdependency_includes_anyQ),dtype_,VARREF(Yx8rSdependencyYDparse_dependencies));
  if (T3 != YPfalse) {
    T4 = CALL3(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_133),nameF1605);
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(Yx8rSdependencyYdependency_includes_anyQ),dtype_,VARREF(Yx8rSdependencyYDoptimizaton_dependencies));
    if (T6 != YPfalse) {
      T7 = CALL3(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_134),nameF1605);
      T5 = T7;
    } else {
      if (YPtrue != YPfalse) {
        T9 = CALL3(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_135),nameF1605);
        T8 = T9;
      } else {
        T8 = YPfalse;
      }
      T5 = T8;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_102) {
  P res_,e_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),e_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),e_);
    T4 = CALL2(1,VARREF(YgooSmacrosYpair),T5,res_);
    T6 = CALL1(1,VARREF(Ytail),e_);
    a1 = T4;
    a2 = T6;
    res_ = a1;
    e_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_lst_103) {
  P e_;
  P loopF1606;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_102,1);
  loopF1606 = T1;
  FUNINIT(loopF1606, 1,loopF1606);
  T2 = CALL2(0,loopF1606,Ynil,e_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1426_104) {
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

FUNCODEDEF(fun_105) {
  P return_;
  P DemptyF1617;
  P classF1616;
  P x_1425F1615;
  P x_1425F1614;
  P x_1425F1613;
  P x_1425F1612;
  P x_1425F1611;
  P supersF1610;
  P nameF1609;
  P x_1425F1608;
  P x_1426F1607;
  P T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129;
  P T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113;
  P T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97;
  P T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81;
  P T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65;
  P T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49;
  P T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1426_104,1);
  x_1426F1607 = T1;
  FUNINIT(x_1426F1607, 1,return_);
  x_1425F1608 = FREEREF(0);
  nameF1609 = YPfalse;
  nameF1609 = BOXFAB(nameF1609);
  supersF1610 = YPfalse;
  supersF1610 = BOXFAB(supersF1610);
  T7 = CALL2(1,VARREF(YisaQ),x_1425F1608,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1425F1608,LITREF(lit_142),x_1426F1607);
    x_1425F1611 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1425F1611,x_1426F1607);
    BOXVAL(nameF1609) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1425F1611);
    x_1425F1612 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1425F1612,x_1426F1607);
    x_1425F1613 = T14;
    BOXVAL(supersF1610) = x_1425F1613;
    x_1425F1614 = Ynil;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1425F1614,x_1426F1607);
    T15 = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1425F1612);
    x_1425F1615 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1425F1615,x_1426F1607);
    T13 = T18;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1426F1607,LITREF(lit_7),x_1425F1608);
  }
  T22 = BOXVAL(nameF1609);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_143),T22,LITREF(lit_144));
  classF1616 = T21;
  T25 = BOXVAL(nameF1609);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_145),T25,LITREF(lit_146));
  DemptyF1617 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_147));
  T31 = CALL1(1,VARREF(Ylst),classF1616);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_148));
  T35 = BOXVAL(supersF1610);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T32,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_149));
  T39 = CALL1(1,VARREF(Ylst),DemptyF1617);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
  T43 = CALL1(1,VARREF(Ylst),classF1616);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),T38,T39,T40,Ynil);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
  T56 = CALL1(1,VARREF(Ylst),classF1616);
  T54 = CALL3(1,VARREF(YgooSmacrosYcat),T55,T56,Ynil);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_24));
  T60 = CALL1(1,VARREF(Ylst),classF1616);
  T58 = CALL3(1,VARREF(YgooSmacrosYcat),T59,T60,Ynil);
  T57 = CALL1(1,VARREF(Ylst),T58);
  T61 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_148));
  T49 = CALLN(1,VARREF(YgooSmacrosYcat),5,T50,T57,T61,T62,Ynil);
  T48 = CALL1(1,VARREF(Ylst),T49);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_24));
  T45 = CALLN(1,VARREF(YgooSmacrosYcat),5,T46,T47,T48,T63,Ynil);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T66 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T72 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
  T75 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
  T76 = CALL1(1,VARREF(Ylst),LITREF(lit_148));
  T74 = CALL3(1,VARREF(YgooSmacrosYcat),T75,T76,Ynil);
  T73 = CALL1(1,VARREF(Ylst),T74);
  T71 = CALL3(1,VARREF(YgooSmacrosYcat),T72,T73,Ynil);
  T70 = CALL1(1,VARREF(Ylst),T71);
  T79 = CALL1(1,VARREF(Ylst),LITREF(lit_24));
  T80 = CALL1(1,VARREF(Ylst),classF1616);
  T78 = CALL3(1,VARREF(YgooSmacrosYcat),T79,T80,Ynil);
  T77 = CALL1(1,VARREF(Ylst),T78);
  T81 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
  T82 = CALL1(1,VARREF(Ylst),LITREF(lit_148));
  T69 = CALLN(1,VARREF(YgooSmacrosYcat),5,T70,T77,T81,T82,Ynil);
  T68 = CALL1(1,VARREF(Ylst),T69);
  T85 = CALL1(1,VARREF(Ylst),LITREF(lit_137));
  T86 = CALL1(1,VARREF(Ylst),LITREF(lit_24));
  T84 = CALL3(1,VARREF(YgooSmacrosYcat),T85,T86,Ynil);
  T83 = CALL1(1,VARREF(Ylst),T84);
  T65 = CALLN(1,VARREF(YgooSmacrosYcat),5,T66,T67,T68,T83,Ynil);
  T64 = CALL1(1,VARREF(Ylst),T65);
  T89 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T90 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T95 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
  T98 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
  T99 = CALL1(1,VARREF(Ylst),classF1616);
  T97 = CALL3(1,VARREF(YgooSmacrosYcat),T98,T99,Ynil);
  T96 = CALL1(1,VARREF(Ylst),T97);
  T94 = CALL3(1,VARREF(YgooSmacrosYcat),T95,T96,Ynil);
  T93 = CALL1(1,VARREF(Ylst),T94);
  T102 = CALL1(1,VARREF(Ylst),LITREF(lit_24));
  T103 = CALL1(1,VARREF(Ylst),LITREF(lit_148));
  T101 = CALL3(1,VARREF(YgooSmacrosYcat),T102,T103,Ynil);
  T100 = CALL1(1,VARREF(Ylst),T101);
  T104 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
  T105 = CALL1(1,VARREF(Ylst),LITREF(lit_148));
  T92 = CALLN(1,VARREF(YgooSmacrosYcat),5,T93,T100,T104,T105,Ynil);
  T91 = CALL1(1,VARREF(Ylst),T92);
  T108 = CALL1(1,VARREF(Ylst),LITREF(lit_156));
  T109 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T110 = CALL1(1,VARREF(Ylst),classF1616);
  T111 = CALL1(1,VARREF(Ylst),LITREF(lit_24));
  T107 = CALLN(1,VARREF(YgooSmacrosYcat),5,T108,T109,T110,T111,Ynil);
  T106 = CALL1(1,VARREF(Ylst),T107);
  T88 = CALLN(1,VARREF(YgooSmacrosYcat),5,T89,T90,T91,T106,Ynil);
  T87 = CALL1(1,VARREF(Ylst),T88);
  T114 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
  T116 = BOXVAL(nameF1609);
  T115 = CALL1(1,VARREF(Ylst),T116);
  T119 = CALL1(1,VARREF(Ylst),LITREF(lit_159));
  T120 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
  T118 = CALL3(1,VARREF(YgooSmacrosYcat),T119,T120,Ynil);
  T117 = CALL1(1,VARREF(Ylst),T118);
  T123 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
  T124 = CALL1(1,VARREF(Ylst),classF1616);
  T125 = CALL1(1,VARREF(Ylst),LITREF(lit_161));
  T126 = CALL1(1,VARREF(Ylst),LITREF(lit_159));
  T127 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
  T128 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
  T122 = CALLN(1,VARREF(YgooSmacrosYcat),7,T123,T124,T125,T126,T127,T128,Ynil);
  T121 = CALL1(1,VARREF(Ylst),T122);
  T113 = CALLN(1,VARREF(YgooSmacrosYcat),5,T114,T115,T117,T121,Ynil);
  T112 = CALL1(1,VARREF(Ylst),T113);
  T131 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T132 = CALL1(1,VARREF(Ylst),LITREF(lit_163));
  T137 = CALL1(1,VARREF(Ylst),LITREF(lit_138));
  T140 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
  T141 = CALL1(1,VARREF(Ylst),classF1616);
  T139 = CALL3(1,VARREF(YgooSmacrosYcat),T140,T141,Ynil);
  T138 = CALL1(1,VARREF(Ylst),T139);
  T136 = CALL3(1,VARREF(YgooSmacrosYcat),T137,T138,Ynil);
  T135 = CALL1(1,VARREF(Ylst),T136);
  T142 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
  T143 = CALL1(1,VARREF(Ylst),classF1616);
  T134 = CALL4(1,VARREF(YgooSmacrosYcat),T135,T142,T143,Ynil);
  T133 = CALL1(1,VARREF(Ylst),T134);
  T144 = CALL1(1,VARREF(Ylst),DemptyF1617);
  T130 = CALLN(1,VARREF(YgooSmacrosYcat),5,T131,T132,T133,T144,Ynil);
  T129 = CALL1(1,VARREF(Ylst),T130);
  T26 = CALLN(1,VARREF(YgooSmacrosYcat),9,T27,T28,T36,T44,T64,T87,T112,T129,Ynil);
  T23 = T26;
  T20 = T23;
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_106) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_105,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1430_107) {
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

FUNCODEDEF(fun_108) {
  P return_;
  P x_1429F1622;
  P x_1429F1621;
  P nameF1620;
  P x_1429F1619;
  P x_1430F1618;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1430_107,1);
  x_1430F1618 = T1;
  FUNINIT(x_1430F1618, 1,return_);
  x_1429F1619 = FREEREF(0);
  nameF1620 = YPfalse;
  nameF1620 = BOXFAB(nameF1620);
  T5 = CALL2(1,VARREF(YisaQ),x_1429F1619,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1429F1619,LITREF(lit_165),x_1430F1618);
    x_1429F1621 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1429F1621,x_1430F1618);
    BOXVAL(nameF1620) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1429F1621);
    x_1429F1622 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1429F1622,x_1430F1618);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1430F1618,LITREF(lit_7),x_1429F1619);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_142));
  T16 = BOXVAL(nameF1620);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_136));
  T18 = CALL2(1,VARREF(YgooSmacrosYcat),T19,Ynil);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T17,Ynil);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_109) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_108,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_body_110) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYfunction_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_body_setter_111) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYfunction_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_112) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_index_113) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYfunction_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_index_setter_114) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYfunction_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_115) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_function_temporaries_116) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYfunction_temporaries));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_temporaries_setter_117) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYfunction_temporaries));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_118) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_function_registers_119) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYfunction_registers));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_registers_setter_120) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYfunction_registers));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_121) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_function_data_refs_122) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYfunction_data_refs));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_data_refs_setter_123) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYfunction_data_refs));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_124) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_function_self_recursiveQ_125) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYfunction_self_recursiveQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_self_recursiveQ_setter_126) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYfunction_self_recursiveQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_127) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_source_128) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYfunction_source));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_source_setter_129) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYfunction_source));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_130) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_as_131) {
  P p_,x_;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(x_, 1);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_as_132) {
  P p_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYas_lst),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_133) {
  P p_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmathYfabs),YPfalse,VARREF(Yx8rSastYLfree_environmentG),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSastYfree_environment) {
  P h_,t_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
loop:
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLfree_environmentG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_empty_135) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(Yx8rSastYDfree_environment_empty));
}

FUNCODEDEF(fun_function_free_136) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYfunction_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_free_setter_137) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYfunction_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_138) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(Yx8rSastYLfree_environmentG));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_kind_139) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_186));
}

FUNCODEDEF(fun_function_kind_140) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_188));
}

FUNCODEDEF(fun_function_kind_141) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_190));
}

FUNCODEDEF(fun_alternative_condition_142) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYalternative_condition));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alternative_condition_setter_143) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYalternative_condition));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alternative_consequent_144) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYalternative_consequent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alternative_consequent_setter_145) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYalternative_consequent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alternative_alternant_146) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYalternative_alternant));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alternative_alternant_setter_147) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYalternative_alternant));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_148) {
  P p_,x_;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(x_, 1);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_as_149) {
  P p_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYas_lst),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_150) {
  P p_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmathYfabs),YPfalse,VARREF(Yx8rSastYLsequentialG),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSastYsequential) {
  P h_,t_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
loop:
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLsequentialG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_empty_152) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(Yx8rSastYDsequential_empty));
}

FUNCODEDEF(fun_constant_value_153) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYconstant_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_constant_value_setter_154) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYconstant_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_constant_index_155) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYconstant_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_constant_index_setter_156) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYconstant_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_arguments_157) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYapplication_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_arguments_setter_158) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYapplication_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_tailQ_159) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYapplication_tailQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_tailQ_setter_160) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYapplication_tailQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_161) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_application_function_162) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYapplication_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_function_setter_163) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYapplication_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_knownQ_164) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYapplication_knownQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_knownQ_setter_165) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYapplication_knownQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_166) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_application_next_methods_167) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYapplication_next_methods));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_next_methods_setter_168) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYapplication_next_methods));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_binding_169) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYapplication_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_binding_setter_170) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYapplication_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_bindings_171) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYfix_let_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_bindings_setter_172) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYfix_let_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_types_173) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYfix_let_types));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_types_setter_174) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYfix_let_types));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_arguments_175) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYfix_let_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_arguments_setter_176) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYfix_let_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_body_177) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYfix_let_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_body_setter_178) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYfix_let_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_179) {
  P p_,x_;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(x_, 1);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_as_180) {
  P p_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYas_lst),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_181) {
  P p_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmathYfabs),YPfalse,VARREF(Yx8rSastYLfab_listG),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSastYfab_list) {
  P h_,t_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
loop:
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLfab_listG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_empty_183) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(Yx8rSastYDfab_list_empty));
}

FUNCODEDEF(fun_as_184) {
  P p_,x_;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(x_, 1);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_as_185) {
  P p_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYas_lst),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_186) {
  P p_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmathYfabs),YPfalse,VARREF(Yx8rSastYLargumentsG),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSastYarguments) {
  P h_,t_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
loop:
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLargumentsG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_empty_188) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(Yx8rSastYDarguments_empty));
}

FUNCODEDEF(fun_locals_bindings_189) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYlocals_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_locals_bindings_setter_190) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYlocals_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_locals_functions_191) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYlocals_functions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_locals_functions_setter_192) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYlocals_functions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_locals_body_193) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYlocals_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_locals_body_setter_194) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYlocals_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bind_exit_main_fun_195) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYbind_exit_main_fun));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bind_exit_main_fun_setter_196) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYbind_exit_main_fun));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unwind_protect_protected_thunk_197) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYunwind_protect_protected_thunk));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unwind_protect_protected_thunk_setter_198) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYunwind_protect_protected_thunk));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unwind_protect_cleanup_thunk_199) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYunwind_protect_cleanup_thunk));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unwind_protect_cleanup_thunk_setter_200) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYunwind_protect_cleanup_thunk));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_type_201) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYmonitor_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_type_setter_202) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYmonitor_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_info_203) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYmonitor_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_info_setter_204) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYmonitor_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_test_205) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYmonitor_test));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_test_setter_206) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYmonitor_test));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_handler_207) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYmonitor_handler));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_handler_setter_208) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYmonitor_handler));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_main_thunk_209) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYmonitor_main_thunk));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_monitor_main_thunk_setter_210) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYmonitor_main_thunk));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_next_211) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYenvironment_next));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_next_setter_212) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYenvironment_next));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_213) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_environment_bindings_214) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYenvironment_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_bindings_setter_215) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYenvironment_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_module_216) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYenvironment_module));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_module_setter_217) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYenvironment_module));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_module_loader_218) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYenvironment_module_loader));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_module_loader_setter_219) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYenvironment_module_loader));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_uses_modules_220) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYenvironment_uses_modules));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_uses_modules_setter_221) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYenvironment_uses_modules));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_222) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_allows_foreign_namesQ_223) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYenvironment_allows_foreign_namesQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_allows_foreign_namesQ_setter_224) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYenvironment_allows_foreign_namesQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_225) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_226) {
  P binding_;
  P tmpF1624;
  P tmpF1623;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T3 = CALL1(1,VARREF(Yx8rSastYbinding_kind),binding_);
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),T3,LITREF(lit_40));
  tmpF1623 = T2;
  if (tmpF1623 != YPfalse) {
    T6 = CALL1(1,VARREF(Yx8rSastYbinding_global_box),binding_);
    tmpF1624 = T6;
    if (tmpF1624 != YPfalse) {
      T10 = CALL1(1,VARREF(Yx8rSastYbinding_global_box),binding_);
      T9 = CALL1(1,VARREF(Yx8rSastYglobal_box_value),T10);
      T8 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),T9);
      T7 = T8;
    } else {
      T7 = YPfalse;
    }
    T5 = T7;
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T12 = CALL1(1,VARREF(Yx8rSastYbinding_name),binding_);
    T11 = CALL1(1,FREEREF(1),T12);
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_227) {
  P return_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T0 = FUNFAB(fun_226,2,FREEREF(0),return_);
  T1 = CALL1(1,VARREF(Yx8rSastYruntime_environment),LITREF(lit_0));
  CALL2(1,VARREF(Yx8rSastYdo_static_global_bindings),T0,T1);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_env_object_name_228) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNFAB(fun_227,1,x_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_229) {
  P e_,r_,tailQ_;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL2(1,VARREF(YisaQ),e_,VARREF(Yx8rSastYLprogramG));
  if (T1 != YPfalse) {
    T0 = e_;
  } else {
    T4 = CALL1(1,VARREF(Yhead),e_);
    T3 = CALL3(1,VARREF(Yx8rSastYobjectify),T4,r_,YPfalse);
    T2 = CALL4(1,VARREF(Yx8rSastYobjectify_list),T3,e_,r_,tailQ_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_list_230) {
  P f_,e_,r_,tailQ_;
  P T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(Ytail),e_);
  T0 = CALL4(1,VARREF(Yx8rSastYobjectify_application),f_,T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_list_231) {
  P f_,e_,r_,tailQ_;
  P x_1432F1626;
  P x_1431F1625;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_kind),f_);
  x_1431F1625 = T1;
  x_1432F1626 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1432F1626,x_1431F1625,LITREF(lit_283));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yx8rSastYbinding_handler),f_);
    T5 = CALL3(1,T6,e_,r_,tailQ_);
    T3 = T5;
  } else {
    T8 = CALL2(1,x_1432F1626,x_1431F1625,LITREF(lit_284));
    if (T8 != YPfalse) {
      T11 = CALL1(1,VARREF(Yx8rSastYmacro_expander),f_);
      T10 = CALL3(1,T11,e_,r_,tailQ_);
      T9 = CALL3(1,VARREF(Yx8rSastYobjectify),T10,r_,tailQ_);
      T7 = T9;
    } else {
      T12 = CALL2(1,VARREF(Yerror),LITREF(lit_285),f_);
      T7 = T12;
    }
    T3 = T7;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_232) {
  P e_,r_,tailQ_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T0 = CALL2(1,VARREF(Yx8rSastYobjectify_symbol),e_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_233) {
  P e_,r_,tailQ_;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
UNLINK_STACK();
  QRET(e_);
}

FUNCODEDEF(fun_objectify_234) {
  P e_,r_,tailQ_;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
UNLINK_STACK();
  QRET(e_);
}

FUNCODEDEF(fun_objectify_235) {
  P e_,r_,tailQ_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T0 = CALL2(1,VARREF(Yx8rSastYobjectify_quotation),e_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_236) {
  P e_,r_,tailQ_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T0 = CALL2(1,VARREF(Yx8rSastYobjectify_quotation),e_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_quotation_237) {
  P value_,r_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLconstantG),VARREF(Yx8rSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_quotation_238) {
  P value_,r_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLimmediate_constantG),VARREF(Yx8rSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_quotation_239) {
  P value_,r_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLimmediate_constantG),VARREF(Yx8rSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_raw_240) {
  P value_,r_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLraw_constantG),VARREF(Yx8rSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_boundQ_241) {
  P e_,r_,tailQ_;
  P refF1627;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL2(1,VARREF(Yx8rSastYobjectify_symbol),e_,r_);
  refF1627 = T1;
  T2 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLboundQG),VARREF(Yx8rSastYboundQ_reference),refF1627);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_compile_time_242) {
  P program_,r_,tailQ_,rtQ_;
  P tmpF1632;
  P astF1631;
  P target_envF1630;
  P syntax_envF1629;
  P modF1628;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(program_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  ARG(rtQ_, 3);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfind_environment_module),r_);
  modF1628 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYmodule_syntax_environment),modF1628);
  syntax_envF1629 = T3;
  T5 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),modF1628);
  target_envF1630 = T5;
  T7 = CALL3(1,VARREF(Yx8rSastYobjectify),program_,syntax_envF1629,tailQ_);
  astF1631 = T7;
  CALL1(1,VARREF(Yx8rSastYast_evaluate),astF1631);
  tmpF1632 = rtQ_;
  if (tmpF1632 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmathYNEE),syntax_envF1629,target_envF1630);
    T10 = T11;
  } else {
    T10 = YPfalse;
  }
  T9 = T10;
  if (T9 != YPfalse) {
    T12 = CALL3(1,VARREF(Yx8rSastYobjectify),program_,r_,tailQ_);
    T8 = T12;
  } else {
    T13 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLconstantG),VARREF(Yx8rSastYconstant_value),YPfalse);
    T8 = T13;
  }
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_alternative_243) {
  P t_,c_,a_,r_,tailQ_;
  P T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(t_, 0);
  ARG(c_, 1);
  ARG(a_, 2);
  ARG(r_, 3);
  ARG(tailQ_, 4);
loop:
  T1 = CALL3(1,VARREF(Yx8rSastYobjectify),t_,r_,YPfalse);
  T2 = CALL3(1,VARREF(Yx8rSastYobjectify),c_,r_,tailQ_);
  T3 = CALL3(1,VARREF(Yx8rSastYobjectify),a_,r_,tailQ_);
  T0 = CALLN(1,VARREF(Ynew),7,VARREF(Yx8rSastYLalternativeG),VARREF(Yx8rSastYalternative_condition),T1,VARREF(Yx8rSastYalternative_consequent),T2,VARREF(Yx8rSastYalternative_alternant),T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_244) {
  P eT_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(eT_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(Yx8rSastYLsequentialG));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),eT_);
    T6 = CALL1(1,VARREF(Ytail),eT_);
    T5 = CALL1(0,FREEREF(0),T6);
    T3 = CALL2(1,VARREF(Yx8rSastYsequential),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sequentialize_245) {
  P eT_;
  P loopF1633;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(eT_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLconstantG),VARREF(Yx8rSastYconstant_value),YPfalse);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Ytail),eT_);
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T5);
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),eT_);
      T3 = T6;
    } else {
      T8 = FUNSHELL(1,fun_loop_244,1);
      loopF1633 = T8;
      FUNINIT(loopF1633, 1,loopF1633);
      T9 = CALL1(0,loopF1633,eT_);
      T7 = T9;
      T3 = T7;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_transform_defs_246) {
  P eT_;
  P eF1634;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(eT_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T3 = CALL1(1,VARREF(Yhead),eT_);
    eF1634 = T3;
    T5 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_defQ),eF1634);
    if (T5 != YPfalse) {
      T9 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
      T15 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_def_variable),eF1634);
      T14 = CALL1(1,VARREF(Ylst),T15);
      T17 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_def_value),eF1634);
      T16 = CALL1(1,VARREF(Ylst),T17);
      T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T16,Ynil);
      T12 = CALL1(1,VARREF(Ylst),T13);
      T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,Ynil);
      T10 = CALL1(1,VARREF(Ylst),T11);
      T19 = CALL1(1,VARREF(Ytail),eT_);
      T18 = CALL1(1,VARREF(Yx8rSastYtransform_defs),T19);
      T8 = CALL4(1,VARREF(YgooSmacrosYcat),T9,T10,T18,Ynil);
      T7 = CALL1(1,VARREF(Ylst),T8);
      T6 = CALL2(1,VARREF(YgooSmacrosYcat),T7,Ynil);
      T4 = T6;
    } else {
      T21 = CALL1(1,VARREF(Ylst),eF1634);
      T23 = CALL1(1,VARREF(Ytail),eT_);
      T22 = CALL1(1,VARREF(Yx8rSastYtransform_defs),T23);
      T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,Ynil);
      T4 = T20;
    }
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_247) {
  P res_,eT_;
  P headF1636;
  P tailQF1635;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(eT_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Ytail),eT_);
    T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T6);
    if (T5 != YPfalse) {
      T4 = FREEREF(0);
    } else {
      T4 = YPfalse;
    }
    tailQF1635 = T4;
    T9 = CALL1(1,VARREF(Yhead),eT_);
    T8 = CALL3(1,VARREF(Yx8rSastYobjectify),T9,FREEREF(1),tailQF1635);
    headF1636 = T8;
    T11 = CALL2(1,VARREF(YgooSmacrosYpair),headF1636,res_);
    T12 = CALL1(1,VARREF(Ytail),eT_);
    a1 = T11;
    a2 = T12;
    res_ = a1;
    eT_ = a2;
    goto loop;
    T7 = T10;
    T3 = T7;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_sequential_248) {
  P eT_,r_,tailQ_;
  P astsF1638;
  P loopF1637;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(eT_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = FUNSHELL(1,fun_loop_247,3);
  loopF1637 = T2;
  FUNINIT(loopF1637, 3,tailQ_,r_,loopF1637);
  T4 = CALL1(1,VARREF(Yx8rSastYtransform_defs),eT_);
  T3 = CALL2(0,loopF1637,Ynil,T4);
  T1 = T3;
  astsF1638 = T1;
  T5 = CALL1(1,VARREF(Yx8rSastYsequentialize),astsF1638);
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_249) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_application_250) {
  P ff_,eT_,r_,tailQ_;
  P eeTF1639;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = FUNFAB(fun_249,1,r_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(Yx8rSastYconvert2arguments),T2);
  eeTF1639 = T1;
  T4 = CALL4(1,VARREF(Yx8rSastYprocess_closed_application),ff_,eeTF1639,r_,tailQ_);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_251) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_application_252) {
  P ff_,eT_,r_,tailQ_;
  P fvfF1641;
  P eeTF1640;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = FUNFAB(fun_251,1,r_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(Yx8rSastYconvert2arguments),T2);
  eeTF1640 = T1;
  T5 = CALL1(1,VARREF(Yx8rSastYreference_binding),ff_);
  fvfF1641 = T5;
  T6 = CALLN(1,VARREF(Ynew),7,VARREF(Yx8rSastYLpredefined_applicationG),VARREF(Yx8rSastYapplication_binding),fvfF1641,VARREF(Yx8rSastYapplication_arguments),eeTF1640,VARREF(Yx8rSastYapplication_tailQ),tailQ_);
  T4 = T6;
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_253) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_application_254) {
  P ff_,eT_,r_,tailQ_;
  P eeTF1642;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = FUNFAB(fun_253,1,r_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(Yx8rSastYconvert2arguments),T2);
  eeTF1642 = T1;
  T4 = CALLN(1,VARREF(Ynew),7,VARREF(Yx8rSastYLregular_applicationG),VARREF(Yx8rSastYapplication_function),ff_,VARREF(Yx8rSastYapplication_arguments),eeTF1642,VARREF(Yx8rSastYapplication_tailQ),tailQ_);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_process_closed_application_255) {
  P f_,eT_,r_,tailQ_;
  P bF1644;
  P vTF1643;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),f_);
  vTF1643 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYfunction_body),f_);
  bF1644 = T3;
  T5 = CALL1(1,VARREF(Yx8rSastYfunction_naryQ),f_);
  if (T5 != YPfalse) {
    T6 = CALL4(1,VARREF(Yx8rSastYprocess_nary_closed_application),f_,eT_,r_,tailQ_);
    T4 = T6;
  } else {
    T9 = CALL1(1,VARREF(YgooStypesYlen),eT_);
    T11 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),f_);
    T10 = CALL1(1,VARREF(YgooStypesYlen),T11);
    T8 = CALL2(1,VARREF(YgooSmathYE),T9,T10);
    if (T8 != YPfalse) {
      T13 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),f_);
      T14 = CALL1(1,VARREF(Yx8rSastYfunction_specs),f_);
      T15 = CALL1(1,VARREF(Yx8rSastYfunction_body),f_);
      T12 = CALLN(1,VARREF(Ynew),9,VARREF(Yx8rSastYLfix_letG),VARREF(Yx8rSastYfix_let_bindings),T13,VARREF(Yx8rSastYfix_let_types),T14,VARREF(Yx8rSastYfix_let_arguments),eT_,VARREF(Yx8rSastYfix_let_body),T15);
      T7 = T12;
    } else {
      T16 = CALL3(1,VARREF(Yx8rSastYobjectify_error),LITREF(lit_303),f_,eT_);
      T7 = T16;
    }
    T4 = T7;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pack_nary_args_256) {
  P eT_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(eT_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),LITREF(lit_306),Ynil);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),eT_);
    T6 = CALL1(1,VARREF(Ytail),eT_);
    T5 = CALL1(0,FREEREF(0),T6);
    T3 = CALL3(1,VARREF(Ylst),LITREF(lit_307),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gather_arguments_257) {
  P eT_,vT_;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(eT_, 0);
  ARG(vT_, 1);
loop:
  T2 = CALL1(1,VARREF(Yhead),vT_);
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_dottedQ),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(0,FREEREF(0),eT_);
    T4 = CALL3(1,VARREF(Yx8rSastYobjectify),T5,FREEREF(1),YPfalse);
    T6 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(Yx8rSastYLargumentsG));
    T3 = CALL2(1,VARREF(Yx8rSastYarguments),T4,T6);
    T0 = T3;
  } else {
    T8 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
    if (T8 != YPfalse) {
      T9 = CALL3(1,VARREF(Yx8rSastYobjectify_error),LITREF(lit_310),FREEREF(2),eT_);
      T7 = T9;
    } else {
      T11 = CALL1(1,VARREF(Yhead),eT_);
      T13 = CALL1(1,VARREF(Ytail),eT_);
      T14 = CALL1(1,VARREF(Ytail),vT_);
      T12 = CALL2(0,FREEREF(3),T13,T14);
      T10 = CALL2(1,VARREF(Yx8rSastYarguments),T11,T12);
      T7 = T10;
    }
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_process_nary_closed_application_258) {
  P f_,eT_,r_,tailQ_;
  P oF1648;
  P vTF1647;
  P gather_argumentsF1646;
  P pack_nary_argsF1645;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = FUNSHELL(1,fun_pack_nary_args_256,1);
  pack_nary_argsF1645 = T1;
  T2 = FUNSHELL(1,fun_gather_arguments_257,4);
  gather_argumentsF1646 = T2;
  FUNINIT(pack_nary_argsF1645, 1,pack_nary_argsF1645);
  FUNINIT(gather_argumentsF1646, 4,pack_nary_argsF1645,r_,f_,gather_argumentsF1646);
  T4 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),f_);
  vTF1647 = T4;
  T7 = CALL1(1,VARREF(Yx8rSastYfunction_specs),f_);
  T8 = CALL2(0,gather_argumentsF1646,eT_,vTF1647);
  T9 = CALL1(1,VARREF(Yx8rSastYfunction_body),f_);
  T6 = CALLN(1,VARREF(Ynew),9,VARREF(Yx8rSastYLfix_letG),VARREF(Yx8rSastYfix_let_bindings),vTF1647,VARREF(Yx8rSastYfix_let_types),T7,VARREF(Yx8rSastYfix_let_arguments),T8,VARREF(Yx8rSastYfix_let_body),T9);
  oF1648 = T6;
  T10 = CALL1(1,VARREF(YgooScolsSseqYlast),vTF1647);
  CALL2(1,VARREF(Yx8rSastYbinding_dottedQ_setter),YPfalse,T10);
  T5 = oF1648;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_convert2arguments_259) {
  P eT_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(eT_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(Yx8rSastYLargumentsG));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),eT_);
    T6 = CALL1(1,VARREF(Ytail),eT_);
    T5 = CALL1(1,VARREF(Yx8rSastYconvert2arguments),T6);
    T3 = CALL2(1,VARREF(Yx8rSastYarguments),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_assignment_260) {
  P binding_,e_,r_,tailQ_;
  P opF1649;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_operator),binding_);
  opF1649 = T1;
  T3 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_variableQ),opF1649);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_fab_setter_name),opF1649);
    T6 = CALL3(1,VARREF(Yx8rSastYobjectify),T7,r_,YPfalse);
    T9 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_operands),binding_);
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),e_,T9);
    T5 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_make_application),T6,T8);
    T4 = CALL3(1,VARREF(Yx8rSastYobjectify),T5,r_,tailQ_);
    T2 = T4;
  } else {
    T10 = CALL2(1,VARREF(Yx8rSastYobjectify_error),LITREF(lit_313),e_);
    T2 = T10;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_261) {
  P binding_,e_,r_,tailQ_;
  P valF1651;
  P refF1650;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL3(1,VARREF(Yx8rSastYobjectify),binding_,r_,YPfalse);
  refF1650 = T1;
  T3 = CALL3(1,VARREF(Yx8rSastYobjectify),e_,r_,YPfalse);
  valF1651 = T3;
  T4 = CALL2(1,VARREF(Yx8rSastYobjectify_assignment_using),refF1650,valF1651);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_using_262) {
  P ref_,val_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYreference_binding),ref_);
  CALL2(1,VARREF(Yx8rSastYbinding_mutableQ_setter),YPtrue,T0);
  T1 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLlocal_assignmentG),VARREF(Yx8rSastYassignment_reference),ref_,VARREF(Yx8rSastYassignment_form),val_);
UNLINK_STACK();
  RET(T1);
}

FUNCODEDEF(fun_objectify_assignment_using_263) {
  P ref_,val_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYreference_binding),ref_);
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLglobal_assignmentG),VARREF(Yx8rSastYassignment_binding),T1,VARREF(Yx8rSastYassignment_form),val_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_using_264) {
  P ref_,val_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYreference_binding),ref_);
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLruntime_assignmentG),VARREF(Yx8rSastYassignment_binding),T1,VARREF(Yx8rSastYassignment_form),val_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSastYupdate_binding_kind) {
  P binding_,new_kind_;
  P tmpF1652;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(new_kind_, 1);
loop:
  T3 = CALL1(1,VARREF(Yx8rSastYbinding_kind),binding_);
  T2 = CALL2(1,VARREF(YgooSmathYNEE),T3,LITREF(lit_319));
  tmpF1652 = T2;
  if (tmpF1652 != YPfalse) {
    T4 = tmpF1652;
  } else {
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_283));
    T4 = T5;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(Yx8rSastYbinding_kind_setter),new_kind_,binding_);
    T0 = T6;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_319));
    if (T8 != YPfalse) {
      T7 = YPtrue;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_40));
      if (T10 != YPfalse) {
        T9 = YPtrue;
      } else {
        if (YPtrue != YPfalse) {
          T13 = CALL1(1,VARREF(Yx8rSastYbinding_name),binding_);
          T12 = CALL3(1,VARREF(Yerror),LITREF(lit_320),T13,new_kind_);
          T11 = T12;
        } else {
          T11 = YPfalse;
        }
        T9 = T11;
      }
      T7 = T9;
    }
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_define_binding_266) {
  P r_,name_,defining_methodQ_,kind_;
  P bindingF1660;
  P bindingF1659;
  P mod_nameF1658;
  P foreignQF1657;
  P tmpF1656;
  P modF1655;
  P grF1654;
  P existing_bindingF1653;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(r_, 0);
  ARG(name_, 1);
  ARG(defining_methodQ_, 2);
  ARG(kind_, 3);
loop:
  T1 = CALL2(1,VARREF(Yx8rSastYfind_binding),name_,r_);
  existing_bindingF1653 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYfind_static_global_environment),r_);
  grF1654 = T3;
  T5 = CALL1(1,VARREF(Yx8rSastYenvironment_module),grF1654);
  modF1655 = T5;
  if (existing_bindingF1653 != YPfalse) {
    T11 = CALL2(1,VARREF(Yx8rSastYbinding_native_toQ),existing_bindingF1653,modF1655);
    tmpF1656 = T11;
    if (tmpF1656 != YPfalse) {
      T12 = tmpF1656;
    } else {
      T12 = defining_methodQ_;
    }
    T10 = T12;
    T9 = CALL1(1,VARREF(Ynot),T10);
    foreignQF1657 = T9;
    T13 = CALL1(1,VARREF(Yx8rSastYbinding_freeQ),existing_bindingF1653);
    if (T13 != YPfalse) {
      CALL2(1,VARREF(Yx8rSastYbinding_freeQ_setter),YPfalse,existing_bindingF1653);
      if (foreignQF1657 != YPfalse) {
        T15 = CALL1(1,VARREF(Yx8rSastYtransaction_register_implemented_binding),existing_bindingF1653);
        T14 = T15;
      } else {
        T14 = YPfalse;
      }
    } else {
      if (foreignQF1657 != YPfalse) {
        T18 = CALL1(1,VARREF(Yx8rSastYmodule_name),modF1655);
        T19 = CALL1(1,VARREF(Yx8rSastYbinding_module_name),existing_bindingF1653);
        T17 = CALLN(1,VARREF(YgooSruntimeYformat),5,VARREF(YgooSioSportYout),LITREF(lit_325),T18,name_,T19);
        T16 = T17;
      } else {
        T16 = YPfalse;
      }
    }
    CALL2(1,VARREF(Yx8rSdependencyYinvalidate_dependents),existing_bindingF1653,VARREF(Yx8rSdependencyYDall_dependency_types));
    CALL2(1,VARREF(Yx8rSastYupdate_binding_kind),existing_bindingF1653,kind_);
    T8 = existing_bindingF1653;
    T7 = T8;
  } else {
    T22 = CALL1(1,VARREF(Yx8rSastYfind_environment_module),r_);
    T21 = CALL1(1,VARREF(Yx8rSastYmodule_name),T22);
    mod_nameF1658 = T21;
    T24 = CALLN(1,VARREF(Ynew),9,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),kind_,VARREF(Yx8rSastYbinding_name),name_,VARREF(Yx8rSastYbinding_freeQ),YPfalse,VARREF(Yx8rSastYbinding_module_name),mod_nameF1658);
    bindingF1659 = T24;
    CALL2(1,VARREF(Yx8rSastYinsert_globalX),bindingF1659,grF1654);
    T23 = bindingF1659;
    T20 = T23;
    T7 = T20;
  }
  bindingF1660 = T7;
  T6 = bindingF1660;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_definition_267) {
  P var_,e_,r_;
  P defnF1663;
  P bindingF1662;
  P nameF1661;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(var_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_variable_name),var_);
  nameF1661 = T1;
  T3 = CALL4(1,VARREF(Yx8rSastYast_define_binding),r_,nameF1661,YPfalse,LITREF(lit_40));
  bindingF1662 = T3;
  T6 = CALL3(1,VARREF(Yx8rSastYobjectify),e_,r_,YPfalse);
  T5 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLdefinitionG),VARREF(Yx8rSastYassignment_binding),bindingF1662,VARREF(Yx8rSastYassignment_form),T6);
  defnF1663 = T5;
  T4 = defnF1663;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_268) {
  P x_,r_,tailQ_;
  P expF1664;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  if (VARREF(Yx8rSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_333));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),x_);
    T0 = CALL2(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_334));
  } else {
  }
  T3 = CALL1(1,VARREF(Ylst),x_);
  T2 = CALL3(1,VARREF(YgooSmacrosYnapp),FREEREF(0),YPfalse,T3);
  expF1664 = T2;
  if (VARREF(Yx8rSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_335));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),expF1664);
    T4 = CALL2(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_336));
  } else {
  }
  T1 = expF1664;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YPPmacro) {
  P modname_,name_,expander_,env_or_false_;
  P bindingF1668;
  P envF1667;
  P tmpF1666;
  P expandF1665;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(modname_, 0);
  ARG(name_, 1);
  ARG(expander_, 2);
  ARG(env_or_false_, 3);
loop:
  T1 = FUNSHELL(0,fun_expand_268,1);
  expandF1665 = T1;
  FUNINIT(expandF1665, 1,expander_);
  tmpF1666 = env_or_false_;
  if (tmpF1666 != YPfalse) {
    T4 = tmpF1666;
  } else {
    T5 = CALL1(1,VARREF(Yx8rSastYunchecked_runtime_environment),modname_);
    T4 = T5;
  }
  T3 = T4;
  envF1667 = T3;
  T7 = CALL4(1,VARREF(Yx8rSastYast_define_binding),envF1667,name_,YPfalse,LITREF(lit_284));
  bindingF1668 = T7;
  CALL2(1,VARREF(Yx8rSastYbinding_handler_setter),expandF1665,bindingF1668);
  T6 = bindingF1668;
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_syntax_definition_270) {
  P name_,e_,r_,rtQ_;
  P bindingF1674;
  P modnameF1673;
  P expanderF1672;
  P ast_expanderF1671;
  P syntax_envF1670;
  P sep_expanderF1669;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(rtQ_, 3);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_make_macro_function),e_);
  sep_expanderF1669 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYfind_syntax_environment),r_);
  syntax_envF1670 = T3;
  T5 = CALL3(1,VARREF(Yx8rSastYobjectify),sep_expanderF1669,syntax_envF1670,YPfalse);
  ast_expanderF1671 = T5;
  T7 = CALL1(1,VARREF(Yx8rSastYast_evaluate),ast_expanderF1671);
  expanderF1672 = T7;
  T10 = CALL1(1,VARREF(Yx8rSastYfind_environment_module),r_);
  T9 = CALL1(1,VARREF(Yx8rSastYmodule_name),T10);
  modnameF1673 = T9;
  T13 = CALL1(1,VARREF(Yx8rSastYfind_static_global_environment),r_);
  T12 = CALL4(1,VARREF(YPPmacro),modnameF1673,name_,expanderF1672,T13);
  bindingF1674 = T12;
  T15 = CALL1(1,VARREF(Yx8rSastYfind_static_global_environment),r_);
  T14 = CALL2(1,VARREF(YgooSmathYNEE),syntax_envF1670,T15);
  if (T14 != YPfalse) {
    T16 = CALL2(1,VARREF(Yx8rSastYinsert_globalX),bindingF1674,syntax_envF1670);
  } else {
  }
  if (rtQ_ != YPfalse) {
    T19 = CALL3(1,VARREF(Yx8rSastYobjectify),sep_expanderF1669,r_,YPfalse);
    T18 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLast_macro_definitionG),VARREF(Yx8rSastYassignment_binding),bindingF1674,VARREF(Yx8rSastYassignment_form),T19);
    T17 = T18;
  } else {
    T20 = CALL2(1,VARREF(Yx8rSastYobjectify_quotation),YPfalse,r_);
    T17 = T20;
  }
  T11 = T17;
  T8 = T11;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_function_definition_271) {
  P name_,e_,r_;
  P defnF1677;
  P fF1676;
  P bindingF1675;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL4(1,VARREF(Yx8rSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_40));
  bindingF1675 = T1;
  T3 = CALL3(1,VARREF(Yx8rSastYobjectify),e_,r_,YPfalse);
  fF1676 = T3;
  CALL2(1,VARREF(Yx8rSastYfunction_binding_setter),bindingF1675,fF1676);
  T4 = CALL2(1,VARREF(Yx8rSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(Yx8rSastYfunction_debug_name_setter),T4,fF1676);
  T6 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLast_function_definitionG),VARREF(Yx8rSastYassignment_binding),bindingF1675,VARREF(Yx8rSastYassignment_form),fF1676);
  defnF1677 = T6;
  T5 = defnF1677;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSastYmodule_binding) {
  P kind_;
  P T0;
  P a1;
LINK_STACK();
  ARG(kind_, 0);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),kind_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_primitive_definition_273) {
  P name_,sig_,body_,r_;
  P defnF1683;
  P formF1682;
  P bodyF1681;
  P new_rF1680;
  P signatureF1679;
  P bindingF1678;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(name_, 0);
  ARG(sig_, 1);
  ARG(body_, 2);
  ARG(r_, 3);
loop:
  T1 = CALL4(1,VARREF(Yx8rSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_343));
  bindingF1678 = T1;
  T3 = CALL2(1,VARREF(Yx8rSastYobjectify_signature),sig_,r_);
  signatureF1679 = T3;
  T6 = CALL1(1,VARREF(Yx8rSastYsignature_bindings),signatureF1679);
  T5 = CALL2(1,VARREF(Yx8rSastYr_extendT),r_,T6);
  new_rF1680 = T5;
  T8 = CALL3(1,VARREF(Yx8rSastYobjectify_sequential),body_,new_rF1680,YPtrue);
  bodyF1681 = T8;
  T11 = CALL2(1,VARREF(Yx8rSastYobjectify_quotation),name_,r_);
  T10 = CALLN(1,VARREF(Ynew),9,VARREF(Yx8rSastYLast_primitiveG),VARREF(Yx8rSastYfunction_binding),bindingF1678,VARREF(Yx8rSastYfunction_debug_name),T11,VARREF(Yx8rSastYfunction_signature),signatureF1679,VARREF(Yx8rSastYfunction_body),bodyF1681);
  formF1682 = T10;
  T13 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLast_primitive_definitionG),VARREF(Yx8rSastYassignment_binding),bindingF1678,VARREF(Yx8rSastYassignment_form),formF1682);
  defnF1683 = T13;
  T12 = defnF1683;
  T9 = T12;
  T7 = T9;
  T4 = T7;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_generic_definition_274) {
  P name_,sig_,r_;
  P defnF1687;
  P formF1686;
  P signatureF1685;
  P bindingF1684;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(sig_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL4(1,VARREF(Yx8rSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_40));
  bindingF1684 = T1;
  T3 = CALL2(1,VARREF(Yx8rSastYobjectify_signature),sig_,r_);
  signatureF1685 = T3;
  T6 = CALL2(1,VARREF(Yx8rSastYobjectify_quotation),name_,r_);
  T5 = CALLN(1,VARREF(Ynew),7,VARREF(Yx8rSastYLast_genericG),VARREF(Yx8rSastYfunction_binding),bindingF1684,VARREF(Yx8rSastYfunction_debug_name),T6,VARREF(Yx8rSastYfunction_signature),signatureF1685);
  formF1686 = T5;
  T8 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLast_generic_definitionG),VARREF(Yx8rSastYassignment_binding),bindingF1684,VARREF(Yx8rSastYassignment_form),formF1686);
  defnF1687 = T8;
  T7 = defnF1687;
  T4 = T7;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_method_definition_275) {
  P name_,e_,r_;
  P defnF1693;
  P formF1692;
  P callF1691;
  P metF1690;
  P genF1689;
  P bindingF1688;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL4(1,VARREF(Yx8rSastYast_define_binding),r_,name_,YPtrue,LITREF(lit_40));
  bindingF1688 = T1;
  T4 = CALL2(1,VARREF(Ylst),LITREF(lit_347),name_);
  T3 = CALL4(1,VARREF(Ylst),LITREF(lit_346),T4,name_,YPfalse);
  genF1689 = T3;
  T6 = CALL3(1,VARREF(Yx8rSastYobjectify),e_,r_,YPfalse);
  metF1690 = T6;
  T8 = CALL3(1,VARREF(Ylst),LITREF(lit_348),genF1689,metF1690);
  callF1691 = T8;
  T10 = CALL3(1,VARREF(Yx8rSastYobjectify),callF1691,r_,YPfalse);
  formF1692 = T10;
  T12 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLast_method_definitionG),VARREF(Yx8rSastYassignment_binding),bindingF1688,VARREF(Yx8rSastYassignment_form),formF1692);
  defnF1693 = T12;
  CALL2(1,VARREF(Yx8rSastYfunction_binding_setter),name_,metF1690);
  T13 = CALL2(1,VARREF(Yx8rSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(Yx8rSastYfunction_debug_name_setter),T13,metF1690);
  T11 = defnF1693;
  T9 = T11;
  T7 = T9;
  T5 = T7;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_276) {
  P tmpF1694;
  P T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  VARSET(YgooSioSwriteYTmax_print_lengthT,VARREF(YDmax_int));
  tmpF1694 = VARREF(Yx8rSastYTrecord_sourceQT);
  if (tmpF1694 != YPfalse) {
    T5 = CALL2(1,VARREF(YisaQ),FREEREF(1),VARREF(YLlstG));
    if (T5 != YPfalse) {
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),LITREF(lit_12),FREEREF(1));
      T4 = T6;
    } else {
      T4 = FREEREF(1);
    }
    T3 = CALL3(1,VARREF(YgooSruntimeYformat_to_string),LITREF(lit_350),FREEREF(0),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  T0 = CALL2(1,VARREF(Yx8rSastYobjectify_quotation),T1,FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_277) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YgooSioSwriteYTmax_print_lengthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_278) {
  P x_1434F1695;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  VARSET(YgooSioSwriteYTmax_print_depthT,VARREF(YDmax_int));
  x_1434F1695 = VARREF(YgooSioSwriteYTmax_print_lengthT);
  T2 = FUNFAB(fun_276,3,FREEREF(0),FREEREF(1),FREEREF(2));
  T3 = FUNFAB(fun_277,1,x_1434F1695);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_279) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YgooSioSwriteYTmax_print_depthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_function_source_280) {
  P sig_,body_,r_;
  P x_1433F1696;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(r_, 2);
loop:
  x_1433F1696 = VARREF(YgooSioSwriteYTmax_print_depthT);
  T2 = FUNFAB(fun_278,3,sig_,body_,r_);
  T3 = FUNFAB(fun_279,1,x_1433F1696);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_281) {
  P bF1699;
  P new_rF1698;
  P signatureF1697;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = CALL2(1,VARREF(Yx8rSastYobjectify_signature),FREEREF(0),FREEREF(1));
  signatureF1697 = T1;
  T4 = CALL1(1,VARREF(Yx8rSastYsignature_bindings),signatureF1697);
  T3 = CALL2(1,VARREF(Yx8rSastYr_extendT),FREEREF(1),T4);
  new_rF1698 = T3;
  T6 = CALL3(1,VARREF(Yx8rSastYobjectify_sequential),FREEREF(2),new_rF1698,YPtrue);
  bF1699 = T6;
  T7 = CALL2(1,VARREF(Yx8rSastYobjectify_quotation),YPfalse,FREEREF(1));
  CALL2(1,VARREF(Yx8rSastYfunction_debug_name_setter),T7,FREEREF(3));
  CALL2(1,VARREF(Yx8rSastYfunction_signature_setter),signatureF1697,FREEREF(3));
  CALL2(1,VARREF(Yx8rSastYfunction_body_setter),bF1699,FREEREF(3));
  T8 = CALL3(1,VARREF(Yx8rSastYobjectify_function_source),FREEREF(0),FREEREF(2),FREEREF(1));
  CALL2(1,VARREF(Yx8rSastYfunction_source_setter),T8,FREEREF(3));
  T5 = FREEREF(3);
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_282) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(Yx8rSastYTcurrent_dependentT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_function_283) {
  P sig_,body_,r_,tailQ_;
  P x_1435F1701;
  P methodF1700;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(Ynew),VARREF(Yx8rSastYLast_methodG));
  methodF1700 = T1;
  x_1435F1701 = VARREF(Yx8rSastYTcurrent_dependentT);
  VARSET(Yx8rSastYTcurrent_dependentT,methodF1700);
  T4 = FUNFAB(fun_281,4,sig_,r_,body_,methodF1700);
  T5 = FUNFAB(fun_282,1,x_1435F1701);
  T3 = with_cleanup(T4,T5);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_284) {
  P params_,naryQ_,bindings_,names_,types_;
  P bindingF1713;
  P nameF1712;
  P typeF1711;
  P stypeF1710;
  P dottedQF1709;
  P stypeF1708;
  P snameF1707;
  P paramF1706;
  P arityF1705;
  P valueF1704;
  P tmpF1703;
  P sexpr_valueF1702;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(params_, 0);
  ARG(naryQ_, 1);
  ARG(bindings_, 2);
  ARG(names_, 3);
  ARG(types_, 4);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),params_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_signature_value),FREEREF(0));
    sexpr_valueF1702 = T3;
    tmpF1703 = sexpr_valueF1702;
    if (tmpF1703 != YPfalse) {
      T7 = tmpF1703;
    } else {
      T8 = CALL1(1,VARREF(Yx8rSastYdefault_type),FREEREF(1));
      T7 = T8;
    }
    T6 = T7;
    T5 = CALL3(1,VARREF(Yx8rSastYobjectify),T6,FREEREF(1),YPfalse);
    valueF1704 = T5;
    T11 = CALL1(1,VARREF(YgooStypesYlen),names_);
    if (naryQ_ != YPfalse) {
      T12 = YPint((P)1);
    } else {
      T12 = YPint((P)0);
    }
    T10 = CALL2(1,VARREF(YgooSmathY_),T11,T12);
    arityF1705 = T10;
    T14 = CALL1(1,VARREF(YgooSmacrosYrevX),bindings_);
    T15 = CALL1(1,VARREF(YgooSmacrosYrevX),names_);
    T16 = CALL1(1,VARREF(YgooSmacrosYrevX),types_);
    T17 = CALL3(1,VARREF(Yx8rSastYobjectify),naryQ_,FREEREF(1),YPfalse);
    T18 = CALL3(1,VARREF(Yx8rSastYobjectify),arityF1705,FREEREF(1),YPfalse);
    T13 = CALLN(1,VARREF(Ynew),13,VARREF(Yx8rSastYLast_signatureG),VARREF(Yx8rSastYsignature_bindings),T14,VARREF(Yx8rSastYsignature_names),T15,VARREF(Yx8rSastYsignature_specs),T16,VARREF(Yx8rSastYsignature_naryQ),T17,VARREF(Yx8rSastYsignature_arity),T18,VARREF(Yx8rSastYsignature_value),valueF1704);
    T9 = T13;
    T4 = T9;
    T2 = T4;
    T0 = T2;
  } else {
    T20 = CALL1(1,VARREF(Yhead),params_);
    paramF1706 = T20;
    T22 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_variable_name),paramF1706);
    snameF1707 = T22;
    T24 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_variable_type),paramF1706);
    stypeF1708 = T24;
    T26 = CALL2(1,VARREF(YgooSmacrosYEE),stypeF1708,VARREF(Yx8rSastYDsexpr_optionals_tag));
    dottedQF1709 = T26;
    if (dottedQF1709 != YPfalse) {
      T28 = VARREF(Yx8rSastYDsexpr_optionals_type_name);
    } else {
      T28 = stypeF1708;
    }
    stypeF1710 = T28;
    T30 = CALL3(1,VARREF(Yx8rSastYobjectify),stypeF1710,FREEREF(1),YPfalse);
    typeF1711 = T30;
    T32 = CALL2(1,VARREF(Yx8rSastYobjectify_quotation),snameF1707,FREEREF(1));
    nameF1712 = T32;
    T34 = CALLN(1,VARREF(Ynew),7,VARREF(Yx8rSastYLlocal_bindingG),VARREF(Yx8rSastYbinding_name),snameF1707,VARREF(Yx8rSastYbinding_type),typeF1711,VARREF(Yx8rSastYbinding_dottedQ),dottedQF1709);
    bindingF1713 = T34;
    T36 = CALL1(1,VARREF(Ytail),params_);
    T37 = CALL2(1,VARREF(YgooSmacrosYpair),bindingF1713,bindings_);
    T38 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLfab_listG),VARREF(Yhead),nameF1712,VARREF(Ytail),names_);
    T39 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLfab_listG),VARREF(Yhead),typeF1711,VARREF(Ytail),types_);
    a1 = T36;
    a2 = dottedQF1709;
    a3 = T37;
    a4 = T38;
    a5 = T39;
    params_ = a1;
    naryQ_ = a2;
    bindings_ = a3;
    names_ = a4;
    types_ = a5;
    goto loop;
    T33 = T35;
    T31 = T33;
    T29 = T31;
    T27 = T29;
    T25 = T27;
    T23 = T25;
    T21 = T23;
    T19 = T21;
    T0 = T19;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_signature_285) {
  P sig_,r_;
  P colF1715;
  P sexpr_paramsF1714;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(sig_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_signature_parameters),sig_);
  sexpr_paramsF1714 = T1;
  T3 = FUNSHELL(1,fun_col_284,3);
  colF1715 = T3;
  FUNINIT(colF1715, 3,sig_,r_,colF1715);
  T5 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(Yx8rSastYLfab_listG));
  T6 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(Yx8rSastYLfab_listG));
  T4 = CALLN(0,colF1715,5,sexpr_paramsF1714,YPfalse,Ynil,T5,T6);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_286) {
  P j_,bindings_;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(j_, 0);
  ARG(bindings_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindings_);
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmathYA),FREEREF(1),YPint((P)1));
    T4 = CALL1(1,VARREF(Yx8rSastYenvironment_next),FREEREF(2));
    T2 = CALL2(0,FREEREF(0),T3,T4);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(Yhead),bindings_);
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),T7,FREEREF(3));
    if (T6 != YPfalse) {
      T8 = CALL2(1,VARREF(Ytup),FREEREF(1),j_);
      T5 = T8;
    } else {
      T10 = CALL2(1,VARREF(YgooSmathYA),j_,YPint((P)1));
      T11 = CALL1(1,VARREF(Ytail),bindings_);
      a1 = T10;
      a2 = T11;
      j_ = a1;
      bindings_ = a2;
      goto loop;
      T5 = T9;
    }
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_287) {
  P i_,r_;
  P findF1716;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),r_,VARREF(Yx8rSastYLstatic_local_environmentG));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_find_286,5);
    findF1716 = T3;
    FUNINIT(findF1716, 5,FREEREF(0),i_,r_,FREEREF(1),findF1716);
    T5 = CALL1(1,VARREF(Yx8rSastYenvironment_bindings),r_);
    T4 = CALL2(0,findF1716,YPint((P)0),T5);
    T2 = T4;
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(Yx8rSastYbinding_name),FREEREF(1));
    T6 = CALL3(1,VARREF(Yerror),LITREF(lit_365),T7,r_);
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compute_local_reference_offsets_288) {
  P binding_,r_;
  P loopF1717;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_287,2);
  loopF1717 = T1;
  FUNINIT(loopF1717, 2,loopF1717,binding_);
  T2 = CALL2(0,loopF1717,YPint((P)0),r_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_binding_289) {
  P n_,b_,r_;
  P jF1720;
  P iF1719;
  P tup37F1718;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL2(1,VARREF(Yx8rSastYcompute_local_reference_offsets),b_,r_);
  tup37F1718 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup37F1718,YPint((P)0));
  iF1719 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup37F1718,YPint((P)1));
  jF1720 = T5;
  T6 = CALLN(1,VARREF(Ynew),7,VARREF(Yx8rSastYLlocal_referenceG),VARREF(Yx8rSastYreference_binding),b_,VARREF(Yx8rSastYreference_frame_number),iF1719,VARREF(Yx8rSastYreference_frame_offset),jF1720);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_binding_reference_class_290) {
  P b_;
  P x_1437F1722;
  P x_1436F1721;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_kind),b_);
  x_1436F1721 = T1;
  x_1437F1722 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1437F1722,x_1436F1721,LITREF(lit_40));
  if (T4 != YPfalse) {
    T3 = VARREF(Yx8rSastYLglobal_referenceG);
  } else {
    T6 = CALL2(1,x_1437F1722,x_1436F1721,LITREF(lit_343));
    if (T6 != YPfalse) {
      T5 = VARREF(Yx8rSastYLpredefined_referenceG);
    } else {
      T8 = CALL2(1,x_1437F1722,x_1436F1721,LITREF(lit_319));
      if (T8 != YPfalse) {
        T7 = VARREF(Yx8rSastYLruntime_referenceG);
      } else {
        T10 = CALL1(1,VARREF(Yx8rSastYbinding_kind),b_);
        T9 = CALL2(1,VARREF(Yerror),LITREF(lit_370),T10);
        T7 = T9;
      }
      T5 = T7;
    }
    T3 = T5;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_binding_291) {
  P n_,b_,r_;
  P LrefGF1726;
  P tmpF1725;
  P x_1439F1724;
  P x_1438F1723;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_kind),b_);
  x_1438F1723 = T1;
  x_1439F1724 = VARREF(YgooSmacrosYEE);
  T5 = CALL2(1,x_1439F1724,x_1438F1723,LITREF(lit_283));
  tmpF1725 = T5;
  if (tmpF1725 != YPfalse) {
    T6 = tmpF1725;
  } else {
    T7 = CALL2(1,x_1439F1724,x_1438F1723,LITREF(lit_284));
    T6 = T7;
  }
  T4 = T6;
  if (T4 != YPfalse) {
    T3 = b_;
  } else {
    T9 = CALL1(1,VARREF(Yx8rSastYbinding_reference_class),b_);
    LrefGF1726 = T9;
    T10 = CALL3(1,VARREF(Ynew),LrefGF1726,VARREF(Yx8rSastYreference_binding),b_);
    T8 = T10;
    T3 = T8;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_binding_292) {
  P n_,b_,r_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
loop:
  T0 = CALL2(1,VARREF(Yx8rSastYobjectify_free_global_reference),n_,r_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_default_type_293) {
  P r_;
  P T0;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify),LITREF(lit_372),r_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_free_global_reference_294) {
  P name_,r_;
  P bF1729;
  P tmpF1728;
  P grF1727;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfind_static_global_environment),r_);
  grF1727 = T1;
  T4 = CALL1(1,VARREF(Yx8rSastYenvironment_allows_foreign_namesQ),grF1727);
  tmpF1728 = T4;
  if (tmpF1728 != YPfalse) {
    T6 = CALL1(1,VARREF(Yx8rSastYforeign_nameQ),name_);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T7 = CALL2(1,VARREF(Yx8rSastYobjectify_foreign_reference),name_,r_);
    T2 = T7;
  } else {
    T11 = CALL1(1,VARREF(Yx8rSastYfind_environment_module),r_);
    T10 = CALL1(1,VARREF(Yx8rSastYmodule_name),T11);
    T9 = CALLN(1,VARREF(Ynew),9,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_freeQ),YPtrue,VARREF(Yx8rSastYbinding_kind),LITREF(lit_40),VARREF(Yx8rSastYbinding_name),name_,VARREF(Yx8rSastYbinding_module_name),T10);
    bF1729 = T9;
    CALL2(1,VARREF(Yx8rSastYinsert_globalX),bF1729,grF1727);
    T12 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLglobal_referenceG),VARREF(Yx8rSastYreference_binding),bF1729);
    T8 = T12;
    T2 = T8;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSastYforeign_nameQ) {
  P name_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T1 = CALL2(1,VARREF(YgooScolsSseqYpos),T2,YPchr((P)58));
  T0 = CALL2(1,VARREF(YgooSmathYNEE),T1,YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_foreign_reference_296) {
  P name_,r_;
  P bindingF1738;
  P modF1737;
  P loaderF1736;
  P grF1735;
  P tmpF1734;
  P varnameF1733;
  P modnameF1732;
  P breakF1731;
  P namestrF1730;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  namestrF1730 = T1;
  T3 = CALL2(1,VARREF(YgooScolsSseqYpos),namestrF1730,YPchr((P)58));
  breakF1731 = T3;
  T5 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF1730,YPint((P)0),breakF1731);
  modnameF1732 = T5;
  T8 = CALL2(1,VARREF(YgooSmathYA),YPint((P)1),breakF1731);
  T9 = CALL1(1,VARREF(YgooStypesYlen),namestrF1730);
  T7 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF1730,T8,T9);
  varnameF1733 = T7;
  T13 = CALL1(1,VARREF(YgooStypesYlen),modnameF1732);
  T12 = CALL2(1,VARREF(YgooSmagYG),T13,YPint((P)0));
  tmpF1734 = T12;
  if (tmpF1734 != YPfalse) {
    T16 = CALL1(1,VARREF(YgooStypesYlen),varnameF1733);
    T15 = CALL2(1,VARREF(YgooSmagYG),T16,YPint((P)0));
    T14 = T15;
  } else {
    T14 = YPfalse;
  }
  T11 = T14;
  T10 = CALL1(1,VARREF(Ynot),T11);
  if (T10 != YPfalse) {
    T17 = CALL2(1,VARREF(Yerror),LITREF(lit_376),name_);
  } else {
  }
  T19 = CALL1(1,VARREF(Yx8rSastYfind_static_global_environment),r_);
  grF1735 = T19;
  T21 = CALL1(1,VARREF(Yx8rSastYenvironment_module_loader),grF1735);
  loaderF1736 = T21;
  T24 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modnameF1732);
  T23 = CALL2(1,VARREF(Yx8rSastYprobe_module),loaderF1736,T24);
  modF1737 = T23;
  T27 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),varnameF1733);
  T28 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),modF1737);
  T26 = CALL2(1,VARREF(Yx8rSastYfind_binding),T27,T28);
  bindingF1738 = T26;
  CALL2(1,VARREF(Yx8rSastYinsert_globalX),bindingF1738,grF1735);
  T29 = CALL1(1,VARREF(Ynot),bindingF1738);
  if (T29 != YPfalse) {
    T30 = CALL3(1,VARREF(Yerror),LITREF(lit_377),varnameF1733,modnameF1732);
  } else {
  }
  T31 = CALL3(1,VARREF(Yx8rSastYobjectify_binding),name_,bindingF1738,r_);
  T25 = T31;
  T22 = T25;
  T20 = T22;
  T18 = T20;
  T6 = T18;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_symbol_297) {
  P name_,r_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL2(1,VARREF(Yx8rSastYfind_binding),name_,r_);
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify_binding),name_,T1,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ftype_298) {
  P r_;
  P T0;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify),LITREF(lit_380),r_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_299) {
  P p_,x_;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(x_, 1);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_as_300) {
  P p_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYas_lst),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_301) {
  P p_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmathYfabs),YPfalse,VARREF(Yx8rSastYLfunctionsG),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSastYfunctions) {
  P h_,t_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
loop:
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLfunctionsG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_empty_303) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(Yx8rSastYDfunctions_empty));
}

FUNCODEDEF(fun_304) {
  P n_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYftype),FREEREF(0));
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLlocal_bindingG),VARREF(Yx8rSastYbinding_name),n_,VARREF(Yx8rSastYbinding_type),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_305) {
  P f_,b_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(b_, 1);
loop:
  CALL2(1,VARREF(Yx8rSastYfunction_binding_setter),b_,f_);
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_name),b_);
  T0 = CALL2(1,VARREF(Yx8rSastYobjectify_quotation),T1,FREEREF(0));
  CALL2(1,VARREF(Yx8rSastYfunction_debug_name_setter),T0,f_);
  T2 = CALL2(1,VARREF(Yx8rSastYbinding_value_setter),f_,b_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_objectify_locals_306) {
  P names_,sigs_,bodies_,body_,r_,tailQ_;
  P functionsF1742;
  P function_formsF1741;
  P new_rF1740;
  P bindingsF1739;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6;
LINK_STACK();
  ARG(names_, 0);
  ARG(sigs_, 1);
  ARG(bodies_, 2);
  ARG(body_, 3);
  ARG(r_, 4);
  ARG(tailQ_, 5);
loop:
  T2 = FUNFAB(fun_304,1,r_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),T2,names_);
  bindingsF1739 = T1;
  T4 = CALL2(1,VARREF(Yx8rSastYr_extendT),r_,bindingsF1739);
  new_rF1740 = T4;
  T6 = CALL3(1,VARREF(YgooScolsScolYmap2),VARREF(Yx8rSsyntaxYsexpr_make_anonymous_method),sigs_,bodies_);
  function_formsF1741 = T6;
  T9 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(Yx8rSastYobjectify),new_rF1740,YPfalse);
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),T9,function_formsF1741);
  functionsF1742 = T8;
  T10 = FUNFAB(fun_305,1,r_);
  CALL3(1,VARREF(YgooScolsScolYdo2),T10,functionsF1742,bindingsF1739);
  T12 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmathYfabs),YPfalse,VARREF(Yx8rSastYLfunctionsG),functionsF1742);
  T13 = CALL3(1,VARREF(Yx8rSastYobjectify_sequential),body_,new_rF1740,YPtrue);
  T11 = CALLN(1,VARREF(Ynew),7,VARREF(Yx8rSastYLlocalsG),VARREF(Yx8rSastYlocals_bindings),bindingsF1739,VARREF(Yx8rSastYlocals_functions),T12,VARREF(Yx8rSastYlocals_body),T13);
  T7 = T11;
  T5 = T7;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_bind_exit_307) {
  P name_,body_,r_,tailQ_;
  P T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(name_, 0);
  ARG(body_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = CALL1(1,VARREF(Ylst),name_);
  T2 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_make_anonymous_method),T3,body_);
  T1 = CALL3(1,VARREF(Yx8rSastYobjectify),T2,r_,YPfalse);
  T0 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLbind_exitG),VARREF(Yx8rSastYbind_exit_main_fun),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_unwind_protect_308) {
  P protected_form_,cleanup_forms_,r_,tailQ_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(protected_form_, 0);
  ARG(cleanup_forms_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = CALL1(1,VARREF(Ylst),protected_form_);
  T2 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_make_anonymous_method),Ynil,T3);
  T1 = CALL3(1,VARREF(Yx8rSastYobjectify),T2,r_,YPfalse);
  T5 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_make_anonymous_method),Ynil,cleanup_forms_);
  T4 = CALL3(1,VARREF(Yx8rSastYobjectify),T5,r_,YPfalse);
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLunwind_protectG),VARREF(Yx8rSastYunwind_protect_protected_thunk),T1,VARREF(Yx8rSastYunwind_protect_cleanup_thunk),T4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_monitor_309) {
  P type_,info_,test_,handler_,body_,r_,tailQ_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7;
LINK_STACK();
  ARG(type_, 0);
  ARG(info_, 1);
  ARG(test_, 2);
  ARG(handler_, 3);
  ARG(body_, 4);
  ARG(r_, 5);
  ARG(tailQ_, 6);
loop:
  T1 = CALL3(1,VARREF(Yx8rSastYobjectify),type_,r_,YPfalse);
  T2 = CALL3(1,VARREF(Yx8rSastYobjectify),info_,r_,YPfalse);
  T3 = CALL3(1,VARREF(Yx8rSastYobjectify),test_,r_,YPfalse);
  T4 = CALL3(1,VARREF(Yx8rSastYobjectify),handler_,r_,YPfalse);
  T5 = CALL3(1,VARREF(Yx8rSastYobjectify),body_,r_,YPfalse);
  T0 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmonitorG),VARREF(Yx8rSastYmonitor_type),T1,VARREF(Yx8rSastYmonitor_info),T2,VARREF(Yx8rSastYmonitor_test),T3,VARREF(Yx8rSastYmonitor_handler),T4,VARREF(Yx8rSastYmonitor_main_thunk),T5);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_310) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_311) {
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

FUNCODEDEF(fun_312) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(Yerror),LITREF(lit_399),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_313) {
  P exit_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exit_, 0);
loop:
  T2 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T1 = CALLN(1,VARREF(Ynew),5,VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_398),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_310;
  T4 = FUNFAB(fun_311,1,exit_);
  T5 = FUNFAB(fun_312,1,FREEREF(0));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_314) {
  P name_;
  P bindingF1743;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(Yx8rSastYfind_binding),name_,FREEREF(0));
  bindingF1743 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),bindingF1743,YPfalse);
  if (T3 != YPfalse) {
    T5 = FUNFAB(fun_313,1,name_);
    T4 = with_exit(T5);
    T2 = T4;
  } else {
    T6 = CALL3(1,VARREF(Yx8rSastYexport_bindingX),FREEREF(1),name_,bindingF1743);
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_export_315) {
  P names_,r_,tailQ_;
  P moduleF1745;
  P envF1744;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(names_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfind_static_global_environment),r_);
  envF1744 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYfind_environment_module),r_);
  moduleF1745 = T3;
  T6 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),moduleF1745);
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),envF1744,T6);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T7 = CALL1(1,VARREF(Yerror),LITREF(lit_396));
  } else {
  }
  T8 = FUNFAB(fun_314,2,envF1744,moduleF1745);
  CALL2(1,VARREF(YgooSmacrosYdo),T8,names_);
  T9 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLconstantG),VARREF(Yx8rSastYconstant_value),YPfalse);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSastYimport_globalX) {
  P b_,env_;
  P tmpF1747;
  P existingF1746;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYbinding_name),b_);
  T1 = CALL2(1,VARREF(Yx8rSastYfind_binding),T2,env_);
  existingF1746 = T1;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),existingF1746,YPfalse);
  tmpF1747 = T5;
  if (tmpF1747 != YPfalse) {
    T6 = tmpF1747;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),existingF1746,b_);
    T6 = T7;
  }
  T4 = T6;
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T9 = CALL1(1,VARREF(Yx8rSastYbinding_name),b_);
    T10 = CALL1(1,VARREF(Yx8rSastYbinding_module_name),b_);
    T8 = CALL4(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_402),T9,T10);
  } else {
  }
  CALL2(1,VARREF(Yx8rSastYinsert_globalX),b_,env_);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_317) {
  P b_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  CALL2(1,VARREF(Yx8rSastYimport_globalX),b_,FREEREF(0));
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_name),b_);
  T0 = CALL3(1,VARREF(Yx8rSastYexport_bindingX),FREEREF(1),T1,b_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_useSexport_module_318) {
  P name_,r_,tailQ_;
  P used_moduleF1751;
  P loaderF1750;
  P moduleF1749;
  P envF1748;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfind_static_global_environment),r_);
  envF1748 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYfind_environment_module),r_);
  moduleF1749 = T3;
  T5 = CALL1(1,VARREF(Yx8rSastYenvironment_module_loader),envF1748);
  loaderF1750 = T5;
  T7 = CALL2(1,VARREF(Yx8rSastYprobe_module),loaderF1750,name_);
  used_moduleF1751 = T7;
  T8 = CALL1(1,VARREF(Yx8rSastYenvironment_uses_modules),envF1748);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T8,used_moduleF1751);
  T9 = FUNFAB(fun_317,2,envF1748,moduleF1749);
  T10 = CALL1(1,VARREF(Yx8rSastYmodule_exports),used_moduleF1751);
  CALL2(1,VARREF(YgooSmacrosYdo),T9,T10);
  T11 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLconstantG),VARREF(Yx8rSastYconstant_value),YPfalse);
  T6 = T11;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_319) {
  P b_;
  P T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSastYimport_globalX),b_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_use_module_320) {
  P name_,r_,tailQ_;
  P used_moduleF1754;
  P loaderF1753;
  P envF1752;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfind_static_global_environment),r_);
  envF1752 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYenvironment_module_loader),envF1752);
  loaderF1753 = T3;
  T5 = CALL2(1,VARREF(Yx8rSastYprobe_module),loaderF1753,name_);
  used_moduleF1754 = T5;
  T6 = CALL1(1,VARREF(Yx8rSastYenvironment_uses_modules),envF1752);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T6,used_moduleF1754);
  T7 = FUNFAB(fun_319,1,envF1752);
  T8 = CALL1(1,VARREF(Yx8rSastYmodule_exports),used_moduleF1754);
  CALL2(1,VARREF(YgooSmacrosYdo),T7,T8);
  T9 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLconstantG),VARREF(Yx8rSastYconstant_value),YPfalse);
  T4 = T9;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_expand_bind_list_321) {
  P pat_,var_,fail_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T0 = CALL2(1,VARREF(Yerror),LITREF(lit_408),pat_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_list_322) {
  P pat_,var_,fail_;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_409));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,Ynil);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_expand_bind_list_323) {
  P pat_,var_,fail_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_unquoteQ),pat_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Yerror),LITREF(lit_410),pat_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(Yerror),LITREF(lit_411),pat_);
      T3 = T5;
    } else {
      if (YPtrue != YPfalse) {
        T7 = CALL3(1,VARREF(Yx8rSastYexpand_bind_listT),pat_,var_,fail_);
        T6 = T7;
      } else {
        T6 = YPfalse;
      }
      T3 = T6;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_expand_bind_listT_324) {
  P pat_,var_,fail_;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_409));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_listT_325) {
  P pat_,var_,fail_;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T6 = CALL1(1,VARREF(Ylst),var_);
  T9 = CALL1(1,VARREF(Yhead),pat_);
  T8 = CALL3(1,VARREF(Yx8rSastYexpand_bind_element),T9,var_,fail_);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T5 = CALL3(1,VARREF(YgooSmacrosYcat),T6,T7,Ynil);
  T4 = CALL1(1,VARREF(Ylst),T5);
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),T4,Ynil);
  T2 = CALL1(1,VARREF(Ylst),T3);
  T12 = CALL1(1,VARREF(Ytail),pat_);
  T11 = CALL3(1,VARREF(Yx8rSastYexpand_bind_listT),T12,var_,fail_);
  T10 = CALL1(1,VARREF(Ylst),T11);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T10,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_element_326) {
  P pat_,var_,fail_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_414));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_306));
  T6 = CALL1(1,VARREF(Ylst),pat_);
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,T6,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T7 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALLN(1,VARREF(YgooSmacrosYcat),5,T1,T2,T3,T7,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_element_327) {
  P pat_,var_,fail_;
  P T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_unquoteQ),pat_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
    T6 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
    T8 = CALL1(1,VARREF(YgooStypesY2nd),pat_);
    T7 = CALL1(1,VARREF(Ylst),T8);
    T11 = CALL1(1,VARREF(Ylst),LITREF(lit_415));
    T12 = CALL1(1,VARREF(Ylst),var_);
    T13 = CALL1(1,VARREF(Ylst),fail_);
    T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,Ynil);
    T9 = CALL1(1,VARREF(Ylst),T10);
    T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T9,Ynil);
    T4 = CALL1(1,VARREF(Ylst),T5);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
    T17 = CALL1(1,VARREF(Ylst),var_);
    T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,Ynil);
    T14 = CALL1(1,VARREF(Ylst),T15);
    T2 = CALL4(1,VARREF(YgooSmacrosYcat),T3,T4,T14,Ynil);
    T0 = T2;
  } else {
    T19 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T19 != YPfalse) {
      T21 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
      T24 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
      T26 = CALL1(1,VARREF(YgooStypesY2nd),pat_);
      T25 = CALL1(1,VARREF(Ylst),T26);
      T27 = CALL1(1,VARREF(Ylst),var_);
      T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T27,Ynil);
      T22 = CALL1(1,VARREF(Ylst),T23);
      T30 = CALL1(1,VARREF(Ylst),LITREF(lit_306));
      T31 = CALL1(1,VARREF(Ylst),Ynil);
      T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
      T28 = CALL1(1,VARREF(Ylst),T29);
      T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T28,Ynil);
      T18 = T20;
    } else {
      if (YPtrue != YPfalse) {
        T34 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
        T37 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
        T42 = CALL1(1,VARREF(Ylst),var_);
        T45 = CALL1(1,VARREF(Ylst),LITREF(lit_416));
        T46 = CALL1(1,VARREF(Ylst),var_);
        T47 = CALL1(1,VARREF(Ylst),fail_);
        T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T47,Ynil);
        T43 = CALL1(1,VARREF(Ylst),T44);
        T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
        T40 = CALL1(1,VARREF(Ylst),T41);
        T39 = CALL2(1,VARREF(YgooSmacrosYcat),T40,Ynil);
        T38 = CALL1(1,VARREF(Ylst),T39);
        T49 = CALL3(1,VARREF(Yx8rSastYexpand_bind_list),pat_,var_,fail_);
        T48 = CALL1(1,VARREF(Ylst),T49);
        T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T48,Ynil);
        T35 = CALL1(1,VARREF(Ylst),T36);
        T52 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
        T53 = CALL1(1,VARREF(Ylst),var_);
        T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,Ynil);
        T50 = CALL1(1,VARREF(Ylst),T51);
        T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T50,Ynil);
        T32 = T33;
      } else {
        T32 = YPfalse;
      }
      T18 = T32;
    }
    T0 = T18;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_pattern_328) {
  P pat_,var_,fail_;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_346));
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_418));
  T5 = CALL1(1,VARREF(Ylst),var_);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_148));
  T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,T6,Ynil);
  T2 = CALL1(1,VARREF(Ylst),T3);
  T8 = CALL3(1,VARREF(Yx8rSastYexpand_bind_list),pat_,var_,fail_);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T11 = CALL1(1,VARREF(Ylst),fail_);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_419));
  T13 = CALL1(1,VARREF(Ylst),var_);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,Ynil);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T0 = CALLN(1,VARREF(YgooSmacrosYcat),5,T1,T2,T7,T9,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_329) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Ylst),x_);
  T2 = CALL1(1,VARREF(Ylst),YPfalse);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),T1,T2,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_syntax_if_330) {
  P x_;
  P epatF1762;
  P failF1761;
  P varF1760;
  P elseF1759;
  P thenF1758;
  P valueF1757;
  P varsF1756;
  P patF1755;
  P T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_syntax_if_pattern),x_);
  patF1755 = T1;
  T3 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_bind_pattern_variables),patF1755);
  varsF1756 = T3;
  T5 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_syntax_if_value),x_);
  valueF1757 = T5;
  T7 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_syntax_if_then),x_);
  thenF1758 = T7;
  T9 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_syntax_if_else),x_);
  elseF1759 = T9;
  T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF1760 = T11;
  T13 = CALL0(1,VARREF(YgooSmacrosYgensym));
  failF1761 = T13;
  T15 = CALL3(1,VARREF(Yx8rSastYexpand_pattern),patF1755,varF1760,failF1761);
  epatF1762 = T15;
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_421));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_2));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_422));
  T26 = CALL1(1,VARREF(Ylst),failF1761);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_4));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_423));
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_5));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_352));
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T33,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_2));
  T40 = CALL1(1,VARREF(Ylst),elseF1759);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T37,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T23 = CALL2(1,VARREF(YgooSmacrosYcat),T24,Ynil);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T48 = CALL1(1,VARREF(Ylst),varF1760);
  T49 = CALL1(1,VARREF(Ylst),valueF1757);
  T47 = CALL3(1,VARREF(YgooSmacrosYcat),T48,T49,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T45 = CALL2(1,VARREF(YgooSmacrosYcat),T46,Ynil);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T55 = fun_329;
  T54 = CALL2(1,VARREF(YgooSmacrosYmap),T55,varsF1756);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T56 = CALL1(1,VARREF(Ylst),epatF1762);
  T57 = CALL1(1,VARREF(Ylst),thenF1758);
  T51 = CALLN(1,VARREF(YgooSmacrosYcat),5,T52,T53,T56,T57,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T42 = CALL4(1,VARREF(YgooSmacrosYcat),T43,T44,T50,Ynil);
  T41 = CALL1(1,VARREF(Ylst),T42);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T41,Ynil);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T19,Ynil);
  T14 = T16;
  T12 = T14;
  T10 = T12;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_r_extendT_331) {
  P r_,bindings_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(r_, 0);
  ARG(bindings_, 1);
loop:
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSastYLstatic_local_environmentG),VARREF(Yx8rSastYenvironment_next),r_,VARREF(Yx8rSastYenvironment_bindings),bindings_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_insert_globalX_332) {
  P binding_,r_;
  P rF1763;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfind_static_global_environment),r_);
  check_type(T1,VARREF(Yx8rSastYLstatic_global_environmentG));
  rF1763 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYenvironment_bindings),rF1763);
  T4 = CALL1(1,VARREF(Yx8rSastYbinding_name),binding_);
  T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_333) {
  P b_;
  P T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSastYinsert_globalX),b_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_globalsX_334) {
  P bindings_,r_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(bindings_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNFAB(fun_333,1,r_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,bindings_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_static_global_environment_335) {
  P r_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYenvironment_next),r_);
  T0 = CALL1(1,VARREF(Yx8rSastYfind_static_global_environment),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_static_global_environment_336) {
  P r_;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
UNLINK_STACK();
  RET(r_);
}

FUNCODEDEF(fun_find_syntax_environment_337) {
  P r_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfind_environment_module),r_);
  T0 = CALL1(1,VARREF(Yx8rSastYmodule_syntax_environment),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_environment_module_338) {
  P r_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfind_static_global_environment),r_);
  T0 = CALL1(1,VARREF(Yx8rSastYenvironment_module),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_339) {
  P bindings_;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(bindings_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindings_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yx8rSastYenvironment_next),FREEREF(1));
    T2 = CALL2(1,VARREF(Yx8rSastYfind_binding),FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(Yhead),bindings_);
    T6 = CALL1(1,VARREF(Yx8rSastYbinding_name),T7);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),T6);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(Yhead),bindings_);
      T4 = T8;
    } else {
      T10 = CALL1(1,VARREF(Ytail),bindings_);
      a1 = T10;
      bindings_ = a1;
      goto loop;
      T4 = T9;
    }
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_binding_340) {
  P name_,r_;
  P loopF1764;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_339,3);
  loopF1764 = T1;
  FUNINIT(loopF1764, 3,name_,r_,loopF1764);
  T3 = CALL1(1,VARREF(Yx8rSastYenvironment_bindings),r_);
  T2 = CALL1(0,loopF1764,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_binding_341) {
  P name_,r_;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_find_binding_342) {
  P name_,r_;
  P tmpF1765;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYenvironment_bindings),r_);
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),T2,name_,YPfalse);
  tmpF1765 = T1;
  if (tmpF1765 != YPfalse) {
    T3 = tmpF1765;
  } else {
    T5 = CALL1(1,VARREF(Yx8rSastYenvironment_next),r_);
    T4 = CALL2(1,VARREF(Yx8rSastYfind_binding),name_,T5);
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_frame_bindings_343) {
  P env_;
  P T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYenvironment_bindings),env_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_register_magic_binding_344) {
  P name_,value_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(value_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYadd),VARREF(Yx8rSastYTmagic_bindingsT),value_);
  T0 = VARSET(Yx8rSastYTmagic_bindingsT,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_magic_bindings_345) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(VARREF(Yx8rSastYTmagic_bindingsT));
}

FUNCODEDEF(fun_x_1443_346) {
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

FUNCODEDEF(fun_347) {
  P return_;
  P sexpr_nameF1778;
  P special_nameF1777;
  P x_1442F1776;
  P x_1442F1775;
  P x_1442F1774;
  P x_1442F1773;
  P x_1442F1772;
  P x_1442F1771;
  P bodyF1770;
  P paramsF1769;
  P nameF1768;
  P x_1442F1767;
  P x_1443F1766;
  P T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51;
  P T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1443_346,1);
  x_1443F1766 = T1;
  FUNINIT(x_1443F1766, 1,return_);
  x_1442F1767 = FREEREF(0);
  nameF1768 = YPfalse;
  nameF1768 = BOXFAB(nameF1768);
  paramsF1769 = YPfalse;
  paramsF1769 = BOXFAB(paramsF1769);
  bodyF1770 = YPfalse;
  bodyF1770 = BOXFAB(bodyF1770);
  T9 = CALL2(1,VARREF(YisaQ),x_1442F1767,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1442F1767,LITREF(lit_435),x_1443F1766);
    x_1442F1771 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1442F1771,x_1443F1766);
    BOXVAL(nameF1768) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1442F1771);
    x_1442F1772 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1442F1772,x_1443F1766);
    x_1442F1773 = T16;
    BOXVAL(paramsF1769) = x_1442F1773;
    x_1442F1774 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1442F1774,x_1443F1766);
    T17 = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1442F1772);
    x_1442F1775 = T19;
    BOXVAL(bodyF1770) = x_1442F1775;
    x_1442F1776 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1442F1776,x_1443F1766);
    T20 = T21;
    T15 = T20;
    T12 = T15;
    T10 = T12;
  } else {
    T22 = CALL2(1,x_1443F1766,LITREF(lit_7),x_1442F1767);
  }
  T25 = BOXVAL(nameF1768);
  T24 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_436),T25);
  special_nameF1777 = T24;
  T28 = BOXVAL(nameF1768);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_437),T28,LITREF(lit_438));
  sexpr_nameF1778 = T27;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_149));
  T34 = CALL1(1,VARREF(Ylst),special_nameF1777);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_37));
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_38));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_306));
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_283));
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T45 = CALL1(1,VARREF(Ylst),sexpr_nameF1778);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_41));
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_439));
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_440));
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_441));
  T54 = BOXVAL(paramsF1769);
  T53 = CALL2(1,VARREF(YgooSmacrosYcat),T54,Ynil);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T55 = BOXVAL(bodyF1770);
  T50 = CALL4(1,VARREF(YgooSmacrosYcat),T51,T52,T55,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_43));
  T57 = CALL1(1,VARREF(Ylst),YPfalse);
  T36 = CALLN(1,VARREF(YgooSmacrosYcat),13,T37,T38,T39,T40,T44,T45,T46,T47,T48,T49,T56,T57,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_432));
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_306));
  T65 = BOXVAL(nameF1768);
  T64 = CALL1(1,VARREF(Ylst),T65);
  T62 = CALL3(1,VARREF(YgooSmacrosYcat),T63,T64,Ynil);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T66 = CALL1(1,VARREF(Ylst),special_nameF1777);
  T59 = CALL4(1,VARREF(YgooSmacrosYcat),T60,T61,T66,Ynil);
  T58 = CALL1(1,VARREF(Ylst),T59);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T58,Ynil);
  T26 = T29;
  T23 = T26;
  T7 = T23;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_348) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_347,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_349) {
  P x_,r_,tailQ_;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_if_test),x_);
  T2 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_if_then),x_);
  T3 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_if_else),x_);
  T0 = CALLN(1,VARREF(Yx8rSastYobjectify_alternative),5,T1,T2,T3,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_350) {
  P x_,r_,tailQ_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Ytail),x_);
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify_sequential),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_351) {
  P x_,r_,tailQ_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooStypesY2nd),x_);
  T0 = CALL2(1,VARREF(Yx8rSastYobjectify_raw),T1,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_352) {
  P x_,r_,tailQ_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_text_of_quotation),x_);
  T0 = CALL2(1,VARREF(Yx8rSastYobjectify_quotation),T1,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_353) {
  P x_,r_,tailQ_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_assignment_variable),x_);
  T2 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_assignment_value),x_);
  T0 = CALL4(1,VARREF(Yx8rSastYobjectify_assignment),T1,T2,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_354) {
  P x_,r_,tailQ_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_definition_variable),x_);
  T2 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_definition_value),x_);
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify_definition),T1,T2,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_355) {
  P x_,r_,tailQ_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_syntax_definition_variable),x_);
  T2 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_syntax_definition_value),x_);
  T0 = CALL4(1,VARREF(Yx8rSastYobjectify_syntax_definition),T1,T2,r_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_356) {
  P x_,r_,tailQ_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_syntax_definition_variable),x_);
  T2 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_syntax_definition_value),x_);
  T0 = CALL4(1,VARREF(Yx8rSastYobjectify_syntax_definition),T1,T2,r_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_357) {
  P x_,r_,tailQ_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_function_definition_variable),x_);
  T2 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_function_definition_value),x_);
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify_method_definition),T1,T2,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_358) {
  P x_,r_,tailQ_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_function_definition_variable),x_);
  T2 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_function_signature),x_);
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify_generic_definition),T1,T2,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_359) {
  P x_,r_,tailQ_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_function_definition_variable),x_);
  T2 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_function_definition_value),x_);
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify_function_definition),T1,T2,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_360) {
  P x_,r_,tailQ_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_method_signature),x_);
  T2 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_method_body),x_);
  T0 = CALL4(1,VARREF(Yx8rSastYobjectify_function),T1,T2,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_361) {
  P x_,r_,tailQ_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooStypesY2nd),x_);
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify_boundQ),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_362) {
  P x_,r_,tailQ_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_let_Gcombination),x_);
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_363) {
  P x_,r_,tailQ_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_def_value),x_);
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_364) {
  P x_,r_,tailQ_;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_loc_bound_names),x_);
  T2 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_loc_bound_signatures),x_);
  T3 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_loc_bound_bodies),x_);
  T4 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_loc_raw_body),x_);
  T0 = CALLN(1,VARREF(Yx8rSastYobjectify_locals),6,T1,T2,T3,T4,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_365) {
  P x_,r_,tailQ_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_iterate_Gloc),x_);
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_366) {
  P x_,r_,tailQ_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_block_name),x_);
  T2 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_block_body),x_);
  T0 = CALL4(1,VARREF(Yx8rSastYobjectify_bind_exit),T1,T2,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_367) {
  P x_,r_,tailQ_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_unwind_protect_protected_form),x_);
  T2 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_unwind_protect_cleanup_forms),x_);
  T0 = CALL4(1,VARREF(Yx8rSastYobjectify_unwind_protect),T1,T2,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_368) {
  P x_,r_,tailQ_;
  P bodyF1784;
  P handlerF1783;
  P testF1782;
  P infoF1781;
  P typeF1780;
  P tup38F1779;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_monitor_expand),x_);
  tup38F1779 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup38F1779,YPint((P)0));
  typeF1780 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup38F1779,YPint((P)1));
  infoF1781 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup38F1779,YPint((P)2));
  testF1782 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup38F1779,YPint((P)3));
  handlerF1783 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup38F1779,YPint((P)4));
  bodyF1784 = T11;
  T12 = CALLN(1,VARREF(Yx8rSastYobjectify_monitor),7,typeF1780,infoF1781,testF1782,handlerF1783,bodyF1784,r_,tailQ_);
  T10 = T12;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pairize_369) {
  P args_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(args_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),args_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),LITREF(lit_306),Ynil);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),args_);
    T6 = CALL1(1,VARREF(Ytail),args_);
    T5 = CALL1(1,VARREF(Yx8rSastYpairize),T6);
    T3 = CALL3(1,VARREF(Ylst),LITREF(lit_307),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_370) {
  P x_,r_,tailQ_;
  P prop_initsF1785;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_isa_prop_inits),x_);
  prop_initsF1785 = T1;
  T5 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_isa_parent),x_);
  T7 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_isa_init_props),prop_initsF1785);
  T6 = CALL1(1,VARREF(Yx8rSastYpairize),T7);
  T9 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_isa_init_values),prop_initsF1785);
  T8 = CALL1(1,VARREF(Yx8rSastYpairize),T9);
  T4 = CALL3(1,VARREF(Ylst),T5,T6,T8);
  T3 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_make_application),LITREF(lit_459),T4);
  T2 = CALL3(1,VARREF(Yx8rSastYobjectify),T3,r_,tailQ_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_371) {
  P x_,r_,tailQ_;
  P nameF1786;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_definition_variable),x_);
  nameF1786 = T1;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_461));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_306));
  T8 = CALL1(1,VARREF(Ylst),nameF1786);
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T11 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_define_class_parents),x_);
  T10 = CALL1(1,VARREF(Yx8rSastYpairize),T11);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,T9,Ynil);
  T2 = CALL3(1,VARREF(Yx8rSastYobjectify_definition),nameF1786,T3,r_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_372) {
  P x_,r_,tailQ_;
  P typeF1791;
  P setter_nameF1790;
  P ownerF1789;
  P varF1788;
  P nameF1787;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_prop_name),x_);
  nameF1787 = T1;
  T3 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_prop_init_var),x_);
  varF1788 = T3;
  T5 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_prop_owner),x_);
  ownerF1789 = T5;
  T7 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_fab_setter_name),nameF1787);
  setter_nameF1790 = T7;
  T9 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_prop_type),x_);
  typeF1791 = T9;
  T13 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_fab_getter),nameF1787,ownerF1789);
  T14 = CALL3(1,VARREF(Yx8rSsyntaxYsexpr_fab_setter),nameF1787,ownerF1789,typeF1791);
  T18 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_prop_initQ),x_);
  if (T18 != YPfalse) {
    T23 = CALL1(1,VARREF(Ylst),varF1788);
    T24 = CALL1(1,VARREF(Ylst),LITREF(lit_372));
    T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,Ynil);
    T21 = CALL1(1,VARREF(Ylst),T22);
    T20 = CALL2(1,VARREF(YgooSmacrosYcat),T21,Ynil);
    T26 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_prop_init),x_);
    T25 = CALL1(1,VARREF(Ylst),T26);
    T19 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_make_anonymous_method),T20,T25);
    T17 = T19;
  } else {
    T17 = LITREF(lit_464);
  }
  T16 = CALLN(1,VARREF(Ylst),5,ownerF1789,nameF1787,setter_nameF1790,typeF1791,T17);
  T15 = CALL2(1,VARREF(Yx8rSsyntaxYsexpr_make_application),LITREF(lit_463),T16);
  T12 = CALL3(1,VARREF(Ylst),T13,T14,T15);
  T11 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_make_begin),T12);
  T10 = CALL3(1,VARREF(Yx8rSastYobjectify),T11,r_,tailQ_);
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_373) {
  P x_,r_,tailQ_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = CALL1(1,VARREF(Ytail),x_);
  T1 = CALL1(1,VARREF(Yhead),T2);
  T0 = CALL4(1,VARREF(Yx8rSastYobjectify_compile_time),T1,r_,tailQ_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_374) {
  P x_,r_,tailQ_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = CALL1(1,VARREF(Ytail),x_);
  T1 = CALL1(1,VARREF(Yhead),T2);
  T0 = CALL4(1,VARREF(Yx8rSastYobjectify_compile_time),T1,r_,tailQ_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_375) {
  P x_,r_,tailQ_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_forward_primitiveQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_function_definition_variable),x_);
    CALL4(1,VARREF(Yx8rSastYast_define_binding),r_,T2,YPfalse,LITREF(lit_343));
    T3 = CALL3(1,VARREF(Yx8rSastYobjectify),YPfalse,r_,tailQ_);
    T0 = T3;
  } else {
    T5 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_function_definition_variable),x_);
    T6 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_function_signature),x_);
    T7 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_function_body),x_);
    T4 = CALL4(1,VARREF(Yx8rSastYobjectify_primitive_definition),T5,T6,T7,r_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_376) {
  P x_,r_,tailQ_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_expand_backquote),x_);
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_macro_expand_377) {
  P x_,r_,tailQ_;
  P resF1794;
  P tmpF1793;
  P mF1792;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = CALL1(1,VARREF(Yhead),x_);
  T1 = CALL3(1,VARREF(Yx8rSastYobjectify),T2,r_,tailQ_);
  mF1792 = T1;
  T5 = CALL2(1,VARREF(YisaQ),mF1792,VARREF(Yx8rSastYLmodule_bindingG));
  tmpF1793 = T5;
  if (tmpF1793 != YPfalse) {
    T8 = CALL1(1,VARREF(Yx8rSastYbinding_kind),mF1792);
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),T8,LITREF(lit_284));
    T6 = T7;
  } else {
    T6 = YPfalse;
  }
  T4 = T6;
  if (T4 != YPfalse) {
    T11 = CALL1(1,VARREF(Yx8rSastYbinding_handler),mF1792);
    T10 = CALL3(1,T11,x_,r_,tailQ_);
    resF1794 = T10;
    T9 = resF1794;
    T3 = T9;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_378) {
  P x_,r_,tailQ_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = CALL1(1,VARREF(YgooStypesY2nd),x_);
  T1 = CALL3(1,VARREF(Yx8rSastYast_macro_expand),T2,r_,tailQ_);
  T0 = CALL2(1,VARREF(Yx8rSastYobjectify_quotation),T1,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_379) {
  P x_,r_,tailQ_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYexpand_syntax_if),x_);
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_380) {
  P x_,r_,tailQ_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Ytail),x_);
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify_export),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_381) {
  P x_,r_,tailQ_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooStypesY2nd),x_);
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify_use_module),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_382) {
  P x_,r_,tailQ_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooStypesY2nd),x_);
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify_useSexport_module),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_transaction_implemented_bindings_383) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYtransaction_implemented_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_transaction_implemented_bindings_setter_384) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYtransaction_implemented_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_385) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)10));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_transaction_dependents_386) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYtransaction_dependents));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_transaction_dependents_setter_387) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYtransaction_dependents));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_388) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)10));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYtransaction_register_implemented_binding) {
  P b_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T0 = CALL1(1,VARREF(Ynot),VARREF(Yx8rSastYTcurrent_subtransactionT));
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_487));
  } else {
  }
  T3 = CALL1(1,VARREF(Yx8rSastYtransaction_implemented_bindings),VARREF(Yx8rSastYTcurrent_subtransactionT));
  T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,T3,b_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(Yx8rSastYtransaction_register_dependent) {
  P d_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(d_, 0);
loop:
  T0 = CALL1(1,VARREF(Ynot),VARREF(Yx8rSastYTcurrent_subtransactionT));
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_490));
  } else {
  }
  T3 = CALL1(1,VARREF(Yx8rSastYtransaction_dependents),VARREF(Yx8rSastYTcurrent_subtransactionT));
  T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,T3,d_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(Yx8rSastYtransaction_emptyQ) {
  P t_;
  P tmpF1795;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYtransaction_implemented_bindings),t_);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T2);
  tmpF1795 = T1;
  if (tmpF1795 != YPfalse) {
    T5 = CALL1(1,VARREF(Yx8rSastYtransaction_dependents),t_);
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T5);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_392) {
  P k_,v_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(k_, 0);
  ARG(v_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,FREEREF(0),k_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_393) {
  P k_,v_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(k_, 0);
  ARG(v_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,FREEREF(0),k_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYmerge_transactionsX) {
  P t1_,t2_;
  P t2_dependentsF1799;
  P t1_dependentsF1798;
  P t2_bindingsF1797;
  P t1_bindingsF1796;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYtransaction_emptyQ),t2_);
  if (T1 != YPfalse) {
    T0 = t1_;
  } else {
    T3 = CALL1(1,VARREF(Yx8rSastYtransaction_emptyQ),t1_);
    if (T3 != YPfalse) {
      T2 = t2_;
    } else {
      if (YPtrue != YPfalse) {
        T6 = CALL1(1,VARREF(Yx8rSastYtransaction_implemented_bindings),t1_);
        t1_bindingsF1796 = T6;
        T8 = CALL1(1,VARREF(Yx8rSastYtransaction_implemented_bindings),t2_);
        t2_bindingsF1797 = T8;
        T10 = CALL1(1,VARREF(Yx8rSastYtransaction_dependents),t1_);
        t1_dependentsF1798 = T10;
        T12 = CALL1(1,VARREF(Yx8rSastYtransaction_dependents),t2_);
        t2_dependentsF1799 = T12;
        T13 = FUNFAB(fun_392,1,t1_bindingsF1796);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T13,t2_bindingsF1797);
        T14 = FUNFAB(fun_393,1,t1_dependentsF1798);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T14,t2_dependentsF1799);
        T11 = t1_;
        T9 = T11;
        T7 = T9;
        T5 = T7;
        T4 = T5;
      } else {
        T4 = YPfalse;
      }
      T2 = T4;
    }
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_395) {
  P binding_,junk_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(junk_, 1);
loop:
  T0 = CALL2(1,VARREF(Yx8rSastYbinding_freeQ_setter),YPtrue,binding_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_396) {
  P dependent_,junk_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(junk_, 1);
loop:
  T0 = CALL1(1,VARREF(Yx8rSdependencyYdetach_dependent),dependent_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYroll_back_transaction) {
  P t_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T0 = fun_395;
  T1 = CALL1(1,VARREF(Yx8rSastYtransaction_implemented_bindings),t_);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T0,T1);
  T3 = fun_396;
  T4 = CALL1(1,VARREF(Yx8rSastYtransaction_dependents),t_);
  T2 = CALL2(1,VARREF(YgooScolsScolYdo_keyed),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_398) {
  P valueF1800;
  P T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(Ynew),VARREF(Yx8rSastYLtransactionG));
  VARSET(Yx8rSastYTcurrent_subtransactionT,T0);
  T2 = CALL0(1,FREEREF(0));
  valueF1800 = T2;
  BOXVAL(FREEREF(1)) = YPtrue;
  T1 = valueF1800;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_399) {
  P T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T0 = BOXVAL(FREEREF(0));
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(Yx8rSastYmodule_transaction),FREEREF(1));
    T2 = CALL2(1,VARREF(Yx8rSastYmerge_transactionsX),T3,VARREF(Yx8rSastYTcurrent_subtransactionT));
    T1 = CALL2(1,VARREF(Yx8rSastYmodule_transaction_setter),T2,FREEREF(1));
  } else {
    T4 = CALL1(1,VARREF(Yx8rSastYroll_back_transaction),VARREF(Yx8rSastYTcurrent_subtransactionT));
  }
  T5 = VARSET(Yx8rSastYTcurrent_subtransactionT,FREEREF(2));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(Yx8rSastYcall_with_subtransaction) {
  P module_,thunk_;
  P savedF1802;
  P successF1801;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(module_, 0);
  ARG(thunk_, 1);
loop:
  successF1801 = YPfalse;
  successF1801 = BOXFAB(successF1801);
  savedF1802 = VARREF(Yx8rSastYTcurrent_subtransactionT);
  T4 = FUNFAB(fun_398,2,thunk_,successF1801);
  T5 = FUNFAB(fun_399,3,successF1801,module_,savedF1802);
  T3 = with_cleanup(T4,T5);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1447_401) {
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

FUNCODEDEF(fun_402) {
  P return_;
  P x_1446F1811;
  P x_1446F1810;
  P x_1446F1809;
  P x_1446F1808;
  P x_1446F1807;
  P bodyF1806;
  P moduleF1805;
  P x_1446F1804;
  P x_1447F1803;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1447_401,1);
  x_1447F1803 = T1;
  FUNINIT(x_1447F1803, 1,return_);
  x_1446F1804 = FREEREF(0);
  moduleF1805 = YPfalse;
  moduleF1805 = BOXFAB(moduleF1805);
  bodyF1806 = YPfalse;
  bodyF1806 = BOXFAB(bodyF1806);
  T7 = CALL2(1,VARREF(YisaQ),x_1446F1804,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1446F1804,LITREF(lit_503),x_1447F1803);
    x_1446F1807 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1446F1807,x_1447F1803);
    x_1446F1808 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1446F1808,x_1447F1803);
    BOXVAL(moduleF1805) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1446F1808);
    x_1446F1809 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1446F1809,x_1447F1803);
    T12 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1446F1807);
    x_1446F1810 = T16;
    BOXVAL(bodyF1806) = x_1446F1810;
    x_1446F1811 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1446F1811,x_1447F1803);
    T17 = T18;
    T10 = T17;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1447F1803,LITREF(lit_7),x_1446F1804);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_499));
  T23 = BOXVAL(moduleF1805);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_441));
  T27 = CALL1(1,VARREF(Ylst),Ynil);
  T28 = BOXVAL(bodyF1806);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T28,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T24,Ynil);
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_403) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_402,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_404) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify),FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYobjectify_with_subtransaction) {
  P e_,r_,tailQ_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYenvironment_module),r_);
  T2 = FUNFAB(fun_404,3,e_,r_,tailQ_);
  T0 = CALL2(1,VARREF(Yx8rSastYcall_with_subtransaction),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_modules_406) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYmodule_loader_modules));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_modules_setter_407) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYmodule_loader_modules));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_408) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)1000));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_stack_409) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYmodule_loader_stack));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_stack_setter_410) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYmodule_loader_stack));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_411) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_module_name_412) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYmodule_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_name_setter_413) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYmodule_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_target_environment_414) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYmodule_target_environment));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_target_environment_setter_415) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYmodule_target_environment));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_syntax_environment_416) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYmodule_syntax_environment));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_syntax_environment_setter_417) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYmodule_syntax_environment));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pmodule_exports_418) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYPmodule_exports));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pmodule_exports_setter_419) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYPmodule_exports));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_420) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)1000));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_data_processedQ_421) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYmodule_data_processedQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_data_processedQ_setter_422) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYmodule_data_processedQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_423) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_module_runtime_data_424) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYmodule_runtime_data));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_runtime_data_setter_425) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYmodule_runtime_data));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_426) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_module_transaction_427) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYmodule_transaction));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_transaction_setter_428) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYmodule_transaction));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_429) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(Ynew),VARREF(Yx8rSastYLtransactionG));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_exports_430) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  CALL1(1,VARREF(Yx8rSastYensure_module_data),x_);
  T0 = CALL1(1,VARREF(Yx8rSastYPmodule_exports),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSastYset_module_environments) {
  P mod_,syntax_env_,target_env_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(syntax_env_, 1);
  ARG(target_env_, 2);
loop:
  CALL2(1,VARREF(Yx8rSastYmodule_syntax_environment_setter),syntax_env_,mod_);
  T0 = CALL2(1,VARREF(Yx8rSastYmodule_target_environment_setter),target_env_,mod_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_432) {
  P mod_;
  P T0;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T0 = CALL1(1,FREEREF(0),mod_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYdo_module_loader_modules) {
  P f_,loader_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(loader_, 1);
loop:
  T1 = FUNFAB(fun_432,1,f_);
  T2 = CALL1(1,VARREF(Yx8rSastYmodule_loader_modules),loader_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_module_type_434) {
  P loader_;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(Yx8rSastYLmoduleG));
}

FUNCODEDEF(Yx8rSastYregister_moduleX) {
  P module_loader_,mod_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(module_loader_, 0);
  ARG(mod_, 1);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYmodule_loader_modules),module_loader_);
  T1 = CALL1(1,VARREF(Yx8rSastYmodule_name),mod_);
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),mod_,T0,T1);
UNLINK_STACK();
  RET(module_loader_);
}

FUNCODEDEF(Yx8rSastYprobe_module) {
  P loader_,name_;
  P tmpF1812;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYmodule_loader_modules),loader_);
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),T2,name_,YPfalse);
  tmpF1812 = T1;
  if (tmpF1812 != YPfalse) {
    T3 = tmpF1812;
  } else {
    T4 = CALL2(1,VARREF(Yx8rSastYload_and_register_module),loader_,name_);
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_437) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(Yx8rSastYload_module),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_438) {
  P x_1451F1816;
  P x_1450F1815;
  P tup39F1814;
  P x_1449F1813;
  P T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  x_1449F1813 = FREEREF(0);
  T3 = CALL1(1,VARREF(Yx8rSastYmodule_loader_stack),x_1449F1813);
  T2 = CALL1(1,VARREF(YgooScolsSseqxYpopX),T3);
  tup39F1814 = T2;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup39F1814,YPint((P)0));
  x_1450F1815 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup39F1814,YPint((P)1));
  x_1451F1816 = T7;
  CALL2(1,VARREF(Yx8rSastYmodule_loader_stack_setter),x_1450F1815,x_1449F1813);
  T6 = x_1451F1816;
  T4 = T6;
  T1 = T4;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYload_and_register_module) {
  P loader_,name_;
  P modF1821;
  P x_1448F1820;
  P indentF1819;
  P depthF1818;
  P stackF1817;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYmodule_loader_stack),loader_);
  stackF1817 = T1;
  T3 = CALL1(1,VARREF(YgooStypesYlen),stackF1817);
  depthF1818 = T3;
  T5 = CALL2(1,VARREF(YgooScolsSstrYstring_repeat),LITREF(lit_537),depthF1818);
  indentF1819 = T5;
  T6 = CALL2(1,VARREF(YgooScolsScolYmemQ),stackF1817,name_);
  if (T6 != YPfalse) {
    T8 = CALL1(1,VARREF(Yhead),stackF1817);
    T7 = CALL3(1,VARREF(Yerror),LITREF(lit_538),T8,name_);
  } else {
  }
  CALL4(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_539),indentF1819,name_);
  x_1448F1820 = loader_;
  T12 = CALL1(1,VARREF(Yx8rSastYmodule_loader_stack),x_1448F1820);
  T11 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T12,name_);
  T10 = CALL2(1,VARREF(Yx8rSastYmodule_loader_stack_setter),T11,x_1448F1820);
  T14 = FUNFAB(fun_437,2,loader_,name_);
  T15 = FUNFAB(fun_438,1,loader_);
  T13 = with_cleanup(T14,T15);
  modF1821 = T13;
  CALL2(1,VARREF(Yx8rSastYregister_moduleX),loader_,modF1821);
  CALL3(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_540),indentF1819);
  T9 = modF1821;
  T4 = T9;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSastYexport_bindingX) {
  P module_,name_,binding_;
  P tmpF1824;
  P existingF1823;
  P exportsF1822;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(name_, 1);
  ARG(binding_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYmodule_exports),module_);
  exportsF1822 = T1;
  T3 = CALL3(1,VARREF(YgooScolsScolYelt_or),exportsF1822,name_,YPfalse);
  existingF1823 = T3;
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),existingF1823,YPfalse);
  tmpF1824 = T6;
  if (tmpF1824 != YPfalse) {
    T7 = tmpF1824;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),existingF1823,binding_);
    T7 = T8;
  }
  T5 = T7;
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T9 = CALLN(1,VARREF(Yerror),5,LITREF(lit_543),existingF1823,binding_,module_,name_);
  } else {
  }
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,exportsF1822,name_);
  T2 = YPfalse;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSastYbinding_native_toQ) {
  P binding_,module_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(module_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYmodule_name),module_);
  T2 = CALL1(1,VARREF(Yx8rSastYbinding_module_name),binding_);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_442) {
  P binding_;
  P tmpF1825;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYbinding_freeQ),binding_);
  tmpF1825 = T2;
  if (tmpF1825 != YPfalse) {
    T4 = CALL2(1,VARREF(Yx8rSastYbinding_native_toQ),binding_,FREEREF(0));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(Yx8rSastYmodule_name),FREEREF(0));
    T7 = CALL1(1,VARREF(Yx8rSastYbinding_name),binding_);
    T5 = CALL4(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_546),T6,T7);
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYreport_undefined_global_bindings) {
  P mod_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = FUNFAB(fun_442,1,mod_);
  T2 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),mod_);
  T0 = CALL2(1,VARREF(Yx8rSastYdo_static_global_bindings),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_444) {
  P uses_mod_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(uses_mod_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYmodule_name),uses_mod_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(Yx8rSastYmodule_name),FREEREF(2));
    T3 = CALL1(0,FREEREF(1),T4);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_445) {
  P mod_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = FUNFAB(fun_444,3,FREEREF(0),FREEREF(1),mod_);
  T3 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),mod_);
  T2 = CALL1(1,VARREF(Yx8rSastYenvironment_uses_modules),T3);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_user_446) {
  P modname_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),FREEREF(0),modname_,YPfalse);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),modname_,FREEREF(0),modname_);
    T4 = FUNFAB(fun_445,2,modname_,FREEREF(1));
    T3 = CALL2(1,VARREF(Yx8rSastYdo_module_loader_modules),T4,FREEREF(2));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_447) {
  P v_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(v_, 0);
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSmacrosYpair),v_,T2);
  T0 = BOXVAL(FREEREF(0)) = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYcompute_transitive_users) {
  P loader_,modnames_;
  P collector_F1828;
  P add_userF1827;
  P usersF1826;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)100));
  usersF1826 = T1;
  T3 = FUNSHELL(0,fun_add_user_446,3);
  add_userF1827 = T3;
  FUNINIT(add_userF1827, 3,usersF1826,add_userF1827,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),add_userF1827,modnames_);
  collector_F1828 = Ynil;
  collector_F1828 = BOXFAB(collector_F1828);
  T6 = FUNFAB(fun_447,1,collector_F1828);
  CALL2(1,VARREF(YgooSmacrosYdo),T6,usersF1826);
  T8 = BOXVAL(collector_F1828);
  T7 = CALL1(1,VARREF(YgooSmacrosYrevX),T8);
  T4 = T7;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSastYremove_module_internalX) {
  P loader_,mod_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(mod_, 1);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYmodule_transaction),mod_);
  CALL1(1,VARREF(Yx8rSastYroll_back_transaction),T0);
  T2 = CALL1(1,VARREF(Yx8rSastYmodule_loader_modules),loader_);
  T3 = CALL1(1,VARREF(Yx8rSastYmodule_name),mod_);
  T1 = CALL2(1,VARREF(YgooScolsScolxYdelX),T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_450) {
  P modname_;
  P modF1829;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYmodule_loader_modules),FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),T2,modname_);
  modF1829 = T1;
  T3 = CALL2(1,VARREF(Yx8rSastYremove_module_internalX),FREEREF(0),modF1829);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYremove_modules_by_nameX) {
  P loader_,modnames_;
  P remove_namesF1830;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
loop:
  T1 = CALL2(1,VARREF(Yx8rSastYcompute_transitive_users),loader_,modnames_);
  remove_namesF1830 = T1;
  T2 = FUNFAB(fun_450,1,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),T2,remove_namesF1830);
  T0 = YPfalse;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSastYmodule_name_to_relpath) {
  P name_;
  P namestrF1831;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T2 = CALL1(1,VARREF(Ysym_name),name_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmathYto_lower),T2);
  namestrF1831 = T1;
  T4 = CALL2(1,VARREF(YgooScolsSstrYstring_split),namestrF1831,YPchr((P)47));
  T3 = CALL2(1,VARREF(YgooScolsSstrYstring_join),T4,VARREF(YgooSsystemYTpath_separatorT));
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_453) {
  P name_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(Yx8rSastYfind_binding),name_,FREEREF(0));
  T0 = CALL2(1,VARREF(Yx8rSastYinsert_globalX),T1,FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYinstall_initial_bindings) {
  P env_,loader_;
  P bootenvF1833;
  P bootmodF1832;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(loader_, 1);
loop:
  T1 = CALL2(1,VARREF(Yx8rSastYprobe_module),loader_,VARREF(Yx8rSastYDgoo_boot_module_name));
  bootmodF1832 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),bootmodF1832);
  bootenvF1833 = T3;
  T5 = FUNFAB(fun_453,2,bootenvF1833,env_);
  T4 = CALL2(1,VARREF(YgooSmacrosYdo),T5,LITREF(lit_555));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYfab_static_global_environment) {
  P module_,module_loader_,allow_foreign_namesQ_;
  P new_envF1834;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(module_loader_, 1);
  ARG(allow_foreign_namesQ_, 2);
loop:
  T2 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)2000));
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLstatic_global_environmentG),VARREF(Yx8rSastYenvironment_module),module_,VARREF(Yx8rSastYenvironment_module_loader),module_loader_,VARREF(Yx8rSastYenvironment_next),VARREF(Yx8rSastYDempty_static_environment),VARREF(Yx8rSastYenvironment_allows_foreign_namesQ),allow_foreign_namesQ_,VARREF(Yx8rSastYenvironment_bindings),T2);
  new_envF1834 = T1;
  T0 = new_envF1834;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_456) {
  P name_,binding_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(binding_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooScolsScolYmemQ),FREEREF(0),name_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(Yx8rSastYinsert_globalX),binding_,FREEREF(1));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYfab_subset_environment) {
  P module_,src_module_,excluded_;
  P new_envF1836;
  P loaderF1835;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(src_module_, 1);
  ARG(excluded_, 2);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),src_module_);
  T1 = CALL1(1,VARREF(Yx8rSastYenvironment_module_loader),T2);
  loaderF1835 = T1;
  T4 = CALL3(1,VARREF(Yx8rSastYfab_static_global_environment),module_,loaderF1835,YPfalse);
  new_envF1836 = T4;
  T5 = FUNFAB(fun_456,2,excluded_,new_envF1836);
  T6 = CALL1(1,VARREF(Yx8rSastYmodule_exports),src_module_);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T5,T6);
  T3 = new_envF1836;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_458) {
LINK_STACK();
loop:
  CALL2(1,VARREF(Yx8rSastYload_in),FREEREF(0),FREEREF(1));
  CALL2(1,VARREF(Yx8rSastYenvironment_allows_foreign_namesQ_setter),YPtrue,FREEREF(1));
  BOXVAL(FREEREF(2)) = YPtrue;
UNLINK_STACK();
  QRET(FREEREF(3));
}

FUNCODEDEF(fun_459) {
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(Yx8rSastYmodule_transaction),FREEREF(1));
    T3 = CALL1(1,VARREF(Yx8rSastYroll_back_transaction),T4);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_460) {
  P T2,T1,T0;
LINK_STACK();
loop:
  VARSET(Yx8rSastYTnow_rt_envT,FREEREF(0));
  T1 = FUNFAB(fun_458,4,FREEREF(1),FREEREF(0),FREEREF(2),FREEREF(3));
  T2 = FUNFAB(fun_459,2,FREEREF(2),FREEREF(3));
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_461) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(Yx8rSastYTnow_rt_envT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_module_462) {
  P loader_,name_;
  P x_1452F1843;
  P src_fileF1842;
  P fileF1841;
  P keepmodQF1840;
  P envF1839;
  P moduleF1838;
  P typeF1837;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYmodule_loader_module_type),loader_);
  typeF1837 = T1;
  T3 = CALL3(1,VARREF(Ynew),typeF1837,VARREF(Yx8rSastYmodule_name),name_);
  moduleF1838 = T3;
  T5 = CALL3(1,VARREF(Yx8rSastYfab_static_global_environment),moduleF1838,loader_,YPfalse);
  envF1839 = T5;
  keepmodQF1840 = YPfalse;
  keepmodQF1840 = BOXFAB(keepmodQF1840);
  T9 = CALL1(1,VARREF(Yx8rSastYmodule_name_to_relpath),name_);
  fileF1841 = T9;
  T12 = CALL1(1,VARREF(YgooSsystemYgoo_filename),fileF1841);
  T11 = CALL1(1,VARREF(YgooSsystemYadd_src_path),T12);
  src_fileF1842 = T11;
  CALL3(1,VARREF(Yx8rSastYset_module_environments),moduleF1838,envF1839,envF1839);
  CALL2(1,VARREF(Yx8rSastYinstall_initial_bindings),envF1839,loader_);
  x_1452F1843 = VARREF(Yx8rSastYTnow_rt_envT);
  T15 = FUNFAB(fun_460,4,envF1839,src_fileF1842,keepmodQF1840,moduleF1838);
  T16 = FUNFAB(fun_461,1,x_1452F1843);
  T14 = with_cleanup(T15,T16);
  T13 = T14;
  T10 = T13;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSastYruntime_module_loader) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(VARREF(Yx8rSastYTruntime_module_loaderT));
}

FUNCODEDEF(Yx8rSastYruntime_module) {
  P modname_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL0(1,VARREF(Yx8rSastYruntime_module_loader));
  T0 = CALL2(1,VARREF(Yx8rSastYprobe_module),T1,modname_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYruntime_environment) {
  P modname_;
  P moduleF1844;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYruntime_module),modname_);
  moduleF1844 = T1;
  CALL1(1,VARREF(Yx8rSastYensure_module_data),moduleF1844);
  T2 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),moduleF1844);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYruntime_core_environment) {
  P modname_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYruntime_module),modname_);
  T0 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYunchecked_runtime_environment) {
  P modname_;
  P loaderF1845;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL0(1,VARREF(Yx8rSastYruntime_module_loader));
  loaderF1845 = T1;
  T5 = CALL1(1,VARREF(Yx8rSastYmodule_loader_stack),loaderF1845);
  T4 = CALL3(1,VARREF(YgooScolsScolYelt_or),T5,YPint((P)0),YPfalse);
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,modname_);
  if (T3 != YPfalse) {
    T2 = VARREF(Yx8rSastYTnow_rt_envT);
  } else {
    T7 = CALL1(1,VARREF(Yx8rSastYruntime_module),modname_);
    T6 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),T7);
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYreloader_do_create_module) {
  P modname_,data_;
  P envF1849;
  P modF1848;
  P typeF1847;
  P loaderF1846;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(modname_, 0);
  ARG(data_, 1);
loop:
  T1 = CALL0(1,VARREF(Yx8rSastYruntime_module_loader));
  loaderF1846 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYmodule_loader_module_type),loaderF1846);
  typeF1847 = T3;
  T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modname_);
  T5 = CALL3(1,VARREF(Ynew),typeF1847,VARREF(Yx8rSastYmodule_name),T6);
  modF1848 = T5;
  T8 = CALL3(1,VARREF(Yx8rSastYfab_static_global_environment),modF1848,loaderF1846,YPtrue);
  envF1849 = T8;
  CALL2(1,VARREF(Yx8rSastYmodule_data_processedQ_setter),YPfalse,modF1848);
  CALL3(1,VARREF(Yx8rSastYset_module_environments),modF1848,envF1849,envF1849);
  CALL2(1,VARREF(Yx8rSastYmodule_runtime_data_setter),data_,modF1848);
  CALL2(1,VARREF(Yx8rSastYregister_moduleX),loaderF1846,modF1848);
  T7 = modF1848;
  T4 = T7;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSastYreloader_do_use_module) {
  P mod_,uses_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(uses_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),mod_);
  T1 = CALL1(1,VARREF(Yx8rSastYenvironment_uses_modules),T2);
  T0 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T1,uses_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYreloader_do_import) {
  P mod_,name_,from_mod_,original_name_;
  P bindingF1851;
  P home_envF1850;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(from_mod_, 2);
  ARG(original_name_, 3);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),from_mod_);
  home_envF1850 = T1;
  T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),original_name_);
  T3 = CALL2(1,VARREF(Yx8rSastYfind_binding),T4,home_envF1850);
  bindingF1851 = T3;
  T5 = CALL1(1,VARREF(Ynot),bindingF1851);
  if (T5 != YPfalse) {
    T7 = CALL1(1,VARREF(Yx8rSastYmodule_name),from_mod_);
    T8 = CALL1(1,VARREF(Yx8rSastYmodule_name),mod_);
    T6 = CALL4(1,VARREF(Yerror),LITREF(lit_574),original_name_,T7,T8);
  } else {
  }
  T10 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),mod_);
  T9 = CALL2(1,VARREF(Yx8rSastYinsert_globalX),bindingF1851,T10);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYprocess_module_data) {
  P module_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(module_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYmodule_runtime_data),module_);
  T0 = (P)YPprocess_module(T1,VARREF(Yx8rSastYreloader_do_import),VARREF(Yx8rSastYreloader_do_export));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYensure_module_data) {
  P module_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(module_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYmodule_data_processedQ),module_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(Yx8rSastYmodule_data_processedQ_setter),YPtrue,module_);
    T3 = CALL1(1,VARREF(Yx8rSastYprocess_module_data),module_);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYreloader_do_runtime_binding) {
  P mod_,name_,loc_;
  P bindingF1852;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(loc_, 2);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYmodule_name),mod_);
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_319),VARREF(Yx8rSastYbinding_module_name),T2,VARREF(Yx8rSastYbinding_name),T3,VARREF(Yx8rSastYbinding_freeQ),YPfalse,VARREF(Yx8rSastYbinding_locative),loc_);
  bindingF1852 = T1;
  T5 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),mod_);
  T4 = CALL2(1,VARREF(Yx8rSastYinsert_globalX),bindingF1852,T5);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYreloader_do_other_binding) {
  P mod_,name_;
  P bindingF1853;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYmodule_name),mod_);
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_343),VARREF(Yx8rSastYbinding_module_name),T2,VARREF(Yx8rSastYbinding_name),T3,VARREF(Yx8rSastYbinding_freeQ),YPtrue);
  bindingF1853 = T1;
  T5 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),mod_);
  T4 = CALL2(1,VARREF(Yx8rSastYinsert_globalX),bindingF1853,T5);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYreloader_do_export) {
  P mod_,name_,as_name_;
  P bindingF1854;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(as_name_, 2);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T3 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),mod_);
  T1 = CALL2(1,VARREF(Yx8rSastYfind_binding),T2,T3);
  bindingF1854 = T1;
  if (bindingF1854 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),as_name_);
    T5 = CALL3(1,VARREF(Yx8rSastYexport_bindingX),mod_,T6,bindingF1854);
    T4 = T5;
  } else {
    T8 = CALL1(1,VARREF(Yx8rSastYmodule_name),mod_);
    T7 = CALL3(1,VARREF(Yerror),LITREF(lit_581),name_,T8);
    T4 = T7;
  }
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYreload_modules) {
  P T0;
LINK_STACK();
loop:
  T0 = (P)YPbuild_runtime_modules(VARREF(Yx8rSastYreloader_do_create_module),VARREF(Yx8rSastYreloader_do_use_module),VARREF(Yx8rSastYreloader_do_runtime_binding),VARREF(Yx8rSastYreloader_do_other_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_477) {
  P binding_;
  P cloneF1855;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYbinding_name),binding_);
  T1 = CALL4(1,VARREF(Yx8rSastYast_define_binding),FREEREF(0),T2,YPfalse,LITREF(lit_283));
  cloneF1855 = T1;
  T4 = CALL1(1,VARREF(Yx8rSastYbinding_handler),binding_);
  T3 = CALL2(1,VARREF(Yx8rSastYbinding_handler_setter),T4,cloneF1855);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYinstall_magic_bindings) {
  P env_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T1 = FUNFAB(fun_477,1,env_);
  T2 = CALL0(1,VARREF(Yx8rSastYmagic_bindings));
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYreload_macros) {
  P T1,T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSruntimeYrcurry),VARREF(YPPmacro),YPfalse);
  CALL4(1,VARREF(YgooScolsScolYdo3),T0,VARREF(YTboot_macro_module_namesT),VARREF(YTboot_macro_namesT),VARREF(YTboot_macro_expandersT));
  T1 = VARSET(YTmacros_okQT,YPtrue);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(Yx8rSastYinstall_interpreter_hacks) {
  P env_;
  P T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYinit_environment_for_eval),env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYinit_runtime) {
  P bootenvF1857;
  P bootmodF1856;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  CALL0(1,VARREF(Yx8rSastYreload_modules));
  T2 = CALL0(1,VARREF(Yx8rSastYruntime_module_loader));
  T1 = CALL2(1,VARREF(Yx8rSastYprobe_module),T2,VARREF(Yx8rSastYDgoo_boot_module_name));
  bootmodF1856 = T1;
  T4 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),bootmodF1856);
  bootenvF1857 = T4;
  CALL1(1,VARREF(Yx8rSastYinstall_magic_bindings),bootenvF1857);
  CALL0(1,VARREF(Yx8rSastYreload_macros));
  CALL1(1,VARREF(Yx8rSastYinstall_interpreter_hacks),bootenvF1857);
  T3 = YPfalse;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYfab_syntax_environment) {
  P module_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(module_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYruntime_module),LITREF(lit_589));
  T0 = CALL3(1,VARREF(Yx8rSastYfab_subset_environment),module_,T1,VARREF(Yx8rSastYsyntax_environment_excluded_bindings));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSastYfab_g2c_module) {
  P loader_,name_;
  P target_envF1861;
  P syntax_envF1860;
  P moduleF1859;
  P typeF1858;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYmodule_loader_module_type),loader_);
  typeF1858 = T1;
  T3 = CALL3(1,VARREF(Ynew),typeF1858,VARREF(Yx8rSastYmodule_name),name_);
  moduleF1859 = T3;
  T5 = CALL1(1,VARREF(Yx8rSastYfab_syntax_environment),moduleF1859);
  syntax_envF1860 = T5;
  T7 = CALL3(1,VARREF(Yx8rSastYfab_static_global_environment),moduleF1859,loader_,YPfalse);
  target_envF1861 = T7;
  CALL3(1,VARREF(Yx8rSastYset_module_environments),moduleF1859,syntax_envF1860,target_envF1861);
  T8 = CALL2(1,VARREF(YgooSmacrosYEE),name_,VARREF(Yx8rSastYDgoo_boot_module_name));
  if (T8 != YPfalse) {
    T9 = CALL1(1,VARREF(Yx8rSastYinit_g2c_boot_environment),target_envF1861);
  } else {
    T10 = CALL2(1,VARREF(Yx8rSastYinit_g2c_regular_environment),target_envF1861,loader_);
  }
  T6 = moduleF1859;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSastYinit_g2c_boot_environment) {
  P env_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T1 = CALL0(1,VARREF(Yx8rSastYmagic_bindings));
  T0 = CALL2(1,VARREF(Yx8rSastYinsert_globalsX),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYinit_g2c_regular_environment) {
  P env_,loader_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(loader_, 1);
loop:
  T0 = CALL2(1,VARREF(Yx8rSastYinstall_initial_bindings),env_,loader_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYinit_ast) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL0(1,VARREF(Yx8rSastYinit_runtime));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_487) {
  P env_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),env_,VARREF(Yx8rSastYLstatic_empty_environmentG));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yx8rSastYframe_bindings),env_);
    CALL2(1,VARREF(YgooSmacrosYdo),FREEREF(0),T3);
    T5 = CALL1(1,VARREF(Yx8rSastYenvironment_next),env_);
    a1 = T5;
    env_ = a1;
    goto loop;
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYdo_static_global_bindings) {
  P f_,env_;
  P loopF1862;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_487,2);
  loopF1862 = T1;
  FUNINIT(loopF1862, 2,f_,loopF1862);
  T2 = CALL1(0,loopF1862,env_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_489) {
  P env_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),env_,VARREF(Yx8rSastYLstatic_empty_environmentG));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yx8rSastYframe_bindings),env_);
    CALL2(1,VARREF(YgooScolsScolYdo_keyed),FREEREF(0),T3);
    T5 = CALL1(1,VARREF(Yx8rSastYenvironment_next),env_);
    a1 = T5;
    env_ = a1;
    goto loop;
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYdo_named_static_global_bindings) {
  P f_,env_;
  P loopF1863;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_489,2);
  loopF1863 = T1;
  FUNINIT(loopF1863, 2,f_,loopF1863);
  T2 = CALL1(0,loopF1863,env_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P Yx8rSastY___main_0___() {
  P T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133;
  P T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117;
  P T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101;
  P T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85;
  P T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69;
  P T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53;
  P T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37;
  P T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"goo/boot");
  VARSET(Yx8rSastYDgoo_boot_module_name,LITREF(lit_0));
  VARSET(Yx8rSastYTcurrent_dependentT,YPfalse);
  lit_1 = YPPsym((P)"exp");
  lit_2 = YPPsym((P)"return");
  lit_3 = YPPsym((P)"x-1422");
  lit_4 = YPPsym((P)"msg");
  lit_5 = YPPsym((P)"args");
  lit_6 = YPPsym((P)"with-dependent");
  lit_7 = YPsb((P)"Match Pattern Failure");
  lit_8 = YPPsym((P)"let");
  lit_9 = YPPsym((P)"*current-dependent*");
  lit_10 = YPPsym((P)"set");
  lit_11 = YPPsym((P)"fin");
  lit_12 = YPPsym((P)"seq");
  T2 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1422_0 = YPmet(FUNCODEREF(fun_x_1422_0),LITREF(lit_3),T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T3 = fun_2;
  YPmacro(YPPsym((P)"x8r/ast"),YPPsym((P)"with-dependent"),T3);
  lit_13 = YPPsym((P)"objectify-error");
  lit_14 = YPPsym((P)"message");
  lit_15 = YPPsym((P)"arguments");
  T4 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_15)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_objectify_error_3 = YPmet(FUNCODEREF(fun_objectify_error_3),LITREF(lit_13),T4,ENVNUL,PNUL,YPfalse);
  T7 = BOUNDP(Yx8rSastYobjectify_error);
  if (T7 != YPfalse) {
    T6 = VARREF(Yx8rSastYobjectify_error);
  } else {
    T6 = YPfalse;
  }
  T8 = fun_objectify_error_3;
  T5 = CALL2(1,VARREF(YPdefine_method),T6,T8);
  VARSET(Yx8rSastYobjectify_error,T5);
  lit_16 = YPPsym((P)"bot");
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_16));
  VARSET(Yx8rSastYast_LbotG,T9);
  lit_17 = YPPsym((P)"<program>");
  T11 = (P)YPpair(VARREF(YLanyG),Ynil);
  T10 = CALL2(1,VARREF(Yfab_class),LITREF(lit_17),T11);
  VARSET(Yx8rSastYLprogramG,T10);
  lit_18 = YPPsym((P)"program-type");
  lit_19 = YPPsym((P)"_x");
  T12 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_type_4 = YPmet(FUNCODEREF(fun_program_type_4),LITREF(lit_18),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(Yx8rSastYprogram_type);
  if (T15 != YPfalse) {
    T14 = VARREF(Yx8rSastYprogram_type);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_program_type_4;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(Yx8rSastYprogram_type,T13);
  lit_20 = YPPsym((P)"program-type-setter");
  lit_21 = YPPsym((P)"_z");
  T17 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_type_setter_5 = YPmet(FUNCODEREF(fun_program_type_setter_5),LITREF(lit_20),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(Yx8rSastYprogram_type_setter);
  if (T20 != YPfalse) {
    T19 = VARREF(Yx8rSastYprogram_type_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_program_type_setter_5;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(Yx8rSastYprogram_type_setter,T18);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLprogramG),VARREF(Yx8rSastYprogram_type),VARREF(Yx8rSastYprogram_type_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_22 = YPPsym((P)"program-register");
  T22 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_register_6 = YPmet(FUNCODEREF(fun_program_register_6),LITREF(lit_22),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(Yx8rSastYprogram_register);
  if (T25 != YPfalse) {
    T24 = VARREF(Yx8rSastYprogram_register);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_program_register_6;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(Yx8rSastYprogram_register,T23);
  lit_23 = YPPsym((P)"program-register-setter");
  T27 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_register_setter_7 = YPmet(FUNCODEREF(fun_program_register_setter_7),LITREF(lit_23),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(Yx8rSastYprogram_register_setter);
  if (T30 != YPfalse) {
    T29 = VARREF(Yx8rSastYprogram_register_setter);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_program_register_setter_7;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(Yx8rSastYprogram_register_setter,T28);
  lit_24 = YPPsym((P)"x");
  T32 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T32,ENVNUL,PNUL,YPfalse);
  T33 = fun_8;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLprogramG),VARREF(Yx8rSastYprogram_register),VARREF(Yx8rSastYprogram_register_setter),VARREF(YLanyG),T33);
  lit_25 = YPPsym((P)"<computed-program>");
  T35 = (P)YPpair(VARREF(Yx8rSastYLprogramG),Ynil);
  T34 = CALL2(1,VARREF(Yfab_class),LITREF(lit_25),T35);
  VARSET(Yx8rSastYLcomputed_programG,T34);
  T36 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLcomputed_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_register_9 = YPmet(FUNCODEREF(fun_program_register_9),LITREF(lit_22),T36,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(Yx8rSastYprogram_register);
  if (T39 != YPfalse) {
    T38 = VARREF(Yx8rSastYprogram_register);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_program_register_9;
  T37 = CALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(Yx8rSastYprogram_register,T37);
  T41 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLcomputed_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_register_setter_10 = YPmet(FUNCODEREF(fun_program_register_setter_10),LITREF(lit_23),T41,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(Yx8rSastYprogram_register_setter);
  if (T44 != YPfalse) {
    T43 = VARREF(Yx8rSastYprogram_register_setter);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_program_register_setter_10;
  T42 = CALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(Yx8rSastYprogram_register_setter,T42);
  T46 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T46,ENVNUL,PNUL,YPfalse);
  T47 = fun_11;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLcomputed_programG),VARREF(Yx8rSastYprogram_register),VARREF(Yx8rSastYprogram_register_setter),VARREF(YLanyG),T47);
  lit_26 = YPPsym((P)"<passive-program>");
  T49 = (P)YPpair(VARREF(Yx8rSastYLprogramG),Ynil);
  T48 = CALL2(1,VARREF(Yfab_class),LITREF(lit_26),T49);
  VARSET(Yx8rSastYLpassive_programG,T48);
  VARSET(Yx8rSastYLbinding_nameG,VARREF(YLanyG));
  lit_27 = YPPsym((P)"<binding>");
  T51 = (P)YPpair(VARREF(YLanyG),Ynil);
  T50 = CALL2(1,VARREF(Yfab_class),LITREF(lit_27),T51);
  VARSET(Yx8rSastYLbindingG,T50);
  lit_28 = YPPsym((P)"binding-name");
  T52 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_name_12 = YPmet(FUNCODEREF(fun_binding_name_12),LITREF(lit_28),T52,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(Yx8rSastYbinding_name);
  if (T55 != YPfalse) {
    T54 = VARREF(Yx8rSastYbinding_name);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_binding_name_12;
  T53 = CALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(Yx8rSastYbinding_name,T53);
  lit_29 = YPPsym((P)"binding-name-setter");
  T57 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(Yx8rSastYLbinding_nameG),VARREF(Yx8rSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_name_setter_13 = YPmet(FUNCODEREF(fun_binding_name_setter_13),LITREF(lit_29),T57,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(Yx8rSastYbinding_name_setter);
  if (T60 != YPfalse) {
    T59 = VARREF(Yx8rSastYbinding_name_setter);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_binding_name_setter_13;
  T58 = CALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(Yx8rSastYbinding_name_setter,T58);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLbindingG),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSastYbinding_name_setter),VARREF(Yx8rSastYLbinding_nameG),VARREF(YPprop_unbound_error));
  lit_30 = YPPsym((P)"binding-type");
  T62 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_type_14 = YPmet(FUNCODEREF(fun_binding_type_14),LITREF(lit_30),T62,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(Yx8rSastYbinding_type);
  if (T65 != YPfalse) {
    T64 = VARREF(Yx8rSastYbinding_type);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_binding_type_14;
  T63 = CALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(Yx8rSastYbinding_type,T63);
  lit_31 = YPPsym((P)"binding-type-setter");
  T67 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(Yx8rSastYLprogramG),VARREF(Yx8rSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_type_setter_15 = YPmet(FUNCODEREF(fun_binding_type_setter_15),LITREF(lit_31),T67,ENVNUL,PNUL,YPfalse);
  T70 = BOUNDP(Yx8rSastYbinding_type_setter);
  if (T70 != YPfalse) {
    T69 = VARREF(Yx8rSastYbinding_type_setter);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_binding_type_setter_15;
  T68 = CALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(Yx8rSastYbinding_type_setter,T68);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLbindingG),VARREF(Yx8rSastYbinding_type),VARREF(Yx8rSastYbinding_type_setter),VARREF(Yx8rSastYLprogramG),VARREF(YPprop_unbound_error));
  lit_32 = YPPsym((P)"binding-inferred-type");
  T72 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_inferred_type_16 = YPmet(FUNCODEREF(fun_binding_inferred_type_16),LITREF(lit_32),T72,ENVNUL,PNUL,YPfalse);
  T75 = BOUNDP(Yx8rSastYbinding_inferred_type);
  if (T75 != YPfalse) {
    T74 = VARREF(Yx8rSastYbinding_inferred_type);
  } else {
    T74 = YPfalse;
  }
  T76 = fun_binding_inferred_type_16;
  T73 = CALL2(1,VARREF(YPdefine_method),T74,T76);
  VARSET(Yx8rSastYbinding_inferred_type,T73);
  lit_33 = YPPsym((P)"binding-inferred-type-setter");
  T77 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_inferred_type_setter_17 = YPmet(FUNCODEREF(fun_binding_inferred_type_setter_17),LITREF(lit_33),T77,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(Yx8rSastYbinding_inferred_type_setter);
  if (T80 != YPfalse) {
    T79 = VARREF(Yx8rSastYbinding_inferred_type_setter);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_binding_inferred_type_setter_17;
  T78 = CALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(Yx8rSastYbinding_inferred_type_setter,T78);
  T82 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T82,ENVNUL,PNUL,YPfalse);
  T83 = fun_18;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLbindingG),VARREF(Yx8rSastYbinding_inferred_type),VARREF(Yx8rSastYbinding_inferred_type_setter),VARREF(YLanyG),T83);
  lit_34 = YPPsym((P)"<global-box>");
  T85 = (P)YPpair(VARREF(YLanyG),Ynil);
  T84 = CALL2(1,VARREF(Yfab_class),LITREF(lit_34),T85);
  VARSET(Yx8rSastYLglobal_boxG,T84);
  lit_35 = YPPsym((P)"global-box-value");
  T86 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLglobal_boxG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_global_box_value_19 = YPmet(FUNCODEREF(fun_global_box_value_19),LITREF(lit_35),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(Yx8rSastYglobal_box_value);
  if (T89 != YPfalse) {
    T88 = VARREF(Yx8rSastYglobal_box_value);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_global_box_value_19;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(Yx8rSastYglobal_box_value,T87);
  lit_36 = YPPsym((P)"global-box-value-setter");
  T91 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLglobal_boxG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_global_box_value_setter_20 = YPmet(FUNCODEREF(fun_global_box_value_setter_20),LITREF(lit_36),T91,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(Yx8rSastYglobal_box_value_setter);
  if (T94 != YPfalse) {
    T93 = VARREF(Yx8rSastYglobal_box_value_setter);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_global_box_value_setter_20;
  T92 = CALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(Yx8rSastYglobal_box_value_setter,T92);
  T96 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T96,ENVNUL,PNUL,YPfalse);
  T97 = fun_21;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLglobal_boxG),VARREF(Yx8rSastYglobal_box_value),VARREF(Yx8rSastYglobal_box_value_setter),VARREF(YLanyG),T97);
  lit_37 = YPPsym((P)"<module-binding>");
  T100 = (P)YPpair(VARREF(Yx8rSdependencyYLdependableG),Ynil);
  T99 = (P)YPpair(VARREF(Yx8rSastYLbindingG),T100);
  T98 = CALL2(1,VARREF(Yfab_class),LITREF(lit_37),T99);
  VARSET(Yx8rSastYLmodule_bindingG,T98);
  lit_38 = YPPsym((P)"binding-kind");
  T101 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_kind_22 = YPmet(FUNCODEREF(fun_binding_kind_22),LITREF(lit_38),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(Yx8rSastYbinding_kind);
  if (T104 != YPfalse) {
    T103 = VARREF(Yx8rSastYbinding_kind);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_binding_kind_22;
  T102 = CALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(Yx8rSastYbinding_kind,T102);
  lit_39 = YPPsym((P)"binding-kind-setter");
  T106 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_kind_setter_23 = YPmet(FUNCODEREF(fun_binding_kind_setter_23),LITREF(lit_39),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(Yx8rSastYbinding_kind_setter);
  if (T109 != YPfalse) {
    T108 = VARREF(Yx8rSastYbinding_kind_setter);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_binding_kind_setter_23;
  T107 = CALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(Yx8rSastYbinding_kind_setter,T107);
  lit_40 = YPPsym((P)"global");
  T111 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T111,ENVNUL,PNUL,YPfalse);
  T112 = fun_24;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),VARREF(Yx8rSastYbinding_kind_setter),VARREF(YLanyG),T112);
  lit_41 = YPPsym((P)"binding-module-name");
  T113 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_module_name_25 = YPmet(FUNCODEREF(fun_binding_module_name_25),LITREF(lit_41),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(Yx8rSastYbinding_module_name);
  if (T116 != YPfalse) {
    T115 = VARREF(Yx8rSastYbinding_module_name);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_binding_module_name_25;
  T114 = CALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(Yx8rSastYbinding_module_name,T114);
  lit_42 = YPPsym((P)"binding-module-name-setter");
  T118 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLsymG),VARREF(Yx8rSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_module_name_setter_26 = YPmet(FUNCODEREF(fun_binding_module_name_setter_26),LITREF(lit_42),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(Yx8rSastYbinding_module_name_setter);
  if (T121 != YPfalse) {
    T120 = VARREF(Yx8rSastYbinding_module_name_setter);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_binding_module_name_setter_26;
  T119 = CALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(Yx8rSastYbinding_module_name_setter,T119);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYbinding_module_name_setter),VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_43 = YPPsym((P)"binding-free?");
  T123 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_freeQ_27 = YPmet(FUNCODEREF(fun_binding_freeQ_27),LITREF(lit_43),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(Yx8rSastYbinding_freeQ);
  if (T126 != YPfalse) {
    T125 = VARREF(Yx8rSastYbinding_freeQ);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_binding_freeQ_27;
  T124 = CALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(Yx8rSastYbinding_freeQ,T124);
  lit_44 = YPPsym((P)"binding-free?-setter");
  T128 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLlogG),VARREF(Yx8rSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_freeQ_setter_28 = YPmet(FUNCODEREF(fun_binding_freeQ_setter_28),LITREF(lit_44),T128,ENVNUL,PNUL,YPfalse);
  T131 = BOUNDP(Yx8rSastYbinding_freeQ_setter);
  if (T131 != YPfalse) {
    T130 = VARREF(Yx8rSastYbinding_freeQ_setter);
  } else {
    T130 = YPfalse;
  }
  T132 = fun_binding_freeQ_setter_28;
  T129 = CALL2(1,VARREF(YPdefine_method),T130,T132);
  VARSET(Yx8rSastYbinding_freeQ_setter,T129);
  T133 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T134 = fun_29;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_freeQ),VARREF(Yx8rSastYbinding_freeQ_setter),VARREF(YLlogG),T134);
  lit_45 = YPPsym((P)"binding-info");
  T135 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_info_30 = YPmet(FUNCODEREF(fun_binding_info_30),LITREF(lit_45),T135,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(Yx8rSastYbinding_info);
  if (T138 != YPfalse) {
    T137 = VARREF(Yx8rSastYbinding_info);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_binding_info_30;
  T136 = CALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(Yx8rSastYbinding_info,T136);
  lit_46 = YPPsym((P)"binding-info-setter");
  T140 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_info_setter_31 = YPmet(FUNCODEREF(fun_binding_info_setter_31),LITREF(lit_46),T140,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(Yx8rSastYbinding_info_setter);
  if (T143 != YPfalse) {
    T142 = VARREF(Yx8rSastYbinding_info_setter);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_binding_info_setter_31;
  T141 = CALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(Yx8rSastYbinding_info_setter,T141);
  T145 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T145,ENVNUL,PNUL,YPfalse);
  T146 = fun_32;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_info),VARREF(Yx8rSastYbinding_info_setter),VARREF(YLanyG),T146);
  VARSET(Yx8rSastYbinding_global_box,VARREF(Yx8rSastYbinding_info));
  VARSET(Yx8rSastYbinding_global_box_setter,VARREF(Yx8rSastYbinding_info_setter));
  VARSET(Yx8rSastYbinding_locative,VARREF(Yx8rSastYbinding_info));
  VARSET(Yx8rSastYbinding_locative_setter,VARREF(Yx8rSastYbinding_info_setter));
  VARSET(Yx8rSastYbinding_handler,VARREF(Yx8rSastYbinding_info));
  T148 = VARSET(Yx8rSastYbinding_handler_setter,VARREF(Yx8rSastYbinding_info_setter));
  T147 = T148;
  return T147;
}

P Yx8rSastY___main_1___() {
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
  lit_47 = YPPsym((P)"maybe-log-dependency");
  lit_48 = YPPsym((P)"dependable");
  lit_49 = YPPsym((P)"dtype");
  T0 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_49)),YPPlist(2,VARREF(Yx8rSdependencyYLdependableG),VARREF(Yx8rSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rSastYmaybe_log_dependency = YPmet(FUNCODEREF(Yx8rSastYmaybe_log_dependency),LITREF(lit_47),T0,ENVNUL,PNUL,YPfalse);
  T1 = Yx8rSastYmaybe_log_dependency;
  VARSET(Yx8rSastYmaybe_log_dependency,T1);
  lit_50 = YPPsym((P)"macro-expander");
  lit_51 = YPPsym((P)"macro-binding");
  T2 = YPsig(YPPlist(1,LITREF(lit_51)),YPPlist(1,VARREF(Yx8rSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  Yx8rSastYmacro_expander = YPmet(FUNCODEREF(Yx8rSastYmacro_expander),LITREF(lit_50),T2,ENVNUL,PNUL,YPfalse);
  T3 = Yx8rSastYmacro_expander;
  VARSET(Yx8rSastYmacro_expander,T3);
  lit_52 = YPPsym((P)"<local-binding>");
  T5 = (P)YPpair(VARREF(Yx8rSastYLbindingG),Ynil);
  T4 = CALL2(1,VARREF(Yfab_class),LITREF(lit_52),T5);
  VARSET(Yx8rSastYLlocal_bindingG,T4);
  lit_53 = YPPsym((P)"binding-value");
  T6 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_value_35 = YPmet(FUNCODEREF(fun_binding_value_35),LITREF(lit_53),T6,ENVNUL,PNUL,YPfalse);
  T9 = BOUNDP(Yx8rSastYbinding_value);
  if (T9 != YPfalse) {
    T8 = VARREF(Yx8rSastYbinding_value);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_binding_value_35;
  T7 = CALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(Yx8rSastYbinding_value,T7);
  lit_54 = YPPsym((P)"binding-value-setter");
  T11 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_value_setter_36 = YPmet(FUNCODEREF(fun_binding_value_setter_36),LITREF(lit_54),T11,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(Yx8rSastYbinding_value_setter);
  if (T14 != YPfalse) {
    T13 = VARREF(Yx8rSastYbinding_value_setter);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_binding_value_setter_36;
  T12 = CALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(Yx8rSastYbinding_value_setter,T12);
  T16 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T16,ENVNUL,PNUL,YPfalse);
  T17 = fun_37;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLlocal_bindingG),VARREF(Yx8rSastYbinding_value),VARREF(Yx8rSastYbinding_value_setter),VARREF(YLanyG),T17);
  lit_55 = YPPsym((P)"binding-mutable?");
  T18 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_mutableQ_38 = YPmet(FUNCODEREF(fun_binding_mutableQ_38),LITREF(lit_55),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(Yx8rSastYbinding_mutableQ);
  if (T21 != YPfalse) {
    T20 = VARREF(Yx8rSastYbinding_mutableQ);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_binding_mutableQ_38;
  T19 = CALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(Yx8rSastYbinding_mutableQ,T19);
  lit_56 = YPPsym((P)"binding-mutable?-setter");
  T23 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_mutableQ_setter_39 = YPmet(FUNCODEREF(fun_binding_mutableQ_setter_39),LITREF(lit_56),T23,ENVNUL,PNUL,YPfalse);
  T26 = BOUNDP(Yx8rSastYbinding_mutableQ_setter);
  if (T26 != YPfalse) {
    T25 = VARREF(Yx8rSastYbinding_mutableQ_setter);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_binding_mutableQ_setter_39;
  T24 = CALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(Yx8rSastYbinding_mutableQ_setter,T24);
  T28 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T29 = fun_40;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLlocal_bindingG),VARREF(Yx8rSastYbinding_mutableQ),VARREF(Yx8rSastYbinding_mutableQ_setter),VARREF(YLanyG),T29);
  lit_57 = YPPsym((P)"binding-dynamic-extent?");
  T30 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_dynamic_extentQ_41 = YPmet(FUNCODEREF(fun_binding_dynamic_extentQ_41),LITREF(lit_57),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(Yx8rSastYbinding_dynamic_extentQ);
  if (T33 != YPfalse) {
    T32 = VARREF(Yx8rSastYbinding_dynamic_extentQ);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_binding_dynamic_extentQ_41;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(Yx8rSastYbinding_dynamic_extentQ,T31);
  lit_58 = YPPsym((P)"binding-dynamic-extent?-setter");
  T35 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_dynamic_extentQ_setter_42 = YPmet(FUNCODEREF(fun_binding_dynamic_extentQ_setter_42),LITREF(lit_58),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(Yx8rSastYbinding_dynamic_extentQ_setter);
  if (T38 != YPfalse) {
    T37 = VARREF(Yx8rSastYbinding_dynamic_extentQ_setter);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_binding_dynamic_extentQ_setter_42;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(Yx8rSastYbinding_dynamic_extentQ_setter,T36);
  T40 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T41 = fun_43;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLlocal_bindingG),VARREF(Yx8rSastYbinding_dynamic_extentQ),VARREF(Yx8rSastYbinding_dynamic_extentQ_setter),VARREF(YLanyG),T41);
  lit_59 = YPPsym((P)"binding-dotted?");
  T42 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_dottedQ_44 = YPmet(FUNCODEREF(fun_binding_dottedQ_44),LITREF(lit_59),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(Yx8rSastYbinding_dottedQ);
  if (T45 != YPfalse) {
    T44 = VARREF(Yx8rSastYbinding_dottedQ);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_binding_dottedQ_44;
  T43 = CALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(Yx8rSastYbinding_dottedQ,T43);
  lit_60 = YPPsym((P)"binding-dotted?-setter");
  T47 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_dottedQ_setter_45 = YPmet(FUNCODEREF(fun_binding_dottedQ_setter_45),LITREF(lit_60),T47,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(Yx8rSastYbinding_dottedQ_setter);
  if (T50 != YPfalse) {
    T49 = VARREF(Yx8rSastYbinding_dottedQ_setter);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_binding_dottedQ_setter_45;
  T48 = CALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(Yx8rSastYbinding_dottedQ_setter,T48);
  T52 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T53 = fun_46;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLlocal_bindingG),VARREF(Yx8rSastYbinding_dottedQ),VARREF(Yx8rSastYbinding_dottedQ_setter),VARREF(YLanyG),T53);
  lit_61 = YPPsym((P)"binding-index");
  T54 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_47 = YPmet(FUNCODEREF(fun_binding_index_47),LITREF(lit_61),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(Yx8rSastYbinding_index);
  if (T57 != YPfalse) {
    T56 = VARREF(Yx8rSastYbinding_index);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_binding_index_47;
  T55 = CALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(Yx8rSastYbinding_index,T55);
  lit_62 = YPPsym((P)"binding-index-setter");
  T59 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_48 = YPmet(FUNCODEREF(fun_binding_index_setter_48),LITREF(lit_62),T59,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(Yx8rSastYbinding_index_setter);
  if (T62 != YPfalse) {
    T61 = VARREF(Yx8rSastYbinding_index_setter);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_binding_index_setter_48;
  T60 = CALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(Yx8rSastYbinding_index_setter,T60);
  T64 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T64,ENVNUL,PNUL,YPfalse);
  T65 = fun_49;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLlocal_bindingG),VARREF(Yx8rSastYbinding_index),VARREF(Yx8rSastYbinding_index_setter),VARREF(YLanyG),T65);
  lit_63 = YPPsym((P)"<compile-time>");
  T67 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),Ynil);
  T66 = CALL2(1,VARREF(Yfab_class),LITREF(lit_63),T67);
  VARSET(Yx8rSastYLcompile_timeG,T66);
  lit_64 = YPPsym((P)"compile-time-program");
  T68 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLcompile_timeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_compile_time_program_50 = YPmet(FUNCODEREF(fun_compile_time_program_50),LITREF(lit_64),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(Yx8rSastYcompile_time_program);
  if (T71 != YPfalse) {
    T70 = VARREF(Yx8rSastYcompile_time_program);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_compile_time_program_50;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(Yx8rSastYcompile_time_program,T69);
  lit_65 = YPPsym((P)"compile-time-program-setter");
  T73 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLcompile_timeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compile_time_program_setter_51 = YPmet(FUNCODEREF(fun_compile_time_program_setter_51),LITREF(lit_65),T73,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(Yx8rSastYcompile_time_program_setter);
  if (T76 != YPfalse) {
    T75 = VARREF(Yx8rSastYcompile_time_program_setter);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_compile_time_program_setter_51;
  T74 = CALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(Yx8rSastYcompile_time_program_setter,T74);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLcompile_timeG),VARREF(Yx8rSastYcompile_time_program),VARREF(Yx8rSastYcompile_time_program_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_66 = YPPsym((P)"<reference>");
  T79 = (P)YPpair(VARREF(Yx8rSastYLpassive_programG),Ynil);
  T78 = CALL2(1,VARREF(Yfab_class),LITREF(lit_66),T79);
  VARSET(Yx8rSastYLreferenceG,T78);
  lit_67 = YPPsym((P)"<real-reference>");
  T81 = (P)YPpair(VARREF(Yx8rSastYLreferenceG),Ynil);
  T80 = CALL2(1,VARREF(Yfab_class),LITREF(lit_67),T81);
  VARSET(Yx8rSastYLreal_referenceG,T80);
  lit_68 = YPPsym((P)"reference-binding");
  T82 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLreal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_binding_52 = YPmet(FUNCODEREF(fun_reference_binding_52),LITREF(lit_68),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(Yx8rSastYreference_binding);
  if (T85 != YPfalse) {
    T84 = VARREF(Yx8rSastYreference_binding);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_reference_binding_52;
  T83 = CALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(Yx8rSastYreference_binding,T83);
  lit_69 = YPPsym((P)"reference-binding-setter");
  T87 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLreal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_binding_setter_53 = YPmet(FUNCODEREF(fun_reference_binding_setter_53),LITREF(lit_69),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(Yx8rSastYreference_binding_setter);
  if (T90 != YPfalse) {
    T89 = VARREF(Yx8rSastYreference_binding_setter);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_reference_binding_setter_53;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(Yx8rSastYreference_binding_setter,T88);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLreal_referenceG),VARREF(Yx8rSastYreference_binding),VARREF(Yx8rSastYreference_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_70 = YPPsym((P)"<local-reference>");
  T93 = (P)YPpair(VARREF(Yx8rSastYLreal_referenceG),Ynil);
  T92 = CALL2(1,VARREF(Yfab_class),LITREF(lit_70),T93);
  VARSET(Yx8rSastYLlocal_referenceG,T92);
  lit_71 = YPPsym((P)"reference-called-function?");
  T94 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_called_functionQ_54 = YPmet(FUNCODEREF(fun_reference_called_functionQ_54),LITREF(lit_71),T94,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(Yx8rSastYreference_called_functionQ);
  if (T97 != YPfalse) {
    T96 = VARREF(Yx8rSastYreference_called_functionQ);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_reference_called_functionQ_54;
  T95 = CALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(Yx8rSastYreference_called_functionQ,T95);
  lit_72 = YPPsym((P)"reference-called-function?-setter");
  T99 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_called_functionQ_setter_55 = YPmet(FUNCODEREF(fun_reference_called_functionQ_setter_55),LITREF(lit_72),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(Yx8rSastYreference_called_functionQ_setter);
  if (T102 != YPfalse) {
    T101 = VARREF(Yx8rSastYreference_called_functionQ_setter);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_reference_called_functionQ_setter_55;
  T100 = CALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(Yx8rSastYreference_called_functionQ_setter,T100);
  T104 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T104,ENVNUL,PNUL,YPfalse);
  T105 = fun_56;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLlocal_referenceG),VARREF(Yx8rSastYreference_called_functionQ),VARREF(Yx8rSastYreference_called_functionQ_setter),VARREF(YLanyG),T105);
  lit_73 = YPPsym((P)"reference-frame-number");
  T106 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_frame_number_57 = YPmet(FUNCODEREF(fun_reference_frame_number_57),LITREF(lit_73),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(Yx8rSastYreference_frame_number);
  if (T109 != YPfalse) {
    T108 = VARREF(Yx8rSastYreference_frame_number);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_reference_frame_number_57;
  T107 = CALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(Yx8rSastYreference_frame_number,T107);
  lit_74 = YPPsym((P)"reference-frame-number-setter");
  T111 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLintG),VARREF(Yx8rSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_frame_number_setter_58 = YPmet(FUNCODEREF(fun_reference_frame_number_setter_58),LITREF(lit_74),T111,ENVNUL,PNUL,YPfalse);
  T114 = BOUNDP(Yx8rSastYreference_frame_number_setter);
  if (T114 != YPfalse) {
    T113 = VARREF(Yx8rSastYreference_frame_number_setter);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_reference_frame_number_setter_58;
  T112 = CALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(Yx8rSastYreference_frame_number_setter,T112);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLlocal_referenceG),VARREF(Yx8rSastYreference_frame_number),VARREF(Yx8rSastYreference_frame_number_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_75 = YPPsym((P)"reference-frame-offset");
  T116 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_frame_offset_59 = YPmet(FUNCODEREF(fun_reference_frame_offset_59),LITREF(lit_75),T116,ENVNUL,PNUL,YPfalse);
  T119 = BOUNDP(Yx8rSastYreference_frame_offset);
  if (T119 != YPfalse) {
    T118 = VARREF(Yx8rSastYreference_frame_offset);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_reference_frame_offset_59;
  T117 = CALL2(1,VARREF(YPdefine_method),T118,T120);
  VARSET(Yx8rSastYreference_frame_offset,T117);
  lit_76 = YPPsym((P)"reference-frame-offset-setter");
  T121 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLintG),VARREF(Yx8rSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_frame_offset_setter_60 = YPmet(FUNCODEREF(fun_reference_frame_offset_setter_60),LITREF(lit_76),T121,ENVNUL,PNUL,YPfalse);
  T124 = BOUNDP(Yx8rSastYreference_frame_offset_setter);
  if (T124 != YPfalse) {
    T123 = VARREF(Yx8rSastYreference_frame_offset_setter);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_reference_frame_offset_setter_60;
  T122 = CALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(Yx8rSastYreference_frame_offset_setter,T122);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLlocal_referenceG),VARREF(Yx8rSastYreference_frame_offset),VARREF(Yx8rSastYreference_frame_offset_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_77 = YPPsym((P)"<module-binding-reference>");
  T127 = (P)YPpair(VARREF(Yx8rSastYLreal_referenceG),Ynil);
  T126 = CALL2(1,VARREF(Yfab_class),LITREF(lit_77),T127);
  VARSET(Yx8rSastYLmodule_binding_referenceG,T126);
  lit_78 = YPPsym((P)"<global-reference>");
  T129 = (P)YPpair(VARREF(Yx8rSastYLmodule_binding_referenceG),Ynil);
  T128 = CALL2(1,VARREF(Yfab_class),LITREF(lit_78),T129);
  VARSET(Yx8rSastYLglobal_referenceG,T128);
  lit_79 = YPPsym((P)"<runtime-reference>");
  T131 = (P)YPpair(VARREF(Yx8rSastYLmodule_binding_referenceG),Ynil);
  T130 = CALL2(1,VARREF(Yfab_class),LITREF(lit_79),T131);
  VARSET(Yx8rSastYLruntime_referenceG,T130);
  lit_80 = YPPsym((P)"<predefined-reference>");
  T133 = (P)YPpair(VARREF(Yx8rSastYLreal_referenceG),Ynil);
  T132 = CALL2(1,VARREF(Yfab_class),LITREF(lit_80),T133);
  VARSET(Yx8rSastYLpredefined_referenceG,T132);
  lit_81 = YPPsym((P)"<bound?>");
  T135 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),Ynil);
  T134 = CALL2(1,VARREF(Yfab_class),LITREF(lit_81),T135);
  VARSET(Yx8rSastYLboundQG,T134);
  lit_82 = YPPsym((P)"bound?-reference");
  T136 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLboundQG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_boundQ_reference_61 = YPmet(FUNCODEREF(fun_boundQ_reference_61),LITREF(lit_82),T136,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(Yx8rSastYboundQ_reference);
  if (T139 != YPfalse) {
    T138 = VARREF(Yx8rSastYboundQ_reference);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_boundQ_reference_61;
  T137 = CALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(Yx8rSastYboundQ_reference,T137);
  lit_83 = YPPsym((P)"bound?-reference-setter");
  T141 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLboundQG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boundQ_reference_setter_62 = YPmet(FUNCODEREF(fun_boundQ_reference_setter_62),LITREF(lit_83),T141,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(Yx8rSastYboundQ_reference_setter);
  if (T144 != YPfalse) {
    T143 = VARREF(Yx8rSastYboundQ_reference_setter);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_boundQ_reference_setter_62;
  T142 = CALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(Yx8rSastYboundQ_reference_setter,T142);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLboundQG),VARREF(Yx8rSastYboundQ_reference),VARREF(Yx8rSastYboundQ_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_84 = YPPsym((P)"<assignment>");
  T147 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),Ynil);
  T146 = CALL2(1,VARREF(Yfab_class),LITREF(lit_84),T147);
  VARSET(Yx8rSastYLassignmentG,T146);
  lit_85 = YPPsym((P)"assignment-form");
  T148 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLassignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_form_63 = YPmet(FUNCODEREF(fun_assignment_form_63),LITREF(lit_85),T148,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(Yx8rSastYassignment_form);
  if (T151 != YPfalse) {
    T150 = VARREF(Yx8rSastYassignment_form);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_assignment_form_63;
  T149 = CALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(Yx8rSastYassignment_form,T149);
  lit_86 = YPPsym((P)"assignment-form-setter");
  T153 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLassignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_form_setter_64 = YPmet(FUNCODEREF(fun_assignment_form_setter_64),LITREF(lit_86),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(Yx8rSastYassignment_form_setter);
  if (T156 != YPfalse) {
    T155 = VARREF(Yx8rSastYassignment_form_setter);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_assignment_form_setter_64;
  T154 = CALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(Yx8rSastYassignment_form_setter,T154);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLassignmentG),VARREF(Yx8rSastYassignment_form),VARREF(Yx8rSastYassignment_form_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_87 = YPPsym((P)"<local-assignment>");
  T159 = (P)YPpair(VARREF(Yx8rSastYLassignmentG),Ynil);
  T158 = CALL2(1,VARREF(Yfab_class),LITREF(lit_87),T159);
  VARSET(Yx8rSastYLlocal_assignmentG,T158);
  lit_88 = YPPsym((P)"assignment-reference");
  T160 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_reference_65 = YPmet(FUNCODEREF(fun_assignment_reference_65),LITREF(lit_88),T160,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(Yx8rSastYassignment_reference);
  if (T163 != YPfalse) {
    T162 = VARREF(Yx8rSastYassignment_reference);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_assignment_reference_65;
  T161 = CALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(Yx8rSastYassignment_reference,T161);
  lit_89 = YPPsym((P)"assignment-reference-setter");
  T165 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLlocal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_reference_setter_66 = YPmet(FUNCODEREF(fun_assignment_reference_setter_66),LITREF(lit_89),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(Yx8rSastYassignment_reference_setter);
  if (T168 != YPfalse) {
    T167 = VARREF(Yx8rSastYassignment_reference_setter);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_assignment_reference_setter_66;
  T166 = CALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(Yx8rSastYassignment_reference_setter,T166);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLlocal_assignmentG),VARREF(Yx8rSastYassignment_reference),VARREF(Yx8rSastYassignment_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_90 = YPPsym((P)"<global-assignment>");
  T171 = (P)YPpair(VARREF(Yx8rSastYLassignmentG),Ynil);
  T170 = CALL2(1,VARREF(Yfab_class),LITREF(lit_90),T171);
  VARSET(Yx8rSastYLglobal_assignmentG,T170);
  lit_91 = YPPsym((P)"assignment-binding");
  T172 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLglobal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_binding_67 = YPmet(FUNCODEREF(fun_assignment_binding_67),LITREF(lit_91),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(Yx8rSastYassignment_binding);
  if (T175 != YPfalse) {
    T174 = VARREF(Yx8rSastYassignment_binding);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_assignment_binding_67;
  T173 = CALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(Yx8rSastYassignment_binding,T173);
  lit_92 = YPPsym((P)"assignment-binding-setter");
  T177 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLglobal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_binding_setter_68 = YPmet(FUNCODEREF(fun_assignment_binding_setter_68),LITREF(lit_92),T177,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(Yx8rSastYassignment_binding_setter);
  if (T180 != YPfalse) {
    T179 = VARREF(Yx8rSastYassignment_binding_setter);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_assignment_binding_setter_68;
  T178 = CALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(Yx8rSastYassignment_binding_setter,T178);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLglobal_assignmentG),VARREF(Yx8rSastYassignment_binding),VARREF(Yx8rSastYassignment_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_93 = YPPsym((P)"<runtime-assignment>");
  T183 = (P)YPpair(VARREF(Yx8rSastYLglobal_assignmentG),Ynil);
  T182 = CALL2(1,VARREF(Yfab_class),LITREF(lit_93),T183);
  VARSET(Yx8rSastYLruntime_assignmentG,T182);
  lit_94 = YPPsym((P)"<definition>");
  T185 = (P)YPpair(VARREF(Yx8rSastYLglobal_assignmentG),Ynil);
  T184 = CALL2(1,VARREF(Yfab_class),LITREF(lit_94),T185);
  VARSET(Yx8rSastYLdefinitionG,T184);
  lit_95 = YPPsym((P)"<variable-definition>");
  T187 = (P)YPpair(VARREF(Yx8rSastYLdefinitionG),Ynil);
  T186 = CALL2(1,VARREF(Yfab_class),LITREF(lit_95),T187);
  VARSET(Yx8rSastYLvariable_definitionG,T186);
  lit_96 = YPPsym((P)"<ast-generic-definition>");
  T189 = (P)YPpair(VARREF(Yx8rSastYLdefinitionG),Ynil);
  T188 = CALL2(1,VARREF(Yfab_class),LITREF(lit_96),T189);
  VARSET(Yx8rSastYLast_generic_definitionG,T188);
  lit_97 = YPPsym((P)"<ast-function-definition>");
  T191 = (P)YPpair(VARREF(Yx8rSastYLdefinitionG),Ynil);
  T190 = CALL2(1,VARREF(Yfab_class),LITREF(lit_97),T191);
  VARSET(Yx8rSastYLast_function_definitionG,T190);
  lit_98 = YPPsym((P)"<ast-method-definition>");
  T193 = (P)YPpair(VARREF(Yx8rSastYLdefinitionG),Ynil);
  T192 = CALL2(1,VARREF(Yfab_class),LITREF(lit_98),T193);
  VARSET(Yx8rSastYLast_method_definitionG,T192);
  lit_99 = YPPsym((P)"<ast-primitive-definition>");
  T197 = (P)YPpair(VARREF(Yx8rSastYLdefinitionG),Ynil);
  T196 = CALL2(1,VARREF(Yfab_class),LITREF(lit_99),T197);
  T195 = VARSET(Yx8rSastYLast_primitive_definitionG,T196);
  T194 = T195;
  return T194;
}

P Yx8rSastY___main_2___() {
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
  lit_100 = YPPsym((P)"<ast-macro-definition>");
  T1 = (P)YPpair(VARREF(Yx8rSastYLdefinitionG),Ynil);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_100),T1);
  VARSET(Yx8rSastYLast_macro_definitionG,T0);
  lit_101 = YPPsym((P)"<ast-signature>");
  T3 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),Ynil);
  T2 = CALL2(1,VARREF(Yfab_class),LITREF(lit_101),T3);
  VARSET(Yx8rSastYLast_signatureG,T2);
  lit_102 = YPPsym((P)"signature-bindings");
  T4 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_bindings_69 = YPmet(FUNCODEREF(fun_signature_bindings_69),LITREF(lit_102),T4,ENVNUL,PNUL,YPfalse);
  T7 = BOUNDP(Yx8rSastYsignature_bindings);
  if (T7 != YPfalse) {
    T6 = VARREF(Yx8rSastYsignature_bindings);
  } else {
    T6 = YPfalse;
  }
  T8 = fun_signature_bindings_69;
  T5 = CALL2(1,VARREF(YPdefine_method),T6,T8);
  VARSET(Yx8rSastYsignature_bindings,T5);
  lit_103 = YPPsym((P)"signature-bindings-setter");
  T9 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_bindings_setter_70 = YPmet(FUNCODEREF(fun_signature_bindings_setter_70),LITREF(lit_103),T9,ENVNUL,PNUL,YPfalse);
  T12 = BOUNDP(Yx8rSastYsignature_bindings_setter);
  if (T12 != YPfalse) {
    T11 = VARREF(Yx8rSastYsignature_bindings_setter);
  } else {
    T11 = YPfalse;
  }
  T13 = fun_signature_bindings_setter_70;
  T10 = CALL2(1,VARREF(YPdefine_method),T11,T13);
  VARSET(Yx8rSastYsignature_bindings_setter,T10);
  T14 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T14,ENVNUL,PNUL,YPfalse);
  T15 = fun_71;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLast_signatureG),VARREF(Yx8rSastYsignature_bindings),VARREF(Yx8rSastYsignature_bindings_setter),VARREF(YLanyG),T15);
  lit_104 = YPPsym((P)"signature-names");
  T16 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_names_72 = YPmet(FUNCODEREF(fun_signature_names_72),LITREF(lit_104),T16,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(Yx8rSastYsignature_names);
  if (T19 != YPfalse) {
    T18 = VARREF(Yx8rSastYsignature_names);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_signature_names_72;
  T17 = CALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(Yx8rSastYsignature_names,T17);
  lit_105 = YPPsym((P)"signature-names-setter");
  T21 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_names_setter_73 = YPmet(FUNCODEREF(fun_signature_names_setter_73),LITREF(lit_105),T21,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(Yx8rSastYsignature_names_setter);
  if (T24 != YPfalse) {
    T23 = VARREF(Yx8rSastYsignature_names_setter);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_signature_names_setter_73;
  T22 = CALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(Yx8rSastYsignature_names_setter,T22);
  T26 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T26,ENVNUL,PNUL,YPfalse);
  T27 = fun_74;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLast_signatureG),VARREF(Yx8rSastYsignature_names),VARREF(Yx8rSastYsignature_names_setter),VARREF(YLanyG),T27);
  lit_106 = YPPsym((P)"signature-specs");
  T28 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_specs_75 = YPmet(FUNCODEREF(fun_signature_specs_75),LITREF(lit_106),T28,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(Yx8rSastYsignature_specs);
  if (T31 != YPfalse) {
    T30 = VARREF(Yx8rSastYsignature_specs);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_signature_specs_75;
  T29 = CALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(Yx8rSastYsignature_specs,T29);
  lit_107 = YPPsym((P)"signature-specs-setter");
  T33 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_specs_setter_76 = YPmet(FUNCODEREF(fun_signature_specs_setter_76),LITREF(lit_107),T33,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(Yx8rSastYsignature_specs_setter);
  if (T36 != YPfalse) {
    T35 = VARREF(Yx8rSastYsignature_specs_setter);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_signature_specs_setter_76;
  T34 = CALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(Yx8rSastYsignature_specs_setter,T34);
  T38 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T38,ENVNUL,PNUL,YPfalse);
  T39 = fun_77;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLast_signatureG),VARREF(Yx8rSastYsignature_specs),VARREF(Yx8rSastYsignature_specs_setter),VARREF(YLanyG),T39);
  lit_108 = YPPsym((P)"signature-nary?");
  T40 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_78 = YPmet(FUNCODEREF(fun_signature_naryQ_78),LITREF(lit_108),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(Yx8rSastYsignature_naryQ);
  if (T43 != YPfalse) {
    T42 = VARREF(Yx8rSastYsignature_naryQ);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_signature_naryQ_78;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(Yx8rSastYsignature_naryQ,T41);
  lit_109 = YPPsym((P)"signature-nary?-setter");
  T45 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_setter_79 = YPmet(FUNCODEREF(fun_signature_naryQ_setter_79),LITREF(lit_109),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(Yx8rSastYsignature_naryQ_setter);
  if (T48 != YPfalse) {
    T47 = VARREF(Yx8rSastYsignature_naryQ_setter);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_signature_naryQ_setter_79;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(Yx8rSastYsignature_naryQ_setter,T46);
  T50 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T51 = fun_80;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLast_signatureG),VARREF(Yx8rSastYsignature_naryQ),VARREF(Yx8rSastYsignature_naryQ_setter),VARREF(YLanyG),T51);
  lit_110 = YPPsym((P)"signature-arity");
  T52 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_arity_81 = YPmet(FUNCODEREF(fun_signature_arity_81),LITREF(lit_110),T52,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(Yx8rSastYsignature_arity);
  if (T55 != YPfalse) {
    T54 = VARREF(Yx8rSastYsignature_arity);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_signature_arity_81;
  T53 = CALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(Yx8rSastYsignature_arity,T53);
  lit_111 = YPPsym((P)"signature-arity-setter");
  T57 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_arity_setter_82 = YPmet(FUNCODEREF(fun_signature_arity_setter_82),LITREF(lit_111),T57,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(Yx8rSastYsignature_arity_setter);
  if (T60 != YPfalse) {
    T59 = VARREF(Yx8rSastYsignature_arity_setter);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_signature_arity_setter_82;
  T58 = CALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(Yx8rSastYsignature_arity_setter,T58);
  T62 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T63 = fun_83;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLast_signatureG),VARREF(Yx8rSastYsignature_arity),VARREF(Yx8rSastYsignature_arity_setter),VARREF(YLanyG),T63);
  lit_112 = YPPsym((P)"signature-value");
  T64 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_value_84 = YPmet(FUNCODEREF(fun_signature_value_84),LITREF(lit_112),T64,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(Yx8rSastYsignature_value);
  if (T67 != YPfalse) {
    T66 = VARREF(Yx8rSastYsignature_value);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_signature_value_84;
  T65 = CALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(Yx8rSastYsignature_value,T65);
  lit_113 = YPPsym((P)"signature-value-setter");
  T69 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_value_setter_85 = YPmet(FUNCODEREF(fun_signature_value_setter_85),LITREF(lit_113),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(Yx8rSastYsignature_value_setter);
  if (T72 != YPfalse) {
    T71 = VARREF(Yx8rSastYsignature_value_setter);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_signature_value_setter_85;
  T70 = CALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(Yx8rSastYsignature_value_setter,T70);
  T74 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T75 = fun_86;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLast_signatureG),VARREF(Yx8rSastYsignature_value),VARREF(Yx8rSastYsignature_value_setter),VARREF(YLanyG),T75);
  lit_114 = YPPsym((P)"<ast-function>");
  T78 = (P)YPpair(VARREF(Yx8rSdependencyYLdependentG),Ynil);
  T77 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),T78);
  T76 = CALL2(1,VARREF(Yfab_class),LITREF(lit_114),T77);
  VARSET(Yx8rSastYLast_functionG,T76);
  lit_115 = YPPsym((P)"function-binding");
  T79 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_binding_87 = YPmet(FUNCODEREF(fun_function_binding_87),LITREF(lit_115),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(Yx8rSastYfunction_binding);
  if (T82 != YPfalse) {
    T81 = VARREF(Yx8rSastYfunction_binding);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_function_binding_87;
  T80 = CALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(Yx8rSastYfunction_binding,T80);
  lit_116 = YPPsym((P)"function-binding-setter");
  T84 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_binding_setter_88 = YPmet(FUNCODEREF(fun_function_binding_setter_88),LITREF(lit_116),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(Yx8rSastYfunction_binding_setter);
  if (T87 != YPfalse) {
    T86 = VARREF(Yx8rSastYfunction_binding_setter);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_function_binding_setter_88;
  T85 = CALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(Yx8rSastYfunction_binding_setter,T85);
  T89 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T89,ENVNUL,PNUL,YPfalse);
  T90 = fun_89;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLast_functionG),VARREF(Yx8rSastYfunction_binding),VARREF(Yx8rSastYfunction_binding_setter),VARREF(YLanyG),T90);
  lit_117 = YPPsym((P)"function-debug-name");
  T91 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_debug_name_90 = YPmet(FUNCODEREF(fun_function_debug_name_90),LITREF(lit_117),T91,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(Yx8rSastYfunction_debug_name);
  if (T94 != YPfalse) {
    T93 = VARREF(Yx8rSastYfunction_debug_name);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_function_debug_name_90;
  T92 = CALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(Yx8rSastYfunction_debug_name,T92);
  lit_118 = YPPsym((P)"function-debug-name-setter");
  T96 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_debug_name_setter_91 = YPmet(FUNCODEREF(fun_function_debug_name_setter_91),LITREF(lit_118),T96,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(Yx8rSastYfunction_debug_name_setter);
  if (T99 != YPfalse) {
    T98 = VARREF(Yx8rSastYfunction_debug_name_setter);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_function_debug_name_setter_91;
  T97 = CALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(Yx8rSastYfunction_debug_name_setter,T97);
  T101 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_92 = YPmet(FUNCODEREF(fun_92),YPfalse,T101,ENVNUL,PNUL,YPfalse);
  T102 = fun_92;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLast_functionG),VARREF(Yx8rSastYfunction_debug_name),VARREF(Yx8rSastYfunction_debug_name_setter),VARREF(YLanyG),T102);
  lit_119 = YPPsym((P)"function-signature");
  T103 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_signature_93 = YPmet(FUNCODEREF(fun_function_signature_93),LITREF(lit_119),T103,ENVNUL,PNUL,YPfalse);
  T106 = BOUNDP(Yx8rSastYfunction_signature);
  if (T106 != YPfalse) {
    T105 = VARREF(Yx8rSastYfunction_signature);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_function_signature_93;
  T104 = CALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(Yx8rSastYfunction_signature,T104);
  lit_120 = YPPsym((P)"function-signature-setter");
  T108 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_signature_setter_94 = YPmet(FUNCODEREF(fun_function_signature_setter_94),LITREF(lit_120),T108,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(Yx8rSastYfunction_signature_setter);
  if (T111 != YPfalse) {
    T110 = VARREF(Yx8rSastYfunction_signature_setter);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_function_signature_setter_94;
  T109 = CALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(Yx8rSastYfunction_signature_setter,T109);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLast_functionG),VARREF(Yx8rSastYfunction_signature),VARREF(Yx8rSastYfunction_signature_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_121 = YPPsym((P)"function-bindings");
  T113 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(Yx8rSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSastYfunction_bindings = YPmet(FUNCODEREF(Yx8rSastYfunction_bindings),LITREF(lit_121),T113,ENVNUL,PNUL,YPfalse);
  T114 = Yx8rSastYfunction_bindings;
  VARSET(Yx8rSastYfunction_bindings,T114);
  lit_122 = YPPsym((P)"function-specs");
  T115 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(Yx8rSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSastYfunction_specs = YPmet(FUNCODEREF(Yx8rSastYfunction_specs),LITREF(lit_122),T115,ENVNUL,PNUL,YPfalse);
  T116 = Yx8rSastYfunction_specs;
  VARSET(Yx8rSastYfunction_specs,T116);
  lit_123 = YPPsym((P)"function-nary?");
  T117 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(Yx8rSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSastYfunction_naryQ = YPmet(FUNCODEREF(Yx8rSastYfunction_naryQ),LITREF(lit_123),T117,ENVNUL,PNUL,YPfalse);
  T118 = Yx8rSastYfunction_naryQ;
  VARSET(Yx8rSastYfunction_naryQ,T118);
  lit_124 = YPPsym((P)"function-value");
  T119 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(Yx8rSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSastYfunction_value = YPmet(FUNCODEREF(Yx8rSastYfunction_value),LITREF(lit_124),T119,ENVNUL,PNUL,YPfalse);
  T120 = Yx8rSastYfunction_value;
  VARSET(Yx8rSastYfunction_value,T120);
  lit_125 = YPPsym((P)"function-kind");
  lit_126 = YPsb((P)"FUN");
  T121 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(Yx8rSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_99 = YPmet(FUNCODEREF(fun_function_kind_99),LITREF(lit_125),T121,ENVNUL,PNUL,YPfalse);
  T124 = BOUNDP(Yx8rSastYfunction_kind);
  if (T124 != YPfalse) {
    T123 = VARREF(Yx8rSastYfunction_kind);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_function_kind_99;
  T122 = CALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(Yx8rSastYfunction_kind,T122);
  lit_127 = YPPsym((P)"function-display-name");
  lit_128 = YPPsym((P)"f");
  lit_129 = YPsb((P)"%s:%s");
  lit_130 = YPsb((P)"anonymous function");
  T126 = YPsig(YPPlist(1,LITREF(lit_128)),YPPlist(1,VARREF(Yx8rSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSastYfunction_display_name = YPmet(FUNCODEREF(Yx8rSastYfunction_display_name),LITREF(lit_127),T126,ENVNUL,PNUL,YPfalse);
  T127 = Yx8rSastYfunction_display_name;
  VARSET(Yx8rSastYfunction_display_name,T127);
  lit_131 = YPPsym((P)"invalidate-dependent");
  lit_132 = YPPsym((P)"dependent");
  lit_133 = YPsb((P)"warning: %s needs to be reparsed\n");
  lit_134 = YPsb((P)"warning: %s needs to be re-optimized\n");
  lit_135 = YPsb((P)"warning: unknown dependency of %s clobbered\n");
  T128 = YPsig(YPPlist(3,LITREF(lit_132),LITREF(lit_48),LITREF(lit_49)),YPPlist(3,VARREF(Yx8rSastYLast_functionG),VARREF(Yx8rSdependencyYLdependableG),VARREF(Yx8rSdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_invalidate_dependent_101 = YPmet(FUNCODEREF(fun_invalidate_dependent_101),LITREF(lit_131),T128,ENVNUL,PNUL,YPfalse);
  T131 = BOUNDP(Yx8rSdependencyYinvalidate_dependent);
  if (T131 != YPfalse) {
    T130 = VARREF(Yx8rSdependencyYinvalidate_dependent);
  } else {
    T130 = YPfalse;
  }
  T132 = fun_invalidate_dependent_101;
  T129 = CALL2(1,VARREF(YPdefine_method),T130,T132);
  VARSET(Yx8rSdependencyYinvalidate_dependent,T129);
  lit_136 = YPPsym((P)"<programs>");
  T134 = (P)YPpair(VARREF(Yx8rSastYLpassive_programG),Ynil);
  T133 = CALL2(1,VARREF(Yfab_class),LITREF(lit_136),T134);
  VARSET(Yx8rSastYLprogramsG,T133);
  lit_137 = YPPsym((P)"as-lst");
  lit_138 = YPPsym((P)"e");
  lit_139 = YPPsym((P)"loop");
  lit_140 = YPPsym((P)"res");
  T136 = YPsig(YPPlist(2,LITREF(lit_140),LITREF(lit_138)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_102 = YPmet(FUNCODEREF(fun_loop_102),LITREF(lit_139),T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(YPPlist(1,LITREF(lit_138)),YPPlist(1,VARREF(Yx8rSastYLprogramsG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_as_lst_103 = YPmet(FUNCODEREF(fun_as_lst_103),LITREF(lit_137),T135,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(Yx8rSastYas_lst);
  if (T139 != YPfalse) {
    T138 = VARREF(Yx8rSastYas_lst);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_as_lst_103;
  T137 = CALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(Yx8rSastYas_lst,T137);
  lit_141 = YPPsym((P)"x-1426");
  lit_142 = YPPsym((P)"def-list");
  lit_143 = YPsb((P)"<");
  lit_144 = YPsb((P)">");
  lit_145 = YPsb((P)"$");
  lit_146 = YPsb((P)"-empty");
  lit_147 = YPPsym((P)"dc");
  lit_148 = YPPsym((P)"<lst>");
  lit_149 = YPPsym((P)"dv");
  lit_150 = YPPsym((P)"new");
  lit_151 = YPPsym((P)"dm");
  lit_152 = YPPsym((P)"as");
  lit_153 = YPPsym((P)"p");
  lit_154 = YPPsym((P)"t=");
  lit_155 = YPPsym((P)"=>");
  lit_156 = YPPsym((P)"app");
  lit_157 = YPPsym((P)"fabs");
  lit_158 = YPPsym((P)"df");
  lit_159 = YPPsym((P)"h");
  lit_160 = YPPsym((P)"t");
  lit_161 = YPPsym((P)"head");
  lit_162 = YPPsym((P)"tail");
  lit_163 = YPPsym((P)"empty");
  T143 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1426_104 = YPmet(FUNCODEREF(fun_x_1426_104),LITREF(lit_141),T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T144 = fun_106;
  YPmacro(YPPsym((P)"x8r/ast"),YPPsym((P)"def-list"),T144);
  lit_164 = YPPsym((P)"x-1430");
  lit_165 = YPPsym((P)"def-programs");
  T147 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1430_107 = YPmet(FUNCODEREF(fun_x_1430_107),LITREF(lit_164),T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T145,ENVNUL,PNUL,YPfalse);
  T148 = fun_109;
  YPmacro(YPPsym((P)"x8r/ast"),YPPsym((P)"def-programs"),T148);
  lit_166 = YPPsym((P)"<ast-embodied-function>");
  T150 = (P)YPpair(VARREF(Yx8rSastYLast_functionG),Ynil);
  T149 = CALL2(1,VARREF(Yfab_class),LITREF(lit_166),T150);
  VARSET(Yx8rSastYLast_embodied_functionG,T149);
  lit_167 = YPPsym((P)"function-body");
  T151 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_body_110 = YPmet(FUNCODEREF(fun_function_body_110),LITREF(lit_167),T151,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(Yx8rSastYfunction_body);
  if (T154 != YPfalse) {
    T153 = VARREF(Yx8rSastYfunction_body);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_function_body_110;
  T152 = CALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(Yx8rSastYfunction_body,T152);
  lit_168 = YPPsym((P)"function-body-setter");
  T156 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_body_setter_111 = YPmet(FUNCODEREF(fun_function_body_setter_111),LITREF(lit_168),T156,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(Yx8rSastYfunction_body_setter);
  if (T159 != YPfalse) {
    T158 = VARREF(Yx8rSastYfunction_body_setter);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_function_body_setter_111;
  T157 = CALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(Yx8rSastYfunction_body_setter,T157);
  T161 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_112 = YPmet(FUNCODEREF(fun_112),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T162 = fun_112;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLast_embodied_functionG),VARREF(Yx8rSastYfunction_body),VARREF(Yx8rSastYfunction_body_setter),VARREF(YLanyG),T162);
  lit_169 = YPPsym((P)"function-index");
  T163 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_index_113 = YPmet(FUNCODEREF(fun_function_index_113),LITREF(lit_169),T163,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(Yx8rSastYfunction_index);
  if (T166 != YPfalse) {
    T165 = VARREF(Yx8rSastYfunction_index);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_function_index_113;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(Yx8rSastYfunction_index,T164);
  lit_170 = YPPsym((P)"function-index-setter");
  T168 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_index_setter_114 = YPmet(FUNCODEREF(fun_function_index_setter_114),LITREF(lit_170),T168,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(Yx8rSastYfunction_index_setter);
  if (T171 != YPfalse) {
    T170 = VARREF(Yx8rSastYfunction_index_setter);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_function_index_setter_114;
  T169 = CALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(Yx8rSastYfunction_index_setter,T169);
  T173 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPmet(FUNCODEREF(fun_115),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T174 = fun_115;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLast_embodied_functionG),VARREF(Yx8rSastYfunction_index),VARREF(Yx8rSastYfunction_index_setter),VARREF(YLanyG),T174);
  lit_171 = YPPsym((P)"function-temporaries");
  T175 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_temporaries_116 = YPmet(FUNCODEREF(fun_function_temporaries_116),LITREF(lit_171),T175,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(Yx8rSastYfunction_temporaries);
  if (T178 != YPfalse) {
    T177 = VARREF(Yx8rSastYfunction_temporaries);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_function_temporaries_116;
  T176 = CALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(Yx8rSastYfunction_temporaries,T176);
  lit_172 = YPPsym((P)"function-temporaries-setter");
  T180 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_temporaries_setter_117 = YPmet(FUNCODEREF(fun_function_temporaries_setter_117),LITREF(lit_172),T180,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(Yx8rSastYfunction_temporaries_setter);
  if (T183 != YPfalse) {
    T182 = VARREF(Yx8rSastYfunction_temporaries_setter);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_function_temporaries_setter_117;
  T181 = CALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(Yx8rSastYfunction_temporaries_setter,T181);
  T185 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPmet(FUNCODEREF(fun_118),YPfalse,T185,ENVNUL,PNUL,YPfalse);
  T186 = fun_118;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLast_embodied_functionG),VARREF(Yx8rSastYfunction_temporaries),VARREF(Yx8rSastYfunction_temporaries_setter),VARREF(YLanyG),T186);
  lit_173 = YPPsym((P)"function-registers");
  T187 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_registers_119 = YPmet(FUNCODEREF(fun_function_registers_119),LITREF(lit_173),T187,ENVNUL,PNUL,YPfalse);
  T190 = BOUNDP(Yx8rSastYfunction_registers);
  if (T190 != YPfalse) {
    T189 = VARREF(Yx8rSastYfunction_registers);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_function_registers_119;
  T188 = CALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(Yx8rSastYfunction_registers,T188);
  lit_174 = YPPsym((P)"function-registers-setter");
  T192 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_registers_setter_120 = YPmet(FUNCODEREF(fun_function_registers_setter_120),LITREF(lit_174),T192,ENVNUL,PNUL,YPfalse);
  T195 = BOUNDP(Yx8rSastYfunction_registers_setter);
  if (T195 != YPfalse) {
    T194 = VARREF(Yx8rSastYfunction_registers_setter);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_function_registers_setter_120;
  T193 = CALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(Yx8rSastYfunction_registers_setter,T193);
  T197 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_121 = YPmet(FUNCODEREF(fun_121),YPfalse,T197,ENVNUL,PNUL,YPfalse);
  T198 = fun_121;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLast_embodied_functionG),VARREF(Yx8rSastYfunction_registers),VARREF(Yx8rSastYfunction_registers_setter),VARREF(YLanyG),T198);
  lit_175 = YPPsym((P)"function-data-refs");
  T199 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_data_refs_122 = YPmet(FUNCODEREF(fun_function_data_refs_122),LITREF(lit_175),T199,ENVNUL,PNUL,YPfalse);
  T202 = BOUNDP(Yx8rSastYfunction_data_refs);
  if (T202 != YPfalse) {
    T201 = VARREF(Yx8rSastYfunction_data_refs);
  } else {
    T201 = YPfalse;
  }
  T203 = fun_function_data_refs_122;
  T200 = CALL2(1,VARREF(YPdefine_method),T201,T203);
  VARSET(Yx8rSastYfunction_data_refs,T200);
  lit_176 = YPPsym((P)"function-data-refs-setter");
  T204 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_data_refs_setter_123 = YPmet(FUNCODEREF(fun_function_data_refs_setter_123),LITREF(lit_176),T204,ENVNUL,PNUL,YPfalse);
  T207 = BOUNDP(Yx8rSastYfunction_data_refs_setter);
  if (T207 != YPfalse) {
    T206 = VARREF(Yx8rSastYfunction_data_refs_setter);
  } else {
    T206 = YPfalse;
  }
  T208 = fun_function_data_refs_setter_123;
  T205 = CALL2(1,VARREF(YPdefine_method),T206,T208);
  VARSET(Yx8rSastYfunction_data_refs_setter,T205);
  T209 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_124 = YPmet(FUNCODEREF(fun_124),YPfalse,T209,ENVNUL,PNUL,YPfalse);
  T210 = fun_124;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLast_embodied_functionG),VARREF(Yx8rSastYfunction_data_refs),VARREF(Yx8rSastYfunction_data_refs_setter),VARREF(YLanyG),T210);
  lit_177 = YPPsym((P)"function-self-recursive?");
  T211 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_self_recursiveQ_125 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_125),LITREF(lit_177),T211,ENVNUL,PNUL,YPfalse);
  T214 = BOUNDP(Yx8rSastYfunction_self_recursiveQ);
  if (T214 != YPfalse) {
    T213 = VARREF(Yx8rSastYfunction_self_recursiveQ);
  } else {
    T213 = YPfalse;
  }
  T215 = fun_function_self_recursiveQ_125;
  T212 = CALL2(1,VARREF(YPdefine_method),T213,T215);
  VARSET(Yx8rSastYfunction_self_recursiveQ,T212);
  lit_178 = YPPsym((P)"function-self-recursive?-setter");
  T216 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_self_recursiveQ_setter_126 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_setter_126),LITREF(lit_178),T216,ENVNUL,PNUL,YPfalse);
  T219 = BOUNDP(Yx8rSastYfunction_self_recursiveQ_setter);
  if (T219 != YPfalse) {
    T218 = VARREF(Yx8rSastYfunction_self_recursiveQ_setter);
  } else {
    T218 = YPfalse;
  }
  T220 = fun_function_self_recursiveQ_setter_126;
  T217 = CALL2(1,VARREF(YPdefine_method),T218,T220);
  VARSET(Yx8rSastYfunction_self_recursiveQ_setter,T217);
  T221 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_127 = YPmet(FUNCODEREF(fun_127),YPfalse,T221,ENVNUL,PNUL,YPfalse);
  T222 = fun_127;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLast_embodied_functionG),VARREF(Yx8rSastYfunction_self_recursiveQ),VARREF(Yx8rSastYfunction_self_recursiveQ_setter),VARREF(YLanyG),T222);
  lit_179 = YPPsym((P)"function-source");
  T223 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_source_128 = YPmet(FUNCODEREF(fun_function_source_128),LITREF(lit_179),T223,ENVNUL,PNUL,YPfalse);
  T226 = BOUNDP(Yx8rSastYfunction_source);
  if (T226 != YPfalse) {
    T225 = VARREF(Yx8rSastYfunction_source);
  } else {
    T225 = YPfalse;
  }
  T227 = fun_function_source_128;
  T224 = CALL2(1,VARREF(YPdefine_method),T225,T227);
  VARSET(Yx8rSastYfunction_source,T224);
  lit_180 = YPPsym((P)"function-source-setter");
  T228 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_source_setter_129 = YPmet(FUNCODEREF(fun_function_source_setter_129),LITREF(lit_180),T228,ENVNUL,PNUL,YPfalse);
  T231 = BOUNDP(Yx8rSastYfunction_source_setter);
  if (T231 != YPfalse) {
    T230 = VARREF(Yx8rSastYfunction_source_setter);
  } else {
    T230 = YPfalse;
  }
  T232 = fun_function_source_setter_129;
  T229 = CALL2(1,VARREF(YPdefine_method),T230,T232);
  VARSET(Yx8rSastYfunction_source_setter,T229);
  T233 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_130 = YPmet(FUNCODEREF(fun_130),YPfalse,T233,ENVNUL,PNUL,YPfalse);
  T234 = fun_130;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLast_embodied_functionG),VARREF(Yx8rSastYfunction_source),VARREF(Yx8rSastYfunction_source_setter),VARREF(YLanyG),T234);
  lit_181 = YPPsym((P)"<free-environment>");
  T239 = (P)YPpair(VARREF(Yx8rSastYLprogramsG),Ynil);
  T238 = (P)YPpair(VARREF(YLlstG),T239);
  T237 = CALL2(1,VARREF(Yfab_class),LITREF(lit_181),T238);
  T236 = VARSET(Yx8rSastYLfree_environmentG,T237);
  T235 = T236;
  return T235;
}

P Yx8rSastY___main_3___() {
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
  T0 = CALL1(1,VARREF(Ynew),VARREF(Yx8rSastYLfree_environmentG));
  VARSET(Yx8rSastYDfree_environment_empty,T0);
  T2 = CALL1(1,VARREF(YgooStypesYtE),VARREF(Yx8rSastYLfree_environmentG));
  T1 = YPsig(YPPlist(2,LITREF(lit_153),LITREF(lit_24)),YPPlist(2,T2,VARREF(Yx8rSastYLfree_environmentG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_131 = YPmet(FUNCODEREF(fun_as_131),LITREF(lit_152),T1,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(YgooStypesYas);
  if (T5 != YPfalse) {
    T4 = VARREF(YgooStypesYas);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_as_131;
  T3 = CALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YgooStypesYas,T3);
  T8 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLlstG));
  T7 = YPsig(YPPlist(2,LITREF(lit_153),LITREF(lit_24)),YPPlist(2,T8,VARREF(Yx8rSastYLfree_environmentG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_132 = YPmet(FUNCODEREF(fun_as_132),LITREF(lit_152),T7,ENVNUL,PNUL,YPfalse);
  T11 = BOUNDP(YgooStypesYas);
  if (T11 != YPfalse) {
    T10 = VARREF(YgooStypesYas);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_as_132;
  T9 = CALL2(1,VARREF(YPdefine_method),T10,T12);
  VARSET(YgooStypesYas,T9);
  T14 = CALL1(1,VARREF(YgooStypesYtE),VARREF(Yx8rSastYLfree_environmentG));
  T13 = YPsig(YPPlist(2,LITREF(lit_153),LITREF(lit_24)),YPPlist(2,T14,VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_133 = YPmet(FUNCODEREF(fun_as_133),LITREF(lit_152),T13,ENVNUL,PNUL,YPfalse);
  T17 = BOUNDP(YgooStypesYas);
  if (T17 != YPfalse) {
    T16 = VARREF(YgooStypesYas);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_as_133;
  T15 = CALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(YgooStypesYas,T15);
  lit_182 = YPPsym((P)"free-environment");
  T19 = YPsig(YPPlist(2,LITREF(lit_159),LITREF(lit_160)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rSastYfree_environment = YPmet(FUNCODEREF(Yx8rSastYfree_environment),LITREF(lit_182),T19,ENVNUL,PNUL,YPfalse);
  T20 = Yx8rSastYfree_environment;
  VARSET(Yx8rSastYfree_environment,T20);
  T22 = CALL1(1,VARREF(YgooStypesYtE),VARREF(Yx8rSastYLfree_environmentG));
  T21 = YPsig(YPPlist(1,LITREF(lit_138)),YPPlist(1,T22),YPfalse,YPint((P)1),VARREF(Yx8rSastYLfree_environmentG),Ynil);
  fun_empty_135 = YPmet(FUNCODEREF(fun_empty_135),LITREF(lit_163),T21,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YgooScolsScolYempty);
  if (T25 != YPfalse) {
    T24 = VARREF(YgooScolsScolYempty);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_empty_135;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YgooScolsScolYempty,T23);
  lit_183 = YPPsym((P)"<ast-method>");
  T28 = (P)YPpair(VARREF(Yx8rSastYLast_embodied_functionG),Ynil);
  T27 = CALL2(1,VARREF(Yfab_class),LITREF(lit_183),T28);
  VARSET(Yx8rSastYLast_methodG,T27);
  lit_184 = YPPsym((P)"function-free");
  T29 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_free_136 = YPmet(FUNCODEREF(fun_function_free_136),LITREF(lit_184),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(Yx8rSastYfunction_free);
  if (T32 != YPfalse) {
    T31 = VARREF(Yx8rSastYfunction_free);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_function_free_136;
  T30 = CALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(Yx8rSastYfunction_free,T30);
  lit_185 = YPPsym((P)"function-free-setter");
  T34 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(Yx8rSastYLfree_environmentG),VARREF(Yx8rSastYLast_methodG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_free_setter_137 = YPmet(FUNCODEREF(fun_function_free_setter_137),LITREF(lit_185),T34,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(Yx8rSastYfunction_free_setter);
  if (T37 != YPfalse) {
    T36 = VARREF(Yx8rSastYfunction_free_setter);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_function_free_setter_137;
  T35 = CALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(Yx8rSastYfunction_free_setter,T35);
  T39 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_138 = YPmet(FUNCODEREF(fun_138),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T40 = fun_138;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLast_methodG),VARREF(Yx8rSastYfunction_free),VARREF(Yx8rSastYfunction_free_setter),VARREF(Yx8rSastYLfree_environmentG),T40);
  lit_186 = YPsb((P)"MET");
  T41 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(Yx8rSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_139 = YPmet(FUNCODEREF(fun_function_kind_139),LITREF(lit_125),T41,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(Yx8rSastYfunction_kind);
  if (T44 != YPfalse) {
    T43 = VARREF(Yx8rSastYfunction_kind);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_function_kind_139;
  T42 = CALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(Yx8rSastYfunction_kind,T42);
  lit_187 = YPPsym((P)"<ast-primitive>");
  T47 = (P)YPpair(VARREF(Yx8rSastYLast_embodied_functionG),Ynil);
  T46 = CALL2(1,VARREF(Yfab_class),LITREF(lit_187),T47);
  VARSET(Yx8rSastYLast_primitiveG,T46);
  lit_188 = YPsb((P)"PRM");
  T48 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(Yx8rSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_140 = YPmet(FUNCODEREF(fun_function_kind_140),LITREF(lit_125),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(Yx8rSastYfunction_kind);
  if (T51 != YPfalse) {
    T50 = VARREF(Yx8rSastYfunction_kind);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_function_kind_140;
  T49 = CALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(Yx8rSastYfunction_kind,T49);
  lit_189 = YPPsym((P)"<ast-generic>");
  T54 = (P)YPpair(VARREF(Yx8rSastYLast_functionG),Ynil);
  T53 = CALL2(1,VARREF(Yfab_class),LITREF(lit_189),T54);
  VARSET(Yx8rSastYLast_genericG,T53);
  lit_190 = YPsb((P)"GEN");
  T55 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(Yx8rSastYLast_genericG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_141 = YPmet(FUNCODEREF(fun_function_kind_141),LITREF(lit_125),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(Yx8rSastYfunction_kind);
  if (T58 != YPfalse) {
    T57 = VARREF(Yx8rSastYfunction_kind);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_function_kind_141;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(Yx8rSastYfunction_kind,T56);
  lit_191 = YPPsym((P)"<alternative>");
  T61 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),Ynil);
  T60 = CALL2(1,VARREF(Yfab_class),LITREF(lit_191),T61);
  VARSET(Yx8rSastYLalternativeG,T60);
  lit_192 = YPPsym((P)"alternative-condition");
  T62 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_condition_142 = YPmet(FUNCODEREF(fun_alternative_condition_142),LITREF(lit_192),T62,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(Yx8rSastYalternative_condition);
  if (T65 != YPfalse) {
    T64 = VARREF(Yx8rSastYalternative_condition);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_alternative_condition_142;
  T63 = CALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(Yx8rSastYalternative_condition,T63);
  lit_193 = YPPsym((P)"alternative-condition-setter");
  T67 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_condition_setter_143 = YPmet(FUNCODEREF(fun_alternative_condition_setter_143),LITREF(lit_193),T67,ENVNUL,PNUL,YPfalse);
  T70 = BOUNDP(Yx8rSastYalternative_condition_setter);
  if (T70 != YPfalse) {
    T69 = VARREF(Yx8rSastYalternative_condition_setter);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_alternative_condition_setter_143;
  T68 = CALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(Yx8rSastYalternative_condition_setter,T68);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLalternativeG),VARREF(Yx8rSastYalternative_condition),VARREF(Yx8rSastYalternative_condition_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_194 = YPPsym((P)"alternative-consequent");
  T72 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_144 = YPmet(FUNCODEREF(fun_alternative_consequent_144),LITREF(lit_194),T72,ENVNUL,PNUL,YPfalse);
  T75 = BOUNDP(Yx8rSastYalternative_consequent);
  if (T75 != YPfalse) {
    T74 = VARREF(Yx8rSastYalternative_consequent);
  } else {
    T74 = YPfalse;
  }
  T76 = fun_alternative_consequent_144;
  T73 = CALL2(1,VARREF(YPdefine_method),T74,T76);
  VARSET(Yx8rSastYalternative_consequent,T73);
  lit_195 = YPPsym((P)"alternative-consequent-setter");
  T77 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_setter_145 = YPmet(FUNCODEREF(fun_alternative_consequent_setter_145),LITREF(lit_195),T77,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(Yx8rSastYalternative_consequent_setter);
  if (T80 != YPfalse) {
    T79 = VARREF(Yx8rSastYalternative_consequent_setter);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_alternative_consequent_setter_145;
  T78 = CALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(Yx8rSastYalternative_consequent_setter,T78);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLalternativeG),VARREF(Yx8rSastYalternative_consequent),VARREF(Yx8rSastYalternative_consequent_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_196 = YPPsym((P)"alternative-alternant");
  T82 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_146 = YPmet(FUNCODEREF(fun_alternative_alternant_146),LITREF(lit_196),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(Yx8rSastYalternative_alternant);
  if (T85 != YPfalse) {
    T84 = VARREF(Yx8rSastYalternative_alternant);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_alternative_alternant_146;
  T83 = CALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(Yx8rSastYalternative_alternant,T83);
  lit_197 = YPPsym((P)"alternative-alternant-setter");
  T87 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_setter_147 = YPmet(FUNCODEREF(fun_alternative_alternant_setter_147),LITREF(lit_197),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(Yx8rSastYalternative_alternant_setter);
  if (T90 != YPfalse) {
    T89 = VARREF(Yx8rSastYalternative_alternant_setter);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_alternative_alternant_setter_147;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(Yx8rSastYalternative_alternant_setter,T88);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLalternativeG),VARREF(Yx8rSastYalternative_alternant),VARREF(Yx8rSastYalternative_alternant_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_198 = YPPsym((P)"<sequential>");
  T94 = (P)YPpair(VARREF(Yx8rSastYLprogramsG),Ynil);
  T93 = (P)YPpair(VARREF(YLlstG),T94);
  T92 = CALL2(1,VARREF(Yfab_class),LITREF(lit_198),T93);
  VARSET(Yx8rSastYLsequentialG,T92);
  T95 = CALL1(1,VARREF(Ynew),VARREF(Yx8rSastYLsequentialG));
  VARSET(Yx8rSastYDsequential_empty,T95);
  T97 = CALL1(1,VARREF(YgooStypesYtE),VARREF(Yx8rSastYLsequentialG));
  T96 = YPsig(YPPlist(2,LITREF(lit_153),LITREF(lit_24)),YPPlist(2,T97,VARREF(Yx8rSastYLsequentialG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_148 = YPmet(FUNCODEREF(fun_as_148),LITREF(lit_152),T96,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YgooStypesYas);
  if (T100 != YPfalse) {
    T99 = VARREF(YgooStypesYas);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_as_148;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YgooStypesYas,T98);
  T103 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLlstG));
  T102 = YPsig(YPPlist(2,LITREF(lit_153),LITREF(lit_24)),YPPlist(2,T103,VARREF(Yx8rSastYLsequentialG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_149 = YPmet(FUNCODEREF(fun_as_149),LITREF(lit_152),T102,ENVNUL,PNUL,YPfalse);
  T106 = BOUNDP(YgooStypesYas);
  if (T106 != YPfalse) {
    T105 = VARREF(YgooStypesYas);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_as_149;
  T104 = CALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(YgooStypesYas,T104);
  T109 = CALL1(1,VARREF(YgooStypesYtE),VARREF(Yx8rSastYLsequentialG));
  T108 = YPsig(YPPlist(2,LITREF(lit_153),LITREF(lit_24)),YPPlist(2,T109,VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_150 = YPmet(FUNCODEREF(fun_as_150),LITREF(lit_152),T108,ENVNUL,PNUL,YPfalse);
  T112 = BOUNDP(YgooStypesYas);
  if (T112 != YPfalse) {
    T111 = VARREF(YgooStypesYas);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_as_150;
  T110 = CALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(YgooStypesYas,T110);
  lit_199 = YPPsym((P)"sequential");
  T114 = YPsig(YPPlist(2,LITREF(lit_159),LITREF(lit_160)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rSastYsequential = YPmet(FUNCODEREF(Yx8rSastYsequential),LITREF(lit_199),T114,ENVNUL,PNUL,YPfalse);
  T115 = Yx8rSastYsequential;
  VARSET(Yx8rSastYsequential,T115);
  T117 = CALL1(1,VARREF(YgooStypesYtE),VARREF(Yx8rSastYLsequentialG));
  T116 = YPsig(YPPlist(1,LITREF(lit_138)),YPPlist(1,T117),YPfalse,YPint((P)1),VARREF(Yx8rSastYLsequentialG),Ynil);
  fun_empty_152 = YPmet(FUNCODEREF(fun_empty_152),LITREF(lit_163),T116,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YgooScolsScolYempty);
  if (T120 != YPfalse) {
    T119 = VARREF(YgooScolsScolYempty);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_empty_152;
  T118 = CALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YgooScolsScolYempty,T118);
  lit_200 = YPPsym((P)"<constant>");
  T123 = (P)YPpair(VARREF(Yx8rSastYLpassive_programG),Ynil);
  T122 = CALL2(1,VARREF(Yfab_class),LITREF(lit_200),T123);
  VARSET(Yx8rSastYLconstantG,T122);
  lit_201 = YPPsym((P)"constant-value");
  T124 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_value_153 = YPmet(FUNCODEREF(fun_constant_value_153),LITREF(lit_201),T124,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(Yx8rSastYconstant_value);
  if (T127 != YPfalse) {
    T126 = VARREF(Yx8rSastYconstant_value);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_constant_value_153;
  T125 = CALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(Yx8rSastYconstant_value,T125);
  lit_202 = YPPsym((P)"constant-value-setter");
  T129 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_value_setter_154 = YPmet(FUNCODEREF(fun_constant_value_setter_154),LITREF(lit_202),T129,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(Yx8rSastYconstant_value_setter);
  if (T132 != YPfalse) {
    T131 = VARREF(Yx8rSastYconstant_value_setter);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_constant_value_setter_154;
  T130 = CALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(Yx8rSastYconstant_value_setter,T130);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLconstantG),VARREF(Yx8rSastYconstant_value),VARREF(Yx8rSastYconstant_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_203 = YPPsym((P)"constant-index");
  T134 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_index_155 = YPmet(FUNCODEREF(fun_constant_index_155),LITREF(lit_203),T134,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(Yx8rSastYconstant_index);
  if (T137 != YPfalse) {
    T136 = VARREF(Yx8rSastYconstant_index);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_constant_index_155;
  T135 = CALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(Yx8rSastYconstant_index,T135);
  lit_204 = YPPsym((P)"constant-index-setter");
  T139 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_index_setter_156 = YPmet(FUNCODEREF(fun_constant_index_setter_156),LITREF(lit_204),T139,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(Yx8rSastYconstant_index_setter);
  if (T142 != YPfalse) {
    T141 = VARREF(Yx8rSastYconstant_index_setter);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_constant_index_setter_156;
  T140 = CALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(Yx8rSastYconstant_index_setter,T140);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLconstantG),VARREF(Yx8rSastYconstant_index),VARREF(Yx8rSastYconstant_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_205 = YPPsym((P)"<raw-constant>");
  T145 = (P)YPpair(VARREF(Yx8rSastYLconstantG),Ynil);
  T144 = CALL2(1,VARREF(Yfab_class),LITREF(lit_205),T145);
  VARSET(Yx8rSastYLraw_constantG,T144);
  lit_206 = YPPsym((P)"<immediate-constant>");
  T147 = (P)YPpair(VARREF(Yx8rSastYLconstantG),Ynil);
  T146 = CALL2(1,VARREF(Yfab_class),LITREF(lit_206),T147);
  VARSET(Yx8rSastYLimmediate_constantG,T146);
  lit_207 = YPPsym((P)"<application>");
  T149 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),Ynil);
  T148 = CALL2(1,VARREF(Yfab_class),LITREF(lit_207),T149);
  VARSET(Yx8rSastYLapplicationG,T148);
  lit_208 = YPPsym((P)"application-arguments");
  T150 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_arguments_157 = YPmet(FUNCODEREF(fun_application_arguments_157),LITREF(lit_208),T150,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(Yx8rSastYapplication_arguments);
  if (T153 != YPfalse) {
    T152 = VARREF(Yx8rSastYapplication_arguments);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_application_arguments_157;
  T151 = CALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(Yx8rSastYapplication_arguments,T151);
  lit_209 = YPPsym((P)"application-arguments-setter");
  T155 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_arguments_setter_158 = YPmet(FUNCODEREF(fun_application_arguments_setter_158),LITREF(lit_209),T155,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(Yx8rSastYapplication_arguments_setter);
  if (T158 != YPfalse) {
    T157 = VARREF(Yx8rSastYapplication_arguments_setter);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_application_arguments_setter_158;
  T156 = CALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(Yx8rSastYapplication_arguments_setter,T156);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLapplicationG),VARREF(Yx8rSastYapplication_arguments),VARREF(Yx8rSastYapplication_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_210 = YPPsym((P)"application-tail?");
  T160 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_tailQ_159 = YPmet(FUNCODEREF(fun_application_tailQ_159),LITREF(lit_210),T160,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(Yx8rSastYapplication_tailQ);
  if (T163 != YPfalse) {
    T162 = VARREF(Yx8rSastYapplication_tailQ);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_application_tailQ_159;
  T161 = CALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(Yx8rSastYapplication_tailQ,T161);
  lit_211 = YPPsym((P)"application-tail?-setter");
  T165 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_tailQ_setter_160 = YPmet(FUNCODEREF(fun_application_tailQ_setter_160),LITREF(lit_211),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(Yx8rSastYapplication_tailQ_setter);
  if (T168 != YPfalse) {
    T167 = VARREF(Yx8rSastYapplication_tailQ_setter);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_application_tailQ_setter_160;
  T166 = CALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(Yx8rSastYapplication_tailQ_setter,T166);
  T170 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_161 = YPmet(FUNCODEREF(fun_161),YPfalse,T170,ENVNUL,PNUL,YPfalse);
  T171 = fun_161;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLapplicationG),VARREF(Yx8rSastYapplication_tailQ),VARREF(Yx8rSastYapplication_tailQ_setter),VARREF(YLanyG),T171);
  lit_212 = YPPsym((P)"<regular-application>");
  T173 = (P)YPpair(VARREF(Yx8rSastYLapplicationG),Ynil);
  T172 = CALL2(1,VARREF(Yfab_class),LITREF(lit_212),T173);
  VARSET(Yx8rSastYLregular_applicationG,T172);
  lit_213 = YPPsym((P)"application-function");
  T174 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_function_162 = YPmet(FUNCODEREF(fun_application_function_162),LITREF(lit_213),T174,ENVNUL,PNUL,YPfalse);
  T177 = BOUNDP(Yx8rSastYapplication_function);
  if (T177 != YPfalse) {
    T176 = VARREF(Yx8rSastYapplication_function);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_application_function_162;
  T175 = CALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(Yx8rSastYapplication_function,T175);
  lit_214 = YPPsym((P)"application-function-setter");
  T179 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_function_setter_163 = YPmet(FUNCODEREF(fun_application_function_setter_163),LITREF(lit_214),T179,ENVNUL,PNUL,YPfalse);
  T182 = BOUNDP(Yx8rSastYapplication_function_setter);
  if (T182 != YPfalse) {
    T181 = VARREF(Yx8rSastYapplication_function_setter);
  } else {
    T181 = YPfalse;
  }
  T183 = fun_application_function_setter_163;
  T180 = CALL2(1,VARREF(YPdefine_method),T181,T183);
  VARSET(Yx8rSastYapplication_function_setter,T180);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLregular_applicationG),VARREF(Yx8rSastYapplication_function),VARREF(Yx8rSastYapplication_function_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_215 = YPPsym((P)"application-known?");
  T184 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_knownQ_164 = YPmet(FUNCODEREF(fun_application_knownQ_164),LITREF(lit_215),T184,ENVNUL,PNUL,YPfalse);
  T187 = BOUNDP(Yx8rSastYapplication_knownQ);
  if (T187 != YPfalse) {
    T186 = VARREF(Yx8rSastYapplication_knownQ);
  } else {
    T186 = YPfalse;
  }
  T188 = fun_application_knownQ_164;
  T185 = CALL2(1,VARREF(YPdefine_method),T186,T188);
  VARSET(Yx8rSastYapplication_knownQ,T185);
  lit_216 = YPPsym((P)"application-known?-setter");
  T189 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_knownQ_setter_165 = YPmet(FUNCODEREF(fun_application_knownQ_setter_165),LITREF(lit_216),T189,ENVNUL,PNUL,YPfalse);
  T192 = BOUNDP(Yx8rSastYapplication_knownQ_setter);
  if (T192 != YPfalse) {
    T191 = VARREF(Yx8rSastYapplication_knownQ_setter);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_application_knownQ_setter_165;
  T190 = CALL2(1,VARREF(YPdefine_method),T191,T193);
  VARSET(Yx8rSastYapplication_knownQ_setter,T190);
  T194 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_166 = YPmet(FUNCODEREF(fun_166),YPfalse,T194,ENVNUL,PNUL,YPfalse);
  T195 = fun_166;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLregular_applicationG),VARREF(Yx8rSastYapplication_knownQ),VARREF(Yx8rSastYapplication_knownQ_setter),VARREF(YLanyG),T195);
  lit_217 = YPPsym((P)"<method-application>");
  T197 = (P)YPpair(VARREF(Yx8rSastYLregular_applicationG),Ynil);
  T196 = CALL2(1,VARREF(Yfab_class),LITREF(lit_217),T197);
  VARSET(Yx8rSastYLmethod_applicationG,T196);
  lit_218 = YPPsym((P)"application-next-methods");
  T198 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLmethod_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_next_methods_167 = YPmet(FUNCODEREF(fun_application_next_methods_167),LITREF(lit_218),T198,ENVNUL,PNUL,YPfalse);
  T201 = BOUNDP(Yx8rSastYapplication_next_methods);
  if (T201 != YPfalse) {
    T200 = VARREF(Yx8rSastYapplication_next_methods);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_application_next_methods_167;
  T199 = CALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(Yx8rSastYapplication_next_methods,T199);
  lit_219 = YPPsym((P)"application-next-methods-setter");
  T203 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLmethod_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_next_methods_setter_168 = YPmet(FUNCODEREF(fun_application_next_methods_setter_168),LITREF(lit_219),T203,ENVNUL,PNUL,YPfalse);
  T206 = BOUNDP(Yx8rSastYapplication_next_methods_setter);
  if (T206 != YPfalse) {
    T205 = VARREF(Yx8rSastYapplication_next_methods_setter);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_application_next_methods_setter_168;
  T204 = CALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(Yx8rSastYapplication_next_methods_setter,T204);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLmethod_applicationG),VARREF(Yx8rSastYapplication_next_methods),VARREF(Yx8rSastYapplication_next_methods_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_220 = YPPsym((P)"<predefined-application>");
  T209 = (P)YPpair(VARREF(Yx8rSastYLapplicationG),Ynil);
  T208 = CALL2(1,VARREF(Yfab_class),LITREF(lit_220),T209);
  VARSET(Yx8rSastYLpredefined_applicationG,T208);
  lit_221 = YPPsym((P)"application-binding");
  T210 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLpredefined_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_binding_169 = YPmet(FUNCODEREF(fun_application_binding_169),LITREF(lit_221),T210,ENVNUL,PNUL,YPfalse);
  T213 = BOUNDP(Yx8rSastYapplication_binding);
  if (T213 != YPfalse) {
    T212 = VARREF(Yx8rSastYapplication_binding);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_application_binding_169;
  T211 = CALL2(1,VARREF(YPdefine_method),T212,T214);
  VARSET(Yx8rSastYapplication_binding,T211);
  lit_222 = YPPsym((P)"application-binding-setter");
  T215 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLpredefined_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_binding_setter_170 = YPmet(FUNCODEREF(fun_application_binding_setter_170),LITREF(lit_222),T215,ENVNUL,PNUL,YPfalse);
  T218 = BOUNDP(Yx8rSastYapplication_binding_setter);
  if (T218 != YPfalse) {
    T217 = VARREF(Yx8rSastYapplication_binding_setter);
  } else {
    T217 = YPfalse;
  }
  T219 = fun_application_binding_setter_170;
  T216 = CALL2(1,VARREF(YPdefine_method),T217,T219);
  VARSET(Yx8rSastYapplication_binding_setter,T216);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLpredefined_applicationG),VARREF(Yx8rSastYapplication_binding),VARREF(Yx8rSastYapplication_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_223 = YPPsym((P)"<fix-let>");
  T223 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),Ynil);
  T222 = CALL2(1,VARREF(Yfab_class),LITREF(lit_223),T223);
  T221 = VARSET(Yx8rSastYLfix_letG,T222);
  T220 = T221;
  return T220;
}

P Yx8rSastY___main_4___() {
  P T221,T220,T219,T218,T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207,T206;
  P T205,T204,T203,T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190;
  P T189,T188,T187,T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174;
  P T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158;
  P T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142;
  P T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126;
  P T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110;
  P T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94;
  P T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78;
  P T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62;
  P T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46;
  P T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_224 = YPPsym((P)"fix-let-bindings");
  T0 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_171 = YPmet(FUNCODEREF(fun_fix_let_bindings_171),LITREF(lit_224),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(Yx8rSastYfix_let_bindings);
  if (T3 != YPfalse) {
    T2 = VARREF(Yx8rSastYfix_let_bindings);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_fix_let_bindings_171;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(Yx8rSastYfix_let_bindings,T1);
  lit_225 = YPPsym((P)"fix-let-bindings-setter");
  T5 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_setter_172 = YPmet(FUNCODEREF(fun_fix_let_bindings_setter_172),LITREF(lit_225),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(Yx8rSastYfix_let_bindings_setter);
  if (T8 != YPfalse) {
    T7 = VARREF(Yx8rSastYfix_let_bindings_setter);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_fix_let_bindings_setter_172;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(Yx8rSastYfix_let_bindings_setter,T6);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLfix_letG),VARREF(Yx8rSastYfix_let_bindings),VARREF(Yx8rSastYfix_let_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_226 = YPPsym((P)"fix-let-types");
  T10 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_types_173 = YPmet(FUNCODEREF(fun_fix_let_types_173),LITREF(lit_226),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(Yx8rSastYfix_let_types);
  if (T13 != YPfalse) {
    T12 = VARREF(Yx8rSastYfix_let_types);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_fix_let_types_173;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(Yx8rSastYfix_let_types,T11);
  lit_227 = YPPsym((P)"fix-let-types-setter");
  T15 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_types_setter_174 = YPmet(FUNCODEREF(fun_fix_let_types_setter_174),LITREF(lit_227),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(Yx8rSastYfix_let_types_setter);
  if (T18 != YPfalse) {
    T17 = VARREF(Yx8rSastYfix_let_types_setter);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_fix_let_types_setter_174;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(Yx8rSastYfix_let_types_setter,T16);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLfix_letG),VARREF(Yx8rSastYfix_let_types),VARREF(Yx8rSastYfix_let_types_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_228 = YPPsym((P)"fix-let-arguments");
  T20 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_175 = YPmet(FUNCODEREF(fun_fix_let_arguments_175),LITREF(lit_228),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(Yx8rSastYfix_let_arguments);
  if (T23 != YPfalse) {
    T22 = VARREF(Yx8rSastYfix_let_arguments);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_fix_let_arguments_175;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(Yx8rSastYfix_let_arguments,T21);
  lit_229 = YPPsym((P)"fix-let-arguments-setter");
  T25 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_setter_176 = YPmet(FUNCODEREF(fun_fix_let_arguments_setter_176),LITREF(lit_229),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(Yx8rSastYfix_let_arguments_setter);
  if (T28 != YPfalse) {
    T27 = VARREF(Yx8rSastYfix_let_arguments_setter);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_fix_let_arguments_setter_176;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(Yx8rSastYfix_let_arguments_setter,T26);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLfix_letG),VARREF(Yx8rSastYfix_let_arguments),VARREF(Yx8rSastYfix_let_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_230 = YPPsym((P)"fix-let-body");
  T30 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_body_177 = YPmet(FUNCODEREF(fun_fix_let_body_177),LITREF(lit_230),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(Yx8rSastYfix_let_body);
  if (T33 != YPfalse) {
    T32 = VARREF(Yx8rSastYfix_let_body);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_fix_let_body_177;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(Yx8rSastYfix_let_body,T31);
  lit_231 = YPPsym((P)"fix-let-body-setter");
  T35 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_body_setter_178 = YPmet(FUNCODEREF(fun_fix_let_body_setter_178),LITREF(lit_231),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(Yx8rSastYfix_let_body_setter);
  if (T38 != YPfalse) {
    T37 = VARREF(Yx8rSastYfix_let_body_setter);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_fix_let_body_setter_178;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(Yx8rSastYfix_let_body_setter,T36);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLfix_letG),VARREF(Yx8rSastYfix_let_body),VARREF(Yx8rSastYfix_let_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_232 = YPPsym((P)"<fab-list>");
  T42 = (P)YPpair(VARREF(Yx8rSastYLprogramsG),Ynil);
  T41 = (P)YPpair(VARREF(YLlstG),T42);
  T40 = CALL2(1,VARREF(Yfab_class),LITREF(lit_232),T41);
  VARSET(Yx8rSastYLfab_listG,T40);
  T43 = CALL1(1,VARREF(Ynew),VARREF(Yx8rSastYLfab_listG));
  VARSET(Yx8rSastYDfab_list_empty,T43);
  T45 = CALL1(1,VARREF(YgooStypesYtE),VARREF(Yx8rSastYLfab_listG));
  T44 = YPsig(YPPlist(2,LITREF(lit_153),LITREF(lit_24)),YPPlist(2,T45,VARREF(Yx8rSastYLfab_listG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_179 = YPmet(FUNCODEREF(fun_as_179),LITREF(lit_152),T44,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YgooStypesYas);
  if (T48 != YPfalse) {
    T47 = VARREF(YgooStypesYas);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_as_179;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YgooStypesYas,T46);
  T51 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLlstG));
  T50 = YPsig(YPPlist(2,LITREF(lit_153),LITREF(lit_24)),YPPlist(2,T51,VARREF(Yx8rSastYLfab_listG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_180 = YPmet(FUNCODEREF(fun_as_180),LITREF(lit_152),T50,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YgooStypesYas);
  if (T54 != YPfalse) {
    T53 = VARREF(YgooStypesYas);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_as_180;
  T52 = CALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YgooStypesYas,T52);
  T57 = CALL1(1,VARREF(YgooStypesYtE),VARREF(Yx8rSastYLfab_listG));
  T56 = YPsig(YPPlist(2,LITREF(lit_153),LITREF(lit_24)),YPPlist(2,T57,VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_181 = YPmet(FUNCODEREF(fun_as_181),LITREF(lit_152),T56,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(YgooStypesYas);
  if (T60 != YPfalse) {
    T59 = VARREF(YgooStypesYas);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_as_181;
  T58 = CALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YgooStypesYas,T58);
  lit_233 = YPPsym((P)"fab-list");
  T62 = YPsig(YPPlist(2,LITREF(lit_159),LITREF(lit_160)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rSastYfab_list = YPmet(FUNCODEREF(Yx8rSastYfab_list),LITREF(lit_233),T62,ENVNUL,PNUL,YPfalse);
  T63 = Yx8rSastYfab_list;
  VARSET(Yx8rSastYfab_list,T63);
  T65 = CALL1(1,VARREF(YgooStypesYtE),VARREF(Yx8rSastYLfab_listG));
  T64 = YPsig(YPPlist(1,LITREF(lit_138)),YPPlist(1,T65),YPfalse,YPint((P)1),VARREF(Yx8rSastYLfab_listG),Ynil);
  fun_empty_183 = YPmet(FUNCODEREF(fun_empty_183),LITREF(lit_163),T64,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YgooScolsScolYempty);
  if (T68 != YPfalse) {
    T67 = VARREF(YgooScolsScolYempty);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_empty_183;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YgooScolsScolYempty,T66);
  lit_234 = YPPsym((P)"<arguments>");
  T72 = (P)YPpair(VARREF(Yx8rSastYLprogramsG),Ynil);
  T71 = (P)YPpair(VARREF(YLlstG),T72);
  T70 = CALL2(1,VARREF(Yfab_class),LITREF(lit_234),T71);
  VARSET(Yx8rSastYLargumentsG,T70);
  T73 = CALL1(1,VARREF(Ynew),VARREF(Yx8rSastYLargumentsG));
  VARSET(Yx8rSastYDarguments_empty,T73);
  T75 = CALL1(1,VARREF(YgooStypesYtE),VARREF(Yx8rSastYLargumentsG));
  T74 = YPsig(YPPlist(2,LITREF(lit_153),LITREF(lit_24)),YPPlist(2,T75,VARREF(Yx8rSastYLargumentsG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_184 = YPmet(FUNCODEREF(fun_as_184),LITREF(lit_152),T74,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YgooStypesYas);
  if (T78 != YPfalse) {
    T77 = VARREF(YgooStypesYas);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_as_184;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YgooStypesYas,T76);
  T81 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLlstG));
  T80 = YPsig(YPPlist(2,LITREF(lit_153),LITREF(lit_24)),YPPlist(2,T81,VARREF(Yx8rSastYLargumentsG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_185 = YPmet(FUNCODEREF(fun_as_185),LITREF(lit_152),T80,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YgooStypesYas);
  if (T84 != YPfalse) {
    T83 = VARREF(YgooStypesYas);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_as_185;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YgooStypesYas,T82);
  T87 = CALL1(1,VARREF(YgooStypesYtE),VARREF(Yx8rSastYLargumentsG));
  T86 = YPsig(YPPlist(2,LITREF(lit_153),LITREF(lit_24)),YPPlist(2,T87,VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_186 = YPmet(FUNCODEREF(fun_as_186),LITREF(lit_152),T86,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YgooStypesYas);
  if (T90 != YPfalse) {
    T89 = VARREF(YgooStypesYas);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_as_186;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YgooStypesYas,T88);
  T92 = YPsig(YPPlist(2,LITREF(lit_159),LITREF(lit_160)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rSastYarguments = YPmet(FUNCODEREF(Yx8rSastYarguments),LITREF(lit_15),T92,ENVNUL,PNUL,YPfalse);
  T93 = Yx8rSastYarguments;
  VARSET(Yx8rSastYarguments,T93);
  T95 = CALL1(1,VARREF(YgooStypesYtE),VARREF(Yx8rSastYLargumentsG));
  T94 = YPsig(YPPlist(1,LITREF(lit_138)),YPPlist(1,T95),YPfalse,YPint((P)1),VARREF(Yx8rSastYLargumentsG),Ynil);
  fun_empty_188 = YPmet(FUNCODEREF(fun_empty_188),LITREF(lit_163),T94,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YgooScolsScolYempty);
  if (T98 != YPfalse) {
    T97 = VARREF(YgooScolsScolYempty);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_empty_188;
  T96 = CALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YgooScolsScolYempty,T96);
  lit_235 = YPPsym((P)"<locals>");
  T101 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),Ynil);
  T100 = CALL2(1,VARREF(Yfab_class),LITREF(lit_235),T101);
  VARSET(Yx8rSastYLlocalsG,T100);
  lit_236 = YPPsym((P)"locals-bindings");
  T102 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_bindings_189 = YPmet(FUNCODEREF(fun_locals_bindings_189),LITREF(lit_236),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(Yx8rSastYlocals_bindings);
  if (T105 != YPfalse) {
    T104 = VARREF(Yx8rSastYlocals_bindings);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_locals_bindings_189;
  T103 = CALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(Yx8rSastYlocals_bindings,T103);
  lit_237 = YPPsym((P)"locals-bindings-setter");
  T107 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_bindings_setter_190 = YPmet(FUNCODEREF(fun_locals_bindings_setter_190),LITREF(lit_237),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(Yx8rSastYlocals_bindings_setter);
  if (T110 != YPfalse) {
    T109 = VARREF(Yx8rSastYlocals_bindings_setter);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_locals_bindings_setter_190;
  T108 = CALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(Yx8rSastYlocals_bindings_setter,T108);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLlocalsG),VARREF(Yx8rSastYlocals_bindings),VARREF(Yx8rSastYlocals_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_238 = YPPsym((P)"locals-functions");
  T112 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_functions_191 = YPmet(FUNCODEREF(fun_locals_functions_191),LITREF(lit_238),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(Yx8rSastYlocals_functions);
  if (T115 != YPfalse) {
    T114 = VARREF(Yx8rSastYlocals_functions);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_locals_functions_191;
  T113 = CALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(Yx8rSastYlocals_functions,T113);
  lit_239 = YPPsym((P)"locals-functions-setter");
  T117 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_functions_setter_192 = YPmet(FUNCODEREF(fun_locals_functions_setter_192),LITREF(lit_239),T117,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(Yx8rSastYlocals_functions_setter);
  if (T120 != YPfalse) {
    T119 = VARREF(Yx8rSastYlocals_functions_setter);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_locals_functions_setter_192;
  T118 = CALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(Yx8rSastYlocals_functions_setter,T118);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLlocalsG),VARREF(Yx8rSastYlocals_functions),VARREF(Yx8rSastYlocals_functions_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_240 = YPPsym((P)"locals-body");
  T122 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_body_193 = YPmet(FUNCODEREF(fun_locals_body_193),LITREF(lit_240),T122,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(Yx8rSastYlocals_body);
  if (T125 != YPfalse) {
    T124 = VARREF(Yx8rSastYlocals_body);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_locals_body_193;
  T123 = CALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(Yx8rSastYlocals_body,T123);
  lit_241 = YPPsym((P)"locals-body-setter");
  T127 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_body_setter_194 = YPmet(FUNCODEREF(fun_locals_body_setter_194),LITREF(lit_241),T127,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(Yx8rSastYlocals_body_setter);
  if (T130 != YPfalse) {
    T129 = VARREF(Yx8rSastYlocals_body_setter);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_locals_body_setter_194;
  T128 = CALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(Yx8rSastYlocals_body_setter,T128);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLlocalsG),VARREF(Yx8rSastYlocals_body),VARREF(Yx8rSastYlocals_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_242 = YPPsym((P)"<bind-exit>");
  T133 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),Ynil);
  T132 = CALL2(1,VARREF(Yfab_class),LITREF(lit_242),T133);
  VARSET(Yx8rSastYLbind_exitG,T132);
  lit_243 = YPPsym((P)"bind-exit-main-fun");
  T134 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLbind_exitG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_195 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_195),LITREF(lit_243),T134,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(Yx8rSastYbind_exit_main_fun);
  if (T137 != YPfalse) {
    T136 = VARREF(Yx8rSastYbind_exit_main_fun);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_bind_exit_main_fun_195;
  T135 = CALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(Yx8rSastYbind_exit_main_fun,T135);
  lit_244 = YPPsym((P)"bind-exit-main-fun-setter");
  T139 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLbind_exitG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_setter_196 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_setter_196),LITREF(lit_244),T139,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(Yx8rSastYbind_exit_main_fun_setter);
  if (T142 != YPfalse) {
    T141 = VARREF(Yx8rSastYbind_exit_main_fun_setter);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_bind_exit_main_fun_setter_196;
  T140 = CALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(Yx8rSastYbind_exit_main_fun_setter,T140);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLbind_exitG),VARREF(Yx8rSastYbind_exit_main_fun),VARREF(Yx8rSastYbind_exit_main_fun_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_245 = YPPsym((P)"<unwind-protect>");
  T145 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),Ynil);
  T144 = CALL2(1,VARREF(Yfab_class),LITREF(lit_245),T145);
  VARSET(Yx8rSastYLunwind_protectG,T144);
  lit_246 = YPPsym((P)"unwind-protect-protected-thunk");
  T146 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_197 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_197),LITREF(lit_246),T146,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(Yx8rSastYunwind_protect_protected_thunk);
  if (T149 != YPfalse) {
    T148 = VARREF(Yx8rSastYunwind_protect_protected_thunk);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_unwind_protect_protected_thunk_197;
  T147 = CALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(Yx8rSastYunwind_protect_protected_thunk,T147);
  lit_247 = YPPsym((P)"unwind-protect-protected-thunk-setter");
  T151 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_setter_198 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_setter_198),LITREF(lit_247),T151,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(Yx8rSastYunwind_protect_protected_thunk_setter);
  if (T154 != YPfalse) {
    T153 = VARREF(Yx8rSastYunwind_protect_protected_thunk_setter);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_unwind_protect_protected_thunk_setter_198;
  T152 = CALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(Yx8rSastYunwind_protect_protected_thunk_setter,T152);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLunwind_protectG),VARREF(Yx8rSastYunwind_protect_protected_thunk),VARREF(Yx8rSastYunwind_protect_protected_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_248 = YPPsym((P)"unwind-protect-cleanup-thunk");
  T156 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_199 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_199),LITREF(lit_248),T156,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(Yx8rSastYunwind_protect_cleanup_thunk);
  if (T159 != YPfalse) {
    T158 = VARREF(Yx8rSastYunwind_protect_cleanup_thunk);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_unwind_protect_cleanup_thunk_199;
  T157 = CALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(Yx8rSastYunwind_protect_cleanup_thunk,T157);
  lit_249 = YPPsym((P)"unwind-protect-cleanup-thunk-setter");
  T161 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_setter_200 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_setter_200),LITREF(lit_249),T161,ENVNUL,PNUL,YPfalse);
  T164 = BOUNDP(Yx8rSastYunwind_protect_cleanup_thunk_setter);
  if (T164 != YPfalse) {
    T163 = VARREF(Yx8rSastYunwind_protect_cleanup_thunk_setter);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_unwind_protect_cleanup_thunk_setter_200;
  T162 = CALL2(1,VARREF(YPdefine_method),T163,T165);
  VARSET(Yx8rSastYunwind_protect_cleanup_thunk_setter,T162);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLunwind_protectG),VARREF(Yx8rSastYunwind_protect_cleanup_thunk),VARREF(Yx8rSastYunwind_protect_cleanup_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_250 = YPPsym((P)"<monitor>");
  T167 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),Ynil);
  T166 = CALL2(1,VARREF(Yfab_class),LITREF(lit_250),T167);
  VARSET(Yx8rSastYLmonitorG,T166);
  lit_251 = YPPsym((P)"monitor-type");
  T168 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_type_201 = YPmet(FUNCODEREF(fun_monitor_type_201),LITREF(lit_251),T168,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(Yx8rSastYmonitor_type);
  if (T171 != YPfalse) {
    T170 = VARREF(Yx8rSastYmonitor_type);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_monitor_type_201;
  T169 = CALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(Yx8rSastYmonitor_type,T169);
  lit_252 = YPPsym((P)"monitor-type-setter");
  T173 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_type_setter_202 = YPmet(FUNCODEREF(fun_monitor_type_setter_202),LITREF(lit_252),T173,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(Yx8rSastYmonitor_type_setter);
  if (T176 != YPfalse) {
    T175 = VARREF(Yx8rSastYmonitor_type_setter);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_monitor_type_setter_202;
  T174 = CALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(Yx8rSastYmonitor_type_setter,T174);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLmonitorG),VARREF(Yx8rSastYmonitor_type),VARREF(Yx8rSastYmonitor_type_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_253 = YPPsym((P)"monitor-info");
  T178 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_info_203 = YPmet(FUNCODEREF(fun_monitor_info_203),LITREF(lit_253),T178,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(Yx8rSastYmonitor_info);
  if (T181 != YPfalse) {
    T180 = VARREF(Yx8rSastYmonitor_info);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_monitor_info_203;
  T179 = CALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(Yx8rSastYmonitor_info,T179);
  lit_254 = YPPsym((P)"monitor-info-setter");
  T183 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_info_setter_204 = YPmet(FUNCODEREF(fun_monitor_info_setter_204),LITREF(lit_254),T183,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(Yx8rSastYmonitor_info_setter);
  if (T186 != YPfalse) {
    T185 = VARREF(Yx8rSastYmonitor_info_setter);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_monitor_info_setter_204;
  T184 = CALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(Yx8rSastYmonitor_info_setter,T184);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLmonitorG),VARREF(Yx8rSastYmonitor_info),VARREF(Yx8rSastYmonitor_info_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_255 = YPPsym((P)"monitor-test");
  T188 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_test_205 = YPmet(FUNCODEREF(fun_monitor_test_205),LITREF(lit_255),T188,ENVNUL,PNUL,YPfalse);
  T191 = BOUNDP(Yx8rSastYmonitor_test);
  if (T191 != YPfalse) {
    T190 = VARREF(Yx8rSastYmonitor_test);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_monitor_test_205;
  T189 = CALL2(1,VARREF(YPdefine_method),T190,T192);
  VARSET(Yx8rSastYmonitor_test,T189);
  lit_256 = YPPsym((P)"monitor-test-setter");
  T193 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_test_setter_206 = YPmet(FUNCODEREF(fun_monitor_test_setter_206),LITREF(lit_256),T193,ENVNUL,PNUL,YPfalse);
  T196 = BOUNDP(Yx8rSastYmonitor_test_setter);
  if (T196 != YPfalse) {
    T195 = VARREF(Yx8rSastYmonitor_test_setter);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_monitor_test_setter_206;
  T194 = CALL2(1,VARREF(YPdefine_method),T195,T197);
  VARSET(Yx8rSastYmonitor_test_setter,T194);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLmonitorG),VARREF(Yx8rSastYmonitor_test),VARREF(Yx8rSastYmonitor_test_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_257 = YPPsym((P)"monitor-handler");
  T198 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_handler_207 = YPmet(FUNCODEREF(fun_monitor_handler_207),LITREF(lit_257),T198,ENVNUL,PNUL,YPfalse);
  T201 = BOUNDP(Yx8rSastYmonitor_handler);
  if (T201 != YPfalse) {
    T200 = VARREF(Yx8rSastYmonitor_handler);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_monitor_handler_207;
  T199 = CALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(Yx8rSastYmonitor_handler,T199);
  lit_258 = YPPsym((P)"monitor-handler-setter");
  T203 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_handler_setter_208 = YPmet(FUNCODEREF(fun_monitor_handler_setter_208),LITREF(lit_258),T203,ENVNUL,PNUL,YPfalse);
  T206 = BOUNDP(Yx8rSastYmonitor_handler_setter);
  if (T206 != YPfalse) {
    T205 = VARREF(Yx8rSastYmonitor_handler_setter);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_monitor_handler_setter_208;
  T204 = CALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(Yx8rSastYmonitor_handler_setter,T204);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLmonitorG),VARREF(Yx8rSastYmonitor_handler),VARREF(Yx8rSastYmonitor_handler_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_259 = YPPsym((P)"monitor-main-thunk");
  T208 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_209 = YPmet(FUNCODEREF(fun_monitor_main_thunk_209),LITREF(lit_259),T208,ENVNUL,PNUL,YPfalse);
  T211 = BOUNDP(Yx8rSastYmonitor_main_thunk);
  if (T211 != YPfalse) {
    T210 = VARREF(Yx8rSastYmonitor_main_thunk);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_monitor_main_thunk_209;
  T209 = CALL2(1,VARREF(YPdefine_method),T210,T212);
  VARSET(Yx8rSastYmonitor_main_thunk,T209);
  lit_260 = YPPsym((P)"monitor-main-thunk-setter");
  T213 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_setter_210 = YPmet(FUNCODEREF(fun_monitor_main_thunk_setter_210),LITREF(lit_260),T213,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(Yx8rSastYmonitor_main_thunk_setter);
  if (T216 != YPfalse) {
    T215 = VARREF(Yx8rSastYmonitor_main_thunk_setter);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_monitor_main_thunk_setter_210;
  T214 = CALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(Yx8rSastYmonitor_main_thunk_setter,T214);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLmonitorG),VARREF(Yx8rSastYmonitor_main_thunk),VARREF(Yx8rSastYmonitor_main_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_261 = YPPsym((P)"<static-environment>");
  T221 = (P)YPpair(VARREF(YLanyG),Ynil);
  T220 = CALL2(1,VARREF(Yfab_class),LITREF(lit_261),T221);
  T219 = VARSET(Yx8rSastYLstatic_environmentG,T220);
  T218 = T219;
  return T218;
}

P Yx8rSastY___main_5___() {
  P T276,T275,T274,T273,T272,T271,T270,T269,T268,T267,T266,T265,T264,T263,T262,T261;
  P T260,T259,T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245;
  P T244,T243,T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229;
  P T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213;
  P T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197;
  P T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181;
  P T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165;
  P T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149;
  P T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133;
  P T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117;
  P T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101;
  P T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85;
  P T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69;
  P T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53;
  P T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37;
  P T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
loop:
  lit_262 = YPPsym((P)"environment-next");
  T0 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_next_211 = YPmet(FUNCODEREF(fun_environment_next_211),LITREF(lit_262),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(Yx8rSastYenvironment_next);
  if (T3 != YPfalse) {
    T2 = VARREF(Yx8rSastYenvironment_next);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_environment_next_211;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(Yx8rSastYenvironment_next,T1);
  lit_263 = YPPsym((P)"environment-next-setter");
  T5 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_next_setter_212 = YPmet(FUNCODEREF(fun_environment_next_setter_212),LITREF(lit_263),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(Yx8rSastYenvironment_next_setter);
  if (T8 != YPfalse) {
    T7 = VARREF(Yx8rSastYenvironment_next_setter);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_environment_next_setter_212;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(Yx8rSastYenvironment_next_setter,T6);
  T10 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_213 = YPmet(FUNCODEREF(fun_213),YPfalse,T10,ENVNUL,PNUL,YPfalse);
  T11 = fun_213;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLstatic_environmentG),VARREF(Yx8rSastYenvironment_next),VARREF(Yx8rSastYenvironment_next_setter),VARREF(YLanyG),T11);
  lit_264 = YPPsym((P)"environment-bindings");
  T12 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_bindings_214 = YPmet(FUNCODEREF(fun_environment_bindings_214),LITREF(lit_264),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(Yx8rSastYenvironment_bindings);
  if (T15 != YPfalse) {
    T14 = VARREF(Yx8rSastYenvironment_bindings);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_environment_bindings_214;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(Yx8rSastYenvironment_bindings,T13);
  lit_265 = YPPsym((P)"environment-bindings-setter");
  T17 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLcolG),VARREF(Yx8rSastYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_bindings_setter_215 = YPmet(FUNCODEREF(fun_environment_bindings_setter_215),LITREF(lit_265),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(Yx8rSastYenvironment_bindings_setter);
  if (T20 != YPfalse) {
    T19 = VARREF(Yx8rSastYenvironment_bindings_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_environment_bindings_setter_215;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(Yx8rSastYenvironment_bindings_setter,T18);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLstatic_environmentG),VARREF(Yx8rSastYenvironment_bindings),VARREF(Yx8rSastYenvironment_bindings_setter),VARREF(YLcolG),VARREF(YPprop_unbound_error));
  lit_266 = YPPsym((P)"<static-global-environment>");
  T23 = (P)YPpair(VARREF(Yx8rSastYLstatic_environmentG),Ynil);
  T22 = CALL2(1,VARREF(Yfab_class),LITREF(lit_266),T23);
  VARSET(Yx8rSastYLstatic_global_environmentG,T22);
  lit_267 = YPPsym((P)"environment-module");
  T24 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_module_216 = YPmet(FUNCODEREF(fun_environment_module_216),LITREF(lit_267),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(Yx8rSastYenvironment_module);
  if (T27 != YPfalse) {
    T26 = VARREF(Yx8rSastYenvironment_module);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_environment_module_216;
  T25 = CALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(Yx8rSastYenvironment_module,T25);
  lit_268 = YPPsym((P)"environment-module-setter");
  T29 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_setter_217 = YPmet(FUNCODEREF(fun_environment_module_setter_217),LITREF(lit_268),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(Yx8rSastYenvironment_module_setter);
  if (T32 != YPfalse) {
    T31 = VARREF(Yx8rSastYenvironment_module_setter);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_environment_module_setter_217;
  T30 = CALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(Yx8rSastYenvironment_module_setter,T30);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLstatic_global_environmentG),VARREF(Yx8rSastYenvironment_module),VARREF(Yx8rSastYenvironment_module_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_269 = YPPsym((P)"environment-module-loader");
  T34 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_218 = YPmet(FUNCODEREF(fun_environment_module_loader_218),LITREF(lit_269),T34,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(Yx8rSastYenvironment_module_loader);
  if (T37 != YPfalse) {
    T36 = VARREF(Yx8rSastYenvironment_module_loader);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_environment_module_loader_218;
  T35 = CALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(Yx8rSastYenvironment_module_loader,T35);
  lit_270 = YPPsym((P)"environment-module-loader-setter");
  T39 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_setter_219 = YPmet(FUNCODEREF(fun_environment_module_loader_setter_219),LITREF(lit_270),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(Yx8rSastYenvironment_module_loader_setter);
  if (T42 != YPfalse) {
    T41 = VARREF(Yx8rSastYenvironment_module_loader_setter);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_environment_module_loader_setter_219;
  T40 = CALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(Yx8rSastYenvironment_module_loader_setter,T40);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLstatic_global_environmentG),VARREF(Yx8rSastYenvironment_module_loader),VARREF(Yx8rSastYenvironment_module_loader_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_271 = YPPsym((P)"environment-uses-modules");
  T44 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_220 = YPmet(FUNCODEREF(fun_environment_uses_modules_220),LITREF(lit_271),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(Yx8rSastYenvironment_uses_modules);
  if (T47 != YPfalse) {
    T46 = VARREF(Yx8rSastYenvironment_uses_modules);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_environment_uses_modules_220;
  T45 = CALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(Yx8rSastYenvironment_uses_modules,T45);
  lit_272 = YPPsym((P)"environment-uses-modules-setter");
  T49 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(Yx8rSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_setter_221 = YPmet(FUNCODEREF(fun_environment_uses_modules_setter_221),LITREF(lit_272),T49,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(Yx8rSastYenvironment_uses_modules_setter);
  if (T52 != YPfalse) {
    T51 = VARREF(Yx8rSastYenvironment_uses_modules_setter);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_environment_uses_modules_setter_221;
  T50 = CALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(Yx8rSastYenvironment_uses_modules_setter,T50);
  T54 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_222 = YPmet(FUNCODEREF(fun_222),YPfalse,T54,ENVNUL,PNUL,YPfalse);
  T55 = fun_222;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLstatic_global_environmentG),VARREF(Yx8rSastYenvironment_uses_modules),VARREF(Yx8rSastYenvironment_uses_modules_setter),VARREF(YgooScolsSvecYLvecG),T55);
  lit_273 = YPPsym((P)"environment-allows-foreign-names?");
  T56 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_223 = YPmet(FUNCODEREF(fun_environment_allows_foreign_namesQ_223),LITREF(lit_273),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(Yx8rSastYenvironment_allows_foreign_namesQ);
  if (T59 != YPfalse) {
    T58 = VARREF(Yx8rSastYenvironment_allows_foreign_namesQ);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_environment_allows_foreign_namesQ_223;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(Yx8rSastYenvironment_allows_foreign_namesQ,T57);
  lit_274 = YPPsym((P)"environment-allows-foreign-names?-setter");
  T61 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLlogG),VARREF(Yx8rSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_setter_224 = YPmet(FUNCODEREF(fun_environment_allows_foreign_namesQ_setter_224),LITREF(lit_274),T61,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(Yx8rSastYenvironment_allows_foreign_namesQ_setter);
  if (T64 != YPfalse) {
    T63 = VARREF(Yx8rSastYenvironment_allows_foreign_namesQ_setter);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_environment_allows_foreign_namesQ_setter_224;
  T62 = CALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(Yx8rSastYenvironment_allows_foreign_namesQ_setter,T62);
  T66 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_225 = YPmet(FUNCODEREF(fun_225),YPfalse,T66,ENVNUL,PNUL,YPfalse);
  T67 = fun_225;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLstatic_global_environmentG),VARREF(Yx8rSastYenvironment_allows_foreign_namesQ),VARREF(Yx8rSastYenvironment_allows_foreign_namesQ_setter),VARREF(YLlogG),T67);
  lit_275 = YPPsym((P)"<static-empty-environment>");
  T69 = (P)YPpair(VARREF(Yx8rSastYLstatic_environmentG),Ynil);
  T68 = CALL2(1,VARREF(Yfab_class),LITREF(lit_275),T69);
  VARSET(Yx8rSastYLstatic_empty_environmentG,T68);
  T70 = CALL1(1,VARREF(Ynew),VARREF(Yx8rSastYLstatic_empty_environmentG));
  VARSET(Yx8rSastYDempty_static_environment,T70);
  lit_276 = YPPsym((P)"<static-local-environment>");
  T72 = (P)YPpair(VARREF(Yx8rSastYLstatic_environmentG),Ynil);
  T71 = CALL2(1,VARREF(Yfab_class),LITREF(lit_276),T72);
  VARSET(Yx8rSastYLstatic_local_environmentG,T71);
  lit_277 = YPPsym((P)"env-object-name");
  lit_278 = YPPsym((P)"binding");
  T75 = YPsig(YPPlist(1,LITREF(lit_278)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_226 = YPmet(FUNCODEREF(fun_226),YPfalse,T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_227 = YPmet(FUNCODEREF(fun_227),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_object_name_228 = YPmet(FUNCODEREF(fun_env_object_name_228),LITREF(lit_277),T73,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(Yx8rSastYenv_object_name);
  if (T78 != YPfalse) {
    T77 = VARREF(Yx8rSastYenv_object_name);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_env_object_name_228;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(Yx8rSastYenv_object_name,T76);
  lit_279 = YPPsym((P)"objectify");
  lit_280 = YPPsym((P)"r");
  lit_281 = YPPsym((P)"tail?");
  T80 = YPsig(YPPlist(3,LITREF(lit_138),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLlstG),VARREF(Yx8rSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_229 = YPmet(FUNCODEREF(fun_objectify_229),LITREF(lit_279),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(Yx8rSastYobjectify);
  if (T83 != YPfalse) {
    T82 = VARREF(Yx8rSastYobjectify);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_objectify_229;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(Yx8rSastYobjectify,T81);
  lit_282 = YPPsym((P)"objectify-list");
  T85 = YPsig(YPPlist(4,LITREF(lit_128),LITREF(lit_138),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(YLanyG),VARREF(YLlstG),VARREF(Yx8rSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_230 = YPmet(FUNCODEREF(fun_objectify_list_230),LITREF(lit_282),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(Yx8rSastYobjectify_list);
  if (T88 != YPfalse) {
    T87 = VARREF(Yx8rSastYobjectify_list);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_objectify_list_230;
  T86 = CALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(Yx8rSastYobjectify_list,T86);
  lit_283 = YPPsym((P)"magic");
  lit_284 = YPPsym((P)"macro");
  lit_285 = YPsb((P)"Magic or Macro binding expected %=");
  T90 = YPsig(YPPlist(4,LITREF(lit_128),LITREF(lit_138),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(Yx8rSastYLmodule_bindingG),VARREF(YLlstG),VARREF(Yx8rSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_231 = YPmet(FUNCODEREF(fun_objectify_list_231),LITREF(lit_282),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(Yx8rSastYobjectify_list);
  if (T93 != YPfalse) {
    T92 = VARREF(Yx8rSastYobjectify_list);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_objectify_list_231;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(Yx8rSastYobjectify_list,T91);
  T95 = YPsig(YPPlist(3,LITREF(lit_138),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLsymG),VARREF(Yx8rSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_232 = YPmet(FUNCODEREF(fun_objectify_232),LITREF(lit_279),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(Yx8rSastYobjectify);
  if (T98 != YPfalse) {
    T97 = VARREF(Yx8rSastYobjectify);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_objectify_232;
  T96 = CALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(Yx8rSastYobjectify,T96);
  T100 = YPsig(YPPlist(3,LITREF(lit_138),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_233 = YPmet(FUNCODEREF(fun_objectify_233),LITREF(lit_279),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(Yx8rSastYobjectify);
  if (T103 != YPfalse) {
    T102 = VARREF(Yx8rSastYobjectify);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_objectify_233;
  T101 = CALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(Yx8rSastYobjectify,T101);
  T105 = YPsig(YPPlist(3,LITREF(lit_138),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(Yx8rSastYLprogramG),VARREF(Yx8rSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_234 = YPmet(FUNCODEREF(fun_objectify_234),LITREF(lit_279),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(Yx8rSastYobjectify);
  if (T108 != YPfalse) {
    T107 = VARREF(Yx8rSastYobjectify);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_objectify_234;
  T106 = CALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(Yx8rSastYobjectify,T106);
  T111 = CALL1(1,VARREF(YgooStypesYtE),Ynil);
  T110 = YPsig(YPPlist(3,LITREF(lit_138),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,T111,VARREF(Yx8rSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_235 = YPmet(FUNCODEREF(fun_objectify_235),LITREF(lit_279),T110,ENVNUL,PNUL,YPfalse);
  T114 = BOUNDP(Yx8rSastYobjectify);
  if (T114 != YPfalse) {
    T113 = VARREF(Yx8rSastYobjectify);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_objectify_235;
  T112 = CALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(Yx8rSastYobjectify,T112);
  T116 = YPsig(YPPlist(3,LITREF(lit_138),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(Yx8rSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_236 = YPmet(FUNCODEREF(fun_objectify_236),LITREF(lit_279),T116,ENVNUL,PNUL,YPfalse);
  T119 = BOUNDP(Yx8rSastYobjectify);
  if (T119 != YPfalse) {
    T118 = VARREF(Yx8rSastYobjectify);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_objectify_236;
  T117 = CALL2(1,VARREF(YPdefine_method),T118,T120);
  VARSET(Yx8rSastYobjectify,T117);
  lit_286 = YPPsym((P)"objectify-quotation");
  lit_287 = YPPsym((P)"value");
  T121 = YPsig(YPPlist(2,LITREF(lit_287),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(Yx8rSastYLconstantG),Ynil);
  fun_objectify_quotation_237 = YPmet(FUNCODEREF(fun_objectify_quotation_237),LITREF(lit_286),T121,ENVNUL,PNUL,YPfalse);
  T124 = BOUNDP(Yx8rSastYobjectify_quotation);
  if (T124 != YPfalse) {
    T123 = VARREF(Yx8rSastYobjectify_quotation);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_objectify_quotation_237;
  T122 = CALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(Yx8rSastYobjectify_quotation,T122);
  T126 = YPsig(YPPlist(2,LITREF(lit_287),LITREF(lit_280)),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(Yx8rSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_238 = YPmet(FUNCODEREF(fun_objectify_quotation_238),LITREF(lit_286),T126,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(Yx8rSastYobjectify_quotation);
  if (T129 != YPfalse) {
    T128 = VARREF(Yx8rSastYobjectify_quotation);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_objectify_quotation_238;
  T127 = CALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(Yx8rSastYobjectify_quotation,T127);
  T131 = YPsig(YPPlist(2,LITREF(lit_287),LITREF(lit_280)),YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(Yx8rSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_239 = YPmet(FUNCODEREF(fun_objectify_quotation_239),LITREF(lit_286),T131,ENVNUL,PNUL,YPfalse);
  T134 = BOUNDP(Yx8rSastYobjectify_quotation);
  if (T134 != YPfalse) {
    T133 = VARREF(Yx8rSastYobjectify_quotation);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_objectify_quotation_239;
  T132 = CALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(Yx8rSastYobjectify_quotation,T132);
  lit_288 = YPPsym((P)"objectify-raw");
  T136 = YPsig(YPPlist(2,LITREF(lit_287),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(Yx8rSastYLraw_constantG),Ynil);
  fun_objectify_raw_240 = YPmet(FUNCODEREF(fun_objectify_raw_240),LITREF(lit_288),T136,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(Yx8rSastYobjectify_raw);
  if (T139 != YPfalse) {
    T138 = VARREF(Yx8rSastYobjectify_raw);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_objectify_raw_240;
  T137 = CALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(Yx8rSastYobjectify_raw,T137);
  lit_289 = YPPsym((P)"objectify-bound?");
  T141 = YPsig(YPPlist(3,LITREF(lit_138),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLsymG),VARREF(Yx8rSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_boundQ_241 = YPmet(FUNCODEREF(fun_objectify_boundQ_241),LITREF(lit_289),T141,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(Yx8rSastYobjectify_boundQ);
  if (T144 != YPfalse) {
    T143 = VARREF(Yx8rSastYobjectify_boundQ);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_objectify_boundQ_241;
  T142 = CALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(Yx8rSastYobjectify_boundQ,T142);
  lit_290 = YPPsym((P)"objectify-compile-time");
  lit_291 = YPPsym((P)"program");
  lit_292 = YPPsym((P)"rt?");
  T146 = YPsig(YPPlist(4,LITREF(lit_291),LITREF(lit_280),LITREF(lit_281),LITREF(lit_292)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(Yx8rSastYLprogramG),Ynil);
  fun_objectify_compile_time_242 = YPmet(FUNCODEREF(fun_objectify_compile_time_242),LITREF(lit_290),T146,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(Yx8rSastYobjectify_compile_time);
  if (T149 != YPfalse) {
    T148 = VARREF(Yx8rSastYobjectify_compile_time);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_objectify_compile_time_242;
  T147 = CALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(Yx8rSastYobjectify_compile_time,T147);
  lit_293 = YPPsym((P)"objectify-alternative");
  lit_294 = YPPsym((P)"c");
  lit_295 = YPPsym((P)"a");
  T151 = YPsig(YPPlist(5,LITREF(lit_160),LITREF(lit_294),LITREF(lit_295),LITREF(lit_280),LITREF(lit_281)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(Yx8rSastYLalternativeG),Ynil);
  fun_objectify_alternative_243 = YPmet(FUNCODEREF(fun_objectify_alternative_243),LITREF(lit_293),T151,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(Yx8rSastYobjectify_alternative);
  if (T154 != YPfalse) {
    T153 = VARREF(Yx8rSastYobjectify_alternative);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_objectify_alternative_243;
  T152 = CALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(Yx8rSastYobjectify_alternative,T152);
  lit_296 = YPPsym((P)"sequentialize");
  lit_297 = YPPsym((P)"e*");
  T157 = YPsig(YPPlist(1,LITREF(lit_297)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_244 = YPmet(FUNCODEREF(fun_loop_244),LITREF(lit_139),T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(1,LITREF(lit_297)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(Yx8rSastYLprogramG),Ynil);
  fun_sequentialize_245 = YPmet(FUNCODEREF(fun_sequentialize_245),LITREF(lit_296),T156,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(Yx8rSastYsequentialize);
  if (T160 != YPfalse) {
    T159 = VARREF(Yx8rSastYsequentialize);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_sequentialize_245;
  T158 = CALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(Yx8rSastYsequentialize,T158);
  lit_298 = YPPsym((P)"transform-defs");
  T162 = YPsig(YPPlist(1,LITREF(lit_297)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_transform_defs_246 = YPmet(FUNCODEREF(fun_transform_defs_246),LITREF(lit_298),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(Yx8rSastYtransform_defs);
  if (T165 != YPfalse) {
    T164 = VARREF(Yx8rSastYtransform_defs);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_transform_defs_246;
  T163 = CALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(Yx8rSastYtransform_defs,T163);
  lit_299 = YPPsym((P)"objectify-sequential");
  T168 = YPsig(YPPlist(2,LITREF(lit_140),LITREF(lit_297)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_247 = YPmet(FUNCODEREF(fun_loop_247),LITREF(lit_139),T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(YPPlist(3,LITREF(lit_297),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(Yx8rSastYLprogramG),Ynil);
  fun_objectify_sequential_248 = YPmet(FUNCODEREF(fun_objectify_sequential_248),LITREF(lit_299),T167,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(Yx8rSastYobjectify_sequential);
  if (T171 != YPfalse) {
    T170 = VARREF(Yx8rSastYobjectify_sequential);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_objectify_sequential_248;
  T169 = CALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(Yx8rSastYobjectify_sequential,T169);
  lit_300 = YPPsym((P)"objectify-application");
  lit_301 = YPPsym((P)"ff");
  T174 = YPsig(YPPlist(1,LITREF(lit_138)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_249 = YPmet(FUNCODEREF(fun_249),YPfalse,T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(YPPlist(4,LITREF(lit_301),LITREF(lit_297),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(Yx8rSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(Yx8rSastYLprogramG),Ynil);
  fun_objectify_application_250 = YPmet(FUNCODEREF(fun_objectify_application_250),LITREF(lit_300),T173,ENVNUL,PNUL,YPfalse);
  T177 = BOUNDP(Yx8rSastYobjectify_application);
  if (T177 != YPfalse) {
    T176 = VARREF(Yx8rSastYobjectify_application);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_objectify_application_250;
  T175 = CALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(Yx8rSastYobjectify_application,T175);
  T180 = YPsig(YPPlist(1,LITREF(lit_138)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_251 = YPmet(FUNCODEREF(fun_251),YPfalse,T180,ENVNUL,PNUL,YPfalse);
  T179 = YPsig(YPPlist(4,LITREF(lit_301),LITREF(lit_297),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(Yx8rSastYLpredefined_referenceG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(Yx8rSastYLprogramG),Ynil);
  fun_objectify_application_252 = YPmet(FUNCODEREF(fun_objectify_application_252),LITREF(lit_300),T179,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(Yx8rSastYobjectify_application);
  if (T183 != YPfalse) {
    T182 = VARREF(Yx8rSastYobjectify_application);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_objectify_application_252;
  T181 = CALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(Yx8rSastYobjectify_application,T181);
  T186 = YPsig(YPPlist(1,LITREF(lit_138)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_253 = YPmet(FUNCODEREF(fun_253),YPfalse,T186,ENVNUL,PNUL,YPfalse);
  T185 = YPsig(YPPlist(4,LITREF(lit_301),LITREF(lit_297),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(Yx8rSastYLprogramG),Ynil);
  fun_objectify_application_254 = YPmet(FUNCODEREF(fun_objectify_application_254),LITREF(lit_300),T185,ENVNUL,PNUL,YPfalse);
  T189 = BOUNDP(Yx8rSastYobjectify_application);
  if (T189 != YPfalse) {
    T188 = VARREF(Yx8rSastYobjectify_application);
  } else {
    T188 = YPfalse;
  }
  T190 = fun_objectify_application_254;
  T187 = CALL2(1,VARREF(YPdefine_method),T188,T190);
  VARSET(Yx8rSastYobjectify_application,T187);
  lit_302 = YPPsym((P)"process-closed-application");
  lit_303 = YPsb((P)"incorrect regular arity");
  T191 = YPsig(YPPlist(4,LITREF(lit_128),LITREF(lit_297),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(Yx8rSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(Yx8rSastYLfix_letG),Ynil);
  fun_process_closed_application_255 = YPmet(FUNCODEREF(fun_process_closed_application_255),LITREF(lit_302),T191,ENVNUL,PNUL,YPfalse);
  T194 = BOUNDP(Yx8rSastYprocess_closed_application);
  if (T194 != YPfalse) {
    T193 = VARREF(Yx8rSastYprocess_closed_application);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_process_closed_application_255;
  T192 = CALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(Yx8rSastYprocess_closed_application,T192);
  lit_304 = YPPsym((P)"process-nary-closed-application");
  lit_305 = YPPsym((P)"pack-nary-args");
  lit_306 = YPPsym((P)"quote");
  lit_307 = YPPsym((P)"%pair");
  lit_308 = YPPsym((P)"gather-arguments");
  lit_309 = YPPsym((P)"v*");
  lit_310 = YPsb((P)"incorrect dotted arity");
  T198 = YPsig(YPPlist(1,LITREF(lit_297)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pack_nary_args_256 = YPmet(FUNCODEREF(fun_pack_nary_args_256),LITREF(lit_305),T198,ENVNUL,PNUL,YPfalse);
  T197 = YPsig(YPPlist(2,LITREF(lit_297),LITREF(lit_309)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gather_arguments_257 = YPmet(FUNCODEREF(fun_gather_arguments_257),LITREF(lit_308),T197,ENVNUL,PNUL,YPfalse);
  T196 = YPsig(YPPlist(4,LITREF(lit_128),LITREF(lit_297),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(Yx8rSastYLfix_letG),Ynil);
  fun_process_nary_closed_application_258 = YPmet(FUNCODEREF(fun_process_nary_closed_application_258),LITREF(lit_304),T196,ENVNUL,PNUL,YPfalse);
  T201 = BOUNDP(Yx8rSastYprocess_nary_closed_application);
  if (T201 != YPfalse) {
    T200 = VARREF(Yx8rSastYprocess_nary_closed_application);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_process_nary_closed_application_258;
  T199 = CALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(Yx8rSastYprocess_nary_closed_application,T199);
  lit_311 = YPPsym((P)"convert2arguments");
  T203 = YPsig(YPPlist(1,LITREF(lit_297)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_convert2arguments_259 = YPmet(FUNCODEREF(fun_convert2arguments_259),LITREF(lit_311),T203,ENVNUL,PNUL,YPfalse);
  T206 = BOUNDP(Yx8rSastYconvert2arguments);
  if (T206 != YPfalse) {
    T205 = VARREF(Yx8rSastYconvert2arguments);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_convert2arguments_259;
  T204 = CALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(Yx8rSastYconvert2arguments,T204);
  lit_312 = YPPsym((P)"objectify-assignment");
  lit_313 = YPsb((P)"Unsupported Set!: %=");
  T208 = YPsig(YPPlist(4,LITREF(lit_278),LITREF(lit_138),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(Yx8rSastYLprogramG),Ynil);
  fun_objectify_assignment_260 = YPmet(FUNCODEREF(fun_objectify_assignment_260),LITREF(lit_312),T208,ENVNUL,PNUL,YPfalse);
  T211 = BOUNDP(Yx8rSastYobjectify_assignment);
  if (T211 != YPfalse) {
    T210 = VARREF(Yx8rSastYobjectify_assignment);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_objectify_assignment_260;
  T209 = CALL2(1,VARREF(YPdefine_method),T210,T212);
  VARSET(Yx8rSastYobjectify_assignment,T209);
  T213 = YPsig(YPPlist(4,LITREF(lit_278),LITREF(lit_138),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(YLsymG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(Yx8rSastYLassignmentG),Ynil);
  fun_objectify_assignment_261 = YPmet(FUNCODEREF(fun_objectify_assignment_261),LITREF(lit_312),T213,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(Yx8rSastYobjectify_assignment);
  if (T216 != YPfalse) {
    T215 = VARREF(Yx8rSastYobjectify_assignment);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_objectify_assignment_261;
  T214 = CALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(Yx8rSastYobjectify_assignment,T214);
  lit_314 = YPPsym((P)"objectify-assignment-using");
  lit_315 = YPPsym((P)"ref");
  lit_316 = YPPsym((P)"val");
  T218 = YPsig(YPPlist(2,LITREF(lit_315),LITREF(lit_316)),YPPlist(2,VARREF(Yx8rSastYLlocal_referenceG),VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)2),VARREF(Yx8rSastYLlocal_assignmentG),Ynil);
  fun_objectify_assignment_using_262 = YPmet(FUNCODEREF(fun_objectify_assignment_using_262),LITREF(lit_314),T218,ENVNUL,PNUL,YPfalse);
  T221 = BOUNDP(Yx8rSastYobjectify_assignment_using);
  if (T221 != YPfalse) {
    T220 = VARREF(Yx8rSastYobjectify_assignment_using);
  } else {
    T220 = YPfalse;
  }
  T222 = fun_objectify_assignment_using_262;
  T219 = CALL2(1,VARREF(YPdefine_method),T220,T222);
  VARSET(Yx8rSastYobjectify_assignment_using,T219);
  T223 = YPsig(YPPlist(2,LITREF(lit_315),LITREF(lit_316)),YPPlist(2,VARREF(Yx8rSastYLglobal_referenceG),VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)2),VARREF(Yx8rSastYLglobal_assignmentG),Ynil);
  fun_objectify_assignment_using_263 = YPmet(FUNCODEREF(fun_objectify_assignment_using_263),LITREF(lit_314),T223,ENVNUL,PNUL,YPfalse);
  T226 = BOUNDP(Yx8rSastYobjectify_assignment_using);
  if (T226 != YPfalse) {
    T225 = VARREF(Yx8rSastYobjectify_assignment_using);
  } else {
    T225 = YPfalse;
  }
  T227 = fun_objectify_assignment_using_263;
  T224 = CALL2(1,VARREF(YPdefine_method),T225,T227);
  VARSET(Yx8rSastYobjectify_assignment_using,T224);
  T228 = YPsig(YPPlist(2,LITREF(lit_315),LITREF(lit_316)),YPPlist(2,VARREF(Yx8rSastYLruntime_referenceG),VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)2),VARREF(Yx8rSastYLruntime_assignmentG),Ynil);
  fun_objectify_assignment_using_264 = YPmet(FUNCODEREF(fun_objectify_assignment_using_264),LITREF(lit_314),T228,ENVNUL,PNUL,YPfalse);
  T231 = BOUNDP(Yx8rSastYobjectify_assignment_using);
  if (T231 != YPfalse) {
    T230 = VARREF(Yx8rSastYobjectify_assignment_using);
  } else {
    T230 = YPfalse;
  }
  T232 = fun_objectify_assignment_using_264;
  T229 = CALL2(1,VARREF(YPdefine_method),T230,T232);
  VARSET(Yx8rSastYobjectify_assignment_using,T229);
  lit_317 = YPPsym((P)"update-binding-kind");
  lit_318 = YPPsym((P)"new-kind");
  lit_319 = YPPsym((P)"runtime");
  lit_320 = YPsb((P)"Cannot set type of runtime binding %s to %s.\n");
  T233 = YPsig(YPPlist(2,LITREF(lit_278),LITREF(lit_318)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rSastYupdate_binding_kind = YPmet(FUNCODEREF(Yx8rSastYupdate_binding_kind),LITREF(lit_317),T233,ENVNUL,PNUL,YPfalse);
  T234 = Yx8rSastYupdate_binding_kind;
  VARSET(Yx8rSastYupdate_binding_kind,T234);
  lit_321 = YPPsym((P)"ast-define-binding");
  lit_322 = YPPsym((P)"name");
  lit_323 = YPPsym((P)"defining-method?");
  lit_324 = YPPsym((P)"kind");
  lit_325 = YPsb((P)"%s: warning: '%s' clobbers binding from %s.\n");
  T235 = YPsig(YPPlist(4,LITREF(lit_280),LITREF(lit_322),LITREF(lit_323),LITREF(lit_324)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_ast_define_binding_266 = YPmet(FUNCODEREF(fun_ast_define_binding_266),LITREF(lit_321),T235,ENVNUL,PNUL,YPfalse);
  T238 = BOUNDP(Yx8rSastYast_define_binding);
  if (T238 != YPfalse) {
    T237 = VARREF(Yx8rSastYast_define_binding);
  } else {
    T237 = YPfalse;
  }
  T239 = fun_ast_define_binding_266;
  T236 = CALL2(1,VARREF(YPdefine_method),T237,T239);
  VARSET(Yx8rSastYast_define_binding,T236);
  VARSET(Yx8rSastYTmacro_tracingQT,YPfalse);
  lit_326 = YPPsym((P)"objectify-definition");
  lit_327 = YPPsym((P)"var");
  T240 = YPsig(YPPlist(3,LITREF(lit_327),LITREF(lit_138),LITREF(lit_280)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_definition_267 = YPmet(FUNCODEREF(fun_objectify_definition_267),LITREF(lit_326),T240,ENVNUL,PNUL,YPfalse);
  T243 = BOUNDP(Yx8rSastYobjectify_definition);
  if (T243 != YPfalse) {
    T242 = VARREF(Yx8rSastYobjectify_definition);
  } else {
    T242 = YPfalse;
  }
  T244 = fun_objectify_definition_267;
  T241 = CALL2(1,VARREF(YPdefine_method),T242,T244);
  VARSET(Yx8rSastYobjectify_definition,T241);
  lit_328 = YPPsym((P)"%%macro");
  lit_329 = YPPsym((P)"modname");
  lit_330 = YPPsym((P)"expander");
  lit_331 = YPPsym((P)"env-or-false");
  lit_332 = YPPsym((P)"expand");
  lit_333 = YPsb((P)"MACRO ");
  lit_334 = YPsb((P)"\n");
  lit_335 = YPsb((P)"  => ");
  lit_336 = YPsb((P)"\n");
  T246 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_268 = YPmet(FUNCODEREF(fun_expand_268),LITREF(lit_332),T246,ENVNUL,PNUL,YPfalse);
  T245 = YPsig(YPPlist(4,LITREF(lit_329),LITREF(lit_322),LITREF(lit_330),LITREF(lit_331)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(Yx8rSastYLmodule_bindingG),Ynil);
  YPPmacro = YPmet(FUNCODEREF(YPPmacro),LITREF(lit_328),T245,ENVNUL,PNUL,YPfalse);
  T247 = YPPmacro;
  VARSET(YPPmacro,T247);
  lit_337 = YPPsym((P)"objectify-syntax-definition");
  T248 = YPsig(YPPlist(4,LITREF(lit_322),LITREF(lit_138),LITREF(lit_280),LITREF(lit_292)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_syntax_definition_270 = YPmet(FUNCODEREF(fun_objectify_syntax_definition_270),LITREF(lit_337),T248,ENVNUL,PNUL,YPfalse);
  T251 = BOUNDP(Yx8rSastYobjectify_syntax_definition);
  if (T251 != YPfalse) {
    T250 = VARREF(Yx8rSastYobjectify_syntax_definition);
  } else {
    T250 = YPfalse;
  }
  T252 = fun_objectify_syntax_definition_270;
  T249 = CALL2(1,VARREF(YPdefine_method),T250,T252);
  VARSET(Yx8rSastYobjectify_syntax_definition,T249);
  lit_338 = YPPsym((P)"objectify-function-definition");
  T253 = YPsig(YPPlist(3,LITREF(lit_322),LITREF(lit_138),LITREF(lit_280)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(Yx8rSastYLast_function_definitionG),Ynil);
  fun_objectify_function_definition_271 = YPmet(FUNCODEREF(fun_objectify_function_definition_271),LITREF(lit_338),T253,ENVNUL,PNUL,YPfalse);
  T256 = BOUNDP(Yx8rSastYobjectify_function_definition);
  if (T256 != YPfalse) {
    T255 = VARREF(Yx8rSastYobjectify_function_definition);
  } else {
    T255 = YPfalse;
  }
  T257 = fun_objectify_function_definition_271;
  T254 = CALL2(1,VARREF(YPdefine_method),T255,T257);
  VARSET(Yx8rSastYobjectify_function_definition,T254);
  lit_339 = YPPsym((P)"module-binding");
  T258 = YPsig(YPPlist(1,LITREF(lit_324)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(Yx8rSastYLmodule_bindingG),Ynil);
  Yx8rSastYmodule_binding = YPmet(FUNCODEREF(Yx8rSastYmodule_binding),LITREF(lit_339),T258,ENVNUL,PNUL,YPfalse);
  T259 = Yx8rSastYmodule_binding;
  VARSET(Yx8rSastYmodule_binding,T259);
  lit_340 = YPPsym((P)"objectify-primitive-definition");
  lit_341 = YPPsym((P)"sig");
  lit_342 = YPPsym((P)"body");
  lit_343 = YPPsym((P)"predefined");
  T260 = YPsig(YPPlist(4,LITREF(lit_322),LITREF(lit_341),LITREF(lit_342),LITREF(lit_280)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(Yx8rSastYLast_primitive_definitionG),Ynil);
  fun_objectify_primitive_definition_273 = YPmet(FUNCODEREF(fun_objectify_primitive_definition_273),LITREF(lit_340),T260,ENVNUL,PNUL,YPfalse);
  T263 = BOUNDP(Yx8rSastYobjectify_primitive_definition);
  if (T263 != YPfalse) {
    T262 = VARREF(Yx8rSastYobjectify_primitive_definition);
  } else {
    T262 = YPfalse;
  }
  T264 = fun_objectify_primitive_definition_273;
  T261 = CALL2(1,VARREF(YPdefine_method),T262,T264);
  VARSET(Yx8rSastYobjectify_primitive_definition,T261);
  lit_344 = YPPsym((P)"objectify-generic-definition");
  T265 = YPsig(YPPlist(3,LITREF(lit_322),LITREF(lit_341),LITREF(lit_280)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(Yx8rSastYLast_generic_definitionG),Ynil);
  fun_objectify_generic_definition_274 = YPmet(FUNCODEREF(fun_objectify_generic_definition_274),LITREF(lit_344),T265,ENVNUL,PNUL,YPfalse);
  T268 = BOUNDP(Yx8rSastYobjectify_generic_definition);
  if (T268 != YPfalse) {
    T267 = VARREF(Yx8rSastYobjectify_generic_definition);
  } else {
    T267 = YPfalse;
  }
  T269 = fun_objectify_generic_definition_274;
  T266 = CALL2(1,VARREF(YPdefine_method),T267,T269);
  VARSET(Yx8rSastYobjectify_generic_definition,T266);
  lit_345 = YPPsym((P)"objectify-method-definition");
  lit_346 = YPPsym((P)"if");
  lit_347 = YPPsym((P)"bound?");
  lit_348 = YPPsym((P)"%define-method");
  T270 = YPsig(YPPlist(3,LITREF(lit_322),LITREF(lit_138),LITREF(lit_280)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(Yx8rSastYLast_method_definitionG),Ynil);
  fun_objectify_method_definition_275 = YPmet(FUNCODEREF(fun_objectify_method_definition_275),LITREF(lit_345),T270,ENVNUL,PNUL,YPfalse);
  T273 = BOUNDP(Yx8rSastYobjectify_method_definition);
  if (T273 != YPfalse) {
    T272 = VARREF(Yx8rSastYobjectify_method_definition);
  } else {
    T272 = YPfalse;
  }
  T274 = fun_objectify_method_definition_275;
  T271 = CALL2(1,VARREF(YPdefine_method),T272,T274);
  VARSET(Yx8rSastYobjectify_method_definition,T271);
  T276 = VARSET(Yx8rSastYTrecord_sourceQT,YPfalse);
  T275 = T276;
  return T275;
}

P Yx8rSastY___main_6___() {
  P T284,T283,T282,T281,T280,T279,T278,T277,T276,T275,T274,T273,T272,T271,T270,T269;
  P T268,T267,T266,T265,T264,T263,T262,T261,T260,T259,T258,T257,T256,T255,T254,T253;
  P T252,T251,T250,T249,T248,T247,T246,T245,T244,T243,T242,T241,T240,T239,T238,T237;
  P T236,T235,T234,T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221;
  P T220,T219,T218,T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205;
  P T204,T203,T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189;
  P T188,T187,T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173;
  P T172,T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157;
  P T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141;
  P T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125;
  P T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109;
  P T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93;
  P T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77;
  P T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_349 = YPPsym((P)"objectify-function-source");
  lit_350 = YPsb((P)"(fun %s %s)");
  T4 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_276 = YPmet(FUNCODEREF(fun_276),YPfalse,T4,ENVNUL,PNUL,YPfalse);
  T3 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_277 = YPmet(FUNCODEREF(fun_277),YPfalse,T3,ENVNUL,PNUL,YPfalse);
  T2 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_278 = YPmet(FUNCODEREF(fun_278),YPfalse,T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_279 = YPmet(FUNCODEREF(fun_279),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(3,LITREF(lit_341),LITREF(lit_342),LITREF(lit_280)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(Yx8rSastYLconstantG),Ynil);
  fun_objectify_function_source_280 = YPmet(FUNCODEREF(fun_objectify_function_source_280),LITREF(lit_349),T0,ENVNUL,PNUL,YPfalse);
  T7 = BOUNDP(Yx8rSastYobjectify_function_source);
  if (T7 != YPfalse) {
    T6 = VARREF(Yx8rSastYobjectify_function_source);
  } else {
    T6 = YPfalse;
  }
  T8 = fun_objectify_function_source_280;
  T5 = CALL2(1,VARREF(YPdefine_method),T6,T8);
  VARSET(Yx8rSastYobjectify_function_source,T5);
  lit_351 = YPPsym((P)"objectify-function");
  T11 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_281 = YPmet(FUNCODEREF(fun_281),YPfalse,T11,ENVNUL,PNUL,YPfalse);
  T10 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_282 = YPmet(FUNCODEREF(fun_282),YPfalse,T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(YPPlist(4,LITREF(lit_341),LITREF(lit_342),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(Yx8rSastYLast_methodG),Ynil);
  fun_objectify_function_283 = YPmet(FUNCODEREF(fun_objectify_function_283),LITREF(lit_351),T9,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(Yx8rSastYobjectify_function);
  if (T14 != YPfalse) {
    T13 = VARREF(Yx8rSastYobjectify_function);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_objectify_function_283;
  T12 = CALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(Yx8rSastYobjectify_function,T12);
  lit_352 = YPPsym((P)"...");
  VARSET(Yx8rSastYDsexpr_optionals_tag,LITREF(lit_352));
  lit_353 = YPPsym((P)"<opts>");
  VARSET(Yx8rSastYDsexpr_optionals_type_name,LITREF(lit_353));
  lit_354 = YPPsym((P)"objectify-signature");
  lit_355 = YPPsym((P)"col");
  lit_356 = YPPsym((P)"params");
  lit_357 = YPPsym((P)"nary?");
  lit_358 = YPPsym((P)"bindings");
  lit_359 = YPPsym((P)"names");
  lit_360 = YPPsym((P)"types");
  T17 = YPsig(YPPlist(5,LITREF(lit_356),LITREF(lit_357),LITREF(lit_358),LITREF(lit_359),LITREF(lit_360)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_col_284 = YPmet(FUNCODEREF(fun_col_284),LITREF(lit_355),T17,ENVNUL,PNUL,YPfalse);
  T16 = YPsig(YPPlist(2,LITREF(lit_341),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(Yx8rSastYLast_signatureG),Ynil);
  fun_objectify_signature_285 = YPmet(FUNCODEREF(fun_objectify_signature_285),LITREF(lit_354),T16,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(Yx8rSastYobjectify_signature);
  if (T20 != YPfalse) {
    T19 = VARREF(Yx8rSastYobjectify_signature);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_objectify_signature_285;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(Yx8rSastYobjectify_signature,T18);
  lit_361 = YPPsym((P)"compute-local-reference-offsets");
  lit_362 = YPPsym((P)"i");
  lit_363 = YPPsym((P)"find");
  lit_364 = YPPsym((P)"j");
  lit_365 = YPsb((P)"DIDN'T FIND LOCAL BINDING %= IN %=");
  T24 = YPsig(YPPlist(2,LITREF(lit_364),LITREF(lit_358)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_286 = YPmet(FUNCODEREF(fun_find_286),LITREF(lit_363),T24,ENVNUL,PNUL,YPfalse);
  T23 = YPsig(YPPlist(2,LITREF(lit_362),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_287 = YPmet(FUNCODEREF(fun_loop_287),LITREF(lit_139),T23,ENVNUL,PNUL,YPfalse);
  T22 = YPsig(YPPlist(2,LITREF(lit_278),LITREF(lit_280)),YPPlist(2,VARREF(Yx8rSastYLlocal_bindingG),VARREF(Yx8rSastYLstatic_local_environmentG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_compute_local_reference_offsets_288 = YPmet(FUNCODEREF(fun_compute_local_reference_offsets_288),LITREF(lit_361),T22,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(Yx8rSastYcompute_local_reference_offsets);
  if (T27 != YPfalse) {
    T26 = VARREF(Yx8rSastYcompute_local_reference_offsets);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_compute_local_reference_offsets_288;
  T25 = CALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(Yx8rSastYcompute_local_reference_offsets,T25);
  lit_366 = YPPsym((P)"objectify-binding");
  lit_367 = YPPsym((P)"n");
  lit_368 = YPPsym((P)"b");
  T29 = YPsig(YPPlist(3,LITREF(lit_367),LITREF(lit_368),LITREF(lit_280)),YPPlist(3,VARREF(YLanyG),VARREF(Yx8rSastYLlocal_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(Yx8rSastYLlocal_referenceG),Ynil);
  fun_objectify_binding_289 = YPmet(FUNCODEREF(fun_objectify_binding_289),LITREF(lit_366),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(Yx8rSastYobjectify_binding);
  if (T32 != YPfalse) {
    T31 = VARREF(Yx8rSastYobjectify_binding);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_objectify_binding_289;
  T30 = CALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(Yx8rSastYobjectify_binding,T30);
  lit_369 = YPPsym((P)"binding-reference-class");
  lit_370 = YPsb((P)"Unknown binding-kind %=");
  T34 = YPsig(YPPlist(1,LITREF(lit_368)),YPPlist(1,VARREF(Yx8rSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_binding_reference_class_290 = YPmet(FUNCODEREF(fun_binding_reference_class_290),LITREF(lit_369),T34,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(Yx8rSastYbinding_reference_class);
  if (T37 != YPfalse) {
    T36 = VARREF(Yx8rSastYbinding_reference_class);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_binding_reference_class_290;
  T35 = CALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(Yx8rSastYbinding_reference_class,T35);
  T39 = YPsig(YPPlist(3,LITREF(lit_367),LITREF(lit_368),LITREF(lit_280)),YPPlist(3,VARREF(YLanyG),VARREF(Yx8rSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_binding_291 = YPmet(FUNCODEREF(fun_objectify_binding_291),LITREF(lit_366),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(Yx8rSastYobjectify_binding);
  if (T42 != YPfalse) {
    T41 = VARREF(Yx8rSastYobjectify_binding);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_objectify_binding_291;
  T40 = CALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(Yx8rSastYobjectify_binding,T40);
  T44 = YPsig(YPPlist(3,LITREF(lit_367),LITREF(lit_368),LITREF(lit_280)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(Yx8rSastYLreferenceG),Ynil);
  fun_objectify_binding_292 = YPmet(FUNCODEREF(fun_objectify_binding_292),LITREF(lit_366),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(Yx8rSastYobjectify_binding);
  if (T47 != YPfalse) {
    T46 = VARREF(Yx8rSastYobjectify_binding);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_objectify_binding_292;
  T45 = CALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(Yx8rSastYobjectify_binding,T45);
  lit_371 = YPPsym((P)"default-type");
  lit_372 = YPPsym((P)"<any>");
  T49 = YPsig(YPPlist(1,LITREF(lit_280)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_type_293 = YPmet(FUNCODEREF(fun_default_type_293),LITREF(lit_371),T49,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(Yx8rSastYdefault_type);
  if (T52 != YPfalse) {
    T51 = VARREF(Yx8rSastYdefault_type);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_default_type_293;
  T50 = CALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(Yx8rSastYdefault_type,T50);
  lit_373 = YPPsym((P)"objectify-free-global-reference");
  T54 = YPsig(YPPlist(2,LITREF(lit_322),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(Yx8rSastYLreferenceG),Ynil);
  fun_objectify_free_global_reference_294 = YPmet(FUNCODEREF(fun_objectify_free_global_reference_294),LITREF(lit_373),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(Yx8rSastYobjectify_free_global_reference);
  if (T57 != YPfalse) {
    T56 = VARREF(Yx8rSastYobjectify_free_global_reference);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_objectify_free_global_reference_294;
  T55 = CALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(Yx8rSastYobjectify_free_global_reference,T55);
  lit_374 = YPPsym((P)"foreign-name?");
  T59 = YPsig(YPPlist(1,LITREF(lit_322)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  Yx8rSastYforeign_nameQ = YPmet(FUNCODEREF(Yx8rSastYforeign_nameQ),LITREF(lit_374),T59,ENVNUL,PNUL,YPfalse);
  T60 = Yx8rSastYforeign_nameQ;
  VARSET(Yx8rSastYforeign_nameQ,T60);
  lit_375 = YPPsym((P)"objectify-foreign-reference");
  lit_376 = YPsb((P)"Malformed foreign name %s.\n");
  lit_377 = YPsb((P)"No binding %s in %s.\n");
  T61 = YPsig(YPPlist(2,LITREF(lit_322),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(Yx8rSastYLreferenceG),Ynil);
  fun_objectify_foreign_reference_296 = YPmet(FUNCODEREF(fun_objectify_foreign_reference_296),LITREF(lit_375),T61,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(Yx8rSastYobjectify_foreign_reference);
  if (T64 != YPfalse) {
    T63 = VARREF(Yx8rSastYobjectify_foreign_reference);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_objectify_foreign_reference_296;
  T62 = CALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(Yx8rSastYobjectify_foreign_reference,T62);
  lit_378 = YPPsym((P)"objectify-symbol");
  T66 = YPsig(YPPlist(2,LITREF(lit_322),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_objectify_symbol_297 = YPmet(FUNCODEREF(fun_objectify_symbol_297),LITREF(lit_378),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(Yx8rSastYobjectify_symbol);
  if (T69 != YPfalse) {
    T68 = VARREF(Yx8rSastYobjectify_symbol);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_objectify_symbol_297;
  T67 = CALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(Yx8rSastYobjectify_symbol,T67);
  lit_379 = YPPsym((P)"ftype");
  lit_380 = YPPsym((P)"<fun>");
  T71 = YPsig(YPPlist(1,LITREF(lit_280)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ftype_298 = YPmet(FUNCODEREF(fun_ftype_298),LITREF(lit_379),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(Yx8rSastYftype);
  if (T74 != YPfalse) {
    T73 = VARREF(Yx8rSastYftype);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_ftype_298;
  T72 = CALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(Yx8rSastYftype,T72);
  lit_381 = YPPsym((P)"<functions>");
  T78 = (P)YPpair(VARREF(Yx8rSastYLprogramsG),Ynil);
  T77 = (P)YPpair(VARREF(YLlstG),T78);
  T76 = CALL2(1,VARREF(Yfab_class),LITREF(lit_381),T77);
  VARSET(Yx8rSastYLfunctionsG,T76);
  T79 = CALL1(1,VARREF(Ynew),VARREF(Yx8rSastYLfunctionsG));
  VARSET(Yx8rSastYDfunctions_empty,T79);
  T81 = CALL1(1,VARREF(YgooStypesYtE),VARREF(Yx8rSastYLfunctionsG));
  T80 = YPsig(YPPlist(2,LITREF(lit_153),LITREF(lit_24)),YPPlist(2,T81,VARREF(Yx8rSastYLfunctionsG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_299 = YPmet(FUNCODEREF(fun_as_299),LITREF(lit_152),T80,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YgooStypesYas);
  if (T84 != YPfalse) {
    T83 = VARREF(YgooStypesYas);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_as_299;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YgooStypesYas,T82);
  T87 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLlstG));
  T86 = YPsig(YPPlist(2,LITREF(lit_153),LITREF(lit_24)),YPPlist(2,T87,VARREF(Yx8rSastYLfunctionsG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_300 = YPmet(FUNCODEREF(fun_as_300),LITREF(lit_152),T86,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YgooStypesYas);
  if (T90 != YPfalse) {
    T89 = VARREF(YgooStypesYas);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_as_300;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YgooStypesYas,T88);
  T93 = CALL1(1,VARREF(YgooStypesYtE),VARREF(Yx8rSastYLfunctionsG));
  T92 = YPsig(YPPlist(2,LITREF(lit_153),LITREF(lit_24)),YPPlist(2,T93,VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_301 = YPmet(FUNCODEREF(fun_as_301),LITREF(lit_152),T92,ENVNUL,PNUL,YPfalse);
  T96 = BOUNDP(YgooStypesYas);
  if (T96 != YPfalse) {
    T95 = VARREF(YgooStypesYas);
  } else {
    T95 = YPfalse;
  }
  T97 = fun_as_301;
  T94 = CALL2(1,VARREF(YPdefine_method),T95,T97);
  VARSET(YgooStypesYas,T94);
  lit_382 = YPPsym((P)"functions");
  T98 = YPsig(YPPlist(2,LITREF(lit_159),LITREF(lit_160)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rSastYfunctions = YPmet(FUNCODEREF(Yx8rSastYfunctions),LITREF(lit_382),T98,ENVNUL,PNUL,YPfalse);
  T99 = Yx8rSastYfunctions;
  VARSET(Yx8rSastYfunctions,T99);
  T101 = CALL1(1,VARREF(YgooStypesYtE),VARREF(Yx8rSastYLfunctionsG));
  T100 = YPsig(YPPlist(1,LITREF(lit_138)),YPPlist(1,T101),YPfalse,YPint((P)1),VARREF(Yx8rSastYLfunctionsG),Ynil);
  fun_empty_303 = YPmet(FUNCODEREF(fun_empty_303),LITREF(lit_163),T100,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YgooScolsScolYempty);
  if (T104 != YPfalse) {
    T103 = VARREF(YgooScolsScolYempty);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_empty_303;
  T102 = CALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YgooScolsScolYempty,T102);
  lit_383 = YPPsym((P)"objectify-locals");
  lit_384 = YPPsym((P)"sigs");
  lit_385 = YPPsym((P)"bodies");
  T108 = YPsig(YPPlist(1,LITREF(lit_367)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_304 = YPmet(FUNCODEREF(fun_304),YPfalse,T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(YPPlist(2,LITREF(lit_128),LITREF(lit_368)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_305 = YPmet(FUNCODEREF(fun_305),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(YPPlist(6,LITREF(lit_359),LITREF(lit_384),LITREF(lit_385),LITREF(lit_342),LITREF(lit_280),LITREF(lit_281)),YPPlist(6,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(Yx8rSastYLlocalsG),Ynil);
  fun_objectify_locals_306 = YPmet(FUNCODEREF(fun_objectify_locals_306),LITREF(lit_383),T106,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(Yx8rSastYobjectify_locals);
  if (T111 != YPfalse) {
    T110 = VARREF(Yx8rSastYobjectify_locals);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_objectify_locals_306;
  T109 = CALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(Yx8rSastYobjectify_locals,T109);
  lit_386 = YPPsym((P)"objectify-bind-exit");
  T113 = YPsig(YPPlist(4,LITREF(lit_322),LITREF(lit_342),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(Yx8rSastYLbind_exitG),Ynil);
  fun_objectify_bind_exit_307 = YPmet(FUNCODEREF(fun_objectify_bind_exit_307),LITREF(lit_386),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(Yx8rSastYobjectify_bind_exit);
  if (T116 != YPfalse) {
    T115 = VARREF(Yx8rSastYobjectify_bind_exit);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_objectify_bind_exit_307;
  T114 = CALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(Yx8rSastYobjectify_bind_exit,T114);
  lit_387 = YPPsym((P)"objectify-unwind-protect");
  lit_388 = YPPsym((P)"protected-form");
  lit_389 = YPPsym((P)"cleanup-forms");
  T118 = YPsig(YPPlist(4,LITREF(lit_388),LITREF(lit_389),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(Yx8rSastYLunwind_protectG),Ynil);
  fun_objectify_unwind_protect_308 = YPmet(FUNCODEREF(fun_objectify_unwind_protect_308),LITREF(lit_387),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(Yx8rSastYobjectify_unwind_protect);
  if (T121 != YPfalse) {
    T120 = VARREF(Yx8rSastYobjectify_unwind_protect);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_objectify_unwind_protect_308;
  T119 = CALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(Yx8rSastYobjectify_unwind_protect,T119);
  lit_390 = YPPsym((P)"objectify-monitor");
  lit_391 = YPPsym((P)"type");
  lit_392 = YPPsym((P)"info");
  lit_393 = YPPsym((P)"test");
  lit_394 = YPPsym((P)"handler");
  T123 = YPsig(YPPlist(7,LITREF(lit_391),LITREF(lit_392),LITREF(lit_393),LITREF(lit_394),LITREF(lit_342),LITREF(lit_280),LITREF(lit_281)),YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(Yx8rSastYLmonitorG),Ynil);
  fun_objectify_monitor_309 = YPmet(FUNCODEREF(fun_objectify_monitor_309),LITREF(lit_390),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(Yx8rSastYobjectify_monitor);
  if (T126 != YPfalse) {
    T125 = VARREF(Yx8rSastYobjectify_monitor);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_objectify_monitor_309;
  T124 = CALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(Yx8rSastYobjectify_monitor,T124);
  lit_395 = YPPsym((P)"objectify-export");
  lit_396 = YPsb((P)"Can only export bindings from target environment.\n");
  lit_397 = YPPsym((P)"exit");
  lit_398 = YPsb((P)"Continue without exporting %s");
  lit_399 = YPsb((P)"Can't export undefined binding %s.\n");
  T133 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_310 = YPmet(FUNCODEREF(fun_310),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(2,LITREF(lit_294),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_311 = YPmet(FUNCODEREF(fun_311),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_312 = YPmet(FUNCODEREF(fun_312),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(YPPlist(1,LITREF(lit_397)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_313 = YPmet(FUNCODEREF(fun_313),YPfalse,T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(YPPlist(1,LITREF(lit_322)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_314 = YPmet(FUNCODEREF(fun_314),YPfalse,T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(YPPlist(3,LITREF(lit_359),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(Yx8rSastYLprogramG),Ynil);
  fun_objectify_export_315 = YPmet(FUNCODEREF(fun_objectify_export_315),LITREF(lit_395),T128,ENVNUL,PNUL,YPfalse);
  T136 = BOUNDP(Yx8rSastYobjectify_export);
  if (T136 != YPfalse) {
    T135 = VARREF(Yx8rSastYobjectify_export);
  } else {
    T135 = YPfalse;
  }
  T137 = fun_objectify_export_315;
  T134 = CALL2(1,VARREF(YPdefine_method),T135,T137);
  VARSET(Yx8rSastYobjectify_export,T134);
  lit_400 = YPPsym((P)"import-global!");
  lit_401 = YPPsym((P)"env");
  lit_402 = YPsb((P)"warning: '%s' from %s clobbers local binding.\n");
  T138 = YPsig(YPPlist(2,LITREF(lit_368),LITREF(lit_401)),YPPlist(2,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rSastYimport_globalX = YPmet(FUNCODEREF(Yx8rSastYimport_globalX),LITREF(lit_400),T138,ENVNUL,PNUL,YPfalse);
  T139 = Yx8rSastYimport_globalX;
  VARSET(Yx8rSastYimport_globalX,T139);
  lit_403 = YPPsym((P)"objectify-use/export-module");
  T141 = YPsig(YPPlist(1,LITREF(lit_368)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_317 = YPmet(FUNCODEREF(fun_317),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(YPPlist(3,LITREF(lit_322),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(Yx8rSastYLprogramG),Ynil);
  fun_objectify_useSexport_module_318 = YPmet(FUNCODEREF(fun_objectify_useSexport_module_318),LITREF(lit_403),T140,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(Yx8rSastYobjectify_useSexport_module);
  if (T144 != YPfalse) {
    T143 = VARREF(Yx8rSastYobjectify_useSexport_module);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_objectify_useSexport_module_318;
  T142 = CALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(Yx8rSastYobjectify_useSexport_module,T142);
  lit_404 = YPPsym((P)"objectify-use-module");
  T147 = YPsig(YPPlist(1,LITREF(lit_368)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_319 = YPmet(FUNCODEREF(fun_319),YPfalse,T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(YPPlist(3,LITREF(lit_322),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(Yx8rSastYLprogramG),Ynil);
  fun_objectify_use_module_320 = YPmet(FUNCODEREF(fun_objectify_use_module_320),LITREF(lit_404),T146,ENVNUL,PNUL,YPfalse);
  T150 = BOUNDP(Yx8rSastYobjectify_use_module);
  if (T150 != YPfalse) {
    T149 = VARREF(Yx8rSastYobjectify_use_module);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_objectify_use_module_320;
  T148 = CALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(Yx8rSastYobjectify_use_module,T148);
  lit_405 = YPPsym((P)"expand-bind-list");
  lit_406 = YPPsym((P)"pat");
  lit_407 = YPPsym((P)"fail");
  lit_408 = YPsb((P)"Expected Pattern List %=\n");
  T152 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_327),LITREF(lit_407)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_list_321 = YPmet(FUNCODEREF(fun_expand_bind_list_321),LITREF(lit_405),T152,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(Yx8rSastYexpand_bind_list);
  if (T155 != YPfalse) {
    T154 = VARREF(Yx8rSastYexpand_bind_list);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_expand_bind_list_321;
  T153 = CALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(Yx8rSastYexpand_bind_list,T153);
  lit_409 = YPPsym((P)"match-empty-list");
  T158 = CALL1(1,VARREF(YgooStypesYtE),Ynil);
  T157 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_327),LITREF(lit_407)),YPPlist(3,T158,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_322 = YPmet(FUNCODEREF(fun_expand_bind_list_322),LITREF(lit_405),T157,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(Yx8rSastYexpand_bind_list);
  if (T161 != YPfalse) {
    T160 = VARREF(Yx8rSastYexpand_bind_list);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_expand_bind_list_322;
  T159 = CALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(Yx8rSastYexpand_bind_list,T159);
  lit_410 = YPsb((P)"Unquote Unexpected Here %=\n");
  lit_411 = YPsb((P)"Unquote Splicing Unexpected Here %=\n");
  T163 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_327),LITREF(lit_407)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_323 = YPmet(FUNCODEREF(fun_expand_bind_list_323),LITREF(lit_405),T163,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(Yx8rSastYexpand_bind_list);
  if (T166 != YPfalse) {
    T165 = VARREF(Yx8rSastYexpand_bind_list);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_expand_bind_list_323;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(Yx8rSastYexpand_bind_list,T164);
  lit_412 = YPPsym((P)"expand-bind-list*");
  T169 = CALL1(1,VARREF(YgooStypesYtE),Ynil);
  T168 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_327),LITREF(lit_407)),YPPlist(3,T169,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_324 = YPmet(FUNCODEREF(fun_expand_bind_listT_324),LITREF(lit_412),T168,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(Yx8rSastYexpand_bind_listT);
  if (T172 != YPfalse) {
    T171 = VARREF(Yx8rSastYexpand_bind_listT);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_expand_bind_listT_324;
  T170 = CALL2(1,VARREF(YPdefine_method),T171,T173);
  VARSET(Yx8rSastYexpand_bind_listT,T170);
  T174 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_327),LITREF(lit_407)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_325 = YPmet(FUNCODEREF(fun_expand_bind_listT_325),LITREF(lit_412),T174,ENVNUL,PNUL,YPfalse);
  T177 = BOUNDP(Yx8rSastYexpand_bind_listT);
  if (T177 != YPfalse) {
    T176 = VARREF(Yx8rSastYexpand_bind_listT);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_expand_bind_listT_325;
  T175 = CALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(Yx8rSastYexpand_bind_listT,T175);
  lit_413 = YPPsym((P)"expand-bind-element");
  lit_414 = YPPsym((P)"match-atom");
  T179 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_327),LITREF(lit_407)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_326 = YPmet(FUNCODEREF(fun_expand_bind_element_326),LITREF(lit_413),T179,ENVNUL,PNUL,YPfalse);
  T182 = BOUNDP(Yx8rSastYexpand_bind_element);
  if (T182 != YPfalse) {
    T181 = VARREF(Yx8rSastYexpand_bind_element);
  } else {
    T181 = YPfalse;
  }
  T183 = fun_expand_bind_element_326;
  T180 = CALL2(1,VARREF(YPdefine_method),T181,T183);
  VARSET(Yx8rSastYexpand_bind_element,T180);
  lit_415 = YPPsym((P)"match-unquote");
  lit_416 = YPPsym((P)"match-sublist");
  T184 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_327),LITREF(lit_407)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_327 = YPmet(FUNCODEREF(fun_expand_bind_element_327),LITREF(lit_413),T184,ENVNUL,PNUL,YPfalse);
  T187 = BOUNDP(Yx8rSastYexpand_bind_element);
  if (T187 != YPfalse) {
    T186 = VARREF(Yx8rSastYexpand_bind_element);
  } else {
    T186 = YPfalse;
  }
  T188 = fun_expand_bind_element_327;
  T185 = CALL2(1,VARREF(YPdefine_method),T186,T188);
  VARSET(Yx8rSastYexpand_bind_element,T185);
  lit_417 = YPPsym((P)"expand-pattern");
  lit_418 = YPPsym((P)"isa?");
  lit_419 = YPsb((P)"Match Pattern Failure");
  T189 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_327),LITREF(lit_407)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_pattern_328 = YPmet(FUNCODEREF(fun_expand_pattern_328),LITREF(lit_417),T189,ENVNUL,PNUL,YPfalse);
  T192 = BOUNDP(Yx8rSastYexpand_pattern);
  if (T192 != YPfalse) {
    T191 = VARREF(Yx8rSastYexpand_pattern);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_expand_pattern_328;
  T190 = CALL2(1,VARREF(YPdefine_method),T191,T193);
  VARSET(Yx8rSastYexpand_pattern,T190);
  lit_420 = YPPsym((P)"expand-syntax-if");
  lit_421 = YPPsym((P)"esc");
  lit_422 = YPPsym((P)"loc");
  lit_423 = YPPsym((P)"<str>");
  T195 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_329 = YPmet(FUNCODEREF(fun_329),YPfalse,T195,ENVNUL,PNUL,YPfalse);
  T194 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_expand_syntax_if_330 = YPmet(FUNCODEREF(fun_expand_syntax_if_330),LITREF(lit_420),T194,ENVNUL,PNUL,YPfalse);
  T198 = BOUNDP(Yx8rSastYexpand_syntax_if);
  if (T198 != YPfalse) {
    T197 = VARREF(Yx8rSastYexpand_syntax_if);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_expand_syntax_if_330;
  T196 = CALL2(1,VARREF(YPdefine_method),T197,T199);
  VARSET(Yx8rSastYexpand_syntax_if,T196);
  lit_424 = YPPsym((P)"r-extend*");
  T200 = YPsig(YPPlist(2,LITREF(lit_280),LITREF(lit_358)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(Yx8rSastYLstatic_environmentG),Ynil);
  fun_r_extendT_331 = YPmet(FUNCODEREF(fun_r_extendT_331),LITREF(lit_424),T200,ENVNUL,PNUL,YPfalse);
  T203 = BOUNDP(Yx8rSastYr_extendT);
  if (T203 != YPfalse) {
    T202 = VARREF(Yx8rSastYr_extendT);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_r_extendT_331;
  T201 = CALL2(1,VARREF(YPdefine_method),T202,T204);
  VARSET(Yx8rSastYr_extendT,T201);
  lit_425 = YPPsym((P)"insert-global!");
  T205 = YPsig(YPPlist(2,LITREF(lit_278),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalX_332 = YPmet(FUNCODEREF(fun_insert_globalX_332),LITREF(lit_425),T205,ENVNUL,PNUL,YPfalse);
  T208 = BOUNDP(Yx8rSastYinsert_globalX);
  if (T208 != YPfalse) {
    T207 = VARREF(Yx8rSastYinsert_globalX);
  } else {
    T207 = YPfalse;
  }
  T209 = fun_insert_globalX_332;
  T206 = CALL2(1,VARREF(YPdefine_method),T207,T209);
  VARSET(Yx8rSastYinsert_globalX,T206);
  lit_426 = YPPsym((P)"insert-globals!");
  T211 = YPsig(YPPlist(1,LITREF(lit_368)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_333 = YPmet(FUNCODEREF(fun_333),YPfalse,T211,ENVNUL,PNUL,YPfalse);
  T210 = YPsig(YPPlist(2,LITREF(lit_358),LITREF(lit_280)),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalsX_334 = YPmet(FUNCODEREF(fun_insert_globalsX_334),LITREF(lit_426),T210,ENVNUL,PNUL,YPfalse);
  T214 = BOUNDP(Yx8rSastYinsert_globalsX);
  if (T214 != YPfalse) {
    T213 = VARREF(Yx8rSastYinsert_globalsX);
  } else {
    T213 = YPfalse;
  }
  T215 = fun_insert_globalsX_334;
  T212 = CALL2(1,VARREF(YPdefine_method),T213,T215);
  VARSET(Yx8rSastYinsert_globalsX,T212);
  lit_427 = YPPsym((P)"find-static-global-environment");
  T216 = YPsig(YPPlist(1,LITREF(lit_280)),YPPlist(1,VARREF(Yx8rSastYLstatic_local_environmentG)),YPfalse,YPint((P)1),VARREF(Yx8rSastYLstatic_global_environmentG),Ynil);
  fun_find_static_global_environment_335 = YPmet(FUNCODEREF(fun_find_static_global_environment_335),LITREF(lit_427),T216,ENVNUL,PNUL,YPfalse);
  T219 = BOUNDP(Yx8rSastYfind_static_global_environment);
  if (T219 != YPfalse) {
    T218 = VARREF(Yx8rSastYfind_static_global_environment);
  } else {
    T218 = YPfalse;
  }
  T220 = fun_find_static_global_environment_335;
  T217 = CALL2(1,VARREF(YPdefine_method),T218,T220);
  VARSET(Yx8rSastYfind_static_global_environment,T217);
  T221 = YPsig(YPPlist(1,LITREF(lit_280)),YPPlist(1,VARREF(Yx8rSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(Yx8rSastYLstatic_global_environmentG),Ynil);
  fun_find_static_global_environment_336 = YPmet(FUNCODEREF(fun_find_static_global_environment_336),LITREF(lit_427),T221,ENVNUL,PNUL,YPfalse);
  T224 = BOUNDP(Yx8rSastYfind_static_global_environment);
  if (T224 != YPfalse) {
    T223 = VARREF(Yx8rSastYfind_static_global_environment);
  } else {
    T223 = YPfalse;
  }
  T225 = fun_find_static_global_environment_336;
  T222 = CALL2(1,VARREF(YPdefine_method),T223,T225);
  VARSET(Yx8rSastYfind_static_global_environment,T222);
  lit_428 = YPPsym((P)"find-syntax-environment");
  T226 = YPsig(YPPlist(1,LITREF(lit_280)),YPPlist(1,VARREF(Yx8rSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(Yx8rSastYLstatic_global_environmentG),Ynil);
  fun_find_syntax_environment_337 = YPmet(FUNCODEREF(fun_find_syntax_environment_337),LITREF(lit_428),T226,ENVNUL,PNUL,YPfalse);
  T229 = BOUNDP(Yx8rSastYfind_syntax_environment);
  if (T229 != YPfalse) {
    T228 = VARREF(Yx8rSastYfind_syntax_environment);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_find_syntax_environment_337;
  T227 = CALL2(1,VARREF(YPdefine_method),T228,T230);
  VARSET(Yx8rSastYfind_syntax_environment,T227);
  lit_429 = YPPsym((P)"find-environment-module");
  T231 = YPsig(YPPlist(1,LITREF(lit_280)),YPPlist(1,VARREF(Yx8rSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_find_environment_module_338 = YPmet(FUNCODEREF(fun_find_environment_module_338),LITREF(lit_429),T231,ENVNUL,PNUL,YPfalse);
  T234 = BOUNDP(Yx8rSastYfind_environment_module);
  if (T234 != YPfalse) {
    T233 = VARREF(Yx8rSastYfind_environment_module);
  } else {
    T233 = YPfalse;
  }
  T235 = fun_find_environment_module_338;
  T232 = CALL2(1,VARREF(YPdefine_method),T233,T235);
  VARSET(Yx8rSastYfind_environment_module,T232);
  lit_430 = YPPsym((P)"find-binding");
  T237 = YPsig(YPPlist(1,LITREF(lit_358)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_339 = YPmet(FUNCODEREF(fun_loop_339),LITREF(lit_139),T237,ENVNUL,PNUL,YPfalse);
  T236 = YPsig(YPPlist(2,LITREF(lit_322),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLstatic_local_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_340 = YPmet(FUNCODEREF(fun_find_binding_340),LITREF(lit_430),T236,ENVNUL,PNUL,YPfalse);
  T240 = BOUNDP(Yx8rSastYfind_binding);
  if (T240 != YPfalse) {
    T239 = VARREF(Yx8rSastYfind_binding);
  } else {
    T239 = YPfalse;
  }
  T241 = fun_find_binding_340;
  T238 = CALL2(1,VARREF(YPdefine_method),T239,T241);
  VARSET(Yx8rSastYfind_binding,T238);
  T242 = YPsig(YPPlist(2,LITREF(lit_322),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLstatic_empty_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_341 = YPmet(FUNCODEREF(fun_find_binding_341),LITREF(lit_430),T242,ENVNUL,PNUL,YPfalse);
  T245 = BOUNDP(Yx8rSastYfind_binding);
  if (T245 != YPfalse) {
    T244 = VARREF(Yx8rSastYfind_binding);
  } else {
    T244 = YPfalse;
  }
  T246 = fun_find_binding_341;
  T243 = CALL2(1,VARREF(YPdefine_method),T244,T246);
  VARSET(Yx8rSastYfind_binding,T243);
  T247 = YPsig(YPPlist(2,LITREF(lit_322),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_342 = YPmet(FUNCODEREF(fun_find_binding_342),LITREF(lit_430),T247,ENVNUL,PNUL,YPfalse);
  T250 = BOUNDP(Yx8rSastYfind_binding);
  if (T250 != YPfalse) {
    T249 = VARREF(Yx8rSastYfind_binding);
  } else {
    T249 = YPfalse;
  }
  T251 = fun_find_binding_342;
  T248 = CALL2(1,VARREF(YPdefine_method),T249,T251);
  VARSET(Yx8rSastYfind_binding,T248);
  lit_431 = YPPsym((P)"frame-bindings");
  T252 = YPsig(YPPlist(1,LITREF(lit_401)),YPPlist(1,VARREF(Yx8rSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_frame_bindings_343 = YPmet(FUNCODEREF(fun_frame_bindings_343),LITREF(lit_431),T252,ENVNUL,PNUL,YPfalse);
  T255 = BOUNDP(Yx8rSastYframe_bindings);
  if (T255 != YPfalse) {
    T254 = VARREF(Yx8rSastYframe_bindings);
  } else {
    T254 = YPfalse;
  }
  T256 = fun_frame_bindings_343;
  T253 = CALL2(1,VARREF(YPdefine_method),T254,T256);
  VARSET(Yx8rSastYframe_bindings,T253);
  VARSET(Yx8rSastYTmagic_bindingsT,Ynil);
  lit_432 = YPPsym((P)"register-magic-binding");
  T257 = YPsig(YPPlist(2,LITREF(lit_322),LITREF(lit_287)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_magic_binding_344 = YPmet(FUNCODEREF(fun_register_magic_binding_344),LITREF(lit_432),T257,ENVNUL,PNUL,YPfalse);
  T260 = BOUNDP(Yx8rSastYregister_magic_binding);
  if (T260 != YPfalse) {
    T259 = VARREF(Yx8rSastYregister_magic_binding);
  } else {
    T259 = YPfalse;
  }
  T261 = fun_register_magic_binding_344;
  T258 = CALL2(1,VARREF(YPdefine_method),T259,T261);
  VARSET(Yx8rSastYregister_magic_binding,T258);
  lit_433 = YPPsym((P)"magic-bindings");
  T262 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_magic_bindings_345 = YPmet(FUNCODEREF(fun_magic_bindings_345),LITREF(lit_433),T262,ENVNUL,PNUL,YPfalse);
  T265 = BOUNDP(Yx8rSastYmagic_bindings);
  if (T265 != YPfalse) {
    T264 = VARREF(Yx8rSastYmagic_bindings);
  } else {
    T264 = YPfalse;
  }
  T266 = fun_magic_bindings_345;
  T263 = CALL2(1,VARREF(YPdefine_method),T264,T266);
  VARSET(Yx8rSastYmagic_bindings,T263);
  lit_434 = YPPsym((P)"x-1443");
  lit_435 = YPPsym((P)"define-magic-binding");
  lit_436 = YPsb((P)"special-");
  lit_437 = YPsb((P)"$sexpr-");
  lit_438 = YPsb((P)"-tag");
  lit_439 = YPPsym((P)"$goo-boot-module-name");
  lit_440 = YPPsym((P)"binding-handler");
  lit_441 = YPPsym((P)"fun");
  T269 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1443_346 = YPmet(FUNCODEREF(fun_x_1443_346),LITREF(lit_434),T269,ENVNUL,PNUL,YPfalse);
  T268 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_347 = YPmet(FUNCODEREF(fun_347),YPfalse,T268,ENVNUL,PNUL,YPfalse);
  T267 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_348 = YPmet(FUNCODEREF(fun_348),YPfalse,T267,ENVNUL,PNUL,YPfalse);
  T270 = fun_348;
  YPmacro(YPPsym((P)"x8r/ast"),YPPsym((P)"define-magic-binding"),T270);
  T271 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_349 = YPmet(FUNCODEREF(fun_349),YPfalse,T271,ENVNUL,PNUL,YPfalse);
  T273 = fun_349;
  T272 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSsyntaxYDsexpr_if_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T273,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_if,T272);
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_346),VARREF(Yx8rSastYspecial_if));
  T274 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_350 = YPmet(FUNCODEREF(fun_350),YPfalse,T274,ENVNUL,PNUL,YPfalse);
  T276 = fun_350;
  T275 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSsyntaxYDsexpr_begin_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T276,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_begin,T275);
  lit_442 = YPPsym((P)"begin");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_442),VARREF(Yx8rSastYspecial_begin));
  lit_443 = YPPsym((P)"%raw");
  VARSET(Yx8rSastYDsexpr_Praw_tag,LITREF(lit_443));
  T277 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_351 = YPmet(FUNCODEREF(fun_351),YPfalse,T277,ENVNUL,PNUL,YPfalse);
  T279 = fun_351;
  T278 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSastYDsexpr_Praw_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T279,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_Praw,T278);
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_443),VARREF(Yx8rSastYspecial_Praw));
  T280 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_352 = YPmet(FUNCODEREF(fun_352),YPfalse,T280,ENVNUL,PNUL,YPfalse);
  T282 = fun_352;
  T281 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSsyntaxYDsexpr_quote_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T282,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_quote,T281);
  T284 = CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_306),VARREF(Yx8rSastYspecial_quote));
  T283 = T284;
  return T283;
}

P Yx8rSastY___main_7___() {
  P T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77;
  P T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_353 = YPmet(FUNCODEREF(fun_353),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T2 = fun_353;
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSsyntaxYDsexpr_set_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T2,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_set,T1);
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_10),VARREF(Yx8rSastYspecial_set));
  T3 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_354 = YPmet(FUNCODEREF(fun_354),YPfalse,T3,ENVNUL,PNUL,YPfalse);
  T5 = fun_354;
  T4 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSsyntaxYDsexpr_define_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T5,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_define,T4);
  lit_444 = YPPsym((P)"define");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_444),VARREF(Yx8rSastYspecial_define));
  T6 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_355 = YPmet(FUNCODEREF(fun_355),YPfalse,T6,ENVNUL,PNUL,YPfalse);
  T8 = fun_355;
  T7 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSsyntaxYDsexpr_define_syntax_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T8,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_define_syntax,T7);
  lit_445 = YPPsym((P)"define-syntax");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_445),VARREF(Yx8rSastYspecial_define_syntax));
  lit_446 = YPPsym((P)"dss");
  VARSET(Yx8rSastYDsexpr_define_static_syntax_tag,LITREF(lit_446));
  T9 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_356 = YPmet(FUNCODEREF(fun_356),YPfalse,T9,ENVNUL,PNUL,YPfalse);
  T11 = fun_356;
  T10 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSastYDsexpr_define_static_syntax_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T11,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_define_static_syntax,T10);
  lit_447 = YPPsym((P)"define-static-syntax");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_447),VARREF(Yx8rSastYspecial_define_static_syntax));
  T12 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_357 = YPmet(FUNCODEREF(fun_357),YPfalse,T12,ENVNUL,PNUL,YPfalse);
  T14 = fun_357;
  T13 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSsyntaxYDsexpr_define_method_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T14,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_define_method,T13);
  lit_448 = YPPsym((P)"define-method");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_448),VARREF(Yx8rSastYspecial_define_method));
  T15 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_358 = YPmet(FUNCODEREF(fun_358),YPfalse,T15,ENVNUL,PNUL,YPfalse);
  T17 = fun_358;
  T16 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSsyntaxYDsexpr_define_generic_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T17,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_define_generic,T16);
  lit_449 = YPPsym((P)"define-generic");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_449),VARREF(Yx8rSastYspecial_define_generic));
  T18 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_359 = YPmet(FUNCODEREF(fun_359),YPfalse,T18,ENVNUL,PNUL,YPfalse);
  T20 = fun_359;
  T19 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSsyntaxYDsexpr_define_function_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T20,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_define_function,T19);
  lit_450 = YPPsym((P)"define-function");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_450),VARREF(Yx8rSastYspecial_define_function));
  T21 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_360 = YPmet(FUNCODEREF(fun_360),YPfalse,T21,ENVNUL,PNUL,YPfalse);
  T23 = fun_360;
  T22 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSsyntaxYDsexpr_method_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T23,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_method,T22);
  lit_451 = YPPsym((P)"method");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_451),VARREF(Yx8rSastYspecial_method));
  VARSET(Yx8rSastYDsexpr_boundQ_tag,LITREF(lit_347));
  T24 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_361 = YPmet(FUNCODEREF(fun_361),YPfalse,T24,ENVNUL,PNUL,YPfalse);
  T26 = fun_361;
  T25 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSastYDsexpr_boundQ_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T26,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_boundQ,T25);
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_347),VARREF(Yx8rSastYspecial_boundQ));
  T27 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_362 = YPmet(FUNCODEREF(fun_362),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T29 = fun_362;
  T28 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSsyntaxYDsexpr_let_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T29,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_let,T28);
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_8),VARREF(Yx8rSastYspecial_let));
  T30 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_363 = YPmet(FUNCODEREF(fun_363),YPfalse,T30,ENVNUL,PNUL,YPfalse);
  T32 = fun_363;
  T31 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSsyntaxYDsexpr_def_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T32,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_def,T31);
  lit_452 = YPPsym((P)"def");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_452),VARREF(Yx8rSastYspecial_def));
  T33 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_364 = YPmet(FUNCODEREF(fun_364),YPfalse,T33,ENVNUL,PNUL,YPfalse);
  T35 = fun_364;
  T34 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSsyntaxYDsexpr_locals_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T35,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_locals,T34);
  lit_453 = YPPsym((P)"locals");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_453),VARREF(Yx8rSastYspecial_locals));
  T36 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_365 = YPmet(FUNCODEREF(fun_365),YPfalse,T36,ENVNUL,PNUL,YPfalse);
  T38 = fun_365;
  T37 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSsyntaxYDsexpr_iterate_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T38,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_iterate,T37);
  lit_454 = YPPsym((P)"iterate");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_454),VARREF(Yx8rSastYspecial_iterate));
  T39 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_366 = YPmet(FUNCODEREF(fun_366),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T41 = fun_366;
  T40 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSsyntaxYDsexpr_bind_exit_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T41,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_bind_exit,T40);
  lit_455 = YPPsym((P)"bind-exit");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_455),VARREF(Yx8rSastYspecial_bind_exit));
  T42 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_367 = YPmet(FUNCODEREF(fun_367),YPfalse,T42,ENVNUL,PNUL,YPfalse);
  T44 = fun_367;
  T43 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSsyntaxYDsexpr_unwind_protect_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T44,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_unwind_protect,T43);
  lit_456 = YPPsym((P)"unwind-protect");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_456),VARREF(Yx8rSastYspecial_unwind_protect));
  T45 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_368 = YPmet(FUNCODEREF(fun_368),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T47 = fun_368;
  T46 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSsyntaxYDsexpr_monitor_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T47,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_monitor,T46);
  lit_457 = YPPsym((P)"monitor");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_457),VARREF(Yx8rSastYspecial_monitor));
  lit_458 = YPPsym((P)"pairize");
  T48 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pairize_369 = YPmet(FUNCODEREF(fun_pairize_369),LITREF(lit_458),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(Yx8rSastYpairize);
  if (T51 != YPfalse) {
    T50 = VARREF(Yx8rSastYpairize);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_pairize_369;
  T49 = CALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(Yx8rSastYpairize,T49);
  lit_459 = YPPsym((P)"%isa");
  T53 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_370 = YPmet(FUNCODEREF(fun_370),YPfalse,T53,ENVNUL,PNUL,YPfalse);
  T55 = fun_370;
  T54 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSsyntaxYDsexpr_isa_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T55,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_isa,T54);
  lit_460 = YPPsym((P)"isa");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_460),VARREF(Yx8rSastYspecial_isa));
  lit_461 = YPPsym((P)"fab-class");
  T56 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_371 = YPmet(FUNCODEREF(fun_371),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T58 = fun_371;
  T57 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSsyntaxYDsexpr_define_class_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T58,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_define_class,T57);
  lit_462 = YPPsym((P)"define-class");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_462),VARREF(Yx8rSastYspecial_define_class));
  lit_463 = YPPsym((P)"%prop");
  lit_464 = YPPsym((P)"%prop-unbound-error");
  T59 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_372 = YPmet(FUNCODEREF(fun_372),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T61 = fun_372;
  T60 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSsyntaxYDsexpr_prop_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T61,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_prop,T60);
  lit_465 = YPPsym((P)"prop");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_465),VARREF(Yx8rSastYspecial_prop));
  lit_466 = YPPsym((P)"ct");
  VARSET(Yx8rSastYDsexpr_compile_time_tag,LITREF(lit_466));
  T62 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_373 = YPmet(FUNCODEREF(fun_373),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T64 = fun_373;
  T63 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSastYDsexpr_compile_time_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T64,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_compile_time,T63);
  lit_467 = YPPsym((P)"compile-time");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_467),VARREF(Yx8rSastYspecial_compile_time));
  lit_468 = YPPsym((P)"ct-also");
  VARSET(Yx8rSastYDsexpr_compile_time_also_tag,LITREF(lit_468));
  T65 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_374 = YPmet(FUNCODEREF(fun_374),YPfalse,T65,ENVNUL,PNUL,YPfalse);
  T67 = fun_374;
  T66 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSastYDsexpr_compile_time_also_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T67,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_compile_time_also,T66);
  lit_469 = YPPsym((P)"compile-time-also");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_469),VARREF(Yx8rSastYspecial_compile_time_also));
  lit_470 = YPPsym((P)"dl");
  VARSET(Yx8rSastYDsexpr_define_primitive_tag,LITREF(lit_470));
  T68 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_375 = YPmet(FUNCODEREF(fun_375),YPfalse,T68,ENVNUL,PNUL,YPfalse);
  T70 = fun_375;
  T69 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSastYDsexpr_define_primitive_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T70,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_define_primitive,T69);
  lit_471 = YPPsym((P)"define-primitive");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_471),VARREF(Yx8rSastYspecial_define_primitive));
  T71 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_376 = YPmet(FUNCODEREF(fun_376),YPfalse,T71,ENVNUL,PNUL,YPfalse);
  T73 = fun_376;
  T72 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSsyntaxYDsexpr_quasiquote_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T73,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_quasiquote,T72);
  lit_472 = YPPsym((P)"quasiquote");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_472),VARREF(Yx8rSastYspecial_quasiquote));
  lit_473 = YPPsym((P)"ast-macro-expand");
  T74 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_macro_expand_377 = YPmet(FUNCODEREF(fun_ast_macro_expand_377),LITREF(lit_473),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(Yx8rSastYast_macro_expand);
  if (T77 != YPfalse) {
    T76 = VARREF(Yx8rSastYast_macro_expand);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_ast_macro_expand_377;
  T75 = CALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(Yx8rSastYast_macro_expand,T75);
  T79 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_378 = YPmet(FUNCODEREF(fun_378),YPfalse,T79,ENVNUL,PNUL,YPfalse);
  T81 = fun_378;
  T80 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSsyntaxYDsexpr_macro_expand_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T81,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_macro_expand,T80);
  lit_474 = YPPsym((P)"macro-expand");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_474),VARREF(Yx8rSastYspecial_macro_expand));
  T82 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_379 = YPmet(FUNCODEREF(fun_379),YPfalse,T82,ENVNUL,PNUL,YPfalse);
  T84 = fun_379;
  T83 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSsyntaxYDsexpr_syntax_if_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T84,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_syntax_if,T83);
  lit_475 = YPPsym((P)"syntax-if");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_475),VARREF(Yx8rSastYspecial_syntax_if));
  lit_476 = YPPsym((P)"export");
  VARSET(Yx8rSastYDsexpr_export_tag,LITREF(lit_476));
  T85 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_380 = YPmet(FUNCODEREF(fun_380),YPfalse,T85,ENVNUL,PNUL,YPfalse);
  T87 = fun_380;
  T86 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSastYDsexpr_export_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T87,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_export,T86);
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_476),VARREF(Yx8rSastYspecial_export));
  lit_477 = YPPsym((P)"use");
  VARSET(Yx8rSastYDsexpr_use_module_tag,LITREF(lit_477));
  T88 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_381 = YPmet(FUNCODEREF(fun_381),YPfalse,T88,ENVNUL,PNUL,YPfalse);
  T90 = fun_381;
  T89 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSastYDsexpr_use_module_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T90,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_use_module,T89);
  lit_478 = YPPsym((P)"use-module");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_478),VARREF(Yx8rSastYspecial_use_module));
  lit_479 = YPPsym((P)"use/export");
  T92 = VARSET(Yx8rSastYDsexpr_useSexport_module_tag,LITREF(lit_479));
  T91 = T92;
  return T91;
}

P Yx8rSastY___main_8___() {
  P T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196,T195,T194,T193;
  P T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180,T179,T178,T177;
  P T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161;
  P T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145;
  P T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129;
  P T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113;
  P T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97;
  P T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81;
  P T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65;
  P T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49;
  P T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
loop:
  T0 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_382 = YPmet(FUNCODEREF(fun_382),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T2 = fun_382;
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_283),VARREF(Yx8rSastYbinding_name),VARREF(Yx8rSastYDsexpr_useSexport_module_tag),VARREF(Yx8rSastYbinding_module_name),VARREF(Yx8rSastYDgoo_boot_module_name),VARREF(Yx8rSastYbinding_handler),T2,VARREF(Yx8rSastYbinding_freeQ),YPfalse);
  VARSET(Yx8rSastYspecial_useSexport_module,T1);
  lit_480 = YPPsym((P)"use/export-module");
  CALL2(1,VARREF(Yx8rSastYregister_magic_binding),LITREF(lit_480),VARREF(Yx8rSastYspecial_useSexport_module));
  lit_481 = YPPsym((P)"<transaction>");
  T4 = (P)YPpair(VARREF(YLanyG),Ynil);
  T3 = CALL2(1,VARREF(Yfab_class),LITREF(lit_481),T4);
  VARSET(Yx8rSastYLtransactionG,T3);
  lit_482 = YPPsym((P)"transaction-implemented-bindings");
  T5 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_transaction_implemented_bindings_383 = YPmet(FUNCODEREF(fun_transaction_implemented_bindings_383),LITREF(lit_482),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(Yx8rSastYtransaction_implemented_bindings);
  if (T8 != YPfalse) {
    T7 = VARREF(Yx8rSastYtransaction_implemented_bindings);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_transaction_implemented_bindings_383;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(Yx8rSastYtransaction_implemented_bindings,T6);
  lit_483 = YPPsym((P)"transaction-implemented-bindings-setter");
  T10 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(Yx8rSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_transaction_implemented_bindings_setter_384 = YPmet(FUNCODEREF(fun_transaction_implemented_bindings_setter_384),LITREF(lit_483),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(Yx8rSastYtransaction_implemented_bindings_setter);
  if (T13 != YPfalse) {
    T12 = VARREF(Yx8rSastYtransaction_implemented_bindings_setter);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_transaction_implemented_bindings_setter_384;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(Yx8rSastYtransaction_implemented_bindings_setter,T11);
  T15 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_385 = YPmet(FUNCODEREF(fun_385),YPfalse,T15,ENVNUL,PNUL,YPfalse);
  T16 = fun_385;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLtransactionG),VARREF(Yx8rSastYtransaction_implemented_bindings),VARREF(Yx8rSastYtransaction_implemented_bindings_setter),VARREF(YgooScolsScolYLtabG),T16);
  lit_484 = YPPsym((P)"transaction-dependents");
  T17 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_transaction_dependents_386 = YPmet(FUNCODEREF(fun_transaction_dependents_386),LITREF(lit_484),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(Yx8rSastYtransaction_dependents);
  if (T20 != YPfalse) {
    T19 = VARREF(Yx8rSastYtransaction_dependents);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_transaction_dependents_386;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(Yx8rSastYtransaction_dependents,T18);
  lit_485 = YPPsym((P)"transaction-dependents-setter");
  T22 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(Yx8rSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_transaction_dependents_setter_387 = YPmet(FUNCODEREF(fun_transaction_dependents_setter_387),LITREF(lit_485),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(Yx8rSastYtransaction_dependents_setter);
  if (T25 != YPfalse) {
    T24 = VARREF(Yx8rSastYtransaction_dependents_setter);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_transaction_dependents_setter_387;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(Yx8rSastYtransaction_dependents_setter,T23);
  T27 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_388 = YPmet(FUNCODEREF(fun_388),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T28 = fun_388;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLtransactionG),VARREF(Yx8rSastYtransaction_dependents),VARREF(Yx8rSastYtransaction_dependents_setter),VARREF(YgooScolsScolYLtabG),T28);
  VARSET(Yx8rSastYTcurrent_subtransactionT,YPfalse);
  lit_486 = YPPsym((P)"transaction-register-implemented-binding");
  lit_487 = YPsb((P)"Can't register implemented foreign binding (no subtransaction)");
  T29 = YPsig(YPPlist(1,LITREF(lit_368)),YPPlist(1,VARREF(Yx8rSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSastYtransaction_register_implemented_binding = YPmet(FUNCODEREF(Yx8rSastYtransaction_register_implemented_binding),LITREF(lit_486),T29,ENVNUL,PNUL,YPfalse);
  T30 = Yx8rSastYtransaction_register_implemented_binding;
  VARSET(Yx8rSastYtransaction_register_implemented_binding,T30);
  lit_488 = YPPsym((P)"transaction-register-dependent");
  lit_489 = YPPsym((P)"d");
  lit_490 = YPsb((P)"Can't register dependent (no subtransaction)");
  T31 = YPsig(YPPlist(1,LITREF(lit_489)),YPPlist(1,VARREF(Yx8rSdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSastYtransaction_register_dependent = YPmet(FUNCODEREF(Yx8rSastYtransaction_register_dependent),LITREF(lit_488),T31,ENVNUL,PNUL,YPfalse);
  T32 = Yx8rSastYtransaction_register_dependent;
  VARSET(Yx8rSastYtransaction_register_dependent,T32);
  lit_491 = YPPsym((P)"transaction-empty?");
  T33 = YPsig(YPPlist(1,LITREF(lit_160)),YPPlist(1,VARREF(Yx8rSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  Yx8rSastYtransaction_emptyQ = YPmet(FUNCODEREF(Yx8rSastYtransaction_emptyQ),LITREF(lit_491),T33,ENVNUL,PNUL,YPfalse);
  T34 = Yx8rSastYtransaction_emptyQ;
  VARSET(Yx8rSastYtransaction_emptyQ,T34);
  lit_492 = YPPsym((P)"merge-transactions!");
  lit_493 = YPPsym((P)"t1");
  lit_494 = YPPsym((P)"t2");
  lit_495 = YPPsym((P)"k");
  lit_496 = YPPsym((P)"v");
  T37 = YPsig(YPPlist(2,LITREF(lit_495),LITREF(lit_496)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_392 = YPmet(FUNCODEREF(fun_392),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T36 = YPsig(YPPlist(2,LITREF(lit_495),LITREF(lit_496)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_393 = YPmet(FUNCODEREF(fun_393),YPfalse,T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(2,LITREF(lit_493),LITREF(lit_494)),YPPlist(2,VARREF(Yx8rSastYLtransactionG),VARREF(Yx8rSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(Yx8rSastYLtransactionG),Ynil);
  Yx8rSastYmerge_transactionsX = YPmet(FUNCODEREF(Yx8rSastYmerge_transactionsX),LITREF(lit_492),T35,ENVNUL,PNUL,YPfalse);
  T38 = Yx8rSastYmerge_transactionsX;
  VARSET(Yx8rSastYmerge_transactionsX,T38);
  lit_497 = YPPsym((P)"roll-back-transaction");
  lit_498 = YPPsym((P)"junk");
  T41 = YPsig(YPPlist(2,LITREF(lit_278),LITREF(lit_498)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_395 = YPmet(FUNCODEREF(fun_395),YPfalse,T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(YPPlist(2,LITREF(lit_132),LITREF(lit_498)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_396 = YPmet(FUNCODEREF(fun_396),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(1,LITREF(lit_160)),YPPlist(1,VARREF(Yx8rSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSastYroll_back_transaction = YPmet(FUNCODEREF(Yx8rSastYroll_back_transaction),LITREF(lit_497),T39,ENVNUL,PNUL,YPfalse);
  T42 = Yx8rSastYroll_back_transaction;
  VARSET(Yx8rSastYroll_back_transaction,T42);
  lit_499 = YPPsym((P)"call-with-subtransaction");
  lit_500 = YPPsym((P)"module");
  lit_501 = YPPsym((P)"thunk");
  T45 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_398 = YPmet(FUNCODEREF(fun_398),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_399 = YPmet(FUNCODEREF(fun_399),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T43 = YPsig(YPPlist(2,LITREF(lit_500),LITREF(lit_501)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rSastYcall_with_subtransaction = YPmet(FUNCODEREF(Yx8rSastYcall_with_subtransaction),LITREF(lit_499),T43,ENVNUL,PNUL,YPfalse);
  T46 = Yx8rSastYcall_with_subtransaction;
  VARSET(Yx8rSastYcall_with_subtransaction,T46);
  lit_502 = YPPsym((P)"x-1447");
  lit_503 = YPPsym((P)"with-subtransaction");
  T49 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1447_401 = YPmet(FUNCODEREF(fun_x_1447_401),LITREF(lit_502),T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_402 = YPmet(FUNCODEREF(fun_402),YPfalse,T48,ENVNUL,PNUL,YPfalse);
  T47 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_403 = YPmet(FUNCODEREF(fun_403),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T50 = fun_403;
  YPmacro(YPPsym((P)"x8r/ast"),YPPsym((P)"with-subtransaction"),T50);
  lit_504 = YPPsym((P)"objectify-with-subtransaction");
  T52 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_404 = YPmet(FUNCODEREF(fun_404),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T51 = YPsig(YPPlist(3,LITREF(lit_138),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(Yx8rSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Yx8rSastYobjectify_with_subtransaction = YPmet(FUNCODEREF(Yx8rSastYobjectify_with_subtransaction),LITREF(lit_504),T51,ENVNUL,PNUL,YPfalse);
  T53 = Yx8rSastYobjectify_with_subtransaction;
  VARSET(Yx8rSastYobjectify_with_subtransaction,T53);
  lit_505 = YPPsym((P)"<module-loader>");
  T55 = (P)YPpair(VARREF(YLanyG),Ynil);
  T54 = CALL2(1,VARREF(Yfab_class),LITREF(lit_505),T55);
  VARSET(Yx8rSastYLmodule_loaderG,T54);
  lit_506 = YPPsym((P)"module-loader-modules");
  T56 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_406 = YPmet(FUNCODEREF(fun_module_loader_modules_406),LITREF(lit_506),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(Yx8rSastYmodule_loader_modules);
  if (T59 != YPfalse) {
    T58 = VARREF(Yx8rSastYmodule_loader_modules);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_module_loader_modules_406;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(Yx8rSastYmodule_loader_modules,T57);
  lit_507 = YPPsym((P)"module-loader-modules-setter");
  T61 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(Yx8rSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_setter_407 = YPmet(FUNCODEREF(fun_module_loader_modules_setter_407),LITREF(lit_507),T61,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(Yx8rSastYmodule_loader_modules_setter);
  if (T64 != YPfalse) {
    T63 = VARREF(Yx8rSastYmodule_loader_modules_setter);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_module_loader_modules_setter_407;
  T62 = CALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(Yx8rSastYmodule_loader_modules_setter,T62);
  T66 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_408 = YPmet(FUNCODEREF(fun_408),YPfalse,T66,ENVNUL,PNUL,YPfalse);
  T67 = fun_408;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLmodule_loaderG),VARREF(Yx8rSastYmodule_loader_modules),VARREF(Yx8rSastYmodule_loader_modules_setter),VARREF(YgooScolsScolYLtabG),T67);
  lit_508 = YPPsym((P)"module-loader-stack");
  T68 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_stack_409 = YPmet(FUNCODEREF(fun_module_loader_stack_409),LITREF(lit_508),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(Yx8rSastYmodule_loader_stack);
  if (T71 != YPfalse) {
    T70 = VARREF(Yx8rSastYmodule_loader_stack);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_module_loader_stack_409;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(Yx8rSastYmodule_loader_stack,T69);
  lit_509 = YPPsym((P)"module-loader-stack-setter");
  T73 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLlstG),VARREF(Yx8rSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_stack_setter_410 = YPmet(FUNCODEREF(fun_module_loader_stack_setter_410),LITREF(lit_509),T73,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(Yx8rSastYmodule_loader_stack_setter);
  if (T76 != YPfalse) {
    T75 = VARREF(Yx8rSastYmodule_loader_stack_setter);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_module_loader_stack_setter_410;
  T74 = CALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(Yx8rSastYmodule_loader_stack_setter,T74);
  T78 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_411 = YPmet(FUNCODEREF(fun_411),YPfalse,T78,ENVNUL,PNUL,YPfalse);
  T79 = fun_411;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLmodule_loaderG),VARREF(Yx8rSastYmodule_loader_stack),VARREF(Yx8rSastYmodule_loader_stack_setter),VARREF(YLlstG),T79);
  lit_510 = YPPsym((P)"<module>");
  T81 = (P)YPpair(VARREF(YLanyG),Ynil);
  T80 = CALL2(1,VARREF(Yfab_class),LITREF(lit_510),T81);
  VARSET(Yx8rSastYLmoduleG,T80);
  lit_511 = YPPsym((P)"module-name");
  T82 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_name_412 = YPmet(FUNCODEREF(fun_module_name_412),LITREF(lit_511),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(Yx8rSastYmodule_name);
  if (T85 != YPfalse) {
    T84 = VARREF(Yx8rSastYmodule_name);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_module_name_412;
  T83 = CALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(Yx8rSastYmodule_name,T83);
  lit_512 = YPPsym((P)"module-name-setter");
  T87 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLsymG),VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_name_setter_413 = YPmet(FUNCODEREF(fun_module_name_setter_413),LITREF(lit_512),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(Yx8rSastYmodule_name_setter);
  if (T90 != YPfalse) {
    T89 = VARREF(Yx8rSastYmodule_name_setter);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_module_name_setter_413;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(Yx8rSastYmodule_name_setter,T88);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLmoduleG),VARREF(Yx8rSastYmodule_name),VARREF(Yx8rSastYmodule_name_setter),VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_513 = YPPsym((P)"module-target-environment");
  T92 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_target_environment_414 = YPmet(FUNCODEREF(fun_module_target_environment_414),LITREF(lit_513),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(Yx8rSastYmodule_target_environment);
  if (T95 != YPfalse) {
    T94 = VARREF(Yx8rSastYmodule_target_environment);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_module_target_environment_414;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(Yx8rSastYmodule_target_environment,T93);
  lit_514 = YPPsym((P)"module-target-environment-setter");
  T97 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(Yx8rSastYLstatic_global_environmentG),VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_target_environment_setter_415 = YPmet(FUNCODEREF(fun_module_target_environment_setter_415),LITREF(lit_514),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(Yx8rSastYmodule_target_environment_setter);
  if (T100 != YPfalse) {
    T99 = VARREF(Yx8rSastYmodule_target_environment_setter);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_module_target_environment_setter_415;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(Yx8rSastYmodule_target_environment_setter,T98);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLmoduleG),VARREF(Yx8rSastYmodule_target_environment),VARREF(Yx8rSastYmodule_target_environment_setter),VARREF(Yx8rSastYLstatic_global_environmentG),VARREF(YPprop_unbound_error));
  lit_515 = YPPsym((P)"module-syntax-environment");
  T102 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_416 = YPmet(FUNCODEREF(fun_module_syntax_environment_416),LITREF(lit_515),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(Yx8rSastYmodule_syntax_environment);
  if (T105 != YPfalse) {
    T104 = VARREF(Yx8rSastYmodule_syntax_environment);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_module_syntax_environment_416;
  T103 = CALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(Yx8rSastYmodule_syntax_environment,T103);
  lit_516 = YPPsym((P)"module-syntax-environment-setter");
  T107 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(Yx8rSastYLstatic_global_environmentG),VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_setter_417 = YPmet(FUNCODEREF(fun_module_syntax_environment_setter_417),LITREF(lit_516),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(Yx8rSastYmodule_syntax_environment_setter);
  if (T110 != YPfalse) {
    T109 = VARREF(Yx8rSastYmodule_syntax_environment_setter);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_module_syntax_environment_setter_417;
  T108 = CALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(Yx8rSastYmodule_syntax_environment_setter,T108);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLmoduleG),VARREF(Yx8rSastYmodule_syntax_environment),VARREF(Yx8rSastYmodule_syntax_environment_setter),VARREF(Yx8rSastYLstatic_global_environmentG),VARREF(YPprop_unbound_error));
  lit_517 = YPPsym((P)"%module-exports");
  T112 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pmodule_exports_418 = YPmet(FUNCODEREF(fun_Pmodule_exports_418),LITREF(lit_517),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(Yx8rSastYPmodule_exports);
  if (T115 != YPfalse) {
    T114 = VARREF(Yx8rSastYPmodule_exports);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_Pmodule_exports_418;
  T113 = CALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(Yx8rSastYPmodule_exports,T113);
  lit_518 = YPPsym((P)"%module-exports-setter");
  T117 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pmodule_exports_setter_419 = YPmet(FUNCODEREF(fun_Pmodule_exports_setter_419),LITREF(lit_518),T117,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(Yx8rSastYPmodule_exports_setter);
  if (T120 != YPfalse) {
    T119 = VARREF(Yx8rSastYPmodule_exports_setter);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_Pmodule_exports_setter_419;
  T118 = CALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(Yx8rSastYPmodule_exports_setter,T118);
  T122 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_420 = YPmet(FUNCODEREF(fun_420),YPfalse,T122,ENVNUL,PNUL,YPfalse);
  T123 = fun_420;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLmoduleG),VARREF(Yx8rSastYPmodule_exports),VARREF(Yx8rSastYPmodule_exports_setter),VARREF(YgooScolsScolYLtabG),T123);
  lit_519 = YPPsym((P)"module-data-processed?");
  T124 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_421 = YPmet(FUNCODEREF(fun_module_data_processedQ_421),LITREF(lit_519),T124,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(Yx8rSastYmodule_data_processedQ);
  if (T127 != YPfalse) {
    T126 = VARREF(Yx8rSastYmodule_data_processedQ);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_module_data_processedQ_421;
  T125 = CALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(Yx8rSastYmodule_data_processedQ,T125);
  lit_520 = YPPsym((P)"module-data-processed?-setter");
  T129 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLlogG),VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_setter_422 = YPmet(FUNCODEREF(fun_module_data_processedQ_setter_422),LITREF(lit_520),T129,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(Yx8rSastYmodule_data_processedQ_setter);
  if (T132 != YPfalse) {
    T131 = VARREF(Yx8rSastYmodule_data_processedQ_setter);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_module_data_processedQ_setter_422;
  T130 = CALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(Yx8rSastYmodule_data_processedQ_setter,T130);
  T134 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_423 = YPmet(FUNCODEREF(fun_423),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T135 = fun_423;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLmoduleG),VARREF(Yx8rSastYmodule_data_processedQ),VARREF(Yx8rSastYmodule_data_processedQ_setter),VARREF(YLlogG),T135);
  lit_521 = YPPsym((P)"module-runtime-data");
  T136 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_424 = YPmet(FUNCODEREF(fun_module_runtime_data_424),LITREF(lit_521),T136,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(Yx8rSastYmodule_runtime_data);
  if (T139 != YPfalse) {
    T138 = VARREF(Yx8rSastYmodule_runtime_data);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_module_runtime_data_424;
  T137 = CALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(Yx8rSastYmodule_runtime_data,T137);
  lit_522 = YPPsym((P)"module-runtime-data-setter");
  T141 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_setter_425 = YPmet(FUNCODEREF(fun_module_runtime_data_setter_425),LITREF(lit_522),T141,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(Yx8rSastYmodule_runtime_data_setter);
  if (T144 != YPfalse) {
    T143 = VARREF(Yx8rSastYmodule_runtime_data_setter);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_module_runtime_data_setter_425;
  T142 = CALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(Yx8rSastYmodule_runtime_data_setter,T142);
  T146 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_426 = YPmet(FUNCODEREF(fun_426),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T147 = fun_426;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLmoduleG),VARREF(Yx8rSastYmodule_runtime_data),VARREF(Yx8rSastYmodule_runtime_data_setter),VARREF(YLanyG),T147);
  lit_523 = YPPsym((P)"module-transaction");
  T148 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_transaction_427 = YPmet(FUNCODEREF(fun_module_transaction_427),LITREF(lit_523),T148,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(Yx8rSastYmodule_transaction);
  if (T151 != YPfalse) {
    T150 = VARREF(Yx8rSastYmodule_transaction);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_module_transaction_427;
  T149 = CALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(Yx8rSastYmodule_transaction,T149);
  lit_524 = YPPsym((P)"module-transaction-setter");
  T153 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(Yx8rSastYLtransactionG),VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_transaction_setter_428 = YPmet(FUNCODEREF(fun_module_transaction_setter_428),LITREF(lit_524),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(Yx8rSastYmodule_transaction_setter);
  if (T156 != YPfalse) {
    T155 = VARREF(Yx8rSastYmodule_transaction_setter);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_module_transaction_setter_428;
  T154 = CALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(Yx8rSastYmodule_transaction_setter,T154);
  T158 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_429 = YPmet(FUNCODEREF(fun_429),YPfalse,T158,ENVNUL,PNUL,YPfalse);
  T159 = fun_429;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSastYLmoduleG),VARREF(Yx8rSastYmodule_transaction),VARREF(Yx8rSastYmodule_transaction_setter),VARREF(Yx8rSastYLtransactionG),T159);
  VARSET(Yx8rSastYmodule_exports_setter,VARREF(Yx8rSastYPmodule_exports_setter));
  lit_525 = YPPsym((P)"module-exports");
  T160 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_module_exports_430 = YPmet(FUNCODEREF(fun_module_exports_430),LITREF(lit_525),T160,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(Yx8rSastYmodule_exports);
  if (T163 != YPfalse) {
    T162 = VARREF(Yx8rSastYmodule_exports);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_module_exports_430;
  T161 = CALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(Yx8rSastYmodule_exports,T161);
  lit_526 = YPPsym((P)"set-module-environments");
  lit_527 = YPPsym((P)"mod");
  lit_528 = YPPsym((P)"syntax-env");
  lit_529 = YPPsym((P)"target-env");
  T165 = YPsig(YPPlist(3,LITREF(lit_527),LITREF(lit_528),LITREF(lit_529)),YPPlist(3,VARREF(Yx8rSastYLmoduleG),VARREF(Yx8rSastYLstatic_global_environmentG),VARREF(Yx8rSastYLstatic_global_environmentG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Yx8rSastYset_module_environments = YPmet(FUNCODEREF(Yx8rSastYset_module_environments),LITREF(lit_526),T165,ENVNUL,PNUL,YPfalse);
  T166 = Yx8rSastYset_module_environments;
  VARSET(Yx8rSastYset_module_environments,T166);
  lit_530 = YPPsym((P)"do-module-loader-modules");
  lit_531 = YPPsym((P)"loader");
  T168 = YPsig(YPPlist(1,LITREF(lit_527)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_432 = YPmet(FUNCODEREF(fun_432),YPfalse,T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(YPPlist(2,LITREF(lit_128),LITREF(lit_531)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rSastYdo_module_loader_modules = YPmet(FUNCODEREF(Yx8rSastYdo_module_loader_modules),LITREF(lit_530),T167,ENVNUL,PNUL,YPfalse);
  T169 = Yx8rSastYdo_module_loader_modules;
  VARSET(Yx8rSastYdo_module_loader_modules,T169);
  lit_532 = YPPsym((P)"module-loader-module-type");
  T170 = YPsig(YPPlist(1,LITREF(lit_531)),YPPlist(1,VARREF(Yx8rSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_434 = YPmet(FUNCODEREF(fun_module_loader_module_type_434),LITREF(lit_532),T170,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(Yx8rSastYmodule_loader_module_type);
  if (T173 != YPfalse) {
    T172 = VARREF(Yx8rSastYmodule_loader_module_type);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_module_loader_module_type_434;
  T171 = CALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(Yx8rSastYmodule_loader_module_type,T171);
  lit_533 = YPPsym((P)"register-module!");
  lit_534 = YPPsym((P)"module-loader");
  T175 = YPsig(YPPlist(2,LITREF(lit_534),LITREF(lit_527)),YPPlist(2,VARREF(Yx8rSastYLmodule_loaderG),VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(Yx8rSastYLmodule_loaderG),Ynil);
  Yx8rSastYregister_moduleX = YPmet(FUNCODEREF(Yx8rSastYregister_moduleX),LITREF(lit_533),T175,ENVNUL,PNUL,YPfalse);
  T176 = Yx8rSastYregister_moduleX;
  VARSET(Yx8rSastYregister_moduleX,T176);
  lit_535 = YPPsym((P)"probe-module");
  T177 = YPsig(YPPlist(2,LITREF(lit_531),LITREF(lit_322)),YPPlist(2,VARREF(Yx8rSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(Yx8rSastYLmoduleG),Ynil);
  Yx8rSastYprobe_module = YPmet(FUNCODEREF(Yx8rSastYprobe_module),LITREF(lit_535),T177,ENVNUL,PNUL,YPfalse);
  T178 = Yx8rSastYprobe_module;
  VARSET(Yx8rSastYprobe_module,T178);
  lit_536 = YPPsym((P)"load-and-register-module");
  lit_537 = YPsb((P)"  ");
  lit_538 = YPsb((P)"%s: error: Circular use of %s not allowed");
  lit_539 = YPsb((P)"%s[Loading module %s...\n");
  lit_540 = YPsb((P)"%s]\n");
  T181 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_437 = YPmet(FUNCODEREF(fun_437),YPfalse,T181,ENVNUL,PNUL,YPfalse);
  T180 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_438 = YPmet(FUNCODEREF(fun_438),YPfalse,T180,ENVNUL,PNUL,YPfalse);
  T179 = YPsig(YPPlist(2,LITREF(lit_531),LITREF(lit_322)),YPPlist(2,VARREF(Yx8rSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(Yx8rSastYLmoduleG),Ynil);
  Yx8rSastYload_and_register_module = YPmet(FUNCODEREF(Yx8rSastYload_and_register_module),LITREF(lit_536),T179,ENVNUL,PNUL,YPfalse);
  T182 = Yx8rSastYload_and_register_module;
  VARSET(Yx8rSastYload_and_register_module,T182);
  lit_541 = YPPsym((P)"load-module");
  T184 = YPsig(YPPlist(2,LITREF(lit_531),LITREF(lit_322)),YPPlist(2,VARREF(Yx8rSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(Yx8rSastYLmoduleG),Ynil);
  T183 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_541),T184,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yx8rSastYload_module,T183);
  lit_542 = YPPsym((P)"export-binding!");
  lit_543 = YPsb((P)"Tried to export %= and %= from %= as %=");
  T186 = CALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T185 = YPsig(YPPlist(3,LITREF(lit_500),LITREF(lit_322),LITREF(lit_278)),YPPlist(3,VARREF(Yx8rSastYLmoduleG),VARREF(Yx8rSastYLbinding_nameG),VARREF(Yx8rSastYLmodule_bindingG)),YPfalse,YPint((P)3),T186,Ynil);
  Yx8rSastYexport_bindingX = YPmet(FUNCODEREF(Yx8rSastYexport_bindingX),LITREF(lit_542),T185,ENVNUL,PNUL,YPfalse);
  T187 = Yx8rSastYexport_bindingX;
  VARSET(Yx8rSastYexport_bindingX,T187);
  lit_544 = YPPsym((P)"binding-native-to?");
  T188 = YPsig(YPPlist(2,LITREF(lit_278),LITREF(lit_500)),YPPlist(2,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Yx8rSastYbinding_native_toQ = YPmet(FUNCODEREF(Yx8rSastYbinding_native_toQ),LITREF(lit_544),T188,ENVNUL,PNUL,YPfalse);
  T189 = Yx8rSastYbinding_native_toQ;
  VARSET(Yx8rSastYbinding_native_toQ,T189);
  lit_545 = YPPsym((P)"report-undefined-global-bindings");
  lit_546 = YPsb((P)"%s: warning: undefined binding '%s'.\n");
  T191 = YPsig(YPPlist(1,LITREF(lit_278)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_442 = YPmet(FUNCODEREF(fun_442),YPfalse,T191,ENVNUL,PNUL,YPfalse);
  T190 = YPsig(YPPlist(1,LITREF(lit_527)),YPPlist(1,VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSastYreport_undefined_global_bindings = YPmet(FUNCODEREF(Yx8rSastYreport_undefined_global_bindings),LITREF(lit_545),T190,ENVNUL,PNUL,YPfalse);
  T192 = Yx8rSastYreport_undefined_global_bindings;
  VARSET(Yx8rSastYreport_undefined_global_bindings,T192);
  lit_547 = YPPsym((P)"compute-transitive-users");
  lit_548 = YPPsym((P)"modnames");
  lit_549 = YPPsym((P)"add-user");
  lit_550 = YPPsym((P)"uses-mod");
  T197 = YPsig(YPPlist(1,LITREF(lit_550)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_444 = YPmet(FUNCODEREF(fun_444),YPfalse,T197,ENVNUL,PNUL,YPfalse);
  T196 = YPsig(YPPlist(1,LITREF(lit_527)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_445 = YPmet(FUNCODEREF(fun_445),YPfalse,T196,ENVNUL,PNUL,YPfalse);
  T195 = YPsig(YPPlist(1,LITREF(lit_329)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_add_user_446 = YPmet(FUNCODEREF(fun_add_user_446),LITREF(lit_549),T195,ENVNUL,PNUL,YPfalse);
  T194 = YPsig(YPPlist(1,LITREF(lit_496)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_447 = YPmet(FUNCODEREF(fun_447),YPfalse,T194,ENVNUL,PNUL,YPfalse);
  T193 = YPsig(YPPlist(2,LITREF(lit_531),LITREF(lit_548)),YPPlist(2,VARREF(Yx8rSastYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  Yx8rSastYcompute_transitive_users = YPmet(FUNCODEREF(Yx8rSastYcompute_transitive_users),LITREF(lit_547),T193,ENVNUL,PNUL,YPfalse);
  T198 = Yx8rSastYcompute_transitive_users;
  VARSET(Yx8rSastYcompute_transitive_users,T198);
  lit_551 = YPPsym((P)"remove-module-internal!");
  T199 = YPsig(YPPlist(2,LITREF(lit_531),LITREF(lit_527)),YPPlist(2,VARREF(Yx8rSastYLmodule_loaderG),VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rSastYremove_module_internalX = YPmet(FUNCODEREF(Yx8rSastYremove_module_internalX),LITREF(lit_551),T199,ENVNUL,PNUL,YPfalse);
  T200 = Yx8rSastYremove_module_internalX;
  VARSET(Yx8rSastYremove_module_internalX,T200);
  lit_552 = YPPsym((P)"remove-modules-by-name!");
  T206 = YPsig(YPPlist(1,LITREF(lit_329)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T205 = fun_450 = YPmet(FUNCODEREF(fun_450),YPfalse,T206,ENVNUL,PNUL,YPfalse);
  T204 = CALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T203 = YPsig(YPPlist(2,LITREF(lit_531),LITREF(lit_548)),YPPlist(2,VARREF(Yx8rSastYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),T204,Ynil);
  T202 = Yx8rSastYremove_modules_by_nameX = YPmet(FUNCODEREF(Yx8rSastYremove_modules_by_nameX),LITREF(lit_552),T203,ENVNUL,PNUL,YPfalse);
  T208 = Yx8rSastYremove_modules_by_nameX;
  T207 = VARSET(Yx8rSastYremove_modules_by_nameX,T208);
  T201 = T207;
  return T201;
}

P Yx8rSastY___main_9___() {
  P tmpF1866;
  P tmpF1865;
  P tmpF1864;
  P T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63;
  P T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47;
  P T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_553 = YPPsym((P)"module-name-to-relpath");
  T0 = YPsig(YPPlist(1,LITREF(lit_322)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  Yx8rSastYmodule_name_to_relpath = YPmet(FUNCODEREF(Yx8rSastYmodule_name_to_relpath),LITREF(lit_553),T0,ENVNUL,PNUL,YPfalse);
  T1 = Yx8rSastYmodule_name_to_relpath;
  VARSET(Yx8rSastYmodule_name_to_relpath,T1);
  lit_554 = YPPsym((P)"install-initial-bindings");
  lit_555 = YPPlist(2,YPPsym((P)"seq"),YPPsym((P)"use"));
  T3 = YPsig(YPPlist(1,LITREF(lit_322)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_453 = YPmet(FUNCODEREF(fun_453),YPfalse,T3,ENVNUL,PNUL,YPfalse);
  T2 = YPsig(YPPlist(2,LITREF(lit_401),LITREF(lit_531)),YPPlist(2,VARREF(Yx8rSastYLstatic_global_environmentG),VARREF(Yx8rSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rSastYinstall_initial_bindings = YPmet(FUNCODEREF(Yx8rSastYinstall_initial_bindings),LITREF(lit_554),T2,ENVNUL,PNUL,YPfalse);
  T4 = Yx8rSastYinstall_initial_bindings;
  VARSET(Yx8rSastYinstall_initial_bindings,T4);
  lit_556 = YPPsym((P)"fab-static-global-environment");
  lit_557 = YPPsym((P)"allow-foreign-names?");
  T5 = YPsig(YPPlist(3,LITREF(lit_500),LITREF(lit_534),LITREF(lit_557)),YPPlist(3,VARREF(Yx8rSastYLmoduleG),VARREF(Yx8rSastYLmodule_loaderG),VARREF(YLlogG)),YPfalse,YPint((P)3),VARREF(Yx8rSastYLstatic_global_environmentG),Ynil);
  Yx8rSastYfab_static_global_environment = YPmet(FUNCODEREF(Yx8rSastYfab_static_global_environment),LITREF(lit_556),T5,ENVNUL,PNUL,YPfalse);
  T6 = Yx8rSastYfab_static_global_environment;
  VARSET(Yx8rSastYfab_static_global_environment,T6);
  lit_558 = YPPsym((P)"fab-subset-environment");
  lit_559 = YPPsym((P)"src-module");
  lit_560 = YPPsym((P)"excluded");
  T8 = YPsig(YPPlist(2,LITREF(lit_322),LITREF(lit_278)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_456 = YPmet(FUNCODEREF(fun_456),YPfalse,T8,ENVNUL,PNUL,YPfalse);
  T7 = YPsig(YPPlist(3,LITREF(lit_500),LITREF(lit_559),LITREF(lit_560)),YPPlist(3,VARREF(Yx8rSastYLmoduleG),VARREF(Yx8rSastYLmoduleG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(Yx8rSastYLstatic_global_environmentG),Ynil);
  Yx8rSastYfab_subset_environment = YPmet(FUNCODEREF(Yx8rSastYfab_subset_environment),LITREF(lit_558),T7,ENVNUL,PNUL,YPfalse);
  T9 = Yx8rSastYfab_subset_environment;
  VARSET(Yx8rSastYfab_subset_environment,T9);
  lit_561 = YPPsym((P)"<runtime-module-loader>");
  T11 = (P)YPpair(VARREF(Yx8rSastYLmodule_loaderG),Ynil);
  T10 = CALL2(1,VARREF(Yfab_class),LITREF(lit_561),T11);
  VARSET(Yx8rSastYLruntime_module_loaderG,T10);
  VARSET(Yx8rSastYTnow_rt_envT,YPfalse);
  T16 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_458 = YPmet(FUNCODEREF(fun_458),YPfalse,T16,ENVNUL,PNUL,YPfalse);
  T15 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_459 = YPmet(FUNCODEREF(fun_459),YPfalse,T15,ENVNUL,PNUL,YPfalse);
  T14 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_460 = YPmet(FUNCODEREF(fun_460),YPfalse,T14,ENVNUL,PNUL,YPfalse);
  T13 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_461 = YPmet(FUNCODEREF(fun_461),YPfalse,T13,ENVNUL,PNUL,YPfalse);
  T12 = YPsig(YPPlist(2,LITREF(lit_531),LITREF(lit_322)),YPPlist(2,VARREF(Yx8rSastYLruntime_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(Yx8rSastYLmoduleG),Ynil);
  fun_load_module_462 = YPmet(FUNCODEREF(fun_load_module_462),LITREF(lit_541),T12,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(Yx8rSastYload_module);
  if (T19 != YPfalse) {
    T18 = VARREF(Yx8rSastYload_module);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_load_module_462;
  T17 = CALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(Yx8rSastYload_module,T17);
  T21 = CALL1(1,VARREF(Ynew),VARREF(Yx8rSastYLruntime_module_loaderG));
  VARSET(Yx8rSastYTruntime_module_loaderT,T21);
  lit_562 = YPPsym((P)"runtime-module-loader");
  T22 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Yx8rSastYruntime_module_loader = YPmet(FUNCODEREF(Yx8rSastYruntime_module_loader),LITREF(lit_562),T22,ENVNUL,PNUL,YPfalse);
  T23 = Yx8rSastYruntime_module_loader;
  VARSET(Yx8rSastYruntime_module_loader,T23);
  lit_563 = YPPsym((P)"runtime-module");
  T24 = YPsig(YPPlist(1,LITREF(lit_329)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSastYruntime_module = YPmet(FUNCODEREF(Yx8rSastYruntime_module),LITREF(lit_563),T24,ENVNUL,PNUL,YPfalse);
  T25 = Yx8rSastYruntime_module;
  VARSET(Yx8rSastYruntime_module,T25);
  lit_564 = YPPsym((P)"runtime-environment");
  T26 = YPsig(YPPlist(1,LITREF(lit_329)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSastYruntime_environment = YPmet(FUNCODEREF(Yx8rSastYruntime_environment),LITREF(lit_564),T26,ENVNUL,PNUL,YPfalse);
  T27 = Yx8rSastYruntime_environment;
  VARSET(Yx8rSastYruntime_environment,T27);
  lit_565 = YPPsym((P)"runtime-core-environment");
  T28 = YPsig(YPPlist(1,LITREF(lit_329)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSastYruntime_core_environment = YPmet(FUNCODEREF(Yx8rSastYruntime_core_environment),LITREF(lit_565),T28,ENVNUL,PNUL,YPfalse);
  T29 = Yx8rSastYruntime_core_environment;
  VARSET(Yx8rSastYruntime_core_environment,T29);
  lit_566 = YPPsym((P)"unchecked-runtime-environment");
  T30 = YPsig(YPPlist(1,LITREF(lit_329)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSastYunchecked_runtime_environment = YPmet(FUNCODEREF(Yx8rSastYunchecked_runtime_environment),LITREF(lit_566),T30,ENVNUL,PNUL,YPfalse);
  T31 = Yx8rSastYunchecked_runtime_environment;
  VARSET(Yx8rSastYunchecked_runtime_environment,T31);
  lit_567 = YPPsym((P)"reloader-do-create-module");
  lit_568 = YPPsym((P)"data");
  T32 = YPsig(YPPlist(2,LITREF(lit_329),LITREF(lit_568)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(Yx8rSastYLmoduleG),Ynil);
  Yx8rSastYreloader_do_create_module = YPmet(FUNCODEREF(Yx8rSastYreloader_do_create_module),LITREF(lit_567),T32,ENVNUL,PNUL,YPfalse);
  T33 = Yx8rSastYreloader_do_create_module;
  VARSET(Yx8rSastYreloader_do_create_module,T33);
  lit_569 = YPPsym((P)"reloader-do-use-module");
  lit_570 = YPPsym((P)"uses");
  T34 = YPsig(YPPlist(2,LITREF(lit_527),LITREF(lit_570)),YPPlist(2,VARREF(Yx8rSastYLmoduleG),VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rSastYreloader_do_use_module = YPmet(FUNCODEREF(Yx8rSastYreloader_do_use_module),LITREF(lit_569),T34,ENVNUL,PNUL,YPfalse);
  T35 = Yx8rSastYreloader_do_use_module;
  VARSET(Yx8rSastYreloader_do_use_module,T35);
  lit_571 = YPPsym((P)"reloader-do-import");
  lit_572 = YPPsym((P)"from-mod");
  lit_573 = YPPsym((P)"original-name");
  lit_574 = YPsb((P)"Can't find %s from %s for %s\n");
  T36 = YPsig(YPPlist(4,LITREF(lit_527),LITREF(lit_322),LITREF(lit_572),LITREF(lit_573)),YPPlist(4,VARREF(Yx8rSastYLmoduleG),VARREF(YLstrG),VARREF(Yx8rSastYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  Yx8rSastYreloader_do_import = YPmet(FUNCODEREF(Yx8rSastYreloader_do_import),LITREF(lit_571),T36,ENVNUL,PNUL,YPfalse);
  T37 = Yx8rSastYreloader_do_import;
  VARSET(Yx8rSastYreloader_do_import,T37);
  lit_575 = YPPsym((P)"process-module-data");
  T38 = YPsig(YPPlist(1,LITREF(lit_500)),YPPlist(1,VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSastYprocess_module_data = YPmet(FUNCODEREF(Yx8rSastYprocess_module_data),LITREF(lit_575),T38,ENVNUL,PNUL,YPfalse);
  T39 = Yx8rSastYprocess_module_data;
  VARSET(Yx8rSastYprocess_module_data,T39);
  lit_576 = YPPsym((P)"ensure-module-data");
  T40 = YPsig(YPPlist(1,LITREF(lit_500)),YPPlist(1,VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSastYensure_module_data = YPmet(FUNCODEREF(Yx8rSastYensure_module_data),LITREF(lit_576),T40,ENVNUL,PNUL,YPfalse);
  T41 = Yx8rSastYensure_module_data;
  VARSET(Yx8rSastYensure_module_data,T41);
  lit_577 = YPPsym((P)"reloader-do-runtime-binding");
  T42 = YPsig(YPPlist(3,LITREF(lit_527),LITREF(lit_322),LITREF(lit_422)),YPPlist(3,VARREF(Yx8rSastYLmoduleG),VARREF(YLstrG),VARREF(YLlocG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Yx8rSastYreloader_do_runtime_binding = YPmet(FUNCODEREF(Yx8rSastYreloader_do_runtime_binding),LITREF(lit_577),T42,ENVNUL,PNUL,YPfalse);
  T43 = Yx8rSastYreloader_do_runtime_binding;
  VARSET(Yx8rSastYreloader_do_runtime_binding,T43);
  lit_578 = YPPsym((P)"reloader-do-other-binding");
  T44 = YPsig(YPPlist(2,LITREF(lit_527),LITREF(lit_322)),YPPlist(2,VARREF(Yx8rSastYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rSastYreloader_do_other_binding = YPmet(FUNCODEREF(Yx8rSastYreloader_do_other_binding),LITREF(lit_578),T44,ENVNUL,PNUL,YPfalse);
  T45 = Yx8rSastYreloader_do_other_binding;
  VARSET(Yx8rSastYreloader_do_other_binding,T45);
  lit_579 = YPPsym((P)"reloader-do-export");
  lit_580 = YPPsym((P)"as-name");
  lit_581 = YPsb((P)"Can't find %s in %s\n");
  T46 = YPsig(YPPlist(3,LITREF(lit_527),LITREF(lit_322),LITREF(lit_580)),YPPlist(3,VARREF(Yx8rSastYLmoduleG),VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Yx8rSastYreloader_do_export = YPmet(FUNCODEREF(Yx8rSastYreloader_do_export),LITREF(lit_579),T46,ENVNUL,PNUL,YPfalse);
  T47 = Yx8rSastYreloader_do_export;
  VARSET(Yx8rSastYreloader_do_export,T47);
  lit_582 = YPPsym((P)"reload-modules");
  T48 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Yx8rSastYreload_modules = YPmet(FUNCODEREF(Yx8rSastYreload_modules),LITREF(lit_582),T48,ENVNUL,PNUL,YPfalse);
  T49 = Yx8rSastYreload_modules;
  VARSET(Yx8rSastYreload_modules,T49);
  lit_583 = YPPsym((P)"install-magic-bindings");
  T51 = YPsig(YPPlist(1,LITREF(lit_278)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_477 = YPmet(FUNCODEREF(fun_477),YPfalse,T51,ENVNUL,PNUL,YPfalse);
  T50 = YPsig(YPPlist(1,LITREF(lit_401)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSastYinstall_magic_bindings = YPmet(FUNCODEREF(Yx8rSastYinstall_magic_bindings),LITREF(lit_583),T50,ENVNUL,PNUL,YPfalse);
  T52 = Yx8rSastYinstall_magic_bindings;
  VARSET(Yx8rSastYinstall_magic_bindings,T52);
  lit_584 = YPPsym((P)"reload-macros");
  T53 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Yx8rSastYreload_macros = YPmet(FUNCODEREF(Yx8rSastYreload_macros),LITREF(lit_584),T53,ENVNUL,PNUL,YPfalse);
  T54 = Yx8rSastYreload_macros;
  VARSET(Yx8rSastYreload_macros,T54);
  lit_585 = YPPsym((P)"install-interpreter-hacks");
  T55 = YPsig(YPPlist(1,LITREF(lit_401)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSastYinstall_interpreter_hacks = YPmet(FUNCODEREF(Yx8rSastYinstall_interpreter_hacks),LITREF(lit_585),T55,ENVNUL,PNUL,YPfalse);
  T56 = Yx8rSastYinstall_interpreter_hacks;
  VARSET(Yx8rSastYinstall_interpreter_hacks,T56);
  lit_586 = YPPsym((P)"init-runtime");
  T57 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Yx8rSastYinit_runtime = YPmet(FUNCODEREF(Yx8rSastYinit_runtime),LITREF(lit_586),T57,ENVNUL,PNUL,YPfalse);
  T58 = Yx8rSastYinit_runtime;
  VARSET(Yx8rSastYinit_runtime,T58);
  lit_587 = YPPlist(5,YPPsym((P)"ct"),YPPsym((P)"ct-also"),YPPsym((P)"ds"),YPPsym((P)"use"),YPPsym((P)"export"));
  VARSET(Yx8rSastYsyntax_environment_excluded_bindings,LITREF(lit_587));
  lit_588 = YPPsym((P)"fab-syntax-environment");
  lit_589 = YPPsym((P)"goo");
  T59 = YPsig(YPPlist(1,LITREF(lit_500)),YPPlist(1,VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(Yx8rSastYLstatic_global_environmentG),Ynil);
  Yx8rSastYfab_syntax_environment = YPmet(FUNCODEREF(Yx8rSastYfab_syntax_environment),LITREF(lit_588),T59,ENVNUL,PNUL,YPfalse);
  T60 = Yx8rSastYfab_syntax_environment;
  VARSET(Yx8rSastYfab_syntax_environment,T60);
  lit_590 = YPPsym((P)"fab-g2c-module");
  T61 = YPsig(YPPlist(2,LITREF(lit_531),LITREF(lit_322)),YPPlist(2,VARREF(Yx8rSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(Yx8rSastYLmoduleG),Ynil);
  Yx8rSastYfab_g2c_module = YPmet(FUNCODEREF(Yx8rSastYfab_g2c_module),LITREF(lit_590),T61,ENVNUL,PNUL,YPfalse);
  T62 = Yx8rSastYfab_g2c_module;
  VARSET(Yx8rSastYfab_g2c_module,T62);
  lit_591 = YPPsym((P)"init-g2c-boot-environment");
  T63 = YPsig(YPPlist(1,LITREF(lit_401)),YPPlist(1,VARREF(Yx8rSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSastYinit_g2c_boot_environment = YPmet(FUNCODEREF(Yx8rSastYinit_g2c_boot_environment),LITREF(lit_591),T63,ENVNUL,PNUL,YPfalse);
  T64 = Yx8rSastYinit_g2c_boot_environment;
  VARSET(Yx8rSastYinit_g2c_boot_environment,T64);
  lit_592 = YPPsym((P)"init-g2c-regular-environment");
  T65 = YPsig(YPPlist(2,LITREF(lit_401),LITREF(lit_531)),YPPlist(2,VARREF(Yx8rSastYLstatic_global_environmentG),VARREF(Yx8rSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rSastYinit_g2c_regular_environment = YPmet(FUNCODEREF(Yx8rSastYinit_g2c_regular_environment),LITREF(lit_592),T65,ENVNUL,PNUL,YPfalse);
  T66 = Yx8rSastYinit_g2c_regular_environment;
  VARSET(Yx8rSastYinit_g2c_regular_environment,T66);
  lit_593 = YPPsym((P)"init-ast");
  T67 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Yx8rSastYinit_ast = YPmet(FUNCODEREF(Yx8rSastYinit_ast),LITREF(lit_593),T67,ENVNUL,PNUL,YPfalse);
  T68 = Yx8rSastYinit_ast;
  VARSET(Yx8rSastYinit_ast,T68);
  lit_594 = YPPsym((P)"do-static-global-bindings");
  T70 = YPsig(YPPlist(1,LITREF(lit_401)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_487 = YPmet(FUNCODEREF(fun_loop_487),LITREF(lit_139),T70,ENVNUL,PNUL,YPfalse);
  T69 = YPsig(YPPlist(2,LITREF(lit_128),LITREF(lit_401)),YPPlist(2,VARREF(YLfunG),VARREF(Yx8rSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rSastYdo_static_global_bindings = YPmet(FUNCODEREF(Yx8rSastYdo_static_global_bindings),LITREF(lit_594),T69,ENVNUL,PNUL,YPfalse);
  T71 = Yx8rSastYdo_static_global_bindings;
  VARSET(Yx8rSastYdo_static_global_bindings,T71);
  lit_595 = YPPsym((P)"do-named-static-global-bindings");
  T73 = YPsig(YPPlist(1,LITREF(lit_401)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_489 = YPmet(FUNCODEREF(fun_loop_489),LITREF(lit_139),T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(YPPlist(2,LITREF(lit_128),LITREF(lit_401)),YPPlist(2,VARREF(YLfunG),VARREF(Yx8rSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rSastYdo_named_static_global_bindings = YPmet(FUNCODEREF(Yx8rSastYdo_named_static_global_bindings),LITREF(lit_595),T72,ENVNUL,PNUL,YPfalse);
  T74 = Yx8rSastYdo_named_static_global_bindings;
  VARSET(Yx8rSastYdo_named_static_global_bindings,T74);
  tmpF1864 = YPfalse;
  if (tmpF1864 != YPfalse) {
    T75 = VARREF(Yx8rSastYast_evaluate);
  } else {
    T75 = YPfalse;
  }
  tmpF1865 = YPfalse;
  if (tmpF1865 != YPfalse) {
    T76 = VARREF(Yx8rSastYinit_environment_for_eval);
  } else {
    T76 = YPfalse;
  }
  tmpF1866 = YPfalse;
  if (tmpF1866 != YPfalse) {
    T77 = VARREF(Yx8rSastYload_in);
  } else {
    T77 = YPfalse;
  }
  T78 = YPfalse;
  return T78;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_x8rSsyntax;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_x8rSdependency;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSassoc;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_gooSioSwrite},
  {&module_info_x8rSsyntax},
  {&module_info_gooScolsSstr},
  {&module_info_gooSsystem},
  {&module_info_gooSioSwrite},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScols},
  {&module_info_gooSioSport},
  {&module_info_x8rSdependency},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"sexpr-make-application", &module_info_x8rSsyntax, "sexpr-make-application"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"$sexpr-define-class-tag", &module_info_x8rSsyntax, "$sexpr-define-class-tag"},
  {"sexpr-method-signature", &module_info_x8rSsyntax, "sexpr-method-signature"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"$sexpr-define-method-tag", &module_info_x8rSsyntax, "$sexpr-define-method-tag"},
  {"read", &module_info_gooSruntime, "read"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"while", &module_info_gooSmacros, "while"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"mif", &module_info_gooSboot, "mif"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"sexpr-forward-primitive?", &module_info_x8rSsyntax, "sexpr-forward-primitive?"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"rem", &module_info_gooSmath, "rem"},
  {"now", &module_info_gooScolsScol, "now"},
  {"sexpr-function-definition-value", &module_info_x8rSsyntax, "sexpr-function-definition-value"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"sexpr-prop-init-var", &module_info_x8rSsyntax, "sexpr-prop-init-var"},
  {"$sexpr-define-generic-tag", &module_info_x8rSsyntax, "$sexpr-define-generic-tag"},
  {"t+", &module_info_gooStypes, "t+"},
  {"sexpr-define-class?", &module_info_x8rSsyntax, "sexpr-define-class?"},
  {"$e", &module_info_gooSmath, "$e"},
  {"dss", &module_info_gooSboot, "dss"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"log", &module_info_gooSmath, "log"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"$sexpr-set-tag", &module_info_x8rSsyntax, "$sexpr-set-tag"},
  {"format", &module_info_gooSruntime, "format"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"sexpr-definition-variable", &module_info_x8rSsyntax, "sexpr-definition-variable"},
  {"tail", &module_info_gooSboot, "tail"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"dependency-includes-all?", &module_info_x8rSdependency, "dependency-includes-all?"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"tup", &module_info_gooSboot, "tup"},
  {"sexpr-assignment-variable", &module_info_x8rSsyntax, "sexpr-assignment-variable"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"/", &module_info_gooSmath, "/"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"sexpr-text-of-quotation", &module_info_x8rSsyntax, "sexpr-text-of-quotation"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"$sexpr-bind-exit-tag", &module_info_x8rSsyntax, "$sexpr-bind-exit-tag"},
  {"sexpr-fab-setter", &module_info_x8rSsyntax, "sexpr-fab-setter"},
  {"sexpr-variable?", &module_info_x8rSsyntax, "sexpr-variable?"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"ct", &module_info_gooSboot, "ct"},
  {"sexpr-signature-value", &module_info_x8rSsyntax, "sexpr-signature-value"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"sexpr-def?", &module_info_x8rSsyntax, "sexpr-def?"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"$sexpr-isa-tag", &module_info_x8rSsyntax, "$sexpr-isa-tag"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"app", &module_info_gooSmacros, "app"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"sexpr-fab-setter-name", &module_info_x8rSsyntax, "sexpr-fab-setter-name"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"1-", &module_info_gooSmath, "1-"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"pe-format", &module_info_gooSioSwrite, "pe-format"},
  {"$name-parse-dependency", &module_info_x8rSdependency, "$name-parse-dependency"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"sexpr-unwind-protect-protected-form", &module_info_x8rSsyntax, "sexpr-unwind-protect-protected-form"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"dependency-includes-any?", &module_info_x8rSdependency, "dependency-includes-any?"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"sexpr-block-body", &module_info_x8rSsyntax, "sexpr-block-body"},
  {"$sexpr-syntax-if-tag", &module_info_x8rSsyntax, "$sexpr-syntax-if-tag"},
  {"sexpr-variable-name", &module_info_x8rSsyntax, "sexpr-variable-name"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"pow", &module_info_gooSmath, "pow"},
  {"t?", &module_info_gooStypes, "t?"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"sexpr-loc-raw-body", &module_info_x8rSsyntax, "sexpr-loc-raw-body"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"low-fill!", &module_info_gooScolsScol, "low-fill!"},
  {"sexpr-syntax-if-value", &module_info_x8rSsyntax, "sexpr-syntax-if-value"},
  {"%put", &module_info_gooSboot, "%put"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"<dependency-type>", &module_info_x8rSdependency, "<dependency-type>"},
  {"assocs-test", &module_info_gooScolsSassoc, "assocs-test"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"~==", &module_info_gooSmath, "~=="},
  {"$optimizaton-dependencies", &module_info_x8rSdependency, "$optimizaton-dependencies"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"and", &module_info_gooSmacros, "and"},
  {"sexpr-syntax-definition-value", &module_info_x8rSsyntax, "sexpr-syntax-definition-value"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"match", &module_info_gooSmacros, "match"},
  {"$empty-dependency", &module_info_x8rSdependency, "$empty-dependency"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"sexpr-loc-bound-names", &module_info_x8rSsyntax, "sexpr-loc-bound-names"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"@len", &module_info_gooSboot, "@len"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"1+", &module_info_gooSmath, "1+"},
  {"-", &module_info_gooSmath, "-"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"use", &module_info_gooSboot, "use"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"sexpr-bind-pattern-variables", &module_info_x8rSsyntax, "sexpr-bind-pattern-variables"},
  {"when", &module_info_gooSmacros, "when"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"sexpr-iterate->loc", &module_info_x8rSsyntax, "sexpr-iterate->loc"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"*", &module_info_gooSmath, "*"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"sexpr-definition-value", &module_info_x8rSsyntax, "sexpr-definition-value"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"sexpr-isa-prop-inits", &module_info_x8rSsyntax, "sexpr-isa-prop-inits"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"sexpr-unquote-splicing?", &module_info_x8rSsyntax, "sexpr-unquote-splicing?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"error", &module_info_gooSboot, "error"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"t<", &module_info_gooStypes, "t<"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"sexpr-def-value", &module_info_x8rSsyntax, "sexpr-def-value"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"add", &module_info_gooScolsScol, "add"},
  {"sexpr-fab-getter", &module_info_x8rSsyntax, "sexpr-fab-getter"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"sexpr-if-else", &module_info_x8rSsyntax, "sexpr-if-else"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"~=", &module_info_gooSmath, "~="},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"low-into", &module_info_gooScolsScol, "low-into"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"tan", &module_info_gooSmath, "tan"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"seq", &module_info_gooSboot, "seq"},
  {"sexpr-loc-bound-bodies", &module_info_x8rSsyntax, "sexpr-loc-bound-bodies"},
  {"$sexpr-macro-expand-tag", &module_info_x8rSsyntax, "$sexpr-macro-expand-tag"},
  {"spread", &module_info_gooSruntime, "spread"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"$expansion-parse-dependency", &module_info_x8rSdependency, "$expansion-parse-dependency"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"quote", &module_info_gooSboot, "quote"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<dependent>", &module_info_x8rSdependency, "<dependent>"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"dl", &module_info_gooSboot, "dl"},
  {"$sexpr-quasiquote-tag", &module_info_x8rSsyntax, "$sexpr-quasiquote-tag"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"until", &module_info_gooSmacros, "until"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"==", &module_info_gooSmacros, "=="},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"any?", &module_info_gooStypes, "any?"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"t=", &module_info_gooStypes, "t="},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"<=", &module_info_gooSmag, "<="},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"items", &module_info_gooScolsScol, "items"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"sexpr-syntax-if-then", &module_info_x8rSsyntax, "sexpr-syntax-if-then"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"nul", &module_info_gooSboot, "nul"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"find", &module_info_gooScolsScol, "find"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"t*", &module_info_gooStypes, "t*"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"round/", &module_info_gooSmath, "round/"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"sexpr-loc-bound-signatures", &module_info_x8rSsyntax, "sexpr-loc-bound-signatures"},
  {"@==", &module_info_gooSboot, "@=="},
  {"case", &module_info_gooSmacros, "case"},
  {"sexpr-isa-init-props", &module_info_x8rSsyntax, "sexpr-isa-init-props"},
  {"sexpr-isa-parent", &module_info_x8rSsyntax, "sexpr-isa-parent"},
  {"logn", &module_info_gooSmath, "logn"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"@<", &module_info_gooSboot, "@<"},
  {"tab-gc-state", &module_info_gooScolsStab, "tab-gc-state"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"sexpr-if-then", &module_info_x8rSsyntax, "sexpr-if-then"},
  {"sexpr-variable-type", &module_info_x8rSsyntax, "sexpr-variable-type"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"max", &module_info_gooSmag, "max"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"head", &module_info_gooSboot, "head"},
  {"sexpr-make-macro-function", &module_info_x8rSsyntax, "sexpr-make-macro-function"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"format-to-string", &module_info_gooSruntime, "format-to-string"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"sexpr-syntax-if-pattern", &module_info_x8rSsyntax, "sexpr-syntax-if-pattern"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%get", &module_info_gooSboot, "%get"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"def", &module_info_gooSboot, "def"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"sexpr-block-name", &module_info_x8rSsyntax, "sexpr-block-name"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {">", &module_info_gooSmag, ">"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"invalidate-dependents", &module_info_x8rSdependency, "invalidate-dependents"},
  {"len", &module_info_gooStypes, "len"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"sexpr-assignment-value", &module_info_x8rSsyntax, "sexpr-assignment-value"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"%im", &module_info_gooSboot, "%im"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"sexpr-make-anonymous-method", &module_info_x8rSsyntax, "sexpr-make-anonymous-method"},
  {"sexpr-define-class-parents", &module_info_x8rSsyntax, "sexpr-define-class-parents"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"sexpr-prop-init", &module_info_x8rSsyntax, "sexpr-prop-init"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"if", &module_info_gooSboot, "if"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"neg", &module_info_gooSmath, "neg"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"eval", &module_info_x8rSsyntax, "eval"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"$sexpr-define-function-tag", &module_info_x8rSsyntax, "$sexpr-define-function-tag"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"round", &module_info_gooSmath, "round"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"$sexpr-method-tag", &module_info_x8rSsyntax, "$sexpr-method-tag"},
  {"<", &module_info_gooSmag, "<"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"sexpr-operator", &module_info_x8rSsyntax, "sexpr-operator"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"sexpr-monitor-expand", &module_info_x8rSsyntax, "sexpr-monitor-expand"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"sexpr-function-definition-variable", &module_info_x8rSsyntax, "sexpr-function-definition-variable"},
  {"min", &module_info_gooSmag, "min"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"into", &module_info_gooScolsScol, "into"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"as", &module_info_gooStypes, "as"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"dependency-empty?", &module_info_x8rSdependency, "dependency-empty?"},
  {"loc", &module_info_gooSboot, "loc"},
  {"dependency-or", &module_info_x8rSdependency, "dependency-or"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"sexpr-isa-init-values", &module_info_x8rSsyntax, "sexpr-isa-init-values"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"$sexpr-let-tag", &module_info_x8rSsyntax, "$sexpr-let-tag"},
  {"not", &module_info_gooSboot, "not"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"$sexpr-unwind-protect-tag", &module_info_x8rSsyntax, "$sexpr-unwind-protect-tag"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"$parse-dependencies", &module_info_x8rSdependency, "$parse-dependencies"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"string-join", &module_info_gooScolsSstr, "string-join"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"try", &module_info_gooSboot, "try"},
  {"dp", &module_info_gooSboot, "dp"},
  {"get", &module_info_gooSioSport, "get"},
  {"always", &module_info_gooSruntime, "always"},
  {"abs", &module_info_gooSmath, "abs"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"=", &module_info_gooSmath, "="},
  {"cos", &module_info_gooSmath, "cos"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"sexpr-operands", &module_info_x8rSsyntax, "sexpr-operands"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"sexpr-unquote?", &module_info_x8rSsyntax, "sexpr-unquote?"},
  {"close", &module_info_gooSioSport, "close"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"sexpr-syntax-if-else", &module_info_x8rSsyntax, "sexpr-syntax-if-else"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"put", &module_info_gooSioSport, "put"},
  {"do", &module_info_gooSmacros, "do"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"sexpr-method-body", &module_info_x8rSsyntax, "sexpr-method-body"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"asin", &module_info_gooSmath, "asin"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"$all-dependency-types", &module_info_x8rSdependency, "$all-dependency-types"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"+", &module_info_gooSmath, "+"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"tab-test", &module_info_gooScolsStab, "tab-test"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"$sexpr-prop-tag", &module_info_x8rSsyntax, "$sexpr-prop-tag"},
  {"%str", &module_info_gooSboot, "%str"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"~", &module_info_gooSmath, "~"},
  {"log-dependency", &module_info_x8rSdependency, "log-dependency"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"$permanent-hash-state", &module_info_gooScolsStab, "$permanent-hash-state"},
  {"df", &module_info_gooSboot, "df"},
  {"let", &module_info_gooSboot, "let"},
  {"for", &module_info_gooSmacros, "for"},
  {"even?", &module_info_gooSmath, "even?"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"$sexpr-if-tag", &module_info_x8rSsyntax, "$sexpr-if-tag"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"isa", &module_info_gooSboot, "isa"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"dv", &module_info_gooSboot, "dv"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {">=", &module_info_gooSmag, ">="},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"$sexpr-locals-tag", &module_info_x8rSsyntax, "$sexpr-locals-tag"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"$sexpr-def-tag", &module_info_x8rSsyntax, "$sexpr-def-tag"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"sexpr-prop-owner", &module_info_x8rSsyntax, "sexpr-prop-owner"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"dg", &module_info_gooSboot, "dg"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"floor", &module_info_gooSmath, "floor"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"sexpr-def-variable", &module_info_x8rSsyntax, "sexpr-def-variable"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%su", &module_info_gooSboot, "%su"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"map", &module_info_gooSmacros, "map"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"$sexpr-begin-tag", &module_info_x8rSsyntax, "$sexpr-begin-tag"},
  {"&", &module_info_gooSmath, "&"},
  {"invalidate-dependent", &module_info_x8rSdependency, "invalidate-dependent"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"sexpr-make-begin", &module_info_x8rSsyntax, "sexpr-make-begin"},
  {"detach-dependent", &module_info_x8rSdependency, "detach-dependent"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"sexpr-signature-parameters", &module_info_x8rSsyntax, "sexpr-signature-parameters"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"@+", &module_info_gooSboot, "@+"},
  {"string-split", &module_info_gooScolsSstr, "string-split"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"sexpr-prop-type", &module_info_x8rSsyntax, "sexpr-prop-type"},
  {"sexpr-prop-name", &module_info_x8rSsyntax, "sexpr-prop-name"},
  {"nil", &module_info_gooSboot, "nil"},
  {"ds", &module_info_gooSboot, "ds"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"$sexpr-iterate-tag", &module_info_x8rSsyntax, "$sexpr-iterate-tag"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"atan", &module_info_gooSmath, "atan"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"op", &module_info_gooSmacros, "op"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"$sexpr-define-tag", &module_info_x8rSsyntax, "$sexpr-define-tag"},
  {"$sexpr-quote-tag", &module_info_x8rSsyntax, "$sexpr-quote-tag"},
  {"dc", &module_info_gooSboot, "dc"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"sexpr-if-test", &module_info_x8rSsyntax, "sexpr-if-test"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_x8rSsyntax, "sexpr-unwind-protect-cleanup-forms"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"export", &module_info_gooSboot, "export"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"new", &module_info_gooSboot, "new"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"msg", &module_info_gooSioSwrite, "msg"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"$sexpr-define-syntax-tag", &module_info_x8rSsyntax, "$sexpr-define-syntax-tag"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"sexpr-let->combination", &module_info_x8rSsyntax, "sexpr-let->combination"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"in", &module_info_gooSioSport, "in"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"sexpr-sequence->begin", &module_info_x8rSsyntax, "sexpr-sequence->begin"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"$sexpr-monitor-tag", &module_info_x8rSsyntax, "$sexpr-monitor-tag"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"opf", &module_info_gooSmacros, "opf"},
  {">>", &module_info_gooSmath, ">>"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"sexpr-function-signature", &module_info_x8rSsyntax, "sexpr-function-signature"},
  {"^", &module_info_gooSmath, "^"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"open", &module_info_gooSioSport, "open"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"dependency-and", &module_info_x8rSdependency, "dependency-and"},
  {"<assocs>", &module_info_gooScolsSassoc, "<assocs>"},
  {"$value-optimization-dependency", &module_info_x8rSdependency, "$value-optimization-dependency"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"<dependable>", &module_info_x8rSdependency, "<dependable>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"string-repeat", &module_info_gooScolsSstr, "string-repeat"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"del", &module_info_gooScolsScol, "del"},
  {"assocs-test-setter", &module_info_gooScolsSassoc, "assocs-test-setter"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"acos", &module_info_gooSmath, "acos"},
  {"sexpr-function-body", &module_info_x8rSsyntax, "sexpr-function-body"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fin", &module_info_gooSboot, "fin"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"|", &module_info_gooSmath, "|"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"sexpr-syntax-definition-variable", &module_info_x8rSsyntax, "sexpr-syntax-definition-variable"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"out", &module_info_gooSioSport, "out"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"set", &module_info_gooSboot, "set"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"fun", &module_info_gooSboot, "fun"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"sexpr-expand-backquote", &module_info_x8rSsyntax, "sexpr-expand-backquote"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"find-dependency", &module_info_x8rSdependency, "find-dependency"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"sexpr-prop-init?", &module_info_x8rSsyntax, "sexpr-prop-init?"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"or", &module_info_gooSmacros, "or"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"assignment-reference", &Yx8rSastYassignment_reference},
  {"install-interpreter-hacks", &Yx8rSastYinstall_interpreter_hacks},
  {"binding-locative", &Yx8rSastYbinding_locative},
  {"constant-value", &Yx8rSastYconstant_value},
  {"environment-allows-foreign-names?", &Yx8rSastYenvironment_allows_foreign_namesQ},
  {"init-environment-for-eval", &Yx8rSastYinit_environment_for_eval},
  {"<constant>", &Yx8rSastYLconstantG},
  {"transaction-implemented-bindings-setter", &Yx8rSastYtransaction_implemented_bindings_setter},
  {"fab-static-global-environment", &Yx8rSastYfab_static_global_environment},
  {"assignment-reference-setter", &Yx8rSastYassignment_reference_setter},
  {"module-exports", &Yx8rSastYmodule_exports},
  {"locals-bindings-setter", &Yx8rSastYlocals_bindings_setter},
  {"special-syntax-if", &Yx8rSastYspecial_syntax_if},
  {"$functions-empty", &Yx8rSastYDfunctions_empty},
  {"$sexpr-compile-time-tag", &Yx8rSastYDsexpr_compile_time_tag},
  {"<global-reference>", &Yx8rSastYLglobal_referenceG},
  {"special-unwind-protect", &Yx8rSastYspecial_unwind_protect},
  {"frame-bindings", &Yx8rSastYframe_bindings},
  {"$sexpr-optionals-tag", &Yx8rSastYDsexpr_optionals_tag},
  {"<ast-signature>", &Yx8rSastYLast_signatureG},
  {"free-environment", &Yx8rSastYfree_environment},
  {"find-syntax-environment", &Yx8rSastYfind_syntax_environment},
  {"def-list", NULL},
  {"ast-<bot>", &Yx8rSastYast_LbotG},
  {"bound?-reference-setter", &Yx8rSastYboundQ_reference_setter},
  {"alternative-condition-setter", &Yx8rSastYalternative_condition_setter},
  {"objectify-primitive-definition", &Yx8rSastYobjectify_primitive_definition},
  {"locals-functions-setter", &Yx8rSastYlocals_functions_setter},
  {"find-static-global-environment", &Yx8rSastYfind_static_global_environment},
  {"locals-body-setter", &Yx8rSastYlocals_body_setter},
  {"unwind-protect-cleanup-thunk", &Yx8rSastYunwind_protect_cleanup_thunk},
  {"binding-dotted?", &Yx8rSastYbinding_dottedQ},
  {"module-exports-setter", &Yx8rSastYmodule_exports_setter},
  {"application-next-methods-setter", &Yx8rSastYapplication_next_methods_setter},
  {"objectify-method-definition", &Yx8rSastYobjectify_method_definition},
  {"function-signature-setter", &Yx8rSastYfunction_signature_setter},
  {"objectify-function", &Yx8rSastYobjectify_function},
  {"$goo-boot-module-name", &Yx8rSastYDgoo_boot_module_name},
  {"r-extend*", &Yx8rSastYr_extendT},
  {"sequentialize", &Yx8rSastYsequentialize},
  {"fab-syntax-environment", &Yx8rSastYfab_syntax_environment},
  {"export-binding!", &Yx8rSastYexport_bindingX},
  {"compile-time-program", &Yx8rSastYcompile_time_program},
  {"objectify-syntax-definition", &Yx8rSastYobjectify_syntax_definition},
  {"objectify-function-definition", &Yx8rSastYobjectify_function_definition},
  {"init-g2c-regular-environment", &Yx8rSastYinit_g2c_regular_environment},
  {"objectify-sequential", &Yx8rSastYobjectify_sequential},
  {"objectify-function-source", &Yx8rSastYobjectify_function_source},
  {"binding-value", &Yx8rSastYbinding_value},
  {"<fab-list>", &Yx8rSastYLfab_listG},
  {"process-module-data", &Yx8rSastYprocess_module_data},
  {"*runtime-module-loader*", &Yx8rSastYTruntime_module_loaderT},
  {"module-loader-stack-setter", &Yx8rSastYmodule_loader_stack_setter},
  {"reloader-do-runtime-binding", &Yx8rSastYreloader_do_runtime_binding},
  {"objectify-use/export-module", &Yx8rSastYobjectify_useSexport_module},
  {"init-runtime", &Yx8rSastYinit_runtime},
  {"objectify-assignment-using", &Yx8rSastYobjectify_assignment_using},
  {"magic-bindings", &Yx8rSastYmagic_bindings},
  {"binding-inferred-type-setter", &Yx8rSastYbinding_inferred_type_setter},
  {"special-define-primitive", &Yx8rSastYspecial_define_primitive},
  {"unchecked-runtime-environment", &Yx8rSastYunchecked_runtime_environment},
  {"runtime-core-environment", &Yx8rSastYruntime_core_environment},
  {"reference-binding", &Yx8rSastYreference_binding},
  {"<runtime-module-loader>", &Yx8rSastYLruntime_module_loaderG},
  {"special-bind-exit", &Yx8rSastYspecial_bind_exit},
  {"function-self-recursive?-setter", &Yx8rSastYfunction_self_recursiveQ_setter},
  {"fix-let-arguments-setter", &Yx8rSastYfix_let_arguments_setter},
  {"macro-expander", &Yx8rSastYmacro_expander},
  {"function-kind", &Yx8rSastYfunction_kind},
  {"ast-evaluate", &Yx8rSastYast_evaluate},
  {"reference-frame-number", &Yx8rSastYreference_frame_number},
  {"signature-names-setter", &Yx8rSastYsignature_names_setter},
  {"module-name-to-relpath", &Yx8rSastYmodule_name_to_relpath},
  {"locals-body", &Yx8rSastYlocals_body},
  {"<ast-primitive-definition>", &Yx8rSastYLast_primitive_definitionG},
  {"pairize", &Yx8rSastYpairize},
  {"module-loader-module-type", &Yx8rSastYmodule_loader_module_type},
  {"function-self-recursive?", &Yx8rSastYfunction_self_recursiveQ},
  {"function-source", &Yx8rSastYfunction_source},
  {"register-module!", &Yx8rSastYregister_moduleX},
  {"fix-let-arguments", &Yx8rSastYfix_let_arguments},
  {"<local-assignment>", &Yx8rSastYLlocal_assignmentG},
  {"signature-names", &Yx8rSastYsignature_names},
  {"binding-type-setter", &Yx8rSastYbinding_type_setter},
  {"transaction-dependents-setter", &Yx8rSastYtransaction_dependents_setter},
  {"<module-binding-reference>", &Yx8rSastYLmodule_binding_referenceG},
  {"set-module-environments", &Yx8rSastYset_module_environments},
  {"fix-let-types-setter", &Yx8rSastYfix_let_types_setter},
  {"do-module-loader-modules", &Yx8rSastYdo_module_loader_modules},
  {"*current-dependent*", &Yx8rSastYTcurrent_dependentT},
  {"binding-module-name-setter", &Yx8rSastYbinding_module_name_setter},
  {"binding-name", &Yx8rSastYbinding_name},
  {"<alternative>", &Yx8rSastYLalternativeG},
  {"function-registers-setter", &Yx8rSastYfunction_registers_setter},
  {"function-data-refs", &Yx8rSastYfunction_data_refs},
  {"reload-macros", &Yx8rSastYreload_macros},
  {"<fix-let>", &Yx8rSastYLfix_letG},
  {"<runtime-assignment>", &Yx8rSastYLruntime_assignmentG},
  {"function-display-name", &Yx8rSastYfunction_display_name},
  {"<ast-generic>", &Yx8rSastYLast_genericG},
  {"expand-bind-list", &Yx8rSastYexpand_bind_list},
  {"alternative-consequent", &Yx8rSastYalternative_consequent},
  {"load-and-register-module", &Yx8rSastYload_and_register_module},
  {"special-compile-time-also", &Yx8rSastYspecial_compile_time_also},
  {"module-data-processed?", &Yx8rSastYmodule_data_processedQ},
  {"function-registers", &Yx8rSastYfunction_registers},
  {"unwind-protect-protected-thunk-setter", &Yx8rSastYunwind_protect_protected_thunk_setter},
  {"<binding-name>", &Yx8rSastYLbinding_nameG},
  {"global-box-value", &Yx8rSastYglobal_box_value},
  {"objectify-use-module", &Yx8rSastYobjectify_use_module},
  {"bind-exit-main-fun-setter", &Yx8rSastYbind_exit_main_fun_setter},
  {"objectify-binding", &Yx8rSastYobjectify_binding},
  {"*record-source?*", &Yx8rSastYTrecord_sourceQT},
  {"program-register", &Yx8rSastYprogram_register},
  {"<immediate-constant>", &Yx8rSastYLimmediate_constantG},
  {"update-binding-kind", &Yx8rSastYupdate_binding_kind},
  {"application-binding-setter", &Yx8rSastYapplication_binding_setter},
  {"special-isa", &Yx8rSastYspecial_isa},
  {"application-function-setter", &Yx8rSastYapplication_function_setter},
  {"*magic-bindings*", &Yx8rSastYTmagic_bindingsT},
  {"$sexpr-use-module-tag", &Yx8rSastYDsexpr_use_module_tag},
  {"function-nary?", &Yx8rSastYfunction_naryQ},
  {"default-type", &Yx8rSastYdefault_type},
  {"module-runtime-data-setter", &Yx8rSastYmodule_runtime_data_setter},
  {"<bound?>", &Yx8rSastYLboundQG},
  {"objectify-free-global-reference", &Yx8rSastYobjectify_free_global_reference},
  {"$sexpr-%raw-tag", &Yx8rSastYDsexpr_Praw_tag},
  {"binding-free?", &Yx8rSastYbinding_freeQ},
  {"assignment-binding", &Yx8rSastYassignment_binding},
  {"---main-5---", NULL},
  {"special-define-method", &Yx8rSastYspecial_define_method},
  {"locals-bindings", &Yx8rSastYlocals_bindings},
  {"reloader-do-export", &Yx8rSastYreloader_do_export},
  {"binding-global-box-setter", &Yx8rSastYbinding_global_box_setter},
  {"function-index", &Yx8rSastYfunction_index},
  {"module-syntax-environment-setter", &Yx8rSastYmodule_syntax_environment_setter},
  {"objectify-application", &Yx8rSastYobjectify_application},
  {"<passive-program>", &Yx8rSastYLpassive_programG},
  {"<static-empty-environment>", &Yx8rSastYLstatic_empty_environmentG},
  {"fab-subset-environment", &Yx8rSastYfab_subset_environment},
  {"ensure-module-data", &Yx8rSastYensure_module_data},
  {"application-binding", &Yx8rSastYapplication_binding},
  {"runtime-environment", &Yx8rSastYruntime_environment},
  {"environment-allows-foreign-names?-setter", &Yx8rSastYenvironment_allows_foreign_namesQ_setter},
  {"import-global!", &Yx8rSastYimport_globalX},
  {"module-syntax-environment", &Yx8rSastYmodule_syntax_environment},
  {"module-binding", &Yx8rSastYmodule_binding},
  {"$sexpr-bound?-tag", &Yx8rSastYDsexpr_boundQ_tag},
  {"function-debug-name-setter", &Yx8rSastYfunction_debug_name_setter},
  {"<ast-generic-definition>", &Yx8rSastYLast_generic_definitionG},
  {"signature-specs-setter", &Yx8rSastYsignature_specs_setter},
  {"signature-arity", &Yx8rSastYsignature_arity},
  {"binding-dynamic-extent?-setter", &Yx8rSastYbinding_dynamic_extentQ_setter},
  {"objectify", &Yx8rSastYobjectify},
  {"objectify-unwind-protect", &Yx8rSastYobjectify_unwind_protect},
  {"module-transaction", &Yx8rSastYmodule_transaction},
  {"<definition>", &Yx8rSastYLdefinitionG},
  {"signature-nary?-setter", &Yx8rSastYsignature_naryQ_setter},
  {"<regular-application>", &Yx8rSastYLregular_applicationG},
  {"signature-specs", &Yx8rSastYsignature_specs},
  {"process-nary-closed-application", &Yx8rSastYprocess_nary_closed_application},
  {"<runtime-reference>", &Yx8rSastYLruntime_referenceG},
  {"init-g2c-boot-environment", &Yx8rSastYinit_g2c_boot_environment},
  {"application-tail?-setter", &Yx8rSastYapplication_tailQ_setter},
  {"<locals>", &Yx8rSastYLlocalsG},
  {"report-undefined-global-bindings", &Yx8rSastYreport_undefined_global_bindings},
  {"compile-time-program-setter", &Yx8rSastYcompile_time_program_setter},
  {"do-named-static-global-bindings", &Yx8rSastYdo_named_static_global_bindings},
  {"functions", &Yx8rSastYfunctions},
  {"<free-environment>", &Yx8rSastYLfree_environmentG},
  {"signature-nary?", &Yx8rSastYsignature_naryQ},
  {"special-use/export-module", &Yx8rSastYspecial_useSexport_module},
  {"objectify-with-subtransaction", &Yx8rSastYobjectify_with_subtransaction},
  {"---main-7---", NULL},
  {"fab-list", &Yx8rSastYfab_list},
  {"objectify-raw", &Yx8rSastYobjectify_raw},
  {"unwind-protect-cleanup-thunk-setter", &Yx8rSastYunwind_protect_cleanup_thunk_setter},
  {"alternative-alternant", &Yx8rSastYalternative_alternant},
  {"<global-box>", &Yx8rSastYLglobal_boxG},
  {"def-programs", NULL},
  {"<real-reference>", &Yx8rSastYLreal_referenceG},
  {"objectify-locals", &Yx8rSastYobjectify_locals},
  {"module-target-environment", &Yx8rSastYmodule_target_environment},
  {"transaction-register-implemented-binding", &Yx8rSastYtransaction_register_implemented_binding},
  {"special-compile-time", &Yx8rSastYspecial_compile_time},
  {"objectify-quotation", &Yx8rSastYobjectify_quotation},
  {"module-name", &Yx8rSastYmodule_name},
  {"<ast-function-definition>", &Yx8rSastYLast_function_definitionG},
  {"expand-bind-element", &Yx8rSastYexpand_bind_element},
  {"program-type", &Yx8rSastYprogram_type},
  {"probe-module", &Yx8rSastYprobe_module},
  {"objectify-bound?", &Yx8rSastYobjectify_boundQ},
  {"monitor-info-setter", &Yx8rSastYmonitor_info_setter},
  {"env-object-name", &Yx8rSastYenv_object_name},
  {"function-signature", &Yx8rSastYfunction_signature},
  {"<assignment>", &Yx8rSastYLassignmentG},
  {"unwind-protect-protected-thunk", &Yx8rSastYunwind_protect_protected_thunk},
  {"alternative-consequent-setter", &Yx8rSastYalternative_consequent_setter},
  {"module-loader-modules-setter", &Yx8rSastYmodule_loader_modules_setter},
  {"<predefined-reference>", &Yx8rSastYLpredefined_referenceG},
  {"---main-4---", NULL},
  {"$sexpr-use/export-module-tag", &Yx8rSastYDsexpr_useSexport_module_tag},
  {"*macro-tracing?*", &Yx8rSastYTmacro_tracingQT},
  {"application-next-methods", &Yx8rSastYapplication_next_methods},
  {"special-quote", &Yx8rSastYspecial_quote},
  {"$sexpr-optionals-type-name", &Yx8rSastYDsexpr_optionals_type_name},
  {"insert-globals!", &Yx8rSastYinsert_globalsX},
  {"special-begin", &Yx8rSastYspecial_begin},
  {"<static-local-environment>", &Yx8rSastYLstatic_local_environmentG},
  {"install-magic-bindings", &Yx8rSastYinstall_magic_bindings},
  {"merge-transactions!", &Yx8rSastYmerge_transactionsX},
  {"load-module", &Yx8rSastYload_module},
  {"reloader-do-create-module", &Yx8rSastYreloader_do_create_module},
  {"special-prop", &Yx8rSastYspecial_prop},
  {"function-specs", &Yx8rSastYfunction_specs},
  {"constant-index", &Yx8rSastYconstant_index},
  {"<local-binding>", &Yx8rSastYLlocal_bindingG},
  {"maybe-log-dependency", &Yx8rSastYmaybe_log_dependency},
  {"environment-module-setter", &Yx8rSastYenvironment_module_setter},
  {"function-binding", &Yx8rSastYfunction_binding},
  {"<module>", &Yx8rSastYLmoduleG},
  {"---main-3---", NULL},
  {"fix-let-bindings", &Yx8rSastYfix_let_bindings},
  {"<compile-time>", &Yx8rSastYLcompile_timeG},
  {"remove-module-internal!", &Yx8rSastYremove_module_internalX},
  {"reloader-do-other-binding", &Yx8rSastYreloader_do_other_binding},
  {"special-locals", &Yx8rSastYspecial_locals},
  {"as-lst", &Yx8rSastYas_lst},
  {"reference-binding-setter", &Yx8rSastYreference_binding_setter},
  {"$empty-static-environment", &Yx8rSastYDempty_static_environment},
  {"---main-8---", NULL},
  {"environment-module", &Yx8rSastYenvironment_module},
  {"<binding>", &Yx8rSastYLbindingG},
  {"module-loader-stack", &Yx8rSastYmodule_loader_stack},
  {"program-register-setter", &Yx8rSastYprogram_register_setter},
  {"reference-frame-offset-setter", &Yx8rSastYreference_frame_offset_setter},
  {"<programs>", &Yx8rSastYLprogramsG},
  {"%module-exports-setter", &Yx8rSastYPmodule_exports_setter},
  {"application-tail?", &Yx8rSastYapplication_tailQ},
  {"special-quasiquote", &Yx8rSastYspecial_quasiquote},
  {"module-loader-modules", &Yx8rSastYmodule_loader_modules},
  {"with-subtransaction", NULL},
  {"---main-0---", NULL},
  {"<monitor>", &Yx8rSastYLmonitorG},
  {"application-arguments", &Yx8rSastYapplication_arguments},
  {"environment-next", &Yx8rSastYenvironment_next},
  {"binding-mutable?-setter", &Yx8rSastYbinding_mutableQ_setter},
  {"transaction-empty?", &Yx8rSastYtransaction_emptyQ},
  {"register-magic-binding", &Yx8rSastYregister_magic_binding},
  {"signature-arity-setter", &Yx8rSastYsignature_arity_setter},
  {"binding-handler", &Yx8rSastYbinding_handler},
  {"define-magic-binding", NULL},
  {"special-monitor", &Yx8rSastYspecial_monitor},
  {"module-data-processed?-setter", &Yx8rSastYmodule_data_processedQ_setter},
  {"install-initial-bindings", &Yx8rSastYinstall_initial_bindings},
  {"<module-binding>", &Yx8rSastYLmodule_bindingG},
  {"binding-dynamic-extent?", &Yx8rSastYbinding_dynamic_extentQ},
  {"function-debug-name", &Yx8rSastYfunction_debug_name},
  {"environment-next-setter", &Yx8rSastYenvironment_next_setter},
  {"bind-exit-main-fun", &Yx8rSastYbind_exit_main_fun},
  {"---main-9---", NULL},
  {"<application>", &Yx8rSastYLapplicationG},
  {"assignment-binding-setter", &Yx8rSastYassignment_binding_setter},
  {"binding-locative-setter", &Yx8rSastYbinding_locative_setter},
  {"$sexpr-define-static-syntax-tag", &Yx8rSastYDsexpr_define_static_syntax_tag},
  {"binding-global-box", &Yx8rSastYbinding_global_box},
  {"function-binding-setter", &Yx8rSastYfunction_binding_setter},
  {"application-function", &Yx8rSastYapplication_function},
  {"binding-kind", &Yx8rSastYbinding_kind},
  {"function-temporaries-setter", &Yx8rSastYfunction_temporaries_setter},
  {"syntax-environment-excluded-bindings", &Yx8rSastYsyntax_environment_excluded_bindings},
  {"objectify-error", &Yx8rSastYobjectify_error},
  {"special-define-static-syntax", &Yx8rSastYspecial_define_static_syntax},
  {"objectify-generic-definition", &Yx8rSastYobjectify_generic_definition},
  {"$free-environment-empty", &Yx8rSastYDfree_environment_empty},
  {"ast-define-binding", &Yx8rSastYast_define_binding},
  {"monitor-main-thunk", &Yx8rSastYmonitor_main_thunk},
  {"<ast-primitive>", &Yx8rSastYLast_primitiveG},
  {"environment-module-loader", &Yx8rSastYenvironment_module_loader},
  {"monitor-type-setter", &Yx8rSastYmonitor_type_setter},
  {"do-static-global-bindings", &Yx8rSastYdo_static_global_bindings},
  {"transaction-implemented-bindings", &Yx8rSastYtransaction_implemented_bindings},
  {"fix-let-bindings-setter", &Yx8rSastYfix_let_bindings_setter},
  {"function-temporaries", &Yx8rSastYfunction_temporaries},
  {"special-define-syntax", &Yx8rSastYspecial_define_syntax},
  {"fix-let-body-setter", &Yx8rSastYfix_let_body_setter},
  {"monitor-info", &Yx8rSastYmonitor_info},
  {"<transaction>", &Yx8rSastYLtransactionG},
  {"<module-loader>", &Yx8rSastYLmodule_loaderG},
  {"monitor-test-setter", &Yx8rSastYmonitor_test_setter},
  {"<ast-macro-definition>", &Yx8rSastYLast_macro_definitionG},
  {"special-define-function", &Yx8rSastYspecial_define_function},
  {"call-with-subtransaction", &Yx8rSastYcall_with_subtransaction},
  {"constant-index-setter", &Yx8rSastYconstant_index_setter},
  {"assignment-form-setter", &Yx8rSastYassignment_form_setter},
  {"special-let", &Yx8rSastYspecial_let},
  {"module-runtime-data", &Yx8rSastYmodule_runtime_data},
  {"environment-uses-modules-setter", &Yx8rSastYenvironment_uses_modules_setter},
  {"convert2arguments", &Yx8rSastYconvert2arguments},
  {"objectify-export", &Yx8rSastYobjectify_export},
  {"insert-global!", &Yx8rSastYinsert_globalX},
  {"special-method", &Yx8rSastYspecial_method},
  {"$sexpr-define-primitive-tag", &Yx8rSastYDsexpr_define_primitive_tag},
  {"program-type-setter", &Yx8rSastYprogram_type_setter},
  {"monitor-handler", &Yx8rSastYmonitor_handler},
  {"signature-value-setter", &Yx8rSastYsignature_value_setter},
  {"fix-let-types", &Yx8rSastYfix_let_types},
  {"special-use-module", &Yx8rSastYspecial_use_module},
  {"function-value", &Yx8rSastYfunction_value},
  {"find-binding", &Yx8rSastYfind_binding},
  {"<global-assignment>", &Yx8rSastYLglobal_assignmentG},
  {"arguments", &Yx8rSastYarguments},
  {"binding-native-to?", &Yx8rSastYbinding_native_toQ},
  {"runtime-module", &Yx8rSastYruntime_module},
  {"<computed-program>", &Yx8rSastYLcomputed_programG},
  {"binding-index", &Yx8rSastYbinding_index},
  {"*now-rt-env*", &Yx8rSastYTnow_rt_envT},
  {"environment-bindings-setter", &Yx8rSastYenvironment_bindings_setter},
  {"$sexpr-compile-time-also-tag", &Yx8rSastYDsexpr_compile_time_also_tag},
  {"monitor-main-thunk-setter", &Yx8rSastYmonitor_main_thunk_setter},
  {"reload-modules", &Yx8rSastYreload_modules},
  {"$fab-list-empty", &Yx8rSastYDfab_list_empty},
  {"objectify-assignment", &Yx8rSastYobjectify_assignment},
  {"function-free", &Yx8rSastYfunction_free},
  {"special-bound?", &Yx8rSastYspecial_boundQ},
  {"function-free-setter", &Yx8rSastYfunction_free_setter},
  {"load-in", &Yx8rSastYload_in},
  {"$arguments-empty", &Yx8rSastYDarguments_empty},
  {"<static-environment>", &Yx8rSastYLstatic_environmentG},
  {"binding-kind-setter", &Yx8rSastYbinding_kind_setter},
  {"binding-info", &Yx8rSastYbinding_info},
  {"function-body", &Yx8rSastYfunction_body},
  {"special-if", &Yx8rSastYspecial_if},
  {"<program>", &Yx8rSastYLprogramG},
  {"%module-exports", &Yx8rSastYPmodule_exports},
  {"binding-info-setter", &Yx8rSastYbinding_info_setter},
  {"environment-uses-modules", &Yx8rSastYenvironment_uses_modules},
  {"objectify-symbol", &Yx8rSastYobjectify_symbol},
  {"<ast-function>", &Yx8rSastYLast_functionG},
  {"signature-bindings-setter", &Yx8rSastYsignature_bindings_setter},
  {"reference-called-function?", &Yx8rSastYreference_called_functionQ},
  {"constant-value-setter", &Yx8rSastYconstant_value_setter},
  {"signature-value", &Yx8rSastYsignature_value},
  {"binding-mutable?", &Yx8rSastYbinding_mutableQ},
  {"binding-reference-class", &Yx8rSastYbinding_reference_class},
  {"---main-6---", NULL},
  {"binding-index-setter", &Yx8rSastYbinding_index_setter},
  {"$sequential-empty", &Yx8rSastYDsequential_empty},
  {"runtime-module-loader", &Yx8rSastYruntime_module_loader},
  {"application-known?-setter", &Yx8rSastYapplication_knownQ_setter},
  {"signature-bindings", &Yx8rSastYsignature_bindings},
  {"objectify-alternative", &Yx8rSastYobjectify_alternative},
  {"$sexpr-export-tag", &Yx8rSastYDsexpr_export_tag},
  {"bound?-reference", &Yx8rSastYboundQ_reference},
  {"compute-transitive-users", &Yx8rSastYcompute_transitive_users},
  {"<ast-method-definition>", &Yx8rSastYLast_method_definitionG},
  {"application-known?", &Yx8rSastYapplication_knownQ},
  {"init-ast", &Yx8rSastYinit_ast},
  {"reloader-do-use-module", &Yx8rSastYreloader_do_use_module},
  {"roll-back-transaction", &Yx8rSastYroll_back_transaction},
  {"objectify-monitor", &Yx8rSastYobjectify_monitor},
  {"with-dependent", NULL},
  {"function-body-setter", &Yx8rSastYfunction_body_setter},
  {"binding-module-name", &Yx8rSastYbinding_module_name},
  {"function-index-setter", &Yx8rSastYfunction_index_setter},
  {"binding-value-setter", &Yx8rSastYbinding_value_setter},
  {"objectify-foreign-reference", &Yx8rSastYobjectify_foreign_reference},
  {"expand-bind-list*", &Yx8rSastYexpand_bind_listT},
  {"<variable-definition>", &Yx8rSastYLvariable_definitionG},
  {"reference-frame-offset", &Yx8rSastYreference_frame_offset},
  {"<arguments>", &Yx8rSastYLargumentsG},
  {"binding-handler-setter", &Yx8rSastYbinding_handler_setter},
  {"environment-module-loader-setter", &Yx8rSastYenvironment_module_loader_setter},
  {"binding-type", &Yx8rSastYbinding_type},
  {"*current-subtransaction*", &Yx8rSastYTcurrent_subtransactionT},
  {"transaction-register-dependent", &Yx8rSastYtransaction_register_dependent},
  {"special-export", &Yx8rSastYspecial_export},
  {"objectify-compile-time", &Yx8rSastYobjectify_compile_time},
  {"<sequential>", &Yx8rSastYLsequentialG},
  {"ast-macro-expand", &Yx8rSastYast_macro_expand},
  {"transform-defs", &Yx8rSastYtransform_defs},
  {"compute-local-reference-offsets", &Yx8rSastYcompute_local_reference_offsets},
  {"binding-name-setter", &Yx8rSastYbinding_name_setter},
  {"<ast-method>", &Yx8rSastYLast_methodG},
  {"environment-bindings", &Yx8rSastYenvironment_bindings},
  {"module-transaction-setter", &Yx8rSastYmodule_transaction_setter},
  {"---main-2---", NULL},
  {"ftype", &Yx8rSastYftype},
  {"sequential", &Yx8rSastYsequential},
  {"function-bindings", &Yx8rSastYfunction_bindings},
  {"<ast-embodied-function>", &Yx8rSastYLast_embodied_functionG},
  {"process-closed-application", &Yx8rSastYprocess_closed_application},
  {"---main-1---", NULL},
  {"<static-global-environment>", &Yx8rSastYLstatic_global_environmentG},
  {"foreign-name?", &Yx8rSastYforeign_nameQ},
  {"special-set", &Yx8rSastYspecial_set},
  {"locals-functions", &Yx8rSastYlocals_functions},
  {"reference-frame-number-setter", &Yx8rSastYreference_frame_number_setter},
  {"<local-reference>", &Yx8rSastYLlocal_referenceG},
  {"binding-dotted?-setter", &Yx8rSastYbinding_dottedQ_setter},
  {"binding-free?-setter", &Yx8rSastYbinding_freeQ_setter},
  {"module-target-environment-setter", &Yx8rSastYmodule_target_environment_setter},
  {"expand-pattern", &Yx8rSastYexpand_pattern},
  {"special-define-generic", &Yx8rSastYspecial_define_generic},
  {"remove-modules-by-name!", &Yx8rSastYremove_modules_by_nameX},
  {"module-name-setter", &Yx8rSastYmodule_name_setter},
  {"<method-application>", &Yx8rSastYLmethod_applicationG},
  {"transaction-dependents", &Yx8rSastYtransaction_dependents},
  {"objectify-list", &Yx8rSastYobjectify_list},
  {"expand-syntax-if", &Yx8rSastYexpand_syntax_if},
  {"reloader-do-import", &Yx8rSastYreloader_do_import},
  {"application-arguments-setter", &Yx8rSastYapplication_arguments_setter},
  {"special-define-class", &Yx8rSastYspecial_define_class},
  {"function-source-setter", &Yx8rSastYfunction_source_setter},
  {"<predefined-application>", &Yx8rSastYLpredefined_applicationG},
  {"special-def", &Yx8rSastYspecial_def},
  {"objectify-bind-exit", &Yx8rSastYobjectify_bind_exit},
  {"special-define", &Yx8rSastYspecial_define},
  {"reference-called-function?-setter", &Yx8rSastYreference_called_functionQ_setter},
  {"find-environment-module", &Yx8rSastYfind_environment_module},
  {"function-data-refs-setter", &Yx8rSastYfunction_data_refs_setter},
  {"special-iterate", &Yx8rSastYspecial_iterate},
  {"assignment-form", &Yx8rSastYassignment_form},
  {"special-macro-expand", &Yx8rSastYspecial_macro_expand},
  {"monitor-test", &Yx8rSastYmonitor_test},
  {"objectify-definition", &Yx8rSastYobjectify_definition},
  {"<bind-exit>", &Yx8rSastYLbind_exitG},
  {"fab-g2c-module", &Yx8rSastYfab_g2c_module},
  {"global-box-value-setter", &Yx8rSastYglobal_box_value_setter},
  {"alternative-alternant-setter", &Yx8rSastYalternative_alternant_setter},
  {"special-%raw", &Yx8rSastYspecial_Praw},
  {"binding-inferred-type", &Yx8rSastYbinding_inferred_type},
  {"objectify-signature", &Yx8rSastYobjectify_signature},
  {"<functions>", &Yx8rSastYLfunctionsG},
  {"<reference>", &Yx8rSastYLreferenceG},
  {"alternative-condition", &Yx8rSastYalternative_condition},
  {"monitor-type", &Yx8rSastYmonitor_type},
  {"monitor-handler-setter", &Yx8rSastYmonitor_handler_setter},
  {"fix-let-body", &Yx8rSastYfix_let_body},
  {"<raw-constant>", &Yx8rSastYLraw_constantG},
  {"<unwind-protect>", &Yx8rSastYLunwind_protectG},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"fix-let-bindings", "fix-let-bindings"},
  {"assignment-reference", "assignment-reference"},
  {"objectify-signature", "objectify-signature"},
  {"binding-locative", "binding-locative"},
  {"constant-value", "constant-value"},
  {"<constant>", "<constant>"},
  {"<bind-exit>", "<bind-exit>"},
  {"module-exports", "module-exports"},
  {"locals-bindings-setter", "locals-bindings-setter"},
  {"<global-reference>", "<global-reference>"},
  {"function-free-setter", "function-free-setter"},
  {"<ast-signature>", "<ast-signature>"},
  {"free-environment", "free-environment"},
  {"def-list", "def-list"},
  {"locals-functions-setter", "locals-functions-setter"},
  {"signature-value", "signature-value"},
  {"program-type-setter", "program-type-setter"},
  {"binding-dotted?", "binding-dotted?"},
  {"function-signature-setter", "function-signature-setter"},
  {"$goo-boot-module-name", "$goo-boot-module-name"},
  {"compile-time-program", "compile-time-program"},
  {"binding-value", "binding-value"},
  {"<fab-list>", "<fab-list>"},
  {"binding-inferred-type-setter", "binding-inferred-type-setter"},
  {"reference-called-function?-setter", "reference-called-function?-setter"},
  {"signature-specs-setter", "signature-specs-setter"},
  {"reference-binding", "reference-binding"},
  {"function-free", "function-free"},
  {"signature-names-setter", "signature-names-setter"},
  {"locals-body", "locals-body"},
  {"<ast-primitive-definition>", "<ast-primitive-definition>"},
  {"<local-assignment>", "<local-assignment>"},
  {"signature-names", "signature-names"},
  {"function-self-recursive?-setter", "function-self-recursive?-setter"},
  {"binding-type-setter", "binding-type-setter"},
  {"<module-binding-reference>", "<module-binding-reference>"},
  {"binding-module-name", "binding-module-name"},
  {"<alternative>", "<alternative>"},
  {"function-registers-setter", "function-registers-setter"},
  {"objectify-quotation", "objectify-quotation"},
  {"module-target-environment", "module-target-environment"},
  {"<ast-generic>", "<ast-generic>"},
  {"function-self-recursive?", "function-self-recursive?"},
  {"alternative-consequent", "alternative-consequent"},
  {"function-registers", "function-registers"},
  {"global-box-value", "global-box-value"},
  {"remove-modules-by-name!", "remove-modules-by-name!"},
  {"program-register", "program-register"},
  {"<immediate-constant>", "<immediate-constant>"},
  {"sequentialize", "sequentialize"},
  {"function-nary?", "function-nary?"},
  {"<arguments>", "<arguments>"},
  {"module-loader-module-type", "module-loader-module-type"},
  {"assignment-binding", "assignment-binding"},
  {"locals-bindings", "locals-bindings"},
  {"binding-global-box-setter", "binding-global-box-setter"},
  {"init-environment-for-eval", "init-environment-for-eval"},
  {"<passive-program>", "<passive-program>"},
  {"function-body-setter", "function-body-setter"},
  {"application-binding", "application-binding"},
  {"module-binding", "module-binding"},
  {"environment-uses-modules", "environment-uses-modules"},
  {"function-debug-name-setter", "function-debug-name-setter"},
  {"<module>", "<module>"},
  {"binding-dynamic-extent?-setter", "binding-dynamic-extent?-setter"},
  {"<definition>", "<definition>"},
  {"signature-nary?-setter", "signature-nary?-setter"},
  {"<regular-application>", "<regular-application>"},
  {"fix-let-arguments-setter", "fix-let-arguments-setter"},
  {"signature-specs", "signature-specs"},
  {"<runtime-reference>", "<runtime-reference>"},
  {"<locals>", "<locals>"},
  {"<computed-program>", "<computed-program>"},
  {"report-undefined-global-bindings", "report-undefined-global-bindings"},
  {"do-named-static-global-bindings", "do-named-static-global-bindings"},
  {"<free-environment>", "<free-environment>"},
  {"signature-nary?", "signature-nary?"},
  {"objectify-with-subtransaction", "objectify-with-subtransaction"},
  {"ast-evaluate", "ast-evaluate"},
  {"alternative-alternant", "alternative-alternant"},
  {"<global-box>", "<global-box>"},
  {"function-data-refs-setter", "function-data-refs-setter"},
  {"def-programs", "def-programs"},
  {"<real-reference>", "<real-reference>"},
  {"unwind-protect-cleanup-thunk", "unwind-protect-cleanup-thunk"},
  {"module-name", "module-name"},
  {"probe-module", "probe-module"},
  {"find-environment-module", "find-environment-module"},
  {"env-object-name", "env-object-name"},
  {"function-signature", "function-signature"},
  {"<assignment>", "<assignment>"},
  {"unwind-protect-protected-thunk", "unwind-protect-protected-thunk"},
  {"as-lst", "as-lst"},
  {"unchecked-runtime-environment", "unchecked-runtime-environment"},
  {"load-module", "load-module"},
  {"constant-index", "constant-index"},
  {"<local-binding>", "<local-binding>"},
  {"function-binding", "function-binding"},
  {"<compile-time>", "<compile-time>"},
  {"function-data-refs", "function-data-refs"},
  {"monitor-type", "monitor-type"},
  {"environment-module", "environment-module"},
  {"<binding>", "<binding>"},
  {"program-register-setter", "program-register-setter"},
  {"<static-global-environment>", "<static-global-environment>"},
  {"<monitor>", "<monitor>"},
  {"application-arguments", "application-arguments"},
  {"signature-arity-setter", "signature-arity-setter"},
  {"install-initial-bindings", "install-initial-bindings"},
  {"<module-binding>", "<module-binding>"},
  {"bind-exit-main-fun", "bind-exit-main-fun"},
  {"fix-let-arguments", "fix-let-arguments"},
  {"binding-global-box", "binding-global-box"},
  {"application-function", "application-function"},
  {"binding-kind", "binding-kind"},
  {"function-temporaries-setter", "function-temporaries-setter"},
  {"<fix-let>", "<fix-let>"},
  {"ast-define-binding", "ast-define-binding"},
  {"load-in", "load-in"},
  {"monitor-main-thunk", "monitor-main-thunk"},
  {"<runtime-assignment>", "<runtime-assignment>"},
  {"<ast-primitive>", "<ast-primitive>"},
  {"do-static-global-bindings", "do-static-global-bindings"},
  {"binding-dynamic-extent?", "binding-dynamic-extent?"},
  {"fix-let-types-setter", "fix-let-types-setter"},
  {"fix-let-bindings-setter", "fix-let-bindings-setter"},
  {"function-temporaries", "function-temporaries"},
  {"fix-let-body-setter", "fix-let-body-setter"},
  {"monitor-info", "monitor-info"},
  {"<bound?>", "<bound?>"},
  {"<module-loader>", "<module-loader>"},
  {"<ast-macro-definition>", "<ast-macro-definition>"},
  {"monitor-handler", "monitor-handler"},
  {"constant-index-setter", "constant-index-setter"},
  {"assignment-form-setter", "assignment-form-setter"},
  {"signature-value-setter", "signature-value-setter"},
  {"<programs>", "<programs>"},
  {"fix-let-types", "fix-let-types"},
  {"function-value", "function-value"},
  {"set-module-environments", "set-module-environments"},
  {"<application>", "<application>"},
  {"binding-native-to?", "binding-native-to?"},
  {"binding-index", "binding-index"},
  {"%%macro", "%%macro"},
  {"function-debug-name", "function-debug-name"},
  {"binding-info", "binding-info"},
  {"function-body", "function-body"},
  {"<program>", "<program>"},
  {"binding-info-setter", "binding-info-setter"},
  {"<ast-function>", "<ast-function>"},
  {"signature-bindings-setter", "signature-bindings-setter"},
  {"reference-called-function?", "reference-called-function?"},
  {"binding-mutable?", "binding-mutable?"},
  {"binding-index-setter", "binding-index-setter"},
  {"application-known?-setter", "application-known?-setter"},
  {"signature-bindings", "signature-bindings"},
  {"bound?-reference", "bound?-reference"},
  {"locals-body-setter", "locals-body-setter"},
  {"application-known?", "application-known?"},
  {"init-ast", "init-ast"},
  {"function-index-setter", "function-index-setter"},
  {"binding-value-setter", "binding-value-setter"},
  {"reference-frame-offset", "reference-frame-offset"},
  {"binding-type", "binding-type"},
  {"<sequential>", "<sequential>"},
  {"signature-arity", "signature-arity"},
  {"program-type", "program-type"},
  {"<ast-method>", "<ast-method>"},
  {"module-name-to-relpath", "module-name-to-relpath"},
  {"environment-bindings", "environment-bindings"},
  {"<unwind-protect>", "<unwind-protect>"},
  {"function-bindings", "function-bindings"},
  {"function-index", "function-index"},
  {"locals-functions", "locals-functions"},
  {"<local-reference>", "<local-reference>"},
  {"binding-dotted?-setter", "binding-dotted?-setter"},
  {"do-module-loader-modules", "do-module-loader-modules"},
  {"<global-assignment>", "<global-assignment>"},
  {"application-tail?", "application-tail?"},
  {"reference-frame-number", "reference-frame-number"},
  {"binding-name", "binding-name"},
  {"module-syntax-environment", "module-syntax-environment"},
  {"find-binding", "find-binding"},
  {"function-source-setter", "function-source-setter"},
  {"<predefined-application>", "<predefined-application>"},
  {"runtime-environment", "runtime-environment"},
  {"function-source", "function-source"},
  {"assignment-form", "assignment-form"},
  {"monitor-test", "monitor-test"},
  {"fab-g2c-module", "fab-g2c-module"},
  {"global-box-value-setter", "global-box-value-setter"},
  {"binding-inferred-type", "binding-inferred-type"},
  {"<reference>", "<reference>"},
  {"alternative-condition", "alternative-condition"},
  {"fix-let-body", "fix-let-body"},
  {"<raw-constant>", "<raw-constant>"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_x8rSast;
MODULE_INFO module_info_x8rSast = {
  "x8r/ast",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSruntime (void);
extern void load_module_gooSioSwrite (void);
extern void load_module_x8rSsyntax (void);
extern void load_module_gooScolsSstr (void);
extern void load_module_gooSsystem (void);
extern void load_module_gooSioSwrite (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScols (void);
extern void load_module_gooSioSport (void);
extern void load_module_x8rSdependency (void);

/* EXPRESSION: */

extern void load_module_x8rSast (void);

void load_module_x8rSast (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_gooSioSwrite();
  load_module_x8rSsyntax();
  load_module_gooScolsSstr();
  load_module_gooSsystem();
  load_module_gooSioSwrite();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScols();
  load_module_gooSioSport();
  load_module_x8rSdependency();

  (P)Yx8rSastY___main_0___();
  (P)Yx8rSastY___main_1___();
  (P)Yx8rSastY___main_2___();
  (P)Yx8rSastY___main_3___();
  (P)Yx8rSastY___main_4___();
  (P)Yx8rSastY___main_5___();
  (P)Yx8rSastY___main_6___();
  (P)Yx8rSastY___main_7___();
  (P)Yx8rSastY___main_8___();
  (P)Yx8rSastY___main_9___();

}

/* END OF GENERATED CODE. */
