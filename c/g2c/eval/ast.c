/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/ast");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/ast */

DEF(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
DEF(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
DEF(YevalSastYDsexpr_Praw_tag,"eval/ast","$sexpr-%raw-tag");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
DEF(YevalSastYspecial_define_method,"eval/ast","special-define-method");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
DEF(YevalSastYmodule_loader_stack_setter,"eval/ast","module-loader-stack-setter");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
DEF(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
EXT(YgooSmathY1_,"goo/math","1-");
DEF(YevalSastYexpand_bind_listT,"eval/ast","expand-bind-list*");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YevalSastYinsert_globalX,"eval/ast","insert-global!");
DEF(YevalSastYDsexpr_compile_time_also_tag,"eval/ast","$sexpr-compile-time-also-tag");
DEF(YevalSastYDsexpr_useSexport_module_tag,"eval/ast","$sexpr-use/export-module-tag");
DEF(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
DEF(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
DEF(YevalSastYcompile_time_program_setter,"eval/ast","compile-time-program-setter");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
DEF(YevalSastYenvironment_next,"eval/ast","environment-next");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
DEF(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmacrosYelt,"goo/macros","elt");
DEF(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
DEF(YevalSastYDsexpr_use_include_tag,"eval/ast","$sexpr-use-include-tag");
DEF(YevalSastYmonitor_info,"eval/ast","monitor-info");
DEF(YevalSastYobjectify_use_mangle_module,"eval/ast","objectify-use-mangle-module");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
DEF(YevalSastYbinding_kind,"eval/ast","binding-kind");
DEF(YevalSastYobjectify_useSexport_module,"eval/ast","objectify-use/export-module");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YevalSastYmagic_bindings,"eval/ast","magic-bindings");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
DEF(YevalSastYinsert_globalsX,"eval/ast","insert-globals!");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DEF(YevalSastYbinding_prop_setter,"eval/ast","binding-prop-setter");
EXT(Yprop_type,"goo/boot","prop-type");
DEF(YevalSastYLapplicationG,"eval/ast","<application>");
DEF(YevalSastYobjectify_list,"eval/ast","objectify-list");
DEF(YevalSastYobjectify_bind_exit,"eval/ast","objectify-bind-exit");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YevalSastYenvironment_uses_modules_setter,"eval/ast","environment-uses-modules-setter");
DEF(YevalSastYobjectify_assignment_using,"eval/ast","objectify-assignment-using");
DEF(YevalSastYobjectify_application,"eval/ast","objectify-application");
DEF(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
DEF(YevalSastYspecial_iterate,"eval/ast","special-iterate");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
DEF(YevalSastYspecial_export,"eval/ast","special-export");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YevalSdependencyYinvalidate_dependent,"eval/dependency","invalidate-dependent");
DEF(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
DEF(YevalSastYspecial_useSexport_module,"eval/ast","special-use/export-module");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
DEF(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YevalSastYtransaction_emptyQ,"eval/ast","transaction-empty?");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfun_specs,"goo/boot","fun-specs");
DEF(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
DEF(YevalSastYobjectify_binding,"eval/ast","objectify-binding");
DEF(YevalSastYLbinding_nameG,"eval/ast","<binding-name>");
DEF(YevalSastYfunction_bindings,"eval/ast","function-bindings");
DEF(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
DEF(YevalSastYTmacro_tracingQT,"eval/ast","*macro-tracing?*");
EXT(YgooSsystemYos_name,"goo/system","os-name");
DEF(YevalSastYexpand_pattern,"eval/ast","expand-pattern");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
DEF(YevalSastYTmagic_bindingsT,"eval/ast","*magic-bindings*");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Ynul,"goo/boot","nul");
DEF(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
DEF(YevalSastYDsexpr_use_mangle_module_tag,"eval/ast","$sexpr-use-mangle-module-tag");
EXT(Ynil,"goo/boot","nil");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
DEF(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
DEF(YevalSastYobjectify_raw,"eval/ast","objectify-raw");
DEF(YevalSastYobjectify_boundQ,"eval/ast","objectify-bound?");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YevalSdependencyYDname_parse_dependency,"eval/dependency","$name-parse-dependency");
DEF(YevalSastYTcurrent_subtransactionT,"eval/ast","*current-subtransaction*");
DEF(YevalSastYreloader_do_create_module,"eval/ast","reloader-do-create-module");
DEF(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
DEF(YevalSastYinit_ast,"eval/ast","init-ast");
DEF(YevalSastYobjectify_dynamic_definition,"eval/ast","objectify-dynamic-definition");
DEF(YevalSastYspecial_macro_expand,"eval/ast","special-macro-expand");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
DEF(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
DEF(YevalSastYreference_frame_offset_setter,"eval/ast","reference-frame-offset-setter");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YevalSdependencyYDparse_dependencies,"eval/dependency","$parse-dependencies");
DEF(YevalSastYDsexpr_boundQ_tag,"eval/ast","$sexpr-bound?-tag");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YevalSdependencyYdependency_emptyQ,"eval/dependency","dependency-empty?");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
DEF(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YevalSastYenvironment_module_loader,"eval/ast","environment-module-loader");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
DEF(YevalSastYenvironment_bindings_setter,"eval/ast","environment-bindings-setter");
DEF(YevalSastYobjectify_primitive_definition,"eval/ast","objectify-primitive-definition");
DEF(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
DEF(YevalSastYast_walkX,"eval/ast","ast-walk!");
DEF(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
DEF(YevalSastYLstatic_environmentG,"eval/ast","<static-environment>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYC,"goo/math","^");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
DEF(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
DEF(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
DEF(YevalSastYDsexpr_use_library_tag,"eval/ast","$sexpr-use-library-tag");
DEF(YevalSastYruntime_module_loader,"eval/ast","runtime-module-loader");
DEF(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooSmathYrem,"goo/math","rem");
DEF(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSmathYNE,"goo/math","~=");
DEF(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
DEF(YevalSastYLstatic_empty_environmentG,"eval/ast","<static-empty-environment>");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YLfunG,"goo/boot","<fun>");
DEF(YevalSastYunwind_protect_protected_thunk_setter,"eval/ast","unwind-protect-protected-thunk-setter");
DEF(YevalSastYunwind_protect_cleanup_thunk_setter,"eval/ast","unwind-protect-cleanup-thunk-setter");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
DEF(YevalSastYspecial_locals,"eval/ast","special-locals");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YevalSastYsyntax_environment_excluded_bindings,"eval/ast","syntax-environment-excluded-bindings");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YevalSastYcall_with_subtransaction,"eval/ast","call-with-subtransaction");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
DEF(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
DEF(YevalSastYreloader_do_dynamic_binding,"eval/ast","reloader-do-dynamic-binding");
EXT(YevalSdependencyYLdependableG,"eval/dependency","<dependable>");
DEF(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
DEF(YevalSastYobjectify_method_definition,"eval/ast","objectify-method-definition");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(YgooSmathYtrunc,"goo/math","trunc");
DEF(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YevalSdependencyYDvalue_optimization_dependency,"eval/dependency","$value-optimization-dependency");
DEF(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
DEF(YevalSastYspecial_define_primitive,"eval/ast","special-define-primitive");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(YevalSastYreloader_do_import,"eval/ast","reloader-do-import");
DEF(YevalSastYLargumentsG,"eval/ast","<arguments>");
DEF(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
DEF(YevalSastYDsequential_empty,"eval/ast","$sequential-empty");
EXT(Yerror,"goo/boot","error");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
DEF(YevalSastYLast_method_definitionG,"eval/ast","<ast-method-definition>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
DEF(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YgooSmathYsin,"goo/math","sin");
DEF(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
DEF(YevalSastYobjectify_use_module,"eval/ast","objectify-use-module");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
DEF(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
DEF(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
DEF(YevalSastYspecial_define_dynamic,"eval/ast","special-define-dynamic");
DEF(YevalSastYmodule_uses_c_libraries_setter,"eval/ast","module-uses-c-libraries-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
DEF(YevalSastYbinding_handler_setter,"eval/ast","binding-handler-setter");
DEF(YevalSastYfix_let_body,"eval/ast","fix-let-body");
DEF(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
DEF(YevalSastYenvironment_allows_foreign_namesQ_setter,"eval/ast","environment-allows-foreign-names?-setter");
DEF(YevalSastYforeign_nameQ,"eval/ast","foreign-name?");
DEF(YevalSastYimport_and_mangle_globalX,"eval/ast","import-and-mangle-global!");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(YevalSastYLfix_letG,"eval/ast","<fix-let>");
DEF(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
DEF(YevalSastYarguments,"eval/ast","arguments");
DEF(YevalSastYspecial_unwind_protect,"eval/ast","special-unwind-protect");
DEF(YevalSastYLast_errorG,"eval/ast","<ast-error>");
DEF(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(Yfind_getter,"goo/boot","find-getter");
DEF(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
DEF(YevalSastYenvironment_allows_foreign_namesQ,"eval/ast","environment-allows-foreign-names?");
DEF(YevalSastYinit_g2c_regular_environment,"eval/ast","init-g2c-regular-environment");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
DEF(YevalSastYprogram_line_setter,"eval/ast","program-line-setter");
DEF(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
DEF(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
DEF(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
DEF(YevalSastYregister_magic_binding,"eval/ast","register-magic-binding");
EXT(Yfun_sig,"goo/boot","fun-sig");
DEF(YevalSastYsignature_value,"eval/ast","signature-value");
DEF(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
DEF(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
DEF(YevalSastYmodule_uses_c_includes_setter,"eval/ast","module-uses-c-includes-setter");
EXT(Ygen_src,"goo/boot","gen-src");
DEF(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
DEF(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YLstrG,"goo/boot","<str>");
DEF(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
DEF(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
DEF(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
DEF(YevalSastYmodule_transaction_setter,"eval/ast","module-transaction-setter");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
DEF(YevalSastYbinding_prop,"eval/ast","binding-prop");
DEF(YevalSastYapplication_knownQ,"eval/ast","application-known?");
DEF(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
DEF(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
DEF(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(Yobject_class,"goo/boot","object-class");
DEF(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmagYmin,"goo/mag","min");
DEF(YevalSastYfunction_signature,"eval/ast","function-signature");
DEF(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
DEF(YevalSastYspecial_use_module,"eval/ast","special-use-module");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YevalSdependencyYDall_dependency_types,"eval/dependency","$all-dependency-types");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSdependencyYfind_dependency,"eval/dependency","find-dependency");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
DEF(YevalSastYfab_static_global_environment,"eval/ast","fab-static-global-environment");
DEF(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
DEF(YevalSastYsignature_specs,"eval/ast","signature-specs");
DEF(YevalSastYalternative_condition_setter,"eval/ast","alternative-condition-setter");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
DEF(YevalSastYobjectify_syntax_definition,"eval/ast","objectify-syntax-definition");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YevalSdependencyYdependency_and,"eval/dependency","dependency-and");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
DEF(YevalSastYconstant_value_setter,"eval/ast","constant-value-setter");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yfab_gen,"goo/boot","fab-gen");
DYNDEF(YevalSastYTrecord_sourceQT,"eval/ast","*record-source?*");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Yfab_class,"goo/boot","fab-class");
DEF(YevalSastYconvert2arguments,"eval/ast","convert2arguments");
DEF(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
DEF(YevalSastYfunction_display_name,"eval/ast","function-display-name");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
DEF(YevalSastYfunction_kind,"eval/ast","function-kind");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DEF(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
DEF(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
DEF(YevalSastYpairize,"eval/ast","pairize");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
DEF(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
DEF(YevalSastYLtransactionG,"eval/ast","<transaction>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
DEF(YevalSastYfunction_binding_setter,"eval/ast","function-binding-setter");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
DEF(YevalSastYassignment_binding_setter,"eval/ast","assignment-binding-setter");
EXT(YgooSmagYG,"goo/mag",">");
DEF(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
DEF(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yarity_error,"goo/boot","arity-error");
DEF(YevalSastYfunction_adjectives_setter,"eval/ast","function-adjectives-setter");
DEF(YevalSastYbinding_mutableQ_setter,"eval/ast","binding-mutable?-setter");
DEF(YevalSastYDsexpr_optionals_tag,"eval/ast","$sexpr-optionals-tag");
EXT(YgooSioSportYopen,"goo/io/port","open");
DEF(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
DEF(YevalSastYreload_macros,"eval/ast","reload-macros");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
DEF(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Yrange_error,"goo/boot","range-error");
DEF(YevalSastYinstall_magic_bindings,"eval/ast","install-magic-bindings");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
DEF(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YLseqG,"goo/boot","<seq>");
DEF(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
DEF(YevalSastYalternative_consequent_setter,"eval/ast","alternative-consequent-setter");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYK,"goo/math","|");
DEF(YevalSastYobjectify_variable_definition,"eval/ast","objectify-variable-definition");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YgooSmathYsinh,"goo/math","sinh");
DEF(YevalSastYfunction_free,"eval/ast","function-free");
DEF(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
DEF(YevalSastYfunctions,"eval/ast","functions");
DEF(YevalSastYalternative_alternant_setter,"eval/ast","alternative-alternant-setter");
DEF(YevalSastYfind_syntax_environment,"eval/ast","find-syntax-environment");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
DEF(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
DEF(YevalSastYreloader_do_runtime_binding,"eval/ast","reloader-do-runtime-binding");
DEF(YevalSastYLmonitorG,"eval/ast","<monitor>");
DEF(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
DEF(YevalSastYimport_globalX,"eval/ast","import-global!");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
DEF(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YgooSmathYE,"goo/math","=");
DEF(YevalSastYspecial_begin,"eval/ast","special-begin");
DEF(YevalSastYDarguments_empty,"eval/ast","$arguments-empty");
DEF(YevalSastYobjectify,"eval/ast","objectify");
EXT(Ygen_refs,"goo/boot","gen-refs");
DEF(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YevalSdependencyYDoptimizaton_dependencies,"eval/dependency","$optimizaton-dependencies");
DEF(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
DEF(YevalSastYobjectify_alternative,"eval/ast","objectify-alternative");
DEF(YevalSastYreference_frame_number_setter,"eval/ast","reference-frame-number-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YevalSastYmodule_name_setter,"eval/ast","module-name-setter");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
DEF(YevalSastYLsimple_ast_errorG,"eval/ast","<simple-ast-error>");
EXT(YevalSdependencyYdetach_dependent,"eval/dependency","detach-dependent");
DEF(YevalSastYbinding_index,"eval/ast","binding-index");
DEF(YevalSastYDsexpr_export_tag,"eval/ast","$sexpr-export-tag");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
DEF(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
DEF(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
DEF(YevalSastYruntime_core_environment,"eval/ast","runtime-core-environment");
DEF(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
DEF(YevalSastYobjectify_sequential,"eval/ast","objectify-sequential");
DEF(YevalSastYobjectify_generic_definition,"eval/ast","objectify-generic-definition");
DEF(YevalSastYmonitor_test_setter,"eval/ast","monitor-test-setter");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSmathYmod,"goo/math","mod");
DEF(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
DEF(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
DEF(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
DEF(YevalSastYbind_exit_main_fun_setter,"eval/ast","bind-exit-main-fun-setter");
DEF(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
DEF(YevalSastYLstatic_local_environmentG,"eval/ast","<static-local-environment>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
DEF(YevalSastYbinding_name_setter,"eval/ast","binding-name-setter");
DEF(YevalSastYLlow_letG,"eval/ast","<low-let>");
DEF(YevalSastYspecial_bind_exit,"eval/ast","special-bind-exit");
DEF(YevalSastYinstall_interpreter_hacks,"eval/ast","install-interpreter-hacks");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yadd_prop,"goo/boot","add-prop");
DEF(YevalSastYspecial_define_function,"eval/ast","special-define-function");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
DEF(YevalSastYreload_modules,"eval/ast","reload-modules");
DEF(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
DEF(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
DEF(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
DEF(YevalSastYmodule_loader_modules_setter,"eval/ast","module-loader-modules-setter");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
DEF(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
DEF(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
DEF(YevalSastYspecial_boundQ,"eval/ast","special-bound?");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
DEF(YevalSastYLdefinitionG,"eval/ast","<definition>");
DEF(YevalSastYLruntime_module_loaderG,"eval/ast","<runtime-module-loader>");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(YgooSmathYlog,"goo/math","log");
DEF(YevalSastYcompute_local_reference_offsets,"eval/ast","compute-local-reference-offsets");
EXT(YPsnul,"goo/boot","%snul");
DEF(YevalSastYspecial_quote,"eval/ast","special-quote");
DEF(YevalSastYexpand_bind_element,"eval/ast","expand-bind-element");
DEF(YevalSastYframe_bindings,"eval/ast","frame-bindings");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
DEF(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
DEF(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
DEF(YevalSastYbinding_info,"eval/ast","binding-info");
DEF(YevalSastYmodule_exports_setter,"eval/ast","module-exports-setter");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
DEF(YevalSastYobjectify_use_library,"eval/ast","objectify-use-library");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
DEF(YevalSastYspecial_syntax_if,"eval/ast","special-syntax-if");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
DEF(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YLlocG,"goo/boot","<loc>");
DEF(YevalSastYLast_generic_definitionG,"eval/ast","<ast-generic-definition>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DEF(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(YevalSastYmodule_runtime_data_setter,"eval/ast","module-runtime-data-setter");
EXT(YLproductG,"goo/boot","<product>");
DEF(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(Yfun_refs,"goo/boot","fun-refs");
DEF(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YevalSastYspecial_define_class,"eval/ast","special-define-class");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
DEF(YevalSastYDfree_environment_empty,"eval/ast","$free-environment-empty");
DEF(YevalSastYobjectify_function_definition,"eval/ast","objectify-function-definition");
DEF(YevalSastYobjectify_function,"eval/ast","objectify-function");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
DEF(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
DEF(YevalSastYapplication_binding_setter,"eval/ast","application-binding-setter");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
DEF(YevalSastYobjectify_assignment,"eval/ast","objectify-assignment");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YevalSastYbinding_freeQ_setter,"eval/ast","binding-free?-setter");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSioSportYget,"goo/io/port","get");
DEF(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
DEF(YevalSastYLast_function_definitionG,"eval/ast","<ast-function-definition>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
DEF(YevalSastYr_extendT,"eval/ast","r-extend*");
DEF(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
DEF(YevalSastYensure_module_data,"eval/ast","ensure-module-data");
DEF(YevalSastYassignment_reference_setter,"eval/ast","assignment-reference-setter");
DEF(YevalSastYLast_methodG,"eval/ast","<ast-method>");
DEF(YevalSastYtransaction_implemented_bindings_setter,"eval/ast","transaction-implemented-bindings-setter");
DEF(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
DEF(YevalSastYLsequentialG,"eval/ast","<sequential>");
DEF(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YevalSastYboundQ_reference_setter,"eval/ast","bound?-reference-setter");
DEF(YevalSastYfunction_binding,"eval/ast","function-binding");
DEF(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
DEF(YevalSastYassignment_binding,"eval/ast","assignment-binding");
DEF(YevalSastYspecial_Praw,"eval/ast","special-%raw");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
DEF(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
DEF(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(Ynot,"goo/boot","not");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
DEF(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YLunionG,"goo/boot","<union>");
DEF(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
DEF(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YPprop,"goo/boot","%prop");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
DEF(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(Ynarity_error,"goo/boot","narity-error");
DEF(YevalSastYfunction_source,"eval/ast","function-source");
DEF(YevalSastYobjectify_symbol,"eval/ast","objectify-symbol");
EXT(Yfun_val,"goo/boot","fun-val");
DEF(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
DEF(YevalSastYmodule_exports,"eval/ast","module-exports");
DEF(YevalSastYast_LbotG,"eval/ast","ast-<bot>");
DEF(YevalSastYmacro_expander,"eval/ast","macro-expander");
DEF(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
DEF(YevalSastYtransaction_register_implemented_binding,"eval/ast","transaction-register-implemented-binding");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DEF(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
DEF(YevalSastYinsert_and_mangle_globalX,"eval/ast","insert-and-mangle-global!");
DEF(YevalSastYexpand_bind_list,"eval/ast","expand-bind-list");
DEF(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
DEF(YevalSastYLnamespace_errorG,"eval/ast","<namespace-error>");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
DEF(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YLintG,"goo/boot","<int>");
DEF(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYround,"goo/math","round");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YgooSmathYS,"goo/math","/");
EXT(YLsubclassG,"goo/boot","<subclass>");
DEF(YevalSastYDsexpr_optionals_type_name,"eval/ast","$sexpr-optionals-type-name");
EXT(YevalSdependencyYdependency_includes_anyQ,"eval/dependency","dependency-includes-any?");
DEF(YevalSastYapplication_function_setter,"eval/ast","application-function-setter");
DEF(YevalSastYLpredefined_referenceG,"eval/ast","<predefined-reference>");
DEF(YevalSastYbinding_handler,"eval/ast","binding-handler");
DEF(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
DEF(YevalSastYspecial_monitor,"eval/ast","special-monitor");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
DEF(YevalSastYspecial_compile_time_also,"eval/ast","special-compile-time-also");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
DEF(YevalSastYbinding_module_setter,"eval/ast","binding-module-setter");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
DEF(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
DEF(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
DEF(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
DEF(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(Ynew,"goo/boot","new");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooSmathYtan,"goo/math","tan");
DEF(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
DEF(YevalSastYroll_back_transaction,"eval/ast","roll-back-transaction");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
DEF(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
DEF(YevalSastYast_macro_expand,"eval/ast","ast-macro-expand");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooSruntimeYalways,"goo/runtime","always");
DEF(YevalSastYDfunctions_empty,"eval/ast","$functions-empty");
EXT(YgooSmathYN,"goo/math","~");
DEF(YevalSastYspecial_quasiquote,"eval/ast","special-quasiquote");
EXT(YgooSioSportYputs,"goo/io/port","puts");
DEF(YevalSastYLreferenceG,"eval/ast","<reference>");
DEF(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
DEF(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YevalSastYDsexpr_use_module_tag,"eval/ast","$sexpr-use-module-tag");
DEF(YevalSastYsignature_names,"eval/ast","signature-names");
DEF(YevalSastYtransform_defs,"eval/ast","transform-defs");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
DEF(YevalSastYenvironment_module_setter,"eval/ast","environment-module-setter");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YgooSmathYdiv,"goo/math","div");
DEF(YevalSastYmonitor_main_thunk_setter,"eval/ast","monitor-main-thunk-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(Yfun_cache,"goo/boot","fun-cache");
DEF(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(YevalSastYload_in,"eval/ast","load-in");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YevalSdependencyYdependency_or,"eval/dependency","dependency-or");
DEF(YevalSastYbinding_name,"eval/ast","binding-name");
DEF(YevalSastYfunction_value,"eval/ast","function-value");
DEF(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSmathYGGG,"goo/math",">>>");
DEF(YevalSastYmodule_transaction,"eval/ast","module-transaction");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
DEF(YevalSastYmaybe_log_dependency,"eval/ast","maybe-log-dependency");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YevalSastYspecial_if,"eval/ast","special-if");
DEF(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
DEF(YevalSastYprocess_module_data,"eval/ast","process-module-data");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
DEF(YevalSastYspecial_define_static_syntax,"eval/ast","special-define-static-syntax");
DEF(YevalSastYlocals_body,"eval/ast","locals-body");
DEF(YevalSastYmodule_loader_modules,"eval/ast","module-loader-modules");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
DEF(YevalSastYobjectify_monitor,"eval/ast","objectify-monitor");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YevalSastYbinding_freeQ,"eval/ast","binding-free?");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
DYNDEF(YevalSastYTnow_rt_envT,"eval/ast","*now-rt-env*");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
DEF(YevalSastYregister_moduleX,"eval/ast","register-module!");
DEF(YevalSastYmonitor_type_setter,"eval/ast","monitor-type-setter");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
DEF(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
DEF(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YevalSastYspecial_def,"eval/ast","special-def");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
DEF(YevalSastYfind_static_global_environment,"eval/ast","find-static-global-environment");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YevalSastYTruntime_module_loaderT,"eval/ast","*runtime-module-loader*");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(YevalSastYprocess_nary_closed_application,"eval/ast","process-nary-closed-application");
DEF(YevalSastYreloader_do_use_module,"eval/ast","reloader-do-use-module");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YevalSastYfab_syntax_environment,"eval/ast","fab-syntax-environment");
DEF(YevalSastYtransaction_register_dependent,"eval/ast","transaction-register-dependent");
DEF(YevalSastYexpand_syntax_if,"eval/ast","expand-syntax-if");
DEF(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
DEF(YevalSastYobjectify_foreign_reference,"eval/ast","objectify-foreign-reference");
DEF(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
DEF(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
DEF(YevalSastYenv_object_name,"eval/ast","env-object-name");
DEF(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(Yfun_arity,"goo/boot","fun-arity");
DEF(YevalSastYmodule_data_processedQ_setter,"eval/ast","module-data-processed?-setter");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
DEF(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLmagG,"goo/boot","<mag>");
DEF(YevalSastYprogram_line,"eval/ast","program-line");
DEF(YevalSastYspecial_let,"eval/ast","special-let");
DEF(YevalSastYspecial_define_generic,"eval/ast","special-define-generic");
DEF(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSioSportYin,"goo/io/port","in");
DEF(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
DEF(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YevalSastYLbindingG,"eval/ast","<binding>");
DEF(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(Ylst,"goo/boot","lst");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
DEF(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
DEF(YevalSastYreloader_do_export,"eval/ast","reloader-do-export");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
DEF(YevalSastYspecial_define_syntax,"eval/ast","special-define-syntax");
DEF(YevalSastYspecial_method,"eval/ast","special-method");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
DEF(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
DEF(YevalSastYinit_g2c_boot_environment,"eval/ast","init-g2c-boot-environment");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DEF(YevalSastYfab_subset_environment,"eval/ast","fab-subset-environment");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
DEF(YevalSastYbinding_reference_class,"eval/ast","binding-reference-class");
DEF(YevalSastYruntime_module,"eval/ast","runtime-module");
DEF(YevalSastYspecial_use_mangle_module,"eval/ast","special-use-mangle-module");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
DEF(YevalSastYtransaction_dependents,"eval/ast","transaction-dependents");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
DEF(YevalSastYenvironment_next_setter,"eval/ast","environment-next-setter");
DEF(YevalSastYload_module,"eval/ast","load-module");
DEF(YevalSastYnamespace_error,"eval/ast","namespace-error");
DEF(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(YevalSastYast_copy,"eval/ast","ast-copy");
DEF(YevalSastYmonitor_handler_setter,"eval/ast","monitor-handler-setter");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
DEF(YevalSastYload_and_register_module,"eval/ast","load-and-register-module");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
DEF(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
DEF(YevalSastYexport_bindingX,"eval/ast","export-binding!");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
DEF(YevalSastYbinding_kind_setter,"eval/ast","binding-kind-setter");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YevalSdependencyYDempty_dependency,"eval/dependency","$empty-dependency");
DEF(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
DYNDEF(YevalSastYTcurrent_dependentT,"eval/ast","*current-dependent*");
EXT(YLlogG,"goo/boot","<log>");
DEF(YevalSastYspecial_prop,"eval/ast","special-prop");
EXT(YgooSmathYtanh,"goo/math","tanh");
DEF(YevalSastYDsexpr_define_dynamic_tag,"eval/ast","$sexpr-define-dynamic-tag");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalSdependencyYLdependentG,"eval/dependency","<dependent>");
DEF(YevalSastYftype,"eval/ast","ftype");
DEF(YevalSastYsequential,"eval/ast","sequential");
DEF(YevalSastYspecial_use_library,"eval/ast","special-use-library");
DEF(YevalSastYobjectify_use_include,"eval/ast","objectify-use-include");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
DEF(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YevalSdependencyYlog_dependency,"eval/dependency","log-dependency");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
DEF(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
DEF(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
DEF(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
DEF(YevalSastYassignment_reference,"eval/ast","assignment-reference");
DEF(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
DEF(YevalSastYDsexpr_define_primitive_tag,"eval/ast","$sexpr-define-primitive-tag");
DEF(YevalSastYDsexpr_compile_time_tag,"eval/ast","$sexpr-compile-time-tag");
DEF(YevalSastYcompute_transitive_users,"eval/ast","compute-transitive-users");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
DEF(YevalSastYobjectify_function_source,"eval/ast","objectify-function-source");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
DEF(YevalSastYapplication_arguments_setter,"eval/ast","application-arguments-setter");
DEF(YevalSastYdefault_type,"eval/ast","default-type");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSmacrosYlast,"goo/macros","last");
DEF(YevalSastYremove_module_internalX,"eval/ast","remove-module-internal!");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
DEF(YevalSastYupdate_binding_kind,"eval/ast","update-binding-kind");
EXT(YgooSioSportYput,"goo/io/port","put");
DEF(YevalSastYobjectify_definition,"eval/ast","objectify-definition");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
DEF(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YevalSdependencyYinvalidate_dependents,"eval/dependency","invalidate-dependents");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
DEF(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YgooSioSportYout,"goo/io/port","out");
DEF(YevalSastYmodule_uses_c_files_setter,"eval/ast","module-uses-c-files-setter");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
DEF(YevalSastYmodule_loader_stack,"eval/ast","module-loader-stack");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
DEF(YevalSastYapplication_function,"eval/ast","application-function");
DEF(YevalSastYspecial_set,"eval/ast","special-set");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
DEF(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(YevalSastYapplication_next_methods_setter,"eval/ast","application-next-methods-setter");
DEF(YevalSastYDfab_list_empty,"eval/ast","$fab-list-empty");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YevalSastYmodule_syntax_environment_setter,"eval/ast","module-syntax-environment-setter");
DEF(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YevalSdependencyYdependency_includes_allQ,"eval/dependency","dependency-includes-all?");
DEF(YevalSastYPmodule_exports,"eval/ast","%module-exports");
DEF(YevalSastYmodule_binding,"eval/ast","module-binding");
DEF(YevalSastYmodule_data_processedQ,"eval/ast","module-data-processed?");
DEF(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
DEF(YevalSastYmodule_runtime_data,"eval/ast","module-runtime-data");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
DEF(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
DEF(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
DEF(YevalSastYDempty_static_environment,"eval/ast","$empty-static-environment");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
DEF(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
DEF(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
DEF(YevalSastYfree_environment,"eval/ast","free-environment");
DEF(YevalSastYenvironment_module_loader_setter,"eval/ast","environment-module-loader-setter");
DEF(YevalSastYmodule_target_environment_setter,"eval/ast","module-target-environment-setter");
EXT(Yclone,"goo/boot","clone");
DEF(YevalSastYPmodule_exports_setter,"eval/ast","%module-exports-setter");
DEF(YevalSastYobjectify_export,"eval/ast","objectify-export");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYB,"goo/math","&");
DEF(YevalSastYmonitor_info_setter,"eval/ast","monitor-info-setter");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
DEF(YevalSastYspecial_compile_time,"eval/ast","special-compile-time");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLclassG,"goo/boot","<class>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
DEF(YevalSastYtransaction_implemented_bindings,"eval/ast","transaction-implemented-bindings");
EXT(Ytup,"goo/boot","tup");
DEF(YevalSastYapplication_tailQ_setter,"eval/ast","application-tail?-setter");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YevalSastYspecial_define,"eval/ast","special-define");
DEF(YevalSastYglobal_box_value,"eval/ast","global-box-value");
DEF(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
DEF(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
DEF(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
DEF(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
DEF(YevalSastYtransaction_dependents_setter,"eval/ast","transaction-dependents-setter");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
DEF(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
DEF(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
DEF(YevalSastYobjectify_unwind_protect,"eval/ast","objectify-unwind-protect");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
DEF(YevalSastYinit_runtime,"eval/ast","init-runtime");
DEF(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooSmathYcos,"goo/math","cos");
DEF(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
DEF(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
DEF(YevalSastYobjectify_compile_time,"eval/ast","objectify-compile-time");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
DEF(YevalSastYfind_binding,"eval/ast","find-binding");
DEF(YevalSastYfab_list,"eval/ast","fab-list");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
DEF(YevalSastYmerge_transactionsX,"eval/ast","merge-transactions!");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSdependencyYDexpansion_parse_dependency,"eval/dependency","$expansion-parse-dependency");
DEF(YevalSastYDsexpr_define_static_syntax_tag,"eval/ast","$sexpr-define-static-syntax-tag");
DEF(YevalSastYmonitor_type,"eval/ast","monitor-type");
DEF(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
DEF(YevalSastYobjectify_free_global_reference,"eval/ast","objectify-free-global-reference");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
DEF(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YevalSdependencyYLdependency_typeG,"eval/dependency","<dependency-type>");
DEF(YevalSastYas_lst,"eval/ast","as-lst");
DEF(YevalSastYreloader_do_other_binding,"eval/ast","reloader-do-other-binding");
EXT(Yfun_mets,"goo/boot","fun-mets");
DEF(YevalSastYLvariable_definitionG,"eval/ast","<variable-definition>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
DEF(YevalSastYfunction_specs,"eval/ast","function-specs");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
DEF(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(Ytype_object,"goo/boot","type-object");
DEF(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooSsystemYso_load,"goo/system","so-load");
DEF(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YLsymG,"goo/boot","<sym>");
DEF(YevalSastYreference_binding_setter,"eval/ast","reference-binding-setter");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
DEF(YevalSastYspecial_use_include,"eval/ast","special-use-include");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
DEF(YevalSastYobjectify_locals,"eval/ast","objectify-locals");
DEF(YevalSastYLast_functionG,"eval/ast","<ast-function>");
DEF(YevalSastYconstant_index,"eval/ast","constant-index");
DEF(YevalSastYassignment_form,"eval/ast","assignment-form");
DEF(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_348);
DEFLIT(lit_1065);
DEFLIT(lit_87);
DEFLIT(lit_346);
DEFLIT(lit_3);
DEFLIT(lit_274);
DEFLIT(lit_502);
DEFLIT(lit_802);
DEFLIT(lit_61);
DEFLIT(lit_290);
DEFLIT(lit_594);
DEFLIT(lit_765);
DEFLIT(lit_101);
DEFLIT(lit_861);
DEFLIT(lit_943);
DEFLIT(lit_664);
DEFLIT(lit_521);
DEFLIT(lit_396);
DEFLIT(lit_96);
DEFLIT(lit_312);
DEFLIT(lit_398);
DEFLIT(lit_847);
DEFLIT(lit_729);
DEFLIT(lit_372);
DEFLIT(lit_737);
DEFLIT(lit_955);
DEFLIT(lit_1017);
DEFLIT(lit_603);
DEFLIT(lit_543);
DEFLIT(lit_39);
DEFLIT(lit_805);
DEFLIT(lit_855);
DEFLIT(lit_542);
DEFLIT(lit_184);
DEFLIT(lit_504);
DEFLIT(lit_999);
DEFLIT(lit_789);
DEFLIT(lit_708);
DEFLIT(lit_794);
DEFLIT(lit_385);
DEFLIT(lit_1058);
DEFLIT(lit_671);
DEFLIT(lit_191);
DEFLIT(lit_202);
DEFLIT(lit_888);
DEFLIT(lit_105);
DEFLIT(lit_875);
DEFLIT(lit_815);
DEFLIT(lit_701);
DEFLIT(lit_175);
DEFLIT(lit_857);
DEFLIT(lit_547);
DEFLIT(lit_196);
DEFLIT(lit_687);
DEFLIT(lit_49);
DEFLIT(lit_282);
DEFLIT(lit_375);
DEFLIT(lit_374);
DEFLIT(lit_840);
DEFLIT(lit_843);
DEFLIT(lit_309);
DEFLIT(lit_852);
DEFLIT(lit_104);
DEFLIT(lit_172);
DEFLIT(lit_634);
DEFLIT(lit_145);
DEFLIT(lit_22);
DEFLIT(lit_100);
DEFLIT(lit_408);
DEFLIT(lit_364);
DEFLIT(lit_480);
DEFLIT(lit_922);
DEFLIT(lit_64);
DEFLIT(lit_486);
DEFLIT(lit_106);
DEFLIT(lit_836);
DEFLIT(lit_676);
DEFLIT(lit_904);
DEFLIT(lit_407);
DEFLIT(lit_566);
DEFLIT(lit_619);
DEFLIT(lit_265);
DEFLIT(lit_1041);
DEFLIT(lit_120);
DEFLIT(lit_937);
DEFLIT(lit_171);
DEFLIT(lit_595);
DEFLIT(lit_813);
DEFLIT(lit_790);
DEFLIT(lit_487);
DEFLIT(lit_118);
DEFLIT(lit_642);
DEFLIT(lit_109);
DEFLIT(lit_769);
DEFLIT(lit_718);
DEFLIT(lit_242);
DEFLIT(lit_827);
DEFLIT(lit_630);
DEFLIT(lit_225);
DEFLIT(lit_787);
DEFLIT(lit_965);
DEFLIT(lit_386);
DEFLIT(lit_793);
DEFLIT(lit_779);
DEFLIT(lit_624);
DEFLIT(lit_768);
DEFLIT(lit_1050);
DEFLIT(lit_0);
DEFLIT(lit_902);
DEFLIT(lit_126);
DEFLIT(lit_347);
DEFLIT(lit_1038);
DEFLIT(lit_121);
DEFLIT(lit_743);
DEFLIT(lit_368);
DEFLIT(lit_23);
DEFLIT(lit_681);
DEFLIT(lit_272);
DEFLIT(lit_831);
DEFLIT(lit_229);
DEFLIT(lit_732);
DEFLIT(lit_665);
DEFLIT(lit_991);
DEFLIT(lit_915);
DEFLIT(lit_283);
DEFLIT(lit_658);
DEFLIT(lit_12);
DEFLIT(lit_1049);
DEFLIT(lit_262);
DEFLIT(lit_468);
DEFLIT(lit_652);
DEFLIT(lit_490);
DEFLIT(lit_705);
DEFLIT(lit_36);
DEFLIT(lit_655);
DEFLIT(lit_998);
DEFLIT(lit_376);
DEFLIT(lit_846);
DEFLIT(lit_25);
DEFLIT(lit_50);
DEFLIT(lit_310);
DEFLIT(lit_764);
DEFLIT(lit_1031);
DEFLIT(lit_1042);
DEFLIT(lit_610);
DEFLIT(lit_212);
DEFLIT(lit_941);
DEFLIT(lit_837);
DEFLIT(lit_522);
DEFLIT(lit_509);
DEFLIT(lit_635);
DEFLIT(lit_507);
DEFLIT(lit_598);
DEFLIT(lit_4);
DEFLIT(lit_574);
DEFLIT(lit_389);
DEFLIT(lit_446);
DEFLIT(lit_359);
DEFLIT(lit_373);
DEFLIT(lit_667);
DEFLIT(lit_750);
DEFLIT(lit_814);
DEFLIT(lit_759);
DEFLIT(lit_797);
DEFLIT(lit_586);
DEFLIT(lit_860);
DEFLIT(lit_781);
DEFLIT(lit_459);
DEFLIT(lit_204);
DEFLIT(lit_551);
DEFLIT(lit_745);
DEFLIT(lit_686);
DEFLIT(lit_1010);
DEFLIT(lit_255);
DEFLIT(lit_748);
DEFLIT(lit_870);
DEFLIT(lit_961);
DEFLIT(lit_469);
DEFLIT(lit_29);
DEFLIT(lit_734);
DEFLIT(lit_554);
DEFLIT(lit_350);
DEFLIT(lit_393);
DEFLIT(lit_552);
DEFLIT(lit_884);
DEFLIT(lit_960);
DEFLIT(lit_513);
DEFLIT(lit_216);
DEFLIT(lit_68);
DEFLIT(lit_1007);
DEFLIT(lit_895);
DEFLIT(lit_213);
DEFLIT(lit_516);
DEFLIT(lit_1045);
DEFLIT(lit_733);
DEFLIT(lit_669);
DEFLIT(lit_45);
DEFLIT(lit_1062);
DEFLIT(lit_357);
DEFLIT(lit_770);
DEFLIT(lit_989);
DEFLIT(lit_82);
DEFLIT(lit_390);
DEFLIT(lit_829);
DEFLIT(lit_730);
DEFLIT(lit_296);
DEFLIT(lit_649);
DEFLIT(lit_299);
DEFLIT(lit_979);
DEFLIT(lit_97);
DEFLIT(lit_74);
DEFLIT(lit_1036);
DEFLIT(lit_244);
DEFLIT(lit_685);
DEFLIT(lit_259);
DEFLIT(lit_351);
DEFLIT(lit_866);
DEFLIT(lit_997);
DEFLIT(lit_287);
DEFLIT(lit_354);
DEFLIT(lit_151);
DEFLIT(lit_819);
DEFLIT(lit_271);
DEFLIT(lit_467);
DEFLIT(lit_297);
DEFLIT(lit_460);
DEFLIT(lit_435);
DEFLIT(lit_413);
DEFLIT(lit_760);
DEFLIT(lit_920);
DEFLIT(lit_85);
DEFLIT(lit_640);
DEFLIT(lit_763);
DEFLIT(lit_288);
DEFLIT(lit_1051);
DEFLIT(lit_735);
DEFLIT(lit_1023);
DEFLIT(lit_859);
DEFLIT(lit_657);
DEFLIT(lit_249);
DEFLIT(lit_294);
DEFLIT(lit_645);
DEFLIT(lit_803);
DEFLIT(lit_394);
DEFLIT(lit_1048);
DEFLIT(lit_438);
DEFLIT(lit_724);
DEFLIT(lit_680);
DEFLIT(lit_584);
DEFLIT(lit_473);
DEFLIT(lit_370);
DEFLIT(lit_616);
DEFLIT(lit_909);
DEFLIT(lit_698);
DEFLIT(lit_286);
DEFLIT(lit_715);
DEFLIT(lit_806);
DEFLIT(lit_723);
DEFLIT(lit_245);
DEFLIT(lit_519);
DEFLIT(lit_986);
DEFLIT(lit_576);
DEFLIT(lit_94);
DEFLIT(lit_15);
DEFLIT(lit_131);
DEFLIT(lit_1025);
DEFLIT(lit_63);
DEFLIT(lit_746);
DEFLIT(lit_496);
DEFLIT(lit_575);
DEFLIT(lit_224);
DEFLIT(lit_240);
DEFLIT(lit_305);
DEFLIT(lit_62);
DEFLIT(lit_491);
DEFLIT(lit_387);
DEFLIT(lit_431);
DEFLIT(lit_666);
DEFLIT(lit_411);
DEFLIT(lit_773);
DEFLIT(lit_893);
DEFLIT(lit_508);
DEFLIT(lit_924);
DEFLIT(lit_461);
DEFLIT(lit_981);
DEFLIT(lit_218);
DEFLIT(lit_526);
DEFLIT(lit_663);
DEFLIT(lit_1024);
DEFLIT(lit_697);
DEFLIT(lit_970);
DEFLIT(lit_248);
DEFLIT(lit_457);
DEFLIT(lit_532);
DEFLIT(lit_537);
DEFLIT(lit_284);
DEFLIT(lit_215);
DEFLIT(lit_753);
DEFLIT(lit_548);
DEFLIT(lit_549);
DEFLIT(lit_572);
DEFLIT(lit_992);
DEFLIT(lit_170);
DEFLIT(lit_529);
DEFLIT(lit_825);
DEFLIT(lit_954);
DEFLIT(lit_102);
DEFLIT(lit_116);
DEFLIT(lit_143);
DEFLIT(lit_1056);
DEFLIT(lit_602);
DEFLIT(lit_261);
DEFLIT(lit_656);
DEFLIT(lit_1061);
DEFLIT(lit_946);
DEFLIT(lit_950);
DEFLIT(lit_238);
DEFLIT(lit_179);
DEFLIT(lit_944);
DEFLIT(lit_625);
DEFLIT(lit_704);
DEFLIT(lit_867);
DEFLIT(lit_968);
DEFLIT(lit_798);
DEFLIT(lit_315);
DEFLIT(lit_482);
DEFLIT(lit_263);
DEFLIT(lit_1022);
DEFLIT(lit_275);
DEFLIT(lit_403);
DEFLIT(lit_845);
DEFLIT(lit_1027);
DEFLIT(lit_300);
DEFLIT(lit_95);
DEFLIT(lit_54);
DEFLIT(lit_485);
DEFLIT(lit_107);
DEFLIT(lit_1);
DEFLIT(lit_881);
DEFLIT(lit_1008);
DEFLIT(lit_277);
DEFLIT(lit_383);
DEFLIT(lit_317);
DEFLIT(lit_239);
DEFLIT(lit_124);
DEFLIT(lit_889);
DEFLIT(lit_577);
DEFLIT(lit_24);
DEFLIT(lit_629);
DEFLIT(lit_260);
DEFLIT(lit_647);
DEFLIT(lit_974);
DEFLIT(lit_880);
DEFLIT(lit_141);
DEFLIT(lit_379);
DEFLIT(lit_972);
DEFLIT(lit_609);
DEFLIT(lit_533);
DEFLIT(lit_844);
DEFLIT(lit_345);
DEFLIT(lit_335);
DEFLIT(lit_728);
DEFLIT(lit_437);
DEFLIT(lit_415);
DEFLIT(lit_207);
DEFLIT(lit_934);
DEFLIT(lit_832);
DEFLIT(lit_935);
DEFLIT(lit_1028);
DEFLIT(lit_366);
DEFLIT(lit_73);
DEFLIT(lit_254);
DEFLIT(lit_506);
DEFLIT(lit_219);
DEFLIT(lit_617);
DEFLIT(lit_493);
DEFLIT(lit_1047);
DEFLIT(lit_527);
DEFLIT(lit_432);
DEFLIT(lit_227);
DEFLIT(lit_673);
DEFLIT(lit_181);
DEFLIT(lit_1053);
DEFLIT(lit_628);
DEFLIT(lit_479);
DEFLIT(lit_208);
DEFLIT(lit_786);
DEFLIT(lit_520);
DEFLIT(lit_900);
DEFLIT(lit_963);
DEFLIT(lit_88);
DEFLIT(lit_883);
DEFLIT(lit_453);
DEFLIT(lit_879);
DEFLIT(lit_148);
DEFLIT(lit_257);
DEFLIT(lit_180);
DEFLIT(lit_2);
DEFLIT(lit_988);
DEFLIT(lit_176);
DEFLIT(lit_689);
DEFLIT(lit_977);
DEFLIT(lit_326);
DEFLIT(lit_558);
DEFLIT(lit_653);
DEFLIT(lit_853);
DEFLIT(lit_559);
DEFLIT(lit_869);
DEFLIT(lit_752);
DEFLIT(lit_449);
DEFLIT(lit_714);
DEFLIT(lit_545);
DEFLIT(lit_544);
DEFLIT(lit_776);
DEFLIT(lit_751);
DEFLIT(lit_481);
DEFLIT(lit_37);
DEFLIT(lit_241);
DEFLIT(lit_200);
DEFLIT(lit_593);
DEFLIT(lit_220);
DEFLIT(lit_523);
DEFLIT(lit_571);
DEFLIT(lit_89);
DEFLIT(lit_659);
DEFLIT(lit_281);
DEFLIT(lit_906);
DEFLIT(lit_613);
DEFLIT(lit_14);
DEFLIT(lit_749);
DEFLIT(lit_363);
DEFLIT(lit_601);
DEFLIT(lit_908);
DEFLIT(lit_1029);
DEFLIT(lit_744);
DEFLIT(lit_246);
DEFLIT(lit_321);
DEFLIT(lit_336);
DEFLIT(lit_835);
DEFLIT(lit_882);
DEFLIT(lit_973);
DEFLIT(lit_518);
DEFLIT(lit_211);
DEFLIT(lit_824);
DEFLIT(lit_591);
DEFLIT(lit_821);
DEFLIT(lit_83);
DEFLIT(lit_456);
DEFLIT(lit_43);
DEFLIT(lit_472);
DEFLIT(lit_848);
DEFLIT(lit_221);
DEFLIT(lit_13);
DEFLIT(lit_466);
DEFLIT(lit_488);
DEFLIT(lit_495);
DEFLIT(lit_308);
DEFLIT(lit_92);
DEFLIT(lit_499);
DEFLIT(lit_557);
DEFLIT(lit_236);
DEFLIT(lit_727);
DEFLIT(lit_377);
DEFLIT(lit_404);
DEFLIT(lit_314);
DEFLIT(lit_77);
DEFLIT(lit_755);
DEFLIT(lit_876);
DEFLIT(lit_323);
DEFLIT(lit_978);
DEFLIT(lit_958);
DEFLIT(lit_349);
DEFLIT(lit_540);
DEFLIT(lit_226);
DEFLIT(lit_30);
DEFLIT(lit_638);
DEFLIT(lit_149);
DEFLIT(lit_864);
DEFLIT(lit_947);
DEFLIT(lit_578);
DEFLIT(lit_563);
DEFLIT(lit_34);
DEFLIT(lit_785);
DEFLIT(lit_570);
DEFLIT(lit_436);
DEFLIT(lit_81);
DEFLIT(lit_801);
DEFLIT(lit_670);
DEFLIT(lit_546);
DEFLIT(lit_983);
DEFLIT(lit_32);
DEFLIT(lit_209);
DEFLIT(lit_583);
DEFLIT(lit_210);
DEFLIT(lit_237);
DEFLIT(lit_699);
DEFLIT(lit_55);
DEFLIT(lit_1059);
DEFLIT(lit_352);
DEFLIT(lit_929);
DEFLIT(lit_458);
DEFLIT(lit_136);
DEFLIT(lit_471);
DEFLIT(lit_339);
DEFLIT(lit_138);
DEFLIT(lit_228);
DEFLIT(lit_320);
DEFLIT(lit_810);
DEFLIT(lit_353);
DEFLIT(lit_21);
DEFLIT(lit_817);
DEFLIT(lit_410);
DEFLIT(lit_618);
DEFLIT(lit_44);
DEFLIT(lit_911);
DEFLIT(lit_129);
DEFLIT(lit_700);
DEFLIT(lit_726);
DEFLIT(lit_494);
DEFLIT(lit_980);
DEFLIT(lit_222);
DEFLIT(lit_1039);
DEFLIT(lit_333);
DEFLIT(lit_489);
DEFLIT(lit_651);
DEFLIT(lit_682);
DEFLIT(lit_361);
DEFLIT(lit_505);
DEFLIT(lit_771);
DEFLIT(lit_742);
DEFLIT(lit_792);
DEFLIT(lit_135);
DEFLIT(lit_47);
DEFLIT(lit_167);
DEFLIT(lit_716);
DEFLIT(lit_823);
DEFLIT(lit_590);
DEFLIT(lit_152);
DEFLIT(lit_839);
DEFLIT(lit_168);
DEFLIT(lit_926);
DEFLIT(lit_596);
DEFLIT(lit_898);
DEFLIT(lit_455);
DEFLIT(lit_46);
DEFLIT(lit_133);
DEFLIT(lit_111);
DEFLIT(lit_896);
DEFLIT(lit_1004);
DEFLIT(lit_1009);
DEFLIT(lit_1044);
DEFLIT(lit_758);
DEFLIT(lit_500);
DEFLIT(lit_684);
DEFLIT(lit_1034);
DEFLIT(lit_1037);
DEFLIT(lit_812);
DEFLIT(lit_444);
DEFLIT(lit_280);
DEFLIT(lit_643);
DEFLIT(lit_930);
DEFLIT(lit_918);
DEFLIT(lit_822);
DEFLIT(lit_984);
DEFLIT(lit_1020);
DEFLIT(lit_550);
DEFLIT(lit_1014);
DEFLIT(lit_273);
DEFLIT(lit_565);
DEFLIT(lit_615);
DEFLIT(lit_675);
DEFLIT(lit_201);
DEFLIT(lit_52);
DEFLIT(lit_553);
DEFLIT(lit_91);
DEFLIT(lit_710);
DEFLIT(lit_441);
DEFLIT(lit_762);
DEFLIT(lit_538);
DEFLIT(lit_381);
DEFLIT(lit_125);
DEFLIT(lit_740);
DEFLIT(lit_1015);
DEFLIT(lit_234);
DEFLIT(lit_887);
DEFLIT(lit_777);
DEFLIT(lit_440);
DEFLIT(lit_703);
DEFLIT(lit_84);
DEFLIT(lit_139);
DEFLIT(lit_256);
DEFLIT(lit_192);
DEFLIT(lit_531);
DEFLIT(lit_796);
DEFLIT(lit_422);
DEFLIT(lit_185);
DEFLIT(lit_367);
DEFLIT(lit_784);
DEFLIT(lit_337);
DEFLIT(lit_293);
DEFLIT(lit_127);
DEFLIT(lit_1002);
DEFLIT(lit_217);
DEFLIT(lit_358);
DEFLIT(lit_932);
DEFLIT(lit_582);
DEFLIT(lit_534);
DEFLIT(lit_1018);
DEFLIT(lit_936);
DEFLIT(lit_1016);
DEFLIT(lit_503);
DEFLIT(lit_307);
DEFLIT(lit_206);
DEFLIT(lit_933);
DEFLIT(lit_706);
DEFLIT(lit_90);
DEFLIT(lit_851);
DEFLIT(lit_344);
DEFLIT(lit_195);
DEFLIT(lit_330);
DEFLIT(lit_451);
DEFLIT(lit_98);
DEFLIT(lit_631);
DEFLIT(lit_205);
DEFLIT(lit_421);
DEFLIT(lit_230);
DEFLIT(lit_369);
DEFLIT(lit_738);
DEFLIT(lit_235);
DEFLIT(lit_809);
DEFLIT(lit_688);
DEFLIT(lit_264);
DEFLIT(lit_556);
DEFLIT(lit_427);
DEFLIT(lit_592);
DEFLIT(lit_478);
DEFLIT(lit_295);
DEFLIT(lit_163);
DEFLIT(lit_132);
DEFLIT(lit_581);
DEFLIT(lit_258);
DEFLIT(lit_608);
DEFLIT(lit_447);
DEFLIT(lit_611);
DEFLIT(lit_442);
DEFLIT(lit_130);
DEFLIT(lit_587);
DEFLIT(lit_696);
DEFLIT(lit_343);
DEFLIT(lit_69);
DEFLIT(lit_1067);
DEFLIT(lit_6);
DEFLIT(lit_140);
DEFLIT(lit_56);
DEFLIT(lit_137);
DEFLIT(lit_774);
DEFLIT(lit_423);
DEFLIT(lit_169);
DEFLIT(lit_1043);
DEFLIT(lit_65);
DEFLIT(lit_767);
DEFLIT(lit_1006);
DEFLIT(lit_525);
DEFLIT(lit_128);
DEFLIT(lit_713);
DEFLIT(lit_414);
DEFLIT(lit_976);
DEFLIT(lit_757);
DEFLIT(lit_804);
DEFLIT(lit_159);
DEFLIT(lit_599);
DEFLIT(lit_399);
DEFLIT(lit_19);
DEFLIT(lit_569);
DEFLIT(lit_833);
DEFLIT(lit_626);
DEFLIT(lit_925);
DEFLIT(lit_957);
DEFLIT(lit_38);
DEFLIT(lit_589);
DEFLIT(lit_677);
DEFLIT(lit_313);
DEFLIT(lit_964);
DEFLIT(lit_874);
DEFLIT(lit_86);
DEFLIT(lit_182);
DEFLIT(lit_788);
DEFLIT(lit_668);
DEFLIT(lit_445);
DEFLIT(lit_119);
DEFLIT(lit_1035);
DEFLIT(lit_155);
DEFLIT(lit_641);
DEFLIT(lit_10);
DEFLIT(lit_841);
DEFLIT(lit_678);
DEFLIT(lit_607);
DEFLIT(lit_75);
DEFLIT(lit_276);
DEFLIT(lit_606);
DEFLIT(lit_648);
DEFLIT(lit_35);
DEFLIT(lit_996);
DEFLIT(lit_33);
DEFLIT(lit_564);
DEFLIT(lit_931);
DEFLIT(lit_1005);
DEFLIT(lit_60);
DEFLIT(lit_632);
DEFLIT(lit_560);
DEFLIT(lit_721);
DEFLIT(lit_362);
DEFLIT(lit_903);
DEFLIT(lit_331);
DEFLIT(lit_434);
DEFLIT(lit_194);
DEFLIT(lit_650);
DEFLIT(lit_1012);
DEFLIT(lit_316);
DEFLIT(lit_325);
DEFLIT(lit_674);
DEFLIT(lit_1013);
DEFLIT(lit_892);
DEFLIT(lit_1030);
DEFLIT(lit_214);
DEFLIT(lit_433);
DEFLIT(lit_711);
DEFLIT(lit_42);
DEFLIT(lit_463);
DEFLIT(lit_914);
DEFLIT(lit_334);
DEFLIT(lit_67);
DEFLIT(lit_474);
DEFLIT(lit_9);
DEFLIT(lit_850);
DEFLIT(lit_994);
DEFLIT(lit_157);
DEFLIT(lit_134);
DEFLIT(lit_612);
DEFLIT(lit_573);
DEFLIT(lit_1021);
DEFLIT(lit_580);
DEFLIT(lit_982);
DEFLIT(lit_873);
DEFLIT(lit_695);
DEFLIT(lit_452);
DEFLIT(lit_76);
DEFLIT(lit_712);
DEFLIT(lit_267);
DEFLIT(lit_78);
DEFLIT(lit_512);
DEFLIT(lit_79);
DEFLIT(lit_454);
DEFLIT(lit_826);
DEFLIT(lit_644);
DEFLIT(lit_492);
DEFLIT(lit_28);
DEFLIT(lit_72);
DEFLIT(lit_475);
DEFLIT(lit_772);
DEFLIT(lit_197);
DEFLIT(lit_962);
DEFLIT(lit_122);
DEFLIT(lit_57);
DEFLIT(lit_872);
DEFLIT(lit_174);
DEFLIT(lit_8);
DEFLIT(lit_913);
DEFLIT(lit_270);
DEFLIT(lit_251);
DEFLIT(lit_987);
DEFLIT(lit_418);
DEFLIT(lit_756);
DEFLIT(lit_736);
DEFLIT(lit_338);
DEFLIT(lit_233);
DEFLIT(lit_672);
DEFLIT(lit_588);
DEFLIT(lit_142);
DEFLIT(lit_166);
DEFLIT(lit_856);
DEFLIT(lit_183);
DEFLIT(lit_20);
DEFLIT(lit_842);
DEFLIT(lit_985);
DEFLIT(lit_304);
DEFLIT(lit_188);
DEFLIT(lit_253);
DEFLIT(lit_355);
DEFLIT(lit_868);
DEFLIT(lit_114);
DEFLIT(lit_93);
DEFLIT(lit_7);
DEFLIT(lit_800);
DEFLIT(lit_401);
DEFLIT(lit_862);
DEFLIT(lit_885);
DEFLIT(lit_302);
DEFLIT(lit_278);
DEFLIT(lit_568);
DEFLIT(lit_662);
DEFLIT(lit_858);
DEFLIT(lit_539);
DEFLIT(lit_863);
DEFLIT(lit_154);
DEFLIT(lit_567);
DEFLIT(lit_158);
DEFLIT(lit_834);
DEFLIT(lit_1046);
DEFLIT(lit_1055);
DEFLIT(lit_939);
DEFLIT(lit_303);
DEFLIT(lit_1057);
DEFLIT(lit_327);
DEFLIT(lit_144);
DEFLIT(lit_605);
DEFLIT(lit_147);
DEFLIT(lit_417);
DEFLIT(lit_541);
DEFLIT(lit_80);
DEFLIT(lit_783);
DEFLIT(lit_993);
DEFLIT(lit_1063);
DEFLIT(lit_329);
DEFLIT(lit_660);
DEFLIT(lit_707);
DEFLIT(lit_465);
DEFLIT(lit_424);
DEFLIT(lit_203);
DEFLIT(lit_604);
DEFLIT(lit_395);
DEFLIT(lit_439);
DEFLIT(lit_306);
DEFLIT(lit_123);
DEFLIT(lit_808);
DEFLIT(lit_1001);
DEFLIT(lit_160);
DEFLIT(lit_782);
DEFLIT(lit_252);
DEFLIT(lit_927);
DEFLIT(lit_269);
DEFLIT(lit_319);
DEFLIT(lit_778);
DEFLIT(lit_971);
DEFLIT(lit_400);
DEFLIT(lit_679);
DEFLIT(lit_146);
DEFLIT(lit_956);
DEFLIT(lit_995);
DEFLIT(lit_515);
DEFLIT(lit_637);
DEFLIT(lit_420);
DEFLIT(lit_622);
DEFLIT(lit_741);
DEFLIT(lit_639);
DEFLIT(lit_524);
DEFLIT(lit_41);
DEFLIT(lit_48);
DEFLIT(lit_384);
DEFLIT(lit_371);
DEFLIT(lit_356);
DEFLIT(lit_633);
DEFLIT(lit_342);
DEFLIT(lit_279);
DEFLIT(lit_178);
DEFLIT(lit_739);
DEFLIT(lit_967);
DEFLIT(lit_969);
DEFLIT(lit_250);
DEFLIT(lit_406);
DEFLIT(lit_722);
DEFLIT(lit_562);
DEFLIT(lit_1054);
DEFLIT(lit_380);
DEFLIT(lit_108);
DEFLIT(lit_807);
DEFLIT(lit_247);
DEFLIT(lit_291);
DEFLIT(lit_910);
DEFLIT(lit_193);
DEFLIT(lit_916);
DEFLIT(lit_318);
DEFLIT(lit_849);
DEFLIT(lit_328);
DEFLIT(lit_948);
DEFLIT(lit_324);
DEFLIT(lit_811);
DEFLIT(lit_877);
DEFLIT(lit_953);
DEFLIT(lit_791);
DEFLIT(lit_1003);
DEFLIT(lit_766);
DEFLIT(lit_419);
DEFLIT(lit_717);
DEFLIT(lit_198);
DEFLIT(lit_775);
DEFLIT(lit_709);
DEFLIT(lit_150);
DEFLIT(lit_597);
DEFLIT(lit_938);
DEFLIT(lit_945);
DEFLIT(lit_614);
DEFLIT(lit_425);
DEFLIT(lit_5);
DEFLIT(lit_940);
DEFLIT(lit_397);
DEFLIT(lit_476);
DEFLIT(lit_702);
DEFLIT(lit_501);
DEFLIT(lit_311);
DEFLIT(lit_990);
DEFLIT(lit_161);
DEFLIT(lit_199);
DEFLIT(lit_623);
DEFLIT(lit_816);
DEFLIT(lit_292);
DEFLIT(lit_731);
DEFLIT(lit_661);
DEFLIT(lit_517);
DEFLIT(lit_405);
DEFLIT(lit_66);
DEFLIT(lit_952);
DEFLIT(lit_51);
DEFLIT(lit_1011);
DEFLIT(lit_636);
DEFLIT(lit_298);
DEFLIT(lit_483);
DEFLIT(lit_1019);
DEFLIT(lit_16);
DEFLIT(lit_412);
DEFLIT(lit_448);
DEFLIT(lit_173);
DEFLIT(lit_561);
DEFLIT(lit_426);
DEFLIT(lit_891);
DEFLIT(lit_919);
DEFLIT(lit_921);
DEFLIT(lit_477);
DEFLIT(lit_928);
DEFLIT(lit_1026);
DEFLIT(lit_620);
DEFLIT(lit_830);
DEFLIT(lit_53);
DEFLIT(lit_585);
DEFLIT(lit_579);
DEFLIT(lit_110);
DEFLIT(lit_231);
DEFLIT(lit_388);
DEFLIT(lit_694);
DEFLIT(lit_484);
DEFLIT(lit_1000);
DEFLIT(lit_907);
DEFLIT(lit_899);
DEFLIT(lit_646);
DEFLIT(lit_912);
DEFLIT(lit_443);
DEFLIT(lit_71);
DEFLIT(lit_117);
DEFLIT(lit_917);
DEFLIT(lit_923);
DEFLIT(lit_654);
DEFLIT(lit_470);
DEFLIT(lit_428);
DEFLIT(lit_17);
DEFLIT(lit_59);
DEFLIT(lit_878);
DEFLIT(lit_498);
DEFLIT(lit_725);
DEFLIT(lit_886);
DEFLIT(lit_177);
DEFLIT(lit_153);
DEFLIT(lit_409);
DEFLIT(lit_113);
DEFLIT(lit_31);
DEFLIT(lit_905);
DEFLIT(lit_1032);
DEFLIT(lit_285);
DEFLIT(lit_58);
DEFLIT(lit_497);
DEFLIT(lit_360);
DEFLIT(lit_621);
DEFLIT(lit_187);
DEFLIT(lit_1066);
DEFLIT(lit_115);
DEFLIT(lit_378);
DEFLIT(lit_301);
DEFLIT(lit_450);
DEFLIT(lit_890);
DEFLIT(lit_365);
DEFLIT(lit_1064);
DEFLIT(lit_1060);
DEFLIT(lit_464);
DEFLIT(lit_719);
DEFLIT(lit_820);
DEFLIT(lit_690);
DEFLIT(lit_901);
DEFLIT(lit_332);
DEFLIT(lit_1052);
DEFLIT(lit_341);
DEFLIT(lit_897);
DEFLIT(lit_162);
DEFLIT(lit_1040);
DEFLIT(lit_11);
DEFLIT(lit_528);
DEFLIT(lit_243);
DEFLIT(lit_683);
DEFLIT(lit_555);
DEFLIT(lit_514);
DEFLIT(lit_103);
DEFLIT(lit_511);
DEFLIT(lit_429);
DEFLIT(lit_402);
DEFLIT(lit_747);
DEFLIT(lit_165);
DEFLIT(lit_894);
DEFLIT(lit_975);
DEFLIT(lit_691);
DEFLIT(lit_530);
DEFLIT(lit_462);
DEFLIT(lit_340);
DEFLIT(lit_1033);
DEFLIT(lit_959);
DEFLIT(lit_26);
DEFLIT(lit_535);
DEFLIT(lit_70);
DEFLIT(lit_232);
DEFLIT(lit_951);
DEFLIT(lit_27);
DEFLIT(lit_949);
DEFLIT(lit_536);
DEFLIT(lit_510);
DEFLIT(lit_268);
DEFLIT(lit_266);
DEFLIT(lit_382);
DEFLIT(lit_818);
DEFLIT(lit_416);
DEFLIT(lit_754);
DEFLIT(lit_322);
DEFLIT(lit_799);
DEFLIT(lit_627);
DEFLIT(lit_189);
DEFLIT(lit_693);
DEFLIT(lit_828);
DEFLIT(lit_854);
DEFLIT(lit_865);
DEFLIT(lit_392);
DEFLIT(lit_289);
DEFLIT(lit_186);
DEFLIT(lit_871);
DEFLIT(lit_838);
DEFLIT(lit_112);
DEFLIT(lit_942);
DEFLIT(lit_99);
DEFLIT(lit_600);
DEFLIT(lit_692);
DEFLIT(lit_223);
DEFLIT(lit_780);
DEFLIT(lit_18);
DEFLIT(lit_164);
DEFLIT(lit_720);
DEFLIT(lit_391);
DEFLIT(lit_795);
DEFLIT(lit_156);
DEFLIT(lit_190);
DEFLIT(lit_40);
DEFLIT(lit_761);
DEFLIT(lit_430);
DEFLIT(lit_966);

/* FUNCTIONS: */

LOCFOR(fun_x_1433_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_ast_error_3);
LOCFOR(fun_namespace_error_4);
LOCFOR(fun_program_type_5);
LOCFOR(fun_program_type_setter_6);
LOCFOR(fun_program_line_7);
LOCFOR(fun_program_line_setter_8);
LOCFOR(fun_9);
LOCFOR(fun_program_register_10);
LOCFOR(fun_program_register_setter_11);
LOCFOR(fun_12);
LOCFOR(fun_binding_name_13);
LOCFOR(fun_binding_name_setter_14);
LOCFOR(fun_binding_mangled_name_15);
LOCFOR(fun_binding_mangled_name_setter_16);
LOCFOR(fun_17);
LOCFOR(fun_binding_type_18);
LOCFOR(fun_binding_type_setter_19);
LOCFOR(fun_binding_inferred_type_20);
LOCFOR(fun_binding_inferred_type_setter_21);
LOCFOR(fun_22);
LOCFOR(fun_global_box_value_23);
LOCFOR(fun_global_box_value_setter_24);
LOCFOR(fun_25);
LOCFOR(fun_binding_kind_26);
LOCFOR(fun_binding_kind_setter_27);
LOCFOR(fun_28);
LOCFOR(fun_binding_module_29);
LOCFOR(fun_binding_module_setter_30);
LOCFOR(fun_31);
LOCFOR(fun_binding_freeQ_32);
LOCFOR(fun_binding_freeQ_setter_33);
LOCFOR(fun_34);
LOCFOR(fun_binding_info_35);
LOCFOR(fun_binding_info_setter_36);
LOCFOR(fun_37);
LOCFOR(fun_binding_prop_38);
LOCFOR(fun_binding_prop_setter_39);
LOCFOR(fun_40);
LOCFOR(fun_binding_module_name_41);
FUNFOR(YevalSastYmaybe_log_dependency);
FUNFOR(YevalSastYmacro_expander);
LOCFOR(fun_binding_value_44);
LOCFOR(fun_binding_value_setter_45);
LOCFOR(fun_46);
LOCFOR(fun_binding_mutableQ_47);
LOCFOR(fun_binding_mutableQ_setter_48);
LOCFOR(fun_49);
LOCFOR(fun_binding_dynamic_extentQ_50);
LOCFOR(fun_binding_dynamic_extentQ_setter_51);
LOCFOR(fun_52);
LOCFOR(fun_binding_dottedQ_53);
LOCFOR(fun_binding_dottedQ_setter_54);
LOCFOR(fun_55);
LOCFOR(fun_binding_index_56);
LOCFOR(fun_binding_index_setter_57);
LOCFOR(fun_58);
LOCFOR(fun_compile_time_program_59);
LOCFOR(fun_compile_time_program_setter_60);
LOCFOR(fun_reference_binding_61);
LOCFOR(fun_reference_binding_setter_62);
LOCFOR(fun_reference_called_functionQ_63);
LOCFOR(fun_reference_called_functionQ_setter_64);
LOCFOR(fun_65);
LOCFOR(fun_reference_frame_number_66);
LOCFOR(fun_reference_frame_number_setter_67);
LOCFOR(fun_reference_frame_offset_68);
LOCFOR(fun_reference_frame_offset_setter_69);
LOCFOR(fun_boundQ_reference_70);
LOCFOR(fun_boundQ_reference_setter_71);
LOCFOR(fun_assignment_form_72);
LOCFOR(fun_assignment_form_setter_73);
LOCFOR(fun_assignment_reference_74);
LOCFOR(fun_assignment_reference_setter_75);
LOCFOR(fun_assignment_binding_76);
LOCFOR(fun_assignment_binding_setter_77);
LOCFOR(fun_signature_bindings_78);
LOCFOR(fun_signature_bindings_setter_79);
LOCFOR(fun_80);
LOCFOR(fun_signature_names_81);
LOCFOR(fun_signature_names_setter_82);
LOCFOR(fun_83);
LOCFOR(fun_signature_specs_84);
LOCFOR(fun_signature_specs_setter_85);
LOCFOR(fun_86);
LOCFOR(fun_signature_naryQ_87);
LOCFOR(fun_signature_naryQ_setter_88);
LOCFOR(fun_89);
LOCFOR(fun_signature_arity_90);
LOCFOR(fun_signature_arity_setter_91);
LOCFOR(fun_92);
LOCFOR(fun_signature_value_93);
LOCFOR(fun_signature_value_setter_94);
LOCFOR(fun_95);
LOCFOR(fun_function_binding_96);
LOCFOR(fun_function_binding_setter_97);
LOCFOR(fun_98);
LOCFOR(fun_function_debug_name_99);
LOCFOR(fun_function_debug_name_setter_100);
LOCFOR(fun_101);
LOCFOR(fun_function_signature_102);
LOCFOR(fun_function_signature_setter_103);
FUNFOR(YevalSastYfunction_bindings);
FUNFOR(YevalSastYfunction_specs);
FUNFOR(YevalSastYfunction_naryQ);
FUNFOR(YevalSastYfunction_value);
LOCFOR(fun_function_kind_108);
FUNFOR(YevalSastYfunction_display_name);
LOCFOR(fun_invalidate_dependent_110);
LOCFOR(fun_loop_111);
LOCFOR(fun_as_lst_112);
LOCFOR(fun_x_1439_113);
LOCFOR(fun_114);
LOCFOR(fun_115);
LOCFOR(fun_function_body_116);
LOCFOR(fun_function_body_setter_117);
LOCFOR(fun_118);
LOCFOR(fun_function_index_119);
LOCFOR(fun_function_index_setter_120);
LOCFOR(fun_121);
LOCFOR(fun_function_temporaries_122);
LOCFOR(fun_function_temporaries_setter_123);
LOCFOR(fun_124);
LOCFOR(fun_function_registers_125);
LOCFOR(fun_function_registers_setter_126);
LOCFOR(fun_127);
LOCFOR(fun_function_data_refs_128);
LOCFOR(fun_function_data_refs_setter_129);
LOCFOR(fun_130);
LOCFOR(fun_function_self_recursiveQ_131);
LOCFOR(fun_function_self_recursiveQ_setter_132);
LOCFOR(fun_133);
LOCFOR(fun_function_source_134);
LOCFOR(fun_function_source_setter_135);
LOCFOR(fun_136);
LOCFOR(fun_function_frame_len_137);
LOCFOR(fun_function_frame_len_setter_138);
LOCFOR(fun_139);
FUNFOR(YevalSastYfree_environment);
LOCFOR(fun_empty_141);
LOCFOR(fun_function_free_142);
LOCFOR(fun_function_free_setter_143);
LOCFOR(fun_144);
LOCFOR(fun_function_kind_145);
LOCFOR(fun_function_adjectives_146);
LOCFOR(fun_function_adjectives_setter_147);
LOCFOR(fun_148);
LOCFOR(fun_function_kind_149);
LOCFOR(fun_function_kind_150);
LOCFOR(fun_alternative_condition_151);
LOCFOR(fun_alternative_condition_setter_152);
LOCFOR(fun_alternative_consequent_153);
LOCFOR(fun_alternative_consequent_setter_154);
LOCFOR(fun_alternative_alternant_155);
LOCFOR(fun_alternative_alternant_setter_156);
FUNFOR(YevalSastYsequential);
LOCFOR(fun_empty_158);
LOCFOR(fun_constant_value_159);
LOCFOR(fun_constant_value_setter_160);
LOCFOR(fun_constant_index_161);
LOCFOR(fun_constant_index_setter_162);
LOCFOR(fun_application_arguments_163);
LOCFOR(fun_application_arguments_setter_164);
LOCFOR(fun_application_tailQ_165);
LOCFOR(fun_application_tailQ_setter_166);
LOCFOR(fun_167);
LOCFOR(fun_application_function_168);
LOCFOR(fun_application_function_setter_169);
LOCFOR(fun_application_knownQ_170);
LOCFOR(fun_application_knownQ_setter_171);
LOCFOR(fun_172);
LOCFOR(fun_application_next_methods_173);
LOCFOR(fun_application_next_methods_setter_174);
LOCFOR(fun_application_binding_175);
LOCFOR(fun_application_binding_setter_176);
LOCFOR(fun_fix_let_bindings_177);
LOCFOR(fun_fix_let_bindings_setter_178);
LOCFOR(fun_fix_let_types_179);
LOCFOR(fun_fix_let_types_setter_180);
LOCFOR(fun_fix_let_arguments_181);
LOCFOR(fun_fix_let_arguments_setter_182);
LOCFOR(fun_fix_let_body_183);
LOCFOR(fun_fix_let_body_setter_184);
FUNFOR(YevalSastYfab_list);
LOCFOR(fun_empty_186);
FUNFOR(YevalSastYarguments);
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
LOCFOR(fun_x_1441_211);
LOCFOR(fun_ast_walkX_212);
LOCFOR(fun_x_1443_213);
LOCFOR(fun_ast_walk_214);
LOCFOR(fun_ast_copy_215);
LOCFOR(fun_ast_copy_216);
LOCFOR(fun_environment_next_217);
LOCFOR(fun_environment_next_setter_218);
LOCFOR(fun_219);
LOCFOR(fun_environment_bindings_220);
LOCFOR(fun_environment_bindings_setter_221);
LOCFOR(fun_environment_module_222);
LOCFOR(fun_environment_module_setter_223);
LOCFOR(fun_environment_module_loader_224);
LOCFOR(fun_environment_module_loader_setter_225);
LOCFOR(fun_environment_uses_modules_226);
LOCFOR(fun_environment_uses_modules_setter_227);
LOCFOR(fun_228);
LOCFOR(fun_environment_allows_foreign_namesQ_229);
LOCFOR(fun_environment_allows_foreign_namesQ_setter_230);
LOCFOR(fun_231);
LOCFOR(fun_232);
LOCFOR(fun_233);
LOCFOR(fun_env_object_name_234);
LOCFOR(fun_objectify_235);
LOCFOR(fun_objectify_list_236);
LOCFOR(fun_objectify_list_237);
LOCFOR(fun_objectify_list_238);
LOCFOR(fun_objectify_239);
LOCFOR(fun_objectify_240);
LOCFOR(fun_objectify_241);
LOCFOR(fun_objectify_242);
LOCFOR(fun_objectify_243);
LOCFOR(fun_objectify_quotation_244);
LOCFOR(fun_objectify_quotation_245);
LOCFOR(fun_objectify_quotation_246);
LOCFOR(fun_objectify_raw_247);
LOCFOR(fun_objectify_boundQ_248);
LOCFOR(fun_objectify_compile_time_249);
LOCFOR(fun_objectify_alternative_250);
LOCFOR(fun_loop_251);
LOCFOR(fun_sequentialize_252);
LOCFOR(fun_transform_defs_253);
LOCFOR(fun_loop_254);
LOCFOR(fun_objectify_sequential_255);
LOCFOR(fun_256);
LOCFOR(fun_objectify_application_257);
LOCFOR(fun_258);
LOCFOR(fun_objectify_application_259);
LOCFOR(fun_260);
LOCFOR(fun_objectify_application_261);
LOCFOR(fun_process_closed_application_262);
LOCFOR(fun_pack_nary_args_263);
LOCFOR(fun_pack_args_264);
LOCFOR(fun_process_nary_closed_application_265);
LOCFOR(fun_convert2arguments_266);
LOCFOR(fun_objectify_assignment_267);
LOCFOR(fun_objectify_assignment_268);
LOCFOR(fun_objectify_assignment_using_269);
LOCFOR(fun_objectify_assignment_using_270);
LOCFOR(fun_objectify_assignment_using_271);
LOCFOR(fun_objectify_assignment_using_272);
LOCFOR(fun_objectify_assignment_using_273);
FUNFOR(YevalSastYupdate_binding_kind);
LOCFOR(fun_ast_define_binding_275);
LOCFOR(fun_objectify_definition_276);
LOCFOR(fun_objectify_variable_definition_277);
LOCFOR(fun_objectify_dynamic_definition_278);
LOCFOR(fun_expand_279);
FUNFOR(YPPmacro);
LOCFOR(fun_objectify_syntax_definition_281);
LOCFOR(fun_objectify_function_definition_282);
FUNFOR(YevalSastYmodule_binding);
LOCFOR(fun_objectify_primitive_definition_284);
LOCFOR(fun_objectify_generic_definition_285);
LOCFOR(fun_objectify_method_definition_286);
LOCFOR(fun_287);
LOCFOR(fun_288);
LOCFOR(fun_289);
LOCFOR(fun_290);
LOCFOR(fun_objectify_function_source_291);
LOCFOR(fun_292);
LOCFOR(fun_293);
LOCFOR(fun_objectify_function_294);
LOCFOR(fun_col_295);
LOCFOR(fun_objectify_signature_296);
LOCFOR(fun_find_297);
LOCFOR(fun_loop_298);
LOCFOR(fun_compute_local_reference_offsets_299);
LOCFOR(fun_objectify_binding_300);
LOCFOR(fun_binding_reference_class_301);
LOCFOR(fun_objectify_binding_302);
LOCFOR(fun_objectify_binding_303);
LOCFOR(fun_default_type_304);
LOCFOR(fun_objectify_free_global_reference_305);
FUNFOR(YevalSastYforeign_nameQ);
LOCFOR(fun_objectify_foreign_reference_307);
LOCFOR(fun_objectify_symbol_308);
LOCFOR(fun_ftype_309);
FUNFOR(YevalSastYfunctions);
LOCFOR(fun_empty_311);
LOCFOR(fun_312);
LOCFOR(fun_313);
LOCFOR(fun_objectify_locals_314);
LOCFOR(fun_objectify_bind_exit_315);
LOCFOR(fun_objectify_unwind_protect_316);
LOCFOR(fun_objectify_monitor_317);
LOCFOR(fun_318);
LOCFOR(fun_319);
LOCFOR(fun_320);
LOCFOR(fun_321);
LOCFOR(fun_322);
LOCFOR(fun_objectify_export_323);
FUNFOR(YevalSastYimport_globalX);
LOCFOR(fun_325);
LOCFOR(fun_objectify_useSexport_module_326);
LOCFOR(fun_327);
LOCFOR(fun_objectify_use_include_328);
LOCFOR(fun_329);
LOCFOR(fun_objectify_use_library_330);
LOCFOR(fun_331);
LOCFOR(fun_use_mod_332);
LOCFOR(fun_use_c_mod_333);
LOCFOR(fun_objectify_use_module_334);
LOCFOR(fun_insert_and_mangle_globalX_335);
FUNFOR(YevalSastYimport_and_mangle_globalX);
LOCFOR(fun_337);
LOCFOR(fun_objectify_use_mangle_module_338);
LOCFOR(fun_expand_bind_list_339);
LOCFOR(fun_expand_bind_list_340);
LOCFOR(fun_expand_bind_list_341);
LOCFOR(fun_expand_bind_listT_342);
LOCFOR(fun_expand_bind_listT_343);
LOCFOR(fun_expand_bind_element_344);
LOCFOR(fun_expand_bind_element_345);
LOCFOR(fun_expand_pattern_346);
LOCFOR(fun_347);
LOCFOR(fun_expand_syntax_if_348);
LOCFOR(fun_r_extendT_349);
LOCFOR(fun_insert_globalX_350);
LOCFOR(fun_351);
LOCFOR(fun_insert_globalsX_352);
LOCFOR(fun_find_static_global_environment_353);
LOCFOR(fun_find_static_global_environment_354);
LOCFOR(fun_find_syntax_environment_355);
LOCFOR(fun_find_environment_module_356);
LOCFOR(fun_loop_357);
LOCFOR(fun_find_binding_358);
LOCFOR(fun_find_binding_359);
LOCFOR(fun_find_binding_360);
LOCFOR(fun_frame_bindings_361);
LOCFOR(fun_register_magic_binding_362);
LOCFOR(fun_magic_bindings_363);
LOCFOR(fun_x_1454_364);
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
LOCFOR(fun_378);
LOCFOR(fun_379);
LOCFOR(fun_380);
LOCFOR(fun_381);
LOCFOR(fun_382);
LOCFOR(fun_383);
LOCFOR(fun_384);
LOCFOR(fun_385);
LOCFOR(fun_386);
LOCFOR(fun_387);
LOCFOR(fun_pairize_388);
LOCFOR(fun_389);
LOCFOR(fun_390);
LOCFOR(fun_391);
LOCFOR(fun_392);
LOCFOR(fun_393);
LOCFOR(fun_394);
LOCFOR(fun_ast_macro_expand_395);
LOCFOR(fun_396);
LOCFOR(fun_397);
LOCFOR(fun_398);
LOCFOR(fun_399);
LOCFOR(fun_400);
LOCFOR(fun_401);
LOCFOR(fun_402);
LOCFOR(fun_403);
LOCFOR(fun_transaction_implemented_bindings_404);
LOCFOR(fun_transaction_implemented_bindings_setter_405);
LOCFOR(fun_406);
LOCFOR(fun_transaction_dependents_407);
LOCFOR(fun_transaction_dependents_setter_408);
LOCFOR(fun_409);
FUNFOR(YevalSastYtransaction_register_implemented_binding);
FUNFOR(YevalSastYtransaction_register_dependent);
FUNFOR(YevalSastYtransaction_emptyQ);
LOCFOR(fun_413);
LOCFOR(fun_414);
FUNFOR(YevalSastYmerge_transactionsX);
LOCFOR(fun_416);
LOCFOR(fun_417);
FUNFOR(YevalSastYroll_back_transaction);
LOCFOR(fun_419);
LOCFOR(fun_420);
FUNFOR(YevalSastYcall_with_subtransaction);
LOCFOR(fun_x_1458_422);
LOCFOR(fun_423);
LOCFOR(fun_424);
LOCFOR(fun_425);
FUNFOR(YevalSastYobjectify_with_subtransaction);
LOCFOR(fun_module_loader_modules_427);
LOCFOR(fun_module_loader_modules_setter_428);
LOCFOR(fun_429);
LOCFOR(fun_module_loader_stack_430);
LOCFOR(fun_module_loader_stack_setter_431);
LOCFOR(fun_432);
LOCFOR(fun_module_name_433);
LOCFOR(fun_module_name_setter_434);
LOCFOR(fun_module_mangled_name_435);
LOCFOR(fun_module_mangled_name_setter_436);
LOCFOR(fun_437);
LOCFOR(fun_module_mangled_string_name_438);
LOCFOR(fun_module_mangled_string_name_setter_439);
LOCFOR(fun_440);
LOCFOR(fun_module_target_environment_441);
LOCFOR(fun_module_target_environment_setter_442);
LOCFOR(fun_module_syntax_environment_443);
LOCFOR(fun_module_syntax_environment_setter_444);
LOCFOR(fun_Pmodule_exports_445);
LOCFOR(fun_Pmodule_exports_setter_446);
LOCFOR(fun_447);
LOCFOR(fun_module_data_processedQ_448);
LOCFOR(fun_module_data_processedQ_setter_449);
LOCFOR(fun_450);
LOCFOR(fun_module_runtime_data_451);
LOCFOR(fun_module_runtime_data_setter_452);
LOCFOR(fun_453);
LOCFOR(fun_module_transaction_454);
LOCFOR(fun_module_transaction_setter_455);
LOCFOR(fun_456);
LOCFOR(fun_module_uses_c_files_457);
LOCFOR(fun_module_uses_c_files_setter_458);
LOCFOR(fun_459);
LOCFOR(fun_module_uses_c_includes_460);
LOCFOR(fun_module_uses_c_includes_setter_461);
LOCFOR(fun_462);
LOCFOR(fun_module_uses_c_libraries_463);
LOCFOR(fun_module_uses_c_libraries_setter_464);
LOCFOR(fun_465);
LOCFOR(fun_module_exports_466);
FUNFOR(YevalSastYset_module_environments);
LOCFOR(fun_468);
FUNFOR(YevalSastYdo_module_loader_modules);
LOCFOR(fun_module_loader_module_type_470);
FUNFOR(YevalSastYregister_moduleX);
FUNFOR(YevalSastYprobe_module);
LOCFOR(fun_473);
LOCFOR(fun_474);
FUNFOR(YevalSastYload_and_register_module);
FUNFOR(YevalSastYexport_bindingX);
FUNFOR(YevalSastYbinding_native_toQ);
LOCFOR(fun_478);
FUNFOR(YevalSastYreport_undefined_global_bindings);
LOCFOR(fun_480);
LOCFOR(fun_481);
LOCFOR(fun_add_user_482);
LOCFOR(fun_483);
FUNFOR(YevalSastYcompute_transitive_users);
FUNFOR(YevalSastYremove_module_internalX);
LOCFOR(fun_486);
FUNFOR(YevalSastYremove_modules_by_nameX);
FUNFOR(YevalSastYmodule_name_to_relpath);
LOCFOR(fun_489);
FUNFOR(YevalSastYinstall_initial_bindings);
FUNFOR(YevalSastYfab_static_global_environment);
LOCFOR(fun_492);
FUNFOR(YevalSastYfab_subset_environment);
LOCFOR(fun_494);
LOCFOR(fun_495);
LOCFOR(fun_496);
LOCFOR(fun_497);
LOCFOR(fun_load_module_498);
FUNFOR(YevalSastYruntime_module_loader);
FUNFOR(YevalSastYruntime_module);
FUNFOR(YevalSastYruntime_environment);
FUNFOR(YevalSastYruntime_core_environment);
FUNFOR(YevalSastYunchecked_runtime_environment);
FUNFOR(YevalSastYreloader_do_create_module);
FUNFOR(YevalSastYreloader_do_use_module);
FUNFOR(YevalSastYreloader_do_import);
FUNFOR(YevalSastYprocess_module_data);
FUNFOR(YevalSastYensure_module_data);
FUNFOR(YevalSastYreloader_do_runtime_binding);
FUNFOR(YevalSastYreloader_do_dynamic_binding);
FUNFOR(YevalSastYreloader_do_other_binding);
FUNFOR(YevalSastYreloader_do_export);
FUNFOR(YevalSastYreload_modules);
LOCFOR(fun_514);
FUNFOR(YevalSastYinstall_magic_bindings);
FUNFOR(YevalSastYreload_macros);
FUNFOR(YevalSastYinstall_interpreter_hacks);
FUNFOR(YevalSastYinit_runtime);
FUNFOR(YevalSastYfab_syntax_environment);
FUNFOR(YevalSastYfab_g2c_module);
FUNFOR(YevalSastYinit_g2c_boot_environment);
FUNFOR(YevalSastYinit_g2c_regular_environment);
FUNFOR(YevalSastYinit_ast);
LOCFOR(fun_loop_524);
FUNFOR(YevalSastYdo_static_global_bindings);
LOCFOR(fun_loop_526);
FUNFOR(YevalSastYdo_named_static_global_bindings);
extern P YevalSastY___main_0___ ();
extern P YevalSastY___main_1___ ();
extern P YevalSastY___main_2___ ();
extern P YevalSastY___main_3___ ();
extern P YevalSastY___main_4___ ();
extern P YevalSastY___main_5___ ();
extern P YevalSastY___main_6___ ();
extern P YevalSastY___main_7___ ();
extern P YevalSastY___main_8___ ();
extern P YevalSastY___main_9___ ();
extern P YevalSastY___main_10___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_x_1433_0) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_5),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_1) {
  P return_;
  P saved_dependentF2633;
  P x_1432F2632;
  P x_1432F2631;
  P x_1432F2630;
  P x_1432F2629;
  P x_1432F2628;
  P bodyF2627;
  P dependentF2626;
  P x_1432F2625;
  P x_1433F2624;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1433_0,2);
  x_1433F2624 = T1;
  FUNINIT(x_1433F2624, 2,FREEREF(0),return_);
  x_1432F2625 = FREEREF(0);
  dependentF2626 = YPfalse;
  dependentF2626 = BOXFAB(dependentF2626);
  bodyF2627 = YPfalse;
  bodyF2627 = BOXFAB(bodyF2627);
  T7 = CALL2(1,VARREF(YisaQ),x_1432F2625,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1432F2625,LITREF(lit_5),x_1433F2624);
    x_1432F2628 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1432F2628,x_1433F2624);
    BOXVAL(dependentF2626) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1432F2628);
    x_1432F2629 = T12;
    BOXVAL(bodyF2627) = x_1432F2629;
    x_1432F2630 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1432F2630,x_1433F2624);
    x_1432F2631 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1432F2631,x_1433F2624);
    T17 = CALL1(1,VARREF(Ytail),x_1432F2630);
    x_1432F2632 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1432F2632,x_1433F2624);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1433F2624,LITREF(lit_6),x_1432F2625);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  saved_dependentF2633 = T21;
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T28 = CALL1(1,VARREF(Ylst),saved_dependentF2633);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,LITREF(lit_9));
  T26 = CALL1(1,VARREF(Ylst),T27);
  T25 = CALL2(1,VARREF(YgooSmacrosYcat),T26,LITREF(lit_9));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T35 = BOXVAL(dependentF2626);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T34,LITREF(lit_9));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T42 = BOXVAL(bodyF2627);
  T40 = CALL3(1,VARREF(YgooSmacrosYcat),T41,T42,LITREF(lit_9));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T47 = CALL1(1,VARREF(Ylst),saved_dependentF2633);
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T47,LITREF(lit_9));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),T38,T39,T43,LITREF(lit_9));
  T36 = CALL1(1,VARREF(Ylst),T37);
  T22 = CALL5(1,VARREF(YgooSmacrosYcat),T23,T24,T30,T36,LITREF(lit_9));
  T20 = T22;
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_1,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_error_3) {
  P message_,arguments_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
loop:
  T2 = CALL1(1,message_,VARREF(YLstrG));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLsimple_ast_errorG),VARREF(YgooSconditionsYcondition_message),T2,VARREF(YgooSconditionsYcondition_arguments),arguments_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_namespace_error_4) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLnamespace_errorG),VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_type_5) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYprogram_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_type_setter_6) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYprogram_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_line_7) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYprogram_line));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_line_setter_8) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYprogram_line));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_9) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_program_register_10) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYprogram_register));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_register_setter_11) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYprogram_register));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_12) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_name_13) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_name_setter_14) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_mangled_name_15) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_mangled_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_mangled_name_setter_16) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_mangled_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_type_18) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_type_setter_19) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_inferred_type_20) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_inferred_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_inferred_type_setter_21) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_inferred_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_22) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YevalSastYast_LbotG));
}

FUNCODEDEF(fun_global_box_value_23) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYglobal_box_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_global_box_value_setter_24) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYglobal_box_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_25) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_binding_kind_26) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_kind));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_kind_setter_27) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_kind));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_69));
}

FUNCODEDEF(fun_binding_module_29) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_module));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_module_setter_30) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_module));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_31) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_freeQ_32) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_freeQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_freeQ_setter_33) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_freeQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_info_35) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_info_setter_36) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_prop_38) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_prop));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_prop_setter_39) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_prop));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_40) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_module_name_41) {
  P b_;
  P modF2634;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_module),b_);
  modF2634 = T1;
  if (modF2634 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYmodule_name),modF2634);
    T2 = T3;
  } else {
    T2 = VARREF(YevalSastYDgoo_boot_module_name);
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYmaybe_log_dependency) {
  P dependable_,dtype_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(dtype_, 1);
loop:
  if (DYNREF(YevalSastYTcurrent_dependentT) != YPfalse) {
    CALL3(1,VARREF(YevalSdependencyYlog_dependency),dependable_,DYNREF(YevalSastYTcurrent_dependentT),dtype_);
    T1 = CALL1(1,VARREF(YevalSastYtransaction_register_dependent),DYNREF(YevalSastYTcurrent_dependentT));
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYmacro_expander) {
  P macro_binding_;
  P T0;
  P a1;
LINK_STACK();
  ARG(macro_binding_, 0);
loop:
  CALL2(1,VARREF(YevalSastYmaybe_log_dependency),macro_binding_,VARREF(YevalSdependencyYDexpansion_parse_dependency));
  T0 = CALL1(1,VARREF(YevalSastYbinding_handler),macro_binding_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_binding_value_44) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_value_setter_45) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_46) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_mutableQ_47) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_mutableQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_mutableQ_setter_48) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_mutableQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_dynamic_extentQ_50) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_dynamic_extentQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_dynamic_extentQ_setter_51) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_dynamic_extentQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_binding_dottedQ_53) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_dottedQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_dottedQ_setter_54) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_dottedQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_binding_index_56) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_setter_57) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_compile_time_program_59) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYcompile_time_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compile_time_program_setter_60) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYcompile_time_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_binding_61) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYreference_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_binding_setter_62) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYreference_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_called_functionQ_63) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYreference_called_functionQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_called_functionQ_setter_64) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYreference_called_functionQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_reference_frame_number_66) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYreference_frame_number));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_frame_number_setter_67) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYreference_frame_number));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_frame_offset_68) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYreference_frame_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_frame_offset_setter_69) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYreference_frame_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_boundQ_reference_70) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYboundQ_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_boundQ_reference_setter_71) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYboundQ_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_form_72) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYassignment_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_form_setter_73) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYassignment_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_reference_74) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYassignment_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_reference_setter_75) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYassignment_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_binding_76) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYassignment_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assignment_binding_setter_77) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYassignment_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_bindings_78) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYsignature_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_bindings_setter_79) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_80) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_signature_names_81) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYsignature_names));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_names_setter_82) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_names));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_83) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_signature_specs_84) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYsignature_specs));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_specs_setter_85) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_specs));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_86) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_signature_naryQ_87) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYsignature_naryQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_naryQ_setter_88) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_naryQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_89) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_signature_arity_90) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYsignature_arity));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_arity_setter_91) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_arity));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_92) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_signature_value_93) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYsignature_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_signature_value_setter_94) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_95) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_binding_96) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_binding_setter_97) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_98) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_debug_name_99) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_debug_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_debug_name_setter_100) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_debug_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_101) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_signature_102) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_signature));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_signature_setter_103) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_signature));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfunction_bindings) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_signature),x_);
  T0 = CALL1(1,VARREF(YevalSastYsignature_bindings),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfunction_specs) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_signature),x_);
  T0 = CALL1(1,VARREF(YevalSastYsignature_specs),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfunction_naryQ) {
  P x_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYfunction_signature),x_);
  T1 = CALL1(1,VARREF(YevalSastYsignature_naryQ),T2);
  T0 = CALL1(1,VARREF(YevalSastYconstant_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfunction_value) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_signature),x_);
  T0 = CALL1(1,VARREF(YevalSastYsignature_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_kind_108) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_241));
}

FUNCODEDEF(YevalSastYfunction_display_name) {
  P f_;
  P x_1435F2637;
  P x_1434F2636;
  P bF2635;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(f_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),f_);
  bF2635 = T1;
  x_1434F2636 = bF2635;
  x_1435F2637 = VARREF(YisaQ);
  T5 = CALL2(1,x_1435F2637,x_1434F2636,VARREF(YLsymG));
  if (T5 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),bF2635);
    T4 = T6;
  } else {
    T8 = CALL2(1,x_1435F2637,x_1434F2636,VARREF(YevalSastYLmodule_bindingG));
    if (T8 != YPfalse) {
      T10 = CALL1(1,VARREF(YevalSastYbinding_module_name),bF2635);
      T11 = CALL1(1,VARREF(YevalSastYbinding_name),bF2635);
      T9 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_244),T10,T11);
      T7 = T9;
    } else {
      T7 = LITREF(lit_245);
    }
    T4 = T7;
  }
  T3 = T4;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_invalidate_dependent_110) {
  P dependent_,dependable_,dtype_;
  P nameF2638;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(dependable_, 1);
  ARG(dtype_, 2);
loop:
  CALL1(1,VARREF(YevalSdependencyYdetach_dependent),dependent_);
  T1 = CALL1(1,VARREF(YevalSastYfunction_display_name),dependent_);
  nameF2638 = T1;
  T3 = CALL2(1,VARREF(YevalSdependencyYdependency_includes_anyQ),dtype_,VARREF(YevalSdependencyYDparse_dependencies));
  if (T3 != YPfalse) {
    T4 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_248),nameF2638);
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YevalSdependencyYdependency_includes_anyQ),dtype_,VARREF(YevalSdependencyYDoptimizaton_dependencies));
    if (T6 != YPfalse) {
      T7 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_249),nameF2638);
      T5 = T7;
    } else {
      if (YPtrue != YPfalse) {
        T9 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_250),nameF2638);
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

FUNCODEDEF(fun_loop_111) {
  P res_,e_;
  P T0,T1,T2,T3,T4,T5,T6;
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

FUNCODEDEF(fun_as_lst_112) {
  P e_;
  P loopF2639;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_111,1);
  loopF2639 = T1;
  FUNINIT(loopF2639, 1,loopF2639);
  T2 = CALL2(0,loopF2639,Ynil,e_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1439_113) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_260),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_114) {
  P return_;
  P x_1438F2646;
  P x_1438F2645;
  P x_1438F2644;
  P x_1438F2643;
  P nameF2642;
  P x_1438F2641;
  P x_1439F2640;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1439_113,2);
  x_1439F2640 = T1;
  FUNINIT(x_1439F2640, 2,FREEREF(0),return_);
  x_1438F2641 = FREEREF(0);
  nameF2642 = YPfalse;
  nameF2642 = BOXFAB(nameF2642);
  T5 = CALL2(1,VARREF(YisaQ),x_1438F2641,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1438F2641,LITREF(lit_260),x_1439F2640);
    x_1438F2643 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1438F2643,x_1439F2640);
    BOXVAL(nameF2642) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1438F2643);
    x_1438F2644 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1438F2644,x_1439F2640);
    x_1438F2645 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1438F2645,x_1439F2640);
    T14 = CALL1(1,VARREF(Ytail),x_1438F2644);
    x_1438F2646 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1438F2646,x_1439F2640);
    T11 = T15;
    T8 = T11;
    T6 = T8;
  } else {
    T16 = CALL2(1,x_1439F2640,LITREF(lit_6),x_1438F2641);
  }
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_261));
  T20 = BOXVAL(nameF2642);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_251));
  T22 = CALL2(1,VARREF(YgooSmacrosYcat),T23,LITREF(lit_9));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T21,LITREF(lit_9));
  T3 = T17;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_115) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_114,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_body_116) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_body_setter_117) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_118) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_index_119) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_index_setter_120) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_121) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_function_temporaries_122) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_temporaries));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_temporaries_setter_123) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_temporaries));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_124) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_function_registers_125) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_registers));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_registers_setter_126) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_registers));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_127) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_data_refs_128) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_data_refs));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_data_refs_setter_129) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_data_refs));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_130) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_self_recursiveQ_131) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_self_recursiveQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_self_recursiveQ_setter_132) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_self_recursiveQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_133) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_source_134) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_source));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_source_setter_135) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_source));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_136) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_frame_len_137) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_frame_len));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_frame_len_setter_138) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_frame_len));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_139) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YevalSastYfree_environment) {
  P h_,t_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
loop:
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfree_environmentG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_empty_141) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YevalSastYDfree_environment_empty));
}

FUNCODEDEF(fun_function_free_142) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_free_setter_143) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_144) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLfree_environmentG));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_kind_145) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_315));
}

FUNCODEDEF(fun_function_adjectives_146) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfunction_adjectives));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_adjectives_setter_147) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_adjectives));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_148) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_function_kind_149) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_323));
}

FUNCODEDEF(fun_function_kind_150) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_326));
}

FUNCODEDEF(fun_alternative_condition_151) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYalternative_condition));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alternative_condition_setter_152) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYalternative_condition));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alternative_consequent_153) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYalternative_consequent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alternative_consequent_setter_154) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYalternative_consequent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alternative_alternant_155) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYalternative_alternant));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alternative_alternant_setter_156) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYalternative_alternant));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYsequential) {
  P h_,t_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
loop:
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLsequentialG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_empty_158) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YevalSastYDsequential_empty));
}

FUNCODEDEF(fun_constant_value_159) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYconstant_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_constant_value_setter_160) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYconstant_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_constant_index_161) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYconstant_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_constant_index_setter_162) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYconstant_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_arguments_163) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYapplication_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_arguments_setter_164) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_tailQ_165) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYapplication_tailQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_tailQ_setter_166) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_tailQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_167) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_application_function_168) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYapplication_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_function_setter_169) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_knownQ_170) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYapplication_knownQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_knownQ_setter_171) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_knownQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_172) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_application_next_methods_173) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYapplication_next_methods));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_next_methods_setter_174) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_next_methods));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_binding_175) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYapplication_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_application_binding_setter_176) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_bindings_177) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfix_let_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_bindings_setter_178) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfix_let_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_types_179) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfix_let_types));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_types_setter_180) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfix_let_types));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_arguments_181) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfix_let_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_arguments_setter_182) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfix_let_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_body_183) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYfix_let_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fix_let_body_setter_184) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfix_let_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfab_list) {
  P h_,t_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
loop:
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_empty_186) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YevalSastYDfab_list_empty));
}

FUNCODEDEF(YevalSastYarguments) {
  P h_,t_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
loop:
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLargumentsG),VARREF(Yhead),h_,VARREF(Ytail),t_);
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
  RET(VARREF(YevalSastYDarguments_empty));
}

FUNCODEDEF(fun_locals_bindings_189) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYlocals_bindings));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYlocals_bindings));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYlocals_functions));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYlocals_functions));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYlocals_body));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYlocals_body));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbind_exit_main_fun));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbind_exit_main_fun));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYunwind_protect_protected_thunk));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYunwind_protect_protected_thunk));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYunwind_protect_cleanup_thunk));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYunwind_protect_cleanup_thunk));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmonitor_type));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_type));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmonitor_info));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_info));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmonitor_test));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_test));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmonitor_handler));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_handler));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmonitor_main_thunk));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_main_thunk));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1441_211) {
  P x_1440_;
  P xF2650;
  P setterF2649;
  P getterF2648;
  P propF2647;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1;
LINK_STACK();
  ARG(x_1440_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1440_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1440_);
    propF2647 = T4;
    T6 = CALL1(1,VARREF(Yprop_getter),propF2647);
    getterF2648 = T6;
    T8 = CALL1(1,VARREF(Yprop_setter),propF2647);
    setterF2649 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYEE),getterF2648,VARREF(YevalSastYbinding_value));
    T9 = CALL1(1,VARREF(Ynot),T10);
    if (T9 != YPfalse) {
      T12 = CALL2(1,VARREF(Yprop_boundQ),FREEREF(0),getterF2648);
      if (T12 != YPfalse) {
        T14 = CALL1(1,getterF2648,FREEREF(0));
        xF2650 = T14;
        T16 = CALL2(1,VARREF(YisaQ),xF2650,VARREF(YevalSastYLprogramG));
        if (T16 != YPfalse) {
          T18 = CALL4(1,VARREF(YgooSmacrosYnapp),FREEREF(1),YPfalse,xF2650,FREEREF(2));
          T17 = CALL2(1,setterF2649,T18,FREEREF(0));
          T15 = T17;
        } else {
          T15 = YPfalse;
        }
        T13 = T15;
        T11 = T13;
      } else {
        T11 = YPfalse;
      }
    } else {
    }
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1440_);
    a1 = T20;
    x_1440_ = a1;
    goto loop;
    T7 = T19;
    T5 = T7;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_walkX_212) {
  P g_,o_,args_;
  P x_1441F2651;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = FUNSHELL(1,fun_x_1441_211,4);
  x_1441F2651 = T0;
  FUNINIT(x_1441F2651, 4,o_,g_,args_,x_1441F2651);
  T3 = CALL1(1,VARREF(Yobject_props),o_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_1441F2651,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_x_1443_213) {
  P x_1442_;
  P xF2654;
  P getterF2653;
  P propF2652;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(x_1442_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1442_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1442_);
    propF2652 = T4;
    T6 = CALL1(1,VARREF(Yprop_getter),propF2652);
    getterF2653 = T6;
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),getterF2653,VARREF(YevalSastYbinding_value));
    T7 = CALL1(1,VARREF(Ynot),T8);
    if (T7 != YPfalse) {
      T10 = CALL2(1,VARREF(Yprop_boundQ),FREEREF(0),getterF2653);
      if (T10 != YPfalse) {
        T12 = CALL1(1,getterF2653,FREEREF(0));
        xF2654 = T12;
        T14 = CALL2(1,VARREF(YisaQ),xF2654,VARREF(YevalSastYLprogramG));
        if (T14 != YPfalse) {
          T15 = CALL4(1,VARREF(YgooSmacrosYnapp),FREEREF(1),YPfalse,xF2654,FREEREF(2));
          T13 = T15;
        } else {
          T13 = YPfalse;
        }
        T11 = T13;
        T9 = T11;
      } else {
        T9 = YPfalse;
      }
    } else {
    }
    T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1442_);
    a1 = T17;
    x_1442_ = a1;
    goto loop;
    T5 = T16;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_walk_214) {
  P g_,o_,args_;
  P x_1443F2655;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = FUNSHELL(1,fun_x_1443_213,4);
  x_1443F2655 = T0;
  FUNINIT(x_1443F2655, 4,o_,g_,args_,x_1443F2655);
  T3 = CALL1(1,VARREF(Yobject_props),o_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_1443F2655,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_ast_copy_215) {
  P x_;
  P copyF2656;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yclone),x_);
  copyF2656 = T1;
  CALL2(1,VARREF(YevalSastYprogram_register_setter),YPfalse,copyF2656);
  T2 = CALL2(1,VARREF(YevalSastYast_walkX),VARREF(YevalSastYast_copy),copyF2656);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_copy_216) {
  P x_;
  P xF2661;
  P yF2660;
  P xF2659;
  P tmpF2658;
  P next_metsF2657;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T3 = (P)YPnext_methods();
    next_metsF2657 = T3;
    tmpF2658 = next_metsF2657;
    if (tmpF2658 != YPfalse) {
      xF2659 = next_metsF2657;
      yF2660 = Ynil;
      T10 = (P)YPeqQ(xF2659,yF2660);
      T9 = (P)YPbb(T10);
      T8 = T9;
      xF2661 = T8;
      T12 = (P)YPeqQ(xF2661,YPfalse);
      T11 = (P)YPbb(T12);
      T7 = T11;
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T5 = T6;
    if (T5 != YPfalse) {
      T14 = CALL1(1,VARREF(Yhead),next_metsF2657);
      T15 = CALL1(1,VARREF(Ytail),next_metsF2657);
      T13 = CALL4(1,VARREF(YgooSmacrosYnapp),T14,T15,x_,Ynil);
      T4 = T13;
    } else {
      T17 = (P)YPfun_reg();
      T18 = CALL1(1,VARREF(Ylst),x_);
      T16 = CALL2(1,VARREF(Yno_next_methods_error),T17,T18);
      T4 = T16;
    }
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_next_217) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYenvironment_next));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_next_setter_218) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYenvironment_next));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_219) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_environment_bindings_220) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYenvironment_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_bindings_setter_221) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYenvironment_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_module_222) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYenvironment_module));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_module_setter_223) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYenvironment_module));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_module_loader_224) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYenvironment_module_loader));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_module_loader_setter_225) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYenvironment_module_loader));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_uses_modules_226) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYenvironment_uses_modules));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_uses_modules_setter_227) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYenvironment_uses_modules));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_228) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_allows_foreign_namesQ_229) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYenvironment_allows_foreign_namesQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_environment_allows_foreign_namesQ_setter_230) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYenvironment_allows_foreign_namesQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_231) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_232) {
  P binding_;
  P tmpF2663;
  P tmpF2662;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T3 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),T3,LITREF(lit_69));
  tmpF2662 = T2;
  if (tmpF2662 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYbinding_global_box),binding_);
    tmpF2663 = T6;
    if (tmpF2663 != YPfalse) {
      T10 = CALL1(1,VARREF(YevalSastYbinding_global_box),binding_);
      T9 = CALL1(1,VARREF(YevalSastYglobal_box_value),T10);
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
    T12 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T11 = CALL1(1,FREEREF(1),T12);
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_233) {
  P return_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T0 = FUNFAB(fun_232,2,FREEREF(0),return_);
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),LITREF(lit_0));
  CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T0,T1);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_env_object_name_234) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNFAB(fun_233,1,x_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_235) {
  P e_,r_,tailQ_;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL2(1,VARREF(YisaQ),e_,VARREF(YevalSastYLprogramG));
  if (T1 != YPfalse) {
    T0 = e_;
  } else {
    T4 = CALL1(1,VARREF(Yhead),e_);
    T3 = CALL3(1,VARREF(YevalSastYobjectify),T4,r_,YPfalse);
    T2 = CALL4(1,VARREF(YevalSastYobjectify_list),T3,e_,r_,tailQ_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_list_236) {
  P f_,e_,r_,tailQ_;
  P T0,T1;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(Ytail),e_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_application),f_,T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_list_237) {
  P f_,e_,r_,tailQ_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),f_);
  T1 = CALL1(1,VARREF(YevalSastYbinding_handler),T2);
  T0 = CALL3(1,T1,e_,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_list_238) {
  P f_,e_,r_,tailQ_;
  P T0,T1,T2,T3;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = CALL1(1,VARREF(YevalSastYreference_binding),f_);
  T2 = CALL1(1,VARREF(YevalSastYmacro_expander),T3);
  T1 = CALL3(1,T2,e_,r_,tailQ_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_239) {
  P e_,r_,tailQ_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T0 = CALL2(1,VARREF(YevalSastYobjectify_symbol),e_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_240) {
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

FUNCODEDEF(fun_objectify_241) {
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

FUNCODEDEF(fun_objectify_242) {
  P e_,r_,tailQ_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),e_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_243) {
  P e_,r_,tailQ_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),e_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_quotation_244) {
  P value_,r_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_quotation_245) {
  P value_,r_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLimmediate_constantG),VARREF(YevalSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_quotation_246) {
  P value_,r_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLimmediate_constantG),VARREF(YevalSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_raw_247) {
  P value_,r_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLraw_constantG),VARREF(YevalSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_boundQ_248) {
  P e_,r_,tailQ_;
  P refF2664;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL2(1,VARREF(YevalSastYobjectify_symbol),e_,r_);
  refF2664 = T1;
  T2 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLboundQG),VARREF(YevalSastYboundQ_reference),refF2664);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_compile_time_249) {
  P program_,r_,tailQ_,rtQ_;
  P tmpF2669;
  P astF2668;
  P target_envF2667;
  P syntax_envF2666;
  P modF2665;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(program_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  ARG(rtQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  modF2665 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_syntax_environment),modF2665);
  syntax_envF2666 = T3;
  T5 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF2665);
  target_envF2667 = T5;
  T7 = CALL3(1,VARREF(YevalSastYobjectify),program_,syntax_envF2666,tailQ_);
  astF2668 = T7;
  CALL1(1,VARREF(YevalSastYast_evaluate),astF2668);
  tmpF2669 = rtQ_;
  if (tmpF2669 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmathYNEE),syntax_envF2666,target_envF2667);
    T10 = T11;
  } else {
    T10 = YPfalse;
  }
  T9 = T10;
  if (T9 != YPfalse) {
    T12 = CALL3(1,VARREF(YevalSastYobjectify),program_,r_,tailQ_);
    T8 = T12;
  } else {
    T13 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
    T8 = T13;
  }
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_alternative_250) {
  P t_,c_,a_,r_,tailQ_;
  P T0,T1,T2,T3;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(t_, 0);
  ARG(c_, 1);
  ARG(a_, 2);
  ARG(r_, 3);
  ARG(tailQ_, 4);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify),t_,r_,YPfalse);
  T2 = CALL3(1,VARREF(YevalSastYobjectify),c_,r_,tailQ_);
  T3 = CALL3(1,VARREF(YevalSastYobjectify),a_,r_,tailQ_);
  T0 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_condition),T1,VARREF(YevalSastYalternative_consequent),T2,VARREF(YevalSastYalternative_alternant),T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_251) {
  P eT_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(eT_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLsequentialG));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),eT_);
    T6 = CALL1(1,VARREF(Ytail),eT_);
    T5 = CALL1(0,FREEREF(0),T6);
    T3 = CALL2(1,VARREF(YevalSastYsequential),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sequentialize_252) {
  P eT_;
  P loopF2670;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(eT_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Ytail),eT_);
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T5);
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),eT_);
      T3 = T6;
    } else {
      T8 = FUNSHELL(1,fun_loop_251,1);
      loopF2670 = T8;
      FUNINIT(loopF2670, 1,loopF2670);
      T9 = CALL1(0,loopF2670,eT_);
      T7 = T9;
      T3 = T7;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_transform_defs_253) {
  P eT_;
  P eF2671;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(eT_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T3 = CALL1(1,VARREF(Yhead),eT_);
    eF2671 = T3;
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_defQ),eF2671);
    if (T5 != YPfalse) {
      T9 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
      T15 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_variable),eF2671);
      T14 = CALL1(1,VARREF(Ylst),T15);
      T17 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_value),eF2671);
      T16 = CALL1(1,VARREF(Ylst),T17);
      T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T16,LITREF(lit_9));
      T12 = CALL1(1,VARREF(Ylst),T13);
      T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,LITREF(lit_9));
      T10 = CALL1(1,VARREF(Ylst),T11);
      T19 = CALL1(1,VARREF(Ytail),eT_);
      T18 = CALL1(1,VARREF(YevalSastYtransform_defs),T19);
      T8 = CALL4(1,VARREF(YgooSmacrosYcat),T9,T10,T18,LITREF(lit_9));
      T7 = CALL1(1,VARREF(Ylst),T8);
      T6 = CALL2(1,VARREF(YgooSmacrosYcat),T7,LITREF(lit_9));
      T4 = T6;
    } else {
      T21 = CALL1(1,VARREF(Ylst),eF2671);
      T23 = CALL1(1,VARREF(Ytail),eT_);
      T22 = CALL1(1,VARREF(YevalSastYtransform_defs),T23);
      T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_9));
      T4 = T20;
    }
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_254) {
  P res_,eT_;
  P headF2673;
  P tailQF2672;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
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
    tailQF2672 = T4;
    T9 = CALL1(1,VARREF(Yhead),eT_);
    T8 = CALL3(1,VARREF(YevalSastYobjectify),T9,FREEREF(1),tailQF2672);
    headF2673 = T8;
    T11 = CALL2(1,VARREF(YgooSmacrosYpair),headF2673,res_);
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

FUNCODEDEF(fun_objectify_sequential_255) {
  P eT_,r_,tailQ_;
  P astsF2675;
  P loopF2674;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
LINK_STACK();
  ARG(eT_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = FUNSHELL(1,fun_loop_254,3);
  loopF2674 = T2;
  FUNINIT(loopF2674, 3,tailQ_,r_,loopF2674);
  T4 = CALL1(1,VARREF(YevalSastYtransform_defs),eT_);
  T3 = CALL2(0,loopF2674,Ynil,T4);
  T1 = T3;
  astsF2675 = T1;
  T5 = CALL1(1,VARREF(YevalSastYsequentialize),astsF2675);
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_256) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_application_257) {
  P ff_,eT_,r_,tailQ_;
  P eeTF2676;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = FUNFAB(fun_256,1,r_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(YevalSastYconvert2arguments),T2);
  eeTF2676 = T1;
  T4 = CALL4(1,VARREF(YevalSastYprocess_closed_application),ff_,eeTF2676,r_,tailQ_);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_258) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_application_259) {
  P ff_,eT_,r_,tailQ_;
  P primF2679;
  P fvfF2678;
  P eeTF2677;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = FUNFAB(fun_258,1,r_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(YevalSastYconvert2arguments),T2);
  eeTF2677 = T1;
  T5 = CALL1(1,VARREF(YevalSastYreference_binding),ff_);
  fvfF2678 = T5;
  T7 = CALL1(1,VARREF(YevalSastYbinding_prop),fvfF2678);
  primF2679 = T7;
  if (primF2679 != YPfalse) {
    T10 = CALL1(1,VARREF(YevalSastYast_copy),primF2679);
    T9 = CALL4(1,VARREF(YevalSastYprocess_closed_application),T10,eeTF2677,r_,tailQ_);
    T8 = T9;
  } else {
    T11 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),fvfF2678,VARREF(YevalSastYapplication_arguments),eeTF2677,VARREF(YevalSastYapplication_tailQ),tailQ_);
    T8 = T11;
  }
  T6 = T8;
  T4 = T6;
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_260) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_application_261) {
  P ff_,eT_,r_,tailQ_;
  P eeTF2680;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = FUNFAB(fun_260,1,r_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(YevalSastYconvert2arguments),T2);
  eeTF2680 = T1;
  T4 = CALL2(1,VARREF(YisaQ),ff_,VARREF(YevalSastYLlocal_referenceG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YevalSastYreference_called_functionQ_setter),YPtrue,ff_);
  } else {
  }
  T6 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_function),ff_,VARREF(YevalSastYapplication_arguments),eeTF2680,VARREF(YevalSastYapplication_tailQ),tailQ_);
  T0 = T6;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_process_closed_application_262) {
  P f_,eT_,r_,tailQ_;
  P bF2682;
  P vTF2681;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  vTF2681 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
  bF2682 = T3;
  T5 = CALL1(1,VARREF(YevalSastYfunction_naryQ),f_);
  if (T5 != YPfalse) {
    T6 = CALL4(1,VARREF(YevalSastYprocess_nary_closed_application),f_,eT_,r_,tailQ_);
    T4 = T6;
  } else {
    T9 = CALL1(1,VARREF(YgooStypesYlen),eT_);
    T11 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
    T10 = CALL1(1,VARREF(YgooStypesYlen),T11);
    T8 = CALL2(1,VARREF(YgooSmathYE),T9,T10);
    if (T8 != YPfalse) {
      T14 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
      if (T14 != YPfalse) {
        T13 = VARREF(YevalSastYLlow_letG);
      } else {
        T13 = VARREF(YevalSastYLfix_letG);
      }
      T15 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
      T16 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
      T17 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
      T12 = CALLN(1,VARREF(Ynew),9,T13,VARREF(YevalSastYfix_let_bindings),T15,VARREF(YevalSastYfix_let_types),T16,VARREF(YevalSastYfix_let_arguments),eT_,VARREF(YevalSastYfix_let_body),T17);
      T7 = T12;
    } else {
      T18 = CALL3(1,VARREF(YevalSdependencyYast_error),LITREF(lit_545),f_,eT_);
      T7 = T18;
    }
    T4 = T7;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pack_nary_args_263) {
  P eT_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(eT_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),LITREF(lit_550),Ynil);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),eT_);
    T6 = CALL1(1,VARREF(Ytail),eT_);
    T5 = CALL1(0,FREEREF(0),T6);
    T3 = CALL3(1,VARREF(Ylst),LITREF(lit_551),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pack_args_264) {
  P eT_,vT_,tT_;
  P lst_typeF2684;
  P varF2683;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2,a3;
LINK_STACK();
  ARG(eT_, 0);
  ARG(vT_, 1);
  ARG(tT_, 2);
loop:
  T1 = CALL1(1,VARREF(Yhead),vT_);
  varF2683 = T1;
  T3 = CALL1(1,VARREF(YevalSastYbinding_dottedQ),varF2683);
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_554),FREEREF(0),YPfalse);
    lst_typeF2684 = T5;
    CALL2(1,VARREF(YevalSastYbinding_dottedQ_setter),YPfalse,varF2683);
    CALL2(1,VARREF(YevalSastYbinding_type_setter),lst_typeF2684,varF2683);
    CALL2(1,VARREF(Yhead_setter),lst_typeF2684,tT_);
    T8 = CALL1(0,FREEREF(1),eT_);
    T7 = CALL3(1,VARREF(YevalSastYobjectify),T8,FREEREF(0),YPfalse);
    T9 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLargumentsG));
    T6 = CALL2(1,VARREF(YevalSastYarguments),T7,T9);
    T4 = T6;
    T2 = T4;
  } else {
    T11 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
    if (T11 != YPfalse) {
      T12 = CALL3(1,VARREF(YevalSdependencyYast_error),LITREF(lit_555),FREEREF(2),eT_);
      T10 = T12;
    } else {
      T14 = CALL1(1,VARREF(Yhead),eT_);
      T16 = CALL1(1,VARREF(Ytail),eT_);
      T17 = CALL1(1,VARREF(Ytail),vT_);
      T18 = CALL1(1,VARREF(Ytail),tT_);
      T15 = CALL3(0,FREEREF(3),T16,T17,T18);
      T13 = CALL2(1,VARREF(YevalSastYarguments),T14,T15);
      T10 = T13;
    }
    T2 = T10;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_process_nary_closed_application_265) {
  P f_,eT_,r_,tailQ_;
  P oF2688;
  P vTF2687;
  P pack_argsF2686;
  P pack_nary_argsF2685;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = FUNSHELL(1,fun_pack_nary_args_263,1);
  pack_nary_argsF2685 = T1;
  T2 = FUNSHELL(1,fun_pack_args_264,4);
  pack_argsF2686 = T2;
  FUNINIT(pack_nary_argsF2685, 1,pack_nary_argsF2685);
  FUNINIT(pack_argsF2686, 4,r_,pack_nary_argsF2685,f_,pack_argsF2686);
  T4 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  vTF2687 = T4;
  T7 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
  T9 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
  T8 = CALL3(0,pack_argsF2686,eT_,vTF2687,T9);
  T10 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
  T6 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_bindings),vTF2687,VARREF(YevalSastYfix_let_types),T7,VARREF(YevalSastYfix_let_arguments),T8,VARREF(YevalSastYfix_let_body),T10);
  oF2688 = T6;
  T5 = oF2688;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_convert2arguments_266) {
  P eT_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(eT_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLargumentsG));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),eT_);
    T6 = CALL1(1,VARREF(Ytail),eT_);
    T5 = CALL1(1,VARREF(YevalSastYconvert2arguments),T6);
    T3 = CALL2(1,VARREF(YevalSastYarguments),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_assignment_267) {
  P binding_,e_,r_,tailQ_;
  P opF2689;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_operator),binding_);
  opF2689 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variableQ),opF2689);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),opF2689);
    T6 = CALL3(1,VARREF(YevalSastYobjectify),T7,r_,YPfalse);
    T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_operands),binding_);
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),e_,T9);
    T5 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_application),T6,T8);
    T4 = CALL3(1,VARREF(YevalSastYobjectify),T5,r_,tailQ_);
    T2 = T4;
  } else {
    T10 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_560),e_);
    T2 = T10;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_268) {
  P binding_,e_,r_,tailQ_;
  P valF2691;
  P refF2690;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify),binding_,r_,YPfalse);
  refF2690 = T1;
  T3 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  valF2691 = T3;
  T4 = CALL2(1,VARREF(YevalSastYobjectify_assignment_using),refF2690,valF2691);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_using_269) {
  P ref_,val_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
loop:
  T0 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
  CALL2(1,VARREF(YevalSastYbinding_mutableQ_setter),YPtrue,T0);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLlocal_assignmentG),VARREF(YevalSastYassignment_reference),ref_,VARREF(YevalSastYassignment_form),val_);
UNLINK_STACK();
  RET(T1);
}

FUNCODEDEF(fun_objectify_assignment_using_270) {
  P ref_,val_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLglobal_assignmentG),VARREF(YevalSastYassignment_binding),T1,VARREF(YevalSastYassignment_form),val_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_using_271) {
  P ref_,val_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLdynamic_assignmentG),VARREF(YevalSastYassignment_binding),T1,VARREF(YevalSastYassignment_form),val_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_using_272) {
  P ref_,val_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLruntime_assignmentG),VARREF(YevalSastYassignment_binding),T1,VARREF(YevalSastYassignment_form),val_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_using_273) {
  P ref_,val_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
  T0 = CALL2(1,VARREF(YevalSastYnamespace_error),LITREF(lit_568),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYupdate_binding_kind) {
  P binding_,new_kind_;
  P tmpF2692;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(new_kind_, 1);
loop:
  T3 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  T2 = CALL2(1,VARREF(YgooSmathYNEE),T3,LITREF(lit_571));
  tmpF2692 = T2;
  if (tmpF2692 != YPfalse) {
    T4 = tmpF2692;
  } else {
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_572));
    T4 = T5;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YevalSastYbinding_kind_setter),new_kind_,binding_);
    T0 = T6;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_571));
    if (T8 != YPfalse) {
      T7 = YPtrue;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_69));
      if (T10 != YPfalse) {
        T9 = YPtrue;
      } else {
        if (YPtrue != YPfalse) {
          T13 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
          T12 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_573),T13,new_kind_);
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

FUNCODEDEF(fun_ast_define_binding_275) {
  P r_,name_,defining_methodQ_,kind_;
  P bindingF2700;
  P bindingF2699;
  P modF2698;
  P foreignQF2697;
  P tmpF2696;
  P modF2695;
  P grF2694;
  P existing_bindingF2693;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(r_, 0);
  ARG(name_, 1);
  ARG(defining_methodQ_, 2);
  ARG(kind_, 3);
loop:
  T1 = CALL2(1,VARREF(YevalSastYfind_binding),name_,r_);
  existing_bindingF2693 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF2694 = T3;
  T5 = CALL1(1,VARREF(YevalSastYenvironment_module),grF2694);
  modF2695 = T5;
  if (existing_bindingF2693 != YPfalse) {
    T11 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),existing_bindingF2693,modF2695);
    tmpF2696 = T11;
    if (tmpF2696 != YPfalse) {
      T12 = tmpF2696;
    } else {
      T12 = defining_methodQ_;
    }
    T10 = T12;
    T9 = CALL1(1,VARREF(Ynot),T10);
    foreignQF2697 = T9;
    T13 = CALL1(1,VARREF(YevalSastYbinding_freeQ),existing_bindingF2693);
    if (T13 != YPfalse) {
      CALL2(1,VARREF(YevalSastYbinding_freeQ_setter),YPfalse,existing_bindingF2693);
      if (foreignQF2697 != YPfalse) {
        T15 = CALL1(1,VARREF(YevalSastYtransaction_register_implemented_binding),existing_bindingF2693);
        T14 = T15;
      } else {
        T14 = YPfalse;
      }
    } else {
      if (foreignQF2697 != YPfalse) {
        T18 = CALL1(1,VARREF(YevalSastYmodule_name),modF2695);
        T19 = CALL1(1,VARREF(YevalSastYbinding_module_name),existing_bindingF2693);
        T17 = CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_576),T18,name_,T19);
        T16 = T17;
      } else {
        T16 = YPfalse;
      }
    }
    CALL2(1,VARREF(YevalSdependencyYinvalidate_dependents),existing_bindingF2693,VARREF(YevalSdependencyYDall_dependency_types));
    CALL2(1,VARREF(YevalSastYupdate_binding_kind),existing_bindingF2693,kind_);
    T8 = existing_bindingF2693;
    T7 = T8;
  } else {
    T21 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
    modF2698 = T21;
    T23 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),kind_,VARREF(YevalSastYbinding_name),name_,VARREF(YevalSastYbinding_freeQ),YPfalse,VARREF(YevalSastYbinding_module),modF2698);
    bindingF2699 = T23;
    CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2699,grF2694);
    T22 = bindingF2699;
    T20 = T22;
    T7 = T20;
  }
  bindingF2700 = T7;
  T6 = bindingF2700;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_definition_276) {
  P type_,kind_,var_,e_,r_;
  P defnF2703;
  P bindingF2702;
  P nameF2701;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(type_, 0);
  ARG(kind_, 1);
  ARG(var_, 2);
  ARG(e_, 3);
  ARG(r_, 4);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_name),var_);
  nameF2701 = T1;
  T3 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,nameF2701,YPfalse,kind_);
  bindingF2702 = T3;
  T6 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  T5 = CALL5(1,VARREF(Ynew),type_,VARREF(YevalSastYassignment_binding),bindingF2702,VARREF(YevalSastYassignment_form),T6);
  defnF2703 = T5;
  T4 = defnF2703;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_variable_definition_277) {
  P var_,e_,r_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(var_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T0 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLvariable_definitionG),LITREF(lit_69),var_,e_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_dynamic_definition_278) {
  P var_,e_,r_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(var_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T0 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLdynamic_definitionG),LITREF(lit_583),var_,e_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_279) {
  P x_,r_,tailQ_;
  P expF2704;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  if (VARREF(YevalSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_588));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),x_);
    T0 = CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_589));
  } else {
  }
  T3 = CALL1(1,FREEREF(0),x_);
  T2 = CALL2(1,VARREF(YgooScolsSlstYline_list_of),x_,T3);
  expF2704 = T2;
  if (VARREF(YevalSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_590));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),expF2704);
    T4 = CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_591));
  } else {
  }
  T1 = expF2704;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YPPmacro) {
  P modname_,name_,expander_,env_or_false_;
  P bindingF2708;
  P envF2707;
  P tmpF2706;
  P expandF2705;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(modname_, 0);
  ARG(name_, 1);
  ARG(expander_, 2);
  ARG(env_or_false_, 3);
loop:
  T1 = FUNSHELL(0,fun_expand_279,1);
  expandF2705 = T1;
  FUNINIT(expandF2705, 1,expander_);
  tmpF2706 = env_or_false_;
  if (tmpF2706 != YPfalse) {
    T4 = tmpF2706;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYunchecked_runtime_environment),modname_);
    T4 = T5;
  }
  T3 = T4;
  envF2707 = T3;
  T7 = CALL4(1,VARREF(YevalSastYast_define_binding),envF2707,name_,YPfalse,LITREF(lit_592));
  bindingF2708 = T7;
  CALL2(1,VARREF(YevalSastYbinding_handler_setter),expandF2705,bindingF2708);
  T6 = bindingF2708;
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_syntax_definition_281) {
  P name_,e_,r_,rtQ_;
  P bindingF2714;
  P modnameF2713;
  P expanderF2712;
  P ast_expanderF2711;
  P syntax_envF2710;
  P sep_expanderF2709;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(rtQ_, 3);
loop:
  T1 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_macro_function),name_,e_);
  sep_expanderF2709 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_syntax_environment),r_);
  syntax_envF2710 = T3;
  T5 = CALL3(1,VARREF(YevalSastYobjectify),sep_expanderF2709,syntax_envF2710,YPfalse);
  ast_expanderF2711 = T5;
  T7 = CALL1(1,VARREF(YevalSastYast_evaluate),ast_expanderF2711);
  expanderF2712 = T7;
  T10 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  T9 = CALL1(1,VARREF(YevalSastYmodule_name),T10);
  modnameF2713 = T9;
  T13 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  T12 = CALL4(1,VARREF(YPPmacro),modnameF2713,name_,expanderF2712,T13);
  bindingF2714 = T12;
  T15 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  T14 = CALL2(1,VARREF(YgooSmathYNEE),syntax_envF2710,T15);
  if (T14 != YPfalse) {
    T16 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2714,syntax_envF2710);
  } else {
  }
  if (rtQ_ != YPfalse) {
    T19 = CALL3(1,VARREF(YevalSastYobjectify),sep_expanderF2709,r_,YPfalse);
    T18 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_macro_definitionG),VARREF(YevalSastYassignment_binding),bindingF2714,VARREF(YevalSastYassignment_form),T19);
    T17 = T18;
  } else {
    T20 = CALL2(1,VARREF(YevalSastYobjectify_quotation),YPfalse,r_);
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

FUNCODEDEF(fun_objectify_function_definition_282) {
  P name_,e_,r_;
  P defnF2717;
  P fF2716;
  P bindingF2715;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_69));
  bindingF2715 = T1;
  T3 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  fF2716 = T3;
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),bindingF2715,fF2716);
  T4 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T4,fF2716);
  T6 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_function_definitionG),VARREF(YevalSastYassignment_binding),bindingF2715,VARREF(YevalSastYassignment_form),fF2716);
  defnF2717 = T6;
  T5 = defnF2717;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYmodule_binding) {
  P kind_;
  P T0;
  P a1;
LINK_STACK();
  ARG(kind_, 0);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),kind_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_primitive_definition_284) {
  P name_,mods_,sig_,body_,r_;
  P defnF2723;
  P formF2722;
  P bodyF2721;
  P new_rF2720;
  P signatureF2719;
  P bindingF2718;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(name_, 0);
  ARG(mods_, 1);
  ARG(sig_, 2);
  ARG(body_, 3);
  ARG(r_, 4);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_601));
  bindingF2718 = T1;
  T3 = CALL2(1,VARREF(YevalSastYobjectify_signature),sig_,r_);
  signatureF2719 = T3;
  T6 = CALL1(1,VARREF(YevalSastYsignature_bindings),signatureF2719);
  T5 = CALL2(1,VARREF(YevalSastYr_extendT),r_,T6);
  new_rF2720 = T5;
  T8 = CALL3(1,VARREF(YevalSastYobjectify_sequential),body_,new_rF2720,YPtrue);
  bodyF2721 = T8;
  T11 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  T10 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_binding),bindingF2718,VARREF(YevalSastYfunction_adjectives),mods_,VARREF(YevalSastYfunction_debug_name),T11,VARREF(YevalSastYfunction_signature),signatureF2719,VARREF(YevalSastYfunction_body),bodyF2721);
  formF2722 = T10;
  T12 = CALL2(1,VARREF(YgooScolsScolYmemQ),mods_,LITREF(lit_602));
  if (T12 != YPfalse) {
    T13 = CALL2(1,VARREF(YevalSastYbinding_prop_setter),formF2722,bindingF2718);
  } else {
  }
  T15 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_primitive_definitionG),VARREF(YevalSastYassignment_binding),bindingF2718,VARREF(YevalSastYassignment_form),formF2722);
  defnF2723 = T15;
  T14 = defnF2723;
  T9 = T14;
  T7 = T9;
  T4 = T7;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_generic_definition_285) {
  P name_,sig_,r_;
  P defnF2727;
  P formF2726;
  P signatureF2725;
  P bindingF2724;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(sig_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_69));
  bindingF2724 = T1;
  T3 = CALL2(1,VARREF(YevalSastYobjectify_signature),sig_,r_);
  signatureF2725 = T3;
  T6 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  T5 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLast_genericG),VARREF(YevalSastYfunction_binding),bindingF2724,VARREF(YevalSastYfunction_debug_name),T6,VARREF(YevalSastYfunction_signature),signatureF2725);
  formF2726 = T5;
  T8 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_generic_definitionG),VARREF(YevalSastYassignment_binding),bindingF2724,VARREF(YevalSastYassignment_form),formF2726);
  defnF2727 = T8;
  T7 = defnF2727;
  T4 = T7;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_method_definition_286) {
  P name_,e_,r_;
  P defnF2733;
  P formF2732;
  P callF2731;
  P metF2730;
  P genF2729;
  P bindingF2728;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPtrue,LITREF(lit_69));
  bindingF2728 = T1;
  T4 = CALL2(1,VARREF(Ylst),LITREF(lit_608),name_);
  T3 = CALL4(1,VARREF(Ylst),LITREF(lit_607),T4,name_,YPfalse);
  genF2729 = T3;
  T6 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  metF2730 = T6;
  T8 = CALL3(1,VARREF(Ylst),LITREF(lit_609),genF2729,metF2730);
  callF2731 = T8;
  T10 = CALL3(1,VARREF(YevalSastYobjectify),callF2731,r_,YPfalse);
  formF2732 = T10;
  T12 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_method_definitionG),VARREF(YevalSastYassignment_binding),bindingF2728,VARREF(YevalSastYassignment_form),formF2732);
  defnF2733 = T12;
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),name_,metF2730);
  T13 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T13,metF2730);
  T11 = defnF2733;
  T9 = T11;
  T7 = T9;
  T5 = T7;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_287) {
  P tmpF2734;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
loop:
  DYNSET(YgooSioSwriteYTmax_print_lengthT,VARREF(YDmax_int));
  tmpF2734 = DYNREF(YevalSastYTrecord_sourceQT);
  if (tmpF2734 != YPfalse) {
    T5 = CALL2(1,VARREF(YisaQ),FREEREF(1),VARREF(YLlstG));
    if (T5 != YPfalse) {
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),LITREF(lit_12),FREEREF(1));
      T4 = T6;
    } else {
      T4 = FREEREF(1);
    }
    T3 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_613),FREEREF(0),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T1,FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_288) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YgooSioSwriteYTmax_print_lengthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_289) {
  P x_1445F2735;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  DYNSET(YgooSioSwriteYTmax_print_depthT,VARREF(YDmax_int));
  x_1445F2735 = DYNREF(YgooSioSwriteYTmax_print_lengthT);
  T2 = FUNFAB(fun_287,3,FREEREF(0),FREEREF(1),FREEREF(2));
  T3 = FUNFAB(fun_288,1,x_1445F2735);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_290) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YgooSioSwriteYTmax_print_depthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_function_source_291) {
  P sig_,body_,r_;
  P x_1444F2736;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(r_, 2);
loop:
  x_1444F2736 = DYNREF(YgooSioSwriteYTmax_print_depthT);
  T2 = FUNFAB(fun_289,3,sig_,body_,r_);
  T3 = FUNFAB(fun_290,1,x_1444F2736);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_292) {
  P bF2739;
  P new_rF2738;
  P signatureF2737;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
loop:
  T1 = CALL2(1,VARREF(YevalSastYobjectify_signature),FREEREF(0),FREEREF(1));
  signatureF2737 = T1;
  T4 = CALL1(1,VARREF(YevalSastYsignature_bindings),signatureF2737);
  T3 = CALL2(1,VARREF(YevalSastYr_extendT),FREEREF(1),T4);
  new_rF2738 = T3;
  T6 = CALL3(1,VARREF(YevalSastYobjectify_sequential),FREEREF(2),new_rF2738,YPtrue);
  bF2739 = T6;
  T7 = CALL2(1,VARREF(YevalSastYobjectify_quotation),YPfalse,FREEREF(1));
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T7,FREEREF(3));
  CALL2(1,VARREF(YevalSastYfunction_signature_setter),signatureF2737,FREEREF(3));
  CALL2(1,VARREF(YevalSastYfunction_body_setter),bF2739,FREEREF(3));
  T8 = CALL3(1,VARREF(YevalSastYobjectify_function_source),FREEREF(0),FREEREF(2),FREEREF(1));
  CALL2(1,VARREF(YevalSastYfunction_source_setter),T8,FREEREF(3));
  T5 = FREEREF(3);
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_293) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YevalSastYTcurrent_dependentT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_function_294) {
  P sig_,body_,line_,r_,tailQ_;
  P x_1446F2741;
  P methodF2740;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(line_, 2);
  ARG(r_, 3);
  ARG(tailQ_, 4);
loop:
  T1 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYprogram_line),line_);
  methodF2740 = T1;
  x_1446F2741 = DYNREF(YevalSastYTcurrent_dependentT);
  DYNSET(YevalSastYTcurrent_dependentT,methodF2740);
  T4 = FUNFAB(fun_292,4,sig_,r_,body_,methodF2740);
  T5 = FUNFAB(fun_293,1,x_1446F2741);
  T3 = with_cleanup(T4,T5);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_295) {
  P params_,naryQ_,bindings_,names_,types_;
  P bindingF2752;
  P typeF2751;
  P stypeF2750;
  P dottedQF2749;
  P stypeF2748;
  P snameF2747;
  P paramF2746;
  P arityF2745;
  P valueF2744;
  P tmpF2743;
  P sexpr_valueF2742;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
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
    T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),FREEREF(0));
    sexpr_valueF2742 = T3;
    tmpF2743 = sexpr_valueF2742;
    if (tmpF2743 != YPfalse) {
      T7 = tmpF2743;
    } else {
      T8 = CALL1(1,VARREF(YevalSastYdefault_type),FREEREF(1));
      T7 = T8;
    }
    T6 = T7;
    T5 = CALL3(1,VARREF(YevalSastYobjectify),T6,FREEREF(1),YPfalse);
    valueF2744 = T5;
    T11 = CALL1(1,VARREF(YgooStypesYlen),names_);
    if (naryQ_ != YPfalse) {
      T12 = YPint((P)1);
    } else {
      T12 = YPint((P)0);
    }
    T10 = CALL2(1,VARREF(YgooSmathY_),T11,T12);
    arityF2745 = T10;
    T14 = CALL1(1,VARREF(YgooSmacrosYrevX),bindings_);
    T16 = CALL1(1,VARREF(YgooSmacrosYrevX),names_);
    T15 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T16,FREEREF(1));
    T17 = CALL1(1,VARREF(YgooSmacrosYrevX),types_);
    T18 = CALL3(1,VARREF(YevalSastYobjectify),naryQ_,FREEREF(1),YPfalse);
    T19 = CALL3(1,VARREF(YevalSastYobjectify),arityF2745,FREEREF(1),YPfalse);
    T13 = CALLN(1,VARREF(Ynew),13,VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_bindings),T14,VARREF(YevalSastYsignature_names),T15,VARREF(YevalSastYsignature_specs),T17,VARREF(YevalSastYsignature_naryQ),T18,VARREF(YevalSastYsignature_arity),T19,VARREF(YevalSastYsignature_value),valueF2744);
    T9 = T13;
    T4 = T9;
    T2 = T4;
    T0 = T2;
  } else {
    T21 = CALL1(1,VARREF(Yhead),params_);
    paramF2746 = T21;
    T23 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_name),paramF2746);
    snameF2747 = T23;
    T25 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_type),paramF2746);
    stypeF2748 = T25;
    T27 = CALL2(1,VARREF(YgooSmacrosYEE),stypeF2748,VARREF(YevalSastYDsexpr_optionals_tag));
    dottedQF2749 = T27;
    if (dottedQF2749 != YPfalse) {
      T29 = VARREF(YevalSastYDsexpr_optionals_type_name);
    } else {
      T29 = stypeF2748;
    }
    stypeF2750 = T29;
    T31 = CALL3(1,VARREF(YevalSastYobjectify),stypeF2750,FREEREF(1),YPfalse);
    typeF2751 = T31;
    T33 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_name),snameF2747,VARREF(YevalSastYbinding_type),typeF2751,VARREF(YevalSastYbinding_dottedQ),dottedQF2749);
    bindingF2752 = T33;
    T35 = CALL1(1,VARREF(Ytail),params_);
    T36 = CALL2(1,VARREF(YgooSmacrosYpair),bindingF2752,bindings_);
    T37 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),snameF2747,VARREF(Ytail),names_);
    T38 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),typeF2751,VARREF(Ytail),types_);
    a1 = T35;
    a2 = dottedQF2749;
    a3 = T36;
    a4 = T37;
    a5 = T38;
    params_ = a1;
    naryQ_ = a2;
    bindings_ = a3;
    names_ = a4;
    types_ = a5;
    goto loop;
    T32 = T34;
    T30 = T32;
    T28 = T30;
    T26 = T28;
    T24 = T26;
    T22 = T24;
    T20 = T22;
    T0 = T20;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_signature_296) {
  P sig_,r_;
  P colF2754;
  P sexpr_paramsF2753;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(sig_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),sig_);
  sexpr_paramsF2753 = T1;
  T3 = FUNSHELL(1,fun_col_295,3);
  colF2754 = T3;
  FUNINIT(colF2754, 3,sig_,r_,colF2754);
  T5 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLfab_listG));
  T6 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLfab_listG));
  T4 = CALL5(0,colF2754,sexpr_paramsF2753,YPfalse,Ynil,T5,T6);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_297) {
  P j_,bindings_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(j_, 0);
  ARG(bindings_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindings_);
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmathYA),FREEREF(0),YPint((P)1));
    T4 = CALL1(1,VARREF(YevalSastYenvironment_next),FREEREF(1));
    T2 = CALL2(0,FREEREF(2),T3,T4);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(Yhead),bindings_);
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),T7,FREEREF(3));
    if (T6 != YPfalse) {
      T8 = CALL2(1,VARREF(Ytup),FREEREF(0),j_);
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

FUNCODEDEF(fun_loop_298) {
  P i_,r_;
  P findF2755;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),r_,VARREF(YevalSastYLstatic_local_environmentG));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_find_297,5);
    findF2755 = T3;
    FUNINIT(findF2755, 5,i_,r_,FREEREF(0),FREEREF(1),findF2755);
    T5 = CALL1(1,VARREF(YevalSastYenvironment_bindings),r_);
    T4 = CALL2(0,findF2755,YPint((P)0),T5);
    T2 = T4;
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(YevalSastYbinding_name),FREEREF(1));
    T6 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_627),T7,r_);
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compute_local_reference_offsets_299) {
  P binding_,r_;
  P loopF2756;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_298,2);
  loopF2756 = T1;
  FUNINIT(loopF2756, 2,loopF2756,binding_);
  T2 = CALL2(0,loopF2756,YPint((P)0),r_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_binding_300) {
  P n_,b_,r_;
  P jF2759;
  P iF2758;
  P tup29F2757;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL2(1,VARREF(YevalSastYcompute_local_reference_offsets),b_,r_);
  tup29F2757 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup29F2757,YPint((P)0));
  iF2758 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup29F2757,YPint((P)1));
  jF2759 = T5;
  T6 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),b_,VARREF(YevalSastYreference_frame_number),iF2758,VARREF(YevalSastYreference_frame_offset),jF2759);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_binding_reference_class_301) {
  P b_;
  P x_1448F2761;
  P x_1447F2760;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
  x_1447F2760 = T1;
  x_1448F2761 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1448F2761,x_1447F2760,LITREF(lit_69));
  if (T4 != YPfalse) {
    T3 = VARREF(YevalSastYLglobal_referenceG);
  } else {
    T6 = CALL2(1,x_1448F2761,x_1447F2760,LITREF(lit_601));
    if (T6 != YPfalse) {
      T5 = VARREF(YevalSastYLpredefined_referenceG);
    } else {
      T8 = CALL2(1,x_1448F2761,x_1447F2760,LITREF(lit_571));
      if (T8 != YPfalse) {
        T7 = VARREF(YevalSastYLruntime_referenceG);
      } else {
        T10 = CALL2(1,x_1448F2761,x_1447F2760,LITREF(lit_583));
        if (T10 != YPfalse) {
          T9 = VARREF(YevalSastYLdynamic_referenceG);
        } else {
          T12 = CALL2(1,x_1448F2761,x_1447F2760,LITREF(lit_592));
          if (T12 != YPfalse) {
            T11 = VARREF(YevalSastYLmacro_referenceG);
          } else {
            T14 = CALL2(1,x_1448F2761,x_1447F2760,LITREF(lit_572));
            if (T14 != YPfalse) {
              T13 = VARREF(YevalSastYLmagic_referenceG);
            } else {
              T16 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
              T15 = CALL2(1,VARREF(YevalSdependencyYast_error),LITREF(lit_632),T16);
              T13 = T15;
            }
            T11 = T13;
          }
          T9 = T11;
        }
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

FUNCODEDEF(fun_objectify_binding_302) {
  P n_,b_,r_;
  P LrefGF2762;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_reference_class),b_);
  LrefGF2762 = T1;
  T2 = CALL3(1,VARREF(Ynew),LrefGF2762,VARREF(YevalSastYreference_binding),b_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_binding_303) {
  P n_,b_,r_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
loop:
  T0 = CALL2(1,VARREF(YevalSastYobjectify_free_global_reference),n_,r_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_default_type_304) {
  P r_;
  P T0;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_637),r_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_free_global_reference_305) {
  P name_,r_;
  P bF2765;
  P tmpF2764;
  P grF2763;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF2763 = T1;
  T4 = CALL1(1,VARREF(YevalSastYenvironment_allows_foreign_namesQ),grF2763);
  tmpF2764 = T4;
  if (tmpF2764 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYforeign_nameQ),name_);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T7 = CALL2(1,VARREF(YevalSastYobjectify_foreign_reference),name_,r_);
    T2 = T7;
  } else {
    T10 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
    T9 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_freeQ),YPtrue,VARREF(YevalSastYbinding_kind),LITREF(lit_69),VARREF(YevalSastYbinding_name),name_,VARREF(YevalSastYbinding_module),T10);
    bF2765 = T9;
    CALL2(1,VARREF(YevalSastYinsert_globalX),bF2765,grF2763);
    T11 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),bF2765);
    T8 = T11;
    T2 = T8;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYforeign_nameQ) {
  P name_;
  P T0,T1,T2;
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

FUNCODEDEF(fun_objectify_foreign_reference_307) {
  P name_,r_;
  P bindingF2774;
  P modF2773;
  P loaderF2772;
  P grF2771;
  P tmpF2770;
  P varnameF2769;
  P modnameF2768;
  P breakF2767;
  P namestrF2766;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  namestrF2766 = T1;
  T3 = CALL2(1,VARREF(YgooScolsSseqYpos),namestrF2766,YPchr((P)58));
  breakF2767 = T3;
  T5 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF2766,YPint((P)0),breakF2767);
  modnameF2768 = T5;
  T8 = CALL2(1,VARREF(YgooSmathYA),YPint((P)1),breakF2767);
  T9 = CALL1(1,VARREF(YgooStypesYlen),namestrF2766);
  T7 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF2766,T8,T9);
  varnameF2769 = T7;
  T13 = CALL1(1,VARREF(YgooStypesYlen),modnameF2768);
  T12 = CALL2(1,VARREF(YgooSmagYG),T13,YPint((P)0));
  tmpF2770 = T12;
  if (tmpF2770 != YPfalse) {
    T16 = CALL1(1,VARREF(YgooStypesYlen),varnameF2769);
    T15 = CALL2(1,VARREF(YgooSmagYG),T16,YPint((P)0));
    T14 = T15;
  } else {
    T14 = YPfalse;
  }
  T11 = T14;
  T10 = CALL1(1,VARREF(Ynot),T11);
  if (T10 != YPfalse) {
    T17 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_644),name_);
  } else {
  }
  T19 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF2771 = T19;
  T21 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),grF2771);
  loaderF2772 = T21;
  T24 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modnameF2768);
  T23 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF2772,T24);
  modF2773 = T23;
  T27 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),varnameF2769);
  T28 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF2773);
  T26 = CALL2(1,VARREF(YevalSastYfind_binding),T27,T28);
  bindingF2774 = T26;
  CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2774,grF2771);
  T29 = CALL1(1,VARREF(Ynot),bindingF2774);
  if (T29 != YPfalse) {
    T30 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_645),varnameF2769,modnameF2768);
  } else {
  }
  T31 = CALL3(1,VARREF(YevalSastYobjectify_binding),name_,bindingF2774,r_);
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

FUNCODEDEF(fun_objectify_symbol_308) {
  P name_,r_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSastYfind_binding),name_,r_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_binding),name_,T1,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ftype_309) {
  P r_;
  P T0;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_650),r_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfunctions) {
  P h_,t_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
loop:
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfunctionsG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_empty_311) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YevalSastYDfunctions_empty));
}

FUNCODEDEF(fun_312) {
  P n_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYftype),FREEREF(0));
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_name),n_,VARREF(YevalSastYbinding_type),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_313) {
  P f_,b_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(b_, 1);
loop:
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),b_,f_);
  T1 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T0,f_);
  T2 = CALL2(1,VARREF(YevalSastYbinding_value_setter),f_,b_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_objectify_locals_314) {
  P names_,sigs_,bodies_,body_,r_,tailQ_;
  P functionsF2778;
  P function_formsF2777;
  P new_rF2776;
  P bindingsF2775;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4,a5,a6;
LINK_STACK();
  ARG(names_, 0);
  ARG(sigs_, 1);
  ARG(bodies_, 2);
  ARG(body_, 3);
  ARG(r_, 4);
  ARG(tailQ_, 5);
loop:
  T2 = FUNFAB(fun_312,1,r_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),T2,names_);
  bindingsF2775 = T1;
  T4 = CALL2(1,VARREF(YevalSastYr_extendT),r_,bindingsF2775);
  new_rF2776 = T4;
  T6 = CALL3(1,VARREF(YgooSmacrosYmap2),VARREF(YevalSsyntaxYsexpr_make_anonymous_method),sigs_,bodies_);
  function_formsF2777 = T6;
  T9 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSastYobjectify),new_rF2776,YPfalse);
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),T9,function_formsF2777);
  functionsF2778 = T8;
  T10 = FUNFAB(fun_313,1,r_);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T10,functionsF2778,bindingsF2775);
  T12 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmathYfabs),YPfalse,VARREF(YevalSastYLfunctionsG),functionsF2778);
  T13 = CALL3(1,VARREF(YevalSastYobjectify_sequential),body_,new_rF2776,YPtrue);
  T11 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_bindings),bindingsF2775,VARREF(YevalSastYlocals_functions),T12,VARREF(YevalSastYlocals_body),T13);
  T7 = T11;
  T5 = T7;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_bind_exit_315) {
  P name_,body_,line_,r_,tailQ_;
  P T0,T1,T2,T3;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(name_, 0);
  ARG(body_, 1);
  ARG(line_, 2);
  ARG(r_, 3);
  ARG(tailQ_, 4);
loop:
  T3 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,name_);
  T2 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),T3,body_);
  T1 = CALL3(1,VARREF(YevalSastYobjectify),T2,r_,YPfalse);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLbind_exitG),VARREF(YevalSastYbind_exit_main_fun),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_unwind_protect_316) {
  P protected_form_,cleanup_forms_,line_,r_,tailQ_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(protected_form_, 0);
  ARG(cleanup_forms_, 1);
  ARG(line_, 2);
  ARG(r_, 3);
  ARG(tailQ_, 4);
loop:
  T3 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,protected_form_);
  T2 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),Ynil,T3);
  T1 = CALL3(1,VARREF(YevalSastYobjectify),T2,r_,YPfalse);
  T5 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),Ynil,cleanup_forms_);
  T4 = CALL3(1,VARREF(YevalSastYobjectify),T5,r_,YPfalse);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_protected_thunk),T1,VARREF(YevalSastYunwind_protect_cleanup_thunk),T4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_monitor_317) {
  P type_,info_,test_,handler_,body_,r_,tailQ_;
  P T0,T1,T2,T3,T4,T5;
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
  T1 = CALL3(1,VARREF(YevalSastYobjectify),type_,r_,YPfalse);
  T2 = CALL3(1,VARREF(YevalSastYobjectify),info_,r_,YPfalse);
  T3 = CALL3(1,VARREF(YevalSastYobjectify),test_,r_,YPfalse);
  T4 = CALL3(1,VARREF(YevalSastYobjectify),handler_,r_,YPfalse);
  T5 = CALL3(1,VARREF(YevalSastYobjectify),body_,r_,YPfalse);
  T0 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_type),T1,VARREF(YevalSastYmonitor_info),T2,VARREF(YevalSastYmonitor_test),T3,VARREF(YevalSastYmonitor_handler),T4,VARREF(YevalSastYmonitor_main_thunk),T5);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_318) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_319) {
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

FUNCODEDEF(fun_320) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YevalSastYnamespace_error),LITREF(lit_672),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_321) {
  P exit_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(exit_, 0);
loop:
  T2 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_670),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_318;
  T4 = FUNFAB(fun_319,1,exit_);
  T5 = FUNFAB(fun_320,1,FREEREF(0));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_322) {
  P name_;
  P bindingF2779;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(YevalSastYfind_binding),name_,FREEREF(0));
  bindingF2779 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),bindingF2779,YPfalse);
  if (T3 != YPfalse) {
    T5 = FUNFAB(fun_321,1,name_);
    T4 = with_exit(T5);
    T2 = T4;
  } else {
    T6 = CALL3(1,VARREF(YevalSastYexport_bindingX),FREEREF(1),name_,bindingF2779);
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_export_323) {
  P names_,r_,tailQ_;
  P moduleF2781;
  P envF2780;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(names_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2780 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  moduleF2781 = T3;
  T6 = CALL1(1,VARREF(YevalSastYmodule_target_environment),moduleF2781);
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),envF2780,T6);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYnamespace_error),LITREF(lit_667));
  } else {
  }
  T8 = FUNFAB(fun_322,2,envF2780,moduleF2781);
  CALL2(1,VARREF(YgooSmacrosYdo),T8,names_);
  T9 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYimport_globalX) {
  P b_,env_;
  P tmpF2783;
  P existingF2782;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
  T1 = CALL2(1,VARREF(YevalSastYfind_binding),T2,env_);
  existingF2782 = T1;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2782,YPfalse);
  tmpF2783 = T5;
  if (tmpF2783 != YPfalse) {
    T6 = tmpF2783;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2782,b_);
    T6 = T7;
  }
  T4 = T6;
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
    T10 = CALL1(1,VARREF(YevalSastYbinding_module_name),b_);
    T8 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_675),T9,T10);
  } else {
  }
  CALL2(1,VARREF(YevalSastYinsert_globalX),b_,env_);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_325) {
  P b_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  CALL2(1,VARREF(YevalSastYimport_globalX),b_,FREEREF(0));
  T1 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
  T0 = CALL3(1,VARREF(YevalSastYexport_bindingX),FREEREF(1),T1,b_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_useSexport_module_326) {
  P name_,r_,tailQ_;
  P used_moduleF2787;
  P loaderF2786;
  P moduleF2785;
  P envF2784;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2784 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  moduleF2785 = T3;
  T5 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),envF2784);
  loaderF2786 = T5;
  T7 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF2786,name_);
  used_moduleF2787 = T7;
  T8 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF2784);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T8,used_moduleF2787);
  T9 = FUNFAB(fun_325,2,envF2784,moduleF2785);
  T10 = CALL1(1,VARREF(YevalSastYmodule_exports),used_moduleF2787);
  CALL2(1,VARREF(YgooSmacrosYdo),T9,T10);
  T11 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T6 = T11;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_327) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmathYE),x_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_use_include_328) {
  P name_,r_,tailQ_;
  P modF2789;
  P envF2788;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2788 = T1;
  T3 = CALL1(1,VARREF(YevalSastYenvironment_module),envF2788);
  modF2789 = T3;
  T6 = FUNFAB(fun_327,1,name_);
  T7 = CALL1(1,VARREF(YevalSastYmodule_uses_c_includes),modF2789);
  T5 = CALL2(1,VARREF(YgooStypesYanyQ),T6,T7);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYmodule_uses_c_includes),modF2789);
    T8 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T9,name_);
  } else {
  }
  T10 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T2 = T10;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_329) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmathYE),x_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_use_library_330) {
  P name_,r_,tailQ_;
  P modF2791;
  P envF2790;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2790 = T1;
  T3 = CALL1(1,VARREF(YevalSastYenvironment_module),envF2790);
  modF2791 = T3;
  T6 = FUNFAB(fun_329,1,name_);
  T7 = CALL1(1,VARREF(YevalSastYmodule_uses_c_libraries),modF2791);
  T5 = CALL2(1,VARREF(YgooStypesYanyQ),T6,T7);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYmodule_uses_c_libraries),modF2791);
    T8 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T9,name_);
  } else {
  }
  T10 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T2 = T10;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_331) {
  P b_;
  P T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSastYimport_globalX),b_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_use_mod_332) {
  P name_;
  P used_moduleF2793;
  P loaderF2792;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),FREEREF(0));
  loaderF2792 = T1;
  T3 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF2792,name_);
  used_moduleF2793 = T3;
  T4 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),FREEREF(0));
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T4,used_moduleF2793);
  T5 = FUNFAB(fun_331,1,FREEREF(0));
  T6 = CALL1(1,VARREF(YevalSastYmodule_exports),used_moduleF2793);
  CALL2(1,VARREF(YgooSmacrosYdo),T5,T6);
  T2 = used_moduleF2793;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_use_c_mod_333) {
  P mod_,name_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
loop:
  T3 = CALL1(1,VARREF(YevalSastYmodule_uses_c_files),mod_);
  T2 = CALL2(1,VARREF(YgooScolsScolYmemQ),T3,name_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYmodule_uses_c_files),mod_);
    T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,name_);
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_use_module_334) {
  P name_,r_,tailQ_;
  P swig_modF2801;
  P tmpF2800;
  P x_1450F2799;
  P x_1449F2798;
  P use_c_modF2797;
  P use_modF2796;
  P modF2795;
  P envF2794;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2794 = T1;
  T3 = CALL1(1,VARREF(YevalSastYenvironment_module),envF2794);
  modF2795 = T3;
  T4 = FUNSHELL(1,fun_use_mod_332,1);
  use_modF2796 = T4;
  T5 = fun_use_c_mod_333;
  use_c_modF2797 = T5;
  FUNINIT(use_modF2796, 1,envF2794);
  T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  x_1449F2798 = T7;
  x_1450F2799 = VARREF(YgooScolsSseqYsuffixQ);
  T11 = CALL2(1,x_1450F2799,x_1449F2798,LITREF(lit_692));
  tmpF2800 = T11;
  if (tmpF2800 != YPfalse) {
    T12 = tmpF2800;
  } else {
    T13 = CALL2(1,x_1450F2799,x_1449F2798,LITREF(lit_693));
    T12 = T13;
  }
  T10 = T12;
  if (T10 != YPfalse) {
    T15 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
    T14 = CALL2(0,use_c_modF2797,modF2795,T15);
    T9 = T14;
  } else {
    T17 = CALL2(1,x_1450F2799,x_1449F2798,LITREF(lit_694));
    if (T17 != YPfalse) {
      T23 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
      T22 = CALL2(1,VARREF(YgooScolsSseqYsplit),T23,YPchr((P)46));
      T21 = CALL1(1,VARREF(YgooSmacrosY1st),T22);
      T20 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T21);
      T19 = CALL1(0,use_modF2796,T20);
      swig_modF2801 = T19;
      T25 = CALL2(1,VARREF(YgooSmacrosYcat_sym),name_,LITREF(lit_695));
      T24 = CALL2(0,use_c_modF2797,swig_modF2801,T25);
      T18 = T24;
      T16 = T18;
    } else {
      T26 = CALL1(0,use_modF2796,name_);
      T16 = T26;
    }
    T9 = T16;
  }
  T8 = T9;
  T6 = T8;
  T27 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T2 = T27;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_insert_and_mangle_globalX_335) {
  P binding_,mangle_prefix_,r_;
  P rF2802;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
LINK_STACK();
  ARG(binding_, 0);
  ARG(mangle_prefix_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  check_type(T1,VARREF(YevalSastYLstatic_global_environmentG));
  rF2802 = T1;
  T3 = CALL1(1,VARREF(YevalSastYenvironment_bindings),rF2802);
  T5 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat_sym),mangle_prefix_,T5);
  T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYimport_and_mangle_globalX) {
  P b_,mangle_prefix_,env_;
  P tmpF2804;
  P existingF2803;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3;
LINK_STACK();
  ARG(b_, 0);
  ARG(mangle_prefix_, 1);
  ARG(env_, 2);
loop:
  T3 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat_sym),mangle_prefix_,T3);
  T1 = CALL2(1,VARREF(YevalSastYfind_binding),T2,env_);
  existingF2803 = T1;
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2803,YPfalse);
  tmpF2804 = T6;
  if (tmpF2804 != YPfalse) {
    T7 = tmpF2804;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2803,b_);
    T7 = T8;
  }
  T5 = T7;
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T11 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
    T10 = CALL2(1,VARREF(YgooSmacrosYcat_sym),mangle_prefix_,T11);
    T12 = CALL1(1,VARREF(YevalSastYbinding_module_name),b_);
    T9 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_700),T10,T12);
  } else {
  }
  CALL3(1,VARREF(YevalSastYinsert_and_mangle_globalX),b_,mangle_prefix_,env_);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_337) {
  P b_;
  P T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSastYimport_and_mangle_globalX),b_,FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_use_mangle_module_338) {
  P name_,mangler_,r_,tailQ_;
  P str_manglerF2809;
  P used_moduleF2808;
  P loaderF2807;
  P moduleF2806;
  P envF2805;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(name_, 0);
  ARG(mangler_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2805 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  moduleF2806 = T3;
  T5 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),envF2805);
  loaderF2807 = T5;
  T7 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF2807,name_);
  used_moduleF2808 = T7;
  T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),mangler_);
  str_manglerF2809 = T9;
  T10 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF2805);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T10,used_moduleF2808);
  T11 = FUNFAB(fun_337,2,str_manglerF2809,envF2805);
  T12 = CALL1(1,VARREF(YevalSastYmodule_exports),used_moduleF2808);
  CALL2(1,VARREF(YgooSmacrosYdo),T11,T12);
  T13 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T8 = T13;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_expand_bind_list_339) {
  P pat_,var_,fail_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T0 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_706),pat_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_list_340) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_708));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,LITREF(lit_9));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_expand_bind_list_341) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),pat_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_710),pat_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_711),pat_);
      T3 = T5;
    } else {
      if (YPtrue != YPfalse) {
        T7 = CALL3(1,VARREF(YevalSastYexpand_bind_listT),pat_,var_,fail_);
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

FUNCODEDEF(fun_expand_bind_listT_342) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_708));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,LITREF(lit_9));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_listT_343) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T6 = CALL1(1,VARREF(Ylst),var_);
  T9 = CALL1(1,VARREF(Yhead),pat_);
  T8 = CALL3(1,VARREF(YevalSastYexpand_bind_element),T9,var_,fail_);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T5 = CALL3(1,VARREF(YgooSmacrosYcat),T6,T7,LITREF(lit_9));
  T4 = CALL1(1,VARREF(Ylst),T5);
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),T4,LITREF(lit_9));
  T2 = CALL1(1,VARREF(Ylst),T3);
  T12 = CALL1(1,VARREF(Ytail),pat_);
  T11 = CALL3(1,VARREF(YevalSastYexpand_bind_listT),T12,var_,fail_);
  T10 = CALL1(1,VARREF(Ylst),T11);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T10,LITREF(lit_9));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_element_344) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_717));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_550));
  T6 = CALL1(1,VARREF(Ylst),pat_);
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,T6,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T7 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T3,T7,LITREF(lit_9));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_element_345) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),pat_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
    T6 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
    T8 = CALL1(1,VARREF(YgooSmacrosY2nd),pat_);
    T7 = CALL1(1,VARREF(Ylst),T8);
    T11 = CALL1(1,VARREF(Ylst),LITREF(lit_719));
    T12 = CALL1(1,VARREF(Ylst),var_);
    T13 = CALL1(1,VARREF(Ylst),fail_);
    T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,LITREF(lit_9));
    T9 = CALL1(1,VARREF(Ylst),T10);
    T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T9,LITREF(lit_9));
    T4 = CALL1(1,VARREF(Ylst),T5);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_720));
    T17 = CALL1(1,VARREF(Ylst),var_);
    T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_9));
    T14 = CALL1(1,VARREF(Ylst),T15);
    T2 = CALL4(1,VARREF(YgooSmacrosYcat),T3,T4,T14,LITREF(lit_9));
    T0 = T2;
  } else {
    T19 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T19 != YPfalse) {
      T21 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
      T24 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
      T26 = CALL1(1,VARREF(YgooSmacrosY2nd),pat_);
      T25 = CALL1(1,VARREF(Ylst),T26);
      T27 = CALL1(1,VARREF(Ylst),var_);
      T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T27,LITREF(lit_9));
      T22 = CALL1(1,VARREF(Ylst),T23);
      T30 = CALL1(1,VARREF(Ylst),LITREF(lit_550));
      T31 = CALL1(1,VARREF(Ylst),Ynil);
      T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
      T28 = CALL1(1,VARREF(Ylst),T29);
      T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T28,LITREF(lit_9));
      T18 = T20;
    } else {
      if (YPtrue != YPfalse) {
        T34 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
        T37 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
        T42 = CALL1(1,VARREF(Ylst),var_);
        T45 = CALL1(1,VARREF(Ylst),LITREF(lit_721));
        T46 = CALL1(1,VARREF(Ylst),var_);
        T47 = CALL1(1,VARREF(Ylst),fail_);
        T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T47,LITREF(lit_9));
        T43 = CALL1(1,VARREF(Ylst),T44);
        T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,LITREF(lit_9));
        T40 = CALL1(1,VARREF(Ylst),T41);
        T39 = CALL2(1,VARREF(YgooSmacrosYcat),T40,LITREF(lit_9));
        T38 = CALL1(1,VARREF(Ylst),T39);
        T49 = CALL3(1,VARREF(YevalSastYexpand_bind_list),pat_,var_,fail_);
        T48 = CALL1(1,VARREF(Ylst),T49);
        T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T48,LITREF(lit_9));
        T35 = CALL1(1,VARREF(Ylst),T36);
        T52 = CALL1(1,VARREF(Ylst),LITREF(lit_720));
        T53 = CALL1(1,VARREF(Ylst),var_);
        T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,LITREF(lit_9));
        T50 = CALL1(1,VARREF(Ylst),T51);
        T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T50,LITREF(lit_9));
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

FUNCODEDEF(fun_expand_pattern_346) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_607));
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_724));
  T5 = CALL1(1,VARREF(Ylst),var_);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_554));
  T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,T6,LITREF(lit_9));
  T2 = CALL1(1,VARREF(Ylst),T3);
  T8 = CALL3(1,VARREF(YevalSastYexpand_bind_list),pat_,var_,fail_);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T11 = CALL1(1,VARREF(Ylst),fail_);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_725));
  T13 = CALL1(1,VARREF(Ylst),var_);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,LITREF(lit_9));
  T9 = CALL1(1,VARREF(Ylst),T10);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T7,T9,LITREF(lit_9));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_347) {
  P x_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Ylst),x_);
  T2 = CALL1(1,VARREF(Ylst),YPfalse);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),T1,T2,LITREF(lit_9));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_syntax_if_348) {
  P x_;
  P epatF2817;
  P failF2816;
  P varF2815;
  P elseF2814;
  P thenF2813;
  P valueF2812;
  P varsF2811;
  P patF2810;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_pattern),x_);
  patF2810 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_bind_pattern_variables),patF2810);
  varsF2811 = T3;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_value),x_);
  valueF2812 = T5;
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_then),x_);
  thenF2813 = T7;
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_else),x_);
  elseF2814 = T9;
  T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF2815 = T11;
  T13 = CALL0(1,VARREF(YgooSmacrosYgensym));
  failF2816 = T13;
  T15 = CALL3(1,VARREF(YevalSastYexpand_pattern),patF2810,varF2815,failF2816);
  epatF2817 = T15;
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_728));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_729));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_730));
  T26 = CALL1(1,VARREF(Ylst),failF2816);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_731));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_732));
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,LITREF(lit_9));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_733));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_616));
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,LITREF(lit_9));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T33,LITREF(lit_9));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_729));
  T40 = CALL1(1,VARREF(Ylst),elseF2814);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,LITREF(lit_9));
  T37 = CALL1(1,VARREF(Ylst),T38);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T37,LITREF(lit_9));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T23 = CALL2(1,VARREF(YgooSmacrosYcat),T24,LITREF(lit_9));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T48 = CALL1(1,VARREF(Ylst),varF2815);
  T49 = CALL1(1,VARREF(Ylst),valueF2812);
  T47 = CALL3(1,VARREF(YgooSmacrosYcat),T48,T49,LITREF(lit_9));
  T46 = CALL1(1,VARREF(Ylst),T47);
  T45 = CALL2(1,VARREF(YgooSmacrosYcat),T46,LITREF(lit_9));
  T44 = CALL1(1,VARREF(Ylst),T45);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T55 = fun_347;
  T54 = CALL2(1,VARREF(YgooSmacrosYmap),T55,varsF2811);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T56 = CALL1(1,VARREF(Ylst),epatF2817);
  T57 = CALL1(1,VARREF(Ylst),thenF2813);
  T51 = CALL5(1,VARREF(YgooSmacrosYcat),T52,T53,T56,T57,LITREF(lit_9));
  T50 = CALL1(1,VARREF(Ylst),T51);
  T42 = CALL4(1,VARREF(YgooSmacrosYcat),T43,T44,T50,LITREF(lit_9));
  T41 = CALL1(1,VARREF(Ylst),T42);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T41,LITREF(lit_9));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T19,LITREF(lit_9));
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

FUNCODEDEF(fun_r_extendT_349) {
  P r_,bindings_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(r_, 0);
  ARG(bindings_, 1);
loop:
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLstatic_local_environmentG),VARREF(YevalSastYenvironment_next),r_,VARREF(YevalSastYenvironment_bindings),bindings_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_insert_globalX_350) {
  P binding_,r_;
  P rF2818;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  check_type(T1,VARREF(YevalSastYLstatic_global_environmentG));
  rF2818 = T1;
  T3 = CALL1(1,VARREF(YevalSastYenvironment_bindings),rF2818);
  T4 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_351) {
  P b_;
  P T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSastYinsert_globalX),b_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_globalsX_352) {
  P bindings_,r_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(bindings_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNFAB(fun_351,1,r_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,bindings_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_static_global_environment_353) {
  P r_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYenvironment_next),r_);
  T0 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_static_global_environment_354) {
  P r_;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
UNLINK_STACK();
  RET(r_);
}

FUNCODEDEF(fun_find_syntax_environment_355) {
  P r_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  T0 = CALL1(1,VARREF(YevalSastYmodule_syntax_environment),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_environment_module_356) {
  P r_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  T0 = CALL1(1,VARREF(YevalSastYenvironment_module),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_357) {
  P bindings_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1;
LINK_STACK();
  ARG(bindings_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindings_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYenvironment_next),FREEREF(1));
    T2 = CALL2(1,VARREF(YevalSastYfind_binding),FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(Yhead),bindings_);
    T6 = CALL1(1,VARREF(YevalSastYbinding_name),T7);
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

FUNCODEDEF(fun_find_binding_358) {
  P name_,r_;
  P loopF2819;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_357,3);
  loopF2819 = T1;
  FUNINIT(loopF2819, 3,name_,r_,loopF2819);
  T3 = CALL1(1,VARREF(YevalSastYenvironment_bindings),r_);
  T2 = CALL1(0,loopF2819,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_binding_359) {
  P name_,r_;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_find_binding_360) {
  P name_,r_;
  P tmpF2820;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYenvironment_bindings),r_);
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),T2,name_,YPfalse);
  tmpF2820 = T1;
  if (tmpF2820 != YPfalse) {
    T3 = tmpF2820;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYenvironment_next),r_);
    T4 = CALL2(1,VARREF(YevalSastYfind_binding),name_,T5);
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_frame_bindings_361) {
  P env_;
  P T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T0 = CALL1(1,VARREF(YevalSastYenvironment_bindings),env_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_register_magic_binding_362) {
  P name_,value_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(value_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYadd),VARREF(YevalSastYTmagic_bindingsT),value_);
  T0 = VARSET(YevalSastYTmagic_bindingsT,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_magic_bindings_363) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(VARREF(YevalSastYTmagic_bindingsT));
}

FUNCODEDEF(fun_x_1454_364) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_763),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_365) {
  P return_;
  P sexpr_nameF2837;
  P special_nameF2836;
  P x_1453F2835;
  P x_1453F2834;
  P x_1453F2833;
  P x_1453F2832;
  P x_1453F2831;
  P x_1453F2830;
  P x_1453F2829;
  P x_1453F2828;
  P x_1453F2827;
  P x_1453F2826;
  P bodyF2825;
  P paramsF2824;
  P nameF2823;
  P x_1453F2822;
  P x_1454F2821;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1454_364,2);
  x_1454F2821 = T1;
  FUNINIT(x_1454F2821, 2,FREEREF(0),return_);
  x_1453F2822 = FREEREF(0);
  nameF2823 = YPfalse;
  nameF2823 = BOXFAB(nameF2823);
  paramsF2824 = YPfalse;
  paramsF2824 = BOXFAB(paramsF2824);
  bodyF2825 = YPfalse;
  bodyF2825 = BOXFAB(bodyF2825);
  T9 = CALL2(1,VARREF(YisaQ),x_1453F2822,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1453F2822,LITREF(lit_763),x_1454F2821);
    x_1453F2826 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1453F2826,x_1454F2821);
    BOXVAL(nameF2823) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1453F2826);
    x_1453F2827 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1453F2827,x_1454F2821);
    x_1453F2828 = T16;
    BOXVAL(paramsF2824) = x_1453F2828;
    x_1453F2829 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1453F2829,x_1454F2821);
    x_1453F2830 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1453F2830,x_1454F2821);
    T21 = CALL1(1,VARREF(Ytail),x_1453F2829);
    x_1453F2831 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1453F2831,x_1454F2821);
    T18 = T22;
    T17 = T18;
    T23 = CALL1(1,VARREF(Ytail),x_1453F2827);
    x_1453F2832 = T23;
    BOXVAL(bodyF2825) = x_1453F2832;
    x_1453F2833 = Ynil;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1453F2833,x_1454F2821);
    x_1453F2834 = T26;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1453F2834,x_1454F2821);
    T28 = CALL1(1,VARREF(Ytail),x_1453F2833);
    x_1453F2835 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1453F2835,x_1454F2821);
    T25 = T29;
    T24 = T25;
    T15 = T24;
    T12 = T15;
    T10 = T12;
  } else {
    T30 = CALL2(1,x_1454F2821,LITREF(lit_6),x_1453F2822);
  }
  T33 = BOXVAL(nameF2823);
  T32 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_764),T33);
  special_nameF2836 = T32;
  T36 = BOXVAL(nameF2823);
  T35 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_765),T36,LITREF(lit_766));
  sexpr_nameF2837 = T35;
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_767));
  T42 = CALL1(1,VARREF(Ylst),special_nameF2836);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_768));
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_550));
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_572));
  T49 = CALL3(1,VARREF(YgooSmacrosYcat),T50,T51,Ynil);
  T48 = CALL1(1,VARREF(Ylst),T49);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_39));
  T53 = CALL1(1,VARREF(Ylst),sexpr_nameF2837);
  T54 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
  T55 = CALL1(1,VARREF(Ylst),YPfalse);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_769));
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_770));
  T62 = BOXVAL(paramsF2824);
  T61 = CALL2(1,VARREF(YgooSmacrosYcat),T62,LITREF(lit_9));
  T60 = CALL1(1,VARREF(Ylst),T61);
  T63 = BOXVAL(bodyF2825);
  T58 = CALL4(1,VARREF(YgooSmacrosYcat),T59,T60,T63,LITREF(lit_9));
  T57 = CALL1(1,VARREF(Ylst),T58);
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T65 = CALL1(1,VARREF(Ylst),YPfalse);
  T44 = CALLN(1,VARREF(YgooSmacrosYcat),13,T45,T46,T47,T48,T52,T53,T54,T55,T56,T57,T64,T65,LITREF(lit_9));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T43,LITREF(lit_9));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T68 = CALL1(1,VARREF(Ylst),LITREF(lit_756));
  T71 = CALL1(1,VARREF(Ylst),LITREF(lit_550));
  T73 = BOXVAL(nameF2823);
  T72 = CALL1(1,VARREF(Ylst),T73);
  T70 = CALL3(1,VARREF(YgooSmacrosYcat),T71,T72,Ynil);
  T69 = CALL1(1,VARREF(Ylst),T70);
  T74 = CALL1(1,VARREF(Ylst),special_nameF2836);
  T67 = CALL4(1,VARREF(YgooSmacrosYcat),T68,T69,T74,LITREF(lit_9));
  T66 = CALL1(1,VARREF(Ylst),T67);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),T38,T39,T66,LITREF(lit_9));
  T34 = T37;
  T31 = T34;
  T7 = T31;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_366) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_365,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_367) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_if_test),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_if_then),x_);
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_if_else),x_);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_alternative),T1,T2,T3,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_368) {
  P x_,r_,tailQ_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Ytail),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_sequential),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_369) {
  P x_,r_,tailQ_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_raw),T1,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_370) {
  P x_,r_,tailQ_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_text_of_quotation),x_);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T1,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_371) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_assignment_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_assignment_value),x_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_assignment),T1,T2,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_372) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_value),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_variable_definition),T1,T2,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_373) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_value),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_dynamic_definition),T1,T2,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_374) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_definition_value),x_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_syntax_definition),T1,T2,r_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_375) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_definition_value),x_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_syntax_definition),T1,T2,r_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_376) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_value),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_method_definition),T1,T2,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_377) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_signature),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_generic_definition),T1,T2,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_378) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_value),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_function_definition),T1,T2,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_379) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_signature),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_body),x_);
  T3 = CALL1(1,VARREF(YgooScolsSlstYline_of),x_);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_function),T1,T2,T3,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_380) {
  P x_,r_,tailQ_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_boundQ),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_381) {
  P x_,r_,tailQ_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_let_Gcombination),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_382) {
  P x_,r_,tailQ_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_value),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_383) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_loc_bound_names),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_loc_bound_signatures),x_);
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_loc_bound_bodies),x_);
  T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_loc_raw_body),x_);
  T0 = CALLN(1,VARREF(YevalSastYobjectify_locals),6,T1,T2,T3,T4,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_384) {
  P x_,r_,tailQ_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_Gloc),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_385) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_block_name),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_block_body),x_);
  T3 = CALL1(1,VARREF(YgooScolsSlstYline_of),x_);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_bind_exit),T1,T2,T3,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_386) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unwind_protect_protected_form),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms),x_);
  T3 = CALL1(1,VARREF(YgooScolsSlstYline_of),x_);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_unwind_protect),T1,T2,T3,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_387) {
  P x_,r_,tailQ_;
  P bodyF2843;
  P handlerF2842;
  P testF2841;
  P infoF2840;
  P typeF2839;
  P tup30F2838;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_expand),x_);
  tup30F2838 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F2838,YPint((P)0));
  typeF2839 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F2838,YPint((P)1));
  infoF2840 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F2838,YPint((P)2));
  testF2841 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F2838,YPint((P)3));
  handlerF2842 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F2838,YPint((P)4));
  bodyF2843 = T11;
  T12 = CALLN(1,VARREF(YevalSastYobjectify_monitor),7,typeF2839,infoF2840,testF2841,handlerF2842,bodyF2843,r_,tailQ_);
  T10 = T12;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pairize_388) {
  P args_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(args_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),args_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),LITREF(lit_550),Ynil);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),args_);
    T6 = CALL1(1,VARREF(Ytail),args_);
    T5 = CALL1(1,VARREF(YevalSastYpairize),T6);
    T3 = CALL3(1,VARREF(Ylst),LITREF(lit_551),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_389) {
  P x_,r_,tailQ_;
  P nameF2844;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_variable),x_);
  nameF2844 = T1;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_813));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_550));
  T8 = CALL1(1,VARREF(Ylst),nameF2844);
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T11 = CALL1(1,VARREF(YevalSsyntaxYsexpr_define_class_parents),x_);
  T10 = CALL1(1,VARREF(YevalSastYpairize),T11);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,T9,LITREF(lit_9));
  T2 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLvariable_definitionG),LITREF(lit_69),nameF2844,T3,r_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_390) {
  P x_,r_,tailQ_;
  P lineF2850;
  P typeF2849;
  P setter_nameF2848;
  P ownerF2847;
  P varF2846;
  P nameF2845;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_name),x_);
  nameF2845 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_init_var),x_);
  varF2846 = T3;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_owner),x_);
  ownerF2847 = T5;
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),nameF2845);
  setter_nameF2848 = T7;
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_type),x_);
  typeF2849 = T9;
  T11 = CALL1(1,VARREF(YgooScolsSlstYline_of),x_);
  lineF2850 = T11;
  T15 = CALL3(1,VARREF(YevalSsyntaxYsexpr_fab_getter),nameF2845,ownerF2847,lineF2850);
  T16 = CALL4(1,VARREF(YevalSsyntaxYsexpr_fab_setter),nameF2845,ownerF2847,typeF2849,lineF2850);
  T20 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_initQ),x_);
  if (T20 != YPfalse) {
    T25 = CALL1(1,VARREF(Ylst),varF2846);
    T26 = CALL1(1,VARREF(Ylst),LITREF(lit_637));
    T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_9));
    T23 = CALL1(1,VARREF(Ylst),T24);
    T22 = CALL2(1,VARREF(YgooSmacrosYcat),T23,LITREF(lit_9));
    T28 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_init),x_);
    T27 = CALL2(1,VARREF(YgooScolsSlstYline_list),lineF2850,T28);
    T21 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),T22,T27);
    T19 = T21;
  } else {
    T19 = LITREF(lit_817);
  }
  T18 = CALL5(1,VARREF(Ylst),ownerF2847,nameF2845,setter_nameF2848,typeF2849,T19);
  T17 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_application),LITREF(lit_816),T18);
  T14 = CALL3(1,VARREF(Ylst),T15,T16,T17);
  T13 = CALL1(1,VARREF(YevalSsyntaxYsexpr_make_begin),T14);
  T12 = CALL3(1,VARREF(YevalSastYobjectify),T13,r_,tailQ_);
  T10 = T12;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_391) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = CALL1(1,VARREF(Ytail),x_);
  T1 = CALL1(1,VARREF(Yhead),T2);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_compile_time),T1,r_,tailQ_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_392) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = CALL1(1,VARREF(Ytail),x_);
  T1 = CALL1(1,VARREF(Yhead),T2);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_compile_time),T1,r_,tailQ_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_393) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_forward_primitiveQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_variable),x_);
    CALL4(1,VARREF(YevalSastYast_define_binding),r_,T2,YPfalse,LITREF(lit_601));
    T3 = CALL3(1,VARREF(YevalSastYobjectify),YPfalse,r_,tailQ_);
    T0 = T3;
  } else {
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_variable),x_);
    T6 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_adjectives),x_);
    T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_signature),x_);
    T8 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_body),x_);
    T4 = CALL5(1,VARREF(YevalSastYobjectify_primitive_definition),T5,T6,T7,T8,r_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_394) {
  P x_,r_,tailQ_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_expand_backquote),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_macro_expand_395) {
  P x_,r_,tailQ_;
  P resF2853;
  P macF2852;
  P astF2851;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = CALL1(1,VARREF(Yhead),x_);
  T1 = CALL3(1,VARREF(YevalSastYobjectify),T2,r_,tailQ_);
  astF2851 = T1;
  T4 = CALL2(1,VARREF(YisaQ),astF2851,VARREF(YevalSastYLmacro_referenceG));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYreference_binding),astF2851);
    macF2852 = T6;
    T9 = CALL1(1,VARREF(YevalSastYbinding_handler),macF2852);
    T8 = CALL3(1,T9,x_,r_,tailQ_);
    resF2853 = T8;
    T7 = resF2853;
    T5 = T7;
    T3 = T5;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_396) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T1 = CALL3(1,VARREF(YevalSastYast_macro_expand),T2,r_,tailQ_);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T1,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_397) {
  P x_,r_,tailQ_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYexpand_syntax_if),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_398) {
  P x_,r_,tailQ_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(Ytail),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_export),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_399) {
  P x_,r_,tailQ_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_use_module),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_400) {
  P x_,r_,tailQ_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_use_mangle_module),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_401) {
  P x_,r_,tailQ_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_use_include),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_402) {
  P x_,r_,tailQ_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_use_library),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_403) {
  P x_,r_,tailQ_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_useSexport_module),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_transaction_implemented_bindings_404) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYtransaction_implemented_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_transaction_implemented_bindings_setter_405) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYtransaction_implemented_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_406) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)10));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_transaction_dependents_407) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYtransaction_dependents));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_transaction_dependents_setter_408) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYtransaction_dependents));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_409) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)10));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYtransaction_register_implemented_binding) {
  P b_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T0 = CALL1(1,VARREF(Ynot),VARREF(YevalSastYTcurrent_subtransactionT));
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(YevalSdependencyYast_error),LITREF(lit_866));
  } else {
  }
  T3 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),VARREF(YevalSastYTcurrent_subtransactionT));
  T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,T3,b_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(YevalSastYtransaction_register_dependent) {
  P d_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(d_, 0);
loop:
  T0 = CALL1(1,VARREF(Ynot),VARREF(YevalSastYTcurrent_subtransactionT));
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(YevalSdependencyYast_error),LITREF(lit_869));
  } else {
  }
  T3 = CALL1(1,VARREF(YevalSastYtransaction_dependents),VARREF(YevalSastYTcurrent_subtransactionT));
  T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,T3,d_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(YevalSastYtransaction_emptyQ) {
  P t_;
  P tmpF2854;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t_);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T2);
  tmpF2854 = T1;
  if (tmpF2854 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t_);
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T5);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_413) {
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

FUNCODEDEF(fun_414) {
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

FUNCODEDEF(YevalSastYmerge_transactionsX) {
  P t1_,t2_;
  P t2_dependentsF2858;
  P t1_dependentsF2857;
  P t2_bindingsF2856;
  P t1_bindingsF2855;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYtransaction_emptyQ),t2_);
  if (T1 != YPfalse) {
    T0 = t1_;
  } else {
    T3 = CALL1(1,VARREF(YevalSastYtransaction_emptyQ),t1_);
    if (T3 != YPfalse) {
      T2 = t2_;
    } else {
      if (YPtrue != YPfalse) {
        T6 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t1_);
        t1_bindingsF2855 = T6;
        T8 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t2_);
        t2_bindingsF2856 = T8;
        T10 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t1_);
        t1_dependentsF2857 = T10;
        T12 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t2_);
        t2_dependentsF2858 = T12;
        T13 = FUNFAB(fun_413,1,t1_bindingsF2855);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T13,t2_bindingsF2856);
        T14 = FUNFAB(fun_414,1,t1_dependentsF2857);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T14,t2_dependentsF2858);
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

FUNCODEDEF(fun_416) {
  P binding_,junk_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(junk_, 1);
loop:
  T0 = CALL2(1,VARREF(YevalSastYbinding_freeQ_setter),YPtrue,binding_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_417) {
  P dependent_,junk_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(junk_, 1);
loop:
  T0 = CALL1(1,VARREF(YevalSdependencyYdetach_dependent),dependent_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYroll_back_transaction) {
  P t_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T0 = fun_416;
  T1 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t_);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T0,T1);
  T3 = fun_417;
  T4 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t_);
  T2 = CALL2(1,VARREF(YgooScolsScolYdo_keyed),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_419) {
  P valueF2859;
  P T0,T1,T2;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLtransactionG));
  VARSET(YevalSastYTcurrent_subtransactionT,T0);
  T2 = CALL0(1,FREEREF(0));
  valueF2859 = T2;
  BOXVAL(FREEREF(1)) = YPtrue;
  T1 = valueF2859;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_420) {
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
loop:
  T0 = BOXVAL(FREEREF(0));
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYmodule_transaction),FREEREF(1));
    T2 = CALL2(1,VARREF(YevalSastYmerge_transactionsX),T3,VARREF(YevalSastYTcurrent_subtransactionT));
    T1 = CALL2(1,VARREF(YevalSastYmodule_transaction_setter),T2,FREEREF(1));
  } else {
    T4 = CALL1(1,VARREF(YevalSastYroll_back_transaction),VARREF(YevalSastYTcurrent_subtransactionT));
  }
  T5 = VARSET(YevalSastYTcurrent_subtransactionT,FREEREF(2));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(YevalSastYcall_with_subtransaction) {
  P module_,thunk_;
  P savedF2861;
  P successF2860;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(module_, 0);
  ARG(thunk_, 1);
loop:
  successF2860 = YPfalse;
  successF2860 = BOXFAB(successF2860);
  savedF2861 = VARREF(YevalSastYTcurrent_subtransactionT);
  T4 = FUNFAB(fun_419,2,thunk_,successF2860);
  T5 = FUNFAB(fun_420,3,successF2860,module_,savedF2861);
  T3 = with_cleanup(T4,T5);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1458_422) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_886),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_423) {
  P return_;
  P x_1457F2874;
  P x_1457F2873;
  P x_1457F2872;
  P x_1457F2871;
  P x_1457F2870;
  P x_1457F2869;
  P x_1457F2868;
  P x_1457F2867;
  P x_1457F2866;
  P bodyF2865;
  P moduleF2864;
  P x_1457F2863;
  P x_1458F2862;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1458_422,2);
  x_1458F2862 = T1;
  FUNINIT(x_1458F2862, 2,FREEREF(0),return_);
  x_1457F2863 = FREEREF(0);
  moduleF2864 = YPfalse;
  moduleF2864 = BOXFAB(moduleF2864);
  bodyF2865 = YPfalse;
  bodyF2865 = BOXFAB(bodyF2865);
  T7 = CALL2(1,VARREF(YisaQ),x_1457F2863,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1457F2863,LITREF(lit_886),x_1458F2862);
    x_1457F2866 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1457F2866,x_1458F2862);
    x_1457F2867 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1457F2867,x_1458F2862);
    BOXVAL(moduleF2864) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1457F2867);
    x_1457F2868 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1457F2868,x_1458F2862);
    x_1457F2869 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1457F2869,x_1458F2862);
    T18 = CALL1(1,VARREF(Ytail),x_1457F2868);
    x_1457F2870 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1457F2870,x_1458F2862);
    T15 = T19;
    T12 = T15;
    T20 = CALL1(1,VARREF(Ytail),x_1457F2866);
    x_1457F2871 = T20;
    BOXVAL(bodyF2865) = x_1457F2871;
    x_1457F2872 = Ynil;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1457F2872,x_1458F2862);
    x_1457F2873 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1457F2873,x_1458F2862);
    T25 = CALL1(1,VARREF(Ytail),x_1457F2872);
    x_1457F2874 = T25;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1457F2874,x_1458F2862);
    T22 = T26;
    T21 = T22;
    T10 = T21;
    T8 = T10;
  } else {
    T27 = CALL2(1,x_1458F2862,LITREF(lit_6),x_1457F2863);
  }
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_880));
  T31 = BOXVAL(moduleF2864);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_770));
  T35 = CALL1(1,VARREF(Ylst),Ynil);
  T36 = BOXVAL(bodyF2865);
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T36,LITREF(lit_9));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T32,LITREF(lit_9));
  T5 = T28;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_424) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_423,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_425) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL3(1,VARREF(YevalSastYobjectify),FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYobjectify_with_subtransaction) {
  P e_,r_,tailQ_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYenvironment_module),r_);
  T2 = FUNFAB(fun_425,3,e_,r_,tailQ_);
  T0 = CALL2(1,VARREF(YevalSastYcall_with_subtransaction),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_modules_427) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_loader_modules));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_modules_setter_428) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_loader_modules));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_429) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)1000));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_stack_430) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_loader_stack));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_stack_setter_431) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_loader_stack));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_432) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_module_name_433) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_name_setter_434) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_mangled_name_435) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_mangled_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_mangled_name_setter_436) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_mangled_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_437) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_module_mangled_string_name_438) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_mangled_string_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_mangled_string_name_setter_439) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_mangled_string_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_440) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_module_target_environment_441) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_target_environment));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_target_environment_setter_442) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_target_environment));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_syntax_environment_443) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_syntax_environment));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_syntax_environment_setter_444) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_syntax_environment));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pmodule_exports_445) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYPmodule_exports));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pmodule_exports_setter_446) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYPmodule_exports));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_447) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)1000));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_data_processedQ_448) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_data_processedQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_data_processedQ_setter_449) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_data_processedQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_450) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_module_runtime_data_451) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_runtime_data));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_runtime_data_setter_452) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_runtime_data));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_453) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_module_transaction_454) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_transaction));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_transaction_setter_455) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_transaction));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_456) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLtransactionG));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_uses_c_files_457) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_uses_c_files));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_uses_c_files_setter_458) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_uses_c_files));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_459) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_uses_c_includes_460) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_uses_c_includes));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_uses_c_includes_setter_461) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_uses_c_includes));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_462) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_uses_c_libraries_463) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYmodule_uses_c_libraries));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_uses_c_libraries_setter_464) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmodule_uses_c_libraries));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_465) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_exports_466) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  CALL1(1,VARREF(YevalSastYensure_module_data),x_);
  T0 = CALL1(1,VARREF(YevalSastYPmodule_exports),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYset_module_environments) {
  P mod_,syntax_env_,target_env_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(syntax_env_, 1);
  ARG(target_env_, 2);
loop:
  CALL2(1,VARREF(YevalSastYmodule_syntax_environment_setter),syntax_env_,mod_);
  T0 = CALL2(1,VARREF(YevalSastYmodule_target_environment_setter),target_env_,mod_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_468) {
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

FUNCODEDEF(YevalSastYdo_module_loader_modules) {
  P f_,loader_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(loader_, 1);
loop:
  T1 = FUNFAB(fun_468,1,f_);
  T2 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),loader_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_module_type_470) {
  P loader_;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YevalSastYLmoduleG));
}

FUNCODEDEF(YevalSastYregister_moduleX) {
  P module_loader_,mod_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(module_loader_, 0);
  ARG(mod_, 1);
loop:
  T0 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),module_loader_);
  T1 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),mod_,T0,T1);
UNLINK_STACK();
  RET(module_loader_);
}

FUNCODEDEF(YevalSastYprobe_module) {
  P loader_,name_;
  P tmpF2875;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),loader_);
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),T2,name_,YPfalse);
  tmpF2875 = T1;
  if (tmpF2875 != YPfalse) {
    T3 = tmpF2875;
  } else {
    T4 = CALL2(1,VARREF(YevalSastYload_and_register_module),loader_,name_);
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_473) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YevalSastYload_module),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_474) {
  P x_1462F2879;
  P x_1461F2878;
  P tup31F2877;
  P x_1460F2876;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
loop:
  x_1460F2876 = FREEREF(0);
  T3 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),x_1460F2876);
  T2 = CALL1(1,VARREF(YgooScolsSseqxYpopX),T3);
  tup31F2877 = T2;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup31F2877,YPint((P)0));
  x_1461F2878 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup31F2877,YPint((P)1));
  x_1462F2879 = T7;
  CALL2(1,VARREF(YevalSastYmodule_loader_stack_setter),x_1461F2878,x_1460F2876);
  T6 = x_1462F2879;
  T4 = T6;
  T1 = T4;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYload_and_register_module) {
  P loader_,name_;
  P modF2884;
  P x_1459F2883;
  P indentF2882;
  P depthF2881;
  P stackF2880;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),loader_);
  stackF2880 = T1;
  T3 = CALL1(1,VARREF(YgooStypesYlen),stackF2880);
  depthF2881 = T3;
  T5 = CALL2(1,VARREF(YgooScolsSseqYrepeat),LITREF(lit_973),depthF2881);
  indentF2882 = T5;
  T6 = CALL2(1,VARREF(YgooScolsScolYmemQ),stackF2880,name_);
  if (T6 != YPfalse) {
    T8 = CALL1(1,VARREF(Yhead),stackF2880);
    T7 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_974),T8,name_);
  } else {
  }
  CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_975),indentF2882,name_);
  x_1459F2883 = loader_;
  T12 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),x_1459F2883);
  T11 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T12,name_);
  T10 = CALL2(1,VARREF(YevalSastYmodule_loader_stack_setter),T11,x_1459F2883);
  T14 = FUNFAB(fun_473,2,loader_,name_);
  T15 = FUNFAB(fun_474,1,loader_);
  T13 = with_cleanup(T14,T15);
  modF2884 = T13;
  CALL2(1,VARREF(YevalSastYregister_moduleX),loader_,modF2884);
  CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_976),indentF2882);
  T9 = modF2884;
  T4 = T9;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYexport_bindingX) {
  P module_,name_,binding_;
  P tmpF2887;
  P existingF2886;
  P exportsF2885;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(name_, 1);
  ARG(binding_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_exports),module_);
  exportsF2885 = T1;
  T3 = CALL3(1,VARREF(YgooScolsScolYelt_or),exportsF2885,name_,YPfalse);
  existingF2886 = T3;
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2886,YPfalse);
  tmpF2887 = T6;
  if (tmpF2887 != YPfalse) {
    T7 = tmpF2887;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2886,binding_);
    T7 = T8;
  }
  T5 = T7;
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T9 = CALL5(1,VARREF(YevalSastYnamespace_error),LITREF(lit_981),existingF2886,binding_,module_,name_);
  } else {
  }
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,exportsF2885,name_);
  T2 = YPfalse;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYbinding_native_toQ) {
  P binding_,module_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(module_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_name),module_);
  T2 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_478) {
  P binding_;
  P tmpF2888;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_freeQ),binding_);
  tmpF2888 = T2;
  if (tmpF2888 != YPfalse) {
    T4 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYmodule_name),FREEREF(0));
    T7 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T5 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_987),T6,T7);
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreport_undefined_global_bindings) {
  P mod_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = FUNFAB(fun_478,1,mod_);
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T0 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_480) {
  P uses_mod_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(uses_mod_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_name),uses_mod_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSastYmodule_name),FREEREF(1));
    T3 = CALL1(0,FREEREF(2),T4);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_481) {
  P mod_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = FUNFAB(fun_480,3,FREEREF(0),mod_,FREEREF(1));
  T3 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T2 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),T3);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_user_482) {
  P modname_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),FREEREF(0),modname_,YPfalse);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),modname_,FREEREF(0),modname_);
    T4 = FUNFAB(fun_481,2,modname_,FREEREF(1));
    T3 = CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T4,FREEREF(2));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_483) {
  P v_;
  P UF2889;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(v_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  UF2889 = T1;
  T3 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2889,v_);
  T2 = BOXVAL(FREEREF(0)) = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYcompute_transitive_users) {
  P loader_,modnames_;
  P packer_F2892;
  P add_userF2891;
  P usersF2890;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)100));
  usersF2890 = T1;
  T3 = FUNSHELL(0,fun_add_user_482,3);
  add_userF2891 = T3;
  FUNINIT(add_userF2891, 3,usersF2890,add_userF2891,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),add_userF2891,modnames_);
  T5 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F2892 = T5;
  packer_F2892 = BOXFAB(packer_F2892);
  T7 = FUNFAB(fun_483,1,packer_F2892);
  CALL2(1,VARREF(YgooSmacrosYdo),T7,usersF2890);
  T9 = BOXVAL(packer_F2892);
  T8 = CALL1(1,VARREF(YgooSpackerYpacker_res),T9);
  T4 = T8;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYremove_module_internalX) {
  P loader_,mod_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(mod_, 1);
loop:
  T0 = CALL1(1,VARREF(YevalSastYmodule_transaction),mod_);
  CALL1(1,VARREF(YevalSastYroll_back_transaction),T0);
  T2 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),loader_);
  T3 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  T1 = CALL2(1,VARREF(YgooScolsScolxYdelX),T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_486) {
  P modname_;
  P modF2893;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),T2,modname_);
  modF2893 = T1;
  T3 = CALL2(1,VARREF(YevalSastYremove_module_internalX),FREEREF(0),modF2893);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYremove_modules_by_nameX) {
  P loader_,modnames_;
  P remove_namesF2894;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSastYcompute_transitive_users),loader_,modnames_);
  remove_namesF2894 = T1;
  T2 = FUNFAB(fun_486,1,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),T2,remove_namesF2894);
  T0 = YPfalse;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYmodule_name_to_relpath) {
  P name_;
  P namestrF2895;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T2 = CALL1(1,VARREF(Ysym_name),name_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmathYto_lower),T2);
  namestrF2895 = T1;
  T4 = CALL2(1,VARREF(YgooScolsSseqYsplit),namestrF2895,YPchr((P)47));
  T3 = CALL2(1,VARREF(YgooScolsSseqYjoin),T4,VARREF(YgooSsystemYTpath_separatorT));
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_489) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(YevalSastYfind_binding),name_,FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSastYinsert_globalX),T1,FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYinstall_initial_bindings) {
  P env_,loader_;
  P bootenvF2897;
  P bootmodF2896;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(loader_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSastYprobe_module),loader_,VARREF(YevalSastYDgoo_boot_module_name));
  bootmodF2896 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_target_environment),bootmodF2896);
  bootenvF2897 = T3;
  T5 = FUNFAB(fun_489,2,bootenvF2897,env_);
  T4 = CALL2(1,VARREF(YgooSmacrosYdo),T5,LITREF(lit_1005));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfab_static_global_environment) {
  P module_,module_loader_,allow_foreign_namesQ_;
  P new_envF2898;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(module_loader_, 1);
  ARG(allow_foreign_namesQ_, 2);
loop:
  T2 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)2000));
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module),module_,VARREF(YevalSastYenvironment_module_loader),module_loader_,VARREF(YevalSastYenvironment_next),VARREF(YevalSastYDempty_static_environment),VARREF(YevalSastYenvironment_allows_foreign_namesQ),allow_foreign_namesQ_,VARREF(YevalSastYenvironment_bindings),T2);
  new_envF2898 = T1;
  T0 = new_envF2898;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_492) {
  P name_,binding_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(binding_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooScolsScolYmemQ),FREEREF(0),name_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YevalSastYinsert_globalX),binding_,FREEREF(1));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfab_subset_environment) {
  P module_,src_module_,excluded_;
  P new_envF2900;
  P loaderF2899;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(src_module_, 1);
  ARG(excluded_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),src_module_);
  T1 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),T2);
  loaderF2899 = T1;
  T4 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),module_,loaderF2899,YPfalse);
  new_envF2900 = T4;
  T5 = FUNFAB(fun_492,2,excluded_,new_envF2900);
  T6 = CALL1(1,VARREF(YevalSastYmodule_exports),src_module_);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T5,T6);
  T3 = new_envF2900;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_494) {
  P T0;
LINK_STACK();
loop:
  DYNSET(YevalSastYTnow_rt_envT,FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSastYload_in),FREEREF(1),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_495) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YevalSastYTnow_rt_envT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_496) {
  P x_1463F2901;
  P T0,T1,T2;
LINK_STACK();
loop:
  CALL2(1,VARREF(YevalSastYinstall_initial_bindings),FREEREF(0),FREEREF(1));
  x_1463F2901 = DYNREF(YevalSastYTnow_rt_envT);
  T1 = FUNFAB(fun_494,2,FREEREF(0),FREEREF(2));
  T2 = FUNFAB(fun_495,1,x_1463F2901);
  T0 = with_cleanup(T1,T2);
  CALL2(1,VARREF(YevalSastYenvironment_allows_foreign_namesQ_setter),YPtrue,FREEREF(0));
  BOXVAL(FREEREF(3)) = YPtrue;
UNLINK_STACK();
  QRET(FREEREF(4));
}

FUNCODEDEF(fun_497) {
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSastYmodule_transaction),FREEREF(1));
    T3 = CALL1(1,VARREF(YevalSastYroll_back_transaction),T4);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_module_498) {
  P loader_,name_;
  P fileF2907;
  P modpathF2906;
  P keepmodQF2905;
  P envF2904;
  P moduleF2903;
  P typeF2902;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loader_);
  typeF2902 = T1;
  T3 = CALL3(1,VARREF(Ynew),typeF2902,VARREF(YevalSastYmodule_name),name_);
  moduleF2903 = T3;
  T5 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),moduleF2903,loader_,YPfalse);
  envF2904 = T5;
  keepmodQF2905 = YPfalse;
  keepmodQF2905 = BOXFAB(keepmodQF2905);
  T9 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  modpathF2906 = T9;
  T11 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),modpathF2906,VARREF(YgooSsystemYTmodule_search_pathT));
  fileF2907 = T11;
  CALL3(1,VARREF(YevalSastYset_module_environments),moduleF2903,envF2904,envF2904);
  T12 = CALL1(1,VARREF(Ynot),fileF2907);
  if (T12 != YPfalse) {
    T13 = CALL2(1,VARREF(YevalSastYnamespace_error),LITREF(lit_1013),modpathF2906);
  } else {
  }
  T15 = FUNFAB(fun_496,5,envF2904,loader_,fileF2907,keepmodQF2905,moduleF2903);
  T16 = FUNFAB(fun_497,2,keepmodQF2905,moduleF2903);
  T14 = with_cleanup(T15,T16);
  T10 = T14;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYruntime_module_loader) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(VARREF(YevalSastYTruntime_module_loaderT));
}

FUNCODEDEF(YevalSastYruntime_module) {
  P modname_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  T0 = CALL2(1,VARREF(YevalSastYprobe_module),T1,modname_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYruntime_environment) {
  P modname_;
  P moduleF2908;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYruntime_module),modname_);
  moduleF2908 = T1;
  CALL1(1,VARREF(YevalSastYensure_module_data),moduleF2908);
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),moduleF2908);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYruntime_core_environment) {
  P modname_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYruntime_module),modname_);
  T0 = CALL1(1,VARREF(YevalSastYmodule_target_environment),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYunchecked_runtime_environment) {
  P modname_;
  P loaderF2909;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  loaderF2909 = T1;
  T5 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),loaderF2909);
  T4 = CALL3(1,VARREF(YgooScolsScolYelt_or),T5,YPint((P)0),YPfalse);
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,modname_);
  if (T3 != YPfalse) {
    T2 = DYNREF(YevalSastYTnow_rt_envT);
  } else {
    T7 = CALL1(1,VARREF(YevalSastYruntime_module),modname_);
    T6 = CALL1(1,VARREF(YevalSastYmodule_target_environment),T7);
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_create_module) {
  P modname_,data_;
  P envF2913;
  P modF2912;
  P typeF2911;
  P loaderF2910;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(modname_, 0);
  ARG(data_, 1);
loop:
  T1 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  loaderF2910 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loaderF2910);
  typeF2911 = T3;
  T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modname_);
  T5 = CALL3(1,VARREF(Ynew),typeF2911,VARREF(YevalSastYmodule_name),T6);
  modF2912 = T5;
  T8 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),modF2912,loaderF2910,YPtrue);
  envF2913 = T8;
  CALL2(1,VARREF(YevalSastYmodule_data_processedQ_setter),YPfalse,modF2912);
  CALL3(1,VARREF(YevalSastYset_module_environments),modF2912,envF2913,envF2913);
  CALL2(1,VARREF(YevalSastYmodule_runtime_data_setter),data_,modF2912);
  CALL2(1,VARREF(YevalSastYregister_moduleX),loaderF2910,modF2912);
  T7 = modF2912;
  T4 = T7;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_use_module) {
  P mod_,uses_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(uses_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T1 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),T2);
  T0 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T1,uses_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_import) {
  P mod_,name_,from_mod_,original_name_;
  P bindingF2915;
  P home_envF2914;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(from_mod_, 2);
  ARG(original_name_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_target_environment),from_mod_);
  home_envF2914 = T1;
  T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),original_name_);
  T3 = CALL2(1,VARREF(YevalSastYfind_binding),T4,home_envF2914);
  bindingF2915 = T3;
  T5 = CALL1(1,VARREF(Ynot),bindingF2915);
  if (T5 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYmodule_name),from_mod_);
    T8 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T6 = CALL4(1,VARREF(YevalSastYnamespace_error),LITREF(lit_1029),original_name_,T7,T8);
  } else {
  }
  T10 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T9 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2915,T10);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYprocess_module_data) {
  P module_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(module_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_runtime_data),module_);
  T0 = (P)YPprocess_module(T1,VARREF(YevalSastYreloader_do_import),VARREF(YevalSastYreloader_do_export));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYensure_module_data) {
  P module_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(module_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_data_processedQ),module_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSastYmodule_data_processedQ_setter),YPtrue,module_);
    T3 = CALL1(1,VARREF(YevalSastYprocess_module_data),module_);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_runtime_binding) {
  P mod_,name_,loc_;
  P bindingF2916;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(loc_, 2);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_571),VARREF(YevalSastYbinding_module),mod_,VARREF(YevalSastYbinding_name),T2,VARREF(YevalSastYbinding_freeQ),YPfalse,VARREF(YevalSastYbinding_locative),loc_);
  bindingF2916 = T1;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T3 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2916,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_dynamic_binding) {
  P mod_,name_,loc_;
  P bindingF2917;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(loc_, 2);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_583),VARREF(YevalSastYbinding_module),mod_,VARREF(YevalSastYbinding_name),T2,VARREF(YevalSastYbinding_freeQ),YPfalse,VARREF(YevalSastYbinding_locative),loc_);
  bindingF2917 = T1;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T3 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2917,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_other_binding) {
  P mod_,name_;
  P bindingF2918;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_601),VARREF(YevalSastYbinding_module),mod_,VARREF(YevalSastYbinding_name),T2,VARREF(YevalSastYbinding_freeQ),YPtrue);
  bindingF2918 = T1;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T3 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2918,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_export) {
  P mod_,name_,as_name_;
  P bindingF2919;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(as_name_, 2);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T3 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T1 = CALL2(1,VARREF(YevalSastYfind_binding),T2,T3);
  bindingF2919 = T1;
  if (bindingF2919 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),as_name_);
    T5 = CALL3(1,VARREF(YevalSastYexport_bindingX),mod_,T6,bindingF2919);
    T4 = T5;
  } else {
    T8 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T7 = CALL3(1,VARREF(YevalSastYnamespace_error),LITREF(lit_1042),name_,T8);
    T4 = T7;
  }
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreload_modules) {
  P T0;
LINK_STACK();
loop:
  T0 = (P)YPbuild_runtime_modules(VARREF(YevalSastYreloader_do_create_module),VARREF(YevalSastYreloader_do_use_module),VARREF(YevalSastYreloader_do_runtime_binding),VARREF(YevalSastYreloader_do_other_binding),VARREF(YevalSastYreloader_do_dynamic_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_514) {
  P binding_;
  P cloneF2920;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),FREEREF(0),T2,YPfalse,LITREF(lit_572));
  cloneF2920 = T1;
  T4 = CALL1(1,VARREF(YevalSastYbinding_handler),binding_);
  T3 = CALL2(1,VARREF(YevalSastYbinding_handler_setter),T4,cloneF2920);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYinstall_magic_bindings) {
  P env_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T1 = FUNFAB(fun_514,1,env_);
  T2 = CALL0(1,VARREF(YevalSastYmagic_bindings));
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreload_macros) {
  P T0,T1;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSruntimeYrcurry),VARREF(YPPmacro),YPfalse);
  CALL4(1,VARREF(YgooScolsSseqYdo3),T0,VARREF(YTboot_macro_module_namesT),VARREF(YTboot_macro_namesT),VARREF(YTboot_macro_expandersT));
  T1 = VARSET(YTmacros_okQT,YPtrue);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YevalSastYinstall_interpreter_hacks) {
  P env_;
  P T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T0 = CALL1(1,VARREF(YevalSastYinit_environment_for_eval),env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYinit_runtime) {
  P bootenvF2922;
  P bootmodF2921;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  CALL0(1,VARREF(YevalSastYreload_modules));
  T2 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  T1 = CALL2(1,VARREF(YevalSastYprobe_module),T2,VARREF(YevalSastYDgoo_boot_module_name));
  bootmodF2921 = T1;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),bootmodF2921);
  bootenvF2922 = T4;
  CALL1(1,VARREF(YevalSastYinstall_magic_bindings),bootenvF2922);
  CALL0(1,VARREF(YevalSastYreload_macros));
  CALL1(1,VARREF(YevalSastYinstall_interpreter_hacks),bootenvF2922);
  T3 = YPfalse;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfab_syntax_environment) {
  P module_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(module_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYruntime_module),LITREF(lit_1054));
  T0 = CALL3(1,VARREF(YevalSastYfab_subset_environment),module_,T1,VARREF(YevalSastYsyntax_environment_excluded_bindings));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYfab_g2c_module) {
  P loader_,name_;
  P target_envF2926;
  P syntax_envF2925;
  P moduleF2924;
  P typeF2923;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loader_);
  typeF2923 = T1;
  T3 = CALL3(1,VARREF(Ynew),typeF2923,VARREF(YevalSastYmodule_name),name_);
  moduleF2924 = T3;
  T5 = CALL1(1,VARREF(YevalSastYfab_syntax_environment),moduleF2924);
  syntax_envF2925 = T5;
  T7 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),moduleF2924,loader_,YPfalse);
  target_envF2926 = T7;
  CALL3(1,VARREF(YevalSastYset_module_environments),moduleF2924,syntax_envF2925,target_envF2926);
  T8 = CALL2(1,VARREF(YgooSmacrosYEE),name_,VARREF(YevalSastYDgoo_boot_module_name));
  if (T8 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYinit_g2c_boot_environment),target_envF2926);
  } else {
    T10 = CALL2(1,VARREF(YevalSastYinit_g2c_regular_environment),target_envF2926,loader_);
  }
  T6 = moduleF2924;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYinit_g2c_boot_environment) {
  P env_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T1 = CALL0(1,VARREF(YevalSastYmagic_bindings));
  T0 = CALL2(1,VARREF(YevalSastYinsert_globalsX),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYinit_g2c_regular_environment) {
  P env_,loader_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(loader_, 1);
loop:
  T0 = CALL2(1,VARREF(YevalSastYinstall_initial_bindings),env_,loader_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYinit_ast) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL0(1,VARREF(YevalSastYinit_runtime));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_524) {
  P env_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),env_,VARREF(YevalSastYLstatic_empty_environmentG));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYframe_bindings),env_);
    CALL2(1,VARREF(YgooSmacrosYdo),FREEREF(0),T3);
    T5 = CALL1(1,VARREF(YevalSastYenvironment_next),env_);
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

FUNCODEDEF(YevalSastYdo_static_global_bindings) {
  P f_,env_;
  P loopF2927;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_524,2);
  loopF2927 = T1;
  FUNINIT(loopF2927, 2,f_,loopF2927);
  T2 = CALL1(0,loopF2927,env_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_526) {
  P env_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),env_,VARREF(YevalSastYLstatic_empty_environmentG));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYframe_bindings),env_);
    CALL2(1,VARREF(YgooScolsScolYdo_keyed),FREEREF(0),T3);
    T5 = CALL1(1,VARREF(YevalSastYenvironment_next),env_);
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

FUNCODEDEF(YevalSastYdo_named_static_global_bindings) {
  P f_,env_;
  P loopF2928;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_526,2);
  loopF2928 = T1;
  FUNINIT(loopF2928, 2,f_,loopF2928);
  T2 = CALL1(0,loopF2928,env_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YevalSastY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"goo/boot");
  VARSET(YevalSastYDgoo_boot_module_name,LITREF(lit_0));
  DYNDEFSET(YevalSastYTcurrent_dependentT,YPfalse);
  lit_1 = YPPlist(1,YPPsym((P)"exp"));
  lit_2 = YPPlist(1,YPPsym((P)"return"));
  lit_3 = YPPsym((P)"x-1433");
  lit_4 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_5 = YPPsym((P)"with-dependent");
  lit_6 = YPsb((P)"Match Pattern Failure");
  lit_7 = YPPsym((P)"let");
  lit_8 = YPPsym((P)"*current-dependent*");
  lit_9 = Ynil;
  lit_10 = YPPsym((P)"set");
  lit_11 = YPPsym((P)"fin");
  lit_12 = YPPsym((P)"seq");
  T2 = YPsig(LITREF(lit_4),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1433_0 = YPmet(FUNCODEREF(fun_x_1433_0),LITREF(lit_3),T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T3 = fun_2;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"with-dependent"),T3);
  lit_13 = YPPsym((P)"<ast-error>");
  T5 = (P)YPpair(VARREF(YgooSconditionsYLcompiler_errorG),Ynil);
  T4 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_13),T5);
  VARSET(YevalSastYLast_errorG,T4);
  lit_14 = YPPsym((P)"<simple-ast-error>");
  T8 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T7 = (P)YPpair(VARREF(YevalSastYLast_errorG),T8);
  T6 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_14),T7);
  VARSET(YevalSastYLsimple_ast_errorG,T6);
  lit_15 = YPPsym((P)"ast-error");
  lit_16 = YPPlist(2,YPPsym((P)"message"),YPPsym((P)"arguments"));
  T9 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_error_3 = YPmet(FUNCODEREF(fun_ast_error_3),LITREF(lit_15),T9,ENVNUL,PNUL,sloc(35));
  T12 = BOUNDP(YevalSdependencyYast_error);
  if (T12 != YPfalse) {
    T11 = VARREF(YevalSdependencyYast_error);
  } else {
    T11 = YPfalse;
  }
  T13 = fun_ast_error_3;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T13);
  VARSET(YevalSdependencyYast_error,T10);
  lit_17 = YPPsym((P)"<namespace-error>");
  T15 = (P)YPpair(VARREF(YevalSastYLsimple_ast_errorG),Ynil);
  T14 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_17),T15);
  VARSET(YevalSastYLnamespace_errorG,T14);
  lit_18 = YPPsym((P)"namespace-error");
  lit_19 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T16 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_namespace_error_4 = YPmet(FUNCODEREF(fun_namespace_error_4),LITREF(lit_18),T16,ENVNUL,PNUL,sloc(41));
  T19 = BOUNDP(YevalSastYnamespace_error);
  if (T19 != YPfalse) {
    T18 = VARREF(YevalSastYnamespace_error);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_namespace_error_4;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YevalSastYnamespace_error,T17);
  lit_20 = YPPsym((P)"bot");
  T21 = XCALL1(1,VARREF(Ylst),LITREF(lit_20));
  VARSET(YevalSastYast_LbotG,T21);
  lit_21 = YPPsym((P)"<program>");
  T23 = (P)YPpair(VARREF(YLanyG),Ynil);
  T22 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_21),T23);
  VARSET(YevalSastYLprogramG,T22);
  lit_22 = YPPsym((P)"program-type");
  lit_23 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_type_5 = YPmet(FUNCODEREF(fun_program_type_5),LITREF(lit_22),T24,ENVNUL,PNUL,sloc(50));
  T27 = BOUNDP(YevalSastYprogram_type);
  if (T27 != YPfalse) {
    T26 = VARREF(YevalSastYprogram_type);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_program_type_5;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YevalSastYprogram_type,T25);
  lit_24 = YPPsym((P)"program-type-setter");
  lit_25 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T29 = YPsig(LITREF(lit_25),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_type_setter_6 = YPmet(FUNCODEREF(fun_program_type_setter_6),LITREF(lit_24),T29,ENVNUL,PNUL,sloc(50));
  T32 = BOUNDP(YevalSastYprogram_type_setter);
  if (T32 != YPfalse) {
    T31 = VARREF(YevalSastYprogram_type_setter);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_program_type_setter_6;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YevalSastYprogram_type_setter,T30);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLprogramG),VARREF(YevalSastYprogram_type),VARREF(YevalSastYprogram_type_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_26 = YPPsym((P)"program-line");
  lit_27 = YPPlist(1,YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_line_7 = YPmet(FUNCODEREF(fun_program_line_7),LITREF(lit_26),T34,ENVNUL,PNUL,sloc(51));
  T37 = BOUNDP(YevalSastYprogram_line);
  if (T37 != YPfalse) {
    T36 = VARREF(YevalSastYprogram_line);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_program_line_7;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YevalSastYprogram_line,T35);
  lit_28 = YPPsym((P)"program-line-setter");
  lit_29 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T40 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T39 = YPsig(LITREF(lit_29),YPPlist(2,T40,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_line_setter_8 = YPmet(FUNCODEREF(fun_program_line_setter_8),LITREF(lit_28),T39,ENVNUL,PNUL,sloc(51));
  T43 = BOUNDP(YevalSastYprogram_line_setter);
  if (T43 != YPfalse) {
    T42 = VARREF(YevalSastYprogram_line_setter);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_program_line_setter_8;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YevalSastYprogram_line_setter,T41);
  lit_30 = YPPlist(1,YPPsym((P)"_x"));
  T45 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T45,ENVNUL,PNUL,sloc(51));
  T46 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T47 = fun_9;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLprogramG),VARREF(YevalSastYprogram_line),VARREF(YevalSastYprogram_line_setter),T46,T47);
  lit_31 = YPPsym((P)"program-register");
  lit_32 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_register_10 = YPmet(FUNCODEREF(fun_program_register_10),LITREF(lit_31),T48,ENVNUL,PNUL,sloc(52));
  T51 = BOUNDP(YevalSastYprogram_register);
  if (T51 != YPfalse) {
    T50 = VARREF(YevalSastYprogram_register);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_program_register_10;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YevalSastYprogram_register,T49);
  lit_33 = YPPsym((P)"program-register-setter");
  lit_34 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T53 = YPsig(LITREF(lit_34),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_register_setter_11 = YPmet(FUNCODEREF(fun_program_register_setter_11),LITREF(lit_33),T53,ENVNUL,PNUL,sloc(52));
  T56 = BOUNDP(YevalSastYprogram_register_setter);
  if (T56 != YPfalse) {
    T55 = VARREF(YevalSastYprogram_register_setter);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_program_register_setter_11;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YevalSastYprogram_register_setter,T54);
  lit_35 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPsig(LITREF(lit_35),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T58,ENVNUL,PNUL,sloc(52));
  T59 = fun_12;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLprogramG),VARREF(YevalSastYprogram_register),VARREF(YevalSastYprogram_register_setter),VARREF(YLanyG),T59);
  lit_36 = YPPsym((P)"<computed-program>");
  T61 = (P)YPpair(VARREF(YevalSastYLprogramG),Ynil);
  T60 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_36),T61);
  VARSET(YevalSastYLcomputed_programG,T60);
  lit_37 = YPPsym((P)"<passive-program>");
  T63 = (P)YPpair(VARREF(YevalSastYLprogramG),Ynil);
  T62 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_37),T63);
  VARSET(YevalSastYLpassive_programG,T62);
  VARSET(YevalSastYLbinding_nameG,VARREF(YLanyG));
  lit_38 = YPPsym((P)"<binding>");
  T65 = (P)YPpair(VARREF(YLanyG),Ynil);
  T64 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_38),T65);
  VARSET(YevalSastYLbindingG,T64);
  lit_39 = YPPsym((P)"binding-name");
  lit_40 = YPPlist(1,YPPsym((P)"_x"));
  T66 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_name_13 = YPmet(FUNCODEREF(fun_binding_name_13),LITREF(lit_39),T66,ENVNUL,PNUL,sloc(64));
  T69 = BOUNDP(YevalSastYbinding_name);
  if (T69 != YPfalse) {
    T68 = VARREF(YevalSastYbinding_name);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_binding_name_13;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YevalSastYbinding_name,T67);
  lit_41 = YPPsym((P)"binding-name-setter");
  lit_42 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T71 = YPsig(LITREF(lit_42),YPPlist(2,VARREF(YevalSastYLbinding_nameG),VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_name_setter_14 = YPmet(FUNCODEREF(fun_binding_name_setter_14),LITREF(lit_41),T71,ENVNUL,PNUL,sloc(64));
  T74 = BOUNDP(YevalSastYbinding_name_setter);
  if (T74 != YPfalse) {
    T73 = VARREF(YevalSastYbinding_name_setter);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_binding_name_setter_14;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YevalSastYbinding_name_setter,T72);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_name),VARREF(YevalSastYbinding_name_setter),VARREF(YevalSastYLbinding_nameG),VARREF(YPprop_unbound_error));
  lit_43 = YPPsym((P)"binding-mangled-name");
  lit_44 = YPPlist(1,YPPsym((P)"_x"));
  T76 = YPsig(LITREF(lit_44),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_mangled_name_15 = YPmet(FUNCODEREF(fun_binding_mangled_name_15),LITREF(lit_43),T76,ENVNUL,PNUL,sloc(65));
  T79 = BOUNDP(YevalSastYbinding_mangled_name);
  if (T79 != YPfalse) {
    T78 = VARREF(YevalSastYbinding_mangled_name);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_binding_mangled_name_15;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YevalSastYbinding_mangled_name,T77);
  lit_45 = YPPsym((P)"binding-mangled-name-setter");
  lit_46 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T82 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T81 = YPsig(LITREF(lit_46),YPPlist(2,T82,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_mangled_name_setter_16 = YPmet(FUNCODEREF(fun_binding_mangled_name_setter_16),LITREF(lit_45),T81,ENVNUL,PNUL,sloc(65));
  T85 = BOUNDP(YevalSastYbinding_mangled_name_setter);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalSastYbinding_mangled_name_setter);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_binding_mangled_name_setter_16;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalSastYbinding_mangled_name_setter,T83);
  lit_47 = YPPlist(1,YPPsym((P)"_x"));
  T87 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T87,ENVNUL,PNUL,sloc(65));
  T88 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T89 = fun_17;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_mangled_name),VARREF(YevalSastYbinding_mangled_name_setter),T88,T89);
  lit_48 = YPPsym((P)"binding-type");
  lit_49 = YPPlist(1,YPPsym((P)"_x"));
  T90 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_type_18 = YPmet(FUNCODEREF(fun_binding_type_18),LITREF(lit_48),T90,ENVNUL,PNUL,sloc(66));
  T93 = BOUNDP(YevalSastYbinding_type);
  if (T93 != YPfalse) {
    T92 = VARREF(YevalSastYbinding_type);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_binding_type_18;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YevalSastYbinding_type,T91);
  lit_50 = YPPsym((P)"binding-type-setter");
  lit_51 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T95 = YPsig(LITREF(lit_51),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_type_setter_19 = YPmet(FUNCODEREF(fun_binding_type_setter_19),LITREF(lit_50),T95,ENVNUL,PNUL,sloc(66));
  T98 = BOUNDP(YevalSastYbinding_type_setter);
  if (T98 != YPfalse) {
    T97 = VARREF(YevalSastYbinding_type_setter);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_binding_type_setter_19;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YevalSastYbinding_type_setter,T96);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_type),VARREF(YevalSastYbinding_type_setter),VARREF(YevalSastYLprogramG),VARREF(YPprop_unbound_error));
  lit_52 = YPPsym((P)"binding-inferred-type");
  lit_53 = YPPlist(1,YPPsym((P)"_x"));
  T100 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_inferred_type_20 = YPmet(FUNCODEREF(fun_binding_inferred_type_20),LITREF(lit_52),T100,ENVNUL,PNUL,sloc(67));
  T103 = BOUNDP(YevalSastYbinding_inferred_type);
  if (T103 != YPfalse) {
    T102 = VARREF(YevalSastYbinding_inferred_type);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_binding_inferred_type_20;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YevalSastYbinding_inferred_type,T101);
  lit_54 = YPPsym((P)"binding-inferred-type-setter");
  lit_55 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T105 = YPsig(LITREF(lit_55),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_inferred_type_setter_21 = YPmet(FUNCODEREF(fun_binding_inferred_type_setter_21),LITREF(lit_54),T105,ENVNUL,PNUL,sloc(67));
  T108 = BOUNDP(YevalSastYbinding_inferred_type_setter);
  if (T108 != YPfalse) {
    T107 = VARREF(YevalSastYbinding_inferred_type_setter);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_binding_inferred_type_setter_21;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YevalSastYbinding_inferred_type_setter,T106);
  lit_56 = YPPlist(1,YPPsym((P)"_x"));
  T110 = YPsig(LITREF(lit_56),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T110,ENVNUL,PNUL,sloc(67));
  T111 = fun_22;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_inferred_type),VARREF(YevalSastYbinding_inferred_type_setter),VARREF(YLanyG),T111);
  lit_57 = YPPsym((P)"<global-box>");
  T113 = (P)YPpair(VARREF(YLanyG),Ynil);
  T112 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_57),T113);
  VARSET(YevalSastYLglobal_boxG,T112);
  lit_58 = YPPsym((P)"global-box-value");
  lit_59 = YPPlist(1,YPPsym((P)"_x"));
  T114 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YevalSastYLglobal_boxG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_global_box_value_23 = YPmet(FUNCODEREF(fun_global_box_value_23),LITREF(lit_58),T114,ENVNUL,PNUL,sloc(72));
  T117 = BOUNDP(YevalSastYglobal_box_value);
  if (T117 != YPfalse) {
    T116 = VARREF(YevalSastYglobal_box_value);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_global_box_value_23;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YevalSastYglobal_box_value,T115);
  lit_60 = YPPsym((P)"global-box-value-setter");
  lit_61 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T119 = YPsig(LITREF(lit_61),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLglobal_boxG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_global_box_value_setter_24 = YPmet(FUNCODEREF(fun_global_box_value_setter_24),LITREF(lit_60),T119,ENVNUL,PNUL,sloc(72));
  T122 = BOUNDP(YevalSastYglobal_box_value_setter);
  if (T122 != YPfalse) {
    T121 = VARREF(YevalSastYglobal_box_value_setter);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_global_box_value_setter_24;
  T120 = XCALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YevalSastYglobal_box_value_setter,T120);
  lit_62 = YPPlist(1,YPPsym((P)"_x"));
  T124 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T124,ENVNUL,PNUL,sloc(72));
  T125 = fun_25;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLglobal_boxG),VARREF(YevalSastYglobal_box_value),VARREF(YevalSastYglobal_box_value_setter),VARREF(YLanyG),T125);
  lit_63 = YPPsym((P)"<module-binding>");
  T128 = (P)YPpair(VARREF(YevalSdependencyYLdependableG),Ynil);
  T127 = (P)YPpair(VARREF(YevalSastYLbindingG),T128);
  T126 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_63),T127);
  VARSET(YevalSastYLmodule_bindingG,T126);
  lit_64 = YPPsym((P)"binding-kind");
  lit_65 = YPPlist(1,YPPsym((P)"_x"));
  T129 = YPsig(LITREF(lit_65),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_kind_26 = YPmet(FUNCODEREF(fun_binding_kind_26),LITREF(lit_64),T129,ENVNUL,PNUL,sloc(76));
  T132 = BOUNDP(YevalSastYbinding_kind);
  if (T132 != YPfalse) {
    T131 = VARREF(YevalSastYbinding_kind);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_binding_kind_26;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YevalSastYbinding_kind,T130);
  lit_66 = YPPsym((P)"binding-kind-setter");
  lit_67 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T134 = YPsig(LITREF(lit_67),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_kind_setter_27 = YPmet(FUNCODEREF(fun_binding_kind_setter_27),LITREF(lit_66),T134,ENVNUL,PNUL,sloc(76));
  T137 = BOUNDP(YevalSastYbinding_kind_setter);
  if (T137 != YPfalse) {
    T136 = VARREF(YevalSastYbinding_kind_setter);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_binding_kind_setter_27;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YevalSastYbinding_kind_setter,T135);
  lit_68 = YPPlist(1,YPPsym((P)"_x"));
  lit_69 = YPPsym((P)"global");
  T139 = YPsig(LITREF(lit_68),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T139,ENVNUL,PNUL,sloc(76));
  T140 = fun_28;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),VARREF(YevalSastYbinding_kind_setter),VARREF(YLanyG),T140);
  lit_70 = YPPsym((P)"binding-module");
  lit_71 = YPPlist(1,YPPsym((P)"_x"));
  T141 = YPsig(LITREF(lit_71),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_module_29 = YPmet(FUNCODEREF(fun_binding_module_29),LITREF(lit_70),T141,ENVNUL,PNUL,sloc(77));
  T144 = BOUNDP(YevalSastYbinding_module);
  if (T144 != YPfalse) {
    T143 = VARREF(YevalSastYbinding_module);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_binding_module_29;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YevalSastYbinding_module,T142);
  lit_72 = YPPsym((P)"binding-module-setter");
  lit_73 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T146 = YPsig(LITREF(lit_73),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_module_setter_30 = YPmet(FUNCODEREF(fun_binding_module_setter_30),LITREF(lit_72),T146,ENVNUL,PNUL,sloc(77));
  T149 = BOUNDP(YevalSastYbinding_module_setter);
  if (T149 != YPfalse) {
    T148 = VARREF(YevalSastYbinding_module_setter);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_binding_module_setter_30;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YevalSastYbinding_module_setter,T147);
  lit_74 = YPPlist(1,YPPsym((P)"_x"));
  T151 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T151,ENVNUL,PNUL,sloc(77));
  T152 = fun_31;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_module),VARREF(YevalSastYbinding_module_setter),VARREF(YLanyG),T152);
  lit_75 = YPPsym((P)"binding-free?");
  lit_76 = YPPlist(1,YPPsym((P)"_x"));
  T153 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_freeQ_32 = YPmet(FUNCODEREF(fun_binding_freeQ_32),LITREF(lit_75),T153,ENVNUL,PNUL,sloc(78));
  T156 = BOUNDP(YevalSastYbinding_freeQ);
  if (T156 != YPfalse) {
    T155 = VARREF(YevalSastYbinding_freeQ);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_binding_freeQ_32;
  T154 = XCALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YevalSastYbinding_freeQ,T154);
  lit_77 = YPPsym((P)"binding-free?-setter");
  lit_78 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T158 = YPsig(LITREF(lit_78),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_freeQ_setter_33 = YPmet(FUNCODEREF(fun_binding_freeQ_setter_33),LITREF(lit_77),T158,ENVNUL,PNUL,sloc(78));
  T161 = BOUNDP(YevalSastYbinding_freeQ_setter);
  if (T161 != YPfalse) {
    T160 = VARREF(YevalSastYbinding_freeQ_setter);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_binding_freeQ_setter_33;
  T159 = XCALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(YevalSastYbinding_freeQ_setter,T159);
  lit_79 = YPPlist(1,YPPsym((P)"_x"));
  T163 = YPsig(LITREF(lit_79),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T163,ENVNUL,PNUL,sloc(78));
  T164 = fun_34;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_freeQ),VARREF(YevalSastYbinding_freeQ_setter),VARREF(YLlogG),T164);
  lit_80 = YPPsym((P)"binding-info");
  lit_81 = YPPlist(1,YPPsym((P)"_x"));
  T165 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_info_35 = YPmet(FUNCODEREF(fun_binding_info_35),LITREF(lit_80),T165,ENVNUL,PNUL,sloc(79));
  T168 = BOUNDP(YevalSastYbinding_info);
  if (T168 != YPfalse) {
    T167 = VARREF(YevalSastYbinding_info);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_binding_info_35;
  T166 = XCALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(YevalSastYbinding_info,T166);
  lit_82 = YPPsym((P)"binding-info-setter");
  lit_83 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T170 = YPsig(LITREF(lit_83),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_info_setter_36 = YPmet(FUNCODEREF(fun_binding_info_setter_36),LITREF(lit_82),T170,ENVNUL,PNUL,sloc(79));
  T173 = BOUNDP(YevalSastYbinding_info_setter);
  if (T173 != YPfalse) {
    T172 = VARREF(YevalSastYbinding_info_setter);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_binding_info_setter_36;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YevalSastYbinding_info_setter,T171);
  lit_84 = YPPlist(1,YPPsym((P)"_x"));
  T175 = YPsig(LITREF(lit_84),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T175,ENVNUL,PNUL,sloc(79));
  T176 = fun_37;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_info),VARREF(YevalSastYbinding_info_setter),VARREF(YLanyG),T176);
  lit_85 = YPPsym((P)"binding-prop");
  lit_86 = YPPlist(1,YPPsym((P)"_x"));
  T177 = YPsig(LITREF(lit_86),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_prop_38 = YPmet(FUNCODEREF(fun_binding_prop_38),LITREF(lit_85),T177,ENVNUL,PNUL,sloc(80));
  T180 = BOUNDP(YevalSastYbinding_prop);
  if (T180 != YPfalse) {
    T179 = VARREF(YevalSastYbinding_prop);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_binding_prop_38;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YevalSastYbinding_prop,T178);
  lit_87 = YPPsym((P)"binding-prop-setter");
  lit_88 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T182 = YPsig(LITREF(lit_88),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_prop_setter_39 = YPmet(FUNCODEREF(fun_binding_prop_setter_39),LITREF(lit_87),T182,ENVNUL,PNUL,sloc(80));
  T185 = BOUNDP(YevalSastYbinding_prop_setter);
  if (T185 != YPfalse) {
    T184 = VARREF(YevalSastYbinding_prop_setter);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_binding_prop_setter_39;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YevalSastYbinding_prop_setter,T183);
  lit_89 = YPPlist(1,YPPsym((P)"_x"));
  T187 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T187,ENVNUL,PNUL,sloc(80));
  T188 = fun_40;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_prop),VARREF(YevalSastYbinding_prop_setter),VARREF(YLanyG),T188);
  lit_90 = YPPsym((P)"binding-module-name");
  lit_91 = YPPlist(1,YPPsym((P)"b"));
  T189 = YPsig(LITREF(lit_91),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_binding_module_name_41 = YPmet(FUNCODEREF(fun_binding_module_name_41),LITREF(lit_90),T189,ENVNUL,PNUL,sloc(82));
  T192 = BOUNDP(YevalSastYbinding_module_name);
  if (T192 != YPfalse) {
    T191 = VARREF(YevalSastYbinding_module_name);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_binding_module_name_41;
  T190 = XCALL2(1,VARREF(YPdefine_method),T191,T193);
  VARSET(YevalSastYbinding_module_name,T190);
  T195 = VARSET(YevalSastYbinding_global_box,VARREF(YevalSastYbinding_info));
  T194 = T195;
  return T194;
}

P YevalSastY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187;
DEFCREGS();
loop:
  VARSET(YevalSastYbinding_global_box_setter,VARREF(YevalSastYbinding_info_setter));
  VARSET(YevalSastYbinding_locative,VARREF(YevalSastYbinding_info));
  VARSET(YevalSastYbinding_locative_setter,VARREF(YevalSastYbinding_info_setter));
  VARSET(YevalSastYbinding_handler,VARREF(YevalSastYbinding_info));
  VARSET(YevalSastYbinding_handler_setter,VARREF(YevalSastYbinding_info_setter));
  lit_92 = YPPsym((P)"maybe-log-dependency");
  lit_93 = YPPlist(2,YPPsym((P)"dependable"),YPPsym((P)"dtype"));
  T0 = YPsig(LITREF(lit_93),YPPlist(2,VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYmaybe_log_dependency = YPmet(FUNCODEREF(YevalSastYmaybe_log_dependency),LITREF(lit_92),T0,ENVNUL,PNUL,sloc(95));
  T1 = YevalSastYmaybe_log_dependency;
  VARSET(YevalSastYmaybe_log_dependency,T1);
  lit_94 = YPPsym((P)"macro-expander");
  lit_95 = YPPlist(1,YPPsym((P)"macro-binding"));
  T2 = YPsig(LITREF(lit_95),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  YevalSastYmacro_expander = YPmet(FUNCODEREF(YevalSastYmacro_expander),LITREF(lit_94),T2,ENVNUL,PNUL,sloc(100));
  T3 = YevalSastYmacro_expander;
  VARSET(YevalSastYmacro_expander,T3);
  lit_96 = YPPsym((P)"<local-binding>");
  T5 = (P)YPpair(VARREF(YevalSastYLbindingG),Ynil);
  T4 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_96),T5);
  VARSET(YevalSastYLlocal_bindingG,T4);
  lit_97 = YPPsym((P)"binding-value");
  lit_98 = YPPlist(1,YPPsym((P)"_x"));
  T6 = YPsig(LITREF(lit_98),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_value_44 = YPmet(FUNCODEREF(fun_binding_value_44),LITREF(lit_97),T6,ENVNUL,PNUL,sloc(105));
  T9 = BOUNDP(YevalSastYbinding_value);
  if (T9 != YPfalse) {
    T8 = VARREF(YevalSastYbinding_value);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_binding_value_44;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(YevalSastYbinding_value,T7);
  lit_99 = YPPsym((P)"binding-value-setter");
  lit_100 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T11 = YPsig(LITREF(lit_100),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_value_setter_45 = YPmet(FUNCODEREF(fun_binding_value_setter_45),LITREF(lit_99),T11,ENVNUL,PNUL,sloc(105));
  T14 = BOUNDP(YevalSastYbinding_value_setter);
  if (T14 != YPfalse) {
    T13 = VARREF(YevalSastYbinding_value_setter);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_binding_value_setter_45;
  T12 = XCALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YevalSastYbinding_value_setter,T12);
  lit_101 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T16,ENVNUL,PNUL,sloc(105));
  T17 = fun_46;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_value),VARREF(YevalSastYbinding_value_setter),VARREF(YLanyG),T17);
  lit_102 = YPPsym((P)"binding-mutable?");
  lit_103 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPsig(LITREF(lit_103),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_mutableQ_47 = YPmet(FUNCODEREF(fun_binding_mutableQ_47),LITREF(lit_102),T18,ENVNUL,PNUL,sloc(106));
  T21 = BOUNDP(YevalSastYbinding_mutableQ);
  if (T21 != YPfalse) {
    T20 = VARREF(YevalSastYbinding_mutableQ);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_binding_mutableQ_47;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YevalSastYbinding_mutableQ,T19);
  lit_104 = YPPsym((P)"binding-mutable?-setter");
  lit_105 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T23 = YPsig(LITREF(lit_105),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_mutableQ_setter_48 = YPmet(FUNCODEREF(fun_binding_mutableQ_setter_48),LITREF(lit_104),T23,ENVNUL,PNUL,sloc(106));
  T26 = BOUNDP(YevalSastYbinding_mutableQ_setter);
  if (T26 != YPfalse) {
    T25 = VARREF(YevalSastYbinding_mutableQ_setter);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_binding_mutableQ_setter_48;
  T24 = XCALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(YevalSastYbinding_mutableQ_setter,T24);
  lit_106 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPsig(LITREF(lit_106),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T28,ENVNUL,PNUL,sloc(106));
  T29 = fun_49;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_mutableQ),VARREF(YevalSastYbinding_mutableQ_setter),VARREF(YLanyG),T29);
  lit_107 = YPPsym((P)"binding-dynamic-extent?");
  lit_108 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPsig(LITREF(lit_108),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_dynamic_extentQ_50 = YPmet(FUNCODEREF(fun_binding_dynamic_extentQ_50),LITREF(lit_107),T30,ENVNUL,PNUL,sloc(107));
  T33 = BOUNDP(YevalSastYbinding_dynamic_extentQ);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSastYbinding_dynamic_extentQ);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_binding_dynamic_extentQ_50;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSastYbinding_dynamic_extentQ,T31);
  lit_109 = YPPsym((P)"binding-dynamic-extent?-setter");
  lit_110 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T35 = YPsig(LITREF(lit_110),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_dynamic_extentQ_setter_51 = YPmet(FUNCODEREF(fun_binding_dynamic_extentQ_setter_51),LITREF(lit_109),T35,ENVNUL,PNUL,sloc(107));
  T38 = BOUNDP(YevalSastYbinding_dynamic_extentQ_setter);
  if (T38 != YPfalse) {
    T37 = VARREF(YevalSastYbinding_dynamic_extentQ_setter);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_binding_dynamic_extentQ_setter_51;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YevalSastYbinding_dynamic_extentQ_setter,T36);
  lit_111 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T40,ENVNUL,PNUL,sloc(107));
  T41 = fun_52;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_dynamic_extentQ),VARREF(YevalSastYbinding_dynamic_extentQ_setter),VARREF(YLanyG),T41);
  lit_112 = YPPsym((P)"binding-dotted?");
  lit_113 = YPPlist(1,YPPsym((P)"_x"));
  T42 = YPsig(LITREF(lit_113),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_dottedQ_53 = YPmet(FUNCODEREF(fun_binding_dottedQ_53),LITREF(lit_112),T42,ENVNUL,PNUL,sloc(108));
  T45 = BOUNDP(YevalSastYbinding_dottedQ);
  if (T45 != YPfalse) {
    T44 = VARREF(YevalSastYbinding_dottedQ);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_binding_dottedQ_53;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YevalSastYbinding_dottedQ,T43);
  lit_114 = YPPsym((P)"binding-dotted?-setter");
  lit_115 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T47 = YPsig(LITREF(lit_115),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_dottedQ_setter_54 = YPmet(FUNCODEREF(fun_binding_dottedQ_setter_54),LITREF(lit_114),T47,ENVNUL,PNUL,sloc(108));
  T50 = BOUNDP(YevalSastYbinding_dottedQ_setter);
  if (T50 != YPfalse) {
    T49 = VARREF(YevalSastYbinding_dottedQ_setter);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_binding_dottedQ_setter_54;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YevalSastYbinding_dottedQ_setter,T48);
  lit_116 = YPPlist(1,YPPsym((P)"_x"));
  T52 = YPsig(LITREF(lit_116),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T52,ENVNUL,PNUL,sloc(108));
  T53 = fun_55;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_dottedQ),VARREF(YevalSastYbinding_dottedQ_setter),VARREF(YLanyG),T53);
  lit_117 = YPPsym((P)"binding-index");
  lit_118 = YPPlist(1,YPPsym((P)"_x"));
  T54 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_56 = YPmet(FUNCODEREF(fun_binding_index_56),LITREF(lit_117),T54,ENVNUL,PNUL,sloc(109));
  T57 = BOUNDP(YevalSastYbinding_index);
  if (T57 != YPfalse) {
    T56 = VARREF(YevalSastYbinding_index);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_binding_index_56;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YevalSastYbinding_index,T55);
  lit_119 = YPPsym((P)"binding-index-setter");
  lit_120 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T59 = YPsig(LITREF(lit_120),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_57 = YPmet(FUNCODEREF(fun_binding_index_setter_57),LITREF(lit_119),T59,ENVNUL,PNUL,sloc(109));
  T62 = BOUNDP(YevalSastYbinding_index_setter);
  if (T62 != YPfalse) {
    T61 = VARREF(YevalSastYbinding_index_setter);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_binding_index_setter_57;
  T60 = XCALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YevalSastYbinding_index_setter,T60);
  lit_121 = YPPlist(1,YPPsym((P)"_x"));
  T64 = YPsig(LITREF(lit_121),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T64,ENVNUL,PNUL,sloc(109));
  T65 = fun_58;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_index),VARREF(YevalSastYbinding_index_setter),VARREF(YLanyG),T65);
  lit_122 = YPPsym((P)"<compile-time>");
  T67 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T66 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_122),T67);
  VARSET(YevalSastYLcompile_timeG,T66);
  lit_123 = YPPsym((P)"compile-time-program");
  lit_124 = YPPlist(1,YPPsym((P)"_x"));
  T68 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YevalSastYLcompile_timeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_compile_time_program_59 = YPmet(FUNCODEREF(fun_compile_time_program_59),LITREF(lit_123),T68,ENVNUL,PNUL,sloc(116));
  T71 = BOUNDP(YevalSastYcompile_time_program);
  if (T71 != YPfalse) {
    T70 = VARREF(YevalSastYcompile_time_program);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_compile_time_program_59;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YevalSastYcompile_time_program,T69);
  lit_125 = YPPsym((P)"compile-time-program-setter");
  lit_126 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T73 = YPsig(LITREF(lit_126),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLcompile_timeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compile_time_program_setter_60 = YPmet(FUNCODEREF(fun_compile_time_program_setter_60),LITREF(lit_125),T73,ENVNUL,PNUL,sloc(116));
  T76 = BOUNDP(YevalSastYcompile_time_program_setter);
  if (T76 != YPfalse) {
    T75 = VARREF(YevalSastYcompile_time_program_setter);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_compile_time_program_setter_60;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YevalSastYcompile_time_program_setter,T74);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLcompile_timeG),VARREF(YevalSastYcompile_time_program),VARREF(YevalSastYcompile_time_program_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_127 = YPPsym((P)"<reference>");
  T79 = (P)YPpair(VARREF(YevalSastYLpassive_programG),Ynil);
  T78 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_127),T79);
  VARSET(YevalSastYLreferenceG,T78);
  lit_128 = YPPsym((P)"<real-reference>");
  T81 = (P)YPpair(VARREF(YevalSastYLreferenceG),Ynil);
  T80 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_128),T81);
  VARSET(YevalSastYLreal_referenceG,T80);
  lit_129 = YPPsym((P)"reference-binding");
  lit_130 = YPPlist(1,YPPsym((P)"_x"));
  T82 = YPsig(LITREF(lit_130),YPPlist(1,VARREF(YevalSastYLreal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_binding_61 = YPmet(FUNCODEREF(fun_reference_binding_61),LITREF(lit_129),T82,ENVNUL,PNUL,sloc(127));
  T85 = BOUNDP(YevalSastYreference_binding);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalSastYreference_binding);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_reference_binding_61;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalSastYreference_binding,T83);
  lit_131 = YPPsym((P)"reference-binding-setter");
  lit_132 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T87 = YPsig(LITREF(lit_132),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLreal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_binding_setter_62 = YPmet(FUNCODEREF(fun_reference_binding_setter_62),LITREF(lit_131),T87,ENVNUL,PNUL,sloc(127));
  T90 = BOUNDP(YevalSastYreference_binding_setter);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSastYreference_binding_setter);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_reference_binding_setter_62;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSastYreference_binding_setter,T88);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLreal_referenceG),VARREF(YevalSastYreference_binding),VARREF(YevalSastYreference_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_133 = YPPsym((P)"<local-reference>");
  T93 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T92 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_133),T93);
  VARSET(YevalSastYLlocal_referenceG,T92);
  lit_134 = YPPsym((P)"reference-called-function?");
  lit_135 = YPPlist(1,YPPsym((P)"_x"));
  T94 = YPsig(LITREF(lit_135),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_called_functionQ_63 = YPmet(FUNCODEREF(fun_reference_called_functionQ_63),LITREF(lit_134),T94,ENVNUL,PNUL,sloc(130));
  T97 = BOUNDP(YevalSastYreference_called_functionQ);
  if (T97 != YPfalse) {
    T96 = VARREF(YevalSastYreference_called_functionQ);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_reference_called_functionQ_63;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YevalSastYreference_called_functionQ,T95);
  lit_136 = YPPsym((P)"reference-called-function?-setter");
  lit_137 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T99 = YPsig(LITREF(lit_137),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_called_functionQ_setter_64 = YPmet(FUNCODEREF(fun_reference_called_functionQ_setter_64),LITREF(lit_136),T99,ENVNUL,PNUL,sloc(130));
  T102 = BOUNDP(YevalSastYreference_called_functionQ_setter);
  if (T102 != YPfalse) {
    T101 = VARREF(YevalSastYreference_called_functionQ_setter);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_reference_called_functionQ_setter_64;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YevalSastYreference_called_functionQ_setter,T100);
  lit_138 = YPPlist(1,YPPsym((P)"_x"));
  T104 = YPsig(LITREF(lit_138),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T104,ENVNUL,PNUL,sloc(130));
  T105 = fun_65;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_called_functionQ),VARREF(YevalSastYreference_called_functionQ_setter),VARREF(YLanyG),T105);
  lit_139 = YPPsym((P)"reference-frame-number");
  lit_140 = YPPlist(1,YPPsym((P)"_x"));
  T106 = YPsig(LITREF(lit_140),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_frame_number_66 = YPmet(FUNCODEREF(fun_reference_frame_number_66),LITREF(lit_139),T106,ENVNUL,PNUL,sloc(131));
  T109 = BOUNDP(YevalSastYreference_frame_number);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalSastYreference_frame_number);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_reference_frame_number_66;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalSastYreference_frame_number,T107);
  lit_141 = YPPsym((P)"reference-frame-number-setter");
  lit_142 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T111 = YPsig(LITREF(lit_142),YPPlist(2,VARREF(YLintG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_frame_number_setter_67 = YPmet(FUNCODEREF(fun_reference_frame_number_setter_67),LITREF(lit_141),T111,ENVNUL,PNUL,sloc(131));
  T114 = BOUNDP(YevalSastYreference_frame_number_setter);
  if (T114 != YPfalse) {
    T113 = VARREF(YevalSastYreference_frame_number_setter);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_reference_frame_number_setter_67;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YevalSastYreference_frame_number_setter,T112);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_frame_number),VARREF(YevalSastYreference_frame_number_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_143 = YPPsym((P)"reference-frame-offset");
  lit_144 = YPPlist(1,YPPsym((P)"_x"));
  T116 = YPsig(LITREF(lit_144),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_frame_offset_68 = YPmet(FUNCODEREF(fun_reference_frame_offset_68),LITREF(lit_143),T116,ENVNUL,PNUL,sloc(132));
  T119 = BOUNDP(YevalSastYreference_frame_offset);
  if (T119 != YPfalse) {
    T118 = VARREF(YevalSastYreference_frame_offset);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_reference_frame_offset_68;
  T117 = XCALL2(1,VARREF(YPdefine_method),T118,T120);
  VARSET(YevalSastYreference_frame_offset,T117);
  lit_145 = YPPsym((P)"reference-frame-offset-setter");
  lit_146 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T121 = YPsig(LITREF(lit_146),YPPlist(2,VARREF(YLintG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_frame_offset_setter_69 = YPmet(FUNCODEREF(fun_reference_frame_offset_setter_69),LITREF(lit_145),T121,ENVNUL,PNUL,sloc(132));
  T124 = BOUNDP(YevalSastYreference_frame_offset_setter);
  if (T124 != YPfalse) {
    T123 = VARREF(YevalSastYreference_frame_offset_setter);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_reference_frame_offset_setter_69;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(YevalSastYreference_frame_offset_setter,T122);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_frame_offset),VARREF(YevalSastYreference_frame_offset_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_147 = YPPsym((P)"<module-binding-reference>");
  T127 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T126 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_147),T127);
  VARSET(YevalSastYLmodule_binding_referenceG,T126);
  lit_148 = YPPsym((P)"<global-reference>");
  T129 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T128 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_148),T129);
  VARSET(YevalSastYLglobal_referenceG,T128);
  lit_149 = YPPsym((P)"<runtime-reference>");
  T131 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T130 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_149),T131);
  VARSET(YevalSastYLruntime_referenceG,T130);
  lit_150 = YPPsym((P)"<dynamic-reference>");
  T133 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T132 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_150),T133);
  VARSET(YevalSastYLdynamic_referenceG,T132);
  lit_151 = YPPsym((P)"<predefined-reference>");
  T135 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T134 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_151),T135);
  VARSET(YevalSastYLpredefined_referenceG,T134);
  lit_152 = YPPsym((P)"<static-module-binding-reference>");
  T137 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T136 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_152),T137);
  VARSET(YevalSastYLstatic_module_binding_referenceG,T136);
  lit_153 = YPPsym((P)"<macro-reference>");
  T139 = (P)YPpair(VARREF(YevalSastYLstatic_module_binding_referenceG),Ynil);
  T138 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_153),T139);
  VARSET(YevalSastYLmacro_referenceG,T138);
  lit_154 = YPPsym((P)"<magic-reference>");
  T141 = (P)YPpair(VARREF(YevalSastYLstatic_module_binding_referenceG),Ynil);
  T140 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_154),T141);
  VARSET(YevalSastYLmagic_referenceG,T140);
  lit_155 = YPPsym((P)"<bound?>");
  T143 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T142 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_155),T143);
  VARSET(YevalSastYLboundQG,T142);
  lit_156 = YPPsym((P)"bound?-reference");
  lit_157 = YPPlist(1,YPPsym((P)"_x"));
  T144 = YPsig(LITREF(lit_157),YPPlist(1,VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_boundQ_reference_70 = YPmet(FUNCODEREF(fun_boundQ_reference_70),LITREF(lit_156),T144,ENVNUL,PNUL,sloc(153));
  T147 = BOUNDP(YevalSastYboundQ_reference);
  if (T147 != YPfalse) {
    T146 = VARREF(YevalSastYboundQ_reference);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_boundQ_reference_70;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalSastYboundQ_reference,T145);
  lit_158 = YPPsym((P)"bound?-reference-setter");
  lit_159 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T149 = YPsig(LITREF(lit_159),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boundQ_reference_setter_71 = YPmet(FUNCODEREF(fun_boundQ_reference_setter_71),LITREF(lit_158),T149,ENVNUL,PNUL,sloc(153));
  T152 = BOUNDP(YevalSastYboundQ_reference_setter);
  if (T152 != YPfalse) {
    T151 = VARREF(YevalSastYboundQ_reference_setter);
  } else {
    T151 = YPfalse;
  }
  T153 = fun_boundQ_reference_setter_71;
  T150 = XCALL2(1,VARREF(YPdefine_method),T151,T153);
  VARSET(YevalSastYboundQ_reference_setter,T150);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLboundQG),VARREF(YevalSastYboundQ_reference),VARREF(YevalSastYboundQ_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_160 = YPPsym((P)"<assignment>");
  T155 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T154 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_160),T155);
  VARSET(YevalSastYLassignmentG,T154);
  lit_161 = YPPsym((P)"assignment-form");
  lit_162 = YPPlist(1,YPPsym((P)"_x"));
  T156 = YPsig(LITREF(lit_162),YPPlist(1,VARREF(YevalSastYLassignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_form_72 = YPmet(FUNCODEREF(fun_assignment_form_72),LITREF(lit_161),T156,ENVNUL,PNUL,sloc(156));
  T159 = BOUNDP(YevalSastYassignment_form);
  if (T159 != YPfalse) {
    T158 = VARREF(YevalSastYassignment_form);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_assignment_form_72;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YevalSastYassignment_form,T157);
  lit_163 = YPPsym((P)"assignment-form-setter");
  lit_164 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T161 = YPsig(LITREF(lit_164),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLassignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_form_setter_73 = YPmet(FUNCODEREF(fun_assignment_form_setter_73),LITREF(lit_163),T161,ENVNUL,PNUL,sloc(156));
  T164 = BOUNDP(YevalSastYassignment_form_setter);
  if (T164 != YPfalse) {
    T163 = VARREF(YevalSastYassignment_form_setter);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_assignment_form_setter_73;
  T162 = XCALL2(1,VARREF(YPdefine_method),T163,T165);
  VARSET(YevalSastYassignment_form_setter,T162);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLassignmentG),VARREF(YevalSastYassignment_form),VARREF(YevalSastYassignment_form_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_165 = YPPsym((P)"<local-assignment>");
  T167 = (P)YPpair(VARREF(YevalSastYLassignmentG),Ynil);
  T166 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_165),T167);
  VARSET(YevalSastYLlocal_assignmentG,T166);
  lit_166 = YPPsym((P)"assignment-reference");
  lit_167 = YPPlist(1,YPPsym((P)"_x"));
  T168 = YPsig(LITREF(lit_167),YPPlist(1,VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_reference_74 = YPmet(FUNCODEREF(fun_assignment_reference_74),LITREF(lit_166),T168,ENVNUL,PNUL,sloc(159));
  T171 = BOUNDP(YevalSastYassignment_reference);
  if (T171 != YPfalse) {
    T170 = VARREF(YevalSastYassignment_reference);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_assignment_reference_74;
  T169 = XCALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(YevalSastYassignment_reference,T169);
  lit_168 = YPPsym((P)"assignment-reference-setter");
  lit_169 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T173 = YPsig(LITREF(lit_169),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_reference_setter_75 = YPmet(FUNCODEREF(fun_assignment_reference_setter_75),LITREF(lit_168),T173,ENVNUL,PNUL,sloc(159));
  T176 = BOUNDP(YevalSastYassignment_reference_setter);
  if (T176 != YPfalse) {
    T175 = VARREF(YevalSastYassignment_reference_setter);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_assignment_reference_setter_75;
  T174 = XCALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(YevalSastYassignment_reference_setter,T174);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_assignmentG),VARREF(YevalSastYassignment_reference),VARREF(YevalSastYassignment_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_170 = YPPsym((P)"<global-assignment>");
  T179 = (P)YPpair(VARREF(YevalSastYLassignmentG),Ynil);
  T178 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_170),T179);
  VARSET(YevalSastYLglobal_assignmentG,T178);
  lit_171 = YPPsym((P)"assignment-binding");
  lit_172 = YPPlist(1,YPPsym((P)"_x"));
  T182 = YPsig(LITREF(lit_172),YPPlist(1,VARREF(YevalSastYLglobal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T181 = fun_assignment_binding_76 = YPmet(FUNCODEREF(fun_assignment_binding_76),LITREF(lit_171),T182,ENVNUL,PNUL,sloc(162));
  T186 = BOUNDP(YevalSastYassignment_binding);
  if (T186 != YPfalse) {
    T185 = VARREF(YevalSastYassignment_binding);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_assignment_binding_76;
  T184 = XCALL2(1,VARREF(YPdefine_method),T185,T187);
  T183 = VARSET(YevalSastYassignment_binding,T184);
  T180 = T183;
  return T180;
}

P YevalSastY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206,T207;
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220;
DEFCREGS();
loop:
  lit_173 = YPPsym((P)"assignment-binding-setter");
  lit_174 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_174),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLglobal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_binding_setter_77 = YPmet(FUNCODEREF(fun_assignment_binding_setter_77),LITREF(lit_173),T0,ENVNUL,PNUL,sloc(162));
  T3 = BOUNDP(YevalSastYassignment_binding_setter);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSastYassignment_binding_setter);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_assignment_binding_setter_77;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSastYassignment_binding_setter,T1);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLglobal_assignmentG),VARREF(YevalSastYassignment_binding),VARREF(YevalSastYassignment_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_175 = YPPsym((P)"<runtime-assignment>");
  T6 = (P)YPpair(VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T5 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_175),T6);
  VARSET(YevalSastYLruntime_assignmentG,T5);
  lit_176 = YPPsym((P)"<dynamic-assignment>");
  T8 = (P)YPpair(VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T7 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_176),T8);
  VARSET(YevalSastYLdynamic_assignmentG,T7);
  lit_177 = YPPsym((P)"<definition>");
  T10 = (P)YPpair(VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T9 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_177),T10);
  VARSET(YevalSastYLdefinitionG,T9);
  lit_178 = YPPsym((P)"<variable-definition>");
  T12 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T11 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_178),T12);
  VARSET(YevalSastYLvariable_definitionG,T11);
  lit_179 = YPPsym((P)"<dynamic-definition>");
  T14 = (P)YPpair(VARREF(YevalSastYLvariable_definitionG),Ynil);
  T13 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_179),T14);
  VARSET(YevalSastYLdynamic_definitionG,T13);
  lit_180 = YPPsym((P)"<ast-generic-definition>");
  T16 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T15 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_180),T16);
  VARSET(YevalSastYLast_generic_definitionG,T15);
  lit_181 = YPPsym((P)"<ast-function-definition>");
  T18 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T17 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_181),T18);
  VARSET(YevalSastYLast_function_definitionG,T17);
  lit_182 = YPPsym((P)"<ast-method-definition>");
  T20 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T19 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_182),T20);
  VARSET(YevalSastYLast_method_definitionG,T19);
  lit_183 = YPPsym((P)"<ast-primitive-definition>");
  T22 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T21 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_183),T22);
  VARSET(YevalSastYLast_primitive_definitionG,T21);
  lit_184 = YPPsym((P)"<ast-macro-definition>");
  T24 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T23 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_184),T24);
  VARSET(YevalSastYLast_macro_definitionG,T23);
  lit_185 = YPPsym((P)"<ast-signature>");
  T26 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T25 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_185),T26);
  VARSET(YevalSastYLast_signatureG,T25);
  lit_186 = YPPsym((P)"signature-bindings");
  lit_187 = YPPlist(1,YPPsym((P)"_x"));
  T27 = YPsig(LITREF(lit_187),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_bindings_78 = YPmet(FUNCODEREF(fun_signature_bindings_78),LITREF(lit_186),T27,ENVNUL,PNUL,sloc(187));
  T30 = BOUNDP(YevalSastYsignature_bindings);
  if (T30 != YPfalse) {
    T29 = VARREF(YevalSastYsignature_bindings);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_signature_bindings_78;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YevalSastYsignature_bindings,T28);
  lit_188 = YPPsym((P)"signature-bindings-setter");
  lit_189 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T32 = YPsig(LITREF(lit_189),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_bindings_setter_79 = YPmet(FUNCODEREF(fun_signature_bindings_setter_79),LITREF(lit_188),T32,ENVNUL,PNUL,sloc(187));
  T35 = BOUNDP(YevalSastYsignature_bindings_setter);
  if (T35 != YPfalse) {
    T34 = VARREF(YevalSastYsignature_bindings_setter);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_signature_bindings_setter_79;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YevalSastYsignature_bindings_setter,T33);
  lit_190 = YPPlist(1,YPPsym((P)"_x"));
  T37 = YPsig(LITREF(lit_190),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T37,ENVNUL,PNUL,sloc(187));
  T38 = fun_80;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_bindings),VARREF(YevalSastYsignature_bindings_setter),VARREF(YLanyG),T38);
  lit_191 = YPPsym((P)"signature-names");
  lit_192 = YPPlist(1,YPPsym((P)"_x"));
  T39 = YPsig(LITREF(lit_192),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_names_81 = YPmet(FUNCODEREF(fun_signature_names_81),LITREF(lit_191),T39,ENVNUL,PNUL,sloc(188));
  T42 = BOUNDP(YevalSastYsignature_names);
  if (T42 != YPfalse) {
    T41 = VARREF(YevalSastYsignature_names);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_signature_names_81;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YevalSastYsignature_names,T40);
  lit_193 = YPPsym((P)"signature-names-setter");
  lit_194 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T44 = YPsig(LITREF(lit_194),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_names_setter_82 = YPmet(FUNCODEREF(fun_signature_names_setter_82),LITREF(lit_193),T44,ENVNUL,PNUL,sloc(188));
  T47 = BOUNDP(YevalSastYsignature_names_setter);
  if (T47 != YPfalse) {
    T46 = VARREF(YevalSastYsignature_names_setter);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_signature_names_setter_82;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YevalSastYsignature_names_setter,T45);
  lit_195 = YPPlist(1,YPPsym((P)"_x"));
  T49 = YPsig(LITREF(lit_195),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T49,ENVNUL,PNUL,sloc(188));
  T50 = fun_83;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_names),VARREF(YevalSastYsignature_names_setter),VARREF(YLanyG),T50);
  lit_196 = YPPsym((P)"signature-specs");
  lit_197 = YPPlist(1,YPPsym((P)"_x"));
  T51 = YPsig(LITREF(lit_197),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_specs_84 = YPmet(FUNCODEREF(fun_signature_specs_84),LITREF(lit_196),T51,ENVNUL,PNUL,sloc(189));
  T54 = BOUNDP(YevalSastYsignature_specs);
  if (T54 != YPfalse) {
    T53 = VARREF(YevalSastYsignature_specs);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_signature_specs_84;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YevalSastYsignature_specs,T52);
  lit_198 = YPPsym((P)"signature-specs-setter");
  lit_199 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T56 = YPsig(LITREF(lit_199),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_specs_setter_85 = YPmet(FUNCODEREF(fun_signature_specs_setter_85),LITREF(lit_198),T56,ENVNUL,PNUL,sloc(189));
  T59 = BOUNDP(YevalSastYsignature_specs_setter);
  if (T59 != YPfalse) {
    T58 = VARREF(YevalSastYsignature_specs_setter);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_signature_specs_setter_85;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YevalSastYsignature_specs_setter,T57);
  lit_200 = YPPlist(1,YPPsym((P)"_x"));
  T61 = YPsig(LITREF(lit_200),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T61,ENVNUL,PNUL,sloc(189));
  T62 = fun_86;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_specs),VARREF(YevalSastYsignature_specs_setter),VARREF(YLanyG),T62);
  lit_201 = YPPsym((P)"signature-nary?");
  lit_202 = YPPlist(1,YPPsym((P)"_x"));
  T63 = YPsig(LITREF(lit_202),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_87 = YPmet(FUNCODEREF(fun_signature_naryQ_87),LITREF(lit_201),T63,ENVNUL,PNUL,sloc(190));
  T66 = BOUNDP(YevalSastYsignature_naryQ);
  if (T66 != YPfalse) {
    T65 = VARREF(YevalSastYsignature_naryQ);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_signature_naryQ_87;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YevalSastYsignature_naryQ,T64);
  lit_203 = YPPsym((P)"signature-nary?-setter");
  lit_204 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T68 = YPsig(LITREF(lit_204),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_setter_88 = YPmet(FUNCODEREF(fun_signature_naryQ_setter_88),LITREF(lit_203),T68,ENVNUL,PNUL,sloc(190));
  T71 = BOUNDP(YevalSastYsignature_naryQ_setter);
  if (T71 != YPfalse) {
    T70 = VARREF(YevalSastYsignature_naryQ_setter);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_signature_naryQ_setter_88;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YevalSastYsignature_naryQ_setter,T69);
  lit_205 = YPPlist(1,YPPsym((P)"_x"));
  T73 = YPsig(LITREF(lit_205),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T73,ENVNUL,PNUL,sloc(190));
  T74 = fun_89;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_naryQ),VARREF(YevalSastYsignature_naryQ_setter),VARREF(YLanyG),T74);
  lit_206 = YPPsym((P)"signature-arity");
  lit_207 = YPPlist(1,YPPsym((P)"_x"));
  T75 = YPsig(LITREF(lit_207),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_arity_90 = YPmet(FUNCODEREF(fun_signature_arity_90),LITREF(lit_206),T75,ENVNUL,PNUL,sloc(191));
  T78 = BOUNDP(YevalSastYsignature_arity);
  if (T78 != YPfalse) {
    T77 = VARREF(YevalSastYsignature_arity);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_signature_arity_90;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YevalSastYsignature_arity,T76);
  lit_208 = YPPsym((P)"signature-arity-setter");
  lit_209 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T80 = YPsig(LITREF(lit_209),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_arity_setter_91 = YPmet(FUNCODEREF(fun_signature_arity_setter_91),LITREF(lit_208),T80,ENVNUL,PNUL,sloc(191));
  T83 = BOUNDP(YevalSastYsignature_arity_setter);
  if (T83 != YPfalse) {
    T82 = VARREF(YevalSastYsignature_arity_setter);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_signature_arity_setter_91;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YevalSastYsignature_arity_setter,T81);
  lit_210 = YPPlist(1,YPPsym((P)"_x"));
  T85 = YPsig(LITREF(lit_210),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_92 = YPmet(FUNCODEREF(fun_92),YPfalse,T85,ENVNUL,PNUL,sloc(191));
  T86 = fun_92;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_arity),VARREF(YevalSastYsignature_arity_setter),VARREF(YLanyG),T86);
  lit_211 = YPPsym((P)"signature-value");
  lit_212 = YPPlist(1,YPPsym((P)"_x"));
  T87 = YPsig(LITREF(lit_212),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_value_93 = YPmet(FUNCODEREF(fun_signature_value_93),LITREF(lit_211),T87,ENVNUL,PNUL,sloc(192));
  T90 = BOUNDP(YevalSastYsignature_value);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSastYsignature_value);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_signature_value_93;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSastYsignature_value,T88);
  lit_213 = YPPsym((P)"signature-value-setter");
  lit_214 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T92 = YPsig(LITREF(lit_214),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_value_setter_94 = YPmet(FUNCODEREF(fun_signature_value_setter_94),LITREF(lit_213),T92,ENVNUL,PNUL,sloc(192));
  T95 = BOUNDP(YevalSastYsignature_value_setter);
  if (T95 != YPfalse) {
    T94 = VARREF(YevalSastYsignature_value_setter);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_signature_value_setter_94;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YevalSastYsignature_value_setter,T93);
  lit_215 = YPPlist(1,YPPsym((P)"_x"));
  T97 = YPsig(LITREF(lit_215),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPmet(FUNCODEREF(fun_95),YPfalse,T97,ENVNUL,PNUL,sloc(192));
  T98 = fun_95;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_value),VARREF(YevalSastYsignature_value_setter),VARREF(YLanyG),T98);
  lit_216 = YPPsym((P)"<ast-function>");
  T101 = (P)YPpair(VARREF(YevalSdependencyYLdependentG),Ynil);
  T100 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),T101);
  T99 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_216),T100);
  VARSET(YevalSastYLast_functionG,T99);
  lit_217 = YPPsym((P)"function-binding");
  lit_218 = YPPlist(1,YPPsym((P)"_x"));
  T102 = YPsig(LITREF(lit_218),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_binding_96 = YPmet(FUNCODEREF(fun_function_binding_96),LITREF(lit_217),T102,ENVNUL,PNUL,sloc(195));
  T105 = BOUNDP(YevalSastYfunction_binding);
  if (T105 != YPfalse) {
    T104 = VARREF(YevalSastYfunction_binding);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_function_binding_96;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YevalSastYfunction_binding,T103);
  lit_219 = YPPsym((P)"function-binding-setter");
  lit_220 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T107 = YPsig(LITREF(lit_220),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_binding_setter_97 = YPmet(FUNCODEREF(fun_function_binding_setter_97),LITREF(lit_219),T107,ENVNUL,PNUL,sloc(195));
  T110 = BOUNDP(YevalSastYfunction_binding_setter);
  if (T110 != YPfalse) {
    T109 = VARREF(YevalSastYfunction_binding_setter);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_function_binding_setter_97;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YevalSastYfunction_binding_setter,T108);
  lit_221 = YPPlist(1,YPPsym((P)"_x"));
  T112 = YPsig(LITREF(lit_221),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPmet(FUNCODEREF(fun_98),YPfalse,T112,ENVNUL,PNUL,sloc(195));
  T113 = fun_98;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_binding),VARREF(YevalSastYfunction_binding_setter),VARREF(YLanyG),T113);
  lit_222 = YPPsym((P)"function-debug-name");
  lit_223 = YPPlist(1,YPPsym((P)"_x"));
  T114 = YPsig(LITREF(lit_223),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_debug_name_99 = YPmet(FUNCODEREF(fun_function_debug_name_99),LITREF(lit_222),T114,ENVNUL,PNUL,sloc(196));
  T117 = BOUNDP(YevalSastYfunction_debug_name);
  if (T117 != YPfalse) {
    T116 = VARREF(YevalSastYfunction_debug_name);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_function_debug_name_99;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YevalSastYfunction_debug_name,T115);
  lit_224 = YPPsym((P)"function-debug-name-setter");
  lit_225 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T119 = YPsig(LITREF(lit_225),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_debug_name_setter_100 = YPmet(FUNCODEREF(fun_function_debug_name_setter_100),LITREF(lit_224),T119,ENVNUL,PNUL,sloc(196));
  T122 = BOUNDP(YevalSastYfunction_debug_name_setter);
  if (T122 != YPfalse) {
    T121 = VARREF(YevalSastYfunction_debug_name_setter);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_function_debug_name_setter_100;
  T120 = XCALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YevalSastYfunction_debug_name_setter,T120);
  lit_226 = YPPlist(1,YPPsym((P)"_x"));
  T124 = YPsig(LITREF(lit_226),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_101 = YPmet(FUNCODEREF(fun_101),YPfalse,T124,ENVNUL,PNUL,sloc(196));
  T125 = fun_101;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_debug_name),VARREF(YevalSastYfunction_debug_name_setter),VARREF(YLanyG),T125);
  lit_227 = YPPsym((P)"function-signature");
  lit_228 = YPPlist(1,YPPsym((P)"_x"));
  T126 = YPsig(LITREF(lit_228),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_signature_102 = YPmet(FUNCODEREF(fun_function_signature_102),LITREF(lit_227),T126,ENVNUL,PNUL,sloc(198));
  T129 = BOUNDP(YevalSastYfunction_signature);
  if (T129 != YPfalse) {
    T128 = VARREF(YevalSastYfunction_signature);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_function_signature_102;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YevalSastYfunction_signature,T127);
  lit_229 = YPPsym((P)"function-signature-setter");
  lit_230 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T131 = YPsig(LITREF(lit_230),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_signature_setter_103 = YPmet(FUNCODEREF(fun_function_signature_setter_103),LITREF(lit_229),T131,ENVNUL,PNUL,sloc(198));
  T134 = BOUNDP(YevalSastYfunction_signature_setter);
  if (T134 != YPfalse) {
    T133 = VARREF(YevalSastYfunction_signature_setter);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_function_signature_setter_103;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(YevalSastYfunction_signature_setter,T132);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_signature),VARREF(YevalSastYfunction_signature_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_231 = YPPsym((P)"function-bindings");
  lit_232 = YPPlist(1,YPPsym((P)"x"));
  T136 = YPsig(LITREF(lit_232),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_bindings = YPmet(FUNCODEREF(YevalSastYfunction_bindings),LITREF(lit_231),T136,ENVNUL,PNUL,sloc(200));
  T137 = YevalSastYfunction_bindings;
  VARSET(YevalSastYfunction_bindings,T137);
  lit_233 = YPPsym((P)"function-specs");
  lit_234 = YPPlist(1,YPPsym((P)"x"));
  T138 = YPsig(LITREF(lit_234),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_specs = YPmet(FUNCODEREF(YevalSastYfunction_specs),LITREF(lit_233),T138,ENVNUL,PNUL,sloc(202));
  T139 = YevalSastYfunction_specs;
  VARSET(YevalSastYfunction_specs,T139);
  lit_235 = YPPsym((P)"function-nary?");
  lit_236 = YPPlist(1,YPPsym((P)"x"));
  T140 = YPsig(LITREF(lit_236),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_naryQ = YPmet(FUNCODEREF(YevalSastYfunction_naryQ),LITREF(lit_235),T140,ENVNUL,PNUL,sloc(204));
  T141 = YevalSastYfunction_naryQ;
  VARSET(YevalSastYfunction_naryQ,T141);
  lit_237 = YPPsym((P)"function-value");
  lit_238 = YPPlist(1,YPPsym((P)"x"));
  T142 = YPsig(LITREF(lit_238),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_value = YPmet(FUNCODEREF(YevalSastYfunction_value),LITREF(lit_237),T142,ENVNUL,PNUL,sloc(206));
  T143 = YevalSastYfunction_value;
  VARSET(YevalSastYfunction_value,T143);
  lit_239 = YPPsym((P)"function-kind");
  lit_240 = YPPlist(1,YPPsym((P)"x"));
  lit_241 = YPsb((P)"FUN");
  T144 = YPsig(LITREF(lit_240),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_108 = YPmet(FUNCODEREF(fun_function_kind_108),LITREF(lit_239),T144,ENVNUL,PNUL,sloc(209));
  T147 = BOUNDP(YevalSastYfunction_kind);
  if (T147 != YPfalse) {
    T146 = VARREF(YevalSastYfunction_kind);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_function_kind_108;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalSastYfunction_kind,T145);
  lit_242 = YPPsym((P)"function-display-name");
  lit_243 = YPPlist(1,YPPsym((P)"f"));
  lit_244 = YPsb((P)"%s:%s");
  lit_245 = YPsb((P)"anonymous function");
  T149 = YPsig(LITREF(lit_243),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_display_name = YPmet(FUNCODEREF(YevalSastYfunction_display_name),LITREF(lit_242),T149,ENVNUL,PNUL,sloc(211));
  T150 = YevalSastYfunction_display_name;
  VARSET(YevalSastYfunction_display_name,T150);
  lit_246 = YPPsym((P)"invalidate-dependent");
  lit_247 = YPPlist(3,YPPsym((P)"dependent"),YPPsym((P)"dependable"),YPPsym((P)"dtype"));
  lit_248 = YPsb((P)"warning: %s needs to be reparsed\n");
  lit_249 = YPsb((P)"warning: %s needs to be re-optimized\n");
  lit_250 = YPsb((P)"warning: unknown dependency of %s clobbered\n");
  T151 = YPsig(LITREF(lit_247),YPPlist(3,VARREF(YevalSastYLast_functionG),VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_invalidate_dependent_110 = YPmet(FUNCODEREF(fun_invalidate_dependent_110),LITREF(lit_246),T151,ENVNUL,PNUL,sloc(221));
  T154 = BOUNDP(YevalSdependencyYinvalidate_dependent);
  if (T154 != YPfalse) {
    T153 = VARREF(YevalSdependencyYinvalidate_dependent);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_invalidate_dependent_110;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YevalSdependencyYinvalidate_dependent,T152);
  lit_251 = YPPsym((P)"<programs>");
  T157 = (P)YPpair(VARREF(YevalSastYLpassive_programG),Ynil);
  T156 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_251),T157);
  VARSET(YevalSastYLprogramsG,T156);
  lit_252 = YPPsym((P)"as-lst");
  lit_253 = YPPlist(1,YPPsym((P)"e"));
  lit_254 = YPPsym((P)"loop");
  lit_255 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"e"));
  T159 = YPsig(LITREF(lit_255),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_111 = YPmet(FUNCODEREF(fun_loop_111),LITREF(lit_254),T159,ENVNUL,PNUL,sloc(239));
  T158 = YPsig(LITREF(lit_253),YPPlist(1,VARREF(YevalSastYLprogramsG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_as_lst_112 = YPmet(FUNCODEREF(fun_as_lst_112),LITREF(lit_252),T158,ENVNUL,PNUL,sloc(238));
  T162 = BOUNDP(YevalSastYas_lst);
  if (T162 != YPfalse) {
    T161 = VARREF(YevalSastYas_lst);
  } else {
    T161 = YPfalse;
  }
  T163 = fun_as_lst_112;
  T160 = XCALL2(1,VARREF(YPdefine_method),T161,T163);
  VARSET(YevalSastYas_lst,T160);
  lit_256 = YPPlist(1,YPPsym((P)"exp"));
  lit_257 = YPPlist(1,YPPsym((P)"return"));
  lit_258 = YPPsym((P)"x-1439");
  lit_259 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_260 = YPPsym((P)"def-programs");
  lit_261 = YPPsym((P)"def-list");
  T166 = YPsig(LITREF(lit_259),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1439_113 = YPmet(FUNCODEREF(fun_x_1439_113),LITREF(lit_258),T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(LITREF(lit_257),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_114 = YPmet(FUNCODEREF(fun_114),YPfalse,T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(LITREF(lit_256),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPmet(FUNCODEREF(fun_115),YPfalse,T164,ENVNUL,PNUL,YPfalse);
  T167 = fun_115;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"def-programs"),T167);
  lit_262 = YPPsym((P)"<ast-embodied-function>");
  T169 = (P)YPpair(VARREF(YevalSastYLast_functionG),Ynil);
  T168 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_262),T169);
  VARSET(YevalSastYLast_embodied_functionG,T168);
  lit_263 = YPPsym((P)"function-body");
  lit_264 = YPPlist(1,YPPsym((P)"_x"));
  T170 = YPsig(LITREF(lit_264),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_body_116 = YPmet(FUNCODEREF(fun_function_body_116),LITREF(lit_263),T170,ENVNUL,PNUL,sloc(245));
  T173 = BOUNDP(YevalSastYfunction_body);
  if (T173 != YPfalse) {
    T172 = VARREF(YevalSastYfunction_body);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_function_body_116;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YevalSastYfunction_body,T171);
  lit_265 = YPPsym((P)"function-body-setter");
  lit_266 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T175 = YPsig(LITREF(lit_266),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_body_setter_117 = YPmet(FUNCODEREF(fun_function_body_setter_117),LITREF(lit_265),T175,ENVNUL,PNUL,sloc(245));
  T178 = BOUNDP(YevalSastYfunction_body_setter);
  if (T178 != YPfalse) {
    T177 = VARREF(YevalSastYfunction_body_setter);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_function_body_setter_117;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YevalSastYfunction_body_setter,T176);
  lit_267 = YPPlist(1,YPPsym((P)"_x"));
  T180 = YPsig(LITREF(lit_267),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPmet(FUNCODEREF(fun_118),YPfalse,T180,ENVNUL,PNUL,sloc(245));
  T181 = fun_118;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_body),VARREF(YevalSastYfunction_body_setter),VARREF(YLanyG),T181);
  lit_268 = YPPsym((P)"function-index");
  lit_269 = YPPlist(1,YPPsym((P)"_x"));
  T182 = YPsig(LITREF(lit_269),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_index_119 = YPmet(FUNCODEREF(fun_function_index_119),LITREF(lit_268),T182,ENVNUL,PNUL,sloc(246));
  T185 = BOUNDP(YevalSastYfunction_index);
  if (T185 != YPfalse) {
    T184 = VARREF(YevalSastYfunction_index);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_function_index_119;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YevalSastYfunction_index,T183);
  lit_270 = YPPsym((P)"function-index-setter");
  lit_271 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T187 = YPsig(LITREF(lit_271),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_index_setter_120 = YPmet(FUNCODEREF(fun_function_index_setter_120),LITREF(lit_270),T187,ENVNUL,PNUL,sloc(246));
  T190 = BOUNDP(YevalSastYfunction_index_setter);
  if (T190 != YPfalse) {
    T189 = VARREF(YevalSastYfunction_index_setter);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_function_index_setter_120;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YevalSastYfunction_index_setter,T188);
  lit_272 = YPPlist(1,YPPsym((P)"_x"));
  T192 = YPsig(LITREF(lit_272),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_121 = YPmet(FUNCODEREF(fun_121),YPfalse,T192,ENVNUL,PNUL,sloc(246));
  T193 = fun_121;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_index),VARREF(YevalSastYfunction_index_setter),VARREF(YLanyG),T193);
  lit_273 = YPPsym((P)"function-temporaries");
  lit_274 = YPPlist(1,YPPsym((P)"_x"));
  T194 = YPsig(LITREF(lit_274),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_temporaries_122 = YPmet(FUNCODEREF(fun_function_temporaries_122),LITREF(lit_273),T194,ENVNUL,PNUL,sloc(247));
  T197 = BOUNDP(YevalSastYfunction_temporaries);
  if (T197 != YPfalse) {
    T196 = VARREF(YevalSastYfunction_temporaries);
  } else {
    T196 = YPfalse;
  }
  T198 = fun_function_temporaries_122;
  T195 = XCALL2(1,VARREF(YPdefine_method),T196,T198);
  VARSET(YevalSastYfunction_temporaries,T195);
  lit_275 = YPPsym((P)"function-temporaries-setter");
  lit_276 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T199 = YPsig(LITREF(lit_276),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_temporaries_setter_123 = YPmet(FUNCODEREF(fun_function_temporaries_setter_123),LITREF(lit_275),T199,ENVNUL,PNUL,sloc(247));
  T202 = BOUNDP(YevalSastYfunction_temporaries_setter);
  if (T202 != YPfalse) {
    T201 = VARREF(YevalSastYfunction_temporaries_setter);
  } else {
    T201 = YPfalse;
  }
  T203 = fun_function_temporaries_setter_123;
  T200 = XCALL2(1,VARREF(YPdefine_method),T201,T203);
  VARSET(YevalSastYfunction_temporaries_setter,T200);
  lit_277 = YPPlist(1,YPPsym((P)"_x"));
  T204 = YPsig(LITREF(lit_277),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_124 = YPmet(FUNCODEREF(fun_124),YPfalse,T204,ENVNUL,PNUL,sloc(247));
  T205 = fun_124;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_temporaries),VARREF(YevalSastYfunction_temporaries_setter),VARREF(YLanyG),T205);
  lit_278 = YPPsym((P)"function-registers");
  lit_279 = YPPlist(1,YPPsym((P)"_x"));
  T206 = YPsig(LITREF(lit_279),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_registers_125 = YPmet(FUNCODEREF(fun_function_registers_125),LITREF(lit_278),T206,ENVNUL,PNUL,sloc(248));
  T209 = BOUNDP(YevalSastYfunction_registers);
  if (T209 != YPfalse) {
    T208 = VARREF(YevalSastYfunction_registers);
  } else {
    T208 = YPfalse;
  }
  T210 = fun_function_registers_125;
  T207 = XCALL2(1,VARREF(YPdefine_method),T208,T210);
  VARSET(YevalSastYfunction_registers,T207);
  lit_280 = YPPsym((P)"function-registers-setter");
  lit_281 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T211 = YPsig(LITREF(lit_281),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_registers_setter_126 = YPmet(FUNCODEREF(fun_function_registers_setter_126),LITREF(lit_280),T211,ENVNUL,PNUL,sloc(248));
  T214 = BOUNDP(YevalSastYfunction_registers_setter);
  if (T214 != YPfalse) {
    T213 = VARREF(YevalSastYfunction_registers_setter);
  } else {
    T213 = YPfalse;
  }
  T215 = fun_function_registers_setter_126;
  T212 = XCALL2(1,VARREF(YPdefine_method),T213,T215);
  VARSET(YevalSastYfunction_registers_setter,T212);
  lit_282 = YPPlist(1,YPPsym((P)"_x"));
  T218 = YPsig(LITREF(lit_282),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T217 = fun_127 = YPmet(FUNCODEREF(fun_127),YPfalse,T218,ENVNUL,PNUL,sloc(248));
  T220 = fun_127;
  T219 = XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_registers),VARREF(YevalSastYfunction_registers_setter),VARREF(YgooScolsSvecYLvecG),T220);
  T216 = T219;
  return T216;
}

P YevalSastY___main_3___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206,T207;
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220,T221,T222,T223;
DEFCREGS();
loop:
  lit_283 = YPPsym((P)"function-data-refs");
  lit_284 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_284),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_data_refs_128 = YPmet(FUNCODEREF(fun_function_data_refs_128),LITREF(lit_283),T0,ENVNUL,PNUL,sloc(249));
  T3 = BOUNDP(YevalSastYfunction_data_refs);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSastYfunction_data_refs);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_function_data_refs_128;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSastYfunction_data_refs,T1);
  lit_285 = YPPsym((P)"function-data-refs-setter");
  lit_286 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T5 = YPsig(LITREF(lit_286),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_data_refs_setter_129 = YPmet(FUNCODEREF(fun_function_data_refs_setter_129),LITREF(lit_285),T5,ENVNUL,PNUL,sloc(249));
  T8 = BOUNDP(YevalSastYfunction_data_refs_setter);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSastYfunction_data_refs_setter);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_function_data_refs_setter_129;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSastYfunction_data_refs_setter,T6);
  lit_287 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPsig(LITREF(lit_287),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_130 = YPmet(FUNCODEREF(fun_130),YPfalse,T10,ENVNUL,PNUL,sloc(249));
  T11 = fun_130;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_data_refs),VARREF(YevalSastYfunction_data_refs_setter),VARREF(YgooScolsSvecYLvecG),T11);
  lit_288 = YPPsym((P)"function-self-recursive?");
  lit_289 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPsig(LITREF(lit_289),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_self_recursiveQ_131 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_131),LITREF(lit_288),T12,ENVNUL,PNUL,sloc(250));
  T15 = BOUNDP(YevalSastYfunction_self_recursiveQ);
  if (T15 != YPfalse) {
    T14 = VARREF(YevalSastYfunction_self_recursiveQ);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_function_self_recursiveQ_131;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YevalSastYfunction_self_recursiveQ,T13);
  lit_290 = YPPsym((P)"function-self-recursive?-setter");
  lit_291 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T17 = YPsig(LITREF(lit_291),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_self_recursiveQ_setter_132 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_setter_132),LITREF(lit_290),T17,ENVNUL,PNUL,sloc(250));
  T20 = BOUNDP(YevalSastYfunction_self_recursiveQ_setter);
  if (T20 != YPfalse) {
    T19 = VARREF(YevalSastYfunction_self_recursiveQ_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_function_self_recursiveQ_setter_132;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YevalSastYfunction_self_recursiveQ_setter,T18);
  lit_292 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPsig(LITREF(lit_292),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_133 = YPmet(FUNCODEREF(fun_133),YPfalse,T22,ENVNUL,PNUL,sloc(250));
  T23 = fun_133;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_self_recursiveQ),VARREF(YevalSastYfunction_self_recursiveQ_setter),VARREF(YLanyG),T23);
  lit_293 = YPPsym((P)"function-source");
  lit_294 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPsig(LITREF(lit_294),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_source_134 = YPmet(FUNCODEREF(fun_function_source_134),LITREF(lit_293),T24,ENVNUL,PNUL,sloc(251));
  T27 = BOUNDP(YevalSastYfunction_source);
  if (T27 != YPfalse) {
    T26 = VARREF(YevalSastYfunction_source);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_function_source_134;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YevalSastYfunction_source,T25);
  lit_295 = YPPsym((P)"function-source-setter");
  lit_296 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T29 = YPsig(LITREF(lit_296),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_source_setter_135 = YPmet(FUNCODEREF(fun_function_source_setter_135),LITREF(lit_295),T29,ENVNUL,PNUL,sloc(251));
  T32 = BOUNDP(YevalSastYfunction_source_setter);
  if (T32 != YPfalse) {
    T31 = VARREF(YevalSastYfunction_source_setter);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_function_source_setter_135;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YevalSastYfunction_source_setter,T30);
  lit_297 = YPPlist(1,YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_297),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_136 = YPmet(FUNCODEREF(fun_136),YPfalse,T34,ENVNUL,PNUL,sloc(251));
  T35 = fun_136;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_source),VARREF(YevalSastYfunction_source_setter),VARREF(YLanyG),T35);
  lit_298 = YPPsym((P)"function-frame-len");
  lit_299 = YPPlist(1,YPPsym((P)"_x"));
  T36 = YPsig(LITREF(lit_299),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_frame_len_137 = YPmet(FUNCODEREF(fun_function_frame_len_137),LITREF(lit_298),T36,ENVNUL,PNUL,sloc(252));
  T39 = BOUNDP(YevalSastYfunction_frame_len);
  if (T39 != YPfalse) {
    T38 = VARREF(YevalSastYfunction_frame_len);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_function_frame_len_137;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YevalSastYfunction_frame_len,T37);
  lit_300 = YPPsym((P)"function-frame-len-setter");
  lit_301 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T41 = YPsig(LITREF(lit_301),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_frame_len_setter_138 = YPmet(FUNCODEREF(fun_function_frame_len_setter_138),LITREF(lit_300),T41,ENVNUL,PNUL,sloc(252));
  T44 = BOUNDP(YevalSastYfunction_frame_len_setter);
  if (T44 != YPfalse) {
    T43 = VARREF(YevalSastYfunction_frame_len_setter);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_function_frame_len_setter_138;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YevalSastYfunction_frame_len_setter,T42);
  lit_302 = YPPlist(1,YPPsym((P)"_x"));
  T46 = YPsig(LITREF(lit_302),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_139 = YPmet(FUNCODEREF(fun_139),YPfalse,T46,ENVNUL,PNUL,sloc(252));
  T47 = fun_139;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_frame_len),VARREF(YevalSastYfunction_frame_len_setter),VARREF(YLanyG),T47);
  lit_303 = YPPsym((P)"<free-environment>");
  T50 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T49 = (P)YPpair(VARREF(YLlstG),T50);
  T48 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_303),T49);
  VARSET(YevalSastYLfree_environmentG,T48);
  T51 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfree_environmentG));
  VARSET(YevalSastYDfree_environment_empty,T51);
  lit_304 = YPPsym((P)"free-environment");
  lit_305 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T52 = YPsig(LITREF(lit_305),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfree_environment = YPmet(FUNCODEREF(YevalSastYfree_environment),LITREF(lit_304),T52,ENVNUL,PNUL,sloc(254));
  T53 = YevalSastYfree_environment;
  VARSET(YevalSastYfree_environment,T53);
  lit_306 = YPPsym((P)"empty");
  lit_307 = YPPlist(1,YPPsym((P)"e"));
  T55 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfree_environmentG));
  T54 = YPsig(LITREF(lit_307),YPPlist(1,T55),YPfalse,YPint((P)1),VARREF(YevalSastYLfree_environmentG),Ynil);
  fun_empty_141 = YPmet(FUNCODEREF(fun_empty_141),LITREF(lit_306),T54,ENVNUL,PNUL,sloc(254));
  T58 = BOUNDP(YgooScolsScolYempty);
  if (T58 != YPfalse) {
    T57 = VARREF(YgooScolsScolYempty);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_empty_141;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YgooScolsScolYempty,T56);
  lit_308 = YPPsym((P)"<ast-method>");
  T61 = (P)YPpair(VARREF(YevalSastYLast_embodied_functionG),Ynil);
  T60 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_308),T61);
  VARSET(YevalSastYLast_methodG,T60);
  lit_309 = YPPsym((P)"function-free");
  lit_310 = YPPlist(1,YPPsym((P)"_x"));
  T62 = YPsig(LITREF(lit_310),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_free_142 = YPmet(FUNCODEREF(fun_function_free_142),LITREF(lit_309),T62,ENVNUL,PNUL,sloc(257));
  T65 = BOUNDP(YevalSastYfunction_free);
  if (T65 != YPfalse) {
    T64 = VARREF(YevalSastYfunction_free);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_function_free_142;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YevalSastYfunction_free,T63);
  lit_311 = YPPsym((P)"function-free-setter");
  lit_312 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T67 = YPsig(LITREF(lit_312),YPPlist(2,VARREF(YevalSastYLfree_environmentG),VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_free_setter_143 = YPmet(FUNCODEREF(fun_function_free_setter_143),LITREF(lit_311),T67,ENVNUL,PNUL,sloc(257));
  T70 = BOUNDP(YevalSastYfunction_free_setter);
  if (T70 != YPfalse) {
    T69 = VARREF(YevalSastYfunction_free_setter);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_function_free_setter_143;
  T68 = XCALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(YevalSastYfunction_free_setter,T68);
  lit_313 = YPPlist(1,YPPsym((P)"_x"));
  T72 = YPsig(LITREF(lit_313),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_144 = YPmet(FUNCODEREF(fun_144),YPfalse,T72,ENVNUL,PNUL,sloc(257));
  T73 = fun_144;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYfunction_free),VARREF(YevalSastYfunction_free_setter),VARREF(YevalSastYLfree_environmentG),T73);
  lit_314 = YPPlist(1,YPPsym((P)"x"));
  lit_315 = YPsb((P)"MET");
  T74 = YPsig(LITREF(lit_314),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_145 = YPmet(FUNCODEREF(fun_function_kind_145),LITREF(lit_239),T74,ENVNUL,PNUL,sloc(260));
  T77 = BOUNDP(YevalSastYfunction_kind);
  if (T77 != YPfalse) {
    T76 = VARREF(YevalSastYfunction_kind);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_function_kind_145;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YevalSastYfunction_kind,T75);
  lit_316 = YPPsym((P)"<ast-primitive>");
  T80 = (P)YPpair(VARREF(YevalSastYLast_embodied_functionG),Ynil);
  T79 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_316),T80);
  VARSET(YevalSastYLast_primitiveG,T79);
  lit_317 = YPPsym((P)"function-adjectives");
  lit_318 = YPPlist(1,YPPsym((P)"_x"));
  T81 = YPsig(LITREF(lit_318),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_adjectives_146 = YPmet(FUNCODEREF(fun_function_adjectives_146),LITREF(lit_317),T81,ENVNUL,PNUL,sloc(263));
  T84 = BOUNDP(YevalSastYfunction_adjectives);
  if (T84 != YPfalse) {
    T83 = VARREF(YevalSastYfunction_adjectives);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_function_adjectives_146;
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YevalSastYfunction_adjectives,T82);
  lit_319 = YPPsym((P)"function-adjectives-setter");
  lit_320 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T86 = YPsig(LITREF(lit_320),YPPlist(2,VARREF(YLlstG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_adjectives_setter_147 = YPmet(FUNCODEREF(fun_function_adjectives_setter_147),LITREF(lit_319),T86,ENVNUL,PNUL,sloc(263));
  T89 = BOUNDP(YevalSastYfunction_adjectives_setter);
  if (T89 != YPfalse) {
    T88 = VARREF(YevalSastYfunction_adjectives_setter);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_function_adjectives_setter_147;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YevalSastYfunction_adjectives_setter,T87);
  lit_321 = YPPlist(1,YPPsym((P)"_x"));
  T91 = YPsig(LITREF(lit_321),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_148 = YPmet(FUNCODEREF(fun_148),YPfalse,T91,ENVNUL,PNUL,sloc(263));
  T92 = fun_148;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_adjectives),VARREF(YevalSastYfunction_adjectives_setter),VARREF(YLlstG),T92);
  lit_322 = YPPlist(1,YPPsym((P)"x"));
  lit_323 = YPsb((P)"PRM");
  T93 = YPsig(LITREF(lit_322),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_149 = YPmet(FUNCODEREF(fun_function_kind_149),LITREF(lit_239),T93,ENVNUL,PNUL,sloc(265));
  T96 = BOUNDP(YevalSastYfunction_kind);
  if (T96 != YPfalse) {
    T95 = VARREF(YevalSastYfunction_kind);
  } else {
    T95 = YPfalse;
  }
  T97 = fun_function_kind_149;
  T94 = XCALL2(1,VARREF(YPdefine_method),T95,T97);
  VARSET(YevalSastYfunction_kind,T94);
  lit_324 = YPPsym((P)"<ast-generic>");
  T99 = (P)YPpair(VARREF(YevalSastYLast_functionG),Ynil);
  T98 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_324),T99);
  VARSET(YevalSastYLast_genericG,T98);
  lit_325 = YPPlist(1,YPPsym((P)"x"));
  lit_326 = YPsb((P)"GEN");
  T100 = YPsig(LITREF(lit_325),YPPlist(1,VARREF(YevalSastYLast_genericG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_150 = YPmet(FUNCODEREF(fun_function_kind_150),LITREF(lit_239),T100,ENVNUL,PNUL,sloc(269));
  T103 = BOUNDP(YevalSastYfunction_kind);
  if (T103 != YPfalse) {
    T102 = VARREF(YevalSastYfunction_kind);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_function_kind_150;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YevalSastYfunction_kind,T101);
  lit_327 = YPPsym((P)"<alternative>");
  T106 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T105 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_327),T106);
  VARSET(YevalSastYLalternativeG,T105);
  lit_328 = YPPsym((P)"alternative-condition");
  lit_329 = YPPlist(1,YPPsym((P)"_x"));
  T107 = YPsig(LITREF(lit_329),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_condition_151 = YPmet(FUNCODEREF(fun_alternative_condition_151),LITREF(lit_328),T107,ENVNUL,PNUL,sloc(272));
  T110 = BOUNDP(YevalSastYalternative_condition);
  if (T110 != YPfalse) {
    T109 = VARREF(YevalSastYalternative_condition);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_alternative_condition_151;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YevalSastYalternative_condition,T108);
  lit_330 = YPPsym((P)"alternative-condition-setter");
  lit_331 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T112 = YPsig(LITREF(lit_331),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_condition_setter_152 = YPmet(FUNCODEREF(fun_alternative_condition_setter_152),LITREF(lit_330),T112,ENVNUL,PNUL,sloc(272));
  T115 = BOUNDP(YevalSastYalternative_condition_setter);
  if (T115 != YPfalse) {
    T114 = VARREF(YevalSastYalternative_condition_setter);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_alternative_condition_setter_152;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YevalSastYalternative_condition_setter,T113);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_condition),VARREF(YevalSastYalternative_condition_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_332 = YPPsym((P)"alternative-consequent");
  lit_333 = YPPlist(1,YPPsym((P)"_x"));
  T117 = YPsig(LITREF(lit_333),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_153 = YPmet(FUNCODEREF(fun_alternative_consequent_153),LITREF(lit_332),T117,ENVNUL,PNUL,sloc(273));
  T120 = BOUNDP(YevalSastYalternative_consequent);
  if (T120 != YPfalse) {
    T119 = VARREF(YevalSastYalternative_consequent);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_alternative_consequent_153;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YevalSastYalternative_consequent,T118);
  lit_334 = YPPsym((P)"alternative-consequent-setter");
  lit_335 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T122 = YPsig(LITREF(lit_335),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_setter_154 = YPmet(FUNCODEREF(fun_alternative_consequent_setter_154),LITREF(lit_334),T122,ENVNUL,PNUL,sloc(273));
  T125 = BOUNDP(YevalSastYalternative_consequent_setter);
  if (T125 != YPfalse) {
    T124 = VARREF(YevalSastYalternative_consequent_setter);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_alternative_consequent_setter_154;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YevalSastYalternative_consequent_setter,T123);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_consequent),VARREF(YevalSastYalternative_consequent_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_336 = YPPsym((P)"alternative-alternant");
  lit_337 = YPPlist(1,YPPsym((P)"_x"));
  T127 = YPsig(LITREF(lit_337),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_155 = YPmet(FUNCODEREF(fun_alternative_alternant_155),LITREF(lit_336),T127,ENVNUL,PNUL,sloc(274));
  T130 = BOUNDP(YevalSastYalternative_alternant);
  if (T130 != YPfalse) {
    T129 = VARREF(YevalSastYalternative_alternant);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_alternative_alternant_155;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YevalSastYalternative_alternant,T128);
  lit_338 = YPPsym((P)"alternative-alternant-setter");
  lit_339 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T132 = YPsig(LITREF(lit_339),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_setter_156 = YPmet(FUNCODEREF(fun_alternative_alternant_setter_156),LITREF(lit_338),T132,ENVNUL,PNUL,sloc(274));
  T135 = BOUNDP(YevalSastYalternative_alternant_setter);
  if (T135 != YPfalse) {
    T134 = VARREF(YevalSastYalternative_alternant_setter);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_alternative_alternant_setter_156;
  T133 = XCALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YevalSastYalternative_alternant_setter,T133);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_alternant),VARREF(YevalSastYalternative_alternant_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_340 = YPPsym((P)"<sequential>");
  T139 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T138 = (P)YPpair(VARREF(YLlstG),T139);
  T137 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_340),T138);
  VARSET(YevalSastYLsequentialG,T137);
  T140 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLsequentialG));
  VARSET(YevalSastYDsequential_empty,T140);
  lit_341 = YPPsym((P)"sequential");
  lit_342 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T141 = YPsig(LITREF(lit_342),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYsequential = YPmet(FUNCODEREF(YevalSastYsequential),LITREF(lit_341),T141,ENVNUL,PNUL,sloc(276));
  T142 = YevalSastYsequential;
  VARSET(YevalSastYsequential,T142);
  lit_343 = YPPlist(1,YPPsym((P)"e"));
  T144 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLsequentialG));
  T143 = YPsig(LITREF(lit_343),YPPlist(1,T144),YPfalse,YPint((P)1),VARREF(YevalSastYLsequentialG),Ynil);
  fun_empty_158 = YPmet(FUNCODEREF(fun_empty_158),LITREF(lit_306),T143,ENVNUL,PNUL,sloc(276));
  T147 = BOUNDP(YgooScolsScolYempty);
  if (T147 != YPfalse) {
    T146 = VARREF(YgooScolsScolYempty);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_empty_158;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YgooScolsScolYempty,T145);
  lit_344 = YPPsym((P)"<constant>");
  T150 = (P)YPpair(VARREF(YevalSastYLpassive_programG),Ynil);
  T149 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_344),T150);
  VARSET(YevalSastYLconstantG,T149);
  lit_345 = YPPsym((P)"constant-value");
  lit_346 = YPPlist(1,YPPsym((P)"_x"));
  T151 = YPsig(LITREF(lit_346),YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_value_159 = YPmet(FUNCODEREF(fun_constant_value_159),LITREF(lit_345),T151,ENVNUL,PNUL,sloc(279));
  T154 = BOUNDP(YevalSastYconstant_value);
  if (T154 != YPfalse) {
    T153 = VARREF(YevalSastYconstant_value);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_constant_value_159;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YevalSastYconstant_value,T152);
  lit_347 = YPPsym((P)"constant-value-setter");
  lit_348 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T156 = YPsig(LITREF(lit_348),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_value_setter_160 = YPmet(FUNCODEREF(fun_constant_value_setter_160),LITREF(lit_347),T156,ENVNUL,PNUL,sloc(279));
  T159 = BOUNDP(YevalSastYconstant_value_setter);
  if (T159 != YPfalse) {
    T158 = VARREF(YevalSastYconstant_value_setter);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_constant_value_setter_160;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YevalSastYconstant_value_setter,T157);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),VARREF(YevalSastYconstant_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_349 = YPPsym((P)"constant-index");
  lit_350 = YPPlist(1,YPPsym((P)"_x"));
  T161 = YPsig(LITREF(lit_350),YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_index_161 = YPmet(FUNCODEREF(fun_constant_index_161),LITREF(lit_349),T161,ENVNUL,PNUL,sloc(280));
  T164 = BOUNDP(YevalSastYconstant_index);
  if (T164 != YPfalse) {
    T163 = VARREF(YevalSastYconstant_index);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_constant_index_161;
  T162 = XCALL2(1,VARREF(YPdefine_method),T163,T165);
  VARSET(YevalSastYconstant_index,T162);
  lit_351 = YPPsym((P)"constant-index-setter");
  lit_352 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T166 = YPsig(LITREF(lit_352),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_index_setter_162 = YPmet(FUNCODEREF(fun_constant_index_setter_162),LITREF(lit_351),T166,ENVNUL,PNUL,sloc(280));
  T169 = BOUNDP(YevalSastYconstant_index_setter);
  if (T169 != YPfalse) {
    T168 = VARREF(YevalSastYconstant_index_setter);
  } else {
    T168 = YPfalse;
  }
  T170 = fun_constant_index_setter_162;
  T167 = XCALL2(1,VARREF(YPdefine_method),T168,T170);
  VARSET(YevalSastYconstant_index_setter,T167);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_index),VARREF(YevalSastYconstant_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_353 = YPPsym((P)"<raw-constant>");
  T172 = (P)YPpair(VARREF(YevalSastYLconstantG),Ynil);
  T171 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_353),T172);
  VARSET(YevalSastYLraw_constantG,T171);
  lit_354 = YPPsym((P)"<immediate-constant>");
  T174 = (P)YPpair(VARREF(YevalSastYLconstantG),Ynil);
  T173 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_354),T174);
  VARSET(YevalSastYLimmediate_constantG,T173);
  lit_355 = YPPsym((P)"<application>");
  T176 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T175 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_355),T176);
  VARSET(YevalSastYLapplicationG,T175);
  lit_356 = YPPsym((P)"application-arguments");
  lit_357 = YPPlist(1,YPPsym((P)"_x"));
  T177 = YPsig(LITREF(lit_357),YPPlist(1,VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_arguments_163 = YPmet(FUNCODEREF(fun_application_arguments_163),LITREF(lit_356),T177,ENVNUL,PNUL,sloc(287));
  T180 = BOUNDP(YevalSastYapplication_arguments);
  if (T180 != YPfalse) {
    T179 = VARREF(YevalSastYapplication_arguments);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_application_arguments_163;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YevalSastYapplication_arguments,T178);
  lit_358 = YPPsym((P)"application-arguments-setter");
  lit_359 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T182 = YPsig(LITREF(lit_359),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_arguments_setter_164 = YPmet(FUNCODEREF(fun_application_arguments_setter_164),LITREF(lit_358),T182,ENVNUL,PNUL,sloc(287));
  T185 = BOUNDP(YevalSastYapplication_arguments_setter);
  if (T185 != YPfalse) {
    T184 = VARREF(YevalSastYapplication_arguments_setter);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_application_arguments_setter_164;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YevalSastYapplication_arguments_setter,T183);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLapplicationG),VARREF(YevalSastYapplication_arguments),VARREF(YevalSastYapplication_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_360 = YPPsym((P)"application-tail?");
  lit_361 = YPPlist(1,YPPsym((P)"_x"));
  T187 = YPsig(LITREF(lit_361),YPPlist(1,VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_tailQ_165 = YPmet(FUNCODEREF(fun_application_tailQ_165),LITREF(lit_360),T187,ENVNUL,PNUL,sloc(288));
  T190 = BOUNDP(YevalSastYapplication_tailQ);
  if (T190 != YPfalse) {
    T189 = VARREF(YevalSastYapplication_tailQ);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_application_tailQ_165;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YevalSastYapplication_tailQ,T188);
  lit_362 = YPPsym((P)"application-tail?-setter");
  lit_363 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T192 = YPsig(LITREF(lit_363),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_tailQ_setter_166 = YPmet(FUNCODEREF(fun_application_tailQ_setter_166),LITREF(lit_362),T192,ENVNUL,PNUL,sloc(288));
  T195 = BOUNDP(YevalSastYapplication_tailQ_setter);
  if (T195 != YPfalse) {
    T194 = VARREF(YevalSastYapplication_tailQ_setter);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_application_tailQ_setter_166;
  T193 = XCALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(YevalSastYapplication_tailQ_setter,T193);
  lit_364 = YPPlist(1,YPPsym((P)"_x"));
  T197 = YPsig(LITREF(lit_364),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_167 = YPmet(FUNCODEREF(fun_167),YPfalse,T197,ENVNUL,PNUL,sloc(288));
  T198 = fun_167;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLapplicationG),VARREF(YevalSastYapplication_tailQ),VARREF(YevalSastYapplication_tailQ_setter),VARREF(YLanyG),T198);
  lit_365 = YPPsym((P)"<regular-application>");
  T200 = (P)YPpair(VARREF(YevalSastYLapplicationG),Ynil);
  T199 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_365),T200);
  VARSET(YevalSastYLregular_applicationG,T199);
  lit_366 = YPPsym((P)"application-function");
  lit_367 = YPPlist(1,YPPsym((P)"_x"));
  T201 = YPsig(LITREF(lit_367),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_function_168 = YPmet(FUNCODEREF(fun_application_function_168),LITREF(lit_366),T201,ENVNUL,PNUL,sloc(291));
  T204 = BOUNDP(YevalSastYapplication_function);
  if (T204 != YPfalse) {
    T203 = VARREF(YevalSastYapplication_function);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_application_function_168;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(YevalSastYapplication_function,T202);
  lit_368 = YPPsym((P)"application-function-setter");
  lit_369 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T206 = YPsig(LITREF(lit_369),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_function_setter_169 = YPmet(FUNCODEREF(fun_application_function_setter_169),LITREF(lit_368),T206,ENVNUL,PNUL,sloc(291));
  T209 = BOUNDP(YevalSastYapplication_function_setter);
  if (T209 != YPfalse) {
    T208 = VARREF(YevalSastYapplication_function_setter);
  } else {
    T208 = YPfalse;
  }
  T210 = fun_application_function_setter_169;
  T207 = XCALL2(1,VARREF(YPdefine_method),T208,T210);
  VARSET(YevalSastYapplication_function_setter,T207);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_function),VARREF(YevalSastYapplication_function_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_370 = YPPsym((P)"application-known?");
  lit_371 = YPPlist(1,YPPsym((P)"_x"));
  T211 = YPsig(LITREF(lit_371),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_knownQ_170 = YPmet(FUNCODEREF(fun_application_knownQ_170),LITREF(lit_370),T211,ENVNUL,PNUL,sloc(292));
  T214 = BOUNDP(YevalSastYapplication_knownQ);
  if (T214 != YPfalse) {
    T213 = VARREF(YevalSastYapplication_knownQ);
  } else {
    T213 = YPfalse;
  }
  T215 = fun_application_knownQ_170;
  T212 = XCALL2(1,VARREF(YPdefine_method),T213,T215);
  VARSET(YevalSastYapplication_knownQ,T212);
  lit_372 = YPPsym((P)"application-known?-setter");
  lit_373 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T218 = YPsig(LITREF(lit_373),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T217 = fun_application_knownQ_setter_171 = YPmet(FUNCODEREF(fun_application_knownQ_setter_171),LITREF(lit_372),T218,ENVNUL,PNUL,sloc(292));
  T222 = BOUNDP(YevalSastYapplication_knownQ_setter);
  if (T222 != YPfalse) {
    T221 = VARREF(YevalSastYapplication_knownQ_setter);
  } else {
    T221 = YPfalse;
  }
  T223 = fun_application_knownQ_setter_171;
  T220 = XCALL2(1,VARREF(YPdefine_method),T221,T223);
  T219 = VARSET(YevalSastYapplication_knownQ_setter,T220);
  T216 = T219;
  return T216;
}

P YevalSastY___main_4___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204;
DEFCREGS();
loop:
  lit_374 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_374),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_172 = YPmet(FUNCODEREF(fun_172),YPfalse,T0,ENVNUL,PNUL,sloc(292));
  T1 = fun_172;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_knownQ),VARREF(YevalSastYapplication_knownQ_setter),VARREF(YLanyG),T1);
  lit_375 = YPPsym((P)"<method-application>");
  T3 = (P)YPpair(VARREF(YevalSastYLregular_applicationG),Ynil);
  T2 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_375),T3);
  VARSET(YevalSastYLmethod_applicationG,T2);
  lit_376 = YPPsym((P)"application-next-methods");
  lit_377 = YPPlist(1,YPPsym((P)"_x"));
  T4 = YPsig(LITREF(lit_377),YPPlist(1,VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_next_methods_173 = YPmet(FUNCODEREF(fun_application_next_methods_173),LITREF(lit_376),T4,ENVNUL,PNUL,sloc(295));
  T7 = BOUNDP(YevalSastYapplication_next_methods);
  if (T7 != YPfalse) {
    T6 = VARREF(YevalSastYapplication_next_methods);
  } else {
    T6 = YPfalse;
  }
  T8 = fun_application_next_methods_173;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T8);
  VARSET(YevalSastYapplication_next_methods,T5);
  lit_378 = YPPsym((P)"application-next-methods-setter");
  lit_379 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T9 = YPsig(LITREF(lit_379),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_next_methods_setter_174 = YPmet(FUNCODEREF(fun_application_next_methods_setter_174),LITREF(lit_378),T9,ENVNUL,PNUL,sloc(295));
  T12 = BOUNDP(YevalSastYapplication_next_methods_setter);
  if (T12 != YPfalse) {
    T11 = VARREF(YevalSastYapplication_next_methods_setter);
  } else {
    T11 = YPfalse;
  }
  T13 = fun_application_next_methods_setter_174;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T13);
  VARSET(YevalSastYapplication_next_methods_setter,T10);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmethod_applicationG),VARREF(YevalSastYapplication_next_methods),VARREF(YevalSastYapplication_next_methods_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_380 = YPPsym((P)"<predefined-application>");
  T15 = (P)YPpair(VARREF(YevalSastYLapplicationG),Ynil);
  T14 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_380),T15);
  VARSET(YevalSastYLpredefined_applicationG,T14);
  lit_381 = YPPsym((P)"application-binding");
  lit_382 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_382),YPPlist(1,VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_binding_175 = YPmet(FUNCODEREF(fun_application_binding_175),LITREF(lit_381),T16,ENVNUL,PNUL,sloc(298));
  T19 = BOUNDP(YevalSastYapplication_binding);
  if (T19 != YPfalse) {
    T18 = VARREF(YevalSastYapplication_binding);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_application_binding_175;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YevalSastYapplication_binding,T17);
  lit_383 = YPPsym((P)"application-binding-setter");
  lit_384 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T21 = YPsig(LITREF(lit_384),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_binding_setter_176 = YPmet(FUNCODEREF(fun_application_binding_setter_176),LITREF(lit_383),T21,ENVNUL,PNUL,sloc(298));
  T24 = BOUNDP(YevalSastYapplication_binding_setter);
  if (T24 != YPfalse) {
    T23 = VARREF(YevalSastYapplication_binding_setter);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_application_binding_setter_176;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YevalSastYapplication_binding_setter,T22);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),VARREF(YevalSastYapplication_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_385 = YPPsym((P)"<fix-let>");
  T27 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T26 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_385),T27);
  VARSET(YevalSastYLfix_letG,T26);
  lit_386 = YPPsym((P)"fix-let-bindings");
  lit_387 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPsig(LITREF(lit_387),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_177 = YPmet(FUNCODEREF(fun_fix_let_bindings_177),LITREF(lit_386),T28,ENVNUL,PNUL,sloc(301));
  T31 = BOUNDP(YevalSastYfix_let_bindings);
  if (T31 != YPfalse) {
    T30 = VARREF(YevalSastYfix_let_bindings);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_fix_let_bindings_177;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YevalSastYfix_let_bindings,T29);
  lit_388 = YPPsym((P)"fix-let-bindings-setter");
  lit_389 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T33 = YPsig(LITREF(lit_389),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_setter_178 = YPmet(FUNCODEREF(fun_fix_let_bindings_setter_178),LITREF(lit_388),T33,ENVNUL,PNUL,sloc(301));
  T36 = BOUNDP(YevalSastYfix_let_bindings_setter);
  if (T36 != YPfalse) {
    T35 = VARREF(YevalSastYfix_let_bindings_setter);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_fix_let_bindings_setter_178;
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YevalSastYfix_let_bindings_setter,T34);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_bindings),VARREF(YevalSastYfix_let_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_390 = YPPsym((P)"fix-let-types");
  lit_391 = YPPlist(1,YPPsym((P)"_x"));
  T38 = YPsig(LITREF(lit_391),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_types_179 = YPmet(FUNCODEREF(fun_fix_let_types_179),LITREF(lit_390),T38,ENVNUL,PNUL,sloc(302));
  T41 = BOUNDP(YevalSastYfix_let_types);
  if (T41 != YPfalse) {
    T40 = VARREF(YevalSastYfix_let_types);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_fix_let_types_179;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YevalSastYfix_let_types,T39);
  lit_392 = YPPsym((P)"fix-let-types-setter");
  lit_393 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T43 = YPsig(LITREF(lit_393),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_types_setter_180 = YPmet(FUNCODEREF(fun_fix_let_types_setter_180),LITREF(lit_392),T43,ENVNUL,PNUL,sloc(302));
  T46 = BOUNDP(YevalSastYfix_let_types_setter);
  if (T46 != YPfalse) {
    T45 = VARREF(YevalSastYfix_let_types_setter);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_fix_let_types_setter_180;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YevalSastYfix_let_types_setter,T44);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_types),VARREF(YevalSastYfix_let_types_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_394 = YPPsym((P)"fix-let-arguments");
  lit_395 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPsig(LITREF(lit_395),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_181 = YPmet(FUNCODEREF(fun_fix_let_arguments_181),LITREF(lit_394),T48,ENVNUL,PNUL,sloc(303));
  T51 = BOUNDP(YevalSastYfix_let_arguments);
  if (T51 != YPfalse) {
    T50 = VARREF(YevalSastYfix_let_arguments);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_fix_let_arguments_181;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YevalSastYfix_let_arguments,T49);
  lit_396 = YPPsym((P)"fix-let-arguments-setter");
  lit_397 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T53 = YPsig(LITREF(lit_397),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_setter_182 = YPmet(FUNCODEREF(fun_fix_let_arguments_setter_182),LITREF(lit_396),T53,ENVNUL,PNUL,sloc(303));
  T56 = BOUNDP(YevalSastYfix_let_arguments_setter);
  if (T56 != YPfalse) {
    T55 = VARREF(YevalSastYfix_let_arguments_setter);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_fix_let_arguments_setter_182;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YevalSastYfix_let_arguments_setter,T54);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_arguments),VARREF(YevalSastYfix_let_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_398 = YPPsym((P)"fix-let-body");
  lit_399 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPsig(LITREF(lit_399),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_body_183 = YPmet(FUNCODEREF(fun_fix_let_body_183),LITREF(lit_398),T58,ENVNUL,PNUL,sloc(304));
  T61 = BOUNDP(YevalSastYfix_let_body);
  if (T61 != YPfalse) {
    T60 = VARREF(YevalSastYfix_let_body);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_fix_let_body_183;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YevalSastYfix_let_body,T59);
  lit_400 = YPPsym((P)"fix-let-body-setter");
  lit_401 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T63 = YPsig(LITREF(lit_401),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_body_setter_184 = YPmet(FUNCODEREF(fun_fix_let_body_setter_184),LITREF(lit_400),T63,ENVNUL,PNUL,sloc(304));
  T66 = BOUNDP(YevalSastYfix_let_body_setter);
  if (T66 != YPfalse) {
    T65 = VARREF(YevalSastYfix_let_body_setter);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_fix_let_body_setter_184;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YevalSastYfix_let_body_setter,T64);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_body),VARREF(YevalSastYfix_let_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_402 = YPPsym((P)"<low-let>");
  T69 = (P)YPpair(VARREF(YevalSastYLfix_letG),Ynil);
  T68 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_402),T69);
  VARSET(YevalSastYLlow_letG,T68);
  lit_403 = YPPsym((P)"<fab-list>");
  T72 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T71 = (P)YPpair(VARREF(YLlstG),T72);
  T70 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_403),T71);
  VARSET(YevalSastYLfab_listG,T70);
  T73 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG));
  VARSET(YevalSastYDfab_list_empty,T73);
  lit_404 = YPPsym((P)"fab-list");
  lit_405 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T74 = YPsig(LITREF(lit_405),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfab_list = YPmet(FUNCODEREF(YevalSastYfab_list),LITREF(lit_404),T74,ENVNUL,PNUL,sloc(308));
  T75 = YevalSastYfab_list;
  VARSET(YevalSastYfab_list,T75);
  lit_406 = YPPlist(1,YPPsym((P)"e"));
  T77 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfab_listG));
  T76 = YPsig(LITREF(lit_406),YPPlist(1,T77),YPfalse,YPint((P)1),VARREF(YevalSastYLfab_listG),Ynil);
  fun_empty_186 = YPmet(FUNCODEREF(fun_empty_186),LITREF(lit_306),T76,ENVNUL,PNUL,sloc(308));
  T80 = BOUNDP(YgooScolsScolYempty);
  if (T80 != YPfalse) {
    T79 = VARREF(YgooScolsScolYempty);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_empty_186;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YgooScolsScolYempty,T78);
  lit_407 = YPPsym((P)"<arguments>");
  T84 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T83 = (P)YPpair(VARREF(YLlstG),T84);
  T82 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_407),T83);
  VARSET(YevalSastYLargumentsG,T82);
  T85 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLargumentsG));
  VARSET(YevalSastYDarguments_empty,T85);
  lit_408 = YPPsym((P)"arguments");
  lit_409 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T86 = YPsig(LITREF(lit_409),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYarguments = YPmet(FUNCODEREF(YevalSastYarguments),LITREF(lit_408),T86,ENVNUL,PNUL,sloc(310));
  T87 = YevalSastYarguments;
  VARSET(YevalSastYarguments,T87);
  lit_410 = YPPlist(1,YPPsym((P)"e"));
  T89 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLargumentsG));
  T88 = YPsig(LITREF(lit_410),YPPlist(1,T89),YPfalse,YPint((P)1),VARREF(YevalSastYLargumentsG),Ynil);
  fun_empty_188 = YPmet(FUNCODEREF(fun_empty_188),LITREF(lit_306),T88,ENVNUL,PNUL,sloc(310));
  T92 = BOUNDP(YgooScolsScolYempty);
  if (T92 != YPfalse) {
    T91 = VARREF(YgooScolsScolYempty);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_empty_188;
  T90 = XCALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YgooScolsScolYempty,T90);
  lit_411 = YPPsym((P)"<locals>");
  T95 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T94 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_411),T95);
  VARSET(YevalSastYLlocalsG,T94);
  lit_412 = YPPsym((P)"locals-bindings");
  lit_413 = YPPlist(1,YPPsym((P)"_x"));
  T96 = YPsig(LITREF(lit_413),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_bindings_189 = YPmet(FUNCODEREF(fun_locals_bindings_189),LITREF(lit_412),T96,ENVNUL,PNUL,sloc(313));
  T99 = BOUNDP(YevalSastYlocals_bindings);
  if (T99 != YPfalse) {
    T98 = VARREF(YevalSastYlocals_bindings);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_locals_bindings_189;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YevalSastYlocals_bindings,T97);
  lit_414 = YPPsym((P)"locals-bindings-setter");
  lit_415 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T101 = YPsig(LITREF(lit_415),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_bindings_setter_190 = YPmet(FUNCODEREF(fun_locals_bindings_setter_190),LITREF(lit_414),T101,ENVNUL,PNUL,sloc(313));
  T104 = BOUNDP(YevalSastYlocals_bindings_setter);
  if (T104 != YPfalse) {
    T103 = VARREF(YevalSastYlocals_bindings_setter);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_locals_bindings_setter_190;
  T102 = XCALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YevalSastYlocals_bindings_setter,T102);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_bindings),VARREF(YevalSastYlocals_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_416 = YPPsym((P)"locals-functions");
  lit_417 = YPPlist(1,YPPsym((P)"_x"));
  T106 = YPsig(LITREF(lit_417),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_functions_191 = YPmet(FUNCODEREF(fun_locals_functions_191),LITREF(lit_416),T106,ENVNUL,PNUL,sloc(314));
  T109 = BOUNDP(YevalSastYlocals_functions);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalSastYlocals_functions);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_locals_functions_191;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalSastYlocals_functions,T107);
  lit_418 = YPPsym((P)"locals-functions-setter");
  lit_419 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T111 = YPsig(LITREF(lit_419),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_functions_setter_192 = YPmet(FUNCODEREF(fun_locals_functions_setter_192),LITREF(lit_418),T111,ENVNUL,PNUL,sloc(314));
  T114 = BOUNDP(YevalSastYlocals_functions_setter);
  if (T114 != YPfalse) {
    T113 = VARREF(YevalSastYlocals_functions_setter);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_locals_functions_setter_192;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YevalSastYlocals_functions_setter,T112);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_functions),VARREF(YevalSastYlocals_functions_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_420 = YPPsym((P)"locals-body");
  lit_421 = YPPlist(1,YPPsym((P)"_x"));
  T116 = YPsig(LITREF(lit_421),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_body_193 = YPmet(FUNCODEREF(fun_locals_body_193),LITREF(lit_420),T116,ENVNUL,PNUL,sloc(315));
  T119 = BOUNDP(YevalSastYlocals_body);
  if (T119 != YPfalse) {
    T118 = VARREF(YevalSastYlocals_body);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_locals_body_193;
  T117 = XCALL2(1,VARREF(YPdefine_method),T118,T120);
  VARSET(YevalSastYlocals_body,T117);
  lit_422 = YPPsym((P)"locals-body-setter");
  lit_423 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T121 = YPsig(LITREF(lit_423),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_body_setter_194 = YPmet(FUNCODEREF(fun_locals_body_setter_194),LITREF(lit_422),T121,ENVNUL,PNUL,sloc(315));
  T124 = BOUNDP(YevalSastYlocals_body_setter);
  if (T124 != YPfalse) {
    T123 = VARREF(YevalSastYlocals_body_setter);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_locals_body_setter_194;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(YevalSastYlocals_body_setter,T122);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_body),VARREF(YevalSastYlocals_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_424 = YPPsym((P)"<bind-exit>");
  T127 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T126 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_424),T127);
  VARSET(YevalSastYLbind_exitG,T126);
  lit_425 = YPPsym((P)"bind-exit-main-fun");
  lit_426 = YPPlist(1,YPPsym((P)"_x"));
  T128 = YPsig(LITREF(lit_426),YPPlist(1,VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_195 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_195),LITREF(lit_425),T128,ENVNUL,PNUL,sloc(318));
  T131 = BOUNDP(YevalSastYbind_exit_main_fun);
  if (T131 != YPfalse) {
    T130 = VARREF(YevalSastYbind_exit_main_fun);
  } else {
    T130 = YPfalse;
  }
  T132 = fun_bind_exit_main_fun_195;
  T129 = XCALL2(1,VARREF(YPdefine_method),T130,T132);
  VARSET(YevalSastYbind_exit_main_fun,T129);
  lit_427 = YPPsym((P)"bind-exit-main-fun-setter");
  lit_428 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T133 = YPsig(LITREF(lit_428),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_setter_196 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_setter_196),LITREF(lit_427),T133,ENVNUL,PNUL,sloc(318));
  T136 = BOUNDP(YevalSastYbind_exit_main_fun_setter);
  if (T136 != YPfalse) {
    T135 = VARREF(YevalSastYbind_exit_main_fun_setter);
  } else {
    T135 = YPfalse;
  }
  T137 = fun_bind_exit_main_fun_setter_196;
  T134 = XCALL2(1,VARREF(YPdefine_method),T135,T137);
  VARSET(YevalSastYbind_exit_main_fun_setter,T134);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLbind_exitG),VARREF(YevalSastYbind_exit_main_fun),VARREF(YevalSastYbind_exit_main_fun_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_429 = YPPsym((P)"<unwind-protect>");
  T139 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T138 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_429),T139);
  VARSET(YevalSastYLunwind_protectG,T138);
  lit_430 = YPPsym((P)"unwind-protect-protected-thunk");
  lit_431 = YPPlist(1,YPPsym((P)"_x"));
  T140 = YPsig(LITREF(lit_431),YPPlist(1,VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_197 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_197),LITREF(lit_430),T140,ENVNUL,PNUL,sloc(321));
  T143 = BOUNDP(YevalSastYunwind_protect_protected_thunk);
  if (T143 != YPfalse) {
    T142 = VARREF(YevalSastYunwind_protect_protected_thunk);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_unwind_protect_protected_thunk_197;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YevalSastYunwind_protect_protected_thunk,T141);
  lit_432 = YPPsym((P)"unwind-protect-protected-thunk-setter");
  lit_433 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T145 = YPsig(LITREF(lit_433),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_setter_198 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_setter_198),LITREF(lit_432),T145,ENVNUL,PNUL,sloc(321));
  T148 = BOUNDP(YevalSastYunwind_protect_protected_thunk_setter);
  if (T148 != YPfalse) {
    T147 = VARREF(YevalSastYunwind_protect_protected_thunk_setter);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_unwind_protect_protected_thunk_setter_198;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YevalSastYunwind_protect_protected_thunk_setter,T146);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_protected_thunk),VARREF(YevalSastYunwind_protect_protected_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_434 = YPPsym((P)"unwind-protect-cleanup-thunk");
  lit_435 = YPPlist(1,YPPsym((P)"_x"));
  T150 = YPsig(LITREF(lit_435),YPPlist(1,VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_199 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_199),LITREF(lit_434),T150,ENVNUL,PNUL,sloc(322));
  T153 = BOUNDP(YevalSastYunwind_protect_cleanup_thunk);
  if (T153 != YPfalse) {
    T152 = VARREF(YevalSastYunwind_protect_cleanup_thunk);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_unwind_protect_cleanup_thunk_199;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YevalSastYunwind_protect_cleanup_thunk,T151);
  lit_436 = YPPsym((P)"unwind-protect-cleanup-thunk-setter");
  lit_437 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T155 = YPsig(LITREF(lit_437),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_setter_200 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_setter_200),LITREF(lit_436),T155,ENVNUL,PNUL,sloc(322));
  T158 = BOUNDP(YevalSastYunwind_protect_cleanup_thunk_setter);
  if (T158 != YPfalse) {
    T157 = VARREF(YevalSastYunwind_protect_cleanup_thunk_setter);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_unwind_protect_cleanup_thunk_setter_200;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YevalSastYunwind_protect_cleanup_thunk_setter,T156);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_cleanup_thunk),VARREF(YevalSastYunwind_protect_cleanup_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_438 = YPPsym((P)"<monitor>");
  T161 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T160 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_438),T161);
  VARSET(YevalSastYLmonitorG,T160);
  lit_439 = YPPsym((P)"monitor-type");
  lit_440 = YPPlist(1,YPPsym((P)"_x"));
  T162 = YPsig(LITREF(lit_440),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_type_201 = YPmet(FUNCODEREF(fun_monitor_type_201),LITREF(lit_439),T162,ENVNUL,PNUL,sloc(325));
  T165 = BOUNDP(YevalSastYmonitor_type);
  if (T165 != YPfalse) {
    T164 = VARREF(YevalSastYmonitor_type);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_monitor_type_201;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YevalSastYmonitor_type,T163);
  lit_441 = YPPsym((P)"monitor-type-setter");
  lit_442 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T167 = YPsig(LITREF(lit_442),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_type_setter_202 = YPmet(FUNCODEREF(fun_monitor_type_setter_202),LITREF(lit_441),T167,ENVNUL,PNUL,sloc(325));
  T170 = BOUNDP(YevalSastYmonitor_type_setter);
  if (T170 != YPfalse) {
    T169 = VARREF(YevalSastYmonitor_type_setter);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_monitor_type_setter_202;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YevalSastYmonitor_type_setter,T168);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_type),VARREF(YevalSastYmonitor_type_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_443 = YPPsym((P)"monitor-info");
  lit_444 = YPPlist(1,YPPsym((P)"_x"));
  T172 = YPsig(LITREF(lit_444),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_info_203 = YPmet(FUNCODEREF(fun_monitor_info_203),LITREF(lit_443),T172,ENVNUL,PNUL,sloc(326));
  T175 = BOUNDP(YevalSastYmonitor_info);
  if (T175 != YPfalse) {
    T174 = VARREF(YevalSastYmonitor_info);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_monitor_info_203;
  T173 = XCALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YevalSastYmonitor_info,T173);
  lit_445 = YPPsym((P)"monitor-info-setter");
  lit_446 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T177 = YPsig(LITREF(lit_446),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_info_setter_204 = YPmet(FUNCODEREF(fun_monitor_info_setter_204),LITREF(lit_445),T177,ENVNUL,PNUL,sloc(326));
  T180 = BOUNDP(YevalSastYmonitor_info_setter);
  if (T180 != YPfalse) {
    T179 = VARREF(YevalSastYmonitor_info_setter);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_monitor_info_setter_204;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YevalSastYmonitor_info_setter,T178);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_info),VARREF(YevalSastYmonitor_info_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_447 = YPPsym((P)"monitor-test");
  lit_448 = YPPlist(1,YPPsym((P)"_x"));
  T182 = YPsig(LITREF(lit_448),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_test_205 = YPmet(FUNCODEREF(fun_monitor_test_205),LITREF(lit_447),T182,ENVNUL,PNUL,sloc(327));
  T185 = BOUNDP(YevalSastYmonitor_test);
  if (T185 != YPfalse) {
    T184 = VARREF(YevalSastYmonitor_test);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_monitor_test_205;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YevalSastYmonitor_test,T183);
  lit_449 = YPPsym((P)"monitor-test-setter");
  lit_450 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T187 = YPsig(LITREF(lit_450),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_test_setter_206 = YPmet(FUNCODEREF(fun_monitor_test_setter_206),LITREF(lit_449),T187,ENVNUL,PNUL,sloc(327));
  T190 = BOUNDP(YevalSastYmonitor_test_setter);
  if (T190 != YPfalse) {
    T189 = VARREF(YevalSastYmonitor_test_setter);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_monitor_test_setter_206;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YevalSastYmonitor_test_setter,T188);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_test),VARREF(YevalSastYmonitor_test_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_451 = YPPsym((P)"monitor-handler");
  lit_452 = YPPlist(1,YPPsym((P)"_x"));
  T192 = YPsig(LITREF(lit_452),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_handler_207 = YPmet(FUNCODEREF(fun_monitor_handler_207),LITREF(lit_451),T192,ENVNUL,PNUL,sloc(328));
  T195 = BOUNDP(YevalSastYmonitor_handler);
  if (T195 != YPfalse) {
    T194 = VARREF(YevalSastYmonitor_handler);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_monitor_handler_207;
  T193 = XCALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(YevalSastYmonitor_handler,T193);
  lit_453 = YPPsym((P)"monitor-handler-setter");
  lit_454 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T199 = YPsig(LITREF(lit_454),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T198 = fun_monitor_handler_setter_208 = YPmet(FUNCODEREF(fun_monitor_handler_setter_208),LITREF(lit_453),T199,ENVNUL,PNUL,sloc(328));
  T203 = BOUNDP(YevalSastYmonitor_handler_setter);
  if (T203 != YPfalse) {
    T202 = VARREF(YevalSastYmonitor_handler_setter);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_monitor_handler_setter_208;
  T201 = XCALL2(1,VARREF(YPdefine_method),T202,T204);
  T200 = VARSET(YevalSastYmonitor_handler_setter,T201);
  T197 = T200;
  return T197;
}

P YevalSastY___main_5___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206,T207;
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220,T221,T222,T223;
  P T224,T225,T226,T227,T228,T229,T230,T231,T232,T233,T234,T235,T236,T237,T238,T239;
  P T240,T241,T242,T243,T244,T245,T246,T247,T248,T249,T250,T251,T252,T253,T254,T255;
  P T256,T257,T258,T259,T260,T261,T262,T263,T264,T265,T266,T267,T268,T269,T270,T271;
  P T272,T273,T274,T275,T276,T277,T278,T279,T280,T281,T282,T283,T284;
DEFCREGS();
loop:
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_handler),VARREF(YevalSastYmonitor_handler_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_455 = YPPsym((P)"monitor-main-thunk");
  lit_456 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_456),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_209 = YPmet(FUNCODEREF(fun_monitor_main_thunk_209),LITREF(lit_455),T0,ENVNUL,PNUL,sloc(329));
  T3 = BOUNDP(YevalSastYmonitor_main_thunk);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSastYmonitor_main_thunk);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_monitor_main_thunk_209;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSastYmonitor_main_thunk,T1);
  lit_457 = YPPsym((P)"monitor-main-thunk-setter");
  lit_458 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T5 = YPsig(LITREF(lit_458),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_setter_210 = YPmet(FUNCODEREF(fun_monitor_main_thunk_setter_210),LITREF(lit_457),T5,ENVNUL,PNUL,sloc(329));
  T8 = BOUNDP(YevalSastYmonitor_main_thunk_setter);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSastYmonitor_main_thunk_setter);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_monitor_main_thunk_setter_210;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSastYmonitor_main_thunk_setter,T6);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_main_thunk),VARREF(YevalSastYmonitor_main_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_459 = YPPsym((P)"ast-walk!");
  lit_460 = YPPlist(3,YPPsym((P)"g"),YPPsym((P)"o"),YPPsym((P)"args"));
  lit_461 = YPPsym((P)"x-1441");
  lit_462 = YPPlist(1,YPPsym((P)"x-1440"));
  T11 = YPsig(LITREF(lit_462),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1441_211 = YPmet(FUNCODEREF(fun_x_1441_211),LITREF(lit_461),T11,ENVNUL,PNUL,sloc(335));
  T10 = YPsig(LITREF(lit_460),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walkX_212 = YPmet(FUNCODEREF(fun_ast_walkX_212),LITREF(lit_459),T10,ENVNUL,PNUL,sloc(333));
  T14 = BOUNDP(YevalSastYast_walkX);
  if (T14 != YPfalse) {
    T13 = VARREF(YevalSastYast_walkX);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_ast_walkX_212;
  T12 = XCALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YevalSastYast_walkX,T12);
  lit_463 = YPPsym((P)"ast-walk");
  lit_464 = YPPlist(3,YPPsym((P)"g"),YPPsym((P)"o"),YPPsym((P)"args"));
  lit_465 = YPPsym((P)"x-1443");
  lit_466 = YPPlist(1,YPPsym((P)"x-1442"));
  T17 = YPsig(LITREF(lit_466),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1443_213 = YPmet(FUNCODEREF(fun_x_1443_213),LITREF(lit_465),T17,ENVNUL,PNUL,sloc(348));
  T16 = YPsig(LITREF(lit_464),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walk_214 = YPmet(FUNCODEREF(fun_ast_walk_214),LITREF(lit_463),T16,ENVNUL,PNUL,sloc(347));
  T20 = BOUNDP(YevalSastYast_walk);
  if (T20 != YPfalse) {
    T19 = VARREF(YevalSastYast_walk);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_ast_walk_214;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YevalSastYast_walk,T18);
  lit_467 = YPPsym((P)"ast-copy");
  lit_468 = YPPlist(1,YPPsym((P)"x"));
  T22 = YPsig(LITREF(lit_468),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_copy_215 = YPmet(FUNCODEREF(fun_ast_copy_215),LITREF(lit_467),T22,ENVNUL,PNUL,sloc(357));
  T25 = BOUNDP(YevalSastYast_copy);
  if (T25 != YPfalse) {
    T24 = VARREF(YevalSastYast_copy);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_ast_copy_215;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YevalSastYast_copy,T23);
  lit_469 = YPPlist(1,YPPsym((P)"x"));
  T27 = YPsig(LITREF(lit_469),YPPlist(1,VARREF(YevalSastYLprogramsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_copy_216 = YPmet(FUNCODEREF(fun_ast_copy_216),LITREF(lit_467),T27,ENVNUL,PNUL,sloc(362));
  T30 = BOUNDP(YevalSastYast_copy);
  if (T30 != YPfalse) {
    T29 = VARREF(YevalSastYast_copy);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_ast_copy_216;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YevalSastYast_copy,T28);
  lit_470 = YPPsym((P)"<static-environment>");
  T33 = (P)YPpair(VARREF(YLanyG),Ynil);
  T32 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_470),T33);
  VARSET(YevalSastYLstatic_environmentG,T32);
  lit_471 = YPPsym((P)"environment-next");
  lit_472 = YPPlist(1,YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_472),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_next_217 = YPmet(FUNCODEREF(fun_environment_next_217),LITREF(lit_471),T34,ENVNUL,PNUL,sloc(370));
  T37 = BOUNDP(YevalSastYenvironment_next);
  if (T37 != YPfalse) {
    T36 = VARREF(YevalSastYenvironment_next);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_environment_next_217;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YevalSastYenvironment_next,T35);
  lit_473 = YPPsym((P)"environment-next-setter");
  lit_474 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T39 = YPsig(LITREF(lit_474),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_next_setter_218 = YPmet(FUNCODEREF(fun_environment_next_setter_218),LITREF(lit_473),T39,ENVNUL,PNUL,sloc(370));
  T42 = BOUNDP(YevalSastYenvironment_next_setter);
  if (T42 != YPfalse) {
    T41 = VARREF(YevalSastYenvironment_next_setter);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_environment_next_setter_218;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YevalSastYenvironment_next_setter,T40);
  lit_475 = YPPlist(1,YPPsym((P)"_x"));
  T44 = YPsig(LITREF(lit_475),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_219 = YPmet(FUNCODEREF(fun_219),YPfalse,T44,ENVNUL,PNUL,sloc(370));
  T45 = fun_219;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_environmentG),VARREF(YevalSastYenvironment_next),VARREF(YevalSastYenvironment_next_setter),VARREF(YLanyG),T45);
  lit_476 = YPPsym((P)"environment-bindings");
  lit_477 = YPPlist(1,YPPsym((P)"_x"));
  T46 = YPsig(LITREF(lit_477),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_bindings_220 = YPmet(FUNCODEREF(fun_environment_bindings_220),LITREF(lit_476),T46,ENVNUL,PNUL,sloc(371));
  T49 = BOUNDP(YevalSastYenvironment_bindings);
  if (T49 != YPfalse) {
    T48 = VARREF(YevalSastYenvironment_bindings);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_environment_bindings_220;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YevalSastYenvironment_bindings,T47);
  lit_478 = YPPsym((P)"environment-bindings-setter");
  lit_479 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T51 = YPsig(LITREF(lit_479),YPPlist(2,VARREF(YLcolG),VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_bindings_setter_221 = YPmet(FUNCODEREF(fun_environment_bindings_setter_221),LITREF(lit_478),T51,ENVNUL,PNUL,sloc(371));
  T54 = BOUNDP(YevalSastYenvironment_bindings_setter);
  if (T54 != YPfalse) {
    T53 = VARREF(YevalSastYenvironment_bindings_setter);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_environment_bindings_setter_221;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YevalSastYenvironment_bindings_setter,T52);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_environmentG),VARREF(YevalSastYenvironment_bindings),VARREF(YevalSastYenvironment_bindings_setter),VARREF(YLcolG),VARREF(YPprop_unbound_error));
  lit_480 = YPPsym((P)"<static-global-environment>");
  T57 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T56 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_480),T57);
  VARSET(YevalSastYLstatic_global_environmentG,T56);
  lit_481 = YPPsym((P)"environment-module");
  lit_482 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPsig(LITREF(lit_482),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_module_222 = YPmet(FUNCODEREF(fun_environment_module_222),LITREF(lit_481),T58,ENVNUL,PNUL,sloc(375));
  T61 = BOUNDP(YevalSastYenvironment_module);
  if (T61 != YPfalse) {
    T60 = VARREF(YevalSastYenvironment_module);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_environment_module_222;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YevalSastYenvironment_module,T59);
  lit_483 = YPPsym((P)"environment-module-setter");
  lit_484 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T63 = YPsig(LITREF(lit_484),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_setter_223 = YPmet(FUNCODEREF(fun_environment_module_setter_223),LITREF(lit_483),T63,ENVNUL,PNUL,sloc(375));
  T66 = BOUNDP(YevalSastYenvironment_module_setter);
  if (T66 != YPfalse) {
    T65 = VARREF(YevalSastYenvironment_module_setter);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_environment_module_setter_223;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YevalSastYenvironment_module_setter,T64);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module),VARREF(YevalSastYenvironment_module_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_485 = YPPsym((P)"environment-module-loader");
  lit_486 = YPPlist(1,YPPsym((P)"_x"));
  T68 = YPsig(LITREF(lit_486),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_224 = YPmet(FUNCODEREF(fun_environment_module_loader_224),LITREF(lit_485),T68,ENVNUL,PNUL,sloc(378));
  T71 = BOUNDP(YevalSastYenvironment_module_loader);
  if (T71 != YPfalse) {
    T70 = VARREF(YevalSastYenvironment_module_loader);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_environment_module_loader_224;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YevalSastYenvironment_module_loader,T69);
  lit_487 = YPPsym((P)"environment-module-loader-setter");
  lit_488 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T73 = YPsig(LITREF(lit_488),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_setter_225 = YPmet(FUNCODEREF(fun_environment_module_loader_setter_225),LITREF(lit_487),T73,ENVNUL,PNUL,sloc(378));
  T76 = BOUNDP(YevalSastYenvironment_module_loader_setter);
  if (T76 != YPfalse) {
    T75 = VARREF(YevalSastYenvironment_module_loader_setter);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_environment_module_loader_setter_225;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YevalSastYenvironment_module_loader_setter,T74);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module_loader),VARREF(YevalSastYenvironment_module_loader_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_489 = YPPsym((P)"environment-uses-modules");
  lit_490 = YPPlist(1,YPPsym((P)"_x"));
  T78 = YPsig(LITREF(lit_490),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_226 = YPmet(FUNCODEREF(fun_environment_uses_modules_226),LITREF(lit_489),T78,ENVNUL,PNUL,sloc(380));
  T81 = BOUNDP(YevalSastYenvironment_uses_modules);
  if (T81 != YPfalse) {
    T80 = VARREF(YevalSastYenvironment_uses_modules);
  } else {
    T80 = YPfalse;
  }
  T82 = fun_environment_uses_modules_226;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T82);
  VARSET(YevalSastYenvironment_uses_modules,T79);
  lit_491 = YPPsym((P)"environment-uses-modules-setter");
  lit_492 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T83 = YPsig(LITREF(lit_492),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_setter_227 = YPmet(FUNCODEREF(fun_environment_uses_modules_setter_227),LITREF(lit_491),T83,ENVNUL,PNUL,sloc(380));
  T86 = BOUNDP(YevalSastYenvironment_uses_modules_setter);
  if (T86 != YPfalse) {
    T85 = VARREF(YevalSastYenvironment_uses_modules_setter);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_environment_uses_modules_setter_227;
  T84 = XCALL2(1,VARREF(YPdefine_method),T85,T87);
  VARSET(YevalSastYenvironment_uses_modules_setter,T84);
  lit_493 = YPPlist(1,YPPsym((P)"_x"));
  T88 = YPsig(LITREF(lit_493),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_228 = YPmet(FUNCODEREF(fun_228),YPfalse,T88,ENVNUL,PNUL,sloc(380));
  T89 = fun_228;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_uses_modules),VARREF(YevalSastYenvironment_uses_modules_setter),VARREF(YgooScolsSvecYLvecG),T89);
  lit_494 = YPPsym((P)"environment-allows-foreign-names?");
  lit_495 = YPPlist(1,YPPsym((P)"_x"));
  T90 = YPsig(LITREF(lit_495),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_229 = YPmet(FUNCODEREF(fun_environment_allows_foreign_namesQ_229),LITREF(lit_494),T90,ENVNUL,PNUL,sloc(384));
  T93 = BOUNDP(YevalSastYenvironment_allows_foreign_namesQ);
  if (T93 != YPfalse) {
    T92 = VARREF(YevalSastYenvironment_allows_foreign_namesQ);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_environment_allows_foreign_namesQ_229;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YevalSastYenvironment_allows_foreign_namesQ,T91);
  lit_496 = YPPsym((P)"environment-allows-foreign-names?-setter");
  lit_497 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T95 = YPsig(LITREF(lit_497),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_setter_230 = YPmet(FUNCODEREF(fun_environment_allows_foreign_namesQ_setter_230),LITREF(lit_496),T95,ENVNUL,PNUL,sloc(384));
  T98 = BOUNDP(YevalSastYenvironment_allows_foreign_namesQ_setter);
  if (T98 != YPfalse) {
    T97 = VARREF(YevalSastYenvironment_allows_foreign_namesQ_setter);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_environment_allows_foreign_namesQ_setter_230;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YevalSastYenvironment_allows_foreign_namesQ_setter,T96);
  lit_498 = YPPlist(1,YPPsym((P)"_x"));
  T100 = YPsig(LITREF(lit_498),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_231 = YPmet(FUNCODEREF(fun_231),YPfalse,T100,ENVNUL,PNUL,sloc(384));
  T101 = fun_231;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_allows_foreign_namesQ),VARREF(YevalSastYenvironment_allows_foreign_namesQ_setter),VARREF(YLlogG),T101);
  lit_499 = YPPsym((P)"<static-empty-environment>");
  T103 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T102 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_499),T103);
  VARSET(YevalSastYLstatic_empty_environmentG,T102);
  T104 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLstatic_empty_environmentG));
  VARSET(YevalSastYDempty_static_environment,T104);
  lit_500 = YPPsym((P)"<static-local-environment>");
  T106 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T105 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_500),T106);
  VARSET(YevalSastYLstatic_local_environmentG,T105);
  lit_501 = YPPsym((P)"env-object-name");
  lit_502 = YPPlist(1,YPPsym((P)"x"));
  lit_503 = YPPlist(1,YPPsym((P)"return"));
  lit_504 = YPPlist(1,YPPsym((P)"binding"));
  T109 = YPsig(LITREF(lit_504),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_232 = YPmet(FUNCODEREF(fun_232),YPfalse,T109,ENVNUL,PNUL,sloc(401));
  T108 = YPsig(LITREF(lit_503),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_233 = YPmet(FUNCODEREF(fun_233),YPfalse,T108,ENVNUL,PNUL,sloc(399));
  T107 = YPsig(LITREF(lit_502),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_object_name_234 = YPmet(FUNCODEREF(fun_env_object_name_234),LITREF(lit_501),T107,ENVNUL,PNUL,sloc(398));
  T112 = BOUNDP(YevalSastYenv_object_name);
  if (T112 != YPfalse) {
    T111 = VARREF(YevalSastYenv_object_name);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_env_object_name_234;
  T110 = XCALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(YevalSastYenv_object_name,T110);
  lit_505 = YPPsym((P)"objectify");
  lit_506 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T114 = YPsig(LITREF(lit_506),YPPlist(3,VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_235 = YPmet(FUNCODEREF(fun_objectify_235),LITREF(lit_505),T114,ENVNUL,PNUL,sloc(411));
  T117 = BOUNDP(YevalSastYobjectify);
  if (T117 != YPfalse) {
    T116 = VARREF(YevalSastYobjectify);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_objectify_235;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YevalSastYobjectify,T115);
  lit_507 = YPPsym((P)"objectify-list");
  lit_508 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T119 = YPsig(LITREF(lit_508),YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_236 = YPmet(FUNCODEREF(fun_objectify_list_236),LITREF(lit_507),T119,ENVNUL,PNUL,sloc(416));
  T122 = BOUNDP(YevalSastYobjectify_list);
  if (T122 != YPfalse) {
    T121 = VARREF(YevalSastYobjectify_list);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_objectify_list_236;
  T120 = XCALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YevalSastYobjectify_list,T120);
  lit_509 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T124 = YPsig(LITREF(lit_509),YPPlist(4,VARREF(YevalSastYLmagic_referenceG),VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_237 = YPmet(FUNCODEREF(fun_objectify_list_237),LITREF(lit_507),T124,ENVNUL,PNUL,sloc(420));
  T127 = BOUNDP(YevalSastYobjectify_list);
  if (T127 != YPfalse) {
    T126 = VARREF(YevalSastYobjectify_list);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_objectify_list_237;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YevalSastYobjectify_list,T125);
  lit_510 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T129 = YPsig(LITREF(lit_510),YPPlist(4,VARREF(YevalSastYLmacro_referenceG),VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_238 = YPmet(FUNCODEREF(fun_objectify_list_238),LITREF(lit_507),T129,ENVNUL,PNUL,sloc(424));
  T132 = BOUNDP(YevalSastYobjectify_list);
  if (T132 != YPfalse) {
    T131 = VARREF(YevalSastYobjectify_list);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_objectify_list_238;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YevalSastYobjectify_list,T130);
  lit_511 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T134 = YPsig(LITREF(lit_511),YPPlist(3,VARREF(YLsymG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_239 = YPmet(FUNCODEREF(fun_objectify_239),LITREF(lit_505),T134,ENVNUL,PNUL,sloc(428));
  T137 = BOUNDP(YevalSastYobjectify);
  if (T137 != YPfalse) {
    T136 = VARREF(YevalSastYobjectify);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_objectify_239;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YevalSastYobjectify,T135);
  lit_512 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T139 = YPsig(LITREF(lit_512),YPPlist(3,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_240 = YPmet(FUNCODEREF(fun_objectify_240),LITREF(lit_505),T139,ENVNUL,PNUL,sloc(431));
  T142 = BOUNDP(YevalSastYobjectify);
  if (T142 != YPfalse) {
    T141 = VARREF(YevalSastYobjectify);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_objectify_240;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YevalSastYobjectify,T140);
  lit_513 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T144 = YPsig(LITREF(lit_513),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_241 = YPmet(FUNCODEREF(fun_objectify_241),LITREF(lit_505),T144,ENVNUL,PNUL,sloc(434));
  T147 = BOUNDP(YevalSastYobjectify);
  if (T147 != YPfalse) {
    T146 = VARREF(YevalSastYobjectify);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_objectify_241;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalSastYobjectify,T145);
  lit_514 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T150 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T149 = YPsig(LITREF(lit_514),YPPlist(3,T150,VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_242 = YPmet(FUNCODEREF(fun_objectify_242),LITREF(lit_505),T149,ENVNUL,PNUL,sloc(437));
  T153 = BOUNDP(YevalSastYobjectify);
  if (T153 != YPfalse) {
    T152 = VARREF(YevalSastYobjectify);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_objectify_242;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YevalSastYobjectify,T151);
  lit_515 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T155 = YPsig(LITREF(lit_515),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_243 = YPmet(FUNCODEREF(fun_objectify_243),LITREF(lit_505),T155,ENVNUL,PNUL,sloc(440));
  T158 = BOUNDP(YevalSastYobjectify);
  if (T158 != YPfalse) {
    T157 = VARREF(YevalSastYobjectify);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_objectify_243;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YevalSastYobjectify,T156);
  lit_516 = YPPsym((P)"objectify-quotation");
  lit_517 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T160 = YPsig(LITREF(lit_517),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLconstantG),Ynil);
  fun_objectify_quotation_244 = YPmet(FUNCODEREF(fun_objectify_quotation_244),LITREF(lit_516),T160,ENVNUL,PNUL,sloc(443));
  T163 = BOUNDP(YevalSastYobjectify_quotation);
  if (T163 != YPfalse) {
    T162 = VARREF(YevalSastYobjectify_quotation);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_objectify_quotation_244;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YevalSastYobjectify_quotation,T161);
  lit_518 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T165 = YPsig(LITREF(lit_518),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_245 = YPmet(FUNCODEREF(fun_objectify_quotation_245),LITREF(lit_516),T165,ENVNUL,PNUL,sloc(446));
  T168 = BOUNDP(YevalSastYobjectify_quotation);
  if (T168 != YPfalse) {
    T167 = VARREF(YevalSastYobjectify_quotation);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_objectify_quotation_245;
  T166 = XCALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(YevalSastYobjectify_quotation,T166);
  lit_519 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T170 = YPsig(LITREF(lit_519),YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_246 = YPmet(FUNCODEREF(fun_objectify_quotation_246),LITREF(lit_516),T170,ENVNUL,PNUL,sloc(449));
  T173 = BOUNDP(YevalSastYobjectify_quotation);
  if (T173 != YPfalse) {
    T172 = VARREF(YevalSastYobjectify_quotation);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_objectify_quotation_246;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YevalSastYobjectify_quotation,T171);
  lit_520 = YPPsym((P)"objectify-raw");
  lit_521 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T175 = YPsig(LITREF(lit_521),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLraw_constantG),Ynil);
  fun_objectify_raw_247 = YPmet(FUNCODEREF(fun_objectify_raw_247),LITREF(lit_520),T175,ENVNUL,PNUL,sloc(452));
  T178 = BOUNDP(YevalSastYobjectify_raw);
  if (T178 != YPfalse) {
    T177 = VARREF(YevalSastYobjectify_raw);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_objectify_raw_247;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YevalSastYobjectify_raw,T176);
  lit_522 = YPPsym((P)"objectify-bound?");
  lit_523 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T180 = YPsig(LITREF(lit_523),YPPlist(3,VARREF(YLsymG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_boundQ_248 = YPmet(FUNCODEREF(fun_objectify_boundQ_248),LITREF(lit_522),T180,ENVNUL,PNUL,sloc(455));
  T183 = BOUNDP(YevalSastYobjectify_boundQ);
  if (T183 != YPfalse) {
    T182 = VARREF(YevalSastYobjectify_boundQ);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_objectify_boundQ_248;
  T181 = XCALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(YevalSastYobjectify_boundQ,T181);
  lit_524 = YPPsym((P)"objectify-compile-time");
  lit_525 = YPPlist(4,YPPsym((P)"program"),YPPsym((P)"r"),YPPsym((P)"tail?"),YPPsym((P)"rt?"));
  T185 = YPsig(LITREF(lit_525),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_compile_time_249 = YPmet(FUNCODEREF(fun_objectify_compile_time_249),LITREF(lit_524),T185,ENVNUL,PNUL,sloc(462));
  T188 = BOUNDP(YevalSastYobjectify_compile_time);
  if (T188 != YPfalse) {
    T187 = VARREF(YevalSastYobjectify_compile_time);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_objectify_compile_time_249;
  T186 = XCALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(YevalSastYobjectify_compile_time,T186);
  lit_526 = YPPsym((P)"objectify-alternative");
  lit_527 = YPPlist(5,YPPsym((P)"t"),YPPsym((P)"c"),YPPsym((P)"a"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T190 = YPsig(LITREF(lit_527),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLalternativeG),Ynil);
  fun_objectify_alternative_250 = YPmet(FUNCODEREF(fun_objectify_alternative_250),LITREF(lit_526),T190,ENVNUL,PNUL,sloc(478));
  T193 = BOUNDP(YevalSastYobjectify_alternative);
  if (T193 != YPfalse) {
    T192 = VARREF(YevalSastYobjectify_alternative);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_objectify_alternative_250;
  T191 = XCALL2(1,VARREF(YPdefine_method),T192,T194);
  VARSET(YevalSastYobjectify_alternative,T191);
  lit_528 = YPPsym((P)"sequentialize");
  lit_529 = YPPlist(1,YPPsym((P)"e*"));
  lit_530 = YPPlist(1,YPPsym((P)"e*"));
  T196 = YPsig(LITREF(lit_530),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_251 = YPmet(FUNCODEREF(fun_loop_251),LITREF(lit_254),T196,ENVNUL,PNUL,sloc(489));
  T195 = YPsig(LITREF(lit_529),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YevalSastYLprogramG),Ynil);
  fun_sequentialize_252 = YPmet(FUNCODEREF(fun_sequentialize_252),LITREF(lit_528),T195,ENVNUL,PNUL,sloc(484));
  T199 = BOUNDP(YevalSastYsequentialize);
  if (T199 != YPfalse) {
    T198 = VARREF(YevalSastYsequentialize);
  } else {
    T198 = YPfalse;
  }
  T200 = fun_sequentialize_252;
  T197 = XCALL2(1,VARREF(YPdefine_method),T198,T200);
  VARSET(YevalSastYsequentialize,T197);
  lit_531 = YPPsym((P)"transform-defs");
  lit_532 = YPPlist(1,YPPsym((P)"e*"));
  T201 = YPsig(LITREF(lit_532),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_transform_defs_253 = YPmet(FUNCODEREF(fun_transform_defs_253),LITREF(lit_531),T201,ENVNUL,PNUL,sloc(494));
  T204 = BOUNDP(YevalSastYtransform_defs);
  if (T204 != YPfalse) {
    T203 = VARREF(YevalSastYtransform_defs);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_transform_defs_253;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(YevalSastYtransform_defs,T202);
  lit_533 = YPPsym((P)"objectify-sequential");
  lit_534 = YPPlist(3,YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_535 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"e*"));
  T207 = YPsig(LITREF(lit_535),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_254 = YPmet(FUNCODEREF(fun_loop_254),LITREF(lit_254),T207,ENVNUL,PNUL,sloc(505));
  T206 = YPsig(LITREF(lit_534),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_sequential_255 = YPmet(FUNCODEREF(fun_objectify_sequential_255),LITREF(lit_533),T206,ENVNUL,PNUL,sloc(503));
  T210 = BOUNDP(YevalSastYobjectify_sequential);
  if (T210 != YPfalse) {
    T209 = VARREF(YevalSastYobjectify_sequential);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_objectify_sequential_255;
  T208 = XCALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(YevalSastYobjectify_sequential,T208);
  lit_536 = YPPsym((P)"objectify-application");
  lit_537 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_538 = YPPlist(1,YPPsym((P)"e"));
  T213 = YPsig(LITREF(lit_538),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_256 = YPmet(FUNCODEREF(fun_256),YPfalse,T213,ENVNUL,PNUL,sloc(514));
  T212 = YPsig(LITREF(lit_537),YPPlist(4,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_257 = YPmet(FUNCODEREF(fun_objectify_application_257),LITREF(lit_536),T212,ENVNUL,PNUL,sloc(513));
  T216 = BOUNDP(YevalSastYobjectify_application);
  if (T216 != YPfalse) {
    T215 = VARREF(YevalSastYobjectify_application);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_objectify_application_257;
  T214 = XCALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(YevalSastYobjectify_application,T214);
  lit_539 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_540 = YPPlist(1,YPPsym((P)"e"));
  T219 = YPsig(LITREF(lit_540),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_258 = YPmet(FUNCODEREF(fun_258),YPfalse,T219,ENVNUL,PNUL,sloc(520));
  T218 = YPsig(LITREF(lit_539),YPPlist(4,VARREF(YevalSastYLpredefined_referenceG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_259 = YPmet(FUNCODEREF(fun_objectify_application_259),LITREF(lit_536),T218,ENVNUL,PNUL,sloc(519));
  T222 = BOUNDP(YevalSastYobjectify_application);
  if (T222 != YPfalse) {
    T221 = VARREF(YevalSastYobjectify_application);
  } else {
    T221 = YPfalse;
  }
  T223 = fun_objectify_application_259;
  T220 = XCALL2(1,VARREF(YPdefine_method),T221,T223);
  VARSET(YevalSastYobjectify_application,T220);
  lit_541 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_542 = YPPlist(1,YPPsym((P)"e"));
  T225 = YPsig(LITREF(lit_542),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_260 = YPmet(FUNCODEREF(fun_260),YPfalse,T225,ENVNUL,PNUL,sloc(531));
  T224 = YPsig(LITREF(lit_541),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_261 = YPmet(FUNCODEREF(fun_objectify_application_261),LITREF(lit_536),T224,ENVNUL,PNUL,sloc(530));
  T228 = BOUNDP(YevalSastYobjectify_application);
  if (T228 != YPfalse) {
    T227 = VARREF(YevalSastYobjectify_application);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_objectify_application_261;
  T226 = XCALL2(1,VARREF(YPdefine_method),T227,T229);
  VARSET(YevalSastYobjectify_application,T226);
  lit_543 = YPPsym((P)"process-closed-application");
  lit_544 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_545 = YPsb((P)"incorrect regular arity");
  T230 = YPsig(LITREF(lit_544),YPPlist(4,VARREF(YevalSastYLast_embodied_functionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLfix_letG),Ynil);
  fun_process_closed_application_262 = YPmet(FUNCODEREF(fun_process_closed_application_262),LITREF(lit_543),T230,ENVNUL,PNUL,sloc(540));
  T233 = BOUNDP(YevalSastYprocess_closed_application);
  if (T233 != YPfalse) {
    T232 = VARREF(YevalSastYprocess_closed_application);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_process_closed_application_262;
  T231 = XCALL2(1,VARREF(YPdefine_method),T232,T234);
  VARSET(YevalSastYprocess_closed_application,T231);
  lit_546 = YPPsym((P)"process-nary-closed-application");
  lit_547 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_548 = YPPsym((P)"pack-nary-args");
  lit_549 = YPPlist(1,YPPsym((P)"e*"));
  lit_550 = YPPsym((P)"quote");
  lit_551 = YPPsym((P)"%pair");
  lit_552 = YPPsym((P)"pack-args");
  lit_553 = YPPlist(3,YPPsym((P)"e*"),YPPsym((P)"v*"),YPPsym((P)"t*"));
  lit_554 = YPPsym((P)"<lst>");
  lit_555 = YPsb((P)"incorrect dotted arity");
  T237 = YPsig(LITREF(lit_549),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pack_nary_args_263 = YPmet(FUNCODEREF(fun_pack_nary_args_263),LITREF(lit_548),T237,ENVNUL,PNUL,sloc(555));
  T236 = YPsig(LITREF(lit_553),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_pack_args_264 = YPmet(FUNCODEREF(fun_pack_args_264),LITREF(lit_552),T236,ENVNUL,PNUL,sloc(559));
  T235 = YPsig(LITREF(lit_547),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLfix_letG),Ynil);
  fun_process_nary_closed_application_265 = YPmet(FUNCODEREF(fun_process_nary_closed_application_265),LITREF(lit_546),T235,ENVNUL,PNUL,sloc(554));
  T240 = BOUNDP(YevalSastYprocess_nary_closed_application);
  if (T240 != YPfalse) {
    T239 = VARREF(YevalSastYprocess_nary_closed_application);
  } else {
    T239 = YPfalse;
  }
  T241 = fun_process_nary_closed_application_265;
  T238 = XCALL2(1,VARREF(YPdefine_method),T239,T241);
  VARSET(YevalSastYprocess_nary_closed_application,T238);
  lit_556 = YPPsym((P)"convert2arguments");
  lit_557 = YPPlist(1,YPPsym((P)"e*"));
  T242 = YPsig(LITREF(lit_557),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_convert2arguments_266 = YPmet(FUNCODEREF(fun_convert2arguments_266),LITREF(lit_556),T242,ENVNUL,PNUL,sloc(580));
  T245 = BOUNDP(YevalSastYconvert2arguments);
  if (T245 != YPfalse) {
    T244 = VARREF(YevalSastYconvert2arguments);
  } else {
    T244 = YPfalse;
  }
  T246 = fun_convert2arguments_266;
  T243 = XCALL2(1,VARREF(YPdefine_method),T244,T246);
  VARSET(YevalSastYconvert2arguments,T243);
  lit_558 = YPPsym((P)"objectify-assignment");
  lit_559 = YPPlist(4,YPPsym((P)"binding"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_560 = YPsb((P)"Unsupported Set!: %=");
  T247 = YPsig(LITREF(lit_559),YPPlist(4,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_assignment_267 = YPmet(FUNCODEREF(fun_objectify_assignment_267),LITREF(lit_558),T247,ENVNUL,PNUL,sloc(589));
  T250 = BOUNDP(YevalSastYobjectify_assignment);
  if (T250 != YPfalse) {
    T249 = VARREF(YevalSastYobjectify_assignment);
  } else {
    T249 = YPfalse;
  }
  T251 = fun_objectify_assignment_267;
  T248 = XCALL2(1,VARREF(YPdefine_method),T249,T251);
  VARSET(YevalSastYobjectify_assignment,T248);
  lit_561 = YPPlist(4,YPPsym((P)"binding"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T252 = YPsig(LITREF(lit_561),YPPlist(4,VARREF(YLsymG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLassignmentG),Ynil);
  fun_objectify_assignment_268 = YPmet(FUNCODEREF(fun_objectify_assignment_268),LITREF(lit_558),T252,ENVNUL,PNUL,sloc(599));
  T255 = BOUNDP(YevalSastYobjectify_assignment);
  if (T255 != YPfalse) {
    T254 = VARREF(YevalSastYobjectify_assignment);
  } else {
    T254 = YPfalse;
  }
  T256 = fun_objectify_assignment_268;
  T253 = XCALL2(1,VARREF(YPdefine_method),T254,T256);
  VARSET(YevalSastYobjectify_assignment,T253);
  lit_562 = YPPsym((P)"objectify-assignment-using");
  lit_563 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T257 = YPsig(LITREF(lit_563),YPPlist(2,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLlocal_assignmentG),Ynil);
  fun_objectify_assignment_using_269 = YPmet(FUNCODEREF(fun_objectify_assignment_using_269),LITREF(lit_562),T257,ENVNUL,PNUL,sloc(604));
  T260 = BOUNDP(YevalSastYobjectify_assignment_using);
  if (T260 != YPfalse) {
    T259 = VARREF(YevalSastYobjectify_assignment_using);
  } else {
    T259 = YPfalse;
  }
  T261 = fun_objectify_assignment_using_269;
  T258 = XCALL2(1,VARREF(YPdefine_method),T259,T261);
  VARSET(YevalSastYobjectify_assignment_using,T258);
  lit_564 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T262 = YPsig(LITREF(lit_564),YPPlist(2,VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  fun_objectify_assignment_using_270 = YPmet(FUNCODEREF(fun_objectify_assignment_using_270),LITREF(lit_562),T262,ENVNUL,PNUL,sloc(611));
  T265 = BOUNDP(YevalSastYobjectify_assignment_using);
  if (T265 != YPfalse) {
    T264 = VARREF(YevalSastYobjectify_assignment_using);
  } else {
    T264 = YPfalse;
  }
  T266 = fun_objectify_assignment_using_270;
  T263 = XCALL2(1,VARREF(YPdefine_method),T264,T266);
  VARSET(YevalSastYobjectify_assignment_using,T263);
  lit_565 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T267 = YPsig(LITREF(lit_565),YPPlist(2,VARREF(YevalSastYLdynamic_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  fun_objectify_assignment_using_271 = YPmet(FUNCODEREF(fun_objectify_assignment_using_271),LITREF(lit_562),T267,ENVNUL,PNUL,sloc(617));
  T270 = BOUNDP(YevalSastYobjectify_assignment_using);
  if (T270 != YPfalse) {
    T269 = VARREF(YevalSastYobjectify_assignment_using);
  } else {
    T269 = YPfalse;
  }
  T271 = fun_objectify_assignment_using_271;
  T268 = XCALL2(1,VARREF(YPdefine_method),T269,T271);
  VARSET(YevalSastYobjectify_assignment_using,T268);
  lit_566 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T272 = YPsig(LITREF(lit_566),YPPlist(2,VARREF(YevalSastYLruntime_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLruntime_assignmentG),Ynil);
  fun_objectify_assignment_using_272 = YPmet(FUNCODEREF(fun_objectify_assignment_using_272),LITREF(lit_562),T272,ENVNUL,PNUL,sloc(623));
  T275 = BOUNDP(YevalSastYobjectify_assignment_using);
  if (T275 != YPfalse) {
    T274 = VARREF(YevalSastYobjectify_assignment_using);
  } else {
    T274 = YPfalse;
  }
  T276 = fun_objectify_assignment_using_272;
  T273 = XCALL2(1,VARREF(YPdefine_method),T274,T276);
  VARSET(YevalSastYobjectify_assignment_using,T273);
  lit_567 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  lit_568 = YPsb((P)"Unable to assign to static module binding %=");
  T279 = YPsig(LITREF(lit_567),YPPlist(2,VARREF(YevalSastYLstatic_module_binding_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T278 = fun_objectify_assignment_using_273 = YPmet(FUNCODEREF(fun_objectify_assignment_using_273),LITREF(lit_562),T279,ENVNUL,PNUL,sloc(629));
  T283 = BOUNDP(YevalSastYobjectify_assignment_using);
  if (T283 != YPfalse) {
    T282 = VARREF(YevalSastYobjectify_assignment_using);
  } else {
    T282 = YPfalse;
  }
  T284 = fun_objectify_assignment_using_273;
  T281 = XCALL2(1,VARREF(YPdefine_method),T282,T284);
  T280 = VARSET(YevalSastYobjectify_assignment_using,T281);
  T277 = T280;
  return T277;
}

P YevalSastY___main_6___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206,T207;
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220,T221,T222,T223;
  P T224,T225,T226,T227,T228,T229,T230,T231,T232,T233,T234,T235,T236,T237,T238,T239;
  P T240,T241,T242,T243,T244,T245,T246,T247,T248,T249,T250,T251,T252,T253,T254,T255;
  P T256,T257,T258,T259,T260,T261,T262,T263,T264,T265,T266,T267,T268,T269,T270,T271;
  P T272,T273,T274,T275,T276,T277,T278,T279,T280,T281,T282,T283,T284,T285,T286,T287;
  P T288,T289,T290,T291,T292,T293,T294,T295,T296,T297,T298,T299,T300,T301,T302,T303;
  P T304,T305,T306,T307;
DEFCREGS();
loop:
  lit_569 = YPPsym((P)"update-binding-kind");
  lit_570 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"new-kind"));
  lit_571 = YPPsym((P)"runtime");
  lit_572 = YPPsym((P)"magic");
  lit_573 = YPsb((P)"Cannot set type of runtime binding %s to %s.\n");
  T0 = YPsig(LITREF(lit_570),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYupdate_binding_kind = YPmet(FUNCODEREF(YevalSastYupdate_binding_kind),LITREF(lit_569),T0,ENVNUL,PNUL,sloc(642));
  T1 = YevalSastYupdate_binding_kind;
  VARSET(YevalSastYupdate_binding_kind,T1);
  lit_574 = YPPsym((P)"ast-define-binding");
  lit_575 = YPPlist(4,YPPsym((P)"r"),YPPsym((P)"name"),YPPsym((P)"defining-method?"),YPPsym((P)"kind"));
  lit_576 = YPsb((P)"%s: warning: '%s' clobbers binding from %s.\n");
  T2 = YPsig(LITREF(lit_575),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_ast_define_binding_275 = YPmet(FUNCODEREF(fun_ast_define_binding_275),LITREF(lit_574),T2,ENVNUL,PNUL,sloc(651));
  T5 = BOUNDP(YevalSastYast_define_binding);
  if (T5 != YPfalse) {
    T4 = VARREF(YevalSastYast_define_binding);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_ast_define_binding_275;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YevalSastYast_define_binding,T3);
  VARSET(YevalSastYTmacro_tracingQT,YPfalse);
  lit_577 = YPPsym((P)"objectify-definition");
  lit_578 = YPPlist(5,YPPsym((P)"type"),YPPsym((P)"kind"),YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  T7 = YPsig(LITREF(lit_578),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_objectify_definition_276 = YPmet(FUNCODEREF(fun_objectify_definition_276),LITREF(lit_577),T7,ENVNUL,PNUL,sloc(693));
  T10 = BOUNDP(YevalSastYobjectify_definition);
  if (T10 != YPfalse) {
    T9 = VARREF(YevalSastYobjectify_definition);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_objectify_definition_276;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YevalSastYobjectify_definition,T8);
  lit_579 = YPPsym((P)"objectify-variable-definition");
  lit_580 = YPPlist(3,YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  T12 = YPsig(LITREF(lit_580),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_variable_definition_277 = YPmet(FUNCODEREF(fun_objectify_variable_definition_277),LITREF(lit_579),T12,ENVNUL,PNUL,sloc(704));
  T15 = BOUNDP(YevalSastYobjectify_variable_definition);
  if (T15 != YPfalse) {
    T14 = VARREF(YevalSastYobjectify_variable_definition);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_objectify_variable_definition_277;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YevalSastYobjectify_variable_definition,T13);
  lit_581 = YPPsym((P)"objectify-dynamic-definition");
  lit_582 = YPPlist(3,YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  lit_583 = YPPsym((P)"dynamic");
  T17 = YPsig(LITREF(lit_582),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_dynamic_definition_278 = YPmet(FUNCODEREF(fun_objectify_dynamic_definition_278),LITREF(lit_581),T17,ENVNUL,PNUL,sloc(707));
  T20 = BOUNDP(YevalSastYobjectify_dynamic_definition);
  if (T20 != YPfalse) {
    T19 = VARREF(YevalSastYobjectify_dynamic_definition);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_objectify_dynamic_definition_278;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YevalSastYobjectify_dynamic_definition,T18);
  lit_584 = YPPsym((P)"%%macro");
  lit_585 = YPPlist(4,YPPsym((P)"modname"),YPPsym((P)"name"),YPPsym((P)"expander"),YPPsym((P)"env-or-false"));
  lit_586 = YPPsym((P)"expand");
  lit_587 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_588 = YPsb((P)"MACRO ");
  lit_589 = YPsb((P)"\n");
  lit_590 = YPsb((P)"  => ");
  lit_591 = YPsb((P)"\n");
  lit_592 = YPPsym((P)"macro");
  T23 = YPsig(LITREF(lit_587),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_279 = YPmet(FUNCODEREF(fun_expand_279),LITREF(lit_586),T23,ENVNUL,PNUL,sloc(712));
  T22 = YPsig(LITREF(lit_585),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLmodule_bindingG),Ynil);
  YPPmacro = YPmet(FUNCODEREF(YPPmacro),LITREF(lit_584),T22,ENVNUL,PNUL,sloc(710));
  T24 = YPPmacro;
  VARSET(YPPmacro,T24);
  lit_593 = YPPsym((P)"objectify-syntax-definition");
  lit_594 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"rt?"));
  T25 = YPsig(LITREF(lit_594),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_syntax_definition_281 = YPmet(FUNCODEREF(fun_objectify_syntax_definition_281),LITREF(lit_593),T25,ENVNUL,PNUL,sloc(734));
  T28 = BOUNDP(YevalSastYobjectify_syntax_definition);
  if (T28 != YPfalse) {
    T27 = VARREF(YevalSastYobjectify_syntax_definition);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_objectify_syntax_definition_281;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YevalSastYobjectify_syntax_definition,T26);
  lit_595 = YPPsym((P)"objectify-function-definition");
  lit_596 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"e"),YPPsym((P)"r"));
  T30 = YPsig(LITREF(lit_596),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_function_definitionG),Ynil);
  fun_objectify_function_definition_282 = YPmet(FUNCODEREF(fun_objectify_function_definition_282),LITREF(lit_595),T30,ENVNUL,PNUL,sloc(763));
  T33 = BOUNDP(YevalSastYobjectify_function_definition);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSastYobjectify_function_definition);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_objectify_function_definition_282;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSastYobjectify_function_definition,T31);
  lit_597 = YPPsym((P)"module-binding");
  lit_598 = YPPlist(1,YPPsym((P)"kind"));
  T35 = YPsig(LITREF(lit_598),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YevalSastYLmodule_bindingG),Ynil);
  YevalSastYmodule_binding = YPmet(FUNCODEREF(YevalSastYmodule_binding),LITREF(lit_597),T35,ENVNUL,PNUL,sloc(772));
  T36 = YevalSastYmodule_binding;
  VARSET(YevalSastYmodule_binding,T36);
  lit_599 = YPPsym((P)"objectify-primitive-definition");
  lit_600 = YPPlist(5,YPPsym((P)"name"),YPPsym((P)"mods"),YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"r"));
  lit_601 = YPPsym((P)"predefined");
  lit_602 = YPPsym((P)"inline");
  T37 = YPsig(LITREF(lit_600),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLast_primitive_definitionG),Ynil);
  fun_objectify_primitive_definition_284 = YPmet(FUNCODEREF(fun_objectify_primitive_definition_284),LITREF(lit_599),T37,ENVNUL,PNUL,sloc(775));
  T40 = BOUNDP(YevalSastYobjectify_primitive_definition);
  if (T40 != YPfalse) {
    T39 = VARREF(YevalSastYobjectify_primitive_definition);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_objectify_primitive_definition_284;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YevalSastYobjectify_primitive_definition,T38);
  lit_603 = YPPsym((P)"objectify-generic-definition");
  lit_604 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"sig"),YPPsym((P)"r"));
  T42 = YPsig(LITREF(lit_604),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_generic_definitionG),Ynil);
  fun_objectify_generic_definition_285 = YPmet(FUNCODEREF(fun_objectify_generic_definition_285),LITREF(lit_603),T42,ENVNUL,PNUL,sloc(794));
  T45 = BOUNDP(YevalSastYobjectify_generic_definition);
  if (T45 != YPfalse) {
    T44 = VARREF(YevalSastYobjectify_generic_definition);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_objectify_generic_definition_285;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YevalSastYobjectify_generic_definition,T43);
  lit_605 = YPPsym((P)"objectify-method-definition");
  lit_606 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"e"),YPPsym((P)"r"));
  lit_607 = YPPsym((P)"if");
  lit_608 = YPPsym((P)"bound?");
  lit_609 = YPPsym((P)"%define-method");
  T47 = YPsig(LITREF(lit_606),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_method_definitionG),Ynil);
  fun_objectify_method_definition_286 = YPmet(FUNCODEREF(fun_objectify_method_definition_286),LITREF(lit_605),T47,ENVNUL,PNUL,sloc(806));
  T50 = BOUNDP(YevalSastYobjectify_method_definition);
  if (T50 != YPfalse) {
    T49 = VARREF(YevalSastYobjectify_method_definition);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_objectify_method_definition_286;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YevalSastYobjectify_method_definition,T48);
  DYNDEFSET(YevalSastYTrecord_sourceQT,YPfalse);
  lit_610 = YPPsym((P)"objectify-function-source");
  lit_611 = YPPlist(3,YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"r"));
  lit_612 = Ynil;
  lit_613 = YPsb((P)"(fun %s %s)");
  T56 = YPsig(LITREF(lit_612),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_287 = YPmet(FUNCODEREF(fun_287),YPfalse,T56,ENVNUL,PNUL,sloc(830));
  T55 = YPsig(LITREF(lit_612),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_288 = YPmet(FUNCODEREF(fun_288),YPfalse,T55,ENVNUL,PNUL,sloc(830));
  T54 = YPsig(LITREF(lit_612),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_289 = YPmet(FUNCODEREF(fun_289),YPfalse,T54,ENVNUL,PNUL,sloc(830));
  T53 = YPsig(LITREF(lit_612),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_290 = YPmet(FUNCODEREF(fun_290),YPfalse,T53,ENVNUL,PNUL,sloc(830));
  T52 = YPsig(LITREF(lit_611),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLconstantG),Ynil);
  fun_objectify_function_source_291 = YPmet(FUNCODEREF(fun_objectify_function_source_291),LITREF(lit_610),T52,ENVNUL,PNUL,sloc(829));
  T59 = BOUNDP(YevalSastYobjectify_function_source);
  if (T59 != YPfalse) {
    T58 = VARREF(YevalSastYobjectify_function_source);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_objectify_function_source_291;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YevalSastYobjectify_function_source,T57);
  lit_614 = YPPsym((P)"objectify-function");
  lit_615 = YPPlist(5,YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"line"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T63 = YPsig(LITREF(lit_612),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_292 = YPmet(FUNCODEREF(fun_292),YPfalse,T63,ENVNUL,PNUL,sloc(841));
  T62 = YPsig(LITREF(lit_612),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_293 = YPmet(FUNCODEREF(fun_293),YPfalse,T62,ENVNUL,PNUL,sloc(841));
  T61 = YPsig(LITREF(lit_615),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLast_methodG),Ynil);
  fun_objectify_function_294 = YPmet(FUNCODEREF(fun_objectify_function_294),LITREF(lit_614),T61,ENVNUL,PNUL,sloc(838));
  T66 = BOUNDP(YevalSastYobjectify_function);
  if (T66 != YPfalse) {
    T65 = VARREF(YevalSastYobjectify_function);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_objectify_function_294;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YevalSastYobjectify_function,T64);
  lit_616 = YPPsym((P)"...");
  VARSET(YevalSastYDsexpr_optionals_tag,LITREF(lit_616));
  lit_617 = YPPsym((P)"<opts>");
  VARSET(YevalSastYDsexpr_optionals_type_name,LITREF(lit_617));
  lit_618 = YPPsym((P)"objectify-signature");
  lit_619 = YPPlist(2,YPPsym((P)"sig"),YPPsym((P)"r"));
  lit_620 = YPPsym((P)"col");
  lit_621 = YPPlist(5,YPPsym((P)"params"),YPPsym((P)"nary?"),YPPsym((P)"bindings"),YPPsym((P)"names"),YPPsym((P)"types"));
  T69 = YPsig(LITREF(lit_621),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_col_295 = YPmet(FUNCODEREF(fun_col_295),LITREF(lit_620),T69,ENVNUL,PNUL,sloc(857));
  T68 = YPsig(LITREF(lit_619),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLast_signatureG),Ynil);
  fun_objectify_signature_296 = YPmet(FUNCODEREF(fun_objectify_signature_296),LITREF(lit_618),T68,ENVNUL,PNUL,sloc(855));
  T72 = BOUNDP(YevalSastYobjectify_signature);
  if (T72 != YPfalse) {
    T71 = VARREF(YevalSastYobjectify_signature);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_objectify_signature_296;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YevalSastYobjectify_signature,T70);
  lit_622 = YPPsym((P)"compute-local-reference-offsets");
  lit_623 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"r"));
  lit_624 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"r"));
  lit_625 = YPPsym((P)"find");
  lit_626 = YPPlist(2,YPPsym((P)"j"),YPPsym((P)"bindings"));
  lit_627 = YPsb((P)"didn't find local binding %= in %=");
  T77 = YPsig(LITREF(lit_626),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_297 = YPmet(FUNCODEREF(fun_find_297),LITREF(lit_625),T77,ENVNUL,PNUL,sloc(891));
  T76 = YPsig(LITREF(lit_624),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_298 = YPmet(FUNCODEREF(fun_loop_298),LITREF(lit_254),T76,ENVNUL,PNUL,sloc(889));
  T75 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLintG));
  T74 = YPsig(LITREF(lit_623),YPPlist(2,VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)2),T75,Ynil);
  fun_compute_local_reference_offsets_299 = YPmet(FUNCODEREF(fun_compute_local_reference_offsets_299),LITREF(lit_622),T74,ENVNUL,PNUL,sloc(886));
  T80 = BOUNDP(YevalSastYcompute_local_reference_offsets);
  if (T80 != YPfalse) {
    T79 = VARREF(YevalSastYcompute_local_reference_offsets);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_compute_local_reference_offsets_299;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YevalSastYcompute_local_reference_offsets,T78);
  lit_628 = YPPsym((P)"objectify-binding");
  lit_629 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T82 = YPsig(LITREF(lit_629),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLlocal_referenceG),Ynil);
  fun_objectify_binding_300 = YPmet(FUNCODEREF(fun_objectify_binding_300),LITREF(lit_628),T82,ENVNUL,PNUL,sloc(900));
  T85 = BOUNDP(YevalSastYobjectify_binding);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalSastYobjectify_binding);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_objectify_binding_300;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalSastYobjectify_binding,T83);
  lit_630 = YPPsym((P)"binding-reference-class");
  lit_631 = YPPlist(1,YPPsym((P)"b"));
  lit_632 = YPsb((P)"Unknown binding-kind %=");
  T87 = YPsig(LITREF(lit_631),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_binding_reference_class_301 = YPmet(FUNCODEREF(fun_binding_reference_class_301),LITREF(lit_630),T87,ENVNUL,PNUL,sloc(911));
  T90 = BOUNDP(YevalSastYbinding_reference_class);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSastYbinding_reference_class);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_binding_reference_class_301;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSastYbinding_reference_class,T88);
  lit_633 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T92 = YPsig(LITREF(lit_633),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_binding_302 = YPmet(FUNCODEREF(fun_objectify_binding_302),LITREF(lit_628),T92,ENVNUL,PNUL,sloc(922));
  T95 = BOUNDP(YevalSastYobjectify_binding);
  if (T95 != YPfalse) {
    T94 = VARREF(YevalSastYobjectify_binding);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_objectify_binding_302;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YevalSastYobjectify_binding,T93);
  lit_634 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T97 = YPsig(LITREF(lit_634),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_binding_303 = YPmet(FUNCODEREF(fun_objectify_binding_303),LITREF(lit_628),T97,ENVNUL,PNUL,sloc(931));
  T100 = BOUNDP(YevalSastYobjectify_binding);
  if (T100 != YPfalse) {
    T99 = VARREF(YevalSastYobjectify_binding);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_objectify_binding_303;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YevalSastYobjectify_binding,T98);
  lit_635 = YPPsym((P)"default-type");
  lit_636 = YPPlist(1,YPPsym((P)"r"));
  lit_637 = YPPsym((P)"<any>");
  T102 = YPsig(LITREF(lit_636),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_type_304 = YPmet(FUNCODEREF(fun_default_type_304),LITREF(lit_635),T102,ENVNUL,PNUL,sloc(936));
  T105 = BOUNDP(YevalSastYdefault_type);
  if (T105 != YPfalse) {
    T104 = VARREF(YevalSastYdefault_type);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_default_type_304;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YevalSastYdefault_type,T103);
  lit_638 = YPPsym((P)"objectify-free-global-reference");
  lit_639 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T107 = YPsig(LITREF(lit_639),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_free_global_reference_305 = YPmet(FUNCODEREF(fun_objectify_free_global_reference_305),LITREF(lit_638),T107,ENVNUL,PNUL,sloc(941));
  T110 = BOUNDP(YevalSastYobjectify_free_global_reference);
  if (T110 != YPfalse) {
    T109 = VARREF(YevalSastYobjectify_free_global_reference);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_objectify_free_global_reference_305;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YevalSastYobjectify_free_global_reference,T108);
  lit_640 = YPPsym((P)"foreign-name?");
  lit_641 = YPPlist(1,YPPsym((P)"name"));
  T112 = YPsig(LITREF(lit_641),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSastYforeign_nameQ = YPmet(FUNCODEREF(YevalSastYforeign_nameQ),LITREF(lit_640),T112,ENVNUL,PNUL,sloc(955));
  T113 = YevalSastYforeign_nameQ;
  VARSET(YevalSastYforeign_nameQ,T113);
  lit_642 = YPPsym((P)"objectify-foreign-reference");
  lit_643 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  lit_644 = YPsb((P)"Malformed foreign name %s.\n");
  lit_645 = YPsb((P)"No binding %s in %s.\n");
  T114 = YPsig(LITREF(lit_643),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_foreign_reference_307 = YPmet(FUNCODEREF(fun_objectify_foreign_reference_307),LITREF(lit_642),T114,ENVNUL,PNUL,sloc(959));
  T117 = BOUNDP(YevalSastYobjectify_foreign_reference);
  if (T117 != YPfalse) {
    T116 = VARREF(YevalSastYobjectify_foreign_reference);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_objectify_foreign_reference_307;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YevalSastYobjectify_foreign_reference,T115);
  lit_646 = YPPsym((P)"objectify-symbol");
  lit_647 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T119 = YPsig(LITREF(lit_647),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_objectify_symbol_308 = YPmet(FUNCODEREF(fun_objectify_symbol_308),LITREF(lit_646),T119,ENVNUL,PNUL,sloc(977));
  T122 = BOUNDP(YevalSastYobjectify_symbol);
  if (T122 != YPfalse) {
    T121 = VARREF(YevalSastYobjectify_symbol);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_objectify_symbol_308;
  T120 = XCALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YevalSastYobjectify_symbol,T120);
  lit_648 = YPPsym((P)"ftype");
  lit_649 = YPPlist(1,YPPsym((P)"r"));
  lit_650 = YPPsym((P)"<fun>");
  T124 = YPsig(LITREF(lit_649),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ftype_309 = YPmet(FUNCODEREF(fun_ftype_309),LITREF(lit_648),T124,ENVNUL,PNUL,sloc(980));
  T127 = BOUNDP(YevalSastYftype);
  if (T127 != YPfalse) {
    T126 = VARREF(YevalSastYftype);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_ftype_309;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YevalSastYftype,T125);
  lit_651 = YPPsym((P)"<functions>");
  T131 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T130 = (P)YPpair(VARREF(YLlstG),T131);
  T129 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_651),T130);
  VARSET(YevalSastYLfunctionsG,T129);
  T132 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfunctionsG));
  VARSET(YevalSastYDfunctions_empty,T132);
  lit_652 = YPPsym((P)"functions");
  lit_653 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T133 = YPsig(LITREF(lit_653),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfunctions = YPmet(FUNCODEREF(YevalSastYfunctions),LITREF(lit_652),T133,ENVNUL,PNUL,sloc(983));
  T134 = YevalSastYfunctions;
  VARSET(YevalSastYfunctions,T134);
  lit_654 = YPPlist(1,YPPsym((P)"e"));
  T136 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfunctionsG));
  T135 = YPsig(LITREF(lit_654),YPPlist(1,T136),YPfalse,YPint((P)1),VARREF(YevalSastYLfunctionsG),Ynil);
  fun_empty_311 = YPmet(FUNCODEREF(fun_empty_311),LITREF(lit_306),T135,ENVNUL,PNUL,sloc(983));
  T139 = BOUNDP(YgooScolsScolYempty);
  if (T139 != YPfalse) {
    T138 = VARREF(YgooScolsScolYempty);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_empty_311;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YgooScolsScolYempty,T137);
  lit_655 = YPPsym((P)"objectify-locals");
  lit_656 = YPPlist(6,YPPsym((P)"names"),YPPsym((P)"sigs"),YPPsym((P)"bodies"),YPPsym((P)"body"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_657 = YPPlist(1,YPPsym((P)"n"));
  lit_658 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"b"));
  T143 = YPsig(LITREF(lit_657),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_312 = YPmet(FUNCODEREF(fun_312),YPfalse,T143,ENVNUL,PNUL,sloc(986));
  T142 = YPsig(LITREF(lit_658),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_313 = YPmet(FUNCODEREF(fun_313),YPfalse,T142,ENVNUL,PNUL,sloc(993));
  T141 = YPsig(LITREF(lit_656),YPPlist(6,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YevalSastYLlocalsG),Ynil);
  fun_objectify_locals_314 = YPmet(FUNCODEREF(fun_objectify_locals_314),LITREF(lit_655),T141,ENVNUL,PNUL,sloc(985));
  T146 = BOUNDP(YevalSastYobjectify_locals);
  if (T146 != YPfalse) {
    T145 = VARREF(YevalSastYobjectify_locals);
  } else {
    T145 = YPfalse;
  }
  T147 = fun_objectify_locals_314;
  T144 = XCALL2(1,VARREF(YPdefine_method),T145,T147);
  VARSET(YevalSastYobjectify_locals,T144);
  lit_659 = YPPsym((P)"objectify-bind-exit");
  lit_660 = YPPlist(5,YPPsym((P)"name"),YPPsym((P)"body"),YPPsym((P)"line"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T148 = YPsig(LITREF(lit_660),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLbind_exitG),Ynil);
  fun_objectify_bind_exit_315 = YPmet(FUNCODEREF(fun_objectify_bind_exit_315),LITREF(lit_659),T148,ENVNUL,PNUL,sloc(1004));
  T151 = BOUNDP(YevalSastYobjectify_bind_exit);
  if (T151 != YPfalse) {
    T150 = VARREF(YevalSastYobjectify_bind_exit);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_objectify_bind_exit_315;
  T149 = XCALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(YevalSastYobjectify_bind_exit,T149);
  lit_661 = YPPsym((P)"objectify-unwind-protect");
  lit_662 = YPPlist(5,YPPsym((P)"protected-form"),YPPsym((P)"cleanup-forms"),YPPsym((P)"line"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T153 = YPsig(LITREF(lit_662),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLunwind_protectG),Ynil);
  fun_objectify_unwind_protect_316 = YPmet(FUNCODEREF(fun_objectify_unwind_protect_316),LITREF(lit_661),T153,ENVNUL,PNUL,sloc(1010));
  T156 = BOUNDP(YevalSastYobjectify_unwind_protect);
  if (T156 != YPfalse) {
    T155 = VARREF(YevalSastYobjectify_unwind_protect);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_objectify_unwind_protect_316;
  T154 = XCALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YevalSastYobjectify_unwind_protect,T154);
  lit_663 = YPPsym((P)"objectify-monitor");
  lit_664 = YPPlist(7,YPPsym((P)"type"),YPPsym((P)"info"),YPPsym((P)"test"),YPPsym((P)"handler"),YPPsym((P)"body"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T158 = YPsig(LITREF(lit_664),YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YevalSastYLmonitorG),Ynil);
  fun_objectify_monitor_317 = YPmet(FUNCODEREF(fun_objectify_monitor_317),LITREF(lit_663),T158,ENVNUL,PNUL,sloc(1022));
  T161 = BOUNDP(YevalSastYobjectify_monitor);
  if (T161 != YPfalse) {
    T160 = VARREF(YevalSastYobjectify_monitor);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_objectify_monitor_317;
  T159 = XCALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(YevalSastYobjectify_monitor,T159);
  lit_665 = YPPsym((P)"objectify-export");
  lit_666 = YPPlist(3,YPPsym((P)"names"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_667 = YPsb((P)"Can only export bindings from target environment.\n");
  lit_668 = YPPlist(1,YPPsym((P)"name"));
  lit_669 = YPPlist(1,YPPsym((P)"exit"));
  lit_670 = YPsb((P)"Continue without exporting %s");
  lit_671 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_672 = YPsb((P)"Can't export undefined binding %s.\n");
  T168 = YPsig(LITREF(lit_612),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_318 = YPmet(FUNCODEREF(fun_318),YPfalse,T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(LITREF(lit_671),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_319 = YPmet(FUNCODEREF(fun_319),YPfalse,T167,ENVNUL,PNUL,sloc(1043));
  T166 = YPsig(LITREF(lit_612),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_320 = YPmet(FUNCODEREF(fun_320),YPfalse,T166,ENVNUL,PNUL,sloc(1044));
  T165 = YPsig(LITREF(lit_669),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_321 = YPmet(FUNCODEREF(fun_321),YPfalse,T165,ENVNUL,PNUL,sloc(1040));
  T164 = YPsig(LITREF(lit_668),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_322 = YPmet(FUNCODEREF(fun_322),YPfalse,T164,ENVNUL,PNUL,sloc(1037));
  T163 = YPsig(LITREF(lit_666),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_export_323 = YPmet(FUNCODEREF(fun_objectify_export_323),LITREF(lit_665),T163,ENVNUL,PNUL,sloc(1030));
  T171 = BOUNDP(YevalSastYobjectify_export);
  if (T171 != YPfalse) {
    T170 = VARREF(YevalSastYobjectify_export);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_objectify_export_323;
  T169 = XCALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(YevalSastYobjectify_export,T169);
  lit_673 = YPPsym((P)"import-global!");
  lit_674 = YPPlist(2,YPPsym((P)"b"),YPPsym((P)"env"));
  lit_675 = YPsb((P)"warning: '%s' from %s clobbers local binding.\n");
  T173 = YPsig(LITREF(lit_674),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYimport_globalX = YPmet(FUNCODEREF(YevalSastYimport_globalX),LITREF(lit_673),T173,ENVNUL,PNUL,sloc(1050));
  T174 = YevalSastYimport_globalX;
  VARSET(YevalSastYimport_globalX,T174);
  lit_676 = YPPsym((P)"objectify-use/export-module");
  lit_677 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_678 = YPPlist(1,YPPsym((P)"b"));
  T176 = YPsig(LITREF(lit_678),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_325 = YPmet(FUNCODEREF(fun_325),YPfalse,T176,ENVNUL,PNUL,sloc(1064));
  T175 = YPsig(LITREF(lit_677),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_useSexport_module_326 = YPmet(FUNCODEREF(fun_objectify_useSexport_module_326),LITREF(lit_676),T175,ENVNUL,PNUL,sloc(1058));
  T179 = BOUNDP(YevalSastYobjectify_useSexport_module);
  if (T179 != YPfalse) {
    T178 = VARREF(YevalSastYobjectify_useSexport_module);
  } else {
    T178 = YPfalse;
  }
  T180 = fun_objectify_useSexport_module_326;
  T177 = XCALL2(1,VARREF(YPdefine_method),T178,T180);
  VARSET(YevalSastYobjectify_useSexport_module,T177);
  lit_679 = YPPsym((P)"objectify-use-include");
  lit_680 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_681 = YPPlist(1,YPPsym((P)"x"));
  T182 = YPsig(LITREF(lit_681),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_327 = YPmet(FUNCODEREF(fun_327),YPfalse,T182,ENVNUL,PNUL,sloc(1073));
  T181 = YPsig(LITREF(lit_680),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_include_328 = YPmet(FUNCODEREF(fun_objectify_use_include_328),LITREF(lit_679),T181,ENVNUL,PNUL,sloc(1070));
  T185 = BOUNDP(YevalSastYobjectify_use_include);
  if (T185 != YPfalse) {
    T184 = VARREF(YevalSastYobjectify_use_include);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_objectify_use_include_328;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YevalSastYobjectify_use_include,T183);
  lit_682 = YPPsym((P)"objectify-use-library");
  lit_683 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_684 = YPPlist(1,YPPsym((P)"x"));
  T188 = YPsig(LITREF(lit_684),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_329 = YPmet(FUNCODEREF(fun_329),YPfalse,T188,ENVNUL,PNUL,sloc(1080));
  T187 = YPsig(LITREF(lit_683),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_library_330 = YPmet(FUNCODEREF(fun_objectify_use_library_330),LITREF(lit_682),T187,ENVNUL,PNUL,sloc(1077));
  T191 = BOUNDP(YevalSastYobjectify_use_library);
  if (T191 != YPfalse) {
    T190 = VARREF(YevalSastYobjectify_use_library);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_objectify_use_library_330;
  T189 = XCALL2(1,VARREF(YPdefine_method),T190,T192);
  VARSET(YevalSastYobjectify_use_library,T189);
  lit_685 = YPPsym((P)"objectify-use-module");
  lit_686 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_687 = YPPsym((P)"use-mod");
  lit_688 = YPPlist(1,YPPsym((P)"name"));
  lit_689 = YPPlist(1,YPPsym((P)"b"));
  lit_690 = YPPsym((P)"use-c-mod");
  lit_691 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  lit_692 = YPsb((P)".c");
  lit_693 = YPsb((P)".h");
  lit_694 = YPsb((P)".swig");
  lit_695 = YPsb((P)".c");
  T196 = YPsig(LITREF(lit_689),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_331 = YPmet(FUNCODEREF(fun_331),YPfalse,T196,ENVNUL,PNUL,sloc(1091));
  T195 = YPsig(LITREF(lit_688),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_use_mod_332 = YPmet(FUNCODEREF(fun_use_mod_332),LITREF(lit_687),T195,ENVNUL,PNUL,sloc(1087));
  T194 = YPsig(LITREF(lit_691),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_use_c_mod_333 = YPmet(FUNCODEREF(fun_use_c_mod_333),LITREF(lit_690),T194,ENVNUL,PNUL,sloc(1094));
  T193 = YPsig(LITREF(lit_686),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_module_334 = YPmet(FUNCODEREF(fun_objectify_use_module_334),LITREF(lit_685),T193,ENVNUL,PNUL,sloc(1084));
  T199 = BOUNDP(YevalSastYobjectify_use_module);
  if (T199 != YPfalse) {
    T198 = VARREF(YevalSastYobjectify_use_module);
  } else {
    T198 = YPfalse;
  }
  T200 = fun_objectify_use_module_334;
  T197 = XCALL2(1,VARREF(YPdefine_method),T198,T200);
  VARSET(YevalSastYobjectify_use_module,T197);
  lit_696 = YPPsym((P)"insert-and-mangle-global!");
  lit_697 = YPPlist(3,YPPsym((P)"binding"),YPPsym((P)"mangle-prefix"),YPPsym((P)"r"));
  T201 = YPsig(LITREF(lit_697),YPPlist(3,VARREF(YLanyG),VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_insert_and_mangle_globalX_335 = YPmet(FUNCODEREF(fun_insert_and_mangle_globalX_335),LITREF(lit_696),T201,ENVNUL,PNUL,sloc(1107));
  T204 = BOUNDP(YevalSastYinsert_and_mangle_globalX);
  if (T204 != YPfalse) {
    T203 = VARREF(YevalSastYinsert_and_mangle_globalX);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_insert_and_mangle_globalX_335;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(YevalSastYinsert_and_mangle_globalX,T202);
  lit_698 = YPPsym((P)"import-and-mangle-global!");
  lit_699 = YPPlist(3,YPPsym((P)"b"),YPPsym((P)"mangle-prefix"),YPPsym((P)"env"));
  lit_700 = YPsb((P)"warning: '%s' from %s clobbers local binding.\n");
  T206 = YPsig(LITREF(lit_699),YPPlist(3,VARREF(YevalSastYLmodule_bindingG),VARREF(YLstrG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYimport_and_mangle_globalX = YPmet(FUNCODEREF(YevalSastYimport_and_mangle_globalX),LITREF(lit_698),T206,ENVNUL,PNUL,sloc(1113));
  T207 = YevalSastYimport_and_mangle_globalX;
  VARSET(YevalSastYimport_and_mangle_globalX,T207);
  lit_701 = YPPsym((P)"objectify-use-mangle-module");
  lit_702 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"mangler"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_703 = YPPlist(1,YPPsym((P)"b"));
  T209 = YPsig(LITREF(lit_703),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_337 = YPmet(FUNCODEREF(fun_337),YPfalse,T209,ENVNUL,PNUL,sloc(1130));
  T208 = YPsig(LITREF(lit_702),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_mangle_module_338 = YPmet(FUNCODEREF(fun_objectify_use_mangle_module_338),LITREF(lit_701),T208,ENVNUL,PNUL,sloc(1122));
  T212 = BOUNDP(YevalSastYobjectify_use_mangle_module);
  if (T212 != YPfalse) {
    T211 = VARREF(YevalSastYobjectify_use_mangle_module);
  } else {
    T211 = YPfalse;
  }
  T213 = fun_objectify_use_mangle_module_338;
  T210 = XCALL2(1,VARREF(YPdefine_method),T211,T213);
  VARSET(YevalSastYobjectify_use_mangle_module,T210);
  lit_704 = YPPsym((P)"expand-bind-list");
  lit_705 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_706 = YPsb((P)"Expected Pattern List %=\n");
  T214 = YPsig(LITREF(lit_705),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_list_339 = YPmet(FUNCODEREF(fun_expand_bind_list_339),LITREF(lit_704),T214,ENVNUL,PNUL,sloc(1136));
  T217 = BOUNDP(YevalSastYexpand_bind_list);
  if (T217 != YPfalse) {
    T216 = VARREF(YevalSastYexpand_bind_list);
  } else {
    T216 = YPfalse;
  }
  T218 = fun_expand_bind_list_339;
  T215 = XCALL2(1,VARREF(YPdefine_method),T216,T218);
  VARSET(YevalSastYexpand_bind_list,T215);
  lit_707 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_708 = YPPsym((P)"match-empty-list");
  T220 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T219 = YPsig(LITREF(lit_707),YPPlist(3,T220,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_340 = YPmet(FUNCODEREF(fun_expand_bind_list_340),LITREF(lit_704),T219,ENVNUL,PNUL,sloc(1139));
  T223 = BOUNDP(YevalSastYexpand_bind_list);
  if (T223 != YPfalse) {
    T222 = VARREF(YevalSastYexpand_bind_list);
  } else {
    T222 = YPfalse;
  }
  T224 = fun_expand_bind_list_340;
  T221 = XCALL2(1,VARREF(YPdefine_method),T222,T224);
  VARSET(YevalSastYexpand_bind_list,T221);
  lit_709 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_710 = YPsb((P)"Unquote Unexpected Here %=\n");
  lit_711 = YPsb((P)"Unquote Splicing Unexpected Here %=\n");
  T225 = YPsig(LITREF(lit_709),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_341 = YPmet(FUNCODEREF(fun_expand_bind_list_341),LITREF(lit_704),T225,ENVNUL,PNUL,sloc(1142));
  T228 = BOUNDP(YevalSastYexpand_bind_list);
  if (T228 != YPfalse) {
    T227 = VARREF(YevalSastYexpand_bind_list);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_expand_bind_list_341;
  T226 = XCALL2(1,VARREF(YPdefine_method),T227,T229);
  VARSET(YevalSastYexpand_bind_list,T226);
  lit_712 = YPPsym((P)"expand-bind-list*");
  lit_713 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  T231 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T230 = YPsig(LITREF(lit_713),YPPlist(3,T231,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_342 = YPmet(FUNCODEREF(fun_expand_bind_listT_342),LITREF(lit_712),T230,ENVNUL,PNUL,sloc(1151));
  T234 = BOUNDP(YevalSastYexpand_bind_listT);
  if (T234 != YPfalse) {
    T233 = VARREF(YevalSastYexpand_bind_listT);
  } else {
    T233 = YPfalse;
  }
  T235 = fun_expand_bind_listT_342;
  T232 = XCALL2(1,VARREF(YPdefine_method),T233,T235);
  VARSET(YevalSastYexpand_bind_listT,T232);
  lit_714 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  T236 = YPsig(LITREF(lit_714),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_343 = YPmet(FUNCODEREF(fun_expand_bind_listT_343),LITREF(lit_712),T236,ENVNUL,PNUL,sloc(1154));
  T239 = BOUNDP(YevalSastYexpand_bind_listT);
  if (T239 != YPfalse) {
    T238 = VARREF(YevalSastYexpand_bind_listT);
  } else {
    T238 = YPfalse;
  }
  T240 = fun_expand_bind_listT_343;
  T237 = XCALL2(1,VARREF(YPdefine_method),T238,T240);
  VARSET(YevalSastYexpand_bind_listT,T237);
  lit_715 = YPPsym((P)"expand-bind-element");
  lit_716 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_717 = YPPsym((P)"match-atom");
  T241 = YPsig(LITREF(lit_716),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_344 = YPmet(FUNCODEREF(fun_expand_bind_element_344),LITREF(lit_715),T241,ENVNUL,PNUL,sloc(1158));
  T244 = BOUNDP(YevalSastYexpand_bind_element);
  if (T244 != YPfalse) {
    T243 = VARREF(YevalSastYexpand_bind_element);
  } else {
    T243 = YPfalse;
  }
  T245 = fun_expand_bind_element_344;
  T242 = XCALL2(1,VARREF(YPdefine_method),T243,T245);
  VARSET(YevalSastYexpand_bind_element,T242);
  lit_718 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_719 = YPPsym((P)"match-unquote");
  lit_720 = YPPsym((P)"tail");
  lit_721 = YPPsym((P)"match-sublist");
  T246 = YPsig(LITREF(lit_718),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_345 = YPmet(FUNCODEREF(fun_expand_bind_element_345),LITREF(lit_715),T246,ENVNUL,PNUL,sloc(1161));
  T249 = BOUNDP(YevalSastYexpand_bind_element);
  if (T249 != YPfalse) {
    T248 = VARREF(YevalSastYexpand_bind_element);
  } else {
    T248 = YPfalse;
  }
  T250 = fun_expand_bind_element_345;
  T247 = XCALL2(1,VARREF(YPdefine_method),T248,T250);
  VARSET(YevalSastYexpand_bind_element,T247);
  lit_722 = YPPsym((P)"expand-pattern");
  lit_723 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_724 = YPPsym((P)"isa?");
  lit_725 = YPsb((P)"Match Pattern Failure");
  T251 = YPsig(LITREF(lit_723),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_pattern_346 = YPmet(FUNCODEREF(fun_expand_pattern_346),LITREF(lit_722),T251,ENVNUL,PNUL,sloc(1172));
  T254 = BOUNDP(YevalSastYexpand_pattern);
  if (T254 != YPfalse) {
    T253 = VARREF(YevalSastYexpand_pattern);
  } else {
    T253 = YPfalse;
  }
  T255 = fun_expand_pattern_346;
  T252 = XCALL2(1,VARREF(YPdefine_method),T253,T255);
  VARSET(YevalSastYexpand_pattern,T252);
  lit_726 = YPPsym((P)"expand-syntax-if");
  lit_727 = YPPlist(1,YPPsym((P)"x"));
  lit_728 = YPPsym((P)"esc");
  lit_729 = YPPsym((P)"return");
  lit_730 = YPPsym((P)"loc");
  lit_731 = YPPsym((P)"msg");
  lit_732 = YPPsym((P)"<str>");
  lit_733 = YPPsym((P)"args");
  lit_734 = YPPlist(1,YPPsym((P)"x"));
  T257 = YPsig(LITREF(lit_734),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_347 = YPmet(FUNCODEREF(fun_347),YPfalse,T257,ENVNUL,PNUL,YPfalse);
  T256 = YPsig(LITREF(lit_727),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_expand_syntax_if_348 = YPmet(FUNCODEREF(fun_expand_syntax_if_348),LITREF(lit_726),T256,ENVNUL,PNUL,sloc(1177));
  T260 = BOUNDP(YevalSastYexpand_syntax_if);
  if (T260 != YPfalse) {
    T259 = VARREF(YevalSastYexpand_syntax_if);
  } else {
    T259 = YPfalse;
  }
  T261 = fun_expand_syntax_if_348;
  T258 = XCALL2(1,VARREF(YPdefine_method),T259,T261);
  VARSET(YevalSastYexpand_syntax_if,T258);
  lit_735 = YPPsym((P)"r-extend*");
  lit_736 = YPPlist(2,YPPsym((P)"r"),YPPsym((P)"bindings"));
  T262 = YPsig(LITREF(lit_736),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YevalSastYLstatic_environmentG),Ynil);
  fun_r_extendT_349 = YPmet(FUNCODEREF(fun_r_extendT_349),LITREF(lit_735),T262,ENVNUL,PNUL,sloc(1201));
  T265 = BOUNDP(YevalSastYr_extendT);
  if (T265 != YPfalse) {
    T264 = VARREF(YevalSastYr_extendT);
  } else {
    T264 = YPfalse;
  }
  T266 = fun_r_extendT_349;
  T263 = XCALL2(1,VARREF(YPdefine_method),T264,T266);
  VARSET(YevalSastYr_extendT,T263);
  lit_737 = YPPsym((P)"insert-global!");
  lit_738 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"r"));
  T267 = YPsig(LITREF(lit_738),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalX_350 = YPmet(FUNCODEREF(fun_insert_globalX_350),LITREF(lit_737),T267,ENVNUL,PNUL,sloc(1205));
  T270 = BOUNDP(YevalSastYinsert_globalX);
  if (T270 != YPfalse) {
    T269 = VARREF(YevalSastYinsert_globalX);
  } else {
    T269 = YPfalse;
  }
  T271 = fun_insert_globalX_350;
  T268 = XCALL2(1,VARREF(YPdefine_method),T269,T271);
  VARSET(YevalSastYinsert_globalX,T268);
  lit_739 = YPPsym((P)"insert-globals!");
  lit_740 = YPPlist(2,YPPsym((P)"bindings"),YPPsym((P)"r"));
  lit_741 = YPPlist(1,YPPsym((P)"b"));
  T273 = YPsig(LITREF(lit_741),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_351 = YPmet(FUNCODEREF(fun_351),YPfalse,T273,ENVNUL,PNUL,sloc(1210));
  T272 = YPsig(LITREF(lit_740),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalsX_352 = YPmet(FUNCODEREF(fun_insert_globalsX_352),LITREF(lit_739),T272,ENVNUL,PNUL,sloc(1209));
  T276 = BOUNDP(YevalSastYinsert_globalsX);
  if (T276 != YPfalse) {
    T275 = VARREF(YevalSastYinsert_globalsX);
  } else {
    T275 = YPfalse;
  }
  T277 = fun_insert_globalsX_352;
  T274 = XCALL2(1,VARREF(YPdefine_method),T275,T277);
  VARSET(YevalSastYinsert_globalsX,T274);
  lit_742 = YPPsym((P)"find-static-global-environment");
  lit_743 = YPPlist(1,YPPsym((P)"r"));
  T278 = YPsig(LITREF(lit_743),YPPlist(1,VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  fun_find_static_global_environment_353 = YPmet(FUNCODEREF(fun_find_static_global_environment_353),LITREF(lit_742),T278,ENVNUL,PNUL,sloc(1212));
  T281 = BOUNDP(YevalSastYfind_static_global_environment);
  if (T281 != YPfalse) {
    T280 = VARREF(YevalSastYfind_static_global_environment);
  } else {
    T280 = YPfalse;
  }
  T282 = fun_find_static_global_environment_353;
  T279 = XCALL2(1,VARREF(YPdefine_method),T280,T282);
  VARSET(YevalSastYfind_static_global_environment,T279);
  lit_744 = YPPlist(1,YPPsym((P)"r"));
  T283 = YPsig(LITREF(lit_744),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  fun_find_static_global_environment_354 = YPmet(FUNCODEREF(fun_find_static_global_environment_354),LITREF(lit_742),T283,ENVNUL,PNUL,sloc(1216));
  T286 = BOUNDP(YevalSastYfind_static_global_environment);
  if (T286 != YPfalse) {
    T285 = VARREF(YevalSastYfind_static_global_environment);
  } else {
    T285 = YPfalse;
  }
  T287 = fun_find_static_global_environment_354;
  T284 = XCALL2(1,VARREF(YPdefine_method),T285,T287);
  VARSET(YevalSastYfind_static_global_environment,T284);
  lit_745 = YPPsym((P)"find-syntax-environment");
  lit_746 = YPPlist(1,YPPsym((P)"r"));
  T288 = YPsig(LITREF(lit_746),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  fun_find_syntax_environment_355 = YPmet(FUNCODEREF(fun_find_syntax_environment_355),LITREF(lit_745),T288,ENVNUL,PNUL,sloc(1220));
  T291 = BOUNDP(YevalSastYfind_syntax_environment);
  if (T291 != YPfalse) {
    T290 = VARREF(YevalSastYfind_syntax_environment);
  } else {
    T290 = YPfalse;
  }
  T292 = fun_find_syntax_environment_355;
  T289 = XCALL2(1,VARREF(YPdefine_method),T290,T292);
  VARSET(YevalSastYfind_syntax_environment,T289);
  lit_747 = YPPsym((P)"find-environment-module");
  lit_748 = YPPlist(1,YPPsym((P)"r"));
  T293 = YPsig(LITREF(lit_748),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_find_environment_module_356 = YPmet(FUNCODEREF(fun_find_environment_module_356),LITREF(lit_747),T293,ENVNUL,PNUL,sloc(1224));
  T296 = BOUNDP(YevalSastYfind_environment_module);
  if (T296 != YPfalse) {
    T295 = VARREF(YevalSastYfind_environment_module);
  } else {
    T295 = YPfalse;
  }
  T297 = fun_find_environment_module_356;
  T294 = XCALL2(1,VARREF(YPdefine_method),T295,T297);
  VARSET(YevalSastYfind_environment_module,T294);
  lit_749 = YPPsym((P)"find-binding");
  lit_750 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  lit_751 = YPPlist(1,YPPsym((P)"bindings"));
  T302 = YPsig(LITREF(lit_751),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T301 = fun_loop_357 = YPmet(FUNCODEREF(fun_loop_357),LITREF(lit_254),T302,ENVNUL,PNUL,sloc(1228));
  T300 = YPsig(LITREF(lit_750),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T299 = fun_find_binding_358 = YPmet(FUNCODEREF(fun_find_binding_358),LITREF(lit_749),T300,ENVNUL,PNUL,sloc(1227));
  T306 = BOUNDP(YevalSastYfind_binding);
  if (T306 != YPfalse) {
    T305 = VARREF(YevalSastYfind_binding);
  } else {
    T305 = YPfalse;
  }
  T307 = fun_find_binding_358;
  T304 = XCALL2(1,VARREF(YPdefine_method),T305,T307);
  T303 = VARSET(YevalSastYfind_binding,T304);
  T298 = T303;
  return T298;
}

P YevalSastY___main_7___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110;
DEFCREGS();
loop:
  lit_752 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T0 = YPsig(LITREF(lit_752),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_empty_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_359 = YPmet(FUNCODEREF(fun_find_binding_359),LITREF(lit_749),T0,ENVNUL,PNUL,sloc(1237));
  T3 = BOUNDP(YevalSastYfind_binding);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSastYfind_binding);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_find_binding_359;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSastYfind_binding,T1);
  lit_753 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T5 = YPsig(LITREF(lit_753),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_360 = YPmet(FUNCODEREF(fun_find_binding_360),LITREF(lit_749),T5,ENVNUL,PNUL,sloc(1240));
  T8 = BOUNDP(YevalSastYfind_binding);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSastYfind_binding);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_find_binding_360;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSastYfind_binding,T6);
  lit_754 = YPPsym((P)"frame-bindings");
  lit_755 = YPPlist(1,YPPsym((P)"env"));
  T10 = YPsig(LITREF(lit_755),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_frame_bindings_361 = YPmet(FUNCODEREF(fun_frame_bindings_361),LITREF(lit_754),T10,ENVNUL,PNUL,sloc(1246));
  T13 = BOUNDP(YevalSastYframe_bindings);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSastYframe_bindings);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_frame_bindings_361;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSastYframe_bindings,T11);
  VARSET(YevalSastYTmagic_bindingsT,Ynil);
  lit_756 = YPPsym((P)"register-magic-binding");
  lit_757 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"value"));
  T15 = YPsig(LITREF(lit_757),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_magic_binding_362 = YPmet(FUNCODEREF(fun_register_magic_binding_362),LITREF(lit_756),T15,ENVNUL,PNUL,sloc(1254));
  T18 = BOUNDP(YevalSastYregister_magic_binding);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSastYregister_magic_binding);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_register_magic_binding_362;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSastYregister_magic_binding,T16);
  lit_758 = YPPsym((P)"magic-bindings");
  T20 = YPsig(LITREF(lit_612),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_magic_bindings_363 = YPmet(FUNCODEREF(fun_magic_bindings_363),LITREF(lit_758),T20,ENVNUL,PNUL,sloc(1257));
  T23 = BOUNDP(YevalSastYmagic_bindings);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSastYmagic_bindings);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_magic_bindings_363;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSastYmagic_bindings,T21);
  lit_759 = YPPlist(1,YPPsym((P)"exp"));
  lit_760 = YPPlist(1,YPPsym((P)"return"));
  lit_761 = YPPsym((P)"x-1454");
  lit_762 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_763 = YPPsym((P)"define-magic-binding");
  lit_764 = YPsb((P)"special-");
  lit_765 = YPsb((P)"$sexpr-");
  lit_766 = YPsb((P)"-tag");
  lit_767 = YPPsym((P)"dv");
  lit_768 = YPPsym((P)"new");
  lit_769 = YPPsym((P)"binding-handler");
  lit_770 = YPPsym((P)"fun");
  T27 = YPsig(LITREF(lit_762),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1454_364 = YPmet(FUNCODEREF(fun_x_1454_364),LITREF(lit_761),T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(LITREF(lit_760),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_365 = YPmet(FUNCODEREF(fun_365),YPfalse,T26,ENVNUL,PNUL,YPfalse);
  T25 = YPsig(LITREF(lit_759),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_366 = YPmet(FUNCODEREF(fun_366),YPfalse,T25,ENVNUL,PNUL,YPfalse);
  T28 = fun_366;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"define-magic-binding"),T28);
  lit_771 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T29 = YPsig(LITREF(lit_771),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_367 = YPmet(FUNCODEREF(fun_367),YPfalse,T29,ENVNUL,PNUL,sloc(1272));
  T31 = fun_367;
  T30 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_if_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T31,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_if,T30);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_607),VARREF(YevalSastYspecial_if));
  lit_772 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T32 = YPsig(LITREF(lit_772),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_368 = YPmet(FUNCODEREF(fun_368),YPfalse,T32,ENVNUL,PNUL,sloc(1276));
  T34 = fun_368;
  T33 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_begin_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T34,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_begin,T33);
  lit_773 = YPPsym((P)"begin");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_773),VARREF(YevalSastYspecial_begin));
  lit_774 = YPPsym((P)"%raw");
  VARSET(YevalSastYDsexpr_Praw_tag,LITREF(lit_774));
  lit_775 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T35 = YPsig(LITREF(lit_775),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_369 = YPmet(FUNCODEREF(fun_369),YPfalse,T35,ENVNUL,PNUL,sloc(1281));
  T37 = fun_369;
  T36 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_Praw_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T37,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_Praw,T36);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_774),VARREF(YevalSastYspecial_Praw));
  lit_776 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T38 = YPsig(LITREF(lit_776),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_370 = YPmet(FUNCODEREF(fun_370),YPfalse,T38,ENVNUL,PNUL,sloc(1284));
  T40 = fun_370;
  T39 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_quote_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T40,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_quote,T39);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_550),VARREF(YevalSastYspecial_quote));
  lit_777 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T41 = YPsig(LITREF(lit_777),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_371 = YPmet(FUNCODEREF(fun_371),YPfalse,T41,ENVNUL,PNUL,sloc(1287));
  T43 = fun_371;
  T42 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_set_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T43,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_set,T42);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_10),VARREF(YevalSastYspecial_set));
  lit_778 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T44 = YPsig(LITREF(lit_778),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_372 = YPmet(FUNCODEREF(fun_372),YPfalse,T44,ENVNUL,PNUL,sloc(1291));
  T46 = fun_372;
  T45 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T46,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define,T45);
  lit_779 = YPPsym((P)"define");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_779),VARREF(YevalSastYspecial_define));
  lit_780 = YPPsym((P)"ddv");
  VARSET(YevalSastYDsexpr_define_dynamic_tag,LITREF(lit_780));
  lit_781 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T47 = YPsig(LITREF(lit_781),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_373 = YPmet(FUNCODEREF(fun_373),YPfalse,T47,ENVNUL,PNUL,sloc(1297));
  T49 = fun_373;
  T48 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_define_dynamic_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T49,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_dynamic,T48);
  lit_782 = YPPsym((P)"define-dynamic");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_782),VARREF(YevalSastYspecial_define_dynamic));
  lit_783 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T50 = YPsig(LITREF(lit_783),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_374 = YPmet(FUNCODEREF(fun_374),YPfalse,T50,ENVNUL,PNUL,sloc(1301));
  T52 = fun_374;
  T51 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_syntax_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T52,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_syntax,T51);
  lit_784 = YPPsym((P)"define-syntax");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_784),VARREF(YevalSastYspecial_define_syntax));
  lit_785 = YPPsym((P)"dss");
  VARSET(YevalSastYDsexpr_define_static_syntax_tag,LITREF(lit_785));
  lit_786 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T53 = YPsig(LITREF(lit_786),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_375 = YPmet(FUNCODEREF(fun_375),YPfalse,T53,ENVNUL,PNUL,sloc(1307));
  T55 = fun_375;
  T54 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_define_static_syntax_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T55,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_static_syntax,T54);
  lit_787 = YPPsym((P)"define-static-syntax");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_787),VARREF(YevalSastYspecial_define_static_syntax));
  lit_788 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T56 = YPsig(LITREF(lit_788),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_376 = YPmet(FUNCODEREF(fun_376),YPfalse,T56,ENVNUL,PNUL,sloc(1311));
  T58 = fun_376;
  T57 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_method_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T58,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_method,T57);
  lit_789 = YPPsym((P)"define-method");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_789),VARREF(YevalSastYspecial_define_method));
  lit_790 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T59 = YPsig(LITREF(lit_790),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_377 = YPmet(FUNCODEREF(fun_377),YPfalse,T59,ENVNUL,PNUL,sloc(1316));
  T61 = fun_377;
  T60 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_generic_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T61,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_generic,T60);
  lit_791 = YPPsym((P)"define-generic");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_791),VARREF(YevalSastYspecial_define_generic));
  lit_792 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T62 = YPsig(LITREF(lit_792),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_378 = YPmet(FUNCODEREF(fun_378),YPfalse,T62,ENVNUL,PNUL,sloc(1320));
  T64 = fun_378;
  T63 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_function_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T64,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_function,T63);
  lit_793 = YPPsym((P)"define-function");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_793),VARREF(YevalSastYspecial_define_function));
  lit_794 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T65 = YPsig(LITREF(lit_794),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_379 = YPmet(FUNCODEREF(fun_379),YPfalse,T65,ENVNUL,PNUL,sloc(1325));
  T67 = fun_379;
  T66 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_method_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T67,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_method,T66);
  lit_795 = YPPsym((P)"method");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_795),VARREF(YevalSastYspecial_method));
  VARSET(YevalSastYDsexpr_boundQ_tag,LITREF(lit_608));
  lit_796 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T68 = YPsig(LITREF(lit_796),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_380 = YPmet(FUNCODEREF(fun_380),YPfalse,T68,ENVNUL,PNUL,sloc(1331));
  T70 = fun_380;
  T69 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_boundQ_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T70,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_boundQ,T69);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_608),VARREF(YevalSastYspecial_boundQ));
  lit_797 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T71 = YPsig(LITREF(lit_797),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_381 = YPmet(FUNCODEREF(fun_381),YPfalse,T71,ENVNUL,PNUL,sloc(1334));
  T73 = fun_381;
  T72 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_let_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T73,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_let,T72);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_7),VARREF(YevalSastYspecial_let));
  lit_798 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T74 = YPsig(LITREF(lit_798),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_382 = YPmet(FUNCODEREF(fun_382),YPfalse,T74,ENVNUL,PNUL,sloc(1340));
  T76 = fun_382;
  T75 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_def_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T76,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_def,T75);
  lit_799 = YPPsym((P)"def");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_799),VARREF(YevalSastYspecial_def));
  lit_800 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T77 = YPsig(LITREF(lit_800),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_383 = YPmet(FUNCODEREF(fun_383),YPfalse,T77,ENVNUL,PNUL,sloc(1343));
  T79 = fun_383;
  T78 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_locals_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T79,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_locals,T78);
  lit_801 = YPPsym((P)"locals");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_801),VARREF(YevalSastYspecial_locals));
  lit_802 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T80 = YPsig(LITREF(lit_802),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_384 = YPmet(FUNCODEREF(fun_384),YPfalse,T80,ENVNUL,PNUL,sloc(1348));
  T82 = fun_384;
  T81 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_iterate_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T82,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_iterate,T81);
  lit_803 = YPPsym((P)"iterate");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_803),VARREF(YevalSastYspecial_iterate));
  lit_804 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T83 = YPsig(LITREF(lit_804),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_385 = YPmet(FUNCODEREF(fun_385),YPfalse,T83,ENVNUL,PNUL,sloc(1351));
  T85 = fun_385;
  T84 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_bind_exit_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T85,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_bind_exit,T84);
  lit_805 = YPPsym((P)"bind-exit");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_805),VARREF(YevalSastYspecial_bind_exit));
  lit_806 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T86 = YPsig(LITREF(lit_806),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_386 = YPmet(FUNCODEREF(fun_386),YPfalse,T86,ENVNUL,PNUL,sloc(1355));
  T88 = fun_386;
  T87 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_unwind_protect_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T88,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_unwind_protect,T87);
  lit_807 = YPPsym((P)"unwind-protect");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_807),VARREF(YevalSastYspecial_unwind_protect));
  lit_808 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T89 = YPsig(LITREF(lit_808),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_387 = YPmet(FUNCODEREF(fun_387),YPfalse,T89,ENVNUL,PNUL,sloc(1361));
  T91 = fun_387;
  T90 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_monitor_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T91,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_monitor,T90);
  lit_809 = YPPsym((P)"monitor");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_809),VARREF(YevalSastYspecial_monitor));
  lit_810 = YPPsym((P)"pairize");
  lit_811 = YPPlist(1,YPPsym((P)"args"));
  T92 = YPsig(LITREF(lit_811),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pairize_388 = YPmet(FUNCODEREF(fun_pairize_388),LITREF(lit_810),T92,ENVNUL,PNUL,sloc(1365));
  T95 = BOUNDP(YevalSastYpairize);
  if (T95 != YPfalse) {
    T94 = VARREF(YevalSastYpairize);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_pairize_388;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YevalSastYpairize,T93);
  lit_812 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_813 = YPPsym((P)"fab-class");
  T97 = YPsig(LITREF(lit_812),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_389 = YPmet(FUNCODEREF(fun_389),YPfalse,T97,ENVNUL,PNUL,sloc(1370));
  T99 = fun_389;
  T98 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_class_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T99,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_class,T98);
  lit_814 = YPPsym((P)"define-class");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_814),VARREF(YevalSastYspecial_define_class));
  lit_815 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_816 = YPPsym((P)"%prop");
  lit_817 = YPPsym((P)"%prop-unbound-error");
  T100 = YPsig(LITREF(lit_815),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_390 = YPmet(FUNCODEREF(fun_390),YPfalse,T100,ENVNUL,PNUL,sloc(1375));
  T102 = fun_390;
  T101 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_prop_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T102,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_prop,T101);
  lit_818 = YPPsym((P)"prop");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_818),VARREF(YevalSastYspecial_prop));
  lit_819 = YPPsym((P)"ct");
  VARSET(YevalSastYDsexpr_compile_time_tag,LITREF(lit_819));
  lit_820 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T103 = YPsig(LITREF(lit_820),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_391 = YPmet(FUNCODEREF(fun_391),YPfalse,T103,ENVNUL,PNUL,sloc(1398));
  T105 = fun_391;
  T104 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_compile_time_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T105,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_compile_time,T104);
  lit_821 = YPPsym((P)"compile-time");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_821),VARREF(YevalSastYspecial_compile_time));
  lit_822 = YPPsym((P)"ct-also");
  VARSET(YevalSastYDsexpr_compile_time_also_tag,LITREF(lit_822));
  lit_823 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T106 = YPsig(LITREF(lit_823),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_392 = YPmet(FUNCODEREF(fun_392),YPfalse,T106,ENVNUL,PNUL,sloc(1403));
  T108 = fun_392;
  T107 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_compile_time_also_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T108,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_compile_time_also,T107);
  lit_824 = YPPsym((P)"compile-time-also");
  T110 = XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_824),VARREF(YevalSastYspecial_compile_time_also));
  T109 = T110;
  return T109;
}

P YevalSastY___main_8___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164;
DEFCREGS();
loop:
  lit_825 = YPPsym((P)"dl");
  VARSET(YevalSastYDsexpr_define_primitive_tag,LITREF(lit_825));
  lit_826 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T0 = YPsig(LITREF(lit_826),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_393 = YPmet(FUNCODEREF(fun_393),YPfalse,T0,ENVNUL,PNUL,sloc(1408));
  T2 = fun_393;
  T1 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_define_primitive_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T2,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_primitive,T1);
  lit_827 = YPPsym((P)"define-primitive");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_827),VARREF(YevalSastYspecial_define_primitive));
  lit_828 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T3 = YPsig(LITREF(lit_828),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_394 = YPmet(FUNCODEREF(fun_394),YPfalse,T3,ENVNUL,PNUL,sloc(1418));
  T5 = fun_394;
  T4 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_quasiquote_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T5,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_quasiquote,T4);
  lit_829 = YPPsym((P)"quasiquote");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_829),VARREF(YevalSastYspecial_quasiquote));
  lit_830 = YPPsym((P)"ast-macro-expand");
  lit_831 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T6 = YPsig(LITREF(lit_831),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_macro_expand_395 = YPmet(FUNCODEREF(fun_ast_macro_expand_395),LITREF(lit_830),T6,ENVNUL,PNUL,sloc(1421));
  T9 = BOUNDP(YevalSastYast_macro_expand);
  if (T9 != YPfalse) {
    T8 = VARREF(YevalSastYast_macro_expand);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_ast_macro_expand_395;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(YevalSastYast_macro_expand,T7);
  lit_832 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T11 = YPsig(LITREF(lit_832),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_396 = YPmet(FUNCODEREF(fun_396),YPfalse,T11,ENVNUL,PNUL,sloc(1430));
  T13 = fun_396;
  T12 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_macro_expand_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T13,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_macro_expand,T12);
  lit_833 = YPPsym((P)"macro-expand");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_833),VARREF(YevalSastYspecial_macro_expand));
  lit_834 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T14 = YPsig(LITREF(lit_834),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_397 = YPmet(FUNCODEREF(fun_397),YPfalse,T14,ENVNUL,PNUL,sloc(1434));
  T16 = fun_397;
  T15 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_syntax_if_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T16,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_syntax_if,T15);
  lit_835 = YPPsym((P)"syntax-if");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_835),VARREF(YevalSastYspecial_syntax_if));
  lit_836 = YPPsym((P)"export");
  VARSET(YevalSastYDsexpr_export_tag,LITREF(lit_836));
  lit_837 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T17 = YPsig(LITREF(lit_837),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_398 = YPmet(FUNCODEREF(fun_398),YPfalse,T17,ENVNUL,PNUL,sloc(1444));
  T19 = fun_398;
  T18 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_export_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T19,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_export,T18);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_836),VARREF(YevalSastYspecial_export));
  lit_838 = YPPsym((P)"use");
  VARSET(YevalSastYDsexpr_use_module_tag,LITREF(lit_838));
  lit_839 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T20 = YPsig(LITREF(lit_839),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_399 = YPmet(FUNCODEREF(fun_399),YPfalse,T20,ENVNUL,PNUL,sloc(1449));
  T22 = fun_399;
  T21 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_module_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T22,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_module,T21);
  lit_840 = YPPsym((P)"use-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_840),VARREF(YevalSastYspecial_use_module));
  lit_841 = YPPsym((P)"use/mangle");
  VARSET(YevalSastYDsexpr_use_mangle_module_tag,LITREF(lit_841));
  lit_842 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T23 = YPsig(LITREF(lit_842),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_400 = YPmet(FUNCODEREF(fun_400),YPfalse,T23,ENVNUL,PNUL,sloc(1454));
  T25 = fun_400;
  T24 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_mangle_module_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T25,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_mangle_module,T24);
  lit_843 = YPPsym((P)"use-mangle-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_843),VARREF(YevalSastYspecial_use_mangle_module));
  lit_844 = YPPsym((P)"use/include");
  VARSET(YevalSastYDsexpr_use_include_tag,LITREF(lit_844));
  lit_845 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T26 = YPsig(LITREF(lit_845),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_401 = YPmet(FUNCODEREF(fun_401),YPfalse,T26,ENVNUL,PNUL,sloc(1459));
  T28 = fun_401;
  T27 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_include_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T28,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_include,T27);
  lit_846 = YPPsym((P)"use-include");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_846),VARREF(YevalSastYspecial_use_include));
  lit_847 = YPPsym((P)"use/library");
  VARSET(YevalSastYDsexpr_use_library_tag,LITREF(lit_847));
  lit_848 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T29 = YPsig(LITREF(lit_848),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_402 = YPmet(FUNCODEREF(fun_402),YPfalse,T29,ENVNUL,PNUL,sloc(1464));
  T31 = fun_402;
  T30 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_library_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T31,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_library,T30);
  lit_849 = YPPsym((P)"use-library");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_849),VARREF(YevalSastYspecial_use_library));
  lit_850 = YPPsym((P)"use/export");
  VARSET(YevalSastYDsexpr_useSexport_module_tag,LITREF(lit_850));
  lit_851 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T32 = YPsig(LITREF(lit_851),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_403 = YPmet(FUNCODEREF(fun_403),YPfalse,T32,ENVNUL,PNUL,sloc(1469));
  T34 = fun_403;
  T33 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_572),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_useSexport_module_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T34,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_useSexport_module,T33);
  lit_852 = YPPsym((P)"use/export-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_852),VARREF(YevalSastYspecial_useSexport_module));
  lit_853 = YPPsym((P)"<transaction>");
  T36 = (P)YPpair(VARREF(YLanyG),Ynil);
  T35 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_853),T36);
  VARSET(YevalSastYLtransactionG,T35);
  lit_854 = YPPsym((P)"transaction-implemented-bindings");
  lit_855 = YPPlist(1,YPPsym((P)"_x"));
  T37 = YPsig(LITREF(lit_855),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_transaction_implemented_bindings_404 = YPmet(FUNCODEREF(fun_transaction_implemented_bindings_404),LITREF(lit_854),T37,ENVNUL,PNUL,sloc(1499));
  T40 = BOUNDP(YevalSastYtransaction_implemented_bindings);
  if (T40 != YPfalse) {
    T39 = VARREF(YevalSastYtransaction_implemented_bindings);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_transaction_implemented_bindings_404;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YevalSastYtransaction_implemented_bindings,T38);
  lit_856 = YPPsym((P)"transaction-implemented-bindings-setter");
  lit_857 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T42 = YPsig(LITREF(lit_857),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_transaction_implemented_bindings_setter_405 = YPmet(FUNCODEREF(fun_transaction_implemented_bindings_setter_405),LITREF(lit_856),T42,ENVNUL,PNUL,sloc(1499));
  T45 = BOUNDP(YevalSastYtransaction_implemented_bindings_setter);
  if (T45 != YPfalse) {
    T44 = VARREF(YevalSastYtransaction_implemented_bindings_setter);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_transaction_implemented_bindings_setter_405;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YevalSastYtransaction_implemented_bindings_setter,T43);
  lit_858 = YPPlist(1,YPPsym((P)"_x"));
  T47 = YPsig(LITREF(lit_858),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_406 = YPmet(FUNCODEREF(fun_406),YPfalse,T47,ENVNUL,PNUL,sloc(1499));
  T48 = fun_406;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLtransactionG),VARREF(YevalSastYtransaction_implemented_bindings),VARREF(YevalSastYtransaction_implemented_bindings_setter),VARREF(YgooScolsScolYLtabG),T48);
  lit_859 = YPPsym((P)"transaction-dependents");
  lit_860 = YPPlist(1,YPPsym((P)"_x"));
  T49 = YPsig(LITREF(lit_860),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_transaction_dependents_407 = YPmet(FUNCODEREF(fun_transaction_dependents_407),LITREF(lit_859),T49,ENVNUL,PNUL,sloc(1500));
  T52 = BOUNDP(YevalSastYtransaction_dependents);
  if (T52 != YPfalse) {
    T51 = VARREF(YevalSastYtransaction_dependents);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_transaction_dependents_407;
  T50 = XCALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YevalSastYtransaction_dependents,T50);
  lit_861 = YPPsym((P)"transaction-dependents-setter");
  lit_862 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T54 = YPsig(LITREF(lit_862),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_transaction_dependents_setter_408 = YPmet(FUNCODEREF(fun_transaction_dependents_setter_408),LITREF(lit_861),T54,ENVNUL,PNUL,sloc(1500));
  T57 = BOUNDP(YevalSastYtransaction_dependents_setter);
  if (T57 != YPfalse) {
    T56 = VARREF(YevalSastYtransaction_dependents_setter);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_transaction_dependents_setter_408;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YevalSastYtransaction_dependents_setter,T55);
  lit_863 = YPPlist(1,YPPsym((P)"_x"));
  T59 = YPsig(LITREF(lit_863),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_409 = YPmet(FUNCODEREF(fun_409),YPfalse,T59,ENVNUL,PNUL,sloc(1500));
  T60 = fun_409;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLtransactionG),VARREF(YevalSastYtransaction_dependents),VARREF(YevalSastYtransaction_dependents_setter),VARREF(YgooScolsScolYLtabG),T60);
  VARSET(YevalSastYTcurrent_subtransactionT,YPfalse);
  lit_864 = YPPsym((P)"transaction-register-implemented-binding");
  lit_865 = YPPlist(1,YPPsym((P)"b"));
  lit_866 = YPsb((P)"Can't register implemented foreign binding (no subtransaction)");
  T61 = YPsig(LITREF(lit_865),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYtransaction_register_implemented_binding = YPmet(FUNCODEREF(YevalSastYtransaction_register_implemented_binding),LITREF(lit_864),T61,ENVNUL,PNUL,sloc(1504));
  T62 = YevalSastYtransaction_register_implemented_binding;
  VARSET(YevalSastYtransaction_register_implemented_binding,T62);
  lit_867 = YPPsym((P)"transaction-register-dependent");
  lit_868 = YPPlist(1,YPPsym((P)"d"));
  lit_869 = YPsb((P)"Can't register dependent (no subtransaction)");
  T63 = YPsig(LITREF(lit_868),YPPlist(1,VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYtransaction_register_dependent = YPmet(FUNCODEREF(YevalSastYtransaction_register_dependent),LITREF(lit_867),T63,ENVNUL,PNUL,sloc(1510));
  T64 = YevalSastYtransaction_register_dependent;
  VARSET(YevalSastYtransaction_register_dependent,T64);
  lit_870 = YPPsym((P)"transaction-empty?");
  lit_871 = YPPlist(1,YPPsym((P)"t"));
  T65 = YPsig(LITREF(lit_871),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSastYtransaction_emptyQ = YPmet(FUNCODEREF(YevalSastYtransaction_emptyQ),LITREF(lit_870),T65,ENVNUL,PNUL,sloc(1515));
  T66 = YevalSastYtransaction_emptyQ;
  VARSET(YevalSastYtransaction_emptyQ,T66);
  lit_872 = YPPsym((P)"merge-transactions!");
  lit_873 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_874 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  lit_875 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  T69 = YPsig(LITREF(lit_874),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_413 = YPmet(FUNCODEREF(fun_413),YPfalse,T69,ENVNUL,PNUL,sloc(1530));
  T68 = YPsig(LITREF(lit_875),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_414 = YPmet(FUNCODEREF(fun_414),YPfalse,T68,ENVNUL,PNUL,sloc(1531));
  T67 = YPsig(LITREF(lit_873),YPPlist(2,VARREF(YevalSastYLtransactionG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YevalSastYLtransactionG),Ynil);
  YevalSastYmerge_transactionsX = YPmet(FUNCODEREF(YevalSastYmerge_transactionsX),LITREF(lit_872),T67,ENVNUL,PNUL,sloc(1519));
  T70 = YevalSastYmerge_transactionsX;
  VARSET(YevalSastYmerge_transactionsX,T70);
  lit_876 = YPPsym((P)"roll-back-transaction");
  lit_877 = YPPlist(1,YPPsym((P)"t"));
  lit_878 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"junk"));
  lit_879 = YPPlist(2,YPPsym((P)"dependent"),YPPsym((P)"junk"));
  T73 = YPsig(LITREF(lit_878),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_416 = YPmet(FUNCODEREF(fun_416),YPfalse,T73,ENVNUL,PNUL,sloc(1536));
  T72 = YPsig(LITREF(lit_879),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_417 = YPmet(FUNCODEREF(fun_417),YPfalse,T72,ENVNUL,PNUL,sloc(1539));
  T71 = YPsig(LITREF(lit_877),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYroll_back_transaction = YPmet(FUNCODEREF(YevalSastYroll_back_transaction),LITREF(lit_876),T71,ENVNUL,PNUL,sloc(1534));
  T74 = YevalSastYroll_back_transaction;
  VARSET(YevalSastYroll_back_transaction,T74);
  lit_880 = YPPsym((P)"call-with-subtransaction");
  lit_881 = YPPlist(2,YPPsym((P)"module"),YPPsym((P)"thunk"));
  T77 = YPsig(LITREF(lit_612),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_419 = YPmet(FUNCODEREF(fun_419),YPfalse,T77,ENVNUL,PNUL,sloc(1545));
  T76 = YPsig(LITREF(lit_612),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_420 = YPmet(FUNCODEREF(fun_420),YPfalse,T76,ENVNUL,PNUL,sloc(1557));
  T75 = YPsig(LITREF(lit_881),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYcall_with_subtransaction = YPmet(FUNCODEREF(YevalSastYcall_with_subtransaction),LITREF(lit_880),T75,ENVNUL,PNUL,sloc(1542));
  T78 = YevalSastYcall_with_subtransaction;
  VARSET(YevalSastYcall_with_subtransaction,T78);
  lit_882 = YPPlist(1,YPPsym((P)"exp"));
  lit_883 = YPPlist(1,YPPsym((P)"return"));
  lit_884 = YPPsym((P)"x-1458");
  lit_885 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_886 = YPPsym((P)"with-subtransaction");
  T81 = YPsig(LITREF(lit_885),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1458_422 = YPmet(FUNCODEREF(fun_x_1458_422),LITREF(lit_884),T81,ENVNUL,PNUL,YPfalse);
  T80 = YPsig(LITREF(lit_883),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_423 = YPmet(FUNCODEREF(fun_423),YPfalse,T80,ENVNUL,PNUL,YPfalse);
  T79 = YPsig(LITREF(lit_882),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_424 = YPmet(FUNCODEREF(fun_424),YPfalse,T79,ENVNUL,PNUL,YPfalse);
  T82 = fun_424;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"with-subtransaction"),T82);
  lit_887 = YPPsym((P)"objectify-with-subtransaction");
  lit_888 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T84 = YPsig(LITREF(lit_612),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_425 = YPmet(FUNCODEREF(fun_425),YPfalse,T84,ENVNUL,PNUL,sloc(1572));
  T83 = YPsig(LITREF(lit_888),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYobjectify_with_subtransaction = YPmet(FUNCODEREF(YevalSastYobjectify_with_subtransaction),LITREF(lit_887),T83,ENVNUL,PNUL,sloc(1571));
  T85 = YevalSastYobjectify_with_subtransaction;
  VARSET(YevalSastYobjectify_with_subtransaction,T85);
  lit_889 = YPPsym((P)"<module-loader>");
  T87 = (P)YPpair(VARREF(YLanyG),Ynil);
  T86 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_889),T87);
  VARSET(YevalSastYLmodule_loaderG,T86);
  lit_890 = YPPsym((P)"module-loader-modules");
  lit_891 = YPPlist(1,YPPsym((P)"_x"));
  T88 = YPsig(LITREF(lit_891),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_427 = YPmet(FUNCODEREF(fun_module_loader_modules_427),LITREF(lit_890),T88,ENVNUL,PNUL,sloc(1596));
  T91 = BOUNDP(YevalSastYmodule_loader_modules);
  if (T91 != YPfalse) {
    T90 = VARREF(YevalSastYmodule_loader_modules);
  } else {
    T90 = YPfalse;
  }
  T92 = fun_module_loader_modules_427;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T92);
  VARSET(YevalSastYmodule_loader_modules,T89);
  lit_892 = YPPsym((P)"module-loader-modules-setter");
  lit_893 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T93 = YPsig(LITREF(lit_893),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_setter_428 = YPmet(FUNCODEREF(fun_module_loader_modules_setter_428),LITREF(lit_892),T93,ENVNUL,PNUL,sloc(1596));
  T96 = BOUNDP(YevalSastYmodule_loader_modules_setter);
  if (T96 != YPfalse) {
    T95 = VARREF(YevalSastYmodule_loader_modules_setter);
  } else {
    T95 = YPfalse;
  }
  T97 = fun_module_loader_modules_setter_428;
  T94 = XCALL2(1,VARREF(YPdefine_method),T95,T97);
  VARSET(YevalSastYmodule_loader_modules_setter,T94);
  lit_894 = YPPlist(1,YPPsym((P)"_x"));
  T98 = YPsig(LITREF(lit_894),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_429 = YPmet(FUNCODEREF(fun_429),YPfalse,T98,ENVNUL,PNUL,sloc(1596));
  T99 = fun_429;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYmodule_loader_modules),VARREF(YevalSastYmodule_loader_modules_setter),VARREF(YgooScolsScolYLtabG),T99);
  lit_895 = YPPsym((P)"module-loader-stack");
  lit_896 = YPPlist(1,YPPsym((P)"_x"));
  T100 = YPsig(LITREF(lit_896),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_stack_430 = YPmet(FUNCODEREF(fun_module_loader_stack_430),LITREF(lit_895),T100,ENVNUL,PNUL,sloc(1599));
  T103 = BOUNDP(YevalSastYmodule_loader_stack);
  if (T103 != YPfalse) {
    T102 = VARREF(YevalSastYmodule_loader_stack);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_module_loader_stack_430;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YevalSastYmodule_loader_stack,T101);
  lit_897 = YPPsym((P)"module-loader-stack-setter");
  lit_898 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T105 = YPsig(LITREF(lit_898),YPPlist(2,VARREF(YLlstG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_stack_setter_431 = YPmet(FUNCODEREF(fun_module_loader_stack_setter_431),LITREF(lit_897),T105,ENVNUL,PNUL,sloc(1599));
  T108 = BOUNDP(YevalSastYmodule_loader_stack_setter);
  if (T108 != YPfalse) {
    T107 = VARREF(YevalSastYmodule_loader_stack_setter);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_module_loader_stack_setter_431;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YevalSastYmodule_loader_stack_setter,T106);
  lit_899 = YPPlist(1,YPPsym((P)"_x"));
  T110 = YPsig(LITREF(lit_899),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_432 = YPmet(FUNCODEREF(fun_432),YPfalse,T110,ENVNUL,PNUL,sloc(1599));
  T111 = fun_432;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYmodule_loader_stack),VARREF(YevalSastYmodule_loader_stack_setter),VARREF(YLlstG),T111);
  lit_900 = YPPsym((P)"<module>");
  T113 = (P)YPpair(VARREF(YLanyG),Ynil);
  T112 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_900),T113);
  VARSET(YevalSastYLmoduleG,T112);
  lit_901 = YPPsym((P)"module-name");
  lit_902 = YPPlist(1,YPPsym((P)"_x"));
  T114 = YPsig(LITREF(lit_902),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_name_433 = YPmet(FUNCODEREF(fun_module_name_433),LITREF(lit_901),T114,ENVNUL,PNUL,sloc(1604));
  T117 = BOUNDP(YevalSastYmodule_name);
  if (T117 != YPfalse) {
    T116 = VARREF(YevalSastYmodule_name);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_module_name_433;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YevalSastYmodule_name,T115);
  lit_903 = YPPsym((P)"module-name-setter");
  lit_904 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T119 = YPsig(LITREF(lit_904),YPPlist(2,VARREF(YLsymG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_name_setter_434 = YPmet(FUNCODEREF(fun_module_name_setter_434),LITREF(lit_903),T119,ENVNUL,PNUL,sloc(1604));
  T122 = BOUNDP(YevalSastYmodule_name_setter);
  if (T122 != YPfalse) {
    T121 = VARREF(YevalSastYmodule_name_setter);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_module_name_setter_434;
  T120 = XCALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YevalSastYmodule_name_setter,T120);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_name),VARREF(YevalSastYmodule_name_setter),VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_905 = YPPsym((P)"module-mangled-name");
  lit_906 = YPPlist(1,YPPsym((P)"_x"));
  T124 = YPsig(LITREF(lit_906),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mangled_name_435 = YPmet(FUNCODEREF(fun_module_mangled_name_435),LITREF(lit_905),T124,ENVNUL,PNUL,sloc(1605));
  T127 = BOUNDP(YevalSastYmodule_mangled_name);
  if (T127 != YPfalse) {
    T126 = VARREF(YevalSastYmodule_mangled_name);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_module_mangled_name_435;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YevalSastYmodule_mangled_name,T125);
  lit_907 = YPPsym((P)"module-mangled-name-setter");
  lit_908 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T130 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T129 = YPsig(LITREF(lit_908),YPPlist(2,T130,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mangled_name_setter_436 = YPmet(FUNCODEREF(fun_module_mangled_name_setter_436),LITREF(lit_907),T129,ENVNUL,PNUL,sloc(1605));
  T133 = BOUNDP(YevalSastYmodule_mangled_name_setter);
  if (T133 != YPfalse) {
    T132 = VARREF(YevalSastYmodule_mangled_name_setter);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_module_mangled_name_setter_436;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YevalSastYmodule_mangled_name_setter,T131);
  lit_909 = YPPlist(1,YPPsym((P)"_x"));
  T135 = YPsig(LITREF(lit_909),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_437 = YPmet(FUNCODEREF(fun_437),YPfalse,T135,ENVNUL,PNUL,sloc(1605));
  T136 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T137 = fun_437;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_mangled_name),VARREF(YevalSastYmodule_mangled_name_setter),T136,T137);
  lit_910 = YPPsym((P)"module-mangled-string-name");
  lit_911 = YPPlist(1,YPPsym((P)"_x"));
  T138 = YPsig(LITREF(lit_911),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mangled_string_name_438 = YPmet(FUNCODEREF(fun_module_mangled_string_name_438),LITREF(lit_910),T138,ENVNUL,PNUL,sloc(1606));
  T141 = BOUNDP(YevalSastYmodule_mangled_string_name);
  if (T141 != YPfalse) {
    T140 = VARREF(YevalSastYmodule_mangled_string_name);
  } else {
    T140 = YPfalse;
  }
  T142 = fun_module_mangled_string_name_438;
  T139 = XCALL2(1,VARREF(YPdefine_method),T140,T142);
  VARSET(YevalSastYmodule_mangled_string_name,T139);
  lit_912 = YPPsym((P)"module-mangled-string-name-setter");
  lit_913 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T144 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T143 = YPsig(LITREF(lit_913),YPPlist(2,T144,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mangled_string_name_setter_439 = YPmet(FUNCODEREF(fun_module_mangled_string_name_setter_439),LITREF(lit_912),T143,ENVNUL,PNUL,sloc(1606));
  T147 = BOUNDP(YevalSastYmodule_mangled_string_name_setter);
  if (T147 != YPfalse) {
    T146 = VARREF(YevalSastYmodule_mangled_string_name_setter);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_module_mangled_string_name_setter_439;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalSastYmodule_mangled_string_name_setter,T145);
  lit_914 = YPPlist(1,YPPsym((P)"_x"));
  T149 = YPsig(LITREF(lit_914),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_440 = YPmet(FUNCODEREF(fun_440),YPfalse,T149,ENVNUL,PNUL,sloc(1606));
  T150 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T151 = fun_440;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_mangled_string_name),VARREF(YevalSastYmodule_mangled_string_name_setter),T150,T151);
  lit_915 = YPPsym((P)"module-target-environment");
  lit_916 = YPPlist(1,YPPsym((P)"_x"));
  T152 = YPsig(LITREF(lit_916),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_target_environment_441 = YPmet(FUNCODEREF(fun_module_target_environment_441),LITREF(lit_915),T152,ENVNUL,PNUL,sloc(1608));
  T155 = BOUNDP(YevalSastYmodule_target_environment);
  if (T155 != YPfalse) {
    T154 = VARREF(YevalSastYmodule_target_environment);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_module_target_environment_441;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YevalSastYmodule_target_environment,T153);
  lit_917 = YPPsym((P)"module-target-environment-setter");
  lit_918 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T159 = YPsig(LITREF(lit_918),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T158 = fun_module_target_environment_setter_442 = YPmet(FUNCODEREF(fun_module_target_environment_setter_442),LITREF(lit_917),T159,ENVNUL,PNUL,sloc(1608));
  T163 = BOUNDP(YevalSastYmodule_target_environment_setter);
  if (T163 != YPfalse) {
    T162 = VARREF(YevalSastYmodule_target_environment_setter);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_module_target_environment_setter_442;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T164);
  T160 = VARSET(YevalSastYmodule_target_environment_setter,T161);
  T157 = T160;
  return T157;
}

P YevalSastY___main_9___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
DEFCREGS();
loop:
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_target_environment),VARREF(YevalSastYmodule_target_environment_setter),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YPprop_unbound_error));
  lit_919 = YPPsym((P)"module-syntax-environment");
  lit_920 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_920),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_443 = YPmet(FUNCODEREF(fun_module_syntax_environment_443),LITREF(lit_919),T0,ENVNUL,PNUL,sloc(1609));
  T3 = BOUNDP(YevalSastYmodule_syntax_environment);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSastYmodule_syntax_environment);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_module_syntax_environment_443;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSastYmodule_syntax_environment,T1);
  lit_921 = YPPsym((P)"module-syntax-environment-setter");
  lit_922 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T5 = YPsig(LITREF(lit_922),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_setter_444 = YPmet(FUNCODEREF(fun_module_syntax_environment_setter_444),LITREF(lit_921),T5,ENVNUL,PNUL,sloc(1609));
  T8 = BOUNDP(YevalSastYmodule_syntax_environment_setter);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSastYmodule_syntax_environment_setter);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_module_syntax_environment_setter_444;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSastYmodule_syntax_environment_setter,T6);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_syntax_environment),VARREF(YevalSastYmodule_syntax_environment_setter),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YPprop_unbound_error));
  lit_923 = YPPsym((P)"%module-exports");
  lit_924 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPsig(LITREF(lit_924),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pmodule_exports_445 = YPmet(FUNCODEREF(fun_Pmodule_exports_445),LITREF(lit_923),T10,ENVNUL,PNUL,sloc(1611));
  T13 = BOUNDP(YevalSastYPmodule_exports);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSastYPmodule_exports);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_Pmodule_exports_445;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSastYPmodule_exports,T11);
  lit_925 = YPPsym((P)"%module-exports-setter");
  lit_926 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T15 = YPsig(LITREF(lit_926),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pmodule_exports_setter_446 = YPmet(FUNCODEREF(fun_Pmodule_exports_setter_446),LITREF(lit_925),T15,ENVNUL,PNUL,sloc(1611));
  T18 = BOUNDP(YevalSastYPmodule_exports_setter);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSastYPmodule_exports_setter);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_Pmodule_exports_setter_446;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSastYPmodule_exports_setter,T16);
  lit_927 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPsig(LITREF(lit_927),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_447 = YPmet(FUNCODEREF(fun_447),YPfalse,T20,ENVNUL,PNUL,sloc(1611));
  T21 = fun_447;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYPmodule_exports),VARREF(YevalSastYPmodule_exports_setter),VARREF(YgooScolsScolYLtabG),T21);
  lit_928 = YPPsym((P)"module-data-processed?");
  lit_929 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPsig(LITREF(lit_929),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_448 = YPmet(FUNCODEREF(fun_module_data_processedQ_448),LITREF(lit_928),T22,ENVNUL,PNUL,sloc(1612));
  T25 = BOUNDP(YevalSastYmodule_data_processedQ);
  if (T25 != YPfalse) {
    T24 = VARREF(YevalSastYmodule_data_processedQ);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_module_data_processedQ_448;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YevalSastYmodule_data_processedQ,T23);
  lit_930 = YPPsym((P)"module-data-processed?-setter");
  lit_931 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T27 = YPsig(LITREF(lit_931),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_setter_449 = YPmet(FUNCODEREF(fun_module_data_processedQ_setter_449),LITREF(lit_930),T27,ENVNUL,PNUL,sloc(1612));
  T30 = BOUNDP(YevalSastYmodule_data_processedQ_setter);
  if (T30 != YPfalse) {
    T29 = VARREF(YevalSastYmodule_data_processedQ_setter);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_module_data_processedQ_setter_449;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YevalSastYmodule_data_processedQ_setter,T28);
  lit_932 = YPPlist(1,YPPsym((P)"_x"));
  T32 = YPsig(LITREF(lit_932),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_450 = YPmet(FUNCODEREF(fun_450),YPfalse,T32,ENVNUL,PNUL,sloc(1612));
  T33 = fun_450;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_data_processedQ),VARREF(YevalSastYmodule_data_processedQ_setter),VARREF(YLlogG),T33);
  lit_933 = YPPsym((P)"module-runtime-data");
  lit_934 = YPPlist(1,YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_934),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_451 = YPmet(FUNCODEREF(fun_module_runtime_data_451),LITREF(lit_933),T34,ENVNUL,PNUL,sloc(1613));
  T37 = BOUNDP(YevalSastYmodule_runtime_data);
  if (T37 != YPfalse) {
    T36 = VARREF(YevalSastYmodule_runtime_data);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_module_runtime_data_451;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YevalSastYmodule_runtime_data,T35);
  lit_935 = YPPsym((P)"module-runtime-data-setter");
  lit_936 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T39 = YPsig(LITREF(lit_936),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_setter_452 = YPmet(FUNCODEREF(fun_module_runtime_data_setter_452),LITREF(lit_935),T39,ENVNUL,PNUL,sloc(1613));
  T42 = BOUNDP(YevalSastYmodule_runtime_data_setter);
  if (T42 != YPfalse) {
    T41 = VARREF(YevalSastYmodule_runtime_data_setter);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_module_runtime_data_setter_452;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YevalSastYmodule_runtime_data_setter,T40);
  lit_937 = YPPlist(1,YPPsym((P)"_x"));
  T44 = YPsig(LITREF(lit_937),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_453 = YPmet(FUNCODEREF(fun_453),YPfalse,T44,ENVNUL,PNUL,sloc(1613));
  T45 = fun_453;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_runtime_data),VARREF(YevalSastYmodule_runtime_data_setter),VARREF(YLanyG),T45);
  lit_938 = YPPsym((P)"module-transaction");
  lit_939 = YPPlist(1,YPPsym((P)"_x"));
  T46 = YPsig(LITREF(lit_939),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_transaction_454 = YPmet(FUNCODEREF(fun_module_transaction_454),LITREF(lit_938),T46,ENVNUL,PNUL,sloc(1614));
  T49 = BOUNDP(YevalSastYmodule_transaction);
  if (T49 != YPfalse) {
    T48 = VARREF(YevalSastYmodule_transaction);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_module_transaction_454;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YevalSastYmodule_transaction,T47);
  lit_940 = YPPsym((P)"module-transaction-setter");
  lit_941 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T51 = YPsig(LITREF(lit_941),YPPlist(2,VARREF(YevalSastYLtransactionG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_transaction_setter_455 = YPmet(FUNCODEREF(fun_module_transaction_setter_455),LITREF(lit_940),T51,ENVNUL,PNUL,sloc(1614));
  T54 = BOUNDP(YevalSastYmodule_transaction_setter);
  if (T54 != YPfalse) {
    T53 = VARREF(YevalSastYmodule_transaction_setter);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_module_transaction_setter_455;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YevalSastYmodule_transaction_setter,T52);
  lit_942 = YPPlist(1,YPPsym((P)"_x"));
  T56 = YPsig(LITREF(lit_942),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_456 = YPmet(FUNCODEREF(fun_456),YPfalse,T56,ENVNUL,PNUL,sloc(1614));
  T57 = fun_456;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_transaction),VARREF(YevalSastYmodule_transaction_setter),VARREF(YevalSastYLtransactionG),T57);
  lit_943 = YPPsym((P)"module-uses-c-files");
  lit_944 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPsig(LITREF(lit_944),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_files_457 = YPmet(FUNCODEREF(fun_module_uses_c_files_457),LITREF(lit_943),T58,ENVNUL,PNUL,sloc(1615));
  T61 = BOUNDP(YevalSastYmodule_uses_c_files);
  if (T61 != YPfalse) {
    T60 = VARREF(YevalSastYmodule_uses_c_files);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_module_uses_c_files_457;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YevalSastYmodule_uses_c_files,T59);
  lit_945 = YPPsym((P)"module-uses-c-files-setter");
  lit_946 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T63 = YPsig(LITREF(lit_946),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_uses_c_files_setter_458 = YPmet(FUNCODEREF(fun_module_uses_c_files_setter_458),LITREF(lit_945),T63,ENVNUL,PNUL,sloc(1615));
  T66 = BOUNDP(YevalSastYmodule_uses_c_files_setter);
  if (T66 != YPfalse) {
    T65 = VARREF(YevalSastYmodule_uses_c_files_setter);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_module_uses_c_files_setter_458;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YevalSastYmodule_uses_c_files_setter,T64);
  lit_947 = YPPlist(1,YPPsym((P)"_x"));
  T68 = YPsig(LITREF(lit_947),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_459 = YPmet(FUNCODEREF(fun_459),YPfalse,T68,ENVNUL,PNUL,sloc(1615));
  T69 = fun_459;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_uses_c_files),VARREF(YevalSastYmodule_uses_c_files_setter),VARREF(YgooScolsSvecYLvecG),T69);
  lit_948 = YPPsym((P)"module-uses-c-includes");
  lit_949 = YPPlist(1,YPPsym((P)"_x"));
  T70 = YPsig(LITREF(lit_949),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_includes_460 = YPmet(FUNCODEREF(fun_module_uses_c_includes_460),LITREF(lit_948),T70,ENVNUL,PNUL,sloc(1616));
  T73 = BOUNDP(YevalSastYmodule_uses_c_includes);
  if (T73 != YPfalse) {
    T72 = VARREF(YevalSastYmodule_uses_c_includes);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_module_uses_c_includes_460;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YevalSastYmodule_uses_c_includes,T71);
  lit_950 = YPPsym((P)"module-uses-c-includes-setter");
  lit_951 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T75 = YPsig(LITREF(lit_951),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_uses_c_includes_setter_461 = YPmet(FUNCODEREF(fun_module_uses_c_includes_setter_461),LITREF(lit_950),T75,ENVNUL,PNUL,sloc(1616));
  T78 = BOUNDP(YevalSastYmodule_uses_c_includes_setter);
  if (T78 != YPfalse) {
    T77 = VARREF(YevalSastYmodule_uses_c_includes_setter);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_module_uses_c_includes_setter_461;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YevalSastYmodule_uses_c_includes_setter,T76);
  lit_952 = YPPlist(1,YPPsym((P)"_x"));
  T80 = YPsig(LITREF(lit_952),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_462 = YPmet(FUNCODEREF(fun_462),YPfalse,T80,ENVNUL,PNUL,sloc(1616));
  T81 = fun_462;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_uses_c_includes),VARREF(YevalSastYmodule_uses_c_includes_setter),VARREF(YgooScolsSvecYLvecG),T81);
  lit_953 = YPPsym((P)"module-uses-c-libraries");
  lit_954 = YPPlist(1,YPPsym((P)"_x"));
  T82 = YPsig(LITREF(lit_954),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_libraries_463 = YPmet(FUNCODEREF(fun_module_uses_c_libraries_463),LITREF(lit_953),T82,ENVNUL,PNUL,sloc(1617));
  T85 = BOUNDP(YevalSastYmodule_uses_c_libraries);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalSastYmodule_uses_c_libraries);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_module_uses_c_libraries_463;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalSastYmodule_uses_c_libraries,T83);
  lit_955 = YPPsym((P)"module-uses-c-libraries-setter");
  lit_956 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T87 = YPsig(LITREF(lit_956),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_uses_c_libraries_setter_464 = YPmet(FUNCODEREF(fun_module_uses_c_libraries_setter_464),LITREF(lit_955),T87,ENVNUL,PNUL,sloc(1617));
  T90 = BOUNDP(YevalSastYmodule_uses_c_libraries_setter);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSastYmodule_uses_c_libraries_setter);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_module_uses_c_libraries_setter_464;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSastYmodule_uses_c_libraries_setter,T88);
  lit_957 = YPPlist(1,YPPsym((P)"_x"));
  T92 = YPsig(LITREF(lit_957),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_465 = YPmet(FUNCODEREF(fun_465),YPfalse,T92,ENVNUL,PNUL,sloc(1617));
  T93 = fun_465;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_uses_c_libraries),VARREF(YevalSastYmodule_uses_c_libraries_setter),VARREF(YgooScolsSvecYLvecG),T93);
  VARSET(YevalSastYmodule_exports_setter,VARREF(YevalSastYPmodule_exports_setter));
  lit_958 = YPPsym((P)"module-exports");
  lit_959 = YPPlist(1,YPPsym((P)"x"));
  T94 = YPsig(LITREF(lit_959),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_module_exports_466 = YPmet(FUNCODEREF(fun_module_exports_466),LITREF(lit_958),T94,ENVNUL,PNUL,sloc(1620));
  T97 = BOUNDP(YevalSastYmodule_exports);
  if (T97 != YPfalse) {
    T96 = VARREF(YevalSastYmodule_exports);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_module_exports_466;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YevalSastYmodule_exports,T95);
  lit_960 = YPPsym((P)"set-module-environments");
  lit_961 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"syntax-env"),YPPsym((P)"target-env"));
  T99 = YPsig(LITREF(lit_961),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYset_module_environments = YPmet(FUNCODEREF(YevalSastYset_module_environments),LITREF(lit_960),T99,ENVNUL,PNUL,sloc(1630));
  T100 = YevalSastYset_module_environments;
  VARSET(YevalSastYset_module_environments,T100);
  lit_962 = YPPsym((P)"do-module-loader-modules");
  lit_963 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"loader"));
  lit_964 = YPPlist(1,YPPsym((P)"mod"));
  T102 = YPsig(LITREF(lit_964),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_468 = YPmet(FUNCODEREF(fun_468),YPfalse,T102,ENVNUL,PNUL,sloc(1638));
  T101 = YPsig(LITREF(lit_963),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYdo_module_loader_modules = YPmet(FUNCODEREF(YevalSastYdo_module_loader_modules),LITREF(lit_962),T101,ENVNUL,PNUL,sloc(1637));
  T103 = YevalSastYdo_module_loader_modules;
  VARSET(YevalSastYdo_module_loader_modules,T103);
  lit_965 = YPPsym((P)"module-loader-module-type");
  lit_966 = YPPlist(1,YPPsym((P)"loader"));
  T104 = YPsig(LITREF(lit_966),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_470 = YPmet(FUNCODEREF(fun_module_loader_module_type_470),LITREF(lit_965),T104,ENVNUL,PNUL,sloc(1643));
  T107 = BOUNDP(YevalSastYmodule_loader_module_type);
  if (T107 != YPfalse) {
    T106 = VARREF(YevalSastYmodule_loader_module_type);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_module_loader_module_type_470;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YevalSastYmodule_loader_module_type,T105);
  lit_967 = YPPsym((P)"register-module!");
  lit_968 = YPPlist(2,YPPsym((P)"module-loader"),YPPsym((P)"mod"));
  T109 = YPsig(LITREF(lit_968),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmodule_loaderG),Ynil);
  YevalSastYregister_moduleX = YPmet(FUNCODEREF(YevalSastYregister_moduleX),LITREF(lit_967),T109,ENVNUL,PNUL,sloc(1647));
  T110 = YevalSastYregister_moduleX;
  VARSET(YevalSastYregister_moduleX,T110);
  lit_969 = YPPsym((P)"probe-module");
  lit_970 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  T111 = YPsig(LITREF(lit_970),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYprobe_module = YPmet(FUNCODEREF(YevalSastYprobe_module),LITREF(lit_969),T111,ENVNUL,PNUL,sloc(1653));
  T112 = YevalSastYprobe_module;
  VARSET(YevalSastYprobe_module,T112);
  lit_971 = YPPsym((P)"load-and-register-module");
  lit_972 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  lit_973 = YPsb((P)"  ");
  lit_974 = YPsb((P)"%s: error: Circular use of %s not allowed");
  lit_975 = YPsb((P)"%s[Loading module %s...\n");
  lit_976 = YPsb((P)"%s]\n");
  T115 = YPsig(LITREF(lit_612),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_473 = YPmet(FUNCODEREF(fun_473),YPfalse,T115,ENVNUL,PNUL,sloc(1674));
  T114 = YPsig(LITREF(lit_612),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_474 = YPmet(FUNCODEREF(fun_474),YPfalse,T114,ENVNUL,PNUL,sloc(1675));
  T113 = YPsig(LITREF(lit_972),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYload_and_register_module = YPmet(FUNCODEREF(YevalSastYload_and_register_module),LITREF(lit_971),T113,ENVNUL,PNUL,sloc(1658));
  T116 = YevalSastYload_and_register_module;
  VARSET(YevalSastYload_and_register_module,T116);
  lit_977 = YPPsym((P)"load-module");
  lit_978 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  T118 = YPsig(LITREF(lit_978),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  T117 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_977),T118,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSastYload_module,T117);
  lit_979 = YPPsym((P)"export-binding!");
  lit_980 = YPPlist(3,YPPsym((P)"module"),YPPsym((P)"name"),YPPsym((P)"binding"));
  lit_981 = YPsb((P)"Tried to export %= and %= from %= as %=");
  T120 = XCALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T119 = YPsig(LITREF(lit_980),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLbinding_nameG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)3),T120,Ynil);
  YevalSastYexport_bindingX = YPmet(FUNCODEREF(YevalSastYexport_bindingX),LITREF(lit_979),T119,ENVNUL,PNUL,sloc(1691));
  T121 = YevalSastYexport_bindingX;
  VARSET(YevalSastYexport_bindingX,T121);
  lit_982 = YPPsym((P)"binding-native-to?");
  lit_983 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"module"));
  T122 = YPsig(LITREF(lit_983),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YevalSastYbinding_native_toQ = YPmet(FUNCODEREF(YevalSastYbinding_native_toQ),LITREF(lit_982),T122,ENVNUL,PNUL,sloc(1704));
  T123 = YevalSastYbinding_native_toQ;
  VARSET(YevalSastYbinding_native_toQ,T123);
  lit_984 = YPPsym((P)"report-undefined-global-bindings");
  lit_985 = YPPlist(1,YPPsym((P)"mod"));
  lit_986 = YPPlist(1,YPPsym((P)"binding"));
  lit_987 = YPsb((P)"%s: warning: undefined binding '%s'.\n");
  T125 = YPsig(LITREF(lit_986),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_478 = YPmet(FUNCODEREF(fun_478),YPfalse,T125,ENVNUL,PNUL,sloc(1710));
  T124 = YPsig(LITREF(lit_985),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYreport_undefined_global_bindings = YPmet(FUNCODEREF(YevalSastYreport_undefined_global_bindings),LITREF(lit_984),T124,ENVNUL,PNUL,sloc(1708));
  T126 = YevalSastYreport_undefined_global_bindings;
  VARSET(YevalSastYreport_undefined_global_bindings,T126);
  lit_988 = YPPsym((P)"compute-transitive-users");
  lit_989 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"modnames"));
  lit_990 = YPPsym((P)"add-user");
  lit_991 = YPPlist(1,YPPsym((P)"modname"));
  lit_992 = YPPlist(1,YPPsym((P)"mod"));
  lit_993 = YPPlist(1,YPPsym((P)"uses-mod"));
  lit_994 = YPPlist(1,YPPsym((P)"v"));
  T131 = YPsig(LITREF(lit_993),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_480 = YPmet(FUNCODEREF(fun_480),YPfalse,T131,ENVNUL,PNUL,sloc(1729));
  T130 = YPsig(LITREF(lit_992),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_481 = YPmet(FUNCODEREF(fun_481),YPfalse,T130,ENVNUL,PNUL,sloc(1727));
  T129 = YPsig(LITREF(lit_991),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_add_user_482 = YPmet(FUNCODEREF(fun_add_user_482),LITREF(lit_990),T129,ENVNUL,PNUL,sloc(1723));
  T128 = YPsig(LITREF(lit_994),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_483 = YPmet(FUNCODEREF(fun_483),YPfalse,T128,ENVNUL,PNUL,sloc(1735));
  T127 = YPsig(LITREF(lit_989),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YevalSastYcompute_transitive_users = YPmet(FUNCODEREF(YevalSastYcompute_transitive_users),LITREF(lit_988),T127,ENVNUL,PNUL,sloc(1720));
  T132 = YevalSastYcompute_transitive_users;
  VARSET(YevalSastYcompute_transitive_users,T132);
  lit_995 = YPPsym((P)"remove-module-internal!");
  lit_996 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"mod"));
  T133 = YPsig(LITREF(lit_996),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYremove_module_internalX = YPmet(FUNCODEREF(YevalSastYremove_module_internalX),LITREF(lit_995),T133,ENVNUL,PNUL,sloc(1740));
  T134 = YevalSastYremove_module_internalX;
  VARSET(YevalSastYremove_module_internalX,T134);
  lit_997 = YPPsym((P)"remove-modules-by-name!");
  lit_998 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"modnames"));
  lit_999 = YPPlist(1,YPPsym((P)"modname"));
  T137 = YPsig(LITREF(lit_999),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_486 = YPmet(FUNCODEREF(fun_486),YPfalse,T137,ENVNUL,PNUL,sloc(1747));
  T136 = XCALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T135 = YPsig(LITREF(lit_998),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),T136,Ynil);
  YevalSastYremove_modules_by_nameX = YPmet(FUNCODEREF(YevalSastYremove_modules_by_nameX),LITREF(lit_997),T135,ENVNUL,PNUL,sloc(1745));
  T138 = YevalSastYremove_modules_by_nameX;
  VARSET(YevalSastYremove_modules_by_nameX,T138);
  lit_1000 = YPPsym((P)"module-name-to-relpath");
  lit_1001 = YPPlist(1,YPPsym((P)"name"));
  T139 = YPsig(LITREF(lit_1001),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YevalSastYmodule_name_to_relpath = YPmet(FUNCODEREF(YevalSastYmodule_name_to_relpath),LITREF(lit_1000),T139,ENVNUL,PNUL,sloc(1755));
  T140 = YevalSastYmodule_name_to_relpath;
  VARSET(YevalSastYmodule_name_to_relpath,T140);
  lit_1002 = YPPsym((P)"install-initial-bindings");
  lit_1003 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"loader"));
  lit_1004 = YPPlist(1,YPPsym((P)"name"));
  lit_1005 = YPPlist(2,YPPsym((P)"seq"),YPPsym((P)"use"));
  T142 = YPsig(LITREF(lit_1004),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_489 = YPmet(FUNCODEREF(fun_489),YPfalse,T142,ENVNUL,PNUL,sloc(1766));
  T141 = YPsig(LITREF(lit_1003),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYinstall_initial_bindings = YPmet(FUNCODEREF(YevalSastYinstall_initial_bindings),LITREF(lit_1002),T141,ENVNUL,PNUL,sloc(1762));
  T143 = YevalSastYinstall_initial_bindings;
  VARSET(YevalSastYinstall_initial_bindings,T143);
  lit_1006 = YPPsym((P)"fab-static-global-environment");
  lit_1007 = YPPlist(3,YPPsym((P)"module"),YPPsym((P)"module-loader"),YPPsym((P)"allow-foreign-names?"));
  T144 = YPsig(LITREF(lit_1007),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmodule_loaderG),VARREF(YLlogG)),YPfalse,YPint((P)3),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_static_global_environment = YPmet(FUNCODEREF(YevalSastYfab_static_global_environment),LITREF(lit_1006),T144,ENVNUL,PNUL,sloc(1810));
  T145 = YevalSastYfab_static_global_environment;
  VARSET(YevalSastYfab_static_global_environment,T145);
  lit_1008 = YPPsym((P)"fab-subset-environment");
  lit_1009 = YPPlist(3,YPPsym((P)"module"),YPPsym((P)"src-module"),YPPsym((P)"excluded"));
  lit_1010 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"binding"));
  T147 = YPsig(LITREF(lit_1010),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_492 = YPmet(FUNCODEREF(fun_492),YPfalse,T147,ENVNUL,PNUL,sloc(1831));
  T146 = YPsig(LITREF(lit_1009),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmoduleG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_subset_environment = YPmet(FUNCODEREF(YevalSastYfab_subset_environment),LITREF(lit_1008),T146,ENVNUL,PNUL,sloc(1824));
  T148 = YevalSastYfab_subset_environment;
  VARSET(YevalSastYfab_subset_environment,T148);
  lit_1011 = YPPsym((P)"<runtime-module-loader>");
  T150 = (P)YPpair(VARREF(YevalSastYLmodule_loaderG),Ynil);
  T149 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_1011),T150);
  VARSET(YevalSastYLruntime_module_loaderG,T149);
  DYNDEFSET(YevalSastYTnow_rt_envT,YPfalse);
  lit_1012 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  lit_1013 = YPsb((P)"Unable to find module %s");
  T155 = YPsig(LITREF(lit_612),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_494 = YPmet(FUNCODEREF(fun_494),YPfalse,T155,ENVNUL,PNUL,sloc(1867));
  T154 = YPsig(LITREF(lit_612),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_495 = YPmet(FUNCODEREF(fun_495),YPfalse,T154,ENVNUL,PNUL,sloc(1867));
  T153 = YPsig(LITREF(lit_612),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_496 = YPmet(FUNCODEREF(fun_496),YPfalse,T153,ENVNUL,PNUL,sloc(1864));
  T152 = YPsig(LITREF(lit_612),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_497 = YPmet(FUNCODEREF(fun_497),YPfalse,T152,ENVNUL,PNUL,sloc(1883));
  T151 = YPsig(LITREF(lit_1012),YPPlist(2,VARREF(YevalSastYLruntime_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  fun_load_module_498 = YPmet(FUNCODEREF(fun_load_module_498),LITREF(lit_977),T151,ENVNUL,PNUL,sloc(1854));
  T158 = BOUNDP(YevalSastYload_module);
  if (T158 != YPfalse) {
    T157 = VARREF(YevalSastYload_module);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_load_module_498;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YevalSastYload_module,T156);
  T160 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLruntime_module_loaderG));
  VARSET(YevalSastYTruntime_module_loaderT,T160);
  lit_1014 = YPPsym((P)"runtime-module-loader");
  T161 = YPsig(LITREF(lit_612),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYruntime_module_loader = YPmet(FUNCODEREF(YevalSastYruntime_module_loader),LITREF(lit_1014),T161,ENVNUL,PNUL,sloc(1886));
  T162 = YevalSastYruntime_module_loader;
  VARSET(YevalSastYruntime_module_loader,T162);
  lit_1015 = YPPsym((P)"runtime-module");
  lit_1016 = YPPlist(1,YPPsym((P)"modname"));
  T163 = YPsig(LITREF(lit_1016),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_module = YPmet(FUNCODEREF(YevalSastYruntime_module),LITREF(lit_1015),T163,ENVNUL,PNUL,sloc(1887));
  T164 = YevalSastYruntime_module;
  VARSET(YevalSastYruntime_module,T164);
  lit_1017 = YPPsym((P)"runtime-environment");
  lit_1018 = YPPlist(1,YPPsym((P)"modname"));
  T165 = YPsig(LITREF(lit_1018),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_environment = YPmet(FUNCODEREF(YevalSastYruntime_environment),LITREF(lit_1017),T165,ENVNUL,PNUL,sloc(1889));
  T166 = YevalSastYruntime_environment;
  VARSET(YevalSastYruntime_environment,T166);
  lit_1019 = YPPsym((P)"runtime-core-environment");
  lit_1020 = YPPlist(1,YPPsym((P)"modname"));
  T167 = YPsig(LITREF(lit_1020),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_core_environment = YPmet(FUNCODEREF(YevalSastYruntime_core_environment),LITREF(lit_1019),T167,ENVNUL,PNUL,sloc(1893));
  T168 = YevalSastYruntime_core_environment;
  VARSET(YevalSastYruntime_core_environment,T168);
  lit_1021 = YPPsym((P)"unchecked-runtime-environment");
  lit_1022 = YPPlist(1,YPPsym((P)"modname"));
  T169 = YPsig(LITREF(lit_1022),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYunchecked_runtime_environment = YPmet(FUNCODEREF(YevalSastYunchecked_runtime_environment),LITREF(lit_1021),T169,ENVNUL,PNUL,sloc(1895));
  T170 = YevalSastYunchecked_runtime_environment;
  VARSET(YevalSastYunchecked_runtime_environment,T170);
  lit_1023 = YPPsym((P)"reloader-do-create-module");
  lit_1024 = YPPlist(2,YPPsym((P)"modname"),YPPsym((P)"data"));
  T171 = YPsig(LITREF(lit_1024),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYreloader_do_create_module = YPmet(FUNCODEREF(YevalSastYreloader_do_create_module),LITREF(lit_1023),T171,ENVNUL,PNUL,sloc(1904));
  T172 = YevalSastYreloader_do_create_module;
  VARSET(YevalSastYreloader_do_create_module,T172);
  lit_1025 = YPPsym((P)"reloader-do-use-module");
  lit_1026 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"uses"));
  T173 = YPsig(LITREF(lit_1026),YPPlist(2,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_use_module = YPmet(FUNCODEREF(YevalSastYreloader_do_use_module),LITREF(lit_1025),T173,ENVNUL,PNUL,sloc(1915));
  T174 = YevalSastYreloader_do_use_module;
  VARSET(YevalSastYreloader_do_use_module,T174);
  lit_1027 = YPPsym((P)"reloader-do-import");
  lit_1028 = YPPlist(4,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"from-mod"),YPPsym((P)"original-name"));
  lit_1029 = YPsb((P)"Can't find %s from %s for %s\n");
  T175 = YPsig(LITREF(lit_1028),YPPlist(4,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YevalSastYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_import = YPmet(FUNCODEREF(YevalSastYreloader_do_import),LITREF(lit_1027),T175,ENVNUL,PNUL,sloc(1918));
  T176 = YevalSastYreloader_do_import;
  VARSET(YevalSastYreloader_do_import,T176);
  lit_1030 = YPPsym((P)"process-module-data");
  lit_1031 = YPPlist(1,YPPsym((P)"module"));
  T177 = YPsig(LITREF(lit_1031),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYprocess_module_data = YPmet(FUNCODEREF(YevalSastYprocess_module_data),LITREF(lit_1030),T177,ENVNUL,PNUL,sloc(1928));
  T178 = YevalSastYprocess_module_data;
  VARSET(YevalSastYprocess_module_data,T178);
  lit_1032 = YPPsym((P)"ensure-module-data");
  lit_1033 = YPPlist(1,YPPsym((P)"module"));
  T179 = YPsig(LITREF(lit_1033),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYensure_module_data = YPmet(FUNCODEREF(YevalSastYensure_module_data),LITREF(lit_1032),T179,ENVNUL,PNUL,sloc(1933));
  T180 = YevalSastYensure_module_data;
  VARSET(YevalSastYensure_module_data,T180);
  lit_1034 = YPPsym((P)"reloader-do-runtime-binding");
  lit_1035 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"loc"));
  T181 = YPsig(LITREF(lit_1035),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YLlocG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_runtime_binding = YPmet(FUNCODEREF(YevalSastYreloader_do_runtime_binding),LITREF(lit_1034),T181,ENVNUL,PNUL,sloc(1939));
  T182 = YevalSastYreloader_do_runtime_binding;
  VARSET(YevalSastYreloader_do_runtime_binding,T182);
  lit_1036 = YPPsym((P)"reloader-do-dynamic-binding");
  lit_1037 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"loc"));
  T183 = YPsig(LITREF(lit_1037),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YLlocG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_dynamic_binding = YPmet(FUNCODEREF(YevalSastYreloader_do_dynamic_binding),LITREF(lit_1036),T183,ENVNUL,PNUL,sloc(1948));
  T184 = YevalSastYreloader_do_dynamic_binding;
  VARSET(YevalSastYreloader_do_dynamic_binding,T184);
  lit_1038 = YPPsym((P)"reloader-do-other-binding");
  lit_1039 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  T185 = YPsig(LITREF(lit_1039),YPPlist(2,VARREF(YevalSastYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_other_binding = YPmet(FUNCODEREF(YevalSastYreloader_do_other_binding),LITREF(lit_1038),T185,ENVNUL,PNUL,sloc(1961));
  T186 = YevalSastYreloader_do_other_binding;
  VARSET(YevalSastYreloader_do_other_binding,T186);
  lit_1040 = YPPsym((P)"reloader-do-export");
  lit_1041 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"as-name"));
  lit_1042 = YPsb((P)"Can't find %s in %s\n");
  T189 = YPsig(LITREF(lit_1041),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T188 = YevalSastYreloader_do_export = YPmet(FUNCODEREF(YevalSastYreloader_do_export),LITREF(lit_1040),T189,ENVNUL,PNUL,sloc(1969));
  T191 = YevalSastYreloader_do_export;
  T190 = VARSET(YevalSastYreloader_do_export,T191);
  T187 = T190;
  return T187;
}

P YevalSastY___main_10___() {
  P tmpF2931;
  P tmpF2930;
  P tmpF2929;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
DEFCREGS();
loop:
  lit_1043 = YPPsym((P)"reload-modules");
  T0 = YPsig(LITREF(lit_612),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYreload_modules = YPmet(FUNCODEREF(YevalSastYreload_modules),LITREF(lit_1043),T0,ENVNUL,PNUL,sloc(1976));
  T1 = YevalSastYreload_modules;
  VARSET(YevalSastYreload_modules,T1);
  lit_1044 = YPPsym((P)"install-magic-bindings");
  lit_1045 = YPPlist(1,YPPsym((P)"env"));
  lit_1046 = YPPlist(1,YPPsym((P)"binding"));
  T3 = YPsig(LITREF(lit_1046),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_514 = YPmet(FUNCODEREF(fun_514),YPfalse,T3,ENVNUL,PNUL,sloc(1988));
  T2 = YPsig(LITREF(lit_1045),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinstall_magic_bindings = YPmet(FUNCODEREF(YevalSastYinstall_magic_bindings),LITREF(lit_1044),T2,ENVNUL,PNUL,sloc(1986));
  T4 = YevalSastYinstall_magic_bindings;
  VARSET(YevalSastYinstall_magic_bindings,T4);
  lit_1047 = YPPsym((P)"reload-macros");
  T5 = YPsig(LITREF(lit_612),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYreload_macros = YPmet(FUNCODEREF(YevalSastYreload_macros),LITREF(lit_1047),T5,ENVNUL,PNUL,sloc(1994));
  T6 = YevalSastYreload_macros;
  VARSET(YevalSastYreload_macros,T6);
  lit_1048 = YPPsym((P)"install-interpreter-hacks");
  lit_1049 = YPPlist(1,YPPsym((P)"env"));
  T7 = YPsig(LITREF(lit_1049),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinstall_interpreter_hacks = YPmet(FUNCODEREF(YevalSastYinstall_interpreter_hacks),LITREF(lit_1048),T7,ENVNUL,PNUL,sloc(2001));
  T8 = YevalSastYinstall_interpreter_hacks;
  VARSET(YevalSastYinstall_interpreter_hacks,T8);
  lit_1050 = YPPsym((P)"init-runtime");
  T9 = YPsig(LITREF(lit_612),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYinit_runtime = YPmet(FUNCODEREF(YevalSastYinit_runtime),LITREF(lit_1050),T9,ENVNUL,PNUL,sloc(2004));
  T10 = YevalSastYinit_runtime;
  VARSET(YevalSastYinit_runtime,T10);
  lit_1051 = YPPlist(5,YPPsym((P)"ct"),YPPsym((P)"ct-also"),YPPsym((P)"ds"),YPPsym((P)"use"),YPPsym((P)"export"));
  VARSET(YevalSastYsyntax_environment_excluded_bindings,LITREF(lit_1051));
  lit_1052 = YPPsym((P)"fab-syntax-environment");
  lit_1053 = YPPlist(1,YPPsym((P)"module"));
  lit_1054 = YPPsym((P)"goo");
  T11 = YPsig(LITREF(lit_1053),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_syntax_environment = YPmet(FUNCODEREF(YevalSastYfab_syntax_environment),LITREF(lit_1052),T11,ENVNUL,PNUL,sloc(2028));
  T12 = YevalSastYfab_syntax_environment;
  VARSET(YevalSastYfab_syntax_environment,T12);
  lit_1055 = YPPsym((P)"fab-g2c-module");
  lit_1056 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  T13 = YPsig(LITREF(lit_1056),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYfab_g2c_module = YPmet(FUNCODEREF(YevalSastYfab_g2c_module),LITREF(lit_1055),T13,ENVNUL,PNUL,sloc(2033));
  T14 = YevalSastYfab_g2c_module;
  VARSET(YevalSastYfab_g2c_module,T14);
  lit_1057 = YPPsym((P)"init-g2c-boot-environment");
  lit_1058 = YPPlist(1,YPPsym((P)"env"));
  T15 = YPsig(LITREF(lit_1058),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinit_g2c_boot_environment = YPmet(FUNCODEREF(YevalSastYinit_g2c_boot_environment),LITREF(lit_1057),T15,ENVNUL,PNUL,sloc(2046));
  T16 = YevalSastYinit_g2c_boot_environment;
  VARSET(YevalSastYinit_g2c_boot_environment,T16);
  lit_1059 = YPPsym((P)"init-g2c-regular-environment");
  lit_1060 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"loader"));
  T17 = YPsig(LITREF(lit_1060),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYinit_g2c_regular_environment = YPmet(FUNCODEREF(YevalSastYinit_g2c_regular_environment),LITREF(lit_1059),T17,ENVNUL,PNUL,sloc(2052));
  T18 = YevalSastYinit_g2c_regular_environment;
  VARSET(YevalSastYinit_g2c_regular_environment,T18);
  lit_1061 = YPPsym((P)"init-ast");
  T19 = YPsig(LITREF(lit_612),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYinit_ast = YPmet(FUNCODEREF(YevalSastYinit_ast),LITREF(lit_1061),T19,ENVNUL,PNUL,sloc(2061));
  T20 = YevalSastYinit_ast;
  VARSET(YevalSastYinit_ast,T20);
  lit_1062 = YPPsym((P)"do-static-global-bindings");
  lit_1063 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"env"));
  lit_1064 = YPPlist(1,YPPsym((P)"env"));
  T22 = YPsig(LITREF(lit_1064),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_524 = YPmet(FUNCODEREF(fun_loop_524),LITREF(lit_254),T22,ENVNUL,PNUL,sloc(2066));
  T21 = YPsig(LITREF(lit_1063),YPPlist(2,VARREF(YLfunG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYdo_static_global_bindings = YPmet(FUNCODEREF(YevalSastYdo_static_global_bindings),LITREF(lit_1062),T21,ENVNUL,PNUL,sloc(2065));
  T23 = YevalSastYdo_static_global_bindings;
  VARSET(YevalSastYdo_static_global_bindings,T23);
  lit_1065 = YPPsym((P)"do-named-static-global-bindings");
  lit_1066 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"env"));
  lit_1067 = YPPlist(1,YPPsym((P)"env"));
  T25 = YPsig(LITREF(lit_1067),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_526 = YPmet(FUNCODEREF(fun_loop_526),LITREF(lit_254),T25,ENVNUL,PNUL,sloc(2073));
  T24 = YPsig(LITREF(lit_1066),YPPlist(2,VARREF(YLfunG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYdo_named_static_global_bindings = YPmet(FUNCODEREF(YevalSastYdo_named_static_global_bindings),LITREF(lit_1065),T24,ENVNUL,PNUL,sloc(2072));
  T26 = YevalSastYdo_named_static_global_bindings;
  VARSET(YevalSastYdo_named_static_global_bindings,T26);
  tmpF2929 = YPfalse;
  if (tmpF2929 != YPfalse) {
    T27 = VARREF(YevalSastYast_evaluate);
  } else {
    T27 = YPfalse;
  }
  tmpF2930 = YPfalse;
  if (tmpF2930 != YPfalse) {
    T28 = VARREF(YevalSastYinit_environment_for_eval);
  } else {
    T28 = YPfalse;
  }
  tmpF2931 = YPfalse;
  if (tmpF2931 != YPfalse) {
    T29 = VARREF(YevalSastYload_in);
  } else {
    T29 = YPfalse;
  }
  T30 = YPfalse;
  return T30;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstr;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSsystem},
  {&module_info_gooScolsSlst},
  {&module_info_gooSioSread},
  {&module_info_evalSsyntax},
  {&module_info_evalSdependency},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"<handler-info>", &module_info_gooSconditions, "<handler-info>"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"atan", &module_info_gooSmath, "atan"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"map", &module_info_gooSmacros, "map"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"file-opening-error-filename", &module_info_gooSconditions, "file-opening-error-filename"},
  {"%vm-fun-env-elt", &module_info_gooSboot, "%vm-fun-env-elt"},
  {"~==", &module_info_gooSmath, "~=="},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"<file-opening-error>", &module_info_gooSconditions, "<file-opening-error>"},
  {"elt!", &module_info_gooScolsScolx, "elt!"},
  {"<property-not-found-error>", &module_info_gooSconditions, "<property-not-found-error>"},
  {"if", &module_info_gooSboot, "if"},
  {"<line>", &module_info_gooScolsSlst, "<line>"},
  {"def-list", &module_info_gooScolsSlst, "def-list"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"sexpr-function-definition-adjectives", &module_info_evalSsyntax, "sexpr-function-definition-adjectives"},
  {"1-", &module_info_gooSmath, "1-"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"abs", &module_info_gooSmath, "abs"},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, "sexpr-sequence->begin"},
  {"$sexpr-if-tag", &module_info_evalSsyntax, "$sexpr-if-tag"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"try", &module_info_gooSboot, "try"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"src-loc-line", &module_info_gooSboot, "src-loc-line"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"-", &module_info_gooSmath, "-"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, "sexpr-syntax-if-then"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"invalidate-dependent", &module_info_evalSdependency, "invalidate-dependent"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"find", &module_info_gooScolsScol, "find"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"t?", &module_info_gooStypes, "t?"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"no-applicable-methods-error", &module_info_gooSboot, "no-applicable-methods-error"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%vm-fun-env-fab", &module_info_gooSboot, "%vm-fun-env-fab"},
  {"==", &module_info_gooSmacros, "=="},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"nul", &module_info_gooSboot, "nul"},
  {"nil", &module_info_gooSboot, "nil"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"time", &module_info_gooSsystem, "time"},
  {"len", &module_info_gooStypes, "len"},
  {"<property-unbound-error>", &module_info_gooSconditions, "<property-unbound-error>"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"sexpr-prop-owner", &module_info_evalSsyntax, "sexpr-prop-owner"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, "sexpr-loc-raw-body"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"type-error-value", &module_info_gooSconditions, "type-error-value"},
  {"$name-parse-dependency", &module_info_evalSdependency, "$name-parse-dependency"},
  {"dl", &module_info_gooSboot, "dl"},
  {"ast-error", &module_info_evalSdependency, "ast-error"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"let", &module_info_gooSboot, "let"},
  {"set-standard-read-macro!", &module_info_gooSioSread, "set-standard-read-macro!"},
  {"case", &module_info_gooSmacros, "case"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, "$sexpr-define-generic-tag"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%su", &module_info_gooSboot, "%su"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%met", &module_info_gooSboot, "%met"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<compiler-error>", &module_info_gooSconditions, "<compiler-error>"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"$parse-dependencies", &module_info_evalSdependency, "$parse-dependencies"},
  {"match", &module_info_gooSmacros, "match"},
  {"<macro-error>", &module_info_gooSconditions, "<macro-error>"},
  {"t<", &module_info_gooStypes, "t<"},
  {"dependency-empty?", &module_info_evalSdependency, "dependency-empty?"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, "$sexpr-prop-tag"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"$e", &module_info_gooSmath, "$e"},
  {"^", &module_info_gooSmath, "^"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"<line-list>", &module_info_gooScolsSlst, "<line-list>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, "sexpr-syntax-definition-variable"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, "sexpr-isa-init-values"},
  {"sexpr-block-name", &module_info_evalSsyntax, "sexpr-block-name"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"rem", &module_info_gooSmath, "rem"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"condition-arguments", &module_info_gooSconditions, "condition-arguments"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<condition>", &module_info_gooSconditions, "<condition>"},
  {"~=", &module_info_gooSmath, "~="},
  {"rep", &module_info_gooSboot, "rep"},
  {"sexpr-prop-init", &module_info_evalSsyntax, "sexpr-prop-init"},
  {"fab-handler", &module_info_gooSconditions, "fab-handler"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"tail", &module_info_gooSboot, "tail"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"@len", &module_info_gooSboot, "@len"},
  {"df", &module_info_gooSboot, "df"},
  {"close", &module_info_gooSioSport, "close"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%put", &module_info_gooSboot, "%put"},
  {"return-type-error", &module_info_gooSboot, "return-type-error"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"type-error-type", &module_info_gooSconditions, "type-error-type"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, "$sexpr-unwind-protect-tag"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"<dependable>", &module_info_evalSdependency, "<dependable>"},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, "sexpr-bind-pattern-variables"},
  {"neg", &module_info_gooSmath, "neg"},
  {"<arithmetic-error>", &module_info_gooSconditions, "<arithmetic-error>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, "$sexpr-bind-exit-tag"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"%im", &module_info_gooSboot, "%im"},
  {"$value-optimization-dependency", &module_info_evalSdependency, "$value-optimization-dependency"},
  {"t=", &module_info_gooStypes, "t="},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"dg", &module_info_gooSboot, "dg"},
  {"max", &module_info_gooSmag, "max"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"when", &module_info_gooSmacros, "when"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"round/", &module_info_gooSmath, "round/"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, "$sexpr-isa-tag"},
  {"read-delimited-list", &module_info_gooSioSread, "read-delimited-list"},
  {"logn", &module_info_gooSmath, "logn"},
  {"msg", &module_info_gooSconditions, "msg"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"error", &module_info_gooSboot, "error"},
  {"<arity-error>", &module_info_gooSconditions, "<arity-error>"},
  {"$sexpr-set-tag", &module_info_evalSsyntax, "$sexpr-set-tag"},
  {"call-error-arguments", &module_info_gooSconditions, "call-error-arguments"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"sin", &module_info_gooSmath, "sin"},
  {"dc", &module_info_gooSboot, "dc"},
  {"argument-type-error", &module_info_gooSboot, "argument-type-error"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"loc", &module_info_gooSboot, "loc"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"until", &module_info_gooSmacros, "until"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"$sexpr-def-tag", &module_info_evalSsyntax, "$sexpr-def-tag"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%time", &module_info_gooSboot, "%time"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, "sexpr-function-definition-variable"},
  {"sexpr-make-application", &module_info_evalSsyntax, "sexpr-make-application"},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, "$sexpr-define-method-tag"},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, "sexpr-function-definition-value"},
  {"sexpr-def?", &module_info_evalSsyntax, "sexpr-def?"},
  {"<internal-error>", &module_info_gooSconditions, "<internal-error>"},
  {"line-list-of", &module_info_gooScolsSlst, "line-list-of"},
  {"fun-sig", &module_info_gooSboot, "fun-sig"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, "$sexpr-begin-tag"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"macro-error-arguments", &module_info_gooSconditions, "macro-error-arguments"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, "sexpr-unwind-protect-cleanup-forms"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<error>", &module_info_gooSconditions, "<error>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"sexpr-if-then", &module_info_evalSsyntax, "sexpr-if-then"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, "sexpr-expand-backquote"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"even?", &module_info_gooSmath, "even?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"sub*-setter", &module_info_gooScolsSseqx, "sub*-setter"},
  {"<argument-type-error>", &module_info_gooSconditions, "<argument-type-error>"},
  {"acos", &module_info_gooSmath, "acos"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"min", &module_info_gooSmag, "min"},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, "sexpr-assignment-variable"},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, "sexpr-syntax-if-pattern"},
  {"$all-dependency-types", &module_info_evalSdependency, "$all-dependency-types"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"find-dependency", &module_info_evalSdependency, "find-dependency"},
  {"add", &module_info_gooScolsScol, "add"},
  {"app", &module_info_gooSmacros, "app"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"dependency-and", &module_info_evalSdependency, "dependency-and"},
  {"%vm-box-val-setter", &module_info_gooSboot, "%vm-box-val-setter"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"range-error-key", &module_info_gooSconditions, "range-error-key"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"property-not-found-error", &module_info_gooSboot, "property-not-found-error"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"<property-type-error>", &module_info_gooSconditions, "<property-type-error>"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"<property-error>", &module_info_gooSconditions, "<property-error>"},
  {"do", &module_info_gooSmacros, "do"},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, "$sexpr-quasiquote-tag"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, "$sexpr-iterate-tag"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, "sexpr-loc-bound-bodies"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"@opts-as-lst", &module_info_gooSboot, "@opts-as-lst"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"sub*", &module_info_gooScolsSseq, "sub*"},
  {">", &module_info_gooSmag, ">"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"<return-type-error>", &module_info_gooSconditions, "<return-type-error>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {"open", &module_info_gooSioSport, "open"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"sexpr-function-signature", &module_info_evalSsyntax, "sexpr-function-signature"},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, "<no-applicable-methods-error>"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"range-error", &module_info_gooSboot, "range-error"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"line-of", &module_info_gooScolsSlst, "line-of"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, "$sexpr-define-class-tag"},
  {"%dispatch", &module_info_gooSboot, "%dispatch"},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, "sexpr-iterate->loc"},
  {"below", &module_info_gooScolsSseq, "below"},
  {">>", &module_info_gooSmath, ">>"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"handler-function", &module_info_gooSconditions, "handler-function"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"for", &module_info_gooSmacros, "for"},
  {"<", &module_info_gooSmag, "<"},
  {"|", &module_info_gooSmath, "|"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, "sexpr-fab-setter-name"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"range-error-collection", &module_info_gooSconditions, "range-error-collection"},
  {"1+", &module_info_gooSmath, "1+"},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, "sexpr-isa-init-props"},
  {"seq", &module_info_gooSboot, "seq"},
  {">=", &module_info_gooSmag, ">="},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"sexpr-prop-init?", &module_info_evalSsyntax, "sexpr-prop-init?"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"line-list", &module_info_gooScolsSlst, "line-list"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"+", &module_info_gooSmath, "+"},
  {"$char-long-names", &module_info_gooSioSread, "$char-long-names"},
  {"=", &module_info_gooSmath, "="},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"$optimizaton-dependencies", &module_info_evalSdependency, "$optimizaton-dependencies"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"sexpr-variable-type", &module_info_evalSsyntax, "sexpr-variable-type"},
  {"$sexpr-let-tag", &module_info_evalSsyntax, "$sexpr-let-tag"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"cpl-error", &module_info_gooSboot, "cpl-error"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"detach-dependent", &module_info_evalSdependency, "detach-dependent"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"esc", &module_info_gooSboot, "esc"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"sexpr-def-variable", &module_info_evalSsyntax, "sexpr-def-variable"},
  {"sexpr-operator", &module_info_evalSsyntax, "sexpr-operator"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"file-copy", &module_info_gooSsystem, "file-copy"},
  {"msg-to-str", &module_info_gooSconditions, "msg-to-str"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"<=", &module_info_gooSmag, "<="},
  {"handler-matches?", &module_info_gooSconditions, "handler-matches?"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"mod", &module_info_gooSmath, "mod"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"read", &module_info_gooSconditions, "read"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"%met-env-setter", &module_info_gooSboot, "%met-env-setter"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"sig", &module_info_gooSconditions, "sig"},
  {"call-error-function", &module_info_gooSconditions, "call-error-function"},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, "$sexpr-macro-expand-tag"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"while", &module_info_gooSmacros, "while"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, "sexpr-make-anonymous-method"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%vm-with-exit", &module_info_gooSboot, "%vm-with-exit"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"<syntax-error>", &module_info_gooSconditions, "<syntax-error>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, "sexpr-unwind-protect-protected-form"},
  {"log", &module_info_gooSmath, "log"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"sexpr-if-test", &module_info_evalSsyntax, "sexpr-if-test"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"<simple-condition>", &module_info_gooSconditions, "<simple-condition>"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"<unknown-function-error>", &module_info_gooSconditions, "<unknown-function-error>"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, "sexpr-syntax-if-value"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"line-pair", &module_info_gooScolsSlst, "line-pair"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"asin", &module_info_gooSmath, "asin"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"property-unbound-error", &module_info_gooSboot, "property-unbound-error"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"fun", &module_info_gooSboot, "fun"},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, "$sexpr-syntax-if-tag"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"<directory-error>", &module_info_gooSsystem, "<directory-error>"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"get", &module_info_gooSioSport, "get"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%get", &module_info_gooSboot, "%get"},
  {"<stack-overflow>", &module_info_gooSconditions, "<stack-overflow>"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"property-type-error", &module_info_gooSboot, "property-type-error"},
  {"describe-condition", &module_info_gooSconditions, "describe-condition"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"not", &module_info_gooSboot, "not"},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, "$sexpr-quote-tag"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"<unbound-error>", &module_info_gooSconditions, "<unbound-error>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"sexpr-variable?", &module_info_evalSsyntax, "sexpr-variable?"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, "sexpr-loc-bound-signatures"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, "sexpr-isa-prop-inits"},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, "sexpr-unquote-splicing?"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"round", &module_info_gooSmath, "round"},
  {"sexpr-prop-type", &module_info_evalSsyntax, "sexpr-prop-type"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"/", &module_info_gooSmath, "/"},
  {"def", &module_info_gooSboot, "def"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"dependency-includes-any?", &module_info_evalSdependency, "dependency-includes-any?"},
  {"sexpr-let->combination", &module_info_evalSsyntax, "sexpr-let->combination"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"unbound-variable-error-variable", &module_info_gooSconditions, "unbound-variable-error-variable"},
  {"col", &module_info_gooScolsScol, "col"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<keyboard-interrupt>", &module_info_gooSconditions, "<keyboard-interrupt>"},
  {"new", &module_info_gooSboot, "new"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"<type-error>", &module_info_gooSconditions, "<type-error>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"tan", &module_info_gooSmath, "tan"},
  {"property-error-owner", &module_info_gooSconditions, "property-error-owner"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"$sexpr-define-tag", &module_info_evalSsyntax, "$sexpr-define-tag"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"stack-overflow-error", &module_info_gooSboot, "stack-overflow-error"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"macro-error-name", &module_info_gooSconditions, "macro-error-name"},
  {"always", &module_info_gooSruntime, "always"},
  {"~", &module_info_gooSmath, "~"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"sexpr-method-body", &module_info_evalSsyntax, "sexpr-method-body"},
  {"div", &module_info_gooSmath, "div"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"sexpr-fab-setter", &module_info_evalSsyntax, "sexpr-fab-setter"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"<unbound-variable-error>", &module_info_gooSconditions, "<unbound-variable-error>"},
  {"dependency-or", &module_info_evalSdependency, "dependency-or"},
  {"<call-error>", &module_info_gooSconditions, "<call-error>"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"ds", &module_info_gooSboot, "ds"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"<restart>", &module_info_gooSconditions, "<restart>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"sexpr-variable-name", &module_info_evalSsyntax, "sexpr-variable-name"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"<handler>", &module_info_gooSconditions, "<handler>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<src-loc>", &module_info_gooSboot, "<src-loc>"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"src-loc-file", &module_info_gooSboot, "src-loc-file"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, "$sexpr-define-function-tag"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"<assert-error>", &module_info_gooSconditions, "<assert-error>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<narity-error>", &module_info_gooSconditions, "<narity-error>"},
  {"as", &module_info_gooStypes, "as"},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, "sexpr-define-class-parents"},
  {"<simple-error>", &module_info_gooSconditions, "<simple-error>"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, "$sexpr-locals-tag"},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, "sexpr-text-of-quotation"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, "sexpr-monitor-expand"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"ct", &module_info_gooSboot, "ct"},
  {"in", &module_info_gooSioSport, "in"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"lst", &module_info_gooSboot, "lst"},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, "$sexpr-define-syntax-tag"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"$sexpr-method-tag", &module_info_evalSsyntax, "$sexpr-method-tag"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"as-error", &module_info_gooSboot, "as-error"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"any?", &module_info_gooStypes, "any?"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"get-standard-read-macro", &module_info_gooSioSread, "get-standard-read-macro"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, "sexpr-forward-primitive?"},
  {"@+", &module_info_gooSboot, "@+"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"@<", &module_info_gooSboot, "@<"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"sexpr-unquote?", &module_info_evalSsyntax, "sexpr-unquote?"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"sexpr-make-begin", &module_info_evalSsyntax, "sexpr-make-begin"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"default-handler", &module_info_gooSconditions, "default-handler"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"<ambiguous-method-error>", &module_info_gooSconditions, "<ambiguous-method-error>"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"$empty-dependency", &module_info_evalSdependency, "$empty-dependency"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"arithmetic-error", &module_info_gooSboot, "arithmetic-error"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"<dependent>", &module_info_evalSdependency, "<dependent>"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, "sexpr-syntax-if-else"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"fin", &module_info_gooSboot, "fin"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"log-dependency", &module_info_evalSdependency, "log-dependency"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, "sexpr-make-macro-function"},
  {"%src-loc", &module_info_gooSboot, "%src-loc"},
  {"%vm-with-cleanup", &module_info_gooSboot, "%vm-with-cleanup"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"<serious-condition>", &module_info_gooSconditions, "<serious-condition>"},
  {"last", &module_info_gooSmacros, "last"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"put", &module_info_gooSioSport, "put"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"sexpr-isa-parent", &module_info_evalSsyntax, "sexpr-isa-parent"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"invalidate-dependents", &module_info_evalSdependency, "invalidate-dependents"},
  {"sexpr-define-class?", &module_info_evalSsyntax, "sexpr-define-class?"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"%vm-box-fab", &module_info_gooSboot, "%vm-box-fab"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"sexpr-prop-name", &module_info_evalSsyntax, "sexpr-prop-name"},
  {"out", &module_info_gooSioSport, "out"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, "sexpr-prop-init-var"},
  {"op", &module_info_gooSmacros, "op"},
  {"*", &module_info_gooSmath, "*"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"dependency-includes-all?", &module_info_evalSdependency, "dependency-includes-all?"},
  {"into", &module_info_gooScolsScol, "into"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"sexpr-operands", &module_info_evalSsyntax, "sexpr-operands"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"sexpr-def-value", &module_info_evalSsyntax, "sexpr-def-value"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"clone", &module_info_gooSboot, "clone"},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, "%vm-fun-env-elt-setter"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"&", &module_info_gooSmath, "&"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"syntax-error", &module_info_gooSboot, "syntax-error"},
  {"<io-error>", &module_info_gooSconditions, "<io-error>"},
  {"property-error-generic", &module_info_gooSconditions, "property-error-generic"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, "sexpr-syntax-definition-value"},
  {"dss", &module_info_gooSboot, "dss"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, "$sexpr-monitor-tag"},
  {"tup", &module_info_gooSboot, "tup"},
  {"pow", &module_info_gooSmath, "pow"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%vm-box-val", &module_info_gooSboot, "%vm-box-val"},
  {"ambiguous-method-error", &module_info_gooSboot, "ambiguous-method-error"},
  {"sexpr-fab-getter", &module_info_evalSsyntax, "sexpr-fab-getter"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"@==", &module_info_gooSboot, "@=="},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"sexpr-if-else", &module_info_evalSsyntax, "sexpr-if-else"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"sexpr-block-body", &module_info_evalSsyntax, "sexpr-block-body"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"class-of", &module_info_gooSboot, "class-of"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"condition-message", &module_info_gooSconditions, "condition-message"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"mif", &module_info_gooSboot, "mif"},
  {"floor", &module_info_gooSmath, "floor"},
  {"cos", &module_info_gooSmath, "cos"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"sexpr-function-body", &module_info_evalSsyntax, "sexpr-function-body"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"export", &module_info_gooSboot, "export"},
  {"sexpr-method-signature", &module_info_evalSsyntax, "sexpr-method-signature"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, "sexpr-loc-bound-names"},
  {"sexpr-make-method", &module_info_evalSsyntax, "sexpr-make-method"},
  {"<as-error>", &module_info_gooSconditions, "<as-error>"},
  {"$default-handler-info", &module_info_gooSconditions, "$default-handler-info"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"$expansion-parse-dependency", &module_info_evalSdependency, "$expansion-parse-dependency"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"sexpr-assignment-value", &module_info_evalSsyntax, "sexpr-assignment-value"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"sexpr-definition-value", &module_info_evalSsyntax, "sexpr-definition-value"},
  {"sexpr-definition-variable", &module_info_evalSsyntax, "sexpr-definition-variable"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"<dependency-type>", &module_info_evalSdependency, "<dependency-type>"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<range-error>", &module_info_gooSconditions, "<range-error>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"<no-next-methods-error>", &module_info_gooSconditions, "<no-next-methods-error>"},
  {"or", &module_info_gooSmacros, "or"},
  {"sexpr-signature-value", &module_info_evalSsyntax, "sexpr-signature-value"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"<pathname-error>", &module_info_gooSsystem, "<pathname-error>"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"use", &module_info_gooSboot, "use"},
  {"set", &module_info_gooSboot, "set"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"and", &module_info_gooSmacros, "and"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"$goo-boot-module-name", CVAR, &YevalSastYDgoo_boot_module_name},
  {"fix-let-body-setter", CVAR, &YevalSastYfix_let_body_setter},
  {"$sexpr-%raw-tag", CVAR, &YevalSastYDsexpr_Praw_tag},
  {"special-define-method", CVAR, &YevalSastYspecial_define_method},
  {"module-loader-stack-setter", CVAR, &YevalSastYmodule_loader_stack_setter},
  {"fix-let-types-setter", CVAR, &YevalSastYfix_let_types_setter},
  {"<dynamic-assignment>", CVAR, &YevalSastYLdynamic_assignmentG},
  {"expand-bind-list*", CVAR, &YevalSastYexpand_bind_listT},
  {"insert-global!", CVAR, &YevalSastYinsert_globalX},
  {"$sexpr-compile-time-also-tag", CVAR, &YevalSastYDsexpr_compile_time_also_tag},
  {"$sexpr-use/export-module-tag", CVAR, &YevalSastYDsexpr_useSexport_module_tag},
  {"fix-let-arguments-setter", CVAR, &YevalSastYfix_let_arguments_setter},
  {"objectify-quotation", CVAR, &YevalSastYobjectify_quotation},
  {"compile-time-program-setter", CVAR, &YevalSastYcompile_time_program_setter},
  {"environment-next", CVAR, &YevalSastYenvironment_next},
  {"signature-value-setter", CVAR, &YevalSastYsignature_value_setter},
  {"monitor-handler", CVAR, &YevalSastYmonitor_handler},
  {"$sexpr-use-include-tag", CVAR, &YevalSastYDsexpr_use_include_tag},
  {"monitor-info", CVAR, &YevalSastYmonitor_info},
  {"objectify-use-mangle-module", CVAR, &YevalSastYobjectify_use_mangle_module},
  {"binding-kind", CVAR, &YevalSastYbinding_kind},
  {"objectify-use/export-module", CVAR, &YevalSastYobjectify_useSexport_module},
  {"magic-bindings", CVAR, &YevalSastYmagic_bindings},
  {"insert-globals!", CVAR, &YevalSastYinsert_globalsX},
  {"binding-prop-setter", CVAR, &YevalSastYbinding_prop_setter},
  {"<application>", CVAR, &YevalSastYLapplicationG},
  {"objectify-list", CVAR, &YevalSastYobjectify_list},
  {"objectify-bind-exit", CVAR, &YevalSastYobjectify_bind_exit},
  {"environment-uses-modules-setter", CVAR, &YevalSastYenvironment_uses_modules_setter},
  {"objectify-assignment-using", CVAR, &YevalSastYobjectify_assignment_using},
  {"objectify-application", CVAR, &YevalSastYobjectify_application},
  {"function-signature-setter", CVAR, &YevalSastYfunction_signature_setter},
  {"special-iterate", CVAR, &YevalSastYspecial_iterate},
  {"sequentialize", CVAR, &YevalSastYsequentialize},
  {"special-export", CVAR, &YevalSastYspecial_export},
  {"module-name-to-relpath", CVAR, &YevalSastYmodule_name_to_relpath},
  {"special-use/export-module", CVAR, &YevalSastYspecial_useSexport_module},
  {"program-type", CVAR, &YevalSastYprogram_type},
  {"transaction-empty?", CVAR, &YevalSastYtransaction_emptyQ},
  {"<ast-primitive-definition>", CVAR, &YevalSastYLast_primitive_definitionG},
  {"objectify-binding", CVAR, &YevalSastYobjectify_binding},
  {"<binding-name>", CVAR, &YevalSastYLbinding_nameG},
  {"function-bindings", CVAR, &YevalSastYfunction_bindings},
  {"application-arguments", CVAR, &YevalSastYapplication_arguments},
  {"*macro-tracing?*", CVAR, &YevalSastYTmacro_tracingQT},
  {"expand-pattern", CVAR, &YevalSastYexpand_pattern},
  {"*magic-bindings*", CVAR, &YevalSastYTmagic_bindingsT},
  {"function-registers-setter", CVAR, &YevalSastYfunction_registers_setter},
  {"$sexpr-use-mangle-module-tag", CVAR, &YevalSastYDsexpr_use_mangle_module_tag},
  {"process-closed-application", CVAR, &YevalSastYprocess_closed_application},
  {"objectify-raw", CVAR, &YevalSastYobjectify_raw},
  {"objectify-bound?", CVAR, &YevalSastYobjectify_boundQ},
  {"*current-subtransaction*", CVAR, &YevalSastYTcurrent_subtransactionT},
  {"reloader-do-create-module", CVAR, &YevalSastYreloader_do_create_module},
  {"module-target-environment", CVAR, &YevalSastYmodule_target_environment},
  {"init-ast", CVAR, &YevalSastYinit_ast},
  {"objectify-dynamic-definition", CVAR, &YevalSastYobjectify_dynamic_definition},
  {"special-macro-expand", CVAR, &YevalSastYspecial_macro_expand},
  {"<module>", CVAR, &YevalSastYLmoduleG},
  {"reference-frame-offset-setter", CVAR, &YevalSastYreference_frame_offset_setter},
  {"$sexpr-bound?-tag", CVAR, &YevalSastYDsexpr_boundQ_tag},
  {"---main-6---", PVAR, NULL},
  {"<regular-application>", CVAR, &YevalSastYLregular_applicationG},
  {"environment-module-loader", CVAR, &YevalSastYenvironment_module_loader},
  {"environment-bindings-setter", CVAR, &YevalSastYenvironment_bindings_setter},
  {"objectify-primitive-definition", CVAR, &YevalSastYobjectify_primitive_definition},
  {"<module-loader>", CVAR, &YevalSastYLmodule_loaderG},
  {"ast-walk!", CVAR, &YevalSastYast_walkX},
  {"ast-walk", CVAR, &YevalSastYast_walk},
  {"<static-environment>", CVAR, &YevalSastYLstatic_environmentG},
  {"<static-global-environment>", CVAR, &YevalSastYLstatic_global_environmentG},
  {"monitor-test", CVAR, &YevalSastYmonitor_test},
  {"$sexpr-use-library-tag", CVAR, &YevalSastYDsexpr_use_library_tag},
  {"runtime-module-loader", CVAR, &YevalSastYruntime_module_loader},
  {"---main-10---", PVAR, NULL},
  {"application-tail?", CVAR, &YevalSastYapplication_tailQ},
  {"find-environment-module", CVAR, &YevalSastYfind_environment_module},
  {"module-syntax-environment", CVAR, &YevalSastYmodule_syntax_environment},
  {"<static-empty-environment>", CVAR, &YevalSastYLstatic_empty_environmentG},
  {"unwind-protect-protected-thunk-setter", CVAR, &YevalSastYunwind_protect_protected_thunk_setter},
  {"---main-7---", PVAR, NULL},
  {"unwind-protect-cleanup-thunk-setter", CVAR, &YevalSastYunwind_protect_cleanup_thunk_setter},
  {"special-locals", CVAR, &YevalSastYspecial_locals},
  {"syntax-environment-excluded-bindings", CVAR, &YevalSastYsyntax_environment_excluded_bindings},
  {"call-with-subtransaction", CVAR, &YevalSastYcall_with_subtransaction},
  {"fix-let-bindings", CVAR, &YevalSastYfix_let_bindings},
  {"reloader-do-dynamic-binding", CVAR, &YevalSastYreloader_do_dynamic_binding},
  {"program-register-setter", CVAR, &YevalSastYprogram_register_setter},
  {"objectify-method-definition", CVAR, &YevalSastYobjectify_method_definition},
  {"bind-exit-main-fun", CVAR, &YevalSastYbind_exit_main_fun},
  {"binding-index-setter", CVAR, &YevalSastYbinding_index_setter},
  {"---main-9---", PVAR, NULL},
  {"locals-functions-setter", CVAR, &YevalSastYlocals_functions_setter},
  {"special-define-primitive", CVAR, &YevalSastYspecial_define_primitive},
  {"reloader-do-import", CVAR, &YevalSastYreloader_do_import},
  {"<arguments>", CVAR, &YevalSastYLargumentsG},
  {"objectify-signature", CVAR, &YevalSastYobjectify_signature},
  {"$sequential-empty", CVAR, &YevalSastYDsequential_empty},
  {"<ast-method-definition>", CVAR, &YevalSastYLast_method_definitionG},
  {"<local-reference>", CVAR, &YevalSastYLlocal_referenceG},
  {"module-loader-module-type", CVAR, &YevalSastYmodule_loader_module_type},
  {"objectify-use-module", CVAR, &YevalSastYobjectify_use_module},
  {"reference-binding", CVAR, &YevalSastYreference_binding},
  {"function-debug-name-setter", CVAR, &YevalSastYfunction_debug_name_setter},
  {"constant-index-setter", CVAR, &YevalSastYconstant_index_setter},
  {"special-define-dynamic", CVAR, &YevalSastYspecial_define_dynamic},
  {"module-uses-c-libraries-setter", CVAR, &YevalSastYmodule_uses_c_libraries_setter},
  {"binding-handler-setter", CVAR, &YevalSastYbinding_handler_setter},
  {"fix-let-body", CVAR, &YevalSastYfix_let_body},
  {"signature-arity-setter", CVAR, &YevalSastYsignature_arity_setter},
  {"environment-allows-foreign-names?-setter", CVAR, &YevalSastYenvironment_allows_foreign_namesQ_setter},
  {"foreign-name?", CVAR, &YevalSastYforeign_nameQ},
  {"import-and-mangle-global!", CVAR, &YevalSastYimport_and_mangle_globalX},
  {"<fix-let>", CVAR, &YevalSastYLfix_letG},
  {"module-uses-c-libraries", CVAR, &YevalSastYmodule_uses_c_libraries},
  {"with-subtransaction", PVAR, NULL},
  {"arguments", CVAR, &YevalSastYarguments},
  {"special-unwind-protect", CVAR, &YevalSastYspecial_unwind_protect},
  {"<ast-error>", CVAR, &YevalSastYLast_errorG},
  {"fix-let-types", CVAR, &YevalSastYfix_let_types},
  {"function-frame-len-setter", CVAR, &YevalSastYfunction_frame_len_setter},
  {"environment-allows-foreign-names?", CVAR, &YevalSastYenvironment_allows_foreign_namesQ},
  {"init-g2c-regular-environment", CVAR, &YevalSastYinit_g2c_regular_environment},
  {"program-line-setter", CVAR, &YevalSastYprogram_line_setter},
  {"set-module-environments", CVAR, &YevalSastYset_module_environments},
  {"fix-let-arguments", CVAR, &YevalSastYfix_let_arguments},
  {"compile-time-program", CVAR, &YevalSastYcompile_time_program},
  {"register-magic-binding", CVAR, &YevalSastYregister_magic_binding},
  {"signature-value", CVAR, &YevalSastYsignature_value},
  {"function-index", CVAR, &YevalSastYfunction_index},
  {"<predefined-application>", CVAR, &YevalSastYLpredefined_applicationG},
  {"module-uses-c-includes-setter", CVAR, &YevalSastYmodule_uses_c_includes_setter},
  {"<dynamic-definition>", CVAR, &YevalSastYLdynamic_definitionG},
  {"application-binding", CVAR, &YevalSastYapplication_binding},
  {"<module-binding-reference>", CVAR, &YevalSastYLmodule_binding_referenceG},
  {"<ast-generic>", CVAR, &YevalSastYLast_genericG},
  {"binding-locative", CVAR, &YevalSastYbinding_locative},
  {"module-transaction-setter", CVAR, &YevalSastYmodule_transaction_setter},
  {"binding-prop", CVAR, &YevalSastYbinding_prop},
  {"application-known?", CVAR, &YevalSastYapplication_knownQ},
  {"application-known?-setter", CVAR, &YevalSastYapplication_knownQ_setter},
  {"binding-info-setter", CVAR, &YevalSastYbinding_info_setter},
  {"<dynamic-reference>", CVAR, &YevalSastYLdynamic_referenceG},
  {"environment-uses-modules", CVAR, &YevalSastYenvironment_uses_modules},
  {"function-signature", CVAR, &YevalSastYfunction_signature},
  {"unchecked-runtime-environment", CVAR, &YevalSastYunchecked_runtime_environment},
  {"special-use-module", CVAR, &YevalSastYspecial_use_module},
  {"fab-static-global-environment", CVAR, &YevalSastYfab_static_global_environment},
  {"<ast-embodied-function>", CVAR, &YevalSastYLast_embodied_functionG},
  {"signature-specs", CVAR, &YevalSastYsignature_specs},
  {"alternative-condition-setter", CVAR, &YevalSastYalternative_condition_setter},
  {"objectify-syntax-definition", CVAR, &YevalSastYobjectify_syntax_definition},
  {"constant-value-setter", CVAR, &YevalSastYconstant_value_setter},
  {"*record-source?*", DVAR, &YevalSastYTrecord_sourceQT},
  {"convert2arguments", CVAR, &YevalSastYconvert2arguments},
  {"binding-dotted?-setter", CVAR, &YevalSastYbinding_dottedQ_setter},
  {"function-display-name", CVAR, &YevalSastYfunction_display_name},
  {"function-kind", CVAR, &YevalSastYfunction_kind},
  {"function-registers", CVAR, &YevalSastYfunction_registers},
  {"<immediate-constant>", CVAR, &YevalSastYLimmediate_constantG},
  {"pairize", CVAR, &YevalSastYpairize},
  {"<alternative>", CVAR, &YevalSastYLalternativeG},
  {"<transaction>", CVAR, &YevalSastYLtransactionG},
  {"---main-3---", PVAR, NULL},
  {"function-binding-setter", CVAR, &YevalSastYfunction_binding_setter},
  {"assignment-binding-setter", CVAR, &YevalSastYassignment_binding_setter},
  {"ast-define-binding", CVAR, &YevalSastYast_define_binding},
  {"signature-nary?-setter", CVAR, &YevalSastYsignature_naryQ_setter},
  {"function-adjectives-setter", CVAR, &YevalSastYfunction_adjectives_setter},
  {"binding-mutable?-setter", CVAR, &YevalSastYbinding_mutableQ_setter},
  {"$sexpr-optionals-tag", CVAR, &YevalSastYDsexpr_optionals_tag},
  {"reference-frame-offset", CVAR, &YevalSastYreference_frame_offset},
  {"reload-macros", CVAR, &YevalSastYreload_macros},
  {"<local-binding>", CVAR, &YevalSastYLlocal_bindingG},
  {"install-magic-bindings", CVAR, &YevalSastYinstall_magic_bindings},
  {"locals-bindings-setter", CVAR, &YevalSastYlocals_bindings_setter},
  {"function-adjectives", CVAR, &YevalSastYfunction_adjectives},
  {"alternative-consequent-setter", CVAR, &YevalSastYalternative_consequent_setter},
  {"objectify-variable-definition", CVAR, &YevalSastYobjectify_variable_definition},
  {"function-free", CVAR, &YevalSastYfunction_free},
  {"function-free-setter", CVAR, &YevalSastYfunction_free_setter},
  {"functions", CVAR, &YevalSastYfunctions},
  {"alternative-alternant-setter", CVAR, &YevalSastYalternative_alternant_setter},
  {"find-syntax-environment", CVAR, &YevalSastYfind_syntax_environment},
  {"<free-environment>", CVAR, &YevalSastYLfree_environmentG},
  {"reloader-do-runtime-binding", CVAR, &YevalSastYreloader_do_runtime_binding},
  {"<monitor>", CVAR, &YevalSastYLmonitorG},
  {"signature-bindings-setter", CVAR, &YevalSastYsignature_bindings_setter},
  {"import-global!", CVAR, &YevalSastYimport_globalX},
  {"function-self-recursive?-setter", CVAR, &YevalSastYfunction_self_recursiveQ_setter},
  {"special-begin", CVAR, &YevalSastYspecial_begin},
  {"$arguments-empty", CVAR, &YevalSastYDarguments_empty},
  {"objectify", CVAR, &YevalSastYobjectify},
  {"function-data-refs-setter", CVAR, &YevalSastYfunction_data_refs_setter},
  {"---main-4---", PVAR, NULL},
  {"program-register", CVAR, &YevalSastYprogram_register},
  {"objectify-alternative", CVAR, &YevalSastYobjectify_alternative},
  {"reference-frame-number-setter", CVAR, &YevalSastYreference_frame_number_setter},
  {"module-name-setter", CVAR, &YevalSastYmodule_name_setter},
  {"<simple-ast-error>", CVAR, &YevalSastYLsimple_ast_errorG},
  {"binding-index", CVAR, &YevalSastYbinding_index},
  {"$sexpr-export-tag", CVAR, &YevalSastYDsexpr_export_tag},
  {"function-body-setter", CVAR, &YevalSastYfunction_body_setter},
  {"function-index-setter", CVAR, &YevalSastYfunction_index_setter},
  {"---main-5---", PVAR, NULL},
  {"runtime-core-environment", CVAR, &YevalSastYruntime_core_environment},
  {"signature-names-setter", CVAR, &YevalSastYsignature_names_setter},
  {"objectify-sequential", CVAR, &YevalSastYobjectify_sequential},
  {"objectify-generic-definition", CVAR, &YevalSastYobjectify_generic_definition},
  {"monitor-test-setter", CVAR, &YevalSastYmonitor_test_setter},
  {"objectify-with-subtransaction", CVAR, &YevalSastYobjectify_with_subtransaction},
  {"<ast-signature>", CVAR, &YevalSastYLast_signatureG},
  {"function-frame-len", CVAR, &YevalSastYfunction_frame_len},
  {"environment-bindings", CVAR, &YevalSastYenvironment_bindings},
  {"function-debug-name", CVAR, &YevalSastYfunction_debug_name},
  {"bind-exit-main-fun-setter", CVAR, &YevalSastYbind_exit_main_fun_setter},
  {"binding-inferred-type-setter", CVAR, &YevalSastYbinding_inferred_type_setter},
  {"<static-local-environment>", CVAR, &YevalSastYLstatic_local_environmentG},
  {"binding-name-setter", CVAR, &YevalSastYbinding_name_setter},
  {"<low-let>", CVAR, &YevalSastYLlow_letG},
  {"special-bind-exit", CVAR, &YevalSastYspecial_bind_exit},
  {"install-interpreter-hacks", CVAR, &YevalSastYinstall_interpreter_hacks},
  {"special-define-function", CVAR, &YevalSastYspecial_define_function},
  {"reload-modules", CVAR, &YevalSastYreload_modules},
  {"signature-arity", CVAR, &YevalSastYsignature_arity},
  {"<constant>", CVAR, &YevalSastYLconstantG},
  {"<magic-reference>", CVAR, &YevalSastYLmagic_referenceG},
  {"locals-body-setter", CVAR, &YevalSastYlocals_body_setter},
  {"module-loader-modules-setter", CVAR, &YevalSastYmodule_loader_modules_setter},
  {"binding-global-box-setter", CVAR, &YevalSastYbinding_global_box_setter},
  {"<program>", CVAR, &YevalSastYLprogramG},
  {"special-bound?", CVAR, &YevalSastYspecial_boundQ},
  {"---main-2---", PVAR, NULL},
  {"<definition>", CVAR, &YevalSastYLdefinitionG},
  {"<runtime-module-loader>", CVAR, &YevalSastYLruntime_module_loaderG},
  {"def-programs", PVAR, NULL},
  {"compute-local-reference-offsets", CVAR, &YevalSastYcompute_local_reference_offsets},
  {"special-quote", CVAR, &YevalSastYspecial_quote},
  {"expand-bind-element", CVAR, &YevalSastYexpand_bind_element},
  {"frame-bindings", CVAR, &YevalSastYframe_bindings},
  {"<runtime-assignment>", CVAR, &YevalSastYLruntime_assignmentG},
  {"<method-application>", CVAR, &YevalSastYLmethod_applicationG},
  {"---main-8---", PVAR, NULL},
  {"binding-info", CVAR, &YevalSastYbinding_info},
  {"module-exports-setter", CVAR, &YevalSastYmodule_exports_setter},
  {"objectify-use-library", CVAR, &YevalSastYobjectify_use_library},
  {"special-syntax-if", CVAR, &YevalSastYspecial_syntax_if},
  {"binding-value", CVAR, &YevalSastYbinding_value},
  {"<ast-generic-definition>", CVAR, &YevalSastYLast_generic_definitionG},
  {"alternative-condition", CVAR, &YevalSastYalternative_condition},
  {"module-runtime-data-setter", CVAR, &YevalSastYmodule_runtime_data_setter},
  {"constant-value", CVAR, &YevalSastYconstant_value},
  {"signature-specs-setter", CVAR, &YevalSastYsignature_specs_setter},
  {"special-define-class", CVAR, &YevalSastYspecial_define_class},
  {"$free-environment-empty", CVAR, &YevalSastYDfree_environment_empty},
  {"objectify-function-definition", CVAR, &YevalSastYobjectify_function_definition},
  {"objectify-function", CVAR, &YevalSastYobjectify_function},
  {"module-uses-c-includes", CVAR, &YevalSastYmodule_uses_c_includes},
  {"application-binding-setter", CVAR, &YevalSastYapplication_binding_setter},
  {"objectify-assignment", CVAR, &YevalSastYobjectify_assignment},
  {"binding-free?-setter", CVAR, &YevalSastYbinding_freeQ_setter},
  {"<macro-reference>", CVAR, &YevalSastYLmacro_referenceG},
  {"<ast-function-definition>", CVAR, &YevalSastYLast_function_definitionG},
  {"r-extend*", CVAR, &YevalSastYr_extendT},
  {"bound?-reference", CVAR, &YevalSastYboundQ_reference},
  {"ensure-module-data", CVAR, &YevalSastYensure_module_data},
  {"assignment-reference-setter", CVAR, &YevalSastYassignment_reference_setter},
  {"<ast-method>", CVAR, &YevalSastYLast_methodG},
  {"transaction-implemented-bindings-setter", CVAR, &YevalSastYtransaction_implemented_bindings_setter},
  {"function-temporaries-setter", CVAR, &YevalSastYfunction_temporaries_setter},
  {"<sequential>", CVAR, &YevalSastYLsequentialG},
  {"<locals>", CVAR, &YevalSastYLlocalsG},
  {"bound?-reference-setter", CVAR, &YevalSastYboundQ_reference_setter},
  {"function-binding", CVAR, &YevalSastYfunction_binding},
  {"remove-modules-by-name!", CVAR, &YevalSastYremove_modules_by_nameX},
  {"assignment-binding", CVAR, &YevalSastYassignment_binding},
  {"special-%raw", CVAR, &YevalSastYspecial_Praw},
  {"assignment-form-setter", CVAR, &YevalSastYassignment_form_setter},
  {"signature-nary?", CVAR, &YevalSastYsignature_naryQ},
  {"<local-assignment>", CVAR, &YevalSastYLlocal_assignmentG},
  {"binding-dynamic-extent?", CVAR, &YevalSastYbinding_dynamic_extentQ},
  {"binding-mutable?", CVAR, &YevalSastYbinding_mutableQ},
  {"module-mangled-string-name-setter", CVAR, &YevalSastYmodule_mangled_string_name_setter},
  {"function-source", CVAR, &YevalSastYfunction_source},
  {"objectify-symbol", CVAR, &YevalSastYobjectify_symbol},
  {"locals-bindings", CVAR, &YevalSastYlocals_bindings},
  {"module-exports", CVAR, &YevalSastYmodule_exports},
  {"ast-<bot>", CVAR, &YevalSastYast_LbotG},
  {"macro-expander", CVAR, &YevalSastYmacro_expander},
  {"alternative-consequent", CVAR, &YevalSastYalternative_consequent},
  {"transaction-register-implemented-binding", CVAR, &YevalSastYtransaction_register_implemented_binding},
  {"<static-module-binding-reference>", CVAR, &YevalSastYLstatic_module_binding_referenceG},
  {"<compile-time>", CVAR, &YevalSastYLcompile_timeG},
  {"insert-and-mangle-global!", CVAR, &YevalSastYinsert_and_mangle_globalX},
  {"expand-bind-list", CVAR, &YevalSastYexpand_bind_list},
  {"runtime-environment", CVAR, &YevalSastYruntime_environment},
  {"<namespace-error>", CVAR, &YevalSastYLnamespace_errorG},
  {"alternative-alternant", CVAR, &YevalSastYalternative_alternant},
  {"<raw-constant>", CVAR, &YevalSastYLraw_constantG},
  {"$sexpr-optionals-type-name", CVAR, &YevalSastYDsexpr_optionals_type_name},
  {"application-function-setter", CVAR, &YevalSastYapplication_function_setter},
  {"<predefined-reference>", CVAR, &YevalSastYLpredefined_referenceG},
  {"binding-handler", CVAR, &YevalSastYbinding_handler},
  {"signature-bindings", CVAR, &YevalSastYsignature_bindings},
  {"special-monitor", CVAR, &YevalSastYspecial_monitor},
  {"special-compile-time-also", CVAR, &YevalSastYspecial_compile_time_also},
  {"binding-module-setter", CVAR, &YevalSastYbinding_module_setter},
  {"function-data-refs", CVAR, &YevalSastYfunction_data_refs},
  {"<global-reference>", CVAR, &YevalSastYLglobal_referenceG},
  {"---main-1---", PVAR, NULL},
  {"reference-called-function?-setter", CVAR, &YevalSastYreference_called_functionQ_setter},
  {"reference-frame-number", CVAR, &YevalSastYreference_frame_number},
  {"function-body", CVAR, &YevalSastYfunction_body},
  {"module-name", CVAR, &YevalSastYmodule_name},
  {"roll-back-transaction", CVAR, &YevalSastYroll_back_transaction},
  {"<bind-exit>", CVAR, &YevalSastYLbind_exitG},
  {"ast-macro-expand", CVAR, &YevalSastYast_macro_expand},
  {"$functions-empty", CVAR, &YevalSastYDfunctions_empty},
  {"with-dependent", PVAR, NULL},
  {"special-quasiquote", CVAR, &YevalSastYspecial_quasiquote},
  {"<reference>", CVAR, &YevalSastYLreferenceG},
  {"<real-reference>", CVAR, &YevalSastYLreal_referenceG},
  {"locals-functions", CVAR, &YevalSastYlocals_functions},
  {"$sexpr-use-module-tag", CVAR, &YevalSastYDsexpr_use_module_tag},
  {"signature-names", CVAR, &YevalSastYsignature_names},
  {"transform-defs", CVAR, &YevalSastYtransform_defs},
  {"environment-module-setter", CVAR, &YevalSastYenvironment_module_setter},
  {"monitor-main-thunk-setter", CVAR, &YevalSastYmonitor_main_thunk_setter},
  {"binding-dotted?", CVAR, &YevalSastYbinding_dottedQ},
  {"<ast-macro-definition>", CVAR, &YevalSastYLast_macro_definitionG},
  {"load-in", CVAR, &YevalSastYload_in},
  {"binding-name", CVAR, &YevalSastYbinding_name},
  {"function-value", CVAR, &YevalSastYfunction_value},
  {"<fab-list>", CVAR, &YevalSastYLfab_listG},
  {"module-transaction", CVAR, &YevalSastYmodule_transaction},
  {"maybe-log-dependency", CVAR, &YevalSastYmaybe_log_dependency},
  {"special-if", CVAR, &YevalSastYspecial_if},
  {"binding-value-setter", CVAR, &YevalSastYbinding_value_setter},
  {"process-module-data", CVAR, &YevalSastYprocess_module_data},
  {"binding-dynamic-extent?-setter", CVAR, &YevalSastYbinding_dynamic_extentQ_setter},
  {"special-define-static-syntax", CVAR, &YevalSastYspecial_define_static_syntax},
  {"locals-body", CVAR, &YevalSastYlocals_body},
  {"module-loader-modules", CVAR, &YevalSastYmodule_loader_modules},
  {"objectify-monitor", CVAR, &YevalSastYobjectify_monitor},
  {"binding-free?", CVAR, &YevalSastYbinding_freeQ},
  {"*now-rt-env*", DVAR, &YevalSastYTnow_rt_envT},
  {"register-module!", CVAR, &YevalSastYregister_moduleX},
  {"monitor-type-setter", CVAR, &YevalSastYmonitor_type_setter},
  {"global-box-value-setter", CVAR, &YevalSastYglobal_box_value_setter},
  {"<module-binding>", CVAR, &YevalSastYLmodule_bindingG},
  {"special-def", CVAR, &YevalSastYspecial_def},
  {"find-static-global-environment", CVAR, &YevalSastYfind_static_global_environment},
  {"*runtime-module-loader*", CVAR, &YevalSastYTruntime_module_loaderT},
  {"process-nary-closed-application", CVAR, &YevalSastYprocess_nary_closed_application},
  {"reloader-do-use-module", CVAR, &YevalSastYreloader_do_use_module},
  {"define-magic-binding", PVAR, NULL},
  {"fab-syntax-environment", CVAR, &YevalSastYfab_syntax_environment},
  {"transaction-register-dependent", CVAR, &YevalSastYtransaction_register_dependent},
  {"expand-syntax-if", CVAR, &YevalSastYexpand_syntax_if},
  {"binding-type-setter", CVAR, &YevalSastYbinding_type_setter},
  {"objectify-foreign-reference", CVAR, &YevalSastYobjectify_foreign_reference},
  {"binding-mangled-name", CVAR, &YevalSastYbinding_mangled_name},
  {"do-named-static-global-bindings", CVAR, &YevalSastYdo_named_static_global_bindings},
  {"env-object-name", CVAR, &YevalSastYenv_object_name},
  {"binding-inferred-type", CVAR, &YevalSastYbinding_inferred_type},
  {"module-data-processed?-setter", CVAR, &YevalSastYmodule_data_processedQ_setter},
  {"<global-box>", CVAR, &YevalSastYLglobal_boxG},
  {"program-line", CVAR, &YevalSastYprogram_line},
  {"special-let", CVAR, &YevalSastYspecial_let},
  {"special-define-generic", CVAR, &YevalSastYspecial_define_generic},
  {"init-environment-for-eval", CVAR, &YevalSastYinit_environment_for_eval},
  {"---main-0---", PVAR, NULL},
  {"<computed-program>", CVAR, &YevalSastYLcomputed_programG},
  {"<passive-program>", CVAR, &YevalSastYLpassive_programG},
  {"<binding>", CVAR, &YevalSastYLbindingG},
  {"<unwind-protect>", CVAR, &YevalSastYLunwind_protectG},
  {"do-module-loader-modules", CVAR, &YevalSastYdo_module_loader_modules},
  {"reloader-do-export", CVAR, &YevalSastYreloader_do_export},
  {"special-define-syntax", CVAR, &YevalSastYspecial_define_syntax},
  {"special-method", CVAR, &YevalSastYspecial_method},
  {"fab-g2c-module", CVAR, &YevalSastYfab_g2c_module},
  {"init-g2c-boot-environment", CVAR, &YevalSastYinit_g2c_boot_environment},
  {"fab-subset-environment", CVAR, &YevalSastYfab_subset_environment},
  {"binding-reference-class", CVAR, &YevalSastYbinding_reference_class},
  {"runtime-module", CVAR, &YevalSastYruntime_module},
  {"special-use-mangle-module", CVAR, &YevalSastYspecial_use_mangle_module},
  {"transaction-dependents", CVAR, &YevalSastYtransaction_dependents},
  {"environment-next-setter", CVAR, &YevalSastYenvironment_next_setter},
  {"load-module", CVAR, &YevalSastYload_module},
  {"namespace-error", CVAR, &YevalSastYnamespace_error},
  {"unwind-protect-protected-thunk", CVAR, &YevalSastYunwind_protect_protected_thunk},
  {"ast-copy", CVAR, &YevalSastYast_copy},
  {"monitor-handler-setter", CVAR, &YevalSastYmonitor_handler_setter},
  {"load-and-register-module", CVAR, &YevalSastYload_and_register_module},
  {"binding-native-to?", CVAR, &YevalSastYbinding_native_toQ},
  {"export-binding!", CVAR, &YevalSastYexport_bindingX},
  {"binding-kind-setter", CVAR, &YevalSastYbinding_kind_setter},
  {"function-temporaries", CVAR, &YevalSastYfunction_temporaries},
  {"*current-dependent*", DVAR, &YevalSastYTcurrent_dependentT},
  {"special-prop", CVAR, &YevalSastYspecial_prop},
  {"$sexpr-define-dynamic-tag", CVAR, &YevalSastYDsexpr_define_dynamic_tag},
  {"<global-assignment>", CVAR, &YevalSastYLglobal_assignmentG},
  {"ftype", CVAR, &YevalSastYftype},
  {"sequential", CVAR, &YevalSastYsequential},
  {"special-use-library", CVAR, &YevalSastYspecial_use_library},
  {"objectify-use-include", CVAR, &YevalSastYobjectify_use_include},
  {"probe-module", CVAR, &YevalSastYprobe_module},
  {"reference-called-function?", CVAR, &YevalSastYreference_called_functionQ},
  {"<bound?>", CVAR, &YevalSastYLboundQG},
  {"binding-mangled-name-setter", CVAR, &YevalSastYbinding_mangled_name_setter},
  {"function-source-setter", CVAR, &YevalSastYfunction_source_setter},
  {"assignment-reference", CVAR, &YevalSastYassignment_reference},
  {"function-nary?", CVAR, &YevalSastYfunction_naryQ},
  {"$sexpr-define-primitive-tag", CVAR, &YevalSastYDsexpr_define_primitive_tag},
  {"$sexpr-compile-time-tag", CVAR, &YevalSastYDsexpr_compile_time_tag},
  {"compute-transitive-users", CVAR, &YevalSastYcompute_transitive_users},
  {"objectify-function-source", CVAR, &YevalSastYobjectify_function_source},
  {"application-arguments-setter", CVAR, &YevalSastYapplication_arguments_setter},
  {"default-type", CVAR, &YevalSastYdefault_type},
  {"remove-module-internal!", CVAR, &YevalSastYremove_module_internalX},
  {"update-binding-kind", CVAR, &YevalSastYupdate_binding_kind},
  {"objectify-definition", CVAR, &YevalSastYobjectify_definition},
  {"module-uses-c-files", CVAR, &YevalSastYmodule_uses_c_files},
  {"binding-locative-setter", CVAR, &YevalSastYbinding_locative_setter},
  {"module-uses-c-files-setter", CVAR, &YevalSastYmodule_uses_c_files_setter},
  {"module-loader-stack", CVAR, &YevalSastYmodule_loader_stack},
  {"application-function", CVAR, &YevalSastYapplication_function},
  {"special-set", CVAR, &YevalSastYspecial_set},
  {"ast-evaluate", CVAR, &YevalSastYast_evaluate},
  {"application-next-methods-setter", CVAR, &YevalSastYapplication_next_methods_setter},
  {"$fab-list-empty", CVAR, &YevalSastYDfab_list_empty},
  {"module-syntax-environment-setter", CVAR, &YevalSastYmodule_syntax_environment_setter},
  {"binding-module", CVAR, &YevalSastYbinding_module},
  {"%module-exports", CVAR, &YevalSastYPmodule_exports},
  {"module-binding", CVAR, &YevalSastYmodule_binding},
  {"module-data-processed?", CVAR, &YevalSastYmodule_data_processedQ},
  {"environment-module", CVAR, &YevalSastYenvironment_module},
  {"module-runtime-data", CVAR, &YevalSastYmodule_runtime_data},
  {"program-type-setter", CVAR, &YevalSastYprogram_type_setter},
  {"application-next-methods", CVAR, &YevalSastYapplication_next_methods},
  {"$empty-static-environment", CVAR, &YevalSastYDempty_static_environment},
  {"module-mangled-name-setter", CVAR, &YevalSastYmodule_mangled_name_setter},
  {"module-mangled-string-name", CVAR, &YevalSastYmodule_mangled_string_name},
  {"free-environment", CVAR, &YevalSastYfree_environment},
  {"environment-module-loader-setter", CVAR, &YevalSastYenvironment_module_loader_setter},
  {"module-target-environment-setter", CVAR, &YevalSastYmodule_target_environment_setter},
  {"%module-exports-setter", CVAR, &YevalSastYPmodule_exports_setter},
  {"objectify-export", CVAR, &YevalSastYobjectify_export},
  {"monitor-info-setter", CVAR, &YevalSastYmonitor_info_setter},
  {"special-compile-time", CVAR, &YevalSastYspecial_compile_time},
  {"transaction-implemented-bindings", CVAR, &YevalSastYtransaction_implemented_bindings},
  {"application-tail?-setter", CVAR, &YevalSastYapplication_tailQ_setter},
  {"special-define", CVAR, &YevalSastYspecial_define},
  {"global-box-value", CVAR, &YevalSastYglobal_box_value},
  {"unwind-protect-cleanup-thunk", CVAR, &YevalSastYunwind_protect_cleanup_thunk},
  {"install-initial-bindings", CVAR, &YevalSastYinstall_initial_bindings},
  {"monitor-main-thunk", CVAR, &YevalSastYmonitor_main_thunk},
  {"<ast-primitive>", CVAR, &YevalSastYLast_primitiveG},
  {"transaction-dependents-setter", CVAR, &YevalSastYtransaction_dependents_setter},
  {"function-self-recursive?", CVAR, &YevalSastYfunction_self_recursiveQ},
  {"binding-global-box", CVAR, &YevalSastYbinding_global_box},
  {"objectify-unwind-protect", CVAR, &YevalSastYobjectify_unwind_protect},
  {"init-runtime", CVAR, &YevalSastYinit_runtime},
  {"fix-let-bindings-setter", CVAR, &YevalSastYfix_let_bindings_setter},
  {"report-undefined-global-bindings", CVAR, &YevalSastYreport_undefined_global_bindings},
  {"<programs>", CVAR, &YevalSastYLprogramsG},
  {"<runtime-reference>", CVAR, &YevalSastYLruntime_referenceG},
  {"objectify-compile-time", CVAR, &YevalSastYobjectify_compile_time},
  {"find-binding", CVAR, &YevalSastYfind_binding},
  {"fab-list", CVAR, &YevalSastYfab_list},
  {"merge-transactions!", CVAR, &YevalSastYmerge_transactionsX},
  {"$sexpr-define-static-syntax-tag", CVAR, &YevalSastYDsexpr_define_static_syntax_tag},
  {"monitor-type", CVAR, &YevalSastYmonitor_type},
  {"module-mangled-name", CVAR, &YevalSastYmodule_mangled_name},
  {"objectify-free-global-reference", CVAR, &YevalSastYobjectify_free_global_reference},
  {"<assignment>", CVAR, &YevalSastYLassignmentG},
  {"as-lst", CVAR, &YevalSastYas_lst},
  {"reloader-do-other-binding", CVAR, &YevalSastYreloader_do_other_binding},
  {"<variable-definition>", CVAR, &YevalSastYLvariable_definitionG},
  {"function-specs", CVAR, &YevalSastYfunction_specs},
  {"binding-module-name", CVAR, &YevalSastYbinding_module_name},
  {"binding-type", CVAR, &YevalSastYbinding_type},
  {"<functions>", CVAR, &YevalSastYLfunctionsG},
  {"reference-binding-setter", CVAR, &YevalSastYreference_binding_setter},
  {"special-use-include", CVAR, &YevalSastYspecial_use_include},
  {"objectify-locals", CVAR, &YevalSastYobjectify_locals},
  {"<ast-function>", CVAR, &YevalSastYLast_functionG},
  {"constant-index", CVAR, &YevalSastYconstant_index},
  {"assignment-form", CVAR, &YevalSastYassignment_form},
  {"do-static-global-bindings", CVAR, &YevalSastYdo_static_global_bindings},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"fix-let-body-setter", "fix-let-body-setter"},
  {"<module-binding-reference>", "<module-binding-reference>"},
  {"fix-let-types-setter", "fix-let-types-setter"},
  {"<dynamic-assignment>", "<dynamic-assignment>"},
  {"fix-let-arguments-setter", "fix-let-arguments-setter"},
  {"function-index-setter", "function-index-setter"},
  {"monitor-handler", "monitor-handler"},
  {"monitor-info", "monitor-info"},
  {"binding-kind", "binding-kind"},
  {"<application>", "<application>"},
  {"function-signature-setter", "function-signature-setter"},
  {"sequentialize", "sequentialize"},
  {"module-name-to-relpath", "module-name-to-relpath"},
  {"program-type", "program-type"},
  {"binding-mangled-name", "binding-mangled-name"},
  {"<ast-primitive-definition>", "<ast-primitive-definition>"},
  {"<local-assignment>", "<local-assignment>"},
  {"application-arguments", "application-arguments"},
  {"binding-global-box", "binding-global-box"},
  {"function-registers-setter", "function-registers-setter"},
  {"<binding>", "<binding>"},
  {"module-target-environment", "module-target-environment"},
  {"ast-error", "ast-error"},
  {"binding-native-to?", "binding-native-to?"},
  {"<module>", "<module>"},
  {"function-bindings", "function-bindings"},
  {"objectify-quotation", "objectify-quotation"},
  {"<low-let>", "<low-let>"},
  {"<regular-application>", "<regular-application>"},
  {"<module-loader>", "<module-loader>"},
  {"function-free", "function-free"},
  {"<static-global-environment>", "<static-global-environment>"},
  {"<fix-let>", "<fix-let>"},
  {"monitor-test", "monitor-test"},
  {"application-tail?", "application-tail?"},
  {"find-environment-module", "find-environment-module"},
  {"module-syntax-environment", "module-syntax-environment"},
  {"unwind-protect-cleanup-thunk", "unwind-protect-cleanup-thunk"},
  {"monitor-type", "monitor-type"},
  {"fix-let-bindings", "fix-let-bindings"},
  {"program-register-setter", "program-register-setter"},
  {"binding-index-setter", "binding-index-setter"},
  {"objectify-signature", "objectify-signature"},
  {"<static-module-binding-reference>", "<static-module-binding-reference>"},
  {"function-source", "function-source"},
  {"<local-reference>", "<local-reference>"},
  {"module-loader-module-type", "module-loader-module-type"},
  {"application-binding", "application-binding"},
  {"function-debug-name-setter", "function-debug-name-setter"},
  {"<compile-time>", "<compile-time>"},
  {"fix-let-body", "fix-let-body"},
  {"signature-arity-setter", "signature-arity-setter"},
  {"fix-let-types", "fix-let-types"},
  {"function-frame-len-setter", "function-frame-len-setter"},
  {"<module-binding>", "<module-binding>"},
  {"fix-let-arguments", "fix-let-arguments"},
  {"compile-time-program", "compile-time-program"},
  {"function-index", "function-index"},
  {"<predefined-application>", "<predefined-application>"},
  {"<dynamic-definition>", "<dynamic-definition>"},
  {"<ast-generic>", "<ast-generic>"},
  {"binding-locative", "binding-locative"},
  {"module-binding", "module-binding"},
  {"application-function", "application-function"},
  {"ast-walk", "ast-walk"},
  {"binding-info-setter", "binding-info-setter"},
  {"environment-uses-modules", "environment-uses-modules"},
  {"function-signature", "function-signature"},
  {"binding-value-setter", "binding-value-setter"},
  {"<global-box>", "<global-box>"},
  {"<ast-macro-definition>", "<ast-macro-definition>"},
  {"binding-dotted?-setter", "binding-dotted?-setter"},
  {"function-registers", "function-registers"},
  {"<immediate-constant>", "<immediate-constant>"},
  {"set-module-environments", "set-module-environments"},
  {"<sequential>", "<sequential>"},
  {"ast-define-binding", "ast-define-binding"},
  {"signature-nary?-setter", "signature-nary?-setter"},
  {"binding-dynamic-extent?-setter", "binding-dynamic-extent?-setter"},
  {"reference-frame-offset", "reference-frame-offset"},
  {"<local-binding>", "<local-binding>"},
  {"locals-bindings-setter", "locals-bindings-setter"},
  {"environment-bindings", "environment-bindings"},
  {"objectify-with-subtransaction", "objectify-with-subtransaction"},
  {"<reference>", "<reference>"},
  {"constant-index-setter", "constant-index-setter"},
  {"signature-bindings-setter", "signature-bindings-setter"},
  {"<real-reference>", "<real-reference>"},
  {"probe-module", "probe-module"},
  {"function-data-refs-setter", "function-data-refs-setter"},
  {"program-register", "program-register"},
  {"function-body-setter", "function-body-setter"},
  {"binding-index", "binding-index"},
  {"signature-specs-setter", "signature-specs-setter"},
  {"module-uses-c-libraries", "module-uses-c-libraries"},
  {"function-value", "function-value"},
  {"init-ast", "init-ast"},
  {"locals-functions-setter", "locals-functions-setter"},
  {"signature-names-setter", "signature-names-setter"},
  {"function-frame-len", "function-frame-len"},
  {"function-binding", "function-binding"},
  {"function-debug-name", "function-debug-name"},
  {"signature-value", "signature-value"},
  {"signature-arity", "signature-arity"},
  {"<constant>", "<constant>"},
  {"locals-body-setter", "locals-body-setter"},
  {"binding-global-box-setter", "binding-global-box-setter"},
  {"<program>", "<program>"},
  {"function-adjectives", "function-adjectives"},
  {"program-line", "program-line"},
  {"<definition>", "<definition>"},
  {"def-programs", "def-programs"},
  {"application-known?-setter", "application-known?-setter"},
  {"<alternative>", "<alternative>"},
  {"<runtime-assignment>", "<runtime-assignment>"},
  {"binding-info", "binding-info"},
  {"def-list", "def-list"},
  {"binding-value", "binding-value"},
  {"alternative-condition", "alternative-condition"},
  {"constant-value", "constant-value"},
  {"module-uses-c-includes", "module-uses-c-includes"},
  {"binding-dotted?", "binding-dotted?"},
  {"<macro-reference>", "<macro-reference>"},
  {"<ast-signature>", "<ast-signature>"},
  {"<ast-method>", "<ast-method>"},
  {"<global-reference>", "<global-reference>"},
  {"function-temporaries-setter", "function-temporaries-setter"},
  {"<locals>", "<locals>"},
  {"remove-modules-by-name!", "remove-modules-by-name!"},
  {"assignment-binding", "assignment-binding"},
  {"signature-nary?", "signature-nary?"},
  {"binding-dynamic-extent?", "binding-dynamic-extent?"},
  {"binding-mutable?", "binding-mutable?"},
  {"fab-g2c-module", "fab-g2c-module"},
  {"<arguments>", "<arguments>"},
  {"module-mangled-string-name-setter", "module-mangled-string-name-setter"},
  {"locals-bindings", "locals-bindings"},
  {"module-exports", "module-exports"},
  {"binding-inferred-type-setter", "binding-inferred-type-setter"},
  {"alternative-consequent", "alternative-consequent"},
  {"constant-index", "constant-index"},
  {"runtime-environment", "runtime-environment"},
  {"alternative-alternant", "alternative-alternant"},
  {"<raw-constant>", "<raw-constant>"},
  {"<dynamic-reference>", "<dynamic-reference>"},
  {"<computed-program>", "<computed-program>"},
  {"signature-bindings", "signature-bindings"},
  {"function-data-refs", "function-data-refs"},
  {"<free-environment>", "<free-environment>"},
  {"reference-frame-number", "reference-frame-number"},
  {"function-body", "function-body"},
  {"module-name", "module-name"},
  {"signature-specs", "signature-specs"},
  {"<bind-exit>", "<bind-exit>"},
  {"locals-functions", "locals-functions"},
  {"reference-binding", "reference-binding"},
  {"signature-names", "signature-names"},
  {"global-box-value-setter", "global-box-value-setter"},
  {"bind-exit-main-fun", "bind-exit-main-fun"},
  {"load-in", "load-in"},
  {"function-self-recursive?-setter", "function-self-recursive?-setter"},
  {"<fab-list>", "<fab-list>"},
  {"<magic-reference>", "<magic-reference>"},
  {"reference-called-function?-setter", "reference-called-function?-setter"},
  {"locals-body", "locals-body"},
  {"module-mangled-name-setter", "module-mangled-name-setter"},
  {"%%macro", "%%macro"},
  {"application-known?", "application-known?"},
  {"binding-type-setter", "binding-type-setter"},
  {"binding-name", "binding-name"},
  {"env-object-name", "env-object-name"},
  {"binding-type", "binding-type"},
  {"binding-inferred-type", "binding-inferred-type"},
  {"init-environment-for-eval", "init-environment-for-eval"},
  {"assignment-form-setter", "assignment-form-setter"},
  {"<unwind-protect>", "<unwind-protect>"},
  {"ast-walk!", "ast-walk!"},
  {"do-static-global-bindings", "do-static-global-bindings"},
  {"unchecked-runtime-environment", "unchecked-runtime-environment"},
  {"do-named-static-global-bindings", "do-named-static-global-bindings"},
  {"unwind-protect-protected-thunk", "unwind-protect-protected-thunk"},
  {"$goo-boot-module-name", "$goo-boot-module-name"},
  {"load-module", "load-module"},
  {"function-temporaries", "function-temporaries"},
  {"<global-assignment>", "<global-assignment>"},
  {"reference-called-function?", "reference-called-function?"},
  {"<bound?>", "<bound?>"},
  {"binding-mangled-name-setter", "binding-mangled-name-setter"},
  {"assignment-reference", "assignment-reference"},
  {"function-nary?", "function-nary?"},
  {"module-mangled-string-name", "module-mangled-string-name"},
  {"module-uses-c-files", "module-uses-c-files"},
  {"binding-locative-setter", "binding-locative-setter"},
  {"bound?-reference", "bound?-reference"},
  {"<passive-program>", "<passive-program>"},
  {"do-module-loader-modules", "do-module-loader-modules"},
  {"ast-evaluate", "ast-evaluate"},
  {"binding-module", "binding-module"},
  {"environment-module", "environment-module"},
  {"program-type-setter", "program-type-setter"},
  {"free-environment", "free-environment"},
  {"signature-value-setter", "signature-value-setter"},
  {"function-free-setter", "function-free-setter"},
  {"global-box-value", "global-box-value"},
  {"install-initial-bindings", "install-initial-bindings"},
  {"monitor-main-thunk", "monitor-main-thunk"},
  {"<ast-primitive>", "<ast-primitive>"},
  {"function-self-recursive?", "function-self-recursive?"},
  {"<monitor>", "<monitor>"},
  {"fix-let-bindings-setter", "fix-let-bindings-setter"},
  {"report-undefined-global-bindings", "report-undefined-global-bindings"},
  {"<programs>", "<programs>"},
  {"<runtime-reference>", "<runtime-reference>"},
  {"find-binding", "find-binding"},
  {"module-mangled-name", "module-mangled-name"},
  {"<assignment>", "<assignment>"},
  {"as-lst", "as-lst"},
  {"binding-module-name", "binding-module-name"},
  {"function-source-setter", "function-source-setter"},
  {"<ast-function>", "<ast-function>"},
  {"assignment-form", "assignment-form"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSast;
MODULE_INFO module_info_evalSast = {
  "eval/ast",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_gooSsystem (void);
extern void load_module_gooScolsSlst (void);
extern void load_module_gooSioSread (void);
extern void load_module_evalSsyntax (void);
extern void load_module_evalSdependency (void);

/* EXPRESSION: */

extern void load_module_evalSast (void);

void load_module_evalSast (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_gooSsystem();
  load_module_gooScolsSlst();
  load_module_gooSioSread();
  load_module_evalSsyntax();
  load_module_evalSdependency();

  (P)YevalSastY___main_0___();
  (P)YevalSastY___main_1___();
  (P)YevalSastY___main_2___();
  (P)YevalSastY___main_3___();
  (P)YevalSastY___main_4___();
  (P)YevalSastY___main_5___();
  (P)YevalSastY___main_6___();
  (P)YevalSastY___main_7___();
  (P)YevalSastY___main_8___();
  (P)YevalSastY___main_9___();
  (P)YevalSastY___main_10___();

}

/* END OF GENERATED CODE. */
